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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004a13b };

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
0x7ea5,	// (0x00051fe0) Screen

0x7eb9,	// (0x00051ff4) application_window_ParamLimits

0x7eb9,	// (0x00051ff4) application_window

0x7ed3,	// (0x0005200e) screen_g1

0x4885,	// (0x0004e9c0) area_bottom_pane_ParamLimits

0x4885,	// (0x0004e9c0) area_bottom_pane

0x4945,	// (0x0004ea80) area_top_pane_ParamLimits

0x4945,	// (0x0004ea80) area_top_pane

0x49e3,	// (0x0004eb1e) main_pane_ParamLimits

0x49e3,	// (0x0004eb1e) main_pane

0x7edd,	// (0x00052018) misc_graphics

0x989f,	// (0x000539da) battery_pane_ParamLimits

0x989f,	// (0x000539da) battery_pane

0xa56d,	// (0x000546a8) bg_status_flat_pane_g8

0xa575,	// (0x000546b0) bg_status_flat_pane_g9

0x996d,	// (0x00053aa8) context_pane_ParamLimits

0x996d,	// (0x00053aa8) context_pane

0x9a83,	// (0x00053bbe) navi_pane_ParamLimits

0x9a83,	// (0x00053bbe) navi_pane

0x9b07,	// (0x00053c42) signal_pane_ParamLimits

0x9b07,	// (0x00053c42) signal_pane

0x0008,

0xf87e,	// (0x000599b9) bg_status_flat_pane_g

0x9b74,	// (0x00053caf) status_pane_g1_ParamLimits

0x9b74,	// (0x00053caf) status_pane_g1

0x9b88,	// (0x00053cc3) status_pane_g2_ParamLimits

0x9b88,	// (0x00053cc3) status_pane_g2

0x9b94,	// (0x00053ccf) status_pane_g3_ParamLimits

0x9b94,	// (0x00053ccf) status_pane_g3

0x0004,

0xf7a5,	// (0x000598e0) status_pane_g_ParamLimits

0xf7a5,	// (0x000598e0) status_pane_g

0x9bc8,	// (0x00053d03) title_pane_ParamLimits

0x9bc8,	// (0x00053d03) title_pane

0x9c05,	// (0x00053d40) uni_indicator_pane_ParamLimits

0x9c05,	// (0x00053d40) uni_indicator_pane

0x97c3,	// (0x000538fe) bg_list_pane_ParamLimits

0x97c3,	// (0x000538fe) bg_list_pane

0x754a,	// (0x00051685) find_pane

0x97e3,	// (0x0005391e) listscroll_app_pane_ParamLimits

0x97e3,	// (0x0005391e) listscroll_app_pane

0x97ef,	// (0x0005392a) listscroll_form_pane

0x5a12,	// (0x0004fb4d) listscroll_gen_pane_ParamLimits

0x5a12,	// (0x0004fb4d) listscroll_gen_pane

0x5a26,	// (0x0004fb61) listscroll_set_pane

0x8a0d,	// (0x00052b48) main_idle_act_pane

0x94bf,	// (0x000535fa) main_idle_trad_pane

0x94bf,	// (0x000535fa) main_list_empty_pane

0x9809,	// (0x00053944) main_midp_pane

0x9815,	// (0x00053950) main_pane_g1_ParamLimits

0x9815,	// (0x00053950) main_pane_g1

0x5a3c,	// (0x0004fb77) popup_ai_message_window_ParamLimits

0x5a3c,	// (0x0004fb77) popup_ai_message_window

0x5aea,	// (0x0004fc25) popup_fep_china_uni_window_ParamLimits

0x5aea,	// (0x0004fc25) popup_fep_china_uni_window

0x5b46,	// (0x0004fc81) popup_fep_japan_candidate_window_ParamLimits

0x5b46,	// (0x0004fc81) popup_fep_japan_candidate_window

0x5b66,	// (0x0004fca1) popup_fep_japan_predictive_window_ParamLimits

0x5b66,	// (0x0004fca1) popup_fep_japan_predictive_window

0x5b96,	// (0x0004fcd1) popup_find_window

0x5ba3,	// (0x0004fcde) popup_grid_graphic_window_ParamLimits

0x5ba3,	// (0x0004fcde) popup_grid_graphic_window

0x5bcd,	// (0x0004fd08) popup_large_graphic_colour_window

0x5bf3,	// (0x0004fd2e) popup_menu_window_ParamLimits

0x5bf3,	// (0x0004fd2e) popup_menu_window

0x5dab,	// (0x0004fee6) popup_note_image_window

0x5d97,	// (0x0004fed2) popup_note_wait_window_ParamLimits

0x5d97,	// (0x0004fed2) popup_note_wait_window

0x5d97,	// (0x0004fed2) popup_note_window_ParamLimits

0x5d97,	// (0x0004fed2) popup_note_window

0x5e01,	// (0x0004ff3c) popup_query_code_window_ParamLimits

0x5e01,	// (0x0004ff3c) popup_query_code_window

0x5e15,	// (0x0004ff50) popup_query_data_code_window_ParamLimits

0x5e15,	// (0x0004ff50) popup_query_data_code_window

0x5e32,	// (0x0004ff6d) popup_query_data_window_ParamLimits

0x5e32,	// (0x0004ff6d) popup_query_data_window

0x5e4e,	// (0x0004ff89) popup_query_sat_info_window_ParamLimits

0x5e4e,	// (0x0004ff89) popup_query_sat_info_window

0x5e87,	// (0x0004ffc2) popup_snote_single_graphic_window_ParamLimits

0x5e87,	// (0x0004ffc2) popup_snote_single_graphic_window

0x5e87,	// (0x0004ffc2) popup_snote_single_text_window_ParamLimits

0x5e87,	// (0x0004ffc2) popup_snote_single_text_window

0x5e9c,	// (0x0004ffd7) popup_sub_window_general

0x5fcc,	// (0x00050107) popup_window_general_ParamLimits

0x5fcc,	// (0x00050107) popup_window_general

0x9823,	// (0x0005395e) power_save_pane

0x58a4,	// (0x0004f9df) control_pane_g1_ParamLimits

0x58a4,	// (0x0004f9df) control_pane_g1

0x58cb,	// (0x0004fa06) control_pane_g2_ParamLimits

0x58cb,	// (0x0004fa06) control_pane_g2

0x9786,	// (0x000538c1) control_pane_g3_ParamLimits

0x9786,	// (0x000538c1) control_pane_g3

0x0007,

0xf78d,	// (0x000598c8) control_pane_g_ParamLimits

0xf78d,	// (0x000598c8) control_pane_g

0x5915,	// (0x0004fa50) control_pane_t1_ParamLimits

0x5915,	// (0x0004fa50) control_pane_t1

0x5969,	// (0x0004faa4) control_pane_t2_ParamLimits

0x5969,	// (0x0004faa4) control_pane_t2

0x0002,

0xf79e,	// (0x000598d9) control_pane_t_ParamLimits

0xf79e,	// (0x000598d9) control_pane_t

0x96ab,	// (0x000537e6) navi_navi_volume_pane_cp1

0x96b3,	// (0x000537ee) status_small_icon_pane

0x96bb,	// (0x000537f6) status_small_pane_g1_ParamLimits

0x96bb,	// (0x000537f6) status_small_pane_g1

0x96ef,	// (0x0005382a) status_small_pane_g2_ParamLimits

0x96ef,	// (0x0005382a) status_small_pane_g2

0x96fb,	// (0x00053836) status_small_pane_g3_ParamLimits

0x96fb,	// (0x00053836) status_small_pane_g3

0x9707,	// (0x00053842) status_small_pane_g4_ParamLimits

0x9707,	// (0x00053842) status_small_pane_g4

0x9713,	// (0x0005384e) status_small_pane_g5_ParamLimits

0x9713,	// (0x0005384e) status_small_pane_g5

0x9721,	// (0x0005385c) status_small_pane_g6_ParamLimits

0x9721,	// (0x0005385c) status_small_pane_g6

0x0007,

0xf77c,	// (0x000598b7) status_small_pane_g_ParamLimits

0xf77c,	// (0x000598b7) status_small_pane_g

0x9750,	// (0x0005388b) status_small_pane_t1

0x9772,	// (0x000538ad) status_small_wait_pane_ParamLimits

0x9772,	// (0x000538ad) status_small_wait_pane

0x8f31,	// (0x0005306c) aid_levels_signal_ParamLimits

0x8f31,	// (0x0005306c) aid_levels_signal

0x8f43,	// (0x0005307e) signal_pane_g1_ParamLimits

0x8f43,	// (0x0005307e) signal_pane_g1

0x8f58,	// (0x00053093) signal_pane_g2_ParamLimits

0x8f58,	// (0x00053093) signal_pane_g2

0x0003,

0xf70d,	// (0x00059848) signal_pane_g_ParamLimits

0xf70d,	// (0x00059848) signal_pane_g

0x8f93,	// (0x000530ce) context_pane_g1

0x7ee7,	// (0x00052022) title_pane_g1

0x7f1d,	// (0x00052058) title_pane_t1

0x7f85,	// (0x000520c0) title_pane_t2

0x7fab,	// (0x000520e6) title_pane_t3

0x0002,

0xf557,	// (0x00059692) title_pane_t

0x9c1d,	// (0x00053d58) aid_levels_battery_ParamLimits

0x9c1d,	// (0x00053d58) aid_levels_battery

0x9c31,	// (0x00053d6c) battery_pane_g1_ParamLimits

0x9c31,	// (0x00053d6c) battery_pane_g1

0x9c47,	// (0x00053d82) battery_pane_g2_ParamLimits

0x9c47,	// (0x00053d82) battery_pane_g2

0x0001,

0xf7b0,	// (0x000598eb) battery_pane_g_ParamLimits

0xf7b0,	// (0x000598eb) battery_pane_g

0xaea3,	// (0x00054fde) uni_indicator_pane_g1

0xaeb9,	// (0x00054ff4) uni_indicator_pane_g2

0xaecf,	// (0x0005500a) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00059a61) uni_indicator_pane_g

0x9331,	// (0x0005346c) navi_icon_pane_ParamLimits

0x9331,	// (0x0005346c) navi_icon_pane

0x926f,	// (0x000533aa) navi_midp_pane

0x934d,	// (0x00053488) navi_navi_pane

0x9357,	// (0x00053492) navi_text_pane_ParamLimits

0x9357,	// (0x00053492) navi_text_pane

0x7ed3,	// (0x0005200e) status_small_wait_pane_g1

0x83da,	// (0x00052515) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00059a5c) status_small_wait_pane_g

0xabc8,	// (0x00054d03) navi_navi_icon_text_pane

0xabd0,	// (0x00054d0b) navi_navi_pane_g1_ParamLimits

0xabd0,	// (0x00054d0b) navi_navi_pane_g1

0xabe2,	// (0x00054d1d) navi_navi_pane_g2_ParamLimits

0xabe2,	// (0x00054d1d) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00059a2a) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00059a2a) navi_navi_pane_g

0xabf4,	// (0x00054d2f) navi_navi_tabs_pane

0xabfd,	// (0x00054d38) navi_navi_text_pane

0xabc8,	// (0x00054d03) navi_navi_volume_pane

0xaba4,	// (0x00054cdf) navi_text_pane_t1

0xab98,	// (0x00054cd3) navi_icon_pane_g1

0xaaeb,	// (0x00054c26) navi_navi_text_pane_t1

0x62c2,	// (0x000503fd) navi_navi_volume_pane_g1

0x62ca,	// (0x00050405) volume_small_pane

0xaa51,	// (0x00054b8c) navi_navi_icon_text_pane_g1

0xaa59,	// (0x00054b94) navi_navi_icon_text_pane_t1

0x934d,	// (0x00053488) navi_tabs_2_long_pane

0x934d,	// (0x00053488) navi_tabs_2_pane

0x934d,	// (0x00053488) navi_tabs_3_long_pane

0x934d,	// (0x00053488) navi_tabs_3_pane

0x934d,	// (0x00053488) navi_tabs_4_pane

0x62a2,	// (0x000503dd) tabs_2_active_pane_ParamLimits

0x62a2,	// (0x000503dd) tabs_2_active_pane

0x62b2,	// (0x000503ed) tabs_2_passive_pane_ParamLimits

0x62b2,	// (0x000503ed) tabs_2_passive_pane

0x6270,	// (0x000503ab) tabs_3_active_pane_ParamLimits

0x6270,	// (0x000503ab) tabs_3_active_pane

0x6280,	// (0x000503bb) tabs_3_passive_pane_ParamLimits

0x6280,	// (0x000503bb) tabs_3_passive_pane

0x6291,	// (0x000503cc) tabs_3_passive_pane_cp_ParamLimits

0x6291,	// (0x000503cc) tabs_3_passive_pane_cp

0x622c,	// (0x00050367) tabs_4_active_pane_ParamLimits

0x622c,	// (0x00050367) tabs_4_active_pane

0x623d,	// (0x00050378) tabs_4_passive_pane_ParamLimits

0x623d,	// (0x00050378) tabs_4_passive_pane

0x624e,	// (0x00050389) tabs_4_passive_pane_cp_ParamLimits

0x624e,	// (0x00050389) tabs_4_passive_pane_cp

0x625f,	// (0x0005039a) tabs_4_passive_pane_cp2_ParamLimits

0x625f,	// (0x0005039a) tabs_4_passive_pane_cp2

0x6208,	// (0x00050343) tabs_2_long_active_pane_ParamLimits

0x6208,	// (0x00050343) tabs_2_long_active_pane

0x621a,	// (0x00050355) tabs_2_long_passive_pane_ParamLimits

0x621a,	// (0x00050355) tabs_2_long_passive_pane

0x61c9,	// (0x00050304) tabs_3_long_active_pane_ParamLimits

0x61c9,	// (0x00050304) tabs_3_long_active_pane

0x61dc,	// (0x00050317) tabs_3_long_passive_pane_ParamLimits

0x61dc,	// (0x00050317) tabs_3_long_passive_pane

0x61f5,	// (0x00050330) tabs_3_long_passive_pane_cp_ParamLimits

0x61f5,	// (0x00050330) tabs_3_long_passive_pane_cp

0x616f,	// (0x000502aa) volume_small_pane_g1

0x6178,	// (0x000502b3) volume_small_pane_g2

0x6181,	// (0x000502bc) volume_small_pane_g3

0x618a,	// (0x000502c5) volume_small_pane_g4

0x6193,	// (0x000502ce) volume_small_pane_g5

0x619c,	// (0x000502d7) volume_small_pane_g6

0x61a5,	// (0x000502e0) volume_small_pane_g7

0x61ae,	// (0x000502e9) volume_small_pane_g8

0x61b7,	// (0x000502f2) volume_small_pane_g9

0x61c0,	// (0x000502fb) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x000599f6) volume_small_pane_g

0x7fbd,	// (0x000520f8) bg_active_tab_pane_cp2_ParamLimits

0x7fbd,	// (0x000520f8) bg_active_tab_pane_cp2

0x7fcb,	// (0x00052106) tabs_3_active_pane_g1

0x7fd3,	// (0x0005210e) tabs_3_active_pane_t1

0x7fbd,	// (0x000520f8) bg_passive_tab_pane_cp2_ParamLimits

0x7fbd,	// (0x000520f8) bg_passive_tab_pane_cp2

0x7fcb,	// (0x00052106) tabs_3_passive_pane_g1

0x7fd3,	// (0x0005210e) tabs_3_passive_pane_t1

0x7fbd,	// (0x000520f8) bg_active_tab_pane_cp3_ParamLimits

0x7fbd,	// (0x000520f8) bg_active_tab_pane_cp3

0x7fe5,	// (0x00052120) tabs_4_active_pane_g1

0x7fed,	// (0x00052128) tabs_4_active_pane_t1

0x7fbd,	// (0x000520f8) bg_passive_tab_pane_cp3_ParamLimits

0x7fbd,	// (0x000520f8) bg_passive_tab_pane_cp3

0x7fe5,	// (0x00052120) tabs_4_1_passive_pane_g1

0x7fed,	// (0x00052128) tabs_4_1_passive_pane_t1

0x9809,	// (0x00053944) list_highlight_pane_cp2

0xb116,	// (0x00055251) list_set_pane_ParamLimits

0xb116,	// (0x00055251) list_set_pane

0xb1bc,	// (0x000552f7) main_pane_set_t1_ParamLimits

0xb1bc,	// (0x000552f7) main_pane_set_t1

0xb1dc,	// (0x00055317) main_pane_set_t2_ParamLimits

0xb1dc,	// (0x00055317) main_pane_set_t2

0xb1f0,	// (0x0005532b) main_pane_set_t3_ParamLimits

0xb1f0,	// (0x0005532b) main_pane_set_t3

0xb202,	// (0x0005533d) main_pane_set_t4_ParamLimits

0xb202,	// (0x0005533d) main_pane_set_t4

0x0003,

0xf98b,	// (0x00059ac6) main_pane_set_t_ParamLimits

0xf98b,	// (0x00059ac6) main_pane_set_t

0xb214,	// (0x0005534f) setting_code_pane

0xb220,	// (0x0005535b) setting_slider_graphic_pane

0xb220,	// (0x0005535b) setting_slider_pane

0xb220,	// (0x0005535b) setting_text_pane

0xb220,	// (0x0005535b) setting_volume_pane

0x4c32,	// (0x0004ed6d) volume_set_pane

0x7fbd,	// (0x000520f8) bg_set_opt_pane_cp

0x4c3a,	// (0x0004ed75) setting_slider_pane_t1

0x4c53,	// (0x0004ed8e) setting_slider_pane_t2

0x4c6d,	// (0x0004eda8) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00059699) setting_slider_pane_t

0x4c85,	// (0x0004edc0) slider_set_pane

0x7edd,	// (0x00052018) bg_set_opt_pane_cp2

0x7fff,	// (0x0005213a) setting_slider_graphic_pane_g1

0x4c9b,	// (0x0004edd6) setting_slider_graphic_pane_t1

0x4cab,	// (0x0004ede6) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000596a0) setting_slider_graphic_pane_t

0x4cbb,	// (0x0004edf6) slider_set_pane_cp

0x7edd,	// (0x00052018) input_focus_pane_cp1

0xb0d5,	// (0x00055210) list_set_text_pane

0x7ed3,	// (0x0005200e) setting_text_pane_g1

0x7edd,	// (0x00052018) input_focus_pane_cp2

0x7ed3,	// (0x0005200e) setting_code_pane_g1

0x8008,	// (0x00052143) setting_code_pane_t1

0x4cc3,	// (0x0004edfe) set_text_pane_t1_ParamLimits

0x4cc3,	// (0x0004edfe) set_text_pane_t1

0x8884,	// (0x000529bf) set_opt_bg_pane_g1

0x888c,	// (0x000529c7) set_opt_bg_pane_g2

0xb0af,	// (0x000551ea) set_opt_bg_pane_g3

0x889c,	// (0x000529d7) set_opt_bg_pane_g4

0x88a4,	// (0x000529df) set_opt_bg_pane_g5

0x88ac,	// (0x000529e7) set_opt_bg_pane_g6

0xb0b9,	// (0x000551f4) set_opt_bg_pane_g7

0xb0c1,	// (0x000551fc) set_opt_bg_pane_g8

0xb0cb,	// (0x00055206) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00059ab3) set_opt_bg_pane_g

0xb0a2,	// (0x000551dd) slider_set_pane_g1

0x6337,	// (0x00050472) slider_set_pane_g2

0x0006,

0xf969,	// (0x00059aa4) slider_set_pane_g

0x62d3,	// (0x0005040e) volume_set_pane_g1

0x62db,	// (0x00050416) volume_set_pane_g2

0x62e3,	// (0x0005041e) volume_set_pane_g3

0x62eb,	// (0x00050426) volume_set_pane_g4

0x62f3,	// (0x0005042e) volume_set_pane_g5

0x62fb,	// (0x00050436) volume_set_pane_g6

0x6303,	// (0x0005043e) volume_set_pane_g7

0x630b,	// (0x00050446) volume_set_pane_g8

0x6313,	// (0x0005044e) volume_set_pane_g9

0x631b,	// (0x00050456) volume_set_pane_g10

0x0009,

0xf941,	// (0x00059a7c) volume_set_pane_g

0x8016,	// (0x00052151) indicator_pane_ParamLimits

0x8016,	// (0x00052151) indicator_pane

0x8022,	// (0x0005215d) main_idle_pane_g2_ParamLimits

0x8022,	// (0x0005215d) main_idle_pane_g2

0x804a,	// (0x00052185) main_pane_idle_g1_ParamLimits

0x804a,	// (0x00052185) main_pane_idle_g1

0x8057,	// (0x00052192) popup_clock_digital_analogue_window_ParamLimits

0x8057,	// (0x00052192) popup_clock_digital_analogue_window

0x806e,	// (0x000521a9) soft_indicator_pane_ParamLimits

0x806e,	// (0x000521a9) soft_indicator_pane

0x807a,	// (0x000521b5) wallpaper_pane_ParamLimits

0x807a,	// (0x000521b5) wallpaper_pane

0x7ed3,	// (0x0005200e) wallpaper_pane_g1

0x808e,	// (0x000521c9) indicator_pane_g1_ParamLimits

0x808e,	// (0x000521c9) indicator_pane_g1

0xb484,	// (0x000555bf) navi_navi_icon_text_pane_srt_g1

0x80a9,	// (0x000521e4) soft_indicator_pane_t1

0x80c3,	// (0x000521fe) aid_ps_area_pane

0x80d4,	// (0x0005220f) aid_ps_clock_pane

0x80e2,	// (0x0005221d) aid_ps_indicator_pane

0x80ee,	// (0x00052229) indicator_ps_pane_ParamLimits

0x80ee,	// (0x00052229) indicator_ps_pane

0x80fd,	// (0x00052238) power_save_pane_g1_ParamLimits

0x80fd,	// (0x00052238) power_save_pane_g1

0x8109,	// (0x00052244) power_save_pane_g2_ParamLimits

0x8109,	// (0x00052244) power_save_pane_g2

0x4839,	// (0x0004e974) aid_navinavi_width_pane

0x80c3,	// (0x000521fe) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000596a5) power_save_pane_g_ParamLimits

0xf56a,	// (0x000596a5) power_save_pane_g

0x8117,	// (0x00052252) power_save_pane_t1_ParamLimits

0x8117,	// (0x00052252) power_save_pane_t1

0x80d4,	// (0x0005220f) aid_ps_clock_pane_ParamLimits

0x80e2,	// (0x0005221d) aid_ps_indicator_pane_ParamLimits

0x8129,	// (0x00052264) power_save_pane_t4_ParamLimits

0x8129,	// (0x00052264) power_save_pane_t4

0x0001,

0xf56f,	// (0x000596aa) power_save_pane_t_ParamLimits

0xf56f,	// (0x000596aa) power_save_pane_t

0x8153,	// (0x0005228e) power_save_t3_ParamLimits

0x8153,	// (0x0005228e) power_save_t3

0x813e,	// (0x00052279) power_save_t2_ParamLimits

0x813e,	// (0x00052279) power_save_t2

0x8168,	// (0x000522a3) indicator_ps_pane_g1

0x8171,	// (0x000522ac) ai_gene_pane_ParamLimits

0x8171,	// (0x000522ac) ai_gene_pane

0x817d,	// (0x000522b8) ai_links_pane_ParamLimits

0x817d,	// (0x000522b8) ai_links_pane

0x8189,	// (0x000522c4) indicator_pane_cp1_ParamLimits

0x8189,	// (0x000522c4) indicator_pane_cp1

0x8195,	// (0x000522d0) main_pane_idle_g1_cp_ParamLimits

0x8195,	// (0x000522d0) main_pane_idle_g1_cp

0x81a1,	// (0x000522dc) popup_ai_links_title_window

0x81aa,	// (0x000522e5) soft_indicator_pane_cp1_ParamLimits

0x81aa,	// (0x000522e5) soft_indicator_pane_cp1

0xae91,	// (0x00054fcc) ai_links_pane_g1

0xae9a,	// (0x00054fd5) grid_ai_links_pane

0xae74,	// (0x00054faf) ai_gene_pane_1

0xae7f,	// (0x00054fba) ai_gene_pane_2

0xae88,	// (0x00054fc3) list_highlight_pane_cp4

0xae58,	// (0x00054f93) cell_ai_link_pane_ParamLimits

0xae58,	// (0x00054f93) cell_ai_link_pane

0xae50,	// (0x00054f8b) cell_ai_link_pane_g1

0x83da,	// (0x00052515) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00059a57) cell_ai_link_pane_g

0x7edd,	// (0x00052018) grid_highlight_cp2

0x7edd,	// (0x00052018) bg_popup_sub_pane_cp1

0x81c4,	// (0x000522ff) popup_ai_links_title_window_t1

0xad9e,	// (0x00054ed9) ai_gene_pane_1_g1_ParamLimits

0xad9e,	// (0x00054ed9) ai_gene_pane_1_g1

0xadaa,	// (0x00054ee5) ai_gene_pane_1_g2_ParamLimits

0xadaa,	// (0x00054ee5) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00059a4d) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00059a4d) ai_gene_pane_1_g

0xadb7,	// (0x00054ef2) ai_gene_pane_1_t1_ParamLimits

0xadb7,	// (0x00054ef2) ai_gene_pane_1_t1

0xadeb,	// (0x00054f26) grid_ai_soft_ind_pane

0xad89,	// (0x00054ec4) ai_gene_pane_2_t1_ParamLimits

0xad89,	// (0x00054ec4) ai_gene_pane_2_t1

0x81d3,	// (0x0005230e) main_pane_empty_t1_ParamLimits

0x81d3,	// (0x0005230e) main_pane_empty_t1

0x81eb,	// (0x00052326) main_pane_empty_t2_ParamLimits

0x81eb,	// (0x00052326) main_pane_empty_t2

0x8200,	// (0x0005233b) main_pane_empty_t3_ParamLimits

0x8200,	// (0x0005233b) main_pane_empty_t3

0x8212,	// (0x0005234d) main_pane_empty_t4_ParamLimits

0x8212,	// (0x0005234d) main_pane_empty_t4

0x8224,	// (0x0005235f) main_pane_empty_t5_ParamLimits

0x8224,	// (0x0005235f) main_pane_empty_t5

0x0004,

0xf574,	// (0x000596af) main_pane_empty_t_ParamLimits

0xf574,	// (0x000596af) main_pane_empty_t

0x88d5,	// (0x00052a10) bg_popup_window_pane_ParamLimits

0x88d5,	// (0x00052a10) bg_popup_window_pane

0xaaf9,	// (0x00054c34) find_popup_pane_cp2_ParamLimits

0xaaf9,	// (0x00054c34) find_popup_pane_cp2

0xab05,	// (0x00054c40) heading_pane_ParamLimits

0xab05,	// (0x00054c40) heading_pane

0x7edd,	// (0x00052018) bg_popup_sub_pane

0xaa73,	// (0x00054bae) bg_popup_window_pane_g1_ParamLimits

0xaa73,	// (0x00054bae) bg_popup_window_pane_g1

0xaa7f,	// (0x00054bba) bg_popup_window_pane_g2_ParamLimits

0xaa7f,	// (0x00054bba) bg_popup_window_pane_g2

0xaa8b,	// (0x00054bc6) bg_popup_window_pane_g3_ParamLimits

0xaa8b,	// (0x00054bc6) bg_popup_window_pane_g3

0xaa97,	// (0x00054bd2) bg_popup_window_pane_g4_ParamLimits

0xaa97,	// (0x00054bd2) bg_popup_window_pane_g4

0xaaa3,	// (0x00054bde) bg_popup_window_pane_g5_ParamLimits

0xaaa3,	// (0x00054bde) bg_popup_window_pane_g5

0xaaaf,	// (0x00054bea) bg_popup_window_pane_g6_ParamLimits

0xaaaf,	// (0x00054bea) bg_popup_window_pane_g6

0xaabb,	// (0x00054bf6) bg_popup_window_pane_g7_ParamLimits

0xaabb,	// (0x00054bf6) bg_popup_window_pane_g7

0xaac7,	// (0x00054c02) bg_popup_window_pane_g8_ParamLimits

0xaac7,	// (0x00054c02) bg_popup_window_pane_g8

0xaad3,	// (0x00054c0e) bg_popup_window_pane_g9_ParamLimits

0xaad3,	// (0x00054c0e) bg_popup_window_pane_g9

0xaadf,	// (0x00054c1a) bg_popup_window_pane_g10_ParamLimits

0xaadf,	// (0x00054c1a) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00059a15) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00059a15) bg_popup_window_pane_g

0xaa08,	// (0x00054b43) bg_popup_heading_pane_ParamLimits

0xaa08,	// (0x00054b43) bg_popup_heading_pane

0x63bf,	// (0x000504fa) tabs_4_passive_pane_cp_srt_ParamLimits

0x63bf,	// (0x000504fa) tabs_4_passive_pane_cp_srt

0x63d1,	// (0x0005050c) tabs_4_passive_pane_srt_ParamLimits

0xaa1c,	// (0x00054b57) heading_pane_g2

0x63d1,	// (0x0005050c) tabs_4_passive_pane_srt

0x9809,	// (0x00053944) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9809,	// (0x00053944) bg_passive_tab_pane_cp3_srt

0xaa24,	// (0x00054b5f) heading_pane_t1_ParamLimits

0xaa24,	// (0x00054b5f) heading_pane_t1

0xaa3b,	// (0x00054b76) heading_pane_t2_ParamLimits

0xaa3b,	// (0x00054b76) heading_pane_t2

0x0001,

0xf8d5,	// (0x00059a10) heading_pane_t_ParamLimits

0xf8d5,	// (0x00059a10) heading_pane_t

0xa535,	// (0x00054670) bg_popup_heading_pane_g1

0xa5e4,	// (0x0005471f) bg_popup_heading_pane_g2

0xa5ee,	// (0x00054729) bg_popup_heading_pane_g3

0xa5f8,	// (0x00054733) bg_popup_heading_pane_g4

0xa602,	// (0x0005473d) bg_popup_heading_pane_g5

0xa60c,	// (0x00054747) bg_popup_heading_pane_g6

0xa614,	// (0x0005474f) bg_popup_heading_pane_g7

0xa61c,	// (0x00054757) bg_popup_heading_pane_g8

0xa626,	// (0x00054761) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x000599cc) bg_popup_heading_pane_g

0x9d1f,	// (0x00053e5a) bg_popup_sub_pane_g1

0x9d2f,	// (0x00053e6a) bg_popup_sub_pane_g2

0x9d27,	// (0x00053e62) bg_popup_sub_pane_g3

0x9d3f,	// (0x00053e7a) bg_popup_sub_pane_g4

0x9d37,	// (0x00053e72) bg_popup_sub_pane_g5

0x9d47,	// (0x00053e82) bg_popup_sub_pane_g6

0x9d4f,	// (0x00053e8a) bg_popup_sub_pane_g7

0x9d5f,	// (0x00053e9a) bg_popup_sub_pane_g8

0x9d57,	// (0x00053e92) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x000599a6) bg_popup_sub_pane_g

0x8238,	// (0x00052373) bg_popup_window_pane_cp5_ParamLimits

0x8238,	// (0x00052373) bg_popup_window_pane_cp5

0x8254,	// (0x0005238f) popup_note_window_g1_ParamLimits

0x8254,	// (0x0005238f) popup_note_window_g1

0x8260,	// (0x0005239b) popup_note_window_t1_ParamLimits

0x8260,	// (0x0005239b) popup_note_window_t1

0x8276,	// (0x000523b1) popup_note_window_t2_ParamLimits

0x8276,	// (0x000523b1) popup_note_window_t2

0x828c,	// (0x000523c7) popup_note_window_t3_ParamLimits

0x828c,	// (0x000523c7) popup_note_window_t3

0x82a2,	// (0x000523dd) popup_note_window_t4_ParamLimits

0x82a2,	// (0x000523dd) popup_note_window_t4

0x82ca,	// (0x00052405) popup_note_window_t5_ParamLimits

0x82ca,	// (0x00052405) popup_note_window_t5

0x0004,

0xf57f,	// (0x000596ba) popup_note_window_t_ParamLimits

0xf57f,	// (0x000596ba) popup_note_window_t

0x82ee,	// (0x00052429) bg_popup_window_pane_cp6_ParamLimits

0x82ee,	// (0x00052429) bg_popup_window_pane_cp6

0xa4b1,	// (0x000545ec) popup_note_image_window_g1_ParamLimits

0xa4b1,	// (0x000545ec) popup_note_image_window_g1

0xa4bd,	// (0x000545f8) popup_note_image_window_g2_ParamLimits

0xa4bd,	// (0x000545f8) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0005999a) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0005999a) popup_note_image_window_g

0xa4d6,	// (0x00054611) popup_note_image_window_t1_ParamLimits

0xa4d6,	// (0x00054611) popup_note_image_window_t1

0xa4ef,	// (0x0005462a) popup_note_image_window_t2_ParamLimits

0xa4ef,	// (0x0005462a) popup_note_image_window_t2

0xa508,	// (0x00054643) popup_note_image_window_t3_ParamLimits

0xa508,	// (0x00054643) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0005999f) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0005999f) popup_note_image_window_t

0xa372,	// (0x000544ad) bg_popup_window_pane_cp7_ParamLimits

0xa372,	// (0x000544ad) bg_popup_window_pane_cp7

0xa3a2,	// (0x000544dd) popup_note_wait_window_g1_ParamLimits

0xa3a2,	// (0x000544dd) popup_note_wait_window_g1

0xa3ae,	// (0x000544e9) popup_note_wait_window_g2_ParamLimits

0xa3ae,	// (0x000544e9) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00059988) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00059988) popup_note_wait_window_g

0xa3c6,	// (0x00054501) popup_note_wait_window_t1_ParamLimits

0xa3c6,	// (0x00054501) popup_note_wait_window_t1

0xa3ed,	// (0x00054528) popup_note_wait_window_t2_ParamLimits

0xa3ed,	// (0x00054528) popup_note_wait_window_t2

0xa40a,	// (0x00054545) popup_note_wait_window_t3_ParamLimits

0xa40a,	// (0x00054545) popup_note_wait_window_t3

0xa41d,	// (0x00054558) popup_note_wait_window_t4_ParamLimits

0xa41d,	// (0x00054558) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0005998f) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0005998f) popup_note_wait_window_t

0xa442,	// (0x0005457d) wait_bar_pane_ParamLimits

0xa442,	// (0x0005457d) wait_bar_pane

0x7edd,	// (0x00052018) wait_anim_pane

0x7edd,	// (0x00052018) wait_border_pane

0x7ed3,	// (0x0005200e) wait_anim_pane_g1

0x7ed3,	// (0x0005200e) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00059843) wait_anim_pane_g

0xa316,	// (0x00054451) wait_border_pane_g1

0xa321,	// (0x0005445c) wait_border_pane_g2

0xa32a,	// (0x00054465) wait_border_pane_g3

0x0002,

0xf846,	// (0x00059981) wait_border_pane_g

0xa181,	// (0x000542bc) bg_popup_window_pane_cp16_ParamLimits

0xa181,	// (0x000542bc) bg_popup_window_pane_cp16

0xa281,	// (0x000543bc) indicator_popup_pane_cp4_ParamLimits

0xa281,	// (0x000543bc) indicator_popup_pane_cp4

0xa295,	// (0x000543d0) popup_query_data_window_t1_ParamLimits

0xa295,	// (0x000543d0) popup_query_data_window_t1

0xa2a7,	// (0x000543e2) popup_query_data_window_t2_ParamLimits

0xa2a7,	// (0x000543e2) popup_query_data_window_t2

0xa2c0,	// (0x000543fb) popup_query_data_window_t3_ParamLimits

0xa2c0,	// (0x000543fb) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0005997a) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0005997a) popup_query_data_window_t

0xa2da,	// (0x00054415) query_popup_data_pane_ParamLimits

0xa2da,	// (0x00054415) query_popup_data_pane

0xa2ee,	// (0x00054429) query_popup_data_pane_cp1_ParamLimits

0xa2ee,	// (0x00054429) query_popup_data_pane_cp1

0xa181,	// (0x000542bc) bg_popup_window_pane_cp10_ParamLimits

0xa181,	// (0x000542bc) bg_popup_window_pane_cp10

0xa1b3,	// (0x000542ee) indicator_popup_pane_ParamLimits

0xa1b3,	// (0x000542ee) indicator_popup_pane

0xa1d5,	// (0x00054310) popup_query_code_window_t1_ParamLimits

0xa1d5,	// (0x00054310) popup_query_code_window_t1

0xa1ef,	// (0x0005432a) popup_query_code_window_t2_ParamLimits

0xa1ef,	// (0x0005432a) popup_query_code_window_t2

0xa238,	// (0x00054373) popup_query_code_window_t3_ParamLimits

0xa238,	// (0x00054373) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00059973) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00059973) popup_query_code_window_t

0xa267,	// (0x000543a2) query_popup_pane_ParamLimits

0xa267,	// (0x000543a2) query_popup_pane

0x82ee,	// (0x00052429) bg_popup_window_pane_cp15_ParamLimits

0x82ee,	// (0x00052429) bg_popup_window_pane_cp15

0x830c,	// (0x00052447) indicator_popup_pane_cp1_ParamLimits

0x830c,	// (0x00052447) indicator_popup_pane_cp1

0x831f,	// (0x0005245a) indicator_popup_pane_cp2_ParamLimits

0x831f,	// (0x0005245a) indicator_popup_pane_cp2

0x8332,	// (0x0005246d) popup_query_data_code_window_g1_ParamLimits

0x8332,	// (0x0005246d) popup_query_data_code_window_g1

0x8345,	// (0x00052480) popup_query_data_code_window_t1_ParamLimits

0x8345,	// (0x00052480) popup_query_data_code_window_t1

0x8357,	// (0x00052492) popup_query_data_code_window_t2_ParamLimits

0x8357,	// (0x00052492) popup_query_data_code_window_t2

0x8369,	// (0x000524a4) popup_query_data_code_window_t3_ParamLimits

0x8369,	// (0x000524a4) popup_query_data_code_window_t3

0x837f,	// (0x000524ba) popup_query_data_code_window_t4_ParamLimits

0x837f,	// (0x000524ba) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000596c5) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000596c5) popup_query_data_code_window_t

0x6058,	// (0x00050193) list_single_midp_graphic_pane_g3

0x8397,	// (0x000524d2) query_popup_data_pane_cp2_ParamLimits

0x83aa,	// (0x000524e5) query_popup_pane_cp2_ParamLimits

0x83aa,	// (0x000524e5) query_popup_pane_cp2

0x7edd,	// (0x00052018) bg_popup_window_pane_cp11

0xa179,	// (0x000542b4) heading_pane_cp5

0x8495,	// (0x000525d0) listscroll_popup_info_pane

0x7edd,	// (0x00052018) input_focus_pane_cp3

0x83bd,	// (0x000524f8) query_popup_pane_t1

0x83cb,	// (0x00052506) list_popup_info_pane_ParamLimits

0x83cb,	// (0x00052506) list_popup_info_pane

0x83da,	// (0x00052515) listscroll_popup_info_pane_g1

0x83e2,	// (0x0005251d) scroll_pane_cp7

0x83ec,	// (0x00052527) popup_info_list_pane_t1_ParamLimits

0x83ec,	// (0x00052527) popup_info_list_pane_t1

0x8406,	// (0x00052541) popup_info_list_pane_t2_ParamLimits

0x8406,	// (0x00052541) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000596ce) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000596ce) popup_info_list_pane_t

0x7edd,	// (0x00052018) bg_popup_window_pane_cp12

0xb49e,	// (0x000555d9) find_popup_pane

0x7fbd,	// (0x000520f8) bg_popup_window_pane_cp3

0x8420,	// (0x0005255b) heading_pane_cp3

0x842c,	// (0x00052567) listscroll_popup_graphic_pane

0x7edd,	// (0x00052018) bg_popup_window_pane_cp4

0x848b,	// (0x000525c6) heading_pane_cp4

0x8495,	// (0x000525d0) listscroll_popup_colour_pane

0x849d,	// (0x000525d8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x849d,	// (0x000525d8) cell_large_graphic_colour_none_popup_pane

0x84b1,	// (0x000525ec) grid_large_graphic_colour_popup_pane_ParamLimits

0x84b1,	// (0x000525ec) grid_large_graphic_colour_popup_pane

0x84dd,	// (0x00052618) listscroll_popup_colour_pane_g1_ParamLimits

0x84dd,	// (0x00052618) listscroll_popup_colour_pane_g1

0x84f4,	// (0x0005262f) listscroll_popup_colour_pane_g2_ParamLimits

0x84f4,	// (0x0005262f) listscroll_popup_colour_pane_g2

0x850b,	// (0x00052646) listscroll_popup_colour_pane_g3_ParamLimits

0x850b,	// (0x00052646) listscroll_popup_colour_pane_g3

0x851b,	// (0x00052656) listscroll_popup_colour_pane_g4_ParamLimits

0x851b,	// (0x00052656) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000596d3) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000596d3) listscroll_popup_colour_pane_g

0x852f,	// (0x0005266a) scroll_pane_cp6_ParamLimits

0x852f,	// (0x0005266a) scroll_pane_cp6

0x8541,	// (0x0005267c) cell_large_graphic_colour_popup_pane_ParamLimits

0x8541,	// (0x0005267c) cell_large_graphic_colour_popup_pane

0x8560,	// (0x0005269b) cell_large_graphic_colour_none_popup_pane_t1

0x7edd,	// (0x00052018) grid_highlight_pane_cp5

0x856f,	// (0x000526aa) cell_large_graphic_colour_popup_pane_g1

0x8577,	// (0x000526b2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000596dc) cell_large_graphic_colour_popup_pane_g

0x857f,	// (0x000526ba) cell_large_graphic_colour_popup_pane_g2_copy1

0x8588,	// (0x000526c3) grid_highlight_pane_cp4

0x8590,	// (0x000526cb) bg_popup_window_pane_cp8_ParamLimits

0x8590,	// (0x000526cb) bg_popup_window_pane_cp8

0x85ab,	// (0x000526e6) popup_snote_single_text_window_g1_ParamLimits

0x85ab,	// (0x000526e6) popup_snote_single_text_window_g1

0x85bd,	// (0x000526f8) popup_snote_single_text_window_t1_ParamLimits

0x85bd,	// (0x000526f8) popup_snote_single_text_window_t1

0x85d0,	// (0x0005270b) popup_snote_single_text_window_t2_ParamLimits

0x85d0,	// (0x0005270b) popup_snote_single_text_window_t2

0x85e3,	// (0x0005271e) popup_snote_single_text_window_t3_ParamLimits

0x85e3,	// (0x0005271e) popup_snote_single_text_window_t3

0x861c,	// (0x00052757) popup_snote_single_text_window_t4_ParamLimits

0x861c,	// (0x00052757) popup_snote_single_text_window_t4

0x8650,	// (0x0005278b) popup_snote_single_text_window_t5_ParamLimits

0x8650,	// (0x0005278b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000596e1) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000596e1) popup_snote_single_text_window_t

0x867f,	// (0x000527ba) bg_popup_window_pane_cp9_ParamLimits

0x867f,	// (0x000527ba) bg_popup_window_pane_cp9

0x85ab,	// (0x000526e6) popup_snote_single_graphic_window_g1_ParamLimits

0x85ab,	// (0x000526e6) popup_snote_single_graphic_window_g1

0x868d,	// (0x000527c8) popup_snote_single_graphic_window_g2_ParamLimits

0x868d,	// (0x000527c8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000596ec) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000596ec) popup_snote_single_graphic_window_g

0x8699,	// (0x000527d4) popup_snote_single_graphic_window_t1_ParamLimits

0x8699,	// (0x000527d4) popup_snote_single_graphic_window_t1

0x86ac,	// (0x000527e7) popup_snote_single_graphic_window_t2_ParamLimits

0x86ac,	// (0x000527e7) popup_snote_single_graphic_window_t2

0x86bf,	// (0x000527fa) popup_snote_single_graphic_window_t3_ParamLimits

0x86bf,	// (0x000527fa) popup_snote_single_graphic_window_t3

0x86f8,	// (0x00052833) popup_snote_single_graphic_window_t4_ParamLimits

0x86f8,	// (0x00052833) popup_snote_single_graphic_window_t4

0x872c,	// (0x00052867) popup_snote_single_graphic_window_t5_ParamLimits

0x872c,	// (0x00052867) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000596f1) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000596f1) popup_snote_single_graphic_window_t

0xb3e0,	// (0x0005551b) grid_graphic_popup_pane_ParamLimits

0xb3e0,	// (0x0005551b) grid_graphic_popup_pane

0xb40a,	// (0x00055545) listscroll_popup_graphic_pane_g1_ParamLimits

0xb40a,	// (0x00055545) listscroll_popup_graphic_pane_g1

0xb41e,	// (0x00055559) listscroll_popup_graphic_pane_g2_ParamLimits

0xb41e,	// (0x00055559) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00059af0) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00059af0) listscroll_popup_graphic_pane_g

0xb432,	// (0x0005556d) scroll_pane_cp5

0xb37f,	// (0x000554ba) cell_graphic_popup_pane_ParamLimits

0xb37f,	// (0x000554ba) cell_graphic_popup_pane

0xb360,	// (0x0005549b) cell_graphic_popup_pane_g1

0xb368,	// (0x000554a3) cell_graphic_popup_pane_g2

0x857f,	// (0x000526ba) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00059ae9) cell_graphic_popup_pane_g

0xb371,	// (0x000554ac) cell_graphic_popup_pane_t2

0x8588,	// (0x000526c3) grid_highlight_pane_cp3

0x876d,	// (0x000528a8) list_gen_pane_ParamLimits

0x876d,	// (0x000528a8) list_gen_pane

0x879f,	// (0x000528da) scroll_pane

0xb2b8,	// (0x000553f3) bg_list_pane_g1_ParamLimits

0xb2b8,	// (0x000553f3) bg_list_pane_g1

0xb2d5,	// (0x00055410) bg_list_pane_g2_ParamLimits

0xb2d5,	// (0x00055410) bg_list_pane_g2

0xb2ea,	// (0x00055425) bg_list_pane_g3_ParamLimits

0xb2ea,	// (0x00055425) bg_list_pane_g3

0xb2fe,	// (0x00055439) bg_list_pane_g4_ParamLimits

0xb2fe,	// (0x00055439) bg_list_pane_g4

0xb312,	// (0x0005544d) bg_list_pane_g5_ParamLimits

0xb312,	// (0x0005544d) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00059ade) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00059ade) bg_list_pane_g

0x7689,	// (0x000517c4) list_double2_graphic_large_graphic_pane_ParamLimits

0x7689,	// (0x000517c4) list_double2_graphic_large_graphic_pane

0x7689,	// (0x000517c4) list_double2_graphic_pane_ParamLimits

0x7689,	// (0x000517c4) list_double2_graphic_pane

0x7689,	// (0x000517c4) list_double2_large_graphic_pane_ParamLimits

0x7689,	// (0x000517c4) list_double2_large_graphic_pane

0x7689,	// (0x000517c4) list_double2_pane_ParamLimits

0x7689,	// (0x000517c4) list_double2_pane

0x7689,	// (0x000517c4) list_double_graphic_heading_pane_ParamLimits

0x7689,	// (0x000517c4) list_double_graphic_heading_pane

0x7689,	// (0x000517c4) list_double_graphic_pane_ParamLimits

0x7689,	// (0x000517c4) list_double_graphic_pane

0x7689,	// (0x000517c4) list_double_heading_pane_ParamLimits

0x7689,	// (0x000517c4) list_double_heading_pane

0x7689,	// (0x000517c4) list_double_large_graphic_pane_ParamLimits

0x7689,	// (0x000517c4) list_double_large_graphic_pane

0x7689,	// (0x000517c4) list_double_number_pane_ParamLimits

0x7689,	// (0x000517c4) list_double_number_pane

0x7689,	// (0x000517c4) list_double_pane_ParamLimits

0x7689,	// (0x000517c4) list_double_pane

0x7689,	// (0x000517c4) list_double_time_pane_ParamLimits

0x7689,	// (0x000517c4) list_double_time_pane

0x7689,	// (0x000517c4) list_setting_number_pane_ParamLimits

0x7689,	// (0x000517c4) list_setting_number_pane

0x7689,	// (0x000517c4) list_setting_pane_ParamLimits

0x7689,	// (0x000517c4) list_setting_pane

0x76ef,	// (0x0005182a) list_single_2graphic_pane_ParamLimits

0x76ef,	// (0x0005182a) list_single_2graphic_pane

0x76ef,	// (0x0005182a) list_single_graphic_heading_pane_ParamLimits

0x76ef,	// (0x0005182a) list_single_graphic_heading_pane

0x76ef,	// (0x0005182a) list_single_graphic_pane_ParamLimits

0x76ef,	// (0x0005182a) list_single_graphic_pane

0x76ef,	// (0x0005182a) list_single_heading_pane_ParamLimits

0x76ef,	// (0x0005182a) list_single_heading_pane

0x7760,	// (0x0005189b) list_single_large_graphic_pane_ParamLimits

0x7760,	// (0x0005189b) list_single_large_graphic_pane

0x76ef,	// (0x0005182a) list_single_number_heading_pane_ParamLimits

0x76ef,	// (0x0005182a) list_single_number_heading_pane

0x76ef,	// (0x0005182a) list_single_number_pane_ParamLimits

0x76ef,	// (0x0005182a) list_single_number_pane

0x76ef,	// (0x0005182a) list_single_pane_ParamLimits

0x76ef,	// (0x0005182a) list_single_pane

0x7edd,	// (0x00052018) list_highlight_pane_cp1

0x7482,	// (0x000515bd) list_single_pane_g1_ParamLimits

0x7482,	// (0x000515bd) list_single_pane_g1

0x748e,	// (0x000515c9) list_single_pane_g2_ParamLimits

0x748e,	// (0x000515c9) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005970d) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005970d) list_single_pane_g

0x7673,	// (0x000517ae) list_single_pane_t1_ParamLimits

0x7673,	// (0x000517ae) list_single_pane_t1

0x7482,	// (0x000515bd) list_single_number_pane_g1_ParamLimits

0x7482,	// (0x000515bd) list_single_number_pane_g1

0x748e,	// (0x000515c9) list_single_number_pane_g2_ParamLimits

0x748e,	// (0x000515c9) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005970d) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005970d) list_single_number_pane_g

0x761b,	// (0x00051756) list_single_number_pane_t1_ParamLimits

0x761b,	// (0x00051756) list_single_number_pane_t1

0x7631,	// (0x0005176c) list_single_number_pane_t2_ParamLimits

0x7631,	// (0x0005176c) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00059a9f) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00059a9f) list_single_number_pane_t

0x4cdc,	// (0x0004ee17) list_single_graphic_pane_g1_ParamLimits

0x4cdc,	// (0x0004ee17) list_single_graphic_pane_g1

0x7482,	// (0x000515bd) list_single_graphic_pane_g2_ParamLimits

0x7482,	// (0x000515bd) list_single_graphic_pane_g2

0x748e,	// (0x000515c9) list_single_graphic_pane_g3_ParamLimits

0x748e,	// (0x000515c9) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000596fc) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000596fc) list_single_graphic_pane_g

0x4ce8,	// (0x0004ee23) list_single_graphic_pane_t1_ParamLimits

0x4ce8,	// (0x0004ee23) list_single_graphic_pane_t1

0x4cfe,	// (0x0004ee39) list_single_heading_pane_g1_ParamLimits

0x4cfe,	// (0x0004ee39) list_single_heading_pane_g1

0x748e,	// (0x000515c9) list_single_heading_pane_g2_ParamLimits

0x748e,	// (0x000515c9) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00059703) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00059703) list_single_heading_pane_g

0x4d11,	// (0x0004ee4c) list_single_heading_pane_t1_ParamLimits

0x4d11,	// (0x0004ee4c) list_single_heading_pane_t1

0x749a,	// (0x000515d5) list_single_heading_pane_t2_ParamLimits

0x749a,	// (0x000515d5) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00059708) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00059708) list_single_heading_pane_t

0x7482,	// (0x000515bd) list_single_number_heading_pane_g1_ParamLimits

0x7482,	// (0x000515bd) list_single_number_heading_pane_g1

0x748e,	// (0x000515c9) list_single_number_heading_pane_g2_ParamLimits

0x748e,	// (0x000515c9) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005970d) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005970d) list_single_number_heading_pane_g

0x4d27,	// (0x0004ee62) list_single_number_heading_pane_t1_ParamLimits

0x4d27,	// (0x0004ee62) list_single_number_heading_pane_t1

0x4d3d,	// (0x0004ee78) list_single_number_heading_pane_t2_ParamLimits

0x4d3d,	// (0x0004ee78) list_single_number_heading_pane_t2

0x4d4f,	// (0x0004ee8a) list_single_number_heading_pane_t3_ParamLimits

0x4d4f,	// (0x0004ee8a) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00059712) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00059712) list_single_number_heading_pane_t

0x4d61,	// (0x0004ee9c) list_single_graphic_heading_pane_g1_ParamLimits

0x4d61,	// (0x0004ee9c) list_single_graphic_heading_pane_g1

0x74ac,	// (0x000515e7) list_single_graphic_heading_pane_g4_ParamLimits

0x74ac,	// (0x000515e7) list_single_graphic_heading_pane_g4

0x748e,	// (0x000515c9) list_single_graphic_heading_pane_g5_ParamLimits

0x748e,	// (0x000515c9) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00059719) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00059719) list_single_graphic_heading_pane_g

0x4d27,	// (0x0004ee62) list_single_graphic_heading_pane_t1_ParamLimits

0x4d27,	// (0x0004ee62) list_single_graphic_heading_pane_t1

0x4d79,	// (0x0004eeb4) list_single_graphic_heading_pane_t2_ParamLimits

0x4d79,	// (0x0004eeb4) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00059720) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00059720) list_single_graphic_heading_pane_t

0x74bd,	// (0x000515f8) list_single_large_graphic_pane_g1_ParamLimits

0x74bd,	// (0x000515f8) list_single_large_graphic_pane_g1

0x74c9,	// (0x00051604) list_single_large_graphic_pane_g2_ParamLimits

0x74c9,	// (0x00051604) list_single_large_graphic_pane_g2

0x74d5,	// (0x00051610) list_single_large_graphic_pane_g3_ParamLimits

0x74d5,	// (0x00051610) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00059725) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00059725) list_single_large_graphic_pane_g

0xa321,	// (0x0005445c) wait_border_pane_g2_copy1

0x74e1,	// (0x0005161c) list_single_large_graphic_pane_g4_cp2

0x4d8f,	// (0x0004eeca) list_single_large_graphic_pane_t1_ParamLimits

0x4d8f,	// (0x0004eeca) list_single_large_graphic_pane_t1

0x87d3,	// (0x0005290e) list_double_pane_g1_ParamLimits

0x87d3,	// (0x0005290e) list_double_pane_g1

0x74e9,	// (0x00051624) list_double_pane_g2_ParamLimits

0x74e9,	// (0x00051624) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005972c) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005972c) list_double_pane_g

0x4da5,	// (0x0004eee0) list_double_pane_t1_ParamLimits

0x4da5,	// (0x0004eee0) list_double_pane_t1

0x4dbb,	// (0x0004eef6) list_double_pane_t2_ParamLimits

0x4dbb,	// (0x0004eef6) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00059731) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00059731) list_double_pane_t

0x4dcd,	// (0x0004ef08) list_double2_pane_g1_ParamLimits

0x4dcd,	// (0x0004ef08) list_double2_pane_g1

0x4dde,	// (0x0004ef19) list_double2_pane_g2_ParamLimits

0x4dde,	// (0x0004ef19) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00059736) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00059736) list_double2_pane_g

0x4dea,	// (0x0004ef25) list_double2_pane_t1_ParamLimits

0x4dea,	// (0x0004ef25) list_double2_pane_t1

0x4e00,	// (0x0004ef3b) list_double2_pane_t2_ParamLimits

0x4e00,	// (0x0004ef3b) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005973b) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005973b) list_double2_pane_t

0x87d3,	// (0x0005290e) list_double_number_pane_g1_ParamLimits

0x87d3,	// (0x0005290e) list_double_number_pane_g1

0x74e9,	// (0x00051624) list_double_number_pane_g2_ParamLimits

0x74e9,	// (0x00051624) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005972c) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005972c) list_double_number_pane_g

0x4e12,	// (0x0004ef4d) list_double_number_pane_t1_ParamLimits

0x4e12,	// (0x0004ef4d) list_double_number_pane_t1

0x4e24,	// (0x0004ef5f) list_double_number_pane_t2_ParamLimits

0x4e24,	// (0x0004ef5f) list_double_number_pane_t2

0x4e3a,	// (0x0004ef75) list_double_number_pane_t3_ParamLimits

0x4e3a,	// (0x0004ef75) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00059740) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00059740) list_double_number_pane_t

0x4e4c,	// (0x0004ef87) list_double_graphic_pane_g1_ParamLimits

0x4e4c,	// (0x0004ef87) list_double_graphic_pane_g1

0x4e58,	// (0x0004ef93) list_double_graphic_pane_g2_ParamLimits

0x4e58,	// (0x0004ef93) list_double_graphic_pane_g2

0x4e67,	// (0x0004efa2) list_double_graphic_pane_g3_ParamLimits

0x4e67,	// (0x0004efa2) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00059747) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00059747) list_double_graphic_pane_g

0x4e7f,	// (0x0004efba) list_double_graphic_pane_t1_ParamLimits

0x4e7f,	// (0x0004efba) list_double_graphic_pane_t1

0x4e95,	// (0x0004efd0) list_double_graphic_pane_t2_ParamLimits

0x4e95,	// (0x0004efd0) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00059750) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00059750) list_double_graphic_pane_t

0x4ea7,	// (0x0004efe2) list_double2_graphic_pane_g1_ParamLimits

0x4ea7,	// (0x0004efe2) list_double2_graphic_pane_g1

0x98e0,	// (0x00053a1b) list_double2_graphic_pane_g2_ParamLimits

0x98e0,	// (0x00053a1b) list_double2_graphic_pane_g2

0x74f5,	// (0x00051630) list_double2_graphic_pane_g3_ParamLimits

0x74f5,	// (0x00051630) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00059755) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00059755) list_double2_graphic_pane_g

0x4eb3,	// (0x0004efee) list_double2_graphic_pane_t1_ParamLimits

0x4eb3,	// (0x0004efee) list_double2_graphic_pane_t1

0x4ec9,	// (0x0004f004) list_double2_graphic_pane_t2_ParamLimits

0x4ec9,	// (0x0004f004) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005975c) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005975c) list_double2_graphic_pane_t

0x4edb,	// (0x0004f016) list_double_large_graphic_pane_g1_ParamLimits

0x4edb,	// (0x0004f016) list_double_large_graphic_pane_g1

0x4efa,	// (0x0004f035) list_double_large_graphic_pane_g2_ParamLimits

0x4efa,	// (0x0004f035) list_double_large_graphic_pane_g2

0x74e9,	// (0x00051624) list_double_large_graphic_pane_g3_ParamLimits

0x74e9,	// (0x00051624) list_double_large_graphic_pane_g3

0x4f10,	// (0x0004f04b) list_double_large_graphic_pane_g4_ParamLimits

0x4f10,	// (0x0004f04b) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00059761) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00059761) list_double_large_graphic_pane_g

0x4f21,	// (0x0004f05c) list_double_large_graphic_pane_t1_ParamLimits

0x4f21,	// (0x0004f05c) list_double_large_graphic_pane_t1

0x4f3a,	// (0x0004f075) list_double_large_graphic_pane_t2_ParamLimits

0x4f3a,	// (0x0004f075) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005976c) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005976c) list_double_large_graphic_pane_t

0x7516,	// (0x00051651) list_double2_large_graphic_pane_g1_ParamLimits

0x7516,	// (0x00051651) list_double2_large_graphic_pane_g1

0x4f4c,	// (0x0004f087) list_double2_large_graphic_pane_g2_ParamLimits

0x4f4c,	// (0x0004f087) list_double2_large_graphic_pane_g2

0x74f5,	// (0x00051630) list_double2_large_graphic_pane_g3_ParamLimits

0x74f5,	// (0x00051630) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00059771) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00059771) list_double2_large_graphic_pane_g

0x4f5d,	// (0x0004f098) list_double2_large_graphic_pane_t1_ParamLimits

0x4f5d,	// (0x0004f098) list_double2_large_graphic_pane_t1

0x4f73,	// (0x0004f0ae) list_double2_large_graphic_pane_t2_ParamLimits

0x4f73,	// (0x0004f0ae) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00059778) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00059778) list_double2_large_graphic_pane_t

0x4f85,	// (0x0004f0c0) list_double_heading_pane_g1_ParamLimits

0x4f85,	// (0x0004f0c0) list_double_heading_pane_g1

0x7522,	// (0x0005165d) list_double_heading_pane_g2_ParamLimits

0x7522,	// (0x0005165d) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005977d) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005977d) list_double_heading_pane_g

0x4f96,	// (0x0004f0d1) list_double_heading_pane_t1_ParamLimits

0x4f96,	// (0x0004f0d1) list_double_heading_pane_t1

0x4e00,	// (0x0004ef3b) list_double_heading_pane_t2_ParamLimits

0x4e00,	// (0x0004ef3b) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00059782) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00059782) list_double_heading_pane_t

0x4fac,	// (0x0004f0e7) list_double_graphic_heading_pane_g1_ParamLimits

0x4fac,	// (0x0004f0e7) list_double_graphic_heading_pane_g1

0x4f85,	// (0x0004f0c0) list_double_graphic_heading_pane_g2_ParamLimits

0x4f85,	// (0x0004f0c0) list_double_graphic_heading_pane_g2

0x7522,	// (0x0005165d) list_double_graphic_heading_pane_g3_ParamLimits

0x7522,	// (0x0005165d) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00059787) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00059787) list_double_graphic_heading_pane_g

0x4fb8,	// (0x0004f0f3) list_double_graphic_heading_pane_t1_ParamLimits

0x4fb8,	// (0x0004f0f3) list_double_graphic_heading_pane_t1

0x4ec9,	// (0x0004f004) list_double_graphic_heading_pane_t2_ParamLimits

0x4ec9,	// (0x0004f004) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005978e) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005978e) list_double_graphic_heading_pane_t

0x4fce,	// (0x0004f109) list_double_time_pane_g1_ParamLimits

0x4fce,	// (0x0004f109) list_double_time_pane_g1

0x4fdf,	// (0x0004f11a) list_double_time_pane_g2_ParamLimits

0x4fdf,	// (0x0004f11a) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00059793) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00059793) list_double_time_pane_g

0x4feb,	// (0x0004f126) list_double_time_pane_t1_ParamLimits

0x4feb,	// (0x0004f126) list_double_time_pane_t1

0x5001,	// (0x0004f13c) list_double_time_pane_t2_ParamLimits

0x5001,	// (0x0004f13c) list_double_time_pane_t2

0x5013,	// (0x0004f14e) list_double_time_pane_t3_ParamLimits

0x5013,	// (0x0004f14e) list_double_time_pane_t3

0x5025,	// (0x0004f160) list_double_time_pane_t4_ParamLimits

0x5025,	// (0x0004f160) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00059798) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00059798) list_double_time_pane_t

0x5037,	// (0x0004f172) list_setting_pane_g1_ParamLimits

0x5037,	// (0x0004f172) list_setting_pane_g1

0x4dde,	// (0x0004ef19) list_setting_pane_g2_ParamLimits

0x4dde,	// (0x0004ef19) list_setting_pane_g2

0x0001,

0xf666,	// (0x000597a1) list_setting_pane_g_ParamLimits

0xf666,	// (0x000597a1) list_setting_pane_g

0x5043,	// (0x0004f17e) list_setting_pane_t1_ParamLimits

0x5043,	// (0x0004f17e) list_setting_pane_t1

0x505d,	// (0x0004f198) list_setting_pane_t2_ParamLimits

0x505d,	// (0x0004f198) list_setting_pane_t2

0x0002,

0xf66b,	// (0x000597a6) list_setting_pane_t_ParamLimits

0xf66b,	// (0x000597a6) list_setting_pane_t

0x509c,	// (0x0004f1d7) set_value_pane_cp_ParamLimits

0x509c,	// (0x0004f1d7) set_value_pane_cp

0x50a8,	// (0x0004f1e3) list_setting_number_pane_g1_ParamLimits

0x50a8,	// (0x0004f1e3) list_setting_number_pane_g1

0x50b4,	// (0x0004f1ef) list_setting_number_pane_g2_ParamLimits

0x50b4,	// (0x0004f1ef) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x000597ad) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x000597ad) list_setting_number_pane_g

0x50c0,	// (0x0004f1fb) list_setting_number_pane_t1_ParamLimits

0x50c0,	// (0x0004f1fb) list_setting_number_pane_t1

0x50d9,	// (0x0004f214) list_setting_number_pane_t2_ParamLimits

0x50d9,	// (0x0004f214) list_setting_number_pane_t2

0x50f3,	// (0x0004f22e) list_setting_number_pane_t3_ParamLimits

0x50f3,	// (0x0004f22e) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x000597b2) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x000597b2) list_setting_number_pane_t

0x509c,	// (0x0004f1d7) set_value_pane_ParamLimits

0x509c,	// (0x0004f1d7) set_value_pane

0x87df,	// (0x0005291a) bg_set_opt_pane_ParamLimits

0x87df,	// (0x0005291a) bg_set_opt_pane

0x5136,	// (0x0004f271) set_value_pane_t1

0x8800,	// (0x0005293b) slider_set_pane_cp3

0x8809,	// (0x00052944) volume_small_pane_cp

0x8812,	// (0x0005294d) list_form_gen_pane

0x881b,	// (0x00052956) scroll_pane_cp8

0x514c,	// (0x0004f287) form_field_data_pane_ParamLimits

0x514c,	// (0x0004f287) form_field_data_pane

0x5170,	// (0x0004f2ab) form_field_data_wide_pane_ParamLimits

0x5170,	// (0x0004f2ab) form_field_data_wide_pane

0x5193,	// (0x0004f2ce) form_field_popup_pane_ParamLimits

0x5193,	// (0x0004f2ce) form_field_popup_pane

0x51b3,	// (0x0004f2ee) form_field_popup_wide_pane_ParamLimits

0x51b3,	// (0x0004f2ee) form_field_popup_wide_pane

0x51d2,	// (0x0004f30d) form_field_slider_pane_ParamLimits

0x51d2,	// (0x0004f30d) form_field_slider_pane

0x51e5,	// (0x0004f320) form_field_slider_wide_pane_ParamLimits

0x51e5,	// (0x0004f320) form_field_slider_wide_pane

0x882c,	// (0x00052967) data_form_pane

0x5202,	// (0x0004f33d) form_field_data_pane_t1

0x8838,	// (0x00052973) input_focus_pane

0x521a,	// (0x0004f355) data_form_wide_pane

0x5237,	// (0x0004f372) form_field_data_wide_pane_t1

0x859d,	// (0x000526d8) input_focus_pane_cp6

0x5259,	// (0x0004f394) form_field_popup_pane_t1

0x8838,	// (0x00052973) input_focus_pane_cp7

0x885a,	// (0x00052995) list_form_pane

0x5279,	// (0x0004f3b4) form_field_popup_wide_pane_t1

0x8838,	// (0x00052973) input_focus_pane_cp8

0x8866,	// (0x000529a1) list_form_wide_pane

0x5296,	// (0x0004f3d1) form_field_slider_pane_t1_ParamLimits

0x5296,	// (0x0004f3d1) form_field_slider_pane_t1

0x52ac,	// (0x0004f3e7) form_field_slider_pane_t2_ParamLimits

0x52ac,	// (0x0004f3e7) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x000597c2) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x000597c2) form_field_slider_pane_t

0x8238,	// (0x00052373) input_focus_pane_cp9_ParamLimits

0x8238,	// (0x00052373) input_focus_pane_cp9

0x52c1,	// (0x0004f3fc) slider_cont_pane_ParamLimits

0x52c1,	// (0x0004f3fc) slider_cont_pane

0x8872,	// (0x000529ad) form_field_slider_wide_pane_t1_ParamLimits

0x8872,	// (0x000529ad) form_field_slider_wide_pane_t1

0x52d5,	// (0x0004f410) form_field_slider_wide_pane_t2_ParamLimits

0x52d5,	// (0x0004f410) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x000597c7) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x000597c7) form_field_slider_wide_pane_t

0x8238,	// (0x00052373) input_focus_pane_cp10_ParamLimits

0x8238,	// (0x00052373) input_focus_pane_cp10

0x52e7,	// (0x0004f422) slider_cont_pane_cp1_ParamLimits

0x52e7,	// (0x0004f422) slider_cont_pane_cp1

0x52fb,	// (0x0004f436) slider_form_pane_cp

0x8884,	// (0x000529bf) input_focus_pane_g1

0x888c,	// (0x000529c7) input_focus_pane_g2

0x8894,	// (0x000529cf) input_focus_pane_g3

0x889c,	// (0x000529d7) input_focus_pane_g4

0x88a4,	// (0x000529df) input_focus_pane_g5

0x88ac,	// (0x000529e7) input_focus_pane_g6

0x88b4,	// (0x000529ef) input_focus_pane_g7

0x88bc,	// (0x000529f7) input_focus_pane_g8

0x88c4,	// (0x000529ff) input_focus_pane_g9

0x7ed3,	// (0x0005200e) input_focus_pane_g10

0x0009,

0xf691,	// (0x000597cc) input_focus_pane_g

0xa32a,	// (0x00054465) wait_border_pane_g3_copy1

0x5303,	// (0x0004f43e) data_form_pane_t1

0x7ed3,	// (0x0005200e) wait_anim_pane_g1_copy1

0x7643,	// (0x0005177e) data_form_wide_pane_t1

0x531e,	// (0x0004f459) list_form_graphic_pane_cp_ParamLimits

0x531e,	// (0x0004f459) list_form_graphic_pane_cp

0xb24a,	// (0x00055385) slider_form_pane_g1

0xb253,	// (0x0005538e) slider_form_pane_g2

0x0006,

0xf994,	// (0x00059acf) slider_form_pane_g

0x5337,	// (0x0004f472) list_form_graphic_pane_ParamLimits

0x5337,	// (0x0004f472) list_form_graphic_pane

0x5353,	// (0x0004f48e) list_form_graphic_pane_g1

0x535b,	// (0x0004f496) list_form_graphic_pane_t1_ParamLimits

0x535b,	// (0x0004f496) list_form_graphic_pane_t1

0x7fbd,	// (0x000520f8) list_highlight_pane_cp5_ParamLimits

0x7fbd,	// (0x000520f8) list_highlight_pane_cp5

0x5370,	// (0x0004f4ab) find_pane_g1

0x88cc,	// (0x00052a07) input_find_pane

0x5379,	// (0x0004f4b4) input_find_pane_g1_ParamLimits

0x5379,	// (0x0004f4b4) input_find_pane_g1

0x5385,	// (0x0004f4c0) input_find_pane_t1_ParamLimits

0x5385,	// (0x0004f4c0) input_find_pane_t1

0x539a,	// (0x0004f4d5) input_find_pane_t2_ParamLimits

0x539a,	// (0x0004f4d5) input_find_pane_t2

0x0001,

0xf6a6,	// (0x000597e1) input_find_pane_t_ParamLimits

0xf6a6,	// (0x000597e1) input_find_pane_t

0x88d5,	// (0x00052a10) input_focus_pane_cp5_ParamLimits

0x88d5,	// (0x00052a10) input_focus_pane_cp5

0x88ef,	// (0x00052a2a) bg_popup_window_pane_cp2_ParamLimits

0x88ef,	// (0x00052a2a) bg_popup_window_pane_cp2

0x88fc,	// (0x00052a37) listscroll_menu_pane_ParamLimits

0x88fc,	// (0x00052a37) listscroll_menu_pane

0x8908,	// (0x00052a43) popup_submenu_window_ParamLimits

0x8908,	// (0x00052a43) popup_submenu_window

0x8934,	// (0x00052a6f) find_popup_pane_g1

0x893c,	// (0x00052a77) input_popup_find_pane_cp

0x88d5,	// (0x00052a10) input_focus_pane_cp4_ParamLimits

0x88d5,	// (0x00052a10) input_focus_pane_cp4

0x8952,	// (0x00052a8d) input_popup_find_pane_t1_ParamLimits

0x8952,	// (0x00052a8d) input_popup_find_pane_t1

0x7edd,	// (0x00052018) bg_popup_sub_pane_cp

0x8980,	// (0x00052abb) listscroll_popup_sub_pane

0x8988,	// (0x00052ac3) list_submenu_pane_ParamLimits

0x8988,	// (0x00052ac3) list_submenu_pane

0x8999,	// (0x00052ad4) scroll_pane_cp4

0x89a1,	// (0x00052adc) list_single_popup_submenu_pane_ParamLimits

0x89a1,	// (0x00052adc) list_single_popup_submenu_pane

0x89b5,	// (0x00052af0) list_single_popup_submenu_pane_g1

0x89bd,	// (0x00052af8) list_single_popup_submenu_pane_t1_ParamLimits

0x89bd,	// (0x00052af8) list_single_popup_submenu_pane_t1

0x7fbd,	// (0x000520f8) bg_active_tab_pane_cp1_ParamLimits

0x7fbd,	// (0x000520f8) bg_active_tab_pane_cp1

0x89d2,	// (0x00052b0d) tabs_2_active_pane_g1

0x89da,	// (0x00052b15) tabs_2_active_pane_t1

0x7fbd,	// (0x000520f8) bg_passive_tab_pane_cp1_ParamLimits

0x7fbd,	// (0x000520f8) bg_passive_tab_pane_cp1

0x89d2,	// (0x00052b0d) tabs_2_passive_pane_g1

0x89da,	// (0x00052b15) tabs_2_passive_pane_t1

0x89ec,	// (0x00052b27) bg_active_tab_pane_cp4

0x89fa,	// (0x00052b35) tabs_2_long_active_pane_t1

0x8a0d,	// (0x00052b48) bg_passive_tab_pane_cp4

0x6060,	// (0x0005019b) list_single_midp_graphic_pane_g4_ParamLimits

0x89ec,	// (0x00052b27) bg_active_tab_pane_cp5

0x8a19,	// (0x00052b54) tabs_3_long_active_pane_t1

0x8a0d,	// (0x00052b48) bg_passive_tab_pane_cp5

0x6060,	// (0x0005019b) list_single_midp_graphic_pane_g4

0x7fbd,	// (0x000520f8) bg_popup_window_pane_cp13_ParamLimits

0x7fbd,	// (0x000520f8) bg_popup_window_pane_cp13

0x8a34,	// (0x00052b6f) listscroll_popup_fast_pane_ParamLimits

0x8a34,	// (0x00052b6f) listscroll_popup_fast_pane

0x8a43,	// (0x00052b7e) grid_popup_fast_pane_ParamLimits

0x8a43,	// (0x00052b7e) grid_popup_fast_pane

0x8a55,	// (0x00052b90) scroll_pane_cp9_ParamLimits

0x8a55,	// (0x00052b90) scroll_pane_cp9

0xcae4,	// (0x00056c1f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae4,	// (0x00056c1f) list_single_graphic_hl_pane_t1_cp2

0x8a79,	// (0x00052bb4) input_focus_pane_cp20_ParamLimits

0x8a79,	// (0x00052bb4) input_focus_pane_cp20

0x8a87,	// (0x00052bc2) query_popup_data_pane_t1_ParamLimits

0x8a87,	// (0x00052bc2) query_popup_data_pane_t1

0x8a9a,	// (0x00052bd5) query_popup_data_pane_t2_ParamLimits

0x8a9a,	// (0x00052bd5) query_popup_data_pane_t2

0x8ae0,	// (0x00052c1b) query_popup_data_pane_t3_ParamLimits

0x8ae0,	// (0x00052c1b) query_popup_data_pane_t3

0x8b21,	// (0x00052c5c) query_popup_data_pane_t4_ParamLimits

0x8b21,	// (0x00052c5c) query_popup_data_pane_t4

0x8b5d,	// (0x00052c98) query_popup_data_pane_t5_ParamLimits

0x8b5d,	// (0x00052c98) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x000597e6) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x000597e6) query_popup_data_pane_t

0x8884,	// (0x000529bf) bg_set_opt_pane_g1

0x888c,	// (0x000529c7) bg_set_opt_pane_g2

0x8894,	// (0x000529cf) bg_set_opt_pane_g3

0x889c,	// (0x000529d7) bg_set_opt_pane_g4

0x88a4,	// (0x000529df) bg_set_opt_pane_g5

0x88ac,	// (0x000529e7) bg_set_opt_pane_g6

0x88b4,	// (0x000529ef) bg_set_opt_pane_g7

0x88bc,	// (0x000529f7) bg_set_opt_pane_g8

0x88c4,	// (0x000529ff) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x000597f1) bg_set_opt_pane_g

0x56ba,	// (0x0004f7f5) control_top_pane_stacon_ParamLimits

0x56ba,	// (0x0004f7f5) control_top_pane_stacon

0x570d,	// (0x0004f848) signal_pane_stacon_ParamLimits

0x570d,	// (0x0004f848) signal_pane_stacon

0x914d,	// (0x00053288) stacon_top_pane_g1_ParamLimits

0x914d,	// (0x00053288) stacon_top_pane_g1

0x5732,	// (0x0004f86d) title_pane_stacon_ParamLimits

0x5732,	// (0x0004f86d) title_pane_stacon

0x575c,	// (0x0004f897) uni_indicator_pane_stacon_ParamLimits

0x575c,	// (0x0004f897) uni_indicator_pane_stacon

0x5771,	// (0x0004f8ac) battery_pane_stacon_ParamLimits

0x5771,	// (0x0004f8ac) battery_pane_stacon

0x57b5,	// (0x0004f8f0) control_bottom_pane_stacon_ParamLimits

0x57b5,	// (0x0004f8f0) control_bottom_pane_stacon

0x57d8,	// (0x0004f913) navi_pane_stacon_ParamLimits

0x57d8,	// (0x0004f913) navi_pane_stacon

0x916f,	// (0x000532aa) stacon_bottom_pane_g1_ParamLimits

0x916f,	// (0x000532aa) stacon_bottom_pane_g1

0x53af,	// (0x0004f4ea) aid_levels_signal_lsc_ParamLimits

0x53af,	// (0x0004f4ea) aid_levels_signal_lsc

0x53c5,	// (0x0004f500) signal_pane_stacon_g1_ParamLimits

0x53c5,	// (0x0004f500) signal_pane_stacon_g1

0x53d9,	// (0x0004f514) signal_pane_stacon_g2_ParamLimits

0x53d9,	// (0x0004f514) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00059804) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00059804) signal_pane_stacon_g

0x540e,	// (0x0004f549) title_pane_stacon_t1_ParamLimits

0x540e,	// (0x0004f549) title_pane_stacon_t1

0x8ba1,	// (0x00052cdc) uni_indicator_pane_stacon_g1

0x8bab,	// (0x00052ce6) uni_indicator_pane_stacon_g2

0x8bb5,	// (0x00052cf0) uni_indicator_pane_stacon_g3

0x8bbf,	// (0x00052cfa) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00059810) uni_indicator_pane_stacon_g

0x5433,	// (0x0004f56e) control_top_pane_stacon_g1

0x543b,	// (0x0004f576) control_top_pane_stacon_t1_ParamLimits

0x543b,	// (0x0004f576) control_top_pane_stacon_t1

0x5472,	// (0x0004f5ad) aid_levels_battery_lsc_ParamLimits

0x5472,	// (0x0004f5ad) aid_levels_battery_lsc

0x5489,	// (0x0004f5c4) battery_pane_stacon_g1_ParamLimits

0x5489,	// (0x0004f5c4) battery_pane_stacon_g1

0x549c,	// (0x0004f5d7) battery_pane_stacon_g2_ParamLimits

0x549c,	// (0x0004f5d7) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00059819) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00059819) battery_pane_stacon_g

0x54da,	// (0x0004f615) navi_icon_pane_stacon

0x54ee,	// (0x0004f629) navi_navi_pane_stacon

0x54da,	// (0x0004f615) navi_text_pane_stacon

0x5433,	// (0x0004f56e) control_bottom_pane_stacon_g1

0x5502,	// (0x0004f63d) control_bottom_pane_stacon_t1_ParamLimits

0x5502,	// (0x0004f63d) control_bottom_pane_stacon_t1

0x8be3,	// (0x00052d1e) grid_app_pane_ParamLimits

0x8be3,	// (0x00052d1e) grid_app_pane

0x8c07,	// (0x00052d42) scroll_pane_cp15_ParamLimits

0x8c07,	// (0x00052d42) scroll_pane_cp15

0x8c1a,	// (0x00052d55) cell_app_pane_ParamLimits

0x8c1a,	// (0x00052d55) cell_app_pane

0x8c3e,	// (0x00052d79) cell_app_pane_g1_ParamLimits

0x8c3e,	// (0x00052d79) cell_app_pane_g1

0x8c62,	// (0x00052d9d) cell_app_pane_g2_ParamLimits

0x8c62,	// (0x00052d9d) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005981e) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005981e) cell_app_pane_g

0x8c6e,	// (0x00052da9) cell_app_pane_t1_ParamLimits

0x8c6e,	// (0x00052da9) cell_app_pane_t1

0x8c85,	// (0x00052dc0) grid_highlight_pane_ParamLimits

0x8c85,	// (0x00052dc0) grid_highlight_pane

0x8884,	// (0x000529bf) cell_highlight_pane_g1

0x888c,	// (0x000529c7) cell_highlight_pane_g2

0x8894,	// (0x000529cf) cell_highlight_pane_g3

0x889c,	// (0x000529d7) cell_highlight_pane_g4

0x88a4,	// (0x000529df) cell_highlight_pane_g5

0x88ac,	// (0x000529e7) cell_highlight_pane_g6

0x88b4,	// (0x000529ef) cell_highlight_pane_g7

0x88bc,	// (0x000529f7) cell_highlight_pane_g8

0x88c4,	// (0x000529ff) cell_highlight_pane_g9

0x7ed3,	// (0x0005200e) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000597cc) cell_highlight_pane_g

0x8c96,	// (0x00052dd1) bg_scroll_pane

0x554c,	// (0x0004f687) scroll_handle_pane

0x8cdd,	// (0x00052e18) scroll_bg_pane_g1

0x8cf2,	// (0x00052e2d) scroll_bg_pane_g2

0x8d0a,	// (0x00052e45) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00059823) scroll_bg_pane_g

0x8d1f,	// (0x00052e5a) scroll_handle_focus_pane_ParamLimits

0x8d1f,	// (0x00052e5a) scroll_handle_focus_pane

0x8cdd,	// (0x00052e18) scroll_handle_pane_g1

0x8d2c,	// (0x00052e67) scroll_handle_pane_g2

0x8d0a,	// (0x00052e45) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005982a) scroll_handle_pane_g

0x88d5,	// (0x00052a10) bg_popup_sub_pane_cp21_ParamLimits

0x88d5,	// (0x00052a10) bg_popup_sub_pane_cp21

0x8d40,	// (0x00052e7b) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d40,	// (0x00052e7b) popup_fep_japan_predictive_window_t1

0x8d5a,	// (0x00052e95) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d5a,	// (0x00052e95) popup_fep_japan_predictive_window_t2

0x8d8d,	// (0x00052ec8) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d8d,	// (0x00052ec8) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00059831) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00059831) popup_fep_japan_predictive_window_t

0x7edd,	// (0x00052018) bg_popup_sub_pane_cp23

0x8dc4,	// (0x00052eff) listscroll_japin_cand_pane

0x8dcc,	// (0x00052f07) popup_fep_japan_candidate_window_t1

0x8dda,	// (0x00052f15) candidate_pane_ParamLimits

0x8dda,	// (0x00052f15) candidate_pane

0x8dec,	// (0x00052f27) scroll_pane_cp30

0x8df4,	// (0x00052f2f) list_single_popup_jap_candidate_pane_ParamLimits

0x8df4,	// (0x00052f2f) list_single_popup_jap_candidate_pane

0x7edd,	// (0x00052018) list_highlight_pane_cp30

0x8e09,	// (0x00052f44) list_single_popup_jap_candidate_pane_t1

0x8e18,	// (0x00052f53) level_1_signal

0x8e2a,	// (0x00052f65) level_2_signal

0x8e3d,	// (0x00052f78) level_3_signal

0x8e50,	// (0x00052f8b) level_4_signal

0x8e63,	// (0x00052f9e) level_5_signal

0x8e76,	// (0x00052fb1) level_6_signal

0x8e89,	// (0x00052fc4) level_7_signal

0x8e18,	// (0x00052f53) level_1_battery

0x8e2a,	// (0x00052f65) level_2_battery

0x8e3d,	// (0x00052f78) level_3_battery

0x8e50,	// (0x00052f8b) level_4_battery

0x8e63,	// (0x00052f9e) level_5_battery

0x8e76,	// (0x00052fb1) level_6_battery

0x8e89,	// (0x00052fc4) level_7_battery

0x8eb4,	// (0x00052fef) list_menu_pane_ParamLimits

0x8eb4,	// (0x00052fef) list_menu_pane

0x8eca,	// (0x00053005) scroll_pane_cp25_ParamLimits

0x8eca,	// (0x00053005) scroll_pane_cp25

0x8ee3,	// (0x0005301e) list_double2_graphic_pane_cp2_ParamLimits

0x8ee3,	// (0x0005301e) list_double2_graphic_pane_cp2

0x8ee3,	// (0x0005301e) list_double2_large_graphic_pane_cp2_ParamLimits

0x8ee3,	// (0x0005301e) list_double2_large_graphic_pane_cp2

0x8ee3,	// (0x0005301e) list_double2_pane_cp2_ParamLimits

0x8ee3,	// (0x0005301e) list_double2_pane_cp2

0x8ee3,	// (0x0005301e) list_double_graphic_pane_cp2_ParamLimits

0x8ee3,	// (0x0005301e) list_double_graphic_pane_cp2

0x8ee3,	// (0x0005301e) list_double_large_graphic_pane_cp2_ParamLimits

0x8ee3,	// (0x0005301e) list_double_large_graphic_pane_cp2

0x8ee3,	// (0x0005301e) list_double_number_pane_cp2_ParamLimits

0x8ee3,	// (0x0005301e) list_double_number_pane_cp2

0x8ee3,	// (0x0005301e) list_double_pane_cp2_ParamLimits

0x8ee3,	// (0x0005301e) list_double_pane_cp2

0x8f07,	// (0x00053042) list_single_2graphic_pane_cp2_ParamLimits

0x8f07,	// (0x00053042) list_single_2graphic_pane_cp2

0x8f07,	// (0x00053042) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f07,	// (0x00053042) list_single_graphic_heading_pane_cp2

0x8f07,	// (0x00053042) list_single_graphic_pane_cp2_ParamLimits

0x8f07,	// (0x00053042) list_single_graphic_pane_cp2

0x8f07,	// (0x00053042) list_single_heading_pane_cp2_ParamLimits

0x8f07,	// (0x00053042) list_single_heading_pane_cp2

0x8f20,	// (0x0005305b) list_single_large_graphic_pane_cp2_ParamLimits

0x8f20,	// (0x0005305b) list_single_large_graphic_pane_cp2

0x8f07,	// (0x00053042) list_single_number_heading_pane_cp2_ParamLimits

0x8f07,	// (0x00053042) list_single_number_heading_pane_cp2

0x8f07,	// (0x00053042) list_single_number_pane_cp2_ParamLimits

0x8f07,	// (0x00053042) list_single_number_pane_cp2

0x8f07,	// (0x00053042) list_single_pane_cp2_ParamLimits

0x8f07,	// (0x00053042) list_single_pane_cp2

0x8f9c,	// (0x000530d7) bg_popup_sub_pane_cp22

0x55fe,	// (0x0004f739) popup_side_volume_key_window_g1

0x5628,	// (0x0004f763) popup_side_volume_key_window_t1

0x5644,	// (0x0004f77f) volume_small_pane_cp1

0x8238,	// (0x00052373) bg_popup_sub_pane_cp24_ParamLimits

0x8238,	// (0x00052373) bg_popup_sub_pane_cp24

0x8fb2,	// (0x000530ed) fep_china_uni_candidate_pane_ParamLimits

0x8fb2,	// (0x000530ed) fep_china_uni_candidate_pane

0x8fc6,	// (0x00053101) fep_china_uni_entry_pane

0x8fd6,	// (0x00053111) popup_fep_china_uni_window_g1

0x8ff2,	// (0x0005312d) fep_china_uni_entry_pane_g1

0x8ffa,	// (0x00053135) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00059862) fep_china_uni_entry_pane_g

0x9002,	// (0x0005313d) fep_entry_item_pane

0x900c,	// (0x00053147) fep_candidate_item_pane

0x9014,	// (0x0005314f) fep_china_uni_candidate_pane_g1

0x901c,	// (0x00053157) fep_china_uni_candidate_pane_g2

0x9024,	// (0x0005315f) fep_china_uni_candidate_pane_g3

0x902c,	// (0x00053167) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00059867) fep_china_uni_candidate_pane_g

0x7ed3,	// (0x0005200e) fep_entry_item_pane_g1

0x9034,	// (0x0005316f) fep_entry_item_pane_t1_ParamLimits

0x9034,	// (0x0005316f) fep_entry_item_pane_t1

0x904a,	// (0x00053185) fep_candidate_item_pane_t1_ParamLimits

0x904a,	// (0x00053185) fep_candidate_item_pane_t1

0x905f,	// (0x0005319a) fep_candidate_item_pane_t2_ParamLimits

0x905f,	// (0x0005319a) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00059870) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00059870) fep_candidate_item_pane_t

0x7fbd,	// (0x000520f8) list_highlight_pane_cp31_ParamLimits

0x7fbd,	// (0x000520f8) list_highlight_pane_cp31

0x9071,	// (0x000531ac) level_1_signal_lsc

0x907a,	// (0x000531b5) level_2_signal_lsc

0x9083,	// (0x000531be) level_3_signal_lsc

0x908c,	// (0x000531c7) level_4_signal_lsc

0x9095,	// (0x000531d0) level_5_signal_lsc

0x909e,	// (0x000531d9) level_6_signal_lsc

0x90a7,	// (0x000531e2) level_7_signal_lsc

0x90a7,	// (0x000531e2) level_1_battery_lsc

0x90b0,	// (0x000531eb) level_2_battery_lsc

0x90b9,	// (0x000531f4) level_3_battery_lsc

0x90c2,	// (0x000531fd) level_4_battery_lsc

0x90cb,	// (0x00053206) level_5_battery_lsc

0x90d4,	// (0x0005320f) level_6_battery_lsc

0x9071,	// (0x000531ac) level_7_battery_lsc

0x90dd,	// (0x00053218) scroll_handle_focus_pane_g1

0x90e6,	// (0x00053221) scroll_handle_focus_pane_g2

0x90ef,	// (0x0005322a) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00059875) scroll_handle_focus_pane_g

0x564c,	// (0x0004f787) list_single_2graphic_pane_g1_ParamLimits

0x564c,	// (0x0004f787) list_single_2graphic_pane_g1

0x74ac,	// (0x000515e7) list_single_2graphic_pane_g2_ParamLimits

0x74ac,	// (0x000515e7) list_single_2graphic_pane_g2

0x748e,	// (0x000515c9) list_single_2graphic_pane_g3_ParamLimits

0x748e,	// (0x000515c9) list_single_2graphic_pane_g3

0x5658,	// (0x0004f793) list_single_2graphic_pane_g4_ParamLimits

0x5658,	// (0x0004f793) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005987c) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005987c) list_single_2graphic_pane_g

0x5664,	// (0x0004f79f) list_single_2graphic_pane_t1_ParamLimits

0x5664,	// (0x0004f79f) list_single_2graphic_pane_t1

0x752e,	// (0x00051669) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x752e,	// (0x00051669) list_double2_graphic_large_graphic_pane_g1

0x4f4c,	// (0x0004f087) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f4c,	// (0x0004f087) list_double2_graphic_large_graphic_pane_g2

0x74f5,	// (0x00051630) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x74f5,	// (0x00051630) list_double2_graphic_large_graphic_pane_g3

0x753e,	// (0x00051679) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x753e,	// (0x00051679) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00059885) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00059885) list_double2_graphic_large_graphic_pane_g

0x5692,	// (0x0004f7cd) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5692,	// (0x0004f7cd) list_double2_graphic_large_graphic_pane_t1

0x56a8,	// (0x0004f7e3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x56a8,	// (0x0004f7e3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005988e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005988e) list_double2_graphic_large_graphic_pane_t

0x9237,	// (0x00053372) popup_fast_swap_window_ParamLimits

0x9237,	// (0x00053372) popup_fast_swap_window

0x9253,	// (0x0005338e) popup_side_volume_key_window

0x926f,	// (0x000533aa) stacon_top_pane

0x9279,	// (0x000533b4) status_pane_ParamLimits

0x9279,	// (0x000533b4) status_pane

0x9287,	// (0x000533c2) status_small_pane

0x7edd,	// (0x00052018) control_pane

0x7edd,	// (0x00052018) stacon_bottom_pane

0x881b,	// (0x00052956) scroll_pane_cp121

0x8812,	// (0x0005294d) set_content_pane

0x90f8,	// (0x00053233) bg_active_tab_pane_g1_cp1

0x9101,	// (0x0005323c) bg_active_tab_pane_g2_cp1

0x910a,	// (0x00053245) bg_active_tab_pane_g3_cp1

0x90f8,	// (0x00053233) bg_passive_tab_pane_g1_cp1

0x9101,	// (0x0005323c) bg_passive_tab_pane_g2_cp1

0x910a,	// (0x00053245) bg_passive_tab_pane_g3_cp1

0x9113,	// (0x0005324e) bg_active_tab_pane_g1_cp2

0x9101,	// (0x0005323c) bg_active_tab_pane_g2_cp2

0x911c,	// (0x00053257) bg_active_tab_pane_g3_cp2

0x9113,	// (0x0005324e) bg_passive_tab_pane_g1_cp2

0x9101,	// (0x0005323c) bg_passive_tab_pane_g2_cp2

0x911c,	// (0x00053257) bg_passive_tab_pane_g3_cp2

0x9125,	// (0x00053260) bg_active_tab_pane_g1_cp3

0x9101,	// (0x0005323c) bg_active_tab_pane_g2_cp3

0x912e,	// (0x00053269) bg_active_tab_pane_g3_cp3

0x9125,	// (0x00053260) bg_passive_tab_pane_g1_cp3

0x9101,	// (0x0005323c) bg_passive_tab_pane_g2_cp3

0x912e,	// (0x00053269) bg_passive_tab_pane_g3_cp3

0x9137,	// (0x00053272) bg_active_tab_pane_g1_cp4

0x9101,	// (0x0005323c) bg_active_tab_pane_g2_cp4

0x9142,	// (0x0005327d) bg_active_tab_pane_g3_cp4

0x9137,	// (0x00053272) bg_passive_tab_pane_g1_cp4

0x9101,	// (0x0005323c) bg_passive_tab_pane_g2_cp4

0x9142,	// (0x0005327d) bg_passive_tab_pane_g3_cp4

0x918b,	// (0x000532c6) bg_active_tab_pane_g1_cp5

0x9101,	// (0x0005323c) bg_active_tab_pane_g2_cp5

0x9194,	// (0x000532cf) bg_active_tab_pane_g3_cp5

0x918b,	// (0x000532c6) bg_passive_tab_pane_g1_cp5

0x9101,	// (0x0005323c) bg_passive_tab_pane_g2_cp5

0x9194,	// (0x000532cf) bg_passive_tab_pane_g3_cp5

0x919d,	// (0x000532d8) list_set_graphic_pane_ParamLimits

0x919d,	// (0x000532d8) list_set_graphic_pane

0x7edd,	// (0x00052018) bg_set_opt_pane_cp4

0x91ba,	// (0x000532f5) list_set_graphic_pane_g1_ParamLimits

0x91ba,	// (0x000532f5) list_set_graphic_pane_g1

0x91c6,	// (0x00053301) list_set_graphic_pane_g2_ParamLimits

0x91c6,	// (0x00053301) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00059893) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00059893) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x00059c08) volume_small_pane_cp_g

0x91ea,	// (0x00053325) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91ea,	// (0x00053325) list_double2_large_graphic_pane_g1_cp2

0x91f6,	// (0x00053331) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91f6,	// (0x00053331) list_double2_large_graphic_pane_g2_cp2

0x9207,	// (0x00053342) list_double2_large_graphic_pane_g3_cp2

0x920f,	// (0x0005334a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x920f,	// (0x0005334a) list_double2_large_graphic_pane_t1_cp2

0x9225,	// (0x00053360) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9225,	// (0x00053360) list_double2_large_graphic_pane_t2_cp2

0xadfd,	// (0x00054f38) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadfd,	// (0x00054f38) list_double_large_graphic_pane_g1_cp2

0xae0e,	// (0x00054f49) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae0e,	// (0x00054f49) list_double_large_graphic_pane_g2_cp2

0x93a0,	// (0x000534db) list_double_large_graphic_pane_g3_cp2

0xae1f,	// (0x00054f5a) list_double_large_graphic_pane_g4_cp

0xae27,	// (0x00054f62) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae27,	// (0x00054f62) list_double_large_graphic_pane_t1_cp2

0xae3e,	// (0x00054f79) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae3e,	// (0x00054f79) list_double_large_graphic_pane_t2_cp2

0x9292,	// (0x000533cd) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9292,	// (0x000533cd) list_double2_graphic_pane_g1_cp2

0x92a0,	// (0x000533db) list_double2_graphic_pane_g2_cp2_ParamLimits

0x92a0,	// (0x000533db) list_double2_graphic_pane_g2_cp2

0x92b1,	// (0x000533ec) list_double2_graphic_pane_g3_cp2

0x92bb,	// (0x000533f6) list_double2_graphic_pane_t1_cp2_ParamLimits

0x92bb,	// (0x000533f6) list_double2_graphic_pane_t1_cp2

0x92d1,	// (0x0005340c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92d1,	// (0x0005340c) list_double2_graphic_pane_t2_cp2

0x92e3,	// (0x0005341e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92e3,	// (0x0005341e) list_single_number_heading_pane_g1_cp2

0x92ef,	// (0x0005342a) list_single_number_heading_pane_g2_cp2

0x92f7,	// (0x00053432) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92f7,	// (0x00053432) list_single_number_heading_pane_t1_cp2

0x930d,	// (0x00053448) list_single_number_heading_pane_t2_cp2_ParamLimits

0x930d,	// (0x00053448) list_single_number_heading_pane_t2_cp2

0x931f,	// (0x0005345a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x931f,	// (0x0005345a) list_single_number_heading_pane_t3_cp2

0x92e3,	// (0x0005341e) list_single_heading_pane_g1_cp2_ParamLimits

0x92e3,	// (0x0005341e) list_single_heading_pane_g1_cp2

0x92ef,	// (0x0005342a) list_single_heading_pane_g2_cp2

0x92f7,	// (0x00053432) list_single_heading_pane_t1_cp2_ParamLimits

0x92f7,	// (0x00053432) list_single_heading_pane_t1_cp2

0xac05,	// (0x00054d40) list_single_heading_pane_t2_cp2_ParamLimits

0xac05,	// (0x00054d40) list_single_heading_pane_t2_cp2

0xab4d,	// (0x00054c88) list_double_graphic_pane_g1_cp2_ParamLimits

0xab4d,	// (0x00054c88) list_double_graphic_pane_g1_cp2

0xab59,	// (0x00054c94) list_double_graphic_pane_g2_cp2_ParamLimits

0xab59,	// (0x00054c94) list_double_graphic_pane_g2_cp2

0xab68,	// (0x00054ca3) list_double_graphic_pane_g3_cp2

0xab70,	// (0x00054cab) list_double_graphic_pane_t1_cp2_ParamLimits

0xab70,	// (0x00054cab) list_double_graphic_pane_t1_cp2

0xab86,	// (0x00054cc1) list_double_graphic_pane_t2_cp2_ParamLimits

0xab86,	// (0x00054cc1) list_double_graphic_pane_t2_cp2

0x9394,	// (0x000534cf) list_double_number_pane_g1_cp2_ParamLimits

0x9394,	// (0x000534cf) list_double_number_pane_g1_cp2

0x93a0,	// (0x000534db) list_double_number_pane_g2_cp2

0xab11,	// (0x00054c4c) list_double_number_pane_t1_cp2_ParamLimits

0xab11,	// (0x00054c4c) list_double_number_pane_t1_cp2

0xab25,	// (0x00054c60) list_double_number_pane_t2_cp2_ParamLimits

0xab25,	// (0x00054c60) list_double_number_pane_t2_cp2

0xab3b,	// (0x00054c76) list_double_number_pane_t3_cp2_ParamLimits

0xab3b,	// (0x00054c76) list_double_number_pane_t3_cp2

0xa9fa,	// (0x00054b35) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9fa,	// (0x00054b35) list_single_graphic_pane_g1_cp2

0x93f8,	// (0x00053533) list_single_graphic_pane_g2_cp2_ParamLimits

0x93f8,	// (0x00053533) list_single_graphic_pane_g2_cp2

0x9404,	// (0x0005353f) list_single_graphic_pane_g3_cp2

0xa9d0,	// (0x00054b0b) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9d0,	// (0x00054b0b) list_single_graphic_pane_t1_cp2

0x93f8,	// (0x00053533) list_single_number_pane_g1_cp2_ParamLimits

0x93f8,	// (0x00053533) list_single_number_pane_g1_cp2

0x9404,	// (0x0005353f) list_single_number_pane_g2_cp2

0xa9d0,	// (0x00054b0b) list_single_number_pane_t1_cp2_ParamLimits

0xa9d0,	// (0x00054b0b) list_single_number_pane_t1_cp2

0xa9e6,	// (0x00054b21) list_single_number_pane_t2_cp2_ParamLimits

0xa9e6,	// (0x00054b21) list_single_number_pane_t2_cp2

0x91f6,	// (0x00053331) list_double2_pane_g1_cp2_ParamLimits

0x91f6,	// (0x00053331) list_double2_pane_g1_cp2

0x9207,	// (0x00053342) list_double2_pane_g2_cp2

0x936c,	// (0x000534a7) list_double2_pane_t1_cp2_ParamLimits

0x936c,	// (0x000534a7) list_double2_pane_t1_cp2

0x9382,	// (0x000534bd) list_double2_pane_t2_cp2_ParamLimits

0x9382,	// (0x000534bd) list_double2_pane_t2_cp2

0x9394,	// (0x000534cf) list_double_pane_g1_cp2_ParamLimits

0x9394,	// (0x000534cf) list_double_pane_g1_cp2

0x93a0,	// (0x000534db) list_double_pane_g2_cp2

0x93a8,	// (0x000534e3) list_double_pane_t1_cp2_ParamLimits

0x93a8,	// (0x000534e3) list_double_pane_t1_cp2

0x93be,	// (0x000534f9) list_double_pane_t2_cp2_ParamLimits

0x93be,	// (0x000534f9) list_double_pane_t2_cp2

0x93e8,	// (0x00053523) list_single_pane_cp2_g3

0x93f8,	// (0x00053533) list_single_pane_g1_cp2_ParamLimits

0x93f8,	// (0x00053533) list_single_pane_g1_cp2

0x9404,	// (0x0005353f) list_single_pane_g2_cp2

0x940c,	// (0x00053547) list_single_pane_t1_cp2_ParamLimits

0x940c,	// (0x00053547) list_single_pane_t1_cp2

0x9424,	// (0x0005355f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9424,	// (0x0005355f) list_single_large_graphic_pane_g1_cp2

0x9430,	// (0x0005356b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9430,	// (0x0005356b) list_single_large_graphic_pane_g2_cp2

0x943c,	// (0x00053577) list_single_large_graphic_pane_g3_cp2

0x9444,	// (0x0005357f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9444,	// (0x0005357f) list_single_large_graphic_pane_g4_cp1

0x945e,	// (0x00053599) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x945e,	// (0x00053599) list_single_large_graphic_pane_t1_cp2

0xa99c,	// (0x00054ad7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa99c,	// (0x00054ad7) list_single_graphic_heading_pane_g1_cp2

0xa969,	// (0x00054aa4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa969,	// (0x00054aa4) list_single_graphic_heading_pane_g4_cp2

0x9404,	// (0x0005353f) list_single_graphic_heading_pane_g5_cp2

0xa9a8,	// (0x00054ae3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa9a8,	// (0x00054ae3) list_single_graphic_heading_pane_t1_cp2

0xa9be,	// (0x00054af9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa9be,	// (0x00054af9) list_single_graphic_heading_pane_t2_cp2

0xa95d,	// (0x00054a98) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa95d,	// (0x00054a98) list_single_2graphic_pane_g1_cp2

0xa969,	// (0x00054aa4) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa969,	// (0x00054aa4) list_single_2graphic_pane_g2_cp2

0x9404,	// (0x0005353f) list_single_2graphic_pane_g3_cp2

0xa97a,	// (0x00054ab5) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa97a,	// (0x00054ab5) list_single_2graphic_pane_g4_cp2

0xa986,	// (0x00054ac1) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa986,	// (0x00054ac1) list_single_2graphic_pane_t1_cp2

0x7ed3,	// (0x0005200e) list_highlight_pane_g10_cp1

0xa535,	// (0x00054670) list_highlight_pane_g1_cp1

0xa53d,	// (0x00054678) list_highlight_pane_g2_cp1

0xa545,	// (0x00054680) list_highlight_pane_g3_cp1

0xa54d,	// (0x00054688) list_highlight_pane_g4_cp1

0xa555,	// (0x00054690) list_highlight_pane_g5_cp1

0xa55d,	// (0x00054698) list_highlight_pane_g6_cp1

0xa565,	// (0x000546a0) list_highlight_pane_g7_cp1

0xa56d,	// (0x000546a8) list_highlight_pane_g8_cp1

0xa575,	// (0x000546b0) list_highlight_pane_g9_cp1

0xa455,	// (0x00054590) form_field_slider_pane_t3

0xa463,	// (0x0005459e) form_field_slider_pane_t4

0xa471,	// (0x000545ac) slider_form_pane_ParamLimits

0xa471,	// (0x000545ac) slider_form_pane

0x7edd,	// (0x00052018) control_abbreviations

0x7edd,	// (0x00052018) control_conventions

0x7edd,	// (0x00052018) control_definitions

0x7edd,	// (0x00052018) format_table_attribute

0xac4f,	// (0x00054d8a) bg_popup_preview_window_pane_g9

0x7edd,	// (0x00052018) format_table_data2

0x7edd,	// (0x00052018) format_table_data3

0x7edd,	// (0x00052018) format_table_data_example

0x0008,

0x7edd,	// (0x00052018) intro_purpose

0xf8f4,	// (0x00059a2f) bg_popup_preview_window_pane_g

0x7edd,	// (0x00052018) texts_category

0x7edd,	// (0x00052018) texts_graphics

0x9474,	// (0x000535af) text_digital

0x9483,	// (0x000535be) text_primary

0x9492,	// (0x000535cd) text_primary_small

0x94a1,	// (0x000535dc) text_secondary

0x94b0,	// (0x000535eb) text_title

0xb334,	// (0x0005546f) bg_passive_tab_pane_g1_cp3_srt

0x9101,	// (0x0005323c) bg_passive_tab_pane_g2_cp3_srt

0xb33d,	// (0x00055478) bg_passive_tab_pane_g3_cp3_srt

0x7fbd,	// (0x000520f8) bg_active_tab_pane_cp3_srt_ParamLimits

0x7fbd,	// (0x000520f8) bg_active_tab_pane_cp3_srt

0xb346,	// (0x00055481) tabs_4_active_pane_srt_g1

0xb34e,	// (0x00055489) tabs_4_active_pane_srt_t1_ParamLimits

0xb34e,	// (0x00055489) tabs_4_active_pane_srt_t1

0xb334,	// (0x0005546f) bg_active_tab_pane_g1_cp3_copy1

0x9101,	// (0x0005323c) bg_active_tab_pane_g2_cp3_copy1

0xb33d,	// (0x00055478) bg_active_tab_pane_g3_cp3_copy1

0x7fbd,	// (0x000520f8) tabs_2_long_active_pane_srt_ParamLimits

0x7fbd,	// (0x000520f8) tabs_2_long_active_pane_srt

0x7fbd,	// (0x000520f8) tabs_2_long_passive_pane_srt_ParamLimits

0x7fbd,	// (0x000520f8) tabs_2_long_passive_pane_srt

0x8a0d,	// (0x00052b48) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8a0d,	// (0x00052b48) bg_passive_tab_pane_cp4_srt

0xb07d,	// (0x000551b8) bg_passive_tab_pane_g1_cp4_srt

0x9101,	// (0x0005323c) bg_passive_tab_pane_g2_cp4_srt

0xb086,	// (0x000551c1) bg_passive_tab_pane_g3_cp4_srt

0x89ec,	// (0x00052b27) bg_active_tab_pane_cp4_srt_ParamLimits

0x89ec,	// (0x00052b27) bg_active_tab_pane_cp4_srt

0xb08f,	// (0x000551ca) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb08f,	// (0x000551ca) tabs_2_long_active_pane_srt_t1

0xb07d,	// (0x000551b8) bg_active_tab_pane_g1_cp4_srt

0x9101,	// (0x0005323c) bg_active_tab_pane_g2_cp4_srt

0xb086,	// (0x000551c1) bg_active_tab_pane_g3_cp4_srt

0x8238,	// (0x00052373) tabs_3_long_active_pane_srt_ParamLimits

0x8238,	// (0x00052373) tabs_3_long_active_pane_srt

0x8238,	// (0x00052373) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8238,	// (0x00052373) tabs_3_long_passive_pane_cp_srt

0x8238,	// (0x00052373) tabs_3_long_passive_pane_srt_ParamLimits

0x8238,	// (0x00052373) tabs_3_long_passive_pane_srt

0x8a0d,	// (0x00052b48) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8a0d,	// (0x00052b48) bg_passive_tab_pane_cp5_srt

0x918b,	// (0x000532c6) bg_passive_tab_pane_g1_cp5_srt

0x9101,	// (0x0005323c) bg_passive_tab_pane_g2_cp5_srt

0x9194,	// (0x000532cf) bg_passive_tab_pane_g3_cp5_srt

0x89ec,	// (0x00052b27) bg_active_tab_pane_cp5_srt_ParamLimits

0x89ec,	// (0x00052b27) bg_active_tab_pane_cp5_srt

0xb06b,	// (0x000551a6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb06b,	// (0x000551a6) tabs_3_long_active_pane_srt_t1

0x918b,	// (0x000532c6) bg_active_tab_pane_g1_cp5_srt

0x9101,	// (0x0005323c) bg_active_tab_pane_g2_cp5_srt

0x9194,	// (0x000532cf) bg_active_tab_pane_g3_cp5_srt

0xb05d,	// (0x00055198) navi_text_pane_srt_t1

0xb055,	// (0x00055190) navi_icon_pane_srt_g1

0x9685,	// (0x000537c0) midp_editing_number_pane_srt

0x94bf,	// (0x000535fa) midp_ticker_pane_srt

0x968d,	// (0x000537c8) midp_ticker_pane_srt_g1

0x9695,	// (0x000537d0) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x000598b2) midp_ticker_pane_srt_g

0x969d,	// (0x000537d8) midp_ticker_pane_srt_t1

0xb046,	// (0x00055181) midp_editing_number_pane_t1_copy1

0x94c7,	// (0x00053602) listscroll_midp_pane

0x94c7,	// (0x00053602) midp_form_pane

0x9537,	// (0x00053672) midp_info_popup_window_ParamLimits

0x9537,	// (0x00053672) midp_info_popup_window

0x88d5,	// (0x00052a10) bg_popup_sub_pane_cp50_ParamLimits

0x88d5,	// (0x00052a10) bg_popup_sub_pane_cp50

0xa16d,	// (0x000542a8) listscroll_midp_info_pane_ParamLimits

0xa16d,	// (0x000542a8) listscroll_midp_info_pane

0xa14d,	// (0x00054288) listscroll_form_midp_pane_ParamLimits

0xa14d,	// (0x00054288) listscroll_form_midp_pane

0xa159,	// (0x00054294) scroll_bar_cp050

0xa12d,	// (0x00054268) list_midp_pane

0xbd77,	// (0x00055eb2) signal_pane_g2_cp

0xa067,	// (0x000541a2) listscroll_midp_info_pane_t1_ParamLimits

0xa067,	// (0x000541a2) listscroll_midp_info_pane_t1

0xa07f,	// (0x000541ba) listscroll_midp_info_pane_t2_ParamLimits

0xa07f,	// (0x000541ba) listscroll_midp_info_pane_t2

0xa0bd,	// (0x000541f8) listscroll_midp_info_pane_t3_ParamLimits

0xa0bd,	// (0x000541f8) listscroll_midp_info_pane_t3

0xa0f7,	// (0x00054232) listscroll_midp_info_pane_t4_ParamLimits

0xa0f7,	// (0x00054232) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0005996a) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0005996a) listscroll_midp_info_pane_t

0x8999,	// (0x00052ad4) scroll_pane_cp21

0xa005,	// (0x00054140) form_midp_field_choice_group_pane

0xa00e,	// (0x00054149) form_midp_field_text_pane

0xa04d,	// (0x00054188) form_midp_field_time_pane

0xa055,	// (0x00054190) form_midp_gauge_slider_pane

0xa05e,	// (0x00054199) form_midp_gauge_wait_pane

0x7edd,	// (0x00052018) form_midp_image_pane

0x75f1,	// (0x0005172c) list_single_midp_pane_ParamLimits

0x75f1,	// (0x0005172c) list_single_midp_pane

0x9fc0,	// (0x000540fb) form_midp_field_text_pane_t1

0x9d93,	// (0x00053ece) input_focus_pane_cp050

0x9ff4,	// (0x0005412f) list_midp_form_text_pane

0x9f8f,	// (0x000540ca) form_midp_field_choice_group_pane_t1

0x9f9d,	// (0x000540d8) input_focus_pane_cp051

0x9fb1,	// (0x000540ec) list_midp_choice_pane

0x7edd,	// (0x00052018) status_idle_pane

0x9f73,	// (0x000540ae) form_midp_field_time_pane_t1

0x7ed3,	// (0x0005200e) wait_anim_pane_g2_copy1

0x9f81,	// (0x000540bc) form_midp_field_time_pane_t2

0x0001,

0x95e5,	// (0x00053720) aid_navinavi_width_2_pane

0xf82a,	// (0x00059965) form_midp_field_time_pane_t

0x7edd,	// (0x00052018) input_focus_pane_cp052

0x7edd,	// (0x00052018) bg_input_focus_pane_cp040

0x9f33,	// (0x0005406e) form_midp_gauge_slider_pane_t1

0x9f41,	// (0x0005407c) form_midp_gauge_slider_pane_t2

0x9f4f,	// (0x0005408a) form_midp_gauge_slider_pane_t3

0x9f5d,	// (0x00054098) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0005995c) form_midp_gauge_slider_pane_t

0x9f6b,	// (0x000540a6) form_midp_slider_pane

0x7fbd,	// (0x000520f8) bg_input_focus_pane_cp041_ParamLimits

0x7fbd,	// (0x000520f8) bg_input_focus_pane_cp041

0x9f00,	// (0x0005403b) form_midp_gauge_wait_pane_t1_ParamLimits

0x9f00,	// (0x0005403b) form_midp_gauge_wait_pane_t1

0x9f12,	// (0x0005404d) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f12,	// (0x0005404d) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00059957) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00059957) form_midp_gauge_wait_pane_t

0x9f24,	// (0x0005405f) form_midp_wait_pane_ParamLimits

0x9f24,	// (0x0005405f) form_midp_wait_pane

0x9eca,	// (0x00054005) form_midp_image_pane_g1

0x9ed3,	// (0x0005400e) form_midp_image_pane_t1

0x9ee2,	// (0x0005401d) form_midp_image_pane_t2

0x9ef1,	// (0x0005402c) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00059950) form_midp_image_pane_t

0x9ec1,	// (0x00053ffc) list_single_midp_pane_g1

0x75e2,	// (0x0005171d) list_single_midp_pane_t1

0x9e9c,	// (0x00053fd7) list_midp_form_item_pane_ParamLimits

0x9e9c,	// (0x00053fd7) list_midp_form_item_pane

0x958d,	// (0x000536c8) list_midp_form_item_pane_t1

0x959c,	// (0x000536d7) midp_ticker_pane_g1

0x95a8,	// (0x000536e3) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00059898) midp_ticker_pane_g

0x95b4,	// (0x000536ef) midp_ticker_pane_t1

0xb297,	// (0x000553d2) midp_editing_number_pane_t1

0xb275,	// (0x000553b0) midp_editing_number_pane

0xb284,	// (0x000553bf) midp_ticker_pane

0xb036,	// (0x00055171) ai_message_heading_pane

0x7edd,	// (0x00052018) bg_popup_window_pane_cp14

0xb03e,	// (0x00055179) listscroll_ai_message_pane

0xafc0,	// (0x000550fb) ai_message_heading_pane_g1_ParamLimits

0xafc0,	// (0x000550fb) ai_message_heading_pane_g1

0xafcc,	// (0x00055107) ai_message_heading_pane_g2_ParamLimits

0xafcc,	// (0x00055107) ai_message_heading_pane_g2

0xafd8,	// (0x00055113) ai_message_heading_pane_g3_ParamLimits

0xafd8,	// (0x00055113) ai_message_heading_pane_g3

0xafe4,	// (0x0005511f) ai_message_heading_pane_g4_ParamLimits

0xafe4,	// (0x0005511f) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00059a91) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00059a91) ai_message_heading_pane_g

0xaff0,	// (0x0005512b) ai_message_heading_pane_t1_ParamLimits

0xaff0,	// (0x0005512b) ai_message_heading_pane_t1

0xb00a,	// (0x00055145) ai_message_heading_pane_t2_ParamLimits

0xb00a,	// (0x00055145) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00059a9a) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00059a9a) ai_message_heading_pane_t

0xb01c,	// (0x00055157) bg_popup_heading_pane_cp1_ParamLimits

0xb01c,	// (0x00055157) bg_popup_heading_pane_cp1

0xafae,	// (0x000550e9) list_ai_message_pane_ParamLimits

0xafae,	// (0x000550e9) list_ai_message_pane

0x8999,	// (0x00052ad4) scroll_pane_cp10

0xaf4a,	// (0x00055085) list_ai_message_pane_g1

0xaf52,	// (0x0005508d) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00059a6e) list_ai_message_pane_g

0xaf5a,	// (0x00055095) list_ai_message_pane_t1_ParamLimits

0xaf5a,	// (0x00055095) list_ai_message_pane_t1

0xaf6f,	// (0x000550aa) list_ai_message_pane_t2_ParamLimits

0xaf6f,	// (0x000550aa) list_ai_message_pane_t2

0xaf84,	// (0x000550bf) list_ai_message_pane_t3_ParamLimits

0xaf84,	// (0x000550bf) list_ai_message_pane_t3

0xaf99,	// (0x000550d4) list_ai_message_pane_t4_ParamLimits

0xaf99,	// (0x000550d4) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00059a73) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00059a73) list_ai_message_pane_t

0xaf35,	// (0x00055070) cell_ai_soft_ind_pane_ParamLimits

0xaf35,	// (0x00055070) cell_ai_soft_ind_pane

0x95c6,	// (0x00053701) cell_ai_soft_ind_pane_g1_ParamLimits

0x95c6,	// (0x00053701) cell_ai_soft_ind_pane_g1

0x7edd,	// (0x00052018) grid_highlight_cp1

0x95d3,	// (0x0005370e) text_secondary_cp56_ParamLimits

0x95d3,	// (0x0005370e) text_secondary_cp56

0xaf0a,	// (0x00055045) example_general_pane_ParamLimits

0xaf0a,	// (0x00055045) example_general_pane

0xaf16,	// (0x00055051) example_parent_pane_g1_ParamLimits

0xaf16,	// (0x00055051) example_parent_pane_g1

0xaf22,	// (0x0005505d) example_parent_pane_t1_ParamLimits

0xaf22,	// (0x0005505d) example_parent_pane_t1

0x5db9,	// (0x0004fef4) popup_preview_text_window_ParamLimits

0x5db9,	// (0x0004fef4) popup_preview_text_window

0x93f0,	// (0x0005352b) list_single_pane_cp2_g4

0x82ee,	// (0x00052429) bg_popup_preview_window_pane_ParamLimits

0x82ee,	// (0x00052429) bg_popup_preview_window_pane

0xac57,	// (0x00054d92) popup_preview_text_window_t1_ParamLimits

0xac57,	// (0x00054d92) popup_preview_text_window_t1

0xac75,	// (0x00054db0) popup_preview_text_window_t2_ParamLimits

0xac75,	// (0x00054db0) popup_preview_text_window_t2

0xacbe,	// (0x00054df9) popup_preview_text_window_t3_ParamLimits

0xacbe,	// (0x00054df9) popup_preview_text_window_t3

0xad03,	// (0x00054e3e) popup_preview_text_window_t4_ParamLimits

0xad03,	// (0x00054e3e) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00059a42) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00059a42) popup_preview_text_window_t

0xad81,	// (0x00054ebc) scroll_pane_cp11

0x9d1f,	// (0x00053e5a) bg_popup_preview_window_pane_g1

0xac17,	// (0x00054d52) bg_popup_preview_window_pane_g2

0xac1f,	// (0x00054d5a) bg_popup_preview_window_pane_g3

0xac27,	// (0x00054d62) bg_popup_preview_window_pane_g4

0xac2f,	// (0x00054d6a) bg_popup_preview_window_pane_g5

0xac37,	// (0x00054d72) bg_popup_preview_window_pane_g6

0xac3f,	// (0x00054d7a) bg_popup_preview_window_pane_g7

0xac47,	// (0x00054d82) bg_popup_preview_window_pane_g8

0x4845,	// (0x0004e980) aid_popup_width_pane

0x5d97,	// (0x0004fed2) popup_midp_note_alarm_window_ParamLimits

0x5d97,	// (0x0004fed2) popup_midp_note_alarm_window

0x882c,	// (0x00052967) data_form_pane_ParamLimits

0x51f8,	// (0x0004f333) form_field_data_pane_g1

0x5202,	// (0x0004f33d) form_field_data_pane_t1_ParamLimits

0x8838,	// (0x00052973) input_focus_pane_ParamLimits

0x521a,	// (0x0004f355) data_form_wide_pane_ParamLimits

0x522b,	// (0x0004f366) form_field_data_wide_pane_g1

0x5237,	// (0x0004f372) form_field_data_wide_pane_t1_ParamLimits

0x859d,	// (0x000526d8) input_focus_pane_cp6_ParamLimits

0x8946,	// (0x00052a81) input_popup_find_pane_g1_ParamLimits

0x8946,	// (0x00052a81) input_popup_find_pane_g1

0x54ad,	// (0x0004f5e8) aid_navi_side_left_pane

0x54c2,	// (0x0004f5fd) aid_navi_side_right_pane

0xa630,	// (0x0005476b) bg_popup_window_pane_cp30_ParamLimits

0xa630,	// (0x0005476b) bg_popup_window_pane_cp30

0xa6aa,	// (0x000547e5) popup_midp_note_alarm_window_g1_ParamLimits

0xa6aa,	// (0x000547e5) popup_midp_note_alarm_window_g1

0xa6da,	// (0x00054815) popup_midp_note_alarm_window_t1_ParamLimits

0xa6da,	// (0x00054815) popup_midp_note_alarm_window_t1

0xa77b,	// (0x000548b6) popup_midp_note_alarm_window_t2_ParamLimits

0xa77b,	// (0x000548b6) popup_midp_note_alarm_window_t2

0xa829,	// (0x00054964) popup_midp_note_alarm_window_t3_ParamLimits

0xa829,	// (0x00054964) popup_midp_note_alarm_window_t3

0xa85b,	// (0x00054996) popup_midp_note_alarm_window_t4_ParamLimits

0xa85b,	// (0x00054996) popup_midp_note_alarm_window_t4

0xa881,	// (0x000549bc) popup_midp_note_alarm_window_t5_ParamLimits

0xa881,	// (0x000549bc) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x000599df) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x000599df) popup_midp_note_alarm_window_t

0xa92d,	// (0x00054a68) wait_bar_pane_cp1_ParamLimits

0xa92d,	// (0x00054a68) wait_bar_pane_cp1

0x7edd,	// (0x00052018) wait_anim_pane_copy1

0x7edd,	// (0x00052018) wait_border_pane_copy1

0xa316,	// (0x00054451) wait_border_pane_g1_copy1

0x5251,	// (0x0004f38c) form_field_popup_pane_g1

0x5259,	// (0x0004f394) form_field_popup_pane_t1_ParamLimits

0x8838,	// (0x00052973) input_focus_pane_cp7_ParamLimits

0x885a,	// (0x00052995) list_form_pane_ParamLimits

0x5271,	// (0x0004f3ac) form_field_popup_wide_pane_g1

0x5279,	// (0x0004f3b4) form_field_popup_wide_pane_t1_ParamLimits

0x8838,	// (0x00052973) input_focus_pane_cp8_ParamLimits

0x8866,	// (0x000529a1) list_form_wide_pane_ParamLimits

0xb3c8,	// (0x00055503) aid_size_cell_graphic_pane

0x5303,	// (0x0004f43e) data_form_pane_t1_ParamLimits

0x7643,	// (0x0005177e) data_form_wide_pane_t1_ParamLimits

0x98ec,	// (0x00053a27) bg_status_flat_pane

0x7f1d,	// (0x00052058) title_pane_t1_ParamLimits

0x7f85,	// (0x000520c0) title_pane_t2_ParamLimits

0x7fab,	// (0x000520e6) title_pane_t3_ParamLimits

0xf557,	// (0x00059692) title_pane_t_ParamLimits

0x8e18,	// (0x00052f53) level_1_signal_ParamLimits

0x8e2a,	// (0x00052f65) level_2_signal_ParamLimits

0x8e3d,	// (0x00052f78) level_3_signal_ParamLimits

0x8e50,	// (0x00052f8b) level_4_signal_ParamLimits

0x8e63,	// (0x00052f9e) level_5_signal_ParamLimits

0x8e76,	// (0x00052fb1) level_6_signal_ParamLimits

0x8e89,	// (0x00052fc4) level_7_signal_ParamLimits

0x8e18,	// (0x00052f53) level_1_battery_ParamLimits

0x8e2a,	// (0x00052f65) level_2_battery_ParamLimits

0x8e3d,	// (0x00052f78) level_3_battery_ParamLimits

0x8e50,	// (0x00052f8b) level_4_battery_ParamLimits

0x8e63,	// (0x00052f9e) level_5_battery_ParamLimits

0x8e76,	// (0x00052fb1) level_6_battery_ParamLimits

0x8e89,	// (0x00052fc4) level_7_battery_ParamLimits

0xa535,	// (0x00054670) bg_status_flat_pane_g1

0xa53d,	// (0x00054678) bg_status_flat_pane_g2

0xa545,	// (0x00054680) bg_status_flat_pane_g3

0xa54d,	// (0x00054688) bg_status_flat_pane_g4

0xa555,	// (0x00054690) bg_status_flat_pane_g5

0xa55d,	// (0x00054698) bg_status_flat_pane_g6

0xa565,	// (0x000546a0) bg_status_flat_pane_g7

0x7fd3,	// (0x0005210e) tabs_3_active_pane_t1_ParamLimits

0x7fd3,	// (0x0005210e) tabs_3_passive_pane_t1_ParamLimits

0x7fed,	// (0x00052128) tabs_4_active_pane_t1_ParamLimits

0x7fed,	// (0x00052128) tabs_4_1_passive_pane_t1_ParamLimits

0x89da,	// (0x00052b15) tabs_2_active_pane_t1_ParamLimits

0x89da,	// (0x00052b15) tabs_2_passive_pane_t1_ParamLimits

0x89ec,	// (0x00052b27) bg_active_tab_pane_cp4_ParamLimits

0x89fa,	// (0x00052b35) tabs_2_long_active_pane_t1_ParamLimits

0x8a0d,	// (0x00052b48) bg_passive_tab_pane_cp4_ParamLimits

0x60bc,	// (0x000501f7) list_single_midp_graphic_pane_t1_ParamLimits

0x89ec,	// (0x00052b27) bg_active_tab_pane_cp5_ParamLimits

0x8a19,	// (0x00052b54) tabs_3_long_active_pane_t1_ParamLimits

0x8a0d,	// (0x00052b48) bg_passive_tab_pane_cp5_ParamLimits

0x60bc,	// (0x000501f7) list_single_midp_graphic_pane_t1

0x98ec,	// (0x00053a27) bg_status_flat_pane_ParamLimits

0x99af,	// (0x00053aea) indicator_pane_cp2_ParamLimits

0x99af,	// (0x00053aea) indicator_pane_cp2

0x9ada,	// (0x00053c15) navi_pane_srt_ParamLimits

0x9ada,	// (0x00053c15) navi_pane_srt

0x9afe,	// (0x00053c39) popup_clock_digital_analogue_window_cp1

0x809a,	// (0x000521d5) indicator_pane_t1

0x94bf,	// (0x000535fa) copy_highlight_pane

0x94bf,	// (0x000535fa) cursor_graphics_pane

0x94bf,	// (0x000535fa) graphic_within_text_pane

0x94bf,	// (0x000535fa) link_highlight_pane

0xad44,	// (0x00054e7f) popup_preview_text_window_t5_ParamLimits

0xad44,	// (0x00054e7f) popup_preview_text_window_t5

0x95ed,	// (0x00053728) cursor_digital_pane

0x95ed,	// (0x00053728) cursor_primary_pane

0x95fe,	// (0x00053739) cursor_primary_small_pane

0x9606,	// (0x00053741) cursor_secondary_pane

0x960e,	// (0x00053749) cursor_title_pane

0x95ed,	// (0x00053728) link_highlight_digital_pane

0x95f5,	// (0x00053730) link_highlight_primary_pane

0x95fe,	// (0x00053739) link_highlight_primary_small_pane

0x9606,	// (0x00053741) link_highlight_secondary_pane

0x960e,	// (0x00053749) link_highlight_title_pane

0x95ed,	// (0x00053728) copy_highlight_digital_pane

0x95ed,	// (0x00053728) copy_highlight_primary_pane

0x95fe,	// (0x00053739) copy_highlight_primary_small_pane

0x9606,	// (0x00053741) copy_highlight_secondary_pane

0x960e,	// (0x00053749) copy_highlight_title_pane

0x9606,	// (0x00053741) graphic_text_digital_pane

0xa5d3,	// (0x0005470e) graphic_text_primary_pane

0xa5dc,	// (0x00054717) graphic_text_primary_small_pane

0x95fe,	// (0x00053739) graphic_text_secondary_pane

0x95ed,	// (0x00053728) graphic_text_title_pane

0x9616,	// (0x00053751) cursor_primary_pane_g1

0xa5c5,	// (0x00054700) cursor_text_primary_t1

0xa5ad,	// (0x000546e8) cursor_primary_small_pane_g1

0xa5b7,	// (0x000546f2) cursor_text_primary_small_t1

0xa595,	// (0x000546d0) cursor_primary_small_pane_g1_copy1

0xa59f,	// (0x000546da) cursor_text_primary_small_t1_copy1

0xa57d,	// (0x000546b8) cursor_text_title_t1

0xa58b,	// (0x000546c6) cursor_title_pane_g1

0x9616,	// (0x00053751) cursor_digital_pane_g1

0x9620,	// (0x0005375b) cursor_text_digital_t1

0x9645,	// (0x00053780) link_highlight_primary_pane_g1

0xa526,	// (0x00054661) link_highlight_primary_pane_t1

0x962e,	// (0x00053769) link_highlight_primary_small_pane_g1

0x9636,	// (0x00053771) link_highlight_primary_small_pane_t1

0x9645,	// (0x00053780) link_highlight_secondary_pane_g1

0x964d,	// (0x00053788) link_highlight_secondary_pane_t1

0xa49a,	// (0x000545d5) link_highlight_title_pane_g1

0xa4a2,	// (0x000545dd) link_highlight_title_pane_t1

0xa483,	// (0x000545be) link_highlight_digital_pane_g1

0xa48b,	// (0x000545c6) link_highlight_digital_pane_t1

0xa35b,	// (0x00054496) copy_highlight_primary_pane_g1

0xa363,	// (0x0005449e) copy_highlight_primary_pane_t1

0xa335,	// (0x00054470) copy_highlight_primary_small_pane_g1

0xa34c,	// (0x00054487) copy_highlight_primary_small_pane_t1

0x965c,	// (0x00053797) copy_highlight_secondary_pane_g1

0x9664,	// (0x0005379f) copy_highlight_secondary_pane_t1

0xa335,	// (0x00054470) copy_highlight_title_pane_g1

0xa33d,	// (0x00054478) copy_highlight_title_pane_t1

0xa35b,	// (0x00054496) copy_highlight_digital_pane_g1

0xb596,	// (0x000556d1) copy_highlight_digital_pane_t1

0xb4ea,	// (0x00055625) graphic_text_primary_pane_g1

0xb57a,	// (0x000556b5) graphic_text_primary_pane_t1

0xb588,	// (0x000556c3) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00059b0e) graphic_text_primary_pane_t

0xb556,	// (0x00055691) graphic_text_primary_small_pane_g1

0xb55e,	// (0x00055699) graphic_text_primary_small_pane_t1

0xb56c,	// (0x000556a7) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00059b09) graphic_text_primary_small_pane_t

0xb532,	// (0x0005566d) graphic_text_secondary_pane_g1

0xb53a,	// (0x00055675) graphic_text_secondary_pane_t1

0xb548,	// (0x00055683) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00059b04) graphic_text_secondary_pane_t

0xb50e,	// (0x00055649) graphic_text_title_pane_g1

0xb516,	// (0x00055651) graphic_text_title_pane_t1

0xb524,	// (0x0005565f) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00059aff) graphic_text_title_pane_t

0xb4ea,	// (0x00055625) graphic_text_digital_pane_g1

0xb4f2,	// (0x0005562d) graphic_text_digital_pane_t1

0xb500,	// (0x0005563b) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00059afa) graphic_text_digital_pane_t

0x7fbd,	// (0x000520f8) navi_icon_pane_srt_ParamLimits

0x7fbd,	// (0x000520f8) navi_icon_pane_srt

0x7edd,	// (0x00052018) navi_midp_pane_srt

0x7edd,	// (0x00052018) navi_navi_pane_srt

0x7fbd,	// (0x000520f8) navi_text_pane_srt_ParamLimits

0x7fbd,	// (0x000520f8) navi_text_pane_srt

0xb4b5,	// (0x000555f0) navi_navi_icon_text_pane_srt

0xb4bd,	// (0x000555f8) navi_navi_pane_srt_g1_ParamLimits

0xb4bd,	// (0x000555f8) navi_navi_pane_srt_g1

0xb4cf,	// (0x0005560a) navi_navi_pane_srt_g2_ParamLimits

0xb4cf,	// (0x0005560a) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00059af5) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00059af5) navi_navi_pane_srt_g

0xb4e1,	// (0x0005561c) navi_navi_tabs_pane_srt

0xb4b5,	// (0x000555f0) navi_navi_text_pane_srt

0xb4b5,	// (0x000555f0) navi_navi_volume_pane_srt

0xb4a6,	// (0x000555e1) navi_navi_text_pane_srt_t1

0x6436,	// (0x00050571) navi_navi_volume_pane_srt_g1

0x643e,	// (0x00050579) volume_small_pane_srt_ParamLimits

0x643e,	// (0x00050579) volume_small_pane_srt

0x57fb,	// (0x0004f936) volume_small_pane_srt_g1_ParamLimits

0x57fb,	// (0x0004f936) volume_small_pane_srt_g1

0x580b,	// (0x0004f946) volume_small_pane_srt_g2_ParamLimits

0x580b,	// (0x0004f946) volume_small_pane_srt_g2

0x581c,	// (0x0004f957) volume_small_pane_srt_g3_ParamLimits

0x581c,	// (0x0004f957) volume_small_pane_srt_g3

0x582d,	// (0x0004f968) volume_small_pane_srt_g4_ParamLimits

0x582d,	// (0x0004f968) volume_small_pane_srt_g4

0x583e,	// (0x0004f979) volume_small_pane_srt_g5_ParamLimits

0x583e,	// (0x0004f979) volume_small_pane_srt_g5

0x584f,	// (0x0004f98a) volume_small_pane_srt_g6_ParamLimits

0x584f,	// (0x0004f98a) volume_small_pane_srt_g6

0x5860,	// (0x0004f99b) volume_small_pane_srt_g7_ParamLimits

0x5860,	// (0x0004f99b) volume_small_pane_srt_g7

0x5871,	// (0x0004f9ac) volume_small_pane_srt_g8_ParamLimits

0x5871,	// (0x0004f9ac) volume_small_pane_srt_g8

0x5882,	// (0x0004f9bd) volume_small_pane_srt_g9_ParamLimits

0x5882,	// (0x0004f9bd) volume_small_pane_srt_g9

0x5893,	// (0x0004f9ce) volume_small_pane_srt_g10_ParamLimits

0x5893,	// (0x0004f9ce) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005989d) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005989d) volume_small_pane_srt_g

0x8397,	// (0x000524d2) query_popup_data_pane_cp2

0xb48c,	// (0x000555c7) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb48c,	// (0x000555c7) navi_navi_icon_text_pane_srt_t1

0xa5d3,	// (0x0005470e) navi_tabs_2_long_pane_srt

0xa5d3,	// (0x0005470e) navi_tabs_2_pane_srt

0xa5d3,	// (0x0005470e) navi_tabs_3_long_pane_srt

0xa5d3,	// (0x0005470e) navi_tabs_3_pane_srt

0xa5d3,	// (0x0005470e) navi_tabs_4_pane_srt

0x6416,	// (0x00050551) tabs_2_active_pane_srt_ParamLimits

0x6416,	// (0x00050551) tabs_2_active_pane_srt

0x6426,	// (0x00050561) tabs_2_passive_pane_srt_ParamLimits

0x6426,	// (0x00050561) tabs_2_passive_pane_srt

0x9809,	// (0x00053944) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9809,	// (0x00053944) bg_passive_tab_pane_cp1_srt

0xb458,	// (0x00055593) bg_passive_tab_pane_g1_cp1_srt

0x9101,	// (0x0005323c) bg_passive_tab_pane_g2_cp1_srt

0xb461,	// (0x0005559c) bg_passive_tab_pane_g3_cp1_srt

0x7fbd,	// (0x000520f8) bg_active_tab_pane_cp1_srt_ParamLimits

0x7fbd,	// (0x000520f8) bg_active_tab_pane_cp1_srt

0xb46a,	// (0x000555a5) tabs_2_active_pane_srt_g1

0xb472,	// (0x000555ad) tabs_2_active_pane_srt_t1_ParamLimits

0xb472,	// (0x000555ad) tabs_2_active_pane_srt_t1

0xb458,	// (0x00055593) bg_active_tab_pane_g1_cp1_srt

0x9101,	// (0x0005323c) bg_active_tab_pane_g2_cp1_srt

0xb461,	// (0x0005559c) bg_active_tab_pane_g3_cp1_srt

0x63e3,	// (0x0005051e) tabs_3_active_pane_srt_ParamLimits

0x63e3,	// (0x0005051e) tabs_3_active_pane_srt

0x63f4,	// (0x0005052f) tabs_3_passive_pane_cp_srt_ParamLimits

0x63f4,	// (0x0005052f) tabs_3_passive_pane_cp_srt

0x6405,	// (0x00050540) tabs_3_passive_pane_srt_ParamLimits

0x6405,	// (0x00050540) tabs_3_passive_pane_srt

0x9809,	// (0x00053944) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9809,	// (0x00053944) bg_passive_tab_pane_cp2_srt

0x9673,	// (0x000537ae) bg_passive_tab_pane_g1_cp2_srt

0x9101,	// (0x0005323c) bg_passive_tab_pane_g2_cp2_srt

0x967c,	// (0x000537b7) bg_passive_tab_pane_g3_cp2_srt

0x7fbd,	// (0x000520f8) bg_active_tab_pane_cp2_srt_ParamLimits

0x7fbd,	// (0x000520f8) bg_active_tab_pane_cp2_srt

0xb43e,	// (0x00055579) tabs_3_active_pane_srt_g1

0xb446,	// (0x00055581) tabs_3_active_pane_srt_t1_ParamLimits

0xb446,	// (0x00055581) tabs_3_active_pane_srt_t1

0x9673,	// (0x000537ae) bg_active_tab_pane_g1_cp2_srt

0x9101,	// (0x0005323c) bg_active_tab_pane_g2_cp2_srt

0x967c,	// (0x000537b7) bg_active_tab_pane_g3_cp2_srt

0x639b,	// (0x000504d6) tabs_4_active_pane_srt_ParamLimits

0x639b,	// (0x000504d6) tabs_4_active_pane_srt

0x63ad,	// (0x000504e8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x63ad,	// (0x000504e8) tabs_4_passive_pane_cp2_srt

0x5a02,	// (0x0004fb3d) aid_size_cell_toolbar

0x8a0d,	// (0x00052b48) main_idle_act_pane_ParamLimits

0x5bcd,	// (0x0004fd08) popup_large_graphic_colour_window_ParamLimits

0x5f34,	// (0x0005006f) popup_toolbar_window_ParamLimits

0x5f34,	// (0x0005006f) popup_toolbar_window

0xb2a6,	// (0x000553e1) list_single_graphic_2heading_pane_ParamLimits

0xb2a6,	// (0x000553e1) list_single_graphic_2heading_pane

0x8bc9,	// (0x00052d04) aid_size_cell_apps_grid_lsc_pane

0x8bdb,	// (0x00052d16) aid_size_cell_apps_grid_prt_pane

0x9809,	// (0x00053944) bg_wml_button_pane_cp1_ParamLimits

0x9809,	// (0x00053944) bg_wml_button_pane_cp1

0x9fc0,	// (0x000540fb) form_midp_field_text_pane_t1_ParamLimits

0x9d93,	// (0x00053ece) input_focus_pane_cp050_ParamLimits

0x9ff4,	// (0x0005412f) list_midp_form_text_pane_ParamLimits

0x9f9d,	// (0x000540d8) input_focus_pane_cp051_ParamLimits

0x9fb1,	// (0x000540ec) list_midp_choice_pane_ParamLimits

0x9e4c,	// (0x00053f87) list_single_2graphic_pane_cp3_ParamLimits

0x9e4c,	// (0x00053f87) list_single_2graphic_pane_cp3

0x9e6d,	// (0x00053fa8) list_single_midp_graphic_pane_ParamLimits

0x9e6d,	// (0x00053fa8) list_single_midp_graphic_pane

0x47cd,	// (0x0004e908) list_single_graphic_2heading_pane_g1_ParamLimits

0x47cd,	// (0x0004e908) list_single_graphic_2heading_pane_g1

0x47d9,	// (0x0004e914) list_single_graphic_2heading_pane_g4_ParamLimits

0x47d9,	// (0x0004e914) list_single_graphic_2heading_pane_g4

0x47e5,	// (0x0004e920) list_single_graphic_2heading_pane_g5_ParamLimits

0x47e5,	// (0x0004e920) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x000598f0) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x000598f0) list_single_graphic_2heading_pane_g

0x47f1,	// (0x0004e92c) list_single_graphic_2heading_pane_t1_ParamLimits

0x47f1,	// (0x0004e92c) list_single_graphic_2heading_pane_t1

0x4805,	// (0x0004e940) list_single_graphic_2heading_pane_t2_ParamLimits

0x4805,	// (0x0004e940) list_single_graphic_2heading_pane_t2

0x4821,	// (0x0004e95c) list_single_graphic_2heading_pane_t3_ParamLimits

0x4821,	// (0x0004e95c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x000598f7) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x000598f7) list_single_graphic_2heading_pane_t

0x9c5d,	// (0x00053d98) bg_popup_sub_pane_cp2

0x9c87,	// (0x00053dc2) grid_toobar_pane

0x5fe1,	// (0x0005011c) cell_toolbar_pane_ParamLimits

0x5fe1,	// (0x0005011c) cell_toolbar_pane

0x9cc3,	// (0x00053dfe) cell_toolbar_pane_g1_ParamLimits

0x9cc3,	// (0x00053dfe) cell_toolbar_pane_g1

0x9cd7,	// (0x00053e12) cell_toolbar_pane_g2_ParamLimits

0x9cd7,	// (0x00053e12) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00059905) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00059905) cell_toolbar_pane_g

0x9cf9,	// (0x00053e34) grid_highlight_pane_cp2_ParamLimits

0x9cf9,	// (0x00053e34) grid_highlight_pane_cp2

0x9d13,	// (0x00053e4e) toolbar_button_pane

0x9d1f,	// (0x00053e5a) toolbar_button_pane_g1

0x9d27,	// (0x00053e62) toolbar_button_pane_g2

0x9d2f,	// (0x00053e6a) toolbar_button_pane_g3

0x9d37,	// (0x00053e72) toolbar_button_pane_g4

0x9d3f,	// (0x00053e7a) toolbar_button_pane_g5

0x9d47,	// (0x00053e82) toolbar_button_pane_g6

0x9d4f,	// (0x00053e8a) toolbar_button_pane_g7

0x9d57,	// (0x00053e92) toolbar_button_pane_g8

0x9d5f,	// (0x00053e9a) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0005990a) toolbar_button_pane_g

0x603b,	// (0x00050176) list_single_2graphic_pane_g1_cp3_ParamLimits

0x603b,	// (0x00050176) list_single_2graphic_pane_g1_cp3

0x6047,	// (0x00050182) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6047,	// (0x00050182) list_single_2graphic_pane_g2_cp3

0x6058,	// (0x00050193) list_single_2graphic_pane_g3_cp3

0x6060,	// (0x0005019b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6060,	// (0x0005019b) list_single_2graphic_pane_g4_cp3

0x606c,	// (0x000501a7) list_single_2graphic_pane_t1_cp3_ParamLimits

0x606c,	// (0x000501a7) list_single_2graphic_pane_t1_cp3

0x60b0,	// (0x000501eb) list_single_midp_graphic_pane_g2_ParamLimits

0x60b0,	// (0x000501eb) list_single_midp_graphic_pane_g2

0x47c5,	// (0x0004e900) aid_zoom_text_primary

0x5a0a,	// (0x0004fb45) aid_zoom_text_secondary

0x972d,	// (0x00053868) status_small_pane_g7_ParamLimits

0x972d,	// (0x00053868) status_small_pane_g7

0x9750,	// (0x0005388b) status_small_pane_t1_ParamLimits

0x7ef4,	// (0x0005202f) title_pane_g2

0x0003,

0xf54e,	// (0x00059689) title_pane_g

0x843b,	// (0x00052576) aid_size_cell_colour_1_pane_ParamLimits

0x843b,	// (0x00052576) aid_size_cell_colour_1_pane

0x844f,	// (0x0005258a) aid_size_cell_colour_2_pane_ParamLimits

0x844f,	// (0x0005258a) aid_size_cell_colour_2_pane

0x8463,	// (0x0005259e) aid_size_cell_colour_3_pane_ParamLimits

0x8463,	// (0x0005259e) aid_size_cell_colour_3_pane

0x8477,	// (0x000525b2) aid_size_cell_colour_4_pane_ParamLimits

0x8477,	// (0x000525b2) aid_size_cell_colour_4_pane

0x53ea,	// (0x0004f525) title_pane_stacon_g1_ParamLimits

0x53ea,	// (0x0004f525) title_pane_stacon_g1

0xa3ba,	// (0x000544f5) popup_note_wait_window_g3_ParamLimits

0xa3ba,	// (0x000544f5) popup_note_wait_window_g3

0xa430,	// (0x0005456b) popup_note_wait_window_t5_ParamLimits

0xa430,	// (0x0005456b) popup_note_wait_window_t5

0x7edd,	// (0x00052018) main_feb_china_hwr_fs_writing_pane

0x5ab0,	// (0x0004fbeb) popup_feb_china_hwr_fs_window_ParamLimits

0x5ab0,	// (0x0004fbeb) popup_feb_china_hwr_fs_window

0x60d2,	// (0x0005020d) aid_size_cell_hwr_fs_ParamLimits

0x60d2,	// (0x0005020d) aid_size_cell_hwr_fs

0x9d93,	// (0x00053ece) bg_popup_sub_pane_cp3_ParamLimits

0x9d93,	// (0x00053ece) bg_popup_sub_pane_cp3

0x60e7,	// (0x00050222) grid_hwr_fs_pane_ParamLimits

0x60e7,	// (0x00050222) grid_hwr_fs_pane

0x60ff,	// (0x0005023a) linegrid_hwr_fs_pane_ParamLimits

0x60ff,	// (0x0005023a) linegrid_hwr_fs_pane

0x610f,	// (0x0005024a) cell_hwr_fs_pane_ParamLimits

0x610f,	// (0x0005024a) cell_hwr_fs_pane

0x9d9f,	// (0x00053eda) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d9f,	// (0x00053eda) linegrid_hwr_fs_pane_g1

0x9dab,	// (0x00053ee6) linegrid_hwr_fs_pane_g2_ParamLimits

0x9dab,	// (0x00053ee6) linegrid_hwr_fs_pane_g2

0x9dbd,	// (0x00053ef8) linegrid_hwr_fs_pane_g3_ParamLimits

0x9dbd,	// (0x00053ef8) linegrid_hwr_fs_pane_g3

0x6131,	// (0x0005026c) linegrid_hwr_fs_pane_g4_ParamLimits

0x6131,	// (0x0005026c) linegrid_hwr_fs_pane_g4

0x614b,	// (0x00050286) linegrid_hwr_fs_pane_g5_ParamLimits

0x614b,	// (0x00050286) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00059935) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00059935) linegrid_hwr_fs_pane_g

0x9dc9,	// (0x00053f04) cell_hwr_fs_pane_g1_ParamLimits

0x9dc9,	// (0x00053f04) cell_hwr_fs_pane_g1

0x9b94,	// (0x00053ccf) cell_hwr_fs_pane_g2_ParamLimits

0x9b94,	// (0x00053ccf) cell_hwr_fs_pane_g2

0x9ddf,	// (0x00053f1a) cell_hwr_fs_pane_g3_ParamLimits

0x9ddf,	// (0x00053f1a) cell_hwr_fs_pane_g3

0x9dec,	// (0x00053f27) cell_hwr_fs_pane_g4_ParamLimits

0x9dec,	// (0x00053f27) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00059940) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00059940) cell_hwr_fs_pane_g

0x6161,	// (0x0005029c) cell_hwr_fs_pane_t1

0x7edd,	// (0x00052018) grid_highlight_pane_cp6

0x7edd,	// (0x00052018) main_idle_act2_pane

0x8980,	// (0x00052abb) aid_inside_area_popup_secondary

0xaa67,	// (0x00054ba2) aid_inside_area_window_primary_ParamLimits

0xaa67,	// (0x00054ba2) aid_inside_area_window_primary

0xb5a5,	// (0x000556e0) ai2_news_ticker_pane

0xb5ad,	// (0x000556e8) aid_size_cell_ai1_link_ParamLimits

0xb5ad,	// (0x000556e8) aid_size_cell_ai1_link

0xb5c7,	// (0x00055702) popup_ai2_data_window_ParamLimits

0xb5c7,	// (0x00055702) popup_ai2_data_window

0xb5dd,	// (0x00055718) popup_ai2_link_window_ParamLimits

0xb5dd,	// (0x00055718) popup_ai2_link_window

0x9d93,	// (0x00053ece) bg_popup_sub_pane_cp4_ParamLimits

0x9d93,	// (0x00053ece) bg_popup_sub_pane_cp4

0xb5f1,	// (0x0005572c) grid_ai2_link_pane_ParamLimits

0xb5f1,	// (0x0005572c) grid_ai2_link_pane

0xb608,	// (0x00055743) popup_ai2_link_window_g1_ParamLimits

0xb608,	// (0x00055743) popup_ai2_link_window_g1

0xb614,	// (0x0005574f) popup_ai2_link_window_g2_ParamLimits

0xb614,	// (0x0005574f) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00059b13) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00059b13) popup_ai2_link_window_g

0xb623,	// (0x0005575e) ai2_mp_button_pane

0xb62b,	// (0x00055766) ai2_mp_volume_pane

0x9f9d,	// (0x000540d8) bg_popup_sub_pane_cp5_ParamLimits

0x9f9d,	// (0x000540d8) bg_popup_sub_pane_cp5

0xb633,	// (0x0005576e) heading_ai2_gene_pane_ParamLimits

0xb633,	// (0x0005576e) heading_ai2_gene_pane

0xb63f,	// (0x0005577a) list_ai2_gene_pane_ParamLimits

0xb63f,	// (0x0005577a) list_ai2_gene_pane

0xb687,	// (0x000557c2) cell_ai2_link_pane_ParamLimits

0xb687,	// (0x000557c2) cell_ai2_link_pane

0xb69d,	// (0x000557d8) cell_ai2_link_pane_g1

0x7edd,	// (0x00052018) grid_highlight_pane_cp7

0x6453,	// (0x0005058e) ai2_mp_volume_pane_g1

0xb76d,	// (0x000558a8) ai2_mp_volume_pane_g2

0xb6e2,	// (0x0005581d) list_ai2_gene_pane_t1

0xb775,	// (0x000558b0) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00059b2c) ai2_mp_volume_pane_g

0x645b,	// (0x00050596) volume_small_pane_cp3

0xb77d,	// (0x000558b8) aid_size_cell_ai2_button

0xb785,	// (0x000558c0) grid_ai2_button_pane

0xb78e,	// (0x000558c9) cell_ai2_button_pane_ParamLimits

0xb78e,	// (0x000558c9) cell_ai2_button_pane

0x7ed3,	// (0x0005200e) cell_ai2_button_pane_g1

0x7edd,	// (0x00052018) grid_highlight_pane_cp8

0xb72d,	// (0x00055868) ai2_gene_pane_t1_ParamLimits

0xb72d,	// (0x00055868) ai2_gene_pane_t1

0x59f8,	// (0x0004fb33) aid_height_parent_landscape

0xb0dd,	// (0x00055218) aid_height_set_list

0xb0ee,	// (0x00055229) aid_size_parent

0xb3c8,	// (0x00055503) aid_size_cell_graphic_pane_ParamLimits

0xb64f,	// (0x0005578a) popup_ai2_data_window_g1_ParamLimits

0xb64f,	// (0x0005578a) popup_ai2_data_window_g1

0xb65b,	// (0x00055796) ai2_news_ticker_pane_g1

0xb663,	// (0x0005579e) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00059b18) ai2_news_ticker_pane_g

0xb66b,	// (0x000557a6) ai2_news_ticker_pane_t1

0xb679,	// (0x000557b4) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00059b1d) ai2_news_ticker_pane_t

0xb6a6,	// (0x000557e1) heading_ai2_gene_pane_g1

0xb6ae,	// (0x000557e9) heading_ai2_gene_pane_t1_ParamLimits

0xb6ae,	// (0x000557e9) heading_ai2_gene_pane_t1

0xb6c3,	// (0x000557fe) list_highlight_pane_cp6

0xb6cb,	// (0x00055806) ai2_gene_pane_ParamLimits

0xb6cb,	// (0x00055806) ai2_gene_pane

0xb6f0,	// (0x0005582b) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00059b22) list_ai2_gene_pane_t

0xb6fe,	// (0x00055839) list_highlight_pane_cp8_ParamLimits

0xb6fe,	// (0x00055839) list_highlight_pane_cp8

0xb70f,	// (0x0005584a) ai2_gene_pane_g1_ParamLimits

0xb70f,	// (0x0005584a) ai2_gene_pane_g1

0xb721,	// (0x0005585c) ai2_gene_pane_g2_ParamLimits

0xb721,	// (0x0005585c) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00059b27) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00059b27) ai2_gene_pane_g

0x87c2,	// (0x000528fd) scroll_pane_cp12

0x59b5,	// (0x0004faf0) control_pane_t3_ParamLimits

0x59b5,	// (0x0004faf0) control_pane_t3

0x9741,	// (0x0005387c) status_small_pane_g8_ParamLimits

0x9741,	// (0x0005387c) status_small_pane_g8

0x5b96,	// (0x0004fcd1) popup_find_window_ParamLimits

0x5dab,	// (0x0004fee6) popup_note_image_window_ParamLimits

0x6011,	// (0x0005014c) list_double2_graphic_pane_vc_g1_ParamLimits

0x6011,	// (0x0005014c) list_double2_graphic_pane_vc_g1

0x93f8,	// (0x00053533) list_double2_graphic_pane_vc_g2_ParamLimits

0x93f8,	// (0x00053533) list_double2_graphic_pane_vc_g2

0x7552,	// (0x0005168d) list_double2_graphic_pane_vc_g3_ParamLimits

0x7552,	// (0x0005168d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x000598fe) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x000598fe) list_double2_graphic_pane_vc_g

0x601d,	// (0x00050158) list_double2_graphic_pane_vc_t1_ParamLimits

0x601d,	// (0x00050158) list_double2_graphic_pane_vc_t1

0x93f8,	// (0x00053533) list_single_heading_pane_vc_g1_ParamLimits

0x93f8,	// (0x00053533) list_single_heading_pane_vc_g1

0x7552,	// (0x0005168d) list_single_heading_pane_vc_g2_ParamLimits

0x7552,	// (0x0005168d) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005991f) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005991f) list_single_heading_pane_vc_g

0x6088,	// (0x000501c3) list_single_heading_pane_vc_t1_ParamLimits

0x6088,	// (0x000501c3) list_single_heading_pane_vc_t1

0x609e,	// (0x000501d9) list_single_heading_pane_vc_t2_ParamLimits

0x609e,	// (0x000501d9) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00059924) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00059924) list_single_heading_pane_vc_t

0x755e,	// (0x00051699) list_setting_number_pane_vc_g1_ParamLimits

0x755e,	// (0x00051699) list_setting_number_pane_vc_g1

0x756a,	// (0x000516a5) list_setting_number_pane_vc_g2_ParamLimits

0x756a,	// (0x000516a5) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00059929) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00059929) list_setting_number_pane_vc_g

0x7576,	// (0x000516b1) list_setting_number_pane_vc_t1_ParamLimits

0x7576,	// (0x000516b1) list_setting_number_pane_vc_t1

0x758a,	// (0x000516c5) list_setting_number_pane_vc_t2_ParamLimits

0x758a,	// (0x000516c5) list_setting_number_pane_vc_t2

0x75a6,	// (0x000516e1) list_setting_number_pane_vc_t3_ParamLimits

0x75a6,	// (0x000516e1) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x0005992e) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x0005992e) list_setting_number_pane_vc_t

0x75d2,	// (0x0005170d) set_value_pane_vc_ParamLimits

0x75d2,	// (0x0005170d) set_value_pane_vc

0xb2a6,	// (0x000553e1) list_double2_graphic_pane_vc_ParamLimits

0xb2a6,	// (0x000553e1) list_double2_graphic_pane_vc

0x76a4,	// (0x000517df) list_double2_large_graphic_pane_vc_ParamLimits

0x76a4,	// (0x000517df) list_double2_large_graphic_pane_vc

0xb2a6,	// (0x000553e1) list_double2_pane_vc_ParamLimits

0xb2a6,	// (0x000553e1) list_double2_pane_vc

0xb2a6,	// (0x000553e1) list_double_graphic_heading_pane_vc_ParamLimits

0xb2a6,	// (0x000553e1) list_double_graphic_heading_pane_vc

0xb2a6,	// (0x000553e1) list_double_graphic_pane_vc_ParamLimits

0xb2a6,	// (0x000553e1) list_double_graphic_pane_vc

0xb2a6,	// (0x000553e1) list_double_heading_pane_vc_ParamLimits

0xb2a6,	// (0x000553e1) list_double_heading_pane_vc

0x76b5,	// (0x000517f0) list_double_large_graphic_pane_vc_ParamLimits

0x76b5,	// (0x000517f0) list_double_large_graphic_pane_vc

0xb2a6,	// (0x000553e1) list_double_number_pane_vc_ParamLimits

0xb2a6,	// (0x000553e1) list_double_number_pane_vc

0xb2a6,	// (0x000553e1) list_double_pane_vc_ParamLimits

0xb2a6,	// (0x000553e1) list_double_pane_vc

0xb2a6,	// (0x000553e1) list_double_time_pane_vc_ParamLimits

0xb2a6,	// (0x000553e1) list_double_time_pane_vc

0xb2a6,	// (0x000553e1) list_setting_number_pane_vc_ParamLimits

0xb2a6,	// (0x000553e1) list_setting_number_pane_vc

0xb2a6,	// (0x000553e1) list_setting_pane_vc_ParamLimits

0xb2a6,	// (0x000553e1) list_setting_pane_vc

0xb2a6,	// (0x000553e1) list_single_graphic_heading_pane_vc_ParamLimits

0xb2a6,	// (0x000553e1) list_single_graphic_heading_pane_vc

0xb2a6,	// (0x000553e1) list_single_heading_pane_vc_ParamLimits

0xb2a6,	// (0x000553e1) list_single_heading_pane_vc

0x76d1,	// (0x0005180c) list_single_number_heading_pane_vc_ParamLimits

0x76d1,	// (0x0005180c) list_single_number_heading_pane_vc

0x6011,	// (0x0005014c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x6011,	// (0x0005014c) list_double_graphic_heading_pane_vc_g1

0x93f8,	// (0x00053533) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x93f8,	// (0x00053533) list_double_graphic_heading_pane_vc_g2

0x7552,	// (0x0005168d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7552,	// (0x0005168d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x000598fe) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000598fe) list_double_graphic_heading_pane_vc_g

0x777f,	// (0x000518ba) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x777f,	// (0x000518ba) list_double_graphic_heading_pane_vc_t1

0x779b,	// (0x000518d6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x779b,	// (0x000518d6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x00059b33) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x00059b33) list_double_graphic_heading_pane_vc_t

0x755e,	// (0x00051699) list_setting_pane_vc_g1_ParamLimits

0x755e,	// (0x00051699) list_setting_pane_vc_g1

0x756a,	// (0x000516a5) list_setting_pane_vc_g2_ParamLimits

0x756a,	// (0x000516a5) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00059929) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00059929) list_setting_pane_vc_g

0x77b9,	// (0x000518f4) list_setting_pane_vc_t1_ParamLimits

0x77b9,	// (0x000518f4) list_setting_pane_vc_t1

0x77d5,	// (0x00051910) list_setting_pane_vc_t2_ParamLimits

0x77d5,	// (0x00051910) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x00059b61) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x00059b61) list_setting_pane_vc_t

0x75d2,	// (0x0005170d) set_value_pane_cp_vc_ParamLimits

0x75d2,	// (0x0005170d) set_value_pane_cp_vc

0x93f8,	// (0x00053533) list_single_number_heading_pane_vc_g1_ParamLimits

0x93f8,	// (0x00053533) list_single_number_heading_pane_vc_g1

0x7552,	// (0x0005168d) list_single_number_heading_pane_vc_g2_ParamLimits

0x7552,	// (0x0005168d) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005991f) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005991f) list_single_number_heading_pane_vc_g

0x77f1,	// (0x0005192c) list_single_number_heading_pane_vc_t1_ParamLimits

0x77f1,	// (0x0005192c) list_single_number_heading_pane_vc_t1

0x7807,	// (0x00051942) list_single_number_heading_pane_vc_t2_ParamLimits

0x7807,	// (0x00051942) list_single_number_heading_pane_vc_t2

0x7819,	// (0x00051954) list_single_number_heading_pane_vc_t3_ParamLimits

0x7819,	// (0x00051954) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x00059b66) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x00059b66) list_single_number_heading_pane_vc_t

0x6011,	// (0x0005014c) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6011,	// (0x0005014c) list_single_graphic_heading_pane_vc_g1

0x93f8,	// (0x00053533) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x93f8,	// (0x00053533) list_single_graphic_heading_pane_vc_g4

0x7552,	// (0x0005168d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7552,	// (0x0005168d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x000598fe) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x000598fe) list_single_graphic_heading_pane_vc_g

0x77f1,	// (0x0005192c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x77f1,	// (0x0005192c) list_single_graphic_heading_pane_vc_t1

0x782b,	// (0x00051966) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x782b,	// (0x00051966) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x00059b6d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00059b6d) list_single_graphic_heading_pane_vc_t

0x93f8,	// (0x00053533) list_double2_pane_vc_g1_ParamLimits

0x93f8,	// (0x00053533) list_double2_pane_vc_g1

0x7552,	// (0x0005168d) list_double2_pane_vc_g2_ParamLimits

0x7552,	// (0x0005168d) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005991f) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005991f) list_double2_pane_vc_g

0x783d,	// (0x00051978) list_double2_pane_vc_t1_ParamLimits

0x783d,	// (0x00051978) list_double2_pane_vc_t1

0x7853,	// (0x0005198e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7853,	// (0x0005198e) list_double2_large_graphic_pane_vc_g1

0x785f,	// (0x0005199a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x785f,	// (0x0005199a) list_double2_large_graphic_pane_vc_g2

0x786b,	// (0x000519a6) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x786b,	// (0x000519a6) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x00059b72) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x00059b72) list_double2_large_graphic_pane_vc_g

0x7877,	// (0x000519b2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7877,	// (0x000519b2) list_double2_large_graphic_pane_vc_t1

0x788d,	// (0x000519c8) list_double_time_pane_vc_g1_ParamLimits

0x788d,	// (0x000519c8) list_double_time_pane_vc_g1

0x7899,	// (0x000519d4) list_double_time_pane_vc_g2_ParamLimits

0x7899,	// (0x000519d4) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x00059b79) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x00059b79) list_double_time_pane_vc_g

0x78a5,	// (0x000519e0) list_double_time_pane_vc_t1_ParamLimits

0x78a5,	// (0x000519e0) list_double_time_pane_vc_t1

0x78c9,	// (0x00051a04) list_double_time_pane_vc_t2_ParamLimits

0x78c9,	// (0x00051a04) list_double_time_pane_vc_t2

0x7918,	// (0x00051a53) list_double_time_pane_vc_t3_ParamLimits

0x7918,	// (0x00051a53) list_double_time_pane_vc_t3

0x792a,	// (0x00051a65) list_double_time_pane_vc_t4_ParamLimits

0x792a,	// (0x00051a65) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x00059b7e) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x00059b7e) list_double_time_pane_vc_t

0x93f8,	// (0x00053533) list_double_pane_vc_g1_ParamLimits

0x93f8,	// (0x00053533) list_double_pane_vc_g1

0x7552,	// (0x0005168d) list_double_pane_vc_g2_ParamLimits

0x7552,	// (0x0005168d) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005991f) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005991f) list_double_pane_vc_g

0x793e,	// (0x00051a79) list_double_pane_vc_t1_ParamLimits

0x793e,	// (0x00051a79) list_double_pane_vc_t1

0x7952,	// (0x00051a8d) list_double_pane_vc_t2_ParamLimits

0x7952,	// (0x00051a8d) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x00059b87) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x00059b87) list_double_pane_vc_t

0x93f8,	// (0x00053533) list_double_number_pane_vc_g1_ParamLimits

0x93f8,	// (0x00053533) list_double_number_pane_vc_g1

0x7552,	// (0x0005168d) list_double_number_pane_vc_g2_ParamLimits

0x7552,	// (0x0005168d) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005991f) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005991f) list_double_number_pane_vc_g

0x796a,	// (0x00051aa5) list_double_number_pane_vc_t1_ParamLimits

0x796a,	// (0x00051aa5) list_double_number_pane_vc_t1

0x797c,	// (0x00051ab7) list_double_number_pane_vc_t2_ParamLimits

0x797c,	// (0x00051ab7) list_double_number_pane_vc_t2

0x7990,	// (0x00051acb) list_double_number_pane_vc_t3_ParamLimits

0x7990,	// (0x00051acb) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x00059b8c) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x00059b8c) list_double_number_pane_vc_t

0x79a8,	// (0x00051ae3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x79a8,	// (0x00051ae3) list_double_large_graphic_pane_vc_g1

0x79ca,	// (0x00051b05) list_double_large_graphic_pane_vc_g2_ParamLimits

0x79ca,	// (0x00051b05) list_double_large_graphic_pane_vc_g2

0x79de,	// (0x00051b19) list_double_large_graphic_pane_vc_g3_ParamLimits

0x79de,	// (0x00051b19) list_double_large_graphic_pane_vc_g3

0x79ed,	// (0x00051b28) list_double_large_graphic_pane_vc_g4_ParamLimits

0x79ed,	// (0x00051b28) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x00059b93) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x00059b93) list_double_large_graphic_pane_vc_g

0x79f9,	// (0x00051b34) list_double_large_graphic_pane_vc_t1_ParamLimits

0x79f9,	// (0x00051b34) list_double_large_graphic_pane_vc_t1

0x7a15,	// (0x00051b50) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7a15,	// (0x00051b50) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x00059b9c) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x00059b9c) list_double_large_graphic_pane_vc_t

0x93f8,	// (0x00053533) list_double_heading_pane_vc_g1_ParamLimits

0x93f8,	// (0x00053533) list_double_heading_pane_vc_g1

0x7552,	// (0x0005168d) list_double_heading_pane_vc_g2_ParamLimits

0x7552,	// (0x0005168d) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005991f) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005991f) list_double_heading_pane_vc_g

0x7a37,	// (0x00051b72) list_double_heading_pane_vc_t1_ParamLimits

0x7a37,	// (0x00051b72) list_double_heading_pane_vc_t1

0x7a4b,	// (0x00051b86) list_double_heading_pane_vc_t2_ParamLimits

0x7a4b,	// (0x00051b86) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x00059ba1) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x00059ba1) list_double_heading_pane_vc_t

0x7a63,	// (0x00051b9e) list_double_graphic_pane_vc_g1_ParamLimits

0x7a63,	// (0x00051b9e) list_double_graphic_pane_vc_g1

0x7a6f,	// (0x00051baa) list_double_graphic_pane_vc_g2_ParamLimits

0x7a6f,	// (0x00051baa) list_double_graphic_pane_vc_g2

0x93f8,	// (0x00053533) list_double_graphic_pane_vc_g3_ParamLimits

0x93f8,	// (0x00053533) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x00059ba6) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x00059ba6) list_double_graphic_pane_vc_g

0x7a8c,	// (0x00051bc7) list_double_graphic_pane_vc_t1_ParamLimits

0x7a8c,	// (0x00051bc7) list_double_graphic_pane_vc_t1

0x7ab6,	// (0x00051bf1) list_double_graphic_pane_vc_t2_ParamLimits

0x7ab6,	// (0x00051bf1) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x00059baf) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x00059baf) list_double_graphic_pane_vc_t

0x4851,	// (0x0004e98c) aid_size_cell_fastswap

0x4859,	// (0x0004e994) aid_size_cell_touch_ParamLimits

0x4859,	// (0x0004e994) aid_size_cell_touch

0x4abe,	// (0x0004ebf9) popup_fast_swap_wide_window_ParamLimits

0x4abe,	// (0x0004ebf9) popup_fast_swap_wide_window

0x4bd2,	// (0x0004ed0d) touch_pane_ParamLimits

0x4bd2,	// (0x0004ed0d) touch_pane

0x8824,	// (0x0005295f) button_value_adjust_pane_cp2

0x5144,	// (0x0004f27f) button_value_adjust_pane_cp4

0x5168,	// (0x0004f2a3) form_field_data_pane_cp2

0x5189,	// (0x0004f2c4) form_field_data_wide_pane_cp2

0x8c96,	// (0x00052dd1) bg_scroll_pane_ParamLimits

0x554c,	// (0x0004f687) scroll_handle_pane_ParamLimits

0x5560,	// (0x0004f69b) scroll_sc2_down_pane_ParamLimits

0x5560,	// (0x0004f69b) scroll_sc2_down_pane

0x8cc7,	// (0x00052e02) scroll_sc2_up_pane_ParamLimits

0x8cc7,	// (0x00052e02) scroll_sc2_up_pane

0xbe4c,	// (0x00055f87) grid_wheel_folder_pane_g1_ParamLimits

0xbe4c,	// (0x00055f87) grid_wheel_folder_pane_g1

0x5793,	// (0x0004f8ce) clock_nsta_pane_cp2_ParamLimits

0x5793,	// (0x0004f8ce) clock_nsta_pane_cp2

0x94c7,	// (0x00053602) listscroll_midp_pane_ParamLimits

0x94d3,	// (0x0005360e) midp_canvas_pane

0x97bb,	// (0x000538f6) nsta_clock_indic_pane

0x97ef,	// (0x0005392a) listscroll_form_pane_vc

0x97f7,	// (0x00053932) listscroll_set_pane_vc_ParamLimits

0x97f7,	// (0x00053932) listscroll_set_pane_vc

0x9908,	// (0x00053a43) clock_nsta_pane

0x997d,	// (0x00053ab8) indicator_nsta_pane

0x9c5d,	// (0x00053d98) bg_popup_sub_pane_cp2_ParamLimits

0x9c71,	// (0x00053dac) find_pane_cp2_ParamLimits

0x9c71,	// (0x00053dac) find_pane_cp2

0x9c87,	// (0x00053dc2) grid_toobar_pane_ParamLimits

0x9d67,	// (0x00053ea2) list_form_gen_pane_vc_ParamLimits

0x9d67,	// (0x00053ea2) list_form_gen_pane_vc

0x9d7d,	// (0x00053eb8) scroll_pane_cp8_vc_ParamLimits

0x9d7d,	// (0x00053eb8) scroll_pane_cp8_vc

0x9df9,	// (0x00053f34) data_form_wide_pane_vc_ParamLimits

0x9df9,	// (0x00053f34) data_form_wide_pane_vc

0x9e05,	// (0x00053f40) form_field_data_wide_pane_vc_g1

0x9e0d,	// (0x00053f48) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e0d,	// (0x00053f48) form_field_data_wide_pane_vc_t1

0x8838,	// (0x00052973) input_focus_pane_cp6_vc_ParamLimits

0x8838,	// (0x00052973) input_focus_pane_cp6_vc

0xa12d,	// (0x00054268) list_midp_pane_ParamLimits

0xa139,	// (0x00054274) scroll_pane_cp16_ParamLimits

0xa139,	// (0x00054274) scroll_pane_cp16

0xa18f,	// (0x000542ca) button_value_adjust_pane_ParamLimits

0xa18f,	// (0x000542ca) button_value_adjust_pane

0xb100,	// (0x0005523b) button_value_adjust_pane_cp6_ParamLimits

0xb100,	// (0x0005523b) button_value_adjust_pane_cp6

0xb22a,	// (0x00055365) settings_code_pane_cp_ParamLimits

0xb22a,	// (0x00055365) settings_code_pane_cp

0x7ed3,	// (0x0005200e) cell_touch_pane_g1

0x7ed3,	// (0x0005200e) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00059843) cell_touch_pane_g

0xb7a0,	// (0x000558db) cell_touch_pane_cp_ParamLimits

0xb7a0,	// (0x000558db) cell_touch_pane_cp

0xb7b0,	// (0x000558eb) cell_touch_pane_ParamLimits

0xb7b0,	// (0x000558eb) cell_touch_pane

0x7ed3,	// (0x0005200e) scroll_sc2_down_pane_g1

0x7ed3,	// (0x0005200e) scroll_sc2_up_pane_g1

0x7edd,	// (0x00052018) bg_set_opt_pane_cp4_vc

0xb7c2,	// (0x000558fd) list_set_graphic_pane_vc_g1_ParamLimits

0xb7c2,	// (0x000558fd) list_set_graphic_pane_vc_g1

0xb7ce,	// (0x00055909) list_set_graphic_pane_vc_g2_ParamLimits

0xb7ce,	// (0x00055909) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x00059b38) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x00059b38) list_set_graphic_pane_vc_g

0xb7da,	// (0x00055915) text_primary_small_cp13_vc_ParamLimits

0xb7da,	// (0x00055915) text_primary_small_cp13_vc

0xb7f2,	// (0x0005592d) list_set_graphic_pane_vc_ParamLimits

0xb7f2,	// (0x0005592d) list_set_graphic_pane_vc

0x7edd,	// (0x00052018) input_focus_pane_cp2_vc

0x7ed3,	// (0x0005200e) setting_code_pane_vc_g1

0x8008,	// (0x00052143) setting_code_pane_vc_t1

0xb804,	// (0x0005593f) set_text_pane_vc_t1_ParamLimits

0xb804,	// (0x0005593f) set_text_pane_vc_t1

0x7edd,	// (0x00052018) input_focus_pane_cp1_vc

0xb820,	// (0x0005595b) list_set_text_pane_vc

0x7ed3,	// (0x0005200e) setting_text_pane_vc_g1

0x7edd,	// (0x00052018) bg_set_opt_pane_cp2_vc

0x7fff,	// (0x0005213a) setting_slider_graphic_pane_vc_g1

0xb82a,	// (0x00055965) setting_slider_graphic_pane_vc_t1

0xb83a,	// (0x00055975) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x00059b3d) setting_slider_graphic_pane_vc_t

0xb84a,	// (0x00055985) slider_set_pane_cp_vc

0xb852,	// (0x0005598d) slider_set_pane_vc_g1

0xb85b,	// (0x00055996) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x00059b42) slider_set_pane_vc_g

0x8884,	// (0x000529bf) set_opt_bg_pane_g1_copy1

0x888c,	// (0x000529c7) set_opt_bg_pane_g2_copy1

0xb887,	// (0x000559c2) set_opt_bg_pane_g3_copy1

0x889c,	// (0x000529d7) set_opt_bg_pane_g4_copy1

0x88a4,	// (0x000529df) set_opt_bg_pane_g5_copy1

0x88ac,	// (0x000529e7) set_opt_bg_pane_g6_copy1

0xb891,	// (0x000559cc) set_opt_bg_pane_g7_copy1

0xb899,	// (0x000559d4) set_opt_bg_pane_g8_copy1

0xb8a3,	// (0x000559de) set_opt_bg_pane_g9_copy1

0x7edd,	// (0x00052018) bg_set_opt_pane_cp_vc

0xb8ad,	// (0x000559e8) setting_slider_pane_vc_t1

0xb8bc,	// (0x000559f7) setting_slider_pane_vc_t2

0xb8cc,	// (0x00055a07) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x00059b51) setting_slider_pane_vc_t

0xb8dc,	// (0x00055a17) slider_set_pane_vc

0x616f,	// (0x000502aa) volume_set_pane_vc_g1

0x6178,	// (0x000502b3) volume_set_pane_vc_g2

0x6181,	// (0x000502bc) volume_set_pane_vc_g3

0x618a,	// (0x000502c5) volume_set_pane_vc_g4

0x6193,	// (0x000502ce) volume_set_pane_vc_g5

0x619c,	// (0x000502d7) volume_set_pane_vc_g6

0x61a5,	// (0x000502e0) volume_set_pane_vc_g7

0x61ae,	// (0x000502e9) volume_set_pane_vc_g8

0x61b7,	// (0x000502f2) volume_set_pane_vc_g9

0x61c0,	// (0x000502fb) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x000599f6) volume_set_pane_vc_g

0xb8e4,	// (0x00055a1f) volume_set_pane_vc

0xb8ec,	// (0x00055a27) button_value_adjust_pane_cp1_vc

0xb8f6,	// (0x00055a31) list_highlight_pane_cp2_vc

0xb8ff,	// (0x00055a3a) list_set_pane_vc_ParamLimits

0xb8ff,	// (0x00055a3a) list_set_pane_vc

0xb95d,	// (0x00055a98) main_pane_set_vc_t1_ParamLimits

0xb95d,	// (0x00055a98) main_pane_set_vc_t1

0xb972,	// (0x00055aad) main_pane_set_vc_t2_ParamLimits

0xb972,	// (0x00055aad) main_pane_set_vc_t2

0xb984,	// (0x00055abf) main_pane_set_vc_t3_ParamLimits

0xb984,	// (0x00055abf) main_pane_set_vc_t3

0xb998,	// (0x00055ad3) main_pane_set_vc_t4_ParamLimits

0xb998,	// (0x00055ad3) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x00059b58) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x00059b58) main_pane_set_vc_t

0xb9ac,	// (0x00055ae7) setting_code_pane_vc_ParamLimits

0xb9ac,	// (0x00055ae7) setting_code_pane_vc

0xb9bd,	// (0x00055af8) setting_slider_graphic_pane_vc

0xb9bd,	// (0x00055af8) setting_slider_pane_vc

0xb9bd,	// (0x00055af8) setting_text_pane_vc

0xb9bd,	// (0x00055af8) setting_volume_pane_vc

0xb9c7,	// (0x00055b02) scroll_pane_cp121_vc

0x8812,	// (0x0005294d) set_content_pane_vc

0xb9cf,	// (0x00055b0a) button_value_adjust_pane_g1

0xb9d8,	// (0x00055b13) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x00059bb4) button_value_adjust_pane_g

0xb9e1,	// (0x00055b1c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9e1,	// (0x00055b1c) form_field_slider_wide_pane_vc_t1

0xb9f5,	// (0x00055b30) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9f5,	// (0x00055b30) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x00059bb9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x00059bb9) form_field_slider_wide_pane_vc_t

0x8238,	// (0x00052373) input_focus_pane_cp10_vc_ParamLimits

0x8238,	// (0x00052373) input_focus_pane_cp10_vc

0xba23,	// (0x00055b5e) slider_cont_pane_cp1_vc_ParamLimits

0xba23,	// (0x00055b5e) slider_cont_pane_cp1_vc

0xba35,	// (0x00055b70) slider_form_pane_g1_cp2

0xb85b,	// (0x00055996) slider_form_pane_g2_cp2

0xba62,	// (0x00055b9d) form_field_slider_pane_vc_t3

0xba70,	// (0x00055bab) form_field_slider_pane_vc_t4

0xba7e,	// (0x00055bb9) slider_form_pane_vc_ParamLimits

0xba7e,	// (0x00055bb9) slider_form_pane_vc

0xba8b,	// (0x00055bc6) form_field_slider_pane_vc_t1_ParamLimits

0xba8b,	// (0x00055bc6) form_field_slider_pane_vc_t1

0xb9f5,	// (0x00055b30) form_field_slider_pane_vc_t2_ParamLimits

0xb9f5,	// (0x00055b30) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x00059bcb) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x00059bcb) form_field_slider_pane_vc_t

0x8238,	// (0x00052373) input_focus_pane_cp9_vc_ParamLimits

0x8238,	// (0x00052373) input_focus_pane_cp9_vc

0xbaa7,	// (0x00055be2) slider_cont_pane_vc_ParamLimits

0xbaa7,	// (0x00055be2) slider_cont_pane_vc

0xbabb,	// (0x00055bf6) list_form_graphic_pane_cp_vc_ParamLimits

0xbabb,	// (0x00055bf6) list_form_graphic_pane_cp_vc

0x9e05,	// (0x00053f40) form_field_popup_wide_pane_vc_g1

0xbad0,	// (0x00055c0b) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbad0,	// (0x00055c0b) form_field_popup_wide_pane_vc_t1

0x8838,	// (0x00052973) input_focus_pane_cp8_vc_ParamLimits

0x8838,	// (0x00052973) input_focus_pane_cp8_vc

0xbb15,	// (0x00055c50) list_form_wide_pane_vc_ParamLimits

0xbb15,	// (0x00055c50) list_form_wide_pane_vc

0xbb21,	// (0x00055c5c) list_form_graphic_pane_vc_g1

0xbb29,	// (0x00055c64) list_form_graphic_pane_vc_t1_ParamLimits

0xbb29,	// (0x00055c64) list_form_graphic_pane_vc_t1

0x7fbd,	// (0x000520f8) list_highlight_pane_cp5_vc_ParamLimits

0x7fbd,	// (0x000520f8) list_highlight_pane_cp5_vc

0xbb45,	// (0x00055c80) list_form_graphic_pane_vc_ParamLimits

0xbb45,	// (0x00055c80) list_form_graphic_pane_vc

0x9e05,	// (0x00053f40) form_field_popup_pane_vc_g1

0xbb5b,	// (0x00055c96) form_field_popup_pane_vc_t1_ParamLimits

0xbb5b,	// (0x00055c96) form_field_popup_pane_vc_t1

0x8838,	// (0x00052973) input_focus_pane_cp7_vc_ParamLimits

0x8838,	// (0x00052973) input_focus_pane_cp7_vc

0xbb72,	// (0x00055cad) list_form_pane_vc_ParamLimits

0xbb72,	// (0x00055cad) list_form_pane_vc

0xbb7e,	// (0x00055cb9) data_form_pane_vc_t1_ParamLimits

0xbb7e,	// (0x00055cb9) data_form_pane_vc_t1

0x8884,	// (0x000529bf) input_focus_pane_vc_g1

0x888c,	// (0x000529c7) input_focus_pane_vc_g2

0x8894,	// (0x000529cf) input_focus_pane_vc_g3

0x889c,	// (0x000529d7) input_focus_pane_vc_g4

0x88a4,	// (0x000529df) input_focus_pane_vc_g5

0x88ac,	// (0x000529e7) input_focus_pane_vc_g6

0x88b4,	// (0x000529ef) input_focus_pane_vc_g7

0x88bc,	// (0x000529f7) input_focus_pane_vc_g8

0x88c4,	// (0x000529ff) input_focus_pane_vc_g9

0x7ed3,	// (0x0005200e) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000597cc) input_focus_pane_vc_g

0x9df9,	// (0x00053f34) data_form_pane_vc_ParamLimits

0x9df9,	// (0x00053f34) data_form_pane_vc

0x9e05,	// (0x00053f40) form_field_data_pane_vc_g1

0xbb99,	// (0x00055cd4) form_field_data_pane_vc_t1_ParamLimits

0xbb99,	// (0x00055cd4) form_field_data_pane_vc_t1

0x8838,	// (0x00052973) input_focus_pane_vc_ParamLimits

0x8838,	// (0x00052973) input_focus_pane_vc

0xbbb3,	// (0x00055cee) button_value_adjust_pane_cp3_vc

0xbbbb,	// (0x00055cf6) button_value_adjust_pane_cp5_vc

0xbbc3,	// (0x00055cfe) form_field_data_pane_vc_ParamLimits

0xbbc3,	// (0x00055cfe) form_field_data_pane_vc

0xbbda,	// (0x00055d15) form_field_data_pane_vc_cp2

0xbbe2,	// (0x00055d1d) form_field_data_wide_pane_vc_ParamLimits

0xbbe2,	// (0x00055d1d) form_field_data_wide_pane_vc

0xbbf8,	// (0x00055d33) form_field_data_wide_pane_vc_cp2

0xbc00,	// (0x00055d3b) form_field_popup_pane_vc_ParamLimits

0xbc00,	// (0x00055d3b) form_field_popup_pane_vc

0xbc17,	// (0x00055d52) form_field_popup_wide_pane_vc_ParamLimits

0xbc17,	// (0x00055d52) form_field_popup_wide_pane_vc

0xbc2d,	// (0x00055d68) form_field_slider_pane_vc_ParamLimits

0xbc2d,	// (0x00055d68) form_field_slider_pane_vc

0xbc40,	// (0x00055d7b) form_field_slider_wide_pane_vc_ParamLimits

0xbc40,	// (0x00055d7b) form_field_slider_wide_pane_vc

0xbc53,	// (0x00055d8e) grid_touch_1_pane_ParamLimits

0xbc53,	// (0x00055d8e) grid_touch_1_pane

0xbc5f,	// (0x00055d9a) grid_touch_2_pane_ParamLimits

0xbc5f,	// (0x00055d9a) grid_touch_2_pane

0x9786,	// (0x000538c1) touch_pane_g1_ParamLimits

0x9786,	// (0x000538c1) touch_pane_g1

0xbc77,	// (0x00055db2) cell_app_pane_cp_wide_ParamLimits

0xbc77,	// (0x00055db2) cell_app_pane_cp_wide

0xbc88,	// (0x00055dc3) grid_popup_fast_wide_pane_ParamLimits

0xbc88,	// (0x00055dc3) grid_popup_fast_wide_pane

0xbc9c,	// (0x00055dd7) scroll_pane_cp19_ParamLimits

0xbc9c,	// (0x00055dd7) scroll_pane_cp19

0x7edd,	// (0x00052018) bg_popup_window_pane_cp20

0xbcb0,	// (0x00055deb) listscroll_popup_fast_wide_pane

0x7fbd,	// (0x000520f8) grid_indicator_nsta_pane

0xbcb8,	// (0x00055df3) clock_nsta_pane_g1

0xbcc1,	// (0x00055dfc) clock_nsta_pane_t1

0xbcdd,	// (0x00055e18) cell_indicator_nsta_pane_ParamLimits

0xbcdd,	// (0x00055e18) cell_indicator_nsta_pane

0xbd0e,	// (0x00055e49) cell_indicator_nsta_pane_g1

0xbd1c,	// (0x00055e57) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x00059bdc) cell_indicator_nsta_pane_g

0xbd29,	// (0x00055e64) clock_nsta_pane_cp

0xbd31,	// (0x00055e6c) indicator_nsta_pane_cp

0xbd39,	// (0x00055e74) nsta_clock_indic_pane_g1

0x8086,	// (0x000521c1) grid_indicator_pane

0x8dbc,	// (0x00052ef7) scroll_pane_cp29

0x56e2,	// (0x0004f81d) indicator_nsta_pane_cp2_ParamLimits

0x56e2,	// (0x0004f81d) indicator_nsta_pane_cp2

0x7fbd,	// (0x000520f8) main_apps_wheel_pane

0xa00e,	// (0x00054149) form_midp_field_text_pane_ParamLimits

0xa159,	// (0x00054294) scroll_bar_cp050_ParamLimits

0xbd89,	// (0x00055ec4) cell_indicator_pane_ParamLimits

0xbd89,	// (0x00055ec4) cell_indicator_pane

0xbda0,	// (0x00055edb) cell_indicator_pane_g1

0xbdaa,	// (0x00055ee5) grid_wheel_folder_pane_ParamLimits

0xbdaa,	// (0x00055ee5) grid_wheel_folder_pane

0xbdc0,	// (0x00055efb) list_wheel_apps_pane_ParamLimits

0xbdc0,	// (0x00055efb) list_wheel_apps_pane

0xbdd1,	// (0x00055f0c) main_apps_wheel_pane_g1_ParamLimits

0xbdd1,	// (0x00055f0c) main_apps_wheel_pane_g1

0xbde5,	// (0x00055f20) main_apps_wheel_pane_g2_ParamLimits

0xbde5,	// (0x00055f20) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x00059bf8) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x00059bf8) main_apps_wheel_pane_g

0xbdfd,	// (0x00055f38) main_apps_wheel_pane_t1_ParamLimits

0xbdfd,	// (0x00055f38) main_apps_wheel_pane_t1

0xbe20,	// (0x00055f5b) list_wheel_apps_pane_g1

0xbe28,	// (0x00055f63) list_wheel_apps_pane_g2

0xbe30,	// (0x00055f6b) list_wheel_apps_pane_g3

0xbe38,	// (0x00055f73) list_wheel_apps_pane_g4

0xbe42,	// (0x00055f7d) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x00059bfd) list_wheel_apps_pane_g

0x933f,	// (0x0005347a) navi_icon_text_pane

0x982b,	// (0x00053966) aid_fill_nsta

0xbe65,	// (0x00055fa0) navi_icon_text_pane_g1

0xbe71,	// (0x00055fac) navi_icon_text_pane_t1

0x91d2,	// (0x0005330d) list_set_graphic_pane_t1_ParamLimits

0x91d2,	// (0x0005330d) list_set_graphic_pane_t1

0xa8b0,	// (0x000549eb) popup_midp_note_alarm_window_t6_ParamLimits

0xa8b0,	// (0x000549eb) popup_midp_note_alarm_window_t6

0xa8c2,	// (0x000549fd) popup_midp_note_alarm_window_t7_ParamLimits

0xa8c2,	// (0x000549fd) popup_midp_note_alarm_window_t7

0xa8d4,	// (0x00054a0f) popup_midp_note_alarm_window_t8_ParamLimits

0xa8d4,	// (0x00054a0f) popup_midp_note_alarm_window_t8

0xa8e6,	// (0x00054a21) popup_midp_note_alarm_window_t9_ParamLimits

0xa8e6,	// (0x00054a21) popup_midp_note_alarm_window_t9

0xa8f8,	// (0x00054a33) popup_midp_note_alarm_window_t10_ParamLimits

0xa8f8,	// (0x00054a33) popup_midp_note_alarm_window_t10

0xa90a,	// (0x00054a45) popup_midp_note_alarm_window_t11_ParamLimits

0xa90a,	// (0x00054a45) popup_midp_note_alarm_window_t11

0xa91c,	// (0x00054a57) scroll_pane_cp17_ParamLimits

0xa91c,	// (0x00054a57) scroll_pane_cp17

0x616f,	// (0x000502aa) volume_small_pane_cp_g1

0x6464,	// (0x0005059f) volume_small_pane_cp_g2

0x646d,	// (0x000505a8) volume_small_pane_cp_g3

0x6476,	// (0x000505b1) volume_small_pane_cp_g4

0x647f,	// (0x000505ba) volume_small_pane_cp_g5

0x6488,	// (0x000505c3) volume_small_pane_cp_g6

0x6491,	// (0x000505cc) volume_small_pane_cp_g7

0x649a,	// (0x000505d5) volume_small_pane_cp_g8

0x64a3,	// (0x000505de) volume_small_pane_cp_g9

0x64ac,	// (0x000505e7) volume_small_pane_cp_g10

0x959c,	// (0x000536d7) midp_ticker_pane_g1_ParamLimits

0x95a8,	// (0x000536e3) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00059898) midp_ticker_pane_g_ParamLimits

0x95b4,	// (0x000536ef) midp_ticker_pane_t1_ParamLimits

0x9841,	// (0x0005397c) aid_fill_nsta_2

0xa145,	// (0x00054280) list_form2_midp_pane

0xb275,	// (0x000553b0) midp_editing_number_pane_ParamLimits

0xb284,	// (0x000553bf) midp_ticker_pane_ParamLimits

0xbe83,	// (0x00055fbe) form2_midp_field_pane

0xbea7,	// (0x00055fe2) scroll_pane_cp51

0xbec7,	// (0x00056002) form2_midp_button_pane_ParamLimits

0xbec7,	// (0x00056002) form2_midp_button_pane

0xbed9,	// (0x00056014) form2_midp_content_pane_ParamLimits

0xbed9,	// (0x00056014) form2_midp_content_pane

0xbef3,	// (0x0005602e) form2_midp_field_choice_group_pane

0xbefb,	// (0x00056036) form2_midp_field_pane_g1

0xbf03,	// (0x0005603e) form2_midp_field_pane_g2

0xbf0b,	// (0x00056046) form2_midp_field_pane_g3

0xbf13,	// (0x0005604e) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x00059c22) form2_midp_field_pane_g

0xbf1b,	// (0x00056056) form2_midp_gauge_slider_pane

0xbf23,	// (0x0005605e) form2_midp_gauge_wait_pane

0xbf2b,	// (0x00056066) form2_midp_image_pane_ParamLimits

0xbf2b,	// (0x00056066) form2_midp_image_pane

0xbf46,	// (0x00056081) form2_midp_label_pane_ParamLimits

0xbf46,	// (0x00056081) form2_midp_label_pane

0xbf5f,	// (0x0005609a) form2_midp_label_pane_cp_ParamLimits

0xbf5f,	// (0x0005609a) form2_midp_label_pane_cp

0xbf80,	// (0x000560bb) form2_midp_string_pane_ParamLimits

0xbf80,	// (0x000560bb) form2_midp_string_pane

0x7ae0,	// (0x00051c1b) form2_midp_text_pane_ParamLimits

0x7ae0,	// (0x00051c1b) form2_midp_text_pane

0xbf92,	// (0x000560cd) form2_midp_time_pane

0xbfa2,	// (0x000560dd) input_focus_pane_cp51_ParamLimits

0xbfa2,	// (0x000560dd) input_focus_pane_cp51

0xbfba,	// (0x000560f5) form2_midp_label_pane_t1_ParamLimits

0xbfba,	// (0x000560f5) form2_midp_label_pane_t1

0x7aff,	// (0x00051c3a) form2_mdip_text_pane_t1_ParamLimits

0x7aff,	// (0x00051c3a) form2_mdip_text_pane_t1

0x7b1d,	// (0x00051c58) form2_midp_time_pane_t1

0xc003,	// (0x0005613e) form2_midp_gauge_slider_pane_t1

0xc015,	// (0x00056150) form2_midp_gauge_slider_pane_t2

0xc027,	// (0x00056162) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x00059c2b) form2_midp_gauge_slider_pane_t

0xc039,	// (0x00056174) form2_midp_slider_pane

0xc045,	// (0x00056180) form2_midp_gauge_wait_pane_t1

0xc053,	// (0x0005618e) form2_midp_wait_pane_ParamLimits

0xc053,	// (0x0005618e) form2_midp_wait_pane

0xc07e,	// (0x000561b9) list_single_2graphic_pane_cp4_ParamLimits

0xc07e,	// (0x000561b9) list_single_2graphic_pane_cp4

0x9e6d,	// (0x00053fa8) list_single_midp_graphic_pane_cp_ParamLimits

0x9e6d,	// (0x00053fa8) list_single_midp_graphic_pane_cp

0x7edd,	// (0x00052018) list_highlight_pane_cp20

0xc0a2,	// (0x000561dd) list_single_2graphic_pane_g1_cp4

0xc0aa,	// (0x000561e5) list_single_2graphic_pane_g2_cp4

0xc0b2,	// (0x000561ed) list_single_2graphic_pane_t1_cp4

0x7fbd,	// (0x000520f8) list_highlight_pane_cp21

0xc0c1,	// (0x000561fc) list_single_midp_graphic_pane_g4_cp

0xc0d0,	// (0x0005620b) list_single_midp_graphic_pane_t1_cp

0xc0e5,	// (0x00056220) form2_mdip_string_pane_t1_ParamLimits

0xc0e5,	// (0x00056220) form2_mdip_string_pane_t1

0x7edd,	// (0x00052018) bg_wml_button_pane_cp2

0x7ed3,	// (0x0005200e) form2_midp_image_pane_g1

0x7501,	// (0x0005163c) list_double_large_graphic_pane_g5_ParamLimits

0x7501,	// (0x0005163c) list_double_large_graphic_pane_g5

0x94c7,	// (0x00053602) midp_form_pane_ParamLimits

0x7fbd,	// (0x000520f8) main_apps_wheel_pane_ParamLimits

0x5dd1,	// (0x0004ff0c) popup_preview_window_ParamLimits

0x5dd1,	// (0x0004ff0c) popup_preview_window

0x5f8c,	// (0x000500c7) popup_touch_info_window_ParamLimits

0x5f8c,	// (0x000500c7) popup_touch_info_window

0x5faa,	// (0x000500e5) popup_touch_menu_window_ParamLimits

0x5faa,	// (0x000500e5) popup_touch_menu_window

0x7ec9,	// (0x00052004) bg_popup_sub_pane_cp6

0xc1cf,	// (0x0005630a) list_touch_menu_pane

0xc1d7,	// (0x00056312) list_single_touch_menu_pane_ParamLimits

0xc1d7,	// (0x00056312) list_single_touch_menu_pane

0xc1ed,	// (0x00056328) list_single_touch_menu_pane_t1

0x7fbd,	// (0x000520f8) bg_popup_sub_pane_cp7_ParamLimits

0x7fbd,	// (0x000520f8) bg_popup_sub_pane_cp7

0xc1fb,	// (0x00056336) heading_sub_pane

0xc203,	// (0x0005633e) list_touch_info_pane_ParamLimits

0xc203,	// (0x0005633e) list_touch_info_pane

0xc212,	// (0x0005634d) list_single_touch_info_pane_ParamLimits

0xc212,	// (0x0005634d) list_single_touch_info_pane

0xc224,	// (0x0005635f) list_single_touch_info_pane_t1

0xc232,	// (0x0005636d) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x00059c39) list_single_touch_info_pane_t

0x94bf,	// (0x000535fa) bg_popup_heading_pane_cp

0xc240,	// (0x0005637b) heading_sub_pane_t1

0x9d93,	// (0x00053ece) bg_popup_preview_window_pane_cp_ParamLimits

0x9d93,	// (0x00053ece) bg_popup_preview_window_pane_cp

0xc1fb,	// (0x00056336) heading_preview_pane

0xc203,	// (0x0005633e) list_preview_pane_ParamLimits

0xc203,	// (0x0005633e) list_preview_pane

0xc24e,	// (0x00056389) popup_preview_window_g1

0xc212,	// (0x0005634d) list_single_preview_pane_ParamLimits

0xc212,	// (0x0005634d) list_single_preview_pane

0xc256,	// (0x00056391) list_single_preview_pane_g1

0xc25e,	// (0x00056399) list_single_preview_pane_t1

0xc224,	// (0x0005635f) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x00059c3e) list_single_preview_pane_t

0xc26c,	// (0x000563a7) bg_popup_heading_pane_cp2_ParamLimits

0xc26c,	// (0x000563a7) bg_popup_heading_pane_cp2

0xc282,	// (0x000563bd) heading_preview_pane_g1

0xc28a,	// (0x000563c5) heading_preview_pane_t1_ParamLimits

0xc28a,	// (0x000563c5) heading_preview_pane_t1

0x80a9,	// (0x000521e4) soft_indicator_pane_t1_ParamLimits

0x879f,	// (0x000528da) scroll_pane_ParamLimits

0x8cb5,	// (0x00052df0) scroll_sc2_left_pane

0x8cbe,	// (0x00052df9) scroll_sc2_right_pane

0x8cdd,	// (0x00052e18) scroll_bg_pane_g1_ParamLimits

0x8cf2,	// (0x00052e2d) scroll_bg_pane_g2_ParamLimits

0x8d0a,	// (0x00052e45) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00059823) scroll_bg_pane_g_ParamLimits

0x8cdd,	// (0x00052e18) scroll_handle_pane_g1_ParamLimits

0x8d2c,	// (0x00052e67) scroll_handle_pane_g2_ParamLimits

0x8d0a,	// (0x00052e45) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005982a) scroll_handle_pane_g_ParamLimits

0x5a52,	// (0x0004fb8d) popup_choice_list_window_ParamLimits

0x5a52,	// (0x0004fb8d) popup_choice_list_window

0x9c69,	// (0x00053da4) choice_list_pane

0x9ceb,	// (0x00053e26) cell_toolbar_pane_t1

0x9d13,	// (0x00053e4e) toolbar_button_pane_ParamLimits

0xadd6,	// (0x00054f11) ai_gene_pane_1_t2_ParamLimits

0xadd6,	// (0x00054f11) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00059a52) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00059a52) ai_gene_pane_1_t

0xc2a7,	// (0x000563e2) scroll_sc2_left_pane_g1

0xc2a7,	// (0x000563e2) scroll_sc2_right_pane_g1

0x9809,	// (0x00053944) bg_popup_sub_pane_cp10

0xc2b1,	// (0x000563ec) list_choice_list_pane

0xc2ca,	// (0x00056405) list_single_choice_list_pane_ParamLimits

0xc2ca,	// (0x00056405) list_single_choice_list_pane

0xc2dd,	// (0x00056418) list_single_choice_list_pane_g1

0x89bd,	// (0x00052af8) list_single_choice_list_pane_t1_ParamLimits

0x89bd,	// (0x00052af8) list_single_choice_list_pane_t1

0xc2e5,	// (0x00056420) choice_list_pane_g1

0xc2ed,	// (0x00056428) choice_list_pane_t1

0x7ec9,	// (0x00052004) input_focus_pane_cp11

0x8b94,	// (0x00052ccf) title_pane_stacon_g2_ParamLimits

0x8b94,	// (0x00052ccf) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00059809) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00059809) title_pane_stacon_g

0x94bf,	// (0x000535fa) cursor_press_pane

0x5afe,	// (0x0004fc39) popup_fep_hwr_window_ParamLimits

0x5afe,	// (0x0004fc39) popup_fep_hwr_window

0x5b78,	// (0x0004fcb3) popup_fep_vkb_window_ParamLimits

0x5b78,	// (0x0004fcb3) popup_fep_vkb_window

0xc2fb,	// (0x00056436) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x00059c67) fep_vkb_side_pane_g_ParamLimits

0x64ee,	// (0x00050629) fep_hwr_candidate_pane_ParamLimits

0x64ee,	// (0x00050629) fep_hwr_candidate_pane

0x6518,	// (0x00050653) fep_hwr_side_pane_ParamLimits

0x6518,	// (0x00050653) fep_hwr_side_pane

0x6538,	// (0x00050673) fep_hwr_top_pane_ParamLimits

0x6538,	// (0x00050673) fep_hwr_top_pane

0x6550,	// (0x0005068b) fep_hwr_write_pane_ParamLimits

0x6550,	// (0x0005068b) fep_hwr_write_pane

0xfb2c,	// (0x00059c67) fep_vkb_side_pane_g

0xc303,	// (0x0005643e) fep_hwr_top_pane_g1

0xc315,	// (0x00056450) fep_hwr_top_pane_g2

0x658a,	// (0x000506c5) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x00059c43) fep_hwr_top_pane_g

0x659f,	// (0x000506da) fep_hwr_top_text_pane

0x8eac,	// (0x00052fe7) fep_hwr_top_text_pane_g1

0xc34b,	// (0x00056486) fep_hwr_top_text_pane_t1

0x6695,	// (0x000507d0) fep_hwr_candidate_pane_g1

0xc5aa,	// (0x000566e5) fep_vkb_keypad_pane_g3_ParamLimits

0xc5aa,	// (0x000566e5) fep_vkb_keypad_pane_g3

0xc5d2,	// (0x0005670d) fep_vkb_keypad_pane_g4_ParamLimits

0xc5d2,	// (0x0005670d) fep_vkb_keypad_pane_g4

0xc641,	// (0x0005677c) fep_vkb_bottom_pane_g2_ParamLimits

0xc641,	// (0x0005677c) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x00059c6e) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x00059c6e) fep_vkb_bottom_pane_g

0xc2a7,	// (0x000563e2) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x00059c78) cell_vkb_side_pane_g

0xc6cc,	// (0x00056807) cell_vkb_side_pane_t1

0xc6da,	// (0x00056815) cell_vkb_side_pane_t1_copy1

0xc2a7,	// (0x000563e2) bg_fep_vkb_candidate_pane_g2

0xc806,	// (0x00056941) cell_vkb_candidate_pane_ParamLimits

0xc359,	// (0x00056494) aid_size_cell_vkb_ParamLimits

0xc359,	// (0x00056494) aid_size_cell_vkb

0xc806,	// (0x00056941) cell_vkb_candidate_pane

0x66bc,	// (0x000507f7) bg_popup_fep_shadow_pane_g1

0xc3e7,	// (0x00056522) fep_vkb_bottom_pane_ParamLimits

0xc3e7,	// (0x00056522) fep_vkb_bottom_pane

0xc41d,	// (0x00056558) fep_vkb_candidate_pane_ParamLimits

0xc41d,	// (0x00056558) fep_vkb_candidate_pane

0xc439,	// (0x00056574) fep_vkb_keypad_pane_ParamLimits

0xc439,	// (0x00056574) fep_vkb_keypad_pane

0xc47f,	// (0x000565ba) fep_vkb_side_pane_ParamLimits

0xc47f,	// (0x000565ba) fep_vkb_side_pane

0xc4c7,	// (0x00056602) fep_vkb_top_pane_ParamLimits

0xc4c7,	// (0x00056602) fep_vkb_top_pane

0xc503,	// (0x0005663e) fep_vkb_top_pane_g1_ParamLimits

0xc503,	// (0x0005663e) fep_vkb_top_pane_g1

0xc512,	// (0x0005664d) fep_vkb_top_pane_g2_ParamLimits

0xc512,	// (0x0005664d) fep_vkb_top_pane_g2

0xc521,	// (0x0005665c) fep_vkb_top_pane_g3_ParamLimits

0xc521,	// (0x0005665c) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x00059c5e) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x00059c5e) fep_vkb_top_pane_g

0xc53f,	// (0x0005667a) fep_vkb_top_text_pane_ParamLimits

0xc53f,	// (0x0005667a) fep_vkb_top_text_pane

0xc550,	// (0x0005668b) fep_vkb_side_pane_g1_ParamLimits

0xc550,	// (0x0005668b) fep_vkb_side_pane_g1

0xc599,	// (0x000566d4) grid_vkb_side_pane_ParamLimits

0xc599,	// (0x000566d4) grid_vkb_side_pane

0x66c4,	// (0x000507ff) bg_popup_fep_shadow_pane_g2

0x66cd,	// (0x00050808) bg_popup_fep_shadow_pane_g3

0x66d5,	// (0x00050810) bg_popup_fep_shadow_pane_g4

0x66de,	// (0x00050819) bg_popup_fep_shadow_pane_g5

0x66e8,	// (0x00050823) bg_popup_fep_shadow_pane_g6

0x66f0,	// (0x0005082b) bg_popup_fep_shadow_pane_g7

0x889c,	// (0x000529d7) bg_popup_fep_shadow_pane_g8

0xc5f0,	// (0x0005672b) grid_vkb_keypad_number_pane_ParamLimits

0xc5f0,	// (0x0005672b) grid_vkb_keypad_number_pane

0xc600,	// (0x0005673b) grid_vkb_keypad_pane_ParamLimits

0xc600,	// (0x0005673b) grid_vkb_keypad_pane

0xc626,	// (0x00056761) fep_vkb_bottom_pane_g1_ParamLimits

0xc626,	// (0x00056761) fep_vkb_bottom_pane_g1

0xc64f,	// (0x0005678a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64f,	// (0x0005678a) grid_vkb_keypad_bottom_left_pane

0xc664,	// (0x0005679f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc664,	// (0x0005679f) grid_vkb_keypad_bottom_right_pane

0xc679,	// (0x000567b4) fep_vkb_top_text_pane_g1

0xc694,	// (0x000567cf) fep_vkb_top_text_pane_t1

0xc6a9,	// (0x000567e4) cell_vkb_side_pane_ParamLimits

0xc6a9,	// (0x000567e4) cell_vkb_side_pane

0xc2a7,	// (0x000563e2) cell_vkb_side_pane_g1

0xc6e8,	// (0x00056823) cell_vkb_keypad_pane_ParamLimits

0xc6e8,	// (0x00056823) cell_vkb_keypad_pane

0xc75d,	// (0x00056898) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x00059c8b) bg_popup_fep_shadow_pane_g

0x6702,	// (0x0005083d) cell_hwr_side_pane_g1

0x6702,	// (0x0005083d) cell_hwr_side_pane_g2

0xc767,	// (0x000568a2) cell_vkb_keypad_pane_t1

0xc775,	// (0x000568b0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc775,	// (0x000568b0) cell_vkb_keypad_bottom_left_pane

0xc792,	// (0x000568cd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc792,	// (0x000568cd) cell_vkb_keypad_bottom_right_pane

0xc2a7,	// (0x000563e2) cell_vkb_keypad_bottom_left_pane_g1

0xc2a7,	// (0x000563e2) cell_vkb_keypad_bottom_right_pane_g1

0xc7cb,	// (0x00056906) cell_vkb_keypad_number_pane_ParamLimits

0xc7cb,	// (0x00056906) cell_vkb_keypad_number_pane

0xc7ea,	// (0x00056925) cell_vkb_keypad_number_pane_g1

0xc7f4,	// (0x0005692f) cell_vkb_keypad_number_pane_g2

0xc7fd,	// (0x00056938) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x00059c7d) cell_vkb_keypad_number_pane_g

0xc767,	// (0x000568a2) cell_vkb_keypad_number_pane_t1

0xc821,	// (0x0005695c) fep_vkb_candidate_pane_g1

0x0001,

0xfb63,	// (0x00059c9e) cell_hwr_side_pane_g

0xc83a,	// (0x00056975) cell_hwr_side_pane_t1

0x670c,	// (0x00050847) cell_hwr_side_pane_t1_copy1

0x671a,	// (0x00050855) cell_hwr_candidate_pane_g1

0x6749,	// (0x00050884) cell_hwr_candidate_pane_t1

0xc2a7,	// (0x000563e2) cell_vkb_candidate_pane_g2

0xc87e,	// (0x000569b9) cell_vkb_candidate_pane_t1

0x64b5,	// (0x000505f0) bg_popup_fep_shadow_pane_ParamLimits

0x64b5,	// (0x000505f0) bg_popup_fep_shadow_pane

0x656a,	// (0x000506a5) bg_fep_hwr_top_pane_g4

0xc327,	// (0x00056462) bg_hwr_side_pane_g1_ParamLimits

0xc327,	// (0x00056462) bg_hwr_side_pane_g1

0x65db,	// (0x00050716) cell_hwr_side_pane_ParamLimits

0x65db,	// (0x00050716) cell_hwr_side_pane

0x6616,	// (0x00050751) fep_hwr_write_pane_g1_ParamLimits

0x6616,	// (0x00050751) fep_hwr_write_pane_g1

0x6623,	// (0x0005075e) fep_hwr_write_pane_g2_ParamLimits

0x6623,	// (0x0005075e) fep_hwr_write_pane_g2

0x6630,	// (0x0005076b) fep_hwr_write_pane_g3_ParamLimits

0x6630,	// (0x0005076b) fep_hwr_write_pane_g3

0x663e,	// (0x00050779) fep_hwr_write_pane_g4_ParamLimits

0x663e,	// (0x00050779) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x00059c4a) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x00059c4a) fep_hwr_write_pane_g

0x656a,	// (0x000506a5) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x656a,	// (0x000506a5) bg_fep_hwr_candidate_pane_g2

0x6653,	// (0x0005078e) cell_hwr_candidate_pane_ParamLimits

0x6653,	// (0x0005078e) cell_hwr_candidate_pane

0x6695,	// (0x000507d0) fep_hwr_candidate_pane_g1_ParamLimits

0xc387,	// (0x000564c2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc387,	// (0x000564c2) bg_popup_fep_shadow_pane_cp2

0xc531,	// (0x0005666c) fep_vkb_top_pane_g4_ParamLimits

0xc531,	// (0x0005666c) fep_vkb_top_pane_g4

0xc577,	// (0x000566b2) fep_vkb_side_pane_g2_ParamLimits

0xc577,	// (0x000566b2) fep_vkb_side_pane_g2

0x5071,	// (0x0004f1ac) list_setting_pane_t4_ParamLimits

0x5071,	// (0x0004f1ac) list_setting_pane_t4

0x510b,	// (0x0004f246) list_setting_number_pane_t5_ParamLimits

0x510b,	// (0x0004f246) list_setting_number_pane_t5

0x8ef3,	// (0x0005302e) list_double_heading_pane_cp2_ParamLimits

0x8ef3,	// (0x0005302e) list_double_heading_pane_cp2

0x87d3,	// (0x0005290e) list_double_heading_pane_g1_cp2_ParamLimits

0x87d3,	// (0x0005290e) list_double_heading_pane_g1_cp2

0x8846,	// (0x00052981) list_double_heading_pane_g2_cp2_ParamLimits

0x8846,	// (0x00052981) list_double_heading_pane_g2_cp2

0xc88c,	// (0x000569c7) list_double_heading_pane_t1_cp2_ParamLimits

0xc88c,	// (0x000569c7) list_double_heading_pane_t1_cp2

0xc8a2,	// (0x000569dd) list_double_heading_pane_t2_cp2_ParamLimits

0xc8a2,	// (0x000569dd) list_double_heading_pane_t2_cp2

0x7eb1,	// (0x00051fec) aid_value_unit2

0x4b18,	// (0x0004ec53) popup_preview_fixed_window

0x8246,	// (0x00052381) bg_popup_preview_window_pane_cp02

0xc8b4,	// (0x000569ef) list_preview_fixed_pane

0xc8fa,	// (0x00056a35) list_empty_pane_fp_ParamLimits

0xc8fa,	// (0x00056a35) list_empty_pane_fp

0xc8fa,	// (0x00056a35) list_single_cale_day_pane_fp_ParamLimits

0xc8fa,	// (0x00056a35) list_single_cale_day_pane_fp

0xc8fa,	// (0x00056a35) list_single_graphic_heading_pane_fp_ParamLimits

0xc8fa,	// (0x00056a35) list_single_graphic_heading_pane_fp

0xc8fa,	// (0x00056a35) list_single_graphic_pane_fp_ParamLimits

0xc8fa,	// (0x00056a35) list_single_graphic_pane_fp

0xc8fa,	// (0x00056a35) list_single_heading_pane_fp_ParamLimits

0xc8fa,	// (0x00056a35) list_single_heading_pane_fp

0xc8fa,	// (0x00056a35) list_single_pane_fp_ParamLimits

0xc8fa,	// (0x00056a35) list_single_pane_fp

0xc90f,	// (0x00056a4a) list_single_pane_fp_g1_ParamLimits

0xc90f,	// (0x00056a4a) list_single_pane_fp_g1

0x87d3,	// (0x0005290e) list_single_pane_fp_g2_ParamLimits

0x87d3,	// (0x0005290e) list_single_pane_fp_g2

0x8846,	// (0x00052981) list_single_pane_fp_g3_ParamLimits

0x8846,	// (0x00052981) list_single_pane_fp_g3

0xc91b,	// (0x00056a56) list_single_pane_fp_g4_ParamLimits

0xc91b,	// (0x00056a56) list_single_pane_fp_g4

0x0003,

0xfb76,	// (0x00059cb1) list_single_pane_fp_g_ParamLimits

0xfb76,	// (0x00059cb1) list_single_pane_fp_g

0x7b30,	// (0x00051c6b) list_single_pane_fp_t1_ParamLimits

0x7b30,	// (0x00051c6b) list_single_pane_fp_t1

0x7b47,	// (0x00051c82) list_single_graphic_pane_fp_g1_ParamLimits

0x7b47,	// (0x00051c82) list_single_graphic_pane_fp_g1

0xc90f,	// (0x00056a4a) list_single_graphic_pane_fp_g2_ParamLimits

0xc90f,	// (0x00056a4a) list_single_graphic_pane_fp_g2

0x87d3,	// (0x0005290e) list_single_graphic_pane_fp_g3_ParamLimits

0x87d3,	// (0x0005290e) list_single_graphic_pane_fp_g3

0x8846,	// (0x00052981) list_single_graphic_pane_fp_g4_ParamLimits

0x8846,	// (0x00052981) list_single_graphic_pane_fp_g4

0xc91b,	// (0x00056a56) list_single_graphic_pane_fp_g5_ParamLimits

0xc91b,	// (0x00056a56) list_single_graphic_pane_fp_g5

0x0004,

0xfb7f,	// (0x00059cba) list_single_graphic_pane_fp_g_ParamLimits

0xfb7f,	// (0x00059cba) list_single_graphic_pane_fp_g

0x7b53,	// (0x00051c8e) list_single_graphic_pane_fp_t1_ParamLimits

0x7b53,	// (0x00051c8e) list_single_graphic_pane_fp_t1

0x7b47,	// (0x00051c82) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7b47,	// (0x00051c82) list_single_graphic_heading_pane_fp_g1

0xc90f,	// (0x00056a4a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc90f,	// (0x00056a4a) list_single_graphic_heading_pane_fp_g2

0x87d3,	// (0x0005290e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x87d3,	// (0x0005290e) list_single_graphic_heading_pane_fp_g3

0x8846,	// (0x00052981) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8846,	// (0x00052981) list_single_graphic_heading_pane_fp_g4

0xc91b,	// (0x00056a56) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc91b,	// (0x00056a56) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x00059cba) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x00059cba) list_single_graphic_heading_pane_fp_g

0x7b69,	// (0x00051ca4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7b69,	// (0x00051ca4) list_single_graphic_heading_pane_fp_t1

0x7b7f,	// (0x00051cba) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7b7f,	// (0x00051cba) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x00059cc5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x00059cc5) list_single_graphic_heading_pane_fp_t

0x7b91,	// (0x00051ccc) list_single_cale_day_pane_fp_g1_ParamLimits

0x7b91,	// (0x00051ccc) list_single_cale_day_pane_fp_g1

0xc927,	// (0x00056a62) list_single_cale_day_pane_fp_g2_ParamLimits

0xc927,	// (0x00056a62) list_single_cale_day_pane_fp_g2

0x7bc9,	// (0x00051d04) list_single_cale_day_pane_fp_g3_ParamLimits

0x7bc9,	// (0x00051d04) list_single_cale_day_pane_fp_g3

0x7bf1,	// (0x00051d2c) list_single_cale_day_pane_fp_g4_ParamLimits

0x7bf1,	// (0x00051d2c) list_single_cale_day_pane_fp_g4

0x7c15,	// (0x00051d50) list_single_cale_day_pane_fp_g5_ParamLimits

0x7c15,	// (0x00051d50) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059cca) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059cca) list_single_cale_day_pane_fp_g

0x7c39,	// (0x00051d74) list_single_cale_day_pane_fp_t1_ParamLimits

0x7c39,	// (0x00051d74) list_single_cale_day_pane_fp_t1

0x7c5f,	// (0x00051d9a) list_single_cale_day_pane_fp_t2_ParamLimits

0x7c5f,	// (0x00051d9a) list_single_cale_day_pane_fp_t2

0x7c78,	// (0x00051db3) list_single_cale_day_pane_fp_t3_ParamLimits

0x7c78,	// (0x00051db3) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9a,	// (0x00059cd5) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9a,	// (0x00059cd5) list_single_cale_day_pane_fp_t

0xc90f,	// (0x00056a4a) list_empty_pane_fp_g1_ParamLimits

0xc90f,	// (0x00056a4a) list_empty_pane_fp_g1

0x7c91,	// (0x00051dcc) list_empty_pane_fp_t1

0x7c9f,	// (0x00051dda) list_empty_pane_fp_t2

0x0001,

0xfba1,	// (0x00059cdc) list_empty_pane_fp_t

0xc90f,	// (0x00056a4a) list_single_heading_pane_fp_g1_ParamLimits

0xc90f,	// (0x00056a4a) list_single_heading_pane_fp_g1

0x87d3,	// (0x0005290e) list_single_heading_pane_fp_g2_ParamLimits

0x87d3,	// (0x0005290e) list_single_heading_pane_fp_g2

0x8846,	// (0x00052981) list_single_heading_pane_fp_g3_ParamLimits

0x8846,	// (0x00052981) list_single_heading_pane_fp_g3

0x0002,

0xfba6,	// (0x00059ce1) list_single_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x00059ce1) list_single_heading_pane_fp_g

0x7cad,	// (0x00051de8) list_single_heading_pane_fp_t1_ParamLimits

0x7cad,	// (0x00051de8) list_single_heading_pane_fp_t1

0x7cbf,	// (0x00051dfa) list_single_heading_pane_fp_t2_ParamLimits

0x7cbf,	// (0x00051dfa) list_single_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x00059ce8) list_single_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x00059ce8) list_single_heading_pane_fp_t

0x8a2b,	// (0x00052b66) aid_size_cell_fast

0x81b6,	// (0x000522f1) soft_indicator_pane_cp1_t1

0x8a68,	// (0x00052ba3) cell_app_pane_cp2_ParamLimits

0x8a68,	// (0x00052ba3) cell_app_pane_cp2

0x64d7,	// (0x00050612) fep_hwr_candidate_drop_down_list_pane

0x66af,	// (0x000507ea) fep_hwr_candidate_pane_g3_ParamLimits

0x66af,	// (0x000507ea) fep_hwr_candidate_pane_g3

0x393e,	// (0x0004da79) fep_hwr_candidate_pane_g4_ParamLimits

0x393e,	// (0x0004da79) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x00059c57) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x00059c57) fep_hwr_candidate_pane_g

0xc40c,	// (0x00056547) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc40c,	// (0x00056547) fep_vkb_candidate_drop_down_list_pane

0xc829,	// (0x00056964) fep_vkb_candidate_pane_g3

0xc831,	// (0x0005696c) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x00059c84) fep_vkb_candidate_pane_g

0x671a,	// (0x00050855) cell_hwr_candidate_pane_g1_ParamLimits

0x6728,	// (0x00050863) cell_hwr_candidate_pane_g3_ParamLimits

0x6728,	// (0x00050863) cell_hwr_candidate_pane_g3

0xdf02,	// (0x0005803d) cell_hwr_candidate_pane_g4_ParamLimits

0xdf02,	// (0x0005803d) cell_hwr_candidate_pane_g4

0x0002,

0xfb68,	// (0x00059ca3) cell_hwr_candidate_pane_g_ParamLimits

0xfb68,	// (0x00059ca3) cell_hwr_candidate_pane_g

0xc848,	// (0x00056983) cell_vkb_candidate_pane_g3_ParamLimits

0xc848,	// (0x00056983) cell_vkb_candidate_pane_g3

0xc863,	// (0x0005699e) cell_vkb_candidate_pane_g4_ParamLimits

0xc863,	// (0x0005699e) cell_vkb_candidate_pane_g4

0xc933,	// (0x00056a6e) cell_app_pane_cp2_g1_ParamLimits

0xc933,	// (0x00056a6e) cell_app_pane_cp2_g1

0xc951,	// (0x00056a8c) cell_app_pane_cp2_g2_ParamLimits

0xc951,	// (0x00056a8c) cell_app_pane_cp2_g2

0x0001,

0xfbb2,	// (0x00059ced) cell_app_pane_cp2_g_ParamLimits

0xfbb2,	// (0x00059ced) cell_app_pane_cp2_g

0xc95d,	// (0x00056a98) cell_app_pane_cp2_t1_ParamLimits

0xc95d,	// (0x00056a98) cell_app_pane_cp2_t1

0x8838,	// (0x00052973) grid_highlight_pane_cp1_ParamLimits

0x8838,	// (0x00052973) grid_highlight_pane_cp1

0x6767,	// (0x000508a2) cell_hwr_candidate_pane_cp1_ParamLimits

0x6767,	// (0x000508a2) cell_hwr_candidate_pane_cp1

0x671a,	// (0x00050855) fep_hwr_candidate_drop_down_list_pane_g1

0x6786,	// (0x000508c1) fep_hwr_candidate_drop_down_list_pane_g2

0x6793,	// (0x000508ce) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x00059cf2) fep_hwr_candidate_drop_down_list_pane_g

0x67a0,	// (0x000508db) fep_hwr_candidate_drop_down_list_scroll_pane

0x67a9,	// (0x000508e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x67a9,	// (0x000508e4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x67b6,	// (0x000508f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x67b6,	// (0x000508f1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x67c3,	// (0x000508fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x67c3,	// (0x000508fe) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x67d0,	// (0x0005090b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x67d0,	// (0x0005090b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x67eb,	// (0x00050926) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x67eb,	// (0x00050926) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6806,	// (0x00050941) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6806,	// (0x00050941) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6821,	// (0x0005095c) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6821,	// (0x0005095c) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x683c,	// (0x00050977) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x683c,	// (0x00050977) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x00059cf9) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x00059cf9) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc96f,	// (0x00056aaa) cell_vkb_candidate_pane_cp1_ParamLimits

0xc96f,	// (0x00056aaa) cell_vkb_candidate_pane_cp1

0xc531,	// (0x0005666c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc531,	// (0x0005666c) fep_vkb_candidate_drop_down_list_pane_g1

0xc98f,	// (0x00056aca) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98f,	// (0x00056aca) fep_vkb_candidate_drop_down_list_pane_g2

0xc99c,	// (0x00056ad7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc99c,	// (0x00056ad7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcf,	// (0x00059d0a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcf,	// (0x00059d0a) fep_vkb_candidate_drop_down_list_pane_g

0xc9a9,	// (0x00056ae4) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9a9,	// (0x00056ae4) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9b6,	// (0x00056af1) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9b6,	// (0x00056af1) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9c3,	// (0x00056afe) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9c3,	// (0x00056afe) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9cf,	// (0x00056b0a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9cf,	// (0x00056b0a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9db,	// (0x00056b16) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9db,	// (0x00056b16) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9fc,	// (0x00056b37) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9fc,	// (0x00056b37) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca1d,	// (0x00056b58) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca1d,	// (0x00056b58) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3e,	// (0x00056b79) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3e,	// (0x00056b79) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5f,	// (0x00056b9a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5f,	// (0x00056b9a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x00059d11) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x00059d11) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7ee7,	// (0x00052022) title_pane_g1_ParamLimits

0x7ef4,	// (0x0005202f) title_pane_g2_ParamLimits

0xf54e,	// (0x00059689) title_pane_g_ParamLimits

0x8e9c,	// (0x00052fd7) aid_call2_pane

0x8ea4,	// (0x00052fdf) aid_call_pane

0x8eac,	// (0x00052fe7) popup_clock_analogue_window_g1

0x8eac,	// (0x00052fe7) popup_clock_analogue_window_g2

0x5575,	// (0x0004f6b0) popup_clock_analogue_window_g3

0x557e,	// (0x0004f6b9) popup_clock_analogue_window_g4

0x7ed3,	// (0x0005200e) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00059838) popup_clock_analogue_window_g

0x5586,	// (0x0004f6c1) popup_clock_analogue_window_t1

0x5594,	// (0x0004f6cf) clock_digital_number_pane_ParamLimits

0x5594,	// (0x0004f6cf) clock_digital_number_pane

0x55a0,	// (0x0004f6db) clock_digital_number_pane_cp02_ParamLimits

0x55a0,	// (0x0004f6db) clock_digital_number_pane_cp02

0x55ac,	// (0x0004f6e7) clock_digital_number_pane_cp03_ParamLimits

0x55ac,	// (0x0004f6e7) clock_digital_number_pane_cp03

0x55b8,	// (0x0004f6f3) clock_digital_number_pane_cp04_ParamLimits

0x55b8,	// (0x0004f6f3) clock_digital_number_pane_cp04

0x55c4,	// (0x0004f6ff) clock_digital_separator_pane_ParamLimits

0x55c4,	// (0x0004f6ff) clock_digital_separator_pane

0x55d0,	// (0x0004f70b) popup_clock_digital_window_t1_ParamLimits

0x55d0,	// (0x0004f70b) popup_clock_digital_window_t1

0x7ed3,	// (0x0005200e) clock_digital_number_pane_g1

0x7ed3,	// (0x0005200e) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00059843) clock_digital_number_pane_g

0x7ed3,	// (0x0005200e) clock_digital_separator_pane_g1

0x7ed3,	// (0x0005200e) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00059843) clock_digital_separator_pane_g

0x982b,	// (0x00053966) aid_fill_nsta_ParamLimits

0x997d,	// (0x00053ab8) indicator_nsta_pane_ParamLimits

0x9af6,	// (0x00053c31) popup_clock_analogue_window

0x9af6,	// (0x00053c31) popup_clock_digital_window

0x7fbd,	// (0x000520f8) grid_indicator_nsta_pane_ParamLimits

0xbccf,	// (0x00055e0a) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x00059bd7) clock_nsta_pane_t

0x5539,	// (0x0004f674) aid_size_max_handle

0x5543,	// (0x0004f67e) aid_size_min_handle

0x94bf,	// (0x000535fa) editor_scroll_pane

0xca7a,	// (0x00056bb5) ex_editor_pane

0x8999,	// (0x00052ad4) scroll_pane_cp13

0x87cb,	// (0x00052906) scroll_pane_cp14

0x8edb,	// (0x00053016) scroll_pane_cp36

0x8f07,	// (0x00053042) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f07,	// (0x00053042) list_single_graphic_hl_pane_cp2

0x772d,	// (0x00051868) list_single_graphic_hl_pane_ParamLimits

0x772d,	// (0x00051868) list_single_graphic_hl_pane

0x7cd5,	// (0x00051e10) aid_size_min_hl_cp1

0xca82,	// (0x00056bbd) list_highlight_pane_cp34_ParamLimits

0xca82,	// (0x00056bbd) list_highlight_pane_cp34

0xca93,	// (0x00056bce) list_single_graphic_hl_pane_g1_ParamLimits

0xca93,	// (0x00056bce) list_single_graphic_hl_pane_g1

0x7cde,	// (0x00051e19) list_single_graphic_hl_pane_g2_ParamLimits

0x7cde,	// (0x00051e19) list_single_graphic_hl_pane_g2

0x7cde,	// (0x00051e19) list_single_graphic_hl_pane_g3_ParamLimits

0x7cde,	// (0x00051e19) list_single_graphic_hl_pane_g3

0x9430,	// (0x0005356b) list_single_graphic_hl_pane_g4_ParamLimits

0x9430,	// (0x0005356b) list_single_graphic_hl_pane_g4

0x7cea,	// (0x00051e25) list_single_graphic_hl_pane_g5_ParamLimits

0x7cea,	// (0x00051e25) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x00059d22) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x00059d22) list_single_graphic_hl_pane_g

0x7cfe,	// (0x00051e39) list_single_graphic_hl_pane_t1_ParamLimits

0x7cfe,	// (0x00051e39) list_single_graphic_hl_pane_t1

0xcaa0,	// (0x00056bdb) aid_size_min_hl_cp2

0xcaa9,	// (0x00056be4) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa9,	// (0x00056be4) list_highlight_pane_cp34_cp2

0xca93,	// (0x00056bce) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca93,	// (0x00056bce) list_single_graphic_hl_pane_g1_cp2

0xcab6,	// (0x00056bf1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab6,	// (0x00056bf1) list_single_graphic_hl_pane_g2_cp2

0xcac2,	// (0x00056bfd) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcac2,	// (0x00056bfd) list_single_graphic_hl_pane_g3_cp2

0xc4bb,	// (0x000565f6) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc4bb,	// (0x000565f6) list_single_graphic_hl_pane_g4_cp2

0xcad0,	// (0x00056c0b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcad0,	// (0x00056c0b) list_single_graphic_hl_pane_g5_cp2

0x58f2,	// (0x0004fa2d) control_pane_g4_ParamLimits

0x58f2,	// (0x0004fa2d) control_pane_g4

0x9809,	// (0x00053944) bg_popup_sub_pane_cp10_ParamLimits

0xc2b1,	// (0x000563ec) list_choice_list_pane_ParamLimits

0xc2c0,	// (0x000563fb) scroll_pane_cp23

0x8246,	// (0x00052381) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8b4,	// (0x000569ef) list_preview_fixed_pane_ParamLimits

0xc8ca,	// (0x00056a05) list_preview_fixed_pane_cp_ParamLimits

0xc8ca,	// (0x00056a05) list_preview_fixed_pane_cp

0xc8d6,	// (0x00056a11) popup_preview_fixed_window_g1_ParamLimits

0xc8d6,	// (0x00056a11) popup_preview_fixed_window_g1

0xc8e2,	// (0x00056a1d) popup_preview_fixed_window_g2_ParamLimits

0xc8e2,	// (0x00056a1d) popup_preview_fixed_window_g2

0x0002,

0xfb6f,	// (0x00059caa) popup_preview_fixed_window_g_ParamLimits

0xfb6f,	// (0x00059caa) popup_preview_fixed_window_g

0x54ad,	// (0x0004f5e8) aid_navi_side_left_pane_ParamLimits

0x54c2,	// (0x0004f5fd) aid_navi_side_right_pane_ParamLimits

0x54da,	// (0x0004f615) navi_icon_pane_stacon_ParamLimits

0x54ee,	// (0x0004f629) navi_navi_pane_stacon_ParamLimits

0x54da,	// (0x0004f615) navi_text_pane_stacon_ParamLimits

0x49d9,	// (0x0004eb14) main_text_info_pane

0xcafa,	// (0x00056c35) listscroll_text_info_pane

0xcb02,	// (0x00056c3d) list_text_info_pane_ParamLimits

0xcb02,	// (0x00056c3d) list_text_info_pane

0xcb11,	// (0x00056c4c) scroll_pane_cp24_ParamLimits

0xcb11,	// (0x00056c4c) scroll_pane_cp24

0xcb2f,	// (0x00056c6a) list_text_info_pane_t1_ParamLimits

0xcb2f,	// (0x00056c6a) list_text_info_pane_t1

0x5a70,	// (0x0004fbab) popup_fast_swap2_window_ParamLimits

0x5a70,	// (0x0004fbab) popup_fast_swap2_window

0xcb60,	// (0x00056c9b) aid_size_cell_fast2

0x7ec9,	// (0x00052004) bg_popup_window_pane_cp17

0xa179,	// (0x000542b4) heading_pane_cp2

0x8495,	// (0x000525d0) listscroll_fast2_pane

0xcb6a,	// (0x00056ca5) grid_fast2_pane

0xcb74,	// (0x00056caf) listscroll_fast2_pane_g1

0xcb7c,	// (0x00056cb7) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x00059d2d) listscroll_fast2_pane_g

0x8999,	// (0x00052ad4) scroll_pane_cp26

0xcb86,	// (0x00056cc1) cell_fast2_pane_ParamLimits

0xcb86,	// (0x00056cc1) cell_fast2_pane

0xcb9b,	// (0x00056cd6) cell_fast2_pane_g1

0xcba4,	// (0x00056cdf) cell_fast2_pane_g2

0xcbad,	// (0x00056ce8) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x00059d32) cell_fast2_pane_g

0x8588,	// (0x000526c3) grid_highlight_pane_cp9

0x5a2e,	// (0x0004fb69) main_eswt_pane_ParamLimits

0x5a2e,	// (0x0004fb69) main_eswt_pane

0xcb26,	// (0x00056c61) list_single_text_info_pane

0xcbb5,	// (0x00056cf0) eswt_ctrl_button_pane

0xcbb5,	// (0x00056cf0) eswt_ctrl_canvas_pane

0xcbbd,	// (0x00056cf8) eswt_ctrl_combo_pane

0xcbb5,	// (0x00056cf0) eswt_ctrl_default_pane

0xcbb5,	// (0x00056cf0) eswt_ctrl_label_pane

0xcbc5,	// (0x00056d00) eswt_ctrl_wait_pane

0xcbcd,	// (0x00056d08) eswt_shell_pane

0x7ec9,	// (0x00052004) listscroll_eswt_app_pane

0xcbed,	// (0x00056d28) popup_eswt_tasktip_window_ParamLimits

0xcbed,	// (0x00056d28) popup_eswt_tasktip_window

0x9d93,	// (0x00053ece) bg_popup_window_pane_cp18

0xcbfe,	// (0x00056d39) eswt_control_pane_g1_ParamLimits

0xcbfe,	// (0x00056d39) eswt_control_pane_g1

0xcc0b,	// (0x00056d46) eswt_control_pane_g2_ParamLimits

0xcc0b,	// (0x00056d46) eswt_control_pane_g2

0xcc18,	// (0x00056d53) eswt_control_pane_g3_ParamLimits

0xcc18,	// (0x00056d53) eswt_control_pane_g3

0xcc25,	// (0x00056d60) eswt_control_pane_g4_ParamLimits

0xcc25,	// (0x00056d60) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x00059d39) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x00059d39) eswt_control_pane_g

0x8838,	// (0x00052973) bg_button_pane_ParamLimits

0x8838,	// (0x00052973) bg_button_pane

0x859d,	// (0x000526d8) common_borders_pane_copy2_ParamLimits

0x859d,	// (0x000526d8) common_borders_pane_copy2

0xcc32,	// (0x00056d6d) control_button_pane_g1_ParamLimits

0xcc32,	// (0x00056d6d) control_button_pane_g1

0xcc3e,	// (0x00056d79) control_button_pane_g2_ParamLimits

0xcc3e,	// (0x00056d79) control_button_pane_g2

0xcc4a,	// (0x00056d85) control_button_pane_g3_ParamLimits

0xcc4a,	// (0x00056d85) control_button_pane_g3

0x0002,

0xfc07,	// (0x00059d42) control_button_pane_g_ParamLimits

0xfc07,	// (0x00059d42) control_button_pane_g

0xcc5e,	// (0x00056d99) control_button_pane_t1

0xcc6c,	// (0x00056da7) control_button_pane_t2

0x0001,

0xfc0e,	// (0x00059d49) control_button_pane_t

0x9d1f,	// (0x00053e5a) bg_button_pane_g1

0x9d2f,	// (0x00053e6a) bg_button_pane_g2

0x9d27,	// (0x00053e62) bg_button_pane_g3

0x9d3f,	// (0x00053e7a) bg_button_pane_g4

0x9d37,	// (0x00053e72) bg_button_pane_g5

0x9d47,	// (0x00053e82) bg_button_pane_g6

0x9d4f,	// (0x00053e8a) bg_button_pane_g7

0x9d5f,	// (0x00053e9a) bg_button_pane_g8

0x9d57,	// (0x00053e92) bg_button_pane_g9

0x0008,

0xf86b,	// (0x000599a6) bg_button_pane_g

0xc26c,	// (0x000563a7) common_borders_pane_ParamLimits

0xc26c,	// (0x000563a7) common_borders_pane

0xcbfe,	// (0x00056d39) eswt_control_pane_g1_copy1_ParamLimits

0xcbfe,	// (0x00056d39) eswt_control_pane_g1_copy1

0xcc0b,	// (0x00056d46) eswt_control_pane_g2_copy1_ParamLimits

0xcc0b,	// (0x00056d46) eswt_control_pane_g2_copy1

0xcc18,	// (0x00056d53) eswt_control_pane_g3_copy1_ParamLimits

0xcc18,	// (0x00056d53) eswt_control_pane_g3_copy1

0xcc25,	// (0x00056d60) eswt_control_pane_g4_copy1_ParamLimits

0xcc25,	// (0x00056d60) eswt_control_pane_g4_copy1

0xc2a7,	// (0x000563e2) bg_eswt_ctrl_canvas_pane_g1

0xc26c,	// (0x000563a7) common_borders_pane_cp2_ParamLimits

0xc26c,	// (0x000563a7) common_borders_pane_cp2

0xc26c,	// (0x000563a7) common_borders_pane_cp3_ParamLimits

0xc26c,	// (0x000563a7) common_borders_pane_cp3

0xcc7a,	// (0x00056db5) separator_horizontal_pane

0xcc82,	// (0x00056dbd) separator_vertical_pane

0xcbfe,	// (0x00056d39) eswt_control_pane_g1_copy2_ParamLimits

0xcbfe,	// (0x00056d39) eswt_control_pane_g1_copy2

0xcc0b,	// (0x00056d46) eswt_control_pane_g2_copy2_ParamLimits

0xcc0b,	// (0x00056d46) eswt_control_pane_g2_copy2

0xcc18,	// (0x00056d53) eswt_control_pane_g3_copy2_ParamLimits

0xcc18,	// (0x00056d53) eswt_control_pane_g3_copy2

0xcc25,	// (0x00056d60) eswt_control_pane_g4_copy2_ParamLimits

0xcc25,	// (0x00056d60) eswt_control_pane_g4_copy2

0x7ec9,	// (0x00052004) common_borders_pane_cp4

0xcc8b,	// (0x00056dc6) separator_horizontal_pane_g1

0xcc94,	// (0x00056dcf) separator_horizontal_pane_g2

0xcc9d,	// (0x00056dd8) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x00059d4e) separator_horizontal_pane_g

0xcbfe,	// (0x00056d39) eswt_control_pane_g1_copy3_ParamLimits

0xcbfe,	// (0x00056d39) eswt_control_pane_g1_copy3

0xcc0b,	// (0x00056d46) eswt_control_pane_g2_copy3_ParamLimits

0xcc0b,	// (0x00056d46) eswt_control_pane_g2_copy3

0xcc18,	// (0x00056d53) eswt_control_pane_g3_copy3_ParamLimits

0xcc18,	// (0x00056d53) eswt_control_pane_g3_copy3

0xcc25,	// (0x00056d60) eswt_control_pane_g4_copy3_ParamLimits

0xcc25,	// (0x00056d60) eswt_control_pane_g4_copy3

0x7ec9,	// (0x00052004) common_borders_pane_cp5

0xcca6,	// (0x00056de1) separator_vertical_pane_g1

0xccaf,	// (0x00056dea) separator_vertical_pane_g2

0xccb8,	// (0x00056df3) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x00059d55) separator_vertical_pane_g

0xcbfe,	// (0x00056d39) eswt_control_pane_g1_copy4_ParamLimits

0xcbfe,	// (0x00056d39) eswt_control_pane_g1_copy4

0xcc0b,	// (0x00056d46) eswt_control_pane_g2_copy4_ParamLimits

0xcc0b,	// (0x00056d46) eswt_control_pane_g2_copy4

0xcc18,	// (0x00056d53) eswt_control_pane_g3_copy4_ParamLimits

0xcc18,	// (0x00056d53) eswt_control_pane_g3_copy4

0xcc25,	// (0x00056d60) eswt_control_pane_g4_copy4_ParamLimits

0xcc25,	// (0x00056d60) eswt_control_pane_g4_copy4

0xccc1,	// (0x00056dfc) eswt_ctrl_combo_button_pane

0xccc9,	// (0x00056e04) eswt_ctrl_input_pane

0xccd1,	// (0x00056e0c) popup_choice_list_window_cp70

0xccd9,	// (0x00056e14) eswt_ctrl_input_pane_t1

0x7ec9,	// (0x00052004) input_focus_pane_cp70

0xc26c,	// (0x000563a7) bg_button_pane_cp70_ParamLimits

0xc26c,	// (0x000563a7) bg_button_pane_cp70

0xcce7,	// (0x00056e22) eswt_ctrl_combo_button_pane_g1

0xccef,	// (0x00056e2a) wait_bar_pane_cp70

0x9d93,	// (0x00053ece) bg_popup_window_pane_cp70_ParamLimits

0x9d93,	// (0x00053ece) bg_popup_window_pane_cp70

0xccf7,	// (0x00056e32) popup_eswt_tasktip_window_t1

0xcd0d,	// (0x00056e48) wait_bar_pane_cp71_ParamLimits

0xcd0d,	// (0x00056e48) wait_bar_pane_cp71

0xcd19,	// (0x00056e54) grid_eswt_app_pane

0x8cb5,	// (0x00052df0) scroll_pane_cp70

0xcd22,	// (0x00056e5d) cell_eswt_app_pane_ParamLimits

0xcd22,	// (0x00056e5d) cell_eswt_app_pane

0xcd52,	// (0x00056e8d) cell_eswt_app_pane_g1_ParamLimits

0xcd52,	// (0x00056e8d) cell_eswt_app_pane_g1

0xcd81,	// (0x00056ebc) cell_eswt_app_pane_g2_ParamLimits

0xcd81,	// (0x00056ebc) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x00059d5c) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x00059d5c) cell_eswt_app_pane_g

0xcdaa,	// (0x00056ee5) cell_eswt_app_pane_t1_ParamLimits

0xcdaa,	// (0x00056ee5) cell_eswt_app_pane_t1

0xcddc,	// (0x00056f17) grid_highlight_pane_cp70_ParamLimits

0xcddc,	// (0x00056f17) grid_highlight_pane_cp70

0x9394,	// (0x000534cf) set_content_pane_g1

0x976a,	// (0x000538a5) status_small_volume_pane

0x6857,	// (0x00050992) status_small_volume_pane_g1

0x685f,	// (0x0005099a) volume_small2_pane

0x6868,	// (0x000509a3) volume_small2_pane_g1

0x6871,	// (0x000509ac) volume_small2_pane_g2

0x687a,	// (0x000509b5) volume_small2_pane_g3

0x6883,	// (0x000509be) volume_small2_pane_g4

0x688c,	// (0x000509c7) volume_small2_pane_g5

0x6895,	// (0x000509d0) volume_small2_pane_g6

0x689e,	// (0x000509d9) volume_small2_pane_g7

0x68a7,	// (0x000509e2) volume_small2_pane_g8

0x68b0,	// (0x000509eb) volume_small2_pane_g9

0x68b9,	// (0x000509f4) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x00059d61) volume_small2_pane_g

0xc679,	// (0x000567b4) fep_vkb_top_text_pane_g1_ParamLimits

0xc694,	// (0x000567cf) fep_vkb_top_text_pane_t1_ParamLimits

0xc8ee,	// (0x00056a29) popup_preview_fixed_window_g3_ParamLimits

0xc8ee,	// (0x00056a29) popup_preview_fixed_window_g3

0x5f1f,	// (0x0005005a) popup_toolbar_trans_pane

0xb0dd,	// (0x00055218) aid_height_set_list_ParamLimits

0xb0ee,	// (0x00055229) aid_size_parent_ParamLimits

0x9809,	// (0x00053944) list_highlight_pane_cp2_ParamLimits

0x9394,	// (0x000534cf) set_content_pane_g1_ParamLimits

0x7748,	// (0x00051883) list_single_image_pane_ParamLimits

0x7748,	// (0x00051883) list_single_image_pane

0xcde8,	// (0x00056f23) aid_size_cell_image_ParamLimits

0xcde8,	// (0x00056f23) aid_size_cell_image

0xcdf5,	// (0x00056f30) grid_single_image_pane_ParamLimits

0xcdf5,	// (0x00056f30) grid_single_image_pane

0x98e0,	// (0x00053a1b) list_single_image_pane_g1_ParamLimits

0x98e0,	// (0x00053a1b) list_single_image_pane_g1

0xce01,	// (0x00056f3c) list_single_image_pane_g2_ParamLimits

0xce01,	// (0x00056f3c) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x00059d76) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x00059d76) list_single_image_pane_g

0xce15,	// (0x00056f50) list_single_image_pane_t1_ParamLimits

0xce15,	// (0x00056f50) list_single_image_pane_t1

0xce2b,	// (0x00056f66) cell_image_list_pane_ParamLimits

0xce2b,	// (0x00056f66) cell_image_list_pane

0xce3f,	// (0x00056f7a) cell_image_list_pane_g1

0xce48,	// (0x00056f83) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x00059d7b) cell_image_list_pane_g

0xce51,	// (0x00056f8c) aid_size_cell_tb_trans_pane

0x8838,	// (0x00052973) bg_tb_trans_pane

0xce63,	// (0x00056f9e) grid_tb_trans_pane

0x9d1f,	// (0x00053e5a) bg_tb_trans_pane_g1

0x9d2f,	// (0x00053e6a) bg_tb_trans_pane_g2

0x9d27,	// (0x00053e62) bg_tb_trans_pane_g3

0x9d3f,	// (0x00053e7a) bg_tb_trans_pane_g4

0x9d37,	// (0x00053e72) bg_tb_trans_pane_g5

0x9d5f,	// (0x00053e9a) bg_tb_trans_pane_g6

0x9d57,	// (0x00053e92) bg_tb_trans_pane_g7

0x9d47,	// (0x00053e82) bg_tb_trans_pane_g8

0x9d4f,	// (0x00053e8a) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x00059d80) bg_tb_trans_pane_g

0xce77,	// (0x00056fb2) cell_toolbar_trans_pane_ParamLimits

0xce77,	// (0x00056fb2) cell_toolbar_trans_pane

0xc2a7,	// (0x000563e2) cell_toolbar_trans_pane_g1

0xbe8b,	// (0x00055fc6) list_form2_midp_pane_t1

0xbe99,	// (0x00055fd4) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x00059c1d) list_form2_midp_pane_t

0xbea7,	// (0x00055fe2) scroll_pane_cp51_ParamLimits

0xc063,	// (0x0005619e) form2_midp_wait_pane_g1

0xc06c,	// (0x000561a7) form2_midp_wait_pane_g2

0xc075,	// (0x000561b0) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x00059c32) form2_midp_wait_pane_g

0x7fbd,	// (0x000520f8) list_highlight_pane_cp21_ParamLimits

0xc0c1,	// (0x000561fc) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0d0,	// (0x0005620b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x76d1,	// (0x0005180c) list_single_2graphic_im_pane_ParamLimits

0x76d1,	// (0x0005180c) list_single_2graphic_im_pane

0xce9d,	// (0x00056fd8) list_single_2graphic_im_pane_g1_ParamLimits

0xce9d,	// (0x00056fd8) list_single_2graphic_im_pane_g1

0xceae,	// (0x00056fe9) list_single_2graphic_im_pane_g2_ParamLimits

0xceae,	// (0x00056fe9) list_single_2graphic_im_pane_g2

0xceba,	// (0x00056ff5) list_single_2graphic_im_pane_g3_ParamLimits

0xceba,	// (0x00056ff5) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x00059d93) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x00059d93) list_single_2graphic_im_pane_g

0xceda,	// (0x00057015) list_single_2graphic_im_pane_t1_ParamLimits

0xceda,	// (0x00057015) list_single_2graphic_im_pane_t1

0xc8fa,	// (0x00056a35) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8fa,	// (0x00056a35) list_single_graphic_2heading_pane_fp

0x7b47,	// (0x00051c82) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7b47,	// (0x00051c82) list_single_graphic_2heading_pane_fp_g1

0xc90f,	// (0x00056a4a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc90f,	// (0x00056a4a) list_single_graphic_2heading_pane_fp_g2

0x87d3,	// (0x0005290e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x87d3,	// (0x0005290e) list_single_graphic_2heading_pane_fp_g3

0x8846,	// (0x00052981) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8846,	// (0x00052981) list_single_graphic_2heading_pane_fp_g4

0xc91b,	// (0x00056a56) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc91b,	// (0x00056a56) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x00059cba) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x00059cba) list_single_graphic_2heading_pane_fp_g

0x7d14,	// (0x00051e4f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7d14,	// (0x00051e4f) list_single_graphic_2heading_pane_fp_t1

0x7b7f,	// (0x00051cba) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7b7f,	// (0x00051cba) list_single_graphic_2heading_pane_fp_t2

0x7d2a,	// (0x00051e65) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7d2a,	// (0x00051e65) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x00059d9c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x00059d9c) list_single_graphic_2heading_pane_fp_t

0xc333,	// (0x0005646e) fep_hwr_write_pane_g5_ParamLimits

0xc333,	// (0x0005646e) fep_hwr_write_pane_g5

0xc33f,	// (0x0005647a) fep_hwr_write_pane_g6_ParamLimits

0xc33f,	// (0x0005647a) fep_hwr_write_pane_g6

0xcbcd,	// (0x00056d08) eswt_shell_pane_ParamLimits

0x9d93,	// (0x00053ece) bg_popup_window_pane_cp18_ParamLimits

0xb036,	// (0x00055171) heading_pane_cp70

0xccf7,	// (0x00056e32) popup_eswt_tasktip_window_t1_ParamLimits

0x9880,	// (0x000539bb) aid_touch_tab_arrow_left

0x988f,	// (0x000539ca) aid_touch_tab_arrow_right

0x7f05,	// (0x00052040) title_pane_g3_ParamLimits

0x7f05,	// (0x00052040) title_pane_g3

0x87f7,	// (0x00052932) set_value_pane_g1

0x5f1f,	// (0x0005005a) popup_toolbar_trans_pane_ParamLimits

0xce51,	// (0x00056f8c) aid_size_cell_tb_trans_pane_ParamLimits

0x8838,	// (0x00052973) bg_tb_trans_pane_ParamLimits

0xce63,	// (0x00056f9e) grid_tb_trans_pane_ParamLimits

0x8246,	// (0x00052381) cont_note_pane_ParamLimits

0x8246,	// (0x00052381) cont_note_pane

0x859d,	// (0x000526d8) cont_snote2_single_text_pane_ParamLimits

0x859d,	// (0x000526d8) cont_snote2_single_text_pane

0x859d,	// (0x000526d8) cont_snote2_single_graphic_pane_ParamLimits

0x859d,	// (0x000526d8) cont_snote2_single_graphic_pane

0xa394,	// (0x000544cf) cont_note_wait_pane_ParamLimits

0xa394,	// (0x000544cf) cont_note_wait_pane

0xa394,	// (0x000544cf) cont_note_image_pane_ParamLimits

0xa394,	// (0x000544cf) cont_note_image_pane

0xcf0b,	// (0x00057046) popup_note2_window_g1_ParamLimits

0xcf0b,	// (0x00057046) popup_note2_window_g1

0xcf3c,	// (0x00057077) popup_note2_window_t1_ParamLimits

0xcf3c,	// (0x00057077) popup_note2_window_t1

0xcf81,	// (0x000570bc) popup_note2_window_t2_ParamLimits

0xcf81,	// (0x000570bc) popup_note2_window_t2

0xcfc6,	// (0x00057101) popup_note2_window_t3_ParamLimits

0xcfc6,	// (0x00057101) popup_note2_window_t3

0xd00b,	// (0x00057146) popup_note2_window_t4_ParamLimits

0xd00b,	// (0x00057146) popup_note2_window_t4

0x82ca,	// (0x00052405) popup_note2_window_t5_ParamLimits

0x82ca,	// (0x00052405) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x00059da8) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x00059da8) popup_note2_window_t

0xd03a,	// (0x00057175) popup_note2_image_window_g1_ParamLimits

0xd03a,	// (0x00057175) popup_note2_image_window_g1

0xd046,	// (0x00057181) popup_note2_image_window_g2_ParamLimits

0xd046,	// (0x00057181) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x00059db3) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x00059db3) popup_note2_image_window_g

0xd058,	// (0x00057193) popup_note2_image_window_t1_ParamLimits

0xd058,	// (0x00057193) popup_note2_image_window_t1

0xd070,	// (0x000571ab) popup_note2_image_window_t2_ParamLimits

0xd070,	// (0x000571ab) popup_note2_image_window_t2

0xd088,	// (0x000571c3) popup_note2_image_window_t3_ParamLimits

0xd088,	// (0x000571c3) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x00059db8) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x00059db8) popup_note2_image_window_t

0xa3a2,	// (0x000544dd) popup_note2_wait_window_g1_ParamLimits

0xa3a2,	// (0x000544dd) popup_note2_wait_window_g1

0xd0a4,	// (0x000571df) popup_note2_wait_window_g2_ParamLimits

0xd0a4,	// (0x000571df) popup_note2_wait_window_g2

0xa3ba,	// (0x000544f5) popup_note2_wait_window_g3_ParamLimits

0xa3ba,	// (0x000544f5) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x00059dbf) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x00059dbf) popup_note2_wait_window_g

0xd0b0,	// (0x000571eb) popup_note2_wait_window_t1_ParamLimits

0xd0b0,	// (0x000571eb) popup_note2_wait_window_t1

0xd0ce,	// (0x00057209) popup_note2_wait_window_t2_ParamLimits

0xd0ce,	// (0x00057209) popup_note2_wait_window_t2

0xd0ec,	// (0x00057227) popup_note2_wait_window_t3_ParamLimits

0xd0ec,	// (0x00057227) popup_note2_wait_window_t3

0xd0fe,	// (0x00057239) popup_note2_wait_window_t4_ParamLimits

0xd0fe,	// (0x00057239) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x00059dc6) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x00059dc6) popup_note2_wait_window_t

0xd110,	// (0x0005724b) wait_bar2_pane_ParamLimits

0xd110,	// (0x0005724b) wait_bar2_pane

0xd128,	// (0x00057263) popup_snote2_single_text_window_g1_ParamLimits

0xd128,	// (0x00057263) popup_snote2_single_text_window_g1

0xd150,	// (0x0005728b) popup_snote2_single_text_window_t1_ParamLimits

0xd150,	// (0x0005728b) popup_snote2_single_text_window_t1

0xd19c,	// (0x000572d7) popup_snote2_single_text_window_t2_ParamLimits

0xd19c,	// (0x000572d7) popup_snote2_single_text_window_t2

0xd1e8,	// (0x00057323) popup_snote2_single_text_window_t3_ParamLimits

0xd1e8,	// (0x00057323) popup_snote2_single_text_window_t3

0xd229,	// (0x00057364) popup_snote2_single_text_window_t4_ParamLimits

0xd229,	// (0x00057364) popup_snote2_single_text_window_t4

0xd25f,	// (0x0005739a) popup_snote2_single_text_window_t5_ParamLimits

0xd25f,	// (0x0005739a) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x00059dcf) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x00059dcf) popup_snote2_single_text_window_t

0xd28a,	// (0x000573c5) popup_snote2_single_graphic_window_g1_ParamLimits

0xd28a,	// (0x000573c5) popup_snote2_single_graphic_window_g1

0xd2b2,	// (0x000573ed) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2b2,	// (0x000573ed) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x00059dda) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x00059dda) popup_snote2_single_graphic_window_g

0xd2da,	// (0x00057415) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2da,	// (0x00057415) popup_snote2_single_graphic_window_t1

0xd326,	// (0x00057461) popup_snote2_single_graphic_window_t2_ParamLimits

0xd326,	// (0x00057461) popup_snote2_single_graphic_window_t2

0xd1e8,	// (0x00057323) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e8,	// (0x00057323) popup_snote2_single_graphic_window_t3

0xd229,	// (0x00057364) popup_snote2_single_graphic_window_t4_ParamLimits

0xd229,	// (0x00057364) popup_snote2_single_graphic_window_t4

0xd25f,	// (0x0005739a) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25f,	// (0x0005739a) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x00059ddf) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x00059ddf) popup_snote2_single_graphic_window_t

0xbd68,	// (0x00055ea3) clock_nsta_pane_cp2_t1

0xbd68,	// (0x00055ea3) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x00059bf3) clock_nsta_pane_cp2_t

0x522b,	// (0x0004f366) form_field_data_wide_pane_g1_ParamLimits

0x87d3,	// (0x0005290e) form_field_data_wide_pane_g2_ParamLimits

0x87d3,	// (0x0005290e) form_field_data_wide_pane_g2

0x8846,	// (0x00052981) form_field_data_wide_pane_g3_ParamLimits

0x8846,	// (0x00052981) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x000597bb) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x000597bb) form_field_data_wide_pane_g

0xbc6b,	// (0x00055da6) grid_touch_3_pane_ParamLimits

0xbc6b,	// (0x00055da6) grid_touch_3_pane

0xd372,	// (0x000574ad) cell_touch_3_pane_ParamLimits

0xd372,	// (0x000574ad) cell_touch_3_pane

0xc2a7,	// (0x000563e2) cell_touch_3_pane_g1

0xc2a7,	// (0x000563e2) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x00059c78) cell_touch_3_pane_g

0x82fc,	// (0x00052437) cont_query_data_pane

0x8304,	// (0x0005243f) cont_query_data_pane_cp1

0xd3a0,	// (0x000574db) button_value_adjust_pane_cp7

0xd3a8,	// (0x000574e3) query_popup_pane_cp3

0x8f9c,	// (0x000530d7) bg_popup_sub_pane_cp22_ParamLimits

0x55ef,	// (0x0004f72a) navi_navi_volume_pane_cp2

0x560a,	// (0x0004f745) popup_side_volume_key_window_g2

0x5619,	// (0x0004f754) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00059851) popup_side_volume_key_window_g

0x5636,	// (0x0004f771) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00059858) popup_side_volume_key_window_t

0x9253,	// (0x0005338e) popup_side_volume_key_window_ParamLimits

0x4e73,	// (0x0004efae) list_double_graphic_pane_g4_ParamLimits

0x4e73,	// (0x0004efae) list_double_graphic_pane_g4

0x770e,	// (0x00051849) list_single_2heading_msg_pane_ParamLimits

0x770e,	// (0x00051849) list_single_2heading_msg_pane

0x7d4a,	// (0x00051e85) list_single_2heading_msg_pane_g1_ParamLimits

0x7d4a,	// (0x00051e85) list_single_2heading_msg_pane_g1

0x93f8,	// (0x00053533) list_single_2heading_msg_pane_g2_ParamLimits

0x93f8,	// (0x00053533) list_single_2heading_msg_pane_g2

0x788d,	// (0x000519c8) list_single_2heading_msg_pane_g3_ParamLimits

0x788d,	// (0x000519c8) list_single_2heading_msg_pane_g3

0x7d56,	// (0x00051e91) list_single_2heading_msg_pane_g4_ParamLimits

0x7d56,	// (0x00051e91) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x00059dea) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x00059dea) list_single_2heading_msg_pane_g

0x7d6e,	// (0x00051ea9) list_single_2heading_msg_pane_t1_ParamLimits

0x7d6e,	// (0x00051ea9) list_single_2heading_msg_pane_t1

0x7d96,	// (0x00051ed1) list_single_2heading_msg_pane_t2_ParamLimits

0x7d96,	// (0x00051ed1) list_single_2heading_msg_pane_t2

0x7dca,	// (0x00051f05) list_single_2heading_msg_pane_t3_ParamLimits

0x7dca,	// (0x00051f05) list_single_2heading_msg_pane_t3

0x7e03,	// (0x00051f3e) list_single_2heading_msg_pane_t4_ParamLimits

0x7e03,	// (0x00051f3e) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x00059df3) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x00059df3) list_single_2heading_msg_pane_t

0x7f11,	// (0x0005204c) title_pane_g4_ParamLimits

0x7f11,	// (0x0005204c) title_pane_g4

0x53fe,	// (0x0004f539) title_pane_stacon_g3_ParamLimits

0x53fe,	// (0x0004f539) title_pane_stacon_g3

0xcece,	// (0x00057009) list_single_2graphic_im_pane_g4_ParamLimits

0xcece,	// (0x00057009) list_single_2graphic_im_pane_g4

0xadf3,	// (0x00054f2e) popup_side_volume_key_window_cp

0xb5b9,	// (0x000556f4) main_idle_act2_pane_t1

0x6033,	// (0x0005016e) toolbar_button_pane_g10

0x8795,	// (0x000528d0) popup_toolbar_window_cp1

0xbd59,	// (0x00055e94) clock_nsta_pane_cp_t1

0xbd59,	// (0x00055e94) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x00059bee) clock_nsta_pane_cp_t

0x55ef,	// (0x0004f72a) navi_navi_volume_pane_cp2_ParamLimits

0x55fe,	// (0x0004f739) popup_side_volume_key_window_g1_ParamLimits

0x560a,	// (0x0004f745) popup_side_volume_key_window_g2_ParamLimits

0x5619,	// (0x0004f754) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00059851) popup_side_volume_key_window_g_ParamLimits

0x64c3,	// (0x000505fe) fep_hwr_aid_pane

0x656a,	// (0x000506a5) bg_fep_hwr_top_pane_g4_ParamLimits

0xc303,	// (0x0005643e) fep_hwr_top_pane_g1_ParamLimits

0xc315,	// (0x00056450) fep_hwr_top_pane_g2_ParamLimits

0x658a,	// (0x000506c5) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x00059c43) fep_hwr_top_pane_g_ParamLimits

0x659f,	// (0x000506da) fep_hwr_top_text_pane_ParamLimits

0xabb6,	// (0x00054cf1) aid_touch_tab_arrow_arrow_2

0xabbf,	// (0x00054cfa) aid_touch_tab_arrow_left_2

0x64d7,	// (0x00050612) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x650e,	// (0x00050649) fep_hwr_prediction_pane

0xc475,	// (0x000565b0) fep_vkb_prediction_pane

0xc585,	// (0x000566c0) fep_vkb_side_pane_g3_ParamLimits

0xc585,	// (0x000566c0) fep_vkb_side_pane_g3

0x671a,	// (0x00050855) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6786,	// (0x000508c1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6793,	// (0x000508ce) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb7,	// (0x00059cf2) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x68c2,	// (0x000509fd) fep_hwr_prediction_pane_g1

0x68cc,	// (0x00050a07) fep_hwr_prediction_pane_g2

0x68d4,	// (0x00050a0f) fep_hwr_prediction_pane_g3

0x68dc,	// (0x00050a17) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x00059dfc) fep_hwr_prediction_pane_g

0xd3cd,	// (0x00057508) fep_vkb_prediction_pane_g1

0xd3d7,	// (0x00057512) fep_vkb_prediction_pane_g2

0xd3df,	// (0x0005751a) fep_vkb_prediction_pane_g3

0xd3e7,	// (0x00057522) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x00059e05) fep_vkb_prediction_pane_g

0x6343,	// (0x0005047e) slider_set_pane_g3

0x6357,	// (0x00050492) slider_set_pane_g4

0x636f,	// (0x000504aa) slider_set_pane_g5

0x6343,	// (0x0005047e) slider_set_pane_g6

0x6385,	// (0x000504c0) slider_set_pane_g7

0xb253,	// (0x0005538e) slider_form_pane_g3

0xb25c,	// (0x00055397) slider_form_pane_g4

0xb264,	// (0x0005539f) slider_form_pane_g5

0xb253,	// (0x0005538e) slider_form_pane_g6

0xb26c,	// (0x000553a7) slider_form_pane_g7

0xb863,	// (0x0005599e) slider_set_pane_vc_g3

0xb86c,	// (0x000559a7) slider_set_pane_vc_g4

0xb875,	// (0x000559b0) slider_set_pane_vc_g5

0xb863,	// (0x0005599e) slider_set_pane_vc_g6

0xb87e,	// (0x000559b9) slider_set_pane_vc_g7

0xba3e,	// (0x00055b79) slider_form_pane_vc_g1

0xba47,	// (0x00055b82) slider_form_pane_vc_g2

0xba50,	// (0x00055b8b) slider_form_pane_vc_g3

0xba3e,	// (0x00055b79) slider_form_pane_vc_g4

0xba59,	// (0x00055b94) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x00059bc0) slider_form_pane_vc_g

0x49d9,	// (0x0004eb14) main_idle_act3_pane

0xd3ef,	// (0x0005752a) ai3_links_pane

0xd3f8,	// (0x00057533) popup_ai3_data_window_ParamLimits

0xd3f8,	// (0x00057533) popup_ai3_data_window

0x7ec9,	// (0x00052004) grid_ai3_links_pane

0xd412,	// (0x0005754d) cell_ai3_links_pane_ParamLimits

0xd412,	// (0x0005754d) cell_ai3_links_pane

0xd42a,	// (0x00057565) bg_popup_sub_pane_cp11

0xd437,	// (0x00057572) cell_ai3_links_pane_g1

0x7ec9,	// (0x00052004) bg_popup_sub_pane_cp12

0xd45c,	// (0x00057597) heading_ai3_data_pane

0xd464,	// (0x0005759f) list_ai3_gene_pane

0xd470,	// (0x000575ab) popup_ai3_data_window_g1

0xd478,	// (0x000575b3) heading_ai3_data_pane_g1

0xd480,	// (0x000575bb) heading_ai3_data_pane_t1

0xd48e,	// (0x000575c9) list_double_ai3_gene_pane_ParamLimits

0xd48e,	// (0x000575c9) list_double_ai3_gene_pane

0xd49b,	// (0x000575d6) list_single_ai3_gene_pane_ParamLimits

0xd49b,	// (0x000575d6) list_single_ai3_gene_pane

0xc26c,	// (0x000563a7) list_highlight_pane_cp7_ParamLimits

0xc26c,	// (0x000563a7) list_highlight_pane_cp7

0xd4a8,	// (0x000575e3) list_single_a13_gene_pane_t1_ParamLimits

0xd4a8,	// (0x000575e3) list_single_a13_gene_pane_t1

0xd4bf,	// (0x000575fa) list_single_ai3_gene_pane_g1

0xd4c8,	// (0x00057603) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x00059e0e) list_single_ai3_gene_pane_g

0xd4d0,	// (0x0005760b) list_double_ai3_gene_pane_g1_ParamLimits

0xd4d0,	// (0x0005760b) list_double_ai3_gene_pane_g1

0xd4dc,	// (0x00057617) list_double_ai3_gene_pane_t1_ParamLimits

0xd4dc,	// (0x00057617) list_double_ai3_gene_pane_t1

0xd4f8,	// (0x00057633) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f8,	// (0x00057633) list_double_ai3_gene_pane_t2

0xd50e,	// (0x00057649) list_double_ai3_gene_pane_t3_ParamLimits

0xd50e,	// (0x00057649) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x00059e13) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x00059e13) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7d40,	// (0x00051e7b) aid_size_min_col_2

0xd3b9,	// (0x000574f4) aid_size_min_msg_ParamLimits

0xd3b9,	// (0x000574f4) aid_size_min_msg

0xc685,	// (0x000567c0) fep_vkb_top_text_pane_g2_ParamLimits

0xc685,	// (0x000567c0) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x00059c73) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x00059c73) fep_vkb_top_text_pane_g

0x49d9,	// (0x0004eb14) main_hc_apps_shell_pane

0xd52b,	// (0x00057666) grid_hc_apps_pane_ParamLimits

0xd52b,	// (0x00057666) grid_hc_apps_pane

0xd53a,	// (0x00057675) list_hc_apps_pane

0xd542,	// (0x0005767d) scroll_pane_cp37_ParamLimits

0xd542,	// (0x0005767d) scroll_pane_cp37

0xd54e,	// (0x00057689) cell_hc_apps_pane_ParamLimits

0xd54e,	// (0x00057689) cell_hc_apps_pane

0xd5fc,	// (0x00057737) cell_hc_apps_pane_g1_ParamLimits

0xd5fc,	// (0x00057737) cell_hc_apps_pane_g1

0xd62d,	// (0x00057768) cell_hc_apps_pane_g2_ParamLimits

0xd62d,	// (0x00057768) cell_hc_apps_pane_g2

0xd649,	// (0x00057784) cell_hc_apps_pane_g3_ParamLimits

0xd649,	// (0x00057784) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x00059e1a) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x00059e1a) cell_hc_apps_pane_g

0xd66b,	// (0x000577a6) cell_hc_apps_pane_t1_ParamLimits

0xd66b,	// (0x000577a6) cell_hc_apps_pane_t1

0x8246,	// (0x00052381) grid_highlight_pane_cp10_ParamLimits

0x8246,	// (0x00052381) grid_highlight_pane_cp10

0xd6ab,	// (0x000577e6) list_single_hc_apps_pane_ParamLimits

0xd6ab,	// (0x000577e6) list_single_hc_apps_pane

0xd707,	// (0x00057842) list_single_hc_apps_pane_g1

0x7e28,	// (0x00051f63) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x00059e21) list_single_hc_apps_pane_g

0x7e41,	// (0x00051f7c) list_single_hc_apps_pane_g2_copy1

0x7e5d,	// (0x00051f98) list_single_hc_apps_pane_t1

0x7fbd,	// (0x000520f8) bg_set_opt_pane_cp_ParamLimits

0x4c3a,	// (0x0004ed75) setting_slider_pane_t1_ParamLimits

0x4c53,	// (0x0004ed8e) setting_slider_pane_t2_ParamLimits

0x4c6d,	// (0x0004eda8) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00059699) setting_slider_pane_t_ParamLimits

0x4c85,	// (0x0004edc0) slider_set_pane_ParamLimits

0x5906,	// (0x0004fa41) control_pane_g5_ParamLimits

0x5906,	// (0x0004fa41) control_pane_g5

0xb0a2,	// (0x000551dd) slider_set_pane_g1_ParamLimits

0x6337,	// (0x00050472) slider_set_pane_g2_ParamLimits

0x6343,	// (0x0005047e) slider_set_pane_g3_ParamLimits

0x6357,	// (0x00050492) slider_set_pane_g4_ParamLimits

0x636f,	// (0x000504aa) slider_set_pane_g5_ParamLimits

0x6343,	// (0x0005047e) slider_set_pane_g6_ParamLimits

0x6385,	// (0x000504c0) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00059aa4) slider_set_pane_g_ParamLimits

0x933f,	// (0x0005347a) navi_icon_text_pane_ParamLimits

0x9841,	// (0x0005397c) aid_fill_nsta_2_ParamLimits

0x9880,	// (0x000539bb) aid_touch_tab_arrow_left_ParamLimits

0x988f,	// (0x000539ca) aid_touch_tab_arrow_right_ParamLimits

0x9908,	// (0x00053a43) clock_nsta_pane_ParamLimits

0xab98,	// (0x00054cd3) navi_icon_pane_g1_ParamLimits

0xaba4,	// (0x00054cdf) navi_text_pane_t1_ParamLimits

0xbe65,	// (0x00055fa0) navi_icon_text_pane_g1_ParamLimits

0xbe71,	// (0x00055fac) navi_icon_text_pane_t1_ParamLimits

0xd707,	// (0x00057842) list_single_hc_apps_pane_g1_ParamLimits

0x7e28,	// (0x00051f63) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x00059e21) list_single_hc_apps_pane_g_ParamLimits

0x7e41,	// (0x00051f7c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7e5d,	// (0x00051f98) list_single_hc_apps_pane_t1_ParamLimits

0x4b44,	// (0x0004ec7f) popup_toolbar2_fixed_window_ParamLimits

0x4b44,	// (0x0004ec7f) popup_toolbar2_fixed_window

0x5f15,	// (0x00050050) popup_toolbar2_float_window

0x7ec9,	// (0x00052004) bg_popup_sub_pane_cp27

0xd720,	// (0x0005785b) grid_toolbar2_float_pane

0x7ec9,	// (0x00052004) bg_popup_sub_pane_cp26

0xd720,	// (0x0005785b) grid_toolbar2_fixed_pane

0xd728,	// (0x00057863) cell_toolbar2_fixed_pane_ParamLimits

0xd728,	// (0x00057863) cell_toolbar2_fixed_pane

0xd738,	// (0x00057873) cell_toolbar2_fixed_pane_g1

0xd741,	// (0x0005787c) toolbar2_fixed_button_pane

0x9d1f,	// (0x00053e5a) toolbar2_fixed_button_pane_g1

0x9d2f,	// (0x00053e6a) toolbar2_fixed_button_pane_g2

0x9d27,	// (0x00053e62) toolbar2_fixed_button_pane_g3

0x9d3f,	// (0x00053e7a) toolbar2_fixed_button_pane_g4

0x9d37,	// (0x00053e72) toolbar2_fixed_button_pane_g5

0x9d47,	// (0x00053e82) toolbar2_fixed_button_pane_g6

0x9d4f,	// (0x00053e8a) toolbar2_fixed_button_pane_g7

0x9d5f,	// (0x00053e9a) toolbar2_fixed_button_pane_g8

0x9d57,	// (0x00053e92) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x000599a6) toolbar2_fixed_button_pane_g

0xd749,	// (0x00057884) cell_toolbar2_float_pane_ParamLimits

0xd749,	// (0x00057884) cell_toolbar2_float_pane

0xd75a,	// (0x00057895) cell_toolbar2_float_pane_g1

0xd741,	// (0x0005787c) toolbar2_fixed_button_pane_cp

0xc3d5,	// (0x00056510) fep_vkb_accented_list_pane_ParamLimits

0xc3d5,	// (0x00056510) fep_vkb_accented_list_pane

0x66fa,	// (0x00050835) bg_popup_fep_shadow_pane_g9

0x94bf,	// (0x000535fa) bg_popup_fep_shadow_pane_cp3

0x8980,	// (0x00052abb) list_accented_list_pane

0xd763,	// (0x0005789e) list_single_accented_list_pane_ParamLimits

0xd763,	// (0x0005789e) list_single_accented_list_pane

0x94bf,	// (0x000535fa) list_highlight_pane_cp10

0xd774,	// (0x000578af) list_single_accented_list_pane_t1

0x5e65,	// (0x0004ffa0) popup_slider_window_ParamLimits

0x5e65,	// (0x0004ffa0) popup_slider_window

0xd3b0,	// (0x000574eb) aid_indentation_list_msg

0xd82e,	// (0x00057969) bg_popup_window_pane_cp19

0xd898,	// (0x000579d3) popup_slider_window_g1

0xd8b4,	// (0x000579ef) popup_slider_window_g2

0xd8d0,	// (0x00057a0b) popup_slider_window_g3

0x0005,

0xfceb,	// (0x00059e26) popup_slider_window_g

0xd92c,	// (0x00057a67) popup_slider_window_t1

0xd9a0,	// (0x00057adb) small_volume_slider_vertical_pane

0xc2a7,	// (0x000563e2) small_volume_slider_vertical_pane_g1

0xc2a7,	// (0x000563e2) small_volume_slider_vertical_pane_g2

0xd9bc,	// (0x00057af7) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x00059e38) small_volume_slider_vertical_pane_g

0x48fc,	// (0x0004ea37) area_side_right_pane_ParamLimits

0x48fc,	// (0x0004ea37) area_side_right_pane

0x68e4,	// (0x00050a1f) aid_size_side_button_ParamLimits

0x68e4,	// (0x00050a1f) aid_size_side_button

0x68f8,	// (0x00050a33) grid_sctrl_middle_pane_ParamLimits

0x68f8,	// (0x00050a33) grid_sctrl_middle_pane

0x6917,	// (0x00050a52) sctrl_sk_bottom_pane

0x6928,	// (0x00050a63) sctrl_sk_top_pane

0x693a,	// (0x00050a75) aid_touch_sctrl_top

0x6947,	// (0x00050a82) bg_sctrl_sk_pane_ParamLimits

0x6947,	// (0x00050a82) bg_sctrl_sk_pane

0x6955,	// (0x00050a90) sctrl_sk_top_pane_g1

0x6962,	// (0x00050a9d) sctrl_sk_top_pane_t1

0x693a,	// (0x00050a75) aid_touch_sctrl_bottom

0x6947,	// (0x00050a82) bg_sctrl_sk_pane_cp_ParamLimits

0x6947,	// (0x00050a82) bg_sctrl_sk_pane_cp

0x697d,	// (0x00050ab8) sctrl_sk_bottom_pane_g1

0x6962,	// (0x00050a9d) sctrl_sk_bottom_pane_t1

0x6986,	// (0x00050ac1) cell_sctrl_middle_pane_ParamLimits

0x6986,	// (0x00050ac1) cell_sctrl_middle_pane

0x69a1,	// (0x00050adc) aid_touch_sctrl_middle_ParamLimits

0x69a1,	// (0x00050adc) aid_touch_sctrl_middle

0x69b3,	// (0x00050aee) bg_sctrl_middle_pane_ParamLimits

0x69b3,	// (0x00050aee) bg_sctrl_middle_pane

0x671a,	// (0x00050855) cell_sctrl_middle_pane_g1_ParamLimits

0x671a,	// (0x00050855) cell_sctrl_middle_pane_g1

0x69c1,	// (0x00050afc) cell_sctrl_middle_pane_g2_ParamLimits

0x69c1,	// (0x00050afc) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x00059e44) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x00059e44) cell_sctrl_middle_pane_g

0x9d1f,	// (0x00053e5a) bg_sctrl_middle_pane_g1

0x9d27,	// (0x00053e62) bg_sctrl_middle_pane_g2

0x9d2f,	// (0x00053e6a) bg_sctrl_middle_pane_g3

0x9d37,	// (0x00053e72) bg_sctrl_middle_pane_g4

0x9d3f,	// (0x00053e7a) bg_sctrl_middle_pane_g5

0x9d47,	// (0x00053e82) bg_sctrl_middle_pane_g6

0x9d4f,	// (0x00053e8a) bg_sctrl_middle_pane_g7

0x9d57,	// (0x00053e92) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x00059e49) bg_sctrl_middle_pane_g

0x9d5f,	// (0x00053e9a) bg_sctrl_middle_pane_g8_copy1

0x9d1f,	// (0x00053e5a) bg_sctrl_sk_pane_g1

0x9d2f,	// (0x00053e6a) bg_sctrl_sk_pane_g2

0x9d27,	// (0x00053e62) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x000599a6) bg_sctrl_sk_pane_g

0x875b,	// (0x00052896) aid_size_touch_scroll_bar

0x9d3f,	// (0x00053e7a) bg_sctrl_sk_pane_g4

0x9d37,	// (0x00053e72) bg_sctrl_sk_pane_g5

0x9d47,	// (0x00053e82) bg_sctrl_sk_pane_g6

0x9d4f,	// (0x00053e8a) bg_sctrl_sk_pane_g7

0x9d5f,	// (0x00053e9a) bg_sctrl_sk_pane_g8

0x9d57,	// (0x00053e92) bg_sctrl_sk_pane_g9

0x5ace,	// (0x0004fc09) popup_fep_china_hwr2_fs_candidate_window

0x5ad8,	// (0x0004fc13) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5ad8,	// (0x0004fc13) popup_fep_china_hwr2_fs_control_window

0x671a,	// (0x00050855) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x00059e3f) sctrl_sk_top_pane_g

0xd9c5,	// (0x00057b00) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c5,	// (0x00057b00) aid_fep_china_hwr2_fs_cell

0xd9d7,	// (0x00057b12) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d7,	// (0x00057b12) bg_popup_fep_shadow_pane_cp4

0xd9ee,	// (0x00057b29) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ee,	// (0x00057b29) bg_popup_fep_shadow_pane_cp5

0xda00,	// (0x00057b3b) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda00,	// (0x00057b3b) popup_fep_china_hwr2_fs_control_bar_grid

0xda10,	// (0x00057b4b) popup_fep_china_hwr2_fs_control_funtion_grid

0xda18,	// (0x00057b53) aid_fep_china_hwr2_fs_candi_cell

0x7ec9,	// (0x00052004) bg_popup_fep_shadow_pane_cp6

0xda22,	// (0x00057b5d) popup_fep_china_hwr2_fs_candidate_grid

0xda2c,	// (0x00057b67) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda2c,	// (0x00057b67) cell_fep_china_hwr2_fs_funtion_grid

0xc2a7,	// (0x000563e2) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda44,	// (0x00057b7f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda44,	// (0x00057b7f) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda52,	// (0x00057b8d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda52,	// (0x00057b8d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x00059e5a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x00059e5a) cell_fep_china_hwr2_fs_funtion_grid_g

0xda68,	// (0x00057ba3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda68,	// (0x00057ba3) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda7d,	// (0x00057bb8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda7d,	// (0x00057bb8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x00059e5f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x00059e5f) cell_fep_china_hwr2_fs_funtion_grid_t

0xda99,	// (0x00057bd4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdaa1,	// (0x00057bdc) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa9,	// (0x00057be4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x00059e64) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdab1,	// (0x00057bec) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdab1,	// (0x00057bec) cell_fep_china_hwr2_fs_candidate_grid

0xdaca,	// (0x00057c05) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdad2,	// (0x00057c0d) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2a7,	// (0x000563e2) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2a7,	// (0x000563e2) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x00059c78) cell_fep_china_hwr2_fs_candidate_grid_g

0xdada,	// (0x00057c15) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9915,	// (0x00053a50) clock_nsta_pane_cp_24_ParamLimits

0x9915,	// (0x00053a50) clock_nsta_pane_cp_24

0x9993,	// (0x00053ace) indicator_nsta_pane_cp_24_ParamLimits

0x9993,	// (0x00053ace) indicator_nsta_pane_cp_24

0xaa14,	// (0x00054b4f) heading_pane_g1

0x0001,

0xf8d0,	// (0x00059a0b) heading_pane_g

0xb402,	// (0x0005553d) grid_sct_catagory_button_pane

0xb432,	// (0x0005556d) scroll_pane_cp5_ParamLimits

0xbeb3,	// (0x00055fee) button_value_adjust_pane_cp5_ParamLimits

0xbeb3,	// (0x00055fee) button_value_adjust_pane_cp5

0xbf92,	// (0x000560cd) form2_midp_time_pane_ParamLimits

0xdae8,	// (0x00057c23) cell_sct_catagory_button_pane_ParamLimits

0xdae8,	// (0x00057c23) cell_sct_catagory_button_pane

0xc26c,	// (0x000563a7) bg_button_pane_cp01_ParamLimits

0xc26c,	// (0x000563a7) bg_button_pane_cp01

0xc2a7,	// (0x000563e2) cell_sct_catagory_button_pane_g1

0x5ea4,	// (0x0004ffdf) popup_tb_extension_window

0xdafa,	// (0x00057c35) aid_size_cell_ext_ParamLimits

0xdafa,	// (0x00057c35) aid_size_cell_ext

0x8246,	// (0x00052381) bg_tb_trans_pane_cp1_ParamLimits

0x8246,	// (0x00052381) bg_tb_trans_pane_cp1

0xdb1a,	// (0x00057c55) grid_tb_ext_pane_ParamLimits

0xdb1a,	// (0x00057c55) grid_tb_ext_pane

0xdb48,	// (0x00057c83) cell_tb_ext_pane_ParamLimits

0xdb48,	// (0x00057c83) cell_tb_ext_pane

0xdb5f,	// (0x00057c9a) cell_tb_ext_pane_g1_ParamLimits

0xdb5f,	// (0x00057c9a) cell_tb_ext_pane_g1

0xdb7c,	// (0x00057cb7) cell_tb_ext_pane_t1

0x8246,	// (0x00052381) list_highlight_pane_cp11_ParamLimits

0x8246,	// (0x00052381) list_highlight_pane_cp11

0x4b63,	// (0x0004ec9e) popup_uni_indicator_window_ParamLimits

0x4b63,	// (0x0004ec9e) popup_uni_indicator_window

0x8838,	// (0x00052973) bg_popup_sub_pane_cp14

0xdb97,	// (0x00057cd2) list_uniindi_pane

0xdba3,	// (0x00057cde) uniindi_top_pane

0x8246,	// (0x00052381) bg_uniindi_top_pane

0xdbc2,	// (0x00057cfd) uniindi_top_pane_g1

0xdbd8,	// (0x00057d13) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x00059e6b) uniindi_top_pane_g

0xdc02,	// (0x00057d3d) uniindi_top_pane_t1

0xdc2c,	// (0x00057d67) list_single_uniindi_pane_ParamLimits

0xdc2c,	// (0x00057d67) list_single_uniindi_pane

0xc2a7,	// (0x000563e2) bg_uniindi_top_pane_g1

0xdc3f,	// (0x00057d7a) list_single_uniindi_pane_g1

0xdc52,	// (0x00057d8d) list_single_uniindi_pane_t1

0x49d9,	// (0x0004eb14) control_bg_pane

0xdc77,	// (0x00057db2) bg_sctrl_sk_pane_cp1

0xdc80,	// (0x00057dbb) bg_sctrl_sk_pane_cp2

0xdc89,	// (0x00057dc4) control_bg_pane_g1

0xdc92,	// (0x00057dcd) control_bg_pane_g2

0x0001,

0xfd39,	// (0x00059e74) control_bg_pane_g

0xbd0e,	// (0x00055e49) cell_indicator_nsta_pane_g1_ParamLimits

0xbd1c,	// (0x00055e57) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x00059bdc) cell_indicator_nsta_pane_g_ParamLimits

0x7b1d,	// (0x00051c58) form2_midp_time_pane_t1_ParamLimits

0x5a2e,	// (0x0004fb69) main_idle_act4_pane_ParamLimits

0x5a2e,	// (0x0004fb69) main_idle_act4_pane

0x5ea4,	// (0x0004ffdf) popup_tb_extension_window_ParamLimits

0xdb38,	// (0x00057c73) tb_ext_find_pane_ParamLimits

0xdb38,	// (0x00057c73) tb_ext_find_pane

0xdc9b,	// (0x00057dd6) ai_gene_pane_1_cp1

0x9606,	// (0x00053741) ai_gene_pane_2_cp1

0xdca3,	// (0x00057dde) list_single_idle_plugin_calendar_pane

0xdcac,	// (0x00057de7) list_single_idle_plugin_notification_pane

0xdcb5,	// (0x00057df0) list_single_idle_plugin_player_pane

0xdcbe,	// (0x00057df9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcbe,	// (0x00057df9) list_single_idle_plugin_shortcut_pane

0xdce0,	// (0x00057e1b) main_idle_act4_pane_t1

0xdcf2,	// (0x00057e2d) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x00059e79) main_idle_act4_pane_t

0xdd04,	// (0x00057e3f) middle_sk_idle_act4_pane_ParamLimits

0xdd04,	// (0x00057e3f) middle_sk_idle_act4_pane

0xdd1a,	// (0x00057e55) popup_clock_digital_analogue_window_cp2

0xdd34,	// (0x00057e6f) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd34,	// (0x00057e6f) shortcut_wheel_idle_act4_pane

0xc2a7,	// (0x000563e2) shortcut_wheel_idle_act4_pane_g1

0xc2a7,	// (0x000563e2) shortcut_wheel_idle_act4_pane_g2

0xc2a7,	// (0x000563e2) shortcut_wheel_idle_act4_pane_g3

0xc2a7,	// (0x000563e2) shortcut_wheel_idle_act4_pane_g4

0xc2a7,	// (0x000563e2) shortcut_wheel_idle_act4_pane_g5

0xdd48,	// (0x00057e83) shortcut_wheel_idle_act4_pane_g6

0xdd50,	// (0x00057e8b) shortcut_wheel_idle_act4_pane_g7

0xdd58,	// (0x00057e93) shortcut_wheel_idle_act4_pane_g8

0xdd60,	// (0x00057e9b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x00059e7e) shortcut_wheel_idle_act4_pane_g

0xc531,	// (0x0005666c) middle_sk_idle_act4_pane_g1_ParamLimits

0xc531,	// (0x0005666c) middle_sk_idle_act4_pane_g1

0xddc4,	// (0x00057eff) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc4,	// (0x00057eff) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x00059ea1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x00059ea1) middle_sk_idle_act4_pane_g

0xddd0,	// (0x00057f0b) middle_sk_idle_act4_pane_t1_ParamLimits

0xddd0,	// (0x00057f0b) middle_sk_idle_act4_pane_t1

0xdded,	// (0x00057f28) grid_ai_shortcut_pane_ParamLimits

0xdded,	// (0x00057f28) grid_ai_shortcut_pane

0xde06,	// (0x00057f41) list_highlight_pane_cp16_ParamLimits

0xde06,	// (0x00057f41) list_highlight_pane_cp16

0xde13,	// (0x00057f4e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde13,	// (0x00057f4e) list_single_idle_plugin_shortcut_pane_g1

0xde1f,	// (0x00057f5a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1f,	// (0x00057f5a) list_single_idle_plugin_shortcut_pane_g2

0xde37,	// (0x00057f72) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde37,	// (0x00057f72) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x00059ea6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x00059ea6) list_single_idle_plugin_shortcut_pane_g

0xde4a,	// (0x00057f85) cell_ai_shortcut_pane_ParamLimits

0xde4a,	// (0x00057f85) cell_ai_shortcut_pane

0xde6e,	// (0x00057fa9) cell_ai_shortcut_pane_g1_ParamLimits

0xde6e,	// (0x00057fa9) cell_ai_shortcut_pane_g1

0xdc9b,	// (0x00057dd6) ai_gene_pane_1_cp2

0xde90,	// (0x00057fcb) ai_gene_pane_2_cp2

0xde98,	// (0x00057fd3) list_highlight_pane_cp15

0xdea1,	// (0x00057fdc) list_single_idle_plugin_calendar_pane_g1

0xde98,	// (0x00057fd3) list_highlight_pane_cp17

0xdea9,	// (0x00057fe4) list_single_idle_plugin_calendar_pane_g1_copy1

0xdeb1,	// (0x00057fec) list_single_idle_plugin_player_pane_g1

0xb65b,	// (0x00055796) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x00059ead) list_single_idle_plugin_player_pane_g

0xdeb9,	// (0x00057ff4) list_single_idle_plugin_player_pane_t1

0xdec7,	// (0x00058002) list_single_idle_plugin_player_pane_t2

0xded5,	// (0x00058010) list_single_idle_plugin_player_pane_t3

0xdee3,	// (0x0005801e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x00059eb2) list_single_idle_plugin_player_pane_t

0xdef1,	// (0x0005802c) wait_bar_pane_cp15

0xdef9,	// (0x00058034) grid_ai_notification_pane

0xb65b,	// (0x00055796) list_single_idle_plugin_notification_pane_g1

0xdf23,	// (0x0005805e) cell_ai_notification_pane_ParamLimits

0xdf23,	// (0x0005805e) cell_ai_notification_pane

0xdf30,	// (0x0005806b) cell_ai_notification_pane_g1

0xdf38,	// (0x00058073) cell_ai_notification_pane_t1

0xdf46,	// (0x00058081) tb_ext_find_button_pane

0xdf4e,	// (0x00058089) tb_ext_find_pane_g1

0xdf56,	// (0x00058091) tb_ext_find_pane_t1

0x8eac,	// (0x00052fe7) tb_ext_find_button_pane_g1

0xdf64,	// (0x0005809f) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x00059ebb) tb_ext_find_button_pane_g

0xdce0,	// (0x00057e1b) main_idle_act4_pane_t1_ParamLimits

0xdcf2,	// (0x00057e2d) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x00059e79) main_idle_act4_pane_t_ParamLimits

0xdd1a,	// (0x00057e55) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd28,	// (0x00057e63) sat_plugin_idle_act4_pane_ParamLimits

0xdd28,	// (0x00057e63) sat_plugin_idle_act4_pane

0xdf6d,	// (0x000580a8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf6d,	// (0x000580a8) sat_plugin_idle_act4_pane_t1

0xdf80,	// (0x000580bb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf80,	// (0x000580bb) sat_plugin_idle_act4_pane_t2

0xdf93,	// (0x000580ce) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf93,	// (0x000580ce) sat_plugin_idle_act4_pane_t3

0xdfa6,	// (0x000580e1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfa6,	// (0x000580e1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x00059ec0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x00059ec0) sat_plugin_idle_act4_pane_t

0x4a9e,	// (0x0004ebd9) popup_battery_window_ParamLimits

0x4a9e,	// (0x0004ebd9) popup_battery_window

0x8246,	// (0x00052381) bg_popup_sub_pane_cp25_ParamLimits

0x8246,	// (0x00052381) bg_popup_sub_pane_cp25

0xdfb9,	// (0x000580f4) popup_battery_window_g1_ParamLimits

0xdfb9,	// (0x000580f4) popup_battery_window_g1

0xdfc5,	// (0x00058100) popup_battery_window_t1_ParamLimits

0xdfc5,	// (0x00058100) popup_battery_window_t1

0xdfd7,	// (0x00058112) popup_battery_window_t2_ParamLimits

0xdfd7,	// (0x00058112) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x00059ec9) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x00059ec9) popup_battery_window_t

0x94d3,	// (0x0005360e) midp_canvas_pane_ParamLimits

0x954a,	// (0x00053685) midp_keypad_pane_ParamLimits

0x954a,	// (0x00053685) midp_keypad_pane

0x9809,	// (0x00053944) main_midp_pane_ParamLimits

0xbd77,	// (0x00055eb2) signal_pane_g2_cp_ParamLimits

0xdff4,	// (0x0005812f) aid_size_cell_midp_keypad_ParamLimits

0xdff4,	// (0x0005812f) aid_size_cell_midp_keypad

0xe00e,	// (0x00058149) midp_keyp_game_grid_pane_ParamLimits

0xe00e,	// (0x00058149) midp_keyp_game_grid_pane

0xe02e,	// (0x00058169) midp_keyp_rocker_pane_ParamLimits

0xe02e,	// (0x00058169) midp_keyp_rocker_pane

0xe067,	// (0x000581a2) midp_keyp_sk_left_pane_ParamLimits

0xe067,	// (0x000581a2) midp_keyp_sk_left_pane

0xe0c1,	// (0x000581fc) midp_keyp_sk_right_pane_ParamLimits

0xe0c1,	// (0x000581fc) midp_keyp_sk_right_pane

0x7ec9,	// (0x00052004) bg_button_pane_cp03

0xe11b,	// (0x00058256) midp_keyp_sk_left_pane_g1

0x7ec9,	// (0x00052004) bg_button_pane_cp04

0xe11b,	// (0x00058256) midp_keyp_sk_right_pane_g1

0xc2a7,	// (0x000563e2) midp_keyp_rocker_pane_g1

0xe124,	// (0x0005825f) keyp_game_cell_pane_ParamLimits

0xe124,	// (0x0005825f) keyp_game_cell_pane

0x7ec9,	// (0x00052004) bg_button_pane_cp02

0xe137,	// (0x00058272) keyp_game_cell_pane_g1

0x4ae2,	// (0x0004ec1d) popup_fep_vkb2_window_ParamLimits

0x4ae2,	// (0x0004ec1d) popup_fep_vkb2_window

0x69df,	// (0x00050b1a) aid_size_cell_vkb2_ParamLimits

0x69df,	// (0x00050b1a) aid_size_cell_vkb2

0x6a33,	// (0x00050b6e) popup_fep_vkb2_window_g1_ParamLimits

0x6a33,	// (0x00050b6e) popup_fep_vkb2_window_g1

0x6a7b,	// (0x00050bb6) vkb2_area_bottom_pane_ParamLimits

0x6a7b,	// (0x00050bb6) vkb2_area_bottom_pane

0x6ac7,	// (0x00050c02) vkb2_area_keypad_pane_ParamLimits

0x6ac7,	// (0x00050c02) vkb2_area_keypad_pane

0x6b09,	// (0x00050c44) vkb2_area_top_pane_ParamLimits

0x6b09,	// (0x00050c44) vkb2_area_top_pane

0x6b83,	// (0x00050cbe) vkb2_top_entry_pane_ParamLimits

0x6b83,	// (0x00050cbe) vkb2_top_entry_pane

0x6bad,	// (0x00050ce8) vkb2_top_grid_left_pane_ParamLimits

0x6bad,	// (0x00050ce8) vkb2_top_grid_left_pane

0x6bcb,	// (0x00050d06) vkb2_top_grid_right_pane_ParamLimits

0x6bcb,	// (0x00050d06) vkb2_top_grid_right_pane

0x6be9,	// (0x00050d24) vkb2_cell_keypad_pane_ParamLimits

0x6be9,	// (0x00050d24) vkb2_cell_keypad_pane

0x6cba,	// (0x00050df5) vkb2_area_bottom_grid_pane_ParamLimits

0x6cba,	// (0x00050df5) vkb2_area_bottom_grid_pane

0x6ce0,	// (0x00050e1b) vkb2_area_bottom_pane_g1_ParamLimits

0x6ce0,	// (0x00050e1b) vkb2_area_bottom_pane_g1

0x6d04,	// (0x00050e3f) vkb2_area_bottom_pane_g2_ParamLimits

0x6d04,	// (0x00050e3f) vkb2_area_bottom_pane_g2

0x6d32,	// (0x00050e6d) vkb2_area_bottom_pane_g3_ParamLimits

0x6d32,	// (0x00050e6d) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x00059ece) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x00059ece) vkb2_area_bottom_pane_g

0x6d93,	// (0x00050ece) vkb2_top_cell_left_pane_ParamLimits

0x6d93,	// (0x00050ece) vkb2_top_cell_left_pane

0xe148,	// (0x00058283) vkb2_top_entry_pane_g1_ParamLimits

0xe148,	// (0x00058283) vkb2_top_entry_pane_g1

0xe156,	// (0x00058291) vkb2_top_entry_pane_t1_ParamLimits

0xe156,	// (0x00058291) vkb2_top_entry_pane_t1

0xe188,	// (0x000582c3) vkb2_top_entry_pane_t2_ParamLimits

0xe188,	// (0x000582c3) vkb2_top_entry_pane_t2

0xe1ba,	// (0x000582f5) vkb2_top_entry_pane_t3_ParamLimits

0xe1ba,	// (0x000582f5) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x00059ed5) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x00059ed5) vkb2_top_entry_pane_t

0x6de0,	// (0x00050f1b) vkb2_top_grid_right_pane_g1_ParamLimits

0x6de0,	// (0x00050f1b) vkb2_top_grid_right_pane_g1

0x6df6,	// (0x00050f31) vkb2_top_grid_right_pane_g2_ParamLimits

0x6df6,	// (0x00050f31) vkb2_top_grid_right_pane_g2

0x6e0e,	// (0x00050f49) vkb2_top_grid_right_pane_g3_ParamLimits

0x6e0e,	// (0x00050f49) vkb2_top_grid_right_pane_g3

0x6e26,	// (0x00050f61) vkb2_top_grid_right_pane_g4_ParamLimits

0x6e26,	// (0x00050f61) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x00059edc) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x00059edc) vkb2_top_grid_right_pane_g

0x6e3c,	// (0x00050f77) vkb2_top_cell_left_pane_g1

0x6e53,	// (0x00050f8e) vkb2_cell_keypad_pane_g1_ParamLimits

0x6e53,	// (0x00050f8e) vkb2_cell_keypad_pane_g1

0xe1de,	// (0x00058319) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1de,	// (0x00058319) vkb2_cell_keypad_pane_t1

0x6e61,	// (0x00050f9c) vkb2_cell_bottom_grid_pane_ParamLimits

0x6e61,	// (0x00050f9c) vkb2_cell_bottom_grid_pane

0x6e9a,	// (0x00050fd5) vkb2_cell_bottom_grid_pane_g1

0xdd68,	// (0x00057ea3) aid_call2_pane_cp02

0xdd70,	// (0x00057eab) aid_call_pane_cp02

0xdd78,	// (0x00057eb3) clock_digital_number_pane_cp10

0xdd80,	// (0x00057ebb) clock_digital_number_pane_cp11

0xdd88,	// (0x00057ec3) clock_digital_number_pane_cp12

0xdd90,	// (0x00057ecb) clock_digital_number_pane_cp13

0xdd98,	// (0x00057ed3) clock_digital_separator_pane_cp10

0x8eac,	// (0x00052fe7) popup_clock_digital_analogue_window_cp2_g1

0x8eac,	// (0x00052fe7) popup_clock_digital_analogue_window_cp2_g2

0xdda0,	// (0x00057edb) popup_clock_digital_analogue_window_cp2_g3

0x8eac,	// (0x00052fe7) popup_clock_digital_analogue_window_cp2_g4

0xdda0,	// (0x00057edb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x00059e91) popup_clock_digital_analogue_window_cp2_g

0xdda8,	// (0x00057ee3) popup_clock_digital_analogue_window_cp2_t1

0xddb6,	// (0x00057ef1) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x00059e9c) popup_clock_digital_analogue_window_cp2_t

0xc2a7,	// (0x000563e2) clock_digital_number_pane_cp10_g1

0xc2a7,	// (0x000563e2) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x00059c78) clock_digital_number_pane_cp10_g

0xc2a7,	// (0x000563e2) clock_digital_separator_pane_cp10_g1

0xc2a7,	// (0x000563e2) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x00059c78) clock_digital_separator_pane_cp10_g

0xdbe4,	// (0x00057d1f) uniindi_top_pane_g3

0xdbf5,	// (0x00057d30) uniindi_top_pane_g4

0x6c74,	// (0x00050daf) vkb2_row_keypad_pane_ParamLimits

0x6c74,	// (0x00050daf) vkb2_row_keypad_pane

0x6eb6,	// (0x00050ff1) vkb2_cell_t_keypad_pane_ParamLimits

0x6eb6,	// (0x00050ff1) vkb2_cell_t_keypad_pane

0x6ec6,	// (0x00051001) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6ec6,	// (0x00051001) vkb2_cell_t_keypad_pane_cp08

0x6ed9,	// (0x00051014) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6ed9,	// (0x00051014) vkb2_cell_t_keypad_pane_cp09

0x6eed,	// (0x00051028) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6eed,	// (0x00051028) vkb2_cell_t_keypad_pane_cp01

0x6efe,	// (0x00051039) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6efe,	// (0x00051039) vkb2_cell_t_keypad_pane_cp02

0x6f0f,	// (0x0005104a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6f0f,	// (0x0005104a) vkb2_cell_t_keypad_pane_cp03

0x6f20,	// (0x0005105b) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6f20,	// (0x0005105b) vkb2_cell_t_keypad_pane_cp04

0x6f31,	// (0x0005106c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6f31,	// (0x0005106c) vkb2_cell_t_keypad_pane_cp05

0x6f42,	// (0x0005107d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6f42,	// (0x0005107d) vkb2_cell_t_keypad_pane_cp06

0x6f53,	// (0x0005108e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6f53,	// (0x0005108e) vkb2_cell_t_keypad_pane_cp07

0x6f64,	// (0x0005109f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6f64,	// (0x0005109f) vkb2_cell_t_keypad_pane_cp10

0x671a,	// (0x00050855) vkb2_cell_t_keypad_pane_g1

0xe1f5,	// (0x00058330) vkb2_cell_t_keypad_pane_t1

0x49d9,	// (0x0004eb14) popup_grid_graphic2_window

0xe207,	// (0x00058342) aid_size_cell_graphic2_ParamLimits

0xe207,	// (0x00058342) aid_size_cell_graphic2

0xe23f,	// (0x0005837a) bg_popup_window_pane_cp21_ParamLimits

0xe23f,	// (0x0005837a) bg_popup_window_pane_cp21

0xe24d,	// (0x00058388) graphic2_pages_pane_ParamLimits

0xe24d,	// (0x00058388) graphic2_pages_pane

0xe293,	// (0x000583ce) grid_graphic2_control_pane_ParamLimits

0xe293,	// (0x000583ce) grid_graphic2_control_pane

0xe2d1,	// (0x0005840c) grid_graphic2_pane_ParamLimits

0xe2d1,	// (0x0005840c) grid_graphic2_pane

0xe345,	// (0x00058480) cell_graphic2_pane

0x49d9,	// (0x0004eb14) main_comp_mode_pane

0xd464,	// (0x0005759f) list_ai3_gene_pane_ParamLimits

0xd82e,	// (0x00057969) bg_popup_window_pane_cp19_ParamLimits

0xd83a,	// (0x00057975) bg_touch_area_indi_pane_ParamLimits

0xd83a,	// (0x00057975) bg_touch_area_indi_pane

0xd850,	// (0x0005798b) bg_touch_area_indi_pane_cp01_ParamLimits

0xd850,	// (0x0005798b) bg_touch_area_indi_pane_cp01

0xd866,	// (0x000579a1) bg_touch_area_indi_pane_cp02_ParamLimits

0xd866,	// (0x000579a1) bg_touch_area_indi_pane_cp02

0xd87e,	// (0x000579b9) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87e,	// (0x000579b9) bg_touch_area_indi_pane_cp03

0xd898,	// (0x000579d3) popup_slider_window_g1_ParamLimits

0xd8b4,	// (0x000579ef) popup_slider_window_g2_ParamLimits

0xd8d0,	// (0x00057a0b) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x00059e26) popup_slider_window_g_ParamLimits

0xd92c,	// (0x00057a67) popup_slider_window_t1_ParamLimits

0xd9a0,	// (0x00057adb) small_volume_slider_vertical_pane_ParamLimits

0xe345,	// (0x00058480) cell_graphic2_pane_ParamLimits

0xe394,	// (0x000584cf) bg_button_pane_cp10_ParamLimits

0xe394,	// (0x000584cf) bg_button_pane_cp10

0xe3a7,	// (0x000584e2) bg_button_pane_cp11_ParamLimits

0xe3a7,	// (0x000584e2) bg_button_pane_cp11

0xe3ba,	// (0x000584f5) graphic2_pages_pane_g1_ParamLimits

0xe3ba,	// (0x000584f5) graphic2_pages_pane_g1

0xe3d5,	// (0x00058510) graphic2_pages_pane_g2_ParamLimits

0xe3d5,	// (0x00058510) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x00059eea) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x00059eea) graphic2_pages_pane_g

0xe3ed,	// (0x00058528) graphic2_pages_pane_t1_ParamLimits

0xe3ed,	// (0x00058528) graphic2_pages_pane_t1

0xe405,	// (0x00058540) cell_graphic2_control_pane_ParamLimits

0xe405,	// (0x00058540) cell_graphic2_control_pane

0xe423,	// (0x0005855e) cell_graphic2_pane_g1_ParamLimits

0xe423,	// (0x0005855e) cell_graphic2_pane_g1

0xe430,	// (0x0005856b) cell_graphic2_pane_g2_ParamLimits

0xe430,	// (0x0005856b) cell_graphic2_pane_g2

0xe43d,	// (0x00058578) cell_graphic2_pane_g3_ParamLimits

0xe43d,	// (0x00058578) cell_graphic2_pane_g3

0xe44a,	// (0x00058585) cell_graphic2_pane_g4_ParamLimits

0xe44a,	// (0x00058585) cell_graphic2_pane_g4

0xe457,	// (0x00058592) cell_graphic2_pane_g5_ParamLimits

0xe457,	// (0x00058592) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x00059eef) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x00059eef) cell_graphic2_pane_g

0xe472,	// (0x000585ad) cell_graphic2_pane_t1_ParamLimits

0xe472,	// (0x000585ad) cell_graphic2_pane_t1

0x9d93,	// (0x00053ece) grid_highlight_pane_cp11_ParamLimits

0x9d93,	// (0x00053ece) grid_highlight_pane_cp11

0x8246,	// (0x00052381) bg_button_pane_cp05

0xe4a9,	// (0x000585e4) cell_graphic2_control_pane_g1

0xc2a7,	// (0x000563e2) bg_touch_area_indi_pane_g1

0xe4d1,	// (0x0005860c) aid_cmod_rocker_key_size

0xe4db,	// (0x00058616) aid_cmode_itu_key_size

0xe4e5,	// (0x00058620) main_cmode_video_pane

0xe4ef,	// (0x0005862a) main_comp_mode_itu_pane

0xe4fb,	// (0x00058636) main_comp_mode_rocker_pane

0xe507,	// (0x00058642) cell_cmode_rocker_pane_ParamLimits

0xe507,	// (0x00058642) cell_cmode_rocker_pane

0xe519,	// (0x00058654) cell_cmode_itu_pane_ParamLimits

0xe519,	// (0x00058654) cell_cmode_itu_pane

0x8838,	// (0x00052973) bg_button_pane_cp06_ParamLimits

0x8838,	// (0x00052973) bg_button_pane_cp06

0xc531,	// (0x0005666c) cell_cmode_rocker_pane_g1_ParamLimits

0xc531,	// (0x0005666c) cell_cmode_rocker_pane_g1

0xda44,	// (0x00057b7f) cell_cmode_rocker_pane_g2_ParamLimits

0xda44,	// (0x00057b7f) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x00059eff) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x00059eff) cell_cmode_rocker_pane_g

0x7ec9,	// (0x00052004) bg_button_pane_cp07

0xe52e,	// (0x00058669) cell_cmode_itu_pane_g1

0xe537,	// (0x00058672) cell_cmode_itu_pane_t1

0xe545,	// (0x00058680) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x00059f04) cell_cmode_itu_pane_t

0xdc67,	// (0x00057da2) aid_touch_ctrl_left

0xdc6f,	// (0x00057daa) aid_touch_ctrl_right

0x7ec9,	// (0x00052004) compa_mode_pane

0xe553,	// (0x0005868e) aid_cmod_rocker_key_size_cp

0xe55d,	// (0x00058698) aid_cmode_itu_key_size_cp

0xe567,	// (0x000586a2) compa_mode_pane_g1

0xe56f,	// (0x000586aa) compa_mode_pane_g2

0xe577,	// (0x000586b2) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x00059f09) compa_mode_pane_g

0xe57f,	// (0x000586ba) main_comp_mode_itu_pane_cp

0xe587,	// (0x000586c2) main_comp_mode_rocker_pane_cp

0xe58f,	// (0x000586ca) cell_cmode_itu_pane_cp_ParamLimits

0xe58f,	// (0x000586ca) cell_cmode_itu_pane_cp

0xe5a4,	// (0x000586df) cell_cmode_rocker_pane_cp_ParamLimits

0xe5a4,	// (0x000586df) cell_cmode_rocker_pane_cp

0x8838,	// (0x00052973) bg_button_pane_cp06_cp_ParamLimits

0x8838,	// (0x00052973) bg_button_pane_cp06_cp

0xc531,	// (0x0005666c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc531,	// (0x0005666c) cell_cmode_rocker_pane_g1_cp

0xc2a7,	// (0x000563e2) cell_cmode_rocker_pane_g2_cp

0x7ec9,	// (0x00052004) bg_button_pane_cp07_cp

0xb253,	// (0x0005538e) cell_cmode_itu_pane_g1_cp

0xe5b6,	// (0x000586f1) cell_cmode_itu_pane_t1_cp

0xe5b6,	// (0x000586f1) cell_cmode_itu_pane_t2_cp

0xb240,	// (0x0005537b) settings_code_pane_cp2

0x7fbd,	// (0x000520f8) bg_popup_window_pane_cp3_ParamLimits

0x8420,	// (0x0005255b) heading_pane_cp3_ParamLimits

0x842c,	// (0x00052567) listscroll_popup_graphic_pane_ParamLimits

0x64c3,	// (0x000505fe) fep_hwr_aid_pane_ParamLimits

0x693a,	// (0x00050a75) aid_touch_sctrl_top_ParamLimits

0x6955,	// (0x00050a90) sctrl_sk_top_pane_g1_ParamLimits

0x671a,	// (0x00050855) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x00059e3f) sctrl_sk_top_pane_g_ParamLimits

0x6962,	// (0x00050a9d) sctrl_sk_top_pane_t1_ParamLimits

0x693a,	// (0x00050a75) aid_touch_sctrl_bottom_ParamLimits

0x6962,	// (0x00050a9d) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbb0,	// (0x00057ceb) aid_area_touch_clock

0x6b4b,	// (0x00050c86) aid_vkb2_area_top_pane_cell_ParamLimits

0x6b4b,	// (0x00050c86) aid_vkb2_area_top_pane_cell

0x6c96,	// (0x00050dd1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6c96,	// (0x00050dd1) aid_vkb2_area_bottom_pane_cell

0xe140,	// (0x0005827b) popup_char_count_window

0xe5c4,	// (0x000586ff) popup_char_count_window_g1

0xe5cd,	// (0x00058708) popup_char_count_window_g2

0xe5d6,	// (0x00058711) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x00059f10) popup_char_count_window_g

0xe5df,	// (0x0005871a) popup_char_count_window_t1

0x6a11,	// (0x00050b4c) popup_fep_char_preview_window_ParamLimits

0x6a11,	// (0x00050b4c) popup_fep_char_preview_window

0x6b69,	// (0x00050ca4) vkb2_top_candi_pane_ParamLimits

0x6b69,	// (0x00050ca4) vkb2_top_candi_pane

0xe5ed,	// (0x00058728) cell_vkb2_top_candi_pane_ParamLimits

0xe5ed,	// (0x00058728) cell_vkb2_top_candi_pane

0x6f79,	// (0x000510b4) bg_popup_fep_char_preview_window_ParamLimits

0x6f79,	// (0x000510b4) bg_popup_fep_char_preview_window

0x6f87,	// (0x000510c2) popup_fep_char_preview_window_t1_ParamLimits

0x6f87,	// (0x000510c2) popup_fep_char_preview_window_t1

0xe63a,	// (0x00058775) bg_popup_fep_char_preview_window_g1

0xe642,	// (0x0005877d) bg_popup_fep_char_preview_window_g2

0xe64a,	// (0x00058785) bg_popup_fep_char_preview_window_g3

0xe652,	// (0x0005878d) bg_popup_fep_char_preview_window_g4

0xe65a,	// (0x00058795) bg_popup_fep_char_preview_window_g5

0x6fc1,	// (0x000510fc) bg_popup_fep_char_preview_window_g6

0xe662,	// (0x0005879d) bg_popup_fep_char_preview_window_g7

0xe66a,	// (0x000587a5) bg_popup_fep_char_preview_window_g8

0xe672,	// (0x000587ad) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x00059f17) bg_popup_fep_char_preview_window_g

0x671a,	// (0x00050855) cell_vkb2_top_candi_pane_g1_ParamLimits

0x671a,	// (0x00050855) cell_vkb2_top_candi_pane_g1

0x6728,	// (0x00050863) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6728,	// (0x00050863) cell_vkb2_top_candi_pane_g2

0xdf02,	// (0x0005803d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf02,	// (0x0005803d) cell_vkb2_top_candi_pane_g3

0x6fc9,	// (0x00051104) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6fc9,	// (0x00051104) cell_vkb2_top_candi_pane_g4

0xc9fc,	// (0x00056b37) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9fc,	// (0x00056b37) cell_vkb2_top_candi_pane_g5

0x6fea,	// (0x00051125) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6fea,	// (0x00051125) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x00059f2a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x00059f2a) cell_vkb2_top_candi_pane_g

0x6ff8,	// (0x00051133) cell_vkb2_top_candi_pane_t1

0x6323,	// (0x0005045e) aid_size_touch_slider_mark_ParamLimits

0x6323,	// (0x0005045e) aid_size_touch_slider_mark

0xe283,	// (0x000583be) grid_graphic2_catg_pane_ParamLimits

0xe283,	// (0x000583be) grid_graphic2_catg_pane

0xe321,	// (0x0005845c) popup_grid_graphic2_window_t1_ParamLimits

0xe321,	// (0x0005845c) popup_grid_graphic2_window_t1

0xe333,	// (0x0005846e) popup_grid_graphic2_window_t2_ParamLimits

0xe333,	// (0x0005846e) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x00059ee5) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x00059ee5) popup_grid_graphic2_window_t

0x8246,	// (0x00052381) bg_button_pane_cp05_ParamLimits

0xe4a9,	// (0x000585e4) cell_graphic2_control_pane_g1_ParamLimits

0xe67a,	// (0x000587b5) cell_graphic2_catg_pane_ParamLimits

0xe67a,	// (0x000587b5) cell_graphic2_catg_pane

0x7ec9,	// (0x00052004) bg_button_pane_cp12

0xe68c,	// (0x000587c7) cell_graphic2_catg_pane_g1

0xdb7c,	// (0x00057cb7) cell_tb_ext_pane_t1_ParamLimits

0x6db3,	// (0x00050eee) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6db3,	// (0x00050eee) vkb2_top_cell_right_narrow_pane

0x6dcb,	// (0x00050f06) vkb2_top_cell_right_wide_pane_ParamLimits

0x6dcb,	// (0x00050f06) vkb2_top_cell_right_wide_pane

0x64b5,	// (0x000505f0) bg_vkb2_func_pane_ParamLimits

0x64b5,	// (0x000505f0) bg_vkb2_func_pane

0x6e3c,	// (0x00050f77) vkb2_top_cell_left_pane_g1_ParamLimits

0x64b5,	// (0x000505f0) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64b5,	// (0x000505f0) bg_vkb2_fuc_pane_cp03

0x6e9a,	// (0x00050fd5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d27,	// (0x00053e62) bg_vkb2_func_pane_g1

0x9d2f,	// (0x00053e6a) bg_vkb2_func_pane_g2

0x9d3f,	// (0x00053e7a) bg_vkb2_func_pane_g3

0x9d37,	// (0x00053e72) bg_vkb2_func_pane_g4

0x9d47,	// (0x00053e82) bg_vkb2_func_pane_g5

0x9d4f,	// (0x00053e8a) bg_vkb2_func_pane_g6

0x9d57,	// (0x00053e92) bg_vkb2_func_pane_g7

0x9d5f,	// (0x00053e9a) bg_vkb2_func_pane_g8

0x9d1f,	// (0x00053e5a) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x00059f37) bg_vkb2_func_pane_g

0x64b5,	// (0x000505f0) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64b5,	// (0x000505f0) bg_vkb2_fuc_pane_cp01

0x6e3c,	// (0x00050f77) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6e3c,	// (0x00050f77) vkb2_top_cell_right_wide_pane_g1

0x64b5,	// (0x000505f0) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64b5,	// (0x000505f0) bg_vkb2_fuc_pane_cp02

0x6e9a,	// (0x00050fd5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6e9a,	// (0x00050fd5) vkb2_top_cell_right_narrow_pane_g1

0xd7b2,	// (0x000578ed) aid_touch_area_decrease_ParamLimits

0xd7b2,	// (0x000578ed) aid_touch_area_decrease

0xd7d0,	// (0x0005790b) aid_touch_area_increase_ParamLimits

0xd7d0,	// (0x0005790b) aid_touch_area_increase

0xd7dc,	// (0x00057917) aid_touch_area_mute_ParamLimits

0xd7dc,	// (0x00057917) aid_touch_area_mute

0xd800,	// (0x0005793b) aid_touch_area_slider_ParamLimits

0xd800,	// (0x0005793b) aid_touch_area_slider

0xd8ec,	// (0x00057a27) popup_slider_window_g4_ParamLimits

0xd8ec,	// (0x00057a27) popup_slider_window_g4

0xd8f8,	// (0x00057a33) popup_slider_window_g5_ParamLimits

0xd8f8,	// (0x00057a33) popup_slider_window_g5

0xd91a,	// (0x00057a55) popup_slider_window_g6_ParamLimits

0xd91a,	// (0x00057a55) popup_slider_window_g6

0xd95a,	// (0x00057a95) popup_slider_window_t2_ParamLimits

0xd95a,	// (0x00057a95) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x00059e33) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x00059e33) popup_slider_window_t

0xd972,	// (0x00057aad) slider_pane_ParamLimits

0xd972,	// (0x00057aad) slider_pane

0xe695,	// (0x000587d0) slider_pane_g1_ParamLimits

0xe695,	// (0x000587d0) slider_pane_g1

0xe6a9,	// (0x000587e4) slider_pane_g2_ParamLimits

0xe6a9,	// (0x000587e4) slider_pane_g2

0xe6bf,	// (0x000587fa) slider_pane_g3_ParamLimits

0xe6bf,	// (0x000587fa) slider_pane_g3

0x0003,

0xfe0f,	// (0x00059f4a) slider_pane_g_ParamLimits

0xfe0f,	// (0x00059f4a) slider_pane_g

0x5f00,	// (0x0005003b) popup_tb_float_extension_window_ParamLimits

0x5f00,	// (0x0005003b) popup_tb_float_extension_window

0xe6eb,	// (0x00058826) aid_size_cell_tb_float_ext

0x7ec9,	// (0x00052004) bg_popup_sub_window_cp28

0xe6f7,	// (0x00058832) grid_tb_float_ext_pane

0xe701,	// (0x0005883c) cell_tb_float_ext_pane_ParamLimits

0xe701,	// (0x0005883c) cell_tb_float_ext_pane

0xe71b,	// (0x00058856) cell_tb_float_ext_pane_g1

0xe724,	// (0x0005885f) grid_highlight_pane_cp12

0x6604,	// (0x0005073f) cell_last_hwr_side_pane_ParamLimits

0x6604,	// (0x0005073f) cell_last_hwr_side_pane

0xc2a7,	// (0x000563e2) cell_last_hwr_side_pane_g1

0xe72d,	// (0x00058868) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x00059f53) cell_last_hwr_side_pane_g

0x6d62,	// (0x00050e9d) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6d62,	// (0x00050e9d) vkb2_area_bottom_space_btn_pane

0x671a,	// (0x00050855) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1f5,	// (0x00058330) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6ff8,	// (0x00051133) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7017,	// (0x00051152) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7017,	// (0x00051152) vkb2_area_bottom_space_btn_pane_g1

0x7051,	// (0x0005118c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7051,	// (0x0005118c) vkb2_area_bottom_space_btn_pane_g2

0x7087,	// (0x000511c2) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7087,	// (0x000511c2) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x00059f58) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x00059f58) vkb2_area_bottom_space_btn_pane_g

0x6578,	// (0x000506b3) cel_fep_hwr_func_pane_ParamLimits

0x6578,	// (0x000506b3) cel_fep_hwr_func_pane

0x65b4,	// (0x000506ef) cell_hwr_side_button_pane_ParamLimits

0x65b4,	// (0x000506ef) cell_hwr_side_button_pane

0xdbb0,	// (0x00057ceb) aid_area_touch_clock_ParamLimits

0x8246,	// (0x00052381) bg_uniindi_top_pane_ParamLimits

0xdbc2,	// (0x00057cfd) uniindi_top_pane_g1_ParamLimits

0xdbd8,	// (0x00057d13) uniindi_top_pane_g2_ParamLimits

0xdbe4,	// (0x00057d1f) uniindi_top_pane_g3_ParamLimits

0xdbf5,	// (0x00057d30) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x00059e6b) uniindi_top_pane_g_ParamLimits

0xdc02,	// (0x00057d3d) uniindi_top_pane_t1_ParamLimits

0x8246,	// (0x00052381) bg_vkb2_func_pane_cp01_ParamLimits

0x8246,	// (0x00052381) bg_vkb2_func_pane_cp01

0xe736,	// (0x00058871) cel_fep_hwr_func_pane_g1_ParamLimits

0xe736,	// (0x00058871) cel_fep_hwr_func_pane_g1

0x8246,	// (0x00052381) bg_vkb2_func_pane_cp02_ParamLimits

0x8246,	// (0x00052381) bg_vkb2_func_pane_cp02

0xe736,	// (0x00058871) cell_hwr_side_button_pane_g1_ParamLimits

0xe736,	// (0x00058871) cell_hwr_side_button_pane_g1

0x9ba0,	// (0x00053cdb) status_pane_g4_ParamLimits

0x9ba0,	// (0x00053cdb) status_pane_g4

0x9bba,	// (0x00053cf5) status_pane_t1

0xbffb,	// (0x00056136) form2_midp_gauge_slider_cont_pane

0xc003,	// (0x0005613e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc015,	// (0x00056150) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc027,	// (0x00056162) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x00059c2b) form2_midp_gauge_slider_pane_t_ParamLimits

0xc039,	// (0x00056174) form2_midp_slider_pane_ParamLimits

0x69d1,	// (0x00050b0c) aid_size_cell_func_vkb2_ParamLimits

0x69d1,	// (0x00050b0c) aid_size_cell_func_vkb2

0xe6d7,	// (0x00058812) slider_pane_g4_ParamLimits

0xe6d7,	// (0x00058812) slider_pane_g4

0x70d1,	// (0x0005120c) form2_midp_gauge_slider_pane_t2_cp01

0x70df,	// (0x0005121a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x70df,	// (0x0005121a) form2_midp_gauge_slider_pane_t3_cp01

0x70fc,	// (0x00051237) form2_midp_slider_pane_cp01

0x7ec9,	// (0x00052004) navi_smil_pane

0xe76f,	// (0x000588aa) navi_smil_pane_g1

0xe777,	// (0x000588b2) navi_smil_pane_t1

0xe744,	// (0x0005887f) form2_midp_slider_pane_g1

0xe74d,	// (0x00058888) form2_midp_slider_pane_g2

0xe755,	// (0x00058890) form2_midp_slider_pane_g3

0xe744,	// (0x0005887f) form2_midp_slider_pane_g4

0xe75d,	// (0x00058898) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x00059f61) form2_midp_slider_pane_g

0x70c1,	// (0x000511fc) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x70c1,	// (0x000511fc) vkb2_area_bottom_space_btn_pane_g4

0x99cf,	// (0x00053b0a) lc0_navi_pane_ParamLimits

0x99cf,	// (0x00053b0a) lc0_navi_pane

0x9a45,	// (0x00053b80) lc0_stat_indi_pane_ParamLimits

0x9a45,	// (0x00053b80) lc0_stat_indi_pane

0x9a5c,	// (0x00053b97) ls0_title_pane_ParamLimits

0x9a5c,	// (0x00053b97) ls0_title_pane

0x8838,	// (0x00052973) bg_popup_sub_pane_cp14_ParamLimits

0xdb97,	// (0x00057cd2) list_uniindi_pane_ParamLimits

0xdba3,	// (0x00057cde) uniindi_top_pane_ParamLimits

0xdc3f,	// (0x00057d7a) list_single_uniindi_pane_g1_ParamLimits

0xdc52,	// (0x00057d8d) list_single_uniindi_pane_t1_ParamLimits

0x7105,	// (0x00051240) lc0_stat_clock_pane_ParamLimits

0x7105,	// (0x00051240) lc0_stat_clock_pane

0xe785,	// (0x000588c0) lc0_stat_indi_pane_g1_ParamLimits

0xe785,	// (0x000588c0) lc0_stat_indi_pane_g1

0xe792,	// (0x000588cd) lc0_stat_indi_pane_g2_ParamLimits

0xe792,	// (0x000588cd) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x00059f6c) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x00059f6c) lc0_stat_indi_pane_g

0x7112,	// (0x0005124d) lc0_uni_indicator_pane_ParamLimits

0x7112,	// (0x0005124d) lc0_uni_indicator_pane

0xe79f,	// (0x000588da) ls0_title_pane_g1_ParamLimits

0xe79f,	// (0x000588da) ls0_title_pane_g1

0xe7b3,	// (0x000588ee) ls0_title_pane_t1_ParamLimits

0xe7b3,	// (0x000588ee) ls0_title_pane_t1

0x711f,	// (0x0005125a) lc0_uni_indicator_pane_g1_ParamLimits

0x711f,	// (0x0005125a) lc0_uni_indicator_pane_g1

0xe7e9,	// (0x00058924) lc0_stat_clock_pane_t1

0x49d9,	// (0x0004eb14) main_ai5_pane

0xe7f7,	// (0x00058932) ai5_sk_pane_ParamLimits

0xe7f7,	// (0x00058932) ai5_sk_pane

0xe804,	// (0x0005893f) cell_ai5_widget_pane_ParamLimits

0xe804,	// (0x0005893f) cell_ai5_widget_pane

0xe8b6,	// (0x000589f1) aid_size_cell_widget_grid

0xe8cc,	// (0x00058a07) bg_ai5_widget_pane_ParamLimits

0xe8cc,	// (0x00058a07) bg_ai5_widget_pane

0xe940,	// (0x00058a7b) cell_ai5_widget_pane_g2

0xe950,	// (0x00058a8b) cell_ai5_widget_pane_g3

0xe967,	// (0x00058aa2) cell_ai5_widget_pane_g4

0xe973,	// (0x00058aae) cell_ai5_widget_pane_g5

0xe97f,	// (0x00058aba) cell_ai5_widget_pane_g6

0xe98b,	// (0x00058ac6) cell_ai5_widget_pane_g7

0xe9d3,	// (0x00058b0e) cell_ai5_widget_pane_t1_ParamLimits

0xe9d3,	// (0x00058b0e) cell_ai5_widget_pane_t1

0xe9f0,	// (0x00058b2b) cell_ai5_widget_pane_t2_ParamLimits

0xe9f0,	// (0x00058b2b) cell_ai5_widget_pane_t2

0xea08,	// (0x00058b43) cell_ai5_widget_pane_t3_ParamLimits

0xea08,	// (0x00058b43) cell_ai5_widget_pane_t3

0xea20,	// (0x00058b5b) cell_ai5_widget_pane_t4_ParamLimits

0xea20,	// (0x00058b5b) cell_ai5_widget_pane_t4

0xea3d,	// (0x00058b78) cell_ai5_widget_pane_t5_ParamLimits

0xea3d,	// (0x00058b78) cell_ai5_widget_pane_t5

0xea5c,	// (0x00058b97) cell_ai5_widget_pane_t6_ParamLimits

0xea5c,	// (0x00058b97) cell_ai5_widget_pane_t6

0xea6e,	// (0x00058ba9) cell_ai5_widget_pane_t7_ParamLimits

0xea6e,	// (0x00058ba9) cell_ai5_widget_pane_t7

0xea87,	// (0x00058bc2) cell_ai5_widget_pane_t8_ParamLimits

0xea87,	// (0x00058bc2) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x00059f86) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x00059f86) cell_ai5_widget_pane_t

0xeadb,	// (0x00058c16) grid_ai5_widget_pane

0x8838,	// (0x00052973) highlight_cell_ai5_widget_pane_ParamLimits

0x8838,	// (0x00052973) highlight_cell_ai5_widget_pane

0xeaf2,	// (0x00058c2d) ai5_sk_left_pane

0xeafc,	// (0x00058c37) ai5_sk_middle_pane

0xeb06,	// (0x00058c41) ai5_sk_right_pane

0xeb10,	// (0x00058c4b) bg_ai5_widget_pane_g1_ParamLimits

0xeb10,	// (0x00058c4b) bg_ai5_widget_pane_g1

0xeb1c,	// (0x00058c57) bg_ai5_widget_pane_g2_ParamLimits

0xeb1c,	// (0x00058c57) bg_ai5_widget_pane_g2

0xeb28,	// (0x00058c63) bg_ai5_widget_pane_g3_ParamLimits

0xeb28,	// (0x00058c63) bg_ai5_widget_pane_g3

0xeb34,	// (0x00058c6f) bg_ai5_widget_pane_g4_ParamLimits

0xeb34,	// (0x00058c6f) bg_ai5_widget_pane_g4

0xeb40,	// (0x00058c7b) bg_ai5_widget_pane_g5_ParamLimits

0xeb40,	// (0x00058c7b) bg_ai5_widget_pane_g5

0xeb4c,	// (0x00058c87) bg_ai5_widget_pane_g6_ParamLimits

0xeb4c,	// (0x00058c87) bg_ai5_widget_pane_g6

0xeb58,	// (0x00058c93) bg_ai5_widget_pane_g7_ParamLimits

0xeb58,	// (0x00058c93) bg_ai5_widget_pane_g7

0xeb64,	// (0x00058c9f) bg_ai5_widget_pane_g8_ParamLimits

0xeb64,	// (0x00058c9f) bg_ai5_widget_pane_g8

0xeb70,	// (0x00058cab) bg_ai5_widget_pane_g9_ParamLimits

0xeb70,	// (0x00058cab) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x00059f9b) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x00059f9b) bg_ai5_widget_pane_g

0xeba2,	// (0x00058cdd) cell_shortcut_ai5_widget_pane_ParamLimits

0xeba2,	// (0x00058cdd) cell_shortcut_ai5_widget_pane

0x94bf,	// (0x000535fa) bg_cell_shortcut_ai5_widget_pane

0xebb3,	// (0x00058cee) cell_grid_ai5_widget_pane_g1

0x94bf,	// (0x000535fa) highlight_cell_shortcut_ai5_widget_pane

0x9d27,	// (0x00053e62) ai5_sk_left_pane_g1

0xebbc,	// (0x00058cf7) ai5_sk_left_pane_g2

0xebc4,	// (0x00058cff) ai5_sk_left_pane_g3

0xebcc,	// (0x00058d07) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x00059fae) ai5_sk_left_pane_g

0xebd4,	// (0x00058d0f) ai5_sk_left_pane_t1

0x9d2f,	// (0x00053e6a) ai5_sk_right_pane_g1

0xebe2,	// (0x00058d1d) ai5_sk_right_pane_g2

0xebea,	// (0x00058d25) ai5_sk_right_pane_g3

0xebf2,	// (0x00058d2d) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x00059fb7) ai5_sk_right_pane_g

0xebfa,	// (0x00058d35) ai5_sk_right_pane_t1

0x9d2f,	// (0x00053e6a) ai5_sk_middle_pane_g1

0x9d27,	// (0x00053e62) ai5_sk_middle_pane_g2

0x9d47,	// (0x00053e82) ai5_sk_middle_pane_g3

0xebea,	// (0x00058d25) ai5_sk_middle_pane_g4

0xebc4,	// (0x00058cff) ai5_sk_middle_pane_g5

0xec08,	// (0x00058d43) ai5_sk_middle_pane_g6

0xec10,	// (0x00058d4b) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x00059fc0) ai5_sk_middle_pane_g

0x984f,	// (0x0005398a) aid_touch_area_size_lc0_ParamLimits

0x984f,	// (0x0005398a) aid_touch_area_size_lc0

0x6749,	// (0x00050884) cell_hwr_candidate_pane_t1_ParamLimits

0x986b,	// (0x000539a6) aid_touch_navi_pane

0x9b4a,	// (0x00053c85) status_dt_navi_pane_ParamLimits

0x9b4a,	// (0x00053c85) status_dt_navi_pane

0x9b57,	// (0x00053c92) status_dt_sta_pane_ParamLimits

0x9b57,	// (0x00053c92) status_dt_sta_pane

0xec18,	// (0x00058d53) dt_sta_controll_pane

0xec25,	// (0x00058d60) dt_sta_indi_pane

0xec36,	// (0x00058d71) dt_sta_title_pane

0x8246,	// (0x00052381) bg_dt_sta_indi_pane_ParamLimits

0x8246,	// (0x00052381) bg_dt_sta_indi_pane

0xec49,	// (0x00058d84) dt_sta_battery_pane

0xec51,	// (0x00058d8c) dt_sta_indi_pane_g1

0xec5a,	// (0x00058d95) dt_sta_indi_pane_g2

0xec63,	// (0x00058d9e) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x00059fcf) dt_sta_indi_pane_g

0xec6c,	// (0x00058da7) dt_sta_signal_pane

0x8838,	// (0x00052973) bg_dt_sta_title_pane_ParamLimits

0x8838,	// (0x00052973) bg_dt_sta_title_pane

0xec75,	// (0x00058db0) dt_sta_title_pane_g1

0xec7d,	// (0x00058db8) dt_sta_title_pane_t1_ParamLimits

0xec7d,	// (0x00058db8) dt_sta_title_pane_t1

0x7ec9,	// (0x00052004) bg_dt_sta_control_pane

0xec92,	// (0x00058dcd) dt_sta_controll_pane_g1

0xec9b,	// (0x00058dd6) bg_dt_sta_title_pane_g1

0xeca4,	// (0x00058ddf) bg_dt_sta_title_pane_g2

0xecad,	// (0x00058de8) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x00059fd6) bg_dt_sta_title_pane_g

0xc2a7,	// (0x000563e2) bg_dt_sta_indi_pane_g1

0xecb6,	// (0x00058df1) dt_sta_signal_pane_g1

0xecbe,	// (0x00058df9) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x00059fdd) dt_sta_signal_pane_g

0xecc6,	// (0x00058e01) dt_sta_battery_pane_g1

0xeccf,	// (0x00058e0a) dt_sta_battery_pane_t1

0xc2a7,	// (0x000563e2) bg_dt_sta_control_pane_g1

0x8fbe,	// (0x000530f9) fep_china_uni_eep_pane

0x8fc6,	// (0x00053101) fep_china_uni_entry_pane_ParamLimits

0x8fd6,	// (0x00053111) popup_fep_china_uni_window_g1_ParamLimits

0x8fe6,	// (0x00053121) popup_fep_china_uni_window_g2_ParamLimits

0x8fe6,	// (0x00053121) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005985d) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005985d) popup_fep_china_uni_window_g

0xecde,	// (0x00058e19) fep_china_uni_eep_pane_g1

0xece6,	// (0x00058e21) fep_china_uni_eep_pane_t1

0xe766,	// (0x000588a1) aid_touch_area_size_smil_player

0x99c7,	// (0x00053b02) lc0_clock_pane

0x9bae,	// (0x00053ce9) status_pane_g5_ParamLimits

0x9bae,	// (0x00053ce9) status_pane_g5

0x5bc5,	// (0x0004fd00) popup_keymap_window

0x9b6c,	// (0x00053ca7) status_icon_pane

0xe950,	// (0x00058a8b) cell_ai5_widget_pane_g3_ParamLimits

0xe967,	// (0x00058aa2) cell_ai5_widget_pane_g4_ParamLimits

0xe973,	// (0x00058aae) cell_ai5_widget_pane_g5_ParamLimits

0xe997,	// (0x00058ad2) cell_ai5_widget_pane_g8_ParamLimits

0xe997,	// (0x00058ad2) cell_ai5_widget_pane_g8

0xe9ab,	// (0x00058ae6) cell_ai5_widget_pane_g9_ParamLimits

0xe9ab,	// (0x00058ae6) cell_ai5_widget_pane_g9

0xe9bf,	// (0x00058afa) cell_ai5_widget_pane_g10_ParamLimits

0xe9bf,	// (0x00058afa) cell_ai5_widget_pane_g10

0xecf5,	// (0x00058e30) status_icon_pane_g1

0x7ec9,	// (0x00052004) bg_popup_sub_pane_cp13

0xecfd,	// (0x00058e38) popup_keymap_window_t1

0x9794,	// (0x000538cf) control_pane_g6_ParamLimits

0x9794,	// (0x000538cf) control_pane_g6

0x97a1,	// (0x000538dc) control_pane_g7_ParamLimits

0x97a1,	// (0x000538dc) control_pane_g7

0x97ae,	// (0x000538e9) control_pane_g8_ParamLimits

0x97ae,	// (0x000538e9) control_pane_g8

0xec18,	// (0x00058d53) dt_sta_controll_pane_ParamLimits

0xec25,	// (0x00058d60) dt_sta_indi_pane_ParamLimits

0xec36,	// (0x00058d71) dt_sta_title_pane_ParamLimits

0x8764,	// (0x0005289f) aid_size_touch_scroll_bar_cale

0x4ab2,	// (0x0004ebed) popup_discreet_window_ParamLimits

0x4ab2,	// (0x0004ebed) popup_discreet_window

0x4b3a,	// (0x0004ec75) popup_sk_window

0xa394,	// (0x000544cf) bg_popup_sub_pane_cp28_ParamLimits

0xa394,	// (0x000544cf) bg_popup_sub_pane_cp28

0xed0b,	// (0x00058e46) popup_discreet_window_g1_ParamLimits

0xed0b,	// (0x00058e46) popup_discreet_window_g1

0xed2b,	// (0x00058e66) popup_discreet_window_t1_ParamLimits

0xed2b,	// (0x00058e66) popup_discreet_window_t1

0xed49,	// (0x00058e84) popup_discreet_window_t2_ParamLimits

0xed49,	// (0x00058e84) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x00059fe2) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x00059fe2) popup_discreet_window_t

0x7133,	// (0x0005126e) popup_sk_window_g1

0x713d,	// (0x00051278) popup_sk_window_g2

0x0001,

0xfeae,	// (0x00059fe9) popup_sk_window_g

0x7145,	// (0x00051280) popup_sk_window_t1

0x7153,	// (0x0005128e) popup_sk_window_t1_copy1

0xe940,	// (0x00058a7b) cell_ai5_widget_pane_g2_ParamLimits

0xea99,	// (0x00058bd4) cell_ai5_widget_pane_t9_ParamLimits

0xea99,	// (0x00058bd4) cell_ai5_widget_pane_t9

0x7ec9,	// (0x00052004) main_fep_fshwr2_pane

0x7161,	// (0x0005129c) aid_fshwr2_btn_pane

0x716d,	// (0x000512a8) aid_fshwr2_syb_pane

0x7179,	// (0x000512b4) aid_fshwr2_txt_pane

0x7185,	// (0x000512c0) fshwr2_func_candi_pane

0x719a,	// (0x000512d5) fshwr2_hwr_syb_pane

0x71aa,	// (0x000512e5) fshwr2_icf_pane

0x49d9,	// (0x0004eb14) fshwr2_icf_bg_pane

0x71d3,	// (0x0005130e) fshwr2_icf_pane_t1_ParamLimits

0x71d3,	// (0x0005130e) fshwr2_icf_pane_t1

0x8eac,	// (0x00052fe7) fshwr2_func_candi_pane_g1

0xed9b,	// (0x00058ed6) fshwr2_func_candi_row_pane_ParamLimits

0xed9b,	// (0x00058ed6) fshwr2_func_candi_row_pane

0x71eb,	// (0x00051326) cell_fshwr2_syb_pane_ParamLimits

0x71eb,	// (0x00051326) cell_fshwr2_syb_pane

0x671a,	// (0x00050855) fshwr2_hwr_syb_pane_g1_ParamLimits

0x671a,	// (0x00050855) fshwr2_hwr_syb_pane_g1

0x49d9,	// (0x0004eb14) bg_popup_call_pane_cp01

0x7201,	// (0x0005133c) fshwr2_func_candi_cell_pane_ParamLimits

0x7201,	// (0x0005133c) fshwr2_func_candi_cell_pane

0xedab,	// (0x00058ee6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xedab,	// (0x00058ee6) fshwr2_func_candi_cell_bg_pane

0x724c,	// (0x00051387) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x724c,	// (0x00051387) fshwr2_func_candi_cell_pane_g1

0x7274,	// (0x000513af) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7274,	// (0x000513af) fshwr2_func_candi_cell_pane_t1

0x49d9,	// (0x0004eb14) bg_button_pane_cp08

0xedb7,	// (0x00058ef2) cell_fshwr2_syb_bg_pane

0x7287,	// (0x000513c2) cell_fshwr2_syb_bg_pane_g1

0x728f,	// (0x000513ca) cell_fshwr2_syb_bg_pane_t1

0x8838,	// (0x00052973) main_tmo_pane

0xaea3,	// (0x00054fde) uni_indicator_pane_g1_ParamLimits

0xaeb9,	// (0x00054ff4) uni_indicator_pane_g2_ParamLimits

0xaecf,	// (0x0005500a) uni_indicator_pane_g3_ParamLimits

0xaee2,	// (0x0005501d) uni_indicator_pane_g4_ParamLimits

0xaee2,	// (0x0005501d) uni_indicator_pane_g4

0xaef6,	// (0x00055031) uni_indicator_pane_g5_ParamLimits

0xaef6,	// (0x00055031) uni_indicator_pane_g5

0xaef6,	// (0x00055031) uni_indicator_pane_g6_ParamLimits

0xaef6,	// (0x00055031) uni_indicator_pane_g6

0xf926,	// (0x00059a61) uni_indicator_pane_g_ParamLimits

0xd78e,	// (0x000578c9) popup_tmo_note_window_ParamLimits

0xd78e,	// (0x000578c9) popup_tmo_note_window

0x69b3,	// (0x00050aee) fshwr2_bg_pane

0x7265,	// (0x000513a0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7265,	// (0x000513a0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x00059fee) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x00059fee) fshwr2_func_candi_cell_pane_g

0x6702,	// (0x0005083d) bg_popup_window_pane_cp01

0x729e,	// (0x000513d9) bg_popup_window_pane_g1_cp01

0xedbf,	// (0x00058efa) bg_popup_window_pane_cp22_ParamLimits

0xedbf,	// (0x00058efa) bg_popup_window_pane_cp22

0xedcd,	// (0x00058f08) listscroll_tmo_link_pane_ParamLimits

0xedcd,	// (0x00058f08) listscroll_tmo_link_pane

0xee0d,	// (0x00058f48) popup_tmo_note_window_g1_ParamLimits

0xee0d,	// (0x00058f48) popup_tmo_note_window_g1

0xee1a,	// (0x00058f55) tmo_note_info_pane_ParamLimits

0xee1a,	// (0x00058f55) tmo_note_info_pane

0xee34,	// (0x00058f6f) list_tmo_note_info_pane_g1_ParamLimits

0xee34,	// (0x00058f6f) list_tmo_note_info_pane_g1

0xee4b,	// (0x00058f86) list_tmo_note_info_pane_g2_ParamLimits

0xee4b,	// (0x00058f86) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x00059ff3) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x00059ff3) list_tmo_note_info_pane_g

0xee67,	// (0x00058fa2) list_tmo_note_info_text_pane_ParamLimits

0xee67,	// (0x00058fa2) list_tmo_note_info_text_pane

0xeee8,	// (0x00059023) list_tmo_link_pane

0xeef5,	// (0x00059030) scroll_pane_cp20

0xef02,	// (0x0005903d) list_single_tmo_link_pane_ParamLimits

0xef02,	// (0x0005903d) list_single_tmo_link_pane

0xef12,	// (0x0005904d) list_single_tmo_link_pane_t1

0xef20,	// (0x0005905b) list_tmo_note_info_text_pane_t1_ParamLimits

0xef20,	// (0x0005905b) list_tmo_note_info_text_pane_t1

0x88e3,	// (0x00052a1e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88e3,	// (0x00052a1e) aid_size_touch_scroll_bar_cp01

0x528e,	// (0x0004f3c9) aid_size_touch_slider_marker

0x4b22,	// (0x0004ec5d) popup_settings_window_ParamLimits

0x4b22,	// (0x0004ec5d) popup_settings_window

0x5a4a,	// (0x0004fb85) popup_candi_list_indi_window

0x986b,	// (0x000539a6) aid_touch_navi_pane_ParamLimits

0x690e,	// (0x00050a49) rs_clock_indi_pane

0x6917,	// (0x00050a52) sctrl_sk_bottom_pane_ParamLimits

0x6928,	// (0x00050a63) sctrl_sk_top_pane_ParamLimits

0x6a2b,	// (0x00050b66) popup_fep_tooltip_window

0xe8b6,	// (0x000589f1) aid_size_cell_widget_grid_ParamLimits

0xe92b,	// (0x00058a66) cell_ai5_widget_pane_g1_ParamLimits

0xe92b,	// (0x00058a66) cell_ai5_widget_pane_g1

0xe97f,	// (0x00058aba) cell_ai5_widget_pane_g6_ParamLimits

0xe98b,	// (0x00058ac6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x00059f71) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x00059f71) cell_ai5_widget_pane_g

0xeabd,	// (0x00058bf8) cell_ai5_widget_pane_t10_ParamLimits

0xeabd,	// (0x00058bf8) cell_ai5_widget_pane_t10

0xeadb,	// (0x00058c16) grid_ai5_widget_pane_ParamLimits

0xeb7c,	// (0x00058cb7) cell_contacts_ai5_widget_pane_ParamLimits

0xeb7c,	// (0x00058cb7) cell_contacts_ai5_widget_pane

0xed5e,	// (0x00058e99) popup_discreet_window_t3_ParamLimits

0xed5e,	// (0x00058e99) popup_discreet_window_t3

0x71bf,	// (0x000512fa) popup_fshwr2_char_preview_window_ParamLimits

0x71bf,	// (0x000512fa) popup_fshwr2_char_preview_window

0xee85,	// (0x00058fc0) tmo_note_info_pane_t1

0xee9a,	// (0x00058fd5) tmo_note_info_pane_t2

0xeeaf,	// (0x00058fea) tmo_note_info_pane_t3

0xeec4,	// (0x00058fff) tmo_note_info_pane_t4

0xeed6,	// (0x00059011) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x00059ff8) tmo_note_info_pane_t

0xeee8,	// (0x00059023) list_tmo_link_pane_ParamLimits

0xeef5,	// (0x00059030) scroll_pane_cp20_ParamLimits

0x49d9,	// (0x0004eb14) bg_popup_fep_char_preview_window_cp01

0xef39,	// (0x00059074) popup_fshwr2_char_preview_window_t1

0xef47,	// (0x00059082) popup_candi_list_indi_window_g1

0xef50,	// (0x0005908b) bg_cell_contacts_ai5_widget_pane

0xef5c,	// (0x00059097) cell_contacts_ai5_widget_pane_g1

0xc951,	// (0x00056a8c) cell_contacts_ai5_widget_pane_g2

0xef71,	// (0x000590ac) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x0005a003) cell_contacts_ai5_widget_pane_g

0xef7d,	// (0x000590b8) cell_contacts_ai5_widget_pane_t1

0x8838,	// (0x00052973) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff4,	// (0x0005912f) settings_container_pane

0x94bf,	// (0x000535fa) listscroll_set_pane_copy1

0xb9c7,	// (0x00055b02) scroll_pane_cp121_copy1

0xa145,	// (0x00054280) set_content_pane_copy1

0xf000,	// (0x0005913b) aid_height_set_list_copy1_ParamLimits

0xf000,	// (0x0005913b) aid_height_set_list_copy1

0xb0ee,	// (0x00055229) aid_size_parent_copy1_ParamLimits

0xb0ee,	// (0x00055229) aid_size_parent_copy1

0xf00c,	// (0x00059147) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf00c,	// (0x00059147) button_value_adjust_pane_cp6_copy1

0x9809,	// (0x00053944) list_highlight_pane_cp2_copy1_ParamLimits

0x9809,	// (0x00053944) list_highlight_pane_cp2_copy1

0xf020,	// (0x0005915b) list_set_pane_copy1_ParamLimits

0xf020,	// (0x0005915b) list_set_pane_copy1

0xef8f,	// (0x000590ca) main_pane_set_t1_copy1_ParamLimits

0xef8f,	// (0x000590ca) main_pane_set_t1_copy1

0xefc9,	// (0x00059104) main_pane_set_t2_copy1_ParamLimits

0xefc9,	// (0x00059104) main_pane_set_t2_copy1

0xf0cd,	// (0x00059208) main_pane_set_t3_copy1

0xf0db,	// (0x00059216) main_pane_set_t4_copy1

0xefe8,	// (0x00059123) set_content_pane_g1_copy1_ParamLimits

0xefe8,	// (0x00059123) set_content_pane_g1_copy1

0xf0e9,	// (0x00059224) setting_code_pane_copy1

0xf0f1,	// (0x0005922c) setting_slider_graphic_pane_copy1

0xf0f1,	// (0x0005922c) setting_slider_pane_copy1

0xf0f1,	// (0x0005922c) setting_text_pane_copy1

0xf0f1,	// (0x0005922c) setting_volume_pane_copy1

0xf0e9,	// (0x00059224) settings_code_pane_cp2_copy1

0xf0f9,	// (0x00059234) settings_code_pane_cp_copy1_ParamLimits

0xf0f9,	// (0x00059234) settings_code_pane_cp_copy1

0x72a7,	// (0x000513e2) volume_set_pane_copy1

0xf10d,	// (0x00059248) volume_set_pane_g10_copy1

0xf115,	// (0x00059250) volume_set_pane_g1_copy1

0xf11d,	// (0x00059258) volume_set_pane_g2_copy1

0xf125,	// (0x00059260) volume_set_pane_g3_copy1

0xf12d,	// (0x00059268) volume_set_pane_g4_copy1

0xf135,	// (0x00059270) volume_set_pane_g5_copy1

0xf13d,	// (0x00059278) volume_set_pane_g6_copy1

0xf145,	// (0x00059280) volume_set_pane_g7_copy1

0xf14d,	// (0x00059288) volume_set_pane_g8_copy1

0xf155,	// (0x00059290) volume_set_pane_g9_copy1

0x7fbd,	// (0x000520f8) bg_set_opt_pane_cp_copy1_ParamLimits

0x7fbd,	// (0x000520f8) bg_set_opt_pane_cp_copy1

0x72af,	// (0x000513ea) setting_slider_pane_t1_copy1_ParamLimits

0x72af,	// (0x000513ea) setting_slider_pane_t1_copy1

0x72cd,	// (0x00051408) setting_slider_pane_t2_copy1_ParamLimits

0x72cd,	// (0x00051408) setting_slider_pane_t2_copy1

0x72e7,	// (0x00051422) setting_slider_pane_t3_copy1_ParamLimits

0x72e7,	// (0x00051422) setting_slider_pane_t3_copy1

0x72ff,	// (0x0005143a) slider_set_pane_copy1_ParamLimits

0x72ff,	// (0x0005143a) slider_set_pane_copy1

0x8884,	// (0x000529bf) set_opt_bg_pane_g1_copy2

0x888c,	// (0x000529c7) set_opt_bg_pane_g2_copy2

0xf15d,	// (0x00059298) set_opt_bg_pane_g3_copy2

0x889c,	// (0x000529d7) set_opt_bg_pane_g4_copy2

0x88a4,	// (0x000529df) set_opt_bg_pane_g5_copy2

0x88ac,	// (0x000529e7) set_opt_bg_pane_g6_copy2

0xf167,	// (0x000592a2) set_opt_bg_pane_g7_copy2

0xf16f,	// (0x000592aa) set_opt_bg_pane_g8_copy2

0xf179,	// (0x000592b4) set_opt_bg_pane_g9_copy2

0x7315,	// (0x00051450) aid_size_touch_slider_mark_copy1_ParamLimits

0x7315,	// (0x00051450) aid_size_touch_slider_mark_copy1

0xf183,	// (0x000592be) slider_set_pane_g1_copy1

0x7329,	// (0x00051464) slider_set_pane_g2_copy1

0x6343,	// (0x0005047e) slider_set_pane_g3_copy1_ParamLimits

0x6343,	// (0x0005047e) slider_set_pane_g3_copy1

0x6357,	// (0x00050492) slider_set_pane_g4_copy1_ParamLimits

0x6357,	// (0x00050492) slider_set_pane_g4_copy1

0x636f,	// (0x000504aa) slider_set_pane_g5_copy1_ParamLimits

0x636f,	// (0x000504aa) slider_set_pane_g5_copy1

0x6343,	// (0x0005047e) slider_set_pane_g6_copy1_ParamLimits

0x6343,	// (0x0005047e) slider_set_pane_g6_copy1

0x7331,	// (0x0005146c) slider_set_pane_g7_copy1_ParamLimits

0x7331,	// (0x0005146c) slider_set_pane_g7_copy1

0x7edd,	// (0x00052018) bg_set_opt_pane_cp2_copy1

0xf18c,	// (0x000592c7) setting_slider_graphic_pane_g1_copy1

0xf195,	// (0x000592d0) setting_slider_graphic_pane_t1_copy1

0xf1a5,	// (0x000592e0) setting_slider_graphic_pane_t2_copy1

0xf1b5,	// (0x000592f0) slider_set_pane_cp_copy1

0xf1c5,	// (0x00059300) input_focus_pane_cp1_copy1

0xf1ce,	// (0x00059309) list_set_text_pane_copy1

0xf1d6,	// (0x00059311) setting_text_pane_g1_copy1

0x7e8b,	// (0x00051fc6) set_text_pane_t1_copy1

0xf1c5,	// (0x00059300) input_focus_pane_cp2_copy1

0xf1d6,	// (0x00059311) setting_code_pane_g1_copy1

0xf1df,	// (0x0005931a) setting_code_pane_t1_copy1

0xf1ed,	// (0x00059328) list_set_graphic_pane_copy1

0x7edd,	// (0x00052018) bg_set_opt_pane_cp4_copy1

0x91ba,	// (0x000532f5) list_set_graphic_pane_g1_copy1_ParamLimits

0x91ba,	// (0x000532f5) list_set_graphic_pane_g1_copy1

0xf200,	// (0x0005933b) list_set_graphic_pane_g2_copy1

0x91d2,	// (0x0005330d) list_set_graphic_pane_t1_copy1_ParamLimits

0x91d2,	// (0x0005330d) list_set_graphic_pane_t1_copy1

0xc2a7,	// (0x000563e2) rs_clock_indi_pane_g1

0xf208,	// (0x00059343) rs_clock_indi_pane_t1

0xf216,	// (0x00059351) rs_indi_pane

0xf21e,	// (0x00059359) rs_indi_pane_g1

0xf227,	// (0x00059362) rs_indi_pane_g2

0xf230,	// (0x0005936b) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x0005a00a) rs_indi_pane_g

0x94bf,	// (0x000535fa) bg_popup_preview_window_pane_cp03

0xf239,	// (0x00059374) popup_fep_tooltip_window_t1

0xcf2f,	// (0x0005706a) popup_note2_window_g2_ParamLimits

0xcf2f,	// (0x0005706a) popup_note2_window_g2

0x0001,

0xfc68,	// (0x00059da3) popup_note2_window_g_ParamLimits

0xfc68,	// (0x00059da3) popup_note2_window_g

0xd42a,	// (0x00057565) bg_popup_sub_pane_cp11_ParamLimits

0xd437,	// (0x00057572) cell_ai3_links_pane_g1_ParamLimits

0xd44e,	// (0x00057589) cell_ai3_links_pane_t1

0x7e8b,	// (0x00051fc6) set_text_pane_t1_copy1_ParamLimits

0x93d0,	// (0x0005350b) cell_graphic_popup_pane_cp2_ParamLimits

0x93d0,	// (0x0005350b) cell_graphic_popup_pane_cp2

0xf247,	// (0x00059382) cell_graphic_popup_pane_g1_cp2

0x8577,	// (0x000526b2) cell_graphic_popup_pane_g2_cp2

0xf24f,	// (0x0005938a) cell_graphic_popup_pane_g3_cp2

0xf257,	// (0x00059392) cell_graphic_popup_pane_t2_cp2

0x8588,	// (0x000526c3) grid_highlight_pane_cp3_cp2

0x8bc9,	// (0x00052d04) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8838,	// (0x00052973) main_tmo_pane_ParamLimits

0xd782,	// (0x000578bd) popup_tmo_big_image_note_window

0xe91a,	// (0x00058a55) cell_ai5_widget_list_pane

0xe922,	// (0x00058a5d) cell_ai5_widget_lrg_icon_pane

0xee85,	// (0x00058fc0) tmo_note_info_pane_t1_ParamLimits

0xee9a,	// (0x00058fd5) tmo_note_info_pane_t2_ParamLimits

0xeeaf,	// (0x00058fea) tmo_note_info_pane_t3_ParamLimits

0xeec4,	// (0x00058fff) tmo_note_info_pane_t4_ParamLimits

0xeed6,	// (0x00059011) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x00059ff8) tmo_note_info_pane_t_ParamLimits

0xeff4,	// (0x0005912f) settings_container_pane_ParamLimits

0xf1bd,	// (0x000592f8) indicator_popup_pane_cp5

0xf1bd,	// (0x000592f8) indicator_popup_pane_cp6

0xf1ed,	// (0x00059328) list_set_graphic_pane_copy1_ParamLimits

0x7ec9,	// (0x00052004) bg_popup_window_pane_cp23

0xf265,	// (0x000593a0) popup_tmo_big_image_note_window_g1

0xf26f,	// (0x000593aa) popup_tmo_big_image_note_window_t1

0xf27f,	// (0x000593ba) popup_tmo_big_image_note_window_t2

0xf28f,	// (0x000593ca) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x0005a011) popup_tmo_big_image_note_window_t

0xc2a7,	// (0x000563e2) cell_ai5_widget_lrg_icon_pane_g1

0xf29f,	// (0x000593da) cell_ai5_widget_lrg_icon_pane_t1

0xf2ad,	// (0x000593e8) cell_ai5_widget_list_row_pane_ParamLimits

0xf2ad,	// (0x000593e8) cell_ai5_widget_list_row_pane

0xf2c4,	// (0x000593ff) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c4,	// (0x000593ff) cell_ai5_widget_list_row_pane_g1

0xf2d1,	// (0x0005940c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2d1,	// (0x0005940c) cell_ai5_widget_list_row_pane_t1

0xf302,	// (0x0005943d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf302,	// (0x0005943d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedd,	// (0x0005a018) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x0005a018) cell_ai5_widget_list_row_pane_t

0x49d9,	// (0x0004eb14) main_fep_vtchi_ss_pane

0xf346,	// (0x00059481) popup_fep_char_pre_window

0xf34e,	// (0x00059489) popup_fep_ituss_window

0xf36f,	// (0x000594aa) popup_fep_vkbss_window

0xf399,	// (0x000594d4) grid_vkbss_keypad_pane_ParamLimits

0xf399,	// (0x000594d4) grid_vkbss_keypad_pane

0xf3a5,	// (0x000594e0) ituss_keypad_pane

0x7353,	// (0x0005148e) aid_vkbss_key_offset_ParamLimits

0x7353,	// (0x0005148e) aid_vkbss_key_offset

0x735f,	// (0x0005149a) cell_vkbss_key_pane_ParamLimits

0x735f,	// (0x0005149a) cell_vkbss_key_pane

0xf3b4,	// (0x000594ef) bg_cell_vkbss_key_g1_ParamLimits

0xf3b4,	// (0x000594ef) bg_cell_vkbss_key_g1

0xf3c0,	// (0x000594fb) cell_vkbss_key_3p_pane_ParamLimits

0xf3c0,	// (0x000594fb) cell_vkbss_key_3p_pane

0xf3d4,	// (0x0005950f) cell_vkbss_key_g1_ParamLimits

0xf3d4,	// (0x0005950f) cell_vkbss_key_g1

0xf3e8,	// (0x00059523) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x00059523) cell_vkbss_key_t1

0x7375,	// (0x000514b0) cell_ituss_key_pane_ParamLimits

0x7375,	// (0x000514b0) cell_ituss_key_pane

0xf413,	// (0x0005954e) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x0005954e) bg_cell_ituss_key_g1

0xf41f,	// (0x0005955a) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x0005955a) cell_ituss_key_pane_g1

0x7386,	// (0x000514c1) cell_ituss_key_pane_g2_ParamLimits

0x7386,	// (0x000514c1) cell_ituss_key_pane_g2

0x0002,

0xfee4,	// (0x0005a01f) cell_ituss_key_pane_g_ParamLimits

0xfee4,	// (0x0005a01f) cell_ituss_key_pane_g

0x73b2,	// (0x000514ed) cell_ituss_key_t1_ParamLimits

0x73b2,	// (0x000514ed) cell_ituss_key_t1

0x73ec,	// (0x00051527) cell_ituss_key_t2_ParamLimits

0x73ec,	// (0x00051527) cell_ituss_key_t2

0x741d,	// (0x00051558) cell_ituss_key_t3_ParamLimits

0x741d,	// (0x00051558) cell_ituss_key_t3

0x73ec,	// (0x00051527) cell_ituss_key_t4_ParamLimits

0x73ec,	// (0x00051527) cell_ituss_key_t4

0x0004,

0xfeeb,	// (0x0005a026) cell_ituss_key_t_ParamLimits

0xfeeb,	// (0x0005a026) cell_ituss_key_t

0xf44b,	// (0x00059586) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0005958e) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x00059596) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0005a031) cell_vkbss_key_3p_pane_g

0x49d9,	// (0x0004eb14) bg_popup_fep_char_preview_window_cp02

0x7460,	// (0x0005159b) popup_fep_char_pre_window_t1

0xe8ac,	// (0x000589e7) main_ai5_sk_pane

0xef50,	// (0x0005908b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef5c,	// (0x00059097) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc951,	// (0x00056a8c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef71,	// (0x000590ac) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x0005a003) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef7d,	// (0x000590b8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8838,	// (0x00052973) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x0005959e) main_ai5_sk_pane_g1

0xa1cd,	// (0x00054308) popup_query_code_window_g1

0xf364,	// (0x0005949f) popup_fep_vkb_icf_pane

0xf383,	// (0x000594be) popup_fep_vtchi_icf_pane

0xf46c,	// (0x000595a7) bg_icf_pane

0xf478,	// (0x000595b3) list_vkb_icf_pane

0xf487,	// (0x000595c2) bg_icf_pane_cp01

0xf49a,	// (0x000595d5) vtchi_icf_list_pane

0xf4aa,	// (0x000595e5) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x000595e5) list_vkb_icf_pane_t1

0xf4c0,	// (0x000595fb) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x000595fb) vtchi_icf_list_pane_t1

0xf34e,	// (0x00059489) popup_fep_ituss_window_ParamLimits

0xf383,	// (0x000594be) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a5,	// (0x000594e0) ituss_keypad_pane_ParamLimits

0x7347,	// (0x00051482) ituss_sks_pane

0xf46c,	// (0x000595a7) bg_icf_pane_ParamLimits

0xf32a,	// (0x00059465) icf_edit_indi_pane_ParamLimits

0xf32a,	// (0x00059465) icf_edit_indi_pane

0xf478,	// (0x000595b3) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x000595c2) bg_icf_pane_cp01_ParamLimits

0xf339,	// (0x00059474) icf_edit_indi_pane_cp01_ParamLimits

0xf339,	// (0x00059474) icf_edit_indi_pane_cp01

0xf4a2,	// (0x000595dd) vtchi_query_pane

0xc531,	// (0x0005666c) icf_edit_indi_pane_g1_ParamLimits

0xc531,	// (0x0005666c) icf_edit_indi_pane_g1

0xf531,	// (0x0005966c) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0005966c) icf_edit_indi_pane_g2

0x0001,

0x0032,	// (0x0004a16d) icf_edit_indi_pane_g_ParamLimits

0x0032,	// (0x0004a16d) icf_edit_indi_pane_g

0xf540,	// (0x0005967b) icf_edit_indi_pane_t1

0xf4da,	// (0x00059615) bg_input_focus_pane_cp042

0x875b,	// (0x00052896) vtchi_button_pane

0xf4e3,	// (0x0005961e) vtchi_query_pane_t1

0xf4f1,	// (0x0005962c) vtchi_query_pane_t2

0xf4ff,	// (0x0005963a) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x0005a038) vtchi_query_pane_t

0x49d9,	// (0x0004eb14) bg_button_pane_cp13

0xf50d,	// (0x00059648) vtchi_button_pane_g1

0x746f,	// (0x000515aa) ituss_sks_pane_g1

0x747a,	// (0x000515b5) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x0005a03f) ituss_sks_pane_g

0xf515,	// (0x00059650) ituss_sks_pane_t1

0xf523,	// (0x0005965e) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0005a044) ituss_sks_pane_t

0xbd41,	// (0x00055e7c) indicator_nsta_pane_cp_g1

0xbd49,	// (0x00055e84) indicator_nsta_pane_cp_g2

0xbd51,	// (0x00055e8c) indicator_nsta_pane_cp_g3

0xbd41,	// (0x00055e7c) indicator_nsta_pane_cp_g4

0xbd49,	// (0x00055e84) indicator_nsta_pane_cp_g5

0xbd51,	// (0x00055e8c) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x00059be1) indicator_nsta_pane_cp_g

0xe496,	// (0x000585d1) cell_graphic2_pane_t2_ParamLimits

0xe496,	// (0x000585d1) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x00059efa) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x00059efa) cell_graphic2_pane_t

0xe4c3,	// (0x000585fe) cell_graphic2_control_pane_t1

0x8f6d,	// (0x000530a8) signal_pane_g3_ParamLimits

0x8f6d,	// (0x000530a8) signal_pane_g3

0x8f7f,	// (0x000530ba) signal_pane_g4_ParamLimits

0x8f7f,	// (0x000530ba) signal_pane_g4

0xf314,	// (0x0005944f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf314,	// (0x0005944f) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x00059574) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x00059574) cell_ituss_key_pane_t1

0x9e24,	// (0x00053f5f) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e24,	// (0x00053f5f) form_field_data_wide_pane_vc_t2

0x9e38,	// (0x00053f73) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e38,	// (0x00053f73) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00059949) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00059949) form_field_data_wide_pane_vc_t

0xba09,	// (0x00055b44) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba09,	// (0x00055b44) form_field_slider_wide_pane_vc_t3

0xbae7,	// (0x00055c22) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbae7,	// (0x00055c22) form_field_popup_wide_pane_vc_t2

0xbafe,	// (0x00055c39) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbafe,	// (0x00055c39) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x00059bd0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x00059bd0) form_field_popup_wide_pane_vc_t

0x7161,	// (0x0005129c) aid_fshwr2_btn_pane_ParamLimits

0x716d,	// (0x000512a8) aid_fshwr2_syb_pane_ParamLimits

0x7179,	// (0x000512b4) aid_fshwr2_txt_pane_ParamLimits

0x69b3,	// (0x00050aee) fshwr2_bg_pane_ParamLimits

0x7185,	// (0x000512c0) fshwr2_func_candi_pane_ParamLimits

0x719a,	// (0x000512d5) fshwr2_hwr_syb_pane_ParamLimits

0x71aa,	// (0x000512e5) fshwr2_icf_pane_ParamLimits

0x7a80,	// (0x00051bbb) list_double_graphic_pane_vc_g4_ParamLimits

0x7a80,	// (0x00051bbb) list_double_graphic_pane_vc_g4

0x73a6,	// (0x000514e1) cell_ituss_key_pane_g3_ParamLimits

0x73a6,	// (0x000514e1) cell_ituss_key_pane_g3

0x744e,	// (0x00051589) cell_ituss_key_t5_ParamLimits

0x744e,	// (0x00051589) cell_ituss_key_t5

0xf36f,	// (0x000594aa) popup_fep_vkbss_window_ParamLimits
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

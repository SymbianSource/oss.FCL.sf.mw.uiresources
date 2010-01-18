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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003ca51 };

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
0x755f,	// (0x00043fb0) Screen

0x756b,	// (0x00043fbc) application_window_ParamLimits

0x756b,	// (0x00043fbc) application_window

0x2ada,	// (0x0003f52b) screen_g1

0x58b3,	// (0x00042304) area_bottom_pane_ParamLimits

0x58b3,	// (0x00042304) area_bottom_pane

0x5973,	// (0x000423c4) area_top_pane_ParamLimits

0x5973,	// (0x000423c4) area_top_pane

0x5a07,	// (0x00042458) main_pane_ParamLimits

0x5a07,	// (0x00042458) main_pane

0x2ae4,	// (0x0003f535) misc_graphics

0x9569,	// (0x00045fba) battery_pane_ParamLimits

0x9569,	// (0x00045fba) battery_pane

0xa27c,	// (0x00046ccd) bg_status_flat_pane_g8

0xa284,	// (0x00046cd5) bg_status_flat_pane_g9

0x9631,	// (0x00046082) context_pane_ParamLimits

0x9631,	// (0x00046082) context_pane

0x9755,	// (0x000461a6) navi_pane_ParamLimits

0x9755,	// (0x000461a6) navi_pane

0x97e4,	// (0x00046235) signal_pane_ParamLimits

0x97e4,	// (0x00046235) signal_pane

0x0008,

0xf88f,	// (0x0004c2e0) bg_status_flat_pane_g

0x9851,	// (0x000462a2) status_pane_g1_ParamLimits

0x9851,	// (0x000462a2) status_pane_g1

0x9865,	// (0x000462b6) status_pane_g2_ParamLimits

0x9865,	// (0x000462b6) status_pane_g2

0x9871,	// (0x000462c2) status_pane_g3_ParamLimits

0x9871,	// (0x000462c2) status_pane_g3

0x0004,

0xf7bd,	// (0x0004c20e) status_pane_g_ParamLimits

0xf7bd,	// (0x0004c20e) status_pane_g

0x98a5,	// (0x000462f6) title_pane_ParamLimits

0x98a5,	// (0x000462f6) title_pane

0x98e2,	// (0x00046333) uni_indicator_pane_ParamLimits

0x98e2,	// (0x00046333) uni_indicator_pane

0x8e52,	// (0x000458a3) bg_list_pane_ParamLimits

0x8e52,	// (0x000458a3) bg_list_pane

0x8e72,	// (0x000458c3) find_pane

0x8e7a,	// (0x000458cb) listscroll_app_pane_ParamLimits

0x8e7a,	// (0x000458cb) listscroll_app_pane

0x8e86,	// (0x000458d7) listscroll_form_pane

0x8e8e,	// (0x000458df) listscroll_gen_pane_ParamLimits

0x8e8e,	// (0x000458df) listscroll_gen_pane

0x8e86,	// (0x000458d7) listscroll_set_pane

0x80cf,	// (0x00044b20) main_idle_act_pane

0x8b36,	// (0x00045587) main_idle_trad_pane

0x8b36,	// (0x00045587) main_list_empty_pane

0x8eb4,	// (0x00045905) main_midp_pane

0x8ec0,	// (0x00045911) main_pane_g1_ParamLimits

0x8ec0,	// (0x00045911) main_pane_g1

0x8ece,	// (0x0004591f) popup_ai_message_window_ParamLimits

0x8ece,	// (0x0004591f) popup_ai_message_window

0x8f7e,	// (0x000459cf) popup_fep_china_uni_window_ParamLimits

0x8f7e,	// (0x000459cf) popup_fep_china_uni_window

0x8fde,	// (0x00045a2f) popup_fep_japan_candidate_window_ParamLimits

0x8fde,	// (0x00045a2f) popup_fep_japan_candidate_window

0x9008,	// (0x00045a59) popup_fep_japan_predictive_window_ParamLimits

0x9008,	// (0x00045a59) popup_fep_japan_predictive_window

0x903e,	// (0x00045a8f) popup_find_window

0x904b,	// (0x00045a9c) popup_grid_graphic_window_ParamLimits

0x904b,	// (0x00045a9c) popup_grid_graphic_window

0x9079,	// (0x00045aca) popup_large_graphic_colour_window

0x909f,	// (0x00045af0) popup_menu_window_ParamLimits

0x909f,	// (0x00045af0) popup_menu_window

0x9269,	// (0x00045cba) popup_note_image_window

0x9253,	// (0x00045ca4) popup_note_wait_window_ParamLimits

0x9253,	// (0x00045ca4) popup_note_wait_window

0x9253,	// (0x00045ca4) popup_note_window_ParamLimits

0x9253,	// (0x00045ca4) popup_note_window

0x92cf,	// (0x00045d20) popup_query_code_window_ParamLimits

0x92cf,	// (0x00045d20) popup_query_code_window

0x92e5,	// (0x00045d36) popup_query_data_code_window_ParamLimits

0x92e5,	// (0x00045d36) popup_query_data_code_window

0x9308,	// (0x00045d59) popup_query_data_window_ParamLimits

0x9308,	// (0x00045d59) popup_query_data_window

0x932a,	// (0x00045d7b) popup_query_sat_info_window_ParamLimits

0x932a,	// (0x00045d7b) popup_query_sat_info_window

0x9369,	// (0x00045dba) popup_snote_single_graphic_window_ParamLimits

0x9369,	// (0x00045dba) popup_snote_single_graphic_window

0x9369,	// (0x00045dba) popup_snote_single_text_window_ParamLimits

0x9369,	// (0x00045dba) popup_snote_single_text_window

0x9380,	// (0x00045dd1) popup_sub_window_general

0x94c6,	// (0x00045f17) popup_window_general_ParamLimits

0x94c6,	// (0x00045f17) popup_window_general

0x94df,	// (0x00045f30) power_save_pane

0x6245,	// (0x00042c96) control_pane_g1_ParamLimits

0x6245,	// (0x00042c96) control_pane_g1

0x626e,	// (0x00042cbf) control_pane_g2_ParamLimits

0x626e,	// (0x00042cbf) control_pane_g2

0x8e03,	// (0x00045854) control_pane_g3_ParamLimits

0x8e03,	// (0x00045854) control_pane_g3

0x0007,

0xf7a5,	// (0x0004c1f6) control_pane_g_ParamLimits

0xf7a5,	// (0x0004c1f6) control_pane_g

0x62b9,	// (0x00042d0a) control_pane_t1_ParamLimits

0x62b9,	// (0x00042d0a) control_pane_t1

0x630b,	// (0x00042d5c) control_pane_t2_ParamLimits

0x630b,	// (0x00042d5c) control_pane_t2

0x0002,

0xf7b6,	// (0x0004c207) control_pane_t_ParamLimits

0xf7b6,	// (0x0004c207) control_pane_t

0x8d24,	// (0x00045775) navi_navi_volume_pane_cp1

0x8d2d,	// (0x0004577e) status_small_icon_pane

0x8d35,	// (0x00045786) status_small_pane_g1_ParamLimits

0x8d35,	// (0x00045786) status_small_pane_g1

0x8d69,	// (0x000457ba) status_small_pane_g2_ParamLimits

0x8d69,	// (0x000457ba) status_small_pane_g2

0x8d75,	// (0x000457c6) status_small_pane_g3_ParamLimits

0x8d75,	// (0x000457c6) status_small_pane_g3

0x8d81,	// (0x000457d2) status_small_pane_g4_ParamLimits

0x8d81,	// (0x000457d2) status_small_pane_g4

0x8d8d,	// (0x000457de) status_small_pane_g5_ParamLimits

0x8d8d,	// (0x000457de) status_small_pane_g5

0x8d9c,	// (0x000457ed) status_small_pane_g6_ParamLimits

0x8d9c,	// (0x000457ed) status_small_pane_g6

0x0007,

0xf794,	// (0x0004c1e5) status_small_pane_g_ParamLimits

0xf794,	// (0x0004c1e5) status_small_pane_g

0x8dcc,	// (0x0004581d) status_small_pane_t1

0x8def,	// (0x00045840) status_small_wait_pane_ParamLimits

0x8def,	// (0x00045840) status_small_wait_pane

0x85cd,	// (0x0004501e) aid_levels_signal_ParamLimits

0x85cd,	// (0x0004501e) aid_levels_signal

0x85df,	// (0x00045030) signal_pane_g1_ParamLimits

0x85df,	// (0x00045030) signal_pane_g1

0x85f4,	// (0x00045045) signal_pane_g2_ParamLimits

0x85f4,	// (0x00045045) signal_pane_g2

0x0001,

0xf729,	// (0x0004c17a) signal_pane_g_ParamLimits

0xf729,	// (0x0004c17a) signal_pane_g

0x8609,	// (0x0004505a) context_pane_g1

0x757b,	// (0x00043fcc) title_pane_g1

0x75b1,	// (0x00044002) title_pane_t1

0x7619,	// (0x0004406a) title_pane_t2

0x763f,	// (0x00044090) title_pane_t3

0x0002,

0xf573,	// (0x0004bfc4) title_pane_t

0x98fa,	// (0x0004634b) aid_levels_battery_ParamLimits

0x98fa,	// (0x0004634b) aid_levels_battery

0x990e,	// (0x0004635f) battery_pane_g1_ParamLimits

0x990e,	// (0x0004635f) battery_pane_g1

0x9924,	// (0x00046375) battery_pane_g2_ParamLimits

0x9924,	// (0x00046375) battery_pane_g2

0x0001,

0xf7c8,	// (0x0004c219) battery_pane_g_ParamLimits

0xf7c8,	// (0x0004c219) battery_pane_g

0xabcc,	// (0x0004761d) uni_indicator_pane_g1

0xabe1,	// (0x00047632) uni_indicator_pane_g2

0xabf7,	// (0x00047648) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0004c388) uni_indicator_pane_g

0x89a4,	// (0x000453f5) navi_icon_pane_ParamLimits

0x89a4,	// (0x000453f5) navi_icon_pane

0x88eb,	// (0x0004533c) navi_midp_pane

0x89c0,	// (0x00045411) navi_navi_pane

0x89ca,	// (0x0004541b) navi_text_pane_ParamLimits

0x89ca,	// (0x0004541b) navi_text_pane

0x2ada,	// (0x0003f52b) status_small_wait_pane_g1

0x7a83,	// (0x000444d4) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0004c383) status_small_wait_pane_g

0xa8df,	// (0x00047330) navi_navi_icon_text_pane

0xa8e7,	// (0x00047338) navi_navi_pane_g1_ParamLimits

0xa8e7,	// (0x00047338) navi_navi_pane_g1

0xa8f9,	// (0x0004734a) navi_navi_pane_g2_ParamLimits

0xa8f9,	// (0x0004734a) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0004c351) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0004c351) navi_navi_pane_g

0xa90b,	// (0x0004735c) navi_navi_tabs_pane

0xa914,	// (0x00047365) navi_navi_text_pane

0xa8df,	// (0x00047330) navi_navi_volume_pane

0xa8b8,	// (0x00047309) navi_text_pane_t1

0xa8a9,	// (0x000472fa) navi_icon_pane_g1

0xa7fc,	// (0x0004724d) navi_navi_text_pane_t1

0x663a,	// (0x0004308b) navi_navi_volume_pane_g1

0x6642,	// (0x00043093) volume_small_pane

0xa762,	// (0x000471b3) navi_navi_icon_text_pane_g1

0xa76a,	// (0x000471bb) navi_navi_icon_text_pane_t1

0x89c0,	// (0x00045411) navi_tabs_2_long_pane

0x89c0,	// (0x00045411) navi_tabs_2_pane

0x89c0,	// (0x00045411) navi_tabs_3_long_pane

0x89c0,	// (0x00045411) navi_tabs_3_pane

0x89c0,	// (0x00045411) navi_tabs_4_pane

0x661a,	// (0x0004306b) tabs_2_active_pane_ParamLimits

0x661a,	// (0x0004306b) tabs_2_active_pane

0x662a,	// (0x0004307b) tabs_2_passive_pane_ParamLimits

0x662a,	// (0x0004307b) tabs_2_passive_pane

0x65e8,	// (0x00043039) tabs_3_active_pane_ParamLimits

0x65e8,	// (0x00043039) tabs_3_active_pane

0x65f8,	// (0x00043049) tabs_3_passive_pane_ParamLimits

0x65f8,	// (0x00043049) tabs_3_passive_pane

0x6609,	// (0x0004305a) tabs_3_passive_pane_cp_ParamLimits

0x6609,	// (0x0004305a) tabs_3_passive_pane_cp

0x659c,	// (0x00042fed) tabs_4_active_pane_ParamLimits

0x659c,	// (0x00042fed) tabs_4_active_pane

0x65af,	// (0x00043000) tabs_4_passive_pane_ParamLimits

0x65af,	// (0x00043000) tabs_4_passive_pane

0x65c0,	// (0x00043011) tabs_4_passive_pane_cp_ParamLimits

0x65c0,	// (0x00043011) tabs_4_passive_pane_cp

0x65d1,	// (0x00043022) tabs_4_passive_pane_cp2_ParamLimits

0x65d1,	// (0x00043022) tabs_4_passive_pane_cp2

0x6578,	// (0x00042fc9) tabs_2_long_active_pane_ParamLimits

0x6578,	// (0x00042fc9) tabs_2_long_active_pane

0x658a,	// (0x00042fdb) tabs_2_long_passive_pane_ParamLimits

0x658a,	// (0x00042fdb) tabs_2_long_passive_pane

0x6539,	// (0x00042f8a) tabs_3_long_active_pane_ParamLimits

0x6539,	// (0x00042f8a) tabs_3_long_active_pane

0x654c,	// (0x00042f9d) tabs_3_long_passive_pane_ParamLimits

0x654c,	// (0x00042f9d) tabs_3_long_passive_pane

0x6565,	// (0x00042fb6) tabs_3_long_passive_pane_cp_ParamLimits

0x6565,	// (0x00042fb6) tabs_3_long_passive_pane_cp

0x64df,	// (0x00042f30) volume_small_pane_g1

0x64e8,	// (0x00042f39) volume_small_pane_g2

0x64f1,	// (0x00042f42) volume_small_pane_g3

0x64fa,	// (0x00042f4b) volume_small_pane_g4

0x6503,	// (0x00042f54) volume_small_pane_g5

0x650c,	// (0x00042f5d) volume_small_pane_g6

0x6515,	// (0x00042f66) volume_small_pane_g7

0x651e,	// (0x00042f6f) volume_small_pane_g8

0x6527,	// (0x00042f78) volume_small_pane_g9

0x6530,	// (0x00042f81) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0004c31d) volume_small_pane_g

0x7651,	// (0x000440a2) bg_active_tab_pane_cp2_ParamLimits

0x7651,	// (0x000440a2) bg_active_tab_pane_cp2

0x765f,	// (0x000440b0) tabs_3_active_pane_g1

0x7667,	// (0x000440b8) tabs_3_active_pane_t1

0x7651,	// (0x000440a2) bg_passive_tab_pane_cp2_ParamLimits

0x7651,	// (0x000440a2) bg_passive_tab_pane_cp2

0x765f,	// (0x000440b0) tabs_3_passive_pane_g1

0x7667,	// (0x000440b8) tabs_3_passive_pane_t1

0x7651,	// (0x000440a2) bg_active_tab_pane_cp3_ParamLimits

0x7651,	// (0x000440a2) bg_active_tab_pane_cp3

0x7679,	// (0x000440ca) tabs_4_active_pane_g1

0x7681,	// (0x000440d2) tabs_4_active_pane_t1

0x7651,	// (0x000440a2) bg_passive_tab_pane_cp3_ParamLimits

0x7651,	// (0x000440a2) bg_passive_tab_pane_cp3

0x7679,	// (0x000440ca) tabs_4_1_passive_pane_g1

0x7681,	// (0x000440d2) tabs_4_1_passive_pane_t1

0x8eb4,	// (0x00045905) list_highlight_pane_cp2

0xae5b,	// (0x000478ac) list_set_pane_ParamLimits

0xae5b,	// (0x000478ac) list_set_pane

0xaf23,	// (0x00047974) main_pane_set_t1_ParamLimits

0xaf23,	// (0x00047974) main_pane_set_t1

0xaf43,	// (0x00047994) main_pane_set_t2_ParamLimits

0xaf43,	// (0x00047994) main_pane_set_t2

0xaf57,	// (0x000479a8) main_pane_set_t3_ParamLimits

0xaf57,	// (0x000479a8) main_pane_set_t3

0xaf6b,	// (0x000479bc) main_pane_set_t4_ParamLimits

0xaf6b,	// (0x000479bc) main_pane_set_t4

0x0003,

0xf99c,	// (0x0004c3ed) main_pane_set_t_ParamLimits

0xf99c,	// (0x0004c3ed) main_pane_set_t

0xaf8b,	// (0x000479dc) setting_code_pane

0xaf95,	// (0x000479e6) setting_slider_graphic_pane

0xaf95,	// (0x000479e6) setting_slider_pane

0xaf95,	// (0x000479e6) setting_text_pane

0xaf95,	// (0x000479e6) setting_volume_pane

0x5c5e,	// (0x000426af) volume_set_pane

0x7651,	// (0x000440a2) bg_set_opt_pane_cp

0x5c68,	// (0x000426b9) setting_slider_pane_t1

0x5c7e,	// (0x000426cf) setting_slider_pane_t2

0x5c98,	// (0x000426e9) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0004bfcb) setting_slider_pane_t

0x5cb0,	// (0x00042701) slider_set_pane

0x2ae4,	// (0x0003f535) bg_set_opt_pane_cp2

0x7693,	// (0x000440e4) setting_slider_graphic_pane_g1

0x5cc6,	// (0x00042717) setting_slider_graphic_pane_t1

0x5cd6,	// (0x00042727) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0004bfd2) setting_slider_graphic_pane_t

0x5ce6,	// (0x00042737) slider_set_pane_cp

0x2ae4,	// (0x0003f535) input_focus_pane_cp1

0xae1c,	// (0x0004786d) list_set_text_pane

0x2ada,	// (0x0003f52b) setting_text_pane_g1

0x2ae4,	// (0x0003f535) input_focus_pane_cp2

0x2ada,	// (0x0003f52b) setting_code_pane_g1

0x769c,	// (0x000440ed) setting_code_pane_t1

0x4aee,	// (0x0004153f) set_text_pane_t1_ParamLimits

0x4aee,	// (0x0004153f) set_text_pane_t1

0x7f3f,	// (0x00044990) set_opt_bg_pane_g1

0x7f47,	// (0x00044998) set_opt_bg_pane_g2

0xadf4,	// (0x00047845) set_opt_bg_pane_g3

0x7f57,	// (0x000449a8) set_opt_bg_pane_g4

0x7f5f,	// (0x000449b0) set_opt_bg_pane_g5

0x7f67,	// (0x000449b8) set_opt_bg_pane_g6

0xadfe,	// (0x0004784f) set_opt_bg_pane_g7

0xae08,	// (0x00047859) set_opt_bg_pane_g8

0xae12,	// (0x00047863) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0004c3da) set_opt_bg_pane_g

0xade7,	// (0x00047838) slider_set_pane_g1

0x66c3,	// (0x00043114) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0004c3cb) slider_set_pane_g

0x664b,	// (0x0004309c) volume_set_pane_g1

0x6655,	// (0x000430a6) volume_set_pane_g2

0x665f,	// (0x000430b0) volume_set_pane_g3

0x6669,	// (0x000430ba) volume_set_pane_g4

0x6673,	// (0x000430c4) volume_set_pane_g5

0x667d,	// (0x000430ce) volume_set_pane_g6

0x6687,	// (0x000430d8) volume_set_pane_g7

0x6691,	// (0x000430e2) volume_set_pane_g8

0x669b,	// (0x000430ec) volume_set_pane_g9

0x66a5,	// (0x000430f6) volume_set_pane_g10

0x0009,

0xf952,	// (0x0004c3a3) volume_set_pane_g

0x76aa,	// (0x000440fb) indicator_pane_ParamLimits

0x76aa,	// (0x000440fb) indicator_pane

0x76b6,	// (0x00044107) main_idle_pane_g2_ParamLimits

0x76b6,	// (0x00044107) main_idle_pane_g2

0x76de,	// (0x0004412f) main_pane_idle_g1_ParamLimits

0x76de,	// (0x0004412f) main_pane_idle_g1

0x76ec,	// (0x0004413d) popup_clock_digital_analogue_window_ParamLimits

0x76ec,	// (0x0004413d) popup_clock_digital_analogue_window

0x7703,	// (0x00044154) soft_indicator_pane_ParamLimits

0x7703,	// (0x00044154) soft_indicator_pane

0x7711,	// (0x00044162) wallpaper_pane_ParamLimits

0x7711,	// (0x00044162) wallpaper_pane

0x2ada,	// (0x0003f52b) wallpaper_pane_g1

0x7725,	// (0x00044176) indicator_pane_g1_ParamLimits

0x7725,	// (0x00044176) indicator_pane_g1

0xb259,	// (0x00047caa) navi_navi_icon_text_pane_srt_g1

0x7740,	// (0x00044191) soft_indicator_pane_t1

0x775a,	// (0x000441ab) aid_ps_area_pane

0x776b,	// (0x000441bc) aid_ps_clock_pane

0x7779,	// (0x000441ca) aid_ps_indicator_pane

0x7785,	// (0x000441d6) indicator_ps_pane_ParamLimits

0x7785,	// (0x000441d6) indicator_ps_pane

0x7794,	// (0x000441e5) power_save_pane_g1_ParamLimits

0x7794,	// (0x000441e5) power_save_pane_g1

0x77a0,	// (0x000441f1) power_save_pane_g2_ParamLimits

0x77a0,	// (0x000441f1) power_save_pane_g2

0x5867,	// (0x000422b8) aid_navinavi_width_pane

0x775a,	// (0x000441ab) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0004bfd7) power_save_pane_g_ParamLimits

0xf586,	// (0x0004bfd7) power_save_pane_g

0x77ae,	// (0x000441ff) power_save_pane_t1_ParamLimits

0x77ae,	// (0x000441ff) power_save_pane_t1

0x776b,	// (0x000441bc) aid_ps_clock_pane_ParamLimits

0x7779,	// (0x000441ca) aid_ps_indicator_pane_ParamLimits

0x77c0,	// (0x00044211) power_save_pane_t4_ParamLimits

0x77c0,	// (0x00044211) power_save_pane_t4

0x0001,

0xf58b,	// (0x0004bfdc) power_save_pane_t_ParamLimits

0xf58b,	// (0x0004bfdc) power_save_pane_t

0x77ea,	// (0x0004423b) power_save_t3_ParamLimits

0x77ea,	// (0x0004423b) power_save_t3

0x77d5,	// (0x00044226) power_save_t2_ParamLimits

0x77d5,	// (0x00044226) power_save_t2

0x77ff,	// (0x00044250) indicator_ps_pane_g1

0x7808,	// (0x00044259) ai_gene_pane_ParamLimits

0x7808,	// (0x00044259) ai_gene_pane

0x7814,	// (0x00044265) ai_links_pane_ParamLimits

0x7814,	// (0x00044265) ai_links_pane

0x7820,	// (0x00044271) indicator_pane_cp1_ParamLimits

0x7820,	// (0x00044271) indicator_pane_cp1

0x782c,	// (0x0004427d) main_pane_idle_g1_cp_ParamLimits

0x782c,	// (0x0004427d) main_pane_idle_g1_cp

0x7838,	// (0x00044289) popup_ai_links_title_window

0x7841,	// (0x00044292) soft_indicator_pane_cp1_ParamLimits

0x7841,	// (0x00044292) soft_indicator_pane_cp1

0xabba,	// (0x0004760b) ai_links_pane_g1

0xabc3,	// (0x00047614) grid_ai_links_pane

0xab9f,	// (0x000475f0) ai_gene_pane_1

0xaba8,	// (0x000475f9) ai_gene_pane_2

0xabb1,	// (0x00047602) list_highlight_pane_cp4

0xab7f,	// (0x000475d0) cell_ai_link_pane_ParamLimits

0xab7f,	// (0x000475d0) cell_ai_link_pane

0xab77,	// (0x000475c8) cell_ai_link_pane_g1

0x7a83,	// (0x000444d4) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0004c37e) cell_ai_link_pane_g

0x2ae4,	// (0x0003f535) grid_highlight_cp2

0x2ae4,	// (0x0003f535) bg_popup_sub_pane_cp1

0x785b,	// (0x000442ac) popup_ai_links_title_window_t1

0xaac3,	// (0x00047514) ai_gene_pane_1_g1_ParamLimits

0xaac3,	// (0x00047514) ai_gene_pane_1_g1

0xaacf,	// (0x00047520) ai_gene_pane_1_g2_ParamLimits

0xaacf,	// (0x00047520) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0004c374) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0004c374) ai_gene_pane_1_g

0xaadc,	// (0x0004752d) ai_gene_pane_1_t1_ParamLimits

0xaadc,	// (0x0004752d) ai_gene_pane_1_t1

0xab10,	// (0x00047561) grid_ai_soft_ind_pane

0xaaae,	// (0x000474ff) ai_gene_pane_2_t1_ParamLimits

0xaaae,	// (0x000474ff) ai_gene_pane_2_t1

0x786a,	// (0x000442bb) main_pane_empty_t1_ParamLimits

0x786a,	// (0x000442bb) main_pane_empty_t1

0x7882,	// (0x000442d3) main_pane_empty_t2_ParamLimits

0x7882,	// (0x000442d3) main_pane_empty_t2

0x7897,	// (0x000442e8) main_pane_empty_t3_ParamLimits

0x7897,	// (0x000442e8) main_pane_empty_t3

0x78a9,	// (0x000442fa) main_pane_empty_t4_ParamLimits

0x78a9,	// (0x000442fa) main_pane_empty_t4

0x78bb,	// (0x0004430c) main_pane_empty_t5_ParamLimits

0x78bb,	// (0x0004430c) main_pane_empty_t5

0x0004,

0xf590,	// (0x0004bfe1) main_pane_empty_t_ParamLimits

0xf590,	// (0x0004bfe1) main_pane_empty_t

0x7f90,	// (0x000449e1) bg_popup_window_pane_ParamLimits

0x7f90,	// (0x000449e1) bg_popup_window_pane

0xa80a,	// (0x0004725b) find_popup_pane_cp2_ParamLimits

0xa80a,	// (0x0004725b) find_popup_pane_cp2

0xa816,	// (0x00047267) heading_pane_ParamLimits

0xa816,	// (0x00047267) heading_pane

0x2ae4,	// (0x0003f535) bg_popup_sub_pane

0xa784,	// (0x000471d5) bg_popup_window_pane_g1_ParamLimits

0xa784,	// (0x000471d5) bg_popup_window_pane_g1

0xa790,	// (0x000471e1) bg_popup_window_pane_g2_ParamLimits

0xa790,	// (0x000471e1) bg_popup_window_pane_g2

0xa79c,	// (0x000471ed) bg_popup_window_pane_g3_ParamLimits

0xa79c,	// (0x000471ed) bg_popup_window_pane_g3

0xa7a8,	// (0x000471f9) bg_popup_window_pane_g4_ParamLimits

0xa7a8,	// (0x000471f9) bg_popup_window_pane_g4

0xa7b4,	// (0x00047205) bg_popup_window_pane_g5_ParamLimits

0xa7b4,	// (0x00047205) bg_popup_window_pane_g5

0xa7c0,	// (0x00047211) bg_popup_window_pane_g6_ParamLimits

0xa7c0,	// (0x00047211) bg_popup_window_pane_g6

0xa7cc,	// (0x0004721d) bg_popup_window_pane_g7_ParamLimits

0xa7cc,	// (0x0004721d) bg_popup_window_pane_g7

0xa7d8,	// (0x00047229) bg_popup_window_pane_g8_ParamLimits

0xa7d8,	// (0x00047229) bg_popup_window_pane_g8

0xa7e4,	// (0x00047235) bg_popup_window_pane_g9_ParamLimits

0xa7e4,	// (0x00047235) bg_popup_window_pane_g9

0xa7f0,	// (0x00047241) bg_popup_window_pane_g10_ParamLimits

0xa7f0,	// (0x00047241) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0004c33c) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0004c33c) bg_popup_window_pane_g

0xa719,	// (0x0004716a) bg_popup_heading_pane_ParamLimits

0xa719,	// (0x0004716a) bg_popup_heading_pane

0x6735,	// (0x00043186) tabs_4_passive_pane_cp_srt_ParamLimits

0x6735,	// (0x00043186) tabs_4_passive_pane_cp_srt

0x6747,	// (0x00043198) tabs_4_passive_pane_srt_ParamLimits

0xa72d,	// (0x0004717e) heading_pane_g2

0x6747,	// (0x00043198) tabs_4_passive_pane_srt

0x8eb4,	// (0x00045905) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8eb4,	// (0x00045905) bg_passive_tab_pane_cp3_srt

0xa735,	// (0x00047186) heading_pane_t1_ParamLimits

0xa735,	// (0x00047186) heading_pane_t1

0xa74c,	// (0x0004719d) heading_pane_t2_ParamLimits

0xa74c,	// (0x0004719d) heading_pane_t2

0x0001,

0xf8e6,	// (0x0004c337) heading_pane_t_ParamLimits

0xf8e6,	// (0x0004c337) heading_pane_t

0xa244,	// (0x00046c95) bg_popup_heading_pane_g1

0xa2f3,	// (0x00046d44) bg_popup_heading_pane_g2

0xa2fd,	// (0x00046d4e) bg_popup_heading_pane_g3

0xa307,	// (0x00046d58) bg_popup_heading_pane_g4

0xa311,	// (0x00046d62) bg_popup_heading_pane_g5

0xa31b,	// (0x00046d6c) bg_popup_heading_pane_g6

0xa323,	// (0x00046d74) bg_popup_heading_pane_g7

0xa32b,	// (0x00046d7c) bg_popup_heading_pane_g8

0xa335,	// (0x00046d86) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0004c2f3) bg_popup_heading_pane_g

0x99fc,	// (0x0004644d) bg_popup_sub_pane_g1

0x9a04,	// (0x00046455) bg_popup_sub_pane_g2

0x9a0c,	// (0x0004645d) bg_popup_sub_pane_g3

0x9a14,	// (0x00046465) bg_popup_sub_pane_g4

0x9a1c,	// (0x0004646d) bg_popup_sub_pane_g5

0x9a24,	// (0x00046475) bg_popup_sub_pane_g6

0x9a2c,	// (0x0004647d) bg_popup_sub_pane_g7

0x9a34,	// (0x00046485) bg_popup_sub_pane_g8

0x9a3c,	// (0x0004648d) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0004c2cd) bg_popup_sub_pane_g

0x78cd,	// (0x0004431e) bg_popup_window_pane_cp5_ParamLimits

0x78cd,	// (0x0004431e) bg_popup_window_pane_cp5

0x78e9,	// (0x0004433a) popup_note_window_g1_ParamLimits

0x78e9,	// (0x0004433a) popup_note_window_g1

0x78f5,	// (0x00044346) popup_note_window_t1_ParamLimits

0x78f5,	// (0x00044346) popup_note_window_t1

0x790b,	// (0x0004435c) popup_note_window_t2_ParamLimits

0x790b,	// (0x0004435c) popup_note_window_t2

0x7921,	// (0x00044372) popup_note_window_t3_ParamLimits

0x7921,	// (0x00044372) popup_note_window_t3

0x7937,	// (0x00044388) popup_note_window_t4_ParamLimits

0x7937,	// (0x00044388) popup_note_window_t4

0x795f,	// (0x000443b0) popup_note_window_t5_ParamLimits

0x795f,	// (0x000443b0) popup_note_window_t5

0x0004,

0xf59b,	// (0x0004bfec) popup_note_window_t_ParamLimits

0xf59b,	// (0x0004bfec) popup_note_window_t

0x7983,	// (0x000443d4) bg_popup_window_pane_cp6_ParamLimits

0x7983,	// (0x000443d4) bg_popup_window_pane_cp6

0xa1c0,	// (0x00046c11) popup_note_image_window_g1_ParamLimits

0xa1c0,	// (0x00046c11) popup_note_image_window_g1

0xa1cc,	// (0x00046c1d) popup_note_image_window_g2_ParamLimits

0xa1cc,	// (0x00046c1d) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0004c2c1) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0004c2c1) popup_note_image_window_g

0xa1e5,	// (0x00046c36) popup_note_image_window_t1_ParamLimits

0xa1e5,	// (0x00046c36) popup_note_image_window_t1

0xa1fe,	// (0x00046c4f) popup_note_image_window_t2_ParamLimits

0xa1fe,	// (0x00046c4f) popup_note_image_window_t2

0xa217,	// (0x00046c68) popup_note_image_window_t3_ParamLimits

0xa217,	// (0x00046c68) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0004c2c6) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0004c2c6) popup_note_image_window_t

0xa080,	// (0x00046ad1) bg_popup_window_pane_cp7_ParamLimits

0xa080,	// (0x00046ad1) bg_popup_window_pane_cp7

0xa0b0,	// (0x00046b01) popup_note_wait_window_g1_ParamLimits

0xa0b0,	// (0x00046b01) popup_note_wait_window_g1

0xa0bc,	// (0x00046b0d) popup_note_wait_window_g2_ParamLimits

0xa0bc,	// (0x00046b0d) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0004c2af) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0004c2af) popup_note_wait_window_g

0xa0d4,	// (0x00046b25) popup_note_wait_window_t1_ParamLimits

0xa0d4,	// (0x00046b25) popup_note_wait_window_t1

0xa0fb,	// (0x00046b4c) popup_note_wait_window_t2_ParamLimits

0xa0fb,	// (0x00046b4c) popup_note_wait_window_t2

0xa119,	// (0x00046b6a) popup_note_wait_window_t3_ParamLimits

0xa119,	// (0x00046b6a) popup_note_wait_window_t3

0xa12c,	// (0x00046b7d) popup_note_wait_window_t4_ParamLimits

0xa12c,	// (0x00046b7d) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0004c2b6) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0004c2b6) popup_note_wait_window_t

0xa151,	// (0x00046ba2) wait_bar_pane_ParamLimits

0xa151,	// (0x00046ba2) wait_bar_pane

0x2ae4,	// (0x0003f535) wait_anim_pane

0x2ae4,	// (0x0003f535) wait_border_pane

0x2ada,	// (0x0003f52b) wait_anim_pane_g1

0x2ada,	// (0x0003f52b) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0004c175) wait_anim_pane_g

0xa024,	// (0x00046a75) wait_border_pane_g1

0xa02f,	// (0x00046a80) wait_border_pane_g2

0xa038,	// (0x00046a89) wait_border_pane_g3

0x0002,

0xf857,	// (0x0004c2a8) wait_border_pane_g

0x9e8e,	// (0x000468df) bg_popup_window_pane_cp16_ParamLimits

0x9e8e,	// (0x000468df) bg_popup_window_pane_cp16

0x9f8e,	// (0x000469df) indicator_popup_pane_cp4_ParamLimits

0x9f8e,	// (0x000469df) indicator_popup_pane_cp4

0x9fa2,	// (0x000469f3) popup_query_data_window_t1_ParamLimits

0x9fa2,	// (0x000469f3) popup_query_data_window_t1

0x9fb4,	// (0x00046a05) popup_query_data_window_t2_ParamLimits

0x9fb4,	// (0x00046a05) popup_query_data_window_t2

0x9fcd,	// (0x00046a1e) popup_query_data_window_t3_ParamLimits

0x9fcd,	// (0x00046a1e) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0004c2a1) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0004c2a1) popup_query_data_window_t

0x9fe7,	// (0x00046a38) query_popup_data_pane_ParamLimits

0x9fe7,	// (0x00046a38) query_popup_data_pane

0x9ffb,	// (0x00046a4c) query_popup_data_pane_cp1_ParamLimits

0x9ffb,	// (0x00046a4c) query_popup_data_pane_cp1

0x9e8e,	// (0x000468df) bg_popup_window_pane_cp10_ParamLimits

0x9e8e,	// (0x000468df) bg_popup_window_pane_cp10

0x9ec0,	// (0x00046911) indicator_popup_pane_ParamLimits

0x9ec0,	// (0x00046911) indicator_popup_pane

0x9ee2,	// (0x00046933) popup_query_code_window_t1_ParamLimits

0x9ee2,	// (0x00046933) popup_query_code_window_t1

0x9efc,	// (0x0004694d) popup_query_code_window_t2_ParamLimits

0x9efc,	// (0x0004694d) popup_query_code_window_t2

0x9f45,	// (0x00046996) popup_query_code_window_t3_ParamLimits

0x9f45,	// (0x00046996) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0004c29a) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0004c29a) popup_query_code_window_t

0x9f74,	// (0x000469c5) query_popup_pane_ParamLimits

0x9f74,	// (0x000469c5) query_popup_pane

0x7983,	// (0x000443d4) bg_popup_window_pane_cp15_ParamLimits

0x7983,	// (0x000443d4) bg_popup_window_pane_cp15

0x79a3,	// (0x000443f4) indicator_popup_pane_cp1_ParamLimits

0x79a3,	// (0x000443f4) indicator_popup_pane_cp1

0x79b6,	// (0x00044407) indicator_popup_pane_cp2_ParamLimits

0x79b6,	// (0x00044407) indicator_popup_pane_cp2

0x79d1,	// (0x00044422) popup_query_data_code_window_g1_ParamLimits

0x79d1,	// (0x00044422) popup_query_data_code_window_g1

0x79e4,	// (0x00044435) popup_query_data_code_window_t1_ParamLimits

0x79e4,	// (0x00044435) popup_query_data_code_window_t1

0x79f6,	// (0x00044447) popup_query_data_code_window_t2_ParamLimits

0x79f6,	// (0x00044447) popup_query_data_code_window_t2

0x7a08,	// (0x00044459) popup_query_data_code_window_t3_ParamLimits

0x7a08,	// (0x00044459) popup_query_data_code_window_t3

0x7a1e,	// (0x0004446f) popup_query_data_code_window_t4_ParamLimits

0x7a1e,	// (0x0004446f) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0004bff7) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0004bff7) popup_query_data_code_window_t

0x8960,	// (0x000453b1) list_single_midp_graphic_pane_g3

0x7a38,	// (0x00044489) query_popup_data_pane_cp2_ParamLimits

0x7a4b,	// (0x0004449c) query_popup_pane_cp2_ParamLimits

0x7a4b,	// (0x0004449c) query_popup_pane_cp2

0x2ae4,	// (0x0003f535) bg_popup_window_pane_cp11

0x9e86,	// (0x000468d7) heading_pane_cp5

0x7b3b,	// (0x0004458c) listscroll_popup_info_pane

0x2ae4,	// (0x0003f535) input_focus_pane_cp3

0x7a66,	// (0x000444b7) query_popup_pane_t1

0x7a74,	// (0x000444c5) list_popup_info_pane_ParamLimits

0x7a74,	// (0x000444c5) list_popup_info_pane

0x7a83,	// (0x000444d4) listscroll_popup_info_pane_g1

0x7a8b,	// (0x000444dc) scroll_pane_cp7

0x7a95,	// (0x000444e6) popup_info_list_pane_t1_ParamLimits

0x7a95,	// (0x000444e6) popup_info_list_pane_t1

0x7aaf,	// (0x00044500) popup_info_list_pane_t2_ParamLimits

0x7aaf,	// (0x00044500) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0004c000) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0004c000) popup_info_list_pane_t

0x2ae4,	// (0x0003f535) bg_popup_window_pane_cp12

0xb273,	// (0x00047cc4) find_popup_pane

0x7651,	// (0x000440a2) bg_popup_window_pane_cp3

0x7ac9,	// (0x0004451a) heading_pane_cp3

0x7ad5,	// (0x00044526) listscroll_popup_graphic_pane

0x2ae4,	// (0x0003f535) bg_popup_window_pane_cp4

0x7b31,	// (0x00044582) heading_pane_cp4

0x7b3b,	// (0x0004458c) listscroll_popup_colour_pane

0x7b43,	// (0x00044594) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7b43,	// (0x00044594) cell_large_graphic_colour_none_popup_pane

0x7b57,	// (0x000445a8) grid_large_graphic_colour_popup_pane_ParamLimits

0x7b57,	// (0x000445a8) grid_large_graphic_colour_popup_pane

0x7b83,	// (0x000445d4) listscroll_popup_colour_pane_g1_ParamLimits

0x7b83,	// (0x000445d4) listscroll_popup_colour_pane_g1

0x7b9a,	// (0x000445eb) listscroll_popup_colour_pane_g2_ParamLimits

0x7b9a,	// (0x000445eb) listscroll_popup_colour_pane_g2

0x7bb1,	// (0x00044602) listscroll_popup_colour_pane_g3_ParamLimits

0x7bb1,	// (0x00044602) listscroll_popup_colour_pane_g3

0x7bc1,	// (0x00044612) listscroll_popup_colour_pane_g4_ParamLimits

0x7bc1,	// (0x00044612) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0004c005) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0004c005) listscroll_popup_colour_pane_g

0x7bd5,	// (0x00044626) scroll_pane_cp6_ParamLimits

0x7bd5,	// (0x00044626) scroll_pane_cp6

0x7be7,	// (0x00044638) cell_large_graphic_colour_popup_pane_ParamLimits

0x7be7,	// (0x00044638) cell_large_graphic_colour_popup_pane

0x7c0c,	// (0x0004465d) cell_large_graphic_colour_none_popup_pane_t1

0x2ae4,	// (0x0003f535) grid_highlight_pane_cp5

0x7c1b,	// (0x0004466c) cell_large_graphic_colour_popup_pane_g1

0x7c23,	// (0x00044674) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0004c00e) cell_large_graphic_colour_popup_pane_g

0x7c2b,	// (0x0004467c) cell_large_graphic_colour_popup_pane_g2_copy1

0x7c34,	// (0x00044685) grid_highlight_pane_cp4

0x7c3c,	// (0x0004468d) bg_popup_window_pane_cp8_ParamLimits

0x7c3c,	// (0x0004468d) bg_popup_window_pane_cp8

0x7c57,	// (0x000446a8) popup_snote_single_text_window_g1_ParamLimits

0x7c57,	// (0x000446a8) popup_snote_single_text_window_g1

0x7c69,	// (0x000446ba) popup_snote_single_text_window_t1_ParamLimits

0x7c69,	// (0x000446ba) popup_snote_single_text_window_t1

0x7c7c,	// (0x000446cd) popup_snote_single_text_window_t2_ParamLimits

0x7c7c,	// (0x000446cd) popup_snote_single_text_window_t2

0x7c8f,	// (0x000446e0) popup_snote_single_text_window_t3_ParamLimits

0x7c8f,	// (0x000446e0) popup_snote_single_text_window_t3

0x7cc8,	// (0x00044719) popup_snote_single_text_window_t4_ParamLimits

0x7cc8,	// (0x00044719) popup_snote_single_text_window_t4

0x7cfc,	// (0x0004474d) popup_snote_single_text_window_t5_ParamLimits

0x7cfc,	// (0x0004474d) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0004c013) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0004c013) popup_snote_single_text_window_t

0x7d2b,	// (0x0004477c) bg_popup_window_pane_cp9_ParamLimits

0x7d2b,	// (0x0004477c) bg_popup_window_pane_cp9

0x7c57,	// (0x000446a8) popup_snote_single_graphic_window_g1_ParamLimits

0x7c57,	// (0x000446a8) popup_snote_single_graphic_window_g1

0x7d39,	// (0x0004478a) popup_snote_single_graphic_window_g2_ParamLimits

0x7d39,	// (0x0004478a) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0004c01e) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0004c01e) popup_snote_single_graphic_window_g

0x7d45,	// (0x00044796) popup_snote_single_graphic_window_t1_ParamLimits

0x7d45,	// (0x00044796) popup_snote_single_graphic_window_t1

0x7d58,	// (0x000447a9) popup_snote_single_graphic_window_t2_ParamLimits

0x7d58,	// (0x000447a9) popup_snote_single_graphic_window_t2

0x7d6b,	// (0x000447bc) popup_snote_single_graphic_window_t3_ParamLimits

0x7d6b,	// (0x000447bc) popup_snote_single_graphic_window_t3

0x7da4,	// (0x000447f5) popup_snote_single_graphic_window_t4_ParamLimits

0x7da4,	// (0x000447f5) popup_snote_single_graphic_window_t4

0x7dd8,	// (0x00044829) popup_snote_single_graphic_window_t5_ParamLimits

0x7dd8,	// (0x00044829) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0004c023) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0004c023) popup_snote_single_graphic_window_t

0xb1b1,	// (0x00047c02) grid_graphic_popup_pane_ParamLimits

0xb1b1,	// (0x00047c02) grid_graphic_popup_pane

0xb1df,	// (0x00047c30) listscroll_popup_graphic_pane_g1_ParamLimits

0xb1df,	// (0x00047c30) listscroll_popup_graphic_pane_g1

0xb1f3,	// (0x00047c44) listscroll_popup_graphic_pane_g2_ParamLimits

0xb1f3,	// (0x00047c44) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0004c417) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0004c417) listscroll_popup_graphic_pane_g

0xb207,	// (0x00047c58) scroll_pane_cp5

0xb159,	// (0x00047baa) cell_graphic_popup_pane_ParamLimits

0xb159,	// (0x00047baa) cell_graphic_popup_pane

0xb13a,	// (0x00047b8b) cell_graphic_popup_pane_g1

0xb142,	// (0x00047b93) cell_graphic_popup_pane_g2

0x7c2b,	// (0x0004467c) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0004c410) cell_graphic_popup_pane_g

0xb14b,	// (0x00047b9c) cell_graphic_popup_pane_t2

0x7c34,	// (0x00044685) grid_highlight_pane_cp3

0x7e19,	// (0x0004486a) list_gen_pane_ParamLimits

0x7e19,	// (0x0004486a) list_gen_pane

0x7e4b,	// (0x0004489c) scroll_pane

0xb09c,	// (0x00047aed) bg_list_pane_g1_ParamLimits

0xb09c,	// (0x00047aed) bg_list_pane_g1

0xb0b7,	// (0x00047b08) bg_list_pane_g2_ParamLimits

0xb0b7,	// (0x00047b08) bg_list_pane_g2

0xb0ca,	// (0x00047b1b) bg_list_pane_g3_ParamLimits

0xb0ca,	// (0x00047b1b) bg_list_pane_g3

0xb0dc,	// (0x00047b2d) bg_list_pane_g4_ParamLimits

0xb0dc,	// (0x00047b2d) bg_list_pane_g4

0xb0ee,	// (0x00047b3f) bg_list_pane_g5_ParamLimits

0xb0ee,	// (0x00047b3f) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0004c405) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0004c405) bg_list_pane_g

0xb019,	// (0x00047a6a) list_double2_graphic_large_graphic_pane_ParamLimits

0xb019,	// (0x00047a6a) list_double2_graphic_large_graphic_pane

0xb019,	// (0x00047a6a) list_double2_graphic_pane_ParamLimits

0xb019,	// (0x00047a6a) list_double2_graphic_pane

0xb019,	// (0x00047a6a) list_double2_large_graphic_pane_ParamLimits

0xb019,	// (0x00047a6a) list_double2_large_graphic_pane

0xb019,	// (0x00047a6a) list_double2_pane_ParamLimits

0xb019,	// (0x00047a6a) list_double2_pane

0xb019,	// (0x00047a6a) list_double_graphic_heading_pane_ParamLimits

0xb019,	// (0x00047a6a) list_double_graphic_heading_pane

0xb019,	// (0x00047a6a) list_double_graphic_pane_ParamLimits

0xb019,	// (0x00047a6a) list_double_graphic_pane

0xb019,	// (0x00047a6a) list_double_heading_pane_ParamLimits

0xb019,	// (0x00047a6a) list_double_heading_pane

0xb019,	// (0x00047a6a) list_double_large_graphic_pane_ParamLimits

0xb019,	// (0x00047a6a) list_double_large_graphic_pane

0xb019,	// (0x00047a6a) list_double_number_pane_ParamLimits

0xb019,	// (0x00047a6a) list_double_number_pane

0xb019,	// (0x00047a6a) list_double_pane_ParamLimits

0xb019,	// (0x00047a6a) list_double_pane

0xb019,	// (0x00047a6a) list_double_time_pane_ParamLimits

0xb019,	// (0x00047a6a) list_double_time_pane

0xb019,	// (0x00047a6a) list_setting_number_pane_ParamLimits

0xb019,	// (0x00047a6a) list_setting_number_pane

0xb019,	// (0x00047a6a) list_setting_pane_ParamLimits

0xb019,	// (0x00047a6a) list_setting_pane

0xb058,	// (0x00047aa9) list_single_2graphic_pane_ParamLimits

0xb058,	// (0x00047aa9) list_single_2graphic_pane

0xb058,	// (0x00047aa9) list_single_graphic_heading_pane_ParamLimits

0xb058,	// (0x00047aa9) list_single_graphic_heading_pane

0xb058,	// (0x00047aa9) list_single_graphic_pane_ParamLimits

0xb058,	// (0x00047aa9) list_single_graphic_pane

0xb058,	// (0x00047aa9) list_single_heading_pane_ParamLimits

0xb058,	// (0x00047aa9) list_single_heading_pane

0x66f9,	// (0x0004314a) list_single_large_graphic_pane_ParamLimits

0x66f9,	// (0x0004314a) list_single_large_graphic_pane

0xb058,	// (0x00047aa9) list_single_number_heading_pane_ParamLimits

0xb058,	// (0x00047aa9) list_single_number_heading_pane

0xb058,	// (0x00047aa9) list_single_number_pane_ParamLimits

0xb058,	// (0x00047aa9) list_single_number_pane

0xb058,	// (0x00047aa9) list_single_pane_ParamLimits

0xb058,	// (0x00047aa9) list_single_pane

0x2ae4,	// (0x0003f535) list_highlight_pane_cp1

0x94e7,	// (0x00045f38) list_single_pane_g1_ParamLimits

0x94e7,	// (0x00045f38) list_single_pane_g1

0x5cee,	// (0x0004273f) list_single_pane_g2_ParamLimits

0x5cee,	// (0x0004273f) list_single_pane_g2

0x0001,

0xf5ee,	// (0x0004c03f) list_single_pane_g_ParamLimits

0xf5ee,	// (0x0004c03f) list_single_pane_g

0x53d7,	// (0x00041e28) list_single_pane_t1_ParamLimits

0x53d7,	// (0x00041e28) list_single_pane_t1

0x94e7,	// (0x00045f38) list_single_number_pane_g1_ParamLimits

0x94e7,	// (0x00045f38) list_single_number_pane_g1

0x5cee,	// (0x0004273f) list_single_number_pane_g2_ParamLimits

0x5cee,	// (0x0004273f) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x0004c03f) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x0004c03f) list_single_number_pane_g

0x5379,	// (0x00041dca) list_single_number_pane_t1_ParamLimits

0x5379,	// (0x00041dca) list_single_number_pane_t1

0x538f,	// (0x00041de0) list_single_number_pane_t2_ParamLimits

0x538f,	// (0x00041de0) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0004c3c6) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0004c3c6) list_single_number_pane_t

0x4b07,	// (0x00041558) list_single_graphic_pane_g1_ParamLimits

0x4b07,	// (0x00041558) list_single_graphic_pane_g1

0x94e7,	// (0x00045f38) list_single_graphic_pane_g2_ParamLimits

0x94e7,	// (0x00045f38) list_single_graphic_pane_g2

0x5cee,	// (0x0004273f) list_single_graphic_pane_g3_ParamLimits

0x5cee,	// (0x0004273f) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0004c02e) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0004c02e) list_single_graphic_pane_g

0x4b13,	// (0x00041564) list_single_graphic_pane_t1_ParamLimits

0x4b13,	// (0x00041564) list_single_graphic_pane_t1

0x4b29,	// (0x0004157a) list_single_heading_pane_g1_ParamLimits

0x4b29,	// (0x0004157a) list_single_heading_pane_g1

0x5cee,	// (0x0004273f) list_single_heading_pane_g2_ParamLimits

0x5cee,	// (0x0004273f) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0004c035) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0004c035) list_single_heading_pane_g

0x4b3c,	// (0x0004158d) list_single_heading_pane_t1_ParamLimits

0x4b3c,	// (0x0004158d) list_single_heading_pane_t1

0x5cfa,	// (0x0004274b) list_single_heading_pane_t2_ParamLimits

0x5cfa,	// (0x0004274b) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0004c03a) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0004c03a) list_single_heading_pane_t

0x94e7,	// (0x00045f38) list_single_number_heading_pane_g1_ParamLimits

0x94e7,	// (0x00045f38) list_single_number_heading_pane_g1

0x5cee,	// (0x0004273f) list_single_number_heading_pane_g2_ParamLimits

0x5cee,	// (0x0004273f) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x0004c03f) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x0004c03f) list_single_number_heading_pane_g

0x4b52,	// (0x000415a3) list_single_number_heading_pane_t1_ParamLimits

0x4b52,	// (0x000415a3) list_single_number_heading_pane_t1

0x4b68,	// (0x000415b9) list_single_number_heading_pane_t2_ParamLimits

0x4b68,	// (0x000415b9) list_single_number_heading_pane_t2

0x4b7a,	// (0x000415cb) list_single_number_heading_pane_t3_ParamLimits

0x4b7a,	// (0x000415cb) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x0004c044) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x0004c044) list_single_number_heading_pane_t

0x4b8c,	// (0x000415dd) list_single_graphic_heading_pane_g1_ParamLimits

0x4b8c,	// (0x000415dd) list_single_graphic_heading_pane_g1

0x5d0c,	// (0x0004275d) list_single_graphic_heading_pane_g4_ParamLimits

0x5d0c,	// (0x0004275d) list_single_graphic_heading_pane_g4

0x5cee,	// (0x0004273f) list_single_graphic_heading_pane_g5_ParamLimits

0x5cee,	// (0x0004273f) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x0004c04b) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x0004c04b) list_single_graphic_heading_pane_g

0x4b52,	// (0x000415a3) list_single_graphic_heading_pane_t1_ParamLimits

0x4b52,	// (0x000415a3) list_single_graphic_heading_pane_t1

0x4ba4,	// (0x000415f5) list_single_graphic_heading_pane_t2_ParamLimits

0x4ba4,	// (0x000415f5) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x0004c052) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x0004c052) list_single_graphic_heading_pane_t

0x5d1d,	// (0x0004276e) list_single_large_graphic_pane_g1_ParamLimits

0x5d1d,	// (0x0004276e) list_single_large_graphic_pane_g1

0x5d29,	// (0x0004277a) list_single_large_graphic_pane_g2_ParamLimits

0x5d29,	// (0x0004277a) list_single_large_graphic_pane_g2

0x5d35,	// (0x00042786) list_single_large_graphic_pane_g3_ParamLimits

0x5d35,	// (0x00042786) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0004c057) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0004c057) list_single_large_graphic_pane_g

0xa02f,	// (0x00046a80) wait_border_pane_g2_copy1

0x5d41,	// (0x00042792) list_single_large_graphic_pane_g4_cp2

0x4bbc,	// (0x0004160d) list_single_large_graphic_pane_t1_ParamLimits

0x4bbc,	// (0x0004160d) list_single_large_graphic_pane_t1

0x5d49,	// (0x0004279a) list_double_pane_g1_ParamLimits

0x5d49,	// (0x0004279a) list_double_pane_g1

0x5d55,	// (0x000427a6) list_double_pane_g2_ParamLimits

0x5d55,	// (0x000427a6) list_double_pane_g2

0x0001,

0xf60d,	// (0x0004c05e) list_double_pane_g_ParamLimits

0xf60d,	// (0x0004c05e) list_double_pane_g

0x4bd2,	// (0x00041623) list_double_pane_t1_ParamLimits

0x4bd2,	// (0x00041623) list_double_pane_t1

0x4be8,	// (0x00041639) list_double_pane_t2_ParamLimits

0x4be8,	// (0x00041639) list_double_pane_t2

0x0001,

0xf612,	// (0x0004c063) list_double_pane_t_ParamLimits

0xf612,	// (0x0004c063) list_double_pane_t

0x4bfa,	// (0x0004164b) list_double2_pane_g1_ParamLimits

0x4bfa,	// (0x0004164b) list_double2_pane_g1

0x4c0b,	// (0x0004165c) list_double2_pane_g2_ParamLimits

0x4c0b,	// (0x0004165c) list_double2_pane_g2

0x0001,

0xf617,	// (0x0004c068) list_double2_pane_g_ParamLimits

0xf617,	// (0x0004c068) list_double2_pane_g

0x4c17,	// (0x00041668) list_double2_pane_t1_ParamLimits

0x4c17,	// (0x00041668) list_double2_pane_t1

0x4c2d,	// (0x0004167e) list_double2_pane_t2_ParamLimits

0x4c2d,	// (0x0004167e) list_double2_pane_t2

0x0001,

0xf61c,	// (0x0004c06d) list_double2_pane_t_ParamLimits

0xf61c,	// (0x0004c06d) list_double2_pane_t

0x5d49,	// (0x0004279a) list_double_number_pane_g1_ParamLimits

0x5d49,	// (0x0004279a) list_double_number_pane_g1

0x5d55,	// (0x000427a6) list_double_number_pane_g2_ParamLimits

0x5d55,	// (0x000427a6) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x0004c05e) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x0004c05e) list_double_number_pane_g

0x4c3f,	// (0x00041690) list_double_number_pane_t1_ParamLimits

0x4c3f,	// (0x00041690) list_double_number_pane_t1

0x4c51,	// (0x000416a2) list_double_number_pane_t2_ParamLimits

0x4c51,	// (0x000416a2) list_double_number_pane_t2

0x4c67,	// (0x000416b8) list_double_number_pane_t3_ParamLimits

0x4c67,	// (0x000416b8) list_double_number_pane_t3

0x0002,

0xf621,	// (0x0004c072) list_double_number_pane_t_ParamLimits

0xf621,	// (0x0004c072) list_double_number_pane_t

0x4c79,	// (0x000416ca) list_double_graphic_pane_g1_ParamLimits

0x4c79,	// (0x000416ca) list_double_graphic_pane_g1

0x4c85,	// (0x000416d6) list_double_graphic_pane_g2_ParamLimits

0x4c85,	// (0x000416d6) list_double_graphic_pane_g2

0x4c94,	// (0x000416e5) list_double_graphic_pane_g3_ParamLimits

0x4c94,	// (0x000416e5) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x0004c079) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x0004c079) list_double_graphic_pane_g

0x4cac,	// (0x000416fd) list_double_graphic_pane_t1_ParamLimits

0x4cac,	// (0x000416fd) list_double_graphic_pane_t1

0x4cc2,	// (0x00041713) list_double_graphic_pane_t2_ParamLimits

0x4cc2,	// (0x00041713) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x0004c082) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x0004c082) list_double_graphic_pane_t

0x4cd4,	// (0x00041725) list_double2_graphic_pane_g1_ParamLimits

0x4cd4,	// (0x00041725) list_double2_graphic_pane_g1

0x5d61,	// (0x000427b2) list_double2_graphic_pane_g2_ParamLimits

0x5d61,	// (0x000427b2) list_double2_graphic_pane_g2

0x4ce0,	// (0x00041731) list_double2_graphic_pane_g3_ParamLimits

0x4ce0,	// (0x00041731) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0004c087) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0004c087) list_double2_graphic_pane_g

0x4cec,	// (0x0004173d) list_double2_graphic_pane_t1_ParamLimits

0x4cec,	// (0x0004173d) list_double2_graphic_pane_t1

0x4d02,	// (0x00041753) list_double2_graphic_pane_t2_ParamLimits

0x4d02,	// (0x00041753) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004c08e) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004c08e) list_double2_graphic_pane_t

0x4d14,	// (0x00041765) list_double_large_graphic_pane_g1_ParamLimits

0x4d14,	// (0x00041765) list_double_large_graphic_pane_g1

0x4d3f,	// (0x00041790) list_double_large_graphic_pane_g2_ParamLimits

0x4d3f,	// (0x00041790) list_double_large_graphic_pane_g2

0x5d55,	// (0x000427a6) list_double_large_graphic_pane_g3_ParamLimits

0x5d55,	// (0x000427a6) list_double_large_graphic_pane_g3

0x4d55,	// (0x000417a6) list_double_large_graphic_pane_g4_ParamLimits

0x4d55,	// (0x000417a6) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x0004c093) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x0004c093) list_double_large_graphic_pane_g

0x4d68,	// (0x000417b9) list_double_large_graphic_pane_t1_ParamLimits

0x4d68,	// (0x000417b9) list_double_large_graphic_pane_t1

0x4d81,	// (0x000417d2) list_double_large_graphic_pane_t2_ParamLimits

0x4d81,	// (0x000417d2) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x0004c09e) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x0004c09e) list_double_large_graphic_pane_t

0x5d82,	// (0x000427d3) list_double2_large_graphic_pane_g1_ParamLimits

0x5d82,	// (0x000427d3) list_double2_large_graphic_pane_g1

0x4d93,	// (0x000417e4) list_double2_large_graphic_pane_g2_ParamLimits

0x4d93,	// (0x000417e4) list_double2_large_graphic_pane_g2

0x4ce0,	// (0x00041731) list_double2_large_graphic_pane_g3_ParamLimits

0x4ce0,	// (0x00041731) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x0004c0a3) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x0004c0a3) list_double2_large_graphic_pane_g

0x4da4,	// (0x000417f5) list_double2_large_graphic_pane_t1_ParamLimits

0x4da4,	// (0x000417f5) list_double2_large_graphic_pane_t1

0x4dba,	// (0x0004180b) list_double2_large_graphic_pane_t2_ParamLimits

0x4dba,	// (0x0004180b) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x0004c0aa) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x0004c0aa) list_double2_large_graphic_pane_t

0x4dcc,	// (0x0004181d) list_double_heading_pane_g1_ParamLimits

0x4dcc,	// (0x0004181d) list_double_heading_pane_g1

0x4ddd,	// (0x0004182e) list_double_heading_pane_g2_ParamLimits

0x4ddd,	// (0x0004182e) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x0004c0af) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x0004c0af) list_double_heading_pane_g

0x4de9,	// (0x0004183a) list_double_heading_pane_t1_ParamLimits

0x4de9,	// (0x0004183a) list_double_heading_pane_t1

0x4dff,	// (0x00041850) list_double_heading_pane_t2_ParamLimits

0x4dff,	// (0x00041850) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x0004c0b4) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x0004c0b4) list_double_heading_pane_t

0x4e11,	// (0x00041862) list_double_graphic_heading_pane_g1_ParamLimits

0x4e11,	// (0x00041862) list_double_graphic_heading_pane_g1

0x4dcc,	// (0x0004181d) list_double_graphic_heading_pane_g2_ParamLimits

0x4dcc,	// (0x0004181d) list_double_graphic_heading_pane_g2

0x4ddd,	// (0x0004182e) list_double_graphic_heading_pane_g3_ParamLimits

0x4ddd,	// (0x0004182e) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x0004c0b9) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x0004c0b9) list_double_graphic_heading_pane_g

0x4e1d,	// (0x0004186e) list_double_graphic_heading_pane_t1_ParamLimits

0x4e1d,	// (0x0004186e) list_double_graphic_heading_pane_t1

0x4e33,	// (0x00041884) list_double_graphic_heading_pane_t2_ParamLimits

0x4e33,	// (0x00041884) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x0004c0c0) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x0004c0c0) list_double_graphic_heading_pane_t

0x4e45,	// (0x00041896) list_double_time_pane_g1_ParamLimits

0x4e45,	// (0x00041896) list_double_time_pane_g1

0x4e56,	// (0x000418a7) list_double_time_pane_g2_ParamLimits

0x4e56,	// (0x000418a7) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0004c0c5) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0004c0c5) list_double_time_pane_g

0x4e62,	// (0x000418b3) list_double_time_pane_t1_ParamLimits

0x4e62,	// (0x000418b3) list_double_time_pane_t1

0x4e78,	// (0x000418c9) list_double_time_pane_t2_ParamLimits

0x4e78,	// (0x000418c9) list_double_time_pane_t2

0x4e8a,	// (0x000418db) list_double_time_pane_t3_ParamLimits

0x4e8a,	// (0x000418db) list_double_time_pane_t3

0x4e9c,	// (0x000418ed) list_double_time_pane_t4_ParamLimits

0x4e9c,	// (0x000418ed) list_double_time_pane_t4

0x0003,

0xf679,	// (0x0004c0ca) list_double_time_pane_t_ParamLimits

0xf679,	// (0x0004c0ca) list_double_time_pane_t

0x4eae,	// (0x000418ff) list_setting_pane_g1_ParamLimits

0x4eae,	// (0x000418ff) list_setting_pane_g1

0x4eba,	// (0x0004190b) list_setting_pane_g2_ParamLimits

0x4eba,	// (0x0004190b) list_setting_pane_g2

0x0001,

0xf682,	// (0x0004c0d3) list_setting_pane_g_ParamLimits

0xf682,	// (0x0004c0d3) list_setting_pane_g

0x4ec6,	// (0x00041917) list_setting_pane_t1_ParamLimits

0x4ec6,	// (0x00041917) list_setting_pane_t1

0x4ee0,	// (0x00041931) list_setting_pane_t2_ParamLimits

0x4ee0,	// (0x00041931) list_setting_pane_t2

0x0002,

0xf687,	// (0x0004c0d8) list_setting_pane_t_ParamLimits

0xf687,	// (0x0004c0d8) list_setting_pane_t

0x4f1f,	// (0x00041970) set_value_pane_cp_ParamLimits

0x4f1f,	// (0x00041970) set_value_pane_cp

0x4f2d,	// (0x0004197e) list_setting_number_pane_g1_ParamLimits

0x4f2d,	// (0x0004197e) list_setting_number_pane_g1

0x4f39,	// (0x0004198a) list_setting_number_pane_g2_ParamLimits

0x4f39,	// (0x0004198a) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x0004c0df) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x0004c0df) list_setting_number_pane_g

0x4f45,	// (0x00041996) list_setting_number_pane_t1_ParamLimits

0x4f45,	// (0x00041996) list_setting_number_pane_t1

0x4f5e,	// (0x000419af) list_setting_number_pane_t2_ParamLimits

0x4f5e,	// (0x000419af) list_setting_number_pane_t2

0x4f78,	// (0x000419c9) list_setting_number_pane_t3_ParamLimits

0x4f78,	// (0x000419c9) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x0004c0e4) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x0004c0e4) list_setting_number_pane_t

0x4f1f,	// (0x00041970) set_value_pane_ParamLimits

0x4f1f,	// (0x00041970) set_value_pane

0x7e7f,	// (0x000448d0) bg_set_opt_pane_ParamLimits

0x7e7f,	// (0x000448d0) bg_set_opt_pane

0x4fbb,	// (0x00041a0c) set_value_pane_t1

0x7ea0,	// (0x000448f1) slider_set_pane_cp3

0x7ea9,	// (0x000448fa) volume_small_pane_cp

0x7eb2,	// (0x00044903) list_form_gen_pane

0x7ebb,	// (0x0004490c) scroll_pane_cp8

0x4fd1,	// (0x00041a22) form_field_data_pane_ParamLimits

0x4fd1,	// (0x00041a22) form_field_data_pane

0x4ff9,	// (0x00041a4a) form_field_data_wide_pane_ParamLimits

0x4ff9,	// (0x00041a4a) form_field_data_wide_pane

0x5020,	// (0x00041a71) form_field_popup_pane_ParamLimits

0x5020,	// (0x00041a71) form_field_popup_pane

0x5042,	// (0x00041a93) form_field_popup_wide_pane_ParamLimits

0x5042,	// (0x00041a93) form_field_popup_wide_pane

0x5063,	// (0x00041ab4) form_field_slider_pane_ParamLimits

0x5063,	// (0x00041ab4) form_field_slider_pane

0x5076,	// (0x00041ac7) form_field_slider_wide_pane_ParamLimits

0x5076,	// (0x00041ac7) form_field_slider_wide_pane

0x7ecc,	// (0x0004491d) data_form_pane

0x5093,	// (0x00041ae4) form_field_data_pane_t1

0x7ed8,	// (0x00044929) input_focus_pane

0x7ee6,	// (0x00044937) data_form_wide_pane

0x50b9,	// (0x00041b0a) form_field_data_wide_pane_t1

0x7c49,	// (0x0004469a) input_focus_pane_cp6

0x50db,	// (0x00041b2c) form_field_popup_pane_t1

0x7ed8,	// (0x00044929) input_focus_pane_cp7

0x7f12,	// (0x00044963) list_form_pane

0x50fd,	// (0x00041b4e) form_field_popup_wide_pane_t1

0x7ed8,	// (0x00044929) input_focus_pane_cp8

0x7f1e,	// (0x0004496f) list_form_wide_pane

0x511a,	// (0x00041b6b) form_field_slider_pane_t1_ParamLimits

0x511a,	// (0x00041b6b) form_field_slider_pane_t1

0x5132,	// (0x00041b83) form_field_slider_pane_t2_ParamLimits

0x5132,	// (0x00041b83) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x0004c0f4) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x0004c0f4) form_field_slider_pane_t

0x78cd,	// (0x0004431e) input_focus_pane_cp9_ParamLimits

0x78cd,	// (0x0004431e) input_focus_pane_cp9

0x5147,	// (0x00041b98) slider_cont_pane_ParamLimits

0x5147,	// (0x00041b98) slider_cont_pane

0x7f2d,	// (0x0004497e) form_field_slider_wide_pane_t1_ParamLimits

0x7f2d,	// (0x0004497e) form_field_slider_wide_pane_t1

0x515b,	// (0x00041bac) form_field_slider_wide_pane_t2_ParamLimits

0x515b,	// (0x00041bac) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x0004c0f9) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x0004c0f9) form_field_slider_wide_pane_t

0x78cd,	// (0x0004431e) input_focus_pane_cp10_ParamLimits

0x78cd,	// (0x0004431e) input_focus_pane_cp10

0x516d,	// (0x00041bbe) slider_cont_pane_cp1_ParamLimits

0x516d,	// (0x00041bbe) slider_cont_pane_cp1

0x5181,	// (0x00041bd2) slider_form_pane_cp

0x7f3f,	// (0x00044990) input_focus_pane_g1

0x7f47,	// (0x00044998) input_focus_pane_g2

0x7f4f,	// (0x000449a0) input_focus_pane_g3

0x7f57,	// (0x000449a8) input_focus_pane_g4

0x7f5f,	// (0x000449b0) input_focus_pane_g5

0x7f67,	// (0x000449b8) input_focus_pane_g6

0x7f6f,	// (0x000449c0) input_focus_pane_g7

0x7f77,	// (0x000449c8) input_focus_pane_g8

0x7f7f,	// (0x000449d0) input_focus_pane_g9

0x2ada,	// (0x0003f52b) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x0004c0fe) input_focus_pane_g

0xa038,	// (0x00046a89) wait_border_pane_g3_copy1

0x5189,	// (0x00041bda) data_form_pane_t1

0x2ada,	// (0x0003f52b) wait_anim_pane_g1_copy1

0x53a1,	// (0x00041df2) data_form_wide_pane_t1

0x51a8,	// (0x00041bf9) list_form_graphic_pane_cp_ParamLimits

0x51a8,	// (0x00041bf9) list_form_graphic_pane_cp

0xafbd,	// (0x00047a0e) slider_form_pane_g1

0xafc6,	// (0x00047a17) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0004c3f6) slider_form_pane_g

0x51a8,	// (0x00041bf9) list_form_graphic_pane_ParamLimits

0x51a8,	// (0x00041bf9) list_form_graphic_pane

0x51ba,	// (0x00041c0b) list_form_graphic_pane_g1

0x51c2,	// (0x00041c13) list_form_graphic_pane_t1_ParamLimits

0x51c2,	// (0x00041c13) list_form_graphic_pane_t1

0x7651,	// (0x000440a2) list_highlight_pane_cp5_ParamLimits

0x7651,	// (0x000440a2) list_highlight_pane_cp5

0x5d8e,	// (0x000427df) find_pane_g1

0x7f87,	// (0x000449d8) input_find_pane

0x51d7,	// (0x00041c28) input_find_pane_g1_ParamLimits

0x51d7,	// (0x00041c28) input_find_pane_g1

0x51e3,	// (0x00041c34) input_find_pane_t1_ParamLimits

0x51e3,	// (0x00041c34) input_find_pane_t1

0x51f8,	// (0x00041c49) input_find_pane_t2_ParamLimits

0x51f8,	// (0x00041c49) input_find_pane_t2

0x0001,

0xf6c2,	// (0x0004c113) input_find_pane_t_ParamLimits

0xf6c2,	// (0x0004c113) input_find_pane_t

0x7f90,	// (0x000449e1) input_focus_pane_cp5_ParamLimits

0x7f90,	// (0x000449e1) input_focus_pane_cp5

0x7faa,	// (0x000449fb) bg_popup_window_pane_cp2_ParamLimits

0x7faa,	// (0x000449fb) bg_popup_window_pane_cp2

0x7fb7,	// (0x00044a08) listscroll_menu_pane_ParamLimits

0x7fb7,	// (0x00044a08) listscroll_menu_pane

0x7fc3,	// (0x00044a14) popup_submenu_window_ParamLimits

0x7fc3,	// (0x00044a14) popup_submenu_window

0x7ff3,	// (0x00044a44) find_popup_pane_g1

0x7ffb,	// (0x00044a4c) input_popup_find_pane_cp

0x7f90,	// (0x000449e1) input_focus_pane_cp4_ParamLimits

0x7f90,	// (0x000449e1) input_focus_pane_cp4

0x8013,	// (0x00044a64) input_popup_find_pane_t1_ParamLimits

0x8013,	// (0x00044a64) input_popup_find_pane_t1

0x2ae4,	// (0x0003f535) bg_popup_sub_pane_cp

0x8041,	// (0x00044a92) listscroll_popup_sub_pane

0x8049,	// (0x00044a9a) list_submenu_pane_ParamLimits

0x8049,	// (0x00044a9a) list_submenu_pane

0x805a,	// (0x00044aab) scroll_pane_cp4

0x8062,	// (0x00044ab3) list_single_popup_submenu_pane_ParamLimits

0x8062,	// (0x00044ab3) list_single_popup_submenu_pane

0x8077,	// (0x00044ac8) list_single_popup_submenu_pane_g1

0x807f,	// (0x00044ad0) list_single_popup_submenu_pane_t1_ParamLimits

0x807f,	// (0x00044ad0) list_single_popup_submenu_pane_t1

0x7651,	// (0x000440a2) bg_active_tab_pane_cp1_ParamLimits

0x7651,	// (0x000440a2) bg_active_tab_pane_cp1

0x8094,	// (0x00044ae5) tabs_2_active_pane_g1

0x809c,	// (0x00044aed) tabs_2_active_pane_t1

0x7651,	// (0x000440a2) bg_passive_tab_pane_cp1_ParamLimits

0x7651,	// (0x000440a2) bg_passive_tab_pane_cp1

0x8094,	// (0x00044ae5) tabs_2_passive_pane_g1

0x809c,	// (0x00044aed) tabs_2_passive_pane_t1

0x80ae,	// (0x00044aff) bg_active_tab_pane_cp4

0x80bc,	// (0x00044b0d) tabs_2_long_active_pane_t1

0x80cf,	// (0x00044b20) bg_passive_tab_pane_cp4

0x63ff,	// (0x00042e50) list_single_midp_graphic_pane_g4_ParamLimits

0x80ae,	// (0x00044aff) bg_active_tab_pane_cp5

0x80db,	// (0x00044b2c) tabs_3_long_active_pane_t1

0x80cf,	// (0x00044b20) bg_passive_tab_pane_cp5

0x63ff,	// (0x00042e50) list_single_midp_graphic_pane_g4

0x7651,	// (0x000440a2) bg_popup_window_pane_cp13_ParamLimits

0x7651,	// (0x000440a2) bg_popup_window_pane_cp13

0x80f6,	// (0x00044b47) listscroll_popup_fast_pane_ParamLimits

0x80f6,	// (0x00044b47) listscroll_popup_fast_pane

0x8105,	// (0x00044b56) grid_popup_fast_pane_ParamLimits

0x8105,	// (0x00044b56) grid_popup_fast_pane

0x8117,	// (0x00044b68) scroll_pane_cp9_ParamLimits

0x8117,	// (0x00044b68) scroll_pane_cp9

0xc921,	// (0x00049372) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc921,	// (0x00049372) list_single_graphic_hl_pane_t1_cp2

0x813b,	// (0x00044b8c) input_focus_pane_cp20_ParamLimits

0x813b,	// (0x00044b8c) input_focus_pane_cp20

0x8149,	// (0x00044b9a) query_popup_data_pane_t1_ParamLimits

0x8149,	// (0x00044b9a) query_popup_data_pane_t1

0x815c,	// (0x00044bad) query_popup_data_pane_t2_ParamLimits

0x815c,	// (0x00044bad) query_popup_data_pane_t2

0x81a2,	// (0x00044bf3) query_popup_data_pane_t3_ParamLimits

0x81a2,	// (0x00044bf3) query_popup_data_pane_t3

0x81e3,	// (0x00044c34) query_popup_data_pane_t4_ParamLimits

0x81e3,	// (0x00044c34) query_popup_data_pane_t4

0x821f,	// (0x00044c70) query_popup_data_pane_t5_ParamLimits

0x821f,	// (0x00044c70) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x0004c118) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x0004c118) query_popup_data_pane_t

0x7f3f,	// (0x00044990) bg_set_opt_pane_g1

0x7f47,	// (0x00044998) bg_set_opt_pane_g2

0x7f4f,	// (0x000449a0) bg_set_opt_pane_g3

0x7f57,	// (0x000449a8) bg_set_opt_pane_g4

0x7f5f,	// (0x000449b0) bg_set_opt_pane_g5

0x7f67,	// (0x000449b8) bg_set_opt_pane_g6

0x7f6f,	// (0x000449c0) bg_set_opt_pane_g7

0x7f77,	// (0x000449c8) bg_set_opt_pane_g8

0x7f7f,	// (0x000449d0) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x0004c123) bg_set_opt_pane_g

0x6058,	// (0x00042aa9) control_top_pane_stacon_ParamLimits

0x6058,	// (0x00042aa9) control_top_pane_stacon

0x60ab,	// (0x00042afc) signal_pane_stacon_ParamLimits

0x60ab,	// (0x00042afc) signal_pane_stacon

0x87cb,	// (0x0004521c) stacon_top_pane_g1_ParamLimits

0x87cb,	// (0x0004521c) stacon_top_pane_g1

0x60d0,	// (0x00042b21) title_pane_stacon_ParamLimits

0x60d0,	// (0x00042b21) title_pane_stacon

0x60fa,	// (0x00042b4b) uni_indicator_pane_stacon_ParamLimits

0x60fa,	// (0x00042b4b) uni_indicator_pane_stacon

0x6112,	// (0x00042b63) battery_pane_stacon_ParamLimits

0x6112,	// (0x00042b63) battery_pane_stacon

0x6156,	// (0x00042ba7) control_bottom_pane_stacon_ParamLimits

0x6156,	// (0x00042ba7) control_bottom_pane_stacon

0x6179,	// (0x00042bca) navi_pane_stacon_ParamLimits

0x6179,	// (0x00042bca) navi_pane_stacon

0x87ed,	// (0x0004523e) stacon_bottom_pane_g1_ParamLimits

0x87ed,	// (0x0004523e) stacon_bottom_pane_g1

0x5d97,	// (0x000427e8) aid_levels_signal_lsc_ParamLimits

0x5d97,	// (0x000427e8) aid_levels_signal_lsc

0x5dae,	// (0x000427ff) signal_pane_stacon_g1_ParamLimits

0x5dae,	// (0x000427ff) signal_pane_stacon_g1

0x5dc2,	// (0x00042813) signal_pane_stacon_g2_ParamLimits

0x5dc2,	// (0x00042813) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x0004c136) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0004c136) signal_pane_stacon_g

0x5df7,	// (0x00042848) title_pane_stacon_t1_ParamLimits

0x5df7,	// (0x00042848) title_pane_stacon_t1

0x8263,	// (0x00044cb4) uni_indicator_pane_stacon_g1

0x826d,	// (0x00044cbe) uni_indicator_pane_stacon_g2

0x8277,	// (0x00044cc8) uni_indicator_pane_stacon_g3

0x8281,	// (0x00044cd2) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x0004c142) uni_indicator_pane_stacon_g

0x5e1c,	// (0x0004286d) control_top_pane_stacon_g1

0x5e24,	// (0x00042875) control_top_pane_stacon_t1_ParamLimits

0x5e24,	// (0x00042875) control_top_pane_stacon_t1

0x5e5b,	// (0x000428ac) aid_levels_battery_lsc_ParamLimits

0x5e5b,	// (0x000428ac) aid_levels_battery_lsc

0x5e73,	// (0x000428c4) battery_pane_stacon_g1_ParamLimits

0x5e73,	// (0x000428c4) battery_pane_stacon_g1

0x5e86,	// (0x000428d7) battery_pane_stacon_g2_ParamLimits

0x5e86,	// (0x000428d7) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x0004c14b) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x0004c14b) battery_pane_stacon_g

0x5ec4,	// (0x00042915) navi_icon_pane_stacon

0x5ed8,	// (0x00042929) navi_navi_pane_stacon

0x5ec4,	// (0x00042915) navi_text_pane_stacon

0x5e1c,	// (0x0004286d) control_bottom_pane_stacon_g1

0x5eee,	// (0x0004293f) control_bottom_pane_stacon_t1_ParamLimits

0x5eee,	// (0x0004293f) control_bottom_pane_stacon_t1

0x82a5,	// (0x00044cf6) grid_app_pane_ParamLimits

0x82a5,	// (0x00044cf6) grid_app_pane

0x82c9,	// (0x00044d1a) scroll_pane_cp15_ParamLimits

0x82c9,	// (0x00044d1a) scroll_pane_cp15

0x82de,	// (0x00044d2f) cell_app_pane_ParamLimits

0x82de,	// (0x00044d2f) cell_app_pane

0x830a,	// (0x00044d5b) cell_app_pane_g1_ParamLimits

0x830a,	// (0x00044d5b) cell_app_pane_g1

0x832e,	// (0x00044d7f) cell_app_pane_g2_ParamLimits

0x832e,	// (0x00044d7f) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x0004c150) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x0004c150) cell_app_pane_g

0x833a,	// (0x00044d8b) cell_app_pane_t1_ParamLimits

0x833a,	// (0x00044d8b) cell_app_pane_t1

0x834c,	// (0x00044d9d) grid_highlight_pane_ParamLimits

0x834c,	// (0x00044d9d) grid_highlight_pane

0x7f3f,	// (0x00044990) cell_highlight_pane_g1

0x7f47,	// (0x00044998) cell_highlight_pane_g2

0x7f4f,	// (0x000449a0) cell_highlight_pane_g3

0x7f57,	// (0x000449a8) cell_highlight_pane_g4

0x7f5f,	// (0x000449b0) cell_highlight_pane_g5

0x7f67,	// (0x000449b8) cell_highlight_pane_g6

0x7f6f,	// (0x000449c0) cell_highlight_pane_g7

0x7f77,	// (0x000449c8) cell_highlight_pane_g8

0x7f7f,	// (0x000449d0) cell_highlight_pane_g9

0x2ada,	// (0x0003f52b) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x0004c0fe) cell_highlight_pane_g

0x835d,	// (0x00044dae) bg_scroll_pane

0x5f38,	// (0x00042989) scroll_handle_pane

0x83a4,	// (0x00044df5) scroll_bg_pane_g1

0x83b9,	// (0x00044e0a) scroll_bg_pane_g2

0x83d1,	// (0x00044e22) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0004c155) scroll_bg_pane_g

0x83e6,	// (0x00044e37) scroll_handle_focus_pane_ParamLimits

0x83e6,	// (0x00044e37) scroll_handle_focus_pane

0x83a4,	// (0x00044df5) scroll_handle_pane_g1

0x83f3,	// (0x00044e44) scroll_handle_pane_g2

0x83d1,	// (0x00044e22) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x0004c15c) scroll_handle_pane_g

0x7f90,	// (0x000449e1) bg_popup_sub_pane_cp21_ParamLimits

0x7f90,	// (0x000449e1) bg_popup_sub_pane_cp21

0x8407,	// (0x00044e58) popup_fep_japan_predictive_window_t1_ParamLimits

0x8407,	// (0x00044e58) popup_fep_japan_predictive_window_t1

0x841e,	// (0x00044e6f) popup_fep_japan_predictive_window_t2_ParamLimits

0x841e,	// (0x00044e6f) popup_fep_japan_predictive_window_t2

0x8451,	// (0x00044ea2) popup_fep_japan_predictive_window_t3_ParamLimits

0x8451,	// (0x00044ea2) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x0004c163) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x0004c163) popup_fep_japan_predictive_window_t

0x2ae4,	// (0x0003f535) bg_popup_sub_pane_cp23

0x8488,	// (0x00044ed9) listscroll_japin_cand_pane

0x8490,	// (0x00044ee1) popup_fep_japan_candidate_window_t1

0x849e,	// (0x00044eef) candidate_pane_ParamLimits

0x849e,	// (0x00044eef) candidate_pane

0x84b0,	// (0x00044f01) scroll_pane_cp30

0x84ba,	// (0x00044f0b) list_single_popup_jap_candidate_pane_ParamLimits

0x84ba,	// (0x00044f0b) list_single_popup_jap_candidate_pane

0x2ae4,	// (0x0003f535) list_highlight_pane_cp30

0x84ce,	// (0x00044f1f) list_single_popup_jap_candidate_pane_t1

0x84dd,	// (0x00044f2e) level_1_signal

0x84ea,	// (0x00044f3b) level_2_signal

0x84f7,	// (0x00044f48) level_3_signal

0x8504,	// (0x00044f55) level_4_signal

0x8511,	// (0x00044f62) level_5_signal

0x851e,	// (0x00044f6f) level_6_signal

0x852b,	// (0x00044f7c) level_7_signal

0x84dd,	// (0x00044f2e) level_1_battery

0x84ea,	// (0x00044f3b) level_2_battery

0x84f7,	// (0x00044f48) level_3_battery

0x8504,	// (0x00044f55) level_4_battery

0x8511,	// (0x00044f62) level_5_battery

0x851e,	// (0x00044f6f) level_6_battery

0x852b,	// (0x00044f7c) level_7_battery

0x8550,	// (0x00044fa1) list_menu_pane_ParamLimits

0x8550,	// (0x00044fa1) list_menu_pane

0x8561,	// (0x00044fb2) scroll_pane_cp25_ParamLimits

0x8561,	// (0x00044fb2) scroll_pane_cp25

0x857a,	// (0x00044fcb) list_double2_graphic_pane_cp2_ParamLimits

0x857a,	// (0x00044fcb) list_double2_graphic_pane_cp2

0x857a,	// (0x00044fcb) list_double2_large_graphic_pane_cp2_ParamLimits

0x857a,	// (0x00044fcb) list_double2_large_graphic_pane_cp2

0x857a,	// (0x00044fcb) list_double2_pane_cp2_ParamLimits

0x857a,	// (0x00044fcb) list_double2_pane_cp2

0x857a,	// (0x00044fcb) list_double_graphic_pane_cp2_ParamLimits

0x857a,	// (0x00044fcb) list_double_graphic_pane_cp2

0x857a,	// (0x00044fcb) list_double_large_graphic_pane_cp2_ParamLimits

0x857a,	// (0x00044fcb) list_double_large_graphic_pane_cp2

0x857a,	// (0x00044fcb) list_double_number_pane_cp2_ParamLimits

0x857a,	// (0x00044fcb) list_double_number_pane_cp2

0x857a,	// (0x00044fcb) list_double_pane_cp2_ParamLimits

0x857a,	// (0x00044fcb) list_double_pane_cp2

0x85a0,	// (0x00044ff1) list_single_2graphic_pane_cp2_ParamLimits

0x85a0,	// (0x00044ff1) list_single_2graphic_pane_cp2

0x85a0,	// (0x00044ff1) list_single_graphic_heading_pane_cp2_ParamLimits

0x85a0,	// (0x00044ff1) list_single_graphic_heading_pane_cp2

0x85a0,	// (0x00044ff1) list_single_graphic_pane_cp2_ParamLimits

0x85a0,	// (0x00044ff1) list_single_graphic_pane_cp2

0x85a0,	// (0x00044ff1) list_single_heading_pane_cp2_ParamLimits

0x85a0,	// (0x00044ff1) list_single_heading_pane_cp2

0x85bd,	// (0x0004500e) list_single_large_graphic_pane_cp2_ParamLimits

0x85bd,	// (0x0004500e) list_single_large_graphic_pane_cp2

0x85a0,	// (0x00044ff1) list_single_number_heading_pane_cp2_ParamLimits

0x85a0,	// (0x00044ff1) list_single_number_heading_pane_cp2

0x85a0,	// (0x00044ff1) list_single_number_pane_cp2_ParamLimits

0x85a0,	// (0x00044ff1) list_single_number_pane_cp2

0x85a0,	// (0x00044ff1) list_single_pane_cp2_ParamLimits

0x85a0,	// (0x00044ff1) list_single_pane_cp2

0x8612,	// (0x00045063) bg_popup_sub_pane_cp22

0x5fea,	// (0x00042a3b) popup_side_volume_key_window_g1

0x6014,	// (0x00042a65) popup_side_volume_key_window_t1

0x6032,	// (0x00042a83) volume_small_pane_cp1

0x78cd,	// (0x0004431e) bg_popup_sub_pane_cp24_ParamLimits

0x78cd,	// (0x0004431e) bg_popup_sub_pane_cp24

0x8628,	// (0x00045079) fep_china_uni_candidate_pane_ParamLimits

0x8628,	// (0x00045079) fep_china_uni_candidate_pane

0x863c,	// (0x0004508d) fep_china_uni_entry_pane

0x864c,	// (0x0004509d) popup_fep_china_uni_window_g1

0x8668,	// (0x000450b9) fep_china_uni_entry_pane_g1

0x8672,	// (0x000450c3) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0004c190) fep_china_uni_entry_pane_g

0x867c,	// (0x000450cd) fep_entry_item_pane

0x8686,	// (0x000450d7) fep_candidate_item_pane

0x868e,	// (0x000450df) fep_china_uni_candidate_pane_g1

0x8698,	// (0x000450e9) fep_china_uni_candidate_pane_g2

0x86a0,	// (0x000450f1) fep_china_uni_candidate_pane_g3

0x86a8,	// (0x000450f9) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0004c195) fep_china_uni_candidate_pane_g

0x2ada,	// (0x0003f52b) fep_entry_item_pane_g1

0x86b2,	// (0x00045103) fep_entry_item_pane_t1_ParamLimits

0x86b2,	// (0x00045103) fep_entry_item_pane_t1

0x86c8,	// (0x00045119) fep_candidate_item_pane_t1_ParamLimits

0x86c8,	// (0x00045119) fep_candidate_item_pane_t1

0x86dd,	// (0x0004512e) fep_candidate_item_pane_t2_ParamLimits

0x86dd,	// (0x0004512e) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0004c19e) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0004c19e) fep_candidate_item_pane_t

0x7651,	// (0x000440a2) list_highlight_pane_cp31_ParamLimits

0x7651,	// (0x000440a2) list_highlight_pane_cp31

0x86ef,	// (0x00045140) level_1_signal_lsc

0x86f8,	// (0x00045149) level_2_signal_lsc

0x8701,	// (0x00045152) level_3_signal_lsc

0x870a,	// (0x0004515b) level_4_signal_lsc

0x8713,	// (0x00045164) level_5_signal_lsc

0x871c,	// (0x0004516d) level_6_signal_lsc

0x8725,	// (0x00045176) level_7_signal_lsc

0x8725,	// (0x00045176) level_1_battery_lsc

0x872e,	// (0x0004517f) level_2_battery_lsc

0x8737,	// (0x00045188) level_3_battery_lsc

0x8740,	// (0x00045191) level_4_battery_lsc

0x8749,	// (0x0004519a) level_5_battery_lsc

0x8752,	// (0x000451a3) level_6_battery_lsc

0x86ef,	// (0x00045140) level_7_battery_lsc

0x875b,	// (0x000451ac) scroll_handle_focus_pane_g1

0x8764,	// (0x000451b5) scroll_handle_focus_pane_g2

0x876d,	// (0x000451be) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0004c1a3) scroll_handle_focus_pane_g

0x520d,	// (0x00041c5e) list_single_2graphic_pane_g1_ParamLimits

0x520d,	// (0x00041c5e) list_single_2graphic_pane_g1

0x5d0c,	// (0x0004275d) list_single_2graphic_pane_g2_ParamLimits

0x5d0c,	// (0x0004275d) list_single_2graphic_pane_g2

0x5cee,	// (0x0004273f) list_single_2graphic_pane_g3_ParamLimits

0x5cee,	// (0x0004273f) list_single_2graphic_pane_g3

0x603a,	// (0x00042a8b) list_single_2graphic_pane_g4_ParamLimits

0x603a,	// (0x00042a8b) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0004c1aa) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0004c1aa) list_single_2graphic_pane_g

0x5219,	// (0x00041c6a) list_single_2graphic_pane_t1_ParamLimits

0x5219,	// (0x00041c6a) list_single_2graphic_pane_t1

0x6046,	// (0x00042a97) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6046,	// (0x00042a97) list_double2_graphic_large_graphic_pane_g1

0x4d93,	// (0x000417e4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4d93,	// (0x000417e4) list_double2_graphic_large_graphic_pane_g2

0x4ce0,	// (0x00041731) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ce0,	// (0x00041731) list_double2_graphic_large_graphic_pane_g3

0x5247,	// (0x00041c98) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5247,	// (0x00041c98) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0004c1b3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0004c1b3) list_double2_graphic_large_graphic_pane_g

0x5253,	// (0x00041ca4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5253,	// (0x00041ca4) list_double2_graphic_large_graphic_pane_t1

0x5269,	// (0x00041cba) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5269,	// (0x00041cba) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0004c1bc) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0004c1bc) list_double2_graphic_large_graphic_pane_t

0x88af,	// (0x00045300) popup_fast_swap_window_ParamLimits

0x88af,	// (0x00045300) popup_fast_swap_window

0x88cd,	// (0x0004531e) popup_side_volume_key_window

0x88eb,	// (0x0004533c) stacon_top_pane

0x88f5,	// (0x00045346) status_pane_ParamLimits

0x88f5,	// (0x00045346) status_pane

0x88eb,	// (0x0004533c) status_small_pane

0x2ae4,	// (0x0003f535) control_pane

0x2ae4,	// (0x0003f535) stacon_bottom_pane

0x7ebb,	// (0x0004490c) scroll_pane_cp121

0x7eb2,	// (0x00044903) set_content_pane

0x8776,	// (0x000451c7) bg_active_tab_pane_g1_cp1

0x877f,	// (0x000451d0) bg_active_tab_pane_g2_cp1

0x8788,	// (0x000451d9) bg_active_tab_pane_g3_cp1

0x8776,	// (0x000451c7) bg_passive_tab_pane_g1_cp1

0x877f,	// (0x000451d0) bg_passive_tab_pane_g2_cp1

0x8788,	// (0x000451d9) bg_passive_tab_pane_g3_cp1

0x8791,	// (0x000451e2) bg_active_tab_pane_g1_cp2

0x877f,	// (0x000451d0) bg_active_tab_pane_g2_cp2

0x879a,	// (0x000451eb) bg_active_tab_pane_g3_cp2

0x8791,	// (0x000451e2) bg_passive_tab_pane_g1_cp2

0x877f,	// (0x000451d0) bg_passive_tab_pane_g2_cp2

0x879a,	// (0x000451eb) bg_passive_tab_pane_g3_cp2

0x87a3,	// (0x000451f4) bg_active_tab_pane_g1_cp3

0x877f,	// (0x000451d0) bg_active_tab_pane_g2_cp3

0x87ac,	// (0x000451fd) bg_active_tab_pane_g3_cp3

0x87a3,	// (0x000451f4) bg_passive_tab_pane_g1_cp3

0x877f,	// (0x000451d0) bg_passive_tab_pane_g2_cp3

0x87ac,	// (0x000451fd) bg_passive_tab_pane_g3_cp3

0x87b5,	// (0x00045206) bg_active_tab_pane_g1_cp4

0x877f,	// (0x000451d0) bg_active_tab_pane_g2_cp4

0x87c0,	// (0x00045211) bg_active_tab_pane_g3_cp4

0x87b5,	// (0x00045206) bg_passive_tab_pane_g1_cp4

0x877f,	// (0x000451d0) bg_passive_tab_pane_g2_cp4

0x87c0,	// (0x00045211) bg_passive_tab_pane_g3_cp4

0x8809,	// (0x0004525a) bg_active_tab_pane_g1_cp5

0x877f,	// (0x000451d0) bg_active_tab_pane_g2_cp5

0x8812,	// (0x00045263) bg_active_tab_pane_g3_cp5

0x8809,	// (0x0004525a) bg_passive_tab_pane_g1_cp5

0x877f,	// (0x000451d0) bg_passive_tab_pane_g2_cp5

0x8812,	// (0x00045263) bg_passive_tab_pane_g3_cp5

0x881b,	// (0x0004526c) list_set_graphic_pane_ParamLimits

0x881b,	// (0x0004526c) list_set_graphic_pane

0x2ae4,	// (0x0003f535) bg_set_opt_pane_cp4

0x8830,	// (0x00045281) list_set_graphic_pane_g1_ParamLimits

0x8830,	// (0x00045281) list_set_graphic_pane_g1

0x883c,	// (0x0004528d) list_set_graphic_pane_g2_ParamLimits

0x883c,	// (0x0004528d) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0004c1c1) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0004c1c1) list_set_graphic_pane_g

0x0009,

0xfadf,	// (0x0004c530) volume_small_pane_cp_g

0x8860,	// (0x000452b1) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8860,	// (0x000452b1) list_double2_large_graphic_pane_g1_cp2

0x886e,	// (0x000452bf) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x886e,	// (0x000452bf) list_double2_large_graphic_pane_g2_cp2

0x887f,	// (0x000452d0) list_double2_large_graphic_pane_g3_cp2

0x8887,	// (0x000452d8) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8887,	// (0x000452d8) list_double2_large_graphic_pane_t1_cp2

0x889d,	// (0x000452ee) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x889d,	// (0x000452ee) list_double2_large_graphic_pane_t2_cp2

0xab22,	// (0x00047573) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab22,	// (0x00047573) list_double_large_graphic_pane_g1_cp2

0xab35,	// (0x00047586) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab35,	// (0x00047586) list_double_large_graphic_pane_g2_cp2

0x8a13,	// (0x00045464) list_double_large_graphic_pane_g3_cp2

0xab46,	// (0x00047597) list_double_large_graphic_pane_g4_cp

0xab4e,	// (0x0004759f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab4e,	// (0x0004759f) list_double_large_graphic_pane_t1_cp2

0xab65,	// (0x000475b6) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab65,	// (0x000475b6) list_double_large_graphic_pane_t2_cp2

0x8903,	// (0x00045354) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8903,	// (0x00045354) list_double2_graphic_pane_g1_cp2

0x8911,	// (0x00045362) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8911,	// (0x00045362) list_double2_graphic_pane_g2_cp2

0x8922,	// (0x00045373) list_double2_graphic_pane_g3_cp2

0x892c,	// (0x0004537d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x892c,	// (0x0004537d) list_double2_graphic_pane_t1_cp2

0x8942,	// (0x00045393) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8942,	// (0x00045393) list_double2_graphic_pane_t2_cp2

0x8954,	// (0x000453a5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8954,	// (0x000453a5) list_single_number_heading_pane_g1_cp2

0x8960,	// (0x000453b1) list_single_number_heading_pane_g2_cp2

0x8968,	// (0x000453b9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8968,	// (0x000453b9) list_single_number_heading_pane_t1_cp2

0x897e,	// (0x000453cf) list_single_number_heading_pane_t2_cp2_ParamLimits

0x897e,	// (0x000453cf) list_single_number_heading_pane_t2_cp2

0x8992,	// (0x000453e3) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8992,	// (0x000453e3) list_single_number_heading_pane_t3_cp2

0x8954,	// (0x000453a5) list_single_heading_pane_g1_cp2_ParamLimits

0x8954,	// (0x000453a5) list_single_heading_pane_g1_cp2

0x8960,	// (0x000453b1) list_single_heading_pane_g2_cp2

0x8968,	// (0x000453b9) list_single_heading_pane_t1_cp2_ParamLimits

0x8968,	// (0x000453b9) list_single_heading_pane_t1_cp2

0xa91c,	// (0x0004736d) list_single_heading_pane_t2_cp2_ParamLimits

0xa91c,	// (0x0004736d) list_single_heading_pane_t2_cp2

0xa85e,	// (0x000472af) list_double_graphic_pane_g1_cp2_ParamLimits

0xa85e,	// (0x000472af) list_double_graphic_pane_g1_cp2

0xa86a,	// (0x000472bb) list_double_graphic_pane_g2_cp2_ParamLimits

0xa86a,	// (0x000472bb) list_double_graphic_pane_g2_cp2

0xa879,	// (0x000472ca) list_double_graphic_pane_g3_cp2

0xa881,	// (0x000472d2) list_double_graphic_pane_t1_cp2_ParamLimits

0xa881,	// (0x000472d2) list_double_graphic_pane_t1_cp2

0xa897,	// (0x000472e8) list_double_graphic_pane_t2_cp2_ParamLimits

0xa897,	// (0x000472e8) list_double_graphic_pane_t2_cp2

0x8a07,	// (0x00045458) list_double_number_pane_g1_cp2_ParamLimits

0x8a07,	// (0x00045458) list_double_number_pane_g1_cp2

0x8a13,	// (0x00045464) list_double_number_pane_g2_cp2

0xa822,	// (0x00047273) list_double_number_pane_t1_cp2_ParamLimits

0xa822,	// (0x00047273) list_double_number_pane_t1_cp2

0xa836,	// (0x00047287) list_double_number_pane_t2_cp2_ParamLimits

0xa836,	// (0x00047287) list_double_number_pane_t2_cp2

0xa84c,	// (0x0004729d) list_double_number_pane_t3_cp2_ParamLimits

0xa84c,	// (0x0004729d) list_double_number_pane_t3_cp2

0xa70b,	// (0x0004715c) list_single_graphic_pane_g1_cp2_ParamLimits

0xa70b,	// (0x0004715c) list_single_graphic_pane_g1_cp2

0x8a6d,	// (0x000454be) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a6d,	// (0x000454be) list_single_graphic_pane_g2_cp2

0x8a79,	// (0x000454ca) list_single_graphic_pane_g3_cp2

0xa6e1,	// (0x00047132) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6e1,	// (0x00047132) list_single_graphic_pane_t1_cp2

0x8a6d,	// (0x000454be) list_single_number_pane_g1_cp2_ParamLimits

0x8a6d,	// (0x000454be) list_single_number_pane_g1_cp2

0x8a79,	// (0x000454ca) list_single_number_pane_g2_cp2

0xa6e1,	// (0x00047132) list_single_number_pane_t1_cp2_ParamLimits

0xa6e1,	// (0x00047132) list_single_number_pane_t1_cp2

0xa6f7,	// (0x00047148) list_single_number_pane_t2_cp2_ParamLimits

0xa6f7,	// (0x00047148) list_single_number_pane_t2_cp2

0x886e,	// (0x000452bf) list_double2_pane_g1_cp2_ParamLimits

0x886e,	// (0x000452bf) list_double2_pane_g1_cp2

0x887f,	// (0x000452d0) list_double2_pane_g2_cp2

0x89df,	// (0x00045430) list_double2_pane_t1_cp2_ParamLimits

0x89df,	// (0x00045430) list_double2_pane_t1_cp2

0x89f5,	// (0x00045446) list_double2_pane_t2_cp2_ParamLimits

0x89f5,	// (0x00045446) list_double2_pane_t2_cp2

0x8a07,	// (0x00045458) list_double_pane_g1_cp2_ParamLimits

0x8a07,	// (0x00045458) list_double_pane_g1_cp2

0x8a13,	// (0x00045464) list_double_pane_g2_cp2

0x8a1b,	// (0x0004546c) list_double_pane_t1_cp2_ParamLimits

0x8a1b,	// (0x0004546c) list_double_pane_t1_cp2

0x8a31,	// (0x00045482) list_double_pane_t2_cp2_ParamLimits

0x8a31,	// (0x00045482) list_double_pane_t2_cp2

0x8a5d,	// (0x000454ae) list_single_pane_cp2_g3

0x8a6d,	// (0x000454be) list_single_pane_g1_cp2_ParamLimits

0x8a6d,	// (0x000454be) list_single_pane_g1_cp2

0x8a79,	// (0x000454ca) list_single_pane_g2_cp2

0x8a81,	// (0x000454d2) list_single_pane_t1_cp2_ParamLimits

0x8a81,	// (0x000454d2) list_single_pane_t1_cp2

0x8a99,	// (0x000454ea) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a99,	// (0x000454ea) list_single_large_graphic_pane_g1_cp2

0x8aa7,	// (0x000454f8) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8aa7,	// (0x000454f8) list_single_large_graphic_pane_g2_cp2

0x8ab3,	// (0x00045504) list_single_large_graphic_pane_g3_cp2

0x8abb,	// (0x0004550c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8abb,	// (0x0004550c) list_single_large_graphic_pane_g4_cp1

0x8ad5,	// (0x00045526) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8ad5,	// (0x00045526) list_single_large_graphic_pane_t1_cp2

0xa6ab,	// (0x000470fc) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6ab,	// (0x000470fc) list_single_graphic_heading_pane_g1_cp2

0xa678,	// (0x000470c9) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa678,	// (0x000470c9) list_single_graphic_heading_pane_g4_cp2

0x8a79,	// (0x000454ca) list_single_graphic_heading_pane_g5_cp2

0xa6b7,	// (0x00047108) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6b7,	// (0x00047108) list_single_graphic_heading_pane_t1_cp2

0xa6cd,	// (0x0004711e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6cd,	// (0x0004711e) list_single_graphic_heading_pane_t2_cp2

0xa66c,	// (0x000470bd) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa66c,	// (0x000470bd) list_single_2graphic_pane_g1_cp2

0xa678,	// (0x000470c9) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa678,	// (0x000470c9) list_single_2graphic_pane_g2_cp2

0x8a79,	// (0x000454ca) list_single_2graphic_pane_g3_cp2

0xa689,	// (0x000470da) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa689,	// (0x000470da) list_single_2graphic_pane_g4_cp2

0xa695,	// (0x000470e6) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa695,	// (0x000470e6) list_single_2graphic_pane_t1_cp2

0x2ada,	// (0x0003f52b) list_highlight_pane_g10_cp1

0xa244,	// (0x00046c95) list_highlight_pane_g1_cp1

0xa24c,	// (0x00046c9d) list_highlight_pane_g2_cp1

0xa254,	// (0x00046ca5) list_highlight_pane_g3_cp1

0xa25c,	// (0x00046cad) list_highlight_pane_g4_cp1

0xa264,	// (0x00046cb5) list_highlight_pane_g5_cp1

0xa26c,	// (0x00046cbd) list_highlight_pane_g6_cp1

0xa274,	// (0x00046cc5) list_highlight_pane_g7_cp1

0xa27c,	// (0x00046ccd) list_highlight_pane_g8_cp1

0xa284,	// (0x00046cd5) list_highlight_pane_g9_cp1

0xa164,	// (0x00046bb5) form_field_slider_pane_t3

0xa172,	// (0x00046bc3) form_field_slider_pane_t4

0xa180,	// (0x00046bd1) slider_form_pane_ParamLimits

0xa180,	// (0x00046bd1) slider_form_pane

0x2ae4,	// (0x0003f535) control_abbreviations

0x2ae4,	// (0x0003f535) control_conventions

0x2ae4,	// (0x0003f535) control_definitions

0x2ae4,	// (0x0003f535) format_table_attribute

0xa972,	// (0x000473c3) bg_popup_preview_window_pane_g9

0x2ae4,	// (0x0003f535) format_table_data2

0x2ae4,	// (0x0003f535) format_table_data3

0x2ae4,	// (0x0003f535) format_table_data_example

0x0008,

0x2ae4,	// (0x0003f535) intro_purpose

0xf905,	// (0x0004c356) bg_popup_preview_window_pane_g

0x2ae4,	// (0x0003f535) texts_category

0x2ae4,	// (0x0003f535) texts_graphics

0x8aeb,	// (0x0004553c) text_digital

0x8afa,	// (0x0004554b) text_primary

0x8b09,	// (0x0004555a) text_primary_small

0x8b18,	// (0x00045569) text_secondary

0x8b27,	// (0x00045578) text_title

0xb10e,	// (0x00047b5f) bg_passive_tab_pane_g1_cp3_srt

0x877f,	// (0x000451d0) bg_passive_tab_pane_g2_cp3_srt

0xb117,	// (0x00047b68) bg_passive_tab_pane_g3_cp3_srt

0x7651,	// (0x000440a2) bg_active_tab_pane_cp3_srt_ParamLimits

0x7651,	// (0x000440a2) bg_active_tab_pane_cp3_srt

0xb120,	// (0x00047b71) tabs_4_active_pane_srt_g1

0xb128,	// (0x00047b79) tabs_4_active_pane_srt_t1_ParamLimits

0xb128,	// (0x00047b79) tabs_4_active_pane_srt_t1

0xb10e,	// (0x00047b5f) bg_active_tab_pane_g1_cp3_copy1

0x877f,	// (0x000451d0) bg_active_tab_pane_g2_cp3_copy1

0xb117,	// (0x00047b68) bg_active_tab_pane_g3_cp3_copy1

0x7651,	// (0x000440a2) tabs_2_long_active_pane_srt_ParamLimits

0x7651,	// (0x000440a2) tabs_2_long_active_pane_srt

0x7651,	// (0x000440a2) tabs_2_long_passive_pane_srt_ParamLimits

0x7651,	// (0x000440a2) tabs_2_long_passive_pane_srt

0x80cf,	// (0x00044b20) bg_passive_tab_pane_cp4_srt_ParamLimits

0x80cf,	// (0x00044b20) bg_passive_tab_pane_cp4_srt

0xadc2,	// (0x00047813) bg_passive_tab_pane_g1_cp4_srt

0x877f,	// (0x000451d0) bg_passive_tab_pane_g2_cp4_srt

0xadcb,	// (0x0004781c) bg_passive_tab_pane_g3_cp4_srt

0x80ae,	// (0x00044aff) bg_active_tab_pane_cp4_srt_ParamLimits

0x80ae,	// (0x00044aff) bg_active_tab_pane_cp4_srt

0xadd4,	// (0x00047825) tabs_2_long_active_pane_srt_t1_ParamLimits

0xadd4,	// (0x00047825) tabs_2_long_active_pane_srt_t1

0xadc2,	// (0x00047813) bg_active_tab_pane_g1_cp4_srt

0x877f,	// (0x000451d0) bg_active_tab_pane_g2_cp4_srt

0xadcb,	// (0x0004781c) bg_active_tab_pane_g3_cp4_srt

0x78cd,	// (0x0004431e) tabs_3_long_active_pane_srt_ParamLimits

0x78cd,	// (0x0004431e) tabs_3_long_active_pane_srt

0x78cd,	// (0x0004431e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x78cd,	// (0x0004431e) tabs_3_long_passive_pane_cp_srt

0x78cd,	// (0x0004431e) tabs_3_long_passive_pane_srt_ParamLimits

0x78cd,	// (0x0004431e) tabs_3_long_passive_pane_srt

0x80cf,	// (0x00044b20) bg_passive_tab_pane_cp5_srt_ParamLimits

0x80cf,	// (0x00044b20) bg_passive_tab_pane_cp5_srt

0x8809,	// (0x0004525a) bg_passive_tab_pane_g1_cp5_srt

0x877f,	// (0x000451d0) bg_passive_tab_pane_g2_cp5_srt

0x8812,	// (0x00045263) bg_passive_tab_pane_g3_cp5_srt

0x80ae,	// (0x00044aff) bg_active_tab_pane_cp5_srt_ParamLimits

0x80ae,	// (0x00044aff) bg_active_tab_pane_cp5_srt

0xadb0,	// (0x00047801) tabs_3_long_active_pane_srt_t1_ParamLimits

0xadb0,	// (0x00047801) tabs_3_long_active_pane_srt_t1

0x8809,	// (0x0004525a) bg_active_tab_pane_g1_cp5_srt

0x877f,	// (0x000451d0) bg_active_tab_pane_g2_cp5_srt

0x8812,	// (0x00045263) bg_active_tab_pane_g3_cp5_srt

0xada2,	// (0x000477f3) navi_text_pane_srt_t1

0xad9a,	// (0x000477eb) navi_icon_pane_srt_g1

0x8cfe,	// (0x0004574f) midp_editing_number_pane_srt

0x8b36,	// (0x00045587) midp_ticker_pane_srt

0x8d06,	// (0x00045757) midp_ticker_pane_srt_g1

0x8d0e,	// (0x0004575f) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0004c1e0) midp_ticker_pane_srt_g

0x8d16,	// (0x00045767) midp_ticker_pane_srt_t1

0xad8b,	// (0x000477dc) midp_editing_number_pane_t1_copy1

0x8b3e,	// (0x0004558f) listscroll_midp_pane

0x8b3e,	// (0x0004558f) midp_form_pane

0x8bac,	// (0x000455fd) midp_info_popup_window_ParamLimits

0x8bac,	// (0x000455fd) midp_info_popup_window

0x7f90,	// (0x000449e1) bg_popup_sub_pane_cp50_ParamLimits

0x7f90,	// (0x000449e1) bg_popup_sub_pane_cp50

0x9e7a,	// (0x000468cb) listscroll_midp_info_pane_ParamLimits

0x9e7a,	// (0x000468cb) listscroll_midp_info_pane

0x9e62,	// (0x000468b3) listscroll_form_midp_pane_ParamLimits

0x9e62,	// (0x000468b3) listscroll_form_midp_pane

0x9e6e,	// (0x000468bf) scroll_bar_cp050

0x9e42,	// (0x00046893) list_midp_pane

0xbb98,	// (0x000485e9) signal_pane_g2_cp

0x9d7c,	// (0x000467cd) listscroll_midp_info_pane_t1_ParamLimits

0x9d7c,	// (0x000467cd) listscroll_midp_info_pane_t1

0x9d94,	// (0x000467e5) listscroll_midp_info_pane_t2_ParamLimits

0x9d94,	// (0x000467e5) listscroll_midp_info_pane_t2

0x9dd2,	// (0x00046823) listscroll_midp_info_pane_t3_ParamLimits

0x9dd2,	// (0x00046823) listscroll_midp_info_pane_t3

0x9e0c,	// (0x0004685d) listscroll_midp_info_pane_t4_ParamLimits

0x9e0c,	// (0x0004685d) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0004c291) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0004c291) listscroll_midp_info_pane_t

0x805a,	// (0x00044aab) scroll_pane_cp21

0x9d16,	// (0x00046767) form_midp_field_choice_group_pane

0x9d1f,	// (0x00046770) form_midp_field_text_pane

0x9d62,	// (0x000467b3) form_midp_field_time_pane

0x9d6a,	// (0x000467bb) form_midp_gauge_slider_pane

0x9d73,	// (0x000467c4) form_midp_gauge_wait_pane

0x2ae4,	// (0x0003f535) form_midp_image_pane

0x535a,	// (0x00041dab) list_single_midp_pane_ParamLimits

0x535a,	// (0x00041dab) list_single_midp_pane

0x9cda,	// (0x0004672b) form_midp_field_text_pane_t1

0x9aee,	// (0x0004653f) input_focus_pane_cp050

0x9d05,	// (0x00046756) list_midp_form_text_pane

0x9ca9,	// (0x000466fa) form_midp_field_choice_group_pane_t1

0x9cb7,	// (0x00046708) input_focus_pane_cp051

0x9ccb,	// (0x0004671c) list_midp_choice_pane

0x2ae4,	// (0x0003f535) status_idle_pane

0x9c8d,	// (0x000466de) form_midp_field_time_pane_t1

0x2ada,	// (0x0003f52b) wait_anim_pane_g2_copy1

0x9c9b,	// (0x000466ec) form_midp_field_time_pane_t2

0x0001,

0x8c5c,	// (0x000456ad) aid_navinavi_width_2_pane

0xf83b,	// (0x0004c28c) form_midp_field_time_pane_t

0x2ae4,	// (0x0003f535) input_focus_pane_cp052

0x2ae4,	// (0x0003f535) bg_input_focus_pane_cp040

0x9c4d,	// (0x0004669e) form_midp_gauge_slider_pane_t1

0x9c5b,	// (0x000466ac) form_midp_gauge_slider_pane_t2

0x9c69,	// (0x000466ba) form_midp_gauge_slider_pane_t3

0x9c77,	// (0x000466c8) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0004c283) form_midp_gauge_slider_pane_t

0x9c85,	// (0x000466d6) form_midp_slider_pane

0x7651,	// (0x000440a2) bg_input_focus_pane_cp041_ParamLimits

0x7651,	// (0x000440a2) bg_input_focus_pane_cp041

0x9c1a,	// (0x0004666b) form_midp_gauge_wait_pane_t1_ParamLimits

0x9c1a,	// (0x0004666b) form_midp_gauge_wait_pane_t1

0x9c2c,	// (0x0004667d) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c2c,	// (0x0004667d) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0004c27e) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0004c27e) form_midp_gauge_wait_pane_t

0x9c3e,	// (0x0004668f) form_midp_wait_pane_ParamLimits

0x9c3e,	// (0x0004668f) form_midp_wait_pane

0x9be2,	// (0x00046633) form_midp_image_pane_g1

0x9beb,	// (0x0004663c) form_midp_image_pane_t1

0x9bfa,	// (0x0004664b) form_midp_image_pane_t2

0x9c09,	// (0x0004665a) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0004c277) form_midp_image_pane_t

0x9bd9,	// (0x0004662a) list_single_midp_pane_g1

0x534b,	// (0x00041d9c) list_single_midp_pane_t1

0x9bbf,	// (0x00046610) list_midp_form_item_pane_ParamLimits

0x9bbf,	// (0x00046610) list_midp_form_item_pane

0x8c04,	// (0x00045655) list_midp_form_item_pane_t1

0x8c13,	// (0x00045664) midp_ticker_pane_g1

0x8c1f,	// (0x00045670) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0004c1c6) midp_ticker_pane_g

0x8c2b,	// (0x0004567c) midp_ticker_pane_t1

0xb00a,	// (0x00047a5b) midp_editing_number_pane_t1

0xafe8,	// (0x00047a39) midp_editing_number_pane

0xaff7,	// (0x00047a48) midp_ticker_pane

0xad7b,	// (0x000477cc) ai_message_heading_pane

0x2ae4,	// (0x0003f535) bg_popup_window_pane_cp14

0xad83,	// (0x000477d4) listscroll_ai_message_pane

0xad01,	// (0x00047752) ai_message_heading_pane_g1_ParamLimits

0xad01,	// (0x00047752) ai_message_heading_pane_g1

0xad0d,	// (0x0004775e) ai_message_heading_pane_g2_ParamLimits

0xad0d,	// (0x0004775e) ai_message_heading_pane_g2

0xad1b,	// (0x0004776c) ai_message_heading_pane_g3_ParamLimits

0xad1b,	// (0x0004776c) ai_message_heading_pane_g3

0xad27,	// (0x00047778) ai_message_heading_pane_g4_ParamLimits

0xad27,	// (0x00047778) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0004c3b8) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0004c3b8) ai_message_heading_pane_g

0xad33,	// (0x00047784) ai_message_heading_pane_t1_ParamLimits

0xad33,	// (0x00047784) ai_message_heading_pane_t1

0xad4d,	// (0x0004779e) ai_message_heading_pane_t2_ParamLimits

0xad4d,	// (0x0004779e) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0004c3c1) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0004c3c1) ai_message_heading_pane_t

0xad61,	// (0x000477b2) bg_popup_heading_pane_cp1_ParamLimits

0xad61,	// (0x000477b2) bg_popup_heading_pane_cp1

0xacef,	// (0x00047740) list_ai_message_pane_ParamLimits

0xacef,	// (0x00047740) list_ai_message_pane

0x805a,	// (0x00044aab) scroll_pane_cp10

0xac8b,	// (0x000476dc) list_ai_message_pane_g1

0xac93,	// (0x000476e4) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0004c395) list_ai_message_pane_g

0xac9b,	// (0x000476ec) list_ai_message_pane_t1_ParamLimits

0xac9b,	// (0x000476ec) list_ai_message_pane_t1

0xacb0,	// (0x00047701) list_ai_message_pane_t2_ParamLimits

0xacb0,	// (0x00047701) list_ai_message_pane_t2

0xacc5,	// (0x00047716) list_ai_message_pane_t3_ParamLimits

0xacc5,	// (0x00047716) list_ai_message_pane_t3

0xacda,	// (0x0004772b) list_ai_message_pane_t4_ParamLimits

0xacda,	// (0x0004772b) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0004c39a) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0004c39a) list_ai_message_pane_t

0xac74,	// (0x000476c5) cell_ai_soft_ind_pane_ParamLimits

0xac74,	// (0x000476c5) cell_ai_soft_ind_pane

0x8c3d,	// (0x0004568e) cell_ai_soft_ind_pane_g1_ParamLimits

0x8c3d,	// (0x0004568e) cell_ai_soft_ind_pane_g1

0x2ae4,	// (0x0003f535) grid_highlight_cp1

0x8c4a,	// (0x0004569b) text_secondary_cp56_ParamLimits

0x8c4a,	// (0x0004569b) text_secondary_cp56

0xac49,	// (0x0004769a) example_general_pane_ParamLimits

0xac49,	// (0x0004769a) example_general_pane

0xac55,	// (0x000476a6) example_parent_pane_g1_ParamLimits

0xac55,	// (0x000476a6) example_parent_pane_g1

0xac61,	// (0x000476b2) example_parent_pane_t1_ParamLimits

0xac61,	// (0x000476b2) example_parent_pane_t1

0x9277,	// (0x00045cc8) popup_preview_text_window_ParamLimits

0x9277,	// (0x00045cc8) popup_preview_text_window

0x8a65,	// (0x000454b6) list_single_pane_cp2_g4

0x7983,	// (0x000443d4) bg_popup_preview_window_pane_ParamLimits

0x7983,	// (0x000443d4) bg_popup_preview_window_pane

0xa97c,	// (0x000473cd) popup_preview_text_window_t1_ParamLimits

0xa97c,	// (0x000473cd) popup_preview_text_window_t1

0xa99a,	// (0x000473eb) popup_preview_text_window_t2_ParamLimits

0xa99a,	// (0x000473eb) popup_preview_text_window_t2

0xa9e3,	// (0x00047434) popup_preview_text_window_t3_ParamLimits

0xa9e3,	// (0x00047434) popup_preview_text_window_t3

0xaa28,	// (0x00047479) popup_preview_text_window_t4_ParamLimits

0xaa28,	// (0x00047479) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0004c369) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0004c369) popup_preview_text_window_t

0xaaa6,	// (0x000474f7) scroll_pane_cp11

0x99fc,	// (0x0004644d) bg_popup_preview_window_pane_g1

0xa930,	// (0x00047381) bg_popup_preview_window_pane_g2

0xa93a,	// (0x0004738b) bg_popup_preview_window_pane_g3

0xa944,	// (0x00047395) bg_popup_preview_window_pane_g4

0xa94e,	// (0x0004739f) bg_popup_preview_window_pane_g5

0xa958,	// (0x000473a9) bg_popup_preview_window_pane_g6

0xa960,	// (0x000473b1) bg_popup_preview_window_pane_g7

0xa968,	// (0x000473b9) bg_popup_preview_window_pane_g8

0x5873,	// (0x000422c4) aid_popup_width_pane

0x9253,	// (0x00045ca4) popup_midp_note_alarm_window_ParamLimits

0x9253,	// (0x00045ca4) popup_midp_note_alarm_window

0x7ecc,	// (0x0004491d) data_form_pane_ParamLimits

0x5089,	// (0x00041ada) form_field_data_pane_g1

0x5093,	// (0x00041ae4) form_field_data_pane_t1_ParamLimits

0x7ed8,	// (0x00044929) input_focus_pane_ParamLimits

0x7ee6,	// (0x00044937) data_form_wide_pane_ParamLimits

0x50ad,	// (0x00041afe) form_field_data_wide_pane_g1

0x50b9,	// (0x00041b0a) form_field_data_wide_pane_t1_ParamLimits

0x7c49,	// (0x0004469a) input_focus_pane_cp6_ParamLimits

0x8005,	// (0x00044a56) input_popup_find_pane_g1_ParamLimits

0x8005,	// (0x00044a56) input_popup_find_pane_g1

0x5e97,	// (0x000428e8) aid_navi_side_left_pane

0x5eac,	// (0x000428fd) aid_navi_side_right_pane

0xa33f,	// (0x00046d90) bg_popup_window_pane_cp30_ParamLimits

0xa33f,	// (0x00046d90) bg_popup_window_pane_cp30

0xa3b9,	// (0x00046e0a) popup_midp_note_alarm_window_g1_ParamLimits

0xa3b9,	// (0x00046e0a) popup_midp_note_alarm_window_g1

0xa3e9,	// (0x00046e3a) popup_midp_note_alarm_window_t1_ParamLimits

0xa3e9,	// (0x00046e3a) popup_midp_note_alarm_window_t1

0xa48a,	// (0x00046edb) popup_midp_note_alarm_window_t2_ParamLimits

0xa48a,	// (0x00046edb) popup_midp_note_alarm_window_t2

0xa538,	// (0x00046f89) popup_midp_note_alarm_window_t3_ParamLimits

0xa538,	// (0x00046f89) popup_midp_note_alarm_window_t3

0xa56a,	// (0x00046fbb) popup_midp_note_alarm_window_t4_ParamLimits

0xa56a,	// (0x00046fbb) popup_midp_note_alarm_window_t4

0xa590,	// (0x00046fe1) popup_midp_note_alarm_window_t5_ParamLimits

0xa590,	// (0x00046fe1) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0004c306) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0004c306) popup_midp_note_alarm_window_t

0xa63c,	// (0x0004708d) wait_bar_pane_cp1_ParamLimits

0xa63c,	// (0x0004708d) wait_bar_pane_cp1

0x2ae4,	// (0x0003f535) wait_anim_pane_copy1

0x2ae4,	// (0x0003f535) wait_border_pane_copy1

0xa024,	// (0x00046a75) wait_border_pane_g1_copy1

0x50d3,	// (0x00041b24) form_field_popup_pane_g1

0x50db,	// (0x00041b2c) form_field_popup_pane_t1_ParamLimits

0x7ed8,	// (0x00044929) input_focus_pane_cp7_ParamLimits

0x7f12,	// (0x00044963) list_form_pane_ParamLimits

0x50f5,	// (0x00041b46) form_field_popup_wide_pane_g1

0x50fd,	// (0x00041b4e) form_field_popup_wide_pane_t1_ParamLimits

0x7ed8,	// (0x00044929) input_focus_pane_cp8_ParamLimits

0x7f1e,	// (0x0004496f) list_form_wide_pane_ParamLimits

0xb19b,	// (0x00047bec) aid_size_cell_graphic_pane

0x5189,	// (0x00041bda) data_form_pane_t1_ParamLimits

0x53a1,	// (0x00041df2) data_form_wide_pane_t1_ParamLimits

0x95aa,	// (0x00045ffb) bg_status_flat_pane

0x75b1,	// (0x00044002) title_pane_t1_ParamLimits

0x7619,	// (0x0004406a) title_pane_t2_ParamLimits

0x763f,	// (0x00044090) title_pane_t3_ParamLimits

0xf573,	// (0x0004bfc4) title_pane_t_ParamLimits

0x84dd,	// (0x00044f2e) level_1_signal_ParamLimits

0x84ea,	// (0x00044f3b) level_2_signal_ParamLimits

0x84f7,	// (0x00044f48) level_3_signal_ParamLimits

0x8504,	// (0x00044f55) level_4_signal_ParamLimits

0x8511,	// (0x00044f62) level_5_signal_ParamLimits

0x851e,	// (0x00044f6f) level_6_signal_ParamLimits

0x852b,	// (0x00044f7c) level_7_signal_ParamLimits

0x84dd,	// (0x00044f2e) level_1_battery_ParamLimits

0x84ea,	// (0x00044f3b) level_2_battery_ParamLimits

0x84f7,	// (0x00044f48) level_3_battery_ParamLimits

0x8504,	// (0x00044f55) level_4_battery_ParamLimits

0x8511,	// (0x00044f62) level_5_battery_ParamLimits

0x851e,	// (0x00044f6f) level_6_battery_ParamLimits

0x852b,	// (0x00044f7c) level_7_battery_ParamLimits

0xa244,	// (0x00046c95) bg_status_flat_pane_g1

0xa24c,	// (0x00046c9d) bg_status_flat_pane_g2

0xa254,	// (0x00046ca5) bg_status_flat_pane_g3

0xa25c,	// (0x00046cad) bg_status_flat_pane_g4

0xa264,	// (0x00046cb5) bg_status_flat_pane_g5

0xa26c,	// (0x00046cbd) bg_status_flat_pane_g6

0xa274,	// (0x00046cc5) bg_status_flat_pane_g7

0x7667,	// (0x000440b8) tabs_3_active_pane_t1_ParamLimits

0x7667,	// (0x000440b8) tabs_3_passive_pane_t1_ParamLimits

0x7681,	// (0x000440d2) tabs_4_active_pane_t1_ParamLimits

0x7681,	// (0x000440d2) tabs_4_1_passive_pane_t1_ParamLimits

0x809c,	// (0x00044aed) tabs_2_active_pane_t1_ParamLimits

0x809c,	// (0x00044aed) tabs_2_passive_pane_t1_ParamLimits

0x80ae,	// (0x00044aff) bg_active_tab_pane_cp4_ParamLimits

0x80bc,	// (0x00044b0d) tabs_2_long_active_pane_t1_ParamLimits

0x80cf,	// (0x00044b20) bg_passive_tab_pane_cp4_ParamLimits

0x6426,	// (0x00042e77) list_single_midp_graphic_pane_t1_ParamLimits

0x80ae,	// (0x00044aff) bg_active_tab_pane_cp5_ParamLimits

0x80db,	// (0x00044b2c) tabs_3_long_active_pane_t1_ParamLimits

0x80cf,	// (0x00044b20) bg_passive_tab_pane_cp5_ParamLimits

0x6426,	// (0x00042e77) list_single_midp_graphic_pane_t1

0x95aa,	// (0x00045ffb) bg_status_flat_pane_ParamLimits

0x9675,	// (0x000460c6) indicator_pane_cp2_ParamLimits

0x9675,	// (0x000460c6) indicator_pane_cp2

0x97b7,	// (0x00046208) navi_pane_srt_ParamLimits

0x97b7,	// (0x00046208) navi_pane_srt

0x97db,	// (0x0004622c) popup_clock_digital_analogue_window_cp1

0x7731,	// (0x00044182) indicator_pane_t1

0x8b36,	// (0x00045587) copy_highlight_pane

0x8b36,	// (0x00045587) cursor_graphics_pane

0x8b36,	// (0x00045587) graphic_within_text_pane

0x8b36,	// (0x00045587) link_highlight_pane

0xaa69,	// (0x000474ba) popup_preview_text_window_t5_ParamLimits

0xaa69,	// (0x000474ba) popup_preview_text_window_t5

0x8c66,	// (0x000456b7) cursor_digital_pane

0x8c66,	// (0x000456b7) cursor_primary_pane

0x8c77,	// (0x000456c8) cursor_primary_small_pane

0x8c7f,	// (0x000456d0) cursor_secondary_pane

0x8c87,	// (0x000456d8) cursor_title_pane

0x8c66,	// (0x000456b7) link_highlight_digital_pane

0x8c6e,	// (0x000456bf) link_highlight_primary_pane

0x8c77,	// (0x000456c8) link_highlight_primary_small_pane

0x8c7f,	// (0x000456d0) link_highlight_secondary_pane

0x8c87,	// (0x000456d8) link_highlight_title_pane

0x8c66,	// (0x000456b7) copy_highlight_digital_pane

0x8c66,	// (0x000456b7) copy_highlight_primary_pane

0x8c77,	// (0x000456c8) copy_highlight_primary_small_pane

0x8c7f,	// (0x000456d0) copy_highlight_secondary_pane

0x8c87,	// (0x000456d8) copy_highlight_title_pane

0x8c7f,	// (0x000456d0) graphic_text_digital_pane

0xa2e2,	// (0x00046d33) graphic_text_primary_pane

0xa2eb,	// (0x00046d3c) graphic_text_primary_small_pane

0x8c77,	// (0x000456c8) graphic_text_secondary_pane

0x8c66,	// (0x000456b7) graphic_text_title_pane

0x8c8f,	// (0x000456e0) cursor_primary_pane_g1

0xa2d4,	// (0x00046d25) cursor_text_primary_t1

0xa2bc,	// (0x00046d0d) cursor_primary_small_pane_g1

0xa2c6,	// (0x00046d17) cursor_text_primary_small_t1

0xa2a4,	// (0x00046cf5) cursor_primary_small_pane_g1_copy1

0xa2ae,	// (0x00046cff) cursor_text_primary_small_t1_copy1

0xa28c,	// (0x00046cdd) cursor_text_title_t1

0xa29a,	// (0x00046ceb) cursor_title_pane_g1

0x8c8f,	// (0x000456e0) cursor_digital_pane_g1

0x8c99,	// (0x000456ea) cursor_text_digital_t1

0x8ca7,	// (0x000456f8) link_highlight_primary_pane_g1

0xa235,	// (0x00046c86) link_highlight_primary_pane_t1

0x8ca7,	// (0x000456f8) link_highlight_primary_small_pane_g1

0x8caf,	// (0x00045700) link_highlight_primary_small_pane_t1

0x8cbe,	// (0x0004570f) link_highlight_secondary_pane_g1

0x8cc6,	// (0x00045717) link_highlight_secondary_pane_t1

0xa1a9,	// (0x00046bfa) link_highlight_title_pane_g1

0xa1b1,	// (0x00046c02) link_highlight_title_pane_t1

0xa192,	// (0x00046be3) link_highlight_digital_pane_g1

0xa19a,	// (0x00046beb) link_highlight_digital_pane_t1

0xa05a,	// (0x00046aab) copy_highlight_primary_pane_g1

0xa071,	// (0x00046ac2) copy_highlight_primary_pane_t1

0xa05a,	// (0x00046aab) copy_highlight_primary_small_pane_g1

0xa062,	// (0x00046ab3) copy_highlight_primary_small_pane_t1

0x8cd5,	// (0x00045726) copy_highlight_secondary_pane_g1

0x8cdd,	// (0x0004572e) copy_highlight_secondary_pane_t1

0xa043,	// (0x00046a94) copy_highlight_title_pane_g1

0xa04b,	// (0x00046a9c) copy_highlight_title_pane_t1

0xa05a,	// (0x00046aab) copy_highlight_digital_pane_g1

0xb36b,	// (0x00047dbc) copy_highlight_digital_pane_t1

0xb2bf,	// (0x00047d10) graphic_text_primary_pane_g1

0xb34f,	// (0x00047da0) graphic_text_primary_pane_t1

0xb35d,	// (0x00047dae) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0004c435) graphic_text_primary_pane_t

0xb32b,	// (0x00047d7c) graphic_text_primary_small_pane_g1

0xb333,	// (0x00047d84) graphic_text_primary_small_pane_t1

0xb341,	// (0x00047d92) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0004c430) graphic_text_primary_small_pane_t

0xb307,	// (0x00047d58) graphic_text_secondary_pane_g1

0xb30f,	// (0x00047d60) graphic_text_secondary_pane_t1

0xb31d,	// (0x00047d6e) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0004c42b) graphic_text_secondary_pane_t

0xb2e3,	// (0x00047d34) graphic_text_title_pane_g1

0xb2eb,	// (0x00047d3c) graphic_text_title_pane_t1

0xb2f9,	// (0x00047d4a) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0004c426) graphic_text_title_pane_t

0xb2bf,	// (0x00047d10) graphic_text_digital_pane_g1

0xb2c7,	// (0x00047d18) graphic_text_digital_pane_t1

0xb2d5,	// (0x00047d26) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0004c421) graphic_text_digital_pane_t

0x7651,	// (0x000440a2) navi_icon_pane_srt_ParamLimits

0x7651,	// (0x000440a2) navi_icon_pane_srt

0x2ae4,	// (0x0003f535) navi_midp_pane_srt

0x2ae4,	// (0x0003f535) navi_navi_pane_srt

0x7651,	// (0x000440a2) navi_text_pane_srt_ParamLimits

0x7651,	// (0x000440a2) navi_text_pane_srt

0xb28a,	// (0x00047cdb) navi_navi_icon_text_pane_srt

0xb292,	// (0x00047ce3) navi_navi_pane_srt_g1_ParamLimits

0xb292,	// (0x00047ce3) navi_navi_pane_srt_g1

0xb2a4,	// (0x00047cf5) navi_navi_pane_srt_g2_ParamLimits

0xb2a4,	// (0x00047cf5) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0004c41c) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0004c41c) navi_navi_pane_srt_g

0xb2b6,	// (0x00047d07) navi_navi_tabs_pane_srt

0xb28a,	// (0x00047cdb) navi_navi_text_pane_srt

0xb28a,	// (0x00047cdb) navi_navi_volume_pane_srt

0xb27b,	// (0x00047ccc) navi_navi_text_pane_srt_t1

0x67ac,	// (0x000431fd) navi_navi_volume_pane_srt_g1

0x67b4,	// (0x00043205) volume_small_pane_srt_ParamLimits

0x67b4,	// (0x00043205) volume_small_pane_srt

0x619c,	// (0x00042bed) volume_small_pane_srt_g1_ParamLimits

0x619c,	// (0x00042bed) volume_small_pane_srt_g1

0x61ac,	// (0x00042bfd) volume_small_pane_srt_g2_ParamLimits

0x61ac,	// (0x00042bfd) volume_small_pane_srt_g2

0x61bd,	// (0x00042c0e) volume_small_pane_srt_g3_ParamLimits

0x61bd,	// (0x00042c0e) volume_small_pane_srt_g3

0x61ce,	// (0x00042c1f) volume_small_pane_srt_g4_ParamLimits

0x61ce,	// (0x00042c1f) volume_small_pane_srt_g4

0x61df,	// (0x00042c30) volume_small_pane_srt_g5_ParamLimits

0x61df,	// (0x00042c30) volume_small_pane_srt_g5

0x61f0,	// (0x00042c41) volume_small_pane_srt_g6_ParamLimits

0x61f0,	// (0x00042c41) volume_small_pane_srt_g6

0x6201,	// (0x00042c52) volume_small_pane_srt_g7_ParamLimits

0x6201,	// (0x00042c52) volume_small_pane_srt_g7

0x6212,	// (0x00042c63) volume_small_pane_srt_g8_ParamLimits

0x6212,	// (0x00042c63) volume_small_pane_srt_g8

0x6223,	// (0x00042c74) volume_small_pane_srt_g9_ParamLimits

0x6223,	// (0x00042c74) volume_small_pane_srt_g9

0x6234,	// (0x00042c85) volume_small_pane_srt_g10_ParamLimits

0x6234,	// (0x00042c85) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0004c1cb) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0004c1cb) volume_small_pane_srt_g

0x7a38,	// (0x00044489) query_popup_data_pane_cp2

0xb261,	// (0x00047cb2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb261,	// (0x00047cb2) navi_navi_icon_text_pane_srt_t1

0xa2e2,	// (0x00046d33) navi_tabs_2_long_pane_srt

0xa2e2,	// (0x00046d33) navi_tabs_2_pane_srt

0xa2e2,	// (0x00046d33) navi_tabs_3_long_pane_srt

0xa2e2,	// (0x00046d33) navi_tabs_3_pane_srt

0xa2e2,	// (0x00046d33) navi_tabs_4_pane_srt

0x678c,	// (0x000431dd) tabs_2_active_pane_srt_ParamLimits

0x678c,	// (0x000431dd) tabs_2_active_pane_srt

0x679c,	// (0x000431ed) tabs_2_passive_pane_srt_ParamLimits

0x679c,	// (0x000431ed) tabs_2_passive_pane_srt

0x8eb4,	// (0x00045905) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8eb4,	// (0x00045905) bg_passive_tab_pane_cp1_srt

0xb22d,	// (0x00047c7e) bg_passive_tab_pane_g1_cp1_srt

0x877f,	// (0x000451d0) bg_passive_tab_pane_g2_cp1_srt

0xb236,	// (0x00047c87) bg_passive_tab_pane_g3_cp1_srt

0x7651,	// (0x000440a2) bg_active_tab_pane_cp1_srt_ParamLimits

0x7651,	// (0x000440a2) bg_active_tab_pane_cp1_srt

0xb23f,	// (0x00047c90) tabs_2_active_pane_srt_g1

0xb247,	// (0x00047c98) tabs_2_active_pane_srt_t1_ParamLimits

0xb247,	// (0x00047c98) tabs_2_active_pane_srt_t1

0xb22d,	// (0x00047c7e) bg_active_tab_pane_g1_cp1_srt

0x877f,	// (0x000451d0) bg_active_tab_pane_g2_cp1_srt

0xb236,	// (0x00047c87) bg_active_tab_pane_g3_cp1_srt

0x6759,	// (0x000431aa) tabs_3_active_pane_srt_ParamLimits

0x6759,	// (0x000431aa) tabs_3_active_pane_srt

0x676a,	// (0x000431bb) tabs_3_passive_pane_cp_srt_ParamLimits

0x676a,	// (0x000431bb) tabs_3_passive_pane_cp_srt

0x677b,	// (0x000431cc) tabs_3_passive_pane_srt_ParamLimits

0x677b,	// (0x000431cc) tabs_3_passive_pane_srt

0x8eb4,	// (0x00045905) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8eb4,	// (0x00045905) bg_passive_tab_pane_cp2_srt

0x8cec,	// (0x0004573d) bg_passive_tab_pane_g1_cp2_srt

0x877f,	// (0x000451d0) bg_passive_tab_pane_g2_cp2_srt

0x8cf5,	// (0x00045746) bg_passive_tab_pane_g3_cp2_srt

0x7651,	// (0x000440a2) bg_active_tab_pane_cp2_srt_ParamLimits

0x7651,	// (0x000440a2) bg_active_tab_pane_cp2_srt

0xb213,	// (0x00047c64) tabs_3_active_pane_srt_g1

0xb21b,	// (0x00047c6c) tabs_3_active_pane_srt_t1_ParamLimits

0xb21b,	// (0x00047c6c) tabs_3_active_pane_srt_t1

0x8cec,	// (0x0004573d) bg_active_tab_pane_g1_cp2_srt

0x877f,	// (0x000451d0) bg_active_tab_pane_g2_cp2_srt

0x8cf5,	// (0x00045746) bg_active_tab_pane_g3_cp2_srt

0x6711,	// (0x00043162) tabs_4_active_pane_srt_ParamLimits

0x6711,	// (0x00043162) tabs_4_active_pane_srt

0x6723,	// (0x00043174) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6723,	// (0x00043174) tabs_4_passive_pane_cp2_srt

0x8e4a,	// (0x0004589b) aid_size_cell_toolbar

0x80cf,	// (0x00044b20) main_idle_act_pane_ParamLimits

0x9079,	// (0x00045aca) popup_large_graphic_colour_window_ParamLimits

0x9420,	// (0x00045e71) popup_toolbar_window_ParamLimits

0x9420,	// (0x00045e71) popup_toolbar_window

0xb02d,	// (0x00047a7e) list_single_graphic_2heading_pane_ParamLimits

0xb02d,	// (0x00047a7e) list_single_graphic_2heading_pane

0x828b,	// (0x00044cdc) aid_size_cell_apps_grid_lsc_pane

0x829d,	// (0x00044cee) aid_size_cell_apps_grid_prt_pane

0x8eb4,	// (0x00045905) bg_wml_button_pane_cp1_ParamLimits

0x8eb4,	// (0x00045905) bg_wml_button_pane_cp1

0x9cda,	// (0x0004672b) form_midp_field_text_pane_t1_ParamLimits

0x9aee,	// (0x0004653f) input_focus_pane_cp050_ParamLimits

0x9d05,	// (0x00046756) list_midp_form_text_pane_ParamLimits

0x9cb7,	// (0x00046708) input_focus_pane_cp051_ParamLimits

0x9ccb,	// (0x0004671c) list_midp_choice_pane_ParamLimits

0x9b7f,	// (0x000465d0) list_single_2graphic_pane_cp3_ParamLimits

0x9b7f,	// (0x000465d0) list_single_2graphic_pane_cp3

0x9b98,	// (0x000465e9) list_single_midp_graphic_pane_ParamLimits

0x9b98,	// (0x000465e9) list_single_midp_graphic_pane

0x5293,	// (0x00041ce4) list_single_graphic_2heading_pane_g1_ParamLimits

0x5293,	// (0x00041ce4) list_single_graphic_2heading_pane_g1

0x529f,	// (0x00041cf0) list_single_graphic_2heading_pane_g4_ParamLimits

0x529f,	// (0x00041cf0) list_single_graphic_2heading_pane_g4

0x52ab,	// (0x00041cfc) list_single_graphic_2heading_pane_g5_ParamLimits

0x52ab,	// (0x00041cfc) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0004c21e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0004c21e) list_single_graphic_2heading_pane_g

0x52b7,	// (0x00041d08) list_single_graphic_2heading_pane_t1_ParamLimits

0x52b7,	// (0x00041d08) list_single_graphic_2heading_pane_t1

0x52cb,	// (0x00041d1c) list_single_graphic_2heading_pane_t2_ParamLimits

0x52cb,	// (0x00041d1c) list_single_graphic_2heading_pane_t2

0x52e7,	// (0x00041d38) list_single_graphic_2heading_pane_t3_ParamLimits

0x52e7,	// (0x00041d38) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0004c225) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0004c225) list_single_graphic_2heading_pane_t

0x993a,	// (0x0004638b) bg_popup_sub_pane_cp2

0x9964,	// (0x000463b5) grid_toobar_pane

0x639e,	// (0x00042def) cell_toolbar_pane_ParamLimits

0x639e,	// (0x00042def) cell_toolbar_pane

0x99a0,	// (0x000463f1) cell_toolbar_pane_g1_ParamLimits

0x99a0,	// (0x000463f1) cell_toolbar_pane_g1

0x99b4,	// (0x00046405) cell_toolbar_pane_g2_ParamLimits

0x99b4,	// (0x00046405) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0004c233) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0004c233) cell_toolbar_pane_g

0x99d6,	// (0x00046427) grid_highlight_pane_cp2_ParamLimits

0x99d6,	// (0x00046427) grid_highlight_pane_cp2

0x99f0,	// (0x00046441) toolbar_button_pane

0x99fc,	// (0x0004644d) toolbar_button_pane_g1

0x9a04,	// (0x00046455) toolbar_button_pane_g2

0x9a0c,	// (0x0004645d) toolbar_button_pane_g3

0x9a14,	// (0x00046465) toolbar_button_pane_g4

0x9a1c,	// (0x0004646d) toolbar_button_pane_g5

0x9a24,	// (0x00046475) toolbar_button_pane_g6

0x9a2c,	// (0x0004647d) toolbar_button_pane_g7

0x9a34,	// (0x00046485) toolbar_button_pane_g8

0x9a3c,	// (0x0004648d) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0004c238) toolbar_button_pane_g

0x63e2,	// (0x00042e33) list_single_2graphic_pane_g1_cp3_ParamLimits

0x63e2,	// (0x00042e33) list_single_2graphic_pane_g1_cp3

0x63ee,	// (0x00042e3f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x63ee,	// (0x00042e3f) list_single_2graphic_pane_g2_cp3

0x8960,	// (0x000453b1) list_single_2graphic_pane_g3_cp3

0x63ff,	// (0x00042e50) list_single_2graphic_pane_g4_cp3_ParamLimits

0x63ff,	// (0x00042e50) list_single_2graphic_pane_g4_cp3

0x640b,	// (0x00042e5c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x640b,	// (0x00042e5c) list_single_2graphic_pane_t1_cp3

0x8954,	// (0x000453a5) list_single_midp_graphic_pane_g2_ParamLimits

0x8954,	// (0x000453a5) list_single_midp_graphic_pane_g2

0x527b,	// (0x00041ccc) aid_zoom_text_primary

0x5283,	// (0x00041cd4) aid_zoom_text_secondary

0x8da9,	// (0x000457fa) status_small_pane_g7_ParamLimits

0x8da9,	// (0x000457fa) status_small_pane_g7

0x8dcc,	// (0x0004581d) status_small_pane_t1_ParamLimits

0x7588,	// (0x00043fd9) title_pane_g2

0x0003,

0xf56a,	// (0x0004bfbb) title_pane_g

0x7ae1,	// (0x00044532) aid_size_cell_colour_1_pane_ParamLimits

0x7ae1,	// (0x00044532) aid_size_cell_colour_1_pane

0x7af5,	// (0x00044546) aid_size_cell_colour_2_pane_ParamLimits

0x7af5,	// (0x00044546) aid_size_cell_colour_2_pane

0x7b09,	// (0x0004455a) aid_size_cell_colour_3_pane_ParamLimits

0x7b09,	// (0x0004455a) aid_size_cell_colour_3_pane

0x7b1d,	// (0x0004456e) aid_size_cell_colour_4_pane_ParamLimits

0x7b1d,	// (0x0004456e) aid_size_cell_colour_4_pane

0x5dd3,	// (0x00042824) title_pane_stacon_g1_ParamLimits

0x5dd3,	// (0x00042824) title_pane_stacon_g1

0xa0c8,	// (0x00046b19) popup_note_wait_window_g3_ParamLimits

0xa0c8,	// (0x00046b19) popup_note_wait_window_g3

0xa13f,	// (0x00046b90) popup_note_wait_window_t5_ParamLimits

0xa13f,	// (0x00046b90) popup_note_wait_window_t5

0x2ae4,	// (0x0003f535) main_feb_china_hwr_fs_writing_pane

0x8f40,	// (0x00045991) popup_feb_china_hwr_fs_window_ParamLimits

0x8f40,	// (0x00045991) popup_feb_china_hwr_fs_window

0x643c,	// (0x00042e8d) aid_size_cell_hwr_fs_ParamLimits

0x643c,	// (0x00042e8d) aid_size_cell_hwr_fs

0x9aee,	// (0x0004653f) bg_popup_sub_pane_cp3_ParamLimits

0x9aee,	// (0x0004653f) bg_popup_sub_pane_cp3

0x6451,	// (0x00042ea2) grid_hwr_fs_pane_ParamLimits

0x6451,	// (0x00042ea2) grid_hwr_fs_pane

0x6469,	// (0x00042eba) linegrid_hwr_fs_pane_ParamLimits

0x6469,	// (0x00042eba) linegrid_hwr_fs_pane

0x6479,	// (0x00042eca) cell_hwr_fs_pane_ParamLimits

0x6479,	// (0x00042eca) cell_hwr_fs_pane

0x9afa,	// (0x0004654b) linegrid_hwr_fs_pane_g1_ParamLimits

0x9afa,	// (0x0004654b) linegrid_hwr_fs_pane_g1

0x9b06,	// (0x00046557) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b06,	// (0x00046557) linegrid_hwr_fs_pane_g2

0x9b18,	// (0x00046569) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b18,	// (0x00046569) linegrid_hwr_fs_pane_g3

0x649d,	// (0x00042eee) linegrid_hwr_fs_pane_g4_ParamLimits

0x649d,	// (0x00042eee) linegrid_hwr_fs_pane_g4

0x64bb,	// (0x00042f0c) linegrid_hwr_fs_pane_g5_ParamLimits

0x64bb,	// (0x00042f0c) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0004c263) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0004c263) linegrid_hwr_fs_pane_g

0x9b24,	// (0x00046575) cell_hwr_fs_pane_g1_ParamLimits

0x9b24,	// (0x00046575) cell_hwr_fs_pane_g1

0x9871,	// (0x000462c2) cell_hwr_fs_pane_g2_ParamLimits

0x9871,	// (0x000462c2) cell_hwr_fs_pane_g2

0x9b3a,	// (0x0004658b) cell_hwr_fs_pane_g3_ParamLimits

0x9b3a,	// (0x0004658b) cell_hwr_fs_pane_g3

0x9b47,	// (0x00046598) cell_hwr_fs_pane_g4_ParamLimits

0x9b47,	// (0x00046598) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0004c26e) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0004c26e) cell_hwr_fs_pane_g

0x64d1,	// (0x00042f22) cell_hwr_fs_pane_t1

0x2ae4,	// (0x0003f535) grid_highlight_pane_cp6

0x2ae4,	// (0x0003f535) main_idle_act2_pane

0x8041,	// (0x00044a92) aid_inside_area_popup_secondary

0xa778,	// (0x000471c9) aid_inside_area_window_primary_ParamLimits

0xa778,	// (0x000471c9) aid_inside_area_window_primary

0xb37a,	// (0x00047dcb) ai2_news_ticker_pane

0xb382,	// (0x00047dd3) aid_size_cell_ai1_link_ParamLimits

0xb382,	// (0x00047dd3) aid_size_cell_ai1_link

0xb39c,	// (0x00047ded) popup_ai2_data_window_ParamLimits

0xb39c,	// (0x00047ded) popup_ai2_data_window

0xb3ba,	// (0x00047e0b) popup_ai2_link_window_ParamLimits

0xb3ba,	// (0x00047e0b) popup_ai2_link_window

0x9aee,	// (0x0004653f) bg_popup_sub_pane_cp4_ParamLimits

0x9aee,	// (0x0004653f) bg_popup_sub_pane_cp4

0xb3d0,	// (0x00047e21) grid_ai2_link_pane_ParamLimits

0xb3d0,	// (0x00047e21) grid_ai2_link_pane

0xb3e7,	// (0x00047e38) popup_ai2_link_window_g1_ParamLimits

0xb3e7,	// (0x00047e38) popup_ai2_link_window_g1

0xb3f3,	// (0x00047e44) popup_ai2_link_window_g2_ParamLimits

0xb3f3,	// (0x00047e44) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0004c43a) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0004c43a) popup_ai2_link_window_g

0xb404,	// (0x00047e55) ai2_mp_button_pane

0xb40c,	// (0x00047e5d) ai2_mp_volume_pane

0x9cb7,	// (0x00046708) bg_popup_sub_pane_cp5_ParamLimits

0x9cb7,	// (0x00046708) bg_popup_sub_pane_cp5

0xb414,	// (0x00047e65) heading_ai2_gene_pane_ParamLimits

0xb414,	// (0x00047e65) heading_ai2_gene_pane

0xb420,	// (0x00047e71) list_ai2_gene_pane_ParamLimits

0xb420,	// (0x00047e71) list_ai2_gene_pane

0xb468,	// (0x00047eb9) cell_ai2_link_pane_ParamLimits

0xb468,	// (0x00047eb9) cell_ai2_link_pane

0xb47e,	// (0x00047ecf) cell_ai2_link_pane_g1

0x2ae4,	// (0x0003f535) grid_highlight_pane_cp7

0x67c9,	// (0x0004321a) ai2_mp_volume_pane_g1

0xb593,	// (0x00047fe4) ai2_mp_volume_pane_g2

0xb4c6,	// (0x00047f17) list_ai2_gene_pane_t1

0xb59b,	// (0x00047fec) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0004c453) ai2_mp_volume_pane_g

0x67d1,	// (0x00043222) volume_small_pane_cp3

0xb5a3,	// (0x00047ff4) aid_size_cell_ai2_button

0xb5ab,	// (0x00047ffc) grid_ai2_button_pane

0xb5b4,	// (0x00048005) cell_ai2_button_pane_ParamLimits

0xb5b4,	// (0x00048005) cell_ai2_button_pane

0x2ada,	// (0x0003f52b) cell_ai2_button_pane_g1

0x2ae4,	// (0x0003f535) grid_highlight_pane_cp8

0xb553,	// (0x00047fa4) ai2_gene_pane_t1_ParamLimits

0xb553,	// (0x00047fa4) ai2_gene_pane_t1

0x8e40,	// (0x00045891) aid_height_parent_landscape

0xae24,	// (0x00047875) aid_height_set_list

0xae35,	// (0x00047886) aid_size_parent

0xb19b,	// (0x00047bec) aid_size_cell_graphic_pane_ParamLimits

0xb430,	// (0x00047e81) popup_ai2_data_window_g1_ParamLimits

0xb430,	// (0x00047e81) popup_ai2_data_window_g1

0xb43c,	// (0x00047e8d) ai2_news_ticker_pane_g1

0xb444,	// (0x00047e95) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0004c43f) ai2_news_ticker_pane_g

0xb44c,	// (0x00047e9d) ai2_news_ticker_pane_t1

0xb45a,	// (0x00047eab) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0004c444) ai2_news_ticker_pane_t

0xb487,	// (0x00047ed8) heading_ai2_gene_pane_g1

0xb48f,	// (0x00047ee0) heading_ai2_gene_pane_t1_ParamLimits

0xb48f,	// (0x00047ee0) heading_ai2_gene_pane_t1

0xb4a4,	// (0x00047ef5) list_highlight_pane_cp6

0xb4ac,	// (0x00047efd) ai2_gene_pane_ParamLimits

0xb4ac,	// (0x00047efd) ai2_gene_pane

0xb4d4,	// (0x00047f25) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0004c449) list_ai2_gene_pane_t

0xb4e2,	// (0x00047f33) list_highlight_pane_cp8_ParamLimits

0xb4e2,	// (0x00047f33) list_highlight_pane_cp8

0xb535,	// (0x00047f86) ai2_gene_pane_g1_ParamLimits

0xb535,	// (0x00047f86) ai2_gene_pane_g1

0xb547,	// (0x00047f98) ai2_gene_pane_g2_ParamLimits

0xb547,	// (0x00047f98) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0004c44e) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0004c44e) ai2_gene_pane_g

0x7e6e,	// (0x000448bf) scroll_pane_cp12

0x635d,	// (0x00042dae) control_pane_t3_ParamLimits

0x635d,	// (0x00042dae) control_pane_t3

0x8dbd,	// (0x0004580e) status_small_pane_g8_ParamLimits

0x8dbd,	// (0x0004580e) status_small_pane_g8

0x903e,	// (0x00045a8f) popup_find_window_ParamLimits

0x9269,	// (0x00045cba) popup_note_image_window_ParamLimits

0x52ff,	// (0x00041d50) list_double2_graphic_pane_vc_g1_ParamLimits

0x52ff,	// (0x00041d50) list_double2_graphic_pane_vc_g1

0x8aa7,	// (0x000454f8) list_double2_graphic_pane_vc_g2_ParamLimits

0x8aa7,	// (0x000454f8) list_double2_graphic_pane_vc_g2

0x63ce,	// (0x00042e1f) list_double2_graphic_pane_vc_g3_ParamLimits

0x63ce,	// (0x00042e1f) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0004c22c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0004c22c) list_double2_graphic_pane_vc_g

0x530b,	// (0x00041d5c) list_double2_graphic_pane_vc_t1_ParamLimits

0x530b,	// (0x00041d5c) list_double2_graphic_pane_vc_t1

0x8aa7,	// (0x000454f8) list_single_heading_pane_vc_g1_ParamLimits

0x8aa7,	// (0x000454f8) list_single_heading_pane_vc_g1

0x63ce,	// (0x00042e1f) list_single_heading_pane_vc_g2_ParamLimits

0x63ce,	// (0x00042e1f) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c24d) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c24d) list_single_heading_pane_vc_g

0x5321,	// (0x00041d72) list_single_heading_pane_vc_t1_ParamLimits

0x5321,	// (0x00041d72) list_single_heading_pane_vc_t1

0x5337,	// (0x00041d88) list_single_heading_pane_vc_t2_ParamLimits

0x5337,	// (0x00041d88) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0004c252) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0004c252) list_single_heading_pane_vc_t

0x9a44,	// (0x00046495) list_setting_number_pane_vc_g1_ParamLimits

0x9a44,	// (0x00046495) list_setting_number_pane_vc_g1

0x9a50,	// (0x000464a1) list_setting_number_pane_vc_g2_ParamLimits

0x9a50,	// (0x000464a1) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0004c257) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0004c257) list_setting_number_pane_vc_g

0x9a5c,	// (0x000464ad) list_setting_number_pane_vc_t1_ParamLimits

0x9a5c,	// (0x000464ad) list_setting_number_pane_vc_t1

0x9a70,	// (0x000464c1) list_setting_number_pane_vc_t2_ParamLimits

0x9a70,	// (0x000464c1) list_setting_number_pane_vc_t2

0x9a8c,	// (0x000464dd) list_setting_number_pane_vc_t3_ParamLimits

0x9a8c,	// (0x000464dd) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0004c25c) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0004c25c) list_setting_number_pane_vc_t

0x9ab4,	// (0x00046505) set_value_pane_vc_ParamLimits

0x9ab4,	// (0x00046505) set_value_pane_vc

0xb02d,	// (0x00047a7e) list_double2_graphic_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_double2_graphic_pane_vc

0xb02d,	// (0x00047a7e) list_double2_large_graphic_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_double2_large_graphic_pane_vc

0xb02d,	// (0x00047a7e) list_double2_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_double2_pane_vc

0xb02d,	// (0x00047a7e) list_double_graphic_heading_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_double_graphic_heading_pane_vc

0xb02d,	// (0x00047a7e) list_double_graphic_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_double_graphic_pane_vc

0xb02d,	// (0x00047a7e) list_double_heading_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_double_heading_pane_vc

0xb02d,	// (0x00047a7e) list_double_large_graphic_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_double_large_graphic_pane_vc

0xb02d,	// (0x00047a7e) list_double_number_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_double_number_pane_vc

0xb02d,	// (0x00047a7e) list_double_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_double_pane_vc

0xb02d,	// (0x00047a7e) list_double_time_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_double_time_pane_vc

0xb02d,	// (0x00047a7e) list_setting_number_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_setting_number_pane_vc

0xb02d,	// (0x00047a7e) list_setting_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_setting_pane_vc

0xb02d,	// (0x00047a7e) list_single_graphic_heading_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_single_graphic_heading_pane_vc

0xb02d,	// (0x00047a7e) list_single_heading_pane_vc_ParamLimits

0xb02d,	// (0x00047a7e) list_single_heading_pane_vc

0xb041,	// (0x00047a92) list_single_number_heading_pane_vc_ParamLimits

0xb041,	// (0x00047a92) list_single_number_heading_pane_vc

0x52ff,	// (0x00041d50) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x52ff,	// (0x00041d50) list_double_graphic_heading_pane_vc_g1

0x67da,	// (0x0004322b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x67da,	// (0x0004322b) list_double_graphic_heading_pane_vc_g2

0x67e6,	// (0x00043237) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x67e6,	// (0x00043237) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa09,	// (0x0004c45a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa09,	// (0x0004c45a) list_double_graphic_heading_pane_vc_g

0x53ed,	// (0x00041e3e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x53ed,	// (0x00041e3e) list_double_graphic_heading_pane_vc_t1

0x5321,	// (0x00041d72) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5321,	// (0x00041d72) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa10,	// (0x0004c461) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa10,	// (0x0004c461) list_double_graphic_heading_pane_vc_t

0x9a44,	// (0x00046495) list_setting_pane_vc_g1_ParamLimits

0x9a44,	// (0x00046495) list_setting_pane_vc_g1

0x9a50,	// (0x000464a1) list_setting_pane_vc_g2_ParamLimits

0x9a50,	// (0x000464a1) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0004c257) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0004c257) list_setting_pane_vc_g

0xb7f0,	// (0x00048241) list_setting_pane_vc_t1_ParamLimits

0xb7f0,	// (0x00048241) list_setting_pane_vc_t1

0xb804,	// (0x00048255) list_setting_pane_vc_t2_ParamLimits

0xb804,	// (0x00048255) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x0004c48f) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x0004c48f) list_setting_pane_vc_t

0x9ab4,	// (0x00046505) set_value_pane_cp_vc_ParamLimits

0x9ab4,	// (0x00046505) set_value_pane_cp_vc

0x8aa7,	// (0x000454f8) list_single_number_heading_pane_vc_g1_ParamLimits

0x8aa7,	// (0x000454f8) list_single_number_heading_pane_vc_g1

0x63ce,	// (0x00042e1f) list_single_number_heading_pane_vc_g2_ParamLimits

0x63ce,	// (0x00042e1f) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c24d) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c24d) list_single_number_heading_pane_vc_g

0x5321,	// (0x00041d72) list_single_number_heading_pane_vc_t1_ParamLimits

0x5321,	// (0x00041d72) list_single_number_heading_pane_vc_t1

0x5401,	// (0x00041e52) list_single_number_heading_pane_vc_t2_ParamLimits

0x5401,	// (0x00041e52) list_single_number_heading_pane_vc_t2

0x5415,	// (0x00041e66) list_single_number_heading_pane_vc_t3_ParamLimits

0x5415,	// (0x00041e66) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x0004c494) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0004c494) list_single_number_heading_pane_vc_t

0x52ff,	// (0x00041d50) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x52ff,	// (0x00041d50) list_single_graphic_heading_pane_vc_g1

0x8aa7,	// (0x000454f8) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8aa7,	// (0x000454f8) list_single_graphic_heading_pane_vc_g4

0x63ce,	// (0x00042e1f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x63ce,	// (0x00042e1f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0004c22c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004c22c) list_single_graphic_heading_pane_vc_g

0x5321,	// (0x00041d72) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5321,	// (0x00041d72) list_single_graphic_heading_pane_vc_t1

0x5427,	// (0x00041e78) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5427,	// (0x00041e78) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x0004c49b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x0004c49b) list_single_graphic_heading_pane_vc_t

0x8aa7,	// (0x000454f8) list_double2_pane_vc_g1_ParamLimits

0x8aa7,	// (0x000454f8) list_double2_pane_vc_g1

0x63ce,	// (0x00042e1f) list_double2_pane_vc_g2_ParamLimits

0x63ce,	// (0x00042e1f) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c24d) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c24d) list_double2_pane_vc_g

0x543b,	// (0x00041e8c) list_double2_pane_vc_t1_ParamLimits

0x543b,	// (0x00041e8c) list_double2_pane_vc_t1

0x67f2,	// (0x00043243) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x67f2,	// (0x00043243) list_double2_large_graphic_pane_vc_g1

0x8aa7,	// (0x000454f8) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8aa7,	// (0x000454f8) list_double2_large_graphic_pane_vc_g2

0x63ce,	// (0x00042e1f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x63ce,	// (0x00042e1f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4f,	// (0x0004c4a0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x0004c4a0) list_double2_large_graphic_pane_vc_g

0x5451,	// (0x00041ea2) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5451,	// (0x00041ea2) list_double2_large_graphic_pane_vc_t1

0x67fe,	// (0x0004324f) list_double_time_pane_vc_g1_ParamLimits

0x67fe,	// (0x0004324f) list_double_time_pane_vc_g1

0x680a,	// (0x0004325b) list_double_time_pane_vc_g2_ParamLimits

0x680a,	// (0x0004325b) list_double_time_pane_vc_g2

0x0001,

0xfa56,	// (0x0004c4a7) list_double_time_pane_vc_g_ParamLimits

0xfa56,	// (0x0004c4a7) list_double_time_pane_vc_g

0x5467,	// (0x00041eb8) list_double_time_pane_vc_t1_ParamLimits

0x5467,	// (0x00041eb8) list_double_time_pane_vc_t1

0x5480,	// (0x00041ed1) list_double_time_pane_vc_t2_ParamLimits

0x5480,	// (0x00041ed1) list_double_time_pane_vc_t2

0x54c0,	// (0x00041f11) list_double_time_pane_vc_t3_ParamLimits

0x54c0,	// (0x00041f11) list_double_time_pane_vc_t3

0x54d8,	// (0x00041f29) list_double_time_pane_vc_t4_ParamLimits

0x54d8,	// (0x00041f29) list_double_time_pane_vc_t4

0x0003,

0xfa5b,	// (0x0004c4ac) list_double_time_pane_vc_t_ParamLimits

0xfa5b,	// (0x0004c4ac) list_double_time_pane_vc_t

0x8aa7,	// (0x000454f8) list_double_pane_vc_g1_ParamLimits

0x8aa7,	// (0x000454f8) list_double_pane_vc_g1

0x63ce,	// (0x00042e1f) list_double_pane_vc_g2_ParamLimits

0x63ce,	// (0x00042e1f) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c24d) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c24d) list_double_pane_vc_g

0x54ec,	// (0x00041f3d) list_double_pane_vc_t1_ParamLimits

0x54ec,	// (0x00041f3d) list_double_pane_vc_t1

0x54fe,	// (0x00041f4f) list_double_pane_vc_t2_ParamLimits

0x54fe,	// (0x00041f4f) list_double_pane_vc_t2

0x0001,

0xfa64,	// (0x0004c4b5) list_double_pane_vc_t_ParamLimits

0xfa64,	// (0x0004c4b5) list_double_pane_vc_t

0x8aa7,	// (0x000454f8) list_double_number_pane_vc_g1_ParamLimits

0x8aa7,	// (0x000454f8) list_double_number_pane_vc_g1

0x63ce,	// (0x00042e1f) list_double_number_pane_vc_g2_ParamLimits

0x63ce,	// (0x00042e1f) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c24d) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c24d) list_double_number_pane_vc_g

0x5516,	// (0x00041f67) list_double_number_pane_vc_t1_ParamLimits

0x5516,	// (0x00041f67) list_double_number_pane_vc_t1

0x552a,	// (0x00041f7b) list_double_number_pane_vc_t2_ParamLimits

0x552a,	// (0x00041f7b) list_double_number_pane_vc_t2

0x54fe,	// (0x00041f4f) list_double_number_pane_vc_t3_ParamLimits

0x54fe,	// (0x00041f4f) list_double_number_pane_vc_t3

0x0002,

0xfa69,	// (0x0004c4ba) list_double_number_pane_vc_t_ParamLimits

0xfa69,	// (0x0004c4ba) list_double_number_pane_vc_t

0x6816,	// (0x00043267) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6816,	// (0x00043267) list_double_large_graphic_pane_vc_g1

0x6822,	// (0x00043273) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6822,	// (0x00043273) list_double_large_graphic_pane_vc_g2

0x63ce,	// (0x00042e1f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x63ce,	// (0x00042e1f) list_double_large_graphic_pane_vc_g3

0x553c,	// (0x00041f8d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x553c,	// (0x00041f8d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa70,	// (0x0004c4c1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x0004c4c1) list_double_large_graphic_pane_vc_g

0x5548,	// (0x00041f99) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5548,	// (0x00041f99) list_double_large_graphic_pane_vc_t1

0x555a,	// (0x00041fab) list_double_large_graphic_pane_vc_t2_ParamLimits

0x555a,	// (0x00041fab) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa79,	// (0x0004c4ca) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa79,	// (0x0004c4ca) list_double_large_graphic_pane_vc_t

0x67da,	// (0x0004322b) list_double_heading_pane_vc_g1_ParamLimits

0x67da,	// (0x0004322b) list_double_heading_pane_vc_g1

0x67e6,	// (0x00043237) list_double_heading_pane_vc_g2_ParamLimits

0x67e6,	// (0x00043237) list_double_heading_pane_vc_g2

0x0001,

0xfa7e,	// (0x0004c4cf) list_double_heading_pane_vc_g_ParamLimits

0xfa7e,	// (0x0004c4cf) list_double_heading_pane_vc_g

0x5573,	// (0x00041fc4) list_double_heading_pane_vc_t1_ParamLimits

0x5573,	// (0x00041fc4) list_double_heading_pane_vc_t1

0x5321,	// (0x00041d72) list_double_heading_pane_vc_t2_ParamLimits

0x5321,	// (0x00041d72) list_double_heading_pane_vc_t2

0x0001,

0xfa83,	// (0x0004c4d4) list_double_heading_pane_vc_t_ParamLimits

0xfa83,	// (0x0004c4d4) list_double_heading_pane_vc_t

0x52ff,	// (0x00041d50) list_double_graphic_pane_vc_g1_ParamLimits

0x52ff,	// (0x00041d50) list_double_graphic_pane_vc_g1

0x6831,	// (0x00043282) list_double_graphic_pane_vc_g2_ParamLimits

0x6831,	// (0x00043282) list_double_graphic_pane_vc_g2

0x6840,	// (0x00043291) list_double_graphic_pane_vc_g3_ParamLimits

0x6840,	// (0x00043291) list_double_graphic_pane_vc_g3

0x0002,

0xfa88,	// (0x0004c4d9) list_double_graphic_pane_vc_g_ParamLimits

0xfa88,	// (0x0004c4d9) list_double_graphic_pane_vc_g

0x5587,	// (0x00041fd8) list_double_graphic_pane_vc_t1_ParamLimits

0x5587,	// (0x00041fd8) list_double_graphic_pane_vc_t1

0x54fe,	// (0x00041f4f) list_double_graphic_pane_vc_t2_ParamLimits

0x54fe,	// (0x00041f4f) list_double_graphic_pane_vc_t2

0x0001,

0xfa8f,	// (0x0004c4e0) list_double_graphic_pane_vc_t_ParamLimits

0xfa8f,	// (0x0004c4e0) list_double_graphic_pane_vc_t

0x587f,	// (0x000422d0) aid_size_cell_fastswap

0x5887,	// (0x000422d8) aid_size_cell_touch_ParamLimits

0x5887,	// (0x000422d8) aid_size_cell_touch

0x5ae8,	// (0x00042539) popup_fast_swap_wide_window_ParamLimits

0x5ae8,	// (0x00042539) popup_fast_swap_wide_window

0x5bfe,	// (0x0004264f) touch_pane_ParamLimits

0x5bfe,	// (0x0004264f) touch_pane

0x7ec4,	// (0x00044915) button_value_adjust_pane_cp2

0x4fc9,	// (0x00041a1a) button_value_adjust_pane_cp4

0x4ff1,	// (0x00041a42) form_field_data_pane_cp2

0x5016,	// (0x00041a67) form_field_data_wide_pane_cp2

0x835d,	// (0x00044dae) bg_scroll_pane_ParamLimits

0x5f38,	// (0x00042989) scroll_handle_pane_ParamLimits

0x5f4c,	// (0x0004299d) scroll_sc2_down_pane_ParamLimits

0x5f4c,	// (0x0004299d) scroll_sc2_down_pane

0x838e,	// (0x00044ddf) scroll_sc2_up_pane_ParamLimits

0x838e,	// (0x00044ddf) scroll_sc2_up_pane

0xbc80,	// (0x000486d1) grid_wheel_folder_pane_g1_ParamLimits

0xbc80,	// (0x000486d1) grid_wheel_folder_pane_g1

0x6134,	// (0x00042b85) clock_nsta_pane_cp2_ParamLimits

0x6134,	// (0x00042b85) clock_nsta_pane_cp2

0x8b3e,	// (0x0004558f) listscroll_midp_pane_ParamLimits

0x8b4a,	// (0x0004559b) midp_canvas_pane

0x8e38,	// (0x00045889) nsta_clock_indic_pane

0x8e86,	// (0x000458d7) listscroll_form_pane_vc

0x8ea2,	// (0x000458f3) listscroll_set_pane_vc_ParamLimits

0x8ea2,	// (0x000458f3) listscroll_set_pane_vc

0x95c6,	// (0x00046017) clock_nsta_pane

0x9643,	// (0x00046094) indicator_nsta_pane

0x993a,	// (0x0004638b) bg_popup_sub_pane_cp2_ParamLimits

0x994e,	// (0x0004639f) find_pane_cp2_ParamLimits

0x994e,	// (0x0004639f) find_pane_cp2

0x9964,	// (0x000463b5) grid_toobar_pane_ParamLimits

0x9ac2,	// (0x00046513) list_form_gen_pane_vc_ParamLimits

0x9ac2,	// (0x00046513) list_form_gen_pane_vc

0x9ad8,	// (0x00046529) scroll_pane_cp8_vc_ParamLimits

0x9ad8,	// (0x00046529) scroll_pane_cp8_vc

0x9b54,	// (0x000465a5) data_form_wide_pane_vc_ParamLimits

0x9b54,	// (0x000465a5) data_form_wide_pane_vc

0x9b60,	// (0x000465b1) form_field_data_wide_pane_vc_g1

0x9b68,	// (0x000465b9) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b68,	// (0x000465b9) form_field_data_wide_pane_vc_t1

0x7ed8,	// (0x00044929) input_focus_pane_cp6_vc_ParamLimits

0x7ed8,	// (0x00044929) input_focus_pane_cp6_vc

0x9e42,	// (0x00046893) list_midp_pane_ParamLimits

0x9e4e,	// (0x0004689f) scroll_pane_cp16_ParamLimits

0x9e4e,	// (0x0004689f) scroll_pane_cp16

0x9e9c,	// (0x000468ed) button_value_adjust_pane_ParamLimits

0x9e9c,	// (0x000468ed) button_value_adjust_pane

0xae47,	// (0x00047898) button_value_adjust_pane_cp6_ParamLimits

0xae47,	// (0x00047898) button_value_adjust_pane_cp6

0xafa1,	// (0x000479f2) settings_code_pane_cp_ParamLimits

0xafa1,	// (0x000479f2) settings_code_pane_cp

0x2ada,	// (0x0003f52b) cell_touch_pane_g1

0x2ada,	// (0x0003f52b) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0004c175) cell_touch_pane_g

0xb5c6,	// (0x00048017) cell_touch_pane_cp_ParamLimits

0xb5c6,	// (0x00048017) cell_touch_pane_cp

0xb5d6,	// (0x00048027) cell_touch_pane_ParamLimits

0xb5d6,	// (0x00048027) cell_touch_pane

0x2ada,	// (0x0003f52b) scroll_sc2_down_pane_g1

0x2ada,	// (0x0003f52b) scroll_sc2_up_pane_g1

0x2ae4,	// (0x0003f535) bg_set_opt_pane_cp4_vc

0xb5e7,	// (0x00048038) list_set_graphic_pane_vc_g1_ParamLimits

0xb5e7,	// (0x00048038) list_set_graphic_pane_vc_g1

0xb5f3,	// (0x00048044) list_set_graphic_pane_vc_g2_ParamLimits

0xb5f3,	// (0x00048044) list_set_graphic_pane_vc_g2

0x0001,

0xfa15,	// (0x0004c466) list_set_graphic_pane_vc_g_ParamLimits

0xfa15,	// (0x0004c466) list_set_graphic_pane_vc_g

0xb5ff,	// (0x00048050) text_primary_small_cp13_vc_ParamLimits

0xb5ff,	// (0x00048050) text_primary_small_cp13_vc

0xb617,	// (0x00048068) list_set_graphic_pane_vc_ParamLimits

0xb617,	// (0x00048068) list_set_graphic_pane_vc

0x2ae4,	// (0x0003f535) input_focus_pane_cp2_vc

0x2ada,	// (0x0003f52b) setting_code_pane_vc_g1

0xb62b,	// (0x0004807c) setting_code_pane_vc_t1

0xb639,	// (0x0004808a) set_text_pane_vc_t1_ParamLimits

0xb639,	// (0x0004808a) set_text_pane_vc_t1

0x2ae4,	// (0x0003f535) input_focus_pane_cp1_vc

0xb657,	// (0x000480a8) list_set_text_pane_vc

0x2ada,	// (0x0003f52b) setting_text_pane_vc_g1

0x2ae4,	// (0x0003f535) bg_set_opt_pane_cp2_vc

0xb661,	// (0x000480b2) setting_slider_graphic_pane_vc_g1

0xb669,	// (0x000480ba) setting_slider_graphic_pane_vc_t1

0xb677,	// (0x000480c8) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa1a,	// (0x0004c46b) setting_slider_graphic_pane_vc_t

0xb685,	// (0x000480d6) slider_set_pane_cp_vc

0xb68d,	// (0x000480de) slider_set_pane_vc_g1

0xb696,	// (0x000480e7) slider_set_pane_vc_g2

0x0006,

0xfa1f,	// (0x0004c470) slider_set_pane_vc_g

0x7f3f,	// (0x00044990) set_opt_bg_pane_g1_copy1

0x7f47,	// (0x00044998) set_opt_bg_pane_g2_copy1

0xb6c2,	// (0x00048113) set_opt_bg_pane_g3_copy1

0x7f57,	// (0x000449a8) set_opt_bg_pane_g4_copy1

0x7f5f,	// (0x000449b0) set_opt_bg_pane_g5_copy1

0x7f67,	// (0x000449b8) set_opt_bg_pane_g6_copy1

0xb6cc,	// (0x0004811d) set_opt_bg_pane_g7_copy1

0xb6d6,	// (0x00048127) set_opt_bg_pane_g8_copy1

0xb6e0,	// (0x00048131) set_opt_bg_pane_g9_copy1

0x2ae4,	// (0x0003f535) bg_set_opt_pane_cp_vc

0xb6ea,	// (0x0004813b) setting_slider_pane_vc_t1

0xb669,	// (0x000480ba) setting_slider_pane_vc_t2

0xb677,	// (0x000480c8) setting_slider_pane_vc_t3

0x0002,

0xfa2e,	// (0x0004c47f) setting_slider_pane_vc_t

0xb685,	// (0x000480d6) slider_set_pane_vc

0x64df,	// (0x00042f30) volume_set_pane_vc_g1

0x64e8,	// (0x00042f39) volume_set_pane_vc_g2

0x64f1,	// (0x00042f42) volume_set_pane_vc_g3

0x64fa,	// (0x00042f4b) volume_set_pane_vc_g4

0x6503,	// (0x00042f54) volume_set_pane_vc_g5

0x650c,	// (0x00042f5d) volume_set_pane_vc_g6

0x6515,	// (0x00042f66) volume_set_pane_vc_g7

0x651e,	// (0x00042f6f) volume_set_pane_vc_g8

0x6527,	// (0x00042f78) volume_set_pane_vc_g9

0x6530,	// (0x00042f81) volume_set_pane_vc_g10

0x0009,

0xf8cc,	// (0x0004c31d) volume_set_pane_vc_g

0xb6f9,	// (0x0004814a) volume_set_pane_vc

0xb701,	// (0x00048152) button_value_adjust_pane_cp1_vc

0xb70b,	// (0x0004815c) list_highlight_pane_cp2_vc

0xb714,	// (0x00048165) list_set_pane_vc_ParamLimits

0xb714,	// (0x00048165) list_set_pane_vc

0xb77e,	// (0x000481cf) main_pane_set_vc_t1_ParamLimits

0xb77e,	// (0x000481cf) main_pane_set_vc_t1

0xb793,	// (0x000481e4) main_pane_set_vc_t2_ParamLimits

0xb793,	// (0x000481e4) main_pane_set_vc_t2

0xb7a5,	// (0x000481f6) main_pane_set_vc_t3_ParamLimits

0xb7a5,	// (0x000481f6) main_pane_set_vc_t3

0xb7b9,	// (0x0004820a) main_pane_set_vc_t4_ParamLimits

0xb7b9,	// (0x0004820a) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x0004c486) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x0004c486) main_pane_set_vc_t

0xb7cd,	// (0x0004821e) setting_code_pane_vc_ParamLimits

0xb7cd,	// (0x0004821e) setting_code_pane_vc

0xb7de,	// (0x0004822f) setting_slider_graphic_pane_vc

0xb7de,	// (0x0004822f) setting_slider_pane_vc

0xb7de,	// (0x0004822f) setting_text_pane_vc

0xb7de,	// (0x0004822f) setting_volume_pane_vc

0xb7e8,	// (0x00048239) scroll_pane_cp121_vc

0x7eb2,	// (0x00044903) set_content_pane_vc

0xb826,	// (0x00048277) button_value_adjust_pane_g1

0xb82f,	// (0x00048280) button_value_adjust_pane_g2

0x0001,

0xfa94,	// (0x0004c4e5) button_value_adjust_pane_g

0xb838,	// (0x00048289) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb838,	// (0x00048289) form_field_slider_wide_pane_vc_t1

0xb84c,	// (0x0004829d) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb84c,	// (0x0004829d) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa99,	// (0x0004c4ea) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0004c4ea) form_field_slider_wide_pane_vc_t

0x78cd,	// (0x0004431e) input_focus_pane_cp10_vc_ParamLimits

0x78cd,	// (0x0004431e) input_focus_pane_cp10_vc

0xb85e,	// (0x000482af) slider_cont_pane_cp1_vc_ParamLimits

0xb85e,	// (0x000482af) slider_cont_pane_cp1_vc

0xb68d,	// (0x000480de) slider_form_pane_g1_cp2

0xb696,	// (0x000480e7) slider_form_pane_g2_cp2

0xb877,	// (0x000482c8) form_field_slider_pane_vc_t3

0xb885,	// (0x000482d6) form_field_slider_pane_vc_t4

0xb893,	// (0x000482e4) slider_form_pane_vc_ParamLimits

0xb893,	// (0x000482e4) slider_form_pane_vc

0xb8a0,	// (0x000482f1) form_field_slider_pane_vc_t1_ParamLimits

0xb8a0,	// (0x000482f1) form_field_slider_pane_vc_t1

0xb84c,	// (0x0004829d) form_field_slider_pane_vc_t2_ParamLimits

0xb84c,	// (0x0004829d) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x0004c4fa) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x0004c4fa) form_field_slider_pane_vc_t

0x78cd,	// (0x0004431e) input_focus_pane_cp9_vc_ParamLimits

0x78cd,	// (0x0004431e) input_focus_pane_cp9_vc

0xb8bc,	// (0x0004830d) slider_cont_pane_vc_ParamLimits

0xb8bc,	// (0x0004830d) slider_cont_pane_vc

0xb8ce,	// (0x0004831f) list_form_graphic_pane_cp_vc_ParamLimits

0xb8ce,	// (0x0004831f) list_form_graphic_pane_cp_vc

0x9b60,	// (0x000465b1) form_field_popup_wide_pane_vc_g1

0xb8e3,	// (0x00048334) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb8e3,	// (0x00048334) form_field_popup_wide_pane_vc_t1

0x7ed8,	// (0x00044929) input_focus_pane_cp8_vc_ParamLimits

0x7ed8,	// (0x00044929) input_focus_pane_cp8_vc

0xb8fa,	// (0x0004834b) list_form_wide_pane_vc_ParamLimits

0xb8fa,	// (0x0004834b) list_form_wide_pane_vc

0xb906,	// (0x00048357) list_form_graphic_pane_vc_g1

0xb90e,	// (0x0004835f) list_form_graphic_pane_vc_t1_ParamLimits

0xb90e,	// (0x0004835f) list_form_graphic_pane_vc_t1

0x7651,	// (0x000440a2) list_highlight_pane_cp5_vc_ParamLimits

0x7651,	// (0x000440a2) list_highlight_pane_cp5_vc

0xb92a,	// (0x0004837b) list_form_graphic_pane_vc_ParamLimits

0xb92a,	// (0x0004837b) list_form_graphic_pane_vc

0x9b60,	// (0x000465b1) form_field_popup_pane_vc_g1

0xb940,	// (0x00048391) form_field_popup_pane_vc_t1_ParamLimits

0xb940,	// (0x00048391) form_field_popup_pane_vc_t1

0x7ed8,	// (0x00044929) input_focus_pane_cp7_vc_ParamLimits

0x7ed8,	// (0x00044929) input_focus_pane_cp7_vc

0xb957,	// (0x000483a8) list_form_pane_vc_ParamLimits

0xb957,	// (0x000483a8) list_form_pane_vc

0xb963,	// (0x000483b4) data_form_pane_vc_t1_ParamLimits

0xb963,	// (0x000483b4) data_form_pane_vc_t1

0x7f3f,	// (0x00044990) input_focus_pane_vc_g1

0x7f47,	// (0x00044998) input_focus_pane_vc_g2

0x7f4f,	// (0x000449a0) input_focus_pane_vc_g3

0x7f57,	// (0x000449a8) input_focus_pane_vc_g4

0x7f5f,	// (0x000449b0) input_focus_pane_vc_g5

0x7f67,	// (0x000449b8) input_focus_pane_vc_g6

0x7f6f,	// (0x000449c0) input_focus_pane_vc_g7

0x7f77,	// (0x000449c8) input_focus_pane_vc_g8

0x7f7f,	// (0x000449d0) input_focus_pane_vc_g9

0x2ada,	// (0x0003f52b) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x0004c0fe) input_focus_pane_vc_g

0x9b54,	// (0x000465a5) data_form_pane_vc_ParamLimits

0x9b54,	// (0x000465a5) data_form_pane_vc

0x9b60,	// (0x000465b1) form_field_data_pane_vc_g1

0xb980,	// (0x000483d1) form_field_data_pane_vc_t1_ParamLimits

0xb980,	// (0x000483d1) form_field_data_pane_vc_t1

0x7ed8,	// (0x00044929) input_focus_pane_vc_ParamLimits

0x7ed8,	// (0x00044929) input_focus_pane_vc

0xb99a,	// (0x000483eb) button_value_adjust_pane_cp3_vc

0xb9a2,	// (0x000483f3) button_value_adjust_pane_cp5_vc

0xb9aa,	// (0x000483fb) form_field_data_pane_vc_ParamLimits

0xb9aa,	// (0x000483fb) form_field_data_pane_vc

0xb9c5,	// (0x00048416) form_field_data_pane_vc_cp2

0xb9cd,	// (0x0004841e) form_field_data_wide_pane_vc_ParamLimits

0xb9cd,	// (0x0004841e) form_field_data_wide_pane_vc

0xb9e7,	// (0x00048438) form_field_data_wide_pane_vc_cp2

0xb9ef,	// (0x00048440) form_field_popup_pane_vc_ParamLimits

0xb9ef,	// (0x00048440) form_field_popup_pane_vc

0xba0a,	// (0x0004845b) form_field_popup_wide_pane_vc_ParamLimits

0xba0a,	// (0x0004845b) form_field_popup_wide_pane_vc

0xba24,	// (0x00048475) form_field_slider_pane_vc_ParamLimits

0xba24,	// (0x00048475) form_field_slider_pane_vc

0xba37,	// (0x00048488) form_field_slider_wide_pane_vc_ParamLimits

0xba37,	// (0x00048488) form_field_slider_wide_pane_vc

0xba4a,	// (0x0004849b) grid_touch_1_pane_ParamLimits

0xba4a,	// (0x0004849b) grid_touch_1_pane

0xba56,	// (0x000484a7) grid_touch_2_pane_ParamLimits

0xba56,	// (0x000484a7) grid_touch_2_pane

0x8e03,	// (0x00045854) touch_pane_g1_ParamLimits

0x8e03,	// (0x00045854) touch_pane_g1

0xba70,	// (0x000484c1) cell_app_pane_cp_wide_ParamLimits

0xba70,	// (0x000484c1) cell_app_pane_cp_wide

0xba81,	// (0x000484d2) grid_popup_fast_wide_pane_ParamLimits

0xba81,	// (0x000484d2) grid_popup_fast_wide_pane

0xba95,	// (0x000484e6) scroll_pane_cp19_ParamLimits

0xba95,	// (0x000484e6) scroll_pane_cp19

0x2ae4,	// (0x0003f535) bg_popup_window_pane_cp20

0xbaa9,	// (0x000484fa) listscroll_popup_fast_wide_pane

0x7651,	// (0x000440a2) grid_indicator_nsta_pane

0xbab1,	// (0x00048502) clock_nsta_pane_g1

0xbaba,	// (0x0004850b) clock_nsta_pane_t1

0xbad6,	// (0x00048527) cell_indicator_nsta_pane_ParamLimits

0xbad6,	// (0x00048527) cell_indicator_nsta_pane

0xbb0e,	// (0x0004855f) cell_indicator_nsta_pane_g1

0xbb1c,	// (0x0004856d) cell_indicator_nsta_pane_g2

0x0001,

0xfab3,	// (0x0004c504) cell_indicator_nsta_pane_g

0xbb31,	// (0x00048582) clock_nsta_pane_cp

0xbb39,	// (0x0004858a) indicator_nsta_pane_cp

0xbb41,	// (0x00048592) nsta_clock_indic_pane_g1

0x771d,	// (0x0004416e) grid_indicator_pane

0x8480,	// (0x00044ed1) scroll_pane_cp29

0x6080,	// (0x00042ad1) indicator_nsta_pane_cp2_ParamLimits

0x6080,	// (0x00042ad1) indicator_nsta_pane_cp2

0x7651,	// (0x000440a2) main_apps_wheel_pane

0x9d1f,	// (0x00046770) form_midp_field_text_pane_ParamLimits

0x9e6e,	// (0x000468bf) scroll_bar_cp050_ParamLimits

0xbbaa,	// (0x000485fb) cell_indicator_pane_ParamLimits

0xbbaa,	// (0x000485fb) cell_indicator_pane

0xbbc2,	// (0x00048613) cell_indicator_pane_g1

0xbbcc,	// (0x0004861d) grid_wheel_folder_pane_ParamLimits

0xbbcc,	// (0x0004861d) grid_wheel_folder_pane

0xbbe0,	// (0x00048631) list_wheel_apps_pane_ParamLimits

0xbbe0,	// (0x00048631) list_wheel_apps_pane

0xbbf3,	// (0x00048644) main_apps_wheel_pane_g1_ParamLimits

0xbbf3,	// (0x00048644) main_apps_wheel_pane_g1

0xbc0f,	// (0x00048660) main_apps_wheel_pane_g2_ParamLimits

0xbc0f,	// (0x00048660) main_apps_wheel_pane_g2

0x0001,

0xfacf,	// (0x0004c520) main_apps_wheel_pane_g_ParamLimits

0xfacf,	// (0x0004c520) main_apps_wheel_pane_g

0xbc2b,	// (0x0004867c) main_apps_wheel_pane_t1_ParamLimits

0xbc2b,	// (0x0004867c) main_apps_wheel_pane_t1

0xbc54,	// (0x000486a5) list_wheel_apps_pane_g1

0xbc5c,	// (0x000486ad) list_wheel_apps_pane_g2

0xbc64,	// (0x000486b5) list_wheel_apps_pane_g3

0xbc6c,	// (0x000486bd) list_wheel_apps_pane_g4

0xbc76,	// (0x000486c7) list_wheel_apps_pane_g5

0x0004,

0xfad4,	// (0x0004c525) list_wheel_apps_pane_g

0x89b2,	// (0x00045403) navi_icon_text_pane

0x94f3,	// (0x00045f44) aid_fill_nsta

0xbc97,	// (0x000486e8) navi_icon_text_pane_g1

0xbca6,	// (0x000486f7) navi_icon_text_pane_t1

0x8848,	// (0x00045299) list_set_graphic_pane_t1_ParamLimits

0x8848,	// (0x00045299) list_set_graphic_pane_t1

0xa5bf,	// (0x00047010) popup_midp_note_alarm_window_t6_ParamLimits

0xa5bf,	// (0x00047010) popup_midp_note_alarm_window_t6

0xa5d1,	// (0x00047022) popup_midp_note_alarm_window_t7_ParamLimits

0xa5d1,	// (0x00047022) popup_midp_note_alarm_window_t7

0xa5e3,	// (0x00047034) popup_midp_note_alarm_window_t8_ParamLimits

0xa5e3,	// (0x00047034) popup_midp_note_alarm_window_t8

0xa5f5,	// (0x00047046) popup_midp_note_alarm_window_t9_ParamLimits

0xa5f5,	// (0x00047046) popup_midp_note_alarm_window_t9

0xa607,	// (0x00047058) popup_midp_note_alarm_window_t10_ParamLimits

0xa607,	// (0x00047058) popup_midp_note_alarm_window_t10

0xa619,	// (0x0004706a) popup_midp_note_alarm_window_t11_ParamLimits

0xa619,	// (0x0004706a) popup_midp_note_alarm_window_t11

0xa62b,	// (0x0004707c) scroll_pane_cp17_ParamLimits

0xa62b,	// (0x0004707c) scroll_pane_cp17

0x64df,	// (0x00042f30) volume_small_pane_cp_g1

0x684c,	// (0x0004329d) volume_small_pane_cp_g2

0x6855,	// (0x000432a6) volume_small_pane_cp_g3

0x685e,	// (0x000432af) volume_small_pane_cp_g4

0x6867,	// (0x000432b8) volume_small_pane_cp_g5

0x6870,	// (0x000432c1) volume_small_pane_cp_g6

0x6879,	// (0x000432ca) volume_small_pane_cp_g7

0x6882,	// (0x000432d3) volume_small_pane_cp_g8

0x688b,	// (0x000432dc) volume_small_pane_cp_g9

0x6894,	// (0x000432e5) volume_small_pane_cp_g10

0x8c13,	// (0x00045664) midp_ticker_pane_g1_ParamLimits

0x8c1f,	// (0x00045670) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0004c1c6) midp_ticker_pane_g_ParamLimits

0x8c2b,	// (0x0004567c) midp_ticker_pane_t1_ParamLimits

0x9509,	// (0x00045f5a) aid_fill_nsta_2

0x9e5a,	// (0x000468ab) list_form2_midp_pane

0xafe8,	// (0x00047a39) midp_editing_number_pane_ParamLimits

0xaff7,	// (0x00047a48) midp_ticker_pane_ParamLimits

0xbcbb,	// (0x0004870c) form2_midp_field_pane

0xbcdf,	// (0x00048730) scroll_pane_cp51

0xbcff,	// (0x00048750) form2_midp_button_pane_ParamLimits

0xbcff,	// (0x00048750) form2_midp_button_pane

0xbd11,	// (0x00048762) form2_midp_content_pane_ParamLimits

0xbd11,	// (0x00048762) form2_midp_content_pane

0xbd2b,	// (0x0004877c) form2_midp_field_choice_group_pane

0xbd33,	// (0x00048784) form2_midp_field_pane_g1

0xbd3b,	// (0x0004878c) form2_midp_field_pane_g2

0xbd43,	// (0x00048794) form2_midp_field_pane_g3

0xbd4b,	// (0x0004879c) form2_midp_field_pane_g4

0x0003,

0xfaf9,	// (0x0004c54a) form2_midp_field_pane_g

0xbd53,	// (0x000487a4) form2_midp_gauge_slider_pane

0xbd5b,	// (0x000487ac) form2_midp_gauge_wait_pane

0xbd63,	// (0x000487b4) form2_midp_image_pane_ParamLimits

0xbd63,	// (0x000487b4) form2_midp_image_pane

0xbd7e,	// (0x000487cf) form2_midp_label_pane_ParamLimits

0xbd7e,	// (0x000487cf) form2_midp_label_pane

0xbd9d,	// (0x000487ee) form2_midp_label_pane_cp_ParamLimits

0xbd9d,	// (0x000487ee) form2_midp_label_pane_cp

0xbdbe,	// (0x0004880f) form2_midp_string_pane_ParamLimits

0xbdbe,	// (0x0004880f) form2_midp_string_pane

0x5599,	// (0x00041fea) form2_midp_text_pane_ParamLimits

0x5599,	// (0x00041fea) form2_midp_text_pane

0xbdd0,	// (0x00048821) form2_midp_time_pane

0xbde0,	// (0x00048831) input_focus_pane_cp51_ParamLimits

0xbde0,	// (0x00048831) input_focus_pane_cp51

0xbdf8,	// (0x00048849) form2_midp_label_pane_t1_ParamLimits

0xbdf8,	// (0x00048849) form2_midp_label_pane_t1

0x55bc,	// (0x0004200d) form2_mdip_text_pane_t1_ParamLimits

0x55bc,	// (0x0004200d) form2_mdip_text_pane_t1

0x55db,	// (0x0004202c) form2_midp_time_pane_t1

0xbe46,	// (0x00048897) form2_midp_gauge_slider_pane_t1

0xbe58,	// (0x000488a9) form2_midp_gauge_slider_pane_t2

0xbe6a,	// (0x000488bb) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb02,	// (0x0004c553) form2_midp_gauge_slider_pane_t

0xbe7c,	// (0x000488cd) form2_midp_slider_pane

0xbe88,	// (0x000488d9) form2_midp_gauge_wait_pane_t1

0xbe96,	// (0x000488e7) form2_midp_wait_pane_ParamLimits

0xbe96,	// (0x000488e7) form2_midp_wait_pane

0x9b7f,	// (0x000465d0) list_single_2graphic_pane_cp4_ParamLimits

0x9b7f,	// (0x000465d0) list_single_2graphic_pane_cp4

0xbec1,	// (0x00048912) list_single_midp_graphic_pane_cp_ParamLimits

0xbec1,	// (0x00048912) list_single_midp_graphic_pane_cp

0x2ae4,	// (0x0003f535) list_highlight_pane_cp20

0xbee5,	// (0x00048936) list_single_2graphic_pane_g1_cp4

0xb487,	// (0x00047ed8) list_single_2graphic_pane_g2_cp4

0xbeed,	// (0x0004893e) list_single_2graphic_pane_t1_cp4

0x7651,	// (0x000440a2) list_highlight_pane_cp21

0xbefc,	// (0x0004894d) list_single_midp_graphic_pane_g4_cp

0xbf0b,	// (0x0004895c) list_single_midp_graphic_pane_t1_cp

0xbf20,	// (0x00048971) form2_mdip_string_pane_t1_ParamLimits

0xbf20,	// (0x00048971) form2_mdip_string_pane_t1

0x2ae4,	// (0x0003f535) bg_wml_button_pane_cp2

0x2ada,	// (0x0003f52b) form2_midp_image_pane_g1

0x5d6d,	// (0x000427be) list_double_large_graphic_pane_g5_ParamLimits

0x5d6d,	// (0x000427be) list_double_large_graphic_pane_g5

0x8b3e,	// (0x0004558f) midp_form_pane_ParamLimits

0x7651,	// (0x000440a2) main_apps_wheel_pane_ParamLimits

0x9291,	// (0x00045ce2) popup_preview_window_ParamLimits

0x9291,	// (0x00045ce2) popup_preview_window

0x9478,	// (0x00045ec9) popup_touch_info_window_ParamLimits

0x9478,	// (0x00045ec9) popup_touch_info_window

0x949a,	// (0x00045eeb) popup_touch_menu_window_ParamLimits

0x949a,	// (0x00045eeb) popup_touch_menu_window

0x2ad0,	// (0x0003f521) bg_popup_sub_pane_cp6

0xbfc5,	// (0x00048a16) list_touch_menu_pane

0xbfcd,	// (0x00048a1e) list_single_touch_menu_pane_ParamLimits

0xbfcd,	// (0x00048a1e) list_single_touch_menu_pane

0xbfe8,	// (0x00048a39) list_single_touch_menu_pane_t1

0x7651,	// (0x000440a2) bg_popup_sub_pane_cp7_ParamLimits

0x7651,	// (0x000440a2) bg_popup_sub_pane_cp7

0xbff6,	// (0x00048a47) heading_sub_pane

0xbffe,	// (0x00048a4f) list_touch_info_pane_ParamLimits

0xbffe,	// (0x00048a4f) list_touch_info_pane

0xc00d,	// (0x00048a5e) list_single_touch_info_pane_ParamLimits

0xc00d,	// (0x00048a5e) list_single_touch_info_pane

0xc01f,	// (0x00048a70) list_single_touch_info_pane_t1

0xc02d,	// (0x00048a7e) list_single_touch_info_pane_t2

0x0001,

0xfb10,	// (0x0004c561) list_single_touch_info_pane_t

0x8b36,	// (0x00045587) bg_popup_heading_pane_cp

0xc03b,	// (0x00048a8c) heading_sub_pane_t1

0x9aee,	// (0x0004653f) bg_popup_preview_window_pane_cp_ParamLimits

0x9aee,	// (0x0004653f) bg_popup_preview_window_pane_cp

0xbff6,	// (0x00048a47) heading_preview_pane

0xbffe,	// (0x00048a4f) list_preview_pane_ParamLimits

0xbffe,	// (0x00048a4f) list_preview_pane

0xc049,	// (0x00048a9a) popup_preview_window_g1

0xc00d,	// (0x00048a5e) list_single_preview_pane_ParamLimits

0xc00d,	// (0x00048a5e) list_single_preview_pane

0xc051,	// (0x00048aa2) list_single_preview_pane_g1

0xc059,	// (0x00048aaa) list_single_preview_pane_t1

0xc01f,	// (0x00048a70) list_single_preview_pane_t2

0x0001,

0xfb15,	// (0x0004c566) list_single_preview_pane_t

0xc067,	// (0x00048ab8) bg_popup_heading_pane_cp2_ParamLimits

0xc067,	// (0x00048ab8) bg_popup_heading_pane_cp2

0xc07d,	// (0x00048ace) heading_preview_pane_g1

0xc085,	// (0x00048ad6) heading_preview_pane_t1_ParamLimits

0xc085,	// (0x00048ad6) heading_preview_pane_t1

0x7740,	// (0x00044191) soft_indicator_pane_t1_ParamLimits

0x7e4b,	// (0x0004489c) scroll_pane_ParamLimits

0x837c,	// (0x00044dcd) scroll_sc2_left_pane

0x8385,	// (0x00044dd6) scroll_sc2_right_pane

0x83a4,	// (0x00044df5) scroll_bg_pane_g1_ParamLimits

0x83b9,	// (0x00044e0a) scroll_bg_pane_g2_ParamLimits

0x83d1,	// (0x00044e22) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0004c155) scroll_bg_pane_g_ParamLimits

0x83a4,	// (0x00044df5) scroll_handle_pane_g1_ParamLimits

0x83f3,	// (0x00044e44) scroll_handle_pane_g2_ParamLimits

0x83d1,	// (0x00044e22) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x0004c15c) scroll_handle_pane_g_ParamLimits

0x8edc,	// (0x0004592d) popup_choice_list_window_ParamLimits

0x8edc,	// (0x0004592d) popup_choice_list_window

0x9946,	// (0x00046397) choice_list_pane

0x99c8,	// (0x00046419) cell_toolbar_pane_t1

0x99f0,	// (0x00046441) toolbar_button_pane_ParamLimits

0xaafb,	// (0x0004754c) ai_gene_pane_1_t2_ParamLimits

0xaafb,	// (0x0004754c) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0004c379) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0004c379) ai_gene_pane_1_t

0xc0a2,	// (0x00048af3) scroll_sc2_left_pane_g1

0xc0a2,	// (0x00048af3) scroll_sc2_right_pane_g1

0x8eb4,	// (0x00045905) bg_popup_sub_pane_cp10

0xc0ac,	// (0x00048afd) list_choice_list_pane

0xc0c3,	// (0x00048b14) list_single_choice_list_pane_ParamLimits

0xc0c3,	// (0x00048b14) list_single_choice_list_pane

0xc0d7,	// (0x00048b28) list_single_choice_list_pane_g1

0xc0df,	// (0x00048b30) list_single_choice_list_pane_t1_ParamLimits

0xc0df,	// (0x00048b30) list_single_choice_list_pane_t1

0xc0f4,	// (0x00048b45) choice_list_pane_g1

0xc0fc,	// (0x00048b4d) choice_list_pane_t1

0x2ad0,	// (0x0003f521) input_focus_pane_cp11

0x8256,	// (0x00044ca7) title_pane_stacon_g2_ParamLimits

0x8256,	// (0x00044ca7) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x0004c13b) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x0004c13b) title_pane_stacon_g

0x8b36,	// (0x00045587) cursor_press_pane

0x8f92,	// (0x000459e3) popup_fep_hwr_window_ParamLimits

0x8f92,	// (0x000459e3) popup_fep_hwr_window

0x901c,	// (0x00045a6d) popup_fep_vkb_window_ParamLimits

0x901c,	// (0x00045a6d) popup_fep_vkb_window

0xc10a,	// (0x00048b5b) cursor_press_pane_g1

0x0002,

0xfb3e,	// (0x0004c58f) fep_vkb_side_pane_g_ParamLimits

0x68c8,	// (0x00043319) fep_hwr_candidate_pane_ParamLimits

0x68c8,	// (0x00043319) fep_hwr_candidate_pane

0x68f2,	// (0x00043343) fep_hwr_side_pane_ParamLimits

0x68f2,	// (0x00043343) fep_hwr_side_pane

0x6914,	// (0x00043365) fep_hwr_top_pane_ParamLimits

0x6914,	// (0x00043365) fep_hwr_top_pane

0x692c,	// (0x0004337d) fep_hwr_write_pane_ParamLimits

0x692c,	// (0x0004337d) fep_hwr_write_pane

0xfb3e,	// (0x0004c58f) fep_vkb_side_pane_g

0xc112,	// (0x00048b63) fep_hwr_top_pane_g1

0xc124,	// (0x00048b75) fep_hwr_top_pane_g2

0x6958,	// (0x000433a9) fep_hwr_top_pane_g3

0x0002,

0xfb1a,	// (0x0004c56b) fep_hwr_top_pane_g

0x696d,	// (0x000433be) fep_hwr_top_text_pane

0x8548,	// (0x00044f99) fep_hwr_top_text_pane_g1

0xc15a,	// (0x00048bab) fep_hwr_top_text_pane_t1

0x6a77,	// (0x000434c8) fep_hwr_candidate_pane_g1

0xc3a5,	// (0x00048df6) fep_vkb_keypad_pane_g3_ParamLimits

0xc3a5,	// (0x00048df6) fep_vkb_keypad_pane_g3

0xc3d1,	// (0x00048e22) fep_vkb_keypad_pane_g4_ParamLimits

0xc3d1,	// (0x00048e22) fep_vkb_keypad_pane_g4

0xc448,	// (0x00048e99) fep_vkb_bottom_pane_g2_ParamLimits

0xc448,	// (0x00048e99) fep_vkb_bottom_pane_g2

0x0001,

0xfb45,	// (0x0004c596) fep_vkb_bottom_pane_g_ParamLimits

0xfb45,	// (0x0004c596) fep_vkb_bottom_pane_g

0xc0a2,	// (0x00048af3) cell_vkb_side_pane_g2

0x0001,

0xfb4f,	// (0x0004c5a0) cell_vkb_side_pane_g

0xc4e1,	// (0x00048f32) cell_vkb_side_pane_t1

0xc4ef,	// (0x00048f40) cell_vkb_side_pane_t1_copy1

0xc0a2,	// (0x00048af3) bg_fep_vkb_candidate_pane_g2

0xc633,	// (0x00049084) cell_vkb_candidate_pane_ParamLimits

0xc168,	// (0x00048bb9) aid_size_cell_vkb_ParamLimits

0xc168,	// (0x00048bb9) aid_size_cell_vkb

0xc633,	// (0x00049084) cell_vkb_candidate_pane

0x6a91,	// (0x000434e2) bg_popup_fep_shadow_pane_g1

0xc1fa,	// (0x00048c4b) fep_vkb_bottom_pane_ParamLimits

0xc1fa,	// (0x00048c4b) fep_vkb_bottom_pane

0xc237,	// (0x00048c88) fep_vkb_candidate_pane_ParamLimits

0xc237,	// (0x00048c88) fep_vkb_candidate_pane

0xc253,	// (0x00048ca4) fep_vkb_keypad_pane_ParamLimits

0xc253,	// (0x00048ca4) fep_vkb_keypad_pane

0xc286,	// (0x00048cd7) fep_vkb_side_pane_ParamLimits

0xc286,	// (0x00048cd7) fep_vkb_side_pane

0xc2c2,	// (0x00048d13) fep_vkb_top_pane_ParamLimits

0xc2c2,	// (0x00048d13) fep_vkb_top_pane

0xc2fe,	// (0x00048d4f) fep_vkb_top_pane_g1_ParamLimits

0xc2fe,	// (0x00048d4f) fep_vkb_top_pane_g1

0xc30d,	// (0x00048d5e) fep_vkb_top_pane_g2_ParamLimits

0xc30d,	// (0x00048d5e) fep_vkb_top_pane_g2

0xc31c,	// (0x00048d6d) fep_vkb_top_pane_g3_ParamLimits

0xc31c,	// (0x00048d6d) fep_vkb_top_pane_g3

0x0003,

0xfb35,	// (0x0004c586) fep_vkb_top_pane_g_ParamLimits

0xfb35,	// (0x0004c586) fep_vkb_top_pane_g

0xc33a,	// (0x00048d8b) fep_vkb_top_text_pane_ParamLimits

0xc33a,	// (0x00048d8b) fep_vkb_top_text_pane

0xc34b,	// (0x00048d9c) fep_vkb_side_pane_g1_ParamLimits

0xc34b,	// (0x00048d9c) fep_vkb_side_pane_g1

0xc394,	// (0x00048de5) grid_vkb_side_pane_ParamLimits

0xc394,	// (0x00048de5) grid_vkb_side_pane

0x6a99,	// (0x000434ea) bg_popup_fep_shadow_pane_g2

0x6aa2,	// (0x000434f3) bg_popup_fep_shadow_pane_g3

0x6aaa,	// (0x000434fb) bg_popup_fep_shadow_pane_g4

0x6ab3,	// (0x00043504) bg_popup_fep_shadow_pane_g5

0x6abd,	// (0x0004350e) bg_popup_fep_shadow_pane_g6

0x6ac5,	// (0x00043516) bg_popup_fep_shadow_pane_g7

0x7f5f,	// (0x000449b0) bg_popup_fep_shadow_pane_g8

0xc3f3,	// (0x00048e44) grid_vkb_keypad_number_pane_ParamLimits

0xc3f3,	// (0x00048e44) grid_vkb_keypad_number_pane

0xc407,	// (0x00048e58) grid_vkb_keypad_pane_ParamLimits

0xc407,	// (0x00048e58) grid_vkb_keypad_pane

0xc42d,	// (0x00048e7e) fep_vkb_bottom_pane_g1_ParamLimits

0xc42d,	// (0x00048e7e) fep_vkb_bottom_pane_g1

0xc456,	// (0x00048ea7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc456,	// (0x00048ea7) grid_vkb_keypad_bottom_left_pane

0xc46b,	// (0x00048ebc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc46b,	// (0x00048ebc) grid_vkb_keypad_bottom_right_pane

0xc480,	// (0x00048ed1) fep_vkb_top_text_pane_g1

0xc49b,	// (0x00048eec) fep_vkb_top_text_pane_t1

0xc4be,	// (0x00048f0f) cell_vkb_side_pane_ParamLimits

0xc4be,	// (0x00048f0f) cell_vkb_side_pane

0xc0a2,	// (0x00048af3) cell_vkb_side_pane_g1

0xc4fd,	// (0x00048f4e) cell_vkb_keypad_pane_ParamLimits

0xc4fd,	// (0x00048f4e) cell_vkb_keypad_pane

0xc58a,	// (0x00048fdb) cell_vkb_keypad_pane_g1

0x0008,

0xfb62,	// (0x0004c5b3) bg_popup_fep_shadow_pane_g

0xc0a2,	// (0x00048af3) cell_hwr_side_pane_g1

0xc0a2,	// (0x00048af3) cell_hwr_side_pane_g2

0xc594,	// (0x00048fe5) cell_vkb_keypad_pane_t1

0xc5a2,	// (0x00048ff3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5a2,	// (0x00048ff3) cell_vkb_keypad_bottom_left_pane

0xc5bf,	// (0x00049010) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc5bf,	// (0x00049010) cell_vkb_keypad_bottom_right_pane

0xc0a2,	// (0x00048af3) cell_vkb_keypad_bottom_left_pane_g1

0xc0a2,	// (0x00048af3) cell_vkb_keypad_bottom_right_pane_g1

0xc5f8,	// (0x00049049) cell_vkb_keypad_number_pane_ParamLimits

0xc5f8,	// (0x00049049) cell_vkb_keypad_number_pane

0xc617,	// (0x00049068) cell_vkb_keypad_number_pane_g1

0xc621,	// (0x00049072) cell_vkb_keypad_number_pane_g2

0xc62a,	// (0x0004907b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb54,	// (0x0004c5a5) cell_vkb_keypad_number_pane_g

0xc594,	// (0x00048fe5) cell_vkb_keypad_number_pane_t1

0xc654,	// (0x000490a5) fep_vkb_candidate_pane_g1

0x0001,

0xfb4f,	// (0x0004c5a0) cell_hwr_side_pane_g

0xc66d,	// (0x000490be) cell_hwr_side_pane_t1

0x6ad7,	// (0x00043528) cell_hwr_side_pane_t1_copy1

0xc32c,	// (0x00048d7d) cell_hwr_candidate_pane_g1

0x6ae5,	// (0x00043536) cell_hwr_candidate_pane_t1

0xc0a2,	// (0x00048af3) cell_vkb_candidate_pane_g2

0xc6f3,	// (0x00049144) cell_vkb_candidate_pane_t1

0xc4b0,	// (0x00048f01) bg_popup_fep_shadow_pane_ParamLimits

0xc4b0,	// (0x00048f01) bg_popup_fep_shadow_pane

0x2aa0,	// (0x0003f4f1) bg_fep_hwr_top_pane_g4

0xc136,	// (0x00048b87) bg_hwr_side_pane_g1_ParamLimits

0xc136,	// (0x00048b87) bg_hwr_side_pane_g1

0x69ab,	// (0x000433fc) cell_hwr_side_pane_ParamLimits

0x69ab,	// (0x000433fc) cell_hwr_side_pane

0x69e8,	// (0x00043439) fep_hwr_write_pane_g1_ParamLimits

0x69e8,	// (0x00043439) fep_hwr_write_pane_g1

0x69f5,	// (0x00043446) fep_hwr_write_pane_g2_ParamLimits

0x69f5,	// (0x00043446) fep_hwr_write_pane_g2

0x6a02,	// (0x00043453) fep_hwr_write_pane_g3_ParamLimits

0x6a02,	// (0x00043453) fep_hwr_write_pane_g3

0x6a10,	// (0x00043461) fep_hwr_write_pane_g4_ParamLimits

0x6a10,	// (0x00043461) fep_hwr_write_pane_g4

0x0005,

0xfb21,	// (0x0004c572) fep_hwr_write_pane_g_ParamLimits

0xfb21,	// (0x0004c572) fep_hwr_write_pane_g

0x2aa0,	// (0x0003f4f1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2aa0,	// (0x0003f4f1) bg_fep_hwr_candidate_pane_g2

0x6a25,	// (0x00043476) cell_hwr_candidate_pane_ParamLimits

0x6a25,	// (0x00043476) cell_hwr_candidate_pane

0x6a77,	// (0x000434c8) fep_hwr_candidate_pane_g1_ParamLimits

0xc196,	// (0x00048be7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc196,	// (0x00048be7) bg_popup_fep_shadow_pane_cp2

0xc32c,	// (0x00048d7d) fep_vkb_top_pane_g4_ParamLimits

0xc32c,	// (0x00048d7d) fep_vkb_top_pane_g4

0xc372,	// (0x00048dc3) fep_vkb_side_pane_g2_ParamLimits

0xc372,	// (0x00048dc3) fep_vkb_side_pane_g2

0x4ef4,	// (0x00041945) list_setting_pane_t4_ParamLimits

0x4ef4,	// (0x00041945) list_setting_pane_t4

0x4f90,	// (0x000419e1) list_setting_number_pane_t5_ParamLimits

0x4f90,	// (0x000419e1) list_setting_number_pane_t5

0x858a,	// (0x00044fdb) list_double_heading_pane_cp2_ParamLimits

0x858a,	// (0x00044fdb) list_double_heading_pane_cp2

0x7ef2,	// (0x00044943) list_double_heading_pane_g1_cp2_ParamLimits

0x7ef2,	// (0x00044943) list_double_heading_pane_g1_cp2

0x7efe,	// (0x0004494f) list_double_heading_pane_g2_cp2_ParamLimits

0x7efe,	// (0x0004494f) list_double_heading_pane_g2_cp2

0xc701,	// (0x00049152) list_double_heading_pane_t1_cp2_ParamLimits

0xc701,	// (0x00049152) list_double_heading_pane_t1_cp2

0xc717,	// (0x00049168) list_double_heading_pane_t2_cp2_ParamLimits

0xc717,	// (0x00049168) list_double_heading_pane_t2_cp2

0x2ac8,	// (0x0003f519) aid_value_unit2

0x5b46,	// (0x00042597) popup_preview_fixed_window

0x78db,	// (0x0004432c) bg_popup_preview_window_pane_cp02

0xc729,	// (0x0004917a) list_preview_fixed_pane

0xc76f,	// (0x000491c0) list_empty_pane_fp_ParamLimits

0xc76f,	// (0x000491c0) list_empty_pane_fp

0xc76f,	// (0x000491c0) list_single_cale_day_pane_fp_ParamLimits

0xc76f,	// (0x000491c0) list_single_cale_day_pane_fp

0xc76f,	// (0x000491c0) list_single_graphic_heading_pane_fp_ParamLimits

0xc76f,	// (0x000491c0) list_single_graphic_heading_pane_fp

0xc76f,	// (0x000491c0) list_single_graphic_pane_fp_ParamLimits

0xc76f,	// (0x000491c0) list_single_graphic_pane_fp

0xc76f,	// (0x000491c0) list_single_heading_pane_fp_ParamLimits

0xc76f,	// (0x000491c0) list_single_heading_pane_fp

0xc76f,	// (0x000491c0) list_single_pane_fp_ParamLimits

0xc76f,	// (0x000491c0) list_single_pane_fp

0xc788,	// (0x000491d9) list_single_pane_fp_g1_ParamLimits

0xc788,	// (0x000491d9) list_single_pane_fp_g1

0x5d61,	// (0x000427b2) list_single_pane_fp_g2_ParamLimits

0x5d61,	// (0x000427b2) list_single_pane_fp_g2

0x6b03,	// (0x00043554) list_single_pane_fp_g3_ParamLimits

0x6b03,	// (0x00043554) list_single_pane_fp_g3

0xc794,	// (0x000491e5) list_single_pane_fp_g4_ParamLimits

0xc794,	// (0x000491e5) list_single_pane_fp_g4

0x0003,

0xfb83,	// (0x0004c5d4) list_single_pane_fp_g_ParamLimits

0xfb83,	// (0x0004c5d4) list_single_pane_fp_g

0x55ee,	// (0x0004203f) list_single_pane_fp_t1_ParamLimits

0x55ee,	// (0x0004203f) list_single_pane_fp_t1

0x5605,	// (0x00042056) list_single_graphic_pane_fp_g1_ParamLimits

0x5605,	// (0x00042056) list_single_graphic_pane_fp_g1

0xc788,	// (0x000491d9) list_single_graphic_pane_fp_g2_ParamLimits

0xc788,	// (0x000491d9) list_single_graphic_pane_fp_g2

0x5d61,	// (0x000427b2) list_single_graphic_pane_fp_g3_ParamLimits

0x5d61,	// (0x000427b2) list_single_graphic_pane_fp_g3

0x6b03,	// (0x00043554) list_single_graphic_pane_fp_g4_ParamLimits

0x6b03,	// (0x00043554) list_single_graphic_pane_fp_g4

0xc794,	// (0x000491e5) list_single_graphic_pane_fp_g5_ParamLimits

0xc794,	// (0x000491e5) list_single_graphic_pane_fp_g5

0x0004,

0xfb8c,	// (0x0004c5dd) list_single_graphic_pane_fp_g_ParamLimits

0xfb8c,	// (0x0004c5dd) list_single_graphic_pane_fp_g

0x5611,	// (0x00042062) list_single_graphic_pane_fp_t1_ParamLimits

0x5611,	// (0x00042062) list_single_graphic_pane_fp_t1

0x5605,	// (0x00042056) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5605,	// (0x00042056) list_single_graphic_heading_pane_fp_g1

0xc788,	// (0x000491d9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc788,	// (0x000491d9) list_single_graphic_heading_pane_fp_g2

0x5d61,	// (0x000427b2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5d61,	// (0x000427b2) list_single_graphic_heading_pane_fp_g3

0x6b03,	// (0x00043554) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6b03,	// (0x00043554) list_single_graphic_heading_pane_fp_g4

0xc794,	// (0x000491e5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc794,	// (0x000491e5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0004c5dd) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0004c5dd) list_single_graphic_heading_pane_fp_g

0x5627,	// (0x00042078) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5627,	// (0x00042078) list_single_graphic_heading_pane_fp_t1

0x563d,	// (0x0004208e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x563d,	// (0x0004208e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0004c5e8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0004c5e8) list_single_graphic_heading_pane_fp_t

0x564f,	// (0x000420a0) list_single_cale_day_pane_fp_g1_ParamLimits

0x564f,	// (0x000420a0) list_single_cale_day_pane_fp_g1

0xc7a0,	// (0x000491f1) list_single_cale_day_pane_fp_g2_ParamLimits

0xc7a0,	// (0x000491f1) list_single_cale_day_pane_fp_g2

0x6b17,	// (0x00043568) list_single_cale_day_pane_fp_g3_ParamLimits

0x6b17,	// (0x00043568) list_single_cale_day_pane_fp_g3

0x6b3f,	// (0x00043590) list_single_cale_day_pane_fp_g4_ParamLimits

0x6b3f,	// (0x00043590) list_single_cale_day_pane_fp_g4

0x6b63,	// (0x000435b4) list_single_cale_day_pane_fp_g5_ParamLimits

0x6b63,	// (0x000435b4) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9c,	// (0x0004c5ed) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9c,	// (0x0004c5ed) list_single_cale_day_pane_fp_g

0x5687,	// (0x000420d8) list_single_cale_day_pane_fp_t1_ParamLimits

0x5687,	// (0x000420d8) list_single_cale_day_pane_fp_t1

0x56ad,	// (0x000420fe) list_single_cale_day_pane_fp_t2_ParamLimits

0x56ad,	// (0x000420fe) list_single_cale_day_pane_fp_t2

0x56c6,	// (0x00042117) list_single_cale_day_pane_fp_t3_ParamLimits

0x56c6,	// (0x00042117) list_single_cale_day_pane_fp_t3

0x0002,

0xfba7,	// (0x0004c5f8) list_single_cale_day_pane_fp_t_ParamLimits

0xfba7,	// (0x0004c5f8) list_single_cale_day_pane_fp_t

0xc788,	// (0x000491d9) list_empty_pane_fp_g1_ParamLimits

0xc788,	// (0x000491d9) list_empty_pane_fp_g1

0x56df,	// (0x00042130) list_empty_pane_fp_t1

0x56ed,	// (0x0004213e) list_empty_pane_fp_t2

0x0001,

0xfbae,	// (0x0004c5ff) list_empty_pane_fp_t

0xc788,	// (0x000491d9) list_single_heading_pane_fp_g1_ParamLimits

0xc788,	// (0x000491d9) list_single_heading_pane_fp_g1

0x5d61,	// (0x000427b2) list_single_heading_pane_fp_g2_ParamLimits

0x5d61,	// (0x000427b2) list_single_heading_pane_fp_g2

0x6b03,	// (0x00043554) list_single_heading_pane_fp_g3_ParamLimits

0x6b03,	// (0x00043554) list_single_heading_pane_fp_g3

0x0002,

0xfbb3,	// (0x0004c604) list_single_heading_pane_fp_g_ParamLimits

0xfbb3,	// (0x0004c604) list_single_heading_pane_fp_g

0x56fb,	// (0x0004214c) list_single_heading_pane_fp_t1_ParamLimits

0x56fb,	// (0x0004214c) list_single_heading_pane_fp_t1

0x570d,	// (0x0004215e) list_single_heading_pane_fp_t2_ParamLimits

0x570d,	// (0x0004215e) list_single_heading_pane_fp_t2

0x0001,

0xfbba,	// (0x0004c60b) list_single_heading_pane_fp_t_ParamLimits

0xfbba,	// (0x0004c60b) list_single_heading_pane_fp_t

0x80ed,	// (0x00044b3e) aid_size_cell_fast

0x784d,	// (0x0004429e) soft_indicator_pane_cp1_t1

0x812a,	// (0x00044b7b) cell_app_pane_cp2_ParamLimits

0x812a,	// (0x00044b7b) cell_app_pane_cp2

0x68b1,	// (0x00043302) fep_hwr_candidate_drop_down_list_pane

0x2aae,	// (0x0003f4ff) fep_hwr_candidate_pane_g3_ParamLimits

0x2aae,	// (0x0003f4ff) fep_hwr_candidate_pane_g3

0x2abb,	// (0x0003f50c) fep_hwr_candidate_pane_g4_ParamLimits

0x2abb,	// (0x0003f50c) fep_hwr_candidate_pane_g4

0x0002,

0xfb2e,	// (0x0004c57f) fep_hwr_candidate_pane_g_ParamLimits

0xfb2e,	// (0x0004c57f) fep_hwr_candidate_pane_g

0xc226,	// (0x00048c77) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc226,	// (0x00048c77) fep_vkb_candidate_drop_down_list_pane

0xc65c,	// (0x000490ad) fep_vkb_candidate_pane_g3

0xc664,	// (0x000490b5) fep_vkb_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0004c5ac) fep_vkb_candidate_pane_g

0xc32c,	// (0x00048d7d) cell_hwr_candidate_pane_g1_ParamLimits

0xc67b,	// (0x000490cc) cell_hwr_candidate_pane_g3_ParamLimits

0xc67b,	// (0x000490cc) cell_hwr_candidate_pane_g3

0xc69c,	// (0x000490ed) cell_hwr_candidate_pane_g4_ParamLimits

0xc69c,	// (0x000490ed) cell_hwr_candidate_pane_g4

0x0002,

0xfb75,	// (0x0004c5c6) cell_hwr_candidate_pane_g_ParamLimits

0xfb75,	// (0x0004c5c6) cell_hwr_candidate_pane_g

0xc6bd,	// (0x0004910e) cell_vkb_candidate_pane_g3_ParamLimits

0xc6bd,	// (0x0004910e) cell_vkb_candidate_pane_g3

0xc6d8,	// (0x00049129) cell_vkb_candidate_pane_g4_ParamLimits

0xc6d8,	// (0x00049129) cell_vkb_candidate_pane_g4

0xc7ac,	// (0x000491fd) cell_app_pane_cp2_g1_ParamLimits

0xc7ac,	// (0x000491fd) cell_app_pane_cp2_g1

0xc7ca,	// (0x0004921b) cell_app_pane_cp2_g2_ParamLimits

0xc7ca,	// (0x0004921b) cell_app_pane_cp2_g2

0x0001,

0xfbbf,	// (0x0004c610) cell_app_pane_cp2_g_ParamLimits

0xfbbf,	// (0x0004c610) cell_app_pane_cp2_g

0xc7d6,	// (0x00049227) cell_app_pane_cp2_t1_ParamLimits

0xc7d6,	// (0x00049227) cell_app_pane_cp2_t1

0x7ed8,	// (0x00044929) grid_highlight_pane_cp1_ParamLimits

0x7ed8,	// (0x00044929) grid_highlight_pane_cp1

0x6b87,	// (0x000435d8) cell_hwr_candidate_pane_cp1_ParamLimits

0x6b87,	// (0x000435d8) cell_hwr_candidate_pane_cp1

0xc32c,	// (0x00048d7d) fep_hwr_candidate_drop_down_list_pane_g1

0xc7e8,	// (0x00049239) fep_hwr_candidate_drop_down_list_pane_g2

0xc7f5,	// (0x00049246) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc4,	// (0x0004c615) fep_hwr_candidate_drop_down_list_pane_g

0x6bab,	// (0x000435fc) fep_hwr_candidate_drop_down_list_scroll_pane

0x6bb4,	// (0x00043605) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6bb4,	// (0x00043605) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6bc1,	// (0x00043612) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6bc1,	// (0x00043612) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6bce,	// (0x0004361f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6bce,	// (0x0004361f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc6bd,	// (0x0004910e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6bd,	// (0x0004910e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc6d8,	// (0x00049129) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6d8,	// (0x00049129) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6bdb,	// (0x0004362c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6bdb,	// (0x0004362c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6bf6,	// (0x00043647) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6bf6,	// (0x00043647) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6c11,	// (0x00043662) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6c11,	// (0x00043662) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x0004c61c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x0004c61c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc802,	// (0x00049253) cell_vkb_candidate_pane_cp1_ParamLimits

0xc802,	// (0x00049253) cell_vkb_candidate_pane_cp1

0xc32c,	// (0x00048d7d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc32c,	// (0x00048d7d) fep_vkb_candidate_drop_down_list_pane_g1

0xc7e8,	// (0x00049239) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7e8,	// (0x00049239) fep_vkb_candidate_drop_down_list_pane_g2

0xc7f5,	// (0x00049246) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7f5,	// (0x00049246) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc4,	// (0x0004c615) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc4,	// (0x0004c615) fep_vkb_candidate_drop_down_list_pane_g

0xc828,	// (0x00049279) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc828,	// (0x00049279) fep_vkb_candidate_drop_down_list_scroll_pane

0xc835,	// (0x00049286) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc835,	// (0x00049286) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc842,	// (0x00049293) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc842,	// (0x00049293) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc84e,	// (0x0004929f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc84e,	// (0x0004929f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc67b,	// (0x000490cc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc67b,	// (0x000490cc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc69c,	// (0x000490ed) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc69c,	// (0x000490ed) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc85a,	// (0x000492ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc85a,	// (0x000492ab) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc87b,	// (0x000492cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc87b,	// (0x000492cc) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc89c,	// (0x000492ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc89c,	// (0x000492ed) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0004c62d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0004c62d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x757b,	// (0x00043fcc) title_pane_g1_ParamLimits

0x7588,	// (0x00043fd9) title_pane_g2_ParamLimits

0xf56a,	// (0x0004bfbb) title_pane_g_ParamLimits

0x8538,	// (0x00044f89) aid_call2_pane

0x8540,	// (0x00044f91) aid_call_pane

0x8548,	// (0x00044f99) popup_clock_analogue_window_g1

0x8548,	// (0x00044f99) popup_clock_analogue_window_g2

0x5f61,	// (0x000429b2) popup_clock_analogue_window_g3

0x5f6a,	// (0x000429bb) popup_clock_analogue_window_g4

0x2ada,	// (0x0003f52b) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x0004c16a) popup_clock_analogue_window_g

0x5f72,	// (0x000429c3) popup_clock_analogue_window_t1

0x5f80,	// (0x000429d1) clock_digital_number_pane_ParamLimits

0x5f80,	// (0x000429d1) clock_digital_number_pane

0x5f8c,	// (0x000429dd) clock_digital_number_pane_cp02_ParamLimits

0x5f8c,	// (0x000429dd) clock_digital_number_pane_cp02

0x5f98,	// (0x000429e9) clock_digital_number_pane_cp03_ParamLimits

0x5f98,	// (0x000429e9) clock_digital_number_pane_cp03

0x5fa4,	// (0x000429f5) clock_digital_number_pane_cp04_ParamLimits

0x5fa4,	// (0x000429f5) clock_digital_number_pane_cp04

0x5fb0,	// (0x00042a01) clock_digital_separator_pane_ParamLimits

0x5fb0,	// (0x00042a01) clock_digital_separator_pane

0x5fbc,	// (0x00042a0d) popup_clock_digital_window_t1_ParamLimits

0x5fbc,	// (0x00042a0d) popup_clock_digital_window_t1

0x2ada,	// (0x0003f52b) clock_digital_number_pane_g1

0x2ada,	// (0x0003f52b) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0004c175) clock_digital_number_pane_g

0x2ada,	// (0x0003f52b) clock_digital_separator_pane_g1

0x2ada,	// (0x0003f52b) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0004c175) clock_digital_separator_pane_g

0x94f3,	// (0x00045f44) aid_fill_nsta_ParamLimits

0x9643,	// (0x00046094) indicator_nsta_pane_ParamLimits

0x97d3,	// (0x00046224) popup_clock_analogue_window

0x97d3,	// (0x00046224) popup_clock_digital_window

0x7651,	// (0x000440a2) grid_indicator_nsta_pane_ParamLimits

0xbac8,	// (0x00048519) clock_nsta_pane_t2

0x0001,

0xfaae,	// (0x0004c4ff) clock_nsta_pane_t

0x5f25,	// (0x00042976) aid_size_max_handle

0x5f2f,	// (0x00042980) aid_size_min_handle

0x8b36,	// (0x00045587) editor_scroll_pane

0xc8b7,	// (0x00049308) ex_editor_pane

0x805a,	// (0x00044aab) scroll_pane_cp13

0x7e77,	// (0x000448c8) scroll_pane_cp14

0x8572,	// (0x00044fc3) scroll_pane_cp36

0x85a0,	// (0x00044ff1) list_single_graphic_hl_pane_cp2_ParamLimits

0x85a0,	// (0x00044ff1) list_single_graphic_hl_pane_cp2

0x66e5,	// (0x00043136) list_single_graphic_hl_pane_ParamLimits

0x66e5,	// (0x00043136) list_single_graphic_hl_pane

0x5723,	// (0x00042174) aid_size_min_hl_cp1

0xc8bf,	// (0x00049310) list_highlight_pane_cp34_ParamLimits

0xc8bf,	// (0x00049310) list_highlight_pane_cp34

0xc8d0,	// (0x00049321) list_single_graphic_hl_pane_g1_ParamLimits

0xc8d0,	// (0x00049321) list_single_graphic_hl_pane_g1

0x572c,	// (0x0004217d) list_single_graphic_hl_pane_g2_ParamLimits

0x572c,	// (0x0004217d) list_single_graphic_hl_pane_g2

0x572c,	// (0x0004217d) list_single_graphic_hl_pane_g3_ParamLimits

0x572c,	// (0x0004217d) list_single_graphic_hl_pane_g3

0x67da,	// (0x0004322b) list_single_graphic_hl_pane_g4_ParamLimits

0x67da,	// (0x0004322b) list_single_graphic_hl_pane_g4

0x6c2c,	// (0x0004367d) list_single_graphic_hl_pane_g5_ParamLimits

0x6c2c,	// (0x0004367d) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0004c63e) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0004c63e) list_single_graphic_hl_pane_g

0x5738,	// (0x00042189) list_single_graphic_hl_pane_t1_ParamLimits

0x5738,	// (0x00042189) list_single_graphic_hl_pane_t1

0xc8dd,	// (0x0004932e) aid_size_min_hl_cp2

0xc8e6,	// (0x00049337) list_highlight_pane_cp34_cp2_ParamLimits

0xc8e6,	// (0x00049337) list_highlight_pane_cp34_cp2

0xc8d0,	// (0x00049321) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8d0,	// (0x00049321) list_single_graphic_hl_pane_g1_cp2

0xc8f3,	// (0x00049344) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8f3,	// (0x00049344) list_single_graphic_hl_pane_g2_cp2

0xc8ff,	// (0x00049350) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8ff,	// (0x00049350) list_single_graphic_hl_pane_g3_cp2

0x94e7,	// (0x00045f38) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x94e7,	// (0x00045f38) list_single_graphic_hl_pane_g4_cp2

0xc90d,	// (0x0004935e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc90d,	// (0x0004935e) list_single_graphic_hl_pane_g5_cp2

0x6293,	// (0x00042ce4) control_pane_g4_ParamLimits

0x6293,	// (0x00042ce4) control_pane_g4

0x8eb4,	// (0x00045905) bg_popup_sub_pane_cp10_ParamLimits

0xc0ac,	// (0x00048afd) list_choice_list_pane_ParamLimits

0xc0bb,	// (0x00048b0c) scroll_pane_cp23

0x78db,	// (0x0004432c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc729,	// (0x0004917a) list_preview_fixed_pane_ParamLimits

0xc73f,	// (0x00049190) list_preview_fixed_pane_cp_ParamLimits

0xc73f,	// (0x00049190) list_preview_fixed_pane_cp

0xc74b,	// (0x0004919c) popup_preview_fixed_window_g1_ParamLimits

0xc74b,	// (0x0004919c) popup_preview_fixed_window_g1

0xc757,	// (0x000491a8) popup_preview_fixed_window_g2_ParamLimits

0xc757,	// (0x000491a8) popup_preview_fixed_window_g2

0x0002,

0xfb7c,	// (0x0004c5cd) popup_preview_fixed_window_g_ParamLimits

0xfb7c,	// (0x0004c5cd) popup_preview_fixed_window_g

0x5e97,	// (0x000428e8) aid_navi_side_left_pane_ParamLimits

0x5eac,	// (0x000428fd) aid_navi_side_right_pane_ParamLimits

0x5ec4,	// (0x00042915) navi_icon_pane_stacon_ParamLimits

0x5ed8,	// (0x00042929) navi_navi_pane_stacon_ParamLimits

0x5ec4,	// (0x00042915) navi_text_pane_stacon_ParamLimits

0x2ad0,	// (0x0003f521) main_text_info_pane

0xc937,	// (0x00049388) listscroll_text_info_pane

0xc93f,	// (0x00049390) list_text_info_pane_ParamLimits

0xc93f,	// (0x00049390) list_text_info_pane

0xc94e,	// (0x0004939f) scroll_pane_cp24_ParamLimits

0xc94e,	// (0x0004939f) scroll_pane_cp24

0xc96c,	// (0x000493bd) list_text_info_pane_t1_ParamLimits

0xc96c,	// (0x000493bd) list_text_info_pane_t1

0x8efa,	// (0x0004594b) popup_fast_swap2_window_ParamLimits

0x8efa,	// (0x0004594b) popup_fast_swap2_window

0xc991,	// (0x000493e2) aid_size_cell_fast2

0x2ad0,	// (0x0003f521) bg_popup_window_pane_cp17

0x9e86,	// (0x000468d7) heading_pane_cp2

0x7b3b,	// (0x0004458c) listscroll_fast2_pane

0xc99b,	// (0x000493ec) grid_fast2_pane

0xc9a5,	// (0x000493f6) listscroll_fast2_pane_g1

0xc9af,	// (0x00049400) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0004c649) listscroll_fast2_pane_g

0x805a,	// (0x00044aab) scroll_pane_cp26

0xc9b9,	// (0x0004940a) cell_fast2_pane_ParamLimits

0xc9b9,	// (0x0004940a) cell_fast2_pane

0xc9d0,	// (0x00049421) cell_fast2_pane_g1

0xc9d9,	// (0x0004942a) cell_fast2_pane_g2

0xc9e2,	// (0x00049433) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0004c64e) cell_fast2_pane_g

0x7c34,	// (0x00044685) grid_highlight_pane_cp9

0x7c49,	// (0x0004469a) main_eswt_pane_ParamLimits

0x7c49,	// (0x0004469a) main_eswt_pane

0xc963,	// (0x000493b4) list_single_text_info_pane

0xc9ea,	// (0x0004943b) eswt_ctrl_button_pane

0xc9ea,	// (0x0004943b) eswt_ctrl_canvas_pane

0xc9f2,	// (0x00049443) eswt_ctrl_combo_pane

0xc9ea,	// (0x0004943b) eswt_ctrl_default_pane

0xc9ea,	// (0x0004943b) eswt_ctrl_label_pane

0xc9fa,	// (0x0004944b) eswt_ctrl_wait_pane

0xca02,	// (0x00049453) eswt_shell_pane

0x2ad0,	// (0x0003f521) listscroll_eswt_app_pane

0xca22,	// (0x00049473) popup_eswt_tasktip_window_ParamLimits

0xca22,	// (0x00049473) popup_eswt_tasktip_window

0x9aee,	// (0x0004653f) bg_popup_window_pane_cp18

0xca33,	// (0x00049484) eswt_control_pane_g1_ParamLimits

0xca33,	// (0x00049484) eswt_control_pane_g1

0xca40,	// (0x00049491) eswt_control_pane_g2_ParamLimits

0xca40,	// (0x00049491) eswt_control_pane_g2

0xca4d,	// (0x0004949e) eswt_control_pane_g3_ParamLimits

0xca4d,	// (0x0004949e) eswt_control_pane_g3

0xca5a,	// (0x000494ab) eswt_control_pane_g4_ParamLimits

0xca5a,	// (0x000494ab) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0004c655) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0004c655) eswt_control_pane_g

0x7ed8,	// (0x00044929) bg_button_pane_ParamLimits

0x7ed8,	// (0x00044929) bg_button_pane

0x7c49,	// (0x0004469a) common_borders_pane_copy2_ParamLimits

0x7c49,	// (0x0004469a) common_borders_pane_copy2

0xca67,	// (0x000494b8) control_button_pane_g1_ParamLimits

0xca67,	// (0x000494b8) control_button_pane_g1

0xca73,	// (0x000494c4) control_button_pane_g2_ParamLimits

0xca73,	// (0x000494c4) control_button_pane_g2

0xca7f,	// (0x000494d0) control_button_pane_g3_ParamLimits

0xca7f,	// (0x000494d0) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0004c65e) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0004c65e) control_button_pane_g

0xca93,	// (0x000494e4) control_button_pane_t1

0xcaa1,	// (0x000494f2) control_button_pane_t2

0x0001,

0xfc14,	// (0x0004c665) control_button_pane_t

0x99fc,	// (0x0004644d) bg_button_pane_g1

0x9a04,	// (0x00046455) bg_button_pane_g2

0x9a0c,	// (0x0004645d) bg_button_pane_g3

0x9a14,	// (0x00046465) bg_button_pane_g4

0x9a1c,	// (0x0004646d) bg_button_pane_g5

0x9a24,	// (0x00046475) bg_button_pane_g6

0x9a2c,	// (0x0004647d) bg_button_pane_g7

0x9a34,	// (0x00046485) bg_button_pane_g8

0x9a3c,	// (0x0004648d) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0004c2cd) bg_button_pane_g

0xc067,	// (0x00048ab8) common_borders_pane_ParamLimits

0xc067,	// (0x00048ab8) common_borders_pane

0xca33,	// (0x00049484) eswt_control_pane_g1_copy1_ParamLimits

0xca33,	// (0x00049484) eswt_control_pane_g1_copy1

0xca40,	// (0x00049491) eswt_control_pane_g2_copy1_ParamLimits

0xca40,	// (0x00049491) eswt_control_pane_g2_copy1

0xca4d,	// (0x0004949e) eswt_control_pane_g3_copy1_ParamLimits

0xca4d,	// (0x0004949e) eswt_control_pane_g3_copy1

0xca5a,	// (0x000494ab) eswt_control_pane_g4_copy1_ParamLimits

0xca5a,	// (0x000494ab) eswt_control_pane_g4_copy1

0xc0a2,	// (0x00048af3) bg_eswt_ctrl_canvas_pane_g1

0xc067,	// (0x00048ab8) common_borders_pane_cp2_ParamLimits

0xc067,	// (0x00048ab8) common_borders_pane_cp2

0xc067,	// (0x00048ab8) common_borders_pane_cp3_ParamLimits

0xc067,	// (0x00048ab8) common_borders_pane_cp3

0xcaaf,	// (0x00049500) separator_horizontal_pane

0xcab7,	// (0x00049508) separator_vertical_pane

0xca33,	// (0x00049484) eswt_control_pane_g1_copy2_ParamLimits

0xca33,	// (0x00049484) eswt_control_pane_g1_copy2

0xca40,	// (0x00049491) eswt_control_pane_g2_copy2_ParamLimits

0xca40,	// (0x00049491) eswt_control_pane_g2_copy2

0xca4d,	// (0x0004949e) eswt_control_pane_g3_copy2_ParamLimits

0xca4d,	// (0x0004949e) eswt_control_pane_g3_copy2

0xca5a,	// (0x000494ab) eswt_control_pane_g4_copy2_ParamLimits

0xca5a,	// (0x000494ab) eswt_control_pane_g4_copy2

0x2ad0,	// (0x0003f521) common_borders_pane_cp4

0xcac0,	// (0x00049511) separator_horizontal_pane_g1

0xcac9,	// (0x0004951a) separator_horizontal_pane_g2

0xcad2,	// (0x00049523) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0004c66a) separator_horizontal_pane_g

0xca33,	// (0x00049484) eswt_control_pane_g1_copy3_ParamLimits

0xca33,	// (0x00049484) eswt_control_pane_g1_copy3

0xca40,	// (0x00049491) eswt_control_pane_g2_copy3_ParamLimits

0xca40,	// (0x00049491) eswt_control_pane_g2_copy3

0xca4d,	// (0x0004949e) eswt_control_pane_g3_copy3_ParamLimits

0xca4d,	// (0x0004949e) eswt_control_pane_g3_copy3

0xca5a,	// (0x000494ab) eswt_control_pane_g4_copy3_ParamLimits

0xca5a,	// (0x000494ab) eswt_control_pane_g4_copy3

0x2ad0,	// (0x0003f521) common_borders_pane_cp5

0xcadb,	// (0x0004952c) separator_vertical_pane_g1

0xcae4,	// (0x00049535) separator_vertical_pane_g2

0xcaed,	// (0x0004953e) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0004c671) separator_vertical_pane_g

0xca33,	// (0x00049484) eswt_control_pane_g1_copy4_ParamLimits

0xca33,	// (0x00049484) eswt_control_pane_g1_copy4

0xca40,	// (0x00049491) eswt_control_pane_g2_copy4_ParamLimits

0xca40,	// (0x00049491) eswt_control_pane_g2_copy4

0xca4d,	// (0x0004949e) eswt_control_pane_g3_copy4_ParamLimits

0xca4d,	// (0x0004949e) eswt_control_pane_g3_copy4

0xca5a,	// (0x000494ab) eswt_control_pane_g4_copy4_ParamLimits

0xca5a,	// (0x000494ab) eswt_control_pane_g4_copy4

0xcaf6,	// (0x00049547) eswt_ctrl_combo_button_pane

0xcafe,	// (0x0004954f) eswt_ctrl_input_pane

0xcb06,	// (0x00049557) popup_choice_list_window_cp70

0xcb0e,	// (0x0004955f) eswt_ctrl_input_pane_t1

0x2ad0,	// (0x0003f521) input_focus_pane_cp70

0xc067,	// (0x00048ab8) bg_button_pane_cp70_ParamLimits

0xc067,	// (0x00048ab8) bg_button_pane_cp70

0xcb1c,	// (0x0004956d) eswt_ctrl_combo_button_pane_g1

0xcb24,	// (0x00049575) wait_bar_pane_cp70

0x9aee,	// (0x0004653f) bg_popup_window_pane_cp70_ParamLimits

0x9aee,	// (0x0004653f) bg_popup_window_pane_cp70

0xcb2c,	// (0x0004957d) popup_eswt_tasktip_window_t1

0xcb42,	// (0x00049593) wait_bar_pane_cp71_ParamLimits

0xcb42,	// (0x00049593) wait_bar_pane_cp71

0xcb4e,	// (0x0004959f) grid_eswt_app_pane

0x8385,	// (0x00044dd6) scroll_pane_cp70

0xcb57,	// (0x000495a8) cell_eswt_app_pane_ParamLimits

0xcb57,	// (0x000495a8) cell_eswt_app_pane

0xcb89,	// (0x000495da) cell_eswt_app_pane_g1_ParamLimits

0xcb89,	// (0x000495da) cell_eswt_app_pane_g1

0xcbb8,	// (0x00049609) cell_eswt_app_pane_g2_ParamLimits

0xcbb8,	// (0x00049609) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0004c678) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0004c678) cell_eswt_app_pane_g

0xcbe1,	// (0x00049632) cell_eswt_app_pane_t1_ParamLimits

0xcbe1,	// (0x00049632) cell_eswt_app_pane_t1

0xcc13,	// (0x00049664) grid_highlight_pane_cp70_ParamLimits

0xcc13,	// (0x00049664) grid_highlight_pane_cp70

0xaf7f,	// (0x000479d0) set_content_pane_g1

0x8de6,	// (0x00045837) status_small_volume_pane

0x6c40,	// (0x00043691) status_small_volume_pane_g1

0x6c48,	// (0x00043699) volume_small2_pane

0x6c51,	// (0x000436a2) volume_small2_pane_g1

0x6c5a,	// (0x000436ab) volume_small2_pane_g2

0x6c63,	// (0x000436b4) volume_small2_pane_g3

0x6c6c,	// (0x000436bd) volume_small2_pane_g4

0x6c75,	// (0x000436c6) volume_small2_pane_g5

0x6c7e,	// (0x000436cf) volume_small2_pane_g6

0x6c87,	// (0x000436d8) volume_small2_pane_g7

0x6c90,	// (0x000436e1) volume_small2_pane_g8

0x6c99,	// (0x000436ea) volume_small2_pane_g9

0x6ca2,	// (0x000436f3) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0004c67d) volume_small2_pane_g

0xc480,	// (0x00048ed1) fep_vkb_top_text_pane_g1_ParamLimits

0xc49b,	// (0x00048eec) fep_vkb_top_text_pane_t1_ParamLimits

0xc763,	// (0x000491b4) popup_preview_fixed_window_g3_ParamLimits

0xc763,	// (0x000491b4) popup_preview_fixed_window_g3

0x940b,	// (0x00045e5c) popup_toolbar_trans_pane

0xae24,	// (0x00047875) aid_height_set_list_ParamLimits

0xae35,	// (0x00047886) aid_size_parent_ParamLimits

0x8eb4,	// (0x00045905) list_highlight_pane_cp2_ParamLimits

0xaf7f,	// (0x000479d0) set_content_pane_g1_ParamLimits

0xb088,	// (0x00047ad9) list_single_image_pane_ParamLimits

0xb088,	// (0x00047ad9) list_single_image_pane

0xcc1f,	// (0x00049670) aid_size_cell_image_ParamLimits

0xcc1f,	// (0x00049670) aid_size_cell_image

0xcc2c,	// (0x0004967d) grid_single_image_pane_ParamLimits

0xcc2c,	// (0x0004967d) grid_single_image_pane

0x7ef2,	// (0x00044943) list_single_image_pane_g1_ParamLimits

0x7ef2,	// (0x00044943) list_single_image_pane_g1

0x7efe,	// (0x0004494f) list_single_image_pane_g2_ParamLimits

0x7efe,	// (0x0004494f) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0004c692) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0004c692) list_single_image_pane_g

0xcc3a,	// (0x0004968b) list_single_image_pane_t1_ParamLimits

0xcc3a,	// (0x0004968b) list_single_image_pane_t1

0xcc50,	// (0x000496a1) cell_image_list_pane_ParamLimits

0xcc50,	// (0x000496a1) cell_image_list_pane

0xcc66,	// (0x000496b7) cell_image_list_pane_g1

0xcc6f,	// (0x000496c0) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0004c697) cell_image_list_pane_g

0xcc78,	// (0x000496c9) aid_size_cell_tb_trans_pane

0x7ed8,	// (0x00044929) bg_tb_trans_pane

0xcc8a,	// (0x000496db) grid_tb_trans_pane

0x99fc,	// (0x0004644d) bg_tb_trans_pane_g1

0x9a04,	// (0x00046455) bg_tb_trans_pane_g2

0x9a0c,	// (0x0004645d) bg_tb_trans_pane_g3

0x9a14,	// (0x00046465) bg_tb_trans_pane_g4

0x9a1c,	// (0x0004646d) bg_tb_trans_pane_g5

0x9a34,	// (0x00046485) bg_tb_trans_pane_g6

0x9a3c,	// (0x0004648d) bg_tb_trans_pane_g7

0x9a24,	// (0x00046475) bg_tb_trans_pane_g8

0x9a2c,	// (0x0004647d) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0004c69c) bg_tb_trans_pane_g

0xcc9e,	// (0x000496ef) cell_toolbar_trans_pane_ParamLimits

0xcc9e,	// (0x000496ef) cell_toolbar_trans_pane

0xc0a2,	// (0x00048af3) cell_toolbar_trans_pane_g1

0xbcc3,	// (0x00048714) list_form2_midp_pane_t1

0xbcd1,	// (0x00048722) list_form2_midp_pane_t2

0x0001,

0xfaf4,	// (0x0004c545) list_form2_midp_pane_t

0xbcdf,	// (0x00048730) scroll_pane_cp51_ParamLimits

0xbea6,	// (0x000488f7) form2_midp_wait_pane_g1

0xbeaf,	// (0x00048900) form2_midp_wait_pane_g2

0xbeb8,	// (0x00048909) form2_midp_wait_pane_g3

0x0002,

0xfb09,	// (0x0004c55a) form2_midp_wait_pane_g

0x7651,	// (0x000440a2) list_highlight_pane_cp21_ParamLimits

0xbefc,	// (0x0004894d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf0b,	// (0x0004895c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb041,	// (0x00047a92) list_single_2graphic_im_pane_ParamLimits

0xb041,	// (0x00047a92) list_single_2graphic_im_pane

0xccc4,	// (0x00049715) list_single_2graphic_im_pane_g1_ParamLimits

0xccc4,	// (0x00049715) list_single_2graphic_im_pane_g1

0xccd5,	// (0x00049726) list_single_2graphic_im_pane_g2_ParamLimits

0xccd5,	// (0x00049726) list_single_2graphic_im_pane_g2

0xcce1,	// (0x00049732) list_single_2graphic_im_pane_g3_ParamLimits

0xcce1,	// (0x00049732) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0004c6af) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0004c6af) list_single_2graphic_im_pane_g

0xcd01,	// (0x00049752) list_single_2graphic_im_pane_t1_ParamLimits

0xcd01,	// (0x00049752) list_single_2graphic_im_pane_t1

0xc76f,	// (0x000491c0) list_single_graphic_2heading_pane_fp_ParamLimits

0xc76f,	// (0x000491c0) list_single_graphic_2heading_pane_fp

0x5605,	// (0x00042056) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5605,	// (0x00042056) list_single_graphic_2heading_pane_fp_g1

0xc788,	// (0x000491d9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc788,	// (0x000491d9) list_single_graphic_2heading_pane_fp_g2

0x5d61,	// (0x000427b2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5d61,	// (0x000427b2) list_single_graphic_2heading_pane_fp_g3

0x6b03,	// (0x00043554) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6b03,	// (0x00043554) list_single_graphic_2heading_pane_fp_g4

0xc794,	// (0x000491e5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc794,	// (0x000491e5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0004c5dd) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0004c5dd) list_single_graphic_2heading_pane_fp_g

0x574e,	// (0x0004219f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x574e,	// (0x0004219f) list_single_graphic_2heading_pane_fp_t1

0x563d,	// (0x0004208e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x563d,	// (0x0004208e) list_single_graphic_2heading_pane_fp_t2

0x5764,	// (0x000421b5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5764,	// (0x000421b5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0004c6b8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0004c6b8) list_single_graphic_2heading_pane_fp_t

0xc142,	// (0x00048b93) fep_hwr_write_pane_g5_ParamLimits

0xc142,	// (0x00048b93) fep_hwr_write_pane_g5

0xc14e,	// (0x00048b9f) fep_hwr_write_pane_g6_ParamLimits

0xc14e,	// (0x00048b9f) fep_hwr_write_pane_g6

0xca02,	// (0x00049453) eswt_shell_pane_ParamLimits

0x9aee,	// (0x0004653f) bg_popup_window_pane_cp18_ParamLimits

0xad7b,	// (0x000477cc) heading_pane_cp70

0xcb2c,	// (0x0004957d) popup_eswt_tasktip_window_t1_ParamLimits

0x954a,	// (0x00045f9b) aid_touch_tab_arrow_left

0x9559,	// (0x00045faa) aid_touch_tab_arrow_right

0x7599,	// (0x00043fea) title_pane_g3_ParamLimits

0x7599,	// (0x00043fea) title_pane_g3

0x7e97,	// (0x000448e8) set_value_pane_g1

0x940b,	// (0x00045e5c) popup_toolbar_trans_pane_ParamLimits

0xcc78,	// (0x000496c9) aid_size_cell_tb_trans_pane_ParamLimits

0x7ed8,	// (0x00044929) bg_tb_trans_pane_ParamLimits

0xcc8a,	// (0x000496db) grid_tb_trans_pane_ParamLimits

0x78db,	// (0x0004432c) cont_note_pane_ParamLimits

0x78db,	// (0x0004432c) cont_note_pane

0x7c49,	// (0x0004469a) cont_snote2_single_text_pane_ParamLimits

0x7c49,	// (0x0004469a) cont_snote2_single_text_pane

0x7c49,	// (0x0004469a) cont_snote2_single_graphic_pane_ParamLimits

0x7c49,	// (0x0004469a) cont_snote2_single_graphic_pane

0xa0a2,	// (0x00046af3) cont_note_wait_pane_ParamLimits

0xa0a2,	// (0x00046af3) cont_note_wait_pane

0xa0a2,	// (0x00046af3) cont_note_image_pane_ParamLimits

0xa0a2,	// (0x00046af3) cont_note_image_pane

0xcd32,	// (0x00049783) popup_note2_window_g1_ParamLimits

0xcd32,	// (0x00049783) popup_note2_window_g1

0xcd63,	// (0x000497b4) popup_note2_window_t1_ParamLimits

0xcd63,	// (0x000497b4) popup_note2_window_t1

0xcda8,	// (0x000497f9) popup_note2_window_t2_ParamLimits

0xcda8,	// (0x000497f9) popup_note2_window_t2

0xcded,	// (0x0004983e) popup_note2_window_t3_ParamLimits

0xcded,	// (0x0004983e) popup_note2_window_t3

0xce32,	// (0x00049883) popup_note2_window_t4_ParamLimits

0xce32,	// (0x00049883) popup_note2_window_t4

0x795f,	// (0x000443b0) popup_note2_window_t5_ParamLimits

0x795f,	// (0x000443b0) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0004c6c4) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0004c6c4) popup_note2_window_t

0xce61,	// (0x000498b2) popup_note2_image_window_g1_ParamLimits

0xce61,	// (0x000498b2) popup_note2_image_window_g1

0xce6d,	// (0x000498be) popup_note2_image_window_g2_ParamLimits

0xce6d,	// (0x000498be) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0004c6cf) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0004c6cf) popup_note2_image_window_g

0xce7f,	// (0x000498d0) popup_note2_image_window_t1_ParamLimits

0xce7f,	// (0x000498d0) popup_note2_image_window_t1

0xce97,	// (0x000498e8) popup_note2_image_window_t2_ParamLimits

0xce97,	// (0x000498e8) popup_note2_image_window_t2

0xceaf,	// (0x00049900) popup_note2_image_window_t3_ParamLimits

0xceaf,	// (0x00049900) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0004c6d4) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0004c6d4) popup_note2_image_window_t

0xa0b0,	// (0x00046b01) popup_note2_wait_window_g1_ParamLimits

0xa0b0,	// (0x00046b01) popup_note2_wait_window_g1

0xcecb,	// (0x0004991c) popup_note2_wait_window_g2_ParamLimits

0xcecb,	// (0x0004991c) popup_note2_wait_window_g2

0xa0c8,	// (0x00046b19) popup_note2_wait_window_g3_ParamLimits

0xa0c8,	// (0x00046b19) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x0004c6db) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x0004c6db) popup_note2_wait_window_g

0xced7,	// (0x00049928) popup_note2_wait_window_t1_ParamLimits

0xced7,	// (0x00049928) popup_note2_wait_window_t1

0xcef5,	// (0x00049946) popup_note2_wait_window_t2_ParamLimits

0xcef5,	// (0x00049946) popup_note2_wait_window_t2

0xcf13,	// (0x00049964) popup_note2_wait_window_t3_ParamLimits

0xcf13,	// (0x00049964) popup_note2_wait_window_t3

0xcf25,	// (0x00049976) popup_note2_wait_window_t4_ParamLimits

0xcf25,	// (0x00049976) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0004c6e2) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0004c6e2) popup_note2_wait_window_t

0xcf37,	// (0x00049988) wait_bar2_pane_ParamLimits

0xcf37,	// (0x00049988) wait_bar2_pane

0xcf4f,	// (0x000499a0) popup_snote2_single_text_window_g1_ParamLimits

0xcf4f,	// (0x000499a0) popup_snote2_single_text_window_g1

0xcf77,	// (0x000499c8) popup_snote2_single_text_window_t1_ParamLimits

0xcf77,	// (0x000499c8) popup_snote2_single_text_window_t1

0xcfc3,	// (0x00049a14) popup_snote2_single_text_window_t2_ParamLimits

0xcfc3,	// (0x00049a14) popup_snote2_single_text_window_t2

0xd00f,	// (0x00049a60) popup_snote2_single_text_window_t3_ParamLimits

0xd00f,	// (0x00049a60) popup_snote2_single_text_window_t3

0xd050,	// (0x00049aa1) popup_snote2_single_text_window_t4_ParamLimits

0xd050,	// (0x00049aa1) popup_snote2_single_text_window_t4

0xd086,	// (0x00049ad7) popup_snote2_single_text_window_t5_ParamLimits

0xd086,	// (0x00049ad7) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0004c6eb) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0004c6eb) popup_snote2_single_text_window_t

0xd0b1,	// (0x00049b02) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0b1,	// (0x00049b02) popup_snote2_single_graphic_window_g1

0xd0d9,	// (0x00049b2a) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0d9,	// (0x00049b2a) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0004c6f6) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0004c6f6) popup_snote2_single_graphic_window_g

0xd101,	// (0x00049b52) popup_snote2_single_graphic_window_t1_ParamLimits

0xd101,	// (0x00049b52) popup_snote2_single_graphic_window_t1

0xd14d,	// (0x00049b9e) popup_snote2_single_graphic_window_t2_ParamLimits

0xd14d,	// (0x00049b9e) popup_snote2_single_graphic_window_t2

0xd00f,	// (0x00049a60) popup_snote2_single_graphic_window_t3_ParamLimits

0xd00f,	// (0x00049a60) popup_snote2_single_graphic_window_t3

0xd050,	// (0x00049aa1) popup_snote2_single_graphic_window_t4_ParamLimits

0xd050,	// (0x00049aa1) popup_snote2_single_graphic_window_t4

0xd086,	// (0x00049ad7) popup_snote2_single_graphic_window_t5_ParamLimits

0xd086,	// (0x00049ad7) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0004c6fb) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0004c6fb) popup_snote2_single_graphic_window_t

0xbb89,	// (0x000485da) clock_nsta_pane_cp2_t1

0xbb89,	// (0x000485da) clock_nsta_pane_cp2_t2

0x0001,

0xfaca,	// (0x0004c51b) clock_nsta_pane_cp2_t

0x50ad,	// (0x00041afe) form_field_data_wide_pane_g1_ParamLimits

0x7ef2,	// (0x00044943) form_field_data_wide_pane_g2_ParamLimits

0x7ef2,	// (0x00044943) form_field_data_wide_pane_g2

0x7efe,	// (0x0004494f) form_field_data_wide_pane_g3_ParamLimits

0x7efe,	// (0x0004494f) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x0004c0ed) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x0004c0ed) form_field_data_wide_pane_g

0xba64,	// (0x000484b5) grid_touch_3_pane_ParamLimits

0xba64,	// (0x000484b5) grid_touch_3_pane

0xd199,	// (0x00049bea) cell_touch_3_pane_ParamLimits

0xd199,	// (0x00049bea) cell_touch_3_pane

0xc0a2,	// (0x00048af3) cell_touch_3_pane_g1

0xc0a2,	// (0x00048af3) cell_touch_3_pane_g2

0x0001,

0xfb4f,	// (0x0004c5a0) cell_touch_3_pane_g

0x7991,	// (0x000443e2) cont_query_data_pane

0x7999,	// (0x000443ea) cont_query_data_pane_cp1

0xd1cc,	// (0x00049c1d) button_value_adjust_pane_cp7

0xd1d4,	// (0x00049c25) query_popup_pane_cp3

0x8612,	// (0x00045063) bg_popup_sub_pane_cp22_ParamLimits

0x5fdb,	// (0x00042a2c) navi_navi_volume_pane_cp2

0x5ff6,	// (0x00042a47) popup_side_volume_key_window_g2

0x6005,	// (0x00042a56) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0004c17f) popup_side_volume_key_window_g

0x6022,	// (0x00042a73) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0004c186) popup_side_volume_key_window_t

0x88cd,	// (0x0004531e) popup_side_volume_key_window_ParamLimits

0x4ca0,	// (0x000416f1) list_double_graphic_pane_g4_ParamLimits

0x4ca0,	// (0x000416f1) list_double_graphic_pane_g4

0xb070,	// (0x00047ac1) list_single_2heading_msg_pane_ParamLimits

0xb070,	// (0x00047ac1) list_single_2heading_msg_pane

0x6cab,	// (0x000436fc) list_single_2heading_msg_pane_g1_ParamLimits

0x6cab,	// (0x000436fc) list_single_2heading_msg_pane_g1

0x94e7,	// (0x00045f38) list_single_2heading_msg_pane_g2_ParamLimits

0x94e7,	// (0x00045f38) list_single_2heading_msg_pane_g2

0x6cb7,	// (0x00043708) list_single_2heading_msg_pane_g3_ParamLimits

0x6cb7,	// (0x00043708) list_single_2heading_msg_pane_g3

0x6cc3,	// (0x00043714) list_single_2heading_msg_pane_g4_ParamLimits

0x6cc3,	// (0x00043714) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0004c706) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0004c706) list_single_2heading_msg_pane_g

0x5784,	// (0x000421d5) list_single_2heading_msg_pane_t1_ParamLimits

0x5784,	// (0x000421d5) list_single_2heading_msg_pane_t1

0x57ac,	// (0x000421fd) list_single_2heading_msg_pane_t2_ParamLimits

0x57ac,	// (0x000421fd) list_single_2heading_msg_pane_t2

0x57db,	// (0x0004222c) list_single_2heading_msg_pane_t3_ParamLimits

0x57db,	// (0x0004222c) list_single_2heading_msg_pane_t3

0x5814,	// (0x00042265) list_single_2heading_msg_pane_t4_ParamLimits

0x5814,	// (0x00042265) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0004c70f) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0004c70f) list_single_2heading_msg_pane_t

0x75a5,	// (0x00043ff6) title_pane_g4_ParamLimits

0x75a5,	// (0x00043ff6) title_pane_g4

0x5de7,	// (0x00042838) title_pane_stacon_g3_ParamLimits

0x5de7,	// (0x00042838) title_pane_stacon_g3

0xccf5,	// (0x00049746) list_single_2graphic_im_pane_g4_ParamLimits

0xccf5,	// (0x00049746) list_single_2graphic_im_pane_g4

0xab18,	// (0x00047569) popup_side_volume_key_window_cp

0xb38e,	// (0x00047ddf) main_idle_act2_pane_t1

0x63da,	// (0x00042e2b) toolbar_button_pane_g10

0x7e41,	// (0x00044892) popup_toolbar_window_cp1

0xbb7a,	// (0x000485cb) clock_nsta_pane_cp_t1

0xbb7a,	// (0x000485cb) clock_nsta_pane_cp_t2

0x0001,

0xfac5,	// (0x0004c516) clock_nsta_pane_cp_t

0x5fdb,	// (0x00042a2c) navi_navi_volume_pane_cp2_ParamLimits

0x5fea,	// (0x00042a3b) popup_side_volume_key_window_g1_ParamLimits

0x5ff6,	// (0x00042a47) popup_side_volume_key_window_g2_ParamLimits

0x6005,	// (0x00042a56) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0004c17f) popup_side_volume_key_window_g_ParamLimits

0x689d,	// (0x000432ee) fep_hwr_aid_pane

0x2aa0,	// (0x0003f4f1) bg_fep_hwr_top_pane_g4_ParamLimits

0xc112,	// (0x00048b63) fep_hwr_top_pane_g1_ParamLimits

0xc124,	// (0x00048b75) fep_hwr_top_pane_g2_ParamLimits

0x6958,	// (0x000433a9) fep_hwr_top_pane_g3_ParamLimits

0xfb1a,	// (0x0004c56b) fep_hwr_top_pane_g_ParamLimits

0x696d,	// (0x000433be) fep_hwr_top_text_pane_ParamLimits

0xa8cd,	// (0x0004731e) aid_touch_tab_arrow_arrow_2

0xa8d6,	// (0x00047327) aid_touch_tab_arrow_left_2

0x68b1,	// (0x00043302) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x68e8,	// (0x00043339) fep_hwr_prediction_pane

0xc27a,	// (0x00048ccb) fep_vkb_prediction_pane

0xc380,	// (0x00048dd1) fep_vkb_side_pane_g3_ParamLimits

0xc380,	// (0x00048dd1) fep_vkb_side_pane_g3

0xc32c,	// (0x00048d7d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc7e8,	// (0x00049239) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc7f5,	// (0x00049246) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc4,	// (0x0004c615) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd1fb,	// (0x00049c4c) fep_hwr_prediction_pane_g1

0x6cdb,	// (0x0004372c) fep_hwr_prediction_pane_g2

0x6ce3,	// (0x00043734) fep_hwr_prediction_pane_g3

0x6ceb,	// (0x0004373c) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0004c718) fep_hwr_prediction_pane_g

0xd1fb,	// (0x00049c4c) fep_vkb_prediction_pane_g1

0xd205,	// (0x00049c56) fep_vkb_prediction_pane_g2

0xd20d,	// (0x00049c5e) fep_vkb_prediction_pane_g3

0xd215,	// (0x00049c66) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0004c721) fep_vkb_prediction_pane_g

0xb4f3,	// (0x00047f44) slider_set_pane_g3

0xb507,	// (0x00047f58) slider_set_pane_g4

0xb51f,	// (0x00047f70) slider_set_pane_g5

0xb4f3,	// (0x00047f44) slider_set_pane_g6

0x66cf,	// (0x00043120) slider_set_pane_g7

0xafc6,	// (0x00047a17) slider_form_pane_g3

0xafcf,	// (0x00047a20) slider_form_pane_g4

0xafd7,	// (0x00047a28) slider_form_pane_g5

0xafc6,	// (0x00047a17) slider_form_pane_g6

0xafdf,	// (0x00047a30) slider_form_pane_g7

0xb69e,	// (0x000480ef) slider_set_pane_vc_g3

0xb6a7,	// (0x000480f8) slider_set_pane_vc_g4

0xb6b0,	// (0x00048101) slider_set_pane_vc_g5

0xb69e,	// (0x000480ef) slider_set_pane_vc_g6

0xb6b9,	// (0x0004810a) slider_set_pane_vc_g7

0xb69e,	// (0x000480ef) slider_form_pane_vc_g1

0xb6a7,	// (0x000480f8) slider_form_pane_vc_g2

0xb6b0,	// (0x00048101) slider_form_pane_vc_g3

0xb69e,	// (0x000480ef) slider_form_pane_vc_g4

0xb86e,	// (0x000482bf) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x0004c4ef) slider_form_pane_vc_g

0x2ad0,	// (0x0003f521) main_idle_act3_pane

0xd21d,	// (0x00049c6e) ai3_links_pane

0xd226,	// (0x00049c77) popup_ai3_data_window_ParamLimits

0xd226,	// (0x00049c77) popup_ai3_data_window

0x2ad0,	// (0x0003f521) grid_ai3_links_pane

0xd244,	// (0x00049c95) cell_ai3_links_pane_ParamLimits

0xd244,	// (0x00049c95) cell_ai3_links_pane

0xd25e,	// (0x00049caf) bg_popup_sub_pane_cp11

0xd26b,	// (0x00049cbc) cell_ai3_links_pane_g1

0x2ad0,	// (0x0003f521) bg_popup_sub_pane_cp12

0xd290,	// (0x00049ce1) heading_ai3_data_pane

0xd298,	// (0x00049ce9) list_ai3_gene_pane

0xd2a4,	// (0x00049cf5) popup_ai3_data_window_g1

0xd2ac,	// (0x00049cfd) heading_ai3_data_pane_g1

0xd2b4,	// (0x00049d05) heading_ai3_data_pane_t1

0xd2c2,	// (0x00049d13) list_double_ai3_gene_pane_ParamLimits

0xd2c2,	// (0x00049d13) list_double_ai3_gene_pane

0xd2cf,	// (0x00049d20) list_single_ai3_gene_pane_ParamLimits

0xd2cf,	// (0x00049d20) list_single_ai3_gene_pane

0xc067,	// (0x00048ab8) list_highlight_pane_cp7_ParamLimits

0xc067,	// (0x00048ab8) list_highlight_pane_cp7

0xd2dc,	// (0x00049d2d) list_single_a13_gene_pane_t1_ParamLimits

0xd2dc,	// (0x00049d2d) list_single_a13_gene_pane_t1

0xd2f3,	// (0x00049d44) list_single_ai3_gene_pane_g1

0xd2fc,	// (0x00049d4d) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0004c72a) list_single_ai3_gene_pane_g

0xd304,	// (0x00049d55) list_double_ai3_gene_pane_g1_ParamLimits

0xd304,	// (0x00049d55) list_double_ai3_gene_pane_g1

0xd310,	// (0x00049d61) list_double_ai3_gene_pane_t1_ParamLimits

0xd310,	// (0x00049d61) list_double_ai3_gene_pane_t1

0xd32c,	// (0x00049d7d) list_double_ai3_gene_pane_t2_ParamLimits

0xd32c,	// (0x00049d7d) list_double_ai3_gene_pane_t2

0xd341,	// (0x00049d92) list_double_ai3_gene_pane_t3_ParamLimits

0xd341,	// (0x00049d92) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0004c72f) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0004c72f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x577a,	// (0x000421cb) aid_size_min_col_2

0xd1e5,	// (0x00049c36) aid_size_min_msg_ParamLimits

0xd1e5,	// (0x00049c36) aid_size_min_msg

0xc48c,	// (0x00048edd) fep_vkb_top_text_pane_g2_ParamLimits

0xc48c,	// (0x00048edd) fep_vkb_top_text_pane_g2

0x0001,

0xfb4a,	// (0x0004c59b) fep_vkb_top_text_pane_g_ParamLimits

0xfb4a,	// (0x0004c59b) fep_vkb_top_text_pane_g

0x2ad0,	// (0x0003f521) main_hc_apps_shell_pane

0xd35e,	// (0x00049daf) grid_hc_apps_pane_ParamLimits

0xd35e,	// (0x00049daf) grid_hc_apps_pane

0xd36d,	// (0x00049dbe) list_hc_apps_pane

0xd375,	// (0x00049dc6) scroll_pane_cp37_ParamLimits

0xd375,	// (0x00049dc6) scroll_pane_cp37

0xd381,	// (0x00049dd2) cell_hc_apps_pane_ParamLimits

0xd381,	// (0x00049dd2) cell_hc_apps_pane

0xd439,	// (0x00049e8a) cell_hc_apps_pane_g1_ParamLimits

0xd439,	// (0x00049e8a) cell_hc_apps_pane_g1

0xd46a,	// (0x00049ebb) cell_hc_apps_pane_g2_ParamLimits

0xd46a,	// (0x00049ebb) cell_hc_apps_pane_g2

0xd486,	// (0x00049ed7) cell_hc_apps_pane_g3_ParamLimits

0xd486,	// (0x00049ed7) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0004c736) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0004c736) cell_hc_apps_pane_g

0xd4a8,	// (0x00049ef9) cell_hc_apps_pane_t1_ParamLimits

0xd4a8,	// (0x00049ef9) cell_hc_apps_pane_t1

0x78db,	// (0x0004432c) grid_highlight_pane_cp10_ParamLimits

0x78db,	// (0x0004432c) grid_highlight_pane_cp10

0xd4e8,	// (0x00049f39) list_single_hc_apps_pane_ParamLimits

0xd4e8,	// (0x00049f39) list_single_hc_apps_pane

0xd527,	// (0x00049f78) list_single_hc_apps_pane_g1

0x6cf3,	// (0x00043744) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0004c73d) list_single_hc_apps_pane_g

0x6d0c,	// (0x0004375d) list_single_hc_apps_pane_g2_copy1

0x5839,	// (0x0004228a) list_single_hc_apps_pane_t1

0x7651,	// (0x000440a2) bg_set_opt_pane_cp_ParamLimits

0x5c68,	// (0x000426b9) setting_slider_pane_t1_ParamLimits

0x5c7e,	// (0x000426cf) setting_slider_pane_t2_ParamLimits

0x5c98,	// (0x000426e9) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0004bfcb) setting_slider_pane_t_ParamLimits

0x5cb0,	// (0x00042701) slider_set_pane_ParamLimits

0x62aa,	// (0x00042cfb) control_pane_g5_ParamLimits

0x62aa,	// (0x00042cfb) control_pane_g5

0xade7,	// (0x00047838) slider_set_pane_g1_ParamLimits

0x66c3,	// (0x00043114) slider_set_pane_g2_ParamLimits

0xb4f3,	// (0x00047f44) slider_set_pane_g3_ParamLimits

0xb507,	// (0x00047f58) slider_set_pane_g4_ParamLimits

0xb51f,	// (0x00047f70) slider_set_pane_g5_ParamLimits

0xb4f3,	// (0x00047f44) slider_set_pane_g6_ParamLimits

0x66cf,	// (0x00043120) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0004c3cb) slider_set_pane_g_ParamLimits

0x89b2,	// (0x00045403) navi_icon_text_pane_ParamLimits

0x9509,	// (0x00045f5a) aid_fill_nsta_2_ParamLimits

0x954a,	// (0x00045f9b) aid_touch_tab_arrow_left_ParamLimits

0x9559,	// (0x00045faa) aid_touch_tab_arrow_right_ParamLimits

0x95c6,	// (0x00046017) clock_nsta_pane_ParamLimits

0xa8a9,	// (0x000472fa) navi_icon_pane_g1_ParamLimits

0xa8b8,	// (0x00047309) navi_text_pane_t1_ParamLimits

0xbc97,	// (0x000486e8) navi_icon_text_pane_g1_ParamLimits

0xbca6,	// (0x000486f7) navi_icon_text_pane_t1_ParamLimits

0xd527,	// (0x00049f78) list_single_hc_apps_pane_g1_ParamLimits

0x6cf3,	// (0x00043744) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0004c73d) list_single_hc_apps_pane_g_ParamLimits

0x6d0c,	// (0x0004375d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5839,	// (0x0004228a) list_single_hc_apps_pane_t1_ParamLimits

0x5b72,	// (0x000425c3) popup_toolbar2_fixed_window_ParamLimits

0x5b72,	// (0x000425c3) popup_toolbar2_fixed_window

0x9401,	// (0x00045e52) popup_toolbar2_float_window

0x2ad0,	// (0x0003f521) bg_popup_sub_pane_cp27

0xd540,	// (0x00049f91) grid_toolbar2_float_pane

0x2ad0,	// (0x0003f521) bg_popup_sub_pane_cp26

0xd540,	// (0x00049f91) grid_toolbar2_fixed_pane

0xd548,	// (0x00049f99) cell_toolbar2_fixed_pane_ParamLimits

0xd548,	// (0x00049f99) cell_toolbar2_fixed_pane

0xd558,	// (0x00049fa9) cell_toolbar2_fixed_pane_g1

0xd561,	// (0x00049fb2) toolbar2_fixed_button_pane

0x99fc,	// (0x0004644d) toolbar2_fixed_button_pane_g1

0x9a04,	// (0x00046455) toolbar2_fixed_button_pane_g2

0x9a0c,	// (0x0004645d) toolbar2_fixed_button_pane_g3

0x9a14,	// (0x00046465) toolbar2_fixed_button_pane_g4

0x9a1c,	// (0x0004646d) toolbar2_fixed_button_pane_g5

0x9a24,	// (0x00046475) toolbar2_fixed_button_pane_g6

0x9a2c,	// (0x0004647d) toolbar2_fixed_button_pane_g7

0x9a34,	// (0x00046485) toolbar2_fixed_button_pane_g8

0x9a3c,	// (0x0004648d) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0004c2cd) toolbar2_fixed_button_pane_g

0xd569,	// (0x00049fba) cell_toolbar2_float_pane_ParamLimits

0xd569,	// (0x00049fba) cell_toolbar2_float_pane

0xd57a,	// (0x00049fcb) cell_toolbar2_float_pane_g1

0xd561,	// (0x00049fb2) toolbar2_fixed_button_pane_cp

0xc1e8,	// (0x00048c39) fep_vkb_accented_list_pane_ParamLimits

0xc1e8,	// (0x00048c39) fep_vkb_accented_list_pane

0x6acf,	// (0x00043520) bg_popup_fep_shadow_pane_g9

0x8b36,	// (0x00045587) bg_popup_fep_shadow_pane_cp3

0x8041,	// (0x00044a92) list_accented_list_pane

0xd583,	// (0x00049fd4) list_single_accented_list_pane_ParamLimits

0xd583,	// (0x00049fd4) list_single_accented_list_pane

0x8b36,	// (0x00045587) list_highlight_pane_cp10

0xd594,	// (0x00049fe5) list_single_accented_list_pane_t1

0x9347,	// (0x00045d98) popup_slider_window_ParamLimits

0x9347,	// (0x00045d98) popup_slider_window

0xd1dc,	// (0x00049c2d) aid_indentation_list_msg

0xd660,	// (0x0004a0b1) bg_popup_window_pane_cp19

0xd6ce,	// (0x0004a11f) popup_slider_window_g1

0xd6ea,	// (0x0004a13b) popup_slider_window_g2

0xd706,	// (0x0004a157) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0004c742) popup_slider_window_g

0xd762,	// (0x0004a1b3) popup_slider_window_t1

0xd7d6,	// (0x0004a227) small_volume_slider_vertical_pane

0xc0a2,	// (0x00048af3) small_volume_slider_vertical_pane_g1

0xc0a2,	// (0x00048af3) small_volume_slider_vertical_pane_g2

0xd7f2,	// (0x0004a243) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0004c754) small_volume_slider_vertical_pane_g

0x592a,	// (0x0004237b) area_side_right_pane_ParamLimits

0x592a,	// (0x0004237b) area_side_right_pane

0x6d28,	// (0x00043779) aid_size_side_button_ParamLimits

0x6d28,	// (0x00043779) aid_size_side_button

0x6d3c,	// (0x0004378d) grid_sctrl_middle_pane_ParamLimits

0x6d3c,	// (0x0004378d) grid_sctrl_middle_pane

0x6d5c,	// (0x000437ad) sctrl_sk_bottom_pane

0x6d6d,	// (0x000437be) sctrl_sk_top_pane

0x6d7f,	// (0x000437d0) aid_touch_sctrl_top

0x78db,	// (0x0004432c) bg_sctrl_sk_pane_ParamLimits

0x78db,	// (0x0004432c) bg_sctrl_sk_pane

0x6d8c,	// (0x000437dd) sctrl_sk_top_pane_g1

0x6d99,	// (0x000437ea) sctrl_sk_top_pane_t1

0x6d7f,	// (0x000437d0) aid_touch_sctrl_bottom

0x78db,	// (0x0004432c) bg_sctrl_sk_pane_cp_ParamLimits

0x78db,	// (0x0004432c) bg_sctrl_sk_pane_cp

0x6db4,	// (0x00043805) sctrl_sk_bottom_pane_g1

0x6d99,	// (0x000437ea) sctrl_sk_bottom_pane_t1

0x6dbd,	// (0x0004380e) cell_sctrl_middle_pane_ParamLimits

0x6dbd,	// (0x0004380e) cell_sctrl_middle_pane

0x6dda,	// (0x0004382b) aid_touch_sctrl_middle_ParamLimits

0x6dda,	// (0x0004382b) aid_touch_sctrl_middle

0x7ed8,	// (0x00044929) bg_sctrl_middle_pane_ParamLimits

0x7ed8,	// (0x00044929) bg_sctrl_middle_pane

0xc32c,	// (0x00048d7d) cell_sctrl_middle_pane_g1_ParamLimits

0xc32c,	// (0x00048d7d) cell_sctrl_middle_pane_g1

0x6dec,	// (0x0004383d) cell_sctrl_middle_pane_g2_ParamLimits

0x6dec,	// (0x0004383d) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0004c760) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0004c760) cell_sctrl_middle_pane_g

0x99fc,	// (0x0004644d) bg_sctrl_middle_pane_g1

0x9a04,	// (0x00046455) bg_sctrl_middle_pane_g2

0x9a0c,	// (0x0004645d) bg_sctrl_middle_pane_g3

0x9a14,	// (0x00046465) bg_sctrl_middle_pane_g4

0x9a1c,	// (0x0004646d) bg_sctrl_middle_pane_g5

0x9a24,	// (0x00046475) bg_sctrl_middle_pane_g6

0x9a2c,	// (0x0004647d) bg_sctrl_middle_pane_g7

0x9a34,	// (0x00046485) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0004c765) bg_sctrl_middle_pane_g

0x9a3c,	// (0x0004648d) bg_sctrl_middle_pane_g8_copy1

0x99fc,	// (0x0004644d) bg_sctrl_sk_pane_g1

0x9a04,	// (0x00046455) bg_sctrl_sk_pane_g2

0x9a0c,	// (0x0004645d) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0004c2cd) bg_sctrl_sk_pane_g

0x7e07,	// (0x00044858) aid_size_touch_scroll_bar

0x9a14,	// (0x00046465) bg_sctrl_sk_pane_g4

0x9a1c,	// (0x0004646d) bg_sctrl_sk_pane_g5

0x9a24,	// (0x00046475) bg_sctrl_sk_pane_g6

0x9a2c,	// (0x0004647d) bg_sctrl_sk_pane_g7

0x9a34,	// (0x00046485) bg_sctrl_sk_pane_g8

0x9a3c,	// (0x0004648d) bg_sctrl_sk_pane_g9

0x8f5e,	// (0x000459af) popup_fep_china_hwr2_fs_candidate_window

0x8f68,	// (0x000459b9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8f68,	// (0x000459b9) popup_fep_china_hwr2_fs_control_window

0xc32c,	// (0x00048d7d) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0004c75b) sctrl_sk_top_pane_g

0xd7fb,	// (0x0004a24c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7fb,	// (0x0004a24c) aid_fep_china_hwr2_fs_cell

0xd80e,	// (0x0004a25f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd80e,	// (0x0004a25f) bg_popup_fep_shadow_pane_cp4

0xd827,	// (0x0004a278) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd827,	// (0x0004a278) bg_popup_fep_shadow_pane_cp5

0xd839,	// (0x0004a28a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd839,	// (0x0004a28a) popup_fep_china_hwr2_fs_control_bar_grid

0xd849,	// (0x0004a29a) popup_fep_china_hwr2_fs_control_funtion_grid

0xd851,	// (0x0004a2a2) aid_fep_china_hwr2_fs_candi_cell

0x2ad0,	// (0x0003f521) bg_popup_fep_shadow_pane_cp6

0xd85b,	// (0x0004a2ac) popup_fep_china_hwr2_fs_candidate_grid

0xd865,	// (0x0004a2b6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd865,	// (0x0004a2b6) cell_fep_china_hwr2_fs_funtion_grid

0xc0a2,	// (0x00048af3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd87d,	// (0x0004a2ce) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd87d,	// (0x0004a2ce) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd88b,	// (0x0004a2dc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd88b,	// (0x0004a2dc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0004c776) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0004c776) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8a1,	// (0x0004a2f2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8a1,	// (0x0004a2f2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8b6,	// (0x0004a307) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8b6,	// (0x0004a307) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0004c77b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0004c77b) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8d2,	// (0x0004a323) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8da,	// (0x0004a32b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8e2,	// (0x0004a333) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0004c780) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8ea,	// (0x0004a33b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8ea,	// (0x0004a33b) cell_fep_china_hwr2_fs_candidate_grid

0xd909,	// (0x0004a35a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd911,	// (0x0004a362) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc0a2,	// (0x00048af3) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc0a2,	// (0x00048af3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4f,	// (0x0004c5a0) cell_fep_china_hwr2_fs_candidate_grid_g

0xd919,	// (0x0004a36a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95d9,	// (0x0004602a) clock_nsta_pane_cp_24_ParamLimits

0x95d9,	// (0x0004602a) clock_nsta_pane_cp_24

0x9659,	// (0x000460aa) indicator_nsta_pane_cp_24_ParamLimits

0x9659,	// (0x000460aa) indicator_nsta_pane_cp_24

0xa725,	// (0x00047176) heading_pane_g1

0x0001,

0xf8e1,	// (0x0004c332) heading_pane_g

0xb1d5,	// (0x00047c26) grid_sct_catagory_button_pane

0xb207,	// (0x00047c58) scroll_pane_cp5_ParamLimits

0xbceb,	// (0x0004873c) button_value_adjust_pane_cp5_ParamLimits

0xbceb,	// (0x0004873c) button_value_adjust_pane_cp5

0xbdd0,	// (0x00048821) form2_midp_time_pane_ParamLimits

0xd927,	// (0x0004a378) cell_sct_catagory_button_pane_ParamLimits

0xd927,	// (0x0004a378) cell_sct_catagory_button_pane

0xc067,	// (0x00048ab8) bg_button_pane_cp01_ParamLimits

0xc067,	// (0x00048ab8) bg_button_pane_cp01

0xc0a2,	// (0x00048af3) cell_sct_catagory_button_pane_g1

0x9388,	// (0x00045dd9) popup_tb_extension_window

0xd939,	// (0x0004a38a) aid_size_cell_ext_ParamLimits

0xd939,	// (0x0004a38a) aid_size_cell_ext

0x78db,	// (0x0004432c) bg_tb_trans_pane_cp1_ParamLimits

0x78db,	// (0x0004432c) bg_tb_trans_pane_cp1

0xd959,	// (0x0004a3aa) grid_tb_ext_pane_ParamLimits

0xd959,	// (0x0004a3aa) grid_tb_ext_pane

0xd989,	// (0x0004a3da) cell_tb_ext_pane_ParamLimits

0xd989,	// (0x0004a3da) cell_tb_ext_pane

0xd9a0,	// (0x0004a3f1) cell_tb_ext_pane_g1_ParamLimits

0xd9a0,	// (0x0004a3f1) cell_tb_ext_pane_g1

0xd9bd,	// (0x0004a40e) cell_tb_ext_pane_t1

0x78db,	// (0x0004432c) list_highlight_pane_cp11_ParamLimits

0x78db,	// (0x0004432c) list_highlight_pane_cp11

0x5b91,	// (0x000425e2) popup_uni_indicator_window_ParamLimits

0x5b91,	// (0x000425e2) popup_uni_indicator_window

0x7ed8,	// (0x00044929) bg_popup_sub_pane_cp14

0xd9d8,	// (0x0004a429) list_uniindi_pane

0xd9e4,	// (0x0004a435) uniindi_top_pane

0x78db,	// (0x0004432c) bg_uniindi_top_pane

0xda05,	// (0x0004a456) uniindi_top_pane_g1

0xda1b,	// (0x0004a46c) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0004c787) uniindi_top_pane_g

0xda45,	// (0x0004a496) uniindi_top_pane_t1

0xda71,	// (0x0004a4c2) list_single_uniindi_pane_ParamLimits

0xda71,	// (0x0004a4c2) list_single_uniindi_pane

0xc0a2,	// (0x00048af3) bg_uniindi_top_pane_g1

0xda83,	// (0x0004a4d4) list_single_uniindi_pane_g1

0xda96,	// (0x0004a4e7) list_single_uniindi_pane_t1

0x2ad0,	// (0x0003f521) control_bg_pane

0xdabb,	// (0x0004a50c) bg_sctrl_sk_pane_cp1

0xdac4,	// (0x0004a515) bg_sctrl_sk_pane_cp2

0xdacd,	// (0x0004a51e) control_bg_pane_g1

0xdad6,	// (0x0004a527) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0004c790) control_bg_pane_g

0xbb0e,	// (0x0004855f) cell_indicator_nsta_pane_g1_ParamLimits

0xbb1c,	// (0x0004856d) cell_indicator_nsta_pane_g2_ParamLimits

0xfab3,	// (0x0004c504) cell_indicator_nsta_pane_g_ParamLimits

0x55db,	// (0x0004202c) form2_midp_time_pane_t1_ParamLimits

0x7c49,	// (0x0004469a) main_idle_act4_pane_ParamLimits

0x7c49,	// (0x0004469a) main_idle_act4_pane

0x9388,	// (0x00045dd9) popup_tb_extension_window_ParamLimits

0xd97b,	// (0x0004a3cc) tb_ext_find_pane_ParamLimits

0xd97b,	// (0x0004a3cc) tb_ext_find_pane

0xdadf,	// (0x0004a530) ai_gene_pane_1_cp1

0x8c7f,	// (0x000456d0) ai_gene_pane_2_cp1

0xdae7,	// (0x0004a538) list_single_idle_plugin_calendar_pane

0xdaf0,	// (0x0004a541) list_single_idle_plugin_notification_pane

0xdaf9,	// (0x0004a54a) list_single_idle_plugin_player_pane

0xdb02,	// (0x0004a553) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb02,	// (0x0004a553) list_single_idle_plugin_shortcut_pane

0xdb24,	// (0x0004a575) main_idle_act4_pane_t1

0xdb36,	// (0x0004a587) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0004c795) main_idle_act4_pane_t

0xdb48,	// (0x0004a599) middle_sk_idle_act4_pane_ParamLimits

0xdb48,	// (0x0004a599) middle_sk_idle_act4_pane

0xdb5e,	// (0x0004a5af) popup_clock_digital_analogue_window_cp2

0xdb78,	// (0x0004a5c9) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb78,	// (0x0004a5c9) shortcut_wheel_idle_act4_pane

0xc0a2,	// (0x00048af3) shortcut_wheel_idle_act4_pane_g1

0xc0a2,	// (0x00048af3) shortcut_wheel_idle_act4_pane_g2

0xc0a2,	// (0x00048af3) shortcut_wheel_idle_act4_pane_g3

0xc0a2,	// (0x00048af3) shortcut_wheel_idle_act4_pane_g4

0xc0a2,	// (0x00048af3) shortcut_wheel_idle_act4_pane_g5

0xdb8c,	// (0x0004a5dd) shortcut_wheel_idle_act4_pane_g6

0xdb94,	// (0x0004a5e5) shortcut_wheel_idle_act4_pane_g7

0xdb9c,	// (0x0004a5ed) shortcut_wheel_idle_act4_pane_g8

0xdba4,	// (0x0004a5f5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0004c79a) shortcut_wheel_idle_act4_pane_g

0xc32c,	// (0x00048d7d) middle_sk_idle_act4_pane_g1_ParamLimits

0xc32c,	// (0x00048d7d) middle_sk_idle_act4_pane_g1

0xdc08,	// (0x0004a659) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc08,	// (0x0004a659) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0004c7bd) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0004c7bd) middle_sk_idle_act4_pane_g

0xdc14,	// (0x0004a665) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc14,	// (0x0004a665) middle_sk_idle_act4_pane_t1

0xdc31,	// (0x0004a682) grid_ai_shortcut_pane_ParamLimits

0xdc31,	// (0x0004a682) grid_ai_shortcut_pane

0xdc4a,	// (0x0004a69b) list_highlight_pane_cp16_ParamLimits

0xdc4a,	// (0x0004a69b) list_highlight_pane_cp16

0xdc57,	// (0x0004a6a8) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc57,	// (0x0004a6a8) list_single_idle_plugin_shortcut_pane_g1

0xdc63,	// (0x0004a6b4) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc63,	// (0x0004a6b4) list_single_idle_plugin_shortcut_pane_g2

0xdc7d,	// (0x0004a6ce) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc7d,	// (0x0004a6ce) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0004c7c2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0004c7c2) list_single_idle_plugin_shortcut_pane_g

0xdc90,	// (0x0004a6e1) cell_ai_shortcut_pane_ParamLimits

0xdc90,	// (0x0004a6e1) cell_ai_shortcut_pane

0xdcb3,	// (0x0004a704) cell_ai_shortcut_pane_g1_ParamLimits

0xdcb3,	// (0x0004a704) cell_ai_shortcut_pane_g1

0xdadf,	// (0x0004a530) ai_gene_pane_1_cp2

0xdcd5,	// (0x0004a726) ai_gene_pane_2_cp2

0xdcdd,	// (0x0004a72e) list_highlight_pane_cp15

0xdce6,	// (0x0004a737) list_single_idle_plugin_calendar_pane_g1

0xdcdd,	// (0x0004a72e) list_highlight_pane_cp17

0xdcee,	// (0x0004a73f) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcf6,	// (0x0004a747) list_single_idle_plugin_player_pane_g1

0xb43c,	// (0x00047e8d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0004c7c9) list_single_idle_plugin_player_pane_g

0xdcfe,	// (0x0004a74f) list_single_idle_plugin_player_pane_t1

0xdd0c,	// (0x0004a75d) list_single_idle_plugin_player_pane_t2

0xdd1a,	// (0x0004a76b) list_single_idle_plugin_player_pane_t3

0xdd28,	// (0x0004a779) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0004c7ce) list_single_idle_plugin_player_pane_t

0xdd36,	// (0x0004a787) wait_bar_pane_cp15

0xdd3e,	// (0x0004a78f) grid_ai_notification_pane

0xb43c,	// (0x00047e8d) list_single_idle_plugin_notification_pane_g1

0xdd47,	// (0x0004a798) cell_ai_notification_pane_ParamLimits

0xdd47,	// (0x0004a798) cell_ai_notification_pane

0xdd54,	// (0x0004a7a5) cell_ai_notification_pane_g1

0xdd5c,	// (0x0004a7ad) cell_ai_notification_pane_t1

0xdd6a,	// (0x0004a7bb) tb_ext_find_button_pane

0xdd72,	// (0x0004a7c3) tb_ext_find_pane_g1

0xdd7a,	// (0x0004a7cb) tb_ext_find_pane_t1

0x8548,	// (0x00044f99) tb_ext_find_button_pane_g1

0xdd88,	// (0x0004a7d9) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0004c7d7) tb_ext_find_button_pane_g

0xdb24,	// (0x0004a575) main_idle_act4_pane_t1_ParamLimits

0xdb36,	// (0x0004a587) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0004c795) main_idle_act4_pane_t_ParamLimits

0xdb5e,	// (0x0004a5af) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb6c,	// (0x0004a5bd) sat_plugin_idle_act4_pane_ParamLimits

0xdb6c,	// (0x0004a5bd) sat_plugin_idle_act4_pane

0xdd91,	// (0x0004a7e2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd91,	// (0x0004a7e2) sat_plugin_idle_act4_pane_t1

0xdda4,	// (0x0004a7f5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdda4,	// (0x0004a7f5) sat_plugin_idle_act4_pane_t2

0xddb7,	// (0x0004a808) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddb7,	// (0x0004a808) sat_plugin_idle_act4_pane_t3

0xddca,	// (0x0004a81b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddca,	// (0x0004a81b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0004c7dc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0004c7dc) sat_plugin_idle_act4_pane_t

0x5ac2,	// (0x00042513) popup_battery_window_ParamLimits

0x5ac2,	// (0x00042513) popup_battery_window

0x78db,	// (0x0004432c) bg_popup_sub_pane_cp25_ParamLimits

0x78db,	// (0x0004432c) bg_popup_sub_pane_cp25

0xdddd,	// (0x0004a82e) popup_battery_window_g1_ParamLimits

0xdddd,	// (0x0004a82e) popup_battery_window_g1

0xdde9,	// (0x0004a83a) popup_battery_window_t1_ParamLimits

0xdde9,	// (0x0004a83a) popup_battery_window_t1

0xddfb,	// (0x0004a84c) popup_battery_window_t2_ParamLimits

0xddfb,	// (0x0004a84c) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0004c7e5) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0004c7e5) popup_battery_window_t

0x8b4a,	// (0x0004559b) midp_canvas_pane_ParamLimits

0x8bc1,	// (0x00045612) midp_keypad_pane_ParamLimits

0x8bc1,	// (0x00045612) midp_keypad_pane

0x8eb4,	// (0x00045905) main_midp_pane_ParamLimits

0xbb98,	// (0x000485e9) signal_pane_g2_cp_ParamLimits

0xde18,	// (0x0004a869) aid_size_cell_midp_keypad_ParamLimits

0xde18,	// (0x0004a869) aid_size_cell_midp_keypad

0xde32,	// (0x0004a883) midp_keyp_game_grid_pane_ParamLimits

0xde32,	// (0x0004a883) midp_keyp_game_grid_pane

0xde52,	// (0x0004a8a3) midp_keyp_rocker_pane_ParamLimits

0xde52,	// (0x0004a8a3) midp_keyp_rocker_pane

0xde81,	// (0x0004a8d2) midp_keyp_sk_left_pane_ParamLimits

0xde81,	// (0x0004a8d2) midp_keyp_sk_left_pane

0xdedb,	// (0x0004a92c) midp_keyp_sk_right_pane_ParamLimits

0xdedb,	// (0x0004a92c) midp_keyp_sk_right_pane

0x2ad0,	// (0x0003f521) bg_button_pane_cp03

0xdf35,	// (0x0004a986) midp_keyp_sk_left_pane_g1

0x2ad0,	// (0x0003f521) bg_button_pane_cp04

0xdf35,	// (0x0004a986) midp_keyp_sk_right_pane_g1

0xc0a2,	// (0x00048af3) midp_keyp_rocker_pane_g1

0xdf3e,	// (0x0004a98f) keyp_game_cell_pane_ParamLimits

0xdf3e,	// (0x0004a98f) keyp_game_cell_pane

0x2ad0,	// (0x0003f521) bg_button_pane_cp02

0xdf51,	// (0x0004a9a2) keyp_game_cell_pane_g1

0x5b0c,	// (0x0004255d) popup_fep_vkb2_window_ParamLimits

0x5b0c,	// (0x0004255d) popup_fep_vkb2_window

0x6e0e,	// (0x0004385f) aid_size_cell_vkb2_ParamLimits

0x6e0e,	// (0x0004385f) aid_size_cell_vkb2

0x6e5a,	// (0x000438ab) popup_fep_vkb2_window_g1_ParamLimits

0x6e5a,	// (0x000438ab) popup_fep_vkb2_window_g1

0x6ea2,	// (0x000438f3) vkb2_area_bottom_pane_ParamLimits

0x6ea2,	// (0x000438f3) vkb2_area_bottom_pane

0x6ef6,	// (0x00043947) vkb2_area_keypad_pane_ParamLimits

0x6ef6,	// (0x00043947) vkb2_area_keypad_pane

0x6f3c,	// (0x0004398d) vkb2_area_top_pane_ParamLimits

0x6f3c,	// (0x0004398d) vkb2_area_top_pane

0x6fb6,	// (0x00043a07) vkb2_top_entry_pane_ParamLimits

0x6fb6,	// (0x00043a07) vkb2_top_entry_pane

0x6fe0,	// (0x00043a31) vkb2_top_grid_left_pane_ParamLimits

0x6fe0,	// (0x00043a31) vkb2_top_grid_left_pane

0x6ffe,	// (0x00043a4f) vkb2_top_grid_right_pane_ParamLimits

0x6ffe,	// (0x00043a4f) vkb2_top_grid_right_pane

0x701c,	// (0x00043a6d) vkb2_cell_keypad_pane_ParamLimits

0x701c,	// (0x00043a6d) vkb2_cell_keypad_pane

0x70d2,	// (0x00043b23) vkb2_area_bottom_grid_pane_ParamLimits

0x70d2,	// (0x00043b23) vkb2_area_bottom_grid_pane

0x70f8,	// (0x00043b49) vkb2_area_bottom_pane_g1_ParamLimits

0x70f8,	// (0x00043b49) vkb2_area_bottom_pane_g1

0x711c,	// (0x00043b6d) vkb2_area_bottom_pane_g2_ParamLimits

0x711c,	// (0x00043b6d) vkb2_area_bottom_pane_g2

0x714a,	// (0x00043b9b) vkb2_area_bottom_pane_g3_ParamLimits

0x714a,	// (0x00043b9b) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0004c7ea) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0004c7ea) vkb2_area_bottom_pane_g

0x71ab,	// (0x00043bfc) vkb2_top_cell_left_pane_ParamLimits

0x71ab,	// (0x00043bfc) vkb2_top_cell_left_pane

0xdf62,	// (0x0004a9b3) vkb2_top_entry_pane_g1_ParamLimits

0xdf62,	// (0x0004a9b3) vkb2_top_entry_pane_g1

0xdf70,	// (0x0004a9c1) vkb2_top_entry_pane_t1_ParamLimits

0xdf70,	// (0x0004a9c1) vkb2_top_entry_pane_t1

0xdf88,	// (0x0004a9d9) vkb2_top_entry_pane_t2_ParamLimits

0xdf88,	// (0x0004a9d9) vkb2_top_entry_pane_t2

0xdfa0,	// (0x0004a9f1) vkb2_top_entry_pane_t3_ParamLimits

0xdfa0,	// (0x0004a9f1) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0004c7f1) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0004c7f1) vkb2_top_entry_pane_t

0x71f8,	// (0x00043c49) vkb2_top_grid_right_pane_g1_ParamLimits

0x71f8,	// (0x00043c49) vkb2_top_grid_right_pane_g1

0x720e,	// (0x00043c5f) vkb2_top_grid_right_pane_g2_ParamLimits

0x720e,	// (0x00043c5f) vkb2_top_grid_right_pane_g2

0x7226,	// (0x00043c77) vkb2_top_grid_right_pane_g3_ParamLimits

0x7226,	// (0x00043c77) vkb2_top_grid_right_pane_g3

0x723e,	// (0x00043c8f) vkb2_top_grid_right_pane_g4_ParamLimits

0x723e,	// (0x00043c8f) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0004c7f8) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0004c7f8) vkb2_top_grid_right_pane_g

0x7254,	// (0x00043ca5) vkb2_top_cell_left_pane_g1

0x726b,	// (0x00043cbc) vkb2_cell_keypad_pane_g1_ParamLimits

0x726b,	// (0x00043cbc) vkb2_cell_keypad_pane_g1

0xdfb6,	// (0x0004aa07) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfb6,	// (0x0004aa07) vkb2_cell_keypad_pane_t1

0x728f,	// (0x00043ce0) vkb2_cell_bottom_grid_pane_ParamLimits

0x728f,	// (0x00043ce0) vkb2_cell_bottom_grid_pane

0x72c8,	// (0x00043d19) vkb2_cell_bottom_grid_pane_g1

0xdbac,	// (0x0004a5fd) aid_call2_pane_cp02

0xdbb4,	// (0x0004a605) aid_call_pane_cp02

0xdbbc,	// (0x0004a60d) clock_digital_number_pane_cp10

0xdbc4,	// (0x0004a615) clock_digital_number_pane_cp11

0xdbcc,	// (0x0004a61d) clock_digital_number_pane_cp12

0xdbd4,	// (0x0004a625) clock_digital_number_pane_cp13

0xdbdc,	// (0x0004a62d) clock_digital_separator_pane_cp10

0x8548,	// (0x00044f99) popup_clock_digital_analogue_window_cp2_g1

0x8548,	// (0x00044f99) popup_clock_digital_analogue_window_cp2_g2

0xdbe4,	// (0x0004a635) popup_clock_digital_analogue_window_cp2_g3

0x8548,	// (0x00044f99) popup_clock_digital_analogue_window_cp2_g4

0xdbe4,	// (0x0004a635) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0004c7ad) popup_clock_digital_analogue_window_cp2_g

0xdbec,	// (0x0004a63d) popup_clock_digital_analogue_window_cp2_t1

0xdbfa,	// (0x0004a64b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0004c7b8) popup_clock_digital_analogue_window_cp2_t

0xc0a2,	// (0x00048af3) clock_digital_number_pane_cp10_g1

0xc0a2,	// (0x00048af3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0004c5a0) clock_digital_number_pane_cp10_g

0xc0a2,	// (0x00048af3) clock_digital_separator_pane_cp10_g1

0xc0a2,	// (0x00048af3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0004c5a0) clock_digital_separator_pane_cp10_g

0xda27,	// (0x0004a478) uniindi_top_pane_g3

0xda38,	// (0x0004a489) uniindi_top_pane_g4

0x708c,	// (0x00043add) vkb2_row_keypad_pane_ParamLimits

0x708c,	// (0x00043add) vkb2_row_keypad_pane

0x72e4,	// (0x00043d35) vkb2_cell_t_keypad_pane_ParamLimits

0x72e4,	// (0x00043d35) vkb2_cell_t_keypad_pane

0x72f4,	// (0x00043d45) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x72f4,	// (0x00043d45) vkb2_cell_t_keypad_pane_cp08

0x7309,	// (0x00043d5a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7309,	// (0x00043d5a) vkb2_cell_t_keypad_pane_cp09

0x731d,	// (0x00043d6e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x731d,	// (0x00043d6e) vkb2_cell_t_keypad_pane_cp01

0x732e,	// (0x00043d7f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x732e,	// (0x00043d7f) vkb2_cell_t_keypad_pane_cp02

0x733f,	// (0x00043d90) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x733f,	// (0x00043d90) vkb2_cell_t_keypad_pane_cp03

0x7350,	// (0x00043da1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7350,	// (0x00043da1) vkb2_cell_t_keypad_pane_cp04

0x7361,	// (0x00043db2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7361,	// (0x00043db2) vkb2_cell_t_keypad_pane_cp05

0x7372,	// (0x00043dc3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7372,	// (0x00043dc3) vkb2_cell_t_keypad_pane_cp06

0x7385,	// (0x00043dd6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7385,	// (0x00043dd6) vkb2_cell_t_keypad_pane_cp07

0x739a,	// (0x00043deb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x739a,	// (0x00043deb) vkb2_cell_t_keypad_pane_cp10

0xc32c,	// (0x00048d7d) vkb2_cell_t_keypad_pane_g1

0xdfcd,	// (0x0004aa1e) vkb2_cell_t_keypad_pane_t1

0x2ad0,	// (0x0003f521) popup_grid_graphic2_window

0xdfdf,	// (0x0004aa30) aid_size_cell_graphic2_ParamLimits

0xdfdf,	// (0x0004aa30) aid_size_cell_graphic2

0xc4b0,	// (0x00048f01) bg_popup_window_pane_cp21_ParamLimits

0xc4b0,	// (0x00048f01) bg_popup_window_pane_cp21

0xe00b,	// (0x0004aa5c) graphic2_pages_pane_ParamLimits

0xe00b,	// (0x0004aa5c) graphic2_pages_pane

0xe051,	// (0x0004aaa2) grid_graphic2_control_pane_ParamLimits

0xe051,	// (0x0004aaa2) grid_graphic2_control_pane

0xe07f,	// (0x0004aad0) grid_graphic2_pane_ParamLimits

0xe07f,	// (0x0004aad0) grid_graphic2_pane

0xe0e1,	// (0x0004ab32) cell_graphic2_pane

0x2ad0,	// (0x0003f521) main_comp_mode_pane

0xd298,	// (0x00049ce9) list_ai3_gene_pane_ParamLimits

0xd660,	// (0x0004a0b1) bg_popup_window_pane_cp19_ParamLimits

0xd66c,	// (0x0004a0bd) bg_touch_area_indi_pane_ParamLimits

0xd66c,	// (0x0004a0bd) bg_touch_area_indi_pane

0xd682,	// (0x0004a0d3) bg_touch_area_indi_pane_cp01_ParamLimits

0xd682,	// (0x0004a0d3) bg_touch_area_indi_pane_cp01

0xd69a,	// (0x0004a0eb) bg_touch_area_indi_pane_cp02_ParamLimits

0xd69a,	// (0x0004a0eb) bg_touch_area_indi_pane_cp02

0xd6b4,	// (0x0004a105) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6b4,	// (0x0004a105) bg_touch_area_indi_pane_cp03

0xd6ce,	// (0x0004a11f) popup_slider_window_g1_ParamLimits

0xd6ea,	// (0x0004a13b) popup_slider_window_g2_ParamLimits

0xd706,	// (0x0004a157) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0004c742) popup_slider_window_g_ParamLimits

0xd762,	// (0x0004a1b3) popup_slider_window_t1_ParamLimits

0xd7d6,	// (0x0004a227) small_volume_slider_vertical_pane_ParamLimits

0xe0e1,	// (0x0004ab32) cell_graphic2_pane_ParamLimits

0xe136,	// (0x0004ab87) bg_button_pane_cp10_ParamLimits

0xe136,	// (0x0004ab87) bg_button_pane_cp10

0xe14b,	// (0x0004ab9c) bg_button_pane_cp11_ParamLimits

0xe14b,	// (0x0004ab9c) bg_button_pane_cp11

0xe160,	// (0x0004abb1) graphic2_pages_pane_g1_ParamLimits

0xe160,	// (0x0004abb1) graphic2_pages_pane_g1

0xe17b,	// (0x0004abcc) graphic2_pages_pane_g2_ParamLimits

0xe17b,	// (0x0004abcc) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0004c806) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0004c806) graphic2_pages_pane_g

0xe193,	// (0x0004abe4) graphic2_pages_pane_t1_ParamLimits

0xe193,	// (0x0004abe4) graphic2_pages_pane_t1

0xe1a9,	// (0x0004abfa) cell_graphic2_control_pane_ParamLimits

0xe1a9,	// (0x0004abfa) cell_graphic2_control_pane

0xe1c3,	// (0x0004ac14) cell_graphic2_pane_g1_ParamLimits

0xe1c3,	// (0x0004ac14) cell_graphic2_pane_g1

0xe1d0,	// (0x0004ac21) cell_graphic2_pane_g2_ParamLimits

0xe1d0,	// (0x0004ac21) cell_graphic2_pane_g2

0xe1dd,	// (0x0004ac2e) cell_graphic2_pane_g3_ParamLimits

0xe1dd,	// (0x0004ac2e) cell_graphic2_pane_g3

0xe1ea,	// (0x0004ac3b) cell_graphic2_pane_g4_ParamLimits

0xe1ea,	// (0x0004ac3b) cell_graphic2_pane_g4

0xe1f7,	// (0x0004ac48) cell_graphic2_pane_g5_ParamLimits

0xe1f7,	// (0x0004ac48) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0004c80b) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0004c80b) cell_graphic2_pane_g

0xe212,	// (0x0004ac63) cell_graphic2_pane_t1_ParamLimits

0xe212,	// (0x0004ac63) cell_graphic2_pane_t1

0x9aee,	// (0x0004653f) grid_highlight_pane_cp11_ParamLimits

0x9aee,	// (0x0004653f) grid_highlight_pane_cp11

0x7ed8,	// (0x00044929) bg_button_pane_cp05

0xe23b,	// (0x0004ac8c) cell_graphic2_control_pane_g1

0xc0a2,	// (0x00048af3) bg_touch_area_indi_pane_g1

0xe248,	// (0x0004ac99) aid_cmod_rocker_key_size

0xe252,	// (0x0004aca3) aid_cmode_itu_key_size

0xe25c,	// (0x0004acad) main_cmode_video_pane

0xe266,	// (0x0004acb7) main_comp_mode_itu_pane

0xe272,	// (0x0004acc3) main_comp_mode_rocker_pane

0xe27e,	// (0x0004accf) cell_cmode_rocker_pane_ParamLimits

0xe27e,	// (0x0004accf) cell_cmode_rocker_pane

0xe292,	// (0x0004ace3) cell_cmode_itu_pane_ParamLimits

0xe292,	// (0x0004ace3) cell_cmode_itu_pane

0x7ed8,	// (0x00044929) bg_button_pane_cp06_ParamLimits

0x7ed8,	// (0x00044929) bg_button_pane_cp06

0xc32c,	// (0x00048d7d) cell_cmode_rocker_pane_g1_ParamLimits

0xc32c,	// (0x00048d7d) cell_cmode_rocker_pane_g1

0xd87d,	// (0x0004a2ce) cell_cmode_rocker_pane_g2_ParamLimits

0xd87d,	// (0x0004a2ce) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0004c81b) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0004c81b) cell_cmode_rocker_pane_g

0x2ad0,	// (0x0003f521) bg_button_pane_cp07

0xe2a9,	// (0x0004acfa) cell_cmode_itu_pane_g1

0xe2b2,	// (0x0004ad03) cell_cmode_itu_pane_t1

0xe2c0,	// (0x0004ad11) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0004c820) cell_cmode_itu_pane_t

0xdaab,	// (0x0004a4fc) aid_touch_ctrl_left

0xdab3,	// (0x0004a504) aid_touch_ctrl_right

0x2ad0,	// (0x0003f521) compa_mode_pane

0xe2ce,	// (0x0004ad1f) aid_cmod_rocker_key_size_cp

0xe2d8,	// (0x0004ad29) aid_cmode_itu_key_size_cp

0xe2e2,	// (0x0004ad33) compa_mode_pane_g1

0xe2ea,	// (0x0004ad3b) compa_mode_pane_g2

0xe2f2,	// (0x0004ad43) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0004c825) compa_mode_pane_g

0xe2fa,	// (0x0004ad4b) main_comp_mode_itu_pane_cp

0xe302,	// (0x0004ad53) main_comp_mode_rocker_pane_cp

0xe30a,	// (0x0004ad5b) cell_cmode_itu_pane_cp_ParamLimits

0xe30a,	// (0x0004ad5b) cell_cmode_itu_pane_cp

0xe31f,	// (0x0004ad70) cell_cmode_rocker_pane_cp_ParamLimits

0xe31f,	// (0x0004ad70) cell_cmode_rocker_pane_cp

0x7ed8,	// (0x00044929) bg_button_pane_cp06_cp_ParamLimits

0x7ed8,	// (0x00044929) bg_button_pane_cp06_cp

0xc32c,	// (0x00048d7d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc32c,	// (0x00048d7d) cell_cmode_rocker_pane_g1_cp

0xc0a2,	// (0x00048af3) cell_cmode_rocker_pane_g2_cp

0x2ad0,	// (0x0003f521) bg_button_pane_cp07_cp

0xe331,	// (0x0004ad82) cell_cmode_itu_pane_g1_cp

0xe33a,	// (0x0004ad8b) cell_cmode_itu_pane_t1_cp

0xe33a,	// (0x0004ad8b) cell_cmode_itu_pane_t2_cp

0xafb5,	// (0x00047a06) settings_code_pane_cp2

0x7651,	// (0x000440a2) bg_popup_window_pane_cp3_ParamLimits

0x7ac9,	// (0x0004451a) heading_pane_cp3_ParamLimits

0x7ad5,	// (0x00044526) listscroll_popup_graphic_pane_ParamLimits

0x689d,	// (0x000432ee) fep_hwr_aid_pane_ParamLimits

0x6d7f,	// (0x000437d0) aid_touch_sctrl_top_ParamLimits

0x6d8c,	// (0x000437dd) sctrl_sk_top_pane_g1_ParamLimits

0xc32c,	// (0x00048d7d) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0004c75b) sctrl_sk_top_pane_g_ParamLimits

0x6d99,	// (0x000437ea) sctrl_sk_top_pane_t1_ParamLimits

0x6d7f,	// (0x000437d0) aid_touch_sctrl_bottom_ParamLimits

0x6d99,	// (0x000437ea) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9f1,	// (0x0004a442) aid_area_touch_clock

0x6f7e,	// (0x000439cf) aid_vkb2_area_top_pane_cell_ParamLimits

0x6f7e,	// (0x000439cf) aid_vkb2_area_top_pane_cell

0x70ae,	// (0x00043aff) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x70ae,	// (0x00043aff) aid_vkb2_area_bottom_pane_cell

0xdf5a,	// (0x0004a9ab) popup_char_count_window

0xe348,	// (0x0004ad99) popup_char_count_window_g1

0xe351,	// (0x0004ada2) popup_char_count_window_g2

0xe35a,	// (0x0004adab) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0004c82c) popup_char_count_window_g

0xe363,	// (0x0004adb4) popup_char_count_window_t1

0x6e38,	// (0x00043889) popup_fep_char_preview_window_ParamLimits

0x6e38,	// (0x00043889) popup_fep_char_preview_window

0x6f9c,	// (0x000439ed) vkb2_top_candi_pane_ParamLimits

0x6f9c,	// (0x000439ed) vkb2_top_candi_pane

0xe371,	// (0x0004adc2) cell_vkb2_top_candi_pane_ParamLimits

0xe371,	// (0x0004adc2) cell_vkb2_top_candi_pane

0xa0a2,	// (0x00046af3) bg_popup_fep_char_preview_window_ParamLimits

0xa0a2,	// (0x00046af3) bg_popup_fep_char_preview_window

0x73af,	// (0x00043e00) popup_fep_char_preview_window_t1_ParamLimits

0x73af,	// (0x00043e00) popup_fep_char_preview_window_t1

0xe3c2,	// (0x0004ae13) bg_popup_fep_char_preview_window_g1

0xe3ca,	// (0x0004ae1b) bg_popup_fep_char_preview_window_g2

0xe3d2,	// (0x0004ae23) bg_popup_fep_char_preview_window_g3

0xe3da,	// (0x0004ae2b) bg_popup_fep_char_preview_window_g4

0xe3e2,	// (0x0004ae33) bg_popup_fep_char_preview_window_g5

0x73e9,	// (0x00043e3a) bg_popup_fep_char_preview_window_g6

0xe3ea,	// (0x0004ae3b) bg_popup_fep_char_preview_window_g7

0xe3f2,	// (0x0004ae43) bg_popup_fep_char_preview_window_g8

0xe3fa,	// (0x0004ae4b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0004c833) bg_popup_fep_char_preview_window_g

0xc32c,	// (0x00048d7d) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc32c,	// (0x00048d7d) cell_vkb2_top_candi_pane_g1

0xc67b,	// (0x000490cc) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc67b,	// (0x000490cc) cell_vkb2_top_candi_pane_g2

0xc69c,	// (0x000490ed) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc69c,	// (0x000490ed) cell_vkb2_top_candi_pane_g3

0x73f1,	// (0x00043e42) cell_vkb2_top_candi_pane_g4_ParamLimits

0x73f1,	// (0x00043e42) cell_vkb2_top_candi_pane_g4

0xe402,	// (0x0004ae53) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe402,	// (0x0004ae53) cell_vkb2_top_candi_pane_g5

0xd87d,	// (0x0004a2ce) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd87d,	// (0x0004a2ce) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0004c846) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0004c846) cell_vkb2_top_candi_pane_g

0x7412,	// (0x00043e63) cell_vkb2_top_candi_pane_t1

0x66af,	// (0x00043100) aid_size_touch_slider_mark_ParamLimits

0x66af,	// (0x00043100) aid_size_touch_slider_mark

0xe041,	// (0x0004aa92) grid_graphic2_catg_pane_ParamLimits

0xe041,	// (0x0004aa92) grid_graphic2_catg_pane

0xe0bb,	// (0x0004ab0c) popup_grid_graphic2_window_t1_ParamLimits

0xe0bb,	// (0x0004ab0c) popup_grid_graphic2_window_t1

0xe0cd,	// (0x0004ab1e) popup_grid_graphic2_window_t2_ParamLimits

0xe0cd,	// (0x0004ab1e) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0004c801) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0004c801) popup_grid_graphic2_window_t

0x7ed8,	// (0x00044929) bg_button_pane_cp05_ParamLimits

0xe23b,	// (0x0004ac8c) cell_graphic2_control_pane_g1_ParamLimits

0xe423,	// (0x0004ae74) cell_graphic2_catg_pane_ParamLimits

0xe423,	// (0x0004ae74) cell_graphic2_catg_pane

0x2ad0,	// (0x0003f521) bg_button_pane_cp12

0xe435,	// (0x0004ae86) cell_graphic2_catg_pane_g1

0xd9bd,	// (0x0004a40e) cell_tb_ext_pane_t1_ParamLimits

0x71cb,	// (0x00043c1c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x71cb,	// (0x00043c1c) vkb2_top_cell_right_narrow_pane

0x71e3,	// (0x00043c34) vkb2_top_cell_right_wide_pane_ParamLimits

0x71e3,	// (0x00043c34) vkb2_top_cell_right_wide_pane

0xc4b0,	// (0x00048f01) bg_vkb2_func_pane_ParamLimits

0xc4b0,	// (0x00048f01) bg_vkb2_func_pane

0x7254,	// (0x00043ca5) vkb2_top_cell_left_pane_g1_ParamLimits

0xc4b0,	// (0x00048f01) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc4b0,	// (0x00048f01) bg_vkb2_fuc_pane_cp03

0x72c8,	// (0x00043d19) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a04,	// (0x00046455) bg_vkb2_func_pane_g1

0x9a0c,	// (0x0004645d) bg_vkb2_func_pane_g2

0x9a1c,	// (0x0004646d) bg_vkb2_func_pane_g3

0x9a14,	// (0x00046465) bg_vkb2_func_pane_g4

0x9a24,	// (0x00046475) bg_vkb2_func_pane_g5

0x9a2c,	// (0x0004647d) bg_vkb2_func_pane_g6

0x9a34,	// (0x00046485) bg_vkb2_func_pane_g7

0x9a3c,	// (0x0004648d) bg_vkb2_func_pane_g8

0x99fc,	// (0x0004644d) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0004c853) bg_vkb2_func_pane_g

0xc4b0,	// (0x00048f01) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc4b0,	// (0x00048f01) bg_vkb2_fuc_pane_cp01

0x7254,	// (0x00043ca5) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7254,	// (0x00043ca5) vkb2_top_cell_right_wide_pane_g1

0xc4b0,	// (0x00048f01) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc4b0,	// (0x00048f01) bg_vkb2_fuc_pane_cp02

0x72c8,	// (0x00043d19) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x72c8,	// (0x00043d19) vkb2_top_cell_right_narrow_pane_g1

0xd5de,	// (0x0004a02f) aid_touch_area_decrease_ParamLimits

0xd5de,	// (0x0004a02f) aid_touch_area_decrease

0xd602,	// (0x0004a053) aid_touch_area_increase_ParamLimits

0xd602,	// (0x0004a053) aid_touch_area_increase

0xd60e,	// (0x0004a05f) aid_touch_area_mute_ParamLimits

0xd60e,	// (0x0004a05f) aid_touch_area_mute

0xd632,	// (0x0004a083) aid_touch_area_slider_ParamLimits

0xd632,	// (0x0004a083) aid_touch_area_slider

0xd722,	// (0x0004a173) popup_slider_window_g4_ParamLimits

0xd722,	// (0x0004a173) popup_slider_window_g4

0xd72e,	// (0x0004a17f) popup_slider_window_g5_ParamLimits

0xd72e,	// (0x0004a17f) popup_slider_window_g5

0xd750,	// (0x0004a1a1) popup_slider_window_g6_ParamLimits

0xd750,	// (0x0004a1a1) popup_slider_window_g6

0xd790,	// (0x0004a1e1) popup_slider_window_t2_ParamLimits

0xd790,	// (0x0004a1e1) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0004c74f) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0004c74f) popup_slider_window_t

0xd7a8,	// (0x0004a1f9) slider_pane_ParamLimits

0xd7a8,	// (0x0004a1f9) slider_pane

0xe43e,	// (0x0004ae8f) slider_pane_g1_ParamLimits

0xe43e,	// (0x0004ae8f) slider_pane_g1

0xe452,	// (0x0004aea3) slider_pane_g2_ParamLimits

0xe452,	// (0x0004aea3) slider_pane_g2

0xe468,	// (0x0004aeb9) slider_pane_g3_ParamLimits

0xe468,	// (0x0004aeb9) slider_pane_g3

0x0003,

0xfe15,	// (0x0004c866) slider_pane_g_ParamLimits

0xfe15,	// (0x0004c866) slider_pane_g

0x93ea,	// (0x00045e3b) popup_tb_float_extension_window_ParamLimits

0x93ea,	// (0x00045e3b) popup_tb_float_extension_window

0xe494,	// (0x0004aee5) aid_size_cell_tb_float_ext

0x2ad0,	// (0x0003f521) bg_popup_sub_window_cp28

0xe4a0,	// (0x0004aef1) grid_tb_float_ext_pane

0xe4ac,	// (0x0004aefd) cell_tb_float_ext_pane_ParamLimits

0xe4ac,	// (0x0004aefd) cell_tb_float_ext_pane

0xe4c8,	// (0x0004af19) cell_tb_float_ext_pane_g1

0xe4d1,	// (0x0004af22) grid_highlight_pane_cp12

0x69d6,	// (0x00043427) cell_last_hwr_side_pane_ParamLimits

0x69d6,	// (0x00043427) cell_last_hwr_side_pane

0xc0a2,	// (0x00048af3) cell_last_hwr_side_pane_g1

0xe4da,	// (0x0004af2b) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x0004c86f) cell_last_hwr_side_pane_g

0x717a,	// (0x00043bcb) vkb2_area_bottom_space_btn_pane_ParamLimits

0x717a,	// (0x00043bcb) vkb2_area_bottom_space_btn_pane

0xc32c,	// (0x00048d7d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfcd,	// (0x0004aa1e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7412,	// (0x00043e63) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7430,	// (0x00043e81) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7430,	// (0x00043e81) vkb2_area_bottom_space_btn_pane_g1

0x746a,	// (0x00043ebb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x746a,	// (0x00043ebb) vkb2_area_bottom_space_btn_pane_g2

0x74a0,	// (0x00043ef1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x74a0,	// (0x00043ef1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0004c874) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0004c874) vkb2_area_bottom_space_btn_pane_g

0x6946,	// (0x00043397) cel_fep_hwr_func_pane_ParamLimits

0x6946,	// (0x00043397) cel_fep_hwr_func_pane

0x6982,	// (0x000433d3) cell_hwr_side_button_pane_ParamLimits

0x6982,	// (0x000433d3) cell_hwr_side_button_pane

0xd9f1,	// (0x0004a442) aid_area_touch_clock_ParamLimits

0x78db,	// (0x0004432c) bg_uniindi_top_pane_ParamLimits

0xda05,	// (0x0004a456) uniindi_top_pane_g1_ParamLimits

0xda1b,	// (0x0004a46c) uniindi_top_pane_g2_ParamLimits

0xda27,	// (0x0004a478) uniindi_top_pane_g3_ParamLimits

0xda38,	// (0x0004a489) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0004c787) uniindi_top_pane_g_ParamLimits

0xda45,	// (0x0004a496) uniindi_top_pane_t1_ParamLimits

0x78db,	// (0x0004432c) bg_vkb2_func_pane_cp01_ParamLimits

0x78db,	// (0x0004432c) bg_vkb2_func_pane_cp01

0xe4e3,	// (0x0004af34) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e3,	// (0x0004af34) cel_fep_hwr_func_pane_g1

0x78db,	// (0x0004432c) bg_vkb2_func_pane_cp02_ParamLimits

0x78db,	// (0x0004432c) bg_vkb2_func_pane_cp02

0xe4e3,	// (0x0004af34) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e3,	// (0x0004af34) cell_hwr_side_button_pane_g1

0x987d,	// (0x000462ce) status_pane_g4_ParamLimits

0x987d,	// (0x000462ce) status_pane_g4

0x9897,	// (0x000462e8) status_pane_t1

0xbe3e,	// (0x0004888f) form2_midp_gauge_slider_cont_pane

0xbe46,	// (0x00048897) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe58,	// (0x000488a9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe6a,	// (0x000488bb) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb02,	// (0x0004c553) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe7c,	// (0x000488cd) form2_midp_slider_pane_ParamLimits

0x6e00,	// (0x00043851) aid_size_cell_func_vkb2_ParamLimits

0x6e00,	// (0x00043851) aid_size_cell_func_vkb2

0xe480,	// (0x0004aed1) slider_pane_g4_ParamLimits

0xe480,	// (0x0004aed1) slider_pane_g4

0x74ea,	// (0x00043f3b) form2_midp_gauge_slider_pane_t2_cp01

0x74f8,	// (0x00043f49) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x74f8,	// (0x00043f49) form2_midp_gauge_slider_pane_t3_cp01

0x7515,	// (0x00043f66) form2_midp_slider_pane_cp01

0x2ad0,	// (0x0003f521) navi_smil_pane

0xe51c,	// (0x0004af6d) navi_smil_pane_g1

0xe524,	// (0x0004af75) navi_smil_pane_t1

0xe4f1,	// (0x0004af42) form2_midp_slider_pane_g1

0xe4fa,	// (0x0004af4b) form2_midp_slider_pane_g2

0xe502,	// (0x0004af53) form2_midp_slider_pane_g3

0xe4f1,	// (0x0004af42) form2_midp_slider_pane_g4

0xe50a,	// (0x0004af5b) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x0004c87d) form2_midp_slider_pane_g

0x74da,	// (0x00043f2b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x74da,	// (0x00043f2b) vkb2_area_bottom_space_btn_pane_g4

0x9695,	// (0x000460e6) lc0_navi_pane_ParamLimits

0x9695,	// (0x000460e6) lc0_navi_pane

0x9711,	// (0x00046162) lc0_stat_indi_pane_ParamLimits

0x9711,	// (0x00046162) lc0_stat_indi_pane

0x9728,	// (0x00046179) ls0_title_pane_ParamLimits

0x9728,	// (0x00046179) ls0_title_pane

0x7ed8,	// (0x00044929) bg_popup_sub_pane_cp14_ParamLimits

0xd9d8,	// (0x0004a429) list_uniindi_pane_ParamLimits

0xd9e4,	// (0x0004a435) uniindi_top_pane_ParamLimits

0xda83,	// (0x0004a4d4) list_single_uniindi_pane_g1_ParamLimits

0xda96,	// (0x0004a4e7) list_single_uniindi_pane_t1_ParamLimits

0x751e,	// (0x00043f6f) lc0_stat_clock_pane_ParamLimits

0x751e,	// (0x00043f6f) lc0_stat_clock_pane

0xe532,	// (0x0004af83) lc0_stat_indi_pane_g1_ParamLimits

0xe532,	// (0x0004af83) lc0_stat_indi_pane_g1

0xe53f,	// (0x0004af90) lc0_stat_indi_pane_g2_ParamLimits

0xe53f,	// (0x0004af90) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x0004c888) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x0004c888) lc0_stat_indi_pane_g

0x752b,	// (0x00043f7c) lc0_uni_indicator_pane_ParamLimits

0x752b,	// (0x00043f7c) lc0_uni_indicator_pane

0xe54c,	// (0x0004af9d) ls0_title_pane_g1_ParamLimits

0xe54c,	// (0x0004af9d) ls0_title_pane_g1

0xe560,	// (0x0004afb1) ls0_title_pane_t1_ParamLimits

0xe560,	// (0x0004afb1) ls0_title_pane_t1

0x7538,	// (0x00043f89) lc0_uni_indicator_pane_g1_ParamLimits

0x7538,	// (0x00043f89) lc0_uni_indicator_pane_g1

0xe596,	// (0x0004afe7) lc0_stat_clock_pane_t1

0x2ad0,	// (0x0003f521) main_ai5_pane

0xe5a4,	// (0x0004aff5) ai5_sk_pane_ParamLimits

0xe5a4,	// (0x0004aff5) ai5_sk_pane

0xe5b1,	// (0x0004b002) cell_ai5_widget_pane_ParamLimits

0xe5b1,	// (0x0004b002) cell_ai5_widget_pane

0xe627,	// (0x0004b078) aid_size_cell_widget_grid

0xe63b,	// (0x0004b08c) bg_ai5_widget_pane_ParamLimits

0xe63b,	// (0x0004b08c) bg_ai5_widget_pane

0xe663,	// (0x0004b0b4) cell_ai5_widget_pane_g2

0xe673,	// (0x0004b0c4) cell_ai5_widget_pane_g3

0xe692,	// (0x0004b0e3) cell_ai5_widget_pane_g4

0xe69e,	// (0x0004b0ef) cell_ai5_widget_pane_g5

0xe6aa,	// (0x0004b0fb) cell_ai5_widget_pane_g6

0xe6b8,	// (0x0004b109) cell_ai5_widget_pane_g7

0xe700,	// (0x0004b151) cell_ai5_widget_pane_t1_ParamLimits

0xe700,	// (0x0004b151) cell_ai5_widget_pane_t1

0xe71d,	// (0x0004b16e) cell_ai5_widget_pane_t2_ParamLimits

0xe71d,	// (0x0004b16e) cell_ai5_widget_pane_t2

0xe735,	// (0x0004b186) cell_ai5_widget_pane_t3_ParamLimits

0xe735,	// (0x0004b186) cell_ai5_widget_pane_t3

0xe74d,	// (0x0004b19e) cell_ai5_widget_pane_t4_ParamLimits

0xe74d,	// (0x0004b19e) cell_ai5_widget_pane_t4

0xe767,	// (0x0004b1b8) cell_ai5_widget_pane_t5_ParamLimits

0xe767,	// (0x0004b1b8) cell_ai5_widget_pane_t5

0xe786,	// (0x0004b1d7) cell_ai5_widget_pane_t6_ParamLimits

0xe786,	// (0x0004b1d7) cell_ai5_widget_pane_t6

0xe798,	// (0x0004b1e9) cell_ai5_widget_pane_t7_ParamLimits

0xe798,	// (0x0004b1e9) cell_ai5_widget_pane_t7

0xe7b1,	// (0x0004b202) cell_ai5_widget_pane_t8_ParamLimits

0xe7b1,	// (0x0004b202) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0004c8a2) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0004c8a2) cell_ai5_widget_pane_t

0xe7fd,	// (0x0004b24e) grid_ai5_widget_pane

0x7ed8,	// (0x00044929) highlight_cell_ai5_widget_pane_ParamLimits

0x7ed8,	// (0x00044929) highlight_cell_ai5_widget_pane

0xe814,	// (0x0004b265) ai5_sk_left_pane

0xe81e,	// (0x0004b26f) ai5_sk_middle_pane

0xe828,	// (0x0004b279) ai5_sk_right_pane

0xe832,	// (0x0004b283) bg_ai5_widget_pane_g1_ParamLimits

0xe832,	// (0x0004b283) bg_ai5_widget_pane_g1

0xe83e,	// (0x0004b28f) bg_ai5_widget_pane_g2_ParamLimits

0xe83e,	// (0x0004b28f) bg_ai5_widget_pane_g2

0xe84a,	// (0x0004b29b) bg_ai5_widget_pane_g3_ParamLimits

0xe84a,	// (0x0004b29b) bg_ai5_widget_pane_g3

0xe856,	// (0x0004b2a7) bg_ai5_widget_pane_g4_ParamLimits

0xe856,	// (0x0004b2a7) bg_ai5_widget_pane_g4

0xe862,	// (0x0004b2b3) bg_ai5_widget_pane_g5_ParamLimits

0xe862,	// (0x0004b2b3) bg_ai5_widget_pane_g5

0xe86e,	// (0x0004b2bf) bg_ai5_widget_pane_g6_ParamLimits

0xe86e,	// (0x0004b2bf) bg_ai5_widget_pane_g6

0xe87a,	// (0x0004b2cb) bg_ai5_widget_pane_g7_ParamLimits

0xe87a,	// (0x0004b2cb) bg_ai5_widget_pane_g7

0xe886,	// (0x0004b2d7) bg_ai5_widget_pane_g8_ParamLimits

0xe886,	// (0x0004b2d7) bg_ai5_widget_pane_g8

0xe892,	// (0x0004b2e3) bg_ai5_widget_pane_g9_ParamLimits

0xe892,	// (0x0004b2e3) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x0004c8b7) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x0004c8b7) bg_ai5_widget_pane_g

0xe8b9,	// (0x0004b30a) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8b9,	// (0x0004b30a) cell_shortcut_ai5_widget_pane

0x771d,	// (0x0004416e) bg_cell_shortcut_ai5_widget_pane

0xe8cb,	// (0x0004b31c) cell_grid_ai5_widget_pane_g1

0xe8d4,	// (0x0004b325) highlight_cell_shortcut_ai5_widget_pane

0x9a0c,	// (0x0004645d) ai5_sk_left_pane_g1

0xe8dc,	// (0x0004b32d) ai5_sk_left_pane_g2

0xe8e4,	// (0x0004b335) ai5_sk_left_pane_g3

0xe8ec,	// (0x0004b33d) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0004c8ca) ai5_sk_left_pane_g

0xe8f4,	// (0x0004b345) ai5_sk_left_pane_t1

0x9a04,	// (0x00046455) ai5_sk_right_pane_g1

0xe902,	// (0x0004b353) ai5_sk_right_pane_g2

0xe90a,	// (0x0004b35b) ai5_sk_right_pane_g3

0xe912,	// (0x0004b363) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x0004c8d3) ai5_sk_right_pane_g

0xe91a,	// (0x0004b36b) ai5_sk_right_pane_t1

0x9a04,	// (0x00046455) ai5_sk_middle_pane_g1

0x9a0c,	// (0x0004645d) ai5_sk_middle_pane_g2

0x9a24,	// (0x00046475) ai5_sk_middle_pane_g3

0xe90a,	// (0x0004b35b) ai5_sk_middle_pane_g4

0xe8e4,	// (0x0004b335) ai5_sk_middle_pane_g5

0xe928,	// (0x0004b379) ai5_sk_middle_pane_g6

0xe930,	// (0x0004b381) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0004c8dc) ai5_sk_middle_pane_g

0x9517,	// (0x00045f68) aid_touch_area_size_lc0_ParamLimits

0x9517,	// (0x00045f68) aid_touch_area_size_lc0

0x6ae5,	// (0x00043536) cell_hwr_candidate_pane_t1_ParamLimits

0x9535,	// (0x00045f86) aid_touch_navi_pane

0x9827,	// (0x00046278) status_dt_navi_pane_ParamLimits

0x9827,	// (0x00046278) status_dt_navi_pane

0x9834,	// (0x00046285) status_dt_sta_pane_ParamLimits

0x9834,	// (0x00046285) status_dt_sta_pane

0xe938,	// (0x0004b389) dt_sta_controll_pane

0xe945,	// (0x0004b396) dt_sta_indi_pane

0xe956,	// (0x0004b3a7) dt_sta_title_pane

0x78db,	// (0x0004432c) bg_dt_sta_indi_pane_ParamLimits

0x78db,	// (0x0004432c) bg_dt_sta_indi_pane

0xe969,	// (0x0004b3ba) dt_sta_battery_pane

0xe971,	// (0x0004b3c2) dt_sta_indi_pane_g1

0xe97a,	// (0x0004b3cb) dt_sta_indi_pane_g2

0xe983,	// (0x0004b3d4) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0004c8eb) dt_sta_indi_pane_g

0xe98c,	// (0x0004b3dd) dt_sta_signal_pane

0x7ed8,	// (0x00044929) bg_dt_sta_title_pane_ParamLimits

0x7ed8,	// (0x00044929) bg_dt_sta_title_pane

0xe995,	// (0x0004b3e6) dt_sta_title_pane_g1

0xe99d,	// (0x0004b3ee) dt_sta_title_pane_t1_ParamLimits

0xe99d,	// (0x0004b3ee) dt_sta_title_pane_t1

0x2ad0,	// (0x0003f521) bg_dt_sta_control_pane

0xe9b2,	// (0x0004b403) dt_sta_controll_pane_g1

0xe9bb,	// (0x0004b40c) bg_dt_sta_title_pane_g1

0xe9c4,	// (0x0004b415) bg_dt_sta_title_pane_g2

0xe9cd,	// (0x0004b41e) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x0004c8f2) bg_dt_sta_title_pane_g

0xc0a2,	// (0x00048af3) bg_dt_sta_indi_pane_g1

0xe9d6,	// (0x0004b427) dt_sta_signal_pane_g1

0xe9de,	// (0x0004b42f) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0004c8f9) dt_sta_signal_pane_g

0xe9e6,	// (0x0004b437) dt_sta_battery_pane_g1

0xe9ef,	// (0x0004b440) dt_sta_battery_pane_t1

0xc0a2,	// (0x00048af3) bg_dt_sta_control_pane_g1

0x8634,	// (0x00045085) fep_china_uni_eep_pane

0x863c,	// (0x0004508d) fep_china_uni_entry_pane_ParamLimits

0x864c,	// (0x0004509d) popup_fep_china_uni_window_g1_ParamLimits

0x865c,	// (0x000450ad) popup_fep_china_uni_window_g2_ParamLimits

0x865c,	// (0x000450ad) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0004c18b) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0004c18b) popup_fep_china_uni_window_g

0xe9fe,	// (0x0004b44f) fep_china_uni_eep_pane_g1

0xea06,	// (0x0004b457) fep_china_uni_eep_pane_t1

0xe513,	// (0x0004af64) aid_touch_area_size_smil_player

0x968d,	// (0x000460de) lc0_clock_pane

0x988b,	// (0x000462dc) status_pane_g5_ParamLimits

0x988b,	// (0x000462dc) status_pane_g5

0x906f,	// (0x00045ac0) popup_keymap_window

0x9849,	// (0x0004629a) status_icon_pane

0xe673,	// (0x0004b0c4) cell_ai5_widget_pane_g3_ParamLimits

0xe692,	// (0x0004b0e3) cell_ai5_widget_pane_g4_ParamLimits

0xe69e,	// (0x0004b0ef) cell_ai5_widget_pane_g5_ParamLimits

0xe6c4,	// (0x0004b115) cell_ai5_widget_pane_g8_ParamLimits

0xe6c4,	// (0x0004b115) cell_ai5_widget_pane_g8

0xe6d8,	// (0x0004b129) cell_ai5_widget_pane_g9_ParamLimits

0xe6d8,	// (0x0004b129) cell_ai5_widget_pane_g9

0xe6ec,	// (0x0004b13d) cell_ai5_widget_pane_g10_ParamLimits

0xe6ec,	// (0x0004b13d) cell_ai5_widget_pane_g10

0xea15,	// (0x0004b466) status_icon_pane_g1

0x2ad0,	// (0x0003f521) bg_popup_sub_pane_cp13

0xea1d,	// (0x0004b46e) popup_keymap_window_t1

0x8e11,	// (0x00045862) control_pane_g6_ParamLimits

0x8e11,	// (0x00045862) control_pane_g6

0x8e1e,	// (0x0004586f) control_pane_g7_ParamLimits

0x8e1e,	// (0x0004586f) control_pane_g7

0x8e2b,	// (0x0004587c) control_pane_g8_ParamLimits

0x8e2b,	// (0x0004587c) control_pane_g8

0xe938,	// (0x0004b389) dt_sta_controll_pane_ParamLimits

0xe945,	// (0x0004b396) dt_sta_indi_pane_ParamLimits

0xe956,	// (0x0004b3a7) dt_sta_title_pane_ParamLimits

0x7e10,	// (0x00044861) aid_size_touch_scroll_bar_cale

0x5ada,	// (0x0004252b) popup_discreet_window_ParamLimits

0x5ada,	// (0x0004252b) popup_discreet_window

0x5b68,	// (0x000425b9) popup_sk_window

0xa0a2,	// (0x00046af3) bg_popup_sub_pane_cp28_ParamLimits

0xa0a2,	// (0x00046af3) bg_popup_sub_pane_cp28

0xea2b,	// (0x0004b47c) popup_discreet_window_g1_ParamLimits

0xea2b,	// (0x0004b47c) popup_discreet_window_g1

0xea4b,	// (0x0004b49c) popup_discreet_window_t1_ParamLimits

0xea4b,	// (0x0004b49c) popup_discreet_window_t1

0xea69,	// (0x0004b4ba) popup_discreet_window_t2_ParamLimits

0xea69,	// (0x0004b4ba) popup_discreet_window_t2

0x0002,

0xfead,	// (0x0004c8fe) popup_discreet_window_t_ParamLimits

0xfead,	// (0x0004c8fe) popup_discreet_window_t

0x754b,	// (0x00043f9c) popup_sk_window_g1

0x7555,	// (0x00043fa6) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0004c905) popup_sk_window_g

0xeabb,	// (0x0004b50c) popup_sk_window_t1

0xeac9,	// (0x0004b51a) popup_sk_window_t1_copy1

0xe663,	// (0x0004b0b4) cell_ai5_widget_pane_g2_ParamLimits

0xe7c3,	// (0x0004b214) cell_ai5_widget_pane_t9_ParamLimits

0xe7c3,	// (0x0004b214) cell_ai5_widget_pane_t9

0x2ad0,	// (0x0003f521) main_fep_fshwr2_pane

0xead7,	// (0x0004b528) aid_fshwr2_btn_pane

0xeadf,	// (0x0004b530) aid_fshwr2_syb_pane

0xeae7,	// (0x0004b538) aid_fshwr2_txt_pane

0xeaef,	// (0x0004b540) fshwr2_func_candi_pane

0xeaf9,	// (0x0004b54a) fshwr2_hwr_syb_pane

0xeb03,	// (0x0004b554) fshwr2_icf_pane

0x2ad0,	// (0x0003f521) fshwr2_icf_bg_pane

0xeb25,	// (0x0004b576) fshwr2_icf_pane_t1_ParamLimits

0xeb25,	// (0x0004b576) fshwr2_icf_pane_t1

0xc0a2,	// (0x00048af3) fshwr2_func_candi_pane_g1

0xeb3c,	// (0x0004b58d) fshwr2_func_candi_row_pane_ParamLimits

0xeb3c,	// (0x0004b58d) fshwr2_func_candi_row_pane

0xeb4d,	// (0x0004b59e) cell_fshwr2_syb_pane_ParamLimits

0xeb4d,	// (0x0004b59e) cell_fshwr2_syb_pane

0xc32c,	// (0x00048d7d) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc32c,	// (0x00048d7d) fshwr2_hwr_syb_pane_g1

0x2ad0,	// (0x0003f521) bg_popup_call_pane_cp01

0xeb67,	// (0x0004b5b8) fshwr2_func_candi_cell_pane_ParamLimits

0xeb67,	// (0x0004b5b8) fshwr2_func_candi_cell_pane

0xeb99,	// (0x0004b5ea) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb99,	// (0x0004b5ea) fshwr2_func_candi_cell_bg_pane

0xebb3,	// (0x0004b604) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebb3,	// (0x0004b604) fshwr2_func_candi_cell_pane_g1

0xebd3,	// (0x0004b624) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebd3,	// (0x0004b624) fshwr2_func_candi_cell_pane_t1

0x2ad0,	// (0x0003f521) bg_button_pane_cp08

0x8b36,	// (0x00045587) cell_fshwr2_syb_bg_pane

0xebe6,	// (0x0004b637) cell_fshwr2_syb_bg_pane_g1

0xebee,	// (0x0004b63f) cell_fshwr2_syb_bg_pane_t1

0x7ed8,	// (0x00044929) main_tmo_pane

0xabcc,	// (0x0004761d) uni_indicator_pane_g1_ParamLimits

0xabe1,	// (0x00047632) uni_indicator_pane_g2_ParamLimits

0xabf7,	// (0x00047648) uni_indicator_pane_g3_ParamLimits

0xac0d,	// (0x0004765e) uni_indicator_pane_g4_ParamLimits

0xac0d,	// (0x0004765e) uni_indicator_pane_g4

0xac21,	// (0x00047672) uni_indicator_pane_g5_ParamLimits

0xac21,	// (0x00047672) uni_indicator_pane_g5

0xac35,	// (0x00047686) uni_indicator_pane_g6_ParamLimits

0xac35,	// (0x00047686) uni_indicator_pane_g6

0xf937,	// (0x0004c388) uni_indicator_pane_g_ParamLimits

0xd5ae,	// (0x00049fff) popup_tmo_note_window_ParamLimits

0xd5ae,	// (0x00049fff) popup_tmo_note_window

0x2ad0,	// (0x0003f521) fshwr2_bg_pane

0xebc4,	// (0x0004b615) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc4,	// (0x0004b615) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0004c90a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0004c90a) fshwr2_func_candi_cell_pane_g

0xc0a2,	// (0x00048af3) bg_popup_window_pane_cp01

0xebfd,	// (0x0004b64e) bg_popup_window_pane_g1_cp01

0xec06,	// (0x0004b657) bg_popup_window_pane_cp22_ParamLimits

0xec06,	// (0x0004b657) bg_popup_window_pane_cp22

0xec14,	// (0x0004b665) listscroll_tmo_link_pane_ParamLimits

0xec14,	// (0x0004b665) listscroll_tmo_link_pane

0xec54,	// (0x0004b6a5) popup_tmo_note_window_g1_ParamLimits

0xec54,	// (0x0004b6a5) popup_tmo_note_window_g1

0xec61,	// (0x0004b6b2) tmo_note_info_pane_ParamLimits

0xec61,	// (0x0004b6b2) tmo_note_info_pane

0xec7b,	// (0x0004b6cc) list_tmo_note_info_pane_g1_ParamLimits

0xec7b,	// (0x0004b6cc) list_tmo_note_info_pane_g1

0xec92,	// (0x0004b6e3) list_tmo_note_info_pane_g2_ParamLimits

0xec92,	// (0x0004b6e3) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x0004c90f) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x0004c90f) list_tmo_note_info_pane_g

0xecae,	// (0x0004b6ff) list_tmo_note_info_text_pane_ParamLimits

0xecae,	// (0x0004b6ff) list_tmo_note_info_text_pane

0xed33,	// (0x0004b784) list_tmo_link_pane

0xed40,	// (0x0004b791) scroll_pane_cp20

0xed4d,	// (0x0004b79e) list_single_tmo_link_pane_ParamLimits

0xed4d,	// (0x0004b79e) list_single_tmo_link_pane

0xed5d,	// (0x0004b7ae) list_single_tmo_link_pane_t1

0xed6b,	// (0x0004b7bc) list_tmo_note_info_text_pane_t1_ParamLimits

0xed6b,	// (0x0004b7bc) list_tmo_note_info_text_pane_t1

0x7f9e,	// (0x000449ef) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7f9e,	// (0x000449ef) aid_size_touch_scroll_bar_cp01

0x5112,	// (0x00041b63) aid_size_touch_slider_marker

0x5b50,	// (0x000425a1) popup_settings_window_ParamLimits

0x5b50,	// (0x000425a1) popup_settings_window

0x528b,	// (0x00041cdc) popup_candi_list_indi_window

0x9535,	// (0x00045f86) aid_touch_navi_pane_ParamLimits

0x6d53,	// (0x000437a4) rs_clock_indi_pane

0x6d5c,	// (0x000437ad) sctrl_sk_bottom_pane_ParamLimits

0x6d6d,	// (0x000437be) sctrl_sk_top_pane_ParamLimits

0x6e52,	// (0x000438a3) popup_fep_tooltip_window

0xe627,	// (0x0004b078) aid_size_cell_widget_grid_ParamLimits

0xe657,	// (0x0004b0a8) cell_ai5_widget_pane_g1_ParamLimits

0xe657,	// (0x0004b0a8) cell_ai5_widget_pane_g1

0xe6aa,	// (0x0004b0fb) cell_ai5_widget_pane_g6_ParamLimits

0xe6b8,	// (0x0004b109) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x0004c88d) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0004c88d) cell_ai5_widget_pane_g

0xe7e7,	// (0x0004b238) cell_ai5_widget_pane_t10_ParamLimits

0xe7e7,	// (0x0004b238) cell_ai5_widget_pane_t10

0xe7fd,	// (0x0004b24e) grid_ai5_widget_pane_ParamLimits

0xe89e,	// (0x0004b2ef) cell_contacts_ai5_widget_pane_ParamLimits

0xe89e,	// (0x0004b2ef) cell_contacts_ai5_widget_pane

0xea7e,	// (0x0004b4cf) popup_discreet_window_t3_ParamLimits

0xea7e,	// (0x0004b4cf) popup_discreet_window_t3

0xeb0d,	// (0x0004b55e) popup_fshwr2_char_preview_window_ParamLimits

0xeb0d,	// (0x0004b55e) popup_fshwr2_char_preview_window

0xeccc,	// (0x0004b71d) tmo_note_info_pane_t1

0xece1,	// (0x0004b732) tmo_note_info_pane_t2

0xecfa,	// (0x0004b74b) tmo_note_info_pane_t3

0xed0f,	// (0x0004b760) tmo_note_info_pane_t4

0xed21,	// (0x0004b772) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0004c914) tmo_note_info_pane_t

0xed33,	// (0x0004b784) list_tmo_link_pane_ParamLimits

0xed40,	// (0x0004b791) scroll_pane_cp20_ParamLimits

0x2ad0,	// (0x0003f521) bg_popup_fep_char_preview_window_cp01

0xed84,	// (0x0004b7d5) popup_fshwr2_char_preview_window_t1

0xed92,	// (0x0004b7e3) popup_candi_list_indi_window_g1

0xed9b,	// (0x0004b7ec) bg_cell_contacts_ai5_widget_pane

0xeda7,	// (0x0004b7f8) cell_contacts_ai5_widget_pane_g1

0xedbb,	// (0x0004b80c) cell_contacts_ai5_widget_pane_g2

0xedca,	// (0x0004b81b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x0004c91f) cell_contacts_ai5_widget_pane_g

0xeddd,	// (0x0004b82e) cell_contacts_ai5_widget_pane_t1

0x7ed8,	// (0x00044929) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee57,	// (0x0004b8a8) settings_container_pane

0x8b36,	// (0x00045587) listscroll_set_pane_copy1

0xb7e8,	// (0x00048239) scroll_pane_cp121_copy1

0xee63,	// (0x0004b8b4) set_content_pane_copy1

0xee6b,	// (0x0004b8bc) aid_height_set_list_copy1_ParamLimits

0xee6b,	// (0x0004b8bc) aid_height_set_list_copy1

0xae35,	// (0x00047886) aid_size_parent_copy1_ParamLimits

0xae35,	// (0x00047886) aid_size_parent_copy1

0xee77,	// (0x0004b8c8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee77,	// (0x0004b8c8) button_value_adjust_pane_cp6_copy1

0x8eb4,	// (0x00045905) list_highlight_pane_cp2_copy1_ParamLimits

0x8eb4,	// (0x00045905) list_highlight_pane_cp2_copy1

0xee8b,	// (0x0004b8dc) list_set_pane_copy1_ParamLimits

0xee8b,	// (0x0004b8dc) list_set_pane_copy1

0xedf2,	// (0x0004b843) main_pane_set_t1_copy1_ParamLimits

0xedf2,	// (0x0004b843) main_pane_set_t1_copy1

0xee2c,	// (0x0004b87d) main_pane_set_t2_copy1_ParamLimits

0xee2c,	// (0x0004b87d) main_pane_set_t2_copy1

0xef52,	// (0x0004b9a3) main_pane_set_t3_copy1

0xef60,	// (0x0004b9b1) main_pane_set_t4_copy1

0xee4b,	// (0x0004b89c) set_content_pane_g1_copy1_ParamLimits

0xee4b,	// (0x0004b89c) set_content_pane_g1_copy1

0xef6e,	// (0x0004b9bf) setting_code_pane_copy1

0xef78,	// (0x0004b9c9) setting_slider_graphic_pane_copy1

0xef78,	// (0x0004b9c9) setting_slider_pane_copy1

0xef78,	// (0x0004b9c9) setting_text_pane_copy1

0xef82,	// (0x0004b9d3) setting_volume_pane_copy1

0xef8b,	// (0x0004b9dc) settings_code_pane_cp2_copy1

0xef93,	// (0x0004b9e4) settings_code_pane_cp_copy1_ParamLimits

0xef93,	// (0x0004b9e4) settings_code_pane_cp_copy1

0xefa7,	// (0x0004b9f8) volume_set_pane_copy1

0xefb3,	// (0x0004ba04) volume_set_pane_g10_copy1

0xefbf,	// (0x0004ba10) volume_set_pane_g1_copy1

0xefc9,	// (0x0004ba1a) volume_set_pane_g2_copy1

0xefd3,	// (0x0004ba24) volume_set_pane_g3_copy1

0xefdd,	// (0x0004ba2e) volume_set_pane_g4_copy1

0xefe7,	// (0x0004ba38) volume_set_pane_g5_copy1

0xeff1,	// (0x0004ba42) volume_set_pane_g6_copy1

0xeffb,	// (0x0004ba4c) volume_set_pane_g7_copy1

0xf005,	// (0x0004ba56) volume_set_pane_g8_copy1

0xf00f,	// (0x0004ba60) volume_set_pane_g9_copy1

0x7651,	// (0x000440a2) bg_set_opt_pane_cp_copy1_ParamLimits

0x7651,	// (0x000440a2) bg_set_opt_pane_cp_copy1

0xf019,	// (0x0004ba6a) setting_slider_pane_t1_copy1_ParamLimits

0xf019,	// (0x0004ba6a) setting_slider_pane_t1_copy1

0xf037,	// (0x0004ba88) setting_slider_pane_t2_copy1_ParamLimits

0xf037,	// (0x0004ba88) setting_slider_pane_t2_copy1

0xf051,	// (0x0004baa2) setting_slider_pane_t3_copy1_ParamLimits

0xf051,	// (0x0004baa2) setting_slider_pane_t3_copy1

0xf069,	// (0x0004baba) slider_set_pane_copy1_ParamLimits

0xf069,	// (0x0004baba) slider_set_pane_copy1

0x7f3f,	// (0x00044990) set_opt_bg_pane_g1_copy2

0x7f47,	// (0x00044998) set_opt_bg_pane_g2_copy2

0xf07f,	// (0x0004bad0) set_opt_bg_pane_g3_copy2

0x7f57,	// (0x000449a8) set_opt_bg_pane_g4_copy2

0x7f5f,	// (0x000449b0) set_opt_bg_pane_g5_copy2

0x7f67,	// (0x000449b8) set_opt_bg_pane_g6_copy2

0xf089,	// (0x0004bada) set_opt_bg_pane_g7_copy2

0xf093,	// (0x0004bae4) set_opt_bg_pane_g8_copy2

0xf09d,	// (0x0004baee) set_opt_bg_pane_g9_copy2

0xf0a7,	// (0x0004baf8) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0a7,	// (0x0004baf8) aid_size_touch_slider_mark_copy1

0xf0bb,	// (0x0004bb0c) slider_set_pane_g1_copy1

0xf0c4,	// (0x0004bb15) slider_set_pane_g2_copy1

0xb4f3,	// (0x00047f44) slider_set_pane_g3_copy1_ParamLimits

0xb4f3,	// (0x00047f44) slider_set_pane_g3_copy1

0xb507,	// (0x00047f58) slider_set_pane_g4_copy1_ParamLimits

0xb507,	// (0x00047f58) slider_set_pane_g4_copy1

0xb51f,	// (0x00047f70) slider_set_pane_g5_copy1_ParamLimits

0xb51f,	// (0x00047f70) slider_set_pane_g5_copy1

0xb4f3,	// (0x00047f44) slider_set_pane_g6_copy1_ParamLimits

0xb4f3,	// (0x00047f44) slider_set_pane_g6_copy1

0xf0cc,	// (0x0004bb1d) slider_set_pane_g7_copy1_ParamLimits

0xf0cc,	// (0x0004bb1d) slider_set_pane_g7_copy1

0x2ae4,	// (0x0003f535) bg_set_opt_pane_cp2_copy1

0xf0e2,	// (0x0004bb33) setting_slider_graphic_pane_g1_copy1

0xf0eb,	// (0x0004bb3c) setting_slider_graphic_pane_t1_copy1

0xf0fb,	// (0x0004bb4c) setting_slider_graphic_pane_t2_copy1

0xf10b,	// (0x0004bb5c) slider_set_pane_cp_copy1

0xf11b,	// (0x0004bb6c) input_focus_pane_cp1_copy1

0xf124,	// (0x0004bb75) list_set_text_pane_copy1

0xf12c,	// (0x0004bb7d) setting_text_pane_g1_copy1

0x4aee,	// (0x0004153f) set_text_pane_t1_copy1

0xf11b,	// (0x0004bb6c) input_focus_pane_cp2_copy1

0xf12c,	// (0x0004bb7d) setting_code_pane_g1_copy1

0xf135,	// (0x0004bb86) setting_code_pane_t1_copy1

0xf143,	// (0x0004bb94) list_set_graphic_pane_copy1

0x2ae4,	// (0x0003f535) bg_set_opt_pane_cp4_copy1

0x8830,	// (0x00045281) list_set_graphic_pane_g1_copy1_ParamLimits

0x8830,	// (0x00045281) list_set_graphic_pane_g1_copy1

0xf155,	// (0x0004bba6) list_set_graphic_pane_g2_copy1

0x8848,	// (0x00045299) list_set_graphic_pane_t1_copy1_ParamLimits

0x8848,	// (0x00045299) list_set_graphic_pane_t1_copy1

0xc0a2,	// (0x00048af3) rs_clock_indi_pane_g1

0xf15d,	// (0x0004bbae) rs_clock_indi_pane_t1

0xf16b,	// (0x0004bbbc) rs_indi_pane

0xf173,	// (0x0004bbc4) rs_indi_pane_g1

0xf17c,	// (0x0004bbcd) rs_indi_pane_g2

0xf185,	// (0x0004bbd6) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0004c926) rs_indi_pane_g

0x8b36,	// (0x00045587) bg_popup_preview_window_pane_cp03

0xf18e,	// (0x0004bbdf) popup_fep_tooltip_window_t1

0xcd56,	// (0x000497a7) popup_note2_window_g2_ParamLimits

0xcd56,	// (0x000497a7) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0004c6bf) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0004c6bf) popup_note2_window_g

0xd25e,	// (0x00049caf) bg_popup_sub_pane_cp11_ParamLimits

0xd26b,	// (0x00049cbc) cell_ai3_links_pane_g1_ParamLimits

0xd282,	// (0x00049cd3) cell_ai3_links_pane_t1

0x4aee,	// (0x0004153f) set_text_pane_t1_copy1_ParamLimits

0x8a43,	// (0x00045494) cell_graphic_popup_pane_cp2_ParamLimits

0x8a43,	// (0x00045494) cell_graphic_popup_pane_cp2

0xf19c,	// (0x0004bbed) cell_graphic_popup_pane_g1_cp2

0x7c23,	// (0x00044674) cell_graphic_popup_pane_g2_cp2

0xf1a4,	// (0x0004bbf5) cell_graphic_popup_pane_g3_cp2

0xf1ac,	// (0x0004bbfd) cell_graphic_popup_pane_t2_cp2

0x7c34,	// (0x00044685) grid_highlight_pane_cp3_cp2

0x828b,	// (0x00044cdc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7ed8,	// (0x00044929) main_tmo_pane_ParamLimits

0xd5a2,	// (0x00049ff3) popup_tmo_big_image_note_window

0xe647,	// (0x0004b098) cell_ai5_widget_list_pane

0xe64f,	// (0x0004b0a0) cell_ai5_widget_lrg_icon_pane

0xeccc,	// (0x0004b71d) tmo_note_info_pane_t1_ParamLimits

0xece1,	// (0x0004b732) tmo_note_info_pane_t2_ParamLimits

0xecfa,	// (0x0004b74b) tmo_note_info_pane_t3_ParamLimits

0xed0f,	// (0x0004b760) tmo_note_info_pane_t4_ParamLimits

0xed21,	// (0x0004b772) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0004c914) tmo_note_info_pane_t_ParamLimits

0xee57,	// (0x0004b8a8) settings_container_pane_ParamLimits

0xf113,	// (0x0004bb64) indicator_popup_pane_cp5

0xf113,	// (0x0004bb64) indicator_popup_pane_cp6

0xf143,	// (0x0004bb94) list_set_graphic_pane_copy1_ParamLimits

0x2ad0,	// (0x0003f521) bg_popup_window_pane_cp23

0xf1ba,	// (0x0004bc0b) popup_tmo_big_image_note_window_g1

0xf1c6,	// (0x0004bc17) popup_tmo_big_image_note_window_t1

0xf1d6,	// (0x0004bc27) popup_tmo_big_image_note_window_t2

0xf1e6,	// (0x0004bc37) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0004c92d) popup_tmo_big_image_note_window_t

0xf1f6,	// (0x0004bc47) cell_ai5_widget_lrg_icon_pane_g1

0xf1fe,	// (0x0004bc4f) cell_ai5_widget_lrg_icon_pane_t1

0xf20c,	// (0x0004bc5d) cell_ai5_widget_list_row_pane_ParamLimits

0xf20c,	// (0x0004bc5d) cell_ai5_widget_list_row_pane

0xf225,	// (0x0004bc76) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf225,	// (0x0004bc76) cell_ai5_widget_list_row_pane_g1

0xf232,	// (0x0004bc83) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf232,	// (0x0004bc83) cell_ai5_widget_list_row_pane_t1

0xf24a,	// (0x0004bc9b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf24a,	// (0x0004bc9b) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee3,	// (0x0004c934) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0004c934) cell_ai5_widget_list_row_pane_t

0x2ad0,	// (0x0003f521) main_fep_vtchi_ss_pane

0xf25c,	// (0x0004bcad) popup_fep_char_pre_window

0xf264,	// (0x0004bcb5) popup_fep_ituss_window

0xf285,	// (0x0004bcd6) popup_fep_vkbss_window

0xf2a6,	// (0x0004bcf7) grid_vkbss_keypad_pane_ParamLimits

0xf2a6,	// (0x0004bcf7) grid_vkbss_keypad_pane

0xf2b6,	// (0x0004bd07) ituss_keypad_pane

0xf2cf,	// (0x0004bd20) aid_vkbss_key_offset_ParamLimits

0xf2cf,	// (0x0004bd20) aid_vkbss_key_offset

0xf2db,	// (0x0004bd2c) cell_vkbss_key_pane_ParamLimits

0xf2db,	// (0x0004bd2c) cell_vkbss_key_pane

0xf2f1,	// (0x0004bd42) bg_cell_vkbss_key_g1_ParamLimits

0xf2f1,	// (0x0004bd42) bg_cell_vkbss_key_g1

0xf2fd,	// (0x0004bd4e) cell_vkbss_key_3p_pane_ParamLimits

0xf2fd,	// (0x0004bd4e) cell_vkbss_key_3p_pane

0xf317,	// (0x0004bd68) cell_vkbss_key_g1_ParamLimits

0xf317,	// (0x0004bd68) cell_vkbss_key_g1

0xf331,	// (0x0004bd82) cell_vkbss_key_t1_ParamLimits

0xf331,	// (0x0004bd82) cell_vkbss_key_t1

0xf35c,	// (0x0004bdad) cell_ituss_key_pane_ParamLimits

0xf35c,	// (0x0004bdad) cell_ituss_key_pane

0xf36c,	// (0x0004bdbd) bg_cell_ituss_key_g1_ParamLimits

0xf36c,	// (0x0004bdbd) bg_cell_ituss_key_g1

0xf378,	// (0x0004bdc9) cell_ituss_key_pane_g1_ParamLimits

0xf378,	// (0x0004bdc9) cell_ituss_key_pane_g1

0xf384,	// (0x0004bdd5) cell_ituss_key_pane_g2_ParamLimits

0xf384,	// (0x0004bdd5) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x0004c939) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x0004c939) cell_ituss_key_pane_g

0xf3a0,	// (0x0004bdf1) cell_ituss_key_t1_ParamLimits

0xf3a0,	// (0x0004bdf1) cell_ituss_key_t1

0xf3ce,	// (0x0004be1f) cell_ituss_key_t2_ParamLimits

0xf3ce,	// (0x0004be1f) cell_ituss_key_t2

0xf3ff,	// (0x0004be50) cell_ituss_key_t3_ParamLimits

0xf3ff,	// (0x0004be50) cell_ituss_key_t3

0xf430,	// (0x0004be81) cell_ituss_key_t4_ParamLimits

0xf430,	// (0x0004be81) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x0004c93e) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0004c93e) cell_ituss_key_t

0xf461,	// (0x0004beb2) cell_vkbss_key_3p_pane_g1

0xf469,	// (0x0004beba) cell_vkbss_key_3p_pane_g2

0xf471,	// (0x0004bec2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0004c947) cell_vkbss_key_3p_pane_g

0x2ad0,	// (0x0003f521) bg_popup_fep_char_preview_window_cp02

0xf479,	// (0x0004beca) popup_fep_char_pre_window_t1

0xe61d,	// (0x0004b06e) main_ai5_sk_pane

0xed9b,	// (0x0004b7ec) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda7,	// (0x0004b7f8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedbb,	// (0x0004b80c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedca,	// (0x0004b81b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x0004c91f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeddd,	// (0x0004b82e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7ed8,	// (0x00044929) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf488,	// (0x0004bed9) main_ai5_sk_pane_g1

0x9eda,	// (0x0004692b) popup_query_code_window_g1

0xf27a,	// (0x0004bccb) popup_fep_vkb_icf_pane

0xf290,	// (0x0004bce1) popup_fep_vtchi_icf_pane

0x7ed8,	// (0x00044929) bg_icf_pane

0xf4a0,	// (0x0004bef1) list_vkb_icf_pane

0x7ed8,	// (0x00044929) bg_icf_pane_cp01

0xd561,	// (0x00049fb2) vtchi_icf_list_pane

0xf4c0,	// (0x0004bf11) list_vkb_icf_pane_t1_ParamLimits

0xf4c0,	// (0x0004bf11) list_vkb_icf_pane_t1

0xf4d7,	// (0x0004bf28) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x0004bf28) vtchi_icf_list_pane_t1

0xf264,	// (0x0004bcb5) popup_fep_ituss_window_ParamLimits

0xf290,	// (0x0004bce1) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b6,	// (0x0004bd07) ituss_keypad_pane_ParamLimits

0xf2c6,	// (0x0004bd17) ituss_sks_pane

0x7ed8,	// (0x00044929) bg_icf_pane_ParamLimits

0xf491,	// (0x0004bee2) icf_edit_indi_pane_ParamLimits

0xf491,	// (0x0004bee2) icf_edit_indi_pane

0xf4a0,	// (0x0004bef1) list_vkb_icf_pane_ParamLimits

0x7ed8,	// (0x00044929) bg_icf_pane_cp01_ParamLimits

0xf4ac,	// (0x0004befd) icf_edit_indi_pane_cp01_ParamLimits

0xf4ac,	// (0x0004befd) icf_edit_indi_pane_cp01

0xf4b8,	// (0x0004bf09) vtchi_query_pane

0xc32c,	// (0x00048d7d) icf_edit_indi_pane_g1_ParamLimits

0xc32c,	// (0x00048d7d) icf_edit_indi_pane_g1

0xf4f0,	// (0x0004bf41) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x0004bf41) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0004c94e) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0004c94e) icf_edit_indi_pane_g

0xf4fc,	// (0x0004bf4d) icf_edit_indi_pane_t1

0xf50a,	// (0x0004bf5b) bg_input_focus_pane_cp042

0x7e07,	// (0x00044858) vtchi_button_pane

0xf513,	// (0x0004bf64) vtchi_query_pane_t1

0xf521,	// (0x0004bf72) vtchi_query_pane_t2

0xf52f,	// (0x0004bf80) vtchi_query_pane_t3

0x0002,

0xff02,	// (0x0004c953) vtchi_query_pane_t

0x2ad0,	// (0x0003f521) bg_button_pane_cp13

0xf53d,	// (0x0004bf8e) vtchi_button_pane_g1

0xdacd,	// (0x0004a51e) ituss_sks_pane_g1

0xf545,	// (0x0004bf96) ituss_sks_pane_g2

0x0001,

0xff09,	// (0x0004c95a) ituss_sks_pane_g

0xf54e,	// (0x0004bf9f) ituss_sks_pane_t1

0xf55c,	// (0x0004bfad) ituss_sks_pane_t2

0x0001,

0xff0e,	// (0x0004c95f) ituss_sks_pane_t

0xbb49,	// (0x0004859a) indicator_nsta_pane_cp_g1

0xbb52,	// (0x000485a3) indicator_nsta_pane_cp_g2

0xbb5a,	// (0x000485ab) indicator_nsta_pane_cp_g3

0xbb62,	// (0x000485b3) indicator_nsta_pane_cp_g4

0xbb6a,	// (0x000485bb) indicator_nsta_pane_cp_g5

0xbb72,	// (0x000485c3) indicator_nsta_pane_cp_g6

0x0005,

0xfab8,	// (0x0004c509) indicator_nsta_pane_cp_g

0xe228,	// (0x0004ac79) cell_graphic2_pane_t2_ParamLimits

0xe228,	// (0x0004ac79) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0004c816) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0004c816) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large

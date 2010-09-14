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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002c863 };

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
0x78eb,	// (0x0003414e) Screen

0x78f7,	// (0x0003415a) application_window_ParamLimits

0x78f7,	// (0x0003415a) application_window

0x2f7c,	// (0x0002f7df) screen_g1

0x44e7,	// (0x00030d4a) area_bottom_pane_ParamLimits

0x44e7,	// (0x00030d4a) area_bottom_pane

0x45a7,	// (0x00030e0a) area_top_pane_ParamLimits

0x45a7,	// (0x00030e0a) area_top_pane

0x4645,	// (0x00030ea8) main_pane_ParamLimits

0x4645,	// (0x00030ea8) main_pane

0x7907,	// (0x0003416a) misc_graphics

0x9559,	// (0x00035dbc) battery_pane_ParamLimits

0x9559,	// (0x00035dbc) battery_pane

0xa23b,	// (0x00036a9e) bg_status_flat_pane_g8

0xa243,	// (0x00036aa6) bg_status_flat_pane_g9

0x9621,	// (0x00035e84) context_pane_ParamLimits

0x9621,	// (0x00035e84) context_pane

0x9737,	// (0x00035f9a) navi_pane_ParamLimits

0x9737,	// (0x00035f9a) navi_pane

0x97bb,	// (0x0003601e) signal_pane_ParamLimits

0x97bb,	// (0x0003601e) signal_pane

0x0008,

0xf854,	// (0x0003c0b7) bg_status_flat_pane_g

0x9828,	// (0x0003608b) status_pane_g1_ParamLimits

0x9828,	// (0x0003608b) status_pane_g1

0x983c,	// (0x0003609f) status_pane_g2_ParamLimits

0x983c,	// (0x0003609f) status_pane_g2

0x9848,	// (0x000360ab) status_pane_g3_ParamLimits

0x9848,	// (0x000360ab) status_pane_g3

0x0004,

0xf77b,	// (0x0003bfde) status_pane_g_ParamLimits

0xf77b,	// (0x0003bfde) status_pane_g

0x987c,	// (0x000360df) title_pane_ParamLimits

0x987c,	// (0x000360df) title_pane

0x98b9,	// (0x0003611c) uni_indicator_pane_ParamLimits

0x98b9,	// (0x0003611c) uni_indicator_pane

0x9489,	// (0x00035cec) bg_list_pane_ParamLimits

0x9489,	// (0x00035cec) bg_list_pane

0x5645,	// (0x00031ea8) find_pane

0x94a9,	// (0x00035d0c) listscroll_app_pane_ParamLimits

0x94a9,	// (0x00035d0c) listscroll_app_pane

0x94b5,	// (0x00035d18) listscroll_form_pane

0x441d,	// (0x00030c80) listscroll_gen_pane_ParamLimits

0x441d,	// (0x00030c80) listscroll_gen_pane

0x564d,	// (0x00031eb0) listscroll_set_pane

0x8468,	// (0x00034ccb) main_idle_act_pane

0x9185,	// (0x000359e8) main_idle_trad_pane

0x9185,	// (0x000359e8) main_list_empty_pane

0x94a9,	// (0x00035d0c) main_midp_pane

0x94cf,	// (0x00035d32) main_pane_g1_ParamLimits

0x94cf,	// (0x00035d32) main_pane_g1

0x5663,	// (0x00031ec6) popup_ai_message_window_ParamLimits

0x5663,	// (0x00031ec6) popup_ai_message_window

0x5711,	// (0x00031f74) popup_fep_china_uni_window_ParamLimits

0x5711,	// (0x00031f74) popup_fep_china_uni_window

0x576d,	// (0x00031fd0) popup_fep_japan_candidate_window_ParamLimits

0x576d,	// (0x00031fd0) popup_fep_japan_candidate_window

0x578d,	// (0x00031ff0) popup_fep_japan_predictive_window_ParamLimits

0x578d,	// (0x00031ff0) popup_fep_japan_predictive_window

0x57bd,	// (0x00032020) popup_find_window

0x57ca,	// (0x0003202d) popup_grid_graphic_window_ParamLimits

0x57ca,	// (0x0003202d) popup_grid_graphic_window

0x57f6,	// (0x00032059) popup_large_graphic_colour_window

0x581c,	// (0x0003207f) popup_menu_window_ParamLimits

0x581c,	// (0x0003207f) popup_menu_window

0x59d4,	// (0x00032237) popup_note_image_window

0x59c0,	// (0x00032223) popup_note_wait_window_ParamLimits

0x59c0,	// (0x00032223) popup_note_wait_window

0x59c0,	// (0x00032223) popup_note_window_ParamLimits

0x59c0,	// (0x00032223) popup_note_window

0x5a2a,	// (0x0003228d) popup_query_code_window_ParamLimits

0x5a2a,	// (0x0003228d) popup_query_code_window

0x5a3e,	// (0x000322a1) popup_query_data_code_window_ParamLimits

0x5a3e,	// (0x000322a1) popup_query_data_code_window

0x5a5b,	// (0x000322be) popup_query_data_window_ParamLimits

0x5a5b,	// (0x000322be) popup_query_data_window

0x5a77,	// (0x000322da) popup_query_sat_info_window_ParamLimits

0x5a77,	// (0x000322da) popup_query_sat_info_window

0x5ab0,	// (0x00032313) popup_snote_single_graphic_window_ParamLimits

0x5ab0,	// (0x00032313) popup_snote_single_graphic_window

0x5ab0,	// (0x00032313) popup_snote_single_text_window_ParamLimits

0x5ab0,	// (0x00032313) popup_snote_single_text_window

0x5ac5,	// (0x00032328) popup_sub_window_general

0x5bf5,	// (0x00032458) popup_window_general_ParamLimits

0x5bf5,	// (0x00032458) popup_window_general

0x94dd,	// (0x00035d40) power_save_pane

0x54d3,	// (0x00031d36) control_pane_g1_ParamLimits

0x54d3,	// (0x00031d36) control_pane_g1

0x54fa,	// (0x00031d5d) control_pane_g2_ParamLimits

0x54fa,	// (0x00031d5d) control_pane_g2

0x944c,	// (0x00035caf) control_pane_g3_ParamLimits

0x944c,	// (0x00035caf) control_pane_g3

0x0007,

0xf763,	// (0x0003bfc6) control_pane_g_ParamLimits

0xf763,	// (0x0003bfc6) control_pane_g

0x5544,	// (0x00031da7) control_pane_t1_ParamLimits

0x5544,	// (0x00031da7) control_pane_t1

0x559a,	// (0x00031dfd) control_pane_t2_ParamLimits

0x559a,	// (0x00031dfd) control_pane_t2

0x0002,

0xf774,	// (0x0003bfd7) control_pane_t_ParamLimits

0xf774,	// (0x0003bfd7) control_pane_t

0x9371,	// (0x00035bd4) navi_navi_volume_pane_cp1

0x9379,	// (0x00035bdc) status_small_icon_pane

0x9381,	// (0x00035be4) status_small_pane_g1_ParamLimits

0x9381,	// (0x00035be4) status_small_pane_g1

0x93b5,	// (0x00035c18) status_small_pane_g2_ParamLimits

0x93b5,	// (0x00035c18) status_small_pane_g2

0x93c1,	// (0x00035c24) status_small_pane_g3_ParamLimits

0x93c1,	// (0x00035c24) status_small_pane_g3

0x93cd,	// (0x00035c30) status_small_pane_g4_ParamLimits

0x93cd,	// (0x00035c30) status_small_pane_g4

0x93d9,	// (0x00035c3c) status_small_pane_g5_ParamLimits

0x93d9,	// (0x00035c3c) status_small_pane_g5

0x93e7,	// (0x00035c4a) status_small_pane_g6_ParamLimits

0x93e7,	// (0x00035c4a) status_small_pane_g6

0x0007,

0xf752,	// (0x0003bfb5) status_small_pane_g_ParamLimits

0xf752,	// (0x0003bfb5) status_small_pane_g

0x9416,	// (0x00035c79) status_small_pane_t1

0x9438,	// (0x00035c9b) status_small_wait_pane_ParamLimits

0x9438,	// (0x00035c9b) status_small_wait_pane

0x8beb,	// (0x0003544e) aid_levels_signal_ParamLimits

0x8beb,	// (0x0003544e) aid_levels_signal

0x8bfd,	// (0x00035460) signal_pane_g1_ParamLimits

0x8bfd,	// (0x00035460) signal_pane_g1

0x8c12,	// (0x00035475) signal_pane_g2_ParamLimits

0x8c12,	// (0x00035475) signal_pane_g2

0x0003,

0xf6e3,	// (0x0003bf46) signal_pane_g_ParamLimits

0xf6e3,	// (0x0003bf46) signal_pane_g

0x8c4d,	// (0x000354b0) context_pane_g1

0x7911,	// (0x00034174) title_pane_g1

0x7947,	// (0x000341aa) title_pane_t1

0x79af,	// (0x00034212) title_pane_t2

0x79d5,	// (0x00034238) title_pane_t3

0x0002,

0xf532,	// (0x0003bd95) title_pane_t

0x98d1,	// (0x00036134) aid_levels_battery_ParamLimits

0x98d1,	// (0x00036134) aid_levels_battery

0x98e5,	// (0x00036148) battery_pane_g1_ParamLimits

0x98e5,	// (0x00036148) battery_pane_g1

0x98fb,	// (0x0003615e) battery_pane_g2_ParamLimits

0x98fb,	// (0x0003615e) battery_pane_g2

0x0001,

0xf786,	// (0x0003bfe9) battery_pane_g_ParamLimits

0xf786,	// (0x0003bfe9) battery_pane_g

0xab7d,	// (0x000373e0) uni_indicator_pane_g1

0xab93,	// (0x000373f6) uni_indicator_pane_g2

0xaba9,	// (0x0003740c) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0003c15f) uni_indicator_pane_g

0x8fee,	// (0x00035851) navi_icon_pane_ParamLimits

0x8fee,	// (0x00035851) navi_icon_pane

0x8f2c,	// (0x0003578f) navi_midp_pane

0x900a,	// (0x0003586d) navi_navi_pane

0x9014,	// (0x00035877) navi_text_pane_ParamLimits

0x9014,	// (0x00035877) navi_text_pane

0x2f7c,	// (0x0002f7df) status_small_wait_pane_g1

0x7e2a,	// (0x0003468d) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0003c15a) status_small_wait_pane_g

0xa8a2,	// (0x00037105) navi_navi_icon_text_pane

0xa8aa,	// (0x0003710d) navi_navi_pane_g1_ParamLimits

0xa8aa,	// (0x0003710d) navi_navi_pane_g1

0xa8bc,	// (0x0003711f) navi_navi_pane_g2_ParamLimits

0xa8bc,	// (0x0003711f) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0003c128) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0003c128) navi_navi_pane_g

0xa8ce,	// (0x00037131) navi_navi_tabs_pane

0xa8d7,	// (0x0003713a) navi_navi_text_pane

0xa8a2,	// (0x00037105) navi_navi_volume_pane

0xa87e,	// (0x000370e1) navi_text_pane_t1

0xa872,	// (0x000370d5) navi_icon_pane_g1

0xa7c5,	// (0x00037028) navi_navi_text_pane_t1

0x5fd2,	// (0x00032835) navi_navi_volume_pane_g1

0x5fda,	// (0x0003283d) volume_small_pane

0xa71f,	// (0x00036f82) navi_navi_icon_text_pane_g1

0xa727,	// (0x00036f8a) navi_navi_icon_text_pane_t1

0x900a,	// (0x0003586d) navi_tabs_2_long_pane

0x900a,	// (0x0003586d) navi_tabs_2_pane

0x900a,	// (0x0003586d) navi_tabs_3_long_pane

0x900a,	// (0x0003586d) navi_tabs_3_pane

0x900a,	// (0x0003586d) navi_tabs_4_pane

0x5fb2,	// (0x00032815) tabs_2_active_pane_ParamLimits

0x5fb2,	// (0x00032815) tabs_2_active_pane

0x5fc2,	// (0x00032825) tabs_2_passive_pane_ParamLimits

0x5fc2,	// (0x00032825) tabs_2_passive_pane

0x5f80,	// (0x000327e3) tabs_3_active_pane_ParamLimits

0x5f80,	// (0x000327e3) tabs_3_active_pane

0x5f90,	// (0x000327f3) tabs_3_passive_pane_ParamLimits

0x5f90,	// (0x000327f3) tabs_3_passive_pane

0x5fa1,	// (0x00032804) tabs_3_passive_pane_cp_ParamLimits

0x5fa1,	// (0x00032804) tabs_3_passive_pane_cp

0x5f3c,	// (0x0003279f) tabs_4_active_pane_ParamLimits

0x5f3c,	// (0x0003279f) tabs_4_active_pane

0x5f4d,	// (0x000327b0) tabs_4_passive_pane_ParamLimits

0x5f4d,	// (0x000327b0) tabs_4_passive_pane

0x5f5e,	// (0x000327c1) tabs_4_passive_pane_cp_ParamLimits

0x5f5e,	// (0x000327c1) tabs_4_passive_pane_cp

0x5f6f,	// (0x000327d2) tabs_4_passive_pane_cp2_ParamLimits

0x5f6f,	// (0x000327d2) tabs_4_passive_pane_cp2

0x5f18,	// (0x0003277b) tabs_2_long_active_pane_ParamLimits

0x5f18,	// (0x0003277b) tabs_2_long_active_pane

0x5f2a,	// (0x0003278d) tabs_2_long_passive_pane_ParamLimits

0x5f2a,	// (0x0003278d) tabs_2_long_passive_pane

0x5ed9,	// (0x0003273c) tabs_3_long_active_pane_ParamLimits

0x5ed9,	// (0x0003273c) tabs_3_long_active_pane

0x5eec,	// (0x0003274f) tabs_3_long_passive_pane_ParamLimits

0x5eec,	// (0x0003274f) tabs_3_long_passive_pane

0x5f05,	// (0x00032768) tabs_3_long_passive_pane_cp_ParamLimits

0x5f05,	// (0x00032768) tabs_3_long_passive_pane_cp

0x5e7f,	// (0x000326e2) volume_small_pane_g1

0x5e88,	// (0x000326eb) volume_small_pane_g2

0x5e91,	// (0x000326f4) volume_small_pane_g3

0x5e9a,	// (0x000326fd) volume_small_pane_g4

0x5ea3,	// (0x00032706) volume_small_pane_g5

0x5eac,	// (0x0003270f) volume_small_pane_g6

0x5eb5,	// (0x00032718) volume_small_pane_g7

0x5ebe,	// (0x00032721) volume_small_pane_g8

0x5ec7,	// (0x0003272a) volume_small_pane_g9

0x5ed0,	// (0x00032733) volume_small_pane_g10

0x0009,

0xf891,	// (0x0003c0f4) volume_small_pane_g

0x79e7,	// (0x0003424a) bg_active_tab_pane_cp2_ParamLimits

0x79e7,	// (0x0003424a) bg_active_tab_pane_cp2

0x79f5,	// (0x00034258) tabs_3_active_pane_g1

0x79fd,	// (0x00034260) tabs_3_active_pane_t1

0x79e7,	// (0x0003424a) bg_passive_tab_pane_cp2_ParamLimits

0x79e7,	// (0x0003424a) bg_passive_tab_pane_cp2

0x79f5,	// (0x00034258) tabs_3_passive_pane_g1

0x79fd,	// (0x00034260) tabs_3_passive_pane_t1

0x79e7,	// (0x0003424a) bg_active_tab_pane_cp3_ParamLimits

0x79e7,	// (0x0003424a) bg_active_tab_pane_cp3

0x7a0f,	// (0x00034272) tabs_4_active_pane_g1

0x7a17,	// (0x0003427a) tabs_4_active_pane_t1

0x79e7,	// (0x0003424a) bg_passive_tab_pane_cp3_ParamLimits

0x79e7,	// (0x0003424a) bg_passive_tab_pane_cp3

0x7a0f,	// (0x00034272) tabs_4_1_passive_pane_g1

0x7a17,	// (0x0003427a) tabs_4_1_passive_pane_t1

0x94a9,	// (0x00035d0c) list_highlight_pane_cp2

0xadf0,	// (0x00037653) list_set_pane_ParamLimits

0xadf0,	// (0x00037653) list_set_pane

0xae96,	// (0x000376f9) main_pane_set_t1_ParamLimits

0xae96,	// (0x000376f9) main_pane_set_t1

0xaeb6,	// (0x00037719) main_pane_set_t2_ParamLimits

0xaeb6,	// (0x00037719) main_pane_set_t2

0xaeca,	// (0x0003772d) main_pane_set_t3_ParamLimits

0xaeca,	// (0x0003772d) main_pane_set_t3

0xaedc,	// (0x0003773f) main_pane_set_t4_ParamLimits

0xaedc,	// (0x0003773f) main_pane_set_t4

0x0003,

0xf961,	// (0x0003c1c4) main_pane_set_t_ParamLimits

0xf961,	// (0x0003c1c4) main_pane_set_t

0xaeee,	// (0x00037751) setting_code_pane

0xaefa,	// (0x0003775d) setting_slider_graphic_pane

0xaefa,	// (0x0003775d) setting_slider_pane

0xaefa,	// (0x0003775d) setting_text_pane

0xaefa,	// (0x0003775d) setting_volume_pane

0x4894,	// (0x000310f7) volume_set_pane

0x79e7,	// (0x0003424a) bg_set_opt_pane_cp

0x489c,	// (0x000310ff) setting_slider_pane_t1

0x48b5,	// (0x00031118) setting_slider_pane_t2

0x48cf,	// (0x00031132) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0003bd9c) setting_slider_pane_t

0x48e7,	// (0x0003114a) slider_set_pane

0x7907,	// (0x0003416a) bg_set_opt_pane_cp2

0x7a29,	// (0x0003428c) setting_slider_graphic_pane_g1

0x48fd,	// (0x00031160) setting_slider_graphic_pane_t1

0x490d,	// (0x00031170) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0003bda3) setting_slider_graphic_pane_t

0x491d,	// (0x00031180) slider_set_pane_cp

0x7907,	// (0x0003416a) input_focus_pane_cp1

0xadaf,	// (0x00037612) list_set_text_pane

0x2f7c,	// (0x0002f7df) setting_text_pane_g1

0x7907,	// (0x0003416a) input_focus_pane_cp2

0x2f7c,	// (0x0002f7df) setting_code_pane_g1

0x7a32,	// (0x00034295) setting_code_pane_t1

0x39b7,	// (0x0003021a) set_text_pane_t1_ParamLimits

0x39b7,	// (0x0003021a) set_text_pane_t1

0x82cc,	// (0x00034b2f) set_opt_bg_pane_g1

0x82d4,	// (0x00034b37) set_opt_bg_pane_g2

0xad89,	// (0x000375ec) set_opt_bg_pane_g3

0x82e4,	// (0x00034b47) set_opt_bg_pane_g4

0x82ec,	// (0x00034b4f) set_opt_bg_pane_g5

0x82f4,	// (0x00034b57) set_opt_bg_pane_g6

0xad93,	// (0x000375f6) set_opt_bg_pane_g7

0xad9b,	// (0x000375fe) set_opt_bg_pane_g8

0xada5,	// (0x00037608) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0003c1b1) set_opt_bg_pane_g

0xad7c,	// (0x000375df) slider_set_pane_g1

0x606f,	// (0x000328d2) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0003c1a2) slider_set_pane_g

0x5fe3,	// (0x00032846) volume_set_pane_g1

0x5feb,	// (0x0003284e) volume_set_pane_g2

0x5ff3,	// (0x00032856) volume_set_pane_g3

0x5ffb,	// (0x0003285e) volume_set_pane_g4

0x6003,	// (0x00032866) volume_set_pane_g5

0x600b,	// (0x0003286e) volume_set_pane_g6

0x6013,	// (0x00032876) volume_set_pane_g7

0x601b,	// (0x0003287e) volume_set_pane_g8

0x6023,	// (0x00032886) volume_set_pane_g9

0x602b,	// (0x0003288e) volume_set_pane_g10

0x0009,

0xf917,	// (0x0003c17a) volume_set_pane_g

0x7a40,	// (0x000342a3) indicator_pane_ParamLimits

0x7a40,	// (0x000342a3) indicator_pane

0x7a4c,	// (0x000342af) main_idle_pane_g2_ParamLimits

0x7a4c,	// (0x000342af) main_idle_pane_g2

0x7a74,	// (0x000342d7) main_pane_idle_g1_ParamLimits

0x7a74,	// (0x000342d7) main_pane_idle_g1

0x7a81,	// (0x000342e4) popup_clock_digital_analogue_window_ParamLimits

0x7a81,	// (0x000342e4) popup_clock_digital_analogue_window

0x7a98,	// (0x000342fb) soft_indicator_pane_ParamLimits

0x7a98,	// (0x000342fb) soft_indicator_pane

0x7aa4,	// (0x00034307) wallpaper_pane_ParamLimits

0x7aa4,	// (0x00034307) wallpaper_pane

0x2f7c,	// (0x0002f7df) wallpaper_pane_g1

0x7ab8,	// (0x0003431b) indicator_pane_g1_ParamLimits

0x7ab8,	// (0x0003431b) indicator_pane_g1

0xb1ca,	// (0x00037a2d) navi_navi_icon_text_pane_srt_g1

0x7ad3,	// (0x00034336) soft_indicator_pane_t1

0x7aed,	// (0x00034350) aid_ps_area_pane

0x7afe,	// (0x00034361) aid_ps_clock_pane

0x7b0c,	// (0x0003436f) aid_ps_indicator_pane

0x7b18,	// (0x0003437b) indicator_ps_pane_ParamLimits

0x7b18,	// (0x0003437b) indicator_ps_pane

0x7b27,	// (0x0003438a) power_save_pane_g1_ParamLimits

0x7b27,	// (0x0003438a) power_save_pane_g1

0x7b33,	// (0x00034396) power_save_pane_g2_ParamLimits

0x7b33,	// (0x00034396) power_save_pane_g2

0x449b,	// (0x00030cfe) aid_navinavi_width_pane

0x7aed,	// (0x00034350) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0003bda8) power_save_pane_g_ParamLimits

0xf545,	// (0x0003bda8) power_save_pane_g

0x7b41,	// (0x000343a4) power_save_pane_t1_ParamLimits

0x7b41,	// (0x000343a4) power_save_pane_t1

0x7afe,	// (0x00034361) aid_ps_clock_pane_ParamLimits

0x7b0c,	// (0x0003436f) aid_ps_indicator_pane_ParamLimits

0x7b53,	// (0x000343b6) power_save_pane_t4_ParamLimits

0x7b53,	// (0x000343b6) power_save_pane_t4

0x0001,

0xf54a,	// (0x0003bdad) power_save_pane_t_ParamLimits

0xf54a,	// (0x0003bdad) power_save_pane_t

0x7b7d,	// (0x000343e0) power_save_t3_ParamLimits

0x7b7d,	// (0x000343e0) power_save_t3

0x7b68,	// (0x000343cb) power_save_t2_ParamLimits

0x7b68,	// (0x000343cb) power_save_t2

0x7b92,	// (0x000343f5) indicator_ps_pane_g1

0x7b9b,	// (0x000343fe) ai_gene_pane_ParamLimits

0x7b9b,	// (0x000343fe) ai_gene_pane

0x7ba7,	// (0x0003440a) ai_links_pane_ParamLimits

0x7ba7,	// (0x0003440a) ai_links_pane

0x7bb3,	// (0x00034416) indicator_pane_cp1_ParamLimits

0x7bb3,	// (0x00034416) indicator_pane_cp1

0x7bbf,	// (0x00034422) main_pane_idle_g1_cp_ParamLimits

0x7bbf,	// (0x00034422) main_pane_idle_g1_cp

0x7bcb,	// (0x0003442e) popup_ai_links_title_window

0x7bd4,	// (0x00034437) soft_indicator_pane_cp1_ParamLimits

0x7bd4,	// (0x00034437) soft_indicator_pane_cp1

0xab6b,	// (0x000373ce) ai_links_pane_g1

0xab74,	// (0x000373d7) grid_ai_links_pane

0xab4e,	// (0x000373b1) ai_gene_pane_1

0xab59,	// (0x000373bc) ai_gene_pane_2

0xab62,	// (0x000373c5) list_highlight_pane_cp4

0xab32,	// (0x00037395) cell_ai_link_pane_ParamLimits

0xab32,	// (0x00037395) cell_ai_link_pane

0xab2a,	// (0x0003738d) cell_ai_link_pane_g1

0x7e2a,	// (0x0003468d) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0003c155) cell_ai_link_pane_g

0x7907,	// (0x0003416a) grid_highlight_cp2

0x7907,	// (0x0003416a) bg_popup_sub_pane_cp1

0x7bee,	// (0x00034451) popup_ai_links_title_window_t1

0xaa78,	// (0x000372db) ai_gene_pane_1_g1_ParamLimits

0xaa78,	// (0x000372db) ai_gene_pane_1_g1

0xaa84,	// (0x000372e7) ai_gene_pane_1_g2_ParamLimits

0xaa84,	// (0x000372e7) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0003c14b) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0003c14b) ai_gene_pane_1_g

0xaa91,	// (0x000372f4) ai_gene_pane_1_t1_ParamLimits

0xaa91,	// (0x000372f4) ai_gene_pane_1_t1

0xaac5,	// (0x00037328) grid_ai_soft_ind_pane

0xaa63,	// (0x000372c6) ai_gene_pane_2_t1_ParamLimits

0xaa63,	// (0x000372c6) ai_gene_pane_2_t1

0x7bfd,	// (0x00034460) main_pane_empty_t1_ParamLimits

0x7bfd,	// (0x00034460) main_pane_empty_t1

0x7c15,	// (0x00034478) main_pane_empty_t2_ParamLimits

0x7c15,	// (0x00034478) main_pane_empty_t2

0x7c2a,	// (0x0003448d) main_pane_empty_t3_ParamLimits

0x7c2a,	// (0x0003448d) main_pane_empty_t3

0x7c3c,	// (0x0003449f) main_pane_empty_t4_ParamLimits

0x7c3c,	// (0x0003449f) main_pane_empty_t4

0x7c4e,	// (0x000344b1) main_pane_empty_t5_ParamLimits

0x7c4e,	// (0x000344b1) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0003bdb2) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0003bdb2) main_pane_empty_t

0x8393,	// (0x00034bf6) bg_popup_window_pane_ParamLimits

0x8393,	// (0x00034bf6) bg_popup_window_pane

0xa7d3,	// (0x00037036) find_popup_pane_cp2_ParamLimits

0xa7d3,	// (0x00037036) find_popup_pane_cp2

0xa7df,	// (0x00037042) heading_pane_ParamLimits

0xa7df,	// (0x00037042) heading_pane

0x7907,	// (0x0003416a) bg_popup_sub_pane

0xa741,	// (0x00036fa4) bg_popup_window_pane_g1_ParamLimits

0xa741,	// (0x00036fa4) bg_popup_window_pane_g1

0xa74d,	// (0x00036fb0) bg_popup_window_pane_g2_ParamLimits

0xa74d,	// (0x00036fb0) bg_popup_window_pane_g2

0xa759,	// (0x00036fbc) bg_popup_window_pane_g3_ParamLimits

0xa759,	// (0x00036fbc) bg_popup_window_pane_g3

0xa765,	// (0x00036fc8) bg_popup_window_pane_g4_ParamLimits

0xa765,	// (0x00036fc8) bg_popup_window_pane_g4

0xa771,	// (0x00036fd4) bg_popup_window_pane_g5_ParamLimits

0xa771,	// (0x00036fd4) bg_popup_window_pane_g5

0xa77d,	// (0x00036fe0) bg_popup_window_pane_g6_ParamLimits

0xa77d,	// (0x00036fe0) bg_popup_window_pane_g6

0xa795,	// (0x00036ff8) bg_popup_window_pane_g7_ParamLimits

0xa795,	// (0x00036ff8) bg_popup_window_pane_g7

0xa7a1,	// (0x00037004) bg_popup_window_pane_g8_ParamLimits

0xa7a1,	// (0x00037004) bg_popup_window_pane_g8

0xa7ad,	// (0x00037010) bg_popup_window_pane_g9_ParamLimits

0xa7ad,	// (0x00037010) bg_popup_window_pane_g9

0xa7b9,	// (0x0003701c) bg_popup_window_pane_g10_ParamLimits

0xa7b9,	// (0x0003701c) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0003c113) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0003c113) bg_popup_window_pane_g

0xa6d6,	// (0x00036f39) bg_popup_heading_pane_ParamLimits

0xa6d6,	// (0x00036f39) bg_popup_heading_pane

0x61e5,	// (0x00032a48) tabs_4_passive_pane_cp_srt_ParamLimits

0x61e5,	// (0x00032a48) tabs_4_passive_pane_cp_srt

0x61f7,	// (0x00032a5a) tabs_4_passive_pane_srt_ParamLimits

0xa6ea,	// (0x00036f4d) heading_pane_g2

0x61f7,	// (0x00032a5a) tabs_4_passive_pane_srt

0x94a9,	// (0x00035d0c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94a9,	// (0x00035d0c) bg_passive_tab_pane_cp3_srt

0xa6f2,	// (0x00036f55) heading_pane_t1_ParamLimits

0xa6f2,	// (0x00036f55) heading_pane_t1

0xa709,	// (0x00036f6c) heading_pane_t2_ParamLimits

0xa709,	// (0x00036f6c) heading_pane_t2

0x0001,

0xf8ab,	// (0x0003c10e) heading_pane_t_ParamLimits

0xf8ab,	// (0x0003c10e) heading_pane_t

0xa203,	// (0x00036a66) bg_popup_heading_pane_g1

0xa2b2,	// (0x00036b15) bg_popup_heading_pane_g2

0xa2bc,	// (0x00036b1f) bg_popup_heading_pane_g3

0xa2c6,	// (0x00036b29) bg_popup_heading_pane_g4

0xa2d0,	// (0x00036b33) bg_popup_heading_pane_g5

0xa2da,	// (0x00036b3d) bg_popup_heading_pane_g6

0xa2e2,	// (0x00036b45) bg_popup_heading_pane_g7

0xa2ea,	// (0x00036b4d) bg_popup_heading_pane_g8

0xa2f4,	// (0x00036b57) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0003c0ca) bg_popup_heading_pane_g

0x99d3,	// (0x00036236) bg_popup_sub_pane_g1

0x99e3,	// (0x00036246) bg_popup_sub_pane_g2

0x99db,	// (0x0003623e) bg_popup_sub_pane_g3

0x99f3,	// (0x00036256) bg_popup_sub_pane_g4

0x99eb,	// (0x0003624e) bg_popup_sub_pane_g5

0x99fb,	// (0x0003625e) bg_popup_sub_pane_g6

0x9a03,	// (0x00036266) bg_popup_sub_pane_g7

0x9a13,	// (0x00036276) bg_popup_sub_pane_g8

0x9a0b,	// (0x0003626e) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0003c0a4) bg_popup_sub_pane_g

0x7c62,	// (0x000344c5) bg_popup_window_pane_cp5_ParamLimits

0x7c62,	// (0x000344c5) bg_popup_window_pane_cp5

0x7c7e,	// (0x000344e1) popup_note_window_g1_ParamLimits

0x7c7e,	// (0x000344e1) popup_note_window_g1

0x7c8a,	// (0x000344ed) popup_note_window_t1_ParamLimits

0x7c8a,	// (0x000344ed) popup_note_window_t1

0x7ca0,	// (0x00034503) popup_note_window_t2_ParamLimits

0x7ca0,	// (0x00034503) popup_note_window_t2

0x7cb6,	// (0x00034519) popup_note_window_t3_ParamLimits

0x7cb6,	// (0x00034519) popup_note_window_t3

0x7ccc,	// (0x0003452f) popup_note_window_t4_ParamLimits

0x7ccc,	// (0x0003452f) popup_note_window_t4

0x7cf4,	// (0x00034557) popup_note_window_t5_ParamLimits

0x7cf4,	// (0x00034557) popup_note_window_t5

0x0004,

0xf55a,	// (0x0003bdbd) popup_note_window_t_ParamLimits

0xf55a,	// (0x0003bdbd) popup_note_window_t

0x7d3e,	// (0x000345a1) bg_popup_window_pane_cp6_ParamLimits

0x7d3e,	// (0x000345a1) bg_popup_window_pane_cp6

0xa17f,	// (0x000369e2) popup_note_image_window_g1_ParamLimits

0xa17f,	// (0x000369e2) popup_note_image_window_g1

0xa18b,	// (0x000369ee) popup_note_image_window_g2_ParamLimits

0xa18b,	// (0x000369ee) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0003c098) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0003c098) popup_note_image_window_g

0xa1a4,	// (0x00036a07) popup_note_image_window_t1_ParamLimits

0xa1a4,	// (0x00036a07) popup_note_image_window_t1

0xa1bd,	// (0x00036a20) popup_note_image_window_t2_ParamLimits

0xa1bd,	// (0x00036a20) popup_note_image_window_t2

0xa1d6,	// (0x00036a39) popup_note_image_window_t3_ParamLimits

0xa1d6,	// (0x00036a39) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0003c09d) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0003c09d) popup_note_image_window_t

0xa040,	// (0x000368a3) bg_popup_window_pane_cp7_ParamLimits

0xa040,	// (0x000368a3) bg_popup_window_pane_cp7

0xa070,	// (0x000368d3) popup_note_wait_window_g1_ParamLimits

0xa070,	// (0x000368d3) popup_note_wait_window_g1

0xa07c,	// (0x000368df) popup_note_wait_window_g2_ParamLimits

0xa07c,	// (0x000368df) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0003c086) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0003c086) popup_note_wait_window_g

0xa094,	// (0x000368f7) popup_note_wait_window_t1_ParamLimits

0xa094,	// (0x000368f7) popup_note_wait_window_t1

0xa0bb,	// (0x0003691e) popup_note_wait_window_t2_ParamLimits

0xa0bb,	// (0x0003691e) popup_note_wait_window_t2

0xa0d8,	// (0x0003693b) popup_note_wait_window_t3_ParamLimits

0xa0d8,	// (0x0003693b) popup_note_wait_window_t3

0xa0eb,	// (0x0003694e) popup_note_wait_window_t4_ParamLimits

0xa0eb,	// (0x0003694e) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0003c08d) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0003c08d) popup_note_wait_window_t

0xa110,	// (0x00036973) wait_bar_pane_ParamLimits

0xa110,	// (0x00036973) wait_bar_pane

0x7907,	// (0x0003416a) wait_anim_pane

0x7907,	// (0x0003416a) wait_border_pane

0x2f7c,	// (0x0002f7df) wait_anim_pane_g1

0x2f7c,	// (0x0002f7df) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0003bf41) wait_anim_pane_g

0x9fe4,	// (0x00036847) wait_border_pane_g1

0x9fef,	// (0x00036852) wait_border_pane_g2

0x9ff8,	// (0x0003685b) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0003c07f) wait_border_pane_g

0x9e4f,	// (0x000366b2) bg_popup_window_pane_cp16_ParamLimits

0x9e4f,	// (0x000366b2) bg_popup_window_pane_cp16

0x9f4f,	// (0x000367b2) indicator_popup_pane_cp4_ParamLimits

0x9f4f,	// (0x000367b2) indicator_popup_pane_cp4

0x9f63,	// (0x000367c6) popup_query_data_window_t1_ParamLimits

0x9f63,	// (0x000367c6) popup_query_data_window_t1

0x9f75,	// (0x000367d8) popup_query_data_window_t2_ParamLimits

0x9f75,	// (0x000367d8) popup_query_data_window_t2

0x9f8e,	// (0x000367f1) popup_query_data_window_t3_ParamLimits

0x9f8e,	// (0x000367f1) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0003c078) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0003c078) popup_query_data_window_t

0x9fa8,	// (0x0003680b) query_popup_data_pane_ParamLimits

0x9fa8,	// (0x0003680b) query_popup_data_pane

0x9fbc,	// (0x0003681f) query_popup_data_pane_cp1_ParamLimits

0x9fbc,	// (0x0003681f) query_popup_data_pane_cp1

0x9e4f,	// (0x000366b2) bg_popup_window_pane_cp10_ParamLimits

0x9e4f,	// (0x000366b2) bg_popup_window_pane_cp10

0x9e81,	// (0x000366e4) indicator_popup_pane_ParamLimits

0x9e81,	// (0x000366e4) indicator_popup_pane

0x9ea3,	// (0x00036706) popup_query_code_window_t1_ParamLimits

0x9ea3,	// (0x00036706) popup_query_code_window_t1

0x9ebd,	// (0x00036720) popup_query_code_window_t2_ParamLimits

0x9ebd,	// (0x00036720) popup_query_code_window_t2

0x9f06,	// (0x00036769) popup_query_code_window_t3_ParamLimits

0x9f06,	// (0x00036769) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0003c071) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0003c071) popup_query_code_window_t

0x9f35,	// (0x00036798) query_popup_pane_ParamLimits

0x9f35,	// (0x00036798) query_popup_pane

0x7d3e,	// (0x000345a1) bg_popup_window_pane_cp15_ParamLimits

0x7d3e,	// (0x000345a1) bg_popup_window_pane_cp15

0x7d5c,	// (0x000345bf) indicator_popup_pane_cp1_ParamLimits

0x7d5c,	// (0x000345bf) indicator_popup_pane_cp1

0x7d6f,	// (0x000345d2) indicator_popup_pane_cp2_ParamLimits

0x7d6f,	// (0x000345d2) indicator_popup_pane_cp2

0x7d82,	// (0x000345e5) popup_query_data_code_window_g1_ParamLimits

0x7d82,	// (0x000345e5) popup_query_data_code_window_g1

0x7d95,	// (0x000345f8) popup_query_data_code_window_t1_ParamLimits

0x7d95,	// (0x000345f8) popup_query_data_code_window_t1

0x7da7,	// (0x0003460a) popup_query_data_code_window_t2_ParamLimits

0x7da7,	// (0x0003460a) popup_query_data_code_window_t2

0x7db9,	// (0x0003461c) popup_query_data_code_window_t3_ParamLimits

0x7db9,	// (0x0003461c) popup_query_data_code_window_t3

0x7dcf,	// (0x00034632) popup_query_data_code_window_t4_ParamLimits

0x7dcf,	// (0x00034632) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0003bdc8) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0003bdc8) popup_query_data_code_window_t

0x5c99,	// (0x000324fc) list_single_midp_graphic_pane_g3

0x7de7,	// (0x0003464a) query_popup_data_pane_cp2_ParamLimits

0x7dfa,	// (0x0003465d) query_popup_pane_cp2_ParamLimits

0x7dfa,	// (0x0003465d) query_popup_pane_cp2

0x7907,	// (0x0003416a) bg_popup_window_pane_cp11

0x9e33,	// (0x00036696) heading_pane_cp5

0x9e3b,	// (0x0003669e) listscroll_popup_info_pane

0x7907,	// (0x0003416a) input_focus_pane_cp3

0x7e0d,	// (0x00034670) query_popup_pane_t1

0x7e1b,	// (0x0003467e) list_popup_info_pane_ParamLimits

0x7e1b,	// (0x0003467e) list_popup_info_pane

0x7e2a,	// (0x0003468d) listscroll_popup_info_pane_g1

0x7e32,	// (0x00034695) scroll_pane_cp7

0x7e3c,	// (0x0003469f) popup_info_list_pane_t1_ParamLimits

0x7e3c,	// (0x0003469f) popup_info_list_pane_t1

0x7e56,	// (0x000346b9) popup_info_list_pane_t2_ParamLimits

0x7e56,	// (0x000346b9) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0003bdd1) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0003bdd1) popup_info_list_pane_t

0x7907,	// (0x0003416a) bg_popup_window_pane_cp12

0xb1e4,	// (0x00037a47) find_popup_pane

0x79e7,	// (0x0003424a) bg_popup_window_pane_cp3

0x7e70,	// (0x000346d3) heading_pane_cp3

0x7e7f,	// (0x000346e2) listscroll_popup_graphic_pane

0x7907,	// (0x0003416a) bg_popup_window_pane_cp4

0x7edf,	// (0x00034742) heading_pane_cp4

0x7ee9,	// (0x0003474c) listscroll_popup_colour_pane

0x7ef1,	// (0x00034754) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7ef1,	// (0x00034754) cell_large_graphic_colour_none_popup_pane

0x7f05,	// (0x00034768) grid_large_graphic_colour_popup_pane_ParamLimits

0x7f05,	// (0x00034768) grid_large_graphic_colour_popup_pane

0x7f29,	// (0x0003478c) listscroll_popup_colour_pane_g1_ParamLimits

0x7f29,	// (0x0003478c) listscroll_popup_colour_pane_g1

0x7f40,	// (0x000347a3) listscroll_popup_colour_pane_g2_ParamLimits

0x7f40,	// (0x000347a3) listscroll_popup_colour_pane_g2

0x7f57,	// (0x000347ba) listscroll_popup_colour_pane_g3_ParamLimits

0x7f57,	// (0x000347ba) listscroll_popup_colour_pane_g3

0x7f67,	// (0x000347ca) listscroll_popup_colour_pane_g4_ParamLimits

0x7f67,	// (0x000347ca) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0003bdd6) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0003bdd6) listscroll_popup_colour_pane_g

0x7f77,	// (0x000347da) scroll_pane_cp6_ParamLimits

0x7f77,	// (0x000347da) scroll_pane_cp6

0x7f89,	// (0x000347ec) cell_large_graphic_colour_popup_pane_ParamLimits

0x7f89,	// (0x000347ec) cell_large_graphic_colour_popup_pane

0x7fa8,	// (0x0003480b) cell_large_graphic_colour_none_popup_pane_t1

0x7907,	// (0x0003416a) grid_highlight_pane_cp5

0x7fb7,	// (0x0003481a) cell_large_graphic_colour_popup_pane_g1

0x7fbf,	// (0x00034822) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0003bddf) cell_large_graphic_colour_popup_pane_g

0x7fc7,	// (0x0003482a) cell_large_graphic_colour_popup_pane_g2_copy1

0x7fd0,	// (0x00034833) grid_highlight_pane_cp4

0x7fd8,	// (0x0003483b) bg_popup_window_pane_cp8_ParamLimits

0x7fd8,	// (0x0003483b) bg_popup_window_pane_cp8

0x7ff3,	// (0x00034856) popup_snote_single_text_window_g1_ParamLimits

0x7ff3,	// (0x00034856) popup_snote_single_text_window_g1

0x8005,	// (0x00034868) popup_snote_single_text_window_t1_ParamLimits

0x8005,	// (0x00034868) popup_snote_single_text_window_t1

0x8018,	// (0x0003487b) popup_snote_single_text_window_t2_ParamLimits

0x8018,	// (0x0003487b) popup_snote_single_text_window_t2

0x802b,	// (0x0003488e) popup_snote_single_text_window_t3_ParamLimits

0x802b,	// (0x0003488e) popup_snote_single_text_window_t3

0x8064,	// (0x000348c7) popup_snote_single_text_window_t4_ParamLimits

0x8064,	// (0x000348c7) popup_snote_single_text_window_t4

0x8098,	// (0x000348fb) popup_snote_single_text_window_t5_ParamLimits

0x8098,	// (0x000348fb) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0003bde4) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0003bde4) popup_snote_single_text_window_t

0x80c7,	// (0x0003492a) bg_popup_window_pane_cp9_ParamLimits

0x80c7,	// (0x0003492a) bg_popup_window_pane_cp9

0x7ff3,	// (0x00034856) popup_snote_single_graphic_window_g1_ParamLimits

0x7ff3,	// (0x00034856) popup_snote_single_graphic_window_g1

0x80d5,	// (0x00034938) popup_snote_single_graphic_window_g2_ParamLimits

0x80d5,	// (0x00034938) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0003bdef) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0003bdef) popup_snote_single_graphic_window_g

0x80e1,	// (0x00034944) popup_snote_single_graphic_window_t1_ParamLimits

0x80e1,	// (0x00034944) popup_snote_single_graphic_window_t1

0x80f4,	// (0x00034957) popup_snote_single_graphic_window_t2_ParamLimits

0x80f4,	// (0x00034957) popup_snote_single_graphic_window_t2

0x8107,	// (0x0003496a) popup_snote_single_graphic_window_t3_ParamLimits

0x8107,	// (0x0003496a) popup_snote_single_graphic_window_t3

0x8140,	// (0x000349a3) popup_snote_single_graphic_window_t4_ParamLimits

0x8140,	// (0x000349a3) popup_snote_single_graphic_window_t4

0x8174,	// (0x000349d7) popup_snote_single_graphic_window_t5_ParamLimits

0x8174,	// (0x000349d7) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0003bdf4) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0003bdf4) popup_snote_single_graphic_window_t

0xb126,	// (0x00037989) grid_graphic_popup_pane_ParamLimits

0xb126,	// (0x00037989) grid_graphic_popup_pane

0xb150,	// (0x000379b3) listscroll_popup_graphic_pane_g1_ParamLimits

0xb150,	// (0x000379b3) listscroll_popup_graphic_pane_g1

0xb164,	// (0x000379c7) listscroll_popup_graphic_pane_g2_ParamLimits

0xb164,	// (0x000379c7) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0003c1ee) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0003c1ee) listscroll_popup_graphic_pane_g

0xb178,	// (0x000379db) scroll_pane_cp5

0xb0b7,	// (0x0003791a) cell_graphic_popup_pane_ParamLimits

0xb0b7,	// (0x0003791a) cell_graphic_popup_pane

0xb098,	// (0x000378fb) cell_graphic_popup_pane_g1

0xb0a0,	// (0x00037903) cell_graphic_popup_pane_g2

0x7fc7,	// (0x0003482a) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0003c1e7) cell_graphic_popup_pane_g

0xb0a9,	// (0x0003790c) cell_graphic_popup_pane_t2

0x7fd0,	// (0x00034833) grid_highlight_pane_cp3

0x81b5,	// (0x00034a18) list_gen_pane_ParamLimits

0x81b5,	// (0x00034a18) list_gen_pane

0x81e7,	// (0x00034a4a) scroll_pane

0xaff0,	// (0x00037853) bg_list_pane_g1_ParamLimits

0xaff0,	// (0x00037853) bg_list_pane_g1

0xb00d,	// (0x00037870) bg_list_pane_g2_ParamLimits

0xb00d,	// (0x00037870) bg_list_pane_g2

0xb022,	// (0x00037885) bg_list_pane_g3_ParamLimits

0xb022,	// (0x00037885) bg_list_pane_g3

0xb036,	// (0x00037899) bg_list_pane_g4_ParamLimits

0xb036,	// (0x00037899) bg_list_pane_g4

0xb04a,	// (0x000378ad) bg_list_pane_g5_ParamLimits

0xb04a,	// (0x000378ad) bg_list_pane_g5

0x0004,

0xf979,	// (0x0003c1dc) bg_list_pane_g_ParamLimits

0xf979,	// (0x0003c1dc) bg_list_pane_g

0x6117,	// (0x0003297a) list_double2_graphic_large_graphic_pane_ParamLimits

0x6117,	// (0x0003297a) list_double2_graphic_large_graphic_pane

0x6117,	// (0x0003297a) list_double2_graphic_pane_ParamLimits

0x6117,	// (0x0003297a) list_double2_graphic_pane

0x6117,	// (0x0003297a) list_double2_large_graphic_pane_ParamLimits

0x6117,	// (0x0003297a) list_double2_large_graphic_pane

0x6117,	// (0x0003297a) list_double2_pane_ParamLimits

0x6117,	// (0x0003297a) list_double2_pane

0x6117,	// (0x0003297a) list_double_graphic_heading_pane_ParamLimits

0x6117,	// (0x0003297a) list_double_graphic_heading_pane

0x6117,	// (0x0003297a) list_double_graphic_pane_ParamLimits

0x6117,	// (0x0003297a) list_double_graphic_pane

0x6117,	// (0x0003297a) list_double_heading_pane_ParamLimits

0x6117,	// (0x0003297a) list_double_heading_pane

0x6117,	// (0x0003297a) list_double_large_graphic_pane_ParamLimits

0x6117,	// (0x0003297a) list_double_large_graphic_pane

0x6117,	// (0x0003297a) list_double_number_pane_ParamLimits

0x6117,	// (0x0003297a) list_double_number_pane

0x6117,	// (0x0003297a) list_double_pane_ParamLimits

0x6117,	// (0x0003297a) list_double_pane

0x6117,	// (0x0003297a) list_double_time_pane_ParamLimits

0x6117,	// (0x0003297a) list_double_time_pane

0x6117,	// (0x0003297a) list_setting_number_pane_ParamLimits

0x6117,	// (0x0003297a) list_setting_number_pane

0x6117,	// (0x0003297a) list_setting_pane_ParamLimits

0x6117,	// (0x0003297a) list_setting_pane

0x6165,	// (0x000329c8) list_single_2graphic_pane_ParamLimits

0x6165,	// (0x000329c8) list_single_2graphic_pane

0x6165,	// (0x000329c8) list_single_graphic_heading_pane_ParamLimits

0x6165,	// (0x000329c8) list_single_graphic_heading_pane

0x6165,	// (0x000329c8) list_single_graphic_pane_ParamLimits

0x6165,	// (0x000329c8) list_single_graphic_pane

0x6165,	// (0x000329c8) list_single_heading_pane_ParamLimits

0x6165,	// (0x000329c8) list_single_heading_pane

0xafce,	// (0x00037831) list_single_large_graphic_pane_ParamLimits

0xafce,	// (0x00037831) list_single_large_graphic_pane

0x6165,	// (0x000329c8) list_single_number_heading_pane_ParamLimits

0x6165,	// (0x000329c8) list_single_number_heading_pane

0x6165,	// (0x000329c8) list_single_number_pane_ParamLimits

0x6165,	// (0x000329c8) list_single_number_pane

0x6165,	// (0x000329c8) list_single_pane_ParamLimits

0x6165,	// (0x000329c8) list_single_pane

0x7907,	// (0x0003416a) list_highlight_pane_cp1

0x3a17,	// (0x0003027a) list_single_pane_g1_ParamLimits

0x3a17,	// (0x0003027a) list_single_pane_g1

0x4925,	// (0x00031188) list_single_pane_g2_ParamLimits

0x4925,	// (0x00031188) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0003be06) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0003be06) list_single_pane_g

0x6101,	// (0x00032964) list_single_pane_t1_ParamLimits

0x6101,	// (0x00032964) list_single_pane_t1

0x3a17,	// (0x0003027a) list_single_number_pane_g1_ParamLimits

0x3a17,	// (0x0003027a) list_single_number_pane_g1

0x4925,	// (0x00031188) list_single_number_pane_g2_ParamLimits

0x4925,	// (0x00031188) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0003be06) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0003be06) list_single_number_pane_g

0x6033,	// (0x00032896) list_single_number_pane_t1_ParamLimits

0x6033,	// (0x00032896) list_single_number_pane_t1

0x6049,	// (0x000328ac) list_single_number_pane_t2_ParamLimits

0x6049,	// (0x000328ac) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0003c19d) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0003c19d) list_single_number_pane_t

0x3a0b,	// (0x0003026e) list_single_graphic_pane_g1_ParamLimits

0x3a0b,	// (0x0003026e) list_single_graphic_pane_g1

0x3a17,	// (0x0003027a) list_single_graphic_pane_g2_ParamLimits

0x3a17,	// (0x0003027a) list_single_graphic_pane_g2

0x4925,	// (0x00031188) list_single_graphic_pane_g3_ParamLimits

0x4925,	// (0x00031188) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0003bdff) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0003bdff) list_single_graphic_pane_g

0x4931,	// (0x00031194) list_single_graphic_pane_t1_ParamLimits

0x4931,	// (0x00031194) list_single_graphic_pane_t1

0x3a17,	// (0x0003027a) list_single_heading_pane_g1_ParamLimits

0x3a17,	// (0x0003027a) list_single_heading_pane_g1

0x4925,	// (0x00031188) list_single_heading_pane_g2_ParamLimits

0x4925,	// (0x00031188) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003be06) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003be06) list_single_heading_pane_g

0x4947,	// (0x000311aa) list_single_heading_pane_t1_ParamLimits

0x4947,	// (0x000311aa) list_single_heading_pane_t1

0x495d,	// (0x000311c0) list_single_heading_pane_t2_ParamLimits

0x495d,	// (0x000311c0) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0003be0b) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0003be0b) list_single_heading_pane_t

0x3a17,	// (0x0003027a) list_single_number_heading_pane_g1_ParamLimits

0x3a17,	// (0x0003027a) list_single_number_heading_pane_g1

0x4925,	// (0x00031188) list_single_number_heading_pane_g2_ParamLimits

0x4925,	// (0x00031188) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0003be06) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0003be06) list_single_number_heading_pane_g

0x4947,	// (0x000311aa) list_single_number_heading_pane_t1_ParamLimits

0x4947,	// (0x000311aa) list_single_number_heading_pane_t1

0x496f,	// (0x000311d2) list_single_number_heading_pane_t2_ParamLimits

0x496f,	// (0x000311d2) list_single_number_heading_pane_t2

0x4981,	// (0x000311e4) list_single_number_heading_pane_t3_ParamLimits

0x4981,	// (0x000311e4) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0003be10) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0003be10) list_single_number_heading_pane_t

0x4993,	// (0x000311f6) list_single_graphic_heading_pane_g1_ParamLimits

0x4993,	// (0x000311f6) list_single_graphic_heading_pane_g1

0x499f,	// (0x00031202) list_single_graphic_heading_pane_g4_ParamLimits

0x499f,	// (0x00031202) list_single_graphic_heading_pane_g4

0x4925,	// (0x00031188) list_single_graphic_heading_pane_g5_ParamLimits

0x4925,	// (0x00031188) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0003be17) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0003be17) list_single_graphic_heading_pane_g

0x4947,	// (0x000311aa) list_single_graphic_heading_pane_t1_ParamLimits

0x4947,	// (0x000311aa) list_single_graphic_heading_pane_t1

0x49b0,	// (0x00031213) list_single_graphic_heading_pane_t2_ParamLimits

0x49b0,	// (0x00031213) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0003be1e) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0003be1e) list_single_graphic_heading_pane_t

0x49c2,	// (0x00031225) list_single_large_graphic_pane_g1_ParamLimits

0x49c2,	// (0x00031225) list_single_large_graphic_pane_g1

0x39d2,	// (0x00030235) list_single_large_graphic_pane_g2_ParamLimits

0x39d2,	// (0x00030235) list_single_large_graphic_pane_g2

0x39de,	// (0x00030241) list_single_large_graphic_pane_g3_ParamLimits

0x39de,	// (0x00030241) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0003be23) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0003be23) list_single_large_graphic_pane_g

0x9fef,	// (0x00036852) wait_border_pane_g2_copy1

0x49ce,	// (0x00031231) list_single_large_graphic_pane_g4_cp2

0x49d6,	// (0x00031239) list_single_large_graphic_pane_t1_ParamLimits

0x49d6,	// (0x00031239) list_single_large_graphic_pane_t1

0x49ec,	// (0x0003124f) list_double_pane_g1_ParamLimits

0x49ec,	// (0x0003124f) list_double_pane_g1

0x39ff,	// (0x00030262) list_double_pane_g2_ParamLimits

0x39ff,	// (0x00030262) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0003be2a) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0003be2a) list_double_pane_g

0x49f8,	// (0x0003125b) list_double_pane_t1_ParamLimits

0x49f8,	// (0x0003125b) list_double_pane_t1

0x4a0e,	// (0x00031271) list_double_pane_t2_ParamLimits

0x4a0e,	// (0x00031271) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0003be2f) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0003be2f) list_double_pane_t

0x4a20,	// (0x00031283) list_double2_pane_g1_ParamLimits

0x4a20,	// (0x00031283) list_double2_pane_g1

0x4a31,	// (0x00031294) list_double2_pane_g2_ParamLimits

0x4a31,	// (0x00031294) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0003be34) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0003be34) list_double2_pane_g

0x4a3d,	// (0x000312a0) list_double2_pane_t1_ParamLimits

0x4a3d,	// (0x000312a0) list_double2_pane_t1

0x4a53,	// (0x000312b6) list_double2_pane_t2_ParamLimits

0x4a53,	// (0x000312b6) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0003be39) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0003be39) list_double2_pane_t

0x49ec,	// (0x0003124f) list_double_number_pane_g1_ParamLimits

0x49ec,	// (0x0003124f) list_double_number_pane_g1

0x39ff,	// (0x00030262) list_double_number_pane_g2_ParamLimits

0x39ff,	// (0x00030262) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0003be2a) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0003be2a) list_double_number_pane_g

0x4a65,	// (0x000312c8) list_double_number_pane_t1_ParamLimits

0x4a65,	// (0x000312c8) list_double_number_pane_t1

0x4a77,	// (0x000312da) list_double_number_pane_t2_ParamLimits

0x4a77,	// (0x000312da) list_double_number_pane_t2

0x4a8d,	// (0x000312f0) list_double_number_pane_t3_ParamLimits

0x4a8d,	// (0x000312f0) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0003be3e) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0003be3e) list_double_number_pane_t

0x4a9f,	// (0x00031302) list_double_graphic_pane_g1_ParamLimits

0x4a9f,	// (0x00031302) list_double_graphic_pane_g1

0x4aab,	// (0x0003130e) list_double_graphic_pane_g2_ParamLimits

0x4aab,	// (0x0003130e) list_double_graphic_pane_g2

0x4aba,	// (0x0003131d) list_double_graphic_pane_g3_ParamLimits

0x4aba,	// (0x0003131d) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0003be45) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0003be45) list_double_graphic_pane_g

0x4ad2,	// (0x00031335) list_double_graphic_pane_t1_ParamLimits

0x4ad2,	// (0x00031335) list_double_graphic_pane_t1

0x4ae8,	// (0x0003134b) list_double_graphic_pane_t2_ParamLimits

0x4ae8,	// (0x0003134b) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0003be4e) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0003be4e) list_double_graphic_pane_t

0x4afa,	// (0x0003135d) list_double2_graphic_pane_g1_ParamLimits

0x4afa,	// (0x0003135d) list_double2_graphic_pane_g1

0x4b06,	// (0x00031369) list_double2_graphic_pane_g2_ParamLimits

0x4b06,	// (0x00031369) list_double2_graphic_pane_g2

0x4a31,	// (0x00031294) list_double2_graphic_pane_g3_ParamLimits

0x4a31,	// (0x00031294) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0003be53) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0003be53) list_double2_graphic_pane_g

0x4b12,	// (0x00031375) list_double2_graphic_pane_t1_ParamLimits

0x4b12,	// (0x00031375) list_double2_graphic_pane_t1

0x4b28,	// (0x0003138b) list_double2_graphic_pane_t2_ParamLimits

0x4b28,	// (0x0003138b) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0003be5a) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0003be5a) list_double2_graphic_pane_t

0x4b3a,	// (0x0003139d) list_double_large_graphic_pane_g1_ParamLimits

0x4b3a,	// (0x0003139d) list_double_large_graphic_pane_g1

0x4b59,	// (0x000313bc) list_double_large_graphic_pane_g2_ParamLimits

0x4b59,	// (0x000313bc) list_double_large_graphic_pane_g2

0x39ff,	// (0x00030262) list_double_large_graphic_pane_g3_ParamLimits

0x39ff,	// (0x00030262) list_double_large_graphic_pane_g3

0x4b6a,	// (0x000313cd) list_double_large_graphic_pane_g4_ParamLimits

0x4b6a,	// (0x000313cd) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0003be5f) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0003be5f) list_double_large_graphic_pane_g

0x4b7c,	// (0x000313df) list_double_large_graphic_pane_t1_ParamLimits

0x4b7c,	// (0x000313df) list_double_large_graphic_pane_t1

0x4b95,	// (0x000313f8) list_double_large_graphic_pane_t2_ParamLimits

0x4b95,	// (0x000313f8) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0003be6a) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0003be6a) list_double_large_graphic_pane_t

0x4ba7,	// (0x0003140a) list_double2_large_graphic_pane_g1_ParamLimits

0x4ba7,	// (0x0003140a) list_double2_large_graphic_pane_g1

0x4a20,	// (0x00031283) list_double2_large_graphic_pane_g2_ParamLimits

0x4a20,	// (0x00031283) list_double2_large_graphic_pane_g2

0x4a31,	// (0x00031294) list_double2_large_graphic_pane_g3_ParamLimits

0x4a31,	// (0x00031294) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0003be6f) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0003be6f) list_double2_large_graphic_pane_g

0x4bb3,	// (0x00031416) list_double2_large_graphic_pane_t1_ParamLimits

0x4bb3,	// (0x00031416) list_double2_large_graphic_pane_t1

0x4bc9,	// (0x0003142c) list_double2_large_graphic_pane_t2_ParamLimits

0x4bc9,	// (0x0003142c) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0003be76) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0003be76) list_double2_large_graphic_pane_t

0x4bdb,	// (0x0003143e) list_double_heading_pane_g1_ParamLimits

0x4bdb,	// (0x0003143e) list_double_heading_pane_g1

0x4bec,	// (0x0003144f) list_double_heading_pane_g2_ParamLimits

0x4bec,	// (0x0003144f) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0003be7b) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0003be7b) list_double_heading_pane_g

0x4bf8,	// (0x0003145b) list_double_heading_pane_t1_ParamLimits

0x4bf8,	// (0x0003145b) list_double_heading_pane_t1

0x4a53,	// (0x000312b6) list_double_heading_pane_t2_ParamLimits

0x4a53,	// (0x000312b6) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0003be80) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0003be80) list_double_heading_pane_t

0x4c0e,	// (0x00031471) list_double_graphic_heading_pane_g1_ParamLimits

0x4c0e,	// (0x00031471) list_double_graphic_heading_pane_g1

0x4bdb,	// (0x0003143e) list_double_graphic_heading_pane_g2_ParamLimits

0x4bdb,	// (0x0003143e) list_double_graphic_heading_pane_g2

0x4bec,	// (0x0003144f) list_double_graphic_heading_pane_g3_ParamLimits

0x4bec,	// (0x0003144f) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0003be85) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0003be85) list_double_graphic_heading_pane_g

0x4c1a,	// (0x0003147d) list_double_graphic_heading_pane_t1_ParamLimits

0x4c1a,	// (0x0003147d) list_double_graphic_heading_pane_t1

0x4b28,	// (0x0003138b) list_double_graphic_heading_pane_t2_ParamLimits

0x4b28,	// (0x0003138b) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0003be8c) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0003be8c) list_double_graphic_heading_pane_t

0x4b59,	// (0x000313bc) list_double_time_pane_g1_ParamLimits

0x4b59,	// (0x000313bc) list_double_time_pane_g1

0x39ff,	// (0x00030262) list_double_time_pane_g2_ParamLimits

0x39ff,	// (0x00030262) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0003be91) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0003be91) list_double_time_pane_g

0x4c30,	// (0x00031493) list_double_time_pane_t1_ParamLimits

0x4c30,	// (0x00031493) list_double_time_pane_t1

0x4c46,	// (0x000314a9) list_double_time_pane_t2_ParamLimits

0x4c46,	// (0x000314a9) list_double_time_pane_t2

0x4c58,	// (0x000314bb) list_double_time_pane_t3_ParamLimits

0x4c58,	// (0x000314bb) list_double_time_pane_t3

0x4c6a,	// (0x000314cd) list_double_time_pane_t4_ParamLimits

0x4c6a,	// (0x000314cd) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0003be96) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0003be96) list_double_time_pane_t

0x4b06,	// (0x00031369) list_setting_pane_g1_ParamLimits

0x4b06,	// (0x00031369) list_setting_pane_g1

0x4a31,	// (0x00031294) list_setting_pane_g2_ParamLimits

0x4a31,	// (0x00031294) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0003be9f) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0003be9f) list_setting_pane_g

0x4c7c,	// (0x000314df) list_setting_pane_t1_ParamLimits

0x4c7c,	// (0x000314df) list_setting_pane_t1

0x4c96,	// (0x000314f9) list_setting_pane_t2_ParamLimits

0x4c96,	// (0x000314f9) list_setting_pane_t2

0x0002,

0xf641,	// (0x0003bea4) list_setting_pane_t_ParamLimits

0xf641,	// (0x0003bea4) list_setting_pane_t

0x4cd5,	// (0x00031538) set_value_pane_cp_ParamLimits

0x4cd5,	// (0x00031538) set_value_pane_cp

0x4ce1,	// (0x00031544) list_setting_number_pane_g1_ParamLimits

0x4ce1,	// (0x00031544) list_setting_number_pane_g1

0x4ced,	// (0x00031550) list_setting_number_pane_g2_ParamLimits

0x4ced,	// (0x00031550) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0003beab) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0003beab) list_setting_number_pane_g

0x4cf9,	// (0x0003155c) list_setting_number_pane_t1_ParamLimits

0x4cf9,	// (0x0003155c) list_setting_number_pane_t1

0x4d12,	// (0x00031575) list_setting_number_pane_t2_ParamLimits

0x4d12,	// (0x00031575) list_setting_number_pane_t2

0x4d2c,	// (0x0003158f) list_setting_number_pane_t3_ParamLimits

0x4d2c,	// (0x0003158f) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0003beb0) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0003beb0) list_setting_number_pane_t

0x4cd5,	// (0x00031538) set_value_pane_ParamLimits

0x4cd5,	// (0x00031538) set_value_pane

0x821b,	// (0x00034a7e) bg_set_opt_pane_ParamLimits

0x821b,	// (0x00034a7e) bg_set_opt_pane

0x3a23,	// (0x00030286) set_value_pane_t1

0x823c,	// (0x00034a9f) slider_set_pane_cp3

0x8245,	// (0x00034aa8) volume_small_pane_cp

0x824e,	// (0x00034ab1) list_form_gen_pane

0x8257,	// (0x00034aba) scroll_pane_cp8

0x4d6f,	// (0x000315d2) form_field_data_pane_ParamLimits

0x4d6f,	// (0x000315d2) form_field_data_pane

0x4d87,	// (0x000315ea) form_field_data_wide_pane_ParamLimits

0x4d87,	// (0x000315ea) form_field_data_wide_pane

0x4da8,	// (0x0003160b) form_field_popup_pane_ParamLimits

0x4da8,	// (0x0003160b) form_field_popup_pane

0x4dc8,	// (0x0003162b) form_field_popup_wide_pane_ParamLimits

0x4dc8,	// (0x0003162b) form_field_popup_wide_pane

0x4de5,	// (0x00031648) form_field_slider_pane_ParamLimits

0x4de5,	// (0x00031648) form_field_slider_pane

0x4df8,	// (0x0003165b) form_field_slider_wide_pane_ParamLimits

0x4df8,	// (0x0003165b) form_field_slider_wide_pane

0x8268,	// (0x00034acb) data_form_pane

0x4e15,	// (0x00031678) form_field_data_pane_t1

0x8274,	// (0x00034ad7) input_focus_pane

0x4e2d,	// (0x00031690) data_form_wide_pane

0x4e4a,	// (0x000316ad) form_field_data_wide_pane_t1

0x7fe5,	// (0x00034848) input_focus_pane_cp6

0x4e6c,	// (0x000316cf) form_field_popup_pane_t1

0x8274,	// (0x00034ad7) input_focus_pane_cp7

0x82a2,	// (0x00034b05) list_form_pane

0x4e8c,	// (0x000316ef) form_field_popup_wide_pane_t1

0x8274,	// (0x00034ad7) input_focus_pane_cp8

0x82ae,	// (0x00034b11) list_form_wide_pane

0x4ea9,	// (0x0003170c) form_field_slider_pane_t1_ParamLimits

0x4ea9,	// (0x0003170c) form_field_slider_pane_t1

0x4ebf,	// (0x00031722) form_field_slider_pane_t2_ParamLimits

0x4ebf,	// (0x00031722) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0003bec0) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0003bec0) form_field_slider_pane_t

0x7c62,	// (0x000344c5) input_focus_pane_cp9_ParamLimits

0x7c62,	// (0x000344c5) input_focus_pane_cp9

0x4ed4,	// (0x00031737) slider_cont_pane_ParamLimits

0x4ed4,	// (0x00031737) slider_cont_pane

0x82ba,	// (0x00034b1d) form_field_slider_wide_pane_t1_ParamLimits

0x82ba,	// (0x00034b1d) form_field_slider_wide_pane_t1

0x4ee8,	// (0x0003174b) form_field_slider_wide_pane_t2_ParamLimits

0x4ee8,	// (0x0003174b) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0003bec5) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0003bec5) form_field_slider_wide_pane_t

0x7c62,	// (0x000344c5) input_focus_pane_cp10_ParamLimits

0x7c62,	// (0x000344c5) input_focus_pane_cp10

0x4efa,	// (0x0003175d) slider_cont_pane_cp1_ParamLimits

0x4efa,	// (0x0003175d) slider_cont_pane_cp1

0x4f0e,	// (0x00031771) slider_form_pane_cp

0x82cc,	// (0x00034b2f) input_focus_pane_g1

0x82d4,	// (0x00034b37) input_focus_pane_g2

0x82dc,	// (0x00034b3f) input_focus_pane_g3

0x82e4,	// (0x00034b47) input_focus_pane_g4

0x82ec,	// (0x00034b4f) input_focus_pane_g5

0x82f4,	// (0x00034b57) input_focus_pane_g6

0x82fc,	// (0x00034b5f) input_focus_pane_g7

0x8304,	// (0x00034b67) input_focus_pane_g8

0x830c,	// (0x00034b6f) input_focus_pane_g9

0x2f7c,	// (0x0002f7df) input_focus_pane_g10

0x0009,

0xf667,	// (0x0003beca) input_focus_pane_g

0x9ff8,	// (0x0003685b) wait_border_pane_g3_copy1

0x4f16,	// (0x00031779) data_form_pane_t1

0x2f7c,	// (0x0002f7df) wait_anim_pane_g1_copy1

0x60d3,	// (0x00032936) data_form_wide_pane_t1

0x4f31,	// (0x00031794) list_form_graphic_pane_cp_ParamLimits

0x4f31,	// (0x00031794) list_form_graphic_pane_cp

0xaf24,	// (0x00037787) slider_form_pane_g1

0xaf2d,	// (0x00037790) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0003c1cd) slider_form_pane_g

0x4f4a,	// (0x000317ad) list_form_graphic_pane_ParamLimits

0x4f4a,	// (0x000317ad) list_form_graphic_pane

0x4f66,	// (0x000317c9) list_form_graphic_pane_g1

0x4f6e,	// (0x000317d1) list_form_graphic_pane_t1_ParamLimits

0x4f6e,	// (0x000317d1) list_form_graphic_pane_t1

0x79e7,	// (0x0003424a) list_highlight_pane_cp5_ParamLimits

0x79e7,	// (0x0003424a) list_highlight_pane_cp5

0x4f83,	// (0x000317e6) find_pane_g1

0x8314,	// (0x00034b77) input_find_pane

0x4f8c,	// (0x000317ef) input_find_pane_g1_ParamLimits

0x4f8c,	// (0x000317ef) input_find_pane_g1

0x4f98,	// (0x000317fb) input_find_pane_t1_ParamLimits

0x4f98,	// (0x000317fb) input_find_pane_t1

0x4fad,	// (0x00031810) input_find_pane_t2_ParamLimits

0x4fad,	// (0x00031810) input_find_pane_t2

0x0001,

0xf67c,	// (0x0003bedf) input_find_pane_t_ParamLimits

0xf67c,	// (0x0003bedf) input_find_pane_t

0x831d,	// (0x00034b80) input_focus_pane_cp5_ParamLimits

0x831d,	// (0x00034b80) input_focus_pane_cp5

0x833c,	// (0x00034b9f) bg_popup_window_pane_cp2_ParamLimits

0x833c,	// (0x00034b9f) bg_popup_window_pane_cp2

0x8349,	// (0x00034bac) listscroll_menu_pane_ParamLimits

0x8349,	// (0x00034bac) listscroll_menu_pane

0x8355,	// (0x00034bb8) popup_submenu_window_ParamLimits

0x8355,	// (0x00034bb8) popup_submenu_window

0x8381,	// (0x00034be4) find_popup_pane_g1

0x8389,	// (0x00034bec) input_popup_find_pane_cp

0x8393,	// (0x00034bf6) input_focus_pane_cp4_ParamLimits

0x8393,	// (0x00034bf6) input_focus_pane_cp4

0x83ad,	// (0x00034c10) input_popup_find_pane_t1_ParamLimits

0x83ad,	// (0x00034c10) input_popup_find_pane_t1

0x7907,	// (0x0003416a) bg_popup_sub_pane_cp

0x83db,	// (0x00034c3e) listscroll_popup_sub_pane

0x83e3,	// (0x00034c46) list_submenu_pane_ParamLimits

0x83e3,	// (0x00034c46) list_submenu_pane

0x83f4,	// (0x00034c57) scroll_pane_cp4

0x83fc,	// (0x00034c5f) list_single_popup_submenu_pane_ParamLimits

0x83fc,	// (0x00034c5f) list_single_popup_submenu_pane

0x8410,	// (0x00034c73) list_single_popup_submenu_pane_g1

0x8418,	// (0x00034c7b) list_single_popup_submenu_pane_t1_ParamLimits

0x8418,	// (0x00034c7b) list_single_popup_submenu_pane_t1

0x79e7,	// (0x0003424a) bg_active_tab_pane_cp1_ParamLimits

0x79e7,	// (0x0003424a) bg_active_tab_pane_cp1

0x842d,	// (0x00034c90) tabs_2_active_pane_g1

0x8435,	// (0x00034c98) tabs_2_active_pane_t1

0x79e7,	// (0x0003424a) bg_passive_tab_pane_cp1_ParamLimits

0x79e7,	// (0x0003424a) bg_passive_tab_pane_cp1

0x842d,	// (0x00034c90) tabs_2_passive_pane_g1

0x8435,	// (0x00034c98) tabs_2_passive_pane_t1

0x8447,	// (0x00034caa) bg_active_tab_pane_cp4

0x8455,	// (0x00034cb8) tabs_2_long_active_pane_t1

0x8468,	// (0x00034ccb) bg_passive_tab_pane_cp4

0x5ca1,	// (0x00032504) list_single_midp_graphic_pane_g4_ParamLimits

0x8447,	// (0x00034caa) bg_active_tab_pane_cp5

0x8474,	// (0x00034cd7) tabs_3_long_active_pane_t1

0x8468,	// (0x00034ccb) bg_passive_tab_pane_cp5

0x5ca1,	// (0x00032504) list_single_midp_graphic_pane_g4

0x79e7,	// (0x0003424a) bg_popup_window_pane_cp13_ParamLimits

0x79e7,	// (0x0003424a) bg_popup_window_pane_cp13

0x848f,	// (0x00034cf2) listscroll_popup_fast_pane_ParamLimits

0x848f,	// (0x00034cf2) listscroll_popup_fast_pane

0x849e,	// (0x00034d01) grid_popup_fast_pane_ParamLimits

0x849e,	// (0x00034d01) grid_popup_fast_pane

0x84b0,	// (0x00034d13) scroll_pane_cp9_ParamLimits

0x84b0,	// (0x00034d13) scroll_pane_cp9

0xc863,	// (0x000390c6) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc863,	// (0x000390c6) list_single_graphic_hl_pane_t1_cp2

0x84d4,	// (0x00034d37) input_focus_pane_cp20_ParamLimits

0x84d4,	// (0x00034d37) input_focus_pane_cp20

0x84e2,	// (0x00034d45) query_popup_data_pane_t1_ParamLimits

0x84e2,	// (0x00034d45) query_popup_data_pane_t1

0x84f5,	// (0x00034d58) query_popup_data_pane_t2_ParamLimits

0x84f5,	// (0x00034d58) query_popup_data_pane_t2

0x853b,	// (0x00034d9e) query_popup_data_pane_t3_ParamLimits

0x853b,	// (0x00034d9e) query_popup_data_pane_t3

0x857c,	// (0x00034ddf) query_popup_data_pane_t4_ParamLimits

0x857c,	// (0x00034ddf) query_popup_data_pane_t4

0x85b8,	// (0x00034e1b) query_popup_data_pane_t5_ParamLimits

0x85b8,	// (0x00034e1b) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0003bee4) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0003bee4) query_popup_data_pane_t

0x82cc,	// (0x00034b2f) bg_set_opt_pane_g1

0x82d4,	// (0x00034b37) bg_set_opt_pane_g2

0x82dc,	// (0x00034b3f) bg_set_opt_pane_g3

0x82e4,	// (0x00034b47) bg_set_opt_pane_g4

0x82ec,	// (0x00034b4f) bg_set_opt_pane_g5

0x82f4,	// (0x00034b57) bg_set_opt_pane_g6

0x82fc,	// (0x00034b5f) bg_set_opt_pane_g7

0x8304,	// (0x00034b67) bg_set_opt_pane_g8

0x830c,	// (0x00034b6f) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0003beef) bg_set_opt_pane_g

0x52e9,	// (0x00031b4c) control_top_pane_stacon_ParamLimits

0x52e9,	// (0x00031b4c) control_top_pane_stacon

0x533c,	// (0x00031b9f) signal_pane_stacon_ParamLimits

0x533c,	// (0x00031b9f) signal_pane_stacon

0x8e07,	// (0x0003566a) stacon_top_pane_g1_ParamLimits

0x8e07,	// (0x0003566a) stacon_top_pane_g1

0x5361,	// (0x00031bc4) title_pane_stacon_ParamLimits

0x5361,	// (0x00031bc4) title_pane_stacon

0x538b,	// (0x00031bee) uni_indicator_pane_stacon_ParamLimits

0x538b,	// (0x00031bee) uni_indicator_pane_stacon

0x53a0,	// (0x00031c03) battery_pane_stacon_ParamLimits

0x53a0,	// (0x00031c03) battery_pane_stacon

0x53e4,	// (0x00031c47) control_bottom_pane_stacon_ParamLimits

0x53e4,	// (0x00031c47) control_bottom_pane_stacon

0x5407,	// (0x00031c6a) navi_pane_stacon_ParamLimits

0x5407,	// (0x00031c6a) navi_pane_stacon

0x8e29,	// (0x0003568c) stacon_bottom_pane_g1_ParamLimits

0x8e29,	// (0x0003568c) stacon_bottom_pane_g1

0x4fc2,	// (0x00031825) aid_levels_signal_lsc_ParamLimits

0x4fc2,	// (0x00031825) aid_levels_signal_lsc

0x4fd8,	// (0x0003183b) signal_pane_stacon_g1_ParamLimits

0x4fd8,	// (0x0003183b) signal_pane_stacon_g1

0x4fec,	// (0x0003184f) signal_pane_stacon_g2_ParamLimits

0x4fec,	// (0x0003184f) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0003bf02) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0003bf02) signal_pane_stacon_g

0x5021,	// (0x00031884) title_pane_stacon_t1_ParamLimits

0x5021,	// (0x00031884) title_pane_stacon_t1

0x85fc,	// (0x00034e5f) uni_indicator_pane_stacon_g1

0x8606,	// (0x00034e69) uni_indicator_pane_stacon_g2

0x8610,	// (0x00034e73) uni_indicator_pane_stacon_g3

0x861a,	// (0x00034e7d) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0003bf0e) uni_indicator_pane_stacon_g

0x5046,	// (0x000318a9) control_top_pane_stacon_g1

0x504e,	// (0x000318b1) control_top_pane_stacon_t1_ParamLimits

0x504e,	// (0x000318b1) control_top_pane_stacon_t1

0x5085,	// (0x000318e8) aid_levels_battery_lsc_ParamLimits

0x5085,	// (0x000318e8) aid_levels_battery_lsc

0x509c,	// (0x000318ff) battery_pane_stacon_g1_ParamLimits

0x509c,	// (0x000318ff) battery_pane_stacon_g1

0x50af,	// (0x00031912) battery_pane_stacon_g2_ParamLimits

0x50af,	// (0x00031912) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0003bf17) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0003bf17) battery_pane_stacon_g

0x50ed,	// (0x00031950) navi_icon_pane_stacon

0x5101,	// (0x00031964) navi_navi_pane_stacon

0x50ed,	// (0x00031950) navi_text_pane_stacon

0x5046,	// (0x000318a9) control_bottom_pane_stacon_g1

0x5115,	// (0x00031978) control_bottom_pane_stacon_t1_ParamLimits

0x5115,	// (0x00031978) control_bottom_pane_stacon_t1

0x8882,	// (0x000350e5) grid_app_pane_ParamLimits

0x8882,	// (0x000350e5) grid_app_pane

0x88a4,	// (0x00035107) scroll_pane_cp15_ParamLimits

0x88a4,	// (0x00035107) scroll_pane_cp15

0x88b7,	// (0x0003511a) cell_app_pane_ParamLimits

0x88b7,	// (0x0003511a) cell_app_pane

0x88df,	// (0x00035142) cell_app_pane_g1_ParamLimits

0x88df,	// (0x00035142) cell_app_pane_g1

0x8903,	// (0x00035166) cell_app_pane_g2_ParamLimits

0x8903,	// (0x00035166) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0003bf1c) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0003bf1c) cell_app_pane_g

0x890f,	// (0x00035172) cell_app_pane_t1_ParamLimits

0x890f,	// (0x00035172) cell_app_pane_t1

0x8926,	// (0x00035189) grid_highlight_pane_ParamLimits

0x8926,	// (0x00035189) grid_highlight_pane

0x82cc,	// (0x00034b2f) cell_highlight_pane_g1

0x82d4,	// (0x00034b37) cell_highlight_pane_g2

0x82dc,	// (0x00034b3f) cell_highlight_pane_g3

0x82e4,	// (0x00034b47) cell_highlight_pane_g4

0x82ec,	// (0x00034b4f) cell_highlight_pane_g5

0x82f4,	// (0x00034b57) cell_highlight_pane_g6

0x82fc,	// (0x00034b5f) cell_highlight_pane_g7

0x8304,	// (0x00034b67) cell_highlight_pane_g8

0x830c,	// (0x00034b6f) cell_highlight_pane_g9

0x2f7c,	// (0x0002f7df) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0003beca) cell_highlight_pane_g

0x8937,	// (0x0003519a) bg_scroll_pane

0x515f,	// (0x000319c2) scroll_handle_pane

0x897e,	// (0x000351e1) scroll_bg_pane_g1

0x8993,	// (0x000351f6) scroll_bg_pane_g2

0x89ab,	// (0x0003520e) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0003bf21) scroll_bg_pane_g

0x89c0,	// (0x00035223) scroll_handle_focus_pane_ParamLimits

0x89c0,	// (0x00035223) scroll_handle_focus_pane

0x897e,	// (0x000351e1) scroll_handle_pane_g1

0x89cd,	// (0x00035230) scroll_handle_pane_g2

0x89ab,	// (0x0003520e) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0003bf28) scroll_handle_pane_g

0x8393,	// (0x00034bf6) bg_popup_sub_pane_cp21_ParamLimits

0x8393,	// (0x00034bf6) bg_popup_sub_pane_cp21

0x89e1,	// (0x00035244) popup_fep_japan_predictive_window_t1_ParamLimits

0x89e1,	// (0x00035244) popup_fep_japan_predictive_window_t1

0x89fb,	// (0x0003525e) popup_fep_japan_predictive_window_t2_ParamLimits

0x89fb,	// (0x0003525e) popup_fep_japan_predictive_window_t2

0x8a2e,	// (0x00035291) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a2e,	// (0x00035291) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0003bf2f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0003bf2f) popup_fep_japan_predictive_window_t

0x7907,	// (0x0003416a) bg_popup_sub_pane_cp23

0x8a65,	// (0x000352c8) listscroll_japin_cand_pane

0x8a6d,	// (0x000352d0) popup_fep_japan_candidate_window_t1

0x8a7b,	// (0x000352de) candidate_pane_ParamLimits

0x8a7b,	// (0x000352de) candidate_pane

0x8a8d,	// (0x000352f0) scroll_pane_cp30

0x8a95,	// (0x000352f8) list_single_popup_jap_candidate_pane_ParamLimits

0x8a95,	// (0x000352f8) list_single_popup_jap_candidate_pane

0x7907,	// (0x0003416a) list_highlight_pane_cp30

0x8aaa,	// (0x0003530d) list_single_popup_jap_candidate_pane_t1

0x8ab9,	// (0x0003531c) level_1_signal

0x8acb,	// (0x0003532e) level_2_signal

0x8ade,	// (0x00035341) level_3_signal

0x8af1,	// (0x00035354) level_4_signal

0x8b04,	// (0x00035367) level_5_signal

0x8b17,	// (0x0003537a) level_6_signal

0x8b2a,	// (0x0003538d) level_7_signal

0x8ab9,	// (0x0003531c) level_1_battery

0x8acb,	// (0x0003532e) level_2_battery

0x8ade,	// (0x00035341) level_3_battery

0x8af1,	// (0x00035354) level_4_battery

0x8b04,	// (0x00035367) level_5_battery

0x8b17,	// (0x0003537a) level_6_battery

0x8b2a,	// (0x0003538d) level_7_battery

0x8b55,	// (0x000353b8) list_menu_pane_ParamLimits

0x8b55,	// (0x000353b8) list_menu_pane

0x8b6b,	// (0x000353ce) scroll_pane_cp25_ParamLimits

0x8b6b,	// (0x000353ce) scroll_pane_cp25

0x8b84,	// (0x000353e7) list_double2_graphic_pane_cp2_ParamLimits

0x8b84,	// (0x000353e7) list_double2_graphic_pane_cp2

0x8b84,	// (0x000353e7) list_double2_large_graphic_pane_cp2_ParamLimits

0x8b84,	// (0x000353e7) list_double2_large_graphic_pane_cp2

0x8b84,	// (0x000353e7) list_double2_pane_cp2_ParamLimits

0x8b84,	// (0x000353e7) list_double2_pane_cp2

0x8b84,	// (0x000353e7) list_double_graphic_pane_cp2_ParamLimits

0x8b84,	// (0x000353e7) list_double_graphic_pane_cp2

0x8b84,	// (0x000353e7) list_double_large_graphic_pane_cp2_ParamLimits

0x8b84,	// (0x000353e7) list_double_large_graphic_pane_cp2

0x8b84,	// (0x000353e7) list_double_number_pane_cp2_ParamLimits

0x8b84,	// (0x000353e7) list_double_number_pane_cp2

0x8b84,	// (0x000353e7) list_double_pane_cp2_ParamLimits

0x8b84,	// (0x000353e7) list_double_pane_cp2

0x8ba8,	// (0x0003540b) list_single_2graphic_pane_cp2_ParamLimits

0x8ba8,	// (0x0003540b) list_single_2graphic_pane_cp2

0x8ba8,	// (0x0003540b) list_single_graphic_heading_pane_cp2_ParamLimits

0x8ba8,	// (0x0003540b) list_single_graphic_heading_pane_cp2

0x8ba8,	// (0x0003540b) list_single_graphic_pane_cp2_ParamLimits

0x8ba8,	// (0x0003540b) list_single_graphic_pane_cp2

0x8ba8,	// (0x0003540b) list_single_heading_pane_cp2_ParamLimits

0x8ba8,	// (0x0003540b) list_single_heading_pane_cp2

0x8bc1,	// (0x00035424) list_single_large_graphic_pane_cp2_ParamLimits

0x8bc1,	// (0x00035424) list_single_large_graphic_pane_cp2

0x8ba8,	// (0x0003540b) list_single_number_heading_pane_cp2_ParamLimits

0x8ba8,	// (0x0003540b) list_single_number_heading_pane_cp2

0x8ba8,	// (0x0003540b) list_single_number_pane_cp2_ParamLimits

0x8ba8,	// (0x0003540b) list_single_number_pane_cp2

0x8bd2,	// (0x00035435) list_single_pane_cp2_ParamLimits

0x8bd2,	// (0x00035435) list_single_pane_cp2

0x8c56,	// (0x000354b9) bg_popup_sub_pane_cp22

0x5211,	// (0x00031a74) popup_side_volume_key_window_g1

0x523b,	// (0x00031a9e) popup_side_volume_key_window_t1

0x5257,	// (0x00031aba) volume_small_pane_cp1

0x7c62,	// (0x000344c5) bg_popup_sub_pane_cp24_ParamLimits

0x7c62,	// (0x000344c5) bg_popup_sub_pane_cp24

0x8c6c,	// (0x000354cf) fep_china_uni_candidate_pane_ParamLimits

0x8c6c,	// (0x000354cf) fep_china_uni_candidate_pane

0x8c80,	// (0x000354e3) fep_china_uni_entry_pane

0x8c90,	// (0x000354f3) popup_fep_china_uni_window_g1

0x8cac,	// (0x0003550f) fep_china_uni_entry_pane_g1

0x8cb4,	// (0x00035517) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0003bf60) fep_china_uni_entry_pane_g

0x8cbc,	// (0x0003551f) fep_entry_item_pane

0x8cc6,	// (0x00035529) fep_candidate_item_pane

0x8cce,	// (0x00035531) fep_china_uni_candidate_pane_g1

0x8cd6,	// (0x00035539) fep_china_uni_candidate_pane_g2

0x8cde,	// (0x00035541) fep_china_uni_candidate_pane_g3

0x8ce6,	// (0x00035549) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0003bf65) fep_china_uni_candidate_pane_g

0x2f7c,	// (0x0002f7df) fep_entry_item_pane_g1

0x8cee,	// (0x00035551) fep_entry_item_pane_t1_ParamLimits

0x8cee,	// (0x00035551) fep_entry_item_pane_t1

0x8d04,	// (0x00035567) fep_candidate_item_pane_t1_ParamLimits

0x8d04,	// (0x00035567) fep_candidate_item_pane_t1

0x8d19,	// (0x0003557c) fep_candidate_item_pane_t2_ParamLimits

0x8d19,	// (0x0003557c) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0003bf6e) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0003bf6e) fep_candidate_item_pane_t

0x79e7,	// (0x0003424a) list_highlight_pane_cp31_ParamLimits

0x79e7,	// (0x0003424a) list_highlight_pane_cp31

0x8d2b,	// (0x0003558e) level_1_signal_lsc

0x8d34,	// (0x00035597) level_2_signal_lsc

0x8d3d,	// (0x000355a0) level_3_signal_lsc

0x8d46,	// (0x000355a9) level_4_signal_lsc

0x8d4f,	// (0x000355b2) level_5_signal_lsc

0x8d58,	// (0x000355bb) level_6_signal_lsc

0x8d61,	// (0x000355c4) level_7_signal_lsc

0x8d61,	// (0x000355c4) level_1_battery_lsc

0x8d6a,	// (0x000355cd) level_2_battery_lsc

0x8d73,	// (0x000355d6) level_3_battery_lsc

0x8d7c,	// (0x000355df) level_4_battery_lsc

0x8d85,	// (0x000355e8) level_5_battery_lsc

0x8d8e,	// (0x000355f1) level_6_battery_lsc

0x8d2b,	// (0x0003558e) level_7_battery_lsc

0x8d97,	// (0x000355fa) scroll_handle_focus_pane_g1

0x8da0,	// (0x00035603) scroll_handle_focus_pane_g2

0x8da9,	// (0x0003560c) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0003bf73) scroll_handle_focus_pane_g

0x525f,	// (0x00031ac2) list_single_2graphic_pane_g1_ParamLimits

0x525f,	// (0x00031ac2) list_single_2graphic_pane_g1

0x499f,	// (0x00031202) list_single_2graphic_pane_g2_ParamLimits

0x499f,	// (0x00031202) list_single_2graphic_pane_g2

0x4925,	// (0x00031188) list_single_2graphic_pane_g3_ParamLimits

0x4925,	// (0x00031188) list_single_2graphic_pane_g3

0x526b,	// (0x00031ace) list_single_2graphic_pane_g4_ParamLimits

0x526b,	// (0x00031ace) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0003bf7a) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0003bf7a) list_single_2graphic_pane_g

0x5277,	// (0x00031ada) list_single_2graphic_pane_t1_ParamLimits

0x5277,	// (0x00031ada) list_single_2graphic_pane_t1

0x52a5,	// (0x00031b08) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x52a5,	// (0x00031b08) list_double2_graphic_large_graphic_pane_g1

0x4a20,	// (0x00031283) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4a20,	// (0x00031283) list_double2_graphic_large_graphic_pane_g2

0x4a31,	// (0x00031294) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4a31,	// (0x00031294) list_double2_graphic_large_graphic_pane_g3

0x52b5,	// (0x00031b18) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x52b5,	// (0x00031b18) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0003bf83) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0003bf83) list_double2_graphic_large_graphic_pane_g

0x52c1,	// (0x00031b24) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x52c1,	// (0x00031b24) list_double2_graphic_large_graphic_pane_t1

0x52d7,	// (0x00031b3a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x52d7,	// (0x00031b3a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0003bf8c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0003bf8c) list_double2_graphic_large_graphic_pane_t

0x8ef4,	// (0x00035757) popup_fast_swap_window_ParamLimits

0x8ef4,	// (0x00035757) popup_fast_swap_window

0x8f10,	// (0x00035773) popup_side_volume_key_window

0x8f2c,	// (0x0003578f) stacon_top_pane

0x8f36,	// (0x00035799) status_pane_ParamLimits

0x8f36,	// (0x00035799) status_pane

0x8f44,	// (0x000357a7) status_small_pane

0x7907,	// (0x0003416a) control_pane

0x7907,	// (0x0003416a) stacon_bottom_pane

0x8257,	// (0x00034aba) scroll_pane_cp121

0x824e,	// (0x00034ab1) set_content_pane

0x8db2,	// (0x00035615) bg_active_tab_pane_g1_cp1

0x8dbb,	// (0x0003561e) bg_active_tab_pane_g2_cp1

0x8dc4,	// (0x00035627) bg_active_tab_pane_g3_cp1

0x8db2,	// (0x00035615) bg_passive_tab_pane_g1_cp1

0x8dbb,	// (0x0003561e) bg_passive_tab_pane_g2_cp1

0x8dc4,	// (0x00035627) bg_passive_tab_pane_g3_cp1

0x8dcd,	// (0x00035630) bg_active_tab_pane_g1_cp2

0x8dbb,	// (0x0003561e) bg_active_tab_pane_g2_cp2

0x8dd6,	// (0x00035639) bg_active_tab_pane_g3_cp2

0x8dcd,	// (0x00035630) bg_passive_tab_pane_g1_cp2

0x8dbb,	// (0x0003561e) bg_passive_tab_pane_g2_cp2

0x8dd6,	// (0x00035639) bg_passive_tab_pane_g3_cp2

0x8ddf,	// (0x00035642) bg_active_tab_pane_g1_cp3

0x8dbb,	// (0x0003561e) bg_active_tab_pane_g2_cp3

0x8de8,	// (0x0003564b) bg_active_tab_pane_g3_cp3

0x8ddf,	// (0x00035642) bg_passive_tab_pane_g1_cp3

0x8dbb,	// (0x0003561e) bg_passive_tab_pane_g2_cp3

0x8de8,	// (0x0003564b) bg_passive_tab_pane_g3_cp3

0x8df1,	// (0x00035654) bg_active_tab_pane_g1_cp4

0x8dbb,	// (0x0003561e) bg_active_tab_pane_g2_cp4

0x8dfc,	// (0x0003565f) bg_active_tab_pane_g3_cp4

0x8df1,	// (0x00035654) bg_passive_tab_pane_g1_cp4

0x8dbb,	// (0x0003561e) bg_passive_tab_pane_g2_cp4

0x8dfc,	// (0x0003565f) bg_passive_tab_pane_g3_cp4

0x8e45,	// (0x000356a8) bg_active_tab_pane_g1_cp5

0x8dbb,	// (0x0003561e) bg_active_tab_pane_g2_cp5

0x8e4e,	// (0x000356b1) bg_active_tab_pane_g3_cp5

0x8e45,	// (0x000356a8) bg_passive_tab_pane_g1_cp5

0x8dbb,	// (0x0003561e) bg_passive_tab_pane_g2_cp5

0x8e4e,	// (0x000356b1) bg_passive_tab_pane_g3_cp5

0x8e57,	// (0x000356ba) list_set_graphic_pane_ParamLimits

0x8e57,	// (0x000356ba) list_set_graphic_pane

0x7907,	// (0x0003416a) bg_set_opt_pane_cp4

0x8e77,	// (0x000356da) list_set_graphic_pane_g1_ParamLimits

0x8e77,	// (0x000356da) list_set_graphic_pane_g1

0x8e83,	// (0x000356e6) list_set_graphic_pane_g2_ParamLimits

0x8e83,	// (0x000356e6) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0003bf91) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0003bf91) list_set_graphic_pane_g

0x0009,

0xfab1,	// (0x0003c314) volume_small_pane_cp_g

0x8ea7,	// (0x0003570a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8ea7,	// (0x0003570a) list_double2_large_graphic_pane_g1_cp2

0x8eb3,	// (0x00035716) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8eb3,	// (0x00035716) list_double2_large_graphic_pane_g2_cp2

0x8ec4,	// (0x00035727) list_double2_large_graphic_pane_g3_cp2

0x8ecc,	// (0x0003572f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8ecc,	// (0x0003572f) list_double2_large_graphic_pane_t1_cp2

0x8ee2,	// (0x00035745) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8ee2,	// (0x00035745) list_double2_large_graphic_pane_t2_cp2

0xaad7,	// (0x0003733a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaad7,	// (0x0003733a) list_double_large_graphic_pane_g1_cp2

0xaae8,	// (0x0003734b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaae8,	// (0x0003734b) list_double_large_graphic_pane_g2_cp2

0x905d,	// (0x000358c0) list_double_large_graphic_pane_g3_cp2

0xaaf9,	// (0x0003735c) list_double_large_graphic_pane_g4_cp

0xab01,	// (0x00037364) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab01,	// (0x00037364) list_double_large_graphic_pane_t1_cp2

0xab18,	// (0x0003737b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab18,	// (0x0003737b) list_double_large_graphic_pane_t2_cp2

0x8f4f,	// (0x000357b2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f4f,	// (0x000357b2) list_double2_graphic_pane_g1_cp2

0x8f5d,	// (0x000357c0) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f5d,	// (0x000357c0) list_double2_graphic_pane_g2_cp2

0x8f6e,	// (0x000357d1) list_double2_graphic_pane_g3_cp2

0x8f78,	// (0x000357db) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f78,	// (0x000357db) list_double2_graphic_pane_t1_cp2

0x8f8e,	// (0x000357f1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f8e,	// (0x000357f1) list_double2_graphic_pane_t2_cp2

0x8fa0,	// (0x00035803) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fa0,	// (0x00035803) list_single_number_heading_pane_g1_cp2

0x8fac,	// (0x0003580f) list_single_number_heading_pane_g2_cp2

0x8fb4,	// (0x00035817) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fb4,	// (0x00035817) list_single_number_heading_pane_t1_cp2

0x8fca,	// (0x0003582d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8fca,	// (0x0003582d) list_single_number_heading_pane_t2_cp2

0x8fdc,	// (0x0003583f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8fdc,	// (0x0003583f) list_single_number_heading_pane_t3_cp2

0x8fa0,	// (0x00035803) list_single_heading_pane_g1_cp2_ParamLimits

0x8fa0,	// (0x00035803) list_single_heading_pane_g1_cp2

0x8fac,	// (0x0003580f) list_single_heading_pane_g2_cp2

0x8fb4,	// (0x00035817) list_single_heading_pane_t1_cp2_ParamLimits

0x8fb4,	// (0x00035817) list_single_heading_pane_t1_cp2

0xa8df,	// (0x00037142) list_single_heading_pane_t2_cp2_ParamLimits

0xa8df,	// (0x00037142) list_single_heading_pane_t2_cp2

0xa827,	// (0x0003708a) list_double_graphic_pane_g1_cp2_ParamLimits

0xa827,	// (0x0003708a) list_double_graphic_pane_g1_cp2

0xa833,	// (0x00037096) list_double_graphic_pane_g2_cp2_ParamLimits

0xa833,	// (0x00037096) list_double_graphic_pane_g2_cp2

0xa842,	// (0x000370a5) list_double_graphic_pane_g3_cp2

0xa84a,	// (0x000370ad) list_double_graphic_pane_t1_cp2_ParamLimits

0xa84a,	// (0x000370ad) list_double_graphic_pane_t1_cp2

0xa860,	// (0x000370c3) list_double_graphic_pane_t2_cp2_ParamLimits

0xa860,	// (0x000370c3) list_double_graphic_pane_t2_cp2

0x9051,	// (0x000358b4) list_double_number_pane_g1_cp2_ParamLimits

0x9051,	// (0x000358b4) list_double_number_pane_g1_cp2

0x905d,	// (0x000358c0) list_double_number_pane_g2_cp2

0xa7eb,	// (0x0003704e) list_double_number_pane_t1_cp2_ParamLimits

0xa7eb,	// (0x0003704e) list_double_number_pane_t1_cp2

0xa7ff,	// (0x00037062) list_double_number_pane_t2_cp2_ParamLimits

0xa7ff,	// (0x00037062) list_double_number_pane_t2_cp2

0xa815,	// (0x00037078) list_double_number_pane_t3_cp2_ParamLimits

0xa815,	// (0x00037078) list_double_number_pane_t3_cp2

0xa6c8,	// (0x00036f2b) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6c8,	// (0x00036f2b) list_single_graphic_pane_g1_cp2

0x90be,	// (0x00035921) list_single_graphic_pane_g2_cp2_ParamLimits

0x90be,	// (0x00035921) list_single_graphic_pane_g2_cp2

0x90ca,	// (0x0003592d) list_single_graphic_pane_g3_cp2

0xa69e,	// (0x00036f01) list_single_graphic_pane_t1_cp2_ParamLimits

0xa69e,	// (0x00036f01) list_single_graphic_pane_t1_cp2

0x90be,	// (0x00035921) list_single_number_pane_g1_cp2_ParamLimits

0x90be,	// (0x00035921) list_single_number_pane_g1_cp2

0x90ca,	// (0x0003592d) list_single_number_pane_g2_cp2

0xa69e,	// (0x00036f01) list_single_number_pane_t1_cp2_ParamLimits

0xa69e,	// (0x00036f01) list_single_number_pane_t1_cp2

0xa6b4,	// (0x00036f17) list_single_number_pane_t2_cp2_ParamLimits

0xa6b4,	// (0x00036f17) list_single_number_pane_t2_cp2

0x8eb3,	// (0x00035716) list_double2_pane_g1_cp2_ParamLimits

0x8eb3,	// (0x00035716) list_double2_pane_g1_cp2

0x8ec4,	// (0x00035727) list_double2_pane_g2_cp2

0x9029,	// (0x0003588c) list_double2_pane_t1_cp2_ParamLimits

0x9029,	// (0x0003588c) list_double2_pane_t1_cp2

0x903f,	// (0x000358a2) list_double2_pane_t2_cp2_ParamLimits

0x903f,	// (0x000358a2) list_double2_pane_t2_cp2

0x9051,	// (0x000358b4) list_double_pane_g1_cp2_ParamLimits

0x9051,	// (0x000358b4) list_double_pane_g1_cp2

0x905d,	// (0x000358c0) list_double_pane_g2_cp2

0x9065,	// (0x000358c8) list_double_pane_t1_cp2_ParamLimits

0x9065,	// (0x000358c8) list_double_pane_t1_cp2

0x907b,	// (0x000358de) list_double_pane_t2_cp2_ParamLimits

0x907b,	// (0x000358de) list_double_pane_t2_cp2

0x90ae,	// (0x00035911) list_single_pane_cp2_g3

0x90be,	// (0x00035921) list_single_pane_g1_cp2_ParamLimits

0x90be,	// (0x00035921) list_single_pane_g1_cp2

0x90ca,	// (0x0003592d) list_single_pane_g2_cp2

0x90d2,	// (0x00035935) list_single_pane_t1_cp2_ParamLimits

0x90d2,	// (0x00035935) list_single_pane_t1_cp2

0x90ea,	// (0x0003594d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90ea,	// (0x0003594d) list_single_large_graphic_pane_g1_cp2

0x90f6,	// (0x00035959) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x90f6,	// (0x00035959) list_single_large_graphic_pane_g2_cp2

0x9102,	// (0x00035965) list_single_large_graphic_pane_g3_cp2

0x910a,	// (0x0003596d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x910a,	// (0x0003596d) list_single_large_graphic_pane_g4_cp1

0x9124,	// (0x00035987) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9124,	// (0x00035987) list_single_large_graphic_pane_t1_cp2

0xa66a,	// (0x00036ecd) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa66a,	// (0x00036ecd) list_single_graphic_heading_pane_g1_cp2

0xa637,	// (0x00036e9a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa637,	// (0x00036e9a) list_single_graphic_heading_pane_g4_cp2

0x90ca,	// (0x0003592d) list_single_graphic_heading_pane_g5_cp2

0xa676,	// (0x00036ed9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa676,	// (0x00036ed9) list_single_graphic_heading_pane_t1_cp2

0xa68c,	// (0x00036eef) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa68c,	// (0x00036eef) list_single_graphic_heading_pane_t2_cp2

0xa62b,	// (0x00036e8e) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa62b,	// (0x00036e8e) list_single_2graphic_pane_g1_cp2

0xa637,	// (0x00036e9a) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa637,	// (0x00036e9a) list_single_2graphic_pane_g2_cp2

0x90ca,	// (0x0003592d) list_single_2graphic_pane_g3_cp2

0xa648,	// (0x00036eab) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa648,	// (0x00036eab) list_single_2graphic_pane_g4_cp2

0xa654,	// (0x00036eb7) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa654,	// (0x00036eb7) list_single_2graphic_pane_t1_cp2

0x2f7c,	// (0x0002f7df) list_highlight_pane_g10_cp1

0xa203,	// (0x00036a66) list_highlight_pane_g1_cp1

0xa20b,	// (0x00036a6e) list_highlight_pane_g2_cp1

0xa213,	// (0x00036a76) list_highlight_pane_g3_cp1

0xa21b,	// (0x00036a7e) list_highlight_pane_g4_cp1

0xa223,	// (0x00036a86) list_highlight_pane_g5_cp1

0xa22b,	// (0x00036a8e) list_highlight_pane_g6_cp1

0xa233,	// (0x00036a96) list_highlight_pane_g7_cp1

0xa23b,	// (0x00036a9e) list_highlight_pane_g8_cp1

0xa243,	// (0x00036aa6) list_highlight_pane_g9_cp1

0xa123,	// (0x00036986) form_field_slider_pane_t3

0xa131,	// (0x00036994) form_field_slider_pane_t4

0xa13f,	// (0x000369a2) slider_form_pane_ParamLimits

0xa13f,	// (0x000369a2) slider_form_pane

0x7907,	// (0x0003416a) control_abbreviations

0x7907,	// (0x0003416a) control_conventions

0x7907,	// (0x0003416a) control_definitions

0x7907,	// (0x0003416a) format_table_attribute

0xa929,	// (0x0003718c) bg_popup_preview_window_pane_g9

0x7907,	// (0x0003416a) format_table_data2

0x7907,	// (0x0003416a) format_table_data3

0x7907,	// (0x0003416a) format_table_data_example

0x0008,

0x7907,	// (0x0003416a) intro_purpose

0xf8ca,	// (0x0003c12d) bg_popup_preview_window_pane_g

0x7907,	// (0x0003416a) texts_category

0x7907,	// (0x0003416a) texts_graphics

0x913a,	// (0x0003599d) text_digital

0x9149,	// (0x000359ac) text_primary

0x9158,	// (0x000359bb) text_primary_small

0x9167,	// (0x000359ca) text_secondary

0x9176,	// (0x000359d9) text_title

0xb06c,	// (0x000378cf) bg_passive_tab_pane_g1_cp3_srt

0x8dbb,	// (0x0003561e) bg_passive_tab_pane_g2_cp3_srt

0xb075,	// (0x000378d8) bg_passive_tab_pane_g3_cp3_srt

0x79e7,	// (0x0003424a) bg_active_tab_pane_cp3_srt_ParamLimits

0x79e7,	// (0x0003424a) bg_active_tab_pane_cp3_srt

0xb07e,	// (0x000378e1) tabs_4_active_pane_srt_g1

0xb086,	// (0x000378e9) tabs_4_active_pane_srt_t1_ParamLimits

0xb086,	// (0x000378e9) tabs_4_active_pane_srt_t1

0xb06c,	// (0x000378cf) bg_active_tab_pane_g1_cp3_copy1

0x8dbb,	// (0x0003561e) bg_active_tab_pane_g2_cp3_copy1

0xb075,	// (0x000378d8) bg_active_tab_pane_g3_cp3_copy1

0x79e7,	// (0x0003424a) tabs_2_long_active_pane_srt_ParamLimits

0x79e7,	// (0x0003424a) tabs_2_long_active_pane_srt

0x79e7,	// (0x0003424a) tabs_2_long_passive_pane_srt_ParamLimits

0x79e7,	// (0x0003424a) tabs_2_long_passive_pane_srt

0x8468,	// (0x00034ccb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8468,	// (0x00034ccb) bg_passive_tab_pane_cp4_srt

0xad57,	// (0x000375ba) bg_passive_tab_pane_g1_cp4_srt

0x8dbb,	// (0x0003561e) bg_passive_tab_pane_g2_cp4_srt

0xad60,	// (0x000375c3) bg_passive_tab_pane_g3_cp4_srt

0x8447,	// (0x00034caa) bg_active_tab_pane_cp4_srt_ParamLimits

0x8447,	// (0x00034caa) bg_active_tab_pane_cp4_srt

0xad69,	// (0x000375cc) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad69,	// (0x000375cc) tabs_2_long_active_pane_srt_t1

0xad57,	// (0x000375ba) bg_active_tab_pane_g1_cp4_srt

0x8dbb,	// (0x0003561e) bg_active_tab_pane_g2_cp4_srt

0xad60,	// (0x000375c3) bg_active_tab_pane_g3_cp4_srt

0x7c62,	// (0x000344c5) tabs_3_long_active_pane_srt_ParamLimits

0x7c62,	// (0x000344c5) tabs_3_long_active_pane_srt

0x7c62,	// (0x000344c5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7c62,	// (0x000344c5) tabs_3_long_passive_pane_cp_srt

0x7c62,	// (0x000344c5) tabs_3_long_passive_pane_srt_ParamLimits

0x7c62,	// (0x000344c5) tabs_3_long_passive_pane_srt

0x8468,	// (0x00034ccb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8468,	// (0x00034ccb) bg_passive_tab_pane_cp5_srt

0x8e45,	// (0x000356a8) bg_passive_tab_pane_g1_cp5_srt

0x8dbb,	// (0x0003561e) bg_passive_tab_pane_g2_cp5_srt

0x8e4e,	// (0x000356b1) bg_passive_tab_pane_g3_cp5_srt

0x8447,	// (0x00034caa) bg_active_tab_pane_cp5_srt_ParamLimits

0x8447,	// (0x00034caa) bg_active_tab_pane_cp5_srt

0xad45,	// (0x000375a8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad45,	// (0x000375a8) tabs_3_long_active_pane_srt_t1

0x8e45,	// (0x000356a8) bg_active_tab_pane_g1_cp5_srt

0x8dbb,	// (0x0003561e) bg_active_tab_pane_g2_cp5_srt

0x8e4e,	// (0x000356b1) bg_active_tab_pane_g3_cp5_srt

0xad37,	// (0x0003759a) navi_text_pane_srt_t1

0xad2f,	// (0x00037592) navi_icon_pane_srt_g1

0x934b,	// (0x00035bae) midp_editing_number_pane_srt

0x9185,	// (0x000359e8) midp_ticker_pane_srt

0x9353,	// (0x00035bb6) midp_ticker_pane_srt_g1

0x935b,	// (0x00035bbe) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0003bfb0) midp_ticker_pane_srt_g

0x9363,	// (0x00035bc6) midp_ticker_pane_srt_t1

0xad20,	// (0x00037583) midp_editing_number_pane_t1_copy1

0x918d,	// (0x000359f0) listscroll_midp_pane

0x918d,	// (0x000359f0) midp_form_pane

0x91fd,	// (0x00035a60) midp_info_popup_window_ParamLimits

0x91fd,	// (0x00035a60) midp_info_popup_window

0x8393,	// (0x00034bf6) bg_popup_sub_pane_cp50_ParamLimits

0x8393,	// (0x00034bf6) bg_popup_sub_pane_cp50

0x9e27,	// (0x0003668a) listscroll_midp_info_pane_ParamLimits

0x9e27,	// (0x0003668a) listscroll_midp_info_pane

0x9e07,	// (0x0003666a) listscroll_form_midp_pane_ParamLimits

0x9e07,	// (0x0003666a) listscroll_form_midp_pane

0x9e13,	// (0x00036676) scroll_bar_cp050

0x9de7,	// (0x0003664a) list_midp_pane

0xbae7,	// (0x0003834a) signal_pane_g2_cp

0x9d21,	// (0x00036584) listscroll_midp_info_pane_t1_ParamLimits

0x9d21,	// (0x00036584) listscroll_midp_info_pane_t1

0x9d39,	// (0x0003659c) listscroll_midp_info_pane_t2_ParamLimits

0x9d39,	// (0x0003659c) listscroll_midp_info_pane_t2

0x9d77,	// (0x000365da) listscroll_midp_info_pane_t3_ParamLimits

0x9d77,	// (0x000365da) listscroll_midp_info_pane_t3

0x9db1,	// (0x00036614) listscroll_midp_info_pane_t4_ParamLimits

0x9db1,	// (0x00036614) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0003c068) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0003c068) listscroll_midp_info_pane_t

0x83f4,	// (0x00034c57) scroll_pane_cp21

0x9cbf,	// (0x00036522) form_midp_field_choice_group_pane

0x9cc8,	// (0x0003652b) form_midp_field_text_pane

0x9d07,	// (0x0003656a) form_midp_field_time_pane

0x9d0f,	// (0x00036572) form_midp_gauge_slider_pane

0x9d18,	// (0x0003657b) form_midp_gauge_wait_pane

0x7907,	// (0x0003416a) form_midp_image_pane

0x5e4d,	// (0x000326b0) list_single_midp_pane_ParamLimits

0x5e4d,	// (0x000326b0) list_single_midp_pane

0x9c77,	// (0x000364da) form_midp_field_text_pane_t1

0x9a47,	// (0x000362aa) input_focus_pane_cp050

0x9cae,	// (0x00036511) list_midp_form_text_pane

0x9c46,	// (0x000364a9) form_midp_field_choice_group_pane_t1

0x9c54,	// (0x000364b7) input_focus_pane_cp051

0x9c68,	// (0x000364cb) list_midp_choice_pane

0x7907,	// (0x0003416a) status_idle_pane

0x9c2a,	// (0x0003648d) form_midp_field_time_pane_t1

0x2f7c,	// (0x0002f7df) wait_anim_pane_g2_copy1

0x9c38,	// (0x0003649b) form_midp_field_time_pane_t2

0x0001,

0x92ab,	// (0x00035b0e) aid_navinavi_width_2_pane

0xf800,	// (0x0003c063) form_midp_field_time_pane_t

0x7907,	// (0x0003416a) input_focus_pane_cp052

0x7907,	// (0x0003416a) bg_input_focus_pane_cp040

0x9bea,	// (0x0003644d) form_midp_gauge_slider_pane_t1

0x9bf8,	// (0x0003645b) form_midp_gauge_slider_pane_t2

0x9c06,	// (0x00036469) form_midp_gauge_slider_pane_t3

0x9c14,	// (0x00036477) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0003c05a) form_midp_gauge_slider_pane_t

0x9c22,	// (0x00036485) form_midp_slider_pane

0x79e7,	// (0x0003424a) bg_input_focus_pane_cp041_ParamLimits

0x79e7,	// (0x0003424a) bg_input_focus_pane_cp041

0x9bb7,	// (0x0003641a) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bb7,	// (0x0003641a) form_midp_gauge_wait_pane_t1

0x9bc9,	// (0x0003642c) form_midp_gauge_wait_pane_t2_ParamLimits

0x9bc9,	// (0x0003642c) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0003c055) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0003c055) form_midp_gauge_wait_pane_t

0x9bdb,	// (0x0003643e) form_midp_wait_pane_ParamLimits

0x9bdb,	// (0x0003643e) form_midp_wait_pane

0x9b81,	// (0x000363e4) form_midp_image_pane_g1

0x9b8a,	// (0x000363ed) form_midp_image_pane_t1

0x9b99,	// (0x000363fc) form_midp_image_pane_t2

0x9ba8,	// (0x0003640b) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0003c04e) form_midp_image_pane_t

0x9b78,	// (0x000363db) list_single_midp_pane_g1

0x5e3e,	// (0x000326a1) list_single_midp_pane_t1

0x9b50,	// (0x000363b3) list_midp_form_item_pane_ParamLimits

0x9b50,	// (0x000363b3) list_midp_form_item_pane

0x9253,	// (0x00035ab6) list_midp_form_item_pane_t1

0x9262,	// (0x00035ac5) midp_ticker_pane_g1

0x926e,	// (0x00035ad1) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0003bf96) midp_ticker_pane_g

0x927a,	// (0x00035add) midp_ticker_pane_t1

0xaf71,	// (0x000377d4) midp_editing_number_pane_t1

0xaf4f,	// (0x000377b2) midp_editing_number_pane

0xaf5e,	// (0x000377c1) midp_ticker_pane

0xad10,	// (0x00037573) ai_message_heading_pane

0x7907,	// (0x0003416a) bg_popup_window_pane_cp14

0xad18,	// (0x0003757b) listscroll_ai_message_pane

0xac9a,	// (0x000374fd) ai_message_heading_pane_g1_ParamLimits

0xac9a,	// (0x000374fd) ai_message_heading_pane_g1

0xaca6,	// (0x00037509) ai_message_heading_pane_g2_ParamLimits

0xaca6,	// (0x00037509) ai_message_heading_pane_g2

0xacb2,	// (0x00037515) ai_message_heading_pane_g3_ParamLimits

0xacb2,	// (0x00037515) ai_message_heading_pane_g3

0xacbe,	// (0x00037521) ai_message_heading_pane_g4_ParamLimits

0xacbe,	// (0x00037521) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0003c18f) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0003c18f) ai_message_heading_pane_g

0xacca,	// (0x0003752d) ai_message_heading_pane_t1_ParamLimits

0xacca,	// (0x0003752d) ai_message_heading_pane_t1

0xace4,	// (0x00037547) ai_message_heading_pane_t2_ParamLimits

0xace4,	// (0x00037547) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0003c198) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0003c198) ai_message_heading_pane_t

0xacf6,	// (0x00037559) bg_popup_heading_pane_cp1_ParamLimits

0xacf6,	// (0x00037559) bg_popup_heading_pane_cp1

0xac88,	// (0x000374eb) list_ai_message_pane_ParamLimits

0xac88,	// (0x000374eb) list_ai_message_pane

0x83f4,	// (0x00034c57) scroll_pane_cp10

0xac24,	// (0x00037487) list_ai_message_pane_g1

0xac2c,	// (0x0003748f) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0003c16c) list_ai_message_pane_g

0xac34,	// (0x00037497) list_ai_message_pane_t1_ParamLimits

0xac34,	// (0x00037497) list_ai_message_pane_t1

0xac49,	// (0x000374ac) list_ai_message_pane_t2_ParamLimits

0xac49,	// (0x000374ac) list_ai_message_pane_t2

0xac5e,	// (0x000374c1) list_ai_message_pane_t3_ParamLimits

0xac5e,	// (0x000374c1) list_ai_message_pane_t3

0xac73,	// (0x000374d6) list_ai_message_pane_t4_ParamLimits

0xac73,	// (0x000374d6) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0003c171) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0003c171) list_ai_message_pane_t

0xac0f,	// (0x00037472) cell_ai_soft_ind_pane_ParamLimits

0xac0f,	// (0x00037472) cell_ai_soft_ind_pane

0x928c,	// (0x00035aef) cell_ai_soft_ind_pane_g1_ParamLimits

0x928c,	// (0x00035aef) cell_ai_soft_ind_pane_g1

0x7907,	// (0x0003416a) grid_highlight_cp1

0x9299,	// (0x00035afc) text_secondary_cp56_ParamLimits

0x9299,	// (0x00035afc) text_secondary_cp56

0xabe4,	// (0x00037447) example_general_pane_ParamLimits

0xabe4,	// (0x00037447) example_general_pane

0xabf0,	// (0x00037453) example_parent_pane_g1_ParamLimits

0xabf0,	// (0x00037453) example_parent_pane_g1

0xabfc,	// (0x0003745f) example_parent_pane_t1_ParamLimits

0xabfc,	// (0x0003745f) example_parent_pane_t1

0x59e2,	// (0x00032245) popup_preview_text_window_ParamLimits

0x59e2,	// (0x00032245) popup_preview_text_window

0x90b6,	// (0x00035919) list_single_pane_cp2_g4

0x7d3e,	// (0x000345a1) bg_popup_preview_window_pane_ParamLimits

0x7d3e,	// (0x000345a1) bg_popup_preview_window_pane

0xa931,	// (0x00037194) popup_preview_text_window_t1_ParamLimits

0xa931,	// (0x00037194) popup_preview_text_window_t1

0xa94f,	// (0x000371b2) popup_preview_text_window_t2_ParamLimits

0xa94f,	// (0x000371b2) popup_preview_text_window_t2

0xa998,	// (0x000371fb) popup_preview_text_window_t3_ParamLimits

0xa998,	// (0x000371fb) popup_preview_text_window_t3

0xa9dd,	// (0x00037240) popup_preview_text_window_t4_ParamLimits

0xa9dd,	// (0x00037240) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0003c140) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0003c140) popup_preview_text_window_t

0xaa5b,	// (0x000372be) scroll_pane_cp11

0x99d3,	// (0x00036236) bg_popup_preview_window_pane_g1

0xa8f1,	// (0x00037154) bg_popup_preview_window_pane_g2

0xa8f9,	// (0x0003715c) bg_popup_preview_window_pane_g3

0xa901,	// (0x00037164) bg_popup_preview_window_pane_g4

0xa909,	// (0x0003716c) bg_popup_preview_window_pane_g5

0xa911,	// (0x00037174) bg_popup_preview_window_pane_g6

0xa919,	// (0x0003717c) bg_popup_preview_window_pane_g7

0xa921,	// (0x00037184) bg_popup_preview_window_pane_g8

0x44a7,	// (0x00030d0a) aid_popup_width_pane

0x59c0,	// (0x00032223) popup_midp_note_alarm_window_ParamLimits

0x59c0,	// (0x00032223) popup_midp_note_alarm_window

0x8268,	// (0x00034acb) data_form_pane_ParamLimits

0x4e0b,	// (0x0003166e) form_field_data_pane_g1

0x4e15,	// (0x00031678) form_field_data_pane_t1_ParamLimits

0x8274,	// (0x00034ad7) input_focus_pane_ParamLimits

0x4e2d,	// (0x00031690) data_form_wide_pane_ParamLimits

0x4e3e,	// (0x000316a1) form_field_data_wide_pane_g1

0x4e4a,	// (0x000316ad) form_field_data_wide_pane_t1_ParamLimits

0x7fe5,	// (0x00034848) input_focus_pane_cp6_ParamLimits

0x83a1,	// (0x00034c04) input_popup_find_pane_g1_ParamLimits

0x83a1,	// (0x00034c04) input_popup_find_pane_g1

0x50c0,	// (0x00031923) aid_navi_side_left_pane

0x50d5,	// (0x00031938) aid_navi_side_right_pane

0xa2fe,	// (0x00036b61) bg_popup_window_pane_cp30_ParamLimits

0xa2fe,	// (0x00036b61) bg_popup_window_pane_cp30

0xa378,	// (0x00036bdb) popup_midp_note_alarm_window_g1_ParamLimits

0xa378,	// (0x00036bdb) popup_midp_note_alarm_window_g1

0xa3a8,	// (0x00036c0b) popup_midp_note_alarm_window_t1_ParamLimits

0xa3a8,	// (0x00036c0b) popup_midp_note_alarm_window_t1

0xa449,	// (0x00036cac) popup_midp_note_alarm_window_t2_ParamLimits

0xa449,	// (0x00036cac) popup_midp_note_alarm_window_t2

0xa4f7,	// (0x00036d5a) popup_midp_note_alarm_window_t3_ParamLimits

0xa4f7,	// (0x00036d5a) popup_midp_note_alarm_window_t3

0xa529,	// (0x00036d8c) popup_midp_note_alarm_window_t4_ParamLimits

0xa529,	// (0x00036d8c) popup_midp_note_alarm_window_t4

0xa54f,	// (0x00036db2) popup_midp_note_alarm_window_t5_ParamLimits

0xa54f,	// (0x00036db2) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0003c0dd) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0003c0dd) popup_midp_note_alarm_window_t

0xa5fb,	// (0x00036e5e) wait_bar_pane_cp1_ParamLimits

0xa5fb,	// (0x00036e5e) wait_bar_pane_cp1

0x7907,	// (0x0003416a) wait_anim_pane_copy1

0x7907,	// (0x0003416a) wait_border_pane_copy1

0x9fe4,	// (0x00036847) wait_border_pane_g1_copy1

0x4e64,	// (0x000316c7) form_field_popup_pane_g1

0x4e6c,	// (0x000316cf) form_field_popup_pane_t1_ParamLimits

0x8274,	// (0x00034ad7) input_focus_pane_cp7_ParamLimits

0x82a2,	// (0x00034b05) list_form_pane_ParamLimits

0x4e84,	// (0x000316e7) form_field_popup_wide_pane_g1

0x4e8c,	// (0x000316ef) form_field_popup_wide_pane_t1_ParamLimits

0x8274,	// (0x00034ad7) input_focus_pane_cp8_ParamLimits

0x82ae,	// (0x00034b11) list_form_wide_pane_ParamLimits

0xb10e,	// (0x00037971) aid_size_cell_graphic_pane

0x4f16,	// (0x00031779) data_form_pane_t1_ParamLimits

0x60d3,	// (0x00032936) data_form_wide_pane_t1_ParamLimits

0x959a,	// (0x00035dfd) bg_status_flat_pane

0x7947,	// (0x000341aa) title_pane_t1_ParamLimits

0x79af,	// (0x00034212) title_pane_t2_ParamLimits

0x79d5,	// (0x00034238) title_pane_t3_ParamLimits

0xf532,	// (0x0003bd95) title_pane_t_ParamLimits

0x8ab9,	// (0x0003531c) level_1_signal_ParamLimits

0x8acb,	// (0x0003532e) level_2_signal_ParamLimits

0x8ade,	// (0x00035341) level_3_signal_ParamLimits

0x8af1,	// (0x00035354) level_4_signal_ParamLimits

0x8b04,	// (0x00035367) level_5_signal_ParamLimits

0x8b17,	// (0x0003537a) level_6_signal_ParamLimits

0x8b2a,	// (0x0003538d) level_7_signal_ParamLimits

0x8ab9,	// (0x0003531c) level_1_battery_ParamLimits

0x8acb,	// (0x0003532e) level_2_battery_ParamLimits

0x8ade,	// (0x00035341) level_3_battery_ParamLimits

0x8af1,	// (0x00035354) level_4_battery_ParamLimits

0x8b04,	// (0x00035367) level_5_battery_ParamLimits

0x8b17,	// (0x0003537a) level_6_battery_ParamLimits

0x8b2a,	// (0x0003538d) level_7_battery_ParamLimits

0xa203,	// (0x00036a66) bg_status_flat_pane_g1

0xa20b,	// (0x00036a6e) bg_status_flat_pane_g2

0xa213,	// (0x00036a76) bg_status_flat_pane_g3

0xa21b,	// (0x00036a7e) bg_status_flat_pane_g4

0xa223,	// (0x00036a86) bg_status_flat_pane_g5

0xa22b,	// (0x00036a8e) bg_status_flat_pane_g6

0xa233,	// (0x00036a96) bg_status_flat_pane_g7

0x79fd,	// (0x00034260) tabs_3_active_pane_t1_ParamLimits

0x79fd,	// (0x00034260) tabs_3_passive_pane_t1_ParamLimits

0x7a17,	// (0x0003427a) tabs_4_active_pane_t1_ParamLimits

0x7a17,	// (0x0003427a) tabs_4_1_passive_pane_t1_ParamLimits

0x8435,	// (0x00034c98) tabs_2_active_pane_t1_ParamLimits

0x8435,	// (0x00034c98) tabs_2_passive_pane_t1_ParamLimits

0x8447,	// (0x00034caa) bg_active_tab_pane_cp4_ParamLimits

0x8455,	// (0x00034cb8) tabs_2_long_active_pane_t1_ParamLimits

0x8468,	// (0x00034ccb) bg_passive_tab_pane_cp4_ParamLimits

0x5d15,	// (0x00032578) list_single_midp_graphic_pane_t1_ParamLimits

0x8447,	// (0x00034caa) bg_active_tab_pane_cp5_ParamLimits

0x8474,	// (0x00034cd7) tabs_3_long_active_pane_t1_ParamLimits

0x8468,	// (0x00034ccb) bg_passive_tab_pane_cp5_ParamLimits

0x5d15,	// (0x00032578) list_single_midp_graphic_pane_t1

0x959a,	// (0x00035dfd) bg_status_flat_pane_ParamLimits

0x9663,	// (0x00035ec6) indicator_pane_cp2_ParamLimits

0x9663,	// (0x00035ec6) indicator_pane_cp2

0x978e,	// (0x00035ff1) navi_pane_srt_ParamLimits

0x978e,	// (0x00035ff1) navi_pane_srt

0x97b2,	// (0x00036015) popup_clock_digital_analogue_window_cp1

0x7ac4,	// (0x00034327) indicator_pane_t1

0x9185,	// (0x000359e8) copy_highlight_pane

0x9185,	// (0x000359e8) cursor_graphics_pane

0x9185,	// (0x000359e8) graphic_within_text_pane

0x9185,	// (0x000359e8) link_highlight_pane

0xaa1e,	// (0x00037281) popup_preview_text_window_t5_ParamLimits

0xaa1e,	// (0x00037281) popup_preview_text_window_t5

0x92b3,	// (0x00035b16) cursor_digital_pane

0x92b3,	// (0x00035b16) cursor_primary_pane

0x92c4,	// (0x00035b27) cursor_primary_small_pane

0x92cc,	// (0x00035b2f) cursor_secondary_pane

0x92d4,	// (0x00035b37) cursor_title_pane

0x92b3,	// (0x00035b16) link_highlight_digital_pane

0x92bb,	// (0x00035b1e) link_highlight_primary_pane

0x92c4,	// (0x00035b27) link_highlight_primary_small_pane

0x92cc,	// (0x00035b2f) link_highlight_secondary_pane

0x92d4,	// (0x00035b37) link_highlight_title_pane

0x92b3,	// (0x00035b16) copy_highlight_digital_pane

0x92b3,	// (0x00035b16) copy_highlight_primary_pane

0x92c4,	// (0x00035b27) copy_highlight_primary_small_pane

0x92cc,	// (0x00035b2f) copy_highlight_secondary_pane

0x92d4,	// (0x00035b37) copy_highlight_title_pane

0x92cc,	// (0x00035b2f) graphic_text_digital_pane

0xa2a1,	// (0x00036b04) graphic_text_primary_pane

0xa2aa,	// (0x00036b0d) graphic_text_primary_small_pane

0x92c4,	// (0x00035b27) graphic_text_secondary_pane

0x92b3,	// (0x00035b16) graphic_text_title_pane

0x92dc,	// (0x00035b3f) cursor_primary_pane_g1

0xa293,	// (0x00036af6) cursor_text_primary_t1

0xa27b,	// (0x00036ade) cursor_primary_small_pane_g1

0xa285,	// (0x00036ae8) cursor_text_primary_small_t1

0xa263,	// (0x00036ac6) cursor_primary_small_pane_g1_copy1

0xa26d,	// (0x00036ad0) cursor_text_primary_small_t1_copy1

0xa24b,	// (0x00036aae) cursor_text_title_t1

0xa259,	// (0x00036abc) cursor_title_pane_g1

0x92dc,	// (0x00035b3f) cursor_digital_pane_g1

0x92e6,	// (0x00035b49) cursor_text_digital_t1

0x930b,	// (0x00035b6e) link_highlight_primary_pane_g1

0xa1f4,	// (0x00036a57) link_highlight_primary_pane_t1

0x92f4,	// (0x00035b57) link_highlight_primary_small_pane_g1

0x92fc,	// (0x00035b5f) link_highlight_primary_small_pane_t1

0x930b,	// (0x00035b6e) link_highlight_secondary_pane_g1

0x9313,	// (0x00035b76) link_highlight_secondary_pane_t1

0xa168,	// (0x000369cb) link_highlight_title_pane_g1

0xa170,	// (0x000369d3) link_highlight_title_pane_t1

0xa151,	// (0x000369b4) link_highlight_digital_pane_g1

0xa159,	// (0x000369bc) link_highlight_digital_pane_t1

0xa029,	// (0x0003688c) copy_highlight_primary_pane_g1

0xa031,	// (0x00036894) copy_highlight_primary_pane_t1

0xa003,	// (0x00036866) copy_highlight_primary_small_pane_g1

0xa01a,	// (0x0003687d) copy_highlight_primary_small_pane_t1

0x9322,	// (0x00035b85) copy_highlight_secondary_pane_g1

0x932a,	// (0x00035b8d) copy_highlight_secondary_pane_t1

0xa003,	// (0x00036866) copy_highlight_title_pane_g1

0xa00b,	// (0x0003686e) copy_highlight_title_pane_t1

0xa029,	// (0x0003688c) copy_highlight_digital_pane_g1

0xb2dc,	// (0x00037b3f) copy_highlight_digital_pane_t1

0xb230,	// (0x00037a93) graphic_text_primary_pane_g1

0xb2c0,	// (0x00037b23) graphic_text_primary_pane_t1

0xb2ce,	// (0x00037b31) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0003c20c) graphic_text_primary_pane_t

0xb29c,	// (0x00037aff) graphic_text_primary_small_pane_g1

0xb2a4,	// (0x00037b07) graphic_text_primary_small_pane_t1

0xb2b2,	// (0x00037b15) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0003c207) graphic_text_primary_small_pane_t

0xb278,	// (0x00037adb) graphic_text_secondary_pane_g1

0xb280,	// (0x00037ae3) graphic_text_secondary_pane_t1

0xb28e,	// (0x00037af1) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0003c202) graphic_text_secondary_pane_t

0xb254,	// (0x00037ab7) graphic_text_title_pane_g1

0xb25c,	// (0x00037abf) graphic_text_title_pane_t1

0xb26a,	// (0x00037acd) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0003c1fd) graphic_text_title_pane_t

0xb230,	// (0x00037a93) graphic_text_digital_pane_g1

0xb238,	// (0x00037a9b) graphic_text_digital_pane_t1

0xb246,	// (0x00037aa9) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0003c1f8) graphic_text_digital_pane_t

0x79e7,	// (0x0003424a) navi_icon_pane_srt_ParamLimits

0x79e7,	// (0x0003424a) navi_icon_pane_srt

0x7907,	// (0x0003416a) navi_midp_pane_srt

0x7907,	// (0x0003416a) navi_navi_pane_srt

0x79e7,	// (0x0003424a) navi_text_pane_srt_ParamLimits

0x79e7,	// (0x0003424a) navi_text_pane_srt

0xb1fb,	// (0x00037a5e) navi_navi_icon_text_pane_srt

0xb203,	// (0x00037a66) navi_navi_pane_srt_g1_ParamLimits

0xb203,	// (0x00037a66) navi_navi_pane_srt_g1

0xb215,	// (0x00037a78) navi_navi_pane_srt_g2_ParamLimits

0xb215,	// (0x00037a78) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0003c1f3) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0003c1f3) navi_navi_pane_srt_g

0xb227,	// (0x00037a8a) navi_navi_tabs_pane_srt

0xb1fb,	// (0x00037a5e) navi_navi_text_pane_srt

0xb1fb,	// (0x00037a5e) navi_navi_volume_pane_srt

0xb1ec,	// (0x00037a4f) navi_navi_text_pane_srt_t1

0x625c,	// (0x00032abf) navi_navi_volume_pane_srt_g1

0x6264,	// (0x00032ac7) volume_small_pane_srt_ParamLimits

0x6264,	// (0x00032ac7) volume_small_pane_srt

0x542a,	// (0x00031c8d) volume_small_pane_srt_g1_ParamLimits

0x542a,	// (0x00031c8d) volume_small_pane_srt_g1

0x543a,	// (0x00031c9d) volume_small_pane_srt_g2_ParamLimits

0x543a,	// (0x00031c9d) volume_small_pane_srt_g2

0x544b,	// (0x00031cae) volume_small_pane_srt_g3_ParamLimits

0x544b,	// (0x00031cae) volume_small_pane_srt_g3

0x545c,	// (0x00031cbf) volume_small_pane_srt_g4_ParamLimits

0x545c,	// (0x00031cbf) volume_small_pane_srt_g4

0x546d,	// (0x00031cd0) volume_small_pane_srt_g5_ParamLimits

0x546d,	// (0x00031cd0) volume_small_pane_srt_g5

0x547e,	// (0x00031ce1) volume_small_pane_srt_g6_ParamLimits

0x547e,	// (0x00031ce1) volume_small_pane_srt_g6

0x548f,	// (0x00031cf2) volume_small_pane_srt_g7_ParamLimits

0x548f,	// (0x00031cf2) volume_small_pane_srt_g7

0x54a0,	// (0x00031d03) volume_small_pane_srt_g8_ParamLimits

0x54a0,	// (0x00031d03) volume_small_pane_srt_g8

0x54b1,	// (0x00031d14) volume_small_pane_srt_g9_ParamLimits

0x54b1,	// (0x00031d14) volume_small_pane_srt_g9

0x54c2,	// (0x00031d25) volume_small_pane_srt_g10_ParamLimits

0x54c2,	// (0x00031d25) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0003bf9b) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0003bf9b) volume_small_pane_srt_g

0x7de7,	// (0x0003464a) query_popup_data_pane_cp2

0xb1d2,	// (0x00037a35) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1d2,	// (0x00037a35) navi_navi_icon_text_pane_srt_t1

0xa2a1,	// (0x00036b04) navi_tabs_2_long_pane_srt

0xa2a1,	// (0x00036b04) navi_tabs_2_pane_srt

0xa2a1,	// (0x00036b04) navi_tabs_3_long_pane_srt

0xa2a1,	// (0x00036b04) navi_tabs_3_pane_srt

0xa2a1,	// (0x00036b04) navi_tabs_4_pane_srt

0x623c,	// (0x00032a9f) tabs_2_active_pane_srt_ParamLimits

0x623c,	// (0x00032a9f) tabs_2_active_pane_srt

0x624c,	// (0x00032aaf) tabs_2_passive_pane_srt_ParamLimits

0x624c,	// (0x00032aaf) tabs_2_passive_pane_srt

0x94a9,	// (0x00035d0c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94a9,	// (0x00035d0c) bg_passive_tab_pane_cp1_srt

0xb19e,	// (0x00037a01) bg_passive_tab_pane_g1_cp1_srt

0x8dbb,	// (0x0003561e) bg_passive_tab_pane_g2_cp1_srt

0xb1a7,	// (0x00037a0a) bg_passive_tab_pane_g3_cp1_srt

0x79e7,	// (0x0003424a) bg_active_tab_pane_cp1_srt_ParamLimits

0x79e7,	// (0x0003424a) bg_active_tab_pane_cp1_srt

0xb1b0,	// (0x00037a13) tabs_2_active_pane_srt_g1

0xb1b8,	// (0x00037a1b) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b8,	// (0x00037a1b) tabs_2_active_pane_srt_t1

0xb19e,	// (0x00037a01) bg_active_tab_pane_g1_cp1_srt

0x8dbb,	// (0x0003561e) bg_active_tab_pane_g2_cp1_srt

0xb1a7,	// (0x00037a0a) bg_active_tab_pane_g3_cp1_srt

0x6209,	// (0x00032a6c) tabs_3_active_pane_srt_ParamLimits

0x6209,	// (0x00032a6c) tabs_3_active_pane_srt

0x621a,	// (0x00032a7d) tabs_3_passive_pane_cp_srt_ParamLimits

0x621a,	// (0x00032a7d) tabs_3_passive_pane_cp_srt

0x622b,	// (0x00032a8e) tabs_3_passive_pane_srt_ParamLimits

0x622b,	// (0x00032a8e) tabs_3_passive_pane_srt

0x94a9,	// (0x00035d0c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94a9,	// (0x00035d0c) bg_passive_tab_pane_cp2_srt

0x9339,	// (0x00035b9c) bg_passive_tab_pane_g1_cp2_srt

0x8dbb,	// (0x0003561e) bg_passive_tab_pane_g2_cp2_srt

0x9342,	// (0x00035ba5) bg_passive_tab_pane_g3_cp2_srt

0x79e7,	// (0x0003424a) bg_active_tab_pane_cp2_srt_ParamLimits

0x79e7,	// (0x0003424a) bg_active_tab_pane_cp2_srt

0xb184,	// (0x000379e7) tabs_3_active_pane_srt_g1

0xb18c,	// (0x000379ef) tabs_3_active_pane_srt_t1_ParamLimits

0xb18c,	// (0x000379ef) tabs_3_active_pane_srt_t1

0x9339,	// (0x00035b9c) bg_active_tab_pane_g1_cp2_srt

0x8dbb,	// (0x0003561e) bg_active_tab_pane_g2_cp2_srt

0x9342,	// (0x00035ba5) bg_active_tab_pane_g3_cp2_srt

0x61c1,	// (0x00032a24) tabs_4_active_pane_srt_ParamLimits

0x61c1,	// (0x00032a24) tabs_4_active_pane_srt

0x61d3,	// (0x00032a36) tabs_4_passive_pane_cp2_srt_ParamLimits

0x61d3,	// (0x00032a36) tabs_4_passive_pane_cp2_srt

0x5635,	// (0x00031e98) aid_size_cell_toolbar

0x8468,	// (0x00034ccb) main_idle_act_pane_ParamLimits

0x57f6,	// (0x00032059) popup_large_graphic_colour_window_ParamLimits

0x5b5d,	// (0x000323c0) popup_toolbar_window_ParamLimits

0x5b5d,	// (0x000323c0) popup_toolbar_window

0x6133,	// (0x00032996) list_single_graphic_2heading_pane_ParamLimits

0x6133,	// (0x00032996) list_single_graphic_2heading_pane

0x8624,	// (0x00034e87) aid_size_cell_apps_grid_lsc_pane

0x887a,	// (0x000350dd) aid_size_cell_apps_grid_prt_pane

0x94a9,	// (0x00035d0c) bg_wml_button_pane_cp1_ParamLimits

0x94a9,	// (0x00035d0c) bg_wml_button_pane_cp1

0x9c77,	// (0x000364da) form_midp_field_text_pane_t1_ParamLimits

0x9a47,	// (0x000362aa) input_focus_pane_cp050_ParamLimits

0x9cae,	// (0x00036511) list_midp_form_text_pane_ParamLimits

0x9c54,	// (0x000364b7) input_focus_pane_cp051_ParamLimits

0x9c68,	// (0x000364cb) list_midp_choice_pane_ParamLimits

0x9b00,	// (0x00036363) list_single_2graphic_pane_cp3_ParamLimits

0x9b00,	// (0x00036363) list_single_2graphic_pane_cp3

0x9b21,	// (0x00036384) list_single_midp_graphic_pane_ParamLimits

0x9b21,	// (0x00036384) list_single_midp_graphic_pane

0x4431,	// (0x00030c94) list_single_graphic_2heading_pane_g1_ParamLimits

0x4431,	// (0x00030c94) list_single_graphic_2heading_pane_g1

0x443d,	// (0x00030ca0) list_single_graphic_2heading_pane_g4_ParamLimits

0x443d,	// (0x00030ca0) list_single_graphic_2heading_pane_g4

0x4449,	// (0x00030cac) list_single_graphic_2heading_pane_g5_ParamLimits

0x4449,	// (0x00030cac) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0003bfee) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0003bfee) list_single_graphic_2heading_pane_g

0x4455,	// (0x00030cb8) list_single_graphic_2heading_pane_t1_ParamLimits

0x4455,	// (0x00030cb8) list_single_graphic_2heading_pane_t1

0x4469,	// (0x00030ccc) list_single_graphic_2heading_pane_t2_ParamLimits

0x4469,	// (0x00030ccc) list_single_graphic_2heading_pane_t2

0x4483,	// (0x00030ce6) list_single_graphic_2heading_pane_t3_ParamLimits

0x4483,	// (0x00030ce6) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0003bff5) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0003bff5) list_single_graphic_2heading_pane_t

0x9911,	// (0x00036174) bg_popup_sub_pane_cp2

0x993b,	// (0x0003619e) grid_toobar_pane

0x5c0a,	// (0x0003246d) cell_toolbar_pane_ParamLimits

0x5c0a,	// (0x0003246d) cell_toolbar_pane

0x9977,	// (0x000361da) cell_toolbar_pane_g1_ParamLimits

0x9977,	// (0x000361da) cell_toolbar_pane_g1

0x998b,	// (0x000361ee) cell_toolbar_pane_g2_ParamLimits

0x998b,	// (0x000361ee) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0003c003) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0003c003) cell_toolbar_pane_g

0x99ad,	// (0x00036210) grid_highlight_pane_cp2_ParamLimits

0x99ad,	// (0x00036210) grid_highlight_pane_cp2

0x99c7,	// (0x0003622a) toolbar_button_pane

0x99d3,	// (0x00036236) toolbar_button_pane_g1

0x99db,	// (0x0003623e) toolbar_button_pane_g2

0x99e3,	// (0x00036246) toolbar_button_pane_g3

0x99eb,	// (0x0003624e) toolbar_button_pane_g4

0x99f3,	// (0x00036256) toolbar_button_pane_g5

0x99fb,	// (0x0003625e) toolbar_button_pane_g6

0x9a03,	// (0x00036266) toolbar_button_pane_g7

0x9a0b,	// (0x0003626e) toolbar_button_pane_g8

0x9a13,	// (0x00036276) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0003c008) toolbar_button_pane_g

0x5c7c,	// (0x000324df) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5c7c,	// (0x000324df) list_single_2graphic_pane_g1_cp3

0x5c88,	// (0x000324eb) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5c88,	// (0x000324eb) list_single_2graphic_pane_g2_cp3

0x5c99,	// (0x000324fc) list_single_2graphic_pane_g3_cp3

0x5ca1,	// (0x00032504) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5ca1,	// (0x00032504) list_single_2graphic_pane_g4_cp3

0x5cad,	// (0x00032510) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5cad,	// (0x00032510) list_single_2graphic_pane_t1_cp3

0x5d09,	// (0x0003256c) list_single_midp_graphic_pane_g2_ParamLimits

0x5d09,	// (0x0003256c) list_single_midp_graphic_pane_g2

0x563d,	// (0x00031ea0) aid_zoom_text_primary

0x4415,	// (0x00030c78) aid_zoom_text_secondary

0x93f3,	// (0x00035c56) status_small_pane_g7_ParamLimits

0x93f3,	// (0x00035c56) status_small_pane_g7

0x9416,	// (0x00035c79) status_small_pane_t1_ParamLimits

0x791e,	// (0x00034181) title_pane_g2

0x0003,

0xf529,	// (0x0003bd8c) title_pane_g

0x7e8f,	// (0x000346f2) aid_size_cell_colour_1_pane_ParamLimits

0x7e8f,	// (0x000346f2) aid_size_cell_colour_1_pane

0x7ea3,	// (0x00034706) aid_size_cell_colour_2_pane_ParamLimits

0x7ea3,	// (0x00034706) aid_size_cell_colour_2_pane

0x7eb7,	// (0x0003471a) aid_size_cell_colour_3_pane_ParamLimits

0x7eb7,	// (0x0003471a) aid_size_cell_colour_3_pane

0x7ecb,	// (0x0003472e) aid_size_cell_colour_4_pane_ParamLimits

0x7ecb,	// (0x0003472e) aid_size_cell_colour_4_pane

0x4ffd,	// (0x00031860) title_pane_stacon_g1_ParamLimits

0x4ffd,	// (0x00031860) title_pane_stacon_g1

0xa088,	// (0x000368eb) popup_note_wait_window_g3_ParamLimits

0xa088,	// (0x000368eb) popup_note_wait_window_g3

0xa0fe,	// (0x00036961) popup_note_wait_window_t5_ParamLimits

0xa0fe,	// (0x00036961) popup_note_wait_window_t5

0x7907,	// (0x0003416a) main_feb_china_hwr_fs_writing_pane

0x56d7,	// (0x00031f3a) popup_feb_china_hwr_fs_window_ParamLimits

0x56d7,	// (0x00031f3a) popup_feb_china_hwr_fs_window

0x5da1,	// (0x00032604) aid_size_cell_hwr_fs_ParamLimits

0x5da1,	// (0x00032604) aid_size_cell_hwr_fs

0x9a47,	// (0x000362aa) bg_popup_sub_pane_cp3_ParamLimits

0x9a47,	// (0x000362aa) bg_popup_sub_pane_cp3

0x5db6,	// (0x00032619) grid_hwr_fs_pane_ParamLimits

0x5db6,	// (0x00032619) grid_hwr_fs_pane

0x5dce,	// (0x00032631) linegrid_hwr_fs_pane_ParamLimits

0x5dce,	// (0x00032631) linegrid_hwr_fs_pane

0x5dde,	// (0x00032641) cell_hwr_fs_pane_ParamLimits

0x5dde,	// (0x00032641) cell_hwr_fs_pane

0x9a53,	// (0x000362b6) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a53,	// (0x000362b6) linegrid_hwr_fs_pane_g1

0x9a5f,	// (0x000362c2) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a5f,	// (0x000362c2) linegrid_hwr_fs_pane_g2

0x9a71,	// (0x000362d4) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a71,	// (0x000362d4) linegrid_hwr_fs_pane_g3

0x5e00,	// (0x00032663) linegrid_hwr_fs_pane_g4_ParamLimits

0x5e00,	// (0x00032663) linegrid_hwr_fs_pane_g4

0x5e1a,	// (0x0003267d) linegrid_hwr_fs_pane_g5_ParamLimits

0x5e1a,	// (0x0003267d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0003c033) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0003c033) linegrid_hwr_fs_pane_g

0x9a7d,	// (0x000362e0) cell_hwr_fs_pane_g1_ParamLimits

0x9a7d,	// (0x000362e0) cell_hwr_fs_pane_g1

0x9848,	// (0x000360ab) cell_hwr_fs_pane_g2_ParamLimits

0x9848,	// (0x000360ab) cell_hwr_fs_pane_g2

0x9a93,	// (0x000362f6) cell_hwr_fs_pane_g3_ParamLimits

0x9a93,	// (0x000362f6) cell_hwr_fs_pane_g3

0x9aa0,	// (0x00036303) cell_hwr_fs_pane_g4_ParamLimits

0x9aa0,	// (0x00036303) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0003c03e) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0003c03e) cell_hwr_fs_pane_g

0x5e30,	// (0x00032693) cell_hwr_fs_pane_t1

0x7907,	// (0x0003416a) grid_highlight_pane_cp6

0x7907,	// (0x0003416a) main_idle_act2_pane

0x83db,	// (0x00034c3e) aid_inside_area_popup_secondary

0xa735,	// (0x00036f98) aid_inside_area_window_primary_ParamLimits

0xa735,	// (0x00036f98) aid_inside_area_window_primary

0xb2eb,	// (0x00037b4e) ai2_news_ticker_pane

0xb2f3,	// (0x00037b56) aid_size_cell_ai1_link_ParamLimits

0xb2f3,	// (0x00037b56) aid_size_cell_ai1_link

0xb30d,	// (0x00037b70) popup_ai2_data_window_ParamLimits

0xb30d,	// (0x00037b70) popup_ai2_data_window

0xb323,	// (0x00037b86) popup_ai2_link_window_ParamLimits

0xb323,	// (0x00037b86) popup_ai2_link_window

0x9a47,	// (0x000362aa) bg_popup_sub_pane_cp4_ParamLimits

0x9a47,	// (0x000362aa) bg_popup_sub_pane_cp4

0xb337,	// (0x00037b9a) grid_ai2_link_pane_ParamLimits

0xb337,	// (0x00037b9a) grid_ai2_link_pane

0xb34e,	// (0x00037bb1) popup_ai2_link_window_g1_ParamLimits

0xb34e,	// (0x00037bb1) popup_ai2_link_window_g1

0xb35a,	// (0x00037bbd) popup_ai2_link_window_g2_ParamLimits

0xb35a,	// (0x00037bbd) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0003c211) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0003c211) popup_ai2_link_window_g

0xb369,	// (0x00037bcc) ai2_mp_button_pane

0xb371,	// (0x00037bd4) ai2_mp_volume_pane

0x9c54,	// (0x000364b7) bg_popup_sub_pane_cp5_ParamLimits

0x9c54,	// (0x000364b7) bg_popup_sub_pane_cp5

0xb379,	// (0x00037bdc) heading_ai2_gene_pane_ParamLimits

0xb379,	// (0x00037bdc) heading_ai2_gene_pane

0xb385,	// (0x00037be8) list_ai2_gene_pane_ParamLimits

0xb385,	// (0x00037be8) list_ai2_gene_pane

0xb3cd,	// (0x00037c30) cell_ai2_link_pane_ParamLimits

0xb3cd,	// (0x00037c30) cell_ai2_link_pane

0xb3e3,	// (0x00037c46) cell_ai2_link_pane_g1

0x7907,	// (0x0003416a) grid_highlight_pane_cp7

0x6279,	// (0x00032adc) ai2_mp_volume_pane_g1

0xb4b3,	// (0x00037d16) ai2_mp_volume_pane_g2

0xb428,	// (0x00037c8b) list_ai2_gene_pane_t1

0xb4bb,	// (0x00037d1e) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0003c22a) ai2_mp_volume_pane_g

0x6281,	// (0x00032ae4) volume_small_pane_cp3

0xb4c3,	// (0x00037d26) aid_size_cell_ai2_button

0xb4cb,	// (0x00037d2e) grid_ai2_button_pane

0xb4d4,	// (0x00037d37) cell_ai2_button_pane_ParamLimits

0xb4d4,	// (0x00037d37) cell_ai2_button_pane

0x2f7c,	// (0x0002f7df) cell_ai2_button_pane_g1

0x7907,	// (0x0003416a) grid_highlight_pane_cp8

0xb473,	// (0x00037cd6) ai2_gene_pane_t1_ParamLimits

0xb473,	// (0x00037cd6) ai2_gene_pane_t1

0x562b,	// (0x00031e8e) aid_height_parent_landscape

0xadb7,	// (0x0003761a) aid_height_set_list

0xadc8,	// (0x0003762b) aid_size_parent

0xb10e,	// (0x00037971) aid_size_cell_graphic_pane_ParamLimits

0xb395,	// (0x00037bf8) popup_ai2_data_window_g1_ParamLimits

0xb395,	// (0x00037bf8) popup_ai2_data_window_g1

0xb3a1,	// (0x00037c04) ai2_news_ticker_pane_g1

0xb3a9,	// (0x00037c0c) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0003c216) ai2_news_ticker_pane_g

0xb3b1,	// (0x00037c14) ai2_news_ticker_pane_t1

0xb3bf,	// (0x00037c22) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0003c21b) ai2_news_ticker_pane_t

0xb3ec,	// (0x00037c4f) heading_ai2_gene_pane_g1

0xb3f4,	// (0x00037c57) heading_ai2_gene_pane_t1_ParamLimits

0xb3f4,	// (0x00037c57) heading_ai2_gene_pane_t1

0xb409,	// (0x00037c6c) list_highlight_pane_cp6

0xb411,	// (0x00037c74) ai2_gene_pane_ParamLimits

0xb411,	// (0x00037c74) ai2_gene_pane

0xb436,	// (0x00037c99) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0003c220) list_ai2_gene_pane_t

0xb444,	// (0x00037ca7) list_highlight_pane_cp8_ParamLimits

0xb444,	// (0x00037ca7) list_highlight_pane_cp8

0xb455,	// (0x00037cb8) ai2_gene_pane_g1_ParamLimits

0xb455,	// (0x00037cb8) ai2_gene_pane_g1

0xb467,	// (0x00037cca) ai2_gene_pane_g2_ParamLimits

0xb467,	// (0x00037cca) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0003c225) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0003c225) ai2_gene_pane_g

0x820a,	// (0x00034a6d) scroll_pane_cp12

0x55e8,	// (0x00031e4b) control_pane_t3_ParamLimits

0x55e8,	// (0x00031e4b) control_pane_t3

0x9407,	// (0x00035c6a) status_small_pane_g8_ParamLimits

0x9407,	// (0x00035c6a) status_small_pane_g8

0x57bd,	// (0x00032020) popup_find_window_ParamLimits

0x59d4,	// (0x00032237) popup_note_image_window_ParamLimits

0x5c3a,	// (0x0003249d) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c3a,	// (0x0003249d) list_double2_graphic_pane_vc_g1

0x5c46,	// (0x000324a9) list_double2_graphic_pane_vc_g2_ParamLimits

0x5c46,	// (0x000324a9) list_double2_graphic_pane_vc_g2

0x5c52,	// (0x000324b5) list_double2_graphic_pane_vc_g3_ParamLimits

0x5c52,	// (0x000324b5) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0003bffc) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0003bffc) list_double2_graphic_pane_vc_g

0x5c5e,	// (0x000324c1) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c5e,	// (0x000324c1) list_double2_graphic_pane_vc_t1

0x5cc9,	// (0x0003252c) list_single_heading_pane_vc_g1_ParamLimits

0x5cc9,	// (0x0003252c) list_single_heading_pane_vc_g1

0x5cd5,	// (0x00032538) list_single_heading_pane_vc_g2_ParamLimits

0x5cd5,	// (0x00032538) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003c01d) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003c01d) list_single_heading_pane_vc_g

0x5ce1,	// (0x00032544) list_single_heading_pane_vc_t1_ParamLimits

0x5ce1,	// (0x00032544) list_single_heading_pane_vc_t1

0x5cf7,	// (0x0003255a) list_single_heading_pane_vc_t2_ParamLimits

0x5cf7,	// (0x0003255a) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0003c022) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0003c022) list_single_heading_pane_vc_t

0x5d2b,	// (0x0003258e) list_setting_number_pane_vc_g1_ParamLimits

0x5d2b,	// (0x0003258e) list_setting_number_pane_vc_g1

0x5d37,	// (0x0003259a) list_setting_number_pane_vc_g2_ParamLimits

0x5d37,	// (0x0003259a) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003c027) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003c027) list_setting_number_pane_vc_g

0x5d43,	// (0x000325a6) list_setting_number_pane_vc_t1_ParamLimits

0x5d43,	// (0x000325a6) list_setting_number_pane_vc_t1

0x5d57,	// (0x000325ba) list_setting_number_pane_vc_t2_ParamLimits

0x5d57,	// (0x000325ba) list_setting_number_pane_vc_t2

0x5d73,	// (0x000325d6) list_setting_number_pane_vc_t3_ParamLimits

0x5d73,	// (0x000325d6) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0003c02c) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0003c02c) list_setting_number_pane_vc_t

0x5d91,	// (0x000325f4) set_value_pane_vc_ParamLimits

0x5d91,	// (0x000325f4) set_value_pane_vc

0x6133,	// (0x00032996) list_double2_graphic_pane_vc_ParamLimits

0x6133,	// (0x00032996) list_double2_graphic_pane_vc

0xaf80,	// (0x000377e3) list_double2_large_graphic_pane_vc_ParamLimits

0xaf80,	// (0x000377e3) list_double2_large_graphic_pane_vc

0x6133,	// (0x00032996) list_double2_pane_vc_ParamLimits

0x6133,	// (0x00032996) list_double2_pane_vc

0x6133,	// (0x00032996) list_double_graphic_heading_pane_vc_ParamLimits

0x6133,	// (0x00032996) list_double_graphic_heading_pane_vc

0x6133,	// (0x00032996) list_double_graphic_pane_vc_ParamLimits

0x6133,	// (0x00032996) list_double_graphic_pane_vc

0x6133,	// (0x00032996) list_double_heading_pane_vc_ParamLimits

0x6133,	// (0x00032996) list_double_heading_pane_vc

0xaf92,	// (0x000377f5) list_double_large_graphic_pane_vc_ParamLimits

0xaf92,	// (0x000377f5) list_double_large_graphic_pane_vc

0x6133,	// (0x00032996) list_double_number_pane_vc_ParamLimits

0x6133,	// (0x00032996) list_double_number_pane_vc

0x6133,	// (0x00032996) list_double_pane_vc_ParamLimits

0x6133,	// (0x00032996) list_double_pane_vc

0x6133,	// (0x00032996) list_double_time_pane_vc_ParamLimits

0x6133,	// (0x00032996) list_double_time_pane_vc

0x6133,	// (0x00032996) list_setting_number_pane_vc_ParamLimits

0x6133,	// (0x00032996) list_setting_number_pane_vc

0x6133,	// (0x00032996) list_setting_pane_vc_ParamLimits

0x6133,	// (0x00032996) list_setting_pane_vc

0x6133,	// (0x00032996) list_single_graphic_heading_pane_vc_ParamLimits

0x6133,	// (0x00032996) list_single_graphic_heading_pane_vc

0x6133,	// (0x00032996) list_single_heading_pane_vc_ParamLimits

0x6133,	// (0x00032996) list_single_heading_pane_vc

0x6146,	// (0x000329a9) list_single_number_heading_pane_vc_ParamLimits

0x6146,	// (0x000329a9) list_single_number_heading_pane_vc

0x628a,	// (0x00032aed) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x628a,	// (0x00032aed) list_double_graphic_heading_pane_vc_g1

0x5cc9,	// (0x0003252c) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5cc9,	// (0x0003252c) list_double_graphic_heading_pane_vc_g2

0x5cd5,	// (0x00032538) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5cd5,	// (0x00032538) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0003c231) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0003c231) list_double_graphic_heading_pane_vc_g

0x6296,	// (0x00032af9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6296,	// (0x00032af9) list_double_graphic_heading_pane_vc_t1

0x62b2,	// (0x00032b15) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x62b2,	// (0x00032b15) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0003c238) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0003c238) list_double_graphic_heading_pane_vc_t

0x5d2b,	// (0x0003258e) list_setting_pane_vc_g1_ParamLimits

0x5d2b,	// (0x0003258e) list_setting_pane_vc_g1

0x5d37,	// (0x0003259a) list_setting_pane_vc_g2_ParamLimits

0x5d37,	// (0x0003259a) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0003c027) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003c027) list_setting_pane_vc_g

0x62d0,	// (0x00032b33) list_setting_pane_vc_t1_ParamLimits

0x62d0,	// (0x00032b33) list_setting_pane_vc_t1

0x62ec,	// (0x00032b4f) list_setting_pane_vc_t2_ParamLimits

0x62ec,	// (0x00032b4f) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0003c266) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0003c266) list_setting_pane_vc_t

0x5d91,	// (0x000325f4) set_value_pane_cp_vc_ParamLimits

0x5d91,	// (0x000325f4) set_value_pane_cp_vc

0x5cc9,	// (0x0003252c) list_single_number_heading_pane_vc_g1_ParamLimits

0x5cc9,	// (0x0003252c) list_single_number_heading_pane_vc_g1

0x5cd5,	// (0x00032538) list_single_number_heading_pane_vc_g2_ParamLimits

0x5cd5,	// (0x00032538) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003c01d) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003c01d) list_single_number_heading_pane_vc_g

0x6308,	// (0x00032b6b) list_single_number_heading_pane_vc_t1_ParamLimits

0x6308,	// (0x00032b6b) list_single_number_heading_pane_vc_t1

0x631e,	// (0x00032b81) list_single_number_heading_pane_vc_t2_ParamLimits

0x631e,	// (0x00032b81) list_single_number_heading_pane_vc_t2

0x6330,	// (0x00032b93) list_single_number_heading_pane_vc_t3_ParamLimits

0x6330,	// (0x00032b93) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0003c26b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0003c26b) list_single_number_heading_pane_vc_t

0x5c3a,	// (0x0003249d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5c3a,	// (0x0003249d) list_single_graphic_heading_pane_vc_g1

0x5cc9,	// (0x0003252c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5cc9,	// (0x0003252c) list_single_graphic_heading_pane_vc_g4

0x5cd5,	// (0x00032538) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5cd5,	// (0x00032538) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0f,	// (0x0003c272) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0f,	// (0x0003c272) list_single_graphic_heading_pane_vc_g

0x6342,	// (0x00032ba5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6342,	// (0x00032ba5) list_single_graphic_heading_pane_vc_t1

0x6358,	// (0x00032bbb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6358,	// (0x00032bbb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa16,	// (0x0003c279) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x0003c279) list_single_graphic_heading_pane_vc_t

0x5cc9,	// (0x0003252c) list_double2_pane_vc_g1_ParamLimits

0x5cc9,	// (0x0003252c) list_double2_pane_vc_g1

0x5cd5,	// (0x00032538) list_double2_pane_vc_g2_ParamLimits

0x5cd5,	// (0x00032538) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003c01d) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003c01d) list_double2_pane_vc_g

0x636a,	// (0x00032bcd) list_double2_pane_vc_t1_ParamLimits

0x636a,	// (0x00032bcd) list_double2_pane_vc_t1

0x6380,	// (0x00032be3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6380,	// (0x00032be3) list_double2_large_graphic_pane_vc_g1

0x39d2,	// (0x00030235) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x39d2,	// (0x00030235) list_double2_large_graphic_pane_vc_g2

0x39de,	// (0x00030241) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x39de,	// (0x00030241) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa1b,	// (0x0003c27e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa1b,	// (0x0003c27e) list_double2_large_graphic_pane_vc_g

0x638c,	// (0x00032bef) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x638c,	// (0x00032bef) list_double2_large_graphic_pane_vc_t1

0x63a2,	// (0x00032c05) list_double_time_pane_vc_g1_ParamLimits

0x63a2,	// (0x00032c05) list_double_time_pane_vc_g1

0x63ae,	// (0x00032c11) list_double_time_pane_vc_g2_ParamLimits

0x63ae,	// (0x00032c11) list_double_time_pane_vc_g2

0x0001,

0xfa22,	// (0x0003c285) list_double_time_pane_vc_g_ParamLimits

0xfa22,	// (0x0003c285) list_double_time_pane_vc_g

0x63ba,	// (0x00032c1d) list_double_time_pane_vc_t1_ParamLimits

0x63ba,	// (0x00032c1d) list_double_time_pane_vc_t1

0x63de,	// (0x00032c41) list_double_time_pane_vc_t2_ParamLimits

0x63de,	// (0x00032c41) list_double_time_pane_vc_t2

0x6428,	// (0x00032c8b) list_double_time_pane_vc_t3_ParamLimits

0x6428,	// (0x00032c8b) list_double_time_pane_vc_t3

0x643a,	// (0x00032c9d) list_double_time_pane_vc_t4_ParamLimits

0x643a,	// (0x00032c9d) list_double_time_pane_vc_t4

0x0003,

0xfa27,	// (0x0003c28a) list_double_time_pane_vc_t_ParamLimits

0xfa27,	// (0x0003c28a) list_double_time_pane_vc_t

0x5cc9,	// (0x0003252c) list_double_pane_vc_g1_ParamLimits

0x5cc9,	// (0x0003252c) list_double_pane_vc_g1

0x5cd5,	// (0x00032538) list_double_pane_vc_g2_ParamLimits

0x5cd5,	// (0x00032538) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003c01d) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003c01d) list_double_pane_vc_g

0x644e,	// (0x00032cb1) list_double_pane_vc_t1_ParamLimits

0x644e,	// (0x00032cb1) list_double_pane_vc_t1

0x6462,	// (0x00032cc5) list_double_pane_vc_t2_ParamLimits

0x6462,	// (0x00032cc5) list_double_pane_vc_t2

0x0001,

0xfa30,	// (0x0003c293) list_double_pane_vc_t_ParamLimits

0xfa30,	// (0x0003c293) list_double_pane_vc_t

0x5cc9,	// (0x0003252c) list_double_number_pane_vc_g1_ParamLimits

0x5cc9,	// (0x0003252c) list_double_number_pane_vc_g1

0x5cd5,	// (0x00032538) list_double_number_pane_vc_g2_ParamLimits

0x5cd5,	// (0x00032538) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003c01d) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003c01d) list_double_number_pane_vc_g

0x647a,	// (0x00032cdd) list_double_number_pane_vc_t1_ParamLimits

0x647a,	// (0x00032cdd) list_double_number_pane_vc_t1

0x648c,	// (0x00032cef) list_double_number_pane_vc_t2_ParamLimits

0x648c,	// (0x00032cef) list_double_number_pane_vc_t2

0x64a0,	// (0x00032d03) list_double_number_pane_vc_t3_ParamLimits

0x64a0,	// (0x00032d03) list_double_number_pane_vc_t3

0x0002,

0xfa35,	// (0x0003c298) list_double_number_pane_vc_t_ParamLimits

0xfa35,	// (0x0003c298) list_double_number_pane_vc_t

0x64b8,	// (0x00032d1b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x64b8,	// (0x00032d1b) list_double_large_graphic_pane_vc_g1

0x64d4,	// (0x00032d37) list_double_large_graphic_pane_vc_g2_ParamLimits

0x64d4,	// (0x00032d37) list_double_large_graphic_pane_vc_g2

0x64e8,	// (0x00032d4b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x64e8,	// (0x00032d4b) list_double_large_graphic_pane_vc_g3

0x64f7,	// (0x00032d5a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x64f7,	// (0x00032d5a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3c,	// (0x0003c29f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3c,	// (0x0003c29f) list_double_large_graphic_pane_vc_g

0x6506,	// (0x00032d69) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6506,	// (0x00032d69) list_double_large_graphic_pane_vc_t1

0x6522,	// (0x00032d85) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6522,	// (0x00032d85) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa45,	// (0x0003c2a8) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa45,	// (0x0003c2a8) list_double_large_graphic_pane_vc_t

0x5cc9,	// (0x0003252c) list_double_heading_pane_vc_g1_ParamLimits

0x5cc9,	// (0x0003252c) list_double_heading_pane_vc_g1

0x5cd5,	// (0x00032538) list_double_heading_pane_vc_g2_ParamLimits

0x5cd5,	// (0x00032538) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0003c01d) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0003c01d) list_double_heading_pane_vc_g

0x6544,	// (0x00032da7) list_double_heading_pane_vc_t1_ParamLimits

0x6544,	// (0x00032da7) list_double_heading_pane_vc_t1

0x6558,	// (0x00032dbb) list_double_heading_pane_vc_t2_ParamLimits

0x6558,	// (0x00032dbb) list_double_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x0003c2ad) list_double_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x0003c2ad) list_double_heading_pane_vc_t

0x6570,	// (0x00032dd3) list_double_graphic_pane_vc_g1_ParamLimits

0x6570,	// (0x00032dd3) list_double_graphic_pane_vc_g1

0x6583,	// (0x00032de6) list_double_graphic_pane_vc_g2_ParamLimits

0x6583,	// (0x00032de6) list_double_graphic_pane_vc_g2

0x5cc9,	// (0x0003252c) list_double_graphic_pane_vc_g3_ParamLimits

0x5cc9,	// (0x0003252c) list_double_graphic_pane_vc_g3

0x0003,

0xfa4f,	// (0x0003c2b2) list_double_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x0003c2b2) list_double_graphic_pane_vc_g

0x65a0,	// (0x00032e03) list_double_graphic_pane_vc_t1_ParamLimits

0x65a0,	// (0x00032e03) list_double_graphic_pane_vc_t1

0x65ca,	// (0x00032e2d) list_double_graphic_pane_vc_t2_ParamLimits

0x65ca,	// (0x00032e2d) list_double_graphic_pane_vc_t2

0x0001,

0xfa58,	// (0x0003c2bb) list_double_graphic_pane_vc_t_ParamLimits

0xfa58,	// (0x0003c2bb) list_double_graphic_pane_vc_t

0x44b3,	// (0x00030d16) aid_size_cell_fastswap

0x44bb,	// (0x00030d1e) aid_size_cell_touch_ParamLimits

0x44bb,	// (0x00030d1e) aid_size_cell_touch

0x4720,	// (0x00030f83) popup_fast_swap_wide_window_ParamLimits

0x4720,	// (0x00030f83) popup_fast_swap_wide_window

0x4834,	// (0x00031097) touch_pane_ParamLimits

0x4834,	// (0x00031097) touch_pane

0x8260,	// (0x00034ac3) button_value_adjust_pane_cp2

0x3a31,	// (0x00030294) button_value_adjust_pane_cp4

0x3a39,	// (0x0003029c) form_field_data_pane_cp2

0x4d9e,	// (0x00031601) form_field_data_wide_pane_cp2

0x8937,	// (0x0003519a) bg_scroll_pane_ParamLimits

0x515f,	// (0x000319c2) scroll_handle_pane_ParamLimits

0x5173,	// (0x000319d6) scroll_sc2_down_pane_ParamLimits

0x5173,	// (0x000319d6) scroll_sc2_down_pane

0x8968,	// (0x000351cb) scroll_sc2_up_pane_ParamLimits

0x8968,	// (0x000351cb) scroll_sc2_up_pane

0xbbbc,	// (0x0003841f) grid_wheel_folder_pane_g1_ParamLimits

0xbbbc,	// (0x0003841f) grid_wheel_folder_pane_g1

0x53c2,	// (0x00031c25) clock_nsta_pane_cp2_ParamLimits

0x53c2,	// (0x00031c25) clock_nsta_pane_cp2

0x918d,	// (0x000359f0) listscroll_midp_pane_ParamLimits

0x9199,	// (0x000359fc) midp_canvas_pane

0x9481,	// (0x00035ce4) nsta_clock_indic_pane

0x94b5,	// (0x00035d18) listscroll_form_pane_vc

0x94bd,	// (0x00035d20) listscroll_set_pane_vc_ParamLimits

0x94bd,	// (0x00035d20) listscroll_set_pane_vc

0x95b6,	// (0x00035e19) clock_nsta_pane

0x9631,	// (0x00035e94) indicator_nsta_pane

0x9911,	// (0x00036174) bg_popup_sub_pane_cp2_ParamLimits

0x9925,	// (0x00036188) find_pane_cp2_ParamLimits

0x9925,	// (0x00036188) find_pane_cp2

0x993b,	// (0x0003619e) grid_toobar_pane_ParamLimits

0x9a1b,	// (0x0003627e) list_form_gen_pane_vc_ParamLimits

0x9a1b,	// (0x0003627e) list_form_gen_pane_vc

0x9a31,	// (0x00036294) scroll_pane_cp8_vc_ParamLimits

0x9a31,	// (0x00036294) scroll_pane_cp8_vc

0x9aad,	// (0x00036310) data_form_wide_pane_vc_ParamLimits

0x9aad,	// (0x00036310) data_form_wide_pane_vc

0x9ab9,	// (0x0003631c) form_field_data_wide_pane_vc_g1

0x9ac1,	// (0x00036324) form_field_data_wide_pane_vc_t1_ParamLimits

0x9ac1,	// (0x00036324) form_field_data_wide_pane_vc_t1

0x8274,	// (0x00034ad7) input_focus_pane_cp6_vc_ParamLimits

0x8274,	// (0x00034ad7) input_focus_pane_cp6_vc

0x9de7,	// (0x0003664a) list_midp_pane_ParamLimits

0x9df3,	// (0x00036656) scroll_pane_cp16_ParamLimits

0x9df3,	// (0x00036656) scroll_pane_cp16

0x9e5d,	// (0x000366c0) button_value_adjust_pane_ParamLimits

0x9e5d,	// (0x000366c0) button_value_adjust_pane

0xadda,	// (0x0003763d) button_value_adjust_pane_cp6_ParamLimits

0xadda,	// (0x0003763d) button_value_adjust_pane_cp6

0xaf04,	// (0x00037767) settings_code_pane_cp_ParamLimits

0xaf04,	// (0x00037767) settings_code_pane_cp

0x2f7c,	// (0x0002f7df) cell_touch_pane_g1

0x2f7c,	// (0x0002f7df) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0003bf41) cell_touch_pane_g

0xb4e6,	// (0x00037d49) cell_touch_pane_cp_ParamLimits

0xb4e6,	// (0x00037d49) cell_touch_pane_cp

0xb4f6,	// (0x00037d59) cell_touch_pane_ParamLimits

0xb4f6,	// (0x00037d59) cell_touch_pane

0x2f7c,	// (0x0002f7df) scroll_sc2_down_pane_g1

0x2f7c,	// (0x0002f7df) scroll_sc2_up_pane_g1

0x7907,	// (0x0003416a) bg_set_opt_pane_cp4_vc

0xb508,	// (0x00037d6b) list_set_graphic_pane_vc_g1_ParamLimits

0xb508,	// (0x00037d6b) list_set_graphic_pane_vc_g1

0xb514,	// (0x00037d77) list_set_graphic_pane_vc_g2_ParamLimits

0xb514,	// (0x00037d77) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0003c23d) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0003c23d) list_set_graphic_pane_vc_g

0xb520,	// (0x00037d83) text_primary_small_cp13_vc_ParamLimits

0xb520,	// (0x00037d83) text_primary_small_cp13_vc

0xb538,	// (0x00037d9b) list_set_graphic_pane_vc_ParamLimits

0xb538,	// (0x00037d9b) list_set_graphic_pane_vc

0x7907,	// (0x0003416a) input_focus_pane_cp2_vc

0x2f7c,	// (0x0002f7df) setting_code_pane_vc_g1

0x7a32,	// (0x00034295) setting_code_pane_vc_t1

0xb54b,	// (0x00037dae) set_text_pane_vc_t1_ParamLimits

0xb54b,	// (0x00037dae) set_text_pane_vc_t1

0x7907,	// (0x0003416a) input_focus_pane_cp1_vc

0xb567,	// (0x00037dca) list_set_text_pane_vc

0x2f7c,	// (0x0002f7df) setting_text_pane_vc_g1

0x7907,	// (0x0003416a) bg_set_opt_pane_cp2_vc

0x7a29,	// (0x0003428c) setting_slider_graphic_pane_vc_g1

0xb571,	// (0x00037dd4) setting_slider_graphic_pane_vc_t1

0xb581,	// (0x00037de4) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0003c242) setting_slider_graphic_pane_vc_t

0xb591,	// (0x00037df4) slider_set_pane_cp_vc

0xb599,	// (0x00037dfc) slider_set_pane_vc_g1

0xb5a2,	// (0x00037e05) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0003c247) slider_set_pane_vc_g

0x82cc,	// (0x00034b2f) set_opt_bg_pane_g1_copy1

0x82d4,	// (0x00034b37) set_opt_bg_pane_g2_copy1

0xb5ce,	// (0x00037e31) set_opt_bg_pane_g3_copy1

0x82e4,	// (0x00034b47) set_opt_bg_pane_g4_copy1

0x82ec,	// (0x00034b4f) set_opt_bg_pane_g5_copy1

0x82f4,	// (0x00034b57) set_opt_bg_pane_g6_copy1

0xb5d8,	// (0x00037e3b) set_opt_bg_pane_g7_copy1

0xb5e2,	// (0x00037e45) set_opt_bg_pane_g8_copy1

0xb5ec,	// (0x00037e4f) set_opt_bg_pane_g9_copy1

0x7907,	// (0x0003416a) bg_set_opt_pane_cp_vc

0xb5f6,	// (0x00037e59) setting_slider_pane_vc_t1

0xb605,	// (0x00037e68) setting_slider_pane_vc_t2

0xb615,	// (0x00037e78) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0003c256) setting_slider_pane_vc_t

0xb625,	// (0x00037e88) slider_set_pane_vc

0x5e7f,	// (0x000326e2) volume_set_pane_vc_g1

0x5e88,	// (0x000326eb) volume_set_pane_vc_g2

0x5e91,	// (0x000326f4) volume_set_pane_vc_g3

0x5e9a,	// (0x000326fd) volume_set_pane_vc_g4

0x5ea3,	// (0x00032706) volume_set_pane_vc_g5

0x5eac,	// (0x0003270f) volume_set_pane_vc_g6

0x5eb5,	// (0x00032718) volume_set_pane_vc_g7

0x5ebe,	// (0x00032721) volume_set_pane_vc_g8

0x5ec7,	// (0x0003272a) volume_set_pane_vc_g9

0x5ed0,	// (0x00032733) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0003c0f4) volume_set_pane_vc_g

0xb62d,	// (0x00037e90) volume_set_pane_vc

0xb635,	// (0x00037e98) button_value_adjust_pane_cp1_vc

0xb63f,	// (0x00037ea2) list_highlight_pane_cp2_vc

0xb648,	// (0x00037eab) list_set_pane_vc_ParamLimits

0xb648,	// (0x00037eab) list_set_pane_vc

0xb6a6,	// (0x00037f09) main_pane_set_vc_t1_ParamLimits

0xb6a6,	// (0x00037f09) main_pane_set_vc_t1

0xb6bb,	// (0x00037f1e) main_pane_set_vc_t2_ParamLimits

0xb6bb,	// (0x00037f1e) main_pane_set_vc_t2

0xb6cd,	// (0x00037f30) main_pane_set_vc_t3_ParamLimits

0xb6cd,	// (0x00037f30) main_pane_set_vc_t3

0xb6e1,	// (0x00037f44) main_pane_set_vc_t4_ParamLimits

0xb6e1,	// (0x00037f44) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0003c25d) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0003c25d) main_pane_set_vc_t

0xb6f5,	// (0x00037f58) setting_code_pane_vc_ParamLimits

0xb6f5,	// (0x00037f58) setting_code_pane_vc

0xb706,	// (0x00037f69) setting_slider_graphic_pane_vc

0xb706,	// (0x00037f69) setting_slider_pane_vc

0xb706,	// (0x00037f69) setting_text_pane_vc

0xb706,	// (0x00037f69) setting_volume_pane_vc

0xb710,	// (0x00037f73) scroll_pane_cp121_vc

0x824e,	// (0x00034ab1) set_content_pane_vc

0xb718,	// (0x00037f7b) button_value_adjust_pane_g1

0xb721,	// (0x00037f84) button_value_adjust_pane_g2

0x0001,

0xfa5d,	// (0x0003c2c0) button_value_adjust_pane_g

0xb72a,	// (0x00037f8d) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb72a,	// (0x00037f8d) form_field_slider_wide_pane_vc_t1

0xb73e,	// (0x00037fa1) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb73e,	// (0x00037fa1) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa62,	// (0x0003c2c5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa62,	// (0x0003c2c5) form_field_slider_wide_pane_vc_t

0x7c62,	// (0x000344c5) input_focus_pane_cp10_vc_ParamLimits

0x7c62,	// (0x000344c5) input_focus_pane_cp10_vc

0xb76c,	// (0x00037fcf) slider_cont_pane_cp1_vc_ParamLimits

0xb76c,	// (0x00037fcf) slider_cont_pane_cp1_vc

0xb77e,	// (0x00037fe1) slider_form_pane_g1_cp2

0xb5a2,	// (0x00037e05) slider_form_pane_g2_cp2

0xb7ab,	// (0x0003800e) form_field_slider_pane_vc_t3

0xb7b9,	// (0x0003801c) form_field_slider_pane_vc_t4

0xb7c7,	// (0x0003802a) slider_form_pane_vc_ParamLimits

0xb7c7,	// (0x0003802a) slider_form_pane_vc

0xb7d4,	// (0x00038037) form_field_slider_pane_vc_t1_ParamLimits

0xb7d4,	// (0x00038037) form_field_slider_pane_vc_t1

0xb73e,	// (0x00037fa1) form_field_slider_pane_vc_t2_ParamLimits

0xb73e,	// (0x00037fa1) form_field_slider_pane_vc_t2

0x0001,

0xfa74,	// (0x0003c2d7) form_field_slider_pane_vc_t_ParamLimits

0xfa74,	// (0x0003c2d7) form_field_slider_pane_vc_t

0x7c62,	// (0x000344c5) input_focus_pane_cp9_vc_ParamLimits

0x7c62,	// (0x000344c5) input_focus_pane_cp9_vc

0xb7f0,	// (0x00038053) slider_cont_pane_vc_ParamLimits

0xb7f0,	// (0x00038053) slider_cont_pane_vc

0xb804,	// (0x00038067) list_form_graphic_pane_cp_vc_ParamLimits

0xb804,	// (0x00038067) list_form_graphic_pane_cp_vc

0x9ab9,	// (0x0003631c) form_field_popup_wide_pane_vc_g1

0xb819,	// (0x0003807c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb819,	// (0x0003807c) form_field_popup_wide_pane_vc_t1

0x8274,	// (0x00034ad7) input_focus_pane_cp8_vc_ParamLimits

0x8274,	// (0x00034ad7) input_focus_pane_cp8_vc

0xb85e,	// (0x000380c1) list_form_wide_pane_vc_ParamLimits

0xb85e,	// (0x000380c1) list_form_wide_pane_vc

0xb86a,	// (0x000380cd) list_form_graphic_pane_vc_g1

0xb872,	// (0x000380d5) list_form_graphic_pane_vc_t1_ParamLimits

0xb872,	// (0x000380d5) list_form_graphic_pane_vc_t1

0x79e7,	// (0x0003424a) list_highlight_pane_cp5_vc_ParamLimits

0x79e7,	// (0x0003424a) list_highlight_pane_cp5_vc

0xb88e,	// (0x000380f1) list_form_graphic_pane_vc_ParamLimits

0xb88e,	// (0x000380f1) list_form_graphic_pane_vc

0x9ab9,	// (0x0003631c) form_field_popup_pane_vc_g1

0xb8a4,	// (0x00038107) form_field_popup_pane_vc_t1_ParamLimits

0xb8a4,	// (0x00038107) form_field_popup_pane_vc_t1

0x8274,	// (0x00034ad7) input_focus_pane_cp7_vc_ParamLimits

0x8274,	// (0x00034ad7) input_focus_pane_cp7_vc

0xb8bb,	// (0x0003811e) list_form_pane_vc_ParamLimits

0xb8bb,	// (0x0003811e) list_form_pane_vc

0xb8c7,	// (0x0003812a) data_form_pane_vc_t1_ParamLimits

0xb8c7,	// (0x0003812a) data_form_pane_vc_t1

0x82cc,	// (0x00034b2f) input_focus_pane_vc_g1

0x82d4,	// (0x00034b37) input_focus_pane_vc_g2

0x82dc,	// (0x00034b3f) input_focus_pane_vc_g3

0x82e4,	// (0x00034b47) input_focus_pane_vc_g4

0x82ec,	// (0x00034b4f) input_focus_pane_vc_g5

0x82f4,	// (0x00034b57) input_focus_pane_vc_g6

0x82fc,	// (0x00034b5f) input_focus_pane_vc_g7

0x8304,	// (0x00034b67) input_focus_pane_vc_g8

0x830c,	// (0x00034b6f) input_focus_pane_vc_g9

0x2f7c,	// (0x0002f7df) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0003beca) input_focus_pane_vc_g

0x9aad,	// (0x00036310) data_form_pane_vc_ParamLimits

0x9aad,	// (0x00036310) data_form_pane_vc

0x9ab9,	// (0x0003631c) form_field_data_pane_vc_g1

0xb8e2,	// (0x00038145) form_field_data_pane_vc_t1_ParamLimits

0xb8e2,	// (0x00038145) form_field_data_pane_vc_t1

0x8274,	// (0x00034ad7) input_focus_pane_vc_ParamLimits

0x8274,	// (0x00034ad7) input_focus_pane_vc

0xb8fc,	// (0x0003815f) button_value_adjust_pane_cp3_vc

0xb904,	// (0x00038167) button_value_adjust_pane_cp5_vc

0xb90c,	// (0x0003816f) form_field_data_pane_vc_ParamLimits

0xb90c,	// (0x0003816f) form_field_data_pane_vc

0xb923,	// (0x00038186) form_field_data_pane_vc_cp2

0xb92b,	// (0x0003818e) form_field_data_wide_pane_vc_ParamLimits

0xb92b,	// (0x0003818e) form_field_data_wide_pane_vc

0xb941,	// (0x000381a4) form_field_data_wide_pane_vc_cp2

0xb949,	// (0x000381ac) form_field_popup_pane_vc_ParamLimits

0xb949,	// (0x000381ac) form_field_popup_pane_vc

0xb960,	// (0x000381c3) form_field_popup_wide_pane_vc_ParamLimits

0xb960,	// (0x000381c3) form_field_popup_wide_pane_vc

0xb976,	// (0x000381d9) form_field_slider_pane_vc_ParamLimits

0xb976,	// (0x000381d9) form_field_slider_pane_vc

0xb989,	// (0x000381ec) form_field_slider_wide_pane_vc_ParamLimits

0xb989,	// (0x000381ec) form_field_slider_wide_pane_vc

0xb99c,	// (0x000381ff) grid_touch_1_pane_ParamLimits

0xb99c,	// (0x000381ff) grid_touch_1_pane

0xb9a8,	// (0x0003820b) grid_touch_2_pane_ParamLimits

0xb9a8,	// (0x0003820b) grid_touch_2_pane

0x944c,	// (0x00035caf) touch_pane_g1_ParamLimits

0x944c,	// (0x00035caf) touch_pane_g1

0xb9c0,	// (0x00038223) cell_app_pane_cp_wide_ParamLimits

0xb9c0,	// (0x00038223) cell_app_pane_cp_wide

0xb9d1,	// (0x00038234) grid_popup_fast_wide_pane_ParamLimits

0xb9d1,	// (0x00038234) grid_popup_fast_wide_pane

0xb9e5,	// (0x00038248) scroll_pane_cp19_ParamLimits

0xb9e5,	// (0x00038248) scroll_pane_cp19

0x7907,	// (0x0003416a) bg_popup_window_pane_cp20

0xb9f9,	// (0x0003825c) listscroll_popup_fast_wide_pane

0xba01,	// (0x00038264) grid_indicator_nsta_pane

0xba13,	// (0x00038276) clock_nsta_pane_g1

0xba1c,	// (0x0003827f) clock_nsta_pane_t1

0xba38,	// (0x0003829b) cell_indicator_nsta_pane_ParamLimits

0xba38,	// (0x0003829b) cell_indicator_nsta_pane

0xba6d,	// (0x000382d0) cell_indicator_nsta_pane_g1

0xba7b,	// (0x000382de) cell_indicator_nsta_pane_g2

0x0001,

0xfa85,	// (0x0003c2e8) cell_indicator_nsta_pane_g

0xba8d,	// (0x000382f0) clock_nsta_pane_cp

0xba96,	// (0x000382f9) indicator_nsta_pane_cp

0xbaa0,	// (0x00038303) nsta_clock_indic_pane_g1

0x7ab0,	// (0x00034313) grid_indicator_pane

0x8a5d,	// (0x000352c0) scroll_pane_cp29

0x5311,	// (0x00031b74) indicator_nsta_pane_cp2_ParamLimits

0x5311,	// (0x00031b74) indicator_nsta_pane_cp2

0x79e7,	// (0x0003424a) main_apps_wheel_pane

0x9cc8,	// (0x0003652b) form_midp_field_text_pane_ParamLimits

0x9e13,	// (0x00036676) scroll_bar_cp050_ParamLimits

0xbaf9,	// (0x0003835c) cell_indicator_pane_ParamLimits

0xbaf9,	// (0x0003835c) cell_indicator_pane

0xbb10,	// (0x00038373) cell_indicator_pane_g1

0xbb1a,	// (0x0003837d) grid_wheel_folder_pane_ParamLimits

0xbb1a,	// (0x0003837d) grid_wheel_folder_pane

0xbb30,	// (0x00038393) list_wheel_apps_pane_ParamLimits

0xbb30,	// (0x00038393) list_wheel_apps_pane

0xbb41,	// (0x000383a4) main_apps_wheel_pane_g1_ParamLimits

0xbb41,	// (0x000383a4) main_apps_wheel_pane_g1

0xbb55,	// (0x000383b8) main_apps_wheel_pane_g2_ParamLimits

0xbb55,	// (0x000383b8) main_apps_wheel_pane_g2

0x0001,

0xfaa1,	// (0x0003c304) main_apps_wheel_pane_g_ParamLimits

0xfaa1,	// (0x0003c304) main_apps_wheel_pane_g

0xbb6d,	// (0x000383d0) main_apps_wheel_pane_t1_ParamLimits

0xbb6d,	// (0x000383d0) main_apps_wheel_pane_t1

0xbb90,	// (0x000383f3) list_wheel_apps_pane_g1

0xbb98,	// (0x000383fb) list_wheel_apps_pane_g2

0xbba0,	// (0x00038403) list_wheel_apps_pane_g3

0xbba8,	// (0x0003840b) list_wheel_apps_pane_g4

0xbbb2,	// (0x00038415) list_wheel_apps_pane_g5

0x0004,

0xfaa6,	// (0x0003c309) list_wheel_apps_pane_g

0x8ffc,	// (0x0003585f) navi_icon_text_pane

0x94e5,	// (0x00035d48) aid_fill_nsta

0xbbd5,	// (0x00038438) navi_icon_text_pane_g1

0xbbe1,	// (0x00038444) navi_icon_text_pane_t1

0x8e8f,	// (0x000356f2) list_set_graphic_pane_t1_ParamLimits

0x8e8f,	// (0x000356f2) list_set_graphic_pane_t1

0xa57e,	// (0x00036de1) popup_midp_note_alarm_window_t6_ParamLimits

0xa57e,	// (0x00036de1) popup_midp_note_alarm_window_t6

0xa590,	// (0x00036df3) popup_midp_note_alarm_window_t7_ParamLimits

0xa590,	// (0x00036df3) popup_midp_note_alarm_window_t7

0xa5a2,	// (0x00036e05) popup_midp_note_alarm_window_t8_ParamLimits

0xa5a2,	// (0x00036e05) popup_midp_note_alarm_window_t8

0xa5b4,	// (0x00036e17) popup_midp_note_alarm_window_t9_ParamLimits

0xa5b4,	// (0x00036e17) popup_midp_note_alarm_window_t9

0xa5c6,	// (0x00036e29) popup_midp_note_alarm_window_t10_ParamLimits

0xa5c6,	// (0x00036e29) popup_midp_note_alarm_window_t10

0xa5d8,	// (0x00036e3b) popup_midp_note_alarm_window_t11_ParamLimits

0xa5d8,	// (0x00036e3b) popup_midp_note_alarm_window_t11

0xa5ea,	// (0x00036e4d) scroll_pane_cp17_ParamLimits

0xa5ea,	// (0x00036e4d) scroll_pane_cp17

0x5e7f,	// (0x000326e2) volume_small_pane_cp_g1

0x65f4,	// (0x00032e57) volume_small_pane_cp_g2

0x65fd,	// (0x00032e60) volume_small_pane_cp_g3

0x6606,	// (0x00032e69) volume_small_pane_cp_g4

0x660f,	// (0x00032e72) volume_small_pane_cp_g5

0x6618,	// (0x00032e7b) volume_small_pane_cp_g6

0x6621,	// (0x00032e84) volume_small_pane_cp_g7

0x662a,	// (0x00032e8d) volume_small_pane_cp_g8

0x6633,	// (0x00032e96) volume_small_pane_cp_g9

0x663c,	// (0x00032e9f) volume_small_pane_cp_g10

0x9262,	// (0x00035ac5) midp_ticker_pane_g1_ParamLimits

0x926e,	// (0x00035ad1) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0003bf96) midp_ticker_pane_g_ParamLimits

0x927a,	// (0x00035add) midp_ticker_pane_t1_ParamLimits

0x94fb,	// (0x00035d5e) aid_fill_nsta_2

0x9dff,	// (0x00036662) list_form2_midp_pane

0xaf4f,	// (0x000377b2) midp_editing_number_pane_ParamLimits

0xaf5e,	// (0x000377c1) midp_ticker_pane_ParamLimits

0xbbf3,	// (0x00038456) form2_midp_field_pane

0xbc17,	// (0x0003847a) scroll_pane_cp51

0xbc37,	// (0x0003849a) form2_midp_button_pane_ParamLimits

0xbc37,	// (0x0003849a) form2_midp_button_pane

0xbc49,	// (0x000384ac) form2_midp_content_pane_ParamLimits

0xbc49,	// (0x000384ac) form2_midp_content_pane

0xbc63,	// (0x000384c6) form2_midp_field_choice_group_pane

0xbc6b,	// (0x000384ce) form2_midp_field_pane_g1

0xbc73,	// (0x000384d6) form2_midp_field_pane_g2

0xbc7b,	// (0x000384de) form2_midp_field_pane_g3

0xbc83,	// (0x000384e6) form2_midp_field_pane_g4

0x0003,

0xfacb,	// (0x0003c32e) form2_midp_field_pane_g

0xbc8b,	// (0x000384ee) form2_midp_gauge_slider_pane

0xbc93,	// (0x000384f6) form2_midp_gauge_wait_pane

0xbc9b,	// (0x000384fe) form2_midp_image_pane_ParamLimits

0xbc9b,	// (0x000384fe) form2_midp_image_pane

0xbcb6,	// (0x00038519) form2_midp_label_pane_ParamLimits

0xbcb6,	// (0x00038519) form2_midp_label_pane

0xbccf,	// (0x00038532) form2_midp_label_pane_cp_ParamLimits

0xbccf,	// (0x00038532) form2_midp_label_pane_cp

0xbcf0,	// (0x00038553) form2_midp_string_pane_ParamLimits

0xbcf0,	// (0x00038553) form2_midp_string_pane

0x6645,	// (0x00032ea8) form2_midp_text_pane_ParamLimits

0x6645,	// (0x00032ea8) form2_midp_text_pane

0xbd02,	// (0x00038565) form2_midp_time_pane

0xbd12,	// (0x00038575) input_focus_pane_cp51_ParamLimits

0xbd12,	// (0x00038575) input_focus_pane_cp51

0xbd2a,	// (0x0003858d) form2_midp_label_pane_t1_ParamLimits

0xbd2a,	// (0x0003858d) form2_midp_label_pane_t1

0x6660,	// (0x00032ec3) form2_mdip_text_pane_t1_ParamLimits

0x6660,	// (0x00032ec3) form2_mdip_text_pane_t1

0x667e,	// (0x00032ee1) form2_midp_time_pane_t1

0xbd73,	// (0x000385d6) form2_midp_gauge_slider_pane_t1

0xbd85,	// (0x000385e8) form2_midp_gauge_slider_pane_t2

0xbd97,	// (0x000385fa) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad4,	// (0x0003c337) form2_midp_gauge_slider_pane_t

0xbda9,	// (0x0003860c) form2_midp_slider_pane

0xbdb5,	// (0x00038618) form2_midp_gauge_wait_pane_t1

0xbdc3,	// (0x00038626) form2_midp_wait_pane_ParamLimits

0xbdc3,	// (0x00038626) form2_midp_wait_pane

0xbdee,	// (0x00038651) list_single_2graphic_pane_cp4_ParamLimits

0xbdee,	// (0x00038651) list_single_2graphic_pane_cp4

0x9b21,	// (0x00036384) list_single_midp_graphic_pane_cp_ParamLimits

0x9b21,	// (0x00036384) list_single_midp_graphic_pane_cp

0x7907,	// (0x0003416a) list_highlight_pane_cp20

0xbe12,	// (0x00038675) list_single_2graphic_pane_g1_cp4

0xbe1a,	// (0x0003867d) list_single_2graphic_pane_g2_cp4

0xbe22,	// (0x00038685) list_single_2graphic_pane_t1_cp4

0x79e7,	// (0x0003424a) list_highlight_pane_cp21

0xbe31,	// (0x00038694) list_single_midp_graphic_pane_g4_cp

0xbe40,	// (0x000386a3) list_single_midp_graphic_pane_t1_cp

0xbe55,	// (0x000386b8) form2_mdip_string_pane_t1_ParamLimits

0xbe55,	// (0x000386b8) form2_mdip_string_pane_t1

0x7907,	// (0x0003416a) bg_wml_button_pane_cp2

0x2f7c,	// (0x0002f7df) form2_midp_image_pane_g1

0x39ea,	// (0x0003024d) list_double_large_graphic_pane_g5_ParamLimits

0x39ea,	// (0x0003024d) list_double_large_graphic_pane_g5

0x918d,	// (0x000359f0) midp_form_pane_ParamLimits

0x79e7,	// (0x0003424a) main_apps_wheel_pane_ParamLimits

0x59fa,	// (0x0003225d) popup_preview_window_ParamLimits

0x59fa,	// (0x0003225d) popup_preview_window

0x5bb5,	// (0x00032418) popup_touch_info_window_ParamLimits

0x5bb5,	// (0x00032418) popup_touch_info_window

0x5bd3,	// (0x00032436) popup_touch_menu_window_ParamLimits

0x5bd3,	// (0x00032436) popup_touch_menu_window

0x2f72,	// (0x0002f7d5) bg_popup_sub_pane_cp6

0xbf4e,	// (0x000387b1) list_touch_menu_pane

0xbf56,	// (0x000387b9) list_single_touch_menu_pane_ParamLimits

0xbf56,	// (0x000387b9) list_single_touch_menu_pane

0xbf6c,	// (0x000387cf) list_single_touch_menu_pane_t1

0x79e7,	// (0x0003424a) bg_popup_sub_pane_cp7_ParamLimits

0x79e7,	// (0x0003424a) bg_popup_sub_pane_cp7

0xbf7a,	// (0x000387dd) heading_sub_pane

0xbf82,	// (0x000387e5) list_touch_info_pane_ParamLimits

0xbf82,	// (0x000387e5) list_touch_info_pane

0xbf91,	// (0x000387f4) list_single_touch_info_pane_ParamLimits

0xbf91,	// (0x000387f4) list_single_touch_info_pane

0xbfa3,	// (0x00038806) list_single_touch_info_pane_t1

0xbfb1,	// (0x00038814) list_single_touch_info_pane_t2

0x0001,

0xfae2,	// (0x0003c345) list_single_touch_info_pane_t

0x9185,	// (0x000359e8) bg_popup_heading_pane_cp

0xbfbf,	// (0x00038822) heading_sub_pane_t1

0x9a47,	// (0x000362aa) bg_popup_preview_window_pane_cp_ParamLimits

0x9a47,	// (0x000362aa) bg_popup_preview_window_pane_cp

0xbf7a,	// (0x000387dd) heading_preview_pane

0xbf82,	// (0x000387e5) list_preview_pane_ParamLimits

0xbf82,	// (0x000387e5) list_preview_pane

0xbfcd,	// (0x00038830) popup_preview_window_g1

0xbf91,	// (0x000387f4) list_single_preview_pane_ParamLimits

0xbf91,	// (0x000387f4) list_single_preview_pane

0xbfd5,	// (0x00038838) list_single_preview_pane_g1

0xbfdd,	// (0x00038840) list_single_preview_pane_t1

0xbfa3,	// (0x00038806) list_single_preview_pane_t2

0x0001,

0xfae7,	// (0x0003c34a) list_single_preview_pane_t

0xbfeb,	// (0x0003884e) bg_popup_heading_pane_cp2_ParamLimits

0xbfeb,	// (0x0003884e) bg_popup_heading_pane_cp2

0xc001,	// (0x00038864) heading_preview_pane_g1

0xc009,	// (0x0003886c) heading_preview_pane_t1_ParamLimits

0xc009,	// (0x0003886c) heading_preview_pane_t1

0x7ad3,	// (0x00034336) soft_indicator_pane_t1_ParamLimits

0x81e7,	// (0x00034a4a) scroll_pane_ParamLimits

0x8956,	// (0x000351b9) scroll_sc2_left_pane

0x895f,	// (0x000351c2) scroll_sc2_right_pane

0x897e,	// (0x000351e1) scroll_bg_pane_g1_ParamLimits

0x8993,	// (0x000351f6) scroll_bg_pane_g2_ParamLimits

0x89ab,	// (0x0003520e) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0003bf21) scroll_bg_pane_g_ParamLimits

0x897e,	// (0x000351e1) scroll_handle_pane_g1_ParamLimits

0x89cd,	// (0x00035230) scroll_handle_pane_g2_ParamLimits

0x89ab,	// (0x0003520e) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0003bf28) scroll_handle_pane_g_ParamLimits

0x5679,	// (0x00031edc) popup_choice_list_window_ParamLimits

0x5679,	// (0x00031edc) popup_choice_list_window

0x991d,	// (0x00036180) choice_list_pane

0x999f,	// (0x00036202) cell_toolbar_pane_t1

0x99c7,	// (0x0003622a) toolbar_button_pane_ParamLimits

0xaab0,	// (0x00037313) ai_gene_pane_1_t2_ParamLimits

0xaab0,	// (0x00037313) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0003c150) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0003c150) ai_gene_pane_1_t

0xc026,	// (0x00038889) scroll_sc2_left_pane_g1

0xc026,	// (0x00038889) scroll_sc2_right_pane_g1

0x94a9,	// (0x00035d0c) bg_popup_sub_pane_cp10

0xc030,	// (0x00038893) list_choice_list_pane

0xc049,	// (0x000388ac) list_single_choice_list_pane_ParamLimits

0xc049,	// (0x000388ac) list_single_choice_list_pane

0xc05c,	// (0x000388bf) list_single_choice_list_pane_g1

0x8418,	// (0x00034c7b) list_single_choice_list_pane_t1_ParamLimits

0x8418,	// (0x00034c7b) list_single_choice_list_pane_t1

0xc064,	// (0x000388c7) choice_list_pane_g1

0xc06c,	// (0x000388cf) choice_list_pane_t1

0x2f72,	// (0x0002f7d5) input_focus_pane_cp11

0x85ef,	// (0x00034e52) title_pane_stacon_g2_ParamLimits

0x85ef,	// (0x00034e52) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0003bf07) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0003bf07) title_pane_stacon_g

0x9185,	// (0x000359e8) cursor_press_pane

0x5725,	// (0x00031f88) popup_fep_hwr_window_ParamLimits

0x5725,	// (0x00031f88) popup_fep_hwr_window

0x579f,	// (0x00032002) popup_fep_vkb_window_ParamLimits

0x579f,	// (0x00032002) popup_fep_vkb_window

0xc07a,	// (0x000388dd) cursor_press_pane_g1

0x0002,

0xfb10,	// (0x0003c373) fep_vkb_side_pane_g_ParamLimits

0x66ca,	// (0x00032f2d) fep_hwr_candidate_pane_ParamLimits

0x66ca,	// (0x00032f2d) fep_hwr_candidate_pane

0x66f4,	// (0x00032f57) fep_hwr_side_pane_ParamLimits

0x66f4,	// (0x00032f57) fep_hwr_side_pane

0x6714,	// (0x00032f77) fep_hwr_top_pane_ParamLimits

0x6714,	// (0x00032f77) fep_hwr_top_pane

0x672c,	// (0x00032f8f) fep_hwr_write_pane_ParamLimits

0x672c,	// (0x00032f8f) fep_hwr_write_pane

0xfb10,	// (0x0003c373) fep_vkb_side_pane_g

0xc082,	// (0x000388e5) fep_hwr_top_pane_g1

0xc094,	// (0x000388f7) fep_hwr_top_pane_g2

0x6766,	// (0x00032fc9) fep_hwr_top_pane_g3

0x0002,

0xfaec,	// (0x0003c34f) fep_hwr_top_pane_g

0x677b,	// (0x00032fde) fep_hwr_top_text_pane

0x8b4d,	// (0x000353b0) fep_hwr_top_text_pane_g1

0xc0ca,	// (0x0003892d) fep_hwr_top_text_pane_t1

0x6871,	// (0x000330d4) fep_hwr_candidate_pane_g1

0xc31d,	// (0x00038b80) fep_vkb_keypad_pane_g3_ParamLimits

0xc31d,	// (0x00038b80) fep_vkb_keypad_pane_g3

0xc345,	// (0x00038ba8) fep_vkb_keypad_pane_g4_ParamLimits

0xc345,	// (0x00038ba8) fep_vkb_keypad_pane_g4

0xc3b4,	// (0x00038c17) fep_vkb_bottom_pane_g2_ParamLimits

0xc3b4,	// (0x00038c17) fep_vkb_bottom_pane_g2

0x0001,

0xfb17,	// (0x0003c37a) fep_vkb_bottom_pane_g_ParamLimits

0xfb17,	// (0x0003c37a) fep_vkb_bottom_pane_g

0xc026,	// (0x00038889) cell_vkb_side_pane_g2

0x0001,

0xfb21,	// (0x0003c384) cell_vkb_side_pane_g

0xc43f,	// (0x00038ca2) cell_vkb_side_pane_t1

0xc44d,	// (0x00038cb0) cell_vkb_side_pane_t1_copy1

0xc026,	// (0x00038889) bg_fep_vkb_candidate_pane_g2

0xc579,	// (0x00038ddc) cell_vkb_candidate_pane_ParamLimits

0xc0d8,	// (0x0003893b) aid_size_cell_vkb_ParamLimits

0xc0d8,	// (0x0003893b) aid_size_cell_vkb

0xc579,	// (0x00038ddc) cell_vkb_candidate_pane

0x6898,	// (0x000330fb) bg_popup_fep_shadow_pane_g1

0xc166,	// (0x000389c9) fep_vkb_bottom_pane_ParamLimits

0xc166,	// (0x000389c9) fep_vkb_bottom_pane

0xc19c,	// (0x000389ff) fep_vkb_candidate_pane_ParamLimits

0xc19c,	// (0x000389ff) fep_vkb_candidate_pane

0xc1b8,	// (0x00038a1b) fep_vkb_keypad_pane_ParamLimits

0xc1b8,	// (0x00038a1b) fep_vkb_keypad_pane

0xc1fe,	// (0x00038a61) fep_vkb_side_pane_ParamLimits

0xc1fe,	// (0x00038a61) fep_vkb_side_pane

0xc23a,	// (0x00038a9d) fep_vkb_top_pane_ParamLimits

0xc23a,	// (0x00038a9d) fep_vkb_top_pane

0xc276,	// (0x00038ad9) fep_vkb_top_pane_g1_ParamLimits

0xc276,	// (0x00038ad9) fep_vkb_top_pane_g1

0xc285,	// (0x00038ae8) fep_vkb_top_pane_g2_ParamLimits

0xc285,	// (0x00038ae8) fep_vkb_top_pane_g2

0xc294,	// (0x00038af7) fep_vkb_top_pane_g3_ParamLimits

0xc294,	// (0x00038af7) fep_vkb_top_pane_g3

0x0003,

0xfb07,	// (0x0003c36a) fep_vkb_top_pane_g_ParamLimits

0xfb07,	// (0x0003c36a) fep_vkb_top_pane_g

0xc2b2,	// (0x00038b15) fep_vkb_top_text_pane_ParamLimits

0xc2b2,	// (0x00038b15) fep_vkb_top_text_pane

0xc2c3,	// (0x00038b26) fep_vkb_side_pane_g1_ParamLimits

0xc2c3,	// (0x00038b26) fep_vkb_side_pane_g1

0xc30c,	// (0x00038b6f) grid_vkb_side_pane_ParamLimits

0xc30c,	// (0x00038b6f) grid_vkb_side_pane

0x68a0,	// (0x00033103) bg_popup_fep_shadow_pane_g2

0x68a9,	// (0x0003310c) bg_popup_fep_shadow_pane_g3

0x68b1,	// (0x00033114) bg_popup_fep_shadow_pane_g4

0x68ba,	// (0x0003311d) bg_popup_fep_shadow_pane_g5

0x68c4,	// (0x00033127) bg_popup_fep_shadow_pane_g6

0x68cc,	// (0x0003312f) bg_popup_fep_shadow_pane_g7

0x82e4,	// (0x00034b47) bg_popup_fep_shadow_pane_g8

0xc363,	// (0x00038bc6) grid_vkb_keypad_number_pane_ParamLimits

0xc363,	// (0x00038bc6) grid_vkb_keypad_number_pane

0xc373,	// (0x00038bd6) grid_vkb_keypad_pane_ParamLimits

0xc373,	// (0x00038bd6) grid_vkb_keypad_pane

0xc399,	// (0x00038bfc) fep_vkb_bottom_pane_g1_ParamLimits

0xc399,	// (0x00038bfc) fep_vkb_bottom_pane_g1

0xc3c2,	// (0x00038c25) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3c2,	// (0x00038c25) grid_vkb_keypad_bottom_left_pane

0xc3d7,	// (0x00038c3a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3d7,	// (0x00038c3a) grid_vkb_keypad_bottom_right_pane

0xc3ec,	// (0x00038c4f) fep_vkb_top_text_pane_g1

0xc407,	// (0x00038c6a) fep_vkb_top_text_pane_t1

0xc41c,	// (0x00038c7f) cell_vkb_side_pane_ParamLimits

0xc41c,	// (0x00038c7f) cell_vkb_side_pane

0xc026,	// (0x00038889) cell_vkb_side_pane_g1

0xc45b,	// (0x00038cbe) cell_vkb_keypad_pane_ParamLimits

0xc45b,	// (0x00038cbe) cell_vkb_keypad_pane

0xc4d0,	// (0x00038d33) cell_vkb_keypad_pane_g1

0x0008,

0xfb34,	// (0x0003c397) bg_popup_fep_shadow_pane_g

0x68de,	// (0x00033141) cell_hwr_side_pane_g1

0x68de,	// (0x00033141) cell_hwr_side_pane_g2

0xc4da,	// (0x00038d3d) cell_vkb_keypad_pane_t1

0xc4e8,	// (0x00038d4b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4e8,	// (0x00038d4b) cell_vkb_keypad_bottom_left_pane

0xc505,	// (0x00038d68) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc505,	// (0x00038d68) cell_vkb_keypad_bottom_right_pane

0xc026,	// (0x00038889) cell_vkb_keypad_bottom_left_pane_g1

0xc026,	// (0x00038889) cell_vkb_keypad_bottom_right_pane_g1

0xc53e,	// (0x00038da1) cell_vkb_keypad_number_pane_ParamLimits

0xc53e,	// (0x00038da1) cell_vkb_keypad_number_pane

0xc55d,	// (0x00038dc0) cell_vkb_keypad_number_pane_g1

0xc567,	// (0x00038dca) cell_vkb_keypad_number_pane_g2

0xc570,	// (0x00038dd3) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb26,	// (0x0003c389) cell_vkb_keypad_number_pane_g

0xc4da,	// (0x00038d3d) cell_vkb_keypad_number_pane_t1

0xc594,	// (0x00038df7) fep_vkb_candidate_pane_g1

0x0001,

0xfb47,	// (0x0003c3aa) cell_hwr_side_pane_g

0xc5ad,	// (0x00038e10) cell_hwr_side_pane_t1

0x68e8,	// (0x0003314b) cell_hwr_side_pane_t1_copy1

0x68f6,	// (0x00033159) cell_hwr_candidate_pane_g1

0x6925,	// (0x00033188) cell_hwr_candidate_pane_t1

0xc026,	// (0x00038889) cell_vkb_candidate_pane_g2

0xc5f1,	// (0x00038e54) cell_vkb_candidate_pane_t1

0x6691,	// (0x00032ef4) bg_popup_fep_shadow_pane_ParamLimits

0x6691,	// (0x00032ef4) bg_popup_fep_shadow_pane

0x6746,	// (0x00032fa9) bg_fep_hwr_top_pane_g4

0xc0a6,	// (0x00038909) bg_hwr_side_pane_g1_ParamLimits

0xc0a6,	// (0x00038909) bg_hwr_side_pane_g1

0x67b7,	// (0x0003301a) cell_hwr_side_pane_ParamLimits

0x67b7,	// (0x0003301a) cell_hwr_side_pane

0x67f2,	// (0x00033055) fep_hwr_write_pane_g1_ParamLimits

0x67f2,	// (0x00033055) fep_hwr_write_pane_g1

0x67ff,	// (0x00033062) fep_hwr_write_pane_g2_ParamLimits

0x67ff,	// (0x00033062) fep_hwr_write_pane_g2

0x680c,	// (0x0003306f) fep_hwr_write_pane_g3_ParamLimits

0x680c,	// (0x0003306f) fep_hwr_write_pane_g3

0x681a,	// (0x0003307d) fep_hwr_write_pane_g4_ParamLimits

0x681a,	// (0x0003307d) fep_hwr_write_pane_g4

0x0005,

0xfaf3,	// (0x0003c356) fep_hwr_write_pane_g_ParamLimits

0xfaf3,	// (0x0003c356) fep_hwr_write_pane_g

0x6746,	// (0x00032fa9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6746,	// (0x00032fa9) bg_fep_hwr_candidate_pane_g2

0x682f,	// (0x00033092) cell_hwr_candidate_pane_ParamLimits

0x682f,	// (0x00033092) cell_hwr_candidate_pane

0x6871,	// (0x000330d4) fep_hwr_candidate_pane_g1_ParamLimits

0xc106,	// (0x00038969) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc106,	// (0x00038969) bg_popup_fep_shadow_pane_cp2

0xc2a4,	// (0x00038b07) fep_vkb_top_pane_g4_ParamLimits

0xc2a4,	// (0x00038b07) fep_vkb_top_pane_g4

0xc2ea,	// (0x00038b4d) fep_vkb_side_pane_g2_ParamLimits

0xc2ea,	// (0x00038b4d) fep_vkb_side_pane_g2

0x4caa,	// (0x0003150d) list_setting_pane_t4_ParamLimits

0x4caa,	// (0x0003150d) list_setting_pane_t4

0x4d44,	// (0x000315a7) list_setting_number_pane_t5_ParamLimits

0x4d44,	// (0x000315a7) list_setting_number_pane_t5

0x8b94,	// (0x000353f7) list_double_heading_pane_cp2_ParamLimits

0x8b94,	// (0x000353f7) list_double_heading_pane_cp2

0x8282,	// (0x00034ae5) list_double_heading_pane_g1_cp2_ParamLimits

0x8282,	// (0x00034ae5) list_double_heading_pane_g1_cp2

0x828e,	// (0x00034af1) list_double_heading_pane_g2_cp2_ParamLimits

0x828e,	// (0x00034af1) list_double_heading_pane_g2_cp2

0xc5ff,	// (0x00038e62) list_double_heading_pane_t1_cp2_ParamLimits

0xc5ff,	// (0x00038e62) list_double_heading_pane_t1_cp2

0xc615,	// (0x00038e78) list_double_heading_pane_t2_cp2_ParamLimits

0xc615,	// (0x00038e78) list_double_heading_pane_t2_cp2

0x2f6a,	// (0x0002f7cd) aid_value_unit2

0x477a,	// (0x00030fdd) popup_preview_fixed_window

0x7c70,	// (0x000344d3) bg_popup_preview_window_pane_cp02

0xc627,	// (0x00038e8a) list_preview_fixed_pane

0xc6af,	// (0x00038f12) list_empty_pane_fp_ParamLimits

0xc6af,	// (0x00038f12) list_empty_pane_fp

0xc6af,	// (0x00038f12) list_single_cale_day_pane_fp_ParamLimits

0xc6af,	// (0x00038f12) list_single_cale_day_pane_fp

0xc6af,	// (0x00038f12) list_single_graphic_heading_pane_fp_ParamLimits

0xc6af,	// (0x00038f12) list_single_graphic_heading_pane_fp

0xc6af,	// (0x00038f12) list_single_graphic_pane_fp_ParamLimits

0xc6af,	// (0x00038f12) list_single_graphic_pane_fp

0xc6af,	// (0x00038f12) list_single_heading_pane_fp_ParamLimits

0xc6af,	// (0x00038f12) list_single_heading_pane_fp

0xc6af,	// (0x00038f12) list_single_pane_fp_ParamLimits

0xc6af,	// (0x00038f12) list_single_pane_fp

0xc6c4,	// (0x00038f27) list_single_pane_fp_g1_ParamLimits

0xc6c4,	// (0x00038f27) list_single_pane_fp_g1

0x6943,	// (0x000331a6) list_single_pane_fp_g2_ParamLimits

0x6943,	// (0x000331a6) list_single_pane_fp_g2

0x694f,	// (0x000331b2) list_single_pane_fp_g3_ParamLimits

0x694f,	// (0x000331b2) list_single_pane_fp_g3

0xc6d0,	// (0x00038f33) list_single_pane_fp_g4_ParamLimits

0xc6d0,	// (0x00038f33) list_single_pane_fp_g4

0x0003,

0xfb5a,	// (0x0003c3bd) list_single_pane_fp_g_ParamLimits

0xfb5a,	// (0x0003c3bd) list_single_pane_fp_g

0x6963,	// (0x000331c6) list_single_pane_fp_t1_ParamLimits

0x6963,	// (0x000331c6) list_single_pane_fp_t1

0x697a,	// (0x000331dd) list_single_graphic_pane_fp_g1_ParamLimits

0x697a,	// (0x000331dd) list_single_graphic_pane_fp_g1

0xc6c4,	// (0x00038f27) list_single_graphic_pane_fp_g2_ParamLimits

0xc6c4,	// (0x00038f27) list_single_graphic_pane_fp_g2

0x6943,	// (0x000331a6) list_single_graphic_pane_fp_g3_ParamLimits

0x6943,	// (0x000331a6) list_single_graphic_pane_fp_g3

0x694f,	// (0x000331b2) list_single_graphic_pane_fp_g4_ParamLimits

0x694f,	// (0x000331b2) list_single_graphic_pane_fp_g4

0xc6d0,	// (0x00038f33) list_single_graphic_pane_fp_g5_ParamLimits

0xc6d0,	// (0x00038f33) list_single_graphic_pane_fp_g5

0x0004,

0xfb63,	// (0x0003c3c6) list_single_graphic_pane_fp_g_ParamLimits

0xfb63,	// (0x0003c3c6) list_single_graphic_pane_fp_g

0x6986,	// (0x000331e9) list_single_graphic_pane_fp_t1_ParamLimits

0x6986,	// (0x000331e9) list_single_graphic_pane_fp_t1

0x697a,	// (0x000331dd) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x697a,	// (0x000331dd) list_single_graphic_heading_pane_fp_g1

0xc6c4,	// (0x00038f27) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6c4,	// (0x00038f27) list_single_graphic_heading_pane_fp_g2

0x6943,	// (0x000331a6) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6943,	// (0x000331a6) list_single_graphic_heading_pane_fp_g3

0x694f,	// (0x000331b2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x694f,	// (0x000331b2) list_single_graphic_heading_pane_fp_g4

0xc6d0,	// (0x00038f33) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6d0,	// (0x00038f33) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb63,	// (0x0003c3c6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb63,	// (0x0003c3c6) list_single_graphic_heading_pane_fp_g

0x699c,	// (0x000331ff) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x699c,	// (0x000331ff) list_single_graphic_heading_pane_fp_t1

0x69b2,	// (0x00033215) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x69b2,	// (0x00033215) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6e,	// (0x0003c3d1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6e,	// (0x0003c3d1) list_single_graphic_heading_pane_fp_t

0x69c4,	// (0x00033227) list_single_cale_day_pane_fp_g1_ParamLimits

0x69c4,	// (0x00033227) list_single_cale_day_pane_fp_g1

0xc6dc,	// (0x00038f3f) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6dc,	// (0x00038f3f) list_single_cale_day_pane_fp_g2

0x69fc,	// (0x0003325f) list_single_cale_day_pane_fp_g3_ParamLimits

0x69fc,	// (0x0003325f) list_single_cale_day_pane_fp_g3

0x6a24,	// (0x00033287) list_single_cale_day_pane_fp_g4_ParamLimits

0x6a24,	// (0x00033287) list_single_cale_day_pane_fp_g4

0x6a48,	// (0x000332ab) list_single_cale_day_pane_fp_g5_ParamLimits

0x6a48,	// (0x000332ab) list_single_cale_day_pane_fp_g5

0x0004,

0xfb73,	// (0x0003c3d6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb73,	// (0x0003c3d6) list_single_cale_day_pane_fp_g

0x6a6c,	// (0x000332cf) list_single_cale_day_pane_fp_t1_ParamLimits

0x6a6c,	// (0x000332cf) list_single_cale_day_pane_fp_t1

0x8636,	// (0x00034e99) list_single_cale_day_pane_fp_t2_ParamLimits

0x8636,	// (0x00034e99) list_single_cale_day_pane_fp_t2

0x864f,	// (0x00034eb2) list_single_cale_day_pane_fp_t3_ParamLimits

0x864f,	// (0x00034eb2) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7e,	// (0x0003c3e1) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7e,	// (0x0003c3e1) list_single_cale_day_pane_fp_t

0xc6c4,	// (0x00038f27) list_empty_pane_fp_g1_ParamLimits

0xc6c4,	// (0x00038f27) list_empty_pane_fp_g1

0x8668,	// (0x00034ecb) list_empty_pane_fp_t1

0x8676,	// (0x00034ed9) list_empty_pane_fp_t2

0x0001,

0xfb85,	// (0x0003c3e8) list_empty_pane_fp_t

0xc6c4,	// (0x00038f27) list_single_heading_pane_fp_g1_ParamLimits

0xc6c4,	// (0x00038f27) list_single_heading_pane_fp_g1

0x6943,	// (0x000331a6) list_single_heading_pane_fp_g2_ParamLimits

0x6943,	// (0x000331a6) list_single_heading_pane_fp_g2

0x694f,	// (0x000331b2) list_single_heading_pane_fp_g3_ParamLimits

0x694f,	// (0x000331b2) list_single_heading_pane_fp_g3

0x0002,

0xfb8a,	// (0x0003c3ed) list_single_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003c3ed) list_single_heading_pane_fp_g

0x8684,	// (0x00034ee7) list_single_heading_pane_fp_t1_ParamLimits

0x8684,	// (0x00034ee7) list_single_heading_pane_fp_t1

0x8696,	// (0x00034ef9) list_single_heading_pane_fp_t2_ParamLimits

0x8696,	// (0x00034ef9) list_single_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x0003c3f4) list_single_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x0003c3f4) list_single_heading_pane_fp_t

0x8486,	// (0x00034ce9) aid_size_cell_fast

0x7be0,	// (0x00034443) soft_indicator_pane_cp1_t1

0x84c3,	// (0x00034d26) cell_app_pane_cp2_ParamLimits

0x84c3,	// (0x00034d26) cell_app_pane_cp2

0x66b3,	// (0x00032f16) fep_hwr_candidate_drop_down_list_pane

0x688b,	// (0x000330ee) fep_hwr_candidate_pane_g3_ParamLimits

0x688b,	// (0x000330ee) fep_hwr_candidate_pane_g3

0x34ca,	// (0x0002fd2d) fep_hwr_candidate_pane_g4_ParamLimits

0x34ca,	// (0x0002fd2d) fep_hwr_candidate_pane_g4

0x0002,

0xfb00,	// (0x0003c363) fep_hwr_candidate_pane_g_ParamLimits

0xfb00,	// (0x0003c363) fep_hwr_candidate_pane_g

0xc18b,	// (0x000389ee) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc18b,	// (0x000389ee) fep_vkb_candidate_drop_down_list_pane

0xc59c,	// (0x00038dff) fep_vkb_candidate_pane_g3

0xc5a4,	// (0x00038e07) fep_vkb_candidate_pane_g4

0x0002,

0xfb2d,	// (0x0003c390) fep_vkb_candidate_pane_g

0x68f6,	// (0x00033159) cell_hwr_candidate_pane_g1_ParamLimits

0x6904,	// (0x00033167) cell_hwr_candidate_pane_g3_ParamLimits

0x6904,	// (0x00033167) cell_hwr_candidate_pane_g3

0xd63d,	// (0x00039ea0) cell_hwr_candidate_pane_g4_ParamLimits

0xd63d,	// (0x00039ea0) cell_hwr_candidate_pane_g4

0x0002,

0xfb4c,	// (0x0003c3af) cell_hwr_candidate_pane_g_ParamLimits

0xfb4c,	// (0x0003c3af) cell_hwr_candidate_pane_g

0xc5bb,	// (0x00038e1e) cell_vkb_candidate_pane_g3_ParamLimits

0xc5bb,	// (0x00038e1e) cell_vkb_candidate_pane_g3

0xc5d6,	// (0x00038e39) cell_vkb_candidate_pane_g4_ParamLimits

0xc5d6,	// (0x00038e39) cell_vkb_candidate_pane_g4

0xc6e8,	// (0x00038f4b) cell_app_pane_cp2_g1_ParamLimits

0xc6e8,	// (0x00038f4b) cell_app_pane_cp2_g1

0xc706,	// (0x00038f69) cell_app_pane_cp2_g2_ParamLimits

0xc706,	// (0x00038f69) cell_app_pane_cp2_g2

0x0001,

0xfb96,	// (0x0003c3f9) cell_app_pane_cp2_g_ParamLimits

0xfb96,	// (0x0003c3f9) cell_app_pane_cp2_g

0xc712,	// (0x00038f75) cell_app_pane_cp2_t1_ParamLimits

0xc712,	// (0x00038f75) cell_app_pane_cp2_t1

0x8274,	// (0x00034ad7) grid_highlight_pane_cp1_ParamLimits

0x8274,	// (0x00034ad7) grid_highlight_pane_cp1

0x6a92,	// (0x000332f5) cell_hwr_candidate_pane_cp1_ParamLimits

0x6a92,	// (0x000332f5) cell_hwr_candidate_pane_cp1

0x68f6,	// (0x00033159) fep_hwr_candidate_drop_down_list_pane_g1

0x6ab1,	// (0x00033314) fep_hwr_candidate_drop_down_list_pane_g2

0x6abe,	// (0x00033321) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9b,	// (0x0003c3fe) fep_hwr_candidate_drop_down_list_pane_g

0x6acb,	// (0x0003332e) fep_hwr_candidate_drop_down_list_scroll_pane

0x6ad4,	// (0x00033337) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6ad4,	// (0x00033337) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6ae1,	// (0x00033344) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6ae1,	// (0x00033344) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6aee,	// (0x00033351) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6aee,	// (0x00033351) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6afb,	// (0x0003335e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6afb,	// (0x0003335e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6b16,	// (0x00033379) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6b16,	// (0x00033379) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6b31,	// (0x00033394) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6b31,	// (0x00033394) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6b4c,	// (0x000333af) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6b4c,	// (0x000333af) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6b67,	// (0x000333ca) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6b67,	// (0x000333ca) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba2,	// (0x0003c405) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba2,	// (0x0003c405) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc724,	// (0x00038f87) cell_vkb_candidate_pane_cp1_ParamLimits

0xc724,	// (0x00038f87) cell_vkb_candidate_pane_cp1

0xc2a4,	// (0x00038b07) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2a4,	// (0x00038b07) fep_vkb_candidate_drop_down_list_pane_g1

0xc744,	// (0x00038fa7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc744,	// (0x00038fa7) fep_vkb_candidate_drop_down_list_pane_g2

0xc751,	// (0x00038fb4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc751,	// (0x00038fb4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x0003c416) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb3,	// (0x0003c416) fep_vkb_candidate_drop_down_list_pane_g

0xc75e,	// (0x00038fc1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc75e,	// (0x00038fc1) fep_vkb_candidate_drop_down_list_scroll_pane

0xc76b,	// (0x00038fce) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc76b,	// (0x00038fce) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc778,	// (0x00038fdb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc778,	// (0x00038fdb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc784,	// (0x00038fe7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc784,	// (0x00038fe7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc66d,	// (0x00038ed0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc66d,	// (0x00038ed0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc68e,	// (0x00038ef1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc68e,	// (0x00038ef1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc790,	// (0x00038ff3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc790,	// (0x00038ff3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7b1,	// (0x00039014) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7b1,	// (0x00039014) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7d2,	// (0x00039035) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7d2,	// (0x00039035) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x0003c41d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x0003c41d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7911,	// (0x00034174) title_pane_g1_ParamLimits

0x791e,	// (0x00034181) title_pane_g2_ParamLimits

0xf529,	// (0x0003bd8c) title_pane_g_ParamLimits

0x8b3d,	// (0x000353a0) aid_call2_pane

0x8b45,	// (0x000353a8) aid_call_pane

0x8b4d,	// (0x000353b0) popup_clock_analogue_window_g1

0x8b4d,	// (0x000353b0) popup_clock_analogue_window_g2

0x5188,	// (0x000319eb) popup_clock_analogue_window_g3

0x5191,	// (0x000319f4) popup_clock_analogue_window_g4

0x2f7c,	// (0x0002f7df) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0003bf36) popup_clock_analogue_window_g

0x5199,	// (0x000319fc) popup_clock_analogue_window_t1

0x51a7,	// (0x00031a0a) clock_digital_number_pane_ParamLimits

0x51a7,	// (0x00031a0a) clock_digital_number_pane

0x51b3,	// (0x00031a16) clock_digital_number_pane_cp02_ParamLimits

0x51b3,	// (0x00031a16) clock_digital_number_pane_cp02

0x51bf,	// (0x00031a22) clock_digital_number_pane_cp03_ParamLimits

0x51bf,	// (0x00031a22) clock_digital_number_pane_cp03

0x51cb,	// (0x00031a2e) clock_digital_number_pane_cp04_ParamLimits

0x51cb,	// (0x00031a2e) clock_digital_number_pane_cp04

0x51d7,	// (0x00031a3a) clock_digital_separator_pane_ParamLimits

0x51d7,	// (0x00031a3a) clock_digital_separator_pane

0x51e3,	// (0x00031a46) popup_clock_digital_window_t1_ParamLimits

0x51e3,	// (0x00031a46) popup_clock_digital_window_t1

0x2f7c,	// (0x0002f7df) clock_digital_number_pane_g1

0x2f7c,	// (0x0002f7df) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0003bf41) clock_digital_number_pane_g

0x2f7c,	// (0x0002f7df) clock_digital_separator_pane_g1

0x2f7c,	// (0x0002f7df) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0003bf41) clock_digital_separator_pane_g

0x94e5,	// (0x00035d48) aid_fill_nsta_ParamLimits

0x9631,	// (0x00035e94) indicator_nsta_pane_ParamLimits

0x97aa,	// (0x0003600d) popup_clock_analogue_window

0x97aa,	// (0x0003600d) popup_clock_digital_window

0xba01,	// (0x00038264) grid_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x0003828d) clock_nsta_pane_t2

0x0001,

0xfa80,	// (0x0003c2e3) clock_nsta_pane_t

0x514c,	// (0x000319af) aid_size_max_handle

0x5156,	// (0x000319b9) aid_size_min_handle

0x9185,	// (0x000359e8) editor_scroll_pane

0xc7ed,	// (0x00039050) ex_editor_pane

0x83f4,	// (0x00034c57) scroll_pane_cp13

0x8213,	// (0x00034a76) scroll_pane_cp14

0x8b7c,	// (0x000353df) scroll_pane_cp36

0x8ba8,	// (0x0003540b) list_single_graphic_hl_pane_cp2_ParamLimits

0x8ba8,	// (0x0003540b) list_single_graphic_hl_pane_cp2

0xafb0,	// (0x00037813) list_single_graphic_hl_pane_ParamLimits

0xafb0,	// (0x00037813) list_single_graphic_hl_pane

0x86ac,	// (0x00034f0f) aid_size_min_hl_cp1

0xc7f5,	// (0x00039058) list_highlight_pane_cp34_ParamLimits

0xc7f5,	// (0x00039058) list_highlight_pane_cp34

0xc806,	// (0x00039069) list_single_graphic_hl_pane_g1_ParamLimits

0xc806,	// (0x00039069) list_single_graphic_hl_pane_g1

0x86b5,	// (0x00034f18) list_single_graphic_hl_pane_g2_ParamLimits

0x86b5,	// (0x00034f18) list_single_graphic_hl_pane_g2

0x86b5,	// (0x00034f18) list_single_graphic_hl_pane_g3_ParamLimits

0x86b5,	// (0x00034f18) list_single_graphic_hl_pane_g3

0x86c1,	// (0x00034f24) list_single_graphic_hl_pane_g4_ParamLimits

0x86c1,	// (0x00034f24) list_single_graphic_hl_pane_g4

0x86cd,	// (0x00034f30) list_single_graphic_hl_pane_g5_ParamLimits

0x86cd,	// (0x00034f30) list_single_graphic_hl_pane_g5

0x0004,

0xfbcb,	// (0x0003c42e) list_single_graphic_hl_pane_g_ParamLimits

0xfbcb,	// (0x0003c42e) list_single_graphic_hl_pane_g

0x86e1,	// (0x00034f44) list_single_graphic_hl_pane_t1_ParamLimits

0x86e1,	// (0x00034f44) list_single_graphic_hl_pane_t1

0xc813,	// (0x00039076) aid_size_min_hl_cp2

0xc81c,	// (0x0003907f) list_highlight_pane_cp34_cp2_ParamLimits

0xc81c,	// (0x0003907f) list_highlight_pane_cp34_cp2

0xc806,	// (0x00039069) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc806,	// (0x00039069) list_single_graphic_hl_pane_g1_cp2

0xc829,	// (0x0003908c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc829,	// (0x0003908c) list_single_graphic_hl_pane_g2_cp2

0xc835,	// (0x00039098) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc835,	// (0x00039098) list_single_graphic_hl_pane_g3_cp2

0xc843,	// (0x000390a6) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc843,	// (0x000390a6) list_single_graphic_hl_pane_g4_cp2

0xc84f,	// (0x000390b2) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc84f,	// (0x000390b2) list_single_graphic_hl_pane_g5_cp2

0x5521,	// (0x00031d84) control_pane_g4_ParamLimits

0x5521,	// (0x00031d84) control_pane_g4

0x94a9,	// (0x00035d0c) bg_popup_sub_pane_cp10_ParamLimits

0xc030,	// (0x00038893) list_choice_list_pane_ParamLimits

0xc03f,	// (0x000388a2) scroll_pane_cp23

0x7c70,	// (0x000344d3) bg_popup_preview_window_pane_cp02_ParamLimits

0xc627,	// (0x00038e8a) list_preview_fixed_pane_ParamLimits

0xc63d,	// (0x00038ea0) list_preview_fixed_pane_cp_ParamLimits

0xc63d,	// (0x00038ea0) list_preview_fixed_pane_cp

0xc649,	// (0x00038eac) popup_preview_fixed_window_g1_ParamLimits

0xc649,	// (0x00038eac) popup_preview_fixed_window_g1

0xc655,	// (0x00038eb8) popup_preview_fixed_window_g2_ParamLimits

0xc655,	// (0x00038eb8) popup_preview_fixed_window_g2

0x0002,

0xfb53,	// (0x0003c3b6) popup_preview_fixed_window_g_ParamLimits

0xfb53,	// (0x0003c3b6) popup_preview_fixed_window_g

0x50c0,	// (0x00031923) aid_navi_side_left_pane_ParamLimits

0x50d5,	// (0x00031938) aid_navi_side_right_pane_ParamLimits

0x50ed,	// (0x00031950) navi_icon_pane_stacon_ParamLimits

0x5101,	// (0x00031964) navi_navi_pane_stacon_ParamLimits

0x50ed,	// (0x00031950) navi_text_pane_stacon_ParamLimits

0x463b,	// (0x00030e9e) main_text_info_pane

0xc879,	// (0x000390dc) listscroll_text_info_pane

0xc881,	// (0x000390e4) list_text_info_pane_ParamLimits

0xc881,	// (0x000390e4) list_text_info_pane

0xc890,	// (0x000390f3) scroll_pane_cp24_ParamLimits

0xc890,	// (0x000390f3) scroll_pane_cp24

0xc8ae,	// (0x00039111) list_text_info_pane_t1_ParamLimits

0xc8ae,	// (0x00039111) list_text_info_pane_t1

0x5697,	// (0x00031efa) popup_fast_swap2_window_ParamLimits

0x5697,	// (0x00031efa) popup_fast_swap2_window

0xc8df,	// (0x00039142) aid_size_cell_fast2

0x2f72,	// (0x0002f7d5) bg_popup_window_pane_cp17

0x9e33,	// (0x00036696) heading_pane_cp2

0x9e3b,	// (0x0003669e) listscroll_fast2_pane

0xc8e9,	// (0x0003914c) grid_fast2_pane

0xc8f3,	// (0x00039156) listscroll_fast2_pane_g1

0xc8fb,	// (0x0003915e) listscroll_fast2_pane_g2

0x0001,

0xfbd6,	// (0x0003c439) listscroll_fast2_pane_g

0x83f4,	// (0x00034c57) scroll_pane_cp26

0xc905,	// (0x00039168) cell_fast2_pane_ParamLimits

0xc905,	// (0x00039168) cell_fast2_pane

0xc91a,	// (0x0003917d) cell_fast2_pane_g1

0xc923,	// (0x00039186) cell_fast2_pane_g2

0xc92c,	// (0x0003918f) cell_fast2_pane_g3

0x0002,

0xfbdb,	// (0x0003c43e) cell_fast2_pane_g

0x7fd0,	// (0x00034833) grid_highlight_pane_cp9

0x5655,	// (0x00031eb8) main_eswt_pane_ParamLimits

0x5655,	// (0x00031eb8) main_eswt_pane

0xc8a5,	// (0x00039108) list_single_text_info_pane

0xc934,	// (0x00039197) eswt_ctrl_button_pane

0xc934,	// (0x00039197) eswt_ctrl_canvas_pane

0xc93c,	// (0x0003919f) eswt_ctrl_combo_pane

0xc934,	// (0x00039197) eswt_ctrl_default_pane

0xc934,	// (0x00039197) eswt_ctrl_label_pane

0xc944,	// (0x000391a7) eswt_ctrl_wait_pane

0xc94c,	// (0x000391af) eswt_shell_pane

0x2f72,	// (0x0002f7d5) listscroll_eswt_app_pane

0xc96c,	// (0x000391cf) popup_eswt_tasktip_window_ParamLimits

0xc96c,	// (0x000391cf) popup_eswt_tasktip_window

0x9a47,	// (0x000362aa) bg_popup_window_pane_cp18

0xc97d,	// (0x000391e0) eswt_control_pane_g1_ParamLimits

0xc97d,	// (0x000391e0) eswt_control_pane_g1

0xc98a,	// (0x000391ed) eswt_control_pane_g2_ParamLimits

0xc98a,	// (0x000391ed) eswt_control_pane_g2

0xc997,	// (0x000391fa) eswt_control_pane_g3_ParamLimits

0xc997,	// (0x000391fa) eswt_control_pane_g3

0xc9a4,	// (0x00039207) eswt_control_pane_g4_ParamLimits

0xc9a4,	// (0x00039207) eswt_control_pane_g4

0x0003,

0xfbe2,	// (0x0003c445) eswt_control_pane_g_ParamLimits

0xfbe2,	// (0x0003c445) eswt_control_pane_g

0x8274,	// (0x00034ad7) bg_button_pane_ParamLimits

0x8274,	// (0x00034ad7) bg_button_pane

0x7fe5,	// (0x00034848) common_borders_pane_copy2_ParamLimits

0x7fe5,	// (0x00034848) common_borders_pane_copy2

0xc9b1,	// (0x00039214) control_button_pane_g1_ParamLimits

0xc9b1,	// (0x00039214) control_button_pane_g1

0xc9bd,	// (0x00039220) control_button_pane_g2_ParamLimits

0xc9bd,	// (0x00039220) control_button_pane_g2

0xc9c9,	// (0x0003922c) control_button_pane_g3_ParamLimits

0xc9c9,	// (0x0003922c) control_button_pane_g3

0x0002,

0xfbeb,	// (0x0003c44e) control_button_pane_g_ParamLimits

0xfbeb,	// (0x0003c44e) control_button_pane_g

0xc9dd,	// (0x00039240) control_button_pane_t1

0xc9eb,	// (0x0003924e) control_button_pane_t2

0x0001,

0xfbf2,	// (0x0003c455) control_button_pane_t

0x99d3,	// (0x00036236) bg_button_pane_g1

0x99e3,	// (0x00036246) bg_button_pane_g2

0x99db,	// (0x0003623e) bg_button_pane_g3

0x99f3,	// (0x00036256) bg_button_pane_g4

0x99eb,	// (0x0003624e) bg_button_pane_g5

0x99fb,	// (0x0003625e) bg_button_pane_g6

0x9a03,	// (0x00036266) bg_button_pane_g7

0x9a13,	// (0x00036276) bg_button_pane_g8

0x9a0b,	// (0x0003626e) bg_button_pane_g9

0x0008,

0xf841,	// (0x0003c0a4) bg_button_pane_g

0xbfeb,	// (0x0003884e) common_borders_pane_ParamLimits

0xbfeb,	// (0x0003884e) common_borders_pane

0xc97d,	// (0x000391e0) eswt_control_pane_g1_copy1_ParamLimits

0xc97d,	// (0x000391e0) eswt_control_pane_g1_copy1

0xc98a,	// (0x000391ed) eswt_control_pane_g2_copy1_ParamLimits

0xc98a,	// (0x000391ed) eswt_control_pane_g2_copy1

0xc997,	// (0x000391fa) eswt_control_pane_g3_copy1_ParamLimits

0xc997,	// (0x000391fa) eswt_control_pane_g3_copy1

0xc9a4,	// (0x00039207) eswt_control_pane_g4_copy1_ParamLimits

0xc9a4,	// (0x00039207) eswt_control_pane_g4_copy1

0xc026,	// (0x00038889) bg_eswt_ctrl_canvas_pane_g1

0xbfeb,	// (0x0003884e) common_borders_pane_cp2_ParamLimits

0xbfeb,	// (0x0003884e) common_borders_pane_cp2

0xbfeb,	// (0x0003884e) common_borders_pane_cp3_ParamLimits

0xbfeb,	// (0x0003884e) common_borders_pane_cp3

0xc9f9,	// (0x0003925c) separator_horizontal_pane

0xca01,	// (0x00039264) separator_vertical_pane

0xc97d,	// (0x000391e0) eswt_control_pane_g1_copy2_ParamLimits

0xc97d,	// (0x000391e0) eswt_control_pane_g1_copy2

0xc98a,	// (0x000391ed) eswt_control_pane_g2_copy2_ParamLimits

0xc98a,	// (0x000391ed) eswt_control_pane_g2_copy2

0xc997,	// (0x000391fa) eswt_control_pane_g3_copy2_ParamLimits

0xc997,	// (0x000391fa) eswt_control_pane_g3_copy2

0xc9a4,	// (0x00039207) eswt_control_pane_g4_copy2_ParamLimits

0xc9a4,	// (0x00039207) eswt_control_pane_g4_copy2

0x2f72,	// (0x0002f7d5) common_borders_pane_cp4

0xca0a,	// (0x0003926d) separator_horizontal_pane_g1

0xca13,	// (0x00039276) separator_horizontal_pane_g2

0xca1c,	// (0x0003927f) separator_horizontal_pane_g3

0x0002,

0xfbf7,	// (0x0003c45a) separator_horizontal_pane_g

0xc97d,	// (0x000391e0) eswt_control_pane_g1_copy3_ParamLimits

0xc97d,	// (0x000391e0) eswt_control_pane_g1_copy3

0xc98a,	// (0x000391ed) eswt_control_pane_g2_copy3_ParamLimits

0xc98a,	// (0x000391ed) eswt_control_pane_g2_copy3

0xc997,	// (0x000391fa) eswt_control_pane_g3_copy3_ParamLimits

0xc997,	// (0x000391fa) eswt_control_pane_g3_copy3

0xc9a4,	// (0x00039207) eswt_control_pane_g4_copy3_ParamLimits

0xc9a4,	// (0x00039207) eswt_control_pane_g4_copy3

0x2f72,	// (0x0002f7d5) common_borders_pane_cp5

0xca25,	// (0x00039288) separator_vertical_pane_g1

0xca2e,	// (0x00039291) separator_vertical_pane_g2

0xca37,	// (0x0003929a) separator_vertical_pane_g3

0x0002,

0xfbfe,	// (0x0003c461) separator_vertical_pane_g

0xc97d,	// (0x000391e0) eswt_control_pane_g1_copy4_ParamLimits

0xc97d,	// (0x000391e0) eswt_control_pane_g1_copy4

0xc98a,	// (0x000391ed) eswt_control_pane_g2_copy4_ParamLimits

0xc98a,	// (0x000391ed) eswt_control_pane_g2_copy4

0xc997,	// (0x000391fa) eswt_control_pane_g3_copy4_ParamLimits

0xc997,	// (0x000391fa) eswt_control_pane_g3_copy4

0xc9a4,	// (0x00039207) eswt_control_pane_g4_copy4_ParamLimits

0xc9a4,	// (0x00039207) eswt_control_pane_g4_copy4

0xca40,	// (0x000392a3) eswt_ctrl_combo_button_pane

0xca48,	// (0x000392ab) eswt_ctrl_input_pane

0xca50,	// (0x000392b3) popup_choice_list_window_cp70

0xca58,	// (0x000392bb) eswt_ctrl_input_pane_t1

0x2f72,	// (0x0002f7d5) input_focus_pane_cp70

0xbfeb,	// (0x0003884e) bg_button_pane_cp70_ParamLimits

0xbfeb,	// (0x0003884e) bg_button_pane_cp70

0xca66,	// (0x000392c9) eswt_ctrl_combo_button_pane_g1

0xca6e,	// (0x000392d1) wait_bar_pane_cp70

0x9a47,	// (0x000362aa) bg_popup_window_pane_cp70_ParamLimits

0x9a47,	// (0x000362aa) bg_popup_window_pane_cp70

0xca76,	// (0x000392d9) popup_eswt_tasktip_window_t1

0xca8c,	// (0x000392ef) wait_bar_pane_cp71_ParamLimits

0xca8c,	// (0x000392ef) wait_bar_pane_cp71

0xca98,	// (0x000392fb) grid_eswt_app_pane

0x8956,	// (0x000351b9) scroll_pane_cp70

0xcaa1,	// (0x00039304) cell_eswt_app_pane_ParamLimits

0xcaa1,	// (0x00039304) cell_eswt_app_pane

0xcad1,	// (0x00039334) cell_eswt_app_pane_g1_ParamLimits

0xcad1,	// (0x00039334) cell_eswt_app_pane_g1

0xcb00,	// (0x00039363) cell_eswt_app_pane_g2_ParamLimits

0xcb00,	// (0x00039363) cell_eswt_app_pane_g2

0x0001,

0xfc05,	// (0x0003c468) cell_eswt_app_pane_g_ParamLimits

0xfc05,	// (0x0003c468) cell_eswt_app_pane_g

0xcb29,	// (0x0003938c) cell_eswt_app_pane_t1_ParamLimits

0xcb29,	// (0x0003938c) cell_eswt_app_pane_t1

0xcb5b,	// (0x000393be) grid_highlight_pane_cp70_ParamLimits

0xcb5b,	// (0x000393be) grid_highlight_pane_cp70

0x9051,	// (0x000358b4) set_content_pane_g1

0x9430,	// (0x00035c93) status_small_volume_pane

0x6b82,	// (0x000333e5) status_small_volume_pane_g1

0x6b8a,	// (0x000333ed) volume_small2_pane

0x6b93,	// (0x000333f6) volume_small2_pane_g1

0x6b9c,	// (0x000333ff) volume_small2_pane_g2

0x6ba5,	// (0x00033408) volume_small2_pane_g3

0x6bae,	// (0x00033411) volume_small2_pane_g4

0x6bb7,	// (0x0003341a) volume_small2_pane_g5

0x6bc0,	// (0x00033423) volume_small2_pane_g6

0x6bc9,	// (0x0003342c) volume_small2_pane_g7

0x6bd2,	// (0x00033435) volume_small2_pane_g8

0x6bdb,	// (0x0003343e) volume_small2_pane_g9

0x6be4,	// (0x00033447) volume_small2_pane_g10

0x0009,

0xfc0a,	// (0x0003c46d) volume_small2_pane_g

0xc3ec,	// (0x00038c4f) fep_vkb_top_text_pane_g1_ParamLimits

0xc407,	// (0x00038c6a) fep_vkb_top_text_pane_t1_ParamLimits

0xc661,	// (0x00038ec4) popup_preview_fixed_window_g3_ParamLimits

0xc661,	// (0x00038ec4) popup_preview_fixed_window_g3

0x5b48,	// (0x000323ab) popup_toolbar_trans_pane

0xadb7,	// (0x0003761a) aid_height_set_list_ParamLimits

0xadc8,	// (0x0003762b) aid_size_parent_ParamLimits

0x94a9,	// (0x00035d0c) list_highlight_pane_cp2_ParamLimits

0x9051,	// (0x000358b4) set_content_pane_g1_ParamLimits

0x61a5,	// (0x00032a08) list_single_image_pane_ParamLimits

0x61a5,	// (0x00032a08) list_single_image_pane

0xcb67,	// (0x000393ca) aid_size_cell_image_ParamLimits

0xcb67,	// (0x000393ca) aid_size_cell_image

0xcb74,	// (0x000393d7) grid_single_image_pane_ParamLimits

0xcb74,	// (0x000393d7) grid_single_image_pane

0xa789,	// (0x00036fec) list_single_image_pane_g1_ParamLimits

0xa789,	// (0x00036fec) list_single_image_pane_g1

0xcb80,	// (0x000393e3) list_single_image_pane_g2_ParamLimits

0xcb80,	// (0x000393e3) list_single_image_pane_g2

0x0001,

0xfc1f,	// (0x0003c482) list_single_image_pane_g_ParamLimits

0xfc1f,	// (0x0003c482) list_single_image_pane_g

0xcb94,	// (0x000393f7) list_single_image_pane_t1_ParamLimits

0xcb94,	// (0x000393f7) list_single_image_pane_t1

0xcbaa,	// (0x0003940d) cell_image_list_pane_ParamLimits

0xcbaa,	// (0x0003940d) cell_image_list_pane

0xcbbe,	// (0x00039421) cell_image_list_pane_g1

0xcbc7,	// (0x0003942a) cell_image_list_pane_g2

0x0001,

0xfc24,	// (0x0003c487) cell_image_list_pane_g

0xcbd0,	// (0x00039433) aid_size_cell_tb_trans_pane

0x8274,	// (0x00034ad7) bg_tb_trans_pane

0xcbe2,	// (0x00039445) grid_tb_trans_pane

0x99d3,	// (0x00036236) bg_tb_trans_pane_g1

0x99e3,	// (0x00036246) bg_tb_trans_pane_g2

0x99db,	// (0x0003623e) bg_tb_trans_pane_g3

0x99f3,	// (0x00036256) bg_tb_trans_pane_g4

0x99eb,	// (0x0003624e) bg_tb_trans_pane_g5

0x9a13,	// (0x00036276) bg_tb_trans_pane_g6

0x9a0b,	// (0x0003626e) bg_tb_trans_pane_g7

0x99fb,	// (0x0003625e) bg_tb_trans_pane_g8

0x9a03,	// (0x00036266) bg_tb_trans_pane_g9

0x0008,

0xfc29,	// (0x0003c48c) bg_tb_trans_pane_g

0xcbf6,	// (0x00039459) cell_toolbar_trans_pane_ParamLimits

0xcbf6,	// (0x00039459) cell_toolbar_trans_pane

0xc026,	// (0x00038889) cell_toolbar_trans_pane_g1

0xbbfb,	// (0x0003845e) list_form2_midp_pane_t1

0xbc09,	// (0x0003846c) list_form2_midp_pane_t2

0x0001,

0xfac6,	// (0x0003c329) list_form2_midp_pane_t

0xbc17,	// (0x0003847a) scroll_pane_cp51_ParamLimits

0xbdd3,	// (0x00038636) form2_midp_wait_pane_g1

0xbddc,	// (0x0003863f) form2_midp_wait_pane_g2

0xbde5,	// (0x00038648) form2_midp_wait_pane_g3

0x0002,

0xfadb,	// (0x0003c33e) form2_midp_wait_pane_g

0x79e7,	// (0x0003424a) list_highlight_pane_cp21_ParamLimits

0xbe31,	// (0x00038694) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe40,	// (0x000386a3) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6146,	// (0x000329a9) list_single_2graphic_im_pane_ParamLimits

0x6146,	// (0x000329a9) list_single_2graphic_im_pane

0xcc1c,	// (0x0003947f) list_single_2graphic_im_pane_g1_ParamLimits

0xcc1c,	// (0x0003947f) list_single_2graphic_im_pane_g1

0xcc2d,	// (0x00039490) list_single_2graphic_im_pane_g2_ParamLimits

0xcc2d,	// (0x00039490) list_single_2graphic_im_pane_g2

0xcc39,	// (0x0003949c) list_single_2graphic_im_pane_g3_ParamLimits

0xcc39,	// (0x0003949c) list_single_2graphic_im_pane_g3

0x0003,

0xfc3c,	// (0x0003c49f) list_single_2graphic_im_pane_g_ParamLimits

0xfc3c,	// (0x0003c49f) list_single_2graphic_im_pane_g

0xcc59,	// (0x000394bc) list_single_2graphic_im_pane_t1_ParamLimits

0xcc59,	// (0x000394bc) list_single_2graphic_im_pane_t1

0xc6af,	// (0x00038f12) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6af,	// (0x00038f12) list_single_graphic_2heading_pane_fp

0x697a,	// (0x000331dd) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x697a,	// (0x000331dd) list_single_graphic_2heading_pane_fp_g1

0xc6c4,	// (0x00038f27) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6c4,	// (0x00038f27) list_single_graphic_2heading_pane_fp_g2

0x6943,	// (0x000331a6) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6943,	// (0x000331a6) list_single_graphic_2heading_pane_fp_g3

0x694f,	// (0x000331b2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x694f,	// (0x000331b2) list_single_graphic_2heading_pane_fp_g4

0xc6d0,	// (0x00038f33) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6d0,	// (0x00038f33) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb63,	// (0x0003c3c6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb63,	// (0x0003c3c6) list_single_graphic_2heading_pane_fp_g

0x86f7,	// (0x00034f5a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x86f7,	// (0x00034f5a) list_single_graphic_2heading_pane_fp_t1

0x69b2,	// (0x00033215) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x69b2,	// (0x00033215) list_single_graphic_2heading_pane_fp_t2

0x870d,	// (0x00034f70) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x870d,	// (0x00034f70) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc45,	// (0x0003c4a8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc45,	// (0x0003c4a8) list_single_graphic_2heading_pane_fp_t

0xc0b2,	// (0x00038915) fep_hwr_write_pane_g5_ParamLimits

0xc0b2,	// (0x00038915) fep_hwr_write_pane_g5

0xc0be,	// (0x00038921) fep_hwr_write_pane_g6_ParamLimits

0xc0be,	// (0x00038921) fep_hwr_write_pane_g6

0xc94c,	// (0x000391af) eswt_shell_pane_ParamLimits

0x9a47,	// (0x000362aa) bg_popup_window_pane_cp18_ParamLimits

0xad10,	// (0x00037573) heading_pane_cp70

0xca76,	// (0x000392d9) popup_eswt_tasktip_window_t1_ParamLimits

0x953a,	// (0x00035d9d) aid_touch_tab_arrow_left

0x9549,	// (0x00035dac) aid_touch_tab_arrow_right

0x792f,	// (0x00034192) title_pane_g3_ParamLimits

0x792f,	// (0x00034192) title_pane_g3

0x8233,	// (0x00034a96) set_value_pane_g1

0x5b48,	// (0x000323ab) popup_toolbar_trans_pane_ParamLimits

0xcbd0,	// (0x00039433) aid_size_cell_tb_trans_pane_ParamLimits

0x8274,	// (0x00034ad7) bg_tb_trans_pane_ParamLimits

0xcbe2,	// (0x00039445) grid_tb_trans_pane_ParamLimits

0x7c70,	// (0x000344d3) cont_note_pane_ParamLimits

0x7c70,	// (0x000344d3) cont_note_pane

0x7fe5,	// (0x00034848) cont_snote2_single_text_pane_ParamLimits

0x7fe5,	// (0x00034848) cont_snote2_single_text_pane

0x7fe5,	// (0x00034848) cont_snote2_single_graphic_pane_ParamLimits

0x7fe5,	// (0x00034848) cont_snote2_single_graphic_pane

0xa062,	// (0x000368c5) cont_note_wait_pane_ParamLimits

0xa062,	// (0x000368c5) cont_note_wait_pane

0xa062,	// (0x000368c5) cont_note_image_pane_ParamLimits

0xa062,	// (0x000368c5) cont_note_image_pane

0xcc8a,	// (0x000394ed) popup_note2_window_g1_ParamLimits

0xcc8a,	// (0x000394ed) popup_note2_window_g1

0xccbb,	// (0x0003951e) popup_note2_window_t1_ParamLimits

0xccbb,	// (0x0003951e) popup_note2_window_t1

0xcd00,	// (0x00039563) popup_note2_window_t2_ParamLimits

0xcd00,	// (0x00039563) popup_note2_window_t2

0xcd45,	// (0x000395a8) popup_note2_window_t3_ParamLimits

0xcd45,	// (0x000395a8) popup_note2_window_t3

0xcd8a,	// (0x000395ed) popup_note2_window_t4_ParamLimits

0xcd8a,	// (0x000395ed) popup_note2_window_t4

0x7cf4,	// (0x00034557) popup_note2_window_t5_ParamLimits

0x7cf4,	// (0x00034557) popup_note2_window_t5

0x0004,

0xfc51,	// (0x0003c4b4) popup_note2_window_t_ParamLimits

0xfc51,	// (0x0003c4b4) popup_note2_window_t

0xcdb9,	// (0x0003961c) popup_note2_image_window_g1_ParamLimits

0xcdb9,	// (0x0003961c) popup_note2_image_window_g1

0xcdc5,	// (0x00039628) popup_note2_image_window_g2_ParamLimits

0xcdc5,	// (0x00039628) popup_note2_image_window_g2

0x0001,

0xfc5c,	// (0x0003c4bf) popup_note2_image_window_g_ParamLimits

0xfc5c,	// (0x0003c4bf) popup_note2_image_window_g

0xcdd7,	// (0x0003963a) popup_note2_image_window_t1_ParamLimits

0xcdd7,	// (0x0003963a) popup_note2_image_window_t1

0xcdef,	// (0x00039652) popup_note2_image_window_t2_ParamLimits

0xcdef,	// (0x00039652) popup_note2_image_window_t2

0xce07,	// (0x0003966a) popup_note2_image_window_t3_ParamLimits

0xce07,	// (0x0003966a) popup_note2_image_window_t3

0x0002,

0xfc61,	// (0x0003c4c4) popup_note2_image_window_t_ParamLimits

0xfc61,	// (0x0003c4c4) popup_note2_image_window_t

0xa070,	// (0x000368d3) popup_note2_wait_window_g1_ParamLimits

0xa070,	// (0x000368d3) popup_note2_wait_window_g1

0xce23,	// (0x00039686) popup_note2_wait_window_g2_ParamLimits

0xce23,	// (0x00039686) popup_note2_wait_window_g2

0xa088,	// (0x000368eb) popup_note2_wait_window_g3_ParamLimits

0xa088,	// (0x000368eb) popup_note2_wait_window_g3

0x0002,

0xfc68,	// (0x0003c4cb) popup_note2_wait_window_g_ParamLimits

0xfc68,	// (0x0003c4cb) popup_note2_wait_window_g

0xce2f,	// (0x00039692) popup_note2_wait_window_t1_ParamLimits

0xce2f,	// (0x00039692) popup_note2_wait_window_t1

0xce4d,	// (0x000396b0) popup_note2_wait_window_t2_ParamLimits

0xce4d,	// (0x000396b0) popup_note2_wait_window_t2

0xce6b,	// (0x000396ce) popup_note2_wait_window_t3_ParamLimits

0xce6b,	// (0x000396ce) popup_note2_wait_window_t3

0xce7d,	// (0x000396e0) popup_note2_wait_window_t4_ParamLimits

0xce7d,	// (0x000396e0) popup_note2_wait_window_t4

0x0003,

0xfc6f,	// (0x0003c4d2) popup_note2_wait_window_t_ParamLimits

0xfc6f,	// (0x0003c4d2) popup_note2_wait_window_t

0xce8f,	// (0x000396f2) wait_bar2_pane_ParamLimits

0xce8f,	// (0x000396f2) wait_bar2_pane

0xcea7,	// (0x0003970a) popup_snote2_single_text_window_g1_ParamLimits

0xcea7,	// (0x0003970a) popup_snote2_single_text_window_g1

0xcecf,	// (0x00039732) popup_snote2_single_text_window_t1_ParamLimits

0xcecf,	// (0x00039732) popup_snote2_single_text_window_t1

0xcf1b,	// (0x0003977e) popup_snote2_single_text_window_t2_ParamLimits

0xcf1b,	// (0x0003977e) popup_snote2_single_text_window_t2

0xcf67,	// (0x000397ca) popup_snote2_single_text_window_t3_ParamLimits

0xcf67,	// (0x000397ca) popup_snote2_single_text_window_t3

0xcfa8,	// (0x0003980b) popup_snote2_single_text_window_t4_ParamLimits

0xcfa8,	// (0x0003980b) popup_snote2_single_text_window_t4

0xcfde,	// (0x00039841) popup_snote2_single_text_window_t5_ParamLimits

0xcfde,	// (0x00039841) popup_snote2_single_text_window_t5

0x0004,

0xfc78,	// (0x0003c4db) popup_snote2_single_text_window_t_ParamLimits

0xfc78,	// (0x0003c4db) popup_snote2_single_text_window_t

0xd009,	// (0x0003986c) popup_snote2_single_graphic_window_g1_ParamLimits

0xd009,	// (0x0003986c) popup_snote2_single_graphic_window_g1

0xd031,	// (0x00039894) popup_snote2_single_graphic_window_g2_ParamLimits

0xd031,	// (0x00039894) popup_snote2_single_graphic_window_g2

0x0001,

0xfc83,	// (0x0003c4e6) popup_snote2_single_graphic_window_g_ParamLimits

0xfc83,	// (0x0003c4e6) popup_snote2_single_graphic_window_g

0xd059,	// (0x000398bc) popup_snote2_single_graphic_window_t1_ParamLimits

0xd059,	// (0x000398bc) popup_snote2_single_graphic_window_t1

0xd0a5,	// (0x00039908) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0a5,	// (0x00039908) popup_snote2_single_graphic_window_t2

0xcf67,	// (0x000397ca) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf67,	// (0x000397ca) popup_snote2_single_graphic_window_t3

0xcfa8,	// (0x0003980b) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfa8,	// (0x0003980b) popup_snote2_single_graphic_window_t4

0xcfde,	// (0x00039841) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfde,	// (0x00039841) popup_snote2_single_graphic_window_t5

0x0004,

0xfc88,	// (0x0003c4eb) popup_snote2_single_graphic_window_t_ParamLimits

0xfc88,	// (0x0003c4eb) popup_snote2_single_graphic_window_t

0xbad8,	// (0x0003833b) clock_nsta_pane_cp2_t1

0xbad8,	// (0x0003833b) clock_nsta_pane_cp2_t2

0x0001,

0xfa9c,	// (0x0003c2ff) clock_nsta_pane_cp2_t

0x4e3e,	// (0x000316a1) form_field_data_wide_pane_g1_ParamLimits

0x8282,	// (0x00034ae5) form_field_data_wide_pane_g2_ParamLimits

0x8282,	// (0x00034ae5) form_field_data_wide_pane_g2

0x828e,	// (0x00034af1) form_field_data_wide_pane_g3_ParamLimits

0x828e,	// (0x00034af1) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0003beb9) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0003beb9) form_field_data_wide_pane_g

0xb9b4,	// (0x00038217) grid_touch_3_pane_ParamLimits

0xb9b4,	// (0x00038217) grid_touch_3_pane

0xd0f1,	// (0x00039954) cell_touch_3_pane_ParamLimits

0xd0f1,	// (0x00039954) cell_touch_3_pane

0xc026,	// (0x00038889) cell_touch_3_pane_g1

0xc026,	// (0x00038889) cell_touch_3_pane_g2

0x0001,

0xfb21,	// (0x0003c384) cell_touch_3_pane_g

0x7d4c,	// (0x000345af) cont_query_data_pane

0x7d54,	// (0x000345b7) cont_query_data_pane_cp1

0xd11f,	// (0x00039982) button_value_adjust_pane_cp7

0xd127,	// (0x0003998a) query_popup_pane_cp3

0x8c56,	// (0x000354b9) bg_popup_sub_pane_cp22_ParamLimits

0x5202,	// (0x00031a65) navi_navi_volume_pane_cp2

0x521d,	// (0x00031a80) popup_side_volume_key_window_g2

0x522c,	// (0x00031a8f) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0003bf4f) popup_side_volume_key_window_g

0x5249,	// (0x00031aac) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0003bf56) popup_side_volume_key_window_t

0x8f10,	// (0x00035773) popup_side_volume_key_window_ParamLimits

0x4ac6,	// (0x00031329) list_double_graphic_pane_g4_ParamLimits

0x4ac6,	// (0x00031329) list_double_graphic_pane_g4

0x6185,	// (0x000329e8) list_single_2heading_msg_pane_ParamLimits

0x6185,	// (0x000329e8) list_single_2heading_msg_pane

0x872d,	// (0x00034f90) list_single_2heading_msg_pane_g1_ParamLimits

0x872d,	// (0x00034f90) list_single_2heading_msg_pane_g1

0x3a17,	// (0x0003027a) list_single_2heading_msg_pane_g2_ParamLimits

0x3a17,	// (0x0003027a) list_single_2heading_msg_pane_g2

0x8739,	// (0x00034f9c) list_single_2heading_msg_pane_g3_ParamLimits

0x8739,	// (0x00034f9c) list_single_2heading_msg_pane_g3

0x8745,	// (0x00034fa8) list_single_2heading_msg_pane_g4_ParamLimits

0x8745,	// (0x00034fa8) list_single_2heading_msg_pane_g4

0x0003,

0xfc93,	// (0x0003c4f6) list_single_2heading_msg_pane_g_ParamLimits

0xfc93,	// (0x0003c4f6) list_single_2heading_msg_pane_g

0x875d,	// (0x00034fc0) list_single_2heading_msg_pane_t1_ParamLimits

0x875d,	// (0x00034fc0) list_single_2heading_msg_pane_t1

0x8785,	// (0x00034fe8) list_single_2heading_msg_pane_t2_ParamLimits

0x8785,	// (0x00034fe8) list_single_2heading_msg_pane_t2

0x87b9,	// (0x0003501c) list_single_2heading_msg_pane_t3_ParamLimits

0x87b9,	// (0x0003501c) list_single_2heading_msg_pane_t3

0x87f2,	// (0x00035055) list_single_2heading_msg_pane_t4_ParamLimits

0x87f2,	// (0x00035055) list_single_2heading_msg_pane_t4

0x0003,

0xfc9c,	// (0x0003c4ff) list_single_2heading_msg_pane_t_ParamLimits

0xfc9c,	// (0x0003c4ff) list_single_2heading_msg_pane_t

0x793b,	// (0x0003419e) title_pane_g4_ParamLimits

0x793b,	// (0x0003419e) title_pane_g4

0x5011,	// (0x00031874) title_pane_stacon_g3_ParamLimits

0x5011,	// (0x00031874) title_pane_stacon_g3

0xcc4d,	// (0x000394b0) list_single_2graphic_im_pane_g4_ParamLimits

0xcc4d,	// (0x000394b0) list_single_2graphic_im_pane_g4

0xaacd,	// (0x00037330) popup_side_volume_key_window_cp

0xb2ff,	// (0x00037b62) main_idle_act2_pane_t1

0x5c74,	// (0x000324d7) toolbar_button_pane_g10

0x81dd,	// (0x00034a40) popup_toolbar_window_cp1

0xbac9,	// (0x0003832c) clock_nsta_pane_cp_t1

0xbac9,	// (0x0003832c) clock_nsta_pane_cp_t2

0x0001,

0xfa97,	// (0x0003c2fa) clock_nsta_pane_cp_t

0x5202,	// (0x00031a65) navi_navi_volume_pane_cp2_ParamLimits

0x5211,	// (0x00031a74) popup_side_volume_key_window_g1_ParamLimits

0x521d,	// (0x00031a80) popup_side_volume_key_window_g2_ParamLimits

0x522c,	// (0x00031a8f) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0003bf4f) popup_side_volume_key_window_g_ParamLimits

0x669f,	// (0x00032f02) fep_hwr_aid_pane

0x6746,	// (0x00032fa9) bg_fep_hwr_top_pane_g4_ParamLimits

0xc082,	// (0x000388e5) fep_hwr_top_pane_g1_ParamLimits

0xc094,	// (0x000388f7) fep_hwr_top_pane_g2_ParamLimits

0x6766,	// (0x00032fc9) fep_hwr_top_pane_g3_ParamLimits

0xfaec,	// (0x0003c34f) fep_hwr_top_pane_g_ParamLimits

0x677b,	// (0x00032fde) fep_hwr_top_text_pane_ParamLimits

0xa890,	// (0x000370f3) aid_touch_tab_arrow_arrow_2

0xa899,	// (0x000370fc) aid_touch_tab_arrow_left_2

0x66b3,	// (0x00032f16) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x66ea,	// (0x00032f4d) fep_hwr_prediction_pane

0xc1f4,	// (0x00038a57) fep_vkb_prediction_pane

0xc2f8,	// (0x00038b5b) fep_vkb_side_pane_g3_ParamLimits

0xc2f8,	// (0x00038b5b) fep_vkb_side_pane_g3

0x68f6,	// (0x00033159) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6ab1,	// (0x00033314) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6abe,	// (0x00033321) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9b,	// (0x0003c3fe) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6bed,	// (0x00033450) fep_hwr_prediction_pane_g1

0x6bf7,	// (0x0003345a) fep_hwr_prediction_pane_g2

0x6bff,	// (0x00033462) fep_hwr_prediction_pane_g3

0x6c07,	// (0x0003346a) fep_hwr_prediction_pane_g4

0x0003,

0xfca5,	// (0x0003c508) fep_hwr_prediction_pane_g

0xd14c,	// (0x000399af) fep_vkb_prediction_pane_g1

0xd156,	// (0x000399b9) fep_vkb_prediction_pane_g2

0xd15e,	// (0x000399c1) fep_vkb_prediction_pane_g3

0xd166,	// (0x000399c9) fep_vkb_prediction_pane_g4

0x0003,

0xfcae,	// (0x0003c511) fep_vkb_prediction_pane_g

0x607b,	// (0x000328de) slider_set_pane_g3

0x608f,	// (0x000328f2) slider_set_pane_g4

0x60a7,	// (0x0003290a) slider_set_pane_g5

0x607b,	// (0x000328de) slider_set_pane_g6

0x60bd,	// (0x00032920) slider_set_pane_g7

0xaf2d,	// (0x00037790) slider_form_pane_g3

0xaf36,	// (0x00037799) slider_form_pane_g4

0xaf3e,	// (0x000377a1) slider_form_pane_g5

0xaf2d,	// (0x00037790) slider_form_pane_g6

0xaf46,	// (0x000377a9) slider_form_pane_g7

0xb5aa,	// (0x00037e0d) slider_set_pane_vc_g3

0xb5b3,	// (0x00037e16) slider_set_pane_vc_g4

0xb5bc,	// (0x00037e1f) slider_set_pane_vc_g5

0xb5aa,	// (0x00037e0d) slider_set_pane_vc_g6

0xb5c5,	// (0x00037e28) slider_set_pane_vc_g7

0xb787,	// (0x00037fea) slider_form_pane_vc_g1

0xb790,	// (0x00037ff3) slider_form_pane_vc_g2

0xb799,	// (0x00037ffc) slider_form_pane_vc_g3

0xb787,	// (0x00037fea) slider_form_pane_vc_g4

0xb7a2,	// (0x00038005) slider_form_pane_vc_g5

0x0004,

0xfa69,	// (0x0003c2cc) slider_form_pane_vc_g

0x463b,	// (0x00030e9e) main_idle_act3_pane

0xd16e,	// (0x000399d1) ai3_links_pane

0xd177,	// (0x000399da) popup_ai3_data_window_ParamLimits

0xd177,	// (0x000399da) popup_ai3_data_window

0x2f72,	// (0x0002f7d5) grid_ai3_links_pane

0xd191,	// (0x000399f4) cell_ai3_links_pane_ParamLimits

0xd191,	// (0x000399f4) cell_ai3_links_pane

0xd1a9,	// (0x00039a0c) bg_popup_sub_pane_cp11

0xd1b6,	// (0x00039a19) cell_ai3_links_pane_g1

0x2f72,	// (0x0002f7d5) bg_popup_sub_pane_cp12

0xd1db,	// (0x00039a3e) heading_ai3_data_pane

0xd1e3,	// (0x00039a46) list_ai3_gene_pane

0xd1ef,	// (0x00039a52) popup_ai3_data_window_g1

0xd1f7,	// (0x00039a5a) heading_ai3_data_pane_g1

0xd1ff,	// (0x00039a62) heading_ai3_data_pane_t1

0xd20d,	// (0x00039a70) list_double_ai3_gene_pane_ParamLimits

0xd20d,	// (0x00039a70) list_double_ai3_gene_pane

0xd21a,	// (0x00039a7d) list_single_ai3_gene_pane_ParamLimits

0xd21a,	// (0x00039a7d) list_single_ai3_gene_pane

0xbfeb,	// (0x0003884e) list_highlight_pane_cp7_ParamLimits

0xbfeb,	// (0x0003884e) list_highlight_pane_cp7

0xd227,	// (0x00039a8a) list_single_a13_gene_pane_t1_ParamLimits

0xd227,	// (0x00039a8a) list_single_a13_gene_pane_t1

0xd23e,	// (0x00039aa1) list_single_ai3_gene_pane_g1

0xd247,	// (0x00039aaa) list_single_ai3_gene_pane_g2

0x0001,

0xfcb7,	// (0x0003c51a) list_single_ai3_gene_pane_g

0xd24f,	// (0x00039ab2) list_double_ai3_gene_pane_g1_ParamLimits

0xd24f,	// (0x00039ab2) list_double_ai3_gene_pane_g1

0xd25b,	// (0x00039abe) list_double_ai3_gene_pane_t1_ParamLimits

0xd25b,	// (0x00039abe) list_double_ai3_gene_pane_t1

0xd277,	// (0x00039ada) list_double_ai3_gene_pane_t2_ParamLimits

0xd277,	// (0x00039ada) list_double_ai3_gene_pane_t2

0xd28d,	// (0x00039af0) list_double_ai3_gene_pane_t3_ParamLimits

0xd28d,	// (0x00039af0) list_double_ai3_gene_pane_t3

0x0002,

0xfcbc,	// (0x0003c51f) list_double_ai3_gene_pane_t_ParamLimits

0xfcbc,	// (0x0003c51f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8723,	// (0x00034f86) aid_size_min_col_2

0xd138,	// (0x0003999b) aid_size_min_msg_ParamLimits

0xd138,	// (0x0003999b) aid_size_min_msg

0xc3f8,	// (0x00038c5b) fep_vkb_top_text_pane_g2_ParamLimits

0xc3f8,	// (0x00038c5b) fep_vkb_top_text_pane_g2

0x0001,

0xfb1c,	// (0x0003c37f) fep_vkb_top_text_pane_g_ParamLimits

0xfb1c,	// (0x0003c37f) fep_vkb_top_text_pane_g

0x463b,	// (0x00030e9e) main_hc_apps_shell_pane

0xd2aa,	// (0x00039b0d) grid_hc_apps_pane_ParamLimits

0xd2aa,	// (0x00039b0d) grid_hc_apps_pane

0xd2bc,	// (0x00039b1f) list_hc_apps_pane

0xd2c4,	// (0x00039b27) scroll_pane_cp37_ParamLimits

0xd2c4,	// (0x00039b27) scroll_pane_cp37

0xd2d0,	// (0x00039b33) cell_hc_apps_pane_ParamLimits

0xd2d0,	// (0x00039b33) cell_hc_apps_pane

0xd37e,	// (0x00039be1) cell_hc_apps_pane_g1_ParamLimits

0xd37e,	// (0x00039be1) cell_hc_apps_pane_g1

0xd3ae,	// (0x00039c11) cell_hc_apps_pane_g2_ParamLimits

0xd3ae,	// (0x00039c11) cell_hc_apps_pane_g2

0xd3ca,	// (0x00039c2d) cell_hc_apps_pane_g3_ParamLimits

0xd3ca,	// (0x00039c2d) cell_hc_apps_pane_g3

0x0002,

0xfcc3,	// (0x0003c526) cell_hc_apps_pane_g_ParamLimits

0xfcc3,	// (0x0003c526) cell_hc_apps_pane_g

0xd3ec,	// (0x00039c4f) cell_hc_apps_pane_t1_ParamLimits

0xd3ec,	// (0x00039c4f) cell_hc_apps_pane_t1

0x7c70,	// (0x000344d3) grid_highlight_pane_cp10_ParamLimits

0x7c70,	// (0x000344d3) grid_highlight_pane_cp10

0xd42c,	// (0x00039c8f) list_single_hc_apps_pane_ParamLimits

0xd42c,	// (0x00039c8f) list_single_hc_apps_pane

0xd488,	// (0x00039ceb) list_single_hc_apps_pane_g1

0x8817,	// (0x0003507a) list_single_hc_apps_pane_g2

0x0001,

0xfcca,	// (0x0003c52d) list_single_hc_apps_pane_g

0x8830,	// (0x00035093) list_single_hc_apps_pane_g2_copy1

0x884c,	// (0x000350af) list_single_hc_apps_pane_t1

0x79e7,	// (0x0003424a) bg_set_opt_pane_cp_ParamLimits

0x489c,	// (0x000310ff) setting_slider_pane_t1_ParamLimits

0x48b5,	// (0x00031118) setting_slider_pane_t2_ParamLimits

0x48cf,	// (0x00031132) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0003bd9c) setting_slider_pane_t_ParamLimits

0x48e7,	// (0x0003114a) slider_set_pane_ParamLimits

0x5535,	// (0x00031d98) control_pane_g5_ParamLimits

0x5535,	// (0x00031d98) control_pane_g5

0xad7c,	// (0x000375df) slider_set_pane_g1_ParamLimits

0x606f,	// (0x000328d2) slider_set_pane_g2_ParamLimits

0x607b,	// (0x000328de) slider_set_pane_g3_ParamLimits

0x608f,	// (0x000328f2) slider_set_pane_g4_ParamLimits

0x60a7,	// (0x0003290a) slider_set_pane_g5_ParamLimits

0x607b,	// (0x000328de) slider_set_pane_g6_ParamLimits

0x60bd,	// (0x00032920) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0003c1a2) slider_set_pane_g_ParamLimits

0x8ffc,	// (0x0003585f) navi_icon_text_pane_ParamLimits

0x94fb,	// (0x00035d5e) aid_fill_nsta_2_ParamLimits

0x953a,	// (0x00035d9d) aid_touch_tab_arrow_left_ParamLimits

0x9549,	// (0x00035dac) aid_touch_tab_arrow_right_ParamLimits

0x95b6,	// (0x00035e19) clock_nsta_pane_ParamLimits

0xa872,	// (0x000370d5) navi_icon_pane_g1_ParamLimits

0xa87e,	// (0x000370e1) navi_text_pane_t1_ParamLimits

0xbbd5,	// (0x00038438) navi_icon_text_pane_g1_ParamLimits

0xbbe1,	// (0x00038444) navi_icon_text_pane_t1_ParamLimits

0xd488,	// (0x00039ceb) list_single_hc_apps_pane_g1_ParamLimits

0x8817,	// (0x0003507a) list_single_hc_apps_pane_g2_ParamLimits

0xfcca,	// (0x0003c52d) list_single_hc_apps_pane_g_ParamLimits

0x8830,	// (0x00035093) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x884c,	// (0x000350af) list_single_hc_apps_pane_t1_ParamLimits

0x47a6,	// (0x00031009) popup_toolbar2_fixed_window_ParamLimits

0x47a6,	// (0x00031009) popup_toolbar2_fixed_window

0x5b3e,	// (0x000323a1) popup_toolbar2_float_window

0x2f72,	// (0x0002f7d5) bg_popup_sub_pane_cp27

0xd4a1,	// (0x00039d04) grid_toolbar2_float_pane

0x2f72,	// (0x0002f7d5) bg_popup_sub_pane_cp26

0xd4a1,	// (0x00039d04) grid_toolbar2_fixed_pane

0xd4a9,	// (0x00039d0c) cell_toolbar2_fixed_pane_ParamLimits

0xd4a9,	// (0x00039d0c) cell_toolbar2_fixed_pane

0xd4b9,	// (0x00039d1c) cell_toolbar2_fixed_pane_g1

0xd4c2,	// (0x00039d25) toolbar2_fixed_button_pane

0x99d3,	// (0x00036236) toolbar2_fixed_button_pane_g1

0x99e3,	// (0x00036246) toolbar2_fixed_button_pane_g2

0x99db,	// (0x0003623e) toolbar2_fixed_button_pane_g3

0x99f3,	// (0x00036256) toolbar2_fixed_button_pane_g4

0x99eb,	// (0x0003624e) toolbar2_fixed_button_pane_g5

0x99fb,	// (0x0003625e) toolbar2_fixed_button_pane_g6

0x9a03,	// (0x00036266) toolbar2_fixed_button_pane_g7

0x9a13,	// (0x00036276) toolbar2_fixed_button_pane_g8

0x9a0b,	// (0x0003626e) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0003c0a4) toolbar2_fixed_button_pane_g

0xd4ca,	// (0x00039d2d) cell_toolbar2_float_pane_ParamLimits

0xd4ca,	// (0x00039d2d) cell_toolbar2_float_pane

0xd4db,	// (0x00039d3e) cell_toolbar2_float_pane_g1

0xd4c2,	// (0x00039d25) toolbar2_fixed_button_pane_cp

0xc154,	// (0x000389b7) fep_vkb_accented_list_pane_ParamLimits

0xc154,	// (0x000389b7) fep_vkb_accented_list_pane

0x68d6,	// (0x00033139) bg_popup_fep_shadow_pane_g9

0x9185,	// (0x000359e8) bg_popup_fep_shadow_pane_cp3

0x83db,	// (0x00034c3e) list_accented_list_pane

0xd4e4,	// (0x00039d47) list_single_accented_list_pane_ParamLimits

0xd4e4,	// (0x00039d47) list_single_accented_list_pane

0x9185,	// (0x000359e8) list_highlight_pane_cp10

0xd4f5,	// (0x00039d58) list_single_accented_list_pane_t1

0x5a8e,	// (0x000322f1) popup_slider_window_ParamLimits

0x5a8e,	// (0x000322f1) popup_slider_window

0xd12f,	// (0x00039992) aid_indentation_list_msg

0xd5b9,	// (0x00039e1c) bg_popup_window_pane_cp19

0xd621,	// (0x00039e84) popup_slider_window_g1

0xd65e,	// (0x00039ec1) popup_slider_window_g2

0xd67a,	// (0x00039edd) popup_slider_window_g3

0x0005,

0xfccf,	// (0x0003c532) popup_slider_window_g

0xd6e0,	// (0x00039f43) popup_slider_window_t1

0xd754,	// (0x00039fb7) small_volume_slider_vertical_pane

0xc026,	// (0x00038889) small_volume_slider_vertical_pane_g1

0xc026,	// (0x00038889) small_volume_slider_vertical_pane_g2

0xd770,	// (0x00039fd3) small_volume_slider_vertical_pane_g3

0x0002,

0xfce1,	// (0x0003c544) small_volume_slider_vertical_pane_g

0x455e,	// (0x00030dc1) area_side_right_pane_ParamLimits

0x455e,	// (0x00030dc1) area_side_right_pane

0x6c0f,	// (0x00033472) aid_size_side_button_ParamLimits

0x6c0f,	// (0x00033472) aid_size_side_button

0x6c23,	// (0x00033486) grid_sctrl_middle_pane_ParamLimits

0x6c23,	// (0x00033486) grid_sctrl_middle_pane

0x6c42,	// (0x000334a5) sctrl_sk_bottom_pane

0x6c53,	// (0x000334b6) sctrl_sk_top_pane

0x6c65,	// (0x000334c8) aid_touch_sctrl_top

0x6c72,	// (0x000334d5) bg_sctrl_sk_pane_ParamLimits

0x6c72,	// (0x000334d5) bg_sctrl_sk_pane

0x6c80,	// (0x000334e3) sctrl_sk_top_pane_g1

0x6c8d,	// (0x000334f0) sctrl_sk_top_pane_t1

0x6c65,	// (0x000334c8) aid_touch_sctrl_bottom

0x6c72,	// (0x000334d5) bg_sctrl_sk_pane_cp_ParamLimits

0x6c72,	// (0x000334d5) bg_sctrl_sk_pane_cp

0x6ca8,	// (0x0003350b) sctrl_sk_bottom_pane_g1

0x6c8d,	// (0x000334f0) sctrl_sk_bottom_pane_t1

0x6cb1,	// (0x00033514) cell_sctrl_middle_pane_ParamLimits

0x6cb1,	// (0x00033514) cell_sctrl_middle_pane

0x6ccc,	// (0x0003352f) aid_touch_sctrl_middle_ParamLimits

0x6ccc,	// (0x0003352f) aid_touch_sctrl_middle

0x6cde,	// (0x00033541) bg_sctrl_middle_pane_ParamLimits

0x6cde,	// (0x00033541) bg_sctrl_middle_pane

0x68f6,	// (0x00033159) cell_sctrl_middle_pane_g1_ParamLimits

0x68f6,	// (0x00033159) cell_sctrl_middle_pane_g1

0x6cec,	// (0x0003354f) cell_sctrl_middle_pane_g2_ParamLimits

0x6cec,	// (0x0003354f) cell_sctrl_middle_pane_g2

0x0001,

0xfced,	// (0x0003c550) cell_sctrl_middle_pane_g_ParamLimits

0xfced,	// (0x0003c550) cell_sctrl_middle_pane_g

0x99d3,	// (0x00036236) bg_sctrl_middle_pane_g1

0x99db,	// (0x0003623e) bg_sctrl_middle_pane_g2

0x99e3,	// (0x00036246) bg_sctrl_middle_pane_g3

0x99eb,	// (0x0003624e) bg_sctrl_middle_pane_g4

0x99f3,	// (0x00036256) bg_sctrl_middle_pane_g5

0x99fb,	// (0x0003625e) bg_sctrl_middle_pane_g6

0x9a03,	// (0x00036266) bg_sctrl_middle_pane_g7

0x9a0b,	// (0x0003626e) bg_sctrl_middle_pane_g8

0x0007,

0xfcf2,	// (0x0003c555) bg_sctrl_middle_pane_g

0x9a13,	// (0x00036276) bg_sctrl_middle_pane_g8_copy1

0x99d3,	// (0x00036236) bg_sctrl_sk_pane_g1

0x99e3,	// (0x00036246) bg_sctrl_sk_pane_g2

0x99db,	// (0x0003623e) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0003c0a4) bg_sctrl_sk_pane_g

0x81a3,	// (0x00034a06) aid_size_touch_scroll_bar

0x99f3,	// (0x00036256) bg_sctrl_sk_pane_g4

0x99eb,	// (0x0003624e) bg_sctrl_sk_pane_g5

0x99fb,	// (0x0003625e) bg_sctrl_sk_pane_g6

0x9a03,	// (0x00036266) bg_sctrl_sk_pane_g7

0x9a13,	// (0x00036276) bg_sctrl_sk_pane_g8

0x9a0b,	// (0x0003626e) bg_sctrl_sk_pane_g9

0x56f5,	// (0x00031f58) popup_fep_china_hwr2_fs_candidate_window

0x56ff,	// (0x00031f62) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x56ff,	// (0x00031f62) popup_fep_china_hwr2_fs_control_window

0x68f6,	// (0x00033159) sctrl_sk_top_pane_g2

0x0001,

0xfce8,	// (0x0003c54b) sctrl_sk_top_pane_g

0xd779,	// (0x00039fdc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd779,	// (0x00039fdc) aid_fep_china_hwr2_fs_cell

0xd78b,	// (0x00039fee) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd78b,	// (0x00039fee) bg_popup_fep_shadow_pane_cp4

0xd7a2,	// (0x0003a005) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7a2,	// (0x0003a005) bg_popup_fep_shadow_pane_cp5

0xd7b4,	// (0x0003a017) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7b4,	// (0x0003a017) popup_fep_china_hwr2_fs_control_bar_grid

0xd7c4,	// (0x0003a027) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7cc,	// (0x0003a02f) aid_fep_china_hwr2_fs_candi_cell

0x2f72,	// (0x0002f7d5) bg_popup_fep_shadow_pane_cp6

0xd7d6,	// (0x0003a039) popup_fep_china_hwr2_fs_candidate_grid

0xd7e0,	// (0x0003a043) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7e0,	// (0x0003a043) cell_fep_china_hwr2_fs_funtion_grid

0xc026,	// (0x00038889) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7f8,	// (0x0003a05b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7f8,	// (0x0003a05b) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd806,	// (0x0003a069) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd806,	// (0x0003a069) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd03,	// (0x0003c566) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd03,	// (0x0003c566) cell_fep_china_hwr2_fs_funtion_grid_g

0xd81c,	// (0x0003a07f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd81c,	// (0x0003a07f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd831,	// (0x0003a094) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd831,	// (0x0003a094) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd08,	// (0x0003c56b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd08,	// (0x0003c56b) cell_fep_china_hwr2_fs_funtion_grid_t

0xd84d,	// (0x0003a0b0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd855,	// (0x0003a0b8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd85d,	// (0x0003a0c0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0d,	// (0x0003c570) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd865,	// (0x0003a0c8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd865,	// (0x0003a0c8) cell_fep_china_hwr2_fs_candidate_grid

0xd87e,	// (0x0003a0e1) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd886,	// (0x0003a0e9) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc026,	// (0x00038889) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc026,	// (0x00038889) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb21,	// (0x0003c384) cell_fep_china_hwr2_fs_candidate_grid_g

0xd88e,	// (0x0003a0f1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95c9,	// (0x00035e2c) clock_nsta_pane_cp_24_ParamLimits

0x95c9,	// (0x00035e2c) clock_nsta_pane_cp_24

0x9647,	// (0x00035eaa) indicator_nsta_pane_cp_24_ParamLimits

0x9647,	// (0x00035eaa) indicator_nsta_pane_cp_24

0xa6e2,	// (0x00036f45) heading_pane_g1

0x0001,

0xf8a6,	// (0x0003c109) heading_pane_g

0xb148,	// (0x000379ab) grid_sct_catagory_button_pane

0xb178,	// (0x000379db) scroll_pane_cp5_ParamLimits

0xbc23,	// (0x00038486) button_value_adjust_pane_cp5_ParamLimits

0xbc23,	// (0x00038486) button_value_adjust_pane_cp5

0xbd02,	// (0x00038565) form2_midp_time_pane_ParamLimits

0xd89c,	// (0x0003a0ff) cell_sct_catagory_button_pane_ParamLimits

0xd89c,	// (0x0003a0ff) cell_sct_catagory_button_pane

0xbfeb,	// (0x0003884e) bg_button_pane_cp01_ParamLimits

0xbfeb,	// (0x0003884e) bg_button_pane_cp01

0xc026,	// (0x00038889) cell_sct_catagory_button_pane_g1

0x5acd,	// (0x00032330) popup_tb_extension_window

0xd8ae,	// (0x0003a111) aid_size_cell_ext_ParamLimits

0xd8ae,	// (0x0003a111) aid_size_cell_ext

0x7c70,	// (0x000344d3) bg_tb_trans_pane_cp1_ParamLimits

0x7c70,	// (0x000344d3) bg_tb_trans_pane_cp1

0xd8ce,	// (0x0003a131) grid_tb_ext_pane_ParamLimits

0xd8ce,	// (0x0003a131) grid_tb_ext_pane

0xd8fc,	// (0x0003a15f) cell_tb_ext_pane_ParamLimits

0xd8fc,	// (0x0003a15f) cell_tb_ext_pane

0xd913,	// (0x0003a176) cell_tb_ext_pane_g1_ParamLimits

0xd913,	// (0x0003a176) cell_tb_ext_pane_g1

0xd930,	// (0x0003a193) cell_tb_ext_pane_t1

0x7c70,	// (0x000344d3) list_highlight_pane_cp11_ParamLimits

0x7c70,	// (0x000344d3) list_highlight_pane_cp11

0x47c5,	// (0x00031028) popup_uni_indicator_window_ParamLimits

0x47c5,	// (0x00031028) popup_uni_indicator_window

0x8274,	// (0x00034ad7) bg_popup_sub_pane_cp14

0xd94b,	// (0x0003a1ae) list_uniindi_pane

0xd957,	// (0x0003a1ba) uniindi_top_pane

0x7c70,	// (0x000344d3) bg_uniindi_top_pane

0xd976,	// (0x0003a1d9) uniindi_top_pane_g1

0xd98c,	// (0x0003a1ef) uniindi_top_pane_g2

0x0003,

0xfd14,	// (0x0003c577) uniindi_top_pane_g

0xd9b6,	// (0x0003a219) uniindi_top_pane_t1

0xd9e0,	// (0x0003a243) list_single_uniindi_pane_ParamLimits

0xd9e0,	// (0x0003a243) list_single_uniindi_pane

0xc026,	// (0x00038889) bg_uniindi_top_pane_g1

0xd9f3,	// (0x0003a256) list_single_uniindi_pane_g1

0xda06,	// (0x0003a269) list_single_uniindi_pane_t1

0x463b,	// (0x00030e9e) control_bg_pane

0xda2b,	// (0x0003a28e) bg_sctrl_sk_pane_cp1

0xda34,	// (0x0003a297) bg_sctrl_sk_pane_cp2

0xda3d,	// (0x0003a2a0) control_bg_pane_g1

0xda46,	// (0x0003a2a9) control_bg_pane_g2

0x0001,

0xfd1d,	// (0x0003c580) control_bg_pane_g

0xba6d,	// (0x000382d0) cell_indicator_nsta_pane_g1_ParamLimits

0xba7b,	// (0x000382de) cell_indicator_nsta_pane_g2_ParamLimits

0xfa85,	// (0x0003c2e8) cell_indicator_nsta_pane_g_ParamLimits

0x667e,	// (0x00032ee1) form2_midp_time_pane_t1_ParamLimits

0x5655,	// (0x00031eb8) main_idle_act4_pane_ParamLimits

0x5655,	// (0x00031eb8) main_idle_act4_pane

0x5acd,	// (0x00032330) popup_tb_extension_window_ParamLimits

0xd8ec,	// (0x0003a14f) tb_ext_find_pane_ParamLimits

0xd8ec,	// (0x0003a14f) tb_ext_find_pane

0xda4f,	// (0x0003a2b2) ai_gene_pane_1_cp1

0x92cc,	// (0x00035b2f) ai_gene_pane_2_cp1

0xda57,	// (0x0003a2ba) list_single_idle_plugin_calendar_pane

0xda60,	// (0x0003a2c3) list_single_idle_plugin_notification_pane

0xda69,	// (0x0003a2cc) list_single_idle_plugin_player_pane

0xda72,	// (0x0003a2d5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda72,	// (0x0003a2d5) list_single_idle_plugin_shortcut_pane

0xda94,	// (0x0003a2f7) main_idle_act4_pane_t1

0xdaa6,	// (0x0003a309) main_idle_act4_pane_t2

0x0001,

0xfd22,	// (0x0003c585) main_idle_act4_pane_t

0xdab8,	// (0x0003a31b) middle_sk_idle_act4_pane_ParamLimits

0xdab8,	// (0x0003a31b) middle_sk_idle_act4_pane

0xdace,	// (0x0003a331) popup_clock_digital_analogue_window_cp2

0xdae8,	// (0x0003a34b) shortcut_wheel_idle_act4_pane_ParamLimits

0xdae8,	// (0x0003a34b) shortcut_wheel_idle_act4_pane

0xc026,	// (0x00038889) shortcut_wheel_idle_act4_pane_g1

0xc026,	// (0x00038889) shortcut_wheel_idle_act4_pane_g2

0xc026,	// (0x00038889) shortcut_wheel_idle_act4_pane_g3

0xc026,	// (0x00038889) shortcut_wheel_idle_act4_pane_g4

0xc026,	// (0x00038889) shortcut_wheel_idle_act4_pane_g5

0xdafc,	// (0x0003a35f) shortcut_wheel_idle_act4_pane_g6

0xdb04,	// (0x0003a367) shortcut_wheel_idle_act4_pane_g7

0xdb0c,	// (0x0003a36f) shortcut_wheel_idle_act4_pane_g8

0xdb14,	// (0x0003a377) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd27,	// (0x0003c58a) shortcut_wheel_idle_act4_pane_g

0xc2a4,	// (0x00038b07) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2a4,	// (0x00038b07) middle_sk_idle_act4_pane_g1

0xdb78,	// (0x0003a3db) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb78,	// (0x0003a3db) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4a,	// (0x0003c5ad) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4a,	// (0x0003c5ad) middle_sk_idle_act4_pane_g

0xdb84,	// (0x0003a3e7) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb84,	// (0x0003a3e7) middle_sk_idle_act4_pane_t1

0xdba1,	// (0x0003a404) grid_ai_shortcut_pane_ParamLimits

0xdba1,	// (0x0003a404) grid_ai_shortcut_pane

0xdbba,	// (0x0003a41d) list_highlight_pane_cp16_ParamLimits

0xdbba,	// (0x0003a41d) list_highlight_pane_cp16

0xdbc7,	// (0x0003a42a) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbc7,	// (0x0003a42a) list_single_idle_plugin_shortcut_pane_g1

0xdbd3,	// (0x0003a436) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbd3,	// (0x0003a436) list_single_idle_plugin_shortcut_pane_g2

0xdbeb,	// (0x0003a44e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbeb,	// (0x0003a44e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4f,	// (0x0003c5b2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4f,	// (0x0003c5b2) list_single_idle_plugin_shortcut_pane_g

0xdbfe,	// (0x0003a461) cell_ai_shortcut_pane_ParamLimits

0xdbfe,	// (0x0003a461) cell_ai_shortcut_pane

0xdc22,	// (0x0003a485) cell_ai_shortcut_pane_g1_ParamLimits

0xdc22,	// (0x0003a485) cell_ai_shortcut_pane_g1

0xda4f,	// (0x0003a2b2) ai_gene_pane_1_cp2

0xdc44,	// (0x0003a4a7) ai_gene_pane_2_cp2

0xdc4c,	// (0x0003a4af) list_highlight_pane_cp15

0xdc55,	// (0x0003a4b8) list_single_idle_plugin_calendar_pane_g1

0xdc4c,	// (0x0003a4af) list_highlight_pane_cp17

0xdc5d,	// (0x0003a4c0) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc65,	// (0x0003a4c8) list_single_idle_plugin_player_pane_g1

0xb3a1,	// (0x00037c04) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd56,	// (0x0003c5b9) list_single_idle_plugin_player_pane_g

0xdc6d,	// (0x0003a4d0) list_single_idle_plugin_player_pane_t1

0xdc7b,	// (0x0003a4de) list_single_idle_plugin_player_pane_t2

0xdc89,	// (0x0003a4ec) list_single_idle_plugin_player_pane_t3

0xdc97,	// (0x0003a4fa) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5b,	// (0x0003c5be) list_single_idle_plugin_player_pane_t

0xdca5,	// (0x0003a508) wait_bar_pane_cp15

0xdcad,	// (0x0003a510) grid_ai_notification_pane

0xb3a1,	// (0x00037c04) list_single_idle_plugin_notification_pane_g1

0xdcb6,	// (0x0003a519) cell_ai_notification_pane_ParamLimits

0xdcb6,	// (0x0003a519) cell_ai_notification_pane

0xdcc3,	// (0x0003a526) cell_ai_notification_pane_g1

0xdccb,	// (0x0003a52e) cell_ai_notification_pane_t1

0xdcd9,	// (0x0003a53c) tb_ext_find_button_pane

0xdce1,	// (0x0003a544) tb_ext_find_pane_g1

0xdce9,	// (0x0003a54c) tb_ext_find_pane_t1

0x8b4d,	// (0x000353b0) tb_ext_find_button_pane_g1

0xdcf7,	// (0x0003a55a) tb_ext_find_button_pane_g2

0x0001,

0xfd64,	// (0x0003c5c7) tb_ext_find_button_pane_g

0xda94,	// (0x0003a2f7) main_idle_act4_pane_t1_ParamLimits

0xdaa6,	// (0x0003a309) main_idle_act4_pane_t2_ParamLimits

0xfd22,	// (0x0003c585) main_idle_act4_pane_t_ParamLimits

0xdace,	// (0x0003a331) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdadc,	// (0x0003a33f) sat_plugin_idle_act4_pane_ParamLimits

0xdadc,	// (0x0003a33f) sat_plugin_idle_act4_pane

0xdd00,	// (0x0003a563) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd00,	// (0x0003a563) sat_plugin_idle_act4_pane_t1

0xdd13,	// (0x0003a576) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd13,	// (0x0003a576) sat_plugin_idle_act4_pane_t2

0xdd26,	// (0x0003a589) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd26,	// (0x0003a589) sat_plugin_idle_act4_pane_t3

0xdd39,	// (0x0003a59c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd39,	// (0x0003a59c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd69,	// (0x0003c5cc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd69,	// (0x0003c5cc) sat_plugin_idle_act4_pane_t

0x4700,	// (0x00030f63) popup_battery_window_ParamLimits

0x4700,	// (0x00030f63) popup_battery_window

0x7c70,	// (0x000344d3) bg_popup_sub_pane_cp25_ParamLimits

0x7c70,	// (0x000344d3) bg_popup_sub_pane_cp25

0xdd4c,	// (0x0003a5af) popup_battery_window_g1_ParamLimits

0xdd4c,	// (0x0003a5af) popup_battery_window_g1

0xdd58,	// (0x0003a5bb) popup_battery_window_t1_ParamLimits

0xdd58,	// (0x0003a5bb) popup_battery_window_t1

0xdd6a,	// (0x0003a5cd) popup_battery_window_t2_ParamLimits

0xdd6a,	// (0x0003a5cd) popup_battery_window_t2

0x0001,

0xfd72,	// (0x0003c5d5) popup_battery_window_t_ParamLimits

0xfd72,	// (0x0003c5d5) popup_battery_window_t

0x9199,	// (0x000359fc) midp_canvas_pane_ParamLimits

0x9210,	// (0x00035a73) midp_keypad_pane_ParamLimits

0x9210,	// (0x00035a73) midp_keypad_pane

0x94a9,	// (0x00035d0c) main_midp_pane_ParamLimits

0xbae7,	// (0x0003834a) signal_pane_g2_cp_ParamLimits

0xdd87,	// (0x0003a5ea) aid_size_cell_midp_keypad_ParamLimits

0xdd87,	// (0x0003a5ea) aid_size_cell_midp_keypad

0xdda1,	// (0x0003a604) midp_keyp_game_grid_pane_ParamLimits

0xdda1,	// (0x0003a604) midp_keyp_game_grid_pane

0xddc1,	// (0x0003a624) midp_keyp_rocker_pane_ParamLimits

0xddc1,	// (0x0003a624) midp_keyp_rocker_pane

0xddfa,	// (0x0003a65d) midp_keyp_sk_left_pane_ParamLimits

0xddfa,	// (0x0003a65d) midp_keyp_sk_left_pane

0xde54,	// (0x0003a6b7) midp_keyp_sk_right_pane_ParamLimits

0xde54,	// (0x0003a6b7) midp_keyp_sk_right_pane

0x2f72,	// (0x0002f7d5) bg_button_pane_cp03

0xdeae,	// (0x0003a711) midp_keyp_sk_left_pane_g1

0x2f72,	// (0x0002f7d5) bg_button_pane_cp04

0xdeae,	// (0x0003a711) midp_keyp_sk_right_pane_g1

0xc026,	// (0x00038889) midp_keyp_rocker_pane_g1

0xdeb7,	// (0x0003a71a) keyp_game_cell_pane_ParamLimits

0xdeb7,	// (0x0003a71a) keyp_game_cell_pane

0x2f72,	// (0x0002f7d5) bg_button_pane_cp02

0xdeca,	// (0x0003a72d) keyp_game_cell_pane_g1

0x4744,	// (0x00030fa7) popup_fep_vkb2_window_ParamLimits

0x4744,	// (0x00030fa7) popup_fep_vkb2_window

0x6d0a,	// (0x0003356d) aid_size_cell_vkb2_ParamLimits

0x6d0a,	// (0x0003356d) aid_size_cell_vkb2

0x6d56,	// (0x000335b9) popup_fep_vkb2_window_g1_ParamLimits

0x6d56,	// (0x000335b9) popup_fep_vkb2_window_g1

0x6d9e,	// (0x00033601) vkb2_area_bottom_pane_ParamLimits

0x6d9e,	// (0x00033601) vkb2_area_bottom_pane

0x6dea,	// (0x0003364d) vkb2_area_keypad_pane_ParamLimits

0x6dea,	// (0x0003364d) vkb2_area_keypad_pane

0x6e2c,	// (0x0003368f) vkb2_area_top_pane_ParamLimits

0x6e2c,	// (0x0003368f) vkb2_area_top_pane

0x6eab,	// (0x0003370e) vkb2_top_entry_pane_ParamLimits

0x6eab,	// (0x0003370e) vkb2_top_entry_pane

0x6ed5,	// (0x00033738) vkb2_top_grid_left_pane_ParamLimits

0x6ed5,	// (0x00033738) vkb2_top_grid_left_pane

0x6ef4,	// (0x00033757) vkb2_top_grid_right_pane_ParamLimits

0x6ef4,	// (0x00033757) vkb2_top_grid_right_pane

0x6f13,	// (0x00033776) vkb2_cell_keypad_pane_ParamLimits

0x6f13,	// (0x00033776) vkb2_cell_keypad_pane

0x6fe4,	// (0x00033847) vkb2_area_bottom_grid_pane_ParamLimits

0x6fe4,	// (0x00033847) vkb2_area_bottom_grid_pane

0x700a,	// (0x0003386d) vkb2_area_bottom_pane_g1_ParamLimits

0x700a,	// (0x0003386d) vkb2_area_bottom_pane_g1

0x702e,	// (0x00033891) vkb2_area_bottom_pane_g2_ParamLimits

0x702e,	// (0x00033891) vkb2_area_bottom_pane_g2

0x705c,	// (0x000338bf) vkb2_area_bottom_pane_g3_ParamLimits

0x705c,	// (0x000338bf) vkb2_area_bottom_pane_g3

0x0002,

0xfd77,	// (0x0003c5da) vkb2_area_bottom_pane_g_ParamLimits

0xfd77,	// (0x0003c5da) vkb2_area_bottom_pane_g

0x70bd,	// (0x00033920) vkb2_top_cell_left_pane_ParamLimits

0x70bd,	// (0x00033920) vkb2_top_cell_left_pane

0xdedb,	// (0x0003a73e) vkb2_top_entry_pane_g1_ParamLimits

0xdedb,	// (0x0003a73e) vkb2_top_entry_pane_g1

0xdee9,	// (0x0003a74c) vkb2_top_entry_pane_t1_ParamLimits

0xdee9,	// (0x0003a74c) vkb2_top_entry_pane_t1

0xdf1b,	// (0x0003a77e) vkb2_top_entry_pane_t2_ParamLimits

0xdf1b,	// (0x0003a77e) vkb2_top_entry_pane_t2

0xdf4d,	// (0x0003a7b0) vkb2_top_entry_pane_t3_ParamLimits

0xdf4d,	// (0x0003a7b0) vkb2_top_entry_pane_t3

0x0002,

0xfd7e,	// (0x0003c5e1) vkb2_top_entry_pane_t_ParamLimits

0xfd7e,	// (0x0003c5e1) vkb2_top_entry_pane_t

0x710a,	// (0x0003396d) vkb2_top_grid_right_pane_g1_ParamLimits

0x710a,	// (0x0003396d) vkb2_top_grid_right_pane_g1

0x7120,	// (0x00033983) vkb2_top_grid_right_pane_g2_ParamLimits

0x7120,	// (0x00033983) vkb2_top_grid_right_pane_g2

0x7138,	// (0x0003399b) vkb2_top_grid_right_pane_g3_ParamLimits

0x7138,	// (0x0003399b) vkb2_top_grid_right_pane_g3

0x7150,	// (0x000339b3) vkb2_top_grid_right_pane_g4_ParamLimits

0x7150,	// (0x000339b3) vkb2_top_grid_right_pane_g4

0x0003,

0xfd85,	// (0x0003c5e8) vkb2_top_grid_right_pane_g_ParamLimits

0xfd85,	// (0x0003c5e8) vkb2_top_grid_right_pane_g

0x7166,	// (0x000339c9) vkb2_top_cell_left_pane_g1

0x717d,	// (0x000339e0) vkb2_cell_keypad_pane_g1_ParamLimits

0x717d,	// (0x000339e0) vkb2_cell_keypad_pane_g1

0xdf71,	// (0x0003a7d4) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf71,	// (0x0003a7d4) vkb2_cell_keypad_pane_t1

0x718b,	// (0x000339ee) vkb2_cell_bottom_grid_pane_ParamLimits

0x718b,	// (0x000339ee) vkb2_cell_bottom_grid_pane

0x71c4,	// (0x00033a27) vkb2_cell_bottom_grid_pane_g1

0xdb1c,	// (0x0003a37f) aid_call2_pane_cp02

0xdb24,	// (0x0003a387) aid_call_pane_cp02

0xdb2c,	// (0x0003a38f) clock_digital_number_pane_cp10

0xdb34,	// (0x0003a397) clock_digital_number_pane_cp11

0xdb3c,	// (0x0003a39f) clock_digital_number_pane_cp12

0xdb44,	// (0x0003a3a7) clock_digital_number_pane_cp13

0xdb4c,	// (0x0003a3af) clock_digital_separator_pane_cp10

0x8b4d,	// (0x000353b0) popup_clock_digital_analogue_window_cp2_g1

0x8b4d,	// (0x000353b0) popup_clock_digital_analogue_window_cp2_g2

0xdb54,	// (0x0003a3b7) popup_clock_digital_analogue_window_cp2_g3

0x8b4d,	// (0x000353b0) popup_clock_digital_analogue_window_cp2_g4

0xdb54,	// (0x0003a3b7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3a,	// (0x0003c59d) popup_clock_digital_analogue_window_cp2_g

0xdb5c,	// (0x0003a3bf) popup_clock_digital_analogue_window_cp2_t1

0xdb6a,	// (0x0003a3cd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd45,	// (0x0003c5a8) popup_clock_digital_analogue_window_cp2_t

0xc026,	// (0x00038889) clock_digital_number_pane_cp10_g1

0xc026,	// (0x00038889) clock_digital_number_pane_cp10_g2

0x0001,

0xfb21,	// (0x0003c384) clock_digital_number_pane_cp10_g

0xc026,	// (0x00038889) clock_digital_separator_pane_cp10_g1

0xc026,	// (0x00038889) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb21,	// (0x0003c384) clock_digital_separator_pane_cp10_g

0xd998,	// (0x0003a1fb) uniindi_top_pane_g3

0xd9a9,	// (0x0003a20c) uniindi_top_pane_g4

0x6f9e,	// (0x00033801) vkb2_row_keypad_pane_ParamLimits

0x6f9e,	// (0x00033801) vkb2_row_keypad_pane

0x71e4,	// (0x00033a47) vkb2_cell_t_keypad_pane_ParamLimits

0x71e4,	// (0x00033a47) vkb2_cell_t_keypad_pane

0x71f4,	// (0x00033a57) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x71f4,	// (0x00033a57) vkb2_cell_t_keypad_pane_cp08

0x7207,	// (0x00033a6a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7207,	// (0x00033a6a) vkb2_cell_t_keypad_pane_cp09

0x721b,	// (0x00033a7e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x721b,	// (0x00033a7e) vkb2_cell_t_keypad_pane_cp01

0x722c,	// (0x00033a8f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x722c,	// (0x00033a8f) vkb2_cell_t_keypad_pane_cp02

0x723d,	// (0x00033aa0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x723d,	// (0x00033aa0) vkb2_cell_t_keypad_pane_cp03

0x724e,	// (0x00033ab1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x724e,	// (0x00033ab1) vkb2_cell_t_keypad_pane_cp04

0x725f,	// (0x00033ac2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x725f,	// (0x00033ac2) vkb2_cell_t_keypad_pane_cp05

0x7270,	// (0x00033ad3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7270,	// (0x00033ad3) vkb2_cell_t_keypad_pane_cp06

0x7281,	// (0x00033ae4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7281,	// (0x00033ae4) vkb2_cell_t_keypad_pane_cp07

0x7292,	// (0x00033af5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7292,	// (0x00033af5) vkb2_cell_t_keypad_pane_cp10

0x68f6,	// (0x00033159) vkb2_cell_t_keypad_pane_g1

0xdf88,	// (0x0003a7eb) vkb2_cell_t_keypad_pane_t1

0x463b,	// (0x00030e9e) popup_grid_graphic2_window

0xdf9a,	// (0x0003a7fd) aid_size_cell_graphic2_ParamLimits

0xdf9a,	// (0x0003a7fd) aid_size_cell_graphic2

0xdfd2,	// (0x0003a835) bg_popup_window_pane_cp21_ParamLimits

0xdfd2,	// (0x0003a835) bg_popup_window_pane_cp21

0xdfe0,	// (0x0003a843) graphic2_pages_pane_ParamLimits

0xdfe0,	// (0x0003a843) graphic2_pages_pane

0xe026,	// (0x0003a889) grid_graphic2_control_pane_ParamLimits

0xe026,	// (0x0003a889) grid_graphic2_control_pane

0xe064,	// (0x0003a8c7) grid_graphic2_pane_ParamLimits

0xe064,	// (0x0003a8c7) grid_graphic2_pane

0xe0d8,	// (0x0003a93b) cell_graphic2_pane

0x463b,	// (0x00030e9e) main_comp_mode_pane

0xd1e3,	// (0x00039a46) list_ai3_gene_pane_ParamLimits

0xd5b9,	// (0x00039e1c) bg_popup_window_pane_cp19_ParamLimits

0xd5c5,	// (0x00039e28) bg_touch_area_indi_pane_ParamLimits

0xd5c5,	// (0x00039e28) bg_touch_area_indi_pane

0xd5db,	// (0x00039e3e) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5db,	// (0x00039e3e) bg_touch_area_indi_pane_cp01

0xd5f1,	// (0x00039e54) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5f1,	// (0x00039e54) bg_touch_area_indi_pane_cp02

0xd607,	// (0x00039e6a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd607,	// (0x00039e6a) bg_touch_area_indi_pane_cp03

0xd621,	// (0x00039e84) popup_slider_window_g1_ParamLimits

0xd65e,	// (0x00039ec1) popup_slider_window_g2_ParamLimits

0xd67a,	// (0x00039edd) popup_slider_window_g3_ParamLimits

0xfccf,	// (0x0003c532) popup_slider_window_g_ParamLimits

0xd6e0,	// (0x00039f43) popup_slider_window_t1_ParamLimits

0xd754,	// (0x00039fb7) small_volume_slider_vertical_pane_ParamLimits

0xe0d8,	// (0x0003a93b) cell_graphic2_pane_ParamLimits

0xe127,	// (0x0003a98a) bg_button_pane_cp10_ParamLimits

0xe127,	// (0x0003a98a) bg_button_pane_cp10

0xe13a,	// (0x0003a99d) bg_button_pane_cp11_ParamLimits

0xe13a,	// (0x0003a99d) bg_button_pane_cp11

0xe14d,	// (0x0003a9b0) graphic2_pages_pane_g1_ParamLimits

0xe14d,	// (0x0003a9b0) graphic2_pages_pane_g1

0xe168,	// (0x0003a9cb) graphic2_pages_pane_g2_ParamLimits

0xe168,	// (0x0003a9cb) graphic2_pages_pane_g2

0x0001,

0xfd93,	// (0x0003c5f6) graphic2_pages_pane_g_ParamLimits

0xfd93,	// (0x0003c5f6) graphic2_pages_pane_g

0xe180,	// (0x0003a9e3) graphic2_pages_pane_t1_ParamLimits

0xe180,	// (0x0003a9e3) graphic2_pages_pane_t1

0xe198,	// (0x0003a9fb) cell_graphic2_control_pane_ParamLimits

0xe198,	// (0x0003a9fb) cell_graphic2_control_pane

0xe1b6,	// (0x0003aa19) cell_graphic2_pane_g1_ParamLimits

0xe1b6,	// (0x0003aa19) cell_graphic2_pane_g1

0xe1c3,	// (0x0003aa26) cell_graphic2_pane_g2_ParamLimits

0xe1c3,	// (0x0003aa26) cell_graphic2_pane_g2

0xe1d0,	// (0x0003aa33) cell_graphic2_pane_g3_ParamLimits

0xe1d0,	// (0x0003aa33) cell_graphic2_pane_g3

0xe1dd,	// (0x0003aa40) cell_graphic2_pane_g4_ParamLimits

0xe1dd,	// (0x0003aa40) cell_graphic2_pane_g4

0xe1ea,	// (0x0003aa4d) cell_graphic2_pane_g5_ParamLimits

0xe1ea,	// (0x0003aa4d) cell_graphic2_pane_g5

0x0004,

0xfd98,	// (0x0003c5fb) cell_graphic2_pane_g_ParamLimits

0xfd98,	// (0x0003c5fb) cell_graphic2_pane_g

0xe203,	// (0x0003aa66) cell_graphic2_pane_t1_ParamLimits

0xe203,	// (0x0003aa66) cell_graphic2_pane_t1

0x9a47,	// (0x000362aa) grid_highlight_pane_cp11_ParamLimits

0x9a47,	// (0x000362aa) grid_highlight_pane_cp11

0x7c70,	// (0x000344d3) bg_button_pane_cp05

0xe239,	// (0x0003aa9c) cell_graphic2_control_pane_g1

0xc026,	// (0x00038889) bg_touch_area_indi_pane_g1

0xe261,	// (0x0003aac4) aid_cmod_rocker_key_size

0xe26b,	// (0x0003aace) aid_cmode_itu_key_size

0xe275,	// (0x0003aad8) main_cmode_video_pane

0xe27f,	// (0x0003aae2) main_comp_mode_itu_pane

0xe28b,	// (0x0003aaee) main_comp_mode_rocker_pane

0xe297,	// (0x0003aafa) cell_cmode_rocker_pane_ParamLimits

0xe297,	// (0x0003aafa) cell_cmode_rocker_pane

0xe2a9,	// (0x0003ab0c) cell_cmode_itu_pane_ParamLimits

0xe2a9,	// (0x0003ab0c) cell_cmode_itu_pane

0x8274,	// (0x00034ad7) bg_button_pane_cp06_ParamLimits

0x8274,	// (0x00034ad7) bg_button_pane_cp06

0xc2a4,	// (0x00038b07) cell_cmode_rocker_pane_g1_ParamLimits

0xc2a4,	// (0x00038b07) cell_cmode_rocker_pane_g1

0xd7f8,	// (0x0003a05b) cell_cmode_rocker_pane_g2_ParamLimits

0xd7f8,	// (0x0003a05b) cell_cmode_rocker_pane_g2

0x0001,

0xfda8,	// (0x0003c60b) cell_cmode_rocker_pane_g_ParamLimits

0xfda8,	// (0x0003c60b) cell_cmode_rocker_pane_g

0x2f72,	// (0x0002f7d5) bg_button_pane_cp07

0xe2be,	// (0x0003ab21) cell_cmode_itu_pane_g1

0xe2c7,	// (0x0003ab2a) cell_cmode_itu_pane_t1

0xe2d5,	// (0x0003ab38) cell_cmode_itu_pane_t2

0x0001,

0xfdad,	// (0x0003c610) cell_cmode_itu_pane_t

0xda1b,	// (0x0003a27e) aid_touch_ctrl_left

0xda23,	// (0x0003a286) aid_touch_ctrl_right

0x2f72,	// (0x0002f7d5) compa_mode_pane

0xe2e3,	// (0x0003ab46) aid_cmod_rocker_key_size_cp

0xe2ed,	// (0x0003ab50) aid_cmode_itu_key_size_cp

0xe2f7,	// (0x0003ab5a) compa_mode_pane_g1

0xe2ff,	// (0x0003ab62) compa_mode_pane_g2

0xe307,	// (0x0003ab6a) compa_mode_pane_g3

0x0002,

0xfdb2,	// (0x0003c615) compa_mode_pane_g

0xe30f,	// (0x0003ab72) main_comp_mode_itu_pane_cp

0xe317,	// (0x0003ab7a) main_comp_mode_rocker_pane_cp

0xe31f,	// (0x0003ab82) cell_cmode_itu_pane_cp_ParamLimits

0xe31f,	// (0x0003ab82) cell_cmode_itu_pane_cp

0xe334,	// (0x0003ab97) cell_cmode_rocker_pane_cp_ParamLimits

0xe334,	// (0x0003ab97) cell_cmode_rocker_pane_cp

0x8274,	// (0x00034ad7) bg_button_pane_cp06_cp_ParamLimits

0x8274,	// (0x00034ad7) bg_button_pane_cp06_cp

0xc2a4,	// (0x00038b07) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2a4,	// (0x00038b07) cell_cmode_rocker_pane_g1_cp

0xc026,	// (0x00038889) cell_cmode_rocker_pane_g2_cp

0x2f72,	// (0x0002f7d5) bg_button_pane_cp07_cp

0xaf2d,	// (0x00037790) cell_cmode_itu_pane_g1_cp

0xe346,	// (0x0003aba9) cell_cmode_itu_pane_t1_cp

0xe346,	// (0x0003aba9) cell_cmode_itu_pane_t2_cp

0xaf1a,	// (0x0003777d) settings_code_pane_cp2

0x79e7,	// (0x0003424a) bg_popup_window_pane_cp3_ParamLimits

0x7e70,	// (0x000346d3) heading_pane_cp3_ParamLimits

0x7e7f,	// (0x000346e2) listscroll_popup_graphic_pane_ParamLimits

0x669f,	// (0x00032f02) fep_hwr_aid_pane_ParamLimits

0x6c65,	// (0x000334c8) aid_touch_sctrl_top_ParamLimits

0x6c80,	// (0x000334e3) sctrl_sk_top_pane_g1_ParamLimits

0x68f6,	// (0x00033159) sctrl_sk_top_pane_g2_ParamLimits

0xfce8,	// (0x0003c54b) sctrl_sk_top_pane_g_ParamLimits

0x6c8d,	// (0x000334f0) sctrl_sk_top_pane_t1_ParamLimits

0x6c65,	// (0x000334c8) aid_touch_sctrl_bottom_ParamLimits

0x6c8d,	// (0x000334f0) sctrl_sk_bottom_pane_t1_ParamLimits

0xd964,	// (0x0003a1c7) aid_area_touch_clock

0x6e72,	// (0x000336d5) aid_vkb2_area_top_pane_cell_ParamLimits

0x6e72,	// (0x000336d5) aid_vkb2_area_top_pane_cell

0x6fc0,	// (0x00033823) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6fc0,	// (0x00033823) aid_vkb2_area_bottom_pane_cell

0xded3,	// (0x0003a736) popup_char_count_window

0xe354,	// (0x0003abb7) popup_char_count_window_g1

0xe35d,	// (0x0003abc0) popup_char_count_window_g2

0xe366,	// (0x0003abc9) popup_char_count_window_g3

0x0002,

0xfdb9,	// (0x0003c61c) popup_char_count_window_g

0xe36f,	// (0x0003abd2) popup_char_count_window_t1

0x6d34,	// (0x00033597) popup_fep_char_preview_window_ParamLimits

0x6d34,	// (0x00033597) popup_fep_char_preview_window

0x6e90,	// (0x000336f3) vkb2_top_candi_pane_ParamLimits

0x6e90,	// (0x000336f3) vkb2_top_candi_pane

0xe37d,	// (0x0003abe0) cell_vkb2_top_candi_pane_ParamLimits

0xe37d,	// (0x0003abe0) cell_vkb2_top_candi_pane

0x72a7,	// (0x00033b0a) bg_popup_fep_char_preview_window_ParamLimits

0x72a7,	// (0x00033b0a) bg_popup_fep_char_preview_window

0x72b5,	// (0x00033b18) popup_fep_char_preview_window_t1_ParamLimits

0x72b5,	// (0x00033b18) popup_fep_char_preview_window_t1

0xe3c7,	// (0x0003ac2a) bg_popup_fep_char_preview_window_g1

0xe3cf,	// (0x0003ac32) bg_popup_fep_char_preview_window_g2

0xe3d7,	// (0x0003ac3a) bg_popup_fep_char_preview_window_g3

0xe3df,	// (0x0003ac42) bg_popup_fep_char_preview_window_g4

0xe3e7,	// (0x0003ac4a) bg_popup_fep_char_preview_window_g5

0xe3ef,	// (0x0003ac52) bg_popup_fep_char_preview_window_g6

0xe3f7,	// (0x0003ac5a) bg_popup_fep_char_preview_window_g7

0xe3ff,	// (0x0003ac62) bg_popup_fep_char_preview_window_g8

0xe407,	// (0x0003ac6a) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc0,	// (0x0003c623) bg_popup_fep_char_preview_window_g

0x68f6,	// (0x00033159) cell_vkb2_top_candi_pane_g1_ParamLimits

0x68f6,	// (0x00033159) cell_vkb2_top_candi_pane_g1

0x6904,	// (0x00033167) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6904,	// (0x00033167) cell_vkb2_top_candi_pane_g2

0xd63d,	// (0x00039ea0) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd63d,	// (0x00039ea0) cell_vkb2_top_candi_pane_g3

0x72f7,	// (0x00033b5a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x72f7,	// (0x00033b5a) cell_vkb2_top_candi_pane_g4

0xc68e,	// (0x00038ef1) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc68e,	// (0x00038ef1) cell_vkb2_top_candi_pane_g5

0x7318,	// (0x00033b7b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7318,	// (0x00033b7b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd5,	// (0x0003c638) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd5,	// (0x0003c638) cell_vkb2_top_candi_pane_g

0x7326,	// (0x00033b89) cell_vkb2_top_candi_pane_t1

0x605b,	// (0x000328be) aid_size_touch_slider_mark_ParamLimits

0x605b,	// (0x000328be) aid_size_touch_slider_mark

0xe016,	// (0x0003a879) grid_graphic2_catg_pane_ParamLimits

0xe016,	// (0x0003a879) grid_graphic2_catg_pane

0xe0b4,	// (0x0003a917) popup_grid_graphic2_window_t1_ParamLimits

0xe0b4,	// (0x0003a917) popup_grid_graphic2_window_t1

0xe0c6,	// (0x0003a929) popup_grid_graphic2_window_t2_ParamLimits

0xe0c6,	// (0x0003a929) popup_grid_graphic2_window_t2

0x0001,

0xfd8e,	// (0x0003c5f1) popup_grid_graphic2_window_t_ParamLimits

0xfd8e,	// (0x0003c5f1) popup_grid_graphic2_window_t

0x7c70,	// (0x000344d3) bg_button_pane_cp05_ParamLimits

0xe239,	// (0x0003aa9c) cell_graphic2_control_pane_g1_ParamLimits

0xe40f,	// (0x0003ac72) cell_graphic2_catg_pane_ParamLimits

0xe40f,	// (0x0003ac72) cell_graphic2_catg_pane

0x2f72,	// (0x0002f7d5) bg_button_pane_cp12

0xe421,	// (0x0003ac84) cell_graphic2_catg_pane_g1

0xd930,	// (0x0003a193) cell_tb_ext_pane_t1_ParamLimits

0x70dd,	// (0x00033940) vkb2_top_cell_right_narrow_pane_ParamLimits

0x70dd,	// (0x00033940) vkb2_top_cell_right_narrow_pane

0x70f5,	// (0x00033958) vkb2_top_cell_right_wide_pane_ParamLimits

0x70f5,	// (0x00033958) vkb2_top_cell_right_wide_pane

0x6691,	// (0x00032ef4) bg_vkb2_func_pane_ParamLimits

0x6691,	// (0x00032ef4) bg_vkb2_func_pane

0x7166,	// (0x000339c9) vkb2_top_cell_left_pane_g1_ParamLimits

0x6691,	// (0x00032ef4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6691,	// (0x00032ef4) bg_vkb2_fuc_pane_cp03

0x71c4,	// (0x00033a27) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99db,	// (0x0003623e) bg_vkb2_func_pane_g1

0x99e3,	// (0x00036246) bg_vkb2_func_pane_g2

0x99f3,	// (0x00036256) bg_vkb2_func_pane_g3

0x99eb,	// (0x0003624e) bg_vkb2_func_pane_g4

0x99fb,	// (0x0003625e) bg_vkb2_func_pane_g5

0x9a03,	// (0x00036266) bg_vkb2_func_pane_g6

0x9a0b,	// (0x0003626e) bg_vkb2_func_pane_g7

0x9a13,	// (0x00036276) bg_vkb2_func_pane_g8

0x99d3,	// (0x00036236) bg_vkb2_func_pane_g9

0x0008,

0xfde2,	// (0x0003c645) bg_vkb2_func_pane_g

0x6691,	// (0x00032ef4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6691,	// (0x00032ef4) bg_vkb2_fuc_pane_cp01

0x7166,	// (0x000339c9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7166,	// (0x000339c9) vkb2_top_cell_right_wide_pane_g1

0x6691,	// (0x00032ef4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6691,	// (0x00032ef4) bg_vkb2_fuc_pane_cp02

0x7345,	// (0x00033ba8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7345,	// (0x00033ba8) vkb2_top_cell_right_narrow_pane_g1

0xd533,	// (0x00039d96) aid_touch_area_decrease_ParamLimits

0xd533,	// (0x00039d96) aid_touch_area_decrease

0xd557,	// (0x00039dba) aid_touch_area_increase_ParamLimits

0xd557,	// (0x00039dba) aid_touch_area_increase

0xd56f,	// (0x00039dd2) aid_touch_area_mute_ParamLimits

0xd56f,	// (0x00039dd2) aid_touch_area_mute

0xd58b,	// (0x00039dee) aid_touch_area_slider_ParamLimits

0xd58b,	// (0x00039dee) aid_touch_area_slider

0xd696,	// (0x00039ef9) popup_slider_window_g4_ParamLimits

0xd696,	// (0x00039ef9) popup_slider_window_g4

0xd6ae,	// (0x00039f11) popup_slider_window_g5_ParamLimits

0xd6ae,	// (0x00039f11) popup_slider_window_g5

0xd6d0,	// (0x00039f33) popup_slider_window_g6_ParamLimits

0xd6d0,	// (0x00039f33) popup_slider_window_g6

0xd70e,	// (0x00039f71) popup_slider_window_t2_ParamLimits

0xd70e,	// (0x00039f71) popup_slider_window_t2

0x0001,

0xfcdc,	// (0x0003c53f) popup_slider_window_t_ParamLimits

0xfcdc,	// (0x0003c53f) popup_slider_window_t

0xd726,	// (0x00039f89) slider_pane_ParamLimits

0xd726,	// (0x00039f89) slider_pane

0xe42a,	// (0x0003ac8d) slider_pane_g1_ParamLimits

0xe42a,	// (0x0003ac8d) slider_pane_g1

0xe43e,	// (0x0003aca1) slider_pane_g2_ParamLimits

0xe43e,	// (0x0003aca1) slider_pane_g2

0xe454,	// (0x0003acb7) slider_pane_g3_ParamLimits

0xe454,	// (0x0003acb7) slider_pane_g3

0x0003,

0xfdf5,	// (0x0003c658) slider_pane_g_ParamLimits

0xfdf5,	// (0x0003c658) slider_pane_g

0x5b29,	// (0x0003238c) popup_tb_float_extension_window_ParamLimits

0x5b29,	// (0x0003238c) popup_tb_float_extension_window

0xe480,	// (0x0003ace3) aid_size_cell_tb_float_ext

0x2f72,	// (0x0002f7d5) bg_popup_sub_window_cp28

0xe48c,	// (0x0003acef) grid_tb_float_ext_pane

0xe496,	// (0x0003acf9) cell_tb_float_ext_pane_ParamLimits

0xe496,	// (0x0003acf9) cell_tb_float_ext_pane

0xe4b0,	// (0x0003ad13) cell_tb_float_ext_pane_g1

0xe4b9,	// (0x0003ad1c) grid_highlight_pane_cp12

0x67e0,	// (0x00033043) cell_last_hwr_side_pane_ParamLimits

0x67e0,	// (0x00033043) cell_last_hwr_side_pane

0xc026,	// (0x00038889) cell_last_hwr_side_pane_g1

0xe4c2,	// (0x0003ad25) cell_last_hwr_side_pane_g2

0x0001,

0xfdfe,	// (0x0003c661) cell_last_hwr_side_pane_g

0x708c,	// (0x000338ef) vkb2_area_bottom_space_btn_pane_ParamLimits

0x708c,	// (0x000338ef) vkb2_area_bottom_space_btn_pane

0x68f6,	// (0x00033159) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf88,	// (0x0003a7eb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7326,	// (0x00033b89) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7365,	// (0x00033bc8) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7365,	// (0x00033bc8) vkb2_area_bottom_space_btn_pane_g1

0x739f,	// (0x00033c02) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x739f,	// (0x00033c02) vkb2_area_bottom_space_btn_pane_g2

0x73d5,	// (0x00033c38) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x73d5,	// (0x00033c38) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe03,	// (0x0003c666) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe03,	// (0x0003c666) vkb2_area_bottom_space_btn_pane_g

0x6754,	// (0x00032fb7) cel_fep_hwr_func_pane_ParamLimits

0x6754,	// (0x00032fb7) cel_fep_hwr_func_pane

0x6790,	// (0x00032ff3) cell_hwr_side_button_pane_ParamLimits

0x6790,	// (0x00032ff3) cell_hwr_side_button_pane

0xd964,	// (0x0003a1c7) aid_area_touch_clock_ParamLimits

0x7c70,	// (0x000344d3) bg_uniindi_top_pane_ParamLimits

0xd976,	// (0x0003a1d9) uniindi_top_pane_g1_ParamLimits

0xd98c,	// (0x0003a1ef) uniindi_top_pane_g2_ParamLimits

0xd998,	// (0x0003a1fb) uniindi_top_pane_g3_ParamLimits

0xd9a9,	// (0x0003a20c) uniindi_top_pane_g4_ParamLimits

0xfd14,	// (0x0003c577) uniindi_top_pane_g_ParamLimits

0xd9b6,	// (0x0003a219) uniindi_top_pane_t1_ParamLimits

0x7c70,	// (0x000344d3) bg_vkb2_func_pane_cp01_ParamLimits

0x7c70,	// (0x000344d3) bg_vkb2_func_pane_cp01

0xe4cb,	// (0x0003ad2e) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4cb,	// (0x0003ad2e) cel_fep_hwr_func_pane_g1

0x7c70,	// (0x000344d3) bg_vkb2_func_pane_cp02_ParamLimits

0x7c70,	// (0x000344d3) bg_vkb2_func_pane_cp02

0xe4cb,	// (0x0003ad2e) cell_hwr_side_button_pane_g1_ParamLimits

0xe4cb,	// (0x0003ad2e) cell_hwr_side_button_pane_g1

0x9854,	// (0x000360b7) status_pane_g4_ParamLimits

0x9854,	// (0x000360b7) status_pane_g4

0x986e,	// (0x000360d1) status_pane_t1

0xbd6b,	// (0x000385ce) form2_midp_gauge_slider_cont_pane

0xbd73,	// (0x000385d6) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd85,	// (0x000385e8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd97,	// (0x000385fa) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad4,	// (0x0003c337) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda9,	// (0x0003860c) form2_midp_slider_pane_ParamLimits

0x6cfc,	// (0x0003355f) aid_size_cell_func_vkb2_ParamLimits

0x6cfc,	// (0x0003355f) aid_size_cell_func_vkb2

0xe46c,	// (0x0003accf) slider_pane_g4_ParamLimits

0xe46c,	// (0x0003accf) slider_pane_g4

0x741f,	// (0x00033c82) form2_midp_gauge_slider_pane_t2_cp01

0x742d,	// (0x00033c90) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x742d,	// (0x00033c90) form2_midp_gauge_slider_pane_t3_cp01

0x744a,	// (0x00033cad) form2_midp_slider_pane_cp01

0x2f72,	// (0x0002f7d5) navi_smil_pane

0xe504,	// (0x0003ad67) navi_smil_pane_g1

0xe50c,	// (0x0003ad6f) navi_smil_pane_t1

0xe4d9,	// (0x0003ad3c) form2_midp_slider_pane_g1

0xe4e2,	// (0x0003ad45) form2_midp_slider_pane_g2

0xe4ea,	// (0x0003ad4d) form2_midp_slider_pane_g3

0xe4d9,	// (0x0003ad3c) form2_midp_slider_pane_g4

0xe4f2,	// (0x0003ad55) form2_midp_slider_pane_g5

0x0004,

0xfe0c,	// (0x0003c66f) form2_midp_slider_pane_g

0x740f,	// (0x00033c72) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x740f,	// (0x00033c72) vkb2_area_bottom_space_btn_pane_g4

0x9683,	// (0x00035ee6) lc0_navi_pane_ParamLimits

0x9683,	// (0x00035ee6) lc0_navi_pane

0x96f9,	// (0x00035f5c) lc0_stat_indi_pane_ParamLimits

0x96f9,	// (0x00035f5c) lc0_stat_indi_pane

0x9710,	// (0x00035f73) ls0_title_pane_ParamLimits

0x9710,	// (0x00035f73) ls0_title_pane

0x8274,	// (0x00034ad7) bg_popup_sub_pane_cp14_ParamLimits

0xd94b,	// (0x0003a1ae) list_uniindi_pane_ParamLimits

0xd957,	// (0x0003a1ba) uniindi_top_pane_ParamLimits

0xd9f3,	// (0x0003a256) list_single_uniindi_pane_g1_ParamLimits

0xda06,	// (0x0003a269) list_single_uniindi_pane_t1_ParamLimits

0x7453,	// (0x00033cb6) lc0_stat_clock_pane_ParamLimits

0x7453,	// (0x00033cb6) lc0_stat_clock_pane

0xe51a,	// (0x0003ad7d) lc0_stat_indi_pane_g1_ParamLimits

0xe51a,	// (0x0003ad7d) lc0_stat_indi_pane_g1

0xe527,	// (0x0003ad8a) lc0_stat_indi_pane_g2_ParamLimits

0xe527,	// (0x0003ad8a) lc0_stat_indi_pane_g2

0x0001,

0xfe17,	// (0x0003c67a) lc0_stat_indi_pane_g_ParamLimits

0xfe17,	// (0x0003c67a) lc0_stat_indi_pane_g

0x7460,	// (0x00033cc3) lc0_uni_indicator_pane_ParamLimits

0x7460,	// (0x00033cc3) lc0_uni_indicator_pane

0xe534,	// (0x0003ad97) ls0_title_pane_g1_ParamLimits

0xe534,	// (0x0003ad97) ls0_title_pane_g1

0xe548,	// (0x0003adab) ls0_title_pane_t1_ParamLimits

0xe548,	// (0x0003adab) ls0_title_pane_t1

0x746d,	// (0x00033cd0) lc0_uni_indicator_pane_g1_ParamLimits

0x746d,	// (0x00033cd0) lc0_uni_indicator_pane_g1

0xe57e,	// (0x0003ade1) lc0_stat_clock_pane_t1

0x463b,	// (0x00030e9e) main_ai5_pane

0xe58c,	// (0x0003adef) ai5_sk_pane_ParamLimits

0xe58c,	// (0x0003adef) ai5_sk_pane

0xe599,	// (0x0003adfc) cell_ai5_widget_pane_ParamLimits

0xe599,	// (0x0003adfc) cell_ai5_widget_pane

0xe662,	// (0x0003aec5) aid_size_cell_widget_grid

0xe678,	// (0x0003aedb) bg_ai5_widget_pane_ParamLimits

0xe678,	// (0x0003aedb) bg_ai5_widget_pane

0xe6f4,	// (0x0003af57) cell_ai5_widget_pane_g2

0xe708,	// (0x0003af6b) cell_ai5_widget_pane_g3

0xe722,	// (0x0003af85) cell_ai5_widget_pane_g4

0xe732,	// (0x0003af95) cell_ai5_widget_pane_g5

0xe742,	// (0x0003afa5) cell_ai5_widget_pane_g6

0xe74e,	// (0x0003afb1) cell_ai5_widget_pane_g7

0xe7ba,	// (0x0003b01d) cell_ai5_widget_pane_t1_ParamLimits

0xe7ba,	// (0x0003b01d) cell_ai5_widget_pane_t1

0xe7d7,	// (0x0003b03a) cell_ai5_widget_pane_t2_ParamLimits

0xe7d7,	// (0x0003b03a) cell_ai5_widget_pane_t2

0xe7ef,	// (0x0003b052) cell_ai5_widget_pane_t3_ParamLimits

0xe7ef,	// (0x0003b052) cell_ai5_widget_pane_t3

0xe807,	// (0x0003b06a) cell_ai5_widget_pane_t4_ParamLimits

0xe807,	// (0x0003b06a) cell_ai5_widget_pane_t4

0xe82d,	// (0x0003b090) cell_ai5_widget_pane_t5_ParamLimits

0xe82d,	// (0x0003b090) cell_ai5_widget_pane_t5

0xe84c,	// (0x0003b0af) cell_ai5_widget_pane_t6_ParamLimits

0xe84c,	// (0x0003b0af) cell_ai5_widget_pane_t6

0xe85e,	// (0x0003b0c1) cell_ai5_widget_pane_t7_ParamLimits

0xe85e,	// (0x0003b0c1) cell_ai5_widget_pane_t7

0xe87d,	// (0x0003b0e0) cell_ai5_widget_pane_t8_ParamLimits

0xe87d,	// (0x0003b0e0) cell_ai5_widget_pane_t8

0x000b,

0xfe37,	// (0x0003c69a) cell_ai5_widget_pane_t_ParamLimits

0xfe37,	// (0x0003c69a) cell_ai5_widget_pane_t

0xe901,	// (0x0003b164) grid_ai5_widget_pane

0x8274,	// (0x00034ad7) highlight_cell_ai5_widget_pane_ParamLimits

0x8274,	// (0x00034ad7) highlight_cell_ai5_widget_pane

0xe918,	// (0x0003b17b) ai5_sk_left_pane

0xe922,	// (0x0003b185) ai5_sk_middle_pane

0xe92c,	// (0x0003b18f) ai5_sk_right_pane

0xe936,	// (0x0003b199) bg_ai5_widget_pane_g1_ParamLimits

0xe936,	// (0x0003b199) bg_ai5_widget_pane_g1

0xe942,	// (0x0003b1a5) bg_ai5_widget_pane_g2_ParamLimits

0xe942,	// (0x0003b1a5) bg_ai5_widget_pane_g2

0xe94e,	// (0x0003b1b1) bg_ai5_widget_pane_g3_ParamLimits

0xe94e,	// (0x0003b1b1) bg_ai5_widget_pane_g3

0xe95a,	// (0x0003b1bd) bg_ai5_widget_pane_g4_ParamLimits

0xe95a,	// (0x0003b1bd) bg_ai5_widget_pane_g4

0xe966,	// (0x0003b1c9) bg_ai5_widget_pane_g5_ParamLimits

0xe966,	// (0x0003b1c9) bg_ai5_widget_pane_g5

0xe972,	// (0x0003b1d5) bg_ai5_widget_pane_g6_ParamLimits

0xe972,	// (0x0003b1d5) bg_ai5_widget_pane_g6

0xe97e,	// (0x0003b1e1) bg_ai5_widget_pane_g7_ParamLimits

0xe97e,	// (0x0003b1e1) bg_ai5_widget_pane_g7

0xe98a,	// (0x0003b1ed) bg_ai5_widget_pane_g8_ParamLimits

0xe98a,	// (0x0003b1ed) bg_ai5_widget_pane_g8

0xe996,	// (0x0003b1f9) bg_ai5_widget_pane_g9_ParamLimits

0xe996,	// (0x0003b1f9) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x0003c6b3) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x0003c6b3) bg_ai5_widget_pane_g

0xe9c8,	// (0x0003b22b) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c8,	// (0x0003b22b) cell_shortcut_ai5_widget_pane

0x9185,	// (0x000359e8) bg_cell_shortcut_ai5_widget_pane

0xe9d9,	// (0x0003b23c) cell_grid_ai5_widget_pane_g1

0x9185,	// (0x000359e8) highlight_cell_shortcut_ai5_widget_pane

0x99db,	// (0x0003623e) ai5_sk_left_pane_g1

0xe9e2,	// (0x0003b245) ai5_sk_left_pane_g2

0xe9ea,	// (0x0003b24d) ai5_sk_left_pane_g3

0xe9f2,	// (0x0003b255) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x0003c6c6) ai5_sk_left_pane_g

0xe9fa,	// (0x0003b25d) ai5_sk_left_pane_t1

0x99e3,	// (0x00036246) ai5_sk_right_pane_g1

0xea08,	// (0x0003b26b) ai5_sk_right_pane_g2

0xea10,	// (0x0003b273) ai5_sk_right_pane_g3

0xea18,	// (0x0003b27b) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x0003c6cf) ai5_sk_right_pane_g

0xea20,	// (0x0003b283) ai5_sk_right_pane_t1

0x99e3,	// (0x00036246) ai5_sk_middle_pane_g1

0x99db,	// (0x0003623e) ai5_sk_middle_pane_g2

0x99fb,	// (0x0003625e) ai5_sk_middle_pane_g3

0xea10,	// (0x0003b273) ai5_sk_middle_pane_g4

0xe9ea,	// (0x0003b24d) ai5_sk_middle_pane_g5

0xea2e,	// (0x0003b291) ai5_sk_middle_pane_g6

0xea36,	// (0x0003b299) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x0003c6d8) ai5_sk_middle_pane_g

0x9509,	// (0x00035d6c) aid_touch_area_size_lc0_ParamLimits

0x9509,	// (0x00035d6c) aid_touch_area_size_lc0

0x6925,	// (0x00033188) cell_hwr_candidate_pane_t1_ParamLimits

0x9525,	// (0x00035d88) aid_touch_navi_pane

0x97fe,	// (0x00036061) status_dt_navi_pane_ParamLimits

0x97fe,	// (0x00036061) status_dt_navi_pane

0x980b,	// (0x0003606e) status_dt_sta_pane_ParamLimits

0x980b,	// (0x0003606e) status_dt_sta_pane

0xea3e,	// (0x0003b2a1) dt_sta_controll_pane

0xea4b,	// (0x0003b2ae) dt_sta_indi_pane

0xea5c,	// (0x0003b2bf) dt_sta_title_pane

0x7c70,	// (0x000344d3) bg_dt_sta_indi_pane_ParamLimits

0x7c70,	// (0x000344d3) bg_dt_sta_indi_pane

0xea6f,	// (0x0003b2d2) dt_sta_battery_pane

0xea77,	// (0x0003b2da) dt_sta_indi_pane_g1

0xea80,	// (0x0003b2e3) dt_sta_indi_pane_g2

0xea89,	// (0x0003b2ec) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x0003c6e7) dt_sta_indi_pane_g

0xea92,	// (0x0003b2f5) dt_sta_signal_pane

0x8274,	// (0x00034ad7) bg_dt_sta_title_pane_ParamLimits

0x8274,	// (0x00034ad7) bg_dt_sta_title_pane

0xea9b,	// (0x0003b2fe) dt_sta_title_pane_g1

0xeaa3,	// (0x0003b306) dt_sta_title_pane_t1_ParamLimits

0xeaa3,	// (0x0003b306) dt_sta_title_pane_t1

0x2f72,	// (0x0002f7d5) bg_dt_sta_control_pane

0xeab8,	// (0x0003b31b) dt_sta_controll_pane_g1

0xeac1,	// (0x0003b324) bg_dt_sta_title_pane_g1

0xeaca,	// (0x0003b32d) bg_dt_sta_title_pane_g2

0xead3,	// (0x0003b336) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x0003c6ee) bg_dt_sta_title_pane_g

0xc026,	// (0x00038889) bg_dt_sta_indi_pane_g1

0xeadc,	// (0x0003b33f) dt_sta_signal_pane_g1

0xeae4,	// (0x0003b347) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x0003c6f5) dt_sta_signal_pane_g

0xeaec,	// (0x0003b34f) dt_sta_battery_pane_g1

0xeaf5,	// (0x0003b358) dt_sta_battery_pane_t1

0xc026,	// (0x00038889) bg_dt_sta_control_pane_g1

0x8c78,	// (0x000354db) fep_china_uni_eep_pane

0x8c80,	// (0x000354e3) fep_china_uni_entry_pane_ParamLimits

0x8c90,	// (0x000354f3) popup_fep_china_uni_window_g1_ParamLimits

0x8ca0,	// (0x00035503) popup_fep_china_uni_window_g2_ParamLimits

0x8ca0,	// (0x00035503) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0003bf5b) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0003bf5b) popup_fep_china_uni_window_g

0xeb04,	// (0x0003b367) fep_china_uni_eep_pane_g1

0xeb0c,	// (0x0003b36f) fep_china_uni_eep_pane_t1

0xe4fb,	// (0x0003ad5e) aid_touch_area_size_smil_player

0x967b,	// (0x00035ede) lc0_clock_pane

0x9862,	// (0x000360c5) status_pane_g5_ParamLimits

0x9862,	// (0x000360c5) status_pane_g5

0x57ee,	// (0x00032051) popup_keymap_window

0x9820,	// (0x00036083) status_icon_pane

0xe708,	// (0x0003af6b) cell_ai5_widget_pane_g3_ParamLimits

0xe722,	// (0x0003af85) cell_ai5_widget_pane_g4_ParamLimits

0xe732,	// (0x0003af95) cell_ai5_widget_pane_g5_ParamLimits

0xe75a,	// (0x0003afbd) cell_ai5_widget_pane_g8_ParamLimits

0xe75a,	// (0x0003afbd) cell_ai5_widget_pane_g8

0xe76e,	// (0x0003afd1) cell_ai5_widget_pane_g9_ParamLimits

0xe76e,	// (0x0003afd1) cell_ai5_widget_pane_g9

0xe782,	// (0x0003afe5) cell_ai5_widget_pane_g10_ParamLimits

0xe782,	// (0x0003afe5) cell_ai5_widget_pane_g10

0xeb1b,	// (0x0003b37e) status_icon_pane_g1

0x2f72,	// (0x0002f7d5) bg_popup_sub_pane_cp13

0xeb23,	// (0x0003b386) popup_keymap_window_t1

0x945a,	// (0x00035cbd) control_pane_g6_ParamLimits

0x945a,	// (0x00035cbd) control_pane_g6

0x9467,	// (0x00035cca) control_pane_g7_ParamLimits

0x9467,	// (0x00035cca) control_pane_g7

0x9474,	// (0x00035cd7) control_pane_g8_ParamLimits

0x9474,	// (0x00035cd7) control_pane_g8

0xea3e,	// (0x0003b2a1) dt_sta_controll_pane_ParamLimits

0xea4b,	// (0x0003b2ae) dt_sta_indi_pane_ParamLimits

0xea5c,	// (0x0003b2bf) dt_sta_title_pane_ParamLimits

0x81ac,	// (0x00034a0f) aid_size_touch_scroll_bar_cale

0x4714,	// (0x00030f77) popup_discreet_window_ParamLimits

0x4714,	// (0x00030f77) popup_discreet_window

0x479c,	// (0x00030fff) popup_sk_window

0xa062,	// (0x000368c5) bg_popup_sub_pane_cp28_ParamLimits

0xa062,	// (0x000368c5) bg_popup_sub_pane_cp28

0xeb31,	// (0x0003b394) popup_discreet_window_g1_ParamLimits

0xeb31,	// (0x0003b394) popup_discreet_window_g1

0xeb51,	// (0x0003b3b4) popup_discreet_window_t1_ParamLimits

0xeb51,	// (0x0003b3b4) popup_discreet_window_t1

0xeb6f,	// (0x0003b3d2) popup_discreet_window_t2_ParamLimits

0xeb6f,	// (0x0003b3d2) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x0003c6fa) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x0003c6fa) popup_discreet_window_t

0x7481,	// (0x00033ce4) popup_sk_window_g1

0x748b,	// (0x00033cee) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x0003c701) popup_sk_window_g

0x7493,	// (0x00033cf6) popup_sk_window_t1

0x74a1,	// (0x00033d04) popup_sk_window_t1_copy1

0xe6f4,	// (0x0003af57) cell_ai5_widget_pane_g2_ParamLimits

0xe88f,	// (0x0003b0f2) cell_ai5_widget_pane_t9_ParamLimits

0xe88f,	// (0x0003b0f2) cell_ai5_widget_pane_t9

0x2f72,	// (0x0002f7d5) main_fep_fshwr2_pane

0x74af,	// (0x00033d12) aid_fshwr2_btn_pane

0x74bf,	// (0x00033d22) aid_fshwr2_syb_pane

0x74d3,	// (0x00033d36) aid_fshwr2_txt_pane

0x74e3,	// (0x00033d46) fshwr2_func_candi_pane

0x7507,	// (0x00033d6a) fshwr2_hwr_syb_pane

0x7521,	// (0x00033d84) fshwr2_icf_pane

0x463b,	// (0x00030e9e) fshwr2_icf_bg_pane

0x754f,	// (0x00033db2) fshwr2_icf_pane_t1_ParamLimits

0x754f,	// (0x00033db2) fshwr2_icf_pane_t1

0x8b4d,	// (0x000353b0) fshwr2_func_candi_pane_g1

0xebc1,	// (0x0003b424) fshwr2_func_candi_row_pane_ParamLimits

0xebc1,	// (0x0003b424) fshwr2_func_candi_row_pane

0x7567,	// (0x00033dca) cell_fshwr2_syb_pane_ParamLimits

0x7567,	// (0x00033dca) cell_fshwr2_syb_pane

0x758a,	// (0x00033ded) fshwr2_hwr_syb_pane_g1_ParamLimits

0x758a,	// (0x00033ded) fshwr2_hwr_syb_pane_g1

0x463b,	// (0x00030e9e) bg_popup_call_pane_cp01

0x7598,	// (0x00033dfb) fshwr2_func_candi_cell_pane_ParamLimits

0x7598,	// (0x00033dfb) fshwr2_func_candi_cell_pane

0xa6d6,	// (0x00036f39) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6d6,	// (0x00036f39) fshwr2_func_candi_cell_bg_pane

0x75e3,	// (0x00033e46) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x75e3,	// (0x00033e46) fshwr2_func_candi_cell_pane_g1

0x760e,	// (0x00033e71) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x760e,	// (0x00033e71) fshwr2_func_candi_cell_pane_t1

0x463b,	// (0x00030e9e) bg_button_pane_cp08

0x94a9,	// (0x00035d0c) cell_fshwr2_syb_bg_pane

0x7621,	// (0x00033e84) cell_fshwr2_syb_bg_pane_g1

0x7635,	// (0x00033e98) cell_fshwr2_syb_bg_pane_t1

0x8274,	// (0x00034ad7) main_tmo_pane

0xab7d,	// (0x000373e0) uni_indicator_pane_g1_ParamLimits

0xab93,	// (0x000373f6) uni_indicator_pane_g2_ParamLimits

0xaba9,	// (0x0003740c) uni_indicator_pane_g3_ParamLimits

0xabbc,	// (0x0003741f) uni_indicator_pane_g4_ParamLimits

0xabbc,	// (0x0003741f) uni_indicator_pane_g4

0xabd0,	// (0x00037433) uni_indicator_pane_g5_ParamLimits

0xabd0,	// (0x00037433) uni_indicator_pane_g5

0xabd0,	// (0x00037433) uni_indicator_pane_g6_ParamLimits

0xabd0,	// (0x00037433) uni_indicator_pane_g6

0xf8fc,	// (0x0003c15f) uni_indicator_pane_g_ParamLimits

0xd50f,	// (0x00039d72) popup_tmo_note_window_ParamLimits

0xd50f,	// (0x00039d72) popup_tmo_note_window

0x6cde,	// (0x00033541) fshwr2_bg_pane

0x75ff,	// (0x00033e62) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x75ff,	// (0x00033e62) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x0003c706) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x0003c706) fshwr2_func_candi_cell_pane_g

0x68de,	// (0x00033141) bg_popup_window_pane_cp01

0x764b,	// (0x00033eae) bg_popup_window_pane_g1_cp01

0xebe8,	// (0x0003b44b) bg_popup_window_pane_cp22_ParamLimits

0xebe8,	// (0x0003b44b) bg_popup_window_pane_cp22

0xebf6,	// (0x0003b459) listscroll_tmo_link_pane_ParamLimits

0xebf6,	// (0x0003b459) listscroll_tmo_link_pane

0xec36,	// (0x0003b499) popup_tmo_note_window_g1_ParamLimits

0xec36,	// (0x0003b499) popup_tmo_note_window_g1

0xec43,	// (0x0003b4a6) tmo_note_info_pane_ParamLimits

0xec43,	// (0x0003b4a6) tmo_note_info_pane

0xec5d,	// (0x0003b4c0) list_tmo_note_info_pane_g1_ParamLimits

0xec5d,	// (0x0003b4c0) list_tmo_note_info_pane_g1

0xec74,	// (0x0003b4d7) list_tmo_note_info_pane_g2_ParamLimits

0xec74,	// (0x0003b4d7) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x0003c70b) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x0003c70b) list_tmo_note_info_pane_g

0xec90,	// (0x0003b4f3) list_tmo_note_info_text_pane_ParamLimits

0xec90,	// (0x0003b4f3) list_tmo_note_info_text_pane

0xed11,	// (0x0003b574) list_tmo_link_pane

0xed1e,	// (0x0003b581) scroll_pane_cp20

0xed2b,	// (0x0003b58e) list_single_tmo_link_pane_ParamLimits

0xed2b,	// (0x0003b58e) list_single_tmo_link_pane

0xed3b,	// (0x0003b59e) list_single_tmo_link_pane_t1

0xed49,	// (0x0003b5ac) list_tmo_note_info_text_pane_t1_ParamLimits

0xed49,	// (0x0003b5ac) list_tmo_note_info_text_pane_t1

0x8330,	// (0x00034b93) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8330,	// (0x00034b93) aid_size_touch_scroll_bar_cp01

0x4ea1,	// (0x00031704) aid_size_touch_slider_marker

0x4784,	// (0x00030fe7) popup_settings_window_ParamLimits

0x4784,	// (0x00030fe7) popup_settings_window

0x5671,	// (0x00031ed4) popup_candi_list_indi_window

0x9525,	// (0x00035d88) aid_touch_navi_pane_ParamLimits

0x6c39,	// (0x0003349c) rs_clock_indi_pane

0x6c42,	// (0x000334a5) sctrl_sk_bottom_pane_ParamLimits

0x6c53,	// (0x000334b6) sctrl_sk_top_pane_ParamLimits

0x6d4e,	// (0x000335b1) popup_fep_tooltip_window

0xe662,	// (0x0003aec5) aid_size_cell_widget_grid_ParamLimits

0xe6df,	// (0x0003af42) cell_ai5_widget_pane_g1_ParamLimits

0xe6df,	// (0x0003af42) cell_ai5_widget_pane_g1

0xe742,	// (0x0003afa5) cell_ai5_widget_pane_g6_ParamLimits

0xe74e,	// (0x0003afb1) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1c,	// (0x0003c67f) cell_ai5_widget_pane_g_ParamLimits

0xfe1c,	// (0x0003c67f) cell_ai5_widget_pane_g

0xe8be,	// (0x0003b121) cell_ai5_widget_pane_t10_ParamLimits

0xe8be,	// (0x0003b121) cell_ai5_widget_pane_t10

0xe901,	// (0x0003b164) grid_ai5_widget_pane_ParamLimits

0xe9a2,	// (0x0003b205) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a2,	// (0x0003b205) cell_contacts_ai5_widget_pane

0xeb84,	// (0x0003b3e7) popup_discreet_window_t3_ParamLimits

0xeb84,	// (0x0003b3e7) popup_discreet_window_t3

0x7539,	// (0x00033d9c) popup_fshwr2_char_preview_window_ParamLimits

0x7539,	// (0x00033d9c) popup_fshwr2_char_preview_window

0xecae,	// (0x0003b511) tmo_note_info_pane_t1

0xecc3,	// (0x0003b526) tmo_note_info_pane_t2

0xecd8,	// (0x0003b53b) tmo_note_info_pane_t3

0xeced,	// (0x0003b550) tmo_note_info_pane_t4

0xecff,	// (0x0003b562) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x0003c710) tmo_note_info_pane_t

0xed11,	// (0x0003b574) list_tmo_link_pane_ParamLimits

0xed1e,	// (0x0003b581) scroll_pane_cp20_ParamLimits

0x463b,	// (0x00030e9e) bg_popup_fep_char_preview_window_cp01

0xed62,	// (0x0003b5c5) popup_fshwr2_char_preview_window_t1

0xed70,	// (0x0003b5d3) popup_candi_list_indi_window_g1

0xed79,	// (0x0003b5dc) bg_cell_contacts_ai5_widget_pane

0xed85,	// (0x0003b5e8) cell_contacts_ai5_widget_pane_g1

0xc706,	// (0x00038f69) cell_contacts_ai5_widget_pane_g2

0xed9a,	// (0x0003b5fd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x0003c71b) cell_contacts_ai5_widget_pane_g

0xeda6,	// (0x0003b609) cell_contacts_ai5_widget_pane_t1

0x8274,	// (0x00034ad7) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee1d,	// (0x0003b680) settings_container_pane

0x9185,	// (0x000359e8) listscroll_set_pane_copy1

0xb710,	// (0x00037f73) scroll_pane_cp121_copy1

0x9dff,	// (0x00036662) set_content_pane_copy1

0xee29,	// (0x0003b68c) aid_height_set_list_copy1_ParamLimits

0xee29,	// (0x0003b68c) aid_height_set_list_copy1

0xadc8,	// (0x0003762b) aid_size_parent_copy1_ParamLimits

0xadc8,	// (0x0003762b) aid_size_parent_copy1

0xee35,	// (0x0003b698) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee35,	// (0x0003b698) button_value_adjust_pane_cp6_copy1

0x94a9,	// (0x00035d0c) list_highlight_pane_cp2_copy1_ParamLimits

0x94a9,	// (0x00035d0c) list_highlight_pane_cp2_copy1

0xee49,	// (0x0003b6ac) list_set_pane_copy1_ParamLimits

0xee49,	// (0x0003b6ac) list_set_pane_copy1

0xedb8,	// (0x0003b61b) main_pane_set_t1_copy1_ParamLimits

0xedb8,	// (0x0003b61b) main_pane_set_t1_copy1

0xedf2,	// (0x0003b655) main_pane_set_t2_copy1_ParamLimits

0xedf2,	// (0x0003b655) main_pane_set_t2_copy1

0xeef6,	// (0x0003b759) main_pane_set_t3_copy1

0xef04,	// (0x0003b767) main_pane_set_t4_copy1

0xee11,	// (0x0003b674) set_content_pane_g1_copy1_ParamLimits

0xee11,	// (0x0003b674) set_content_pane_g1_copy1

0xef12,	// (0x0003b775) setting_code_pane_copy1

0xef1a,	// (0x0003b77d) setting_slider_graphic_pane_copy1

0xef1a,	// (0x0003b77d) setting_slider_pane_copy1

0xef22,	// (0x0003b785) setting_text_pane_copy1

0xef22,	// (0x0003b785) setting_volume_pane_copy1

0xef12,	// (0x0003b775) settings_code_pane_cp2_copy1

0xef2a,	// (0x0003b78d) settings_code_pane_cp_copy1_ParamLimits

0xef2a,	// (0x0003b78d) settings_code_pane_cp_copy1

0x7654,	// (0x00033eb7) volume_set_pane_copy1

0xef3e,	// (0x0003b7a1) volume_set_pane_g10_copy1

0xef46,	// (0x0003b7a9) volume_set_pane_g1_copy1

0xef4e,	// (0x0003b7b1) volume_set_pane_g2_copy1

0xef56,	// (0x0003b7b9) volume_set_pane_g3_copy1

0xef5e,	// (0x0003b7c1) volume_set_pane_g4_copy1

0xef66,	// (0x0003b7c9) volume_set_pane_g5_copy1

0xef6e,	// (0x0003b7d1) volume_set_pane_g6_copy1

0xef76,	// (0x0003b7d9) volume_set_pane_g7_copy1

0xef7e,	// (0x0003b7e1) volume_set_pane_g8_copy1

0xef86,	// (0x0003b7e9) volume_set_pane_g9_copy1

0x79e7,	// (0x0003424a) bg_set_opt_pane_cp_copy1_ParamLimits

0x79e7,	// (0x0003424a) bg_set_opt_pane_cp_copy1

0x765c,	// (0x00033ebf) setting_slider_pane_t1_copy1_ParamLimits

0x765c,	// (0x00033ebf) setting_slider_pane_t1_copy1

0x767b,	// (0x00033ede) setting_slider_pane_t2_copy1_ParamLimits

0x767b,	// (0x00033ede) setting_slider_pane_t2_copy1

0x7695,	// (0x00033ef8) setting_slider_pane_t3_copy1_ParamLimits

0x7695,	// (0x00033ef8) setting_slider_pane_t3_copy1

0x76ad,	// (0x00033f10) slider_set_pane_copy1_ParamLimits

0x76ad,	// (0x00033f10) slider_set_pane_copy1

0x82cc,	// (0x00034b2f) set_opt_bg_pane_g1_copy2

0x82d4,	// (0x00034b37) set_opt_bg_pane_g2_copy2

0xef8e,	// (0x0003b7f1) set_opt_bg_pane_g3_copy2

0x82e4,	// (0x00034b47) set_opt_bg_pane_g4_copy2

0x82ec,	// (0x00034b4f) set_opt_bg_pane_g5_copy2

0x82f4,	// (0x00034b57) set_opt_bg_pane_g6_copy2

0xef98,	// (0x0003b7fb) set_opt_bg_pane_g7_copy2

0xefa0,	// (0x0003b803) set_opt_bg_pane_g8_copy2

0xefaa,	// (0x0003b80d) set_opt_bg_pane_g9_copy2

0x76c3,	// (0x00033f26) aid_size_touch_slider_mark_copy1_ParamLimits

0x76c3,	// (0x00033f26) aid_size_touch_slider_mark_copy1

0xefb4,	// (0x0003b817) slider_set_pane_g1_copy1

0x76d7,	// (0x00033f3a) slider_set_pane_g2_copy1

0x607b,	// (0x000328de) slider_set_pane_g3_copy1_ParamLimits

0x607b,	// (0x000328de) slider_set_pane_g3_copy1

0x608f,	// (0x000328f2) slider_set_pane_g4_copy1_ParamLimits

0x608f,	// (0x000328f2) slider_set_pane_g4_copy1

0x60a7,	// (0x0003290a) slider_set_pane_g5_copy1_ParamLimits

0x60a7,	// (0x0003290a) slider_set_pane_g5_copy1

0x607b,	// (0x000328de) slider_set_pane_g6_copy1_ParamLimits

0x607b,	// (0x000328de) slider_set_pane_g6_copy1

0x76df,	// (0x00033f42) slider_set_pane_g7_copy1_ParamLimits

0x76df,	// (0x00033f42) slider_set_pane_g7_copy1

0x7907,	// (0x0003416a) bg_set_opt_pane_cp2_copy1

0xefbd,	// (0x0003b820) setting_slider_graphic_pane_g1_copy1

0xefc6,	// (0x0003b829) setting_slider_graphic_pane_t1_copy1

0xefd6,	// (0x0003b839) setting_slider_graphic_pane_t2_copy1

0xefe6,	// (0x0003b849) slider_set_pane_cp_copy1

0xeff6,	// (0x0003b859) input_focus_pane_cp1_copy1

0xefff,	// (0x0003b862) list_set_text_pane_copy1

0xf007,	// (0x0003b86a) setting_text_pane_g1_copy1

0x39b7,	// (0x0003021a) set_text_pane_t1_copy1

0xeff6,	// (0x0003b859) input_focus_pane_cp2_copy1

0xf007,	// (0x0003b86a) setting_code_pane_g1_copy1

0xf010,	// (0x0003b873) setting_code_pane_t1_copy1

0xb538,	// (0x00037d9b) list_set_graphic_pane_copy1

0x7907,	// (0x0003416a) bg_set_opt_pane_cp4_copy1

0x8e77,	// (0x000356da) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e77,	// (0x000356da) list_set_graphic_pane_g1_copy1

0xf01e,	// (0x0003b881) list_set_graphic_pane_g2_copy1

0x8e8f,	// (0x000356f2) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e8f,	// (0x000356f2) list_set_graphic_pane_t1_copy1

0xc026,	// (0x00038889) rs_clock_indi_pane_g1

0xf026,	// (0x0003b889) rs_clock_indi_pane_t1

0xf034,	// (0x0003b897) rs_indi_pane

0xf03c,	// (0x0003b89f) rs_indi_pane_g1

0xf045,	// (0x0003b8a8) rs_indi_pane_g2

0xf04e,	// (0x0003b8b1) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x0003c722) rs_indi_pane_g

0x9185,	// (0x000359e8) bg_popup_preview_window_pane_cp03

0xf057,	// (0x0003b8ba) popup_fep_tooltip_window_t1

0xccae,	// (0x00039511) popup_note2_window_g2_ParamLimits

0xccae,	// (0x00039511) popup_note2_window_g2

0x0001,

0xfc4c,	// (0x0003c4af) popup_note2_window_g_ParamLimits

0xfc4c,	// (0x0003c4af) popup_note2_window_g

0xd1a9,	// (0x00039a0c) bg_popup_sub_pane_cp11_ParamLimits

0xd1b6,	// (0x00039a19) cell_ai3_links_pane_g1_ParamLimits

0xd1cd,	// (0x00039a30) cell_ai3_links_pane_t1

0x39b7,	// (0x0003021a) set_text_pane_t1_copy1_ParamLimits

0x908d,	// (0x000358f0) cell_graphic_popup_pane_cp2_ParamLimits

0x908d,	// (0x000358f0) cell_graphic_popup_pane_cp2

0xf065,	// (0x0003b8c8) cell_graphic_popup_pane_g1_cp2

0x7fbf,	// (0x00034822) cell_graphic_popup_pane_g2_cp2

0xf06d,	// (0x0003b8d0) cell_graphic_popup_pane_g3_cp2

0xf075,	// (0x0003b8d8) cell_graphic_popup_pane_t2_cp2

0x7fd0,	// (0x00034833) grid_highlight_pane_cp3_cp2

0x8624,	// (0x00034e87) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8274,	// (0x00034ad7) main_tmo_pane_ParamLimits

0xd503,	// (0x00039d66) popup_tmo_big_image_note_window

0xe6ce,	// (0x0003af31) cell_ai5_widget_list_pane

0xe6d6,	// (0x0003af39) cell_ai5_widget_lrg_icon_pane

0xecae,	// (0x0003b511) tmo_note_info_pane_t1_ParamLimits

0xecc3,	// (0x0003b526) tmo_note_info_pane_t2_ParamLimits

0xecd8,	// (0x0003b53b) tmo_note_info_pane_t3_ParamLimits

0xeced,	// (0x0003b550) tmo_note_info_pane_t4_ParamLimits

0xecff,	// (0x0003b562) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x0003c710) tmo_note_info_pane_t_ParamLimits

0xee1d,	// (0x0003b680) settings_container_pane_ParamLimits

0xefee,	// (0x0003b851) indicator_popup_pane_cp5

0xefee,	// (0x0003b851) indicator_popup_pane_cp6

0xb538,	// (0x00037d9b) list_set_graphic_pane_copy1_ParamLimits

0x2f72,	// (0x0002f7d5) bg_popup_window_pane_cp23

0xf083,	// (0x0003b8e6) popup_tmo_big_image_note_window_g1

0xf08d,	// (0x0003b8f0) popup_tmo_big_image_note_window_t1

0xf09d,	// (0x0003b900) popup_tmo_big_image_note_window_t2

0xf0ad,	// (0x0003b910) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x0003c729) popup_tmo_big_image_note_window_t

0xc026,	// (0x00038889) cell_ai5_widget_lrg_icon_pane_g1

0xf0bd,	// (0x0003b920) cell_ai5_widget_lrg_icon_pane_t1

0xf0cb,	// (0x0003b92e) cell_ai5_widget_list_row_pane_ParamLimits

0xf0cb,	// (0x0003b92e) cell_ai5_widget_list_row_pane

0xf0e2,	// (0x0003b945) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e2,	// (0x0003b945) cell_ai5_widget_list_row_pane_g1

0xf0ef,	// (0x0003b952) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ef,	// (0x0003b952) cell_ai5_widget_list_row_pane_t1

0xf120,	// (0x0003b983) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf120,	// (0x0003b983) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecd,	// (0x0003c730) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x0003c730) cell_ai5_widget_list_row_pane_t

0x463b,	// (0x00030e9e) main_fep_vtchi_ss_pane

0xf170,	// (0x0003b9d3) popup_fep_char_pre_window

0xf178,	// (0x0003b9db) popup_fep_ituss_window

0xf1a4,	// (0x0003ba07) popup_fep_vkbss_window

0x94a9,	// (0x00035d0c) grid_vkbss_keypad_pane_ParamLimits

0x94a9,	// (0x00035d0c) grid_vkbss_keypad_pane

0xf1e4,	// (0x0003ba47) ituss_keypad_pane

0x76ff,	// (0x00033f62) aid_vkbss_key_offset_ParamLimits

0x76ff,	// (0x00033f62) aid_vkbss_key_offset

0x770b,	// (0x00033f6e) cell_vkbss_key_pane_ParamLimits

0x770b,	// (0x00033f6e) cell_vkbss_key_pane

0xf1f0,	// (0x0003ba53) bg_cell_vkbss_key_g1_ParamLimits

0xf1f0,	// (0x0003ba53) bg_cell_vkbss_key_g1

0xf1fc,	// (0x0003ba5f) cell_vkbss_key_3p_pane_ParamLimits

0xf1fc,	// (0x0003ba5f) cell_vkbss_key_3p_pane

0xf232,	// (0x0003ba95) cell_vkbss_key_g1_ParamLimits

0xf232,	// (0x0003ba95) cell_vkbss_key_g1

0xf268,	// (0x0003bacb) cell_vkbss_key_t1_ParamLimits

0xf268,	// (0x0003bacb) cell_vkbss_key_t1

0x7763,	// (0x00033fc6) cell_ituss_key_pane_ParamLimits

0x7763,	// (0x00033fc6) cell_ituss_key_pane

0xf2c4,	// (0x0003bb27) bg_cell_ituss_key_g1_ParamLimits

0xf2c4,	// (0x0003bb27) bg_cell_ituss_key_g1

0xf2d0,	// (0x0003bb33) cell_ituss_key_pane_g1_ParamLimits

0xf2d0,	// (0x0003bb33) cell_ituss_key_pane_g1

0x7774,	// (0x00033fd7) cell_ituss_key_pane_g2_ParamLimits

0x7774,	// (0x00033fd7) cell_ituss_key_pane_g2

0x0005,

0xfed4,	// (0x0003c737) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x0003c737) cell_ituss_key_pane_g

0x77f8,	// (0x0003405b) cell_ituss_key_t1_ParamLimits

0x77f8,	// (0x0003405b) cell_ituss_key_t1

0x7832,	// (0x00034095) cell_ituss_key_t2_ParamLimits

0x7832,	// (0x00034095) cell_ituss_key_t2

0x7864,	// (0x000340c7) cell_ituss_key_t3_ParamLimits

0x7864,	// (0x000340c7) cell_ituss_key_t3

0x7895,	// (0x000340f8) cell_ituss_key_t4_ParamLimits

0x7895,	// (0x000340f8) cell_ituss_key_t4

0x0004,

0xfee1,	// (0x0003c744) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0003c744) cell_ituss_key_t

0xf2f6,	// (0x0003bb59) cell_vkbss_key_3p_pane_g1

0xf2fe,	// (0x0003bb61) cell_vkbss_key_3p_pane_g2

0xf306,	// (0x0003bb69) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0003c74f) cell_vkbss_key_3p_pane_g

0x9185,	// (0x000359e8) bg_popup_fep_char_preview_window_cp02

0xf30e,	// (0x0003bb71) popup_fep_char_pre_window_t1

0xe64f,	// (0x0003aeb2) main_ai5_sk_pane

0xed79,	// (0x0003b5dc) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed85,	// (0x0003b5e8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc706,	// (0x00038f69) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed9a,	// (0x0003b5fd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x0003c71b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda6,	// (0x0003b609) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8274,	// (0x00034ad7) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31c,	// (0x0003bb7f) main_ai5_sk_pane_g1

0x9e9b,	// (0x000366fe) popup_query_code_window_g1

0xf18e,	// (0x0003b9f1) popup_fep_vkb_icf_pane

0xf1bb,	// (0x0003ba1e) popup_fep_vtchi_icf_pane

0xf325,	// (0x0003bb88) bg_icf_pane

0xf325,	// (0x0003bb88) list_vkb_icf_pane

0xf331,	// (0x0003bb94) bg_icf_pane_cp01

0xf344,	// (0x0003bba7) vtchi_icf_list_pane

0xf3a4,	// (0x0003bc07) list_vkb_icf_pane_t1_ParamLimits

0xf3a4,	// (0x0003bc07) list_vkb_icf_pane_t1

0xf3c5,	// (0x0003bc28) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0003bc28) vtchi_icf_list_pane_t1

0xf178,	// (0x0003b9db) popup_fep_ituss_window_ParamLimits

0xf1bb,	// (0x0003ba1e) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e4,	// (0x0003ba47) ituss_keypad_pane_ParamLimits

0x76f5,	// (0x00033f58) ituss_sks_pane

0xf325,	// (0x0003bb88) bg_icf_pane_ParamLimits

0xf148,	// (0x0003b9ab) icf_edit_indi_pane_ParamLimits

0xf148,	// (0x0003b9ab) icf_edit_indi_pane

0xf325,	// (0x0003bb88) list_vkb_icf_pane_ParamLimits

0xf331,	// (0x0003bb94) bg_icf_pane_cp01_ParamLimits

0xf163,	// (0x0003b9c6) icf_edit_indi_pane_cp01_ParamLimits

0xf163,	// (0x0003b9c6) icf_edit_indi_pane_cp01

0xf344,	// (0x0003bba7) vtchi_query_pane

0xe4cb,	// (0x0003ad2e) icf_edit_indi_pane_g1_ParamLimits

0xe4cb,	// (0x0003ad2e) icf_edit_indi_pane_g1

0xf43a,	// (0x0003bc9d) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0003bc9d) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x0003c77a) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x0003c77a) icf_edit_indi_pane_g

0xf44e,	// (0x0003bcb1) icf_edit_indi_pane_t1

0xf3e3,	// (0x0003bc46) bg_input_focus_pane_cp042

0x81a3,	// (0x00034a06) vtchi_button_pane

0xf3ec,	// (0x0003bc4f) vtchi_query_pane_t1

0xf3fa,	// (0x0003bc5d) vtchi_query_pane_t2

0xf408,	// (0x0003bc6b) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x0003c769) vtchi_query_pane_t

0x463b,	// (0x00030e9e) bg_button_pane_cp13

0xf416,	// (0x0003bc79) vtchi_button_pane_g1

0x78d8,	// (0x0003413b) ituss_sks_pane_g1

0x78e3,	// (0x00034146) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x0003c770) ituss_sks_pane_g

0xf41e,	// (0x0003bc81) ituss_sks_pane_t1

0xf42c,	// (0x0003bc8f) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x0003c775) ituss_sks_pane_t

0xbaa8,	// (0x0003830b) indicator_nsta_pane_cp_g1

0xbab1,	// (0x00038314) indicator_nsta_pane_cp_g2

0xbab9,	// (0x0003831c) indicator_nsta_pane_cp_g3

0xbac1,	// (0x00038324) indicator_nsta_pane_cp_g4

0xbab1,	// (0x00038314) indicator_nsta_pane_cp_g5

0xbab9,	// (0x0003831c) indicator_nsta_pane_cp_g6

0x0005,

0xfa8a,	// (0x0003c2ed) indicator_nsta_pane_cp_g

0xe227,	// (0x0003aa8a) cell_graphic2_pane_t2_ParamLimits

0xe227,	// (0x0003aa8a) cell_graphic2_pane_t2

0x0001,

0xfda3,	// (0x0003c606) cell_graphic2_pane_t_ParamLimits

0xfda3,	// (0x0003c606) cell_graphic2_pane_t

0xe253,	// (0x0003aab6) cell_graphic2_control_pane_t1

0x8c27,	// (0x0003548a) signal_pane_g3_ParamLimits

0x8c27,	// (0x0003548a) signal_pane_g3

0x8c39,	// (0x0003549c) signal_pane_g4_ParamLimits

0x8c39,	// (0x0003549c) signal_pane_g4

0xf132,	// (0x0003b995) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf132,	// (0x0003b995) cell_ai5_widget_list_row_pane_t3

0xf2e4,	// (0x0003bb47) cell_ituss_key_pane_t1_ParamLimits

0xf2e4,	// (0x0003bb47) cell_ituss_key_pane_t1

0x9ad8,	// (0x0003633b) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ad8,	// (0x0003633b) form_field_data_wide_pane_vc_t2

0x9aec,	// (0x0003634f) form_field_data_wide_pane_vc_t3_ParamLimits

0x9aec,	// (0x0003634f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0003c047) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003c047) form_field_data_wide_pane_vc_t

0xb752,	// (0x00037fb5) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb752,	// (0x00037fb5) form_field_slider_wide_pane_vc_t3

0xb830,	// (0x00038093) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb830,	// (0x00038093) form_field_popup_wide_pane_vc_t2

0xb847,	// (0x000380aa) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb847,	// (0x000380aa) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa79,	// (0x0003c2dc) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa79,	// (0x0003c2dc) form_field_popup_wide_pane_vc_t

0x74af,	// (0x00033d12) aid_fshwr2_btn_pane_ParamLimits

0x74bf,	// (0x00033d22) aid_fshwr2_syb_pane_ParamLimits

0x74d3,	// (0x00033d36) aid_fshwr2_txt_pane_ParamLimits

0x6cde,	// (0x00033541) fshwr2_bg_pane_ParamLimits

0x74e3,	// (0x00033d46) fshwr2_func_candi_pane_ParamLimits

0x7507,	// (0x00033d6a) fshwr2_hwr_syb_pane_ParamLimits

0x7521,	// (0x00033d84) fshwr2_icf_pane_ParamLimits

0x6594,	// (0x00032df7) list_double_graphic_pane_vc_g4_ParamLimits

0x6594,	// (0x00032df7) list_double_graphic_pane_vc_g4

0x7794,	// (0x00033ff7) cell_ituss_key_pane_g3_ParamLimits

0x7794,	// (0x00033ff7) cell_ituss_key_pane_g3

0x78c6,	// (0x00034129) cell_ituss_key_t5_ParamLimits

0x78c6,	// (0x00034129) cell_ituss_key_t5

0xf1a4,	// (0x0003ba07) popup_fep_vkbss_window_ParamLimits

0xe659,	// (0x0003aebc) aid_cell_ai5_quarter

0xf44e,	// (0x0003bcb1) icf_edit_indi_pane_t1_ParamLimits

0x7d18,	// (0x0003457b) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7d18,	// (0x0003457b) aid_tch_indicator_popup_pane_cp2

0x7d2b,	// (0x0003458e) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7d2b,	// (0x0003458e) aid_tch_query_popup_data_pane_cp2

0x9e43,	// (0x000366a6) aid_tch_query_popup_pane_ParamLimits

0x9e43,	// (0x000366a6) aid_tch_query_popup_pane

0x9e43,	// (0x000366a6) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e43,	// (0x000366a6) aid_tch_query_popup_data_pane_cp1

0x94a9,	// (0x00035d0c) cell_fshwr2_syb_bg_pane_ParamLimits

0x7621,	// (0x00033e84) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7635,	// (0x00033e98) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf18e,	// (0x0003b9f1) popup_fep_vkb_icf_pane_ParamLimits

0x72ef,	// (0x00033b52) bg_popup_fep_char_preview_window_g10

0xe796,	// (0x0003aff9) cell_ai5_widget_pane_g11_ParamLimits

0xe796,	// (0x0003aff9) cell_ai5_widget_pane_g11

0xe7a2,	// (0x0003b005) cell_ai5_widget_pane_g12_ParamLimits

0xe7a2,	// (0x0003b005) cell_ai5_widget_pane_g12

0xe7ae,	// (0x0003b011) cell_ai5_widget_pane_g13_ParamLimits

0xe7ae,	// (0x0003b011) cell_ai5_widget_pane_g13

0xe8dd,	// (0x0003b140) cell_ai5_widget_pane_t11_ParamLimits

0xe8dd,	// (0x0003b140) cell_ai5_widget_pane_t11

0xe8ef,	// (0x0003b152) cell_ai5_widget_pane_t12_ParamLimits

0xe8ef,	// (0x0003b152) cell_ai5_widget_pane_t12

0x77a0,	// (0x00034003) cell_ituss_key_pane_g4_ParamLimits

0x77a0,	// (0x00034003) cell_ituss_key_pane_g4

0x77bc,	// (0x0003401f) cell_ituss_key_pane_g5_ParamLimits

0x77bc,	// (0x0003401f) cell_ituss_key_pane_g5

0x77d8,	// (0x0003403b) cell_ituss_key_pane_g6_ParamLimits

0x77d8,	// (0x0003403b) cell_ituss_key_pane_g6

0x99d3,	// (0x00036236) bg_icf_pane_g1

0xf34c,	// (0x0003bbaf) bg_icf_pane_g2

0xf358,	// (0x0003bbbb) bg_icf_pane_g3

0xf362,	// (0x0003bbc5) bg_icf_pane_g4

0xf36e,	// (0x0003bbd1) bg_icf_pane_g5

0xf378,	// (0x0003bbdb) bg_icf_pane_g6

0xf384,	// (0x0003bbe7) bg_icf_pane_g7

0xf38e,	// (0x0003bbf1) bg_icf_pane_g8

0xf39a,	// (0x0003bbfd) bg_icf_pane_g9

0x0008,

0xfef3,	// (0x0003c756) bg_icf_pane_g

0xf1d1,	// (0x0003ba34) popup_hyb_candi_window_ParamLimits

0xf1d1,	// (0x0003ba34) popup_hyb_candi_window

0x9a47,	// (0x000362aa) bg_popup_sub_pane_cp01_ParamLimits

0x9a47,	// (0x000362aa) bg_popup_sub_pane_cp01

0xf467,	// (0x0003bcca) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0003bcca) entry_hyb_candi_pane

0xf476,	// (0x0003bcd9) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0003bcd9) grid_hyb_candi_pane

0xf48b,	// (0x0003bcee) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0003bcee) grid_hyb_phrase_pane

0xf49a,	// (0x0003bcfd) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0003bcfd) cell_hyb_candi_pane

0xf4bd,	// (0x0003bd20) cell_hyb_candi_scroll_pane

0x8b4d,	// (0x000353b0) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0003bd29) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0003bd37) cell_hyb_phrase_pane

0x8b4d,	// (0x000353b0) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0003bd40) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0003bd4e) entry_hyb_candi_pane_t1

0x9185,	// (0x000359e8) input_focus_pane_cp06

0xf4f9,	// (0x0003bd5c) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0003bd64) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0003bd6c) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0003bd74) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0003bd7c) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0003bd84) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

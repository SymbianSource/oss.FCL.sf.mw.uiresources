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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001c3b0 };

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
0x7b2f,	// (0x00023edf) Screen

0x7b3b,	// (0x00023eeb) application_window_ParamLimits

0x7b3b,	// (0x00023eeb) application_window

0x2c4e,	// (0x0001effe) screen_g1

0x56c6,	// (0x00021a76) area_bottom_pane_ParamLimits

0x56c6,	// (0x00021a76) area_bottom_pane

0x5786,	// (0x00021b36) area_top_pane_ParamLimits

0x5786,	// (0x00021b36) area_top_pane

0x581a,	// (0x00021bca) main_pane_ParamLimits

0x581a,	// (0x00021bca) main_pane

0x7b4b,	// (0x00023efb) misc_graphics

0x9559,	// (0x00025909) battery_pane_ParamLimits

0x9559,	// (0x00025909) battery_pane

0xa247,	// (0x000265f7) bg_status_flat_pane_g8

0xa24f,	// (0x000265ff) bg_status_flat_pane_g9

0x9621,	// (0x000259d1) context_pane_ParamLimits

0x9621,	// (0x000259d1) context_pane

0x9737,	// (0x00025ae7) navi_pane_ParamLimits

0x9737,	// (0x00025ae7) navi_pane

0x97bb,	// (0x00025b6b) signal_pane_ParamLimits

0x97bb,	// (0x00025b6b) signal_pane

0x0008,

0xf854,	// (0x0002bc04) bg_status_flat_pane_g

0x9828,	// (0x00025bd8) status_pane_g1_ParamLimits

0x9828,	// (0x00025bd8) status_pane_g1

0x983c,	// (0x00025bec) status_pane_g2_ParamLimits

0x983c,	// (0x00025bec) status_pane_g2

0x9848,	// (0x00025bf8) status_pane_g3_ParamLimits

0x9848,	// (0x00025bf8) status_pane_g3

0x0004,

0xf77b,	// (0x0002bb2b) status_pane_g_ParamLimits

0xf77b,	// (0x0002bb2b) status_pane_g

0x987c,	// (0x00025c2c) title_pane_ParamLimits

0x987c,	// (0x00025c2c) title_pane

0x98b9,	// (0x00025c69) uni_indicator_pane_ParamLimits

0x98b9,	// (0x00025c69) uni_indicator_pane

0x9489,	// (0x00025839) bg_list_pane_ParamLimits

0x9489,	// (0x00025839) bg_list_pane

0x4c80,	// (0x00021030) find_pane

0x94a9,	// (0x00025859) listscroll_app_pane_ParamLimits

0x94a9,	// (0x00025859) listscroll_app_pane

0x94b5,	// (0x00025865) listscroll_form_pane

0x4c88,	// (0x00021038) listscroll_gen_pane_ParamLimits

0x4c88,	// (0x00021038) listscroll_gen_pane

0x60f3,	// (0x000224a3) listscroll_set_pane

0x86ac,	// (0x00024a5c) main_idle_act_pane

0x9185,	// (0x00025535) main_idle_trad_pane

0x9185,	// (0x00025535) main_list_empty_pane

0x94a9,	// (0x00025859) main_midp_pane

0x94cf,	// (0x0002587f) main_pane_g1_ParamLimits

0x94cf,	// (0x0002587f) main_pane_g1

0x60fb,	// (0x000224ab) popup_ai_message_window_ParamLimits

0x60fb,	// (0x000224ab) popup_ai_message_window

0x61a1,	// (0x00022551) popup_fep_china_uni_window_ParamLimits

0x61a1,	// (0x00022551) popup_fep_china_uni_window

0x61fd,	// (0x000225ad) popup_fep_japan_candidate_window_ParamLimits

0x61fd,	// (0x000225ad) popup_fep_japan_candidate_window

0x621d,	// (0x000225cd) popup_fep_japan_predictive_window_ParamLimits

0x621d,	// (0x000225cd) popup_fep_japan_predictive_window

0x624d,	// (0x000225fd) popup_find_window

0x625a,	// (0x0002260a) popup_grid_graphic_window_ParamLimits

0x625a,	// (0x0002260a) popup_grid_graphic_window

0x6286,	// (0x00022636) popup_large_graphic_colour_window

0x62ac,	// (0x0002265c) popup_menu_window_ParamLimits

0x62ac,	// (0x0002265c) popup_menu_window

0x6464,	// (0x00022814) popup_note_image_window

0x6450,	// (0x00022800) popup_note_wait_window_ParamLimits

0x6450,	// (0x00022800) popup_note_wait_window

0x6450,	// (0x00022800) popup_note_window_ParamLimits

0x6450,	// (0x00022800) popup_note_window

0x64ba,	// (0x0002286a) popup_query_code_window_ParamLimits

0x64ba,	// (0x0002286a) popup_query_code_window

0x64ce,	// (0x0002287e) popup_query_data_code_window_ParamLimits

0x64ce,	// (0x0002287e) popup_query_data_code_window

0x64eb,	// (0x0002289b) popup_query_data_window_ParamLimits

0x64eb,	// (0x0002289b) popup_query_data_window

0x6507,	// (0x000228b7) popup_query_sat_info_window_ParamLimits

0x6507,	// (0x000228b7) popup_query_sat_info_window

0x6540,	// (0x000228f0) popup_snote_single_graphic_window_ParamLimits

0x6540,	// (0x000228f0) popup_snote_single_graphic_window

0x6540,	// (0x000228f0) popup_snote_single_text_window_ParamLimits

0x6540,	// (0x000228f0) popup_snote_single_text_window

0x6555,	// (0x00022905) popup_sub_window_general

0x6685,	// (0x00022a35) popup_window_general_ParamLimits

0x6685,	// (0x00022a35) popup_window_general

0x94dd,	// (0x0002588d) power_save_pane

0x5f81,	// (0x00022331) control_pane_g1_ParamLimits

0x5f81,	// (0x00022331) control_pane_g1

0x5fa8,	// (0x00022358) control_pane_g2_ParamLimits

0x5fa8,	// (0x00022358) control_pane_g2

0x944c,	// (0x000257fc) control_pane_g3_ParamLimits

0x944c,	// (0x000257fc) control_pane_g3

0x0007,

0xf763,	// (0x0002bb13) control_pane_g_ParamLimits

0xf763,	// (0x0002bb13) control_pane_g

0x5ff2,	// (0x000223a2) control_pane_t1_ParamLimits

0x5ff2,	// (0x000223a2) control_pane_t1

0x6048,	// (0x000223f8) control_pane_t2_ParamLimits

0x6048,	// (0x000223f8) control_pane_t2

0x0002,

0xf774,	// (0x0002bb24) control_pane_t_ParamLimits

0xf774,	// (0x0002bb24) control_pane_t

0x9371,	// (0x00025721) navi_navi_volume_pane_cp1

0x9379,	// (0x00025729) status_small_icon_pane

0x9381,	// (0x00025731) status_small_pane_g1_ParamLimits

0x9381,	// (0x00025731) status_small_pane_g1

0x93b5,	// (0x00025765) status_small_pane_g2_ParamLimits

0x93b5,	// (0x00025765) status_small_pane_g2

0x93c1,	// (0x00025771) status_small_pane_g3_ParamLimits

0x93c1,	// (0x00025771) status_small_pane_g3

0x93cd,	// (0x0002577d) status_small_pane_g4_ParamLimits

0x93cd,	// (0x0002577d) status_small_pane_g4

0x93d9,	// (0x00025789) status_small_pane_g5_ParamLimits

0x93d9,	// (0x00025789) status_small_pane_g5

0x93e7,	// (0x00025797) status_small_pane_g6_ParamLimits

0x93e7,	// (0x00025797) status_small_pane_g6

0x0007,

0xf752,	// (0x0002bb02) status_small_pane_g_ParamLimits

0xf752,	// (0x0002bb02) status_small_pane_g

0x9416,	// (0x000257c6) status_small_pane_t1

0x9438,	// (0x000257e8) status_small_wait_pane_ParamLimits

0x9438,	// (0x000257e8) status_small_wait_pane

0x8beb,	// (0x00024f9b) aid_levels_signal_ParamLimits

0x8beb,	// (0x00024f9b) aid_levels_signal

0x8bfd,	// (0x00024fad) signal_pane_g1_ParamLimits

0x8bfd,	// (0x00024fad) signal_pane_g1

0x8c12,	// (0x00024fc2) signal_pane_g2_ParamLimits

0x8c12,	// (0x00024fc2) signal_pane_g2

0x0003,

0xf6e3,	// (0x0002ba93) signal_pane_g_ParamLimits

0xf6e3,	// (0x0002ba93) signal_pane_g

0x8c4d,	// (0x00024ffd) context_pane_g1

0x7b55,	// (0x00023f05) title_pane_g1

0x7b8b,	// (0x00023f3b) title_pane_t1

0x7bf3,	// (0x00023fa3) title_pane_t2

0x7c19,	// (0x00023fc9) title_pane_t3

0x0002,

0xf532,	// (0x0002b8e2) title_pane_t

0x98d1,	// (0x00025c81) aid_levels_battery_ParamLimits

0x98d1,	// (0x00025c81) aid_levels_battery

0x98e5,	// (0x00025c95) battery_pane_g1_ParamLimits

0x98e5,	// (0x00025c95) battery_pane_g1

0x98fb,	// (0x00025cab) battery_pane_g2_ParamLimits

0x98fb,	// (0x00025cab) battery_pane_g2

0x0001,

0xf786,	// (0x0002bb36) battery_pane_g_ParamLimits

0xf786,	// (0x0002bb36) battery_pane_g

0xab7d,	// (0x00026f2d) uni_indicator_pane_g1

0xab93,	// (0x00026f43) uni_indicator_pane_g2

0xaba9,	// (0x00026f59) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0002bcac) uni_indicator_pane_g

0x8fee,	// (0x0002539e) navi_icon_pane_ParamLimits

0x8fee,	// (0x0002539e) navi_icon_pane

0x8f2c,	// (0x000252dc) navi_midp_pane

0x900a,	// (0x000253ba) navi_navi_pane

0x9014,	// (0x000253c4) navi_text_pane_ParamLimits

0x9014,	// (0x000253c4) navi_text_pane

0x2c4e,	// (0x0001effe) status_small_wait_pane_g1

0x806e,	// (0x0002441e) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0002bca7) status_small_wait_pane_g

0xa8a2,	// (0x00026c52) navi_navi_icon_text_pane

0xa8aa,	// (0x00026c5a) navi_navi_pane_g1_ParamLimits

0xa8aa,	// (0x00026c5a) navi_navi_pane_g1

0xa8bc,	// (0x00026c6c) navi_navi_pane_g2_ParamLimits

0xa8bc,	// (0x00026c6c) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0002bc75) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0002bc75) navi_navi_pane_g

0xa8ce,	// (0x00026c7e) navi_navi_tabs_pane

0xa8d7,	// (0x00026c87) navi_navi_text_pane

0xa8a2,	// (0x00026c52) navi_navi_volume_pane

0xa87e,	// (0x00026c2e) navi_text_pane_t1

0xa872,	// (0x00026c22) navi_icon_pane_g1

0xa7c5,	// (0x00026b75) navi_navi_text_pane_t1

0x6925,	// (0x00022cd5) navi_navi_volume_pane_g1

0x692d,	// (0x00022cdd) volume_small_pane

0xa72b,	// (0x00026adb) navi_navi_icon_text_pane_g1

0xa733,	// (0x00026ae3) navi_navi_icon_text_pane_t1

0x900a,	// (0x000253ba) navi_tabs_2_long_pane

0x900a,	// (0x000253ba) navi_tabs_2_pane

0x900a,	// (0x000253ba) navi_tabs_3_long_pane

0x900a,	// (0x000253ba) navi_tabs_3_pane

0x900a,	// (0x000253ba) navi_tabs_4_pane

0x6905,	// (0x00022cb5) tabs_2_active_pane_ParamLimits

0x6905,	// (0x00022cb5) tabs_2_active_pane

0x6915,	// (0x00022cc5) tabs_2_passive_pane_ParamLimits

0x6915,	// (0x00022cc5) tabs_2_passive_pane

0x68d3,	// (0x00022c83) tabs_3_active_pane_ParamLimits

0x68d3,	// (0x00022c83) tabs_3_active_pane

0x68e3,	// (0x00022c93) tabs_3_passive_pane_ParamLimits

0x68e3,	// (0x00022c93) tabs_3_passive_pane

0x68f4,	// (0x00022ca4) tabs_3_passive_pane_cp_ParamLimits

0x68f4,	// (0x00022ca4) tabs_3_passive_pane_cp

0x688f,	// (0x00022c3f) tabs_4_active_pane_ParamLimits

0x688f,	// (0x00022c3f) tabs_4_active_pane

0x68a0,	// (0x00022c50) tabs_4_passive_pane_ParamLimits

0x68a0,	// (0x00022c50) tabs_4_passive_pane

0x68b1,	// (0x00022c61) tabs_4_passive_pane_cp_ParamLimits

0x68b1,	// (0x00022c61) tabs_4_passive_pane_cp

0x68c2,	// (0x00022c72) tabs_4_passive_pane_cp2_ParamLimits

0x68c2,	// (0x00022c72) tabs_4_passive_pane_cp2

0x686b,	// (0x00022c1b) tabs_2_long_active_pane_ParamLimits

0x686b,	// (0x00022c1b) tabs_2_long_active_pane

0x687d,	// (0x00022c2d) tabs_2_long_passive_pane_ParamLimits

0x687d,	// (0x00022c2d) tabs_2_long_passive_pane

0x682c,	// (0x00022bdc) tabs_3_long_active_pane_ParamLimits

0x682c,	// (0x00022bdc) tabs_3_long_active_pane

0x683f,	// (0x00022bef) tabs_3_long_passive_pane_ParamLimits

0x683f,	// (0x00022bef) tabs_3_long_passive_pane

0x6858,	// (0x00022c08) tabs_3_long_passive_pane_cp_ParamLimits

0x6858,	// (0x00022c08) tabs_3_long_passive_pane_cp

0x67d2,	// (0x00022b82) volume_small_pane_g1

0x67db,	// (0x00022b8b) volume_small_pane_g2

0x67e4,	// (0x00022b94) volume_small_pane_g3

0x67ed,	// (0x00022b9d) volume_small_pane_g4

0x67f6,	// (0x00022ba6) volume_small_pane_g5

0x67ff,	// (0x00022baf) volume_small_pane_g6

0x6808,	// (0x00022bb8) volume_small_pane_g7

0x6811,	// (0x00022bc1) volume_small_pane_g8

0x681a,	// (0x00022bca) volume_small_pane_g9

0x6823,	// (0x00022bd3) volume_small_pane_g10

0x0009,

0xf891,	// (0x0002bc41) volume_small_pane_g

0x7c2b,	// (0x00023fdb) bg_active_tab_pane_cp2_ParamLimits

0x7c2b,	// (0x00023fdb) bg_active_tab_pane_cp2

0x7c39,	// (0x00023fe9) tabs_3_active_pane_g1

0x7c41,	// (0x00023ff1) tabs_3_active_pane_t1

0x7c2b,	// (0x00023fdb) bg_passive_tab_pane_cp2_ParamLimits

0x7c2b,	// (0x00023fdb) bg_passive_tab_pane_cp2

0x7c39,	// (0x00023fe9) tabs_3_passive_pane_g1

0x7c41,	// (0x00023ff1) tabs_3_passive_pane_t1

0x7c2b,	// (0x00023fdb) bg_active_tab_pane_cp3_ParamLimits

0x7c2b,	// (0x00023fdb) bg_active_tab_pane_cp3

0x7c53,	// (0x00024003) tabs_4_active_pane_g1

0x7c5b,	// (0x0002400b) tabs_4_active_pane_t1

0x7c2b,	// (0x00023fdb) bg_passive_tab_pane_cp3_ParamLimits

0x7c2b,	// (0x00023fdb) bg_passive_tab_pane_cp3

0x7c53,	// (0x00024003) tabs_4_1_passive_pane_g1

0x7c5b,	// (0x0002400b) tabs_4_1_passive_pane_t1

0x94a9,	// (0x00025859) list_highlight_pane_cp2

0xadf0,	// (0x000271a0) list_set_pane_ParamLimits

0xadf0,	// (0x000271a0) list_set_pane

0xae96,	// (0x00027246) main_pane_set_t1_ParamLimits

0xae96,	// (0x00027246) main_pane_set_t1

0xaeb6,	// (0x00027266) main_pane_set_t2_ParamLimits

0xaeb6,	// (0x00027266) main_pane_set_t2

0xaeca,	// (0x0002727a) main_pane_set_t3_ParamLimits

0xaeca,	// (0x0002727a) main_pane_set_t3

0xaedc,	// (0x0002728c) main_pane_set_t4_ParamLimits

0xaedc,	// (0x0002728c) main_pane_set_t4

0x0003,

0xf961,	// (0x0002bd11) main_pane_set_t_ParamLimits

0xf961,	// (0x0002bd11) main_pane_set_t

0xaeee,	// (0x0002729e) setting_code_pane

0xaefa,	// (0x000272aa) setting_slider_graphic_pane

0xaefa,	// (0x000272aa) setting_slider_pane

0xaefa,	// (0x000272aa) setting_text_pane

0xaefa,	// (0x000272aa) setting_volume_pane

0x5a69,	// (0x00021e19) volume_set_pane

0x7c2b,	// (0x00023fdb) bg_set_opt_pane_cp

0x5a71,	// (0x00021e21) setting_slider_pane_t1

0x5a8a,	// (0x00021e3a) setting_slider_pane_t2

0x5aa4,	// (0x00021e54) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002b8e9) setting_slider_pane_t

0x5abc,	// (0x00021e6c) slider_set_pane

0x7b4b,	// (0x00023efb) bg_set_opt_pane_cp2

0x7c6d,	// (0x0002401d) setting_slider_graphic_pane_g1

0x5ad2,	// (0x00021e82) setting_slider_graphic_pane_t1

0x5ae2,	// (0x00021e92) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002b8f0) setting_slider_graphic_pane_t

0x5af2,	// (0x00021ea2) slider_set_pane_cp

0x7b4b,	// (0x00023efb) input_focus_pane_cp1

0xadaf,	// (0x0002715f) list_set_text_pane

0x2c4e,	// (0x0001effe) setting_text_pane_g1

0x7b4b,	// (0x00023efb) input_focus_pane_cp2

0x2c4e,	// (0x0001effe) setting_code_pane_g1

0x7c76,	// (0x00024026) setting_code_pane_t1

0x44c7,	// (0x00020877) set_text_pane_t1_ParamLimits

0x44c7,	// (0x00020877) set_text_pane_t1

0x8510,	// (0x000248c0) set_opt_bg_pane_g1

0x8518,	// (0x000248c8) set_opt_bg_pane_g2

0xad89,	// (0x00027139) set_opt_bg_pane_g3

0x8528,	// (0x000248d8) set_opt_bg_pane_g4

0x8530,	// (0x000248e0) set_opt_bg_pane_g5

0x8538,	// (0x000248e8) set_opt_bg_pane_g6

0xad93,	// (0x00027143) set_opt_bg_pane_g7

0xad9b,	// (0x0002714b) set_opt_bg_pane_g8

0xada5,	// (0x00027155) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0002bcfe) set_opt_bg_pane_g

0xad7c,	// (0x0002712c) slider_set_pane_g1

0x699a,	// (0x00022d4a) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0002bcef) slider_set_pane_g

0x6936,	// (0x00022ce6) volume_set_pane_g1

0x693e,	// (0x00022cee) volume_set_pane_g2

0x6946,	// (0x00022cf6) volume_set_pane_g3

0x694e,	// (0x00022cfe) volume_set_pane_g4

0x6956,	// (0x00022d06) volume_set_pane_g5

0x695e,	// (0x00022d0e) volume_set_pane_g6

0x6966,	// (0x00022d16) volume_set_pane_g7

0x696e,	// (0x00022d1e) volume_set_pane_g8

0x6976,	// (0x00022d26) volume_set_pane_g9

0x697e,	// (0x00022d2e) volume_set_pane_g10

0x0009,

0xf917,	// (0x0002bcc7) volume_set_pane_g

0x7c84,	// (0x00024034) indicator_pane_ParamLimits

0x7c84,	// (0x00024034) indicator_pane

0x7c90,	// (0x00024040) main_idle_pane_g2_ParamLimits

0x7c90,	// (0x00024040) main_idle_pane_g2

0x7cb8,	// (0x00024068) main_pane_idle_g1_ParamLimits

0x7cb8,	// (0x00024068) main_pane_idle_g1

0x7cc5,	// (0x00024075) popup_clock_digital_analogue_window_ParamLimits

0x7cc5,	// (0x00024075) popup_clock_digital_analogue_window

0x7cdc,	// (0x0002408c) soft_indicator_pane_ParamLimits

0x7cdc,	// (0x0002408c) soft_indicator_pane

0x7ce8,	// (0x00024098) wallpaper_pane_ParamLimits

0x7ce8,	// (0x00024098) wallpaper_pane

0x2c4e,	// (0x0001effe) wallpaper_pane_g1

0x7cfc,	// (0x000240ac) indicator_pane_g1_ParamLimits

0x7cfc,	// (0x000240ac) indicator_pane_g1

0xb1ca,	// (0x0002757a) navi_navi_icon_text_pane_srt_g1

0x7d17,	// (0x000240c7) soft_indicator_pane_t1

0x7d31,	// (0x000240e1) aid_ps_area_pane

0x7d42,	// (0x000240f2) aid_ps_clock_pane

0x7d50,	// (0x00024100) aid_ps_indicator_pane

0x7d5c,	// (0x0002410c) indicator_ps_pane_ParamLimits

0x7d5c,	// (0x0002410c) indicator_ps_pane

0x7d6b,	// (0x0002411b) power_save_pane_g1_ParamLimits

0x7d6b,	// (0x0002411b) power_save_pane_g1

0x7d77,	// (0x00024127) power_save_pane_g2_ParamLimits

0x7d77,	// (0x00024127) power_save_pane_g2

0x567a,	// (0x00021a2a) aid_navinavi_width_pane

0x7d31,	// (0x000240e1) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002b8f5) power_save_pane_g_ParamLimits

0xf545,	// (0x0002b8f5) power_save_pane_g

0x7d85,	// (0x00024135) power_save_pane_t1_ParamLimits

0x7d85,	// (0x00024135) power_save_pane_t1

0x7d42,	// (0x000240f2) aid_ps_clock_pane_ParamLimits

0x7d50,	// (0x00024100) aid_ps_indicator_pane_ParamLimits

0x7d97,	// (0x00024147) power_save_pane_t4_ParamLimits

0x7d97,	// (0x00024147) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002b8fa) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002b8fa) power_save_pane_t

0x7dc1,	// (0x00024171) power_save_t3_ParamLimits

0x7dc1,	// (0x00024171) power_save_t3

0x7dac,	// (0x0002415c) power_save_t2_ParamLimits

0x7dac,	// (0x0002415c) power_save_t2

0x7dd6,	// (0x00024186) indicator_ps_pane_g1

0x7ddf,	// (0x0002418f) ai_gene_pane_ParamLimits

0x7ddf,	// (0x0002418f) ai_gene_pane

0x7deb,	// (0x0002419b) ai_links_pane_ParamLimits

0x7deb,	// (0x0002419b) ai_links_pane

0x7df7,	// (0x000241a7) indicator_pane_cp1_ParamLimits

0x7df7,	// (0x000241a7) indicator_pane_cp1

0x7e03,	// (0x000241b3) main_pane_idle_g1_cp_ParamLimits

0x7e03,	// (0x000241b3) main_pane_idle_g1_cp

0x7e0f,	// (0x000241bf) popup_ai_links_title_window

0x7e18,	// (0x000241c8) soft_indicator_pane_cp1_ParamLimits

0x7e18,	// (0x000241c8) soft_indicator_pane_cp1

0xab6b,	// (0x00026f1b) ai_links_pane_g1

0xab74,	// (0x00026f24) grid_ai_links_pane

0xab4e,	// (0x00026efe) ai_gene_pane_1

0xab59,	// (0x00026f09) ai_gene_pane_2

0xab62,	// (0x00026f12) list_highlight_pane_cp4

0xab32,	// (0x00026ee2) cell_ai_link_pane_ParamLimits

0xab32,	// (0x00026ee2) cell_ai_link_pane

0xab2a,	// (0x00026eda) cell_ai_link_pane_g1

0x806e,	// (0x0002441e) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0002bca2) cell_ai_link_pane_g

0x7b4b,	// (0x00023efb) grid_highlight_cp2

0x7b4b,	// (0x00023efb) bg_popup_sub_pane_cp1

0x7e32,	// (0x000241e2) popup_ai_links_title_window_t1

0xaa78,	// (0x00026e28) ai_gene_pane_1_g1_ParamLimits

0xaa78,	// (0x00026e28) ai_gene_pane_1_g1

0xaa84,	// (0x00026e34) ai_gene_pane_1_g2_ParamLimits

0xaa84,	// (0x00026e34) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0002bc98) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0002bc98) ai_gene_pane_1_g

0xaa91,	// (0x00026e41) ai_gene_pane_1_t1_ParamLimits

0xaa91,	// (0x00026e41) ai_gene_pane_1_t1

0xaac5,	// (0x00026e75) grid_ai_soft_ind_pane

0xaa63,	// (0x00026e13) ai_gene_pane_2_t1_ParamLimits

0xaa63,	// (0x00026e13) ai_gene_pane_2_t1

0x7e41,	// (0x000241f1) main_pane_empty_t1_ParamLimits

0x7e41,	// (0x000241f1) main_pane_empty_t1

0x7e59,	// (0x00024209) main_pane_empty_t2_ParamLimits

0x7e59,	// (0x00024209) main_pane_empty_t2

0x7e6e,	// (0x0002421e) main_pane_empty_t3_ParamLimits

0x7e6e,	// (0x0002421e) main_pane_empty_t3

0x7e80,	// (0x00024230) main_pane_empty_t4_ParamLimits

0x7e80,	// (0x00024230) main_pane_empty_t4

0x7e92,	// (0x00024242) main_pane_empty_t5_ParamLimits

0x7e92,	// (0x00024242) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002b8ff) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002b8ff) main_pane_empty_t

0x85d7,	// (0x00024987) bg_popup_window_pane_ParamLimits

0x85d7,	// (0x00024987) bg_popup_window_pane

0xa7d3,	// (0x00026b83) find_popup_pane_cp2_ParamLimits

0xa7d3,	// (0x00026b83) find_popup_pane_cp2

0xa7df,	// (0x00026b8f) heading_pane_ParamLimits

0xa7df,	// (0x00026b8f) heading_pane

0x7b4b,	// (0x00023efb) bg_popup_sub_pane

0xa74d,	// (0x00026afd) bg_popup_window_pane_g1_ParamLimits

0xa74d,	// (0x00026afd) bg_popup_window_pane_g1

0xa759,	// (0x00026b09) bg_popup_window_pane_g2_ParamLimits

0xa759,	// (0x00026b09) bg_popup_window_pane_g2

0xa765,	// (0x00026b15) bg_popup_window_pane_g3_ParamLimits

0xa765,	// (0x00026b15) bg_popup_window_pane_g3

0xa771,	// (0x00026b21) bg_popup_window_pane_g4_ParamLimits

0xa771,	// (0x00026b21) bg_popup_window_pane_g4

0xa77d,	// (0x00026b2d) bg_popup_window_pane_g5_ParamLimits

0xa77d,	// (0x00026b2d) bg_popup_window_pane_g5

0xa789,	// (0x00026b39) bg_popup_window_pane_g6_ParamLimits

0xa789,	// (0x00026b39) bg_popup_window_pane_g6

0xa795,	// (0x00026b45) bg_popup_window_pane_g7_ParamLimits

0xa795,	// (0x00026b45) bg_popup_window_pane_g7

0xa7a1,	// (0x00026b51) bg_popup_window_pane_g8_ParamLimits

0xa7a1,	// (0x00026b51) bg_popup_window_pane_g8

0xa7ad,	// (0x00026b5d) bg_popup_window_pane_g9_ParamLimits

0xa7ad,	// (0x00026b5d) bg_popup_window_pane_g9

0xa7b9,	// (0x00026b69) bg_popup_window_pane_g10_ParamLimits

0xa7b9,	// (0x00026b69) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0002bc60) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0002bc60) bg_popup_window_pane_g

0xa6e2,	// (0x00026a92) bg_popup_heading_pane_ParamLimits

0xa6e2,	// (0x00026a92) bg_popup_heading_pane

0x6a22,	// (0x00022dd2) tabs_4_passive_pane_cp_srt_ParamLimits

0x6a22,	// (0x00022dd2) tabs_4_passive_pane_cp_srt

0x6a34,	// (0x00022de4) tabs_4_passive_pane_srt_ParamLimits

0xa6f6,	// (0x00026aa6) heading_pane_g2

0x6a34,	// (0x00022de4) tabs_4_passive_pane_srt

0x94a9,	// (0x00025859) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94a9,	// (0x00025859) bg_passive_tab_pane_cp3_srt

0xa6fe,	// (0x00026aae) heading_pane_t1_ParamLimits

0xa6fe,	// (0x00026aae) heading_pane_t1

0xa715,	// (0x00026ac5) heading_pane_t2_ParamLimits

0xa715,	// (0x00026ac5) heading_pane_t2

0x0001,

0xf8ab,	// (0x0002bc5b) heading_pane_t_ParamLimits

0xf8ab,	// (0x0002bc5b) heading_pane_t

0xa20f,	// (0x000265bf) bg_popup_heading_pane_g1

0xa2be,	// (0x0002666e) bg_popup_heading_pane_g2

0xa2c8,	// (0x00026678) bg_popup_heading_pane_g3

0xa2d2,	// (0x00026682) bg_popup_heading_pane_g4

0xa2dc,	// (0x0002668c) bg_popup_heading_pane_g5

0xa2e6,	// (0x00026696) bg_popup_heading_pane_g6

0xa2ee,	// (0x0002669e) bg_popup_heading_pane_g7

0xa2f6,	// (0x000266a6) bg_popup_heading_pane_g8

0xa300,	// (0x000266b0) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0002bc17) bg_popup_heading_pane_g

0x99d3,	// (0x00025d83) bg_popup_sub_pane_g1

0x99db,	// (0x00025d8b) bg_popup_sub_pane_g2

0x99e3,	// (0x00025d93) bg_popup_sub_pane_g3

0x99eb,	// (0x00025d9b) bg_popup_sub_pane_g4

0x99f3,	// (0x00025da3) bg_popup_sub_pane_g5

0x99fb,	// (0x00025dab) bg_popup_sub_pane_g6

0x9a03,	// (0x00025db3) bg_popup_sub_pane_g7

0x9a0b,	// (0x00025dbb) bg_popup_sub_pane_g8

0x9a13,	// (0x00025dc3) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0002bbf1) bg_popup_sub_pane_g

0x7ea6,	// (0x00024256) bg_popup_window_pane_cp5_ParamLimits

0x7ea6,	// (0x00024256) bg_popup_window_pane_cp5

0x7ec2,	// (0x00024272) popup_note_window_g1_ParamLimits

0x7ec2,	// (0x00024272) popup_note_window_g1

0x7ece,	// (0x0002427e) popup_note_window_t1_ParamLimits

0x7ece,	// (0x0002427e) popup_note_window_t1

0x7ee4,	// (0x00024294) popup_note_window_t2_ParamLimits

0x7ee4,	// (0x00024294) popup_note_window_t2

0x7efa,	// (0x000242aa) popup_note_window_t3_ParamLimits

0x7efa,	// (0x000242aa) popup_note_window_t3

0x7f10,	// (0x000242c0) popup_note_window_t4_ParamLimits

0x7f10,	// (0x000242c0) popup_note_window_t4

0x7f38,	// (0x000242e8) popup_note_window_t5_ParamLimits

0x7f38,	// (0x000242e8) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002b90a) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002b90a) popup_note_window_t

0x7f82,	// (0x00024332) bg_popup_window_pane_cp6_ParamLimits

0x7f82,	// (0x00024332) bg_popup_window_pane_cp6

0xa18b,	// (0x0002653b) popup_note_image_window_g1_ParamLimits

0xa18b,	// (0x0002653b) popup_note_image_window_g1

0xa197,	// (0x00026547) popup_note_image_window_g2_ParamLimits

0xa197,	// (0x00026547) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0002bbe5) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0002bbe5) popup_note_image_window_g

0xa1b0,	// (0x00026560) popup_note_image_window_t1_ParamLimits

0xa1b0,	// (0x00026560) popup_note_image_window_t1

0xa1c9,	// (0x00026579) popup_note_image_window_t2_ParamLimits

0xa1c9,	// (0x00026579) popup_note_image_window_t2

0xa1e2,	// (0x00026592) popup_note_image_window_t3_ParamLimits

0xa1e2,	// (0x00026592) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0002bbea) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0002bbea) popup_note_image_window_t

0xa04c,	// (0x000263fc) bg_popup_window_pane_cp7_ParamLimits

0xa04c,	// (0x000263fc) bg_popup_window_pane_cp7

0xa07c,	// (0x0002642c) popup_note_wait_window_g1_ParamLimits

0xa07c,	// (0x0002642c) popup_note_wait_window_g1

0xa088,	// (0x00026438) popup_note_wait_window_g2_ParamLimits

0xa088,	// (0x00026438) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0002bbd3) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0002bbd3) popup_note_wait_window_g

0xa0a0,	// (0x00026450) popup_note_wait_window_t1_ParamLimits

0xa0a0,	// (0x00026450) popup_note_wait_window_t1

0xa0c7,	// (0x00026477) popup_note_wait_window_t2_ParamLimits

0xa0c7,	// (0x00026477) popup_note_wait_window_t2

0xa0e4,	// (0x00026494) popup_note_wait_window_t3_ParamLimits

0xa0e4,	// (0x00026494) popup_note_wait_window_t3

0xa0f7,	// (0x000264a7) popup_note_wait_window_t4_ParamLimits

0xa0f7,	// (0x000264a7) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0002bbda) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0002bbda) popup_note_wait_window_t

0xa11c,	// (0x000264cc) wait_bar_pane_ParamLimits

0xa11c,	// (0x000264cc) wait_bar_pane

0x7b4b,	// (0x00023efb) wait_anim_pane

0x7b4b,	// (0x00023efb) wait_border_pane

0x2c4e,	// (0x0001effe) wait_anim_pane_g1

0x2c4e,	// (0x0001effe) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0002ba8e) wait_anim_pane_g

0x9ff0,	// (0x000263a0) wait_border_pane_g1

0x9ffb,	// (0x000263ab) wait_border_pane_g2

0xa004,	// (0x000263b4) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0002bbcc) wait_border_pane_g

0x9e5b,	// (0x0002620b) bg_popup_window_pane_cp16_ParamLimits

0x9e5b,	// (0x0002620b) bg_popup_window_pane_cp16

0x9f5b,	// (0x0002630b) indicator_popup_pane_cp4_ParamLimits

0x9f5b,	// (0x0002630b) indicator_popup_pane_cp4

0x9f6f,	// (0x0002631f) popup_query_data_window_t1_ParamLimits

0x9f6f,	// (0x0002631f) popup_query_data_window_t1

0x9f81,	// (0x00026331) popup_query_data_window_t2_ParamLimits

0x9f81,	// (0x00026331) popup_query_data_window_t2

0x9f9a,	// (0x0002634a) popup_query_data_window_t3_ParamLimits

0x9f9a,	// (0x0002634a) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0002bbc5) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0002bbc5) popup_query_data_window_t

0x9fb4,	// (0x00026364) query_popup_data_pane_ParamLimits

0x9fb4,	// (0x00026364) query_popup_data_pane

0x9fc8,	// (0x00026378) query_popup_data_pane_cp1_ParamLimits

0x9fc8,	// (0x00026378) query_popup_data_pane_cp1

0x9e5b,	// (0x0002620b) bg_popup_window_pane_cp10_ParamLimits

0x9e5b,	// (0x0002620b) bg_popup_window_pane_cp10

0x9e8d,	// (0x0002623d) indicator_popup_pane_ParamLimits

0x9e8d,	// (0x0002623d) indicator_popup_pane

0x9eaf,	// (0x0002625f) popup_query_code_window_t1_ParamLimits

0x9eaf,	// (0x0002625f) popup_query_code_window_t1

0x9ec9,	// (0x00026279) popup_query_code_window_t2_ParamLimits

0x9ec9,	// (0x00026279) popup_query_code_window_t2

0x9f12,	// (0x000262c2) popup_query_code_window_t3_ParamLimits

0x9f12,	// (0x000262c2) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0002bbbe) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0002bbbe) popup_query_code_window_t

0x9f41,	// (0x000262f1) query_popup_pane_ParamLimits

0x9f41,	// (0x000262f1) query_popup_pane

0x7f82,	// (0x00024332) bg_popup_window_pane_cp15_ParamLimits

0x7f82,	// (0x00024332) bg_popup_window_pane_cp15

0x7fa0,	// (0x00024350) indicator_popup_pane_cp1_ParamLimits

0x7fa0,	// (0x00024350) indicator_popup_pane_cp1

0x7fb3,	// (0x00024363) indicator_popup_pane_cp2_ParamLimits

0x7fb3,	// (0x00024363) indicator_popup_pane_cp2

0x7fc6,	// (0x00024376) popup_query_data_code_window_g1_ParamLimits

0x7fc6,	// (0x00024376) popup_query_data_code_window_g1

0x7fd9,	// (0x00024389) popup_query_data_code_window_t1_ParamLimits

0x7fd9,	// (0x00024389) popup_query_data_code_window_t1

0x7feb,	// (0x0002439b) popup_query_data_code_window_t2_ParamLimits

0x7feb,	// (0x0002439b) popup_query_data_code_window_t2

0x7ffd,	// (0x000243ad) popup_query_data_code_window_t3_ParamLimits

0x7ffd,	// (0x000243ad) popup_query_data_code_window_t3

0x8013,	// (0x000243c3) popup_query_data_code_window_t4_ParamLimits

0x8013,	// (0x000243c3) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002b915) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002b915) popup_query_data_code_window_t

0x66ef,	// (0x00022a9f) list_single_midp_graphic_pane_g3

0x802b,	// (0x000243db) query_popup_data_pane_cp2_ParamLimits

0x803e,	// (0x000243ee) query_popup_pane_cp2_ParamLimits

0x803e,	// (0x000243ee) query_popup_pane_cp2

0x7b4b,	// (0x00023efb) bg_popup_window_pane_cp11

0x9e3f,	// (0x000261ef) heading_pane_cp5

0x9e47,	// (0x000261f7) listscroll_popup_info_pane

0x7b4b,	// (0x00023efb) input_focus_pane_cp3

0x8051,	// (0x00024401) query_popup_pane_t1

0x805f,	// (0x0002440f) list_popup_info_pane_ParamLimits

0x805f,	// (0x0002440f) list_popup_info_pane

0x806e,	// (0x0002441e) listscroll_popup_info_pane_g1

0x8076,	// (0x00024426) scroll_pane_cp7

0x8080,	// (0x00024430) popup_info_list_pane_t1_ParamLimits

0x8080,	// (0x00024430) popup_info_list_pane_t1

0x809a,	// (0x0002444a) popup_info_list_pane_t2_ParamLimits

0x809a,	// (0x0002444a) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002b91e) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002b91e) popup_info_list_pane_t

0x7b4b,	// (0x00023efb) bg_popup_window_pane_cp12

0xb1e4,	// (0x00027594) find_popup_pane

0x7c2b,	// (0x00023fdb) bg_popup_window_pane_cp3

0x80b4,	// (0x00024464) heading_pane_cp3

0x80c3,	// (0x00024473) listscroll_popup_graphic_pane

0x7b4b,	// (0x00023efb) bg_popup_window_pane_cp4

0x8123,	// (0x000244d3) heading_pane_cp4

0x812d,	// (0x000244dd) listscroll_popup_colour_pane

0x8135,	// (0x000244e5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8135,	// (0x000244e5) cell_large_graphic_colour_none_popup_pane

0x8149,	// (0x000244f9) grid_large_graphic_colour_popup_pane_ParamLimits

0x8149,	// (0x000244f9) grid_large_graphic_colour_popup_pane

0x816d,	// (0x0002451d) listscroll_popup_colour_pane_g1_ParamLimits

0x816d,	// (0x0002451d) listscroll_popup_colour_pane_g1

0x8184,	// (0x00024534) listscroll_popup_colour_pane_g2_ParamLimits

0x8184,	// (0x00024534) listscroll_popup_colour_pane_g2

0x819b,	// (0x0002454b) listscroll_popup_colour_pane_g3_ParamLimits

0x819b,	// (0x0002454b) listscroll_popup_colour_pane_g3

0x81ab,	// (0x0002455b) listscroll_popup_colour_pane_g4_ParamLimits

0x81ab,	// (0x0002455b) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002b923) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002b923) listscroll_popup_colour_pane_g

0x81bb,	// (0x0002456b) scroll_pane_cp6_ParamLimits

0x81bb,	// (0x0002456b) scroll_pane_cp6

0x81cd,	// (0x0002457d) cell_large_graphic_colour_popup_pane_ParamLimits

0x81cd,	// (0x0002457d) cell_large_graphic_colour_popup_pane

0x81ec,	// (0x0002459c) cell_large_graphic_colour_none_popup_pane_t1

0x7b4b,	// (0x00023efb) grid_highlight_pane_cp5

0x81fb,	// (0x000245ab) cell_large_graphic_colour_popup_pane_g1

0x8203,	// (0x000245b3) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002b92c) cell_large_graphic_colour_popup_pane_g

0x820b,	// (0x000245bb) cell_large_graphic_colour_popup_pane_g2_copy1

0x8214,	// (0x000245c4) grid_highlight_pane_cp4

0x821c,	// (0x000245cc) bg_popup_window_pane_cp8_ParamLimits

0x821c,	// (0x000245cc) bg_popup_window_pane_cp8

0x8237,	// (0x000245e7) popup_snote_single_text_window_g1_ParamLimits

0x8237,	// (0x000245e7) popup_snote_single_text_window_g1

0x8249,	// (0x000245f9) popup_snote_single_text_window_t1_ParamLimits

0x8249,	// (0x000245f9) popup_snote_single_text_window_t1

0x825c,	// (0x0002460c) popup_snote_single_text_window_t2_ParamLimits

0x825c,	// (0x0002460c) popup_snote_single_text_window_t2

0x826f,	// (0x0002461f) popup_snote_single_text_window_t3_ParamLimits

0x826f,	// (0x0002461f) popup_snote_single_text_window_t3

0x82a8,	// (0x00024658) popup_snote_single_text_window_t4_ParamLimits

0x82a8,	// (0x00024658) popup_snote_single_text_window_t4

0x82dc,	// (0x0002468c) popup_snote_single_text_window_t5_ParamLimits

0x82dc,	// (0x0002468c) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002b931) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002b931) popup_snote_single_text_window_t

0x830b,	// (0x000246bb) bg_popup_window_pane_cp9_ParamLimits

0x830b,	// (0x000246bb) bg_popup_window_pane_cp9

0x8237,	// (0x000245e7) popup_snote_single_graphic_window_g1_ParamLimits

0x8237,	// (0x000245e7) popup_snote_single_graphic_window_g1

0x8319,	// (0x000246c9) popup_snote_single_graphic_window_g2_ParamLimits

0x8319,	// (0x000246c9) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002b93c) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002b93c) popup_snote_single_graphic_window_g

0x8325,	// (0x000246d5) popup_snote_single_graphic_window_t1_ParamLimits

0x8325,	// (0x000246d5) popup_snote_single_graphic_window_t1

0x8338,	// (0x000246e8) popup_snote_single_graphic_window_t2_ParamLimits

0x8338,	// (0x000246e8) popup_snote_single_graphic_window_t2

0x834b,	// (0x000246fb) popup_snote_single_graphic_window_t3_ParamLimits

0x834b,	// (0x000246fb) popup_snote_single_graphic_window_t3

0x8384,	// (0x00024734) popup_snote_single_graphic_window_t4_ParamLimits

0x8384,	// (0x00024734) popup_snote_single_graphic_window_t4

0x83b8,	// (0x00024768) popup_snote_single_graphic_window_t5_ParamLimits

0x83b8,	// (0x00024768) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002b941) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002b941) popup_snote_single_graphic_window_t

0xb126,	// (0x000274d6) grid_graphic_popup_pane_ParamLimits

0xb126,	// (0x000274d6) grid_graphic_popup_pane

0xb150,	// (0x00027500) listscroll_popup_graphic_pane_g1_ParamLimits

0xb150,	// (0x00027500) listscroll_popup_graphic_pane_g1

0xb164,	// (0x00027514) listscroll_popup_graphic_pane_g2_ParamLimits

0xb164,	// (0x00027514) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0002bd3b) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0002bd3b) listscroll_popup_graphic_pane_g

0xb178,	// (0x00027528) scroll_pane_cp5

0xb0b7,	// (0x00027467) cell_graphic_popup_pane_ParamLimits

0xb0b7,	// (0x00027467) cell_graphic_popup_pane

0xb098,	// (0x00027448) cell_graphic_popup_pane_g1

0xb0a0,	// (0x00027450) cell_graphic_popup_pane_g2

0x820b,	// (0x000245bb) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0002bd34) cell_graphic_popup_pane_g

0xb0a9,	// (0x00027459) cell_graphic_popup_pane_t2

0x8214,	// (0x000245c4) grid_highlight_pane_cp3

0x83f9,	// (0x000247a9) list_gen_pane_ParamLimits

0x83f9,	// (0x000247a9) list_gen_pane

0x842b,	// (0x000247db) scroll_pane

0xaff0,	// (0x000273a0) bg_list_pane_g1_ParamLimits

0xaff0,	// (0x000273a0) bg_list_pane_g1

0xb00d,	// (0x000273bd) bg_list_pane_g2_ParamLimits

0xb00d,	// (0x000273bd) bg_list_pane_g2

0xb022,	// (0x000273d2) bg_list_pane_g3_ParamLimits

0xb022,	// (0x000273d2) bg_list_pane_g3

0xb036,	// (0x000273e6) bg_list_pane_g4_ParamLimits

0xb036,	// (0x000273e6) bg_list_pane_g4

0xb04a,	// (0x000273fa) bg_list_pane_g5_ParamLimits

0xb04a,	// (0x000273fa) bg_list_pane_g5

0x0004,

0xf979,	// (0x0002bd29) bg_list_pane_g_ParamLimits

0xf979,	// (0x0002bd29) bg_list_pane_g

0x4e87,	// (0x00021237) list_double2_graphic_large_graphic_pane_ParamLimits

0x4e87,	// (0x00021237) list_double2_graphic_large_graphic_pane

0x4e87,	// (0x00021237) list_double2_graphic_pane_ParamLimits

0x4e87,	// (0x00021237) list_double2_graphic_pane

0x4e87,	// (0x00021237) list_double2_large_graphic_pane_ParamLimits

0x4e87,	// (0x00021237) list_double2_large_graphic_pane

0x4e87,	// (0x00021237) list_double2_pane_ParamLimits

0x4e87,	// (0x00021237) list_double2_pane

0x4e87,	// (0x00021237) list_double_graphic_heading_pane_ParamLimits

0x4e87,	// (0x00021237) list_double_graphic_heading_pane

0x4e87,	// (0x00021237) list_double_graphic_pane_ParamLimits

0x4e87,	// (0x00021237) list_double_graphic_pane

0x4e87,	// (0x00021237) list_double_heading_pane_ParamLimits

0x4e87,	// (0x00021237) list_double_heading_pane

0x4e87,	// (0x00021237) list_double_large_graphic_pane_ParamLimits

0x4e87,	// (0x00021237) list_double_large_graphic_pane

0x4e87,	// (0x00021237) list_double_number_pane_ParamLimits

0x4e87,	// (0x00021237) list_double_number_pane

0x4e87,	// (0x00021237) list_double_pane_ParamLimits

0x4e87,	// (0x00021237) list_double_pane

0x4e87,	// (0x00021237) list_double_time_pane_ParamLimits

0x4e87,	// (0x00021237) list_double_time_pane

0x4e87,	// (0x00021237) list_setting_number_pane_ParamLimits

0x4e87,	// (0x00021237) list_setting_number_pane

0x4e87,	// (0x00021237) list_setting_pane_ParamLimits

0x4e87,	// (0x00021237) list_setting_pane

0x4ed5,	// (0x00021285) list_single_2graphic_pane_ParamLimits

0x4ed5,	// (0x00021285) list_single_2graphic_pane

0x4ed5,	// (0x00021285) list_single_graphic_heading_pane_ParamLimits

0x4ed5,	// (0x00021285) list_single_graphic_heading_pane

0x4ed5,	// (0x00021285) list_single_graphic_pane_ParamLimits

0x4ed5,	// (0x00021285) list_single_graphic_pane

0x4ed5,	// (0x00021285) list_single_heading_pane_ParamLimits

0x4ed5,	// (0x00021285) list_single_heading_pane

0xafce,	// (0x0002737e) list_single_large_graphic_pane_ParamLimits

0xafce,	// (0x0002737e) list_single_large_graphic_pane

0x4ed5,	// (0x00021285) list_single_number_heading_pane_ParamLimits

0x4ed5,	// (0x00021285) list_single_number_heading_pane

0x4ed5,	// (0x00021285) list_single_number_pane_ParamLimits

0x4ed5,	// (0x00021285) list_single_number_pane

0x4ed5,	// (0x00021285) list_single_pane_ParamLimits

0x4ed5,	// (0x00021285) list_single_pane

0x7b4b,	// (0x00023efb) list_highlight_pane_cp1

0x44ee,	// (0x0002089e) list_single_pane_g1_ParamLimits

0x44ee,	// (0x0002089e) list_single_pane_g1

0x44fa,	// (0x000208aa) list_single_pane_g2_ParamLimits

0x44fa,	// (0x000208aa) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002b953) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002b953) list_single_pane_g

0x4e71,	// (0x00021221) list_single_pane_t1_ParamLimits

0x4e71,	// (0x00021221) list_single_pane_t1

0x44ee,	// (0x0002089e) list_single_number_pane_g1_ParamLimits

0x44ee,	// (0x0002089e) list_single_number_pane_g1

0x44fa,	// (0x000208aa) list_single_number_pane_g2_ParamLimits

0x44fa,	// (0x000208aa) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002b953) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002b953) list_single_number_pane_g

0x4e1b,	// (0x000211cb) list_single_number_pane_t1_ParamLimits

0x4e1b,	// (0x000211cb) list_single_number_pane_t1

0x4e31,	// (0x000211e1) list_single_number_pane_t2_ParamLimits

0x4e31,	// (0x000211e1) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0002bcea) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0002bcea) list_single_number_pane_t

0x44e2,	// (0x00020892) list_single_graphic_pane_g1_ParamLimits

0x44e2,	// (0x00020892) list_single_graphic_pane_g1

0x44ee,	// (0x0002089e) list_single_graphic_pane_g2_ParamLimits

0x44ee,	// (0x0002089e) list_single_graphic_pane_g2

0x44fa,	// (0x000208aa) list_single_graphic_pane_g3_ParamLimits

0x44fa,	// (0x000208aa) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002b94c) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002b94c) list_single_graphic_pane_g

0x4506,	// (0x000208b6) list_single_graphic_pane_t1_ParamLimits

0x4506,	// (0x000208b6) list_single_graphic_pane_t1

0x44ee,	// (0x0002089e) list_single_heading_pane_g1_ParamLimits

0x44ee,	// (0x0002089e) list_single_heading_pane_g1

0x44fa,	// (0x000208aa) list_single_heading_pane_g2_ParamLimits

0x44fa,	// (0x000208aa) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002b953) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002b953) list_single_heading_pane_g

0x451c,	// (0x000208cc) list_single_heading_pane_t1_ParamLimits

0x451c,	// (0x000208cc) list_single_heading_pane_t1

0x4532,	// (0x000208e2) list_single_heading_pane_t2_ParamLimits

0x4532,	// (0x000208e2) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002b958) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002b958) list_single_heading_pane_t

0x44ee,	// (0x0002089e) list_single_number_heading_pane_g1_ParamLimits

0x44ee,	// (0x0002089e) list_single_number_heading_pane_g1

0x44fa,	// (0x000208aa) list_single_number_heading_pane_g2_ParamLimits

0x44fa,	// (0x000208aa) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002b953) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002b953) list_single_number_heading_pane_g

0x451c,	// (0x000208cc) list_single_number_heading_pane_t1_ParamLimits

0x451c,	// (0x000208cc) list_single_number_heading_pane_t1

0x4544,	// (0x000208f4) list_single_number_heading_pane_t2_ParamLimits

0x4544,	// (0x000208f4) list_single_number_heading_pane_t2

0x4556,	// (0x00020906) list_single_number_heading_pane_t3_ParamLimits

0x4556,	// (0x00020906) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002b95d) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002b95d) list_single_number_heading_pane_t

0x4568,	// (0x00020918) list_single_graphic_heading_pane_g1_ParamLimits

0x4568,	// (0x00020918) list_single_graphic_heading_pane_g1

0x4574,	// (0x00020924) list_single_graphic_heading_pane_g4_ParamLimits

0x4574,	// (0x00020924) list_single_graphic_heading_pane_g4

0x44fa,	// (0x000208aa) list_single_graphic_heading_pane_g5_ParamLimits

0x44fa,	// (0x000208aa) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002b964) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002b964) list_single_graphic_heading_pane_g

0x451c,	// (0x000208cc) list_single_graphic_heading_pane_t1_ParamLimits

0x451c,	// (0x000208cc) list_single_graphic_heading_pane_t1

0x4585,	// (0x00020935) list_single_graphic_heading_pane_t2_ParamLimits

0x4585,	// (0x00020935) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002b96b) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002b96b) list_single_graphic_heading_pane_t

0x4597,	// (0x00020947) list_single_large_graphic_pane_g1_ParamLimits

0x4597,	// (0x00020947) list_single_large_graphic_pane_g1

0x45a3,	// (0x00020953) list_single_large_graphic_pane_g2_ParamLimits

0x45a3,	// (0x00020953) list_single_large_graphic_pane_g2

0x45af,	// (0x0002095f) list_single_large_graphic_pane_g3_ParamLimits

0x45af,	// (0x0002095f) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002b970) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002b970) list_single_large_graphic_pane_g

0x9ffb,	// (0x000263ab) wait_border_pane_g2_copy1

0x45bb,	// (0x0002096b) list_single_large_graphic_pane_g4_cp2

0x45c3,	// (0x00020973) list_single_large_graphic_pane_t1_ParamLimits

0x45c3,	// (0x00020973) list_single_large_graphic_pane_t1

0x45d9,	// (0x00020989) list_double_pane_g1_ParamLimits

0x45d9,	// (0x00020989) list_double_pane_g1

0x45e5,	// (0x00020995) list_double_pane_g2_ParamLimits

0x45e5,	// (0x00020995) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002b977) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002b977) list_double_pane_g

0x45f1,	// (0x000209a1) list_double_pane_t1_ParamLimits

0x45f1,	// (0x000209a1) list_double_pane_t1

0x4607,	// (0x000209b7) list_double_pane_t2_ParamLimits

0x4607,	// (0x000209b7) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002b97c) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002b97c) list_double_pane_t

0x4619,	// (0x000209c9) list_double2_pane_g1_ParamLimits

0x4619,	// (0x000209c9) list_double2_pane_g1

0x462a,	// (0x000209da) list_double2_pane_g2_ParamLimits

0x462a,	// (0x000209da) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002b981) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002b981) list_double2_pane_g

0x4636,	// (0x000209e6) list_double2_pane_t1_ParamLimits

0x4636,	// (0x000209e6) list_double2_pane_t1

0x464c,	// (0x000209fc) list_double2_pane_t2_ParamLimits

0x464c,	// (0x000209fc) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002b986) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002b986) list_double2_pane_t

0x45d9,	// (0x00020989) list_double_number_pane_g1_ParamLimits

0x45d9,	// (0x00020989) list_double_number_pane_g1

0x45e5,	// (0x00020995) list_double_number_pane_g2_ParamLimits

0x45e5,	// (0x00020995) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002b977) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002b977) list_double_number_pane_g

0x465e,	// (0x00020a0e) list_double_number_pane_t1_ParamLimits

0x465e,	// (0x00020a0e) list_double_number_pane_t1

0x4670,	// (0x00020a20) list_double_number_pane_t2_ParamLimits

0x4670,	// (0x00020a20) list_double_number_pane_t2

0x4686,	// (0x00020a36) list_double_number_pane_t3_ParamLimits

0x4686,	// (0x00020a36) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002b98b) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002b98b) list_double_number_pane_t

0x4698,	// (0x00020a48) list_double_graphic_pane_g1_ParamLimits

0x4698,	// (0x00020a48) list_double_graphic_pane_g1

0x46a4,	// (0x00020a54) list_double_graphic_pane_g2_ParamLimits

0x46a4,	// (0x00020a54) list_double_graphic_pane_g2

0x46b3,	// (0x00020a63) list_double_graphic_pane_g3_ParamLimits

0x46b3,	// (0x00020a63) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002b992) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002b992) list_double_graphic_pane_g

0x46cb,	// (0x00020a7b) list_double_graphic_pane_t1_ParamLimits

0x46cb,	// (0x00020a7b) list_double_graphic_pane_t1

0x46e1,	// (0x00020a91) list_double_graphic_pane_t2_ParamLimits

0x46e1,	// (0x00020a91) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002b99b) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002b99b) list_double_graphic_pane_t

0x46f3,	// (0x00020aa3) list_double2_graphic_pane_g1_ParamLimits

0x46f3,	// (0x00020aa3) list_double2_graphic_pane_g1

0x46ff,	// (0x00020aaf) list_double2_graphic_pane_g2_ParamLimits

0x46ff,	// (0x00020aaf) list_double2_graphic_pane_g2

0x462a,	// (0x000209da) list_double2_graphic_pane_g3_ParamLimits

0x462a,	// (0x000209da) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002b9a0) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002b9a0) list_double2_graphic_pane_g

0x470b,	// (0x00020abb) list_double2_graphic_pane_t1_ParamLimits

0x470b,	// (0x00020abb) list_double2_graphic_pane_t1

0x4721,	// (0x00020ad1) list_double2_graphic_pane_t2_ParamLimits

0x4721,	// (0x00020ad1) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002b9a7) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002b9a7) list_double2_graphic_pane_t

0x4733,	// (0x00020ae3) list_double_large_graphic_pane_g1_ParamLimits

0x4733,	// (0x00020ae3) list_double_large_graphic_pane_g1

0x4752,	// (0x00020b02) list_double_large_graphic_pane_g2_ParamLimits

0x4752,	// (0x00020b02) list_double_large_graphic_pane_g2

0x45e5,	// (0x00020995) list_double_large_graphic_pane_g3_ParamLimits

0x45e5,	// (0x00020995) list_double_large_graphic_pane_g3

0x4763,	// (0x00020b13) list_double_large_graphic_pane_g4_ParamLimits

0x4763,	// (0x00020b13) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002b9ac) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002b9ac) list_double_large_graphic_pane_g

0x478a,	// (0x00020b3a) list_double_large_graphic_pane_t1_ParamLimits

0x478a,	// (0x00020b3a) list_double_large_graphic_pane_t1

0x47a3,	// (0x00020b53) list_double_large_graphic_pane_t2_ParamLimits

0x47a3,	// (0x00020b53) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002b9b7) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002b9b7) list_double_large_graphic_pane_t

0x47b5,	// (0x00020b65) list_double2_large_graphic_pane_g1_ParamLimits

0x47b5,	// (0x00020b65) list_double2_large_graphic_pane_g1

0x4619,	// (0x000209c9) list_double2_large_graphic_pane_g2_ParamLimits

0x4619,	// (0x000209c9) list_double2_large_graphic_pane_g2

0x462a,	// (0x000209da) list_double2_large_graphic_pane_g3_ParamLimits

0x462a,	// (0x000209da) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002b9bc) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002b9bc) list_double2_large_graphic_pane_g

0x47c1,	// (0x00020b71) list_double2_large_graphic_pane_t1_ParamLimits

0x47c1,	// (0x00020b71) list_double2_large_graphic_pane_t1

0x47d7,	// (0x00020b87) list_double2_large_graphic_pane_t2_ParamLimits

0x47d7,	// (0x00020b87) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0002b9c3) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0002b9c3) list_double2_large_graphic_pane_t

0x47e9,	// (0x00020b99) list_double_heading_pane_g1_ParamLimits

0x47e9,	// (0x00020b99) list_double_heading_pane_g1

0x47fa,	// (0x00020baa) list_double_heading_pane_g2_ParamLimits

0x47fa,	// (0x00020baa) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002b9c8) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002b9c8) list_double_heading_pane_g

0x4806,	// (0x00020bb6) list_double_heading_pane_t1_ParamLimits

0x4806,	// (0x00020bb6) list_double_heading_pane_t1

0x464c,	// (0x000209fc) list_double_heading_pane_t2_ParamLimits

0x464c,	// (0x000209fc) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0002b9cd) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0002b9cd) list_double_heading_pane_t

0x481c,	// (0x00020bcc) list_double_graphic_heading_pane_g1_ParamLimits

0x481c,	// (0x00020bcc) list_double_graphic_heading_pane_g1

0x47e9,	// (0x00020b99) list_double_graphic_heading_pane_g2_ParamLimits

0x47e9,	// (0x00020b99) list_double_graphic_heading_pane_g2

0x47fa,	// (0x00020baa) list_double_graphic_heading_pane_g3_ParamLimits

0x47fa,	// (0x00020baa) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0002b9d2) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002b9d2) list_double_graphic_heading_pane_g

0x4828,	// (0x00020bd8) list_double_graphic_heading_pane_t1_ParamLimits

0x4828,	// (0x00020bd8) list_double_graphic_heading_pane_t1

0x4721,	// (0x00020ad1) list_double_graphic_heading_pane_t2_ParamLimits

0x4721,	// (0x00020ad1) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002b9d9) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002b9d9) list_double_graphic_heading_pane_t

0x4752,	// (0x00020b02) list_double_time_pane_g1_ParamLimits

0x4752,	// (0x00020b02) list_double_time_pane_g1

0x45e5,	// (0x00020995) list_double_time_pane_g2_ParamLimits

0x45e5,	// (0x00020995) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0002b9de) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0002b9de) list_double_time_pane_g

0x483e,	// (0x00020bee) list_double_time_pane_t1_ParamLimits

0x483e,	// (0x00020bee) list_double_time_pane_t1

0x4854,	// (0x00020c04) list_double_time_pane_t2_ParamLimits

0x4854,	// (0x00020c04) list_double_time_pane_t2

0x4866,	// (0x00020c16) list_double_time_pane_t3_ParamLimits

0x4866,	// (0x00020c16) list_double_time_pane_t3

0x4878,	// (0x00020c28) list_double_time_pane_t4_ParamLimits

0x4878,	// (0x00020c28) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0002b9e3) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0002b9e3) list_double_time_pane_t

0x46ff,	// (0x00020aaf) list_setting_pane_g1_ParamLimits

0x46ff,	// (0x00020aaf) list_setting_pane_g1

0x462a,	// (0x000209da) list_setting_pane_g2_ParamLimits

0x462a,	// (0x000209da) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0002b9ec) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0002b9ec) list_setting_pane_g

0x488a,	// (0x00020c3a) list_setting_pane_t1_ParamLimits

0x488a,	// (0x00020c3a) list_setting_pane_t1

0x48a4,	// (0x00020c54) list_setting_pane_t2_ParamLimits

0x48a4,	// (0x00020c54) list_setting_pane_t2

0x0002,

0xf641,	// (0x0002b9f1) list_setting_pane_t_ParamLimits

0xf641,	// (0x0002b9f1) list_setting_pane_t

0x48e3,	// (0x00020c93) set_value_pane_cp_ParamLimits

0x48e3,	// (0x00020c93) set_value_pane_cp

0x48ef,	// (0x00020c9f) list_setting_number_pane_g1_ParamLimits

0x48ef,	// (0x00020c9f) list_setting_number_pane_g1

0x48fb,	// (0x00020cab) list_setting_number_pane_g2_ParamLimits

0x48fb,	// (0x00020cab) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002b9f8) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002b9f8) list_setting_number_pane_g

0x4907,	// (0x00020cb7) list_setting_number_pane_t1_ParamLimits

0x4907,	// (0x00020cb7) list_setting_number_pane_t1

0x4920,	// (0x00020cd0) list_setting_number_pane_t2_ParamLimits

0x4920,	// (0x00020cd0) list_setting_number_pane_t2

0x493a,	// (0x00020cea) list_setting_number_pane_t3_ParamLimits

0x493a,	// (0x00020cea) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0002b9fd) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0002b9fd) list_setting_number_pane_t

0x48e3,	// (0x00020c93) set_value_pane_ParamLimits

0x48e3,	// (0x00020c93) set_value_pane

0x845f,	// (0x0002480f) bg_set_opt_pane_ParamLimits

0x845f,	// (0x0002480f) bg_set_opt_pane

0x497d,	// (0x00020d2d) set_value_pane_t1

0x8480,	// (0x00024830) slider_set_pane_cp3

0x8489,	// (0x00024839) volume_small_pane_cp

0x8492,	// (0x00024842) list_form_gen_pane

0x849b,	// (0x0002484b) scroll_pane_cp8

0x4993,	// (0x00020d43) form_field_data_pane_ParamLimits

0x4993,	// (0x00020d43) form_field_data_pane

0x49b3,	// (0x00020d63) form_field_data_wide_pane_ParamLimits

0x49b3,	// (0x00020d63) form_field_data_wide_pane

0x49d4,	// (0x00020d84) form_field_popup_pane_ParamLimits

0x49d4,	// (0x00020d84) form_field_popup_pane

0x49f4,	// (0x00020da4) form_field_popup_wide_pane_ParamLimits

0x49f4,	// (0x00020da4) form_field_popup_wide_pane

0x4a11,	// (0x00020dc1) form_field_slider_pane_ParamLimits

0x4a11,	// (0x00020dc1) form_field_slider_pane

0x4a24,	// (0x00020dd4) form_field_slider_wide_pane_ParamLimits

0x4a24,	// (0x00020dd4) form_field_slider_wide_pane

0x84ac,	// (0x0002485c) data_form_pane

0x4a41,	// (0x00020df1) form_field_data_pane_t1

0x84b8,	// (0x00024868) input_focus_pane

0x4a59,	// (0x00020e09) data_form_wide_pane

0x4a76,	// (0x00020e26) form_field_data_wide_pane_t1

0x8229,	// (0x000245d9) input_focus_pane_cp6

0x4a98,	// (0x00020e48) form_field_popup_pane_t1

0x84b8,	// (0x00024868) input_focus_pane_cp7

0x84e6,	// (0x00024896) list_form_pane

0x4ab8,	// (0x00020e68) form_field_popup_wide_pane_t1

0x84b8,	// (0x00024868) input_focus_pane_cp8

0x84f2,	// (0x000248a2) list_form_wide_pane

0x4ad5,	// (0x00020e85) form_field_slider_pane_t1_ParamLimits

0x4ad5,	// (0x00020e85) form_field_slider_pane_t1

0x4aeb,	// (0x00020e9b) form_field_slider_pane_t2_ParamLimits

0x4aeb,	// (0x00020e9b) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0002ba0d) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0002ba0d) form_field_slider_pane_t

0x7ea6,	// (0x00024256) input_focus_pane_cp9_ParamLimits

0x7ea6,	// (0x00024256) input_focus_pane_cp9

0x4b00,	// (0x00020eb0) slider_cont_pane_ParamLimits

0x4b00,	// (0x00020eb0) slider_cont_pane

0x84fe,	// (0x000248ae) form_field_slider_wide_pane_t1_ParamLimits

0x84fe,	// (0x000248ae) form_field_slider_wide_pane_t1

0x4b14,	// (0x00020ec4) form_field_slider_wide_pane_t2_ParamLimits

0x4b14,	// (0x00020ec4) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0002ba12) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0002ba12) form_field_slider_wide_pane_t

0x7ea6,	// (0x00024256) input_focus_pane_cp10_ParamLimits

0x7ea6,	// (0x00024256) input_focus_pane_cp10

0x4b26,	// (0x00020ed6) slider_cont_pane_cp1_ParamLimits

0x4b26,	// (0x00020ed6) slider_cont_pane_cp1

0x4b3a,	// (0x00020eea) slider_form_pane_cp

0x8510,	// (0x000248c0) input_focus_pane_g1

0x8518,	// (0x000248c8) input_focus_pane_g2

0x8520,	// (0x000248d0) input_focus_pane_g3

0x8528,	// (0x000248d8) input_focus_pane_g4

0x8530,	// (0x000248e0) input_focus_pane_g5

0x8538,	// (0x000248e8) input_focus_pane_g6

0x8540,	// (0x000248f0) input_focus_pane_g7

0x8548,	// (0x000248f8) input_focus_pane_g8

0x8550,	// (0x00024900) input_focus_pane_g9

0x2c4e,	// (0x0001effe) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002ba17) input_focus_pane_g

0xa004,	// (0x000263b4) wait_border_pane_g3_copy1

0x4b42,	// (0x00020ef2) data_form_pane_t1

0x2c4e,	// (0x0001effe) wait_anim_pane_g1_copy1

0x4e43,	// (0x000211f3) data_form_wide_pane_t1

0x4b5d,	// (0x00020f0d) list_form_graphic_pane_cp_ParamLimits

0x4b5d,	// (0x00020f0d) list_form_graphic_pane_cp

0xaf24,	// (0x000272d4) slider_form_pane_g1

0xaf2d,	// (0x000272dd) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0002bd1a) slider_form_pane_g

0x4b76,	// (0x00020f26) list_form_graphic_pane_ParamLimits

0x4b76,	// (0x00020f26) list_form_graphic_pane

0x4b92,	// (0x00020f42) list_form_graphic_pane_g1

0x4b9a,	// (0x00020f4a) list_form_graphic_pane_t1_ParamLimits

0x4b9a,	// (0x00020f4a) list_form_graphic_pane_t1

0x7c2b,	// (0x00023fdb) list_highlight_pane_cp5_ParamLimits

0x7c2b,	// (0x00023fdb) list_highlight_pane_cp5

0x4baf,	// (0x00020f5f) find_pane_g1

0x8558,	// (0x00024908) input_find_pane

0x4bb8,	// (0x00020f68) input_find_pane_g1_ParamLimits

0x4bb8,	// (0x00020f68) input_find_pane_g1

0x4bc4,	// (0x00020f74) input_find_pane_t1_ParamLimits

0x4bc4,	// (0x00020f74) input_find_pane_t1

0x4bd9,	// (0x00020f89) input_find_pane_t2_ParamLimits

0x4bd9,	// (0x00020f89) input_find_pane_t2

0x0001,

0xf67c,	// (0x0002ba2c) input_find_pane_t_ParamLimits

0xf67c,	// (0x0002ba2c) input_find_pane_t

0x8561,	// (0x00024911) input_focus_pane_cp5_ParamLimits

0x8561,	// (0x00024911) input_focus_pane_cp5

0x8580,	// (0x00024930) bg_popup_window_pane_cp2_ParamLimits

0x8580,	// (0x00024930) bg_popup_window_pane_cp2

0x858d,	// (0x0002493d) listscroll_menu_pane_ParamLimits

0x858d,	// (0x0002493d) listscroll_menu_pane

0x8599,	// (0x00024949) popup_submenu_window_ParamLimits

0x8599,	// (0x00024949) popup_submenu_window

0x85c5,	// (0x00024975) find_popup_pane_g1

0x85cd,	// (0x0002497d) input_popup_find_pane_cp

0x85d7,	// (0x00024987) input_focus_pane_cp4_ParamLimits

0x85d7,	// (0x00024987) input_focus_pane_cp4

0x85f1,	// (0x000249a1) input_popup_find_pane_t1_ParamLimits

0x85f1,	// (0x000249a1) input_popup_find_pane_t1

0x7b4b,	// (0x00023efb) bg_popup_sub_pane_cp

0x861f,	// (0x000249cf) listscroll_popup_sub_pane

0x8627,	// (0x000249d7) list_submenu_pane_ParamLimits

0x8627,	// (0x000249d7) list_submenu_pane

0x8638,	// (0x000249e8) scroll_pane_cp4

0x8640,	// (0x000249f0) list_single_popup_submenu_pane_ParamLimits

0x8640,	// (0x000249f0) list_single_popup_submenu_pane

0x8654,	// (0x00024a04) list_single_popup_submenu_pane_g1

0x865c,	// (0x00024a0c) list_single_popup_submenu_pane_t1_ParamLimits

0x865c,	// (0x00024a0c) list_single_popup_submenu_pane_t1

0x7c2b,	// (0x00023fdb) bg_active_tab_pane_cp1_ParamLimits

0x7c2b,	// (0x00023fdb) bg_active_tab_pane_cp1

0x8671,	// (0x00024a21) tabs_2_active_pane_g1

0x8679,	// (0x00024a29) tabs_2_active_pane_t1

0x7c2b,	// (0x00023fdb) bg_passive_tab_pane_cp1_ParamLimits

0x7c2b,	// (0x00023fdb) bg_passive_tab_pane_cp1

0x8671,	// (0x00024a21) tabs_2_passive_pane_g1

0x8679,	// (0x00024a29) tabs_2_passive_pane_t1

0x868b,	// (0x00024a3b) bg_active_tab_pane_cp4

0x8699,	// (0x00024a49) tabs_2_long_active_pane_t1

0x86ac,	// (0x00024a5c) bg_passive_tab_pane_cp4

0x66f7,	// (0x00022aa7) list_single_midp_graphic_pane_g4_ParamLimits

0x868b,	// (0x00024a3b) bg_active_tab_pane_cp5

0x86b8,	// (0x00024a68) tabs_3_long_active_pane_t1

0x86ac,	// (0x00024a5c) bg_passive_tab_pane_cp5

0x66f7,	// (0x00022aa7) list_single_midp_graphic_pane_g4

0x7c2b,	// (0x00023fdb) bg_popup_window_pane_cp13_ParamLimits

0x7c2b,	// (0x00023fdb) bg_popup_window_pane_cp13

0x86d3,	// (0x00024a83) listscroll_popup_fast_pane_ParamLimits

0x86d3,	// (0x00024a83) listscroll_popup_fast_pane

0x86e2,	// (0x00024a92) grid_popup_fast_pane_ParamLimits

0x86e2,	// (0x00024a92) grid_popup_fast_pane

0x86f4,	// (0x00024aa4) scroll_pane_cp9_ParamLimits

0x86f4,	// (0x00024aa4) scroll_pane_cp9

0xc863,	// (0x00028c13) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc863,	// (0x00028c13) list_single_graphic_hl_pane_t1_cp2

0x8718,	// (0x00024ac8) input_focus_pane_cp20_ParamLimits

0x8718,	// (0x00024ac8) input_focus_pane_cp20

0x8726,	// (0x00024ad6) query_popup_data_pane_t1_ParamLimits

0x8726,	// (0x00024ad6) query_popup_data_pane_t1

0x8739,	// (0x00024ae9) query_popup_data_pane_t2_ParamLimits

0x8739,	// (0x00024ae9) query_popup_data_pane_t2

0x877f,	// (0x00024b2f) query_popup_data_pane_t3_ParamLimits

0x877f,	// (0x00024b2f) query_popup_data_pane_t3

0x87c0,	// (0x00024b70) query_popup_data_pane_t4_ParamLimits

0x87c0,	// (0x00024b70) query_popup_data_pane_t4

0x87fc,	// (0x00024bac) query_popup_data_pane_t5_ParamLimits

0x87fc,	// (0x00024bac) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0002ba31) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0002ba31) query_popup_data_pane_t

0x8510,	// (0x000248c0) bg_set_opt_pane_g1

0x8518,	// (0x000248c8) bg_set_opt_pane_g2

0x8520,	// (0x000248d0) bg_set_opt_pane_g3

0x8528,	// (0x000248d8) bg_set_opt_pane_g4

0x8530,	// (0x000248e0) bg_set_opt_pane_g5

0x8538,	// (0x000248e8) bg_set_opt_pane_g6

0x8540,	// (0x000248f0) bg_set_opt_pane_g7

0x8548,	// (0x000248f8) bg_set_opt_pane_g8

0x8550,	// (0x00024900) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0002ba3c) bg_set_opt_pane_g

0x5d97,	// (0x00022147) control_top_pane_stacon_ParamLimits

0x5d97,	// (0x00022147) control_top_pane_stacon

0x5dea,	// (0x0002219a) signal_pane_stacon_ParamLimits

0x5dea,	// (0x0002219a) signal_pane_stacon

0x8e07,	// (0x000251b7) stacon_top_pane_g1_ParamLimits

0x8e07,	// (0x000251b7) stacon_top_pane_g1

0x5e0f,	// (0x000221bf) title_pane_stacon_ParamLimits

0x5e0f,	// (0x000221bf) title_pane_stacon

0x5e39,	// (0x000221e9) uni_indicator_pane_stacon_ParamLimits

0x5e39,	// (0x000221e9) uni_indicator_pane_stacon

0x5e4e,	// (0x000221fe) battery_pane_stacon_ParamLimits

0x5e4e,	// (0x000221fe) battery_pane_stacon

0x5e92,	// (0x00022242) control_bottom_pane_stacon_ParamLimits

0x5e92,	// (0x00022242) control_bottom_pane_stacon

0x5eb5,	// (0x00022265) navi_pane_stacon_ParamLimits

0x5eb5,	// (0x00022265) navi_pane_stacon

0x8e29,	// (0x000251d9) stacon_bottom_pane_g1_ParamLimits

0x8e29,	// (0x000251d9) stacon_bottom_pane_g1

0x5afa,	// (0x00021eaa) aid_levels_signal_lsc_ParamLimits

0x5afa,	// (0x00021eaa) aid_levels_signal_lsc

0x5b10,	// (0x00021ec0) signal_pane_stacon_g1_ParamLimits

0x5b10,	// (0x00021ec0) signal_pane_stacon_g1

0x5b24,	// (0x00021ed4) signal_pane_stacon_g2_ParamLimits

0x5b24,	// (0x00021ed4) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0002ba4f) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002ba4f) signal_pane_stacon_g

0x5b59,	// (0x00021f09) title_pane_stacon_t1_ParamLimits

0x5b59,	// (0x00021f09) title_pane_stacon_t1

0x8840,	// (0x00024bf0) uni_indicator_pane_stacon_g1

0x884a,	// (0x00024bfa) uni_indicator_pane_stacon_g2

0x8854,	// (0x00024c04) uni_indicator_pane_stacon_g3

0x885e,	// (0x00024c0e) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0002ba5b) uni_indicator_pane_stacon_g

0x5b7e,	// (0x00021f2e) control_top_pane_stacon_g1

0x5b86,	// (0x00021f36) control_top_pane_stacon_t1_ParamLimits

0x5b86,	// (0x00021f36) control_top_pane_stacon_t1

0x5bbd,	// (0x00021f6d) aid_levels_battery_lsc_ParamLimits

0x5bbd,	// (0x00021f6d) aid_levels_battery_lsc

0x5bd4,	// (0x00021f84) battery_pane_stacon_g1_ParamLimits

0x5bd4,	// (0x00021f84) battery_pane_stacon_g1

0x5be7,	// (0x00021f97) battery_pane_stacon_g2_ParamLimits

0x5be7,	// (0x00021f97) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0002ba64) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0002ba64) battery_pane_stacon_g

0x5c25,	// (0x00021fd5) navi_icon_pane_stacon

0x5c39,	// (0x00021fe9) navi_navi_pane_stacon

0x5c25,	// (0x00021fd5) navi_text_pane_stacon

0x5b7e,	// (0x00021f2e) control_bottom_pane_stacon_g1

0x5c4d,	// (0x00021ffd) control_bottom_pane_stacon_t1_ParamLimits

0x5c4d,	// (0x00021ffd) control_bottom_pane_stacon_t1

0x8882,	// (0x00024c32) grid_app_pane_ParamLimits

0x8882,	// (0x00024c32) grid_app_pane

0x88a4,	// (0x00024c54) scroll_pane_cp15_ParamLimits

0x88a4,	// (0x00024c54) scroll_pane_cp15

0x88b7,	// (0x00024c67) cell_app_pane_ParamLimits

0x88b7,	// (0x00024c67) cell_app_pane

0x88df,	// (0x00024c8f) cell_app_pane_g1_ParamLimits

0x88df,	// (0x00024c8f) cell_app_pane_g1

0x8903,	// (0x00024cb3) cell_app_pane_g2_ParamLimits

0x8903,	// (0x00024cb3) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0002ba69) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0002ba69) cell_app_pane_g

0x890f,	// (0x00024cbf) cell_app_pane_t1_ParamLimits

0x890f,	// (0x00024cbf) cell_app_pane_t1

0x8926,	// (0x00024cd6) grid_highlight_pane_ParamLimits

0x8926,	// (0x00024cd6) grid_highlight_pane

0x8510,	// (0x000248c0) cell_highlight_pane_g1

0x8518,	// (0x000248c8) cell_highlight_pane_g2

0x8520,	// (0x000248d0) cell_highlight_pane_g3

0x8528,	// (0x000248d8) cell_highlight_pane_g4

0x8530,	// (0x000248e0) cell_highlight_pane_g5

0x8538,	// (0x000248e8) cell_highlight_pane_g6

0x8540,	// (0x000248f0) cell_highlight_pane_g7

0x8548,	// (0x000248f8) cell_highlight_pane_g8

0x8550,	// (0x00024900) cell_highlight_pane_g9

0x2c4e,	// (0x0001effe) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002ba17) cell_highlight_pane_g

0x8937,	// (0x00024ce7) bg_scroll_pane

0x5c97,	// (0x00022047) scroll_handle_pane

0x897e,	// (0x00024d2e) scroll_bg_pane_g1

0x8993,	// (0x00024d43) scroll_bg_pane_g2

0x89ab,	// (0x00024d5b) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0002ba6e) scroll_bg_pane_g

0x89c0,	// (0x00024d70) scroll_handle_focus_pane_ParamLimits

0x89c0,	// (0x00024d70) scroll_handle_focus_pane

0x897e,	// (0x00024d2e) scroll_handle_pane_g1

0x89cd,	// (0x00024d7d) scroll_handle_pane_g2

0x89ab,	// (0x00024d5b) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0002ba75) scroll_handle_pane_g

0x85d7,	// (0x00024987) bg_popup_sub_pane_cp21_ParamLimits

0x85d7,	// (0x00024987) bg_popup_sub_pane_cp21

0x89e1,	// (0x00024d91) popup_fep_japan_predictive_window_t1_ParamLimits

0x89e1,	// (0x00024d91) popup_fep_japan_predictive_window_t1

0x89fb,	// (0x00024dab) popup_fep_japan_predictive_window_t2_ParamLimits

0x89fb,	// (0x00024dab) popup_fep_japan_predictive_window_t2

0x8a2e,	// (0x00024dde) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a2e,	// (0x00024dde) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0002ba7c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0002ba7c) popup_fep_japan_predictive_window_t

0x7b4b,	// (0x00023efb) bg_popup_sub_pane_cp23

0x8a65,	// (0x00024e15) listscroll_japin_cand_pane

0x8a6d,	// (0x00024e1d) popup_fep_japan_candidate_window_t1

0x8a7b,	// (0x00024e2b) candidate_pane_ParamLimits

0x8a7b,	// (0x00024e2b) candidate_pane

0x8a8d,	// (0x00024e3d) scroll_pane_cp30

0x8a95,	// (0x00024e45) list_single_popup_jap_candidate_pane_ParamLimits

0x8a95,	// (0x00024e45) list_single_popup_jap_candidate_pane

0x7b4b,	// (0x00023efb) list_highlight_pane_cp30

0x8aaa,	// (0x00024e5a) list_single_popup_jap_candidate_pane_t1

0x8ab9,	// (0x00024e69) level_1_signal

0x8acb,	// (0x00024e7b) level_2_signal

0x8ade,	// (0x00024e8e) level_3_signal

0x8af1,	// (0x00024ea1) level_4_signal

0x8b04,	// (0x00024eb4) level_5_signal

0x8b17,	// (0x00024ec7) level_6_signal

0x8b2a,	// (0x00024eda) level_7_signal

0x8ab9,	// (0x00024e69) level_1_battery

0x8acb,	// (0x00024e7b) level_2_battery

0x8ade,	// (0x00024e8e) level_3_battery

0x8af1,	// (0x00024ea1) level_4_battery

0x8b04,	// (0x00024eb4) level_5_battery

0x8b17,	// (0x00024ec7) level_6_battery

0x8b2a,	// (0x00024eda) level_7_battery

0x8b55,	// (0x00024f05) list_menu_pane_ParamLimits

0x8b55,	// (0x00024f05) list_menu_pane

0x8b6b,	// (0x00024f1b) scroll_pane_cp25_ParamLimits

0x8b6b,	// (0x00024f1b) scroll_pane_cp25

0x8b84,	// (0x00024f34) list_double2_graphic_pane_cp2_ParamLimits

0x8b84,	// (0x00024f34) list_double2_graphic_pane_cp2

0x8b84,	// (0x00024f34) list_double2_large_graphic_pane_cp2_ParamLimits

0x8b84,	// (0x00024f34) list_double2_large_graphic_pane_cp2

0x8b84,	// (0x00024f34) list_double2_pane_cp2_ParamLimits

0x8b84,	// (0x00024f34) list_double2_pane_cp2

0x8b84,	// (0x00024f34) list_double_graphic_pane_cp2_ParamLimits

0x8b84,	// (0x00024f34) list_double_graphic_pane_cp2

0x8b84,	// (0x00024f34) list_double_large_graphic_pane_cp2_ParamLimits

0x8b84,	// (0x00024f34) list_double_large_graphic_pane_cp2

0x8b84,	// (0x00024f34) list_double_number_pane_cp2_ParamLimits

0x8b84,	// (0x00024f34) list_double_number_pane_cp2

0x8b84,	// (0x00024f34) list_double_pane_cp2_ParamLimits

0x8b84,	// (0x00024f34) list_double_pane_cp2

0x8ba8,	// (0x00024f58) list_single_2graphic_pane_cp2_ParamLimits

0x8ba8,	// (0x00024f58) list_single_2graphic_pane_cp2

0x8ba8,	// (0x00024f58) list_single_graphic_heading_pane_cp2_ParamLimits

0x8ba8,	// (0x00024f58) list_single_graphic_heading_pane_cp2

0x8ba8,	// (0x00024f58) list_single_graphic_pane_cp2_ParamLimits

0x8ba8,	// (0x00024f58) list_single_graphic_pane_cp2

0x8ba8,	// (0x00024f58) list_single_heading_pane_cp2_ParamLimits

0x8ba8,	// (0x00024f58) list_single_heading_pane_cp2

0x8bc1,	// (0x00024f71) list_single_large_graphic_pane_cp2_ParamLimits

0x8bc1,	// (0x00024f71) list_single_large_graphic_pane_cp2

0x8ba8,	// (0x00024f58) list_single_number_heading_pane_cp2_ParamLimits

0x8ba8,	// (0x00024f58) list_single_number_heading_pane_cp2

0x8ba8,	// (0x00024f58) list_single_number_pane_cp2_ParamLimits

0x8ba8,	// (0x00024f58) list_single_number_pane_cp2

0x8bd2,	// (0x00024f82) list_single_pane_cp2_ParamLimits

0x8bd2,	// (0x00024f82) list_single_pane_cp2

0x8c56,	// (0x00025006) bg_popup_sub_pane_cp22

0x5d49,	// (0x000220f9) popup_side_volume_key_window_g1

0x5d73,	// (0x00022123) popup_side_volume_key_window_t1

0x5d8f,	// (0x0002213f) volume_small_pane_cp1

0x7ea6,	// (0x00024256) bg_popup_sub_pane_cp24_ParamLimits

0x7ea6,	// (0x00024256) bg_popup_sub_pane_cp24

0x8c6c,	// (0x0002501c) fep_china_uni_candidate_pane_ParamLimits

0x8c6c,	// (0x0002501c) fep_china_uni_candidate_pane

0x8c80,	// (0x00025030) fep_china_uni_entry_pane

0x8c90,	// (0x00025040) popup_fep_china_uni_window_g1

0x8cac,	// (0x0002505c) fep_china_uni_entry_pane_g1

0x8cb4,	// (0x00025064) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0002baad) fep_china_uni_entry_pane_g

0x8cbc,	// (0x0002506c) fep_entry_item_pane

0x8cc6,	// (0x00025076) fep_candidate_item_pane

0x8cce,	// (0x0002507e) fep_china_uni_candidate_pane_g1

0x8cd6,	// (0x00025086) fep_china_uni_candidate_pane_g2

0x8cde,	// (0x0002508e) fep_china_uni_candidate_pane_g3

0x8ce6,	// (0x00025096) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0002bab2) fep_china_uni_candidate_pane_g

0x2c4e,	// (0x0001effe) fep_entry_item_pane_g1

0x8cee,	// (0x0002509e) fep_entry_item_pane_t1_ParamLimits

0x8cee,	// (0x0002509e) fep_entry_item_pane_t1

0x8d04,	// (0x000250b4) fep_candidate_item_pane_t1_ParamLimits

0x8d04,	// (0x000250b4) fep_candidate_item_pane_t1

0x8d19,	// (0x000250c9) fep_candidate_item_pane_t2_ParamLimits

0x8d19,	// (0x000250c9) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0002babb) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0002babb) fep_candidate_item_pane_t

0x7c2b,	// (0x00023fdb) list_highlight_pane_cp31_ParamLimits

0x7c2b,	// (0x00023fdb) list_highlight_pane_cp31

0x8d2b,	// (0x000250db) level_1_signal_lsc

0x8d34,	// (0x000250e4) level_2_signal_lsc

0x8d3d,	// (0x000250ed) level_3_signal_lsc

0x8d46,	// (0x000250f6) level_4_signal_lsc

0x8d4f,	// (0x000250ff) level_5_signal_lsc

0x8d58,	// (0x00025108) level_6_signal_lsc

0x8d61,	// (0x00025111) level_7_signal_lsc

0x8d61,	// (0x00025111) level_1_battery_lsc

0x8d6a,	// (0x0002511a) level_2_battery_lsc

0x8d73,	// (0x00025123) level_3_battery_lsc

0x8d7c,	// (0x0002512c) level_4_battery_lsc

0x8d85,	// (0x00025135) level_5_battery_lsc

0x8d8e,	// (0x0002513e) level_6_battery_lsc

0x8d2b,	// (0x000250db) level_7_battery_lsc

0x8d97,	// (0x00025147) scroll_handle_focus_pane_g1

0x8da0,	// (0x00025150) scroll_handle_focus_pane_g2

0x8da9,	// (0x00025159) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0002bac0) scroll_handle_focus_pane_g

0x4bee,	// (0x00020f9e) list_single_2graphic_pane_g1_ParamLimits

0x4bee,	// (0x00020f9e) list_single_2graphic_pane_g1

0x4574,	// (0x00020924) list_single_2graphic_pane_g2_ParamLimits

0x4574,	// (0x00020924) list_single_2graphic_pane_g2

0x44fa,	// (0x000208aa) list_single_2graphic_pane_g3_ParamLimits

0x44fa,	// (0x000208aa) list_single_2graphic_pane_g3

0x4bfa,	// (0x00020faa) list_single_2graphic_pane_g4_ParamLimits

0x4bfa,	// (0x00020faa) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0002bac7) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0002bac7) list_single_2graphic_pane_g

0x4c06,	// (0x00020fb6) list_single_2graphic_pane_t1_ParamLimits

0x4c06,	// (0x00020fb6) list_single_2graphic_pane_t1

0x4c34,	// (0x00020fe4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x4c34,	// (0x00020fe4) list_double2_graphic_large_graphic_pane_g1

0x4619,	// (0x000209c9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4619,	// (0x000209c9) list_double2_graphic_large_graphic_pane_g2

0x462a,	// (0x000209da) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x462a,	// (0x000209da) list_double2_graphic_large_graphic_pane_g3

0x4c44,	// (0x00020ff4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x4c44,	// (0x00020ff4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0002bad0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0002bad0) list_double2_graphic_large_graphic_pane_g

0x4c50,	// (0x00021000) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4c50,	// (0x00021000) list_double2_graphic_large_graphic_pane_t1

0x4c66,	// (0x00021016) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4c66,	// (0x00021016) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002bad9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002bad9) list_double2_graphic_large_graphic_pane_t

0x8ef4,	// (0x000252a4) popup_fast_swap_window_ParamLimits

0x8ef4,	// (0x000252a4) popup_fast_swap_window

0x8f10,	// (0x000252c0) popup_side_volume_key_window

0x8f2c,	// (0x000252dc) stacon_top_pane

0x8f36,	// (0x000252e6) status_pane_ParamLimits

0x8f36,	// (0x000252e6) status_pane

0x8f44,	// (0x000252f4) status_small_pane

0x7b4b,	// (0x00023efb) control_pane

0x7b4b,	// (0x00023efb) stacon_bottom_pane

0x849b,	// (0x0002484b) scroll_pane_cp121

0x8492,	// (0x00024842) set_content_pane

0x8db2,	// (0x00025162) bg_active_tab_pane_g1_cp1

0x8dbb,	// (0x0002516b) bg_active_tab_pane_g2_cp1

0x8dc4,	// (0x00025174) bg_active_tab_pane_g3_cp1

0x8db2,	// (0x00025162) bg_passive_tab_pane_g1_cp1

0x8dbb,	// (0x0002516b) bg_passive_tab_pane_g2_cp1

0x8dc4,	// (0x00025174) bg_passive_tab_pane_g3_cp1

0x8dcd,	// (0x0002517d) bg_active_tab_pane_g1_cp2

0x8dbb,	// (0x0002516b) bg_active_tab_pane_g2_cp2

0x8dd6,	// (0x00025186) bg_active_tab_pane_g3_cp2

0x8dcd,	// (0x0002517d) bg_passive_tab_pane_g1_cp2

0x8dbb,	// (0x0002516b) bg_passive_tab_pane_g2_cp2

0x8dd6,	// (0x00025186) bg_passive_tab_pane_g3_cp2

0x8ddf,	// (0x0002518f) bg_active_tab_pane_g1_cp3

0x8dbb,	// (0x0002516b) bg_active_tab_pane_g2_cp3

0x8de8,	// (0x00025198) bg_active_tab_pane_g3_cp3

0x8ddf,	// (0x0002518f) bg_passive_tab_pane_g1_cp3

0x8dbb,	// (0x0002516b) bg_passive_tab_pane_g2_cp3

0x8de8,	// (0x00025198) bg_passive_tab_pane_g3_cp3

0x8df1,	// (0x000251a1) bg_active_tab_pane_g1_cp4

0x8dbb,	// (0x0002516b) bg_active_tab_pane_g2_cp4

0x8dfc,	// (0x000251ac) bg_active_tab_pane_g3_cp4

0x8df1,	// (0x000251a1) bg_passive_tab_pane_g1_cp4

0x8dbb,	// (0x0002516b) bg_passive_tab_pane_g2_cp4

0x8dfc,	// (0x000251ac) bg_passive_tab_pane_g3_cp4

0x8e45,	// (0x000251f5) bg_active_tab_pane_g1_cp5

0x8dbb,	// (0x0002516b) bg_active_tab_pane_g2_cp5

0x8e4e,	// (0x000251fe) bg_active_tab_pane_g3_cp5

0x8e45,	// (0x000251f5) bg_passive_tab_pane_g1_cp5

0x8dbb,	// (0x0002516b) bg_passive_tab_pane_g2_cp5

0x8e4e,	// (0x000251fe) bg_passive_tab_pane_g3_cp5

0x8e57,	// (0x00025207) list_set_graphic_pane_ParamLimits

0x8e57,	// (0x00025207) list_set_graphic_pane

0x7b4b,	// (0x00023efb) bg_set_opt_pane_cp4

0x8e77,	// (0x00025227) list_set_graphic_pane_g1_ParamLimits

0x8e77,	// (0x00025227) list_set_graphic_pane_g1

0x8e83,	// (0x00025233) list_set_graphic_pane_g2_ParamLimits

0x8e83,	// (0x00025233) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0002bade) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0002bade) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0002be5a) volume_small_pane_cp_g

0x8ea7,	// (0x00025257) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8ea7,	// (0x00025257) list_double2_large_graphic_pane_g1_cp2

0x8eb3,	// (0x00025263) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8eb3,	// (0x00025263) list_double2_large_graphic_pane_g2_cp2

0x8ec4,	// (0x00025274) list_double2_large_graphic_pane_g3_cp2

0x8ecc,	// (0x0002527c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8ecc,	// (0x0002527c) list_double2_large_graphic_pane_t1_cp2

0x8ee2,	// (0x00025292) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8ee2,	// (0x00025292) list_double2_large_graphic_pane_t2_cp2

0xaad7,	// (0x00026e87) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaad7,	// (0x00026e87) list_double_large_graphic_pane_g1_cp2

0xaae8,	// (0x00026e98) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaae8,	// (0x00026e98) list_double_large_graphic_pane_g2_cp2

0x905d,	// (0x0002540d) list_double_large_graphic_pane_g3_cp2

0xaaf9,	// (0x00026ea9) list_double_large_graphic_pane_g4_cp

0xab01,	// (0x00026eb1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab01,	// (0x00026eb1) list_double_large_graphic_pane_t1_cp2

0xab18,	// (0x00026ec8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab18,	// (0x00026ec8) list_double_large_graphic_pane_t2_cp2

0x8f4f,	// (0x000252ff) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f4f,	// (0x000252ff) list_double2_graphic_pane_g1_cp2

0x8f5d,	// (0x0002530d) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f5d,	// (0x0002530d) list_double2_graphic_pane_g2_cp2

0x8f6e,	// (0x0002531e) list_double2_graphic_pane_g3_cp2

0x8f78,	// (0x00025328) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f78,	// (0x00025328) list_double2_graphic_pane_t1_cp2

0x8f8e,	// (0x0002533e) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f8e,	// (0x0002533e) list_double2_graphic_pane_t2_cp2

0x8fa0,	// (0x00025350) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fa0,	// (0x00025350) list_single_number_heading_pane_g1_cp2

0x8fac,	// (0x0002535c) list_single_number_heading_pane_g2_cp2

0x8fb4,	// (0x00025364) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fb4,	// (0x00025364) list_single_number_heading_pane_t1_cp2

0x8fca,	// (0x0002537a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8fca,	// (0x0002537a) list_single_number_heading_pane_t2_cp2

0x8fdc,	// (0x0002538c) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8fdc,	// (0x0002538c) list_single_number_heading_pane_t3_cp2

0x8fa0,	// (0x00025350) list_single_heading_pane_g1_cp2_ParamLimits

0x8fa0,	// (0x00025350) list_single_heading_pane_g1_cp2

0x8fac,	// (0x0002535c) list_single_heading_pane_g2_cp2

0x8fb4,	// (0x00025364) list_single_heading_pane_t1_cp2_ParamLimits

0x8fb4,	// (0x00025364) list_single_heading_pane_t1_cp2

0xa8df,	// (0x00026c8f) list_single_heading_pane_t2_cp2_ParamLimits

0xa8df,	// (0x00026c8f) list_single_heading_pane_t2_cp2

0xa827,	// (0x00026bd7) list_double_graphic_pane_g1_cp2_ParamLimits

0xa827,	// (0x00026bd7) list_double_graphic_pane_g1_cp2

0xa833,	// (0x00026be3) list_double_graphic_pane_g2_cp2_ParamLimits

0xa833,	// (0x00026be3) list_double_graphic_pane_g2_cp2

0xa842,	// (0x00026bf2) list_double_graphic_pane_g3_cp2

0xa84a,	// (0x00026bfa) list_double_graphic_pane_t1_cp2_ParamLimits

0xa84a,	// (0x00026bfa) list_double_graphic_pane_t1_cp2

0xa860,	// (0x00026c10) list_double_graphic_pane_t2_cp2_ParamLimits

0xa860,	// (0x00026c10) list_double_graphic_pane_t2_cp2

0x9051,	// (0x00025401) list_double_number_pane_g1_cp2_ParamLimits

0x9051,	// (0x00025401) list_double_number_pane_g1_cp2

0x905d,	// (0x0002540d) list_double_number_pane_g2_cp2

0xa7eb,	// (0x00026b9b) list_double_number_pane_t1_cp2_ParamLimits

0xa7eb,	// (0x00026b9b) list_double_number_pane_t1_cp2

0xa7ff,	// (0x00026baf) list_double_number_pane_t2_cp2_ParamLimits

0xa7ff,	// (0x00026baf) list_double_number_pane_t2_cp2

0xa815,	// (0x00026bc5) list_double_number_pane_t3_cp2_ParamLimits

0xa815,	// (0x00026bc5) list_double_number_pane_t3_cp2

0xa6d4,	// (0x00026a84) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6d4,	// (0x00026a84) list_single_graphic_pane_g1_cp2

0x90be,	// (0x0002546e) list_single_graphic_pane_g2_cp2_ParamLimits

0x90be,	// (0x0002546e) list_single_graphic_pane_g2_cp2

0x90ca,	// (0x0002547a) list_single_graphic_pane_g3_cp2

0xa6aa,	// (0x00026a5a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6aa,	// (0x00026a5a) list_single_graphic_pane_t1_cp2

0x90be,	// (0x0002546e) list_single_number_pane_g1_cp2_ParamLimits

0x90be,	// (0x0002546e) list_single_number_pane_g1_cp2

0x90ca,	// (0x0002547a) list_single_number_pane_g2_cp2

0xa6aa,	// (0x00026a5a) list_single_number_pane_t1_cp2_ParamLimits

0xa6aa,	// (0x00026a5a) list_single_number_pane_t1_cp2

0xa6c0,	// (0x00026a70) list_single_number_pane_t2_cp2_ParamLimits

0xa6c0,	// (0x00026a70) list_single_number_pane_t2_cp2

0x8eb3,	// (0x00025263) list_double2_pane_g1_cp2_ParamLimits

0x8eb3,	// (0x00025263) list_double2_pane_g1_cp2

0x8ec4,	// (0x00025274) list_double2_pane_g2_cp2

0x9029,	// (0x000253d9) list_double2_pane_t1_cp2_ParamLimits

0x9029,	// (0x000253d9) list_double2_pane_t1_cp2

0x903f,	// (0x000253ef) list_double2_pane_t2_cp2_ParamLimits

0x903f,	// (0x000253ef) list_double2_pane_t2_cp2

0x9051,	// (0x00025401) list_double_pane_g1_cp2_ParamLimits

0x9051,	// (0x00025401) list_double_pane_g1_cp2

0x905d,	// (0x0002540d) list_double_pane_g2_cp2

0x9065,	// (0x00025415) list_double_pane_t1_cp2_ParamLimits

0x9065,	// (0x00025415) list_double_pane_t1_cp2

0x907b,	// (0x0002542b) list_double_pane_t2_cp2_ParamLimits

0x907b,	// (0x0002542b) list_double_pane_t2_cp2

0x90ae,	// (0x0002545e) list_single_pane_cp2_g3

0x90be,	// (0x0002546e) list_single_pane_g1_cp2_ParamLimits

0x90be,	// (0x0002546e) list_single_pane_g1_cp2

0x90ca,	// (0x0002547a) list_single_pane_g2_cp2

0x90d2,	// (0x00025482) list_single_pane_t1_cp2_ParamLimits

0x90d2,	// (0x00025482) list_single_pane_t1_cp2

0x90ea,	// (0x0002549a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90ea,	// (0x0002549a) list_single_large_graphic_pane_g1_cp2

0x90f6,	// (0x000254a6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x90f6,	// (0x000254a6) list_single_large_graphic_pane_g2_cp2

0x9102,	// (0x000254b2) list_single_large_graphic_pane_g3_cp2

0x910a,	// (0x000254ba) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x910a,	// (0x000254ba) list_single_large_graphic_pane_g4_cp1

0x9124,	// (0x000254d4) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9124,	// (0x000254d4) list_single_large_graphic_pane_t1_cp2

0xa676,	// (0x00026a26) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa676,	// (0x00026a26) list_single_graphic_heading_pane_g1_cp2

0xa643,	// (0x000269f3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa643,	// (0x000269f3) list_single_graphic_heading_pane_g4_cp2

0x90ca,	// (0x0002547a) list_single_graphic_heading_pane_g5_cp2

0xa682,	// (0x00026a32) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa682,	// (0x00026a32) list_single_graphic_heading_pane_t1_cp2

0xa698,	// (0x00026a48) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa698,	// (0x00026a48) list_single_graphic_heading_pane_t2_cp2

0xa637,	// (0x000269e7) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa637,	// (0x000269e7) list_single_2graphic_pane_g1_cp2

0xa643,	// (0x000269f3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa643,	// (0x000269f3) list_single_2graphic_pane_g2_cp2

0x90ca,	// (0x0002547a) list_single_2graphic_pane_g3_cp2

0xa654,	// (0x00026a04) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa654,	// (0x00026a04) list_single_2graphic_pane_g4_cp2

0xa660,	// (0x00026a10) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa660,	// (0x00026a10) list_single_2graphic_pane_t1_cp2

0x2c4e,	// (0x0001effe) list_highlight_pane_g10_cp1

0xa20f,	// (0x000265bf) list_highlight_pane_g1_cp1

0xa217,	// (0x000265c7) list_highlight_pane_g2_cp1

0xa21f,	// (0x000265cf) list_highlight_pane_g3_cp1

0xa227,	// (0x000265d7) list_highlight_pane_g4_cp1

0xa22f,	// (0x000265df) list_highlight_pane_g5_cp1

0xa237,	// (0x000265e7) list_highlight_pane_g6_cp1

0xa23f,	// (0x000265ef) list_highlight_pane_g7_cp1

0xa247,	// (0x000265f7) list_highlight_pane_g8_cp1

0xa24f,	// (0x000265ff) list_highlight_pane_g9_cp1

0xa12f,	// (0x000264df) form_field_slider_pane_t3

0xa13d,	// (0x000264ed) form_field_slider_pane_t4

0xa14b,	// (0x000264fb) slider_form_pane_ParamLimits

0xa14b,	// (0x000264fb) slider_form_pane

0x7b4b,	// (0x00023efb) control_abbreviations

0x7b4b,	// (0x00023efb) control_conventions

0x7b4b,	// (0x00023efb) control_definitions

0x7b4b,	// (0x00023efb) format_table_attribute

0xa929,	// (0x00026cd9) bg_popup_preview_window_pane_g9

0x7b4b,	// (0x00023efb) format_table_data2

0x7b4b,	// (0x00023efb) format_table_data3

0x7b4b,	// (0x00023efb) format_table_data_example

0x0008,

0x7b4b,	// (0x00023efb) intro_purpose

0xf8ca,	// (0x0002bc7a) bg_popup_preview_window_pane_g

0x7b4b,	// (0x00023efb) texts_category

0x7b4b,	// (0x00023efb) texts_graphics

0x913a,	// (0x000254ea) text_digital

0x9149,	// (0x000254f9) text_primary

0x9158,	// (0x00025508) text_primary_small

0x9167,	// (0x00025517) text_secondary

0x9176,	// (0x00025526) text_title

0xb06c,	// (0x0002741c) bg_passive_tab_pane_g1_cp3_srt

0x8dbb,	// (0x0002516b) bg_passive_tab_pane_g2_cp3_srt

0xb075,	// (0x00027425) bg_passive_tab_pane_g3_cp3_srt

0x7c2b,	// (0x00023fdb) bg_active_tab_pane_cp3_srt_ParamLimits

0x7c2b,	// (0x00023fdb) bg_active_tab_pane_cp3_srt

0xb07e,	// (0x0002742e) tabs_4_active_pane_srt_g1

0xb086,	// (0x00027436) tabs_4_active_pane_srt_t1_ParamLimits

0xb086,	// (0x00027436) tabs_4_active_pane_srt_t1

0xb06c,	// (0x0002741c) bg_active_tab_pane_g1_cp3_copy1

0x8dbb,	// (0x0002516b) bg_active_tab_pane_g2_cp3_copy1

0xb075,	// (0x00027425) bg_active_tab_pane_g3_cp3_copy1

0x7c2b,	// (0x00023fdb) tabs_2_long_active_pane_srt_ParamLimits

0x7c2b,	// (0x00023fdb) tabs_2_long_active_pane_srt

0x7c2b,	// (0x00023fdb) tabs_2_long_passive_pane_srt_ParamLimits

0x7c2b,	// (0x00023fdb) tabs_2_long_passive_pane_srt

0x86ac,	// (0x00024a5c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86ac,	// (0x00024a5c) bg_passive_tab_pane_cp4_srt

0xad57,	// (0x00027107) bg_passive_tab_pane_g1_cp4_srt

0x8dbb,	// (0x0002516b) bg_passive_tab_pane_g2_cp4_srt

0xad60,	// (0x00027110) bg_passive_tab_pane_g3_cp4_srt

0x868b,	// (0x00024a3b) bg_active_tab_pane_cp4_srt_ParamLimits

0x868b,	// (0x00024a3b) bg_active_tab_pane_cp4_srt

0xad69,	// (0x00027119) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad69,	// (0x00027119) tabs_2_long_active_pane_srt_t1

0xad57,	// (0x00027107) bg_active_tab_pane_g1_cp4_srt

0x8dbb,	// (0x0002516b) bg_active_tab_pane_g2_cp4_srt

0xad60,	// (0x00027110) bg_active_tab_pane_g3_cp4_srt

0x7ea6,	// (0x00024256) tabs_3_long_active_pane_srt_ParamLimits

0x7ea6,	// (0x00024256) tabs_3_long_active_pane_srt

0x7ea6,	// (0x00024256) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7ea6,	// (0x00024256) tabs_3_long_passive_pane_cp_srt

0x7ea6,	// (0x00024256) tabs_3_long_passive_pane_srt_ParamLimits

0x7ea6,	// (0x00024256) tabs_3_long_passive_pane_srt

0x86ac,	// (0x00024a5c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86ac,	// (0x00024a5c) bg_passive_tab_pane_cp5_srt

0x8e45,	// (0x000251f5) bg_passive_tab_pane_g1_cp5_srt

0x8dbb,	// (0x0002516b) bg_passive_tab_pane_g2_cp5_srt

0x8e4e,	// (0x000251fe) bg_passive_tab_pane_g3_cp5_srt

0x868b,	// (0x00024a3b) bg_active_tab_pane_cp5_srt_ParamLimits

0x868b,	// (0x00024a3b) bg_active_tab_pane_cp5_srt

0xad45,	// (0x000270f5) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad45,	// (0x000270f5) tabs_3_long_active_pane_srt_t1

0x8e45,	// (0x000251f5) bg_active_tab_pane_g1_cp5_srt

0x8dbb,	// (0x0002516b) bg_active_tab_pane_g2_cp5_srt

0x8e4e,	// (0x000251fe) bg_active_tab_pane_g3_cp5_srt

0xad37,	// (0x000270e7) navi_text_pane_srt_t1

0xad2f,	// (0x000270df) navi_icon_pane_srt_g1

0x934b,	// (0x000256fb) midp_editing_number_pane_srt

0x9185,	// (0x00025535) midp_ticker_pane_srt

0x9353,	// (0x00025703) midp_ticker_pane_srt_g1

0x935b,	// (0x0002570b) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0002bafd) midp_ticker_pane_srt_g

0x9363,	// (0x00025713) midp_ticker_pane_srt_t1

0xad20,	// (0x000270d0) midp_editing_number_pane_t1_copy1

0x918d,	// (0x0002553d) listscroll_midp_pane

0x918d,	// (0x0002553d) midp_form_pane

0x91fd,	// (0x000255ad) midp_info_popup_window_ParamLimits

0x91fd,	// (0x000255ad) midp_info_popup_window

0x85d7,	// (0x00024987) bg_popup_sub_pane_cp50_ParamLimits

0x85d7,	// (0x00024987) bg_popup_sub_pane_cp50

0x9e33,	// (0x000261e3) listscroll_midp_info_pane_ParamLimits

0x9e33,	// (0x000261e3) listscroll_midp_info_pane

0x9e13,	// (0x000261c3) listscroll_form_midp_pane_ParamLimits

0x9e13,	// (0x000261c3) listscroll_form_midp_pane

0x9e1f,	// (0x000261cf) scroll_bar_cp050

0x9df3,	// (0x000261a3) list_midp_pane

0xbae7,	// (0x00027e97) signal_pane_g2_cp

0x9d2d,	// (0x000260dd) listscroll_midp_info_pane_t1_ParamLimits

0x9d2d,	// (0x000260dd) listscroll_midp_info_pane_t1

0x9d45,	// (0x000260f5) listscroll_midp_info_pane_t2_ParamLimits

0x9d45,	// (0x000260f5) listscroll_midp_info_pane_t2

0x9d83,	// (0x00026133) listscroll_midp_info_pane_t3_ParamLimits

0x9d83,	// (0x00026133) listscroll_midp_info_pane_t3

0x9dbd,	// (0x0002616d) listscroll_midp_info_pane_t4_ParamLimits

0x9dbd,	// (0x0002616d) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0002bbb5) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0002bbb5) listscroll_midp_info_pane_t

0x8638,	// (0x000249e8) scroll_pane_cp21

0x9ccb,	// (0x0002607b) form_midp_field_choice_group_pane

0x9cd4,	// (0x00026084) form_midp_field_text_pane

0x9d13,	// (0x000260c3) form_midp_field_time_pane

0x9d1b,	// (0x000260cb) form_midp_gauge_slider_pane

0x9d24,	// (0x000260d4) form_midp_gauge_wait_pane

0x7b4b,	// (0x00023efb) form_midp_image_pane

0x4de9,	// (0x00021199) list_single_midp_pane_ParamLimits

0x4de9,	// (0x00021199) list_single_midp_pane

0x9c83,	// (0x00026033) form_midp_field_text_pane_t1

0x9a53,	// (0x00025e03) input_focus_pane_cp050

0x9cba,	// (0x0002606a) list_midp_form_text_pane

0x9c52,	// (0x00026002) form_midp_field_choice_group_pane_t1

0x9c60,	// (0x00026010) input_focus_pane_cp051

0x9c74,	// (0x00026024) list_midp_choice_pane

0x7b4b,	// (0x00023efb) status_idle_pane

0x9c36,	// (0x00025fe6) form_midp_field_time_pane_t1

0x2c4e,	// (0x0001effe) wait_anim_pane_g2_copy1

0x9c44,	// (0x00025ff4) form_midp_field_time_pane_t2

0x0001,

0x92ab,	// (0x0002565b) aid_navinavi_width_2_pane

0xf800,	// (0x0002bbb0) form_midp_field_time_pane_t

0x7b4b,	// (0x00023efb) input_focus_pane_cp052

0x7b4b,	// (0x00023efb) bg_input_focus_pane_cp040

0x9bf6,	// (0x00025fa6) form_midp_gauge_slider_pane_t1

0x9c04,	// (0x00025fb4) form_midp_gauge_slider_pane_t2

0x9c12,	// (0x00025fc2) form_midp_gauge_slider_pane_t3

0x9c20,	// (0x00025fd0) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0002bba7) form_midp_gauge_slider_pane_t

0x9c2e,	// (0x00025fde) form_midp_slider_pane

0x7c2b,	// (0x00023fdb) bg_input_focus_pane_cp041_ParamLimits

0x7c2b,	// (0x00023fdb) bg_input_focus_pane_cp041

0x9bc3,	// (0x00025f73) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bc3,	// (0x00025f73) form_midp_gauge_wait_pane_t1

0x9bd5,	// (0x00025f85) form_midp_gauge_wait_pane_t2_ParamLimits

0x9bd5,	// (0x00025f85) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0002bba2) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0002bba2) form_midp_gauge_wait_pane_t

0x9be7,	// (0x00025f97) form_midp_wait_pane_ParamLimits

0x9be7,	// (0x00025f97) form_midp_wait_pane

0x9b8d,	// (0x00025f3d) form_midp_image_pane_g1

0x9b96,	// (0x00025f46) form_midp_image_pane_t1

0x9ba5,	// (0x00025f55) form_midp_image_pane_t2

0x9bb4,	// (0x00025f64) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0002bb9b) form_midp_image_pane_t

0x9b84,	// (0x00025f34) list_single_midp_pane_g1

0x4dda,	// (0x0002118a) list_single_midp_pane_t1

0x9b5c,	// (0x00025f0c) list_midp_form_item_pane_ParamLimits

0x9b5c,	// (0x00025f0c) list_midp_form_item_pane

0x9253,	// (0x00025603) list_midp_form_item_pane_t1

0x9262,	// (0x00025612) midp_ticker_pane_g1

0x926e,	// (0x0002561e) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0002bae3) midp_ticker_pane_g

0x927a,	// (0x0002562a) midp_ticker_pane_t1

0xaf71,	// (0x00027321) midp_editing_number_pane_t1

0xaf4f,	// (0x000272ff) midp_editing_number_pane

0xaf5e,	// (0x0002730e) midp_ticker_pane

0xad10,	// (0x000270c0) ai_message_heading_pane

0x7b4b,	// (0x00023efb) bg_popup_window_pane_cp14

0xad18,	// (0x000270c8) listscroll_ai_message_pane

0xac9a,	// (0x0002704a) ai_message_heading_pane_g1_ParamLimits

0xac9a,	// (0x0002704a) ai_message_heading_pane_g1

0xaca6,	// (0x00027056) ai_message_heading_pane_g2_ParamLimits

0xaca6,	// (0x00027056) ai_message_heading_pane_g2

0xacb2,	// (0x00027062) ai_message_heading_pane_g3_ParamLimits

0xacb2,	// (0x00027062) ai_message_heading_pane_g3

0xacbe,	// (0x0002706e) ai_message_heading_pane_g4_ParamLimits

0xacbe,	// (0x0002706e) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0002bcdc) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0002bcdc) ai_message_heading_pane_g

0xacca,	// (0x0002707a) ai_message_heading_pane_t1_ParamLimits

0xacca,	// (0x0002707a) ai_message_heading_pane_t1

0xace4,	// (0x00027094) ai_message_heading_pane_t2_ParamLimits

0xace4,	// (0x00027094) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0002bce5) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0002bce5) ai_message_heading_pane_t

0xacf6,	// (0x000270a6) bg_popup_heading_pane_cp1_ParamLimits

0xacf6,	// (0x000270a6) bg_popup_heading_pane_cp1

0xac88,	// (0x00027038) list_ai_message_pane_ParamLimits

0xac88,	// (0x00027038) list_ai_message_pane

0x8638,	// (0x000249e8) scroll_pane_cp10

0xac24,	// (0x00026fd4) list_ai_message_pane_g1

0xac2c,	// (0x00026fdc) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0002bcb9) list_ai_message_pane_g

0xac34,	// (0x00026fe4) list_ai_message_pane_t1_ParamLimits

0xac34,	// (0x00026fe4) list_ai_message_pane_t1

0xac49,	// (0x00026ff9) list_ai_message_pane_t2_ParamLimits

0xac49,	// (0x00026ff9) list_ai_message_pane_t2

0xac5e,	// (0x0002700e) list_ai_message_pane_t3_ParamLimits

0xac5e,	// (0x0002700e) list_ai_message_pane_t3

0xac73,	// (0x00027023) list_ai_message_pane_t4_ParamLimits

0xac73,	// (0x00027023) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0002bcbe) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0002bcbe) list_ai_message_pane_t

0xac0f,	// (0x00026fbf) cell_ai_soft_ind_pane_ParamLimits

0xac0f,	// (0x00026fbf) cell_ai_soft_ind_pane

0x928c,	// (0x0002563c) cell_ai_soft_ind_pane_g1_ParamLimits

0x928c,	// (0x0002563c) cell_ai_soft_ind_pane_g1

0x7b4b,	// (0x00023efb) grid_highlight_cp1

0x9299,	// (0x00025649) text_secondary_cp56_ParamLimits

0x9299,	// (0x00025649) text_secondary_cp56

0xabe4,	// (0x00026f94) example_general_pane_ParamLimits

0xabe4,	// (0x00026f94) example_general_pane

0xabf0,	// (0x00026fa0) example_parent_pane_g1_ParamLimits

0xabf0,	// (0x00026fa0) example_parent_pane_g1

0xabfc,	// (0x00026fac) example_parent_pane_t1_ParamLimits

0xabfc,	// (0x00026fac) example_parent_pane_t1

0x6472,	// (0x00022822) popup_preview_text_window_ParamLimits

0x6472,	// (0x00022822) popup_preview_text_window

0x90b6,	// (0x00025466) list_single_pane_cp2_g4

0x7f82,	// (0x00024332) bg_popup_preview_window_pane_ParamLimits

0x7f82,	// (0x00024332) bg_popup_preview_window_pane

0xa931,	// (0x00026ce1) popup_preview_text_window_t1_ParamLimits

0xa931,	// (0x00026ce1) popup_preview_text_window_t1

0xa94f,	// (0x00026cff) popup_preview_text_window_t2_ParamLimits

0xa94f,	// (0x00026cff) popup_preview_text_window_t2

0xa998,	// (0x00026d48) popup_preview_text_window_t3_ParamLimits

0xa998,	// (0x00026d48) popup_preview_text_window_t3

0xa9dd,	// (0x00026d8d) popup_preview_text_window_t4_ParamLimits

0xa9dd,	// (0x00026d8d) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0002bc8d) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0002bc8d) popup_preview_text_window_t

0xaa5b,	// (0x00026e0b) scroll_pane_cp11

0x99d3,	// (0x00025d83) bg_popup_preview_window_pane_g1

0xa8f1,	// (0x00026ca1) bg_popup_preview_window_pane_g2

0xa8f9,	// (0x00026ca9) bg_popup_preview_window_pane_g3

0xa901,	// (0x00026cb1) bg_popup_preview_window_pane_g4

0xa909,	// (0x00026cb9) bg_popup_preview_window_pane_g5

0xa911,	// (0x00026cc1) bg_popup_preview_window_pane_g6

0xa919,	// (0x00026cc9) bg_popup_preview_window_pane_g7

0xa921,	// (0x00026cd1) bg_popup_preview_window_pane_g8

0x5686,	// (0x00021a36) aid_popup_width_pane

0x6450,	// (0x00022800) popup_midp_note_alarm_window_ParamLimits

0x6450,	// (0x00022800) popup_midp_note_alarm_window

0x84ac,	// (0x0002485c) data_form_pane_ParamLimits

0x4a37,	// (0x00020de7) form_field_data_pane_g1

0x4a41,	// (0x00020df1) form_field_data_pane_t1_ParamLimits

0x84b8,	// (0x00024868) input_focus_pane_ParamLimits

0x4a59,	// (0x00020e09) data_form_wide_pane_ParamLimits

0x4a6a,	// (0x00020e1a) form_field_data_wide_pane_g1

0x4a76,	// (0x00020e26) form_field_data_wide_pane_t1_ParamLimits

0x8229,	// (0x000245d9) input_focus_pane_cp6_ParamLimits

0x85e5,	// (0x00024995) input_popup_find_pane_g1_ParamLimits

0x85e5,	// (0x00024995) input_popup_find_pane_g1

0x5bf8,	// (0x00021fa8) aid_navi_side_left_pane

0x5c0d,	// (0x00021fbd) aid_navi_side_right_pane

0xa30a,	// (0x000266ba) bg_popup_window_pane_cp30_ParamLimits

0xa30a,	// (0x000266ba) bg_popup_window_pane_cp30

0xa384,	// (0x00026734) popup_midp_note_alarm_window_g1_ParamLimits

0xa384,	// (0x00026734) popup_midp_note_alarm_window_g1

0xa3b4,	// (0x00026764) popup_midp_note_alarm_window_t1_ParamLimits

0xa3b4,	// (0x00026764) popup_midp_note_alarm_window_t1

0xa455,	// (0x00026805) popup_midp_note_alarm_window_t2_ParamLimits

0xa455,	// (0x00026805) popup_midp_note_alarm_window_t2

0xa503,	// (0x000268b3) popup_midp_note_alarm_window_t3_ParamLimits

0xa503,	// (0x000268b3) popup_midp_note_alarm_window_t3

0xa535,	// (0x000268e5) popup_midp_note_alarm_window_t4_ParamLimits

0xa535,	// (0x000268e5) popup_midp_note_alarm_window_t4

0xa55b,	// (0x0002690b) popup_midp_note_alarm_window_t5_ParamLimits

0xa55b,	// (0x0002690b) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0002bc2a) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0002bc2a) popup_midp_note_alarm_window_t

0xa607,	// (0x000269b7) wait_bar_pane_cp1_ParamLimits

0xa607,	// (0x000269b7) wait_bar_pane_cp1

0x7b4b,	// (0x00023efb) wait_anim_pane_copy1

0x7b4b,	// (0x00023efb) wait_border_pane_copy1

0x9ff0,	// (0x000263a0) wait_border_pane_g1_copy1

0x4a90,	// (0x00020e40) form_field_popup_pane_g1

0x4a98,	// (0x00020e48) form_field_popup_pane_t1_ParamLimits

0x84b8,	// (0x00024868) input_focus_pane_cp7_ParamLimits

0x84e6,	// (0x00024896) list_form_pane_ParamLimits

0x4ab0,	// (0x00020e60) form_field_popup_wide_pane_g1

0x4ab8,	// (0x00020e68) form_field_popup_wide_pane_t1_ParamLimits

0x84b8,	// (0x00024868) input_focus_pane_cp8_ParamLimits

0x84f2,	// (0x000248a2) list_form_wide_pane_ParamLimits

0xb10e,	// (0x000274be) aid_size_cell_graphic_pane

0x4b42,	// (0x00020ef2) data_form_pane_t1_ParamLimits

0x4e43,	// (0x000211f3) data_form_wide_pane_t1_ParamLimits

0x959a,	// (0x0002594a) bg_status_flat_pane

0x7b8b,	// (0x00023f3b) title_pane_t1_ParamLimits

0x7bf3,	// (0x00023fa3) title_pane_t2_ParamLimits

0x7c19,	// (0x00023fc9) title_pane_t3_ParamLimits

0xf532,	// (0x0002b8e2) title_pane_t_ParamLimits

0x8ab9,	// (0x00024e69) level_1_signal_ParamLimits

0x8acb,	// (0x00024e7b) level_2_signal_ParamLimits

0x8ade,	// (0x00024e8e) level_3_signal_ParamLimits

0x8af1,	// (0x00024ea1) level_4_signal_ParamLimits

0x8b04,	// (0x00024eb4) level_5_signal_ParamLimits

0x8b17,	// (0x00024ec7) level_6_signal_ParamLimits

0x8b2a,	// (0x00024eda) level_7_signal_ParamLimits

0x8ab9,	// (0x00024e69) level_1_battery_ParamLimits

0x8acb,	// (0x00024e7b) level_2_battery_ParamLimits

0x8ade,	// (0x00024e8e) level_3_battery_ParamLimits

0x8af1,	// (0x00024ea1) level_4_battery_ParamLimits

0x8b04,	// (0x00024eb4) level_5_battery_ParamLimits

0x8b17,	// (0x00024ec7) level_6_battery_ParamLimits

0x8b2a,	// (0x00024eda) level_7_battery_ParamLimits

0xa20f,	// (0x000265bf) bg_status_flat_pane_g1

0xa217,	// (0x000265c7) bg_status_flat_pane_g2

0xa21f,	// (0x000265cf) bg_status_flat_pane_g3

0xa227,	// (0x000265d7) bg_status_flat_pane_g4

0xa22f,	// (0x000265df) bg_status_flat_pane_g5

0xa237,	// (0x000265e7) bg_status_flat_pane_g6

0xa23f,	// (0x000265ef) bg_status_flat_pane_g7

0x7c41,	// (0x00023ff1) tabs_3_active_pane_t1_ParamLimits

0x7c41,	// (0x00023ff1) tabs_3_passive_pane_t1_ParamLimits

0x7c5b,	// (0x0002400b) tabs_4_active_pane_t1_ParamLimits

0x7c5b,	// (0x0002400b) tabs_4_1_passive_pane_t1_ParamLimits

0x8679,	// (0x00024a29) tabs_2_active_pane_t1_ParamLimits

0x8679,	// (0x00024a29) tabs_2_passive_pane_t1_ParamLimits

0x868b,	// (0x00024a3b) bg_active_tab_pane_cp4_ParamLimits

0x8699,	// (0x00024a49) tabs_2_long_active_pane_t1_ParamLimits

0x86ac,	// (0x00024a5c) bg_passive_tab_pane_cp4_ParamLimits

0x671f,	// (0x00022acf) list_single_midp_graphic_pane_t1_ParamLimits

0x868b,	// (0x00024a3b) bg_active_tab_pane_cp5_ParamLimits

0x86b8,	// (0x00024a68) tabs_3_long_active_pane_t1_ParamLimits

0x86ac,	// (0x00024a5c) bg_passive_tab_pane_cp5_ParamLimits

0x671f,	// (0x00022acf) list_single_midp_graphic_pane_t1

0x959a,	// (0x0002594a) bg_status_flat_pane_ParamLimits

0x9663,	// (0x00025a13) indicator_pane_cp2_ParamLimits

0x9663,	// (0x00025a13) indicator_pane_cp2

0x978e,	// (0x00025b3e) navi_pane_srt_ParamLimits

0x978e,	// (0x00025b3e) navi_pane_srt

0x97b2,	// (0x00025b62) popup_clock_digital_analogue_window_cp1

0x7d08,	// (0x000240b8) indicator_pane_t1

0x9185,	// (0x00025535) copy_highlight_pane

0x9185,	// (0x00025535) cursor_graphics_pane

0x9185,	// (0x00025535) graphic_within_text_pane

0x9185,	// (0x00025535) link_highlight_pane

0xaa1e,	// (0x00026dce) popup_preview_text_window_t5_ParamLimits

0xaa1e,	// (0x00026dce) popup_preview_text_window_t5

0x92b3,	// (0x00025663) cursor_digital_pane

0x92b3,	// (0x00025663) cursor_primary_pane

0x92c4,	// (0x00025674) cursor_primary_small_pane

0x92cc,	// (0x0002567c) cursor_secondary_pane

0x92d4,	// (0x00025684) cursor_title_pane

0x92b3,	// (0x00025663) link_highlight_digital_pane

0x92bb,	// (0x0002566b) link_highlight_primary_pane

0x92c4,	// (0x00025674) link_highlight_primary_small_pane

0x92cc,	// (0x0002567c) link_highlight_secondary_pane

0x92d4,	// (0x00025684) link_highlight_title_pane

0x92b3,	// (0x00025663) copy_highlight_digital_pane

0x92b3,	// (0x00025663) copy_highlight_primary_pane

0x92c4,	// (0x00025674) copy_highlight_primary_small_pane

0x92cc,	// (0x0002567c) copy_highlight_secondary_pane

0x92d4,	// (0x00025684) copy_highlight_title_pane

0x92cc,	// (0x0002567c) graphic_text_digital_pane

0xa2ad,	// (0x0002665d) graphic_text_primary_pane

0xa2b6,	// (0x00026666) graphic_text_primary_small_pane

0x92c4,	// (0x00025674) graphic_text_secondary_pane

0x92b3,	// (0x00025663) graphic_text_title_pane

0x92dc,	// (0x0002568c) cursor_primary_pane_g1

0xa29f,	// (0x0002664f) cursor_text_primary_t1

0xa287,	// (0x00026637) cursor_primary_small_pane_g1

0xa291,	// (0x00026641) cursor_text_primary_small_t1

0xa26f,	// (0x0002661f) cursor_primary_small_pane_g1_copy1

0xa279,	// (0x00026629) cursor_text_primary_small_t1_copy1

0xa257,	// (0x00026607) cursor_text_title_t1

0xa265,	// (0x00026615) cursor_title_pane_g1

0x92dc,	// (0x0002568c) cursor_digital_pane_g1

0x92e6,	// (0x00025696) cursor_text_digital_t1

0x930b,	// (0x000256bb) link_highlight_primary_pane_g1

0xa200,	// (0x000265b0) link_highlight_primary_pane_t1

0x92f4,	// (0x000256a4) link_highlight_primary_small_pane_g1

0x92fc,	// (0x000256ac) link_highlight_primary_small_pane_t1

0x930b,	// (0x000256bb) link_highlight_secondary_pane_g1

0x9313,	// (0x000256c3) link_highlight_secondary_pane_t1

0xa174,	// (0x00026524) link_highlight_title_pane_g1

0xa17c,	// (0x0002652c) link_highlight_title_pane_t1

0xa15d,	// (0x0002650d) link_highlight_digital_pane_g1

0xa165,	// (0x00026515) link_highlight_digital_pane_t1

0xa035,	// (0x000263e5) copy_highlight_primary_pane_g1

0xa03d,	// (0x000263ed) copy_highlight_primary_pane_t1

0xa00f,	// (0x000263bf) copy_highlight_primary_small_pane_g1

0xa026,	// (0x000263d6) copy_highlight_primary_small_pane_t1

0x9322,	// (0x000256d2) copy_highlight_secondary_pane_g1

0x932a,	// (0x000256da) copy_highlight_secondary_pane_t1

0xa00f,	// (0x000263bf) copy_highlight_title_pane_g1

0xa017,	// (0x000263c7) copy_highlight_title_pane_t1

0xa035,	// (0x000263e5) copy_highlight_digital_pane_g1

0xb2dc,	// (0x0002768c) copy_highlight_digital_pane_t1

0xb230,	// (0x000275e0) graphic_text_primary_pane_g1

0xb2c0,	// (0x00027670) graphic_text_primary_pane_t1

0xb2ce,	// (0x0002767e) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0002bd59) graphic_text_primary_pane_t

0xb29c,	// (0x0002764c) graphic_text_primary_small_pane_g1

0xb2a4,	// (0x00027654) graphic_text_primary_small_pane_t1

0xb2b2,	// (0x00027662) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0002bd54) graphic_text_primary_small_pane_t

0xb278,	// (0x00027628) graphic_text_secondary_pane_g1

0xb280,	// (0x00027630) graphic_text_secondary_pane_t1

0xb28e,	// (0x0002763e) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0002bd4f) graphic_text_secondary_pane_t

0xb254,	// (0x00027604) graphic_text_title_pane_g1

0xb25c,	// (0x0002760c) graphic_text_title_pane_t1

0xb26a,	// (0x0002761a) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0002bd4a) graphic_text_title_pane_t

0xb230,	// (0x000275e0) graphic_text_digital_pane_g1

0xb238,	// (0x000275e8) graphic_text_digital_pane_t1

0xb246,	// (0x000275f6) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0002bd45) graphic_text_digital_pane_t

0x7c2b,	// (0x00023fdb) navi_icon_pane_srt_ParamLimits

0x7c2b,	// (0x00023fdb) navi_icon_pane_srt

0x7b4b,	// (0x00023efb) navi_midp_pane_srt

0x7b4b,	// (0x00023efb) navi_navi_pane_srt

0x7c2b,	// (0x00023fdb) navi_text_pane_srt_ParamLimits

0x7c2b,	// (0x00023fdb) navi_text_pane_srt

0xb1fb,	// (0x000275ab) navi_navi_icon_text_pane_srt

0xb203,	// (0x000275b3) navi_navi_pane_srt_g1_ParamLimits

0xb203,	// (0x000275b3) navi_navi_pane_srt_g1

0xb215,	// (0x000275c5) navi_navi_pane_srt_g2_ParamLimits

0xb215,	// (0x000275c5) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0002bd40) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0002bd40) navi_navi_pane_srt_g

0xb227,	// (0x000275d7) navi_navi_tabs_pane_srt

0xb1fb,	// (0x000275ab) navi_navi_text_pane_srt

0xb1fb,	// (0x000275ab) navi_navi_volume_pane_srt

0xb1ec,	// (0x0002759c) navi_navi_text_pane_srt_t1

0x6a99,	// (0x00022e49) navi_navi_volume_pane_srt_g1

0x6aa1,	// (0x00022e51) volume_small_pane_srt_ParamLimits

0x6aa1,	// (0x00022e51) volume_small_pane_srt

0x5ed8,	// (0x00022288) volume_small_pane_srt_g1_ParamLimits

0x5ed8,	// (0x00022288) volume_small_pane_srt_g1

0x5ee8,	// (0x00022298) volume_small_pane_srt_g2_ParamLimits

0x5ee8,	// (0x00022298) volume_small_pane_srt_g2

0x5ef9,	// (0x000222a9) volume_small_pane_srt_g3_ParamLimits

0x5ef9,	// (0x000222a9) volume_small_pane_srt_g3

0x5f0a,	// (0x000222ba) volume_small_pane_srt_g4_ParamLimits

0x5f0a,	// (0x000222ba) volume_small_pane_srt_g4

0x5f1b,	// (0x000222cb) volume_small_pane_srt_g5_ParamLimits

0x5f1b,	// (0x000222cb) volume_small_pane_srt_g5

0x5f2c,	// (0x000222dc) volume_small_pane_srt_g6_ParamLimits

0x5f2c,	// (0x000222dc) volume_small_pane_srt_g6

0x5f3d,	// (0x000222ed) volume_small_pane_srt_g7_ParamLimits

0x5f3d,	// (0x000222ed) volume_small_pane_srt_g7

0x5f4e,	// (0x000222fe) volume_small_pane_srt_g8_ParamLimits

0x5f4e,	// (0x000222fe) volume_small_pane_srt_g8

0x5f5f,	// (0x0002230f) volume_small_pane_srt_g9_ParamLimits

0x5f5f,	// (0x0002230f) volume_small_pane_srt_g9

0x5f70,	// (0x00022320) volume_small_pane_srt_g10_ParamLimits

0x5f70,	// (0x00022320) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002bae8) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002bae8) volume_small_pane_srt_g

0x802b,	// (0x000243db) query_popup_data_pane_cp2

0xb1d2,	// (0x00027582) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1d2,	// (0x00027582) navi_navi_icon_text_pane_srt_t1

0xa2ad,	// (0x0002665d) navi_tabs_2_long_pane_srt

0xa2ad,	// (0x0002665d) navi_tabs_2_pane_srt

0xa2ad,	// (0x0002665d) navi_tabs_3_long_pane_srt

0xa2ad,	// (0x0002665d) navi_tabs_3_pane_srt

0xa2ad,	// (0x0002665d) navi_tabs_4_pane_srt

0x6a79,	// (0x00022e29) tabs_2_active_pane_srt_ParamLimits

0x6a79,	// (0x00022e29) tabs_2_active_pane_srt

0x6a89,	// (0x00022e39) tabs_2_passive_pane_srt_ParamLimits

0x6a89,	// (0x00022e39) tabs_2_passive_pane_srt

0x94a9,	// (0x00025859) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94a9,	// (0x00025859) bg_passive_tab_pane_cp1_srt

0xb19e,	// (0x0002754e) bg_passive_tab_pane_g1_cp1_srt

0x8dbb,	// (0x0002516b) bg_passive_tab_pane_g2_cp1_srt

0xb1a7,	// (0x00027557) bg_passive_tab_pane_g3_cp1_srt

0x7c2b,	// (0x00023fdb) bg_active_tab_pane_cp1_srt_ParamLimits

0x7c2b,	// (0x00023fdb) bg_active_tab_pane_cp1_srt

0xb1b0,	// (0x00027560) tabs_2_active_pane_srt_g1

0xb1b8,	// (0x00027568) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b8,	// (0x00027568) tabs_2_active_pane_srt_t1

0xb19e,	// (0x0002754e) bg_active_tab_pane_g1_cp1_srt

0x8dbb,	// (0x0002516b) bg_active_tab_pane_g2_cp1_srt

0xb1a7,	// (0x00027557) bg_active_tab_pane_g3_cp1_srt

0x6a46,	// (0x00022df6) tabs_3_active_pane_srt_ParamLimits

0x6a46,	// (0x00022df6) tabs_3_active_pane_srt

0x6a57,	// (0x00022e07) tabs_3_passive_pane_cp_srt_ParamLimits

0x6a57,	// (0x00022e07) tabs_3_passive_pane_cp_srt

0x6a68,	// (0x00022e18) tabs_3_passive_pane_srt_ParamLimits

0x6a68,	// (0x00022e18) tabs_3_passive_pane_srt

0x94a9,	// (0x00025859) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94a9,	// (0x00025859) bg_passive_tab_pane_cp2_srt

0x9339,	// (0x000256e9) bg_passive_tab_pane_g1_cp2_srt

0x8dbb,	// (0x0002516b) bg_passive_tab_pane_g2_cp2_srt

0x9342,	// (0x000256f2) bg_passive_tab_pane_g3_cp2_srt

0x7c2b,	// (0x00023fdb) bg_active_tab_pane_cp2_srt_ParamLimits

0x7c2b,	// (0x00023fdb) bg_active_tab_pane_cp2_srt

0xb184,	// (0x00027534) tabs_3_active_pane_srt_g1

0xb18c,	// (0x0002753c) tabs_3_active_pane_srt_t1_ParamLimits

0xb18c,	// (0x0002753c) tabs_3_active_pane_srt_t1

0x9339,	// (0x000256e9) bg_active_tab_pane_g1_cp2_srt

0x8dbb,	// (0x0002516b) bg_active_tab_pane_g2_cp2_srt

0x9342,	// (0x000256f2) bg_active_tab_pane_g3_cp2_srt

0x69fe,	// (0x00022dae) tabs_4_active_pane_srt_ParamLimits

0x69fe,	// (0x00022dae) tabs_4_active_pane_srt

0x6a10,	// (0x00022dc0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6a10,	// (0x00022dc0) tabs_4_passive_pane_cp2_srt

0x60e3,	// (0x00022493) aid_size_cell_toolbar

0x86ac,	// (0x00024a5c) main_idle_act_pane_ParamLimits

0x6286,	// (0x00022636) popup_large_graphic_colour_window_ParamLimits

0x65ed,	// (0x0002299d) popup_toolbar_window_ParamLimits

0x65ed,	// (0x0002299d) popup_toolbar_window

0x4ea3,	// (0x00021253) list_single_graphic_2heading_pane_ParamLimits

0x4ea3,	// (0x00021253) list_single_graphic_2heading_pane

0x8868,	// (0x00024c18) aid_size_cell_apps_grid_lsc_pane

0x887a,	// (0x00024c2a) aid_size_cell_apps_grid_prt_pane

0x94a9,	// (0x00025859) bg_wml_button_pane_cp1_ParamLimits

0x94a9,	// (0x00025859) bg_wml_button_pane_cp1

0x9c83,	// (0x00026033) form_midp_field_text_pane_t1_ParamLimits

0x9a53,	// (0x00025e03) input_focus_pane_cp050_ParamLimits

0x9cba,	// (0x0002606a) list_midp_form_text_pane_ParamLimits

0x9c60,	// (0x00026010) input_focus_pane_cp051_ParamLimits

0x9c74,	// (0x00026024) list_midp_choice_pane_ParamLimits

0x9b0c,	// (0x00025ebc) list_single_2graphic_pane_cp3_ParamLimits

0x9b0c,	// (0x00025ebc) list_single_2graphic_pane_cp3

0x9b2d,	// (0x00025edd) list_single_midp_graphic_pane_ParamLimits

0x9b2d,	// (0x00025edd) list_single_midp_graphic_pane

0x4ca4,	// (0x00021054) list_single_graphic_2heading_pane_g1_ParamLimits

0x4ca4,	// (0x00021054) list_single_graphic_2heading_pane_g1

0x4cb0,	// (0x00021060) list_single_graphic_2heading_pane_g4_ParamLimits

0x4cb0,	// (0x00021060) list_single_graphic_2heading_pane_g4

0x4cbc,	// (0x0002106c) list_single_graphic_2heading_pane_g5_ParamLimits

0x4cbc,	// (0x0002106c) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0002bb3b) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0002bb3b) list_single_graphic_2heading_pane_g

0x4cc8,	// (0x00021078) list_single_graphic_2heading_pane_t1_ParamLimits

0x4cc8,	// (0x00021078) list_single_graphic_2heading_pane_t1

0x4cdc,	// (0x0002108c) list_single_graphic_2heading_pane_t2_ParamLimits

0x4cdc,	// (0x0002108c) list_single_graphic_2heading_pane_t2

0x4cf6,	// (0x000210a6) list_single_graphic_2heading_pane_t3_ParamLimits

0x4cf6,	// (0x000210a6) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0002bb42) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0002bb42) list_single_graphic_2heading_pane_t

0x9911,	// (0x00025cc1) bg_popup_sub_pane_cp2

0x993b,	// (0x00025ceb) grid_toobar_pane

0x669a,	// (0x00022a4a) cell_toolbar_pane_ParamLimits

0x669a,	// (0x00022a4a) cell_toolbar_pane

0x9977,	// (0x00025d27) cell_toolbar_pane_g1_ParamLimits

0x9977,	// (0x00025d27) cell_toolbar_pane_g1

0x998b,	// (0x00025d3b) cell_toolbar_pane_g2_ParamLimits

0x998b,	// (0x00025d3b) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0002bb50) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0002bb50) cell_toolbar_pane_g

0x99ad,	// (0x00025d5d) grid_highlight_pane_cp2_ParamLimits

0x99ad,	// (0x00025d5d) grid_highlight_pane_cp2

0x99c7,	// (0x00025d77) toolbar_button_pane

0x99d3,	// (0x00025d83) toolbar_button_pane_g1

0x99db,	// (0x00025d8b) toolbar_button_pane_g2

0x99e3,	// (0x00025d93) toolbar_button_pane_g3

0x99eb,	// (0x00025d9b) toolbar_button_pane_g4

0x99f3,	// (0x00025da3) toolbar_button_pane_g5

0x99fb,	// (0x00025dab) toolbar_button_pane_g6

0x9a03,	// (0x00025db3) toolbar_button_pane_g7

0x9a0b,	// (0x00025dbb) toolbar_button_pane_g8

0x9a13,	// (0x00025dc3) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0002bb55) toolbar_button_pane_g

0x66d2,	// (0x00022a82) list_single_2graphic_pane_g1_cp3_ParamLimits

0x66d2,	// (0x00022a82) list_single_2graphic_pane_g1_cp3

0x66de,	// (0x00022a8e) list_single_2graphic_pane_g2_cp3_ParamLimits

0x66de,	// (0x00022a8e) list_single_2graphic_pane_g2_cp3

0x66ef,	// (0x00022a9f) list_single_2graphic_pane_g3_cp3

0x66f7,	// (0x00022aa7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x66f7,	// (0x00022aa7) list_single_2graphic_pane_g4_cp3

0x6703,	// (0x00022ab3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6703,	// (0x00022ab3) list_single_2graphic_pane_t1_cp3

0x9a1b,	// (0x00025dcb) list_single_midp_graphic_pane_g2_ParamLimits

0x9a1b,	// (0x00025dcb) list_single_midp_graphic_pane_g2

0x60eb,	// (0x0002249b) aid_zoom_text_primary

0x4c78,	// (0x00021028) aid_zoom_text_secondary

0x93f3,	// (0x000257a3) status_small_pane_g7_ParamLimits

0x93f3,	// (0x000257a3) status_small_pane_g7

0x9416,	// (0x000257c6) status_small_pane_t1_ParamLimits

0x7b62,	// (0x00023f12) title_pane_g2

0x0003,

0xf529,	// (0x0002b8d9) title_pane_g

0x80d3,	// (0x00024483) aid_size_cell_colour_1_pane_ParamLimits

0x80d3,	// (0x00024483) aid_size_cell_colour_1_pane

0x80e7,	// (0x00024497) aid_size_cell_colour_2_pane_ParamLimits

0x80e7,	// (0x00024497) aid_size_cell_colour_2_pane

0x80fb,	// (0x000244ab) aid_size_cell_colour_3_pane_ParamLimits

0x80fb,	// (0x000244ab) aid_size_cell_colour_3_pane

0x810f,	// (0x000244bf) aid_size_cell_colour_4_pane_ParamLimits

0x810f,	// (0x000244bf) aid_size_cell_colour_4_pane

0x5b35,	// (0x00021ee5) title_pane_stacon_g1_ParamLimits

0x5b35,	// (0x00021ee5) title_pane_stacon_g1

0xa094,	// (0x00026444) popup_note_wait_window_g3_ParamLimits

0xa094,	// (0x00026444) popup_note_wait_window_g3

0xa10a,	// (0x000264ba) popup_note_wait_window_t5_ParamLimits

0xa10a,	// (0x000264ba) popup_note_wait_window_t5

0x7b4b,	// (0x00023efb) main_feb_china_hwr_fs_writing_pane

0x6167,	// (0x00022517) popup_feb_china_hwr_fs_window_ParamLimits

0x6167,	// (0x00022517) popup_feb_china_hwr_fs_window

0x6735,	// (0x00022ae5) aid_size_cell_hwr_fs_ParamLimits

0x6735,	// (0x00022ae5) aid_size_cell_hwr_fs

0x9a53,	// (0x00025e03) bg_popup_sub_pane_cp3_ParamLimits

0x9a53,	// (0x00025e03) bg_popup_sub_pane_cp3

0x674a,	// (0x00022afa) grid_hwr_fs_pane_ParamLimits

0x674a,	// (0x00022afa) grid_hwr_fs_pane

0x6762,	// (0x00022b12) linegrid_hwr_fs_pane_ParamLimits

0x6762,	// (0x00022b12) linegrid_hwr_fs_pane

0x6772,	// (0x00022b22) cell_hwr_fs_pane_ParamLimits

0x6772,	// (0x00022b22) cell_hwr_fs_pane

0x9a5f,	// (0x00025e0f) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a5f,	// (0x00025e0f) linegrid_hwr_fs_pane_g1

0x9a6b,	// (0x00025e1b) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a6b,	// (0x00025e1b) linegrid_hwr_fs_pane_g2

0x9a7d,	// (0x00025e2d) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a7d,	// (0x00025e2d) linegrid_hwr_fs_pane_g3

0x6794,	// (0x00022b44) linegrid_hwr_fs_pane_g4_ParamLimits

0x6794,	// (0x00022b44) linegrid_hwr_fs_pane_g4

0x67ae,	// (0x00022b5e) linegrid_hwr_fs_pane_g5_ParamLimits

0x67ae,	// (0x00022b5e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0002bb80) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0002bb80) linegrid_hwr_fs_pane_g

0x9a89,	// (0x00025e39) cell_hwr_fs_pane_g1_ParamLimits

0x9a89,	// (0x00025e39) cell_hwr_fs_pane_g1

0x9848,	// (0x00025bf8) cell_hwr_fs_pane_g2_ParamLimits

0x9848,	// (0x00025bf8) cell_hwr_fs_pane_g2

0x9a9f,	// (0x00025e4f) cell_hwr_fs_pane_g3_ParamLimits

0x9a9f,	// (0x00025e4f) cell_hwr_fs_pane_g3

0x9aac,	// (0x00025e5c) cell_hwr_fs_pane_g4_ParamLimits

0x9aac,	// (0x00025e5c) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0002bb8b) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0002bb8b) cell_hwr_fs_pane_g

0x67c4,	// (0x00022b74) cell_hwr_fs_pane_t1

0x7b4b,	// (0x00023efb) grid_highlight_pane_cp6

0x7b4b,	// (0x00023efb) main_idle_act2_pane

0x861f,	// (0x000249cf) aid_inside_area_popup_secondary

0xa741,	// (0x00026af1) aid_inside_area_window_primary_ParamLimits

0xa741,	// (0x00026af1) aid_inside_area_window_primary

0xb2eb,	// (0x0002769b) ai2_news_ticker_pane

0xb2f3,	// (0x000276a3) aid_size_cell_ai1_link_ParamLimits

0xb2f3,	// (0x000276a3) aid_size_cell_ai1_link

0xb30d,	// (0x000276bd) popup_ai2_data_window_ParamLimits

0xb30d,	// (0x000276bd) popup_ai2_data_window

0xb323,	// (0x000276d3) popup_ai2_link_window_ParamLimits

0xb323,	// (0x000276d3) popup_ai2_link_window

0x9a53,	// (0x00025e03) bg_popup_sub_pane_cp4_ParamLimits

0x9a53,	// (0x00025e03) bg_popup_sub_pane_cp4

0xb337,	// (0x000276e7) grid_ai2_link_pane_ParamLimits

0xb337,	// (0x000276e7) grid_ai2_link_pane

0xb34e,	// (0x000276fe) popup_ai2_link_window_g1_ParamLimits

0xb34e,	// (0x000276fe) popup_ai2_link_window_g1

0xb35a,	// (0x0002770a) popup_ai2_link_window_g2_ParamLimits

0xb35a,	// (0x0002770a) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0002bd5e) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0002bd5e) popup_ai2_link_window_g

0xb369,	// (0x00027719) ai2_mp_button_pane

0xb371,	// (0x00027721) ai2_mp_volume_pane

0x9c60,	// (0x00026010) bg_popup_sub_pane_cp5_ParamLimits

0x9c60,	// (0x00026010) bg_popup_sub_pane_cp5

0xb379,	// (0x00027729) heading_ai2_gene_pane_ParamLimits

0xb379,	// (0x00027729) heading_ai2_gene_pane

0xb385,	// (0x00027735) list_ai2_gene_pane_ParamLimits

0xb385,	// (0x00027735) list_ai2_gene_pane

0xb3cd,	// (0x0002777d) cell_ai2_link_pane_ParamLimits

0xb3cd,	// (0x0002777d) cell_ai2_link_pane

0xb3e3,	// (0x00027793) cell_ai2_link_pane_g1

0x7b4b,	// (0x00023efb) grid_highlight_pane_cp7

0x6ab6,	// (0x00022e66) ai2_mp_volume_pane_g1

0xb4b3,	// (0x00027863) ai2_mp_volume_pane_g2

0xb428,	// (0x000277d8) list_ai2_gene_pane_t1

0xb4bb,	// (0x0002786b) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0002bd77) ai2_mp_volume_pane_g

0x6abe,	// (0x00022e6e) volume_small_pane_cp3

0xb4c3,	// (0x00027873) aid_size_cell_ai2_button

0xb4cb,	// (0x0002787b) grid_ai2_button_pane

0xb4d4,	// (0x00027884) cell_ai2_button_pane_ParamLimits

0xb4d4,	// (0x00027884) cell_ai2_button_pane

0x2c4e,	// (0x0001effe) cell_ai2_button_pane_g1

0x7b4b,	// (0x00023efb) grid_highlight_pane_cp8

0xb473,	// (0x00027823) ai2_gene_pane_t1_ParamLimits

0xb473,	// (0x00027823) ai2_gene_pane_t1

0x60d9,	// (0x00022489) aid_height_parent_landscape

0xadb7,	// (0x00027167) aid_height_set_list

0xadc8,	// (0x00027178) aid_size_parent

0xb10e,	// (0x000274be) aid_size_cell_graphic_pane_ParamLimits

0xb395,	// (0x00027745) popup_ai2_data_window_g1_ParamLimits

0xb395,	// (0x00027745) popup_ai2_data_window_g1

0xb3a1,	// (0x00027751) ai2_news_ticker_pane_g1

0xb3a9,	// (0x00027759) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0002bd63) ai2_news_ticker_pane_g

0xb3b1,	// (0x00027761) ai2_news_ticker_pane_t1

0xb3bf,	// (0x0002776f) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0002bd68) ai2_news_ticker_pane_t

0xb3ec,	// (0x0002779c) heading_ai2_gene_pane_g1

0xb3f4,	// (0x000277a4) heading_ai2_gene_pane_t1_ParamLimits

0xb3f4,	// (0x000277a4) heading_ai2_gene_pane_t1

0xb409,	// (0x000277b9) list_highlight_pane_cp6

0xb411,	// (0x000277c1) ai2_gene_pane_ParamLimits

0xb411,	// (0x000277c1) ai2_gene_pane

0xb436,	// (0x000277e6) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0002bd6d) list_ai2_gene_pane_t

0xb444,	// (0x000277f4) list_highlight_pane_cp8_ParamLimits

0xb444,	// (0x000277f4) list_highlight_pane_cp8

0xb455,	// (0x00027805) ai2_gene_pane_g1_ParamLimits

0xb455,	// (0x00027805) ai2_gene_pane_g1

0xb467,	// (0x00027817) ai2_gene_pane_g2_ParamLimits

0xb467,	// (0x00027817) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0002bd72) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0002bd72) ai2_gene_pane_g

0x844e,	// (0x000247fe) scroll_pane_cp12

0x6096,	// (0x00022446) control_pane_t3_ParamLimits

0x6096,	// (0x00022446) control_pane_t3

0x9407,	// (0x000257b7) status_small_pane_g8_ParamLimits

0x9407,	// (0x000257b7) status_small_pane_g8

0x624d,	// (0x000225fd) popup_find_window_ParamLimits

0x6464,	// (0x00022814) popup_note_image_window_ParamLimits

0x4ca4,	// (0x00021054) list_double2_graphic_pane_vc_g1_ParamLimits

0x4ca4,	// (0x00021054) list_double2_graphic_pane_vc_g1

0x4d0e,	// (0x000210be) list_double2_graphic_pane_vc_g2_ParamLimits

0x4d0e,	// (0x000210be) list_double2_graphic_pane_vc_g2

0x4d1a,	// (0x000210ca) list_double2_graphic_pane_vc_g3_ParamLimits

0x4d1a,	// (0x000210ca) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0002bb49) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0002bb49) list_double2_graphic_pane_vc_g

0x4d26,	// (0x000210d6) list_double2_graphic_pane_vc_t1_ParamLimits

0x4d26,	// (0x000210d6) list_double2_graphic_pane_vc_t1

0x4cb0,	// (0x00021060) list_single_heading_pane_vc_g1_ParamLimits

0x4cb0,	// (0x00021060) list_single_heading_pane_vc_g1

0x4cbc,	// (0x0002106c) list_single_heading_pane_vc_g2_ParamLimits

0x4cbc,	// (0x0002106c) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002bb6a) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002bb6a) list_single_heading_pane_vc_g

0x4d3c,	// (0x000210ec) list_single_heading_pane_vc_t1_ParamLimits

0x4d3c,	// (0x000210ec) list_single_heading_pane_vc_t1

0x4d52,	// (0x00021102) list_single_heading_pane_vc_t2_ParamLimits

0x4d52,	// (0x00021102) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0002bb6f) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0002bb6f) list_single_heading_pane_vc_t

0x4d64,	// (0x00021114) list_setting_number_pane_vc_g1_ParamLimits

0x4d64,	// (0x00021114) list_setting_number_pane_vc_g1

0x4d70,	// (0x00021120) list_setting_number_pane_vc_g2_ParamLimits

0x4d70,	// (0x00021120) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002bb74) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002bb74) list_setting_number_pane_vc_g

0x4d7c,	// (0x0002112c) list_setting_number_pane_vc_t1_ParamLimits

0x4d7c,	// (0x0002112c) list_setting_number_pane_vc_t1

0x4d90,	// (0x00021140) list_setting_number_pane_vc_t2_ParamLimits

0x4d90,	// (0x00021140) list_setting_number_pane_vc_t2

0x4dac,	// (0x0002115c) list_setting_number_pane_vc_t3_ParamLimits

0x4dac,	// (0x0002115c) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0002bb79) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0002bb79) list_setting_number_pane_vc_t

0x4dca,	// (0x0002117a) set_value_pane_vc_ParamLimits

0x4dca,	// (0x0002117a) set_value_pane_vc

0x4ea3,	// (0x00021253) list_double2_graphic_pane_vc_ParamLimits

0x4ea3,	// (0x00021253) list_double2_graphic_pane_vc

0xaf80,	// (0x00027330) list_double2_large_graphic_pane_vc_ParamLimits

0xaf80,	// (0x00027330) list_double2_large_graphic_pane_vc

0x4ea3,	// (0x00021253) list_double2_pane_vc_ParamLimits

0x4ea3,	// (0x00021253) list_double2_pane_vc

0x4ea3,	// (0x00021253) list_double_graphic_heading_pane_vc_ParamLimits

0x4ea3,	// (0x00021253) list_double_graphic_heading_pane_vc

0x4ea3,	// (0x00021253) list_double_graphic_pane_vc_ParamLimits

0x4ea3,	// (0x00021253) list_double_graphic_pane_vc

0x4ea3,	// (0x00021253) list_double_heading_pane_vc_ParamLimits

0x4ea3,	// (0x00021253) list_double_heading_pane_vc

0xaf92,	// (0x00027342) list_double_large_graphic_pane_vc_ParamLimits

0xaf92,	// (0x00027342) list_double_large_graphic_pane_vc

0x4ea3,	// (0x00021253) list_double_number_pane_vc_ParamLimits

0x4ea3,	// (0x00021253) list_double_number_pane_vc

0x4ea3,	// (0x00021253) list_double_pane_vc_ParamLimits

0x4ea3,	// (0x00021253) list_double_pane_vc

0x4ea3,	// (0x00021253) list_double_time_pane_vc_ParamLimits

0x4ea3,	// (0x00021253) list_double_time_pane_vc

0x4ea3,	// (0x00021253) list_setting_number_pane_vc_ParamLimits

0x4ea3,	// (0x00021253) list_setting_number_pane_vc

0x4ea3,	// (0x00021253) list_setting_pane_vc_ParamLimits

0x4ea3,	// (0x00021253) list_setting_pane_vc

0x4ea3,	// (0x00021253) list_single_graphic_heading_pane_vc_ParamLimits

0x4ea3,	// (0x00021253) list_single_graphic_heading_pane_vc

0x4ea3,	// (0x00021253) list_single_heading_pane_vc_ParamLimits

0x4ea3,	// (0x00021253) list_single_heading_pane_vc

0x4eb6,	// (0x00021266) list_single_number_heading_pane_vc_ParamLimits

0x4eb6,	// (0x00021266) list_single_number_heading_pane_vc

0x4f31,	// (0x000212e1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4f31,	// (0x000212e1) list_double_graphic_heading_pane_vc_g1

0x4cb0,	// (0x00021060) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4cb0,	// (0x00021060) list_double_graphic_heading_pane_vc_g2

0x4cbc,	// (0x0002106c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4cbc,	// (0x0002106c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0002bd7e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0002bd7e) list_double_graphic_heading_pane_vc_g

0x4f3d,	// (0x000212ed) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4f3d,	// (0x000212ed) list_double_graphic_heading_pane_vc_t1

0x4f59,	// (0x00021309) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4f59,	// (0x00021309) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0002bd85) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0002bd85) list_double_graphic_heading_pane_vc_t

0x4d64,	// (0x00021114) list_setting_pane_vc_g1_ParamLimits

0x4d64,	// (0x00021114) list_setting_pane_vc_g1

0x4d70,	// (0x00021120) list_setting_pane_vc_g2_ParamLimits

0x4d70,	// (0x00021120) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002bb74) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002bb74) list_setting_pane_vc_g

0x4f77,	// (0x00021327) list_setting_pane_vc_t1_ParamLimits

0x4f77,	// (0x00021327) list_setting_pane_vc_t1

0x4f93,	// (0x00021343) list_setting_pane_vc_t2_ParamLimits

0x4f93,	// (0x00021343) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0002bdb3) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0002bdb3) list_setting_pane_vc_t

0x4dca,	// (0x0002117a) set_value_pane_cp_vc_ParamLimits

0x4dca,	// (0x0002117a) set_value_pane_cp_vc

0x4cb0,	// (0x00021060) list_single_number_heading_pane_vc_g1_ParamLimits

0x4cb0,	// (0x00021060) list_single_number_heading_pane_vc_g1

0x4cbc,	// (0x0002106c) list_single_number_heading_pane_vc_g2_ParamLimits

0x4cbc,	// (0x0002106c) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002bb6a) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002bb6a) list_single_number_heading_pane_vc_g

0x4faf,	// (0x0002135f) list_single_number_heading_pane_vc_t1_ParamLimits

0x4faf,	// (0x0002135f) list_single_number_heading_pane_vc_t1

0x4fc5,	// (0x00021375) list_single_number_heading_pane_vc_t2_ParamLimits

0x4fc5,	// (0x00021375) list_single_number_heading_pane_vc_t2

0x4fd7,	// (0x00021387) list_single_number_heading_pane_vc_t3_ParamLimits

0x4fd7,	// (0x00021387) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0002bdb8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0002bdb8) list_single_number_heading_pane_vc_t

0x4ca4,	// (0x00021054) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4ca4,	// (0x00021054) list_single_graphic_heading_pane_vc_g1

0x4cb0,	// (0x00021060) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4cb0,	// (0x00021060) list_single_graphic_heading_pane_vc_g4

0x4cbc,	// (0x0002106c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4cbc,	// (0x0002106c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf78b,	// (0x0002bb3b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf78b,	// (0x0002bb3b) list_single_graphic_heading_pane_vc_g

0x4fe9,	// (0x00021399) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4fe9,	// (0x00021399) list_single_graphic_heading_pane_vc_t1

0x4fff,	// (0x000213af) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4fff,	// (0x000213af) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0f,	// (0x0002bdbf) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0002bdbf) list_single_graphic_heading_pane_vc_t

0x4cb0,	// (0x00021060) list_double2_pane_vc_g1_ParamLimits

0x4cb0,	// (0x00021060) list_double2_pane_vc_g1

0x4cbc,	// (0x0002106c) list_double2_pane_vc_g2_ParamLimits

0x4cbc,	// (0x0002106c) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002bb6a) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002bb6a) list_double2_pane_vc_g

0x5011,	// (0x000213c1) list_double2_pane_vc_t1_ParamLimits

0x5011,	// (0x000213c1) list_double2_pane_vc_t1

0x5027,	// (0x000213d7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5027,	// (0x000213d7) list_double2_large_graphic_pane_vc_g1

0x45a3,	// (0x00020953) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x45a3,	// (0x00020953) list_double2_large_graphic_pane_vc_g2

0x45af,	// (0x0002095f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x45af,	// (0x0002095f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa14,	// (0x0002bdc4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa14,	// (0x0002bdc4) list_double2_large_graphic_pane_vc_g

0x5033,	// (0x000213e3) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5033,	// (0x000213e3) list_double2_large_graphic_pane_vc_t1

0x5049,	// (0x000213f9) list_double_time_pane_vc_g1_ParamLimits

0x5049,	// (0x000213f9) list_double_time_pane_vc_g1

0x5055,	// (0x00021405) list_double_time_pane_vc_g2_ParamLimits

0x5055,	// (0x00021405) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0002bdcb) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0002bdcb) list_double_time_pane_vc_g

0x5061,	// (0x00021411) list_double_time_pane_vc_t1_ParamLimits

0x5061,	// (0x00021411) list_double_time_pane_vc_t1

0x5085,	// (0x00021435) list_double_time_pane_vc_t2_ParamLimits

0x5085,	// (0x00021435) list_double_time_pane_vc_t2

0x50cf,	// (0x0002147f) list_double_time_pane_vc_t3_ParamLimits

0x50cf,	// (0x0002147f) list_double_time_pane_vc_t3

0x50e1,	// (0x00021491) list_double_time_pane_vc_t4_ParamLimits

0x50e1,	// (0x00021491) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0002bdd0) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0002bdd0) list_double_time_pane_vc_t

0x4cb0,	// (0x00021060) list_double_pane_vc_g1_ParamLimits

0x4cb0,	// (0x00021060) list_double_pane_vc_g1

0x4cbc,	// (0x0002106c) list_double_pane_vc_g2_ParamLimits

0x4cbc,	// (0x0002106c) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002bb6a) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002bb6a) list_double_pane_vc_g

0x50f5,	// (0x000214a5) list_double_pane_vc_t1_ParamLimits

0x50f5,	// (0x000214a5) list_double_pane_vc_t1

0x5109,	// (0x000214b9) list_double_pane_vc_t2_ParamLimits

0x5109,	// (0x000214b9) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0002bdd9) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0002bdd9) list_double_pane_vc_t

0x4cb0,	// (0x00021060) list_double_number_pane_vc_g1_ParamLimits

0x4cb0,	// (0x00021060) list_double_number_pane_vc_g1

0x4cbc,	// (0x0002106c) list_double_number_pane_vc_g2_ParamLimits

0x4cbc,	// (0x0002106c) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002bb6a) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002bb6a) list_double_number_pane_vc_g

0x5121,	// (0x000214d1) list_double_number_pane_vc_t1_ParamLimits

0x5121,	// (0x000214d1) list_double_number_pane_vc_t1

0x5133,	// (0x000214e3) list_double_number_pane_vc_t2_ParamLimits

0x5133,	// (0x000214e3) list_double_number_pane_vc_t2

0x5147,	// (0x000214f7) list_double_number_pane_vc_t3_ParamLimits

0x5147,	// (0x000214f7) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0002bdde) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002bdde) list_double_number_pane_vc_t

0x515f,	// (0x0002150f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x515f,	// (0x0002150f) list_double_large_graphic_pane_vc_g1

0x517b,	// (0x0002152b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x517b,	// (0x0002152b) list_double_large_graphic_pane_vc_g2

0x518f,	// (0x0002153f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x518f,	// (0x0002153f) list_double_large_graphic_pane_vc_g3

0x519e,	// (0x0002154e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x519e,	// (0x0002154e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0002bde5) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0002bde5) list_double_large_graphic_pane_vc_g

0x51ad,	// (0x0002155d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x51ad,	// (0x0002155d) list_double_large_graphic_pane_vc_t1

0x51c9,	// (0x00021579) list_double_large_graphic_pane_vc_t2_ParamLimits

0x51c9,	// (0x00021579) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0002bdee) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002bdee) list_double_large_graphic_pane_vc_t

0x4cb0,	// (0x00021060) list_double_heading_pane_vc_g1_ParamLimits

0x4cb0,	// (0x00021060) list_double_heading_pane_vc_g1

0x4cbc,	// (0x0002106c) list_double_heading_pane_vc_g2_ParamLimits

0x4cbc,	// (0x0002106c) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002bb6a) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002bb6a) list_double_heading_pane_vc_g

0x51eb,	// (0x0002159b) list_double_heading_pane_vc_t1_ParamLimits

0x51eb,	// (0x0002159b) list_double_heading_pane_vc_t1

0x51ff,	// (0x000215af) list_double_heading_pane_vc_t2_ParamLimits

0x51ff,	// (0x000215af) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0002bdf3) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0002bdf3) list_double_heading_pane_vc_t

0x5217,	// (0x000215c7) list_double_graphic_pane_vc_g1_ParamLimits

0x5217,	// (0x000215c7) list_double_graphic_pane_vc_g1

0x522a,	// (0x000215da) list_double_graphic_pane_vc_g2_ParamLimits

0x522a,	// (0x000215da) list_double_graphic_pane_vc_g2

0x4cb0,	// (0x00021060) list_double_graphic_pane_vc_g3_ParamLimits

0x4cb0,	// (0x00021060) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0002bdf8) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0002bdf8) list_double_graphic_pane_vc_g

0x5247,	// (0x000215f7) list_double_graphic_pane_vc_t1_ParamLimits

0x5247,	// (0x000215f7) list_double_graphic_pane_vc_t1

0x5271,	// (0x00021621) list_double_graphic_pane_vc_t2_ParamLimits

0x5271,	// (0x00021621) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0002be01) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0002be01) list_double_graphic_pane_vc_t

0x5692,	// (0x00021a42) aid_size_cell_fastswap

0x569a,	// (0x00021a4a) aid_size_cell_touch_ParamLimits

0x569a,	// (0x00021a4a) aid_size_cell_touch

0x58f5,	// (0x00021ca5) popup_fast_swap_wide_window_ParamLimits

0x58f5,	// (0x00021ca5) popup_fast_swap_wide_window

0x5a09,	// (0x00021db9) touch_pane_ParamLimits

0x5a09,	// (0x00021db9) touch_pane

0x84a4,	// (0x00024854) button_value_adjust_pane_cp2

0x498b,	// (0x00020d3b) button_value_adjust_pane_cp4

0x49ab,	// (0x00020d5b) form_field_data_pane_cp2

0x49ca,	// (0x00020d7a) form_field_data_wide_pane_cp2

0x8937,	// (0x00024ce7) bg_scroll_pane_ParamLimits

0x5c97,	// (0x00022047) scroll_handle_pane_ParamLimits

0x5cab,	// (0x0002205b) scroll_sc2_down_pane_ParamLimits

0x5cab,	// (0x0002205b) scroll_sc2_down_pane

0x8968,	// (0x00024d18) scroll_sc2_up_pane_ParamLimits

0x8968,	// (0x00024d18) scroll_sc2_up_pane

0xbbbc,	// (0x00027f6c) grid_wheel_folder_pane_g1_ParamLimits

0xbbbc,	// (0x00027f6c) grid_wheel_folder_pane_g1

0x5e70,	// (0x00022220) clock_nsta_pane_cp2_ParamLimits

0x5e70,	// (0x00022220) clock_nsta_pane_cp2

0x918d,	// (0x0002553d) listscroll_midp_pane_ParamLimits

0x9199,	// (0x00025549) midp_canvas_pane

0x9481,	// (0x00025831) nsta_clock_indic_pane

0x94b5,	// (0x00025865) listscroll_form_pane_vc

0x94bd,	// (0x0002586d) listscroll_set_pane_vc_ParamLimits

0x94bd,	// (0x0002586d) listscroll_set_pane_vc

0x95b6,	// (0x00025966) clock_nsta_pane

0x9631,	// (0x000259e1) indicator_nsta_pane

0x9911,	// (0x00025cc1) bg_popup_sub_pane_cp2_ParamLimits

0x9925,	// (0x00025cd5) find_pane_cp2_ParamLimits

0x9925,	// (0x00025cd5) find_pane_cp2

0x993b,	// (0x00025ceb) grid_toobar_pane_ParamLimits

0x9a27,	// (0x00025dd7) list_form_gen_pane_vc_ParamLimits

0x9a27,	// (0x00025dd7) list_form_gen_pane_vc

0x9a3d,	// (0x00025ded) scroll_pane_cp8_vc_ParamLimits

0x9a3d,	// (0x00025ded) scroll_pane_cp8_vc

0x9ab9,	// (0x00025e69) data_form_wide_pane_vc_ParamLimits

0x9ab9,	// (0x00025e69) data_form_wide_pane_vc

0x9ac5,	// (0x00025e75) form_field_data_wide_pane_vc_g1

0x9acd,	// (0x00025e7d) form_field_data_wide_pane_vc_t1_ParamLimits

0x9acd,	// (0x00025e7d) form_field_data_wide_pane_vc_t1

0x84b8,	// (0x00024868) input_focus_pane_cp6_vc_ParamLimits

0x84b8,	// (0x00024868) input_focus_pane_cp6_vc

0x9df3,	// (0x000261a3) list_midp_pane_ParamLimits

0x9dff,	// (0x000261af) scroll_pane_cp16_ParamLimits

0x9dff,	// (0x000261af) scroll_pane_cp16

0x9e69,	// (0x00026219) button_value_adjust_pane_ParamLimits

0x9e69,	// (0x00026219) button_value_adjust_pane

0xadda,	// (0x0002718a) button_value_adjust_pane_cp6_ParamLimits

0xadda,	// (0x0002718a) button_value_adjust_pane_cp6

0xaf04,	// (0x000272b4) settings_code_pane_cp_ParamLimits

0xaf04,	// (0x000272b4) settings_code_pane_cp

0x2c4e,	// (0x0001effe) cell_touch_pane_g1

0x2c4e,	// (0x0001effe) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0002ba8e) cell_touch_pane_g

0xb4e6,	// (0x00027896) cell_touch_pane_cp_ParamLimits

0xb4e6,	// (0x00027896) cell_touch_pane_cp

0xb4f6,	// (0x000278a6) cell_touch_pane_ParamLimits

0xb4f6,	// (0x000278a6) cell_touch_pane

0x2c4e,	// (0x0001effe) scroll_sc2_down_pane_g1

0x2c4e,	// (0x0001effe) scroll_sc2_up_pane_g1

0x7b4b,	// (0x00023efb) bg_set_opt_pane_cp4_vc

0xb508,	// (0x000278b8) list_set_graphic_pane_vc_g1_ParamLimits

0xb508,	// (0x000278b8) list_set_graphic_pane_vc_g1

0xb514,	// (0x000278c4) list_set_graphic_pane_vc_g2_ParamLimits

0xb514,	// (0x000278c4) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0002bd8a) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0002bd8a) list_set_graphic_pane_vc_g

0xb520,	// (0x000278d0) text_primary_small_cp13_vc_ParamLimits

0xb520,	// (0x000278d0) text_primary_small_cp13_vc

0xb538,	// (0x000278e8) list_set_graphic_pane_vc_ParamLimits

0xb538,	// (0x000278e8) list_set_graphic_pane_vc

0x7b4b,	// (0x00023efb) input_focus_pane_cp2_vc

0x2c4e,	// (0x0001effe) setting_code_pane_vc_g1

0x7c76,	// (0x00024026) setting_code_pane_vc_t1

0xb54b,	// (0x000278fb) set_text_pane_vc_t1_ParamLimits

0xb54b,	// (0x000278fb) set_text_pane_vc_t1

0x7b4b,	// (0x00023efb) input_focus_pane_cp1_vc

0xb567,	// (0x00027917) list_set_text_pane_vc

0x2c4e,	// (0x0001effe) setting_text_pane_vc_g1

0x7b4b,	// (0x00023efb) bg_set_opt_pane_cp2_vc

0x7c6d,	// (0x0002401d) setting_slider_graphic_pane_vc_g1

0xb571,	// (0x00027921) setting_slider_graphic_pane_vc_t1

0xb581,	// (0x00027931) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0002bd8f) setting_slider_graphic_pane_vc_t

0xb591,	// (0x00027941) slider_set_pane_cp_vc

0xb599,	// (0x00027949) slider_set_pane_vc_g1

0xb5a2,	// (0x00027952) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0002bd94) slider_set_pane_vc_g

0x8510,	// (0x000248c0) set_opt_bg_pane_g1_copy1

0x8518,	// (0x000248c8) set_opt_bg_pane_g2_copy1

0xb5ce,	// (0x0002797e) set_opt_bg_pane_g3_copy1

0x8528,	// (0x000248d8) set_opt_bg_pane_g4_copy1

0x8530,	// (0x000248e0) set_opt_bg_pane_g5_copy1

0x8538,	// (0x000248e8) set_opt_bg_pane_g6_copy1

0xb5d8,	// (0x00027988) set_opt_bg_pane_g7_copy1

0xb5e2,	// (0x00027992) set_opt_bg_pane_g8_copy1

0xb5ec,	// (0x0002799c) set_opt_bg_pane_g9_copy1

0x7b4b,	// (0x00023efb) bg_set_opt_pane_cp_vc

0xb5f6,	// (0x000279a6) setting_slider_pane_vc_t1

0xb605,	// (0x000279b5) setting_slider_pane_vc_t2

0xb615,	// (0x000279c5) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0002bda3) setting_slider_pane_vc_t

0xb625,	// (0x000279d5) slider_set_pane_vc

0x67d2,	// (0x00022b82) volume_set_pane_vc_g1

0x67db,	// (0x00022b8b) volume_set_pane_vc_g2

0x67e4,	// (0x00022b94) volume_set_pane_vc_g3

0x67ed,	// (0x00022b9d) volume_set_pane_vc_g4

0x67f6,	// (0x00022ba6) volume_set_pane_vc_g5

0x67ff,	// (0x00022baf) volume_set_pane_vc_g6

0x6808,	// (0x00022bb8) volume_set_pane_vc_g7

0x6811,	// (0x00022bc1) volume_set_pane_vc_g8

0x681a,	// (0x00022bca) volume_set_pane_vc_g9

0x6823,	// (0x00022bd3) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0002bc41) volume_set_pane_vc_g

0xb62d,	// (0x000279dd) volume_set_pane_vc

0xb635,	// (0x000279e5) button_value_adjust_pane_cp1_vc

0xb63f,	// (0x000279ef) list_highlight_pane_cp2_vc

0xb648,	// (0x000279f8) list_set_pane_vc_ParamLimits

0xb648,	// (0x000279f8) list_set_pane_vc

0xb6a6,	// (0x00027a56) main_pane_set_vc_t1_ParamLimits

0xb6a6,	// (0x00027a56) main_pane_set_vc_t1

0xb6bb,	// (0x00027a6b) main_pane_set_vc_t2_ParamLimits

0xb6bb,	// (0x00027a6b) main_pane_set_vc_t2

0xb6cd,	// (0x00027a7d) main_pane_set_vc_t3_ParamLimits

0xb6cd,	// (0x00027a7d) main_pane_set_vc_t3

0xb6e1,	// (0x00027a91) main_pane_set_vc_t4_ParamLimits

0xb6e1,	// (0x00027a91) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0002bdaa) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0002bdaa) main_pane_set_vc_t

0xb6f5,	// (0x00027aa5) setting_code_pane_vc_ParamLimits

0xb6f5,	// (0x00027aa5) setting_code_pane_vc

0xb706,	// (0x00027ab6) setting_slider_graphic_pane_vc

0xb706,	// (0x00027ab6) setting_slider_pane_vc

0xb706,	// (0x00027ab6) setting_text_pane_vc

0xb706,	// (0x00027ab6) setting_volume_pane_vc

0xb710,	// (0x00027ac0) scroll_pane_cp121_vc

0x8492,	// (0x00024842) set_content_pane_vc

0xb718,	// (0x00027ac8) button_value_adjust_pane_g1

0xb721,	// (0x00027ad1) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0002be06) button_value_adjust_pane_g

0xb72a,	// (0x00027ada) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb72a,	// (0x00027ada) form_field_slider_wide_pane_vc_t1

0xb73e,	// (0x00027aee) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb73e,	// (0x00027aee) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0002be0b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002be0b) form_field_slider_wide_pane_vc_t

0x7ea6,	// (0x00024256) input_focus_pane_cp10_vc_ParamLimits

0x7ea6,	// (0x00024256) input_focus_pane_cp10_vc

0xb76c,	// (0x00027b1c) slider_cont_pane_cp1_vc_ParamLimits

0xb76c,	// (0x00027b1c) slider_cont_pane_cp1_vc

0xb77e,	// (0x00027b2e) slider_form_pane_g1_cp2

0xb5a2,	// (0x00027952) slider_form_pane_g2_cp2

0xb7ab,	// (0x00027b5b) form_field_slider_pane_vc_t3

0xb7b9,	// (0x00027b69) form_field_slider_pane_vc_t4

0xb7c7,	// (0x00027b77) slider_form_pane_vc_ParamLimits

0xb7c7,	// (0x00027b77) slider_form_pane_vc

0xb7d4,	// (0x00027b84) form_field_slider_pane_vc_t1_ParamLimits

0xb7d4,	// (0x00027b84) form_field_slider_pane_vc_t1

0xb73e,	// (0x00027aee) form_field_slider_pane_vc_t2_ParamLimits

0xb73e,	// (0x00027aee) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0002be1d) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002be1d) form_field_slider_pane_vc_t

0x7ea6,	// (0x00024256) input_focus_pane_cp9_vc_ParamLimits

0x7ea6,	// (0x00024256) input_focus_pane_cp9_vc

0xb7f0,	// (0x00027ba0) slider_cont_pane_vc_ParamLimits

0xb7f0,	// (0x00027ba0) slider_cont_pane_vc

0xb804,	// (0x00027bb4) list_form_graphic_pane_cp_vc_ParamLimits

0xb804,	// (0x00027bb4) list_form_graphic_pane_cp_vc

0x9ac5,	// (0x00025e75) form_field_popup_wide_pane_vc_g1

0xb819,	// (0x00027bc9) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb819,	// (0x00027bc9) form_field_popup_wide_pane_vc_t1

0x84b8,	// (0x00024868) input_focus_pane_cp8_vc_ParamLimits

0x84b8,	// (0x00024868) input_focus_pane_cp8_vc

0xb85e,	// (0x00027c0e) list_form_wide_pane_vc_ParamLimits

0xb85e,	// (0x00027c0e) list_form_wide_pane_vc

0xb86a,	// (0x00027c1a) list_form_graphic_pane_vc_g1

0xb872,	// (0x00027c22) list_form_graphic_pane_vc_t1_ParamLimits

0xb872,	// (0x00027c22) list_form_graphic_pane_vc_t1

0x7c2b,	// (0x00023fdb) list_highlight_pane_cp5_vc_ParamLimits

0x7c2b,	// (0x00023fdb) list_highlight_pane_cp5_vc

0xb88e,	// (0x00027c3e) list_form_graphic_pane_vc_ParamLimits

0xb88e,	// (0x00027c3e) list_form_graphic_pane_vc

0x9ac5,	// (0x00025e75) form_field_popup_pane_vc_g1

0xb8a4,	// (0x00027c54) form_field_popup_pane_vc_t1_ParamLimits

0xb8a4,	// (0x00027c54) form_field_popup_pane_vc_t1

0x84b8,	// (0x00024868) input_focus_pane_cp7_vc_ParamLimits

0x84b8,	// (0x00024868) input_focus_pane_cp7_vc

0xb8bb,	// (0x00027c6b) list_form_pane_vc_ParamLimits

0xb8bb,	// (0x00027c6b) list_form_pane_vc

0xb8c7,	// (0x00027c77) data_form_pane_vc_t1_ParamLimits

0xb8c7,	// (0x00027c77) data_form_pane_vc_t1

0x8510,	// (0x000248c0) input_focus_pane_vc_g1

0x8518,	// (0x000248c8) input_focus_pane_vc_g2

0x8520,	// (0x000248d0) input_focus_pane_vc_g3

0x8528,	// (0x000248d8) input_focus_pane_vc_g4

0x8530,	// (0x000248e0) input_focus_pane_vc_g5

0x8538,	// (0x000248e8) input_focus_pane_vc_g6

0x8540,	// (0x000248f0) input_focus_pane_vc_g7

0x8548,	// (0x000248f8) input_focus_pane_vc_g8

0x8550,	// (0x00024900) input_focus_pane_vc_g9

0x2c4e,	// (0x0001effe) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002ba17) input_focus_pane_vc_g

0x9ab9,	// (0x00025e69) data_form_pane_vc_ParamLimits

0x9ab9,	// (0x00025e69) data_form_pane_vc

0x9ac5,	// (0x00025e75) form_field_data_pane_vc_g1

0xb8e2,	// (0x00027c92) form_field_data_pane_vc_t1_ParamLimits

0xb8e2,	// (0x00027c92) form_field_data_pane_vc_t1

0x84b8,	// (0x00024868) input_focus_pane_vc_ParamLimits

0x84b8,	// (0x00024868) input_focus_pane_vc

0xb8fc,	// (0x00027cac) button_value_adjust_pane_cp3_vc

0xb904,	// (0x00027cb4) button_value_adjust_pane_cp5_vc

0xb90c,	// (0x00027cbc) form_field_data_pane_vc_ParamLimits

0xb90c,	// (0x00027cbc) form_field_data_pane_vc

0xb923,	// (0x00027cd3) form_field_data_pane_vc_cp2

0xb92b,	// (0x00027cdb) form_field_data_wide_pane_vc_ParamLimits

0xb92b,	// (0x00027cdb) form_field_data_wide_pane_vc

0xb941,	// (0x00027cf1) form_field_data_wide_pane_vc_cp2

0xb949,	// (0x00027cf9) form_field_popup_pane_vc_ParamLimits

0xb949,	// (0x00027cf9) form_field_popup_pane_vc

0xb960,	// (0x00027d10) form_field_popup_wide_pane_vc_ParamLimits

0xb960,	// (0x00027d10) form_field_popup_wide_pane_vc

0xb976,	// (0x00027d26) form_field_slider_pane_vc_ParamLimits

0xb976,	// (0x00027d26) form_field_slider_pane_vc

0xb989,	// (0x00027d39) form_field_slider_wide_pane_vc_ParamLimits

0xb989,	// (0x00027d39) form_field_slider_wide_pane_vc

0xb99c,	// (0x00027d4c) grid_touch_1_pane_ParamLimits

0xb99c,	// (0x00027d4c) grid_touch_1_pane

0xb9a8,	// (0x00027d58) grid_touch_2_pane_ParamLimits

0xb9a8,	// (0x00027d58) grid_touch_2_pane

0x944c,	// (0x000257fc) touch_pane_g1_ParamLimits

0x944c,	// (0x000257fc) touch_pane_g1

0xb9c0,	// (0x00027d70) cell_app_pane_cp_wide_ParamLimits

0xb9c0,	// (0x00027d70) cell_app_pane_cp_wide

0xb9d1,	// (0x00027d81) grid_popup_fast_wide_pane_ParamLimits

0xb9d1,	// (0x00027d81) grid_popup_fast_wide_pane

0xb9e5,	// (0x00027d95) scroll_pane_cp19_ParamLimits

0xb9e5,	// (0x00027d95) scroll_pane_cp19

0x7b4b,	// (0x00023efb) bg_popup_window_pane_cp20

0xb9f9,	// (0x00027da9) listscroll_popup_fast_wide_pane

0xba01,	// (0x00027db1) grid_indicator_nsta_pane

0xba13,	// (0x00027dc3) clock_nsta_pane_g1

0xba1c,	// (0x00027dcc) clock_nsta_pane_t1

0xba38,	// (0x00027de8) cell_indicator_nsta_pane_ParamLimits

0xba38,	// (0x00027de8) cell_indicator_nsta_pane

0xba6d,	// (0x00027e1d) cell_indicator_nsta_pane_g1

0xba7b,	// (0x00027e2b) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0002be2e) cell_indicator_nsta_pane_g

0xba8d,	// (0x00027e3d) clock_nsta_pane_cp

0xba96,	// (0x00027e46) indicator_nsta_pane_cp

0xbaa0,	// (0x00027e50) nsta_clock_indic_pane_g1

0x7cf4,	// (0x000240a4) grid_indicator_pane

0x8a5d,	// (0x00024e0d) scroll_pane_cp29

0x5dbf,	// (0x0002216f) indicator_nsta_pane_cp2_ParamLimits

0x5dbf,	// (0x0002216f) indicator_nsta_pane_cp2

0x7c2b,	// (0x00023fdb) main_apps_wheel_pane

0x9cd4,	// (0x00026084) form_midp_field_text_pane_ParamLimits

0x9e1f,	// (0x000261cf) scroll_bar_cp050_ParamLimits

0xbaf9,	// (0x00027ea9) cell_indicator_pane_ParamLimits

0xbaf9,	// (0x00027ea9) cell_indicator_pane

0xbb10,	// (0x00027ec0) cell_indicator_pane_g1

0xbb1a,	// (0x00027eca) grid_wheel_folder_pane_ParamLimits

0xbb1a,	// (0x00027eca) grid_wheel_folder_pane

0xbb30,	// (0x00027ee0) list_wheel_apps_pane_ParamLimits

0xbb30,	// (0x00027ee0) list_wheel_apps_pane

0xbb41,	// (0x00027ef1) main_apps_wheel_pane_g1_ParamLimits

0xbb41,	// (0x00027ef1) main_apps_wheel_pane_g1

0xbb55,	// (0x00027f05) main_apps_wheel_pane_g2_ParamLimits

0xbb55,	// (0x00027f05) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0002be4a) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0002be4a) main_apps_wheel_pane_g

0xbb6d,	// (0x00027f1d) main_apps_wheel_pane_t1_ParamLimits

0xbb6d,	// (0x00027f1d) main_apps_wheel_pane_t1

0xbb90,	// (0x00027f40) list_wheel_apps_pane_g1

0xbb98,	// (0x00027f48) list_wheel_apps_pane_g2

0xbba0,	// (0x00027f50) list_wheel_apps_pane_g3

0xbba8,	// (0x00027f58) list_wheel_apps_pane_g4

0xbbb2,	// (0x00027f62) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0002be4f) list_wheel_apps_pane_g

0x8ffc,	// (0x000253ac) navi_icon_text_pane

0x94e5,	// (0x00025895) aid_fill_nsta

0xbbd5,	// (0x00027f85) navi_icon_text_pane_g1

0xbbe1,	// (0x00027f91) navi_icon_text_pane_t1

0x8e8f,	// (0x0002523f) list_set_graphic_pane_t1_ParamLimits

0x8e8f,	// (0x0002523f) list_set_graphic_pane_t1

0xa58a,	// (0x0002693a) popup_midp_note_alarm_window_t6_ParamLimits

0xa58a,	// (0x0002693a) popup_midp_note_alarm_window_t6

0xa59c,	// (0x0002694c) popup_midp_note_alarm_window_t7_ParamLimits

0xa59c,	// (0x0002694c) popup_midp_note_alarm_window_t7

0xa5ae,	// (0x0002695e) popup_midp_note_alarm_window_t8_ParamLimits

0xa5ae,	// (0x0002695e) popup_midp_note_alarm_window_t8

0xa5c0,	// (0x00026970) popup_midp_note_alarm_window_t9_ParamLimits

0xa5c0,	// (0x00026970) popup_midp_note_alarm_window_t9

0xa5d2,	// (0x00026982) popup_midp_note_alarm_window_t10_ParamLimits

0xa5d2,	// (0x00026982) popup_midp_note_alarm_window_t10

0xa5e4,	// (0x00026994) popup_midp_note_alarm_window_t11_ParamLimits

0xa5e4,	// (0x00026994) popup_midp_note_alarm_window_t11

0xa5f6,	// (0x000269a6) scroll_pane_cp17_ParamLimits

0xa5f6,	// (0x000269a6) scroll_pane_cp17

0x67d2,	// (0x00022b82) volume_small_pane_cp_g1

0x6ac7,	// (0x00022e77) volume_small_pane_cp_g2

0x6ad0,	// (0x00022e80) volume_small_pane_cp_g3

0x6ad9,	// (0x00022e89) volume_small_pane_cp_g4

0x6ae2,	// (0x00022e92) volume_small_pane_cp_g5

0x6aeb,	// (0x00022e9b) volume_small_pane_cp_g6

0x6af4,	// (0x00022ea4) volume_small_pane_cp_g7

0x6afd,	// (0x00022ead) volume_small_pane_cp_g8

0x6b06,	// (0x00022eb6) volume_small_pane_cp_g9

0x6b0f,	// (0x00022ebf) volume_small_pane_cp_g10

0x9262,	// (0x00025612) midp_ticker_pane_g1_ParamLimits

0x926e,	// (0x0002561e) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0002bae3) midp_ticker_pane_g_ParamLimits

0x927a,	// (0x0002562a) midp_ticker_pane_t1_ParamLimits

0x94fb,	// (0x000258ab) aid_fill_nsta_2

0x9e0b,	// (0x000261bb) list_form2_midp_pane

0xaf4f,	// (0x000272ff) midp_editing_number_pane_ParamLimits

0xaf5e,	// (0x0002730e) midp_ticker_pane_ParamLimits

0xbbf3,	// (0x00027fa3) form2_midp_field_pane

0xbc17,	// (0x00027fc7) scroll_pane_cp51

0xbc37,	// (0x00027fe7) form2_midp_button_pane_ParamLimits

0xbc37,	// (0x00027fe7) form2_midp_button_pane

0xbc49,	// (0x00027ff9) form2_midp_content_pane_ParamLimits

0xbc49,	// (0x00027ff9) form2_midp_content_pane

0xbc63,	// (0x00028013) form2_midp_field_choice_group_pane

0xbc6b,	// (0x0002801b) form2_midp_field_pane_g1

0xbc73,	// (0x00028023) form2_midp_field_pane_g2

0xbc7b,	// (0x0002802b) form2_midp_field_pane_g3

0xbc83,	// (0x00028033) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0002be74) form2_midp_field_pane_g

0xbc8b,	// (0x0002803b) form2_midp_gauge_slider_pane

0xbc93,	// (0x00028043) form2_midp_gauge_wait_pane

0xbc9b,	// (0x0002804b) form2_midp_image_pane_ParamLimits

0xbc9b,	// (0x0002804b) form2_midp_image_pane

0xbcb6,	// (0x00028066) form2_midp_label_pane_ParamLimits

0xbcb6,	// (0x00028066) form2_midp_label_pane

0xbccf,	// (0x0002807f) form2_midp_label_pane_cp_ParamLimits

0xbccf,	// (0x0002807f) form2_midp_label_pane_cp

0xbcf0,	// (0x000280a0) form2_midp_string_pane_ParamLimits

0xbcf0,	// (0x000280a0) form2_midp_string_pane

0x529b,	// (0x0002164b) form2_midp_text_pane_ParamLimits

0x529b,	// (0x0002164b) form2_midp_text_pane

0xbd02,	// (0x000280b2) form2_midp_time_pane

0xbd12,	// (0x000280c2) input_focus_pane_cp51_ParamLimits

0xbd12,	// (0x000280c2) input_focus_pane_cp51

0xbd2a,	// (0x000280da) form2_midp_label_pane_t1_ParamLimits

0xbd2a,	// (0x000280da) form2_midp_label_pane_t1

0x52b6,	// (0x00021666) form2_mdip_text_pane_t1_ParamLimits

0x52b6,	// (0x00021666) form2_mdip_text_pane_t1

0x52d4,	// (0x00021684) form2_midp_time_pane_t1

0xbd73,	// (0x00028123) form2_midp_gauge_slider_pane_t1

0xbd85,	// (0x00028135) form2_midp_gauge_slider_pane_t2

0xbd97,	// (0x00028147) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0002be7d) form2_midp_gauge_slider_pane_t

0xbda9,	// (0x00028159) form2_midp_slider_pane

0xbdb5,	// (0x00028165) form2_midp_gauge_wait_pane_t1

0xbdc3,	// (0x00028173) form2_midp_wait_pane_ParamLimits

0xbdc3,	// (0x00028173) form2_midp_wait_pane

0xbdee,	// (0x0002819e) list_single_2graphic_pane_cp4_ParamLimits

0xbdee,	// (0x0002819e) list_single_2graphic_pane_cp4

0x9b2d,	// (0x00025edd) list_single_midp_graphic_pane_cp_ParamLimits

0x9b2d,	// (0x00025edd) list_single_midp_graphic_pane_cp

0x7b4b,	// (0x00023efb) list_highlight_pane_cp20

0xbe12,	// (0x000281c2) list_single_2graphic_pane_g1_cp4

0xbe1a,	// (0x000281ca) list_single_2graphic_pane_g2_cp4

0xbe22,	// (0x000281d2) list_single_2graphic_pane_t1_cp4

0x7c2b,	// (0x00023fdb) list_highlight_pane_cp21

0xbe31,	// (0x000281e1) list_single_midp_graphic_pane_g4_cp

0xbe40,	// (0x000281f0) list_single_midp_graphic_pane_t1_cp

0xbe55,	// (0x00028205) form2_mdip_string_pane_t1_ParamLimits

0xbe55,	// (0x00028205) form2_mdip_string_pane_t1

0x7b4b,	// (0x00023efb) bg_wml_button_pane_cp2

0x2c4e,	// (0x0001effe) form2_midp_image_pane_g1

0x4775,	// (0x00020b25) list_double_large_graphic_pane_g5_ParamLimits

0x4775,	// (0x00020b25) list_double_large_graphic_pane_g5

0x918d,	// (0x0002553d) midp_form_pane_ParamLimits

0x7c2b,	// (0x00023fdb) main_apps_wheel_pane_ParamLimits

0x648a,	// (0x0002283a) popup_preview_window_ParamLimits

0x648a,	// (0x0002283a) popup_preview_window

0x6645,	// (0x000229f5) popup_touch_info_window_ParamLimits

0x6645,	// (0x000229f5) popup_touch_info_window

0x6663,	// (0x00022a13) popup_touch_menu_window_ParamLimits

0x6663,	// (0x00022a13) popup_touch_menu_window

0x2c44,	// (0x0001eff4) bg_popup_sub_pane_cp6

0xbf4e,	// (0x000282fe) list_touch_menu_pane

0xbf56,	// (0x00028306) list_single_touch_menu_pane_ParamLimits

0xbf56,	// (0x00028306) list_single_touch_menu_pane

0xbf6c,	// (0x0002831c) list_single_touch_menu_pane_t1

0x7c2b,	// (0x00023fdb) bg_popup_sub_pane_cp7_ParamLimits

0x7c2b,	// (0x00023fdb) bg_popup_sub_pane_cp7

0xbf7a,	// (0x0002832a) heading_sub_pane

0xbf82,	// (0x00028332) list_touch_info_pane_ParamLimits

0xbf82,	// (0x00028332) list_touch_info_pane

0xbf91,	// (0x00028341) list_single_touch_info_pane_ParamLimits

0xbf91,	// (0x00028341) list_single_touch_info_pane

0xbfa3,	// (0x00028353) list_single_touch_info_pane_t1

0xbfb1,	// (0x00028361) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0002be8b) list_single_touch_info_pane_t

0x9185,	// (0x00025535) bg_popup_heading_pane_cp

0xbfbf,	// (0x0002836f) heading_sub_pane_t1

0x9a53,	// (0x00025e03) bg_popup_preview_window_pane_cp_ParamLimits

0x9a53,	// (0x00025e03) bg_popup_preview_window_pane_cp

0xbf7a,	// (0x0002832a) heading_preview_pane

0xbf82,	// (0x00028332) list_preview_pane_ParamLimits

0xbf82,	// (0x00028332) list_preview_pane

0xbfcd,	// (0x0002837d) popup_preview_window_g1

0xbf91,	// (0x00028341) list_single_preview_pane_ParamLimits

0xbf91,	// (0x00028341) list_single_preview_pane

0xbfd5,	// (0x00028385) list_single_preview_pane_g1

0xbfdd,	// (0x0002838d) list_single_preview_pane_t1

0xbfa3,	// (0x00028353) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0002be90) list_single_preview_pane_t

0xbfeb,	// (0x0002839b) bg_popup_heading_pane_cp2_ParamLimits

0xbfeb,	// (0x0002839b) bg_popup_heading_pane_cp2

0xc001,	// (0x000283b1) heading_preview_pane_g1

0xc009,	// (0x000283b9) heading_preview_pane_t1_ParamLimits

0xc009,	// (0x000283b9) heading_preview_pane_t1

0x7d17,	// (0x000240c7) soft_indicator_pane_t1_ParamLimits

0x842b,	// (0x000247db) scroll_pane_ParamLimits

0x8956,	// (0x00024d06) scroll_sc2_left_pane

0x895f,	// (0x00024d0f) scroll_sc2_right_pane

0x897e,	// (0x00024d2e) scroll_bg_pane_g1_ParamLimits

0x8993,	// (0x00024d43) scroll_bg_pane_g2_ParamLimits

0x89ab,	// (0x00024d5b) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0002ba6e) scroll_bg_pane_g_ParamLimits

0x897e,	// (0x00024d2e) scroll_handle_pane_g1_ParamLimits

0x89cd,	// (0x00024d7d) scroll_handle_pane_g2_ParamLimits

0x89ab,	// (0x00024d5b) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0002ba75) scroll_handle_pane_g_ParamLimits

0x6109,	// (0x000224b9) popup_choice_list_window_ParamLimits

0x6109,	// (0x000224b9) popup_choice_list_window

0x991d,	// (0x00025ccd) choice_list_pane

0x999f,	// (0x00025d4f) cell_toolbar_pane_t1

0x99c7,	// (0x00025d77) toolbar_button_pane_ParamLimits

0xaab0,	// (0x00026e60) ai_gene_pane_1_t2_ParamLimits

0xaab0,	// (0x00026e60) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0002bc9d) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0002bc9d) ai_gene_pane_1_t

0xc026,	// (0x000283d6) scroll_sc2_left_pane_g1

0xc026,	// (0x000283d6) scroll_sc2_right_pane_g1

0x94a9,	// (0x00025859) bg_popup_sub_pane_cp10

0xc030,	// (0x000283e0) list_choice_list_pane

0xc049,	// (0x000283f9) list_single_choice_list_pane_ParamLimits

0xc049,	// (0x000283f9) list_single_choice_list_pane

0xc05c,	// (0x0002840c) list_single_choice_list_pane_g1

0x865c,	// (0x00024a0c) list_single_choice_list_pane_t1_ParamLimits

0x865c,	// (0x00024a0c) list_single_choice_list_pane_t1

0xc064,	// (0x00028414) choice_list_pane_g1

0xc06c,	// (0x0002841c) choice_list_pane_t1

0x2c44,	// (0x0001eff4) input_focus_pane_cp11

0x8833,	// (0x00024be3) title_pane_stacon_g2_ParamLimits

0x8833,	// (0x00024be3) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0002ba54) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0002ba54) title_pane_stacon_g

0x9185,	// (0x00025535) cursor_press_pane

0x61b5,	// (0x00022565) popup_fep_hwr_window_ParamLimits

0x61b5,	// (0x00022565) popup_fep_hwr_window

0x622f,	// (0x000225df) popup_fep_vkb_window_ParamLimits

0x622f,	// (0x000225df) popup_fep_vkb_window

0xc07a,	// (0x0002842a) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0002beb9) fep_vkb_side_pane_g_ParamLimits

0x6b51,	// (0x00022f01) fep_hwr_candidate_pane_ParamLimits

0x6b51,	// (0x00022f01) fep_hwr_candidate_pane

0x6b7b,	// (0x00022f2b) fep_hwr_side_pane_ParamLimits

0x6b7b,	// (0x00022f2b) fep_hwr_side_pane

0x6b9b,	// (0x00022f4b) fep_hwr_top_pane_ParamLimits

0x6b9b,	// (0x00022f4b) fep_hwr_top_pane

0x6bb3,	// (0x00022f63) fep_hwr_write_pane_ParamLimits

0x6bb3,	// (0x00022f63) fep_hwr_write_pane

0xfb09,	// (0x0002beb9) fep_vkb_side_pane_g

0xc082,	// (0x00028432) fep_hwr_top_pane_g1

0xc094,	// (0x00028444) fep_hwr_top_pane_g2

0x6bdf,	// (0x00022f8f) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0002be95) fep_hwr_top_pane_g

0x6bf4,	// (0x00022fa4) fep_hwr_top_text_pane

0x8b4d,	// (0x00024efd) fep_hwr_top_text_pane_g1

0xc0ca,	// (0x0002847a) fep_hwr_top_text_pane_t1

0x6cea,	// (0x0002309a) fep_hwr_candidate_pane_g1

0xc31d,	// (0x000286cd) fep_vkb_keypad_pane_g3_ParamLimits

0xc31d,	// (0x000286cd) fep_vkb_keypad_pane_g3

0xc345,	// (0x000286f5) fep_vkb_keypad_pane_g4_ParamLimits

0xc345,	// (0x000286f5) fep_vkb_keypad_pane_g4

0xc3b4,	// (0x00028764) fep_vkb_bottom_pane_g2_ParamLimits

0xc3b4,	// (0x00028764) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0002bec0) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0002bec0) fep_vkb_bottom_pane_g

0xc026,	// (0x000283d6) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0002beca) cell_vkb_side_pane_g

0xc43f,	// (0x000287ef) cell_vkb_side_pane_t1

0xc44d,	// (0x000287fd) cell_vkb_side_pane_t1_copy1

0xc026,	// (0x000283d6) bg_fep_vkb_candidate_pane_g2

0xc579,	// (0x00028929) cell_vkb_candidate_pane_ParamLimits

0xc0d8,	// (0x00028488) aid_size_cell_vkb_ParamLimits

0xc0d8,	// (0x00028488) aid_size_cell_vkb

0xc579,	// (0x00028929) cell_vkb_candidate_pane

0x6d04,	// (0x000230b4) bg_popup_fep_shadow_pane_g1

0xc166,	// (0x00028516) fep_vkb_bottom_pane_ParamLimits

0xc166,	// (0x00028516) fep_vkb_bottom_pane

0xc19c,	// (0x0002854c) fep_vkb_candidate_pane_ParamLimits

0xc19c,	// (0x0002854c) fep_vkb_candidate_pane

0xc1b8,	// (0x00028568) fep_vkb_keypad_pane_ParamLimits

0xc1b8,	// (0x00028568) fep_vkb_keypad_pane

0xc1fe,	// (0x000285ae) fep_vkb_side_pane_ParamLimits

0xc1fe,	// (0x000285ae) fep_vkb_side_pane

0xc23a,	// (0x000285ea) fep_vkb_top_pane_ParamLimits

0xc23a,	// (0x000285ea) fep_vkb_top_pane

0xc276,	// (0x00028626) fep_vkb_top_pane_g1_ParamLimits

0xc276,	// (0x00028626) fep_vkb_top_pane_g1

0xc285,	// (0x00028635) fep_vkb_top_pane_g2_ParamLimits

0xc285,	// (0x00028635) fep_vkb_top_pane_g2

0xc294,	// (0x00028644) fep_vkb_top_pane_g3_ParamLimits

0xc294,	// (0x00028644) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0002beb0) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0002beb0) fep_vkb_top_pane_g

0xc2b2,	// (0x00028662) fep_vkb_top_text_pane_ParamLimits

0xc2b2,	// (0x00028662) fep_vkb_top_text_pane

0xc2c3,	// (0x00028673) fep_vkb_side_pane_g1_ParamLimits

0xc2c3,	// (0x00028673) fep_vkb_side_pane_g1

0xc30c,	// (0x000286bc) grid_vkb_side_pane_ParamLimits

0xc30c,	// (0x000286bc) grid_vkb_side_pane

0x6d0c,	// (0x000230bc) bg_popup_fep_shadow_pane_g2

0x6d15,	// (0x000230c5) bg_popup_fep_shadow_pane_g3

0x6d1d,	// (0x000230cd) bg_popup_fep_shadow_pane_g4

0x6d26,	// (0x000230d6) bg_popup_fep_shadow_pane_g5

0x6d30,	// (0x000230e0) bg_popup_fep_shadow_pane_g6

0x6d38,	// (0x000230e8) bg_popup_fep_shadow_pane_g7

0x8530,	// (0x000248e0) bg_popup_fep_shadow_pane_g8

0xc363,	// (0x00028713) grid_vkb_keypad_number_pane_ParamLimits

0xc363,	// (0x00028713) grid_vkb_keypad_number_pane

0xc373,	// (0x00028723) grid_vkb_keypad_pane_ParamLimits

0xc373,	// (0x00028723) grid_vkb_keypad_pane

0xc399,	// (0x00028749) fep_vkb_bottom_pane_g1_ParamLimits

0xc399,	// (0x00028749) fep_vkb_bottom_pane_g1

0xc3c2,	// (0x00028772) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3c2,	// (0x00028772) grid_vkb_keypad_bottom_left_pane

0xc3d7,	// (0x00028787) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3d7,	// (0x00028787) grid_vkb_keypad_bottom_right_pane

0xc3ec,	// (0x0002879c) fep_vkb_top_text_pane_g1

0xc407,	// (0x000287b7) fep_vkb_top_text_pane_t1

0xc41c,	// (0x000287cc) cell_vkb_side_pane_ParamLimits

0xc41c,	// (0x000287cc) cell_vkb_side_pane

0xc026,	// (0x000283d6) cell_vkb_side_pane_g1

0xc45b,	// (0x0002880b) cell_vkb_keypad_pane_ParamLimits

0xc45b,	// (0x0002880b) cell_vkb_keypad_pane

0xc4d0,	// (0x00028880) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0002bedd) bg_popup_fep_shadow_pane_g

0xc026,	// (0x000283d6) cell_hwr_side_pane_g1

0xc026,	// (0x000283d6) cell_hwr_side_pane_g2

0xc4da,	// (0x0002888a) cell_vkb_keypad_pane_t1

0xc4e8,	// (0x00028898) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4e8,	// (0x00028898) cell_vkb_keypad_bottom_left_pane

0xc505,	// (0x000288b5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc505,	// (0x000288b5) cell_vkb_keypad_bottom_right_pane

0xc026,	// (0x000283d6) cell_vkb_keypad_bottom_left_pane_g1

0xc026,	// (0x000283d6) cell_vkb_keypad_bottom_right_pane_g1

0xc53e,	// (0x000288ee) cell_vkb_keypad_number_pane_ParamLimits

0xc53e,	// (0x000288ee) cell_vkb_keypad_number_pane

0xc55d,	// (0x0002890d) cell_vkb_keypad_number_pane_g1

0xc567,	// (0x00028917) cell_vkb_keypad_number_pane_g2

0xc570,	// (0x00028920) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0002becf) cell_vkb_keypad_number_pane_g

0xc4da,	// (0x0002888a) cell_vkb_keypad_number_pane_t1

0xc594,	// (0x00028944) fep_vkb_candidate_pane_g1

0x0001,

0xfb1a,	// (0x0002beca) cell_hwr_side_pane_g

0xc5ad,	// (0x0002895d) cell_hwr_side_pane_t1

0x6d4a,	// (0x000230fa) cell_hwr_side_pane_t1_copy1

0xc2a4,	// (0x00028654) cell_hwr_candidate_pane_g1

0x6d58,	// (0x00023108) cell_hwr_candidate_pane_t1

0xc026,	// (0x000283d6) cell_vkb_candidate_pane_g2

0xc633,	// (0x000289e3) cell_vkb_candidate_pane_t1

0x6b18,	// (0x00022ec8) bg_popup_fep_shadow_pane_ParamLimits

0x6b18,	// (0x00022ec8) bg_popup_fep_shadow_pane

0x1ab3,	// (0x0001de63) bg_fep_hwr_top_pane_g4

0xc0a6,	// (0x00028456) bg_hwr_side_pane_g1_ParamLimits

0xc0a6,	// (0x00028456) bg_hwr_side_pane_g1

0x6c30,	// (0x00022fe0) cell_hwr_side_pane_ParamLimits

0x6c30,	// (0x00022fe0) cell_hwr_side_pane

0x6c6b,	// (0x0002301b) fep_hwr_write_pane_g1_ParamLimits

0x6c6b,	// (0x0002301b) fep_hwr_write_pane_g1

0x6c78,	// (0x00023028) fep_hwr_write_pane_g2_ParamLimits

0x6c78,	// (0x00023028) fep_hwr_write_pane_g2

0x6c85,	// (0x00023035) fep_hwr_write_pane_g3_ParamLimits

0x6c85,	// (0x00023035) fep_hwr_write_pane_g3

0x6c93,	// (0x00023043) fep_hwr_write_pane_g4_ParamLimits

0x6c93,	// (0x00023043) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0002be9c) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0002be9c) fep_hwr_write_pane_g

0x1ab3,	// (0x0001de63) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1ab3,	// (0x0001de63) bg_fep_hwr_candidate_pane_g2

0x6ca8,	// (0x00023058) cell_hwr_candidate_pane_ParamLimits

0x6ca8,	// (0x00023058) cell_hwr_candidate_pane

0x6cea,	// (0x0002309a) fep_hwr_candidate_pane_g1_ParamLimits

0xc106,	// (0x000284b6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc106,	// (0x000284b6) bg_popup_fep_shadow_pane_cp2

0xc2a4,	// (0x00028654) fep_vkb_top_pane_g4_ParamLimits

0xc2a4,	// (0x00028654) fep_vkb_top_pane_g4

0xc2ea,	// (0x0002869a) fep_vkb_side_pane_g2_ParamLimits

0xc2ea,	// (0x0002869a) fep_vkb_side_pane_g2

0x48b8,	// (0x00020c68) list_setting_pane_t4_ParamLimits

0x48b8,	// (0x00020c68) list_setting_pane_t4

0x4952,	// (0x00020d02) list_setting_number_pane_t5_ParamLimits

0x4952,	// (0x00020d02) list_setting_number_pane_t5

0x8b94,	// (0x00024f44) list_double_heading_pane_cp2_ParamLimits

0x8b94,	// (0x00024f44) list_double_heading_pane_cp2

0x84c6,	// (0x00024876) list_double_heading_pane_g1_cp2_ParamLimits

0x84c6,	// (0x00024876) list_double_heading_pane_g1_cp2

0x84d2,	// (0x00024882) list_double_heading_pane_g2_cp2_ParamLimits

0x84d2,	// (0x00024882) list_double_heading_pane_g2_cp2

0xc641,	// (0x000289f1) list_double_heading_pane_t1_cp2_ParamLimits

0xc641,	// (0x000289f1) list_double_heading_pane_t1_cp2

0xc657,	// (0x00028a07) list_double_heading_pane_t2_cp2_ParamLimits

0xc657,	// (0x00028a07) list_double_heading_pane_t2_cp2

0x2c3c,	// (0x0001efec) aid_value_unit2

0x594f,	// (0x00021cff) popup_preview_fixed_window

0x7eb4,	// (0x00024264) bg_popup_preview_window_pane_cp02

0xc669,	// (0x00028a19) list_preview_fixed_pane

0xc6af,	// (0x00028a5f) list_empty_pane_fp_ParamLimits

0xc6af,	// (0x00028a5f) list_empty_pane_fp

0xc6af,	// (0x00028a5f) list_single_cale_day_pane_fp_ParamLimits

0xc6af,	// (0x00028a5f) list_single_cale_day_pane_fp

0xc6af,	// (0x00028a5f) list_single_graphic_heading_pane_fp_ParamLimits

0xc6af,	// (0x00028a5f) list_single_graphic_heading_pane_fp

0xc6af,	// (0x00028a5f) list_single_graphic_pane_fp_ParamLimits

0xc6af,	// (0x00028a5f) list_single_graphic_pane_fp

0xc6af,	// (0x00028a5f) list_single_heading_pane_fp_ParamLimits

0xc6af,	// (0x00028a5f) list_single_heading_pane_fp

0xc6af,	// (0x00028a5f) list_single_pane_fp_ParamLimits

0xc6af,	// (0x00028a5f) list_single_pane_fp

0xc6c4,	// (0x00028a74) list_single_pane_fp_g1_ParamLimits

0xc6c4,	// (0x00028a74) list_single_pane_fp_g1

0x52e7,	// (0x00021697) list_single_pane_fp_g2_ParamLimits

0x52e7,	// (0x00021697) list_single_pane_fp_g2

0x52f3,	// (0x000216a3) list_single_pane_fp_g3_ParamLimits

0x52f3,	// (0x000216a3) list_single_pane_fp_g3

0xc6d0,	// (0x00028a80) list_single_pane_fp_g4_ParamLimits

0xc6d0,	// (0x00028a80) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0002befe) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0002befe) list_single_pane_fp_g

0x5307,	// (0x000216b7) list_single_pane_fp_t1_ParamLimits

0x5307,	// (0x000216b7) list_single_pane_fp_t1

0x531e,	// (0x000216ce) list_single_graphic_pane_fp_g1_ParamLimits

0x531e,	// (0x000216ce) list_single_graphic_pane_fp_g1

0xc6c4,	// (0x00028a74) list_single_graphic_pane_fp_g2_ParamLimits

0xc6c4,	// (0x00028a74) list_single_graphic_pane_fp_g2

0x52e7,	// (0x00021697) list_single_graphic_pane_fp_g3_ParamLimits

0x52e7,	// (0x00021697) list_single_graphic_pane_fp_g3

0x52f3,	// (0x000216a3) list_single_graphic_pane_fp_g4_ParamLimits

0x52f3,	// (0x000216a3) list_single_graphic_pane_fp_g4

0xc6d0,	// (0x00028a80) list_single_graphic_pane_fp_g5_ParamLimits

0xc6d0,	// (0x00028a80) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0002bf07) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0002bf07) list_single_graphic_pane_fp_g

0x532a,	// (0x000216da) list_single_graphic_pane_fp_t1_ParamLimits

0x532a,	// (0x000216da) list_single_graphic_pane_fp_t1

0x531e,	// (0x000216ce) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x531e,	// (0x000216ce) list_single_graphic_heading_pane_fp_g1

0xc6c4,	// (0x00028a74) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6c4,	// (0x00028a74) list_single_graphic_heading_pane_fp_g2

0x52e7,	// (0x00021697) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x52e7,	// (0x00021697) list_single_graphic_heading_pane_fp_g3

0x52f3,	// (0x000216a3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x52f3,	// (0x000216a3) list_single_graphic_heading_pane_fp_g4

0xc6d0,	// (0x00028a80) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6d0,	// (0x00028a80) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002bf07) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002bf07) list_single_graphic_heading_pane_fp_g

0x5340,	// (0x000216f0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5340,	// (0x000216f0) list_single_graphic_heading_pane_fp_t1

0x5356,	// (0x00021706) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5356,	// (0x00021706) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0002bf12) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0002bf12) list_single_graphic_heading_pane_fp_t

0x5368,	// (0x00021718) list_single_cale_day_pane_fp_g1_ParamLimits

0x5368,	// (0x00021718) list_single_cale_day_pane_fp_g1

0xc6dc,	// (0x00028a8c) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6dc,	// (0x00028a8c) list_single_cale_day_pane_fp_g2

0x53a0,	// (0x00021750) list_single_cale_day_pane_fp_g3_ParamLimits

0x53a0,	// (0x00021750) list_single_cale_day_pane_fp_g3

0x53c8,	// (0x00021778) list_single_cale_day_pane_fp_g4_ParamLimits

0x53c8,	// (0x00021778) list_single_cale_day_pane_fp_g4

0x53ec,	// (0x0002179c) list_single_cale_day_pane_fp_g5_ParamLimits

0x53ec,	// (0x0002179c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0002bf17) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0002bf17) list_single_cale_day_pane_fp_g

0x5410,	// (0x000217c0) list_single_cale_day_pane_fp_t1_ParamLimits

0x5410,	// (0x000217c0) list_single_cale_day_pane_fp_t1

0x5436,	// (0x000217e6) list_single_cale_day_pane_fp_t2_ParamLimits

0x5436,	// (0x000217e6) list_single_cale_day_pane_fp_t2

0x544f,	// (0x000217ff) list_single_cale_day_pane_fp_t3_ParamLimits

0x544f,	// (0x000217ff) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0002bf22) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0002bf22) list_single_cale_day_pane_fp_t

0xc6c4,	// (0x00028a74) list_empty_pane_fp_g1_ParamLimits

0xc6c4,	// (0x00028a74) list_empty_pane_fp_g1

0x5468,	// (0x00021818) list_empty_pane_fp_t1

0x5476,	// (0x00021826) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0002bf29) list_empty_pane_fp_t

0xc6c4,	// (0x00028a74) list_single_heading_pane_fp_g1_ParamLimits

0xc6c4,	// (0x00028a74) list_single_heading_pane_fp_g1

0x52e7,	// (0x00021697) list_single_heading_pane_fp_g2_ParamLimits

0x52e7,	// (0x00021697) list_single_heading_pane_fp_g2

0x52f3,	// (0x000216a3) list_single_heading_pane_fp_g3_ParamLimits

0x52f3,	// (0x000216a3) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0002bf2e) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002bf2e) list_single_heading_pane_fp_g

0x5484,	// (0x00021834) list_single_heading_pane_fp_t1_ParamLimits

0x5484,	// (0x00021834) list_single_heading_pane_fp_t1

0x5496,	// (0x00021846) list_single_heading_pane_fp_t2_ParamLimits

0x5496,	// (0x00021846) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0002bf35) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0002bf35) list_single_heading_pane_fp_t

0x86ca,	// (0x00024a7a) aid_size_cell_fast

0x7e24,	// (0x000241d4) soft_indicator_pane_cp1_t1

0x8707,	// (0x00024ab7) cell_app_pane_cp2_ParamLimits

0x8707,	// (0x00024ab7) cell_app_pane_cp2

0x6b3a,	// (0x00022eea) fep_hwr_candidate_drop_down_list_pane

0x1ac1,	// (0x0001de71) fep_hwr_candidate_pane_g3_ParamLimits

0x1ac1,	// (0x0001de71) fep_hwr_candidate_pane_g3

0x1ace,	// (0x0001de7e) fep_hwr_candidate_pane_g4_ParamLimits

0x1ace,	// (0x0001de7e) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0002bea9) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0002bea9) fep_hwr_candidate_pane_g

0xc18b,	// (0x0002853b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc18b,	// (0x0002853b) fep_vkb_candidate_drop_down_list_pane

0xc59c,	// (0x0002894c) fep_vkb_candidate_pane_g3

0xc5a4,	// (0x00028954) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0002bed6) fep_vkb_candidate_pane_g

0xc2a4,	// (0x00028654) cell_hwr_candidate_pane_g1_ParamLimits

0xc5bb,	// (0x0002896b) cell_hwr_candidate_pane_g3_ParamLimits

0xc5bb,	// (0x0002896b) cell_hwr_candidate_pane_g3

0xc5dc,	// (0x0002898c) cell_hwr_candidate_pane_g4_ParamLimits

0xc5dc,	// (0x0002898c) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0002bef0) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0002bef0) cell_hwr_candidate_pane_g

0xc5fd,	// (0x000289ad) cell_vkb_candidate_pane_g3_ParamLimits

0xc5fd,	// (0x000289ad) cell_vkb_candidate_pane_g3

0xc618,	// (0x000289c8) cell_vkb_candidate_pane_g4_ParamLimits

0xc618,	// (0x000289c8) cell_vkb_candidate_pane_g4

0xc6e8,	// (0x00028a98) cell_app_pane_cp2_g1_ParamLimits

0xc6e8,	// (0x00028a98) cell_app_pane_cp2_g1

0xc706,	// (0x00028ab6) cell_app_pane_cp2_g2_ParamLimits

0xc706,	// (0x00028ab6) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0002bf3a) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0002bf3a) cell_app_pane_cp2_g

0xc712,	// (0x00028ac2) cell_app_pane_cp2_t1_ParamLimits

0xc712,	// (0x00028ac2) cell_app_pane_cp2_t1

0x84b8,	// (0x00024868) grid_highlight_pane_cp1_ParamLimits

0x84b8,	// (0x00024868) grid_highlight_pane_cp1

0x6d76,	// (0x00023126) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d76,	// (0x00023126) cell_hwr_candidate_pane_cp1

0xc2a4,	// (0x00028654) fep_hwr_candidate_drop_down_list_pane_g1

0xc724,	// (0x00028ad4) fep_hwr_candidate_drop_down_list_pane_g2

0xc731,	// (0x00028ae1) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002bf3f) fep_hwr_candidate_drop_down_list_pane_g

0x6d95,	// (0x00023145) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d9e,	// (0x0002314e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d9e,	// (0x0002314e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6dab,	// (0x0002315b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6dab,	// (0x0002315b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6db8,	// (0x00023168) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6db8,	// (0x00023168) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5fd,	// (0x000289ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5fd,	// (0x000289ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc618,	// (0x000289c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc618,	// (0x000289c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6dc5,	// (0x00023175) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6dc5,	// (0x00023175) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6de0,	// (0x00023190) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6de0,	// (0x00023190) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6dfb,	// (0x000231ab) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6dfb,	// (0x000231ab) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0002bf46) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0002bf46) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc73e,	// (0x00028aee) cell_vkb_candidate_pane_cp1_ParamLimits

0xc73e,	// (0x00028aee) cell_vkb_candidate_pane_cp1

0xc2a4,	// (0x00028654) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2a4,	// (0x00028654) fep_vkb_candidate_drop_down_list_pane_g1

0xc724,	// (0x00028ad4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc724,	// (0x00028ad4) fep_vkb_candidate_drop_down_list_pane_g2

0xc731,	// (0x00028ae1) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc731,	// (0x00028ae1) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002bf3f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8f,	// (0x0002bf3f) fep_vkb_candidate_drop_down_list_pane_g

0xc75e,	// (0x00028b0e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc75e,	// (0x00028b0e) fep_vkb_candidate_drop_down_list_scroll_pane

0xc76b,	// (0x00028b1b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc76b,	// (0x00028b1b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc778,	// (0x00028b28) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc778,	// (0x00028b28) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc784,	// (0x00028b34) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc784,	// (0x00028b34) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5bb,	// (0x0002896b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5bb,	// (0x0002896b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5dc,	// (0x0002898c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5dc,	// (0x0002898c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc790,	// (0x00028b40) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc790,	// (0x00028b40) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7b1,	// (0x00028b61) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7b1,	// (0x00028b61) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7d2,	// (0x00028b82) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7d2,	// (0x00028b82) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0002bf57) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0002bf57) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b55,	// (0x00023f05) title_pane_g1_ParamLimits

0x7b62,	// (0x00023f12) title_pane_g2_ParamLimits

0xf529,	// (0x0002b8d9) title_pane_g_ParamLimits

0x8b3d,	// (0x00024eed) aid_call2_pane

0x8b45,	// (0x00024ef5) aid_call_pane

0x8b4d,	// (0x00024efd) popup_clock_analogue_window_g1

0x8b4d,	// (0x00024efd) popup_clock_analogue_window_g2

0x5cc0,	// (0x00022070) popup_clock_analogue_window_g3

0x5cc9,	// (0x00022079) popup_clock_analogue_window_g4

0x2c4e,	// (0x0001effe) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0002ba83) popup_clock_analogue_window_g

0x5cd1,	// (0x00022081) popup_clock_analogue_window_t1

0x5cdf,	// (0x0002208f) clock_digital_number_pane_ParamLimits

0x5cdf,	// (0x0002208f) clock_digital_number_pane

0x5ceb,	// (0x0002209b) clock_digital_number_pane_cp02_ParamLimits

0x5ceb,	// (0x0002209b) clock_digital_number_pane_cp02

0x5cf7,	// (0x000220a7) clock_digital_number_pane_cp03_ParamLimits

0x5cf7,	// (0x000220a7) clock_digital_number_pane_cp03

0x5d03,	// (0x000220b3) clock_digital_number_pane_cp04_ParamLimits

0x5d03,	// (0x000220b3) clock_digital_number_pane_cp04

0x5d0f,	// (0x000220bf) clock_digital_separator_pane_ParamLimits

0x5d0f,	// (0x000220bf) clock_digital_separator_pane

0x5d1b,	// (0x000220cb) popup_clock_digital_window_t1_ParamLimits

0x5d1b,	// (0x000220cb) popup_clock_digital_window_t1

0x2c4e,	// (0x0001effe) clock_digital_number_pane_g1

0x2c4e,	// (0x0001effe) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0002ba8e) clock_digital_number_pane_g

0x2c4e,	// (0x0001effe) clock_digital_separator_pane_g1

0x2c4e,	// (0x0001effe) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0002ba8e) clock_digital_separator_pane_g

0x94e5,	// (0x00025895) aid_fill_nsta_ParamLimits

0x9631,	// (0x000259e1) indicator_nsta_pane_ParamLimits

0x97aa,	// (0x00025b5a) popup_clock_analogue_window

0x97aa,	// (0x00025b5a) popup_clock_digital_window

0xba01,	// (0x00027db1) grid_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x00027dda) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0002be29) clock_nsta_pane_t

0x5c84,	// (0x00022034) aid_size_max_handle

0x5c8e,	// (0x0002203e) aid_size_min_handle

0x9185,	// (0x00025535) editor_scroll_pane

0xc7ed,	// (0x00028b9d) ex_editor_pane

0x8638,	// (0x000249e8) scroll_pane_cp13

0x8457,	// (0x00024807) scroll_pane_cp14

0x8b7c,	// (0x00024f2c) scroll_pane_cp36

0x8ba8,	// (0x00024f58) list_single_graphic_hl_pane_cp2_ParamLimits

0x8ba8,	// (0x00024f58) list_single_graphic_hl_pane_cp2

0xafb0,	// (0x00027360) list_single_graphic_hl_pane_ParamLimits

0xafb0,	// (0x00027360) list_single_graphic_hl_pane

0x54ac,	// (0x0002185c) aid_size_min_hl_cp1

0xc7f5,	// (0x00028ba5) list_highlight_pane_cp34_ParamLimits

0xc7f5,	// (0x00028ba5) list_highlight_pane_cp34

0xc806,	// (0x00028bb6) list_single_graphic_hl_pane_g1_ParamLimits

0xc806,	// (0x00028bb6) list_single_graphic_hl_pane_g1

0x54b5,	// (0x00021865) list_single_graphic_hl_pane_g2_ParamLimits

0x54b5,	// (0x00021865) list_single_graphic_hl_pane_g2

0x54b5,	// (0x00021865) list_single_graphic_hl_pane_g3_ParamLimits

0x54b5,	// (0x00021865) list_single_graphic_hl_pane_g3

0x54c1,	// (0x00021871) list_single_graphic_hl_pane_g4_ParamLimits

0x54c1,	// (0x00021871) list_single_graphic_hl_pane_g4

0x54cd,	// (0x0002187d) list_single_graphic_hl_pane_g5_ParamLimits

0x54cd,	// (0x0002187d) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0002bf68) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0002bf68) list_single_graphic_hl_pane_g

0x54e1,	// (0x00021891) list_single_graphic_hl_pane_t1_ParamLimits

0x54e1,	// (0x00021891) list_single_graphic_hl_pane_t1

0xc813,	// (0x00028bc3) aid_size_min_hl_cp2

0xc81c,	// (0x00028bcc) list_highlight_pane_cp34_cp2_ParamLimits

0xc81c,	// (0x00028bcc) list_highlight_pane_cp34_cp2

0xc806,	// (0x00028bb6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc806,	// (0x00028bb6) list_single_graphic_hl_pane_g1_cp2

0xc829,	// (0x00028bd9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc829,	// (0x00028bd9) list_single_graphic_hl_pane_g2_cp2

0xc835,	// (0x00028be5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc835,	// (0x00028be5) list_single_graphic_hl_pane_g3_cp2

0xc843,	// (0x00028bf3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc843,	// (0x00028bf3) list_single_graphic_hl_pane_g4_cp2

0xc84f,	// (0x00028bff) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc84f,	// (0x00028bff) list_single_graphic_hl_pane_g5_cp2

0x5fcf,	// (0x0002237f) control_pane_g4_ParamLimits

0x5fcf,	// (0x0002237f) control_pane_g4

0x94a9,	// (0x00025859) bg_popup_sub_pane_cp10_ParamLimits

0xc030,	// (0x000283e0) list_choice_list_pane_ParamLimits

0xc03f,	// (0x000283ef) scroll_pane_cp23

0x7eb4,	// (0x00024264) bg_popup_preview_window_pane_cp02_ParamLimits

0xc669,	// (0x00028a19) list_preview_fixed_pane_ParamLimits

0xc67f,	// (0x00028a2f) list_preview_fixed_pane_cp_ParamLimits

0xc67f,	// (0x00028a2f) list_preview_fixed_pane_cp

0xc68b,	// (0x00028a3b) popup_preview_fixed_window_g1_ParamLimits

0xc68b,	// (0x00028a3b) popup_preview_fixed_window_g1

0xc697,	// (0x00028a47) popup_preview_fixed_window_g2_ParamLimits

0xc697,	// (0x00028a47) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0002bef7) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0002bef7) popup_preview_fixed_window_g

0x5bf8,	// (0x00021fa8) aid_navi_side_left_pane_ParamLimits

0x5c0d,	// (0x00021fbd) aid_navi_side_right_pane_ParamLimits

0x5c25,	// (0x00021fd5) navi_icon_pane_stacon_ParamLimits

0x5c39,	// (0x00021fe9) navi_navi_pane_stacon_ParamLimits

0x5c25,	// (0x00021fd5) navi_text_pane_stacon_ParamLimits

0x2c44,	// (0x0001eff4) main_text_info_pane

0xc879,	// (0x00028c29) listscroll_text_info_pane

0xc881,	// (0x00028c31) list_text_info_pane_ParamLimits

0xc881,	// (0x00028c31) list_text_info_pane

0xc890,	// (0x00028c40) scroll_pane_cp24_ParamLimits

0xc890,	// (0x00028c40) scroll_pane_cp24

0xc8ae,	// (0x00028c5e) list_text_info_pane_t1_ParamLimits

0xc8ae,	// (0x00028c5e) list_text_info_pane_t1

0x6127,	// (0x000224d7) popup_fast_swap2_window_ParamLimits

0x6127,	// (0x000224d7) popup_fast_swap2_window

0xc8df,	// (0x00028c8f) aid_size_cell_fast2

0x2c44,	// (0x0001eff4) bg_popup_window_pane_cp17

0x9e3f,	// (0x000261ef) heading_pane_cp2

0x9e47,	// (0x000261f7) listscroll_fast2_pane

0xc8e9,	// (0x00028c99) grid_fast2_pane

0xc8f3,	// (0x00028ca3) listscroll_fast2_pane_g1

0xc8fb,	// (0x00028cab) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0002bf73) listscroll_fast2_pane_g

0x8638,	// (0x000249e8) scroll_pane_cp26

0xc905,	// (0x00028cb5) cell_fast2_pane_ParamLimits

0xc905,	// (0x00028cb5) cell_fast2_pane

0xc91a,	// (0x00028cca) cell_fast2_pane_g1

0xc923,	// (0x00028cd3) cell_fast2_pane_g2

0xc92c,	// (0x00028cdc) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0002bf78) cell_fast2_pane_g

0x8214,	// (0x000245c4) grid_highlight_pane_cp9

0x8229,	// (0x000245d9) main_eswt_pane_ParamLimits

0x8229,	// (0x000245d9) main_eswt_pane

0xc8a5,	// (0x00028c55) list_single_text_info_pane

0xc934,	// (0x00028ce4) eswt_ctrl_button_pane

0xc934,	// (0x00028ce4) eswt_ctrl_canvas_pane

0xc93c,	// (0x00028cec) eswt_ctrl_combo_pane

0xc934,	// (0x00028ce4) eswt_ctrl_default_pane

0xc934,	// (0x00028ce4) eswt_ctrl_label_pane

0xc944,	// (0x00028cf4) eswt_ctrl_wait_pane

0xc94c,	// (0x00028cfc) eswt_shell_pane

0x2c44,	// (0x0001eff4) listscroll_eswt_app_pane

0xc96c,	// (0x00028d1c) popup_eswt_tasktip_window_ParamLimits

0xc96c,	// (0x00028d1c) popup_eswt_tasktip_window

0x9a53,	// (0x00025e03) bg_popup_window_pane_cp18

0xc97d,	// (0x00028d2d) eswt_control_pane_g1_ParamLimits

0xc97d,	// (0x00028d2d) eswt_control_pane_g1

0xc98a,	// (0x00028d3a) eswt_control_pane_g2_ParamLimits

0xc98a,	// (0x00028d3a) eswt_control_pane_g2

0xc997,	// (0x00028d47) eswt_control_pane_g3_ParamLimits

0xc997,	// (0x00028d47) eswt_control_pane_g3

0xc9a4,	// (0x00028d54) eswt_control_pane_g4_ParamLimits

0xc9a4,	// (0x00028d54) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0002bf7f) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0002bf7f) eswt_control_pane_g

0x84b8,	// (0x00024868) bg_button_pane_ParamLimits

0x84b8,	// (0x00024868) bg_button_pane

0x8229,	// (0x000245d9) common_borders_pane_copy2_ParamLimits

0x8229,	// (0x000245d9) common_borders_pane_copy2

0xc9b1,	// (0x00028d61) control_button_pane_g1_ParamLimits

0xc9b1,	// (0x00028d61) control_button_pane_g1

0xc9bd,	// (0x00028d6d) control_button_pane_g2_ParamLimits

0xc9bd,	// (0x00028d6d) control_button_pane_g2

0xc9c9,	// (0x00028d79) control_button_pane_g3_ParamLimits

0xc9c9,	// (0x00028d79) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0002bf88) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0002bf88) control_button_pane_g

0xc9dd,	// (0x00028d8d) control_button_pane_t1

0xc9eb,	// (0x00028d9b) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0002bf8f) control_button_pane_t

0x99d3,	// (0x00025d83) bg_button_pane_g1

0x99db,	// (0x00025d8b) bg_button_pane_g2

0x99e3,	// (0x00025d93) bg_button_pane_g3

0x99eb,	// (0x00025d9b) bg_button_pane_g4

0x99f3,	// (0x00025da3) bg_button_pane_g5

0x99fb,	// (0x00025dab) bg_button_pane_g6

0x9a03,	// (0x00025db3) bg_button_pane_g7

0x9a0b,	// (0x00025dbb) bg_button_pane_g8

0x9a13,	// (0x00025dc3) bg_button_pane_g9

0x0008,

0xf841,	// (0x0002bbf1) bg_button_pane_g

0xbfeb,	// (0x0002839b) common_borders_pane_ParamLimits

0xbfeb,	// (0x0002839b) common_borders_pane

0xc97d,	// (0x00028d2d) eswt_control_pane_g1_copy1_ParamLimits

0xc97d,	// (0x00028d2d) eswt_control_pane_g1_copy1

0xc98a,	// (0x00028d3a) eswt_control_pane_g2_copy1_ParamLimits

0xc98a,	// (0x00028d3a) eswt_control_pane_g2_copy1

0xc997,	// (0x00028d47) eswt_control_pane_g3_copy1_ParamLimits

0xc997,	// (0x00028d47) eswt_control_pane_g3_copy1

0xc9a4,	// (0x00028d54) eswt_control_pane_g4_copy1_ParamLimits

0xc9a4,	// (0x00028d54) eswt_control_pane_g4_copy1

0xc026,	// (0x000283d6) bg_eswt_ctrl_canvas_pane_g1

0xbfeb,	// (0x0002839b) common_borders_pane_cp2_ParamLimits

0xbfeb,	// (0x0002839b) common_borders_pane_cp2

0xbfeb,	// (0x0002839b) common_borders_pane_cp3_ParamLimits

0xbfeb,	// (0x0002839b) common_borders_pane_cp3

0xc9f9,	// (0x00028da9) separator_horizontal_pane

0xca01,	// (0x00028db1) separator_vertical_pane

0xc97d,	// (0x00028d2d) eswt_control_pane_g1_copy2_ParamLimits

0xc97d,	// (0x00028d2d) eswt_control_pane_g1_copy2

0xc98a,	// (0x00028d3a) eswt_control_pane_g2_copy2_ParamLimits

0xc98a,	// (0x00028d3a) eswt_control_pane_g2_copy2

0xc997,	// (0x00028d47) eswt_control_pane_g3_copy2_ParamLimits

0xc997,	// (0x00028d47) eswt_control_pane_g3_copy2

0xc9a4,	// (0x00028d54) eswt_control_pane_g4_copy2_ParamLimits

0xc9a4,	// (0x00028d54) eswt_control_pane_g4_copy2

0x2c44,	// (0x0001eff4) common_borders_pane_cp4

0xca0a,	// (0x00028dba) separator_horizontal_pane_g1

0xca13,	// (0x00028dc3) separator_horizontal_pane_g2

0xca1c,	// (0x00028dcc) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0002bf94) separator_horizontal_pane_g

0xc97d,	// (0x00028d2d) eswt_control_pane_g1_copy3_ParamLimits

0xc97d,	// (0x00028d2d) eswt_control_pane_g1_copy3

0xc98a,	// (0x00028d3a) eswt_control_pane_g2_copy3_ParamLimits

0xc98a,	// (0x00028d3a) eswt_control_pane_g2_copy3

0xc997,	// (0x00028d47) eswt_control_pane_g3_copy3_ParamLimits

0xc997,	// (0x00028d47) eswt_control_pane_g3_copy3

0xc9a4,	// (0x00028d54) eswt_control_pane_g4_copy3_ParamLimits

0xc9a4,	// (0x00028d54) eswt_control_pane_g4_copy3

0x2c44,	// (0x0001eff4) common_borders_pane_cp5

0xca25,	// (0x00028dd5) separator_vertical_pane_g1

0xca2e,	// (0x00028dde) separator_vertical_pane_g2

0xca37,	// (0x00028de7) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0002bf9b) separator_vertical_pane_g

0xc97d,	// (0x00028d2d) eswt_control_pane_g1_copy4_ParamLimits

0xc97d,	// (0x00028d2d) eswt_control_pane_g1_copy4

0xc98a,	// (0x00028d3a) eswt_control_pane_g2_copy4_ParamLimits

0xc98a,	// (0x00028d3a) eswt_control_pane_g2_copy4

0xc997,	// (0x00028d47) eswt_control_pane_g3_copy4_ParamLimits

0xc997,	// (0x00028d47) eswt_control_pane_g3_copy4

0xc9a4,	// (0x00028d54) eswt_control_pane_g4_copy4_ParamLimits

0xc9a4,	// (0x00028d54) eswt_control_pane_g4_copy4

0xca40,	// (0x00028df0) eswt_ctrl_combo_button_pane

0xca48,	// (0x00028df8) eswt_ctrl_input_pane

0xca50,	// (0x00028e00) popup_choice_list_window_cp70

0xca58,	// (0x00028e08) eswt_ctrl_input_pane_t1

0x2c44,	// (0x0001eff4) input_focus_pane_cp70

0xbfeb,	// (0x0002839b) bg_button_pane_cp70_ParamLimits

0xbfeb,	// (0x0002839b) bg_button_pane_cp70

0xca66,	// (0x00028e16) eswt_ctrl_combo_button_pane_g1

0xca6e,	// (0x00028e1e) wait_bar_pane_cp70

0x9a53,	// (0x00025e03) bg_popup_window_pane_cp70_ParamLimits

0x9a53,	// (0x00025e03) bg_popup_window_pane_cp70

0xca76,	// (0x00028e26) popup_eswt_tasktip_window_t1

0xca8c,	// (0x00028e3c) wait_bar_pane_cp71_ParamLimits

0xca8c,	// (0x00028e3c) wait_bar_pane_cp71

0xca98,	// (0x00028e48) grid_eswt_app_pane

0x895f,	// (0x00024d0f) scroll_pane_cp70

0xcaa1,	// (0x00028e51) cell_eswt_app_pane_ParamLimits

0xcaa1,	// (0x00028e51) cell_eswt_app_pane

0xcad1,	// (0x00028e81) cell_eswt_app_pane_g1_ParamLimits

0xcad1,	// (0x00028e81) cell_eswt_app_pane_g1

0xcb00,	// (0x00028eb0) cell_eswt_app_pane_g2_ParamLimits

0xcb00,	// (0x00028eb0) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x0002bfa2) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x0002bfa2) cell_eswt_app_pane_g

0xcb29,	// (0x00028ed9) cell_eswt_app_pane_t1_ParamLimits

0xcb29,	// (0x00028ed9) cell_eswt_app_pane_t1

0xcb5b,	// (0x00028f0b) grid_highlight_pane_cp70_ParamLimits

0xcb5b,	// (0x00028f0b) grid_highlight_pane_cp70

0x9051,	// (0x00025401) set_content_pane_g1

0x9430,	// (0x000257e0) status_small_volume_pane

0x6e16,	// (0x000231c6) status_small_volume_pane_g1

0x6e1e,	// (0x000231ce) volume_small2_pane

0x6e27,	// (0x000231d7) volume_small2_pane_g1

0x6e30,	// (0x000231e0) volume_small2_pane_g2

0x6e39,	// (0x000231e9) volume_small2_pane_g3

0x6e42,	// (0x000231f2) volume_small2_pane_g4

0x6e4b,	// (0x000231fb) volume_small2_pane_g5

0x6e54,	// (0x00023204) volume_small2_pane_g6

0x6e5d,	// (0x0002320d) volume_small2_pane_g7

0x6e66,	// (0x00023216) volume_small2_pane_g8

0x6e6f,	// (0x0002321f) volume_small2_pane_g9

0x6e78,	// (0x00023228) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0002bfa7) volume_small2_pane_g

0xc3ec,	// (0x0002879c) fep_vkb_top_text_pane_g1_ParamLimits

0xc407,	// (0x000287b7) fep_vkb_top_text_pane_t1_ParamLimits

0xc6a3,	// (0x00028a53) popup_preview_fixed_window_g3_ParamLimits

0xc6a3,	// (0x00028a53) popup_preview_fixed_window_g3

0x65d8,	// (0x00022988) popup_toolbar_trans_pane

0xadb7,	// (0x00027167) aid_height_set_list_ParamLimits

0xadc8,	// (0x00027178) aid_size_parent_ParamLimits

0x94a9,	// (0x00025859) list_highlight_pane_cp2_ParamLimits

0x9051,	// (0x00025401) set_content_pane_g1_ParamLimits

0x4f15,	// (0x000212c5) list_single_image_pane_ParamLimits

0x4f15,	// (0x000212c5) list_single_image_pane

0xcb67,	// (0x00028f17) aid_size_cell_image_ParamLimits

0xcb67,	// (0x00028f17) aid_size_cell_image

0xcb74,	// (0x00028f24) grid_single_image_pane_ParamLimits

0xcb74,	// (0x00028f24) grid_single_image_pane

0x9a1b,	// (0x00025dcb) list_single_image_pane_g1_ParamLimits

0x9a1b,	// (0x00025dcb) list_single_image_pane_g1

0xcb80,	// (0x00028f30) list_single_image_pane_g2_ParamLimits

0xcb80,	// (0x00028f30) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0002bfbc) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0002bfbc) list_single_image_pane_g

0xcb94,	// (0x00028f44) list_single_image_pane_t1_ParamLimits

0xcb94,	// (0x00028f44) list_single_image_pane_t1

0xcbaa,	// (0x00028f5a) cell_image_list_pane_ParamLimits

0xcbaa,	// (0x00028f5a) cell_image_list_pane

0xcbbe,	// (0x00028f6e) cell_image_list_pane_g1

0xcbc7,	// (0x00028f77) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0002bfc1) cell_image_list_pane_g

0xcbd0,	// (0x00028f80) aid_size_cell_tb_trans_pane

0x84b8,	// (0x00024868) bg_tb_trans_pane

0xcbe2,	// (0x00028f92) grid_tb_trans_pane

0x99d3,	// (0x00025d83) bg_tb_trans_pane_g1

0x99db,	// (0x00025d8b) bg_tb_trans_pane_g2

0x99e3,	// (0x00025d93) bg_tb_trans_pane_g3

0x99eb,	// (0x00025d9b) bg_tb_trans_pane_g4

0x99f3,	// (0x00025da3) bg_tb_trans_pane_g5

0x9a0b,	// (0x00025dbb) bg_tb_trans_pane_g6

0x9a13,	// (0x00025dc3) bg_tb_trans_pane_g7

0x99fb,	// (0x00025dab) bg_tb_trans_pane_g8

0x9a03,	// (0x00025db3) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x0002bfc6) bg_tb_trans_pane_g

0xcbf6,	// (0x00028fa6) cell_toolbar_trans_pane_ParamLimits

0xcbf6,	// (0x00028fa6) cell_toolbar_trans_pane

0xc026,	// (0x000283d6) cell_toolbar_trans_pane_g1

0xbbfb,	// (0x00027fab) list_form2_midp_pane_t1

0xbc09,	// (0x00027fb9) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0002be6f) list_form2_midp_pane_t

0xbc17,	// (0x00027fc7) scroll_pane_cp51_ParamLimits

0xbdd3,	// (0x00028183) form2_midp_wait_pane_g1

0xbddc,	// (0x0002818c) form2_midp_wait_pane_g2

0xbde5,	// (0x00028195) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0002be84) form2_midp_wait_pane_g

0x7c2b,	// (0x00023fdb) list_highlight_pane_cp21_ParamLimits

0xbe31,	// (0x000281e1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe40,	// (0x000281f0) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4eb6,	// (0x00021266) list_single_2graphic_im_pane_ParamLimits

0x4eb6,	// (0x00021266) list_single_2graphic_im_pane

0xcc1c,	// (0x00028fcc) list_single_2graphic_im_pane_g1_ParamLimits

0xcc1c,	// (0x00028fcc) list_single_2graphic_im_pane_g1

0xcc2d,	// (0x00028fdd) list_single_2graphic_im_pane_g2_ParamLimits

0xcc2d,	// (0x00028fdd) list_single_2graphic_im_pane_g2

0xcc39,	// (0x00028fe9) list_single_2graphic_im_pane_g3_ParamLimits

0xcc39,	// (0x00028fe9) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x0002bfd9) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x0002bfd9) list_single_2graphic_im_pane_g

0xcc59,	// (0x00029009) list_single_2graphic_im_pane_t1_ParamLimits

0xcc59,	// (0x00029009) list_single_2graphic_im_pane_t1

0xc6af,	// (0x00028a5f) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6af,	// (0x00028a5f) list_single_graphic_2heading_pane_fp

0x531e,	// (0x000216ce) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x531e,	// (0x000216ce) list_single_graphic_2heading_pane_fp_g1

0xc6c4,	// (0x00028a74) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6c4,	// (0x00028a74) list_single_graphic_2heading_pane_fp_g2

0x52e7,	// (0x00021697) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x52e7,	// (0x00021697) list_single_graphic_2heading_pane_fp_g3

0x52f3,	// (0x000216a3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x52f3,	// (0x000216a3) list_single_graphic_2heading_pane_fp_g4

0xc6d0,	// (0x00028a80) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6d0,	// (0x00028a80) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002bf07) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002bf07) list_single_graphic_2heading_pane_fp_g

0x54f7,	// (0x000218a7) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x54f7,	// (0x000218a7) list_single_graphic_2heading_pane_fp_t1

0x5356,	// (0x00021706) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5356,	// (0x00021706) list_single_graphic_2heading_pane_fp_t2

0x550d,	// (0x000218bd) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x550d,	// (0x000218bd) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x0002bfe2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x0002bfe2) list_single_graphic_2heading_pane_fp_t

0xc0b2,	// (0x00028462) fep_hwr_write_pane_g5_ParamLimits

0xc0b2,	// (0x00028462) fep_hwr_write_pane_g5

0xc0be,	// (0x0002846e) fep_hwr_write_pane_g6_ParamLimits

0xc0be,	// (0x0002846e) fep_hwr_write_pane_g6

0xc94c,	// (0x00028cfc) eswt_shell_pane_ParamLimits

0x9a53,	// (0x00025e03) bg_popup_window_pane_cp18_ParamLimits

0xad10,	// (0x000270c0) heading_pane_cp70

0xca76,	// (0x00028e26) popup_eswt_tasktip_window_t1_ParamLimits

0x953a,	// (0x000258ea) aid_touch_tab_arrow_left

0x9549,	// (0x000258f9) aid_touch_tab_arrow_right

0x7b73,	// (0x00023f23) title_pane_g3_ParamLimits

0x7b73,	// (0x00023f23) title_pane_g3

0x8477,	// (0x00024827) set_value_pane_g1

0x65d8,	// (0x00022988) popup_toolbar_trans_pane_ParamLimits

0xcbd0,	// (0x00028f80) aid_size_cell_tb_trans_pane_ParamLimits

0x84b8,	// (0x00024868) bg_tb_trans_pane_ParamLimits

0xcbe2,	// (0x00028f92) grid_tb_trans_pane_ParamLimits

0x7eb4,	// (0x00024264) cont_note_pane_ParamLimits

0x7eb4,	// (0x00024264) cont_note_pane

0x8229,	// (0x000245d9) cont_snote2_single_text_pane_ParamLimits

0x8229,	// (0x000245d9) cont_snote2_single_text_pane

0x8229,	// (0x000245d9) cont_snote2_single_graphic_pane_ParamLimits

0x8229,	// (0x000245d9) cont_snote2_single_graphic_pane

0xa06e,	// (0x0002641e) cont_note_wait_pane_ParamLimits

0xa06e,	// (0x0002641e) cont_note_wait_pane

0xa06e,	// (0x0002641e) cont_note_image_pane_ParamLimits

0xa06e,	// (0x0002641e) cont_note_image_pane

0xcc8a,	// (0x0002903a) popup_note2_window_g1_ParamLimits

0xcc8a,	// (0x0002903a) popup_note2_window_g1

0xccbb,	// (0x0002906b) popup_note2_window_t1_ParamLimits

0xccbb,	// (0x0002906b) popup_note2_window_t1

0xcd00,	// (0x000290b0) popup_note2_window_t2_ParamLimits

0xcd00,	// (0x000290b0) popup_note2_window_t2

0xcd45,	// (0x000290f5) popup_note2_window_t3_ParamLimits

0xcd45,	// (0x000290f5) popup_note2_window_t3

0xcd8a,	// (0x0002913a) popup_note2_window_t4_ParamLimits

0xcd8a,	// (0x0002913a) popup_note2_window_t4

0x7f38,	// (0x000242e8) popup_note2_window_t5_ParamLimits

0x7f38,	// (0x000242e8) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0002bfee) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0002bfee) popup_note2_window_t

0xcdb9,	// (0x00029169) popup_note2_image_window_g1_ParamLimits

0xcdb9,	// (0x00029169) popup_note2_image_window_g1

0xcdc5,	// (0x00029175) popup_note2_image_window_g2_ParamLimits

0xcdc5,	// (0x00029175) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x0002bff9) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x0002bff9) popup_note2_image_window_g

0xcdd7,	// (0x00029187) popup_note2_image_window_t1_ParamLimits

0xcdd7,	// (0x00029187) popup_note2_image_window_t1

0xcdef,	// (0x0002919f) popup_note2_image_window_t2_ParamLimits

0xcdef,	// (0x0002919f) popup_note2_image_window_t2

0xce07,	// (0x000291b7) popup_note2_image_window_t3_ParamLimits

0xce07,	// (0x000291b7) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0002bffe) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0002bffe) popup_note2_image_window_t

0xa07c,	// (0x0002642c) popup_note2_wait_window_g1_ParamLimits

0xa07c,	// (0x0002642c) popup_note2_wait_window_g1

0xce23,	// (0x000291d3) popup_note2_wait_window_g2_ParamLimits

0xce23,	// (0x000291d3) popup_note2_wait_window_g2

0xa094,	// (0x00026444) popup_note2_wait_window_g3_ParamLimits

0xa094,	// (0x00026444) popup_note2_wait_window_g3

0x0002,

0xfc55,	// (0x0002c005) popup_note2_wait_window_g_ParamLimits

0xfc55,	// (0x0002c005) popup_note2_wait_window_g

0xce2f,	// (0x000291df) popup_note2_wait_window_t1_ParamLimits

0xce2f,	// (0x000291df) popup_note2_wait_window_t1

0xce4d,	// (0x000291fd) popup_note2_wait_window_t2_ParamLimits

0xce4d,	// (0x000291fd) popup_note2_wait_window_t2

0xce6b,	// (0x0002921b) popup_note2_wait_window_t3_ParamLimits

0xce6b,	// (0x0002921b) popup_note2_wait_window_t3

0xce7d,	// (0x0002922d) popup_note2_wait_window_t4_ParamLimits

0xce7d,	// (0x0002922d) popup_note2_wait_window_t4

0x0003,

0xfc5c,	// (0x0002c00c) popup_note2_wait_window_t_ParamLimits

0xfc5c,	// (0x0002c00c) popup_note2_wait_window_t

0xce8f,	// (0x0002923f) wait_bar2_pane_ParamLimits

0xce8f,	// (0x0002923f) wait_bar2_pane

0xcea7,	// (0x00029257) popup_snote2_single_text_window_g1_ParamLimits

0xcea7,	// (0x00029257) popup_snote2_single_text_window_g1

0xcecf,	// (0x0002927f) popup_snote2_single_text_window_t1_ParamLimits

0xcecf,	// (0x0002927f) popup_snote2_single_text_window_t1

0xcf1b,	// (0x000292cb) popup_snote2_single_text_window_t2_ParamLimits

0xcf1b,	// (0x000292cb) popup_snote2_single_text_window_t2

0xcf67,	// (0x00029317) popup_snote2_single_text_window_t3_ParamLimits

0xcf67,	// (0x00029317) popup_snote2_single_text_window_t3

0xcfa8,	// (0x00029358) popup_snote2_single_text_window_t4_ParamLimits

0xcfa8,	// (0x00029358) popup_snote2_single_text_window_t4

0xcfde,	// (0x0002938e) popup_snote2_single_text_window_t5_ParamLimits

0xcfde,	// (0x0002938e) popup_snote2_single_text_window_t5

0x0004,

0xfc65,	// (0x0002c015) popup_snote2_single_text_window_t_ParamLimits

0xfc65,	// (0x0002c015) popup_snote2_single_text_window_t

0xd009,	// (0x000293b9) popup_snote2_single_graphic_window_g1_ParamLimits

0xd009,	// (0x000293b9) popup_snote2_single_graphic_window_g1

0xd031,	// (0x000293e1) popup_snote2_single_graphic_window_g2_ParamLimits

0xd031,	// (0x000293e1) popup_snote2_single_graphic_window_g2

0x0001,

0xfc70,	// (0x0002c020) popup_snote2_single_graphic_window_g_ParamLimits

0xfc70,	// (0x0002c020) popup_snote2_single_graphic_window_g

0xd059,	// (0x00029409) popup_snote2_single_graphic_window_t1_ParamLimits

0xd059,	// (0x00029409) popup_snote2_single_graphic_window_t1

0xd0a5,	// (0x00029455) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0a5,	// (0x00029455) popup_snote2_single_graphic_window_t2

0xcf67,	// (0x00029317) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf67,	// (0x00029317) popup_snote2_single_graphic_window_t3

0xcfa8,	// (0x00029358) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfa8,	// (0x00029358) popup_snote2_single_graphic_window_t4

0xcfde,	// (0x0002938e) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfde,	// (0x0002938e) popup_snote2_single_graphic_window_t5

0x0004,

0xfc75,	// (0x0002c025) popup_snote2_single_graphic_window_t_ParamLimits

0xfc75,	// (0x0002c025) popup_snote2_single_graphic_window_t

0xbad8,	// (0x00027e88) clock_nsta_pane_cp2_t1

0xbad8,	// (0x00027e88) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0002be45) clock_nsta_pane_cp2_t

0x4a6a,	// (0x00020e1a) form_field_data_wide_pane_g1_ParamLimits

0x84c6,	// (0x00024876) form_field_data_wide_pane_g2_ParamLimits

0x84c6,	// (0x00024876) form_field_data_wide_pane_g2

0x84d2,	// (0x00024882) form_field_data_wide_pane_g3_ParamLimits

0x84d2,	// (0x00024882) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002ba06) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002ba06) form_field_data_wide_pane_g

0xb9b4,	// (0x00027d64) grid_touch_3_pane_ParamLimits

0xb9b4,	// (0x00027d64) grid_touch_3_pane

0xd0f1,	// (0x000294a1) cell_touch_3_pane_ParamLimits

0xd0f1,	// (0x000294a1) cell_touch_3_pane

0xc026,	// (0x000283d6) cell_touch_3_pane_g1

0xc026,	// (0x000283d6) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0002beca) cell_touch_3_pane_g

0x7f90,	// (0x00024340) cont_query_data_pane

0x7f98,	// (0x00024348) cont_query_data_pane_cp1

0xd11f,	// (0x000294cf) button_value_adjust_pane_cp7

0xd127,	// (0x000294d7) query_popup_pane_cp3

0x8c56,	// (0x00025006) bg_popup_sub_pane_cp22_ParamLimits

0x5d3a,	// (0x000220ea) navi_navi_volume_pane_cp2

0x5d55,	// (0x00022105) popup_side_volume_key_window_g2

0x5d64,	// (0x00022114) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0002ba9c) popup_side_volume_key_window_g

0x5d81,	// (0x00022131) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0002baa3) popup_side_volume_key_window_t

0x8f10,	// (0x000252c0) popup_side_volume_key_window_ParamLimits

0x46bf,	// (0x00020a6f) list_double_graphic_pane_g4_ParamLimits

0x46bf,	// (0x00020a6f) list_double_graphic_pane_g4

0x4ef5,	// (0x000212a5) list_single_2heading_msg_pane_ParamLimits

0x4ef5,	// (0x000212a5) list_single_2heading_msg_pane

0x552d,	// (0x000218dd) list_single_2heading_msg_pane_g1_ParamLimits

0x552d,	// (0x000218dd) list_single_2heading_msg_pane_g1

0x44ee,	// (0x0002089e) list_single_2heading_msg_pane_g2_ParamLimits

0x44ee,	// (0x0002089e) list_single_2heading_msg_pane_g2

0x5539,	// (0x000218e9) list_single_2heading_msg_pane_g3_ParamLimits

0x5539,	// (0x000218e9) list_single_2heading_msg_pane_g3

0x5545,	// (0x000218f5) list_single_2heading_msg_pane_g4_ParamLimits

0x5545,	// (0x000218f5) list_single_2heading_msg_pane_g4

0x0003,

0xfc80,	// (0x0002c030) list_single_2heading_msg_pane_g_ParamLimits

0xfc80,	// (0x0002c030) list_single_2heading_msg_pane_g

0x555d,	// (0x0002190d) list_single_2heading_msg_pane_t1_ParamLimits

0x555d,	// (0x0002190d) list_single_2heading_msg_pane_t1

0x5585,	// (0x00021935) list_single_2heading_msg_pane_t2_ParamLimits

0x5585,	// (0x00021935) list_single_2heading_msg_pane_t2

0x55b9,	// (0x00021969) list_single_2heading_msg_pane_t3_ParamLimits

0x55b9,	// (0x00021969) list_single_2heading_msg_pane_t3

0x55f2,	// (0x000219a2) list_single_2heading_msg_pane_t4_ParamLimits

0x55f2,	// (0x000219a2) list_single_2heading_msg_pane_t4

0x0003,

0xfc89,	// (0x0002c039) list_single_2heading_msg_pane_t_ParamLimits

0xfc89,	// (0x0002c039) list_single_2heading_msg_pane_t

0x7b7f,	// (0x00023f2f) title_pane_g4_ParamLimits

0x7b7f,	// (0x00023f2f) title_pane_g4

0x5b49,	// (0x00021ef9) title_pane_stacon_g3_ParamLimits

0x5b49,	// (0x00021ef9) title_pane_stacon_g3

0xcc4d,	// (0x00028ffd) list_single_2graphic_im_pane_g4_ParamLimits

0xcc4d,	// (0x00028ffd) list_single_2graphic_im_pane_g4

0xaacd,	// (0x00026e7d) popup_side_volume_key_window_cp

0xb2ff,	// (0x000276af) main_idle_act2_pane_t1

0x66ca,	// (0x00022a7a) toolbar_button_pane_g10

0x8421,	// (0x000247d1) popup_toolbar_window_cp1

0xbac9,	// (0x00027e79) clock_nsta_pane_cp_t1

0xbac9,	// (0x00027e79) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0002be40) clock_nsta_pane_cp_t

0x5d3a,	// (0x000220ea) navi_navi_volume_pane_cp2_ParamLimits

0x5d49,	// (0x000220f9) popup_side_volume_key_window_g1_ParamLimits

0x5d55,	// (0x00022105) popup_side_volume_key_window_g2_ParamLimits

0x5d64,	// (0x00022114) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0002ba9c) popup_side_volume_key_window_g_ParamLimits

0x6b26,	// (0x00022ed6) fep_hwr_aid_pane

0x1ab3,	// (0x0001de63) bg_fep_hwr_top_pane_g4_ParamLimits

0xc082,	// (0x00028432) fep_hwr_top_pane_g1_ParamLimits

0xc094,	// (0x00028444) fep_hwr_top_pane_g2_ParamLimits

0x6bdf,	// (0x00022f8f) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0002be95) fep_hwr_top_pane_g_ParamLimits

0x6bf4,	// (0x00022fa4) fep_hwr_top_text_pane_ParamLimits

0xa890,	// (0x00026c40) aid_touch_tab_arrow_arrow_2

0xa899,	// (0x00026c49) aid_touch_tab_arrow_left_2

0x6b3a,	// (0x00022eea) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6b71,	// (0x00022f21) fep_hwr_prediction_pane

0xc1f4,	// (0x000285a4) fep_vkb_prediction_pane

0xc2f8,	// (0x000286a8) fep_vkb_side_pane_g3_ParamLimits

0xc2f8,	// (0x000286a8) fep_vkb_side_pane_g3

0xc2a4,	// (0x00028654) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc724,	// (0x00028ad4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc731,	// (0x00028ae1) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0002bf3f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd14c,	// (0x000294fc) fep_hwr_prediction_pane_g1

0x6e81,	// (0x00023231) fep_hwr_prediction_pane_g2

0x6e89,	// (0x00023239) fep_hwr_prediction_pane_g3

0x6e91,	// (0x00023241) fep_hwr_prediction_pane_g4

0x0003,

0xfc92,	// (0x0002c042) fep_hwr_prediction_pane_g

0xd14c,	// (0x000294fc) fep_vkb_prediction_pane_g1

0xd156,	// (0x00029506) fep_vkb_prediction_pane_g2

0xd15e,	// (0x0002950e) fep_vkb_prediction_pane_g3

0xd166,	// (0x00029516) fep_vkb_prediction_pane_g4

0x0003,

0xfc9b,	// (0x0002c04b) fep_vkb_prediction_pane_g

0x69a6,	// (0x00022d56) slider_set_pane_g3

0x69ba,	// (0x00022d6a) slider_set_pane_g4

0x69d2,	// (0x00022d82) slider_set_pane_g5

0x69a6,	// (0x00022d56) slider_set_pane_g6

0x69e8,	// (0x00022d98) slider_set_pane_g7

0xaf2d,	// (0x000272dd) slider_form_pane_g3

0xaf36,	// (0x000272e6) slider_form_pane_g4

0xaf3e,	// (0x000272ee) slider_form_pane_g5

0xaf2d,	// (0x000272dd) slider_form_pane_g6

0xaf46,	// (0x000272f6) slider_form_pane_g7

0xb5aa,	// (0x0002795a) slider_set_pane_vc_g3

0xb5b3,	// (0x00027963) slider_set_pane_vc_g4

0xb5bc,	// (0x0002796c) slider_set_pane_vc_g5

0xb5aa,	// (0x0002795a) slider_set_pane_vc_g6

0xb5c5,	// (0x00027975) slider_set_pane_vc_g7

0xb787,	// (0x00027b37) slider_form_pane_vc_g1

0xb790,	// (0x00027b40) slider_form_pane_vc_g2

0xb799,	// (0x00027b49) slider_form_pane_vc_g3

0xb787,	// (0x00027b37) slider_form_pane_vc_g4

0xb7a2,	// (0x00027b52) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0002be12) slider_form_pane_vc_g

0x2c44,	// (0x0001eff4) main_idle_act3_pane

0xd16e,	// (0x0002951e) ai3_links_pane

0xd177,	// (0x00029527) popup_ai3_data_window_ParamLimits

0xd177,	// (0x00029527) popup_ai3_data_window

0x2c44,	// (0x0001eff4) grid_ai3_links_pane

0xd191,	// (0x00029541) cell_ai3_links_pane_ParamLimits

0xd191,	// (0x00029541) cell_ai3_links_pane

0xd1a9,	// (0x00029559) bg_popup_sub_pane_cp11

0xd1b6,	// (0x00029566) cell_ai3_links_pane_g1

0x2c44,	// (0x0001eff4) bg_popup_sub_pane_cp12

0xd1db,	// (0x0002958b) heading_ai3_data_pane

0xd1e3,	// (0x00029593) list_ai3_gene_pane

0xd1ef,	// (0x0002959f) popup_ai3_data_window_g1

0xd1f7,	// (0x000295a7) heading_ai3_data_pane_g1

0xd1ff,	// (0x000295af) heading_ai3_data_pane_t1

0xd20d,	// (0x000295bd) list_double_ai3_gene_pane_ParamLimits

0xd20d,	// (0x000295bd) list_double_ai3_gene_pane

0xd21a,	// (0x000295ca) list_single_ai3_gene_pane_ParamLimits

0xd21a,	// (0x000295ca) list_single_ai3_gene_pane

0xbfeb,	// (0x0002839b) list_highlight_pane_cp7_ParamLimits

0xbfeb,	// (0x0002839b) list_highlight_pane_cp7

0xd227,	// (0x000295d7) list_single_a13_gene_pane_t1_ParamLimits

0xd227,	// (0x000295d7) list_single_a13_gene_pane_t1

0xd23e,	// (0x000295ee) list_single_ai3_gene_pane_g1

0xd247,	// (0x000295f7) list_single_ai3_gene_pane_g2

0x0001,

0xfca4,	// (0x0002c054) list_single_ai3_gene_pane_g

0xd24f,	// (0x000295ff) list_double_ai3_gene_pane_g1_ParamLimits

0xd24f,	// (0x000295ff) list_double_ai3_gene_pane_g1

0xd25b,	// (0x0002960b) list_double_ai3_gene_pane_t1_ParamLimits

0xd25b,	// (0x0002960b) list_double_ai3_gene_pane_t1

0xd277,	// (0x00029627) list_double_ai3_gene_pane_t2_ParamLimits

0xd277,	// (0x00029627) list_double_ai3_gene_pane_t2

0xd28d,	// (0x0002963d) list_double_ai3_gene_pane_t3_ParamLimits

0xd28d,	// (0x0002963d) list_double_ai3_gene_pane_t3

0x0002,

0xfca9,	// (0x0002c059) list_double_ai3_gene_pane_t_ParamLimits

0xfca9,	// (0x0002c059) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5523,	// (0x000218d3) aid_size_min_col_2

0xd138,	// (0x000294e8) aid_size_min_msg_ParamLimits

0xd138,	// (0x000294e8) aid_size_min_msg

0xc3f8,	// (0x000287a8) fep_vkb_top_text_pane_g2_ParamLimits

0xc3f8,	// (0x000287a8) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0002bec5) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0002bec5) fep_vkb_top_text_pane_g

0x2c44,	// (0x0001eff4) main_hc_apps_shell_pane

0xd2aa,	// (0x0002965a) grid_hc_apps_pane_ParamLimits

0xd2aa,	// (0x0002965a) grid_hc_apps_pane

0xd2bc,	// (0x0002966c) list_hc_apps_pane

0xd2c4,	// (0x00029674) scroll_pane_cp37_ParamLimits

0xd2c4,	// (0x00029674) scroll_pane_cp37

0xd2d0,	// (0x00029680) cell_hc_apps_pane_ParamLimits

0xd2d0,	// (0x00029680) cell_hc_apps_pane

0xd37e,	// (0x0002972e) cell_hc_apps_pane_g1_ParamLimits

0xd37e,	// (0x0002972e) cell_hc_apps_pane_g1

0xd3ae,	// (0x0002975e) cell_hc_apps_pane_g2_ParamLimits

0xd3ae,	// (0x0002975e) cell_hc_apps_pane_g2

0xd3ca,	// (0x0002977a) cell_hc_apps_pane_g3_ParamLimits

0xd3ca,	// (0x0002977a) cell_hc_apps_pane_g3

0x0002,

0xfcb0,	// (0x0002c060) cell_hc_apps_pane_g_ParamLimits

0xfcb0,	// (0x0002c060) cell_hc_apps_pane_g

0xd3ec,	// (0x0002979c) cell_hc_apps_pane_t1_ParamLimits

0xd3ec,	// (0x0002979c) cell_hc_apps_pane_t1

0x7eb4,	// (0x00024264) grid_highlight_pane_cp10_ParamLimits

0x7eb4,	// (0x00024264) grid_highlight_pane_cp10

0xd42c,	// (0x000297dc) list_single_hc_apps_pane_ParamLimits

0xd42c,	// (0x000297dc) list_single_hc_apps_pane

0xd488,	// (0x00029838) list_single_hc_apps_pane_g1

0x5617,	// (0x000219c7) list_single_hc_apps_pane_g2

0x0001,

0xfcb7,	// (0x0002c067) list_single_hc_apps_pane_g

0x5630,	// (0x000219e0) list_single_hc_apps_pane_g2_copy1

0x564c,	// (0x000219fc) list_single_hc_apps_pane_t1

0x7c2b,	// (0x00023fdb) bg_set_opt_pane_cp_ParamLimits

0x5a71,	// (0x00021e21) setting_slider_pane_t1_ParamLimits

0x5a8a,	// (0x00021e3a) setting_slider_pane_t2_ParamLimits

0x5aa4,	// (0x00021e54) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002b8e9) setting_slider_pane_t_ParamLimits

0x5abc,	// (0x00021e6c) slider_set_pane_ParamLimits

0x5fe3,	// (0x00022393) control_pane_g5_ParamLimits

0x5fe3,	// (0x00022393) control_pane_g5

0xad7c,	// (0x0002712c) slider_set_pane_g1_ParamLimits

0x699a,	// (0x00022d4a) slider_set_pane_g2_ParamLimits

0x69a6,	// (0x00022d56) slider_set_pane_g3_ParamLimits

0x69ba,	// (0x00022d6a) slider_set_pane_g4_ParamLimits

0x69d2,	// (0x00022d82) slider_set_pane_g5_ParamLimits

0x69a6,	// (0x00022d56) slider_set_pane_g6_ParamLimits

0x69e8,	// (0x00022d98) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0002bcef) slider_set_pane_g_ParamLimits

0x8ffc,	// (0x000253ac) navi_icon_text_pane_ParamLimits

0x94fb,	// (0x000258ab) aid_fill_nsta_2_ParamLimits

0x953a,	// (0x000258ea) aid_touch_tab_arrow_left_ParamLimits

0x9549,	// (0x000258f9) aid_touch_tab_arrow_right_ParamLimits

0x95b6,	// (0x00025966) clock_nsta_pane_ParamLimits

0xa872,	// (0x00026c22) navi_icon_pane_g1_ParamLimits

0xa87e,	// (0x00026c2e) navi_text_pane_t1_ParamLimits

0xbbd5,	// (0x00027f85) navi_icon_text_pane_g1_ParamLimits

0xbbe1,	// (0x00027f91) navi_icon_text_pane_t1_ParamLimits

0xd488,	// (0x00029838) list_single_hc_apps_pane_g1_ParamLimits

0x5617,	// (0x000219c7) list_single_hc_apps_pane_g2_ParamLimits

0xfcb7,	// (0x0002c067) list_single_hc_apps_pane_g_ParamLimits

0x5630,	// (0x000219e0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x564c,	// (0x000219fc) list_single_hc_apps_pane_t1_ParamLimits

0x597b,	// (0x00021d2b) popup_toolbar2_fixed_window_ParamLimits

0x597b,	// (0x00021d2b) popup_toolbar2_fixed_window

0x65ce,	// (0x0002297e) popup_toolbar2_float_window

0x2c44,	// (0x0001eff4) bg_popup_sub_pane_cp27

0xd4a1,	// (0x00029851) grid_toolbar2_float_pane

0x2c44,	// (0x0001eff4) bg_popup_sub_pane_cp26

0xd4a1,	// (0x00029851) grid_toolbar2_fixed_pane

0xd4a9,	// (0x00029859) cell_toolbar2_fixed_pane_ParamLimits

0xd4a9,	// (0x00029859) cell_toolbar2_fixed_pane

0xd4b9,	// (0x00029869) cell_toolbar2_fixed_pane_g1

0xd4c2,	// (0x00029872) toolbar2_fixed_button_pane

0x99d3,	// (0x00025d83) toolbar2_fixed_button_pane_g1

0x99db,	// (0x00025d8b) toolbar2_fixed_button_pane_g2

0x99e3,	// (0x00025d93) toolbar2_fixed_button_pane_g3

0x99eb,	// (0x00025d9b) toolbar2_fixed_button_pane_g4

0x99f3,	// (0x00025da3) toolbar2_fixed_button_pane_g5

0x99fb,	// (0x00025dab) toolbar2_fixed_button_pane_g6

0x9a03,	// (0x00025db3) toolbar2_fixed_button_pane_g7

0x9a0b,	// (0x00025dbb) toolbar2_fixed_button_pane_g8

0x9a13,	// (0x00025dc3) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0002bbf1) toolbar2_fixed_button_pane_g

0xd4ca,	// (0x0002987a) cell_toolbar2_float_pane_ParamLimits

0xd4ca,	// (0x0002987a) cell_toolbar2_float_pane

0xd4db,	// (0x0002988b) cell_toolbar2_float_pane_g1

0xd4c2,	// (0x00029872) toolbar2_fixed_button_pane_cp

0xc154,	// (0x00028504) fep_vkb_accented_list_pane_ParamLimits

0xc154,	// (0x00028504) fep_vkb_accented_list_pane

0x6d42,	// (0x000230f2) bg_popup_fep_shadow_pane_g9

0x9185,	// (0x00025535) bg_popup_fep_shadow_pane_cp3

0x861f,	// (0x000249cf) list_accented_list_pane

0xd4e4,	// (0x00029894) list_single_accented_list_pane_ParamLimits

0xd4e4,	// (0x00029894) list_single_accented_list_pane

0x9185,	// (0x00025535) list_highlight_pane_cp10

0xd4f5,	// (0x000298a5) list_single_accented_list_pane_t1

0x651e,	// (0x000228ce) popup_slider_window_ParamLimits

0x651e,	// (0x000228ce) popup_slider_window

0xd12f,	// (0x000294df) aid_indentation_list_msg

0xd5b9,	// (0x00029969) bg_popup_window_pane_cp19

0xd621,	// (0x000299d1) popup_slider_window_g1

0xd63d,	// (0x000299ed) popup_slider_window_g2

0xd659,	// (0x00029a09) popup_slider_window_g3

0x0005,

0xfcbc,	// (0x0002c06c) popup_slider_window_g

0xd6bf,	// (0x00029a6f) popup_slider_window_t1

0xd733,	// (0x00029ae3) small_volume_slider_vertical_pane

0xc026,	// (0x000283d6) small_volume_slider_vertical_pane_g1

0xc026,	// (0x000283d6) small_volume_slider_vertical_pane_g2

0xd74f,	// (0x00029aff) small_volume_slider_vertical_pane_g3

0x0002,

0xfcce,	// (0x0002c07e) small_volume_slider_vertical_pane_g

0x573d,	// (0x00021aed) area_side_right_pane_ParamLimits

0x573d,	// (0x00021aed) area_side_right_pane

0x6e99,	// (0x00023249) aid_size_side_button_ParamLimits

0x6e99,	// (0x00023249) aid_size_side_button

0x6ead,	// (0x0002325d) grid_sctrl_middle_pane_ParamLimits

0x6ead,	// (0x0002325d) grid_sctrl_middle_pane

0x6ecc,	// (0x0002327c) sctrl_sk_bottom_pane

0x6edd,	// (0x0002328d) sctrl_sk_top_pane

0x6eef,	// (0x0002329f) aid_touch_sctrl_top

0x7eb4,	// (0x00024264) bg_sctrl_sk_pane_ParamLimits

0x7eb4,	// (0x00024264) bg_sctrl_sk_pane

0x6efc,	// (0x000232ac) sctrl_sk_top_pane_g1

0x6f09,	// (0x000232b9) sctrl_sk_top_pane_t1

0x6eef,	// (0x0002329f) aid_touch_sctrl_bottom

0x7eb4,	// (0x00024264) bg_sctrl_sk_pane_cp_ParamLimits

0x7eb4,	// (0x00024264) bg_sctrl_sk_pane_cp

0x6f24,	// (0x000232d4) sctrl_sk_bottom_pane_g1

0x6f09,	// (0x000232b9) sctrl_sk_bottom_pane_t1

0x6f2d,	// (0x000232dd) cell_sctrl_middle_pane_ParamLimits

0x6f2d,	// (0x000232dd) cell_sctrl_middle_pane

0x6f48,	// (0x000232f8) aid_touch_sctrl_middle_ParamLimits

0x6f48,	// (0x000232f8) aid_touch_sctrl_middle

0x84b8,	// (0x00024868) bg_sctrl_middle_pane_ParamLimits

0x84b8,	// (0x00024868) bg_sctrl_middle_pane

0xc2a4,	// (0x00028654) cell_sctrl_middle_pane_g1_ParamLimits

0xc2a4,	// (0x00028654) cell_sctrl_middle_pane_g1

0x6f5a,	// (0x0002330a) cell_sctrl_middle_pane_g2_ParamLimits

0x6f5a,	// (0x0002330a) cell_sctrl_middle_pane_g2

0x0001,

0xfcda,	// (0x0002c08a) cell_sctrl_middle_pane_g_ParamLimits

0xfcda,	// (0x0002c08a) cell_sctrl_middle_pane_g

0x99d3,	// (0x00025d83) bg_sctrl_middle_pane_g1

0x99db,	// (0x00025d8b) bg_sctrl_middle_pane_g2

0x99e3,	// (0x00025d93) bg_sctrl_middle_pane_g3

0x99eb,	// (0x00025d9b) bg_sctrl_middle_pane_g4

0x99f3,	// (0x00025da3) bg_sctrl_middle_pane_g5

0x99fb,	// (0x00025dab) bg_sctrl_middle_pane_g6

0x9a03,	// (0x00025db3) bg_sctrl_middle_pane_g7

0x9a0b,	// (0x00025dbb) bg_sctrl_middle_pane_g8

0x0007,

0xfcdf,	// (0x0002c08f) bg_sctrl_middle_pane_g

0x9a13,	// (0x00025dc3) bg_sctrl_middle_pane_g8_copy1

0x99d3,	// (0x00025d83) bg_sctrl_sk_pane_g1

0x99db,	// (0x00025d8b) bg_sctrl_sk_pane_g2

0x99e3,	// (0x00025d93) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0002bbf1) bg_sctrl_sk_pane_g

0x83e7,	// (0x00024797) aid_size_touch_scroll_bar

0x99eb,	// (0x00025d9b) bg_sctrl_sk_pane_g4

0x99f3,	// (0x00025da3) bg_sctrl_sk_pane_g5

0x99fb,	// (0x00025dab) bg_sctrl_sk_pane_g6

0x9a03,	// (0x00025db3) bg_sctrl_sk_pane_g7

0x9a0b,	// (0x00025dbb) bg_sctrl_sk_pane_g8

0x9a13,	// (0x00025dc3) bg_sctrl_sk_pane_g9

0x6185,	// (0x00022535) popup_fep_china_hwr2_fs_candidate_window

0x618f,	// (0x0002253f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x618f,	// (0x0002253f) popup_fep_china_hwr2_fs_control_window

0xc2a4,	// (0x00028654) sctrl_sk_top_pane_g2

0x0001,

0xfcd5,	// (0x0002c085) sctrl_sk_top_pane_g

0xd758,	// (0x00029b08) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd758,	// (0x00029b08) aid_fep_china_hwr2_fs_cell

0xd76a,	// (0x00029b1a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd76a,	// (0x00029b1a) bg_popup_fep_shadow_pane_cp4

0xd781,	// (0x00029b31) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd781,	// (0x00029b31) bg_popup_fep_shadow_pane_cp5

0xd793,	// (0x00029b43) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd793,	// (0x00029b43) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a3,	// (0x00029b53) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7ab,	// (0x00029b5b) aid_fep_china_hwr2_fs_candi_cell

0x2c44,	// (0x0001eff4) bg_popup_fep_shadow_pane_cp6

0xd7b5,	// (0x00029b65) popup_fep_china_hwr2_fs_candidate_grid

0xd7bf,	// (0x00029b6f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7bf,	// (0x00029b6f) cell_fep_china_hwr2_fs_funtion_grid

0xc026,	// (0x000283d6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7d7,	// (0x00029b87) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7d7,	// (0x00029b87) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7e5,	// (0x00029b95) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7e5,	// (0x00029b95) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf0,	// (0x0002c0a0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf0,	// (0x0002c0a0) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7fb,	// (0x00029bab) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7fb,	// (0x00029bab) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd810,	// (0x00029bc0) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd810,	// (0x00029bc0) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf5,	// (0x0002c0a5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf5,	// (0x0002c0a5) cell_fep_china_hwr2_fs_funtion_grid_t

0xd82c,	// (0x00029bdc) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd834,	// (0x00029be4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd83c,	// (0x00029bec) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfa,	// (0x0002c0aa) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd844,	// (0x00029bf4) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd844,	// (0x00029bf4) cell_fep_china_hwr2_fs_candidate_grid

0xd85d,	// (0x00029c0d) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd865,	// (0x00029c15) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc026,	// (0x000283d6) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc026,	// (0x000283d6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0002beca) cell_fep_china_hwr2_fs_candidate_grid_g

0xd86d,	// (0x00029c1d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95c9,	// (0x00025979) clock_nsta_pane_cp_24_ParamLimits

0x95c9,	// (0x00025979) clock_nsta_pane_cp_24

0x9647,	// (0x000259f7) indicator_nsta_pane_cp_24_ParamLimits

0x9647,	// (0x000259f7) indicator_nsta_pane_cp_24

0xa6ee,	// (0x00026a9e) heading_pane_g1

0x0001,

0xf8a6,	// (0x0002bc56) heading_pane_g

0xb148,	// (0x000274f8) grid_sct_catagory_button_pane

0xb178,	// (0x00027528) scroll_pane_cp5_ParamLimits

0xbc23,	// (0x00027fd3) button_value_adjust_pane_cp5_ParamLimits

0xbc23,	// (0x00027fd3) button_value_adjust_pane_cp5

0xbd02,	// (0x000280b2) form2_midp_time_pane_ParamLimits

0xd87b,	// (0x00029c2b) cell_sct_catagory_button_pane_ParamLimits

0xd87b,	// (0x00029c2b) cell_sct_catagory_button_pane

0xbfeb,	// (0x0002839b) bg_button_pane_cp01_ParamLimits

0xbfeb,	// (0x0002839b) bg_button_pane_cp01

0xc026,	// (0x000283d6) cell_sct_catagory_button_pane_g1

0x655d,	// (0x0002290d) popup_tb_extension_window

0xd88d,	// (0x00029c3d) aid_size_cell_ext_ParamLimits

0xd88d,	// (0x00029c3d) aid_size_cell_ext

0x7eb4,	// (0x00024264) bg_tb_trans_pane_cp1_ParamLimits

0x7eb4,	// (0x00024264) bg_tb_trans_pane_cp1

0xd8ad,	// (0x00029c5d) grid_tb_ext_pane_ParamLimits

0xd8ad,	// (0x00029c5d) grid_tb_ext_pane

0xd8db,	// (0x00029c8b) cell_tb_ext_pane_ParamLimits

0xd8db,	// (0x00029c8b) cell_tb_ext_pane

0xd8f2,	// (0x00029ca2) cell_tb_ext_pane_g1_ParamLimits

0xd8f2,	// (0x00029ca2) cell_tb_ext_pane_g1

0xd90f,	// (0x00029cbf) cell_tb_ext_pane_t1

0x7eb4,	// (0x00024264) list_highlight_pane_cp11_ParamLimits

0x7eb4,	// (0x00024264) list_highlight_pane_cp11

0x599a,	// (0x00021d4a) popup_uni_indicator_window_ParamLimits

0x599a,	// (0x00021d4a) popup_uni_indicator_window

0x84b8,	// (0x00024868) bg_popup_sub_pane_cp14

0xd92a,	// (0x00029cda) list_uniindi_pane

0xd936,	// (0x00029ce6) uniindi_top_pane

0x7eb4,	// (0x00024264) bg_uniindi_top_pane

0xd955,	// (0x00029d05) uniindi_top_pane_g1

0xd96b,	// (0x00029d1b) uniindi_top_pane_g2

0x0003,

0xfd01,	// (0x0002c0b1) uniindi_top_pane_g

0xd995,	// (0x00029d45) uniindi_top_pane_t1

0xd9bf,	// (0x00029d6f) list_single_uniindi_pane_ParamLimits

0xd9bf,	// (0x00029d6f) list_single_uniindi_pane

0xc026,	// (0x000283d6) bg_uniindi_top_pane_g1

0xd9d2,	// (0x00029d82) list_single_uniindi_pane_g1

0xd9e5,	// (0x00029d95) list_single_uniindi_pane_t1

0x2c44,	// (0x0001eff4) control_bg_pane

0xda0a,	// (0x00029dba) bg_sctrl_sk_pane_cp1

0xda13,	// (0x00029dc3) bg_sctrl_sk_pane_cp2

0xda1c,	// (0x00029dcc) control_bg_pane_g1

0xda25,	// (0x00029dd5) control_bg_pane_g2

0x0001,

0xfd0a,	// (0x0002c0ba) control_bg_pane_g

0xba6d,	// (0x00027e1d) cell_indicator_nsta_pane_g1_ParamLimits

0xba7b,	// (0x00027e2b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0002be2e) cell_indicator_nsta_pane_g_ParamLimits

0x52d4,	// (0x00021684) form2_midp_time_pane_t1_ParamLimits

0x8229,	// (0x000245d9) main_idle_act4_pane_ParamLimits

0x8229,	// (0x000245d9) main_idle_act4_pane

0x655d,	// (0x0002290d) popup_tb_extension_window_ParamLimits

0xd8cb,	// (0x00029c7b) tb_ext_find_pane_ParamLimits

0xd8cb,	// (0x00029c7b) tb_ext_find_pane

0xda2e,	// (0x00029dde) ai_gene_pane_1_cp1

0x92cc,	// (0x0002567c) ai_gene_pane_2_cp1

0xda36,	// (0x00029de6) list_single_idle_plugin_calendar_pane

0xda3f,	// (0x00029def) list_single_idle_plugin_notification_pane

0xda48,	// (0x00029df8) list_single_idle_plugin_player_pane

0xda51,	// (0x00029e01) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda51,	// (0x00029e01) list_single_idle_plugin_shortcut_pane

0xda73,	// (0x00029e23) main_idle_act4_pane_t1

0xda85,	// (0x00029e35) main_idle_act4_pane_t2

0x0001,

0xfd0f,	// (0x0002c0bf) main_idle_act4_pane_t

0xda97,	// (0x00029e47) middle_sk_idle_act4_pane_ParamLimits

0xda97,	// (0x00029e47) middle_sk_idle_act4_pane

0xdaad,	// (0x00029e5d) popup_clock_digital_analogue_window_cp2

0xdac7,	// (0x00029e77) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac7,	// (0x00029e77) shortcut_wheel_idle_act4_pane

0xc026,	// (0x000283d6) shortcut_wheel_idle_act4_pane_g1

0xc026,	// (0x000283d6) shortcut_wheel_idle_act4_pane_g2

0xc026,	// (0x000283d6) shortcut_wheel_idle_act4_pane_g3

0xc026,	// (0x000283d6) shortcut_wheel_idle_act4_pane_g4

0xc026,	// (0x000283d6) shortcut_wheel_idle_act4_pane_g5

0xdadb,	// (0x00029e8b) shortcut_wheel_idle_act4_pane_g6

0xdae3,	// (0x00029e93) shortcut_wheel_idle_act4_pane_g7

0xdaeb,	// (0x00029e9b) shortcut_wheel_idle_act4_pane_g8

0xdaf3,	// (0x00029ea3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd14,	// (0x0002c0c4) shortcut_wheel_idle_act4_pane_g

0xc2a4,	// (0x00028654) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2a4,	// (0x00028654) middle_sk_idle_act4_pane_g1

0xdb57,	// (0x00029f07) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb57,	// (0x00029f07) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x0002c0e7) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x0002c0e7) middle_sk_idle_act4_pane_g

0xdb63,	// (0x00029f13) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb63,	// (0x00029f13) middle_sk_idle_act4_pane_t1

0xdb80,	// (0x00029f30) grid_ai_shortcut_pane_ParamLimits

0xdb80,	// (0x00029f30) grid_ai_shortcut_pane

0xdb99,	// (0x00029f49) list_highlight_pane_cp16_ParamLimits

0xdb99,	// (0x00029f49) list_highlight_pane_cp16

0xdba6,	// (0x00029f56) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdba6,	// (0x00029f56) list_single_idle_plugin_shortcut_pane_g1

0xdbb2,	// (0x00029f62) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb2,	// (0x00029f62) list_single_idle_plugin_shortcut_pane_g2

0xdbca,	// (0x00029f7a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbca,	// (0x00029f7a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3c,	// (0x0002c0ec) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3c,	// (0x0002c0ec) list_single_idle_plugin_shortcut_pane_g

0xdbdd,	// (0x00029f8d) cell_ai_shortcut_pane_ParamLimits

0xdbdd,	// (0x00029f8d) cell_ai_shortcut_pane

0xdc01,	// (0x00029fb1) cell_ai_shortcut_pane_g1_ParamLimits

0xdc01,	// (0x00029fb1) cell_ai_shortcut_pane_g1

0xda2e,	// (0x00029dde) ai_gene_pane_1_cp2

0xdc23,	// (0x00029fd3) ai_gene_pane_2_cp2

0xdc2b,	// (0x00029fdb) list_highlight_pane_cp15

0xdc34,	// (0x00029fe4) list_single_idle_plugin_calendar_pane_g1

0xdc2b,	// (0x00029fdb) list_highlight_pane_cp17

0xdc3c,	// (0x00029fec) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc44,	// (0x00029ff4) list_single_idle_plugin_player_pane_g1

0xb3a1,	// (0x00027751) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd43,	// (0x0002c0f3) list_single_idle_plugin_player_pane_g

0xdc4c,	// (0x00029ffc) list_single_idle_plugin_player_pane_t1

0xdc5a,	// (0x0002a00a) list_single_idle_plugin_player_pane_t2

0xdc68,	// (0x0002a018) list_single_idle_plugin_player_pane_t3

0xdc76,	// (0x0002a026) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd48,	// (0x0002c0f8) list_single_idle_plugin_player_pane_t

0xdc84,	// (0x0002a034) wait_bar_pane_cp15

0xdc8c,	// (0x0002a03c) grid_ai_notification_pane

0xb3a1,	// (0x00027751) list_single_idle_plugin_notification_pane_g1

0xdc95,	// (0x0002a045) cell_ai_notification_pane_ParamLimits

0xdc95,	// (0x0002a045) cell_ai_notification_pane

0xdca2,	// (0x0002a052) cell_ai_notification_pane_g1

0xdcaa,	// (0x0002a05a) cell_ai_notification_pane_t1

0xdcb8,	// (0x0002a068) tb_ext_find_button_pane

0xdcc0,	// (0x0002a070) tb_ext_find_pane_g1

0xdcc8,	// (0x0002a078) tb_ext_find_pane_t1

0x8b4d,	// (0x00024efd) tb_ext_find_button_pane_g1

0xdcd6,	// (0x0002a086) tb_ext_find_button_pane_g2

0x0001,

0xfd51,	// (0x0002c101) tb_ext_find_button_pane_g

0xda73,	// (0x00029e23) main_idle_act4_pane_t1_ParamLimits

0xda85,	// (0x00029e35) main_idle_act4_pane_t2_ParamLimits

0xfd0f,	// (0x0002c0bf) main_idle_act4_pane_t_ParamLimits

0xdaad,	// (0x00029e5d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdabb,	// (0x00029e6b) sat_plugin_idle_act4_pane_ParamLimits

0xdabb,	// (0x00029e6b) sat_plugin_idle_act4_pane

0xdcdf,	// (0x0002a08f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcdf,	// (0x0002a08f) sat_plugin_idle_act4_pane_t1

0xdcf2,	// (0x0002a0a2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf2,	// (0x0002a0a2) sat_plugin_idle_act4_pane_t2

0xdd05,	// (0x0002a0b5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd05,	// (0x0002a0b5) sat_plugin_idle_act4_pane_t3

0xdd18,	// (0x0002a0c8) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd18,	// (0x0002a0c8) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd56,	// (0x0002c106) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd56,	// (0x0002c106) sat_plugin_idle_act4_pane_t

0x58d5,	// (0x00021c85) popup_battery_window_ParamLimits

0x58d5,	// (0x00021c85) popup_battery_window

0x7eb4,	// (0x00024264) bg_popup_sub_pane_cp25_ParamLimits

0x7eb4,	// (0x00024264) bg_popup_sub_pane_cp25

0xdd2b,	// (0x0002a0db) popup_battery_window_g1_ParamLimits

0xdd2b,	// (0x0002a0db) popup_battery_window_g1

0xdd37,	// (0x0002a0e7) popup_battery_window_t1_ParamLimits

0xdd37,	// (0x0002a0e7) popup_battery_window_t1

0xdd49,	// (0x0002a0f9) popup_battery_window_t2_ParamLimits

0xdd49,	// (0x0002a0f9) popup_battery_window_t2

0x0001,

0xfd5f,	// (0x0002c10f) popup_battery_window_t_ParamLimits

0xfd5f,	// (0x0002c10f) popup_battery_window_t

0x9199,	// (0x00025549) midp_canvas_pane_ParamLimits

0x9210,	// (0x000255c0) midp_keypad_pane_ParamLimits

0x9210,	// (0x000255c0) midp_keypad_pane

0x94a9,	// (0x00025859) main_midp_pane_ParamLimits

0xbae7,	// (0x00027e97) signal_pane_g2_cp_ParamLimits

0xdd66,	// (0x0002a116) aid_size_cell_midp_keypad_ParamLimits

0xdd66,	// (0x0002a116) aid_size_cell_midp_keypad

0xdd80,	// (0x0002a130) midp_keyp_game_grid_pane_ParamLimits

0xdd80,	// (0x0002a130) midp_keyp_game_grid_pane

0xdda0,	// (0x0002a150) midp_keyp_rocker_pane_ParamLimits

0xdda0,	// (0x0002a150) midp_keyp_rocker_pane

0xddd9,	// (0x0002a189) midp_keyp_sk_left_pane_ParamLimits

0xddd9,	// (0x0002a189) midp_keyp_sk_left_pane

0xde33,	// (0x0002a1e3) midp_keyp_sk_right_pane_ParamLimits

0xde33,	// (0x0002a1e3) midp_keyp_sk_right_pane

0x2c44,	// (0x0001eff4) bg_button_pane_cp03

0xde8d,	// (0x0002a23d) midp_keyp_sk_left_pane_g1

0x2c44,	// (0x0001eff4) bg_button_pane_cp04

0xde8d,	// (0x0002a23d) midp_keyp_sk_right_pane_g1

0xc026,	// (0x000283d6) midp_keyp_rocker_pane_g1

0xde96,	// (0x0002a246) keyp_game_cell_pane_ParamLimits

0xde96,	// (0x0002a246) keyp_game_cell_pane

0x2c44,	// (0x0001eff4) bg_button_pane_cp02

0xdea9,	// (0x0002a259) keyp_game_cell_pane_g1

0x5919,	// (0x00021cc9) popup_fep_vkb2_window_ParamLimits

0x5919,	// (0x00021cc9) popup_fep_vkb2_window

0x6f78,	// (0x00023328) aid_size_cell_vkb2_ParamLimits

0x6f78,	// (0x00023328) aid_size_cell_vkb2

0x6fc4,	// (0x00023374) popup_fep_vkb2_window_g1_ParamLimits

0x6fc4,	// (0x00023374) popup_fep_vkb2_window_g1

0x700c,	// (0x000233bc) vkb2_area_bottom_pane_ParamLimits

0x700c,	// (0x000233bc) vkb2_area_bottom_pane

0x7058,	// (0x00023408) vkb2_area_keypad_pane_ParamLimits

0x7058,	// (0x00023408) vkb2_area_keypad_pane

0x709a,	// (0x0002344a) vkb2_area_top_pane_ParamLimits

0x709a,	// (0x0002344a) vkb2_area_top_pane

0x7119,	// (0x000234c9) vkb2_top_entry_pane_ParamLimits

0x7119,	// (0x000234c9) vkb2_top_entry_pane

0x7143,	// (0x000234f3) vkb2_top_grid_left_pane_ParamLimits

0x7143,	// (0x000234f3) vkb2_top_grid_left_pane

0x7162,	// (0x00023512) vkb2_top_grid_right_pane_ParamLimits

0x7162,	// (0x00023512) vkb2_top_grid_right_pane

0x7181,	// (0x00023531) vkb2_cell_keypad_pane_ParamLimits

0x7181,	// (0x00023531) vkb2_cell_keypad_pane

0x7252,	// (0x00023602) vkb2_area_bottom_grid_pane_ParamLimits

0x7252,	// (0x00023602) vkb2_area_bottom_grid_pane

0x7278,	// (0x00023628) vkb2_area_bottom_pane_g1_ParamLimits

0x7278,	// (0x00023628) vkb2_area_bottom_pane_g1

0x729c,	// (0x0002364c) vkb2_area_bottom_pane_g2_ParamLimits

0x729c,	// (0x0002364c) vkb2_area_bottom_pane_g2

0x72ca,	// (0x0002367a) vkb2_area_bottom_pane_g3_ParamLimits

0x72ca,	// (0x0002367a) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x0002c114) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x0002c114) vkb2_area_bottom_pane_g

0x732b,	// (0x000236db) vkb2_top_cell_left_pane_ParamLimits

0x732b,	// (0x000236db) vkb2_top_cell_left_pane

0xdeba,	// (0x0002a26a) vkb2_top_entry_pane_g1_ParamLimits

0xdeba,	// (0x0002a26a) vkb2_top_entry_pane_g1

0xdec8,	// (0x0002a278) vkb2_top_entry_pane_t1_ParamLimits

0xdec8,	// (0x0002a278) vkb2_top_entry_pane_t1

0xdefa,	// (0x0002a2aa) vkb2_top_entry_pane_t2_ParamLimits

0xdefa,	// (0x0002a2aa) vkb2_top_entry_pane_t2

0xdf2c,	// (0x0002a2dc) vkb2_top_entry_pane_t3_ParamLimits

0xdf2c,	// (0x0002a2dc) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x0002c11b) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x0002c11b) vkb2_top_entry_pane_t

0x7378,	// (0x00023728) vkb2_top_grid_right_pane_g1_ParamLimits

0x7378,	// (0x00023728) vkb2_top_grid_right_pane_g1

0x738e,	// (0x0002373e) vkb2_top_grid_right_pane_g2_ParamLimits

0x738e,	// (0x0002373e) vkb2_top_grid_right_pane_g2

0x73a6,	// (0x00023756) vkb2_top_grid_right_pane_g3_ParamLimits

0x73a6,	// (0x00023756) vkb2_top_grid_right_pane_g3

0x73be,	// (0x0002376e) vkb2_top_grid_right_pane_g4_ParamLimits

0x73be,	// (0x0002376e) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x0002c122) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x0002c122) vkb2_top_grid_right_pane_g

0x73d4,	// (0x00023784) vkb2_top_cell_left_pane_g1

0x73eb,	// (0x0002379b) vkb2_cell_keypad_pane_g1_ParamLimits

0x73eb,	// (0x0002379b) vkb2_cell_keypad_pane_g1

0xdf50,	// (0x0002a300) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf50,	// (0x0002a300) vkb2_cell_keypad_pane_t1

0x73f9,	// (0x000237a9) vkb2_cell_bottom_grid_pane_ParamLimits

0x73f9,	// (0x000237a9) vkb2_cell_bottom_grid_pane

0x7432,	// (0x000237e2) vkb2_cell_bottom_grid_pane_g1

0xdafb,	// (0x00029eab) aid_call2_pane_cp02

0xdb03,	// (0x00029eb3) aid_call_pane_cp02

0xdb0b,	// (0x00029ebb) clock_digital_number_pane_cp10

0xdb13,	// (0x00029ec3) clock_digital_number_pane_cp11

0xdb1b,	// (0x00029ecb) clock_digital_number_pane_cp12

0xdb23,	// (0x00029ed3) clock_digital_number_pane_cp13

0xdb2b,	// (0x00029edb) clock_digital_separator_pane_cp10

0x8b4d,	// (0x00024efd) popup_clock_digital_analogue_window_cp2_g1

0x8b4d,	// (0x00024efd) popup_clock_digital_analogue_window_cp2_g2

0xdb33,	// (0x00029ee3) popup_clock_digital_analogue_window_cp2_g3

0x8b4d,	// (0x00024efd) popup_clock_digital_analogue_window_cp2_g4

0xdb33,	// (0x00029ee3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd27,	// (0x0002c0d7) popup_clock_digital_analogue_window_cp2_g

0xdb3b,	// (0x00029eeb) popup_clock_digital_analogue_window_cp2_t1

0xdb49,	// (0x00029ef9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd32,	// (0x0002c0e2) popup_clock_digital_analogue_window_cp2_t

0xc026,	// (0x000283d6) clock_digital_number_pane_cp10_g1

0xc026,	// (0x000283d6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002beca) clock_digital_number_pane_cp10_g

0xc026,	// (0x000283d6) clock_digital_separator_pane_cp10_g1

0xc026,	// (0x000283d6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002beca) clock_digital_separator_pane_cp10_g

0xd977,	// (0x00029d27) uniindi_top_pane_g3

0xd988,	// (0x00029d38) uniindi_top_pane_g4

0x720c,	// (0x000235bc) vkb2_row_keypad_pane_ParamLimits

0x720c,	// (0x000235bc) vkb2_row_keypad_pane

0x7452,	// (0x00023802) vkb2_cell_t_keypad_pane_ParamLimits

0x7452,	// (0x00023802) vkb2_cell_t_keypad_pane

0x7462,	// (0x00023812) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7462,	// (0x00023812) vkb2_cell_t_keypad_pane_cp08

0x7475,	// (0x00023825) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7475,	// (0x00023825) vkb2_cell_t_keypad_pane_cp09

0x7489,	// (0x00023839) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7489,	// (0x00023839) vkb2_cell_t_keypad_pane_cp01

0x749a,	// (0x0002384a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x749a,	// (0x0002384a) vkb2_cell_t_keypad_pane_cp02

0x74ab,	// (0x0002385b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x74ab,	// (0x0002385b) vkb2_cell_t_keypad_pane_cp03

0x74bc,	// (0x0002386c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74bc,	// (0x0002386c) vkb2_cell_t_keypad_pane_cp04

0x74cd,	// (0x0002387d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74cd,	// (0x0002387d) vkb2_cell_t_keypad_pane_cp05

0x74de,	// (0x0002388e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x74de,	// (0x0002388e) vkb2_cell_t_keypad_pane_cp06

0x74ef,	// (0x0002389f) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x74ef,	// (0x0002389f) vkb2_cell_t_keypad_pane_cp07

0x7500,	// (0x000238b0) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7500,	// (0x000238b0) vkb2_cell_t_keypad_pane_cp10

0xc2a4,	// (0x00028654) vkb2_cell_t_keypad_pane_g1

0xdf67,	// (0x0002a317) vkb2_cell_t_keypad_pane_t1

0x2c44,	// (0x0001eff4) popup_grid_graphic2_window

0xdf79,	// (0x0002a329) aid_size_cell_graphic2_ParamLimits

0xdf79,	// (0x0002a329) aid_size_cell_graphic2

0xdfb1,	// (0x0002a361) bg_popup_window_pane_cp21_ParamLimits

0xdfb1,	// (0x0002a361) bg_popup_window_pane_cp21

0xdfbf,	// (0x0002a36f) graphic2_pages_pane_ParamLimits

0xdfbf,	// (0x0002a36f) graphic2_pages_pane

0xe005,	// (0x0002a3b5) grid_graphic2_control_pane_ParamLimits

0xe005,	// (0x0002a3b5) grid_graphic2_control_pane

0xe043,	// (0x0002a3f3) grid_graphic2_pane_ParamLimits

0xe043,	// (0x0002a3f3) grid_graphic2_pane

0xe0b7,	// (0x0002a467) cell_graphic2_pane

0x2c44,	// (0x0001eff4) main_comp_mode_pane

0xd1e3,	// (0x00029593) list_ai3_gene_pane_ParamLimits

0xd5b9,	// (0x00029969) bg_popup_window_pane_cp19_ParamLimits

0xd5c5,	// (0x00029975) bg_touch_area_indi_pane_ParamLimits

0xd5c5,	// (0x00029975) bg_touch_area_indi_pane

0xd5db,	// (0x0002998b) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5db,	// (0x0002998b) bg_touch_area_indi_pane_cp01

0xd5f1,	// (0x000299a1) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5f1,	// (0x000299a1) bg_touch_area_indi_pane_cp02

0xd607,	// (0x000299b7) bg_touch_area_indi_pane_cp03_ParamLimits

0xd607,	// (0x000299b7) bg_touch_area_indi_pane_cp03

0xd621,	// (0x000299d1) popup_slider_window_g1_ParamLimits

0xd63d,	// (0x000299ed) popup_slider_window_g2_ParamLimits

0xd659,	// (0x00029a09) popup_slider_window_g3_ParamLimits

0xfcbc,	// (0x0002c06c) popup_slider_window_g_ParamLimits

0xd6bf,	// (0x00029a6f) popup_slider_window_t1_ParamLimits

0xd733,	// (0x00029ae3) small_volume_slider_vertical_pane_ParamLimits

0xe0b7,	// (0x0002a467) cell_graphic2_pane_ParamLimits

0xe106,	// (0x0002a4b6) bg_button_pane_cp10_ParamLimits

0xe106,	// (0x0002a4b6) bg_button_pane_cp10

0xe119,	// (0x0002a4c9) bg_button_pane_cp11_ParamLimits

0xe119,	// (0x0002a4c9) bg_button_pane_cp11

0xe12c,	// (0x0002a4dc) graphic2_pages_pane_g1_ParamLimits

0xe12c,	// (0x0002a4dc) graphic2_pages_pane_g1

0xe147,	// (0x0002a4f7) graphic2_pages_pane_g2_ParamLimits

0xe147,	// (0x0002a4f7) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x0002c130) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x0002c130) graphic2_pages_pane_g

0xe15f,	// (0x0002a50f) graphic2_pages_pane_t1_ParamLimits

0xe15f,	// (0x0002a50f) graphic2_pages_pane_t1

0xe177,	// (0x0002a527) cell_graphic2_control_pane_ParamLimits

0xe177,	// (0x0002a527) cell_graphic2_control_pane

0xe195,	// (0x0002a545) cell_graphic2_pane_g1_ParamLimits

0xe195,	// (0x0002a545) cell_graphic2_pane_g1

0xe1a2,	// (0x0002a552) cell_graphic2_pane_g2_ParamLimits

0xe1a2,	// (0x0002a552) cell_graphic2_pane_g2

0xe1af,	// (0x0002a55f) cell_graphic2_pane_g3_ParamLimits

0xe1af,	// (0x0002a55f) cell_graphic2_pane_g3

0xe1bc,	// (0x0002a56c) cell_graphic2_pane_g4_ParamLimits

0xe1bc,	// (0x0002a56c) cell_graphic2_pane_g4

0xe1c9,	// (0x0002a579) cell_graphic2_pane_g5_ParamLimits

0xe1c9,	// (0x0002a579) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x0002c135) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x0002c135) cell_graphic2_pane_g

0xe1e2,	// (0x0002a592) cell_graphic2_pane_t1_ParamLimits

0xe1e2,	// (0x0002a592) cell_graphic2_pane_t1

0x9a53,	// (0x00025e03) grid_highlight_pane_cp11_ParamLimits

0x9a53,	// (0x00025e03) grid_highlight_pane_cp11

0x7eb4,	// (0x00024264) bg_button_pane_cp05

0xe218,	// (0x0002a5c8) cell_graphic2_control_pane_g1

0xc026,	// (0x000283d6) bg_touch_area_indi_pane_g1

0xe240,	// (0x0002a5f0) aid_cmod_rocker_key_size

0xe24a,	// (0x0002a5fa) aid_cmode_itu_key_size

0xe254,	// (0x0002a604) main_cmode_video_pane

0xe25e,	// (0x0002a60e) main_comp_mode_itu_pane

0xe26a,	// (0x0002a61a) main_comp_mode_rocker_pane

0xe276,	// (0x0002a626) cell_cmode_rocker_pane_ParamLimits

0xe276,	// (0x0002a626) cell_cmode_rocker_pane

0xe288,	// (0x0002a638) cell_cmode_itu_pane_ParamLimits

0xe288,	// (0x0002a638) cell_cmode_itu_pane

0x84b8,	// (0x00024868) bg_button_pane_cp06_ParamLimits

0x84b8,	// (0x00024868) bg_button_pane_cp06

0xc2a4,	// (0x00028654) cell_cmode_rocker_pane_g1_ParamLimits

0xc2a4,	// (0x00028654) cell_cmode_rocker_pane_g1

0xd7d7,	// (0x00029b87) cell_cmode_rocker_pane_g2_ParamLimits

0xd7d7,	// (0x00029b87) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x0002c145) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x0002c145) cell_cmode_rocker_pane_g

0x2c44,	// (0x0001eff4) bg_button_pane_cp07

0xe29d,	// (0x0002a64d) cell_cmode_itu_pane_g1

0xe2a6,	// (0x0002a656) cell_cmode_itu_pane_t1

0xe2b4,	// (0x0002a664) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x0002c14a) cell_cmode_itu_pane_t

0xd9fa,	// (0x00029daa) aid_touch_ctrl_left

0xda02,	// (0x00029db2) aid_touch_ctrl_right

0x2c44,	// (0x0001eff4) compa_mode_pane

0xe2c2,	// (0x0002a672) aid_cmod_rocker_key_size_cp

0xe2cc,	// (0x0002a67c) aid_cmode_itu_key_size_cp

0xe2d6,	// (0x0002a686) compa_mode_pane_g1

0xe2de,	// (0x0002a68e) compa_mode_pane_g2

0xe2e6,	// (0x0002a696) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x0002c14f) compa_mode_pane_g

0xe2ee,	// (0x0002a69e) main_comp_mode_itu_pane_cp

0xe2f6,	// (0x0002a6a6) main_comp_mode_rocker_pane_cp

0xe2fe,	// (0x0002a6ae) cell_cmode_itu_pane_cp_ParamLimits

0xe2fe,	// (0x0002a6ae) cell_cmode_itu_pane_cp

0xe313,	// (0x0002a6c3) cell_cmode_rocker_pane_cp_ParamLimits

0xe313,	// (0x0002a6c3) cell_cmode_rocker_pane_cp

0x84b8,	// (0x00024868) bg_button_pane_cp06_cp_ParamLimits

0x84b8,	// (0x00024868) bg_button_pane_cp06_cp

0xc2a4,	// (0x00028654) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2a4,	// (0x00028654) cell_cmode_rocker_pane_g1_cp

0xc026,	// (0x000283d6) cell_cmode_rocker_pane_g2_cp

0x2c44,	// (0x0001eff4) bg_button_pane_cp07_cp

0xaf2d,	// (0x000272dd) cell_cmode_itu_pane_g1_cp

0xe325,	// (0x0002a6d5) cell_cmode_itu_pane_t1_cp

0xe325,	// (0x0002a6d5) cell_cmode_itu_pane_t2_cp

0xaf1a,	// (0x000272ca) settings_code_pane_cp2

0x7c2b,	// (0x00023fdb) bg_popup_window_pane_cp3_ParamLimits

0x80b4,	// (0x00024464) heading_pane_cp3_ParamLimits

0x80c3,	// (0x00024473) listscroll_popup_graphic_pane_ParamLimits

0x6b26,	// (0x00022ed6) fep_hwr_aid_pane_ParamLimits

0x6eef,	// (0x0002329f) aid_touch_sctrl_top_ParamLimits

0x6efc,	// (0x000232ac) sctrl_sk_top_pane_g1_ParamLimits

0xc2a4,	// (0x00028654) sctrl_sk_top_pane_g2_ParamLimits

0xfcd5,	// (0x0002c085) sctrl_sk_top_pane_g_ParamLimits

0x6f09,	// (0x000232b9) sctrl_sk_top_pane_t1_ParamLimits

0x6eef,	// (0x0002329f) aid_touch_sctrl_bottom_ParamLimits

0x6f09,	// (0x000232b9) sctrl_sk_bottom_pane_t1_ParamLimits

0xd943,	// (0x00029cf3) aid_area_touch_clock

0x70e0,	// (0x00023490) aid_vkb2_area_top_pane_cell_ParamLimits

0x70e0,	// (0x00023490) aid_vkb2_area_top_pane_cell

0x722e,	// (0x000235de) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x722e,	// (0x000235de) aid_vkb2_area_bottom_pane_cell

0xdeb2,	// (0x0002a262) popup_char_count_window

0xe333,	// (0x0002a6e3) popup_char_count_window_g1

0xe33c,	// (0x0002a6ec) popup_char_count_window_g2

0xe345,	// (0x0002a6f5) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x0002c156) popup_char_count_window_g

0xe34e,	// (0x0002a6fe) popup_char_count_window_t1

0x6fa2,	// (0x00023352) popup_fep_char_preview_window_ParamLimits

0x6fa2,	// (0x00023352) popup_fep_char_preview_window

0x70fe,	// (0x000234ae) vkb2_top_candi_pane_ParamLimits

0x70fe,	// (0x000234ae) vkb2_top_candi_pane

0xe35c,	// (0x0002a70c) cell_vkb2_top_candi_pane_ParamLimits

0xe35c,	// (0x0002a70c) cell_vkb2_top_candi_pane

0xa06e,	// (0x0002641e) bg_popup_fep_char_preview_window_ParamLimits

0xa06e,	// (0x0002641e) bg_popup_fep_char_preview_window

0x7515,	// (0x000238c5) popup_fep_char_preview_window_t1_ParamLimits

0x7515,	// (0x000238c5) popup_fep_char_preview_window_t1

0xe3a6,	// (0x0002a756) bg_popup_fep_char_preview_window_g1

0xe3ae,	// (0x0002a75e) bg_popup_fep_char_preview_window_g2

0xe3b6,	// (0x0002a766) bg_popup_fep_char_preview_window_g3

0xe3be,	// (0x0002a76e) bg_popup_fep_char_preview_window_g4

0xe3c6,	// (0x0002a776) bg_popup_fep_char_preview_window_g5

0xe3ce,	// (0x0002a77e) bg_popup_fep_char_preview_window_g6

0xe3d6,	// (0x0002a786) bg_popup_fep_char_preview_window_g7

0xe3de,	// (0x0002a78e) bg_popup_fep_char_preview_window_g8

0xe3e6,	// (0x0002a796) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdad,	// (0x0002c15d) bg_popup_fep_char_preview_window_g

0xc2a4,	// (0x00028654) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2a4,	// (0x00028654) cell_vkb2_top_candi_pane_g1

0xc5bb,	// (0x0002896b) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5bb,	// (0x0002896b) cell_vkb2_top_candi_pane_g2

0xc5dc,	// (0x0002898c) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5dc,	// (0x0002898c) cell_vkb2_top_candi_pane_g3

0x7557,	// (0x00023907) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7557,	// (0x00023907) cell_vkb2_top_candi_pane_g4

0xe3ee,	// (0x0002a79e) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3ee,	// (0x0002a79e) cell_vkb2_top_candi_pane_g5

0xd7d7,	// (0x00029b87) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7d7,	// (0x00029b87) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x0002c172) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x0002c172) cell_vkb2_top_candi_pane_g

0x7578,	// (0x00023928) cell_vkb2_top_candi_pane_t1

0x6986,	// (0x00022d36) aid_size_touch_slider_mark_ParamLimits

0x6986,	// (0x00022d36) aid_size_touch_slider_mark

0xdff5,	// (0x0002a3a5) grid_graphic2_catg_pane_ParamLimits

0xdff5,	// (0x0002a3a5) grid_graphic2_catg_pane

0xe093,	// (0x0002a443) popup_grid_graphic2_window_t1_ParamLimits

0xe093,	// (0x0002a443) popup_grid_graphic2_window_t1

0xe0a5,	// (0x0002a455) popup_grid_graphic2_window_t2_ParamLimits

0xe0a5,	// (0x0002a455) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x0002c12b) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x0002c12b) popup_grid_graphic2_window_t

0x7eb4,	// (0x00024264) bg_button_pane_cp05_ParamLimits

0xe218,	// (0x0002a5c8) cell_graphic2_control_pane_g1_ParamLimits

0xe40f,	// (0x0002a7bf) cell_graphic2_catg_pane_ParamLimits

0xe40f,	// (0x0002a7bf) cell_graphic2_catg_pane

0x2c44,	// (0x0001eff4) bg_button_pane_cp12

0xe421,	// (0x0002a7d1) cell_graphic2_catg_pane_g1

0xd90f,	// (0x00029cbf) cell_tb_ext_pane_t1_ParamLimits

0x734b,	// (0x000236fb) vkb2_top_cell_right_narrow_pane_ParamLimits

0x734b,	// (0x000236fb) vkb2_top_cell_right_narrow_pane

0x7363,	// (0x00023713) vkb2_top_cell_right_wide_pane_ParamLimits

0x7363,	// (0x00023713) vkb2_top_cell_right_wide_pane

0x6b18,	// (0x00022ec8) bg_vkb2_func_pane_ParamLimits

0x6b18,	// (0x00022ec8) bg_vkb2_func_pane

0x73d4,	// (0x00023784) vkb2_top_cell_left_pane_g1_ParamLimits

0x6b18,	// (0x00022ec8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6b18,	// (0x00022ec8) bg_vkb2_fuc_pane_cp03

0x7432,	// (0x000237e2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99db,	// (0x00025d8b) bg_vkb2_func_pane_g1

0x99e3,	// (0x00025d93) bg_vkb2_func_pane_g2

0x99f3,	// (0x00025da3) bg_vkb2_func_pane_g3

0x99eb,	// (0x00025d9b) bg_vkb2_func_pane_g4

0x99fb,	// (0x00025dab) bg_vkb2_func_pane_g5

0x9a03,	// (0x00025db3) bg_vkb2_func_pane_g6

0x9a0b,	// (0x00025dbb) bg_vkb2_func_pane_g7

0x9a13,	// (0x00025dc3) bg_vkb2_func_pane_g8

0x99d3,	// (0x00025d83) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x0002c17f) bg_vkb2_func_pane_g

0x6b18,	// (0x00022ec8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6b18,	// (0x00022ec8) bg_vkb2_fuc_pane_cp01

0x73d4,	// (0x00023784) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73d4,	// (0x00023784) vkb2_top_cell_right_wide_pane_g1

0x6b18,	// (0x00022ec8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6b18,	// (0x00022ec8) bg_vkb2_fuc_pane_cp02

0x7597,	// (0x00023947) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7597,	// (0x00023947) vkb2_top_cell_right_narrow_pane_g1

0xd533,	// (0x000298e3) aid_touch_area_decrease_ParamLimits

0xd533,	// (0x000298e3) aid_touch_area_decrease

0xd557,	// (0x00029907) aid_touch_area_increase_ParamLimits

0xd557,	// (0x00029907) aid_touch_area_increase

0xd56f,	// (0x0002991f) aid_touch_area_mute_ParamLimits

0xd56f,	// (0x0002991f) aid_touch_area_mute

0xd58b,	// (0x0002993b) aid_touch_area_slider_ParamLimits

0xd58b,	// (0x0002993b) aid_touch_area_slider

0xd675,	// (0x00029a25) popup_slider_window_g4_ParamLimits

0xd675,	// (0x00029a25) popup_slider_window_g4

0xd68d,	// (0x00029a3d) popup_slider_window_g5_ParamLimits

0xd68d,	// (0x00029a3d) popup_slider_window_g5

0xd6af,	// (0x00029a5f) popup_slider_window_g6_ParamLimits

0xd6af,	// (0x00029a5f) popup_slider_window_g6

0xd6ed,	// (0x00029a9d) popup_slider_window_t2_ParamLimits

0xd6ed,	// (0x00029a9d) popup_slider_window_t2

0x0001,

0xfcc9,	// (0x0002c079) popup_slider_window_t_ParamLimits

0xfcc9,	// (0x0002c079) popup_slider_window_t

0xd705,	// (0x00029ab5) slider_pane_ParamLimits

0xd705,	// (0x00029ab5) slider_pane

0xe42a,	// (0x0002a7da) slider_pane_g1_ParamLimits

0xe42a,	// (0x0002a7da) slider_pane_g1

0xe43e,	// (0x0002a7ee) slider_pane_g2_ParamLimits

0xe43e,	// (0x0002a7ee) slider_pane_g2

0xe454,	// (0x0002a804) slider_pane_g3_ParamLimits

0xe454,	// (0x0002a804) slider_pane_g3

0x0003,

0xfde2,	// (0x0002c192) slider_pane_g_ParamLimits

0xfde2,	// (0x0002c192) slider_pane_g

0x65b9,	// (0x00022969) popup_tb_float_extension_window_ParamLimits

0x65b9,	// (0x00022969) popup_tb_float_extension_window

0xe480,	// (0x0002a830) aid_size_cell_tb_float_ext

0x2c44,	// (0x0001eff4) bg_popup_sub_window_cp28

0xe48c,	// (0x0002a83c) grid_tb_float_ext_pane

0xe496,	// (0x0002a846) cell_tb_float_ext_pane_ParamLimits

0xe496,	// (0x0002a846) cell_tb_float_ext_pane

0xe4b0,	// (0x0002a860) cell_tb_float_ext_pane_g1

0xe4b9,	// (0x0002a869) grid_highlight_pane_cp12

0x6c59,	// (0x00023009) cell_last_hwr_side_pane_ParamLimits

0x6c59,	// (0x00023009) cell_last_hwr_side_pane

0xc026,	// (0x000283d6) cell_last_hwr_side_pane_g1

0xe4c2,	// (0x0002a872) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x0002c19b) cell_last_hwr_side_pane_g

0x72fa,	// (0x000236aa) vkb2_area_bottom_space_btn_pane_ParamLimits

0x72fa,	// (0x000236aa) vkb2_area_bottom_space_btn_pane

0xc2a4,	// (0x00028654) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf67,	// (0x0002a317) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7578,	// (0x00023928) cell_vkb2_top_candi_pane_t1_ParamLimits

0x75b7,	// (0x00023967) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x75b7,	// (0x00023967) vkb2_area_bottom_space_btn_pane_g1

0x75f1,	// (0x000239a1) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x75f1,	// (0x000239a1) vkb2_area_bottom_space_btn_pane_g2

0x7627,	// (0x000239d7) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7627,	// (0x000239d7) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x0002c1a0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x0002c1a0) vkb2_area_bottom_space_btn_pane_g

0x6bcd,	// (0x00022f7d) cel_fep_hwr_func_pane_ParamLimits

0x6bcd,	// (0x00022f7d) cel_fep_hwr_func_pane

0x6c09,	// (0x00022fb9) cell_hwr_side_button_pane_ParamLimits

0x6c09,	// (0x00022fb9) cell_hwr_side_button_pane

0xd943,	// (0x00029cf3) aid_area_touch_clock_ParamLimits

0x7eb4,	// (0x00024264) bg_uniindi_top_pane_ParamLimits

0xd955,	// (0x00029d05) uniindi_top_pane_g1_ParamLimits

0xd96b,	// (0x00029d1b) uniindi_top_pane_g2_ParamLimits

0xd977,	// (0x00029d27) uniindi_top_pane_g3_ParamLimits

0xd988,	// (0x00029d38) uniindi_top_pane_g4_ParamLimits

0xfd01,	// (0x0002c0b1) uniindi_top_pane_g_ParamLimits

0xd995,	// (0x00029d45) uniindi_top_pane_t1_ParamLimits

0x7eb4,	// (0x00024264) bg_vkb2_func_pane_cp01_ParamLimits

0x7eb4,	// (0x00024264) bg_vkb2_func_pane_cp01

0xe4cb,	// (0x0002a87b) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4cb,	// (0x0002a87b) cel_fep_hwr_func_pane_g1

0x7eb4,	// (0x00024264) bg_vkb2_func_pane_cp02_ParamLimits

0x7eb4,	// (0x00024264) bg_vkb2_func_pane_cp02

0xe4cb,	// (0x0002a87b) cell_hwr_side_button_pane_g1_ParamLimits

0xe4cb,	// (0x0002a87b) cell_hwr_side_button_pane_g1

0x9854,	// (0x00025c04) status_pane_g4_ParamLimits

0x9854,	// (0x00025c04) status_pane_g4

0x986e,	// (0x00025c1e) status_pane_t1

0xbd6b,	// (0x0002811b) form2_midp_gauge_slider_cont_pane

0xbd73,	// (0x00028123) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd85,	// (0x00028135) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd97,	// (0x00028147) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0002be7d) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda9,	// (0x00028159) form2_midp_slider_pane_ParamLimits

0x6f6a,	// (0x0002331a) aid_size_cell_func_vkb2_ParamLimits

0x6f6a,	// (0x0002331a) aid_size_cell_func_vkb2

0xe46c,	// (0x0002a81c) slider_pane_g4_ParamLimits

0xe46c,	// (0x0002a81c) slider_pane_g4

0x7671,	// (0x00023a21) form2_midp_gauge_slider_pane_t2_cp01

0x767f,	// (0x00023a2f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x767f,	// (0x00023a2f) form2_midp_gauge_slider_pane_t3_cp01

0x769c,	// (0x00023a4c) form2_midp_slider_pane_cp01

0x2c44,	// (0x0001eff4) navi_smil_pane

0xe504,	// (0x0002a8b4) navi_smil_pane_g1

0xe50c,	// (0x0002a8bc) navi_smil_pane_t1

0xe4d9,	// (0x0002a889) form2_midp_slider_pane_g1

0xe4e2,	// (0x0002a892) form2_midp_slider_pane_g2

0xe4ea,	// (0x0002a89a) form2_midp_slider_pane_g3

0xe4d9,	// (0x0002a889) form2_midp_slider_pane_g4

0xe4f2,	// (0x0002a8a2) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x0002c1a9) form2_midp_slider_pane_g

0x7661,	// (0x00023a11) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7661,	// (0x00023a11) vkb2_area_bottom_space_btn_pane_g4

0x9683,	// (0x00025a33) lc0_navi_pane_ParamLimits

0x9683,	// (0x00025a33) lc0_navi_pane

0x96f9,	// (0x00025aa9) lc0_stat_indi_pane_ParamLimits

0x96f9,	// (0x00025aa9) lc0_stat_indi_pane

0x9710,	// (0x00025ac0) ls0_title_pane_ParamLimits

0x9710,	// (0x00025ac0) ls0_title_pane

0x84b8,	// (0x00024868) bg_popup_sub_pane_cp14_ParamLimits

0xd92a,	// (0x00029cda) list_uniindi_pane_ParamLimits

0xd936,	// (0x00029ce6) uniindi_top_pane_ParamLimits

0xd9d2,	// (0x00029d82) list_single_uniindi_pane_g1_ParamLimits

0xd9e5,	// (0x00029d95) list_single_uniindi_pane_t1_ParamLimits

0x76a5,	// (0x00023a55) lc0_stat_clock_pane_ParamLimits

0x76a5,	// (0x00023a55) lc0_stat_clock_pane

0xe51a,	// (0x0002a8ca) lc0_stat_indi_pane_g1_ParamLimits

0xe51a,	// (0x0002a8ca) lc0_stat_indi_pane_g1

0xe527,	// (0x0002a8d7) lc0_stat_indi_pane_g2_ParamLimits

0xe527,	// (0x0002a8d7) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x0002c1b4) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x0002c1b4) lc0_stat_indi_pane_g

0x76b2,	// (0x00023a62) lc0_uni_indicator_pane_ParamLimits

0x76b2,	// (0x00023a62) lc0_uni_indicator_pane

0xe534,	// (0x0002a8e4) ls0_title_pane_g1_ParamLimits

0xe534,	// (0x0002a8e4) ls0_title_pane_g1

0xe548,	// (0x0002a8f8) ls0_title_pane_t1_ParamLimits

0xe548,	// (0x0002a8f8) ls0_title_pane_t1

0x76bf,	// (0x00023a6f) lc0_uni_indicator_pane_g1_ParamLimits

0x76bf,	// (0x00023a6f) lc0_uni_indicator_pane_g1

0xe57e,	// (0x0002a92e) lc0_stat_clock_pane_t1

0x2c44,	// (0x0001eff4) main_ai5_pane

0xe58c,	// (0x0002a93c) ai5_sk_pane_ParamLimits

0xe58c,	// (0x0002a93c) ai5_sk_pane

0xe599,	// (0x0002a949) cell_ai5_widget_pane_ParamLimits

0xe599,	// (0x0002a949) cell_ai5_widget_pane

0xe662,	// (0x0002aa12) aid_size_cell_widget_grid

0xe678,	// (0x0002aa28) bg_ai5_widget_pane_ParamLimits

0xe678,	// (0x0002aa28) bg_ai5_widget_pane

0xe6f4,	// (0x0002aaa4) cell_ai5_widget_pane_g2

0xe708,	// (0x0002aab8) cell_ai5_widget_pane_g3

0xe722,	// (0x0002aad2) cell_ai5_widget_pane_g4

0xe732,	// (0x0002aae2) cell_ai5_widget_pane_g5

0xe742,	// (0x0002aaf2) cell_ai5_widget_pane_g6

0xe74e,	// (0x0002aafe) cell_ai5_widget_pane_g7

0xe7ba,	// (0x0002ab6a) cell_ai5_widget_pane_t1_ParamLimits

0xe7ba,	// (0x0002ab6a) cell_ai5_widget_pane_t1

0xe7d7,	// (0x0002ab87) cell_ai5_widget_pane_t2_ParamLimits

0xe7d7,	// (0x0002ab87) cell_ai5_widget_pane_t2

0xe7ef,	// (0x0002ab9f) cell_ai5_widget_pane_t3_ParamLimits

0xe7ef,	// (0x0002ab9f) cell_ai5_widget_pane_t3

0xe807,	// (0x0002abb7) cell_ai5_widget_pane_t4_ParamLimits

0xe807,	// (0x0002abb7) cell_ai5_widget_pane_t4

0xe82d,	// (0x0002abdd) cell_ai5_widget_pane_t5_ParamLimits

0xe82d,	// (0x0002abdd) cell_ai5_widget_pane_t5

0xe84c,	// (0x0002abfc) cell_ai5_widget_pane_t6_ParamLimits

0xe84c,	// (0x0002abfc) cell_ai5_widget_pane_t6

0xe85e,	// (0x0002ac0e) cell_ai5_widget_pane_t7_ParamLimits

0xe85e,	// (0x0002ac0e) cell_ai5_widget_pane_t7

0xe87d,	// (0x0002ac2d) cell_ai5_widget_pane_t8_ParamLimits

0xe87d,	// (0x0002ac2d) cell_ai5_widget_pane_t8

0x000b,

0xfe24,	// (0x0002c1d4) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x0002c1d4) cell_ai5_widget_pane_t

0xe901,	// (0x0002acb1) grid_ai5_widget_pane

0x84b8,	// (0x00024868) highlight_cell_ai5_widget_pane_ParamLimits

0x84b8,	// (0x00024868) highlight_cell_ai5_widget_pane

0xe918,	// (0x0002acc8) ai5_sk_left_pane

0xe922,	// (0x0002acd2) ai5_sk_middle_pane

0xe92c,	// (0x0002acdc) ai5_sk_right_pane

0xe936,	// (0x0002ace6) bg_ai5_widget_pane_g1_ParamLimits

0xe936,	// (0x0002ace6) bg_ai5_widget_pane_g1

0xe942,	// (0x0002acf2) bg_ai5_widget_pane_g2_ParamLimits

0xe942,	// (0x0002acf2) bg_ai5_widget_pane_g2

0xe94e,	// (0x0002acfe) bg_ai5_widget_pane_g3_ParamLimits

0xe94e,	// (0x0002acfe) bg_ai5_widget_pane_g3

0xe95a,	// (0x0002ad0a) bg_ai5_widget_pane_g4_ParamLimits

0xe95a,	// (0x0002ad0a) bg_ai5_widget_pane_g4

0xe966,	// (0x0002ad16) bg_ai5_widget_pane_g5_ParamLimits

0xe966,	// (0x0002ad16) bg_ai5_widget_pane_g5

0xe972,	// (0x0002ad22) bg_ai5_widget_pane_g6_ParamLimits

0xe972,	// (0x0002ad22) bg_ai5_widget_pane_g6

0xe97e,	// (0x0002ad2e) bg_ai5_widget_pane_g7_ParamLimits

0xe97e,	// (0x0002ad2e) bg_ai5_widget_pane_g7

0xe98a,	// (0x0002ad3a) bg_ai5_widget_pane_g8_ParamLimits

0xe98a,	// (0x0002ad3a) bg_ai5_widget_pane_g8

0xe996,	// (0x0002ad46) bg_ai5_widget_pane_g9_ParamLimits

0xe996,	// (0x0002ad46) bg_ai5_widget_pane_g9

0x0008,

0xfe3d,	// (0x0002c1ed) bg_ai5_widget_pane_g_ParamLimits

0xfe3d,	// (0x0002c1ed) bg_ai5_widget_pane_g

0xe9c8,	// (0x0002ad78) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c8,	// (0x0002ad78) cell_shortcut_ai5_widget_pane

0x9185,	// (0x00025535) bg_cell_shortcut_ai5_widget_pane

0xe9d9,	// (0x0002ad89) cell_grid_ai5_widget_pane_g1

0x9185,	// (0x00025535) highlight_cell_shortcut_ai5_widget_pane

0x99e3,	// (0x00025d93) ai5_sk_left_pane_g1

0xe9e2,	// (0x0002ad92) ai5_sk_left_pane_g2

0xe9ea,	// (0x0002ad9a) ai5_sk_left_pane_g3

0xe9f2,	// (0x0002ada2) ai5_sk_left_pane_g4

0x0003,

0xfe50,	// (0x0002c200) ai5_sk_left_pane_g

0xe9fa,	// (0x0002adaa) ai5_sk_left_pane_t1

0x99db,	// (0x00025d8b) ai5_sk_right_pane_g1

0xea08,	// (0x0002adb8) ai5_sk_right_pane_g2

0xea10,	// (0x0002adc0) ai5_sk_right_pane_g3

0xea18,	// (0x0002adc8) ai5_sk_right_pane_g4

0x0003,

0xfe59,	// (0x0002c209) ai5_sk_right_pane_g

0xea20,	// (0x0002add0) ai5_sk_right_pane_t1

0x99db,	// (0x00025d8b) ai5_sk_middle_pane_g1

0x99e3,	// (0x00025d93) ai5_sk_middle_pane_g2

0x99fb,	// (0x00025dab) ai5_sk_middle_pane_g3

0xea10,	// (0x0002adc0) ai5_sk_middle_pane_g4

0xe9ea,	// (0x0002ad9a) ai5_sk_middle_pane_g5

0xea2e,	// (0x0002adde) ai5_sk_middle_pane_g6

0xea36,	// (0x0002ade6) ai5_sk_middle_pane_g7

0x0006,

0xfe62,	// (0x0002c212) ai5_sk_middle_pane_g

0x9509,	// (0x000258b9) aid_touch_area_size_lc0_ParamLimits

0x9509,	// (0x000258b9) aid_touch_area_size_lc0

0x6d58,	// (0x00023108) cell_hwr_candidate_pane_t1_ParamLimits

0x9525,	// (0x000258d5) aid_touch_navi_pane

0x97fe,	// (0x00025bae) status_dt_navi_pane_ParamLimits

0x97fe,	// (0x00025bae) status_dt_navi_pane

0x980b,	// (0x00025bbb) status_dt_sta_pane_ParamLimits

0x980b,	// (0x00025bbb) status_dt_sta_pane

0xea3e,	// (0x0002adee) dt_sta_controll_pane

0xea4b,	// (0x0002adfb) dt_sta_indi_pane

0xea5c,	// (0x0002ae0c) dt_sta_title_pane

0x7eb4,	// (0x00024264) bg_dt_sta_indi_pane_ParamLimits

0x7eb4,	// (0x00024264) bg_dt_sta_indi_pane

0xea6f,	// (0x0002ae1f) dt_sta_battery_pane

0xea77,	// (0x0002ae27) dt_sta_indi_pane_g1

0xea80,	// (0x0002ae30) dt_sta_indi_pane_g2

0xea89,	// (0x0002ae39) dt_sta_indi_pane_g3

0x0002,

0xfe71,	// (0x0002c221) dt_sta_indi_pane_g

0xea92,	// (0x0002ae42) dt_sta_signal_pane

0x84b8,	// (0x00024868) bg_dt_sta_title_pane_ParamLimits

0x84b8,	// (0x00024868) bg_dt_sta_title_pane

0xea9b,	// (0x0002ae4b) dt_sta_title_pane_g1

0xeaa3,	// (0x0002ae53) dt_sta_title_pane_t1_ParamLimits

0xeaa3,	// (0x0002ae53) dt_sta_title_pane_t1

0x2c44,	// (0x0001eff4) bg_dt_sta_control_pane

0xeab8,	// (0x0002ae68) dt_sta_controll_pane_g1

0xeac1,	// (0x0002ae71) bg_dt_sta_title_pane_g1

0xeaca,	// (0x0002ae7a) bg_dt_sta_title_pane_g2

0xead3,	// (0x0002ae83) bg_dt_sta_title_pane_g3

0x0002,

0xfe78,	// (0x0002c228) bg_dt_sta_title_pane_g

0xc026,	// (0x000283d6) bg_dt_sta_indi_pane_g1

0xeadc,	// (0x0002ae8c) dt_sta_signal_pane_g1

0xeae4,	// (0x0002ae94) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x0002c22f) dt_sta_signal_pane_g

0xeaec,	// (0x0002ae9c) dt_sta_battery_pane_g1

0xeaf5,	// (0x0002aea5) dt_sta_battery_pane_t1

0xc026,	// (0x000283d6) bg_dt_sta_control_pane_g1

0x8c78,	// (0x00025028) fep_china_uni_eep_pane

0x8c80,	// (0x00025030) fep_china_uni_entry_pane_ParamLimits

0x8c90,	// (0x00025040) popup_fep_china_uni_window_g1_ParamLimits

0x8ca0,	// (0x00025050) popup_fep_china_uni_window_g2_ParamLimits

0x8ca0,	// (0x00025050) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0002baa8) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0002baa8) popup_fep_china_uni_window_g

0xeb04,	// (0x0002aeb4) fep_china_uni_eep_pane_g1

0xeb0c,	// (0x0002aebc) fep_china_uni_eep_pane_t1

0xe4fb,	// (0x0002a8ab) aid_touch_area_size_smil_player

0x967b,	// (0x00025a2b) lc0_clock_pane

0x9862,	// (0x00025c12) status_pane_g5_ParamLimits

0x9862,	// (0x00025c12) status_pane_g5

0x627e,	// (0x0002262e) popup_keymap_window

0x9820,	// (0x00025bd0) status_icon_pane

0xe708,	// (0x0002aab8) cell_ai5_widget_pane_g3_ParamLimits

0xe722,	// (0x0002aad2) cell_ai5_widget_pane_g4_ParamLimits

0xe732,	// (0x0002aae2) cell_ai5_widget_pane_g5_ParamLimits

0xe75a,	// (0x0002ab0a) cell_ai5_widget_pane_g8_ParamLimits

0xe75a,	// (0x0002ab0a) cell_ai5_widget_pane_g8

0xe76e,	// (0x0002ab1e) cell_ai5_widget_pane_g9_ParamLimits

0xe76e,	// (0x0002ab1e) cell_ai5_widget_pane_g9

0xe782,	// (0x0002ab32) cell_ai5_widget_pane_g10_ParamLimits

0xe782,	// (0x0002ab32) cell_ai5_widget_pane_g10

0xeb1b,	// (0x0002aecb) status_icon_pane_g1

0x2c44,	// (0x0001eff4) bg_popup_sub_pane_cp13

0xeb23,	// (0x0002aed3) popup_keymap_window_t1

0x945a,	// (0x0002580a) control_pane_g6_ParamLimits

0x945a,	// (0x0002580a) control_pane_g6

0x9467,	// (0x00025817) control_pane_g7_ParamLimits

0x9467,	// (0x00025817) control_pane_g7

0x9474,	// (0x00025824) control_pane_g8_ParamLimits

0x9474,	// (0x00025824) control_pane_g8

0xea3e,	// (0x0002adee) dt_sta_controll_pane_ParamLimits

0xea4b,	// (0x0002adfb) dt_sta_indi_pane_ParamLimits

0xea5c,	// (0x0002ae0c) dt_sta_title_pane_ParamLimits

0x83f0,	// (0x000247a0) aid_size_touch_scroll_bar_cale

0x58e9,	// (0x00021c99) popup_discreet_window_ParamLimits

0x58e9,	// (0x00021c99) popup_discreet_window

0x5971,	// (0x00021d21) popup_sk_window

0xa06e,	// (0x0002641e) bg_popup_sub_pane_cp28_ParamLimits

0xa06e,	// (0x0002641e) bg_popup_sub_pane_cp28

0xeb31,	// (0x0002aee1) popup_discreet_window_g1_ParamLimits

0xeb31,	// (0x0002aee1) popup_discreet_window_g1

0xeb51,	// (0x0002af01) popup_discreet_window_t1_ParamLimits

0xeb51,	// (0x0002af01) popup_discreet_window_t1

0xeb6f,	// (0x0002af1f) popup_discreet_window_t2_ParamLimits

0xeb6f,	// (0x0002af1f) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x0002c234) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x0002c234) popup_discreet_window_t

0x76d3,	// (0x00023a83) popup_sk_window_g1

0x76dd,	// (0x00023a8d) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x0002c23b) popup_sk_window_g

0x76e5,	// (0x00023a95) popup_sk_window_t1

0x76f3,	// (0x00023aa3) popup_sk_window_t1_copy1

0xe6f4,	// (0x0002aaa4) cell_ai5_widget_pane_g2_ParamLimits

0xe88f,	// (0x0002ac3f) cell_ai5_widget_pane_t9_ParamLimits

0xe88f,	// (0x0002ac3f) cell_ai5_widget_pane_t9

0x2c44,	// (0x0001eff4) main_fep_fshwr2_pane

0x7701,	// (0x00023ab1) aid_fshwr2_btn_pane

0x7711,	// (0x00023ac1) aid_fshwr2_syb_pane

0x7725,	// (0x00023ad5) aid_fshwr2_txt_pane

0x7735,	// (0x00023ae5) fshwr2_func_candi_pane

0x7759,	// (0x00023b09) fshwr2_hwr_syb_pane

0x7773,	// (0x00023b23) fshwr2_icf_pane

0x2c44,	// (0x0001eff4) fshwr2_icf_bg_pane

0x77a1,	// (0x00023b51) fshwr2_icf_pane_t1_ParamLimits

0x77a1,	// (0x00023b51) fshwr2_icf_pane_t1

0x8b4d,	// (0x00024efd) fshwr2_func_candi_pane_g1

0xebc1,	// (0x0002af71) fshwr2_func_candi_row_pane_ParamLimits

0xebc1,	// (0x0002af71) fshwr2_func_candi_row_pane

0x77b9,	// (0x00023b69) cell_fshwr2_syb_pane_ParamLimits

0x77b9,	// (0x00023b69) cell_fshwr2_syb_pane

0xe4cb,	// (0x0002a87b) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4cb,	// (0x0002a87b) fshwr2_hwr_syb_pane_g1

0x2c44,	// (0x0001eff4) bg_popup_call_pane_cp01

0x77dc,	// (0x00023b8c) fshwr2_func_candi_cell_pane_ParamLimits

0x77dc,	// (0x00023b8c) fshwr2_func_candi_cell_pane

0xa6e2,	// (0x00026a92) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6e2,	// (0x00026a92) fshwr2_func_candi_cell_bg_pane

0x7827,	// (0x00023bd7) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7827,	// (0x00023bd7) fshwr2_func_candi_cell_pane_g1

0x7852,	// (0x00023c02) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7852,	// (0x00023c02) fshwr2_func_candi_cell_pane_t1

0x2c44,	// (0x0001eff4) bg_button_pane_cp08

0x94a9,	// (0x00025859) cell_fshwr2_syb_bg_pane

0x7865,	// (0x00023c15) cell_fshwr2_syb_bg_pane_g1

0x7879,	// (0x00023c29) cell_fshwr2_syb_bg_pane_t1

0x84b8,	// (0x00024868) main_tmo_pane

0xab7d,	// (0x00026f2d) uni_indicator_pane_g1_ParamLimits

0xab93,	// (0x00026f43) uni_indicator_pane_g2_ParamLimits

0xaba9,	// (0x00026f59) uni_indicator_pane_g3_ParamLimits

0xabbc,	// (0x00026f6c) uni_indicator_pane_g4_ParamLimits

0xabbc,	// (0x00026f6c) uni_indicator_pane_g4

0xabd0,	// (0x00026f80) uni_indicator_pane_g5_ParamLimits

0xabd0,	// (0x00026f80) uni_indicator_pane_g5

0xabd0,	// (0x00026f80) uni_indicator_pane_g6_ParamLimits

0xabd0,	// (0x00026f80) uni_indicator_pane_g6

0xf8fc,	// (0x0002bcac) uni_indicator_pane_g_ParamLimits

0xd50f,	// (0x000298bf) popup_tmo_note_window_ParamLimits

0xd50f,	// (0x000298bf) popup_tmo_note_window

0x84b8,	// (0x00024868) fshwr2_bg_pane

0x7843,	// (0x00023bf3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7843,	// (0x00023bf3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x0002c240) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x0002c240) fshwr2_func_candi_cell_pane_g

0xc026,	// (0x000283d6) bg_popup_window_pane_cp01

0x788f,	// (0x00023c3f) bg_popup_window_pane_g1_cp01

0xebe8,	// (0x0002af98) bg_popup_window_pane_cp22_ParamLimits

0xebe8,	// (0x0002af98) bg_popup_window_pane_cp22

0xebf6,	// (0x0002afa6) listscroll_tmo_link_pane_ParamLimits

0xebf6,	// (0x0002afa6) listscroll_tmo_link_pane

0xec36,	// (0x0002afe6) popup_tmo_note_window_g1_ParamLimits

0xec36,	// (0x0002afe6) popup_tmo_note_window_g1

0xec43,	// (0x0002aff3) tmo_note_info_pane_ParamLimits

0xec43,	// (0x0002aff3) tmo_note_info_pane

0xec5d,	// (0x0002b00d) list_tmo_note_info_pane_g1_ParamLimits

0xec5d,	// (0x0002b00d) list_tmo_note_info_pane_g1

0xec74,	// (0x0002b024) list_tmo_note_info_pane_g2_ParamLimits

0xec74,	// (0x0002b024) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x0002c245) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x0002c245) list_tmo_note_info_pane_g

0xec90,	// (0x0002b040) list_tmo_note_info_text_pane_ParamLimits

0xec90,	// (0x0002b040) list_tmo_note_info_text_pane

0xed11,	// (0x0002b0c1) list_tmo_link_pane

0xed1e,	// (0x0002b0ce) scroll_pane_cp20

0xed2b,	// (0x0002b0db) list_single_tmo_link_pane_ParamLimits

0xed2b,	// (0x0002b0db) list_single_tmo_link_pane

0xed3b,	// (0x0002b0eb) list_single_tmo_link_pane_t1

0xed49,	// (0x0002b0f9) list_tmo_note_info_text_pane_t1_ParamLimits

0xed49,	// (0x0002b0f9) list_tmo_note_info_text_pane_t1

0x8574,	// (0x00024924) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8574,	// (0x00024924) aid_size_touch_scroll_bar_cp01

0x4acd,	// (0x00020e7d) aid_size_touch_slider_marker

0x5959,	// (0x00021d09) popup_settings_window_ParamLimits

0x5959,	// (0x00021d09) popup_settings_window

0x4c9c,	// (0x0002104c) popup_candi_list_indi_window

0x9525,	// (0x000258d5) aid_touch_navi_pane_ParamLimits

0x6ec3,	// (0x00023273) rs_clock_indi_pane

0x6ecc,	// (0x0002327c) sctrl_sk_bottom_pane_ParamLimits

0x6edd,	// (0x0002328d) sctrl_sk_top_pane_ParamLimits

0x6fbc,	// (0x0002336c) popup_fep_tooltip_window

0xe662,	// (0x0002aa12) aid_size_cell_widget_grid_ParamLimits

0xe6df,	// (0x0002aa8f) cell_ai5_widget_pane_g1_ParamLimits

0xe6df,	// (0x0002aa8f) cell_ai5_widget_pane_g1

0xe742,	// (0x0002aaf2) cell_ai5_widget_pane_g6_ParamLimits

0xe74e,	// (0x0002aafe) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe09,	// (0x0002c1b9) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0002c1b9) cell_ai5_widget_pane_g

0xe8be,	// (0x0002ac6e) cell_ai5_widget_pane_t10_ParamLimits

0xe8be,	// (0x0002ac6e) cell_ai5_widget_pane_t10

0xe901,	// (0x0002acb1) grid_ai5_widget_pane_ParamLimits

0xe9a2,	// (0x0002ad52) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a2,	// (0x0002ad52) cell_contacts_ai5_widget_pane

0xeb84,	// (0x0002af34) popup_discreet_window_t3_ParamLimits

0xeb84,	// (0x0002af34) popup_discreet_window_t3

0x778b,	// (0x00023b3b) popup_fshwr2_char_preview_window_ParamLimits

0x778b,	// (0x00023b3b) popup_fshwr2_char_preview_window

0xecae,	// (0x0002b05e) tmo_note_info_pane_t1

0xecc3,	// (0x0002b073) tmo_note_info_pane_t2

0xecd8,	// (0x0002b088) tmo_note_info_pane_t3

0xeced,	// (0x0002b09d) tmo_note_info_pane_t4

0xecff,	// (0x0002b0af) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x0002c24a) tmo_note_info_pane_t

0xed11,	// (0x0002b0c1) list_tmo_link_pane_ParamLimits

0xed1e,	// (0x0002b0ce) scroll_pane_cp20_ParamLimits

0x2c44,	// (0x0001eff4) bg_popup_fep_char_preview_window_cp01

0xed62,	// (0x0002b112) popup_fshwr2_char_preview_window_t1

0xed70,	// (0x0002b120) popup_candi_list_indi_window_g1

0xed79,	// (0x0002b129) bg_cell_contacts_ai5_widget_pane

0xed85,	// (0x0002b135) cell_contacts_ai5_widget_pane_g1

0xc706,	// (0x00028ab6) cell_contacts_ai5_widget_pane_g2

0xed9a,	// (0x0002b14a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x0002c255) cell_contacts_ai5_widget_pane_g

0xeda6,	// (0x0002b156) cell_contacts_ai5_widget_pane_t1

0x84b8,	// (0x00024868) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee1d,	// (0x0002b1cd) settings_container_pane

0x9185,	// (0x00025535) listscroll_set_pane_copy1

0xb710,	// (0x00027ac0) scroll_pane_cp121_copy1

0x9e0b,	// (0x000261bb) set_content_pane_copy1

0xee29,	// (0x0002b1d9) aid_height_set_list_copy1_ParamLimits

0xee29,	// (0x0002b1d9) aid_height_set_list_copy1

0xadc8,	// (0x00027178) aid_size_parent_copy1_ParamLimits

0xadc8,	// (0x00027178) aid_size_parent_copy1

0xee35,	// (0x0002b1e5) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee35,	// (0x0002b1e5) button_value_adjust_pane_cp6_copy1

0x94a9,	// (0x00025859) list_highlight_pane_cp2_copy1_ParamLimits

0x94a9,	// (0x00025859) list_highlight_pane_cp2_copy1

0xee49,	// (0x0002b1f9) list_set_pane_copy1_ParamLimits

0xee49,	// (0x0002b1f9) list_set_pane_copy1

0xedb8,	// (0x0002b168) main_pane_set_t1_copy1_ParamLimits

0xedb8,	// (0x0002b168) main_pane_set_t1_copy1

0xedf2,	// (0x0002b1a2) main_pane_set_t2_copy1_ParamLimits

0xedf2,	// (0x0002b1a2) main_pane_set_t2_copy1

0xeef6,	// (0x0002b2a6) main_pane_set_t3_copy1

0xef04,	// (0x0002b2b4) main_pane_set_t4_copy1

0xee11,	// (0x0002b1c1) set_content_pane_g1_copy1_ParamLimits

0xee11,	// (0x0002b1c1) set_content_pane_g1_copy1

0xef12,	// (0x0002b2c2) setting_code_pane_copy1

0xef1a,	// (0x0002b2ca) setting_slider_graphic_pane_copy1

0xef1a,	// (0x0002b2ca) setting_slider_pane_copy1

0xef22,	// (0x0002b2d2) setting_text_pane_copy1

0xef22,	// (0x0002b2d2) setting_volume_pane_copy1

0xef12,	// (0x0002b2c2) settings_code_pane_cp2_copy1

0xef2a,	// (0x0002b2da) settings_code_pane_cp_copy1_ParamLimits

0xef2a,	// (0x0002b2da) settings_code_pane_cp_copy1

0x7898,	// (0x00023c48) volume_set_pane_copy1

0xef3e,	// (0x0002b2ee) volume_set_pane_g10_copy1

0xef46,	// (0x0002b2f6) volume_set_pane_g1_copy1

0xef4e,	// (0x0002b2fe) volume_set_pane_g2_copy1

0xef56,	// (0x0002b306) volume_set_pane_g3_copy1

0xef5e,	// (0x0002b30e) volume_set_pane_g4_copy1

0xef66,	// (0x0002b316) volume_set_pane_g5_copy1

0xef6e,	// (0x0002b31e) volume_set_pane_g6_copy1

0xef76,	// (0x0002b326) volume_set_pane_g7_copy1

0xef7e,	// (0x0002b32e) volume_set_pane_g8_copy1

0xef86,	// (0x0002b336) volume_set_pane_g9_copy1

0x7c2b,	// (0x00023fdb) bg_set_opt_pane_cp_copy1_ParamLimits

0x7c2b,	// (0x00023fdb) bg_set_opt_pane_cp_copy1

0x78a0,	// (0x00023c50) setting_slider_pane_t1_copy1_ParamLimits

0x78a0,	// (0x00023c50) setting_slider_pane_t1_copy1

0x78bf,	// (0x00023c6f) setting_slider_pane_t2_copy1_ParamLimits

0x78bf,	// (0x00023c6f) setting_slider_pane_t2_copy1

0x78d9,	// (0x00023c89) setting_slider_pane_t3_copy1_ParamLimits

0x78d9,	// (0x00023c89) setting_slider_pane_t3_copy1

0x78f1,	// (0x00023ca1) slider_set_pane_copy1_ParamLimits

0x78f1,	// (0x00023ca1) slider_set_pane_copy1

0x8510,	// (0x000248c0) set_opt_bg_pane_g1_copy2

0x8518,	// (0x000248c8) set_opt_bg_pane_g2_copy2

0xef8e,	// (0x0002b33e) set_opt_bg_pane_g3_copy2

0x8528,	// (0x000248d8) set_opt_bg_pane_g4_copy2

0x8530,	// (0x000248e0) set_opt_bg_pane_g5_copy2

0x8538,	// (0x000248e8) set_opt_bg_pane_g6_copy2

0xef98,	// (0x0002b348) set_opt_bg_pane_g7_copy2

0xefa0,	// (0x0002b350) set_opt_bg_pane_g8_copy2

0xefaa,	// (0x0002b35a) set_opt_bg_pane_g9_copy2

0x7907,	// (0x00023cb7) aid_size_touch_slider_mark_copy1_ParamLimits

0x7907,	// (0x00023cb7) aid_size_touch_slider_mark_copy1

0xefb4,	// (0x0002b364) slider_set_pane_g1_copy1

0x791b,	// (0x00023ccb) slider_set_pane_g2_copy1

0x69a6,	// (0x00022d56) slider_set_pane_g3_copy1_ParamLimits

0x69a6,	// (0x00022d56) slider_set_pane_g3_copy1

0x69ba,	// (0x00022d6a) slider_set_pane_g4_copy1_ParamLimits

0x69ba,	// (0x00022d6a) slider_set_pane_g4_copy1

0x69d2,	// (0x00022d82) slider_set_pane_g5_copy1_ParamLimits

0x69d2,	// (0x00022d82) slider_set_pane_g5_copy1

0x69a6,	// (0x00022d56) slider_set_pane_g6_copy1_ParamLimits

0x69a6,	// (0x00022d56) slider_set_pane_g6_copy1

0x7923,	// (0x00023cd3) slider_set_pane_g7_copy1_ParamLimits

0x7923,	// (0x00023cd3) slider_set_pane_g7_copy1

0x7b4b,	// (0x00023efb) bg_set_opt_pane_cp2_copy1

0xefbd,	// (0x0002b36d) setting_slider_graphic_pane_g1_copy1

0xefc6,	// (0x0002b376) setting_slider_graphic_pane_t1_copy1

0xefd6,	// (0x0002b386) setting_slider_graphic_pane_t2_copy1

0xefe6,	// (0x0002b396) slider_set_pane_cp_copy1

0xeff6,	// (0x0002b3a6) input_focus_pane_cp1_copy1

0xefff,	// (0x0002b3af) list_set_text_pane_copy1

0xf007,	// (0x0002b3b7) setting_text_pane_g1_copy1

0x44c7,	// (0x00020877) set_text_pane_t1_copy1

0xeff6,	// (0x0002b3a6) input_focus_pane_cp2_copy1

0xf007,	// (0x0002b3b7) setting_code_pane_g1_copy1

0xf010,	// (0x0002b3c0) setting_code_pane_t1_copy1

0xb538,	// (0x000278e8) list_set_graphic_pane_copy1

0x7b4b,	// (0x00023efb) bg_set_opt_pane_cp4_copy1

0x8e77,	// (0x00025227) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e77,	// (0x00025227) list_set_graphic_pane_g1_copy1

0xf01e,	// (0x0002b3ce) list_set_graphic_pane_g2_copy1

0x8e8f,	// (0x0002523f) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e8f,	// (0x0002523f) list_set_graphic_pane_t1_copy1

0xc026,	// (0x000283d6) rs_clock_indi_pane_g1

0xf026,	// (0x0002b3d6) rs_clock_indi_pane_t1

0xf034,	// (0x0002b3e4) rs_indi_pane

0xf03c,	// (0x0002b3ec) rs_indi_pane_g1

0xf045,	// (0x0002b3f5) rs_indi_pane_g2

0xf04e,	// (0x0002b3fe) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x0002c25c) rs_indi_pane_g

0x9185,	// (0x00025535) bg_popup_preview_window_pane_cp03

0xf057,	// (0x0002b407) popup_fep_tooltip_window_t1

0xccae,	// (0x0002905e) popup_note2_window_g2_ParamLimits

0xccae,	// (0x0002905e) popup_note2_window_g2

0x0001,

0xfc39,	// (0x0002bfe9) popup_note2_window_g_ParamLimits

0xfc39,	// (0x0002bfe9) popup_note2_window_g

0xd1a9,	// (0x00029559) bg_popup_sub_pane_cp11_ParamLimits

0xd1b6,	// (0x00029566) cell_ai3_links_pane_g1_ParamLimits

0xd1cd,	// (0x0002957d) cell_ai3_links_pane_t1

0x44c7,	// (0x00020877) set_text_pane_t1_copy1_ParamLimits

0x908d,	// (0x0002543d) cell_graphic_popup_pane_cp2_ParamLimits

0x908d,	// (0x0002543d) cell_graphic_popup_pane_cp2

0xf065,	// (0x0002b415) cell_graphic_popup_pane_g1_cp2

0x8203,	// (0x000245b3) cell_graphic_popup_pane_g2_cp2

0xf06d,	// (0x0002b41d) cell_graphic_popup_pane_g3_cp2

0xf075,	// (0x0002b425) cell_graphic_popup_pane_t2_cp2

0x8214,	// (0x000245c4) grid_highlight_pane_cp3_cp2

0x8868,	// (0x00024c18) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84b8,	// (0x00024868) main_tmo_pane_ParamLimits

0xd503,	// (0x000298b3) popup_tmo_big_image_note_window

0xe6ce,	// (0x0002aa7e) cell_ai5_widget_list_pane

0xe6d6,	// (0x0002aa86) cell_ai5_widget_lrg_icon_pane

0xecae,	// (0x0002b05e) tmo_note_info_pane_t1_ParamLimits

0xecc3,	// (0x0002b073) tmo_note_info_pane_t2_ParamLimits

0xecd8,	// (0x0002b088) tmo_note_info_pane_t3_ParamLimits

0xeced,	// (0x0002b09d) tmo_note_info_pane_t4_ParamLimits

0xecff,	// (0x0002b0af) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x0002c24a) tmo_note_info_pane_t_ParamLimits

0xee1d,	// (0x0002b1cd) settings_container_pane_ParamLimits

0xefee,	// (0x0002b39e) indicator_popup_pane_cp5

0xefee,	// (0x0002b39e) indicator_popup_pane_cp6

0xb538,	// (0x000278e8) list_set_graphic_pane_copy1_ParamLimits

0x2c44,	// (0x0001eff4) bg_popup_window_pane_cp23

0xf083,	// (0x0002b433) popup_tmo_big_image_note_window_g1

0xf08d,	// (0x0002b43d) popup_tmo_big_image_note_window_t1

0xf09d,	// (0x0002b44d) popup_tmo_big_image_note_window_t2

0xf0ad,	// (0x0002b45d) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x0002c263) popup_tmo_big_image_note_window_t

0xc026,	// (0x000283d6) cell_ai5_widget_lrg_icon_pane_g1

0xf0bd,	// (0x0002b46d) cell_ai5_widget_lrg_icon_pane_t1

0xf0cb,	// (0x0002b47b) cell_ai5_widget_list_row_pane_ParamLimits

0xf0cb,	// (0x0002b47b) cell_ai5_widget_list_row_pane

0xf0e2,	// (0x0002b492) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e2,	// (0x0002b492) cell_ai5_widget_list_row_pane_g1

0xf0ef,	// (0x0002b49f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ef,	// (0x0002b49f) cell_ai5_widget_list_row_pane_t1

0xf120,	// (0x0002b4d0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf120,	// (0x0002b4d0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeba,	// (0x0002c26a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeba,	// (0x0002c26a) cell_ai5_widget_list_row_pane_t

0x2c44,	// (0x0001eff4) main_fep_vtchi_ss_pane

0xf170,	// (0x0002b520) popup_fep_char_pre_window

0xf178,	// (0x0002b528) popup_fep_ituss_window

0xf1a4,	// (0x0002b554) popup_fep_vkbss_window

0x94a9,	// (0x00025859) grid_vkbss_keypad_pane_ParamLimits

0x94a9,	// (0x00025859) grid_vkbss_keypad_pane

0xf1e4,	// (0x0002b594) ituss_keypad_pane

0x7943,	// (0x00023cf3) aid_vkbss_key_offset_ParamLimits

0x7943,	// (0x00023cf3) aid_vkbss_key_offset

0x794f,	// (0x00023cff) cell_vkbss_key_pane_ParamLimits

0x794f,	// (0x00023cff) cell_vkbss_key_pane

0xf1f0,	// (0x0002b5a0) bg_cell_vkbss_key_g1_ParamLimits

0xf1f0,	// (0x0002b5a0) bg_cell_vkbss_key_g1

0xf1fc,	// (0x0002b5ac) cell_vkbss_key_3p_pane_ParamLimits

0xf1fc,	// (0x0002b5ac) cell_vkbss_key_3p_pane

0xf232,	// (0x0002b5e2) cell_vkbss_key_g1_ParamLimits

0xf232,	// (0x0002b5e2) cell_vkbss_key_g1

0xf268,	// (0x0002b618) cell_vkbss_key_t1_ParamLimits

0xf268,	// (0x0002b618) cell_vkbss_key_t1

0x79a7,	// (0x00023d57) cell_ituss_key_pane_ParamLimits

0x79a7,	// (0x00023d57) cell_ituss_key_pane

0xf2c4,	// (0x0002b674) bg_cell_ituss_key_g1_ParamLimits

0xf2c4,	// (0x0002b674) bg_cell_ituss_key_g1

0xf2d0,	// (0x0002b680) cell_ituss_key_pane_g1_ParamLimits

0xf2d0,	// (0x0002b680) cell_ituss_key_pane_g1

0x79b8,	// (0x00023d68) cell_ituss_key_pane_g2_ParamLimits

0x79b8,	// (0x00023d68) cell_ituss_key_pane_g2

0x0005,

0xfec1,	// (0x0002c271) cell_ituss_key_pane_g_ParamLimits

0xfec1,	// (0x0002c271) cell_ituss_key_pane_g

0x7a3c,	// (0x00023dec) cell_ituss_key_t1_ParamLimits

0x7a3c,	// (0x00023dec) cell_ituss_key_t1

0x7a76,	// (0x00023e26) cell_ituss_key_t2_ParamLimits

0x7a76,	// (0x00023e26) cell_ituss_key_t2

0x7aa8,	// (0x00023e58) cell_ituss_key_t3_ParamLimits

0x7aa8,	// (0x00023e58) cell_ituss_key_t3

0x7ad9,	// (0x00023e89) cell_ituss_key_t4_ParamLimits

0x7ad9,	// (0x00023e89) cell_ituss_key_t4

0x0004,

0xfece,	// (0x0002c27e) cell_ituss_key_t_ParamLimits

0xfece,	// (0x0002c27e) cell_ituss_key_t

0xf2f6,	// (0x0002b6a6) cell_vkbss_key_3p_pane_g1

0xf2fe,	// (0x0002b6ae) cell_vkbss_key_3p_pane_g2

0xf306,	// (0x0002b6b6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed9,	// (0x0002c289) cell_vkbss_key_3p_pane_g

0x9185,	// (0x00025535) bg_popup_fep_char_preview_window_cp02

0xf30e,	// (0x0002b6be) popup_fep_char_pre_window_t1

0xe64f,	// (0x0002a9ff) main_ai5_sk_pane

0xed79,	// (0x0002b129) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed85,	// (0x0002b135) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc706,	// (0x00028ab6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed9a,	// (0x0002b14a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x0002c255) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda6,	// (0x0002b156) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84b8,	// (0x00024868) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31c,	// (0x0002b6cc) main_ai5_sk_pane_g1

0x9ea7,	// (0x00026257) popup_query_code_window_g1

0xf18e,	// (0x0002b53e) popup_fep_vkb_icf_pane

0xf1bb,	// (0x0002b56b) popup_fep_vtchi_icf_pane

0xf325,	// (0x0002b6d5) bg_icf_pane

0xf325,	// (0x0002b6d5) list_vkb_icf_pane

0xf331,	// (0x0002b6e1) bg_icf_pane_cp01

0xf344,	// (0x0002b6f4) vtchi_icf_list_pane

0xf3a4,	// (0x0002b754) list_vkb_icf_pane_t1_ParamLimits

0xf3a4,	// (0x0002b754) list_vkb_icf_pane_t1

0xf3c5,	// (0x0002b775) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0002b775) vtchi_icf_list_pane_t1

0xf178,	// (0x0002b528) popup_fep_ituss_window_ParamLimits

0xf1bb,	// (0x0002b56b) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e4,	// (0x0002b594) ituss_keypad_pane_ParamLimits

0x7939,	// (0x00023ce9) ituss_sks_pane

0xf325,	// (0x0002b6d5) bg_icf_pane_ParamLimits

0xf148,	// (0x0002b4f8) icf_edit_indi_pane_ParamLimits

0xf148,	// (0x0002b4f8) icf_edit_indi_pane

0xf325,	// (0x0002b6d5) list_vkb_icf_pane_ParamLimits

0xf331,	// (0x0002b6e1) bg_icf_pane_cp01_ParamLimits

0xf163,	// (0x0002b513) icf_edit_indi_pane_cp01_ParamLimits

0xf163,	// (0x0002b513) icf_edit_indi_pane_cp01

0xf344,	// (0x0002b6f4) vtchi_query_pane

0xe4cb,	// (0x0002a87b) icf_edit_indi_pane_g1_ParamLimits

0xe4cb,	// (0x0002a87b) icf_edit_indi_pane_g1

0xf43a,	// (0x0002b7ea) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0002b7ea) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0002c2b4) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0002c2b4) icf_edit_indi_pane_g

0xf44e,	// (0x0002b7fe) icf_edit_indi_pane_t1

0xf3e3,	// (0x0002b793) bg_input_focus_pane_cp042

0x83e7,	// (0x00024797) vtchi_button_pane

0xf3ec,	// (0x0002b79c) vtchi_query_pane_t1

0xf3fa,	// (0x0002b7aa) vtchi_query_pane_t2

0xf408,	// (0x0002b7b8) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0002c2a3) vtchi_query_pane_t

0x2c44,	// (0x0001eff4) bg_button_pane_cp13

0xf416,	// (0x0002b7c6) vtchi_button_pane_g1

0x7b1c,	// (0x00023ecc) ituss_sks_pane_g1

0x7b27,	// (0x00023ed7) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0002c2aa) ituss_sks_pane_g

0xf41e,	// (0x0002b7ce) ituss_sks_pane_t1

0xf42c,	// (0x0002b7dc) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0002c2af) ituss_sks_pane_t

0xbaa8,	// (0x00027e58) indicator_nsta_pane_cp_g1

0xbab1,	// (0x00027e61) indicator_nsta_pane_cp_g2

0xbab9,	// (0x00027e69) indicator_nsta_pane_cp_g3

0xbac1,	// (0x00027e71) indicator_nsta_pane_cp_g4

0xbab1,	// (0x00027e61) indicator_nsta_pane_cp_g5

0xbab9,	// (0x00027e69) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0002be33) indicator_nsta_pane_cp_g

0xe206,	// (0x0002a5b6) cell_graphic2_pane_t2_ParamLimits

0xe206,	// (0x0002a5b6) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x0002c140) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x0002c140) cell_graphic2_pane_t

0xe232,	// (0x0002a5e2) cell_graphic2_control_pane_t1

0x8c27,	// (0x00024fd7) signal_pane_g3_ParamLimits

0x8c27,	// (0x00024fd7) signal_pane_g3

0x8c39,	// (0x00024fe9) signal_pane_g4_ParamLimits

0x8c39,	// (0x00024fe9) signal_pane_g4

0xf132,	// (0x0002b4e2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf132,	// (0x0002b4e2) cell_ai5_widget_list_row_pane_t3

0xf2e4,	// (0x0002b694) cell_ituss_key_pane_t1_ParamLimits

0xf2e4,	// (0x0002b694) cell_ituss_key_pane_t1

0x9ae4,	// (0x00025e94) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ae4,	// (0x00025e94) form_field_data_wide_pane_vc_t2

0x9af8,	// (0x00025ea8) form_field_data_wide_pane_vc_t3_ParamLimits

0x9af8,	// (0x00025ea8) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0002bb94) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0002bb94) form_field_data_wide_pane_vc_t

0xb752,	// (0x00027b02) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb752,	// (0x00027b02) form_field_slider_wide_pane_vc_t3

0xb830,	// (0x00027be0) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb830,	// (0x00027be0) form_field_popup_wide_pane_vc_t2

0xb847,	// (0x00027bf7) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb847,	// (0x00027bf7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0002be22) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002be22) form_field_popup_wide_pane_vc_t

0x7701,	// (0x00023ab1) aid_fshwr2_btn_pane_ParamLimits

0x7711,	// (0x00023ac1) aid_fshwr2_syb_pane_ParamLimits

0x7725,	// (0x00023ad5) aid_fshwr2_txt_pane_ParamLimits

0x84b8,	// (0x00024868) fshwr2_bg_pane_ParamLimits

0x7735,	// (0x00023ae5) fshwr2_func_candi_pane_ParamLimits

0x7759,	// (0x00023b09) fshwr2_hwr_syb_pane_ParamLimits

0x7773,	// (0x00023b23) fshwr2_icf_pane_ParamLimits

0x523b,	// (0x000215eb) list_double_graphic_pane_vc_g4_ParamLimits

0x523b,	// (0x000215eb) list_double_graphic_pane_vc_g4

0x79d8,	// (0x00023d88) cell_ituss_key_pane_g3_ParamLimits

0x79d8,	// (0x00023d88) cell_ituss_key_pane_g3

0x7b0a,	// (0x00023eba) cell_ituss_key_t5_ParamLimits

0x7b0a,	// (0x00023eba) cell_ituss_key_t5

0xf1a4,	// (0x0002b554) popup_fep_vkbss_window_ParamLimits

0xe659,	// (0x0002aa09) aid_cell_ai5_quarter

0xf44e,	// (0x0002b7fe) icf_edit_indi_pane_t1_ParamLimits

0x7f5c,	// (0x0002430c) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7f5c,	// (0x0002430c) aid_tch_indicator_popup_pane_cp2

0x7f6f,	// (0x0002431f) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7f6f,	// (0x0002431f) aid_tch_query_popup_data_pane_cp2

0x9e4f,	// (0x000261ff) aid_tch_query_popup_pane_ParamLimits

0x9e4f,	// (0x000261ff) aid_tch_query_popup_pane

0x9e4f,	// (0x000261ff) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e4f,	// (0x000261ff) aid_tch_query_popup_data_pane_cp1

0x94a9,	// (0x00025859) cell_fshwr2_syb_bg_pane_ParamLimits

0x7865,	// (0x00023c15) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7879,	// (0x00023c29) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf18e,	// (0x0002b53e) popup_fep_vkb_icf_pane_ParamLimits

0x754f,	// (0x000238ff) bg_popup_fep_char_preview_window_g10

0xe796,	// (0x0002ab46) cell_ai5_widget_pane_g11_ParamLimits

0xe796,	// (0x0002ab46) cell_ai5_widget_pane_g11

0xe7a2,	// (0x0002ab52) cell_ai5_widget_pane_g12_ParamLimits

0xe7a2,	// (0x0002ab52) cell_ai5_widget_pane_g12

0xe7ae,	// (0x0002ab5e) cell_ai5_widget_pane_g13_ParamLimits

0xe7ae,	// (0x0002ab5e) cell_ai5_widget_pane_g13

0xe8dd,	// (0x0002ac8d) cell_ai5_widget_pane_t11_ParamLimits

0xe8dd,	// (0x0002ac8d) cell_ai5_widget_pane_t11

0xe8ef,	// (0x0002ac9f) cell_ai5_widget_pane_t12_ParamLimits

0xe8ef,	// (0x0002ac9f) cell_ai5_widget_pane_t12

0x79e4,	// (0x00023d94) cell_ituss_key_pane_g4_ParamLimits

0x79e4,	// (0x00023d94) cell_ituss_key_pane_g4

0x7a00,	// (0x00023db0) cell_ituss_key_pane_g5_ParamLimits

0x7a00,	// (0x00023db0) cell_ituss_key_pane_g5

0x7a1c,	// (0x00023dcc) cell_ituss_key_pane_g6_ParamLimits

0x7a1c,	// (0x00023dcc) cell_ituss_key_pane_g6

0x99d3,	// (0x00025d83) bg_icf_pane_g1

0xf34c,	// (0x0002b6fc) bg_icf_pane_g2

0xf358,	// (0x0002b708) bg_icf_pane_g3

0xf362,	// (0x0002b712) bg_icf_pane_g4

0xf36e,	// (0x0002b71e) bg_icf_pane_g5

0xf378,	// (0x0002b728) bg_icf_pane_g6

0xf384,	// (0x0002b734) bg_icf_pane_g7

0xf38e,	// (0x0002b73e) bg_icf_pane_g8

0xf39a,	// (0x0002b74a) bg_icf_pane_g9

0x0008,

0xfee0,	// (0x0002c290) bg_icf_pane_g

0xf1d1,	// (0x0002b581) popup_hyb_candi_window_ParamLimits

0xf1d1,	// (0x0002b581) popup_hyb_candi_window

0x9a53,	// (0x00025e03) bg_popup_sub_pane_cp01_ParamLimits

0x9a53,	// (0x00025e03) bg_popup_sub_pane_cp01

0xf467,	// (0x0002b817) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0002b817) entry_hyb_candi_pane

0xf476,	// (0x0002b826) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0002b826) grid_hyb_candi_pane

0xf48b,	// (0x0002b83b) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0002b83b) grid_hyb_phrase_pane

0xf49a,	// (0x0002b84a) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0002b84a) cell_hyb_candi_pane

0xf4bd,	// (0x0002b86d) cell_hyb_candi_scroll_pane

0x8b4d,	// (0x00024efd) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0002b876) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0002b884) cell_hyb_phrase_pane

0x8b4d,	// (0x00024efd) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0002b88d) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0002b89b) entry_hyb_candi_pane_t1

0x9185,	// (0x00025535) input_focus_pane_cp06

0xf4f9,	// (0x0002b8a9) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0002b8b1) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0002b8b9) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0002b8c1) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0002b8c9) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0002b8d1) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small

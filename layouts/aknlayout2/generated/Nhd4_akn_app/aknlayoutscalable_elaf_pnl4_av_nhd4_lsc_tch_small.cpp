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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0002782b };

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
0x8d53,	// (0x0003057e) Screen

0x8d5f,	// (0x0003058a) application_window_ParamLimits

0x8d5f,	// (0x0003058a) application_window

0xc283,	// (0x00033aae) screen_g1

0x8d97,	// (0x000305c2) area_bottom_pane_ParamLimits

0x8d97,	// (0x000305c2) area_bottom_pane

0x8e55,	// (0x00030680) area_top_pane_ParamLimits

0x8e55,	// (0x00030680) area_top_pane

0x8ee9,	// (0x00030714) main_pane_ParamLimits

0x8ee9,	// (0x00030714) main_pane

0xc28d,	// (0x00033ab8) misc_graphics

0xa682,	// (0x00031ead) battery_pane_ParamLimits

0xa682,	// (0x00031ead) battery_pane

0x29a5,	// (0x0002a1d0) bg_status_flat_pane_g8

0x29ad,	// (0x0002a1d8) bg_status_flat_pane_g9

0x08b7,	// (0x000280e2) context_pane_ParamLimits

0x08b7,	// (0x000280e2) context_pane

0xa7ed,	// (0x00032018) navi_pane_ParamLimits

0xa7ed,	// (0x00032018) navi_pane

0xa86b,	// (0x00032096) signal_pane_ParamLimits

0xa86b,	// (0x00032096) signal_pane

0x0008,

0xf840,	// (0x0003706b) bg_status_flat_pane_g

0xa8fb,	// (0x00032126) status_pane_g1_ParamLimits

0xa8fb,	// (0x00032126) status_pane_g1

0xa911,	// (0x0003213c) status_pane_g2_ParamLimits

0xa911,	// (0x0003213c) status_pane_g2

0x0ade,	// (0x00028309) status_pane_g3_ParamLimits

0x0ade,	// (0x00028309) status_pane_g3

0x0004,

0xf76c,	// (0x00036f97) status_pane_g_ParamLimits

0xf76c,	// (0x00036f97) status_pane_g

0xa91d,	// (0x00032148) title_pane_ParamLimits

0xa91d,	// (0x00032148) title_pane

0xa980,	// (0x000321ab) uni_indicator_pane_ParamLimits

0xa980,	// (0x000321ab) uni_indicator_pane

0xd0c7,	// (0x000348f2) bg_list_pane_ParamLimits

0xd0c7,	// (0x000348f2) bg_list_pane

0x9e70,	// (0x0003169b) find_pane

0x0d9a,	// (0x000285c5) listscroll_app_pane_ParamLimits

0x0d9a,	// (0x000285c5) listscroll_app_pane

0xd0e7,	// (0x00034912) listscroll_form_pane

0x9e78,	// (0x000316a3) listscroll_gen_pane_ParamLimits

0x9e78,	// (0x000316a3) listscroll_gen_pane

0x01d0,	// (0x000279fb) listscroll_set_pane

0x3509,	// (0x0002ad34) main_idle_act_pane

0xcf5b,	// (0x00034786) main_idle_trad_pane

0xcf5b,	// (0x00034786) main_list_empty_pane

0xc7e1,	// (0x0003400c) main_midp_pane

0xd101,	// (0x0003492c) main_pane_g1_ParamLimits

0xd101,	// (0x0003492c) main_pane_g1

0x9e8c,	// (0x000316b7) popup_ai_message_window_ParamLimits

0x9e8c,	// (0x000316b7) popup_ai_message_window

0x9f3d,	// (0x00031768) popup_fep_china_uni_window_ParamLimits

0x9f3d,	// (0x00031768) popup_fep_china_uni_window

0x9f97,	// (0x000317c2) popup_fep_japan_candidate_window_ParamLimits

0x9f97,	// (0x000317c2) popup_fep_japan_candidate_window

0x9fb5,	// (0x000317e0) popup_fep_japan_predictive_window_ParamLimits

0x9fb5,	// (0x000317e0) popup_fep_japan_predictive_window

0x9fc7,	// (0x000317f2) popup_find_window

0x9fe4,	// (0x0003180f) popup_grid_graphic_window_ParamLimits

0x9fe4,	// (0x0003180f) popup_grid_graphic_window

0x035b,	// (0x00027b86) popup_large_graphic_colour_window

0xa082,	// (0x000318ad) popup_menu_window_ParamLimits

0xa082,	// (0x000318ad) popup_menu_window

0xa254,	// (0x00031a7f) popup_note_image_window

0xa21a,	// (0x00031a45) popup_note_wait_window_ParamLimits

0xa21a,	// (0x00031a45) popup_note_wait_window

0xa26c,	// (0x00031a97) popup_note_window_ParamLimits

0xa26c,	// (0x00031a97) popup_note_window

0xa31b,	// (0x00031b46) popup_query_code_window_ParamLimits

0xa31b,	// (0x00031b46) popup_query_code_window

0xa355,	// (0x00031b80) popup_query_data_code_window_ParamLimits

0xa355,	// (0x00031b80) popup_query_data_code_window

0xa372,	// (0x00031b9d) popup_query_data_window_ParamLimits

0xa372,	// (0x00031b9d) popup_query_data_window

0xa3f4,	// (0x00031c1f) popup_query_sat_info_window_ParamLimits

0xa3f4,	// (0x00031c1f) popup_query_sat_info_window

0xa48b,	// (0x00031cb6) popup_snote_single_graphic_window_ParamLimits

0xa48b,	// (0x00031cb6) popup_snote_single_graphic_window

0xa48b,	// (0x00031cb6) popup_snote_single_text_window_ParamLimits

0xa48b,	// (0x00031cb6) popup_snote_single_text_window

0x062e,	// (0x00027e59) popup_sub_window_general

0xa5e8,	// (0x00031e13) popup_window_general_ParamLimits

0xa5e8,	// (0x00031e13) popup_window_general

0x0773,	// (0x00027f9e) power_save_pane

0x9cca,	// (0x000314f5) control_pane_g1_ParamLimits

0x9cca,	// (0x000314f5) control_pane_g1

0x9cf3,	// (0x0003151e) control_pane_g2_ParamLimits

0x9cf3,	// (0x0003151e) control_pane_g2

0xd0b1,	// (0x000348dc) control_pane_g3_ParamLimits

0xd0b1,	// (0x000348dc) control_pane_g3

0x0007,

0xf754,	// (0x00036f7f) control_pane_g_ParamLimits

0xf754,	// (0x00036f7f) control_pane_g

0x9d5b,	// (0x00031586) control_pane_t1_ParamLimits

0x9d5b,	// (0x00031586) control_pane_t1

0x9dc3,	// (0x000315ee) control_pane_t2_ParamLimits

0x9dc3,	// (0x000315ee) control_pane_t2

0x0002,

0xf765,	// (0x00036f90) control_pane_t_ParamLimits

0xf765,	// (0x00036f90) control_pane_t

0x9c41,	// (0x0003146c) navi_navi_volume_pane_cp1

0x9c49,	// (0x00031474) status_small_icon_pane

0xd05d,	// (0x00034888) status_small_pane_g1_ParamLimits

0xd05d,	// (0x00034888) status_small_pane_g1

0x9c51,	// (0x0003147c) status_small_pane_g2_ParamLimits

0x9c51,	// (0x0003147c) status_small_pane_g2

0xd091,	// (0x000348bc) status_small_pane_g3_ParamLimits

0xd091,	// (0x000348bc) status_small_pane_g3

0x9c5d,	// (0x00031488) status_small_pane_g4_ParamLimits

0x9c5d,	// (0x00031488) status_small_pane_g4

0x9c6b,	// (0x00031496) status_small_pane_g5_ParamLimits

0x9c6b,	// (0x00031496) status_small_pane_g5

0x9c79,	// (0x000314a4) status_small_pane_g6_ParamLimits

0x9c79,	// (0x000314a4) status_small_pane_g6

0x0007,

0xf743,	// (0x00036f6e) status_small_pane_g_ParamLimits

0xf743,	// (0x00036f6e) status_small_pane_g

0x9c94,	// (0x000314bf) status_small_pane_t1

0x9cb6,	// (0x000314e1) status_small_wait_pane_ParamLimits

0x9cb6,	// (0x000314e1) status_small_wait_pane

0x99b4,	// (0x000311df) aid_levels_signal_ParamLimits

0x99b4,	// (0x000311df) aid_levels_signal

0x99cc,	// (0x000311f7) signal_pane_g1_ParamLimits

0x99cc,	// (0x000311f7) signal_pane_g1

0x99e7,	// (0x00031212) signal_pane_g2_ParamLimits

0x99e7,	// (0x00031212) signal_pane_g2

0x0003,

0xf6d4,	// (0x00036eff) signal_pane_g_ParamLimits

0xf6d4,	// (0x00036eff) signal_pane_g

0xcb49,	// (0x00034374) context_pane_g1

0x90e4,	// (0x0003090f) title_pane_g1

0x911b,	// (0x00030946) title_pane_t1

0xc2a3,	// (0x00033ace) title_pane_t2

0xc2c9,	// (0x00033af4) title_pane_t3

0x0002,

0xf532,	// (0x00036d5d) title_pane_t

0xa9a8,	// (0x000321d3) aid_levels_battery_ParamLimits

0xa9a8,	// (0x000321d3) aid_levels_battery

0xa9c4,	// (0x000321ef) battery_pane_g1_ParamLimits

0xa9c4,	// (0x000321ef) battery_pane_g1

0xa9e1,	// (0x0003220c) battery_pane_g2_ParamLimits

0xa9e1,	// (0x0003220c) battery_pane_g2

0x0001,

0xf777,	// (0x00036fa2) battery_pane_g_ParamLimits

0xf777,	// (0x00036fa2) battery_pane_g

0xb057,	// (0x00032882) uni_indicator_pane_g1

0xb06d,	// (0x00032898) uni_indicator_pane_g2

0xb083,	// (0x000328ae) uni_indicator_pane_g3

0x0005,

0xf8e8,	// (0x00037113) uni_indicator_pane_g

0xcdf2,	// (0x0003461d) navi_icon_pane_ParamLimits

0xcdf2,	// (0x0003461d) navi_icon_pane

0xcd3b,	// (0x00034566) navi_midp_pane

0xce0e,	// (0x00034639) navi_navi_pane

0xce18,	// (0x00034643) navi_text_pane_ParamLimits

0xce18,	// (0x00034643) navi_text_pane

0xc283,	// (0x00033aae) status_small_wait_pane_g1

0xc51a,	// (0x00033d45) status_small_wait_pane_g2

0x0001,

0xf8e3,	// (0x0003710e) status_small_wait_pane_g

0xafb0,	// (0x000327db) navi_navi_icon_text_pane

0x2ff8,	// (0x0002a823) navi_navi_pane_g1_ParamLimits

0x2ff8,	// (0x0002a823) navi_navi_pane_g1

0x300a,	// (0x0002a835) navi_navi_pane_g2_ParamLimits

0x300a,	// (0x0002a835) navi_navi_pane_g2

0x0001,

0xf8b1,	// (0x000370dc) navi_navi_pane_g_ParamLimits

0xf8b1,	// (0x000370dc) navi_navi_pane_g

0x301c,	// (0x0002a847) navi_navi_tabs_pane

0x3025,	// (0x0002a850) navi_navi_text_pane

0xafb0,	// (0x000327db) navi_navi_volume_pane

0x2fcc,	// (0x0002a7f7) navi_text_pane_t1

0x2fc0,	// (0x0002a7eb) navi_icon_pane_g1

0x2f13,	// (0x0002a73e) navi_navi_text_pane_t1

0xaf9c,	// (0x000327c7) navi_navi_volume_pane_g1

0x16f0,	// (0x00028f1b) volume_small_pane

0x2e79,	// (0x0002a6a4) navi_navi_icon_text_pane_g1

0xaf00,	// (0x0003272b) navi_navi_icon_text_pane_t1

0xce0e,	// (0x00034639) navi_tabs_2_long_pane

0xce0e,	// (0x00034639) navi_tabs_2_pane

0xce0e,	// (0x00034639) navi_tabs_3_long_pane

0xce0e,	// (0x00034639) navi_tabs_3_pane

0xce0e,	// (0x00034639) navi_tabs_4_pane

0x16c8,	// (0x00028ef3) tabs_2_active_pane_ParamLimits

0x16c8,	// (0x00028ef3) tabs_2_active_pane

0x16d8,	// (0x00028f03) tabs_2_passive_pane_ParamLimits

0x16d8,	// (0x00028f03) tabs_2_passive_pane

0x1696,	// (0x00028ec1) tabs_3_active_pane_ParamLimits

0x1696,	// (0x00028ec1) tabs_3_active_pane

0x16a6,	// (0x00028ed1) tabs_3_passive_pane_ParamLimits

0x16a6,	// (0x00028ed1) tabs_3_passive_pane

0x16b7,	// (0x00028ee2) tabs_3_passive_pane_cp_ParamLimits

0x16b7,	// (0x00028ee2) tabs_3_passive_pane_cp

0x1652,	// (0x00028e7d) tabs_4_active_pane_ParamLimits

0x1652,	// (0x00028e7d) tabs_4_active_pane

0x1663,	// (0x00028e8e) tabs_4_passive_pane_ParamLimits

0x1663,	// (0x00028e8e) tabs_4_passive_pane

0x1674,	// (0x00028e9f) tabs_4_passive_pane_cp_ParamLimits

0x1674,	// (0x00028e9f) tabs_4_passive_pane_cp

0x1685,	// (0x00028eb0) tabs_4_passive_pane_cp2_ParamLimits

0x1685,	// (0x00028eb0) tabs_4_passive_pane_cp2

0x162e,	// (0x00028e59) tabs_2_long_active_pane_ParamLimits

0x162e,	// (0x00028e59) tabs_2_long_active_pane

0x1640,	// (0x00028e6b) tabs_2_long_passive_pane_ParamLimits

0x1640,	// (0x00028e6b) tabs_2_long_passive_pane

0x15e9,	// (0x00028e14) tabs_3_long_active_pane_ParamLimits

0x15e9,	// (0x00028e14) tabs_3_long_active_pane

0x1602,	// (0x00028e2d) tabs_3_long_passive_pane_ParamLimits

0x1602,	// (0x00028e2d) tabs_3_long_passive_pane

0x1615,	// (0x00028e40) tabs_3_long_passive_pane_cp_ParamLimits

0x1615,	// (0x00028e40) tabs_3_long_passive_pane_cp

0x158f,	// (0x00028dba) volume_small_pane_g1

0x1598,	// (0x00028dc3) volume_small_pane_g2

0x15a1,	// (0x00028dcc) volume_small_pane_g3

0x15aa,	// (0x00028dd5) volume_small_pane_g4

0x15b3,	// (0x00028dde) volume_small_pane_g5

0x15bc,	// (0x00028de7) volume_small_pane_g6

0x15c5,	// (0x00028df0) volume_small_pane_g7

0x15ce,	// (0x00028df9) volume_small_pane_g8

0x15d7,	// (0x00028e02) volume_small_pane_g9

0x15e0,	// (0x00028e0b) volume_small_pane_g10

0x0009,

0xf87d,	// (0x000370a8) volume_small_pane_g

0xc2db,	// (0x00033b06) bg_active_tab_pane_cp2_ParamLimits

0xc2db,	// (0x00033b06) bg_active_tab_pane_cp2

0x91a7,	// (0x000309d2) tabs_3_active_pane_g1

0x91af,	// (0x000309da) tabs_3_active_pane_t1

0xc2db,	// (0x00033b06) bg_passive_tab_pane_cp2_ParamLimits

0xc2db,	// (0x00033b06) bg_passive_tab_pane_cp2

0x91a7,	// (0x000309d2) tabs_3_passive_pane_g1

0x91af,	// (0x000309da) tabs_3_passive_pane_t1

0xc2db,	// (0x00033b06) bg_active_tab_pane_cp3_ParamLimits

0xc2db,	// (0x00033b06) bg_active_tab_pane_cp3

0x91c1,	// (0x000309ec) tabs_4_active_pane_g1

0x91c9,	// (0x000309f4) tabs_4_active_pane_t1

0xc2db,	// (0x00033b06) bg_passive_tab_pane_cp3_ParamLimits

0xc2db,	// (0x00033b06) bg_passive_tab_pane_cp3

0x91c1,	// (0x000309ec) tabs_4_1_passive_pane_g1

0x91c9,	// (0x000309f4) tabs_4_1_passive_pane_t1

0xc7e1,	// (0x0003400c) list_highlight_pane_cp2

0xb24d,	// (0x00032a78) list_set_pane_ParamLimits

0xb24d,	// (0x00032a78) list_set_pane

0xb2e7,	// (0x00032b12) main_pane_set_t1_ParamLimits

0xb2e7,	// (0x00032b12) main_pane_set_t1

0xb307,	// (0x00032b32) main_pane_set_t2_ParamLimits

0xb307,	// (0x00032b32) main_pane_set_t2

0xb31b,	// (0x00032b46) main_pane_set_t3_ParamLimits

0xb31b,	// (0x00032b46) main_pane_set_t3

0xb32d,	// (0x00032b58) main_pane_set_t4_ParamLimits

0xb32d,	// (0x00032b58) main_pane_set_t4

0x0003,

0xf94d,	// (0x00037178) main_pane_set_t_ParamLimits

0xf94d,	// (0x00037178) main_pane_set_t

0xb33f,	// (0x00032b6a) setting_code_pane

0xb349,	// (0x00032b74) setting_slider_graphic_pane

0xb349,	// (0x00032b74) setting_slider_pane

0xb349,	// (0x00032b74) setting_text_pane

0xb349,	// (0x00032b74) setting_volume_pane

0x91db,	// (0x00030a06) volume_set_pane

0xc2e9,	// (0x00033b14) bg_set_opt_pane_cp

0x91e3,	// (0x00030a0e) setting_slider_pane_t1

0x91fc,	// (0x00030a27) setting_slider_pane_t2

0x9216,	// (0x00030a41) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00036d64) setting_slider_pane_t

0x922e,	// (0x00030a59) slider_set_pane

0xc28d,	// (0x00033ab8) bg_set_opt_pane_cp2

0xc2f7,	// (0x00033b22) setting_slider_graphic_pane_g1

0x9244,	// (0x00030a6f) setting_slider_graphic_pane_t1

0x9254,	// (0x00030a7f) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00036d6b) setting_slider_graphic_pane_t

0x9264,	// (0x00030a8f) slider_set_pane_cp

0xc28d,	// (0x00033ab8) input_focus_pane_cp1

0x34f0,	// (0x0002ad1b) list_set_text_pane

0xc283,	// (0x00033aae) setting_text_pane_g1

0xc28d,	// (0x00033ab8) input_focus_pane_cp2

0xc283,	// (0x00033aae) setting_code_pane_g1

0xc300,	// (0x00033b2b) setting_code_pane_t1

0xe807,	// (0x00036032) set_text_pane_t1_ParamLimits

0xe807,	// (0x00036032) set_text_pane_t1

0xc6f7,	// (0x00033f22) set_opt_bg_pane_g1

0xc6ff,	// (0x00033f2a) set_opt_bg_pane_g2

0xb202,	// (0x00032a2d) set_opt_bg_pane_g3

0xc70f,	// (0x00033f3a) set_opt_bg_pane_g4

0xc717,	// (0x00033f42) set_opt_bg_pane_g5

0xc71f,	// (0x00033f4a) set_opt_bg_pane_g6

0xb20c,	// (0x00032a37) set_opt_bg_pane_g7

0xb214,	// (0x00032a3f) set_opt_bg_pane_g8

0xb21e,	// (0x00032a49) set_opt_bg_pane_g9

0x0008,

0xf93a,	// (0x00037165) set_opt_bg_pane_g

0xb19d,	// (0x000329c8) slider_set_pane_g1

0x175d,	// (0x00028f88) slider_set_pane_g2

0x0006,

0xf92b,	// (0x00037156) slider_set_pane_g

0xb0c2,	// (0x000328ed) volume_set_pane_g1

0xb0ca,	// (0x000328f5) volume_set_pane_g2

0xb0d2,	// (0x000328fd) volume_set_pane_g3

0xb0da,	// (0x00032905) volume_set_pane_g4

0xb0e2,	// (0x0003290d) volume_set_pane_g5

0xb0ea,	// (0x00032915) volume_set_pane_g6

0xb0f2,	// (0x0003291d) volume_set_pane_g7

0xb0fa,	// (0x00032925) volume_set_pane_g8

0xb102,	// (0x0003292d) volume_set_pane_g9

0xb10a,	// (0x00032935) volume_set_pane_g10

0x0009,

0xf903,	// (0x0003712e) volume_set_pane_g

0x926c,	// (0x00030a97) indicator_pane_ParamLimits

0x926c,	// (0x00030a97) indicator_pane

0x9294,	// (0x00030abf) main_idle_pane_g2_ParamLimits

0x9294,	// (0x00030abf) main_idle_pane_g2

0x92cc,	// (0x00030af7) main_pane_idle_g1_ParamLimits

0x92cc,	// (0x00030af7) main_pane_idle_g1

0xc30e,	// (0x00033b39) popup_clock_digital_analogue_window_ParamLimits

0xc30e,	// (0x00033b39) popup_clock_digital_analogue_window

0x92f3,	// (0x00030b1e) soft_indicator_pane_ParamLimits

0x92f3,	// (0x00030b1e) soft_indicator_pane

0x9317,	// (0x00030b42) wallpaper_pane_ParamLimits

0x9317,	// (0x00030b42) wallpaper_pane

0xc283,	// (0x00033aae) wallpaper_pane_g1

0x9329,	// (0x00030b54) indicator_pane_g1_ParamLimits

0x9329,	// (0x00030b54) indicator_pane_g1

0x3903,	// (0x0002b12e) navi_navi_icon_text_pane_srt_g1

0xc33c,	// (0x00033b67) soft_indicator_pane_t1

0xc356,	// (0x00033b81) aid_ps_area_pane

0x933f,	// (0x00030b6a) aid_ps_clock_pane

0xc367,	// (0x00033b92) aid_ps_indicator_pane

0xc373,	// (0x00033b9e) indicator_ps_pane_ParamLimits

0xc373,	// (0x00033b9e) indicator_ps_pane

0xc382,	// (0x00033bad) power_save_pane_g1_ParamLimits

0xc382,	// (0x00033bad) power_save_pane_g1

0xc38e,	// (0x00033bb9) power_save_pane_g2_ParamLimits

0xc38e,	// (0x00033bb9) power_save_pane_g2

0xe7c7,	// (0x00035ff2) aid_navinavi_width_pane

0xc356,	// (0x00033b81) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00036d70) power_save_pane_g_ParamLimits

0xf545,	// (0x00036d70) power_save_pane_g

0xc39c,	// (0x00033bc7) power_save_pane_t1_ParamLimits

0xc39c,	// (0x00033bc7) power_save_pane_t1

0x933f,	// (0x00030b6a) aid_ps_clock_pane_ParamLimits

0xc367,	// (0x00033b92) aid_ps_indicator_pane_ParamLimits

0xc3ae,	// (0x00033bd9) power_save_pane_t4_ParamLimits

0xc3ae,	// (0x00033bd9) power_save_pane_t4

0x0001,

0xf54a,	// (0x00036d75) power_save_pane_t_ParamLimits

0xf54a,	// (0x00036d75) power_save_pane_t

0xc3d8,	// (0x00033c03) power_save_t3_ParamLimits

0xc3d8,	// (0x00033c03) power_save_t3

0xc3c3,	// (0x00033bee) power_save_t2_ParamLimits

0xc3c3,	// (0x00033bee) power_save_t2

0xc3ed,	// (0x00033c18) indicator_ps_pane_g1

0x934d,	// (0x00030b78) ai_gene_pane_ParamLimits

0x934d,	// (0x00030b78) ai_gene_pane

0x9364,	// (0x00030b8f) ai_links_pane_ParamLimits

0x9364,	// (0x00030b8f) ai_links_pane

0x937c,	// (0x00030ba7) indicator_pane_cp1_ParamLimits

0x937c,	// (0x00030ba7) indicator_pane_cp1

0x938b,	// (0x00030bb6) main_pane_idle_g1_cp_ParamLimits

0x938b,	// (0x00030bb6) main_pane_idle_g1_cp

0x93a3,	// (0x00030bce) popup_ai_links_title_window

0x93ac,	// (0x00030bd7) soft_indicator_pane_cp1_ParamLimits

0x93ac,	// (0x00030bd7) soft_indicator_pane_cp1

0x32b7,	// (0x0002aae2) ai_links_pane_g1

0x32c0,	// (0x0002aaeb) grid_ai_links_pane

0xb04e,	// (0x00032879) ai_gene_pane_1

0x32a5,	// (0x0002aad0) ai_gene_pane_2

0x32ae,	// (0x0002aad9) list_highlight_pane_cp4

0xb02a,	// (0x00032855) cell_ai_link_pane_ParamLimits

0xb02a,	// (0x00032855) cell_ai_link_pane

0x3276,	// (0x0002aaa1) cell_ai_link_pane_g1

0xc51a,	// (0x00033d45) cell_ai_link_pane_g2

0x0001,

0xf8de,	// (0x00037109) cell_ai_link_pane_g

0xc28d,	// (0x00033ab8) grid_highlight_cp2

0xc28d,	// (0x00033ab8) bg_popup_sub_pane_cp1

0xc404,	// (0x00033c2f) popup_ai_links_title_window_t1

0x31c6,	// (0x0002a9f1) ai_gene_pane_1_g1_ParamLimits

0x31c6,	// (0x0002a9f1) ai_gene_pane_1_g1

0x31d2,	// (0x0002a9fd) ai_gene_pane_1_g2_ParamLimits

0x31d2,	// (0x0002a9fd) ai_gene_pane_1_g2

0x0001,

0xf8d4,	// (0x000370ff) ai_gene_pane_1_g_ParamLimits

0xf8d4,	// (0x000370ff) ai_gene_pane_1_g

0x31df,	// (0x0002aa0a) ai_gene_pane_1_t1_ParamLimits

0x31df,	// (0x0002aa0a) ai_gene_pane_1_t1

0x3213,	// (0x0002aa3e) grid_ai_soft_ind_pane

0x31b1,	// (0x0002a9dc) ai_gene_pane_2_t1_ParamLimits

0x31b1,	// (0x0002a9dc) ai_gene_pane_2_t1

0x93c0,	// (0x00030beb) main_pane_empty_t1_ParamLimits

0x93c0,	// (0x00030beb) main_pane_empty_t1

0x93d8,	// (0x00030c03) main_pane_empty_t2_ParamLimits

0x93d8,	// (0x00030c03) main_pane_empty_t2

0x93ed,	// (0x00030c18) main_pane_empty_t3_ParamLimits

0x93ed,	// (0x00030c18) main_pane_empty_t3

0x93ff,	// (0x00030c2a) main_pane_empty_t4_ParamLimits

0x93ff,	// (0x00030c2a) main_pane_empty_t4

0x9411,	// (0x00030c3c) main_pane_empty_t5_ParamLimits

0x9411,	// (0x00030c3c) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00036d7a) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00036d7a) main_pane_empty_t

0xc77c,	// (0x00033fa7) bg_popup_window_pane_ParamLimits

0xc77c,	// (0x00033fa7) bg_popup_window_pane

0xafa4,	// (0x000327cf) find_popup_pane_cp2_ParamLimits

0xafa4,	// (0x000327cf) find_popup_pane_cp2

0x2f2d,	// (0x0002a758) heading_pane_ParamLimits

0x2f2d,	// (0x0002a758) heading_pane

0xc28d,	// (0x00033ab8) bg_popup_sub_pane

0xaf1d,	// (0x00032748) bg_popup_window_pane_g1_ParamLimits

0xaf1d,	// (0x00032748) bg_popup_window_pane_g1

0xaf2c,	// (0x00032757) bg_popup_window_pane_g2_ParamLimits

0xaf2c,	// (0x00032757) bg_popup_window_pane_g2

0xaf38,	// (0x00032763) bg_popup_window_pane_g3_ParamLimits

0xaf38,	// (0x00032763) bg_popup_window_pane_g3

0xaf44,	// (0x0003276f) bg_popup_window_pane_g4_ParamLimits

0xaf44,	// (0x0003276f) bg_popup_window_pane_g4

0xaf53,	// (0x0003277e) bg_popup_window_pane_g5_ParamLimits

0xaf53,	// (0x0003277e) bg_popup_window_pane_g5

0xaf63,	// (0x0003278e) bg_popup_window_pane_g6_ParamLimits

0xaf63,	// (0x0003278e) bg_popup_window_pane_g6

0xaf6f,	// (0x0003279a) bg_popup_window_pane_g7_ParamLimits

0xaf6f,	// (0x0003279a) bg_popup_window_pane_g7

0xaf7e,	// (0x000327a9) bg_popup_window_pane_g8_ParamLimits

0xaf7e,	// (0x000327a9) bg_popup_window_pane_g8

0xaf8d,	// (0x000327b8) bg_popup_window_pane_g9_ParamLimits

0xaf8d,	// (0x000327b8) bg_popup_window_pane_g9

0x2f07,	// (0x0002a732) bg_popup_window_pane_g10_ParamLimits

0x2f07,	// (0x0002a732) bg_popup_window_pane_g10

0x0009,

0xf89c,	// (0x000370c7) bg_popup_window_pane_g_ParamLimits

0xf89c,	// (0x000370c7) bg_popup_window_pane_g

0x2e30,	// (0x0002a65b) bg_popup_heading_pane_ParamLimits

0x2e30,	// (0x0002a65b) bg_popup_heading_pane

0x17e5,	// (0x00029010) tabs_4_passive_pane_cp_srt_ParamLimits

0x17e5,	// (0x00029010) tabs_4_passive_pane_cp_srt

0x17f7,	// (0x00029022) tabs_4_passive_pane_srt_ParamLimits

0x2e44,	// (0x0002a66f) heading_pane_g2

0x17f7,	// (0x00029022) tabs_4_passive_pane_srt

0x0d9a,	// (0x000285c5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0d9a,	// (0x000285c5) bg_passive_tab_pane_cp3_srt

0x2e4c,	// (0x0002a677) heading_pane_t1_ParamLimits

0x2e4c,	// (0x0002a677) heading_pane_t1

0x2e63,	// (0x0002a68e) heading_pane_t2_ParamLimits

0x2e63,	// (0x0002a68e) heading_pane_t2

0x0001,

0xf897,	// (0x000370c2) heading_pane_t_ParamLimits

0xf897,	// (0x000370c2) heading_pane_t

0x296d,	// (0x0002a198) bg_popup_heading_pane_g1

0x2a1c,	// (0x0002a247) bg_popup_heading_pane_g2

0x2a26,	// (0x0002a251) bg_popup_heading_pane_g3

0x2a30,	// (0x0002a25b) bg_popup_heading_pane_g4

0x2a3a,	// (0x0002a265) bg_popup_heading_pane_g5

0x2a44,	// (0x0002a26f) bg_popup_heading_pane_g6

0x2a4c,	// (0x0002a277) bg_popup_heading_pane_g7

0x2a54,	// (0x0002a27f) bg_popup_heading_pane_g8

0x2a5e,	// (0x0002a289) bg_popup_heading_pane_g9

0x0008,

0xf853,	// (0x0003707e) bg_popup_heading_pane_g

0x0c96,	// (0x000284c1) bg_popup_sub_pane_g1

0x0c9e,	// (0x000284c9) bg_popup_sub_pane_g2

0x0ca6,	// (0x000284d1) bg_popup_sub_pane_g3

0x0cae,	// (0x000284d9) bg_popup_sub_pane_g4

0x0cb6,	// (0x000284e1) bg_popup_sub_pane_g5

0x0cbe,	// (0x000284e9) bg_popup_sub_pane_g6

0x0cc6,	// (0x000284f1) bg_popup_sub_pane_g7

0x0cce,	// (0x000284f9) bg_popup_sub_pane_g8

0x0cd6,	// (0x00028501) bg_popup_sub_pane_g9

0x0008,

0xf82d,	// (0x00037058) bg_popup_sub_pane_g

0xc2db,	// (0x00033b06) bg_popup_window_pane_cp5_ParamLimits

0xc2db,	// (0x00033b06) bg_popup_window_pane_cp5

0xc421,	// (0x00033c4c) popup_note_window_g1_ParamLimits

0xc421,	// (0x00033c4c) popup_note_window_g1

0xc42d,	// (0x00033c58) popup_note_window_t1_ParamLimits

0xc42d,	// (0x00033c58) popup_note_window_t1

0xc443,	// (0x00033c6e) popup_note_window_t2_ParamLimits

0xc443,	// (0x00033c6e) popup_note_window_t2

0xc459,	// (0x00033c84) popup_note_window_t3_ParamLimits

0xc459,	// (0x00033c84) popup_note_window_t3

0xc46f,	// (0x00033c9a) popup_note_window_t4_ParamLimits

0xc46f,	// (0x00033c9a) popup_note_window_t4

0xc497,	// (0x00033cc2) popup_note_window_t5_ParamLimits

0xc497,	// (0x00033cc2) popup_note_window_t5

0x0004,

0xf55a,	// (0x00036d85) popup_note_window_t_ParamLimits

0xf55a,	// (0x00036d85) popup_note_window_t

0xc4bb,	// (0x00033ce6) bg_popup_window_pane_cp6_ParamLimits

0xc4bb,	// (0x00033ce6) bg_popup_window_pane_cp6

0x1551,	// (0x00028d7c) popup_note_image_window_g1_ParamLimits

0x1551,	// (0x00028d7c) popup_note_image_window_g1

0xadc2,	// (0x000325ed) popup_note_image_window_g2_ParamLimits

0xadc2,	// (0x000325ed) popup_note_image_window_g2

0x0001,

0xf821,	// (0x0003704c) popup_note_image_window_g_ParamLimits

0xf821,	// (0x0003704c) popup_note_image_window_g

0x1576,	// (0x00028da1) popup_note_image_window_t1_ParamLimits

0x1576,	// (0x00028da1) popup_note_image_window_t1

0x2927,	// (0x0002a152) popup_note_image_window_t2_ParamLimits

0x2927,	// (0x0002a152) popup_note_image_window_t2

0x2940,	// (0x0002a16b) popup_note_image_window_t3_ParamLimits

0x2940,	// (0x0002a16b) popup_note_image_window_t3

0x0002,

0xf826,	// (0x00037051) popup_note_image_window_t_ParamLimits

0xf826,	// (0x00037051) popup_note_image_window_t

0x141a,	// (0x00028c45) bg_popup_window_pane_cp7_ParamLimits

0x141a,	// (0x00028c45) bg_popup_window_pane_cp7

0x144a,	// (0x00028c75) popup_note_wait_window_g1_ParamLimits

0x144a,	// (0x00028c75) popup_note_wait_window_g1

0x1456,	// (0x00028c81) popup_note_wait_window_g2_ParamLimits

0x1456,	// (0x00028c81) popup_note_wait_window_g2

0x0002,

0xf80f,	// (0x0003703a) popup_note_wait_window_g_ParamLimits

0xf80f,	// (0x0003703a) popup_note_wait_window_g

0x146e,	// (0x00028c99) popup_note_wait_window_t1_ParamLimits

0x146e,	// (0x00028c99) popup_note_wait_window_t1

0xad63,	// (0x0003258e) popup_note_wait_window_t2_ParamLimits

0xad63,	// (0x0003258e) popup_note_wait_window_t2

0xad80,	// (0x000325ab) popup_note_wait_window_t3_ParamLimits

0xad80,	// (0x000325ab) popup_note_wait_window_t3

0xad93,	// (0x000325be) popup_note_wait_window_t4_ParamLimits

0xad93,	// (0x000325be) popup_note_wait_window_t4

0x0004,

0xf816,	// (0x00037041) popup_note_wait_window_t_ParamLimits

0xf816,	// (0x00037041) popup_note_wait_window_t

0x14ea,	// (0x00028d15) wait_bar_pane_ParamLimits

0x14ea,	// (0x00028d15) wait_bar_pane

0xc28d,	// (0x00033ab8) wait_anim_pane

0xc28d,	// (0x00033ab8) wait_border_pane

0xc283,	// (0x00033aae) wait_anim_pane_g1

0xc283,	// (0x00033aae) wait_anim_pane_g2

0x0001,

0xf6cf,	// (0x00036efa) wait_anim_pane_g

0x13c6,	// (0x00028bf1) wait_border_pane_g1

0x13d1,	// (0x00028bfc) wait_border_pane_g2

0x13da,	// (0x00028c05) wait_border_pane_g3

0x0002,

0xf808,	// (0x00037033) wait_border_pane_g

0x1231,	// (0x00028a5c) bg_popup_window_pane_cp16_ParamLimits

0x1231,	// (0x00028a5c) bg_popup_window_pane_cp16

0xad13,	// (0x0003253e) indicator_popup_pane_cp4_ParamLimits

0xad13,	// (0x0003253e) indicator_popup_pane_cp4

0x1345,	// (0x00028b70) popup_query_data_window_t1_ParamLimits

0x1345,	// (0x00028b70) popup_query_data_window_t1

0x1357,	// (0x00028b82) popup_query_data_window_t2_ParamLimits

0x1357,	// (0x00028b82) popup_query_data_window_t2

0x1370,	// (0x00028b9b) popup_query_data_window_t3_ParamLimits

0x1370,	// (0x00028b9b) popup_query_data_window_t3

0x0002,

0xf801,	// (0x0003702c) popup_query_data_window_t_ParamLimits

0xf801,	// (0x0003702c) popup_query_data_window_t

0xad27,	// (0x00032552) query_popup_data_pane_ParamLimits

0xad27,	// (0x00032552) query_popup_data_pane

0xad3b,	// (0x00032566) query_popup_data_pane_cp1_ParamLimits

0xad3b,	// (0x00032566) query_popup_data_pane_cp1

0x1231,	// (0x00028a5c) bg_popup_window_pane_cp10_ParamLimits

0x1231,	// (0x00028a5c) bg_popup_window_pane_cp10

0xac8e,	// (0x000324b9) indicator_popup_pane_ParamLimits

0xac8e,	// (0x000324b9) indicator_popup_pane

0xacb0,	// (0x000324db) popup_query_code_window_t1_ParamLimits

0xacb0,	// (0x000324db) popup_query_code_window_t1

0xacca,	// (0x000324f5) popup_query_code_window_t2_ParamLimits

0xacca,	// (0x000324f5) popup_query_code_window_t2

0x12e8,	// (0x00028b13) popup_query_code_window_t3_ParamLimits

0x12e8,	// (0x00028b13) popup_query_code_window_t3

0x0002,

0xf7fa,	// (0x00037025) popup_query_code_window_t_ParamLimits

0xf7fa,	// (0x00037025) popup_query_code_window_t

0x1317,	// (0x00028b42) query_popup_pane_ParamLimits

0x1317,	// (0x00028b42) query_popup_pane

0xc4bb,	// (0x00033ce6) bg_popup_window_pane_cp15_ParamLimits

0xc4bb,	// (0x00033ce6) bg_popup_window_pane_cp15

0x9449,	// (0x00030c74) indicator_popup_pane_cp1_ParamLimits

0x9449,	// (0x00030c74) indicator_popup_pane_cp1

0x945c,	// (0x00030c87) indicator_popup_pane_cp2_ParamLimits

0x945c,	// (0x00030c87) indicator_popup_pane_cp2

0x946f,	// (0x00030c9a) popup_query_data_code_window_g1_ParamLimits

0x946f,	// (0x00030c9a) popup_query_data_code_window_g1

0xc4d9,	// (0x00033d04) popup_query_data_code_window_t1_ParamLimits

0xc4d9,	// (0x00033d04) popup_query_data_code_window_t1

0xc4eb,	// (0x00033d16) popup_query_data_code_window_t2_ParamLimits

0xc4eb,	// (0x00033d16) popup_query_data_code_window_t2

0x9482,	// (0x00030cad) popup_query_data_code_window_t3_ParamLimits

0x9482,	// (0x00030cad) popup_query_data_code_window_t3

0x9498,	// (0x00030cc3) popup_query_data_code_window_t4_ParamLimits

0x9498,	// (0x00030cc3) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00036d90) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00036d90) popup_query_data_code_window_t

0xcdb0,	// (0x000345db) list_single_midp_graphic_pane_g3

0x94b0,	// (0x00030cdb) query_popup_data_pane_cp2_ParamLimits

0x94c3,	// (0x00030cee) query_popup_pane_cp2_ParamLimits

0x94c3,	// (0x00030cee) query_popup_pane_cp2

0xc28d,	// (0x00033ab8) bg_popup_window_pane_cp11

0x1215,	// (0x00028a40) heading_pane_cp5

0x121d,	// (0x00028a48) listscroll_popup_info_pane

0xc28d,	// (0x00033ab8) input_focus_pane_cp3

0xc4fd,	// (0x00033d28) query_popup_pane_t1

0xc50b,	// (0x00033d36) list_popup_info_pane_ParamLimits

0xc50b,	// (0x00033d36) list_popup_info_pane

0xc51a,	// (0x00033d45) listscroll_popup_info_pane_g1

0xc522,	// (0x00033d4d) scroll_pane_cp7

0x94d6,	// (0x00030d01) popup_info_list_pane_t1_ParamLimits

0x94d6,	// (0x00030d01) popup_info_list_pane_t1

0x94f0,	// (0x00030d1b) popup_info_list_pane_t2_ParamLimits

0x94f0,	// (0x00030d1b) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00036d99) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00036d99) popup_info_list_pane_t

0xc28d,	// (0x00033ab8) bg_popup_window_pane_cp12

0xb541,	// (0x00032d6c) find_popup_pane

0xc2e9,	// (0x00033b14) bg_popup_window_pane_cp3

0xc52c,	// (0x00033d57) heading_pane_cp3

0xc53b,	// (0x00033d66) listscroll_popup_graphic_pane

0xc28d,	// (0x00033ab8) bg_popup_window_pane_cp4

0x955a,	// (0x00030d85) heading_pane_cp4

0xc54b,	// (0x00033d76) listscroll_popup_colour_pane

0x9564,	// (0x00030d8f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9564,	// (0x00030d8f) cell_large_graphic_colour_none_popup_pane

0x9578,	// (0x00030da3) grid_large_graphic_colour_popup_pane_ParamLimits

0x9578,	// (0x00030da3) grid_large_graphic_colour_popup_pane

0x959c,	// (0x00030dc7) listscroll_popup_colour_pane_g1_ParamLimits

0x959c,	// (0x00030dc7) listscroll_popup_colour_pane_g1

0x95b3,	// (0x00030dde) listscroll_popup_colour_pane_g2_ParamLimits

0x95b3,	// (0x00030dde) listscroll_popup_colour_pane_g2

0x95c7,	// (0x00030df2) listscroll_popup_colour_pane_g3_ParamLimits

0x95c7,	// (0x00030df2) listscroll_popup_colour_pane_g3

0x95d7,	// (0x00030e02) listscroll_popup_colour_pane_g4_ParamLimits

0x95d7,	// (0x00030e02) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00036d9e) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00036d9e) listscroll_popup_colour_pane_g

0xc553,	// (0x00033d7e) scroll_pane_cp6_ParamLimits

0xc553,	// (0x00033d7e) scroll_pane_cp6

0x95e7,	// (0x00030e12) cell_large_graphic_colour_popup_pane_ParamLimits

0x95e7,	// (0x00030e12) cell_large_graphic_colour_popup_pane

0x9606,	// (0x00030e31) cell_large_graphic_colour_none_popup_pane_t1

0xc28d,	// (0x00033ab8) grid_highlight_pane_cp5

0xc565,	// (0x00033d90) cell_large_graphic_colour_popup_pane_g1

0xc56d,	// (0x00033d98) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00036da7) cell_large_graphic_colour_popup_pane_g

0xc575,	// (0x00033da0) cell_large_graphic_colour_popup_pane_g2_copy1

0xc57e,	// (0x00033da9) grid_highlight_pane_cp4

0xc586,	// (0x00033db1) bg_popup_window_pane_cp8_ParamLimits

0xc586,	// (0x00033db1) bg_popup_window_pane_cp8

0x9615,	// (0x00030e40) popup_snote_single_text_window_g1_ParamLimits

0x9615,	// (0x00030e40) popup_snote_single_text_window_g1

0x9627,	// (0x00030e52) popup_snote_single_text_window_t1_ParamLimits

0x9627,	// (0x00030e52) popup_snote_single_text_window_t1

0x963a,	// (0x00030e65) popup_snote_single_text_window_t2_ParamLimits

0x963a,	// (0x00030e65) popup_snote_single_text_window_t2

0x964d,	// (0x00030e78) popup_snote_single_text_window_t3_ParamLimits

0x964d,	// (0x00030e78) popup_snote_single_text_window_t3

0x9686,	// (0x00030eb1) popup_snote_single_text_window_t4_ParamLimits

0x9686,	// (0x00030eb1) popup_snote_single_text_window_t4

0x96ba,	// (0x00030ee5) popup_snote_single_text_window_t5_ParamLimits

0x96ba,	// (0x00030ee5) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00036dac) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00036dac) popup_snote_single_text_window_t

0xc5a1,	// (0x00033dcc) bg_popup_window_pane_cp9_ParamLimits

0xc5a1,	// (0x00033dcc) bg_popup_window_pane_cp9

0x9615,	// (0x00030e40) popup_snote_single_graphic_window_g1_ParamLimits

0x9615,	// (0x00030e40) popup_snote_single_graphic_window_g1

0xc5af,	// (0x00033dda) popup_snote_single_graphic_window_g2_ParamLimits

0xc5af,	// (0x00033dda) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00036db7) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00036db7) popup_snote_single_graphic_window_g

0xc5bb,	// (0x00033de6) popup_snote_single_graphic_window_t1_ParamLimits

0xc5bb,	// (0x00033de6) popup_snote_single_graphic_window_t1

0xc5ce,	// (0x00033df9) popup_snote_single_graphic_window_t2_ParamLimits

0xc5ce,	// (0x00033df9) popup_snote_single_graphic_window_t2

0x964d,	// (0x00030e78) popup_snote_single_graphic_window_t3_ParamLimits

0x964d,	// (0x00030e78) popup_snote_single_graphic_window_t3

0x9686,	// (0x00030eb1) popup_snote_single_graphic_window_t4_ParamLimits

0x9686,	// (0x00030eb1) popup_snote_single_graphic_window_t4

0x96e9,	// (0x00030f14) popup_snote_single_graphic_window_t5_ParamLimits

0x96e9,	// (0x00030f14) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00036dbc) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00036dbc) popup_snote_single_graphic_window_t

0x385f,	// (0x0002b08a) grid_graphic_popup_pane_ParamLimits

0x385f,	// (0x0002b08a) grid_graphic_popup_pane

0x3889,	// (0x0002b0b4) listscroll_popup_graphic_pane_g1_ParamLimits

0x3889,	// (0x0002b0b4) listscroll_popup_graphic_pane_g1

0xb48c,	// (0x00032cb7) listscroll_popup_graphic_pane_g2_ParamLimits

0xb48c,	// (0x00032cb7) listscroll_popup_graphic_pane_g2

0x0001,

0xf977,	// (0x000371a2) listscroll_popup_graphic_pane_g_ParamLimits

0xf977,	// (0x000371a2) listscroll_popup_graphic_pane_g

0x38b1,	// (0x0002b0dc) scroll_pane_cp5

0xb44b,	// (0x00032c76) cell_graphic_popup_pane_ParamLimits

0xb44b,	// (0x00032c76) cell_graphic_popup_pane

0x37d6,	// (0x0002b001) cell_graphic_popup_pane_g1

0x37de,	// (0x0002b009) cell_graphic_popup_pane_g2

0xc575,	// (0x00033da0) cell_graphic_popup_pane_g3

0x0002,

0xf970,	// (0x0003719b) cell_graphic_popup_pane_g

0x37e7,	// (0x0002b012) cell_graphic_popup_pane_t2

0xc57e,	// (0x00033da9) grid_highlight_pane_cp3

0xc5f3,	// (0x00033e1e) list_gen_pane_ParamLimits

0xc5f3,	// (0x00033e1e) list_gen_pane

0xc61b,	// (0x00033e46) scroll_pane

0xb3b5,	// (0x00032be0) bg_list_pane_g1_ParamLimits

0xb3b5,	// (0x00032be0) bg_list_pane_g1

0xb3d0,	// (0x00032bfb) bg_list_pane_g2_ParamLimits

0xb3d0,	// (0x00032bfb) bg_list_pane_g2

0xb3e3,	// (0x00032c0e) bg_list_pane_g3_ParamLimits

0xb3e3,	// (0x00032c0e) bg_list_pane_g3

0xb3f5,	// (0x00032c20) bg_list_pane_g4_ParamLimits

0xb3f5,	// (0x00032c20) bg_list_pane_g4

0xb407,	// (0x00032c32) bg_list_pane_g5_ParamLimits

0xb407,	// (0x00032c32) bg_list_pane_g5

0x0004,

0xf965,	// (0x00037190) bg_list_pane_g_ParamLimits

0xf965,	// (0x00037190) bg_list_pane_g

0xb37c,	// (0x00032ba7) list_double2_graphic_large_graphic_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_double2_graphic_large_graphic_pane

0xb37c,	// (0x00032ba7) list_double2_graphic_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_double2_graphic_pane

0xb37c,	// (0x00032ba7) list_double2_large_graphic_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_double2_large_graphic_pane

0xb37c,	// (0x00032ba7) list_double2_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_double2_pane

0xb37c,	// (0x00032ba7) list_double_graphic_heading_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_double_graphic_heading_pane

0xb37c,	// (0x00032ba7) list_double_graphic_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_double_graphic_pane

0xb37c,	// (0x00032ba7) list_double_heading_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_double_heading_pane

0xb37c,	// (0x00032ba7) list_double_large_graphic_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_double_large_graphic_pane

0xb37c,	// (0x00032ba7) list_double_number_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_double_number_pane

0xb37c,	// (0x00032ba7) list_double_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_double_pane

0xb37c,	// (0x00032ba7) list_double_time_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_double_time_pane

0xb37c,	// (0x00032ba7) list_setting_number_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_setting_number_pane

0xb37c,	// (0x00032ba7) list_setting_pane_ParamLimits

0xb37c,	// (0x00032ba7) list_setting_pane

0x9777,	// (0x00030fa2) list_single_2graphic_pane_ParamLimits

0x9777,	// (0x00030fa2) list_single_2graphic_pane

0x9777,	// (0x00030fa2) list_single_graphic_heading_pane_ParamLimits

0x9777,	// (0x00030fa2) list_single_graphic_heading_pane

0x9777,	// (0x00030fa2) list_single_graphic_pane_ParamLimits

0x9777,	// (0x00030fa2) list_single_graphic_pane

0x9777,	// (0x00030fa2) list_single_heading_pane_ParamLimits

0x9777,	// (0x00030fa2) list_single_heading_pane

0x9777,	// (0x00030fa2) list_single_large_graphic_pane_ParamLimits

0x9777,	// (0x00030fa2) list_single_large_graphic_pane

0x9777,	// (0x00030fa2) list_single_number_heading_pane_ParamLimits

0x9777,	// (0x00030fa2) list_single_number_heading_pane

0x9777,	// (0x00030fa2) list_single_number_pane_ParamLimits

0x9777,	// (0x00030fa2) list_single_number_pane

0x9777,	// (0x00030fa2) list_single_pane_ParamLimits

0x9777,	// (0x00030fa2) list_single_pane

0xc28d,	// (0x00033ab8) list_highlight_pane_cp1

0xe82e,	// (0x00036059) list_single_pane_g1_ParamLimits

0xe82e,	// (0x00036059) list_single_pane_g1

0xe83a,	// (0x00036065) list_single_pane_g2_ParamLimits

0xe83a,	// (0x00036065) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00036dce) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00036dce) list_single_pane_g

0x8b50,	// (0x0003037b) list_single_pane_t1_ParamLimits

0x8b50,	// (0x0003037b) list_single_pane_t1

0xe82e,	// (0x00036059) list_single_number_pane_g1_ParamLimits

0xe82e,	// (0x00036059) list_single_number_pane_g1

0xe83a,	// (0x00036065) list_single_number_pane_g2_ParamLimits

0xe83a,	// (0x00036065) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00036dce) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00036dce) list_single_number_pane_g

0xe846,	// (0x00036071) list_single_number_pane_t1_ParamLimits

0xe846,	// (0x00036071) list_single_number_pane_t1

0x8b12,	// (0x0003033d) list_single_number_pane_t2_ParamLimits

0x8b12,	// (0x0003033d) list_single_number_pane_t2

0x0001,

0xf926,	// (0x00037151) list_single_number_pane_t_ParamLimits

0xf926,	// (0x00037151) list_single_number_pane_t

0xe822,	// (0x0003604d) list_single_graphic_pane_g1_ParamLimits

0xe822,	// (0x0003604d) list_single_graphic_pane_g1

0xe82e,	// (0x00036059) list_single_graphic_pane_g2_ParamLimits

0xe82e,	// (0x00036059) list_single_graphic_pane_g2

0xe83a,	// (0x00036065) list_single_graphic_pane_g3_ParamLimits

0xe83a,	// (0x00036065) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00036dc7) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00036dc7) list_single_graphic_pane_g

0xe846,	// (0x00036071) list_single_graphic_pane_t1_ParamLimits

0xe846,	// (0x00036071) list_single_graphic_pane_t1

0xe82e,	// (0x00036059) list_single_heading_pane_g1_ParamLimits

0xe82e,	// (0x00036059) list_single_heading_pane_g1

0xe83a,	// (0x00036065) list_single_heading_pane_g2_ParamLimits

0xe83a,	// (0x00036065) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00036dce) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00036dce) list_single_heading_pane_g

0xe85c,	// (0x00036087) list_single_heading_pane_t1_ParamLimits

0xe85c,	// (0x00036087) list_single_heading_pane_t1

0xe872,	// (0x0003609d) list_single_heading_pane_t2_ParamLimits

0xe872,	// (0x0003609d) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00036dd3) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00036dd3) list_single_heading_pane_t

0xe82e,	// (0x00036059) list_single_number_heading_pane_g1_ParamLimits

0xe82e,	// (0x00036059) list_single_number_heading_pane_g1

0xe83a,	// (0x00036065) list_single_number_heading_pane_g2_ParamLimits

0xe83a,	// (0x00036065) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00036dce) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00036dce) list_single_number_heading_pane_g

0xe85c,	// (0x00036087) list_single_number_heading_pane_t1_ParamLimits

0xe85c,	// (0x00036087) list_single_number_heading_pane_t1

0xe884,	// (0x000360af) list_single_number_heading_pane_t2_ParamLimits

0xe884,	// (0x000360af) list_single_number_heading_pane_t2

0xe896,	// (0x000360c1) list_single_number_heading_pane_t3_ParamLimits

0xe896,	// (0x000360c1) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00036dd8) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00036dd8) list_single_number_heading_pane_t

0xe8a8,	// (0x000360d3) list_single_graphic_heading_pane_g1_ParamLimits

0xe8a8,	// (0x000360d3) list_single_graphic_heading_pane_g1

0x864b,	// (0x0002fe76) list_single_graphic_heading_pane_g4_ParamLimits

0x864b,	// (0x0002fe76) list_single_graphic_heading_pane_g4

0xe83a,	// (0x00036065) list_single_graphic_heading_pane_g5_ParamLimits

0xe83a,	// (0x00036065) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00036ddf) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00036ddf) list_single_graphic_heading_pane_g

0xe85c,	// (0x00036087) list_single_graphic_heading_pane_t1_ParamLimits

0xe85c,	// (0x00036087) list_single_graphic_heading_pane_t1

0x865c,	// (0x0002fe87) list_single_graphic_heading_pane_t2_ParamLimits

0x865c,	// (0x0002fe87) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00036de6) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00036de6) list_single_graphic_heading_pane_t

0xe8b4,	// (0x000360df) list_single_large_graphic_pane_g1_ParamLimits

0xe8b4,	// (0x000360df) list_single_large_graphic_pane_g1

0xe82e,	// (0x00036059) list_single_large_graphic_pane_g2_ParamLimits

0xe82e,	// (0x00036059) list_single_large_graphic_pane_g2

0xe83a,	// (0x00036065) list_single_large_graphic_pane_g3_ParamLimits

0xe83a,	// (0x00036065) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00036deb) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00036deb) list_single_large_graphic_pane_g

0x13d1,	// (0x00028bfc) wait_border_pane_g2_copy1

0x866e,	// (0x0002fe99) list_single_large_graphic_pane_g4_cp2

0xe846,	// (0x00036071) list_single_large_graphic_pane_t1_ParamLimits

0xe846,	// (0x00036071) list_single_large_graphic_pane_t1

0xe8c0,	// (0x000360eb) list_double_pane_g1_ParamLimits

0xe8c0,	// (0x000360eb) list_double_pane_g1

0xe8cc,	// (0x000360f7) list_double_pane_g2_ParamLimits

0xe8cc,	// (0x000360f7) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00036df2) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00036df2) list_double_pane_g

0x8676,	// (0x0002fea1) list_double_pane_t1_ParamLimits

0x8676,	// (0x0002fea1) list_double_pane_t1

0x868c,	// (0x0002feb7) list_double_pane_t2_ParamLimits

0x868c,	// (0x0002feb7) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00036df7) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00036df7) list_double_pane_t

0x869e,	// (0x0002fec9) list_double2_pane_g1_ParamLimits

0x869e,	// (0x0002fec9) list_double2_pane_g1

0xe8cc,	// (0x000360f7) list_double2_pane_g2_ParamLimits

0xe8cc,	// (0x000360f7) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00036dfc) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00036dfc) list_double2_pane_g

0x8676,	// (0x0002fea1) list_double2_pane_t1_ParamLimits

0x8676,	// (0x0002fea1) list_double2_pane_t1

0x86af,	// (0x0002feda) list_double2_pane_t2_ParamLimits

0x86af,	// (0x0002feda) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00036e01) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00036e01) list_double2_pane_t

0xe8c0,	// (0x000360eb) list_double_number_pane_g1_ParamLimits

0xe8c0,	// (0x000360eb) list_double_number_pane_g1

0xe8cc,	// (0x000360f7) list_double_number_pane_g2_ParamLimits

0xe8cc,	// (0x000360f7) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00036df2) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00036df2) list_double_number_pane_g

0x86c1,	// (0x0002feec) list_double_number_pane_t1_ParamLimits

0x86c1,	// (0x0002feec) list_double_number_pane_t1

0x86d3,	// (0x0002fefe) list_double_number_pane_t2_ParamLimits

0x86d3,	// (0x0002fefe) list_double_number_pane_t2

0x86e9,	// (0x0002ff14) list_double_number_pane_t3_ParamLimits

0x86e9,	// (0x0002ff14) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00036e06) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00036e06) list_double_number_pane_t

0x86fb,	// (0x0002ff26) list_double_graphic_pane_g1_ParamLimits

0x86fb,	// (0x0002ff26) list_double_graphic_pane_g1

0xe8d8,	// (0x00036103) list_double_graphic_pane_g2_ParamLimits

0xe8d8,	// (0x00036103) list_double_graphic_pane_g2

0xe8e7,	// (0x00036112) list_double_graphic_pane_g3_ParamLimits

0xe8e7,	// (0x00036112) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00036e0d) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00036e0d) list_double_graphic_pane_g

0x8713,	// (0x0002ff3e) list_double_graphic_pane_t1_ParamLimits

0x8713,	// (0x0002ff3e) list_double_graphic_pane_t1

0x8729,	// (0x0002ff54) list_double_graphic_pane_t2_ParamLimits

0x8729,	// (0x0002ff54) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00036e16) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00036e16) list_double_graphic_pane_t

0x873b,	// (0x0002ff66) list_double2_graphic_pane_g1_ParamLimits

0x873b,	// (0x0002ff66) list_double2_graphic_pane_g1

0xe8f3,	// (0x0003611e) list_double2_graphic_pane_g2_ParamLimits

0xe8f3,	// (0x0003611e) list_double2_graphic_pane_g2

0xe8ff,	// (0x0003612a) list_double2_graphic_pane_g3_ParamLimits

0xe8ff,	// (0x0003612a) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00036e1b) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00036e1b) list_double2_graphic_pane_g

0x86d3,	// (0x0002fefe) list_double2_graphic_pane_t1_ParamLimits

0x86d3,	// (0x0002fefe) list_double2_graphic_pane_t1

0x8747,	// (0x0002ff72) list_double2_graphic_pane_t2_ParamLimits

0x8747,	// (0x0002ff72) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00036e22) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00036e22) list_double2_graphic_pane_t

0x8759,	// (0x0002ff84) list_double_large_graphic_pane_g1_ParamLimits

0x8759,	// (0x0002ff84) list_double_large_graphic_pane_g1

0x869e,	// (0x0002fec9) list_double_large_graphic_pane_g2_ParamLimits

0x869e,	// (0x0002fec9) list_double_large_graphic_pane_g2

0xe8cc,	// (0x000360f7) list_double_large_graphic_pane_g3_ParamLimits

0xe8cc,	// (0x000360f7) list_double_large_graphic_pane_g3

0x876c,	// (0x0002ff97) list_double_large_graphic_pane_g4_ParamLimits

0x876c,	// (0x0002ff97) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00036e27) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00036e27) list_double_large_graphic_pane_g

0x877e,	// (0x0002ffa9) list_double_large_graphic_pane_t1_ParamLimits

0x877e,	// (0x0002ffa9) list_double_large_graphic_pane_t1

0x8797,	// (0x0002ffc2) list_double_large_graphic_pane_t2_ParamLimits

0x8797,	// (0x0002ffc2) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00036e32) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00036e32) list_double_large_graphic_pane_t

0x87a9,	// (0x0002ffd4) list_double2_large_graphic_pane_g1_ParamLimits

0x87a9,	// (0x0002ffd4) list_double2_large_graphic_pane_g1

0x869e,	// (0x0002fec9) list_double2_large_graphic_pane_g2_ParamLimits

0x869e,	// (0x0002fec9) list_double2_large_graphic_pane_g2

0xe8cc,	// (0x000360f7) list_double2_large_graphic_pane_g3_ParamLimits

0xe8cc,	// (0x000360f7) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00036e37) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00036e37) list_double2_large_graphic_pane_g

0x86d3,	// (0x0002fefe) list_double2_large_graphic_pane_t1_ParamLimits

0x86d3,	// (0x0002fefe) list_double2_large_graphic_pane_t1

0x8747,	// (0x0002ff72) list_double2_large_graphic_pane_t2_ParamLimits

0x8747,	// (0x0002ff72) list_double2_large_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00036e22) list_double2_large_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00036e22) list_double2_large_graphic_pane_t

0x87b5,	// (0x0002ffe0) list_double_heading_pane_g1_ParamLimits

0x87b5,	// (0x0002ffe0) list_double_heading_pane_g1

0xe920,	// (0x0003614b) list_double_heading_pane_g2_ParamLimits

0xe920,	// (0x0003614b) list_double_heading_pane_g2

0x0001,

0xf613,	// (0x00036e3e) list_double_heading_pane_g_ParamLimits

0xf613,	// (0x00036e3e) list_double_heading_pane_g

0x87c6,	// (0x0002fff1) list_double_heading_pane_t1_ParamLimits

0x87c6,	// (0x0002fff1) list_double_heading_pane_t1

0x8747,	// (0x0002ff72) list_double_heading_pane_t2_ParamLimits

0x8747,	// (0x0002ff72) list_double_heading_pane_t2

0x0001,

0xf618,	// (0x00036e43) list_double_heading_pane_t_ParamLimits

0xf618,	// (0x00036e43) list_double_heading_pane_t

0x87dc,	// (0x00030007) list_double_graphic_heading_pane_g1_ParamLimits

0x87dc,	// (0x00030007) list_double_graphic_heading_pane_g1

0x87b5,	// (0x0002ffe0) list_double_graphic_heading_pane_g2_ParamLimits

0x87b5,	// (0x0002ffe0) list_double_graphic_heading_pane_g2

0xe920,	// (0x0003614b) list_double_graphic_heading_pane_g3_ParamLimits

0xe920,	// (0x0003614b) list_double_graphic_heading_pane_g3

0x0002,

0xf61d,	// (0x00036e48) list_double_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x00036e48) list_double_graphic_heading_pane_g

0x87c6,	// (0x0002fff1) list_double_graphic_heading_pane_t1_ParamLimits

0x87c6,	// (0x0002fff1) list_double_graphic_heading_pane_t1

0x8747,	// (0x0002ff72) list_double_graphic_heading_pane_t2_ParamLimits

0x8747,	// (0x0002ff72) list_double_graphic_heading_pane_t2

0x0001,

0xf618,	// (0x00036e43) list_double_graphic_heading_pane_t_ParamLimits

0xf618,	// (0x00036e43) list_double_graphic_heading_pane_t

0x869e,	// (0x0002fec9) list_double_time_pane_g1_ParamLimits

0x869e,	// (0x0002fec9) list_double_time_pane_g1

0xe8cc,	// (0x000360f7) list_double_time_pane_g2_ParamLimits

0xe8cc,	// (0x000360f7) list_double_time_pane_g2

0x0001,

0xf5d1,	// (0x00036dfc) list_double_time_pane_g_ParamLimits

0xf5d1,	// (0x00036dfc) list_double_time_pane_g

0xe92c,	// (0x00036157) list_double_time_pane_t1_ParamLimits

0xe92c,	// (0x00036157) list_double_time_pane_t1

0xe942,	// (0x0003616d) list_double_time_pane_t2_ParamLimits

0xe942,	// (0x0003616d) list_double_time_pane_t2

0xe954,	// (0x0003617f) list_double_time_pane_t3_ParamLimits

0xe954,	// (0x0003617f) list_double_time_pane_t3

0xe966,	// (0x00036191) list_double_time_pane_t4_ParamLimits

0xe966,	// (0x00036191) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00036e4f) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00036e4f) list_double_time_pane_t

0xe978,	// (0x000361a3) list_setting_pane_g1_ParamLimits

0xe978,	// (0x000361a3) list_setting_pane_g1

0xe984,	// (0x000361af) list_setting_pane_g2_ParamLimits

0xe984,	// (0x000361af) list_setting_pane_g2

0x0001,

0xf62d,	// (0x00036e58) list_setting_pane_g_ParamLimits

0xf62d,	// (0x00036e58) list_setting_pane_g

0x87e8,	// (0x00030013) list_setting_pane_t1_ParamLimits

0x87e8,	// (0x00030013) list_setting_pane_t1

0x87ff,	// (0x0003002a) list_setting_pane_t2_ParamLimits

0x87ff,	// (0x0003002a) list_setting_pane_t2

0x0002,

0xf632,	// (0x00036e5d) list_setting_pane_t_ParamLimits

0xf632,	// (0x00036e5d) list_setting_pane_t

0x883e,	// (0x00030069) set_value_pane_cp_ParamLimits

0x883e,	// (0x00030069) set_value_pane_cp

0xe990,	// (0x000361bb) list_setting_number_pane_g1_ParamLimits

0xe990,	// (0x000361bb) list_setting_number_pane_g1

0xe99c,	// (0x000361c7) list_setting_number_pane_g2_ParamLimits

0xe99c,	// (0x000361c7) list_setting_number_pane_g2

0x0001,

0xf639,	// (0x00036e64) list_setting_number_pane_g_ParamLimits

0xf639,	// (0x00036e64) list_setting_number_pane_g

0x884a,	// (0x00030075) list_setting_number_pane_t1_ParamLimits

0x884a,	// (0x00030075) list_setting_number_pane_t1

0xe9a8,	// (0x000361d3) list_setting_number_pane_t2_ParamLimits

0xe9a8,	// (0x000361d3) list_setting_number_pane_t2

0x885e,	// (0x00030089) list_setting_number_pane_t3_ParamLimits

0x885e,	// (0x00030089) list_setting_number_pane_t3

0x0003,

0xf63e,	// (0x00036e69) list_setting_number_pane_t_ParamLimits

0xf63e,	// (0x00036e69) list_setting_number_pane_t

0x883e,	// (0x00030069) set_value_pane_ParamLimits

0x883e,	// (0x00030069) set_value_pane

0xc64f,	// (0x00033e7a) bg_set_opt_pane_ParamLimits

0xc64f,	// (0x00033e7a) bg_set_opt_pane

0x8876,	// (0x000300a1) set_value_pane_t1

0xc670,	// (0x00033e9b) slider_set_pane_cp3

0x9722,	// (0x00030f4d) volume_small_pane_cp

0xc679,	// (0x00033ea4) list_form_gen_pane

0xc682,	// (0x00033ead) scroll_pane_cp8

0x8884,	// (0x000300af) form_field_data_pane_ParamLimits

0x8884,	// (0x000300af) form_field_data_pane

0x889b,	// (0x000300c6) form_field_data_wide_pane_ParamLimits

0x889b,	// (0x000300c6) form_field_data_wide_pane

0x88bb,	// (0x000300e6) form_field_popup_pane_ParamLimits

0x88bb,	// (0x000300e6) form_field_popup_pane

0x88d3,	// (0x000300fe) form_field_popup_wide_pane_ParamLimits

0x88d3,	// (0x000300fe) form_field_popup_wide_pane

0xe9fa,	// (0x00036225) form_field_slider_pane_ParamLimits

0xe9fa,	// (0x00036225) form_field_slider_pane

0x88f0,	// (0x0003011b) form_field_slider_wide_pane_ParamLimits

0x88f0,	// (0x0003011b) form_field_slider_wide_pane

0xc693,	// (0x00033ebe) data_form_pane

0x890d,	// (0x00030138) form_field_data_pane_t1

0xc69f,	// (0x00033eca) input_focus_pane

0x8927,	// (0x00030152) data_form_wide_pane

0x8944,	// (0x0003016f) form_field_data_wide_pane_t1

0xc593,	// (0x00033dbe) input_focus_pane_cp6

0x8966,	// (0x00030191) form_field_popup_pane_t1

0xc69f,	// (0x00033eca) input_focus_pane_cp7

0xc6cd,	// (0x00033ef8) list_form_pane

0x8988,	// (0x000301b3) form_field_popup_wide_pane_t1

0xc69f,	// (0x00033eca) input_focus_pane_cp8

0xc6d9,	// (0x00033f04) list_form_wide_pane

0x89a5,	// (0x000301d0) form_field_slider_pane_t1_ParamLimits

0x89a5,	// (0x000301d0) form_field_slider_pane_t1

0x89bd,	// (0x000301e8) form_field_slider_pane_t2_ParamLimits

0x89bd,	// (0x000301e8) form_field_slider_pane_t2

0x0001,

0xf64e,	// (0x00036e79) form_field_slider_pane_t_ParamLimits

0xf64e,	// (0x00036e79) form_field_slider_pane_t

0xc2db,	// (0x00033b06) input_focus_pane_cp9_ParamLimits

0xc2db,	// (0x00033b06) input_focus_pane_cp9

0x89d2,	// (0x000301fd) slider_cont_pane_ParamLimits

0x89d2,	// (0x000301fd) slider_cont_pane

0xc6e5,	// (0x00033f10) form_field_slider_wide_pane_t1_ParamLimits

0xc6e5,	// (0x00033f10) form_field_slider_wide_pane_t1

0x89e6,	// (0x00030211) form_field_slider_wide_pane_t2_ParamLimits

0x89e6,	// (0x00030211) form_field_slider_wide_pane_t2

0x0001,

0xf653,	// (0x00036e7e) form_field_slider_wide_pane_t_ParamLimits

0xf653,	// (0x00036e7e) form_field_slider_wide_pane_t

0xc2db,	// (0x00033b06) input_focus_pane_cp10_ParamLimits

0xc2db,	// (0x00033b06) input_focus_pane_cp10

0x89f8,	// (0x00030223) slider_cont_pane_cp1_ParamLimits

0x89f8,	// (0x00030223) slider_cont_pane_cp1

0x8a0c,	// (0x00030237) slider_form_pane_cp

0xc6f7,	// (0x00033f22) input_focus_pane_g1

0xc6ff,	// (0x00033f2a) input_focus_pane_g2

0xc707,	// (0x00033f32) input_focus_pane_g3

0xc70f,	// (0x00033f3a) input_focus_pane_g4

0xc717,	// (0x00033f42) input_focus_pane_g5

0xc71f,	// (0x00033f4a) input_focus_pane_g6

0xc727,	// (0x00033f52) input_focus_pane_g7

0xc72f,	// (0x00033f5a) input_focus_pane_g8

0xc737,	// (0x00033f62) input_focus_pane_g9

0xc283,	// (0x00033aae) input_focus_pane_g10

0x0009,

0xf658,	// (0x00036e83) input_focus_pane_g

0x13da,	// (0x00028c05) wait_border_pane_g3_copy1

0x8a14,	// (0x0003023f) data_form_pane_t1

0xc283,	// (0x00033aae) wait_anim_pane_g1_copy1

0x8b24,	// (0x0003034f) data_form_wide_pane_t1

0x8a2e,	// (0x00030259) list_form_graphic_pane_cp_ParamLimits

0x8a2e,	// (0x00030259) list_form_graphic_pane_cp

0x3661,	// (0x0002ae8c) slider_form_pane_g1

0x366a,	// (0x0002ae95) slider_form_pane_g2

0x0006,

0xf956,	// (0x00037181) slider_form_pane_g

0x8a2e,	// (0x00030259) list_form_graphic_pane_ParamLimits

0x8a2e,	// (0x00030259) list_form_graphic_pane

0x8a41,	// (0x0003026c) list_form_graphic_pane_g1

0x8a49,	// (0x00030274) list_form_graphic_pane_t1_ParamLimits

0x8a49,	// (0x00030274) list_form_graphic_pane_t1

0xc2e9,	// (0x00033b14) list_highlight_pane_cp5_ParamLimits

0xc2e9,	// (0x00033b14) list_highlight_pane_cp5

0x8a5e,	// (0x00030289) find_pane_g1

0xc73f,	// (0x00033f6a) input_find_pane

0x8a67,	// (0x00030292) input_find_pane_g1_ParamLimits

0x8a67,	// (0x00030292) input_find_pane_g1

0x8a73,	// (0x0003029e) input_find_pane_t1_ParamLimits

0x8a73,	// (0x0003029e) input_find_pane_t1

0x8a88,	// (0x000302b3) input_find_pane_t2_ParamLimits

0x8a88,	// (0x000302b3) input_find_pane_t2

0x0001,

0xf66d,	// (0x00036e98) input_find_pane_t_ParamLimits

0xf66d,	// (0x00036e98) input_find_pane_t

0xc748,	// (0x00033f73) input_focus_pane_cp5_ParamLimits

0xc748,	// (0x00033f73) input_focus_pane_cp5

0xc75b,	// (0x00033f86) bg_popup_window_pane_cp2_ParamLimits

0xc75b,	// (0x00033f86) bg_popup_window_pane_cp2

0xc768,	// (0x00033f93) listscroll_menu_pane_ParamLimits

0xc768,	// (0x00033f93) listscroll_menu_pane

0x9737,	// (0x00030f62) popup_submenu_window_ParamLimits

0x9737,	// (0x00030f62) popup_submenu_window

0xc774,	// (0x00033f9f) find_popup_pane_g1

0x975f,	// (0x00030f8a) input_popup_find_pane_cp

0xc77c,	// (0x00033fa7) input_focus_pane_cp4_ParamLimits

0xc77c,	// (0x00033fa7) input_focus_pane_cp4

0xc78a,	// (0x00033fb5) input_popup_find_pane_t1_ParamLimits

0xc78a,	// (0x00033fb5) input_popup_find_pane_t1

0xc28d,	// (0x00033ab8) bg_popup_sub_pane_cp

0xc7b8,	// (0x00033fe3) listscroll_popup_sub_pane

0xc7c0,	// (0x00033feb) list_submenu_pane_ParamLimits

0xc7c0,	// (0x00033feb) list_submenu_pane

0xc7d1,	// (0x00033ffc) scroll_pane_cp4

0x9777,	// (0x00030fa2) list_single_popup_submenu_pane_ParamLimits

0x9777,	// (0x00030fa2) list_single_popup_submenu_pane

0x978b,	// (0x00030fb6) list_single_popup_submenu_pane_g1

0x9793,	// (0x00030fbe) list_single_popup_submenu_pane_t1_ParamLimits

0x9793,	// (0x00030fbe) list_single_popup_submenu_pane_t1

0xc2db,	// (0x00033b06) bg_active_tab_pane_cp1_ParamLimits

0xc2db,	// (0x00033b06) bg_active_tab_pane_cp1

0xc7d9,	// (0x00034004) tabs_2_active_pane_g1

0x97a8,	// (0x00030fd3) tabs_2_active_pane_t1

0xc2db,	// (0x00033b06) bg_passive_tab_pane_cp1_ParamLimits

0xc2db,	// (0x00033b06) bg_passive_tab_pane_cp1

0xc7d9,	// (0x00034004) tabs_2_passive_pane_g1

0x97a8,	// (0x00030fd3) tabs_2_passive_pane_t1

0xc2e9,	// (0x00033b14) bg_active_tab_pane_cp4

0x97ba,	// (0x00030fe5) tabs_2_long_active_pane_t1

0xc7e1,	// (0x0003400c) bg_passive_tab_pane_cp4

0x0d03,	// (0x0002852e) list_single_midp_graphic_pane_g4_ParamLimits

0xc2e9,	// (0x00033b14) bg_active_tab_pane_cp5

0x97cd,	// (0x00030ff8) tabs_3_long_active_pane_t1

0xc7e1,	// (0x0003400c) bg_passive_tab_pane_cp5

0x0d03,	// (0x0002852e) list_single_midp_graphic_pane_g4

0xc2e9,	// (0x00033b14) bg_popup_window_pane_cp13_ParamLimits

0xc2e9,	// (0x00033b14) bg_popup_window_pane_cp13

0xc7ed,	// (0x00034018) listscroll_popup_fast_pane_ParamLimits

0xc7ed,	// (0x00034018) listscroll_popup_fast_pane

0xc7f9,	// (0x00034024) grid_popup_fast_pane_ParamLimits

0xc7f9,	// (0x00034024) grid_popup_fast_pane

0xc80b,	// (0x00034036) scroll_pane_cp9_ParamLimits

0xc80b,	// (0x00034036) scroll_pane_cp9

0x4f9a,	// (0x0002c7c5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4f9a,	// (0x0002c7c5) list_single_graphic_hl_pane_t1_cp2

0xc81e,	// (0x00034049) input_focus_pane_cp20_ParamLimits

0xc81e,	// (0x00034049) input_focus_pane_cp20

0xc82c,	// (0x00034057) query_popup_data_pane_t1_ParamLimits

0xc82c,	// (0x00034057) query_popup_data_pane_t1

0xc83f,	// (0x0003406a) query_popup_data_pane_t2_ParamLimits

0xc83f,	// (0x0003406a) query_popup_data_pane_t2

0xc885,	// (0x000340b0) query_popup_data_pane_t3_ParamLimits

0xc885,	// (0x000340b0) query_popup_data_pane_t3

0xc8c6,	// (0x000340f1) query_popup_data_pane_t4_ParamLimits

0xc8c6,	// (0x000340f1) query_popup_data_pane_t4

0xc902,	// (0x0003412d) query_popup_data_pane_t5_ParamLimits

0xc902,	// (0x0003412d) query_popup_data_pane_t5

0x0004,

0xf672,	// (0x00036e9d) query_popup_data_pane_t_ParamLimits

0xf672,	// (0x00036e9d) query_popup_data_pane_t

0xc6f7,	// (0x00033f22) bg_set_opt_pane_g1

0xc6ff,	// (0x00033f2a) bg_set_opt_pane_g2

0xc707,	// (0x00033f32) bg_set_opt_pane_g3

0xc70f,	// (0x00033f3a) bg_set_opt_pane_g4

0xc717,	// (0x00033f42) bg_set_opt_pane_g5

0xc71f,	// (0x00033f4a) bg_set_opt_pane_g6

0xc727,	// (0x00033f52) bg_set_opt_pane_g7

0xc72f,	// (0x00033f5a) bg_set_opt_pane_g8

0xc737,	// (0x00033f62) bg_set_opt_pane_g9

0x0008,

0xf67d,	// (0x00036ea8) bg_set_opt_pane_g

0xf33f,	// (0x00036b6a) control_top_pane_stacon_ParamLimits

0xf33f,	// (0x00036b6a) control_top_pane_stacon

0xf392,	// (0x00036bbd) signal_pane_stacon_ParamLimits

0xf392,	// (0x00036bbd) signal_pane_stacon

0xcc8e,	// (0x000344b9) stacon_top_pane_g1_ParamLimits

0xcc8e,	// (0x000344b9) stacon_top_pane_g1

0xf3b7,	// (0x00036be2) title_pane_stacon_ParamLimits

0xf3b7,	// (0x00036be2) title_pane_stacon

0xf3e1,	// (0x00036c0c) uni_indicator_pane_stacon_ParamLimits

0xf3e1,	// (0x00036c0c) uni_indicator_pane_stacon

0xf3f6,	// (0x00036c21) battery_pane_stacon_ParamLimits

0xf3f6,	// (0x00036c21) battery_pane_stacon

0xf43a,	// (0x00036c65) control_bottom_pane_stacon_ParamLimits

0xf43a,	// (0x00036c65) control_bottom_pane_stacon

0xf45d,	// (0x00036c88) navi_pane_stacon_ParamLimits

0xf45d,	// (0x00036c88) navi_pane_stacon

0xccb0,	// (0x000344db) stacon_bottom_pane_g1_ParamLimits

0xccb0,	// (0x000344db) stacon_bottom_pane_g1

0xf102,	// (0x0003692d) aid_levels_signal_lsc_ParamLimits

0xf102,	// (0x0003692d) aid_levels_signal_lsc

0xf118,	// (0x00036943) signal_pane_stacon_g1_ParamLimits

0xf118,	// (0x00036943) signal_pane_stacon_g1

0xf12c,	// (0x00036957) signal_pane_stacon_g2_ParamLimits

0xf12c,	// (0x00036957) signal_pane_stacon_g2

0x0001,

0xf690,	// (0x00036ebb) signal_pane_stacon_g_ParamLimits

0xf690,	// (0x00036ebb) signal_pane_stacon_g

0xf161,	// (0x0003698c) title_pane_stacon_t1_ParamLimits

0xf161,	// (0x0003698c) title_pane_stacon_t1

0xc946,	// (0x00034171) uni_indicator_pane_stacon_g1

0xc950,	// (0x0003417b) uni_indicator_pane_stacon_g2

0xc95a,	// (0x00034185) uni_indicator_pane_stacon_g3

0xc964,	// (0x0003418f) uni_indicator_pane_stacon_g4

0x0003,

0xf69c,	// (0x00036ec7) uni_indicator_pane_stacon_g

0xf186,	// (0x000369b1) control_top_pane_stacon_g1

0xf18e,	// (0x000369b9) control_top_pane_stacon_t1_ParamLimits

0xf18e,	// (0x000369b9) control_top_pane_stacon_t1

0xf1c5,	// (0x000369f0) aid_levels_battery_lsc_ParamLimits

0xf1c5,	// (0x000369f0) aid_levels_battery_lsc

0xf1dc,	// (0x00036a07) battery_pane_stacon_g1_ParamLimits

0xf1dc,	// (0x00036a07) battery_pane_stacon_g1

0xf1ef,	// (0x00036a1a) battery_pane_stacon_g2_ParamLimits

0xf1ef,	// (0x00036a1a) battery_pane_stacon_g2

0x0001,

0xf6a5,	// (0x00036ed0) battery_pane_stacon_g_ParamLimits

0xf6a5,	// (0x00036ed0) battery_pane_stacon_g

0xf22d,	// (0x00036a58) navi_icon_pane_stacon

0xf241,	// (0x00036a6c) navi_navi_pane_stacon

0xf22d,	// (0x00036a58) navi_text_pane_stacon

0xf186,	// (0x000369b1) control_bottom_pane_stacon_g1

0xf255,	// (0x00036a80) control_bottom_pane_stacon_t1_ParamLimits

0xf255,	// (0x00036a80) control_bottom_pane_stacon_t1

0x97f9,	// (0x00031024) grid_app_pane_ParamLimits

0x97f9,	// (0x00031024) grid_app_pane

0x9831,	// (0x0003105c) scroll_pane_cp15_ParamLimits

0x9831,	// (0x0003105c) scroll_pane_cp15

0x9846,	// (0x00031071) cell_app_pane_ParamLimits

0x9846,	// (0x00031071) cell_app_pane

0x988b,	// (0x000310b6) cell_app_pane_g1_ParamLimits

0x988b,	// (0x000310b6) cell_app_pane_g1

0xc988,	// (0x000341b3) cell_app_pane_g2_ParamLimits

0xc988,	// (0x000341b3) cell_app_pane_g2

0x0001,

0xf6aa,	// (0x00036ed5) cell_app_pane_g_ParamLimits

0xf6aa,	// (0x00036ed5) cell_app_pane_g

0x98af,	// (0x000310da) cell_app_pane_t1_ParamLimits

0x98af,	// (0x000310da) cell_app_pane_t1

0xc994,	// (0x000341bf) grid_highlight_pane_ParamLimits

0xc994,	// (0x000341bf) grid_highlight_pane

0xc6f7,	// (0x00033f22) cell_highlight_pane_g1

0xc6ff,	// (0x00033f2a) cell_highlight_pane_g2

0xc707,	// (0x00033f32) cell_highlight_pane_g3

0xc70f,	// (0x00033f3a) cell_highlight_pane_g4

0xc717,	// (0x00033f42) cell_highlight_pane_g5

0xc71f,	// (0x00033f4a) cell_highlight_pane_g6

0xc727,	// (0x00033f52) cell_highlight_pane_g7

0xc72f,	// (0x00033f5a) cell_highlight_pane_g8

0xc737,	// (0x00033f62) cell_highlight_pane_g9

0xc283,	// (0x00033aae) cell_highlight_pane_g10

0x0009,

0xf658,	// (0x00036e83) cell_highlight_pane_g

0xc9a5,	// (0x000341d0) bg_scroll_pane

0x98cf,	// (0x000310fa) scroll_handle_pane

0xc9ec,	// (0x00034217) scroll_bg_pane_g1

0xca01,	// (0x0003422c) scroll_bg_pane_g2

0xca19,	// (0x00034244) scroll_bg_pane_g3

0x0002,

0xf6af,	// (0x00036eda) scroll_bg_pane_g

0x98e3,	// (0x0003110e) scroll_handle_focus_pane_ParamLimits

0x98e3,	// (0x0003110e) scroll_handle_focus_pane

0xc9ec,	// (0x00034217) scroll_handle_pane_g1

0xca2e,	// (0x00034259) scroll_handle_pane_g2

0xca19,	// (0x00034244) scroll_handle_pane_g3

0x0002,

0xf6b6,	// (0x00036ee1) scroll_handle_pane_g

0xc77c,	// (0x00033fa7) bg_popup_sub_pane_cp21_ParamLimits

0xc77c,	// (0x00033fa7) bg_popup_sub_pane_cp21

0x98f0,	// (0x0003111b) popup_fep_japan_predictive_window_t1_ParamLimits

0x98f0,	// (0x0003111b) popup_fep_japan_predictive_window_t1

0x9907,	// (0x00031132) popup_fep_japan_predictive_window_t2_ParamLimits

0x9907,	// (0x00031132) popup_fep_japan_predictive_window_t2

0x993a,	// (0x00031165) popup_fep_japan_predictive_window_t3_ParamLimits

0x993a,	// (0x00031165) popup_fep_japan_predictive_window_t3

0x0002,

0xf6bd,	// (0x00036ee8) popup_fep_japan_predictive_window_t_ParamLimits

0xf6bd,	// (0x00036ee8) popup_fep_japan_predictive_window_t

0xc28d,	// (0x00033ab8) bg_popup_sub_pane_cp23

0x9971,	// (0x0003119c) listscroll_japin_cand_pane

0xca42,	// (0x0003426d) popup_fep_japan_candidate_window_t1

0xca50,	// (0x0003427b) candidate_pane_ParamLimits

0xca50,	// (0x0003427b) candidate_pane

0x9979,	// (0x000311a4) scroll_pane_cp30

0xca62,	// (0x0003428d) list_single_popup_jap_candidate_pane_ParamLimits

0xca62,	// (0x0003428d) list_single_popup_jap_candidate_pane

0xc28d,	// (0x00033ab8) list_highlight_pane_cp30

0xca77,	// (0x000342a2) list_single_popup_jap_candidate_pane_t1

0xca86,	// (0x000342b1) level_1_signal

0xca93,	// (0x000342be) level_2_signal

0xcaa0,	// (0x000342cb) level_3_signal

0xcaad,	// (0x000342d8) level_4_signal

0xcaba,	// (0x000342e5) level_5_signal

0xcac7,	// (0x000342f2) level_6_signal

0xcad4,	// (0x000342ff) level_7_signal

0xca86,	// (0x000342b1) level_1_battery

0xca93,	// (0x000342be) level_2_battery

0xcaa0,	// (0x000342cb) level_3_battery

0xcaad,	// (0x000342d8) level_4_battery

0xcaba,	// (0x000342e5) level_5_battery

0xcac7,	// (0x000342f2) level_6_battery

0xcad4,	// (0x000342ff) level_7_battery

0xcaf9,	// (0x00034324) list_menu_pane_ParamLimits

0xcaf9,	// (0x00034324) list_menu_pane

0xcb0f,	// (0x0003433a) scroll_pane_cp25_ParamLimits

0xcb0f,	// (0x0003433a) scroll_pane_cp25

0x9981,	// (0x000311ac) list_double2_graphic_pane_cp2_ParamLimits

0x9981,	// (0x000311ac) list_double2_graphic_pane_cp2

0x9981,	// (0x000311ac) list_double2_large_graphic_pane_cp2_ParamLimits

0x9981,	// (0x000311ac) list_double2_large_graphic_pane_cp2

0x9981,	// (0x000311ac) list_double2_pane_cp2_ParamLimits

0x9981,	// (0x000311ac) list_double2_pane_cp2

0x9981,	// (0x000311ac) list_double_graphic_pane_cp2_ParamLimits

0x9981,	// (0x000311ac) list_double_graphic_pane_cp2

0x9981,	// (0x000311ac) list_double_large_graphic_pane_cp2_ParamLimits

0x9981,	// (0x000311ac) list_double_large_graphic_pane_cp2

0x9981,	// (0x000311ac) list_double_number_pane_cp2_ParamLimits

0x9981,	// (0x000311ac) list_double_number_pane_cp2

0x9981,	// (0x000311ac) list_double_pane_cp2_ParamLimits

0x9981,	// (0x000311ac) list_double_pane_cp2

0x9990,	// (0x000311bb) list_single_2graphic_pane_cp2_ParamLimits

0x9990,	// (0x000311bb) list_single_2graphic_pane_cp2

0x9990,	// (0x000311bb) list_single_graphic_heading_pane_cp2_ParamLimits

0x9990,	// (0x000311bb) list_single_graphic_heading_pane_cp2

0x9990,	// (0x000311bb) list_single_graphic_pane_cp2_ParamLimits

0x9990,	// (0x000311bb) list_single_graphic_pane_cp2

0x9990,	// (0x000311bb) list_single_heading_pane_cp2_ParamLimits

0x9990,	// (0x000311bb) list_single_heading_pane_cp2

0xcb38,	// (0x00034363) list_single_large_graphic_pane_cp2_ParamLimits

0xcb38,	// (0x00034363) list_single_large_graphic_pane_cp2

0x9990,	// (0x000311bb) list_single_number_heading_pane_cp2_ParamLimits

0x9990,	// (0x000311bb) list_single_number_heading_pane_cp2

0x9990,	// (0x000311bb) list_single_number_pane_cp2_ParamLimits

0x9990,	// (0x000311bb) list_single_number_pane_cp2

0x99a2,	// (0x000311cd) list_single_pane_cp2_ParamLimits

0x99a2,	// (0x000311cd) list_single_pane_cp2

0xcb52,	// (0x0003437d) bg_popup_sub_pane_cp22

0xf325,	// (0x00036b50) popup_side_volume_key_window_g1

0xf331,	// (0x00036b5c) popup_side_volume_key_window_t1

0x9a6a,	// (0x00031295) volume_small_pane_cp1

0xc2db,	// (0x00033b06) bg_popup_sub_pane_cp24_ParamLimits

0xc2db,	// (0x00033b06) bg_popup_sub_pane_cp24

0xcb68,	// (0x00034393) fep_china_uni_candidate_pane_ParamLimits

0xcb68,	// (0x00034393) fep_china_uni_candidate_pane

0xcb7c,	// (0x000343a7) fep_china_uni_entry_pane

0xcb8c,	// (0x000343b7) popup_fep_china_uni_window_g1

0x9a72,	// (0x0003129d) fep_china_uni_entry_pane_g1

0x9a7a,	// (0x000312a5) fep_china_uni_entry_pane_g2

0x0001,

0xf6ee,	// (0x00036f19) fep_china_uni_entry_pane_g

0xcba8,	// (0x000343d3) fep_entry_item_pane

0xcbb2,	// (0x000343dd) fep_candidate_item_pane

0x9a82,	// (0x000312ad) fep_china_uni_candidate_pane_g1

0xcbba,	// (0x000343e5) fep_china_uni_candidate_pane_g2

0xcbc2,	// (0x000343ed) fep_china_uni_candidate_pane_g3

0x9a8a,	// (0x000312b5) fep_china_uni_candidate_pane_g4

0x0003,

0xf6f3,	// (0x00036f1e) fep_china_uni_candidate_pane_g

0xc283,	// (0x00033aae) fep_entry_item_pane_g1

0xcbca,	// (0x000343f5) fep_entry_item_pane_t1_ParamLimits

0xcbca,	// (0x000343f5) fep_entry_item_pane_t1

0xcbe0,	// (0x0003440b) fep_candidate_item_pane_t1_ParamLimits

0xcbe0,	// (0x0003440b) fep_candidate_item_pane_t1

0xcbf5,	// (0x00034420) fep_candidate_item_pane_t2_ParamLimits

0xcbf5,	// (0x00034420) fep_candidate_item_pane_t2

0x0001,

0xf6fc,	// (0x00036f27) fep_candidate_item_pane_t_ParamLimits

0xf6fc,	// (0x00036f27) fep_candidate_item_pane_t

0xc2e9,	// (0x00033b14) list_highlight_pane_cp31_ParamLimits

0xc2e9,	// (0x00033b14) list_highlight_pane_cp31

0xcc07,	// (0x00034432) level_1_signal_lsc

0xcc10,	// (0x0003443b) level_2_signal_lsc

0xcc19,	// (0x00034444) level_3_signal_lsc

0xcc22,	// (0x0003444d) level_4_signal_lsc

0xcc2b,	// (0x00034456) level_5_signal_lsc

0xcc34,	// (0x0003445f) level_6_signal_lsc

0xcc3d,	// (0x00034468) level_7_signal_lsc

0xcc3d,	// (0x00034468) level_1_battery_lsc

0xcc46,	// (0x00034471) level_2_battery_lsc

0xcc4f,	// (0x0003447a) level_3_battery_lsc

0xcc58,	// (0x00034483) level_4_battery_lsc

0xcc61,	// (0x0003448c) level_5_battery_lsc

0xcc6a,	// (0x00034495) level_6_battery_lsc

0xcc07,	// (0x00034432) level_7_battery_lsc

0xcc73,	// (0x0003449e) scroll_handle_focus_pane_g1

0xcc7c,	// (0x000344a7) scroll_handle_focus_pane_g2

0xcc85,	// (0x000344b0) scroll_handle_focus_pane_g3

0x0002,

0xf701,	// (0x00036f2c) scroll_handle_focus_pane_g

0x8a9d,	// (0x000302c8) list_single_2graphic_pane_g1_ParamLimits

0x8a9d,	// (0x000302c8) list_single_2graphic_pane_g1

0x864b,	// (0x0002fe76) list_single_2graphic_pane_g2_ParamLimits

0x864b,	// (0x0002fe76) list_single_2graphic_pane_g2

0xe83a,	// (0x00036065) list_single_2graphic_pane_g3_ParamLimits

0xe83a,	// (0x00036065) list_single_2graphic_pane_g3

0x8aa9,	// (0x000302d4) list_single_2graphic_pane_g4_ParamLimits

0x8aa9,	// (0x000302d4) list_single_2graphic_pane_g4

0x0003,

0xf708,	// (0x00036f33) list_single_2graphic_pane_g_ParamLimits

0xf708,	// (0x00036f33) list_single_2graphic_pane_g

0x8aba,	// (0x000302e5) list_single_2graphic_pane_t1_ParamLimits

0x8aba,	// (0x000302e5) list_single_2graphic_pane_t1

0x8ae8,	// (0x00030313) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8ae8,	// (0x00030313) list_double2_graphic_large_graphic_pane_g1

0x869e,	// (0x0002fec9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x869e,	// (0x0002fec9) list_double2_graphic_large_graphic_pane_g2

0xe8cc,	// (0x000360f7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe8cc,	// (0x000360f7) list_double2_graphic_large_graphic_pane_g3

0xea0d,	// (0x00036238) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xea0d,	// (0x00036238) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf711,	// (0x00036f3c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf711,	// (0x00036f3c) list_double2_graphic_large_graphic_pane_g

0xea19,	// (0x00036244) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xea19,	// (0x00036244) list_double2_graphic_large_graphic_pane_t1

0xea2f,	// (0x0003625a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xea2f,	// (0x0003625a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf71a,	// (0x00036f45) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf71a,	// (0x00036f45) list_double2_graphic_large_graphic_pane_t

0x9b05,	// (0x00031330) popup_fast_swap_window_ParamLimits

0x9b05,	// (0x00031330) popup_fast_swap_window

0x9b21,	// (0x0003134c) popup_side_volume_key_window

0xcd3b,	// (0x00034566) stacon_top_pane

0xcd45,	// (0x00034570) status_pane_ParamLimits

0xcd45,	// (0x00034570) status_pane

0xc279,	// (0x00033aa4) status_small_pane

0xc28d,	// (0x00033ab8) control_pane

0xc28d,	// (0x00033ab8) stacon_bottom_pane

0xc682,	// (0x00033ead) scroll_pane_cp121

0xc679,	// (0x00033ea4) set_content_pane

0x9a92,	// (0x000312bd) bg_active_tab_pane_g1_cp1

0x9a9b,	// (0x000312c6) bg_active_tab_pane_g2_cp1

0x9aa4,	// (0x000312cf) bg_active_tab_pane_g3_cp1

0x9a92,	// (0x000312bd) bg_passive_tab_pane_g1_cp1

0x9a9b,	// (0x000312c6) bg_passive_tab_pane_g2_cp1

0x9aa4,	// (0x000312cf) bg_passive_tab_pane_g3_cp1

0x9aad,	// (0x000312d8) bg_active_tab_pane_g1_cp2

0x9a9b,	// (0x000312c6) bg_active_tab_pane_g2_cp2

0x9ab6,	// (0x000312e1) bg_active_tab_pane_g3_cp2

0x9aad,	// (0x000312d8) bg_passive_tab_pane_g1_cp2

0x9a9b,	// (0x000312c6) bg_passive_tab_pane_g2_cp2

0x9ab6,	// (0x000312e1) bg_passive_tab_pane_g3_cp2

0x9abf,	// (0x000312ea) bg_active_tab_pane_g1_cp3

0x9a9b,	// (0x000312c6) bg_active_tab_pane_g2_cp3

0x9ac8,	// (0x000312f3) bg_active_tab_pane_g3_cp3

0x9abf,	// (0x000312ea) bg_passive_tab_pane_g1_cp3

0x9a9b,	// (0x000312c6) bg_passive_tab_pane_g2_cp3

0x9ac8,	// (0x000312f3) bg_passive_tab_pane_g3_cp3

0x9ad1,	// (0x000312fc) bg_active_tab_pane_g1_cp4

0x9a9b,	// (0x000312c6) bg_active_tab_pane_g2_cp4

0x9adc,	// (0x00031307) bg_active_tab_pane_g3_cp4

0x9ad1,	// (0x000312fc) bg_passive_tab_pane_g1_cp4

0x9a9b,	// (0x000312c6) bg_passive_tab_pane_g2_cp4

0x9adc,	// (0x00031307) bg_passive_tab_pane_g3_cp4

0x9ae7,	// (0x00031312) bg_active_tab_pane_g1_cp5

0x9a9b,	// (0x000312c6) bg_active_tab_pane_g2_cp5

0x9af0,	// (0x0003131b) bg_active_tab_pane_g3_cp5

0x9ae7,	// (0x00031312) bg_passive_tab_pane_g1_cp5

0x9a9b,	// (0x000312c6) bg_passive_tab_pane_g2_cp5

0x9af0,	// (0x0003131b) bg_passive_tab_pane_g3_cp5

0x3c71,	// (0x0002b49c) list_set_graphic_pane_ParamLimits

0x3c71,	// (0x0002b49c) list_set_graphic_pane

0xc28d,	// (0x00033ab8) bg_set_opt_pane_cp4

0xcccc,	// (0x000344f7) list_set_graphic_pane_g1_ParamLimits

0xcccc,	// (0x000344f7) list_set_graphic_pane_g1

0xccd8,	// (0x00034503) list_set_graphic_pane_g2_ParamLimits

0xccd8,	// (0x00034503) list_set_graphic_pane_g2

0x0001,

0xf71f,	// (0x00036f4a) list_set_graphic_pane_g_ParamLimits

0xf71f,	// (0x00036f4a) list_set_graphic_pane_g

0x0009,

0xfab0,	// (0x000372db) volume_small_pane_cp_g

0x9af9,	// (0x00031324) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9af9,	// (0x00031324) list_double2_large_graphic_pane_g1_cp2

0xccfa,	// (0x00034525) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xccfa,	// (0x00034525) list_double2_large_graphic_pane_g2_cp2

0xcd0b,	// (0x00034536) list_double2_large_graphic_pane_g3_cp2

0xcd13,	// (0x0003453e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xcd13,	// (0x0003453e) list_double2_large_graphic_pane_t1_cp2

0xcd29,	// (0x00034554) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xcd29,	// (0x00034554) list_double2_large_graphic_pane_t2_cp2

0xb019,	// (0x00032844) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb019,	// (0x00032844) list_double_large_graphic_pane_g1_cp2

0x3234,	// (0x0002aa5f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3234,	// (0x0002aa5f) list_double_large_graphic_pane_g2_cp2

0xce61,	// (0x0003468c) list_double_large_graphic_pane_g3_cp2

0x3245,	// (0x0002aa70) list_double_large_graphic_pane_g4_cp

0x324d,	// (0x0002aa78) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x324d,	// (0x0002aa78) list_double_large_graphic_pane_t1_cp2

0x3264,	// (0x0002aa8f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3264,	// (0x0002aa8f) list_double_large_graphic_pane_t2_cp2

0xcd53,	// (0x0003457e) list_double2_graphic_pane_g1_cp2_ParamLimits

0xcd53,	// (0x0003457e) list_double2_graphic_pane_g1_cp2

0xcd61,	// (0x0003458c) list_double2_graphic_pane_g2_cp2_ParamLimits

0xcd61,	// (0x0003458c) list_double2_graphic_pane_g2_cp2

0xcd72,	// (0x0003459d) list_double2_graphic_pane_g3_cp2

0xcd7c,	// (0x000345a7) list_double2_graphic_pane_t1_cp2_ParamLimits

0xcd7c,	// (0x000345a7) list_double2_graphic_pane_t1_cp2

0xcd92,	// (0x000345bd) list_double2_graphic_pane_t2_cp2_ParamLimits

0xcd92,	// (0x000345bd) list_double2_graphic_pane_t2_cp2

0xcda4,	// (0x000345cf) list_single_number_heading_pane_g1_cp2_ParamLimits

0xcda4,	// (0x000345cf) list_single_number_heading_pane_g1_cp2

0xcdb0,	// (0x000345db) list_single_number_heading_pane_g2_cp2

0xcdb8,	// (0x000345e3) list_single_number_heading_pane_t1_cp2_ParamLimits

0xcdb8,	// (0x000345e3) list_single_number_heading_pane_t1_cp2

0xcdce,	// (0x000345f9) list_single_number_heading_pane_t2_cp2_ParamLimits

0xcdce,	// (0x000345f9) list_single_number_heading_pane_t2_cp2

0xcde0,	// (0x0003460b) list_single_number_heading_pane_t3_cp2_ParamLimits

0xcde0,	// (0x0003460b) list_single_number_heading_pane_t3_cp2

0xcda4,	// (0x000345cf) list_single_heading_pane_g1_cp2_ParamLimits

0xcda4,	// (0x000345cf) list_single_heading_pane_g1_cp2

0xcdb0,	// (0x000345db) list_single_heading_pane_g2_cp2

0xcdb8,	// (0x000345e3) list_single_heading_pane_t1_cp2_ParamLimits

0xcdb8,	// (0x000345e3) list_single_heading_pane_t1_cp2

0x302d,	// (0x0002a858) list_single_heading_pane_t2_cp2_ParamLimits

0x302d,	// (0x0002a858) list_single_heading_pane_t2_cp2

0x2f75,	// (0x0002a7a0) list_double_graphic_pane_g1_cp2_ParamLimits

0x2f75,	// (0x0002a7a0) list_double_graphic_pane_g1_cp2

0x2f81,	// (0x0002a7ac) list_double_graphic_pane_g2_cp2_ParamLimits

0x2f81,	// (0x0002a7ac) list_double_graphic_pane_g2_cp2

0x2f90,	// (0x0002a7bb) list_double_graphic_pane_g3_cp2

0x2f98,	// (0x0002a7c3) list_double_graphic_pane_t1_cp2_ParamLimits

0x2f98,	// (0x0002a7c3) list_double_graphic_pane_t1_cp2

0x2fae,	// (0x0002a7d9) list_double_graphic_pane_t2_cp2_ParamLimits

0x2fae,	// (0x0002a7d9) list_double_graphic_pane_t2_cp2

0xce55,	// (0x00034680) list_double_number_pane_g1_cp2_ParamLimits

0xce55,	// (0x00034680) list_double_number_pane_g1_cp2

0xce61,	// (0x0003468c) list_double_number_pane_g2_cp2

0x2f39,	// (0x0002a764) list_double_number_pane_t1_cp2_ParamLimits

0x2f39,	// (0x0002a764) list_double_number_pane_t1_cp2

0x2f4d,	// (0x0002a778) list_double_number_pane_t2_cp2_ParamLimits

0x2f4d,	// (0x0002a778) list_double_number_pane_t2_cp2

0x2f63,	// (0x0002a78e) list_double_number_pane_t3_cp2_ParamLimits

0x2f63,	// (0x0002a78e) list_double_number_pane_t3_cp2

0x2e22,	// (0x0002a64d) list_single_graphic_pane_g1_cp2_ParamLimits

0x2e22,	// (0x0002a64d) list_single_graphic_pane_g1_cp2

0xceba,	// (0x000346e5) list_single_graphic_pane_g2_cp2_ParamLimits

0xceba,	// (0x000346e5) list_single_graphic_pane_g2_cp2

0xcec6,	// (0x000346f1) list_single_graphic_pane_g3_cp2

0x2df8,	// (0x0002a623) list_single_graphic_pane_t1_cp2_ParamLimits

0x2df8,	// (0x0002a623) list_single_graphic_pane_t1_cp2

0xceba,	// (0x000346e5) list_single_number_pane_g1_cp2_ParamLimits

0xceba,	// (0x000346e5) list_single_number_pane_g1_cp2

0xcec6,	// (0x000346f1) list_single_number_pane_g2_cp2

0x2df8,	// (0x0002a623) list_single_number_pane_t1_cp2_ParamLimits

0x2df8,	// (0x0002a623) list_single_number_pane_t1_cp2

0x2e0e,	// (0x0002a639) list_single_number_pane_t2_cp2_ParamLimits

0x2e0e,	// (0x0002a639) list_single_number_pane_t2_cp2

0xccfa,	// (0x00034525) list_double2_pane_g1_cp2_ParamLimits

0xccfa,	// (0x00034525) list_double2_pane_g1_cp2

0xcd0b,	// (0x00034536) list_double2_pane_g2_cp2

0xce2d,	// (0x00034658) list_double2_pane_t1_cp2_ParamLimits

0xce2d,	// (0x00034658) list_double2_pane_t1_cp2

0xce43,	// (0x0003466e) list_double2_pane_t2_cp2_ParamLimits

0xce43,	// (0x0003466e) list_double2_pane_t2_cp2

0xce55,	// (0x00034680) list_double_pane_g1_cp2_ParamLimits

0xce55,	// (0x00034680) list_double_pane_g1_cp2

0xce61,	// (0x0003468c) list_double_pane_g2_cp2

0xce69,	// (0x00034694) list_double_pane_t1_cp2_ParamLimits

0xce69,	// (0x00034694) list_double_pane_t1_cp2

0xce7f,	// (0x000346aa) list_double_pane_t2_cp2_ParamLimits

0xce7f,	// (0x000346aa) list_double_pane_t2_cp2

0x9b3b,	// (0x00031366) list_single_pane_cp2_g3

0xceba,	// (0x000346e5) list_single_pane_g1_cp2_ParamLimits

0xceba,	// (0x000346e5) list_single_pane_g1_cp2

0xcec6,	// (0x000346f1) list_single_pane_g2_cp2

0xcece,	// (0x000346f9) list_single_pane_t1_cp2_ParamLimits

0xcece,	// (0x000346f9) list_single_pane_t1_cp2

0x9b43,	// (0x0003136e) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9b43,	// (0x0003136e) list_single_large_graphic_pane_g1_cp2

0xcee6,	// (0x00034711) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xcee6,	// (0x00034711) list_single_large_graphic_pane_g2_cp2

0xcef2,	// (0x0003471d) list_single_large_graphic_pane_g3_cp2

0x9b4f,	// (0x0003137a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9b4f,	// (0x0003137a) list_single_large_graphic_pane_g4_cp1

0xcefa,	// (0x00034725) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xcefa,	// (0x00034725) list_single_large_graphic_pane_t1_cp2

0x2dc4,	// (0x0002a5ef) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2dc4,	// (0x0002a5ef) list_single_graphic_heading_pane_g1_cp2

0x2d91,	// (0x0002a5bc) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2d91,	// (0x0002a5bc) list_single_graphic_heading_pane_g4_cp2

0xcec6,	// (0x000346f1) list_single_graphic_heading_pane_g5_cp2

0x2dd0,	// (0x0002a5fb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2dd0,	// (0x0002a5fb) list_single_graphic_heading_pane_t1_cp2

0x2de6,	// (0x0002a611) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2de6,	// (0x0002a611) list_single_graphic_heading_pane_t2_cp2

0x2d85,	// (0x0002a5b0) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2d85,	// (0x0002a5b0) list_single_2graphic_pane_g1_cp2

0x2d91,	// (0x0002a5bc) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2d91,	// (0x0002a5bc) list_single_2graphic_pane_g2_cp2

0xcec6,	// (0x000346f1) list_single_2graphic_pane_g3_cp2

0x2da2,	// (0x0002a5cd) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2da2,	// (0x0002a5cd) list_single_2graphic_pane_g4_cp2

0x2dae,	// (0x0002a5d9) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2dae,	// (0x0002a5d9) list_single_2graphic_pane_t1_cp2

0xc283,	// (0x00033aae) list_highlight_pane_g10_cp1

0x296d,	// (0x0002a198) list_highlight_pane_g1_cp1

0x2975,	// (0x0002a1a0) list_highlight_pane_g2_cp1

0x297d,	// (0x0002a1a8) list_highlight_pane_g3_cp1

0x2985,	// (0x0002a1b0) list_highlight_pane_g4_cp1

0x298d,	// (0x0002a1b8) list_highlight_pane_g5_cp1

0x2995,	// (0x0002a1c0) list_highlight_pane_g6_cp1

0x299d,	// (0x0002a1c8) list_highlight_pane_g7_cp1

0x29a5,	// (0x0002a1d0) list_highlight_pane_g8_cp1

0x29ad,	// (0x0002a1d8) list_highlight_pane_g9_cp1

0xada6,	// (0x000325d1) form_field_slider_pane_t3

0xadb4,	// (0x000325df) form_field_slider_pane_t4

0x1519,	// (0x00028d44) slider_form_pane_ParamLimits

0x1519,	// (0x00028d44) slider_form_pane

0xc28d,	// (0x00033ab8) control_abbreviations

0xc28d,	// (0x00033ab8) control_conventions

0xc28d,	// (0x00033ab8) control_definitions

0xc28d,	// (0x00033ab8) format_table_attribute

0xaff0,	// (0x0003281b) bg_popup_preview_window_pane_g9

0xc28d,	// (0x00033ab8) format_table_data2

0xc28d,	// (0x00033ab8) format_table_data3

0xc28d,	// (0x00033ab8) format_table_data_example

0x0008,

0xc28d,	// (0x00033ab8) intro_purpose

0xf8b6,	// (0x000370e1) bg_popup_preview_window_pane_g

0xc28d,	// (0x00033ab8) texts_category

0xc28d,	// (0x00033ab8) texts_graphics

0xcf10,	// (0x0003473b) text_digital

0xcf1f,	// (0x0003474a) text_primary

0xcf2e,	// (0x00034759) text_primary_small

0xcf3d,	// (0x00034768) text_secondary

0xcf4c,	// (0x00034777) text_title

0xb41b,	// (0x00032c46) bg_passive_tab_pane_g1_cp3_srt

0x9a9b,	// (0x000312c6) bg_passive_tab_pane_g2_cp3_srt

0xb424,	// (0x00032c4f) bg_passive_tab_pane_g3_cp3_srt

0xc2db,	// (0x00033b06) bg_active_tab_pane_cp3_srt_ParamLimits

0xc2db,	// (0x00033b06) bg_active_tab_pane_cp3_srt

0xb42d,	// (0x00032c58) tabs_4_active_pane_srt_g1

0xb435,	// (0x00032c60) tabs_4_active_pane_srt_t1_ParamLimits

0xb435,	// (0x00032c60) tabs_4_active_pane_srt_t1

0xb41b,	// (0x00032c46) bg_active_tab_pane_g1_cp3_copy1

0x9a9b,	// (0x000312c6) bg_active_tab_pane_g2_cp3_copy1

0xb424,	// (0x00032c4f) bg_active_tab_pane_g3_cp3_copy1

0xc2e9,	// (0x00033b14) tabs_2_long_active_pane_srt_ParamLimits

0xc2e9,	// (0x00033b14) tabs_2_long_active_pane_srt

0xc2e9,	// (0x00033b14) tabs_2_long_passive_pane_srt_ParamLimits

0xc2e9,	// (0x00033b14) tabs_2_long_passive_pane_srt

0xc7e1,	// (0x0003400c) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc7e1,	// (0x0003400c) bg_passive_tab_pane_cp4_srt

0xb160,	// (0x0003298b) bg_passive_tab_pane_g1_cp4_srt

0x9a9b,	// (0x000312c6) bg_passive_tab_pane_g2_cp4_srt

0xb169,	// (0x00032994) bg_passive_tab_pane_g3_cp4_srt

0xc2e9,	// (0x00033b14) bg_active_tab_pane_cp4_srt_ParamLimits

0xc2e9,	// (0x00033b14) bg_active_tab_pane_cp4_srt

0xb172,	// (0x0003299d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb172,	// (0x0003299d) tabs_2_long_active_pane_srt_t1

0xb160,	// (0x0003298b) bg_active_tab_pane_g1_cp4_srt

0x9a9b,	// (0x000312c6) bg_active_tab_pane_g2_cp4_srt

0xb169,	// (0x00032994) bg_active_tab_pane_g3_cp4_srt

0xc2db,	// (0x00033b06) tabs_3_long_active_pane_srt_ParamLimits

0xc2db,	// (0x00033b06) tabs_3_long_active_pane_srt

0xc2db,	// (0x00033b06) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc2db,	// (0x00033b06) tabs_3_long_passive_pane_cp_srt

0xc2db,	// (0x00033b06) tabs_3_long_passive_pane_srt_ParamLimits

0xc2db,	// (0x00033b06) tabs_3_long_passive_pane_srt

0xc7e1,	// (0x0003400c) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc7e1,	// (0x0003400c) bg_passive_tab_pane_cp5_srt

0x9ae7,	// (0x00031312) bg_passive_tab_pane_g1_cp5_srt

0x9a9b,	// (0x000312c6) bg_passive_tab_pane_g2_cp5_srt

0x9af0,	// (0x0003131b) bg_passive_tab_pane_g3_cp5_srt

0xc2e9,	// (0x00033b14) bg_active_tab_pane_cp5_srt_ParamLimits

0xc2e9,	// (0x00033b14) bg_active_tab_pane_cp5_srt

0xb14a,	// (0x00032975) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb14a,	// (0x00032975) tabs_3_long_active_pane_srt_t1

0x9ae7,	// (0x00031312) bg_active_tab_pane_g1_cp5_srt

0x9a9b,	// (0x000312c6) bg_active_tab_pane_g2_cp5_srt

0x9af0,	// (0x0003131b) bg_active_tab_pane_g3_cp5_srt

0x3478,	// (0x0002aca3) navi_text_pane_srt_t1

0x3470,	// (0x0002ac9b) navi_icon_pane_srt_g1

0xd037,	// (0x00034862) midp_editing_number_pane_srt

0xcf5b,	// (0x00034786) midp_ticker_pane_srt

0xd03f,	// (0x0003486a) midp_ticker_pane_srt_g1

0xd047,	// (0x00034872) midp_ticker_pane_srt_g2

0x0001,

0xf73e,	// (0x00036f69) midp_ticker_pane_srt_g

0xd04f,	// (0x0003487a) midp_ticker_pane_srt_t1

0x3461,	// (0x0002ac8c) midp_editing_number_pane_t1_copy1

0x9b69,	// (0x00031394) listscroll_midp_pane

0x9b69,	// (0x00031394) midp_form_pane

0x9bd4,	// (0x000313ff) midp_info_popup_window_ParamLimits

0x9bd4,	// (0x000313ff) midp_info_popup_window

0xc77c,	// (0x00033fa7) bg_popup_sub_pane_cp50_ParamLimits

0xc77c,	// (0x00033fa7) bg_popup_sub_pane_cp50

0x1209,	// (0x00028a34) listscroll_midp_info_pane_ParamLimits

0x1209,	// (0x00028a34) listscroll_midp_info_pane

0x11e9,	// (0x00028a14) listscroll_form_midp_pane_ParamLimits

0x11e9,	// (0x00028a14) listscroll_form_midp_pane

0x11f5,	// (0x00028a20) scroll_bar_cp050

0x11e9,	// (0x00028a14) list_midp_pane

0xb61b,	// (0x00032e46) signal_pane_g2_cp

0x1103,	// (0x0002892e) listscroll_midp_info_pane_t1_ParamLimits

0x1103,	// (0x0002892e) listscroll_midp_info_pane_t1

0xabe0,	// (0x0003240b) listscroll_midp_info_pane_t2_ParamLimits

0xabe0,	// (0x0003240b) listscroll_midp_info_pane_t2

0xac1e,	// (0x00032449) listscroll_midp_info_pane_t3_ParamLimits

0xac1e,	// (0x00032449) listscroll_midp_info_pane_t3

0xac58,	// (0x00032483) listscroll_midp_info_pane_t4_ParamLimits

0xac58,	// (0x00032483) listscroll_midp_info_pane_t4

0x0003,

0xf7f1,	// (0x0003701c) listscroll_midp_info_pane_t_ParamLimits

0xf7f1,	// (0x0003701c) listscroll_midp_info_pane_t

0xc7d1,	// (0x00033ffc) scroll_pane_cp21

0x10a3,	// (0x000288ce) form_midp_field_choice_group_pane

0xaba3,	// (0x000323ce) form_midp_field_text_pane

0x10e9,	// (0x00028914) form_midp_field_time_pane

0x10f1,	// (0x0002891c) form_midp_gauge_slider_pane

0x10fa,	// (0x00028925) form_midp_gauge_wait_pane

0xc28d,	// (0x00033ab8) form_midp_image_pane

0x8afa,	// (0x00030325) list_single_midp_pane_ParamLimits

0x8afa,	// (0x00030325) list_single_midp_pane

0xab81,	// (0x000323ac) form_midp_field_text_pane_t1

0x0d9a,	// (0x000285c5) input_focus_pane_cp050

0x1092,	// (0x000288bd) list_midp_form_text_pane

0x1027,	// (0x00028852) form_midp_field_choice_group_pane_t1

0x1035,	// (0x00028860) input_focus_pane_cp051

0x1049,	// (0x00028874) list_midp_choice_pane

0xc28d,	// (0x00033ab8) status_idle_pane

0x100b,	// (0x00028836) form_midp_field_time_pane_t1

0xc283,	// (0x00033aae) wait_anim_pane_g2_copy1

0x1019,	// (0x00028844) form_midp_field_time_pane_t2

0x0001,

0xcfbb,	// (0x000347e6) aid_navinavi_width_2_pane

0xf7ec,	// (0x00037017) form_midp_field_time_pane_t

0xc28d,	// (0x00033ab8) input_focus_pane_cp052

0xc28d,	// (0x00033ab8) bg_input_focus_pane_cp040

0x0fcb,	// (0x000287f6) form_midp_gauge_slider_pane_t1

0x0fd9,	// (0x00028804) form_midp_gauge_slider_pane_t2

0xab65,	// (0x00032390) form_midp_gauge_slider_pane_t3

0xab73,	// (0x0003239e) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e3,	// (0x0003700e) form_midp_gauge_slider_pane_t

0x1003,	// (0x0002882e) form_midp_slider_pane

0xc2e9,	// (0x00033b14) bg_input_focus_pane_cp041_ParamLimits

0xc2e9,	// (0x00033b14) bg_input_focus_pane_cp041

0x0f98,	// (0x000287c3) form_midp_gauge_wait_pane_t1_ParamLimits

0x0f98,	// (0x000287c3) form_midp_gauge_wait_pane_t1

0x0faa,	// (0x000287d5) form_midp_gauge_wait_pane_t2_ParamLimits

0x0faa,	// (0x000287d5) form_midp_gauge_wait_pane_t2

0x0001,

0xf7de,	// (0x00037009) form_midp_gauge_wait_pane_t_ParamLimits

0xf7de,	// (0x00037009) form_midp_gauge_wait_pane_t

0x0fbc,	// (0x000287e7) form_midp_wait_pane_ParamLimits

0x0fbc,	// (0x000287e7) form_midp_wait_pane

0xab2f,	// (0x0003235a) form_midp_image_pane_g1

0xab38,	// (0x00032363) form_midp_image_pane_t1

0xab47,	// (0x00032372) form_midp_image_pane_t2

0xab56,	// (0x00032381) form_midp_image_pane_t3

0x0002,

0xf7d7,	// (0x00037002) form_midp_image_pane_t

0x0f59,	// (0x00028784) list_single_midp_pane_g1

0xeb4d,	// (0x00036378) list_single_midp_pane_t1

0xab1a,	// (0x00032345) list_midp_form_item_pane_ParamLimits

0xab1a,	// (0x00032345) list_midp_form_item_pane

0xcf63,	// (0x0003478e) list_midp_form_item_pane_t1

0xcf72,	// (0x0003479d) midp_ticker_pane_g1

0xcf7e,	// (0x000347a9) midp_ticker_pane_g2

0x0001,

0xf724,	// (0x00036f4f) midp_ticker_pane_g

0xcf8a,	// (0x000347b5) midp_ticker_pane_t1

0x36ae,	// (0x0002aed9) midp_editing_number_pane_t1

0x368c,	// (0x0002aeb7) midp_editing_number_pane

0x369b,	// (0x0002aec6) midp_ticker_pane

0x3451,	// (0x0002ac7c) ai_message_heading_pane

0xc28d,	// (0x00033ab8) bg_popup_window_pane_cp14

0x3459,	// (0x0002ac84) listscroll_ai_message_pane

0x33db,	// (0x0002ac06) ai_message_heading_pane_g1_ParamLimits

0x33db,	// (0x0002ac06) ai_message_heading_pane_g1

0xb112,	// (0x0003293d) ai_message_heading_pane_g2_ParamLimits

0xb112,	// (0x0003293d) ai_message_heading_pane_g2

0x33f3,	// (0x0002ac1e) ai_message_heading_pane_g3_ParamLimits

0x33f3,	// (0x0002ac1e) ai_message_heading_pane_g3

0x33ff,	// (0x0002ac2a) ai_message_heading_pane_g4_ParamLimits

0x33ff,	// (0x0002ac2a) ai_message_heading_pane_g4

0x0003,

0xf918,	// (0x00037143) ai_message_heading_pane_g_ParamLimits

0xf918,	// (0x00037143) ai_message_heading_pane_g

0xb11e,	// (0x00032949) ai_message_heading_pane_t1_ParamLimits

0xb11e,	// (0x00032949) ai_message_heading_pane_t1

0xb138,	// (0x00032963) ai_message_heading_pane_t2_ParamLimits

0xb138,	// (0x00032963) ai_message_heading_pane_t2

0x0001,

0xf921,	// (0x0003714c) ai_message_heading_pane_t_ParamLimits

0xf921,	// (0x0003714c) ai_message_heading_pane_t

0x3437,	// (0x0002ac62) bg_popup_heading_pane_cp1_ParamLimits

0x3437,	// (0x0002ac62) bg_popup_heading_pane_cp1

0x33c9,	// (0x0002abf4) list_ai_message_pane_ParamLimits

0x33c9,	// (0x0002abf4) list_ai_message_pane

0xc7d1,	// (0x00033ffc) scroll_pane_cp10

0xb0ba,	// (0x000328e5) list_ai_message_pane_g1

0x336d,	// (0x0002ab98) list_ai_message_pane_g2

0x0001,

0xf8f5,	// (0x00037120) list_ai_message_pane_g

0x3375,	// (0x0002aba0) list_ai_message_pane_t1_ParamLimits

0x3375,	// (0x0002aba0) list_ai_message_pane_t1

0x338a,	// (0x0002abb5) list_ai_message_pane_t2_ParamLimits

0x338a,	// (0x0002abb5) list_ai_message_pane_t2

0x339f,	// (0x0002abca) list_ai_message_pane_t3_ParamLimits

0x339f,	// (0x0002abca) list_ai_message_pane_t3

0x33b4,	// (0x0002abdf) list_ai_message_pane_t4_ParamLimits

0x33b4,	// (0x0002abdf) list_ai_message_pane_t4

0x0003,

0xf8fa,	// (0x00037125) list_ai_message_pane_t_ParamLimits

0xf8fa,	// (0x00037125) list_ai_message_pane_t

0xb096,	// (0x000328c1) cell_ai_soft_ind_pane_ParamLimits

0xb096,	// (0x000328c1) cell_ai_soft_ind_pane

0xcf9c,	// (0x000347c7) cell_ai_soft_ind_pane_g1_ParamLimits

0xcf9c,	// (0x000347c7) cell_ai_soft_ind_pane_g1

0xc28d,	// (0x00033ab8) grid_highlight_cp1

0xcfa9,	// (0x000347d4) text_secondary_cp56_ParamLimits

0xcfa9,	// (0x000347d4) text_secondary_cp56

0x3325,	// (0x0002ab50) example_general_pane_ParamLimits

0x3325,	// (0x0002ab50) example_general_pane

0x3331,	// (0x0002ab5c) example_parent_pane_g1_ParamLimits

0x3331,	// (0x0002ab5c) example_parent_pane_g1

0x333d,	// (0x0002ab68) example_parent_pane_t1_ParamLimits

0x333d,	// (0x0002ab68) example_parent_pane_t1

0xa29e,	// (0x00031ac9) popup_preview_text_window_ParamLimits

0xa29e,	// (0x00031ac9) popup_preview_text_window

0xceb2,	// (0x000346dd) list_single_pane_cp2_g4

0xc4bb,	// (0x00033ce6) bg_popup_preview_window_pane_ParamLimits

0xc4bb,	// (0x00033ce6) bg_popup_preview_window_pane

0xaff8,	// (0x00032823) popup_preview_text_window_t1_ParamLimits

0xaff8,	// (0x00032823) popup_preview_text_window_t1

0x309d,	// (0x0002a8c8) popup_preview_text_window_t2_ParamLimits

0x309d,	// (0x0002a8c8) popup_preview_text_window_t2

0x30e6,	// (0x0002a911) popup_preview_text_window_t3_ParamLimits

0x30e6,	// (0x0002a911) popup_preview_text_window_t3

0x312b,	// (0x0002a956) popup_preview_text_window_t4_ParamLimits

0x312b,	// (0x0002a956) popup_preview_text_window_t4

0x0004,

0xf8c9,	// (0x000370f4) popup_preview_text_window_t_ParamLimits

0xf8c9,	// (0x000370f4) popup_preview_text_window_t

0x31a9,	// (0x0002a9d4) scroll_pane_cp11

0x0c96,	// (0x000284c1) bg_popup_preview_window_pane_g1

0xafb8,	// (0x000327e3) bg_popup_preview_window_pane_g2

0xafc0,	// (0x000327eb) bg_popup_preview_window_pane_g3

0xafc8,	// (0x000327f3) bg_popup_preview_window_pane_g4

0xafd0,	// (0x000327fb) bg_popup_preview_window_pane_g5

0xafd8,	// (0x00032803) bg_popup_preview_window_pane_g6

0xafe0,	// (0x0003280b) bg_popup_preview_window_pane_g7

0xafe8,	// (0x00032813) bg_popup_preview_window_pane_g8

0xe7d3,	// (0x00035ffe) aid_popup_width_pane

0xa21a,	// (0x00031a45) popup_midp_note_alarm_window_ParamLimits

0xa21a,	// (0x00031a45) popup_midp_note_alarm_window

0xc693,	// (0x00033ebe) data_form_pane_ParamLimits

0x8903,	// (0x0003012e) form_field_data_pane_g1

0x890d,	// (0x00030138) form_field_data_pane_t1_ParamLimits

0xc69f,	// (0x00033eca) input_focus_pane_ParamLimits

0x8927,	// (0x00030152) data_form_wide_pane_ParamLimits

0x8938,	// (0x00030163) form_field_data_wide_pane_g1

0x8944,	// (0x0003016f) form_field_data_wide_pane_t1_ParamLimits

0xc593,	// (0x00033dbe) input_focus_pane_cp6_ParamLimits

0x9769,	// (0x00030f94) input_popup_find_pane_g1_ParamLimits

0x9769,	// (0x00030f94) input_popup_find_pane_g1

0xf200,	// (0x00036a2b) aid_navi_side_left_pane

0xf215,	// (0x00036a40) aid_navi_side_right_pane

0x2a68,	// (0x0002a293) bg_popup_window_pane_cp30_ParamLimits

0x2a68,	// (0x0002a293) bg_popup_window_pane_cp30

0x2ae2,	// (0x0002a30d) popup_midp_note_alarm_window_g1_ParamLimits

0x2ae2,	// (0x0002a30d) popup_midp_note_alarm_window_g1

0x2b12,	// (0x0002a33d) popup_midp_note_alarm_window_t1_ParamLimits

0x2b12,	// (0x0002a33d) popup_midp_note_alarm_window_t1

0xadf9,	// (0x00032624) popup_midp_note_alarm_window_t2_ParamLimits

0xadf9,	// (0x00032624) popup_midp_note_alarm_window_t2

0xaea7,	// (0x000326d2) popup_midp_note_alarm_window_t3_ParamLimits

0xaea7,	// (0x000326d2) popup_midp_note_alarm_window_t3

0xaecf,	// (0x000326fa) popup_midp_note_alarm_window_t4_ParamLimits

0xaecf,	// (0x000326fa) popup_midp_note_alarm_window_t4

0x2ca9,	// (0x0002a4d4) popup_midp_note_alarm_window_t5_ParamLimits

0x2ca9,	// (0x0002a4d4) popup_midp_note_alarm_window_t5

0x000a,

0xf866,	// (0x00037091) popup_midp_note_alarm_window_t_ParamLimits

0xf866,	// (0x00037091) popup_midp_note_alarm_window_t

0x2d55,	// (0x0002a580) wait_bar_pane_cp1_ParamLimits

0x2d55,	// (0x0002a580) wait_bar_pane_cp1

0xc28d,	// (0x00033ab8) wait_anim_pane_copy1

0xc28d,	// (0x00033ab8) wait_border_pane_copy1

0x13c6,	// (0x00028bf1) wait_border_pane_g1_copy1

0x895e,	// (0x00030189) form_field_popup_pane_g1

0x8966,	// (0x00030191) form_field_popup_pane_t1_ParamLimits

0xc69f,	// (0x00033eca) input_focus_pane_cp7_ParamLimits

0xc6cd,	// (0x00033ef8) list_form_pane_ParamLimits

0x8980,	// (0x000301ab) form_field_popup_wide_pane_g1

0x8988,	// (0x000301b3) form_field_popup_wide_pane_t1_ParamLimits

0xc69f,	// (0x00033eca) input_focus_pane_cp8_ParamLimits

0xc6d9,	// (0x00033f04) list_form_wide_pane_ParamLimits

0x3847,	// (0x0002b072) aid_size_cell_graphic_pane

0x8a14,	// (0x0003023f) data_form_pane_t1_ParamLimits

0x8b24,	// (0x0003034f) data_form_wide_pane_t1_ParamLimits

0xa6e1,	// (0x00031f0c) bg_status_flat_pane

0x911b,	// (0x00030946) title_pane_t1_ParamLimits

0xc2a3,	// (0x00033ace) title_pane_t2_ParamLimits

0xc2c9,	// (0x00033af4) title_pane_t3_ParamLimits

0xf532,	// (0x00036d5d) title_pane_t_ParamLimits

0xca86,	// (0x000342b1) level_1_signal_ParamLimits

0xca93,	// (0x000342be) level_2_signal_ParamLimits

0xcaa0,	// (0x000342cb) level_3_signal_ParamLimits

0xcaad,	// (0x000342d8) level_4_signal_ParamLimits

0xcaba,	// (0x000342e5) level_5_signal_ParamLimits

0xcac7,	// (0x000342f2) level_6_signal_ParamLimits

0xcad4,	// (0x000342ff) level_7_signal_ParamLimits

0xca86,	// (0x000342b1) level_1_battery_ParamLimits

0xca93,	// (0x000342be) level_2_battery_ParamLimits

0xcaa0,	// (0x000342cb) level_3_battery_ParamLimits

0xcaad,	// (0x000342d8) level_4_battery_ParamLimits

0xcaba,	// (0x000342e5) level_5_battery_ParamLimits

0xcac7,	// (0x000342f2) level_6_battery_ParamLimits

0xcad4,	// (0x000342ff) level_7_battery_ParamLimits

0x296d,	// (0x0002a198) bg_status_flat_pane_g1

0x2975,	// (0x0002a1a0) bg_status_flat_pane_g2

0x297d,	// (0x0002a1a8) bg_status_flat_pane_g3

0x2985,	// (0x0002a1b0) bg_status_flat_pane_g4

0x298d,	// (0x0002a1b8) bg_status_flat_pane_g5

0x2995,	// (0x0002a1c0) bg_status_flat_pane_g6

0x299d,	// (0x0002a1c8) bg_status_flat_pane_g7

0x91af,	// (0x000309da) tabs_3_active_pane_t1_ParamLimits

0x91af,	// (0x000309da) tabs_3_passive_pane_t1_ParamLimits

0x91c9,	// (0x000309f4) tabs_4_active_pane_t1_ParamLimits

0x91c9,	// (0x000309f4) tabs_4_1_passive_pane_t1_ParamLimits

0x97a8,	// (0x00030fd3) tabs_2_active_pane_t1_ParamLimits

0x97a8,	// (0x00030fd3) tabs_2_passive_pane_t1_ParamLimits

0xc2e9,	// (0x00033b14) bg_active_tab_pane_cp4_ParamLimits

0x97ba,	// (0x00030fe5) tabs_2_long_active_pane_t1_ParamLimits

0xc7e1,	// (0x0003400c) bg_passive_tab_pane_cp4_ParamLimits

0x0d2b,	// (0x00028556) list_single_midp_graphic_pane_t1_ParamLimits

0xc2e9,	// (0x00033b14) bg_active_tab_pane_cp5_ParamLimits

0x97cd,	// (0x00030ff8) tabs_3_long_active_pane_t1_ParamLimits

0xc7e1,	// (0x0003400c) bg_passive_tab_pane_cp5_ParamLimits

0x0d2b,	// (0x00028556) list_single_midp_graphic_pane_t1

0xa6e1,	// (0x00031f0c) bg_status_flat_pane_ParamLimits

0x08f9,	// (0x00028124) indicator_pane_cp2_ParamLimits

0x08f9,	// (0x00028124) indicator_pane_cp2

0xa85f,	// (0x0003208a) navi_pane_srt_ParamLimits

0xa85f,	// (0x0003208a) navi_pane_srt

0x0a48,	// (0x00028273) popup_clock_digital_analogue_window_cp1

0xc32d,	// (0x00033b58) indicator_pane_t1

0xcf5b,	// (0x00034786) copy_highlight_pane

0xcf5b,	// (0x00034786) cursor_graphics_pane

0xcf5b,	// (0x00034786) graphic_within_text_pane

0xcf5b,	// (0x00034786) link_highlight_pane

0x316c,	// (0x0002a997) popup_preview_text_window_t5_ParamLimits

0x316c,	// (0x0002a997) popup_preview_text_window_t5

0xcfc3,	// (0x000347ee) cursor_digital_pane

0xcfc3,	// (0x000347ee) cursor_primary_pane

0xcfd4,	// (0x000347ff) cursor_primary_small_pane

0xcfdc,	// (0x00034807) cursor_secondary_pane

0xcfe4,	// (0x0003480f) cursor_title_pane

0xcfc3,	// (0x000347ee) link_highlight_digital_pane

0xcfcb,	// (0x000347f6) link_highlight_primary_pane

0xcfd4,	// (0x000347ff) link_highlight_primary_small_pane

0xcfdc,	// (0x00034807) link_highlight_secondary_pane

0xcfe4,	// (0x0003480f) link_highlight_title_pane

0xcfc3,	// (0x000347ee) copy_highlight_digital_pane

0xcfc3,	// (0x000347ee) copy_highlight_primary_pane

0xcfd4,	// (0x000347ff) copy_highlight_primary_small_pane

0xcfdc,	// (0x00034807) copy_highlight_secondary_pane

0xcfe4,	// (0x0003480f) copy_highlight_title_pane

0xcfdc,	// (0x00034807) graphic_text_digital_pane

0x2a0b,	// (0x0002a236) graphic_text_primary_pane

0x2a14,	// (0x0002a23f) graphic_text_primary_small_pane

0xcfd4,	// (0x000347ff) graphic_text_secondary_pane

0xcfc3,	// (0x000347ee) graphic_text_title_pane

0x9c25,	// (0x00031450) cursor_primary_pane_g1

0x29fd,	// (0x0002a228) cursor_text_primary_t1

0xadef,	// (0x0003261a) cursor_primary_small_pane_g1

0x29ef,	// (0x0002a21a) cursor_text_primary_small_t1

0xade5,	// (0x00032610) cursor_primary_small_pane_g1_copy1

0x29d7,	// (0x0002a202) cursor_text_primary_small_t1_copy1

0x29b5,	// (0x0002a1e0) cursor_text_title_t1

0xaddb,	// (0x00032606) cursor_title_pane_g1

0x9c25,	// (0x00031450) cursor_digital_pane_g1

0xcfec,	// (0x00034817) cursor_text_digital_t1

0xcffa,	// (0x00034825) link_highlight_primary_pane_g1

0x295e,	// (0x0002a189) link_highlight_primary_pane_t1

0xcffa,	// (0x00034825) link_highlight_primary_small_pane_g1

0xd002,	// (0x0003482d) link_highlight_primary_small_pane_t1

0xcffa,	// (0x00034825) link_highlight_secondary_pane_g1

0xd011,	// (0x0003483c) link_highlight_secondary_pane_t1

0x152b,	// (0x00028d56) link_highlight_title_pane_g1

0x1542,	// (0x00028d6d) link_highlight_title_pane_t1

0x152b,	// (0x00028d56) link_highlight_digital_pane_g1

0x1533,	// (0x00028d5e) link_highlight_digital_pane_t1

0x13e5,	// (0x00028c10) copy_highlight_primary_pane_g1

0x140b,	// (0x00028c36) copy_highlight_primary_pane_t1

0x13e5,	// (0x00028c10) copy_highlight_primary_small_pane_g1

0x13fc,	// (0x00028c27) copy_highlight_primary_small_pane_t1

0xd020,	// (0x0003484b) copy_highlight_secondary_pane_g1

0xd028,	// (0x00034853) copy_highlight_secondary_pane_t1

0x13e5,	// (0x00028c10) copy_highlight_title_pane_g1

0x13ed,	// (0x00028c18) copy_highlight_title_pane_t1

0x13e5,	// (0x00028c10) copy_highlight_digital_pane_g1

0x3a15,	// (0x0002b240) copy_highlight_digital_pane_t1

0x3969,	// (0x0002b194) graphic_text_primary_pane_g1

0x39f9,	// (0x0002b224) graphic_text_primary_pane_t1

0x3a07,	// (0x0002b232) graphic_text_primary_pane_t2

0x0001,

0xf995,	// (0x000371c0) graphic_text_primary_pane_t

0x39d5,	// (0x0002b200) graphic_text_primary_small_pane_g1

0x39dd,	// (0x0002b208) graphic_text_primary_small_pane_t1

0x39eb,	// (0x0002b216) graphic_text_primary_small_pane_t2

0x0001,

0xf990,	// (0x000371bb) graphic_text_primary_small_pane_t

0x39b1,	// (0x0002b1dc) graphic_text_secondary_pane_g1

0x39b9,	// (0x0002b1e4) graphic_text_secondary_pane_t1

0x39c7,	// (0x0002b1f2) graphic_text_secondary_pane_t2

0x0001,

0xf98b,	// (0x000371b6) graphic_text_secondary_pane_t

0x398d,	// (0x0002b1b8) graphic_text_title_pane_g1

0x3995,	// (0x0002b1c0) graphic_text_title_pane_t1

0x39a3,	// (0x0002b1ce) graphic_text_title_pane_t2

0x0001,

0xf986,	// (0x000371b1) graphic_text_title_pane_t

0x3969,	// (0x0002b194) graphic_text_digital_pane_g1

0x3971,	// (0x0002b19c) graphic_text_digital_pane_t1

0x397f,	// (0x0002b1aa) graphic_text_digital_pane_t2

0x0001,

0xf981,	// (0x000371ac) graphic_text_digital_pane_t

0xc2e9,	// (0x00033b14) navi_icon_pane_srt_ParamLimits

0xc2e9,	// (0x00033b14) navi_icon_pane_srt

0xc28d,	// (0x00033ab8) navi_midp_pane_srt

0xc28d,	// (0x00033ab8) navi_navi_pane_srt

0xc2e9,	// (0x00033b14) navi_text_pane_srt_ParamLimits

0xc2e9,	// (0x00033b14) navi_text_pane_srt

0x3934,	// (0x0002b15f) navi_navi_icon_text_pane_srt

0x393c,	// (0x0002b167) navi_navi_pane_srt_g1_ParamLimits

0x393c,	// (0x0002b167) navi_navi_pane_srt_g1

0x394e,	// (0x0002b179) navi_navi_pane_srt_g2_ParamLimits

0x394e,	// (0x0002b179) navi_navi_pane_srt_g2

0x0001,

0xf97c,	// (0x000371a7) navi_navi_pane_srt_g_ParamLimits

0xf97c,	// (0x000371a7) navi_navi_pane_srt_g

0x3960,	// (0x0002b18b) navi_navi_tabs_pane_srt

0x3934,	// (0x0002b15f) navi_navi_text_pane_srt

0x3934,	// (0x0002b15f) navi_navi_volume_pane_srt

0x3925,	// (0x0002b150) navi_navi_text_pane_srt_t1

0x185c,	// (0x00029087) navi_navi_volume_pane_srt_g1

0x1864,	// (0x0002908f) volume_small_pane_srt_ParamLimits

0x1864,	// (0x0002908f) volume_small_pane_srt

0xf480,	// (0x00036cab) volume_small_pane_srt_g1_ParamLimits

0xf480,	// (0x00036cab) volume_small_pane_srt_g1

0xf490,	// (0x00036cbb) volume_small_pane_srt_g2_ParamLimits

0xf490,	// (0x00036cbb) volume_small_pane_srt_g2

0xf4a1,	// (0x00036ccc) volume_small_pane_srt_g3_ParamLimits

0xf4a1,	// (0x00036ccc) volume_small_pane_srt_g3

0xf4b2,	// (0x00036cdd) volume_small_pane_srt_g4_ParamLimits

0xf4b2,	// (0x00036cdd) volume_small_pane_srt_g4

0xf4c3,	// (0x00036cee) volume_small_pane_srt_g5_ParamLimits

0xf4c3,	// (0x00036cee) volume_small_pane_srt_g5

0xf4d4,	// (0x00036cff) volume_small_pane_srt_g6_ParamLimits

0xf4d4,	// (0x00036cff) volume_small_pane_srt_g6

0xf4e5,	// (0x00036d10) volume_small_pane_srt_g7_ParamLimits

0xf4e5,	// (0x00036d10) volume_small_pane_srt_g7

0xf4f6,	// (0x00036d21) volume_small_pane_srt_g8_ParamLimits

0xf4f6,	// (0x00036d21) volume_small_pane_srt_g8

0xf507,	// (0x00036d32) volume_small_pane_srt_g9_ParamLimits

0xf507,	// (0x00036d32) volume_small_pane_srt_g9

0xf518,	// (0x00036d43) volume_small_pane_srt_g10_ParamLimits

0xf518,	// (0x00036d43) volume_small_pane_srt_g10

0x0009,

0xf729,	// (0x00036f54) volume_small_pane_srt_g_ParamLimits

0xf729,	// (0x00036f54) volume_small_pane_srt_g

0x94b0,	// (0x00030cdb) query_popup_data_pane_cp2

0x390b,	// (0x0002b136) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x390b,	// (0x0002b136) navi_navi_icon_text_pane_srt_t1

0x2a0b,	// (0x0002a236) navi_tabs_2_long_pane_srt

0x2a0b,	// (0x0002a236) navi_tabs_2_pane_srt

0x2a0b,	// (0x0002a236) navi_tabs_3_long_pane_srt

0x2a0b,	// (0x0002a236) navi_tabs_3_pane_srt

0x2a0b,	// (0x0002a236) navi_tabs_4_pane_srt

0xb521,	// (0x00032d4c) tabs_2_active_pane_srt_ParamLimits

0xb521,	// (0x00032d4c) tabs_2_active_pane_srt

0xb531,	// (0x00032d5c) tabs_2_passive_pane_srt_ParamLimits

0xb531,	// (0x00032d5c) tabs_2_passive_pane_srt

0x0d9a,	// (0x000285c5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0d9a,	// (0x000285c5) bg_passive_tab_pane_cp1_srt

0xb4f1,	// (0x00032d1c) bg_passive_tab_pane_g1_cp1_srt

0x9a9b,	// (0x000312c6) bg_passive_tab_pane_g2_cp1_srt

0xb4fa,	// (0x00032d25) bg_passive_tab_pane_g3_cp1_srt

0xc2db,	// (0x00033b06) bg_active_tab_pane_cp1_srt_ParamLimits

0xc2db,	// (0x00033b06) bg_active_tab_pane_cp1_srt

0xb503,	// (0x00032d2e) tabs_2_active_pane_srt_g1

0xb50b,	// (0x00032d36) tabs_2_active_pane_srt_t1_ParamLimits

0xb50b,	// (0x00032d36) tabs_2_active_pane_srt_t1

0xb4f1,	// (0x00032d1c) bg_active_tab_pane_g1_cp1_srt

0x9a9b,	// (0x000312c6) bg_active_tab_pane_g2_cp1_srt

0xb4fa,	// (0x00032d25) bg_active_tab_pane_g3_cp1_srt

0xb4be,	// (0x00032ce9) tabs_3_active_pane_srt_ParamLimits

0xb4be,	// (0x00032ce9) tabs_3_active_pane_srt

0xb4cf,	// (0x00032cfa) tabs_3_passive_pane_cp_srt_ParamLimits

0xb4cf,	// (0x00032cfa) tabs_3_passive_pane_cp_srt

0xb4e0,	// (0x00032d0b) tabs_3_passive_pane_srt_ParamLimits

0xb4e0,	// (0x00032d0b) tabs_3_passive_pane_srt

0x0d9a,	// (0x000285c5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0d9a,	// (0x000285c5) bg_passive_tab_pane_cp2_srt

0x9c2f,	// (0x0003145a) bg_passive_tab_pane_g1_cp2_srt

0x9a9b,	// (0x000312c6) bg_passive_tab_pane_g2_cp2_srt

0x9c38,	// (0x00031463) bg_passive_tab_pane_g3_cp2_srt

0xc2db,	// (0x00033b06) bg_active_tab_pane_cp2_srt_ParamLimits

0xc2db,	// (0x00033b06) bg_active_tab_pane_cp2_srt

0xb4a0,	// (0x00032ccb) tabs_3_active_pane_srt_g1

0xb4a8,	// (0x00032cd3) tabs_3_active_pane_srt_t1_ParamLimits

0xb4a8,	// (0x00032cd3) tabs_3_active_pane_srt_t1

0x9c2f,	// (0x0003145a) bg_active_tab_pane_g1_cp2_srt

0x9a9b,	// (0x000312c6) bg_active_tab_pane_g2_cp2_srt

0x9c38,	// (0x00031463) bg_active_tab_pane_g3_cp2_srt

0x17c1,	// (0x00028fec) tabs_4_active_pane_srt_ParamLimits

0x17c1,	// (0x00028fec) tabs_4_active_pane_srt

0x17d3,	// (0x00028ffe) tabs_4_passive_pane_cp2_srt_ParamLimits

0x17d3,	// (0x00028ffe) tabs_4_passive_pane_cp2_srt

0x01c0,	// (0x000279eb) aid_size_cell_toolbar

0x3509,	// (0x0002ad34) main_idle_act_pane_ParamLimits

0x035b,	// (0x00027b86) popup_large_graphic_colour_window_ParamLimits

0xa550,	// (0x00031d7b) popup_toolbar_window_ParamLimits

0xa550,	// (0x00031d7b) popup_toolbar_window

0x36bd,	// (0x0002aee8) list_single_graphic_2heading_pane_ParamLimits

0x36bd,	// (0x0002aee8) list_single_graphic_2heading_pane

0xc96e,	// (0x00034199) aid_size_cell_apps_grid_lsc_pane

0xc980,	// (0x000341ab) aid_size_cell_apps_grid_prt_pane

0xc7e1,	// (0x0003400c) bg_wml_button_pane_cp1_ParamLimits

0xc7e1,	// (0x0003400c) bg_wml_button_pane_cp1

0xab81,	// (0x000323ac) form_midp_field_text_pane_t1_ParamLimits

0x0d9a,	// (0x000285c5) input_focus_pane_cp050_ParamLimits

0x1092,	// (0x000288bd) list_midp_form_text_pane_ParamLimits

0x1035,	// (0x00028860) input_focus_pane_cp051_ParamLimits

0x1049,	// (0x00028874) list_midp_choice_pane_ParamLimits

0xaae6,	// (0x00032311) list_single_2graphic_pane_cp3_ParamLimits

0xaae6,	// (0x00032311) list_single_2graphic_pane_cp3

0xaafa,	// (0x00032325) list_single_midp_graphic_pane_ParamLimits

0xaafa,	// (0x00032325) list_single_midp_graphic_pane

0xea51,	// (0x0003627c) list_single_graphic_2heading_pane_g1_ParamLimits

0xea51,	// (0x0003627c) list_single_graphic_2heading_pane_g1

0xe82e,	// (0x00036059) list_single_graphic_2heading_pane_g4_ParamLimits

0xe82e,	// (0x00036059) list_single_graphic_2heading_pane_g4

0xe83a,	// (0x00036065) list_single_graphic_2heading_pane_g5_ParamLimits

0xe83a,	// (0x00036065) list_single_graphic_2heading_pane_g5

0x0002,

0xf77c,	// (0x00036fa7) list_single_graphic_2heading_pane_g_ParamLimits

0xf77c,	// (0x00036fa7) list_single_graphic_2heading_pane_g

0xea5d,	// (0x00036288) list_single_graphic_2heading_pane_t1_ParamLimits

0xea5d,	// (0x00036288) list_single_graphic_2heading_pane_t1

0xea71,	// (0x0003629c) list_single_graphic_2heading_pane_t2_ParamLimits

0xea71,	// (0x0003629c) list_single_graphic_2heading_pane_t2

0xea8b,	// (0x000362b6) list_single_graphic_2heading_pane_t3_ParamLimits

0xea8b,	// (0x000362b6) list_single_graphic_2heading_pane_t3

0x0002,

0xf783,	// (0x00036fae) list_single_graphic_2heading_pane_t_ParamLimits

0xf783,	// (0x00036fae) list_single_graphic_2heading_pane_t

0x0ba4,	// (0x000283cf) bg_popup_sub_pane_cp2

0x0bce,	// (0x000283f9) grid_toobar_pane

0x0c0a,	// (0x00028435) cell_toolbar_pane_ParamLimits

0x0c0a,	// (0x00028435) cell_toolbar_pane

0x0c3a,	// (0x00028465) cell_toolbar_pane_g1_ParamLimits

0x0c3a,	// (0x00028465) cell_toolbar_pane_g1

0xa9fe,	// (0x00032229) cell_toolbar_pane_g2_ParamLimits

0xa9fe,	// (0x00032229) cell_toolbar_pane_g2

0x0001,

0xf791,	// (0x00036fbc) cell_toolbar_pane_g_ParamLimits

0xf791,	// (0x00036fbc) cell_toolbar_pane_g

0x0c70,	// (0x0002849b) grid_highlight_pane_cp2_ParamLimits

0x0c70,	// (0x0002849b) grid_highlight_pane_cp2

0x0c8a,	// (0x000284b5) toolbar_button_pane

0x0c96,	// (0x000284c1) toolbar_button_pane_g1

0x0c9e,	// (0x000284c9) toolbar_button_pane_g2

0x0ca6,	// (0x000284d1) toolbar_button_pane_g3

0x0cae,	// (0x000284d9) toolbar_button_pane_g4

0x0cb6,	// (0x000284e1) toolbar_button_pane_g5

0x0cbe,	// (0x000284e9) toolbar_button_pane_g6

0x0cc6,	// (0x000284f1) toolbar_button_pane_g7

0x0cce,	// (0x000284f9) toolbar_button_pane_g8

0x0cd6,	// (0x00028501) toolbar_button_pane_g9

0x0009,

0xf796,	// (0x00036fc1) toolbar_button_pane_g

0x0ce6,	// (0x00028511) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0ce6,	// (0x00028511) list_single_2graphic_pane_g1_cp3

0xaa12,	// (0x0003223d) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaa12,	// (0x0003223d) list_single_2graphic_pane_g2_cp3

0xcdb0,	// (0x000345db) list_single_2graphic_pane_g3_cp3

0x0d03,	// (0x0002852e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0d03,	// (0x0002852e) list_single_2graphic_pane_g4_cp3

0xaa23,	// (0x0003224e) list_single_2graphic_pane_t1_cp3_ParamLimits

0xaa23,	// (0x0003224e) list_single_2graphic_pane_t1_cp3

0xcda4,	// (0x000345cf) list_single_midp_graphic_pane_g2_ParamLimits

0xcda4,	// (0x000345cf) list_single_midp_graphic_pane_g2

0x01c8,	// (0x000279f3) aid_zoom_text_primary

0xea41,	// (0x0003626c) aid_zoom_text_secondary

0xd09d,	// (0x000348c8) status_small_pane_g7_ParamLimits

0xd09d,	// (0x000348c8) status_small_pane_g7

0x9c94,	// (0x000314bf) status_small_pane_t1_ParamLimits

0x90f7,	// (0x00030922) title_pane_g2

0x0003,

0xf529,	// (0x00036d54) title_pane_g

0x950a,	// (0x00030d35) aid_size_cell_colour_1_pane_ParamLimits

0x950a,	// (0x00030d35) aid_size_cell_colour_1_pane

0x951e,	// (0x00030d49) aid_size_cell_colour_2_pane_ParamLimits

0x951e,	// (0x00030d49) aid_size_cell_colour_2_pane

0x9532,	// (0x00030d5d) aid_size_cell_colour_3_pane_ParamLimits

0x9532,	// (0x00030d5d) aid_size_cell_colour_3_pane

0x9546,	// (0x00030d71) aid_size_cell_colour_4_pane_ParamLimits

0x9546,	// (0x00030d71) aid_size_cell_colour_4_pane

0xf13d,	// (0x00036968) title_pane_stacon_g1_ParamLimits

0xf13d,	// (0x00036968) title_pane_stacon_g1

0x1462,	// (0x00028c8d) popup_note_wait_window_g3_ParamLimits

0x1462,	// (0x00028c8d) popup_note_wait_window_g3

0x14d8,	// (0x00028d03) popup_note_wait_window_t5_ParamLimits

0x14d8,	// (0x00028d03) popup_note_wait_window_t5

0xc28d,	// (0x00033ab8) main_feb_china_hwr_fs_writing_pane

0x9f04,	// (0x0003172f) popup_feb_china_hwr_fs_window_ParamLimits

0x9f04,	// (0x0003172f) popup_feb_china_hwr_fs_window

0xaa3f,	// (0x0003226a) aid_size_cell_hwr_fs_ParamLimits

0xaa3f,	// (0x0003226a) aid_size_cell_hwr_fs

0x0d9a,	// (0x000285c5) bg_popup_sub_pane_cp3_ParamLimits

0x0d9a,	// (0x000285c5) bg_popup_sub_pane_cp3

0xaa54,	// (0x0003227f) grid_hwr_fs_pane_ParamLimits

0xaa54,	// (0x0003227f) grid_hwr_fs_pane

0x0dbe,	// (0x000285e9) linegrid_hwr_fs_pane_ParamLimits

0x0dbe,	// (0x000285e9) linegrid_hwr_fs_pane

0xaa6c,	// (0x00032297) cell_hwr_fs_pane_ParamLimits

0xaa6c,	// (0x00032297) cell_hwr_fs_pane

0x0df0,	// (0x0002861b) linegrid_hwr_fs_pane_g1_ParamLimits

0x0df0,	// (0x0002861b) linegrid_hwr_fs_pane_g1

0xaa92,	// (0x000322bd) linegrid_hwr_fs_pane_g2_ParamLimits

0xaa92,	// (0x000322bd) linegrid_hwr_fs_pane_g2

0x0e0e,	// (0x00028639) linegrid_hwr_fs_pane_g3_ParamLimits

0x0e0e,	// (0x00028639) linegrid_hwr_fs_pane_g3

0xaaa4,	// (0x000322cf) linegrid_hwr_fs_pane_g4_ParamLimits

0xaaa4,	// (0x000322cf) linegrid_hwr_fs_pane_g4

0x0e34,	// (0x0002865f) linegrid_hwr_fs_pane_g5_ParamLimits

0x0e34,	// (0x0002865f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bc,	// (0x00036fe7) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bc,	// (0x00036fe7) linegrid_hwr_fs_pane_g

0x0e4a,	// (0x00028675) cell_hwr_fs_pane_g1_ParamLimits

0x0e4a,	// (0x00028675) cell_hwr_fs_pane_g1

0x0ade,	// (0x00028309) cell_hwr_fs_pane_g2_ParamLimits

0x0ade,	// (0x00028309) cell_hwr_fs_pane_g2

0xaabe,	// (0x000322e9) cell_hwr_fs_pane_g3_ParamLimits

0xaabe,	// (0x000322e9) cell_hwr_fs_pane_g3

0xaacb,	// (0x000322f6) cell_hwr_fs_pane_g4_ParamLimits

0xaacb,	// (0x000322f6) cell_hwr_fs_pane_g4

0x0003,

0xf7c7,	// (0x00036ff2) cell_hwr_fs_pane_g_ParamLimits

0xf7c7,	// (0x00036ff2) cell_hwr_fs_pane_g

0xaad8,	// (0x00032303) cell_hwr_fs_pane_t1

0xc28d,	// (0x00033ab8) grid_highlight_pane_cp6

0xc28d,	// (0x00033ab8) main_idle_act2_pane

0xc7b8,	// (0x00033fe3) aid_inside_area_popup_secondary

0xaf0e,	// (0x00032739) aid_inside_area_window_primary_ParamLimits

0xaf0e,	// (0x00032739) aid_inside_area_window_primary

0xb549,	// (0x00032d74) ai2_news_ticker_pane

0x3a2c,	// (0x0002b257) aid_size_cell_ai1_link_ParamLimits

0x3a2c,	// (0x0002b257) aid_size_cell_ai1_link

0xb551,	// (0x00032d7c) popup_ai2_data_window_ParamLimits

0xb551,	// (0x00032d7c) popup_ai2_data_window

0x3a5c,	// (0x0002b287) popup_ai2_link_window_ParamLimits

0x3a5c,	// (0x0002b287) popup_ai2_link_window

0x0d9a,	// (0x000285c5) bg_popup_sub_pane_cp4_ParamLimits

0x0d9a,	// (0x000285c5) bg_popup_sub_pane_cp4

0x3a70,	// (0x0002b29b) grid_ai2_link_pane_ParamLimits

0x3a70,	// (0x0002b29b) grid_ai2_link_pane

0x3a87,	// (0x0002b2b2) popup_ai2_link_window_g1_ParamLimits

0x3a87,	// (0x0002b2b2) popup_ai2_link_window_g1

0x3a93,	// (0x0002b2be) popup_ai2_link_window_g2_ParamLimits

0x3a93,	// (0x0002b2be) popup_ai2_link_window_g2

0x0001,

0xf99a,	// (0x000371c5) popup_ai2_link_window_g_ParamLimits

0xf99a,	// (0x000371c5) popup_ai2_link_window_g

0x3aa2,	// (0x0002b2cd) ai2_mp_button_pane

0x3aaa,	// (0x0002b2d5) ai2_mp_volume_pane

0x1035,	// (0x00028860) bg_popup_sub_pane_cp5_ParamLimits

0x1035,	// (0x00028860) bg_popup_sub_pane_cp5

0x3ab2,	// (0x0002b2dd) heading_ai2_gene_pane_ParamLimits

0x3ab2,	// (0x0002b2dd) heading_ai2_gene_pane

0x3abe,	// (0x0002b2e9) list_ai2_gene_pane_ParamLimits

0x3abe,	// (0x0002b2e9) list_ai2_gene_pane

0x3b06,	// (0x0002b331) cell_ai2_link_pane_ParamLimits

0x3b06,	// (0x0002b331) cell_ai2_link_pane

0x3b1c,	// (0x0002b347) cell_ai2_link_pane_g1

0xc28d,	// (0x00033ab8) grid_highlight_pane_cp7

0x1879,	// (0x000290a4) ai2_mp_volume_pane_g1

0x3bec,	// (0x0002b417) ai2_mp_volume_pane_g2

0x3b61,	// (0x0002b38c) list_ai2_gene_pane_t1

0x3bf4,	// (0x0002b41f) ai2_mp_volume_pane_g3

0x0002,

0xf9b3,	// (0x000371de) ai2_mp_volume_pane_g

0xb567,	// (0x00032d92) volume_small_pane_cp3

0x3bfc,	// (0x0002b427) aid_size_cell_ai2_button

0x3c04,	// (0x0002b42f) grid_ai2_button_pane

0x3c0d,	// (0x0002b438) cell_ai2_button_pane_ParamLimits

0x3c0d,	// (0x0002b438) cell_ai2_button_pane

0xc283,	// (0x00033aae) cell_ai2_button_pane_g1

0xc28d,	// (0x00033ab8) grid_highlight_pane_cp8

0x3bac,	// (0x0002b3d7) ai2_gene_pane_t1_ParamLimits

0x3bac,	// (0x0002b3d7) ai2_gene_pane_t1

0x9e66,	// (0x00031691) aid_height_parent_landscape

0xb228,	// (0x00032a53) aid_height_set_list

0x3509,	// (0x0002ad34) aid_size_parent

0x3847,	// (0x0002b072) aid_size_cell_graphic_pane_ParamLimits

0x3ace,	// (0x0002b2f9) popup_ai2_data_window_g1_ParamLimits

0x3ace,	// (0x0002b2f9) popup_ai2_data_window_g1

0x3ada,	// (0x0002b305) ai2_news_ticker_pane_g1

0x3ae2,	// (0x0002b30d) ai2_news_ticker_pane_g2

0x0001,

0xf99f,	// (0x000371ca) ai2_news_ticker_pane_g

0x3aea,	// (0x0002b315) ai2_news_ticker_pane_t1

0x3af8,	// (0x0002b323) ai2_news_ticker_pane_t2

0x0001,

0xf9a4,	// (0x000371cf) ai2_news_ticker_pane_t

0x3b25,	// (0x0002b350) heading_ai2_gene_pane_g1

0x3b2d,	// (0x0002b358) heading_ai2_gene_pane_t1_ParamLimits

0x3b2d,	// (0x0002b358) heading_ai2_gene_pane_t1

0x3b42,	// (0x0002b36d) list_highlight_pane_cp6

0x3b4a,	// (0x0002b375) ai2_gene_pane_ParamLimits

0x3b4a,	// (0x0002b375) ai2_gene_pane

0x3b6f,	// (0x0002b39a) list_ai2_gene_pane_t2

0x0001,

0xf9a9,	// (0x000371d4) list_ai2_gene_pane_t

0x3b7d,	// (0x0002b3a8) list_highlight_pane_cp8_ParamLimits

0x3b7d,	// (0x0002b3a8) list_highlight_pane_cp8

0x3b8e,	// (0x0002b3b9) ai2_gene_pane_g1_ParamLimits

0x3b8e,	// (0x0002b3b9) ai2_gene_pane_g1

0x3ba0,	// (0x0002b3cb) ai2_gene_pane_g2_ParamLimits

0x3ba0,	// (0x0002b3cb) ai2_gene_pane_g2

0x0001,

0xf9ae,	// (0x000371d9) ai2_gene_pane_g_ParamLimits

0xf9ae,	// (0x000371d9) ai2_gene_pane_g

0xc63e,	// (0x00033e69) scroll_pane_cp12

0x9e23,	// (0x0003164e) control_pane_t3_ParamLimits

0x9e23,	// (0x0003164e) control_pane_t3

0x9c85,	// (0x000314b0) status_small_pane_g8_ParamLimits

0x9c85,	// (0x000314b0) status_small_pane_g8

0x9fc7,	// (0x000317f2) popup_find_window_ParamLimits

0xa254,	// (0x00031a7f) popup_note_image_window_ParamLimits

0xe822,	// (0x0003604d) list_double2_graphic_pane_vc_g1_ParamLimits

0xe822,	// (0x0003604d) list_double2_graphic_pane_vc_g1

0xeaa3,	// (0x000362ce) list_double2_graphic_pane_vc_g2_ParamLimits

0xeaa3,	// (0x000362ce) list_double2_graphic_pane_vc_g2

0xeaaf,	// (0x000362da) list_double2_graphic_pane_vc_g3_ParamLimits

0xeaaf,	// (0x000362da) list_double2_graphic_pane_vc_g3

0x0002,

0xf78a,	// (0x00036fb5) list_double2_graphic_pane_vc_g_ParamLimits

0xf78a,	// (0x00036fb5) list_double2_graphic_pane_vc_g

0xe846,	// (0x00036071) list_double2_graphic_pane_vc_t1_ParamLimits

0xe846,	// (0x00036071) list_double2_graphic_pane_vc_t1

0xe82e,	// (0x00036059) list_single_heading_pane_vc_g1_ParamLimits

0xe82e,	// (0x00036059) list_single_heading_pane_vc_g1

0xe83a,	// (0x00036065) list_single_heading_pane_vc_g2_ParamLimits

0xe83a,	// (0x00036065) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036dce) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036dce) list_single_heading_pane_vc_g

0xeabb,	// (0x000362e6) list_single_heading_pane_vc_t1_ParamLimits

0xeabb,	// (0x000362e6) list_single_heading_pane_vc_t1

0xead1,	// (0x000362fc) list_single_heading_pane_vc_t2_ParamLimits

0xead1,	// (0x000362fc) list_single_heading_pane_vc_t2

0x0001,

0xf7ab,	// (0x00036fd6) list_single_heading_pane_vc_t_ParamLimits

0xf7ab,	// (0x00036fd6) list_single_heading_pane_vc_t

0x0d41,	// (0x0002856c) list_setting_number_pane_vc_g1_ParamLimits

0x0d41,	// (0x0002856c) list_setting_number_pane_vc_g1

0x0d4d,	// (0x00028578) list_setting_number_pane_vc_g2_ParamLimits

0x0d4d,	// (0x00028578) list_setting_number_pane_vc_g2

0x0001,

0xf7b0,	// (0x00036fdb) list_setting_number_pane_vc_g_ParamLimits

0xf7b0,	// (0x00036fdb) list_setting_number_pane_vc_g

0xeae3,	// (0x0003630e) list_setting_number_pane_vc_t1_ParamLimits

0xeae3,	// (0x0003630e) list_setting_number_pane_vc_t1

0xeaf7,	// (0x00036322) list_setting_number_pane_vc_t2_ParamLimits

0xeaf7,	// (0x00036322) list_setting_number_pane_vc_t2

0xeb13,	// (0x0003633e) list_setting_number_pane_vc_t3_ParamLimits

0xeb13,	// (0x0003633e) list_setting_number_pane_vc_t3

0x0002,

0xf7b5,	// (0x00036fe0) list_setting_number_pane_vc_t_ParamLimits

0xf7b5,	// (0x00036fe0) list_setting_number_pane_vc_t

0xeb3d,	// (0x00036368) set_value_pane_vc_ParamLimits

0xeb3d,	// (0x00036368) set_value_pane_vc

0x36bd,	// (0x0002aee8) list_double2_graphic_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_double2_graphic_pane_vc

0x36bd,	// (0x0002aee8) list_double2_large_graphic_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_double2_large_graphic_pane_vc

0x36bd,	// (0x0002aee8) list_double2_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_double2_pane_vc

0x36bd,	// (0x0002aee8) list_double_graphic_heading_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_double_graphic_heading_pane_vc

0x36bd,	// (0x0002aee8) list_double_graphic_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_double_graphic_pane_vc

0x36bd,	// (0x0002aee8) list_double_heading_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_double_heading_pane_vc

0xeb5c,	// (0x00036387) list_double_large_graphic_pane_vc_ParamLimits

0xeb5c,	// (0x00036387) list_double_large_graphic_pane_vc

0x36bd,	// (0x0002aee8) list_double_number_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_double_number_pane_vc

0x36bd,	// (0x0002aee8) list_double_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_double_pane_vc

0x36bd,	// (0x0002aee8) list_double_time_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_double_time_pane_vc

0x36bd,	// (0x0002aee8) list_setting_number_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_setting_number_pane_vc

0x36bd,	// (0x0002aee8) list_setting_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_setting_pane_vc

0x36bd,	// (0x0002aee8) list_single_graphic_heading_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_single_graphic_heading_pane_vc

0x36bd,	// (0x0002aee8) list_single_heading_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_single_heading_pane_vc

0x36bd,	// (0x0002aee8) list_single_number_heading_pane_vc_ParamLimits

0x36bd,	// (0x0002aee8) list_single_number_heading_pane_vc

0xe8a8,	// (0x000360d3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe8a8,	// (0x000360d3) list_double_graphic_heading_pane_vc_g1

0xeaa3,	// (0x000362ce) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xeaa3,	// (0x000362ce) list_double_graphic_heading_pane_vc_g2

0xeaaf,	// (0x000362da) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeaaf,	// (0x000362da) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ba,	// (0x000371e5) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ba,	// (0x000371e5) list_double_graphic_heading_pane_vc_g

0xeb7b,	// (0x000363a6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeb7b,	// (0x000363a6) list_double_graphic_heading_pane_vc_t1

0xeb8f,	// (0x000363ba) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeb8f,	// (0x000363ba) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c1,	// (0x000371ec) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c1,	// (0x000371ec) list_double_graphic_heading_pane_vc_t

0x0d41,	// (0x0002856c) list_setting_pane_vc_g1_ParamLimits

0x0d41,	// (0x0002856c) list_setting_pane_vc_g1

0x0d4d,	// (0x00028578) list_setting_pane_vc_g2_ParamLimits

0x0d4d,	// (0x00028578) list_setting_pane_vc_g2

0x0001,

0xf7b0,	// (0x00036fdb) list_setting_pane_vc_g_ParamLimits

0xf7b0,	// (0x00036fdb) list_setting_pane_vc_g

0xeba7,	// (0x000363d2) list_setting_pane_vc_t1_ParamLimits

0xeba7,	// (0x000363d2) list_setting_pane_vc_t1

0xebc3,	// (0x000363ee) list_setting_pane_vc_t2_ParamLimits

0xebc3,	// (0x000363ee) list_setting_pane_vc_t2

0x0001,

0xfa04,	// (0x0003722f) list_setting_pane_vc_t_ParamLimits

0xfa04,	// (0x0003722f) list_setting_pane_vc_t

0xeb3d,	// (0x00036368) set_value_pane_cp_vc_ParamLimits

0xeb3d,	// (0x00036368) set_value_pane_cp_vc

0xe82e,	// (0x00036059) list_single_number_heading_pane_vc_g1_ParamLimits

0xe82e,	// (0x00036059) list_single_number_heading_pane_vc_g1

0xe83a,	// (0x00036065) list_single_number_heading_pane_vc_g2_ParamLimits

0xe83a,	// (0x00036065) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036dce) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036dce) list_single_number_heading_pane_vc_g

0xe85c,	// (0x00036087) list_single_number_heading_pane_vc_t1_ParamLimits

0xe85c,	// (0x00036087) list_single_number_heading_pane_vc_t1

0xebdd,	// (0x00036408) list_single_number_heading_pane_vc_t2_ParamLimits

0xebdd,	// (0x00036408) list_single_number_heading_pane_vc_t2

0xebf3,	// (0x0003641e) list_single_number_heading_pane_vc_t3_ParamLimits

0xebf3,	// (0x0003641e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa09,	// (0x00037234) list_single_number_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x00037234) list_single_number_heading_pane_vc_t

0xec05,	// (0x00036430) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xec05,	// (0x00036430) list_single_graphic_heading_pane_vc_g1

0xe82e,	// (0x00036059) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe82e,	// (0x00036059) list_single_graphic_heading_pane_vc_g4

0xe83a,	// (0x00036065) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe83a,	// (0x00036065) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa10,	// (0x0003723b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa10,	// (0x0003723b) list_single_graphic_heading_pane_vc_g

0xe85c,	// (0x00036087) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe85c,	// (0x00036087) list_single_graphic_heading_pane_vc_t1

0xec11,	// (0x0003643c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xec11,	// (0x0003643c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa17,	// (0x00037242) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa17,	// (0x00037242) list_single_graphic_heading_pane_vc_t

0xe82e,	// (0x00036059) list_double2_pane_vc_g1_ParamLimits

0xe82e,	// (0x00036059) list_double2_pane_vc_g1

0xe83a,	// (0x00036065) list_double2_pane_vc_g2_ParamLimits

0xe83a,	// (0x00036065) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036dce) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036dce) list_double2_pane_vc_g

0xec23,	// (0x0003644e) list_double2_pane_vc_t1_ParamLimits

0xec23,	// (0x0003644e) list_double2_pane_vc_t1

0xe8b4,	// (0x000360df) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xe8b4,	// (0x000360df) list_double2_large_graphic_pane_vc_g1

0xe82e,	// (0x00036059) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe82e,	// (0x00036059) list_double2_large_graphic_pane_vc_g2

0xe83a,	// (0x00036065) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe83a,	// (0x00036065) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00036deb) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00036deb) list_double2_large_graphic_pane_vc_g

0xe846,	// (0x00036071) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xe846,	// (0x00036071) list_double2_large_graphic_pane_vc_t1

0xec3b,	// (0x00036466) list_double_time_pane_vc_g1_ParamLimits

0xec3b,	// (0x00036466) list_double_time_pane_vc_g1

0xec47,	// (0x00036472) list_double_time_pane_vc_g2_ParamLimits

0xec47,	// (0x00036472) list_double_time_pane_vc_g2

0x0001,

0xfa1c,	// (0x00037247) list_double_time_pane_vc_g_ParamLimits

0xfa1c,	// (0x00037247) list_double_time_pane_vc_g

0xec53,	// (0x0003647e) list_double_time_pane_vc_t1_ParamLimits

0xec53,	// (0x0003647e) list_double_time_pane_vc_t1

0xec77,	// (0x000364a2) list_double_time_pane_vc_t2_ParamLimits

0xec77,	// (0x000364a2) list_double_time_pane_vc_t2

0xecc6,	// (0x000364f1) list_double_time_pane_vc_t3_ParamLimits

0xecc6,	// (0x000364f1) list_double_time_pane_vc_t3

0xecd8,	// (0x00036503) list_double_time_pane_vc_t4_ParamLimits

0xecd8,	// (0x00036503) list_double_time_pane_vc_t4

0x0003,

0xfa21,	// (0x0003724c) list_double_time_pane_vc_t_ParamLimits

0xfa21,	// (0x0003724c) list_double_time_pane_vc_t

0xe82e,	// (0x00036059) list_double_pane_vc_g1_ParamLimits

0xe82e,	// (0x00036059) list_double_pane_vc_g1

0xe83a,	// (0x00036065) list_double_pane_vc_g2_ParamLimits

0xe83a,	// (0x00036065) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036dce) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036dce) list_double_pane_vc_g

0xecec,	// (0x00036517) list_double_pane_vc_t1_ParamLimits

0xecec,	// (0x00036517) list_double_pane_vc_t1

0xed00,	// (0x0003652b) list_double_pane_vc_t2_ParamLimits

0xed00,	// (0x0003652b) list_double_pane_vc_t2

0x0001,

0xfa2a,	// (0x00037255) list_double_pane_vc_t_ParamLimits

0xfa2a,	// (0x00037255) list_double_pane_vc_t

0xe82e,	// (0x00036059) list_double_number_pane_vc_g1_ParamLimits

0xe82e,	// (0x00036059) list_double_number_pane_vc_g1

0xe83a,	// (0x00036065) list_double_number_pane_vc_g2_ParamLimits

0xe83a,	// (0x00036065) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00036dce) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00036dce) list_double_number_pane_vc_g

0xed18,	// (0x00036543) list_double_number_pane_vc_t1_ParamLimits

0xed18,	// (0x00036543) list_double_number_pane_vc_t1

0xecec,	// (0x00036517) list_double_number_pane_vc_t2_ParamLimits

0xecec,	// (0x00036517) list_double_number_pane_vc_t2

0xed2a,	// (0x00036555) list_double_number_pane_vc_t3_ParamLimits

0xed2a,	// (0x00036555) list_double_number_pane_vc_t3

0x0002,

0xfa2f,	// (0x0003725a) list_double_number_pane_vc_t_ParamLimits

0xfa2f,	// (0x0003725a) list_double_number_pane_vc_t

0xed42,	// (0x0003656d) list_double_large_graphic_pane_vc_g1_ParamLimits

0xed42,	// (0x0003656d) list_double_large_graphic_pane_vc_g1

0xed5e,	// (0x00036589) list_double_large_graphic_pane_vc_g2_ParamLimits

0xed5e,	// (0x00036589) list_double_large_graphic_pane_vc_g2

0xed72,	// (0x0003659d) list_double_large_graphic_pane_vc_g3_ParamLimits

0xed72,	// (0x0003659d) list_double_large_graphic_pane_vc_g3

0xed81,	// (0x000365ac) list_double_large_graphic_pane_vc_g4_ParamLimits

0xed81,	// (0x000365ac) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa36,	// (0x00037261) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x00037261) list_double_large_graphic_pane_vc_g

0xed8d,	// (0x000365b8) list_double_large_graphic_pane_vc_t1_ParamLimits

0xed8d,	// (0x000365b8) list_double_large_graphic_pane_vc_t1

0xeda9,	// (0x000365d4) list_double_large_graphic_pane_vc_t2_ParamLimits

0xeda9,	// (0x000365d4) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3f,	// (0x0003726a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3f,	// (0x0003726a) list_double_large_graphic_pane_vc_t

0xeaa3,	// (0x000362ce) list_double_heading_pane_vc_g1_ParamLimits

0xeaa3,	// (0x000362ce) list_double_heading_pane_vc_g1

0xeaaf,	// (0x000362da) list_double_heading_pane_vc_g2_ParamLimits

0xeaaf,	// (0x000362da) list_double_heading_pane_vc_g2

0x0001,

0xfa44,	// (0x0003726f) list_double_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x0003726f) list_double_heading_pane_vc_g

0xedcb,	// (0x000365f6) list_double_heading_pane_vc_t1_ParamLimits

0xedcb,	// (0x000365f6) list_double_heading_pane_vc_t1

0xeddf,	// (0x0003660a) list_double_heading_pane_vc_t2_ParamLimits

0xeddf,	// (0x0003660a) list_double_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x00037274) list_double_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00037274) list_double_heading_pane_vc_t

0xedf7,	// (0x00036622) list_double_graphic_pane_vc_g1_ParamLimits

0xedf7,	// (0x00036622) list_double_graphic_pane_vc_g1

0xee0a,	// (0x00036635) list_double_graphic_pane_vc_g2_ParamLimits

0xee0a,	// (0x00036635) list_double_graphic_pane_vc_g2

0xe82e,	// (0x00036059) list_double_graphic_pane_vc_g3_ParamLimits

0xe82e,	// (0x00036059) list_double_graphic_pane_vc_g3

0x0003,

0xfa4e,	// (0x00037279) list_double_graphic_pane_vc_g_ParamLimits

0xfa4e,	// (0x00037279) list_double_graphic_pane_vc_g

0xee27,	// (0x00036652) list_double_graphic_pane_vc_t1_ParamLimits

0xee27,	// (0x00036652) list_double_graphic_pane_vc_t1

0xee46,	// (0x00036671) list_double_graphic_pane_vc_t2_ParamLimits

0xee46,	// (0x00036671) list_double_graphic_pane_vc_t2

0x0001,

0xfa57,	// (0x00037282) list_double_graphic_pane_vc_t_ParamLimits

0xfa57,	// (0x00037282) list_double_graphic_pane_vc_t

0xe7df,	// (0x0003600a) aid_size_cell_fastswap

0x8d6f,	// (0x0003059a) aid_size_cell_touch_ParamLimits

0x8d6f,	// (0x0003059a) aid_size_cell_touch

0xe7e7,	// (0x00036012) popup_fast_swap_wide_window_ParamLimits

0xe7e7,	// (0x00036012) popup_fast_swap_wide_window

0x908e,	// (0x000308b9) touch_pane_ParamLimits

0x908e,	// (0x000308b9) touch_pane

0xc68b,	// (0x00033eb6) button_value_adjust_pane_cp2

0xe9ea,	// (0x00036215) button_value_adjust_pane_cp4

0xe9f2,	// (0x0003621d) form_field_data_pane_cp2

0x88b1,	// (0x000300dc) form_field_data_wide_pane_cp2

0xc9a5,	// (0x000341d0) bg_scroll_pane_ParamLimits

0x98cf,	// (0x000310fa) scroll_handle_pane_ParamLimits

0xf296,	// (0x00036ac1) scroll_sc2_down_pane_ParamLimits

0xf296,	// (0x00036ac1) scroll_sc2_down_pane

0xc9d6,	// (0x00034201) scroll_sc2_up_pane_ParamLimits

0xc9d6,	// (0x00034201) scroll_sc2_up_pane

0xb6a3,	// (0x00032ece) grid_wheel_folder_pane_g1_ParamLimits

0xb6a3,	// (0x00032ece) grid_wheel_folder_pane_g1

0xf418,	// (0x00036c43) clock_nsta_pane_cp2_ParamLimits

0xf418,	// (0x00036c43) clock_nsta_pane_cp2

0x9b69,	// (0x00031394) listscroll_midp_pane_ParamLimits

0x9b75,	// (0x000313a0) midp_canvas_pane

0xd0bf,	// (0x000348ea) nsta_clock_indic_pane

0xd0e7,	// (0x00034912) listscroll_form_pane_vc

0xd0ef,	// (0x0003491a) listscroll_set_pane_vc_ParamLimits

0xd0ef,	// (0x0003491a) listscroll_set_pane_vc

0xa709,	// (0x00031f34) clock_nsta_pane

0xa733,	// (0x00031f5e) indicator_nsta_pane

0x0ba4,	// (0x000283cf) bg_popup_sub_pane_cp2_ParamLimits

0x0bb8,	// (0x000283e3) find_pane_cp2_ParamLimits

0x0bb8,	// (0x000283e3) find_pane_cp2

0x0bce,	// (0x000283f9) grid_toobar_pane_ParamLimits

0x0d59,	// (0x00028584) list_form_gen_pane_vc_ParamLimits

0x0d59,	// (0x00028584) list_form_gen_pane_vc

0x0d6f,	// (0x0002859a) scroll_pane_cp8_vc_ParamLimits

0x0d6f,	// (0x0002859a) scroll_pane_cp8_vc

0x0e88,	// (0x000286b3) data_form_wide_pane_vc_ParamLimits

0x0e88,	// (0x000286b3) data_form_wide_pane_vc

0x0e94,	// (0x000286bf) form_field_data_wide_pane_vc_g1

0x0e9c,	// (0x000286c7) form_field_data_wide_pane_vc_t1_ParamLimits

0x0e9c,	// (0x000286c7) form_field_data_wide_pane_vc_t1

0xc69f,	// (0x00033eca) input_focus_pane_cp6_vc_ParamLimits

0xc69f,	// (0x00033eca) input_focus_pane_cp6_vc

0x11e9,	// (0x00028a14) list_midp_pane_ParamLimits

0x38b1,	// (0x0002b0dc) scroll_pane_cp16_ParamLimits

0x38b1,	// (0x0002b0dc) scroll_pane_cp16

0x123f,	// (0x00028a6a) button_value_adjust_pane_ParamLimits

0x123f,	// (0x00028a6a) button_value_adjust_pane

0xb239,	// (0x00032a64) button_value_adjust_pane_cp6_ParamLimits

0xb239,	// (0x00032a64) button_value_adjust_pane_cp6

0xb353,	// (0x00032b7e) settings_code_pane_cp_ParamLimits

0xb353,	// (0x00032b7e) settings_code_pane_cp

0xc283,	// (0x00033aae) cell_touch_pane_g1

0xc283,	// (0x00033aae) cell_touch_pane_g2

0x0001,

0xf6cf,	// (0x00036efa) cell_touch_pane_g

0xb570,	// (0x00032d9b) cell_touch_pane_cp_ParamLimits

0xb570,	// (0x00032d9b) cell_touch_pane_cp

0xb58c,	// (0x00032db7) cell_touch_pane_ParamLimits

0xb58c,	// (0x00032db7) cell_touch_pane

0xc283,	// (0x00033aae) scroll_sc2_down_pane_g1

0xc283,	// (0x00033aae) scroll_sc2_up_pane_g1

0xc28d,	// (0x00033ab8) bg_set_opt_pane_cp4_vc

0x3c41,	// (0x0002b46c) list_set_graphic_pane_vc_g1_ParamLimits

0x3c41,	// (0x0002b46c) list_set_graphic_pane_vc_g1

0x3c4d,	// (0x0002b478) list_set_graphic_pane_vc_g2_ParamLimits

0x3c4d,	// (0x0002b478) list_set_graphic_pane_vc_g2

0x0001,

0xf9c6,	// (0x000371f1) list_set_graphic_pane_vc_g_ParamLimits

0xf9c6,	// (0x000371f1) list_set_graphic_pane_vc_g

0x3c59,	// (0x0002b484) text_primary_small_cp13_vc_ParamLimits

0x3c59,	// (0x0002b484) text_primary_small_cp13_vc

0x3c71,	// (0x0002b49c) list_set_graphic_pane_vc_ParamLimits

0x3c71,	// (0x0002b49c) list_set_graphic_pane_vc

0xc28d,	// (0x00033ab8) input_focus_pane_cp2_vc

0xc283,	// (0x00033aae) setting_code_pane_vc_g1

0xc300,	// (0x00033b2b) setting_code_pane_vc_t1

0x3c84,	// (0x0002b4af) set_text_pane_vc_t1_ParamLimits

0x3c84,	// (0x0002b4af) set_text_pane_vc_t1

0xc28d,	// (0x00033ab8) input_focus_pane_cp1_vc

0x3ca1,	// (0x0002b4cc) list_set_text_pane_vc

0xc283,	// (0x00033aae) setting_text_pane_vc_g1

0xc28d,	// (0x00033ab8) bg_set_opt_pane_cp2_vc

0xc2f7,	// (0x00033b22) setting_slider_graphic_pane_vc_g1

0x3cab,	// (0x0002b4d6) setting_slider_graphic_pane_vc_t1

0x3cbb,	// (0x0002b4e6) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cb,	// (0x000371f6) setting_slider_graphic_pane_vc_t

0x3ccb,	// (0x0002b4f6) slider_set_pane_cp_vc

0x3cd3,	// (0x0002b4fe) slider_set_pane_vc_g1

0x3cdc,	// (0x0002b507) slider_set_pane_vc_g2

0x0006,

0xf9d0,	// (0x000371fb) slider_set_pane_vc_g

0xc6f7,	// (0x00033f22) set_opt_bg_pane_g1_copy1

0xc6ff,	// (0x00033f2a) set_opt_bg_pane_g2_copy1

0x3d08,	// (0x0002b533) set_opt_bg_pane_g3_copy1

0xc70f,	// (0x00033f3a) set_opt_bg_pane_g4_copy1

0xc717,	// (0x00033f42) set_opt_bg_pane_g5_copy1

0xc71f,	// (0x00033f4a) set_opt_bg_pane_g6_copy1

0x3d10,	// (0x0002b53b) set_opt_bg_pane_g7_copy1

0x3d1a,	// (0x0002b545) set_opt_bg_pane_g8_copy1

0x3d22,	// (0x0002b54d) set_opt_bg_pane_g9_copy1

0xc28d,	// (0x00033ab8) bg_set_opt_pane_cp_vc

0x3d2a,	// (0x0002b555) setting_slider_pane_vc_t1

0x3d39,	// (0x0002b564) setting_slider_pane_vc_t2

0x3d49,	// (0x0002b574) setting_slider_pane_vc_t3

0x0002,

0xf9df,	// (0x0003720a) setting_slider_pane_vc_t

0x3d59,	// (0x0002b584) slider_set_pane_vc

0x158f,	// (0x00028dba) volume_set_pane_vc_g1

0x188a,	// (0x000290b5) volume_set_pane_vc_g2

0x1893,	// (0x000290be) volume_set_pane_vc_g3

0x189c,	// (0x000290c7) volume_set_pane_vc_g4

0x18a5,	// (0x000290d0) volume_set_pane_vc_g5

0x18ae,	// (0x000290d9) volume_set_pane_vc_g6

0x18b7,	// (0x000290e2) volume_set_pane_vc_g7

0x18c0,	// (0x000290eb) volume_set_pane_vc_g8

0x18c9,	// (0x000290f4) volume_set_pane_vc_g9

0x18d2,	// (0x000290fd) volume_set_pane_vc_g10

0x0009,

0xf9e6,	// (0x00037211) volume_set_pane_vc_g

0x3d61,	// (0x0002b58c) volume_set_pane_vc

0x3d6b,	// (0x0002b596) button_value_adjust_pane_cp1_vc

0x3d75,	// (0x0002b5a0) list_highlight_pane_cp2_vc

0x3d7e,	// (0x0002b5a9) list_set_pane_vc_ParamLimits

0x3d7e,	// (0x0002b5a9) list_set_pane_vc

0x3ddc,	// (0x0002b607) main_pane_set_vc_t1_ParamLimits

0x3ddc,	// (0x0002b607) main_pane_set_vc_t1

0x3df1,	// (0x0002b61c) main_pane_set_vc_t2_ParamLimits

0x3df1,	// (0x0002b61c) main_pane_set_vc_t2

0x3e03,	// (0x0002b62e) main_pane_set_vc_t3_ParamLimits

0x3e03,	// (0x0002b62e) main_pane_set_vc_t3

0x3e15,	// (0x0002b640) main_pane_set_vc_t4_ParamLimits

0x3e15,	// (0x0002b640) main_pane_set_vc_t4

0x0003,

0xf9fb,	// (0x00037226) main_pane_set_vc_t_ParamLimits

0xf9fb,	// (0x00037226) main_pane_set_vc_t

0x3e27,	// (0x0002b652) setting_code_pane_vc_ParamLimits

0x3e27,	// (0x0002b652) setting_code_pane_vc

0x3e36,	// (0x0002b661) setting_slider_graphic_pane_vc

0x3e36,	// (0x0002b661) setting_slider_pane_vc

0x3e36,	// (0x0002b661) setting_text_pane_vc

0x3e36,	// (0x0002b661) setting_volume_pane_vc

0x3e3e,	// (0x0002b669) scroll_pane_cp121_vc

0xc679,	// (0x00033ea4) set_content_pane_vc

0x3e46,	// (0x0002b671) button_value_adjust_pane_g1

0x3e4f,	// (0x0002b67a) button_value_adjust_pane_g2

0x0001,

0xfa5c,	// (0x00037287) button_value_adjust_pane_g

0x3e58,	// (0x0002b683) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3e58,	// (0x0002b683) form_field_slider_wide_pane_vc_t1

0x3e6c,	// (0x0002b697) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3e6c,	// (0x0002b697) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa61,	// (0x0003728c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa61,	// (0x0003728c) form_field_slider_wide_pane_vc_t

0xc2db,	// (0x00033b06) input_focus_pane_cp10_vc_ParamLimits

0xc2db,	// (0x00033b06) input_focus_pane_cp10_vc

0x3e9a,	// (0x0002b6c5) slider_cont_pane_cp1_vc_ParamLimits

0x3e9a,	// (0x0002b6c5) slider_cont_pane_cp1_vc

0x3eac,	// (0x0002b6d7) slider_form_pane_g1_cp2

0x3cdc,	// (0x0002b507) slider_form_pane_g2_cp2

0x3ed9,	// (0x0002b704) form_field_slider_pane_vc_t3

0x3ee7,	// (0x0002b712) form_field_slider_pane_vc_t4

0x3ef5,	// (0x0002b720) slider_form_pane_vc_ParamLimits

0x3ef5,	// (0x0002b720) slider_form_pane_vc

0x3f02,	// (0x0002b72d) form_field_slider_pane_vc_t1_ParamLimits

0x3f02,	// (0x0002b72d) form_field_slider_pane_vc_t1

0x3e6c,	// (0x0002b697) form_field_slider_pane_vc_t2_ParamLimits

0x3e6c,	// (0x0002b697) form_field_slider_pane_vc_t2

0x0001,

0xfa73,	// (0x0003729e) form_field_slider_pane_vc_t_ParamLimits

0xfa73,	// (0x0003729e) form_field_slider_pane_vc_t

0xc2db,	// (0x00033b06) input_focus_pane_cp9_vc_ParamLimits

0xc2db,	// (0x00033b06) input_focus_pane_cp9_vc

0x3f1e,	// (0x0002b749) slider_cont_pane_vc_ParamLimits

0x3f1e,	// (0x0002b749) slider_cont_pane_vc

0x3f32,	// (0x0002b75d) list_form_graphic_pane_cp_vc_ParamLimits

0x3f32,	// (0x0002b75d) list_form_graphic_pane_cp_vc

0x0e94,	// (0x000286bf) form_field_popup_wide_pane_vc_g1

0x3f47,	// (0x0002b772) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3f47,	// (0x0002b772) form_field_popup_wide_pane_vc_t1

0xc69f,	// (0x00033eca) input_focus_pane_cp8_vc_ParamLimits

0xc69f,	// (0x00033eca) input_focus_pane_cp8_vc

0x3f8c,	// (0x0002b7b7) list_form_wide_pane_vc_ParamLimits

0x3f8c,	// (0x0002b7b7) list_form_wide_pane_vc

0x3f98,	// (0x0002b7c3) list_form_graphic_pane_vc_g1

0x3fa0,	// (0x0002b7cb) list_form_graphic_pane_vc_t1_ParamLimits

0x3fa0,	// (0x0002b7cb) list_form_graphic_pane_vc_t1

0xc2e9,	// (0x00033b14) list_highlight_pane_cp5_vc_ParamLimits

0xc2e9,	// (0x00033b14) list_highlight_pane_cp5_vc

0x3fbc,	// (0x0002b7e7) list_form_graphic_pane_vc_ParamLimits

0x3fbc,	// (0x0002b7e7) list_form_graphic_pane_vc

0x0e94,	// (0x000286bf) form_field_popup_pane_vc_g1

0x3fd2,	// (0x0002b7fd) form_field_popup_pane_vc_t1_ParamLimits

0x3fd2,	// (0x0002b7fd) form_field_popup_pane_vc_t1

0xc69f,	// (0x00033eca) input_focus_pane_cp7_vc_ParamLimits

0xc69f,	// (0x00033eca) input_focus_pane_cp7_vc

0x3fe9,	// (0x0002b814) list_form_pane_vc_ParamLimits

0x3fe9,	// (0x0002b814) list_form_pane_vc

0x3ff5,	// (0x0002b820) data_form_pane_vc_t1_ParamLimits

0x3ff5,	// (0x0002b820) data_form_pane_vc_t1

0xc6f7,	// (0x00033f22) input_focus_pane_vc_g1

0xc6ff,	// (0x00033f2a) input_focus_pane_vc_g2

0xc707,	// (0x00033f32) input_focus_pane_vc_g3

0xc70f,	// (0x00033f3a) input_focus_pane_vc_g4

0xc717,	// (0x00033f42) input_focus_pane_vc_g5

0xc71f,	// (0x00033f4a) input_focus_pane_vc_g6

0xc727,	// (0x00033f52) input_focus_pane_vc_g7

0xc72f,	// (0x00033f5a) input_focus_pane_vc_g8

0xc737,	// (0x00033f62) input_focus_pane_vc_g9

0xc283,	// (0x00033aae) input_focus_pane_vc_g10

0x0009,

0xf658,	// (0x00036e83) input_focus_pane_vc_g

0x0e88,	// (0x000286b3) data_form_pane_vc_ParamLimits

0x0e88,	// (0x000286b3) data_form_pane_vc

0x0e94,	// (0x000286bf) form_field_data_pane_vc_g1

0x4010,	// (0x0002b83b) form_field_data_pane_vc_t1_ParamLimits

0x4010,	// (0x0002b83b) form_field_data_pane_vc_t1

0xc69f,	// (0x00033eca) input_focus_pane_vc_ParamLimits

0xc69f,	// (0x00033eca) input_focus_pane_vc

0x402a,	// (0x0002b855) button_value_adjust_pane_cp3_vc

0x4032,	// (0x0002b85d) button_value_adjust_pane_cp5_vc

0x403a,	// (0x0002b865) form_field_data_pane_vc_ParamLimits

0x403a,	// (0x0002b865) form_field_data_pane_vc

0x4051,	// (0x0002b87c) form_field_data_pane_vc_cp2

0x4059,	// (0x0002b884) form_field_data_wide_pane_vc_ParamLimits

0x4059,	// (0x0002b884) form_field_data_wide_pane_vc

0x406f,	// (0x0002b89a) form_field_data_wide_pane_vc_cp2

0x4077,	// (0x0002b8a2) form_field_popup_pane_vc_ParamLimits

0x4077,	// (0x0002b8a2) form_field_popup_pane_vc

0x408e,	// (0x0002b8b9) form_field_popup_wide_pane_vc_ParamLimits

0x408e,	// (0x0002b8b9) form_field_popup_wide_pane_vc

0x40a4,	// (0x0002b8cf) form_field_slider_pane_vc_ParamLimits

0x40a4,	// (0x0002b8cf) form_field_slider_pane_vc

0x40b7,	// (0x0002b8e2) form_field_slider_wide_pane_vc_ParamLimits

0x40b7,	// (0x0002b8e2) form_field_slider_wide_pane_vc

0xb5a9,	// (0x00032dd4) grid_touch_1_pane_ParamLimits

0xb5a9,	// (0x00032dd4) grid_touch_1_pane

0xb5bd,	// (0x00032de8) grid_touch_2_pane_ParamLimits

0xb5bd,	// (0x00032de8) grid_touch_2_pane

0x419b,	// (0x0002b9c6) touch_pane_g1_ParamLimits

0x419b,	// (0x0002b9c6) touch_pane_g1

0x40ee,	// (0x0002b919) cell_app_pane_cp_wide_ParamLimits

0x40ee,	// (0x0002b919) cell_app_pane_cp_wide

0x40ff,	// (0x0002b92a) grid_popup_fast_wide_pane_ParamLimits

0x40ff,	// (0x0002b92a) grid_popup_fast_wide_pane

0x4113,	// (0x0002b93e) scroll_pane_cp19_ParamLimits

0x4113,	// (0x0002b93e) scroll_pane_cp19

0xc28d,	// (0x00033ab8) bg_popup_window_pane_cp20

0x4127,	// (0x0002b952) listscroll_popup_fast_wide_pane

0xb5e7,	// (0x00032e12) grid_indicator_nsta_pane

0x4141,	// (0x0002b96c) clock_nsta_pane_g1

0x414a,	// (0x0002b975) clock_nsta_pane_t1

0xb5f3,	// (0x00032e1e) cell_indicator_nsta_pane_ParamLimits

0xb5f3,	// (0x00032e1e) cell_indicator_nsta_pane

0x419b,	// (0x0002b9c6) cell_indicator_nsta_pane_g1

0xb60e,	// (0x00032e39) cell_indicator_nsta_pane_g2

0x0001,

0xfa84,	// (0x000372af) cell_indicator_nsta_pane_g

0x41bb,	// (0x0002b9e6) clock_nsta_pane_cp

0x41c4,	// (0x0002b9ef) indicator_nsta_pane_cp

0x41ce,	// (0x0002b9f9) nsta_clock_indic_pane_g1

0xc325,	// (0x00033b50) grid_indicator_pane

0x9969,	// (0x00031194) scroll_pane_cp29

0xf367,	// (0x00036b92) indicator_nsta_pane_cp2_ParamLimits

0xf367,	// (0x00036b92) indicator_nsta_pane_cp2

0xc2e9,	// (0x00033b14) main_apps_wheel_pane

0xaba3,	// (0x000323ce) form_midp_field_text_pane_ParamLimits

0x11f5,	// (0x00028a20) scroll_bar_cp050_ParamLimits

0x4227,	// (0x0002ba52) cell_indicator_pane_ParamLimits

0x4227,	// (0x0002ba52) cell_indicator_pane

0x4240,	// (0x0002ba6b) cell_indicator_pane_g1

0xb62d,	// (0x00032e58) grid_wheel_folder_pane_ParamLimits

0xb62d,	// (0x00032e58) grid_wheel_folder_pane

0xb63b,	// (0x00032e66) list_wheel_apps_pane_ParamLimits

0xb63b,	// (0x00032e66) list_wheel_apps_pane

0xb649,	// (0x00032e74) main_apps_wheel_pane_g1_ParamLimits

0xb649,	// (0x00032e74) main_apps_wheel_pane_g1

0xb655,	// (0x00032e80) main_apps_wheel_pane_g2_ParamLimits

0xb655,	// (0x00032e80) main_apps_wheel_pane_g2

0x0001,

0xfaa0,	// (0x000372cb) main_apps_wheel_pane_g_ParamLimits

0xfaa0,	// (0x000372cb) main_apps_wheel_pane_g

0xb663,	// (0x00032e8e) main_apps_wheel_pane_t1_ParamLimits

0xb663,	// (0x00032e8e) main_apps_wheel_pane_t1

0xb677,	// (0x00032ea2) list_wheel_apps_pane_g1

0xb67f,	// (0x00032eaa) list_wheel_apps_pane_g2

0xb687,	// (0x00032eb2) list_wheel_apps_pane_g3

0xb68f,	// (0x00032eba) list_wheel_apps_pane_g4

0xb699,	// (0x00032ec4) list_wheel_apps_pane_g5

0x0004,

0xfaa5,	// (0x000372d0) list_wheel_apps_pane_g

0xce00,	// (0x0003462b) navi_icon_text_pane

0xa5fd,	// (0x00031e28) aid_fill_nsta

0x4307,	// (0x0002bb32) navi_icon_text_pane_g1

0x4313,	// (0x0002bb3e) navi_icon_text_pane_t1

0xcce4,	// (0x0003450f) list_set_graphic_pane_t1_ParamLimits

0xcce4,	// (0x0003450f) list_set_graphic_pane_t1

0x2cd8,	// (0x0002a503) popup_midp_note_alarm_window_t6_ParamLimits

0x2cd8,	// (0x0002a503) popup_midp_note_alarm_window_t6

0x2cea,	// (0x0002a515) popup_midp_note_alarm_window_t7_ParamLimits

0x2cea,	// (0x0002a515) popup_midp_note_alarm_window_t7

0x2cfc,	// (0x0002a527) popup_midp_note_alarm_window_t8_ParamLimits

0x2cfc,	// (0x0002a527) popup_midp_note_alarm_window_t8

0x2d0e,	// (0x0002a539) popup_midp_note_alarm_window_t9_ParamLimits

0x2d0e,	// (0x0002a539) popup_midp_note_alarm_window_t9

0x2d20,	// (0x0002a54b) popup_midp_note_alarm_window_t10_ParamLimits

0x2d20,	// (0x0002a54b) popup_midp_note_alarm_window_t10

0x2d32,	// (0x0002a55d) popup_midp_note_alarm_window_t11_ParamLimits

0x2d32,	// (0x0002a55d) popup_midp_note_alarm_window_t11

0xaeef,	// (0x0003271a) scroll_pane_cp17_ParamLimits

0xaeef,	// (0x0003271a) scroll_pane_cp17

0x158f,	// (0x00028dba) volume_small_pane_cp_g1

0x18db,	// (0x00029106) volume_small_pane_cp_g2

0x18e4,	// (0x0002910f) volume_small_pane_cp_g3

0x18ed,	// (0x00029118) volume_small_pane_cp_g4

0x18f6,	// (0x00029121) volume_small_pane_cp_g5

0x18a5,	// (0x000290d0) volume_small_pane_cp_g6

0x18ff,	// (0x0002912a) volume_small_pane_cp_g7

0x1908,	// (0x00029133) volume_small_pane_cp_g8

0x1911,	// (0x0002913c) volume_small_pane_cp_g9

0x191a,	// (0x00029145) volume_small_pane_cp_g10

0xcf72,	// (0x0003479d) midp_ticker_pane_g1_ParamLimits

0xcf7e,	// (0x000347a9) midp_ticker_pane_g2_ParamLimits

0xf724,	// (0x00036f4f) midp_ticker_pane_g_ParamLimits

0xcf8a,	// (0x000347b5) midp_ticker_pane_t1_ParamLimits

0xa621,	// (0x00031e4c) aid_fill_nsta_2

0x11e1,	// (0x00028a0c) list_form2_midp_pane

0x368c,	// (0x0002aeb7) midp_editing_number_pane_ParamLimits

0x369b,	// (0x0002aec6) midp_ticker_pane_ParamLimits

0x4325,	// (0x0002bb50) form2_midp_field_pane

0x4349,	// (0x0002bb74) scroll_pane_cp51

0x4369,	// (0x0002bb94) form2_midp_button_pane_ParamLimits

0x4369,	// (0x0002bb94) form2_midp_button_pane

0x437b,	// (0x0002bba6) form2_midp_content_pane_ParamLimits

0x437b,	// (0x0002bba6) form2_midp_content_pane

0x4395,	// (0x0002bbc0) form2_midp_field_choice_group_pane

0x439d,	// (0x0002bbc8) form2_midp_field_pane_g1

0x43a5,	// (0x0002bbd0) form2_midp_field_pane_g2

0x43ad,	// (0x0002bbd8) form2_midp_field_pane_g3

0x43b5,	// (0x0002bbe0) form2_midp_field_pane_g4

0x0003,

0xfaca,	// (0x000372f5) form2_midp_field_pane_g

0x43bd,	// (0x0002bbe8) form2_midp_gauge_slider_pane

0x43c5,	// (0x0002bbf0) form2_midp_gauge_wait_pane

0x43cd,	// (0x0002bbf8) form2_midp_image_pane_ParamLimits

0x43cd,	// (0x0002bbf8) form2_midp_image_pane

0xb6cc,	// (0x00032ef7) form2_midp_label_pane_ParamLimits

0xb6cc,	// (0x00032ef7) form2_midp_label_pane

0xb6e5,	// (0x00032f10) form2_midp_label_pane_cp_ParamLimits

0xb6e5,	// (0x00032f10) form2_midp_label_pane_cp

0x4422,	// (0x0002bc4d) form2_midp_string_pane_ParamLimits

0x4422,	// (0x0002bc4d) form2_midp_string_pane

0xee70,	// (0x0003669b) form2_midp_text_pane_ParamLimits

0xee70,	// (0x0003669b) form2_midp_text_pane

0x4434,	// (0x0002bc5f) form2_midp_time_pane

0x4444,	// (0x0002bc6f) input_focus_pane_cp51_ParamLimits

0x4444,	// (0x0002bc6f) input_focus_pane_cp51

0xb704,	// (0x00032f2f) form2_midp_label_pane_t1_ParamLimits

0xb704,	// (0x00032f2f) form2_midp_label_pane_t1

0xee89,	// (0x000366b4) form2_mdip_text_pane_t1_ParamLimits

0xee89,	// (0x000366b4) form2_mdip_text_pane_t1

0xeea7,	// (0x000366d2) form2_midp_time_pane_t1

0x44a5,	// (0x0002bcd0) form2_midp_gauge_slider_pane_t1

0xb744,	// (0x00032f6f) form2_midp_gauge_slider_pane_t2

0xb756,	// (0x00032f81) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad3,	// (0x000372fe) form2_midp_gauge_slider_pane_t

0x44db,	// (0x0002bd06) form2_midp_slider_pane

0x44e7,	// (0x0002bd12) form2_midp_gauge_wait_pane_t1

0x44f5,	// (0x0002bd20) form2_midp_wait_pane_ParamLimits

0x44f5,	// (0x0002bd20) form2_midp_wait_pane

0xb768,	// (0x00032f93) list_single_2graphic_pane_cp4_ParamLimits

0xb768,	// (0x00032f93) list_single_2graphic_pane_cp4

0xaafa,	// (0x00032325) list_single_midp_graphic_pane_cp_ParamLimits

0xaafa,	// (0x00032325) list_single_midp_graphic_pane_cp

0xc28d,	// (0x00033ab8) list_highlight_pane_cp20

0x4548,	// (0x0002bd73) list_single_2graphic_pane_g1_cp4

0x3b25,	// (0x0002b350) list_single_2graphic_pane_g2_cp4

0x4550,	// (0x0002bd7b) list_single_2graphic_pane_t1_cp4

0xc2e9,	// (0x00033b14) list_highlight_pane_cp21

0x455f,	// (0x0002bd8a) list_single_midp_graphic_pane_g4_cp

0x456e,	// (0x0002bd99) list_single_midp_graphic_pane_t1_cp

0xb77d,	// (0x00032fa8) form2_mdip_string_pane_t1_ParamLimits

0xb77d,	// (0x00032fa8) form2_mdip_string_pane_t1

0xc28d,	// (0x00033ab8) bg_wml_button_pane_cp2

0xc283,	// (0x00033aae) form2_midp_image_pane_g1

0xe90b,	// (0x00036136) list_double_large_graphic_pane_g5_ParamLimits

0xe90b,	// (0x00036136) list_double_large_graphic_pane_g5

0x9b69,	// (0x00031394) midp_form_pane_ParamLimits

0xc2e9,	// (0x00033b14) main_apps_wheel_pane_ParamLimits

0xa2db,	// (0x00031b06) popup_preview_window_ParamLimits

0xa2db,	// (0x00031b06) popup_preview_window

0xa5a8,	// (0x00031dd3) popup_touch_info_window_ParamLimits

0xa5a8,	// (0x00031dd3) popup_touch_info_window

0xa5c6,	// (0x00031df1) popup_touch_menu_window_ParamLimits

0xa5c6,	// (0x00031df1) popup_touch_menu_window

0xc279,	// (0x00033aa4) bg_popup_sub_pane_cp6

0x468a,	// (0x0002beb5) list_touch_menu_pane

0xb7f3,	// (0x0003301e) list_single_touch_menu_pane_ParamLimits

0xb7f3,	// (0x0003301e) list_single_touch_menu_pane

0xb807,	// (0x00033032) list_single_touch_menu_pane_t1

0xc2e9,	// (0x00033b14) bg_popup_sub_pane_cp7_ParamLimits

0xc2e9,	// (0x00033b14) bg_popup_sub_pane_cp7

0x46b6,	// (0x0002bee1) heading_sub_pane

0x46be,	// (0x0002bee9) list_touch_info_pane_ParamLimits

0x46be,	// (0x0002bee9) list_touch_info_pane

0x46cd,	// (0x0002bef8) list_single_touch_info_pane_ParamLimits

0x46cd,	// (0x0002bef8) list_single_touch_info_pane

0x46df,	// (0x0002bf0a) list_single_touch_info_pane_t1

0x46ed,	// (0x0002bf18) list_single_touch_info_pane_t2

0x0001,

0xfae1,	// (0x0003730c) list_single_touch_info_pane_t

0xcf5b,	// (0x00034786) bg_popup_heading_pane_cp

0x46fb,	// (0x0002bf26) heading_sub_pane_t1

0x0d9a,	// (0x000285c5) bg_popup_preview_window_pane_cp_ParamLimits

0x0d9a,	// (0x000285c5) bg_popup_preview_window_pane_cp

0x46b6,	// (0x0002bee1) heading_preview_pane

0x46be,	// (0x0002bee9) list_preview_pane_ParamLimits

0x46be,	// (0x0002bee9) list_preview_pane

0x4709,	// (0x0002bf34) popup_preview_window_g1

0x46cd,	// (0x0002bef8) list_single_preview_pane_ParamLimits

0x46cd,	// (0x0002bef8) list_single_preview_pane

0x4711,	// (0x0002bf3c) list_single_preview_pane_g1

0x4719,	// (0x0002bf44) list_single_preview_pane_t1

0x46df,	// (0x0002bf0a) list_single_preview_pane_t2

0x0001,

0xfae6,	// (0x00037311) list_single_preview_pane_t

0x4727,	// (0x0002bf52) bg_popup_heading_pane_cp2_ParamLimits

0x4727,	// (0x0002bf52) bg_popup_heading_pane_cp2

0x473d,	// (0x0002bf68) heading_preview_pane_g1

0x4745,	// (0x0002bf70) heading_preview_pane_t1_ParamLimits

0x4745,	// (0x0002bf70) heading_preview_pane_t1

0xc33c,	// (0x00033b67) soft_indicator_pane_t1_ParamLimits

0xc61b,	// (0x00033e46) scroll_pane_ParamLimits

0xc9c4,	// (0x000341ef) scroll_sc2_left_pane

0xc9cd,	// (0x000341f8) scroll_sc2_right_pane

0xc9ec,	// (0x00034217) scroll_bg_pane_g1_ParamLimits

0xca01,	// (0x0003422c) scroll_bg_pane_g2_ParamLimits

0xca19,	// (0x00034244) scroll_bg_pane_g3_ParamLimits

0xf6af,	// (0x00036eda) scroll_bg_pane_g_ParamLimits

0xc9ec,	// (0x00034217) scroll_handle_pane_g1_ParamLimits

0xca2e,	// (0x00034259) scroll_handle_pane_g2_ParamLimits

0xca19,	// (0x00034244) scroll_handle_pane_g3_ParamLimits

0xf6b6,	// (0x00036ee1) scroll_handle_pane_g_ParamLimits

0x9ea8,	// (0x000316d3) popup_choice_list_window_ParamLimits

0x9ea8,	// (0x000316d3) popup_choice_list_window

0x0bb0,	// (0x000283db) choice_list_pane

0x0c62,	// (0x0002848d) cell_toolbar_pane_t1

0x0c8a,	// (0x000284b5) toolbar_button_pane_ParamLimits

0x31fe,	// (0x0002aa29) ai_gene_pane_1_t2_ParamLimits

0x31fe,	// (0x0002aa29) ai_gene_pane_1_t2

0x0001,

0xf8d9,	// (0x00037104) ai_gene_pane_1_t_ParamLimits

0xf8d9,	// (0x00037104) ai_gene_pane_1_t

0x4762,	// (0x0002bf8d) scroll_sc2_left_pane_g1

0x4762,	// (0x0002bf8d) scroll_sc2_right_pane_g1

0xc7e1,	// (0x0003400c) bg_popup_sub_pane_cp10

0x476c,	// (0x0002bf97) list_choice_list_pane

0xb38f,	// (0x00032bba) list_single_choice_list_pane_ParamLimits

0xb38f,	// (0x00032bba) list_single_choice_list_pane

0xd10f,	// (0x0003493a) list_single_choice_list_pane_g1

0x9793,	// (0x00030fbe) list_single_choice_list_pane_t1_ParamLimits

0x9793,	// (0x00030fbe) list_single_choice_list_pane_t1

0x47a0,	// (0x0002bfcb) choice_list_pane_g1

0xb815,	// (0x00033040) choice_list_pane_t1

0xc279,	// (0x00033aa4) input_focus_pane_cp11

0xc939,	// (0x00034164) title_pane_stacon_g2_ParamLimits

0xc939,	// (0x00034164) title_pane_stacon_g2

0x0002,

0xf695,	// (0x00036ec0) title_pane_stacon_g_ParamLimits

0xf695,	// (0x00036ec0) title_pane_stacon_g

0xcf5b,	// (0x00034786) cursor_press_pane

0x9f4f,	// (0x0003177a) popup_fep_hwr_window_ParamLimits

0x9f4f,	// (0x0003177a) popup_fep_hwr_window

0x0306,	// (0x00027b31) popup_fep_vkb_window_ParamLimits

0x0306,	// (0x00027b31) popup_fep_vkb_window

0xb823,	// (0x0003304e) cursor_press_pane_g1

0x0002,

0xfb0f,	// (0x0003733a) fep_vkb_side_pane_g_ParamLimits

0x195c,	// (0x00029187) fep_hwr_candidate_pane_ParamLimits

0x195c,	// (0x00029187) fep_hwr_candidate_pane

0x1986,	// (0x000291b1) fep_hwr_side_pane_ParamLimits

0x1986,	// (0x000291b1) fep_hwr_side_pane

0x19a6,	// (0x000291d1) fep_hwr_top_pane_ParamLimits

0x19a6,	// (0x000291d1) fep_hwr_top_pane

0x19be,	// (0x000291e9) fep_hwr_write_pane_ParamLimits

0x19be,	// (0x000291e9) fep_hwr_write_pane

0xfb0f,	// (0x0003733a) fep_vkb_side_pane_g

0x47be,	// (0x0002bfe9) fep_hwr_top_pane_g1

0x47d0,	// (0x0002bffb) fep_hwr_top_pane_g2

0x19ea,	// (0x00029215) fep_hwr_top_pane_g3

0x0002,

0xfaeb,	// (0x00037316) fep_hwr_top_pane_g

0x19ff,	// (0x0002922a) fep_hwr_top_text_pane

0xcaf1,	// (0x0003431c) fep_hwr_top_text_pane_g1

0x4806,	// (0x0002c031) fep_hwr_top_text_pane_t1

0x1af5,	// (0x00029320) fep_hwr_candidate_pane_g1

0x4a4b,	// (0x0002c276) fep_vkb_keypad_pane_g3_ParamLimits

0x4a4b,	// (0x0002c276) fep_vkb_keypad_pane_g3

0x4a73,	// (0x0002c29e) fep_vkb_keypad_pane_g4_ParamLimits

0x4a73,	// (0x0002c29e) fep_vkb_keypad_pane_g4

0x4ae2,	// (0x0002c30d) fep_vkb_bottom_pane_g2_ParamLimits

0x4ae2,	// (0x0002c30d) fep_vkb_bottom_pane_g2

0x0001,

0xfb16,	// (0x00037341) fep_vkb_bottom_pane_g_ParamLimits

0xfb16,	// (0x00037341) fep_vkb_bottom_pane_g

0x4762,	// (0x0002bf8d) cell_vkb_side_pane_g2

0x0001,

0xfb20,	// (0x0003734b) cell_vkb_side_pane_g

0x4b6d,	// (0x0002c398) cell_vkb_side_pane_t1

0x4b7b,	// (0x0002c3a6) cell_vkb_side_pane_t1_copy1

0x4762,	// (0x0002bf8d) bg_fep_vkb_candidate_pane_g2

0x4ca7,	// (0x0002c4d2) cell_vkb_candidate_pane_ParamLimits

0x4814,	// (0x0002c03f) aid_size_cell_vkb_ParamLimits

0x4814,	// (0x0002c03f) aid_size_cell_vkb

0x4ca7,	// (0x0002c4d2) cell_vkb_candidate_pane

0x1b0f,	// (0x0002933a) bg_popup_fep_shadow_pane_g1

0xb88a,	// (0x000330b5) fep_vkb_bottom_pane_ParamLimits

0xb88a,	// (0x000330b5) fep_vkb_bottom_pane

0x48d8,	// (0x0002c103) fep_vkb_candidate_pane_ParamLimits

0x48d8,	// (0x0002c103) fep_vkb_candidate_pane

0xb8af,	// (0x000330da) fep_vkb_keypad_pane_ParamLimits

0xb8af,	// (0x000330da) fep_vkb_keypad_pane

0xb8e4,	// (0x0003310f) fep_vkb_side_pane_ParamLimits

0xb8e4,	// (0x0003310f) fep_vkb_side_pane

0xb920,	// (0x0003314b) fep_vkb_top_pane_ParamLimits

0xb920,	// (0x0003314b) fep_vkb_top_pane

0x49a4,	// (0x0002c1cf) fep_vkb_top_pane_g1_ParamLimits

0x49a4,	// (0x0002c1cf) fep_vkb_top_pane_g1

0x49b3,	// (0x0002c1de) fep_vkb_top_pane_g2_ParamLimits

0x49b3,	// (0x0002c1de) fep_vkb_top_pane_g2

0x49c2,	// (0x0002c1ed) fep_vkb_top_pane_g3_ParamLimits

0x49c2,	// (0x0002c1ed) fep_vkb_top_pane_g3

0x0003,

0xfb06,	// (0x00037331) fep_vkb_top_pane_g_ParamLimits

0xfb06,	// (0x00037331) fep_vkb_top_pane_g

0x49e0,	// (0x0002c20b) fep_vkb_top_text_pane_ParamLimits

0x49e0,	// (0x0002c20b) fep_vkb_top_text_pane

0xb955,	// (0x00033180) fep_vkb_side_pane_g1_ParamLimits

0xb955,	// (0x00033180) fep_vkb_side_pane_g1

0x4a3a,	// (0x0002c265) grid_vkb_side_pane_ParamLimits

0x4a3a,	// (0x0002c265) grid_vkb_side_pane

0x1b17,	// (0x00029342) bg_popup_fep_shadow_pane_g2

0x1b20,	// (0x0002934b) bg_popup_fep_shadow_pane_g3

0x1b28,	// (0x00029353) bg_popup_fep_shadow_pane_g4

0x1b31,	// (0x0002935c) bg_popup_fep_shadow_pane_g5

0x1b3b,	// (0x00029366) bg_popup_fep_shadow_pane_g6

0x1b43,	// (0x0002936e) bg_popup_fep_shadow_pane_g7

0xc717,	// (0x00033f42) bg_popup_fep_shadow_pane_g8

0x4a91,	// (0x0002c2bc) grid_vkb_keypad_number_pane_ParamLimits

0x4a91,	// (0x0002c2bc) grid_vkb_keypad_number_pane

0x4aa1,	// (0x0002c2cc) grid_vkb_keypad_pane_ParamLimits

0x4aa1,	// (0x0002c2cc) grid_vkb_keypad_pane

0x4ac7,	// (0x0002c2f2) fep_vkb_bottom_pane_g1_ParamLimits

0x4ac7,	// (0x0002c2f2) fep_vkb_bottom_pane_g1

0x4af0,	// (0x0002c31b) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4af0,	// (0x0002c31b) grid_vkb_keypad_bottom_left_pane

0x4b05,	// (0x0002c330) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4b05,	// (0x0002c330) grid_vkb_keypad_bottom_right_pane

0x4b1a,	// (0x0002c345) fep_vkb_top_text_pane_g1

0xb99c,	// (0x000331c7) fep_vkb_top_text_pane_t1

0xb9ae,	// (0x000331d9) cell_vkb_side_pane_ParamLimits

0xb9ae,	// (0x000331d9) cell_vkb_side_pane

0x4762,	// (0x0002bf8d) cell_vkb_side_pane_g1

0x4b89,	// (0x0002c3b4) cell_vkb_keypad_pane_ParamLimits

0x4b89,	// (0x0002c3b4) cell_vkb_keypad_pane

0x4bfe,	// (0x0002c429) cell_vkb_keypad_pane_g1

0x0008,

0xfb33,	// (0x0003735e) bg_popup_fep_shadow_pane_g

0x4762,	// (0x0002bf8d) cell_hwr_side_pane_g1

0x4762,	// (0x0002bf8d) cell_hwr_side_pane_g2

0x4c08,	// (0x0002c433) cell_vkb_keypad_pane_t1

0xb9c4,	// (0x000331ef) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb9c4,	// (0x000331ef) cell_vkb_keypad_bottom_left_pane

0xb9d9,	// (0x00033204) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb9d9,	// (0x00033204) cell_vkb_keypad_bottom_right_pane

0x4762,	// (0x0002bf8d) cell_vkb_keypad_bottom_left_pane_g1

0x4762,	// (0x0002bf8d) cell_vkb_keypad_bottom_right_pane_g1

0x4c6c,	// (0x0002c497) cell_vkb_keypad_number_pane_ParamLimits

0x4c6c,	// (0x0002c497) cell_vkb_keypad_number_pane

0x4c8b,	// (0x0002c4b6) cell_vkb_keypad_number_pane_g1

0x4c95,	// (0x0002c4c0) cell_vkb_keypad_number_pane_g2

0x4c9e,	// (0x0002c4c9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb25,	// (0x00037350) cell_vkb_keypad_number_pane_g

0x4c08,	// (0x0002c433) cell_vkb_keypad_number_pane_t1

0x4cc2,	// (0x0002c4ed) fep_vkb_candidate_pane_g1

0x0001,

0xfb20,	// (0x0003734b) cell_hwr_side_pane_g

0x4cdb,	// (0x0002c506) cell_hwr_side_pane_t1

0x1b55,	// (0x00029380) cell_hwr_side_pane_t1_copy1

0x49d2,	// (0x0002c1fd) cell_hwr_candidate_pane_g1

0x1b63,	// (0x0002938e) cell_hwr_candidate_pane_t1

0x4762,	// (0x0002bf8d) cell_vkb_candidate_pane_g2

0x4d61,	// (0x0002c58c) cell_vkb_candidate_pane_t1

0x1923,	// (0x0002914e) bg_popup_fep_shadow_pane_ParamLimits

0x1923,	// (0x0002914e) bg_popup_fep_shadow_pane

0xd117,	// (0x00034942) bg_fep_hwr_top_pane_g4

0x47e2,	// (0x0002c00d) bg_hwr_side_pane_g1_ParamLimits

0x47e2,	// (0x0002c00d) bg_hwr_side_pane_g1

0xb843,	// (0x0003306e) cell_hwr_side_pane_ParamLimits

0xb843,	// (0x0003306e) cell_hwr_side_pane

0x1a76,	// (0x000292a1) fep_hwr_write_pane_g1_ParamLimits

0x1a76,	// (0x000292a1) fep_hwr_write_pane_g1

0x1a83,	// (0x000292ae) fep_hwr_write_pane_g2_ParamLimits

0x1a83,	// (0x000292ae) fep_hwr_write_pane_g2

0x1a90,	// (0x000292bb) fep_hwr_write_pane_g3_ParamLimits

0x1a90,	// (0x000292bb) fep_hwr_write_pane_g3

0xb863,	// (0x0003308e) fep_hwr_write_pane_g4_ParamLimits

0xb863,	// (0x0003308e) fep_hwr_write_pane_g4

0x0005,

0xfaf2,	// (0x0003731d) fep_hwr_write_pane_g_ParamLimits

0xfaf2,	// (0x0003731d) fep_hwr_write_pane_g

0xd117,	// (0x00034942) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xd117,	// (0x00034942) bg_fep_hwr_candidate_pane_g2

0x1ab3,	// (0x000292de) cell_hwr_candidate_pane_ParamLimits

0x1ab3,	// (0x000292de) cell_hwr_candidate_pane

0x1af5,	// (0x00029320) fep_hwr_candidate_pane_g1_ParamLimits

0x4842,	// (0x0002c06d) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4842,	// (0x0002c06d) bg_popup_fep_shadow_pane_cp2

0x49d2,	// (0x0002c1fd) fep_vkb_top_pane_g4_ParamLimits

0x49d2,	// (0x0002c1fd) fep_vkb_top_pane_g4

0x4a18,	// (0x0002c243) fep_vkb_side_pane_g2_ParamLimits

0x4a18,	// (0x0002c243) fep_vkb_side_pane_g2

0x8813,	// (0x0003003e) list_setting_pane_t4_ParamLimits

0x8813,	// (0x0003003e) list_setting_pane_t4

0xe9bf,	// (0x000361ea) list_setting_number_pane_t5_ParamLimits

0xe9bf,	// (0x000361ea) list_setting_number_pane_t5

0xcb28,	// (0x00034353) list_double_heading_pane_cp2_ParamLimits

0xcb28,	// (0x00034353) list_double_heading_pane_cp2

0xd13f,	// (0x0003496a) list_double_heading_pane_g1_cp2_ParamLimits

0xd13f,	// (0x0003496a) list_double_heading_pane_g1_cp2

0x4d6f,	// (0x0002c59a) list_double_heading_pane_g2_cp2_ParamLimits

0x4d6f,	// (0x0002c59a) list_double_heading_pane_g2_cp2

0x4d83,	// (0x0002c5ae) list_double_heading_pane_t1_cp2_ParamLimits

0x4d83,	// (0x0002c5ae) list_double_heading_pane_t1_cp2

0x4d99,	// (0x0002c5c4) list_double_heading_pane_t2_cp2_ParamLimits

0x4d99,	// (0x0002c5c4) list_double_heading_pane_t2_cp2

0xc271,	// (0x00033a9c) aid_value_unit2

0xe7fd,	// (0x00036028) popup_preview_fixed_window

0xc413,	// (0x00033c3e) bg_popup_preview_window_pane_cp02

0x4dab,	// (0x0002c5d6) list_preview_fixed_pane

0x4df1,	// (0x0002c61c) list_empty_pane_fp_ParamLimits

0x4df1,	// (0x0002c61c) list_empty_pane_fp

0x4df1,	// (0x0002c61c) list_single_cale_day_pane_fp_ParamLimits

0x4df1,	// (0x0002c61c) list_single_cale_day_pane_fp

0x4df1,	// (0x0002c61c) list_single_graphic_heading_pane_fp_ParamLimits

0x4df1,	// (0x0002c61c) list_single_graphic_heading_pane_fp

0x4df1,	// (0x0002c61c) list_single_graphic_pane_fp_ParamLimits

0x4df1,	// (0x0002c61c) list_single_graphic_pane_fp

0x4df1,	// (0x0002c61c) list_single_heading_pane_fp_ParamLimits

0x4df1,	// (0x0002c61c) list_single_heading_pane_fp

0x4df1,	// (0x0002c61c) list_single_pane_fp_ParamLimits

0x4df1,	// (0x0002c61c) list_single_pane_fp

0x4e07,	// (0x0002c632) list_single_pane_fp_g1_ParamLimits

0x4e07,	// (0x0002c632) list_single_pane_fp_g1

0xe8f3,	// (0x0003611e) list_single_pane_fp_g2_ParamLimits

0xe8f3,	// (0x0003611e) list_single_pane_fp_g2

0xeeba,	// (0x000366e5) list_single_pane_fp_g3_ParamLimits

0xeeba,	// (0x000366e5) list_single_pane_fp_g3

0x4e13,	// (0x0002c63e) list_single_pane_fp_g4_ParamLimits

0x4e13,	// (0x0002c63e) list_single_pane_fp_g4

0x0003,

0xfb54,	// (0x0003737f) list_single_pane_fp_g_ParamLimits

0xfb54,	// (0x0003737f) list_single_pane_fp_g

0xeece,	// (0x000366f9) list_single_pane_fp_t1_ParamLimits

0xeece,	// (0x000366f9) list_single_pane_fp_t1

0xeee5,	// (0x00036710) list_single_graphic_pane_fp_g1_ParamLimits

0xeee5,	// (0x00036710) list_single_graphic_pane_fp_g1

0x4e07,	// (0x0002c632) list_single_graphic_pane_fp_g2_ParamLimits

0x4e07,	// (0x0002c632) list_single_graphic_pane_fp_g2

0xe8f3,	// (0x0003611e) list_single_graphic_pane_fp_g3_ParamLimits

0xe8f3,	// (0x0003611e) list_single_graphic_pane_fp_g3

0xeeba,	// (0x000366e5) list_single_graphic_pane_fp_g4_ParamLimits

0xeeba,	// (0x000366e5) list_single_graphic_pane_fp_g4

0x4e13,	// (0x0002c63e) list_single_graphic_pane_fp_g5_ParamLimits

0x4e13,	// (0x0002c63e) list_single_graphic_pane_fp_g5

0x0004,

0xfb5d,	// (0x00037388) list_single_graphic_pane_fp_g_ParamLimits

0xfb5d,	// (0x00037388) list_single_graphic_pane_fp_g

0xeef1,	// (0x0003671c) list_single_graphic_pane_fp_t1_ParamLimits

0xeef1,	// (0x0003671c) list_single_graphic_pane_fp_t1

0xeee5,	// (0x00036710) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeee5,	// (0x00036710) list_single_graphic_heading_pane_fp_g1

0x4e07,	// (0x0002c632) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4e07,	// (0x0002c632) list_single_graphic_heading_pane_fp_g2

0xe8f3,	// (0x0003611e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe8f3,	// (0x0003611e) list_single_graphic_heading_pane_fp_g3

0xeeba,	// (0x000366e5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xeeba,	// (0x000366e5) list_single_graphic_heading_pane_fp_g4

0x4e13,	// (0x0002c63e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4e13,	// (0x0002c63e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5d,	// (0x00037388) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5d,	// (0x00037388) list_single_graphic_heading_pane_fp_g

0xef07,	// (0x00036732) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xef07,	// (0x00036732) list_single_graphic_heading_pane_fp_t1

0xef1d,	// (0x00036748) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xef1d,	// (0x00036748) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb68,	// (0x00037393) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb68,	// (0x00037393) list_single_graphic_heading_pane_fp_t

0xef2f,	// (0x0003675a) list_single_cale_day_pane_fp_g1_ParamLimits

0xef2f,	// (0x0003675a) list_single_cale_day_pane_fp_g1

0x4e1f,	// (0x0002c64a) list_single_cale_day_pane_fp_g2_ParamLimits

0x4e1f,	// (0x0002c64a) list_single_cale_day_pane_fp_g2

0xef67,	// (0x00036792) list_single_cale_day_pane_fp_g3_ParamLimits

0xef67,	// (0x00036792) list_single_cale_day_pane_fp_g3

0xef8f,	// (0x000367ba) list_single_cale_day_pane_fp_g4_ParamLimits

0xef8f,	// (0x000367ba) list_single_cale_day_pane_fp_g4

0xefb3,	// (0x000367de) list_single_cale_day_pane_fp_g5_ParamLimits

0xefb3,	// (0x000367de) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6d,	// (0x00037398) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6d,	// (0x00037398) list_single_cale_day_pane_fp_g

0xefd7,	// (0x00036802) list_single_cale_day_pane_fp_t1_ParamLimits

0xefd7,	// (0x00036802) list_single_cale_day_pane_fp_t1

0xeffd,	// (0x00036828) list_single_cale_day_pane_fp_t2_ParamLimits

0xeffd,	// (0x00036828) list_single_cale_day_pane_fp_t2

0xf016,	// (0x00036841) list_single_cale_day_pane_fp_t3_ParamLimits

0xf016,	// (0x00036841) list_single_cale_day_pane_fp_t3

0x0002,

0xfb78,	// (0x000373a3) list_single_cale_day_pane_fp_t_ParamLimits

0xfb78,	// (0x000373a3) list_single_cale_day_pane_fp_t

0x4e07,	// (0x0002c632) list_empty_pane_fp_g1_ParamLimits

0x4e07,	// (0x0002c632) list_empty_pane_fp_g1

0xf02f,	// (0x0003685a) list_empty_pane_fp_t1

0xf03d,	// (0x00036868) list_empty_pane_fp_t2

0x0001,

0xfb7f,	// (0x000373aa) list_empty_pane_fp_t

0x4e07,	// (0x0002c632) list_single_heading_pane_fp_g1_ParamLimits

0x4e07,	// (0x0002c632) list_single_heading_pane_fp_g1

0xe8f3,	// (0x0003611e) list_single_heading_pane_fp_g2_ParamLimits

0xe8f3,	// (0x0003611e) list_single_heading_pane_fp_g2

0xeeba,	// (0x000366e5) list_single_heading_pane_fp_g3_ParamLimits

0xeeba,	// (0x000366e5) list_single_heading_pane_fp_g3

0x0002,

0xfb84,	// (0x000373af) list_single_heading_pane_fp_g_ParamLimits

0xfb84,	// (0x000373af) list_single_heading_pane_fp_g

0xf04b,	// (0x00036876) list_single_heading_pane_fp_t1_ParamLimits

0xf04b,	// (0x00036876) list_single_heading_pane_fp_t1

0xf05d,	// (0x00036888) list_single_heading_pane_fp_t2_ParamLimits

0xf05d,	// (0x00036888) list_single_heading_pane_fp_t2

0x0001,

0xfb8b,	// (0x000373b6) list_single_heading_pane_fp_t_ParamLimits

0xfb8b,	// (0x000373b6) list_single_heading_pane_fp_t

0x97df,	// (0x0003100a) aid_size_cell_fast

0xc3f6,	// (0x00033c21) soft_indicator_pane_cp1_t1

0x97e8,	// (0x00031013) cell_app_pane_cp2_ParamLimits

0x97e8,	// (0x00031013) cell_app_pane_cp2

0x1945,	// (0x00029170) fep_hwr_candidate_drop_down_list_pane

0xd125,	// (0x00034950) fep_hwr_candidate_pane_g3_ParamLimits

0xd125,	// (0x00034950) fep_hwr_candidate_pane_g3

0xd132,	// (0x0003495d) fep_hwr_candidate_pane_g4_ParamLimits

0xd132,	// (0x0003495d) fep_hwr_candidate_pane_g4

0x0002,

0xfaff,	// (0x0003732a) fep_hwr_candidate_pane_g_ParamLimits

0xfaff,	// (0x0003732a) fep_hwr_candidate_pane_g

0x48c7,	// (0x0002c0f2) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x48c7,	// (0x0002c0f2) fep_vkb_candidate_drop_down_list_pane

0x4cca,	// (0x0002c4f5) fep_vkb_candidate_pane_g3

0x4cd2,	// (0x0002c4fd) fep_vkb_candidate_pane_g4

0x0002,

0xfb2c,	// (0x00037357) fep_vkb_candidate_pane_g

0x49d2,	// (0x0002c1fd) cell_hwr_candidate_pane_g1_ParamLimits

0x4ce9,	// (0x0002c514) cell_hwr_candidate_pane_g3_ParamLimits

0x4ce9,	// (0x0002c514) cell_hwr_candidate_pane_g3

0x4d0a,	// (0x0002c535) cell_hwr_candidate_pane_g4_ParamLimits

0x4d0a,	// (0x0002c535) cell_hwr_candidate_pane_g4

0x0002,

0xfb46,	// (0x00037371) cell_hwr_candidate_pane_g_ParamLimits

0xfb46,	// (0x00037371) cell_hwr_candidate_pane_g

0x4d2b,	// (0x0002c556) cell_vkb_candidate_pane_g3_ParamLimits

0x4d2b,	// (0x0002c556) cell_vkb_candidate_pane_g3

0x4d46,	// (0x0002c571) cell_vkb_candidate_pane_g4_ParamLimits

0x4d46,	// (0x0002c571) cell_vkb_candidate_pane_g4

0xb9f4,	// (0x0003321f) cell_app_pane_cp2_g1_ParamLimits

0xb9f4,	// (0x0003321f) cell_app_pane_cp2_g1

0x4e49,	// (0x0002c674) cell_app_pane_cp2_g2_ParamLimits

0x4e49,	// (0x0002c674) cell_app_pane_cp2_g2

0x0001,

0xfb90,	// (0x000373bb) cell_app_pane_cp2_g_ParamLimits

0xfb90,	// (0x000373bb) cell_app_pane_cp2_g

0x4e55,	// (0x0002c680) cell_app_pane_cp2_t1_ParamLimits

0x4e55,	// (0x0002c680) cell_app_pane_cp2_t1

0xc69f,	// (0x00033eca) grid_highlight_pane_cp1_ParamLimits

0xc69f,	// (0x00033eca) grid_highlight_pane_cp1

0x1b81,	// (0x000293ac) cell_hwr_candidate_pane_cp1_ParamLimits

0x1b81,	// (0x000293ac) cell_hwr_candidate_pane_cp1

0x49d2,	// (0x0002c1fd) fep_hwr_candidate_drop_down_list_pane_g1

0x4e67,	// (0x0002c692) fep_hwr_candidate_drop_down_list_pane_g2

0x4e74,	// (0x0002c69f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb95,	// (0x000373c0) fep_hwr_candidate_drop_down_list_pane_g

0x1ba0,	// (0x000293cb) fep_hwr_candidate_drop_down_list_scroll_pane

0x1ba9,	// (0x000293d4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1ba9,	// (0x000293d4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1bb6,	// (0x000293e1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1bb6,	// (0x000293e1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1bc3,	// (0x000293ee) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1bc3,	// (0x000293ee) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4d2b,	// (0x0002c556) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d2b,	// (0x0002c556) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4d46,	// (0x0002c571) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d46,	// (0x0002c571) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1bd0,	// (0x000293fb) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1bd0,	// (0x000293fb) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1beb,	// (0x00029416) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1beb,	// (0x00029416) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1c06,	// (0x00029431) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1c06,	// (0x00029431) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9c,	// (0x000373c7) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9c,	// (0x000373c7) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e81,	// (0x0002c6ac) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e81,	// (0x0002c6ac) cell_vkb_candidate_pane_cp1

0x49d2,	// (0x0002c1fd) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x49d2,	// (0x0002c1fd) fep_vkb_candidate_drop_down_list_pane_g1

0x4e67,	// (0x0002c692) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e67,	// (0x0002c692) fep_vkb_candidate_drop_down_list_pane_g2

0x4e74,	// (0x0002c69f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e74,	// (0x0002c69f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb95,	// (0x000373c0) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb95,	// (0x000373c0) fep_vkb_candidate_drop_down_list_pane_g

0x4ea1,	// (0x0002c6cc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4ea1,	// (0x0002c6cc) fep_vkb_candidate_drop_down_list_scroll_pane

0x4eae,	// (0x0002c6d9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4eae,	// (0x0002c6d9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4ebb,	// (0x0002c6e6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4ebb,	// (0x0002c6e6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4ec7,	// (0x0002c6f2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4ec7,	// (0x0002c6f2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4ce9,	// (0x0002c514) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4ce9,	// (0x0002c514) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4d0a,	// (0x0002c535) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d0a,	// (0x0002c535) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4ed3,	// (0x0002c6fe) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4ed3,	// (0x0002c6fe) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4ef4,	// (0x0002c71f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4ef4,	// (0x0002c71f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f15,	// (0x0002c740) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f15,	// (0x0002c740) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x000373d8) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x000373d8) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x90e4,	// (0x0003090f) title_pane_g1_ParamLimits

0x90f7,	// (0x00030922) title_pane_g2_ParamLimits

0xf529,	// (0x00036d54) title_pane_g_ParamLimits

0xcae1,	// (0x0003430c) aid_call2_pane

0xcae9,	// (0x00034314) aid_call_pane

0xcaf1,	// (0x0003431c) popup_clock_analogue_window_g1

0xcaf1,	// (0x0003431c) popup_clock_analogue_window_g2

0xf2ab,	// (0x00036ad6) popup_clock_analogue_window_g3

0xf2b4,	// (0x00036adf) popup_clock_analogue_window_g4

0xc283,	// (0x00033aae) popup_clock_analogue_window_g5

0x0004,

0xf6c4,	// (0x00036eef) popup_clock_analogue_window_g

0xf2bc,	// (0x00036ae7) popup_clock_analogue_window_t1

0xf2ca,	// (0x00036af5) clock_digital_number_pane_ParamLimits

0xf2ca,	// (0x00036af5) clock_digital_number_pane

0xf2d6,	// (0x00036b01) clock_digital_number_pane_cp02_ParamLimits

0xf2d6,	// (0x00036b01) clock_digital_number_pane_cp02

0xf2e2,	// (0x00036b0d) clock_digital_number_pane_cp03_ParamLimits

0xf2e2,	// (0x00036b0d) clock_digital_number_pane_cp03

0xf2ee,	// (0x00036b19) clock_digital_number_pane_cp04_ParamLimits

0xf2ee,	// (0x00036b19) clock_digital_number_pane_cp04

0xf2fa,	// (0x00036b25) clock_digital_separator_pane_ParamLimits

0xf2fa,	// (0x00036b25) clock_digital_separator_pane

0xf306,	// (0x00036b31) popup_clock_digital_window_t1_ParamLimits

0xf306,	// (0x00036b31) popup_clock_digital_window_t1

0xc283,	// (0x00033aae) clock_digital_number_pane_g1

0xc283,	// (0x00033aae) clock_digital_number_pane_g2

0x0001,

0xf6cf,	// (0x00036efa) clock_digital_number_pane_g

0xc283,	// (0x00033aae) clock_digital_separator_pane_g1

0xc283,	// (0x00033aae) clock_digital_separator_pane_g2

0x0001,

0xf6cf,	// (0x00036efa) clock_digital_separator_pane_g

0xa5fd,	// (0x00031e28) aid_fill_nsta_ParamLimits

0xa733,	// (0x00031f5e) indicator_nsta_pane_ParamLimits

0x0a40,	// (0x0002826b) popup_clock_analogue_window

0x0a40,	// (0x0002826b) popup_clock_digital_window

0xb5e7,	// (0x00032e12) grid_indicator_nsta_pane_ParamLimits

0x4158,	// (0x0002b983) clock_nsta_pane_t2

0x0001,

0xfa7f,	// (0x000372aa) clock_nsta_pane_t

0xf28c,	// (0x00036ab7) aid_size_max_handle

0x98c6,	// (0x000310f1) aid_size_min_handle

0xcf5b,	// (0x00034786) editor_scroll_pane

0x4f30,	// (0x0002c75b) ex_editor_pane

0xc7d1,	// (0x00033ffc) scroll_pane_cp13

0xc647,	// (0x00033e72) scroll_pane_cp14

0xcb20,	// (0x0003434b) scroll_pane_cp36

0x9990,	// (0x000311bb) list_single_graphic_hl_pane_cp2_ParamLimits

0x9990,	// (0x000311bb) list_single_graphic_hl_pane_cp2

0x8b66,	// (0x00030391) list_single_graphic_hl_pane_ParamLimits

0x8b66,	// (0x00030391) list_single_graphic_hl_pane

0x8b79,	// (0x000303a4) aid_size_min_hl_cp1

0x4f38,	// (0x0002c763) list_highlight_pane_cp34_ParamLimits

0x4f38,	// (0x0002c763) list_highlight_pane_cp34

0x4f49,	// (0x0002c774) list_single_graphic_hl_pane_g1_ParamLimits

0x4f49,	// (0x0002c774) list_single_graphic_hl_pane_g1

0x8b82,	// (0x000303ad) list_single_graphic_hl_pane_g2_ParamLimits

0x8b82,	// (0x000303ad) list_single_graphic_hl_pane_g2

0x8b82,	// (0x000303ad) list_single_graphic_hl_pane_g3_ParamLimits

0x8b82,	// (0x000303ad) list_single_graphic_hl_pane_g3

0x8b8e,	// (0x000303b9) list_single_graphic_hl_pane_g4_ParamLimits

0x8b8e,	// (0x000303b9) list_single_graphic_hl_pane_g4

0x8b9a,	// (0x000303c5) list_single_graphic_hl_pane_g5_ParamLimits

0x8b9a,	// (0x000303c5) list_single_graphic_hl_pane_g5

0x0004,

0xfbbe,	// (0x000373e9) list_single_graphic_hl_pane_g_ParamLimits

0xfbbe,	// (0x000373e9) list_single_graphic_hl_pane_g

0x8bae,	// (0x000303d9) list_single_graphic_hl_pane_t1_ParamLimits

0x8bae,	// (0x000303d9) list_single_graphic_hl_pane_t1

0x4f56,	// (0x0002c781) aid_size_min_hl_cp2

0x4f5f,	// (0x0002c78a) list_highlight_pane_cp34_cp2_ParamLimits

0x4f5f,	// (0x0002c78a) list_highlight_pane_cp34_cp2

0x4f49,	// (0x0002c774) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f49,	// (0x0002c774) list_single_graphic_hl_pane_g1_cp2

0x4f6c,	// (0x0002c797) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4f6c,	// (0x0002c797) list_single_graphic_hl_pane_g2_cp2

0xba12,	// (0x0003323d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xba12,	// (0x0003323d) list_single_graphic_hl_pane_g3_cp2

0xceba,	// (0x000346e5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xceba,	// (0x000346e5) list_single_graphic_hl_pane_g4_cp2

0x4f86,	// (0x0002c7b1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4f86,	// (0x0002c7b1) list_single_graphic_hl_pane_g5_cp2

0x9d1c,	// (0x00031547) control_pane_g4_ParamLimits

0x9d1c,	// (0x00031547) control_pane_g4

0xc7e1,	// (0x0003400c) bg_popup_sub_pane_cp10_ParamLimits

0x476c,	// (0x0002bf97) list_choice_list_pane_ParamLimits

0x477b,	// (0x0002bfa6) scroll_pane_cp23

0xc413,	// (0x00033c3e) bg_popup_preview_window_pane_cp02_ParamLimits

0x4dab,	// (0x0002c5d6) list_preview_fixed_pane_ParamLimits

0x4dc1,	// (0x0002c5ec) list_preview_fixed_pane_cp_ParamLimits

0x4dc1,	// (0x0002c5ec) list_preview_fixed_pane_cp

0x4dcd,	// (0x0002c5f8) popup_preview_fixed_window_g1_ParamLimits

0x4dcd,	// (0x0002c5f8) popup_preview_fixed_window_g1

0x4dd9,	// (0x0002c604) popup_preview_fixed_window_g2_ParamLimits

0x4dd9,	// (0x0002c604) popup_preview_fixed_window_g2

0x0002,

0xfb4d,	// (0x00037378) popup_preview_fixed_window_g_ParamLimits

0xfb4d,	// (0x00037378) popup_preview_fixed_window_g

0xf200,	// (0x00036a2b) aid_navi_side_left_pane_ParamLimits

0xf215,	// (0x00036a40) aid_navi_side_right_pane_ParamLimits

0xf22d,	// (0x00036a58) navi_icon_pane_stacon_ParamLimits

0xf241,	// (0x00036a6c) navi_navi_pane_stacon_ParamLimits

0xf22d,	// (0x00036a58) navi_text_pane_stacon_ParamLimits

0xc279,	// (0x00033aa4) main_text_info_pane

0x4fb0,	// (0x0002c7db) listscroll_text_info_pane

0x4fb8,	// (0x0002c7e3) list_text_info_pane_ParamLimits

0x4fb8,	// (0x0002c7e3) list_text_info_pane

0x4fc7,	// (0x0002c7f2) scroll_pane_cp24_ParamLimits

0x4fc7,	// (0x0002c7f2) scroll_pane_cp24

0xba20,	// (0x0003324b) list_text_info_pane_t1_ParamLimits

0xba20,	// (0x0003324b) list_text_info_pane_t1

0x9ec4,	// (0x000316ef) popup_fast_swap2_window_ParamLimits

0x9ec4,	// (0x000316ef) popup_fast_swap2_window

0x5019,	// (0x0002c844) aid_size_cell_fast2

0xc279,	// (0x00033aa4) bg_popup_window_pane_cp17

0x5023,	// (0x0002c84e) heading_pane_cp2

0x502b,	// (0x0002c856) listscroll_fast2_pane

0x5033,	// (0x0002c85e) grid_fast2_pane

0x503d,	// (0x0002c868) listscroll_fast2_pane_g1

0x5045,	// (0x0002c870) listscroll_fast2_pane_g2

0x0001,

0xfbc9,	// (0x000373f4) listscroll_fast2_pane_g

0xc7d1,	// (0x00033ffc) scroll_pane_cp26

0x504f,	// (0x0002c87a) cell_fast2_pane_ParamLimits

0x504f,	// (0x0002c87a) cell_fast2_pane

0x5064,	// (0x0002c88f) cell_fast2_pane_g1

0x506d,	// (0x0002c898) cell_fast2_pane_g2

0x5076,	// (0x0002c8a1) cell_fast2_pane_g3

0x0002,

0xfbce,	// (0x000373f9) cell_fast2_pane_g

0xc57e,	// (0x00033da9) grid_highlight_pane_cp9

0xc593,	// (0x00033dbe) main_eswt_pane_ParamLimits

0xc593,	// (0x00033dbe) main_eswt_pane

0x4fdc,	// (0x0002c807) list_single_text_info_pane

0x507e,	// (0x0002c8a9) eswt_ctrl_button_pane

0x507e,	// (0x0002c8a9) eswt_ctrl_canvas_pane

0xba3c,	// (0x00033267) eswt_ctrl_combo_pane

0x507e,	// (0x0002c8a9) eswt_ctrl_default_pane

0x507e,	// (0x0002c8a9) eswt_ctrl_label_pane

0x508e,	// (0x0002c8b9) eswt_ctrl_wait_pane

0xba44,	// (0x0003326f) eswt_shell_pane

0xc279,	// (0x00033aa4) listscroll_eswt_app_pane

0x50b6,	// (0x0002c8e1) popup_eswt_tasktip_window_ParamLimits

0x50b6,	// (0x0002c8e1) popup_eswt_tasktip_window

0x0d9a,	// (0x000285c5) bg_popup_window_pane_cp18

0x50cf,	// (0x0002c8fa) eswt_control_pane_g1_ParamLimits

0x50cf,	// (0x0002c8fa) eswt_control_pane_g1

0x50dc,	// (0x0002c907) eswt_control_pane_g2_ParamLimits

0x50dc,	// (0x0002c907) eswt_control_pane_g2

0x50e9,	// (0x0002c914) eswt_control_pane_g3_ParamLimits

0x50e9,	// (0x0002c914) eswt_control_pane_g3

0x50f6,	// (0x0002c921) eswt_control_pane_g4_ParamLimits

0x50f6,	// (0x0002c921) eswt_control_pane_g4

0x0003,

0xfbd5,	// (0x00037400) eswt_control_pane_g_ParamLimits

0xfbd5,	// (0x00037400) eswt_control_pane_g

0xc69f,	// (0x00033eca) bg_button_pane_ParamLimits

0xc69f,	// (0x00033eca) bg_button_pane

0xc593,	// (0x00033dbe) common_borders_pane_copy2_ParamLimits

0xc593,	// (0x00033dbe) common_borders_pane_copy2

0x5103,	// (0x0002c92e) control_button_pane_g1_ParamLimits

0x5103,	// (0x0002c92e) control_button_pane_g1

0x510f,	// (0x0002c93a) control_button_pane_g2_ParamLimits

0x510f,	// (0x0002c93a) control_button_pane_g2

0x511b,	// (0x0002c946) control_button_pane_g3_ParamLimits

0x511b,	// (0x0002c946) control_button_pane_g3

0x0002,

0xfbde,	// (0x00037409) control_button_pane_g_ParamLimits

0xfbde,	// (0x00037409) control_button_pane_g

0x512f,	// (0x0002c95a) control_button_pane_t1

0x513d,	// (0x0002c968) control_button_pane_t2

0x0001,

0xfbe5,	// (0x00037410) control_button_pane_t

0x0c96,	// (0x000284c1) bg_button_pane_g1

0x0c9e,	// (0x000284c9) bg_button_pane_g2

0x0ca6,	// (0x000284d1) bg_button_pane_g3

0x0cae,	// (0x000284d9) bg_button_pane_g4

0x0cb6,	// (0x000284e1) bg_button_pane_g5

0x0cbe,	// (0x000284e9) bg_button_pane_g6

0x0cc6,	// (0x000284f1) bg_button_pane_g7

0x0cce,	// (0x000284f9) bg_button_pane_g8

0x0cd6,	// (0x00028501) bg_button_pane_g9

0x0008,

0xf82d,	// (0x00037058) bg_button_pane_g

0x4727,	// (0x0002bf52) common_borders_pane_ParamLimits

0x4727,	// (0x0002bf52) common_borders_pane

0x50cf,	// (0x0002c8fa) eswt_control_pane_g1_copy1_ParamLimits

0x50cf,	// (0x0002c8fa) eswt_control_pane_g1_copy1

0x50dc,	// (0x0002c907) eswt_control_pane_g2_copy1_ParamLimits

0x50dc,	// (0x0002c907) eswt_control_pane_g2_copy1

0x50e9,	// (0x0002c914) eswt_control_pane_g3_copy1_ParamLimits

0x50e9,	// (0x0002c914) eswt_control_pane_g3_copy1

0x50f6,	// (0x0002c921) eswt_control_pane_g4_copy1_ParamLimits

0x50f6,	// (0x0002c921) eswt_control_pane_g4_copy1

0x4762,	// (0x0002bf8d) bg_eswt_ctrl_canvas_pane_g1

0x4727,	// (0x0002bf52) common_borders_pane_cp2_ParamLimits

0x4727,	// (0x0002bf52) common_borders_pane_cp2

0x4727,	// (0x0002bf52) common_borders_pane_cp3_ParamLimits

0x4727,	// (0x0002bf52) common_borders_pane_cp3

0x514b,	// (0x0002c976) separator_horizontal_pane

0x5153,	// (0x0002c97e) separator_vertical_pane

0x50cf,	// (0x0002c8fa) eswt_control_pane_g1_copy2_ParamLimits

0x50cf,	// (0x0002c8fa) eswt_control_pane_g1_copy2

0x50dc,	// (0x0002c907) eswt_control_pane_g2_copy2_ParamLimits

0x50dc,	// (0x0002c907) eswt_control_pane_g2_copy2

0x50e9,	// (0x0002c914) eswt_control_pane_g3_copy2_ParamLimits

0x50e9,	// (0x0002c914) eswt_control_pane_g3_copy2

0x50f6,	// (0x0002c921) eswt_control_pane_g4_copy2_ParamLimits

0x50f6,	// (0x0002c921) eswt_control_pane_g4_copy2

0xc279,	// (0x00033aa4) common_borders_pane_cp4

0x515c,	// (0x0002c987) separator_horizontal_pane_g1

0x5165,	// (0x0002c990) separator_horizontal_pane_g2

0x516e,	// (0x0002c999) separator_horizontal_pane_g3

0x0002,

0xfbea,	// (0x00037415) separator_horizontal_pane_g

0x50cf,	// (0x0002c8fa) eswt_control_pane_g1_copy3_ParamLimits

0x50cf,	// (0x0002c8fa) eswt_control_pane_g1_copy3

0x50dc,	// (0x0002c907) eswt_control_pane_g2_copy3_ParamLimits

0x50dc,	// (0x0002c907) eswt_control_pane_g2_copy3

0x50e9,	// (0x0002c914) eswt_control_pane_g3_copy3_ParamLimits

0x50e9,	// (0x0002c914) eswt_control_pane_g3_copy3

0x50f6,	// (0x0002c921) eswt_control_pane_g4_copy3_ParamLimits

0x50f6,	// (0x0002c921) eswt_control_pane_g4_copy3

0xc279,	// (0x00033aa4) common_borders_pane_cp5

0x5177,	// (0x0002c9a2) separator_vertical_pane_g1

0x5180,	// (0x0002c9ab) separator_vertical_pane_g2

0x5189,	// (0x0002c9b4) separator_vertical_pane_g3

0x0002,

0xfbf1,	// (0x0003741c) separator_vertical_pane_g

0x50cf,	// (0x0002c8fa) eswt_control_pane_g1_copy4_ParamLimits

0x50cf,	// (0x0002c8fa) eswt_control_pane_g1_copy4

0x50dc,	// (0x0002c907) eswt_control_pane_g2_copy4_ParamLimits

0x50dc,	// (0x0002c907) eswt_control_pane_g2_copy4

0x50e9,	// (0x0002c914) eswt_control_pane_g3_copy4_ParamLimits

0x50e9,	// (0x0002c914) eswt_control_pane_g3_copy4

0x50f6,	// (0x0002c921) eswt_control_pane_g4_copy4_ParamLimits

0x50f6,	// (0x0002c921) eswt_control_pane_g4_copy4

0xba64,	// (0x0003328f) eswt_ctrl_combo_button_pane

0xba6c,	// (0x00033297) eswt_ctrl_input_pane

0xba74,	// (0x0003329f) popup_choice_list_window_cp70

0xba7c,	// (0x000332a7) eswt_ctrl_input_pane_t1

0xc279,	// (0x00033aa4) input_focus_pane_cp70

0x4727,	// (0x0002bf52) bg_button_pane_cp70_ParamLimits

0x4727,	// (0x0002bf52) bg_button_pane_cp70

0xba8a,	// (0x000332b5) eswt_ctrl_combo_button_pane_g1

0x51c0,	// (0x0002c9eb) wait_bar_pane_cp70

0x0d9a,	// (0x000285c5) bg_popup_window_pane_cp70_ParamLimits

0x0d9a,	// (0x000285c5) bg_popup_window_pane_cp70

0x51c8,	// (0x0002c9f3) popup_eswt_tasktip_window_t1

0x51de,	// (0x0002ca09) wait_bar_pane_cp71_ParamLimits

0x51de,	// (0x0002ca09) wait_bar_pane_cp71

0x51ea,	// (0x0002ca15) grid_eswt_app_pane

0xc9cd,	// (0x000341f8) scroll_pane_cp70

0xba92,	// (0x000332bd) cell_eswt_app_pane_ParamLimits

0xba92,	// (0x000332bd) cell_eswt_app_pane

0xbabc,	// (0x000332e7) cell_eswt_app_pane_g1_ParamLimits

0xbabc,	// (0x000332e7) cell_eswt_app_pane_g1

0xbaeb,	// (0x00033316) cell_eswt_app_pane_g2_ParamLimits

0xbaeb,	// (0x00033316) cell_eswt_app_pane_g2

0x0001,

0xfbf8,	// (0x00037423) cell_eswt_app_pane_g_ParamLimits

0xfbf8,	// (0x00037423) cell_eswt_app_pane_g

0xd14b,	// (0x00034976) cell_eswt_app_pane_t1_ParamLimits

0xd14b,	// (0x00034976) cell_eswt_app_pane_t1

0x52a8,	// (0x0002cad3) grid_highlight_pane_cp70_ParamLimits

0x52a8,	// (0x0002cad3) grid_highlight_pane_cp70

0xce55,	// (0x00034680) set_content_pane_g1

0x9cae,	// (0x000314d9) status_small_volume_pane

0xbb0f,	// (0x0003333a) status_small_volume_pane_g1

0xbb17,	// (0x00033342) volume_small2_pane

0xbb20,	// (0x0003334b) volume_small2_pane_g1

0xbb29,	// (0x00033354) volume_small2_pane_g2

0xbb32,	// (0x0003335d) volume_small2_pane_g3

0xbb3b,	// (0x00033366) volume_small2_pane_g4

0xbb44,	// (0x0003336f) volume_small2_pane_g5

0xbb4d,	// (0x00033378) volume_small2_pane_g6

0xbb56,	// (0x00033381) volume_small2_pane_g7

0xbb5f,	// (0x0003338a) volume_small2_pane_g8

0xbb68,	// (0x00033393) volume_small2_pane_g9

0xbb71,	// (0x0003339c) volume_small2_pane_g10

0x0009,

0xfbfd,	// (0x00037428) volume_small2_pane_g

0x4b1a,	// (0x0002c345) fep_vkb_top_text_pane_g1_ParamLimits

0xb99c,	// (0x000331c7) fep_vkb_top_text_pane_t1_ParamLimits

0x4de5,	// (0x0002c610) popup_preview_fixed_window_g3_ParamLimits

0x4de5,	// (0x0002c610) popup_preview_fixed_window_g3

0xa53b,	// (0x00031d66) popup_toolbar_trans_pane

0xb228,	// (0x00032a53) aid_height_set_list_ParamLimits

0x3509,	// (0x0002ad34) aid_size_parent_ParamLimits

0xc7e1,	// (0x0003400c) list_highlight_pane_cp2_ParamLimits

0xce55,	// (0x00034680) set_content_pane_g1_ParamLimits

0xb3a3,	// (0x00032bce) list_single_image_pane_ParamLimits

0xb3a3,	// (0x00032bce) list_single_image_pane

0xd17d,	// (0x000349a8) aid_size_cell_image_ParamLimits

0xd17d,	// (0x000349a8) aid_size_cell_image

0xd18a,	// (0x000349b5) grid_single_image_pane_ParamLimits

0xd18a,	// (0x000349b5) grid_single_image_pane

0xd196,	// (0x000349c1) list_single_image_pane_g1_ParamLimits

0xd196,	// (0x000349c1) list_single_image_pane_g1

0x52cd,	// (0x0002caf8) list_single_image_pane_g2_ParamLimits

0x52cd,	// (0x0002caf8) list_single_image_pane_g2

0x0001,

0xfc12,	// (0x0003743d) list_single_image_pane_g_ParamLimits

0xfc12,	// (0x0003743d) list_single_image_pane_g

0x52e1,	// (0x0002cb0c) list_single_image_pane_t1_ParamLimits

0x52e1,	// (0x0002cb0c) list_single_image_pane_t1

0xd1a2,	// (0x000349cd) cell_image_list_pane_ParamLimits

0xd1a2,	// (0x000349cd) cell_image_list_pane

0xd1b6,	// (0x000349e1) cell_image_list_pane_g1

0xd1bf,	// (0x000349ea) cell_image_list_pane_g2

0x0001,

0xfc17,	// (0x00037442) cell_image_list_pane_g

0xd1c8,	// (0x000349f3) aid_size_cell_tb_trans_pane

0xc69f,	// (0x00033eca) bg_tb_trans_pane

0xd1da,	// (0x00034a05) grid_tb_trans_pane

0x0c96,	// (0x000284c1) bg_tb_trans_pane_g1

0x0c9e,	// (0x000284c9) bg_tb_trans_pane_g2

0x0ca6,	// (0x000284d1) bg_tb_trans_pane_g3

0x0cae,	// (0x000284d9) bg_tb_trans_pane_g4

0x0cb6,	// (0x000284e1) bg_tb_trans_pane_g5

0x0cce,	// (0x000284f9) bg_tb_trans_pane_g6

0x0cd6,	// (0x00028501) bg_tb_trans_pane_g7

0x0cbe,	// (0x000284e9) bg_tb_trans_pane_g8

0x0cc6,	// (0x000284f1) bg_tb_trans_pane_g9

0x0008,

0xfc1c,	// (0x00037447) bg_tb_trans_pane_g

0xd1ee,	// (0x00034a19) cell_toolbar_trans_pane_ParamLimits

0xd1ee,	// (0x00034a19) cell_toolbar_trans_pane

0x4762,	// (0x0002bf8d) cell_toolbar_trans_pane_g1

0xb6b0,	// (0x00032edb) list_form2_midp_pane_t1

0xb6be,	// (0x00032ee9) list_form2_midp_pane_t2

0x0001,

0xfac5,	// (0x000372f0) list_form2_midp_pane_t

0x4349,	// (0x0002bb74) scroll_pane_cp51_ParamLimits

0x4505,	// (0x0002bd30) form2_midp_wait_pane_g1

0x450e,	// (0x0002bd39) form2_midp_wait_pane_g2

0x4517,	// (0x0002bd42) form2_midp_wait_pane_g3

0x0002,

0xfada,	// (0x00037305) form2_midp_wait_pane_g

0xc2e9,	// (0x00033b14) list_highlight_pane_cp21_ParamLimits

0x455f,	// (0x0002bd8a) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x456e,	// (0x0002bd99) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x36bd,	// (0x0002aee8) list_single_2graphic_im_pane_ParamLimits

0x36bd,	// (0x0002aee8) list_single_2graphic_im_pane

0xd214,	// (0x00034a3f) list_single_2graphic_im_pane_g1_ParamLimits

0xd214,	// (0x00034a3f) list_single_2graphic_im_pane_g1

0xd225,	// (0x00034a50) list_single_2graphic_im_pane_g2_ParamLimits

0xd225,	// (0x00034a50) list_single_2graphic_im_pane_g2

0xd231,	// (0x00034a5c) list_single_2graphic_im_pane_g3_ParamLimits

0xd231,	// (0x00034a5c) list_single_2graphic_im_pane_g3

0x0003,

0xfc2f,	// (0x0003745a) list_single_2graphic_im_pane_g_ParamLimits

0xfc2f,	// (0x0003745a) list_single_2graphic_im_pane_g

0xd245,	// (0x00034a70) list_single_2graphic_im_pane_t1_ParamLimits

0xd245,	// (0x00034a70) list_single_2graphic_im_pane_t1

0x4df1,	// (0x0002c61c) list_single_graphic_2heading_pane_fp_ParamLimits

0x4df1,	// (0x0002c61c) list_single_graphic_2heading_pane_fp

0xeee5,	// (0x00036710) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeee5,	// (0x00036710) list_single_graphic_2heading_pane_fp_g1

0x4e07,	// (0x0002c632) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4e07,	// (0x0002c632) list_single_graphic_2heading_pane_fp_g2

0xe8f3,	// (0x0003611e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe8f3,	// (0x0003611e) list_single_graphic_2heading_pane_fp_g3

0xeeba,	// (0x000366e5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xeeba,	// (0x000366e5) list_single_graphic_2heading_pane_fp_g4

0x4e13,	// (0x0002c63e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4e13,	// (0x0002c63e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5d,	// (0x00037388) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5d,	// (0x00037388) list_single_graphic_2heading_pane_fp_g

0xf073,	// (0x0003689e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf073,	// (0x0003689e) list_single_graphic_2heading_pane_fp_t1

0xef1d,	// (0x00036748) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xef1d,	// (0x00036748) list_single_graphic_2heading_pane_fp_t2

0xf089,	// (0x000368b4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf089,	// (0x000368b4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc38,	// (0x00037463) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc38,	// (0x00037463) list_single_graphic_2heading_pane_fp_t

0x47ee,	// (0x0002c019) fep_hwr_write_pane_g5_ParamLimits

0x47ee,	// (0x0002c019) fep_hwr_write_pane_g5

0x47fa,	// (0x0002c025) fep_hwr_write_pane_g6_ParamLimits

0x47fa,	// (0x0002c025) fep_hwr_write_pane_g6

0xba44,	// (0x0003326f) eswt_shell_pane_ParamLimits

0x0d9a,	// (0x000285c5) bg_popup_window_pane_cp18_ParamLimits

0x50c7,	// (0x0002c8f2) heading_pane_cp70

0x51c8,	// (0x0002c9f3) popup_eswt_tasktip_window_t1_ParamLimits

0xa658,	// (0x00031e83) aid_touch_tab_arrow_left

0xa66e,	// (0x00031e99) aid_touch_tab_arrow_right

0x910f,	// (0x0003093a) title_pane_g3_ParamLimits

0x910f,	// (0x0003093a) title_pane_g3

0xc667,	// (0x00033e92) set_value_pane_g1

0xa53b,	// (0x00031d66) popup_toolbar_trans_pane_ParamLimits

0xd1c8,	// (0x000349f3) aid_size_cell_tb_trans_pane_ParamLimits

0xc69f,	// (0x00033eca) bg_tb_trans_pane_ParamLimits

0xd1da,	// (0x00034a05) grid_tb_trans_pane_ParamLimits

0xc413,	// (0x00033c3e) cont_note_pane_ParamLimits

0xc413,	// (0x00033c3e) cont_note_pane

0xc593,	// (0x00033dbe) cont_snote2_single_text_pane_ParamLimits

0xc593,	// (0x00033dbe) cont_snote2_single_text_pane

0xc593,	// (0x00033dbe) cont_snote2_single_graphic_pane_ParamLimits

0xc593,	// (0x00033dbe) cont_snote2_single_graphic_pane

0x143c,	// (0x00028c67) cont_note_wait_pane_ParamLimits

0x143c,	// (0x00028c67) cont_note_wait_pane

0x143c,	// (0x00028c67) cont_note_image_pane_ParamLimits

0x143c,	// (0x00028c67) cont_note_image_pane

0x53d7,	// (0x0002cc02) popup_note2_window_g1_ParamLimits

0x53d7,	// (0x0002cc02) popup_note2_window_g1

0xd283,	// (0x00034aae) popup_note2_window_t1_ParamLimits

0xd283,	// (0x00034aae) popup_note2_window_t1

0xd2c8,	// (0x00034af3) popup_note2_window_t2_ParamLimits

0xd2c8,	// (0x00034af3) popup_note2_window_t2

0xd30d,	// (0x00034b38) popup_note2_window_t3_ParamLimits

0xd30d,	// (0x00034b38) popup_note2_window_t3

0x54d7,	// (0x0002cd02) popup_note2_window_t4_ParamLimits

0x54d7,	// (0x0002cd02) popup_note2_window_t4

0xc497,	// (0x00033cc2) popup_note2_window_t5_ParamLimits

0xc497,	// (0x00033cc2) popup_note2_window_t5

0x0004,

0xfc44,	// (0x0003746f) popup_note2_window_t_ParamLimits

0xfc44,	// (0x0003746f) popup_note2_window_t

0x5506,	// (0x0002cd31) popup_note2_image_window_g1_ParamLimits

0x5506,	// (0x0002cd31) popup_note2_image_window_g1

0xd352,	// (0x00034b7d) popup_note2_image_window_g2_ParamLimits

0xd352,	// (0x00034b7d) popup_note2_image_window_g2

0x0001,

0xfc4f,	// (0x0003747a) popup_note2_image_window_g_ParamLimits

0xfc4f,	// (0x0003747a) popup_note2_image_window_g

0x5524,	// (0x0002cd4f) popup_note2_image_window_t1_ParamLimits

0x5524,	// (0x0002cd4f) popup_note2_image_window_t1

0x553c,	// (0x0002cd67) popup_note2_image_window_t2_ParamLimits

0x553c,	// (0x0002cd67) popup_note2_image_window_t2

0x5554,	// (0x0002cd7f) popup_note2_image_window_t3_ParamLimits

0x5554,	// (0x0002cd7f) popup_note2_image_window_t3

0x0002,

0xfc54,	// (0x0003747f) popup_note2_image_window_t_ParamLimits

0xfc54,	// (0x0003747f) popup_note2_image_window_t

0x144a,	// (0x00028c75) popup_note2_wait_window_g1_ParamLimits

0x144a,	// (0x00028c75) popup_note2_wait_window_g1

0x1456,	// (0x00028c81) popup_note2_wait_window_g2_ParamLimits

0x1456,	// (0x00028c81) popup_note2_wait_window_g2

0x1462,	// (0x00028c8d) popup_note2_wait_window_g3_ParamLimits

0x1462,	// (0x00028c8d) popup_note2_wait_window_g3

0x0002,

0xf80f,	// (0x0003703a) popup_note2_wait_window_g_ParamLimits

0xf80f,	// (0x0003703a) popup_note2_wait_window_g

0x5570,	// (0x0002cd9b) popup_note2_wait_window_t1_ParamLimits

0x5570,	// (0x0002cd9b) popup_note2_wait_window_t1

0x558e,	// (0x0002cdb9) popup_note2_wait_window_t2_ParamLimits

0x558e,	// (0x0002cdb9) popup_note2_wait_window_t2

0x55ac,	// (0x0002cdd7) popup_note2_wait_window_t3_ParamLimits

0x55ac,	// (0x0002cdd7) popup_note2_wait_window_t3

0x55be,	// (0x0002cde9) popup_note2_wait_window_t4_ParamLimits

0x55be,	// (0x0002cde9) popup_note2_wait_window_t4

0x0003,

0xfc5b,	// (0x00037486) popup_note2_wait_window_t_ParamLimits

0xfc5b,	// (0x00037486) popup_note2_wait_window_t

0x55d0,	// (0x0002cdfb) wait_bar2_pane_ParamLimits

0x55d0,	// (0x0002cdfb) wait_bar2_pane

0x55e8,	// (0x0002ce13) popup_snote2_single_text_window_g1_ParamLimits

0x55e8,	// (0x0002ce13) popup_snote2_single_text_window_g1

0x5610,	// (0x0002ce3b) popup_snote2_single_text_window_t1_ParamLimits

0x5610,	// (0x0002ce3b) popup_snote2_single_text_window_t1

0x565c,	// (0x0002ce87) popup_snote2_single_text_window_t2_ParamLimits

0x565c,	// (0x0002ce87) popup_snote2_single_text_window_t2

0x56a8,	// (0x0002ced3) popup_snote2_single_text_window_t3_ParamLimits

0x56a8,	// (0x0002ced3) popup_snote2_single_text_window_t3

0x56e9,	// (0x0002cf14) popup_snote2_single_text_window_t4_ParamLimits

0x56e9,	// (0x0002cf14) popup_snote2_single_text_window_t4

0x571f,	// (0x0002cf4a) popup_snote2_single_text_window_t5_ParamLimits

0x571f,	// (0x0002cf4a) popup_snote2_single_text_window_t5

0x0004,

0xfc64,	// (0x0003748f) popup_snote2_single_text_window_t_ParamLimits

0xfc64,	// (0x0003748f) popup_snote2_single_text_window_t

0xd364,	// (0x00034b8f) popup_snote2_single_graphic_window_g1_ParamLimits

0xd364,	// (0x00034b8f) popup_snote2_single_graphic_window_g1

0x5772,	// (0x0002cf9d) popup_snote2_single_graphic_window_g2_ParamLimits

0x5772,	// (0x0002cf9d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6f,	// (0x0003749a) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6f,	// (0x0003749a) popup_snote2_single_graphic_window_g

0x579a,	// (0x0002cfc5) popup_snote2_single_graphic_window_t1_ParamLimits

0x579a,	// (0x0002cfc5) popup_snote2_single_graphic_window_t1

0x57e6,	// (0x0002d011) popup_snote2_single_graphic_window_t2_ParamLimits

0x57e6,	// (0x0002d011) popup_snote2_single_graphic_window_t2

0x56a8,	// (0x0002ced3) popup_snote2_single_graphic_window_t3_ParamLimits

0x56a8,	// (0x0002ced3) popup_snote2_single_graphic_window_t3

0x56e9,	// (0x0002cf14) popup_snote2_single_graphic_window_t4_ParamLimits

0x56e9,	// (0x0002cf14) popup_snote2_single_graphic_window_t4

0x571f,	// (0x0002cf4a) popup_snote2_single_graphic_window_t5_ParamLimits

0x571f,	// (0x0002cf4a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc74,	// (0x0003749f) popup_snote2_single_graphic_window_t_ParamLimits

0xfc74,	// (0x0003749f) popup_snote2_single_graphic_window_t

0x4206,	// (0x0002ba31) clock_nsta_pane_cp2_t1

0x4206,	// (0x0002ba31) clock_nsta_pane_cp2_t2

0x0001,

0xfa9b,	// (0x000372c6) clock_nsta_pane_cp2_t

0x8938,	// (0x00030163) form_field_data_wide_pane_g1_ParamLimits

0xc6ad,	// (0x00033ed8) form_field_data_wide_pane_g2_ParamLimits

0xc6ad,	// (0x00033ed8) form_field_data_wide_pane_g2

0xc6b9,	// (0x00033ee4) form_field_data_wide_pane_g3_ParamLimits

0xc6b9,	// (0x00033ee4) form_field_data_wide_pane_g3

0x0002,

0xf647,	// (0x00036e72) form_field_data_wide_pane_g_ParamLimits

0xf647,	// (0x00036e72) form_field_data_wide_pane_g

0xb5d1,	// (0x00032dfc) grid_touch_3_pane_ParamLimits

0xb5d1,	// (0x00032dfc) grid_touch_3_pane

0xd38c,	// (0x00034bb7) cell_touch_3_pane_ParamLimits

0xd38c,	// (0x00034bb7) cell_touch_3_pane

0x4762,	// (0x0002bf8d) cell_touch_3_pane_g1

0x4762,	// (0x0002bf8d) cell_touch_3_pane_g2

0x0001,

0xfb20,	// (0x0003734b) cell_touch_3_pane_g

0xc4c9,	// (0x00033cf4) cont_query_data_pane

0xc4d1,	// (0x00033cfc) cont_query_data_pane_cp1

0x5860,	// (0x0002d08b) button_value_adjust_pane_cp7

0x5868,	// (0x0002d093) query_popup_pane_cp3

0xcb52,	// (0x0003437d) bg_popup_sub_pane_cp22_ParamLimits

0x9a2f,	// (0x0003125a) navi_navi_volume_pane_cp2

0x9a3e,	// (0x00031269) popup_side_volume_key_window_g2

0x9a4d,	// (0x00031278) popup_side_volume_key_window_g3

0x0002,

0xf6dd,	// (0x00036f08) popup_side_volume_key_window_g

0x9a5c,	// (0x00031287) popup_side_volume_key_window_t2

0x0001,

0xf6e4,	// (0x00036f0f) popup_side_volume_key_window_t

0x9b21,	// (0x0003134c) popup_side_volume_key_window_ParamLimits

0x8707,	// (0x0002ff32) list_double_graphic_pane_g4_ParamLimits

0x8707,	// (0x0002ff32) list_double_graphic_pane_g4

0xb38f,	// (0x00032bba) list_single_2heading_msg_pane_ParamLimits

0xb38f,	// (0x00032bba) list_single_2heading_msg_pane

0x8bc4,	// (0x000303ef) list_single_2heading_msg_pane_g1_ParamLimits

0x8bc4,	// (0x000303ef) list_single_2heading_msg_pane_g1

0x8bd0,	// (0x000303fb) list_single_2heading_msg_pane_g2_ParamLimits

0x8bd0,	// (0x000303fb) list_single_2heading_msg_pane_g2

0x8be3,	// (0x0003040e) list_single_2heading_msg_pane_g3_ParamLimits

0x8be3,	// (0x0003040e) list_single_2heading_msg_pane_g3

0xf0a9,	// (0x000368d4) list_single_2heading_msg_pane_g4_ParamLimits

0xf0a9,	// (0x000368d4) list_single_2heading_msg_pane_g4

0x0003,

0xfc7f,	// (0x000374aa) list_single_2heading_msg_pane_g_ParamLimits

0xfc7f,	// (0x000374aa) list_single_2heading_msg_pane_g

0x8bef,	// (0x0003041a) list_single_2heading_msg_pane_t1_ParamLimits

0x8bef,	// (0x0003041a) list_single_2heading_msg_pane_t1

0x8c17,	// (0x00030442) list_single_2heading_msg_pane_t2_ParamLimits

0x8c17,	// (0x00030442) list_single_2heading_msg_pane_t2

0x8c82,	// (0x000304ad) list_single_2heading_msg_pane_t3_ParamLimits

0x8c82,	// (0x000304ad) list_single_2heading_msg_pane_t3

0xf0c1,	// (0x000368ec) list_single_2heading_msg_pane_t4_ParamLimits

0xf0c1,	// (0x000368ec) list_single_2heading_msg_pane_t4

0x0003,

0xfc88,	// (0x000374b3) list_single_2heading_msg_pane_t_ParamLimits

0xfc88,	// (0x000374b3) list_single_2heading_msg_pane_t

0xc297,	// (0x00033ac2) title_pane_g4_ParamLimits

0xc297,	// (0x00033ac2) title_pane_g4

0xf151,	// (0x0003697c) title_pane_stacon_g3_ParamLimits

0xf151,	// (0x0003697c) title_pane_stacon_g3

0x539a,	// (0x0002cbc5) list_single_2graphic_im_pane_g4_ParamLimits

0x539a,	// (0x0002cbc5) list_single_2graphic_im_pane_g4

0xb011,	// (0x0003283c) popup_side_volume_key_window_cp

0x3a38,	// (0x0002b263) main_idle_act2_pane_t1

0x0cde,	// (0x00028509) toolbar_button_pane_g10

0x9718,	// (0x00030f43) popup_toolbar_window_cp1

0x41f7,	// (0x0002ba22) clock_nsta_pane_cp_t1

0x41f7,	// (0x0002ba22) clock_nsta_pane_cp_t2

0x0001,

0xfa96,	// (0x000372c1) clock_nsta_pane_cp_t

0x9a2f,	// (0x0003125a) navi_navi_volume_pane_cp2_ParamLimits

0xf325,	// (0x00036b50) popup_side_volume_key_window_g1_ParamLimits

0x9a3e,	// (0x00031269) popup_side_volume_key_window_g2_ParamLimits

0x9a4d,	// (0x00031278) popup_side_volume_key_window_g3_ParamLimits

0xf6dd,	// (0x00036f08) popup_side_volume_key_window_g_ParamLimits

0x1931,	// (0x0002915c) fep_hwr_aid_pane

0xd117,	// (0x00034942) bg_fep_hwr_top_pane_g4_ParamLimits

0x47be,	// (0x0002bfe9) fep_hwr_top_pane_g1_ParamLimits

0x47d0,	// (0x0002bffb) fep_hwr_top_pane_g2_ParamLimits

0x19ea,	// (0x00029215) fep_hwr_top_pane_g3_ParamLimits

0xfaeb,	// (0x00037316) fep_hwr_top_pane_g_ParamLimits

0x19ff,	// (0x0002922a) fep_hwr_top_text_pane_ParamLimits

0x2fde,	// (0x0002a809) aid_touch_tab_arrow_arrow_2

0x2fe7,	// (0x0002a812) aid_touch_tab_arrow_left_2

0x1945,	// (0x00029170) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x197c,	// (0x000291a7) fep_hwr_prediction_pane

0x4929,	// (0x0002c154) fep_vkb_prediction_pane

0xb97c,	// (0x000331a7) fep_vkb_side_pane_g3_ParamLimits

0xb97c,	// (0x000331a7) fep_vkb_side_pane_g3

0x49d2,	// (0x0002c1fd) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4e67,	// (0x0002c692) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x4e74,	// (0x0002c69f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb95,	// (0x000373c0) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x588d,	// (0x0002d0b8) fep_hwr_prediction_pane_g1

0x1c8c,	// (0x000294b7) fep_hwr_prediction_pane_g2

0x1c94,	// (0x000294bf) fep_hwr_prediction_pane_g3

0x1c9c,	// (0x000294c7) fep_hwr_prediction_pane_g4

0x0003,

0xfc91,	// (0x000374bc) fep_hwr_prediction_pane_g

0x588d,	// (0x0002d0b8) fep_vkb_prediction_pane_g1

0x5897,	// (0x0002d0c2) fep_vkb_prediction_pane_g2

0x589f,	// (0x0002d0ca) fep_vkb_prediction_pane_g3

0x58a7,	// (0x0002d0d2) fep_vkb_prediction_pane_g4

0x0003,

0xfc9a,	// (0x000374c5) fep_vkb_prediction_pane_g

0xb1aa,	// (0x000329d5) slider_set_pane_g3

0xb1be,	// (0x000329e9) slider_set_pane_g4

0xb1d6,	// (0x00032a01) slider_set_pane_g5

0xb1aa,	// (0x000329d5) slider_set_pane_g6

0xb1ec,	// (0x00032a17) slider_set_pane_g7

0x366a,	// (0x0002ae95) slider_form_pane_g3

0x3673,	// (0x0002ae9e) slider_form_pane_g4

0x367b,	// (0x0002aea6) slider_form_pane_g5

0x366a,	// (0x0002ae95) slider_form_pane_g6

0xb373,	// (0x00032b9e) slider_form_pane_g7

0x3ce4,	// (0x0002b50f) slider_set_pane_vc_g3

0x3ced,	// (0x0002b518) slider_set_pane_vc_g4

0x3cf6,	// (0x0002b521) slider_set_pane_vc_g5

0x3ce4,	// (0x0002b50f) slider_set_pane_vc_g6

0x3cff,	// (0x0002b52a) slider_set_pane_vc_g7

0x3eb5,	// (0x0002b6e0) slider_form_pane_vc_g1

0x3ebe,	// (0x0002b6e9) slider_form_pane_vc_g2

0x3ec7,	// (0x0002b6f2) slider_form_pane_vc_g3

0x3eb5,	// (0x0002b6e0) slider_form_pane_vc_g4

0x3ed0,	// (0x0002b6fb) slider_form_pane_vc_g5

0x0004,

0xfa68,	// (0x00037293) slider_form_pane_vc_g

0xc279,	// (0x00033aa4) main_idle_act3_pane

0x58af,	// (0x0002d0da) ai3_links_pane

0xd3d5,	// (0x00034c00) popup_ai3_data_window_ParamLimits

0xd3d5,	// (0x00034c00) popup_ai3_data_window

0xc279,	// (0x00033aa4) grid_ai3_links_pane

0xd3ed,	// (0x00034c18) cell_ai3_links_pane_ParamLimits

0xd3ed,	// (0x00034c18) cell_ai3_links_pane

0x58e8,	// (0x0002d113) bg_popup_sub_pane_cp11

0x58f5,	// (0x0002d120) cell_ai3_links_pane_g1

0xc279,	// (0x00033aa4) bg_popup_sub_pane_cp12

0x591a,	// (0x0002d145) heading_ai3_data_pane

0x5922,	// (0x0002d14d) list_ai3_gene_pane

0x592e,	// (0x0002d159) popup_ai3_data_window_g1

0x5936,	// (0x0002d161) heading_ai3_data_pane_g1

0x593e,	// (0x0002d169) heading_ai3_data_pane_t1

0xd407,	// (0x00034c32) list_double_ai3_gene_pane_ParamLimits

0xd407,	// (0x00034c32) list_double_ai3_gene_pane

0x5959,	// (0x0002d184) list_single_ai3_gene_pane_ParamLimits

0x5959,	// (0x0002d184) list_single_ai3_gene_pane

0x4727,	// (0x0002bf52) list_highlight_pane_cp7_ParamLimits

0x4727,	// (0x0002bf52) list_highlight_pane_cp7

0x5966,	// (0x0002d191) list_single_a13_gene_pane_t1_ParamLimits

0x5966,	// (0x0002d191) list_single_a13_gene_pane_t1

0x597d,	// (0x0002d1a8) list_single_ai3_gene_pane_g1

0x5986,	// (0x0002d1b1) list_single_ai3_gene_pane_g2

0x0001,

0xfca3,	// (0x000374ce) list_single_ai3_gene_pane_g

0x598e,	// (0x0002d1b9) list_double_ai3_gene_pane_g1_ParamLimits

0x598e,	// (0x0002d1b9) list_double_ai3_gene_pane_g1

0xd414,	// (0x00034c3f) list_double_ai3_gene_pane_t1_ParamLimits

0xd414,	// (0x00034c3f) list_double_ai3_gene_pane_t1

0x59b6,	// (0x0002d1e1) list_double_ai3_gene_pane_t2_ParamLimits

0x59b6,	// (0x0002d1e1) list_double_ai3_gene_pane_t2

0x59cb,	// (0x0002d1f6) list_double_ai3_gene_pane_t3_ParamLimits

0x59cb,	// (0x0002d1f6) list_double_ai3_gene_pane_t3

0x0002,

0xfca8,	// (0x000374d3) list_double_ai3_gene_pane_t_ParamLimits

0xfca8,	// (0x000374d3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf09f,	// (0x000368ca) aid_size_min_col_2

0xd3bf,	// (0x00034bea) aid_size_min_msg_ParamLimits

0xd3bf,	// (0x00034bea) aid_size_min_msg

0xb990,	// (0x000331bb) fep_vkb_top_text_pane_g2_ParamLimits

0xb990,	// (0x000331bb) fep_vkb_top_text_pane_g2

0x0001,

0xfb1b,	// (0x00037346) fep_vkb_top_text_pane_g_ParamLimits

0xfb1b,	// (0x00037346) fep_vkb_top_text_pane_g

0xc279,	// (0x00033aa4) main_hc_apps_shell_pane

0x59e8,	// (0x0002d213) grid_hc_apps_pane_ParamLimits

0x59e8,	// (0x0002d213) grid_hc_apps_pane

0x59fa,	// (0x0002d225) list_hc_apps_pane

0x5a02,	// (0x0002d22d) scroll_pane_cp37_ParamLimits

0x5a02,	// (0x0002d22d) scroll_pane_cp37

0xd430,	// (0x00034c5b) cell_hc_apps_pane_ParamLimits

0xd430,	// (0x00034c5b) cell_hc_apps_pane

0xd4ee,	// (0x00034d19) cell_hc_apps_pane_g1_ParamLimits

0xd4ee,	// (0x00034d19) cell_hc_apps_pane_g1

0x5aec,	// (0x0002d317) cell_hc_apps_pane_g2_ParamLimits

0x5aec,	// (0x0002d317) cell_hc_apps_pane_g2

0x5b08,	// (0x0002d333) cell_hc_apps_pane_g3_ParamLimits

0x5b08,	// (0x0002d333) cell_hc_apps_pane_g3

0x0002,

0xfcaf,	// (0x000374da) cell_hc_apps_pane_g_ParamLimits

0xfcaf,	// (0x000374da) cell_hc_apps_pane_g

0xd51a,	// (0x00034d45) cell_hc_apps_pane_t1_ParamLimits

0xd51a,	// (0x00034d45) cell_hc_apps_pane_t1

0xc413,	// (0x00033c3e) grid_highlight_pane_cp10_ParamLimits

0xc413,	// (0x00033c3e) grid_highlight_pane_cp10

0xd558,	// (0x00034d83) list_single_hc_apps_pane_ParamLimits

0xd558,	// (0x00034d83) list_single_hc_apps_pane

0xd588,	// (0x00034db3) list_single_hc_apps_pane_g1

0x8cf0,	// (0x0003051b) list_single_hc_apps_pane_g2

0x0001,

0xfcb6,	// (0x000374e1) list_single_hc_apps_pane_g

0x8d09,	// (0x00030534) list_single_hc_apps_pane_g2_copy1

0x8d25,	// (0x00030550) list_single_hc_apps_pane_t1

0xc2e9,	// (0x00033b14) bg_set_opt_pane_cp_ParamLimits

0x91e3,	// (0x00030a0e) setting_slider_pane_t1_ParamLimits

0x91fc,	// (0x00030a27) setting_slider_pane_t2_ParamLimits

0x9216,	// (0x00030a41) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00036d64) setting_slider_pane_t_ParamLimits

0x922e,	// (0x00030a59) slider_set_pane_ParamLimits

0x0099,	// (0x000278c4) control_pane_g5_ParamLimits

0x0099,	// (0x000278c4) control_pane_g5

0xb19d,	// (0x000329c8) slider_set_pane_g1_ParamLimits

0x175d,	// (0x00028f88) slider_set_pane_g2_ParamLimits

0xb1aa,	// (0x000329d5) slider_set_pane_g3_ParamLimits

0xb1be,	// (0x000329e9) slider_set_pane_g4_ParamLimits

0xb1d6,	// (0x00032a01) slider_set_pane_g5_ParamLimits

0xb1aa,	// (0x000329d5) slider_set_pane_g6_ParamLimits

0xb1ec,	// (0x00032a17) slider_set_pane_g7_ParamLimits

0xf92b,	// (0x00037156) slider_set_pane_g_ParamLimits

0xce00,	// (0x0003462b) navi_icon_text_pane_ParamLimits

0xa621,	// (0x00031e4c) aid_fill_nsta_2_ParamLimits

0xa658,	// (0x00031e83) aid_touch_tab_arrow_left_ParamLimits

0xa66e,	// (0x00031e99) aid_touch_tab_arrow_right_ParamLimits

0xa709,	// (0x00031f34) clock_nsta_pane_ParamLimits

0x2fc0,	// (0x0002a7eb) navi_icon_pane_g1_ParamLimits

0x2fcc,	// (0x0002a7f7) navi_text_pane_t1_ParamLimits

0x4307,	// (0x0002bb32) navi_icon_text_pane_g1_ParamLimits

0x4313,	// (0x0002bb3e) navi_icon_text_pane_t1_ParamLimits

0xd588,	// (0x00034db3) list_single_hc_apps_pane_g1_ParamLimits

0x8cf0,	// (0x0003051b) list_single_hc_apps_pane_g2_ParamLimits

0xfcb6,	// (0x000374e1) list_single_hc_apps_pane_g_ParamLimits

0x8d09,	// (0x00030534) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8d25,	// (0x00030550) list_single_hc_apps_pane_t1_ParamLimits

0x9014,	// (0x0003083f) popup_toolbar2_fixed_window_ParamLimits

0x9014,	// (0x0003083f) popup_toolbar2_fixed_window

0xa531,	// (0x00031d5c) popup_toolbar2_float_window

0xc279,	// (0x00033aa4) bg_popup_sub_pane_cp27

0x5be6,	// (0x0002d411) grid_toolbar2_float_pane

0xc279,	// (0x00033aa4) bg_popup_sub_pane_cp26

0x5be6,	// (0x0002d411) grid_toolbar2_fixed_pane

0xd5a1,	// (0x00034dcc) cell_toolbar2_fixed_pane_ParamLimits

0xd5a1,	// (0x00034dcc) cell_toolbar2_fixed_pane

0xd5bb,	// (0x00034de6) cell_toolbar2_fixed_pane_g1

0x0be6,	// (0x00028411) toolbar2_fixed_button_pane

0x0c96,	// (0x000284c1) toolbar2_fixed_button_pane_g1

0x0c9e,	// (0x000284c9) toolbar2_fixed_button_pane_g2

0x0ca6,	// (0x000284d1) toolbar2_fixed_button_pane_g3

0x0cae,	// (0x000284d9) toolbar2_fixed_button_pane_g4

0x0cb6,	// (0x000284e1) toolbar2_fixed_button_pane_g5

0x0cbe,	// (0x000284e9) toolbar2_fixed_button_pane_g6

0x0cc6,	// (0x000284f1) toolbar2_fixed_button_pane_g7

0x0cce,	// (0x000284f9) toolbar2_fixed_button_pane_g8

0x0cd6,	// (0x00028501) toolbar2_fixed_button_pane_g9

0x0008,

0xf82d,	// (0x00037058) toolbar2_fixed_button_pane_g

0x5c07,	// (0x0002d432) cell_toolbar2_float_pane_ParamLimits

0x5c07,	// (0x0002d432) cell_toolbar2_float_pane

0x5c18,	// (0x0002d443) cell_toolbar2_float_pane_g1

0x0be6,	// (0x00028411) toolbar2_fixed_button_pane_cp

0xb878,	// (0x000330a3) fep_vkb_accented_list_pane_ParamLimits

0xb878,	// (0x000330a3) fep_vkb_accented_list_pane

0x1b4d,	// (0x00029378) bg_popup_fep_shadow_pane_g9

0xcf5b,	// (0x00034786) bg_popup_fep_shadow_pane_cp3

0xc7b8,	// (0x00033fe3) list_accented_list_pane

0x5c21,	// (0x0002d44c) list_single_accented_list_pane_ParamLimits

0x5c21,	// (0x0002d44c) list_single_accented_list_pane

0xcf5b,	// (0x00034786) list_highlight_pane_cp10

0x5c32,	// (0x0002d45d) list_single_accented_list_pane_t1

0xa45b,	// (0x00031c86) popup_slider_window_ParamLimits

0xa45b,	// (0x00031c86) popup_slider_window

0x5870,	// (0x0002d09b) aid_indentation_list_msg

0xd6ac,	// (0x00034ed7) bg_popup_window_pane_cp19

0x5d58,	// (0x0002d583) popup_slider_window_g1

0x5d74,	// (0x0002d59f) popup_slider_window_g2

0x5d90,	// (0x0002d5bb) popup_slider_window_g3

0x0005,

0xfcbb,	// (0x000374e6) popup_slider_window_g

0x5dff,	// (0x0002d62a) popup_slider_window_t1

0x5e73,	// (0x0002d69e) small_volume_slider_vertical_pane

0x4762,	// (0x0002bf8d) small_volume_slider_vertical_pane_g1

0x4762,	// (0x0002bf8d) small_volume_slider_vertical_pane_g2

0x5e8f,	// (0x0002d6ba) small_volume_slider_vertical_pane_g3

0x0002,

0xfccd,	// (0x000374f8) small_volume_slider_vertical_pane_g

0x8e13,	// (0x0003063e) area_side_right_pane_ParamLimits

0x8e13,	// (0x0003063e) area_side_right_pane

0xbb7a,	// (0x000333a5) aid_size_side_button_ParamLimits

0xbb7a,	// (0x000333a5) aid_size_side_button

0xbb93,	// (0x000333be) grid_sctrl_middle_pane_ParamLimits

0xbb93,	// (0x000333be) grid_sctrl_middle_pane

0x1cd7,	// (0x00029502) sctrl_sk_bottom_pane

0x1ce8,	// (0x00029513) sctrl_sk_top_pane

0x1cfa,	// (0x00029525) aid_touch_sctrl_top

0xc413,	// (0x00033c3e) bg_sctrl_sk_pane_ParamLimits

0xc413,	// (0x00033c3e) bg_sctrl_sk_pane

0x1d07,	// (0x00029532) sctrl_sk_top_pane_g1

0x1d14,	// (0x0002953f) sctrl_sk_top_pane_t1

0x1cfa,	// (0x00029525) aid_touch_sctrl_bottom

0xc413,	// (0x00033c3e) bg_sctrl_sk_pane_cp_ParamLimits

0xc413,	// (0x00033c3e) bg_sctrl_sk_pane_cp

0x1d2f,	// (0x0002955a) sctrl_sk_bottom_pane_g1

0x1d14,	// (0x0002953f) sctrl_sk_bottom_pane_t1

0xbbad,	// (0x000333d8) cell_sctrl_middle_pane_ParamLimits

0xbbad,	// (0x000333d8) cell_sctrl_middle_pane

0xbbbe,	// (0x000333e9) aid_touch_sctrl_middle_ParamLimits

0xbbbe,	// (0x000333e9) aid_touch_sctrl_middle

0xbbcb,	// (0x000333f6) bg_sctrl_middle_pane_ParamLimits

0xbbcb,	// (0x000333f6) bg_sctrl_middle_pane

0x5f17,	// (0x0002d742) cell_sctrl_middle_pane_g1_ParamLimits

0x5f17,	// (0x0002d742) cell_sctrl_middle_pane_g1

0xbbd9,	// (0x00033404) cell_sctrl_middle_pane_g2_ParamLimits

0xbbd9,	// (0x00033404) cell_sctrl_middle_pane_g2

0x0001,

0xfcd9,	// (0x00037504) cell_sctrl_middle_pane_g_ParamLimits

0xfcd9,	// (0x00037504) cell_sctrl_middle_pane_g

0x0c96,	// (0x000284c1) bg_sctrl_middle_pane_g1

0x0c9e,	// (0x000284c9) bg_sctrl_middle_pane_g2

0x0ca6,	// (0x000284d1) bg_sctrl_middle_pane_g3

0x0cae,	// (0x000284d9) bg_sctrl_middle_pane_g4

0x0cb6,	// (0x000284e1) bg_sctrl_middle_pane_g5

0x0cbe,	// (0x000284e9) bg_sctrl_middle_pane_g6

0x0cc6,	// (0x000284f1) bg_sctrl_middle_pane_g7

0x0cce,	// (0x000284f9) bg_sctrl_middle_pane_g8

0x0007,

0xfcde,	// (0x00037509) bg_sctrl_middle_pane_g

0x0cd6,	// (0x00028501) bg_sctrl_middle_pane_g8_copy1

0x0c96,	// (0x000284c1) bg_sctrl_sk_pane_g1

0x0c9e,	// (0x000284c9) bg_sctrl_sk_pane_g2

0x0ca6,	// (0x000284d1) bg_sctrl_sk_pane_g3

0x0008,

0xf82d,	// (0x00037058) bg_sctrl_sk_pane_g

0xc5e1,	// (0x00033e0c) aid_size_touch_scroll_bar

0x0cae,	// (0x000284d9) bg_sctrl_sk_pane_g4

0x0cb6,	// (0x000284e1) bg_sctrl_sk_pane_g5

0x0cbe,	// (0x000284e9) bg_sctrl_sk_pane_g6

0x0cc6,	// (0x000284f1) bg_sctrl_sk_pane_g7

0x0cce,	// (0x000284f9) bg_sctrl_sk_pane_g8

0x0cd6,	// (0x00028501) bg_sctrl_sk_pane_g9

0x0260,	// (0x00027a8b) popup_fep_china_hwr2_fs_candidate_window

0x9f21,	// (0x0003174c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9f21,	// (0x0003174c) popup_fep_china_hwr2_fs_control_window

0x49d2,	// (0x0002c1fd) sctrl_sk_top_pane_g2

0x0001,

0xfcd4,	// (0x000374ff) sctrl_sk_top_pane_g

0xd742,	// (0x00034f6d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd742,	// (0x00034f6d) aid_fep_china_hwr2_fs_cell

0xd756,	// (0x00034f81) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd756,	// (0x00034f81) bg_popup_fep_shadow_pane_cp4

0xd76d,	// (0x00034f98) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd76d,	// (0x00034f98) bg_popup_fep_shadow_pane_cp5

0xd77f,	// (0x00034faa) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd77f,	// (0x00034faa) popup_fep_china_hwr2_fs_control_bar_grid

0xd793,	// (0x00034fbe) popup_fep_china_hwr2_fs_control_funtion_grid

0x5eeb,	// (0x0002d716) aid_fep_china_hwr2_fs_candi_cell

0xc279,	// (0x00033aa4) bg_popup_fep_shadow_pane_cp6

0x5ef5,	// (0x0002d720) popup_fep_china_hwr2_fs_candidate_grid

0xd79b,	// (0x00034fc6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd79b,	// (0x00034fc6) cell_fep_china_hwr2_fs_funtion_grid

0x4762,	// (0x0002bf8d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5f17,	// (0x0002d742) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5f17,	// (0x0002d742) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5f25,	// (0x0002d750) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5f25,	// (0x0002d750) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcef,	// (0x0003751a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcef,	// (0x0003751a) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7b3,	// (0x00034fde) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7b3,	// (0x00034fde) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7c8,	// (0x00034ff3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7c8,	// (0x00034ff3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf4,	// (0x0003751f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf4,	// (0x0003751f) cell_fep_china_hwr2_fs_funtion_grid_t

0x5f6c,	// (0x0002d797) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5f74,	// (0x0002d79f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5f7c,	// (0x0002d7a7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf9,	// (0x00037524) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5f84,	// (0x0002d7af) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5f84,	// (0x0002d7af) cell_fep_china_hwr2_fs_candidate_grid

0x5f9d,	// (0x0002d7c8) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5fa5,	// (0x0002d7d0) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4762,	// (0x0002bf8d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4762,	// (0x0002bf8d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb20,	// (0x0003734b) cell_fep_china_hwr2_fs_candidate_grid_g

0x5fad,	// (0x0002d7d8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x085f,	// (0x0002808a) clock_nsta_pane_cp_24_ParamLimits

0x085f,	// (0x0002808a) clock_nsta_pane_cp_24

0x08dd,	// (0x00028108) indicator_nsta_pane_cp_24_ParamLimits

0x08dd,	// (0x00028108) indicator_nsta_pane_cp_24

0x2e3c,	// (0x0002a667) heading_pane_g1

0x0001,

0xf892,	// (0x000370bd) heading_pane_g

0x3881,	// (0x0002b0ac) grid_sct_catagory_button_pane

0x38b1,	// (0x0002b0dc) scroll_pane_cp5_ParamLimits

0x4355,	// (0x0002bb80) button_value_adjust_pane_cp5_ParamLimits

0x4355,	// (0x0002bb80) button_value_adjust_pane_cp5

0x4434,	// (0x0002bc5f) form2_midp_time_pane_ParamLimits

0x5fbb,	// (0x0002d7e6) cell_sct_catagory_button_pane_ParamLimits

0x5fbb,	// (0x0002d7e6) cell_sct_catagory_button_pane

0x4727,	// (0x0002bf52) bg_button_pane_cp01_ParamLimits

0x4727,	// (0x0002bf52) bg_button_pane_cp01

0x4762,	// (0x0002bf8d) cell_sct_catagory_button_pane_g1

0xa4d4,	// (0x00031cff) popup_tb_extension_window

0xd7e4,	// (0x0003500f) aid_size_cell_ext_ParamLimits

0xd7e4,	// (0x0003500f) aid_size_cell_ext

0xc593,	// (0x00033dbe) bg_tb_trans_pane_cp1_ParamLimits

0xc593,	// (0x00033dbe) bg_tb_trans_pane_cp1

0xd80a,	// (0x00035035) grid_tb_ext_pane_ParamLimits

0xd80a,	// (0x00035035) grid_tb_ext_pane

0xd849,	// (0x00035074) cell_tb_ext_pane_ParamLimits

0xd849,	// (0x00035074) cell_tb_ext_pane

0xd871,	// (0x0003509c) cell_tb_ext_pane_g1_ParamLimits

0xd871,	// (0x0003509c) cell_tb_ext_pane_g1

0x6051,	// (0x0002d87c) cell_tb_ext_pane_t1

0xc413,	// (0x00033c3e) list_highlight_pane_cp11_ParamLimits

0xc413,	// (0x00033c3e) list_highlight_pane_cp11

0x9029,	// (0x00030854) popup_uni_indicator_window_ParamLimits

0x9029,	// (0x00030854) popup_uni_indicator_window

0xc69f,	// (0x00033eca) bg_popup_sub_pane_cp14

0xd88e,	// (0x000350b9) list_uniindi_pane

0xd89a,	// (0x000350c5) uniindi_top_pane

0xc413,	// (0x00033c3e) bg_uniindi_top_pane

0xd8b9,	// (0x000350e4) uniindi_top_pane_g1

0xd8cf,	// (0x000350fa) uniindi_top_pane_g2

0x0003,

0xfd00,	// (0x0003752b) uniindi_top_pane_g

0xd8ec,	// (0x00035117) uniindi_top_pane_t1

0x6102,	// (0x0002d92d) list_single_uniindi_pane_ParamLimits

0x6102,	// (0x0002d92d) list_single_uniindi_pane

0x4762,	// (0x0002bf8d) bg_uniindi_top_pane_g1

0x6115,	// (0x0002d940) list_single_uniindi_pane_g1

0x6128,	// (0x0002d953) list_single_uniindi_pane_t1

0xc279,	// (0x00033aa4) control_bg_pane

0x614d,	// (0x0002d978) bg_sctrl_sk_pane_cp1

0x6156,	// (0x0002d981) bg_sctrl_sk_pane_cp2

0x615f,	// (0x0002d98a) control_bg_pane_g1

0x6168,	// (0x0002d993) control_bg_pane_g2

0x0001,

0xfd09,	// (0x00037534) control_bg_pane_g

0x419b,	// (0x0002b9c6) cell_indicator_nsta_pane_g1_ParamLimits

0xb60e,	// (0x00032e39) cell_indicator_nsta_pane_g2_ParamLimits

0xfa84,	// (0x000372af) cell_indicator_nsta_pane_g_ParamLimits

0xeea7,	// (0x000366d2) form2_midp_time_pane_t1_ParamLimits

0x1923,	// (0x0002914e) main_idle_act4_pane_ParamLimits

0x1923,	// (0x0002914e) main_idle_act4_pane

0xa4d4,	// (0x00031cff) popup_tb_extension_window_ParamLimits

0xd82f,	// (0x0003505a) tb_ext_find_pane_ParamLimits

0xd82f,	// (0x0003505a) tb_ext_find_pane

0x6171,	// (0x0002d99c) ai_gene_pane_1_cp1

0xcfdc,	// (0x00034807) ai_gene_pane_2_cp1

0xd916,	// (0x00035141) list_single_idle_plugin_calendar_pane

0x6182,	// (0x0002d9ad) list_single_idle_plugin_notification_pane

0x618b,	// (0x0002d9b6) list_single_idle_plugin_player_pane

0xd91f,	// (0x0003514a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd91f,	// (0x0003514a) list_single_idle_plugin_shortcut_pane

0xd947,	// (0x00035172) main_idle_act4_pane_t1

0xd95e,	// (0x00035189) main_idle_act4_pane_t2

0x0001,

0xfd0e,	// (0x00037539) main_idle_act4_pane_t

0xd975,	// (0x000351a0) middle_sk_idle_act4_pane_ParamLimits

0xd975,	// (0x000351a0) middle_sk_idle_act4_pane

0xd991,	// (0x000351bc) popup_clock_digital_analogue_window_cp2

0xd9bd,	// (0x000351e8) shortcut_wheel_idle_act4_pane_ParamLimits

0xd9bd,	// (0x000351e8) shortcut_wheel_idle_act4_pane

0x4762,	// (0x0002bf8d) shortcut_wheel_idle_act4_pane_g1

0x4762,	// (0x0002bf8d) shortcut_wheel_idle_act4_pane_g2

0x4762,	// (0x0002bf8d) shortcut_wheel_idle_act4_pane_g3

0x4762,	// (0x0002bf8d) shortcut_wheel_idle_act4_pane_g4

0x4762,	// (0x0002bf8d) shortcut_wheel_idle_act4_pane_g5

0x621e,	// (0x0002da49) shortcut_wheel_idle_act4_pane_g6

0x6226,	// (0x0002da51) shortcut_wheel_idle_act4_pane_g7

0x622e,	// (0x0002da59) shortcut_wheel_idle_act4_pane_g8

0x6236,	// (0x0002da61) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd13,	// (0x0003753e) shortcut_wheel_idle_act4_pane_g

0xd117,	// (0x00034942) middle_sk_idle_act4_pane_g1_ParamLimits

0xd117,	// (0x00034942) middle_sk_idle_act4_pane_g1

0xda3a,	// (0x00035265) middle_sk_idle_act4_pane_g2_ParamLimits

0xda3a,	// (0x00035265) middle_sk_idle_act4_pane_g2

0x0001,

0xfd36,	// (0x00037561) middle_sk_idle_act4_pane_g_ParamLimits

0xfd36,	// (0x00037561) middle_sk_idle_act4_pane_g

0xda52,	// (0x0003527d) middle_sk_idle_act4_pane_t1_ParamLimits

0xda52,	// (0x0003527d) middle_sk_idle_act4_pane_t1

0xda81,	// (0x000352ac) grid_ai_shortcut_pane_ParamLimits

0xda81,	// (0x000352ac) grid_ai_shortcut_pane

0xda9e,	// (0x000352c9) list_highlight_pane_cp16_ParamLimits

0xda9e,	// (0x000352c9) list_highlight_pane_cp16

0xdaab,	// (0x000352d6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdaab,	// (0x000352d6) list_single_idle_plugin_shortcut_pane_g1

0xdab7,	// (0x000352e2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdab7,	// (0x000352e2) list_single_idle_plugin_shortcut_pane_g2

0xdad3,	// (0x000352fe) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdad3,	// (0x000352fe) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3b,	// (0x00037566) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3b,	// (0x00037566) list_single_idle_plugin_shortcut_pane_g

0xdae8,	// (0x00035313) cell_ai_shortcut_pane_ParamLimits

0xdae8,	// (0x00035313) cell_ai_shortcut_pane

0xdafe,	// (0x00035329) cell_ai_shortcut_pane_g1_ParamLimits

0xdafe,	// (0x00035329) cell_ai_shortcut_pane_g1

0x6171,	// (0x0002d99c) ai_gene_pane_1_cp2

0x6366,	// (0x0002db91) ai_gene_pane_2_cp2

0x636e,	// (0x0002db99) list_highlight_pane_cp15

0xdb20,	// (0x0003534b) list_single_idle_plugin_calendar_pane_g1

0x636e,	// (0x0002db99) list_highlight_pane_cp17

0x637f,	// (0x0002dbaa) list_single_idle_plugin_calendar_pane_g1_copy1

0x6387,	// (0x0002dbb2) list_single_idle_plugin_player_pane_g1

0x3ada,	// (0x0002b305) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd42,	// (0x0003756d) list_single_idle_plugin_player_pane_g

0x638f,	// (0x0002dbba) list_single_idle_plugin_player_pane_t1

0x639d,	// (0x0002dbc8) list_single_idle_plugin_player_pane_t2

0x63ab,	// (0x0002dbd6) list_single_idle_plugin_player_pane_t3

0x63b9,	// (0x0002dbe4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd47,	// (0x00037572) list_single_idle_plugin_player_pane_t

0x63c7,	// (0x0002dbf2) wait_bar_pane_cp15

0x63cf,	// (0x0002dbfa) grid_ai_notification_pane

0x3ada,	// (0x0002b305) list_single_idle_plugin_notification_pane_g1

0xdb28,	// (0x00035353) cell_ai_notification_pane_ParamLimits

0xdb28,	// (0x00035353) cell_ai_notification_pane

0x63e5,	// (0x0002dc10) cell_ai_notification_pane_g1

0x63ed,	// (0x0002dc18) cell_ai_notification_pane_t1

0xdb35,	// (0x00035360) tb_ext_find_button_pane

0xdb3d,	// (0x00035368) tb_ext_find_pane_g1

0xdb45,	// (0x00035370) tb_ext_find_pane_t1

0xcaf1,	// (0x0003431c) tb_ext_find_button_pane_g1

0xdb53,	// (0x0003537e) tb_ext_find_button_pane_g2

0x0001,

0xfd50,	// (0x0003757b) tb_ext_find_button_pane_g

0xd947,	// (0x00035172) main_idle_act4_pane_t1_ParamLimits

0xd95e,	// (0x00035189) main_idle_act4_pane_t2_ParamLimits

0xfd0e,	// (0x00037539) main_idle_act4_pane_t_ParamLimits

0xd991,	// (0x000351bc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd9a9,	// (0x000351d4) sat_plugin_idle_act4_pane_ParamLimits

0xd9a9,	// (0x000351d4) sat_plugin_idle_act4_pane

0xdb5c,	// (0x00035387) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdb5c,	// (0x00035387) sat_plugin_idle_act4_pane_t1

0xdb74,	// (0x0003539f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdb74,	// (0x0003539f) sat_plugin_idle_act4_pane_t2

0xdb8c,	// (0x000353b7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdb8c,	// (0x000353b7) sat_plugin_idle_act4_pane_t3

0xdba4,	// (0x000353cf) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdba4,	// (0x000353cf) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd55,	// (0x00037580) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd55,	// (0x00037580) sat_plugin_idle_act4_pane_t

0x8fa4,	// (0x000307cf) popup_battery_window_ParamLimits

0x8fa4,	// (0x000307cf) popup_battery_window

0xc413,	// (0x00033c3e) bg_popup_sub_pane_cp25_ParamLimits

0xc413,	// (0x00033c3e) bg_popup_sub_pane_cp25

0x646e,	// (0x0002dc99) popup_battery_window_g1_ParamLimits

0x646e,	// (0x0002dc99) popup_battery_window_g1

0x647a,	// (0x0002dca5) popup_battery_window_t1_ParamLimits

0x647a,	// (0x0002dca5) popup_battery_window_t1

0x648c,	// (0x0002dcb7) popup_battery_window_t2_ParamLimits

0x648c,	// (0x0002dcb7) popup_battery_window_t2

0x0001,

0xfd5e,	// (0x00037589) popup_battery_window_t_ParamLimits

0xfd5e,	// (0x00037589) popup_battery_window_t

0x9b75,	// (0x000313a0) midp_canvas_pane_ParamLimits

0x9be7,	// (0x00031412) midp_keypad_pane_ParamLimits

0x9be7,	// (0x00031412) midp_keypad_pane

0xc7e1,	// (0x0003400c) main_midp_pane_ParamLimits

0xb61b,	// (0x00032e46) signal_pane_g2_cp_ParamLimits

0xdbbc,	// (0x000353e7) aid_size_cell_midp_keypad_ParamLimits

0xdbbc,	// (0x000353e7) aid_size_cell_midp_keypad

0xdbda,	// (0x00035405) midp_keyp_game_grid_pane_ParamLimits

0xdbda,	// (0x00035405) midp_keyp_game_grid_pane

0xdc01,	// (0x0003542c) midp_keyp_rocker_pane_ParamLimits

0xdc01,	// (0x0003542c) midp_keyp_rocker_pane

0xdc52,	// (0x0003547d) midp_keyp_sk_left_pane_ParamLimits

0xdc52,	// (0x0003547d) midp_keyp_sk_left_pane

0xdca6,	// (0x000354d1) midp_keyp_sk_right_pane_ParamLimits

0xdca6,	// (0x000354d1) midp_keyp_sk_right_pane

0xc279,	// (0x00033aa4) bg_button_pane_cp03

0xdcfa,	// (0x00035525) midp_keyp_sk_left_pane_g1

0xc279,	// (0x00033aa4) bg_button_pane_cp04

0xdcfa,	// (0x00035525) midp_keyp_sk_right_pane_g1

0x4762,	// (0x0002bf8d) midp_keyp_rocker_pane_g1

0xdd03,	// (0x0003552e) keyp_game_cell_pane_ParamLimits

0xdd03,	// (0x0003552e) keyp_game_cell_pane

0xc279,	// (0x00033aa4) bg_button_pane_cp02

0xdd27,	// (0x00035552) keyp_game_cell_pane_g1

0x8fc4,	// (0x000307ef) popup_fep_vkb2_window_ParamLimits

0x8fc4,	// (0x000307ef) popup_fep_vkb2_window

0xbbe5,	// (0x00033410) aid_size_cell_vkb2_ParamLimits

0xbbe5,	// (0x00033410) aid_size_cell_vkb2

0xbc19,	// (0x00033444) popup_fep_vkb2_window_g1_ParamLimits

0xbc19,	// (0x00033444) popup_fep_vkb2_window_g1

0xbc69,	// (0x00033494) vkb2_area_bottom_pane_ParamLimits

0xbc69,	// (0x00033494) vkb2_area_bottom_pane

0xbcbd,	// (0x000334e8) vkb2_area_keypad_pane_ParamLimits

0xbcbd,	// (0x000334e8) vkb2_area_keypad_pane

0xbd05,	// (0x00033530) vkb2_area_top_pane_ParamLimits

0xbd05,	// (0x00033530) vkb2_area_top_pane

0xbd91,	// (0x000335bc) vkb2_top_entry_pane_ParamLimits

0xbd91,	// (0x000335bc) vkb2_top_entry_pane

0xbdbe,	// (0x000335e9) vkb2_top_grid_left_pane_ParamLimits

0xbdbe,	// (0x000335e9) vkb2_top_grid_left_pane

0xbddf,	// (0x0003360a) vkb2_top_grid_right_pane_ParamLimits

0xbddf,	// (0x0003360a) vkb2_top_grid_right_pane

0x1f8c,	// (0x000297b7) vkb2_cell_keypad_pane_ParamLimits

0x1f8c,	// (0x000297b7) vkb2_cell_keypad_pane

0xbe27,	// (0x00033652) vkb2_area_bottom_grid_pane_ParamLimits

0xbe27,	// (0x00033652) vkb2_area_bottom_grid_pane

0xbe51,	// (0x0003367c) vkb2_area_bottom_pane_g1_ParamLimits

0xbe51,	// (0x0003367c) vkb2_area_bottom_pane_g1

0xbe77,	// (0x000336a2) vkb2_area_bottom_pane_g2_ParamLimits

0xbe77,	// (0x000336a2) vkb2_area_bottom_pane_g2

0xbea8,	// (0x000336d3) vkb2_area_bottom_pane_g3_ParamLimits

0xbea8,	// (0x000336d3) vkb2_area_bottom_pane_g3

0x0002,

0xfd63,	// (0x0003758e) vkb2_area_bottom_pane_g_ParamLimits

0xfd63,	// (0x0003758e) vkb2_area_bottom_pane_g

0x2136,	// (0x00029961) vkb2_top_cell_left_pane_ParamLimits

0x2136,	// (0x00029961) vkb2_top_cell_left_pane

0xdd30,	// (0x0003555b) vkb2_top_entry_pane_g1_ParamLimits

0xdd30,	// (0x0003555b) vkb2_top_entry_pane_g1

0xdd3e,	// (0x00035569) vkb2_top_entry_pane_t1_ParamLimits

0xdd3e,	// (0x00035569) vkb2_top_entry_pane_t1

0x663d,	// (0x0002de68) vkb2_top_entry_pane_t2_ParamLimits

0x663d,	// (0x0002de68) vkb2_top_entry_pane_t2

0x666f,	// (0x0002de9a) vkb2_top_entry_pane_t3_ParamLimits

0x666f,	// (0x0002de9a) vkb2_top_entry_pane_t3

0x0002,

0xfd6a,	// (0x00037595) vkb2_top_entry_pane_t_ParamLimits

0xfd6a,	// (0x00037595) vkb2_top_entry_pane_t

0xbf12,	// (0x0003373d) vkb2_top_grid_right_pane_g1_ParamLimits

0xbf12,	// (0x0003373d) vkb2_top_grid_right_pane_g1

0x2199,	// (0x000299c4) vkb2_top_grid_right_pane_g2_ParamLimits

0x2199,	// (0x000299c4) vkb2_top_grid_right_pane_g2

0x21b1,	// (0x000299dc) vkb2_top_grid_right_pane_g3_ParamLimits

0x21b1,	// (0x000299dc) vkb2_top_grid_right_pane_g3

0xbf28,	// (0x00033753) vkb2_top_grid_right_pane_g4_ParamLimits

0xbf28,	// (0x00033753) vkb2_top_grid_right_pane_g4

0x0003,

0xfd71,	// (0x0003759c) vkb2_top_grid_right_pane_g_ParamLimits

0xfd71,	// (0x0003759c) vkb2_top_grid_right_pane_g

0x21df,	// (0x00029a0a) vkb2_top_cell_left_pane_g1

0x21f6,	// (0x00029a21) vkb2_cell_keypad_pane_g1_ParamLimits

0x21f6,	// (0x00029a21) vkb2_cell_keypad_pane_g1

0x6693,	// (0x0002debe) vkb2_cell_keypad_pane_t1_ParamLimits

0x6693,	// (0x0002debe) vkb2_cell_keypad_pane_t1

0x2204,	// (0x00029a2f) vkb2_cell_bottom_grid_pane_ParamLimits

0x2204,	// (0x00029a2f) vkb2_cell_bottom_grid_pane

0x223d,	// (0x00029a68) vkb2_cell_bottom_grid_pane_g1

0xd9de,	// (0x00035209) aid_call2_pane_cp02

0xd9e6,	// (0x00035211) aid_call_pane_cp02

0xd9ee,	// (0x00035219) clock_digital_number_pane_cp10

0xd9f6,	// (0x00035221) clock_digital_number_pane_cp11

0xd9fe,	// (0x00035229) clock_digital_number_pane_cp12

0xda06,	// (0x00035231) clock_digital_number_pane_cp13

0xda0e,	// (0x00035239) clock_digital_separator_pane_cp10

0xcaf1,	// (0x0003431c) popup_clock_digital_analogue_window_cp2_g1

0xcaf1,	// (0x0003431c) popup_clock_digital_analogue_window_cp2_g2

0xda16,	// (0x00035241) popup_clock_digital_analogue_window_cp2_g3

0xcaf1,	// (0x0003431c) popup_clock_digital_analogue_window_cp2_g4

0xda16,	// (0x00035241) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd26,	// (0x00037551) popup_clock_digital_analogue_window_cp2_g

0xda1e,	// (0x00035249) popup_clock_digital_analogue_window_cp2_t1

0xda2c,	// (0x00035257) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd31,	// (0x0003755c) popup_clock_digital_analogue_window_cp2_t

0x4762,	// (0x0002bf8d) clock_digital_number_pane_cp10_g1

0x4762,	// (0x0002bf8d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb20,	// (0x0003734b) clock_digital_number_pane_cp10_g

0x4762,	// (0x0002bf8d) clock_digital_separator_pane_cp10_g1

0x4762,	// (0x0002bf8d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb20,	// (0x0003734b) clock_digital_separator_pane_cp10_g

0xd8db,	// (0x00035106) uniindi_top_pane_g3

0x60cb,	// (0x0002d8f6) uniindi_top_pane_g4

0x2017,	// (0x00029842) vkb2_row_keypad_pane_ParamLimits

0x2017,	// (0x00029842) vkb2_row_keypad_pane

0x225d,	// (0x00029a88) vkb2_cell_t_keypad_pane_ParamLimits

0x225d,	// (0x00029a88) vkb2_cell_t_keypad_pane

0x226d,	// (0x00029a98) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x226d,	// (0x00029a98) vkb2_cell_t_keypad_pane_cp08

0x2280,	// (0x00029aab) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2280,	// (0x00029aab) vkb2_cell_t_keypad_pane_cp09

0x2294,	// (0x00029abf) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2294,	// (0x00029abf) vkb2_cell_t_keypad_pane_cp01

0x22a5,	// (0x00029ad0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x22a5,	// (0x00029ad0) vkb2_cell_t_keypad_pane_cp02

0x22b6,	// (0x00029ae1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x22b6,	// (0x00029ae1) vkb2_cell_t_keypad_pane_cp03

0x22c7,	// (0x00029af2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x22c7,	// (0x00029af2) vkb2_cell_t_keypad_pane_cp04

0x22d8,	// (0x00029b03) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x22d8,	// (0x00029b03) vkb2_cell_t_keypad_pane_cp05

0x22e9,	// (0x00029b14) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x22e9,	// (0x00029b14) vkb2_cell_t_keypad_pane_cp06

0x22fa,	// (0x00029b25) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x22fa,	// (0x00029b25) vkb2_cell_t_keypad_pane_cp07

0x230b,	// (0x00029b36) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x230b,	// (0x00029b36) vkb2_cell_t_keypad_pane_cp10

0x49d2,	// (0x0002c1fd) vkb2_cell_t_keypad_pane_g1

0x66aa,	// (0x0002ded5) vkb2_cell_t_keypad_pane_t1

0xc279,	// (0x00033aa4) popup_grid_graphic2_window

0xdd77,	// (0x000355a2) aid_size_cell_graphic2_ParamLimits

0xdd77,	// (0x000355a2) aid_size_cell_graphic2

0xddb5,	// (0x000355e0) bg_popup_window_pane_cp21_ParamLimits

0xddb5,	// (0x000355e0) bg_popup_window_pane_cp21

0xddc3,	// (0x000355ee) graphic2_pages_pane_ParamLimits

0xddc3,	// (0x000355ee) graphic2_pages_pane

0xde19,	// (0x00035644) grid_graphic2_control_pane_ParamLimits

0xde19,	// (0x00035644) grid_graphic2_control_pane

0xde61,	// (0x0003568c) grid_graphic2_pane_ParamLimits

0xde61,	// (0x0003568c) grid_graphic2_pane

0xdee8,	// (0x00035713) cell_graphic2_pane

0xc279,	// (0x00033aa4) main_comp_mode_pane

0x5922,	// (0x0002d14d) list_ai3_gene_pane_ParamLimits

0xd6ac,	// (0x00034ed7) bg_popup_window_pane_cp19_ParamLimits

0x5cfc,	// (0x0002d527) bg_touch_area_indi_pane_ParamLimits

0x5cfc,	// (0x0002d527) bg_touch_area_indi_pane

0x5d12,	// (0x0002d53d) bg_touch_area_indi_pane_cp01_ParamLimits

0x5d12,	// (0x0002d53d) bg_touch_area_indi_pane_cp01

0x5d28,	// (0x0002d553) bg_touch_area_indi_pane_cp02_ParamLimits

0x5d28,	// (0x0002d553) bg_touch_area_indi_pane_cp02

0x5d3e,	// (0x0002d569) bg_touch_area_indi_pane_cp03_ParamLimits

0x5d3e,	// (0x0002d569) bg_touch_area_indi_pane_cp03

0x5d58,	// (0x0002d583) popup_slider_window_g1_ParamLimits

0x5d74,	// (0x0002d59f) popup_slider_window_g2_ParamLimits

0x5d90,	// (0x0002d5bb) popup_slider_window_g3_ParamLimits

0xfcbb,	// (0x000374e6) popup_slider_window_g_ParamLimits

0x5dff,	// (0x0002d62a) popup_slider_window_t1_ParamLimits

0x5e73,	// (0x0002d69e) small_volume_slider_vertical_pane_ParamLimits

0xdee8,	// (0x00035713) cell_graphic2_pane_ParamLimits

0xdf43,	// (0x0003576e) bg_button_pane_cp10_ParamLimits

0xdf43,	// (0x0003576e) bg_button_pane_cp10

0xdf56,	// (0x00035781) bg_button_pane_cp11_ParamLimits

0xdf56,	// (0x00035781) bg_button_pane_cp11

0xdf69,	// (0x00035794) graphic2_pages_pane_g1_ParamLimits

0xdf69,	// (0x00035794) graphic2_pages_pane_g1

0xdf84,	// (0x000357af) graphic2_pages_pane_g2_ParamLimits

0xdf84,	// (0x000357af) graphic2_pages_pane_g2

0x0001,

0xfd7f,	// (0x000375aa) graphic2_pages_pane_g_ParamLimits

0xfd7f,	// (0x000375aa) graphic2_pages_pane_g

0xdf9c,	// (0x000357c7) graphic2_pages_pane_t1_ParamLimits

0xdf9c,	// (0x000357c7) graphic2_pages_pane_t1

0xdfb4,	// (0x000357df) cell_graphic2_control_pane_ParamLimits

0xdfb4,	// (0x000357df) cell_graphic2_control_pane

0xdfe6,	// (0x00035811) cell_graphic2_pane_g1_ParamLimits

0xdfe6,	// (0x00035811) cell_graphic2_pane_g1

0xd125,	// (0x00034950) cell_graphic2_pane_g2_ParamLimits

0xd125,	// (0x00034950) cell_graphic2_pane_g2

0xdff3,	// (0x0003581e) cell_graphic2_pane_g3_ParamLimits

0xdff3,	// (0x0003581e) cell_graphic2_pane_g3

0xd132,	// (0x0003495d) cell_graphic2_pane_g4_ParamLimits

0xd132,	// (0x0003495d) cell_graphic2_pane_g4

0xe000,	// (0x0003582b) cell_graphic2_pane_g5_ParamLimits

0xe000,	// (0x0003582b) cell_graphic2_pane_g5

0x0004,

0xfd84,	// (0x000375af) cell_graphic2_pane_g_ParamLimits

0xfd84,	// (0x000375af) cell_graphic2_pane_g

0xe01d,	// (0x00035848) cell_graphic2_pane_t1_ParamLimits

0xe01d,	// (0x00035848) cell_graphic2_pane_t1

0x2e30,	// (0x0002a65b) grid_highlight_pane_cp11_ParamLimits

0x2e30,	// (0x0002a65b) grid_highlight_pane_cp11

0xc413,	// (0x00033c3e) bg_button_pane_cp05

0xe067,	// (0x00035892) cell_graphic2_control_pane_g1

0x4762,	// (0x0002bf8d) bg_touch_area_indi_pane_g1

0x6983,	// (0x0002e1ae) aid_cmod_rocker_key_size

0x698d,	// (0x0002e1b8) aid_cmode_itu_key_size

0x6997,	// (0x0002e1c2) main_cmode_video_pane

0x69a1,	// (0x0002e1cc) main_comp_mode_itu_pane

0x69ad,	// (0x0002e1d8) main_comp_mode_rocker_pane

0x69b9,	// (0x0002e1e4) cell_cmode_rocker_pane_ParamLimits

0x69b9,	// (0x0002e1e4) cell_cmode_rocker_pane

0x69cb,	// (0x0002e1f6) cell_cmode_itu_pane_ParamLimits

0x69cb,	// (0x0002e1f6) cell_cmode_itu_pane

0xc69f,	// (0x00033eca) bg_button_pane_cp06_ParamLimits

0xc69f,	// (0x00033eca) bg_button_pane_cp06

0x49d2,	// (0x0002c1fd) cell_cmode_rocker_pane_g1_ParamLimits

0x49d2,	// (0x0002c1fd) cell_cmode_rocker_pane_g1

0x5f17,	// (0x0002d742) cell_cmode_rocker_pane_g2_ParamLimits

0x5f17,	// (0x0002d742) cell_cmode_rocker_pane_g2

0x0001,

0xfd94,	// (0x000375bf) cell_cmode_rocker_pane_g_ParamLimits

0xfd94,	// (0x000375bf) cell_cmode_rocker_pane_g

0xc279,	// (0x00033aa4) bg_button_pane_cp07

0x69e0,	// (0x0002e20b) cell_cmode_itu_pane_g1

0x69e9,	// (0x0002e214) cell_cmode_itu_pane_t1

0x69f7,	// (0x0002e222) cell_cmode_itu_pane_t2

0x0001,

0xfd99,	// (0x000375c4) cell_cmode_itu_pane_t

0x613d,	// (0x0002d968) aid_touch_ctrl_left

0x6145,	// (0x0002d970) aid_touch_ctrl_right

0xc279,	// (0x00033aa4) compa_mode_pane

0xe08d,	// (0x000358b8) aid_cmod_rocker_key_size_cp

0xe097,	// (0x000358c2) aid_cmode_itu_key_size_cp

0x6a19,	// (0x0002e244) compa_mode_pane_g1

0x6a21,	// (0x0002e24c) compa_mode_pane_g2

0x6a29,	// (0x0002e254) compa_mode_pane_g3

0x0002,

0xfd9e,	// (0x000375c9) compa_mode_pane_g

0xe0a1,	// (0x000358cc) main_comp_mode_itu_pane_cp

0xe0a9,	// (0x000358d4) main_comp_mode_rocker_pane_cp

0xe0b1,	// (0x000358dc) cell_cmode_itu_pane_cp_ParamLimits

0xe0b1,	// (0x000358dc) cell_cmode_itu_pane_cp

0xe0c6,	// (0x000358f1) cell_cmode_rocker_pane_cp_ParamLimits

0xe0c6,	// (0x000358f1) cell_cmode_rocker_pane_cp

0xc69f,	// (0x00033eca) bg_button_pane_cp06_cp_ParamLimits

0xc69f,	// (0x00033eca) bg_button_pane_cp06_cp

0x49d2,	// (0x0002c1fd) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x49d2,	// (0x0002c1fd) cell_cmode_rocker_pane_g1_cp

0x4762,	// (0x0002bf8d) cell_cmode_rocker_pane_g2_cp

0xc279,	// (0x00033aa4) bg_button_pane_cp07_cp

0xe0d8,	// (0x00035903) cell_cmode_itu_pane_g1_cp

0xe0e1,	// (0x0003590c) cell_cmode_itu_pane_t1_cp

0xe0e1,	// (0x0003590c) cell_cmode_itu_pane_t2_cp

0xb369,	// (0x00032b94) settings_code_pane_cp2

0xc2e9,	// (0x00033b14) bg_popup_window_pane_cp3_ParamLimits

0xc52c,	// (0x00033d57) heading_pane_cp3_ParamLimits

0xc53b,	// (0x00033d66) listscroll_popup_graphic_pane_ParamLimits

0x1931,	// (0x0002915c) fep_hwr_aid_pane_ParamLimits

0x1cfa,	// (0x00029525) aid_touch_sctrl_top_ParamLimits

0x1d07,	// (0x00029532) sctrl_sk_top_pane_g1_ParamLimits

0x49d2,	// (0x0002c1fd) sctrl_sk_top_pane_g2_ParamLimits

0xfcd4,	// (0x000374ff) sctrl_sk_top_pane_g_ParamLimits

0x1d14,	// (0x0002953f) sctrl_sk_top_pane_t1_ParamLimits

0x1cfa,	// (0x00029525) aid_touch_sctrl_bottom_ParamLimits

0x1d14,	// (0x0002953f) sctrl_sk_bottom_pane_t1_ParamLimits

0xd8a7,	// (0x000350d2) aid_area_touch_clock

0xbd51,	// (0x0003357c) aid_vkb2_area_top_pane_cell_ParamLimits

0xbd51,	// (0x0003357c) aid_vkb2_area_top_pane_cell

0xbe00,	// (0x0003362b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbe00,	// (0x0003362b) aid_vkb2_area_bottom_pane_cell

0x65f5,	// (0x0002de20) popup_char_count_window

0x6a7f,	// (0x0002e2aa) popup_char_count_window_g1

0x6a88,	// (0x0002e2b3) popup_char_count_window_g2

0x6a91,	// (0x0002e2bc) popup_char_count_window_g3

0x0002,

0xfda5,	// (0x000375d0) popup_char_count_window_g

0x6a9a,	// (0x0002e2c5) popup_char_count_window_t1

0x1dad,	// (0x000295d8) popup_fep_char_preview_window_ParamLimits

0x1dad,	// (0x000295d8) popup_fep_char_preview_window

0xbd71,	// (0x0003359c) vkb2_top_candi_pane_ParamLimits

0xbd71,	// (0x0003359c) vkb2_top_candi_pane

0xe0ef,	// (0x0003591a) cell_vkb2_top_candi_pane_ParamLimits

0xe0ef,	// (0x0003591a) cell_vkb2_top_candi_pane

0x143c,	// (0x00028c67) bg_popup_fep_char_preview_window_ParamLimits

0x143c,	// (0x00028c67) bg_popup_fep_char_preview_window

0x2320,	// (0x00029b4b) popup_fep_char_preview_window_t1_ParamLimits

0x2320,	// (0x00029b4b) popup_fep_char_preview_window_t1

0x6af2,	// (0x0002e31d) bg_popup_fep_char_preview_window_g1

0x6afa,	// (0x0002e325) bg_popup_fep_char_preview_window_g2

0x6b02,	// (0x0002e32d) bg_popup_fep_char_preview_window_g3

0x6b0a,	// (0x0002e335) bg_popup_fep_char_preview_window_g4

0x6b12,	// (0x0002e33d) bg_popup_fep_char_preview_window_g5

0x6b1a,	// (0x0002e345) bg_popup_fep_char_preview_window_g6

0x6b22,	// (0x0002e34d) bg_popup_fep_char_preview_window_g7

0x6b2a,	// (0x0002e355) bg_popup_fep_char_preview_window_g8

0x6b32,	// (0x0002e35d) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdac,	// (0x000375d7) bg_popup_fep_char_preview_window_g

0x49d2,	// (0x0002c1fd) cell_vkb2_top_candi_pane_g1_ParamLimits

0x49d2,	// (0x0002c1fd) cell_vkb2_top_candi_pane_g1

0x4ce9,	// (0x0002c514) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4ce9,	// (0x0002c514) cell_vkb2_top_candi_pane_g2

0x4d0a,	// (0x0002c535) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4d0a,	// (0x0002c535) cell_vkb2_top_candi_pane_g3

0x2362,	// (0x00029b8d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2362,	// (0x00029b8d) cell_vkb2_top_candi_pane_g4

0x6b3a,	// (0x0002e365) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6b3a,	// (0x0002e365) cell_vkb2_top_candi_pane_g5

0x5f17,	// (0x0002d742) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5f17,	// (0x0002d742) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc1,	// (0x000375ec) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc1,	// (0x000375ec) cell_vkb2_top_candi_pane_g

0x2383,	// (0x00029bae) cell_vkb2_top_candi_pane_t1

0xb189,	// (0x000329b4) aid_size_touch_slider_mark_ParamLimits

0xb189,	// (0x000329b4) aid_size_touch_slider_mark

0xddff,	// (0x0003562a) grid_graphic2_catg_pane_ParamLimits

0xddff,	// (0x0003562a) grid_graphic2_catg_pane

0xdebb,	// (0x000356e6) popup_grid_graphic2_window_t1_ParamLimits

0xdebb,	// (0x000356e6) popup_grid_graphic2_window_t1

0xded1,	// (0x000356fc) popup_grid_graphic2_window_t2_ParamLimits

0xded1,	// (0x000356fc) popup_grid_graphic2_window_t2

0x0001,

0xfd7a,	// (0x000375a5) popup_grid_graphic2_window_t_ParamLimits

0xfd7a,	// (0x000375a5) popup_grid_graphic2_window_t

0xc413,	// (0x00033c3e) bg_button_pane_cp05_ParamLimits

0xe067,	// (0x00035892) cell_graphic2_control_pane_g1_ParamLimits

0xe14f,	// (0x0003597a) cell_graphic2_catg_pane_ParamLimits

0xe14f,	// (0x0003597a) cell_graphic2_catg_pane

0xc279,	// (0x00033aa4) bg_button_pane_cp12

0xe161,	// (0x0003598c) cell_graphic2_catg_pane_g1

0x6051,	// (0x0002d87c) cell_tb_ext_pane_t1_ParamLimits

0x2156,	// (0x00029981) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2156,	// (0x00029981) vkb2_top_cell_right_narrow_pane

0x216e,	// (0x00029999) vkb2_top_cell_right_wide_pane_ParamLimits

0x216e,	// (0x00029999) vkb2_top_cell_right_wide_pane

0x1923,	// (0x0002914e) bg_vkb2_func_pane_ParamLimits

0x1923,	// (0x0002914e) bg_vkb2_func_pane

0x21df,	// (0x00029a0a) vkb2_top_cell_left_pane_g1_ParamLimits

0x1923,	// (0x0002914e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1923,	// (0x0002914e) bg_vkb2_fuc_pane_cp03

0x223d,	// (0x00029a68) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x0c9e,	// (0x000284c9) bg_vkb2_func_pane_g1

0x0ca6,	// (0x000284d1) bg_vkb2_func_pane_g2

0x0cb6,	// (0x000284e1) bg_vkb2_func_pane_g3

0x0cae,	// (0x000284d9) bg_vkb2_func_pane_g4

0x0cbe,	// (0x000284e9) bg_vkb2_func_pane_g5

0x0cc6,	// (0x000284f1) bg_vkb2_func_pane_g6

0x0cce,	// (0x000284f9) bg_vkb2_func_pane_g7

0x0cd6,	// (0x00028501) bg_vkb2_func_pane_g8

0x0c96,	// (0x000284c1) bg_vkb2_func_pane_g9

0x0008,

0xfdce,	// (0x000375f9) bg_vkb2_func_pane_g

0x1923,	// (0x0002914e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1923,	// (0x0002914e) bg_vkb2_fuc_pane_cp01

0x21df,	// (0x00029a0a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x21df,	// (0x00029a0a) vkb2_top_cell_right_wide_pane_g1

0x1923,	// (0x0002914e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1923,	// (0x0002914e) bg_vkb2_fuc_pane_cp02

0x23a2,	// (0x00029bcd) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x23a2,	// (0x00029bcd) vkb2_top_cell_right_narrow_pane_g1

0xd5ee,	// (0x00034e19) aid_touch_area_decrease_ParamLimits

0xd5ee,	// (0x00034e19) aid_touch_area_decrease

0xd628,	// (0x00034e53) aid_touch_area_increase_ParamLimits

0xd628,	// (0x00034e53) aid_touch_area_increase

0xd650,	// (0x00034e7b) aid_touch_area_mute_ParamLimits

0xd650,	// (0x00034e7b) aid_touch_area_mute

0xd678,	// (0x00034ea3) aid_touch_area_slider_ParamLimits

0xd678,	// (0x00034ea3) aid_touch_area_slider

0xd6b8,	// (0x00034ee3) popup_slider_window_g4_ParamLimits

0xd6b8,	// (0x00034ee3) popup_slider_window_g4

0xd6d2,	// (0x00034efd) popup_slider_window_g5_ParamLimits

0xd6d2,	// (0x00034efd) popup_slider_window_g5

0xd6f8,	// (0x00034f23) popup_slider_window_g6_ParamLimits

0xd6f8,	// (0x00034f23) popup_slider_window_g6

0x5e2d,	// (0x0002d658) popup_slider_window_t2_ParamLimits

0x5e2d,	// (0x0002d658) popup_slider_window_t2

0x0001,

0xfcc8,	// (0x000374f3) popup_slider_window_t_ParamLimits

0xfcc8,	// (0x000374f3) popup_slider_window_t

0xd70e,	// (0x00034f39) slider_pane_ParamLimits

0xd70e,	// (0x00034f39) slider_pane

0x6b76,	// (0x0002e3a1) slider_pane_g1_ParamLimits

0x6b76,	// (0x0002e3a1) slider_pane_g1

0x6b8a,	// (0x0002e3b5) slider_pane_g2_ParamLimits

0x6b8a,	// (0x0002e3b5) slider_pane_g2

0x6ba0,	// (0x0002e3cb) slider_pane_g3_ParamLimits

0x6ba0,	// (0x0002e3cb) slider_pane_g3

0x0003,

0xfde1,	// (0x0003760c) slider_pane_g_ParamLimits

0xfde1,	// (0x0003760c) slider_pane_g

0xa51c,	// (0x00031d47) popup_tb_float_extension_window_ParamLimits

0xa51c,	// (0x00031d47) popup_tb_float_extension_window

0x6bcc,	// (0x0002e3f7) aid_size_cell_tb_float_ext

0xc279,	// (0x00033aa4) bg_popup_sub_window_cp28

0xe16a,	// (0x00035995) grid_tb_float_ext_pane

0xe174,	// (0x0003599f) cell_tb_float_ext_pane_ParamLimits

0xe174,	// (0x0003599f) cell_tb_float_ext_pane

0xe18e,	// (0x000359b9) cell_tb_float_ext_pane_g1

0xe197,	// (0x000359c2) grid_highlight_pane_cp12

0xb856,	// (0x00033081) cell_last_hwr_side_pane_ParamLimits

0xb856,	// (0x00033081) cell_last_hwr_side_pane

0x4762,	// (0x0002bf8d) cell_last_hwr_side_pane_g1

0x6c0e,	// (0x0002e439) cell_last_hwr_side_pane_g2

0x0001,

0xfdea,	// (0x00037615) cell_last_hwr_side_pane_g

0xbedd,	// (0x00033708) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbedd,	// (0x00033708) vkb2_area_bottom_space_btn_pane

0x49d2,	// (0x0002c1fd) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x66aa,	// (0x0002ded5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2383,	// (0x00029bae) cell_vkb2_top_candi_pane_t1_ParamLimits

0x23c2,	// (0x00029bed) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x23c2,	// (0x00029bed) vkb2_area_bottom_space_btn_pane_g1

0x23fc,	// (0x00029c27) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x23fc,	// (0x00029c27) vkb2_area_bottom_space_btn_pane_g2

0x2432,	// (0x00029c5d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2432,	// (0x00029c5d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdef,	// (0x0003761a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdef,	// (0x0003761a) vkb2_area_bottom_space_btn_pane_g

0x19d8,	// (0x00029203) cel_fep_hwr_func_pane_ParamLimits

0x19d8,	// (0x00029203) cel_fep_hwr_func_pane

0xb82b,	// (0x00033056) cell_hwr_side_button_pane_ParamLimits

0xb82b,	// (0x00033056) cell_hwr_side_button_pane

0xd8a7,	// (0x000350d2) aid_area_touch_clock_ParamLimits

0xc413,	// (0x00033c3e) bg_uniindi_top_pane_ParamLimits

0xd8b9,	// (0x000350e4) uniindi_top_pane_g1_ParamLimits

0xd8cf,	// (0x000350fa) uniindi_top_pane_g2_ParamLimits

0xd8db,	// (0x00035106) uniindi_top_pane_g3_ParamLimits

0x60cb,	// (0x0002d8f6) uniindi_top_pane_g4_ParamLimits

0xfd00,	// (0x0003752b) uniindi_top_pane_g_ParamLimits

0xd8ec,	// (0x00035117) uniindi_top_pane_t1_ParamLimits

0xc413,	// (0x00033c3e) bg_vkb2_func_pane_cp01_ParamLimits

0xc413,	// (0x00033c3e) bg_vkb2_func_pane_cp01

0x6c17,	// (0x0002e442) cel_fep_hwr_func_pane_g1_ParamLimits

0x6c17,	// (0x0002e442) cel_fep_hwr_func_pane_g1

0xc413,	// (0x00033c3e) bg_vkb2_func_pane_cp02_ParamLimits

0xc413,	// (0x00033c3e) bg_vkb2_func_pane_cp02

0x6c17,	// (0x0002e442) cell_hwr_side_button_pane_g1_ParamLimits

0x6c17,	// (0x0002e442) cell_hwr_side_button_pane_g1

0x0aea,	// (0x00028315) status_pane_g4_ParamLimits

0x0aea,	// (0x00028315) status_pane_g4

0x0b04,	// (0x0002832f) status_pane_t1

0x449d,	// (0x0002bcc8) form2_midp_gauge_slider_cont_pane

0x44a5,	// (0x0002bcd0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb744,	// (0x00032f6f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb756,	// (0x00032f81) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad3,	// (0x000372fe) form2_midp_gauge_slider_pane_t_ParamLimits

0x44db,	// (0x0002bd06) form2_midp_slider_pane_ParamLimits

0x1d75,	// (0x000295a0) aid_size_cell_func_vkb2_ParamLimits

0x1d75,	// (0x000295a0) aid_size_cell_func_vkb2

0x6bb8,	// (0x0002e3e3) slider_pane_g4_ParamLimits

0x6bb8,	// (0x0002e3e3) slider_pane_g4

0xbf46,	// (0x00033771) form2_midp_gauge_slider_pane_t2_cp01

0xbf54,	// (0x0003377f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbf54,	// (0x0003377f) form2_midp_gauge_slider_pane_t3_cp01

0x24a7,	// (0x00029cd2) form2_midp_slider_pane_cp01

0xc279,	// (0x00033aa4) navi_smil_pane

0x6c50,	// (0x0002e47b) navi_smil_pane_g1

0x6c58,	// (0x0002e483) navi_smil_pane_t1

0x6c25,	// (0x0002e450) form2_midp_slider_pane_g1

0x6c2e,	// (0x0002e459) form2_midp_slider_pane_g2

0x6c36,	// (0x0002e461) form2_midp_slider_pane_g3

0x6c25,	// (0x0002e450) form2_midp_slider_pane_g4

0xe1a0,	// (0x000359cb) form2_midp_slider_pane_g5

0x0004,

0xfdf8,	// (0x00037623) form2_midp_slider_pane_g

0x246c,	// (0x00029c97) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x246c,	// (0x00029c97) vkb2_area_bottom_space_btn_pane_g4

0xa754,	// (0x00031f7f) lc0_navi_pane_ParamLimits

0xa754,	// (0x00031f7f) lc0_navi_pane

0xa7be,	// (0x00031fe9) lc0_stat_indi_pane_ParamLimits

0xa7be,	// (0x00031fe9) lc0_stat_indi_pane

0xa7d3,	// (0x00031ffe) ls0_title_pane_ParamLimits

0xa7d3,	// (0x00031ffe) ls0_title_pane

0xc69f,	// (0x00033eca) bg_popup_sub_pane_cp14_ParamLimits

0xd88e,	// (0x000350b9) list_uniindi_pane_ParamLimits

0xd89a,	// (0x000350c5) uniindi_top_pane_ParamLimits

0x6115,	// (0x0002d940) list_single_uniindi_pane_g1_ParamLimits

0x6128,	// (0x0002d953) list_single_uniindi_pane_t1_ParamLimits

0xbf71,	// (0x0003379c) lc0_stat_clock_pane_ParamLimits

0xbf71,	// (0x0003379c) lc0_stat_clock_pane

0xe1ab,	// (0x000359d6) lc0_stat_indi_pane_g1_ParamLimits

0xe1ab,	// (0x000359d6) lc0_stat_indi_pane_g1

0xe1b8,	// (0x000359e3) lc0_stat_indi_pane_g2_ParamLimits

0xe1b8,	// (0x000359e3) lc0_stat_indi_pane_g2

0x0001,

0xfe03,	// (0x0003762e) lc0_stat_indi_pane_g_ParamLimits

0xfe03,	// (0x0003762e) lc0_stat_indi_pane_g

0xbf81,	// (0x000337ac) lc0_uni_indicator_pane_ParamLimits

0xbf81,	// (0x000337ac) lc0_uni_indicator_pane

0xe1c5,	// (0x000359f0) ls0_title_pane_g1_ParamLimits

0xe1c5,	// (0x000359f0) ls0_title_pane_g1

0xe1d9,	// (0x00035a04) ls0_title_pane_t1_ParamLimits

0xe1d9,	// (0x00035a04) ls0_title_pane_t1

0xbf91,	// (0x000337bc) lc0_uni_indicator_pane_g1_ParamLimits

0xbf91,	// (0x000337bc) lc0_uni_indicator_pane_g1

0x6cca,	// (0x0002e4f5) lc0_stat_clock_pane_t1

0xc279,	// (0x00033aa4) main_ai5_pane

0x6cd8,	// (0x0002e503) ai5_sk_pane_ParamLimits

0x6cd8,	// (0x0002e503) ai5_sk_pane

0xe207,	// (0x00035a32) cell_ai5_widget_pane_ParamLimits

0xe207,	// (0x00035a32) cell_ai5_widget_pane

0x6da5,	// (0x0002e5d0) aid_size_cell_widget_grid

0x6db3,	// (0x0002e5de) bg_ai5_widget_pane_ParamLimits

0x6db3,	// (0x0002e5de) bg_ai5_widget_pane

0x6e2f,	// (0x0002e65a) cell_ai5_widget_pane_g2

0x6e43,	// (0x0002e66e) cell_ai5_widget_pane_g3

0x6e5d,	// (0x0002e688) cell_ai5_widget_pane_g4

0x6e6d,	// (0x0002e698) cell_ai5_widget_pane_g5

0x6e7d,	// (0x0002e6a8) cell_ai5_widget_pane_g6

0x6e89,	// (0x0002e6b4) cell_ai5_widget_pane_g7

0x6ef5,	// (0x0002e720) cell_ai5_widget_pane_t1_ParamLimits

0x6ef5,	// (0x0002e720) cell_ai5_widget_pane_t1

0x6f12,	// (0x0002e73d) cell_ai5_widget_pane_t2_ParamLimits

0x6f12,	// (0x0002e73d) cell_ai5_widget_pane_t2

0x6f2a,	// (0x0002e755) cell_ai5_widget_pane_t3_ParamLimits

0x6f2a,	// (0x0002e755) cell_ai5_widget_pane_t3

0x6f42,	// (0x0002e76d) cell_ai5_widget_pane_t4_ParamLimits

0x6f42,	// (0x0002e76d) cell_ai5_widget_pane_t4

0xe273,	// (0x00035a9e) cell_ai5_widget_pane_t5_ParamLimits

0xe273,	// (0x00035a9e) cell_ai5_widget_pane_t5

0x6f87,	// (0x0002e7b2) cell_ai5_widget_pane_t6_ParamLimits

0x6f87,	// (0x0002e7b2) cell_ai5_widget_pane_t6

0x6f99,	// (0x0002e7c4) cell_ai5_widget_pane_t7_ParamLimits

0x6f99,	// (0x0002e7c4) cell_ai5_widget_pane_t7

0x6fb8,	// (0x0002e7e3) cell_ai5_widget_pane_t8_ParamLimits

0x6fb8,	// (0x0002e7e3) cell_ai5_widget_pane_t8

0x000b,

0xfe23,	// (0x0003764e) cell_ai5_widget_pane_t_ParamLimits

0xfe23,	// (0x0003764e) cell_ai5_widget_pane_t

0x703c,	// (0x0002e867) grid_ai5_widget_pane

0xc69f,	// (0x00033eca) highlight_cell_ai5_widget_pane_ParamLimits

0xc69f,	// (0x00033eca) highlight_cell_ai5_widget_pane

0xe293,	// (0x00035abe) ai5_sk_left_pane

0xe29d,	// (0x00035ac8) ai5_sk_middle_pane

0xe2a7,	// (0x00035ad2) ai5_sk_right_pane

0x7068,	// (0x0002e893) bg_ai5_widget_pane_g1_ParamLimits

0x7068,	// (0x0002e893) bg_ai5_widget_pane_g1

0x7074,	// (0x0002e89f) bg_ai5_widget_pane_g2_ParamLimits

0x7074,	// (0x0002e89f) bg_ai5_widget_pane_g2

0x7080,	// (0x0002e8ab) bg_ai5_widget_pane_g3_ParamLimits

0x7080,	// (0x0002e8ab) bg_ai5_widget_pane_g3

0x708c,	// (0x0002e8b7) bg_ai5_widget_pane_g4_ParamLimits

0x708c,	// (0x0002e8b7) bg_ai5_widget_pane_g4

0x7098,	// (0x0002e8c3) bg_ai5_widget_pane_g5_ParamLimits

0x7098,	// (0x0002e8c3) bg_ai5_widget_pane_g5

0x70a4,	// (0x0002e8cf) bg_ai5_widget_pane_g6_ParamLimits

0x70a4,	// (0x0002e8cf) bg_ai5_widget_pane_g6

0x70b0,	// (0x0002e8db) bg_ai5_widget_pane_g7_ParamLimits

0x70b0,	// (0x0002e8db) bg_ai5_widget_pane_g7

0x70bc,	// (0x0002e8e7) bg_ai5_widget_pane_g8_ParamLimits

0x70bc,	// (0x0002e8e7) bg_ai5_widget_pane_g8

0x70c8,	// (0x0002e8f3) bg_ai5_widget_pane_g9_ParamLimits

0x70c8,	// (0x0002e8f3) bg_ai5_widget_pane_g9

0x0008,

0xfe3c,	// (0x00037667) bg_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x00037667) bg_ai5_widget_pane_g

0x70fa,	// (0x0002e925) cell_shortcut_ai5_widget_pane_ParamLimits

0x70fa,	// (0x0002e925) cell_shortcut_ai5_widget_pane

0xcf5b,	// (0x00034786) bg_cell_shortcut_ai5_widget_pane

0x710b,	// (0x0002e936) cell_grid_ai5_widget_pane_g1

0xcf5b,	// (0x00034786) highlight_cell_shortcut_ai5_widget_pane

0x0ca6,	// (0x000284d1) ai5_sk_left_pane_g1

0x7114,	// (0x0002e93f) ai5_sk_left_pane_g2

0x711c,	// (0x0002e947) ai5_sk_left_pane_g3

0x7124,	// (0x0002e94f) ai5_sk_left_pane_g4

0x0003,

0xfe4f,	// (0x0003767a) ai5_sk_left_pane_g

0x712c,	// (0x0002e957) ai5_sk_left_pane_t1

0x0c9e,	// (0x000284c9) ai5_sk_right_pane_g1

0x713a,	// (0x0002e965) ai5_sk_right_pane_g2

0x7142,	// (0x0002e96d) ai5_sk_right_pane_g3

0x714a,	// (0x0002e975) ai5_sk_right_pane_g4

0x0003,

0xfe58,	// (0x00037683) ai5_sk_right_pane_g

0x7152,	// (0x0002e97d) ai5_sk_right_pane_t1

0x0c9e,	// (0x000284c9) ai5_sk_middle_pane_g1

0x0ca6,	// (0x000284d1) ai5_sk_middle_pane_g2

0x0cbe,	// (0x000284e9) ai5_sk_middle_pane_g3

0x7142,	// (0x0002e96d) ai5_sk_middle_pane_g4

0x711c,	// (0x0002e947) ai5_sk_middle_pane_g5

0x7160,	// (0x0002e98b) ai5_sk_middle_pane_g6

0xe2b1,	// (0x00035adc) ai5_sk_middle_pane_g7

0x0006,

0xfe61,	// (0x0003768c) ai5_sk_middle_pane_g

0xa640,	// (0x00031e6b) aid_touch_area_size_lc0_ParamLimits

0xa640,	// (0x00031e6b) aid_touch_area_size_lc0

0x1b63,	// (0x0002938e) cell_hwr_candidate_pane_t1_ParamLimits

0x07bb,	// (0x00027fe6) aid_touch_navi_pane

0xa8cc,	// (0x000320f7) status_dt_navi_pane_ParamLimits

0xa8cc,	// (0x000320f7) status_dt_navi_pane

0xa8e4,	// (0x0003210f) status_dt_sta_pane_ParamLimits

0xa8e4,	// (0x0003210f) status_dt_sta_pane

0xe2b9,	// (0x00035ae4) dt_sta_controll_pane

0xe2c6,	// (0x00035af1) dt_sta_indi_pane

0xe2d3,	// (0x00035afe) dt_sta_title_pane

0xc413,	// (0x00033c3e) bg_dt_sta_indi_pane_ParamLimits

0xc413,	// (0x00033c3e) bg_dt_sta_indi_pane

0xe2e5,	// (0x00035b10) dt_sta_battery_pane

0xe2ed,	// (0x00035b18) dt_sta_indi_pane_g1

0x71b2,	// (0x0002e9dd) dt_sta_indi_pane_g2

0x71bb,	// (0x0002e9e6) dt_sta_indi_pane_g3

0x0002,

0xfe70,	// (0x0003769b) dt_sta_indi_pane_g

0x71c4,	// (0x0002e9ef) dt_sta_signal_pane

0xc69f,	// (0x00033eca) bg_dt_sta_title_pane_ParamLimits

0xc69f,	// (0x00033eca) bg_dt_sta_title_pane

0x2f90,	// (0x0002a7bb) dt_sta_title_pane_g1

0xe2f6,	// (0x00035b21) dt_sta_title_pane_t1_ParamLimits

0xe2f6,	// (0x00035b21) dt_sta_title_pane_t1

0xc279,	// (0x00033aa4) bg_dt_sta_control_pane

0xe30b,	// (0x00035b36) dt_sta_controll_pane_g1

0xe314,	// (0x00035b3f) bg_dt_sta_title_pane_g1

0xe31d,	// (0x00035b48) bg_dt_sta_title_pane_g2

0xe326,	// (0x00035b51) bg_dt_sta_title_pane_g3

0x0002,

0xfe77,	// (0x000376a2) bg_dt_sta_title_pane_g

0x4762,	// (0x0002bf8d) bg_dt_sta_indi_pane_g1

0x7206,	// (0x0002ea31) dt_sta_signal_pane_g1

0x720e,	// (0x0002ea39) dt_sta_signal_pane_g2

0x0001,

0xfe7e,	// (0x000376a9) dt_sta_signal_pane_g

0x7216,	// (0x0002ea41) dt_sta_battery_pane_g1

0x721f,	// (0x0002ea4a) dt_sta_battery_pane_t1

0x4762,	// (0x0002bf8d) bg_dt_sta_control_pane_g1

0xcb74,	// (0x0003439f) fep_china_uni_eep_pane

0xcb7c,	// (0x000343a7) fep_china_uni_entry_pane_ParamLimits

0xcb8c,	// (0x000343b7) popup_fep_china_uni_window_g1_ParamLimits

0xcb9c,	// (0x000343c7) popup_fep_china_uni_window_g2_ParamLimits

0xcb9c,	// (0x000343c7) popup_fep_china_uni_window_g2

0x0001,

0xf6e9,	// (0x00036f14) popup_fep_china_uni_window_g_ParamLimits

0xf6e9,	// (0x00036f14) popup_fep_china_uni_window_g

0x722e,	// (0x0002ea59) fep_china_uni_eep_pane_g1

0x7236,	// (0x0002ea61) fep_china_uni_eep_pane_t1

0x6c47,	// (0x0002e472) aid_touch_area_size_smil_player

0x0911,	// (0x0002813c) lc0_clock_pane

0x0af8,	// (0x00028323) status_pane_g5_ParamLimits

0x0af8,	// (0x00028323) status_pane_g5

0xa078,	// (0x000318a3) popup_keymap_window

0x0ab6,	// (0x000282e1) status_icon_pane

0x6e43,	// (0x0002e66e) cell_ai5_widget_pane_g3_ParamLimits

0x6e5d,	// (0x0002e688) cell_ai5_widget_pane_g4_ParamLimits

0x6e6d,	// (0x0002e698) cell_ai5_widget_pane_g5_ParamLimits

0x6e95,	// (0x0002e6c0) cell_ai5_widget_pane_g8_ParamLimits

0x6e95,	// (0x0002e6c0) cell_ai5_widget_pane_g8

0x6ea9,	// (0x0002e6d4) cell_ai5_widget_pane_g9_ParamLimits

0x6ea9,	// (0x0002e6d4) cell_ai5_widget_pane_g9

0x6ebd,	// (0x0002e6e8) cell_ai5_widget_pane_g10_ParamLimits

0x6ebd,	// (0x0002e6e8) cell_ai5_widget_pane_g10

0x7245,	// (0x0002ea70) status_icon_pane_g1

0xc279,	// (0x00033aa4) bg_popup_sub_pane_cp13

0x724d,	// (0x0002ea78) popup_keymap_window_t1

0x9d34,	// (0x0003155f) control_pane_g6_ParamLimits

0x9d34,	// (0x0003155f) control_pane_g6

0x9d41,	// (0x0003156c) control_pane_g7_ParamLimits

0x9d41,	// (0x0003156c) control_pane_g7

0x9d4e,	// (0x00031579) control_pane_g8_ParamLimits

0x9d4e,	// (0x00031579) control_pane_g8

0xe2b9,	// (0x00035ae4) dt_sta_controll_pane_ParamLimits

0xe2c6,	// (0x00035af1) dt_sta_indi_pane_ParamLimits

0xe2d3,	// (0x00035afe) dt_sta_title_pane_ParamLimits

0xc5ea,	// (0x00033e15) aid_size_touch_scroll_bar_cale

0x8fb8,	// (0x000307e3) popup_discreet_window_ParamLimits

0x8fb8,	// (0x000307e3) popup_discreet_window

0x900a,	// (0x00030835) popup_sk_window

0x143c,	// (0x00028c67) bg_popup_sub_pane_cp28_ParamLimits

0x143c,	// (0x00028c67) bg_popup_sub_pane_cp28

0x725b,	// (0x0002ea86) popup_discreet_window_g1_ParamLimits

0x725b,	// (0x0002ea86) popup_discreet_window_g1

0xe32f,	// (0x00035b5a) popup_discreet_window_t1_ParamLimits

0xe32f,	// (0x00035b5a) popup_discreet_window_t1

0x7299,	// (0x0002eac4) popup_discreet_window_t2_ParamLimits

0x7299,	// (0x0002eac4) popup_discreet_window_t2

0x0002,

0xfe83,	// (0x000376ae) popup_discreet_window_t_ParamLimits

0xfe83,	// (0x000376ae) popup_discreet_window_t

0x24de,	// (0x00029d09) popup_sk_window_g1

0x24e8,	// (0x00029d13) popup_sk_window_g2

0x0001,

0xfe8a,	// (0x000376b5) popup_sk_window_g

0xbfbc,	// (0x000337e7) popup_sk_window_t1

0xbfca,	// (0x000337f5) popup_sk_window_t1_copy1

0x6e2f,	// (0x0002e65a) cell_ai5_widget_pane_g2_ParamLimits

0x6fca,	// (0x0002e7f5) cell_ai5_widget_pane_t9_ParamLimits

0x6fca,	// (0x0002e7f5) cell_ai5_widget_pane_t9

0xc279,	// (0x00033aa4) main_fep_fshwr2_pane

0xbfd8,	// (0x00033803) aid_fshwr2_btn_pane

0xbfec,	// (0x00033817) aid_fshwr2_syb_pane

0xc000,	// (0x0003382b) aid_fshwr2_txt_pane

0xc010,	// (0x0003383b) fshwr2_func_candi_pane

0xc030,	// (0x0003385b) fshwr2_hwr_syb_pane

0xc052,	// (0x0003387d) fshwr2_icf_pane

0xc279,	// (0x00033aa4) fshwr2_icf_bg_pane

0x25b0,	// (0x00029ddb) fshwr2_icf_pane_t1_ParamLimits

0x25b0,	// (0x00029ddb) fshwr2_icf_pane_t1

0xcaf1,	// (0x0003431c) fshwr2_func_candi_pane_g1

0xe34d,	// (0x00035b78) fshwr2_func_candi_row_pane_ParamLimits

0xe34d,	// (0x00035b78) fshwr2_func_candi_row_pane

0xc082,	// (0x000338ad) cell_fshwr2_syb_pane_ParamLimits

0xc082,	// (0x000338ad) cell_fshwr2_syb_pane

0x6c17,	// (0x0002e442) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6c17,	// (0x0002e442) fshwr2_hwr_syb_pane_g1

0xc279,	// (0x00033aa4) bg_popup_call_pane_cp01

0xc0a8,	// (0x000338d3) fshwr2_func_candi_cell_pane_ParamLimits

0xc0a8,	// (0x000338d3) fshwr2_func_candi_cell_pane

0x1225,	// (0x00028a50) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1225,	// (0x00028a50) fshwr2_func_candi_cell_bg_pane

0xc0f3,	// (0x0003391e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc0f3,	// (0x0003391e) fshwr2_func_candi_cell_pane_g1

0xc12a,	// (0x00033955) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc12a,	// (0x00033955) fshwr2_func_candi_cell_pane_t1

0xc279,	// (0x00033aa4) bg_button_pane_cp08

0xc7e1,	// (0x0003400c) cell_fshwr2_syb_bg_pane

0xc145,	// (0x00033970) cell_fshwr2_syb_bg_pane_g1

0xc158,	// (0x00033983) cell_fshwr2_syb_bg_pane_t1

0xc69f,	// (0x00033eca) main_tmo_pane

0xb057,	// (0x00032882) uni_indicator_pane_g1_ParamLimits

0xb06d,	// (0x00032898) uni_indicator_pane_g2_ParamLimits

0xb083,	// (0x000328ae) uni_indicator_pane_g3_ParamLimits

0x32fd,	// (0x0002ab28) uni_indicator_pane_g4_ParamLimits

0x32fd,	// (0x0002ab28) uni_indicator_pane_g4

0x3311,	// (0x0002ab3c) uni_indicator_pane_g5_ParamLimits

0x3311,	// (0x0002ab3c) uni_indicator_pane_g5

0x3311,	// (0x0002ab3c) uni_indicator_pane_g6_ParamLimits

0x3311,	// (0x0002ab3c) uni_indicator_pane_g6

0xf8e8,	// (0x00037113) uni_indicator_pane_g_ParamLimits

0xd5d0,	// (0x00034dfb) popup_tmo_note_window_ParamLimits

0xd5d0,	// (0x00034dfb) popup_tmo_note_window

0xc69f,	// (0x00033eca) fshwr2_bg_pane

0xc11b,	// (0x00033946) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc11b,	// (0x00033946) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8f,	// (0x000376ba) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8f,	// (0x000376ba) fshwr2_func_candi_cell_pane_g

0x4762,	// (0x0002bf8d) bg_popup_window_pane_cp01

0x2694,	// (0x00029ebf) bg_popup_window_pane_g1_cp01

0x7312,	// (0x0002eb3d) bg_popup_window_pane_cp22_ParamLimits

0x7312,	// (0x0002eb3d) bg_popup_window_pane_cp22

0xe370,	// (0x00035b9b) listscroll_tmo_link_pane_ParamLimits

0xe370,	// (0x00035b9b) listscroll_tmo_link_pane

0x7360,	// (0x0002eb8b) popup_tmo_note_window_g1_ParamLimits

0x7360,	// (0x0002eb8b) popup_tmo_note_window_g1

0xe3b0,	// (0x00035bdb) tmo_note_info_pane_ParamLimits

0xe3b0,	// (0x00035bdb) tmo_note_info_pane

0xe3ca,	// (0x00035bf5) list_tmo_note_info_pane_g1_ParamLimits

0xe3ca,	// (0x00035bf5) list_tmo_note_info_pane_g1

0x739e,	// (0x0002ebc9) list_tmo_note_info_pane_g2_ParamLimits

0x739e,	// (0x0002ebc9) list_tmo_note_info_pane_g2

0x0001,

0xfe94,	// (0x000376bf) list_tmo_note_info_pane_g_ParamLimits

0xfe94,	// (0x000376bf) list_tmo_note_info_pane_g

0x73ba,	// (0x0002ebe5) list_tmo_note_info_text_pane_ParamLimits

0x73ba,	// (0x0002ebe5) list_tmo_note_info_text_pane

0x743b,	// (0x0002ec66) list_tmo_link_pane

0x7448,	// (0x0002ec73) scroll_pane_cp20

0x7455,	// (0x0002ec80) list_single_tmo_link_pane_ParamLimits

0x7455,	// (0x0002ec80) list_single_tmo_link_pane

0x7465,	// (0x0002ec90) list_single_tmo_link_pane_t1

0x7473,	// (0x0002ec9e) list_tmo_note_info_text_pane_t1_ParamLimits

0x7473,	// (0x0002ec9e) list_tmo_note_info_text_pane_t1

0x972b,	// (0x00030f56) aid_size_touch_scroll_bar_cp01_ParamLimits

0x972b,	// (0x00030f56) aid_size_touch_scroll_bar_cp01

0x899d,	// (0x000301c8) aid_size_touch_slider_marker

0x8ffa,	// (0x00030825) popup_settings_window_ParamLimits

0x8ffa,	// (0x00030825) popup_settings_window

0xea49,	// (0x00036274) popup_candi_list_indi_window

0x07bb,	// (0x00027fe6) aid_touch_navi_pane_ParamLimits

0x1cce,	// (0x000294f9) rs_clock_indi_pane

0x1cd7,	// (0x00029502) sctrl_sk_bottom_pane_ParamLimits

0x1ce8,	// (0x00029513) sctrl_sk_top_pane_ParamLimits

0xbc11,	// (0x0003343c) popup_fep_tooltip_window

0x6da5,	// (0x0002e5d0) aid_size_cell_widget_grid_ParamLimits

0x6e1a,	// (0x0002e645) cell_ai5_widget_pane_g1_ParamLimits

0x6e1a,	// (0x0002e645) cell_ai5_widget_pane_g1

0x6e7d,	// (0x0002e6a8) cell_ai5_widget_pane_g6_ParamLimits

0x6e89,	// (0x0002e6b4) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe08,	// (0x00037633) cell_ai5_widget_pane_g_ParamLimits

0xfe08,	// (0x00037633) cell_ai5_widget_pane_g

0x6ff9,	// (0x0002e824) cell_ai5_widget_pane_t10_ParamLimits

0x6ff9,	// (0x0002e824) cell_ai5_widget_pane_t10

0x703c,	// (0x0002e867) grid_ai5_widget_pane_ParamLimits

0x70d4,	// (0x0002e8ff) cell_contacts_ai5_widget_pane_ParamLimits

0x70d4,	// (0x0002e8ff) cell_contacts_ai5_widget_pane

0x72ae,	// (0x0002ead9) popup_discreet_window_t3_ParamLimits

0x72ae,	// (0x0002ead9) popup_discreet_window_t3

0xc06e,	// (0x00033899) popup_fshwr2_char_preview_window_ParamLimits

0xc06e,	// (0x00033899) popup_fshwr2_char_preview_window

0xe3e1,	// (0x00035c0c) tmo_note_info_pane_t1

0xe3f6,	// (0x00035c21) tmo_note_info_pane_t2

0xe40d,	// (0x00035c38) tmo_note_info_pane_t3

0x7417,	// (0x0002ec42) tmo_note_info_pane_t4

0x7429,	// (0x0002ec54) tmo_note_info_pane_t5

0x0004,

0xfe99,	// (0x000376c4) tmo_note_info_pane_t

0x743b,	// (0x0002ec66) list_tmo_link_pane_ParamLimits

0x7448,	// (0x0002ec73) scroll_pane_cp20_ParamLimits

0xc279,	// (0x00033aa4) bg_popup_fep_char_preview_window_cp01

0xe422,	// (0x00035c4d) popup_fshwr2_char_preview_window_t1

0x749a,	// (0x0002ecc5) popup_candi_list_indi_window_g1

0x74a3,	// (0x0002ecce) bg_cell_contacts_ai5_widget_pane

0x74af,	// (0x0002ecda) cell_contacts_ai5_widget_pane_g1

0x4e49,	// (0x0002c674) cell_contacts_ai5_widget_pane_g2

0x74c4,	// (0x0002ecef) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea4,	// (0x000376cf) cell_contacts_ai5_widget_pane_g

0x74d0,	// (0x0002ecfb) cell_contacts_ai5_widget_pane_t1

0xc69f,	// (0x00033eca) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7547,	// (0x0002ed72) settings_container_pane

0xcf5b,	// (0x00034786) listscroll_set_pane_copy1

0x3e3e,	// (0x0002b669) scroll_pane_cp121_copy1

0x11e1,	// (0x00028a0c) set_content_pane_copy1

0xe430,	// (0x00035c5b) aid_height_set_list_copy1_ParamLimits

0xe430,	// (0x00035c5b) aid_height_set_list_copy1

0x3509,	// (0x0002ad34) aid_size_parent_copy1_ParamLimits

0x3509,	// (0x0002ad34) aid_size_parent_copy1

0xe43c,	// (0x00035c67) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe43c,	// (0x00035c67) button_value_adjust_pane_cp6_copy1

0xc7e1,	// (0x0003400c) list_highlight_pane_cp2_copy1_ParamLimits

0xc7e1,	// (0x0003400c) list_highlight_pane_cp2_copy1

0xe450,	// (0x00035c7b) list_set_pane_copy1_ParamLimits

0xe450,	// (0x00035c7b) list_set_pane_copy1

0x74e2,	// (0x0002ed0d) main_pane_set_t1_copy1_ParamLimits

0x74e2,	// (0x0002ed0d) main_pane_set_t1_copy1

0x751c,	// (0x0002ed47) main_pane_set_t2_copy1_ParamLimits

0x751c,	// (0x0002ed47) main_pane_set_t2_copy1

0xe4fd,	// (0x00035d28) main_pane_set_t3_copy1

0xe50b,	// (0x00035d36) main_pane_set_t4_copy1

0x753b,	// (0x0002ed66) set_content_pane_g1_copy1_ParamLimits

0x753b,	// (0x0002ed66) set_content_pane_g1_copy1

0xe519,	// (0x00035d44) setting_code_pane_copy1

0x7644,	// (0x0002ee6f) setting_slider_graphic_pane_copy1

0x7644,	// (0x0002ee6f) setting_slider_pane_copy1

0x764c,	// (0x0002ee77) setting_text_pane_copy1

0x764c,	// (0x0002ee77) setting_volume_pane_copy1

0xe519,	// (0x00035d44) settings_code_pane_cp2_copy1

0xe521,	// (0x00035d4c) settings_code_pane_cp_copy1_ParamLimits

0xe521,	// (0x00035d4c) settings_code_pane_cp_copy1

0xc16e,	// (0x00033999) volume_set_pane_copy1

0xe535,	// (0x00035d60) volume_set_pane_g10_copy1

0xe53d,	// (0x00035d68) volume_set_pane_g1_copy1

0xe545,	// (0x00035d70) volume_set_pane_g2_copy1

0xe54d,	// (0x00035d78) volume_set_pane_g3_copy1

0xe555,	// (0x00035d80) volume_set_pane_g4_copy1

0xe55d,	// (0x00035d88) volume_set_pane_g5_copy1

0xe565,	// (0x00035d90) volume_set_pane_g6_copy1

0xe56d,	// (0x00035d98) volume_set_pane_g7_copy1

0xe575,	// (0x00035da0) volume_set_pane_g8_copy1

0xe57d,	// (0x00035da8) volume_set_pane_g9_copy1

0xc2e9,	// (0x00033b14) bg_set_opt_pane_cp_copy1_ParamLimits

0xc2e9,	// (0x00033b14) bg_set_opt_pane_cp_copy1

0xc176,	// (0x000339a1) setting_slider_pane_t1_copy1_ParamLimits

0xc176,	// (0x000339a1) setting_slider_pane_t1_copy1

0xc195,	// (0x000339c0) setting_slider_pane_t2_copy1_ParamLimits

0xc195,	// (0x000339c0) setting_slider_pane_t2_copy1

0xc1af,	// (0x000339da) setting_slider_pane_t3_copy1_ParamLimits

0xc1af,	// (0x000339da) setting_slider_pane_t3_copy1

0xc1c7,	// (0x000339f2) slider_set_pane_copy1_ParamLimits

0xc1c7,	// (0x000339f2) slider_set_pane_copy1

0xc6f7,	// (0x00033f22) set_opt_bg_pane_g1_copy2

0xc6ff,	// (0x00033f2a) set_opt_bg_pane_g2_copy2

0x76b8,	// (0x0002eee3) set_opt_bg_pane_g3_copy2

0xc70f,	// (0x00033f3a) set_opt_bg_pane_g4_copy2

0xc717,	// (0x00033f42) set_opt_bg_pane_g5_copy2

0xc71f,	// (0x00033f4a) set_opt_bg_pane_g6_copy2

0xe585,	// (0x00035db0) set_opt_bg_pane_g7_copy2

0x76ca,	// (0x0002eef5) set_opt_bg_pane_g8_copy2

0x76d4,	// (0x0002eeff) set_opt_bg_pane_g9_copy2

0xc1dd,	// (0x00033a08) aid_size_touch_slider_mark_copy1_ParamLimits

0xc1dd,	// (0x00033a08) aid_size_touch_slider_mark_copy1

0xe58d,	// (0x00035db8) slider_set_pane_g1_copy1

0x2720,	// (0x00029f4b) slider_set_pane_g2_copy1

0xb1aa,	// (0x000329d5) slider_set_pane_g3_copy1_ParamLimits

0xb1aa,	// (0x000329d5) slider_set_pane_g3_copy1

0xb1be,	// (0x000329e9) slider_set_pane_g4_copy1_ParamLimits

0xb1be,	// (0x000329e9) slider_set_pane_g4_copy1

0xb1d6,	// (0x00032a01) slider_set_pane_g5_copy1_ParamLimits

0xb1d6,	// (0x00032a01) slider_set_pane_g5_copy1

0xb1aa,	// (0x000329d5) slider_set_pane_g6_copy1_ParamLimits

0xb1aa,	// (0x000329d5) slider_set_pane_g6_copy1

0xc1f1,	// (0x00033a1c) slider_set_pane_g7_copy1_ParamLimits

0xc1f1,	// (0x00033a1c) slider_set_pane_g7_copy1

0xc28d,	// (0x00033ab8) bg_set_opt_pane_cp2_copy1

0xe596,	// (0x00035dc1) setting_slider_graphic_pane_g1_copy1

0xe59f,	// (0x00035dca) setting_slider_graphic_pane_t1_copy1

0xe5af,	// (0x00035dda) setting_slider_graphic_pane_t2_copy1

0xe5bf,	// (0x00035dea) slider_set_pane_cp_copy1

0x7720,	// (0x0002ef4b) input_focus_pane_cp1_copy1

0x7729,	// (0x0002ef54) list_set_text_pane_copy1

0x7731,	// (0x0002ef5c) setting_text_pane_g1_copy1

0xf0e6,	// (0x00036911) set_text_pane_t1_copy1

0x7720,	// (0x0002ef4b) input_focus_pane_cp2_copy1

0x7731,	// (0x0002ef5c) setting_code_pane_g1_copy1

0x773a,	// (0x0002ef65) setting_code_pane_t1_copy1

0x7748,	// (0x0002ef73) list_set_graphic_pane_copy1

0xc28d,	// (0x00033ab8) bg_set_opt_pane_cp4_copy1

0xcccc,	// (0x000344f7) list_set_graphic_pane_g1_copy1_ParamLimits

0xcccc,	// (0x000344f7) list_set_graphic_pane_g1_copy1

0x775c,	// (0x0002ef87) list_set_graphic_pane_g2_copy1

0xcce4,	// (0x0003450f) list_set_graphic_pane_t1_copy1_ParamLimits

0xcce4,	// (0x0003450f) list_set_graphic_pane_t1_copy1

0x4762,	// (0x0002bf8d) rs_clock_indi_pane_g1

0x7764,	// (0x0002ef8f) rs_clock_indi_pane_t1

0x7772,	// (0x0002ef9d) rs_indi_pane

0x777a,	// (0x0002efa5) rs_indi_pane_g1

0x7783,	// (0x0002efae) rs_indi_pane_g2

0x749a,	// (0x0002ecc5) rs_indi_pane_g3

0x0002,

0xfeab,	// (0x000376d6) rs_indi_pane_g

0xcf5b,	// (0x00034786) bg_popup_preview_window_pane_cp03

0x778c,	// (0x0002efb7) popup_fep_tooltip_window_t1

0xd276,	// (0x00034aa1) popup_note2_window_g2_ParamLimits

0xd276,	// (0x00034aa1) popup_note2_window_g2

0x0001,

0xfc3f,	// (0x0003746a) popup_note2_window_g_ParamLimits

0xfc3f,	// (0x0003746a) popup_note2_window_g

0x58e8,	// (0x0002d113) bg_popup_sub_pane_cp11_ParamLimits

0x58f5,	// (0x0002d120) cell_ai3_links_pane_g1_ParamLimits

0x590c,	// (0x0002d137) cell_ai3_links_pane_t1

0xf0e6,	// (0x00036911) set_text_pane_t1_copy1_ParamLimits

0xce91,	// (0x000346bc) cell_graphic_popup_pane_cp2_ParamLimits

0xce91,	// (0x000346bc) cell_graphic_popup_pane_cp2

0xe5cf,	// (0x00035dfa) cell_graphic_popup_pane_g1_cp2

0xc56d,	// (0x00033d98) cell_graphic_popup_pane_g2_cp2

0x77a2,	// (0x0002efcd) cell_graphic_popup_pane_g3_cp2

0xe5d7,	// (0x00035e02) cell_graphic_popup_pane_t2_cp2

0xc57e,	// (0x00033da9) grid_highlight_pane_cp3_cp2

0xc96e,	// (0x00034199) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc69f,	// (0x00033eca) main_tmo_pane_ParamLimits

0xd5c4,	// (0x00034def) popup_tmo_big_image_note_window

0x6e09,	// (0x0002e634) cell_ai5_widget_list_pane

0x6e11,	// (0x0002e63c) cell_ai5_widget_lrg_icon_pane

0xe3e1,	// (0x00035c0c) tmo_note_info_pane_t1_ParamLimits

0xe3f6,	// (0x00035c21) tmo_note_info_pane_t2_ParamLimits

0xe40d,	// (0x00035c38) tmo_note_info_pane_t3_ParamLimits

0x7417,	// (0x0002ec42) tmo_note_info_pane_t4_ParamLimits

0x7429,	// (0x0002ec54) tmo_note_info_pane_t5_ParamLimits

0xfe99,	// (0x000376c4) tmo_note_info_pane_t_ParamLimits

0x7547,	// (0x0002ed72) settings_container_pane_ParamLimits

0xe5c7,	// (0x00035df2) indicator_popup_pane_cp5

0xe5c7,	// (0x00035df2) indicator_popup_pane_cp6

0x7748,	// (0x0002ef73) list_set_graphic_pane_copy1_ParamLimits

0xc279,	// (0x00033aa4) bg_popup_window_pane_cp23

0x77b8,	// (0x0002efe3) popup_tmo_big_image_note_window_g1

0x77c1,	// (0x0002efec) popup_tmo_big_image_note_window_t1

0x77d1,	// (0x0002effc) popup_tmo_big_image_note_window_t2

0x77e1,	// (0x0002f00c) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb2,	// (0x000376dd) popup_tmo_big_image_note_window_t

0x4762,	// (0x0002bf8d) cell_ai5_widget_lrg_icon_pane_g1

0x77f1,	// (0x0002f01c) cell_ai5_widget_lrg_icon_pane_t1

0x77ff,	// (0x0002f02a) cell_ai5_widget_list_row_pane_ParamLimits

0x77ff,	// (0x0002f02a) cell_ai5_widget_list_row_pane

0x7816,	// (0x0002f041) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7816,	// (0x0002f041) cell_ai5_widget_list_row_pane_g1

0xe5e5,	// (0x00035e10) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe5e5,	// (0x00035e10) cell_ai5_widget_list_row_pane_t1

0x784e,	// (0x0002f079) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x784e,	// (0x0002f079) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb9,	// (0x000376e4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb9,	// (0x000376e4) cell_ai5_widget_list_row_pane_t

0xc279,	// (0x00033aa4) main_fep_vtchi_ss_pane

0x789e,	// (0x0002f0c9) popup_fep_char_pre_window

0x78a6,	// (0x0002f0d1) popup_fep_ituss_window

0xe640,	// (0x00035e6b) popup_fep_vkbss_window

0xc7e1,	// (0x0003400c) grid_vkbss_keypad_pane_ParamLimits

0xc7e1,	// (0x0003400c) grid_vkbss_keypad_pane

0x7912,	// (0x0002f13d) ituss_keypad_pane

0x2748,	// (0x00029f73) aid_vkbss_key_offset_ParamLimits

0x2748,	// (0x00029f73) aid_vkbss_key_offset

0xc207,	// (0x00033a32) cell_vkbss_key_pane_ParamLimits

0xc207,	// (0x00033a32) cell_vkbss_key_pane

0x7922,	// (0x0002f14d) bg_cell_vkbss_key_g1_ParamLimits

0x7922,	// (0x0002f14d) bg_cell_vkbss_key_g1

0xe64d,	// (0x00035e78) cell_vkbss_key_3p_pane_ParamLimits

0xe64d,	// (0x00035e78) cell_vkbss_key_3p_pane

0xe683,	// (0x00035eae) cell_vkbss_key_g1_ParamLimits

0xe683,	// (0x00035eae) cell_vkbss_key_g1

0xe6b9,	// (0x00035ee4) cell_vkbss_key_t1_ParamLimits

0xe6b9,	// (0x00035ee4) cell_vkbss_key_t1

0x279f,	// (0x00029fca) cell_ituss_key_pane_ParamLimits

0x279f,	// (0x00029fca) cell_ituss_key_pane

0x79f6,	// (0x0002f221) bg_cell_ituss_key_g1_ParamLimits

0x79f6,	// (0x0002f221) bg_cell_ituss_key_g1

0x7a02,	// (0x0002f22d) cell_ituss_key_pane_g1_ParamLimits

0x7a02,	// (0x0002f22d) cell_ituss_key_pane_g1

0x27b0,	// (0x00029fdb) cell_ituss_key_pane_g2_ParamLimits

0x27b0,	// (0x00029fdb) cell_ituss_key_pane_g2

0x0005,

0xfec0,	// (0x000376eb) cell_ituss_key_pane_g_ParamLimits

0xfec0,	// (0x000376eb) cell_ituss_key_pane_g

0x2834,	// (0x0002a05f) cell_ituss_key_t1_ParamLimits

0x2834,	// (0x0002a05f) cell_ituss_key_t1

0x286e,	// (0x0002a099) cell_ituss_key_t2_ParamLimits

0x286e,	// (0x0002a099) cell_ituss_key_t2

0x28a0,	// (0x0002a0cb) cell_ituss_key_t3_ParamLimits

0x28a0,	// (0x0002a0cb) cell_ituss_key_t3

0x28d1,	// (0x0002a0fc) cell_ituss_key_t4_ParamLimits

0x28d1,	// (0x0002a0fc) cell_ituss_key_t4

0x0004,

0xfecd,	// (0x000376f8) cell_ituss_key_t_ParamLimits

0xfecd,	// (0x000376f8) cell_ituss_key_t

0xe715,	// (0x00035f40) cell_vkbss_key_3p_pane_g1

0xe71d,	// (0x00035f48) cell_vkbss_key_3p_pane_g2

0xe725,	// (0x00035f50) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed8,	// (0x00037703) cell_vkbss_key_3p_pane_g

0xcf5b,	// (0x00034786) bg_popup_fep_char_preview_window_cp02

0x7a40,	// (0x0002f26b) popup_fep_char_pre_window_t1

0xe269,	// (0x00035a94) main_ai5_sk_pane

0x74a3,	// (0x0002ecce) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x74af,	// (0x0002ecda) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4e49,	// (0x0002c674) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x74c4,	// (0x0002ecef) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea4,	// (0x000376cf) cell_contacts_ai5_widget_pane_g_ParamLimits

0x74d0,	// (0x0002ecfb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc69f,	// (0x00033eca) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe72d,	// (0x00035f58) main_ai5_sk_pane_g1

0xaca8,	// (0x000324d3) popup_query_code_window_g1

0xe631,	// (0x00035e5c) popup_fep_vkb_icf_pane

0x78e9,	// (0x0002f114) popup_fep_vtchi_icf_pane

0x7a57,	// (0x0002f282) bg_icf_pane

0x7a57,	// (0x0002f282) list_vkb_icf_pane

0x7a63,	// (0x0002f28e) bg_icf_pane_cp01

0x7a76,	// (0x0002f2a1) vtchi_icf_list_pane

0xe782,	// (0x00035fad) list_vkb_icf_pane_t1_ParamLimits

0xe782,	// (0x00035fad) list_vkb_icf_pane_t1

0x7afb,	// (0x0002f326) vtchi_icf_list_pane_t1_ParamLimits

0x7afb,	// (0x0002f326) vtchi_icf_list_pane_t1

0x78a6,	// (0x0002f0d1) popup_fep_ituss_window_ParamLimits

0x78e9,	// (0x0002f114) popup_fep_vtchi_icf_pane_ParamLimits

0x7912,	// (0x0002f13d) ituss_keypad_pane_ParamLimits

0x273e,	// (0x00029f69) ituss_sks_pane

0x7a57,	// (0x0002f282) bg_icf_pane_ParamLimits

0xe616,	// (0x00035e41) icf_edit_indi_pane_ParamLimits

0xe616,	// (0x00035e41) icf_edit_indi_pane

0x7a57,	// (0x0002f282) list_vkb_icf_pane_ParamLimits

0x7a63,	// (0x0002f28e) bg_icf_pane_cp01_ParamLimits

0x7891,	// (0x0002f0bc) icf_edit_indi_pane_cp01_ParamLimits

0x7891,	// (0x0002f0bc) icf_edit_indi_pane_cp01

0x7a76,	// (0x0002f2a1) vtchi_query_pane

0x6c17,	// (0x0002e442) icf_edit_indi_pane_g1_ParamLimits

0x6c17,	// (0x0002e442) icf_edit_indi_pane_g1

0xe79a,	// (0x00035fc5) icf_edit_indi_pane_g2_ParamLimits

0xe79a,	// (0x00035fc5) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x0003772e) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x0003772e) icf_edit_indi_pane_g

0xe7ae,	// (0x00035fd9) icf_edit_indi_pane_t1

0x7b1f,	// (0x0002f34a) bg_input_focus_pane_cp042

0xc5e1,	// (0x00033e0c) vtchi_button_pane

0x7b28,	// (0x0002f353) vtchi_query_pane_t1

0x7b36,	// (0x0002f361) vtchi_query_pane_t2

0x7b44,	// (0x0002f36f) vtchi_query_pane_t3

0x0002,

0xfef2,	// (0x0003771d) vtchi_query_pane_t

0xc279,	// (0x00033aa4) bg_button_pane_cp13

0x7b52,	// (0x0002f37d) vtchi_button_pane_g1

0x2914,	// (0x0002a13f) ituss_sks_pane_g1

0x291f,	// (0x0002a14a) ituss_sks_pane_g2

0x0001,

0xfef9,	// (0x00037724) ituss_sks_pane_g

0x7b5a,	// (0x0002f385) ituss_sks_pane_t1

0x7b68,	// (0x0002f393) ituss_sks_pane_t2

0x0001,

0xfefe,	// (0x00037729) ituss_sks_pane_t

0x41d6,	// (0x0002ba01) indicator_nsta_pane_cp_g1

0x41df,	// (0x0002ba0a) indicator_nsta_pane_cp_g2

0x41e7,	// (0x0002ba12) indicator_nsta_pane_cp_g3

0x41ef,	// (0x0002ba1a) indicator_nsta_pane_cp_g4

0x41df,	// (0x0002ba0a) indicator_nsta_pane_cp_g5

0x41e7,	// (0x0002ba12) indicator_nsta_pane_cp_g6

0x0005,

0xfa89,	// (0x000372b4) indicator_nsta_pane_cp_g

0xe048,	// (0x00035873) cell_graphic2_pane_t2_ParamLimits

0xe048,	// (0x00035873) cell_graphic2_pane_t2

0x0001,

0xfd8f,	// (0x000375ba) cell_graphic2_pane_t_ParamLimits

0xfd8f,	// (0x000375ba) cell_graphic2_pane_t

0xe07f,	// (0x000358aa) cell_graphic2_control_pane_t1

0x9a03,	// (0x0003122e) signal_pane_g3_ParamLimits

0x9a03,	// (0x0003122e) signal_pane_g3

0x9a17,	// (0x00031242) signal_pane_g4_ParamLimits

0x9a17,	// (0x00031242) signal_pane_g4

0x7860,	// (0x0002f08b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7860,	// (0x0002f08b) cell_ai5_widget_list_row_pane_t3

0x7a16,	// (0x0002f241) cell_ituss_key_pane_t1_ParamLimits

0x7a16,	// (0x0002f241) cell_ituss_key_pane_t1

0x0eb0,	// (0x000286db) form_field_data_wide_pane_vc_t2_ParamLimits

0x0eb0,	// (0x000286db) form_field_data_wide_pane_vc_t2

0x0ec4,	// (0x000286ef) form_field_data_wide_pane_vc_t3_ParamLimits

0x0ec4,	// (0x000286ef) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d0,	// (0x00036ffb) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d0,	// (0x00036ffb) form_field_data_wide_pane_vc_t

0x3e80,	// (0x0002b6ab) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3e80,	// (0x0002b6ab) form_field_slider_wide_pane_vc_t3

0x3f5e,	// (0x0002b789) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3f5e,	// (0x0002b789) form_field_popup_wide_pane_vc_t2

0x3f75,	// (0x0002b7a0) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3f75,	// (0x0002b7a0) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa78,	// (0x000372a3) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa78,	// (0x000372a3) form_field_popup_wide_pane_vc_t

0xbfd8,	// (0x00033803) aid_fshwr2_btn_pane_ParamLimits

0xbfec,	// (0x00033817) aid_fshwr2_syb_pane_ParamLimits

0xc000,	// (0x0003382b) aid_fshwr2_txt_pane_ParamLimits

0xc69f,	// (0x00033eca) fshwr2_bg_pane_ParamLimits

0xc010,	// (0x0003383b) fshwr2_func_candi_pane_ParamLimits

0xc030,	// (0x0003385b) fshwr2_hwr_syb_pane_ParamLimits

0xc052,	// (0x0003387d) fshwr2_icf_pane_ParamLimits

0xee1b,	// (0x00036646) list_double_graphic_pane_vc_g4_ParamLimits

0xee1b,	// (0x00036646) list_double_graphic_pane_vc_g4

0x27d0,	// (0x00029ffb) cell_ituss_key_pane_g3_ParamLimits

0x27d0,	// (0x00029ffb) cell_ituss_key_pane_g3

0x2902,	// (0x0002a12d) cell_ituss_key_t5_ParamLimits

0x2902,	// (0x0002a12d) cell_ituss_key_t5

0xe640,	// (0x00035e6b) popup_fep_vkbss_window_ParamLimits

0x5de6,	// (0x0002d611) aid_cell_ai5_quarter

0xe7ae,	// (0x00035fd9) icf_edit_indi_pane_t1_ParamLimits

0x9423,	// (0x00030c4e) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9423,	// (0x00030c4e) aid_tch_indicator_popup_pane_cp2

0x9436,	// (0x00030c61) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9436,	// (0x00030c61) aid_tch_query_popup_data_pane_cp2

0x1225,	// (0x00028a50) aid_tch_query_popup_pane_ParamLimits

0x1225,	// (0x00028a50) aid_tch_query_popup_pane

0x1225,	// (0x00028a50) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1225,	// (0x00028a50) aid_tch_query_popup_data_pane_cp1

0xc7e1,	// (0x0003400c) cell_fshwr2_syb_bg_pane_ParamLimits

0xc145,	// (0x00033970) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc158,	// (0x00033983) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe631,	// (0x00035e5c) popup_fep_vkb_icf_pane_ParamLimits

0xbf3e,	// (0x00033769) bg_popup_fep_char_preview_window_g10

0x6ed1,	// (0x0002e6fc) cell_ai5_widget_pane_g11_ParamLimits

0x6ed1,	// (0x0002e6fc) cell_ai5_widget_pane_g11

0x6edd,	// (0x0002e708) cell_ai5_widget_pane_g12_ParamLimits

0x6edd,	// (0x0002e708) cell_ai5_widget_pane_g12

0x6ee9,	// (0x0002e714) cell_ai5_widget_pane_g13_ParamLimits

0x6ee9,	// (0x0002e714) cell_ai5_widget_pane_g13

0x7018,	// (0x0002e843) cell_ai5_widget_pane_t11_ParamLimits

0x7018,	// (0x0002e843) cell_ai5_widget_pane_t11

0x702a,	// (0x0002e855) cell_ai5_widget_pane_t12_ParamLimits

0x702a,	// (0x0002e855) cell_ai5_widget_pane_t12

0x27dc,	// (0x0002a007) cell_ituss_key_pane_g4_ParamLimits

0x27dc,	// (0x0002a007) cell_ituss_key_pane_g4

0x27f8,	// (0x0002a023) cell_ituss_key_pane_g5_ParamLimits

0x27f8,	// (0x0002a023) cell_ituss_key_pane_g5

0x2814,	// (0x0002a03f) cell_ituss_key_pane_g6_ParamLimits

0x2814,	// (0x0002a03f) cell_ituss_key_pane_g6

0x0c96,	// (0x000284c1) bg_icf_pane_g1

0xe736,	// (0x00035f61) bg_icf_pane_g2

0xe740,	// (0x00035f6b) bg_icf_pane_g3

0xe748,	// (0x00035f73) bg_icf_pane_g4

0xe752,	// (0x00035f7d) bg_icf_pane_g5

0xe75c,	// (0x00035f87) bg_icf_pane_g6

0xe766,	// (0x00035f91) bg_icf_pane_g7

0xe76e,	// (0x00035f99) bg_icf_pane_g8

0xe778,	// (0x00035fa3) bg_icf_pane_g9

0x0008,

0xfedf,	// (0x0003770a) bg_icf_pane_g

0x78ff,	// (0x0002f12a) popup_hyb_candi_window_ParamLimits

0x78ff,	// (0x0002f12a) popup_hyb_candi_window

0x0d9a,	// (0x000285c5) bg_popup_sub_pane_cp01_ParamLimits

0x0d9a,	// (0x000285c5) bg_popup_sub_pane_cp01

0x7ba3,	// (0x0002f3ce) entry_hyb_candi_pane_ParamLimits

0x7ba3,	// (0x0002f3ce) entry_hyb_candi_pane

0x7bb2,	// (0x0002f3dd) grid_hyb_candi_pane_ParamLimits

0x7bb2,	// (0x0002f3dd) grid_hyb_candi_pane

0x7bc7,	// (0x0002f3f2) grid_hyb_phrase_pane_ParamLimits

0x7bc7,	// (0x0002f3f2) grid_hyb_phrase_pane

0x7bd6,	// (0x0002f401) cell_hyb_candi_pane_ParamLimits

0x7bd6,	// (0x0002f401) cell_hyb_candi_pane

0x7bf9,	// (0x0002f424) cell_hyb_candi_scroll_pane

0xcaf1,	// (0x0003431c) cell_hyb_candi_pane_g1

0x7c02,	// (0x0002f42d) cell_hyb_candi_pane_t1

0x7c10,	// (0x0002f43b) cell_hyb_phrase_pane

0xcaf1,	// (0x0003431c) cell_hyb_phrase_pane_g1

0x7c19,	// (0x0002f444) cell_hyb_phrase_pane_t1

0x7c27,	// (0x0002f452) entry_hyb_candi_pane_t1

0xcf5b,	// (0x00034786) input_focus_pane_cp06

0x7c35,	// (0x0002f460) cell_hyb_candi_scroll_pane_g1

0x7c3d,	// (0x0002f468) cell_hyb_candi_scroll_pane_g1_aid

0x7c45,	// (0x0002f470) cell_hyb_candi_scroll_pane_g2

0x7c4d,	// (0x0002f478) cell_hyb_candi_scroll_pane_g2_aid

0x7c55,	// (0x0002f480) cell_hyb_candi_scroll_pane_g3

0x7c5d,	// (0x0002f488) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small

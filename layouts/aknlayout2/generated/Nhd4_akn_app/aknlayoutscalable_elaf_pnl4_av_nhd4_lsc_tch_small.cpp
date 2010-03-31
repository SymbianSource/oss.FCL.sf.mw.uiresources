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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x000191de };

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
0x2241,	// (0x0001b41f) Screen

0x224d,	// (0x0001b42b) application_window_ParamLimits

0x224d,	// (0x0001b42b) application_window

0x83c8,	// (0x000215a6) screen_g1

0x83fa,	// (0x000215d8) area_bottom_pane_ParamLimits

0x83fa,	// (0x000215d8) area_bottom_pane

0x4e76,	// (0x0001e054) area_top_pane_ParamLimits

0x4e76,	// (0x0001e054) area_top_pane

0x4f0a,	// (0x0001e0e8) main_pane_ParamLimits

0x4f0a,	// (0x0001e0e8) main_pane

0x84b8,	// (0x00021696) misc_graphics

0x2e22,	// (0x0001c000) battery_pane_ParamLimits

0x2e22,	// (0x0001c000) battery_pane

0xc8b4,	// (0x00025a92) bg_status_flat_pane_g8

0xc8bc,	// (0x00025a9a) bg_status_flat_pane_g9

0xc03c,	// (0x0002521a) context_pane_ParamLimits

0xc03c,	// (0x0002521a) context_pane

0x2f8d,	// (0x0001c16b) navi_pane_ParamLimits

0x2f8d,	// (0x0001c16b) navi_pane

0x300b,	// (0x0001c1e9) signal_pane_ParamLimits

0x300b,	// (0x0001c1e9) signal_pane

0x0008,

0xf873,	// (0x00028a51) bg_status_flat_pane_g

0x309b,	// (0x0001c279) status_pane_g1_ParamLimits

0x309b,	// (0x0001c279) status_pane_g1

0x30b1,	// (0x0001c28f) status_pane_g2_ParamLimits

0x30b1,	// (0x0001c28f) status_pane_g2

0xc0a1,	// (0x0002527f) status_pane_g3_ParamLimits

0xc0a1,	// (0x0002527f) status_pane_g3

0x0004,

0xf7a6,	// (0x00028984) status_pane_g_ParamLimits

0xf7a6,	// (0x00028984) status_pane_g

0x30bd,	// (0x0001c29b) title_pane_ParamLimits

0x30bd,	// (0x0001c29b) title_pane

0x3120,	// (0x0001c2fe) uni_indicator_pane_ParamLimits

0x3120,	// (0x0001c2fe) uni_indicator_pane

0xbf65,	// (0x00025143) bg_list_pane_ParamLimits

0xbf65,	// (0x00025143) bg_list_pane

0xbf85,	// (0x00025163) find_pane

0x8dbb,	// (0x00021f99) listscroll_app_pane_ParamLimits

0x8dbb,	// (0x00021f99) listscroll_app_pane

0xbf8d,	// (0x0002516b) listscroll_form_pane

0x8dcb,	// (0x00021fa9) listscroll_gen_pane_ParamLimits

0x8dcb,	// (0x00021fa9) listscroll_gen_pane

0x57be,	// (0x0001e99c) listscroll_set_pane

0xbfa7,	// (0x00025185) main_idle_act_pane

0xbd49,	// (0x00024f27) main_idle_trad_pane

0xbd49,	// (0x00024f27) main_list_empty_pane

0xb46d,	// (0x0002464b) main_midp_pane

0xbfb9,	// (0x00025197) main_pane_g1_ParamLimits

0xbfb9,	// (0x00025197) main_pane_g1

0x8ddf,	// (0x00021fbd) popup_ai_message_window_ParamLimits

0x8ddf,	// (0x00021fbd) popup_ai_message_window

0x8e70,	// (0x0002204e) popup_fep_china_uni_window_ParamLimits

0x8e70,	// (0x0002204e) popup_fep_china_uni_window

0x58c4,	// (0x0001eaa2) popup_fep_japan_candidate_window_ParamLimits

0x58c4,	// (0x0001eaa2) popup_fep_japan_candidate_window

0x58e2,	// (0x0001eac0) popup_fep_japan_predictive_window_ParamLimits

0x58e2,	// (0x0001eac0) popup_fep_japan_predictive_window

0x8eca,	// (0x000220a8) popup_find_window

0x8ee7,	// (0x000220c5) popup_grid_graphic_window_ParamLimits

0x8ee7,	// (0x000220c5) popup_grid_graphic_window

0x5947,	// (0x0001eb25) popup_large_graphic_colour_window

0x8f7f,	// (0x0002215d) popup_menu_window_ParamLimits

0x8f7f,	// (0x0002215d) popup_menu_window

0x914b,	// (0x00022329) popup_note_image_window

0x9111,	// (0x000222ef) popup_note_wait_window_ParamLimits

0x9111,	// (0x000222ef) popup_note_wait_window

0x9163,	// (0x00022341) popup_note_window_ParamLimits

0x9163,	// (0x00022341) popup_note_window

0x9209,	// (0x000223e7) popup_query_code_window_ParamLimits

0x9209,	// (0x000223e7) popup_query_code_window

0x5b91,	// (0x0001ed6f) popup_query_data_code_window_ParamLimits

0x5b91,	// (0x0001ed6f) popup_query_data_code_window

0x9243,	// (0x00022421) popup_query_data_window_ParamLimits

0x9243,	// (0x00022421) popup_query_data_window

0x92bf,	// (0x0002249d) popup_query_sat_info_window_ParamLimits

0x92bf,	// (0x0002249d) popup_query_sat_info_window

0x9356,	// (0x00022534) popup_snote_single_graphic_window_ParamLimits

0x9356,	// (0x00022534) popup_snote_single_graphic_window

0x9356,	// (0x00022534) popup_snote_single_text_window_ParamLimits

0x9356,	// (0x00022534) popup_snote_single_text_window

0x5c14,	// (0x0001edf2) popup_sub_window_general

0x5d42,	// (0x0001ef20) popup_window_general_ParamLimits

0x5d42,	// (0x0001ef20) popup_window_general

0xbfc7,	// (0x000251a5) power_save_pane

0x8c4a,	// (0x00021e28) control_pane_g1_ParamLimits

0x8c4a,	// (0x00021e28) control_pane_g1

0x8c73,	// (0x00021e51) control_pane_g2_ParamLimits

0x8c73,	// (0x00021e51) control_pane_g2

0xbf4f,	// (0x0002512d) control_pane_g3_ParamLimits

0xbf4f,	// (0x0002512d) control_pane_g3

0x0007,

0xf78e,	// (0x0002896c) control_pane_g_ParamLimits

0xf78e,	// (0x0002896c) control_pane_g

0x8cb4,	// (0x00021e92) control_pane_t1_ParamLimits

0x8cb4,	// (0x00021e92) control_pane_t1

0x8d12,	// (0x00021ef0) control_pane_t2_ParamLimits

0x8d12,	// (0x00021ef0) control_pane_t2

0x0002,

0xf79f,	// (0x0002897d) control_pane_t_ParamLimits

0xf79f,	// (0x0002897d) control_pane_t

0xbe70,	// (0x0002504e) navi_navi_volume_pane_cp1

0xbe79,	// (0x00025057) status_small_icon_pane

0xbe81,	// (0x0002505f) status_small_pane_g1_ParamLimits

0xbe81,	// (0x0002505f) status_small_pane_g1

0xbeb5,	// (0x00025093) status_small_pane_g2_ParamLimits

0xbeb5,	// (0x00025093) status_small_pane_g2

0xbec1,	// (0x0002509f) status_small_pane_g3_ParamLimits

0xbec1,	// (0x0002509f) status_small_pane_g3

0xbecd,	// (0x000250ab) status_small_pane_g4_ParamLimits

0xbecd,	// (0x000250ab) status_small_pane_g4

0xbed9,	// (0x000250b7) status_small_pane_g5_ParamLimits

0xbed9,	// (0x000250b7) status_small_pane_g5

0xbee8,	// (0x000250c6) status_small_pane_g6_ParamLimits

0xbee8,	// (0x000250c6) status_small_pane_g6

0x0007,

0xf77d,	// (0x0002895b) status_small_pane_g_ParamLimits

0xf77d,	// (0x0002895b) status_small_pane_g

0xbf18,	// (0x000250f6) status_small_pane_t1

0xbf3b,	// (0x00025119) status_small_wait_pane_ParamLimits

0xbf3b,	// (0x00025119) status_small_wait_pane

0x2bd6,	// (0x0001bdb4) aid_levels_signal_ParamLimits

0x2bd6,	// (0x0001bdb4) aid_levels_signal

0x2bee,	// (0x0001bdcc) signal_pane_g1_ParamLimits

0x2bee,	// (0x0001bdcc) signal_pane_g1

0x2c09,	// (0x0001bde7) signal_pane_g2_ParamLimits

0x2c09,	// (0x0001bde7) signal_pane_g2

0x0003,

0xf70e,	// (0x000288ec) signal_pane_g_ParamLimits

0xf70e,	// (0x000288ec) signal_pane_g

0xb88f,	// (0x00024a6d) context_pane_g1

0x225d,	// (0x0001b43b) title_pane_g1

0x2294,	// (0x0001b472) title_pane_t1

0x85ee,	// (0x000217cc) title_pane_t2

0x8614,	// (0x000217f2) title_pane_t3

0x0002,

0xf55d,	// (0x0002873b) title_pane_t

0x3148,	// (0x0001c326) aid_levels_battery_ParamLimits

0x3148,	// (0x0001c326) aid_levels_battery

0x3164,	// (0x0001c342) battery_pane_g1_ParamLimits

0x3164,	// (0x0001c342) battery_pane_g1

0x3181,	// (0x0001c35f) battery_pane_g2_ParamLimits

0x3181,	// (0x0001c35f) battery_pane_g2

0x0001,

0xf7b1,	// (0x0002898f) battery_pane_g_ParamLimits

0xf7b1,	// (0x0002898f) battery_pane_g

0x9688,	// (0x00022866) uni_indicator_pane_g1

0x969f,	// (0x0002287d) uni_indicator_pane_g2

0x96b5,	// (0x00022893) uni_indicator_pane_g3

0x0005,

0xf91b,	// (0x00028af9) uni_indicator_pane_g

0xbbc7,	// (0x00024da5) navi_icon_pane_ParamLimits

0xbbc7,	// (0x00024da5) navi_icon_pane

0xbb10,	// (0x00024cee) navi_midp_pane

0xbbe3,	// (0x00024dc1) navi_navi_pane

0xbbed,	// (0x00024dcb) navi_text_pane_ParamLimits

0xbbed,	// (0x00024dcb) navi_text_pane

0x83c8,	// (0x000215a6) status_small_wait_pane_g1

0x88ff,	// (0x00021add) status_small_wait_pane_g2

0x0001,

0xf916,	// (0x00028af4) status_small_wait_pane_g

0xce71,	// (0x0002604f) navi_navi_icon_text_pane

0xce79,	// (0x00026057) navi_navi_pane_g1_ParamLimits

0xce79,	// (0x00026057) navi_navi_pane_g1

0xce8b,	// (0x00026069) navi_navi_pane_g2_ParamLimits

0xce8b,	// (0x00026069) navi_navi_pane_g2

0x0001,

0xf8e4,	// (0x00028ac2) navi_navi_pane_g_ParamLimits

0xf8e4,	// (0x00028ac2) navi_navi_pane_g

0xce9d,	// (0x0002607b) navi_navi_tabs_pane

0xcea6,	// (0x00026084) navi_navi_text_pane

0xce71,	// (0x0002604f) navi_navi_volume_pane

0xce4d,	// (0x0002602b) navi_text_pane_t1

0xce41,	// (0x0002601f) navi_icon_pane_g1

0xcd94,	// (0x00025f72) navi_navi_text_pane_t1

0x5fd2,	// (0x0001f1b0) navi_navi_volume_pane_g1

0x9652,	// (0x00022830) volume_small_pane

0x95bc,	// (0x0002279a) navi_navi_icon_text_pane_g1

0xcd7a,	// (0x00025f58) navi_navi_icon_text_pane_t1

0xbbe3,	// (0x00024dc1) navi_tabs_2_long_pane

0xbbe3,	// (0x00024dc1) navi_tabs_2_pane

0xbbe3,	// (0x00024dc1) navi_tabs_3_long_pane

0xbbe3,	// (0x00024dc1) navi_tabs_3_pane

0xbbe3,	// (0x00024dc1) navi_tabs_4_pane

0x959c,	// (0x0002277a) tabs_2_active_pane_ParamLimits

0x959c,	// (0x0002277a) tabs_2_active_pane

0x95ac,	// (0x0002278a) tabs_2_passive_pane_ParamLimits

0x95ac,	// (0x0002278a) tabs_2_passive_pane

0x956a,	// (0x00022748) tabs_3_active_pane_ParamLimits

0x956a,	// (0x00022748) tabs_3_active_pane

0x957a,	// (0x00022758) tabs_3_passive_pane_ParamLimits

0x957a,	// (0x00022758) tabs_3_passive_pane

0x958b,	// (0x00022769) tabs_3_passive_pane_cp_ParamLimits

0x958b,	// (0x00022769) tabs_3_passive_pane_cp

0x9537,	// (0x00022715) tabs_4_active_pane_ParamLimits

0x9537,	// (0x00022715) tabs_4_active_pane

0x9548,	// (0x00022726) tabs_4_passive_pane_ParamLimits

0x9548,	// (0x00022726) tabs_4_passive_pane

0x5f5e,	// (0x0001f13c) tabs_4_passive_pane_cp_ParamLimits

0x5f5e,	// (0x0001f13c) tabs_4_passive_pane_cp

0x9559,	// (0x00022737) tabs_4_passive_pane_cp2_ParamLimits

0x9559,	// (0x00022737) tabs_4_passive_pane_cp2

0x9513,	// (0x000226f1) tabs_2_long_active_pane_ParamLimits

0x9513,	// (0x000226f1) tabs_2_long_active_pane

0x9525,	// (0x00022703) tabs_2_long_passive_pane_ParamLimits

0x9525,	// (0x00022703) tabs_2_long_passive_pane

0x94d4,	// (0x000226b2) tabs_3_long_active_pane_ParamLimits

0x94d4,	// (0x000226b2) tabs_3_long_active_pane

0x94e7,	// (0x000226c5) tabs_3_long_passive_pane_ParamLimits

0x94e7,	// (0x000226c5) tabs_3_long_passive_pane

0x9500,	// (0x000226de) tabs_3_long_passive_pane_cp_ParamLimits

0x9500,	// (0x000226de) tabs_3_long_passive_pane_cp

0x5e85,	// (0x0001f063) volume_small_pane_g1

0x5e8e,	// (0x0001f06c) volume_small_pane_g2

0x5e97,	// (0x0001f075) volume_small_pane_g3

0x5ea0,	// (0x0001f07e) volume_small_pane_g4

0x5ea9,	// (0x0001f087) volume_small_pane_g5

0x5eb2,	// (0x0001f090) volume_small_pane_g6

0x5ebb,	// (0x0001f099) volume_small_pane_g7

0x5ec4,	// (0x0001f0a2) volume_small_pane_g8

0x5ecd,	// (0x0001f0ab) volume_small_pane_g9

0x5ed6,	// (0x0001f0b4) volume_small_pane_g10

0x0009,

0xf8b0,	// (0x00028a8e) volume_small_pane_g

0x8626,	// (0x00021804) bg_active_tab_pane_cp2_ParamLimits

0x8626,	// (0x00021804) bg_active_tab_pane_cp2

0x8634,	// (0x00021812) tabs_3_active_pane_g1

0x2320,	// (0x0001b4fe) tabs_3_active_pane_t1

0x8626,	// (0x00021804) bg_passive_tab_pane_cp2_ParamLimits

0x8626,	// (0x00021804) bg_passive_tab_pane_cp2

0x8634,	// (0x00021812) tabs_3_passive_pane_g1

0x2320,	// (0x0001b4fe) tabs_3_passive_pane_t1

0x8626,	// (0x00021804) bg_active_tab_pane_cp3_ParamLimits

0x8626,	// (0x00021804) bg_active_tab_pane_cp3

0x863c,	// (0x0002181a) tabs_4_active_pane_g1

0x2332,	// (0x0001b510) tabs_4_active_pane_t1

0x8626,	// (0x00021804) bg_passive_tab_pane_cp3_ParamLimits

0x8626,	// (0x00021804) bg_passive_tab_pane_cp3

0x863c,	// (0x0002181a) tabs_4_1_passive_pane_g1

0x2332,	// (0x0001b510) tabs_4_1_passive_pane_t1

0xb46d,	// (0x0002464b) list_highlight_pane_cp2

0x973e,	// (0x0002291c) list_set_pane_ParamLimits

0x973e,	// (0x0002291c) list_set_pane

0x97d8,	// (0x000229b6) main_pane_set_t1_ParamLimits

0x97d8,	// (0x000229b6) main_pane_set_t1

0x97f8,	// (0x000229d6) main_pane_set_t2_ParamLimits

0x97f8,	// (0x000229d6) main_pane_set_t2

0x980c,	// (0x000229ea) main_pane_set_t3_ParamLimits

0x980c,	// (0x000229ea) main_pane_set_t3

0x981e,	// (0x000229fc) main_pane_set_t4_ParamLimits

0x981e,	// (0x000229fc) main_pane_set_t4

0x0003,

0xf980,	// (0x00028b5e) main_pane_set_t_ParamLimits

0xf980,	// (0x00028b5e) main_pane_set_t

0x9830,	// (0x00022a0e) setting_code_pane

0x9838,	// (0x00022a16) setting_slider_graphic_pane

0x9838,	// (0x00022a16) setting_slider_pane

0x9838,	// (0x00022a16) setting_text_pane

0x9838,	// (0x00022a16) setting_volume_pane

0x514b,	// (0x0001e329) volume_set_pane

0x8644,	// (0x00021822) bg_set_opt_pane_cp

0x5153,	// (0x0001e331) setting_slider_pane_t1

0x516c,	// (0x0001e34a) setting_slider_pane_t2

0x5186,	// (0x0001e364) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00028742) setting_slider_pane_t

0x519e,	// (0x0001e37c) slider_set_pane

0x84b8,	// (0x00021696) bg_set_opt_pane_cp2

0x8652,	// (0x00021830) setting_slider_graphic_pane_g1

0x51b4,	// (0x0001e392) setting_slider_graphic_pane_t1

0x51c4,	// (0x0001e3a2) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00028749) setting_slider_graphic_pane_t

0x51d4,	// (0x0001e3b2) slider_set_pane_cp

0x84b8,	// (0x00021696) input_focus_pane_cp1

0xd2d6,	// (0x000264b4) list_set_text_pane

0x83c8,	// (0x000215a6) setting_text_pane_g1

0x84b8,	// (0x00021696) input_focus_pane_cp2

0x83c8,	// (0x000215a6) setting_code_pane_g1

0x865b,	// (0x00021839) setting_code_pane_t1

0x3c87,	// (0x0001ce65) set_text_pane_t1_ParamLimits

0x3c87,	// (0x0001ce65) set_text_pane_t1

0xb363,	// (0x00024541) set_opt_bg_pane_g1

0xb36b,	// (0x00024549) set_opt_bg_pane_g2

0xd2b6,	// (0x00026494) set_opt_bg_pane_g3

0xb37b,	// (0x00024559) set_opt_bg_pane_g4

0xb383,	// (0x00024561) set_opt_bg_pane_g5

0xb38b,	// (0x00024569) set_opt_bg_pane_g6

0xd2be,	// (0x0002649c) set_opt_bg_pane_g7

0xd2c6,	// (0x000264a4) set_opt_bg_pane_g8

0xd2ce,	// (0x000264ac) set_opt_bg_pane_g9

0x0008,

0xf96d,	// (0x00028b4b) set_opt_bg_pane_g

0xd2a9,	// (0x00026487) slider_set_pane_g1

0x6047,	// (0x0001f225) slider_set_pane_g2

0x0006,

0xf95e,	// (0x00028b3c) slider_set_pane_g

0x5fe3,	// (0x0001f1c1) volume_set_pane_g1

0x5feb,	// (0x0001f1c9) volume_set_pane_g2

0x5ff3,	// (0x0001f1d1) volume_set_pane_g3

0x5ffb,	// (0x0001f1d9) volume_set_pane_g4

0x6003,	// (0x0001f1e1) volume_set_pane_g5

0x600b,	// (0x0001f1e9) volume_set_pane_g6

0x6013,	// (0x0001f1f1) volume_set_pane_g7

0x601b,	// (0x0001f1f9) volume_set_pane_g8

0x6023,	// (0x0001f201) volume_set_pane_g9

0x602b,	// (0x0001f209) volume_set_pane_g10

0x0009,

0xf936,	// (0x00028b14) volume_set_pane_g

0x2344,	// (0x0001b522) indicator_pane_ParamLimits

0x2344,	// (0x0001b522) indicator_pane

0x236c,	// (0x0001b54a) main_idle_pane_g2_ParamLimits

0x236c,	// (0x0001b54a) main_idle_pane_g2

0x23a4,	// (0x0001b582) main_pane_idle_g1_ParamLimits

0x23a4,	// (0x0001b582) main_pane_idle_g1

0x8669,	// (0x00021847) popup_clock_digital_analogue_window_ParamLimits

0x8669,	// (0x00021847) popup_clock_digital_analogue_window

0x23cb,	// (0x0001b5a9) soft_indicator_pane_ParamLimits

0x23cb,	// (0x0001b5a9) soft_indicator_pane

0x23e5,	// (0x0001b5c3) wallpaper_pane_ParamLimits

0x23e5,	// (0x0001b5c3) wallpaper_pane

0x83c8,	// (0x000215a6) wallpaper_pane_g1

0x23f7,	// (0x0001b5d5) indicator_pane_g1_ParamLimits

0x23f7,	// (0x0001b5d5) indicator_pane_g1

0xd4a3,	// (0x00026681) navi_navi_icon_text_pane_srt_g1

0x8697,	// (0x00021875) soft_indicator_pane_t1

0x86b1,	// (0x0002188f) aid_ps_area_pane

0x240d,	// (0x0001b5eb) aid_ps_clock_pane

0x86c2,	// (0x000218a0) aid_ps_indicator_pane

0x86ce,	// (0x000218ac) indicator_ps_pane_ParamLimits

0x86ce,	// (0x000218ac) indicator_ps_pane

0x86dd,	// (0x000218bb) power_save_pane_g1_ParamLimits

0x86dd,	// (0x000218bb) power_save_pane_g1

0x86e9,	// (0x000218c7) power_save_pane_g2_ParamLimits

0x86e9,	// (0x000218c7) power_save_pane_g2

0x4d6a,	// (0x0001df48) aid_navinavi_width_pane

0x86b1,	// (0x0002188f) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002874e) power_save_pane_g_ParamLimits

0xf570,	// (0x0002874e) power_save_pane_g

0x86f7,	// (0x000218d5) power_save_pane_t1_ParamLimits

0x86f7,	// (0x000218d5) power_save_pane_t1

0x240d,	// (0x0001b5eb) aid_ps_clock_pane_ParamLimits

0x86c2,	// (0x000218a0) aid_ps_indicator_pane_ParamLimits

0x8709,	// (0x000218e7) power_save_pane_t4_ParamLimits

0x8709,	// (0x000218e7) power_save_pane_t4

0x0001,

0xf575,	// (0x00028753) power_save_pane_t_ParamLimits

0xf575,	// (0x00028753) power_save_pane_t

0x8733,	// (0x00021911) power_save_t3_ParamLimits

0x8733,	// (0x00021911) power_save_t3

0x871e,	// (0x000218fc) power_save_t2_ParamLimits

0x871e,	// (0x000218fc) power_save_t2

0x8748,	// (0x00021926) indicator_ps_pane_g1

0x241b,	// (0x0001b5f9) ai_gene_pane_ParamLimits

0x241b,	// (0x0001b5f9) ai_gene_pane

0x2432,	// (0x0001b610) ai_links_pane_ParamLimits

0x2432,	// (0x0001b610) ai_links_pane

0x244a,	// (0x0001b628) indicator_pane_cp1_ParamLimits

0x244a,	// (0x0001b628) indicator_pane_cp1

0x2459,	// (0x0001b637) main_pane_idle_g1_cp_ParamLimits

0x2459,	// (0x0001b637) main_pane_idle_g1_cp

0x8751,	// (0x0002192f) popup_ai_links_title_window

0x2471,	// (0x0001b64f) soft_indicator_pane_cp1_ParamLimits

0x2471,	// (0x0001b64f) soft_indicator_pane_cp1

0xd111,	// (0x000262ef) ai_links_pane_g1

0xd11a,	// (0x000262f8) grid_ai_links_pane

0x967f,	// (0x0002285d) ai_gene_pane_1

0xd0ff,	// (0x000262dd) ai_gene_pane_2

0xd108,	// (0x000262e6) list_highlight_pane_cp4

0x965b,	// (0x00022839) cell_ai_link_pane_ParamLimits

0x965b,	// (0x00022839) cell_ai_link_pane

0xd0f7,	// (0x000262d5) cell_ai_link_pane_g1

0x88ff,	// (0x00021add) cell_ai_link_pane_g2

0x0001,

0xf911,	// (0x00028aef) cell_ai_link_pane_g

0x84b8,	// (0x00021696) grid_highlight_cp2

0x84b8,	// (0x00021696) bg_popup_sub_pane_cp1

0x8768,	// (0x00021946) popup_ai_links_title_window_t1

0xd047,	// (0x00026225) ai_gene_pane_1_g1_ParamLimits

0xd047,	// (0x00026225) ai_gene_pane_1_g1

0xd053,	// (0x00026231) ai_gene_pane_1_g2_ParamLimits

0xd053,	// (0x00026231) ai_gene_pane_1_g2

0x0001,

0xf907,	// (0x00028ae5) ai_gene_pane_1_g_ParamLimits

0xf907,	// (0x00028ae5) ai_gene_pane_1_g

0xd060,	// (0x0002623e) ai_gene_pane_1_t1_ParamLimits

0xd060,	// (0x0002623e) ai_gene_pane_1_t1

0xd094,	// (0x00026272) grid_ai_soft_ind_pane

0xd032,	// (0x00026210) ai_gene_pane_2_t1_ParamLimits

0xd032,	// (0x00026210) ai_gene_pane_2_t1

0x2485,	// (0x0001b663) main_pane_empty_t1_ParamLimits

0x2485,	// (0x0001b663) main_pane_empty_t1

0x249d,	// (0x0001b67b) main_pane_empty_t2_ParamLimits

0x249d,	// (0x0001b67b) main_pane_empty_t2

0x24b2,	// (0x0001b690) main_pane_empty_t3_ParamLimits

0x24b2,	// (0x0001b690) main_pane_empty_t3

0x24c4,	// (0x0001b6a2) main_pane_empty_t4_ParamLimits

0x24c4,	// (0x0001b6a2) main_pane_empty_t4

0x24d6,	// (0x0001b6b4) main_pane_empty_t5_ParamLimits

0x24d6,	// (0x0001b6b4) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00028758) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00028758) main_pane_empty_t

0xb3b4,	// (0x00024592) bg_popup_window_pane_ParamLimits

0xb3b4,	// (0x00024592) bg_popup_window_pane

0xcda2,	// (0x00025f80) find_popup_pane_cp2_ParamLimits

0xcda2,	// (0x00025f80) find_popup_pane_cp2

0xcdae,	// (0x00025f8c) heading_pane_ParamLimits

0xcdae,	// (0x00025f8c) heading_pane

0x84b8,	// (0x00021696) bg_popup_sub_pane

0x95d3,	// (0x000227b1) bg_popup_window_pane_g1_ParamLimits

0x95d3,	// (0x000227b1) bg_popup_window_pane_g1

0x95e2,	// (0x000227c0) bg_popup_window_pane_g2_ParamLimits

0x95e2,	// (0x000227c0) bg_popup_window_pane_g2

0x95ee,	// (0x000227cc) bg_popup_window_pane_g3_ParamLimits

0x95ee,	// (0x000227cc) bg_popup_window_pane_g3

0x95fa,	// (0x000227d8) bg_popup_window_pane_g4_ParamLimits

0x95fa,	// (0x000227d8) bg_popup_window_pane_g4

0x9609,	// (0x000227e7) bg_popup_window_pane_g5_ParamLimits

0x9609,	// (0x000227e7) bg_popup_window_pane_g5

0x9619,	// (0x000227f7) bg_popup_window_pane_g6_ParamLimits

0x9619,	// (0x000227f7) bg_popup_window_pane_g6

0x9625,	// (0x00022803) bg_popup_window_pane_g7_ParamLimits

0x9625,	// (0x00022803) bg_popup_window_pane_g7

0x9634,	// (0x00022812) bg_popup_window_pane_g8_ParamLimits

0x9634,	// (0x00022812) bg_popup_window_pane_g8

0x9643,	// (0x00022821) bg_popup_window_pane_g9_ParamLimits

0x9643,	// (0x00022821) bg_popup_window_pane_g9

0xcd88,	// (0x00025f66) bg_popup_window_pane_g10_ParamLimits

0xcd88,	// (0x00025f66) bg_popup_window_pane_g10

0x0009,

0xf8cf,	// (0x00028aad) bg_popup_window_pane_g_ParamLimits

0xf8cf,	// (0x00028aad) bg_popup_window_pane_g

0xcd31,	// (0x00025f0f) bg_popup_heading_pane_ParamLimits

0xcd31,	// (0x00025f0f) bg_popup_heading_pane

0x608d,	// (0x0001f26b) tabs_4_passive_pane_cp_srt_ParamLimits

0x608d,	// (0x0001f26b) tabs_4_passive_pane_cp_srt

0x609f,	// (0x0001f27d) tabs_4_passive_pane_srt_ParamLimits

0xcd45,	// (0x00025f23) heading_pane_g2

0x609f,	// (0x0001f27d) tabs_4_passive_pane_srt

0xc20b,	// (0x000253e9) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc20b,	// (0x000253e9) bg_passive_tab_pane_cp3_srt

0xcd4d,	// (0x00025f2b) heading_pane_t1_ParamLimits

0xcd4d,	// (0x00025f2b) heading_pane_t1

0xcd64,	// (0x00025f42) heading_pane_t2_ParamLimits

0xcd64,	// (0x00025f42) heading_pane_t2

0x0001,

0xf8ca,	// (0x00028aa8) heading_pane_t_ParamLimits

0xf8ca,	// (0x00028aa8) heading_pane_t

0xc87c,	// (0x00025a5a) bg_popup_heading_pane_g1

0xc90d,	// (0x00025aeb) bg_popup_heading_pane_g2

0xc917,	// (0x00025af5) bg_popup_heading_pane_g3

0xc921,	// (0x00025aff) bg_popup_heading_pane_g4

0xc92b,	// (0x00025b09) bg_popup_heading_pane_g5

0xc935,	// (0x00025b13) bg_popup_heading_pane_g6

0xc93d,	// (0x00025b1b) bg_popup_heading_pane_g7

0xc945,	// (0x00025b23) bg_popup_heading_pane_g8

0xc94f,	// (0x00025b2d) bg_popup_heading_pane_g9

0x0008,

0xf886,	// (0x00028a64) bg_popup_heading_pane_g

0xc197,	// (0x00025375) bg_popup_sub_pane_g1

0xc19f,	// (0x0002537d) bg_popup_sub_pane_g2

0xc1a7,	// (0x00025385) bg_popup_sub_pane_g3

0xc1af,	// (0x0002538d) bg_popup_sub_pane_g4

0xc1b7,	// (0x00025395) bg_popup_sub_pane_g5

0xc1bf,	// (0x0002539d) bg_popup_sub_pane_g6

0xc1c7,	// (0x000253a5) bg_popup_sub_pane_g7

0xc1cf,	// (0x000253ad) bg_popup_sub_pane_g8

0xc1d7,	// (0x000253b5) bg_popup_sub_pane_g9

0x0008,

0xf860,	// (0x00028a3e) bg_popup_sub_pane_g

0x8626,	// (0x00021804) bg_popup_window_pane_cp5_ParamLimits

0x8626,	// (0x00021804) bg_popup_window_pane_cp5

0x8785,	// (0x00021963) popup_note_window_g1_ParamLimits

0x8785,	// (0x00021963) popup_note_window_g1

0x8791,	// (0x0002196f) popup_note_window_t1_ParamLimits

0x8791,	// (0x0002196f) popup_note_window_t1

0x87a3,	// (0x00021981) popup_note_window_t2_ParamLimits

0x87a3,	// (0x00021981) popup_note_window_t2

0x87b5,	// (0x00021993) popup_note_window_t3_ParamLimits

0x87b5,	// (0x00021993) popup_note_window_t3

0x87c7,	// (0x000219a5) popup_note_window_t4_ParamLimits

0x87c7,	// (0x000219a5) popup_note_window_t4

0x87ef,	// (0x000219cd) popup_note_window_t5_ParamLimits

0x87ef,	// (0x000219cd) popup_note_window_t5

0x0004,

0xf585,	// (0x00028763) popup_note_window_t_ParamLimits

0xf585,	// (0x00028763) popup_note_window_t

0x8813,	// (0x000219f1) bg_popup_window_pane_cp6_ParamLimits

0x8813,	// (0x000219f1) bg_popup_window_pane_cp6

0xc7f0,	// (0x000259ce) popup_note_image_window_g1_ParamLimits

0xc7f0,	// (0x000259ce) popup_note_image_window_g1

0xc7fc,	// (0x000259da) popup_note_image_window_g2_ParamLimits

0xc7fc,	// (0x000259da) popup_note_image_window_g2

0x0001,

0xf854,	// (0x00028a32) popup_note_image_window_g_ParamLimits

0xf854,	// (0x00028a32) popup_note_image_window_g

0xc815,	// (0x000259f3) popup_note_image_window_t1_ParamLimits

0xc815,	// (0x000259f3) popup_note_image_window_t1

0xc82e,	// (0x00025a0c) popup_note_image_window_t2_ParamLimits

0xc82e,	// (0x00025a0c) popup_note_image_window_t2

0xc847,	// (0x00025a25) popup_note_image_window_t3_ParamLimits

0xc847,	// (0x00025a25) popup_note_image_window_t3

0x0002,

0xf859,	// (0x00028a37) popup_note_image_window_t_ParamLimits

0xf859,	// (0x00028a37) popup_note_image_window_t

0xc6cd,	// (0x000258ab) bg_popup_window_pane_cp7_ParamLimits

0xc6cd,	// (0x000258ab) bg_popup_window_pane_cp7

0xc6fd,	// (0x000258db) popup_note_wait_window_g1_ParamLimits

0xc6fd,	// (0x000258db) popup_note_wait_window_g1

0xc709,	// (0x000258e7) popup_note_wait_window_g2_ParamLimits

0xc709,	// (0x000258e7) popup_note_wait_window_g2

0x0002,

0xf842,	// (0x00028a20) popup_note_wait_window_g_ParamLimits

0xf842,	// (0x00028a20) popup_note_wait_window_g

0xc721,	// (0x000258ff) popup_note_wait_window_t1_ParamLimits

0xc721,	// (0x000258ff) popup_note_wait_window_t1

0xc748,	// (0x00025926) popup_note_wait_window_t2_ParamLimits

0xc748,	// (0x00025926) popup_note_wait_window_t2

0xc765,	// (0x00025943) popup_note_wait_window_t3_ParamLimits

0xc765,	// (0x00025943) popup_note_wait_window_t3

0xc778,	// (0x00025956) popup_note_wait_window_t4_ParamLimits

0xc778,	// (0x00025956) popup_note_wait_window_t4

0x0004,

0xf849,	// (0x00028a27) popup_note_wait_window_t_ParamLimits

0xf849,	// (0x00028a27) popup_note_wait_window_t

0xc79d,	// (0x0002597b) wait_bar_pane_ParamLimits

0xc79d,	// (0x0002597b) wait_bar_pane

0x84b8,	// (0x00021696) wait_anim_pane

0x84b8,	// (0x00021696) wait_border_pane

0x83c8,	// (0x000215a6) wait_anim_pane_g1

0x83c8,	// (0x000215a6) wait_anim_pane_g2

0x0001,

0xf709,	// (0x000288e7) wait_anim_pane_g

0xc671,	// (0x0002584f) wait_border_pane_g1

0xc67c,	// (0x0002585a) wait_border_pane_g2

0xc685,	// (0x00025863) wait_border_pane_g3

0x0002,

0xf83b,	// (0x00028a19) wait_border_pane_g

0xc4e1,	// (0x000256bf) bg_popup_window_pane_cp16_ParamLimits

0xc4e1,	// (0x000256bf) bg_popup_window_pane_cp16

0xc5e1,	// (0x000257bf) indicator_popup_pane_cp4_ParamLimits

0xc5e1,	// (0x000257bf) indicator_popup_pane_cp4

0xc5f5,	// (0x000257d3) popup_query_data_window_t1_ParamLimits

0xc5f5,	// (0x000257d3) popup_query_data_window_t1

0xc607,	// (0x000257e5) popup_query_data_window_t2_ParamLimits

0xc607,	// (0x000257e5) popup_query_data_window_t2

0xc620,	// (0x000257fe) popup_query_data_window_t3_ParamLimits

0xc620,	// (0x000257fe) popup_query_data_window_t3

0x0002,

0xf834,	// (0x00028a12) popup_query_data_window_t_ParamLimits

0xf834,	// (0x00028a12) popup_query_data_window_t

0xc63a,	// (0x00025818) query_popup_data_pane_ParamLimits

0xc63a,	// (0x00025818) query_popup_data_pane

0xc64e,	// (0x0002582c) query_popup_data_pane_cp1_ParamLimits

0xc64e,	// (0x0002582c) query_popup_data_pane_cp1

0xc4e1,	// (0x000256bf) bg_popup_window_pane_cp10_ParamLimits

0xc4e1,	// (0x000256bf) bg_popup_window_pane_cp10

0xc513,	// (0x000256f1) indicator_popup_pane_ParamLimits

0xc513,	// (0x000256f1) indicator_popup_pane

0xc535,	// (0x00025713) popup_query_code_window_t1_ParamLimits

0xc535,	// (0x00025713) popup_query_code_window_t1

0xc54f,	// (0x0002572d) popup_query_code_window_t2_ParamLimits

0xc54f,	// (0x0002572d) popup_query_code_window_t2

0xc598,	// (0x00025776) popup_query_code_window_t3_ParamLimits

0xc598,	// (0x00025776) popup_query_code_window_t3

0x0002,

0xf82d,	// (0x00028a0b) popup_query_code_window_t_ParamLimits

0xf82d,	// (0x00028a0b) popup_query_code_window_t

0xc5c7,	// (0x000257a5) query_popup_pane_ParamLimits

0xc5c7,	// (0x000257a5) query_popup_pane

0x8813,	// (0x000219f1) bg_popup_window_pane_cp15_ParamLimits

0x8813,	// (0x000219f1) bg_popup_window_pane_cp15

0x8831,	// (0x00021a0f) indicator_popup_pane_cp1_ParamLimits

0x8831,	// (0x00021a0f) indicator_popup_pane_cp1

0x8844,	// (0x00021a22) indicator_popup_pane_cp2_ParamLimits

0x8844,	// (0x00021a22) indicator_popup_pane_cp2

0x8857,	// (0x00021a35) popup_query_data_code_window_g1_ParamLimits

0x8857,	// (0x00021a35) popup_query_data_code_window_g1

0x886a,	// (0x00021a48) popup_query_data_code_window_t1_ParamLimits

0x886a,	// (0x00021a48) popup_query_data_code_window_t1

0x887c,	// (0x00021a5a) popup_query_data_code_window_t2_ParamLimits

0x887c,	// (0x00021a5a) popup_query_data_code_window_t2

0x888e,	// (0x00021a6c) popup_query_data_code_window_t3_ParamLimits

0x888e,	// (0x00021a6c) popup_query_data_code_window_t3

0x88a4,	// (0x00021a82) popup_query_data_code_window_t4_ParamLimits

0x88a4,	// (0x00021a82) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002876e) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002876e) popup_query_data_code_window_t

0xbb85,	// (0x00024d63) list_single_midp_graphic_pane_g3

0x88bc,	// (0x00021a9a) query_popup_data_pane_cp2_ParamLimits

0x88cf,	// (0x00021aad) query_popup_pane_cp2_ParamLimits

0x88cf,	// (0x00021aad) query_popup_pane_cp2

0x84b8,	// (0x00021696) bg_popup_window_pane_cp11

0xc4d9,	// (0x000256b7) heading_pane_cp5

0x895d,	// (0x00021b3b) listscroll_popup_info_pane

0x84b8,	// (0x00021696) input_focus_pane_cp3

0x88e2,	// (0x00021ac0) query_popup_pane_t1

0x88f0,	// (0x00021ace) list_popup_info_pane_ParamLimits

0x88f0,	// (0x00021ace) list_popup_info_pane

0x88ff,	// (0x00021add) listscroll_popup_info_pane_g1

0x8907,	// (0x00021ae5) scroll_pane_cp7

0x8911,	// (0x00021aef) popup_info_list_pane_t1_ParamLimits

0x8911,	// (0x00021aef) popup_info_list_pane_t1

0x892b,	// (0x00021b09) popup_info_list_pane_t2_ParamLimits

0x892b,	// (0x00021b09) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00028777) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00028777) popup_info_list_pane_t

0x84b8,	// (0x00021696) bg_popup_window_pane_cp12

0xd4bd,	// (0x0002669b) find_popup_pane

0x8644,	// (0x00021822) bg_popup_window_pane_cp3

0x8945,	// (0x00021b23) heading_pane_cp3

0x8951,	// (0x00021b2f) listscroll_popup_graphic_pane

0x84b8,	// (0x00021696) bg_popup_window_pane_cp4

0x2538,	// (0x0001b716) heading_pane_cp4

0x895d,	// (0x00021b3b) listscroll_popup_colour_pane

0x8965,	// (0x00021b43) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8965,	// (0x00021b43) cell_large_graphic_colour_none_popup_pane

0x2540,	// (0x0001b71e) grid_large_graphic_colour_popup_pane_ParamLimits

0x2540,	// (0x0001b71e) grid_large_graphic_colour_popup_pane

0x8979,	// (0x00021b57) listscroll_popup_colour_pane_g1_ParamLimits

0x8979,	// (0x00021b57) listscroll_popup_colour_pane_g1

0x8990,	// (0x00021b6e) listscroll_popup_colour_pane_g2_ParamLimits

0x8990,	// (0x00021b6e) listscroll_popup_colour_pane_g2

0x89a7,	// (0x00021b85) listscroll_popup_colour_pane_g3_ParamLimits

0x89a7,	// (0x00021b85) listscroll_popup_colour_pane_g3

0x2564,	// (0x0001b742) listscroll_popup_colour_pane_g4_ParamLimits

0x2564,	// (0x0001b742) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002877c) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002877c) listscroll_popup_colour_pane_g

0x89b7,	// (0x00021b95) scroll_pane_cp6_ParamLimits

0x89b7,	// (0x00021b95) scroll_pane_cp6

0x2573,	// (0x0001b751) cell_large_graphic_colour_popup_pane_ParamLimits

0x2573,	// (0x0001b751) cell_large_graphic_colour_popup_pane

0x89c9,	// (0x00021ba7) cell_large_graphic_colour_none_popup_pane_t1

0x84b8,	// (0x00021696) grid_highlight_pane_cp5

0x89d8,	// (0x00021bb6) cell_large_graphic_colour_popup_pane_g1

0x89e0,	// (0x00021bbe) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00028785) cell_large_graphic_colour_popup_pane_g

0x89e8,	// (0x00021bc6) cell_large_graphic_colour_popup_pane_g2_copy1

0x89f1,	// (0x00021bcf) grid_highlight_pane_cp4

0x89f9,	// (0x00021bd7) bg_popup_window_pane_cp8_ParamLimits

0x89f9,	// (0x00021bd7) bg_popup_window_pane_cp8

0x8a14,	// (0x00021bf2) popup_snote_single_text_window_g1_ParamLimits

0x8a14,	// (0x00021bf2) popup_snote_single_text_window_g1

0x8a26,	// (0x00021c04) popup_snote_single_text_window_t1_ParamLimits

0x8a26,	// (0x00021c04) popup_snote_single_text_window_t1

0x8a39,	// (0x00021c17) popup_snote_single_text_window_t2_ParamLimits

0x8a39,	// (0x00021c17) popup_snote_single_text_window_t2

0x8a4c,	// (0x00021c2a) popup_snote_single_text_window_t3_ParamLimits

0x8a4c,	// (0x00021c2a) popup_snote_single_text_window_t3

0x8a85,	// (0x00021c63) popup_snote_single_text_window_t4_ParamLimits

0x8a85,	// (0x00021c63) popup_snote_single_text_window_t4

0x8ab9,	// (0x00021c97) popup_snote_single_text_window_t5_ParamLimits

0x8ab9,	// (0x00021c97) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002878a) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002878a) popup_snote_single_text_window_t

0x8ae8,	// (0x00021cc6) bg_popup_window_pane_cp9_ParamLimits

0x8ae8,	// (0x00021cc6) bg_popup_window_pane_cp9

0x8a14,	// (0x00021bf2) popup_snote_single_graphic_window_g1_ParamLimits

0x8a14,	// (0x00021bf2) popup_snote_single_graphic_window_g1

0x8af6,	// (0x00021cd4) popup_snote_single_graphic_window_g2_ParamLimits

0x8af6,	// (0x00021cd4) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00028795) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00028795) popup_snote_single_graphic_window_g

0x8b02,	// (0x00021ce0) popup_snote_single_graphic_window_t1_ParamLimits

0x8b02,	// (0x00021ce0) popup_snote_single_graphic_window_t1

0x8b15,	// (0x00021cf3) popup_snote_single_graphic_window_t2_ParamLimits

0x8b15,	// (0x00021cf3) popup_snote_single_graphic_window_t2

0x8b28,	// (0x00021d06) popup_snote_single_graphic_window_t3_ParamLimits

0x8b28,	// (0x00021d06) popup_snote_single_graphic_window_t3

0x8b61,	// (0x00021d3f) popup_snote_single_graphic_window_t4_ParamLimits

0x8b61,	// (0x00021d3f) popup_snote_single_graphic_window_t4

0x8b95,	// (0x00021d73) popup_snote_single_graphic_window_t5_ParamLimits

0x8b95,	// (0x00021d73) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002879a) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002879a) popup_snote_single_graphic_window_t

0xd445,	// (0x00026623) grid_graphic_popup_pane_ParamLimits

0xd445,	// (0x00026623) grid_graphic_popup_pane

0xd46d,	// (0x0002664b) listscroll_popup_graphic_pane_g1_ParamLimits

0xd46d,	// (0x0002664b) listscroll_popup_graphic_pane_g1

0x9927,	// (0x00022b05) listscroll_popup_graphic_pane_g2_ParamLimits

0x9927,	// (0x00022b05) listscroll_popup_graphic_pane_g2

0x0001,

0xf9aa,	// (0x00028b88) listscroll_popup_graphic_pane_g_ParamLimits

0xf9aa,	// (0x00028b88) listscroll_popup_graphic_pane_g

0xd30b,	// (0x000264e9) scroll_pane_cp5

0x98eb,	// (0x00022ac9) cell_graphic_popup_pane_ParamLimits

0x98eb,	// (0x00022ac9) cell_graphic_popup_pane

0xd410,	// (0x000265ee) cell_graphic_popup_pane_g1

0xd418,	// (0x000265f6) cell_graphic_popup_pane_g2

0x89e8,	// (0x00021bc6) cell_graphic_popup_pane_g3

0x0002,

0xf9a3,	// (0x00028b81) cell_graphic_popup_pane_g

0xd421,	// (0x000265ff) cell_graphic_popup_pane_t2

0x89f1,	// (0x00021bcf) grid_highlight_pane_cp3

0x8bd6,	// (0x00021db4) list_gen_pane_ParamLimits

0x8bd6,	// (0x00021db4) list_gen_pane

0x8bfe,	// (0x00021ddc) scroll_pane

0x98a6,	// (0x00022a84) bg_list_pane_g1_ParamLimits

0x98a6,	// (0x00022a84) bg_list_pane_g1

0xd3bf,	// (0x0002659d) bg_list_pane_g2_ParamLimits

0xd3bf,	// (0x0002659d) bg_list_pane_g2

0xd3d2,	// (0x000265b0) bg_list_pane_g3_ParamLimits

0xd3d2,	// (0x000265b0) bg_list_pane_g3

0xd3e4,	// (0x000265c2) bg_list_pane_g4_ParamLimits

0xd3e4,	// (0x000265c2) bg_list_pane_g4

0x98c1,	// (0x00022a9f) bg_list_pane_g5_ParamLimits

0x98c1,	// (0x00022a9f) bg_list_pane_g5

0x0004,

0xf998,	// (0x00028b76) bg_list_pane_g_ParamLimits

0xf998,	// (0x00028b76) bg_list_pane_g

0x986b,	// (0x00022a49) list_double2_graphic_large_graphic_pane_ParamLimits

0x986b,	// (0x00022a49) list_double2_graphic_large_graphic_pane

0x986b,	// (0x00022a49) list_double2_graphic_pane_ParamLimits

0x986b,	// (0x00022a49) list_double2_graphic_pane

0x986b,	// (0x00022a49) list_double2_large_graphic_pane_ParamLimits

0x986b,	// (0x00022a49) list_double2_large_graphic_pane

0x986b,	// (0x00022a49) list_double2_pane_ParamLimits

0x986b,	// (0x00022a49) list_double2_pane

0x986b,	// (0x00022a49) list_double_graphic_heading_pane_ParamLimits

0x986b,	// (0x00022a49) list_double_graphic_heading_pane

0x986b,	// (0x00022a49) list_double_graphic_pane_ParamLimits

0x986b,	// (0x00022a49) list_double_graphic_pane

0x986b,	// (0x00022a49) list_double_heading_pane_ParamLimits

0x986b,	// (0x00022a49) list_double_heading_pane

0x986b,	// (0x00022a49) list_double_large_graphic_pane_ParamLimits

0x986b,	// (0x00022a49) list_double_large_graphic_pane

0x986b,	// (0x00022a49) list_double_number_pane_ParamLimits

0x986b,	// (0x00022a49) list_double_number_pane

0x986b,	// (0x00022a49) list_double_pane_ParamLimits

0x986b,	// (0x00022a49) list_double_pane

0x986b,	// (0x00022a49) list_double_time_pane_ParamLimits

0x986b,	// (0x00022a49) list_double_time_pane

0x986b,	// (0x00022a49) list_setting_number_pane_ParamLimits

0x986b,	// (0x00022a49) list_setting_number_pane

0x986b,	// (0x00022a49) list_setting_pane_ParamLimits

0x986b,	// (0x00022a49) list_setting_pane

0x987e,	// (0x00022a5c) list_single_2graphic_pane_ParamLimits

0x987e,	// (0x00022a5c) list_single_2graphic_pane

0x987e,	// (0x00022a5c) list_single_graphic_heading_pane_ParamLimits

0x987e,	// (0x00022a5c) list_single_graphic_heading_pane

0x987e,	// (0x00022a5c) list_single_graphic_pane_ParamLimits

0x987e,	// (0x00022a5c) list_single_graphic_pane

0x987e,	// (0x00022a5c) list_single_heading_pane_ParamLimits

0x987e,	// (0x00022a5c) list_single_heading_pane

0x987e,	// (0x00022a5c) list_single_large_graphic_pane_ParamLimits

0x987e,	// (0x00022a5c) list_single_large_graphic_pane

0x987e,	// (0x00022a5c) list_single_number_heading_pane_ParamLimits

0x987e,	// (0x00022a5c) list_single_number_heading_pane

0x987e,	// (0x00022a5c) list_single_number_pane_ParamLimits

0x987e,	// (0x00022a5c) list_single_number_pane

0x987e,	// (0x00022a5c) list_single_pane_ParamLimits

0x987e,	// (0x00022a5c) list_single_pane

0x84b8,	// (0x00021696) list_highlight_pane_cp1

0x3d62,	// (0x0001cf40) list_single_pane_g1_ParamLimits

0x3d62,	// (0x0001cf40) list_single_pane_g1

0x3d6e,	// (0x0001cf4c) list_single_pane_g2_ParamLimits

0x3d6e,	// (0x0001cf4c) list_single_pane_g2

0x0001,

0xf5ce,	// (0x000287ac) list_single_pane_g_ParamLimits

0xf5ce,	// (0x000287ac) list_single_pane_g

0x4788,	// (0x0001d966) list_single_pane_t1_ParamLimits

0x4788,	// (0x0001d966) list_single_pane_t1

0x3d62,	// (0x0001cf40) list_single_number_pane_g1_ParamLimits

0x3d62,	// (0x0001cf40) list_single_number_pane_g1

0x3d6e,	// (0x0001cf4c) list_single_number_pane_g2_ParamLimits

0x3d6e,	// (0x0001cf4c) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x000287ac) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x000287ac) list_single_number_pane_g

0x447e,	// (0x0001d65c) list_single_number_pane_t1_ParamLimits

0x447e,	// (0x0001d65c) list_single_number_pane_t1

0x8175,	// (0x00021353) list_single_number_pane_t2_ParamLimits

0x8175,	// (0x00021353) list_single_number_pane_t2

0x0001,

0xf959,	// (0x00028b37) list_single_number_pane_t_ParamLimits

0xf959,	// (0x00028b37) list_single_number_pane_t

0x7bac,	// (0x00020d8a) list_single_graphic_pane_g1_ParamLimits

0x7bac,	// (0x00020d8a) list_single_graphic_pane_g1

0x3d62,	// (0x0001cf40) list_single_graphic_pane_g2_ParamLimits

0x3d62,	// (0x0001cf40) list_single_graphic_pane_g2

0x3d6e,	// (0x0001cf4c) list_single_graphic_pane_g3_ParamLimits

0x3d6e,	// (0x0001cf4c) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x000287a5) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x000287a5) list_single_graphic_pane_g

0x7bb8,	// (0x00020d96) list_single_graphic_pane_t1_ParamLimits

0x7bb8,	// (0x00020d96) list_single_graphic_pane_t1

0x3d62,	// (0x0001cf40) list_single_heading_pane_g1_ParamLimits

0x3d62,	// (0x0001cf40) list_single_heading_pane_g1

0x3d6e,	// (0x0001cf4c) list_single_heading_pane_g2_ParamLimits

0x3d6e,	// (0x0001cf4c) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x000287ac) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x000287ac) list_single_heading_pane_g

0x7bce,	// (0x00020dac) list_single_heading_pane_t1_ParamLimits

0x7bce,	// (0x00020dac) list_single_heading_pane_t1

0x7be4,	// (0x00020dc2) list_single_heading_pane_t2_ParamLimits

0x7be4,	// (0x00020dc2) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x000287b1) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x000287b1) list_single_heading_pane_t

0x3d62,	// (0x0001cf40) list_single_number_heading_pane_g1_ParamLimits

0x3d62,	// (0x0001cf40) list_single_number_heading_pane_g1

0x3d6e,	// (0x0001cf4c) list_single_number_heading_pane_g2_ParamLimits

0x3d6e,	// (0x0001cf4c) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x000287ac) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x000287ac) list_single_number_heading_pane_g

0x7bce,	// (0x00020dac) list_single_number_heading_pane_t1_ParamLimits

0x7bce,	// (0x00020dac) list_single_number_heading_pane_t1

0x7bf6,	// (0x00020dd4) list_single_number_heading_pane_t2_ParamLimits

0x7bf6,	// (0x00020dd4) list_single_number_heading_pane_t2

0x4762,	// (0x0001d940) list_single_number_heading_pane_t3_ParamLimits

0x4762,	// (0x0001d940) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x000287b6) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x000287b6) list_single_number_heading_pane_t

0x442c,	// (0x0001d60a) list_single_graphic_heading_pane_g1_ParamLimits

0x442c,	// (0x0001d60a) list_single_graphic_heading_pane_g1

0x7c08,	// (0x00020de6) list_single_graphic_heading_pane_g4_ParamLimits

0x7c08,	// (0x00020de6) list_single_graphic_heading_pane_g4

0x3d6e,	// (0x0001cf4c) list_single_graphic_heading_pane_g5_ParamLimits

0x3d6e,	// (0x0001cf4c) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x000287bd) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x000287bd) list_single_graphic_heading_pane_g

0x7bce,	// (0x00020dac) list_single_graphic_heading_pane_t1_ParamLimits

0x7bce,	// (0x00020dac) list_single_graphic_heading_pane_t1

0x7c19,	// (0x00020df7) list_single_graphic_heading_pane_t2_ParamLimits

0x7c19,	// (0x00020df7) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x000287c4) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x000287c4) list_single_graphic_heading_pane_t

0x479e,	// (0x0001d97c) list_single_large_graphic_pane_g1_ParamLimits

0x479e,	// (0x0001d97c) list_single_large_graphic_pane_g1

0x3d62,	// (0x0001cf40) list_single_large_graphic_pane_g2_ParamLimits

0x3d62,	// (0x0001cf40) list_single_large_graphic_pane_g2

0x3d6e,	// (0x0001cf4c) list_single_large_graphic_pane_g3_ParamLimits

0x3d6e,	// (0x0001cf4c) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x000287c9) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x000287c9) list_single_large_graphic_pane_g

0xc67c,	// (0x0002585a) wait_border_pane_g2_copy1

0x7c2b,	// (0x00020e09) list_single_large_graphic_pane_g4_cp2

0x47aa,	// (0x0001d988) list_single_large_graphic_pane_t1_ParamLimits

0x47aa,	// (0x0001d988) list_single_large_graphic_pane_t1

0x7c33,	// (0x00020e11) list_double_pane_g1_ParamLimits

0x7c33,	// (0x00020e11) list_double_pane_g1

0x3de9,	// (0x0001cfc7) list_double_pane_g2_ParamLimits

0x3de9,	// (0x0001cfc7) list_double_pane_g2

0x0001,

0xf5f2,	// (0x000287d0) list_double_pane_g_ParamLimits

0xf5f2,	// (0x000287d0) list_double_pane_g

0x3df5,	// (0x0001cfd3) list_double_pane_t1_ParamLimits

0x3df5,	// (0x0001cfd3) list_double_pane_t1

0x7c3f,	// (0x00020e1d) list_double_pane_t2_ParamLimits

0x7c3f,	// (0x00020e1d) list_double_pane_t2

0x0001,

0xf5f7,	// (0x000287d5) list_double_pane_t_ParamLimits

0xf5f7,	// (0x000287d5) list_double_pane_t

0x7c51,	// (0x00020e2f) list_double2_pane_g1_ParamLimits

0x7c51,	// (0x00020e2f) list_double2_pane_g1

0x3fae,	// (0x0001d18c) list_double2_pane_g2_ParamLimits

0x3fae,	// (0x0001d18c) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x000287da) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x000287da) list_double2_pane_g

0x7c62,	// (0x00020e40) list_double2_pane_t1_ParamLimits

0x7c62,	// (0x00020e40) list_double2_pane_t1

0x7c78,	// (0x00020e56) list_double2_pane_t2_ParamLimits

0x7c78,	// (0x00020e56) list_double2_pane_t2

0x0001,

0xf601,	// (0x000287df) list_double2_pane_t_ParamLimits

0xf601,	// (0x000287df) list_double2_pane_t

0x7c33,	// (0x00020e11) list_double_number_pane_g1_ParamLimits

0x7c33,	// (0x00020e11) list_double_number_pane_g1

0x3de9,	// (0x0001cfc7) list_double_number_pane_g2_ParamLimits

0x3de9,	// (0x0001cfc7) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x000287d0) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x000287d0) list_double_number_pane_g

0x7c8a,	// (0x00020e68) list_double_number_pane_t1_ParamLimits

0x7c8a,	// (0x00020e68) list_double_number_pane_t1

0x3ebe,	// (0x0001d09c) list_double_number_pane_t2_ParamLimits

0x3ebe,	// (0x0001d09c) list_double_number_pane_t2

0x7c9c,	// (0x00020e7a) list_double_number_pane_t3_ParamLimits

0x7c9c,	// (0x00020e7a) list_double_number_pane_t3

0x0002,

0xf606,	// (0x000287e4) list_double_number_pane_t_ParamLimits

0xf606,	// (0x000287e4) list_double_number_pane_t

0x3eb2,	// (0x0001d090) list_double_graphic_pane_g1_ParamLimits

0x3eb2,	// (0x0001d090) list_double_graphic_pane_g1

0x7cae,	// (0x00020e8c) list_double_graphic_pane_g2_ParamLimits

0x7cae,	// (0x00020e8c) list_double_graphic_pane_g2

0x7cbd,	// (0x00020e9b) list_double_graphic_pane_g3_ParamLimits

0x7cbd,	// (0x00020e9b) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x000287eb) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x000287eb) list_double_graphic_pane_g

0x7cd5,	// (0x00020eb3) list_double_graphic_pane_t1_ParamLimits

0x7cd5,	// (0x00020eb3) list_double_graphic_pane_t1

0x7ceb,	// (0x00020ec9) list_double_graphic_pane_t2_ParamLimits

0x7ceb,	// (0x00020ec9) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x000287f4) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x000287f4) list_double_graphic_pane_t

0x7cfd,	// (0x00020edb) list_double2_graphic_pane_g1_ParamLimits

0x7cfd,	// (0x00020edb) list_double2_graphic_pane_g1

0x7c33,	// (0x00020e11) list_double2_graphic_pane_g2_ParamLimits

0x7c33,	// (0x00020e11) list_double2_graphic_pane_g2

0x3de9,	// (0x0001cfc7) list_double2_graphic_pane_g3_ParamLimits

0x3de9,	// (0x0001cfc7) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x000287f9) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x000287f9) list_double2_graphic_pane_g

0x7d09,	// (0x00020ee7) list_double2_graphic_pane_t1_ParamLimits

0x7d09,	// (0x00020ee7) list_double2_graphic_pane_t1

0x7d1f,	// (0x00020efd) list_double2_graphic_pane_t2_ParamLimits

0x7d1f,	// (0x00020efd) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00028800) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00028800) list_double2_graphic_pane_t

0x7d31,	// (0x00020f0f) list_double_large_graphic_pane_g1_ParamLimits

0x7d31,	// (0x00020f0f) list_double_large_graphic_pane_g1

0x7d50,	// (0x00020f2e) list_double_large_graphic_pane_g2_ParamLimits

0x7d50,	// (0x00020f2e) list_double_large_graphic_pane_g2

0x3de9,	// (0x0001cfc7) list_double_large_graphic_pane_g3_ParamLimits

0x3de9,	// (0x0001cfc7) list_double_large_graphic_pane_g3

0x7d61,	// (0x00020f3f) list_double_large_graphic_pane_g4_ParamLimits

0x7d61,	// (0x00020f3f) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00028805) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00028805) list_double_large_graphic_pane_g

0x7d74,	// (0x00020f52) list_double_large_graphic_pane_t1_ParamLimits

0x7d74,	// (0x00020f52) list_double_large_graphic_pane_t1

0x7d8d,	// (0x00020f6b) list_double_large_graphic_pane_t2_ParamLimits

0x7d8d,	// (0x00020f6b) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00028810) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00028810) list_double_large_graphic_pane_t

0x7d9f,	// (0x00020f7d) list_double2_large_graphic_pane_g1_ParamLimits

0x7d9f,	// (0x00020f7d) list_double2_large_graphic_pane_g1

0x7c51,	// (0x00020e2f) list_double2_large_graphic_pane_g2_ParamLimits

0x7c51,	// (0x00020e2f) list_double2_large_graphic_pane_g2

0x3fae,	// (0x0001d18c) list_double2_large_graphic_pane_g3_ParamLimits

0x3fae,	// (0x0001d18c) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00028815) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00028815) list_double2_large_graphic_pane_g

0x7dab,	// (0x00020f89) list_double2_large_graphic_pane_t1_ParamLimits

0x7dab,	// (0x00020f89) list_double2_large_graphic_pane_t1

0x7dc1,	// (0x00020f9f) list_double2_large_graphic_pane_t2_ParamLimits

0x7dc1,	// (0x00020f9f) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002881c) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002881c) list_double2_large_graphic_pane_t

0x7dd3,	// (0x00020fb1) list_double_heading_pane_g1_ParamLimits

0x7dd3,	// (0x00020fb1) list_double_heading_pane_g1

0x7de4,	// (0x00020fc2) list_double_heading_pane_g2_ParamLimits

0x7de4,	// (0x00020fc2) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00028821) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00028821) list_double_heading_pane_g

0x7df0,	// (0x00020fce) list_double_heading_pane_t1_ParamLimits

0x7df0,	// (0x00020fce) list_double_heading_pane_t1

0x7c78,	// (0x00020e56) list_double_heading_pane_t2_ParamLimits

0x7c78,	// (0x00020e56) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00028826) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00028826) list_double_heading_pane_t

0x3eb2,	// (0x0001d090) list_double_graphic_heading_pane_g1_ParamLimits

0x3eb2,	// (0x0001d090) list_double_graphic_heading_pane_g1

0x7dd3,	// (0x00020fb1) list_double_graphic_heading_pane_g2_ParamLimits

0x7dd3,	// (0x00020fb1) list_double_graphic_heading_pane_g2

0x7de4,	// (0x00020fc2) list_double_graphic_heading_pane_g3_ParamLimits

0x7de4,	// (0x00020fc2) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002882b) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002882b) list_double_graphic_heading_pane_g

0x7e06,	// (0x00020fe4) list_double_graphic_heading_pane_t1_ParamLimits

0x7e06,	// (0x00020fe4) list_double_graphic_heading_pane_t1

0x7d1f,	// (0x00020efd) list_double_graphic_heading_pane_t2_ParamLimits

0x7d1f,	// (0x00020efd) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00028832) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00028832) list_double_graphic_heading_pane_t

0x7d50,	// (0x00020f2e) list_double_time_pane_g1_ParamLimits

0x7d50,	// (0x00020f2e) list_double_time_pane_g1

0x3de9,	// (0x0001cfc7) list_double_time_pane_g2_ParamLimits

0x3de9,	// (0x0001cfc7) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00028837) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00028837) list_double_time_pane_g

0x7e1c,	// (0x00020ffa) list_double_time_pane_t1_ParamLimits

0x7e1c,	// (0x00020ffa) list_double_time_pane_t1

0x7e32,	// (0x00021010) list_double_time_pane_t2_ParamLimits

0x7e32,	// (0x00021010) list_double_time_pane_t2

0x7e44,	// (0x00021022) list_double_time_pane_t3_ParamLimits

0x7e44,	// (0x00021022) list_double_time_pane_t3

0x7e56,	// (0x00021034) list_double_time_pane_t4_ParamLimits

0x7e56,	// (0x00021034) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0002883c) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0002883c) list_double_time_pane_t

0x4032,	// (0x0001d210) list_setting_pane_g1_ParamLimits

0x4032,	// (0x0001d210) list_setting_pane_g1

0x3fae,	// (0x0001d18c) list_setting_pane_g2_ParamLimits

0x3fae,	// (0x0001d18c) list_setting_pane_g2

0x0001,

0xf667,	// (0x00028845) list_setting_pane_g_ParamLimits

0xf667,	// (0x00028845) list_setting_pane_g

0x7e68,	// (0x00021046) list_setting_pane_t1_ParamLimits

0x7e68,	// (0x00021046) list_setting_pane_t1

0x7e82,	// (0x00021060) list_setting_pane_t2_ParamLimits

0x7e82,	// (0x00021060) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0002884a) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0002884a) list_setting_pane_t

0x7ebf,	// (0x0002109d) set_value_pane_cp_ParamLimits

0x7ebf,	// (0x0002109d) set_value_pane_cp

0x409e,	// (0x0001d27c) list_setting_number_pane_g1_ParamLimits

0x409e,	// (0x0001d27c) list_setting_number_pane_g1

0x40aa,	// (0x0001d288) list_setting_number_pane_g2_ParamLimits

0x40aa,	// (0x0001d288) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00028851) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00028851) list_setting_number_pane_g

0x7ecb,	// (0x000210a9) list_setting_number_pane_t1_ParamLimits

0x7ecb,	// (0x000210a9) list_setting_number_pane_t1

0x7ee4,	// (0x000210c2) list_setting_number_pane_t2_ParamLimits

0x7ee4,	// (0x000210c2) list_setting_number_pane_t2

0x7efe,	// (0x000210dc) list_setting_number_pane_t3_ParamLimits

0x7efe,	// (0x000210dc) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x00028856) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x00028856) list_setting_number_pane_t

0x7ebf,	// (0x0002109d) set_value_pane_ParamLimits

0x7ebf,	// (0x0002109d) set_value_pane

0xb2bb,	// (0x00024499) bg_set_opt_pane_ParamLimits

0xb2bb,	// (0x00024499) bg_set_opt_pane

0x4124,	// (0x0001d302) set_value_pane_t1

0xb2dc,	// (0x000244ba) slider_set_pane_cp3

0xb2e5,	// (0x000244c3) volume_small_pane_cp

0xb2ee,	// (0x000244cc) list_form_gen_pane

0xb2f7,	// (0x000244d5) scroll_pane_cp8

0x7f41,	// (0x0002111f) form_field_data_pane_ParamLimits

0x7f41,	// (0x0002111f) form_field_data_pane

0x7f58,	// (0x00021136) form_field_data_wide_pane_ParamLimits

0x7f58,	// (0x00021136) form_field_data_wide_pane

0x7f78,	// (0x00021156) form_field_popup_pane_ParamLimits

0x7f78,	// (0x00021156) form_field_popup_pane

0x7f90,	// (0x0002116e) form_field_popup_wide_pane_ParamLimits

0x7f90,	// (0x0002116e) form_field_popup_wide_pane

0x41b6,	// (0x0001d394) form_field_slider_pane_ParamLimits

0x41b6,	// (0x0001d394) form_field_slider_pane

0x41c9,	// (0x0001d3a7) form_field_slider_wide_pane_ParamLimits

0x41c9,	// (0x0001d3a7) form_field_slider_wide_pane

0xb308,	// (0x000244e6) data_form_pane

0x7fb7,	// (0x00021195) form_field_data_pane_t1

0xb314,	// (0x000244f2) input_focus_pane

0x4200,	// (0x0001d3de) data_form_wide_pane

0x421d,	// (0x0001d3fb) form_field_data_wide_pane_t1

0x8a06,	// (0x00021be4) input_focus_pane_cp6

0x7fd1,	// (0x000211af) form_field_popup_pane_t1

0xb314,	// (0x000244f2) input_focus_pane_cp7

0xb336,	// (0x00024514) list_form_pane

0x4261,	// (0x0001d43f) form_field_popup_wide_pane_t1

0xb314,	// (0x000244f2) input_focus_pane_cp8

0xb342,	// (0x00024520) list_form_wide_pane

0x7ff3,	// (0x000211d1) form_field_slider_pane_t1_ParamLimits

0x7ff3,	// (0x000211d1) form_field_slider_pane_t1

0x800b,	// (0x000211e9) form_field_slider_pane_t2_ParamLimits

0x800b,	// (0x000211e9) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x00028866) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x00028866) form_field_slider_pane_t

0x8626,	// (0x00021804) input_focus_pane_cp9_ParamLimits

0x8626,	// (0x00021804) input_focus_pane_cp9

0x8020,	// (0x000211fe) slider_cont_pane_ParamLimits

0x8020,	// (0x000211fe) slider_cont_pane

0xb351,	// (0x0002452f) form_field_slider_wide_pane_t1_ParamLimits

0xb351,	// (0x0002452f) form_field_slider_wide_pane_t1

0x42b8,	// (0x0001d496) form_field_slider_wide_pane_t2_ParamLimits

0x42b8,	// (0x0001d496) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0002886b) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0002886b) form_field_slider_wide_pane_t

0x8626,	// (0x00021804) input_focus_pane_cp10_ParamLimits

0x8626,	// (0x00021804) input_focus_pane_cp10

0x8034,	// (0x00021212) slider_cont_pane_cp1_ParamLimits

0x8034,	// (0x00021212) slider_cont_pane_cp1

0x8048,	// (0x00021226) slider_form_pane_cp

0xb363,	// (0x00024541) input_focus_pane_g1

0xb36b,	// (0x00024549) input_focus_pane_g2

0xb373,	// (0x00024551) input_focus_pane_g3

0xb37b,	// (0x00024559) input_focus_pane_g4

0xb383,	// (0x00024561) input_focus_pane_g5

0xb38b,	// (0x00024569) input_focus_pane_g6

0xb393,	// (0x00024571) input_focus_pane_g7

0xb39b,	// (0x00024579) input_focus_pane_g8

0xb3a3,	// (0x00024581) input_focus_pane_g9

0x83c8,	// (0x000215a6) input_focus_pane_g10

0x0009,

0xf692,	// (0x00028870) input_focus_pane_g

0xc685,	// (0x00025863) wait_border_pane_g3_copy1

0x8050,	// (0x0002122e) data_form_pane_t1

0x83c8,	// (0x000215a6) wait_anim_pane_g1_copy1

0x8187,	// (0x00021365) data_form_wide_pane_t1

0x806a,	// (0x00021248) list_form_graphic_pane_cp_ParamLimits

0x806a,	// (0x00021248) list_form_graphic_pane_cp

0xd359,	// (0x00026537) slider_form_pane_g1

0xd362,	// (0x00026540) slider_form_pane_g2

0x0006,

0xf989,	// (0x00028b67) slider_form_pane_g

0x807d,	// (0x0002125b) list_form_graphic_pane_ParamLimits

0x807d,	// (0x0002125b) list_form_graphic_pane

0x4318,	// (0x0001d4f6) list_form_graphic_pane_g1

0x4320,	// (0x0001d4fe) list_form_graphic_pane_t1_ParamLimits

0x4320,	// (0x0001d4fe) list_form_graphic_pane_t1

0x8644,	// (0x00021822) list_highlight_pane_cp5_ParamLimits

0x8644,	// (0x00021822) list_highlight_pane_cp5

0x808f,	// (0x0002126d) find_pane_g1

0xb3ab,	// (0x00024589) input_find_pane

0x8098,	// (0x00021276) input_find_pane_g1_ParamLimits

0x8098,	// (0x00021276) input_find_pane_g1

0x80a4,	// (0x00021282) input_find_pane_t1_ParamLimits

0x80a4,	// (0x00021282) input_find_pane_t1

0x80b9,	// (0x00021297) input_find_pane_t2_ParamLimits

0x80b9,	// (0x00021297) input_find_pane_t2

0x0001,

0xf6a7,	// (0x00028885) input_find_pane_t_ParamLimits

0xf6a7,	// (0x00028885) input_find_pane_t

0xb3b4,	// (0x00024592) input_focus_pane_cp5_ParamLimits

0xb3b4,	// (0x00024592) input_focus_pane_cp5

0xb3c2,	// (0x000245a0) bg_popup_window_pane_cp2_ParamLimits

0xb3c2,	// (0x000245a0) bg_popup_window_pane_cp2

0xb3cf,	// (0x000245ad) listscroll_menu_pane_ParamLimits

0xb3cf,	// (0x000245ad) listscroll_menu_pane

0x2a75,	// (0x0001bc53) popup_submenu_window_ParamLimits

0x2a75,	// (0x0001bc53) popup_submenu_window

0xb3db,	// (0x000245b9) find_popup_pane_g1

0xb3e3,	// (0x000245c1) input_popup_find_pane_cp

0xb3b4,	// (0x00024592) input_focus_pane_cp4_ParamLimits

0xb3b4,	// (0x00024592) input_focus_pane_cp4

0xb3ed,	// (0x000245cb) input_popup_find_pane_t1_ParamLimits

0xb3ed,	// (0x000245cb) input_popup_find_pane_t1

0x84b8,	// (0x00021696) bg_popup_sub_pane_cp

0xb41b,	// (0x000245f9) listscroll_popup_sub_pane

0xb423,	// (0x00024601) list_submenu_pane_ParamLimits

0xb423,	// (0x00024601) list_submenu_pane

0xb434,	// (0x00024612) scroll_pane_cp4

0xb43c,	// (0x0002461a) list_single_popup_submenu_pane_ParamLimits

0xb43c,	// (0x0002461a) list_single_popup_submenu_pane

0xb450,	// (0x0002462e) list_single_popup_submenu_pane_g1

0xb458,	// (0x00024636) list_single_popup_submenu_pane_t1_ParamLimits

0xb458,	// (0x00024636) list_single_popup_submenu_pane_t1

0x8626,	// (0x00021804) bg_active_tab_pane_cp1_ParamLimits

0x8626,	// (0x00021804) bg_active_tab_pane_cp1

0x2aab,	// (0x0001bc89) tabs_2_active_pane_g1

0x2ab3,	// (0x0001bc91) tabs_2_active_pane_t1

0x8626,	// (0x00021804) bg_passive_tab_pane_cp1_ParamLimits

0x8626,	// (0x00021804) bg_passive_tab_pane_cp1

0x2aab,	// (0x0001bc89) tabs_2_passive_pane_g1

0x2ab3,	// (0x0001bc91) tabs_2_passive_pane_t1

0x8644,	// (0x00021822) bg_active_tab_pane_cp4

0x2ac5,	// (0x0001bca3) tabs_2_long_active_pane_t1

0xb46d,	// (0x0002464b) bg_passive_tab_pane_cp4

0x5dac,	// (0x0001ef8a) list_single_midp_graphic_pane_g4_ParamLimits

0x8644,	// (0x00021822) bg_active_tab_pane_cp5

0x2ad8,	// (0x0001bcb6) tabs_3_long_active_pane_t1

0xb46d,	// (0x0002464b) bg_passive_tab_pane_cp5

0x5dac,	// (0x0001ef8a) list_single_midp_graphic_pane_g4

0x8644,	// (0x00021822) bg_popup_window_pane_cp13_ParamLimits

0x8644,	// (0x00021822) bg_popup_window_pane_cp13

0xb482,	// (0x00024660) listscroll_popup_fast_pane_ParamLimits

0xb482,	// (0x00024660) listscroll_popup_fast_pane

0xb48e,	// (0x0002466c) grid_popup_fast_pane_ParamLimits

0xb48e,	// (0x0002466c) grid_popup_fast_pane

0xb4a0,	// (0x0002467e) scroll_pane_cp9_ParamLimits

0xb4a0,	// (0x0002467e) scroll_pane_cp9

0xe66c,	// (0x0002784a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe66c,	// (0x0002784a) list_single_graphic_hl_pane_t1_cp2

0xb4c4,	// (0x000246a2) input_focus_pane_cp20_ParamLimits

0xb4c4,	// (0x000246a2) input_focus_pane_cp20

0xb4d2,	// (0x000246b0) query_popup_data_pane_t1_ParamLimits

0xb4d2,	// (0x000246b0) query_popup_data_pane_t1

0xb4e5,	// (0x000246c3) query_popup_data_pane_t2_ParamLimits

0xb4e5,	// (0x000246c3) query_popup_data_pane_t2

0xb52b,	// (0x00024709) query_popup_data_pane_t3_ParamLimits

0xb52b,	// (0x00024709) query_popup_data_pane_t3

0xb56c,	// (0x0002474a) query_popup_data_pane_t4_ParamLimits

0xb56c,	// (0x0002474a) query_popup_data_pane_t4

0xb5a8,	// (0x00024786) query_popup_data_pane_t5_ParamLimits

0xb5a8,	// (0x00024786) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0002888a) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0002888a) query_popup_data_pane_t

0xb363,	// (0x00024541) bg_set_opt_pane_g1

0xb36b,	// (0x00024549) bg_set_opt_pane_g2

0xb373,	// (0x00024551) bg_set_opt_pane_g3

0xb37b,	// (0x00024559) bg_set_opt_pane_g4

0xb383,	// (0x00024561) bg_set_opt_pane_g5

0xb38b,	// (0x00024569) bg_set_opt_pane_g6

0xb393,	// (0x00024571) bg_set_opt_pane_g7

0xb39b,	// (0x00024579) bg_set_opt_pane_g8

0xb3a3,	// (0x00024581) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x00028895) bg_set_opt_pane_g

0x5472,	// (0x0001e650) control_top_pane_stacon_ParamLimits

0x5472,	// (0x0001e650) control_top_pane_stacon

0x54c5,	// (0x0001e6a3) signal_pane_stacon_ParamLimits

0x54c5,	// (0x0001e6a3) signal_pane_stacon

0xba0f,	// (0x00024bed) stacon_top_pane_g1_ParamLimits

0xba0f,	// (0x00024bed) stacon_top_pane_g1

0x54ea,	// (0x0001e6c8) title_pane_stacon_ParamLimits

0x54ea,	// (0x0001e6c8) title_pane_stacon

0x5514,	// (0x0001e6f2) uni_indicator_pane_stacon_ParamLimits

0x5514,	// (0x0001e6f2) uni_indicator_pane_stacon

0x5529,	// (0x0001e707) battery_pane_stacon_ParamLimits

0x5529,	// (0x0001e707) battery_pane_stacon

0x556d,	// (0x0001e74b) control_bottom_pane_stacon_ParamLimits

0x556d,	// (0x0001e74b) control_bottom_pane_stacon

0x5590,	// (0x0001e76e) navi_pane_stacon_ParamLimits

0x5590,	// (0x0001e76e) navi_pane_stacon

0xba31,	// (0x00024c0f) stacon_bottom_pane_g1_ParamLimits

0xba31,	// (0x00024c0f) stacon_bottom_pane_g1

0x51dc,	// (0x0001e3ba) aid_levels_signal_lsc_ParamLimits

0x51dc,	// (0x0001e3ba) aid_levels_signal_lsc

0x51f3,	// (0x0001e3d1) signal_pane_stacon_g1_ParamLimits

0x51f3,	// (0x0001e3d1) signal_pane_stacon_g1

0x5207,	// (0x0001e3e5) signal_pane_stacon_g2_ParamLimits

0x5207,	// (0x0001e3e5) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x000288a8) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x000288a8) signal_pane_stacon_g

0x523c,	// (0x0001e41a) title_pane_stacon_t1_ParamLimits

0x523c,	// (0x0001e41a) title_pane_stacon_t1

0xb5ec,	// (0x000247ca) uni_indicator_pane_stacon_g1

0xb5f6,	// (0x000247d4) uni_indicator_pane_stacon_g2

0xb600,	// (0x000247de) uni_indicator_pane_stacon_g3

0xb60a,	// (0x000247e8) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x000288b4) uni_indicator_pane_stacon_g

0x5261,	// (0x0001e43f) control_top_pane_stacon_g1

0x5269,	// (0x0001e447) control_top_pane_stacon_t1_ParamLimits

0x5269,	// (0x0001e447) control_top_pane_stacon_t1

0x52a0,	// (0x0001e47e) aid_levels_battery_lsc_ParamLimits

0x52a0,	// (0x0001e47e) aid_levels_battery_lsc

0x52b8,	// (0x0001e496) battery_pane_stacon_g1_ParamLimits

0x52b8,	// (0x0001e496) battery_pane_stacon_g1

0x52cb,	// (0x0001e4a9) battery_pane_stacon_g2_ParamLimits

0x52cb,	// (0x0001e4a9) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x000288bd) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x000288bd) battery_pane_stacon_g

0x5309,	// (0x0001e4e7) navi_icon_pane_stacon

0x531d,	// (0x0001e4fb) navi_navi_pane_stacon

0x5309,	// (0x0001e4e7) navi_text_pane_stacon

0x5261,	// (0x0001e43f) control_bottom_pane_stacon_g1

0x5331,	// (0x0001e50f) control_bottom_pane_stacon_t1_ParamLimits

0x5331,	// (0x0001e50f) control_bottom_pane_stacon_t1

0x2aea,	// (0x0001bcc8) grid_app_pane_ParamLimits

0x2aea,	// (0x0001bcc8) grid_app_pane

0x2b20,	// (0x0001bcfe) scroll_pane_cp15_ParamLimits

0x2b20,	// (0x0001bcfe) scroll_pane_cp15

0x2b35,	// (0x0001bd13) cell_app_pane_ParamLimits

0x2b35,	// (0x0001bd13) cell_app_pane

0x2b7c,	// (0x0001bd5a) cell_app_pane_g1_ParamLimits

0x2b7c,	// (0x0001bd5a) cell_app_pane_g1

0xb62e,	// (0x0002480c) cell_app_pane_g2_ParamLimits

0xb62e,	// (0x0002480c) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x000288c2) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x000288c2) cell_app_pane_g

0x2b9c,	// (0x0001bd7a) cell_app_pane_t1_ParamLimits

0x2b9c,	// (0x0001bd7a) cell_app_pane_t1

0xb63a,	// (0x00024818) grid_highlight_pane_ParamLimits

0xb63a,	// (0x00024818) grid_highlight_pane

0xb363,	// (0x00024541) cell_highlight_pane_g1

0xb36b,	// (0x00024549) cell_highlight_pane_g2

0xb373,	// (0x00024551) cell_highlight_pane_g3

0xb37b,	// (0x00024559) cell_highlight_pane_g4

0xb383,	// (0x00024561) cell_highlight_pane_g5

0xb38b,	// (0x00024569) cell_highlight_pane_g6

0xb393,	// (0x00024571) cell_highlight_pane_g7

0xb39b,	// (0x00024579) cell_highlight_pane_g8

0xb3a3,	// (0x00024581) cell_highlight_pane_g9

0x83c8,	// (0x000215a6) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00028870) cell_highlight_pane_g

0xb64b,	// (0x00024829) bg_scroll_pane

0x537b,	// (0x0001e559) scroll_handle_pane

0xb692,	// (0x00024870) scroll_bg_pane_g1

0xb6a7,	// (0x00024885) scroll_bg_pane_g2

0xb6bf,	// (0x0002489d) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x000288c7) scroll_bg_pane_g

0xb6d4,	// (0x000248b2) scroll_handle_focus_pane_ParamLimits

0xb6d4,	// (0x000248b2) scroll_handle_focus_pane

0xb692,	// (0x00024870) scroll_handle_pane_g1

0xb6e1,	// (0x000248bf) scroll_handle_pane_g2

0xb6bf,	// (0x0002489d) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x000288ce) scroll_handle_pane_g

0xb3b4,	// (0x00024592) bg_popup_sub_pane_cp21_ParamLimits

0xb3b4,	// (0x00024592) bg_popup_sub_pane_cp21

0xb6f5,	// (0x000248d3) popup_fep_japan_predictive_window_t1_ParamLimits

0xb6f5,	// (0x000248d3) popup_fep_japan_predictive_window_t1

0xb70f,	// (0x000248ed) popup_fep_japan_predictive_window_t2_ParamLimits

0xb70f,	// (0x000248ed) popup_fep_japan_predictive_window_t2

0xb742,	// (0x00024920) popup_fep_japan_predictive_window_t3_ParamLimits

0xb742,	// (0x00024920) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x000288d5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x000288d5) popup_fep_japan_predictive_window_t

0x84b8,	// (0x00021696) bg_popup_sub_pane_cp23

0xb779,	// (0x00024957) listscroll_japin_cand_pane

0xb781,	// (0x0002495f) popup_fep_japan_candidate_window_t1

0xb78f,	// (0x0002496d) candidate_pane_ParamLimits

0xb78f,	// (0x0002496d) candidate_pane

0xb7a1,	// (0x0002497f) scroll_pane_cp30

0xb7a9,	// (0x00024987) list_single_popup_jap_candidate_pane_ParamLimits

0xb7a9,	// (0x00024987) list_single_popup_jap_candidate_pane

0x84b8,	// (0x00021696) list_highlight_pane_cp30

0xb7bd,	// (0x0002499b) list_single_popup_jap_candidate_pane_t1

0xb7cc,	// (0x000249aa) level_1_signal

0xb7d9,	// (0x000249b7) level_2_signal

0xb7e6,	// (0x000249c4) level_3_signal

0xb7f3,	// (0x000249d1) level_4_signal

0xb800,	// (0x000249de) level_5_signal

0xb80d,	// (0x000249eb) level_6_signal

0xb81a,	// (0x000249f8) level_7_signal

0xb7cc,	// (0x000249aa) level_1_battery

0xb7d9,	// (0x000249b7) level_2_battery

0xb7e6,	// (0x000249c4) level_3_battery

0xb7f3,	// (0x000249d1) level_4_battery

0xb800,	// (0x000249de) level_5_battery

0xb80d,	// (0x000249eb) level_6_battery

0xb81a,	// (0x000249f8) level_7_battery

0xb83f,	// (0x00024a1d) list_menu_pane_ParamLimits

0xb83f,	// (0x00024a1d) list_menu_pane

0xb855,	// (0x00024a33) scroll_pane_cp25_ParamLimits

0xb855,	// (0x00024a33) scroll_pane_cp25

0xb86e,	// (0x00024a4c) list_double2_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x00024a4c) list_double2_graphic_pane_cp2

0xb86e,	// (0x00024a4c) list_double2_large_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x00024a4c) list_double2_large_graphic_pane_cp2

0xb86e,	// (0x00024a4c) list_double2_pane_cp2_ParamLimits

0xb86e,	// (0x00024a4c) list_double2_pane_cp2

0xb86e,	// (0x00024a4c) list_double_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x00024a4c) list_double_graphic_pane_cp2

0xb86e,	// (0x00024a4c) list_double_large_graphic_pane_cp2_ParamLimits

0xb86e,	// (0x00024a4c) list_double_large_graphic_pane_cp2

0xb86e,	// (0x00024a4c) list_double_number_pane_cp2_ParamLimits

0xb86e,	// (0x00024a4c) list_double_number_pane_cp2

0xb86e,	// (0x00024a4c) list_double_pane_cp2_ParamLimits

0xb86e,	// (0x00024a4c) list_double_pane_cp2

0x2bc4,	// (0x0001bda2) list_single_2graphic_pane_cp2_ParamLimits

0x2bc4,	// (0x0001bda2) list_single_2graphic_pane_cp2

0x2bc4,	// (0x0001bda2) list_single_graphic_heading_pane_cp2_ParamLimits

0x2bc4,	// (0x0001bda2) list_single_graphic_heading_pane_cp2

0x2bc4,	// (0x0001bda2) list_single_graphic_pane_cp2_ParamLimits

0x2bc4,	// (0x0001bda2) list_single_graphic_pane_cp2

0x2bc4,	// (0x0001bda2) list_single_heading_pane_cp2_ParamLimits

0x2bc4,	// (0x0001bda2) list_single_heading_pane_cp2

0xb87e,	// (0x00024a5c) list_single_large_graphic_pane_cp2_ParamLimits

0xb87e,	// (0x00024a5c) list_single_large_graphic_pane_cp2

0x2bc4,	// (0x0001bda2) list_single_number_heading_pane_cp2_ParamLimits

0x2bc4,	// (0x0001bda2) list_single_number_heading_pane_cp2

0x2bc4,	// (0x0001bda2) list_single_number_pane_cp2_ParamLimits

0x2bc4,	// (0x0001bda2) list_single_number_pane_cp2

0x2bc4,	// (0x0001bda2) list_single_pane_cp2_ParamLimits

0x2bc4,	// (0x0001bda2) list_single_pane_cp2

0xb898,	// (0x00024a76) bg_popup_sub_pane_cp22

0x542a,	// (0x0001e608) popup_side_volume_key_window_g1

0x544e,	// (0x0001e62c) popup_side_volume_key_window_t1

0x546a,	// (0x0001e648) volume_small_pane_cp1

0x8626,	// (0x00021804) bg_popup_sub_pane_cp24_ParamLimits

0x8626,	// (0x00021804) bg_popup_sub_pane_cp24

0xb8ae,	// (0x00024a8c) fep_china_uni_candidate_pane_ParamLimits

0xb8ae,	// (0x00024a8c) fep_china_uni_candidate_pane

0xb8c2,	// (0x00024aa0) fep_china_uni_entry_pane

0xb8d2,	// (0x00024ab0) popup_fep_china_uni_window_g1

0xb8ee,	// (0x00024acc) fep_china_uni_entry_pane_g1

0xb8f6,	// (0x00024ad4) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x00028906) fep_china_uni_entry_pane_g

0xb8fe,	// (0x00024adc) fep_entry_item_pane

0xb908,	// (0x00024ae6) fep_candidate_item_pane

0xb910,	// (0x00024aee) fep_china_uni_candidate_pane_g1

0xb918,	// (0x00024af6) fep_china_uni_candidate_pane_g2

0xb920,	// (0x00024afe) fep_china_uni_candidate_pane_g3

0xb928,	// (0x00024b06) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0002890b) fep_china_uni_candidate_pane_g

0x83c8,	// (0x000215a6) fep_entry_item_pane_g1

0xb930,	// (0x00024b0e) fep_entry_item_pane_t1_ParamLimits

0xb930,	// (0x00024b0e) fep_entry_item_pane_t1

0xb946,	// (0x00024b24) fep_candidate_item_pane_t1_ParamLimits

0xb946,	// (0x00024b24) fep_candidate_item_pane_t1

0xb95b,	// (0x00024b39) fep_candidate_item_pane_t2_ParamLimits

0xb95b,	// (0x00024b39) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x00028914) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x00028914) fep_candidate_item_pane_t

0x8644,	// (0x00021822) list_highlight_pane_cp31_ParamLimits

0x8644,	// (0x00021822) list_highlight_pane_cp31

0xb96d,	// (0x00024b4b) level_1_signal_lsc

0xb976,	// (0x00024b54) level_2_signal_lsc

0xb97f,	// (0x00024b5d) level_3_signal_lsc

0xb988,	// (0x00024b66) level_4_signal_lsc

0xb991,	// (0x00024b6f) level_5_signal_lsc

0xb99a,	// (0x00024b78) level_6_signal_lsc

0xb9a3,	// (0x00024b81) level_7_signal_lsc

0xb9a3,	// (0x00024b81) level_1_battery_lsc

0xb9ac,	// (0x00024b8a) level_2_battery_lsc

0xb9b5,	// (0x00024b93) level_3_battery_lsc

0xb9be,	// (0x00024b9c) level_4_battery_lsc

0xb9c7,	// (0x00024ba5) level_5_battery_lsc

0xb9d0,	// (0x00024bae) level_6_battery_lsc

0xb96d,	// (0x00024b4b) level_7_battery_lsc

0xb9d9,	// (0x00024bb7) scroll_handle_focus_pane_g1

0xb9e2,	// (0x00024bc0) scroll_handle_focus_pane_g2

0xb9eb,	// (0x00024bc9) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00028919) scroll_handle_focus_pane_g

0x80ce,	// (0x000212ac) list_single_2graphic_pane_g1_ParamLimits

0x80ce,	// (0x000212ac) list_single_2graphic_pane_g1

0x7c08,	// (0x00020de6) list_single_2graphic_pane_g2_ParamLimits

0x7c08,	// (0x00020de6) list_single_2graphic_pane_g2

0x3d6e,	// (0x0001cf4c) list_single_2graphic_pane_g3_ParamLimits

0x3d6e,	// (0x0001cf4c) list_single_2graphic_pane_g3

0x80da,	// (0x000212b8) list_single_2graphic_pane_g4_ParamLimits

0x80da,	// (0x000212b8) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00028920) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00028920) list_single_2graphic_pane_g

0x80e6,	// (0x000212c4) list_single_2graphic_pane_t1_ParamLimits

0x80e6,	// (0x000212c4) list_single_2graphic_pane_t1

0x8114,	// (0x000212f2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8114,	// (0x000212f2) list_double2_graphic_large_graphic_pane_g1

0x7c51,	// (0x00020e2f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7c51,	// (0x00020e2f) list_double2_graphic_large_graphic_pane_g2

0x3fae,	// (0x0001d18c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x3fae,	// (0x0001d18c) list_double2_graphic_large_graphic_pane_g3

0x8126,	// (0x00021304) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8126,	// (0x00021304) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00028929) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00028929) list_double2_graphic_large_graphic_pane_g

0x8132,	// (0x00021310) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8132,	// (0x00021310) list_double2_graphic_large_graphic_pane_t1

0x8148,	// (0x00021326) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8148,	// (0x00021326) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00028932) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00028932) list_double2_graphic_large_graphic_pane_t

0xbada,	// (0x00024cb8) popup_fast_swap_window_ParamLimits

0xbada,	// (0x00024cb8) popup_fast_swap_window

0xbaf6,	// (0x00024cd4) popup_side_volume_key_window

0xbb10,	// (0x00024cee) stacon_top_pane

0xbb1a,	// (0x00024cf8) status_pane_ParamLimits

0xbb1a,	// (0x00024cf8) status_pane

0xbb10,	// (0x00024cee) status_small_pane

0x84b8,	// (0x00021696) control_pane

0x84b8,	// (0x00021696) stacon_bottom_pane

0xb2f7,	// (0x000244d5) scroll_pane_cp121

0xb2ee,	// (0x000244cc) set_content_pane

0x2ca0,	// (0x0001be7e) bg_active_tab_pane_g1_cp1

0xb9f4,	// (0x00024bd2) bg_active_tab_pane_g2_cp1

0x2c97,	// (0x0001be75) bg_active_tab_pane_g3_cp1

0x2ca0,	// (0x0001be7e) bg_passive_tab_pane_g1_cp1

0xb9f4,	// (0x00024bd2) bg_passive_tab_pane_g2_cp1

0x2c97,	// (0x0001be75) bg_passive_tab_pane_g3_cp1

0x2cb2,	// (0x0001be90) bg_active_tab_pane_g1_cp2

0xb9f4,	// (0x00024bd2) bg_active_tab_pane_g2_cp2

0x2ca9,	// (0x0001be87) bg_active_tab_pane_g3_cp2

0x2cb2,	// (0x0001be90) bg_passive_tab_pane_g1_cp2

0xb9f4,	// (0x00024bd2) bg_passive_tab_pane_g2_cp2

0x2ca9,	// (0x0001be87) bg_passive_tab_pane_g3_cp2

0xb9fd,	// (0x00024bdb) bg_active_tab_pane_g1_cp3

0xb9f4,	// (0x00024bd2) bg_active_tab_pane_g2_cp3

0xba06,	// (0x00024be4) bg_active_tab_pane_g3_cp3

0xb9fd,	// (0x00024bdb) bg_passive_tab_pane_g1_cp3

0xb9f4,	// (0x00024bd2) bg_passive_tab_pane_g2_cp3

0xba06,	// (0x00024be4) bg_passive_tab_pane_g3_cp3

0x2cc6,	// (0x0001bea4) bg_active_tab_pane_g1_cp4

0xb9f4,	// (0x00024bd2) bg_active_tab_pane_g2_cp4

0x2cbb,	// (0x0001be99) bg_active_tab_pane_g3_cp4

0x2cc6,	// (0x0001bea4) bg_passive_tab_pane_g1_cp4

0xb9f4,	// (0x00024bd2) bg_passive_tab_pane_g2_cp4

0x2cbb,	// (0x0001be99) bg_passive_tab_pane_g3_cp4

0xba4d,	// (0x00024c2b) bg_active_tab_pane_g1_cp5

0xb9f4,	// (0x00024bd2) bg_active_tab_pane_g2_cp5

0xba56,	// (0x00024c34) bg_active_tab_pane_g3_cp5

0xba4d,	// (0x00024c2b) bg_passive_tab_pane_g1_cp5

0xb9f4,	// (0x00024bd2) bg_passive_tab_pane_g2_cp5

0xba56,	// (0x00024c34) bg_passive_tab_pane_g3_cp5

0xd2f8,	// (0x000264d6) list_set_graphic_pane_ParamLimits

0xd2f8,	// (0x000264d6) list_set_graphic_pane

0x84b8,	// (0x00021696) bg_set_opt_pane_cp4

0xba5f,	// (0x00024c3d) list_set_graphic_pane_g1_ParamLimits

0xba5f,	// (0x00024c3d) list_set_graphic_pane_g1

0xba6b,	// (0x00024c49) list_set_graphic_pane_g2_ParamLimits

0xba6b,	// (0x00024c49) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x00028937) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x00028937) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x00028cb3) volume_small_pane_cp_g

0xba8d,	// (0x00024c6b) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xba8d,	// (0x00024c6b) list_double2_large_graphic_pane_g1_cp2

0xba99,	// (0x00024c77) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xba99,	// (0x00024c77) list_double2_large_graphic_pane_g2_cp2

0xbaaa,	// (0x00024c88) list_double2_large_graphic_pane_g3_cp2

0xbab2,	// (0x00024c90) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbab2,	// (0x00024c90) list_double2_large_graphic_pane_t1_cp2

0xbac8,	// (0x00024ca6) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbac8,	// (0x00024ca6) list_double2_large_graphic_pane_t2_cp2

0xd0a4,	// (0x00026282) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd0a4,	// (0x00026282) list_double_large_graphic_pane_g1_cp2

0xd0b5,	// (0x00026293) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd0b5,	// (0x00026293) list_double_large_graphic_pane_g2_cp2

0xbc36,	// (0x00024e14) list_double_large_graphic_pane_g3_cp2

0xd0c6,	// (0x000262a4) list_double_large_graphic_pane_g4_cp

0xd0ce,	// (0x000262ac) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd0ce,	// (0x000262ac) list_double_large_graphic_pane_t1_cp2

0xd0e5,	// (0x000262c3) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd0e5,	// (0x000262c3) list_double_large_graphic_pane_t2_cp2

0xbb28,	// (0x00024d06) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbb28,	// (0x00024d06) list_double2_graphic_pane_g1_cp2

0xbb36,	// (0x00024d14) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbb36,	// (0x00024d14) list_double2_graphic_pane_g2_cp2

0xbb47,	// (0x00024d25) list_double2_graphic_pane_g3_cp2

0xbb51,	// (0x00024d2f) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbb51,	// (0x00024d2f) list_double2_graphic_pane_t1_cp2

0xbb67,	// (0x00024d45) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbb67,	// (0x00024d45) list_double2_graphic_pane_t2_cp2

0xbb79,	// (0x00024d57) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbb79,	// (0x00024d57) list_single_number_heading_pane_g1_cp2

0xbb85,	// (0x00024d63) list_single_number_heading_pane_g2_cp2

0xbb8d,	// (0x00024d6b) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbb8d,	// (0x00024d6b) list_single_number_heading_pane_t1_cp2

0xbba3,	// (0x00024d81) list_single_number_heading_pane_t2_cp2_ParamLimits

0xbba3,	// (0x00024d81) list_single_number_heading_pane_t2_cp2

0xbbb5,	// (0x00024d93) list_single_number_heading_pane_t3_cp2_ParamLimits

0xbbb5,	// (0x00024d93) list_single_number_heading_pane_t3_cp2

0xbb79,	// (0x00024d57) list_single_heading_pane_g1_cp2_ParamLimits

0xbb79,	// (0x00024d57) list_single_heading_pane_g1_cp2

0xbb85,	// (0x00024d63) list_single_heading_pane_g2_cp2

0xbb8d,	// (0x00024d6b) list_single_heading_pane_t1_cp2_ParamLimits

0xbb8d,	// (0x00024d6b) list_single_heading_pane_t1_cp2

0xceae,	// (0x0002608c) list_single_heading_pane_t2_cp2_ParamLimits

0xceae,	// (0x0002608c) list_single_heading_pane_t2_cp2

0xcdf6,	// (0x00025fd4) list_double_graphic_pane_g1_cp2_ParamLimits

0xcdf6,	// (0x00025fd4) list_double_graphic_pane_g1_cp2

0xce02,	// (0x00025fe0) list_double_graphic_pane_g2_cp2_ParamLimits

0xce02,	// (0x00025fe0) list_double_graphic_pane_g2_cp2

0xce11,	// (0x00025fef) list_double_graphic_pane_g3_cp2

0xce19,	// (0x00025ff7) list_double_graphic_pane_t1_cp2_ParamLimits

0xce19,	// (0x00025ff7) list_double_graphic_pane_t1_cp2

0xce2f,	// (0x0002600d) list_double_graphic_pane_t2_cp2_ParamLimits

0xce2f,	// (0x0002600d) list_double_graphic_pane_t2_cp2

0xbc2a,	// (0x00024e08) list_double_number_pane_g1_cp2_ParamLimits

0xbc2a,	// (0x00024e08) list_double_number_pane_g1_cp2

0xbc36,	// (0x00024e14) list_double_number_pane_g2_cp2

0xcdba,	// (0x00025f98) list_double_number_pane_t1_cp2_ParamLimits

0xcdba,	// (0x00025f98) list_double_number_pane_t1_cp2

0xcdce,	// (0x00025fac) list_double_number_pane_t2_cp2_ParamLimits

0xcdce,	// (0x00025fac) list_double_number_pane_t2_cp2

0xcde4,	// (0x00025fc2) list_double_number_pane_t3_cp2_ParamLimits

0xcde4,	// (0x00025fc2) list_double_number_pane_t3_cp2

0xcd23,	// (0x00025f01) list_single_graphic_pane_g1_cp2_ParamLimits

0xcd23,	// (0x00025f01) list_single_graphic_pane_g1_cp2

0x8c3e,	// (0x00021e1c) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c3e,	// (0x00021e1c) list_single_graphic_pane_g2_cp2

0xbc8e,	// (0x00024e6c) list_single_graphic_pane_g3_cp2

0xccf9,	// (0x00025ed7) list_single_graphic_pane_t1_cp2_ParamLimits

0xccf9,	// (0x00025ed7) list_single_graphic_pane_t1_cp2

0x8c3e,	// (0x00021e1c) list_single_number_pane_g1_cp2_ParamLimits

0x8c3e,	// (0x00021e1c) list_single_number_pane_g1_cp2

0xbc8e,	// (0x00024e6c) list_single_number_pane_g2_cp2

0xccf9,	// (0x00025ed7) list_single_number_pane_t1_cp2_ParamLimits

0xccf9,	// (0x00025ed7) list_single_number_pane_t1_cp2

0xcd0f,	// (0x00025eed) list_single_number_pane_t2_cp2_ParamLimits

0xcd0f,	// (0x00025eed) list_single_number_pane_t2_cp2

0xba99,	// (0x00024c77) list_double2_pane_g1_cp2_ParamLimits

0xba99,	// (0x00024c77) list_double2_pane_g1_cp2

0xbaaa,	// (0x00024c88) list_double2_pane_g2_cp2

0xbc02,	// (0x00024de0) list_double2_pane_t1_cp2_ParamLimits

0xbc02,	// (0x00024de0) list_double2_pane_t1_cp2

0xbc18,	// (0x00024df6) list_double2_pane_t2_cp2_ParamLimits

0xbc18,	// (0x00024df6) list_double2_pane_t2_cp2

0xbc2a,	// (0x00024e08) list_double_pane_g1_cp2_ParamLimits

0xbc2a,	// (0x00024e08) list_double_pane_g1_cp2

0xbc36,	// (0x00024e14) list_double_pane_g2_cp2

0xbc3e,	// (0x00024e1c) list_double_pane_t1_cp2_ParamLimits

0xbc3e,	// (0x00024e1c) list_double_pane_t1_cp2

0xbc54,	// (0x00024e32) list_double_pane_t2_cp2_ParamLimits

0xbc54,	// (0x00024e32) list_double_pane_t2_cp2

0xbc7e,	// (0x00024e5c) list_single_pane_cp2_g3

0x8c3e,	// (0x00021e1c) list_single_pane_g1_cp2_ParamLimits

0x8c3e,	// (0x00021e1c) list_single_pane_g1_cp2

0xbc8e,	// (0x00024e6c) list_single_pane_g2_cp2

0xbc96,	// (0x00024e74) list_single_pane_t1_cp2_ParamLimits

0xbc96,	// (0x00024e74) list_single_pane_t1_cp2

0xbcae,	// (0x00024e8c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xbcae,	// (0x00024e8c) list_single_large_graphic_pane_g1_cp2

0xbcba,	// (0x00024e98) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xbcba,	// (0x00024e98) list_single_large_graphic_pane_g2_cp2

0xbcc6,	// (0x00024ea4) list_single_large_graphic_pane_g3_cp2

0xbcce,	// (0x00024eac) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xbcce,	// (0x00024eac) list_single_large_graphic_pane_g4_cp1

0xbce8,	// (0x00024ec6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xbce8,	// (0x00024ec6) list_single_large_graphic_pane_t1_cp2

0xccc5,	// (0x00025ea3) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xccc5,	// (0x00025ea3) list_single_graphic_heading_pane_g1_cp2

0xcc92,	// (0x00025e70) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xcc92,	// (0x00025e70) list_single_graphic_heading_pane_g4_cp2

0xbc8e,	// (0x00024e6c) list_single_graphic_heading_pane_g5_cp2

0xccd1,	// (0x00025eaf) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xccd1,	// (0x00025eaf) list_single_graphic_heading_pane_t1_cp2

0xcce7,	// (0x00025ec5) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xcce7,	// (0x00025ec5) list_single_graphic_heading_pane_t2_cp2

0xcc86,	// (0x00025e64) list_single_2graphic_pane_g1_cp2_ParamLimits

0xcc86,	// (0x00025e64) list_single_2graphic_pane_g1_cp2

0xcc92,	// (0x00025e70) list_single_2graphic_pane_g2_cp2_ParamLimits

0xcc92,	// (0x00025e70) list_single_2graphic_pane_g2_cp2

0xbc8e,	// (0x00024e6c) list_single_2graphic_pane_g3_cp2

0xcca3,	// (0x00025e81) list_single_2graphic_pane_g4_cp2_ParamLimits

0xcca3,	// (0x00025e81) list_single_2graphic_pane_g4_cp2

0xccaf,	// (0x00025e8d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xccaf,	// (0x00025e8d) list_single_2graphic_pane_t1_cp2

0x83c8,	// (0x000215a6) list_highlight_pane_g10_cp1

0xc87c,	// (0x00025a5a) list_highlight_pane_g1_cp1

0xc884,	// (0x00025a62) list_highlight_pane_g2_cp1

0xc88c,	// (0x00025a6a) list_highlight_pane_g3_cp1

0xc894,	// (0x00025a72) list_highlight_pane_g4_cp1

0xc89c,	// (0x00025a7a) list_highlight_pane_g5_cp1

0xc8a4,	// (0x00025a82) list_highlight_pane_g6_cp1

0xc8ac,	// (0x00025a8a) list_highlight_pane_g7_cp1

0xc8b4,	// (0x00025a92) list_highlight_pane_g8_cp1

0xc8bc,	// (0x00025a9a) list_highlight_pane_g9_cp1

0x327f,	// (0x0001c45d) form_field_slider_pane_t3

0x328f,	// (0x0001c46d) form_field_slider_pane_t4

0xc7b0,	// (0x0002598e) slider_form_pane_ParamLimits

0xc7b0,	// (0x0002598e) slider_form_pane

0x84b8,	// (0x00021696) control_abbreviations

0x84b8,	// (0x00021696) control_conventions

0x84b8,	// (0x00021696) control_definitions

0x84b8,	// (0x00021696) format_table_attribute

0xcef8,	// (0x000260d6) bg_popup_preview_window_pane_g9

0x84b8,	// (0x00021696) format_table_data2

0x84b8,	// (0x00021696) format_table_data3

0x84b8,	// (0x00021696) format_table_data_example

0x0008,

0x84b8,	// (0x00021696) intro_purpose

0xf8e9,	// (0x00028ac7) bg_popup_preview_window_pane_g

0x84b8,	// (0x00021696) texts_category

0x84b8,	// (0x00021696) texts_graphics

0xbcfe,	// (0x00024edc) text_digital

0xbd0d,	// (0x00024eeb) text_primary

0xbd1c,	// (0x00024efa) text_primary_small

0xbd2b,	// (0x00024f09) text_secondary

0xbd3a,	// (0x00024f18) text_title

0xd3f6,	// (0x000265d4) bg_passive_tab_pane_g1_cp3_srt

0xb9f4,	// (0x00024bd2) bg_passive_tab_pane_g2_cp3_srt

0xd3ff,	// (0x000265dd) bg_passive_tab_pane_g3_cp3_srt

0x8626,	// (0x00021804) bg_active_tab_pane_cp3_srt_ParamLimits

0x8626,	// (0x00021804) bg_active_tab_pane_cp3_srt

0xd408,	// (0x000265e6) tabs_4_active_pane_srt_g1

0x98d5,	// (0x00022ab3) tabs_4_active_pane_srt_t1_ParamLimits

0x98d5,	// (0x00022ab3) tabs_4_active_pane_srt_t1

0xd3f6,	// (0x000265d4) bg_active_tab_pane_g1_cp3_copy1

0xb9f4,	// (0x00024bd2) bg_active_tab_pane_g2_cp3_copy1

0xd3ff,	// (0x000265dd) bg_active_tab_pane_g3_cp3_copy1

0x8644,	// (0x00021822) tabs_2_long_active_pane_srt_ParamLimits

0x8644,	// (0x00021822) tabs_2_long_active_pane_srt

0x8644,	// (0x00021822) tabs_2_long_passive_pane_srt_ParamLimits

0x8644,	// (0x00021822) tabs_2_long_passive_pane_srt

0xb46d,	// (0x0002464b) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb46d,	// (0x0002464b) bg_passive_tab_pane_cp4_srt

0xd297,	// (0x00026475) bg_passive_tab_pane_g1_cp4_srt

0xb9f4,	// (0x00024bd2) bg_passive_tab_pane_g2_cp4_srt

0xd2a0,	// (0x0002647e) bg_passive_tab_pane_g3_cp4_srt

0x8644,	// (0x00021822) bg_active_tab_pane_cp4_srt_ParamLimits

0x8644,	// (0x00021822) bg_active_tab_pane_cp4_srt

0x9702,	// (0x000228e0) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9702,	// (0x000228e0) tabs_2_long_active_pane_srt_t1

0xd297,	// (0x00026475) bg_active_tab_pane_g1_cp4_srt

0xb9f4,	// (0x00024bd2) bg_active_tab_pane_g2_cp4_srt

0xd2a0,	// (0x0002647e) bg_active_tab_pane_g3_cp4_srt

0x8626,	// (0x00021804) tabs_3_long_active_pane_srt_ParamLimits

0x8626,	// (0x00021804) tabs_3_long_active_pane_srt

0x8626,	// (0x00021804) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8626,	// (0x00021804) tabs_3_long_passive_pane_cp_srt

0x8626,	// (0x00021804) tabs_3_long_passive_pane_srt_ParamLimits

0x8626,	// (0x00021804) tabs_3_long_passive_pane_srt

0xb46d,	// (0x0002464b) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb46d,	// (0x0002464b) bg_passive_tab_pane_cp5_srt

0xba4d,	// (0x00024c2b) bg_passive_tab_pane_g1_cp5_srt

0xb9f4,	// (0x00024bd2) bg_passive_tab_pane_g2_cp5_srt

0xba56,	// (0x00024c34) bg_passive_tab_pane_g3_cp5_srt

0x8644,	// (0x00021822) bg_active_tab_pane_cp5_srt_ParamLimits

0x8644,	// (0x00021822) bg_active_tab_pane_cp5_srt

0x96ec,	// (0x000228ca) tabs_3_long_active_pane_srt_t1_ParamLimits

0x96ec,	// (0x000228ca) tabs_3_long_active_pane_srt_t1

0xba4d,	// (0x00024c2b) bg_active_tab_pane_g1_cp5_srt

0xb9f4,	// (0x00024bd2) bg_active_tab_pane_g2_cp5_srt

0xba56,	// (0x00024c34) bg_active_tab_pane_g3_cp5_srt

0xd289,	// (0x00026467) navi_text_pane_srt_t1

0xd281,	// (0x0002645f) navi_icon_pane_srt_g1

0xbe4a,	// (0x00025028) midp_editing_number_pane_srt

0xbd49,	// (0x00024f27) midp_ticker_pane_srt

0xbe52,	// (0x00025030) midp_ticker_pane_srt_g1

0xbe5a,	// (0x00025038) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x00028956) midp_ticker_pane_srt_g

0xbe62,	// (0x00025040) midp_ticker_pane_srt_t1

0xd272,	// (0x00026450) midp_editing_number_pane_t1_copy1

0xb46d,	// (0x0002464b) listscroll_midp_pane

0xb46d,	// (0x0002464b) midp_form_pane

0xbd51,	// (0x00024f2f) midp_info_popup_window_ParamLimits

0xbd51,	// (0x00024f2f) midp_info_popup_window

0xb3b4,	// (0x00024592) bg_popup_sub_pane_cp50_ParamLimits

0xb3b4,	// (0x00024592) bg_popup_sub_pane_cp50

0xc4cd,	// (0x000256ab) listscroll_midp_info_pane_ParamLimits

0xc4cd,	// (0x000256ab) listscroll_midp_info_pane

0xc4b5,	// (0x00025693) listscroll_form_midp_pane_ParamLimits

0xc4b5,	// (0x00025693) listscroll_form_midp_pane

0xc4c1,	// (0x0002569f) scroll_bar_cp050

0x3273,	// (0x0001c451) list_midp_pane

0xdcff,	// (0x00026edd) signal_pane_g2_cp

0xc3e7,	// (0x000255c5) listscroll_midp_info_pane_t1_ParamLimits

0xc3e7,	// (0x000255c5) listscroll_midp_info_pane_t1

0xc3ff,	// (0x000255dd) listscroll_midp_info_pane_t2_ParamLimits

0xc3ff,	// (0x000255dd) listscroll_midp_info_pane_t2

0xc43d,	// (0x0002561b) listscroll_midp_info_pane_t3_ParamLimits

0xc43d,	// (0x0002561b) listscroll_midp_info_pane_t3

0xc477,	// (0x00025655) listscroll_midp_info_pane_t4_ParamLimits

0xc477,	// (0x00025655) listscroll_midp_info_pane_t4

0x0003,

0xf824,	// (0x00028a02) listscroll_midp_info_pane_t_ParamLimits

0xf824,	// (0x00028a02) listscroll_midp_info_pane_t

0xb434,	// (0x00024612) scroll_pane_cp21

0xc389,	// (0x00025567) form_midp_field_choice_group_pane

0xc392,	// (0x00025570) form_midp_field_text_pane

0xc3cd,	// (0x000255ab) form_midp_field_time_pane

0xc3d5,	// (0x000255b3) form_midp_gauge_slider_pane

0xc3de,	// (0x000255bc) form_midp_gauge_wait_pane

0x84b8,	// (0x00021696) form_midp_image_pane

0x815a,	// (0x00021338) list_single_midp_pane_ParamLimits

0x815a,	// (0x00021338) list_single_midp_pane

0x3236,	// (0x0001c414) form_midp_field_text_pane_t1

0xc20b,	// (0x000253e9) input_focus_pane_cp050

0xc378,	// (0x00025556) list_midp_form_text_pane

0xc347,	// (0x00025525) form_midp_field_choice_group_pane_t1

0xc355,	// (0x00025533) input_focus_pane_cp051

0xc369,	// (0x00025547) list_midp_choice_pane

0x84b8,	// (0x00021696) status_idle_pane

0xc32b,	// (0x00025509) form_midp_field_time_pane_t1

0x83c8,	// (0x000215a6) wait_anim_pane_g2_copy1

0xc339,	// (0x00025517) form_midp_field_time_pane_t2

0x0001,

0xbdbc,	// (0x00024f9a) aid_navinavi_width_2_pane

0xf81f,	// (0x000289fd) form_midp_field_time_pane_t

0x84b8,	// (0x00021696) input_focus_pane_cp052

0x84b8,	// (0x00021696) bg_input_focus_pane_cp040

0xc307,	// (0x000254e5) form_midp_gauge_slider_pane_t1

0xc315,	// (0x000254f3) form_midp_gauge_slider_pane_t2

0x3216,	// (0x0001c3f4) form_midp_gauge_slider_pane_t3

0x3226,	// (0x0001c404) form_midp_gauge_slider_pane_t4

0x0003,

0xf816,	// (0x000289f4) form_midp_gauge_slider_pane_t

0xc323,	// (0x00025501) form_midp_slider_pane

0x8644,	// (0x00021822) bg_input_focus_pane_cp041_ParamLimits

0x8644,	// (0x00021822) bg_input_focus_pane_cp041

0xc2d4,	// (0x000254b2) form_midp_gauge_wait_pane_t1_ParamLimits

0xc2d4,	// (0x000254b2) form_midp_gauge_wait_pane_t1

0xc2e6,	// (0x000254c4) form_midp_gauge_wait_pane_t2_ParamLimits

0xc2e6,	// (0x000254c4) form_midp_gauge_wait_pane_t2

0x0001,

0xf811,	// (0x000289ef) form_midp_gauge_wait_pane_t_ParamLimits

0xf811,	// (0x000289ef) form_midp_gauge_wait_pane_t

0xc2f8,	// (0x000254d6) form_midp_wait_pane_ParamLimits

0xc2f8,	// (0x000254d6) form_midp_wait_pane

0xc29e,	// (0x0002547c) form_midp_image_pane_g1

0xc2a7,	// (0x00025485) form_midp_image_pane_t1

0xc2b6,	// (0x00025494) form_midp_image_pane_t2

0xc2c5,	// (0x000254a3) form_midp_image_pane_t3

0x0002,

0xf80a,	// (0x000289e8) form_midp_image_pane_t

0xc295,	// (0x00025473) list_single_midp_pane_g1

0x4536,	// (0x0001d714) list_single_midp_pane_t1

0x3200,	// (0x0001c3de) list_midp_form_item_pane_ParamLimits

0x3200,	// (0x0001c3de) list_midp_form_item_pane

0xbd64,	// (0x00024f42) list_midp_form_item_pane_t1

0xbd73,	// (0x00024f51) midp_ticker_pane_g1

0xbd7f,	// (0x00024f5d) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0002893c) midp_ticker_pane_g

0xbd8b,	// (0x00024f69) midp_ticker_pane_t1

0xd39d,	// (0x0002657b) midp_editing_number_pane_t1

0xd37b,	// (0x00026559) midp_editing_number_pane

0xd38a,	// (0x00026568) midp_ticker_pane

0xd262,	// (0x00026440) ai_message_heading_pane

0x84b8,	// (0x00021696) bg_popup_window_pane_cp14

0xd26a,	// (0x00026448) listscroll_ai_message_pane

0xd1ec,	// (0x000263ca) ai_message_heading_pane_g1_ParamLimits

0xd1ec,	// (0x000263ca) ai_message_heading_pane_g1

0xd1f8,	// (0x000263d6) ai_message_heading_pane_g2_ParamLimits

0xd1f8,	// (0x000263d6) ai_message_heading_pane_g2

0xd204,	// (0x000263e2) ai_message_heading_pane_g3_ParamLimits

0xd204,	// (0x000263e2) ai_message_heading_pane_g3

0xd210,	// (0x000263ee) ai_message_heading_pane_g4_ParamLimits

0xd210,	// (0x000263ee) ai_message_heading_pane_g4

0x0003,

0xf94b,	// (0x00028b29) ai_message_heading_pane_g_ParamLimits

0xf94b,	// (0x00028b29) ai_message_heading_pane_g

0xd21c,	// (0x000263fa) ai_message_heading_pane_t1_ParamLimits

0xd21c,	// (0x000263fa) ai_message_heading_pane_t1

0xd236,	// (0x00026414) ai_message_heading_pane_t2_ParamLimits

0xd236,	// (0x00026414) ai_message_heading_pane_t2

0x0001,

0xf954,	// (0x00028b32) ai_message_heading_pane_t_ParamLimits

0xf954,	// (0x00028b32) ai_message_heading_pane_t

0xd248,	// (0x00026426) bg_popup_heading_pane_cp1_ParamLimits

0xd248,	// (0x00026426) bg_popup_heading_pane_cp1

0xd1da,	// (0x000263b8) list_ai_message_pane_ParamLimits

0xd1da,	// (0x000263b8) list_ai_message_pane

0xb434,	// (0x00024612) scroll_pane_cp10

0xd176,	// (0x00026354) list_ai_message_pane_g1

0xd17e,	// (0x0002635c) list_ai_message_pane_g2

0x0001,

0xf928,	// (0x00028b06) list_ai_message_pane_g

0xd186,	// (0x00026364) list_ai_message_pane_t1_ParamLimits

0xd186,	// (0x00026364) list_ai_message_pane_t1

0xd19b,	// (0x00026379) list_ai_message_pane_t2_ParamLimits

0xd19b,	// (0x00026379) list_ai_message_pane_t2

0xd1b0,	// (0x0002638e) list_ai_message_pane_t3_ParamLimits

0xd1b0,	// (0x0002638e) list_ai_message_pane_t3

0xd1c5,	// (0x000263a3) list_ai_message_pane_t4_ParamLimits

0xd1c5,	// (0x000263a3) list_ai_message_pane_t4

0x0003,

0xf92d,	// (0x00028b0b) list_ai_message_pane_t_ParamLimits

0xf92d,	// (0x00028b0b) list_ai_message_pane_t

0x96ca,	// (0x000228a8) cell_ai_soft_ind_pane_ParamLimits

0x96ca,	// (0x000228a8) cell_ai_soft_ind_pane

0xbd9d,	// (0x00024f7b) cell_ai_soft_ind_pane_g1_ParamLimits

0xbd9d,	// (0x00024f7b) cell_ai_soft_ind_pane_g1

0x84b8,	// (0x00021696) grid_highlight_cp1

0xbdaa,	// (0x00024f88) text_secondary_cp56_ParamLimits

0xbdaa,	// (0x00024f88) text_secondary_cp56

0xd14b,	// (0x00026329) example_general_pane_ParamLimits

0xd14b,	// (0x00026329) example_general_pane

0xd157,	// (0x00026335) example_parent_pane_g1_ParamLimits

0xd157,	// (0x00026335) example_parent_pane_g1

0xd163,	// (0x00026341) example_parent_pane_t1_ParamLimits

0xd163,	// (0x00026341) example_parent_pane_t1

0x9195,	// (0x00022373) popup_preview_text_window_ParamLimits

0x9195,	// (0x00022373) popup_preview_text_window

0xbc86,	// (0x00024e64) list_single_pane_cp2_g4

0x8813,	// (0x000219f1) bg_popup_preview_window_pane_ParamLimits

0x8813,	// (0x000219f1) bg_popup_preview_window_pane

0xcf00,	// (0x000260de) popup_preview_text_window_t1_ParamLimits

0xcf00,	// (0x000260de) popup_preview_text_window_t1

0xcf1e,	// (0x000260fc) popup_preview_text_window_t2_ParamLimits

0xcf1e,	// (0x000260fc) popup_preview_text_window_t2

0xcf67,	// (0x00026145) popup_preview_text_window_t3_ParamLimits

0xcf67,	// (0x00026145) popup_preview_text_window_t3

0xcfac,	// (0x0002618a) popup_preview_text_window_t4_ParamLimits

0xcfac,	// (0x0002618a) popup_preview_text_window_t4

0x0004,

0xf8fc,	// (0x00028ada) popup_preview_text_window_t_ParamLimits

0xf8fc,	// (0x00028ada) popup_preview_text_window_t

0xd02a,	// (0x00026208) scroll_pane_cp11

0xc197,	// (0x00025375) bg_popup_preview_window_pane_g1

0xcec0,	// (0x0002609e) bg_popup_preview_window_pane_g2

0xcec8,	// (0x000260a6) bg_popup_preview_window_pane_g3

0xced0,	// (0x000260ae) bg_popup_preview_window_pane_g4

0xced8,	// (0x000260b6) bg_popup_preview_window_pane_g5

0xcee0,	// (0x000260be) bg_popup_preview_window_pane_g6

0xcee8,	// (0x000260c6) bg_popup_preview_window_pane_g7

0xcef0,	// (0x000260ce) bg_popup_preview_window_pane_g8

0x4d76,	// (0x0001df54) aid_popup_width_pane

0x9111,	// (0x000222ef) popup_midp_note_alarm_window_ParamLimits

0x9111,	// (0x000222ef) popup_midp_note_alarm_window

0xb308,	// (0x000244e6) data_form_pane_ParamLimits

0x7fad,	// (0x0002118b) form_field_data_pane_g1

0x7fb7,	// (0x00021195) form_field_data_pane_t1_ParamLimits

0xb314,	// (0x000244f2) input_focus_pane_ParamLimits

0x4200,	// (0x0001d3de) data_form_wide_pane_ParamLimits

0x4211,	// (0x0001d3ef) form_field_data_wide_pane_g1

0x421d,	// (0x0001d3fb) form_field_data_wide_pane_t1_ParamLimits

0x8a06,	// (0x00021be4) input_focus_pane_cp6_ParamLimits

0x2a9d,	// (0x0001bc7b) input_popup_find_pane_g1_ParamLimits

0x2a9d,	// (0x0001bc7b) input_popup_find_pane_g1

0x52dc,	// (0x0001e4ba) aid_navi_side_left_pane

0x52f1,	// (0x0001e4cf) aid_navi_side_right_pane

0xc959,	// (0x00025b37) bg_popup_window_pane_cp30_ParamLimits

0xc959,	// (0x00025b37) bg_popup_window_pane_cp30

0xc9d3,	// (0x00025bb1) popup_midp_note_alarm_window_g1_ParamLimits

0xc9d3,	// (0x00025bb1) popup_midp_note_alarm_window_g1

0xca03,	// (0x00025be1) popup_midp_note_alarm_window_t1_ParamLimits

0xca03,	// (0x00025be1) popup_midp_note_alarm_window_t1

0xcaa4,	// (0x00025c82) popup_midp_note_alarm_window_t2_ParamLimits

0xcaa4,	// (0x00025c82) popup_midp_note_alarm_window_t2

0xcb52,	// (0x00025d30) popup_midp_note_alarm_window_t3_ParamLimits

0xcb52,	// (0x00025d30) popup_midp_note_alarm_window_t3

0xcb84,	// (0x00025d62) popup_midp_note_alarm_window_t4_ParamLimits

0xcb84,	// (0x00025d62) popup_midp_note_alarm_window_t4

0xcbaa,	// (0x00025d88) popup_midp_note_alarm_window_t5_ParamLimits

0xcbaa,	// (0x00025d88) popup_midp_note_alarm_window_t5

0x000a,

0xf899,	// (0x00028a77) popup_midp_note_alarm_window_t_ParamLimits

0xf899,	// (0x00028a77) popup_midp_note_alarm_window_t

0xcc56,	// (0x00025e34) wait_bar_pane_cp1_ParamLimits

0xcc56,	// (0x00025e34) wait_bar_pane_cp1

0x84b8,	// (0x00021696) wait_anim_pane_copy1

0x84b8,	// (0x00021696) wait_border_pane_copy1

0xc671,	// (0x0002584f) wait_border_pane_g1_copy1

0x4237,	// (0x0001d415) form_field_popup_pane_g1

0x7fd1,	// (0x000211af) form_field_popup_pane_t1_ParamLimits

0xb314,	// (0x000244f2) input_focus_pane_cp7_ParamLimits

0xb336,	// (0x00024514) list_form_pane_ParamLimits

0x4259,	// (0x0001d437) form_field_popup_wide_pane_g1

0x4261,	// (0x0001d43f) form_field_popup_wide_pane_t1_ParamLimits

0xb314,	// (0x000244f2) input_focus_pane_cp8_ParamLimits

0xb342,	// (0x00024520) list_form_wide_pane_ParamLimits

0xd42f,	// (0x0002660d) aid_size_cell_graphic_pane

0x8050,	// (0x0002122e) data_form_pane_t1_ParamLimits

0x8187,	// (0x00021365) data_form_wide_pane_t1_ParamLimits

0x2e81,	// (0x0001c05f) bg_status_flat_pane

0x2294,	// (0x0001b472) title_pane_t1_ParamLimits

0x85ee,	// (0x000217cc) title_pane_t2_ParamLimits

0x8614,	// (0x000217f2) title_pane_t3_ParamLimits

0xf55d,	// (0x0002873b) title_pane_t_ParamLimits

0xb7cc,	// (0x000249aa) level_1_signal_ParamLimits

0xb7d9,	// (0x000249b7) level_2_signal_ParamLimits

0xb7e6,	// (0x000249c4) level_3_signal_ParamLimits

0xb7f3,	// (0x000249d1) level_4_signal_ParamLimits

0xb800,	// (0x000249de) level_5_signal_ParamLimits

0xb80d,	// (0x000249eb) level_6_signal_ParamLimits

0xb81a,	// (0x000249f8) level_7_signal_ParamLimits

0xb7cc,	// (0x000249aa) level_1_battery_ParamLimits

0xb7d9,	// (0x000249b7) level_2_battery_ParamLimits

0xb7e6,	// (0x000249c4) level_3_battery_ParamLimits

0xb7f3,	// (0x000249d1) level_4_battery_ParamLimits

0xb800,	// (0x000249de) level_5_battery_ParamLimits

0xb80d,	// (0x000249eb) level_6_battery_ParamLimits

0xb81a,	// (0x000249f8) level_7_battery_ParamLimits

0xc87c,	// (0x00025a5a) bg_status_flat_pane_g1

0xc884,	// (0x00025a62) bg_status_flat_pane_g2

0xc88c,	// (0x00025a6a) bg_status_flat_pane_g3

0xc894,	// (0x00025a72) bg_status_flat_pane_g4

0xc89c,	// (0x00025a7a) bg_status_flat_pane_g5

0xc8a4,	// (0x00025a82) bg_status_flat_pane_g6

0xc8ac,	// (0x00025a8a) bg_status_flat_pane_g7

0x2320,	// (0x0001b4fe) tabs_3_active_pane_t1_ParamLimits

0x2320,	// (0x0001b4fe) tabs_3_passive_pane_t1_ParamLimits

0x2332,	// (0x0001b510) tabs_4_active_pane_t1_ParamLimits

0x2332,	// (0x0001b510) tabs_4_1_passive_pane_t1_ParamLimits

0x2ab3,	// (0x0001bc91) tabs_2_active_pane_t1_ParamLimits

0x2ab3,	// (0x0001bc91) tabs_2_passive_pane_t1_ParamLimits

0x8644,	// (0x00021822) bg_active_tab_pane_cp4_ParamLimits

0x2ac5,	// (0x0001bca3) tabs_2_long_active_pane_t1_ParamLimits

0xb46d,	// (0x0002464b) bg_passive_tab_pane_cp4_ParamLimits

0x5dd2,	// (0x0001efb0) list_single_midp_graphic_pane_t1_ParamLimits

0x8644,	// (0x00021822) bg_active_tab_pane_cp5_ParamLimits

0x2ad8,	// (0x0001bcb6) tabs_3_long_active_pane_t1_ParamLimits

0xb46d,	// (0x0002464b) bg_passive_tab_pane_cp5_ParamLimits

0x5dd2,	// (0x0001efb0) list_single_midp_graphic_pane_t1

0x2e81,	// (0x0001c05f) bg_status_flat_pane_ParamLimits

0xc068,	// (0x00025246) indicator_pane_cp2_ParamLimits

0xc068,	// (0x00025246) indicator_pane_cp2

0x2fff,	// (0x0001c1dd) navi_pane_srt_ParamLimits

0x2fff,	// (0x0001c1dd) navi_pane_srt

0xc090,	// (0x0002526e) popup_clock_digital_analogue_window_cp1

0x8688,	// (0x00021866) indicator_pane_t1

0xbd49,	// (0x00024f27) copy_highlight_pane

0xbd49,	// (0x00024f27) cursor_graphics_pane

0xbd49,	// (0x00024f27) graphic_within_text_pane

0xbd49,	// (0x00024f27) link_highlight_pane

0xcfed,	// (0x000261cb) popup_preview_text_window_t5_ParamLimits

0xcfed,	// (0x000261cb) popup_preview_text_window_t5

0xbdc4,	// (0x00024fa2) cursor_digital_pane

0xbdc4,	// (0x00024fa2) cursor_primary_pane

0xbdd5,	// (0x00024fb3) cursor_primary_small_pane

0xbddd,	// (0x00024fbb) cursor_secondary_pane

0xbde5,	// (0x00024fc3) cursor_title_pane

0xbdc4,	// (0x00024fa2) link_highlight_digital_pane

0xbdcc,	// (0x00024faa) link_highlight_primary_pane

0xbdd5,	// (0x00024fb3) link_highlight_primary_small_pane

0xbddd,	// (0x00024fbb) link_highlight_secondary_pane

0xbde5,	// (0x00024fc3) link_highlight_title_pane

0xbdc4,	// (0x00024fa2) copy_highlight_digital_pane

0xbdc4,	// (0x00024fa2) copy_highlight_primary_pane

0xbdd5,	// (0x00024fb3) copy_highlight_primary_small_pane

0xbddd,	// (0x00024fbb) copy_highlight_secondary_pane

0xbde5,	// (0x00024fc3) copy_highlight_title_pane

0xbddd,	// (0x00024fbb) graphic_text_digital_pane

0xc8fc,	// (0x00025ada) graphic_text_primary_pane

0xc905,	// (0x00025ae3) graphic_text_primary_small_pane

0xbdd5,	// (0x00024fb3) graphic_text_secondary_pane

0xbdc4,	// (0x00024fa2) graphic_text_title_pane

0x2d6c,	// (0x0001bf4a) cursor_primary_pane_g1

0xc8ee,	// (0x00025acc) cursor_text_primary_t1

0x32b3,	// (0x0001c491) cursor_primary_small_pane_g1

0xc8e0,	// (0x00025abe) cursor_text_primary_small_t1

0x32a9,	// (0x0001c487) cursor_primary_small_pane_g1_copy1

0xc8d2,	// (0x00025ab0) cursor_text_primary_small_t1_copy1

0xc8c4,	// (0x00025aa2) cursor_text_title_t1

0x329f,	// (0x0001c47d) cursor_title_pane_g1

0x2d6c,	// (0x0001bf4a) cursor_digital_pane_g1

0xbded,	// (0x00024fcb) cursor_text_digital_t1

0xc865,	// (0x00025a43) link_highlight_primary_pane_g1

0xc86d,	// (0x00025a4b) link_highlight_primary_pane_t1

0xbdfb,	// (0x00024fd9) link_highlight_primary_small_pane_g1

0xbe03,	// (0x00024fe1) link_highlight_primary_small_pane_t1

0xbdfb,	// (0x00024fd9) link_highlight_secondary_pane_g1

0xbe12,	// (0x00024ff0) link_highlight_secondary_pane_t1

0xc7d9,	// (0x000259b7) link_highlight_title_pane_g1

0xc7e1,	// (0x000259bf) link_highlight_title_pane_t1

0xc7c2,	// (0x000259a0) link_highlight_digital_pane_g1

0xc7ca,	// (0x000259a8) link_highlight_digital_pane_t1

0xc6b6,	// (0x00025894) copy_highlight_primary_pane_g1

0xc6be,	// (0x0002589c) copy_highlight_primary_pane_t1

0xc690,	// (0x0002586e) copy_highlight_primary_small_pane_g1

0xc6a7,	// (0x00025885) copy_highlight_primary_small_pane_t1

0xbe21,	// (0x00024fff) copy_highlight_secondary_pane_g1

0xbe29,	// (0x00025007) copy_highlight_secondary_pane_t1

0xc690,	// (0x0002586e) copy_highlight_title_pane_g1

0xc698,	// (0x00025876) copy_highlight_title_pane_t1

0xc6b6,	// (0x00025894) copy_highlight_digital_pane_g1

0xd5b5,	// (0x00026793) copy_highlight_digital_pane_t1

0xd509,	// (0x000266e7) graphic_text_primary_pane_g1

0xd599,	// (0x00026777) graphic_text_primary_pane_t1

0xd5a7,	// (0x00026785) graphic_text_primary_pane_t2

0x0001,

0xf9c8,	// (0x00028ba6) graphic_text_primary_pane_t

0xd575,	// (0x00026753) graphic_text_primary_small_pane_g1

0xd57d,	// (0x0002675b) graphic_text_primary_small_pane_t1

0xd58b,	// (0x00026769) graphic_text_primary_small_pane_t2

0x0001,

0xf9c3,	// (0x00028ba1) graphic_text_primary_small_pane_t

0xd551,	// (0x0002672f) graphic_text_secondary_pane_g1

0xd559,	// (0x00026737) graphic_text_secondary_pane_t1

0xd567,	// (0x00026745) graphic_text_secondary_pane_t2

0x0001,

0xf9be,	// (0x00028b9c) graphic_text_secondary_pane_t

0xd52d,	// (0x0002670b) graphic_text_title_pane_g1

0xd535,	// (0x00026713) graphic_text_title_pane_t1

0xd543,	// (0x00026721) graphic_text_title_pane_t2

0x0001,

0xf9b9,	// (0x00028b97) graphic_text_title_pane_t

0xd509,	// (0x000266e7) graphic_text_digital_pane_g1

0xd511,	// (0x000266ef) graphic_text_digital_pane_t1

0xd51f,	// (0x000266fd) graphic_text_digital_pane_t2

0x0001,

0xf9b4,	// (0x00028b92) graphic_text_digital_pane_t

0x8644,	// (0x00021822) navi_icon_pane_srt_ParamLimits

0x8644,	// (0x00021822) navi_icon_pane_srt

0x84b8,	// (0x00021696) navi_midp_pane_srt

0x84b8,	// (0x00021696) navi_navi_pane_srt

0x8644,	// (0x00021822) navi_text_pane_srt_ParamLimits

0x8644,	// (0x00021822) navi_text_pane_srt

0xd4d4,	// (0x000266b2) navi_navi_icon_text_pane_srt

0xd4dc,	// (0x000266ba) navi_navi_pane_srt_g1_ParamLimits

0xd4dc,	// (0x000266ba) navi_navi_pane_srt_g1

0xd4ee,	// (0x000266cc) navi_navi_pane_srt_g2_ParamLimits

0xd4ee,	// (0x000266cc) navi_navi_pane_srt_g2

0x0001,

0xf9af,	// (0x00028b8d) navi_navi_pane_srt_g_ParamLimits

0xf9af,	// (0x00028b8d) navi_navi_pane_srt_g

0xd500,	// (0x000266de) navi_navi_tabs_pane_srt

0xd4d4,	// (0x000266b2) navi_navi_text_pane_srt

0xd4d4,	// (0x000266b2) navi_navi_volume_pane_srt

0xd4c5,	// (0x000266a3) navi_navi_text_pane_srt_t1

0x6104,	// (0x0001f2e2) navi_navi_volume_pane_srt_g1

0x610c,	// (0x0001f2ea) volume_small_pane_srt_ParamLimits

0x610c,	// (0x0001f2ea) volume_small_pane_srt

0x55b3,	// (0x0001e791) volume_small_pane_srt_g1_ParamLimits

0x55b3,	// (0x0001e791) volume_small_pane_srt_g1

0x55c3,	// (0x0001e7a1) volume_small_pane_srt_g2_ParamLimits

0x55c3,	// (0x0001e7a1) volume_small_pane_srt_g2

0x55d4,	// (0x0001e7b2) volume_small_pane_srt_g3_ParamLimits

0x55d4,	// (0x0001e7b2) volume_small_pane_srt_g3

0x55e5,	// (0x0001e7c3) volume_small_pane_srt_g4_ParamLimits

0x55e5,	// (0x0001e7c3) volume_small_pane_srt_g4

0x55f6,	// (0x0001e7d4) volume_small_pane_srt_g5_ParamLimits

0x55f6,	// (0x0001e7d4) volume_small_pane_srt_g5

0x5607,	// (0x0001e7e5) volume_small_pane_srt_g6_ParamLimits

0x5607,	// (0x0001e7e5) volume_small_pane_srt_g6

0x5618,	// (0x0001e7f6) volume_small_pane_srt_g7_ParamLimits

0x5618,	// (0x0001e7f6) volume_small_pane_srt_g7

0x5629,	// (0x0001e807) volume_small_pane_srt_g8_ParamLimits

0x5629,	// (0x0001e807) volume_small_pane_srt_g8

0x563a,	// (0x0001e818) volume_small_pane_srt_g9_ParamLimits

0x563a,	// (0x0001e818) volume_small_pane_srt_g9

0x564b,	// (0x0001e829) volume_small_pane_srt_g10_ParamLimits

0x564b,	// (0x0001e829) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00028941) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00028941) volume_small_pane_srt_g

0x88bc,	// (0x00021a9a) query_popup_data_pane_cp2

0xd4ab,	// (0x00026689) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd4ab,	// (0x00026689) navi_navi_icon_text_pane_srt_t1

0xc8fc,	// (0x00025ada) navi_tabs_2_long_pane_srt

0xc8fc,	// (0x00025ada) navi_tabs_2_pane_srt

0xc8fc,	// (0x00025ada) navi_tabs_3_long_pane_srt

0xc8fc,	// (0x00025ada) navi_tabs_3_pane_srt

0xc8fc,	// (0x00025ada) navi_tabs_4_pane_srt

0x60e4,	// (0x0001f2c2) tabs_2_active_pane_srt_ParamLimits

0x60e4,	// (0x0001f2c2) tabs_2_active_pane_srt

0x60f4,	// (0x0001f2d2) tabs_2_passive_pane_srt_ParamLimits

0x60f4,	// (0x0001f2d2) tabs_2_passive_pane_srt

0xc20b,	// (0x000253e9) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc20b,	// (0x000253e9) bg_passive_tab_pane_cp1_srt

0xd489,	// (0x00026667) bg_passive_tab_pane_g1_cp1_srt

0xb9f4,	// (0x00024bd2) bg_passive_tab_pane_g2_cp1_srt

0xd492,	// (0x00026670) bg_passive_tab_pane_g3_cp1_srt

0x8626,	// (0x00021804) bg_active_tab_pane_cp1_srt_ParamLimits

0x8626,	// (0x00021804) bg_active_tab_pane_cp1_srt

0xd49b,	// (0x00026679) tabs_2_active_pane_srt_g1

0x9951,	// (0x00022b2f) tabs_2_active_pane_srt_t1_ParamLimits

0x9951,	// (0x00022b2f) tabs_2_active_pane_srt_t1

0xd489,	// (0x00026667) bg_active_tab_pane_g1_cp1_srt

0xb9f4,	// (0x00024bd2) bg_active_tab_pane_g2_cp1_srt

0xd492,	// (0x00026670) bg_active_tab_pane_g3_cp1_srt

0x60b1,	// (0x0001f28f) tabs_3_active_pane_srt_ParamLimits

0x60b1,	// (0x0001f28f) tabs_3_active_pane_srt

0x60c2,	// (0x0001f2a0) tabs_3_passive_pane_cp_srt_ParamLimits

0x60c2,	// (0x0001f2a0) tabs_3_passive_pane_cp_srt

0x60d3,	// (0x0001f2b1) tabs_3_passive_pane_srt_ParamLimits

0x60d3,	// (0x0001f2b1) tabs_3_passive_pane_srt

0xc20b,	// (0x000253e9) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc20b,	// (0x000253e9) bg_passive_tab_pane_cp2_srt

0xbe38,	// (0x00025016) bg_passive_tab_pane_g1_cp2_srt

0xb9f4,	// (0x00024bd2) bg_passive_tab_pane_g2_cp2_srt

0xbe41,	// (0x0002501f) bg_passive_tab_pane_g3_cp2_srt

0x8626,	// (0x00021804) bg_active_tab_pane_cp2_srt_ParamLimits

0x8626,	// (0x00021804) bg_active_tab_pane_cp2_srt

0xd481,	// (0x0002665f) tabs_3_active_pane_srt_g1

0x993b,	// (0x00022b19) tabs_3_active_pane_srt_t1_ParamLimits

0x993b,	// (0x00022b19) tabs_3_active_pane_srt_t1

0xbe38,	// (0x00025016) bg_active_tab_pane_g1_cp2_srt

0xb9f4,	// (0x00024bd2) bg_active_tab_pane_g2_cp2_srt

0xbe41,	// (0x0002501f) bg_active_tab_pane_g3_cp2_srt

0x6069,	// (0x0001f247) tabs_4_active_pane_srt_ParamLimits

0x6069,	// (0x0001f247) tabs_4_active_pane_srt

0x607b,	// (0x0001f259) tabs_4_passive_pane_cp2_srt_ParamLimits

0x607b,	// (0x0001f259) tabs_4_passive_pane_cp2_srt

0x57ae,	// (0x0001e98c) aid_size_cell_toolbar

0xbfa7,	// (0x00025185) main_idle_act_pane_ParamLimits

0x5947,	// (0x0001eb25) popup_large_graphic_colour_window_ParamLimits

0x941b,	// (0x000225f9) popup_toolbar_window_ParamLimits

0x941b,	// (0x000225f9) popup_toolbar_window

0xd3ac,	// (0x0002658a) list_single_graphic_2heading_pane_ParamLimits

0xd3ac,	// (0x0002658a) list_single_graphic_2heading_pane

0xb614,	// (0x000247f2) aid_size_cell_apps_grid_lsc_pane

0xb626,	// (0x00024804) aid_size_cell_apps_grid_prt_pane

0xb46d,	// (0x0002464b) bg_wml_button_pane_cp1_ParamLimits

0xb46d,	// (0x0002464b) bg_wml_button_pane_cp1

0x3236,	// (0x0001c414) form_midp_field_text_pane_t1_ParamLimits

0xc20b,	// (0x000253e9) input_focus_pane_cp050_ParamLimits

0xc378,	// (0x00025556) list_midp_form_text_pane_ParamLimits

0xc355,	// (0x00025533) input_focus_pane_cp051_ParamLimits

0xc369,	// (0x00025547) list_midp_choice_pane_ParamLimits

0x31ca,	// (0x0001c3a8) list_single_2graphic_pane_cp3_ParamLimits

0x31ca,	// (0x0001c3a8) list_single_2graphic_pane_cp3

0x31df,	// (0x0001c3bd) list_single_midp_graphic_pane_ParamLimits

0x31df,	// (0x0001c3bd) list_single_midp_graphic_pane

0x442c,	// (0x0001d60a) list_single_graphic_2heading_pane_g1_ParamLimits

0x442c,	// (0x0001d60a) list_single_graphic_2heading_pane_g1

0x3d62,	// (0x0001cf40) list_single_graphic_2heading_pane_g4_ParamLimits

0x3d62,	// (0x0001cf40) list_single_graphic_2heading_pane_g4

0x3d6e,	// (0x0001cf4c) list_single_graphic_2heading_pane_g5_ParamLimits

0x3d6e,	// (0x0001cf4c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00028994) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00028994) list_single_graphic_2heading_pane_g

0x4438,	// (0x0001d616) list_single_graphic_2heading_pane_t1_ParamLimits

0x4438,	// (0x0001d616) list_single_graphic_2heading_pane_t1

0x444c,	// (0x0001d62a) list_single_graphic_2heading_pane_t2_ParamLimits

0x444c,	// (0x0001d62a) list_single_graphic_2heading_pane_t2

0x4466,	// (0x0001d644) list_single_graphic_2heading_pane_t3_ParamLimits

0x4466,	// (0x0001d644) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0002899b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0002899b) list_single_graphic_2heading_pane_t

0xc0d5,	// (0x000252b3) bg_popup_sub_pane_cp2

0xc0ff,	// (0x000252dd) grid_toobar_pane

0x5d57,	// (0x0001ef35) cell_toolbar_pane_ParamLimits

0x5d57,	// (0x0001ef35) cell_toolbar_pane

0xc13b,	// (0x00025319) cell_toolbar_pane_g1_ParamLimits

0xc13b,	// (0x00025319) cell_toolbar_pane_g1

0xc14f,	// (0x0002532d) cell_toolbar_pane_g2_ParamLimits

0xc14f,	// (0x0002532d) cell_toolbar_pane_g2

0x0001,

0xf7c4,	// (0x000289a2) cell_toolbar_pane_g_ParamLimits

0xf7c4,	// (0x000289a2) cell_toolbar_pane_g

0xc171,	// (0x0002534f) grid_highlight_pane_cp2_ParamLimits

0xc171,	// (0x0002534f) grid_highlight_pane_cp2

0xc18b,	// (0x00025369) toolbar_button_pane

0xc197,	// (0x00025375) toolbar_button_pane_g1

0xc19f,	// (0x0002537d) toolbar_button_pane_g2

0xc1a7,	// (0x00025385) toolbar_button_pane_g3

0xc1af,	// (0x0002538d) toolbar_button_pane_g4

0xc1b7,	// (0x00025395) toolbar_button_pane_g5

0xc1bf,	// (0x0002539d) toolbar_button_pane_g6

0xc1c7,	// (0x000253a5) toolbar_button_pane_g7

0xc1cf,	// (0x000253ad) toolbar_button_pane_g8

0xc1d7,	// (0x000253b5) toolbar_button_pane_g9

0x0009,

0xf7c9,	// (0x000289a7) toolbar_button_pane_g

0x5d8f,	// (0x0001ef6d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5d8f,	// (0x0001ef6d) list_single_2graphic_pane_g1_cp3

0x2700,	// (0x0001b8de) list_single_2graphic_pane_g2_cp3_ParamLimits

0x2700,	// (0x0001b8de) list_single_2graphic_pane_g2_cp3

0xbb85,	// (0x00024d63) list_single_2graphic_pane_g3_cp3

0x5dac,	// (0x0001ef8a) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5dac,	// (0x0001ef8a) list_single_2graphic_pane_g4_cp3

0x5db8,	// (0x0001ef96) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5db8,	// (0x0001ef96) list_single_2graphic_pane_t1_cp3

0xbb79,	// (0x00024d57) list_single_midp_graphic_pane_g2_ParamLimits

0xbb79,	// (0x00024d57) list_single_midp_graphic_pane_g2

0x57b6,	// (0x0001e994) aid_zoom_text_primary

0x4400,	// (0x0001d5de) aid_zoom_text_secondary

0xbef5,	// (0x000250d3) status_small_pane_g7_ParamLimits

0xbef5,	// (0x000250d3) status_small_pane_g7

0xbf18,	// (0x000250f6) status_small_pane_t1_ParamLimits

0x2270,	// (0x0001b44e) title_pane_g2

0x0003,

0xf554,	// (0x00028732) title_pane_g

0x24e8,	// (0x0001b6c6) aid_size_cell_colour_1_pane_ParamLimits

0x24e8,	// (0x0001b6c6) aid_size_cell_colour_1_pane

0x24fc,	// (0x0001b6da) aid_size_cell_colour_2_pane_ParamLimits

0x24fc,	// (0x0001b6da) aid_size_cell_colour_2_pane

0x2510,	// (0x0001b6ee) aid_size_cell_colour_3_pane_ParamLimits

0x2510,	// (0x0001b6ee) aid_size_cell_colour_3_pane

0x2524,	// (0x0001b702) aid_size_cell_colour_4_pane_ParamLimits

0x2524,	// (0x0001b702) aid_size_cell_colour_4_pane

0x5218,	// (0x0001e3f6) title_pane_stacon_g1_ParamLimits

0x5218,	// (0x0001e3f6) title_pane_stacon_g1

0xc715,	// (0x000258f3) popup_note_wait_window_g3_ParamLimits

0xc715,	// (0x000258f3) popup_note_wait_window_g3

0xc78b,	// (0x00025969) popup_note_wait_window_t5_ParamLimits

0xc78b,	// (0x00025969) popup_note_wait_window_t5

0x84b8,	// (0x00021696) main_feb_china_hwr_fs_writing_pane

0x8e37,	// (0x00022015) popup_feb_china_hwr_fs_window_ParamLimits

0x8e37,	// (0x00022015) popup_feb_china_hwr_fs_window

0x9473,	// (0x00022651) aid_size_cell_hwr_fs_ParamLimits

0x9473,	// (0x00022651) aid_size_cell_hwr_fs

0xc20b,	// (0x000253e9) bg_popup_sub_pane_cp3_ParamLimits

0xc20b,	// (0x000253e9) bg_popup_sub_pane_cp3

0x9488,	// (0x00022666) grid_hwr_fs_pane_ParamLimits

0x9488,	// (0x00022666) grid_hwr_fs_pane

0x5e15,	// (0x0001eff3) linegrid_hwr_fs_pane_ParamLimits

0x5e15,	// (0x0001eff3) linegrid_hwr_fs_pane

0x94a0,	// (0x0002267e) cell_hwr_fs_pane_ParamLimits

0x94a0,	// (0x0002267e) cell_hwr_fs_pane

0xc217,	// (0x000253f5) linegrid_hwr_fs_pane_g1_ParamLimits

0xc217,	// (0x000253f5) linegrid_hwr_fs_pane_g1

0x319e,	// (0x0001c37c) linegrid_hwr_fs_pane_g2_ParamLimits

0x319e,	// (0x0001c37c) linegrid_hwr_fs_pane_g2

0xc223,	// (0x00025401) linegrid_hwr_fs_pane_g3_ParamLimits

0xc223,	// (0x00025401) linegrid_hwr_fs_pane_g3

0x5e47,	// (0x0001f025) linegrid_hwr_fs_pane_g4_ParamLimits

0x5e47,	// (0x0001f025) linegrid_hwr_fs_pane_g4

0x5e61,	// (0x0001f03f) linegrid_hwr_fs_pane_g5_ParamLimits

0x5e61,	// (0x0001f03f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ef,	// (0x000289cd) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ef,	// (0x000289cd) linegrid_hwr_fs_pane_g

0xc22f,	// (0x0002540d) cell_hwr_fs_pane_g1_ParamLimits

0xc22f,	// (0x0002540d) cell_hwr_fs_pane_g1

0xc0a1,	// (0x0002527f) cell_hwr_fs_pane_g2_ParamLimits

0xc0a1,	// (0x0002527f) cell_hwr_fs_pane_g2

0x31b0,	// (0x0001c38e) cell_hwr_fs_pane_g3_ParamLimits

0x31b0,	// (0x0001c38e) cell_hwr_fs_pane_g3

0x31bd,	// (0x0001c39b) cell_hwr_fs_pane_g4_ParamLimits

0x31bd,	// (0x0001c39b) cell_hwr_fs_pane_g4

0x0003,

0xf7fa,	// (0x000289d8) cell_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x000289d8) cell_hwr_fs_pane_g

0x94c6,	// (0x000226a4) cell_hwr_fs_pane_t1

0x84b8,	// (0x00021696) grid_highlight_pane_cp6

0x84b8,	// (0x00021696) main_idle_act2_pane

0xb41b,	// (0x000245f9) aid_inside_area_popup_secondary

0x95c4,	// (0x000227a2) aid_inside_area_window_primary_ParamLimits

0x95c4,	// (0x000227a2) aid_inside_area_window_primary

0xd5c4,	// (0x000267a2) ai2_news_ticker_pane

0xd5cc,	// (0x000267aa) aid_size_cell_ai1_link_ParamLimits

0xd5cc,	// (0x000267aa) aid_size_cell_ai1_link

0xd5e6,	// (0x000267c4) popup_ai2_data_window_ParamLimits

0xd5e6,	// (0x000267c4) popup_ai2_data_window

0xd5fa,	// (0x000267d8) popup_ai2_link_window_ParamLimits

0xd5fa,	// (0x000267d8) popup_ai2_link_window

0xc20b,	// (0x000253e9) bg_popup_sub_pane_cp4_ParamLimits

0xc20b,	// (0x000253e9) bg_popup_sub_pane_cp4

0xd60e,	// (0x000267ec) grid_ai2_link_pane_ParamLimits

0xd60e,	// (0x000267ec) grid_ai2_link_pane

0xd625,	// (0x00026803) popup_ai2_link_window_g1_ParamLimits

0xd625,	// (0x00026803) popup_ai2_link_window_g1

0xd631,	// (0x0002680f) popup_ai2_link_window_g2_ParamLimits

0xd631,	// (0x0002680f) popup_ai2_link_window_g2

0x0001,

0xf9cd,	// (0x00028bab) popup_ai2_link_window_g_ParamLimits

0xf9cd,	// (0x00028bab) popup_ai2_link_window_g

0xd640,	// (0x0002681e) ai2_mp_button_pane

0xd648,	// (0x00026826) ai2_mp_volume_pane

0xc355,	// (0x00025533) bg_popup_sub_pane_cp5_ParamLimits

0xc355,	// (0x00025533) bg_popup_sub_pane_cp5

0xd650,	// (0x0002682e) heading_ai2_gene_pane_ParamLimits

0xd650,	// (0x0002682e) heading_ai2_gene_pane

0xd65c,	// (0x0002683a) list_ai2_gene_pane_ParamLimits

0xd65c,	// (0x0002683a) list_ai2_gene_pane

0xd6a4,	// (0x00026882) cell_ai2_link_pane_ParamLimits

0xd6a4,	// (0x00026882) cell_ai2_link_pane

0xd6ba,	// (0x00026898) cell_ai2_link_pane_g1

0x84b8,	// (0x00021696) grid_highlight_pane_cp7

0x6121,	// (0x0001f2ff) ai2_mp_volume_pane_g1

0xd78b,	// (0x00026969) ai2_mp_volume_pane_g2

0xd700,	// (0x000268de) list_ai2_gene_pane_t1

0xd793,	// (0x00026971) ai2_mp_volume_pane_g3

0x0002,

0xf9e6,	// (0x00028bc4) ai2_mp_volume_pane_g

0x6129,	// (0x0001f307) volume_small_pane_cp3

0xd79b,	// (0x00026979) aid_size_cell_ai2_button

0xd7a3,	// (0x00026981) grid_ai2_button_pane

0xd7ac,	// (0x0002698a) cell_ai2_button_pane_ParamLimits

0xd7ac,	// (0x0002698a) cell_ai2_button_pane

0x83c8,	// (0x000215a6) cell_ai2_button_pane_g1

0x84b8,	// (0x00021696) grid_highlight_pane_cp8

0xd74b,	// (0x00026929) ai2_gene_pane_t1_ParamLimits

0xd74b,	// (0x00026929) ai2_gene_pane_t1

0x8db1,	// (0x00021f8f) aid_height_parent_landscape

0x9719,	// (0x000228f7) aid_height_set_list

0xbfa7,	// (0x00025185) aid_size_parent

0xd42f,	// (0x0002660d) aid_size_cell_graphic_pane_ParamLimits

0xd66c,	// (0x0002684a) popup_ai2_data_window_g1_ParamLimits

0xd66c,	// (0x0002684a) popup_ai2_data_window_g1

0xd678,	// (0x00026856) ai2_news_ticker_pane_g1

0xd680,	// (0x0002685e) ai2_news_ticker_pane_g2

0x0001,

0xf9d2,	// (0x00028bb0) ai2_news_ticker_pane_g

0xd688,	// (0x00026866) ai2_news_ticker_pane_t1

0xd696,	// (0x00026874) ai2_news_ticker_pane_t2

0x0001,

0xf9d7,	// (0x00028bb5) ai2_news_ticker_pane_t

0xd6c3,	// (0x000268a1) heading_ai2_gene_pane_g1

0xd6cb,	// (0x000268a9) heading_ai2_gene_pane_t1_ParamLimits

0xd6cb,	// (0x000268a9) heading_ai2_gene_pane_t1

0xd6e0,	// (0x000268be) list_highlight_pane_cp6

0xd6e8,	// (0x000268c6) ai2_gene_pane_ParamLimits

0xd6e8,	// (0x000268c6) ai2_gene_pane

0xd70e,	// (0x000268ec) list_ai2_gene_pane_t2

0x0001,

0xf9dc,	// (0x00028bba) list_ai2_gene_pane_t

0xd71c,	// (0x000268fa) list_highlight_pane_cp8_ParamLimits

0xd71c,	// (0x000268fa) list_highlight_pane_cp8

0xd72d,	// (0x0002690b) ai2_gene_pane_g1_ParamLimits

0xd72d,	// (0x0002690b) ai2_gene_pane_g1

0xd73f,	// (0x0002691d) ai2_gene_pane_g2_ParamLimits

0xd73f,	// (0x0002691d) ai2_gene_pane_g2

0x0001,

0xf9e1,	// (0x00028bbf) ai2_gene_pane_g_ParamLimits

0xf9e1,	// (0x00028bbf) ai2_gene_pane_g

0x8c21,	// (0x00021dff) scroll_pane_cp12

0x8d70,	// (0x00021f4e) control_pane_t3_ParamLimits

0x8d70,	// (0x00021f4e) control_pane_t3

0xbf09,	// (0x000250e7) status_small_pane_g8_ParamLimits

0xbf09,	// (0x000250e7) status_small_pane_g8

0x8eca,	// (0x000220a8) popup_find_window_ParamLimits

0x914b,	// (0x00022329) popup_note_image_window_ParamLimits

0x442c,	// (0x0001d60a) list_double2_graphic_pane_vc_g1_ParamLimits

0x442c,	// (0x0001d60a) list_double2_graphic_pane_vc_g1

0x3d62,	// (0x0001cf40) list_double2_graphic_pane_vc_g2_ParamLimits

0x3d62,	// (0x0001cf40) list_double2_graphic_pane_vc_g2

0x3d6e,	// (0x0001cf4c) list_double2_graphic_pane_vc_g3_ParamLimits

0x3d6e,	// (0x0001cf4c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b6,	// (0x00028994) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b6,	// (0x00028994) list_double2_graphic_pane_vc_g

0x447e,	// (0x0001d65c) list_double2_graphic_pane_vc_t1_ParamLimits

0x447e,	// (0x0001d65c) list_double2_graphic_pane_vc_t1

0x3d62,	// (0x0001cf40) list_single_heading_pane_vc_g1_ParamLimits

0x3d62,	// (0x0001cf40) list_single_heading_pane_vc_g1

0x3d6e,	// (0x0001cf4c) list_single_heading_pane_vc_g2_ParamLimits

0x3d6e,	// (0x0001cf4c) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x000287ac) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x000287ac) list_single_heading_pane_vc_g

0x4494,	// (0x0001d672) list_single_heading_pane_vc_t1_ParamLimits

0x4494,	// (0x0001d672) list_single_heading_pane_vc_t1

0x44aa,	// (0x0001d688) list_single_heading_pane_vc_t2_ParamLimits

0x44aa,	// (0x0001d688) list_single_heading_pane_vc_t2

0x0001,

0xf7de,	// (0x000289bc) list_single_heading_pane_vc_t_ParamLimits

0xf7de,	// (0x000289bc) list_single_heading_pane_vc_t

0x44c6,	// (0x0001d6a4) list_setting_number_pane_vc_g1_ParamLimits

0x44c6,	// (0x0001d6a4) list_setting_number_pane_vc_g1

0x44d2,	// (0x0001d6b0) list_setting_number_pane_vc_g2_ParamLimits

0x44d2,	// (0x0001d6b0) list_setting_number_pane_vc_g2

0x0001,

0xf7e3,	// (0x000289c1) list_setting_number_pane_vc_g_ParamLimits

0xf7e3,	// (0x000289c1) list_setting_number_pane_vc_g

0x44de,	// (0x0001d6bc) list_setting_number_pane_vc_t1_ParamLimits

0x44de,	// (0x0001d6bc) list_setting_number_pane_vc_t1

0x44f2,	// (0x0001d6d0) list_setting_number_pane_vc_t2_ParamLimits

0x44f2,	// (0x0001d6d0) list_setting_number_pane_vc_t2

0x450c,	// (0x0001d6ea) list_setting_number_pane_vc_t3_ParamLimits

0x450c,	// (0x0001d6ea) list_setting_number_pane_vc_t3

0x0002,

0xf7e8,	// (0x000289c6) list_setting_number_pane_vc_t_ParamLimits

0xf7e8,	// (0x000289c6) list_setting_number_pane_vc_t

0x4526,	// (0x0001d704) set_value_pane_vc_ParamLimits

0x4526,	// (0x0001d704) set_value_pane_vc

0xd3ac,	// (0x0002658a) list_double2_graphic_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_double2_graphic_pane_vc

0xd3ac,	// (0x0002658a) list_double2_large_graphic_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_double2_large_graphic_pane_vc

0xd3ac,	// (0x0002658a) list_double2_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_double2_pane_vc

0xd3ac,	// (0x0002658a) list_double_graphic_heading_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_double_graphic_heading_pane_vc

0xd3ac,	// (0x0002658a) list_double_graphic_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_double_graphic_pane_vc

0xd3ac,	// (0x0002658a) list_double_heading_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_double_heading_pane_vc

0xd3ac,	// (0x0002658a) list_double_large_graphic_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_double_large_graphic_pane_vc

0xd3ac,	// (0x0002658a) list_double_number_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_double_number_pane_vc

0xd3ac,	// (0x0002658a) list_double_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_double_pane_vc

0xd3ac,	// (0x0002658a) list_double_time_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_double_time_pane_vc

0xd3ac,	// (0x0002658a) list_setting_number_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_setting_number_pane_vc

0xd3ac,	// (0x0002658a) list_setting_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_setting_pane_vc

0xd3ac,	// (0x0002658a) list_single_graphic_heading_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_single_graphic_heading_pane_vc

0xd3ac,	// (0x0002658a) list_single_heading_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_single_heading_pane_vc

0xd3ac,	// (0x0002658a) list_single_number_heading_pane_vc_ParamLimits

0xd3ac,	// (0x0002658a) list_single_number_heading_pane_vc

0x46dc,	// (0x0001d8ba) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x46dc,	// (0x0001d8ba) list_double_graphic_heading_pane_vc_g1

0x3d62,	// (0x0001cf40) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3d62,	// (0x0001cf40) list_double_graphic_heading_pane_vc_g2

0x3d6e,	// (0x0001cf4c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3d6e,	// (0x0001cf4c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ed,	// (0x00028bcb) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ed,	// (0x00028bcb) list_double_graphic_heading_pane_vc_g

0x46e8,	// (0x0001d8c6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x46e8,	// (0x0001d8c6) list_double_graphic_heading_pane_vc_t1

0x4704,	// (0x0001d8e2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4704,	// (0x0001d8e2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f4,	// (0x00028bd2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f4,	// (0x00028bd2) list_double_graphic_heading_pane_vc_t

0x44c6,	// (0x0001d6a4) list_setting_pane_vc_g1_ParamLimits

0x44c6,	// (0x0001d6a4) list_setting_pane_vc_g1

0x44d2,	// (0x0001d6b0) list_setting_pane_vc_g2_ParamLimits

0x44d2,	// (0x0001d6b0) list_setting_pane_vc_g2

0x0001,

0xf7e3,	// (0x000289c1) list_setting_pane_vc_g_ParamLimits

0xf7e3,	// (0x000289c1) list_setting_pane_vc_g

0x471c,	// (0x0001d8fa) list_setting_pane_vc_t1_ParamLimits

0x471c,	// (0x0001d8fa) list_setting_pane_vc_t1

0x4736,	// (0x0001d914) list_setting_pane_vc_t2_ParamLimits

0x4736,	// (0x0001d914) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x00028c15) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x00028c15) list_setting_pane_vc_t

0x4526,	// (0x0001d704) set_value_pane_cp_vc_ParamLimits

0x4526,	// (0x0001d704) set_value_pane_cp_vc

0x3d62,	// (0x0001cf40) list_single_number_heading_pane_vc_g1_ParamLimits

0x3d62,	// (0x0001cf40) list_single_number_heading_pane_vc_g1

0x3d6e,	// (0x0001cf4c) list_single_number_heading_pane_vc_g2_ParamLimits

0x3d6e,	// (0x0001cf4c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x000287ac) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x000287ac) list_single_number_heading_pane_vc_g

0x4494,	// (0x0001d672) list_single_number_heading_pane_vc_t1_ParamLimits

0x4494,	// (0x0001d672) list_single_number_heading_pane_vc_t1

0x474e,	// (0x0001d92c) list_single_number_heading_pane_vc_t2_ParamLimits

0x474e,	// (0x0001d92c) list_single_number_heading_pane_vc_t2

0x4762,	// (0x0001d940) list_single_number_heading_pane_vc_t3_ParamLimits

0x4762,	// (0x0001d940) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x00028c1a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x00028c1a) list_single_number_heading_pane_vc_t

0x442c,	// (0x0001d60a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x442c,	// (0x0001d60a) list_single_graphic_heading_pane_vc_g1

0x3d62,	// (0x0001cf40) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3d62,	// (0x0001cf40) list_single_graphic_heading_pane_vc_g4

0x3d6e,	// (0x0001cf4c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3d6e,	// (0x0001cf4c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b6,	// (0x00028994) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x00028994) list_single_graphic_heading_pane_vc_g

0x4494,	// (0x0001d672) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4494,	// (0x0001d672) list_single_graphic_heading_pane_vc_t1

0x4774,	// (0x0001d952) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4774,	// (0x0001d952) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x00028c21) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00028c21) list_single_graphic_heading_pane_vc_t

0x3d62,	// (0x0001cf40) list_double2_pane_vc_g1_ParamLimits

0x3d62,	// (0x0001cf40) list_double2_pane_vc_g1

0x3d6e,	// (0x0001cf4c) list_double2_pane_vc_g2_ParamLimits

0x3d6e,	// (0x0001cf4c) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x000287ac) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x000287ac) list_double2_pane_vc_g

0x4788,	// (0x0001d966) list_double2_pane_vc_t1_ParamLimits

0x4788,	// (0x0001d966) list_double2_pane_vc_t1

0x479e,	// (0x0001d97c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x479e,	// (0x0001d97c) list_double2_large_graphic_pane_vc_g1

0x3d62,	// (0x0001cf40) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3d62,	// (0x0001cf40) list_double2_large_graphic_pane_vc_g2

0x3d6e,	// (0x0001cf4c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3d6e,	// (0x0001cf4c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x000287c9) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x000287c9) list_double2_large_graphic_pane_vc_g

0x47aa,	// (0x0001d988) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x47aa,	// (0x0001d988) list_double2_large_graphic_pane_vc_t1

0x47c0,	// (0x0001d99e) list_double_time_pane_vc_g1_ParamLimits

0x47c0,	// (0x0001d99e) list_double_time_pane_vc_g1

0x47cc,	// (0x0001d9aa) list_double_time_pane_vc_g2_ParamLimits

0x47cc,	// (0x0001d9aa) list_double_time_pane_vc_g2

0x0001,

0xfa48,	// (0x00028c26) list_double_time_pane_vc_g_ParamLimits

0xfa48,	// (0x00028c26) list_double_time_pane_vc_g

0x47d8,	// (0x0001d9b6) list_double_time_pane_vc_t1_ParamLimits

0x47d8,	// (0x0001d9b6) list_double_time_pane_vc_t1

0x47fc,	// (0x0001d9da) list_double_time_pane_vc_t2_ParamLimits

0x47fc,	// (0x0001d9da) list_double_time_pane_vc_t2

0x4846,	// (0x0001da24) list_double_time_pane_vc_t3_ParamLimits

0x4846,	// (0x0001da24) list_double_time_pane_vc_t3

0x4858,	// (0x0001da36) list_double_time_pane_vc_t4_ParamLimits

0x4858,	// (0x0001da36) list_double_time_pane_vc_t4

0x0003,

0xfa4d,	// (0x00028c2b) list_double_time_pane_vc_t_ParamLimits

0xfa4d,	// (0x00028c2b) list_double_time_pane_vc_t

0x3d62,	// (0x0001cf40) list_double_pane_vc_g1_ParamLimits

0x3d62,	// (0x0001cf40) list_double_pane_vc_g1

0x3d6e,	// (0x0001cf4c) list_double_pane_vc_g2_ParamLimits

0x3d6e,	// (0x0001cf4c) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x000287ac) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x000287ac) list_double_pane_vc_g

0x486c,	// (0x0001da4a) list_double_pane_vc_t1_ParamLimits

0x486c,	// (0x0001da4a) list_double_pane_vc_t1

0x4880,	// (0x0001da5e) list_double_pane_vc_t2_ParamLimits

0x4880,	// (0x0001da5e) list_double_pane_vc_t2

0x0001,

0xfa56,	// (0x00028c34) list_double_pane_vc_t_ParamLimits

0xfa56,	// (0x00028c34) list_double_pane_vc_t

0x3d62,	// (0x0001cf40) list_double_number_pane_vc_g1_ParamLimits

0x3d62,	// (0x0001cf40) list_double_number_pane_vc_g1

0x3d6e,	// (0x0001cf4c) list_double_number_pane_vc_g2_ParamLimits

0x3d6e,	// (0x0001cf4c) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x000287ac) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x000287ac) list_double_number_pane_vc_g

0x4898,	// (0x0001da76) list_double_number_pane_vc_t1_ParamLimits

0x4898,	// (0x0001da76) list_double_number_pane_vc_t1

0x48aa,	// (0x0001da88) list_double_number_pane_vc_t2_ParamLimits

0x48aa,	// (0x0001da88) list_double_number_pane_vc_t2

0x4880,	// (0x0001da5e) list_double_number_pane_vc_t3_ParamLimits

0x4880,	// (0x0001da5e) list_double_number_pane_vc_t3

0x0002,

0xfa5b,	// (0x00028c39) list_double_number_pane_vc_t_ParamLimits

0xfa5b,	// (0x00028c39) list_double_number_pane_vc_t

0x48be,	// (0x0001da9c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x48be,	// (0x0001da9c) list_double_large_graphic_pane_vc_g1

0x48ca,	// (0x0001daa8) list_double_large_graphic_pane_vc_g2_ParamLimits

0x48ca,	// (0x0001daa8) list_double_large_graphic_pane_vc_g2

0x3d6e,	// (0x0001cf4c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3d6e,	// (0x0001cf4c) list_double_large_graphic_pane_vc_g3

0x48d9,	// (0x0001dab7) list_double_large_graphic_pane_vc_g4_ParamLimits

0x48d9,	// (0x0001dab7) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa62,	// (0x00028c40) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa62,	// (0x00028c40) list_double_large_graphic_pane_vc_g

0x48e5,	// (0x0001dac3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x48e5,	// (0x0001dac3) list_double_large_graphic_pane_vc_t1

0x48f9,	// (0x0001dad7) list_double_large_graphic_pane_vc_t2_ParamLimits

0x48f9,	// (0x0001dad7) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6b,	// (0x00028c49) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6b,	// (0x00028c49) list_double_large_graphic_pane_vc_t

0x3d62,	// (0x0001cf40) list_double_heading_pane_vc_g1_ParamLimits

0x3d62,	// (0x0001cf40) list_double_heading_pane_vc_g1

0x3d6e,	// (0x0001cf4c) list_double_heading_pane_vc_g2_ParamLimits

0x3d6e,	// (0x0001cf4c) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x000287ac) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x000287ac) list_double_heading_pane_vc_g

0x4912,	// (0x0001daf0) list_double_heading_pane_vc_t1_ParamLimits

0x4912,	// (0x0001daf0) list_double_heading_pane_vc_t1

0x4494,	// (0x0001d672) list_double_heading_pane_vc_t2_ParamLimits

0x4494,	// (0x0001d672) list_double_heading_pane_vc_t2

0x0001,

0xfa70,	// (0x00028c4e) list_double_heading_pane_vc_t_ParamLimits

0xfa70,	// (0x00028c4e) list_double_heading_pane_vc_t

0x4926,	// (0x0001db04) list_double_graphic_pane_vc_g1_ParamLimits

0x4926,	// (0x0001db04) list_double_graphic_pane_vc_g1

0x4936,	// (0x0001db14) list_double_graphic_pane_vc_g2_ParamLimits

0x4936,	// (0x0001db14) list_double_graphic_pane_vc_g2

0x4945,	// (0x0001db23) list_double_graphic_pane_vc_g3_ParamLimits

0x4945,	// (0x0001db23) list_double_graphic_pane_vc_g3

0x0002,

0xfa75,	// (0x00028c53) list_double_graphic_pane_vc_g_ParamLimits

0xfa75,	// (0x00028c53) list_double_graphic_pane_vc_g

0x4951,	// (0x0001db2f) list_double_graphic_pane_vc_t1_ParamLimits

0x4951,	// (0x0001db2f) list_double_graphic_pane_vc_t1

0x4965,	// (0x0001db43) list_double_graphic_pane_vc_t2_ParamLimits

0x4965,	// (0x0001db43) list_double_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x00028c5a) list_double_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x00028c5a) list_double_graphic_pane_vc_t

0x4d82,	// (0x0001df60) aid_size_cell_fastswap

0x83d2,	// (0x000215b0) aid_size_cell_touch_ParamLimits

0x83d2,	// (0x000215b0) aid_size_cell_touch

0x4fe5,	// (0x0001e1c3) popup_fast_swap_wide_window_ParamLimits

0x4fe5,	// (0x0001e1c3) popup_fast_swap_wide_window

0x858c,	// (0x0002176a) touch_pane_ParamLimits

0x858c,	// (0x0002176a) touch_pane

0xb300,	// (0x000244de) button_value_adjust_pane_cp2

0x4132,	// (0x0001d310) button_value_adjust_pane_cp4

0x4152,	// (0x0001d330) form_field_data_pane_cp2

0x7f6e,	// (0x0002114c) form_field_data_wide_pane_cp2

0xb64b,	// (0x00024829) bg_scroll_pane_ParamLimits

0x537b,	// (0x0001e559) scroll_handle_pane_ParamLimits

0x538f,	// (0x0001e56d) scroll_sc2_down_pane_ParamLimits

0x538f,	// (0x0001e56d) scroll_sc2_down_pane

0xb67c,	// (0x0002485a) scroll_sc2_up_pane_ParamLimits

0xb67c,	// (0x0002485a) scroll_sc2_up_pane

0x9a88,	// (0x00022c66) grid_wheel_folder_pane_g1_ParamLimits

0x9a88,	// (0x00022c66) grid_wheel_folder_pane_g1

0x554b,	// (0x0001e729) clock_nsta_pane_cp2_ParamLimits

0x554b,	// (0x0001e729) clock_nsta_pane_cp2

0xb46d,	// (0x0002464b) listscroll_midp_pane_ParamLimits

0x2cd1,	// (0x0001beaf) midp_canvas_pane

0xbf5d,	// (0x0002513b) nsta_clock_indic_pane

0xbf8d,	// (0x0002516b) listscroll_form_pane_vc

0xbf95,	// (0x00025173) listscroll_set_pane_vc_ParamLimits

0xbf95,	// (0x00025173) listscroll_set_pane_vc

0x2ea9,	// (0x0001c087) clock_nsta_pane

0x2ed3,	// (0x0001c0b1) indicator_nsta_pane

0xc0d5,	// (0x000252b3) bg_popup_sub_pane_cp2_ParamLimits

0xc0e9,	// (0x000252c7) find_pane_cp2_ParamLimits

0xc0e9,	// (0x000252c7) find_pane_cp2

0xc0ff,	// (0x000252dd) grid_toobar_pane_ParamLimits

0xc1df,	// (0x000253bd) list_form_gen_pane_vc_ParamLimits

0xc1df,	// (0x000253bd) list_form_gen_pane_vc

0xc1f5,	// (0x000253d3) scroll_pane_cp8_vc_ParamLimits

0xc1f5,	// (0x000253d3) scroll_pane_cp8_vc

0xc245,	// (0x00025423) data_form_wide_pane_vc_ParamLimits

0xc245,	// (0x00025423) data_form_wide_pane_vc

0xc251,	// (0x0002542f) form_field_data_wide_pane_vc_g1

0xc259,	// (0x00025437) form_field_data_wide_pane_vc_t1_ParamLimits

0xc259,	// (0x00025437) form_field_data_wide_pane_vc_t1

0xb314,	// (0x000244f2) input_focus_pane_cp6_vc_ParamLimits

0xb314,	// (0x000244f2) input_focus_pane_cp6_vc

0x3273,	// (0x0001c451) list_midp_pane_ParamLimits

0xd30b,	// (0x000264e9) scroll_pane_cp16_ParamLimits

0xd30b,	// (0x000264e9) scroll_pane_cp16

0xc4ef,	// (0x000256cd) button_value_adjust_pane_ParamLimits

0xc4ef,	// (0x000256cd) button_value_adjust_pane

0x972a,	// (0x00022908) button_value_adjust_pane_cp6_ParamLimits

0x972a,	// (0x00022908) button_value_adjust_pane_cp6

0x9840,	// (0x00022a1e) settings_code_pane_cp_ParamLimits

0x9840,	// (0x00022a1e) settings_code_pane_cp

0x83c8,	// (0x000215a6) cell_touch_pane_g1

0x83c8,	// (0x000215a6) cell_touch_pane_g2

0x0001,

0xf709,	// (0x000288e7) cell_touch_pane_g

0x9967,	// (0x00022b45) cell_touch_pane_cp_ParamLimits

0x9967,	// (0x00022b45) cell_touch_pane_cp

0x9983,	// (0x00022b61) cell_touch_pane_ParamLimits

0x9983,	// (0x00022b61) cell_touch_pane

0x83c8,	// (0x000215a6) scroll_sc2_down_pane_g1

0x83c8,	// (0x000215a6) scroll_sc2_up_pane_g1

0x84b8,	// (0x00021696) bg_set_opt_pane_cp4_vc

0xd7be,	// (0x0002699c) list_set_graphic_pane_vc_g1_ParamLimits

0xd7be,	// (0x0002699c) list_set_graphic_pane_vc_g1

0xd7ca,	// (0x000269a8) list_set_graphic_pane_vc_g2_ParamLimits

0xd7ca,	// (0x000269a8) list_set_graphic_pane_vc_g2

0x0001,

0xf9f9,	// (0x00028bd7) list_set_graphic_pane_vc_g_ParamLimits

0xf9f9,	// (0x00028bd7) list_set_graphic_pane_vc_g

0xd7d6,	// (0x000269b4) text_primary_small_cp13_vc_ParamLimits

0xd7d6,	// (0x000269b4) text_primary_small_cp13_vc

0xd2f8,	// (0x000264d6) list_set_graphic_pane_vc_ParamLimits

0xd2f8,	// (0x000264d6) list_set_graphic_pane_vc

0x84b8,	// (0x00021696) input_focus_pane_cp2_vc

0x83c8,	// (0x000215a6) setting_code_pane_vc_g1

0x865b,	// (0x00021839) setting_code_pane_vc_t1

0xd7ee,	// (0x000269cc) set_text_pane_vc_t1_ParamLimits

0xd7ee,	// (0x000269cc) set_text_pane_vc_t1

0x84b8,	// (0x00021696) input_focus_pane_cp1_vc

0xd80b,	// (0x000269e9) list_set_text_pane_vc

0x83c8,	// (0x000215a6) setting_text_pane_vc_g1

0x84b8,	// (0x00021696) bg_set_opt_pane_cp2_vc

0x8652,	// (0x00021830) setting_slider_graphic_pane_vc_g1

0xd815,	// (0x000269f3) setting_slider_graphic_pane_vc_t1

0xd825,	// (0x00026a03) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fe,	// (0x00028bdc) setting_slider_graphic_pane_vc_t

0xd835,	// (0x00026a13) slider_set_pane_cp_vc

0xd83d,	// (0x00026a1b) slider_set_pane_vc_g1

0xd846,	// (0x00026a24) slider_set_pane_vc_g2

0x0006,

0xfa03,	// (0x00028be1) slider_set_pane_vc_g

0xb363,	// (0x00024541) set_opt_bg_pane_g1_copy1

0xb36b,	// (0x00024549) set_opt_bg_pane_g2_copy1

0xd872,	// (0x00026a50) set_opt_bg_pane_g3_copy1

0xb37b,	// (0x00024559) set_opt_bg_pane_g4_copy1

0xb383,	// (0x00024561) set_opt_bg_pane_g5_copy1

0xb38b,	// (0x00024569) set_opt_bg_pane_g6_copy1

0xd87a,	// (0x00026a58) set_opt_bg_pane_g7_copy1

0xd884,	// (0x00026a62) set_opt_bg_pane_g8_copy1

0xd88c,	// (0x00026a6a) set_opt_bg_pane_g9_copy1

0x84b8,	// (0x00021696) bg_set_opt_pane_cp_vc

0xd894,	// (0x00026a72) setting_slider_pane_vc_t1

0xd8a3,	// (0x00026a81) setting_slider_pane_vc_t2

0xd8b3,	// (0x00026a91) setting_slider_pane_vc_t3

0x0002,

0xfa12,	// (0x00028bf0) setting_slider_pane_vc_t

0xd8c3,	// (0x00026aa1) slider_set_pane_vc

0x5e85,	// (0x0001f063) volume_set_pane_vc_g1

0x6132,	// (0x0001f310) volume_set_pane_vc_g2

0x613b,	// (0x0001f319) volume_set_pane_vc_g3

0x6144,	// (0x0001f322) volume_set_pane_vc_g4

0x614d,	// (0x0001f32b) volume_set_pane_vc_g5

0x6156,	// (0x0001f334) volume_set_pane_vc_g6

0x5eb2,	// (0x0001f090) volume_set_pane_vc_g7

0x615f,	// (0x0001f33d) volume_set_pane_vc_g8

0x6168,	// (0x0001f346) volume_set_pane_vc_g9

0x6171,	// (0x0001f34f) volume_set_pane_vc_g10

0x0009,

0xfa19,	// (0x00028bf7) volume_set_pane_vc_g

0xd8cb,	// (0x00026aa9) volume_set_pane_vc

0xd8d3,	// (0x00026ab1) button_value_adjust_pane_cp1_vc

0xd8dd,	// (0x00026abb) list_highlight_pane_cp2_vc

0xd8e6,	// (0x00026ac4) list_set_pane_vc_ParamLimits

0xd8e6,	// (0x00026ac4) list_set_pane_vc

0xd944,	// (0x00026b22) main_pane_set_vc_t1_ParamLimits

0xd944,	// (0x00026b22) main_pane_set_vc_t1

0xd959,	// (0x00026b37) main_pane_set_vc_t2_ParamLimits

0xd959,	// (0x00026b37) main_pane_set_vc_t2

0xd96b,	// (0x00026b49) main_pane_set_vc_t3_ParamLimits

0xd96b,	// (0x00026b49) main_pane_set_vc_t3

0xd97d,	// (0x00026b5b) main_pane_set_vc_t4_ParamLimits

0xd97d,	// (0x00026b5b) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x00028c0c) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x00028c0c) main_pane_set_vc_t

0xd98f,	// (0x00026b6d) setting_code_pane_vc_ParamLimits

0xd98f,	// (0x00026b6d) setting_code_pane_vc

0xd99e,	// (0x00026b7c) setting_slider_graphic_pane_vc

0xd99e,	// (0x00026b7c) setting_slider_pane_vc

0xd99e,	// (0x00026b7c) setting_text_pane_vc

0xd99e,	// (0x00026b7c) setting_volume_pane_vc

0xd9a6,	// (0x00026b84) scroll_pane_cp121_vc

0xb2ee,	// (0x000244cc) set_content_pane_vc

0xd9ae,	// (0x00026b8c) button_value_adjust_pane_g1

0xd9b7,	// (0x00026b95) button_value_adjust_pane_g2

0x0001,

0xfa81,	// (0x00028c5f) button_value_adjust_pane_g

0xd9c0,	// (0x00026b9e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xd9c0,	// (0x00026b9e) form_field_slider_wide_pane_vc_t1

0xd9d4,	// (0x00026bb2) form_field_slider_wide_pane_vc_t2_ParamLimits

0xd9d4,	// (0x00026bb2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa86,	// (0x00028c64) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa86,	// (0x00028c64) form_field_slider_wide_pane_vc_t

0x8626,	// (0x00021804) input_focus_pane_cp10_vc_ParamLimits

0x8626,	// (0x00021804) input_focus_pane_cp10_vc

0xda00,	// (0x00026bde) slider_cont_pane_cp1_vc_ParamLimits

0xda00,	// (0x00026bde) slider_cont_pane_cp1_vc

0xda10,	// (0x00026bee) slider_form_pane_g1_cp2

0xd846,	// (0x00026a24) slider_form_pane_g2_cp2

0xda3d,	// (0x00026c1b) form_field_slider_pane_vc_t3

0xda4b,	// (0x00026c29) form_field_slider_pane_vc_t4

0xda59,	// (0x00026c37) slider_form_pane_vc_ParamLimits

0xda59,	// (0x00026c37) slider_form_pane_vc

0xda66,	// (0x00026c44) form_field_slider_pane_vc_t1_ParamLimits

0xda66,	// (0x00026c44) form_field_slider_pane_vc_t1

0xd9d4,	// (0x00026bb2) form_field_slider_pane_vc_t2_ParamLimits

0xd9d4,	// (0x00026bb2) form_field_slider_pane_vc_t2

0x0001,

0xfa98,	// (0x00028c76) form_field_slider_pane_vc_t_ParamLimits

0xfa98,	// (0x00028c76) form_field_slider_pane_vc_t

0x8626,	// (0x00021804) input_focus_pane_cp9_vc_ParamLimits

0x8626,	// (0x00021804) input_focus_pane_cp9_vc

0xda82,	// (0x00026c60) slider_cont_pane_vc_ParamLimits

0xda82,	// (0x00026c60) slider_cont_pane_vc

0xda94,	// (0x00026c72) list_form_graphic_pane_cp_vc_ParamLimits

0xda94,	// (0x00026c72) list_form_graphic_pane_cp_vc

0xc251,	// (0x0002542f) form_field_popup_wide_pane_vc_g1

0xdaa9,	// (0x00026c87) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdaa9,	// (0x00026c87) form_field_popup_wide_pane_vc_t1

0xb314,	// (0x000244f2) input_focus_pane_cp8_vc_ParamLimits

0xb314,	// (0x000244f2) input_focus_pane_cp8_vc

0xdaee,	// (0x00026ccc) list_form_wide_pane_vc_ParamLimits

0xdaee,	// (0x00026ccc) list_form_wide_pane_vc

0xdafa,	// (0x00026cd8) list_form_graphic_pane_vc_g1

0xdb02,	// (0x00026ce0) list_form_graphic_pane_vc_t1_ParamLimits

0xdb02,	// (0x00026ce0) list_form_graphic_pane_vc_t1

0x8644,	// (0x00021822) list_highlight_pane_cp5_vc_ParamLimits

0x8644,	// (0x00021822) list_highlight_pane_cp5_vc

0xdb1e,	// (0x00026cfc) list_form_graphic_pane_vc_ParamLimits

0xdb1e,	// (0x00026cfc) list_form_graphic_pane_vc

0xc251,	// (0x0002542f) form_field_popup_pane_vc_g1

0xdb34,	// (0x00026d12) form_field_popup_pane_vc_t1_ParamLimits

0xdb34,	// (0x00026d12) form_field_popup_pane_vc_t1

0xb314,	// (0x000244f2) input_focus_pane_cp7_vc_ParamLimits

0xb314,	// (0x000244f2) input_focus_pane_cp7_vc

0xdb4b,	// (0x00026d29) list_form_pane_vc_ParamLimits

0xdb4b,	// (0x00026d29) list_form_pane_vc

0xdb57,	// (0x00026d35) data_form_pane_vc_t1_ParamLimits

0xdb57,	// (0x00026d35) data_form_pane_vc_t1

0xb363,	// (0x00024541) input_focus_pane_vc_g1

0xb36b,	// (0x00024549) input_focus_pane_vc_g2

0xb373,	// (0x00024551) input_focus_pane_vc_g3

0xb37b,	// (0x00024559) input_focus_pane_vc_g4

0xb383,	// (0x00024561) input_focus_pane_vc_g5

0xb38b,	// (0x00024569) input_focus_pane_vc_g6

0xb393,	// (0x00024571) input_focus_pane_vc_g7

0xb39b,	// (0x00024579) input_focus_pane_vc_g8

0xb3a3,	// (0x00024581) input_focus_pane_vc_g9

0x83c8,	// (0x000215a6) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00028870) input_focus_pane_vc_g

0xc245,	// (0x00025423) data_form_pane_vc_ParamLimits

0xc245,	// (0x00025423) data_form_pane_vc

0xc251,	// (0x0002542f) form_field_data_pane_vc_g1

0xdb72,	// (0x00026d50) form_field_data_pane_vc_t1_ParamLimits

0xdb72,	// (0x00026d50) form_field_data_pane_vc_t1

0xb314,	// (0x000244f2) input_focus_pane_vc_ParamLimits

0xb314,	// (0x000244f2) input_focus_pane_vc

0xdb8c,	// (0x00026d6a) button_value_adjust_pane_cp3_vc

0xdb94,	// (0x00026d72) button_value_adjust_pane_cp5_vc

0xdb9c,	// (0x00026d7a) form_field_data_pane_vc_ParamLimits

0xdb9c,	// (0x00026d7a) form_field_data_pane_vc

0xdbb3,	// (0x00026d91) form_field_data_pane_vc_cp2

0xdbbb,	// (0x00026d99) form_field_data_wide_pane_vc_ParamLimits

0xdbbb,	// (0x00026d99) form_field_data_wide_pane_vc

0xdbd1,	// (0x00026daf) form_field_data_wide_pane_vc_cp2

0xdbd9,	// (0x00026db7) form_field_popup_pane_vc_ParamLimits

0xdbd9,	// (0x00026db7) form_field_popup_pane_vc

0xdbf0,	// (0x00026dce) form_field_popup_wide_pane_vc_ParamLimits

0xdbf0,	// (0x00026dce) form_field_popup_wide_pane_vc

0xdc06,	// (0x00026de4) form_field_slider_pane_vc_ParamLimits

0xdc06,	// (0x00026de4) form_field_slider_pane_vc

0xdc19,	// (0x00026df7) form_field_slider_wide_pane_vc_ParamLimits

0xdc19,	// (0x00026df7) form_field_slider_wide_pane_vc

0x99a1,	// (0x00022b7f) grid_touch_1_pane_ParamLimits

0x99a1,	// (0x00022b7f) grid_touch_1_pane

0x99b5,	// (0x00022b93) grid_touch_2_pane_ParamLimits

0x99b5,	// (0x00022b93) grid_touch_2_pane

0xdc2c,	// (0x00026e0a) touch_pane_g1_ParamLimits

0xdc2c,	// (0x00026e0a) touch_pane_g1

0xdc3a,	// (0x00026e18) cell_app_pane_cp_wide_ParamLimits

0xdc3a,	// (0x00026e18) cell_app_pane_cp_wide

0xdc4b,	// (0x00026e29) grid_popup_fast_wide_pane_ParamLimits

0xdc4b,	// (0x00026e29) grid_popup_fast_wide_pane

0xdc5f,	// (0x00026e3d) scroll_pane_cp19_ParamLimits

0xdc5f,	// (0x00026e3d) scroll_pane_cp19

0x84b8,	// (0x00021696) bg_popup_window_pane_cp20

0xdc73,	// (0x00026e51) listscroll_popup_fast_wide_pane

0xd2de,	// (0x000264bc) grid_indicator_nsta_pane

0xdc7b,	// (0x00026e59) clock_nsta_pane_g1

0xdc84,	// (0x00026e62) clock_nsta_pane_t1

0x99df,	// (0x00022bbd) cell_indicator_nsta_pane_ParamLimits

0x99df,	// (0x00022bbd) cell_indicator_nsta_pane

0xdc2c,	// (0x00026e0a) cell_indicator_nsta_pane_g1

0x99fc,	// (0x00022bda) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x00028c87) cell_indicator_nsta_pane_g

0xdca0,	// (0x00026e7e) clock_nsta_pane_cp

0xdca8,	// (0x00026e86) indicator_nsta_pane_cp

0xdcb0,	// (0x00026e8e) nsta_clock_indic_pane_g1

0x8680,	// (0x0002185e) grid_indicator_pane

0xb771,	// (0x0002494f) scroll_pane_cp29

0x549a,	// (0x0001e678) indicator_nsta_pane_cp2_ParamLimits

0x549a,	// (0x0001e678) indicator_nsta_pane_cp2

0x8644,	// (0x00021822) main_apps_wheel_pane

0xc392,	// (0x00025570) form_midp_field_text_pane_ParamLimits

0xc4c1,	// (0x0002569f) scroll_bar_cp050_ParamLimits

0xdd11,	// (0x00026eef) cell_indicator_pane_ParamLimits

0xdd11,	// (0x00026eef) cell_indicator_pane

0xdd2c,	// (0x00026f0a) cell_indicator_pane_g1

0x9a12,	// (0x00022bf0) grid_wheel_folder_pane_ParamLimits

0x9a12,	// (0x00022bf0) grid_wheel_folder_pane

0x9a20,	// (0x00022bfe) list_wheel_apps_pane_ParamLimits

0x9a20,	// (0x00022bfe) list_wheel_apps_pane

0x9a2e,	// (0x00022c0c) main_apps_wheel_pane_g1_ParamLimits

0x9a2e,	// (0x00022c0c) main_apps_wheel_pane_g1

0x9a3a,	// (0x00022c18) main_apps_wheel_pane_g2_ParamLimits

0x9a3a,	// (0x00022c18) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x00028ca3) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x00028ca3) main_apps_wheel_pane_g

0x9a48,	// (0x00022c26) main_apps_wheel_pane_t1_ParamLimits

0x9a48,	// (0x00022c26) main_apps_wheel_pane_t1

0x9a5c,	// (0x00022c3a) list_wheel_apps_pane_g1

0x9a64,	// (0x00022c42) list_wheel_apps_pane_g2

0x9a6c,	// (0x00022c4a) list_wheel_apps_pane_g3

0x9a74,	// (0x00022c52) list_wheel_apps_pane_g4

0x9a7e,	// (0x00022c5c) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x00028ca8) list_wheel_apps_pane_g

0xbbd5,	// (0x00024db3) navi_icon_text_pane

0x2d9d,	// (0x0001bf7b) aid_fill_nsta

0xdd36,	// (0x00026f14) navi_icon_text_pane_g1

0xdd42,	// (0x00026f20) navi_icon_text_pane_t1

0xba77,	// (0x00024c55) list_set_graphic_pane_t1_ParamLimits

0xba77,	// (0x00024c55) list_set_graphic_pane_t1

0xcbd9,	// (0x00025db7) popup_midp_note_alarm_window_t6_ParamLimits

0xcbd9,	// (0x00025db7) popup_midp_note_alarm_window_t6

0xcbeb,	// (0x00025dc9) popup_midp_note_alarm_window_t7_ParamLimits

0xcbeb,	// (0x00025dc9) popup_midp_note_alarm_window_t7

0xcbfd,	// (0x00025ddb) popup_midp_note_alarm_window_t8_ParamLimits

0xcbfd,	// (0x00025ddb) popup_midp_note_alarm_window_t8

0xcc0f,	// (0x00025ded) popup_midp_note_alarm_window_t9_ParamLimits

0xcc0f,	// (0x00025ded) popup_midp_note_alarm_window_t9

0xcc21,	// (0x00025dff) popup_midp_note_alarm_window_t10_ParamLimits

0xcc21,	// (0x00025dff) popup_midp_note_alarm_window_t10

0xcc33,	// (0x00025e11) popup_midp_note_alarm_window_t11_ParamLimits

0xcc33,	// (0x00025e11) popup_midp_note_alarm_window_t11

0xcc45,	// (0x00025e23) scroll_pane_cp17_ParamLimits

0xcc45,	// (0x00025e23) scroll_pane_cp17

0x5e85,	// (0x0001f063) volume_small_pane_cp_g1

0x617a,	// (0x0001f358) volume_small_pane_cp_g2

0x6183,	// (0x0001f361) volume_small_pane_cp_g3

0x5e97,	// (0x0001f075) volume_small_pane_cp_g4

0x618c,	// (0x0001f36a) volume_small_pane_cp_g5

0x614d,	// (0x0001f32b) volume_small_pane_cp_g6

0x5ea9,	// (0x0001f087) volume_small_pane_cp_g7

0x6195,	// (0x0001f373) volume_small_pane_cp_g8

0x619e,	// (0x0001f37c) volume_small_pane_cp_g9

0x5ebb,	// (0x0001f099) volume_small_pane_cp_g10

0xbd73,	// (0x00024f51) midp_ticker_pane_g1_ParamLimits

0xbd7f,	// (0x00024f5d) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0002893c) midp_ticker_pane_g_ParamLimits

0xbd8b,	// (0x00024f69) midp_ticker_pane_t1_ParamLimits

0x2dc1,	// (0x0001bf9f) aid_fill_nsta_2

0xc4ad,	// (0x0002568b) list_form2_midp_pane

0xd37b,	// (0x00026559) midp_editing_number_pane_ParamLimits

0xd38a,	// (0x00026568) midp_ticker_pane_ParamLimits

0xdd54,	// (0x00026f32) form2_midp_field_pane

0xdd5c,	// (0x00026f3a) scroll_pane_cp51

0xdd7c,	// (0x00026f5a) form2_midp_button_pane_ParamLimits

0xdd7c,	// (0x00026f5a) form2_midp_button_pane

0xdd8e,	// (0x00026f6c) form2_midp_content_pane_ParamLimits

0xdd8e,	// (0x00026f6c) form2_midp_content_pane

0xdda8,	// (0x00026f86) form2_midp_field_choice_group_pane

0xddb0,	// (0x00026f8e) form2_midp_field_pane_g1

0xddb8,	// (0x00026f96) form2_midp_field_pane_g2

0xddc0,	// (0x00026f9e) form2_midp_field_pane_g3

0xddc8,	// (0x00026fa6) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x00028ccd) form2_midp_field_pane_g

0xddd0,	// (0x00026fae) form2_midp_gauge_slider_pane

0xddd8,	// (0x00026fb6) form2_midp_gauge_wait_pane

0xdde0,	// (0x00026fbe) form2_midp_image_pane_ParamLimits

0xdde0,	// (0x00026fbe) form2_midp_image_pane

0xddfb,	// (0x00026fd9) form2_midp_label_pane_ParamLimits

0xddfb,	// (0x00026fd9) form2_midp_label_pane

0x9ab1,	// (0x00022c8f) form2_midp_label_pane_cp_ParamLimits

0x9ab1,	// (0x00022c8f) form2_midp_label_pane_cp

0xde14,	// (0x00026ff2) form2_midp_string_pane_ParamLimits

0xde14,	// (0x00026ff2) form2_midp_string_pane

0x497d,	// (0x0001db5b) form2_midp_text_pane_ParamLimits

0x497d,	// (0x0001db5b) form2_midp_text_pane

0xde26,	// (0x00027004) form2_midp_time_pane

0xde36,	// (0x00027014) input_focus_pane_cp51_ParamLimits

0xde36,	// (0x00027014) input_focus_pane_cp51

0xde4e,	// (0x0002702c) form2_midp_label_pane_t1_ParamLimits

0xde4e,	// (0x0002702c) form2_midp_label_pane_t1

0x4996,	// (0x0001db74) form2_mdip_text_pane_t1_ParamLimits

0x4996,	// (0x0001db74) form2_mdip_text_pane_t1

0x49b4,	// (0x0001db92) form2_midp_time_pane_t1

0xde96,	// (0x00027074) form2_midp_gauge_slider_pane_t1

0x9ad2,	// (0x00022cb0) form2_midp_gauge_slider_pane_t2

0x9ae6,	// (0x00022cc4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x00028cd6) form2_midp_gauge_slider_pane_t

0xdea8,	// (0x00027086) form2_midp_slider_pane

0xdeb4,	// (0x00027092) form2_midp_gauge_wait_pane_t1

0xdec2,	// (0x000270a0) form2_midp_wait_pane_ParamLimits

0xdec2,	// (0x000270a0) form2_midp_wait_pane

0x9afa,	// (0x00022cd8) list_single_2graphic_pane_cp4_ParamLimits

0x9afa,	// (0x00022cd8) list_single_2graphic_pane_cp4

0x31df,	// (0x0001c3bd) list_single_midp_graphic_pane_cp_ParamLimits

0x31df,	// (0x0001c3bd) list_single_midp_graphic_pane_cp

0x84b8,	// (0x00021696) list_highlight_pane_cp20

0xdeee,	// (0x000270cc) list_single_2graphic_pane_g1_cp4

0xd6c3,	// (0x000268a1) list_single_2graphic_pane_g2_cp4

0xdef6,	// (0x000270d4) list_single_2graphic_pane_t1_cp4

0x8644,	// (0x00021822) list_highlight_pane_cp21

0xdf05,	// (0x000270e3) list_single_midp_graphic_pane_g4_cp

0xdf14,	// (0x000270f2) list_single_midp_graphic_pane_t1_cp

0x9b10,	// (0x00022cee) form2_mdip_string_pane_t1_ParamLimits

0x9b10,	// (0x00022cee) form2_mdip_string_pane_t1

0x84b8,	// (0x00021696) bg_wml_button_pane_cp2

0x83c8,	// (0x000215a6) form2_midp_image_pane_g1

0x3f29,	// (0x0001d107) list_double_large_graphic_pane_g5_ParamLimits

0x3f29,	// (0x0001d107) list_double_large_graphic_pane_g5

0xb46d,	// (0x0002464b) midp_form_pane_ParamLimits

0x8644,	// (0x00021822) main_apps_wheel_pane_ParamLimits

0x91c9,	// (0x000223a7) popup_preview_window_ParamLimits

0x91c9,	// (0x000223a7) popup_preview_window

0x5d04,	// (0x0001eee2) popup_touch_info_window_ParamLimits

0x5d04,	// (0x0001eee2) popup_touch_info_window

0x5d22,	// (0x0001ef00) popup_touch_menu_window_ParamLimits

0x5d22,	// (0x0001ef00) popup_touch_menu_window

0x83be,	// (0x0002159c) bg_popup_sub_pane_cp6

0xdf29,	// (0x00027107) list_touch_menu_pane

0xdf31,	// (0x0002710f) list_single_touch_menu_pane_ParamLimits

0xdf31,	// (0x0002710f) list_single_touch_menu_pane

0xdf45,	// (0x00027123) list_single_touch_menu_pane_t1

0x8644,	// (0x00021822) bg_popup_sub_pane_cp7_ParamLimits

0x8644,	// (0x00021822) bg_popup_sub_pane_cp7

0xdf53,	// (0x00027131) heading_sub_pane

0xdf5b,	// (0x00027139) list_touch_info_pane_ParamLimits

0xdf5b,	// (0x00027139) list_touch_info_pane

0xdf6a,	// (0x00027148) list_single_touch_info_pane_ParamLimits

0xdf6a,	// (0x00027148) list_single_touch_info_pane

0xdf7c,	// (0x0002715a) list_single_touch_info_pane_t1

0xdf8a,	// (0x00027168) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x00028ce4) list_single_touch_info_pane_t

0xbd49,	// (0x00024f27) bg_popup_heading_pane_cp

0xdf98,	// (0x00027176) heading_sub_pane_t1

0xc20b,	// (0x000253e9) bg_popup_preview_window_pane_cp_ParamLimits

0xc20b,	// (0x000253e9) bg_popup_preview_window_pane_cp

0xdf53,	// (0x00027131) heading_preview_pane

0xdf5b,	// (0x00027139) list_preview_pane_ParamLimits

0xdf5b,	// (0x00027139) list_preview_pane

0xdfa6,	// (0x00027184) popup_preview_window_g1

0xdf6a,	// (0x00027148) list_single_preview_pane_ParamLimits

0xdf6a,	// (0x00027148) list_single_preview_pane

0xdfae,	// (0x0002718c) list_single_preview_pane_g1

0xdfb6,	// (0x00027194) list_single_preview_pane_t1

0xdf7c,	// (0x0002715a) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x00028ce9) list_single_preview_pane_t

0xdfc4,	// (0x000271a2) bg_popup_heading_pane_cp2_ParamLimits

0xdfc4,	// (0x000271a2) bg_popup_heading_pane_cp2

0xdfda,	// (0x000271b8) heading_preview_pane_g1

0xdfe2,	// (0x000271c0) heading_preview_pane_t1_ParamLimits

0xdfe2,	// (0x000271c0) heading_preview_pane_t1

0x8697,	// (0x00021875) soft_indicator_pane_t1_ParamLimits

0x8bfe,	// (0x00021ddc) scroll_pane_ParamLimits

0xb66a,	// (0x00024848) scroll_sc2_left_pane

0xb673,	// (0x00024851) scroll_sc2_right_pane

0xb692,	// (0x00024870) scroll_bg_pane_g1_ParamLimits

0xb6a7,	// (0x00024885) scroll_bg_pane_g2_ParamLimits

0xb6bf,	// (0x0002489d) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x000288c7) scroll_bg_pane_g_ParamLimits

0xb692,	// (0x00024870) scroll_handle_pane_g1_ParamLimits

0xb6e1,	// (0x000248bf) scroll_handle_pane_g2_ParamLimits

0xb6bf,	// (0x0002489d) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x000288ce) scroll_handle_pane_g_ParamLimits

0x57d4,	// (0x0001e9b2) popup_choice_list_window_ParamLimits

0x57d4,	// (0x0001e9b2) popup_choice_list_window

0xc0e1,	// (0x000252bf) choice_list_pane

0xc163,	// (0x00025341) cell_toolbar_pane_t1

0xc18b,	// (0x00025369) toolbar_button_pane_ParamLimits

0xd07f,	// (0x0002625d) ai_gene_pane_1_t2_ParamLimits

0xd07f,	// (0x0002625d) ai_gene_pane_1_t2

0x0001,

0xf90c,	// (0x00028aea) ai_gene_pane_1_t_ParamLimits

0xf90c,	// (0x00028aea) ai_gene_pane_1_t

0xdfff,	// (0x000271dd) scroll_sc2_left_pane_g1

0xdfff,	// (0x000271dd) scroll_sc2_right_pane_g1

0xb46d,	// (0x0002464b) bg_popup_sub_pane_cp10

0xe009,	// (0x000271e7) list_choice_list_pane

0xe022,	// (0x00027200) list_single_choice_list_pane_ParamLimits

0xe022,	// (0x00027200) list_single_choice_list_pane

0xe035,	// (0x00027213) list_single_choice_list_pane_g1

0xb458,	// (0x00024636) list_single_choice_list_pane_t1_ParamLimits

0xb458,	// (0x00024636) list_single_choice_list_pane_t1

0xe03d,	// (0x0002721b) choice_list_pane_g1

0xe045,	// (0x00027223) choice_list_pane_t1

0x83be,	// (0x0002159c) input_focus_pane_cp11

0xb5df,	// (0x000247bd) title_pane_stacon_g2_ParamLimits

0xb5df,	// (0x000247bd) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x000288ad) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x000288ad) title_pane_stacon_g

0xbd49,	// (0x00024f27) cursor_press_pane

0x8e82,	// (0x00022060) popup_fep_hwr_window_ParamLimits

0x8e82,	// (0x00022060) popup_fep_hwr_window

0x58f4,	// (0x0001ead2) popup_fep_vkb_window_ParamLimits

0x58f4,	// (0x0001ead2) popup_fep_vkb_window

0xe053,	// (0x00027231) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x00028d12) fep_vkb_side_pane_g_ParamLimits

0x61e0,	// (0x0001f3be) fep_hwr_candidate_pane_ParamLimits

0x61e0,	// (0x0001f3be) fep_hwr_candidate_pane

0x620a,	// (0x0001f3e8) fep_hwr_side_pane_ParamLimits

0x620a,	// (0x0001f3e8) fep_hwr_side_pane

0x622a,	// (0x0001f408) fep_hwr_top_pane_ParamLimits

0x622a,	// (0x0001f408) fep_hwr_top_pane

0x6242,	// (0x0001f420) fep_hwr_write_pane_ParamLimits

0x6242,	// (0x0001f420) fep_hwr_write_pane

0xfb34,	// (0x00028d12) fep_vkb_side_pane_g

0xe05b,	// (0x00027239) fep_hwr_top_pane_g1

0xe06d,	// (0x0002724b) fep_hwr_top_pane_g2

0x626e,	// (0x0001f44c) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x00028cee) fep_hwr_top_pane_g

0x6283,	// (0x0001f461) fep_hwr_top_text_pane

0xb837,	// (0x00024a15) fep_hwr_top_text_pane_g1

0xe0a3,	// (0x00027281) fep_hwr_top_text_pane_t1

0x6379,	// (0x0001f557) fep_hwr_candidate_pane_g1

0xe1ce,	// (0x000273ac) fep_vkb_keypad_pane_g3_ParamLimits

0xe1ce,	// (0x000273ac) fep_vkb_keypad_pane_g3

0xe1f6,	// (0x000273d4) fep_vkb_keypad_pane_g4_ParamLimits

0xe1f6,	// (0x000273d4) fep_vkb_keypad_pane_g4

0xe265,	// (0x00027443) fep_vkb_bottom_pane_g2_ParamLimits

0xe265,	// (0x00027443) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x00028d19) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x00028d19) fep_vkb_bottom_pane_g

0xdfff,	// (0x000271dd) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x00028d23) cell_vkb_side_pane_g

0xe2a9,	// (0x00027487) cell_vkb_side_pane_t1

0xe2b7,	// (0x00027495) cell_vkb_side_pane_t1_copy1

0xdfff,	// (0x000271dd) bg_fep_vkb_candidate_pane_g2

0xe38d,	// (0x0002756b) cell_vkb_candidate_pane_ParamLimits

0xe0b1,	// (0x0002728f) aid_size_cell_vkb_ParamLimits

0xe0b1,	// (0x0002728f) aid_size_cell_vkb

0xe38d,	// (0x0002756b) cell_vkb_candidate_pane

0x6393,	// (0x0001f571) bg_popup_fep_shadow_pane_g1

0x9bed,	// (0x00022dcb) fep_vkb_bottom_pane_ParamLimits

0x9bed,	// (0x00022dcb) fep_vkb_bottom_pane

0xe13c,	// (0x0002731a) fep_vkb_candidate_pane_ParamLimits

0xe13c,	// (0x0002731a) fep_vkb_candidate_pane

0x9c12,	// (0x00022df0) fep_vkb_keypad_pane_ParamLimits

0x9c12,	// (0x00022df0) fep_vkb_keypad_pane

0x9c47,	// (0x00022e25) fep_vkb_side_pane_ParamLimits

0x9c47,	// (0x00022e25) fep_vkb_side_pane

0x9c83,	// (0x00022e61) fep_vkb_top_pane_ParamLimits

0x9c83,	// (0x00022e61) fep_vkb_top_pane

0xe162,	// (0x00027340) fep_vkb_top_pane_g1_ParamLimits

0xe162,	// (0x00027340) fep_vkb_top_pane_g1

0xe171,	// (0x0002734f) fep_vkb_top_pane_g2_ParamLimits

0xe171,	// (0x0002734f) fep_vkb_top_pane_g2

0xe180,	// (0x0002735e) fep_vkb_top_pane_g3_ParamLimits

0xe180,	// (0x0002735e) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x00028d09) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x00028d09) fep_vkb_top_pane_g

0xe19e,	// (0x0002737c) fep_vkb_top_text_pane_ParamLimits

0xe19e,	// (0x0002737c) fep_vkb_top_text_pane

0x9cb8,	// (0x00022e96) fep_vkb_side_pane_g1_ParamLimits

0x9cb8,	// (0x00022e96) fep_vkb_side_pane_g1

0xe1bd,	// (0x0002739b) grid_vkb_side_pane_ParamLimits

0xe1bd,	// (0x0002739b) grid_vkb_side_pane

0x639b,	// (0x0001f579) bg_popup_fep_shadow_pane_g2

0x63a4,	// (0x0001f582) bg_popup_fep_shadow_pane_g3

0x63ac,	// (0x0001f58a) bg_popup_fep_shadow_pane_g4

0x63b5,	// (0x0001f593) bg_popup_fep_shadow_pane_g5

0x63bf,	// (0x0001f59d) bg_popup_fep_shadow_pane_g6

0x63c7,	// (0x0001f5a5) bg_popup_fep_shadow_pane_g7

0xb383,	// (0x00024561) bg_popup_fep_shadow_pane_g8

0xe214,	// (0x000273f2) grid_vkb_keypad_number_pane_ParamLimits

0xe214,	// (0x000273f2) grid_vkb_keypad_number_pane

0xe224,	// (0x00027402) grid_vkb_keypad_pane_ParamLimits

0xe224,	// (0x00027402) grid_vkb_keypad_pane

0xe24a,	// (0x00027428) fep_vkb_bottom_pane_g1_ParamLimits

0xe24a,	// (0x00027428) fep_vkb_bottom_pane_g1

0xe273,	// (0x00027451) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe273,	// (0x00027451) grid_vkb_keypad_bottom_left_pane

0xe288,	// (0x00027466) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe288,	// (0x00027466) grid_vkb_keypad_bottom_right_pane

0xe29d,	// (0x0002747b) fep_vkb_top_text_pane_g1

0x9cff,	// (0x00022edd) fep_vkb_top_text_pane_t1

0x9d11,	// (0x00022eef) cell_vkb_side_pane_ParamLimits

0x9d11,	// (0x00022eef) cell_vkb_side_pane

0xdfff,	// (0x000271dd) cell_vkb_side_pane_g1

0xe2c5,	// (0x000274a3) cell_vkb_keypad_pane_ParamLimits

0xe2c5,	// (0x000274a3) cell_vkb_keypad_pane

0xe33a,	// (0x00027518) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x00028d36) bg_popup_fep_shadow_pane_g

0xdfff,	// (0x000271dd) cell_hwr_side_pane_g1

0xdfff,	// (0x000271dd) cell_hwr_side_pane_g2

0xe344,	// (0x00027522) cell_vkb_keypad_pane_t1

0x9d27,	// (0x00022f05) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x9d27,	// (0x00022f05) cell_vkb_keypad_bottom_left_pane

0x9d3c,	// (0x00022f1a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x9d3c,	// (0x00022f1a) cell_vkb_keypad_bottom_right_pane

0xdfff,	// (0x000271dd) cell_vkb_keypad_bottom_left_pane_g1

0xdfff,	// (0x000271dd) cell_vkb_keypad_bottom_right_pane_g1

0xe352,	// (0x00027530) cell_vkb_keypad_number_pane_ParamLimits

0xe352,	// (0x00027530) cell_vkb_keypad_number_pane

0xe371,	// (0x0002754f) cell_vkb_keypad_number_pane_g1

0xe37b,	// (0x00027559) cell_vkb_keypad_number_pane_g2

0xe384,	// (0x00027562) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x00028d28) cell_vkb_keypad_number_pane_g

0xe344,	// (0x00027522) cell_vkb_keypad_number_pane_t1

0xe3a8,	// (0x00027586) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x00028d23) cell_hwr_side_pane_g

0xe3c1,	// (0x0002759f) cell_hwr_side_pane_t1

0x63d9,	// (0x0001f5b7) cell_hwr_side_pane_t1_copy1

0xe190,	// (0x0002736e) cell_hwr_candidate_pane_g1

0x63e7,	// (0x0001f5c5) cell_hwr_candidate_pane_t1

0xdfff,	// (0x000271dd) cell_vkb_candidate_pane_g2

0xe447,	// (0x00027625) cell_vkb_candidate_pane_t1

0x61a7,	// (0x0001f385) bg_popup_fep_shadow_pane_ParamLimits

0x61a7,	// (0x0001f385) bg_popup_fep_shadow_pane

0x1499,	// (0x0001a677) bg_fep_hwr_top_pane_g4

0xe07f,	// (0x0002725d) bg_hwr_side_pane_g1_ParamLimits

0xe07f,	// (0x0002725d) bg_hwr_side_pane_g1

0x9ba6,	// (0x00022d84) cell_hwr_side_pane_ParamLimits

0x9ba6,	// (0x00022d84) cell_hwr_side_pane

0x62fa,	// (0x0001f4d8) fep_hwr_write_pane_g1_ParamLimits

0x62fa,	// (0x0001f4d8) fep_hwr_write_pane_g1

0x6307,	// (0x0001f4e5) fep_hwr_write_pane_g2_ParamLimits

0x6307,	// (0x0001f4e5) fep_hwr_write_pane_g2

0x6314,	// (0x0001f4f2) fep_hwr_write_pane_g3_ParamLimits

0x6314,	// (0x0001f4f2) fep_hwr_write_pane_g3

0x9bc6,	// (0x00022da4) fep_hwr_write_pane_g4_ParamLimits

0x9bc6,	// (0x00022da4) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x00028cf5) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x00028cf5) fep_hwr_write_pane_g

0x1499,	// (0x0001a677) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1499,	// (0x0001a677) bg_fep_hwr_candidate_pane_g2

0x6337,	// (0x0001f515) cell_hwr_candidate_pane_ParamLimits

0x6337,	// (0x0001f515) cell_hwr_candidate_pane

0x6379,	// (0x0001f557) fep_hwr_candidate_pane_g1_ParamLimits

0xe0df,	// (0x000272bd) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe0df,	// (0x000272bd) bg_popup_fep_shadow_pane_cp2

0xe190,	// (0x0002736e) fep_vkb_top_pane_g4_ParamLimits

0xe190,	// (0x0002736e) fep_vkb_top_pane_g4

0xe1af,	// (0x0002738d) fep_vkb_side_pane_g2_ParamLimits

0xe1af,	// (0x0002738d) fep_vkb_side_pane_g2

0x7e94,	// (0x00021072) list_setting_pane_t4_ParamLimits

0x7e94,	// (0x00021072) list_setting_pane_t4

0x7f16,	// (0x000210f4) list_setting_number_pane_t5_ParamLimits

0x7f16,	// (0x000210f4) list_setting_number_pane_t5

0x2bb3,	// (0x0001bd91) list_double_heading_pane_cp2_ParamLimits

0x2bb3,	// (0x0001bd91) list_double_heading_pane_cp2

0x8c32,	// (0x00021e10) list_double_heading_pane_g1_cp2_ParamLimits

0x8c32,	// (0x00021e10) list_double_heading_pane_g1_cp2

0xb322,	// (0x00024500) list_double_heading_pane_g2_cp2_ParamLimits

0xb322,	// (0x00024500) list_double_heading_pane_g2_cp2

0xe455,	// (0x00027633) list_double_heading_pane_t1_cp2_ParamLimits

0xe455,	// (0x00027633) list_double_heading_pane_t1_cp2

0xe46b,	// (0x00027649) list_double_heading_pane_t2_cp2_ParamLimits

0xe46b,	// (0x00027649) list_double_heading_pane_t2_cp2

0x83b6,	// (0x00021594) aid_value_unit2

0x5031,	// (0x0001e20f) popup_preview_fixed_window

0x8777,	// (0x00021955) bg_popup_preview_window_pane_cp02

0xe47d,	// (0x0002765b) list_preview_fixed_pane

0xe4c3,	// (0x000276a1) list_empty_pane_fp_ParamLimits

0xe4c3,	// (0x000276a1) list_empty_pane_fp

0xe4c3,	// (0x000276a1) list_single_cale_day_pane_fp_ParamLimits

0xe4c3,	// (0x000276a1) list_single_cale_day_pane_fp

0xe4c3,	// (0x000276a1) list_single_graphic_heading_pane_fp_ParamLimits

0xe4c3,	// (0x000276a1) list_single_graphic_heading_pane_fp

0xe4c3,	// (0x000276a1) list_single_graphic_pane_fp_ParamLimits

0xe4c3,	// (0x000276a1) list_single_graphic_pane_fp

0xe4c3,	// (0x000276a1) list_single_heading_pane_fp_ParamLimits

0xe4c3,	// (0x000276a1) list_single_heading_pane_fp

0xe4c3,	// (0x000276a1) list_single_pane_fp_ParamLimits

0xe4c3,	// (0x000276a1) list_single_pane_fp

0xe4d9,	// (0x000276b7) list_single_pane_fp_g1_ParamLimits

0xe4d9,	// (0x000276b7) list_single_pane_fp_g1

0x3d98,	// (0x0001cf76) list_single_pane_fp_g2_ParamLimits

0x3d98,	// (0x0001cf76) list_single_pane_fp_g2

0x49c7,	// (0x0001dba5) list_single_pane_fp_g3_ParamLimits

0x49c7,	// (0x0001dba5) list_single_pane_fp_g3

0xe4e5,	// (0x000276c3) list_single_pane_fp_g4_ParamLimits

0xe4e5,	// (0x000276c3) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x00028d57) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x00028d57) list_single_pane_fp_g

0x49db,	// (0x0001dbb9) list_single_pane_fp_t1_ParamLimits

0x49db,	// (0x0001dbb9) list_single_pane_fp_t1

0x49f2,	// (0x0001dbd0) list_single_graphic_pane_fp_g1_ParamLimits

0x49f2,	// (0x0001dbd0) list_single_graphic_pane_fp_g1

0xe4d9,	// (0x000276b7) list_single_graphic_pane_fp_g2_ParamLimits

0xe4d9,	// (0x000276b7) list_single_graphic_pane_fp_g2

0x3d98,	// (0x0001cf76) list_single_graphic_pane_fp_g3_ParamLimits

0x3d98,	// (0x0001cf76) list_single_graphic_pane_fp_g3

0x49c7,	// (0x0001dba5) list_single_graphic_pane_fp_g4_ParamLimits

0x49c7,	// (0x0001dba5) list_single_graphic_pane_fp_g4

0xe4e5,	// (0x000276c3) list_single_graphic_pane_fp_g5_ParamLimits

0xe4e5,	// (0x000276c3) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x00028d60) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x00028d60) list_single_graphic_pane_fp_g

0x49fe,	// (0x0001dbdc) list_single_graphic_pane_fp_t1_ParamLimits

0x49fe,	// (0x0001dbdc) list_single_graphic_pane_fp_t1

0x49f2,	// (0x0001dbd0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x49f2,	// (0x0001dbd0) list_single_graphic_heading_pane_fp_g1

0xe4d9,	// (0x000276b7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe4d9,	// (0x000276b7) list_single_graphic_heading_pane_fp_g2

0x3d98,	// (0x0001cf76) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3d98,	// (0x0001cf76) list_single_graphic_heading_pane_fp_g3

0x49c7,	// (0x0001dba5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x49c7,	// (0x0001dba5) list_single_graphic_heading_pane_fp_g4

0xe4e5,	// (0x000276c3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe4e5,	// (0x000276c3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x00028d60) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x00028d60) list_single_graphic_heading_pane_fp_g

0x4a14,	// (0x0001dbf2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4a14,	// (0x0001dbf2) list_single_graphic_heading_pane_fp_t1

0x4a2a,	// (0x0001dc08) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4a2a,	// (0x0001dc08) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x00028d6b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x00028d6b) list_single_graphic_heading_pane_fp_t

0x4a3c,	// (0x0001dc1a) list_single_cale_day_pane_fp_g1_ParamLimits

0x4a3c,	// (0x0001dc1a) list_single_cale_day_pane_fp_g1

0xe4f1,	// (0x000276cf) list_single_cale_day_pane_fp_g2_ParamLimits

0xe4f1,	// (0x000276cf) list_single_cale_day_pane_fp_g2

0x4a74,	// (0x0001dc52) list_single_cale_day_pane_fp_g3_ParamLimits

0x4a74,	// (0x0001dc52) list_single_cale_day_pane_fp_g3

0x4a9c,	// (0x0001dc7a) list_single_cale_day_pane_fp_g4_ParamLimits

0x4a9c,	// (0x0001dc7a) list_single_cale_day_pane_fp_g4

0x4ac0,	// (0x0001dc9e) list_single_cale_day_pane_fp_g5_ParamLimits

0x4ac0,	// (0x0001dc9e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x00028d70) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x00028d70) list_single_cale_day_pane_fp_g

0x4ae4,	// (0x0001dcc2) list_single_cale_day_pane_fp_t1_ParamLimits

0x4ae4,	// (0x0001dcc2) list_single_cale_day_pane_fp_t1

0x4b0a,	// (0x0001dce8) list_single_cale_day_pane_fp_t2_ParamLimits

0x4b0a,	// (0x0001dce8) list_single_cale_day_pane_fp_t2

0x4b23,	// (0x0001dd01) list_single_cale_day_pane_fp_t3_ParamLimits

0x4b23,	// (0x0001dd01) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x00028d7b) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x00028d7b) list_single_cale_day_pane_fp_t

0xe4d9,	// (0x000276b7) list_empty_pane_fp_g1_ParamLimits

0xe4d9,	// (0x000276b7) list_empty_pane_fp_g1

0x4b3c,	// (0x0001dd1a) list_empty_pane_fp_t1

0x4b4a,	// (0x0001dd28) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x00028d82) list_empty_pane_fp_t

0xe4d9,	// (0x000276b7) list_single_heading_pane_fp_g1_ParamLimits

0xe4d9,	// (0x000276b7) list_single_heading_pane_fp_g1

0x3d98,	// (0x0001cf76) list_single_heading_pane_fp_g2_ParamLimits

0x3d98,	// (0x0001cf76) list_single_heading_pane_fp_g2

0x49c7,	// (0x0001dba5) list_single_heading_pane_fp_g3_ParamLimits

0x49c7,	// (0x0001dba5) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x00028d87) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x00028d87) list_single_heading_pane_fp_g

0x4b58,	// (0x0001dd36) list_single_heading_pane_fp_t1_ParamLimits

0x4b58,	// (0x0001dd36) list_single_heading_pane_fp_t1

0x4b6a,	// (0x0001dd48) list_single_heading_pane_fp_t2_ParamLimits

0x4b6a,	// (0x0001dd48) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x00028d8e) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x00028d8e) list_single_heading_pane_fp_t

0xb479,	// (0x00024657) aid_size_cell_fast

0x875a,	// (0x00021938) soft_indicator_pane_cp1_t1

0xb4b3,	// (0x00024691) cell_app_pane_cp2_ParamLimits

0xb4b3,	// (0x00024691) cell_app_pane_cp2

0x61c9,	// (0x0001f3a7) fep_hwr_candidate_drop_down_list_pane

0x14a7,	// (0x0001a685) fep_hwr_candidate_pane_g3_ParamLimits

0x14a7,	// (0x0001a685) fep_hwr_candidate_pane_g3

0x14b4,	// (0x0001a692) fep_hwr_candidate_pane_g4_ParamLimits

0x14b4,	// (0x0001a692) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x00028d02) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x00028d02) fep_hwr_candidate_pane_g

0xe12b,	// (0x00027309) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe12b,	// (0x00027309) fep_vkb_candidate_drop_down_list_pane

0xe3b0,	// (0x0002758e) fep_vkb_candidate_pane_g3

0xe3b8,	// (0x00027596) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x00028d2f) fep_vkb_candidate_pane_g

0xe190,	// (0x0002736e) cell_hwr_candidate_pane_g1_ParamLimits

0xe3cf,	// (0x000275ad) cell_hwr_candidate_pane_g3_ParamLimits

0xe3cf,	// (0x000275ad) cell_hwr_candidate_pane_g3

0xe3f0,	// (0x000275ce) cell_hwr_candidate_pane_g4_ParamLimits

0xe3f0,	// (0x000275ce) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x00028d49) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x00028d49) cell_hwr_candidate_pane_g

0xe411,	// (0x000275ef) cell_vkb_candidate_pane_g3_ParamLimits

0xe411,	// (0x000275ef) cell_vkb_candidate_pane_g3

0xe42c,	// (0x0002760a) cell_vkb_candidate_pane_g4_ParamLimits

0xe42c,	// (0x0002760a) cell_vkb_candidate_pane_g4

0xe4fd,	// (0x000276db) cell_app_pane_cp2_g1_ParamLimits

0xe4fd,	// (0x000276db) cell_app_pane_cp2_g1

0xe51b,	// (0x000276f9) cell_app_pane_cp2_g2_ParamLimits

0xe51b,	// (0x000276f9) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x00028d93) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x00028d93) cell_app_pane_cp2_g

0xe527,	// (0x00027705) cell_app_pane_cp2_t1_ParamLimits

0xe527,	// (0x00027705) cell_app_pane_cp2_t1

0xb314,	// (0x000244f2) grid_highlight_pane_cp1_ParamLimits

0xb314,	// (0x000244f2) grid_highlight_pane_cp1

0x6405,	// (0x0001f5e3) cell_hwr_candidate_pane_cp1_ParamLimits

0x6405,	// (0x0001f5e3) cell_hwr_candidate_pane_cp1

0xe190,	// (0x0002736e) fep_hwr_candidate_drop_down_list_pane_g1

0xe539,	// (0x00027717) fep_hwr_candidate_drop_down_list_pane_g2

0xe546,	// (0x00027724) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00028d98) fep_hwr_candidate_drop_down_list_pane_g

0x6424,	// (0x0001f602) fep_hwr_candidate_drop_down_list_scroll_pane

0x642d,	// (0x0001f60b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x642d,	// (0x0001f60b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x643a,	// (0x0001f618) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x643a,	// (0x0001f618) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6447,	// (0x0001f625) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6447,	// (0x0001f625) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xe411,	// (0x000275ef) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe411,	// (0x000275ef) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xe42c,	// (0x0002760a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe42c,	// (0x0002760a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6454,	// (0x0001f632) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6454,	// (0x0001f632) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x646f,	// (0x0001f64d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x646f,	// (0x0001f64d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x648a,	// (0x0001f668) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x648a,	// (0x0001f668) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x00028d9f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x00028d9f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xe553,	// (0x00027731) cell_vkb_candidate_pane_cp1_ParamLimits

0xe553,	// (0x00027731) cell_vkb_candidate_pane_cp1

0xe190,	// (0x0002736e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe190,	// (0x0002736e) fep_vkb_candidate_drop_down_list_pane_g1

0xe539,	// (0x00027717) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe539,	// (0x00027717) fep_vkb_candidate_drop_down_list_pane_g2

0xe546,	// (0x00027724) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe546,	// (0x00027724) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00028d98) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x00028d98) fep_vkb_candidate_drop_down_list_pane_g

0xe573,	// (0x00027751) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe573,	// (0x00027751) fep_vkb_candidate_drop_down_list_scroll_pane

0xe580,	// (0x0002775e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe580,	// (0x0002775e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe58d,	// (0x0002776b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe58d,	// (0x0002776b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe599,	// (0x00027777) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe599,	// (0x00027777) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe3cf,	// (0x000275ad) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe3cf,	// (0x000275ad) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe3f0,	// (0x000275ce) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe3f0,	// (0x000275ce) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe5a5,	// (0x00027783) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe5a5,	// (0x00027783) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe5c6,	// (0x000277a4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe5c6,	// (0x000277a4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe5e7,	// (0x000277c5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe5e7,	// (0x000277c5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00028db0) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00028db0) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x225d,	// (0x0001b43b) title_pane_g1_ParamLimits

0x2270,	// (0x0001b44e) title_pane_g2_ParamLimits

0xf554,	// (0x00028732) title_pane_g_ParamLimits

0xb827,	// (0x00024a05) aid_call2_pane

0xb82f,	// (0x00024a0d) aid_call_pane

0xb837,	// (0x00024a15) popup_clock_analogue_window_g1

0xb837,	// (0x00024a15) popup_clock_analogue_window_g2

0x53a4,	// (0x0001e582) popup_clock_analogue_window_g3

0x53ad,	// (0x0001e58b) popup_clock_analogue_window_g4

0x83c8,	// (0x000215a6) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x000288dc) popup_clock_analogue_window_g

0x53b5,	// (0x0001e593) popup_clock_analogue_window_t1

0x53c3,	// (0x0001e5a1) clock_digital_number_pane_ParamLimits

0x53c3,	// (0x0001e5a1) clock_digital_number_pane

0x53cf,	// (0x0001e5ad) clock_digital_number_pane_cp02_ParamLimits

0x53cf,	// (0x0001e5ad) clock_digital_number_pane_cp02

0x53db,	// (0x0001e5b9) clock_digital_number_pane_cp03_ParamLimits

0x53db,	// (0x0001e5b9) clock_digital_number_pane_cp03

0x53e7,	// (0x0001e5c5) clock_digital_number_pane_cp04_ParamLimits

0x53e7,	// (0x0001e5c5) clock_digital_number_pane_cp04

0x53f3,	// (0x0001e5d1) clock_digital_separator_pane_ParamLimits

0x53f3,	// (0x0001e5d1) clock_digital_separator_pane

0x53ff,	// (0x0001e5dd) popup_clock_digital_window_t1_ParamLimits

0x53ff,	// (0x0001e5dd) popup_clock_digital_window_t1

0x83c8,	// (0x000215a6) clock_digital_number_pane_g1

0x83c8,	// (0x000215a6) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x000288e7) clock_digital_number_pane_g

0x83c8,	// (0x000215a6) clock_digital_separator_pane_g1

0x83c8,	// (0x000215a6) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x000288e7) clock_digital_separator_pane_g

0x2d9d,	// (0x0001bf7b) aid_fill_nsta_ParamLimits

0x2ed3,	// (0x0001c0b1) indicator_nsta_pane_ParamLimits

0xc088,	// (0x00025266) popup_clock_analogue_window

0xc088,	// (0x00025266) popup_clock_digital_window

0xd2de,	// (0x000264bc) grid_indicator_nsta_pane_ParamLimits

0xdc92,	// (0x00026e70) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x00028c82) clock_nsta_pane_t

0x5368,	// (0x0001e546) aid_size_max_handle

0x5372,	// (0x0001e550) aid_size_min_handle

0xbd49,	// (0x00024f27) editor_scroll_pane

0xe602,	// (0x000277e0) ex_editor_pane

0xb434,	// (0x00024612) scroll_pane_cp13

0x8c2a,	// (0x00021e08) scroll_pane_cp14

0xb866,	// (0x00024a44) scroll_pane_cp36

0x2bc4,	// (0x0001bda2) list_single_graphic_hl_pane_cp2_ParamLimits

0x2bc4,	// (0x0001bda2) list_single_graphic_hl_pane_cp2

0x81b3,	// (0x00021391) list_single_graphic_hl_pane_ParamLimits

0x81b3,	// (0x00021391) list_single_graphic_hl_pane

0x4b80,	// (0x0001dd5e) aid_size_min_hl_cp1

0xe60a,	// (0x000277e8) list_highlight_pane_cp34_ParamLimits

0xe60a,	// (0x000277e8) list_highlight_pane_cp34

0xe61b,	// (0x000277f9) list_single_graphic_hl_pane_g1_ParamLimits

0xe61b,	// (0x000277f9) list_single_graphic_hl_pane_g1

0x81d9,	// (0x000213b7) list_single_graphic_hl_pane_g2_ParamLimits

0x81d9,	// (0x000213b7) list_single_graphic_hl_pane_g2

0x81d9,	// (0x000213b7) list_single_graphic_hl_pane_g3_ParamLimits

0x81d9,	// (0x000213b7) list_single_graphic_hl_pane_g3

0x3cad,	// (0x0001ce8b) list_single_graphic_hl_pane_g4_ParamLimits

0x3cad,	// (0x0001ce8b) list_single_graphic_hl_pane_g4

0x81e5,	// (0x000213c3) list_single_graphic_hl_pane_g5_ParamLimits

0x81e5,	// (0x000213c3) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x00028dc1) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x00028dc1) list_single_graphic_hl_pane_g

0x81f9,	// (0x000213d7) list_single_graphic_hl_pane_t1_ParamLimits

0x81f9,	// (0x000213d7) list_single_graphic_hl_pane_t1

0xe628,	// (0x00027806) aid_size_min_hl_cp2

0xe631,	// (0x0002780f) list_highlight_pane_cp34_cp2_ParamLimits

0xe631,	// (0x0002780f) list_highlight_pane_cp34_cp2

0xe61b,	// (0x000277f9) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe61b,	// (0x000277f9) list_single_graphic_hl_pane_g1_cp2

0xe63e,	// (0x0002781c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe63e,	// (0x0002781c) list_single_graphic_hl_pane_g2_cp2

0xe64a,	// (0x00027828) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe64a,	// (0x00027828) list_single_graphic_hl_pane_g3_cp2

0x8c3e,	// (0x00021e1c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8c3e,	// (0x00021e1c) list_single_graphic_hl_pane_g4_cp2

0xe658,	// (0x00027836) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe658,	// (0x00027836) list_single_graphic_hl_pane_g5_cp2

0x8c9c,	// (0x00021e7a) control_pane_g4_ParamLimits

0x8c9c,	// (0x00021e7a) control_pane_g4

0xb46d,	// (0x0002464b) bg_popup_sub_pane_cp10_ParamLimits

0xe009,	// (0x000271e7) list_choice_list_pane_ParamLimits

0xe018,	// (0x000271f6) scroll_pane_cp23

0x8777,	// (0x00021955) bg_popup_preview_window_pane_cp02_ParamLimits

0xe47d,	// (0x0002765b) list_preview_fixed_pane_ParamLimits

0xe493,	// (0x00027671) list_preview_fixed_pane_cp_ParamLimits

0xe493,	// (0x00027671) list_preview_fixed_pane_cp

0xe49f,	// (0x0002767d) popup_preview_fixed_window_g1_ParamLimits

0xe49f,	// (0x0002767d) popup_preview_fixed_window_g1

0xe4ab,	// (0x00027689) popup_preview_fixed_window_g2_ParamLimits

0xe4ab,	// (0x00027689) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x00028d50) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x00028d50) popup_preview_fixed_window_g

0x52dc,	// (0x0001e4ba) aid_navi_side_left_pane_ParamLimits

0x52f1,	// (0x0001e4cf) aid_navi_side_right_pane_ParamLimits

0x5309,	// (0x0001e4e7) navi_icon_pane_stacon_ParamLimits

0x531d,	// (0x0001e4fb) navi_navi_pane_stacon_ParamLimits

0x5309,	// (0x0001e4e7) navi_text_pane_stacon_ParamLimits

0x83be,	// (0x0002159c) main_text_info_pane

0xe682,	// (0x00027860) listscroll_text_info_pane

0xe68a,	// (0x00027868) list_text_info_pane_ParamLimits

0xe68a,	// (0x00027868) list_text_info_pane

0xe699,	// (0x00027877) scroll_pane_cp24_ParamLimits

0xe699,	// (0x00027877) scroll_pane_cp24

0x9d57,	// (0x00022f35) list_text_info_pane_t1_ParamLimits

0x9d57,	// (0x00022f35) list_text_info_pane_t1

0x8df7,	// (0x00021fd5) popup_fast_swap2_window_ParamLimits

0x8df7,	// (0x00021fd5) popup_fast_swap2_window

0xe6b7,	// (0x00027895) aid_size_cell_fast2

0x83be,	// (0x0002159c) bg_popup_window_pane_cp17

0xc4d9,	// (0x000256b7) heading_pane_cp2

0x895d,	// (0x00021b3b) listscroll_fast2_pane

0xe6c1,	// (0x0002789f) grid_fast2_pane

0xe6cb,	// (0x000278a9) listscroll_fast2_pane_g1

0xe6d3,	// (0x000278b1) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x00028dcc) listscroll_fast2_pane_g

0xb434,	// (0x00024612) scroll_pane_cp26

0xe6dd,	// (0x000278bb) cell_fast2_pane_ParamLimits

0xe6dd,	// (0x000278bb) cell_fast2_pane

0xe6f2,	// (0x000278d0) cell_fast2_pane_g1

0xe6fb,	// (0x000278d9) cell_fast2_pane_g2

0xe704,	// (0x000278e2) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x00028dd1) cell_fast2_pane_g

0x89f1,	// (0x00021bcf) grid_highlight_pane_cp9

0x8a06,	// (0x00021be4) main_eswt_pane_ParamLimits

0x8a06,	// (0x00021be4) main_eswt_pane

0xe6ae,	// (0x0002788c) list_single_text_info_pane

0xe70c,	// (0x000278ea) eswt_ctrl_button_pane

0xe70c,	// (0x000278ea) eswt_ctrl_canvas_pane

0xe714,	// (0x000278f2) eswt_ctrl_combo_pane

0xe70c,	// (0x000278ea) eswt_ctrl_default_pane

0xe70c,	// (0x000278ea) eswt_ctrl_label_pane

0xe71c,	// (0x000278fa) eswt_ctrl_wait_pane

0xe724,	// (0x00027902) eswt_shell_pane

0x83be,	// (0x0002159c) listscroll_eswt_app_pane

0xe744,	// (0x00027922) popup_eswt_tasktip_window_ParamLimits

0xe744,	// (0x00027922) popup_eswt_tasktip_window

0xc20b,	// (0x000253e9) bg_popup_window_pane_cp18

0xe755,	// (0x00027933) eswt_control_pane_g1_ParamLimits

0xe755,	// (0x00027933) eswt_control_pane_g1

0xe762,	// (0x00027940) eswt_control_pane_g2_ParamLimits

0xe762,	// (0x00027940) eswt_control_pane_g2

0xe76f,	// (0x0002794d) eswt_control_pane_g3_ParamLimits

0xe76f,	// (0x0002794d) eswt_control_pane_g3

0xe77c,	// (0x0002795a) eswt_control_pane_g4_ParamLimits

0xe77c,	// (0x0002795a) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x00028dd8) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x00028dd8) eswt_control_pane_g

0xb314,	// (0x000244f2) bg_button_pane_ParamLimits

0xb314,	// (0x000244f2) bg_button_pane

0x8a06,	// (0x00021be4) common_borders_pane_copy2_ParamLimits

0x8a06,	// (0x00021be4) common_borders_pane_copy2

0xe789,	// (0x00027967) control_button_pane_g1_ParamLimits

0xe789,	// (0x00027967) control_button_pane_g1

0xe795,	// (0x00027973) control_button_pane_g2_ParamLimits

0xe795,	// (0x00027973) control_button_pane_g2

0xe7a1,	// (0x0002797f) control_button_pane_g3_ParamLimits

0xe7a1,	// (0x0002797f) control_button_pane_g3

0x0002,

0xfc03,	// (0x00028de1) control_button_pane_g_ParamLimits

0xfc03,	// (0x00028de1) control_button_pane_g

0xe7b5,	// (0x00027993) control_button_pane_t1

0xe7c3,	// (0x000279a1) control_button_pane_t2

0x0001,

0xfc0a,	// (0x00028de8) control_button_pane_t

0xc197,	// (0x00025375) bg_button_pane_g1

0xc19f,	// (0x0002537d) bg_button_pane_g2

0xc1a7,	// (0x00025385) bg_button_pane_g3

0xc1af,	// (0x0002538d) bg_button_pane_g4

0xc1b7,	// (0x00025395) bg_button_pane_g5

0xc1bf,	// (0x0002539d) bg_button_pane_g6

0xc1c7,	// (0x000253a5) bg_button_pane_g7

0xc1cf,	// (0x000253ad) bg_button_pane_g8

0xc1d7,	// (0x000253b5) bg_button_pane_g9

0x0008,

0xf860,	// (0x00028a3e) bg_button_pane_g

0xdfc4,	// (0x000271a2) common_borders_pane_ParamLimits

0xdfc4,	// (0x000271a2) common_borders_pane

0xe755,	// (0x00027933) eswt_control_pane_g1_copy1_ParamLimits

0xe755,	// (0x00027933) eswt_control_pane_g1_copy1

0xe762,	// (0x00027940) eswt_control_pane_g2_copy1_ParamLimits

0xe762,	// (0x00027940) eswt_control_pane_g2_copy1

0xe76f,	// (0x0002794d) eswt_control_pane_g3_copy1_ParamLimits

0xe76f,	// (0x0002794d) eswt_control_pane_g3_copy1

0xe77c,	// (0x0002795a) eswt_control_pane_g4_copy1_ParamLimits

0xe77c,	// (0x0002795a) eswt_control_pane_g4_copy1

0xdfff,	// (0x000271dd) bg_eswt_ctrl_canvas_pane_g1

0xdfc4,	// (0x000271a2) common_borders_pane_cp2_ParamLimits

0xdfc4,	// (0x000271a2) common_borders_pane_cp2

0xdfc4,	// (0x000271a2) common_borders_pane_cp3_ParamLimits

0xdfc4,	// (0x000271a2) common_borders_pane_cp3

0xe7d1,	// (0x000279af) separator_horizontal_pane

0xe7d9,	// (0x000279b7) separator_vertical_pane

0xe755,	// (0x00027933) eswt_control_pane_g1_copy2_ParamLimits

0xe755,	// (0x00027933) eswt_control_pane_g1_copy2

0xe762,	// (0x00027940) eswt_control_pane_g2_copy2_ParamLimits

0xe762,	// (0x00027940) eswt_control_pane_g2_copy2

0xe76f,	// (0x0002794d) eswt_control_pane_g3_copy2_ParamLimits

0xe76f,	// (0x0002794d) eswt_control_pane_g3_copy2

0xe77c,	// (0x0002795a) eswt_control_pane_g4_copy2_ParamLimits

0xe77c,	// (0x0002795a) eswt_control_pane_g4_copy2

0x83be,	// (0x0002159c) common_borders_pane_cp4

0xe7e2,	// (0x000279c0) separator_horizontal_pane_g1

0xe7eb,	// (0x000279c9) separator_horizontal_pane_g2

0xe7f4,	// (0x000279d2) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x00028ded) separator_horizontal_pane_g

0xe755,	// (0x00027933) eswt_control_pane_g1_copy3_ParamLimits

0xe755,	// (0x00027933) eswt_control_pane_g1_copy3

0xe762,	// (0x00027940) eswt_control_pane_g2_copy3_ParamLimits

0xe762,	// (0x00027940) eswt_control_pane_g2_copy3

0xe76f,	// (0x0002794d) eswt_control_pane_g3_copy3_ParamLimits

0xe76f,	// (0x0002794d) eswt_control_pane_g3_copy3

0xe77c,	// (0x0002795a) eswt_control_pane_g4_copy3_ParamLimits

0xe77c,	// (0x0002795a) eswt_control_pane_g4_copy3

0x83be,	// (0x0002159c) common_borders_pane_cp5

0xe7fd,	// (0x000279db) separator_vertical_pane_g1

0xe806,	// (0x000279e4) separator_vertical_pane_g2

0xe80f,	// (0x000279ed) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x00028df4) separator_vertical_pane_g

0xe755,	// (0x00027933) eswt_control_pane_g1_copy4_ParamLimits

0xe755,	// (0x00027933) eswt_control_pane_g1_copy4

0xe762,	// (0x00027940) eswt_control_pane_g2_copy4_ParamLimits

0xe762,	// (0x00027940) eswt_control_pane_g2_copy4

0xe76f,	// (0x0002794d) eswt_control_pane_g3_copy4_ParamLimits

0xe76f,	// (0x0002794d) eswt_control_pane_g3_copy4

0xe77c,	// (0x0002795a) eswt_control_pane_g4_copy4_ParamLimits

0xe77c,	// (0x0002795a) eswt_control_pane_g4_copy4

0xe818,	// (0x000279f6) eswt_ctrl_combo_button_pane

0xe820,	// (0x000279fe) eswt_ctrl_input_pane

0xe828,	// (0x00027a06) popup_choice_list_window_cp70

0xe830,	// (0x00027a0e) eswt_ctrl_input_pane_t1

0x83be,	// (0x0002159c) input_focus_pane_cp70

0xdfc4,	// (0x000271a2) bg_button_pane_cp70_ParamLimits

0xdfc4,	// (0x000271a2) bg_button_pane_cp70

0xe83e,	// (0x00027a1c) eswt_ctrl_combo_button_pane_g1

0xe846,	// (0x00027a24) wait_bar_pane_cp70

0xc20b,	// (0x000253e9) bg_popup_window_pane_cp70_ParamLimits

0xc20b,	// (0x000253e9) bg_popup_window_pane_cp70

0xe84e,	// (0x00027a2c) popup_eswt_tasktip_window_t1

0xe864,	// (0x00027a42) wait_bar_pane_cp71_ParamLimits

0xe864,	// (0x00027a42) wait_bar_pane_cp71

0xe870,	// (0x00027a4e) grid_eswt_app_pane

0xb673,	// (0x00024851) scroll_pane_cp70

0x9d74,	// (0x00022f52) cell_eswt_app_pane_ParamLimits

0x9d74,	// (0x00022f52) cell_eswt_app_pane

0x9d9e,	// (0x00022f7c) cell_eswt_app_pane_g1_ParamLimits

0x9d9e,	// (0x00022f7c) cell_eswt_app_pane_g1

0x9dcd,	// (0x00022fab) cell_eswt_app_pane_g2_ParamLimits

0x9dcd,	// (0x00022fab) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x00028dfb) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x00028dfb) cell_eswt_app_pane_g

0x9df1,	// (0x00022fcf) cell_eswt_app_pane_t1_ParamLimits

0x9df1,	// (0x00022fcf) cell_eswt_app_pane_t1

0xe879,	// (0x00027a57) grid_highlight_pane_cp70_ParamLimits

0xe879,	// (0x00027a57) grid_highlight_pane_cp70

0xbc2a,	// (0x00024e08) set_content_pane_g1

0xbf32,	// (0x00025110) status_small_volume_pane

0x64a5,	// (0x0001f683) status_small_volume_pane_g1

0x64ad,	// (0x0001f68b) volume_small2_pane

0x64b6,	// (0x0001f694) volume_small2_pane_g1

0x64bf,	// (0x0001f69d) volume_small2_pane_g2

0x64c8,	// (0x0001f6a6) volume_small2_pane_g3

0x64d1,	// (0x0001f6af) volume_small2_pane_g4

0x64da,	// (0x0001f6b8) volume_small2_pane_g5

0x64e3,	// (0x0001f6c1) volume_small2_pane_g6

0x64ec,	// (0x0001f6ca) volume_small2_pane_g7

0x64f5,	// (0x0001f6d3) volume_small2_pane_g8

0x64fe,	// (0x0001f6dc) volume_small2_pane_g9

0x6507,	// (0x0001f6e5) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x00028e00) volume_small2_pane_g

0xe29d,	// (0x0002747b) fep_vkb_top_text_pane_g1_ParamLimits

0x9cff,	// (0x00022edd) fep_vkb_top_text_pane_t1_ParamLimits

0xe4b7,	// (0x00027695) popup_preview_fixed_window_g3_ParamLimits

0xe4b7,	// (0x00027695) popup_preview_fixed_window_g3

0x9406,	// (0x000225e4) popup_toolbar_trans_pane

0x9719,	// (0x000228f7) aid_height_set_list_ParamLimits

0xbfa7,	// (0x00025185) aid_size_parent_ParamLimits

0xb46d,	// (0x0002464b) list_highlight_pane_cp2_ParamLimits

0xbc2a,	// (0x00024e08) set_content_pane_g1_ParamLimits

0x81c6,	// (0x000213a4) list_single_image_pane_ParamLimits

0x81c6,	// (0x000213a4) list_single_image_pane

0x9e23,	// (0x00023001) aid_size_cell_image_ParamLimits

0x9e23,	// (0x00023001) aid_size_cell_image

0x9e30,	// (0x0002300e) grid_single_image_pane_ParamLimits

0x9e30,	// (0x0002300e) grid_single_image_pane

0xe885,	// (0x00027a63) list_single_image_pane_g1_ParamLimits

0xe885,	// (0x00027a63) list_single_image_pane_g1

0xe891,	// (0x00027a6f) list_single_image_pane_g2_ParamLimits

0xe891,	// (0x00027a6f) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x00028e15) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x00028e15) list_single_image_pane_g

0xe8a5,	// (0x00027a83) list_single_image_pane_t1_ParamLimits

0xe8a5,	// (0x00027a83) list_single_image_pane_t1

0x9e3c,	// (0x0002301a) cell_image_list_pane_ParamLimits

0x9e3c,	// (0x0002301a) cell_image_list_pane

0x9e50,	// (0x0002302e) cell_image_list_pane_g1

0x9e59,	// (0x00023037) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x00028e1a) cell_image_list_pane_g

0xe8bb,	// (0x00027a99) aid_size_cell_tb_trans_pane

0xb314,	// (0x000244f2) bg_tb_trans_pane

0xe8cd,	// (0x00027aab) grid_tb_trans_pane

0xc197,	// (0x00025375) bg_tb_trans_pane_g1

0xc19f,	// (0x0002537d) bg_tb_trans_pane_g2

0xc1a7,	// (0x00025385) bg_tb_trans_pane_g3

0xc1af,	// (0x0002538d) bg_tb_trans_pane_g4

0xc1b7,	// (0x00025395) bg_tb_trans_pane_g5

0xc1cf,	// (0x000253ad) bg_tb_trans_pane_g6

0xc1d7,	// (0x000253b5) bg_tb_trans_pane_g7

0xc1bf,	// (0x0002539d) bg_tb_trans_pane_g8

0xc1c7,	// (0x000253a5) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x00028e1f) bg_tb_trans_pane_g

0xe8e1,	// (0x00027abf) cell_toolbar_trans_pane_ParamLimits

0xe8e1,	// (0x00027abf) cell_toolbar_trans_pane

0xdfff,	// (0x000271dd) cell_toolbar_trans_pane_g1

0x9a95,	// (0x00022c73) list_form2_midp_pane_t1

0x9aa3,	// (0x00022c81) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x00028cc8) list_form2_midp_pane_t

0xdd5c,	// (0x00026f3a) scroll_pane_cp51_ParamLimits

0xded3,	// (0x000270b1) form2_midp_wait_pane_g1

0xdedc,	// (0x000270ba) form2_midp_wait_pane_g2

0xdee5,	// (0x000270c3) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x00028cdd) form2_midp_wait_pane_g

0x8644,	// (0x00021822) list_highlight_pane_cp21_ParamLimits

0xdf05,	// (0x000270e3) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xdf14,	// (0x000270f2) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd3ac,	// (0x0002658a) list_single_2graphic_im_pane_ParamLimits

0xd3ac,	// (0x0002658a) list_single_2graphic_im_pane

0xe907,	// (0x00027ae5) list_single_2graphic_im_pane_g1_ParamLimits

0xe907,	// (0x00027ae5) list_single_2graphic_im_pane_g1

0xe918,	// (0x00027af6) list_single_2graphic_im_pane_g2_ParamLimits

0xe918,	// (0x00027af6) list_single_2graphic_im_pane_g2

0xe924,	// (0x00027b02) list_single_2graphic_im_pane_g3_ParamLimits

0xe924,	// (0x00027b02) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x00028e32) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x00028e32) list_single_2graphic_im_pane_g

0xe944,	// (0x00027b22) list_single_2graphic_im_pane_t1_ParamLimits

0xe944,	// (0x00027b22) list_single_2graphic_im_pane_t1

0xe4c3,	// (0x000276a1) list_single_graphic_2heading_pane_fp_ParamLimits

0xe4c3,	// (0x000276a1) list_single_graphic_2heading_pane_fp

0x49f2,	// (0x0001dbd0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x49f2,	// (0x0001dbd0) list_single_graphic_2heading_pane_fp_g1

0xe4d9,	// (0x000276b7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe4d9,	// (0x000276b7) list_single_graphic_2heading_pane_fp_g2

0x3d98,	// (0x0001cf76) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3d98,	// (0x0001cf76) list_single_graphic_2heading_pane_fp_g3

0x49c7,	// (0x0001dba5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x49c7,	// (0x0001dba5) list_single_graphic_2heading_pane_fp_g4

0xe4e5,	// (0x000276c3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe4e5,	// (0x000276c3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x00028d60) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x00028d60) list_single_graphic_2heading_pane_fp_g

0x4bcb,	// (0x0001dda9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4bcb,	// (0x0001dda9) list_single_graphic_2heading_pane_fp_t1

0x4a2a,	// (0x0001dc08) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4a2a,	// (0x0001dc08) list_single_graphic_2heading_pane_fp_t2

0x4be1,	// (0x0001ddbf) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4be1,	// (0x0001ddbf) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x00028e3b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x00028e3b) list_single_graphic_2heading_pane_fp_t

0xe08b,	// (0x00027269) fep_hwr_write_pane_g5_ParamLimits

0xe08b,	// (0x00027269) fep_hwr_write_pane_g5

0xe097,	// (0x00027275) fep_hwr_write_pane_g6_ParamLimits

0xe097,	// (0x00027275) fep_hwr_write_pane_g6

0xe724,	// (0x00027902) eswt_shell_pane_ParamLimits

0xc20b,	// (0x000253e9) bg_popup_window_pane_cp18_ParamLimits

0xd262,	// (0x00026440) heading_pane_cp70

0xe84e,	// (0x00027a2c) popup_eswt_tasktip_window_t1_ParamLimits

0x2df8,	// (0x0001bfd6) aid_touch_tab_arrow_left

0x2e0e,	// (0x0001bfec) aid_touch_tab_arrow_right

0x2288,	// (0x0001b466) title_pane_g3_ParamLimits

0x2288,	// (0x0001b466) title_pane_g3

0xb2d3,	// (0x000244b1) set_value_pane_g1

0x9406,	// (0x000225e4) popup_toolbar_trans_pane_ParamLimits

0xe8bb,	// (0x00027a99) aid_size_cell_tb_trans_pane_ParamLimits

0xb314,	// (0x000244f2) bg_tb_trans_pane_ParamLimits

0xe8cd,	// (0x00027aab) grid_tb_trans_pane_ParamLimits

0x8777,	// (0x00021955) cont_note_pane_ParamLimits

0x8777,	// (0x00021955) cont_note_pane

0x8a06,	// (0x00021be4) cont_snote2_single_text_pane_ParamLimits

0x8a06,	// (0x00021be4) cont_snote2_single_text_pane

0x8a06,	// (0x00021be4) cont_snote2_single_graphic_pane_ParamLimits

0x8a06,	// (0x00021be4) cont_snote2_single_graphic_pane

0xc6ef,	// (0x000258cd) cont_note_wait_pane_ParamLimits

0xc6ef,	// (0x000258cd) cont_note_wait_pane

0xc6ef,	// (0x000258cd) cont_note_image_pane_ParamLimits

0xc6ef,	// (0x000258cd) cont_note_image_pane

0xe975,	// (0x00027b53) popup_note2_window_g1_ParamLimits

0xe975,	// (0x00027b53) popup_note2_window_g1

0xe9a6,	// (0x00027b84) popup_note2_window_t1_ParamLimits

0xe9a6,	// (0x00027b84) popup_note2_window_t1

0xe9eb,	// (0x00027bc9) popup_note2_window_t2_ParamLimits

0xe9eb,	// (0x00027bc9) popup_note2_window_t2

0xea30,	// (0x00027c0e) popup_note2_window_t3_ParamLimits

0xea30,	// (0x00027c0e) popup_note2_window_t3

0xea75,	// (0x00027c53) popup_note2_window_t4_ParamLimits

0xea75,	// (0x00027c53) popup_note2_window_t4

0x87ef,	// (0x000219cd) popup_note2_window_t5_ParamLimits

0x87ef,	// (0x000219cd) popup_note2_window_t5

0x0004,

0xfc69,	// (0x00028e47) popup_note2_window_t_ParamLimits

0xfc69,	// (0x00028e47) popup_note2_window_t

0xeaa4,	// (0x00027c82) popup_note2_image_window_g1_ParamLimits

0xeaa4,	// (0x00027c82) popup_note2_image_window_g1

0xeab0,	// (0x00027c8e) popup_note2_image_window_g2_ParamLimits

0xeab0,	// (0x00027c8e) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x00028e52) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x00028e52) popup_note2_image_window_g

0xeac2,	// (0x00027ca0) popup_note2_image_window_t1_ParamLimits

0xeac2,	// (0x00027ca0) popup_note2_image_window_t1

0xeada,	// (0x00027cb8) popup_note2_image_window_t2_ParamLimits

0xeada,	// (0x00027cb8) popup_note2_image_window_t2

0xeaf2,	// (0x00027cd0) popup_note2_image_window_t3_ParamLimits

0xeaf2,	// (0x00027cd0) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x00028e57) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x00028e57) popup_note2_image_window_t

0xc6fd,	// (0x000258db) popup_note2_wait_window_g1_ParamLimits

0xc6fd,	// (0x000258db) popup_note2_wait_window_g1

0xeb0e,	// (0x00027cec) popup_note2_wait_window_g2_ParamLimits

0xeb0e,	// (0x00027cec) popup_note2_wait_window_g2

0xc715,	// (0x000258f3) popup_note2_wait_window_g3_ParamLimits

0xc715,	// (0x000258f3) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x00028e5e) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x00028e5e) popup_note2_wait_window_g

0xeb1a,	// (0x00027cf8) popup_note2_wait_window_t1_ParamLimits

0xeb1a,	// (0x00027cf8) popup_note2_wait_window_t1

0xeb38,	// (0x00027d16) popup_note2_wait_window_t2_ParamLimits

0xeb38,	// (0x00027d16) popup_note2_wait_window_t2

0xeb56,	// (0x00027d34) popup_note2_wait_window_t3_ParamLimits

0xeb56,	// (0x00027d34) popup_note2_wait_window_t3

0xeb68,	// (0x00027d46) popup_note2_wait_window_t4_ParamLimits

0xeb68,	// (0x00027d46) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x00028e65) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x00028e65) popup_note2_wait_window_t

0xeb7a,	// (0x00027d58) wait_bar2_pane_ParamLimits

0xeb7a,	// (0x00027d58) wait_bar2_pane

0xeb92,	// (0x00027d70) popup_snote2_single_text_window_g1_ParamLimits

0xeb92,	// (0x00027d70) popup_snote2_single_text_window_g1

0xebba,	// (0x00027d98) popup_snote2_single_text_window_t1_ParamLimits

0xebba,	// (0x00027d98) popup_snote2_single_text_window_t1

0xec06,	// (0x00027de4) popup_snote2_single_text_window_t2_ParamLimits

0xec06,	// (0x00027de4) popup_snote2_single_text_window_t2

0xec52,	// (0x00027e30) popup_snote2_single_text_window_t3_ParamLimits

0xec52,	// (0x00027e30) popup_snote2_single_text_window_t3

0xec93,	// (0x00027e71) popup_snote2_single_text_window_t4_ParamLimits

0xec93,	// (0x00027e71) popup_snote2_single_text_window_t4

0xecc9,	// (0x00027ea7) popup_snote2_single_text_window_t5_ParamLimits

0xecc9,	// (0x00027ea7) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x00028e6e) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x00028e6e) popup_snote2_single_text_window_t

0xecf4,	// (0x00027ed2) popup_snote2_single_graphic_window_g1_ParamLimits

0xecf4,	// (0x00027ed2) popup_snote2_single_graphic_window_g1

0xed1c,	// (0x00027efa) popup_snote2_single_graphic_window_g2_ParamLimits

0xed1c,	// (0x00027efa) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x00028e79) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x00028e79) popup_snote2_single_graphic_window_g

0xed44,	// (0x00027f22) popup_snote2_single_graphic_window_t1_ParamLimits

0xed44,	// (0x00027f22) popup_snote2_single_graphic_window_t1

0xed90,	// (0x00027f6e) popup_snote2_single_graphic_window_t2_ParamLimits

0xed90,	// (0x00027f6e) popup_snote2_single_graphic_window_t2

0xec52,	// (0x00027e30) popup_snote2_single_graphic_window_t3_ParamLimits

0xec52,	// (0x00027e30) popup_snote2_single_graphic_window_t3

0xec93,	// (0x00027e71) popup_snote2_single_graphic_window_t4_ParamLimits

0xec93,	// (0x00027e71) popup_snote2_single_graphic_window_t4

0xecc9,	// (0x00027ea7) popup_snote2_single_graphic_window_t5_ParamLimits

0xecc9,	// (0x00027ea7) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x00028e7e) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x00028e7e) popup_snote2_single_graphic_window_t

0xdcf0,	// (0x00026ece) clock_nsta_pane_cp2_t1

0xdcf0,	// (0x00026ece) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x00028c9e) clock_nsta_pane_cp2_t

0x4211,	// (0x0001d3ef) form_field_data_wide_pane_g1_ParamLimits

0x8c32,	// (0x00021e10) form_field_data_wide_pane_g2_ParamLimits

0x8c32,	// (0x00021e10) form_field_data_wide_pane_g2

0xb322,	// (0x00024500) form_field_data_wide_pane_g3_ParamLimits

0xb322,	// (0x00024500) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0002885f) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0002885f) form_field_data_wide_pane_g

0x99c9,	// (0x00022ba7) grid_touch_3_pane_ParamLimits

0x99c9,	// (0x00022ba7) grid_touch_3_pane

0x9e62,	// (0x00023040) cell_touch_3_pane_ParamLimits

0x9e62,	// (0x00023040) cell_touch_3_pane

0xdfff,	// (0x000271dd) cell_touch_3_pane_g1

0xdfff,	// (0x000271dd) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x00028d23) cell_touch_3_pane_g

0x8821,	// (0x000219ff) cont_query_data_pane

0x8829,	// (0x00021a07) cont_query_data_pane_cp1

0xeddc,	// (0x00027fba) button_value_adjust_pane_cp7

0xede4,	// (0x00027fc2) query_popup_pane_cp3

0xb898,	// (0x00024a76) bg_popup_sub_pane_cp22_ParamLimits

0x541e,	// (0x0001e5fc) navi_navi_volume_pane_cp2

0x5436,	// (0x0001e614) popup_side_volume_key_window_g2

0x5442,	// (0x0001e620) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x000288f5) popup_side_volume_key_window_g

0x545c,	// (0x0001e63a) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x000288fc) popup_side_volume_key_window_t

0xbaf6,	// (0x00024cd4) popup_side_volume_key_window_ParamLimits

0x7cc9,	// (0x00020ea7) list_double_graphic_pane_g4_ParamLimits

0x7cc9,	// (0x00020ea7) list_double_graphic_pane_g4

0x9892,	// (0x00022a70) list_single_2heading_msg_pane_ParamLimits

0x9892,	// (0x00022a70) list_single_2heading_msg_pane

0x820f,	// (0x000213ed) list_single_2heading_msg_pane_g1_ParamLimits

0x820f,	// (0x000213ed) list_single_2heading_msg_pane_g1

0x821b,	// (0x000213f9) list_single_2heading_msg_pane_g2_ParamLimits

0x821b,	// (0x000213f9) list_single_2heading_msg_pane_g2

0x822e,	// (0x0002140c) list_single_2heading_msg_pane_g3_ParamLimits

0x822e,	// (0x0002140c) list_single_2heading_msg_pane_g3

0x823a,	// (0x00021418) list_single_2heading_msg_pane_g4_ParamLimits

0x823a,	// (0x00021418) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x00028e89) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x00028e89) list_single_2heading_msg_pane_g

0x8252,	// (0x00021430) list_single_2heading_msg_pane_t1_ParamLimits

0x8252,	// (0x00021430) list_single_2heading_msg_pane_t1

0x827a,	// (0x00021458) list_single_2heading_msg_pane_t2_ParamLimits

0x827a,	// (0x00021458) list_single_2heading_msg_pane_t2

0x82e5,	// (0x000214c3) list_single_2heading_msg_pane_t3_ParamLimits

0x82e5,	// (0x000214c3) list_single_2heading_msg_pane_t3

0x4cc6,	// (0x0001dea4) list_single_2heading_msg_pane_t4_ParamLimits

0x4cc6,	// (0x0001dea4) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x00028e92) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x00028e92) list_single_2heading_msg_pane_t

0x85e2,	// (0x000217c0) title_pane_g4_ParamLimits

0x85e2,	// (0x000217c0) title_pane_g4

0x522c,	// (0x0001e40a) title_pane_stacon_g3_ParamLimits

0x522c,	// (0x0001e40a) title_pane_stacon_g3

0xe938,	// (0x00027b16) list_single_2graphic_im_pane_g4_ParamLimits

0xe938,	// (0x00027b16) list_single_2graphic_im_pane_g4

0xd09c,	// (0x0002627a) popup_side_volume_key_window_cp

0xd5d8,	// (0x000267b6) main_idle_act2_pane_t1

0x5d87,	// (0x0001ef65) toolbar_button_pane_g10

0x2592,	// (0x0001b770) popup_toolbar_window_cp1

0xdce1,	// (0x00026ebf) clock_nsta_pane_cp_t1

0xdce1,	// (0x00026ebf) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x00028c99) clock_nsta_pane_cp_t

0x541e,	// (0x0001e5fc) navi_navi_volume_pane_cp2_ParamLimits

0x542a,	// (0x0001e608) popup_side_volume_key_window_g1_ParamLimits

0x5436,	// (0x0001e614) popup_side_volume_key_window_g2_ParamLimits

0x5442,	// (0x0001e620) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x000288f5) popup_side_volume_key_window_g_ParamLimits

0x61b5,	// (0x0001f393) fep_hwr_aid_pane

0x1499,	// (0x0001a677) bg_fep_hwr_top_pane_g4_ParamLimits

0xe05b,	// (0x00027239) fep_hwr_top_pane_g1_ParamLimits

0xe06d,	// (0x0002724b) fep_hwr_top_pane_g2_ParamLimits

0x626e,	// (0x0001f44c) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x00028cee) fep_hwr_top_pane_g_ParamLimits

0x6283,	// (0x0001f461) fep_hwr_top_text_pane_ParamLimits

0xce5f,	// (0x0002603d) aid_touch_tab_arrow_arrow_2

0xce68,	// (0x00026046) aid_touch_tab_arrow_left_2

0x61c9,	// (0x0001f3a7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6200,	// (0x0001f3de) fep_hwr_prediction_pane

0xe158,	// (0x00027336) fep_vkb_prediction_pane

0x9cdf,	// (0x00022ebd) fep_vkb_side_pane_g3_ParamLimits

0x9cdf,	// (0x00022ebd) fep_vkb_side_pane_g3

0xe190,	// (0x0002736e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xe539,	// (0x00027717) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xe546,	// (0x00027724) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x00028d98) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xedf5,	// (0x00027fd3) fep_hwr_prediction_pane_g1

0x6510,	// (0x0001f6ee) fep_hwr_prediction_pane_g2

0x6518,	// (0x0001f6f6) fep_hwr_prediction_pane_g3

0x6520,	// (0x0001f6fe) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x00028e9b) fep_hwr_prediction_pane_g

0xedf5,	// (0x00027fd3) fep_vkb_prediction_pane_g1

0xedff,	// (0x00027fdd) fep_vkb_prediction_pane_g2

0xee07,	// (0x00027fe5) fep_vkb_prediction_pane_g3

0xee0f,	// (0x00027fed) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x00028ea4) fep_vkb_prediction_pane_g

0xd317,	// (0x000264f5) slider_set_pane_g3

0xd32b,	// (0x00026509) slider_set_pane_g4

0xd343,	// (0x00026521) slider_set_pane_g5

0xd317,	// (0x000264f5) slider_set_pane_g6

0x6053,	// (0x0001f231) slider_set_pane_g7

0xd362,	// (0x00026540) slider_form_pane_g3

0xd36b,	// (0x00026549) slider_form_pane_g4

0xd373,	// (0x00026551) slider_form_pane_g5

0xd362,	// (0x00026540) slider_form_pane_g6

0x9860,	// (0x00022a3e) slider_form_pane_g7

0xd84e,	// (0x00026a2c) slider_set_pane_vc_g3

0xd857,	// (0x00026a35) slider_set_pane_vc_g4

0xd860,	// (0x00026a3e) slider_set_pane_vc_g5

0xd84e,	// (0x00026a2c) slider_set_pane_vc_g6

0xd869,	// (0x00026a47) slider_set_pane_vc_g7

0xda19,	// (0x00026bf7) slider_form_pane_vc_g1

0xda22,	// (0x00026c00) slider_form_pane_vc_g2

0xda2b,	// (0x00026c09) slider_form_pane_vc_g3

0xda19,	// (0x00026bf7) slider_form_pane_vc_g4

0xda34,	// (0x00026c12) slider_form_pane_vc_g5

0x0004,

0xfa8d,	// (0x00028c6b) slider_form_pane_vc_g

0x83be,	// (0x0002159c) main_idle_act3_pane

0xee17,	// (0x00027ff5) ai3_links_pane

0x9eab,	// (0x00023089) popup_ai3_data_window_ParamLimits

0x9eab,	// (0x00023089) popup_ai3_data_window

0x83be,	// (0x0002159c) grid_ai3_links_pane

0x9ec3,	// (0x000230a1) cell_ai3_links_pane_ParamLimits

0x9ec3,	// (0x000230a1) cell_ai3_links_pane

0xee20,	// (0x00027ffe) bg_popup_sub_pane_cp11

0xee2d,	// (0x0002800b) cell_ai3_links_pane_g1

0x83be,	// (0x0002159c) bg_popup_sub_pane_cp12

0xee52,	// (0x00028030) heading_ai3_data_pane

0xee5a,	// (0x00028038) list_ai3_gene_pane

0xee66,	// (0x00028044) popup_ai3_data_window_g1

0xee6e,	// (0x0002804c) heading_ai3_data_pane_g1

0xee76,	// (0x00028054) heading_ai3_data_pane_t1

0xee84,	// (0x00028062) list_double_ai3_gene_pane_ParamLimits

0xee84,	// (0x00028062) list_double_ai3_gene_pane

0xee91,	// (0x0002806f) list_single_ai3_gene_pane_ParamLimits

0xee91,	// (0x0002806f) list_single_ai3_gene_pane

0xdfc4,	// (0x000271a2) list_highlight_pane_cp7_ParamLimits

0xdfc4,	// (0x000271a2) list_highlight_pane_cp7

0xee9e,	// (0x0002807c) list_single_a13_gene_pane_t1_ParamLimits

0xee9e,	// (0x0002807c) list_single_a13_gene_pane_t1

0xeeb5,	// (0x00028093) list_single_ai3_gene_pane_g1

0xeebe,	// (0x0002809c) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x00028ead) list_single_ai3_gene_pane_g

0xeec6,	// (0x000280a4) list_double_ai3_gene_pane_g1_ParamLimits

0xeec6,	// (0x000280a4) list_double_ai3_gene_pane_g1

0xeed2,	// (0x000280b0) list_double_ai3_gene_pane_t1_ParamLimits

0xeed2,	// (0x000280b0) list_double_ai3_gene_pane_t1

0xeeee,	// (0x000280cc) list_double_ai3_gene_pane_t2_ParamLimits

0xeeee,	// (0x000280cc) list_double_ai3_gene_pane_t2

0xef03,	// (0x000280e1) list_double_ai3_gene_pane_t3_ParamLimits

0xef03,	// (0x000280e1) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x00028eb2) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x00028eb2) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4bf7,	// (0x0001ddd5) aid_size_min_col_2

0x9e95,	// (0x00023073) aid_size_min_msg_ParamLimits

0x9e95,	// (0x00023073) aid_size_min_msg

0x9cf3,	// (0x00022ed1) fep_vkb_top_text_pane_g2_ParamLimits

0x9cf3,	// (0x00022ed1) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x00028d1e) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x00028d1e) fep_vkb_top_text_pane_g

0x83be,	// (0x0002159c) main_hc_apps_shell_pane

0xef20,	// (0x000280fe) grid_hc_apps_pane_ParamLimits

0xef20,	// (0x000280fe) grid_hc_apps_pane

0xef2f,	// (0x0002810d) list_hc_apps_pane

0xef37,	// (0x00028115) scroll_pane_cp37_ParamLimits

0xef37,	// (0x00028115) scroll_pane_cp37

0x9edd,	// (0x000230bb) cell_hc_apps_pane_ParamLimits

0x9edd,	// (0x000230bb) cell_hc_apps_pane

0x9f9b,	// (0x00023179) cell_hc_apps_pane_g1_ParamLimits

0x9f9b,	// (0x00023179) cell_hc_apps_pane_g1

0xef43,	// (0x00028121) cell_hc_apps_pane_g2_ParamLimits

0xef43,	// (0x00028121) cell_hc_apps_pane_g2

0xef5f,	// (0x0002813d) cell_hc_apps_pane_g3_ParamLimits

0xef5f,	// (0x0002813d) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x00028eb9) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x00028eb9) cell_hc_apps_pane_g

0x9fc8,	// (0x000231a6) cell_hc_apps_pane_t1_ParamLimits

0x9fc8,	// (0x000231a6) cell_hc_apps_pane_t1

0x8777,	// (0x00021955) grid_highlight_pane_cp10_ParamLimits

0x8777,	// (0x00021955) grid_highlight_pane_cp10

0xa006,	// (0x000231e4) list_single_hc_apps_pane_ParamLimits

0xa006,	// (0x000231e4) list_single_hc_apps_pane

0xa037,	// (0x00023215) list_single_hc_apps_pane_g1

0x8353,	// (0x00021531) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x00028ec0) list_single_hc_apps_pane_g

0x836c,	// (0x0002154a) list_single_hc_apps_pane_g2_copy1

0x8388,	// (0x00021566) list_single_hc_apps_pane_t1

0x8644,	// (0x00021822) bg_set_opt_pane_cp_ParamLimits

0x5153,	// (0x0001e331) setting_slider_pane_t1_ParamLimits

0x516c,	// (0x0001e34a) setting_slider_pane_t2_ParamLimits

0x5186,	// (0x0001e364) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00028742) setting_slider_pane_t_ParamLimits

0x519e,	// (0x0001e37c) slider_set_pane_ParamLimits

0x56be,	// (0x0001e89c) control_pane_g5_ParamLimits

0x56be,	// (0x0001e89c) control_pane_g5

0xd2a9,	// (0x00026487) slider_set_pane_g1_ParamLimits

0x6047,	// (0x0001f225) slider_set_pane_g2_ParamLimits

0xd317,	// (0x000264f5) slider_set_pane_g3_ParamLimits

0xd32b,	// (0x00026509) slider_set_pane_g4_ParamLimits

0xd343,	// (0x00026521) slider_set_pane_g5_ParamLimits

0xd317,	// (0x000264f5) slider_set_pane_g6_ParamLimits

0x6053,	// (0x0001f231) slider_set_pane_g7_ParamLimits

0xf95e,	// (0x00028b3c) slider_set_pane_g_ParamLimits

0xbbd5,	// (0x00024db3) navi_icon_text_pane_ParamLimits

0x2dc1,	// (0x0001bf9f) aid_fill_nsta_2_ParamLimits

0x2df8,	// (0x0001bfd6) aid_touch_tab_arrow_left_ParamLimits

0x2e0e,	// (0x0001bfec) aid_touch_tab_arrow_right_ParamLimits

0x2ea9,	// (0x0001c087) clock_nsta_pane_ParamLimits

0xce41,	// (0x0002601f) navi_icon_pane_g1_ParamLimits

0xce4d,	// (0x0002602b) navi_text_pane_t1_ParamLimits

0xdd36,	// (0x00026f14) navi_icon_text_pane_g1_ParamLimits

0xdd42,	// (0x00026f20) navi_icon_text_pane_t1_ParamLimits

0xa037,	// (0x00023215) list_single_hc_apps_pane_g1_ParamLimits

0x8353,	// (0x00021531) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x00028ec0) list_single_hc_apps_pane_g_ParamLimits

0x836c,	// (0x0002154a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8388,	// (0x00021566) list_single_hc_apps_pane_t1_ParamLimits

0x8512,	// (0x000216f0) popup_toolbar2_fixed_window_ParamLimits

0x8512,	// (0x000216f0) popup_toolbar2_fixed_window

0x93fc,	// (0x000225da) popup_toolbar2_float_window

0x83be,	// (0x0002159c) bg_popup_sub_pane_cp27

0xef81,	// (0x0002815f) grid_toolbar2_float_pane

0x83be,	// (0x0002159c) bg_popup_sub_pane_cp26

0xef81,	// (0x0002815f) grid_toolbar2_fixed_pane

0xa050,	// (0x0002322e) cell_toolbar2_fixed_pane_ParamLimits

0xa050,	// (0x0002322e) cell_toolbar2_fixed_pane

0xa06b,	// (0x00023249) cell_toolbar2_fixed_pane_g1

0x0b8e,	// (0x00019d6c) toolbar2_fixed_button_pane

0xc197,	// (0x00025375) toolbar2_fixed_button_pane_g1

0xc19f,	// (0x0002537d) toolbar2_fixed_button_pane_g2

0xc1a7,	// (0x00025385) toolbar2_fixed_button_pane_g3

0xc1af,	// (0x0002538d) toolbar2_fixed_button_pane_g4

0xc1b7,	// (0x00025395) toolbar2_fixed_button_pane_g5

0xc1bf,	// (0x0002539d) toolbar2_fixed_button_pane_g6

0xc1c7,	// (0x000253a5) toolbar2_fixed_button_pane_g7

0xc1cf,	// (0x000253ad) toolbar2_fixed_button_pane_g8

0xc1d7,	// (0x000253b5) toolbar2_fixed_button_pane_g9

0x0008,

0xf860,	// (0x00028a3e) toolbar2_fixed_button_pane_g

0xef89,	// (0x00028167) cell_toolbar2_float_pane_ParamLimits

0xef89,	// (0x00028167) cell_toolbar2_float_pane

0xef9d,	// (0x0002817b) cell_toolbar2_float_pane_g1

0x0b8e,	// (0x00019d6c) toolbar2_fixed_button_pane_cp

0x9bdb,	// (0x00022db9) fep_vkb_accented_list_pane_ParamLimits

0x9bdb,	// (0x00022db9) fep_vkb_accented_list_pane

0x63d1,	// (0x0001f5af) bg_popup_fep_shadow_pane_g9

0xbd49,	// (0x00024f27) bg_popup_fep_shadow_pane_cp3

0xb41b,	// (0x000245f9) list_accented_list_pane

0xefa6,	// (0x00028184) list_single_accented_list_pane_ParamLimits

0xefa6,	// (0x00028184) list_single_accented_list_pane

0xbd49,	// (0x00024f27) list_highlight_pane_cp10

0xefb7,	// (0x00028195) list_single_accented_list_pane_t1

0x9326,	// (0x00022504) popup_slider_window_ParamLimits

0x9326,	// (0x00022504) popup_slider_window

0xedec,	// (0x00027fca) aid_indentation_list_msg

0xa164,	// (0x00023342) bg_popup_window_pane_cp19

0xf023,	// (0x00028201) popup_slider_window_g1

0xf03f,	// (0x0002821d) popup_slider_window_g2

0xf05b,	// (0x00028239) popup_slider_window_g3

0x0005,

0xfce7,	// (0x00028ec5) popup_slider_window_g

0xf077,	// (0x00028255) popup_slider_window_t1

0xf0bd,	// (0x0002829b) small_volume_slider_vertical_pane

0xdfff,	// (0x000271dd) small_volume_slider_vertical_pane_g1

0xdfff,	// (0x000271dd) small_volume_slider_vertical_pane_g2

0xf0d9,	// (0x000282b7) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x00028ed7) small_volume_slider_vertical_pane_g

0x8476,	// (0x00021654) area_side_right_pane_ParamLimits

0x8476,	// (0x00021654) area_side_right_pane

0xa21c,	// (0x000233fa) aid_size_side_button_ParamLimits

0xa21c,	// (0x000233fa) aid_size_side_button

0xa235,	// (0x00023413) grid_sctrl_middle_pane_ParamLimits

0xa235,	// (0x00023413) grid_sctrl_middle_pane

0x655b,	// (0x0001f739) sctrl_sk_bottom_pane

0x656c,	// (0x0001f74a) sctrl_sk_top_pane

0x657e,	// (0x0001f75c) aid_touch_sctrl_top

0x8777,	// (0x00021955) bg_sctrl_sk_pane_ParamLimits

0x8777,	// (0x00021955) bg_sctrl_sk_pane

0x658b,	// (0x0001f769) sctrl_sk_top_pane_g1

0x6598,	// (0x0001f776) sctrl_sk_top_pane_t1

0x657e,	// (0x0001f75c) aid_touch_sctrl_bottom

0x8777,	// (0x00021955) bg_sctrl_sk_pane_cp_ParamLimits

0x8777,	// (0x00021955) bg_sctrl_sk_pane_cp

0x65b3,	// (0x0001f791) sctrl_sk_bottom_pane_g1

0x6598,	// (0x0001f776) sctrl_sk_bottom_pane_t1

0xa24f,	// (0x0002342d) cell_sctrl_middle_pane_ParamLimits

0xa24f,	// (0x0002342d) cell_sctrl_middle_pane

0xa260,	// (0x0002343e) aid_touch_sctrl_middle_ParamLimits

0xa260,	// (0x0002343e) aid_touch_sctrl_middle

0xa26d,	// (0x0002344b) bg_sctrl_middle_pane_ParamLimits

0xa26d,	// (0x0002344b) bg_sctrl_middle_pane

0xf0e2,	// (0x000282c0) cell_sctrl_middle_pane_g1_ParamLimits

0xf0e2,	// (0x000282c0) cell_sctrl_middle_pane_g1

0xa27b,	// (0x00023459) cell_sctrl_middle_pane_g2_ParamLimits

0xa27b,	// (0x00023459) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x00028ee3) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x00028ee3) cell_sctrl_middle_pane_g

0xc197,	// (0x00025375) bg_sctrl_middle_pane_g1

0xc19f,	// (0x0002537d) bg_sctrl_middle_pane_g2

0xc1a7,	// (0x00025385) bg_sctrl_middle_pane_g3

0xc1af,	// (0x0002538d) bg_sctrl_middle_pane_g4

0xc1b7,	// (0x00025395) bg_sctrl_middle_pane_g5

0xc1bf,	// (0x0002539d) bg_sctrl_middle_pane_g6

0xc1c7,	// (0x000253a5) bg_sctrl_middle_pane_g7

0xc1cf,	// (0x000253ad) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x00028ee8) bg_sctrl_middle_pane_g

0xc1d7,	// (0x000253b5) bg_sctrl_middle_pane_g8_copy1

0xc197,	// (0x00025375) bg_sctrl_sk_pane_g1

0xc19f,	// (0x0002537d) bg_sctrl_sk_pane_g2

0xc1a7,	// (0x00025385) bg_sctrl_sk_pane_g3

0x0008,

0xf860,	// (0x00028a3e) bg_sctrl_sk_pane_g

0x8bc4,	// (0x00021da2) aid_size_touch_scroll_bar

0xc1af,	// (0x0002538d) bg_sctrl_sk_pane_g4

0xc1b7,	// (0x00025395) bg_sctrl_sk_pane_g5

0xc1bf,	// (0x0002539d) bg_sctrl_sk_pane_g6

0xc1c7,	// (0x000253a5) bg_sctrl_sk_pane_g7

0xc1cf,	// (0x000253ad) bg_sctrl_sk_pane_g8

0xc1d7,	// (0x000253b5) bg_sctrl_sk_pane_g9

0x584e,	// (0x0001ea2c) popup_fep_china_hwr2_fs_candidate_window

0x8e54,	// (0x00022032) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8e54,	// (0x00022032) popup_fep_china_hwr2_fs_control_window

0xe190,	// (0x0002736e) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x00028ede) sctrl_sk_top_pane_g

0xa287,	// (0x00023465) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa287,	// (0x00023465) aid_fep_china_hwr2_fs_cell

0xa29b,	// (0x00023479) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa29b,	// (0x00023479) bg_popup_fep_shadow_pane_cp4

0xa2b2,	// (0x00023490) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa2b2,	// (0x00023490) bg_popup_fep_shadow_pane_cp5

0xa2c4,	// (0x000234a2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa2c4,	// (0x000234a2) popup_fep_china_hwr2_fs_control_bar_grid

0xa2d8,	// (0x000234b6) popup_fep_china_hwr2_fs_control_funtion_grid

0xf0f0,	// (0x000282ce) aid_fep_china_hwr2_fs_candi_cell

0x83be,	// (0x0002159c) bg_popup_fep_shadow_pane_cp6

0xf0fa,	// (0x000282d8) popup_fep_china_hwr2_fs_candidate_grid

0xa2e0,	// (0x000234be) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa2e0,	// (0x000234be) cell_fep_china_hwr2_fs_funtion_grid

0xdfff,	// (0x000271dd) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf0e2,	// (0x000282c0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf0e2,	// (0x000282c0) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf104,	// (0x000282e2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf104,	// (0x000282e2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x00028ef9) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x00028ef9) cell_fep_china_hwr2_fs_funtion_grid_g

0xa2f8,	// (0x000234d6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa2f8,	// (0x000234d6) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa30d,	// (0x000234eb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa30d,	// (0x000234eb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x00028efe) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x00028efe) cell_fep_china_hwr2_fs_funtion_grid_t

0xf11a,	// (0x000282f8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf122,	// (0x00028300) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf12a,	// (0x00028308) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x00028f03) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf132,	// (0x00028310) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf132,	// (0x00028310) cell_fep_china_hwr2_fs_candidate_grid

0xf14b,	// (0x00028329) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf153,	// (0x00028331) popup_fep_china_hwr2_fs_candidate_grid_g21

0xdfff,	// (0x000271dd) cell_fep_china_hwr2_fs_candidate_grid_g1

0xdfff,	// (0x000271dd) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x00028d23) cell_fep_china_hwr2_fs_candidate_grid_g

0xf15b,	// (0x00028339) cell_fep_china_hwr2_fs_candidate_grid_t1

0xbfe4,	// (0x000251c2) clock_nsta_pane_cp_24_ParamLimits

0xbfe4,	// (0x000251c2) clock_nsta_pane_cp_24

0xc04c,	// (0x0002522a) indicator_nsta_pane_cp_24_ParamLimits

0xc04c,	// (0x0002522a) indicator_nsta_pane_cp_24

0xcd3d,	// (0x00025f1b) heading_pane_g1

0x0001,

0xf8c5,	// (0x00028aa3) heading_pane_g

0xd465,	// (0x00026643) grid_sct_catagory_button_pane

0xd30b,	// (0x000264e9) scroll_pane_cp5_ParamLimits

0xdd68,	// (0x00026f46) button_value_adjust_pane_cp5_ParamLimits

0xdd68,	// (0x00026f46) button_value_adjust_pane_cp5

0xde26,	// (0x00027004) form2_midp_time_pane_ParamLimits

0xf169,	// (0x00028347) cell_sct_catagory_button_pane_ParamLimits

0xf169,	// (0x00028347) cell_sct_catagory_button_pane

0xdfc4,	// (0x000271a2) bg_button_pane_cp01_ParamLimits

0xdfc4,	// (0x000271a2) bg_button_pane_cp01

0xdfff,	// (0x000271dd) cell_sct_catagory_button_pane_g1

0x939f,	// (0x0002257d) popup_tb_extension_window

0xa329,	// (0x00023507) aid_size_cell_ext_ParamLimits

0xa329,	// (0x00023507) aid_size_cell_ext

0x8a06,	// (0x00021be4) bg_tb_trans_pane_cp1_ParamLimits

0x8a06,	// (0x00021be4) bg_tb_trans_pane_cp1

0xa34f,	// (0x0002352d) grid_tb_ext_pane_ParamLimits

0xa34f,	// (0x0002352d) grid_tb_ext_pane

0xa391,	// (0x0002356f) cell_tb_ext_pane_ParamLimits

0xa391,	// (0x0002356f) cell_tb_ext_pane

0xa3b9,	// (0x00023597) cell_tb_ext_pane_g1_ParamLimits

0xa3b9,	// (0x00023597) cell_tb_ext_pane_g1

0xf17b,	// (0x00028359) cell_tb_ext_pane_t1

0x8777,	// (0x00021955) list_highlight_pane_cp11_ParamLimits

0x8777,	// (0x00021955) list_highlight_pane_cp11

0x8527,	// (0x00021705) popup_uni_indicator_window_ParamLimits

0x8527,	// (0x00021705) popup_uni_indicator_window

0xb314,	// (0x000244f2) bg_popup_sub_pane_cp14

0xf196,	// (0x00028374) list_uniindi_pane

0xf1a2,	// (0x00028380) uniindi_top_pane

0x8777,	// (0x00021955) bg_uniindi_top_pane

0xf1c1,	// (0x0002839f) uniindi_top_pane_g1

0xf1d7,	// (0x000283b5) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x00028f0a) uniindi_top_pane_g

0xf201,	// (0x000283df) uniindi_top_pane_t1

0xf22b,	// (0x00028409) list_single_uniindi_pane_ParamLimits

0xf22b,	// (0x00028409) list_single_uniindi_pane

0xdfff,	// (0x000271dd) bg_uniindi_top_pane_g1

0xf23e,	// (0x0002841c) list_single_uniindi_pane_g1

0xf251,	// (0x0002842f) list_single_uniindi_pane_t1

0x83be,	// (0x0002159c) control_bg_pane

0xf276,	// (0x00028454) bg_sctrl_sk_pane_cp1

0xf27f,	// (0x0002845d) bg_sctrl_sk_pane_cp2

0xf288,	// (0x00028466) control_bg_pane_g1

0xf291,	// (0x0002846f) control_bg_pane_g2

0x0001,

0xfd35,	// (0x00028f13) control_bg_pane_g

0xdc2c,	// (0x00026e0a) cell_indicator_nsta_pane_g1_ParamLimits

0x99fc,	// (0x00022bda) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x00028c87) cell_indicator_nsta_pane_g_ParamLimits

0x49b4,	// (0x0001db92) form2_midp_time_pane_t1_ParamLimits

0x61a7,	// (0x0001f385) main_idle_act4_pane_ParamLimits

0x61a7,	// (0x0001f385) main_idle_act4_pane

0x939f,	// (0x0002257d) popup_tb_extension_window_ParamLimits

0xa377,	// (0x00023555) tb_ext_find_pane_ParamLimits

0xa377,	// (0x00023555) tb_ext_find_pane

0xf29a,	// (0x00028478) ai_gene_pane_1_cp1

0xbddd,	// (0x00024fbb) ai_gene_pane_2_cp1

0xf2a2,	// (0x00028480) list_single_idle_plugin_calendar_pane

0xf2ab,	// (0x00028489) list_single_idle_plugin_notification_pane

0xf2b4,	// (0x00028492) list_single_idle_plugin_player_pane

0xa3d6,	// (0x000235b4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa3d6,	// (0x000235b4) list_single_idle_plugin_shortcut_pane

0xa3fe,	// (0x000235dc) main_idle_act4_pane_t1

0xa414,	// (0x000235f2) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x00028f18) main_idle_act4_pane_t

0xa42c,	// (0x0002360a) middle_sk_idle_act4_pane_ParamLimits

0xa42c,	// (0x0002360a) middle_sk_idle_act4_pane

0xa448,	// (0x00023626) popup_clock_digital_analogue_window_cp2

0xa46f,	// (0x0002364d) shortcut_wheel_idle_act4_pane_ParamLimits

0xa46f,	// (0x0002364d) shortcut_wheel_idle_act4_pane

0xdfff,	// (0x000271dd) shortcut_wheel_idle_act4_pane_g1

0xdfff,	// (0x000271dd) shortcut_wheel_idle_act4_pane_g2

0xdfff,	// (0x000271dd) shortcut_wheel_idle_act4_pane_g3

0xdfff,	// (0x000271dd) shortcut_wheel_idle_act4_pane_g4

0xdfff,	// (0x000271dd) shortcut_wheel_idle_act4_pane_g5

0xf2bd,	// (0x0002849b) shortcut_wheel_idle_act4_pane_g6

0xf2c5,	// (0x000284a3) shortcut_wheel_idle_act4_pane_g7

0xf2cd,	// (0x000284ab) shortcut_wheel_idle_act4_pane_g8

0xf2d5,	// (0x000284b3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x00028f1d) shortcut_wheel_idle_act4_pane_g

0x1499,	// (0x0001a677) middle_sk_idle_act4_pane_g1_ParamLimits

0x1499,	// (0x0001a677) middle_sk_idle_act4_pane_g1

0xa4ec,	// (0x000236ca) middle_sk_idle_act4_pane_g2_ParamLimits

0xa4ec,	// (0x000236ca) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x00028f40) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x00028f40) middle_sk_idle_act4_pane_g

0xa504,	// (0x000236e2) middle_sk_idle_act4_pane_t1_ParamLimits

0xa504,	// (0x000236e2) middle_sk_idle_act4_pane_t1

0xa533,	// (0x00023711) grid_ai_shortcut_pane_ParamLimits

0xa533,	// (0x00023711) grid_ai_shortcut_pane

0xa550,	// (0x0002372e) list_highlight_pane_cp16_ParamLimits

0xa550,	// (0x0002372e) list_highlight_pane_cp16

0xa55d,	// (0x0002373b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa55d,	// (0x0002373b) list_single_idle_plugin_shortcut_pane_g1

0xa569,	// (0x00023747) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa569,	// (0x00023747) list_single_idle_plugin_shortcut_pane_g2

0xa585,	// (0x00023763) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa585,	// (0x00023763) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x00028f45) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x00028f45) list_single_idle_plugin_shortcut_pane_g

0xa59a,	// (0x00023778) cell_ai_shortcut_pane_ParamLimits

0xa59a,	// (0x00023778) cell_ai_shortcut_pane

0xa5b0,	// (0x0002378e) cell_ai_shortcut_pane_g1_ParamLimits

0xa5b0,	// (0x0002378e) cell_ai_shortcut_pane_g1

0xf29a,	// (0x00028478) ai_gene_pane_1_cp2

0xf2dd,	// (0x000284bb) ai_gene_pane_2_cp2

0xf2e5,	// (0x000284c3) list_highlight_pane_cp15

0xf2ee,	// (0x000284cc) list_single_idle_plugin_calendar_pane_g1

0xf2e5,	// (0x000284c3) list_highlight_pane_cp17

0xf2f6,	// (0x000284d4) list_single_idle_plugin_calendar_pane_g1_copy1

0xf2fe,	// (0x000284dc) list_single_idle_plugin_player_pane_g1

0xd678,	// (0x00026856) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x00028f4c) list_single_idle_plugin_player_pane_g

0xf306,	// (0x000284e4) list_single_idle_plugin_player_pane_t1

0xf314,	// (0x000284f2) list_single_idle_plugin_player_pane_t2

0xf322,	// (0x00028500) list_single_idle_plugin_player_pane_t3

0xf330,	// (0x0002850e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x00028f51) list_single_idle_plugin_player_pane_t

0xf33e,	// (0x0002851c) wait_bar_pane_cp15

0xf346,	// (0x00028524) grid_ai_notification_pane

0xd678,	// (0x00026856) list_single_idle_plugin_notification_pane_g1

0xa5d2,	// (0x000237b0) cell_ai_notification_pane_ParamLimits

0xa5d2,	// (0x000237b0) cell_ai_notification_pane

0xf34f,	// (0x0002852d) cell_ai_notification_pane_g1

0xf357,	// (0x00028535) cell_ai_notification_pane_t1

0xa5df,	// (0x000237bd) tb_ext_find_button_pane

0xa5e7,	// (0x000237c5) tb_ext_find_pane_g1

0xa5ef,	// (0x000237cd) tb_ext_find_pane_t1

0xb837,	// (0x00024a15) tb_ext_find_button_pane_g1

0xf365,	// (0x00028543) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x00028f5a) tb_ext_find_button_pane_g

0xa3fe,	// (0x000235dc) main_idle_act4_pane_t1_ParamLimits

0xa414,	// (0x000235f2) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x00028f18) main_idle_act4_pane_t_ParamLimits

0xa448,	// (0x00023626) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa45f,	// (0x0002363d) sat_plugin_idle_act4_pane_ParamLimits

0xa45f,	// (0x0002363d) sat_plugin_idle_act4_pane

0xa5fd,	// (0x000237db) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa5fd,	// (0x000237db) sat_plugin_idle_act4_pane_t1

0xa615,	// (0x000237f3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa615,	// (0x000237f3) sat_plugin_idle_act4_pane_t2

0xa62d,	// (0x0002380b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa62d,	// (0x0002380b) sat_plugin_idle_act4_pane_t3

0xa645,	// (0x00023823) sat_plugin_idle_act4_pane_t4_ParamLimits

0xa645,	// (0x00023823) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x00028f5f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x00028f5f) sat_plugin_idle_act4_pane_t

0x4fc5,	// (0x0001e1a3) popup_battery_window_ParamLimits

0x4fc5,	// (0x0001e1a3) popup_battery_window

0x8777,	// (0x00021955) bg_popup_sub_pane_cp25_ParamLimits

0x8777,	// (0x00021955) bg_popup_sub_pane_cp25

0xf36e,	// (0x0002854c) popup_battery_window_g1_ParamLimits

0xf36e,	// (0x0002854c) popup_battery_window_g1

0xf37a,	// (0x00028558) popup_battery_window_t1_ParamLimits

0xf37a,	// (0x00028558) popup_battery_window_t1

0xf38c,	// (0x0002856a) popup_battery_window_t2_ParamLimits

0xf38c,	// (0x0002856a) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x00028f68) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x00028f68) popup_battery_window_t

0x2cd1,	// (0x0001beaf) midp_canvas_pane_ParamLimits

0x2d2e,	// (0x0001bf0c) midp_keypad_pane_ParamLimits

0x2d2e,	// (0x0001bf0c) midp_keypad_pane

0xb46d,	// (0x0002464b) main_midp_pane_ParamLimits

0xdcff,	// (0x00026edd) signal_pane_g2_cp_ParamLimits

0xa65d,	// (0x0002383b) aid_size_cell_midp_keypad_ParamLimits

0xa65d,	// (0x0002383b) aid_size_cell_midp_keypad

0xa67b,	// (0x00023859) midp_keyp_game_grid_pane_ParamLimits

0xa67b,	// (0x00023859) midp_keyp_game_grid_pane

0xa6a2,	// (0x00023880) midp_keyp_rocker_pane_ParamLimits

0xa6a2,	// (0x00023880) midp_keyp_rocker_pane

0xa6eb,	// (0x000238c9) midp_keyp_sk_left_pane_ParamLimits

0xa6eb,	// (0x000238c9) midp_keyp_sk_left_pane

0xa73d,	// (0x0002391b) midp_keyp_sk_right_pane_ParamLimits

0xa73d,	// (0x0002391b) midp_keyp_sk_right_pane

0x83be,	// (0x0002159c) bg_button_pane_cp03

0xa78f,	// (0x0002396d) midp_keyp_sk_left_pane_g1

0x83be,	// (0x0002159c) bg_button_pane_cp04

0xa78f,	// (0x0002396d) midp_keyp_sk_right_pane_g1

0xdfff,	// (0x000271dd) midp_keyp_rocker_pane_g1

0xa798,	// (0x00023976) keyp_game_cell_pane_ParamLimits

0xa798,	// (0x00023976) keyp_game_cell_pane

0x83be,	// (0x0002159c) bg_button_pane_cp02

0xa7bc,	// (0x0002399a) keyp_game_cell_pane_g1

0x84c2,	// (0x000216a0) popup_fep_vkb2_window_ParamLimits

0x84c2,	// (0x000216a0) popup_fep_vkb2_window

0xa7c5,	// (0x000239a3) aid_size_cell_vkb2_ParamLimits

0xa7c5,	// (0x000239a3) aid_size_cell_vkb2

0xa7fb,	// (0x000239d9) popup_fep_vkb2_window_g1_ParamLimits

0xa7fb,	// (0x000239d9) popup_fep_vkb2_window_g1

0xa84b,	// (0x00023a29) vkb2_area_bottom_pane_ParamLimits

0xa84b,	// (0x00023a29) vkb2_area_bottom_pane

0xa89f,	// (0x00023a7d) vkb2_area_keypad_pane_ParamLimits

0xa89f,	// (0x00023a7d) vkb2_area_keypad_pane

0xa8e7,	// (0x00023ac5) vkb2_area_top_pane_ParamLimits

0xa8e7,	// (0x00023ac5) vkb2_area_top_pane

0xa96d,	// (0x00023b4b) vkb2_top_entry_pane_ParamLimits

0xa96d,	// (0x00023b4b) vkb2_top_entry_pane

0xa99a,	// (0x00023b78) vkb2_top_grid_left_pane_ParamLimits

0xa99a,	// (0x00023b78) vkb2_top_grid_left_pane

0xa9ba,	// (0x00023b98) vkb2_top_grid_right_pane_ParamLimits

0xa9ba,	// (0x00023b98) vkb2_top_grid_right_pane

0x6811,	// (0x0001f9ef) vkb2_cell_keypad_pane_ParamLimits

0x6811,	// (0x0001f9ef) vkb2_cell_keypad_pane

0xaa00,	// (0x00023bde) vkb2_area_bottom_grid_pane_ParamLimits

0xaa00,	// (0x00023bde) vkb2_area_bottom_grid_pane

0xaa2a,	// (0x00023c08) vkb2_area_bottom_pane_g1_ParamLimits

0xaa2a,	// (0x00023c08) vkb2_area_bottom_pane_g1

0xaa50,	// (0x00023c2e) vkb2_area_bottom_pane_g2_ParamLimits

0xaa50,	// (0x00023c2e) vkb2_area_bottom_pane_g2

0xaa81,	// (0x00023c5f) vkb2_area_bottom_pane_g3_ParamLimits

0xaa81,	// (0x00023c5f) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x00028f6d) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x00028f6d) vkb2_area_bottom_pane_g

0x69bb,	// (0x0001fb99) vkb2_top_cell_left_pane_ParamLimits

0x69bb,	// (0x0001fb99) vkb2_top_cell_left_pane

0xaaeb,	// (0x00023cc9) vkb2_top_entry_pane_g1_ParamLimits

0xaaeb,	// (0x00023cc9) vkb2_top_entry_pane_g1

0xaaf9,	// (0x00023cd7) vkb2_top_entry_pane_t1_ParamLimits

0xaaf9,	// (0x00023cd7) vkb2_top_entry_pane_t1

0xf3b1,	// (0x0002858f) vkb2_top_entry_pane_t2_ParamLimits

0xf3b1,	// (0x0002858f) vkb2_top_entry_pane_t2

0xf3e3,	// (0x000285c1) vkb2_top_entry_pane_t3_ParamLimits

0xf3e3,	// (0x000285c1) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x00028f74) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x00028f74) vkb2_top_entry_pane_t

0xab32,	// (0x00023d10) vkb2_top_grid_right_pane_g1_ParamLimits

0xab32,	// (0x00023d10) vkb2_top_grid_right_pane_g1

0x6a1e,	// (0x0001fbfc) vkb2_top_grid_right_pane_g2_ParamLimits

0x6a1e,	// (0x0001fbfc) vkb2_top_grid_right_pane_g2

0x6a36,	// (0x0001fc14) vkb2_top_grid_right_pane_g3_ParamLimits

0x6a36,	// (0x0001fc14) vkb2_top_grid_right_pane_g3

0xab48,	// (0x00023d26) vkb2_top_grid_right_pane_g4_ParamLimits

0xab48,	// (0x00023d26) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x00028f7b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x00028f7b) vkb2_top_grid_right_pane_g

0x6a64,	// (0x0001fc42) vkb2_top_cell_left_pane_g1

0x6a7b,	// (0x0001fc59) vkb2_cell_keypad_pane_g1_ParamLimits

0x6a7b,	// (0x0001fc59) vkb2_cell_keypad_pane_g1

0xf407,	// (0x000285e5) vkb2_cell_keypad_pane_t1_ParamLimits

0xf407,	// (0x000285e5) vkb2_cell_keypad_pane_t1

0x6a89,	// (0x0001fc67) vkb2_cell_bottom_grid_pane_ParamLimits

0x6a89,	// (0x0001fc67) vkb2_cell_bottom_grid_pane

0x6ac2,	// (0x0001fca0) vkb2_cell_bottom_grid_pane_g1

0xa490,	// (0x0002366e) aid_call2_pane_cp02

0xa498,	// (0x00023676) aid_call_pane_cp02

0xa4a0,	// (0x0002367e) clock_digital_number_pane_cp10

0xa4a8,	// (0x00023686) clock_digital_number_pane_cp11

0xa4b0,	// (0x0002368e) clock_digital_number_pane_cp12

0xa4b8,	// (0x00023696) clock_digital_number_pane_cp13

0xa4c0,	// (0x0002369e) clock_digital_separator_pane_cp10

0xb837,	// (0x00024a15) popup_clock_digital_analogue_window_cp2_g1

0xb837,	// (0x00024a15) popup_clock_digital_analogue_window_cp2_g2

0xa4c8,	// (0x000236a6) popup_clock_digital_analogue_window_cp2_g3

0xb837,	// (0x00024a15) popup_clock_digital_analogue_window_cp2_g4

0xa4c8,	// (0x000236a6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x00028f30) popup_clock_digital_analogue_window_cp2_g

0xa4d0,	// (0x000236ae) popup_clock_digital_analogue_window_cp2_t1

0xa4de,	// (0x000236bc) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x00028f3b) popup_clock_digital_analogue_window_cp2_t

0xdfff,	// (0x000271dd) clock_digital_number_pane_cp10_g1

0xdfff,	// (0x000271dd) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x00028d23) clock_digital_number_pane_cp10_g

0xdfff,	// (0x000271dd) clock_digital_separator_pane_cp10_g1

0xdfff,	// (0x000271dd) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x00028d23) clock_digital_separator_pane_cp10_g

0xf1e3,	// (0x000283c1) uniindi_top_pane_g3

0xf1f4,	// (0x000283d2) uniindi_top_pane_g4

0x689c,	// (0x0001fa7a) vkb2_row_keypad_pane_ParamLimits

0x689c,	// (0x0001fa7a) vkb2_row_keypad_pane

0x6ae2,	// (0x0001fcc0) vkb2_cell_t_keypad_pane_ParamLimits

0x6ae2,	// (0x0001fcc0) vkb2_cell_t_keypad_pane

0x6af2,	// (0x0001fcd0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6af2,	// (0x0001fcd0) vkb2_cell_t_keypad_pane_cp08

0x6b05,	// (0x0001fce3) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6b05,	// (0x0001fce3) vkb2_cell_t_keypad_pane_cp09

0x6b19,	// (0x0001fcf7) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6b19,	// (0x0001fcf7) vkb2_cell_t_keypad_pane_cp01

0x6b2a,	// (0x0001fd08) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6b2a,	// (0x0001fd08) vkb2_cell_t_keypad_pane_cp02

0x6b3b,	// (0x0001fd19) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6b3b,	// (0x0001fd19) vkb2_cell_t_keypad_pane_cp03

0x6b4c,	// (0x0001fd2a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6b4c,	// (0x0001fd2a) vkb2_cell_t_keypad_pane_cp04

0x6b5d,	// (0x0001fd3b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6b5d,	// (0x0001fd3b) vkb2_cell_t_keypad_pane_cp05

0x6b6e,	// (0x0001fd4c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6b6e,	// (0x0001fd4c) vkb2_cell_t_keypad_pane_cp06

0x6b7f,	// (0x0001fd5d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6b7f,	// (0x0001fd5d) vkb2_cell_t_keypad_pane_cp07

0x6b90,	// (0x0001fd6e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6b90,	// (0x0001fd6e) vkb2_cell_t_keypad_pane_cp10

0xe190,	// (0x0002736e) vkb2_cell_t_keypad_pane_g1

0xf41e,	// (0x000285fc) vkb2_cell_t_keypad_pane_t1

0x83be,	// (0x0002159c) popup_grid_graphic2_window

0xab5e,	// (0x00023d3c) aid_size_cell_graphic2_ParamLimits

0xab5e,	// (0x00023d3c) aid_size_cell_graphic2

0xab9c,	// (0x00023d7a) bg_popup_window_pane_cp21_ParamLimits

0xab9c,	// (0x00023d7a) bg_popup_window_pane_cp21

0xabaa,	// (0x00023d88) graphic2_pages_pane_ParamLimits

0xabaa,	// (0x00023d88) graphic2_pages_pane

0xac00,	// (0x00023dde) grid_graphic2_control_pane_ParamLimits

0xac00,	// (0x00023dde) grid_graphic2_control_pane

0xac48,	// (0x00023e26) grid_graphic2_pane_ParamLimits

0xac48,	// (0x00023e26) grid_graphic2_pane

0xaccf,	// (0x00023ead) cell_graphic2_pane

0x83be,	// (0x0002159c) main_comp_mode_pane

0xee5a,	// (0x00028038) list_ai3_gene_pane_ParamLimits

0xa164,	// (0x00023342) bg_popup_window_pane_cp19_ParamLimits

0xefc5,	// (0x000281a3) bg_touch_area_indi_pane_ParamLimits

0xefc5,	// (0x000281a3) bg_touch_area_indi_pane

0xefdb,	// (0x000281b9) bg_touch_area_indi_pane_cp01_ParamLimits

0xefdb,	// (0x000281b9) bg_touch_area_indi_pane_cp01

0xeff1,	// (0x000281cf) bg_touch_area_indi_pane_cp02_ParamLimits

0xeff1,	// (0x000281cf) bg_touch_area_indi_pane_cp02

0xf009,	// (0x000281e7) bg_touch_area_indi_pane_cp03_ParamLimits

0xf009,	// (0x000281e7) bg_touch_area_indi_pane_cp03

0xf023,	// (0x00028201) popup_slider_window_g1_ParamLimits

0xf03f,	// (0x0002821d) popup_slider_window_g2_ParamLimits

0xf05b,	// (0x00028239) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x00028ec5) popup_slider_window_g_ParamLimits

0xf077,	// (0x00028255) popup_slider_window_t1_ParamLimits

0xf0bd,	// (0x0002829b) small_volume_slider_vertical_pane_ParamLimits

0xaccf,	// (0x00023ead) cell_graphic2_pane_ParamLimits

0xad2c,	// (0x00023f0a) bg_button_pane_cp10_ParamLimits

0xad2c,	// (0x00023f0a) bg_button_pane_cp10

0xad3f,	// (0x00023f1d) bg_button_pane_cp11_ParamLimits

0xad3f,	// (0x00023f1d) bg_button_pane_cp11

0xad52,	// (0x00023f30) graphic2_pages_pane_g1_ParamLimits

0xad52,	// (0x00023f30) graphic2_pages_pane_g1

0xad6d,	// (0x00023f4b) graphic2_pages_pane_g2_ParamLimits

0xad6d,	// (0x00023f4b) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x00028f89) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x00028f89) graphic2_pages_pane_g

0xad85,	// (0x00023f63) graphic2_pages_pane_t1_ParamLimits

0xad85,	// (0x00023f63) graphic2_pages_pane_t1

0xad9d,	// (0x00023f7b) cell_graphic2_control_pane_ParamLimits

0xad9d,	// (0x00023f7b) cell_graphic2_control_pane

0xadcf,	// (0x00023fad) cell_graphic2_pane_g1_ParamLimits

0xadcf,	// (0x00023fad) cell_graphic2_pane_g1

0x14a7,	// (0x0001a685) cell_graphic2_pane_g2_ParamLimits

0x14a7,	// (0x0001a685) cell_graphic2_pane_g2

0xaddc,	// (0x00023fba) cell_graphic2_pane_g3_ParamLimits

0xaddc,	// (0x00023fba) cell_graphic2_pane_g3

0x14b4,	// (0x0001a692) cell_graphic2_pane_g4_ParamLimits

0x14b4,	// (0x0001a692) cell_graphic2_pane_g4

0xade9,	// (0x00023fc7) cell_graphic2_pane_g5_ParamLimits

0xade9,	// (0x00023fc7) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x00028f8e) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x00028f8e) cell_graphic2_pane_g

0xae09,	// (0x00023fe7) cell_graphic2_pane_t1_ParamLimits

0xae09,	// (0x00023fe7) cell_graphic2_pane_t1

0xcd31,	// (0x00025f0f) grid_highlight_pane_cp11_ParamLimits

0xcd31,	// (0x00025f0f) grid_highlight_pane_cp11

0x8777,	// (0x00021955) bg_button_pane_cp05

0xae3d,	// (0x0002401b) cell_graphic2_control_pane_g1

0xdfff,	// (0x000271dd) bg_touch_area_indi_pane_g1

0xf430,	// (0x0002860e) aid_cmod_rocker_key_size

0xf43a,	// (0x00028618) aid_cmode_itu_key_size

0xf444,	// (0x00028622) main_cmode_video_pane

0xf44e,	// (0x0002862c) main_comp_mode_itu_pane

0xf45a,	// (0x00028638) main_comp_mode_rocker_pane

0xf466,	// (0x00028644) cell_cmode_rocker_pane_ParamLimits

0xf466,	// (0x00028644) cell_cmode_rocker_pane

0xf478,	// (0x00028656) cell_cmode_itu_pane_ParamLimits

0xf478,	// (0x00028656) cell_cmode_itu_pane

0xb314,	// (0x000244f2) bg_button_pane_cp06_ParamLimits

0xb314,	// (0x000244f2) bg_button_pane_cp06

0xe190,	// (0x0002736e) cell_cmode_rocker_pane_g1_ParamLimits

0xe190,	// (0x0002736e) cell_cmode_rocker_pane_g1

0xf0e2,	// (0x000282c0) cell_cmode_rocker_pane_g2_ParamLimits

0xf0e2,	// (0x000282c0) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x00028f9e) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x00028f9e) cell_cmode_rocker_pane_g

0x83be,	// (0x0002159c) bg_button_pane_cp07

0xf48d,	// (0x0002866b) cell_cmode_itu_pane_g1

0xf496,	// (0x00028674) cell_cmode_itu_pane_t1

0xf4a4,	// (0x00028682) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x00028fa3) cell_cmode_itu_pane_t

0xf266,	// (0x00028444) aid_touch_ctrl_left

0xf26e,	// (0x0002844c) aid_touch_ctrl_right

0x83be,	// (0x0002159c) compa_mode_pane

0xae61,	// (0x0002403f) aid_cmod_rocker_key_size_cp

0xae6b,	// (0x00024049) aid_cmode_itu_key_size_cp

0xf4b2,	// (0x00028690) compa_mode_pane_g1

0xf4ba,	// (0x00028698) compa_mode_pane_g2

0xf4c2,	// (0x000286a0) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x00028fa8) compa_mode_pane_g

0xae75,	// (0x00024053) main_comp_mode_itu_pane_cp

0xae7d,	// (0x0002405b) main_comp_mode_rocker_pane_cp

0xae85,	// (0x00024063) cell_cmode_itu_pane_cp_ParamLimits

0xae85,	// (0x00024063) cell_cmode_itu_pane_cp

0xae9a,	// (0x00024078) cell_cmode_rocker_pane_cp_ParamLimits

0xae9a,	// (0x00024078) cell_cmode_rocker_pane_cp

0xb314,	// (0x000244f2) bg_button_pane_cp06_cp_ParamLimits

0xb314,	// (0x000244f2) bg_button_pane_cp06_cp

0xe190,	// (0x0002736e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe190,	// (0x0002736e) cell_cmode_rocker_pane_g1_cp

0xdfff,	// (0x000271dd) cell_cmode_rocker_pane_g2_cp

0x83be,	// (0x0002159c) bg_button_pane_cp07_cp

0xaeac,	// (0x0002408a) cell_cmode_itu_pane_g1_cp

0xaeb5,	// (0x00024093) cell_cmode_itu_pane_t1_cp

0xaeb5,	// (0x00024093) cell_cmode_itu_pane_t2_cp

0x9856,	// (0x00022a34) settings_code_pane_cp2

0x8644,	// (0x00021822) bg_popup_window_pane_cp3_ParamLimits

0x8945,	// (0x00021b23) heading_pane_cp3_ParamLimits

0x8951,	// (0x00021b2f) listscroll_popup_graphic_pane_ParamLimits

0x61b5,	// (0x0001f393) fep_hwr_aid_pane_ParamLimits

0x657e,	// (0x0001f75c) aid_touch_sctrl_top_ParamLimits

0x658b,	// (0x0001f769) sctrl_sk_top_pane_g1_ParamLimits

0xe190,	// (0x0002736e) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x00028ede) sctrl_sk_top_pane_g_ParamLimits

0x6598,	// (0x0001f776) sctrl_sk_top_pane_t1_ParamLimits

0x657e,	// (0x0001f75c) aid_touch_sctrl_bottom_ParamLimits

0x6598,	// (0x0001f776) sctrl_sk_bottom_pane_t1_ParamLimits

0xf1af,	// (0x0002838d) aid_area_touch_clock

0xa92f,	// (0x00023b0d) aid_vkb2_area_top_pane_cell_ParamLimits

0xa92f,	// (0x00023b0d) aid_vkb2_area_top_pane_cell

0xa9da,	// (0x00023bb8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa9da,	// (0x00023bb8) aid_vkb2_area_bottom_pane_cell

0xf3a9,	// (0x00028587) popup_char_count_window

0xf4ca,	// (0x000286a8) popup_char_count_window_g1

0xf4d3,	// (0x000286b1) popup_char_count_window_g2

0xf4dc,	// (0x000286ba) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x00028faf) popup_char_count_window_g

0xf4e5,	// (0x000286c3) popup_char_count_window_t1

0x6639,	// (0x0001f817) popup_fep_char_preview_window_ParamLimits

0x6639,	// (0x0001f817) popup_fep_char_preview_window

0xa94f,	// (0x00023b2d) vkb2_top_candi_pane_ParamLimits

0xa94f,	// (0x00023b2d) vkb2_top_candi_pane

0xaec3,	// (0x000240a1) cell_vkb2_top_candi_pane_ParamLimits

0xaec3,	// (0x000240a1) cell_vkb2_top_candi_pane

0xc6ef,	// (0x000258cd) bg_popup_fep_char_preview_window_ParamLimits

0xc6ef,	// (0x000258cd) bg_popup_fep_char_preview_window

0x6ba5,	// (0x0001fd83) popup_fep_char_preview_window_t1_ParamLimits

0x6ba5,	// (0x0001fd83) popup_fep_char_preview_window_t1

0xf4f3,	// (0x000286d1) bg_popup_fep_char_preview_window_g1

0xf4fb,	// (0x000286d9) bg_popup_fep_char_preview_window_g2

0xf503,	// (0x000286e1) bg_popup_fep_char_preview_window_g3

0xf50b,	// (0x000286e9) bg_popup_fep_char_preview_window_g4

0xf513,	// (0x000286f1) bg_popup_fep_char_preview_window_g5

0x6bdf,	// (0x0001fdbd) bg_popup_fep_char_preview_window_g6

0xf51b,	// (0x000286f9) bg_popup_fep_char_preview_window_g7

0xf523,	// (0x00028701) bg_popup_fep_char_preview_window_g8

0xf52b,	// (0x00028709) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x00028fb6) bg_popup_fep_char_preview_window_g

0xe190,	// (0x0002736e) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe190,	// (0x0002736e) cell_vkb2_top_candi_pane_g1

0xe3cf,	// (0x000275ad) cell_vkb2_top_candi_pane_g2_ParamLimits

0xe3cf,	// (0x000275ad) cell_vkb2_top_candi_pane_g2

0xe3f0,	// (0x000275ce) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe3f0,	// (0x000275ce) cell_vkb2_top_candi_pane_g3

0x6be7,	// (0x0001fdc5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6be7,	// (0x0001fdc5) cell_vkb2_top_candi_pane_g4

0xf533,	// (0x00028711) cell_vkb2_top_candi_pane_g5_ParamLimits

0xf533,	// (0x00028711) cell_vkb2_top_candi_pane_g5

0xf0e2,	// (0x000282c0) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf0e2,	// (0x000282c0) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x00028fc9) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x00028fc9) cell_vkb2_top_candi_pane_g

0x6c08,	// (0x0001fde6) cell_vkb2_top_candi_pane_t1

0x6033,	// (0x0001f211) aid_size_touch_slider_mark_ParamLimits

0x6033,	// (0x0001f211) aid_size_touch_slider_mark

0xabe6,	// (0x00023dc4) grid_graphic2_catg_pane_ParamLimits

0xabe6,	// (0x00023dc4) grid_graphic2_catg_pane

0xaca2,	// (0x00023e80) popup_grid_graphic2_window_t1_ParamLimits

0xaca2,	// (0x00023e80) popup_grid_graphic2_window_t1

0xacb8,	// (0x00023e96) popup_grid_graphic2_window_t2_ParamLimits

0xacb8,	// (0x00023e96) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x00028f84) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x00028f84) popup_grid_graphic2_window_t

0x8777,	// (0x00021955) bg_button_pane_cp05_ParamLimits

0xae3d,	// (0x0002401b) cell_graphic2_control_pane_g1_ParamLimits

0xaf29,	// (0x00024107) cell_graphic2_catg_pane_ParamLimits

0xaf29,	// (0x00024107) cell_graphic2_catg_pane

0x83be,	// (0x0002159c) bg_button_pane_cp12

0xaf3b,	// (0x00024119) cell_graphic2_catg_pane_g1

0xf17b,	// (0x00028359) cell_tb_ext_pane_t1_ParamLimits

0x69db,	// (0x0001fbb9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x69db,	// (0x0001fbb9) vkb2_top_cell_right_narrow_pane

0x69f3,	// (0x0001fbd1) vkb2_top_cell_right_wide_pane_ParamLimits

0x69f3,	// (0x0001fbd1) vkb2_top_cell_right_wide_pane

0x61a7,	// (0x0001f385) bg_vkb2_func_pane_ParamLimits

0x61a7,	// (0x0001f385) bg_vkb2_func_pane

0x6a64,	// (0x0001fc42) vkb2_top_cell_left_pane_g1_ParamLimits

0x61a7,	// (0x0001f385) bg_vkb2_fuc_pane_cp03_ParamLimits

0x61a7,	// (0x0001f385) bg_vkb2_fuc_pane_cp03

0x6ac2,	// (0x0001fca0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc19f,	// (0x0002537d) bg_vkb2_func_pane_g1

0xc1a7,	// (0x00025385) bg_vkb2_func_pane_g2

0xc1b7,	// (0x00025395) bg_vkb2_func_pane_g3

0xc1af,	// (0x0002538d) bg_vkb2_func_pane_g4

0xc1bf,	// (0x0002539d) bg_vkb2_func_pane_g5

0xc1c7,	// (0x000253a5) bg_vkb2_func_pane_g6

0xc1cf,	// (0x000253ad) bg_vkb2_func_pane_g7

0xc1d7,	// (0x000253b5) bg_vkb2_func_pane_g8

0xc197,	// (0x00025375) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x00028fd6) bg_vkb2_func_pane_g

0x61a7,	// (0x0001f385) bg_vkb2_fuc_pane_cp01_ParamLimits

0x61a7,	// (0x0001f385) bg_vkb2_fuc_pane_cp01

0x6a64,	// (0x0001fc42) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6a64,	// (0x0001fc42) vkb2_top_cell_right_wide_pane_g1

0x61a7,	// (0x0001f385) bg_vkb2_fuc_pane_cp02_ParamLimits

0x61a7,	// (0x0001f385) bg_vkb2_fuc_pane_cp02

0x6ac2,	// (0x0001fca0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ac2,	// (0x0001fca0) vkb2_top_cell_right_narrow_pane_g1

0xa09e,	// (0x0002327c) aid_touch_area_decrease_ParamLimits

0xa09e,	// (0x0002327c) aid_touch_area_decrease

0xa0d8,	// (0x000232b6) aid_touch_area_increase_ParamLimits

0xa0d8,	// (0x000232b6) aid_touch_area_increase

0xa100,	// (0x000232de) aid_touch_area_mute_ParamLimits

0xa100,	// (0x000232de) aid_touch_area_mute

0xa130,	// (0x0002330e) aid_touch_area_slider_ParamLimits

0xa130,	// (0x0002330e) aid_touch_area_slider

0xa170,	// (0x0002334e) popup_slider_window_g4_ParamLimits

0xa170,	// (0x0002334e) popup_slider_window_g4

0xa198,	// (0x00023376) popup_slider_window_g5_ParamLimits

0xa198,	// (0x00023376) popup_slider_window_g5

0xa1cc,	// (0x000233aa) popup_slider_window_g6_ParamLimits

0xa1cc,	// (0x000233aa) popup_slider_window_g6

0xf0a5,	// (0x00028283) popup_slider_window_t2_ParamLimits

0xf0a5,	// (0x00028283) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x00028ed2) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x00028ed2) popup_slider_window_t

0xa1e8,	// (0x000233c6) slider_pane_ParamLimits

0xa1e8,	// (0x000233c6) slider_pane

0x14c1,	// (0x0001a69f) slider_pane_g1_ParamLimits

0x14c1,	// (0x0001a69f) slider_pane_g1

0x14d5,	// (0x0001a6b3) slider_pane_g2_ParamLimits

0x14d5,	// (0x0001a6b3) slider_pane_g2

0x14eb,	// (0x0001a6c9) slider_pane_g3_ParamLimits

0x14eb,	// (0x0001a6c9) slider_pane_g3

0x0003,

0xfe0b,	// (0x00028fe9) slider_pane_g_ParamLimits

0xfe0b,	// (0x00028fe9) slider_pane_g

0x93e7,	// (0x000225c5) popup_tb_float_extension_window_ParamLimits

0x93e7,	// (0x000225c5) popup_tb_float_extension_window

0x1517,	// (0x0001a6f5) aid_size_cell_tb_float_ext

0x83be,	// (0x0002159c) bg_popup_sub_window_cp28

0x1523,	// (0x0001a701) grid_tb_float_ext_pane

0x152d,	// (0x0001a70b) cell_tb_float_ext_pane_ParamLimits

0x152d,	// (0x0001a70b) cell_tb_float_ext_pane

0x1547,	// (0x0001a725) cell_tb_float_ext_pane_g1

0x1550,	// (0x0001a72e) grid_highlight_pane_cp12

0x9bb9,	// (0x00022d97) cell_last_hwr_side_pane_ParamLimits

0x9bb9,	// (0x00022d97) cell_last_hwr_side_pane

0xdfff,	// (0x000271dd) cell_last_hwr_side_pane_g1

0x1559,	// (0x0001a737) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x00028ff2) cell_last_hwr_side_pane_g

0xaab6,	// (0x00023c94) vkb2_area_bottom_space_btn_pane_ParamLimits

0xaab6,	// (0x00023c94) vkb2_area_bottom_space_btn_pane

0xe190,	// (0x0002736e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xf41e,	// (0x000285fc) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6c08,	// (0x0001fde6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6c42,	// (0x0001fe20) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6c42,	// (0x0001fe20) vkb2_area_bottom_space_btn_pane_g1

0x6c7c,	// (0x0001fe5a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6c7c,	// (0x0001fe5a) vkb2_area_bottom_space_btn_pane_g2

0x6cb2,	// (0x0001fe90) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6cb2,	// (0x0001fe90) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x00028ff7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x00028ff7) vkb2_area_bottom_space_btn_pane_g

0x625c,	// (0x0001f43a) cel_fep_hwr_func_pane_ParamLimits

0x625c,	// (0x0001f43a) cel_fep_hwr_func_pane

0x9b8e,	// (0x00022d6c) cell_hwr_side_button_pane_ParamLimits

0x9b8e,	// (0x00022d6c) cell_hwr_side_button_pane

0xf1af,	// (0x0002838d) aid_area_touch_clock_ParamLimits

0x8777,	// (0x00021955) bg_uniindi_top_pane_ParamLimits

0xf1c1,	// (0x0002839f) uniindi_top_pane_g1_ParamLimits

0xf1d7,	// (0x000283b5) uniindi_top_pane_g2_ParamLimits

0xf1e3,	// (0x000283c1) uniindi_top_pane_g3_ParamLimits

0xf1f4,	// (0x000283d2) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x00028f0a) uniindi_top_pane_g_ParamLimits

0xf201,	// (0x000283df) uniindi_top_pane_t1_ParamLimits

0x8777,	// (0x00021955) bg_vkb2_func_pane_cp01_ParamLimits

0x8777,	// (0x00021955) bg_vkb2_func_pane_cp01

0x1562,	// (0x0001a740) cel_fep_hwr_func_pane_g1_ParamLimits

0x1562,	// (0x0001a740) cel_fep_hwr_func_pane_g1

0x8777,	// (0x00021955) bg_vkb2_func_pane_cp02_ParamLimits

0x8777,	// (0x00021955) bg_vkb2_func_pane_cp02

0x1562,	// (0x0001a740) cell_hwr_side_button_pane_g1_ParamLimits

0x1562,	// (0x0001a740) cell_hwr_side_button_pane_g1

0xc0ad,	// (0x0002528b) status_pane_g4_ParamLimits

0xc0ad,	// (0x0002528b) status_pane_g4

0xc0c7,	// (0x000252a5) status_pane_t1

0xde8e,	// (0x0002706c) form2_midp_gauge_slider_cont_pane

0xde96,	// (0x00027074) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9ad2,	// (0x00022cb0) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9ae6,	// (0x00022cc4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x00028cd6) form2_midp_gauge_slider_pane_t_ParamLimits

0xdea8,	// (0x00027086) form2_midp_slider_pane_ParamLimits

0x65f9,	// (0x0001f7d7) aid_size_cell_func_vkb2_ParamLimits

0x65f9,	// (0x0001f7d7) aid_size_cell_func_vkb2

0x1503,	// (0x0001a6e1) slider_pane_g4_ParamLimits

0x1503,	// (0x0001a6e1) slider_pane_g4

0xaf44,	// (0x00024122) form2_midp_gauge_slider_pane_t2_cp01

0xaf54,	// (0x00024132) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xaf54,	// (0x00024132) form2_midp_gauge_slider_pane_t3_cp01

0x6d27,	// (0x0001ff05) form2_midp_slider_pane_cp01

0x83be,	// (0x0002159c) navi_smil_pane

0x1592,	// (0x0001a770) navi_smil_pane_g1

0x159a,	// (0x0001a778) navi_smil_pane_t1

0x1570,	// (0x0001a74e) form2_midp_slider_pane_g1

0x1579,	// (0x0001a757) form2_midp_slider_pane_g2

0x1581,	// (0x0001a75f) form2_midp_slider_pane_g3

0x1570,	// (0x0001a74e) form2_midp_slider_pane_g4

0xaf73,	// (0x00024151) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x00029000) form2_midp_slider_pane_g

0x6cec,	// (0x0001feca) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6cec,	// (0x0001feca) vkb2_area_bottom_space_btn_pane_g4

0x2ef4,	// (0x0001c0d2) lc0_navi_pane_ParamLimits

0x2ef4,	// (0x0001c0d2) lc0_navi_pane

0x2f5e,	// (0x0001c13c) lc0_stat_indi_pane_ParamLimits

0x2f5e,	// (0x0001c13c) lc0_stat_indi_pane

0x2f73,	// (0x0001c151) ls0_title_pane_ParamLimits

0x2f73,	// (0x0001c151) ls0_title_pane

0xb314,	// (0x000244f2) bg_popup_sub_pane_cp14_ParamLimits

0xf196,	// (0x00028374) list_uniindi_pane_ParamLimits

0xf1a2,	// (0x00028380) uniindi_top_pane_ParamLimits

0xf23e,	// (0x0002841c) list_single_uniindi_pane_g1_ParamLimits

0xf251,	// (0x0002842f) list_single_uniindi_pane_t1_ParamLimits

0xaf7e,	// (0x0002415c) lc0_stat_clock_pane_ParamLimits

0xaf7e,	// (0x0002415c) lc0_stat_clock_pane

0xaf8b,	// (0x00024169) lc0_stat_indi_pane_g1_ParamLimits

0xaf8b,	// (0x00024169) lc0_stat_indi_pane_g1

0xaf98,	// (0x00024176) lc0_stat_indi_pane_g2_ParamLimits

0xaf98,	// (0x00024176) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x0002900b) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x0002900b) lc0_stat_indi_pane_g

0xafa5,	// (0x00024183) lc0_uni_indicator_pane_ParamLimits

0xafa5,	// (0x00024183) lc0_uni_indicator_pane

0xafb2,	// (0x00024190) ls0_title_pane_g1_ParamLimits

0xafb2,	// (0x00024190) ls0_title_pane_g1

0xafc6,	// (0x000241a4) ls0_title_pane_t1_ParamLimits

0xafc6,	// (0x000241a4) ls0_title_pane_t1

0xaff4,	// (0x000241d2) lc0_uni_indicator_pane_g1_ParamLimits

0xaff4,	// (0x000241d2) lc0_uni_indicator_pane_g1

0x15a8,	// (0x0001a786) lc0_stat_clock_pane_t1

0x83be,	// (0x0002159c) main_ai5_pane

0x15b6,	// (0x0001a794) ai5_sk_pane_ParamLimits

0x15b6,	// (0x0001a794) ai5_sk_pane

0xb022,	// (0x00024200) cell_ai5_widget_pane_ParamLimits

0xb022,	// (0x00024200) cell_ai5_widget_pane

0x15c3,	// (0x0001a7a1) aid_size_cell_widget_grid

0x15d1,	// (0x0001a7af) bg_ai5_widget_pane_ParamLimits

0x15d1,	// (0x0001a7af) bg_ai5_widget_pane

0x1645,	// (0x0001a823) cell_ai5_widget_pane_g2

0x1655,	// (0x0001a833) cell_ai5_widget_pane_g3

0x166c,	// (0x0001a84a) cell_ai5_widget_pane_g4

0x1678,	// (0x0001a856) cell_ai5_widget_pane_g5

0x1684,	// (0x0001a862) cell_ai5_widget_pane_g6

0x1690,	// (0x0001a86e) cell_ai5_widget_pane_g7

0x16d8,	// (0x0001a8b6) cell_ai5_widget_pane_t1_ParamLimits

0x16d8,	// (0x0001a8b6) cell_ai5_widget_pane_t1

0x16f5,	// (0x0001a8d3) cell_ai5_widget_pane_t2_ParamLimits

0x16f5,	// (0x0001a8d3) cell_ai5_widget_pane_t2

0x170d,	// (0x0001a8eb) cell_ai5_widget_pane_t3_ParamLimits

0x170d,	// (0x0001a8eb) cell_ai5_widget_pane_t3

0x1725,	// (0x0001a903) cell_ai5_widget_pane_t4_ParamLimits

0x1725,	// (0x0001a903) cell_ai5_widget_pane_t4

0x1742,	// (0x0001a920) cell_ai5_widget_pane_t5_ParamLimits

0x1742,	// (0x0001a920) cell_ai5_widget_pane_t5

0x1761,	// (0x0001a93f) cell_ai5_widget_pane_t6_ParamLimits

0x1761,	// (0x0001a93f) cell_ai5_widget_pane_t6

0x1773,	// (0x0001a951) cell_ai5_widget_pane_t7_ParamLimits

0x1773,	// (0x0001a951) cell_ai5_widget_pane_t7

0x178c,	// (0x0001a96a) cell_ai5_widget_pane_t8_ParamLimits

0x178c,	// (0x0001a96a) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x00029025) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x00029025) cell_ai5_widget_pane_t

0x17e0,	// (0x0001a9be) grid_ai5_widget_pane

0xb314,	// (0x000244f2) highlight_cell_ai5_widget_pane_ParamLimits

0xb314,	// (0x000244f2) highlight_cell_ai5_widget_pane

0xb08c,	// (0x0002426a) ai5_sk_left_pane

0xb096,	// (0x00024274) ai5_sk_middle_pane

0xb0a0,	// (0x0002427e) ai5_sk_right_pane

0x17f4,	// (0x0001a9d2) bg_ai5_widget_pane_g1_ParamLimits

0x17f4,	// (0x0001a9d2) bg_ai5_widget_pane_g1

0x1800,	// (0x0001a9de) bg_ai5_widget_pane_g2_ParamLimits

0x1800,	// (0x0001a9de) bg_ai5_widget_pane_g2

0x180c,	// (0x0001a9ea) bg_ai5_widget_pane_g3_ParamLimits

0x180c,	// (0x0001a9ea) bg_ai5_widget_pane_g3

0x1818,	// (0x0001a9f6) bg_ai5_widget_pane_g4_ParamLimits

0x1818,	// (0x0001a9f6) bg_ai5_widget_pane_g4

0x1824,	// (0x0001aa02) bg_ai5_widget_pane_g5_ParamLimits

0x1824,	// (0x0001aa02) bg_ai5_widget_pane_g5

0x1830,	// (0x0001aa0e) bg_ai5_widget_pane_g6_ParamLimits

0x1830,	// (0x0001aa0e) bg_ai5_widget_pane_g6

0x183c,	// (0x0001aa1a) bg_ai5_widget_pane_g7_ParamLimits

0x183c,	// (0x0001aa1a) bg_ai5_widget_pane_g7

0x1848,	// (0x0001aa26) bg_ai5_widget_pane_g8_ParamLimits

0x1848,	// (0x0001aa26) bg_ai5_widget_pane_g8

0x1854,	// (0x0001aa32) bg_ai5_widget_pane_g9_ParamLimits

0x1854,	// (0x0001aa32) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x0002903a) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x0002903a) bg_ai5_widget_pane_g

0x1886,	// (0x0001aa64) cell_shortcut_ai5_widget_pane_ParamLimits

0x1886,	// (0x0001aa64) cell_shortcut_ai5_widget_pane

0xbd49,	// (0x00024f27) bg_cell_shortcut_ai5_widget_pane

0x1897,	// (0x0001aa75) cell_grid_ai5_widget_pane_g1

0x18a0,	// (0x0001aa7e) highlight_cell_shortcut_ai5_widget_pane

0xc1a7,	// (0x00025385) ai5_sk_left_pane_g1

0x18a8,	// (0x0001aa86) ai5_sk_left_pane_g2

0x18b0,	// (0x0001aa8e) ai5_sk_left_pane_g3

0x18b8,	// (0x0001aa96) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x0002904d) ai5_sk_left_pane_g

0x18c0,	// (0x0001aa9e) ai5_sk_left_pane_t1

0xc19f,	// (0x0002537d) ai5_sk_right_pane_g1

0x18ce,	// (0x0001aaac) ai5_sk_right_pane_g2

0x18d6,	// (0x0001aab4) ai5_sk_right_pane_g3

0x18de,	// (0x0001aabc) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x00029056) ai5_sk_right_pane_g

0x18e6,	// (0x0001aac4) ai5_sk_right_pane_t1

0xc19f,	// (0x0002537d) ai5_sk_middle_pane_g1

0xc1a7,	// (0x00025385) ai5_sk_middle_pane_g2

0xc1bf,	// (0x0002539d) ai5_sk_middle_pane_g3

0x18d6,	// (0x0001aab4) ai5_sk_middle_pane_g4

0x18b0,	// (0x0001aa8e) ai5_sk_middle_pane_g5

0x18f4,	// (0x0001aad2) ai5_sk_middle_pane_g6

0xb0aa,	// (0x00024288) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x0002905f) ai5_sk_middle_pane_g

0x2de0,	// (0x0001bfbe) aid_touch_area_size_lc0_ParamLimits

0x2de0,	// (0x0001bfbe) aid_touch_area_size_lc0

0x63e7,	// (0x0001f5c5) cell_hwr_candidate_pane_t1_ParamLimits

0xbfcf,	// (0x000251ad) aid_touch_navi_pane

0x306c,	// (0x0001c24a) status_dt_navi_pane_ParamLimits

0x306c,	// (0x0001c24a) status_dt_navi_pane

0x3084,	// (0x0001c262) status_dt_sta_pane_ParamLimits

0x3084,	// (0x0001c262) status_dt_sta_pane

0xb0b2,	// (0x00024290) dt_sta_controll_pane

0xb0bf,	// (0x0002429d) dt_sta_indi_pane

0xb0cc,	// (0x000242aa) dt_sta_title_pane

0x8777,	// (0x00021955) bg_dt_sta_indi_pane_ParamLimits

0x8777,	// (0x00021955) bg_dt_sta_indi_pane

0x18fc,	// (0x0001aada) dt_sta_battery_pane

0xb0de,	// (0x000242bc) dt_sta_indi_pane_g1

0xb0e7,	// (0x000242c5) dt_sta_indi_pane_g2

0xb0f0,	// (0x000242ce) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x0002906e) dt_sta_indi_pane_g

0xb0f9,	// (0x000242d7) dt_sta_signal_pane

0xb314,	// (0x000244f2) bg_dt_sta_title_pane_ParamLimits

0xb314,	// (0x000244f2) bg_dt_sta_title_pane

0x1904,	// (0x0001aae2) dt_sta_title_pane_g1

0xb102,	// (0x000242e0) dt_sta_title_pane_t1_ParamLimits

0xb102,	// (0x000242e0) dt_sta_title_pane_t1

0x83be,	// (0x0002159c) bg_dt_sta_control_pane

0xb117,	// (0x000242f5) dt_sta_controll_pane_g1

0x190c,	// (0x0001aaea) bg_dt_sta_title_pane_g1

0x1915,	// (0x0001aaf3) bg_dt_sta_title_pane_g2

0x191e,	// (0x0001aafc) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x00029075) bg_dt_sta_title_pane_g

0xdfff,	// (0x000271dd) bg_dt_sta_indi_pane_g1

0x1927,	// (0x0001ab05) dt_sta_signal_pane_g1

0x192f,	// (0x0001ab0d) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x0002907c) dt_sta_signal_pane_g

0x1937,	// (0x0001ab15) dt_sta_battery_pane_g1

0x1940,	// (0x0001ab1e) dt_sta_battery_pane_t1

0xdfff,	// (0x000271dd) bg_dt_sta_control_pane_g1

0xb8ba,	// (0x00024a98) fep_china_uni_eep_pane

0xb8c2,	// (0x00024aa0) fep_china_uni_entry_pane_ParamLimits

0xb8d2,	// (0x00024ab0) popup_fep_china_uni_window_g1_ParamLimits

0xb8e2,	// (0x00024ac0) popup_fep_china_uni_window_g2_ParamLimits

0xb8e2,	// (0x00024ac0) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00028901) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00028901) popup_fep_china_uni_window_g

0x194f,	// (0x0001ab2d) fep_china_uni_eep_pane_g1

0x1957,	// (0x0001ab35) fep_china_uni_eep_pane_t1

0x1589,	// (0x0001a767) aid_touch_area_size_smil_player

0xc080,	// (0x0002525e) lc0_clock_pane

0xc0bb,	// (0x00025299) status_pane_g5_ParamLimits

0xc0bb,	// (0x00025299) status_pane_g5

0x8f75,	// (0x00022153) popup_keymap_window

0xc099,	// (0x00025277) status_icon_pane

0x1655,	// (0x0001a833) cell_ai5_widget_pane_g3_ParamLimits

0x166c,	// (0x0001a84a) cell_ai5_widget_pane_g4_ParamLimits

0x1678,	// (0x0001a856) cell_ai5_widget_pane_g5_ParamLimits

0x169c,	// (0x0001a87a) cell_ai5_widget_pane_g8_ParamLimits

0x169c,	// (0x0001a87a) cell_ai5_widget_pane_g8

0x16b0,	// (0x0001a88e) cell_ai5_widget_pane_g9_ParamLimits

0x16b0,	// (0x0001a88e) cell_ai5_widget_pane_g9

0x16c4,	// (0x0001a8a2) cell_ai5_widget_pane_g10_ParamLimits

0x16c4,	// (0x0001a8a2) cell_ai5_widget_pane_g10

0x1966,	// (0x0001ab44) status_icon_pane_g1

0x83be,	// (0x0002159c) bg_popup_sub_pane_cp13

0x196e,	// (0x0001ab4c) popup_keymap_window_t1

0x2d90,	// (0x0001bf6e) control_pane_g6_ParamLimits

0x2d90,	// (0x0001bf6e) control_pane_g6

0x2d83,	// (0x0001bf61) control_pane_g7_ParamLimits

0x2d83,	// (0x0001bf61) control_pane_g7

0x2d76,	// (0x0001bf54) control_pane_g8_ParamLimits

0x2d76,	// (0x0001bf54) control_pane_g8

0xb0b2,	// (0x00024290) dt_sta_controll_pane_ParamLimits

0xb0bf,	// (0x0002429d) dt_sta_indi_pane_ParamLimits

0xb0cc,	// (0x000242aa) dt_sta_title_pane_ParamLimits

0x8bcd,	// (0x00021dab) aid_size_touch_scroll_bar_cale

0x4fd9,	// (0x0001e1b7) popup_discreet_window_ParamLimits

0x4fd9,	// (0x0001e1b7) popup_discreet_window

0x8508,	// (0x000216e6) popup_sk_window

0xc6ef,	// (0x000258cd) bg_popup_sub_pane_cp28_ParamLimits

0xc6ef,	// (0x000258cd) bg_popup_sub_pane_cp28

0x197c,	// (0x0001ab5a) popup_discreet_window_g1_ParamLimits

0x197c,	// (0x0001ab5a) popup_discreet_window_g1

0x199c,	// (0x0001ab7a) popup_discreet_window_t1_ParamLimits

0x199c,	// (0x0001ab7a) popup_discreet_window_t1

0x19ba,	// (0x0001ab98) popup_discreet_window_t2_ParamLimits

0x19ba,	// (0x0001ab98) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x00029081) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x00029081) popup_discreet_window_t

0x6f2f,	// (0x0002010d) popup_sk_window_g1

0x6f39,	// (0x00020117) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x00029088) popup_sk_window_g

0x6f43,	// (0x00020121) popup_sk_window_t1

0x6f51,	// (0x0002012f) popup_sk_window_t1_copy1

0x1645,	// (0x0001a823) cell_ai5_widget_pane_g2_ParamLimits

0x179e,	// (0x0001a97c) cell_ai5_widget_pane_t9_ParamLimits

0x179e,	// (0x0001a97c) cell_ai5_widget_pane_t9

0x83be,	// (0x0002159c) main_fep_fshwr2_pane

0xb120,	// (0x000242fe) aid_fshwr2_btn_pane

0xb131,	// (0x0002430f) aid_fshwr2_syb_pane

0xb142,	// (0x00024320) aid_fshwr2_txt_pane

0xb14e,	// (0x0002432c) fshwr2_func_candi_pane

0xb16d,	// (0x0002434b) fshwr2_hwr_syb_pane

0xb188,	// (0x00024366) fshwr2_icf_pane

0x83be,	// (0x0002159c) fshwr2_icf_bg_pane

0xb1b3,	// (0x00024391) fshwr2_icf_pane_t1_ParamLimits

0xb1b3,	// (0x00024391) fshwr2_icf_pane_t1

0xb837,	// (0x00024a15) fshwr2_func_candi_pane_g1

0xb1cc,	// (0x000243aa) fshwr2_func_candi_row_pane_ParamLimits

0xb1cc,	// (0x000243aa) fshwr2_func_candi_row_pane

0xb1dc,	// (0x000243ba) cell_fshwr2_syb_pane_ParamLimits

0xb1dc,	// (0x000243ba) cell_fshwr2_syb_pane

0xe190,	// (0x0002736e) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe190,	// (0x0002736e) fshwr2_hwr_syb_pane_g1

0x83be,	// (0x0002159c) bg_popup_call_pane_cp01

0xb1f6,	// (0x000243d4) fshwr2_func_candi_cell_pane_ParamLimits

0xb1f6,	// (0x000243d4) fshwr2_func_candi_cell_pane

0xcd31,	// (0x00025f0f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xcd31,	// (0x00025f0f) fshwr2_func_candi_cell_bg_pane

0xb221,	// (0x000243ff) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb221,	// (0x000243ff) fshwr2_func_candi_cell_pane_g1

0x1a0c,	// (0x0001abea) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x1a0c,	// (0x0001abea) fshwr2_func_candi_cell_pane_t1

0x83be,	// (0x0002159c) bg_button_pane_cp08

0xbd49,	// (0x00024f27) cell_fshwr2_syb_bg_pane

0xb241,	// (0x0002441f) cell_fshwr2_syb_bg_pane_g1

0xb249,	// (0x00024427) cell_fshwr2_syb_bg_pane_t1

0xb314,	// (0x000244f2) main_tmo_pane

0x9688,	// (0x00022866) uni_indicator_pane_g1_ParamLimits

0x969f,	// (0x0002287d) uni_indicator_pane_g2_ParamLimits

0x96b5,	// (0x00022893) uni_indicator_pane_g3_ParamLimits

0xd123,	// (0x00026301) uni_indicator_pane_g4_ParamLimits

0xd123,	// (0x00026301) uni_indicator_pane_g4

0xd137,	// (0x00026315) uni_indicator_pane_g5_ParamLimits

0xd137,	// (0x00026315) uni_indicator_pane_g5

0xd137,	// (0x00026315) uni_indicator_pane_g6_ParamLimits

0xd137,	// (0x00026315) uni_indicator_pane_g6

0xf91b,	// (0x00028af9) uni_indicator_pane_g_ParamLimits

0xa080,	// (0x0002325e) popup_tmo_note_window_ParamLimits

0xa080,	// (0x0002325e) popup_tmo_note_window

0xb314,	// (0x000244f2) fshwr2_bg_pane

0xb232,	// (0x00024410) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb232,	// (0x00024410) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x0002908d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x0002908d) fshwr2_func_candi_cell_pane_g

0xdfff,	// (0x000271dd) bg_popup_window_pane_cp01

0x1a1f,	// (0x0001abfd) bg_popup_window_pane_g1_cp01

0x1a28,	// (0x0001ac06) bg_popup_window_pane_cp22_ParamLimits

0x1a28,	// (0x0001ac06) bg_popup_window_pane_cp22

0x1a36,	// (0x0001ac14) listscroll_tmo_link_pane_ParamLimits

0x1a36,	// (0x0001ac14) listscroll_tmo_link_pane

0x1a76,	// (0x0001ac54) popup_tmo_note_window_g1_ParamLimits

0x1a76,	// (0x0001ac54) popup_tmo_note_window_g1

0x1a83,	// (0x0001ac61) tmo_note_info_pane_ParamLimits

0x1a83,	// (0x0001ac61) tmo_note_info_pane

0xb258,	// (0x00024436) list_tmo_note_info_pane_g1_ParamLimits

0xb258,	// (0x00024436) list_tmo_note_info_pane_g1

0x1a9d,	// (0x0001ac7b) list_tmo_note_info_pane_g2_ParamLimits

0x1a9d,	// (0x0001ac7b) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x00029092) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x00029092) list_tmo_note_info_pane_g

0x1ab9,	// (0x0001ac97) list_tmo_note_info_text_pane_ParamLimits

0x1ab9,	// (0x0001ac97) list_tmo_note_info_text_pane

0x1afb,	// (0x0001acd9) list_tmo_link_pane

0x1b08,	// (0x0001ace6) scroll_pane_cp20

0x1b15,	// (0x0001acf3) list_single_tmo_link_pane_ParamLimits

0x1b15,	// (0x0001acf3) list_single_tmo_link_pane

0x1b25,	// (0x0001ad03) list_single_tmo_link_pane_t1

0x1b33,	// (0x0001ad11) list_tmo_note_info_text_pane_t1_ParamLimits

0x1b33,	// (0x0001ad11) list_tmo_note_info_text_pane_t1

0x2a69,	// (0x0001bc47) aid_size_touch_scroll_bar_cp01_ParamLimits

0x2a69,	// (0x0001bc47) aid_size_touch_scroll_bar_cp01

0x7feb,	// (0x000211c9) aid_size_touch_slider_marker

0x84f8,	// (0x000216d6) popup_settings_window_ParamLimits

0x84f8,	// (0x000216d6) popup_settings_window

0x4424,	// (0x0001d602) popup_candi_list_indi_window

0xbfcf,	// (0x000251ad) aid_touch_navi_pane_ParamLimits

0x6552,	// (0x0001f730) rs_clock_indi_pane

0x655b,	// (0x0001f739) sctrl_sk_bottom_pane_ParamLimits

0x656c,	// (0x0001f74a) sctrl_sk_top_pane_ParamLimits

0x6653,	// (0x0001f831) popup_fep_tooltip_window

0x15c3,	// (0x0001a7a1) aid_size_cell_widget_grid_ParamLimits

0x1630,	// (0x0001a80e) cell_ai5_widget_pane_g1_ParamLimits

0x1630,	// (0x0001a80e) cell_ai5_widget_pane_g1

0x1684,	// (0x0001a862) cell_ai5_widget_pane_g6_ParamLimits

0x1690,	// (0x0001a86e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x00029010) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x00029010) cell_ai5_widget_pane_g

0x17c2,	// (0x0001a9a0) cell_ai5_widget_pane_t10_ParamLimits

0x17c2,	// (0x0001a9a0) cell_ai5_widget_pane_t10

0x17e0,	// (0x0001a9be) grid_ai5_widget_pane_ParamLimits

0x1860,	// (0x0001aa3e) cell_contacts_ai5_widget_pane_ParamLimits

0x1860,	// (0x0001aa3e) cell_contacts_ai5_widget_pane

0x19cf,	// (0x0001abad) popup_discreet_window_t3_ParamLimits

0x19cf,	// (0x0001abad) popup_discreet_window_t3

0xb19d,	// (0x0002437b) popup_fshwr2_char_preview_window_ParamLimits

0xb19d,	// (0x0002437b) popup_fshwr2_char_preview_window

0xb26f,	// (0x0002444d) tmo_note_info_pane_t1

0xb284,	// (0x00024462) tmo_note_info_pane_t2

0xb29d,	// (0x0002447b) tmo_note_info_pane_t3

0x1ad7,	// (0x0001acb5) tmo_note_info_pane_t4

0x1ae9,	// (0x0001acc7) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x00029097) tmo_note_info_pane_t

0x1afb,	// (0x0001acd9) list_tmo_link_pane_ParamLimits

0x1b08,	// (0x0001ace6) scroll_pane_cp20_ParamLimits

0x83be,	// (0x0002159c) bg_popup_fep_char_preview_window_cp01

0x1b4c,	// (0x0001ad2a) popup_fshwr2_char_preview_window_t1

0x1b5a,	// (0x0001ad38) popup_candi_list_indi_window_g1

0x1b63,	// (0x0001ad41) bg_cell_contacts_ai5_widget_pane

0x1b6f,	// (0x0001ad4d) cell_contacts_ai5_widget_pane_g1

0x1b82,	// (0x0001ad60) cell_contacts_ai5_widget_pane_g2

0x1b8e,	// (0x0001ad6c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x000290a2) cell_contacts_ai5_widget_pane_g

0x1ba0,	// (0x0001ad7e) cell_contacts_ai5_widget_pane_t1

0xb314,	// (0x000244f2) highlight_cell_shortcut_ai5_widget_pane_cp01

0x1c1a,	// (0x0001adf8) settings_container_pane

0xbd49,	// (0x00024f27) listscroll_set_pane_copy1

0xd9a6,	// (0x00026b84) scroll_pane_cp121_copy1

0x1c26,	// (0x0001ae04) set_content_pane_copy1

0x1c2e,	// (0x0001ae0c) aid_height_set_list_copy1_ParamLimits

0x1c2e,	// (0x0001ae0c) aid_height_set_list_copy1

0xbfa7,	// (0x00025185) aid_size_parent_copy1_ParamLimits

0xbfa7,	// (0x00025185) aid_size_parent_copy1

0x1c3a,	// (0x0001ae18) button_value_adjust_pane_cp6_copy1_ParamLimits

0x1c3a,	// (0x0001ae18) button_value_adjust_pane_cp6_copy1

0xb46d,	// (0x0002464b) list_highlight_pane_cp2_copy1_ParamLimits

0xb46d,	// (0x0002464b) list_highlight_pane_cp2_copy1

0x1c4e,	// (0x0001ae2c) list_set_pane_copy1_ParamLimits

0x1c4e,	// (0x0001ae2c) list_set_pane_copy1

0x1bb5,	// (0x0001ad93) main_pane_set_t1_copy1_ParamLimits

0x1bb5,	// (0x0001ad93) main_pane_set_t1_copy1

0x1bef,	// (0x0001adcd) main_pane_set_t2_copy1_ParamLimits

0x1bef,	// (0x0001adcd) main_pane_set_t2_copy1

0x1cfb,	// (0x0001aed9) main_pane_set_t3_copy1

0x1d09,	// (0x0001aee7) main_pane_set_t4_copy1

0x1c0e,	// (0x0001adec) set_content_pane_g1_copy1_ParamLimits

0x1c0e,	// (0x0001adec) set_content_pane_g1_copy1

0x1d17,	// (0x0001aef5) setting_code_pane_copy1

0x1d1f,	// (0x0001aefd) setting_slider_graphic_pane_copy1

0x1d1f,	// (0x0001aefd) setting_slider_pane_copy1

0x1d1f,	// (0x0001aefd) setting_text_pane_copy1

0x1d1f,	// (0x0001aefd) setting_volume_pane_copy1

0x1d17,	// (0x0001aef5) settings_code_pane_cp2_copy1

0x1d27,	// (0x0001af05) settings_code_pane_cp_copy1_ParamLimits

0x1d27,	// (0x0001af05) settings_code_pane_cp_copy1

0x70dc,	// (0x000202ba) volume_set_pane_copy1

0x1d3b,	// (0x0001af19) volume_set_pane_g10_copy1

0x1d43,	// (0x0001af21) volume_set_pane_g1_copy1

0x1d4b,	// (0x0001af29) volume_set_pane_g2_copy1

0x1d53,	// (0x0001af31) volume_set_pane_g3_copy1

0x1d5b,	// (0x0001af39) volume_set_pane_g4_copy1

0x1d63,	// (0x0001af41) volume_set_pane_g5_copy1

0x1d6b,	// (0x0001af49) volume_set_pane_g6_copy1

0x1d73,	// (0x0001af51) volume_set_pane_g7_copy1

0x1d7b,	// (0x0001af59) volume_set_pane_g8_copy1

0x1d83,	// (0x0001af61) volume_set_pane_g9_copy1

0x8644,	// (0x00021822) bg_set_opt_pane_cp_copy1_ParamLimits

0x8644,	// (0x00021822) bg_set_opt_pane_cp_copy1

0x70e4,	// (0x000202c2) setting_slider_pane_t1_copy1_ParamLimits

0x70e4,	// (0x000202c2) setting_slider_pane_t1_copy1

0x7102,	// (0x000202e0) setting_slider_pane_t2_copy1_ParamLimits

0x7102,	// (0x000202e0) setting_slider_pane_t2_copy1

0x711c,	// (0x000202fa) setting_slider_pane_t3_copy1_ParamLimits

0x711c,	// (0x000202fa) setting_slider_pane_t3_copy1

0x7134,	// (0x00020312) slider_set_pane_copy1_ParamLimits

0x7134,	// (0x00020312) slider_set_pane_copy1

0xb363,	// (0x00024541) set_opt_bg_pane_g1_copy2

0xb36b,	// (0x00024549) set_opt_bg_pane_g2_copy2

0x1d8b,	// (0x0001af69) set_opt_bg_pane_g3_copy2

0xb37b,	// (0x00024559) set_opt_bg_pane_g4_copy2

0xb383,	// (0x00024561) set_opt_bg_pane_g5_copy2

0xb38b,	// (0x00024569) set_opt_bg_pane_g6_copy2

0x1d95,	// (0x0001af73) set_opt_bg_pane_g7_copy2

0x1d9d,	// (0x0001af7b) set_opt_bg_pane_g8_copy2

0x1da7,	// (0x0001af85) set_opt_bg_pane_g9_copy2

0x1db1,	// (0x0001af8f) aid_size_touch_slider_mark_copy1_ParamLimits

0x1db1,	// (0x0001af8f) aid_size_touch_slider_mark_copy1

0x1dc5,	// (0x0001afa3) slider_set_pane_g1_copy1

0x1dce,	// (0x0001afac) slider_set_pane_g2_copy1

0xd317,	// (0x000264f5) slider_set_pane_g3_copy1_ParamLimits

0xd317,	// (0x000264f5) slider_set_pane_g3_copy1

0xd32b,	// (0x00026509) slider_set_pane_g4_copy1_ParamLimits

0xd32b,	// (0x00026509) slider_set_pane_g4_copy1

0xd343,	// (0x00026521) slider_set_pane_g5_copy1_ParamLimits

0xd343,	// (0x00026521) slider_set_pane_g5_copy1

0xd317,	// (0x000264f5) slider_set_pane_g6_copy1_ParamLimits

0xd317,	// (0x000264f5) slider_set_pane_g6_copy1

0x1dd6,	// (0x0001afb4) slider_set_pane_g7_copy1_ParamLimits

0x1dd6,	// (0x0001afb4) slider_set_pane_g7_copy1

0x84b8,	// (0x00021696) bg_set_opt_pane_cp2_copy1

0x1dec,	// (0x0001afca) setting_slider_graphic_pane_g1_copy1

0x1e05,	// (0x0001afe3) setting_slider_graphic_pane_t1_copy1

0x1df5,	// (0x0001afd3) setting_slider_graphic_pane_t2_copy1

0x1e15,	// (0x0001aff3) slider_set_pane_cp_copy1

0x1e25,	// (0x0001b003) input_focus_pane_cp1_copy1

0x1e2e,	// (0x0001b00c) list_set_text_pane_copy1

0x1e36,	// (0x0001b014) setting_text_pane_g1_copy1

0x4d4e,	// (0x0001df2c) set_text_pane_t1_copy1

0x1e25,	// (0x0001b003) input_focus_pane_cp2_copy1

0x1e36,	// (0x0001b014) setting_code_pane_g1_copy1

0x1e5a,	// (0x0001b038) setting_code_pane_t1_copy1

0xd2f8,	// (0x000264d6) list_set_graphic_pane_copy1

0x84b8,	// (0x00021696) bg_set_opt_pane_cp4_copy1

0xba5f,	// (0x00024c3d) list_set_graphic_pane_g1_copy1_ParamLimits

0xba5f,	// (0x00024c3d) list_set_graphic_pane_g1_copy1

0x1e68,	// (0x0001b046) list_set_graphic_pane_g2_copy1

0xba77,	// (0x00024c55) list_set_graphic_pane_t1_copy1_ParamLimits

0xba77,	// (0x00024c55) list_set_graphic_pane_t1_copy1

0xdfff,	// (0x000271dd) rs_clock_indi_pane_g1

0x1e70,	// (0x0001b04e) rs_clock_indi_pane_t1

0x1e7e,	// (0x0001b05c) rs_indi_pane

0x1e86,	// (0x0001b064) rs_indi_pane_g1

0x1e8f,	// (0x0001b06d) rs_indi_pane_g2

0x1e98,	// (0x0001b076) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x000290a9) rs_indi_pane_g

0xbd49,	// (0x00024f27) bg_popup_preview_window_pane_cp03

0x1ea1,	// (0x0001b07f) popup_fep_tooltip_window_t1

0xe999,	// (0x00027b77) popup_note2_window_g2_ParamLimits

0xe999,	// (0x00027b77) popup_note2_window_g2

0x0001,

0xfc64,	// (0x00028e42) popup_note2_window_g_ParamLimits

0xfc64,	// (0x00028e42) popup_note2_window_g

0xee20,	// (0x00027ffe) bg_popup_sub_pane_cp11_ParamLimits

0xee2d,	// (0x0002800b) cell_ai3_links_pane_g1_ParamLimits

0xee44,	// (0x00028022) cell_ai3_links_pane_t1

0x4d4e,	// (0x0001df2c) set_text_pane_t1_copy1_ParamLimits

0xbc66,	// (0x00024e44) cell_graphic_popup_pane_cp2_ParamLimits

0xbc66,	// (0x00024e44) cell_graphic_popup_pane_cp2

0x1eaf,	// (0x0001b08d) cell_graphic_popup_pane_g1_cp2

0x89e0,	// (0x00021bbe) cell_graphic_popup_pane_g2_cp2

0x1eb7,	// (0x0001b095) cell_graphic_popup_pane_g3_cp2

0x1ebf,	// (0x0001b09d) cell_graphic_popup_pane_t2_cp2

0x89f1,	// (0x00021bcf) grid_highlight_pane_cp3_cp2

0xb614,	// (0x000247f2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb314,	// (0x000244f2) main_tmo_pane_ParamLimits

0xa074,	// (0x00023252) popup_tmo_big_image_note_window

0x161f,	// (0x0001a7fd) cell_ai5_widget_list_pane

0x1627,	// (0x0001a805) cell_ai5_widget_lrg_icon_pane

0xb26f,	// (0x0002444d) tmo_note_info_pane_t1_ParamLimits

0xb284,	// (0x00024462) tmo_note_info_pane_t2_ParamLimits

0xb29d,	// (0x0002447b) tmo_note_info_pane_t3_ParamLimits

0x1ad7,	// (0x0001acb5) tmo_note_info_pane_t4_ParamLimits

0x1ae9,	// (0x0001acc7) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x00029097) tmo_note_info_pane_t_ParamLimits

0x1c1a,	// (0x0001adf8) settings_container_pane_ParamLimits

0x1e1d,	// (0x0001affb) indicator_popup_pane_cp5

0x1e1d,	// (0x0001affb) indicator_popup_pane_cp6

0xd2f8,	// (0x000264d6) list_set_graphic_pane_copy1_ParamLimits

0x83be,	// (0x0002159c) bg_popup_window_pane_cp23

0x1ecd,	// (0x0001b0ab) popup_tmo_big_image_note_window_g1

0x1ed6,	// (0x0001b0b4) popup_tmo_big_image_note_window_t1

0x1ee6,	// (0x0001b0c4) popup_tmo_big_image_note_window_t2

0x1ef6,	// (0x0001b0d4) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x000290b0) popup_tmo_big_image_note_window_t

0xdfff,	// (0x000271dd) cell_ai5_widget_lrg_icon_pane_g1

0x1f06,	// (0x0001b0e4) cell_ai5_widget_lrg_icon_pane_t1

0x1f14,	// (0x0001b0f2) cell_ai5_widget_list_row_pane_ParamLimits

0x1f14,	// (0x0001b0f2) cell_ai5_widget_list_row_pane

0x1f2d,	// (0x0001b10b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x1f2d,	// (0x0001b10b) cell_ai5_widget_list_row_pane_g1

0x1f3a,	// (0x0001b118) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x1f3a,	// (0x0001b118) cell_ai5_widget_list_row_pane_t1

0x1f68,	// (0x0001b146) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x1f68,	// (0x0001b146) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x000290b7) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x000290b7) cell_ai5_widget_list_row_pane_t

0x83be,	// (0x0002159c) main_fep_vtchi_ss_pane

0x7159,	// (0x00020337) popup_fep_char_pre_window

0x7161,	// (0x0002033f) popup_fep_ituss_window

0x7182,	// (0x00020360) popup_fep_vkbss_window

0x1f90,	// (0x0001b16e) grid_vkbss_keypad_pane_ParamLimits

0x1f90,	// (0x0001b16e) grid_vkbss_keypad_pane

0x1fa0,	// (0x0001b17e) ituss_keypad_pane

0x71ad,	// (0x0002038b) aid_vkbss_key_offset_ParamLimits

0x71ad,	// (0x0002038b) aid_vkbss_key_offset

0x71b9,	// (0x00020397) cell_vkbss_key_pane_ParamLimits

0x71b9,	// (0x00020397) cell_vkbss_key_pane

0xd2ec,	// (0x000264ca) bg_cell_vkbss_key_g1_ParamLimits

0xd2ec,	// (0x000264ca) bg_cell_vkbss_key_g1

0x1fb0,	// (0x0001b18e) cell_vkbss_key_3p_pane_ParamLimits

0x1fb0,	// (0x0001b18e) cell_vkbss_key_3p_pane

0x1fca,	// (0x0001b1a8) cell_vkbss_key_g1_ParamLimits

0x1fca,	// (0x0001b1a8) cell_vkbss_key_g1

0x1fe4,	// (0x0001b1c2) cell_vkbss_key_t1_ParamLimits

0x1fe4,	// (0x0001b1c2) cell_vkbss_key_t1

0x71cf,	// (0x000203ad) cell_ituss_key_pane_ParamLimits

0x71cf,	// (0x000203ad) cell_ituss_key_pane

0x200f,	// (0x0001b1ed) bg_cell_ituss_key_g1_ParamLimits

0x200f,	// (0x0001b1ed) bg_cell_ituss_key_g1

0x201b,	// (0x0001b1f9) cell_ituss_key_pane_g1_ParamLimits

0x201b,	// (0x0001b1f9) cell_ituss_key_pane_g1

0x202f,	// (0x0001b20d) cell_ituss_key_pane_g2_ParamLimits

0x202f,	// (0x0001b20d) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x000290be) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x000290be) cell_ituss_key_pane_g

0x205d,	// (0x0001b23b) cell_ituss_key_t1_ParamLimits

0x205d,	// (0x0001b23b) cell_ituss_key_t1

0x2097,	// (0x0001b275) cell_ituss_key_t2_ParamLimits

0x2097,	// (0x0001b275) cell_ituss_key_t2

0x20c8,	// (0x0001b2a6) cell_ituss_key_t3_ParamLimits

0x20c8,	// (0x0001b2a6) cell_ituss_key_t3

0x2102,	// (0x0001b2e0) cell_ituss_key_t4_ParamLimits

0x2102,	// (0x0001b2e0) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x000290c3) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x000290c3) cell_ituss_key_t

0x214c,	// (0x0001b32a) cell_vkbss_key_3p_pane_g1

0x2144,	// (0x0001b322) cell_vkbss_key_3p_pane_g2

0x213c,	// (0x0001b31a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x000290cc) cell_vkbss_key_3p_pane_g

0x83be,	// (0x0002159c) bg_popup_fep_char_preview_window_cp02

0x2154,	// (0x0001b332) popup_fep_char_pre_window_t1

0xb082,	// (0x00024260) main_ai5_sk_pane

0x1b63,	// (0x0001ad41) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x1b6f,	// (0x0001ad4d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x1b82,	// (0x0001ad60) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x1b8e,	// (0x0001ad6c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x000290a2) cell_contacts_ai5_widget_pane_g_ParamLimits

0x1ba0,	// (0x0001ad7e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb314,	// (0x000244f2) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb2b2,	// (0x00024490) main_ai5_sk_pane_g1

0xc52d,	// (0x0002570b) popup_query_code_window_g1

0x7177,	// (0x00020355) popup_fep_vkb_icf_pane

0x718b,	// (0x00020369) popup_fep_vtchi_icf_pane

0xb314,	// (0x000244f2) bg_icf_pane

0x2163,	// (0x0001b341) list_vkb_icf_pane

0xb314,	// (0x000244f2) bg_icf_pane_cp01

0x216f,	// (0x0001b34d) vtchi_icf_list_pane

0x2180,	// (0x0001b35e) list_vkb_icf_pane_t1_ParamLimits

0x2180,	// (0x0001b35e) list_vkb_icf_pane_t1

0x2198,	// (0x0001b376) vtchi_icf_list_pane_t1_ParamLimits

0x2198,	// (0x0001b376) vtchi_icf_list_pane_t1

0x7161,	// (0x0002033f) popup_fep_ituss_window_ParamLimits

0x718b,	// (0x00020369) popup_fep_vtchi_icf_pane_ParamLimits

0x1fa0,	// (0x0001b17e) ituss_keypad_pane_ParamLimits

0x71a1,	// (0x0002037f) ituss_sks_pane

0xb314,	// (0x000244f2) bg_icf_pane_ParamLimits

0x714a,	// (0x00020328) icf_edit_indi_pane_ParamLimits

0x714a,	// (0x00020328) icf_edit_indi_pane

0x2163,	// (0x0001b341) list_vkb_icf_pane_ParamLimits

0xb314,	// (0x000244f2) bg_icf_pane_cp01_ParamLimits

0x714a,	// (0x00020328) icf_edit_indi_pane_cp01_ParamLimits

0x714a,	// (0x00020328) icf_edit_indi_pane_cp01

0x2177,	// (0x0001b355) vtchi_query_pane

0xe190,	// (0x0002736e) icf_edit_indi_pane_g1_ParamLimits

0xe190,	// (0x0002736e) icf_edit_indi_pane_g1

0x2224,	// (0x0001b402) icf_edit_indi_pane_g2_ParamLimits

0x2224,	// (0x0001b402) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x000290e4) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x000290e4) icf_edit_indi_pane_g

0x2233,	// (0x0001b411) icf_edit_indi_pane_t1

0x21ba,	// (0x0001b398) bg_input_focus_pane_cp042

0x8bc4,	// (0x00021da2) vtchi_button_pane

0x21c3,	// (0x0001b3a1) vtchi_query_pane_t1

0x21d1,	// (0x0001b3af) vtchi_query_pane_t2

0x21df,	// (0x0001b3bd) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x000290d3) vtchi_query_pane_t

0x83be,	// (0x0002159c) bg_button_pane_cp13

0x21ed,	// (0x0001b3cb) vtchi_button_pane_g1

0x21f5,	// (0x0001b3d3) ituss_sks_pane_g1

0x2200,	// (0x0001b3de) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x000290da) ituss_sks_pane_g

0x2208,	// (0x0001b3e6) ituss_sks_pane_t1

0x2216,	// (0x0001b3f4) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x000290df) ituss_sks_pane_t

0xdcb8,	// (0x00026e96) indicator_nsta_pane_cp_g1

0xdcc1,	// (0x00026e9f) indicator_nsta_pane_cp_g2

0xdcc9,	// (0x00026ea7) indicator_nsta_pane_cp_g3

0xdcd1,	// (0x00026eaf) indicator_nsta_pane_cp_g4

0xdcd9,	// (0x00026eb7) indicator_nsta_pane_cp_g5

0xdcd9,	// (0x00026eb7) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x00028c8c) indicator_nsta_pane_cp_g

0xae20,	// (0x00023ffe) cell_graphic2_pane_t2_ParamLimits

0xae20,	// (0x00023ffe) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x00028f99) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x00028f99) cell_graphic2_pane_t

0xae53,	// (0x00024031) cell_graphic2_control_pane_t1

0x2c25,	// (0x0001be03) signal_pane_g3_ParamLimits

0x2c25,	// (0x0001be03) signal_pane_g3

0x2c39,	// (0x0001be17) signal_pane_g4_ParamLimits

0x2c39,	// (0x0001be17) signal_pane_g4

0x1f7a,	// (0x0001b158) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x1f7a,	// (0x0001b158) cell_ai5_widget_list_row_pane_t3

0x204b,	// (0x0001b229) cell_ituss_key_pane_t1_ParamLimits

0x204b,	// (0x0001b229) cell_ituss_key_pane_t1

0xc26d,	// (0x0002544b) form_field_data_wide_pane_vc_t2_ParamLimits

0xc26d,	// (0x0002544b) form_field_data_wide_pane_vc_t2

0xc281,	// (0x0002545f) form_field_data_wide_pane_vc_t3_ParamLimits

0xc281,	// (0x0002545f) form_field_data_wide_pane_vc_t3

0x0002,

0xf803,	// (0x000289e1) form_field_data_wide_pane_vc_t_ParamLimits

0xf803,	// (0x000289e1) form_field_data_wide_pane_vc_t

0xd9e6,	// (0x00026bc4) form_field_slider_wide_pane_vc_t3_ParamLimits

0xd9e6,	// (0x00026bc4) form_field_slider_wide_pane_vc_t3

0xdac0,	// (0x00026c9e) form_field_popup_wide_pane_vc_t2_ParamLimits

0xdac0,	// (0x00026c9e) form_field_popup_wide_pane_vc_t2

0xdad7,	// (0x00026cb5) form_field_popup_wide_pane_vc_t3_ParamLimits

0xdad7,	// (0x00026cb5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9d,	// (0x00028c7b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9d,	// (0x00028c7b) form_field_popup_wide_pane_vc_t

0xb120,	// (0x000242fe) aid_fshwr2_btn_pane_ParamLimits

0xb131,	// (0x0002430f) aid_fshwr2_syb_pane_ParamLimits

0xb142,	// (0x00024320) aid_fshwr2_txt_pane_ParamLimits

0xb314,	// (0x000244f2) fshwr2_bg_pane_ParamLimits

0xb14e,	// (0x0002432c) fshwr2_func_candi_pane_ParamLimits

0xb16d,	// (0x0002434b) fshwr2_hwr_syb_pane_ParamLimits

0xb188,	// (0x00024366) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small

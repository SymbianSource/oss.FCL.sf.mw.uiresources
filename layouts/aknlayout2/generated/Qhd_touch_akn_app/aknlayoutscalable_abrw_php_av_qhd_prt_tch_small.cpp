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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002cb06 };

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
0x7966,	// (0x0003446c) Screen

0x7972,	// (0x00034478) application_window_ParamLimits

0x7972,	// (0x00034478) application_window

0x307c,	// (0x0002fb82) screen_g1

0x44e6,	// (0x00030fec) area_bottom_pane_ParamLimits

0x44e6,	// (0x00030fec) area_bottom_pane

0x45ac,	// (0x000310b2) area_top_pane_ParamLimits

0x45ac,	// (0x000310b2) area_top_pane

0x464a,	// (0x00031150) main_pane_ParamLimits

0x464a,	// (0x00031150) main_pane

0x3086,	// (0x0002fb8c) misc_graphics

0x9563,	// (0x00036069) battery_pane_ParamLimits

0x9563,	// (0x00036069) battery_pane

0xa245,	// (0x00036d4b) bg_status_flat_pane_g8

0xa24d,	// (0x00036d53) bg_status_flat_pane_g9

0x962b,	// (0x00036131) context_pane_ParamLimits

0x962b,	// (0x00036131) context_pane

0x9741,	// (0x00036247) navi_pane_ParamLimits

0x9741,	// (0x00036247) navi_pane

0x97c5,	// (0x000362cb) signal_pane_ParamLimits

0x97c5,	// (0x000362cb) signal_pane

0x0008,

0xf852,	// (0x0003c358) bg_status_flat_pane_g

0x9832,	// (0x00036338) status_pane_g1_ParamLimits

0x9832,	// (0x00036338) status_pane_g1

0x9846,	// (0x0003634c) status_pane_g2_ParamLimits

0x9846,	// (0x0003634c) status_pane_g2

0x9852,	// (0x00036358) status_pane_g3_ParamLimits

0x9852,	// (0x00036358) status_pane_g3

0x0004,

0xf779,	// (0x0003c27f) status_pane_g_ParamLimits

0xf779,	// (0x0003c27f) status_pane_g

0x9886,	// (0x0003638c) title_pane_ParamLimits

0x9886,	// (0x0003638c) title_pane

0x98c3,	// (0x000363c9) uni_indicator_pane_ParamLimits

0x98c3,	// (0x000363c9) uni_indicator_pane

0x9493,	// (0x00035f99) bg_list_pane_ParamLimits

0x9493,	// (0x00035f99) bg_list_pane

0x5620,	// (0x00032126) find_pane

0x94b3,	// (0x00035fb9) listscroll_app_pane_ParamLimits

0x94b3,	// (0x00035fb9) listscroll_app_pane

0x94bf,	// (0x00035fc5) listscroll_form_pane

0x441c,	// (0x00030f22) listscroll_gen_pane_ParamLimits

0x441c,	// (0x00030f22) listscroll_gen_pane

0x5628,	// (0x0003212e) listscroll_set_pane

0x84d9,	// (0x00034fdf) main_idle_act_pane

0x918f,	// (0x00035c95) main_idle_trad_pane

0x918f,	// (0x00035c95) main_list_empty_pane

0x94b3,	// (0x00035fb9) main_midp_pane

0x94d9,	// (0x00035fdf) main_pane_g1_ParamLimits

0x94d9,	// (0x00035fdf) main_pane_g1

0x563e,	// (0x00032144) popup_ai_message_window_ParamLimits

0x563e,	// (0x00032144) popup_ai_message_window

0x56ec,	// (0x000321f2) popup_fep_china_uni_window_ParamLimits

0x56ec,	// (0x000321f2) popup_fep_china_uni_window

0x5748,	// (0x0003224e) popup_fep_japan_candidate_window_ParamLimits

0x5748,	// (0x0003224e) popup_fep_japan_candidate_window

0x5768,	// (0x0003226e) popup_fep_japan_predictive_window_ParamLimits

0x5768,	// (0x0003226e) popup_fep_japan_predictive_window

0x5798,	// (0x0003229e) popup_find_window

0x57a5,	// (0x000322ab) popup_grid_graphic_window_ParamLimits

0x57a5,	// (0x000322ab) popup_grid_graphic_window

0x57d1,	// (0x000322d7) popup_large_graphic_colour_window

0x57f7,	// (0x000322fd) popup_menu_window_ParamLimits

0x57f7,	// (0x000322fd) popup_menu_window

0x59af,	// (0x000324b5) popup_note_image_window

0x599b,	// (0x000324a1) popup_note_wait_window_ParamLimits

0x599b,	// (0x000324a1) popup_note_wait_window

0x599b,	// (0x000324a1) popup_note_window_ParamLimits

0x599b,	// (0x000324a1) popup_note_window

0x5a05,	// (0x0003250b) popup_query_code_window_ParamLimits

0x5a05,	// (0x0003250b) popup_query_code_window

0x5a19,	// (0x0003251f) popup_query_data_code_window_ParamLimits

0x5a19,	// (0x0003251f) popup_query_data_code_window

0x5a36,	// (0x0003253c) popup_query_data_window_ParamLimits

0x5a36,	// (0x0003253c) popup_query_data_window

0x5a52,	// (0x00032558) popup_query_sat_info_window_ParamLimits

0x5a52,	// (0x00032558) popup_query_sat_info_window

0x5a8b,	// (0x00032591) popup_snote_single_graphic_window_ParamLimits

0x5a8b,	// (0x00032591) popup_snote_single_graphic_window

0x5a8b,	// (0x00032591) popup_snote_single_text_window_ParamLimits

0x5a8b,	// (0x00032591) popup_snote_single_text_window

0x5aa0,	// (0x000325a6) popup_sub_window_general

0x5bd0,	// (0x000326d6) popup_window_general_ParamLimits

0x5bd0,	// (0x000326d6) popup_window_general

0x94e7,	// (0x00035fed) power_save_pane

0x54ae,	// (0x00031fb4) control_pane_g1_ParamLimits

0x54ae,	// (0x00031fb4) control_pane_g1

0x54d5,	// (0x00031fdb) control_pane_g2_ParamLimits

0x54d5,	// (0x00031fdb) control_pane_g2

0x9456,	// (0x00035f5c) control_pane_g3_ParamLimits

0x9456,	// (0x00035f5c) control_pane_g3

0x0007,

0xf761,	// (0x0003c267) control_pane_g_ParamLimits

0xf761,	// (0x0003c267) control_pane_g

0x551f,	// (0x00032025) control_pane_t1_ParamLimits

0x551f,	// (0x00032025) control_pane_t1

0x5575,	// (0x0003207b) control_pane_t2_ParamLimits

0x5575,	// (0x0003207b) control_pane_t2

0x0002,

0xf772,	// (0x0003c278) control_pane_t_ParamLimits

0xf772,	// (0x0003c278) control_pane_t

0x937b,	// (0x00035e81) navi_navi_volume_pane_cp1

0x9383,	// (0x00035e89) status_small_icon_pane

0x938b,	// (0x00035e91) status_small_pane_g1_ParamLimits

0x938b,	// (0x00035e91) status_small_pane_g1

0x93bf,	// (0x00035ec5) status_small_pane_g2_ParamLimits

0x93bf,	// (0x00035ec5) status_small_pane_g2

0x93cb,	// (0x00035ed1) status_small_pane_g3_ParamLimits

0x93cb,	// (0x00035ed1) status_small_pane_g3

0x93d7,	// (0x00035edd) status_small_pane_g4_ParamLimits

0x93d7,	// (0x00035edd) status_small_pane_g4

0x93e3,	// (0x00035ee9) status_small_pane_g5_ParamLimits

0x93e3,	// (0x00035ee9) status_small_pane_g5

0x93f1,	// (0x00035ef7) status_small_pane_g6_ParamLimits

0x93f1,	// (0x00035ef7) status_small_pane_g6

0x0007,

0xf750,	// (0x0003c256) status_small_pane_g_ParamLimits

0xf750,	// (0x0003c256) status_small_pane_g

0x9420,	// (0x00035f26) status_small_pane_t1

0x9442,	// (0x00035f48) status_small_wait_pane_ParamLimits

0x9442,	// (0x00035f48) status_small_wait_pane

0x8bfc,	// (0x00035702) aid_levels_signal_ParamLimits

0x8bfc,	// (0x00035702) aid_levels_signal

0x8c0e,	// (0x00035714) signal_pane_g1_ParamLimits

0x8c0e,	// (0x00035714) signal_pane_g1

0x8c23,	// (0x00035729) signal_pane_g2_ParamLimits

0x8c23,	// (0x00035729) signal_pane_g2

0x0003,

0xf6e1,	// (0x0003c1e7) signal_pane_g_ParamLimits

0xf6e1,	// (0x0003c1e7) signal_pane_g

0x8c5e,	// (0x00035764) context_pane_g1

0x7982,	// (0x00034488) title_pane_g1

0x79b8,	// (0x000344be) title_pane_t1

0x7a20,	// (0x00034526) title_pane_t2

0x7a46,	// (0x0003454c) title_pane_t3

0x0002,

0xf530,	// (0x0003c036) title_pane_t

0x98db,	// (0x000363e1) aid_levels_battery_ParamLimits

0x98db,	// (0x000363e1) aid_levels_battery

0x98ef,	// (0x000363f5) battery_pane_g1_ParamLimits

0x98ef,	// (0x000363f5) battery_pane_g1

0x9905,	// (0x0003640b) battery_pane_g2_ParamLimits

0x9905,	// (0x0003640b) battery_pane_g2

0x0001,

0xf784,	// (0x0003c28a) battery_pane_g_ParamLimits

0xf784,	// (0x0003c28a) battery_pane_g

0xab7b,	// (0x00037681) uni_indicator_pane_g1

0xab91,	// (0x00037697) uni_indicator_pane_g2

0xaba7,	// (0x000376ad) uni_indicator_pane_g3

0x0005,

0xf8fa,	// (0x0003c400) uni_indicator_pane_g

0x8ff4,	// (0x00035afa) navi_icon_pane_ParamLimits

0x8ff4,	// (0x00035afa) navi_icon_pane

0x8f3d,	// (0x00035a43) navi_midp_pane

0x9010,	// (0x00035b16) navi_navi_pane

0x901a,	// (0x00035b20) navi_text_pane_ParamLimits

0x901a,	// (0x00035b20) navi_text_pane

0x307c,	// (0x0002fb82) status_small_wait_pane_g1

0x7e9b,	// (0x000349a1) status_small_wait_pane_g2

0x0001,

0xf8f5,	// (0x0003c3fb) status_small_wait_pane_g

0xa8a0,	// (0x000373a6) navi_navi_icon_text_pane

0xa8a8,	// (0x000373ae) navi_navi_pane_g1_ParamLimits

0xa8a8,	// (0x000373ae) navi_navi_pane_g1

0xa8ba,	// (0x000373c0) navi_navi_pane_g2_ParamLimits

0xa8ba,	// (0x000373c0) navi_navi_pane_g2

0x0001,

0xf8c3,	// (0x0003c3c9) navi_navi_pane_g_ParamLimits

0xf8c3,	// (0x0003c3c9) navi_navi_pane_g

0xa8cc,	// (0x000373d2) navi_navi_tabs_pane

0xa8d5,	// (0x000373db) navi_navi_text_pane

0xa8a0,	// (0x000373a6) navi_navi_volume_pane

0xa87c,	// (0x00037382) navi_text_pane_t1

0xa870,	// (0x00037376) navi_icon_pane_g1

0xa7c3,	// (0x000372c9) navi_navi_text_pane_t1

0x5fb1,	// (0x00032ab7) navi_navi_volume_pane_g1

0x5fb9,	// (0x00032abf) volume_small_pane

0xa729,	// (0x0003722f) navi_navi_icon_text_pane_g1

0xa731,	// (0x00037237) navi_navi_icon_text_pane_t1

0x9010,	// (0x00035b16) navi_tabs_2_long_pane

0x9010,	// (0x00035b16) navi_tabs_2_pane

0x9010,	// (0x00035b16) navi_tabs_3_long_pane

0x9010,	// (0x00035b16) navi_tabs_3_pane

0x9010,	// (0x00035b16) navi_tabs_4_pane

0x5f91,	// (0x00032a97) tabs_2_active_pane_ParamLimits

0x5f91,	// (0x00032a97) tabs_2_active_pane

0x5fa1,	// (0x00032aa7) tabs_2_passive_pane_ParamLimits

0x5fa1,	// (0x00032aa7) tabs_2_passive_pane

0x5f5f,	// (0x00032a65) tabs_3_active_pane_ParamLimits

0x5f5f,	// (0x00032a65) tabs_3_active_pane

0x5f6f,	// (0x00032a75) tabs_3_passive_pane_ParamLimits

0x5f6f,	// (0x00032a75) tabs_3_passive_pane

0x5f80,	// (0x00032a86) tabs_3_passive_pane_cp_ParamLimits

0x5f80,	// (0x00032a86) tabs_3_passive_pane_cp

0x5f1b,	// (0x00032a21) tabs_4_active_pane_ParamLimits

0x5f1b,	// (0x00032a21) tabs_4_active_pane

0x5f2c,	// (0x00032a32) tabs_4_passive_pane_ParamLimits

0x5f2c,	// (0x00032a32) tabs_4_passive_pane

0x5f3d,	// (0x00032a43) tabs_4_passive_pane_cp_ParamLimits

0x5f3d,	// (0x00032a43) tabs_4_passive_pane_cp

0x5f4e,	// (0x00032a54) tabs_4_passive_pane_cp2_ParamLimits

0x5f4e,	// (0x00032a54) tabs_4_passive_pane_cp2

0x5ef7,	// (0x000329fd) tabs_2_long_active_pane_ParamLimits

0x5ef7,	// (0x000329fd) tabs_2_long_active_pane

0x5f09,	// (0x00032a0f) tabs_2_long_passive_pane_ParamLimits

0x5f09,	// (0x00032a0f) tabs_2_long_passive_pane

0x5eb8,	// (0x000329be) tabs_3_long_active_pane_ParamLimits

0x5eb8,	// (0x000329be) tabs_3_long_active_pane

0x5ecb,	// (0x000329d1) tabs_3_long_passive_pane_ParamLimits

0x5ecb,	// (0x000329d1) tabs_3_long_passive_pane

0x5ee4,	// (0x000329ea) tabs_3_long_passive_pane_cp_ParamLimits

0x5ee4,	// (0x000329ea) tabs_3_long_passive_pane_cp

0x5e5e,	// (0x00032964) volume_small_pane_g1

0x5e67,	// (0x0003296d) volume_small_pane_g2

0x5e70,	// (0x00032976) volume_small_pane_g3

0x5e79,	// (0x0003297f) volume_small_pane_g4

0x5e82,	// (0x00032988) volume_small_pane_g5

0x5e8b,	// (0x00032991) volume_small_pane_g6

0x5e94,	// (0x0003299a) volume_small_pane_g7

0x5e9d,	// (0x000329a3) volume_small_pane_g8

0x5ea6,	// (0x000329ac) volume_small_pane_g9

0x5eaf,	// (0x000329b5) volume_small_pane_g10

0x0009,

0xf88f,	// (0x0003c395) volume_small_pane_g

0x7a58,	// (0x0003455e) bg_active_tab_pane_cp2_ParamLimits

0x7a58,	// (0x0003455e) bg_active_tab_pane_cp2

0x7a66,	// (0x0003456c) tabs_3_active_pane_g1

0x7a6e,	// (0x00034574) tabs_3_active_pane_t1

0x7a58,	// (0x0003455e) bg_passive_tab_pane_cp2_ParamLimits

0x7a58,	// (0x0003455e) bg_passive_tab_pane_cp2

0x7a66,	// (0x0003456c) tabs_3_passive_pane_g1

0x7a6e,	// (0x00034574) tabs_3_passive_pane_t1

0x7a58,	// (0x0003455e) bg_active_tab_pane_cp3_ParamLimits

0x7a58,	// (0x0003455e) bg_active_tab_pane_cp3

0x7a80,	// (0x00034586) tabs_4_active_pane_g1

0x7a88,	// (0x0003458e) tabs_4_active_pane_t1

0x7a58,	// (0x0003455e) bg_passive_tab_pane_cp3_ParamLimits

0x7a58,	// (0x0003455e) bg_passive_tab_pane_cp3

0x7a80,	// (0x00034586) tabs_4_1_passive_pane_g1

0x7a88,	// (0x0003458e) tabs_4_1_passive_pane_t1

0x94b3,	// (0x00035fb9) list_highlight_pane_cp2

0xadde,	// (0x000378e4) list_set_pane_ParamLimits

0xadde,	// (0x000378e4) list_set_pane

0xae84,	// (0x0003798a) main_pane_set_t1_ParamLimits

0xae84,	// (0x0003798a) main_pane_set_t1

0xaea4,	// (0x000379aa) main_pane_set_t2_ParamLimits

0xaea4,	// (0x000379aa) main_pane_set_t2

0xaeb8,	// (0x000379be) main_pane_set_t3_ParamLimits

0xaeb8,	// (0x000379be) main_pane_set_t3

0xaeca,	// (0x000379d0) main_pane_set_t4_ParamLimits

0xaeca,	// (0x000379d0) main_pane_set_t4

0x0003,

0xf95f,	// (0x0003c465) main_pane_set_t_ParamLimits

0xf95f,	// (0x0003c465) main_pane_set_t

0xaedc,	// (0x000379e2) setting_code_pane

0xaee8,	// (0x000379ee) setting_slider_graphic_pane

0xaee8,	// (0x000379ee) setting_slider_pane

0xaee8,	// (0x000379ee) setting_text_pane

0xaee8,	// (0x000379ee) setting_volume_pane

0x4899,	// (0x0003139f) volume_set_pane

0x7a58,	// (0x0003455e) bg_set_opt_pane_cp

0x48a1,	// (0x000313a7) setting_slider_pane_t1

0x48ba,	// (0x000313c0) setting_slider_pane_t2

0x48d4,	// (0x000313da) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0003c03d) setting_slider_pane_t

0x48ec,	// (0x000313f2) slider_set_pane

0x3086,	// (0x0002fb8c) bg_set_opt_pane_cp2

0x7a9a,	// (0x000345a0) setting_slider_graphic_pane_g1

0x4902,	// (0x00031408) setting_slider_graphic_pane_t1

0x4912,	// (0x00031418) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0003c044) setting_slider_graphic_pane_t

0x4922,	// (0x00031428) slider_set_pane_cp

0x3086,	// (0x0002fb8c) input_focus_pane_cp1

0xad9d,	// (0x000378a3) list_set_text_pane

0x307c,	// (0x0002fb82) setting_text_pane_g1

0x3086,	// (0x0002fb8c) input_focus_pane_cp2

0x307c,	// (0x0002fb82) setting_code_pane_g1

0x7aa3,	// (0x000345a9) setting_code_pane_t1

0x3985,	// (0x0003048b) set_text_pane_t1_ParamLimits

0x3985,	// (0x0003048b) set_text_pane_t1

0x833d,	// (0x00034e43) set_opt_bg_pane_g1

0x8345,	// (0x00034e4b) set_opt_bg_pane_g2

0xad77,	// (0x0003787d) set_opt_bg_pane_g3

0x8355,	// (0x00034e5b) set_opt_bg_pane_g4

0x835d,	// (0x00034e63) set_opt_bg_pane_g5

0x8365,	// (0x00034e6b) set_opt_bg_pane_g6

0xad81,	// (0x00037887) set_opt_bg_pane_g7

0xad89,	// (0x0003788f) set_opt_bg_pane_g8

0xad93,	// (0x00037899) set_opt_bg_pane_g9

0x0008,

0xf94c,	// (0x0003c452) set_opt_bg_pane_g

0xad6a,	// (0x00037870) slider_set_pane_g1

0x604e,	// (0x00032b54) slider_set_pane_g2

0x0006,

0xf93d,	// (0x0003c443) slider_set_pane_g

0x5fc2,	// (0x00032ac8) volume_set_pane_g1

0x5fca,	// (0x00032ad0) volume_set_pane_g2

0x5fd2,	// (0x00032ad8) volume_set_pane_g3

0x5fda,	// (0x00032ae0) volume_set_pane_g4

0x5fe2,	// (0x00032ae8) volume_set_pane_g5

0x5fea,	// (0x00032af0) volume_set_pane_g6

0x5ff2,	// (0x00032af8) volume_set_pane_g7

0x5ffa,	// (0x00032b00) volume_set_pane_g8

0x6002,	// (0x00032b08) volume_set_pane_g9

0x600a,	// (0x00032b10) volume_set_pane_g10

0x0009,

0xf915,	// (0x0003c41b) volume_set_pane_g

0x7ab1,	// (0x000345b7) indicator_pane_ParamLimits

0x7ab1,	// (0x000345b7) indicator_pane

0x7abd,	// (0x000345c3) main_idle_pane_g2_ParamLimits

0x7abd,	// (0x000345c3) main_idle_pane_g2

0x7ae5,	// (0x000345eb) main_pane_idle_g1_ParamLimits

0x7ae5,	// (0x000345eb) main_pane_idle_g1

0x7af2,	// (0x000345f8) popup_clock_digital_analogue_window_ParamLimits

0x7af2,	// (0x000345f8) popup_clock_digital_analogue_window

0x7b09,	// (0x0003460f) soft_indicator_pane_ParamLimits

0x7b09,	// (0x0003460f) soft_indicator_pane

0x7b15,	// (0x0003461b) wallpaper_pane_ParamLimits

0x7b15,	// (0x0003461b) wallpaper_pane

0x307c,	// (0x0002fb82) wallpaper_pane_g1

0x7b29,	// (0x0003462f) indicator_pane_g1_ParamLimits

0x7b29,	// (0x0003462f) indicator_pane_g1

0xb1bb,	// (0x00037cc1) navi_navi_icon_text_pane_srt_g1

0x7b44,	// (0x0003464a) soft_indicator_pane_t1

0x7b5e,	// (0x00034664) aid_ps_area_pane

0x7b6f,	// (0x00034675) aid_ps_clock_pane

0x7b7d,	// (0x00034683) aid_ps_indicator_pane

0x7b89,	// (0x0003468f) indicator_ps_pane_ParamLimits

0x7b89,	// (0x0003468f) indicator_ps_pane

0x7b98,	// (0x0003469e) power_save_pane_g1_ParamLimits

0x7b98,	// (0x0003469e) power_save_pane_g1

0x7ba4,	// (0x000346aa) power_save_pane_g2_ParamLimits

0x7ba4,	// (0x000346aa) power_save_pane_g2

0x449a,	// (0x00030fa0) aid_navinavi_width_pane

0x7b5e,	// (0x00034664) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0003c049) power_save_pane_g_ParamLimits

0xf543,	// (0x0003c049) power_save_pane_g

0x7bb2,	// (0x000346b8) power_save_pane_t1_ParamLimits

0x7bb2,	// (0x000346b8) power_save_pane_t1

0x7b6f,	// (0x00034675) aid_ps_clock_pane_ParamLimits

0x7b7d,	// (0x00034683) aid_ps_indicator_pane_ParamLimits

0x7bc4,	// (0x000346ca) power_save_pane_t4_ParamLimits

0x7bc4,	// (0x000346ca) power_save_pane_t4

0x0001,

0xf548,	// (0x0003c04e) power_save_pane_t_ParamLimits

0xf548,	// (0x0003c04e) power_save_pane_t

0x7bee,	// (0x000346f4) power_save_t3_ParamLimits

0x7bee,	// (0x000346f4) power_save_t3

0x7bd9,	// (0x000346df) power_save_t2_ParamLimits

0x7bd9,	// (0x000346df) power_save_t2

0x7c03,	// (0x00034709) indicator_ps_pane_g1

0x7c0c,	// (0x00034712) ai_gene_pane_ParamLimits

0x7c0c,	// (0x00034712) ai_gene_pane

0x7c18,	// (0x0003471e) ai_links_pane_ParamLimits

0x7c18,	// (0x0003471e) ai_links_pane

0x7c24,	// (0x0003472a) indicator_pane_cp1_ParamLimits

0x7c24,	// (0x0003472a) indicator_pane_cp1

0x7c30,	// (0x00034736) main_pane_idle_g1_cp_ParamLimits

0x7c30,	// (0x00034736) main_pane_idle_g1_cp

0x7c3c,	// (0x00034742) popup_ai_links_title_window

0x7c45,	// (0x0003474b) soft_indicator_pane_cp1_ParamLimits

0x7c45,	// (0x0003474b) soft_indicator_pane_cp1

0xab69,	// (0x0003766f) ai_links_pane_g1

0xab72,	// (0x00037678) grid_ai_links_pane

0xab4c,	// (0x00037652) ai_gene_pane_1

0xab57,	// (0x0003765d) ai_gene_pane_2

0xab60,	// (0x00037666) list_highlight_pane_cp4

0xab30,	// (0x00037636) cell_ai_link_pane_ParamLimits

0xab30,	// (0x00037636) cell_ai_link_pane

0xab28,	// (0x0003762e) cell_ai_link_pane_g1

0x7e9b,	// (0x000349a1) cell_ai_link_pane_g2

0x0001,

0xf8f0,	// (0x0003c3f6) cell_ai_link_pane_g

0x3086,	// (0x0002fb8c) grid_highlight_cp2

0x3086,	// (0x0002fb8c) bg_popup_sub_pane_cp1

0x7c5f,	// (0x00034765) popup_ai_links_title_window_t1

0xaa76,	// (0x0003757c) ai_gene_pane_1_g1_ParamLimits

0xaa76,	// (0x0003757c) ai_gene_pane_1_g1

0xaa82,	// (0x00037588) ai_gene_pane_1_g2_ParamLimits

0xaa82,	// (0x00037588) ai_gene_pane_1_g2

0x0001,

0xf8e6,	// (0x0003c3ec) ai_gene_pane_1_g_ParamLimits

0xf8e6,	// (0x0003c3ec) ai_gene_pane_1_g

0xaa8f,	// (0x00037595) ai_gene_pane_1_t1_ParamLimits

0xaa8f,	// (0x00037595) ai_gene_pane_1_t1

0xaac3,	// (0x000375c9) grid_ai_soft_ind_pane

0xaa61,	// (0x00037567) ai_gene_pane_2_t1_ParamLimits

0xaa61,	// (0x00037567) ai_gene_pane_2_t1

0x7c6e,	// (0x00034774) main_pane_empty_t1_ParamLimits

0x7c6e,	// (0x00034774) main_pane_empty_t1

0x7c86,	// (0x0003478c) main_pane_empty_t2_ParamLimits

0x7c86,	// (0x0003478c) main_pane_empty_t2

0x7c9b,	// (0x000347a1) main_pane_empty_t3_ParamLimits

0x7c9b,	// (0x000347a1) main_pane_empty_t3

0x7cad,	// (0x000347b3) main_pane_empty_t4_ParamLimits

0x7cad,	// (0x000347b3) main_pane_empty_t4

0x7cbf,	// (0x000347c5) main_pane_empty_t5_ParamLimits

0x7cbf,	// (0x000347c5) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0003c053) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0003c053) main_pane_empty_t

0x8404,	// (0x00034f0a) bg_popup_window_pane_ParamLimits

0x8404,	// (0x00034f0a) bg_popup_window_pane

0xa7d1,	// (0x000372d7) find_popup_pane_cp2_ParamLimits

0xa7d1,	// (0x000372d7) find_popup_pane_cp2

0xa7dd,	// (0x000372e3) heading_pane_ParamLimits

0xa7dd,	// (0x000372e3) heading_pane

0x3086,	// (0x0002fb8c) bg_popup_sub_pane

0xa74b,	// (0x00037251) bg_popup_window_pane_g1_ParamLimits

0xa74b,	// (0x00037251) bg_popup_window_pane_g1

0xa757,	// (0x0003725d) bg_popup_window_pane_g2_ParamLimits

0xa757,	// (0x0003725d) bg_popup_window_pane_g2

0xa763,	// (0x00037269) bg_popup_window_pane_g3_ParamLimits

0xa763,	// (0x00037269) bg_popup_window_pane_g3

0xa76f,	// (0x00037275) bg_popup_window_pane_g4_ParamLimits

0xa76f,	// (0x00037275) bg_popup_window_pane_g4

0xa77b,	// (0x00037281) bg_popup_window_pane_g5_ParamLimits

0xa77b,	// (0x00037281) bg_popup_window_pane_g5

0xa787,	// (0x0003728d) bg_popup_window_pane_g6_ParamLimits

0xa787,	// (0x0003728d) bg_popup_window_pane_g6

0xa793,	// (0x00037299) bg_popup_window_pane_g7_ParamLimits

0xa793,	// (0x00037299) bg_popup_window_pane_g7

0xa79f,	// (0x000372a5) bg_popup_window_pane_g8_ParamLimits

0xa79f,	// (0x000372a5) bg_popup_window_pane_g8

0xa7ab,	// (0x000372b1) bg_popup_window_pane_g9_ParamLimits

0xa7ab,	// (0x000372b1) bg_popup_window_pane_g9

0xa7b7,	// (0x000372bd) bg_popup_window_pane_g10_ParamLimits

0xa7b7,	// (0x000372bd) bg_popup_window_pane_g10

0x0009,

0xf8ae,	// (0x0003c3b4) bg_popup_window_pane_g_ParamLimits

0xf8ae,	// (0x0003c3b4) bg_popup_window_pane_g

0xa6e0,	// (0x000371e6) bg_popup_heading_pane_ParamLimits

0xa6e0,	// (0x000371e6) bg_popup_heading_pane

0x61c4,	// (0x00032cca) tabs_4_passive_pane_cp_srt_ParamLimits

0x61c4,	// (0x00032cca) tabs_4_passive_pane_cp_srt

0x61d6,	// (0x00032cdc) tabs_4_passive_pane_srt_ParamLimits

0xa6f4,	// (0x000371fa) heading_pane_g2

0x61d6,	// (0x00032cdc) tabs_4_passive_pane_srt

0x94b3,	// (0x00035fb9) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94b3,	// (0x00035fb9) bg_passive_tab_pane_cp3_srt

0xa6fc,	// (0x00037202) heading_pane_t1_ParamLimits

0xa6fc,	// (0x00037202) heading_pane_t1

0xa713,	// (0x00037219) heading_pane_t2_ParamLimits

0xa713,	// (0x00037219) heading_pane_t2

0x0001,

0xf8a9,	// (0x0003c3af) heading_pane_t_ParamLimits

0xf8a9,	// (0x0003c3af) heading_pane_t

0xa20d,	// (0x00036d13) bg_popup_heading_pane_g1

0xa2bc,	// (0x00036dc2) bg_popup_heading_pane_g2

0xa2c6,	// (0x00036dcc) bg_popup_heading_pane_g3

0xa2d0,	// (0x00036dd6) bg_popup_heading_pane_g4

0xa2da,	// (0x00036de0) bg_popup_heading_pane_g5

0xa2e4,	// (0x00036dea) bg_popup_heading_pane_g6

0xa2ec,	// (0x00036df2) bg_popup_heading_pane_g7

0xa2f4,	// (0x00036dfa) bg_popup_heading_pane_g8

0xa2fe,	// (0x00036e04) bg_popup_heading_pane_g9

0x0008,

0xf865,	// (0x0003c36b) bg_popup_heading_pane_g

0x99dd,	// (0x000364e3) bg_popup_sub_pane_g1

0x99ed,	// (0x000364f3) bg_popup_sub_pane_g2

0x99e5,	// (0x000364eb) bg_popup_sub_pane_g3

0x99fd,	// (0x00036503) bg_popup_sub_pane_g4

0x99f5,	// (0x000364fb) bg_popup_sub_pane_g5

0x9a05,	// (0x0003650b) bg_popup_sub_pane_g6

0x9a0d,	// (0x00036513) bg_popup_sub_pane_g7

0x9a1d,	// (0x00036523) bg_popup_sub_pane_g8

0x9a15,	// (0x0003651b) bg_popup_sub_pane_g9

0x0008,

0xf83f,	// (0x0003c345) bg_popup_sub_pane_g

0x7cd3,	// (0x000347d9) bg_popup_window_pane_cp5_ParamLimits

0x7cd3,	// (0x000347d9) bg_popup_window_pane_cp5

0x7cef,	// (0x000347f5) popup_note_window_g1_ParamLimits

0x7cef,	// (0x000347f5) popup_note_window_g1

0x7cfb,	// (0x00034801) popup_note_window_t1_ParamLimits

0x7cfb,	// (0x00034801) popup_note_window_t1

0x7d11,	// (0x00034817) popup_note_window_t2_ParamLimits

0x7d11,	// (0x00034817) popup_note_window_t2

0x7d27,	// (0x0003482d) popup_note_window_t3_ParamLimits

0x7d27,	// (0x0003482d) popup_note_window_t3

0x7d3d,	// (0x00034843) popup_note_window_t4_ParamLimits

0x7d3d,	// (0x00034843) popup_note_window_t4

0x7d65,	// (0x0003486b) popup_note_window_t5_ParamLimits

0x7d65,	// (0x0003486b) popup_note_window_t5

0x0004,

0xf558,	// (0x0003c05e) popup_note_window_t_ParamLimits

0xf558,	// (0x0003c05e) popup_note_window_t

0x7daf,	// (0x000348b5) bg_popup_window_pane_cp6_ParamLimits

0x7daf,	// (0x000348b5) bg_popup_window_pane_cp6

0xa189,	// (0x00036c8f) popup_note_image_window_g1_ParamLimits

0xa189,	// (0x00036c8f) popup_note_image_window_g1

0xa195,	// (0x00036c9b) popup_note_image_window_g2_ParamLimits

0xa195,	// (0x00036c9b) popup_note_image_window_g2

0x0001,

0xf833,	// (0x0003c339) popup_note_image_window_g_ParamLimits

0xf833,	// (0x0003c339) popup_note_image_window_g

0xa1ae,	// (0x00036cb4) popup_note_image_window_t1_ParamLimits

0xa1ae,	// (0x00036cb4) popup_note_image_window_t1

0xa1c7,	// (0x00036ccd) popup_note_image_window_t2_ParamLimits

0xa1c7,	// (0x00036ccd) popup_note_image_window_t2

0xa1e0,	// (0x00036ce6) popup_note_image_window_t3_ParamLimits

0xa1e0,	// (0x00036ce6) popup_note_image_window_t3

0x0002,

0xf838,	// (0x0003c33e) popup_note_image_window_t_ParamLimits

0xf838,	// (0x0003c33e) popup_note_image_window_t

0xa04a,	// (0x00036b50) bg_popup_window_pane_cp7_ParamLimits

0xa04a,	// (0x00036b50) bg_popup_window_pane_cp7

0xa07a,	// (0x00036b80) popup_note_wait_window_g1_ParamLimits

0xa07a,	// (0x00036b80) popup_note_wait_window_g1

0xa086,	// (0x00036b8c) popup_note_wait_window_g2_ParamLimits

0xa086,	// (0x00036b8c) popup_note_wait_window_g2

0x0002,

0xf821,	// (0x0003c327) popup_note_wait_window_g_ParamLimits

0xf821,	// (0x0003c327) popup_note_wait_window_g

0xa09e,	// (0x00036ba4) popup_note_wait_window_t1_ParamLimits

0xa09e,	// (0x00036ba4) popup_note_wait_window_t1

0xa0c5,	// (0x00036bcb) popup_note_wait_window_t2_ParamLimits

0xa0c5,	// (0x00036bcb) popup_note_wait_window_t2

0xa0e2,	// (0x00036be8) popup_note_wait_window_t3_ParamLimits

0xa0e2,	// (0x00036be8) popup_note_wait_window_t3

0xa0f5,	// (0x00036bfb) popup_note_wait_window_t4_ParamLimits

0xa0f5,	// (0x00036bfb) popup_note_wait_window_t4

0x0004,

0xf828,	// (0x0003c32e) popup_note_wait_window_t_ParamLimits

0xf828,	// (0x0003c32e) popup_note_wait_window_t

0xa11a,	// (0x00036c20) wait_bar_pane_ParamLimits

0xa11a,	// (0x00036c20) wait_bar_pane

0x3086,	// (0x0002fb8c) wait_anim_pane

0x3086,	// (0x0002fb8c) wait_border_pane

0x307c,	// (0x0002fb82) wait_anim_pane_g1

0x307c,	// (0x0002fb82) wait_anim_pane_g2

0x0001,

0xf6dc,	// (0x0003c1e2) wait_anim_pane_g

0x9fee,	// (0x00036af4) wait_border_pane_g1

0x9ff9,	// (0x00036aff) wait_border_pane_g2

0xa002,	// (0x00036b08) wait_border_pane_g3

0x0002,

0xf81a,	// (0x0003c320) wait_border_pane_g

0x9e59,	// (0x0003695f) bg_popup_window_pane_cp16_ParamLimits

0x9e59,	// (0x0003695f) bg_popup_window_pane_cp16

0x9f59,	// (0x00036a5f) indicator_popup_pane_cp4_ParamLimits

0x9f59,	// (0x00036a5f) indicator_popup_pane_cp4

0x9f6d,	// (0x00036a73) popup_query_data_window_t1_ParamLimits

0x9f6d,	// (0x00036a73) popup_query_data_window_t1

0x9f7f,	// (0x00036a85) popup_query_data_window_t2_ParamLimits

0x9f7f,	// (0x00036a85) popup_query_data_window_t2

0x9f98,	// (0x00036a9e) popup_query_data_window_t3_ParamLimits

0x9f98,	// (0x00036a9e) popup_query_data_window_t3

0x0002,

0xf813,	// (0x0003c319) popup_query_data_window_t_ParamLimits

0xf813,	// (0x0003c319) popup_query_data_window_t

0x9fb2,	// (0x00036ab8) query_popup_data_pane_ParamLimits

0x9fb2,	// (0x00036ab8) query_popup_data_pane

0x9fc6,	// (0x00036acc) query_popup_data_pane_cp1_ParamLimits

0x9fc6,	// (0x00036acc) query_popup_data_pane_cp1

0x9e59,	// (0x0003695f) bg_popup_window_pane_cp10_ParamLimits

0x9e59,	// (0x0003695f) bg_popup_window_pane_cp10

0x9e8b,	// (0x00036991) indicator_popup_pane_ParamLimits

0x9e8b,	// (0x00036991) indicator_popup_pane

0x9ead,	// (0x000369b3) popup_query_code_window_t1_ParamLimits

0x9ead,	// (0x000369b3) popup_query_code_window_t1

0x9ec7,	// (0x000369cd) popup_query_code_window_t2_ParamLimits

0x9ec7,	// (0x000369cd) popup_query_code_window_t2

0x9f10,	// (0x00036a16) popup_query_code_window_t3_ParamLimits

0x9f10,	// (0x00036a16) popup_query_code_window_t3

0x0002,

0xf80c,	// (0x0003c312) popup_query_code_window_t_ParamLimits

0xf80c,	// (0x0003c312) popup_query_code_window_t

0x9f3f,	// (0x00036a45) query_popup_pane_ParamLimits

0x9f3f,	// (0x00036a45) query_popup_pane

0x7daf,	// (0x000348b5) bg_popup_window_pane_cp15_ParamLimits

0x7daf,	// (0x000348b5) bg_popup_window_pane_cp15

0x7dcd,	// (0x000348d3) indicator_popup_pane_cp1_ParamLimits

0x7dcd,	// (0x000348d3) indicator_popup_pane_cp1

0x7de0,	// (0x000348e6) indicator_popup_pane_cp2_ParamLimits

0x7de0,	// (0x000348e6) indicator_popup_pane_cp2

0x7df3,	// (0x000348f9) popup_query_data_code_window_g1_ParamLimits

0x7df3,	// (0x000348f9) popup_query_data_code_window_g1

0x7e06,	// (0x0003490c) popup_query_data_code_window_t1_ParamLimits

0x7e06,	// (0x0003490c) popup_query_data_code_window_t1

0x7e18,	// (0x0003491e) popup_query_data_code_window_t2_ParamLimits

0x7e18,	// (0x0003491e) popup_query_data_code_window_t2

0x7e2a,	// (0x00034930) popup_query_data_code_window_t3_ParamLimits

0x7e2a,	// (0x00034930) popup_query_data_code_window_t3

0x7e40,	// (0x00034946) popup_query_data_code_window_t4_ParamLimits

0x7e40,	// (0x00034946) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0003c069) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0003c069) popup_query_data_code_window_t

0x5c74,	// (0x0003277a) list_single_midp_graphic_pane_g3

0x7e58,	// (0x0003495e) query_popup_data_pane_cp2_ParamLimits

0x7e6b,	// (0x00034971) query_popup_pane_cp2_ParamLimits

0x7e6b,	// (0x00034971) query_popup_pane_cp2

0x3086,	// (0x0002fb8c) bg_popup_window_pane_cp11

0x9e3d,	// (0x00036943) heading_pane_cp5

0x9e45,	// (0x0003694b) listscroll_popup_info_pane

0x3086,	// (0x0002fb8c) input_focus_pane_cp3

0x7e7e,	// (0x00034984) query_popup_pane_t1

0x7e8c,	// (0x00034992) list_popup_info_pane_ParamLimits

0x7e8c,	// (0x00034992) list_popup_info_pane

0x7e9b,	// (0x000349a1) listscroll_popup_info_pane_g1

0x7ea3,	// (0x000349a9) scroll_pane_cp7

0x7ead,	// (0x000349b3) popup_info_list_pane_t1_ParamLimits

0x7ead,	// (0x000349b3) popup_info_list_pane_t1

0x7ec7,	// (0x000349cd) popup_info_list_pane_t2_ParamLimits

0x7ec7,	// (0x000349cd) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0003c072) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0003c072) popup_info_list_pane_t

0x3086,	// (0x0002fb8c) bg_popup_window_pane_cp12

0xb1d5,	// (0x00037cdb) find_popup_pane

0x7a58,	// (0x0003455e) bg_popup_window_pane_cp3

0x7ee1,	// (0x000349e7) heading_pane_cp3

0x7ef0,	// (0x000349f6) listscroll_popup_graphic_pane

0x3086,	// (0x0002fb8c) bg_popup_window_pane_cp4

0x7f50,	// (0x00034a56) heading_pane_cp4

0x7f5a,	// (0x00034a60) listscroll_popup_colour_pane

0x7f62,	// (0x00034a68) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7f62,	// (0x00034a68) cell_large_graphic_colour_none_popup_pane

0x7f76,	// (0x00034a7c) grid_large_graphic_colour_popup_pane_ParamLimits

0x7f76,	// (0x00034a7c) grid_large_graphic_colour_popup_pane

0x7f9a,	// (0x00034aa0) listscroll_popup_colour_pane_g1_ParamLimits

0x7f9a,	// (0x00034aa0) listscroll_popup_colour_pane_g1

0x7fb1,	// (0x00034ab7) listscroll_popup_colour_pane_g2_ParamLimits

0x7fb1,	// (0x00034ab7) listscroll_popup_colour_pane_g2

0x7fc8,	// (0x00034ace) listscroll_popup_colour_pane_g3_ParamLimits

0x7fc8,	// (0x00034ace) listscroll_popup_colour_pane_g3

0x7fd8,	// (0x00034ade) listscroll_popup_colour_pane_g4_ParamLimits

0x7fd8,	// (0x00034ade) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0003c077) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0003c077) listscroll_popup_colour_pane_g

0x7fe8,	// (0x00034aee) scroll_pane_cp6_ParamLimits

0x7fe8,	// (0x00034aee) scroll_pane_cp6

0x7ffa,	// (0x00034b00) cell_large_graphic_colour_popup_pane_ParamLimits

0x7ffa,	// (0x00034b00) cell_large_graphic_colour_popup_pane

0x8019,	// (0x00034b1f) cell_large_graphic_colour_none_popup_pane_t1

0x3086,	// (0x0002fb8c) grid_highlight_pane_cp5

0x8028,	// (0x00034b2e) cell_large_graphic_colour_popup_pane_g1

0x8030,	// (0x00034b36) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0003c080) cell_large_graphic_colour_popup_pane_g

0x8038,	// (0x00034b3e) cell_large_graphic_colour_popup_pane_g2_copy1

0x8041,	// (0x00034b47) grid_highlight_pane_cp4

0x8049,	// (0x00034b4f) bg_popup_window_pane_cp8_ParamLimits

0x8049,	// (0x00034b4f) bg_popup_window_pane_cp8

0x8064,	// (0x00034b6a) popup_snote_single_text_window_g1_ParamLimits

0x8064,	// (0x00034b6a) popup_snote_single_text_window_g1

0x8076,	// (0x00034b7c) popup_snote_single_text_window_t1_ParamLimits

0x8076,	// (0x00034b7c) popup_snote_single_text_window_t1

0x8089,	// (0x00034b8f) popup_snote_single_text_window_t2_ParamLimits

0x8089,	// (0x00034b8f) popup_snote_single_text_window_t2

0x809c,	// (0x00034ba2) popup_snote_single_text_window_t3_ParamLimits

0x809c,	// (0x00034ba2) popup_snote_single_text_window_t3

0x80d5,	// (0x00034bdb) popup_snote_single_text_window_t4_ParamLimits

0x80d5,	// (0x00034bdb) popup_snote_single_text_window_t4

0x8109,	// (0x00034c0f) popup_snote_single_text_window_t5_ParamLimits

0x8109,	// (0x00034c0f) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0003c085) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0003c085) popup_snote_single_text_window_t

0x8138,	// (0x00034c3e) bg_popup_window_pane_cp9_ParamLimits

0x8138,	// (0x00034c3e) bg_popup_window_pane_cp9

0x8064,	// (0x00034b6a) popup_snote_single_graphic_window_g1_ParamLimits

0x8064,	// (0x00034b6a) popup_snote_single_graphic_window_g1

0x8146,	// (0x00034c4c) popup_snote_single_graphic_window_g2_ParamLimits

0x8146,	// (0x00034c4c) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0003c090) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0003c090) popup_snote_single_graphic_window_g

0x8152,	// (0x00034c58) popup_snote_single_graphic_window_t1_ParamLimits

0x8152,	// (0x00034c58) popup_snote_single_graphic_window_t1

0x8165,	// (0x00034c6b) popup_snote_single_graphic_window_t2_ParamLimits

0x8165,	// (0x00034c6b) popup_snote_single_graphic_window_t2

0x8178,	// (0x00034c7e) popup_snote_single_graphic_window_t3_ParamLimits

0x8178,	// (0x00034c7e) popup_snote_single_graphic_window_t3

0x81b1,	// (0x00034cb7) popup_snote_single_graphic_window_t4_ParamLimits

0x81b1,	// (0x00034cb7) popup_snote_single_graphic_window_t4

0x81e5,	// (0x00034ceb) popup_snote_single_graphic_window_t5_ParamLimits

0x81e5,	// (0x00034ceb) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0003c095) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0003c095) popup_snote_single_graphic_window_t

0xb117,	// (0x00037c1d) grid_graphic_popup_pane_ParamLimits

0xb117,	// (0x00037c1d) grid_graphic_popup_pane

0xb141,	// (0x00037c47) listscroll_popup_graphic_pane_g1_ParamLimits

0xb141,	// (0x00037c47) listscroll_popup_graphic_pane_g1

0xb155,	// (0x00037c5b) listscroll_popup_graphic_pane_g2_ParamLimits

0xb155,	// (0x00037c5b) listscroll_popup_graphic_pane_g2

0x0001,

0xf989,	// (0x0003c48f) listscroll_popup_graphic_pane_g_ParamLimits

0xf989,	// (0x0003c48f) listscroll_popup_graphic_pane_g

0xb169,	// (0x00037c6f) scroll_pane_cp5

0xb0a5,	// (0x00037bab) cell_graphic_popup_pane_ParamLimits

0xb0a5,	// (0x00037bab) cell_graphic_popup_pane

0xb086,	// (0x00037b8c) cell_graphic_popup_pane_g1

0xb08e,	// (0x00037b94) cell_graphic_popup_pane_g2

0x8038,	// (0x00034b3e) cell_graphic_popup_pane_g3

0x0002,

0xf982,	// (0x0003c488) cell_graphic_popup_pane_g

0xb097,	// (0x00037b9d) cell_graphic_popup_pane_t2

0x8041,	// (0x00034b47) grid_highlight_pane_cp3

0x8226,	// (0x00034d2c) list_gen_pane_ParamLimits

0x8226,	// (0x00034d2c) list_gen_pane

0x8258,	// (0x00034d5e) scroll_pane

0xafde,	// (0x00037ae4) bg_list_pane_g1_ParamLimits

0xafde,	// (0x00037ae4) bg_list_pane_g1

0xaffb,	// (0x00037b01) bg_list_pane_g2_ParamLimits

0xaffb,	// (0x00037b01) bg_list_pane_g2

0xb010,	// (0x00037b16) bg_list_pane_g3_ParamLimits

0xb010,	// (0x00037b16) bg_list_pane_g3

0xb024,	// (0x00037b2a) bg_list_pane_g4_ParamLimits

0xb024,	// (0x00037b2a) bg_list_pane_g4

0xb038,	// (0x00037b3e) bg_list_pane_g5_ParamLimits

0xb038,	// (0x00037b3e) bg_list_pane_g5

0x0004,

0xf977,	// (0x0003c47d) bg_list_pane_g_ParamLimits

0xf977,	// (0x0003c47d) bg_list_pane_g

0x60f6,	// (0x00032bfc) list_double2_graphic_large_graphic_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_double2_graphic_large_graphic_pane

0x60f6,	// (0x00032bfc) list_double2_graphic_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_double2_graphic_pane

0x60f6,	// (0x00032bfc) list_double2_large_graphic_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_double2_large_graphic_pane

0x60f6,	// (0x00032bfc) list_double2_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_double2_pane

0x60f6,	// (0x00032bfc) list_double_graphic_heading_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_double_graphic_heading_pane

0x60f6,	// (0x00032bfc) list_double_graphic_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_double_graphic_pane

0x60f6,	// (0x00032bfc) list_double_heading_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_double_heading_pane

0x60f6,	// (0x00032bfc) list_double_large_graphic_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_double_large_graphic_pane

0x60f6,	// (0x00032bfc) list_double_number_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_double_number_pane

0x60f6,	// (0x00032bfc) list_double_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_double_pane

0x60f6,	// (0x00032bfc) list_double_time_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_double_time_pane

0x60f6,	// (0x00032bfc) list_setting_number_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_setting_number_pane

0x60f6,	// (0x00032bfc) list_setting_pane_ParamLimits

0x60f6,	// (0x00032bfc) list_setting_pane

0x6144,	// (0x00032c4a) list_single_2graphic_pane_ParamLimits

0x6144,	// (0x00032c4a) list_single_2graphic_pane

0x6144,	// (0x00032c4a) list_single_graphic_heading_pane_ParamLimits

0x6144,	// (0x00032c4a) list_single_graphic_heading_pane

0x6144,	// (0x00032c4a) list_single_graphic_pane_ParamLimits

0x6144,	// (0x00032c4a) list_single_graphic_pane

0x6144,	// (0x00032c4a) list_single_heading_pane_ParamLimits

0x6144,	// (0x00032c4a) list_single_heading_pane

0xafbc,	// (0x00037ac2) list_single_large_graphic_pane_ParamLimits

0xafbc,	// (0x00037ac2) list_single_large_graphic_pane

0x6144,	// (0x00032c4a) list_single_number_heading_pane_ParamLimits

0x6144,	// (0x00032c4a) list_single_number_heading_pane

0x6144,	// (0x00032c4a) list_single_number_pane_ParamLimits

0x6144,	// (0x00032c4a) list_single_number_pane

0x6144,	// (0x00032c4a) list_single_pane_ParamLimits

0x6144,	// (0x00032c4a) list_single_pane

0x3086,	// (0x0002fb8c) list_highlight_pane_cp1

0x39e5,	// (0x000304eb) list_single_pane_g1_ParamLimits

0x39e5,	// (0x000304eb) list_single_pane_g1

0x39f1,	// (0x000304f7) list_single_pane_g2_ParamLimits

0x39f1,	// (0x000304f7) list_single_pane_g2

0x0001,

0xf5a1,	// (0x0003c0a7) list_single_pane_g_ParamLimits

0xf5a1,	// (0x0003c0a7) list_single_pane_g

0x60e0,	// (0x00032be6) list_single_pane_t1_ParamLimits

0x60e0,	// (0x00032be6) list_single_pane_t1

0x39e5,	// (0x000304eb) list_single_number_pane_g1_ParamLimits

0x39e5,	// (0x000304eb) list_single_number_pane_g1

0x39f1,	// (0x000304f7) list_single_number_pane_g2_ParamLimits

0x39f1,	// (0x000304f7) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x0003c0a7) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x0003c0a7) list_single_number_pane_g

0x6012,	// (0x00032b18) list_single_number_pane_t1_ParamLimits

0x6012,	// (0x00032b18) list_single_number_pane_t1

0x6028,	// (0x00032b2e) list_single_number_pane_t2_ParamLimits

0x6028,	// (0x00032b2e) list_single_number_pane_t2

0x0001,

0xf938,	// (0x0003c43e) list_single_number_pane_t_ParamLimits

0xf938,	// (0x0003c43e) list_single_number_pane_t

0x3a0f,	// (0x00030515) list_single_graphic_pane_g1_ParamLimits

0x3a0f,	// (0x00030515) list_single_graphic_pane_g1

0x39e5,	// (0x000304eb) list_single_graphic_pane_g2_ParamLimits

0x39e5,	// (0x000304eb) list_single_graphic_pane_g2

0x39f1,	// (0x000304f7) list_single_graphic_pane_g3_ParamLimits

0x39f1,	// (0x000304f7) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0003c0a0) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0003c0a0) list_single_graphic_pane_g

0x492a,	// (0x00031430) list_single_graphic_pane_t1_ParamLimits

0x492a,	// (0x00031430) list_single_graphic_pane_t1

0x39e5,	// (0x000304eb) list_single_heading_pane_g1_ParamLimits

0x39e5,	// (0x000304eb) list_single_heading_pane_g1

0x39f1,	// (0x000304f7) list_single_heading_pane_g2_ParamLimits

0x39f1,	// (0x000304f7) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0003c0a7) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0003c0a7) list_single_heading_pane_g

0x4940,	// (0x00031446) list_single_heading_pane_t1_ParamLimits

0x4940,	// (0x00031446) list_single_heading_pane_t1

0x4956,	// (0x0003145c) list_single_heading_pane_t2_ParamLimits

0x4956,	// (0x0003145c) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0003c0ac) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0003c0ac) list_single_heading_pane_t

0x39e5,	// (0x000304eb) list_single_number_heading_pane_g1_ParamLimits

0x39e5,	// (0x000304eb) list_single_number_heading_pane_g1

0x39f1,	// (0x000304f7) list_single_number_heading_pane_g2_ParamLimits

0x39f1,	// (0x000304f7) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x0003c0a7) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x0003c0a7) list_single_number_heading_pane_g

0x4940,	// (0x00031446) list_single_number_heading_pane_t1_ParamLimits

0x4940,	// (0x00031446) list_single_number_heading_pane_t1

0x4968,	// (0x0003146e) list_single_number_heading_pane_t2_ParamLimits

0x4968,	// (0x0003146e) list_single_number_heading_pane_t2

0x39fd,	// (0x00030503) list_single_number_heading_pane_t3_ParamLimits

0x39fd,	// (0x00030503) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x0003c0b1) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x0003c0b1) list_single_number_heading_pane_t

0x39d9,	// (0x000304df) list_single_graphic_heading_pane_g1_ParamLimits

0x39d9,	// (0x000304df) list_single_graphic_heading_pane_g1

0x497a,	// (0x00031480) list_single_graphic_heading_pane_g4_ParamLimits

0x497a,	// (0x00031480) list_single_graphic_heading_pane_g4

0x39f1,	// (0x000304f7) list_single_graphic_heading_pane_g5_ParamLimits

0x39f1,	// (0x000304f7) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x0003c0b8) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x0003c0b8) list_single_graphic_heading_pane_g

0x4940,	// (0x00031446) list_single_graphic_heading_pane_t1_ParamLimits

0x4940,	// (0x00031446) list_single_graphic_heading_pane_t1

0x498b,	// (0x00031491) list_single_graphic_heading_pane_t2_ParamLimits

0x498b,	// (0x00031491) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x0003c0bf) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x0003c0bf) list_single_graphic_heading_pane_t

0x499d,	// (0x000314a3) list_single_large_graphic_pane_g1_ParamLimits

0x499d,	// (0x000314a3) list_single_large_graphic_pane_g1

0x39a0,	// (0x000304a6) list_single_large_graphic_pane_g2_ParamLimits

0x39a0,	// (0x000304a6) list_single_large_graphic_pane_g2

0x39ac,	// (0x000304b2) list_single_large_graphic_pane_g3_ParamLimits

0x39ac,	// (0x000304b2) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x0003c0c4) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x0003c0c4) list_single_large_graphic_pane_g

0x9ff9,	// (0x00036aff) wait_border_pane_g2_copy1

0x49a9,	// (0x000314af) list_single_large_graphic_pane_g4_cp2

0x49b1,	// (0x000314b7) list_single_large_graphic_pane_t1_ParamLimits

0x49b1,	// (0x000314b7) list_single_large_graphic_pane_t1

0x49c7,	// (0x000314cd) list_double_pane_g1_ParamLimits

0x49c7,	// (0x000314cd) list_double_pane_g1

0x39cd,	// (0x000304d3) list_double_pane_g2_ParamLimits

0x39cd,	// (0x000304d3) list_double_pane_g2

0x0001,

0xf5c5,	// (0x0003c0cb) list_double_pane_g_ParamLimits

0xf5c5,	// (0x0003c0cb) list_double_pane_g

0x49d3,	// (0x000314d9) list_double_pane_t1_ParamLimits

0x49d3,	// (0x000314d9) list_double_pane_t1

0x49e9,	// (0x000314ef) list_double_pane_t2_ParamLimits

0x49e9,	// (0x000314ef) list_double_pane_t2

0x0001,

0xf5ca,	// (0x0003c0d0) list_double_pane_t_ParamLimits

0xf5ca,	// (0x0003c0d0) list_double_pane_t

0x49fb,	// (0x00031501) list_double2_pane_g1_ParamLimits

0x49fb,	// (0x00031501) list_double2_pane_g1

0x4a0c,	// (0x00031512) list_double2_pane_g2_ParamLimits

0x4a0c,	// (0x00031512) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x0003c0d5) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x0003c0d5) list_double2_pane_g

0x4a18,	// (0x0003151e) list_double2_pane_t1_ParamLimits

0x4a18,	// (0x0003151e) list_double2_pane_t1

0x4a2e,	// (0x00031534) list_double2_pane_t2_ParamLimits

0x4a2e,	// (0x00031534) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x0003c0da) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x0003c0da) list_double2_pane_t

0x49c7,	// (0x000314cd) list_double_number_pane_g1_ParamLimits

0x49c7,	// (0x000314cd) list_double_number_pane_g1

0x39cd,	// (0x000304d3) list_double_number_pane_g2_ParamLimits

0x39cd,	// (0x000304d3) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x0003c0cb) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x0003c0cb) list_double_number_pane_g

0x4a40,	// (0x00031546) list_double_number_pane_t1_ParamLimits

0x4a40,	// (0x00031546) list_double_number_pane_t1

0x4a52,	// (0x00031558) list_double_number_pane_t2_ParamLimits

0x4a52,	// (0x00031558) list_double_number_pane_t2

0x4a68,	// (0x0003156e) list_double_number_pane_t3_ParamLimits

0x4a68,	// (0x0003156e) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x0003c0df) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x0003c0df) list_double_number_pane_t

0x4a7a,	// (0x00031580) list_double_graphic_pane_g1_ParamLimits

0x4a7a,	// (0x00031580) list_double_graphic_pane_g1

0x4a86,	// (0x0003158c) list_double_graphic_pane_g2_ParamLimits

0x4a86,	// (0x0003158c) list_double_graphic_pane_g2

0x4a95,	// (0x0003159b) list_double_graphic_pane_g3_ParamLimits

0x4a95,	// (0x0003159b) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x0003c0e6) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0003c0e6) list_double_graphic_pane_g

0x4aad,	// (0x000315b3) list_double_graphic_pane_t1_ParamLimits

0x4aad,	// (0x000315b3) list_double_graphic_pane_t1

0x4ac3,	// (0x000315c9) list_double_graphic_pane_t2_ParamLimits

0x4ac3,	// (0x000315c9) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x0003c0ef) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x0003c0ef) list_double_graphic_pane_t

0x4ad5,	// (0x000315db) list_double2_graphic_pane_g1_ParamLimits

0x4ad5,	// (0x000315db) list_double2_graphic_pane_g1

0x4ae1,	// (0x000315e7) list_double2_graphic_pane_g2_ParamLimits

0x4ae1,	// (0x000315e7) list_double2_graphic_pane_g2

0x4a0c,	// (0x00031512) list_double2_graphic_pane_g3_ParamLimits

0x4a0c,	// (0x00031512) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x0003c0f4) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x0003c0f4) list_double2_graphic_pane_g

0x4aed,	// (0x000315f3) list_double2_graphic_pane_t1_ParamLimits

0x4aed,	// (0x000315f3) list_double2_graphic_pane_t1

0x4b03,	// (0x00031609) list_double2_graphic_pane_t2_ParamLimits

0x4b03,	// (0x00031609) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x0003c0fb) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x0003c0fb) list_double2_graphic_pane_t

0x4b15,	// (0x0003161b) list_double_large_graphic_pane_g1_ParamLimits

0x4b15,	// (0x0003161b) list_double_large_graphic_pane_g1

0x4b34,	// (0x0003163a) list_double_large_graphic_pane_g2_ParamLimits

0x4b34,	// (0x0003163a) list_double_large_graphic_pane_g2

0x39cd,	// (0x000304d3) list_double_large_graphic_pane_g3_ParamLimits

0x39cd,	// (0x000304d3) list_double_large_graphic_pane_g3

0x4b45,	// (0x0003164b) list_double_large_graphic_pane_g4_ParamLimits

0x4b45,	// (0x0003164b) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x0003c100) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x0003c100) list_double_large_graphic_pane_g

0x4b57,	// (0x0003165d) list_double_large_graphic_pane_t1_ParamLimits

0x4b57,	// (0x0003165d) list_double_large_graphic_pane_t1

0x4b70,	// (0x00031676) list_double_large_graphic_pane_t2_ParamLimits

0x4b70,	// (0x00031676) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x0003c10b) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x0003c10b) list_double_large_graphic_pane_t

0x4b82,	// (0x00031688) list_double2_large_graphic_pane_g1_ParamLimits

0x4b82,	// (0x00031688) list_double2_large_graphic_pane_g1

0x49fb,	// (0x00031501) list_double2_large_graphic_pane_g2_ParamLimits

0x49fb,	// (0x00031501) list_double2_large_graphic_pane_g2

0x4a0c,	// (0x00031512) list_double2_large_graphic_pane_g3_ParamLimits

0x4a0c,	// (0x00031512) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x0003c110) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x0003c110) list_double2_large_graphic_pane_g

0x4b8e,	// (0x00031694) list_double2_large_graphic_pane_t1_ParamLimits

0x4b8e,	// (0x00031694) list_double2_large_graphic_pane_t1

0x4ba4,	// (0x000316aa) list_double2_large_graphic_pane_t2_ParamLimits

0x4ba4,	// (0x000316aa) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x0003c117) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x0003c117) list_double2_large_graphic_pane_t

0x4bb6,	// (0x000316bc) list_double_heading_pane_g1_ParamLimits

0x4bb6,	// (0x000316bc) list_double_heading_pane_g1

0x4bc7,	// (0x000316cd) list_double_heading_pane_g2_ParamLimits

0x4bc7,	// (0x000316cd) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x0003c11c) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x0003c11c) list_double_heading_pane_g

0x4bd3,	// (0x000316d9) list_double_heading_pane_t1_ParamLimits

0x4bd3,	// (0x000316d9) list_double_heading_pane_t1

0x4a2e,	// (0x00031534) list_double_heading_pane_t2_ParamLimits

0x4a2e,	// (0x00031534) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x0003c121) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x0003c121) list_double_heading_pane_t

0x4be9,	// (0x000316ef) list_double_graphic_heading_pane_g1_ParamLimits

0x4be9,	// (0x000316ef) list_double_graphic_heading_pane_g1

0x4bb6,	// (0x000316bc) list_double_graphic_heading_pane_g2_ParamLimits

0x4bb6,	// (0x000316bc) list_double_graphic_heading_pane_g2

0x4bc7,	// (0x000316cd) list_double_graphic_heading_pane_g3_ParamLimits

0x4bc7,	// (0x000316cd) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x0003c126) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x0003c126) list_double_graphic_heading_pane_g

0x4bf5,	// (0x000316fb) list_double_graphic_heading_pane_t1_ParamLimits

0x4bf5,	// (0x000316fb) list_double_graphic_heading_pane_t1

0x4b03,	// (0x00031609) list_double_graphic_heading_pane_t2_ParamLimits

0x4b03,	// (0x00031609) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x0003c12d) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x0003c12d) list_double_graphic_heading_pane_t

0x4b34,	// (0x0003163a) list_double_time_pane_g1_ParamLimits

0x4b34,	// (0x0003163a) list_double_time_pane_g1

0x39cd,	// (0x000304d3) list_double_time_pane_g2_ParamLimits

0x39cd,	// (0x000304d3) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x0003c132) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x0003c132) list_double_time_pane_g

0x4c0b,	// (0x00031711) list_double_time_pane_t1_ParamLimits

0x4c0b,	// (0x00031711) list_double_time_pane_t1

0x4c21,	// (0x00031727) list_double_time_pane_t2_ParamLimits

0x4c21,	// (0x00031727) list_double_time_pane_t2

0x4c33,	// (0x00031739) list_double_time_pane_t3_ParamLimits

0x4c33,	// (0x00031739) list_double_time_pane_t3

0x4c45,	// (0x0003174b) list_double_time_pane_t4_ParamLimits

0x4c45,	// (0x0003174b) list_double_time_pane_t4

0x0003,

0xf631,	// (0x0003c137) list_double_time_pane_t_ParamLimits

0xf631,	// (0x0003c137) list_double_time_pane_t

0x4ae1,	// (0x000315e7) list_setting_pane_g1_ParamLimits

0x4ae1,	// (0x000315e7) list_setting_pane_g1

0x4a0c,	// (0x00031512) list_setting_pane_g2_ParamLimits

0x4a0c,	// (0x00031512) list_setting_pane_g2

0x0001,

0xf63a,	// (0x0003c140) list_setting_pane_g_ParamLimits

0xf63a,	// (0x0003c140) list_setting_pane_g

0x4c57,	// (0x0003175d) list_setting_pane_t1_ParamLimits

0x4c57,	// (0x0003175d) list_setting_pane_t1

0x4c71,	// (0x00031777) list_setting_pane_t2_ParamLimits

0x4c71,	// (0x00031777) list_setting_pane_t2

0x0002,

0xf63f,	// (0x0003c145) list_setting_pane_t_ParamLimits

0xf63f,	// (0x0003c145) list_setting_pane_t

0x4cb0,	// (0x000317b6) set_value_pane_cp_ParamLimits

0x4cb0,	// (0x000317b6) set_value_pane_cp

0x4cbc,	// (0x000317c2) list_setting_number_pane_g1_ParamLimits

0x4cbc,	// (0x000317c2) list_setting_number_pane_g1

0x4cc8,	// (0x000317ce) list_setting_number_pane_g2_ParamLimits

0x4cc8,	// (0x000317ce) list_setting_number_pane_g2

0x0001,

0xf646,	// (0x0003c14c) list_setting_number_pane_g_ParamLimits

0xf646,	// (0x0003c14c) list_setting_number_pane_g

0x4cd4,	// (0x000317da) list_setting_number_pane_t1_ParamLimits

0x4cd4,	// (0x000317da) list_setting_number_pane_t1

0x4ced,	// (0x000317f3) list_setting_number_pane_t2_ParamLimits

0x4ced,	// (0x000317f3) list_setting_number_pane_t2

0x4d07,	// (0x0003180d) list_setting_number_pane_t3_ParamLimits

0x4d07,	// (0x0003180d) list_setting_number_pane_t3

0x0003,

0xf64b,	// (0x0003c151) list_setting_number_pane_t_ParamLimits

0xf64b,	// (0x0003c151) list_setting_number_pane_t

0x4cb0,	// (0x000317b6) set_value_pane_ParamLimits

0x4cb0,	// (0x000317b6) set_value_pane

0x828c,	// (0x00034d92) bg_set_opt_pane_ParamLimits

0x828c,	// (0x00034d92) bg_set_opt_pane

0x3a1b,	// (0x00030521) set_value_pane_t1

0x82ad,	// (0x00034db3) slider_set_pane_cp3

0x82b6,	// (0x00034dbc) volume_small_pane_cp

0x82bf,	// (0x00034dc5) list_form_gen_pane

0x82c8,	// (0x00034dce) scroll_pane_cp8

0x4d4a,	// (0x00031850) form_field_data_pane_ParamLimits

0x4d4a,	// (0x00031850) form_field_data_pane

0x4d62,	// (0x00031868) form_field_data_wide_pane_ParamLimits

0x4d62,	// (0x00031868) form_field_data_wide_pane

0x4d83,	// (0x00031889) form_field_popup_pane_ParamLimits

0x4d83,	// (0x00031889) form_field_popup_pane

0x4da3,	// (0x000318a9) form_field_popup_wide_pane_ParamLimits

0x4da3,	// (0x000318a9) form_field_popup_wide_pane

0x4dc0,	// (0x000318c6) form_field_slider_pane_ParamLimits

0x4dc0,	// (0x000318c6) form_field_slider_pane

0x4dd3,	// (0x000318d9) form_field_slider_wide_pane_ParamLimits

0x4dd3,	// (0x000318d9) form_field_slider_wide_pane

0x82d9,	// (0x00034ddf) data_form_pane

0x4df0,	// (0x000318f6) form_field_data_pane_t1

0x82e5,	// (0x00034deb) input_focus_pane

0x4e08,	// (0x0003190e) data_form_wide_pane

0x4e25,	// (0x0003192b) form_field_data_wide_pane_t1

0x8056,	// (0x00034b5c) input_focus_pane_cp6

0x4e47,	// (0x0003194d) form_field_popup_pane_t1

0x82e5,	// (0x00034deb) input_focus_pane_cp7

0x8313,	// (0x00034e19) list_form_pane

0x4e67,	// (0x0003196d) form_field_popup_wide_pane_t1

0x82e5,	// (0x00034deb) input_focus_pane_cp8

0x831f,	// (0x00034e25) list_form_wide_pane

0x4e84,	// (0x0003198a) form_field_slider_pane_t1_ParamLimits

0x4e84,	// (0x0003198a) form_field_slider_pane_t1

0x4e9a,	// (0x000319a0) form_field_slider_pane_t2_ParamLimits

0x4e9a,	// (0x000319a0) form_field_slider_pane_t2

0x0001,

0xf65b,	// (0x0003c161) form_field_slider_pane_t_ParamLimits

0xf65b,	// (0x0003c161) form_field_slider_pane_t

0x7cd3,	// (0x000347d9) input_focus_pane_cp9_ParamLimits

0x7cd3,	// (0x000347d9) input_focus_pane_cp9

0x4eaf,	// (0x000319b5) slider_cont_pane_ParamLimits

0x4eaf,	// (0x000319b5) slider_cont_pane

0x832b,	// (0x00034e31) form_field_slider_wide_pane_t1_ParamLimits

0x832b,	// (0x00034e31) form_field_slider_wide_pane_t1

0x4ec3,	// (0x000319c9) form_field_slider_wide_pane_t2_ParamLimits

0x4ec3,	// (0x000319c9) form_field_slider_wide_pane_t2

0x0001,

0xf660,	// (0x0003c166) form_field_slider_wide_pane_t_ParamLimits

0xf660,	// (0x0003c166) form_field_slider_wide_pane_t

0x7cd3,	// (0x000347d9) input_focus_pane_cp10_ParamLimits

0x7cd3,	// (0x000347d9) input_focus_pane_cp10

0x4ed5,	// (0x000319db) slider_cont_pane_cp1_ParamLimits

0x4ed5,	// (0x000319db) slider_cont_pane_cp1

0x4ee9,	// (0x000319ef) slider_form_pane_cp

0x833d,	// (0x00034e43) input_focus_pane_g1

0x8345,	// (0x00034e4b) input_focus_pane_g2

0x834d,	// (0x00034e53) input_focus_pane_g3

0x8355,	// (0x00034e5b) input_focus_pane_g4

0x835d,	// (0x00034e63) input_focus_pane_g5

0x8365,	// (0x00034e6b) input_focus_pane_g6

0x836d,	// (0x00034e73) input_focus_pane_g7

0x8375,	// (0x00034e7b) input_focus_pane_g8

0x837d,	// (0x00034e83) input_focus_pane_g9

0x307c,	// (0x0002fb82) input_focus_pane_g10

0x0009,

0xf665,	// (0x0003c16b) input_focus_pane_g

0xa002,	// (0x00036b08) wait_border_pane_g3_copy1

0x4ef1,	// (0x000319f7) data_form_pane_t1

0x307c,	// (0x0002fb82) wait_anim_pane_g1_copy1

0x60b2,	// (0x00032bb8) data_form_wide_pane_t1

0x4f0c,	// (0x00031a12) list_form_graphic_pane_cp_ParamLimits

0x4f0c,	// (0x00031a12) list_form_graphic_pane_cp

0xaf12,	// (0x00037a18) slider_form_pane_g1

0xaf1b,	// (0x00037a21) slider_form_pane_g2

0x0006,

0xf968,	// (0x0003c46e) slider_form_pane_g

0x4f25,	// (0x00031a2b) list_form_graphic_pane_ParamLimits

0x4f25,	// (0x00031a2b) list_form_graphic_pane

0x4f41,	// (0x00031a47) list_form_graphic_pane_g1

0x4f49,	// (0x00031a4f) list_form_graphic_pane_t1_ParamLimits

0x4f49,	// (0x00031a4f) list_form_graphic_pane_t1

0x7a58,	// (0x0003455e) list_highlight_pane_cp5_ParamLimits

0x7a58,	// (0x0003455e) list_highlight_pane_cp5

0x4f5e,	// (0x00031a64) find_pane_g1

0x8385,	// (0x00034e8b) input_find_pane

0x4f67,	// (0x00031a6d) input_find_pane_g1_ParamLimits

0x4f67,	// (0x00031a6d) input_find_pane_g1

0x4f73,	// (0x00031a79) input_find_pane_t1_ParamLimits

0x4f73,	// (0x00031a79) input_find_pane_t1

0x4f88,	// (0x00031a8e) input_find_pane_t2_ParamLimits

0x4f88,	// (0x00031a8e) input_find_pane_t2

0x0001,

0xf67a,	// (0x0003c180) input_find_pane_t_ParamLimits

0xf67a,	// (0x0003c180) input_find_pane_t

0x838e,	// (0x00034e94) input_focus_pane_cp5_ParamLimits

0x838e,	// (0x00034e94) input_focus_pane_cp5

0x83ad,	// (0x00034eb3) bg_popup_window_pane_cp2_ParamLimits

0x83ad,	// (0x00034eb3) bg_popup_window_pane_cp2

0x83ba,	// (0x00034ec0) listscroll_menu_pane_ParamLimits

0x83ba,	// (0x00034ec0) listscroll_menu_pane

0x83c6,	// (0x00034ecc) popup_submenu_window_ParamLimits

0x83c6,	// (0x00034ecc) popup_submenu_window

0x83f2,	// (0x00034ef8) find_popup_pane_g1

0x83fa,	// (0x00034f00) input_popup_find_pane_cp

0x8404,	// (0x00034f0a) input_focus_pane_cp4_ParamLimits

0x8404,	// (0x00034f0a) input_focus_pane_cp4

0x841e,	// (0x00034f24) input_popup_find_pane_t1_ParamLimits

0x841e,	// (0x00034f24) input_popup_find_pane_t1

0x3086,	// (0x0002fb8c) bg_popup_sub_pane_cp

0x844c,	// (0x00034f52) listscroll_popup_sub_pane

0x8454,	// (0x00034f5a) list_submenu_pane_ParamLimits

0x8454,	// (0x00034f5a) list_submenu_pane

0x8465,	// (0x00034f6b) scroll_pane_cp4

0x846d,	// (0x00034f73) list_single_popup_submenu_pane_ParamLimits

0x846d,	// (0x00034f73) list_single_popup_submenu_pane

0x8481,	// (0x00034f87) list_single_popup_submenu_pane_g1

0x8489,	// (0x00034f8f) list_single_popup_submenu_pane_t1_ParamLimits

0x8489,	// (0x00034f8f) list_single_popup_submenu_pane_t1

0x7a58,	// (0x0003455e) bg_active_tab_pane_cp1_ParamLimits

0x7a58,	// (0x0003455e) bg_active_tab_pane_cp1

0x849e,	// (0x00034fa4) tabs_2_active_pane_g1

0x84a6,	// (0x00034fac) tabs_2_active_pane_t1

0x7a58,	// (0x0003455e) bg_passive_tab_pane_cp1_ParamLimits

0x7a58,	// (0x0003455e) bg_passive_tab_pane_cp1

0x849e,	// (0x00034fa4) tabs_2_passive_pane_g1

0x84a6,	// (0x00034fac) tabs_2_passive_pane_t1

0x84b8,	// (0x00034fbe) bg_active_tab_pane_cp4

0x84c6,	// (0x00034fcc) tabs_2_long_active_pane_t1

0x84d9,	// (0x00034fdf) bg_passive_tab_pane_cp4

0x5c7c,	// (0x00032782) list_single_midp_graphic_pane_g4_ParamLimits

0x84b8,	// (0x00034fbe) bg_active_tab_pane_cp5

0x84e5,	// (0x00034feb) tabs_3_long_active_pane_t1

0x84d9,	// (0x00034fdf) bg_passive_tab_pane_cp5

0x5c7c,	// (0x00032782) list_single_midp_graphic_pane_g4

0x7a58,	// (0x0003455e) bg_popup_window_pane_cp13_ParamLimits

0x7a58,	// (0x0003455e) bg_popup_window_pane_cp13

0x8500,	// (0x00035006) listscroll_popup_fast_pane_ParamLimits

0x8500,	// (0x00035006) listscroll_popup_fast_pane

0x850f,	// (0x00035015) grid_popup_fast_pane_ParamLimits

0x850f,	// (0x00035015) grid_popup_fast_pane

0x8521,	// (0x00035027) scroll_pane_cp9_ParamLimits

0x8521,	// (0x00035027) scroll_pane_cp9

0xc859,	// (0x0003935f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc859,	// (0x0003935f) list_single_graphic_hl_pane_t1_cp2

0x8545,	// (0x0003504b) input_focus_pane_cp20_ParamLimits

0x8545,	// (0x0003504b) input_focus_pane_cp20

0x8553,	// (0x00035059) query_popup_data_pane_t1_ParamLimits

0x8553,	// (0x00035059) query_popup_data_pane_t1

0x8566,	// (0x0003506c) query_popup_data_pane_t2_ParamLimits

0x8566,	// (0x0003506c) query_popup_data_pane_t2

0x85ac,	// (0x000350b2) query_popup_data_pane_t3_ParamLimits

0x85ac,	// (0x000350b2) query_popup_data_pane_t3

0x85ed,	// (0x000350f3) query_popup_data_pane_t4_ParamLimits

0x85ed,	// (0x000350f3) query_popup_data_pane_t4

0x8629,	// (0x0003512f) query_popup_data_pane_t5_ParamLimits

0x8629,	// (0x0003512f) query_popup_data_pane_t5

0x0004,

0xf67f,	// (0x0003c185) query_popup_data_pane_t_ParamLimits

0xf67f,	// (0x0003c185) query_popup_data_pane_t

0x833d,	// (0x00034e43) bg_set_opt_pane_g1

0x8345,	// (0x00034e4b) bg_set_opt_pane_g2

0x834d,	// (0x00034e53) bg_set_opt_pane_g3

0x8355,	// (0x00034e5b) bg_set_opt_pane_g4

0x835d,	// (0x00034e63) bg_set_opt_pane_g5

0x8365,	// (0x00034e6b) bg_set_opt_pane_g6

0x836d,	// (0x00034e73) bg_set_opt_pane_g7

0x8375,	// (0x00034e7b) bg_set_opt_pane_g8

0x837d,	// (0x00034e83) bg_set_opt_pane_g9

0x0008,

0xf68a,	// (0x0003c190) bg_set_opt_pane_g

0x52c4,	// (0x00031dca) control_top_pane_stacon_ParamLimits

0x52c4,	// (0x00031dca) control_top_pane_stacon

0x5317,	// (0x00031e1d) signal_pane_stacon_ParamLimits

0x5317,	// (0x00031e1d) signal_pane_stacon

0x8e18,	// (0x0003591e) stacon_top_pane_g1_ParamLimits

0x8e18,	// (0x0003591e) stacon_top_pane_g1

0x533c,	// (0x00031e42) title_pane_stacon_ParamLimits

0x533c,	// (0x00031e42) title_pane_stacon

0x5366,	// (0x00031e6c) uni_indicator_pane_stacon_ParamLimits

0x5366,	// (0x00031e6c) uni_indicator_pane_stacon

0x537b,	// (0x00031e81) battery_pane_stacon_ParamLimits

0x537b,	// (0x00031e81) battery_pane_stacon

0x53bf,	// (0x00031ec5) control_bottom_pane_stacon_ParamLimits

0x53bf,	// (0x00031ec5) control_bottom_pane_stacon

0x53e2,	// (0x00031ee8) navi_pane_stacon_ParamLimits

0x53e2,	// (0x00031ee8) navi_pane_stacon

0x8e3a,	// (0x00035940) stacon_bottom_pane_g1_ParamLimits

0x8e3a,	// (0x00035940) stacon_bottom_pane_g1

0x4f9d,	// (0x00031aa3) aid_levels_signal_lsc_ParamLimits

0x4f9d,	// (0x00031aa3) aid_levels_signal_lsc

0x4fb3,	// (0x00031ab9) signal_pane_stacon_g1_ParamLimits

0x4fb3,	// (0x00031ab9) signal_pane_stacon_g1

0x4fc7,	// (0x00031acd) signal_pane_stacon_g2_ParamLimits

0x4fc7,	// (0x00031acd) signal_pane_stacon_g2

0x0001,

0xf69d,	// (0x0003c1a3) signal_pane_stacon_g_ParamLimits

0xf69d,	// (0x0003c1a3) signal_pane_stacon_g

0x4ffc,	// (0x00031b02) title_pane_stacon_t1_ParamLimits

0x4ffc,	// (0x00031b02) title_pane_stacon_t1

0x866d,	// (0x00035173) uni_indicator_pane_stacon_g1

0x8677,	// (0x0003517d) uni_indicator_pane_stacon_g2

0x8681,	// (0x00035187) uni_indicator_pane_stacon_g3

0x868b,	// (0x00035191) uni_indicator_pane_stacon_g4

0x0003,

0xf6a9,	// (0x0003c1af) uni_indicator_pane_stacon_g

0x5021,	// (0x00031b27) control_top_pane_stacon_g1

0x5029,	// (0x00031b2f) control_top_pane_stacon_t1_ParamLimits

0x5029,	// (0x00031b2f) control_top_pane_stacon_t1

0x5060,	// (0x00031b66) aid_levels_battery_lsc_ParamLimits

0x5060,	// (0x00031b66) aid_levels_battery_lsc

0x5077,	// (0x00031b7d) battery_pane_stacon_g1_ParamLimits

0x5077,	// (0x00031b7d) battery_pane_stacon_g1

0x508a,	// (0x00031b90) battery_pane_stacon_g2_ParamLimits

0x508a,	// (0x00031b90) battery_pane_stacon_g2

0x0001,

0xf6b2,	// (0x0003c1b8) battery_pane_stacon_g_ParamLimits

0xf6b2,	// (0x0003c1b8) battery_pane_stacon_g

0x50c8,	// (0x00031bce) navi_icon_pane_stacon

0x50dc,	// (0x00031be2) navi_navi_pane_stacon

0x50c8,	// (0x00031bce) navi_text_pane_stacon

0x5021,	// (0x00031b27) control_bottom_pane_stacon_g1

0x50f0,	// (0x00031bf6) control_bottom_pane_stacon_t1_ParamLimits

0x50f0,	// (0x00031bf6) control_bottom_pane_stacon_t1

0x86af,	// (0x000351b5) grid_app_pane_ParamLimits

0x86af,	// (0x000351b5) grid_app_pane

0x86d1,	// (0x000351d7) scroll_pane_cp15_ParamLimits

0x86d1,	// (0x000351d7) scroll_pane_cp15

0x86e4,	// (0x000351ea) cell_app_pane_ParamLimits

0x86e4,	// (0x000351ea) cell_app_pane

0x870c,	// (0x00035212) cell_app_pane_g1_ParamLimits

0x870c,	// (0x00035212) cell_app_pane_g1

0x8914,	// (0x0003541a) cell_app_pane_g2_ParamLimits

0x8914,	// (0x0003541a) cell_app_pane_g2

0x0001,

0xf6b7,	// (0x0003c1bd) cell_app_pane_g_ParamLimits

0xf6b7,	// (0x0003c1bd) cell_app_pane_g

0x8920,	// (0x00035426) cell_app_pane_t1_ParamLimits

0x8920,	// (0x00035426) cell_app_pane_t1

0x8937,	// (0x0003543d) grid_highlight_pane_ParamLimits

0x8937,	// (0x0003543d) grid_highlight_pane

0x833d,	// (0x00034e43) cell_highlight_pane_g1

0x8345,	// (0x00034e4b) cell_highlight_pane_g2

0x834d,	// (0x00034e53) cell_highlight_pane_g3

0x8355,	// (0x00034e5b) cell_highlight_pane_g4

0x835d,	// (0x00034e63) cell_highlight_pane_g5

0x8365,	// (0x00034e6b) cell_highlight_pane_g6

0x836d,	// (0x00034e73) cell_highlight_pane_g7

0x8375,	// (0x00034e7b) cell_highlight_pane_g8

0x837d,	// (0x00034e83) cell_highlight_pane_g9

0x307c,	// (0x0002fb82) cell_highlight_pane_g10

0x0009,

0xf665,	// (0x0003c16b) cell_highlight_pane_g

0x8948,	// (0x0003544e) bg_scroll_pane

0x513a,	// (0x00031c40) scroll_handle_pane

0x898f,	// (0x00035495) scroll_bg_pane_g1

0x89a4,	// (0x000354aa) scroll_bg_pane_g2

0x89bc,	// (0x000354c2) scroll_bg_pane_g3

0x0002,

0xf6bc,	// (0x0003c1c2) scroll_bg_pane_g

0x89d1,	// (0x000354d7) scroll_handle_focus_pane_ParamLimits

0x89d1,	// (0x000354d7) scroll_handle_focus_pane

0x898f,	// (0x00035495) scroll_handle_pane_g1

0x89de,	// (0x000354e4) scroll_handle_pane_g2

0x89bc,	// (0x000354c2) scroll_handle_pane_g3

0x0002,

0xf6c3,	// (0x0003c1c9) scroll_handle_pane_g

0x8404,	// (0x00034f0a) bg_popup_sub_pane_cp21_ParamLimits

0x8404,	// (0x00034f0a) bg_popup_sub_pane_cp21

0x89f2,	// (0x000354f8) popup_fep_japan_predictive_window_t1_ParamLimits

0x89f2,	// (0x000354f8) popup_fep_japan_predictive_window_t1

0x8a0c,	// (0x00035512) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a0c,	// (0x00035512) popup_fep_japan_predictive_window_t2

0x8a3f,	// (0x00035545) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a3f,	// (0x00035545) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ca,	// (0x0003c1d0) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ca,	// (0x0003c1d0) popup_fep_japan_predictive_window_t

0x3086,	// (0x0002fb8c) bg_popup_sub_pane_cp23

0x8a76,	// (0x0003557c) listscroll_japin_cand_pane

0x8a7e,	// (0x00035584) popup_fep_japan_candidate_window_t1

0x8a8c,	// (0x00035592) candidate_pane_ParamLimits

0x8a8c,	// (0x00035592) candidate_pane

0x8a9e,	// (0x000355a4) scroll_pane_cp30

0x8aa6,	// (0x000355ac) list_single_popup_jap_candidate_pane_ParamLimits

0x8aa6,	// (0x000355ac) list_single_popup_jap_candidate_pane

0x3086,	// (0x0002fb8c) list_highlight_pane_cp30

0x8abb,	// (0x000355c1) list_single_popup_jap_candidate_pane_t1

0x8aca,	// (0x000355d0) level_1_signal

0x8adc,	// (0x000355e2) level_2_signal

0x8aef,	// (0x000355f5) level_3_signal

0x8b02,	// (0x00035608) level_4_signal

0x8b15,	// (0x0003561b) level_5_signal

0x8b28,	// (0x0003562e) level_6_signal

0x8b3b,	// (0x00035641) level_7_signal

0x8aca,	// (0x000355d0) level_1_battery

0x8adc,	// (0x000355e2) level_2_battery

0x8aef,	// (0x000355f5) level_3_battery

0x8b02,	// (0x00035608) level_4_battery

0x8b15,	// (0x0003561b) level_5_battery

0x8b28,	// (0x0003562e) level_6_battery

0x8b3b,	// (0x00035641) level_7_battery

0x8b66,	// (0x0003566c) list_menu_pane_ParamLimits

0x8b66,	// (0x0003566c) list_menu_pane

0x8b7c,	// (0x00035682) scroll_pane_cp25_ParamLimits

0x8b7c,	// (0x00035682) scroll_pane_cp25

0x8b95,	// (0x0003569b) list_double2_graphic_pane_cp2_ParamLimits

0x8b95,	// (0x0003569b) list_double2_graphic_pane_cp2

0x8b95,	// (0x0003569b) list_double2_large_graphic_pane_cp2_ParamLimits

0x8b95,	// (0x0003569b) list_double2_large_graphic_pane_cp2

0x8b95,	// (0x0003569b) list_double2_pane_cp2_ParamLimits

0x8b95,	// (0x0003569b) list_double2_pane_cp2

0x8b95,	// (0x0003569b) list_double_graphic_pane_cp2_ParamLimits

0x8b95,	// (0x0003569b) list_double_graphic_pane_cp2

0x8b95,	// (0x0003569b) list_double_large_graphic_pane_cp2_ParamLimits

0x8b95,	// (0x0003569b) list_double_large_graphic_pane_cp2

0x8b95,	// (0x0003569b) list_double_number_pane_cp2_ParamLimits

0x8b95,	// (0x0003569b) list_double_number_pane_cp2

0x8b95,	// (0x0003569b) list_double_pane_cp2_ParamLimits

0x8b95,	// (0x0003569b) list_double_pane_cp2

0x8bb9,	// (0x000356bf) list_single_2graphic_pane_cp2_ParamLimits

0x8bb9,	// (0x000356bf) list_single_2graphic_pane_cp2

0x8bb9,	// (0x000356bf) list_single_graphic_heading_pane_cp2_ParamLimits

0x8bb9,	// (0x000356bf) list_single_graphic_heading_pane_cp2

0x8bb9,	// (0x000356bf) list_single_graphic_pane_cp2_ParamLimits

0x8bb9,	// (0x000356bf) list_single_graphic_pane_cp2

0x8bb9,	// (0x000356bf) list_single_heading_pane_cp2_ParamLimits

0x8bb9,	// (0x000356bf) list_single_heading_pane_cp2

0x8bd2,	// (0x000356d8) list_single_large_graphic_pane_cp2_ParamLimits

0x8bd2,	// (0x000356d8) list_single_large_graphic_pane_cp2

0x8bb9,	// (0x000356bf) list_single_number_heading_pane_cp2_ParamLimits

0x8bb9,	// (0x000356bf) list_single_number_heading_pane_cp2

0x8bb9,	// (0x000356bf) list_single_number_pane_cp2_ParamLimits

0x8bb9,	// (0x000356bf) list_single_number_pane_cp2

0x8be3,	// (0x000356e9) list_single_pane_cp2_ParamLimits

0x8be3,	// (0x000356e9) list_single_pane_cp2

0x8c67,	// (0x0003576d) bg_popup_sub_pane_cp22

0x51ec,	// (0x00031cf2) popup_side_volume_key_window_g1

0x5216,	// (0x00031d1c) popup_side_volume_key_window_t1

0x5232,	// (0x00031d38) volume_small_pane_cp1

0x7cd3,	// (0x000347d9) bg_popup_sub_pane_cp24_ParamLimits

0x7cd3,	// (0x000347d9) bg_popup_sub_pane_cp24

0x8c7d,	// (0x00035783) fep_china_uni_candidate_pane_ParamLimits

0x8c7d,	// (0x00035783) fep_china_uni_candidate_pane

0x8c91,	// (0x00035797) fep_china_uni_entry_pane

0x8ca1,	// (0x000357a7) popup_fep_china_uni_window_g1

0x8cbd,	// (0x000357c3) fep_china_uni_entry_pane_g1

0x8cc5,	// (0x000357cb) fep_china_uni_entry_pane_g2

0x0001,

0xf6fb,	// (0x0003c201) fep_china_uni_entry_pane_g

0x8ccd,	// (0x000357d3) fep_entry_item_pane

0x8cd7,	// (0x000357dd) fep_candidate_item_pane

0x8cdf,	// (0x000357e5) fep_china_uni_candidate_pane_g1

0x8ce7,	// (0x000357ed) fep_china_uni_candidate_pane_g2

0x8cef,	// (0x000357f5) fep_china_uni_candidate_pane_g3

0x8cf7,	// (0x000357fd) fep_china_uni_candidate_pane_g4

0x0003,

0xf700,	// (0x0003c206) fep_china_uni_candidate_pane_g

0x307c,	// (0x0002fb82) fep_entry_item_pane_g1

0x8cff,	// (0x00035805) fep_entry_item_pane_t1_ParamLimits

0x8cff,	// (0x00035805) fep_entry_item_pane_t1

0x8d15,	// (0x0003581b) fep_candidate_item_pane_t1_ParamLimits

0x8d15,	// (0x0003581b) fep_candidate_item_pane_t1

0x8d2a,	// (0x00035830) fep_candidate_item_pane_t2_ParamLimits

0x8d2a,	// (0x00035830) fep_candidate_item_pane_t2

0x0001,

0xf709,	// (0x0003c20f) fep_candidate_item_pane_t_ParamLimits

0xf709,	// (0x0003c20f) fep_candidate_item_pane_t

0x7a58,	// (0x0003455e) list_highlight_pane_cp31_ParamLimits

0x7a58,	// (0x0003455e) list_highlight_pane_cp31

0x8d3c,	// (0x00035842) level_1_signal_lsc

0x8d45,	// (0x0003584b) level_2_signal_lsc

0x8d4e,	// (0x00035854) level_3_signal_lsc

0x8d57,	// (0x0003585d) level_4_signal_lsc

0x8d60,	// (0x00035866) level_5_signal_lsc

0x8d69,	// (0x0003586f) level_6_signal_lsc

0x8d72,	// (0x00035878) level_7_signal_lsc

0x8d72,	// (0x00035878) level_1_battery_lsc

0x8d7b,	// (0x00035881) level_2_battery_lsc

0x8d84,	// (0x0003588a) level_3_battery_lsc

0x8d8d,	// (0x00035893) level_4_battery_lsc

0x8d96,	// (0x0003589c) level_5_battery_lsc

0x8d9f,	// (0x000358a5) level_6_battery_lsc

0x8d3c,	// (0x00035842) level_7_battery_lsc

0x8da8,	// (0x000358ae) scroll_handle_focus_pane_g1

0x8db1,	// (0x000358b7) scroll_handle_focus_pane_g2

0x8dba,	// (0x000358c0) scroll_handle_focus_pane_g3

0x0002,

0xf70e,	// (0x0003c214) scroll_handle_focus_pane_g

0x523a,	// (0x00031d40) list_single_2graphic_pane_g1_ParamLimits

0x523a,	// (0x00031d40) list_single_2graphic_pane_g1

0x497a,	// (0x00031480) list_single_2graphic_pane_g2_ParamLimits

0x497a,	// (0x00031480) list_single_2graphic_pane_g2

0x39f1,	// (0x000304f7) list_single_2graphic_pane_g3_ParamLimits

0x39f1,	// (0x000304f7) list_single_2graphic_pane_g3

0x5246,	// (0x00031d4c) list_single_2graphic_pane_g4_ParamLimits

0x5246,	// (0x00031d4c) list_single_2graphic_pane_g4

0x0003,

0xf715,	// (0x0003c21b) list_single_2graphic_pane_g_ParamLimits

0xf715,	// (0x0003c21b) list_single_2graphic_pane_g

0x5252,	// (0x00031d58) list_single_2graphic_pane_t1_ParamLimits

0x5252,	// (0x00031d58) list_single_2graphic_pane_t1

0x5280,	// (0x00031d86) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5280,	// (0x00031d86) list_double2_graphic_large_graphic_pane_g1

0x49fb,	// (0x00031501) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x49fb,	// (0x00031501) list_double2_graphic_large_graphic_pane_g2

0x4a0c,	// (0x00031512) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4a0c,	// (0x00031512) list_double2_graphic_large_graphic_pane_g3

0x5290,	// (0x00031d96) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5290,	// (0x00031d96) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71e,	// (0x0003c224) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71e,	// (0x0003c224) list_double2_graphic_large_graphic_pane_g

0x529c,	// (0x00031da2) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x529c,	// (0x00031da2) list_double2_graphic_large_graphic_pane_t1

0x52b2,	// (0x00031db8) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x52b2,	// (0x00031db8) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf727,	// (0x0003c22d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf727,	// (0x0003c22d) list_double2_graphic_large_graphic_pane_t

0x8f05,	// (0x00035a0b) popup_fast_swap_window_ParamLimits

0x8f05,	// (0x00035a0b) popup_fast_swap_window

0x8f21,	// (0x00035a27) popup_side_volume_key_window

0x8f3d,	// (0x00035a43) stacon_top_pane

0x8f47,	// (0x00035a4d) status_pane_ParamLimits

0x8f47,	// (0x00035a4d) status_pane

0x3072,	// (0x0002fb78) status_small_pane

0x3086,	// (0x0002fb8c) control_pane

0x3086,	// (0x0002fb8c) stacon_bottom_pane

0x82c8,	// (0x00034dce) scroll_pane_cp121

0x82bf,	// (0x00034dc5) set_content_pane

0x8dc3,	// (0x000358c9) bg_active_tab_pane_g1_cp1

0x8dcc,	// (0x000358d2) bg_active_tab_pane_g2_cp1

0x8dd5,	// (0x000358db) bg_active_tab_pane_g3_cp1

0x8dc3,	// (0x000358c9) bg_passive_tab_pane_g1_cp1

0x8dcc,	// (0x000358d2) bg_passive_tab_pane_g2_cp1

0x8dd5,	// (0x000358db) bg_passive_tab_pane_g3_cp1

0x8dde,	// (0x000358e4) bg_active_tab_pane_g1_cp2

0x8dcc,	// (0x000358d2) bg_active_tab_pane_g2_cp2

0x8de7,	// (0x000358ed) bg_active_tab_pane_g3_cp2

0x8dde,	// (0x000358e4) bg_passive_tab_pane_g1_cp2

0x8dcc,	// (0x000358d2) bg_passive_tab_pane_g2_cp2

0x8de7,	// (0x000358ed) bg_passive_tab_pane_g3_cp2

0x8df0,	// (0x000358f6) bg_active_tab_pane_g1_cp3

0x8dcc,	// (0x000358d2) bg_active_tab_pane_g2_cp3

0x8df9,	// (0x000358ff) bg_active_tab_pane_g3_cp3

0x8df0,	// (0x000358f6) bg_passive_tab_pane_g1_cp3

0x8dcc,	// (0x000358d2) bg_passive_tab_pane_g2_cp3

0x8df9,	// (0x000358ff) bg_passive_tab_pane_g3_cp3

0x8e02,	// (0x00035908) bg_active_tab_pane_g1_cp4

0x8dcc,	// (0x000358d2) bg_active_tab_pane_g2_cp4

0x8e0d,	// (0x00035913) bg_active_tab_pane_g3_cp4

0x8e02,	// (0x00035908) bg_passive_tab_pane_g1_cp4

0x8dcc,	// (0x000358d2) bg_passive_tab_pane_g2_cp4

0x8e0d,	// (0x00035913) bg_passive_tab_pane_g3_cp4

0x8e56,	// (0x0003595c) bg_active_tab_pane_g1_cp5

0x8dcc,	// (0x000358d2) bg_active_tab_pane_g2_cp5

0x8e5f,	// (0x00035965) bg_active_tab_pane_g3_cp5

0x8e56,	// (0x0003595c) bg_passive_tab_pane_g1_cp5

0x8dcc,	// (0x000358d2) bg_passive_tab_pane_g2_cp5

0x8e5f,	// (0x00035965) bg_passive_tab_pane_g3_cp5

0x8e68,	// (0x0003596e) list_set_graphic_pane_ParamLimits

0x8e68,	// (0x0003596e) list_set_graphic_pane

0x3086,	// (0x0002fb8c) bg_set_opt_pane_cp4

0x8e88,	// (0x0003598e) list_set_graphic_pane_g1_ParamLimits

0x8e88,	// (0x0003598e) list_set_graphic_pane_g1

0x8e94,	// (0x0003599a) list_set_graphic_pane_g2_ParamLimits

0x8e94,	// (0x0003599a) list_set_graphic_pane_g2

0x0001,

0xf72c,	// (0x0003c232) list_set_graphic_pane_g_ParamLimits

0xf72c,	// (0x0003c232) list_set_graphic_pane_g

0x0009,

0xfaaf,	// (0x0003c5b5) volume_small_pane_cp_g

0x8eb8,	// (0x000359be) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8eb8,	// (0x000359be) list_double2_large_graphic_pane_g1_cp2

0x8ec4,	// (0x000359ca) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8ec4,	// (0x000359ca) list_double2_large_graphic_pane_g2_cp2

0x8ed5,	// (0x000359db) list_double2_large_graphic_pane_g3_cp2

0x8edd,	// (0x000359e3) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8edd,	// (0x000359e3) list_double2_large_graphic_pane_t1_cp2

0x8ef3,	// (0x000359f9) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8ef3,	// (0x000359f9) list_double2_large_graphic_pane_t2_cp2

0xaad5,	// (0x000375db) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaad5,	// (0x000375db) list_double_large_graphic_pane_g1_cp2

0xaae6,	// (0x000375ec) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaae6,	// (0x000375ec) list_double_large_graphic_pane_g2_cp2

0x9063,	// (0x00035b69) list_double_large_graphic_pane_g3_cp2

0xaaf7,	// (0x000375fd) list_double_large_graphic_pane_g4_cp

0xaaff,	// (0x00037605) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaaff,	// (0x00037605) list_double_large_graphic_pane_t1_cp2

0xab16,	// (0x0003761c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab16,	// (0x0003761c) list_double_large_graphic_pane_t2_cp2

0x8f55,	// (0x00035a5b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f55,	// (0x00035a5b) list_double2_graphic_pane_g1_cp2

0x8f63,	// (0x00035a69) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f63,	// (0x00035a69) list_double2_graphic_pane_g2_cp2

0x8f74,	// (0x00035a7a) list_double2_graphic_pane_g3_cp2

0x8f7e,	// (0x00035a84) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f7e,	// (0x00035a84) list_double2_graphic_pane_t1_cp2

0x8f94,	// (0x00035a9a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f94,	// (0x00035a9a) list_double2_graphic_pane_t2_cp2

0x8fa6,	// (0x00035aac) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fa6,	// (0x00035aac) list_single_number_heading_pane_g1_cp2

0x8fb2,	// (0x00035ab8) list_single_number_heading_pane_g2_cp2

0x8fba,	// (0x00035ac0) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fba,	// (0x00035ac0) list_single_number_heading_pane_t1_cp2

0x8fd0,	// (0x00035ad6) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8fd0,	// (0x00035ad6) list_single_number_heading_pane_t2_cp2

0x8fe2,	// (0x00035ae8) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8fe2,	// (0x00035ae8) list_single_number_heading_pane_t3_cp2

0x8fa6,	// (0x00035aac) list_single_heading_pane_g1_cp2_ParamLimits

0x8fa6,	// (0x00035aac) list_single_heading_pane_g1_cp2

0x8fb2,	// (0x00035ab8) list_single_heading_pane_g2_cp2

0x8fba,	// (0x00035ac0) list_single_heading_pane_t1_cp2_ParamLimits

0x8fba,	// (0x00035ac0) list_single_heading_pane_t1_cp2

0xa8dd,	// (0x000373e3) list_single_heading_pane_t2_cp2_ParamLimits

0xa8dd,	// (0x000373e3) list_single_heading_pane_t2_cp2

0xa825,	// (0x0003732b) list_double_graphic_pane_g1_cp2_ParamLimits

0xa825,	// (0x0003732b) list_double_graphic_pane_g1_cp2

0xa831,	// (0x00037337) list_double_graphic_pane_g2_cp2_ParamLimits

0xa831,	// (0x00037337) list_double_graphic_pane_g2_cp2

0xa840,	// (0x00037346) list_double_graphic_pane_g3_cp2

0xa848,	// (0x0003734e) list_double_graphic_pane_t1_cp2_ParamLimits

0xa848,	// (0x0003734e) list_double_graphic_pane_t1_cp2

0xa85e,	// (0x00037364) list_double_graphic_pane_t2_cp2_ParamLimits

0xa85e,	// (0x00037364) list_double_graphic_pane_t2_cp2

0x9057,	// (0x00035b5d) list_double_number_pane_g1_cp2_ParamLimits

0x9057,	// (0x00035b5d) list_double_number_pane_g1_cp2

0x9063,	// (0x00035b69) list_double_number_pane_g2_cp2

0xa7e9,	// (0x000372ef) list_double_number_pane_t1_cp2_ParamLimits

0xa7e9,	// (0x000372ef) list_double_number_pane_t1_cp2

0xa7fd,	// (0x00037303) list_double_number_pane_t2_cp2_ParamLimits

0xa7fd,	// (0x00037303) list_double_number_pane_t2_cp2

0xa813,	// (0x00037319) list_double_number_pane_t3_cp2_ParamLimits

0xa813,	// (0x00037319) list_double_number_pane_t3_cp2

0xa6d2,	// (0x000371d8) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6d2,	// (0x000371d8) list_single_graphic_pane_g1_cp2

0x90c8,	// (0x00035bce) list_single_graphic_pane_g2_cp2_ParamLimits

0x90c8,	// (0x00035bce) list_single_graphic_pane_g2_cp2

0x90d4,	// (0x00035bda) list_single_graphic_pane_g3_cp2

0xa6a8,	// (0x000371ae) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6a8,	// (0x000371ae) list_single_graphic_pane_t1_cp2

0x90c8,	// (0x00035bce) list_single_number_pane_g1_cp2_ParamLimits

0x90c8,	// (0x00035bce) list_single_number_pane_g1_cp2

0x90d4,	// (0x00035bda) list_single_number_pane_g2_cp2

0xa6a8,	// (0x000371ae) list_single_number_pane_t1_cp2_ParamLimits

0xa6a8,	// (0x000371ae) list_single_number_pane_t1_cp2

0xa6be,	// (0x000371c4) list_single_number_pane_t2_cp2_ParamLimits

0xa6be,	// (0x000371c4) list_single_number_pane_t2_cp2

0x8ec4,	// (0x000359ca) list_double2_pane_g1_cp2_ParamLimits

0x8ec4,	// (0x000359ca) list_double2_pane_g1_cp2

0x8ed5,	// (0x000359db) list_double2_pane_g2_cp2

0x902f,	// (0x00035b35) list_double2_pane_t1_cp2_ParamLimits

0x902f,	// (0x00035b35) list_double2_pane_t1_cp2

0x9045,	// (0x00035b4b) list_double2_pane_t2_cp2_ParamLimits

0x9045,	// (0x00035b4b) list_double2_pane_t2_cp2

0x9057,	// (0x00035b5d) list_double_pane_g1_cp2_ParamLimits

0x9057,	// (0x00035b5d) list_double_pane_g1_cp2

0x9063,	// (0x00035b69) list_double_pane_g2_cp2

0x906b,	// (0x00035b71) list_double_pane_t1_cp2_ParamLimits

0x906b,	// (0x00035b71) list_double_pane_t1_cp2

0x9081,	// (0x00035b87) list_double_pane_t2_cp2_ParamLimits

0x9081,	// (0x00035b87) list_double_pane_t2_cp2

0x90b8,	// (0x00035bbe) list_single_pane_cp2_g3

0x90c8,	// (0x00035bce) list_single_pane_g1_cp2_ParamLimits

0x90c8,	// (0x00035bce) list_single_pane_g1_cp2

0x90d4,	// (0x00035bda) list_single_pane_g2_cp2

0x90dc,	// (0x00035be2) list_single_pane_t1_cp2_ParamLimits

0x90dc,	// (0x00035be2) list_single_pane_t1_cp2

0x90f4,	// (0x00035bfa) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90f4,	// (0x00035bfa) list_single_large_graphic_pane_g1_cp2

0x9100,	// (0x00035c06) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9100,	// (0x00035c06) list_single_large_graphic_pane_g2_cp2

0x910c,	// (0x00035c12) list_single_large_graphic_pane_g3_cp2

0x9114,	// (0x00035c1a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9114,	// (0x00035c1a) list_single_large_graphic_pane_g4_cp1

0x912e,	// (0x00035c34) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x912e,	// (0x00035c34) list_single_large_graphic_pane_t1_cp2

0xa674,	// (0x0003717a) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa674,	// (0x0003717a) list_single_graphic_heading_pane_g1_cp2

0xa641,	// (0x00037147) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa641,	// (0x00037147) list_single_graphic_heading_pane_g4_cp2

0x90d4,	// (0x00035bda) list_single_graphic_heading_pane_g5_cp2

0xa680,	// (0x00037186) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa680,	// (0x00037186) list_single_graphic_heading_pane_t1_cp2

0xa696,	// (0x0003719c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa696,	// (0x0003719c) list_single_graphic_heading_pane_t2_cp2

0xa635,	// (0x0003713b) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa635,	// (0x0003713b) list_single_2graphic_pane_g1_cp2

0xa641,	// (0x00037147) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa641,	// (0x00037147) list_single_2graphic_pane_g2_cp2

0x90d4,	// (0x00035bda) list_single_2graphic_pane_g3_cp2

0xa652,	// (0x00037158) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa652,	// (0x00037158) list_single_2graphic_pane_g4_cp2

0xa65e,	// (0x00037164) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa65e,	// (0x00037164) list_single_2graphic_pane_t1_cp2

0x307c,	// (0x0002fb82) list_highlight_pane_g10_cp1

0xa20d,	// (0x00036d13) list_highlight_pane_g1_cp1

0xa215,	// (0x00036d1b) list_highlight_pane_g2_cp1

0xa21d,	// (0x00036d23) list_highlight_pane_g3_cp1

0xa225,	// (0x00036d2b) list_highlight_pane_g4_cp1

0xa22d,	// (0x00036d33) list_highlight_pane_g5_cp1

0xa235,	// (0x00036d3b) list_highlight_pane_g6_cp1

0xa23d,	// (0x00036d43) list_highlight_pane_g7_cp1

0xa245,	// (0x00036d4b) list_highlight_pane_g8_cp1

0xa24d,	// (0x00036d53) list_highlight_pane_g9_cp1

0xa12d,	// (0x00036c33) form_field_slider_pane_t3

0xa13b,	// (0x00036c41) form_field_slider_pane_t4

0xa149,	// (0x00036c4f) slider_form_pane_ParamLimits

0xa149,	// (0x00036c4f) slider_form_pane

0x3086,	// (0x0002fb8c) control_abbreviations

0x3086,	// (0x0002fb8c) control_conventions

0x3086,	// (0x0002fb8c) control_definitions

0x3086,	// (0x0002fb8c) format_table_attribute

0xa927,	// (0x0003742d) bg_popup_preview_window_pane_g9

0x3086,	// (0x0002fb8c) format_table_data2

0x3086,	// (0x0002fb8c) format_table_data3

0x3086,	// (0x0002fb8c) format_table_data_example

0x0008,

0x3086,	// (0x0002fb8c) intro_purpose

0xf8c8,	// (0x0003c3ce) bg_popup_preview_window_pane_g

0x3086,	// (0x0002fb8c) texts_category

0x3086,	// (0x0002fb8c) texts_graphics

0x9144,	// (0x00035c4a) text_digital

0x9153,	// (0x00035c59) text_primary

0x9162,	// (0x00035c68) text_primary_small

0x9171,	// (0x00035c77) text_secondary

0x9180,	// (0x00035c86) text_title

0xb05a,	// (0x00037b60) bg_passive_tab_pane_g1_cp3_srt

0x8dcc,	// (0x000358d2) bg_passive_tab_pane_g2_cp3_srt

0xb063,	// (0x00037b69) bg_passive_tab_pane_g3_cp3_srt

0x7a58,	// (0x0003455e) bg_active_tab_pane_cp3_srt_ParamLimits

0x7a58,	// (0x0003455e) bg_active_tab_pane_cp3_srt

0xb06c,	// (0x00037b72) tabs_4_active_pane_srt_g1

0xb074,	// (0x00037b7a) tabs_4_active_pane_srt_t1_ParamLimits

0xb074,	// (0x00037b7a) tabs_4_active_pane_srt_t1

0xb05a,	// (0x00037b60) bg_active_tab_pane_g1_cp3_copy1

0x8dcc,	// (0x000358d2) bg_active_tab_pane_g2_cp3_copy1

0xb063,	// (0x00037b69) bg_active_tab_pane_g3_cp3_copy1

0x7a58,	// (0x0003455e) tabs_2_long_active_pane_srt_ParamLimits

0x7a58,	// (0x0003455e) tabs_2_long_active_pane_srt

0x7a58,	// (0x0003455e) tabs_2_long_passive_pane_srt_ParamLimits

0x7a58,	// (0x0003455e) tabs_2_long_passive_pane_srt

0x84d9,	// (0x00034fdf) bg_passive_tab_pane_cp4_srt_ParamLimits

0x84d9,	// (0x00034fdf) bg_passive_tab_pane_cp4_srt

0xad45,	// (0x0003784b) bg_passive_tab_pane_g1_cp4_srt

0x8dcc,	// (0x000358d2) bg_passive_tab_pane_g2_cp4_srt

0xad4e,	// (0x00037854) bg_passive_tab_pane_g3_cp4_srt

0x84b8,	// (0x00034fbe) bg_active_tab_pane_cp4_srt_ParamLimits

0x84b8,	// (0x00034fbe) bg_active_tab_pane_cp4_srt

0xad57,	// (0x0003785d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad57,	// (0x0003785d) tabs_2_long_active_pane_srt_t1

0xad45,	// (0x0003784b) bg_active_tab_pane_g1_cp4_srt

0x8dcc,	// (0x000358d2) bg_active_tab_pane_g2_cp4_srt

0xad4e,	// (0x00037854) bg_active_tab_pane_g3_cp4_srt

0x7cd3,	// (0x000347d9) tabs_3_long_active_pane_srt_ParamLimits

0x7cd3,	// (0x000347d9) tabs_3_long_active_pane_srt

0x7cd3,	// (0x000347d9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7cd3,	// (0x000347d9) tabs_3_long_passive_pane_cp_srt

0x7cd3,	// (0x000347d9) tabs_3_long_passive_pane_srt_ParamLimits

0x7cd3,	// (0x000347d9) tabs_3_long_passive_pane_srt

0x84d9,	// (0x00034fdf) bg_passive_tab_pane_cp5_srt_ParamLimits

0x84d9,	// (0x00034fdf) bg_passive_tab_pane_cp5_srt

0x8e56,	// (0x0003595c) bg_passive_tab_pane_g1_cp5_srt

0x8dcc,	// (0x000358d2) bg_passive_tab_pane_g2_cp5_srt

0x8e5f,	// (0x00035965) bg_passive_tab_pane_g3_cp5_srt

0x84b8,	// (0x00034fbe) bg_active_tab_pane_cp5_srt_ParamLimits

0x84b8,	// (0x00034fbe) bg_active_tab_pane_cp5_srt

0xad33,	// (0x00037839) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad33,	// (0x00037839) tabs_3_long_active_pane_srt_t1

0x8e56,	// (0x0003595c) bg_active_tab_pane_g1_cp5_srt

0x8dcc,	// (0x000358d2) bg_active_tab_pane_g2_cp5_srt

0x8e5f,	// (0x00035965) bg_active_tab_pane_g3_cp5_srt

0xad25,	// (0x0003782b) navi_text_pane_srt_t1

0xad1d,	// (0x00037823) navi_icon_pane_srt_g1

0x9355,	// (0x00035e5b) midp_editing_number_pane_srt

0x918f,	// (0x00035c95) midp_ticker_pane_srt

0x935d,	// (0x00035e63) midp_ticker_pane_srt_g1

0x9365,	// (0x00035e6b) midp_ticker_pane_srt_g2

0x0001,

0xf74b,	// (0x0003c251) midp_ticker_pane_srt_g

0x936d,	// (0x00035e73) midp_ticker_pane_srt_t1

0xad0e,	// (0x00037814) midp_editing_number_pane_t1_copy1

0x9197,	// (0x00035c9d) listscroll_midp_pane

0x9197,	// (0x00035c9d) midp_form_pane

0x9207,	// (0x00035d0d) midp_info_popup_window_ParamLimits

0x9207,	// (0x00035d0d) midp_info_popup_window

0x8404,	// (0x00034f0a) bg_popup_sub_pane_cp50_ParamLimits

0x8404,	// (0x00034f0a) bg_popup_sub_pane_cp50

0x9e31,	// (0x00036937) listscroll_midp_info_pane_ParamLimits

0x9e31,	// (0x00036937) listscroll_midp_info_pane

0x9e11,	// (0x00036917) listscroll_form_midp_pane_ParamLimits

0x9e11,	// (0x00036917) listscroll_form_midp_pane

0x9e1d,	// (0x00036923) scroll_bar_cp050

0x9df1,	// (0x000368f7) list_midp_pane

0xbae4,	// (0x000385ea) signal_pane_g2_cp

0x9d2b,	// (0x00036831) listscroll_midp_info_pane_t1_ParamLimits

0x9d2b,	// (0x00036831) listscroll_midp_info_pane_t1

0x9d43,	// (0x00036849) listscroll_midp_info_pane_t2_ParamLimits

0x9d43,	// (0x00036849) listscroll_midp_info_pane_t2

0x9d81,	// (0x00036887) listscroll_midp_info_pane_t3_ParamLimits

0x9d81,	// (0x00036887) listscroll_midp_info_pane_t3

0x9dbb,	// (0x000368c1) listscroll_midp_info_pane_t4_ParamLimits

0x9dbb,	// (0x000368c1) listscroll_midp_info_pane_t4

0x0003,

0xf803,	// (0x0003c309) listscroll_midp_info_pane_t_ParamLimits

0xf803,	// (0x0003c309) listscroll_midp_info_pane_t

0x8465,	// (0x00034f6b) scroll_pane_cp21

0x9cc9,	// (0x000367cf) form_midp_field_choice_group_pane

0x9cd2,	// (0x000367d8) form_midp_field_text_pane

0x9d11,	// (0x00036817) form_midp_field_time_pane

0x9d19,	// (0x0003681f) form_midp_gauge_slider_pane

0x9d22,	// (0x00036828) form_midp_gauge_wait_pane

0x3086,	// (0x0002fb8c) form_midp_image_pane

0x5e2c,	// (0x00032932) list_single_midp_pane_ParamLimits

0x5e2c,	// (0x00032932) list_single_midp_pane

0x9c81,	// (0x00036787) form_midp_field_text_pane_t1

0x9a51,	// (0x00036557) input_focus_pane_cp050

0x9cb8,	// (0x000367be) list_midp_form_text_pane

0x9c50,	// (0x00036756) form_midp_field_choice_group_pane_t1

0x9c5e,	// (0x00036764) input_focus_pane_cp051

0x9c72,	// (0x00036778) list_midp_choice_pane

0x3086,	// (0x0002fb8c) status_idle_pane

0x9c34,	// (0x0003673a) form_midp_field_time_pane_t1

0x307c,	// (0x0002fb82) wait_anim_pane_g2_copy1

0x9c42,	// (0x00036748) form_midp_field_time_pane_t2

0x0001,

0x92b5,	// (0x00035dbb) aid_navinavi_width_2_pane

0xf7fe,	// (0x0003c304) form_midp_field_time_pane_t

0x3086,	// (0x0002fb8c) input_focus_pane_cp052

0x3086,	// (0x0002fb8c) bg_input_focus_pane_cp040

0x9bf4,	// (0x000366fa) form_midp_gauge_slider_pane_t1

0x9c02,	// (0x00036708) form_midp_gauge_slider_pane_t2

0x9c10,	// (0x00036716) form_midp_gauge_slider_pane_t3

0x9c1e,	// (0x00036724) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f5,	// (0x0003c2fb) form_midp_gauge_slider_pane_t

0x9c2c,	// (0x00036732) form_midp_slider_pane

0x7a58,	// (0x0003455e) bg_input_focus_pane_cp041_ParamLimits

0x7a58,	// (0x0003455e) bg_input_focus_pane_cp041

0x9bc1,	// (0x000366c7) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bc1,	// (0x000366c7) form_midp_gauge_wait_pane_t1

0x9bd3,	// (0x000366d9) form_midp_gauge_wait_pane_t2_ParamLimits

0x9bd3,	// (0x000366d9) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f0,	// (0x0003c2f6) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f0,	// (0x0003c2f6) form_midp_gauge_wait_pane_t

0x9be5,	// (0x000366eb) form_midp_wait_pane_ParamLimits

0x9be5,	// (0x000366eb) form_midp_wait_pane

0x9b8b,	// (0x00036691) form_midp_image_pane_g1

0x9b94,	// (0x0003669a) form_midp_image_pane_t1

0x9ba3,	// (0x000366a9) form_midp_image_pane_t2

0x9bb2,	// (0x000366b8) form_midp_image_pane_t3

0x0002,

0xf7e9,	// (0x0003c2ef) form_midp_image_pane_t

0x9b82,	// (0x00036688) list_single_midp_pane_g1

0x5e1d,	// (0x00032923) list_single_midp_pane_t1

0x9b5a,	// (0x00036660) list_midp_form_item_pane_ParamLimits

0x9b5a,	// (0x00036660) list_midp_form_item_pane

0x925d,	// (0x00035d63) list_midp_form_item_pane_t1

0x926c,	// (0x00035d72) midp_ticker_pane_g1

0x9278,	// (0x00035d7e) midp_ticker_pane_g2

0x0001,

0xf731,	// (0x0003c237) midp_ticker_pane_g

0x9284,	// (0x00035d8a) midp_ticker_pane_t1

0xaf5f,	// (0x00037a65) midp_editing_number_pane_t1

0xaf3d,	// (0x00037a43) midp_editing_number_pane

0xaf4c,	// (0x00037a52) midp_ticker_pane

0x9e3d,	// (0x00036943) ai_message_heading_pane

0x3086,	// (0x0002fb8c) bg_popup_window_pane_cp14

0x9e45,	// (0x0003694b) listscroll_ai_message_pane

0xac98,	// (0x0003779e) ai_message_heading_pane_g1_ParamLimits

0xac98,	// (0x0003779e) ai_message_heading_pane_g1

0xaca4,	// (0x000377aa) ai_message_heading_pane_g2_ParamLimits

0xaca4,	// (0x000377aa) ai_message_heading_pane_g2

0xacb0,	// (0x000377b6) ai_message_heading_pane_g3_ParamLimits

0xacb0,	// (0x000377b6) ai_message_heading_pane_g3

0xacbc,	// (0x000377c2) ai_message_heading_pane_g4_ParamLimits

0xacbc,	// (0x000377c2) ai_message_heading_pane_g4

0x0003,

0xf92a,	// (0x0003c430) ai_message_heading_pane_g_ParamLimits

0xf92a,	// (0x0003c430) ai_message_heading_pane_g

0xacc8,	// (0x000377ce) ai_message_heading_pane_t1_ParamLimits

0xacc8,	// (0x000377ce) ai_message_heading_pane_t1

0xace2,	// (0x000377e8) ai_message_heading_pane_t2_ParamLimits

0xace2,	// (0x000377e8) ai_message_heading_pane_t2

0x0001,

0xf933,	// (0x0003c439) ai_message_heading_pane_t_ParamLimits

0xf933,	// (0x0003c439) ai_message_heading_pane_t

0xacf4,	// (0x000377fa) bg_popup_heading_pane_cp1_ParamLimits

0xacf4,	// (0x000377fa) bg_popup_heading_pane_cp1

0xac86,	// (0x0003778c) list_ai_message_pane_ParamLimits

0xac86,	// (0x0003778c) list_ai_message_pane

0x8465,	// (0x00034f6b) scroll_pane_cp10

0xac22,	// (0x00037728) list_ai_message_pane_g1

0xac2a,	// (0x00037730) list_ai_message_pane_g2

0x0001,

0xf907,	// (0x0003c40d) list_ai_message_pane_g

0xac32,	// (0x00037738) list_ai_message_pane_t1_ParamLimits

0xac32,	// (0x00037738) list_ai_message_pane_t1

0xac47,	// (0x0003774d) list_ai_message_pane_t2_ParamLimits

0xac47,	// (0x0003774d) list_ai_message_pane_t2

0xac5c,	// (0x00037762) list_ai_message_pane_t3_ParamLimits

0xac5c,	// (0x00037762) list_ai_message_pane_t3

0xac71,	// (0x00037777) list_ai_message_pane_t4_ParamLimits

0xac71,	// (0x00037777) list_ai_message_pane_t4

0x0003,

0xf90c,	// (0x0003c412) list_ai_message_pane_t_ParamLimits

0xf90c,	// (0x0003c412) list_ai_message_pane_t

0xac0d,	// (0x00037713) cell_ai_soft_ind_pane_ParamLimits

0xac0d,	// (0x00037713) cell_ai_soft_ind_pane

0x9296,	// (0x00035d9c) cell_ai_soft_ind_pane_g1_ParamLimits

0x9296,	// (0x00035d9c) cell_ai_soft_ind_pane_g1

0x3086,	// (0x0002fb8c) grid_highlight_cp1

0x92a3,	// (0x00035da9) text_secondary_cp56_ParamLimits

0x92a3,	// (0x00035da9) text_secondary_cp56

0xabe2,	// (0x000376e8) example_general_pane_ParamLimits

0xabe2,	// (0x000376e8) example_general_pane

0xabee,	// (0x000376f4) example_parent_pane_g1_ParamLimits

0xabee,	// (0x000376f4) example_parent_pane_g1

0xabfa,	// (0x00037700) example_parent_pane_t1_ParamLimits

0xabfa,	// (0x00037700) example_parent_pane_t1

0x59bd,	// (0x000324c3) popup_preview_text_window_ParamLimits

0x59bd,	// (0x000324c3) popup_preview_text_window

0x90c0,	// (0x00035bc6) list_single_pane_cp2_g4

0x7daf,	// (0x000348b5) bg_popup_preview_window_pane_ParamLimits

0x7daf,	// (0x000348b5) bg_popup_preview_window_pane

0xa92f,	// (0x00037435) popup_preview_text_window_t1_ParamLimits

0xa92f,	// (0x00037435) popup_preview_text_window_t1

0xa94d,	// (0x00037453) popup_preview_text_window_t2_ParamLimits

0xa94d,	// (0x00037453) popup_preview_text_window_t2

0xa996,	// (0x0003749c) popup_preview_text_window_t3_ParamLimits

0xa996,	// (0x0003749c) popup_preview_text_window_t3

0xa9db,	// (0x000374e1) popup_preview_text_window_t4_ParamLimits

0xa9db,	// (0x000374e1) popup_preview_text_window_t4

0x0004,

0xf8db,	// (0x0003c3e1) popup_preview_text_window_t_ParamLimits

0xf8db,	// (0x0003c3e1) popup_preview_text_window_t

0xaa59,	// (0x0003755f) scroll_pane_cp11

0x99dd,	// (0x000364e3) bg_popup_preview_window_pane_g1

0xa8ef,	// (0x000373f5) bg_popup_preview_window_pane_g2

0xa8f7,	// (0x000373fd) bg_popup_preview_window_pane_g3

0xa8ff,	// (0x00037405) bg_popup_preview_window_pane_g4

0xa907,	// (0x0003740d) bg_popup_preview_window_pane_g5

0xa90f,	// (0x00037415) bg_popup_preview_window_pane_g6

0xa917,	// (0x0003741d) bg_popup_preview_window_pane_g7

0xa91f,	// (0x00037425) bg_popup_preview_window_pane_g8

0x44a6,	// (0x00030fac) aid_popup_width_pane

0x599b,	// (0x000324a1) popup_midp_note_alarm_window_ParamLimits

0x599b,	// (0x000324a1) popup_midp_note_alarm_window

0x82d9,	// (0x00034ddf) data_form_pane_ParamLimits

0x4de6,	// (0x000318ec) form_field_data_pane_g1

0x4df0,	// (0x000318f6) form_field_data_pane_t1_ParamLimits

0x82e5,	// (0x00034deb) input_focus_pane_ParamLimits

0x4e08,	// (0x0003190e) data_form_wide_pane_ParamLimits

0x4e19,	// (0x0003191f) form_field_data_wide_pane_g1

0x4e25,	// (0x0003192b) form_field_data_wide_pane_t1_ParamLimits

0x8056,	// (0x00034b5c) input_focus_pane_cp6_ParamLimits

0x8412,	// (0x00034f18) input_popup_find_pane_g1_ParamLimits

0x8412,	// (0x00034f18) input_popup_find_pane_g1

0x509b,	// (0x00031ba1) aid_navi_side_left_pane

0x50b0,	// (0x00031bb6) aid_navi_side_right_pane

0xa308,	// (0x00036e0e) bg_popup_window_pane_cp30_ParamLimits

0xa308,	// (0x00036e0e) bg_popup_window_pane_cp30

0xa382,	// (0x00036e88) popup_midp_note_alarm_window_g1_ParamLimits

0xa382,	// (0x00036e88) popup_midp_note_alarm_window_g1

0xa3b2,	// (0x00036eb8) popup_midp_note_alarm_window_t1_ParamLimits

0xa3b2,	// (0x00036eb8) popup_midp_note_alarm_window_t1

0xa453,	// (0x00036f59) popup_midp_note_alarm_window_t2_ParamLimits

0xa453,	// (0x00036f59) popup_midp_note_alarm_window_t2

0xa501,	// (0x00037007) popup_midp_note_alarm_window_t3_ParamLimits

0xa501,	// (0x00037007) popup_midp_note_alarm_window_t3

0xa533,	// (0x00037039) popup_midp_note_alarm_window_t4_ParamLimits

0xa533,	// (0x00037039) popup_midp_note_alarm_window_t4

0xa559,	// (0x0003705f) popup_midp_note_alarm_window_t5_ParamLimits

0xa559,	// (0x0003705f) popup_midp_note_alarm_window_t5

0x000a,

0xf878,	// (0x0003c37e) popup_midp_note_alarm_window_t_ParamLimits

0xf878,	// (0x0003c37e) popup_midp_note_alarm_window_t

0xa605,	// (0x0003710b) wait_bar_pane_cp1_ParamLimits

0xa605,	// (0x0003710b) wait_bar_pane_cp1

0x3086,	// (0x0002fb8c) wait_anim_pane_copy1

0x3086,	// (0x0002fb8c) wait_border_pane_copy1

0x9fee,	// (0x00036af4) wait_border_pane_g1_copy1

0x4e3f,	// (0x00031945) form_field_popup_pane_g1

0x4e47,	// (0x0003194d) form_field_popup_pane_t1_ParamLimits

0x82e5,	// (0x00034deb) input_focus_pane_cp7_ParamLimits

0x8313,	// (0x00034e19) list_form_pane_ParamLimits

0x4e5f,	// (0x00031965) form_field_popup_wide_pane_g1

0x4e67,	// (0x0003196d) form_field_popup_wide_pane_t1_ParamLimits

0x82e5,	// (0x00034deb) input_focus_pane_cp8_ParamLimits

0x831f,	// (0x00034e25) list_form_wide_pane_ParamLimits

0xb0ff,	// (0x00037c05) aid_size_cell_graphic_pane

0x4ef1,	// (0x000319f7) data_form_pane_t1_ParamLimits

0x60b2,	// (0x00032bb8) data_form_wide_pane_t1_ParamLimits

0x95a4,	// (0x000360aa) bg_status_flat_pane

0x79b8,	// (0x000344be) title_pane_t1_ParamLimits

0x7a20,	// (0x00034526) title_pane_t2_ParamLimits

0x7a46,	// (0x0003454c) title_pane_t3_ParamLimits

0xf530,	// (0x0003c036) title_pane_t_ParamLimits

0x8aca,	// (0x000355d0) level_1_signal_ParamLimits

0x8adc,	// (0x000355e2) level_2_signal_ParamLimits

0x8aef,	// (0x000355f5) level_3_signal_ParamLimits

0x8b02,	// (0x00035608) level_4_signal_ParamLimits

0x8b15,	// (0x0003561b) level_5_signal_ParamLimits

0x8b28,	// (0x0003562e) level_6_signal_ParamLimits

0x8b3b,	// (0x00035641) level_7_signal_ParamLimits

0x8aca,	// (0x000355d0) level_1_battery_ParamLimits

0x8adc,	// (0x000355e2) level_2_battery_ParamLimits

0x8aef,	// (0x000355f5) level_3_battery_ParamLimits

0x8b02,	// (0x00035608) level_4_battery_ParamLimits

0x8b15,	// (0x0003561b) level_5_battery_ParamLimits

0x8b28,	// (0x0003562e) level_6_battery_ParamLimits

0x8b3b,	// (0x00035641) level_7_battery_ParamLimits

0xa20d,	// (0x00036d13) bg_status_flat_pane_g1

0xa215,	// (0x00036d1b) bg_status_flat_pane_g2

0xa21d,	// (0x00036d23) bg_status_flat_pane_g3

0xa225,	// (0x00036d2b) bg_status_flat_pane_g4

0xa22d,	// (0x00036d33) bg_status_flat_pane_g5

0xa235,	// (0x00036d3b) bg_status_flat_pane_g6

0xa23d,	// (0x00036d43) bg_status_flat_pane_g7

0x7a6e,	// (0x00034574) tabs_3_active_pane_t1_ParamLimits

0x7a6e,	// (0x00034574) tabs_3_passive_pane_t1_ParamLimits

0x7a88,	// (0x0003458e) tabs_4_active_pane_t1_ParamLimits

0x7a88,	// (0x0003458e) tabs_4_1_passive_pane_t1_ParamLimits

0x84a6,	// (0x00034fac) tabs_2_active_pane_t1_ParamLimits

0x84a6,	// (0x00034fac) tabs_2_passive_pane_t1_ParamLimits

0x84b8,	// (0x00034fbe) bg_active_tab_pane_cp4_ParamLimits

0x84c6,	// (0x00034fcc) tabs_2_long_active_pane_t1_ParamLimits

0x84d9,	// (0x00034fdf) bg_passive_tab_pane_cp4_ParamLimits

0x5cf4,	// (0x000327fa) list_single_midp_graphic_pane_t1_ParamLimits

0x84b8,	// (0x00034fbe) bg_active_tab_pane_cp5_ParamLimits

0x84e5,	// (0x00034feb) tabs_3_long_active_pane_t1_ParamLimits

0x84d9,	// (0x00034fdf) bg_passive_tab_pane_cp5_ParamLimits

0x5cf4,	// (0x000327fa) list_single_midp_graphic_pane_t1

0x95a4,	// (0x000360aa) bg_status_flat_pane_ParamLimits

0x966d,	// (0x00036173) indicator_pane_cp2_ParamLimits

0x966d,	// (0x00036173) indicator_pane_cp2

0x9798,	// (0x0003629e) navi_pane_srt_ParamLimits

0x9798,	// (0x0003629e) navi_pane_srt

0x97bc,	// (0x000362c2) popup_clock_digital_analogue_window_cp1

0x7b35,	// (0x0003463b) indicator_pane_t1

0x918f,	// (0x00035c95) copy_highlight_pane

0x918f,	// (0x00035c95) cursor_graphics_pane

0x918f,	// (0x00035c95) graphic_within_text_pane

0x918f,	// (0x00035c95) link_highlight_pane

0xaa1c,	// (0x00037522) popup_preview_text_window_t5_ParamLimits

0xaa1c,	// (0x00037522) popup_preview_text_window_t5

0x92bd,	// (0x00035dc3) cursor_digital_pane

0x92bd,	// (0x00035dc3) cursor_primary_pane

0x92ce,	// (0x00035dd4) cursor_primary_small_pane

0x92d6,	// (0x00035ddc) cursor_secondary_pane

0x92de,	// (0x00035de4) cursor_title_pane

0x92bd,	// (0x00035dc3) link_highlight_digital_pane

0x92c5,	// (0x00035dcb) link_highlight_primary_pane

0x92ce,	// (0x00035dd4) link_highlight_primary_small_pane

0x92d6,	// (0x00035ddc) link_highlight_secondary_pane

0x92de,	// (0x00035de4) link_highlight_title_pane

0x92bd,	// (0x00035dc3) copy_highlight_digital_pane

0x92bd,	// (0x00035dc3) copy_highlight_primary_pane

0x92ce,	// (0x00035dd4) copy_highlight_primary_small_pane

0x92d6,	// (0x00035ddc) copy_highlight_secondary_pane

0x92de,	// (0x00035de4) copy_highlight_title_pane

0x92d6,	// (0x00035ddc) graphic_text_digital_pane

0xa2ab,	// (0x00036db1) graphic_text_primary_pane

0xa2b4,	// (0x00036dba) graphic_text_primary_small_pane

0x92ce,	// (0x00035dd4) graphic_text_secondary_pane

0x92bd,	// (0x00035dc3) graphic_text_title_pane

0x92e6,	// (0x00035dec) cursor_primary_pane_g1

0xa29d,	// (0x00036da3) cursor_text_primary_t1

0xa285,	// (0x00036d8b) cursor_primary_small_pane_g1

0xa28f,	// (0x00036d95) cursor_text_primary_small_t1

0xa26d,	// (0x00036d73) cursor_primary_small_pane_g1_copy1

0xa277,	// (0x00036d7d) cursor_text_primary_small_t1_copy1

0xa255,	// (0x00036d5b) cursor_text_title_t1

0xa263,	// (0x00036d69) cursor_title_pane_g1

0x92e6,	// (0x00035dec) cursor_digital_pane_g1

0x92f0,	// (0x00035df6) cursor_text_digital_t1

0x9315,	// (0x00035e1b) link_highlight_primary_pane_g1

0xa1fe,	// (0x00036d04) link_highlight_primary_pane_t1

0x92fe,	// (0x00035e04) link_highlight_primary_small_pane_g1

0x9306,	// (0x00035e0c) link_highlight_primary_small_pane_t1

0x9315,	// (0x00035e1b) link_highlight_secondary_pane_g1

0x931d,	// (0x00035e23) link_highlight_secondary_pane_t1

0xa172,	// (0x00036c78) link_highlight_title_pane_g1

0xa17a,	// (0x00036c80) link_highlight_title_pane_t1

0xa15b,	// (0x00036c61) link_highlight_digital_pane_g1

0xa163,	// (0x00036c69) link_highlight_digital_pane_t1

0xa033,	// (0x00036b39) copy_highlight_primary_pane_g1

0xa03b,	// (0x00036b41) copy_highlight_primary_pane_t1

0xa00d,	// (0x00036b13) copy_highlight_primary_small_pane_g1

0xa024,	// (0x00036b2a) copy_highlight_primary_small_pane_t1

0x932c,	// (0x00035e32) copy_highlight_secondary_pane_g1

0x9334,	// (0x00035e3a) copy_highlight_secondary_pane_t1

0xa00d,	// (0x00036b13) copy_highlight_title_pane_g1

0xa015,	// (0x00036b1b) copy_highlight_title_pane_t1

0xa033,	// (0x00036b39) copy_highlight_digital_pane_g1

0xb2cd,	// (0x00037dd3) copy_highlight_digital_pane_t1

0xb221,	// (0x00037d27) graphic_text_primary_pane_g1

0xb2b1,	// (0x00037db7) graphic_text_primary_pane_t1

0xb2bf,	// (0x00037dc5) graphic_text_primary_pane_t2

0x0001,

0xf9a7,	// (0x0003c4ad) graphic_text_primary_pane_t

0xb28d,	// (0x00037d93) graphic_text_primary_small_pane_g1

0xb295,	// (0x00037d9b) graphic_text_primary_small_pane_t1

0xb2a3,	// (0x00037da9) graphic_text_primary_small_pane_t2

0x0001,

0xf9a2,	// (0x0003c4a8) graphic_text_primary_small_pane_t

0xb269,	// (0x00037d6f) graphic_text_secondary_pane_g1

0xb271,	// (0x00037d77) graphic_text_secondary_pane_t1

0xb27f,	// (0x00037d85) graphic_text_secondary_pane_t2

0x0001,

0xf99d,	// (0x0003c4a3) graphic_text_secondary_pane_t

0xb245,	// (0x00037d4b) graphic_text_title_pane_g1

0xb24d,	// (0x00037d53) graphic_text_title_pane_t1

0xb25b,	// (0x00037d61) graphic_text_title_pane_t2

0x0001,

0xf998,	// (0x0003c49e) graphic_text_title_pane_t

0xb221,	// (0x00037d27) graphic_text_digital_pane_g1

0xb229,	// (0x00037d2f) graphic_text_digital_pane_t1

0xb237,	// (0x00037d3d) graphic_text_digital_pane_t2

0x0001,

0xf993,	// (0x0003c499) graphic_text_digital_pane_t

0x7a58,	// (0x0003455e) navi_icon_pane_srt_ParamLimits

0x7a58,	// (0x0003455e) navi_icon_pane_srt

0x3086,	// (0x0002fb8c) navi_midp_pane_srt

0x3086,	// (0x0002fb8c) navi_navi_pane_srt

0x7a58,	// (0x0003455e) navi_text_pane_srt_ParamLimits

0x7a58,	// (0x0003455e) navi_text_pane_srt

0xb1ec,	// (0x00037cf2) navi_navi_icon_text_pane_srt

0xb1f4,	// (0x00037cfa) navi_navi_pane_srt_g1_ParamLimits

0xb1f4,	// (0x00037cfa) navi_navi_pane_srt_g1

0xb206,	// (0x00037d0c) navi_navi_pane_srt_g2_ParamLimits

0xb206,	// (0x00037d0c) navi_navi_pane_srt_g2

0x0001,

0xf98e,	// (0x0003c494) navi_navi_pane_srt_g_ParamLimits

0xf98e,	// (0x0003c494) navi_navi_pane_srt_g

0xb218,	// (0x00037d1e) navi_navi_tabs_pane_srt

0xb1ec,	// (0x00037cf2) navi_navi_text_pane_srt

0xb1ec,	// (0x00037cf2) navi_navi_volume_pane_srt

0xb1dd,	// (0x00037ce3) navi_navi_text_pane_srt_t1

0x623b,	// (0x00032d41) navi_navi_volume_pane_srt_g1

0x6243,	// (0x00032d49) volume_small_pane_srt_ParamLimits

0x6243,	// (0x00032d49) volume_small_pane_srt

0x5405,	// (0x00031f0b) volume_small_pane_srt_g1_ParamLimits

0x5405,	// (0x00031f0b) volume_small_pane_srt_g1

0x5415,	// (0x00031f1b) volume_small_pane_srt_g2_ParamLimits

0x5415,	// (0x00031f1b) volume_small_pane_srt_g2

0x5426,	// (0x00031f2c) volume_small_pane_srt_g3_ParamLimits

0x5426,	// (0x00031f2c) volume_small_pane_srt_g3

0x5437,	// (0x00031f3d) volume_small_pane_srt_g4_ParamLimits

0x5437,	// (0x00031f3d) volume_small_pane_srt_g4

0x5448,	// (0x00031f4e) volume_small_pane_srt_g5_ParamLimits

0x5448,	// (0x00031f4e) volume_small_pane_srt_g5

0x5459,	// (0x00031f5f) volume_small_pane_srt_g6_ParamLimits

0x5459,	// (0x00031f5f) volume_small_pane_srt_g6

0x546a,	// (0x00031f70) volume_small_pane_srt_g7_ParamLimits

0x546a,	// (0x00031f70) volume_small_pane_srt_g7

0x547b,	// (0x00031f81) volume_small_pane_srt_g8_ParamLimits

0x547b,	// (0x00031f81) volume_small_pane_srt_g8

0x548c,	// (0x00031f92) volume_small_pane_srt_g9_ParamLimits

0x548c,	// (0x00031f92) volume_small_pane_srt_g9

0x549d,	// (0x00031fa3) volume_small_pane_srt_g10_ParamLimits

0x549d,	// (0x00031fa3) volume_small_pane_srt_g10

0x0009,

0xf736,	// (0x0003c23c) volume_small_pane_srt_g_ParamLimits

0xf736,	// (0x0003c23c) volume_small_pane_srt_g

0x7e58,	// (0x0003495e) query_popup_data_pane_cp2

0xb1c3,	// (0x00037cc9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1c3,	// (0x00037cc9) navi_navi_icon_text_pane_srt_t1

0xa2ab,	// (0x00036db1) navi_tabs_2_long_pane_srt

0xa2ab,	// (0x00036db1) navi_tabs_2_pane_srt

0xa2ab,	// (0x00036db1) navi_tabs_3_long_pane_srt

0xa2ab,	// (0x00036db1) navi_tabs_3_pane_srt

0xa2ab,	// (0x00036db1) navi_tabs_4_pane_srt

0x621b,	// (0x00032d21) tabs_2_active_pane_srt_ParamLimits

0x621b,	// (0x00032d21) tabs_2_active_pane_srt

0x622b,	// (0x00032d31) tabs_2_passive_pane_srt_ParamLimits

0x622b,	// (0x00032d31) tabs_2_passive_pane_srt

0x94b3,	// (0x00035fb9) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94b3,	// (0x00035fb9) bg_passive_tab_pane_cp1_srt

0xb18f,	// (0x00037c95) bg_passive_tab_pane_g1_cp1_srt

0x8dcc,	// (0x000358d2) bg_passive_tab_pane_g2_cp1_srt

0xb198,	// (0x00037c9e) bg_passive_tab_pane_g3_cp1_srt

0x7a58,	// (0x0003455e) bg_active_tab_pane_cp1_srt_ParamLimits

0x7a58,	// (0x0003455e) bg_active_tab_pane_cp1_srt

0xb1a1,	// (0x00037ca7) tabs_2_active_pane_srt_g1

0xb1a9,	// (0x00037caf) tabs_2_active_pane_srt_t1_ParamLimits

0xb1a9,	// (0x00037caf) tabs_2_active_pane_srt_t1

0xb18f,	// (0x00037c95) bg_active_tab_pane_g1_cp1_srt

0x8dcc,	// (0x000358d2) bg_active_tab_pane_g2_cp1_srt

0xb198,	// (0x00037c9e) bg_active_tab_pane_g3_cp1_srt

0x61e8,	// (0x00032cee) tabs_3_active_pane_srt_ParamLimits

0x61e8,	// (0x00032cee) tabs_3_active_pane_srt

0x61f9,	// (0x00032cff) tabs_3_passive_pane_cp_srt_ParamLimits

0x61f9,	// (0x00032cff) tabs_3_passive_pane_cp_srt

0x620a,	// (0x00032d10) tabs_3_passive_pane_srt_ParamLimits

0x620a,	// (0x00032d10) tabs_3_passive_pane_srt

0x94b3,	// (0x00035fb9) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94b3,	// (0x00035fb9) bg_passive_tab_pane_cp2_srt

0x9343,	// (0x00035e49) bg_passive_tab_pane_g1_cp2_srt

0x8dcc,	// (0x000358d2) bg_passive_tab_pane_g2_cp2_srt

0x934c,	// (0x00035e52) bg_passive_tab_pane_g3_cp2_srt

0x7a58,	// (0x0003455e) bg_active_tab_pane_cp2_srt_ParamLimits

0x7a58,	// (0x0003455e) bg_active_tab_pane_cp2_srt

0xb175,	// (0x00037c7b) tabs_3_active_pane_srt_g1

0xb17d,	// (0x00037c83) tabs_3_active_pane_srt_t1_ParamLimits

0xb17d,	// (0x00037c83) tabs_3_active_pane_srt_t1

0x9343,	// (0x00035e49) bg_active_tab_pane_g1_cp2_srt

0x8dcc,	// (0x000358d2) bg_active_tab_pane_g2_cp2_srt

0x934c,	// (0x00035e52) bg_active_tab_pane_g3_cp2_srt

0x61a0,	// (0x00032ca6) tabs_4_active_pane_srt_ParamLimits

0x61a0,	// (0x00032ca6) tabs_4_active_pane_srt

0x61b2,	// (0x00032cb8) tabs_4_passive_pane_cp2_srt_ParamLimits

0x61b2,	// (0x00032cb8) tabs_4_passive_pane_cp2_srt

0x5610,	// (0x00032116) aid_size_cell_toolbar

0x84d9,	// (0x00034fdf) main_idle_act_pane_ParamLimits

0x57d1,	// (0x000322d7) popup_large_graphic_colour_window_ParamLimits

0x5b38,	// (0x0003263e) popup_toolbar_window_ParamLimits

0x5b38,	// (0x0003263e) popup_toolbar_window

0x6112,	// (0x00032c18) list_single_graphic_2heading_pane_ParamLimits

0x6112,	// (0x00032c18) list_single_graphic_2heading_pane

0x8695,	// (0x0003519b) aid_size_cell_apps_grid_lsc_pane

0x86a7,	// (0x000351ad) aid_size_cell_apps_grid_prt_pane

0x94b3,	// (0x00035fb9) bg_wml_button_pane_cp1_ParamLimits

0x94b3,	// (0x00035fb9) bg_wml_button_pane_cp1

0x9c81,	// (0x00036787) form_midp_field_text_pane_t1_ParamLimits

0x9a51,	// (0x00036557) input_focus_pane_cp050_ParamLimits

0x9cb8,	// (0x000367be) list_midp_form_text_pane_ParamLimits

0x9c5e,	// (0x00036764) input_focus_pane_cp051_ParamLimits

0x9c72,	// (0x00036778) list_midp_choice_pane_ParamLimits

0x9b0a,	// (0x00036610) list_single_2graphic_pane_cp3_ParamLimits

0x9b0a,	// (0x00036610) list_single_2graphic_pane_cp3

0x9b2b,	// (0x00036631) list_single_midp_graphic_pane_ParamLimits

0x9b2b,	// (0x00036631) list_single_midp_graphic_pane

0x4430,	// (0x00030f36) list_single_graphic_2heading_pane_g1_ParamLimits

0x4430,	// (0x00030f36) list_single_graphic_2heading_pane_g1

0x443c,	// (0x00030f42) list_single_graphic_2heading_pane_g4_ParamLimits

0x443c,	// (0x00030f42) list_single_graphic_2heading_pane_g4

0x4448,	// (0x00030f4e) list_single_graphic_2heading_pane_g5_ParamLimits

0x4448,	// (0x00030f4e) list_single_graphic_2heading_pane_g5

0x0002,

0xf789,	// (0x0003c28f) list_single_graphic_2heading_pane_g_ParamLimits

0xf789,	// (0x0003c28f) list_single_graphic_2heading_pane_g

0x4454,	// (0x00030f5a) list_single_graphic_2heading_pane_t1_ParamLimits

0x4454,	// (0x00030f5a) list_single_graphic_2heading_pane_t1

0x4468,	// (0x00030f6e) list_single_graphic_2heading_pane_t2_ParamLimits

0x4468,	// (0x00030f6e) list_single_graphic_2heading_pane_t2

0x4482,	// (0x00030f88) list_single_graphic_2heading_pane_t3_ParamLimits

0x4482,	// (0x00030f88) list_single_graphic_2heading_pane_t3

0x0002,

0xf790,	// (0x0003c296) list_single_graphic_2heading_pane_t_ParamLimits

0xf790,	// (0x0003c296) list_single_graphic_2heading_pane_t

0x991b,	// (0x00036421) bg_popup_sub_pane_cp2

0x9945,	// (0x0003644b) grid_toobar_pane

0x5be5,	// (0x000326eb) cell_toolbar_pane_ParamLimits

0x5be5,	// (0x000326eb) cell_toolbar_pane

0x9981,	// (0x00036487) cell_toolbar_pane_g1_ParamLimits

0x9981,	// (0x00036487) cell_toolbar_pane_g1

0x9995,	// (0x0003649b) cell_toolbar_pane_g2_ParamLimits

0x9995,	// (0x0003649b) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x0003c2a4) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x0003c2a4) cell_toolbar_pane_g

0x99b7,	// (0x000364bd) grid_highlight_pane_cp2_ParamLimits

0x99b7,	// (0x000364bd) grid_highlight_pane_cp2

0x99d1,	// (0x000364d7) toolbar_button_pane

0x99dd,	// (0x000364e3) toolbar_button_pane_g1

0x99e5,	// (0x000364eb) toolbar_button_pane_g2

0x99ed,	// (0x000364f3) toolbar_button_pane_g3

0x99f5,	// (0x000364fb) toolbar_button_pane_g4

0x99fd,	// (0x00036503) toolbar_button_pane_g5

0x9a05,	// (0x0003650b) toolbar_button_pane_g6

0x9a0d,	// (0x00036513) toolbar_button_pane_g7

0x9a15,	// (0x0003651b) toolbar_button_pane_g8

0x9a1d,	// (0x00036523) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x0003c2a9) toolbar_button_pane_g

0x5c57,	// (0x0003275d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5c57,	// (0x0003275d) list_single_2graphic_pane_g1_cp3

0x5c63,	// (0x00032769) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5c63,	// (0x00032769) list_single_2graphic_pane_g2_cp3

0x5c74,	// (0x0003277a) list_single_2graphic_pane_g3_cp3

0x5c7c,	// (0x00032782) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5c7c,	// (0x00032782) list_single_2graphic_pane_g4_cp3

0x5c88,	// (0x0003278e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5c88,	// (0x0003278e) list_single_2graphic_pane_t1_cp3

0x5ce8,	// (0x000327ee) list_single_midp_graphic_pane_g2_ParamLimits

0x5ce8,	// (0x000327ee) list_single_midp_graphic_pane_g2

0x5618,	// (0x0003211e) aid_zoom_text_primary

0x4414,	// (0x00030f1a) aid_zoom_text_secondary

0x93fd,	// (0x00035f03) status_small_pane_g7_ParamLimits

0x93fd,	// (0x00035f03) status_small_pane_g7

0x9420,	// (0x00035f26) status_small_pane_t1_ParamLimits

0x798f,	// (0x00034495) title_pane_g2

0x0003,

0xf527,	// (0x0003c02d) title_pane_g

0x7f00,	// (0x00034a06) aid_size_cell_colour_1_pane_ParamLimits

0x7f00,	// (0x00034a06) aid_size_cell_colour_1_pane

0x7f14,	// (0x00034a1a) aid_size_cell_colour_2_pane_ParamLimits

0x7f14,	// (0x00034a1a) aid_size_cell_colour_2_pane

0x7f28,	// (0x00034a2e) aid_size_cell_colour_3_pane_ParamLimits

0x7f28,	// (0x00034a2e) aid_size_cell_colour_3_pane

0x7f3c,	// (0x00034a42) aid_size_cell_colour_4_pane_ParamLimits

0x7f3c,	// (0x00034a42) aid_size_cell_colour_4_pane

0x4fd8,	// (0x00031ade) title_pane_stacon_g1_ParamLimits

0x4fd8,	// (0x00031ade) title_pane_stacon_g1

0xa092,	// (0x00036b98) popup_note_wait_window_g3_ParamLimits

0xa092,	// (0x00036b98) popup_note_wait_window_g3

0xa108,	// (0x00036c0e) popup_note_wait_window_t5_ParamLimits

0xa108,	// (0x00036c0e) popup_note_wait_window_t5

0x3086,	// (0x0002fb8c) main_feb_china_hwr_fs_writing_pane

0x56b2,	// (0x000321b8) popup_feb_china_hwr_fs_window_ParamLimits

0x56b2,	// (0x000321b8) popup_feb_china_hwr_fs_window

0x5d80,	// (0x00032886) aid_size_cell_hwr_fs_ParamLimits

0x5d80,	// (0x00032886) aid_size_cell_hwr_fs

0x9a51,	// (0x00036557) bg_popup_sub_pane_cp3_ParamLimits

0x9a51,	// (0x00036557) bg_popup_sub_pane_cp3

0x5d95,	// (0x0003289b) grid_hwr_fs_pane_ParamLimits

0x5d95,	// (0x0003289b) grid_hwr_fs_pane

0x5dad,	// (0x000328b3) linegrid_hwr_fs_pane_ParamLimits

0x5dad,	// (0x000328b3) linegrid_hwr_fs_pane

0x5dbd,	// (0x000328c3) cell_hwr_fs_pane_ParamLimits

0x5dbd,	// (0x000328c3) cell_hwr_fs_pane

0x9a5d,	// (0x00036563) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a5d,	// (0x00036563) linegrid_hwr_fs_pane_g1

0x9a69,	// (0x0003656f) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a69,	// (0x0003656f) linegrid_hwr_fs_pane_g2

0x9a7b,	// (0x00036581) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a7b,	// (0x00036581) linegrid_hwr_fs_pane_g3

0x5ddf,	// (0x000328e5) linegrid_hwr_fs_pane_g4_ParamLimits

0x5ddf,	// (0x000328e5) linegrid_hwr_fs_pane_g4

0x5df9,	// (0x000328ff) linegrid_hwr_fs_pane_g5_ParamLimits

0x5df9,	// (0x000328ff) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ce,	// (0x0003c2d4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ce,	// (0x0003c2d4) linegrid_hwr_fs_pane_g

0x9a87,	// (0x0003658d) cell_hwr_fs_pane_g1_ParamLimits

0x9a87,	// (0x0003658d) cell_hwr_fs_pane_g1

0x9852,	// (0x00036358) cell_hwr_fs_pane_g2_ParamLimits

0x9852,	// (0x00036358) cell_hwr_fs_pane_g2

0x9a9d,	// (0x000365a3) cell_hwr_fs_pane_g3_ParamLimits

0x9a9d,	// (0x000365a3) cell_hwr_fs_pane_g3

0x9aaa,	// (0x000365b0) cell_hwr_fs_pane_g4_ParamLimits

0x9aaa,	// (0x000365b0) cell_hwr_fs_pane_g4

0x0003,

0xf7d9,	// (0x0003c2df) cell_hwr_fs_pane_g_ParamLimits

0xf7d9,	// (0x0003c2df) cell_hwr_fs_pane_g

0x5e0f,	// (0x00032915) cell_hwr_fs_pane_t1

0x3086,	// (0x0002fb8c) grid_highlight_pane_cp6

0x3086,	// (0x0002fb8c) main_idle_act2_pane

0x844c,	// (0x00034f52) aid_inside_area_popup_secondary

0xa73f,	// (0x00037245) aid_inside_area_window_primary_ParamLimits

0xa73f,	// (0x00037245) aid_inside_area_window_primary

0xb2dc,	// (0x00037de2) ai2_news_ticker_pane

0xb2e4,	// (0x00037dea) aid_size_cell_ai1_link_ParamLimits

0xb2e4,	// (0x00037dea) aid_size_cell_ai1_link

0xb2fe,	// (0x00037e04) popup_ai2_data_window_ParamLimits

0xb2fe,	// (0x00037e04) popup_ai2_data_window

0xb314,	// (0x00037e1a) popup_ai2_link_window_ParamLimits

0xb314,	// (0x00037e1a) popup_ai2_link_window

0x9a51,	// (0x00036557) bg_popup_sub_pane_cp4_ParamLimits

0x9a51,	// (0x00036557) bg_popup_sub_pane_cp4

0xb328,	// (0x00037e2e) grid_ai2_link_pane_ParamLimits

0xb328,	// (0x00037e2e) grid_ai2_link_pane

0xb33f,	// (0x00037e45) popup_ai2_link_window_g1_ParamLimits

0xb33f,	// (0x00037e45) popup_ai2_link_window_g1

0xb34b,	// (0x00037e51) popup_ai2_link_window_g2_ParamLimits

0xb34b,	// (0x00037e51) popup_ai2_link_window_g2

0x0001,

0xf9ac,	// (0x0003c4b2) popup_ai2_link_window_g_ParamLimits

0xf9ac,	// (0x0003c4b2) popup_ai2_link_window_g

0xb35a,	// (0x00037e60) ai2_mp_button_pane

0xb362,	// (0x00037e68) ai2_mp_volume_pane

0x9c5e,	// (0x00036764) bg_popup_sub_pane_cp5_ParamLimits

0x9c5e,	// (0x00036764) bg_popup_sub_pane_cp5

0xb36a,	// (0x00037e70) heading_ai2_gene_pane_ParamLimits

0xb36a,	// (0x00037e70) heading_ai2_gene_pane

0xb376,	// (0x00037e7c) list_ai2_gene_pane_ParamLimits

0xb376,	// (0x00037e7c) list_ai2_gene_pane

0xb3be,	// (0x00037ec4) cell_ai2_link_pane_ParamLimits

0xb3be,	// (0x00037ec4) cell_ai2_link_pane

0xb3d4,	// (0x00037eda) cell_ai2_link_pane_g1

0x3086,	// (0x0002fb8c) grid_highlight_pane_cp7

0x6258,	// (0x00032d5e) ai2_mp_volume_pane_g1

0xb4a4,	// (0x00037faa) ai2_mp_volume_pane_g2

0xb419,	// (0x00037f1f) list_ai2_gene_pane_t1

0xb4ac,	// (0x00037fb2) ai2_mp_volume_pane_g3

0x0002,

0xf9c5,	// (0x0003c4cb) ai2_mp_volume_pane_g

0x6260,	// (0x00032d66) volume_small_pane_cp3

0xb4b4,	// (0x00037fba) aid_size_cell_ai2_button

0xb4bc,	// (0x00037fc2) grid_ai2_button_pane

0xb4c5,	// (0x00037fcb) cell_ai2_button_pane_ParamLimits

0xb4c5,	// (0x00037fcb) cell_ai2_button_pane

0x307c,	// (0x0002fb82) cell_ai2_button_pane_g1

0x3086,	// (0x0002fb8c) grid_highlight_pane_cp8

0xb464,	// (0x00037f6a) ai2_gene_pane_t1_ParamLimits

0xb464,	// (0x00037f6a) ai2_gene_pane_t1

0x5606,	// (0x0003210c) aid_height_parent_landscape

0xada5,	// (0x000378ab) aid_height_set_list

0xadb6,	// (0x000378bc) aid_size_parent

0xb0ff,	// (0x00037c05) aid_size_cell_graphic_pane_ParamLimits

0xb386,	// (0x00037e8c) popup_ai2_data_window_g1_ParamLimits

0xb386,	// (0x00037e8c) popup_ai2_data_window_g1

0xb392,	// (0x00037e98) ai2_news_ticker_pane_g1

0xb39a,	// (0x00037ea0) ai2_news_ticker_pane_g2

0x0001,

0xf9b1,	// (0x0003c4b7) ai2_news_ticker_pane_g

0xb3a2,	// (0x00037ea8) ai2_news_ticker_pane_t1

0xb3b0,	// (0x00037eb6) ai2_news_ticker_pane_t2

0x0001,

0xf9b6,	// (0x0003c4bc) ai2_news_ticker_pane_t

0xb3dd,	// (0x00037ee3) heading_ai2_gene_pane_g1

0xb3e5,	// (0x00037eeb) heading_ai2_gene_pane_t1_ParamLimits

0xb3e5,	// (0x00037eeb) heading_ai2_gene_pane_t1

0xb3fa,	// (0x00037f00) list_highlight_pane_cp6

0xb402,	// (0x00037f08) ai2_gene_pane_ParamLimits

0xb402,	// (0x00037f08) ai2_gene_pane

0xb427,	// (0x00037f2d) list_ai2_gene_pane_t2

0x0001,

0xf9bb,	// (0x0003c4c1) list_ai2_gene_pane_t

0xb435,	// (0x00037f3b) list_highlight_pane_cp8_ParamLimits

0xb435,	// (0x00037f3b) list_highlight_pane_cp8

0xb446,	// (0x00037f4c) ai2_gene_pane_g1_ParamLimits

0xb446,	// (0x00037f4c) ai2_gene_pane_g1

0xb458,	// (0x00037f5e) ai2_gene_pane_g2_ParamLimits

0xb458,	// (0x00037f5e) ai2_gene_pane_g2

0x0001,

0xf9c0,	// (0x0003c4c6) ai2_gene_pane_g_ParamLimits

0xf9c0,	// (0x0003c4c6) ai2_gene_pane_g

0x827b,	// (0x00034d81) scroll_pane_cp12

0x55c3,	// (0x000320c9) control_pane_t3_ParamLimits

0x55c3,	// (0x000320c9) control_pane_t3

0x9411,	// (0x00035f17) status_small_pane_g8_ParamLimits

0x9411,	// (0x00035f17) status_small_pane_g8

0x5798,	// (0x0003229e) popup_find_window_ParamLimits

0x59af,	// (0x000324b5) popup_note_image_window_ParamLimits

0x5c15,	// (0x0003271b) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c15,	// (0x0003271b) list_double2_graphic_pane_vc_g1

0x5c21,	// (0x00032727) list_double2_graphic_pane_vc_g2_ParamLimits

0x5c21,	// (0x00032727) list_double2_graphic_pane_vc_g2

0x5c2d,	// (0x00032733) list_double2_graphic_pane_vc_g3_ParamLimits

0x5c2d,	// (0x00032733) list_double2_graphic_pane_vc_g3

0x0002,

0xf797,	// (0x0003c29d) list_double2_graphic_pane_vc_g_ParamLimits

0xf797,	// (0x0003c29d) list_double2_graphic_pane_vc_g

0x5c39,	// (0x0003273f) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c39,	// (0x0003273f) list_double2_graphic_pane_vc_t1

0x5ca4,	// (0x000327aa) list_single_heading_pane_vc_g1_ParamLimits

0x5ca4,	// (0x000327aa) list_single_heading_pane_vc_g1

0x5cb0,	// (0x000327b6) list_single_heading_pane_vc_g2_ParamLimits

0x5cb0,	// (0x000327b6) list_single_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003c2be) list_single_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003c2be) list_single_heading_pane_vc_g

0x5cbc,	// (0x000327c2) list_single_heading_pane_vc_t1_ParamLimits

0x5cbc,	// (0x000327c2) list_single_heading_pane_vc_t1

0x5cd2,	// (0x000327d8) list_single_heading_pane_vc_t2_ParamLimits

0x5cd2,	// (0x000327d8) list_single_heading_pane_vc_t2

0x0001,

0xf7bd,	// (0x0003c2c3) list_single_heading_pane_vc_t_ParamLimits

0xf7bd,	// (0x0003c2c3) list_single_heading_pane_vc_t

0x5d0a,	// (0x00032810) list_setting_number_pane_vc_g1_ParamLimits

0x5d0a,	// (0x00032810) list_setting_number_pane_vc_g1

0x5d16,	// (0x0003281c) list_setting_number_pane_vc_g2_ParamLimits

0x5d16,	// (0x0003281c) list_setting_number_pane_vc_g2

0x0001,

0xf7c2,	// (0x0003c2c8) list_setting_number_pane_vc_g_ParamLimits

0xf7c2,	// (0x0003c2c8) list_setting_number_pane_vc_g

0x5d22,	// (0x00032828) list_setting_number_pane_vc_t1_ParamLimits

0x5d22,	// (0x00032828) list_setting_number_pane_vc_t1

0x5d36,	// (0x0003283c) list_setting_number_pane_vc_t2_ParamLimits

0x5d36,	// (0x0003283c) list_setting_number_pane_vc_t2

0x5d52,	// (0x00032858) list_setting_number_pane_vc_t3_ParamLimits

0x5d52,	// (0x00032858) list_setting_number_pane_vc_t3

0x0002,

0xf7c7,	// (0x0003c2cd) list_setting_number_pane_vc_t_ParamLimits

0xf7c7,	// (0x0003c2cd) list_setting_number_pane_vc_t

0x5d70,	// (0x00032876) set_value_pane_vc_ParamLimits

0x5d70,	// (0x00032876) set_value_pane_vc

0x6112,	// (0x00032c18) list_double2_graphic_pane_vc_ParamLimits

0x6112,	// (0x00032c18) list_double2_graphic_pane_vc

0xaf6e,	// (0x00037a74) list_double2_large_graphic_pane_vc_ParamLimits

0xaf6e,	// (0x00037a74) list_double2_large_graphic_pane_vc

0x6112,	// (0x00032c18) list_double2_pane_vc_ParamLimits

0x6112,	// (0x00032c18) list_double2_pane_vc

0x6112,	// (0x00032c18) list_double_graphic_heading_pane_vc_ParamLimits

0x6112,	// (0x00032c18) list_double_graphic_heading_pane_vc

0x6112,	// (0x00032c18) list_double_graphic_pane_vc_ParamLimits

0x6112,	// (0x00032c18) list_double_graphic_pane_vc

0x6112,	// (0x00032c18) list_double_heading_pane_vc_ParamLimits

0x6112,	// (0x00032c18) list_double_heading_pane_vc

0xaf80,	// (0x00037a86) list_double_large_graphic_pane_vc_ParamLimits

0xaf80,	// (0x00037a86) list_double_large_graphic_pane_vc

0x6112,	// (0x00032c18) list_double_number_pane_vc_ParamLimits

0x6112,	// (0x00032c18) list_double_number_pane_vc

0x6112,	// (0x00032c18) list_double_pane_vc_ParamLimits

0x6112,	// (0x00032c18) list_double_pane_vc

0x6112,	// (0x00032c18) list_double_time_pane_vc_ParamLimits

0x6112,	// (0x00032c18) list_double_time_pane_vc

0x6112,	// (0x00032c18) list_setting_number_pane_vc_ParamLimits

0x6112,	// (0x00032c18) list_setting_number_pane_vc

0x6112,	// (0x00032c18) list_setting_pane_vc_ParamLimits

0x6112,	// (0x00032c18) list_setting_pane_vc

0x6112,	// (0x00032c18) list_single_graphic_heading_pane_vc_ParamLimits

0x6112,	// (0x00032c18) list_single_graphic_heading_pane_vc

0x6112,	// (0x00032c18) list_single_heading_pane_vc_ParamLimits

0x6112,	// (0x00032c18) list_single_heading_pane_vc

0x6125,	// (0x00032c2b) list_single_number_heading_pane_vc_ParamLimits

0x6125,	// (0x00032c2b) list_single_number_heading_pane_vc

0x39d9,	// (0x000304df) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x39d9,	// (0x000304df) list_double_graphic_heading_pane_vc_g1

0x39e5,	// (0x000304eb) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x39e5,	// (0x000304eb) list_double_graphic_heading_pane_vc_g2

0x39f1,	// (0x000304f7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x39f1,	// (0x000304f7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9cc,	// (0x0003c4d2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9cc,	// (0x0003c4d2) list_double_graphic_heading_pane_vc_g

0x6269,	// (0x00032d6f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x6269,	// (0x00032d6f) list_double_graphic_heading_pane_vc_t1

0x6285,	// (0x00032d8b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6285,	// (0x00032d8b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d3,	// (0x0003c4d9) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d3,	// (0x0003c4d9) list_double_graphic_heading_pane_vc_t

0x5d0a,	// (0x00032810) list_setting_pane_vc_g1_ParamLimits

0x5d0a,	// (0x00032810) list_setting_pane_vc_g1

0x5d16,	// (0x0003281c) list_setting_pane_vc_g2_ParamLimits

0x5d16,	// (0x0003281c) list_setting_pane_vc_g2

0x0001,

0xf7c2,	// (0x0003c2c8) list_setting_pane_vc_g_ParamLimits

0xf7c2,	// (0x0003c2c8) list_setting_pane_vc_g

0x62a3,	// (0x00032da9) list_setting_pane_vc_t1_ParamLimits

0x62a3,	// (0x00032da9) list_setting_pane_vc_t1

0x62bf,	// (0x00032dc5) list_setting_pane_vc_t2_ParamLimits

0x62bf,	// (0x00032dc5) list_setting_pane_vc_t2

0x0001,

0xfa01,	// (0x0003c507) list_setting_pane_vc_t_ParamLimits

0xfa01,	// (0x0003c507) list_setting_pane_vc_t

0x5d70,	// (0x00032876) set_value_pane_cp_vc_ParamLimits

0x5d70,	// (0x00032876) set_value_pane_cp_vc

0x5ca4,	// (0x000327aa) list_single_number_heading_pane_vc_g1_ParamLimits

0x5ca4,	// (0x000327aa) list_single_number_heading_pane_vc_g1

0x5cb0,	// (0x000327b6) list_single_number_heading_pane_vc_g2_ParamLimits

0x5cb0,	// (0x000327b6) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003c2be) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003c2be) list_single_number_heading_pane_vc_g

0x62db,	// (0x00032de1) list_single_number_heading_pane_vc_t1_ParamLimits

0x62db,	// (0x00032de1) list_single_number_heading_pane_vc_t1

0x62f1,	// (0x00032df7) list_single_number_heading_pane_vc_t2_ParamLimits

0x62f1,	// (0x00032df7) list_single_number_heading_pane_vc_t2

0x39fd,	// (0x00030503) list_single_number_heading_pane_vc_t3_ParamLimits

0x39fd,	// (0x00030503) list_single_number_heading_pane_vc_t3

0x0002,

0xfa06,	// (0x0003c50c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa06,	// (0x0003c50c) list_single_number_heading_pane_vc_t

0x5c15,	// (0x0003271b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5c15,	// (0x0003271b) list_single_graphic_heading_pane_vc_g1

0x5ca4,	// (0x000327aa) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5ca4,	// (0x000327aa) list_single_graphic_heading_pane_vc_g4

0x5cb0,	// (0x000327b6) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5cb0,	// (0x000327b6) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0d,	// (0x0003c513) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0d,	// (0x0003c513) list_single_graphic_heading_pane_vc_g

0x62db,	// (0x00032de1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x62db,	// (0x00032de1) list_single_graphic_heading_pane_vc_t1

0x6307,	// (0x00032e0d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6307,	// (0x00032e0d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa14,	// (0x0003c51a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa14,	// (0x0003c51a) list_single_graphic_heading_pane_vc_t

0x5ca4,	// (0x000327aa) list_double2_pane_vc_g1_ParamLimits

0x5ca4,	// (0x000327aa) list_double2_pane_vc_g1

0x5cb0,	// (0x000327b6) list_double2_pane_vc_g2_ParamLimits

0x5cb0,	// (0x000327b6) list_double2_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003c2be) list_double2_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003c2be) list_double2_pane_vc_g

0x6319,	// (0x00032e1f) list_double2_pane_vc_t1_ParamLimits

0x6319,	// (0x00032e1f) list_double2_pane_vc_t1

0x632f,	// (0x00032e35) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x632f,	// (0x00032e35) list_double2_large_graphic_pane_vc_g1

0x39a0,	// (0x000304a6) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x39a0,	// (0x000304a6) list_double2_large_graphic_pane_vc_g2

0x39ac,	// (0x000304b2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x39ac,	// (0x000304b2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa19,	// (0x0003c51f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa19,	// (0x0003c51f) list_double2_large_graphic_pane_vc_g

0x633b,	// (0x00032e41) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x633b,	// (0x00032e41) list_double2_large_graphic_pane_vc_t1

0x6351,	// (0x00032e57) list_double_time_pane_vc_g1_ParamLimits

0x6351,	// (0x00032e57) list_double_time_pane_vc_g1

0x635d,	// (0x00032e63) list_double_time_pane_vc_g2_ParamLimits

0x635d,	// (0x00032e63) list_double_time_pane_vc_g2

0x0001,

0xfa20,	// (0x0003c526) list_double_time_pane_vc_g_ParamLimits

0xfa20,	// (0x0003c526) list_double_time_pane_vc_g

0x6369,	// (0x00032e6f) list_double_time_pane_vc_t1_ParamLimits

0x6369,	// (0x00032e6f) list_double_time_pane_vc_t1

0x638d,	// (0x00032e93) list_double_time_pane_vc_t2_ParamLimits

0x638d,	// (0x00032e93) list_double_time_pane_vc_t2

0x63d7,	// (0x00032edd) list_double_time_pane_vc_t3_ParamLimits

0x63d7,	// (0x00032edd) list_double_time_pane_vc_t3

0x63e9,	// (0x00032eef) list_double_time_pane_vc_t4_ParamLimits

0x63e9,	// (0x00032eef) list_double_time_pane_vc_t4

0x0003,

0xfa25,	// (0x0003c52b) list_double_time_pane_vc_t_ParamLimits

0xfa25,	// (0x0003c52b) list_double_time_pane_vc_t

0x5ca4,	// (0x000327aa) list_double_pane_vc_g1_ParamLimits

0x5ca4,	// (0x000327aa) list_double_pane_vc_g1

0x5cb0,	// (0x000327b6) list_double_pane_vc_g2_ParamLimits

0x5cb0,	// (0x000327b6) list_double_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003c2be) list_double_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003c2be) list_double_pane_vc_g

0x63fd,	// (0x00032f03) list_double_pane_vc_t1_ParamLimits

0x63fd,	// (0x00032f03) list_double_pane_vc_t1

0x6411,	// (0x00032f17) list_double_pane_vc_t2_ParamLimits

0x6411,	// (0x00032f17) list_double_pane_vc_t2

0x0001,

0xfa2e,	// (0x0003c534) list_double_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003c534) list_double_pane_vc_t

0x5ca4,	// (0x000327aa) list_double_number_pane_vc_g1_ParamLimits

0x5ca4,	// (0x000327aa) list_double_number_pane_vc_g1

0x5cb0,	// (0x000327b6) list_double_number_pane_vc_g2_ParamLimits

0x5cb0,	// (0x000327b6) list_double_number_pane_vc_g2

0x0001,

0xf7b8,	// (0x0003c2be) list_double_number_pane_vc_g_ParamLimits

0xf7b8,	// (0x0003c2be) list_double_number_pane_vc_g

0x6429,	// (0x00032f2f) list_double_number_pane_vc_t1_ParamLimits

0x6429,	// (0x00032f2f) list_double_number_pane_vc_t1

0x643b,	// (0x00032f41) list_double_number_pane_vc_t2_ParamLimits

0x643b,	// (0x00032f41) list_double_number_pane_vc_t2

0x644f,	// (0x00032f55) list_double_number_pane_vc_t3_ParamLimits

0x644f,	// (0x00032f55) list_double_number_pane_vc_t3

0x0002,

0xfa33,	// (0x0003c539) list_double_number_pane_vc_t_ParamLimits

0xfa33,	// (0x0003c539) list_double_number_pane_vc_t

0x6469,	// (0x00032f6f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6469,	// (0x00032f6f) list_double_large_graphic_pane_vc_g1

0x6485,	// (0x00032f8b) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6485,	// (0x00032f8b) list_double_large_graphic_pane_vc_g2

0x6499,	// (0x00032f9f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6499,	// (0x00032f9f) list_double_large_graphic_pane_vc_g3

0x64a8,	// (0x00032fae) list_double_large_graphic_pane_vc_g4_ParamLimits

0x64a8,	// (0x00032fae) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa3a,	// (0x0003c540) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0003c540) list_double_large_graphic_pane_vc_g

0x64b7,	// (0x00032fbd) list_double_large_graphic_pane_vc_t1_ParamLimits

0x64b7,	// (0x00032fbd) list_double_large_graphic_pane_vc_t1

0x64d3,	// (0x00032fd9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x64d3,	// (0x00032fd9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa43,	// (0x0003c549) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa43,	// (0x0003c549) list_double_large_graphic_pane_vc_t

0x39e5,	// (0x000304eb) list_double_heading_pane_vc_g1_ParamLimits

0x39e5,	// (0x000304eb) list_double_heading_pane_vc_g1

0x39f1,	// (0x000304f7) list_double_heading_pane_vc_g2_ParamLimits

0x39f1,	// (0x000304f7) list_double_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x0003c0a7) list_double_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x0003c0a7) list_double_heading_pane_vc_g

0x64f5,	// (0x00032ffb) list_double_heading_pane_vc_t1_ParamLimits

0x64f5,	// (0x00032ffb) list_double_heading_pane_vc_t1

0x6509,	// (0x0003300f) list_double_heading_pane_vc_t2_ParamLimits

0x6509,	// (0x0003300f) list_double_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x0003c54e) list_double_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x0003c54e) list_double_heading_pane_vc_t

0x6521,	// (0x00033027) list_double_graphic_pane_vc_g1_ParamLimits

0x6521,	// (0x00033027) list_double_graphic_pane_vc_g1

0x6534,	// (0x0003303a) list_double_graphic_pane_vc_g2_ParamLimits

0x6534,	// (0x0003303a) list_double_graphic_pane_vc_g2

0x5ca4,	// (0x000327aa) list_double_graphic_pane_vc_g3_ParamLimits

0x5ca4,	// (0x000327aa) list_double_graphic_pane_vc_g3

0x0003,

0xfa4d,	// (0x0003c553) list_double_graphic_pane_vc_g_ParamLimits

0xfa4d,	// (0x0003c553) list_double_graphic_pane_vc_g

0x6551,	// (0x00033057) list_double_graphic_pane_vc_t1_ParamLimits

0x6551,	// (0x00033057) list_double_graphic_pane_vc_t1

0x657b,	// (0x00033081) list_double_graphic_pane_vc_t2_ParamLimits

0x657b,	// (0x00033081) list_double_graphic_pane_vc_t2

0x0001,

0xfa56,	// (0x0003c55c) list_double_graphic_pane_vc_t_ParamLimits

0xfa56,	// (0x0003c55c) list_double_graphic_pane_vc_t

0x44b2,	// (0x00030fb8) aid_size_cell_fastswap

0x44ba,	// (0x00030fc0) aid_size_cell_touch_ParamLimits

0x44ba,	// (0x00030fc0) aid_size_cell_touch

0x4725,	// (0x0003122b) popup_fast_swap_wide_window_ParamLimits

0x4725,	// (0x0003122b) popup_fast_swap_wide_window

0x4839,	// (0x0003133f) touch_pane_ParamLimits

0x4839,	// (0x0003133f) touch_pane

0x82d1,	// (0x00034dd7) button_value_adjust_pane_cp2

0x3a29,	// (0x0003052f) button_value_adjust_pane_cp4

0x3a31,	// (0x00030537) form_field_data_pane_cp2

0x4d79,	// (0x0003187f) form_field_data_wide_pane_cp2

0x8948,	// (0x0003544e) bg_scroll_pane_ParamLimits

0x513a,	// (0x00031c40) scroll_handle_pane_ParamLimits

0x514e,	// (0x00031c54) scroll_sc2_down_pane_ParamLimits

0x514e,	// (0x00031c54) scroll_sc2_down_pane

0x8979,	// (0x0003547f) scroll_sc2_up_pane_ParamLimits

0x8979,	// (0x0003547f) scroll_sc2_up_pane

0xbbb9,	// (0x000386bf) grid_wheel_folder_pane_g1_ParamLimits

0xbbb9,	// (0x000386bf) grid_wheel_folder_pane_g1

0x539d,	// (0x00031ea3) clock_nsta_pane_cp2_ParamLimits

0x539d,	// (0x00031ea3) clock_nsta_pane_cp2

0x9197,	// (0x00035c9d) listscroll_midp_pane_ParamLimits

0x91a3,	// (0x00035ca9) midp_canvas_pane

0x948b,	// (0x00035f91) nsta_clock_indic_pane

0x94bf,	// (0x00035fc5) listscroll_form_pane_vc

0x94c7,	// (0x00035fcd) listscroll_set_pane_vc_ParamLimits

0x94c7,	// (0x00035fcd) listscroll_set_pane_vc

0x95c0,	// (0x000360c6) clock_nsta_pane

0x963b,	// (0x00036141) indicator_nsta_pane

0x991b,	// (0x00036421) bg_popup_sub_pane_cp2_ParamLimits

0x992f,	// (0x00036435) find_pane_cp2_ParamLimits

0x992f,	// (0x00036435) find_pane_cp2

0x9945,	// (0x0003644b) grid_toobar_pane_ParamLimits

0x9a25,	// (0x0003652b) list_form_gen_pane_vc_ParamLimits

0x9a25,	// (0x0003652b) list_form_gen_pane_vc

0x9a3b,	// (0x00036541) scroll_pane_cp8_vc_ParamLimits

0x9a3b,	// (0x00036541) scroll_pane_cp8_vc

0x9ab7,	// (0x000365bd) data_form_wide_pane_vc_ParamLimits

0x9ab7,	// (0x000365bd) data_form_wide_pane_vc

0x9ac3,	// (0x000365c9) form_field_data_wide_pane_vc_g1

0x9acb,	// (0x000365d1) form_field_data_wide_pane_vc_t1_ParamLimits

0x9acb,	// (0x000365d1) form_field_data_wide_pane_vc_t1

0x82e5,	// (0x00034deb) input_focus_pane_cp6_vc_ParamLimits

0x82e5,	// (0x00034deb) input_focus_pane_cp6_vc

0x9df1,	// (0x000368f7) list_midp_pane_ParamLimits

0x9dfd,	// (0x00036903) scroll_pane_cp16_ParamLimits

0x9dfd,	// (0x00036903) scroll_pane_cp16

0x9e67,	// (0x0003696d) button_value_adjust_pane_ParamLimits

0x9e67,	// (0x0003696d) button_value_adjust_pane

0xadc8,	// (0x000378ce) button_value_adjust_pane_cp6_ParamLimits

0xadc8,	// (0x000378ce) button_value_adjust_pane_cp6

0xaef2,	// (0x000379f8) settings_code_pane_cp_ParamLimits

0xaef2,	// (0x000379f8) settings_code_pane_cp

0x307c,	// (0x0002fb82) cell_touch_pane_g1

0x307c,	// (0x0002fb82) cell_touch_pane_g2

0x0001,

0xf6dc,	// (0x0003c1e2) cell_touch_pane_g

0xb4d7,	// (0x00037fdd) cell_touch_pane_cp_ParamLimits

0xb4d7,	// (0x00037fdd) cell_touch_pane_cp

0xb4e7,	// (0x00037fed) cell_touch_pane_ParamLimits

0xb4e7,	// (0x00037fed) cell_touch_pane

0x307c,	// (0x0002fb82) scroll_sc2_down_pane_g1

0x307c,	// (0x0002fb82) scroll_sc2_up_pane_g1

0x3086,	// (0x0002fb8c) bg_set_opt_pane_cp4_vc

0xb4f9,	// (0x00037fff) list_set_graphic_pane_vc_g1_ParamLimits

0xb4f9,	// (0x00037fff) list_set_graphic_pane_vc_g1

0xb505,	// (0x0003800b) list_set_graphic_pane_vc_g2_ParamLimits

0xb505,	// (0x0003800b) list_set_graphic_pane_vc_g2

0x0001,

0xf9d8,	// (0x0003c4de) list_set_graphic_pane_vc_g_ParamLimits

0xf9d8,	// (0x0003c4de) list_set_graphic_pane_vc_g

0xb511,	// (0x00038017) text_primary_small_cp13_vc_ParamLimits

0xb511,	// (0x00038017) text_primary_small_cp13_vc

0xb529,	// (0x0003802f) list_set_graphic_pane_vc_ParamLimits

0xb529,	// (0x0003802f) list_set_graphic_pane_vc

0x3086,	// (0x0002fb8c) input_focus_pane_cp2_vc

0x307c,	// (0x0002fb82) setting_code_pane_vc_g1

0x7aa3,	// (0x000345a9) setting_code_pane_vc_t1

0xb53c,	// (0x00038042) set_text_pane_vc_t1_ParamLimits

0xb53c,	// (0x00038042) set_text_pane_vc_t1

0x3086,	// (0x0002fb8c) input_focus_pane_cp1_vc

0xb558,	// (0x0003805e) list_set_text_pane_vc

0x307c,	// (0x0002fb82) setting_text_pane_vc_g1

0x3086,	// (0x0002fb8c) bg_set_opt_pane_cp2_vc

0x7a9a,	// (0x000345a0) setting_slider_graphic_pane_vc_g1

0xb562,	// (0x00038068) setting_slider_graphic_pane_vc_t1

0xb572,	// (0x00038078) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9dd,	// (0x0003c4e3) setting_slider_graphic_pane_vc_t

0xb582,	// (0x00038088) slider_set_pane_cp_vc

0xb58a,	// (0x00038090) slider_set_pane_vc_g1

0xb593,	// (0x00038099) slider_set_pane_vc_g2

0x0006,

0xf9e2,	// (0x0003c4e8) slider_set_pane_vc_g

0x833d,	// (0x00034e43) set_opt_bg_pane_g1_copy1

0x8345,	// (0x00034e4b) set_opt_bg_pane_g2_copy1

0xb5bf,	// (0x000380c5) set_opt_bg_pane_g3_copy1

0x8355,	// (0x00034e5b) set_opt_bg_pane_g4_copy1

0x835d,	// (0x00034e63) set_opt_bg_pane_g5_copy1

0x8365,	// (0x00034e6b) set_opt_bg_pane_g6_copy1

0xb5c9,	// (0x000380cf) set_opt_bg_pane_g7_copy1

0xb5d3,	// (0x000380d9) set_opt_bg_pane_g8_copy1

0xb5dd,	// (0x000380e3) set_opt_bg_pane_g9_copy1

0x3086,	// (0x0002fb8c) bg_set_opt_pane_cp_vc

0xb5e7,	// (0x000380ed) setting_slider_pane_vc_t1

0xb5f6,	// (0x000380fc) setting_slider_pane_vc_t2

0xb606,	// (0x0003810c) setting_slider_pane_vc_t3

0x0002,

0xf9f1,	// (0x0003c4f7) setting_slider_pane_vc_t

0xb616,	// (0x0003811c) slider_set_pane_vc

0x5e5e,	// (0x00032964) volume_set_pane_vc_g1

0x5e67,	// (0x0003296d) volume_set_pane_vc_g2

0x5e70,	// (0x00032976) volume_set_pane_vc_g3

0x5e79,	// (0x0003297f) volume_set_pane_vc_g4

0x5e82,	// (0x00032988) volume_set_pane_vc_g5

0x5e8b,	// (0x00032991) volume_set_pane_vc_g6

0x5e94,	// (0x0003299a) volume_set_pane_vc_g7

0x5e9d,	// (0x000329a3) volume_set_pane_vc_g8

0x5ea6,	// (0x000329ac) volume_set_pane_vc_g9

0x5eaf,	// (0x000329b5) volume_set_pane_vc_g10

0x0009,

0xf88f,	// (0x0003c395) volume_set_pane_vc_g

0xb61e,	// (0x00038124) volume_set_pane_vc

0xb626,	// (0x0003812c) button_value_adjust_pane_cp1_vc

0xb630,	// (0x00038136) list_highlight_pane_cp2_vc

0xb639,	// (0x0003813f) list_set_pane_vc_ParamLimits

0xb639,	// (0x0003813f) list_set_pane_vc

0xb697,	// (0x0003819d) main_pane_set_vc_t1_ParamLimits

0xb697,	// (0x0003819d) main_pane_set_vc_t1

0xb6ac,	// (0x000381b2) main_pane_set_vc_t2_ParamLimits

0xb6ac,	// (0x000381b2) main_pane_set_vc_t2

0xb6be,	// (0x000381c4) main_pane_set_vc_t3_ParamLimits

0xb6be,	// (0x000381c4) main_pane_set_vc_t3

0xb6d2,	// (0x000381d8) main_pane_set_vc_t4_ParamLimits

0xb6d2,	// (0x000381d8) main_pane_set_vc_t4

0x0003,

0xf9f8,	// (0x0003c4fe) main_pane_set_vc_t_ParamLimits

0xf9f8,	// (0x0003c4fe) main_pane_set_vc_t

0xb6e6,	// (0x000381ec) setting_code_pane_vc_ParamLimits

0xb6e6,	// (0x000381ec) setting_code_pane_vc

0xb6f7,	// (0x000381fd) setting_slider_graphic_pane_vc

0xb6f7,	// (0x000381fd) setting_slider_pane_vc

0xb6f7,	// (0x000381fd) setting_text_pane_vc

0xb6f7,	// (0x000381fd) setting_volume_pane_vc

0xb701,	// (0x00038207) scroll_pane_cp121_vc

0x82bf,	// (0x00034dc5) set_content_pane_vc

0xb709,	// (0x0003820f) button_value_adjust_pane_g1

0xb712,	// (0x00038218) button_value_adjust_pane_g2

0x0001,

0xfa5b,	// (0x0003c561) button_value_adjust_pane_g

0xb71b,	// (0x00038221) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb71b,	// (0x00038221) form_field_slider_wide_pane_vc_t1

0xb72f,	// (0x00038235) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb72f,	// (0x00038235) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa60,	// (0x0003c566) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa60,	// (0x0003c566) form_field_slider_wide_pane_vc_t

0x7cd3,	// (0x000347d9) input_focus_pane_cp10_vc_ParamLimits

0x7cd3,	// (0x000347d9) input_focus_pane_cp10_vc

0xb75d,	// (0x00038263) slider_cont_pane_cp1_vc_ParamLimits

0xb75d,	// (0x00038263) slider_cont_pane_cp1_vc

0xb76f,	// (0x00038275) slider_form_pane_g1_cp2

0xb593,	// (0x00038099) slider_form_pane_g2_cp2

0xb79c,	// (0x000382a2) form_field_slider_pane_vc_t3

0xb7aa,	// (0x000382b0) form_field_slider_pane_vc_t4

0xb7b8,	// (0x000382be) slider_form_pane_vc_ParamLimits

0xb7b8,	// (0x000382be) slider_form_pane_vc

0xb7c5,	// (0x000382cb) form_field_slider_pane_vc_t1_ParamLimits

0xb7c5,	// (0x000382cb) form_field_slider_pane_vc_t1

0xb72f,	// (0x00038235) form_field_slider_pane_vc_t2_ParamLimits

0xb72f,	// (0x00038235) form_field_slider_pane_vc_t2

0x0001,

0xfa72,	// (0x0003c578) form_field_slider_pane_vc_t_ParamLimits

0xfa72,	// (0x0003c578) form_field_slider_pane_vc_t

0x7cd3,	// (0x000347d9) input_focus_pane_cp9_vc_ParamLimits

0x7cd3,	// (0x000347d9) input_focus_pane_cp9_vc

0xb7e1,	// (0x000382e7) slider_cont_pane_vc_ParamLimits

0xb7e1,	// (0x000382e7) slider_cont_pane_vc

0xb7f5,	// (0x000382fb) list_form_graphic_pane_cp_vc_ParamLimits

0xb7f5,	// (0x000382fb) list_form_graphic_pane_cp_vc

0x9ac3,	// (0x000365c9) form_field_popup_wide_pane_vc_g1

0xb816,	// (0x0003831c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb816,	// (0x0003831c) form_field_popup_wide_pane_vc_t1

0x82e5,	// (0x00034deb) input_focus_pane_cp8_vc_ParamLimits

0x82e5,	// (0x00034deb) input_focus_pane_cp8_vc

0xb85b,	// (0x00038361) list_form_wide_pane_vc_ParamLimits

0xb85b,	// (0x00038361) list_form_wide_pane_vc

0xb867,	// (0x0003836d) list_form_graphic_pane_vc_g1

0xb86f,	// (0x00038375) list_form_graphic_pane_vc_t1_ParamLimits

0xb86f,	// (0x00038375) list_form_graphic_pane_vc_t1

0x7a58,	// (0x0003455e) list_highlight_pane_cp5_vc_ParamLimits

0x7a58,	// (0x0003455e) list_highlight_pane_cp5_vc

0xb88b,	// (0x00038391) list_form_graphic_pane_vc_ParamLimits

0xb88b,	// (0x00038391) list_form_graphic_pane_vc

0x9ac3,	// (0x000365c9) form_field_popup_pane_vc_g1

0xb8a1,	// (0x000383a7) form_field_popup_pane_vc_t1_ParamLimits

0xb8a1,	// (0x000383a7) form_field_popup_pane_vc_t1

0x82e5,	// (0x00034deb) input_focus_pane_cp7_vc_ParamLimits

0x82e5,	// (0x00034deb) input_focus_pane_cp7_vc

0xb8b8,	// (0x000383be) list_form_pane_vc_ParamLimits

0xb8b8,	// (0x000383be) list_form_pane_vc

0xb8c4,	// (0x000383ca) data_form_pane_vc_t1_ParamLimits

0xb8c4,	// (0x000383ca) data_form_pane_vc_t1

0x833d,	// (0x00034e43) input_focus_pane_vc_g1

0x8345,	// (0x00034e4b) input_focus_pane_vc_g2

0x834d,	// (0x00034e53) input_focus_pane_vc_g3

0x8355,	// (0x00034e5b) input_focus_pane_vc_g4

0x835d,	// (0x00034e63) input_focus_pane_vc_g5

0x8365,	// (0x00034e6b) input_focus_pane_vc_g6

0x836d,	// (0x00034e73) input_focus_pane_vc_g7

0x8375,	// (0x00034e7b) input_focus_pane_vc_g8

0x837d,	// (0x00034e83) input_focus_pane_vc_g9

0x307c,	// (0x0002fb82) input_focus_pane_vc_g10

0x0009,

0xf665,	// (0x0003c16b) input_focus_pane_vc_g

0x9ab7,	// (0x000365bd) data_form_pane_vc_ParamLimits

0x9ab7,	// (0x000365bd) data_form_pane_vc

0x9ac3,	// (0x000365c9) form_field_data_pane_vc_g1

0xb8df,	// (0x000383e5) form_field_data_pane_vc_t1_ParamLimits

0xb8df,	// (0x000383e5) form_field_data_pane_vc_t1

0x82e5,	// (0x00034deb) input_focus_pane_vc_ParamLimits

0x82e5,	// (0x00034deb) input_focus_pane_vc

0xb8f9,	// (0x000383ff) button_value_adjust_pane_cp3_vc

0xb901,	// (0x00038407) button_value_adjust_pane_cp5_vc

0xb909,	// (0x0003840f) form_field_data_pane_vc_ParamLimits

0xb909,	// (0x0003840f) form_field_data_pane_vc

0xb920,	// (0x00038426) form_field_data_pane_vc_cp2

0xb928,	// (0x0003842e) form_field_data_wide_pane_vc_ParamLimits

0xb928,	// (0x0003842e) form_field_data_wide_pane_vc

0xb93e,	// (0x00038444) form_field_data_wide_pane_vc_cp2

0xb946,	// (0x0003844c) form_field_popup_pane_vc_ParamLimits

0xb946,	// (0x0003844c) form_field_popup_pane_vc

0xb95d,	// (0x00038463) form_field_popup_wide_pane_vc_ParamLimits

0xb95d,	// (0x00038463) form_field_popup_wide_pane_vc

0xb973,	// (0x00038479) form_field_slider_pane_vc_ParamLimits

0xb973,	// (0x00038479) form_field_slider_pane_vc

0xb986,	// (0x0003848c) form_field_slider_wide_pane_vc_ParamLimits

0xb986,	// (0x0003848c) form_field_slider_wide_pane_vc

0xb999,	// (0x0003849f) grid_touch_1_pane_ParamLimits

0xb999,	// (0x0003849f) grid_touch_1_pane

0xb9a5,	// (0x000384ab) grid_touch_2_pane_ParamLimits

0xb9a5,	// (0x000384ab) grid_touch_2_pane

0x9456,	// (0x00035f5c) touch_pane_g1_ParamLimits

0x9456,	// (0x00035f5c) touch_pane_g1

0xb9bd,	// (0x000384c3) cell_app_pane_cp_wide_ParamLimits

0xb9bd,	// (0x000384c3) cell_app_pane_cp_wide

0xb9ce,	// (0x000384d4) grid_popup_fast_wide_pane_ParamLimits

0xb9ce,	// (0x000384d4) grid_popup_fast_wide_pane

0xb9e2,	// (0x000384e8) scroll_pane_cp19_ParamLimits

0xb9e2,	// (0x000384e8) scroll_pane_cp19

0x3086,	// (0x0002fb8c) bg_popup_window_pane_cp20

0xb9f6,	// (0x000384fc) listscroll_popup_fast_wide_pane

0xb9fe,	// (0x00038504) grid_indicator_nsta_pane

0xba10,	// (0x00038516) clock_nsta_pane_g1

0xba19,	// (0x0003851f) clock_nsta_pane_t1

0xba35,	// (0x0003853b) cell_indicator_nsta_pane_ParamLimits

0xba35,	// (0x0003853b) cell_indicator_nsta_pane

0xba6a,	// (0x00038570) cell_indicator_nsta_pane_g1

0xba78,	// (0x0003857e) cell_indicator_nsta_pane_g2

0x0001,

0xfa83,	// (0x0003c589) cell_indicator_nsta_pane_g

0xba8a,	// (0x00038590) clock_nsta_pane_cp

0xba93,	// (0x00038599) indicator_nsta_pane_cp

0xba9d,	// (0x000385a3) nsta_clock_indic_pane_g1

0x7b21,	// (0x00034627) grid_indicator_pane

0x8a6e,	// (0x00035574) scroll_pane_cp29

0x52ec,	// (0x00031df2) indicator_nsta_pane_cp2_ParamLimits

0x52ec,	// (0x00031df2) indicator_nsta_pane_cp2

0x7a58,	// (0x0003455e) main_apps_wheel_pane

0x9cd2,	// (0x000367d8) form_midp_field_text_pane_ParamLimits

0x9e1d,	// (0x00036923) scroll_bar_cp050_ParamLimits

0xbaf6,	// (0x000385fc) cell_indicator_pane_ParamLimits

0xbaf6,	// (0x000385fc) cell_indicator_pane

0xbb0d,	// (0x00038613) cell_indicator_pane_g1

0xbb17,	// (0x0003861d) grid_wheel_folder_pane_ParamLimits

0xbb17,	// (0x0003861d) grid_wheel_folder_pane

0xbb2d,	// (0x00038633) list_wheel_apps_pane_ParamLimits

0xbb2d,	// (0x00038633) list_wheel_apps_pane

0xbb3e,	// (0x00038644) main_apps_wheel_pane_g1_ParamLimits

0xbb3e,	// (0x00038644) main_apps_wheel_pane_g1

0xbb52,	// (0x00038658) main_apps_wheel_pane_g2_ParamLimits

0xbb52,	// (0x00038658) main_apps_wheel_pane_g2

0x0001,

0xfa9f,	// (0x0003c5a5) main_apps_wheel_pane_g_ParamLimits

0xfa9f,	// (0x0003c5a5) main_apps_wheel_pane_g

0xbb6a,	// (0x00038670) main_apps_wheel_pane_t1_ParamLimits

0xbb6a,	// (0x00038670) main_apps_wheel_pane_t1

0xbb8d,	// (0x00038693) list_wheel_apps_pane_g1

0xbb95,	// (0x0003869b) list_wheel_apps_pane_g2

0xbb9d,	// (0x000386a3) list_wheel_apps_pane_g3

0xbba5,	// (0x000386ab) list_wheel_apps_pane_g4

0xbbaf,	// (0x000386b5) list_wheel_apps_pane_g5

0x0004,

0xfaa4,	// (0x0003c5aa) list_wheel_apps_pane_g

0x9002,	// (0x00035b08) navi_icon_text_pane

0x94ef,	// (0x00035ff5) aid_fill_nsta

0xbbd2,	// (0x000386d8) navi_icon_text_pane_g1

0xbbde,	// (0x000386e4) navi_icon_text_pane_t1

0x8ea0,	// (0x000359a6) list_set_graphic_pane_t1_ParamLimits

0x8ea0,	// (0x000359a6) list_set_graphic_pane_t1

0xa588,	// (0x0003708e) popup_midp_note_alarm_window_t6_ParamLimits

0xa588,	// (0x0003708e) popup_midp_note_alarm_window_t6

0xa59a,	// (0x000370a0) popup_midp_note_alarm_window_t7_ParamLimits

0xa59a,	// (0x000370a0) popup_midp_note_alarm_window_t7

0xa5ac,	// (0x000370b2) popup_midp_note_alarm_window_t8_ParamLimits

0xa5ac,	// (0x000370b2) popup_midp_note_alarm_window_t8

0xa5be,	// (0x000370c4) popup_midp_note_alarm_window_t9_ParamLimits

0xa5be,	// (0x000370c4) popup_midp_note_alarm_window_t9

0xa5d0,	// (0x000370d6) popup_midp_note_alarm_window_t10_ParamLimits

0xa5d0,	// (0x000370d6) popup_midp_note_alarm_window_t10

0xa5e2,	// (0x000370e8) popup_midp_note_alarm_window_t11_ParamLimits

0xa5e2,	// (0x000370e8) popup_midp_note_alarm_window_t11

0xa5f4,	// (0x000370fa) scroll_pane_cp17_ParamLimits

0xa5f4,	// (0x000370fa) scroll_pane_cp17

0x5e5e,	// (0x00032964) volume_small_pane_cp_g1

0x65aa,	// (0x000330b0) volume_small_pane_cp_g2

0x65b3,	// (0x000330b9) volume_small_pane_cp_g3

0x65bc,	// (0x000330c2) volume_small_pane_cp_g4

0x65c5,	// (0x000330cb) volume_small_pane_cp_g5

0x65ce,	// (0x000330d4) volume_small_pane_cp_g6

0x65d7,	// (0x000330dd) volume_small_pane_cp_g7

0x65e0,	// (0x000330e6) volume_small_pane_cp_g8

0x65e9,	// (0x000330ef) volume_small_pane_cp_g9

0x65f2,	// (0x000330f8) volume_small_pane_cp_g10

0x926c,	// (0x00035d72) midp_ticker_pane_g1_ParamLimits

0x9278,	// (0x00035d7e) midp_ticker_pane_g2_ParamLimits

0xf731,	// (0x0003c237) midp_ticker_pane_g_ParamLimits

0x9284,	// (0x00035d8a) midp_ticker_pane_t1_ParamLimits

0x9505,	// (0x0003600b) aid_fill_nsta_2

0x9e09,	// (0x0003690f) list_form2_midp_pane

0xaf3d,	// (0x00037a43) midp_editing_number_pane_ParamLimits

0xaf4c,	// (0x00037a52) midp_ticker_pane_ParamLimits

0xbbf0,	// (0x000386f6) form2_midp_field_pane

0xbc14,	// (0x0003871a) scroll_pane_cp51

0xbc34,	// (0x0003873a) form2_midp_button_pane_ParamLimits

0xbc34,	// (0x0003873a) form2_midp_button_pane

0xbc46,	// (0x0003874c) form2_midp_content_pane_ParamLimits

0xbc46,	// (0x0003874c) form2_midp_content_pane

0xbc60,	// (0x00038766) form2_midp_field_choice_group_pane

0xbc68,	// (0x0003876e) form2_midp_field_pane_g1

0xbc70,	// (0x00038776) form2_midp_field_pane_g2

0xbc78,	// (0x0003877e) form2_midp_field_pane_g3

0xbc80,	// (0x00038786) form2_midp_field_pane_g4

0x0003,

0xfac9,	// (0x0003c5cf) form2_midp_field_pane_g

0xbc88,	// (0x0003878e) form2_midp_gauge_slider_pane

0xbc90,	// (0x00038796) form2_midp_gauge_wait_pane

0xbc98,	// (0x0003879e) form2_midp_image_pane_ParamLimits

0xbc98,	// (0x0003879e) form2_midp_image_pane

0xbcb3,	// (0x000387b9) form2_midp_label_pane_ParamLimits

0xbcb3,	// (0x000387b9) form2_midp_label_pane

0xbccc,	// (0x000387d2) form2_midp_label_pane_cp_ParamLimits

0xbccc,	// (0x000387d2) form2_midp_label_pane_cp

0xbced,	// (0x000387f3) form2_midp_string_pane_ParamLimits

0xbced,	// (0x000387f3) form2_midp_string_pane

0x65fb,	// (0x00033101) form2_midp_text_pane_ParamLimits

0x65fb,	// (0x00033101) form2_midp_text_pane

0xbcff,	// (0x00038805) form2_midp_time_pane

0xbd0f,	// (0x00038815) input_focus_pane_cp51_ParamLimits

0xbd0f,	// (0x00038815) input_focus_pane_cp51

0xbd27,	// (0x0003882d) form2_midp_label_pane_t1_ParamLimits

0xbd27,	// (0x0003882d) form2_midp_label_pane_t1

0x6616,	// (0x0003311c) form2_mdip_text_pane_t1_ParamLimits

0x6616,	// (0x0003311c) form2_mdip_text_pane_t1

0x6634,	// (0x0003313a) form2_midp_time_pane_t1

0xbd70,	// (0x00038876) form2_midp_gauge_slider_pane_t1

0xbd82,	// (0x00038888) form2_midp_gauge_slider_pane_t2

0xbd94,	// (0x0003889a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad2,	// (0x0003c5d8) form2_midp_gauge_slider_pane_t

0xbda6,	// (0x000388ac) form2_midp_slider_pane

0xbdb2,	// (0x000388b8) form2_midp_gauge_wait_pane_t1

0xbdc0,	// (0x000388c6) form2_midp_wait_pane_ParamLimits

0xbdc0,	// (0x000388c6) form2_midp_wait_pane

0xbdeb,	// (0x000388f1) list_single_2graphic_pane_cp4_ParamLimits

0xbdeb,	// (0x000388f1) list_single_2graphic_pane_cp4

0x9b2b,	// (0x00036631) list_single_midp_graphic_pane_cp_ParamLimits

0x9b2b,	// (0x00036631) list_single_midp_graphic_pane_cp

0x3086,	// (0x0002fb8c) list_highlight_pane_cp20

0xbe0f,	// (0x00038915) list_single_2graphic_pane_g1_cp4

0xbe17,	// (0x0003891d) list_single_2graphic_pane_g2_cp4

0xbe1f,	// (0x00038925) list_single_2graphic_pane_t1_cp4

0x7a58,	// (0x0003455e) list_highlight_pane_cp21

0xbe2e,	// (0x00038934) list_single_midp_graphic_pane_g4_cp

0xbe3d,	// (0x00038943) list_single_midp_graphic_pane_t1_cp

0xbe52,	// (0x00038958) form2_mdip_string_pane_t1_ParamLimits

0xbe52,	// (0x00038958) form2_mdip_string_pane_t1

0x3086,	// (0x0002fb8c) bg_wml_button_pane_cp2

0x307c,	// (0x0002fb82) form2_midp_image_pane_g1

0x39b8,	// (0x000304be) list_double_large_graphic_pane_g5_ParamLimits

0x39b8,	// (0x000304be) list_double_large_graphic_pane_g5

0x9197,	// (0x00035c9d) midp_form_pane_ParamLimits

0x7a58,	// (0x0003455e) main_apps_wheel_pane_ParamLimits

0x59d5,	// (0x000324db) popup_preview_window_ParamLimits

0x59d5,	// (0x000324db) popup_preview_window

0x5b90,	// (0x00032696) popup_touch_info_window_ParamLimits

0x5b90,	// (0x00032696) popup_touch_info_window

0x5bae,	// (0x000326b4) popup_touch_menu_window_ParamLimits

0x5bae,	// (0x000326b4) popup_touch_menu_window

0x3072,	// (0x0002fb78) bg_popup_sub_pane_cp6

0xbf4b,	// (0x00038a51) list_touch_menu_pane

0xbf53,	// (0x00038a59) list_single_touch_menu_pane_ParamLimits

0xbf53,	// (0x00038a59) list_single_touch_menu_pane

0xbf69,	// (0x00038a6f) list_single_touch_menu_pane_t1

0x7a58,	// (0x0003455e) bg_popup_sub_pane_cp7_ParamLimits

0x7a58,	// (0x0003455e) bg_popup_sub_pane_cp7

0x9e3d,	// (0x00036943) heading_sub_pane

0xbf77,	// (0x00038a7d) list_touch_info_pane_ParamLimits

0xbf77,	// (0x00038a7d) list_touch_info_pane

0xbf87,	// (0x00038a8d) list_single_touch_info_pane_ParamLimits

0xbf87,	// (0x00038a8d) list_single_touch_info_pane

0xbf99,	// (0x00038a9f) list_single_touch_info_pane_t1

0xbfa7,	// (0x00038aad) list_single_touch_info_pane_t2

0x0001,

0xfae0,	// (0x0003c5e6) list_single_touch_info_pane_t

0x918f,	// (0x00035c95) bg_popup_heading_pane_cp

0xbfb5,	// (0x00038abb) heading_sub_pane_t1

0x9a51,	// (0x00036557) bg_popup_preview_window_pane_cp_ParamLimits

0x9a51,	// (0x00036557) bg_popup_preview_window_pane_cp

0x9e3d,	// (0x00036943) heading_preview_pane

0xbf77,	// (0x00038a7d) list_preview_pane_ParamLimits

0xbf77,	// (0x00038a7d) list_preview_pane

0xbfc3,	// (0x00038ac9) popup_preview_window_g1

0xbf87,	// (0x00038a8d) list_single_preview_pane_ParamLimits

0xbf87,	// (0x00038a8d) list_single_preview_pane

0xbfcb,	// (0x00038ad1) list_single_preview_pane_g1

0xbfd3,	// (0x00038ad9) list_single_preview_pane_t1

0xbf99,	// (0x00038a9f) list_single_preview_pane_t2

0x0001,

0xfae5,	// (0x0003c5eb) list_single_preview_pane_t

0xbfe1,	// (0x00038ae7) bg_popup_heading_pane_cp2_ParamLimits

0xbfe1,	// (0x00038ae7) bg_popup_heading_pane_cp2

0xbff7,	// (0x00038afd) heading_preview_pane_g1

0xbfff,	// (0x00038b05) heading_preview_pane_t1_ParamLimits

0xbfff,	// (0x00038b05) heading_preview_pane_t1

0x7b44,	// (0x0003464a) soft_indicator_pane_t1_ParamLimits

0x8258,	// (0x00034d5e) scroll_pane_ParamLimits

0x8967,	// (0x0003546d) scroll_sc2_left_pane

0x8970,	// (0x00035476) scroll_sc2_right_pane

0x898f,	// (0x00035495) scroll_bg_pane_g1_ParamLimits

0x89a4,	// (0x000354aa) scroll_bg_pane_g2_ParamLimits

0x89bc,	// (0x000354c2) scroll_bg_pane_g3_ParamLimits

0xf6bc,	// (0x0003c1c2) scroll_bg_pane_g_ParamLimits

0x898f,	// (0x00035495) scroll_handle_pane_g1_ParamLimits

0x89de,	// (0x000354e4) scroll_handle_pane_g2_ParamLimits

0x89bc,	// (0x000354c2) scroll_handle_pane_g3_ParamLimits

0xf6c3,	// (0x0003c1c9) scroll_handle_pane_g_ParamLimits

0x5654,	// (0x0003215a) popup_choice_list_window_ParamLimits

0x5654,	// (0x0003215a) popup_choice_list_window

0x9927,	// (0x0003642d) choice_list_pane

0x99a9,	// (0x000364af) cell_toolbar_pane_t1

0x99d1,	// (0x000364d7) toolbar_button_pane_ParamLimits

0xaaae,	// (0x000375b4) ai_gene_pane_1_t2_ParamLimits

0xaaae,	// (0x000375b4) ai_gene_pane_1_t2

0x0001,

0xf8eb,	// (0x0003c3f1) ai_gene_pane_1_t_ParamLimits

0xf8eb,	// (0x0003c3f1) ai_gene_pane_1_t

0xc01c,	// (0x00038b22) scroll_sc2_left_pane_g1

0xc01c,	// (0x00038b22) scroll_sc2_right_pane_g1

0x94b3,	// (0x00035fb9) bg_popup_sub_pane_cp10

0xc026,	// (0x00038b2c) list_choice_list_pane

0xc03f,	// (0x00038b45) list_single_choice_list_pane_ParamLimits

0xc03f,	// (0x00038b45) list_single_choice_list_pane

0xc052,	// (0x00038b58) list_single_choice_list_pane_g1

0x8489,	// (0x00034f8f) list_single_choice_list_pane_t1_ParamLimits

0x8489,	// (0x00034f8f) list_single_choice_list_pane_t1

0xc05a,	// (0x00038b60) choice_list_pane_g1

0xc062,	// (0x00038b68) choice_list_pane_t1

0x3072,	// (0x0002fb78) input_focus_pane_cp11

0x8660,	// (0x00035166) title_pane_stacon_g2_ParamLimits

0x8660,	// (0x00035166) title_pane_stacon_g2

0x0002,

0xf6a2,	// (0x0003c1a8) title_pane_stacon_g_ParamLimits

0xf6a2,	// (0x0003c1a8) title_pane_stacon_g

0x918f,	// (0x00035c95) cursor_press_pane

0x5700,	// (0x00032206) popup_fep_hwr_window_ParamLimits

0x5700,	// (0x00032206) popup_fep_hwr_window

0x577a,	// (0x00032280) popup_fep_vkb_window_ParamLimits

0x577a,	// (0x00032280) popup_fep_vkb_window

0xc070,	// (0x00038b76) cursor_press_pane_g1

0x0002,

0xfb0e,	// (0x0003c614) fep_vkb_side_pane_g_ParamLimits

0x6680,	// (0x00033186) fep_hwr_candidate_pane_ParamLimits

0x6680,	// (0x00033186) fep_hwr_candidate_pane

0x66aa,	// (0x000331b0) fep_hwr_side_pane_ParamLimits

0x66aa,	// (0x000331b0) fep_hwr_side_pane

0x66ca,	// (0x000331d0) fep_hwr_top_pane_ParamLimits

0x66ca,	// (0x000331d0) fep_hwr_top_pane

0x66e2,	// (0x000331e8) fep_hwr_write_pane_ParamLimits

0x66e2,	// (0x000331e8) fep_hwr_write_pane

0xfb0e,	// (0x0003c614) fep_vkb_side_pane_g

0xc078,	// (0x00038b7e) fep_hwr_top_pane_g1

0xc08a,	// (0x00038b90) fep_hwr_top_pane_g2

0x671c,	// (0x00033222) fep_hwr_top_pane_g3

0x0002,

0xfaea,	// (0x0003c5f0) fep_hwr_top_pane_g

0x6731,	// (0x00033237) fep_hwr_top_text_pane

0x8b5e,	// (0x00035664) fep_hwr_top_text_pane_g1

0xc0c0,	// (0x00038bc6) fep_hwr_top_text_pane_t1

0x6827,	// (0x0003332d) fep_hwr_candidate_pane_g1

0xc313,	// (0x00038e19) fep_vkb_keypad_pane_g3_ParamLimits

0xc313,	// (0x00038e19) fep_vkb_keypad_pane_g3

0xc33b,	// (0x00038e41) fep_vkb_keypad_pane_g4_ParamLimits

0xc33b,	// (0x00038e41) fep_vkb_keypad_pane_g4

0xc3aa,	// (0x00038eb0) fep_vkb_bottom_pane_g2_ParamLimits

0xc3aa,	// (0x00038eb0) fep_vkb_bottom_pane_g2

0x0001,

0xfb15,	// (0x0003c61b) fep_vkb_bottom_pane_g_ParamLimits

0xfb15,	// (0x0003c61b) fep_vkb_bottom_pane_g

0xc01c,	// (0x00038b22) cell_vkb_side_pane_g2

0x0001,

0xfb1f,	// (0x0003c625) cell_vkb_side_pane_g

0xc435,	// (0x00038f3b) cell_vkb_side_pane_t1

0xc443,	// (0x00038f49) cell_vkb_side_pane_t1_copy1

0xc01c,	// (0x00038b22) bg_fep_vkb_candidate_pane_g2

0xc56f,	// (0x00039075) cell_vkb_candidate_pane_ParamLimits

0xc0ce,	// (0x00038bd4) aid_size_cell_vkb_ParamLimits

0xc0ce,	// (0x00038bd4) aid_size_cell_vkb

0xc56f,	// (0x00039075) cell_vkb_candidate_pane

0x684e,	// (0x00033354) bg_popup_fep_shadow_pane_g1

0xc15c,	// (0x00038c62) fep_vkb_bottom_pane_ParamLimits

0xc15c,	// (0x00038c62) fep_vkb_bottom_pane

0xc192,	// (0x00038c98) fep_vkb_candidate_pane_ParamLimits

0xc192,	// (0x00038c98) fep_vkb_candidate_pane

0xc1ae,	// (0x00038cb4) fep_vkb_keypad_pane_ParamLimits

0xc1ae,	// (0x00038cb4) fep_vkb_keypad_pane

0xc1f4,	// (0x00038cfa) fep_vkb_side_pane_ParamLimits

0xc1f4,	// (0x00038cfa) fep_vkb_side_pane

0xc230,	// (0x00038d36) fep_vkb_top_pane_ParamLimits

0xc230,	// (0x00038d36) fep_vkb_top_pane

0xc26c,	// (0x00038d72) fep_vkb_top_pane_g1_ParamLimits

0xc26c,	// (0x00038d72) fep_vkb_top_pane_g1

0xc27b,	// (0x00038d81) fep_vkb_top_pane_g2_ParamLimits

0xc27b,	// (0x00038d81) fep_vkb_top_pane_g2

0xc28a,	// (0x00038d90) fep_vkb_top_pane_g3_ParamLimits

0xc28a,	// (0x00038d90) fep_vkb_top_pane_g3

0x0003,

0xfb05,	// (0x0003c60b) fep_vkb_top_pane_g_ParamLimits

0xfb05,	// (0x0003c60b) fep_vkb_top_pane_g

0xc2a8,	// (0x00038dae) fep_vkb_top_text_pane_ParamLimits

0xc2a8,	// (0x00038dae) fep_vkb_top_text_pane

0xc2b9,	// (0x00038dbf) fep_vkb_side_pane_g1_ParamLimits

0xc2b9,	// (0x00038dbf) fep_vkb_side_pane_g1

0xc302,	// (0x00038e08) grid_vkb_side_pane_ParamLimits

0xc302,	// (0x00038e08) grid_vkb_side_pane

0x6856,	// (0x0003335c) bg_popup_fep_shadow_pane_g2

0x685f,	// (0x00033365) bg_popup_fep_shadow_pane_g3

0x6867,	// (0x0003336d) bg_popup_fep_shadow_pane_g4

0x6870,	// (0x00033376) bg_popup_fep_shadow_pane_g5

0x687a,	// (0x00033380) bg_popup_fep_shadow_pane_g6

0x6882,	// (0x00033388) bg_popup_fep_shadow_pane_g7

0x8355,	// (0x00034e5b) bg_popup_fep_shadow_pane_g8

0xc359,	// (0x00038e5f) grid_vkb_keypad_number_pane_ParamLimits

0xc359,	// (0x00038e5f) grid_vkb_keypad_number_pane

0xc369,	// (0x00038e6f) grid_vkb_keypad_pane_ParamLimits

0xc369,	// (0x00038e6f) grid_vkb_keypad_pane

0xc38f,	// (0x00038e95) fep_vkb_bottom_pane_g1_ParamLimits

0xc38f,	// (0x00038e95) fep_vkb_bottom_pane_g1

0xc3b8,	// (0x00038ebe) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3b8,	// (0x00038ebe) grid_vkb_keypad_bottom_left_pane

0xc3cd,	// (0x00038ed3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3cd,	// (0x00038ed3) grid_vkb_keypad_bottom_right_pane

0xc3e2,	// (0x00038ee8) fep_vkb_top_text_pane_g1

0xc3fd,	// (0x00038f03) fep_vkb_top_text_pane_t1

0xc412,	// (0x00038f18) cell_vkb_side_pane_ParamLimits

0xc412,	// (0x00038f18) cell_vkb_side_pane

0xc01c,	// (0x00038b22) cell_vkb_side_pane_g1

0xc451,	// (0x00038f57) cell_vkb_keypad_pane_ParamLimits

0xc451,	// (0x00038f57) cell_vkb_keypad_pane

0xc4c6,	// (0x00038fcc) cell_vkb_keypad_pane_g1

0x0008,

0xfb32,	// (0x0003c638) bg_popup_fep_shadow_pane_g

0x6894,	// (0x0003339a) cell_hwr_side_pane_g1

0x6894,	// (0x0003339a) cell_hwr_side_pane_g2

0xc4d0,	// (0x00038fd6) cell_vkb_keypad_pane_t1

0xc4de,	// (0x00038fe4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4de,	// (0x00038fe4) cell_vkb_keypad_bottom_left_pane

0xc4fb,	// (0x00039001) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4fb,	// (0x00039001) cell_vkb_keypad_bottom_right_pane

0xc01c,	// (0x00038b22) cell_vkb_keypad_bottom_left_pane_g1

0xc01c,	// (0x00038b22) cell_vkb_keypad_bottom_right_pane_g1

0xc534,	// (0x0003903a) cell_vkb_keypad_number_pane_ParamLimits

0xc534,	// (0x0003903a) cell_vkb_keypad_number_pane

0xc553,	// (0x00039059) cell_vkb_keypad_number_pane_g1

0xc55d,	// (0x00039063) cell_vkb_keypad_number_pane_g2

0xc566,	// (0x0003906c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb24,	// (0x0003c62a) cell_vkb_keypad_number_pane_g

0xc4d0,	// (0x00038fd6) cell_vkb_keypad_number_pane_t1

0xc58a,	// (0x00039090) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x0003c64b) cell_hwr_side_pane_g

0xc5a3,	// (0x000390a9) cell_hwr_side_pane_t1

0x689e,	// (0x000333a4) cell_hwr_side_pane_t1_copy1

0x68ac,	// (0x000333b2) cell_hwr_candidate_pane_g1

0x68db,	// (0x000333e1) cell_hwr_candidate_pane_t1

0xc01c,	// (0x00038b22) cell_vkb_candidate_pane_g2

0xc5e7,	// (0x000390ed) cell_vkb_candidate_pane_t1

0x6647,	// (0x0003314d) bg_popup_fep_shadow_pane_ParamLimits

0x6647,	// (0x0003314d) bg_popup_fep_shadow_pane

0x66fc,	// (0x00033202) bg_fep_hwr_top_pane_g4

0xc09c,	// (0x00038ba2) bg_hwr_side_pane_g1_ParamLimits

0xc09c,	// (0x00038ba2) bg_hwr_side_pane_g1

0x676d,	// (0x00033273) cell_hwr_side_pane_ParamLimits

0x676d,	// (0x00033273) cell_hwr_side_pane

0x67a8,	// (0x000332ae) fep_hwr_write_pane_g1_ParamLimits

0x67a8,	// (0x000332ae) fep_hwr_write_pane_g1

0x67b5,	// (0x000332bb) fep_hwr_write_pane_g2_ParamLimits

0x67b5,	// (0x000332bb) fep_hwr_write_pane_g2

0x67c2,	// (0x000332c8) fep_hwr_write_pane_g3_ParamLimits

0x67c2,	// (0x000332c8) fep_hwr_write_pane_g3

0x67d0,	// (0x000332d6) fep_hwr_write_pane_g4_ParamLimits

0x67d0,	// (0x000332d6) fep_hwr_write_pane_g4

0x0005,

0xfaf1,	// (0x0003c5f7) fep_hwr_write_pane_g_ParamLimits

0xfaf1,	// (0x0003c5f7) fep_hwr_write_pane_g

0x66fc,	// (0x00033202) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x66fc,	// (0x00033202) bg_fep_hwr_candidate_pane_g2

0x67e5,	// (0x000332eb) cell_hwr_candidate_pane_ParamLimits

0x67e5,	// (0x000332eb) cell_hwr_candidate_pane

0x6827,	// (0x0003332d) fep_hwr_candidate_pane_g1_ParamLimits

0xc0fc,	// (0x00038c02) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0fc,	// (0x00038c02) bg_popup_fep_shadow_pane_cp2

0xc29a,	// (0x00038da0) fep_vkb_top_pane_g4_ParamLimits

0xc29a,	// (0x00038da0) fep_vkb_top_pane_g4

0xc2e0,	// (0x00038de6) fep_vkb_side_pane_g2_ParamLimits

0xc2e0,	// (0x00038de6) fep_vkb_side_pane_g2

0x4c85,	// (0x0003178b) list_setting_pane_t4_ParamLimits

0x4c85,	// (0x0003178b) list_setting_pane_t4

0x4d1f,	// (0x00031825) list_setting_number_pane_t5_ParamLimits

0x4d1f,	// (0x00031825) list_setting_number_pane_t5

0x8ba5,	// (0x000356ab) list_double_heading_pane_cp2_ParamLimits

0x8ba5,	// (0x000356ab) list_double_heading_pane_cp2

0x82f3,	// (0x00034df9) list_double_heading_pane_g1_cp2_ParamLimits

0x82f3,	// (0x00034df9) list_double_heading_pane_g1_cp2

0x82ff,	// (0x00034e05) list_double_heading_pane_g2_cp2_ParamLimits

0x82ff,	// (0x00034e05) list_double_heading_pane_g2_cp2

0xc5f5,	// (0x000390fb) list_double_heading_pane_t1_cp2_ParamLimits

0xc5f5,	// (0x000390fb) list_double_heading_pane_t1_cp2

0xc60b,	// (0x00039111) list_double_heading_pane_t2_cp2_ParamLimits

0xc60b,	// (0x00039111) list_double_heading_pane_t2_cp2

0x306a,	// (0x0002fb70) aid_value_unit2

0x477f,	// (0x00031285) popup_preview_fixed_window

0x7ce1,	// (0x000347e7) bg_popup_preview_window_pane_cp02

0xc61d,	// (0x00039123) list_preview_fixed_pane

0xc663,	// (0x00039169) list_empty_pane_fp_ParamLimits

0xc663,	// (0x00039169) list_empty_pane_fp

0xc663,	// (0x00039169) list_single_cale_day_pane_fp_ParamLimits

0xc663,	// (0x00039169) list_single_cale_day_pane_fp

0xc663,	// (0x00039169) list_single_graphic_heading_pane_fp_ParamLimits

0xc663,	// (0x00039169) list_single_graphic_heading_pane_fp

0xc663,	// (0x00039169) list_single_graphic_pane_fp_ParamLimits

0xc663,	// (0x00039169) list_single_graphic_pane_fp

0xc663,	// (0x00039169) list_single_heading_pane_fp_ParamLimits

0xc663,	// (0x00039169) list_single_heading_pane_fp

0xc663,	// (0x00039169) list_single_pane_fp_ParamLimits

0xc663,	// (0x00039169) list_single_pane_fp

0xc678,	// (0x0003917e) list_single_pane_fp_g1_ParamLimits

0xc678,	// (0x0003917e) list_single_pane_fp_g1

0x68f9,	// (0x000333ff) list_single_pane_fp_g2_ParamLimits

0x68f9,	// (0x000333ff) list_single_pane_fp_g2

0x6905,	// (0x0003340b) list_single_pane_fp_g3_ParamLimits

0x6905,	// (0x0003340b) list_single_pane_fp_g3

0xc684,	// (0x0003918a) list_single_pane_fp_g4_ParamLimits

0xc684,	// (0x0003918a) list_single_pane_fp_g4

0x0003,

0xfb58,	// (0x0003c65e) list_single_pane_fp_g_ParamLimits

0xfb58,	// (0x0003c65e) list_single_pane_fp_g

0x6919,	// (0x0003341f) list_single_pane_fp_t1_ParamLimits

0x6919,	// (0x0003341f) list_single_pane_fp_t1

0x6930,	// (0x00033436) list_single_graphic_pane_fp_g1_ParamLimits

0x6930,	// (0x00033436) list_single_graphic_pane_fp_g1

0xc678,	// (0x0003917e) list_single_graphic_pane_fp_g2_ParamLimits

0xc678,	// (0x0003917e) list_single_graphic_pane_fp_g2

0x68f9,	// (0x000333ff) list_single_graphic_pane_fp_g3_ParamLimits

0x68f9,	// (0x000333ff) list_single_graphic_pane_fp_g3

0x6905,	// (0x0003340b) list_single_graphic_pane_fp_g4_ParamLimits

0x6905,	// (0x0003340b) list_single_graphic_pane_fp_g4

0xc684,	// (0x0003918a) list_single_graphic_pane_fp_g5_ParamLimits

0xc684,	// (0x0003918a) list_single_graphic_pane_fp_g5

0x0004,

0xfb61,	// (0x0003c667) list_single_graphic_pane_fp_g_ParamLimits

0xfb61,	// (0x0003c667) list_single_graphic_pane_fp_g

0x693c,	// (0x00033442) list_single_graphic_pane_fp_t1_ParamLimits

0x693c,	// (0x00033442) list_single_graphic_pane_fp_t1

0x6930,	// (0x00033436) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6930,	// (0x00033436) list_single_graphic_heading_pane_fp_g1

0xc678,	// (0x0003917e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc678,	// (0x0003917e) list_single_graphic_heading_pane_fp_g2

0x68f9,	// (0x000333ff) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x68f9,	// (0x000333ff) list_single_graphic_heading_pane_fp_g3

0x6905,	// (0x0003340b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6905,	// (0x0003340b) list_single_graphic_heading_pane_fp_g4

0xc684,	// (0x0003918a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc684,	// (0x0003918a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb61,	// (0x0003c667) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb61,	// (0x0003c667) list_single_graphic_heading_pane_fp_g

0x6952,	// (0x00033458) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6952,	// (0x00033458) list_single_graphic_heading_pane_fp_t1

0x6968,	// (0x0003346e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6968,	// (0x0003346e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6c,	// (0x0003c672) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6c,	// (0x0003c672) list_single_graphic_heading_pane_fp_t

0x697a,	// (0x00033480) list_single_cale_day_pane_fp_g1_ParamLimits

0x697a,	// (0x00033480) list_single_cale_day_pane_fp_g1

0xc690,	// (0x00039196) list_single_cale_day_pane_fp_g2_ParamLimits

0xc690,	// (0x00039196) list_single_cale_day_pane_fp_g2

0x69b2,	// (0x000334b8) list_single_cale_day_pane_fp_g3_ParamLimits

0x69b2,	// (0x000334b8) list_single_cale_day_pane_fp_g3

0x69da,	// (0x000334e0) list_single_cale_day_pane_fp_g4_ParamLimits

0x69da,	// (0x000334e0) list_single_cale_day_pane_fp_g4

0x69fe,	// (0x00033504) list_single_cale_day_pane_fp_g5_ParamLimits

0x69fe,	// (0x00033504) list_single_cale_day_pane_fp_g5

0x0004,

0xfb71,	// (0x0003c677) list_single_cale_day_pane_fp_g_ParamLimits

0xfb71,	// (0x0003c677) list_single_cale_day_pane_fp_g

0x6a22,	// (0x00033528) list_single_cale_day_pane_fp_t1_ParamLimits

0x6a22,	// (0x00033528) list_single_cale_day_pane_fp_t1

0x6a48,	// (0x0003354e) list_single_cale_day_pane_fp_t2_ParamLimits

0x6a48,	// (0x0003354e) list_single_cale_day_pane_fp_t2

0x6a61,	// (0x00033567) list_single_cale_day_pane_fp_t3_ParamLimits

0x6a61,	// (0x00033567) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7c,	// (0x0003c682) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7c,	// (0x0003c682) list_single_cale_day_pane_fp_t

0xc678,	// (0x0003917e) list_empty_pane_fp_g1_ParamLimits

0xc678,	// (0x0003917e) list_empty_pane_fp_g1

0x6a7a,	// (0x00033580) list_empty_pane_fp_t1

0x6a88,	// (0x0003358e) list_empty_pane_fp_t2

0x0001,

0xfb83,	// (0x0003c689) list_empty_pane_fp_t

0xc678,	// (0x0003917e) list_single_heading_pane_fp_g1_ParamLimits

0xc678,	// (0x0003917e) list_single_heading_pane_fp_g1

0x68f9,	// (0x000333ff) list_single_heading_pane_fp_g2_ParamLimits

0x68f9,	// (0x000333ff) list_single_heading_pane_fp_g2

0x6905,	// (0x0003340b) list_single_heading_pane_fp_g3_ParamLimits

0x6905,	// (0x0003340b) list_single_heading_pane_fp_g3

0x0002,

0xfb88,	// (0x0003c68e) list_single_heading_pane_fp_g_ParamLimits

0xfb88,	// (0x0003c68e) list_single_heading_pane_fp_g

0x6a96,	// (0x0003359c) list_single_heading_pane_fp_t1_ParamLimits

0x6a96,	// (0x0003359c) list_single_heading_pane_fp_t1

0x8730,	// (0x00035236) list_single_heading_pane_fp_t2_ParamLimits

0x8730,	// (0x00035236) list_single_heading_pane_fp_t2

0x0001,

0xfb8f,	// (0x0003c695) list_single_heading_pane_fp_t_ParamLimits

0xfb8f,	// (0x0003c695) list_single_heading_pane_fp_t

0x84f7,	// (0x00034ffd) aid_size_cell_fast

0x7c51,	// (0x00034757) soft_indicator_pane_cp1_t1

0x8534,	// (0x0003503a) cell_app_pane_cp2_ParamLimits

0x8534,	// (0x0003503a) cell_app_pane_cp2

0x6669,	// (0x0003316f) fep_hwr_candidate_drop_down_list_pane

0x6841,	// (0x00033347) fep_hwr_candidate_pane_g3_ParamLimits

0x6841,	// (0x00033347) fep_hwr_candidate_pane_g3

0x34a9,	// (0x0002ffaf) fep_hwr_candidate_pane_g4_ParamLimits

0x34a9,	// (0x0002ffaf) fep_hwr_candidate_pane_g4

0x0002,

0xfafe,	// (0x0003c604) fep_hwr_candidate_pane_g_ParamLimits

0xfafe,	// (0x0003c604) fep_hwr_candidate_pane_g

0xc181,	// (0x00038c87) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc181,	// (0x00038c87) fep_vkb_candidate_drop_down_list_pane

0xc592,	// (0x00039098) fep_vkb_candidate_pane_g3

0xc59a,	// (0x000390a0) fep_vkb_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0003c631) fep_vkb_candidate_pane_g

0x68ac,	// (0x000333b2) cell_hwr_candidate_pane_g1_ParamLimits

0x68ba,	// (0x000333c0) cell_hwr_candidate_pane_g3_ParamLimits

0x68ba,	// (0x000333c0) cell_hwr_candidate_pane_g3

0xd768,	// (0x0003a26e) cell_hwr_candidate_pane_g4_ParamLimits

0xd768,	// (0x0003a26e) cell_hwr_candidate_pane_g4

0x0002,

0xfb4a,	// (0x0003c650) cell_hwr_candidate_pane_g_ParamLimits

0xfb4a,	// (0x0003c650) cell_hwr_candidate_pane_g

0xc5b1,	// (0x000390b7) cell_vkb_candidate_pane_g3_ParamLimits

0xc5b1,	// (0x000390b7) cell_vkb_candidate_pane_g3

0xc5cc,	// (0x000390d2) cell_vkb_candidate_pane_g4_ParamLimits

0xc5cc,	// (0x000390d2) cell_vkb_candidate_pane_g4

0xc69c,	// (0x000391a2) cell_app_pane_cp2_g1_ParamLimits

0xc69c,	// (0x000391a2) cell_app_pane_cp2_g1

0xc6ba,	// (0x000391c0) cell_app_pane_cp2_g2_ParamLimits

0xc6ba,	// (0x000391c0) cell_app_pane_cp2_g2

0x0001,

0xfb94,	// (0x0003c69a) cell_app_pane_cp2_g_ParamLimits

0xfb94,	// (0x0003c69a) cell_app_pane_cp2_g

0xc6c6,	// (0x000391cc) cell_app_pane_cp2_t1_ParamLimits

0xc6c6,	// (0x000391cc) cell_app_pane_cp2_t1

0x82e5,	// (0x00034deb) grid_highlight_pane_cp1_ParamLimits

0x82e5,	// (0x00034deb) grid_highlight_pane_cp1

0x6aa8,	// (0x000335ae) cell_hwr_candidate_pane_cp1_ParamLimits

0x6aa8,	// (0x000335ae) cell_hwr_candidate_pane_cp1

0x68ac,	// (0x000333b2) fep_hwr_candidate_drop_down_list_pane_g1

0x6ac7,	// (0x000335cd) fep_hwr_candidate_drop_down_list_pane_g2

0x6ad4,	// (0x000335da) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb99,	// (0x0003c69f) fep_hwr_candidate_drop_down_list_pane_g

0x6ae1,	// (0x000335e7) fep_hwr_candidate_drop_down_list_scroll_pane

0x6aea,	// (0x000335f0) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6aea,	// (0x000335f0) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6af7,	// (0x000335fd) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6af7,	// (0x000335fd) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6b04,	// (0x0003360a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6b04,	// (0x0003360a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6b11,	// (0x00033617) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6b11,	// (0x00033617) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6b2c,	// (0x00033632) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6b2c,	// (0x00033632) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6b47,	// (0x0003364d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6b47,	// (0x0003364d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6b62,	// (0x00033668) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6b62,	// (0x00033668) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6b7d,	// (0x00033683) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6b7d,	// (0x00033683) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba0,	// (0x0003c6a6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba0,	// (0x0003c6a6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc6d8,	// (0x000391de) cell_vkb_candidate_pane_cp1_ParamLimits

0xc6d8,	// (0x000391de) cell_vkb_candidate_pane_cp1

0xc29a,	// (0x00038da0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc29a,	// (0x00038da0) fep_vkb_candidate_drop_down_list_pane_g1

0xc6f8,	// (0x000391fe) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc6f8,	// (0x000391fe) fep_vkb_candidate_drop_down_list_pane_g2

0xc705,	// (0x0003920b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc705,	// (0x0003920b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb1,	// (0x0003c6b7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb1,	// (0x0003c6b7) fep_vkb_candidate_drop_down_list_pane_g

0xc712,	// (0x00039218) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc712,	// (0x00039218) fep_vkb_candidate_drop_down_list_scroll_pane

0xc71f,	// (0x00039225) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc71f,	// (0x00039225) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc72c,	// (0x00039232) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc72c,	// (0x00039232) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc738,	// (0x0003923e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc738,	// (0x0003923e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc744,	// (0x0003924a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc744,	// (0x0003924a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc765,	// (0x0003926b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc765,	// (0x0003926b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc786,	// (0x0003928c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc786,	// (0x0003928c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7a7,	// (0x000392ad) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7a7,	// (0x000392ad) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7c8,	// (0x000392ce) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7c8,	// (0x000392ce) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb8,	// (0x0003c6be) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb8,	// (0x0003c6be) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7982,	// (0x00034488) title_pane_g1_ParamLimits

0x798f,	// (0x00034495) title_pane_g2_ParamLimits

0xf527,	// (0x0003c02d) title_pane_g_ParamLimits

0x8b4e,	// (0x00035654) aid_call2_pane

0x8b56,	// (0x0003565c) aid_call_pane

0x8b5e,	// (0x00035664) popup_clock_analogue_window_g1

0x8b5e,	// (0x00035664) popup_clock_analogue_window_g2

0x5163,	// (0x00031c69) popup_clock_analogue_window_g3

0x516c,	// (0x00031c72) popup_clock_analogue_window_g4

0x307c,	// (0x0002fb82) popup_clock_analogue_window_g5

0x0004,

0xf6d1,	// (0x0003c1d7) popup_clock_analogue_window_g

0x5174,	// (0x00031c7a) popup_clock_analogue_window_t1

0x5182,	// (0x00031c88) clock_digital_number_pane_ParamLimits

0x5182,	// (0x00031c88) clock_digital_number_pane

0x518e,	// (0x00031c94) clock_digital_number_pane_cp02_ParamLimits

0x518e,	// (0x00031c94) clock_digital_number_pane_cp02

0x519a,	// (0x00031ca0) clock_digital_number_pane_cp03_ParamLimits

0x519a,	// (0x00031ca0) clock_digital_number_pane_cp03

0x51a6,	// (0x00031cac) clock_digital_number_pane_cp04_ParamLimits

0x51a6,	// (0x00031cac) clock_digital_number_pane_cp04

0x51b2,	// (0x00031cb8) clock_digital_separator_pane_ParamLimits

0x51b2,	// (0x00031cb8) clock_digital_separator_pane

0x51be,	// (0x00031cc4) popup_clock_digital_window_t1_ParamLimits

0x51be,	// (0x00031cc4) popup_clock_digital_window_t1

0x307c,	// (0x0002fb82) clock_digital_number_pane_g1

0x307c,	// (0x0002fb82) clock_digital_number_pane_g2

0x0001,

0xf6dc,	// (0x0003c1e2) clock_digital_number_pane_g

0x307c,	// (0x0002fb82) clock_digital_separator_pane_g1

0x307c,	// (0x0002fb82) clock_digital_separator_pane_g2

0x0001,

0xf6dc,	// (0x0003c1e2) clock_digital_separator_pane_g

0x94ef,	// (0x00035ff5) aid_fill_nsta_ParamLimits

0x963b,	// (0x00036141) indicator_nsta_pane_ParamLimits

0x97b4,	// (0x000362ba) popup_clock_analogue_window

0x97b4,	// (0x000362ba) popup_clock_digital_window

0xb9fe,	// (0x00038504) grid_indicator_nsta_pane_ParamLimits

0xba27,	// (0x0003852d) clock_nsta_pane_t2

0x0001,

0xfa7e,	// (0x0003c584) clock_nsta_pane_t

0x5127,	// (0x00031c2d) aid_size_max_handle

0x5131,	// (0x00031c37) aid_size_min_handle

0x918f,	// (0x00035c95) editor_scroll_pane

0xc7e3,	// (0x000392e9) ex_editor_pane

0x8465,	// (0x00034f6b) scroll_pane_cp13

0x8284,	// (0x00034d8a) scroll_pane_cp14

0x8b8d,	// (0x00035693) scroll_pane_cp36

0x8bb9,	// (0x000356bf) list_single_graphic_hl_pane_cp2_ParamLimits

0x8bb9,	// (0x000356bf) list_single_graphic_hl_pane_cp2

0xaf9e,	// (0x00037aa4) list_single_graphic_hl_pane_ParamLimits

0xaf9e,	// (0x00037aa4) list_single_graphic_hl_pane

0x8746,	// (0x0003524c) aid_size_min_hl_cp1

0xc7eb,	// (0x000392f1) list_highlight_pane_cp34_ParamLimits

0xc7eb,	// (0x000392f1) list_highlight_pane_cp34

0xc7fc,	// (0x00039302) list_single_graphic_hl_pane_g1_ParamLimits

0xc7fc,	// (0x00039302) list_single_graphic_hl_pane_g1

0x874f,	// (0x00035255) list_single_graphic_hl_pane_g2_ParamLimits

0x874f,	// (0x00035255) list_single_graphic_hl_pane_g2

0x874f,	// (0x00035255) list_single_graphic_hl_pane_g3_ParamLimits

0x874f,	// (0x00035255) list_single_graphic_hl_pane_g3

0x875b,	// (0x00035261) list_single_graphic_hl_pane_g4_ParamLimits

0x875b,	// (0x00035261) list_single_graphic_hl_pane_g4

0x8767,	// (0x0003526d) list_single_graphic_hl_pane_g5_ParamLimits

0x8767,	// (0x0003526d) list_single_graphic_hl_pane_g5

0x0004,

0xfbc9,	// (0x0003c6cf) list_single_graphic_hl_pane_g_ParamLimits

0xfbc9,	// (0x0003c6cf) list_single_graphic_hl_pane_g

0x877b,	// (0x00035281) list_single_graphic_hl_pane_t1_ParamLimits

0x877b,	// (0x00035281) list_single_graphic_hl_pane_t1

0xc809,	// (0x0003930f) aid_size_min_hl_cp2

0xc812,	// (0x00039318) list_highlight_pane_cp34_cp2_ParamLimits

0xc812,	// (0x00039318) list_highlight_pane_cp34_cp2

0xc7fc,	// (0x00039302) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7fc,	// (0x00039302) list_single_graphic_hl_pane_g1_cp2

0xc81f,	// (0x00039325) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc81f,	// (0x00039325) list_single_graphic_hl_pane_g2_cp2

0xc82b,	// (0x00039331) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc82b,	// (0x00039331) list_single_graphic_hl_pane_g3_cp2

0xc839,	// (0x0003933f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc839,	// (0x0003933f) list_single_graphic_hl_pane_g4_cp2

0xc845,	// (0x0003934b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc845,	// (0x0003934b) list_single_graphic_hl_pane_g5_cp2

0x54fc,	// (0x00032002) control_pane_g4_ParamLimits

0x54fc,	// (0x00032002) control_pane_g4

0x94b3,	// (0x00035fb9) bg_popup_sub_pane_cp10_ParamLimits

0xc026,	// (0x00038b2c) list_choice_list_pane_ParamLimits

0xc035,	// (0x00038b3b) scroll_pane_cp23

0x7ce1,	// (0x000347e7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc61d,	// (0x00039123) list_preview_fixed_pane_ParamLimits

0xc633,	// (0x00039139) list_preview_fixed_pane_cp_ParamLimits

0xc633,	// (0x00039139) list_preview_fixed_pane_cp

0xc63f,	// (0x00039145) popup_preview_fixed_window_g1_ParamLimits

0xc63f,	// (0x00039145) popup_preview_fixed_window_g1

0xc64b,	// (0x00039151) popup_preview_fixed_window_g2_ParamLimits

0xc64b,	// (0x00039151) popup_preview_fixed_window_g2

0x0002,

0xfb51,	// (0x0003c657) popup_preview_fixed_window_g_ParamLimits

0xfb51,	// (0x0003c657) popup_preview_fixed_window_g

0x509b,	// (0x00031ba1) aid_navi_side_left_pane_ParamLimits

0x50b0,	// (0x00031bb6) aid_navi_side_right_pane_ParamLimits

0x50c8,	// (0x00031bce) navi_icon_pane_stacon_ParamLimits

0x50dc,	// (0x00031be2) navi_navi_pane_stacon_ParamLimits

0x50c8,	// (0x00031bce) navi_text_pane_stacon_ParamLimits

0x4640,	// (0x00031146) main_text_info_pane

0xc86f,	// (0x00039375) listscroll_text_info_pane

0xc877,	// (0x0003937d) list_text_info_pane_ParamLimits

0xc877,	// (0x0003937d) list_text_info_pane

0xc886,	// (0x0003938c) scroll_pane_cp24_ParamLimits

0xc886,	// (0x0003938c) scroll_pane_cp24

0xc8a4,	// (0x000393aa) list_text_info_pane_t1_ParamLimits

0xc8a4,	// (0x000393aa) list_text_info_pane_t1

0x5672,	// (0x00032178) popup_fast_swap2_window_ParamLimits

0x5672,	// (0x00032178) popup_fast_swap2_window

0xc8d5,	// (0x000393db) aid_size_cell_fast2

0x3072,	// (0x0002fb78) bg_popup_window_pane_cp17

0x9e3d,	// (0x00036943) heading_pane_cp2

0xc8df,	// (0x000393e5) listscroll_fast2_pane

0xc8e7,	// (0x000393ed) grid_fast2_pane

0xc8f1,	// (0x000393f7) listscroll_fast2_pane_g1

0xc8f9,	// (0x000393ff) listscroll_fast2_pane_g2

0x0001,

0xfbd4,	// (0x0003c6da) listscroll_fast2_pane_g

0x8465,	// (0x00034f6b) scroll_pane_cp26

0xc903,	// (0x00039409) cell_fast2_pane_ParamLimits

0xc903,	// (0x00039409) cell_fast2_pane

0xc918,	// (0x0003941e) cell_fast2_pane_g1

0xc921,	// (0x00039427) cell_fast2_pane_g2

0xc92a,	// (0x00039430) cell_fast2_pane_g3

0x0002,

0xfbd9,	// (0x0003c6df) cell_fast2_pane_g

0x8041,	// (0x00034b47) grid_highlight_pane_cp9

0x5630,	// (0x00032136) main_eswt_pane_ParamLimits

0x5630,	// (0x00032136) main_eswt_pane

0xc89b,	// (0x000393a1) list_single_text_info_pane

0xc932,	// (0x00039438) eswt_ctrl_button_pane

0xc932,	// (0x00039438) eswt_ctrl_canvas_pane

0xc93a,	// (0x00039440) eswt_ctrl_combo_pane

0xc932,	// (0x00039438) eswt_ctrl_default_pane

0xc932,	// (0x00039438) eswt_ctrl_label_pane

0xc942,	// (0x00039448) eswt_ctrl_wait_pane

0xc94a,	// (0x00039450) eswt_shell_pane

0x3072,	// (0x0002fb78) listscroll_eswt_app_pane

0xc96a,	// (0x00039470) popup_eswt_tasktip_window_ParamLimits

0xc96a,	// (0x00039470) popup_eswt_tasktip_window

0x9a51,	// (0x00036557) bg_popup_window_pane_cp18

0xc97b,	// (0x00039481) eswt_control_pane_g1_ParamLimits

0xc97b,	// (0x00039481) eswt_control_pane_g1

0xc988,	// (0x0003948e) eswt_control_pane_g2_ParamLimits

0xc988,	// (0x0003948e) eswt_control_pane_g2

0xc995,	// (0x0003949b) eswt_control_pane_g3_ParamLimits

0xc995,	// (0x0003949b) eswt_control_pane_g3

0xc9a2,	// (0x000394a8) eswt_control_pane_g4_ParamLimits

0xc9a2,	// (0x000394a8) eswt_control_pane_g4

0x0003,

0xfbe0,	// (0x0003c6e6) eswt_control_pane_g_ParamLimits

0xfbe0,	// (0x0003c6e6) eswt_control_pane_g

0x82e5,	// (0x00034deb) bg_button_pane_ParamLimits

0x82e5,	// (0x00034deb) bg_button_pane

0x8056,	// (0x00034b5c) common_borders_pane_copy2_ParamLimits

0x8056,	// (0x00034b5c) common_borders_pane_copy2

0xc9af,	// (0x000394b5) control_button_pane_g1_ParamLimits

0xc9af,	// (0x000394b5) control_button_pane_g1

0xc9bb,	// (0x000394c1) control_button_pane_g2_ParamLimits

0xc9bb,	// (0x000394c1) control_button_pane_g2

0xc9c7,	// (0x000394cd) control_button_pane_g3_ParamLimits

0xc9c7,	// (0x000394cd) control_button_pane_g3

0x0002,

0xfbe9,	// (0x0003c6ef) control_button_pane_g_ParamLimits

0xfbe9,	// (0x0003c6ef) control_button_pane_g

0xc9db,	// (0x000394e1) control_button_pane_t1

0xc9e9,	// (0x000394ef) control_button_pane_t2

0x0001,

0xfbf0,	// (0x0003c6f6) control_button_pane_t

0x99dd,	// (0x000364e3) bg_button_pane_g1

0x99ed,	// (0x000364f3) bg_button_pane_g2

0x99e5,	// (0x000364eb) bg_button_pane_g3

0x99fd,	// (0x00036503) bg_button_pane_g4

0x99f5,	// (0x000364fb) bg_button_pane_g5

0x9a05,	// (0x0003650b) bg_button_pane_g6

0x9a0d,	// (0x00036513) bg_button_pane_g7

0x9a1d,	// (0x00036523) bg_button_pane_g8

0x9a15,	// (0x0003651b) bg_button_pane_g9

0x0008,

0xf83f,	// (0x0003c345) bg_button_pane_g

0xbfe1,	// (0x00038ae7) common_borders_pane_ParamLimits

0xbfe1,	// (0x00038ae7) common_borders_pane

0xc97b,	// (0x00039481) eswt_control_pane_g1_copy1_ParamLimits

0xc97b,	// (0x00039481) eswt_control_pane_g1_copy1

0xc988,	// (0x0003948e) eswt_control_pane_g2_copy1_ParamLimits

0xc988,	// (0x0003948e) eswt_control_pane_g2_copy1

0xc995,	// (0x0003949b) eswt_control_pane_g3_copy1_ParamLimits

0xc995,	// (0x0003949b) eswt_control_pane_g3_copy1

0xc9a2,	// (0x000394a8) eswt_control_pane_g4_copy1_ParamLimits

0xc9a2,	// (0x000394a8) eswt_control_pane_g4_copy1

0xc01c,	// (0x00038b22) bg_eswt_ctrl_canvas_pane_g1

0xbfe1,	// (0x00038ae7) common_borders_pane_cp2_ParamLimits

0xbfe1,	// (0x00038ae7) common_borders_pane_cp2

0xbfe1,	// (0x00038ae7) common_borders_pane_cp3_ParamLimits

0xbfe1,	// (0x00038ae7) common_borders_pane_cp3

0xc9f7,	// (0x000394fd) separator_horizontal_pane

0xc9ff,	// (0x00039505) separator_vertical_pane

0xc97b,	// (0x00039481) eswt_control_pane_g1_copy2_ParamLimits

0xc97b,	// (0x00039481) eswt_control_pane_g1_copy2

0xc988,	// (0x0003948e) eswt_control_pane_g2_copy2_ParamLimits

0xc988,	// (0x0003948e) eswt_control_pane_g2_copy2

0xc995,	// (0x0003949b) eswt_control_pane_g3_copy2_ParamLimits

0xc995,	// (0x0003949b) eswt_control_pane_g3_copy2

0xc9a2,	// (0x000394a8) eswt_control_pane_g4_copy2_ParamLimits

0xc9a2,	// (0x000394a8) eswt_control_pane_g4_copy2

0x3072,	// (0x0002fb78) common_borders_pane_cp4

0xca08,	// (0x0003950e) separator_horizontal_pane_g1

0xca11,	// (0x00039517) separator_horizontal_pane_g2

0xca1a,	// (0x00039520) separator_horizontal_pane_g3

0x0002,

0xfbf5,	// (0x0003c6fb) separator_horizontal_pane_g

0xc97b,	// (0x00039481) eswt_control_pane_g1_copy3_ParamLimits

0xc97b,	// (0x00039481) eswt_control_pane_g1_copy3

0xc988,	// (0x0003948e) eswt_control_pane_g2_copy3_ParamLimits

0xc988,	// (0x0003948e) eswt_control_pane_g2_copy3

0xc995,	// (0x0003949b) eswt_control_pane_g3_copy3_ParamLimits

0xc995,	// (0x0003949b) eswt_control_pane_g3_copy3

0xc9a2,	// (0x000394a8) eswt_control_pane_g4_copy3_ParamLimits

0xc9a2,	// (0x000394a8) eswt_control_pane_g4_copy3

0x3072,	// (0x0002fb78) common_borders_pane_cp5

0xca23,	// (0x00039529) separator_vertical_pane_g1

0xca2c,	// (0x00039532) separator_vertical_pane_g2

0xca35,	// (0x0003953b) separator_vertical_pane_g3

0x0002,

0xfbfc,	// (0x0003c702) separator_vertical_pane_g

0xc97b,	// (0x00039481) eswt_control_pane_g1_copy4_ParamLimits

0xc97b,	// (0x00039481) eswt_control_pane_g1_copy4

0xc988,	// (0x0003948e) eswt_control_pane_g2_copy4_ParamLimits

0xc988,	// (0x0003948e) eswt_control_pane_g2_copy4

0xc995,	// (0x0003949b) eswt_control_pane_g3_copy4_ParamLimits

0xc995,	// (0x0003949b) eswt_control_pane_g3_copy4

0xc9a2,	// (0x000394a8) eswt_control_pane_g4_copy4_ParamLimits

0xc9a2,	// (0x000394a8) eswt_control_pane_g4_copy4

0xca3e,	// (0x00039544) eswt_ctrl_combo_button_pane

0xca46,	// (0x0003954c) eswt_ctrl_input_pane

0xca4e,	// (0x00039554) popup_choice_list_window_cp70

0xca56,	// (0x0003955c) eswt_ctrl_input_pane_t1

0x3072,	// (0x0002fb78) input_focus_pane_cp70

0xbfe1,	// (0x00038ae7) bg_button_pane_cp70_ParamLimits

0xbfe1,	// (0x00038ae7) bg_button_pane_cp70

0xca64,	// (0x0003956a) eswt_ctrl_combo_button_pane_g1

0xca6c,	// (0x00039572) wait_bar_pane_cp70

0x9a51,	// (0x00036557) bg_popup_window_pane_cp70_ParamLimits

0x9a51,	// (0x00036557) bg_popup_window_pane_cp70

0xca74,	// (0x0003957a) popup_eswt_tasktip_window_t1

0xca8a,	// (0x00039590) wait_bar_pane_cp71_ParamLimits

0xca8a,	// (0x00039590) wait_bar_pane_cp71

0xca96,	// (0x0003959c) grid_eswt_app_pane

0x8967,	// (0x0003546d) scroll_pane_cp70

0xca9f,	// (0x000395a5) cell_eswt_app_pane_ParamLimits

0xca9f,	// (0x000395a5) cell_eswt_app_pane

0xcacf,	// (0x000395d5) cell_eswt_app_pane_g1_ParamLimits

0xcacf,	// (0x000395d5) cell_eswt_app_pane_g1

0xcafe,	// (0x00039604) cell_eswt_app_pane_g2_ParamLimits

0xcafe,	// (0x00039604) cell_eswt_app_pane_g2

0x0001,

0xfc03,	// (0x0003c709) cell_eswt_app_pane_g_ParamLimits

0xfc03,	// (0x0003c709) cell_eswt_app_pane_g

0xcb27,	// (0x0003962d) cell_eswt_app_pane_t1_ParamLimits

0xcb27,	// (0x0003962d) cell_eswt_app_pane_t1

0xcb59,	// (0x0003965f) grid_highlight_pane_cp70_ParamLimits

0xcb59,	// (0x0003965f) grid_highlight_pane_cp70

0x9057,	// (0x00035b5d) set_content_pane_g1

0x943a,	// (0x00035f40) status_small_volume_pane

0x6b98,	// (0x0003369e) status_small_volume_pane_g1

0x6ba0,	// (0x000336a6) volume_small2_pane

0x6ba9,	// (0x000336af) volume_small2_pane_g1

0x6bb2,	// (0x000336b8) volume_small2_pane_g2

0x6bbb,	// (0x000336c1) volume_small2_pane_g3

0x6bc4,	// (0x000336ca) volume_small2_pane_g4

0x6bcd,	// (0x000336d3) volume_small2_pane_g5

0x6bd6,	// (0x000336dc) volume_small2_pane_g6

0x6bdf,	// (0x000336e5) volume_small2_pane_g7

0x6be8,	// (0x000336ee) volume_small2_pane_g8

0x6bf1,	// (0x000336f7) volume_small2_pane_g9

0x6bfa,	// (0x00033700) volume_small2_pane_g10

0x0009,

0xfc08,	// (0x0003c70e) volume_small2_pane_g

0xc3e2,	// (0x00038ee8) fep_vkb_top_text_pane_g1_ParamLimits

0xc3fd,	// (0x00038f03) fep_vkb_top_text_pane_t1_ParamLimits

0xc657,	// (0x0003915d) popup_preview_fixed_window_g3_ParamLimits

0xc657,	// (0x0003915d) popup_preview_fixed_window_g3

0x5b23,	// (0x00032629) popup_toolbar_trans_pane

0xada5,	// (0x000378ab) aid_height_set_list_ParamLimits

0xadb6,	// (0x000378bc) aid_size_parent_ParamLimits

0x94b3,	// (0x00035fb9) list_highlight_pane_cp2_ParamLimits

0x9057,	// (0x00035b5d) set_content_pane_g1_ParamLimits

0x6184,	// (0x00032c8a) list_single_image_pane_ParamLimits

0x6184,	// (0x00032c8a) list_single_image_pane

0xcb65,	// (0x0003966b) aid_size_cell_image_ParamLimits

0xcb65,	// (0x0003966b) aid_size_cell_image

0xcb72,	// (0x00039678) grid_single_image_pane_ParamLimits

0xcb72,	// (0x00039678) grid_single_image_pane

0xb80a,	// (0x00038310) list_single_image_pane_g1_ParamLimits

0xb80a,	// (0x00038310) list_single_image_pane_g1

0xcb7e,	// (0x00039684) list_single_image_pane_g2_ParamLimits

0xcb7e,	// (0x00039684) list_single_image_pane_g2

0x0001,

0xfc1d,	// (0x0003c723) list_single_image_pane_g_ParamLimits

0xfc1d,	// (0x0003c723) list_single_image_pane_g

0xcb92,	// (0x00039698) list_single_image_pane_t1_ParamLimits

0xcb92,	// (0x00039698) list_single_image_pane_t1

0xcba8,	// (0x000396ae) cell_image_list_pane_ParamLimits

0xcba8,	// (0x000396ae) cell_image_list_pane

0xcbbc,	// (0x000396c2) cell_image_list_pane_g1

0xcbc5,	// (0x000396cb) cell_image_list_pane_g2

0x0001,

0xfc22,	// (0x0003c728) cell_image_list_pane_g

0xcbce,	// (0x000396d4) aid_size_cell_tb_trans_pane

0x82e5,	// (0x00034deb) bg_tb_trans_pane

0xcbe0,	// (0x000396e6) grid_tb_trans_pane

0x99dd,	// (0x000364e3) bg_tb_trans_pane_g1

0x99ed,	// (0x000364f3) bg_tb_trans_pane_g2

0x99e5,	// (0x000364eb) bg_tb_trans_pane_g3

0x99fd,	// (0x00036503) bg_tb_trans_pane_g4

0x99f5,	// (0x000364fb) bg_tb_trans_pane_g5

0x9a1d,	// (0x00036523) bg_tb_trans_pane_g6

0x9a15,	// (0x0003651b) bg_tb_trans_pane_g7

0x9a05,	// (0x0003650b) bg_tb_trans_pane_g8

0x9a0d,	// (0x00036513) bg_tb_trans_pane_g9

0x0008,

0xfc27,	// (0x0003c72d) bg_tb_trans_pane_g

0xcbf4,	// (0x000396fa) cell_toolbar_trans_pane_ParamLimits

0xcbf4,	// (0x000396fa) cell_toolbar_trans_pane

0xc01c,	// (0x00038b22) cell_toolbar_trans_pane_g1

0xbbf8,	// (0x000386fe) list_form2_midp_pane_t1

0xbc06,	// (0x0003870c) list_form2_midp_pane_t2

0x0001,

0xfac4,	// (0x0003c5ca) list_form2_midp_pane_t

0xbc14,	// (0x0003871a) scroll_pane_cp51_ParamLimits

0xbdd0,	// (0x000388d6) form2_midp_wait_pane_g1

0xbdd9,	// (0x000388df) form2_midp_wait_pane_g2

0xbde2,	// (0x000388e8) form2_midp_wait_pane_g3

0x0002,

0xfad9,	// (0x0003c5df) form2_midp_wait_pane_g

0x7a58,	// (0x0003455e) list_highlight_pane_cp21_ParamLimits

0xbe2e,	// (0x00038934) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe3d,	// (0x00038943) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6125,	// (0x00032c2b) list_single_2graphic_im_pane_ParamLimits

0x6125,	// (0x00032c2b) list_single_2graphic_im_pane

0xcc1a,	// (0x00039720) list_single_2graphic_im_pane_g1_ParamLimits

0xcc1a,	// (0x00039720) list_single_2graphic_im_pane_g1

0xcc2b,	// (0x00039731) list_single_2graphic_im_pane_g2_ParamLimits

0xcc2b,	// (0x00039731) list_single_2graphic_im_pane_g2

0xcc37,	// (0x0003973d) list_single_2graphic_im_pane_g3_ParamLimits

0xcc37,	// (0x0003973d) list_single_2graphic_im_pane_g3

0x0003,

0xfc3a,	// (0x0003c740) list_single_2graphic_im_pane_g_ParamLimits

0xfc3a,	// (0x0003c740) list_single_2graphic_im_pane_g

0xcc57,	// (0x0003975d) list_single_2graphic_im_pane_t1_ParamLimits

0xcc57,	// (0x0003975d) list_single_2graphic_im_pane_t1

0xc663,	// (0x00039169) list_single_graphic_2heading_pane_fp_ParamLimits

0xc663,	// (0x00039169) list_single_graphic_2heading_pane_fp

0x6930,	// (0x00033436) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6930,	// (0x00033436) list_single_graphic_2heading_pane_fp_g1

0xc678,	// (0x0003917e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc678,	// (0x0003917e) list_single_graphic_2heading_pane_fp_g2

0x68f9,	// (0x000333ff) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x68f9,	// (0x000333ff) list_single_graphic_2heading_pane_fp_g3

0x6905,	// (0x0003340b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6905,	// (0x0003340b) list_single_graphic_2heading_pane_fp_g4

0xc684,	// (0x0003918a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc684,	// (0x0003918a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb61,	// (0x0003c667) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb61,	// (0x0003c667) list_single_graphic_2heading_pane_fp_g

0x8791,	// (0x00035297) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8791,	// (0x00035297) list_single_graphic_2heading_pane_fp_t1

0x6968,	// (0x0003346e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6968,	// (0x0003346e) list_single_graphic_2heading_pane_fp_t2

0x87a7,	// (0x000352ad) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x87a7,	// (0x000352ad) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc43,	// (0x0003c749) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc43,	// (0x0003c749) list_single_graphic_2heading_pane_fp_t

0xc0a8,	// (0x00038bae) fep_hwr_write_pane_g5_ParamLimits

0xc0a8,	// (0x00038bae) fep_hwr_write_pane_g5

0xc0b4,	// (0x00038bba) fep_hwr_write_pane_g6_ParamLimits

0xc0b4,	// (0x00038bba) fep_hwr_write_pane_g6

0xc94a,	// (0x00039450) eswt_shell_pane_ParamLimits

0x9a51,	// (0x00036557) bg_popup_window_pane_cp18_ParamLimits

0x9e3d,	// (0x00036943) heading_pane_cp70

0xca74,	// (0x0003957a) popup_eswt_tasktip_window_t1_ParamLimits

0x9544,	// (0x0003604a) aid_touch_tab_arrow_left

0x9553,	// (0x00036059) aid_touch_tab_arrow_right

0x79a0,	// (0x000344a6) title_pane_g3_ParamLimits

0x79a0,	// (0x000344a6) title_pane_g3

0x82a4,	// (0x00034daa) set_value_pane_g1

0x5b23,	// (0x00032629) popup_toolbar_trans_pane_ParamLimits

0xcbce,	// (0x000396d4) aid_size_cell_tb_trans_pane_ParamLimits

0x82e5,	// (0x00034deb) bg_tb_trans_pane_ParamLimits

0xcbe0,	// (0x000396e6) grid_tb_trans_pane_ParamLimits

0x7ce1,	// (0x000347e7) cont_note_pane_ParamLimits

0x7ce1,	// (0x000347e7) cont_note_pane

0x8056,	// (0x00034b5c) cont_snote2_single_text_pane_ParamLimits

0x8056,	// (0x00034b5c) cont_snote2_single_text_pane

0x8056,	// (0x00034b5c) cont_snote2_single_graphic_pane_ParamLimits

0x8056,	// (0x00034b5c) cont_snote2_single_graphic_pane

0xa06c,	// (0x00036b72) cont_note_wait_pane_ParamLimits

0xa06c,	// (0x00036b72) cont_note_wait_pane

0xa06c,	// (0x00036b72) cont_note_image_pane_ParamLimits

0xa06c,	// (0x00036b72) cont_note_image_pane

0xcc88,	// (0x0003978e) popup_note2_window_g1_ParamLimits

0xcc88,	// (0x0003978e) popup_note2_window_g1

0xccb9,	// (0x000397bf) popup_note2_window_t1_ParamLimits

0xccb9,	// (0x000397bf) popup_note2_window_t1

0xccfe,	// (0x00039804) popup_note2_window_t2_ParamLimits

0xccfe,	// (0x00039804) popup_note2_window_t2

0xcd43,	// (0x00039849) popup_note2_window_t3_ParamLimits

0xcd43,	// (0x00039849) popup_note2_window_t3

0xcd88,	// (0x0003988e) popup_note2_window_t4_ParamLimits

0xcd88,	// (0x0003988e) popup_note2_window_t4

0x7d65,	// (0x0003486b) popup_note2_window_t5_ParamLimits

0x7d65,	// (0x0003486b) popup_note2_window_t5

0x0004,

0xfc4f,	// (0x0003c755) popup_note2_window_t_ParamLimits

0xfc4f,	// (0x0003c755) popup_note2_window_t

0xcdb7,	// (0x000398bd) popup_note2_image_window_g1_ParamLimits

0xcdb7,	// (0x000398bd) popup_note2_image_window_g1

0xcdc3,	// (0x000398c9) popup_note2_image_window_g2_ParamLimits

0xcdc3,	// (0x000398c9) popup_note2_image_window_g2

0x0001,

0xfc5a,	// (0x0003c760) popup_note2_image_window_g_ParamLimits

0xfc5a,	// (0x0003c760) popup_note2_image_window_g

0xcdd5,	// (0x000398db) popup_note2_image_window_t1_ParamLimits

0xcdd5,	// (0x000398db) popup_note2_image_window_t1

0xcded,	// (0x000398f3) popup_note2_image_window_t2_ParamLimits

0xcded,	// (0x000398f3) popup_note2_image_window_t2

0xce05,	// (0x0003990b) popup_note2_image_window_t3_ParamLimits

0xce05,	// (0x0003990b) popup_note2_image_window_t3

0x0002,

0xfc5f,	// (0x0003c765) popup_note2_image_window_t_ParamLimits

0xfc5f,	// (0x0003c765) popup_note2_image_window_t

0xa07a,	// (0x00036b80) popup_note2_wait_window_g1_ParamLimits

0xa07a,	// (0x00036b80) popup_note2_wait_window_g1

0xce21,	// (0x00039927) popup_note2_wait_window_g2_ParamLimits

0xce21,	// (0x00039927) popup_note2_wait_window_g2

0xa092,	// (0x00036b98) popup_note2_wait_window_g3_ParamLimits

0xa092,	// (0x00036b98) popup_note2_wait_window_g3

0x0002,

0xfc66,	// (0x0003c76c) popup_note2_wait_window_g_ParamLimits

0xfc66,	// (0x0003c76c) popup_note2_wait_window_g

0xce2d,	// (0x00039933) popup_note2_wait_window_t1_ParamLimits

0xce2d,	// (0x00039933) popup_note2_wait_window_t1

0xce4b,	// (0x00039951) popup_note2_wait_window_t2_ParamLimits

0xce4b,	// (0x00039951) popup_note2_wait_window_t2

0xce69,	// (0x0003996f) popup_note2_wait_window_t3_ParamLimits

0xce69,	// (0x0003996f) popup_note2_wait_window_t3

0xce7b,	// (0x00039981) popup_note2_wait_window_t4_ParamLimits

0xce7b,	// (0x00039981) popup_note2_wait_window_t4

0x0003,

0xfc6d,	// (0x0003c773) popup_note2_wait_window_t_ParamLimits

0xfc6d,	// (0x0003c773) popup_note2_wait_window_t

0xce8d,	// (0x00039993) wait_bar2_pane_ParamLimits

0xce8d,	// (0x00039993) wait_bar2_pane

0xcea5,	// (0x000399ab) popup_snote2_single_text_window_g1_ParamLimits

0xcea5,	// (0x000399ab) popup_snote2_single_text_window_g1

0xcecd,	// (0x000399d3) popup_snote2_single_text_window_t1_ParamLimits

0xcecd,	// (0x000399d3) popup_snote2_single_text_window_t1

0xcf19,	// (0x00039a1f) popup_snote2_single_text_window_t2_ParamLimits

0xcf19,	// (0x00039a1f) popup_snote2_single_text_window_t2

0xcf65,	// (0x00039a6b) popup_snote2_single_text_window_t3_ParamLimits

0xcf65,	// (0x00039a6b) popup_snote2_single_text_window_t3

0xcfa6,	// (0x00039aac) popup_snote2_single_text_window_t4_ParamLimits

0xcfa6,	// (0x00039aac) popup_snote2_single_text_window_t4

0xcfdc,	// (0x00039ae2) popup_snote2_single_text_window_t5_ParamLimits

0xcfdc,	// (0x00039ae2) popup_snote2_single_text_window_t5

0x0004,

0xfc76,	// (0x0003c77c) popup_snote2_single_text_window_t_ParamLimits

0xfc76,	// (0x0003c77c) popup_snote2_single_text_window_t

0xd007,	// (0x00039b0d) popup_snote2_single_graphic_window_g1_ParamLimits

0xd007,	// (0x00039b0d) popup_snote2_single_graphic_window_g1

0xd02f,	// (0x00039b35) popup_snote2_single_graphic_window_g2_ParamLimits

0xd02f,	// (0x00039b35) popup_snote2_single_graphic_window_g2

0x0001,

0xfc81,	// (0x0003c787) popup_snote2_single_graphic_window_g_ParamLimits

0xfc81,	// (0x0003c787) popup_snote2_single_graphic_window_g

0xd057,	// (0x00039b5d) popup_snote2_single_graphic_window_t1_ParamLimits

0xd057,	// (0x00039b5d) popup_snote2_single_graphic_window_t1

0xd0a3,	// (0x00039ba9) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0a3,	// (0x00039ba9) popup_snote2_single_graphic_window_t2

0xcf65,	// (0x00039a6b) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf65,	// (0x00039a6b) popup_snote2_single_graphic_window_t3

0xcfa6,	// (0x00039aac) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfa6,	// (0x00039aac) popup_snote2_single_graphic_window_t4

0xcfdc,	// (0x00039ae2) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfdc,	// (0x00039ae2) popup_snote2_single_graphic_window_t5

0x0004,

0xfc86,	// (0x0003c78c) popup_snote2_single_graphic_window_t_ParamLimits

0xfc86,	// (0x0003c78c) popup_snote2_single_graphic_window_t

0xbad5,	// (0x000385db) clock_nsta_pane_cp2_t1

0xbad5,	// (0x000385db) clock_nsta_pane_cp2_t2

0x0001,

0xfa9a,	// (0x0003c5a0) clock_nsta_pane_cp2_t

0x4e19,	// (0x0003191f) form_field_data_wide_pane_g1_ParamLimits

0x82f3,	// (0x00034df9) form_field_data_wide_pane_g2_ParamLimits

0x82f3,	// (0x00034df9) form_field_data_wide_pane_g2

0x82ff,	// (0x00034e05) form_field_data_wide_pane_g3_ParamLimits

0x82ff,	// (0x00034e05) form_field_data_wide_pane_g3

0x0002,

0xf654,	// (0x0003c15a) form_field_data_wide_pane_g_ParamLimits

0xf654,	// (0x0003c15a) form_field_data_wide_pane_g

0xb9b1,	// (0x000384b7) grid_touch_3_pane_ParamLimits

0xb9b1,	// (0x000384b7) grid_touch_3_pane

0xd0ef,	// (0x00039bf5) cell_touch_3_pane_ParamLimits

0xd0ef,	// (0x00039bf5) cell_touch_3_pane

0xc01c,	// (0x00038b22) cell_touch_3_pane_g1

0xc01c,	// (0x00038b22) cell_touch_3_pane_g2

0x0001,

0xfb1f,	// (0x0003c625) cell_touch_3_pane_g

0x7dbd,	// (0x000348c3) cont_query_data_pane

0x7dc5,	// (0x000348cb) cont_query_data_pane_cp1

0xd11d,	// (0x00039c23) button_value_adjust_pane_cp7

0xd125,	// (0x00039c2b) query_popup_pane_cp3

0x8c67,	// (0x0003576d) bg_popup_sub_pane_cp22_ParamLimits

0x51dd,	// (0x00031ce3) navi_navi_volume_pane_cp2

0x51f8,	// (0x00031cfe) popup_side_volume_key_window_g2

0x5207,	// (0x00031d0d) popup_side_volume_key_window_g3

0x0002,

0xf6ea,	// (0x0003c1f0) popup_side_volume_key_window_g

0x5224,	// (0x00031d2a) popup_side_volume_key_window_t2

0x0001,

0xf6f1,	// (0x0003c1f7) popup_side_volume_key_window_t

0x8f21,	// (0x00035a27) popup_side_volume_key_window_ParamLimits

0x4aa1,	// (0x000315a7) list_double_graphic_pane_g4_ParamLimits

0x4aa1,	// (0x000315a7) list_double_graphic_pane_g4

0x6164,	// (0x00032c6a) list_single_2heading_msg_pane_ParamLimits

0x6164,	// (0x00032c6a) list_single_2heading_msg_pane

0x87c7,	// (0x000352cd) list_single_2heading_msg_pane_g1_ParamLimits

0x87c7,	// (0x000352cd) list_single_2heading_msg_pane_g1

0x39e5,	// (0x000304eb) list_single_2heading_msg_pane_g2_ParamLimits

0x39e5,	// (0x000304eb) list_single_2heading_msg_pane_g2

0x87d3,	// (0x000352d9) list_single_2heading_msg_pane_g3_ParamLimits

0x87d3,	// (0x000352d9) list_single_2heading_msg_pane_g3

0x87df,	// (0x000352e5) list_single_2heading_msg_pane_g4_ParamLimits

0x87df,	// (0x000352e5) list_single_2heading_msg_pane_g4

0x0003,

0xfc91,	// (0x0003c797) list_single_2heading_msg_pane_g_ParamLimits

0xfc91,	// (0x0003c797) list_single_2heading_msg_pane_g

0x87f7,	// (0x000352fd) list_single_2heading_msg_pane_t1_ParamLimits

0x87f7,	// (0x000352fd) list_single_2heading_msg_pane_t1

0x881f,	// (0x00035325) list_single_2heading_msg_pane_t2_ParamLimits

0x881f,	// (0x00035325) list_single_2heading_msg_pane_t2

0x8853,	// (0x00035359) list_single_2heading_msg_pane_t3_ParamLimits

0x8853,	// (0x00035359) list_single_2heading_msg_pane_t3

0x888c,	// (0x00035392) list_single_2heading_msg_pane_t4_ParamLimits

0x888c,	// (0x00035392) list_single_2heading_msg_pane_t4

0x0003,

0xfc9a,	// (0x0003c7a0) list_single_2heading_msg_pane_t_ParamLimits

0xfc9a,	// (0x0003c7a0) list_single_2heading_msg_pane_t

0x79ac,	// (0x000344b2) title_pane_g4_ParamLimits

0x79ac,	// (0x000344b2) title_pane_g4

0x4fec,	// (0x00031af2) title_pane_stacon_g3_ParamLimits

0x4fec,	// (0x00031af2) title_pane_stacon_g3

0xcc4b,	// (0x00039751) list_single_2graphic_im_pane_g4_ParamLimits

0xcc4b,	// (0x00039751) list_single_2graphic_im_pane_g4

0xaacb,	// (0x000375d1) popup_side_volume_key_window_cp

0xb2f0,	// (0x00037df6) main_idle_act2_pane_t1

0x5c4f,	// (0x00032755) toolbar_button_pane_g10

0x824e,	// (0x00034d54) popup_toolbar_window_cp1

0xbac6,	// (0x000385cc) clock_nsta_pane_cp_t1

0xbac6,	// (0x000385cc) clock_nsta_pane_cp_t2

0x0001,

0xfa95,	// (0x0003c59b) clock_nsta_pane_cp_t

0x51dd,	// (0x00031ce3) navi_navi_volume_pane_cp2_ParamLimits

0x51ec,	// (0x00031cf2) popup_side_volume_key_window_g1_ParamLimits

0x51f8,	// (0x00031cfe) popup_side_volume_key_window_g2_ParamLimits

0x5207,	// (0x00031d0d) popup_side_volume_key_window_g3_ParamLimits

0xf6ea,	// (0x0003c1f0) popup_side_volume_key_window_g_ParamLimits

0x6655,	// (0x0003315b) fep_hwr_aid_pane

0x66fc,	// (0x00033202) bg_fep_hwr_top_pane_g4_ParamLimits

0xc078,	// (0x00038b7e) fep_hwr_top_pane_g1_ParamLimits

0xc08a,	// (0x00038b90) fep_hwr_top_pane_g2_ParamLimits

0x671c,	// (0x00033222) fep_hwr_top_pane_g3_ParamLimits

0xfaea,	// (0x0003c5f0) fep_hwr_top_pane_g_ParamLimits

0x6731,	// (0x00033237) fep_hwr_top_text_pane_ParamLimits

0xa88e,	// (0x00037394) aid_touch_tab_arrow_arrow_2

0xa897,	// (0x0003739d) aid_touch_tab_arrow_left_2

0x6669,	// (0x0003316f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x66a0,	// (0x000331a6) fep_hwr_prediction_pane

0xc1ea,	// (0x00038cf0) fep_vkb_prediction_pane

0xc2ee,	// (0x00038df4) fep_vkb_side_pane_g3_ParamLimits

0xc2ee,	// (0x00038df4) fep_vkb_side_pane_g3

0x68ac,	// (0x000333b2) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6ac7,	// (0x000335cd) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6ad4,	// (0x000335da) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb99,	// (0x0003c69f) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6c03,	// (0x00033709) fep_hwr_prediction_pane_g1

0x6c0d,	// (0x00033713) fep_hwr_prediction_pane_g2

0x6c15,	// (0x0003371b) fep_hwr_prediction_pane_g3

0x6c1d,	// (0x00033723) fep_hwr_prediction_pane_g4

0x0003,

0xfca3,	// (0x0003c7a9) fep_hwr_prediction_pane_g

0xd14a,	// (0x00039c50) fep_vkb_prediction_pane_g1

0xd154,	// (0x00039c5a) fep_vkb_prediction_pane_g2

0xd15c,	// (0x00039c62) fep_vkb_prediction_pane_g3

0xd164,	// (0x00039c6a) fep_vkb_prediction_pane_g4

0x0003,

0xfcac,	// (0x0003c7b2) fep_vkb_prediction_pane_g

0x605a,	// (0x00032b60) slider_set_pane_g3

0x606e,	// (0x00032b74) slider_set_pane_g4

0x6086,	// (0x00032b8c) slider_set_pane_g5

0x605a,	// (0x00032b60) slider_set_pane_g6

0x609c,	// (0x00032ba2) slider_set_pane_g7

0xaf1b,	// (0x00037a21) slider_form_pane_g3

0xaf24,	// (0x00037a2a) slider_form_pane_g4

0xaf2c,	// (0x00037a32) slider_form_pane_g5

0xaf1b,	// (0x00037a21) slider_form_pane_g6

0xaf34,	// (0x00037a3a) slider_form_pane_g7

0xb59b,	// (0x000380a1) slider_set_pane_vc_g3

0xb5a4,	// (0x000380aa) slider_set_pane_vc_g4

0xb5ad,	// (0x000380b3) slider_set_pane_vc_g5

0xb59b,	// (0x000380a1) slider_set_pane_vc_g6

0xb5b6,	// (0x000380bc) slider_set_pane_vc_g7

0xb778,	// (0x0003827e) slider_form_pane_vc_g1

0xb781,	// (0x00038287) slider_form_pane_vc_g2

0xb78a,	// (0x00038290) slider_form_pane_vc_g3

0xb778,	// (0x0003827e) slider_form_pane_vc_g4

0xb793,	// (0x00038299) slider_form_pane_vc_g5

0x0004,

0xfa67,	// (0x0003c56d) slider_form_pane_vc_g

0x4640,	// (0x00031146) main_idle_act3_pane

0xd16c,	// (0x00039c72) ai3_links_pane

0xd175,	// (0x00039c7b) popup_ai3_data_window_ParamLimits

0xd175,	// (0x00039c7b) popup_ai3_data_window

0x3072,	// (0x0002fb78) grid_ai3_links_pane

0xd18f,	// (0x00039c95) cell_ai3_links_pane_ParamLimits

0xd18f,	// (0x00039c95) cell_ai3_links_pane

0xd1a7,	// (0x00039cad) bg_popup_sub_pane_cp11

0xd1b4,	// (0x00039cba) cell_ai3_links_pane_g1

0x3072,	// (0x0002fb78) bg_popup_sub_pane_cp12

0xd1d9,	// (0x00039cdf) heading_ai3_data_pane

0xd1e1,	// (0x00039ce7) list_ai3_gene_pane

0xd1ed,	// (0x00039cf3) popup_ai3_data_window_g1

0xd1f5,	// (0x00039cfb) heading_ai3_data_pane_g1

0xd1fd,	// (0x00039d03) heading_ai3_data_pane_t1

0xd20b,	// (0x00039d11) list_double_ai3_gene_pane_ParamLimits

0xd20b,	// (0x00039d11) list_double_ai3_gene_pane

0xd218,	// (0x00039d1e) list_single_ai3_gene_pane_ParamLimits

0xd218,	// (0x00039d1e) list_single_ai3_gene_pane

0xbfe1,	// (0x00038ae7) list_highlight_pane_cp7_ParamLimits

0xbfe1,	// (0x00038ae7) list_highlight_pane_cp7

0xd225,	// (0x00039d2b) list_single_a13_gene_pane_t1_ParamLimits

0xd225,	// (0x00039d2b) list_single_a13_gene_pane_t1

0xd23c,	// (0x00039d42) list_single_ai3_gene_pane_g1

0xd245,	// (0x00039d4b) list_single_ai3_gene_pane_g2

0x0001,

0xfcb5,	// (0x0003c7bb) list_single_ai3_gene_pane_g

0xd24d,	// (0x00039d53) list_double_ai3_gene_pane_g1_ParamLimits

0xd24d,	// (0x00039d53) list_double_ai3_gene_pane_g1

0xd259,	// (0x00039d5f) list_double_ai3_gene_pane_t1_ParamLimits

0xd259,	// (0x00039d5f) list_double_ai3_gene_pane_t1

0xd275,	// (0x00039d7b) list_double_ai3_gene_pane_t2_ParamLimits

0xd275,	// (0x00039d7b) list_double_ai3_gene_pane_t2

0xd28b,	// (0x00039d91) list_double_ai3_gene_pane_t3_ParamLimits

0xd28b,	// (0x00039d91) list_double_ai3_gene_pane_t3

0x0002,

0xfcba,	// (0x0003c7c0) list_double_ai3_gene_pane_t_ParamLimits

0xfcba,	// (0x0003c7c0) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x87bd,	// (0x000352c3) aid_size_min_col_2

0xd136,	// (0x00039c3c) aid_size_min_msg_ParamLimits

0xd136,	// (0x00039c3c) aid_size_min_msg

0xc3ee,	// (0x00038ef4) fep_vkb_top_text_pane_g2_ParamLimits

0xc3ee,	// (0x00038ef4) fep_vkb_top_text_pane_g2

0x0001,

0xfb1a,	// (0x0003c620) fep_vkb_top_text_pane_g_ParamLimits

0xfb1a,	// (0x0003c620) fep_vkb_top_text_pane_g

0x4640,	// (0x00031146) main_hc_apps_shell_pane

0xd2a8,	// (0x00039dae) grid_hc_apps_pane_ParamLimits

0xd2a8,	// (0x00039dae) grid_hc_apps_pane

0xd2ba,	// (0x00039dc0) list_hc_apps_pane

0xd2c2,	// (0x00039dc8) scroll_pane_cp37_ParamLimits

0xd2c2,	// (0x00039dc8) scroll_pane_cp37

0xd2ce,	// (0x00039dd4) cell_hc_apps_pane_ParamLimits

0xd2ce,	// (0x00039dd4) cell_hc_apps_pane

0xd37c,	// (0x00039e82) cell_hc_apps_pane_g1_ParamLimits

0xd37c,	// (0x00039e82) cell_hc_apps_pane_g1

0xd3ac,	// (0x00039eb2) cell_hc_apps_pane_g2_ParamLimits

0xd3ac,	// (0x00039eb2) cell_hc_apps_pane_g2

0xd3c8,	// (0x00039ece) cell_hc_apps_pane_g3_ParamLimits

0xd3c8,	// (0x00039ece) cell_hc_apps_pane_g3

0x0002,

0xfcc1,	// (0x0003c7c7) cell_hc_apps_pane_g_ParamLimits

0xfcc1,	// (0x0003c7c7) cell_hc_apps_pane_g

0xd3ea,	// (0x00039ef0) cell_hc_apps_pane_t1_ParamLimits

0xd3ea,	// (0x00039ef0) cell_hc_apps_pane_t1

0x7ce1,	// (0x000347e7) grid_highlight_pane_cp10_ParamLimits

0x7ce1,	// (0x000347e7) grid_highlight_pane_cp10

0xd42a,	// (0x00039f30) list_single_hc_apps_pane_ParamLimits

0xd42a,	// (0x00039f30) list_single_hc_apps_pane

0xd486,	// (0x00039f8c) list_single_hc_apps_pane_g1

0x88b1,	// (0x000353b7) list_single_hc_apps_pane_g2

0x0001,

0xfcc8,	// (0x0003c7ce) list_single_hc_apps_pane_g

0x88ca,	// (0x000353d0) list_single_hc_apps_pane_g2_copy1

0x88e6,	// (0x000353ec) list_single_hc_apps_pane_t1

0x7a58,	// (0x0003455e) bg_set_opt_pane_cp_ParamLimits

0x48a1,	// (0x000313a7) setting_slider_pane_t1_ParamLimits

0x48ba,	// (0x000313c0) setting_slider_pane_t2_ParamLimits

0x48d4,	// (0x000313da) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0003c03d) setting_slider_pane_t_ParamLimits

0x48ec,	// (0x000313f2) slider_set_pane_ParamLimits

0x5510,	// (0x00032016) control_pane_g5_ParamLimits

0x5510,	// (0x00032016) control_pane_g5

0xad6a,	// (0x00037870) slider_set_pane_g1_ParamLimits

0x604e,	// (0x00032b54) slider_set_pane_g2_ParamLimits

0x605a,	// (0x00032b60) slider_set_pane_g3_ParamLimits

0x606e,	// (0x00032b74) slider_set_pane_g4_ParamLimits

0x6086,	// (0x00032b8c) slider_set_pane_g5_ParamLimits

0x605a,	// (0x00032b60) slider_set_pane_g6_ParamLimits

0x609c,	// (0x00032ba2) slider_set_pane_g7_ParamLimits

0xf93d,	// (0x0003c443) slider_set_pane_g_ParamLimits

0x9002,	// (0x00035b08) navi_icon_text_pane_ParamLimits

0x9505,	// (0x0003600b) aid_fill_nsta_2_ParamLimits

0x9544,	// (0x0003604a) aid_touch_tab_arrow_left_ParamLimits

0x9553,	// (0x00036059) aid_touch_tab_arrow_right_ParamLimits

0x95c0,	// (0x000360c6) clock_nsta_pane_ParamLimits

0xa870,	// (0x00037376) navi_icon_pane_g1_ParamLimits

0xa87c,	// (0x00037382) navi_text_pane_t1_ParamLimits

0xbbd2,	// (0x000386d8) navi_icon_text_pane_g1_ParamLimits

0xbbde,	// (0x000386e4) navi_icon_text_pane_t1_ParamLimits

0xd486,	// (0x00039f8c) list_single_hc_apps_pane_g1_ParamLimits

0x88b1,	// (0x000353b7) list_single_hc_apps_pane_g2_ParamLimits

0xfcc8,	// (0x0003c7ce) list_single_hc_apps_pane_g_ParamLimits

0x88ca,	// (0x000353d0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x88e6,	// (0x000353ec) list_single_hc_apps_pane_t1_ParamLimits

0x47ab,	// (0x000312b1) popup_toolbar2_fixed_window_ParamLimits

0x47ab,	// (0x000312b1) popup_toolbar2_fixed_window

0x5b19,	// (0x0003261f) popup_toolbar2_float_window

0x3072,	// (0x0002fb78) bg_popup_sub_pane_cp27

0xd49f,	// (0x00039fa5) grid_toolbar2_float_pane

0x3072,	// (0x0002fb78) bg_popup_sub_pane_cp26

0xd49f,	// (0x00039fa5) grid_toolbar2_fixed_pane

0xd4a7,	// (0x00039fad) cell_toolbar2_fixed_pane_ParamLimits

0xd4a7,	// (0x00039fad) cell_toolbar2_fixed_pane

0xd4b7,	// (0x00039fbd) cell_toolbar2_fixed_pane_g1

0xd4c0,	// (0x00039fc6) toolbar2_fixed_button_pane

0x99dd,	// (0x000364e3) toolbar2_fixed_button_pane_g1

0x99ed,	// (0x000364f3) toolbar2_fixed_button_pane_g2

0x99e5,	// (0x000364eb) toolbar2_fixed_button_pane_g3

0x99fd,	// (0x00036503) toolbar2_fixed_button_pane_g4

0x99f5,	// (0x000364fb) toolbar2_fixed_button_pane_g5

0x9a05,	// (0x0003650b) toolbar2_fixed_button_pane_g6

0x9a0d,	// (0x00036513) toolbar2_fixed_button_pane_g7

0x9a1d,	// (0x00036523) toolbar2_fixed_button_pane_g8

0x9a15,	// (0x0003651b) toolbar2_fixed_button_pane_g9

0x0008,

0xf83f,	// (0x0003c345) toolbar2_fixed_button_pane_g

0xd4c8,	// (0x00039fce) cell_toolbar2_float_pane_ParamLimits

0xd4c8,	// (0x00039fce) cell_toolbar2_float_pane

0xd4d9,	// (0x00039fdf) cell_toolbar2_float_pane_g1

0xd4c0,	// (0x00039fc6) toolbar2_fixed_button_pane_cp

0xc14a,	// (0x00038c50) fep_vkb_accented_list_pane_ParamLimits

0xc14a,	// (0x00038c50) fep_vkb_accented_list_pane

0x688c,	// (0x00033392) bg_popup_fep_shadow_pane_g9

0x918f,	// (0x00035c95) bg_popup_fep_shadow_pane_cp3

0x844c,	// (0x00034f52) list_accented_list_pane

0xd4e2,	// (0x00039fe8) list_single_accented_list_pane_ParamLimits

0xd4e2,	// (0x00039fe8) list_single_accented_list_pane

0x918f,	// (0x00035c95) list_highlight_pane_cp10

0xd4f3,	// (0x00039ff9) list_single_accented_list_pane_t1

0x5a69,	// (0x0003256f) popup_slider_window_ParamLimits

0x5a69,	// (0x0003256f) popup_slider_window

0xd12d,	// (0x00039c33) aid_indentation_list_msg

0xd5b7,	// (0x0003a0bd) bg_popup_window_pane_cp19

0xd61f,	// (0x0003a125) popup_slider_window_g1

0xd63b,	// (0x0003a141) popup_slider_window_g2

0xd657,	// (0x0003a15d) popup_slider_window_g3

0x0005,

0xfccd,	// (0x0003c7d3) popup_slider_window_g

0xd6bd,	// (0x0003a1c3) popup_slider_window_t1

0xd731,	// (0x0003a237) small_volume_slider_vertical_pane

0xc01c,	// (0x00038b22) small_volume_slider_vertical_pane_g1

0xc01c,	// (0x00038b22) small_volume_slider_vertical_pane_g2

0xd74d,	// (0x0003a253) small_volume_slider_vertical_pane_g3

0x0002,

0xfcdf,	// (0x0003c7e5) small_volume_slider_vertical_pane_g

0x455d,	// (0x00031063) area_side_right_pane_ParamLimits

0x455d,	// (0x00031063) area_side_right_pane

0x6c25,	// (0x0003372b) aid_size_side_button_ParamLimits

0x6c25,	// (0x0003372b) aid_size_side_button

0x6c39,	// (0x0003373f) grid_sctrl_middle_pane_ParamLimits

0x6c39,	// (0x0003373f) grid_sctrl_middle_pane

0x6c58,	// (0x0003375e) sctrl_sk_bottom_pane

0x6c69,	// (0x0003376f) sctrl_sk_top_pane

0x6c7b,	// (0x00033781) aid_touch_sctrl_top

0x6c88,	// (0x0003378e) bg_sctrl_sk_pane_ParamLimits

0x6c88,	// (0x0003378e) bg_sctrl_sk_pane

0x6c96,	// (0x0003379c) sctrl_sk_top_pane_g1

0x6ca3,	// (0x000337a9) sctrl_sk_top_pane_t1

0x6c7b,	// (0x00033781) aid_touch_sctrl_bottom

0x6c88,	// (0x0003378e) bg_sctrl_sk_pane_cp_ParamLimits

0x6c88,	// (0x0003378e) bg_sctrl_sk_pane_cp

0x6cbe,	// (0x000337c4) sctrl_sk_bottom_pane_g1

0x6ca3,	// (0x000337a9) sctrl_sk_bottom_pane_t1

0x6cc7,	// (0x000337cd) cell_sctrl_middle_pane_ParamLimits

0x6cc7,	// (0x000337cd) cell_sctrl_middle_pane

0x6ce2,	// (0x000337e8) aid_touch_sctrl_middle_ParamLimits

0x6ce2,	// (0x000337e8) aid_touch_sctrl_middle

0x6cf4,	// (0x000337fa) bg_sctrl_middle_pane_ParamLimits

0x6cf4,	// (0x000337fa) bg_sctrl_middle_pane

0x68ac,	// (0x000333b2) cell_sctrl_middle_pane_g1_ParamLimits

0x68ac,	// (0x000333b2) cell_sctrl_middle_pane_g1

0x6d02,	// (0x00033808) cell_sctrl_middle_pane_g2_ParamLimits

0x6d02,	// (0x00033808) cell_sctrl_middle_pane_g2

0x0001,

0xfceb,	// (0x0003c7f1) cell_sctrl_middle_pane_g_ParamLimits

0xfceb,	// (0x0003c7f1) cell_sctrl_middle_pane_g

0x99dd,	// (0x000364e3) bg_sctrl_middle_pane_g1

0x99e5,	// (0x000364eb) bg_sctrl_middle_pane_g2

0x99ed,	// (0x000364f3) bg_sctrl_middle_pane_g3

0x99f5,	// (0x000364fb) bg_sctrl_middle_pane_g4

0x99fd,	// (0x00036503) bg_sctrl_middle_pane_g5

0x9a05,	// (0x0003650b) bg_sctrl_middle_pane_g6

0x9a0d,	// (0x00036513) bg_sctrl_middle_pane_g7

0x9a15,	// (0x0003651b) bg_sctrl_middle_pane_g8

0x0007,

0xfcf0,	// (0x0003c7f6) bg_sctrl_middle_pane_g

0x9a1d,	// (0x00036523) bg_sctrl_middle_pane_g8_copy1

0x99dd,	// (0x000364e3) bg_sctrl_sk_pane_g1

0x99ed,	// (0x000364f3) bg_sctrl_sk_pane_g2

0x99e5,	// (0x000364eb) bg_sctrl_sk_pane_g3

0x0008,

0xf83f,	// (0x0003c345) bg_sctrl_sk_pane_g

0x8214,	// (0x00034d1a) aid_size_touch_scroll_bar

0x99fd,	// (0x00036503) bg_sctrl_sk_pane_g4

0x99f5,	// (0x000364fb) bg_sctrl_sk_pane_g5

0x9a05,	// (0x0003650b) bg_sctrl_sk_pane_g6

0x9a0d,	// (0x00036513) bg_sctrl_sk_pane_g7

0x9a1d,	// (0x00036523) bg_sctrl_sk_pane_g8

0x9a15,	// (0x0003651b) bg_sctrl_sk_pane_g9

0x56d0,	// (0x000321d6) popup_fep_china_hwr2_fs_candidate_window

0x56da,	// (0x000321e0) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x56da,	// (0x000321e0) popup_fep_china_hwr2_fs_control_window

0x68ac,	// (0x000333b2) sctrl_sk_top_pane_g2

0x0001,

0xfce6,	// (0x0003c7ec) sctrl_sk_top_pane_g

0xd756,	// (0x0003a25c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd756,	// (0x0003a25c) aid_fep_china_hwr2_fs_cell

0xd789,	// (0x0003a28f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd789,	// (0x0003a28f) bg_popup_fep_shadow_pane_cp4

0xd7a0,	// (0x0003a2a6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7a0,	// (0x0003a2a6) bg_popup_fep_shadow_pane_cp5

0xd7b2,	// (0x0003a2b8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd7b2,	// (0x0003a2b8) popup_fep_china_hwr2_fs_control_bar_grid

0xd7c2,	// (0x0003a2c8) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7ca,	// (0x0003a2d0) aid_fep_china_hwr2_fs_candi_cell

0x3072,	// (0x0002fb78) bg_popup_fep_shadow_pane_cp6

0xd7d4,	// (0x0003a2da) popup_fep_china_hwr2_fs_candidate_grid

0xd7de,	// (0x0003a2e4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7de,	// (0x0003a2e4) cell_fep_china_hwr2_fs_funtion_grid

0xc01c,	// (0x00038b22) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7f6,	// (0x0003a2fc) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7f6,	// (0x0003a2fc) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd804,	// (0x0003a30a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd804,	// (0x0003a30a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd01,	// (0x0003c807) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd01,	// (0x0003c807) cell_fep_china_hwr2_fs_funtion_grid_g

0xd81a,	// (0x0003a320) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd81a,	// (0x0003a320) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd82f,	// (0x0003a335) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd82f,	// (0x0003a335) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd06,	// (0x0003c80c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd06,	// (0x0003c80c) cell_fep_china_hwr2_fs_funtion_grid_t

0xd84b,	// (0x0003a351) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd853,	// (0x0003a359) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd85b,	// (0x0003a361) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0b,	// (0x0003c811) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd863,	// (0x0003a369) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd863,	// (0x0003a369) cell_fep_china_hwr2_fs_candidate_grid

0xd87c,	// (0x0003a382) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd884,	// (0x0003a38a) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc01c,	// (0x00038b22) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc01c,	// (0x00038b22) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1f,	// (0x0003c625) cell_fep_china_hwr2_fs_candidate_grid_g

0xd88c,	// (0x0003a392) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95d3,	// (0x000360d9) clock_nsta_pane_cp_24_ParamLimits

0x95d3,	// (0x000360d9) clock_nsta_pane_cp_24

0x9651,	// (0x00036157) indicator_nsta_pane_cp_24_ParamLimits

0x9651,	// (0x00036157) indicator_nsta_pane_cp_24

0xa6ec,	// (0x000371f2) heading_pane_g1

0x0001,

0xf8a4,	// (0x0003c3aa) heading_pane_g

0xb139,	// (0x00037c3f) grid_sct_catagory_button_pane

0xb169,	// (0x00037c6f) scroll_pane_cp5_ParamLimits

0xbc20,	// (0x00038726) button_value_adjust_pane_cp5_ParamLimits

0xbc20,	// (0x00038726) button_value_adjust_pane_cp5

0xbcff,	// (0x00038805) form2_midp_time_pane_ParamLimits

0xd89a,	// (0x0003a3a0) cell_sct_catagory_button_pane_ParamLimits

0xd89a,	// (0x0003a3a0) cell_sct_catagory_button_pane

0xbfe1,	// (0x00038ae7) bg_button_pane_cp01_ParamLimits

0xbfe1,	// (0x00038ae7) bg_button_pane_cp01

0xc01c,	// (0x00038b22) cell_sct_catagory_button_pane_g1

0x5aa8,	// (0x000325ae) popup_tb_extension_window

0xd8ac,	// (0x0003a3b2) aid_size_cell_ext_ParamLimits

0xd8ac,	// (0x0003a3b2) aid_size_cell_ext

0x7ce1,	// (0x000347e7) bg_tb_trans_pane_cp1_ParamLimits

0x7ce1,	// (0x000347e7) bg_tb_trans_pane_cp1

0xd8cc,	// (0x0003a3d2) grid_tb_ext_pane_ParamLimits

0xd8cc,	// (0x0003a3d2) grid_tb_ext_pane

0xd8fa,	// (0x0003a400) cell_tb_ext_pane_ParamLimits

0xd8fa,	// (0x0003a400) cell_tb_ext_pane

0xd911,	// (0x0003a417) cell_tb_ext_pane_g1_ParamLimits

0xd911,	// (0x0003a417) cell_tb_ext_pane_g1

0xd92e,	// (0x0003a434) cell_tb_ext_pane_t1

0x7ce1,	// (0x000347e7) list_highlight_pane_cp11_ParamLimits

0x7ce1,	// (0x000347e7) list_highlight_pane_cp11

0x47ca,	// (0x000312d0) popup_uni_indicator_window_ParamLimits

0x47ca,	// (0x000312d0) popup_uni_indicator_window

0x82e5,	// (0x00034deb) bg_popup_sub_pane_cp14

0xd949,	// (0x0003a44f) list_uniindi_pane

0xd955,	// (0x0003a45b) uniindi_top_pane

0x7ce1,	// (0x000347e7) bg_uniindi_top_pane

0xd974,	// (0x0003a47a) uniindi_top_pane_g1

0xd98a,	// (0x0003a490) uniindi_top_pane_g2

0x0003,

0xfd12,	// (0x0003c818) uniindi_top_pane_g

0xd9b4,	// (0x0003a4ba) uniindi_top_pane_t1

0xd9de,	// (0x0003a4e4) list_single_uniindi_pane_ParamLimits

0xd9de,	// (0x0003a4e4) list_single_uniindi_pane

0xc01c,	// (0x00038b22) bg_uniindi_top_pane_g1

0xd9f1,	// (0x0003a4f7) list_single_uniindi_pane_g1

0xda04,	// (0x0003a50a) list_single_uniindi_pane_t1

0x4640,	// (0x00031146) control_bg_pane

0xda29,	// (0x0003a52f) bg_sctrl_sk_pane_cp1

0xda32,	// (0x0003a538) bg_sctrl_sk_pane_cp2

0xda3b,	// (0x0003a541) control_bg_pane_g1

0xda44,	// (0x0003a54a) control_bg_pane_g2

0x0001,

0xfd1b,	// (0x0003c821) control_bg_pane_g

0xba6a,	// (0x00038570) cell_indicator_nsta_pane_g1_ParamLimits

0xba78,	// (0x0003857e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa83,	// (0x0003c589) cell_indicator_nsta_pane_g_ParamLimits

0x6634,	// (0x0003313a) form2_midp_time_pane_t1_ParamLimits

0x5630,	// (0x00032136) main_idle_act4_pane_ParamLimits

0x5630,	// (0x00032136) main_idle_act4_pane

0x5aa8,	// (0x000325ae) popup_tb_extension_window_ParamLimits

0xd8ea,	// (0x0003a3f0) tb_ext_find_pane_ParamLimits

0xd8ea,	// (0x0003a3f0) tb_ext_find_pane

0xda4d,	// (0x0003a553) ai_gene_pane_1_cp1

0x92d6,	// (0x00035ddc) ai_gene_pane_2_cp1

0xda55,	// (0x0003a55b) list_single_idle_plugin_calendar_pane

0xda5e,	// (0x0003a564) list_single_idle_plugin_notification_pane

0xda67,	// (0x0003a56d) list_single_idle_plugin_player_pane

0xda70,	// (0x0003a576) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda70,	// (0x0003a576) list_single_idle_plugin_shortcut_pane

0xda92,	// (0x0003a598) main_idle_act4_pane_t1

0xdaa4,	// (0x0003a5aa) main_idle_act4_pane_t2

0x0001,

0xfd20,	// (0x0003c826) main_idle_act4_pane_t

0xdab6,	// (0x0003a5bc) middle_sk_idle_act4_pane_ParamLimits

0xdab6,	// (0x0003a5bc) middle_sk_idle_act4_pane

0xdacc,	// (0x0003a5d2) popup_clock_digital_analogue_window_cp2

0xdae6,	// (0x0003a5ec) shortcut_wheel_idle_act4_pane_ParamLimits

0xdae6,	// (0x0003a5ec) shortcut_wheel_idle_act4_pane

0xc01c,	// (0x00038b22) shortcut_wheel_idle_act4_pane_g1

0xc01c,	// (0x00038b22) shortcut_wheel_idle_act4_pane_g2

0xc01c,	// (0x00038b22) shortcut_wheel_idle_act4_pane_g3

0xc01c,	// (0x00038b22) shortcut_wheel_idle_act4_pane_g4

0xc01c,	// (0x00038b22) shortcut_wheel_idle_act4_pane_g5

0xdafa,	// (0x0003a600) shortcut_wheel_idle_act4_pane_g6

0xdb02,	// (0x0003a608) shortcut_wheel_idle_act4_pane_g7

0xdb0a,	// (0x0003a610) shortcut_wheel_idle_act4_pane_g8

0xdb12,	// (0x0003a618) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd25,	// (0x0003c82b) shortcut_wheel_idle_act4_pane_g

0xc29a,	// (0x00038da0) middle_sk_idle_act4_pane_g1_ParamLimits

0xc29a,	// (0x00038da0) middle_sk_idle_act4_pane_g1

0xdb76,	// (0x0003a67c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb76,	// (0x0003a67c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd48,	// (0x0003c84e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd48,	// (0x0003c84e) middle_sk_idle_act4_pane_g

0xdb82,	// (0x0003a688) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb82,	// (0x0003a688) middle_sk_idle_act4_pane_t1

0xdb9f,	// (0x0003a6a5) grid_ai_shortcut_pane_ParamLimits

0xdb9f,	// (0x0003a6a5) grid_ai_shortcut_pane

0xdbb8,	// (0x0003a6be) list_highlight_pane_cp16_ParamLimits

0xdbb8,	// (0x0003a6be) list_highlight_pane_cp16

0xdbc5,	// (0x0003a6cb) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdbc5,	// (0x0003a6cb) list_single_idle_plugin_shortcut_pane_g1

0xdbd1,	// (0x0003a6d7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbd1,	// (0x0003a6d7) list_single_idle_plugin_shortcut_pane_g2

0xdbe9,	// (0x0003a6ef) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbe9,	// (0x0003a6ef) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4d,	// (0x0003c853) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4d,	// (0x0003c853) list_single_idle_plugin_shortcut_pane_g

0xdbfc,	// (0x0003a702) cell_ai_shortcut_pane_ParamLimits

0xdbfc,	// (0x0003a702) cell_ai_shortcut_pane

0xdc20,	// (0x0003a726) cell_ai_shortcut_pane_g1_ParamLimits

0xdc20,	// (0x0003a726) cell_ai_shortcut_pane_g1

0xda4d,	// (0x0003a553) ai_gene_pane_1_cp2

0xdc42,	// (0x0003a748) ai_gene_pane_2_cp2

0xdc4a,	// (0x0003a750) list_highlight_pane_cp15

0xdc53,	// (0x0003a759) list_single_idle_plugin_calendar_pane_g1

0xdc4a,	// (0x0003a750) list_highlight_pane_cp17

0xdc5b,	// (0x0003a761) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc63,	// (0x0003a769) list_single_idle_plugin_player_pane_g1

0xb392,	// (0x00037e98) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd54,	// (0x0003c85a) list_single_idle_plugin_player_pane_g

0xdc6b,	// (0x0003a771) list_single_idle_plugin_player_pane_t1

0xdc79,	// (0x0003a77f) list_single_idle_plugin_player_pane_t2

0xdc87,	// (0x0003a78d) list_single_idle_plugin_player_pane_t3

0xdc95,	// (0x0003a79b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd59,	// (0x0003c85f) list_single_idle_plugin_player_pane_t

0xdca3,	// (0x0003a7a9) wait_bar_pane_cp15

0xdcab,	// (0x0003a7b1) grid_ai_notification_pane

0xb392,	// (0x00037e98) list_single_idle_plugin_notification_pane_g1

0xdcb4,	// (0x0003a7ba) cell_ai_notification_pane_ParamLimits

0xdcb4,	// (0x0003a7ba) cell_ai_notification_pane

0xdcc1,	// (0x0003a7c7) cell_ai_notification_pane_g1

0xdcc9,	// (0x0003a7cf) cell_ai_notification_pane_t1

0xdcd7,	// (0x0003a7dd) tb_ext_find_button_pane

0xdcdf,	// (0x0003a7e5) tb_ext_find_pane_g1

0xdce7,	// (0x0003a7ed) tb_ext_find_pane_t1

0x8b5e,	// (0x00035664) tb_ext_find_button_pane_g1

0xdcf5,	// (0x0003a7fb) tb_ext_find_button_pane_g2

0x0001,

0xfd62,	// (0x0003c868) tb_ext_find_button_pane_g

0xda92,	// (0x0003a598) main_idle_act4_pane_t1_ParamLimits

0xdaa4,	// (0x0003a5aa) main_idle_act4_pane_t2_ParamLimits

0xfd20,	// (0x0003c826) main_idle_act4_pane_t_ParamLimits

0xdacc,	// (0x0003a5d2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdada,	// (0x0003a5e0) sat_plugin_idle_act4_pane_ParamLimits

0xdada,	// (0x0003a5e0) sat_plugin_idle_act4_pane

0xdcfe,	// (0x0003a804) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcfe,	// (0x0003a804) sat_plugin_idle_act4_pane_t1

0xdd11,	// (0x0003a817) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd11,	// (0x0003a817) sat_plugin_idle_act4_pane_t2

0xdd24,	// (0x0003a82a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd24,	// (0x0003a82a) sat_plugin_idle_act4_pane_t3

0xdd37,	// (0x0003a83d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd37,	// (0x0003a83d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd67,	// (0x0003c86d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd67,	// (0x0003c86d) sat_plugin_idle_act4_pane_t

0x4705,	// (0x0003120b) popup_battery_window_ParamLimits

0x4705,	// (0x0003120b) popup_battery_window

0x7ce1,	// (0x000347e7) bg_popup_sub_pane_cp25_ParamLimits

0x7ce1,	// (0x000347e7) bg_popup_sub_pane_cp25

0xdd4a,	// (0x0003a850) popup_battery_window_g1_ParamLimits

0xdd4a,	// (0x0003a850) popup_battery_window_g1

0xdd56,	// (0x0003a85c) popup_battery_window_t1_ParamLimits

0xdd56,	// (0x0003a85c) popup_battery_window_t1

0xdd68,	// (0x0003a86e) popup_battery_window_t2_ParamLimits

0xdd68,	// (0x0003a86e) popup_battery_window_t2

0x0001,

0xfd70,	// (0x0003c876) popup_battery_window_t_ParamLimits

0xfd70,	// (0x0003c876) popup_battery_window_t

0x91a3,	// (0x00035ca9) midp_canvas_pane_ParamLimits

0x921a,	// (0x00035d20) midp_keypad_pane_ParamLimits

0x921a,	// (0x00035d20) midp_keypad_pane

0x94b3,	// (0x00035fb9) main_midp_pane_ParamLimits

0xbae4,	// (0x000385ea) signal_pane_g2_cp_ParamLimits

0xdd85,	// (0x0003a88b) aid_size_cell_midp_keypad_ParamLimits

0xdd85,	// (0x0003a88b) aid_size_cell_midp_keypad

0xdd9f,	// (0x0003a8a5) midp_keyp_game_grid_pane_ParamLimits

0xdd9f,	// (0x0003a8a5) midp_keyp_game_grid_pane

0xddbf,	// (0x0003a8c5) midp_keyp_rocker_pane_ParamLimits

0xddbf,	// (0x0003a8c5) midp_keyp_rocker_pane

0xddf8,	// (0x0003a8fe) midp_keyp_sk_left_pane_ParamLimits

0xddf8,	// (0x0003a8fe) midp_keyp_sk_left_pane

0xde52,	// (0x0003a958) midp_keyp_sk_right_pane_ParamLimits

0xde52,	// (0x0003a958) midp_keyp_sk_right_pane

0x3072,	// (0x0002fb78) bg_button_pane_cp03

0xdeac,	// (0x0003a9b2) midp_keyp_sk_left_pane_g1

0x3072,	// (0x0002fb78) bg_button_pane_cp04

0xdeac,	// (0x0003a9b2) midp_keyp_sk_right_pane_g1

0xc01c,	// (0x00038b22) midp_keyp_rocker_pane_g1

0xdeb5,	// (0x0003a9bb) keyp_game_cell_pane_ParamLimits

0xdeb5,	// (0x0003a9bb) keyp_game_cell_pane

0x3072,	// (0x0002fb78) bg_button_pane_cp02

0xdec8,	// (0x0003a9ce) keyp_game_cell_pane_g1

0x4749,	// (0x0003124f) popup_fep_vkb2_window_ParamLimits

0x4749,	// (0x0003124f) popup_fep_vkb2_window

0x6d20,	// (0x00033826) aid_size_cell_vkb2_ParamLimits

0x6d20,	// (0x00033826) aid_size_cell_vkb2

0x6d6c,	// (0x00033872) popup_fep_vkb2_window_g1_ParamLimits

0x6d6c,	// (0x00033872) popup_fep_vkb2_window_g1

0x6db4,	// (0x000338ba) vkb2_area_bottom_pane_ParamLimits

0x6db4,	// (0x000338ba) vkb2_area_bottom_pane

0x6e00,	// (0x00033906) vkb2_area_keypad_pane_ParamLimits

0x6e00,	// (0x00033906) vkb2_area_keypad_pane

0x6e42,	// (0x00033948) vkb2_area_top_pane_ParamLimits

0x6e42,	// (0x00033948) vkb2_area_top_pane

0x6ec1,	// (0x000339c7) vkb2_top_entry_pane_ParamLimits

0x6ec1,	// (0x000339c7) vkb2_top_entry_pane

0x6eeb,	// (0x000339f1) vkb2_top_grid_left_pane_ParamLimits

0x6eeb,	// (0x000339f1) vkb2_top_grid_left_pane

0x6f0a,	// (0x00033a10) vkb2_top_grid_right_pane_ParamLimits

0x6f0a,	// (0x00033a10) vkb2_top_grid_right_pane

0x6f29,	// (0x00033a2f) vkb2_cell_keypad_pane_ParamLimits

0x6f29,	// (0x00033a2f) vkb2_cell_keypad_pane

0x6ffa,	// (0x00033b00) vkb2_area_bottom_grid_pane_ParamLimits

0x6ffa,	// (0x00033b00) vkb2_area_bottom_grid_pane

0x7020,	// (0x00033b26) vkb2_area_bottom_pane_g1_ParamLimits

0x7020,	// (0x00033b26) vkb2_area_bottom_pane_g1

0x7044,	// (0x00033b4a) vkb2_area_bottom_pane_g2_ParamLimits

0x7044,	// (0x00033b4a) vkb2_area_bottom_pane_g2

0x7072,	// (0x00033b78) vkb2_area_bottom_pane_g3_ParamLimits

0x7072,	// (0x00033b78) vkb2_area_bottom_pane_g3

0x0002,

0xfd75,	// (0x0003c87b) vkb2_area_bottom_pane_g_ParamLimits

0xfd75,	// (0x0003c87b) vkb2_area_bottom_pane_g

0x70d3,	// (0x00033bd9) vkb2_top_cell_left_pane_ParamLimits

0x70d3,	// (0x00033bd9) vkb2_top_cell_left_pane

0xded9,	// (0x0003a9df) vkb2_top_entry_pane_g1_ParamLimits

0xded9,	// (0x0003a9df) vkb2_top_entry_pane_g1

0xdee7,	// (0x0003a9ed) vkb2_top_entry_pane_t1_ParamLimits

0xdee7,	// (0x0003a9ed) vkb2_top_entry_pane_t1

0xdf19,	// (0x0003aa1f) vkb2_top_entry_pane_t2_ParamLimits

0xdf19,	// (0x0003aa1f) vkb2_top_entry_pane_t2

0xdf4b,	// (0x0003aa51) vkb2_top_entry_pane_t3_ParamLimits

0xdf4b,	// (0x0003aa51) vkb2_top_entry_pane_t3

0x0002,

0xfd7c,	// (0x0003c882) vkb2_top_entry_pane_t_ParamLimits

0xfd7c,	// (0x0003c882) vkb2_top_entry_pane_t

0x7120,	// (0x00033c26) vkb2_top_grid_right_pane_g1_ParamLimits

0x7120,	// (0x00033c26) vkb2_top_grid_right_pane_g1

0x7136,	// (0x00033c3c) vkb2_top_grid_right_pane_g2_ParamLimits

0x7136,	// (0x00033c3c) vkb2_top_grid_right_pane_g2

0x714e,	// (0x00033c54) vkb2_top_grid_right_pane_g3_ParamLimits

0x714e,	// (0x00033c54) vkb2_top_grid_right_pane_g3

0x7166,	// (0x00033c6c) vkb2_top_grid_right_pane_g4_ParamLimits

0x7166,	// (0x00033c6c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd83,	// (0x0003c889) vkb2_top_grid_right_pane_g_ParamLimits

0xfd83,	// (0x0003c889) vkb2_top_grid_right_pane_g

0x717c,	// (0x00033c82) vkb2_top_cell_left_pane_g1

0x7193,	// (0x00033c99) vkb2_cell_keypad_pane_g1_ParamLimits

0x7193,	// (0x00033c99) vkb2_cell_keypad_pane_g1

0xdf6f,	// (0x0003aa75) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf6f,	// (0x0003aa75) vkb2_cell_keypad_pane_t1

0x71a1,	// (0x00033ca7) vkb2_cell_bottom_grid_pane_ParamLimits

0x71a1,	// (0x00033ca7) vkb2_cell_bottom_grid_pane

0x71da,	// (0x00033ce0) vkb2_cell_bottom_grid_pane_g1

0xdb1a,	// (0x0003a620) aid_call2_pane_cp02

0xdb22,	// (0x0003a628) aid_call_pane_cp02

0xdb2a,	// (0x0003a630) clock_digital_number_pane_cp10

0xdb32,	// (0x0003a638) clock_digital_number_pane_cp11

0xdb3a,	// (0x0003a640) clock_digital_number_pane_cp12

0xdb42,	// (0x0003a648) clock_digital_number_pane_cp13

0xdb4a,	// (0x0003a650) clock_digital_separator_pane_cp10

0x8b5e,	// (0x00035664) popup_clock_digital_analogue_window_cp2_g1

0x8b5e,	// (0x00035664) popup_clock_digital_analogue_window_cp2_g2

0xdb52,	// (0x0003a658) popup_clock_digital_analogue_window_cp2_g3

0x8b5e,	// (0x00035664) popup_clock_digital_analogue_window_cp2_g4

0xdb52,	// (0x0003a658) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd38,	// (0x0003c83e) popup_clock_digital_analogue_window_cp2_g

0xdb5a,	// (0x0003a660) popup_clock_digital_analogue_window_cp2_t1

0xdb68,	// (0x0003a66e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd43,	// (0x0003c849) popup_clock_digital_analogue_window_cp2_t

0xc01c,	// (0x00038b22) clock_digital_number_pane_cp10_g1

0xc01c,	// (0x00038b22) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1f,	// (0x0003c625) clock_digital_number_pane_cp10_g

0xc01c,	// (0x00038b22) clock_digital_separator_pane_cp10_g1

0xc01c,	// (0x00038b22) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1f,	// (0x0003c625) clock_digital_separator_pane_cp10_g

0xd996,	// (0x0003a49c) uniindi_top_pane_g3

0xd9a7,	// (0x0003a4ad) uniindi_top_pane_g4

0x6fb4,	// (0x00033aba) vkb2_row_keypad_pane_ParamLimits

0x6fb4,	// (0x00033aba) vkb2_row_keypad_pane

0x71fa,	// (0x00033d00) vkb2_cell_t_keypad_pane_ParamLimits

0x71fa,	// (0x00033d00) vkb2_cell_t_keypad_pane

0x720a,	// (0x00033d10) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x720a,	// (0x00033d10) vkb2_cell_t_keypad_pane_cp08

0x721d,	// (0x00033d23) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x721d,	// (0x00033d23) vkb2_cell_t_keypad_pane_cp09

0x7231,	// (0x00033d37) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7231,	// (0x00033d37) vkb2_cell_t_keypad_pane_cp01

0x7242,	// (0x00033d48) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7242,	// (0x00033d48) vkb2_cell_t_keypad_pane_cp02

0x7253,	// (0x00033d59) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7253,	// (0x00033d59) vkb2_cell_t_keypad_pane_cp03

0x7264,	// (0x00033d6a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7264,	// (0x00033d6a) vkb2_cell_t_keypad_pane_cp04

0x7275,	// (0x00033d7b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7275,	// (0x00033d7b) vkb2_cell_t_keypad_pane_cp05

0x7286,	// (0x00033d8c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7286,	// (0x00033d8c) vkb2_cell_t_keypad_pane_cp06

0x7297,	// (0x00033d9d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7297,	// (0x00033d9d) vkb2_cell_t_keypad_pane_cp07

0x72a8,	// (0x00033dae) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x72a8,	// (0x00033dae) vkb2_cell_t_keypad_pane_cp10

0x68ac,	// (0x000333b2) vkb2_cell_t_keypad_pane_g1

0xdf86,	// (0x0003aa8c) vkb2_cell_t_keypad_pane_t1

0x4640,	// (0x00031146) popup_grid_graphic2_window

0xdf98,	// (0x0003aa9e) aid_size_cell_graphic2_ParamLimits

0xdf98,	// (0x0003aa9e) aid_size_cell_graphic2

0xdfd0,	// (0x0003aad6) bg_popup_window_pane_cp21_ParamLimits

0xdfd0,	// (0x0003aad6) bg_popup_window_pane_cp21

0xdfde,	// (0x0003aae4) graphic2_pages_pane_ParamLimits

0xdfde,	// (0x0003aae4) graphic2_pages_pane

0xe024,	// (0x0003ab2a) grid_graphic2_control_pane_ParamLimits

0xe024,	// (0x0003ab2a) grid_graphic2_control_pane

0xe062,	// (0x0003ab68) grid_graphic2_pane_ParamLimits

0xe062,	// (0x0003ab68) grid_graphic2_pane

0xe0d6,	// (0x0003abdc) cell_graphic2_pane

0x4640,	// (0x00031146) main_comp_mode_pane

0xd1e1,	// (0x00039ce7) list_ai3_gene_pane_ParamLimits

0xd5b7,	// (0x0003a0bd) bg_popup_window_pane_cp19_ParamLimits

0xd5c3,	// (0x0003a0c9) bg_touch_area_indi_pane_ParamLimits

0xd5c3,	// (0x0003a0c9) bg_touch_area_indi_pane

0xd5d9,	// (0x0003a0df) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5d9,	// (0x0003a0df) bg_touch_area_indi_pane_cp01

0xd5ef,	// (0x0003a0f5) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5ef,	// (0x0003a0f5) bg_touch_area_indi_pane_cp02

0xd605,	// (0x0003a10b) bg_touch_area_indi_pane_cp03_ParamLimits

0xd605,	// (0x0003a10b) bg_touch_area_indi_pane_cp03

0xd61f,	// (0x0003a125) popup_slider_window_g1_ParamLimits

0xd63b,	// (0x0003a141) popup_slider_window_g2_ParamLimits

0xd657,	// (0x0003a15d) popup_slider_window_g3_ParamLimits

0xfccd,	// (0x0003c7d3) popup_slider_window_g_ParamLimits

0xd6bd,	// (0x0003a1c3) popup_slider_window_t1_ParamLimits

0xd731,	// (0x0003a237) small_volume_slider_vertical_pane_ParamLimits

0xe0d6,	// (0x0003abdc) cell_graphic2_pane_ParamLimits

0xe125,	// (0x0003ac2b) bg_button_pane_cp10_ParamLimits

0xe125,	// (0x0003ac2b) bg_button_pane_cp10

0xe138,	// (0x0003ac3e) bg_button_pane_cp11_ParamLimits

0xe138,	// (0x0003ac3e) bg_button_pane_cp11

0xe14b,	// (0x0003ac51) graphic2_pages_pane_g1_ParamLimits

0xe14b,	// (0x0003ac51) graphic2_pages_pane_g1

0xe166,	// (0x0003ac6c) graphic2_pages_pane_g2_ParamLimits

0xe166,	// (0x0003ac6c) graphic2_pages_pane_g2

0x0001,

0xfd91,	// (0x0003c897) graphic2_pages_pane_g_ParamLimits

0xfd91,	// (0x0003c897) graphic2_pages_pane_g

0xe17e,	// (0x0003ac84) graphic2_pages_pane_t1_ParamLimits

0xe17e,	// (0x0003ac84) graphic2_pages_pane_t1

0xe196,	// (0x0003ac9c) cell_graphic2_control_pane_ParamLimits

0xe196,	// (0x0003ac9c) cell_graphic2_control_pane

0xe1b4,	// (0x0003acba) cell_graphic2_pane_g1_ParamLimits

0xe1b4,	// (0x0003acba) cell_graphic2_pane_g1

0xe1c1,	// (0x0003acc7) cell_graphic2_pane_g2_ParamLimits

0xe1c1,	// (0x0003acc7) cell_graphic2_pane_g2

0xe1ce,	// (0x0003acd4) cell_graphic2_pane_g3_ParamLimits

0xe1ce,	// (0x0003acd4) cell_graphic2_pane_g3

0xe1db,	// (0x0003ace1) cell_graphic2_pane_g4_ParamLimits

0xe1db,	// (0x0003ace1) cell_graphic2_pane_g4

0xe1e8,	// (0x0003acee) cell_graphic2_pane_g5_ParamLimits

0xe1e8,	// (0x0003acee) cell_graphic2_pane_g5

0x0004,

0xfd96,	// (0x0003c89c) cell_graphic2_pane_g_ParamLimits

0xfd96,	// (0x0003c89c) cell_graphic2_pane_g

0xe201,	// (0x0003ad07) cell_graphic2_pane_t1_ParamLimits

0xe201,	// (0x0003ad07) cell_graphic2_pane_t1

0x9a51,	// (0x00036557) grid_highlight_pane_cp11_ParamLimits

0x9a51,	// (0x00036557) grid_highlight_pane_cp11

0x7ce1,	// (0x000347e7) bg_button_pane_cp05

0xe237,	// (0x0003ad3d) cell_graphic2_control_pane_g1

0xc01c,	// (0x00038b22) bg_touch_area_indi_pane_g1

0xe25f,	// (0x0003ad65) aid_cmod_rocker_key_size

0xe269,	// (0x0003ad6f) aid_cmode_itu_key_size

0xe273,	// (0x0003ad79) main_cmode_video_pane

0xe27d,	// (0x0003ad83) main_comp_mode_itu_pane

0xe289,	// (0x0003ad8f) main_comp_mode_rocker_pane

0xe295,	// (0x0003ad9b) cell_cmode_rocker_pane_ParamLimits

0xe295,	// (0x0003ad9b) cell_cmode_rocker_pane

0xe2a7,	// (0x0003adad) cell_cmode_itu_pane_ParamLimits

0xe2a7,	// (0x0003adad) cell_cmode_itu_pane

0x82e5,	// (0x00034deb) bg_button_pane_cp06_ParamLimits

0x82e5,	// (0x00034deb) bg_button_pane_cp06

0xc29a,	// (0x00038da0) cell_cmode_rocker_pane_g1_ParamLimits

0xc29a,	// (0x00038da0) cell_cmode_rocker_pane_g1

0xd7f6,	// (0x0003a2fc) cell_cmode_rocker_pane_g2_ParamLimits

0xd7f6,	// (0x0003a2fc) cell_cmode_rocker_pane_g2

0x0001,

0xfda6,	// (0x0003c8ac) cell_cmode_rocker_pane_g_ParamLimits

0xfda6,	// (0x0003c8ac) cell_cmode_rocker_pane_g

0x3072,	// (0x0002fb78) bg_button_pane_cp07

0xe2bc,	// (0x0003adc2) cell_cmode_itu_pane_g1

0xe2c5,	// (0x0003adcb) cell_cmode_itu_pane_t1

0xe2d3,	// (0x0003add9) cell_cmode_itu_pane_t2

0x0001,

0xfdab,	// (0x0003c8b1) cell_cmode_itu_pane_t

0xda19,	// (0x0003a51f) aid_touch_ctrl_left

0xda21,	// (0x0003a527) aid_touch_ctrl_right

0x3072,	// (0x0002fb78) compa_mode_pane

0xe2e1,	// (0x0003ade7) aid_cmod_rocker_key_size_cp

0xe2eb,	// (0x0003adf1) aid_cmode_itu_key_size_cp

0xe2f5,	// (0x0003adfb) compa_mode_pane_g1

0xe2fd,	// (0x0003ae03) compa_mode_pane_g2

0xe305,	// (0x0003ae0b) compa_mode_pane_g3

0x0002,

0xfdb0,	// (0x0003c8b6) compa_mode_pane_g

0xe30d,	// (0x0003ae13) main_comp_mode_itu_pane_cp

0xe315,	// (0x0003ae1b) main_comp_mode_rocker_pane_cp

0xe31d,	// (0x0003ae23) cell_cmode_itu_pane_cp_ParamLimits

0xe31d,	// (0x0003ae23) cell_cmode_itu_pane_cp

0xe332,	// (0x0003ae38) cell_cmode_rocker_pane_cp_ParamLimits

0xe332,	// (0x0003ae38) cell_cmode_rocker_pane_cp

0x82e5,	// (0x00034deb) bg_button_pane_cp06_cp_ParamLimits

0x82e5,	// (0x00034deb) bg_button_pane_cp06_cp

0xc29a,	// (0x00038da0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc29a,	// (0x00038da0) cell_cmode_rocker_pane_g1_cp

0xc01c,	// (0x00038b22) cell_cmode_rocker_pane_g2_cp

0x3072,	// (0x0002fb78) bg_button_pane_cp07_cp

0xaf1b,	// (0x00037a21) cell_cmode_itu_pane_g1_cp

0xe344,	// (0x0003ae4a) cell_cmode_itu_pane_t1_cp

0xe344,	// (0x0003ae4a) cell_cmode_itu_pane_t2_cp

0xaf08,	// (0x00037a0e) settings_code_pane_cp2

0x7a58,	// (0x0003455e) bg_popup_window_pane_cp3_ParamLimits

0x7ee1,	// (0x000349e7) heading_pane_cp3_ParamLimits

0x7ef0,	// (0x000349f6) listscroll_popup_graphic_pane_ParamLimits

0x6655,	// (0x0003315b) fep_hwr_aid_pane_ParamLimits

0x6c7b,	// (0x00033781) aid_touch_sctrl_top_ParamLimits

0x6c96,	// (0x0003379c) sctrl_sk_top_pane_g1_ParamLimits

0x68ac,	// (0x000333b2) sctrl_sk_top_pane_g2_ParamLimits

0xfce6,	// (0x0003c7ec) sctrl_sk_top_pane_g_ParamLimits

0x6ca3,	// (0x000337a9) sctrl_sk_top_pane_t1_ParamLimits

0x6c7b,	// (0x00033781) aid_touch_sctrl_bottom_ParamLimits

0x6ca3,	// (0x000337a9) sctrl_sk_bottom_pane_t1_ParamLimits

0xd962,	// (0x0003a468) aid_area_touch_clock

0x6e88,	// (0x0003398e) aid_vkb2_area_top_pane_cell_ParamLimits

0x6e88,	// (0x0003398e) aid_vkb2_area_top_pane_cell

0x6fd6,	// (0x00033adc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6fd6,	// (0x00033adc) aid_vkb2_area_bottom_pane_cell

0xded1,	// (0x0003a9d7) popup_char_count_window

0xe352,	// (0x0003ae58) popup_char_count_window_g1

0xe35b,	// (0x0003ae61) popup_char_count_window_g2

0xe364,	// (0x0003ae6a) popup_char_count_window_g3

0x0002,

0xfdb7,	// (0x0003c8bd) popup_char_count_window_g

0xe36d,	// (0x0003ae73) popup_char_count_window_t1

0x6d4a,	// (0x00033850) popup_fep_char_preview_window_ParamLimits

0x6d4a,	// (0x00033850) popup_fep_char_preview_window

0x6ea6,	// (0x000339ac) vkb2_top_candi_pane_ParamLimits

0x6ea6,	// (0x000339ac) vkb2_top_candi_pane

0xe37b,	// (0x0003ae81) cell_vkb2_top_candi_pane_ParamLimits

0xe37b,	// (0x0003ae81) cell_vkb2_top_candi_pane

0x72bd,	// (0x00033dc3) bg_popup_fep_char_preview_window_ParamLimits

0x72bd,	// (0x00033dc3) bg_popup_fep_char_preview_window

0x72cb,	// (0x00033dd1) popup_fep_char_preview_window_t1_ParamLimits

0x72cb,	// (0x00033dd1) popup_fep_char_preview_window_t1

0xe3c5,	// (0x0003aecb) bg_popup_fep_char_preview_window_g1

0xe3cd,	// (0x0003aed3) bg_popup_fep_char_preview_window_g2

0xe3d5,	// (0x0003aedb) bg_popup_fep_char_preview_window_g3

0xe3dd,	// (0x0003aee3) bg_popup_fep_char_preview_window_g4

0xe3e5,	// (0x0003aeeb) bg_popup_fep_char_preview_window_g5

0xe3ed,	// (0x0003aef3) bg_popup_fep_char_preview_window_g6

0xe3f5,	// (0x0003aefb) bg_popup_fep_char_preview_window_g7

0xe3fd,	// (0x0003af03) bg_popup_fep_char_preview_window_g8

0xe405,	// (0x0003af0b) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdbe,	// (0x0003c8c4) bg_popup_fep_char_preview_window_g

0x68ac,	// (0x000333b2) cell_vkb2_top_candi_pane_g1_ParamLimits

0x68ac,	// (0x000333b2) cell_vkb2_top_candi_pane_g1

0x68ba,	// (0x000333c0) cell_vkb2_top_candi_pane_g2_ParamLimits

0x68ba,	// (0x000333c0) cell_vkb2_top_candi_pane_g2

0xd768,	// (0x0003a26e) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd768,	// (0x0003a26e) cell_vkb2_top_candi_pane_g3

0x730d,	// (0x00033e13) cell_vkb2_top_candi_pane_g4_ParamLimits

0x730d,	// (0x00033e13) cell_vkb2_top_candi_pane_g4

0xc765,	// (0x0003926b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc765,	// (0x0003926b) cell_vkb2_top_candi_pane_g5

0x732e,	// (0x00033e34) cell_vkb2_top_candi_pane_g6_ParamLimits

0x732e,	// (0x00033e34) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd3,	// (0x0003c8d9) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd3,	// (0x0003c8d9) cell_vkb2_top_candi_pane_g

0x733c,	// (0x00033e42) cell_vkb2_top_candi_pane_t1

0x603a,	// (0x00032b40) aid_size_touch_slider_mark_ParamLimits

0x603a,	// (0x00032b40) aid_size_touch_slider_mark

0xe014,	// (0x0003ab1a) grid_graphic2_catg_pane_ParamLimits

0xe014,	// (0x0003ab1a) grid_graphic2_catg_pane

0xe0b2,	// (0x0003abb8) popup_grid_graphic2_window_t1_ParamLimits

0xe0b2,	// (0x0003abb8) popup_grid_graphic2_window_t1

0xe0c4,	// (0x0003abca) popup_grid_graphic2_window_t2_ParamLimits

0xe0c4,	// (0x0003abca) popup_grid_graphic2_window_t2

0x0001,

0xfd8c,	// (0x0003c892) popup_grid_graphic2_window_t_ParamLimits

0xfd8c,	// (0x0003c892) popup_grid_graphic2_window_t

0x7ce1,	// (0x000347e7) bg_button_pane_cp05_ParamLimits

0xe237,	// (0x0003ad3d) cell_graphic2_control_pane_g1_ParamLimits

0xe40d,	// (0x0003af13) cell_graphic2_catg_pane_ParamLimits

0xe40d,	// (0x0003af13) cell_graphic2_catg_pane

0x3072,	// (0x0002fb78) bg_button_pane_cp12

0xe41f,	// (0x0003af25) cell_graphic2_catg_pane_g1

0xd92e,	// (0x0003a434) cell_tb_ext_pane_t1_ParamLimits

0x70f3,	// (0x00033bf9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x70f3,	// (0x00033bf9) vkb2_top_cell_right_narrow_pane

0x710b,	// (0x00033c11) vkb2_top_cell_right_wide_pane_ParamLimits

0x710b,	// (0x00033c11) vkb2_top_cell_right_wide_pane

0x6647,	// (0x0003314d) bg_vkb2_func_pane_ParamLimits

0x6647,	// (0x0003314d) bg_vkb2_func_pane

0x717c,	// (0x00033c82) vkb2_top_cell_left_pane_g1_ParamLimits

0x6647,	// (0x0003314d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6647,	// (0x0003314d) bg_vkb2_fuc_pane_cp03

0x71da,	// (0x00033ce0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99e5,	// (0x000364eb) bg_vkb2_func_pane_g1

0x99ed,	// (0x000364f3) bg_vkb2_func_pane_g2

0x99fd,	// (0x00036503) bg_vkb2_func_pane_g3

0x99f5,	// (0x000364fb) bg_vkb2_func_pane_g4

0x9a05,	// (0x0003650b) bg_vkb2_func_pane_g5

0x9a0d,	// (0x00036513) bg_vkb2_func_pane_g6

0x9a15,	// (0x0003651b) bg_vkb2_func_pane_g7

0x9a1d,	// (0x00036523) bg_vkb2_func_pane_g8

0x99dd,	// (0x000364e3) bg_vkb2_func_pane_g9

0x0008,

0xfde0,	// (0x0003c8e6) bg_vkb2_func_pane_g

0x6647,	// (0x0003314d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6647,	// (0x0003314d) bg_vkb2_fuc_pane_cp01

0x717c,	// (0x00033c82) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x717c,	// (0x00033c82) vkb2_top_cell_right_wide_pane_g1

0x6647,	// (0x0003314d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6647,	// (0x0003314d) bg_vkb2_fuc_pane_cp02

0x735b,	// (0x00033e61) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x735b,	// (0x00033e61) vkb2_top_cell_right_narrow_pane_g1

0xd531,	// (0x0003a037) aid_touch_area_decrease_ParamLimits

0xd531,	// (0x0003a037) aid_touch_area_decrease

0xd555,	// (0x0003a05b) aid_touch_area_increase_ParamLimits

0xd555,	// (0x0003a05b) aid_touch_area_increase

0xd56d,	// (0x0003a073) aid_touch_area_mute_ParamLimits

0xd56d,	// (0x0003a073) aid_touch_area_mute

0xd589,	// (0x0003a08f) aid_touch_area_slider_ParamLimits

0xd589,	// (0x0003a08f) aid_touch_area_slider

0xd673,	// (0x0003a179) popup_slider_window_g4_ParamLimits

0xd673,	// (0x0003a179) popup_slider_window_g4

0xd68b,	// (0x0003a191) popup_slider_window_g5_ParamLimits

0xd68b,	// (0x0003a191) popup_slider_window_g5

0xd6ad,	// (0x0003a1b3) popup_slider_window_g6_ParamLimits

0xd6ad,	// (0x0003a1b3) popup_slider_window_g6

0xd6eb,	// (0x0003a1f1) popup_slider_window_t2_ParamLimits

0xd6eb,	// (0x0003a1f1) popup_slider_window_t2

0x0001,

0xfcda,	// (0x0003c7e0) popup_slider_window_t_ParamLimits

0xfcda,	// (0x0003c7e0) popup_slider_window_t

0xd703,	// (0x0003a209) slider_pane_ParamLimits

0xd703,	// (0x0003a209) slider_pane

0xe428,	// (0x0003af2e) slider_pane_g1_ParamLimits

0xe428,	// (0x0003af2e) slider_pane_g1

0xe43c,	// (0x0003af42) slider_pane_g2_ParamLimits

0xe43c,	// (0x0003af42) slider_pane_g2

0xe452,	// (0x0003af58) slider_pane_g3_ParamLimits

0xe452,	// (0x0003af58) slider_pane_g3

0x0003,

0xfdf3,	// (0x0003c8f9) slider_pane_g_ParamLimits

0xfdf3,	// (0x0003c8f9) slider_pane_g

0x5b04,	// (0x0003260a) popup_tb_float_extension_window_ParamLimits

0x5b04,	// (0x0003260a) popup_tb_float_extension_window

0xe47e,	// (0x0003af84) aid_size_cell_tb_float_ext

0x3072,	// (0x0002fb78) bg_popup_sub_window_cp28

0xe48a,	// (0x0003af90) grid_tb_float_ext_pane

0xe494,	// (0x0003af9a) cell_tb_float_ext_pane_ParamLimits

0xe494,	// (0x0003af9a) cell_tb_float_ext_pane

0xe4ae,	// (0x0003afb4) cell_tb_float_ext_pane_g1

0xe4b7,	// (0x0003afbd) grid_highlight_pane_cp12

0x6796,	// (0x0003329c) cell_last_hwr_side_pane_ParamLimits

0x6796,	// (0x0003329c) cell_last_hwr_side_pane

0xc01c,	// (0x00038b22) cell_last_hwr_side_pane_g1

0xe4c0,	// (0x0003afc6) cell_last_hwr_side_pane_g2

0x0001,

0xfdfc,	// (0x0003c902) cell_last_hwr_side_pane_g

0x70a2,	// (0x00033ba8) vkb2_area_bottom_space_btn_pane_ParamLimits

0x70a2,	// (0x00033ba8) vkb2_area_bottom_space_btn_pane

0x68ac,	// (0x000333b2) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf86,	// (0x0003aa8c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x733c,	// (0x00033e42) cell_vkb2_top_candi_pane_t1_ParamLimits

0x737b,	// (0x00033e81) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x737b,	// (0x00033e81) vkb2_area_bottom_space_btn_pane_g1

0x73b5,	// (0x00033ebb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x73b5,	// (0x00033ebb) vkb2_area_bottom_space_btn_pane_g2

0x73eb,	// (0x00033ef1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x73eb,	// (0x00033ef1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe01,	// (0x0003c907) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe01,	// (0x0003c907) vkb2_area_bottom_space_btn_pane_g

0x670a,	// (0x00033210) cel_fep_hwr_func_pane_ParamLimits

0x670a,	// (0x00033210) cel_fep_hwr_func_pane

0x6746,	// (0x0003324c) cell_hwr_side_button_pane_ParamLimits

0x6746,	// (0x0003324c) cell_hwr_side_button_pane

0xd962,	// (0x0003a468) aid_area_touch_clock_ParamLimits

0x7ce1,	// (0x000347e7) bg_uniindi_top_pane_ParamLimits

0xd974,	// (0x0003a47a) uniindi_top_pane_g1_ParamLimits

0xd98a,	// (0x0003a490) uniindi_top_pane_g2_ParamLimits

0xd996,	// (0x0003a49c) uniindi_top_pane_g3_ParamLimits

0xd9a7,	// (0x0003a4ad) uniindi_top_pane_g4_ParamLimits

0xfd12,	// (0x0003c818) uniindi_top_pane_g_ParamLimits

0xd9b4,	// (0x0003a4ba) uniindi_top_pane_t1_ParamLimits

0x7ce1,	// (0x000347e7) bg_vkb2_func_pane_cp01_ParamLimits

0x7ce1,	// (0x000347e7) bg_vkb2_func_pane_cp01

0xe4c9,	// (0x0003afcf) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4c9,	// (0x0003afcf) cel_fep_hwr_func_pane_g1

0x7ce1,	// (0x000347e7) bg_vkb2_func_pane_cp02_ParamLimits

0x7ce1,	// (0x000347e7) bg_vkb2_func_pane_cp02

0xe4c9,	// (0x0003afcf) cell_hwr_side_button_pane_g1_ParamLimits

0xe4c9,	// (0x0003afcf) cell_hwr_side_button_pane_g1

0x985e,	// (0x00036364) status_pane_g4_ParamLimits

0x985e,	// (0x00036364) status_pane_g4

0x9878,	// (0x0003637e) status_pane_t1

0xbd68,	// (0x0003886e) form2_midp_gauge_slider_cont_pane

0xbd70,	// (0x00038876) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd82,	// (0x00038888) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd94,	// (0x0003889a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad2,	// (0x0003c5d8) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda6,	// (0x000388ac) form2_midp_slider_pane_ParamLimits

0x6d12,	// (0x00033818) aid_size_cell_func_vkb2_ParamLimits

0x6d12,	// (0x00033818) aid_size_cell_func_vkb2

0xe46a,	// (0x0003af70) slider_pane_g4_ParamLimits

0xe46a,	// (0x0003af70) slider_pane_g4

0x7435,	// (0x00033f3b) form2_midp_gauge_slider_pane_t2_cp01

0x7443,	// (0x00033f49) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7443,	// (0x00033f49) form2_midp_gauge_slider_pane_t3_cp01

0x7460,	// (0x00033f66) form2_midp_slider_pane_cp01

0x3072,	// (0x0002fb78) navi_smil_pane

0xe502,	// (0x0003b008) navi_smil_pane_g1

0xe50a,	// (0x0003b010) navi_smil_pane_t1

0xe4d7,	// (0x0003afdd) form2_midp_slider_pane_g1

0xe4e0,	// (0x0003afe6) form2_midp_slider_pane_g2

0xe4e8,	// (0x0003afee) form2_midp_slider_pane_g3

0xe4d7,	// (0x0003afdd) form2_midp_slider_pane_g4

0xe4f0,	// (0x0003aff6) form2_midp_slider_pane_g5

0x0004,

0xfe0a,	// (0x0003c910) form2_midp_slider_pane_g

0x7425,	// (0x00033f2b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7425,	// (0x00033f2b) vkb2_area_bottom_space_btn_pane_g4

0x968d,	// (0x00036193) lc0_navi_pane_ParamLimits

0x968d,	// (0x00036193) lc0_navi_pane

0x9703,	// (0x00036209) lc0_stat_indi_pane_ParamLimits

0x9703,	// (0x00036209) lc0_stat_indi_pane

0x971a,	// (0x00036220) ls0_title_pane_ParamLimits

0x971a,	// (0x00036220) ls0_title_pane

0x82e5,	// (0x00034deb) bg_popup_sub_pane_cp14_ParamLimits

0xd949,	// (0x0003a44f) list_uniindi_pane_ParamLimits

0xd955,	// (0x0003a45b) uniindi_top_pane_ParamLimits

0xd9f1,	// (0x0003a4f7) list_single_uniindi_pane_g1_ParamLimits

0xda04,	// (0x0003a50a) list_single_uniindi_pane_t1_ParamLimits

0x7469,	// (0x00033f6f) lc0_stat_clock_pane_ParamLimits

0x7469,	// (0x00033f6f) lc0_stat_clock_pane

0xe518,	// (0x0003b01e) lc0_stat_indi_pane_g1_ParamLimits

0xe518,	// (0x0003b01e) lc0_stat_indi_pane_g1

0xe525,	// (0x0003b02b) lc0_stat_indi_pane_g2_ParamLimits

0xe525,	// (0x0003b02b) lc0_stat_indi_pane_g2

0x0001,

0xfe15,	// (0x0003c91b) lc0_stat_indi_pane_g_ParamLimits

0xfe15,	// (0x0003c91b) lc0_stat_indi_pane_g

0x7476,	// (0x00033f7c) lc0_uni_indicator_pane_ParamLimits

0x7476,	// (0x00033f7c) lc0_uni_indicator_pane

0xe532,	// (0x0003b038) ls0_title_pane_g1_ParamLimits

0xe532,	// (0x0003b038) ls0_title_pane_g1

0xe546,	// (0x0003b04c) ls0_title_pane_t1_ParamLimits

0xe546,	// (0x0003b04c) ls0_title_pane_t1

0x7483,	// (0x00033f89) lc0_uni_indicator_pane_g1_ParamLimits

0x7483,	// (0x00033f89) lc0_uni_indicator_pane_g1

0xe57c,	// (0x0003b082) lc0_stat_clock_pane_t1

0x4640,	// (0x00031146) main_ai5_pane

0xe592,	// (0x0003b098) ai5_sk_pane_ParamLimits

0xe592,	// (0x0003b098) ai5_sk_pane

0xe59f,	// (0x0003b0a5) cell_ai5_widget_pane_ParamLimits

0xe59f,	// (0x0003b0a5) cell_ai5_widget_pane

0xe668,	// (0x0003b16e) aid_size_cell_widget_grid

0xe676,	// (0x0003b17c) bg_ai5_widget_pane_ParamLimits

0xe676,	// (0x0003b17c) bg_ai5_widget_pane

0xe6f2,	// (0x0003b1f8) cell_ai5_widget_pane_g2

0xe706,	// (0x0003b20c) cell_ai5_widget_pane_g3

0xe720,	// (0x0003b226) cell_ai5_widget_pane_g4

0xe730,	// (0x0003b236) cell_ai5_widget_pane_g5

0xe740,	// (0x0003b246) cell_ai5_widget_pane_g6

0xe74c,	// (0x0003b252) cell_ai5_widget_pane_g7

0xe7b8,	// (0x0003b2be) cell_ai5_widget_pane_t1_ParamLimits

0xe7b8,	// (0x0003b2be) cell_ai5_widget_pane_t1

0xe7d5,	// (0x0003b2db) cell_ai5_widget_pane_t2_ParamLimits

0xe7d5,	// (0x0003b2db) cell_ai5_widget_pane_t2

0xe7ed,	// (0x0003b2f3) cell_ai5_widget_pane_t3_ParamLimits

0xe7ed,	// (0x0003b2f3) cell_ai5_widget_pane_t3

0xe805,	// (0x0003b30b) cell_ai5_widget_pane_t4_ParamLimits

0xe805,	// (0x0003b30b) cell_ai5_widget_pane_t4

0xe82b,	// (0x0003b331) cell_ai5_widget_pane_t5_ParamLimits

0xe82b,	// (0x0003b331) cell_ai5_widget_pane_t5

0xe84a,	// (0x0003b350) cell_ai5_widget_pane_t6_ParamLimits

0xe84a,	// (0x0003b350) cell_ai5_widget_pane_t6

0xe85c,	// (0x0003b362) cell_ai5_widget_pane_t7_ParamLimits

0xe85c,	// (0x0003b362) cell_ai5_widget_pane_t7

0xe87b,	// (0x0003b381) cell_ai5_widget_pane_t8_ParamLimits

0xe87b,	// (0x0003b381) cell_ai5_widget_pane_t8

0x000b,

0xfe35,	// (0x0003c93b) cell_ai5_widget_pane_t_ParamLimits

0xfe35,	// (0x0003c93b) cell_ai5_widget_pane_t

0xe8ff,	// (0x0003b405) grid_ai5_widget_pane

0x82e5,	// (0x00034deb) highlight_cell_ai5_widget_pane_ParamLimits

0x82e5,	// (0x00034deb) highlight_cell_ai5_widget_pane

0xe913,	// (0x0003b419) ai5_sk_left_pane

0xe91d,	// (0x0003b423) ai5_sk_middle_pane

0xe927,	// (0x0003b42d) ai5_sk_right_pane

0xe931,	// (0x0003b437) bg_ai5_widget_pane_g1_ParamLimits

0xe931,	// (0x0003b437) bg_ai5_widget_pane_g1

0xe93d,	// (0x0003b443) bg_ai5_widget_pane_g2_ParamLimits

0xe93d,	// (0x0003b443) bg_ai5_widget_pane_g2

0xe949,	// (0x0003b44f) bg_ai5_widget_pane_g3_ParamLimits

0xe949,	// (0x0003b44f) bg_ai5_widget_pane_g3

0xe955,	// (0x0003b45b) bg_ai5_widget_pane_g4_ParamLimits

0xe955,	// (0x0003b45b) bg_ai5_widget_pane_g4

0xe961,	// (0x0003b467) bg_ai5_widget_pane_g5_ParamLimits

0xe961,	// (0x0003b467) bg_ai5_widget_pane_g5

0xe96d,	// (0x0003b473) bg_ai5_widget_pane_g6_ParamLimits

0xe96d,	// (0x0003b473) bg_ai5_widget_pane_g6

0xe979,	// (0x0003b47f) bg_ai5_widget_pane_g7_ParamLimits

0xe979,	// (0x0003b47f) bg_ai5_widget_pane_g7

0xe985,	// (0x0003b48b) bg_ai5_widget_pane_g8_ParamLimits

0xe985,	// (0x0003b48b) bg_ai5_widget_pane_g8

0xe991,	// (0x0003b497) bg_ai5_widget_pane_g9_ParamLimits

0xe991,	// (0x0003b497) bg_ai5_widget_pane_g9

0x0008,

0xfe4e,	// (0x0003c954) bg_ai5_widget_pane_g_ParamLimits

0xfe4e,	// (0x0003c954) bg_ai5_widget_pane_g

0xe9c3,	// (0x0003b4c9) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c3,	// (0x0003b4c9) cell_shortcut_ai5_widget_pane

0x918f,	// (0x00035c95) bg_cell_shortcut_ai5_widget_pane

0xe9d4,	// (0x0003b4da) cell_grid_ai5_widget_pane_g1

0x918f,	// (0x00035c95) highlight_cell_shortcut_ai5_widget_pane

0x99e5,	// (0x000364eb) ai5_sk_left_pane_g1

0xe9dd,	// (0x0003b4e3) ai5_sk_left_pane_g2

0xe9e5,	// (0x0003b4eb) ai5_sk_left_pane_g3

0xe9ed,	// (0x0003b4f3) ai5_sk_left_pane_g4

0x0003,

0xfe61,	// (0x0003c967) ai5_sk_left_pane_g

0xe9f5,	// (0x0003b4fb) ai5_sk_left_pane_t1

0x99ed,	// (0x000364f3) ai5_sk_right_pane_g1

0xea03,	// (0x0003b509) ai5_sk_right_pane_g2

0xea0b,	// (0x0003b511) ai5_sk_right_pane_g3

0xea13,	// (0x0003b519) ai5_sk_right_pane_g4

0x0003,

0xfe6a,	// (0x0003c970) ai5_sk_right_pane_g

0xea1b,	// (0x0003b521) ai5_sk_right_pane_t1

0x99ed,	// (0x000364f3) ai5_sk_middle_pane_g1

0x99e5,	// (0x000364eb) ai5_sk_middle_pane_g2

0x9a05,	// (0x0003650b) ai5_sk_middle_pane_g3

0xea0b,	// (0x0003b511) ai5_sk_middle_pane_g4

0xe9e5,	// (0x0003b4eb) ai5_sk_middle_pane_g5

0xea29,	// (0x0003b52f) ai5_sk_middle_pane_g6

0xea31,	// (0x0003b537) ai5_sk_middle_pane_g7

0x0006,

0xfe73,	// (0x0003c979) ai5_sk_middle_pane_g

0x9513,	// (0x00036019) aid_touch_area_size_lc0_ParamLimits

0x9513,	// (0x00036019) aid_touch_area_size_lc0

0x68db,	// (0x000333e1) cell_hwr_candidate_pane_t1_ParamLimits

0x952f,	// (0x00036035) aid_touch_navi_pane

0x9808,	// (0x0003630e) status_dt_navi_pane_ParamLimits

0x9808,	// (0x0003630e) status_dt_navi_pane

0x9815,	// (0x0003631b) status_dt_sta_pane_ParamLimits

0x9815,	// (0x0003631b) status_dt_sta_pane

0xea39,	// (0x0003b53f) dt_sta_controll_pane

0xea46,	// (0x0003b54c) dt_sta_indi_pane

0xea57,	// (0x0003b55d) dt_sta_title_pane

0x7ce1,	// (0x000347e7) bg_dt_sta_indi_pane_ParamLimits

0x7ce1,	// (0x000347e7) bg_dt_sta_indi_pane

0xea6a,	// (0x0003b570) dt_sta_battery_pane

0xea72,	// (0x0003b578) dt_sta_indi_pane_g1

0xea7b,	// (0x0003b581) dt_sta_indi_pane_g2

0xea84,	// (0x0003b58a) dt_sta_indi_pane_g3

0x0002,

0xfe82,	// (0x0003c988) dt_sta_indi_pane_g

0xea8d,	// (0x0003b593) dt_sta_signal_pane

0x82e5,	// (0x00034deb) bg_dt_sta_title_pane_ParamLimits

0x82e5,	// (0x00034deb) bg_dt_sta_title_pane

0xea96,	// (0x0003b59c) dt_sta_title_pane_g1

0xea9e,	// (0x0003b5a4) dt_sta_title_pane_t1_ParamLimits

0xea9e,	// (0x0003b5a4) dt_sta_title_pane_t1

0x3072,	// (0x0002fb78) bg_dt_sta_control_pane

0xeab3,	// (0x0003b5b9) dt_sta_controll_pane_g1

0xeabc,	// (0x0003b5c2) bg_dt_sta_title_pane_g1

0xeac5,	// (0x0003b5cb) bg_dt_sta_title_pane_g2

0xeace,	// (0x0003b5d4) bg_dt_sta_title_pane_g3

0x0002,

0xfe89,	// (0x0003c98f) bg_dt_sta_title_pane_g

0xc01c,	// (0x00038b22) bg_dt_sta_indi_pane_g1

0xead7,	// (0x0003b5dd) dt_sta_signal_pane_g1

0xeadf,	// (0x0003b5e5) dt_sta_signal_pane_g2

0x0001,

0xfe90,	// (0x0003c996) dt_sta_signal_pane_g

0xeae7,	// (0x0003b5ed) dt_sta_battery_pane_g1

0xeaf0,	// (0x0003b5f6) dt_sta_battery_pane_t1

0xc01c,	// (0x00038b22) bg_dt_sta_control_pane_g1

0x8c89,	// (0x0003578f) fep_china_uni_eep_pane

0x8c91,	// (0x00035797) fep_china_uni_entry_pane_ParamLimits

0x8ca1,	// (0x000357a7) popup_fep_china_uni_window_g1_ParamLimits

0x8cb1,	// (0x000357b7) popup_fep_china_uni_window_g2_ParamLimits

0x8cb1,	// (0x000357b7) popup_fep_china_uni_window_g2

0x0001,

0xf6f6,	// (0x0003c1fc) popup_fep_china_uni_window_g_ParamLimits

0xf6f6,	// (0x0003c1fc) popup_fep_china_uni_window_g

0xeaff,	// (0x0003b605) fep_china_uni_eep_pane_g1

0xeb07,	// (0x0003b60d) fep_china_uni_eep_pane_t1

0xe4f9,	// (0x0003afff) aid_touch_area_size_smil_player

0x9685,	// (0x0003618b) lc0_clock_pane

0x986c,	// (0x00036372) status_pane_g5_ParamLimits

0x986c,	// (0x00036372) status_pane_g5

0x57c9,	// (0x000322cf) popup_keymap_window

0x982a,	// (0x00036330) status_icon_pane

0xe706,	// (0x0003b20c) cell_ai5_widget_pane_g3_ParamLimits

0xe720,	// (0x0003b226) cell_ai5_widget_pane_g4_ParamLimits

0xe730,	// (0x0003b236) cell_ai5_widget_pane_g5_ParamLimits

0xe758,	// (0x0003b25e) cell_ai5_widget_pane_g8_ParamLimits

0xe758,	// (0x0003b25e) cell_ai5_widget_pane_g8

0xe76c,	// (0x0003b272) cell_ai5_widget_pane_g9_ParamLimits

0xe76c,	// (0x0003b272) cell_ai5_widget_pane_g9

0xe780,	// (0x0003b286) cell_ai5_widget_pane_g10_ParamLimits

0xe780,	// (0x0003b286) cell_ai5_widget_pane_g10

0xeb16,	// (0x0003b61c) status_icon_pane_g1

0x3072,	// (0x0002fb78) bg_popup_sub_pane_cp13

0xeb1e,	// (0x0003b624) popup_keymap_window_t1

0x9464,	// (0x00035f6a) control_pane_g6_ParamLimits

0x9464,	// (0x00035f6a) control_pane_g6

0x9471,	// (0x00035f77) control_pane_g7_ParamLimits

0x9471,	// (0x00035f77) control_pane_g7

0x947e,	// (0x00035f84) control_pane_g8_ParamLimits

0x947e,	// (0x00035f84) control_pane_g8

0xea39,	// (0x0003b53f) dt_sta_controll_pane_ParamLimits

0xea46,	// (0x0003b54c) dt_sta_indi_pane_ParamLimits

0xea57,	// (0x0003b55d) dt_sta_title_pane_ParamLimits

0x821d,	// (0x00034d23) aid_size_touch_scroll_bar_cale

0x4719,	// (0x0003121f) popup_discreet_window_ParamLimits

0x4719,	// (0x0003121f) popup_discreet_window

0x47a1,	// (0x000312a7) popup_sk_window

0xa06c,	// (0x00036b72) bg_popup_sub_pane_cp28_ParamLimits

0xa06c,	// (0x00036b72) bg_popup_sub_pane_cp28

0xeb2c,	// (0x0003b632) popup_discreet_window_g1_ParamLimits

0xeb2c,	// (0x0003b632) popup_discreet_window_g1

0xeb4c,	// (0x0003b652) popup_discreet_window_t1_ParamLimits

0xeb4c,	// (0x0003b652) popup_discreet_window_t1

0xeb6a,	// (0x0003b670) popup_discreet_window_t2_ParamLimits

0xeb6a,	// (0x0003b670) popup_discreet_window_t2

0x0002,

0xfe95,	// (0x0003c99b) popup_discreet_window_t_ParamLimits

0xfe95,	// (0x0003c99b) popup_discreet_window_t

0x7497,	// (0x00033f9d) popup_sk_window_g1

0x74a1,	// (0x00033fa7) popup_sk_window_g2

0x0001,

0xfe9c,	// (0x0003c9a2) popup_sk_window_g

0x74a9,	// (0x00033faf) popup_sk_window_t1

0x74b7,	// (0x00033fbd) popup_sk_window_t1_copy1

0xe6f2,	// (0x0003b1f8) cell_ai5_widget_pane_g2_ParamLimits

0xe88d,	// (0x0003b393) cell_ai5_widget_pane_t9_ParamLimits

0xe88d,	// (0x0003b393) cell_ai5_widget_pane_t9

0x3072,	// (0x0002fb78) main_fep_fshwr2_pane

0x74c5,	// (0x00033fcb) aid_fshwr2_btn_pane

0x74d5,	// (0x00033fdb) aid_fshwr2_syb_pane

0x74e9,	// (0x00033fef) aid_fshwr2_txt_pane

0x74f9,	// (0x00033fff) fshwr2_func_candi_pane

0x751d,	// (0x00034023) fshwr2_hwr_syb_pane

0x7537,	// (0x0003403d) fshwr2_icf_pane

0x4640,	// (0x00031146) fshwr2_icf_bg_pane

0x7565,	// (0x0003406b) fshwr2_icf_pane_t1_ParamLimits

0x7565,	// (0x0003406b) fshwr2_icf_pane_t1

0x8b5e,	// (0x00035664) fshwr2_func_candi_pane_g1

0xebbc,	// (0x0003b6c2) fshwr2_func_candi_row_pane_ParamLimits

0xebbc,	// (0x0003b6c2) fshwr2_func_candi_row_pane

0x757d,	// (0x00034083) cell_fshwr2_syb_pane_ParamLimits

0x757d,	// (0x00034083) cell_fshwr2_syb_pane

0x75a0,	// (0x000340a6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x75a0,	// (0x000340a6) fshwr2_hwr_syb_pane_g1

0x4640,	// (0x00031146) bg_popup_call_pane_cp01

0x75ae,	// (0x000340b4) fshwr2_func_candi_cell_pane_ParamLimits

0x75ae,	// (0x000340b4) fshwr2_func_candi_cell_pane

0xa6e0,	// (0x000371e6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa6e0,	// (0x000371e6) fshwr2_func_candi_cell_bg_pane

0x75f9,	// (0x000340ff) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x75f9,	// (0x000340ff) fshwr2_func_candi_cell_pane_g1

0x7624,	// (0x0003412a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7624,	// (0x0003412a) fshwr2_func_candi_cell_pane_t1

0x4640,	// (0x00031146) bg_button_pane_cp08

0x94b3,	// (0x00035fb9) cell_fshwr2_syb_bg_pane

0x7637,	// (0x0003413d) cell_fshwr2_syb_bg_pane_g1

0x764b,	// (0x00034151) cell_fshwr2_syb_bg_pane_t1

0x82e5,	// (0x00034deb) main_tmo_pane

0xab7b,	// (0x00037681) uni_indicator_pane_g1_ParamLimits

0xab91,	// (0x00037697) uni_indicator_pane_g2_ParamLimits

0xaba7,	// (0x000376ad) uni_indicator_pane_g3_ParamLimits

0xabba,	// (0x000376c0) uni_indicator_pane_g4_ParamLimits

0xabba,	// (0x000376c0) uni_indicator_pane_g4

0xabce,	// (0x000376d4) uni_indicator_pane_g5_ParamLimits

0xabce,	// (0x000376d4) uni_indicator_pane_g5

0xabce,	// (0x000376d4) uni_indicator_pane_g6_ParamLimits

0xabce,	// (0x000376d4) uni_indicator_pane_g6

0xf8fa,	// (0x0003c400) uni_indicator_pane_g_ParamLimits

0xd50d,	// (0x0003a013) popup_tmo_note_window_ParamLimits

0xd50d,	// (0x0003a013) popup_tmo_note_window

0x6cf4,	// (0x000337fa) fshwr2_bg_pane

0x7615,	// (0x0003411b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7615,	// (0x0003411b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea1,	// (0x0003c9a7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea1,	// (0x0003c9a7) fshwr2_func_candi_cell_pane_g

0x6894,	// (0x0003339a) bg_popup_window_pane_cp01

0x7661,	// (0x00034167) bg_popup_window_pane_g1_cp01

0xebe3,	// (0x0003b6e9) bg_popup_window_pane_cp22_ParamLimits

0xebe3,	// (0x0003b6e9) bg_popup_window_pane_cp22

0xebf1,	// (0x0003b6f7) listscroll_tmo_link_pane_ParamLimits

0xebf1,	// (0x0003b6f7) listscroll_tmo_link_pane

0xec31,	// (0x0003b737) popup_tmo_note_window_g1_ParamLimits

0xec31,	// (0x0003b737) popup_tmo_note_window_g1

0xec3e,	// (0x0003b744) tmo_note_info_pane_ParamLimits

0xec3e,	// (0x0003b744) tmo_note_info_pane

0xec58,	// (0x0003b75e) list_tmo_note_info_pane_g1_ParamLimits

0xec58,	// (0x0003b75e) list_tmo_note_info_pane_g1

0xec6f,	// (0x0003b775) list_tmo_note_info_pane_g2_ParamLimits

0xec6f,	// (0x0003b775) list_tmo_note_info_pane_g2

0x0001,

0xfea6,	// (0x0003c9ac) list_tmo_note_info_pane_g_ParamLimits

0xfea6,	// (0x0003c9ac) list_tmo_note_info_pane_g

0xec8b,	// (0x0003b791) list_tmo_note_info_text_pane_ParamLimits

0xec8b,	// (0x0003b791) list_tmo_note_info_text_pane

0xed0c,	// (0x0003b812) list_tmo_link_pane

0xed19,	// (0x0003b81f) scroll_pane_cp20

0xed26,	// (0x0003b82c) list_single_tmo_link_pane_ParamLimits

0xed26,	// (0x0003b82c) list_single_tmo_link_pane

0xed36,	// (0x0003b83c) list_single_tmo_link_pane_t1

0xed44,	// (0x0003b84a) list_tmo_note_info_text_pane_t1_ParamLimits

0xed44,	// (0x0003b84a) list_tmo_note_info_text_pane_t1

0x83a1,	// (0x00034ea7) aid_size_touch_scroll_bar_cp01_ParamLimits

0x83a1,	// (0x00034ea7) aid_size_touch_scroll_bar_cp01

0x4e7c,	// (0x00031982) aid_size_touch_slider_marker

0x4789,	// (0x0003128f) popup_settings_window_ParamLimits

0x4789,	// (0x0003128f) popup_settings_window

0x564c,	// (0x00032152) popup_candi_list_indi_window

0x952f,	// (0x00036035) aid_touch_navi_pane_ParamLimits

0x6c4f,	// (0x00033755) rs_clock_indi_pane

0x6c58,	// (0x0003375e) sctrl_sk_bottom_pane_ParamLimits

0x6c69,	// (0x0003376f) sctrl_sk_top_pane_ParamLimits

0x6d64,	// (0x0003386a) popup_fep_tooltip_window

0xe668,	// (0x0003b16e) aid_size_cell_widget_grid_ParamLimits

0xe6dd,	// (0x0003b1e3) cell_ai5_widget_pane_g1_ParamLimits

0xe6dd,	// (0x0003b1e3) cell_ai5_widget_pane_g1

0xe740,	// (0x0003b246) cell_ai5_widget_pane_g6_ParamLimits

0xe74c,	// (0x0003b252) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1a,	// (0x0003c920) cell_ai5_widget_pane_g_ParamLimits

0xfe1a,	// (0x0003c920) cell_ai5_widget_pane_g

0xe8bc,	// (0x0003b3c2) cell_ai5_widget_pane_t10_ParamLimits

0xe8bc,	// (0x0003b3c2) cell_ai5_widget_pane_t10

0xe8ff,	// (0x0003b405) grid_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0003b4a3) cell_contacts_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0003b4a3) cell_contacts_ai5_widget_pane

0xeb7f,	// (0x0003b685) popup_discreet_window_t3_ParamLimits

0xeb7f,	// (0x0003b685) popup_discreet_window_t3

0x754f,	// (0x00034055) popup_fshwr2_char_preview_window_ParamLimits

0x754f,	// (0x00034055) popup_fshwr2_char_preview_window

0xeca9,	// (0x0003b7af) tmo_note_info_pane_t1

0xecbe,	// (0x0003b7c4) tmo_note_info_pane_t2

0xecd3,	// (0x0003b7d9) tmo_note_info_pane_t3

0xece8,	// (0x0003b7ee) tmo_note_info_pane_t4

0xecfa,	// (0x0003b800) tmo_note_info_pane_t5

0x0004,

0xfeab,	// (0x0003c9b1) tmo_note_info_pane_t

0xed0c,	// (0x0003b812) list_tmo_link_pane_ParamLimits

0xed19,	// (0x0003b81f) scroll_pane_cp20_ParamLimits

0x4640,	// (0x00031146) bg_popup_fep_char_preview_window_cp01

0xed5d,	// (0x0003b863) popup_fshwr2_char_preview_window_t1

0xed6b,	// (0x0003b871) popup_candi_list_indi_window_g1

0xed74,	// (0x0003b87a) bg_cell_contacts_ai5_widget_pane

0xed80,	// (0x0003b886) cell_contacts_ai5_widget_pane_g1

0xc6ba,	// (0x000391c0) cell_contacts_ai5_widget_pane_g2

0xed95,	// (0x0003b89b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb6,	// (0x0003c9bc) cell_contacts_ai5_widget_pane_g

0xeda1,	// (0x0003b8a7) cell_contacts_ai5_widget_pane_t1

0x82e5,	// (0x00034deb) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee18,	// (0x0003b91e) settings_container_pane

0x918f,	// (0x00035c95) listscroll_set_pane_copy1

0xb701,	// (0x00038207) scroll_pane_cp121_copy1

0x9e09,	// (0x0003690f) set_content_pane_copy1

0xee24,	// (0x0003b92a) aid_height_set_list_copy1_ParamLimits

0xee24,	// (0x0003b92a) aid_height_set_list_copy1

0xadb6,	// (0x000378bc) aid_size_parent_copy1_ParamLimits

0xadb6,	// (0x000378bc) aid_size_parent_copy1

0xee30,	// (0x0003b936) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee30,	// (0x0003b936) button_value_adjust_pane_cp6_copy1

0x94b3,	// (0x00035fb9) list_highlight_pane_cp2_copy1_ParamLimits

0x94b3,	// (0x00035fb9) list_highlight_pane_cp2_copy1

0xee44,	// (0x0003b94a) list_set_pane_copy1_ParamLimits

0xee44,	// (0x0003b94a) list_set_pane_copy1

0xedb3,	// (0x0003b8b9) main_pane_set_t1_copy1_ParamLimits

0xedb3,	// (0x0003b8b9) main_pane_set_t1_copy1

0xeded,	// (0x0003b8f3) main_pane_set_t2_copy1_ParamLimits

0xeded,	// (0x0003b8f3) main_pane_set_t2_copy1

0xeef1,	// (0x0003b9f7) main_pane_set_t3_copy1

0xeeff,	// (0x0003ba05) main_pane_set_t4_copy1

0xee0c,	// (0x0003b912) set_content_pane_g1_copy1_ParamLimits

0xee0c,	// (0x0003b912) set_content_pane_g1_copy1

0xef0d,	// (0x0003ba13) setting_code_pane_copy1

0xef15,	// (0x0003ba1b) setting_slider_graphic_pane_copy1

0xef15,	// (0x0003ba1b) setting_slider_pane_copy1

0xef1d,	// (0x0003ba23) setting_text_pane_copy1

0xef1d,	// (0x0003ba23) setting_volume_pane_copy1

0xef0d,	// (0x0003ba13) settings_code_pane_cp2_copy1

0xef25,	// (0x0003ba2b) settings_code_pane_cp_copy1_ParamLimits

0xef25,	// (0x0003ba2b) settings_code_pane_cp_copy1

0x766a,	// (0x00034170) volume_set_pane_copy1

0xef39,	// (0x0003ba3f) volume_set_pane_g10_copy1

0xef41,	// (0x0003ba47) volume_set_pane_g1_copy1

0xef49,	// (0x0003ba4f) volume_set_pane_g2_copy1

0xef51,	// (0x0003ba57) volume_set_pane_g3_copy1

0xef59,	// (0x0003ba5f) volume_set_pane_g4_copy1

0xef61,	// (0x0003ba67) volume_set_pane_g5_copy1

0xef69,	// (0x0003ba6f) volume_set_pane_g6_copy1

0xef71,	// (0x0003ba77) volume_set_pane_g7_copy1

0xef79,	// (0x0003ba7f) volume_set_pane_g8_copy1

0xef81,	// (0x0003ba87) volume_set_pane_g9_copy1

0x7a58,	// (0x0003455e) bg_set_opt_pane_cp_copy1_ParamLimits

0x7a58,	// (0x0003455e) bg_set_opt_pane_cp_copy1

0x7672,	// (0x00034178) setting_slider_pane_t1_copy1_ParamLimits

0x7672,	// (0x00034178) setting_slider_pane_t1_copy1

0x7691,	// (0x00034197) setting_slider_pane_t2_copy1_ParamLimits

0x7691,	// (0x00034197) setting_slider_pane_t2_copy1

0x76ab,	// (0x000341b1) setting_slider_pane_t3_copy1_ParamLimits

0x76ab,	// (0x000341b1) setting_slider_pane_t3_copy1

0x76c3,	// (0x000341c9) slider_set_pane_copy1_ParamLimits

0x76c3,	// (0x000341c9) slider_set_pane_copy1

0x833d,	// (0x00034e43) set_opt_bg_pane_g1_copy2

0x8345,	// (0x00034e4b) set_opt_bg_pane_g2_copy2

0xef89,	// (0x0003ba8f) set_opt_bg_pane_g3_copy2

0x8355,	// (0x00034e5b) set_opt_bg_pane_g4_copy2

0x835d,	// (0x00034e63) set_opt_bg_pane_g5_copy2

0x8365,	// (0x00034e6b) set_opt_bg_pane_g6_copy2

0xef93,	// (0x0003ba99) set_opt_bg_pane_g7_copy2

0xef9b,	// (0x0003baa1) set_opt_bg_pane_g8_copy2

0xefa5,	// (0x0003baab) set_opt_bg_pane_g9_copy2

0x76d9,	// (0x000341df) aid_size_touch_slider_mark_copy1_ParamLimits

0x76d9,	// (0x000341df) aid_size_touch_slider_mark_copy1

0xefaf,	// (0x0003bab5) slider_set_pane_g1_copy1

0x76ed,	// (0x000341f3) slider_set_pane_g2_copy1

0x605a,	// (0x00032b60) slider_set_pane_g3_copy1_ParamLimits

0x605a,	// (0x00032b60) slider_set_pane_g3_copy1

0x606e,	// (0x00032b74) slider_set_pane_g4_copy1_ParamLimits

0x606e,	// (0x00032b74) slider_set_pane_g4_copy1

0x6086,	// (0x00032b8c) slider_set_pane_g5_copy1_ParamLimits

0x6086,	// (0x00032b8c) slider_set_pane_g5_copy1

0x605a,	// (0x00032b60) slider_set_pane_g6_copy1_ParamLimits

0x605a,	// (0x00032b60) slider_set_pane_g6_copy1

0x76f5,	// (0x000341fb) slider_set_pane_g7_copy1_ParamLimits

0x76f5,	// (0x000341fb) slider_set_pane_g7_copy1

0x3086,	// (0x0002fb8c) bg_set_opt_pane_cp2_copy1

0xefb8,	// (0x0003babe) setting_slider_graphic_pane_g1_copy1

0xefc1,	// (0x0003bac7) setting_slider_graphic_pane_t1_copy1

0xefd1,	// (0x0003bad7) setting_slider_graphic_pane_t2_copy1

0xefe1,	// (0x0003bae7) slider_set_pane_cp_copy1

0xeff1,	// (0x0003baf7) input_focus_pane_cp1_copy1

0xeffa,	// (0x0003bb00) list_set_text_pane_copy1

0xf002,	// (0x0003bb08) setting_text_pane_g1_copy1

0x3985,	// (0x0003048b) set_text_pane_t1_copy1

0xeff1,	// (0x0003baf7) input_focus_pane_cp2_copy1

0xf002,	// (0x0003bb08) setting_code_pane_g1_copy1

0xf00b,	// (0x0003bb11) setting_code_pane_t1_copy1

0xb529,	// (0x0003802f) list_set_graphic_pane_copy1

0x3086,	// (0x0002fb8c) bg_set_opt_pane_cp4_copy1

0x8e88,	// (0x0003598e) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e88,	// (0x0003598e) list_set_graphic_pane_g1_copy1

0xf019,	// (0x0003bb1f) list_set_graphic_pane_g2_copy1

0x8ea0,	// (0x000359a6) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ea0,	// (0x000359a6) list_set_graphic_pane_t1_copy1

0xc01c,	// (0x00038b22) rs_clock_indi_pane_g1

0xf021,	// (0x0003bb27) rs_clock_indi_pane_t1

0xf02f,	// (0x0003bb35) rs_indi_pane

0xf037,	// (0x0003bb3d) rs_indi_pane_g1

0xf040,	// (0x0003bb46) rs_indi_pane_g2

0xf049,	// (0x0003bb4f) rs_indi_pane_g3

0x0002,

0xfebd,	// (0x0003c9c3) rs_indi_pane_g

0x918f,	// (0x00035c95) bg_popup_preview_window_pane_cp03

0xf052,	// (0x0003bb58) popup_fep_tooltip_window_t1

0xccac,	// (0x000397b2) popup_note2_window_g2_ParamLimits

0xccac,	// (0x000397b2) popup_note2_window_g2

0x0001,

0xfc4a,	// (0x0003c750) popup_note2_window_g_ParamLimits

0xfc4a,	// (0x0003c750) popup_note2_window_g

0xd1a7,	// (0x00039cad) bg_popup_sub_pane_cp11_ParamLimits

0xd1b4,	// (0x00039cba) cell_ai3_links_pane_g1_ParamLimits

0xd1cb,	// (0x00039cd1) cell_ai3_links_pane_t1

0x3985,	// (0x0003048b) set_text_pane_t1_copy1_ParamLimits

0x9093,	// (0x00035b99) cell_graphic_popup_pane_cp2_ParamLimits

0x9093,	// (0x00035b99) cell_graphic_popup_pane_cp2

0xf060,	// (0x0003bb66) cell_graphic_popup_pane_g1_cp2

0x8030,	// (0x00034b36) cell_graphic_popup_pane_g2_cp2

0xf068,	// (0x0003bb6e) cell_graphic_popup_pane_g3_cp2

0xf070,	// (0x0003bb76) cell_graphic_popup_pane_t2_cp2

0x8041,	// (0x00034b47) grid_highlight_pane_cp3_cp2

0x8695,	// (0x0003519b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x82e5,	// (0x00034deb) main_tmo_pane_ParamLimits

0xd501,	// (0x0003a007) popup_tmo_big_image_note_window

0xe6cc,	// (0x0003b1d2) cell_ai5_widget_list_pane

0xe6d4,	// (0x0003b1da) cell_ai5_widget_lrg_icon_pane

0xeca9,	// (0x0003b7af) tmo_note_info_pane_t1_ParamLimits

0xecbe,	// (0x0003b7c4) tmo_note_info_pane_t2_ParamLimits

0xecd3,	// (0x0003b7d9) tmo_note_info_pane_t3_ParamLimits

0xece8,	// (0x0003b7ee) tmo_note_info_pane_t4_ParamLimits

0xecfa,	// (0x0003b800) tmo_note_info_pane_t5_ParamLimits

0xfeab,	// (0x0003c9b1) tmo_note_info_pane_t_ParamLimits

0xee18,	// (0x0003b91e) settings_container_pane_ParamLimits

0xefe9,	// (0x0003baef) indicator_popup_pane_cp5

0xefe9,	// (0x0003baef) indicator_popup_pane_cp6

0xb529,	// (0x0003802f) list_set_graphic_pane_copy1_ParamLimits

0x3072,	// (0x0002fb78) bg_popup_window_pane_cp23

0xf07e,	// (0x0003bb84) popup_tmo_big_image_note_window_g1

0xf088,	// (0x0003bb8e) popup_tmo_big_image_note_window_t1

0xf098,	// (0x0003bb9e) popup_tmo_big_image_note_window_t2

0xf0a8,	// (0x0003bbae) popup_tmo_big_image_note_window_t3

0x0002,

0xfec4,	// (0x0003c9ca) popup_tmo_big_image_note_window_t

0xc01c,	// (0x00038b22) cell_ai5_widget_lrg_icon_pane_g1

0xf0b8,	// (0x0003bbbe) cell_ai5_widget_lrg_icon_pane_t1

0xf0c6,	// (0x0003bbcc) cell_ai5_widget_list_row_pane_ParamLimits

0xf0c6,	// (0x0003bbcc) cell_ai5_widget_list_row_pane

0xf0dd,	// (0x0003bbe3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0dd,	// (0x0003bbe3) cell_ai5_widget_list_row_pane_g1

0xf0ea,	// (0x0003bbf0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ea,	// (0x0003bbf0) cell_ai5_widget_list_row_pane_t1

0xf115,	// (0x0003bc1b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf115,	// (0x0003bc1b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecb,	// (0x0003c9d1) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecb,	// (0x0003c9d1) cell_ai5_widget_list_row_pane_t

0x4640,	// (0x00031146) main_fep_vtchi_ss_pane

0xf165,	// (0x0003bc6b) popup_fep_char_pre_window

0xf16d,	// (0x0003bc73) popup_fep_ituss_window

0xf19f,	// (0x0003bca5) popup_fep_vkbss_window

0x94b3,	// (0x00035fb9) grid_vkbss_keypad_pane_ParamLimits

0x94b3,	// (0x00035fb9) grid_vkbss_keypad_pane

0xf1e5,	// (0x0003bceb) ituss_keypad_pane

0x7736,	// (0x0003423c) aid_vkbss_key_offset_ParamLimits

0x7736,	// (0x0003423c) aid_vkbss_key_offset

0x7742,	// (0x00034248) cell_vkbss_key_pane_ParamLimits

0x7742,	// (0x00034248) cell_vkbss_key_pane

0xf1f1,	// (0x0003bcf7) bg_cell_vkbss_key_g1_ParamLimits

0xf1f1,	// (0x0003bcf7) bg_cell_vkbss_key_g1

0xf1fd,	// (0x0003bd03) cell_vkbss_key_3p_pane_ParamLimits

0xf1fd,	// (0x0003bd03) cell_vkbss_key_3p_pane

0xf233,	// (0x0003bd39) cell_vkbss_key_g1_ParamLimits

0xf233,	// (0x0003bd39) cell_vkbss_key_g1

0xf269,	// (0x0003bd6f) cell_vkbss_key_t1_ParamLimits

0xf269,	// (0x0003bd6f) cell_vkbss_key_t1

0x77a0,	// (0x000342a6) cell_ituss_key_pane_ParamLimits

0x77a0,	// (0x000342a6) cell_ituss_key_pane

0xf2c5,	// (0x0003bdcb) bg_cell_ituss_key_g1_ParamLimits

0xf2c5,	// (0x0003bdcb) bg_cell_ituss_key_g1

0xf2d1,	// (0x0003bdd7) cell_ituss_key_pane_g1_ParamLimits

0xf2d1,	// (0x0003bdd7) cell_ituss_key_pane_g1

0x77b1,	// (0x000342b7) cell_ituss_key_pane_g2_ParamLimits

0x77b1,	// (0x000342b7) cell_ituss_key_pane_g2

0x0005,

0xfed2,	// (0x0003c9d8) cell_ituss_key_pane_g_ParamLimits

0xfed2,	// (0x0003c9d8) cell_ituss_key_pane_g

0x7835,	// (0x0003433b) cell_ituss_key_t1_ParamLimits

0x7835,	// (0x0003433b) cell_ituss_key_t1

0x786f,	// (0x00034375) cell_ituss_key_t2_ParamLimits

0x786f,	// (0x00034375) cell_ituss_key_t2

0x78a1,	// (0x000343a7) cell_ituss_key_t3_ParamLimits

0x78a1,	// (0x000343a7) cell_ituss_key_t3

0x78d2,	// (0x000343d8) cell_ituss_key_t4_ParamLimits

0x78d2,	// (0x000343d8) cell_ituss_key_t4

0x0005,

0xfedf,	// (0x0003c9e5) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0003c9e5) cell_ituss_key_t

0xf2f7,	// (0x0003bdfd) cell_vkbss_key_3p_pane_g1

0xf2ff,	// (0x0003be05) cell_vkbss_key_3p_pane_g2

0xf307,	// (0x0003be0d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0003c9f2) cell_vkbss_key_3p_pane_g

0x918f,	// (0x00035c95) bg_popup_fep_char_preview_window_cp02

0xf30f,	// (0x0003be15) popup_fep_char_pre_window_t1

0xe655,	// (0x0003b15b) main_ai5_sk_pane

0xed74,	// (0x0003b87a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed80,	// (0x0003b886) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6ba,	// (0x000391c0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed95,	// (0x0003b89b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb6,	// (0x0003c9bc) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda1,	// (0x0003b8a7) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x82e5,	// (0x00034deb) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31d,	// (0x0003be23) main_ai5_sk_pane_g1

0x9ea5,	// (0x000369ab) popup_query_code_window_g1

0xf186,	// (0x0003bc8c) popup_fep_vkb_icf_pane

0xf1b9,	// (0x0003bcbf) popup_fep_vtchi_icf_pane

0xf326,	// (0x0003be2c) bg_icf_pane

0xf326,	// (0x0003be2c) list_vkb_icf_pane

0xf332,	// (0x0003be38) bg_icf_pane_cp01

0xf345,	// (0x0003be4b) vtchi_icf_list_pane

0xf3a5,	// (0x0003beab) list_vkb_icf_pane_t1_ParamLimits

0xf3a5,	// (0x0003beab) list_vkb_icf_pane_t1

0xf3c3,	// (0x0003bec9) vtchi_icf_list_pane_t1_ParamLimits

0xf3c3,	// (0x0003bec9) vtchi_icf_list_pane_t1

0xf16d,	// (0x0003bc73) popup_fep_ituss_window_ParamLimits

0xf1b9,	// (0x0003bcbf) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e5,	// (0x0003bceb) ituss_keypad_pane_ParamLimits

0x772c,	// (0x00034232) ituss_sks_pane

0xf326,	// (0x0003be2c) bg_icf_pane_ParamLimits

0xf13d,	// (0x0003bc43) icf_edit_indi_pane_ParamLimits

0xf13d,	// (0x0003bc43) icf_edit_indi_pane

0xf326,	// (0x0003be2c) list_vkb_icf_pane_ParamLimits

0xf332,	// (0x0003be38) bg_icf_pane_cp01_ParamLimits

0xf158,	// (0x0003bc5e) icf_edit_indi_pane_cp01_ParamLimits

0xf158,	// (0x0003bc5e) icf_edit_indi_pane_cp01

0xf345,	// (0x0003be4b) vtchi_query_pane

0xe4c9,	// (0x0003afcf) icf_edit_indi_pane_g1_ParamLimits

0xe4c9,	// (0x0003afcf) icf_edit_indi_pane_g1

0xf438,	// (0x0003bf3e) icf_edit_indi_pane_g2_ParamLimits

0xf438,	// (0x0003bf3e) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x0003ca1d) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x0003ca1d) icf_edit_indi_pane_g

0xf44c,	// (0x0003bf52) icf_edit_indi_pane_t1

0xf3e1,	// (0x0003bee7) bg_input_focus_pane_cp042

0x8214,	// (0x00034d1a) vtchi_button_pane

0xf3ea,	// (0x0003bef0) vtchi_query_pane_t1

0xf3f8,	// (0x0003befe) vtchi_query_pane_t2

0xf406,	// (0x0003bf0c) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x0003ca0c) vtchi_query_pane_t

0x4640,	// (0x00031146) bg_button_pane_cp13

0xf414,	// (0x0003bf1a) vtchi_button_pane_g1

0x7953,	// (0x00034459) ituss_sks_pane_g1

0x795e,	// (0x00034464) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x0003ca13) ituss_sks_pane_g

0xf41c,	// (0x0003bf22) ituss_sks_pane_t1

0xf42a,	// (0x0003bf30) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x0003ca18) ituss_sks_pane_t

0xbaa5,	// (0x000385ab) indicator_nsta_pane_cp_g1

0xbaae,	// (0x000385b4) indicator_nsta_pane_cp_g2

0xbab6,	// (0x000385bc) indicator_nsta_pane_cp_g3

0xbabe,	// (0x000385c4) indicator_nsta_pane_cp_g4

0xbaae,	// (0x000385b4) indicator_nsta_pane_cp_g5

0xbab6,	// (0x000385bc) indicator_nsta_pane_cp_g6

0x0005,

0xfa88,	// (0x0003c58e) indicator_nsta_pane_cp_g

0xe225,	// (0x0003ad2b) cell_graphic2_pane_t2_ParamLimits

0xe225,	// (0x0003ad2b) cell_graphic2_pane_t2

0x0001,

0xfda1,	// (0x0003c8a7) cell_graphic2_pane_t_ParamLimits

0xfda1,	// (0x0003c8a7) cell_graphic2_pane_t

0xe251,	// (0x0003ad57) cell_graphic2_control_pane_t1

0x8c38,	// (0x0003573e) signal_pane_g3_ParamLimits

0x8c38,	// (0x0003573e) signal_pane_g3

0x8c4a,	// (0x00035750) signal_pane_g4_ParamLimits

0x8c4a,	// (0x00035750) signal_pane_g4

0xf127,	// (0x0003bc2d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf127,	// (0x0003bc2d) cell_ai5_widget_list_row_pane_t3

0xf2e5,	// (0x0003bdeb) cell_ituss_key_pane_t1_ParamLimits

0xf2e5,	// (0x0003bdeb) cell_ituss_key_pane_t1

0x9ae2,	// (0x000365e8) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ae2,	// (0x000365e8) form_field_data_wide_pane_vc_t2

0x9af6,	// (0x000365fc) form_field_data_wide_pane_vc_t3_ParamLimits

0x9af6,	// (0x000365fc) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e2,	// (0x0003c2e8) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e2,	// (0x0003c2e8) form_field_data_wide_pane_vc_t

0xb743,	// (0x00038249) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb743,	// (0x00038249) form_field_slider_wide_pane_vc_t3

0xb82d,	// (0x00038333) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb82d,	// (0x00038333) form_field_popup_wide_pane_vc_t2

0xb844,	// (0x0003834a) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb844,	// (0x0003834a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa77,	// (0x0003c57d) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa77,	// (0x0003c57d) form_field_popup_wide_pane_vc_t

0x74c5,	// (0x00033fcb) aid_fshwr2_btn_pane_ParamLimits

0x74d5,	// (0x00033fdb) aid_fshwr2_syb_pane_ParamLimits

0x74e9,	// (0x00033fef) aid_fshwr2_txt_pane_ParamLimits

0x6cf4,	// (0x000337fa) fshwr2_bg_pane_ParamLimits

0x74f9,	// (0x00033fff) fshwr2_func_candi_pane_ParamLimits

0x751d,	// (0x00034023) fshwr2_hwr_syb_pane_ParamLimits

0x7537,	// (0x0003403d) fshwr2_icf_pane_ParamLimits

0x6545,	// (0x0003304b) list_double_graphic_pane_vc_g4_ParamLimits

0x6545,	// (0x0003304b) list_double_graphic_pane_vc_g4

0x77d1,	// (0x000342d7) cell_ituss_key_pane_g3_ParamLimits

0x77d1,	// (0x000342d7) cell_ituss_key_pane_g3

0x7903,	// (0x00034409) cell_ituss_key_t5_ParamLimits

0x7903,	// (0x00034409) cell_ituss_key_t5

0xf19f,	// (0x0003bca5) popup_fep_vkbss_window_ParamLimits

0xe65f,	// (0x0003b165) aid_cell_ai5_quarter

0xf44c,	// (0x0003bf52) icf_edit_indi_pane_t1_ParamLimits

0x7d89,	// (0x0003488f) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7d89,	// (0x0003488f) aid_tch_indicator_popup_pane_cp2

0x7d9c,	// (0x000348a2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7d9c,	// (0x000348a2) aid_tch_query_popup_data_pane_cp2

0x9e4d,	// (0x00036953) aid_tch_query_popup_pane_ParamLimits

0x9e4d,	// (0x00036953) aid_tch_query_popup_pane

0x9e4d,	// (0x00036953) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e4d,	// (0x00036953) aid_tch_query_popup_data_pane_cp1

0x94b3,	// (0x00035fb9) cell_fshwr2_syb_bg_pane_ParamLimits

0x7637,	// (0x0003413d) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x764b,	// (0x00034151) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf186,	// (0x0003bc8c) popup_fep_vkb_icf_pane_ParamLimits

0x7305,	// (0x00033e0b) bg_popup_fep_char_preview_window_g10

0xe794,	// (0x0003b29a) cell_ai5_widget_pane_g11_ParamLimits

0xe794,	// (0x0003b29a) cell_ai5_widget_pane_g11

0xe7a0,	// (0x0003b2a6) cell_ai5_widget_pane_g12_ParamLimits

0xe7a0,	// (0x0003b2a6) cell_ai5_widget_pane_g12

0xe7ac,	// (0x0003b2b2) cell_ai5_widget_pane_g13_ParamLimits

0xe7ac,	// (0x0003b2b2) cell_ai5_widget_pane_g13

0xe8db,	// (0x0003b3e1) cell_ai5_widget_pane_t11_ParamLimits

0xe8db,	// (0x0003b3e1) cell_ai5_widget_pane_t11

0xe8ed,	// (0x0003b3f3) cell_ai5_widget_pane_t12_ParamLimits

0xe8ed,	// (0x0003b3f3) cell_ai5_widget_pane_t12

0x77dd,	// (0x000342e3) cell_ituss_key_pane_g4_ParamLimits

0x77dd,	// (0x000342e3) cell_ituss_key_pane_g4

0x77f9,	// (0x000342ff) cell_ituss_key_pane_g5_ParamLimits

0x77f9,	// (0x000342ff) cell_ituss_key_pane_g5

0x7815,	// (0x0003431b) cell_ituss_key_pane_g6_ParamLimits

0x7815,	// (0x0003431b) cell_ituss_key_pane_g6

0x99dd,	// (0x000364e3) bg_icf_pane_g1

0xf34d,	// (0x0003be53) bg_icf_pane_g2

0xf359,	// (0x0003be5f) bg_icf_pane_g3

0xf363,	// (0x0003be69) bg_icf_pane_g4

0xf36f,	// (0x0003be75) bg_icf_pane_g5

0xf379,	// (0x0003be7f) bg_icf_pane_g6

0xf385,	// (0x0003be8b) bg_icf_pane_g7

0xf38f,	// (0x0003be95) bg_icf_pane_g8

0xf39b,	// (0x0003bea1) bg_icf_pane_g9

0x0008,

0xfef3,	// (0x0003c9f9) bg_icf_pane_g

0xf1d2,	// (0x0003bcd8) popup_hyb_candi_window_ParamLimits

0xf1d2,	// (0x0003bcd8) popup_hyb_candi_window

0x9a51,	// (0x00036557) bg_popup_sub_pane_cp01_ParamLimits

0x9a51,	// (0x00036557) bg_popup_sub_pane_cp01

0xf465,	// (0x0003bf6b) entry_hyb_candi_pane_ParamLimits

0xf465,	// (0x0003bf6b) entry_hyb_candi_pane

0xf474,	// (0x0003bf7a) grid_hyb_candi_pane_ParamLimits

0xf474,	// (0x0003bf7a) grid_hyb_candi_pane

0xf489,	// (0x0003bf8f) grid_hyb_phrase_pane_ParamLimits

0xf489,	// (0x0003bf8f) grid_hyb_phrase_pane

0xf498,	// (0x0003bf9e) cell_hyb_candi_pane_ParamLimits

0xf498,	// (0x0003bf9e) cell_hyb_candi_pane

0xf4bb,	// (0x0003bfc1) cell_hyb_candi_scroll_pane

0x8b5e,	// (0x00035664) cell_hyb_candi_pane_g1

0xf4c4,	// (0x0003bfca) cell_hyb_candi_pane_t1

0xf4d2,	// (0x0003bfd8) cell_hyb_phrase_pane

0x8b5e,	// (0x00035664) cell_hyb_phrase_pane_g1

0xf4db,	// (0x0003bfe1) cell_hyb_phrase_pane_t1

0xf4e9,	// (0x0003bfef) entry_hyb_candi_pane_t1

0x918f,	// (0x00035c95) input_focus_pane_cp06

0xf4f7,	// (0x0003bffd) cell_hyb_candi_scroll_pane_g1

0xf4ff,	// (0x0003c005) cell_hyb_candi_scroll_pane_g1_aid

0xf507,	// (0x0003c00d) cell_hyb_candi_scroll_pane_g2

0xf50f,	// (0x0003c015) cell_hyb_candi_scroll_pane_g2_aid

0xf517,	// (0x0003c01d) cell_hyb_candi_scroll_pane_g3

0xf51f,	// (0x0003c025) cell_hyb_candi_scroll_pane_g4

0xe58a,	// (0x0003b090) ai5_page_g1

0x7915,	// (0x0003441b) cell_ituss_key_t6_ParamLimits

0x7915,	// (0x0003441b) cell_ituss_key_t6

0x770b,	// (0x00034211) icf_edit_indi_pane_cp02_ParamLimits

0x770b,	// (0x00034211) icf_edit_indi_pane_cp02

0x771f,	// (0x00034225) icf_edit_indi_pane_cp03_ParamLimits

0x771f,	// (0x00034225) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

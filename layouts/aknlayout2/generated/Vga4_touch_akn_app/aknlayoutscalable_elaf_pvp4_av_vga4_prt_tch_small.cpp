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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001e4e9 };

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
0x5d45,	// (0x0002422e) Screen

0x5d51,	// (0x0002423a) application_window_ParamLimits

0x5d51,	// (0x0002423a) application_window

0x14be,	// (0x0001f9a7) screen_g1

0x5dad,	// (0x00024296) area_bottom_pane_ParamLimits

0x5dad,	// (0x00024296) area_bottom_pane

0x5e6d,	// (0x00024356) area_top_pane_ParamLimits

0x5e6d,	// (0x00024356) area_top_pane

0x5f01,	// (0x000243ea) main_pane_ParamLimits

0x5f01,	// (0x000243ea) main_pane

0x14c8,	// (0x0001f9b1) misc_graphics

0x952b,	// (0x00027a14) battery_pane_ParamLimits

0x952b,	// (0x00027a14) battery_pane

0xa1f3,	// (0x000286dc) bg_status_flat_pane_g8

0xa1fb,	// (0x000286e4) bg_status_flat_pane_g9

0x95f3,	// (0x00027adc) context_pane_ParamLimits

0x95f3,	// (0x00027adc) context_pane

0x9717,	// (0x00027c00) navi_pane_ParamLimits

0x9717,	// (0x00027c00) navi_pane

0x97a7,	// (0x00027c90) signal_pane_ParamLimits

0x97a7,	// (0x00027c90) signal_pane

0x0008,

0xf854,	// (0x0002dd3d) bg_status_flat_pane_g

0x9814,	// (0x00027cfd) status_pane_g1_ParamLimits

0x9814,	// (0x00027cfd) status_pane_g1

0x9820,	// (0x00027d09) status_pane_g2_ParamLimits

0x9820,	// (0x00027d09) status_pane_g2

0x982c,	// (0x00027d15) status_pane_g3_ParamLimits

0x982c,	// (0x00027d15) status_pane_g3

0x0004,

0xf77b,	// (0x0002dc64) status_pane_g_ParamLimits

0xf77b,	// (0x0002dc64) status_pane_g

0x9860,	// (0x00027d49) title_pane_ParamLimits

0x9860,	// (0x00027d49) title_pane

0x989f,	// (0x00027d88) uni_indicator_pane_ParamLimits

0x989f,	// (0x00027d88) uni_indicator_pane

0x945d,	// (0x00027946) bg_list_pane_ParamLimits

0x945d,	// (0x00027946) bg_list_pane

0x53a2,	// (0x0002388b) find_pane

0x947d,	// (0x00027966) listscroll_app_pane_ParamLimits

0x947d,	// (0x00027966) listscroll_app_pane

0x9489,	// (0x00027972) listscroll_form_pane

0x53aa,	// (0x00023893) listscroll_gen_pane_ParamLimits

0x53aa,	// (0x00023893) listscroll_gen_pane

0x7319,	// (0x00025802) listscroll_set_pane

0x6648,	// (0x00024b31) main_idle_act_pane

0x9156,	// (0x0002763f) main_idle_trad_pane

0x9156,	// (0x0002763f) main_list_empty_pane

0x947d,	// (0x00027966) main_midp_pane

0x94a3,	// (0x0002798c) main_pane_g1_ParamLimits

0x94a3,	// (0x0002798c) main_pane_g1

0x7321,	// (0x0002580a) popup_ai_message_window_ParamLimits

0x7321,	// (0x0002580a) popup_ai_message_window

0x73d5,	// (0x000258be) popup_fep_china_uni_window_ParamLimits

0x73d5,	// (0x000258be) popup_fep_china_uni_window

0x7435,	// (0x0002591e) popup_fep_japan_candidate_window_ParamLimits

0x7435,	// (0x0002591e) popup_fep_japan_candidate_window

0x745f,	// (0x00025948) popup_fep_japan_predictive_window_ParamLimits

0x745f,	// (0x00025948) popup_fep_japan_predictive_window

0x7495,	// (0x0002597e) popup_find_window

0x74a2,	// (0x0002598b) popup_grid_graphic_window_ParamLimits

0x74a2,	// (0x0002598b) popup_grid_graphic_window

0x74d2,	// (0x000259bb) popup_large_graphic_colour_window

0x74f8,	// (0x000259e1) popup_menu_window_ParamLimits

0x74f8,	// (0x000259e1) popup_menu_window

0x76c2,	// (0x00025bab) popup_note_image_window

0x76ac,	// (0x00025b95) popup_note_wait_window_ParamLimits

0x76ac,	// (0x00025b95) popup_note_wait_window

0x76ac,	// (0x00025b95) popup_note_window_ParamLimits

0x76ac,	// (0x00025b95) popup_note_window

0x7728,	// (0x00025c11) popup_query_code_window_ParamLimits

0x7728,	// (0x00025c11) popup_query_code_window

0x773e,	// (0x00025c27) popup_query_data_code_window_ParamLimits

0x773e,	// (0x00025c27) popup_query_data_code_window

0x7761,	// (0x00025c4a) popup_query_data_window_ParamLimits

0x7761,	// (0x00025c4a) popup_query_data_window

0x7783,	// (0x00025c6c) popup_query_sat_info_window_ParamLimits

0x7783,	// (0x00025c6c) popup_query_sat_info_window

0x77c2,	// (0x00025cab) popup_snote_single_graphic_window_ParamLimits

0x77c2,	// (0x00025cab) popup_snote_single_graphic_window

0x77c2,	// (0x00025cab) popup_snote_single_text_window_ParamLimits

0x77c2,	// (0x00025cab) popup_snote_single_text_window

0x77d9,	// (0x00025cc2) popup_sub_window_general

0x791f,	// (0x00025e08) popup_window_general_ParamLimits

0x791f,	// (0x00025e08) popup_window_general

0x94b1,	// (0x0002799a) power_save_pane

0x719b,	// (0x00025684) control_pane_g1_ParamLimits

0x719b,	// (0x00025684) control_pane_g1

0x71c4,	// (0x000256ad) control_pane_g2_ParamLimits

0x71c4,	// (0x000256ad) control_pane_g2

0x9420,	// (0x00027909) control_pane_g3_ParamLimits

0x9420,	// (0x00027909) control_pane_g3

0x0007,

0xf763,	// (0x0002dc4c) control_pane_g_ParamLimits

0xf763,	// (0x0002dc4c) control_pane_g

0x7210,	// (0x000256f9) control_pane_t1_ParamLimits

0x7210,	// (0x000256f9) control_pane_t1

0x726a,	// (0x00025753) control_pane_t2_ParamLimits

0x726a,	// (0x00025753) control_pane_t2

0x0002,

0xf774,	// (0x0002dc5d) control_pane_t_ParamLimits

0xf774,	// (0x0002dc5d) control_pane_t

0x9345,	// (0x0002782e) navi_navi_volume_pane_cp1

0x934d,	// (0x00027836) status_small_icon_pane

0x9355,	// (0x0002783e) status_small_pane_g1_ParamLimits

0x9355,	// (0x0002783e) status_small_pane_g1

0x9389,	// (0x00027872) status_small_pane_g2_ParamLimits

0x9389,	// (0x00027872) status_small_pane_g2

0x9395,	// (0x0002787e) status_small_pane_g3_ParamLimits

0x9395,	// (0x0002787e) status_small_pane_g3

0x93a1,	// (0x0002788a) status_small_pane_g4_ParamLimits

0x93a1,	// (0x0002788a) status_small_pane_g4

0x93ad,	// (0x00027896) status_small_pane_g5_ParamLimits

0x93ad,	// (0x00027896) status_small_pane_g5

0x93bb,	// (0x000278a4) status_small_pane_g6_ParamLimits

0x93bb,	// (0x000278a4) status_small_pane_g6

0x0007,

0xf752,	// (0x0002dc3b) status_small_pane_g_ParamLimits

0xf752,	// (0x0002dc3b) status_small_pane_g

0x93ea,	// (0x000278d3) status_small_pane_t1

0x940c,	// (0x000278f5) status_small_wait_pane_ParamLimits

0x940c,	// (0x000278f5) status_small_wait_pane

0x6d90,	// (0x00025279) aid_levels_signal_ParamLimits

0x6d90,	// (0x00025279) aid_levels_signal

0x6d9f,	// (0x00025288) signal_pane_g1_ParamLimits

0x6d9f,	// (0x00025288) signal_pane_g1

0x6db4,	// (0x0002529d) signal_pane_g2_ParamLimits

0x6db4,	// (0x0002529d) signal_pane_g2

0x0003,

0xf6e3,	// (0x0002dbcc) signal_pane_g_ParamLimits

0xf6e3,	// (0x0002dbcc) signal_pane_g

0x6de5,	// (0x000252ce) context_pane_g1

0x6160,	// (0x00024649) title_pane_g1

0x6192,	// (0x0002467b) title_pane_t1

0x14de,	// (0x0001f9c7) title_pane_t2

0x1504,	// (0x0001f9ed) title_pane_t3

0x0002,

0xf532,	// (0x0002da1b) title_pane_t

0x98b7,	// (0x00027da0) aid_levels_battery_ParamLimits

0x98b7,	// (0x00027da0) aid_levels_battery

0x98c8,	// (0x00027db1) battery_pane_g1_ParamLimits

0x98c8,	// (0x00027db1) battery_pane_g1

0x98de,	// (0x00027dc7) battery_pane_g2_ParamLimits

0x98de,	// (0x00027dc7) battery_pane_g2

0x0001,

0xf786,	// (0x0002dc6f) battery_pane_g_ParamLimits

0xf786,	// (0x0002dc6f) battery_pane_g

0xab3d,	// (0x00029026) uni_indicator_pane_g1

0xab53,	// (0x0002903c) uni_indicator_pane_g2

0xab69,	// (0x00029052) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0002dde5) uni_indicator_pane_g

0x8fc4,	// (0x000274ad) navi_icon_pane_ParamLimits

0x8fc4,	// (0x000274ad) navi_icon_pane

0x8f00,	// (0x000273e9) navi_midp_pane

0x8fe0,	// (0x000274c9) navi_navi_pane

0x8fea,	// (0x000274d3) navi_text_pane_ParamLimits

0x8fea,	// (0x000274d3) navi_text_pane

0x14be,	// (0x0001f9a7) status_small_wait_pane_g1

0x2ebf,	// (0x000213a8) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0002dde0) status_small_wait_pane_g

0xa850,	// (0x00028d39) navi_navi_icon_text_pane

0xa858,	// (0x00028d41) navi_navi_pane_g1_ParamLimits

0xa858,	// (0x00028d41) navi_navi_pane_g1

0xa86a,	// (0x00028d53) navi_navi_pane_g2_ParamLimits

0xa86a,	// (0x00028d53) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0002ddae) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0002ddae) navi_navi_pane_g

0xa87c,	// (0x00028d65) navi_navi_tabs_pane

0xa885,	// (0x00028d6e) navi_navi_text_pane

0xa850,	// (0x00028d39) navi_navi_volume_pane

0xa82c,	// (0x00028d15) navi_text_pane_t1

0xa820,	// (0x00028d09) navi_icon_pane_g1

0xa773,	// (0x00028c5c) navi_navi_text_pane_t1

0x7bc8,	// (0x000260b1) navi_navi_volume_pane_g1

0x7bd0,	// (0x000260b9) volume_small_pane

0xa6d9,	// (0x00028bc2) navi_navi_icon_text_pane_g1

0xa6e1,	// (0x00028bca) navi_navi_icon_text_pane_t1

0x8fe0,	// (0x000274c9) navi_tabs_2_long_pane

0x8fe0,	// (0x000274c9) navi_tabs_2_pane

0x8fe0,	// (0x000274c9) navi_tabs_3_long_pane

0x8fe0,	// (0x000274c9) navi_tabs_3_pane

0x8fe0,	// (0x000274c9) navi_tabs_4_pane

0x7ba8,	// (0x00026091) tabs_2_active_pane_ParamLimits

0x7ba8,	// (0x00026091) tabs_2_active_pane

0x7bb8,	// (0x000260a1) tabs_2_passive_pane_ParamLimits

0x7bb8,	// (0x000260a1) tabs_2_passive_pane

0x7b76,	// (0x0002605f) tabs_3_active_pane_ParamLimits

0x7b76,	// (0x0002605f) tabs_3_active_pane

0x7b86,	// (0x0002606f) tabs_3_passive_pane_ParamLimits

0x7b86,	// (0x0002606f) tabs_3_passive_pane

0x7b97,	// (0x00026080) tabs_3_passive_pane_cp_ParamLimits

0x7b97,	// (0x00026080) tabs_3_passive_pane_cp

0x7b2a,	// (0x00026013) tabs_4_active_pane_ParamLimits

0x7b2a,	// (0x00026013) tabs_4_active_pane

0x7b3d,	// (0x00026026) tabs_4_passive_pane_ParamLimits

0x7b3d,	// (0x00026026) tabs_4_passive_pane

0x7b4e,	// (0x00026037) tabs_4_passive_pane_cp_ParamLimits

0x7b4e,	// (0x00026037) tabs_4_passive_pane_cp

0x7b5f,	// (0x00026048) tabs_4_passive_pane_cp2_ParamLimits

0x7b5f,	// (0x00026048) tabs_4_passive_pane_cp2

0x7b06,	// (0x00025fef) tabs_2_long_active_pane_ParamLimits

0x7b06,	// (0x00025fef) tabs_2_long_active_pane

0x7b18,	// (0x00026001) tabs_2_long_passive_pane_ParamLimits

0x7b18,	// (0x00026001) tabs_2_long_passive_pane

0x7ac7,	// (0x00025fb0) tabs_3_long_active_pane_ParamLimits

0x7ac7,	// (0x00025fb0) tabs_3_long_active_pane

0x7ada,	// (0x00025fc3) tabs_3_long_passive_pane_ParamLimits

0x7ada,	// (0x00025fc3) tabs_3_long_passive_pane

0x7af3,	// (0x00025fdc) tabs_3_long_passive_pane_cp_ParamLimits

0x7af3,	// (0x00025fdc) tabs_3_long_passive_pane_cp

0x7a6d,	// (0x00025f56) volume_small_pane_g1

0x7a76,	// (0x00025f5f) volume_small_pane_g2

0x7a7f,	// (0x00025f68) volume_small_pane_g3

0x7a88,	// (0x00025f71) volume_small_pane_g4

0x7a91,	// (0x00025f7a) volume_small_pane_g5

0x7a9a,	// (0x00025f83) volume_small_pane_g6

0x7aa3,	// (0x00025f8c) volume_small_pane_g7

0x7aac,	// (0x00025f95) volume_small_pane_g8

0x7ab5,	// (0x00025f9e) volume_small_pane_g9

0x7abe,	// (0x00025fa7) volume_small_pane_g10

0x0009,

0xf891,	// (0x0002dd7a) volume_small_pane_g

0x1524,	// (0x0001fa0d) bg_active_tab_pane_cp2_ParamLimits

0x1524,	// (0x0001fa0d) bg_active_tab_pane_cp2

0x61fa,	// (0x000246e3) tabs_3_active_pane_g1

0x6202,	// (0x000246eb) tabs_3_active_pane_t1

0x1524,	// (0x0001fa0d) bg_passive_tab_pane_cp2_ParamLimits

0x1524,	// (0x0001fa0d) bg_passive_tab_pane_cp2

0x61fa,	// (0x000246e3) tabs_3_passive_pane_g1

0x6202,	// (0x000246eb) tabs_3_passive_pane_t1

0x1524,	// (0x0001fa0d) bg_active_tab_pane_cp3_ParamLimits

0x1524,	// (0x0001fa0d) bg_active_tab_pane_cp3

0x6214,	// (0x000246fd) tabs_4_active_pane_g1

0x621c,	// (0x00024705) tabs_4_active_pane_t1

0x1524,	// (0x0001fa0d) bg_passive_tab_pane_cp3_ParamLimits

0x1524,	// (0x0001fa0d) bg_passive_tab_pane_cp3

0x6214,	// (0x000246fd) tabs_4_1_passive_pane_g1

0x621c,	// (0x00024705) tabs_4_1_passive_pane_t1

0x947d,	// (0x00027966) list_highlight_pane_cp2

0xadb6,	// (0x0002929f) list_set_pane_ParamLimits

0xadb6,	// (0x0002929f) list_set_pane

0xae78,	// (0x00029361) main_pane_set_t1_ParamLimits

0xae78,	// (0x00029361) main_pane_set_t1

0xae98,	// (0x00029381) main_pane_set_t2_ParamLimits

0xae98,	// (0x00029381) main_pane_set_t2

0xaeac,	// (0x00029395) main_pane_set_t3_ParamLimits

0xaeac,	// (0x00029395) main_pane_set_t3

0xaec0,	// (0x000293a9) main_pane_set_t4_ParamLimits

0xaec0,	// (0x000293a9) main_pane_set_t4

0x0003,

0xf961,	// (0x0002de4a) main_pane_set_t_ParamLimits

0xf961,	// (0x0002de4a) main_pane_set_t

0xaed4,	// (0x000293bd) setting_code_pane

0xaede,	// (0x000293c7) setting_slider_graphic_pane

0xaede,	// (0x000293c7) setting_slider_pane

0xaede,	// (0x000293c7) setting_text_pane

0xaede,	// (0x000293c7) setting_volume_pane

0x622e,	// (0x00024717) volume_set_pane

0x1524,	// (0x0001fa0d) bg_set_opt_pane_cp

0x6238,	// (0x00024721) setting_slider_pane_t1

0x6251,	// (0x0002473a) setting_slider_pane_t2

0x626b,	// (0x00024754) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002da22) setting_slider_pane_t

0x6283,	// (0x0002476c) slider_set_pane

0x14c8,	// (0x0001f9b1) bg_set_opt_pane_cp2

0x1532,	// (0x0001fa1b) setting_slider_graphic_pane_g1

0x6299,	// (0x00024782) setting_slider_graphic_pane_t1

0x62a9,	// (0x00024792) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002da29) setting_slider_graphic_pane_t

0x62b9,	// (0x000247a2) slider_set_pane_cp

0x14c8,	// (0x0001f9b1) input_focus_pane_cp1

0xad77,	// (0x00029260) list_set_text_pane

0x14be,	// (0x0001f9a7) setting_text_pane_g1

0x14c8,	// (0x0001f9b1) input_focus_pane_cp2

0x14be,	// (0x0001f9a7) setting_code_pane_g1

0x153b,	// (0x0001fa24) setting_code_pane_t1

0x4bd9,	// (0x000230c2) set_text_pane_t1_ParamLimits

0x4bd9,	// (0x000230c2) set_text_pane_t1

0x3342,	// (0x0002182b) set_opt_bg_pane_g1

0x334a,	// (0x00021833) set_opt_bg_pane_g2

0xad4f,	// (0x00029238) set_opt_bg_pane_g3

0x335a,	// (0x00021843) set_opt_bg_pane_g4

0x3362,	// (0x0002184b) set_opt_bg_pane_g5

0x336a,	// (0x00021853) set_opt_bg_pane_g6

0xad59,	// (0x00029242) set_opt_bg_pane_g7

0xad63,	// (0x0002924c) set_opt_bg_pane_g8

0xad6d,	// (0x00029256) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0002de37) set_opt_bg_pane_g

0xad42,	// (0x0002922b) slider_set_pane_g1

0x7c51,	// (0x0002613a) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0002de28) slider_set_pane_g

0x7bd9,	// (0x000260c2) volume_set_pane_g1

0x7be3,	// (0x000260cc) volume_set_pane_g2

0x7bed,	// (0x000260d6) volume_set_pane_g3

0x7bf7,	// (0x000260e0) volume_set_pane_g4

0x7c01,	// (0x000260ea) volume_set_pane_g5

0x7c0b,	// (0x000260f4) volume_set_pane_g6

0x7c15,	// (0x000260fe) volume_set_pane_g7

0x7c1f,	// (0x00026108) volume_set_pane_g8

0x7c29,	// (0x00026112) volume_set_pane_g9

0x7c33,	// (0x0002611c) volume_set_pane_g10

0x0009,

0xf917,	// (0x0002de00) volume_set_pane_g

0x62c1,	// (0x000247aa) indicator_pane_ParamLimits

0x62c1,	// (0x000247aa) indicator_pane

0x62cd,	// (0x000247b6) main_idle_pane_g2_ParamLimits

0x62cd,	// (0x000247b6) main_idle_pane_g2

0x62f5,	// (0x000247de) main_pane_idle_g1_ParamLimits

0x62f5,	// (0x000247de) main_pane_idle_g1

0x1563,	// (0x0001fa4c) popup_clock_digital_analogue_window_ParamLimits

0x1563,	// (0x0001fa4c) popup_clock_digital_analogue_window

0x6303,	// (0x000247ec) soft_indicator_pane_ParamLimits

0x6303,	// (0x000247ec) soft_indicator_pane

0x6311,	// (0x000247fa) wallpaper_pane_ParamLimits

0x6311,	// (0x000247fa) wallpaper_pane

0x14be,	// (0x0001f9a7) wallpaper_pane_g1

0x631d,	// (0x00024806) indicator_pane_g1_ParamLimits

0x631d,	// (0x00024806) indicator_pane_g1

0xb182,	// (0x0002966b) navi_navi_icon_text_pane_srt_g1

0x1591,	// (0x0001fa7a) soft_indicator_pane_t1

0x15ab,	// (0x0001fa94) aid_ps_area_pane

0x6329,	// (0x00024812) aid_ps_clock_pane

0x15bc,	// (0x0001faa5) aid_ps_indicator_pane

0x15c8,	// (0x0001fab1) indicator_ps_pane_ParamLimits

0x15c8,	// (0x0001fab1) indicator_ps_pane

0x15d7,	// (0x0001fac0) power_save_pane_g1_ParamLimits

0x15d7,	// (0x0001fac0) power_save_pane_g1

0x15e3,	// (0x0001facc) power_save_pane_g2_ParamLimits

0x15e3,	// (0x0001facc) power_save_pane_g2

0x5d61,	// (0x0002424a) aid_navinavi_width_pane

0x15ab,	// (0x0001fa94) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002da2e) power_save_pane_g_ParamLimits

0xf545,	// (0x0002da2e) power_save_pane_g

0x15f1,	// (0x0001fada) power_save_pane_t1_ParamLimits

0x15f1,	// (0x0001fada) power_save_pane_t1

0x6329,	// (0x00024812) aid_ps_clock_pane_ParamLimits

0x15bc,	// (0x0001faa5) aid_ps_indicator_pane_ParamLimits

0x1603,	// (0x0001faec) power_save_pane_t4_ParamLimits

0x1603,	// (0x0001faec) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002da33) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002da33) power_save_pane_t

0x162d,	// (0x0001fb16) power_save_t3_ParamLimits

0x162d,	// (0x0001fb16) power_save_t3

0x1618,	// (0x0001fb01) power_save_t2_ParamLimits

0x1618,	// (0x0001fb01) power_save_t2

0x1642,	// (0x0001fb2b) indicator_ps_pane_g1

0x6337,	// (0x00024820) ai_gene_pane_ParamLimits

0x6337,	// (0x00024820) ai_gene_pane

0x6343,	// (0x0002482c) ai_links_pane_ParamLimits

0x6343,	// (0x0002482c) ai_links_pane

0x634f,	// (0x00024838) indicator_pane_cp1_ParamLimits

0x634f,	// (0x00024838) indicator_pane_cp1

0x635b,	// (0x00024844) main_pane_idle_g1_cp_ParamLimits

0x635b,	// (0x00024844) main_pane_idle_g1_cp

0x164b,	// (0x0001fb34) popup_ai_links_title_window

0x6367,	// (0x00024850) soft_indicator_pane_cp1_ParamLimits

0x6367,	// (0x00024850) soft_indicator_pane_cp1

0xab2b,	// (0x00029014) ai_links_pane_g1

0xab34,	// (0x0002901d) grid_ai_links_pane

0xab10,	// (0x00028ff9) ai_gene_pane_1

0xab19,	// (0x00029002) ai_gene_pane_2

0xab22,	// (0x0002900b) list_highlight_pane_cp4

0xaaf0,	// (0x00028fd9) cell_ai_link_pane_ParamLimits

0xaaf0,	// (0x00028fd9) cell_ai_link_pane

0xaae8,	// (0x00028fd1) cell_ai_link_pane_g1

0x2ebf,	// (0x000213a8) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0002dddb) cell_ai_link_pane_g

0x14c8,	// (0x0001f9b1) grid_highlight_cp2

0x14c8,	// (0x0001f9b1) bg_popup_sub_pane_cp1

0x1662,	// (0x0001fb4b) popup_ai_links_title_window_t1

0xaa34,	// (0x00028f1d) ai_gene_pane_1_g1_ParamLimits

0xaa34,	// (0x00028f1d) ai_gene_pane_1_g1

0xaa40,	// (0x00028f29) ai_gene_pane_1_g2_ParamLimits

0xaa40,	// (0x00028f29) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0002ddd1) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0002ddd1) ai_gene_pane_1_g

0xaa4d,	// (0x00028f36) ai_gene_pane_1_t1_ParamLimits

0xaa4d,	// (0x00028f36) ai_gene_pane_1_t1

0xaa81,	// (0x00028f6a) grid_ai_soft_ind_pane

0xaa1f,	// (0x00028f08) ai_gene_pane_2_t1_ParamLimits

0xaa1f,	// (0x00028f08) ai_gene_pane_2_t1

0x6373,	// (0x0002485c) main_pane_empty_t1_ParamLimits

0x6373,	// (0x0002485c) main_pane_empty_t1

0x638b,	// (0x00024874) main_pane_empty_t2_ParamLimits

0x638b,	// (0x00024874) main_pane_empty_t2

0x63a0,	// (0x00024889) main_pane_empty_t3_ParamLimits

0x63a0,	// (0x00024889) main_pane_empty_t3

0x63b2,	// (0x0002489b) main_pane_empty_t4_ParamLimits

0x63b2,	// (0x0002489b) main_pane_empty_t4

0x63c4,	// (0x000248ad) main_pane_empty_t5_ParamLimits

0x63c4,	// (0x000248ad) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002da38) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002da38) main_pane_empty_t

0x6570,	// (0x00024a59) bg_popup_window_pane_ParamLimits

0x6570,	// (0x00024a59) bg_popup_window_pane

0xa781,	// (0x00028c6a) find_popup_pane_cp2_ParamLimits

0xa781,	// (0x00028c6a) find_popup_pane_cp2

0xa78d,	// (0x00028c76) heading_pane_ParamLimits

0xa78d,	// (0x00028c76) heading_pane

0x14c8,	// (0x0001f9b1) bg_popup_sub_pane

0xa6fb,	// (0x00028be4) bg_popup_window_pane_g1_ParamLimits

0xa6fb,	// (0x00028be4) bg_popup_window_pane_g1

0xa707,	// (0x00028bf0) bg_popup_window_pane_g2_ParamLimits

0xa707,	// (0x00028bf0) bg_popup_window_pane_g2

0xa713,	// (0x00028bfc) bg_popup_window_pane_g3_ParamLimits

0xa713,	// (0x00028bfc) bg_popup_window_pane_g3

0xa71f,	// (0x00028c08) bg_popup_window_pane_g4_ParamLimits

0xa71f,	// (0x00028c08) bg_popup_window_pane_g4

0xa72b,	// (0x00028c14) bg_popup_window_pane_g5_ParamLimits

0xa72b,	// (0x00028c14) bg_popup_window_pane_g5

0xa737,	// (0x00028c20) bg_popup_window_pane_g6_ParamLimits

0xa737,	// (0x00028c20) bg_popup_window_pane_g6

0xa743,	// (0x00028c2c) bg_popup_window_pane_g7_ParamLimits

0xa743,	// (0x00028c2c) bg_popup_window_pane_g7

0xa74f,	// (0x00028c38) bg_popup_window_pane_g8_ParamLimits

0xa74f,	// (0x00028c38) bg_popup_window_pane_g8

0xa75b,	// (0x00028c44) bg_popup_window_pane_g9_ParamLimits

0xa75b,	// (0x00028c44) bg_popup_window_pane_g9

0xa767,	// (0x00028c50) bg_popup_window_pane_g10_ParamLimits

0xa767,	// (0x00028c50) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0002dd99) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0002dd99) bg_popup_window_pane_g

0xa690,	// (0x00028b79) bg_popup_heading_pane_ParamLimits

0xa690,	// (0x00028b79) bg_popup_heading_pane

0x7cd9,	// (0x000261c2) tabs_4_passive_pane_cp_srt_ParamLimits

0x7cd9,	// (0x000261c2) tabs_4_passive_pane_cp_srt

0x7ceb,	// (0x000261d4) tabs_4_passive_pane_srt_ParamLimits

0xa6a4,	// (0x00028b8d) heading_pane_g2

0x7ceb,	// (0x000261d4) tabs_4_passive_pane_srt

0x947d,	// (0x00027966) bg_passive_tab_pane_cp3_srt_ParamLimits

0x947d,	// (0x00027966) bg_passive_tab_pane_cp3_srt

0xa6ac,	// (0x00028b95) heading_pane_t1_ParamLimits

0xa6ac,	// (0x00028b95) heading_pane_t1

0xa6c3,	// (0x00028bac) heading_pane_t2_ParamLimits

0xa6c3,	// (0x00028bac) heading_pane_t2

0x0001,

0xf8ab,	// (0x0002dd94) heading_pane_t_ParamLimits

0xf8ab,	// (0x0002dd94) heading_pane_t

0xa1bb,	// (0x000286a4) bg_popup_heading_pane_g1

0xa26a,	// (0x00028753) bg_popup_heading_pane_g2

0xa274,	// (0x0002875d) bg_popup_heading_pane_g3

0xa27e,	// (0x00028767) bg_popup_heading_pane_g4

0xa288,	// (0x00028771) bg_popup_heading_pane_g5

0xa292,	// (0x0002877b) bg_popup_heading_pane_g6

0xa29a,	// (0x00028783) bg_popup_heading_pane_g7

0xa2a2,	// (0x0002878b) bg_popup_heading_pane_g8

0xa2ac,	// (0x00028795) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0002dd50) bg_popup_heading_pane_g

0x99b3,	// (0x00027e9c) bg_popup_sub_pane_g1

0x99bb,	// (0x00027ea4) bg_popup_sub_pane_g2

0x99c3,	// (0x00027eac) bg_popup_sub_pane_g3

0x99cb,	// (0x00027eb4) bg_popup_sub_pane_g4

0x99d3,	// (0x00027ebc) bg_popup_sub_pane_g5

0x99db,	// (0x00027ec4) bg_popup_sub_pane_g6

0x99e3,	// (0x00027ecc) bg_popup_sub_pane_g7

0x99eb,	// (0x00027ed4) bg_popup_sub_pane_g8

0x99f3,	// (0x00027edc) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0002dd2a) bg_popup_sub_pane_g

0x1516,	// (0x0001f9ff) bg_popup_window_pane_cp5_ParamLimits

0x1516,	// (0x0001f9ff) bg_popup_window_pane_cp5

0x167f,	// (0x0001fb68) popup_note_window_g1_ParamLimits

0x167f,	// (0x0001fb68) popup_note_window_g1

0x168b,	// (0x0001fb74) popup_note_window_t1_ParamLimits

0x168b,	// (0x0001fb74) popup_note_window_t1

0x16a1,	// (0x0001fb8a) popup_note_window_t2_ParamLimits

0x16a1,	// (0x0001fb8a) popup_note_window_t2

0x2d37,	// (0x00021220) popup_note_window_t3_ParamLimits

0x2d37,	// (0x00021220) popup_note_window_t3

0x2d4d,	// (0x00021236) popup_note_window_t4_ParamLimits

0x2d4d,	// (0x00021236) popup_note_window_t4

0x2d75,	// (0x0002125e) popup_note_window_t5_ParamLimits

0x2d75,	// (0x0002125e) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002da43) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002da43) popup_note_window_t

0x2dbf,	// (0x000212a8) bg_popup_window_pane_cp6_ParamLimits

0x2dbf,	// (0x000212a8) bg_popup_window_pane_cp6

0xa137,	// (0x00028620) popup_note_image_window_g1_ParamLimits

0xa137,	// (0x00028620) popup_note_image_window_g1

0xa143,	// (0x0002862c) popup_note_image_window_g2_ParamLimits

0xa143,	// (0x0002862c) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0002dd1e) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0002dd1e) popup_note_image_window_g

0xa15c,	// (0x00028645) popup_note_image_window_t1_ParamLimits

0xa15c,	// (0x00028645) popup_note_image_window_t1

0xa175,	// (0x0002865e) popup_note_image_window_t2_ParamLimits

0xa175,	// (0x0002865e) popup_note_image_window_t2

0xa18e,	// (0x00028677) popup_note_image_window_t3_ParamLimits

0xa18e,	// (0x00028677) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0002dd23) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0002dd23) popup_note_image_window_t

0x9ff7,	// (0x000284e0) bg_popup_window_pane_cp7_ParamLimits

0x9ff7,	// (0x000284e0) bg_popup_window_pane_cp7

0xa027,	// (0x00028510) popup_note_wait_window_g1_ParamLimits

0xa027,	// (0x00028510) popup_note_wait_window_g1

0xa033,	// (0x0002851c) popup_note_wait_window_g2_ParamLimits

0xa033,	// (0x0002851c) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0002dd0c) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0002dd0c) popup_note_wait_window_g

0xa04b,	// (0x00028534) popup_note_wait_window_t1_ParamLimits

0xa04b,	// (0x00028534) popup_note_wait_window_t1

0xa072,	// (0x0002855b) popup_note_wait_window_t2_ParamLimits

0xa072,	// (0x0002855b) popup_note_wait_window_t2

0xa090,	// (0x00028579) popup_note_wait_window_t3_ParamLimits

0xa090,	// (0x00028579) popup_note_wait_window_t3

0xa0a3,	// (0x0002858c) popup_note_wait_window_t4_ParamLimits

0xa0a3,	// (0x0002858c) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0002dd13) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0002dd13) popup_note_wait_window_t

0xa0c8,	// (0x000285b1) wait_bar_pane_ParamLimits

0xa0c8,	// (0x000285b1) wait_bar_pane

0x14c8,	// (0x0001f9b1) wait_anim_pane

0x14c8,	// (0x0001f9b1) wait_border_pane

0x14be,	// (0x0001f9a7) wait_anim_pane_g1

0x14be,	// (0x0001f9a7) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0002dbc7) wait_anim_pane_g

0x9f9b,	// (0x00028484) wait_border_pane_g1

0x9fa6,	// (0x0002848f) wait_border_pane_g2

0x9faf,	// (0x00028498) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0002dd05) wait_border_pane_g

0x9e05,	// (0x000282ee) bg_popup_window_pane_cp16_ParamLimits

0x9e05,	// (0x000282ee) bg_popup_window_pane_cp16

0x9f05,	// (0x000283ee) indicator_popup_pane_cp4_ParamLimits

0x9f05,	// (0x000283ee) indicator_popup_pane_cp4

0x9f19,	// (0x00028402) popup_query_data_window_t1_ParamLimits

0x9f19,	// (0x00028402) popup_query_data_window_t1

0x9f2b,	// (0x00028414) popup_query_data_window_t2_ParamLimits

0x9f2b,	// (0x00028414) popup_query_data_window_t2

0x9f44,	// (0x0002842d) popup_query_data_window_t3_ParamLimits

0x9f44,	// (0x0002842d) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0002dcfe) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0002dcfe) popup_query_data_window_t

0x9f5e,	// (0x00028447) query_popup_data_pane_ParamLimits

0x9f5e,	// (0x00028447) query_popup_data_pane

0x9f72,	// (0x0002845b) query_popup_data_pane_cp1_ParamLimits

0x9f72,	// (0x0002845b) query_popup_data_pane_cp1

0x9e05,	// (0x000282ee) bg_popup_window_pane_cp10_ParamLimits

0x9e05,	// (0x000282ee) bg_popup_window_pane_cp10

0x9e37,	// (0x00028320) indicator_popup_pane_ParamLimits

0x9e37,	// (0x00028320) indicator_popup_pane

0x9e59,	// (0x00028342) popup_query_code_window_t1_ParamLimits

0x9e59,	// (0x00028342) popup_query_code_window_t1

0x9e73,	// (0x0002835c) popup_query_code_window_t2_ParamLimits

0x9e73,	// (0x0002835c) popup_query_code_window_t2

0x9ebc,	// (0x000283a5) popup_query_code_window_t3_ParamLimits

0x9ebc,	// (0x000283a5) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0002dcf7) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0002dcf7) popup_query_code_window_t

0x9eeb,	// (0x000283d4) query_popup_pane_ParamLimits

0x9eeb,	// (0x000283d4) query_popup_pane

0x2dbf,	// (0x000212a8) bg_popup_window_pane_cp15_ParamLimits

0x2dbf,	// (0x000212a8) bg_popup_window_pane_cp15

0x2ddf,	// (0x000212c8) indicator_popup_pane_cp1_ParamLimits

0x2ddf,	// (0x000212c8) indicator_popup_pane_cp1

0x2df2,	// (0x000212db) indicator_popup_pane_cp2_ParamLimits

0x2df2,	// (0x000212db) indicator_popup_pane_cp2

0x2e0d,	// (0x000212f6) popup_query_data_code_window_g1_ParamLimits

0x2e0d,	// (0x000212f6) popup_query_data_code_window_g1

0x2e20,	// (0x00021309) popup_query_data_code_window_t1_ParamLimits

0x2e20,	// (0x00021309) popup_query_data_code_window_t1

0x2e32,	// (0x0002131b) popup_query_data_code_window_t2_ParamLimits

0x2e32,	// (0x0002131b) popup_query_data_code_window_t2

0x2e44,	// (0x0002132d) popup_query_data_code_window_t3_ParamLimits

0x2e44,	// (0x0002132d) popup_query_data_code_window_t3

0x2e5a,	// (0x00021343) popup_query_data_code_window_t4_ParamLimits

0x2e5a,	// (0x00021343) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002da4e) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002da4e) popup_query_data_code_window_t

0x8f80,	// (0x00027469) list_single_midp_graphic_pane_g3

0x2e74,	// (0x0002135d) query_popup_data_pane_cp2_ParamLimits

0x2e87,	// (0x00021370) query_popup_pane_cp2_ParamLimits

0x2e87,	// (0x00021370) query_popup_pane_cp2

0x14c8,	// (0x0001f9b1) bg_popup_window_pane_cp11

0x9de9,	// (0x000282d2) heading_pane_cp5

0x9df1,	// (0x000282da) listscroll_popup_info_pane

0x14c8,	// (0x0001f9b1) input_focus_pane_cp3

0x2ea2,	// (0x0002138b) query_popup_pane_t1

0x2eb0,	// (0x00021399) list_popup_info_pane_ParamLimits

0x2eb0,	// (0x00021399) list_popup_info_pane

0x2ebf,	// (0x000213a8) listscroll_popup_info_pane_g1

0x2ec7,	// (0x000213b0) scroll_pane_cp7

0x2ed1,	// (0x000213ba) popup_info_list_pane_t1_ParamLimits

0x2ed1,	// (0x000213ba) popup_info_list_pane_t1

0x2eeb,	// (0x000213d4) popup_info_list_pane_t2_ParamLimits

0x2eeb,	// (0x000213d4) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002da57) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002da57) popup_info_list_pane_t

0x14c8,	// (0x0001f9b1) bg_popup_window_pane_cp12

0xb19c,	// (0x00029685) find_popup_pane

0x1524,	// (0x0001fa0d) bg_popup_window_pane_cp3

0x2f05,	// (0x000213ee) heading_pane_cp3

0x2f14,	// (0x000213fd) listscroll_popup_graphic_pane

0x14c8,	// (0x0001f9b1) bg_popup_window_pane_cp4

0x6426,	// (0x0002490f) heading_pane_cp4

0x2f24,	// (0x0002140d) listscroll_popup_colour_pane

0x6430,	// (0x00024919) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6430,	// (0x00024919) cell_large_graphic_colour_none_popup_pane

0x6444,	// (0x0002492d) grid_large_graphic_colour_popup_pane_ParamLimits

0x6444,	// (0x0002492d) grid_large_graphic_colour_popup_pane

0x6470,	// (0x00024959) listscroll_popup_colour_pane_g1_ParamLimits

0x6470,	// (0x00024959) listscroll_popup_colour_pane_g1

0x6487,	// (0x00024970) listscroll_popup_colour_pane_g2_ParamLimits

0x6487,	// (0x00024970) listscroll_popup_colour_pane_g2

0x649e,	// (0x00024987) listscroll_popup_colour_pane_g3_ParamLimits

0x649e,	// (0x00024987) listscroll_popup_colour_pane_g3

0x64ae,	// (0x00024997) listscroll_popup_colour_pane_g4_ParamLimits

0x64ae,	// (0x00024997) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002da5c) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002da5c) listscroll_popup_colour_pane_g

0x2f2c,	// (0x00021415) scroll_pane_cp6_ParamLimits

0x2f2c,	// (0x00021415) scroll_pane_cp6

0x64c2,	// (0x000249ab) cell_large_graphic_colour_popup_pane_ParamLimits

0x64c2,	// (0x000249ab) cell_large_graphic_colour_popup_pane

0x2f3e,	// (0x00021427) cell_large_graphic_colour_none_popup_pane_t1

0x14c8,	// (0x0001f9b1) grid_highlight_pane_cp5

0x2f4d,	// (0x00021436) cell_large_graphic_colour_popup_pane_g1

0x2f55,	// (0x0002143e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002da65) cell_large_graphic_colour_popup_pane_g

0x2f5d,	// (0x00021446) cell_large_graphic_colour_popup_pane_g2_copy1

0x2f66,	// (0x0002144f) grid_highlight_pane_cp4

0x2f6e,	// (0x00021457) bg_popup_window_pane_cp8_ParamLimits

0x2f6e,	// (0x00021457) bg_popup_window_pane_cp8

0x2f89,	// (0x00021472) popup_snote_single_text_window_g1_ParamLimits

0x2f89,	// (0x00021472) popup_snote_single_text_window_g1

0x2f9b,	// (0x00021484) popup_snote_single_text_window_t1_ParamLimits

0x2f9b,	// (0x00021484) popup_snote_single_text_window_t1

0x2fae,	// (0x00021497) popup_snote_single_text_window_t2_ParamLimits

0x2fae,	// (0x00021497) popup_snote_single_text_window_t2

0x2fc1,	// (0x000214aa) popup_snote_single_text_window_t3_ParamLimits

0x2fc1,	// (0x000214aa) popup_snote_single_text_window_t3

0x2ffa,	// (0x000214e3) popup_snote_single_text_window_t4_ParamLimits

0x2ffa,	// (0x000214e3) popup_snote_single_text_window_t4

0x302e,	// (0x00021517) popup_snote_single_text_window_t5_ParamLimits

0x302e,	// (0x00021517) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002da6a) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002da6a) popup_snote_single_text_window_t

0x305d,	// (0x00021546) bg_popup_window_pane_cp9_ParamLimits

0x305d,	// (0x00021546) bg_popup_window_pane_cp9

0x2f89,	// (0x00021472) popup_snote_single_graphic_window_g1_ParamLimits

0x2f89,	// (0x00021472) popup_snote_single_graphic_window_g1

0x306b,	// (0x00021554) popup_snote_single_graphic_window_g2_ParamLimits

0x306b,	// (0x00021554) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002da75) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002da75) popup_snote_single_graphic_window_g

0x3077,	// (0x00021560) popup_snote_single_graphic_window_t1_ParamLimits

0x3077,	// (0x00021560) popup_snote_single_graphic_window_t1

0x308a,	// (0x00021573) popup_snote_single_graphic_window_t2_ParamLimits

0x308a,	// (0x00021573) popup_snote_single_graphic_window_t2

0x309d,	// (0x00021586) popup_snote_single_graphic_window_t3_ParamLimits

0x309d,	// (0x00021586) popup_snote_single_graphic_window_t3

0x30d6,	// (0x000215bf) popup_snote_single_graphic_window_t4_ParamLimits

0x30d6,	// (0x000215bf) popup_snote_single_graphic_window_t4

0x310a,	// (0x000215f3) popup_snote_single_graphic_window_t5_ParamLimits

0x310a,	// (0x000215f3) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002da7a) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002da7a) popup_snote_single_graphic_window_t

0xb0da,	// (0x000295c3) grid_graphic_popup_pane_ParamLimits

0xb0da,	// (0x000295c3) grid_graphic_popup_pane

0xb108,	// (0x000295f1) listscroll_popup_graphic_pane_g1_ParamLimits

0xb108,	// (0x000295f1) listscroll_popup_graphic_pane_g1

0xb11c,	// (0x00029605) listscroll_popup_graphic_pane_g2_ParamLimits

0xb11c,	// (0x00029605) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0002de74) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0002de74) listscroll_popup_graphic_pane_g

0xb130,	// (0x00029619) scroll_pane_cp5

0xb072,	// (0x0002955b) cell_graphic_popup_pane_ParamLimits

0xb072,	// (0x0002955b) cell_graphic_popup_pane

0xb053,	// (0x0002953c) cell_graphic_popup_pane_g1

0xb05b,	// (0x00029544) cell_graphic_popup_pane_g2

0x2f5d,	// (0x00021446) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0002de6d) cell_graphic_popup_pane_g

0xb064,	// (0x0002954d) cell_graphic_popup_pane_t2

0x2f66,	// (0x0002144f) grid_highlight_pane_cp3

0x314b,	// (0x00021634) list_gen_pane_ParamLimits

0x314b,	// (0x00021634) list_gen_pane

0x3173,	// (0x0002165c) scroll_pane

0xafab,	// (0x00029494) bg_list_pane_g1_ParamLimits

0xafab,	// (0x00029494) bg_list_pane_g1

0xafc8,	// (0x000294b1) bg_list_pane_g2_ParamLimits

0xafc8,	// (0x000294b1) bg_list_pane_g2

0xafdd,	// (0x000294c6) bg_list_pane_g3_ParamLimits

0xafdd,	// (0x000294c6) bg_list_pane_g3

0xaff1,	// (0x000294da) bg_list_pane_g4_ParamLimits

0xaff1,	// (0x000294da) bg_list_pane_g4

0xb005,	// (0x000294ee) bg_list_pane_g5_ParamLimits

0xb005,	// (0x000294ee) bg_list_pane_g5

0x0004,

0xf979,	// (0x0002de62) bg_list_pane_g_ParamLimits

0xf979,	// (0x0002de62) bg_list_pane_g

0xaf62,	// (0x0002944b) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf62,	// (0x0002944b) list_double2_graphic_large_graphic_pane

0xaf62,	// (0x0002944b) list_double2_graphic_pane_ParamLimits

0xaf62,	// (0x0002944b) list_double2_graphic_pane

0xaf62,	// (0x0002944b) list_double2_large_graphic_pane_ParamLimits

0xaf62,	// (0x0002944b) list_double2_large_graphic_pane

0xaf62,	// (0x0002944b) list_double2_pane_ParamLimits

0xaf62,	// (0x0002944b) list_double2_pane

0xaf62,	// (0x0002944b) list_double_graphic_heading_pane_ParamLimits

0xaf62,	// (0x0002944b) list_double_graphic_heading_pane

0xaf62,	// (0x0002944b) list_double_graphic_pane_ParamLimits

0xaf62,	// (0x0002944b) list_double_graphic_pane

0xaf62,	// (0x0002944b) list_double_heading_pane_ParamLimits

0xaf62,	// (0x0002944b) list_double_heading_pane

0xaf62,	// (0x0002944b) list_double_large_graphic_pane_ParamLimits

0xaf62,	// (0x0002944b) list_double_large_graphic_pane

0xaf62,	// (0x0002944b) list_double_number_pane_ParamLimits

0xaf62,	// (0x0002944b) list_double_number_pane

0xaf62,	// (0x0002944b) list_double_pane_ParamLimits

0xaf62,	// (0x0002944b) list_double_pane

0xaf62,	// (0x0002944b) list_double_time_pane_ParamLimits

0xaf62,	// (0x0002944b) list_double_time_pane

0xaf62,	// (0x0002944b) list_setting_number_pane_ParamLimits

0xaf62,	// (0x0002944b) list_setting_number_pane

0xaf62,	// (0x0002944b) list_setting_pane_ParamLimits

0xaf62,	// (0x0002944b) list_setting_pane

0x55f4,	// (0x00023add) list_single_2graphic_pane_ParamLimits

0x55f4,	// (0x00023add) list_single_2graphic_pane

0x55f4,	// (0x00023add) list_single_graphic_heading_pane_ParamLimits

0x55f4,	// (0x00023add) list_single_graphic_heading_pane

0x55f4,	// (0x00023add) list_single_graphic_pane_ParamLimits

0x55f4,	// (0x00023add) list_single_graphic_pane

0x55f4,	// (0x00023add) list_single_heading_pane_ParamLimits

0x55f4,	// (0x00023add) list_single_heading_pane

0xaf90,	// (0x00029479) list_single_large_graphic_pane_ParamLimits

0xaf90,	// (0x00029479) list_single_large_graphic_pane

0x55f4,	// (0x00023add) list_single_number_heading_pane_ParamLimits

0x55f4,	// (0x00023add) list_single_number_heading_pane

0x55f4,	// (0x00023add) list_single_number_pane_ParamLimits

0x55f4,	// (0x00023add) list_single_number_pane

0x55f4,	// (0x00023add) list_single_pane_ParamLimits

0x55f4,	// (0x00023add) list_single_pane

0x14c8,	// (0x0001f9b1) list_highlight_pane_cp1

0x4c00,	// (0x000230e9) list_single_pane_g1_ParamLimits

0x4c00,	// (0x000230e9) list_single_pane_g1

0x4c0c,	// (0x000230f5) list_single_pane_g2_ParamLimits

0x4c0c,	// (0x000230f5) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002da8c) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002da8c) list_single_pane_g

0x55a1,	// (0x00023a8a) list_single_pane_t1_ParamLimits

0x55a1,	// (0x00023a8a) list_single_pane_t1

0x4c00,	// (0x000230e9) list_single_number_pane_g1_ParamLimits

0x4c00,	// (0x000230e9) list_single_number_pane_g1

0x4c0c,	// (0x000230f5) list_single_number_pane_g2_ParamLimits

0x4c0c,	// (0x000230f5) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002da8c) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002da8c) list_single_number_pane_g

0x554b,	// (0x00023a34) list_single_number_pane_t1_ParamLimits

0x554b,	// (0x00023a34) list_single_number_pane_t1

0x5561,	// (0x00023a4a) list_single_number_pane_t2_ParamLimits

0x5561,	// (0x00023a4a) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0002de23) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0002de23) list_single_number_pane_t

0x4bf4,	// (0x000230dd) list_single_graphic_pane_g1_ParamLimits

0x4bf4,	// (0x000230dd) list_single_graphic_pane_g1

0x4c00,	// (0x000230e9) list_single_graphic_pane_g2_ParamLimits

0x4c00,	// (0x000230e9) list_single_graphic_pane_g2

0x4c0c,	// (0x000230f5) list_single_graphic_pane_g3_ParamLimits

0x4c0c,	// (0x000230f5) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002da85) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002da85) list_single_graphic_pane_g

0x4c18,	// (0x00023101) list_single_graphic_pane_t1_ParamLimits

0x4c18,	// (0x00023101) list_single_graphic_pane_t1

0x4c00,	// (0x000230e9) list_single_heading_pane_g1_ParamLimits

0x4c00,	// (0x000230e9) list_single_heading_pane_g1

0x4c0c,	// (0x000230f5) list_single_heading_pane_g2_ParamLimits

0x4c0c,	// (0x000230f5) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002da8c) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002da8c) list_single_heading_pane_g

0x4c2e,	// (0x00023117) list_single_heading_pane_t1_ParamLimits

0x4c2e,	// (0x00023117) list_single_heading_pane_t1

0x4c44,	// (0x0002312d) list_single_heading_pane_t2_ParamLimits

0x4c44,	// (0x0002312d) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002da91) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002da91) list_single_heading_pane_t

0x4c00,	// (0x000230e9) list_single_number_heading_pane_g1_ParamLimits

0x4c00,	// (0x000230e9) list_single_number_heading_pane_g1

0x4c0c,	// (0x000230f5) list_single_number_heading_pane_g2_ParamLimits

0x4c0c,	// (0x000230f5) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002da8c) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002da8c) list_single_number_heading_pane_g

0x4c2e,	// (0x00023117) list_single_number_heading_pane_t1_ParamLimits

0x4c2e,	// (0x00023117) list_single_number_heading_pane_t1

0x4c56,	// (0x0002313f) list_single_number_heading_pane_t2_ParamLimits

0x4c56,	// (0x0002313f) list_single_number_heading_pane_t2

0x4c68,	// (0x00023151) list_single_number_heading_pane_t3_ParamLimits

0x4c68,	// (0x00023151) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002da96) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002da96) list_single_number_heading_pane_t

0x4c7a,	// (0x00023163) list_single_graphic_heading_pane_g1_ParamLimits

0x4c7a,	// (0x00023163) list_single_graphic_heading_pane_g1

0x4c86,	// (0x0002316f) list_single_graphic_heading_pane_g4_ParamLimits

0x4c86,	// (0x0002316f) list_single_graphic_heading_pane_g4

0x4c0c,	// (0x000230f5) list_single_graphic_heading_pane_g5_ParamLimits

0x4c0c,	// (0x000230f5) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002da9d) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002da9d) list_single_graphic_heading_pane_g

0x4c2e,	// (0x00023117) list_single_graphic_heading_pane_t1_ParamLimits

0x4c2e,	// (0x00023117) list_single_graphic_heading_pane_t1

0x4c97,	// (0x00023180) list_single_graphic_heading_pane_t2_ParamLimits

0x4c97,	// (0x00023180) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002daa4) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002daa4) list_single_graphic_heading_pane_t

0x4ca9,	// (0x00023192) list_single_large_graphic_pane_g1_ParamLimits

0x4ca9,	// (0x00023192) list_single_large_graphic_pane_g1

0x4cb5,	// (0x0002319e) list_single_large_graphic_pane_g2_ParamLimits

0x4cb5,	// (0x0002319e) list_single_large_graphic_pane_g2

0x4cc1,	// (0x000231aa) list_single_large_graphic_pane_g3_ParamLimits

0x4cc1,	// (0x000231aa) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002daa9) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002daa9) list_single_large_graphic_pane_g

0x9fa6,	// (0x0002848f) wait_border_pane_g2_copy1

0x4ccd,	// (0x000231b6) list_single_large_graphic_pane_g4_cp2

0x4cd5,	// (0x000231be) list_single_large_graphic_pane_t1_ParamLimits

0x4cd5,	// (0x000231be) list_single_large_graphic_pane_t1

0x4ceb,	// (0x000231d4) list_double_pane_g1_ParamLimits

0x4ceb,	// (0x000231d4) list_double_pane_g1

0x4cf7,	// (0x000231e0) list_double_pane_g2_ParamLimits

0x4cf7,	// (0x000231e0) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002dab0) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002dab0) list_double_pane_g

0x4d03,	// (0x000231ec) list_double_pane_t1_ParamLimits

0x4d03,	// (0x000231ec) list_double_pane_t1

0x4d19,	// (0x00023202) list_double_pane_t2_ParamLimits

0x4d19,	// (0x00023202) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002dab5) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002dab5) list_double_pane_t

0x4d2b,	// (0x00023214) list_double2_pane_g1_ParamLimits

0x4d2b,	// (0x00023214) list_double2_pane_g1

0x4d3c,	// (0x00023225) list_double2_pane_g2_ParamLimits

0x4d3c,	// (0x00023225) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002daba) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002daba) list_double2_pane_g

0x4d48,	// (0x00023231) list_double2_pane_t1_ParamLimits

0x4d48,	// (0x00023231) list_double2_pane_t1

0x4d5e,	// (0x00023247) list_double2_pane_t2_ParamLimits

0x4d5e,	// (0x00023247) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002dabf) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002dabf) list_double2_pane_t

0x4ceb,	// (0x000231d4) list_double_number_pane_g1_ParamLimits

0x4ceb,	// (0x000231d4) list_double_number_pane_g1

0x4cf7,	// (0x000231e0) list_double_number_pane_g2_ParamLimits

0x4cf7,	// (0x000231e0) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002dab0) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002dab0) list_double_number_pane_g

0x4d70,	// (0x00023259) list_double_number_pane_t1_ParamLimits

0x4d70,	// (0x00023259) list_double_number_pane_t1

0x4d82,	// (0x0002326b) list_double_number_pane_t2_ParamLimits

0x4d82,	// (0x0002326b) list_double_number_pane_t2

0x4d98,	// (0x00023281) list_double_number_pane_t3_ParamLimits

0x4d98,	// (0x00023281) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002dac4) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002dac4) list_double_number_pane_t

0x4daa,	// (0x00023293) list_double_graphic_pane_g1_ParamLimits

0x4daa,	// (0x00023293) list_double_graphic_pane_g1

0x4db6,	// (0x0002329f) list_double_graphic_pane_g2_ParamLimits

0x4db6,	// (0x0002329f) list_double_graphic_pane_g2

0x4dc5,	// (0x000232ae) list_double_graphic_pane_g3_ParamLimits

0x4dc5,	// (0x000232ae) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002dacb) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002dacb) list_double_graphic_pane_g

0x4ddd,	// (0x000232c6) list_double_graphic_pane_t1_ParamLimits

0x4ddd,	// (0x000232c6) list_double_graphic_pane_t1

0x4df3,	// (0x000232dc) list_double_graphic_pane_t2_ParamLimits

0x4df3,	// (0x000232dc) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002dad4) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002dad4) list_double_graphic_pane_t

0x4e05,	// (0x000232ee) list_double2_graphic_pane_g1_ParamLimits

0x4e05,	// (0x000232ee) list_double2_graphic_pane_g1

0x4e11,	// (0x000232fa) list_double2_graphic_pane_g2_ParamLimits

0x4e11,	// (0x000232fa) list_double2_graphic_pane_g2

0x4e1d,	// (0x00023306) list_double2_graphic_pane_g3_ParamLimits

0x4e1d,	// (0x00023306) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002dad9) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002dad9) list_double2_graphic_pane_g

0x4e29,	// (0x00023312) list_double2_graphic_pane_t1_ParamLimits

0x4e29,	// (0x00023312) list_double2_graphic_pane_t1

0x4e3f,	// (0x00023328) list_double2_graphic_pane_t2_ParamLimits

0x4e3f,	// (0x00023328) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002dae0) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002dae0) list_double2_graphic_pane_t

0x4e51,	// (0x0002333a) list_double_large_graphic_pane_g1_ParamLimits

0x4e51,	// (0x0002333a) list_double_large_graphic_pane_g1

0x4e70,	// (0x00023359) list_double_large_graphic_pane_g2_ParamLimits

0x4e70,	// (0x00023359) list_double_large_graphic_pane_g2

0x4cf7,	// (0x000231e0) list_double_large_graphic_pane_g3_ParamLimits

0x4cf7,	// (0x000231e0) list_double_large_graphic_pane_g3

0x4e81,	// (0x0002336a) list_double_large_graphic_pane_g4_ParamLimits

0x4e81,	// (0x0002336a) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002dae5) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002dae5) list_double_large_graphic_pane_g

0x4ea9,	// (0x00023392) list_double_large_graphic_pane_t1_ParamLimits

0x4ea9,	// (0x00023392) list_double_large_graphic_pane_t1

0x4ec2,	// (0x000233ab) list_double_large_graphic_pane_t2_ParamLimits

0x4ec2,	// (0x000233ab) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002daf0) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002daf0) list_double_large_graphic_pane_t

0x4ed4,	// (0x000233bd) list_double2_large_graphic_pane_g1_ParamLimits

0x4ed4,	// (0x000233bd) list_double2_large_graphic_pane_g1

0x4d2b,	// (0x00023214) list_double2_large_graphic_pane_g2_ParamLimits

0x4d2b,	// (0x00023214) list_double2_large_graphic_pane_g2

0x4d3c,	// (0x00023225) list_double2_large_graphic_pane_g3_ParamLimits

0x4d3c,	// (0x00023225) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002daf5) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002daf5) list_double2_large_graphic_pane_g

0x4ee0,	// (0x000233c9) list_double2_large_graphic_pane_t1_ParamLimits

0x4ee0,	// (0x000233c9) list_double2_large_graphic_pane_t1

0x4ef6,	// (0x000233df) list_double2_large_graphic_pane_t2_ParamLimits

0x4ef6,	// (0x000233df) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0002dafc) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0002dafc) list_double2_large_graphic_pane_t

0x4f08,	// (0x000233f1) list_double_heading_pane_g1_ParamLimits

0x4f08,	// (0x000233f1) list_double_heading_pane_g1

0x4f19,	// (0x00023402) list_double_heading_pane_g2_ParamLimits

0x4f19,	// (0x00023402) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002db01) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002db01) list_double_heading_pane_g

0x4f25,	// (0x0002340e) list_double_heading_pane_t1_ParamLimits

0x4f25,	// (0x0002340e) list_double_heading_pane_t1

0x4d5e,	// (0x00023247) list_double_heading_pane_t2_ParamLimits

0x4d5e,	// (0x00023247) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0002db06) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0002db06) list_double_heading_pane_t

0x4e05,	// (0x000232ee) list_double_graphic_heading_pane_g1_ParamLimits

0x4e05,	// (0x000232ee) list_double_graphic_heading_pane_g1

0x4f08,	// (0x000233f1) list_double_graphic_heading_pane_g2_ParamLimits

0x4f08,	// (0x000233f1) list_double_graphic_heading_pane_g2

0x4f19,	// (0x00023402) list_double_graphic_heading_pane_g3_ParamLimits

0x4f19,	// (0x00023402) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0002db0b) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002db0b) list_double_graphic_heading_pane_g

0x4f3b,	// (0x00023424) list_double_graphic_heading_pane_t1_ParamLimits

0x4f3b,	// (0x00023424) list_double_graphic_heading_pane_t1

0x4e3f,	// (0x00023328) list_double_graphic_heading_pane_t2_ParamLimits

0x4e3f,	// (0x00023328) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002db12) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002db12) list_double_graphic_heading_pane_t

0x4e70,	// (0x00023359) list_double_time_pane_g1_ParamLimits

0x4e70,	// (0x00023359) list_double_time_pane_g1

0x4cf7,	// (0x000231e0) list_double_time_pane_g2_ParamLimits

0x4cf7,	// (0x000231e0) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0002db17) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0002db17) list_double_time_pane_g

0x4f51,	// (0x0002343a) list_double_time_pane_t1_ParamLimits

0x4f51,	// (0x0002343a) list_double_time_pane_t1

0x4f67,	// (0x00023450) list_double_time_pane_t2_ParamLimits

0x4f67,	// (0x00023450) list_double_time_pane_t2

0x4f79,	// (0x00023462) list_double_time_pane_t3_ParamLimits

0x4f79,	// (0x00023462) list_double_time_pane_t3

0x4f8b,	// (0x00023474) list_double_time_pane_t4_ParamLimits

0x4f8b,	// (0x00023474) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0002db1c) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0002db1c) list_double_time_pane_t

0x4f9d,	// (0x00023486) list_setting_pane_g1_ParamLimits

0x4f9d,	// (0x00023486) list_setting_pane_g1

0x4f19,	// (0x00023402) list_setting_pane_g2_ParamLimits

0x4f19,	// (0x00023402) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0002db25) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0002db25) list_setting_pane_g

0x4fa9,	// (0x00023492) list_setting_pane_t1_ParamLimits

0x4fa9,	// (0x00023492) list_setting_pane_t1

0x4fc0,	// (0x000234a9) list_setting_pane_t2_ParamLimits

0x4fc0,	// (0x000234a9) list_setting_pane_t2

0x0002,

0xf641,	// (0x0002db2a) list_setting_pane_t_ParamLimits

0xf641,	// (0x0002db2a) list_setting_pane_t

0x4fff,	// (0x000234e8) set_value_pane_cp_ParamLimits

0x4fff,	// (0x000234e8) set_value_pane_cp

0x500d,	// (0x000234f6) list_setting_number_pane_g1_ParamLimits

0x500d,	// (0x000234f6) list_setting_number_pane_g1

0x5019,	// (0x00023502) list_setting_number_pane_g2_ParamLimits

0x5019,	// (0x00023502) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002db31) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002db31) list_setting_number_pane_g

0x5025,	// (0x0002350e) list_setting_number_pane_t1_ParamLimits

0x5025,	// (0x0002350e) list_setting_number_pane_t1

0x5039,	// (0x00023522) list_setting_number_pane_t2_ParamLimits

0x5039,	// (0x00023522) list_setting_number_pane_t2

0x5050,	// (0x00023539) list_setting_number_pane_t3_ParamLimits

0x5050,	// (0x00023539) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0002db36) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0002db36) list_setting_number_pane_t

0x4fff,	// (0x000234e8) set_value_pane_ParamLimits

0x4fff,	// (0x000234e8) set_value_pane

0x31c8,	// (0x000216b1) bg_set_opt_pane_ParamLimits

0x31c8,	// (0x000216b1) bg_set_opt_pane

0x5093,	// (0x0002357c) set_value_pane_t1

0x31f7,	// (0x000216e0) slider_set_pane_cp3

0x3200,	// (0x000216e9) volume_small_pane_cp

0x3209,	// (0x000216f2) list_form_gen_pane

0x3212,	// (0x000216fb) scroll_pane_cp8

0x50a9,	// (0x00023592) form_field_data_pane_ParamLimits

0x50a9,	// (0x00023592) form_field_data_pane

0x50cf,	// (0x000235b8) form_field_data_wide_pane_ParamLimits

0x50cf,	// (0x000235b8) form_field_data_wide_pane

0x50f4,	// (0x000235dd) form_field_popup_pane_ParamLimits

0x50f4,	// (0x000235dd) form_field_popup_pane

0x5116,	// (0x000235ff) form_field_popup_wide_pane_ParamLimits

0x5116,	// (0x000235ff) form_field_popup_wide_pane

0x5137,	// (0x00023620) form_field_slider_pane_ParamLimits

0x5137,	// (0x00023620) form_field_slider_pane

0x514a,	// (0x00023633) form_field_slider_wide_pane_ParamLimits

0x514a,	// (0x00023633) form_field_slider_wide_pane

0x327b,	// (0x00021764) data_form_pane

0x5167,	// (0x00023650) form_field_data_pane_t1

0x3287,	// (0x00021770) input_focus_pane

0x5181,	// (0x0002366a) data_form_wide_pane

0x519e,	// (0x00023687) form_field_data_wide_pane_t1

0x2f7b,	// (0x00021464) input_focus_pane_cp6

0x51c0,	// (0x000236a9) form_field_popup_pane_t1

0x3287,	// (0x00021770) input_focus_pane_cp7

0x32ec,	// (0x000217d5) list_form_pane

0x51e2,	// (0x000236cb) form_field_popup_wide_pane_t1

0x3287,	// (0x00021770) input_focus_pane_cp8

0x3312,	// (0x000217fb) list_form_wide_pane

0x51ff,	// (0x000236e8) form_field_slider_pane_t1_ParamLimits

0x51ff,	// (0x000236e8) form_field_slider_pane_t1

0x5217,	// (0x00023700) form_field_slider_pane_t2_ParamLimits

0x5217,	// (0x00023700) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0002db46) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0002db46) form_field_slider_pane_t

0x1516,	// (0x0001f9ff) input_focus_pane_cp9_ParamLimits

0x1516,	// (0x0001f9ff) input_focus_pane_cp9

0x522c,	// (0x00023715) slider_cont_pane_ParamLimits

0x522c,	// (0x00023715) slider_cont_pane

0x331e,	// (0x00021807) form_field_slider_wide_pane_t1_ParamLimits

0x331e,	// (0x00021807) form_field_slider_wide_pane_t1

0x5240,	// (0x00023729) form_field_slider_wide_pane_t2_ParamLimits

0x5240,	// (0x00023729) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0002db4b) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0002db4b) form_field_slider_wide_pane_t

0x1516,	// (0x0001f9ff) input_focus_pane_cp10_ParamLimits

0x1516,	// (0x0001f9ff) input_focus_pane_cp10

0x5252,	// (0x0002373b) slider_cont_pane_cp1_ParamLimits

0x5252,	// (0x0002373b) slider_cont_pane_cp1

0x5266,	// (0x0002374f) slider_form_pane_cp

0x3342,	// (0x0002182b) input_focus_pane_g1

0x334a,	// (0x00021833) input_focus_pane_g2

0x3352,	// (0x0002183b) input_focus_pane_g3

0x335a,	// (0x00021843) input_focus_pane_g4

0x3362,	// (0x0002184b) input_focus_pane_g5

0x336a,	// (0x00021853) input_focus_pane_g6

0x3372,	// (0x0002185b) input_focus_pane_g7

0x337a,	// (0x00021863) input_focus_pane_g8

0x3382,	// (0x0002186b) input_focus_pane_g9

0x14be,	// (0x0001f9a7) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002db50) input_focus_pane_g

0x9faf,	// (0x00028498) wait_border_pane_g3_copy1

0x526e,	// (0x00023757) data_form_pane_t1

0x14be,	// (0x0001f9a7) wait_anim_pane_g1_copy1

0x5573,	// (0x00023a5c) data_form_wide_pane_t1

0x528b,	// (0x00023774) list_form_graphic_pane_cp_ParamLimits

0x528b,	// (0x00023774) list_form_graphic_pane_cp

0xaf06,	// (0x000293ef) slider_form_pane_g1

0xaf0f,	// (0x000293f8) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0002de53) slider_form_pane_g

0x52a0,	// (0x00023789) list_form_graphic_pane_ParamLimits

0x52a0,	// (0x00023789) list_form_graphic_pane

0x52b2,	// (0x0002379b) list_form_graphic_pane_g1

0x52ba,	// (0x000237a3) list_form_graphic_pane_t1_ParamLimits

0x52ba,	// (0x000237a3) list_form_graphic_pane_t1

0x1524,	// (0x0001fa0d) list_highlight_pane_cp5_ParamLimits

0x1524,	// (0x0001fa0d) list_highlight_pane_cp5

0x52cf,	// (0x000237b8) find_pane_g1

0x64ed,	// (0x000249d6) input_find_pane

0x52d8,	// (0x000237c1) input_find_pane_g1_ParamLimits

0x52d8,	// (0x000237c1) input_find_pane_g1

0x52e4,	// (0x000237cd) input_find_pane_t1_ParamLimits

0x52e4,	// (0x000237cd) input_find_pane_t1

0x52f9,	// (0x000237e2) input_find_pane_t2_ParamLimits

0x52f9,	// (0x000237e2) input_find_pane_t2

0x0001,

0xf67c,	// (0x0002db65) input_find_pane_t_ParamLimits

0xf67c,	// (0x0002db65) input_find_pane_t

0x64f6,	// (0x000249df) input_focus_pane_cp5_ParamLimits

0x64f6,	// (0x000249df) input_focus_pane_cp5

0x6515,	// (0x000249fe) bg_popup_window_pane_cp2_ParamLimits

0x6515,	// (0x000249fe) bg_popup_window_pane_cp2

0x6522,	// (0x00024a0b) listscroll_menu_pane_ParamLimits

0x6522,	// (0x00024a0b) listscroll_menu_pane

0x652e,	// (0x00024a17) popup_submenu_window_ParamLimits

0x652e,	// (0x00024a17) popup_submenu_window

0x655e,	// (0x00024a47) find_popup_pane_g1

0x6566,	// (0x00024a4f) input_popup_find_pane_cp

0x6570,	// (0x00024a59) input_focus_pane_cp4_ParamLimits

0x6570,	// (0x00024a59) input_focus_pane_cp4

0x658c,	// (0x00024a75) input_popup_find_pane_t1_ParamLimits

0x658c,	// (0x00024a75) input_popup_find_pane_t1

0x14c8,	// (0x0001f9b1) bg_popup_sub_pane_cp

0x65ba,	// (0x00024aa3) listscroll_popup_sub_pane

0x65c2,	// (0x00024aab) list_submenu_pane_ParamLimits

0x65c2,	// (0x00024aab) list_submenu_pane

0x65d3,	// (0x00024abc) scroll_pane_cp4

0x65db,	// (0x00024ac4) list_single_popup_submenu_pane_ParamLimits

0x65db,	// (0x00024ac4) list_single_popup_submenu_pane

0x65f0,	// (0x00024ad9) list_single_popup_submenu_pane_g1

0x65f8,	// (0x00024ae1) list_single_popup_submenu_pane_t1_ParamLimits

0x65f8,	// (0x00024ae1) list_single_popup_submenu_pane_t1

0x1524,	// (0x0001fa0d) bg_active_tab_pane_cp1_ParamLimits

0x1524,	// (0x0001fa0d) bg_active_tab_pane_cp1

0x660d,	// (0x00024af6) tabs_2_active_pane_g1

0x6615,	// (0x00024afe) tabs_2_active_pane_t1

0x1524,	// (0x0001fa0d) bg_passive_tab_pane_cp1_ParamLimits

0x1524,	// (0x0001fa0d) bg_passive_tab_pane_cp1

0x660d,	// (0x00024af6) tabs_2_passive_pane_g1

0x6615,	// (0x00024afe) tabs_2_passive_pane_t1

0x6627,	// (0x00024b10) bg_active_tab_pane_cp4

0x6635,	// (0x00024b1e) tabs_2_long_active_pane_t1

0x6648,	// (0x00024b31) bg_passive_tab_pane_cp4

0x798d,	// (0x00025e76) list_single_midp_graphic_pane_g4_ParamLimits

0x6627,	// (0x00024b10) bg_active_tab_pane_cp5

0x6654,	// (0x00024b3d) tabs_3_long_active_pane_t1

0x6648,	// (0x00024b31) bg_passive_tab_pane_cp5

0x798d,	// (0x00025e76) list_single_midp_graphic_pane_g4

0x1524,	// (0x0001fa0d) bg_popup_window_pane_cp13_ParamLimits

0x1524,	// (0x0001fa0d) bg_popup_window_pane_cp13

0x666f,	// (0x00024b58) listscroll_popup_fast_pane_ParamLimits

0x666f,	// (0x00024b58) listscroll_popup_fast_pane

0x667e,	// (0x00024b67) grid_popup_fast_pane_ParamLimits

0x667e,	// (0x00024b67) grid_popup_fast_pane

0x6690,	// (0x00024b79) scroll_pane_cp9_ParamLimits

0x6690,	// (0x00024b79) scroll_pane_cp9

0xc856,	// (0x0002ad3f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc856,	// (0x0002ad3f) list_single_graphic_hl_pane_t1_cp2

0x66b4,	// (0x00024b9d) input_focus_pane_cp20_ParamLimits

0x66b4,	// (0x00024b9d) input_focus_pane_cp20

0x66c2,	// (0x00024bab) query_popup_data_pane_t1_ParamLimits

0x66c2,	// (0x00024bab) query_popup_data_pane_t1

0x66d5,	// (0x00024bbe) query_popup_data_pane_t2_ParamLimits

0x66d5,	// (0x00024bbe) query_popup_data_pane_t2

0x671b,	// (0x00024c04) query_popup_data_pane_t3_ParamLimits

0x671b,	// (0x00024c04) query_popup_data_pane_t3

0x675c,	// (0x00024c45) query_popup_data_pane_t4_ParamLimits

0x675c,	// (0x00024c45) query_popup_data_pane_t4

0x6798,	// (0x00024c81) query_popup_data_pane_t5_ParamLimits

0x6798,	// (0x00024c81) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0002db6a) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0002db6a) query_popup_data_pane_t

0x3342,	// (0x0002182b) bg_set_opt_pane_g1

0x334a,	// (0x00021833) bg_set_opt_pane_g2

0x3352,	// (0x0002183b) bg_set_opt_pane_g3

0x335a,	// (0x00021843) bg_set_opt_pane_g4

0x3362,	// (0x0002184b) bg_set_opt_pane_g5

0x336a,	// (0x00021853) bg_set_opt_pane_g6

0x3372,	// (0x0002185b) bg_set_opt_pane_g7

0x337a,	// (0x00021863) bg_set_opt_pane_g8

0x3382,	// (0x0002186b) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0002db75) bg_set_opt_pane_g

0x6fb1,	// (0x0002549a) control_top_pane_stacon_ParamLimits

0x6fb1,	// (0x0002549a) control_top_pane_stacon

0x7004,	// (0x000254ed) signal_pane_stacon_ParamLimits

0x7004,	// (0x000254ed) signal_pane_stacon

0x8ddf,	// (0x000272c8) stacon_top_pane_g1_ParamLimits

0x8ddf,	// (0x000272c8) stacon_top_pane_g1

0x7029,	// (0x00025512) title_pane_stacon_ParamLimits

0x7029,	// (0x00025512) title_pane_stacon

0x7053,	// (0x0002553c) uni_indicator_pane_stacon_ParamLimits

0x7053,	// (0x0002553c) uni_indicator_pane_stacon

0x7068,	// (0x00025551) battery_pane_stacon_ParamLimits

0x7068,	// (0x00025551) battery_pane_stacon

0x70ac,	// (0x00025595) control_bottom_pane_stacon_ParamLimits

0x70ac,	// (0x00025595) control_bottom_pane_stacon

0x70cf,	// (0x000255b8) navi_pane_stacon_ParamLimits

0x70cf,	// (0x000255b8) navi_pane_stacon

0x8e01,	// (0x000272ea) stacon_bottom_pane_g1_ParamLimits

0x8e01,	// (0x000272ea) stacon_bottom_pane_g1

0x67cf,	// (0x00024cb8) aid_levels_signal_lsc_ParamLimits

0x67cf,	// (0x00024cb8) aid_levels_signal_lsc

0x67e6,	// (0x00024ccf) signal_pane_stacon_g1_ParamLimits

0x67e6,	// (0x00024ccf) signal_pane_stacon_g1

0x67fa,	// (0x00024ce3) signal_pane_stacon_g2_ParamLimits

0x67fa,	// (0x00024ce3) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0002db88) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002db88) signal_pane_stacon_g

0x683c,	// (0x00024d25) title_pane_stacon_t1_ParamLimits

0x683c,	// (0x00024d25) title_pane_stacon_t1

0x6861,	// (0x00024d4a) uni_indicator_pane_stacon_g1

0x686b,	// (0x00024d54) uni_indicator_pane_stacon_g2

0x6875,	// (0x00024d5e) uni_indicator_pane_stacon_g3

0x687f,	// (0x00024d68) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0002db94) uni_indicator_pane_stacon_g

0x6889,	// (0x00024d72) control_top_pane_stacon_g1

0x6891,	// (0x00024d7a) control_top_pane_stacon_t1_ParamLimits

0x6891,	// (0x00024d7a) control_top_pane_stacon_t1

0x68c8,	// (0x00024db1) aid_levels_battery_lsc_ParamLimits

0x68c8,	// (0x00024db1) aid_levels_battery_lsc

0x68e0,	// (0x00024dc9) battery_pane_stacon_g1_ParamLimits

0x68e0,	// (0x00024dc9) battery_pane_stacon_g1

0x68f3,	// (0x00024ddc) battery_pane_stacon_g2_ParamLimits

0x68f3,	// (0x00024ddc) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0002db9d) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0002db9d) battery_pane_stacon_g

0x6931,	// (0x00024e1a) navi_icon_pane_stacon

0x6945,	// (0x00024e2e) navi_navi_pane_stacon

0x6931,	// (0x00024e1a) navi_text_pane_stacon

0x6889,	// (0x00024d72) control_bottom_pane_stacon_g1

0x695b,	// (0x00024e44) control_bottom_pane_stacon_t1_ParamLimits

0x695b,	// (0x00024e44) control_bottom_pane_stacon_t1

0x69ac,	// (0x00024e95) grid_app_pane_ParamLimits

0x69ac,	// (0x00024e95) grid_app_pane

0x69ce,	// (0x00024eb7) scroll_pane_cp15_ParamLimits

0x69ce,	// (0x00024eb7) scroll_pane_cp15

0x69e1,	// (0x00024eca) cell_app_pane_ParamLimits

0x69e1,	// (0x00024eca) cell_app_pane

0x6a0d,	// (0x00024ef6) cell_app_pane_g1_ParamLimits

0x6a0d,	// (0x00024ef6) cell_app_pane_g1

0x6a31,	// (0x00024f1a) cell_app_pane_g2_ParamLimits

0x6a31,	// (0x00024f1a) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0002dba2) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0002dba2) cell_app_pane_g

0x6a3d,	// (0x00024f26) cell_app_pane_t1_ParamLimits

0x6a3d,	// (0x00024f26) cell_app_pane_t1

0x6a54,	// (0x00024f3d) grid_highlight_pane_ParamLimits

0x6a54,	// (0x00024f3d) grid_highlight_pane

0x3342,	// (0x0002182b) cell_highlight_pane_g1

0x334a,	// (0x00021833) cell_highlight_pane_g2

0x3352,	// (0x0002183b) cell_highlight_pane_g3

0x335a,	// (0x00021843) cell_highlight_pane_g4

0x3362,	// (0x0002184b) cell_highlight_pane_g5

0x336a,	// (0x00021853) cell_highlight_pane_g6

0x3372,	// (0x0002185b) cell_highlight_pane_g7

0x337a,	// (0x00021863) cell_highlight_pane_g8

0x3382,	// (0x0002186b) cell_highlight_pane_g9

0x14be,	// (0x0001f9a7) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002db50) cell_highlight_pane_g

0x6a78,	// (0x00024f61) bg_scroll_pane

0x6a97,	// (0x00024f80) scroll_handle_pane

0x6ae8,	// (0x00024fd1) scroll_bg_pane_g1

0x6afd,	// (0x00024fe6) scroll_bg_pane_g2

0x6b15,	// (0x00024ffe) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0002dba7) scroll_bg_pane_g

0x6b2a,	// (0x00025013) scroll_handle_focus_pane_ParamLimits

0x6b2a,	// (0x00025013) scroll_handle_focus_pane

0x6ae8,	// (0x00024fd1) scroll_handle_pane_g1

0x6b37,	// (0x00025020) scroll_handle_pane_g2

0x6b15,	// (0x00024ffe) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0002dbae) scroll_handle_pane_g

0x6570,	// (0x00024a59) bg_popup_sub_pane_cp21_ParamLimits

0x6570,	// (0x00024a59) bg_popup_sub_pane_cp21

0x6b4b,	// (0x00025034) popup_fep_japan_predictive_window_t1_ParamLimits

0x6b4b,	// (0x00025034) popup_fep_japan_predictive_window_t1

0x6b62,	// (0x0002504b) popup_fep_japan_predictive_window_t2_ParamLimits

0x6b62,	// (0x0002504b) popup_fep_japan_predictive_window_t2

0x6b95,	// (0x0002507e) popup_fep_japan_predictive_window_t3_ParamLimits

0x6b95,	// (0x0002507e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0002dbb5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0002dbb5) popup_fep_japan_predictive_window_t

0x14c8,	// (0x0001f9b1) bg_popup_sub_pane_cp23

0x6bcc,	// (0x000250b5) listscroll_japin_cand_pane

0x6bd4,	// (0x000250bd) popup_fep_japan_candidate_window_t1

0x6be2,	// (0x000250cb) candidate_pane_ParamLimits

0x6be2,	// (0x000250cb) candidate_pane

0x6bf4,	// (0x000250dd) scroll_pane_cp30

0x6bfe,	// (0x000250e7) list_single_popup_jap_candidate_pane_ParamLimits

0x6bfe,	// (0x000250e7) list_single_popup_jap_candidate_pane

0x14c8,	// (0x0001f9b1) list_highlight_pane_cp30

0x6c12,	// (0x000250fb) list_single_popup_jap_candidate_pane_t1

0x6c21,	// (0x0002510a) level_1_signal

0x6c2e,	// (0x00025117) level_2_signal

0x6c3b,	// (0x00025124) level_3_signal

0x6c48,	// (0x00025131) level_4_signal

0x6c55,	// (0x0002513e) level_5_signal

0x6c62,	// (0x0002514b) level_6_signal

0x6c6f,	// (0x00025158) level_7_signal

0x6c21,	// (0x0002510a) level_1_battery

0x6c2e,	// (0x00025117) level_2_battery

0x6c3b,	// (0x00025124) level_3_battery

0x6c48,	// (0x00025131) level_4_battery

0x6c55,	// (0x0002513e) level_5_battery

0x6c62,	// (0x0002514b) level_6_battery

0x6c6f,	// (0x00025158) level_7_battery

0x6cb3,	// (0x0002519c) list_menu_pane_ParamLimits

0x6cb3,	// (0x0002519c) list_menu_pane

0x6cc9,	// (0x000251b2) scroll_pane_cp25_ParamLimits

0x6cc9,	// (0x000251b2) scroll_pane_cp25

0x6ce2,	// (0x000251cb) list_double2_graphic_pane_cp2_ParamLimits

0x6ce2,	// (0x000251cb) list_double2_graphic_pane_cp2

0x6ce2,	// (0x000251cb) list_double2_large_graphic_pane_cp2_ParamLimits

0x6ce2,	// (0x000251cb) list_double2_large_graphic_pane_cp2

0x6ce2,	// (0x000251cb) list_double2_pane_cp2_ParamLimits

0x6ce2,	// (0x000251cb) list_double2_pane_cp2

0x6ce2,	// (0x000251cb) list_double_graphic_pane_cp2_ParamLimits

0x6ce2,	// (0x000251cb) list_double_graphic_pane_cp2

0x6ce2,	// (0x000251cb) list_double_large_graphic_pane_cp2_ParamLimits

0x6ce2,	// (0x000251cb) list_double_large_graphic_pane_cp2

0x6ce2,	// (0x000251cb) list_double_number_pane_cp2_ParamLimits

0x6ce2,	// (0x000251cb) list_double_number_pane_cp2

0x6ce2,	// (0x000251cb) list_double_pane_cp2_ParamLimits

0x6ce2,	// (0x000251cb) list_double_pane_cp2

0x6d08,	// (0x000251f1) list_single_2graphic_pane_cp2_ParamLimits

0x6d08,	// (0x000251f1) list_single_2graphic_pane_cp2

0x6d08,	// (0x000251f1) list_single_graphic_heading_pane_cp2_ParamLimits

0x6d08,	// (0x000251f1) list_single_graphic_heading_pane_cp2

0x6d08,	// (0x000251f1) list_single_graphic_pane_cp2_ParamLimits

0x6d08,	// (0x000251f1) list_single_graphic_pane_cp2

0x6d08,	// (0x000251f1) list_single_heading_pane_cp2_ParamLimits

0x6d08,	// (0x000251f1) list_single_heading_pane_cp2

0x6d25,	// (0x0002520e) list_single_large_graphic_pane_cp2_ParamLimits

0x6d25,	// (0x0002520e) list_single_large_graphic_pane_cp2

0x6d08,	// (0x000251f1) list_single_number_heading_pane_cp2_ParamLimits

0x6d08,	// (0x000251f1) list_single_number_heading_pane_cp2

0x6d08,	// (0x000251f1) list_single_number_pane_cp2_ParamLimits

0x6d08,	// (0x000251f1) list_single_number_pane_cp2

0x6d08,	// (0x000251f1) list_single_pane_cp2_ParamLimits

0x6d08,	// (0x000251f1) list_single_pane_cp2

0x6dee,	// (0x000252d7) bg_popup_sub_pane_cp22

0x6e13,	// (0x000252fc) popup_side_volume_key_window_g1

0x6e3d,	// (0x00025326) popup_side_volume_key_window_t1

0x6e5b,	// (0x00025344) volume_small_pane_cp1

0x1516,	// (0x0001f9ff) bg_popup_sub_pane_cp24_ParamLimits

0x1516,	// (0x0001f9ff) bg_popup_sub_pane_cp24

0x6e63,	// (0x0002534c) fep_china_uni_candidate_pane_ParamLimits

0x6e63,	// (0x0002534c) fep_china_uni_candidate_pane

0x6e77,	// (0x00025360) fep_china_uni_entry_pane

0x6e87,	// (0x00025370) popup_fep_china_uni_window_g1

0x6ea3,	// (0x0002538c) fep_china_uni_entry_pane_g1

0x6ead,	// (0x00025396) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0002dbe6) fep_china_uni_entry_pane_g

0x6eb7,	// (0x000253a0) fep_entry_item_pane

0x6ec1,	// (0x000253aa) fep_candidate_item_pane

0x6ec9,	// (0x000253b2) fep_china_uni_candidate_pane_g1

0x6ed3,	// (0x000253bc) fep_china_uni_candidate_pane_g2

0x6edb,	// (0x000253c4) fep_china_uni_candidate_pane_g3

0x6ee3,	// (0x000253cc) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0002dbeb) fep_china_uni_candidate_pane_g

0x14be,	// (0x0001f9a7) fep_entry_item_pane_g1

0x6eed,	// (0x000253d6) fep_entry_item_pane_t1_ParamLimits

0x6eed,	// (0x000253d6) fep_entry_item_pane_t1

0x6f03,	// (0x000253ec) fep_candidate_item_pane_t1_ParamLimits

0x6f03,	// (0x000253ec) fep_candidate_item_pane_t1

0x6f18,	// (0x00025401) fep_candidate_item_pane_t2_ParamLimits

0x6f18,	// (0x00025401) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0002dbf4) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0002dbf4) fep_candidate_item_pane_t

0x1524,	// (0x0001fa0d) list_highlight_pane_cp31_ParamLimits

0x1524,	// (0x0001fa0d) list_highlight_pane_cp31

0x6f2a,	// (0x00025413) level_1_signal_lsc

0x6f33,	// (0x0002541c) level_2_signal_lsc

0x6f3c,	// (0x00025425) level_3_signal_lsc

0x6f45,	// (0x0002542e) level_4_signal_lsc

0x6f4e,	// (0x00025437) level_5_signal_lsc

0x6f57,	// (0x00025440) level_6_signal_lsc

0x6f60,	// (0x00025449) level_7_signal_lsc

0x6f60,	// (0x00025449) level_1_battery_lsc

0x6f69,	// (0x00025452) level_2_battery_lsc

0x6f72,	// (0x0002545b) level_3_battery_lsc

0x6f7b,	// (0x00025464) level_4_battery_lsc

0x6f84,	// (0x0002546d) level_5_battery_lsc

0x6f8d,	// (0x00025476) level_6_battery_lsc

0x6f2a,	// (0x00025413) level_7_battery_lsc

0x6f96,	// (0x0002547f) scroll_handle_focus_pane_g1

0x6f9f,	// (0x00025488) scroll_handle_focus_pane_g2

0x6fa8,	// (0x00025491) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0002dbf9) scroll_handle_focus_pane_g

0x530e,	// (0x000237f7) list_single_2graphic_pane_g1_ParamLimits

0x530e,	// (0x000237f7) list_single_2graphic_pane_g1

0x4c86,	// (0x0002316f) list_single_2graphic_pane_g2_ParamLimits

0x4c86,	// (0x0002316f) list_single_2graphic_pane_g2

0x4c0c,	// (0x000230f5) list_single_2graphic_pane_g3_ParamLimits

0x4c0c,	// (0x000230f5) list_single_2graphic_pane_g3

0x531a,	// (0x00023803) list_single_2graphic_pane_g4_ParamLimits

0x531a,	// (0x00023803) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0002dc00) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0002dc00) list_single_2graphic_pane_g

0x5326,	// (0x0002380f) list_single_2graphic_pane_t1_ParamLimits

0x5326,	// (0x0002380f) list_single_2graphic_pane_t1

0x5354,	// (0x0002383d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5354,	// (0x0002383d) list_double2_graphic_large_graphic_pane_g1

0x4d2b,	// (0x00023214) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4d2b,	// (0x00023214) list_double2_graphic_large_graphic_pane_g2

0x4d3c,	// (0x00023225) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4d3c,	// (0x00023225) list_double2_graphic_large_graphic_pane_g3

0x5366,	// (0x0002384f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5366,	// (0x0002384f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0002dc09) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0002dc09) list_double2_graphic_large_graphic_pane_g

0x5372,	// (0x0002385b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5372,	// (0x0002385b) list_double2_graphic_large_graphic_pane_t1

0x5388,	// (0x00023871) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5388,	// (0x00023871) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002dc12) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002dc12) list_double2_graphic_large_graphic_pane_t

0x8ec4,	// (0x000273ad) popup_fast_swap_window_ParamLimits

0x8ec4,	// (0x000273ad) popup_fast_swap_window

0x8ee2,	// (0x000273cb) popup_side_volume_key_window

0x8f00,	// (0x000273e9) stacon_top_pane

0x8f0a,	// (0x000273f3) status_pane_ParamLimits

0x8f0a,	// (0x000273f3) status_pane

0x8f18,	// (0x00027401) status_small_pane

0x14c8,	// (0x0001f9b1) control_pane

0x14c8,	// (0x0001f9b1) stacon_bottom_pane

0x3212,	// (0x000216fb) scroll_pane_cp121

0x3209,	// (0x000216f2) set_content_pane

0x8d8a,	// (0x00027273) bg_active_tab_pane_g1_cp1

0x8d93,	// (0x0002727c) bg_active_tab_pane_g2_cp1

0x8d9c,	// (0x00027285) bg_active_tab_pane_g3_cp1

0x8d8a,	// (0x00027273) bg_passive_tab_pane_g1_cp1

0x8d93,	// (0x0002727c) bg_passive_tab_pane_g2_cp1

0x8d9c,	// (0x00027285) bg_passive_tab_pane_g3_cp1

0x8da5,	// (0x0002728e) bg_active_tab_pane_g1_cp2

0x8d93,	// (0x0002727c) bg_active_tab_pane_g2_cp2

0x8dae,	// (0x00027297) bg_active_tab_pane_g3_cp2

0x8da5,	// (0x0002728e) bg_passive_tab_pane_g1_cp2

0x8d93,	// (0x0002727c) bg_passive_tab_pane_g2_cp2

0x8dae,	// (0x00027297) bg_passive_tab_pane_g3_cp2

0x8db7,	// (0x000272a0) bg_active_tab_pane_g1_cp3

0x8d93,	// (0x0002727c) bg_active_tab_pane_g2_cp3

0x8dc0,	// (0x000272a9) bg_active_tab_pane_g3_cp3

0x8db7,	// (0x000272a0) bg_passive_tab_pane_g1_cp3

0x8d93,	// (0x0002727c) bg_passive_tab_pane_g2_cp3

0x8dc0,	// (0x000272a9) bg_passive_tab_pane_g3_cp3

0x8dc9,	// (0x000272b2) bg_active_tab_pane_g1_cp4

0x8d93,	// (0x0002727c) bg_active_tab_pane_g2_cp4

0x8dd4,	// (0x000272bd) bg_active_tab_pane_g3_cp4

0x8dc9,	// (0x000272b2) bg_passive_tab_pane_g1_cp4

0x8d93,	// (0x0002727c) bg_passive_tab_pane_g2_cp4

0x8dd4,	// (0x000272bd) bg_passive_tab_pane_g3_cp4

0x8e1d,	// (0x00027306) bg_active_tab_pane_g1_cp5

0x8d93,	// (0x0002727c) bg_active_tab_pane_g2_cp5

0x8e26,	// (0x0002730f) bg_active_tab_pane_g3_cp5

0x8e1d,	// (0x00027306) bg_passive_tab_pane_g1_cp5

0x8d93,	// (0x0002727c) bg_passive_tab_pane_g2_cp5

0x8e26,	// (0x0002730f) bg_passive_tab_pane_g3_cp5

0x8e2f,	// (0x00027318) list_set_graphic_pane_ParamLimits

0x8e2f,	// (0x00027318) list_set_graphic_pane

0x14c8,	// (0x0001f9b1) bg_set_opt_pane_cp4

0x8e45,	// (0x0002732e) list_set_graphic_pane_g1_ParamLimits

0x8e45,	// (0x0002732e) list_set_graphic_pane_g1

0x8e51,	// (0x0002733a) list_set_graphic_pane_g2_ParamLimits

0x8e51,	// (0x0002733a) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0002dc17) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0002dc17) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0002df93) volume_small_pane_cp_g

0x8e75,	// (0x0002735e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8e75,	// (0x0002735e) list_double2_large_graphic_pane_g1_cp2

0x8e83,	// (0x0002736c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8e83,	// (0x0002736c) list_double2_large_graphic_pane_g2_cp2

0x8e94,	// (0x0002737d) list_double2_large_graphic_pane_g3_cp2

0x8e9c,	// (0x00027385) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8e9c,	// (0x00027385) list_double2_large_graphic_pane_t1_cp2

0x8eb2,	// (0x0002739b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8eb2,	// (0x0002739b) list_double2_large_graphic_pane_t2_cp2

0xaa93,	// (0x00028f7c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaa93,	// (0x00028f7c) list_double_large_graphic_pane_g1_cp2

0xaaa6,	// (0x00028f8f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaaa6,	// (0x00028f8f) list_double_large_graphic_pane_g2_cp2

0x9033,	// (0x0002751c) list_double_large_graphic_pane_g3_cp2

0xaab7,	// (0x00028fa0) list_double_large_graphic_pane_g4_cp

0xaabf,	// (0x00028fa8) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaabf,	// (0x00028fa8) list_double_large_graphic_pane_t1_cp2

0xaad6,	// (0x00028fbf) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaad6,	// (0x00028fbf) list_double_large_graphic_pane_t2_cp2

0x8f23,	// (0x0002740c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f23,	// (0x0002740c) list_double2_graphic_pane_g1_cp2

0x8f31,	// (0x0002741a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f31,	// (0x0002741a) list_double2_graphic_pane_g2_cp2

0x8f42,	// (0x0002742b) list_double2_graphic_pane_g3_cp2

0x8f4c,	// (0x00027435) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8f4c,	// (0x00027435) list_double2_graphic_pane_t1_cp2

0x8f62,	// (0x0002744b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8f62,	// (0x0002744b) list_double2_graphic_pane_t2_cp2

0x8f74,	// (0x0002745d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8f74,	// (0x0002745d) list_single_number_heading_pane_g1_cp2

0x8f80,	// (0x00027469) list_single_number_heading_pane_g2_cp2

0x8f88,	// (0x00027471) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8f88,	// (0x00027471) list_single_number_heading_pane_t1_cp2

0x8f9e,	// (0x00027487) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8f9e,	// (0x00027487) list_single_number_heading_pane_t2_cp2

0x8fb2,	// (0x0002749b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8fb2,	// (0x0002749b) list_single_number_heading_pane_t3_cp2

0x8f74,	// (0x0002745d) list_single_heading_pane_g1_cp2_ParamLimits

0x8f74,	// (0x0002745d) list_single_heading_pane_g1_cp2

0x8f80,	// (0x00027469) list_single_heading_pane_g2_cp2

0x8f88,	// (0x00027471) list_single_heading_pane_t1_cp2_ParamLimits

0x8f88,	// (0x00027471) list_single_heading_pane_t1_cp2

0xa88d,	// (0x00028d76) list_single_heading_pane_t2_cp2_ParamLimits

0xa88d,	// (0x00028d76) list_single_heading_pane_t2_cp2

0xa7d5,	// (0x00028cbe) list_double_graphic_pane_g1_cp2_ParamLimits

0xa7d5,	// (0x00028cbe) list_double_graphic_pane_g1_cp2

0xa7e1,	// (0x00028cca) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7e1,	// (0x00028cca) list_double_graphic_pane_g2_cp2

0xa7f0,	// (0x00028cd9) list_double_graphic_pane_g3_cp2

0xa7f8,	// (0x00028ce1) list_double_graphic_pane_t1_cp2_ParamLimits

0xa7f8,	// (0x00028ce1) list_double_graphic_pane_t1_cp2

0xa80e,	// (0x00028cf7) list_double_graphic_pane_t2_cp2_ParamLimits

0xa80e,	// (0x00028cf7) list_double_graphic_pane_t2_cp2

0x9027,	// (0x00027510) list_double_number_pane_g1_cp2_ParamLimits

0x9027,	// (0x00027510) list_double_number_pane_g1_cp2

0x9033,	// (0x0002751c) list_double_number_pane_g2_cp2

0xa799,	// (0x00028c82) list_double_number_pane_t1_cp2_ParamLimits

0xa799,	// (0x00028c82) list_double_number_pane_t1_cp2

0xa7ad,	// (0x00028c96) list_double_number_pane_t2_cp2_ParamLimits

0xa7ad,	// (0x00028c96) list_double_number_pane_t2_cp2

0xa7c3,	// (0x00028cac) list_double_number_pane_t3_cp2_ParamLimits

0xa7c3,	// (0x00028cac) list_double_number_pane_t3_cp2

0xa682,	// (0x00028b6b) list_single_graphic_pane_g1_cp2_ParamLimits

0xa682,	// (0x00028b6b) list_single_graphic_pane_g1_cp2

0x908d,	// (0x00027576) list_single_graphic_pane_g2_cp2_ParamLimits

0x908d,	// (0x00027576) list_single_graphic_pane_g2_cp2

0x9099,	// (0x00027582) list_single_graphic_pane_g3_cp2

0xa658,	// (0x00028b41) list_single_graphic_pane_t1_cp2_ParamLimits

0xa658,	// (0x00028b41) list_single_graphic_pane_t1_cp2

0x908d,	// (0x00027576) list_single_number_pane_g1_cp2_ParamLimits

0x908d,	// (0x00027576) list_single_number_pane_g1_cp2

0x9099,	// (0x00027582) list_single_number_pane_g2_cp2

0xa658,	// (0x00028b41) list_single_number_pane_t1_cp2_ParamLimits

0xa658,	// (0x00028b41) list_single_number_pane_t1_cp2

0xa66e,	// (0x00028b57) list_single_number_pane_t2_cp2_ParamLimits

0xa66e,	// (0x00028b57) list_single_number_pane_t2_cp2

0x8e83,	// (0x0002736c) list_double2_pane_g1_cp2_ParamLimits

0x8e83,	// (0x0002736c) list_double2_pane_g1_cp2

0x8e94,	// (0x0002737d) list_double2_pane_g2_cp2

0x8fff,	// (0x000274e8) list_double2_pane_t1_cp2_ParamLimits

0x8fff,	// (0x000274e8) list_double2_pane_t1_cp2

0x9015,	// (0x000274fe) list_double2_pane_t2_cp2_ParamLimits

0x9015,	// (0x000274fe) list_double2_pane_t2_cp2

0x9027,	// (0x00027510) list_double_pane_g1_cp2_ParamLimits

0x9027,	// (0x00027510) list_double_pane_g1_cp2

0x9033,	// (0x0002751c) list_double_pane_g2_cp2

0x903b,	// (0x00027524) list_double_pane_t1_cp2_ParamLimits

0x903b,	// (0x00027524) list_double_pane_t1_cp2

0x9051,	// (0x0002753a) list_double_pane_t2_cp2_ParamLimits

0x9051,	// (0x0002753a) list_double_pane_t2_cp2

0x907d,	// (0x00027566) list_single_pane_cp2_g3

0x908d,	// (0x00027576) list_single_pane_g1_cp2_ParamLimits

0x908d,	// (0x00027576) list_single_pane_g1_cp2

0x9099,	// (0x00027582) list_single_pane_g2_cp2

0x90a1,	// (0x0002758a) list_single_pane_t1_cp2_ParamLimits

0x90a1,	// (0x0002758a) list_single_pane_t1_cp2

0x90b9,	// (0x000275a2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x90b9,	// (0x000275a2) list_single_large_graphic_pane_g1_cp2

0x90c7,	// (0x000275b0) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x90c7,	// (0x000275b0) list_single_large_graphic_pane_g2_cp2

0x90d3,	// (0x000275bc) list_single_large_graphic_pane_g3_cp2

0x90db,	// (0x000275c4) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x90db,	// (0x000275c4) list_single_large_graphic_pane_g4_cp1

0x90f5,	// (0x000275de) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90f5,	// (0x000275de) list_single_large_graphic_pane_t1_cp2

0xa622,	// (0x00028b0b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa622,	// (0x00028b0b) list_single_graphic_heading_pane_g1_cp2

0xa5ef,	// (0x00028ad8) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa5ef,	// (0x00028ad8) list_single_graphic_heading_pane_g4_cp2

0x9099,	// (0x00027582) list_single_graphic_heading_pane_g5_cp2

0xa62e,	// (0x00028b17) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa62e,	// (0x00028b17) list_single_graphic_heading_pane_t1_cp2

0xa644,	// (0x00028b2d) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa644,	// (0x00028b2d) list_single_graphic_heading_pane_t2_cp2

0xa5e3,	// (0x00028acc) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5e3,	// (0x00028acc) list_single_2graphic_pane_g1_cp2

0xa5ef,	// (0x00028ad8) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa5ef,	// (0x00028ad8) list_single_2graphic_pane_g2_cp2

0x9099,	// (0x00027582) list_single_2graphic_pane_g3_cp2

0xa600,	// (0x00028ae9) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa600,	// (0x00028ae9) list_single_2graphic_pane_g4_cp2

0xa60c,	// (0x00028af5) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa60c,	// (0x00028af5) list_single_2graphic_pane_t1_cp2

0x14be,	// (0x0001f9a7) list_highlight_pane_g10_cp1

0xa1bb,	// (0x000286a4) list_highlight_pane_g1_cp1

0xa1c3,	// (0x000286ac) list_highlight_pane_g2_cp1

0xa1cb,	// (0x000286b4) list_highlight_pane_g3_cp1

0xa1d3,	// (0x000286bc) list_highlight_pane_g4_cp1

0xa1db,	// (0x000286c4) list_highlight_pane_g5_cp1

0xa1e3,	// (0x000286cc) list_highlight_pane_g6_cp1

0xa1eb,	// (0x000286d4) list_highlight_pane_g7_cp1

0xa1f3,	// (0x000286dc) list_highlight_pane_g8_cp1

0xa1fb,	// (0x000286e4) list_highlight_pane_g9_cp1

0xa0db,	// (0x000285c4) form_field_slider_pane_t3

0xa0e9,	// (0x000285d2) form_field_slider_pane_t4

0xa0f7,	// (0x000285e0) slider_form_pane_ParamLimits

0xa0f7,	// (0x000285e0) slider_form_pane

0x14c8,	// (0x0001f9b1) control_abbreviations

0x14c8,	// (0x0001f9b1) control_conventions

0x14c8,	// (0x0001f9b1) control_definitions

0x14c8,	// (0x0001f9b1) format_table_attribute

0xa8e3,	// (0x00028dcc) bg_popup_preview_window_pane_g9

0x14c8,	// (0x0001f9b1) format_table_data2

0x14c8,	// (0x0001f9b1) format_table_data3

0x14c8,	// (0x0001f9b1) format_table_data_example

0x0008,

0x14c8,	// (0x0001f9b1) intro_purpose

0xf8ca,	// (0x0002ddb3) bg_popup_preview_window_pane_g

0x14c8,	// (0x0001f9b1) texts_category

0x14c8,	// (0x0001f9b1) texts_graphics

0x910b,	// (0x000275f4) text_digital

0x911a,	// (0x00027603) text_primary

0x9129,	// (0x00027612) text_primary_small

0x9138,	// (0x00027621) text_secondary

0x9147,	// (0x00027630) text_title

0xb027,	// (0x00029510) bg_passive_tab_pane_g1_cp3_srt

0x8d93,	// (0x0002727c) bg_passive_tab_pane_g2_cp3_srt

0xb030,	// (0x00029519) bg_passive_tab_pane_g3_cp3_srt

0x1524,	// (0x0001fa0d) bg_active_tab_pane_cp3_srt_ParamLimits

0x1524,	// (0x0001fa0d) bg_active_tab_pane_cp3_srt

0xb039,	// (0x00029522) tabs_4_active_pane_srt_g1

0xb041,	// (0x0002952a) tabs_4_active_pane_srt_t1_ParamLimits

0xb041,	// (0x0002952a) tabs_4_active_pane_srt_t1

0xb027,	// (0x00029510) bg_active_tab_pane_g1_cp3_copy1

0x8d93,	// (0x0002727c) bg_active_tab_pane_g2_cp3_copy1

0xb030,	// (0x00029519) bg_active_tab_pane_g3_cp3_copy1

0x1524,	// (0x0001fa0d) tabs_2_long_active_pane_srt_ParamLimits

0x1524,	// (0x0001fa0d) tabs_2_long_active_pane_srt

0x1524,	// (0x0001fa0d) tabs_2_long_passive_pane_srt_ParamLimits

0x1524,	// (0x0001fa0d) tabs_2_long_passive_pane_srt

0x6648,	// (0x00024b31) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6648,	// (0x00024b31) bg_passive_tab_pane_cp4_srt

0xad1d,	// (0x00029206) bg_passive_tab_pane_g1_cp4_srt

0x8d93,	// (0x0002727c) bg_passive_tab_pane_g2_cp4_srt

0xad26,	// (0x0002920f) bg_passive_tab_pane_g3_cp4_srt

0x6627,	// (0x00024b10) bg_active_tab_pane_cp4_srt_ParamLimits

0x6627,	// (0x00024b10) bg_active_tab_pane_cp4_srt

0xad2f,	// (0x00029218) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad2f,	// (0x00029218) tabs_2_long_active_pane_srt_t1

0xad1d,	// (0x00029206) bg_active_tab_pane_g1_cp4_srt

0x8d93,	// (0x0002727c) bg_active_tab_pane_g2_cp4_srt

0xad26,	// (0x0002920f) bg_active_tab_pane_g3_cp4_srt

0x1516,	// (0x0001f9ff) tabs_3_long_active_pane_srt_ParamLimits

0x1516,	// (0x0001f9ff) tabs_3_long_active_pane_srt

0x1516,	// (0x0001f9ff) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x1516,	// (0x0001f9ff) tabs_3_long_passive_pane_cp_srt

0x1516,	// (0x0001f9ff) tabs_3_long_passive_pane_srt_ParamLimits

0x1516,	// (0x0001f9ff) tabs_3_long_passive_pane_srt

0x6648,	// (0x00024b31) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6648,	// (0x00024b31) bg_passive_tab_pane_cp5_srt

0x8e1d,	// (0x00027306) bg_passive_tab_pane_g1_cp5_srt

0x8d93,	// (0x0002727c) bg_passive_tab_pane_g2_cp5_srt

0x8e26,	// (0x0002730f) bg_passive_tab_pane_g3_cp5_srt

0x6627,	// (0x00024b10) bg_active_tab_pane_cp5_srt_ParamLimits

0x6627,	// (0x00024b10) bg_active_tab_pane_cp5_srt

0xad0b,	// (0x000291f4) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad0b,	// (0x000291f4) tabs_3_long_active_pane_srt_t1

0x8e1d,	// (0x00027306) bg_active_tab_pane_g1_cp5_srt

0x8d93,	// (0x0002727c) bg_active_tab_pane_g2_cp5_srt

0x8e26,	// (0x0002730f) bg_active_tab_pane_g3_cp5_srt

0xacfd,	// (0x000291e6) navi_text_pane_srt_t1

0xacf5,	// (0x000291de) navi_icon_pane_srt_g1

0x931f,	// (0x00027808) midp_editing_number_pane_srt

0x9156,	// (0x0002763f) midp_ticker_pane_srt

0x9327,	// (0x00027810) midp_ticker_pane_srt_g1

0x932f,	// (0x00027818) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0002dc36) midp_ticker_pane_srt_g

0x9337,	// (0x00027820) midp_ticker_pane_srt_t1

0xace6,	// (0x000291cf) midp_editing_number_pane_t1_copy1

0x915e,	// (0x00027647) listscroll_midp_pane

0x915e,	// (0x00027647) midp_form_pane

0x91cd,	// (0x000276b6) midp_info_popup_window_ParamLimits

0x91cd,	// (0x000276b6) midp_info_popup_window

0x6570,	// (0x00024a59) bg_popup_sub_pane_cp50_ParamLimits

0x6570,	// (0x00024a59) bg_popup_sub_pane_cp50

0x9ddd,	// (0x000282c6) listscroll_midp_info_pane_ParamLimits

0x9ddd,	// (0x000282c6) listscroll_midp_info_pane

0x9dbd,	// (0x000282a6) listscroll_form_midp_pane_ParamLimits

0x9dbd,	// (0x000282a6) listscroll_form_midp_pane

0x9dc9,	// (0x000282b2) scroll_bar_cp050

0x9d9d,	// (0x00028286) list_midp_pane

0xbae7,	// (0x00029fd0) signal_pane_g2_cp

0x9cd7,	// (0x000281c0) listscroll_midp_info_pane_t1_ParamLimits

0x9cd7,	// (0x000281c0) listscroll_midp_info_pane_t1

0x9cef,	// (0x000281d8) listscroll_midp_info_pane_t2_ParamLimits

0x9cef,	// (0x000281d8) listscroll_midp_info_pane_t2

0x9d2d,	// (0x00028216) listscroll_midp_info_pane_t3_ParamLimits

0x9d2d,	// (0x00028216) listscroll_midp_info_pane_t3

0x9d67,	// (0x00028250) listscroll_midp_info_pane_t4_ParamLimits

0x9d67,	// (0x00028250) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0002dcee) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0002dcee) listscroll_midp_info_pane_t

0x65d3,	// (0x00024abc) scroll_pane_cp21

0x9c71,	// (0x0002815a) form_midp_field_choice_group_pane

0x9c7a,	// (0x00028163) form_midp_field_text_pane

0x9cbd,	// (0x000281a6) form_midp_field_time_pane

0x9cc5,	// (0x000281ae) form_midp_gauge_slider_pane

0x9cce,	// (0x000281b7) form_midp_gauge_wait_pane

0x14c8,	// (0x0001f9b1) form_midp_image_pane

0x552b,	// (0x00023a14) list_single_midp_pane_ParamLimits

0x552b,	// (0x00023a14) list_single_midp_pane

0x9c35,	// (0x0002811e) form_midp_field_text_pane_t1

0x9a27,	// (0x00027f10) input_focus_pane_cp050

0x9c60,	// (0x00028149) list_midp_form_text_pane

0x9c04,	// (0x000280ed) form_midp_field_choice_group_pane_t1

0x9c12,	// (0x000280fb) input_focus_pane_cp051

0x9c26,	// (0x0002810f) list_midp_choice_pane

0x14c8,	// (0x0001f9b1) status_idle_pane

0x9be8,	// (0x000280d1) form_midp_field_time_pane_t1

0x14be,	// (0x0001f9a7) wait_anim_pane_g2_copy1

0x9bf6,	// (0x000280df) form_midp_field_time_pane_t2

0x0001,

0x927d,	// (0x00027766) aid_navinavi_width_2_pane

0xf800,	// (0x0002dce9) form_midp_field_time_pane_t

0x14c8,	// (0x0001f9b1) input_focus_pane_cp052

0x14c8,	// (0x0001f9b1) bg_input_focus_pane_cp040

0x9ba8,	// (0x00028091) form_midp_gauge_slider_pane_t1

0x9bb6,	// (0x0002809f) form_midp_gauge_slider_pane_t2

0x9bc4,	// (0x000280ad) form_midp_gauge_slider_pane_t3

0x9bd2,	// (0x000280bb) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0002dce0) form_midp_gauge_slider_pane_t

0x9be0,	// (0x000280c9) form_midp_slider_pane

0x1524,	// (0x0001fa0d) bg_input_focus_pane_cp041_ParamLimits

0x1524,	// (0x0001fa0d) bg_input_focus_pane_cp041

0x9b75,	// (0x0002805e) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b75,	// (0x0002805e) form_midp_gauge_wait_pane_t1

0x9b87,	// (0x00028070) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b87,	// (0x00028070) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0002dcdb) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0002dcdb) form_midp_gauge_wait_pane_t

0x9b99,	// (0x00028082) form_midp_wait_pane_ParamLimits

0x9b99,	// (0x00028082) form_midp_wait_pane

0x9b3d,	// (0x00028026) form_midp_image_pane_g1

0x9b46,	// (0x0002802f) form_midp_image_pane_t1

0x9b55,	// (0x0002803e) form_midp_image_pane_t2

0x9b64,	// (0x0002804d) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0002dcd4) form_midp_image_pane_t

0x9b34,	// (0x0002801d) list_single_midp_pane_g1

0x551c,	// (0x00023a05) list_single_midp_pane_t1

0x9b1a,	// (0x00028003) list_midp_form_item_pane_ParamLimits

0x9b1a,	// (0x00028003) list_midp_form_item_pane

0x9225,	// (0x0002770e) list_midp_form_item_pane_t1

0x9234,	// (0x0002771d) midp_ticker_pane_g1

0x9240,	// (0x00027729) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0002dc1c) midp_ticker_pane_g

0x924c,	// (0x00027735) midp_ticker_pane_t1

0xaf53,	// (0x0002943c) midp_editing_number_pane_t1

0xaf31,	// (0x0002941a) midp_editing_number_pane

0xaf40,	// (0x00029429) midp_ticker_pane

0xacd6,	// (0x000291bf) ai_message_heading_pane

0x14c8,	// (0x0001f9b1) bg_popup_window_pane_cp14

0xacde,	// (0x000291c7) listscroll_ai_message_pane

0xac5c,	// (0x00029145) ai_message_heading_pane_g1_ParamLimits

0xac5c,	// (0x00029145) ai_message_heading_pane_g1

0xac68,	// (0x00029151) ai_message_heading_pane_g2_ParamLimits

0xac68,	// (0x00029151) ai_message_heading_pane_g2

0xac76,	// (0x0002915f) ai_message_heading_pane_g3_ParamLimits

0xac76,	// (0x0002915f) ai_message_heading_pane_g3

0xac82,	// (0x0002916b) ai_message_heading_pane_g4_ParamLimits

0xac82,	// (0x0002916b) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0002de15) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0002de15) ai_message_heading_pane_g

0xac8e,	// (0x00029177) ai_message_heading_pane_t1_ParamLimits

0xac8e,	// (0x00029177) ai_message_heading_pane_t1

0xaca8,	// (0x00029191) ai_message_heading_pane_t2_ParamLimits

0xaca8,	// (0x00029191) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0002de1e) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0002de1e) ai_message_heading_pane_t

0xacbc,	// (0x000291a5) bg_popup_heading_pane_cp1_ParamLimits

0xacbc,	// (0x000291a5) bg_popup_heading_pane_cp1

0xac4a,	// (0x00029133) list_ai_message_pane_ParamLimits

0xac4a,	// (0x00029133) list_ai_message_pane

0x65d3,	// (0x00024abc) scroll_pane_cp10

0xabe6,	// (0x000290cf) list_ai_message_pane_g1

0xabee,	// (0x000290d7) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0002ddf2) list_ai_message_pane_g

0xabf6,	// (0x000290df) list_ai_message_pane_t1_ParamLimits

0xabf6,	// (0x000290df) list_ai_message_pane_t1

0xac0b,	// (0x000290f4) list_ai_message_pane_t2_ParamLimits

0xac0b,	// (0x000290f4) list_ai_message_pane_t2

0xac20,	// (0x00029109) list_ai_message_pane_t3_ParamLimits

0xac20,	// (0x00029109) list_ai_message_pane_t3

0xac35,	// (0x0002911e) list_ai_message_pane_t4_ParamLimits

0xac35,	// (0x0002911e) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0002ddf7) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0002ddf7) list_ai_message_pane_t

0xabcf,	// (0x000290b8) cell_ai_soft_ind_pane_ParamLimits

0xabcf,	// (0x000290b8) cell_ai_soft_ind_pane

0x925e,	// (0x00027747) cell_ai_soft_ind_pane_g1_ParamLimits

0x925e,	// (0x00027747) cell_ai_soft_ind_pane_g1

0x14c8,	// (0x0001f9b1) grid_highlight_cp1

0x926b,	// (0x00027754) text_secondary_cp56_ParamLimits

0x926b,	// (0x00027754) text_secondary_cp56

0xaba4,	// (0x0002908d) example_general_pane_ParamLimits

0xaba4,	// (0x0002908d) example_general_pane

0xabb0,	// (0x00029099) example_parent_pane_g1_ParamLimits

0xabb0,	// (0x00029099) example_parent_pane_g1

0xabbc,	// (0x000290a5) example_parent_pane_t1_ParamLimits

0xabbc,	// (0x000290a5) example_parent_pane_t1

0x76d0,	// (0x00025bb9) popup_preview_text_window_ParamLimits

0x76d0,	// (0x00025bb9) popup_preview_text_window

0x9085,	// (0x0002756e) list_single_pane_cp2_g4

0x2dbf,	// (0x000212a8) bg_popup_preview_window_pane_ParamLimits

0x2dbf,	// (0x000212a8) bg_popup_preview_window_pane

0xa8ed,	// (0x00028dd6) popup_preview_text_window_t1_ParamLimits

0xa8ed,	// (0x00028dd6) popup_preview_text_window_t1

0xa90b,	// (0x00028df4) popup_preview_text_window_t2_ParamLimits

0xa90b,	// (0x00028df4) popup_preview_text_window_t2

0xa954,	// (0x00028e3d) popup_preview_text_window_t3_ParamLimits

0xa954,	// (0x00028e3d) popup_preview_text_window_t3

0xa999,	// (0x00028e82) popup_preview_text_window_t4_ParamLimits

0xa999,	// (0x00028e82) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0002ddc6) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0002ddc6) popup_preview_text_window_t

0xaa17,	// (0x00028f00) scroll_pane_cp11

0x99b3,	// (0x00027e9c) bg_popup_preview_window_pane_g1

0xa8a1,	// (0x00028d8a) bg_popup_preview_window_pane_g2

0xa8ab,	// (0x00028d94) bg_popup_preview_window_pane_g3

0xa8b5,	// (0x00028d9e) bg_popup_preview_window_pane_g4

0xa8bf,	// (0x00028da8) bg_popup_preview_window_pane_g5

0xa8c9,	// (0x00028db2) bg_popup_preview_window_pane_g6

0xa8d1,	// (0x00028dba) bg_popup_preview_window_pane_g7

0xa8d9,	// (0x00028dc2) bg_popup_preview_window_pane_g8

0x5d6d,	// (0x00024256) aid_popup_width_pane

0x76ac,	// (0x00025b95) popup_midp_note_alarm_window_ParamLimits

0x76ac,	// (0x00025b95) popup_midp_note_alarm_window

0x327b,	// (0x00021764) data_form_pane_ParamLimits

0x515d,	// (0x00023646) form_field_data_pane_g1

0x5167,	// (0x00023650) form_field_data_pane_t1_ParamLimits

0x3287,	// (0x00021770) input_focus_pane_ParamLimits

0x5181,	// (0x0002366a) data_form_wide_pane_ParamLimits

0x5192,	// (0x0002367b) form_field_data_wide_pane_g1

0x519e,	// (0x00023687) form_field_data_wide_pane_t1_ParamLimits

0x2f7b,	// (0x00021464) input_focus_pane_cp6_ParamLimits

0x657e,	// (0x00024a67) input_popup_find_pane_g1_ParamLimits

0x657e,	// (0x00024a67) input_popup_find_pane_g1

0x6904,	// (0x00024ded) aid_navi_side_left_pane

0x6919,	// (0x00024e02) aid_navi_side_right_pane

0xa2b6,	// (0x0002879f) bg_popup_window_pane_cp30_ParamLimits

0xa2b6,	// (0x0002879f) bg_popup_window_pane_cp30

0xa330,	// (0x00028819) popup_midp_note_alarm_window_g1_ParamLimits

0xa330,	// (0x00028819) popup_midp_note_alarm_window_g1

0xa360,	// (0x00028849) popup_midp_note_alarm_window_t1_ParamLimits

0xa360,	// (0x00028849) popup_midp_note_alarm_window_t1

0xa401,	// (0x000288ea) popup_midp_note_alarm_window_t2_ParamLimits

0xa401,	// (0x000288ea) popup_midp_note_alarm_window_t2

0xa4af,	// (0x00028998) popup_midp_note_alarm_window_t3_ParamLimits

0xa4af,	// (0x00028998) popup_midp_note_alarm_window_t3

0xa4e1,	// (0x000289ca) popup_midp_note_alarm_window_t4_ParamLimits

0xa4e1,	// (0x000289ca) popup_midp_note_alarm_window_t4

0xa507,	// (0x000289f0) popup_midp_note_alarm_window_t5_ParamLimits

0xa507,	// (0x000289f0) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0002dd63) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0002dd63) popup_midp_note_alarm_window_t

0xa5b3,	// (0x00028a9c) wait_bar_pane_cp1_ParamLimits

0xa5b3,	// (0x00028a9c) wait_bar_pane_cp1

0x14c8,	// (0x0001f9b1) wait_anim_pane_copy1

0x14c8,	// (0x0001f9b1) wait_border_pane_copy1

0x9f9b,	// (0x00028484) wait_border_pane_g1_copy1

0x51b8,	// (0x000236a1) form_field_popup_pane_g1

0x51c0,	// (0x000236a9) form_field_popup_pane_t1_ParamLimits

0x3287,	// (0x00021770) input_focus_pane_cp7_ParamLimits

0x32ec,	// (0x000217d5) list_form_pane_ParamLimits

0x51da,	// (0x000236c3) form_field_popup_wide_pane_g1

0x51e2,	// (0x000236cb) form_field_popup_wide_pane_t1_ParamLimits

0x3287,	// (0x00021770) input_focus_pane_cp8_ParamLimits

0x3312,	// (0x000217fb) list_form_wide_pane_ParamLimits

0xb0c2,	// (0x000295ab) aid_size_cell_graphic_pane

0x526e,	// (0x00023757) data_form_pane_t1_ParamLimits

0x5573,	// (0x00023a5c) data_form_wide_pane_t1_ParamLimits

0x956c,	// (0x00027a55) bg_status_flat_pane

0x6192,	// (0x0002467b) title_pane_t1_ParamLimits

0x14de,	// (0x0001f9c7) title_pane_t2_ParamLimits

0x1504,	// (0x0001f9ed) title_pane_t3_ParamLimits

0xf532,	// (0x0002da1b) title_pane_t_ParamLimits

0x6c21,	// (0x0002510a) level_1_signal_ParamLimits

0x6c2e,	// (0x00025117) level_2_signal_ParamLimits

0x6c3b,	// (0x00025124) level_3_signal_ParamLimits

0x6c48,	// (0x00025131) level_4_signal_ParamLimits

0x6c55,	// (0x0002513e) level_5_signal_ParamLimits

0x6c62,	// (0x0002514b) level_6_signal_ParamLimits

0x6c6f,	// (0x00025158) level_7_signal_ParamLimits

0x6c21,	// (0x0002510a) level_1_battery_ParamLimits

0x6c2e,	// (0x00025117) level_2_battery_ParamLimits

0x6c3b,	// (0x00025124) level_3_battery_ParamLimits

0x6c48,	// (0x00025131) level_4_battery_ParamLimits

0x6c55,	// (0x0002513e) level_5_battery_ParamLimits

0x6c62,	// (0x0002514b) level_6_battery_ParamLimits

0x6c6f,	// (0x00025158) level_7_battery_ParamLimits

0xa1bb,	// (0x000286a4) bg_status_flat_pane_g1

0xa1c3,	// (0x000286ac) bg_status_flat_pane_g2

0xa1cb,	// (0x000286b4) bg_status_flat_pane_g3

0xa1d3,	// (0x000286bc) bg_status_flat_pane_g4

0xa1db,	// (0x000286c4) bg_status_flat_pane_g5

0xa1e3,	// (0x000286cc) bg_status_flat_pane_g6

0xa1eb,	// (0x000286d4) bg_status_flat_pane_g7

0x6202,	// (0x000246eb) tabs_3_active_pane_t1_ParamLimits

0x6202,	// (0x000246eb) tabs_3_passive_pane_t1_ParamLimits

0x621c,	// (0x00024705) tabs_4_active_pane_t1_ParamLimits

0x621c,	// (0x00024705) tabs_4_1_passive_pane_t1_ParamLimits

0x6615,	// (0x00024afe) tabs_2_active_pane_t1_ParamLimits

0x6615,	// (0x00024afe) tabs_2_passive_pane_t1_ParamLimits

0x6627,	// (0x00024b10) bg_active_tab_pane_cp4_ParamLimits

0x6635,	// (0x00024b1e) tabs_2_long_active_pane_t1_ParamLimits

0x6648,	// (0x00024b31) bg_passive_tab_pane_cp4_ParamLimits

0x79b4,	// (0x00025e9d) list_single_midp_graphic_pane_t1_ParamLimits

0x6627,	// (0x00024b10) bg_active_tab_pane_cp5_ParamLimits

0x6654,	// (0x00024b3d) tabs_3_long_active_pane_t1_ParamLimits

0x6648,	// (0x00024b31) bg_passive_tab_pane_cp5_ParamLimits

0x79b4,	// (0x00025e9d) list_single_midp_graphic_pane_t1

0x956c,	// (0x00027a55) bg_status_flat_pane_ParamLimits

0x9637,	// (0x00027b20) indicator_pane_cp2_ParamLimits

0x9637,	// (0x00027b20) indicator_pane_cp2

0x977a,	// (0x00027c63) navi_pane_srt_ParamLimits

0x977a,	// (0x00027c63) navi_pane_srt

0x979e,	// (0x00027c87) popup_clock_digital_analogue_window_cp1

0x1582,	// (0x0001fa6b) indicator_pane_t1

0x9156,	// (0x0002763f) copy_highlight_pane

0x9156,	// (0x0002763f) cursor_graphics_pane

0x9156,	// (0x0002763f) graphic_within_text_pane

0x9156,	// (0x0002763f) link_highlight_pane

0xa9da,	// (0x00028ec3) popup_preview_text_window_t5_ParamLimits

0xa9da,	// (0x00028ec3) popup_preview_text_window_t5

0x9287,	// (0x00027770) cursor_digital_pane

0x9287,	// (0x00027770) cursor_primary_pane

0x9298,	// (0x00027781) cursor_primary_small_pane

0x92a0,	// (0x00027789) cursor_secondary_pane

0x92a8,	// (0x00027791) cursor_title_pane

0x9287,	// (0x00027770) link_highlight_digital_pane

0x928f,	// (0x00027778) link_highlight_primary_pane

0x9298,	// (0x00027781) link_highlight_primary_small_pane

0x92a0,	// (0x00027789) link_highlight_secondary_pane

0x92a8,	// (0x00027791) link_highlight_title_pane

0x9287,	// (0x00027770) copy_highlight_digital_pane

0x9287,	// (0x00027770) copy_highlight_primary_pane

0x9298,	// (0x00027781) copy_highlight_primary_small_pane

0x92a0,	// (0x00027789) copy_highlight_secondary_pane

0x92a8,	// (0x00027791) copy_highlight_title_pane

0x92a0,	// (0x00027789) graphic_text_digital_pane

0xa259,	// (0x00028742) graphic_text_primary_pane

0xa262,	// (0x0002874b) graphic_text_primary_small_pane

0x9298,	// (0x00027781) graphic_text_secondary_pane

0x9287,	// (0x00027770) graphic_text_title_pane

0x92b0,	// (0x00027799) cursor_primary_pane_g1

0xa24b,	// (0x00028734) cursor_text_primary_t1

0xa233,	// (0x0002871c) cursor_primary_small_pane_g1

0xa23d,	// (0x00028726) cursor_text_primary_small_t1

0xa21b,	// (0x00028704) cursor_primary_small_pane_g1_copy1

0xa225,	// (0x0002870e) cursor_text_primary_small_t1_copy1

0xa203,	// (0x000286ec) cursor_text_title_t1

0xa211,	// (0x000286fa) cursor_title_pane_g1

0x92b0,	// (0x00027799) cursor_digital_pane_g1

0x92ba,	// (0x000277a3) cursor_text_digital_t1

0x92c8,	// (0x000277b1) link_highlight_primary_pane_g1

0xa1ac,	// (0x00028695) link_highlight_primary_pane_t1

0x92c8,	// (0x000277b1) link_highlight_primary_small_pane_g1

0x92d0,	// (0x000277b9) link_highlight_primary_small_pane_t1

0x92df,	// (0x000277c8) link_highlight_secondary_pane_g1

0x92e7,	// (0x000277d0) link_highlight_secondary_pane_t1

0xa120,	// (0x00028609) link_highlight_title_pane_g1

0xa128,	// (0x00028611) link_highlight_title_pane_t1

0xa109,	// (0x000285f2) link_highlight_digital_pane_g1

0xa111,	// (0x000285fa) link_highlight_digital_pane_t1

0x9fd1,	// (0x000284ba) copy_highlight_primary_pane_g1

0x9fe8,	// (0x000284d1) copy_highlight_primary_pane_t1

0x9fd1,	// (0x000284ba) copy_highlight_primary_small_pane_g1

0x9fd9,	// (0x000284c2) copy_highlight_primary_small_pane_t1

0x92f6,	// (0x000277df) copy_highlight_secondary_pane_g1

0x92fe,	// (0x000277e7) copy_highlight_secondary_pane_t1

0x9fba,	// (0x000284a3) copy_highlight_title_pane_g1

0x9fc2,	// (0x000284ab) copy_highlight_title_pane_t1

0x9fd1,	// (0x000284ba) copy_highlight_digital_pane_g1

0xb294,	// (0x0002977d) copy_highlight_digital_pane_t1

0xb1e8,	// (0x000296d1) graphic_text_primary_pane_g1

0xb278,	// (0x00029761) graphic_text_primary_pane_t1

0xb286,	// (0x0002976f) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0002de92) graphic_text_primary_pane_t

0xb254,	// (0x0002973d) graphic_text_primary_small_pane_g1

0xb25c,	// (0x00029745) graphic_text_primary_small_pane_t1

0xb26a,	// (0x00029753) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0002de8d) graphic_text_primary_small_pane_t

0xb230,	// (0x00029719) graphic_text_secondary_pane_g1

0xb238,	// (0x00029721) graphic_text_secondary_pane_t1

0xb246,	// (0x0002972f) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0002de88) graphic_text_secondary_pane_t

0xb20c,	// (0x000296f5) graphic_text_title_pane_g1

0xb214,	// (0x000296fd) graphic_text_title_pane_t1

0xb222,	// (0x0002970b) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0002de83) graphic_text_title_pane_t

0xb1e8,	// (0x000296d1) graphic_text_digital_pane_g1

0xb1f0,	// (0x000296d9) graphic_text_digital_pane_t1

0xb1fe,	// (0x000296e7) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0002de7e) graphic_text_digital_pane_t

0x1524,	// (0x0001fa0d) navi_icon_pane_srt_ParamLimits

0x1524,	// (0x0001fa0d) navi_icon_pane_srt

0x14c8,	// (0x0001f9b1) navi_midp_pane_srt

0x14c8,	// (0x0001f9b1) navi_navi_pane_srt

0x1524,	// (0x0001fa0d) navi_text_pane_srt_ParamLimits

0x1524,	// (0x0001fa0d) navi_text_pane_srt

0xb1b3,	// (0x0002969c) navi_navi_icon_text_pane_srt

0xb1bb,	// (0x000296a4) navi_navi_pane_srt_g1_ParamLimits

0xb1bb,	// (0x000296a4) navi_navi_pane_srt_g1

0xb1cd,	// (0x000296b6) navi_navi_pane_srt_g2_ParamLimits

0xb1cd,	// (0x000296b6) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0002de79) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0002de79) navi_navi_pane_srt_g

0xb1df,	// (0x000296c8) navi_navi_tabs_pane_srt

0xb1b3,	// (0x0002969c) navi_navi_text_pane_srt

0xb1b3,	// (0x0002969c) navi_navi_volume_pane_srt

0xb1a4,	// (0x0002968d) navi_navi_text_pane_srt_t1

0x7d50,	// (0x00026239) navi_navi_volume_pane_srt_g1

0x7d58,	// (0x00026241) volume_small_pane_srt_ParamLimits

0x7d58,	// (0x00026241) volume_small_pane_srt

0x70f2,	// (0x000255db) volume_small_pane_srt_g1_ParamLimits

0x70f2,	// (0x000255db) volume_small_pane_srt_g1

0x7102,	// (0x000255eb) volume_small_pane_srt_g2_ParamLimits

0x7102,	// (0x000255eb) volume_small_pane_srt_g2

0x7113,	// (0x000255fc) volume_small_pane_srt_g3_ParamLimits

0x7113,	// (0x000255fc) volume_small_pane_srt_g3

0x7124,	// (0x0002560d) volume_small_pane_srt_g4_ParamLimits

0x7124,	// (0x0002560d) volume_small_pane_srt_g4

0x7135,	// (0x0002561e) volume_small_pane_srt_g5_ParamLimits

0x7135,	// (0x0002561e) volume_small_pane_srt_g5

0x7146,	// (0x0002562f) volume_small_pane_srt_g6_ParamLimits

0x7146,	// (0x0002562f) volume_small_pane_srt_g6

0x7157,	// (0x00025640) volume_small_pane_srt_g7_ParamLimits

0x7157,	// (0x00025640) volume_small_pane_srt_g7

0x7168,	// (0x00025651) volume_small_pane_srt_g8_ParamLimits

0x7168,	// (0x00025651) volume_small_pane_srt_g8

0x7179,	// (0x00025662) volume_small_pane_srt_g9_ParamLimits

0x7179,	// (0x00025662) volume_small_pane_srt_g9

0x718a,	// (0x00025673) volume_small_pane_srt_g10_ParamLimits

0x718a,	// (0x00025673) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002dc21) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002dc21) volume_small_pane_srt_g

0x2e74,	// (0x0002135d) query_popup_data_pane_cp2

0xb18a,	// (0x00029673) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb18a,	// (0x00029673) navi_navi_icon_text_pane_srt_t1

0xa259,	// (0x00028742) navi_tabs_2_long_pane_srt

0xa259,	// (0x00028742) navi_tabs_2_pane_srt

0xa259,	// (0x00028742) navi_tabs_3_long_pane_srt

0xa259,	// (0x00028742) navi_tabs_3_pane_srt

0xa259,	// (0x00028742) navi_tabs_4_pane_srt

0x7d30,	// (0x00026219) tabs_2_active_pane_srt_ParamLimits

0x7d30,	// (0x00026219) tabs_2_active_pane_srt

0x7d40,	// (0x00026229) tabs_2_passive_pane_srt_ParamLimits

0x7d40,	// (0x00026229) tabs_2_passive_pane_srt

0x947d,	// (0x00027966) bg_passive_tab_pane_cp1_srt_ParamLimits

0x947d,	// (0x00027966) bg_passive_tab_pane_cp1_srt

0xb156,	// (0x0002963f) bg_passive_tab_pane_g1_cp1_srt

0x8d93,	// (0x0002727c) bg_passive_tab_pane_g2_cp1_srt

0xb15f,	// (0x00029648) bg_passive_tab_pane_g3_cp1_srt

0x1524,	// (0x0001fa0d) bg_active_tab_pane_cp1_srt_ParamLimits

0x1524,	// (0x0001fa0d) bg_active_tab_pane_cp1_srt

0xb168,	// (0x00029651) tabs_2_active_pane_srt_g1

0xb170,	// (0x00029659) tabs_2_active_pane_srt_t1_ParamLimits

0xb170,	// (0x00029659) tabs_2_active_pane_srt_t1

0xb156,	// (0x0002963f) bg_active_tab_pane_g1_cp1_srt

0x8d93,	// (0x0002727c) bg_active_tab_pane_g2_cp1_srt

0xb15f,	// (0x00029648) bg_active_tab_pane_g3_cp1_srt

0x7cfd,	// (0x000261e6) tabs_3_active_pane_srt_ParamLimits

0x7cfd,	// (0x000261e6) tabs_3_active_pane_srt

0x7d0e,	// (0x000261f7) tabs_3_passive_pane_cp_srt_ParamLimits

0x7d0e,	// (0x000261f7) tabs_3_passive_pane_cp_srt

0x7d1f,	// (0x00026208) tabs_3_passive_pane_srt_ParamLimits

0x7d1f,	// (0x00026208) tabs_3_passive_pane_srt

0x947d,	// (0x00027966) bg_passive_tab_pane_cp2_srt_ParamLimits

0x947d,	// (0x00027966) bg_passive_tab_pane_cp2_srt

0x930d,	// (0x000277f6) bg_passive_tab_pane_g1_cp2_srt

0x8d93,	// (0x0002727c) bg_passive_tab_pane_g2_cp2_srt

0x9316,	// (0x000277ff) bg_passive_tab_pane_g3_cp2_srt

0x1524,	// (0x0001fa0d) bg_active_tab_pane_cp2_srt_ParamLimits

0x1524,	// (0x0001fa0d) bg_active_tab_pane_cp2_srt

0xb13c,	// (0x00029625) tabs_3_active_pane_srt_g1

0xb144,	// (0x0002962d) tabs_3_active_pane_srt_t1_ParamLimits

0xb144,	// (0x0002962d) tabs_3_active_pane_srt_t1

0x930d,	// (0x000277f6) bg_active_tab_pane_g1_cp2_srt

0x8d93,	// (0x0002727c) bg_active_tab_pane_g2_cp2_srt

0x9316,	// (0x000277ff) bg_active_tab_pane_g3_cp2_srt

0x7cb5,	// (0x0002619e) tabs_4_active_pane_srt_ParamLimits

0x7cb5,	// (0x0002619e) tabs_4_active_pane_srt

0x7cc7,	// (0x000261b0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7cc7,	// (0x000261b0) tabs_4_passive_pane_cp2_srt

0x7309,	// (0x000257f2) aid_size_cell_toolbar

0x6648,	// (0x00024b31) main_idle_act_pane_ParamLimits

0x74d2,	// (0x000259bb) popup_large_graphic_colour_window_ParamLimits

0x7879,	// (0x00025d62) popup_toolbar_window_ParamLimits

0x7879,	// (0x00025d62) popup_toolbar_window

0xaf79,	// (0x00029462) list_single_graphic_2heading_pane_ParamLimits

0xaf79,	// (0x00029462) list_single_graphic_2heading_pane

0x6992,	// (0x00024e7b) aid_size_cell_apps_grid_lsc_pane

0x69a4,	// (0x00024e8d) aid_size_cell_apps_grid_prt_pane

0x947d,	// (0x00027966) bg_wml_button_pane_cp1_ParamLimits

0x947d,	// (0x00027966) bg_wml_button_pane_cp1

0x9c35,	// (0x0002811e) form_midp_field_text_pane_t1_ParamLimits

0x9a27,	// (0x00027f10) input_focus_pane_cp050_ParamLimits

0x9c60,	// (0x00028149) list_midp_form_text_pane_ParamLimits

0x9c12,	// (0x000280fb) input_focus_pane_cp051_ParamLimits

0x9c26,	// (0x0002810f) list_midp_choice_pane_ParamLimits

0x9ae0,	// (0x00027fc9) list_single_2graphic_pane_cp3_ParamLimits

0x9ae0,	// (0x00027fc9) list_single_2graphic_pane_cp3

0x9af6,	// (0x00027fdf) list_single_midp_graphic_pane_ParamLimits

0x9af6,	// (0x00027fdf) list_single_midp_graphic_pane

0x53c6,	// (0x000238af) list_single_graphic_2heading_pane_g1_ParamLimits

0x53c6,	// (0x000238af) list_single_graphic_2heading_pane_g1

0x53d2,	// (0x000238bb) list_single_graphic_2heading_pane_g4_ParamLimits

0x53d2,	// (0x000238bb) list_single_graphic_2heading_pane_g4

0x53de,	// (0x000238c7) list_single_graphic_2heading_pane_g5_ParamLimits

0x53de,	// (0x000238c7) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0002dc74) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0002dc74) list_single_graphic_2heading_pane_g

0x53ea,	// (0x000238d3) list_single_graphic_2heading_pane_t1_ParamLimits

0x53ea,	// (0x000238d3) list_single_graphic_2heading_pane_t1

0x53fe,	// (0x000238e7) list_single_graphic_2heading_pane_t2_ParamLimits

0x53fe,	// (0x000238e7) list_single_graphic_2heading_pane_t2

0x541a,	// (0x00023903) list_single_graphic_2heading_pane_t3_ParamLimits

0x541a,	// (0x00023903) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0002dc7b) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0002dc7b) list_single_graphic_2heading_pane_t

0x98f1,	// (0x00027dda) bg_popup_sub_pane_cp2

0x991b,	// (0x00027e04) grid_toobar_pane

0x7938,	// (0x00025e21) cell_toolbar_pane_ParamLimits

0x7938,	// (0x00025e21) cell_toolbar_pane

0x9957,	// (0x00027e40) cell_toolbar_pane_g1_ParamLimits

0x9957,	// (0x00027e40) cell_toolbar_pane_g1

0x996b,	// (0x00027e54) cell_toolbar_pane_g2_ParamLimits

0x996b,	// (0x00027e54) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0002dc89) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0002dc89) cell_toolbar_pane_g

0x998d,	// (0x00027e76) grid_highlight_pane_cp2_ParamLimits

0x998d,	// (0x00027e76) grid_highlight_pane_cp2

0x99a7,	// (0x00027e90) toolbar_button_pane

0x99b3,	// (0x00027e9c) toolbar_button_pane_g1

0x99bb,	// (0x00027ea4) toolbar_button_pane_g2

0x99c3,	// (0x00027eac) toolbar_button_pane_g3

0x99cb,	// (0x00027eb4) toolbar_button_pane_g4

0x99d3,	// (0x00027ebc) toolbar_button_pane_g5

0x99db,	// (0x00027ec4) toolbar_button_pane_g6

0x99e3,	// (0x00027ecc) toolbar_button_pane_g7

0x99eb,	// (0x00027ed4) toolbar_button_pane_g8

0x99f3,	// (0x00027edc) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0002dc8e) toolbar_button_pane_g

0x7970,	// (0x00025e59) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7970,	// (0x00025e59) list_single_2graphic_pane_g1_cp3

0x797c,	// (0x00025e65) list_single_2graphic_pane_g2_cp3_ParamLimits

0x797c,	// (0x00025e65) list_single_2graphic_pane_g2_cp3

0x8f80,	// (0x00027469) list_single_2graphic_pane_g3_cp3

0x798d,	// (0x00025e76) list_single_2graphic_pane_g4_cp3_ParamLimits

0x798d,	// (0x00025e76) list_single_2graphic_pane_g4_cp3

0x7999,	// (0x00025e82) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7999,	// (0x00025e82) list_single_2graphic_pane_t1_cp3

0x8f74,	// (0x0002745d) list_single_midp_graphic_pane_g2_ParamLimits

0x8f74,	// (0x0002745d) list_single_midp_graphic_pane_g2

0x7311,	// (0x000257fa) aid_zoom_text_primary

0x539a,	// (0x00023883) aid_zoom_text_secondary

0x93c7,	// (0x000278b0) status_small_pane_g7_ParamLimits

0x93c7,	// (0x000278b0) status_small_pane_g7

0x93ea,	// (0x000278d3) status_small_pane_t1_ParamLimits

0x616d,	// (0x00024656) title_pane_g2

0x0003,

0xf529,	// (0x0002da12) title_pane_g

0x63d6,	// (0x000248bf) aid_size_cell_colour_1_pane_ParamLimits

0x63d6,	// (0x000248bf) aid_size_cell_colour_1_pane

0x63ea,	// (0x000248d3) aid_size_cell_colour_2_pane_ParamLimits

0x63ea,	// (0x000248d3) aid_size_cell_colour_2_pane

0x63fe,	// (0x000248e7) aid_size_cell_colour_3_pane_ParamLimits

0x63fe,	// (0x000248e7) aid_size_cell_colour_3_pane

0x6412,	// (0x000248fb) aid_size_cell_colour_4_pane_ParamLimits

0x6412,	// (0x000248fb) aid_size_cell_colour_4_pane

0x680b,	// (0x00024cf4) title_pane_stacon_g1_ParamLimits

0x680b,	// (0x00024cf4) title_pane_stacon_g1

0xa03f,	// (0x00028528) popup_note_wait_window_g3_ParamLimits

0xa03f,	// (0x00028528) popup_note_wait_window_g3

0xa0b6,	// (0x0002859f) popup_note_wait_window_t5_ParamLimits

0xa0b6,	// (0x0002859f) popup_note_wait_window_t5

0x14c8,	// (0x0001f9b1) main_feb_china_hwr_fs_writing_pane

0x7397,	// (0x00025880) popup_feb_china_hwr_fs_window_ParamLimits

0x7397,	// (0x00025880) popup_feb_china_hwr_fs_window

0x79ca,	// (0x00025eb3) aid_size_cell_hwr_fs_ParamLimits

0x79ca,	// (0x00025eb3) aid_size_cell_hwr_fs

0x9a27,	// (0x00027f10) bg_popup_sub_pane_cp3_ParamLimits

0x9a27,	// (0x00027f10) bg_popup_sub_pane_cp3

0x79df,	// (0x00025ec8) grid_hwr_fs_pane_ParamLimits

0x79df,	// (0x00025ec8) grid_hwr_fs_pane

0x79f7,	// (0x00025ee0) linegrid_hwr_fs_pane_ParamLimits

0x79f7,	// (0x00025ee0) linegrid_hwr_fs_pane

0x7a07,	// (0x00025ef0) cell_hwr_fs_pane_ParamLimits

0x7a07,	// (0x00025ef0) cell_hwr_fs_pane

0x9a33,	// (0x00027f1c) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a33,	// (0x00027f1c) linegrid_hwr_fs_pane_g1

0x9a3f,	// (0x00027f28) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a3f,	// (0x00027f28) linegrid_hwr_fs_pane_g2

0x9a51,	// (0x00027f3a) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a51,	// (0x00027f3a) linegrid_hwr_fs_pane_g3

0x7a2b,	// (0x00025f14) linegrid_hwr_fs_pane_g4_ParamLimits

0x7a2b,	// (0x00025f14) linegrid_hwr_fs_pane_g4

0x7a49,	// (0x00025f32) linegrid_hwr_fs_pane_g5_ParamLimits

0x7a49,	// (0x00025f32) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0002dcb9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0002dcb9) linegrid_hwr_fs_pane_g

0x9a5d,	// (0x00027f46) cell_hwr_fs_pane_g1_ParamLimits

0x9a5d,	// (0x00027f46) cell_hwr_fs_pane_g1

0x982c,	// (0x00027d15) cell_hwr_fs_pane_g2_ParamLimits

0x982c,	// (0x00027d15) cell_hwr_fs_pane_g2

0x9a73,	// (0x00027f5c) cell_hwr_fs_pane_g3_ParamLimits

0x9a73,	// (0x00027f5c) cell_hwr_fs_pane_g3

0x9a80,	// (0x00027f69) cell_hwr_fs_pane_g4_ParamLimits

0x9a80,	// (0x00027f69) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0002dcc4) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0002dcc4) cell_hwr_fs_pane_g

0x7a5f,	// (0x00025f48) cell_hwr_fs_pane_t1

0x14c8,	// (0x0001f9b1) grid_highlight_pane_cp6

0x14c8,	// (0x0001f9b1) main_idle_act2_pane

0x65ba,	// (0x00024aa3) aid_inside_area_popup_secondary

0xa6ef,	// (0x00028bd8) aid_inside_area_window_primary_ParamLimits

0xa6ef,	// (0x00028bd8) aid_inside_area_window_primary

0xb2a3,	// (0x0002978c) ai2_news_ticker_pane

0xb2ab,	// (0x00029794) aid_size_cell_ai1_link_ParamLimits

0xb2ab,	// (0x00029794) aid_size_cell_ai1_link

0xb2c5,	// (0x000297ae) popup_ai2_data_window_ParamLimits

0xb2c5,	// (0x000297ae) popup_ai2_data_window

0xb2e3,	// (0x000297cc) popup_ai2_link_window_ParamLimits

0xb2e3,	// (0x000297cc) popup_ai2_link_window

0x9a27,	// (0x00027f10) bg_popup_sub_pane_cp4_ParamLimits

0x9a27,	// (0x00027f10) bg_popup_sub_pane_cp4

0xb2f9,	// (0x000297e2) grid_ai2_link_pane_ParamLimits

0xb2f9,	// (0x000297e2) grid_ai2_link_pane

0xb310,	// (0x000297f9) popup_ai2_link_window_g1_ParamLimits

0xb310,	// (0x000297f9) popup_ai2_link_window_g1

0xb31c,	// (0x00029805) popup_ai2_link_window_g2_ParamLimits

0xb31c,	// (0x00029805) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0002de97) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0002de97) popup_ai2_link_window_g

0xb32d,	// (0x00029816) ai2_mp_button_pane

0xb335,	// (0x0002981e) ai2_mp_volume_pane

0x9c12,	// (0x000280fb) bg_popup_sub_pane_cp5_ParamLimits

0x9c12,	// (0x000280fb) bg_popup_sub_pane_cp5

0xb33d,	// (0x00029826) heading_ai2_gene_pane_ParamLimits

0xb33d,	// (0x00029826) heading_ai2_gene_pane

0xb349,	// (0x00029832) list_ai2_gene_pane_ParamLimits

0xb349,	// (0x00029832) list_ai2_gene_pane

0xb391,	// (0x0002987a) cell_ai2_link_pane_ParamLimits

0xb391,	// (0x0002987a) cell_ai2_link_pane

0xb3a7,	// (0x00029890) cell_ai2_link_pane_g1

0x14c8,	// (0x0001f9b1) grid_highlight_pane_cp7

0x7d6d,	// (0x00026256) ai2_mp_volume_pane_g1

0xb47a,	// (0x00029963) ai2_mp_volume_pane_g2

0xb3ef,	// (0x000298d8) list_ai2_gene_pane_t1

0xb482,	// (0x0002996b) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0002deb0) ai2_mp_volume_pane_g

0x7d75,	// (0x0002625e) volume_small_pane_cp3

0xb48a,	// (0x00029973) aid_size_cell_ai2_button

0xb492,	// (0x0002997b) grid_ai2_button_pane

0xb49b,	// (0x00029984) cell_ai2_button_pane_ParamLimits

0xb49b,	// (0x00029984) cell_ai2_button_pane

0x14be,	// (0x0001f9a7) cell_ai2_button_pane_g1

0x14c8,	// (0x0001f9b1) grid_highlight_pane_cp8

0xb43a,	// (0x00029923) ai2_gene_pane_t1_ParamLimits

0xb43a,	// (0x00029923) ai2_gene_pane_t1

0x72ff,	// (0x000257e8) aid_height_parent_landscape

0xad7f,	// (0x00029268) aid_height_set_list

0xad90,	// (0x00029279) aid_size_parent

0xb0c2,	// (0x000295ab) aid_size_cell_graphic_pane_ParamLimits

0xb359,	// (0x00029842) popup_ai2_data_window_g1_ParamLimits

0xb359,	// (0x00029842) popup_ai2_data_window_g1

0xb365,	// (0x0002984e) ai2_news_ticker_pane_g1

0xb36d,	// (0x00029856) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0002de9c) ai2_news_ticker_pane_g

0xb375,	// (0x0002985e) ai2_news_ticker_pane_t1

0xb383,	// (0x0002986c) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0002dea1) ai2_news_ticker_pane_t

0xb3b0,	// (0x00029899) heading_ai2_gene_pane_g1

0xb3b8,	// (0x000298a1) heading_ai2_gene_pane_t1_ParamLimits

0xb3b8,	// (0x000298a1) heading_ai2_gene_pane_t1

0xb3cd,	// (0x000298b6) list_highlight_pane_cp6

0xb3d5,	// (0x000298be) ai2_gene_pane_ParamLimits

0xb3d5,	// (0x000298be) ai2_gene_pane

0xb3fd,	// (0x000298e6) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0002dea6) list_ai2_gene_pane_t

0xb40b,	// (0x000298f4) list_highlight_pane_cp8_ParamLimits

0xb40b,	// (0x000298f4) list_highlight_pane_cp8

0xb41c,	// (0x00029905) ai2_gene_pane_g1_ParamLimits

0xb41c,	// (0x00029905) ai2_gene_pane_g1

0xb42e,	// (0x00029917) ai2_gene_pane_g2_ParamLimits

0xb42e,	// (0x00029917) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0002deab) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0002deab) ai2_gene_pane_g

0x3196,	// (0x0002167f) scroll_pane_cp12

0x72bc,	// (0x000257a5) control_pane_t3_ParamLimits

0x72bc,	// (0x000257a5) control_pane_t3

0x93db,	// (0x000278c4) status_small_pane_g8_ParamLimits

0x93db,	// (0x000278c4) status_small_pane_g8

0x7495,	// (0x0002597e) popup_find_window_ParamLimits

0x76c2,	// (0x00025bab) popup_note_image_window_ParamLimits

0x5432,	// (0x0002391b) list_double2_graphic_pane_vc_g1_ParamLimits

0x5432,	// (0x0002391b) list_double2_graphic_pane_vc_g1

0x543e,	// (0x00023927) list_double2_graphic_pane_vc_g2_ParamLimits

0x543e,	// (0x00023927) list_double2_graphic_pane_vc_g2

0x544a,	// (0x00023933) list_double2_graphic_pane_vc_g3_ParamLimits

0x544a,	// (0x00023933) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0002dc82) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0002dc82) list_double2_graphic_pane_vc_g

0x5456,	// (0x0002393f) list_double2_graphic_pane_vc_t1_ParamLimits

0x5456,	// (0x0002393f) list_double2_graphic_pane_vc_t1

0x53d2,	// (0x000238bb) list_single_heading_pane_vc_g1_ParamLimits

0x53d2,	// (0x000238bb) list_single_heading_pane_vc_g1

0x53de,	// (0x000238c7) list_single_heading_pane_vc_g2_ParamLimits

0x53de,	// (0x000238c7) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002dca3) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002dca3) list_single_heading_pane_vc_g

0x546c,	// (0x00023955) list_single_heading_pane_vc_t1_ParamLimits

0x546c,	// (0x00023955) list_single_heading_pane_vc_t1

0x5482,	// (0x0002396b) list_single_heading_pane_vc_t2_ParamLimits

0x5482,	// (0x0002396b) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0002dca8) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0002dca8) list_single_heading_pane_vc_t

0x5494,	// (0x0002397d) list_setting_number_pane_vc_g1_ParamLimits

0x5494,	// (0x0002397d) list_setting_number_pane_vc_g1

0x54a0,	// (0x00023989) list_setting_number_pane_vc_g2_ParamLimits

0x54a0,	// (0x00023989) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002dcad) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002dcad) list_setting_number_pane_vc_g

0x54ac,	// (0x00023995) list_setting_number_pane_vc_t1_ParamLimits

0x54ac,	// (0x00023995) list_setting_number_pane_vc_t1

0x54c0,	// (0x000239a9) list_setting_number_pane_vc_t2_ParamLimits

0x54c0,	// (0x000239a9) list_setting_number_pane_vc_t2

0x54dc,	// (0x000239c5) list_setting_number_pane_vc_t3_ParamLimits

0x54dc,	// (0x000239c5) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0002dcb2) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0002dcb2) list_setting_number_pane_vc_t

0x550a,	// (0x000239f3) set_value_pane_vc_ParamLimits

0x550a,	// (0x000239f3) set_value_pane_vc

0xaf79,	// (0x00029462) list_double2_graphic_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_double2_graphic_pane_vc

0xaf79,	// (0x00029462) list_double2_large_graphic_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_double2_large_graphic_pane_vc

0xaf79,	// (0x00029462) list_double2_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_double2_pane_vc

0xaf79,	// (0x00029462) list_double_graphic_heading_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_double_graphic_heading_pane_vc

0xaf79,	// (0x00029462) list_double_graphic_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_double_graphic_pane_vc

0xaf79,	// (0x00029462) list_double_heading_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_double_heading_pane_vc

0x55b7,	// (0x00023aa0) list_double_large_graphic_pane_vc_ParamLimits

0x55b7,	// (0x00023aa0) list_double_large_graphic_pane_vc

0xaf79,	// (0x00029462) list_double_number_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_double_number_pane_vc

0xaf79,	// (0x00029462) list_double_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_double_pane_vc

0xaf79,	// (0x00029462) list_double_time_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_double_time_pane_vc

0xaf79,	// (0x00029462) list_setting_number_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_setting_number_pane_vc

0xaf79,	// (0x00029462) list_setting_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_setting_pane_vc

0xaf79,	// (0x00029462) list_single_graphic_heading_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_single_graphic_heading_pane_vc

0xaf79,	// (0x00029462) list_single_heading_pane_vc_ParamLimits

0xaf79,	// (0x00029462) list_single_heading_pane_vc

0x55dc,	// (0x00023ac5) list_single_number_heading_pane_vc_ParamLimits

0x55dc,	// (0x00023ac5) list_single_number_heading_pane_vc

0x5432,	// (0x0002391b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5432,	// (0x0002391b) list_double_graphic_heading_pane_vc_g1

0x53d2,	// (0x000238bb) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x53d2,	// (0x000238bb) list_double_graphic_heading_pane_vc_g2

0x53de,	// (0x000238c7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x53de,	// (0x000238c7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0002deb7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0002deb7) list_double_graphic_heading_pane_vc_g

0x563b,	// (0x00023b24) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x563b,	// (0x00023b24) list_double_graphic_heading_pane_vc_t1

0x5651,	// (0x00023b3a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5651,	// (0x00023b3a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0002debe) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0002debe) list_double_graphic_heading_pane_vc_t

0x5494,	// (0x0002397d) list_setting_pane_vc_g1_ParamLimits

0x5494,	// (0x0002397d) list_setting_pane_vc_g1

0x54a0,	// (0x00023989) list_setting_pane_vc_g2_ParamLimits

0x54a0,	// (0x00023989) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002dcad) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002dcad) list_setting_pane_vc_g

0x566f,	// (0x00023b58) list_setting_pane_vc_t1_ParamLimits

0x566f,	// (0x00023b58) list_setting_pane_vc_t1

0x568b,	// (0x00023b74) list_setting_pane_vc_t2_ParamLimits

0x568b,	// (0x00023b74) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0002deec) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0002deec) list_setting_pane_vc_t

0x550a,	// (0x000239f3) set_value_pane_cp_vc_ParamLimits

0x550a,	// (0x000239f3) set_value_pane_cp_vc

0x53d2,	// (0x000238bb) list_single_number_heading_pane_vc_g1_ParamLimits

0x53d2,	// (0x000238bb) list_single_number_heading_pane_vc_g1

0x53de,	// (0x000238c7) list_single_number_heading_pane_vc_g2_ParamLimits

0x53de,	// (0x000238c7) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002dca3) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002dca3) list_single_number_heading_pane_vc_g

0x56a7,	// (0x00023b90) list_single_number_heading_pane_vc_t1_ParamLimits

0x56a7,	// (0x00023b90) list_single_number_heading_pane_vc_t1

0x56bd,	// (0x00023ba6) list_single_number_heading_pane_vc_t2_ParamLimits

0x56bd,	// (0x00023ba6) list_single_number_heading_pane_vc_t2

0x56cf,	// (0x00023bb8) list_single_number_heading_pane_vc_t3_ParamLimits

0x56cf,	// (0x00023bb8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0002def1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0002def1) list_single_number_heading_pane_vc_t

0x5432,	// (0x0002391b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5432,	// (0x0002391b) list_single_graphic_heading_pane_vc_g1

0x53d2,	// (0x000238bb) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x53d2,	// (0x000238bb) list_single_graphic_heading_pane_vc_g4

0x53de,	// (0x000238c7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x53de,	// (0x000238c7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ce,	// (0x0002deb7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0002deb7) list_single_graphic_heading_pane_vc_g

0x56a7,	// (0x00023b90) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x56a7,	// (0x00023b90) list_single_graphic_heading_pane_vc_t1

0x56e1,	// (0x00023bca) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x56e1,	// (0x00023bca) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0f,	// (0x0002def8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0002def8) list_single_graphic_heading_pane_vc_t

0x53d2,	// (0x000238bb) list_double2_pane_vc_g1_ParamLimits

0x53d2,	// (0x000238bb) list_double2_pane_vc_g1

0x53de,	// (0x000238c7) list_double2_pane_vc_g2_ParamLimits

0x53de,	// (0x000238c7) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002dca3) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002dca3) list_double2_pane_vc_g

0x56f3,	// (0x00023bdc) list_double2_pane_vc_t1_ParamLimits

0x56f3,	// (0x00023bdc) list_double2_pane_vc_t1

0x5709,	// (0x00023bf2) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5709,	// (0x00023bf2) list_double2_large_graphic_pane_vc_g1

0x53d2,	// (0x000238bb) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x53d2,	// (0x000238bb) list_double2_large_graphic_pane_vc_g2

0x53de,	// (0x000238c7) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x53de,	// (0x000238c7) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa14,	// (0x0002defd) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa14,	// (0x0002defd) list_double2_large_graphic_pane_vc_g

0x5715,	// (0x00023bfe) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5715,	// (0x00023bfe) list_double2_large_graphic_pane_vc_t1

0x572b,	// (0x00023c14) list_double_time_pane_vc_g1_ParamLimits

0x572b,	// (0x00023c14) list_double_time_pane_vc_g1

0x5737,	// (0x00023c20) list_double_time_pane_vc_g2_ParamLimits

0x5737,	// (0x00023c20) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0002df04) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0002df04) list_double_time_pane_vc_g

0x5743,	// (0x00023c2c) list_double_time_pane_vc_t1_ParamLimits

0x5743,	// (0x00023c2c) list_double_time_pane_vc_t1

0x576d,	// (0x00023c56) list_double_time_pane_vc_t2_ParamLimits

0x576d,	// (0x00023c56) list_double_time_pane_vc_t2

0x57b6,	// (0x00023c9f) list_double_time_pane_vc_t3_ParamLimits

0x57b6,	// (0x00023c9f) list_double_time_pane_vc_t3

0x57c8,	// (0x00023cb1) list_double_time_pane_vc_t4_ParamLimits

0x57c8,	// (0x00023cb1) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0002df09) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0002df09) list_double_time_pane_vc_t

0x53d2,	// (0x000238bb) list_double_pane_vc_g1_ParamLimits

0x53d2,	// (0x000238bb) list_double_pane_vc_g1

0x53de,	// (0x000238c7) list_double_pane_vc_g2_ParamLimits

0x53de,	// (0x000238c7) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002dca3) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002dca3) list_double_pane_vc_g

0x57dc,	// (0x00023cc5) list_double_pane_vc_t1_ParamLimits

0x57dc,	// (0x00023cc5) list_double_pane_vc_t1

0x57f0,	// (0x00023cd9) list_double_pane_vc_t2_ParamLimits

0x57f0,	// (0x00023cd9) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0002df12) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0002df12) list_double_pane_vc_t

0x53d2,	// (0x000238bb) list_double_number_pane_vc_g1_ParamLimits

0x53d2,	// (0x000238bb) list_double_number_pane_vc_g1

0x53de,	// (0x000238c7) list_double_number_pane_vc_g2_ParamLimits

0x53de,	// (0x000238c7) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002dca3) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002dca3) list_double_number_pane_vc_g

0x5806,	// (0x00023cef) list_double_number_pane_vc_t1_ParamLimits

0x5806,	// (0x00023cef) list_double_number_pane_vc_t1

0x5818,	// (0x00023d01) list_double_number_pane_vc_t2_ParamLimits

0x5818,	// (0x00023d01) list_double_number_pane_vc_t2

0x57f0,	// (0x00023cd9) list_double_number_pane_vc_t3_ParamLimits

0x57f0,	// (0x00023cd9) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0002df17) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002df17) list_double_number_pane_vc_t

0x582c,	// (0x00023d15) list_double_large_graphic_pane_vc_g1_ParamLimits

0x582c,	// (0x00023d15) list_double_large_graphic_pane_vc_g1

0x5848,	// (0x00023d31) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5848,	// (0x00023d31) list_double_large_graphic_pane_vc_g2

0x585c,	// (0x00023d45) list_double_large_graphic_pane_vc_g3_ParamLimits

0x585c,	// (0x00023d45) list_double_large_graphic_pane_vc_g3

0x586b,	// (0x00023d54) list_double_large_graphic_pane_vc_g4_ParamLimits

0x586b,	// (0x00023d54) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0002df1e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0002df1e) list_double_large_graphic_pane_vc_g

0x587a,	// (0x00023d63) list_double_large_graphic_pane_vc_t1_ParamLimits

0x587a,	// (0x00023d63) list_double_large_graphic_pane_vc_t1

0x5896,	// (0x00023d7f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5896,	// (0x00023d7f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0002df27) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002df27) list_double_large_graphic_pane_vc_t

0x53d2,	// (0x000238bb) list_double_heading_pane_vc_g1_ParamLimits

0x53d2,	// (0x000238bb) list_double_heading_pane_vc_g1

0x53de,	// (0x000238c7) list_double_heading_pane_vc_g2_ParamLimits

0x53de,	// (0x000238c7) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002dca3) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002dca3) list_double_heading_pane_vc_g

0x58b6,	// (0x00023d9f) list_double_heading_pane_vc_t1_ParamLimits

0x58b6,	// (0x00023d9f) list_double_heading_pane_vc_t1

0x58c8,	// (0x00023db1) list_double_heading_pane_vc_t2_ParamLimits

0x58c8,	// (0x00023db1) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0002df2c) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0002df2c) list_double_heading_pane_vc_t

0x58e0,	// (0x00023dc9) list_double_graphic_pane_vc_g1_ParamLimits

0x58e0,	// (0x00023dc9) list_double_graphic_pane_vc_g1

0x58f3,	// (0x00023ddc) list_double_graphic_pane_vc_g2_ParamLimits

0x58f3,	// (0x00023ddc) list_double_graphic_pane_vc_g2

0x53d2,	// (0x000238bb) list_double_graphic_pane_vc_g3_ParamLimits

0x53d2,	// (0x000238bb) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0002df31) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0002df31) list_double_graphic_pane_vc_g

0x5910,	// (0x00023df9) list_double_graphic_pane_vc_t1_ParamLimits

0x5910,	// (0x00023df9) list_double_graphic_pane_vc_t1

0x593a,	// (0x00023e23) list_double_graphic_pane_vc_t2_ParamLimits

0x593a,	// (0x00023e23) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0002df3a) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0002df3a) list_double_graphic_pane_vc_t

0x5d79,	// (0x00024262) aid_size_cell_fastswap

0x5d81,	// (0x0002426a) aid_size_cell_touch_ParamLimits

0x5d81,	// (0x0002426a) aid_size_cell_touch

0x5fe2,	// (0x000244cb) popup_fast_swap_wide_window_ParamLimits

0x5fe2,	// (0x000244cb) popup_fast_swap_wide_window

0x6100,	// (0x000245e9) touch_pane_ParamLimits

0x6100,	// (0x000245e9) touch_pane

0x321b,	// (0x00021704) button_value_adjust_pane_cp2

0x50a1,	// (0x0002358a) button_value_adjust_pane_cp4

0x50c7,	// (0x000235b0) form_field_data_pane_cp2

0x50ea,	// (0x000235d3) form_field_data_wide_pane_cp2

0x6a78,	// (0x00024f61) bg_scroll_pane_ParamLimits

0x6a97,	// (0x00024f80) scroll_handle_pane_ParamLimits

0x6aab,	// (0x00024f94) scroll_sc2_down_pane_ParamLimits

0x6aab,	// (0x00024f94) scroll_sc2_down_pane

0x6ad2,	// (0x00024fbb) scroll_sc2_up_pane_ParamLimits

0x6ad2,	// (0x00024fbb) scroll_sc2_up_pane

0xbbcf,	// (0x0002a0b8) grid_wheel_folder_pane_g1_ParamLimits

0xbbcf,	// (0x0002a0b8) grid_wheel_folder_pane_g1

0x708a,	// (0x00025573) clock_nsta_pane_cp2_ParamLimits

0x708a,	// (0x00025573) clock_nsta_pane_cp2

0x915e,	// (0x00027647) listscroll_midp_pane_ParamLimits

0x916a,	// (0x00027653) midp_canvas_pane

0x9455,	// (0x0002793e) nsta_clock_indic_pane

0x9489,	// (0x00027972) listscroll_form_pane_vc

0x9491,	// (0x0002797a) listscroll_set_pane_vc_ParamLimits

0x9491,	// (0x0002797a) listscroll_set_pane_vc

0x9588,	// (0x00027a71) clock_nsta_pane

0x9605,	// (0x00027aee) indicator_nsta_pane

0x98f1,	// (0x00027dda) bg_popup_sub_pane_cp2_ParamLimits

0x9905,	// (0x00027dee) find_pane_cp2_ParamLimits

0x9905,	// (0x00027dee) find_pane_cp2

0x991b,	// (0x00027e04) grid_toobar_pane_ParamLimits

0x99fb,	// (0x00027ee4) list_form_gen_pane_vc_ParamLimits

0x99fb,	// (0x00027ee4) list_form_gen_pane_vc

0x9a11,	// (0x00027efa) scroll_pane_cp8_vc_ParamLimits

0x9a11,	// (0x00027efa) scroll_pane_cp8_vc

0x9a8d,	// (0x00027f76) data_form_wide_pane_vc_ParamLimits

0x9a8d,	// (0x00027f76) data_form_wide_pane_vc

0x9a99,	// (0x00027f82) form_field_data_wide_pane_vc_g1

0x9aa1,	// (0x00027f8a) form_field_data_wide_pane_vc_t1_ParamLimits

0x9aa1,	// (0x00027f8a) form_field_data_wide_pane_vc_t1

0x3287,	// (0x00021770) input_focus_pane_cp6_vc_ParamLimits

0x3287,	// (0x00021770) input_focus_pane_cp6_vc

0x9d9d,	// (0x00028286) list_midp_pane_ParamLimits

0x9da9,	// (0x00028292) scroll_pane_cp16_ParamLimits

0x9da9,	// (0x00028292) scroll_pane_cp16

0x9e13,	// (0x000282fc) button_value_adjust_pane_ParamLimits

0x9e13,	// (0x000282fc) button_value_adjust_pane

0xada2,	// (0x0002928b) button_value_adjust_pane_cp6_ParamLimits

0xada2,	// (0x0002928b) button_value_adjust_pane_cp6

0xaeea,	// (0x000293d3) settings_code_pane_cp_ParamLimits

0xaeea,	// (0x000293d3) settings_code_pane_cp

0x14be,	// (0x0001f9a7) cell_touch_pane_g1

0x14be,	// (0x0001f9a7) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0002dbc7) cell_touch_pane_g

0xb4ad,	// (0x00029996) cell_touch_pane_cp_ParamLimits

0xb4ad,	// (0x00029996) cell_touch_pane_cp

0xb4bd,	// (0x000299a6) cell_touch_pane_ParamLimits

0xb4bd,	// (0x000299a6) cell_touch_pane

0x14be,	// (0x0001f9a7) scroll_sc2_down_pane_g1

0x14be,	// (0x0001f9a7) scroll_sc2_up_pane_g1

0x14c8,	// (0x0001f9b1) bg_set_opt_pane_cp4_vc

0xb4ce,	// (0x000299b7) list_set_graphic_pane_vc_g1_ParamLimits

0xb4ce,	// (0x000299b7) list_set_graphic_pane_vc_g1

0xb4da,	// (0x000299c3) list_set_graphic_pane_vc_g2_ParamLimits

0xb4da,	// (0x000299c3) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0002dec3) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0002dec3) list_set_graphic_pane_vc_g

0xb4e6,	// (0x000299cf) text_primary_small_cp13_vc_ParamLimits

0xb4e6,	// (0x000299cf) text_primary_small_cp13_vc

0xb4fe,	// (0x000299e7) list_set_graphic_pane_vc_ParamLimits

0xb4fe,	// (0x000299e7) list_set_graphic_pane_vc

0x14c8,	// (0x0001f9b1) input_focus_pane_cp2_vc

0x14be,	// (0x0001f9a7) setting_code_pane_vc_g1

0x153b,	// (0x0001fa24) setting_code_pane_vc_t1

0xb511,	// (0x000299fa) set_text_pane_vc_t1_ParamLimits

0xb511,	// (0x000299fa) set_text_pane_vc_t1

0x14c8,	// (0x0001f9b1) input_focus_pane_cp1_vc

0xb532,	// (0x00029a1b) list_set_text_pane_vc

0x14be,	// (0x0001f9a7) setting_text_pane_vc_g1

0x14c8,	// (0x0001f9b1) bg_set_opt_pane_cp2_vc

0x1532,	// (0x0001fa1b) setting_slider_graphic_pane_vc_g1

0xb53c,	// (0x00029a25) setting_slider_graphic_pane_vc_t1

0xb54e,	// (0x00029a37) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0002dec8) setting_slider_graphic_pane_vc_t

0xb560,	// (0x00029a49) slider_set_pane_cp_vc

0xb56a,	// (0x00029a53) slider_set_pane_vc_g1

0xb573,	// (0x00029a5c) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0002decd) slider_set_pane_vc_g

0x3342,	// (0x0002182b) set_opt_bg_pane_g1_copy1

0x334a,	// (0x00021833) set_opt_bg_pane_g2_copy1

0xb59f,	// (0x00029a88) set_opt_bg_pane_g3_copy1

0x335a,	// (0x00021843) set_opt_bg_pane_g4_copy1

0x3362,	// (0x0002184b) set_opt_bg_pane_g5_copy1

0x336a,	// (0x00021853) set_opt_bg_pane_g6_copy1

0xb5a9,	// (0x00029a92) set_opt_bg_pane_g7_copy1

0xb5b3,	// (0x00029a9c) set_opt_bg_pane_g8_copy1

0xb5bd,	// (0x00029aa6) set_opt_bg_pane_g9_copy1

0x14c8,	// (0x0001f9b1) bg_set_opt_pane_cp_vc

0xb5c7,	// (0x00029ab0) setting_slider_pane_vc_t1

0xb5d6,	// (0x00029abf) setting_slider_pane_vc_t2

0xb5e8,	// (0x00029ad1) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0002dedc) setting_slider_pane_vc_t

0xb5fa,	// (0x00029ae3) slider_set_pane_vc

0x7a6d,	// (0x00025f56) volume_set_pane_vc_g1

0x7a76,	// (0x00025f5f) volume_set_pane_vc_g2

0x7a7f,	// (0x00025f68) volume_set_pane_vc_g3

0x7a88,	// (0x00025f71) volume_set_pane_vc_g4

0x7a91,	// (0x00025f7a) volume_set_pane_vc_g5

0x7a9a,	// (0x00025f83) volume_set_pane_vc_g6

0x7aa3,	// (0x00025f8c) volume_set_pane_vc_g7

0x7aac,	// (0x00025f95) volume_set_pane_vc_g8

0x7ab5,	// (0x00025f9e) volume_set_pane_vc_g9

0x7abe,	// (0x00025fa7) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0002dd7a) volume_set_pane_vc_g

0xb604,	// (0x00029aed) volume_set_pane_vc

0xb60e,	// (0x00029af7) button_value_adjust_pane_cp1_vc

0xb618,	// (0x00029b01) list_highlight_pane_cp2_vc

0xb621,	// (0x00029b0a) list_set_pane_vc_ParamLimits

0xb621,	// (0x00029b0a) list_set_pane_vc

0xb68f,	// (0x00029b78) main_pane_set_vc_t1_ParamLimits

0xb68f,	// (0x00029b78) main_pane_set_vc_t1

0xb6a4,	// (0x00029b8d) main_pane_set_vc_t2_ParamLimits

0xb6a4,	// (0x00029b8d) main_pane_set_vc_t2

0xb6b6,	// (0x00029b9f) main_pane_set_vc_t3_ParamLimits

0xb6b6,	// (0x00029b9f) main_pane_set_vc_t3

0xb6ca,	// (0x00029bb3) main_pane_set_vc_t4_ParamLimits

0xb6ca,	// (0x00029bb3) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0002dee3) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0002dee3) main_pane_set_vc_t

0xb6de,	// (0x00029bc7) setting_code_pane_vc_ParamLimits

0xb6de,	// (0x00029bc7) setting_code_pane_vc

0xb6ef,	// (0x00029bd8) setting_slider_graphic_pane_vc

0xb6ef,	// (0x00029bd8) setting_slider_pane_vc

0xb6ef,	// (0x00029bd8) setting_text_pane_vc

0xb6ef,	// (0x00029bd8) setting_volume_pane_vc

0xb6f9,	// (0x00029be2) scroll_pane_cp121_vc

0x3209,	// (0x000216f2) set_content_pane_vc

0xb701,	// (0x00029bea) button_value_adjust_pane_g1

0xb70a,	// (0x00029bf3) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0002df3f) button_value_adjust_pane_g

0xb713,	// (0x00029bfc) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb713,	// (0x00029bfc) form_field_slider_wide_pane_vc_t1

0xb725,	// (0x00029c0e) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb725,	// (0x00029c0e) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0002df44) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002df44) form_field_slider_wide_pane_vc_t

0x1516,	// (0x0001f9ff) input_focus_pane_cp10_vc_ParamLimits

0x1516,	// (0x0001f9ff) input_focus_pane_cp10_vc

0xb751,	// (0x00029c3a) slider_cont_pane_cp1_vc_ParamLimits

0xb751,	// (0x00029c3a) slider_cont_pane_cp1_vc

0xb763,	// (0x00029c4c) slider_form_pane_g1_cp2

0xb573,	// (0x00029a5c) slider_form_pane_g2_cp2

0xb790,	// (0x00029c79) form_field_slider_pane_vc_t3

0xb79e,	// (0x00029c87) form_field_slider_pane_vc_t4

0xb7ac,	// (0x00029c95) slider_form_pane_vc_ParamLimits

0xb7ac,	// (0x00029c95) slider_form_pane_vc

0xb7b9,	// (0x00029ca2) form_field_slider_pane_vc_t1_ParamLimits

0xb7b9,	// (0x00029ca2) form_field_slider_pane_vc_t1

0xb725,	// (0x00029c0e) form_field_slider_pane_vc_t2_ParamLimits

0xb725,	// (0x00029c0e) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0002df56) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002df56) form_field_slider_pane_vc_t

0x1516,	// (0x0001f9ff) input_focus_pane_cp9_vc_ParamLimits

0x1516,	// (0x0001f9ff) input_focus_pane_cp9_vc

0xb7cf,	// (0x00029cb8) slider_cont_pane_vc_ParamLimits

0xb7cf,	// (0x00029cb8) slider_cont_pane_vc

0xb7e3,	// (0x00029ccc) list_form_graphic_pane_cp_vc_ParamLimits

0xb7e3,	// (0x00029ccc) list_form_graphic_pane_cp_vc

0x9a99,	// (0x00027f82) form_field_popup_wide_pane_vc_g1

0xb7f8,	// (0x00029ce1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7f8,	// (0x00029ce1) form_field_popup_wide_pane_vc_t1

0x3287,	// (0x00021770) input_focus_pane_cp8_vc_ParamLimits

0x3287,	// (0x00021770) input_focus_pane_cp8_vc

0xb83d,	// (0x00029d26) list_form_wide_pane_vc_ParamLimits

0xb83d,	// (0x00029d26) list_form_wide_pane_vc

0xb849,	// (0x00029d32) list_form_graphic_pane_vc_g1

0xb851,	// (0x00029d3a) list_form_graphic_pane_vc_t1_ParamLimits

0xb851,	// (0x00029d3a) list_form_graphic_pane_vc_t1

0x1524,	// (0x0001fa0d) list_highlight_pane_cp5_vc_ParamLimits

0x1524,	// (0x0001fa0d) list_highlight_pane_cp5_vc

0xb879,	// (0x00029d62) list_form_graphic_pane_vc_ParamLimits

0xb879,	// (0x00029d62) list_form_graphic_pane_vc

0x9a99,	// (0x00027f82) form_field_popup_pane_vc_g1

0xb88f,	// (0x00029d78) form_field_popup_pane_vc_t1_ParamLimits

0xb88f,	// (0x00029d78) form_field_popup_pane_vc_t1

0x3287,	// (0x00021770) input_focus_pane_cp7_vc_ParamLimits

0x3287,	// (0x00021770) input_focus_pane_cp7_vc

0xb8a6,	// (0x00029d8f) list_form_pane_vc_ParamLimits

0xb8a6,	// (0x00029d8f) list_form_pane_vc

0xb8b2,	// (0x00029d9b) data_form_pane_vc_t1_ParamLimits

0xb8b2,	// (0x00029d9b) data_form_pane_vc_t1

0x3342,	// (0x0002182b) input_focus_pane_vc_g1

0x334a,	// (0x00021833) input_focus_pane_vc_g2

0x3352,	// (0x0002183b) input_focus_pane_vc_g3

0x335a,	// (0x00021843) input_focus_pane_vc_g4

0x3362,	// (0x0002184b) input_focus_pane_vc_g5

0x336a,	// (0x00021853) input_focus_pane_vc_g6

0x3372,	// (0x0002185b) input_focus_pane_vc_g7

0x337a,	// (0x00021863) input_focus_pane_vc_g8

0x3382,	// (0x0002186b) input_focus_pane_vc_g9

0x14be,	// (0x0001f9a7) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002db50) input_focus_pane_vc_g

0x9a8d,	// (0x00027f76) data_form_pane_vc_ParamLimits

0x9a8d,	// (0x00027f76) data_form_pane_vc

0x9a99,	// (0x00027f82) form_field_data_pane_vc_g1

0xb8cf,	// (0x00029db8) form_field_data_pane_vc_t1_ParamLimits

0xb8cf,	// (0x00029db8) form_field_data_pane_vc_t1

0x3287,	// (0x00021770) input_focus_pane_vc_ParamLimits

0x3287,	// (0x00021770) input_focus_pane_vc

0xb8e9,	// (0x00029dd2) button_value_adjust_pane_cp3_vc

0xb8f1,	// (0x00029dda) button_value_adjust_pane_cp5_vc

0xb8f9,	// (0x00029de2) form_field_data_pane_vc_ParamLimits

0xb8f9,	// (0x00029de2) form_field_data_pane_vc

0xb914,	// (0x00029dfd) form_field_data_pane_vc_cp2

0xb91c,	// (0x00029e05) form_field_data_wide_pane_vc_ParamLimits

0xb91c,	// (0x00029e05) form_field_data_wide_pane_vc

0xb936,	// (0x00029e1f) form_field_data_wide_pane_vc_cp2

0xb93e,	// (0x00029e27) form_field_popup_pane_vc_ParamLimits

0xb93e,	// (0x00029e27) form_field_popup_pane_vc

0xb959,	// (0x00029e42) form_field_popup_wide_pane_vc_ParamLimits

0xb959,	// (0x00029e42) form_field_popup_wide_pane_vc

0xb973,	// (0x00029e5c) form_field_slider_pane_vc_ParamLimits

0xb973,	// (0x00029e5c) form_field_slider_pane_vc

0xb986,	// (0x00029e6f) form_field_slider_wide_pane_vc_ParamLimits

0xb986,	// (0x00029e6f) form_field_slider_wide_pane_vc

0xb999,	// (0x00029e82) grid_touch_1_pane_ParamLimits

0xb999,	// (0x00029e82) grid_touch_1_pane

0xb9a5,	// (0x00029e8e) grid_touch_2_pane_ParamLimits

0xb9a5,	// (0x00029e8e) grid_touch_2_pane

0x9420,	// (0x00027909) touch_pane_g1_ParamLimits

0x9420,	// (0x00027909) touch_pane_g1

0xb9bf,	// (0x00029ea8) cell_app_pane_cp_wide_ParamLimits

0xb9bf,	// (0x00029ea8) cell_app_pane_cp_wide

0xb9d0,	// (0x00029eb9) grid_popup_fast_wide_pane_ParamLimits

0xb9d0,	// (0x00029eb9) grid_popup_fast_wide_pane

0xb9e4,	// (0x00029ecd) scroll_pane_cp19_ParamLimits

0xb9e4,	// (0x00029ecd) scroll_pane_cp19

0x14c8,	// (0x0001f9b1) bg_popup_window_pane_cp20

0xb9f8,	// (0x00029ee1) listscroll_popup_fast_wide_pane

0xba00,	// (0x00029ee9) grid_indicator_nsta_pane

0xba12,	// (0x00029efb) clock_nsta_pane_g1

0xba1b,	// (0x00029f04) clock_nsta_pane_t1

0xba37,	// (0x00029f20) cell_indicator_nsta_pane_ParamLimits

0xba37,	// (0x00029f20) cell_indicator_nsta_pane

0xba6c,	// (0x00029f55) cell_indicator_nsta_pane_g1

0xba7a,	// (0x00029f63) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0002df67) cell_indicator_nsta_pane_g

0xba8d,	// (0x00029f76) clock_nsta_pane_cp

0xba96,	// (0x00029f7f) indicator_nsta_pane_cp

0xbaa0,	// (0x00029f89) nsta_clock_indic_pane_g1

0x157a,	// (0x0001fa63) grid_indicator_pane

0x6bc4,	// (0x000250ad) scroll_pane_cp29

0x6fd9,	// (0x000254c2) indicator_nsta_pane_cp2_ParamLimits

0x6fd9,	// (0x000254c2) indicator_nsta_pane_cp2

0x1524,	// (0x0001fa0d) main_apps_wheel_pane

0x9c7a,	// (0x00028163) form_midp_field_text_pane_ParamLimits

0x9dc9,	// (0x000282b2) scroll_bar_cp050_ParamLimits

0xbaf9,	// (0x00029fe2) cell_indicator_pane_ParamLimits

0xbaf9,	// (0x00029fe2) cell_indicator_pane

0xbb11,	// (0x00029ffa) cell_indicator_pane_g1

0xbb1b,	// (0x0002a004) grid_wheel_folder_pane_ParamLimits

0xbb1b,	// (0x0002a004) grid_wheel_folder_pane

0xbb2f,	// (0x0002a018) list_wheel_apps_pane_ParamLimits

0xbb2f,	// (0x0002a018) list_wheel_apps_pane

0xbb42,	// (0x0002a02b) main_apps_wheel_pane_g1_ParamLimits

0xbb42,	// (0x0002a02b) main_apps_wheel_pane_g1

0xbb5e,	// (0x0002a047) main_apps_wheel_pane_g2_ParamLimits

0xbb5e,	// (0x0002a047) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0002df83) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0002df83) main_apps_wheel_pane_g

0xbb7a,	// (0x0002a063) main_apps_wheel_pane_t1_ParamLimits

0xbb7a,	// (0x0002a063) main_apps_wheel_pane_t1

0xbba3,	// (0x0002a08c) list_wheel_apps_pane_g1

0xbbab,	// (0x0002a094) list_wheel_apps_pane_g2

0xbbb3,	// (0x0002a09c) list_wheel_apps_pane_g3

0xbbbb,	// (0x0002a0a4) list_wheel_apps_pane_g4

0xbbc5,	// (0x0002a0ae) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0002df88) list_wheel_apps_pane_g

0x8fd2,	// (0x000274bb) navi_icon_text_pane

0x94b9,	// (0x000279a2) aid_fill_nsta

0xbbe6,	// (0x0002a0cf) navi_icon_text_pane_g1

0xbbf2,	// (0x0002a0db) navi_icon_text_pane_t1

0x8e5d,	// (0x00027346) list_set_graphic_pane_t1_ParamLimits

0x8e5d,	// (0x00027346) list_set_graphic_pane_t1

0xa536,	// (0x00028a1f) popup_midp_note_alarm_window_t6_ParamLimits

0xa536,	// (0x00028a1f) popup_midp_note_alarm_window_t6

0xa548,	// (0x00028a31) popup_midp_note_alarm_window_t7_ParamLimits

0xa548,	// (0x00028a31) popup_midp_note_alarm_window_t7

0xa55a,	// (0x00028a43) popup_midp_note_alarm_window_t8_ParamLimits

0xa55a,	// (0x00028a43) popup_midp_note_alarm_window_t8

0xa56c,	// (0x00028a55) popup_midp_note_alarm_window_t9_ParamLimits

0xa56c,	// (0x00028a55) popup_midp_note_alarm_window_t9

0xa57e,	// (0x00028a67) popup_midp_note_alarm_window_t10_ParamLimits

0xa57e,	// (0x00028a67) popup_midp_note_alarm_window_t10

0xa590,	// (0x00028a79) popup_midp_note_alarm_window_t11_ParamLimits

0xa590,	// (0x00028a79) popup_midp_note_alarm_window_t11

0xa5a2,	// (0x00028a8b) scroll_pane_cp17_ParamLimits

0xa5a2,	// (0x00028a8b) scroll_pane_cp17

0x7a6d,	// (0x00025f56) volume_small_pane_cp_g1

0x7d7e,	// (0x00026267) volume_small_pane_cp_g2

0x7d87,	// (0x00026270) volume_small_pane_cp_g3

0x7d90,	// (0x00026279) volume_small_pane_cp_g4

0x7d99,	// (0x00026282) volume_small_pane_cp_g5

0x7da2,	// (0x0002628b) volume_small_pane_cp_g6

0x7dab,	// (0x00026294) volume_small_pane_cp_g7

0x7db4,	// (0x0002629d) volume_small_pane_cp_g8

0x7dbd,	// (0x000262a6) volume_small_pane_cp_g9

0x7dc6,	// (0x000262af) volume_small_pane_cp_g10

0x9234,	// (0x0002771d) midp_ticker_pane_g1_ParamLimits

0x9240,	// (0x00027729) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0002dc1c) midp_ticker_pane_g_ParamLimits

0x924c,	// (0x00027735) midp_ticker_pane_t1_ParamLimits

0x94cf,	// (0x000279b8) aid_fill_nsta_2

0x9db5,	// (0x0002829e) list_form2_midp_pane

0xaf31,	// (0x0002941a) midp_editing_number_pane_ParamLimits

0xaf40,	// (0x00029429) midp_ticker_pane_ParamLimits

0xbc04,	// (0x0002a0ed) form2_midp_field_pane

0xbc28,	// (0x0002a111) scroll_pane_cp51

0xbc48,	// (0x0002a131) form2_midp_button_pane_ParamLimits

0xbc48,	// (0x0002a131) form2_midp_button_pane

0xbc5a,	// (0x0002a143) form2_midp_content_pane_ParamLimits

0xbc5a,	// (0x0002a143) form2_midp_content_pane

0xbc74,	// (0x0002a15d) form2_midp_field_choice_group_pane

0xbc7c,	// (0x0002a165) form2_midp_field_pane_g1

0xbc84,	// (0x0002a16d) form2_midp_field_pane_g2

0xbc8c,	// (0x0002a175) form2_midp_field_pane_g3

0xbc94,	// (0x0002a17d) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0002dfad) form2_midp_field_pane_g

0xbc9c,	// (0x0002a185) form2_midp_gauge_slider_pane

0xbca4,	// (0x0002a18d) form2_midp_gauge_wait_pane

0xbcac,	// (0x0002a195) form2_midp_image_pane_ParamLimits

0xbcac,	// (0x0002a195) form2_midp_image_pane

0xbcc7,	// (0x0002a1b0) form2_midp_label_pane_ParamLimits

0xbcc7,	// (0x0002a1b0) form2_midp_label_pane

0xbce6,	// (0x0002a1cf) form2_midp_label_pane_cp_ParamLimits

0xbce6,	// (0x0002a1cf) form2_midp_label_pane_cp

0xbd07,	// (0x0002a1f0) form2_midp_string_pane_ParamLimits

0xbd07,	// (0x0002a1f0) form2_midp_string_pane

0x5958,	// (0x00023e41) form2_midp_text_pane_ParamLimits

0x5958,	// (0x00023e41) form2_midp_text_pane

0xbd19,	// (0x0002a202) form2_midp_time_pane

0xbd29,	// (0x0002a212) input_focus_pane_cp51_ParamLimits

0xbd29,	// (0x0002a212) input_focus_pane_cp51

0xbd41,	// (0x0002a22a) form2_midp_label_pane_t1_ParamLimits

0xbd41,	// (0x0002a22a) form2_midp_label_pane_t1

0x5979,	// (0x00023e62) form2_mdip_text_pane_t1_ParamLimits

0x5979,	// (0x00023e62) form2_mdip_text_pane_t1

0x599d,	// (0x00023e86) form2_midp_time_pane_t1

0xbd8f,	// (0x0002a278) form2_midp_gauge_slider_pane_t1

0xbda1,	// (0x0002a28a) form2_midp_gauge_slider_pane_t2

0xbdb3,	// (0x0002a29c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0002dfb6) form2_midp_gauge_slider_pane_t

0xbdc5,	// (0x0002a2ae) form2_midp_slider_pane

0xbdd1,	// (0x0002a2ba) form2_midp_gauge_wait_pane_t1

0xbddf,	// (0x0002a2c8) form2_midp_wait_pane_ParamLimits

0xbddf,	// (0x0002a2c8) form2_midp_wait_pane

0xbe0a,	// (0x0002a2f3) list_single_2graphic_pane_cp4_ParamLimits

0xbe0a,	// (0x0002a2f3) list_single_2graphic_pane_cp4

0x9af6,	// (0x00027fdf) list_single_midp_graphic_pane_cp_ParamLimits

0x9af6,	// (0x00027fdf) list_single_midp_graphic_pane_cp

0x14c8,	// (0x0001f9b1) list_highlight_pane_cp20

0xbe23,	// (0x0002a30c) list_single_2graphic_pane_g1_cp4

0xb3b0,	// (0x00029899) list_single_2graphic_pane_g2_cp4

0xbe2b,	// (0x0002a314) list_single_2graphic_pane_t1_cp4

0x1524,	// (0x0001fa0d) list_highlight_pane_cp21

0xbe3a,	// (0x0002a323) list_single_midp_graphic_pane_g4_cp

0xbe49,	// (0x0002a332) list_single_midp_graphic_pane_t1_cp

0xbe5e,	// (0x0002a347) form2_mdip_string_pane_t1_ParamLimits

0xbe5e,	// (0x0002a347) form2_mdip_string_pane_t1

0x14c8,	// (0x0001f9b1) bg_wml_button_pane_cp2

0x14be,	// (0x0001f9a7) form2_midp_image_pane_g1

0x4e94,	// (0x0002337d) list_double_large_graphic_pane_g5_ParamLimits

0x4e94,	// (0x0002337d) list_double_large_graphic_pane_g5

0x915e,	// (0x00027647) midp_form_pane_ParamLimits

0x1524,	// (0x0001fa0d) main_apps_wheel_pane_ParamLimits

0x76ea,	// (0x00025bd3) popup_preview_window_ParamLimits

0x76ea,	// (0x00025bd3) popup_preview_window

0x78d1,	// (0x00025dba) popup_touch_info_window_ParamLimits

0x78d1,	// (0x00025dba) popup_touch_info_window

0x78f3,	// (0x00025ddc) popup_touch_menu_window_ParamLimits

0x78f3,	// (0x00025ddc) popup_touch_menu_window

0x14b4,	// (0x0001f99d) bg_popup_sub_pane_cp6

0xbefa,	// (0x0002a3e3) list_touch_menu_pane

0xbf02,	// (0x0002a3eb) list_single_touch_menu_pane_ParamLimits

0xbf02,	// (0x0002a3eb) list_single_touch_menu_pane

0xbf1a,	// (0x0002a403) list_single_touch_menu_pane_t1

0x1524,	// (0x0001fa0d) bg_popup_sub_pane_cp7_ParamLimits

0x1524,	// (0x0001fa0d) bg_popup_sub_pane_cp7

0xbf28,	// (0x0002a411) heading_sub_pane

0xbf30,	// (0x0002a419) list_touch_info_pane_ParamLimits

0xbf30,	// (0x0002a419) list_touch_info_pane

0xbf3f,	// (0x0002a428) list_single_touch_info_pane_ParamLimits

0xbf3f,	// (0x0002a428) list_single_touch_info_pane

0xbf51,	// (0x0002a43a) list_single_touch_info_pane_t1

0xbf5f,	// (0x0002a448) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0002dfc4) list_single_touch_info_pane_t

0x9156,	// (0x0002763f) bg_popup_heading_pane_cp

0xbf6d,	// (0x0002a456) heading_sub_pane_t1

0x9a27,	// (0x00027f10) bg_popup_preview_window_pane_cp_ParamLimits

0x9a27,	// (0x00027f10) bg_popup_preview_window_pane_cp

0xbf28,	// (0x0002a411) heading_preview_pane

0xbf30,	// (0x0002a419) list_preview_pane_ParamLimits

0xbf30,	// (0x0002a419) list_preview_pane

0xbf7b,	// (0x0002a464) popup_preview_window_g1

0xbf3f,	// (0x0002a428) list_single_preview_pane_ParamLimits

0xbf3f,	// (0x0002a428) list_single_preview_pane

0xbf83,	// (0x0002a46c) list_single_preview_pane_g1

0xbf8b,	// (0x0002a474) list_single_preview_pane_t1

0xbf51,	// (0x0002a43a) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0002dfc9) list_single_preview_pane_t

0xbf99,	// (0x0002a482) bg_popup_heading_pane_cp2_ParamLimits

0xbf99,	// (0x0002a482) bg_popup_heading_pane_cp2

0xbfaf,	// (0x0002a498) heading_preview_pane_g1

0xbfb7,	// (0x0002a4a0) heading_preview_pane_t1_ParamLimits

0xbfb7,	// (0x0002a4a0) heading_preview_pane_t1

0x1591,	// (0x0001fa7a) soft_indicator_pane_t1_ParamLimits

0x3173,	// (0x0002165c) scroll_pane_ParamLimits

0x6ac0,	// (0x00024fa9) scroll_sc2_left_pane

0x6ac9,	// (0x00024fb2) scroll_sc2_right_pane

0x6ae8,	// (0x00024fd1) scroll_bg_pane_g1_ParamLimits

0x6afd,	// (0x00024fe6) scroll_bg_pane_g2_ParamLimits

0x6b15,	// (0x00024ffe) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0002dba7) scroll_bg_pane_g_ParamLimits

0x6ae8,	// (0x00024fd1) scroll_handle_pane_g1_ParamLimits

0x6b37,	// (0x00025020) scroll_handle_pane_g2_ParamLimits

0x6b15,	// (0x00024ffe) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0002dbae) scroll_handle_pane_g_ParamLimits

0x732f,	// (0x00025818) popup_choice_list_window_ParamLimits

0x732f,	// (0x00025818) popup_choice_list_window

0x98fd,	// (0x00027de6) choice_list_pane

0x997f,	// (0x00027e68) cell_toolbar_pane_t1

0x99a7,	// (0x00027e90) toolbar_button_pane_ParamLimits

0xaa6c,	// (0x00028f55) ai_gene_pane_1_t2_ParamLimits

0xaa6c,	// (0x00028f55) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0002ddd6) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0002ddd6) ai_gene_pane_1_t

0xbfd4,	// (0x0002a4bd) scroll_sc2_left_pane_g1

0xbfd4,	// (0x0002a4bd) scroll_sc2_right_pane_g1

0x947d,	// (0x00027966) bg_popup_sub_pane_cp10

0xbfde,	// (0x0002a4c7) list_choice_list_pane

0xbff7,	// (0x0002a4e0) list_single_choice_list_pane_ParamLimits

0xbff7,	// (0x0002a4e0) list_single_choice_list_pane

0xc00f,	// (0x0002a4f8) list_single_choice_list_pane_g1

0x65f8,	// (0x00024ae1) list_single_choice_list_pane_t1_ParamLimits

0x65f8,	// (0x00024ae1) list_single_choice_list_pane_t1

0xc017,	// (0x0002a500) choice_list_pane_g1

0xc01f,	// (0x0002a508) choice_list_pane_t1

0x14b4,	// (0x0001f99d) input_focus_pane_cp11

0x681f,	// (0x00024d08) title_pane_stacon_g2_ParamLimits

0x681f,	// (0x00024d08) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0002db8d) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0002db8d) title_pane_stacon_g

0x9156,	// (0x0002763f) cursor_press_pane

0x73e9,	// (0x000258d2) popup_fep_hwr_window_ParamLimits

0x73e9,	// (0x000258d2) popup_fep_hwr_window

0x7473,	// (0x0002595c) popup_fep_vkb_window_ParamLimits

0x7473,	// (0x0002595c) popup_fep_vkb_window

0xc02d,	// (0x0002a516) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0002dff2) fep_vkb_side_pane_g_ParamLimits

0x7e08,	// (0x000262f1) fep_hwr_candidate_pane_ParamLimits

0x7e08,	// (0x000262f1) fep_hwr_candidate_pane

0x7e32,	// (0x0002631b) fep_hwr_side_pane_ParamLimits

0x7e32,	// (0x0002631b) fep_hwr_side_pane

0x7e54,	// (0x0002633d) fep_hwr_top_pane_ParamLimits

0x7e54,	// (0x0002633d) fep_hwr_top_pane

0x7e6c,	// (0x00026355) fep_hwr_write_pane_ParamLimits

0x7e6c,	// (0x00026355) fep_hwr_write_pane

0xfb09,	// (0x0002dff2) fep_vkb_side_pane_g

0xc035,	// (0x0002a51e) fep_hwr_top_pane_g1

0xc047,	// (0x0002a530) fep_hwr_top_pane_g2

0x7e98,	// (0x00026381) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0002dfce) fep_hwr_top_pane_g

0x7ead,	// (0x00026396) fep_hwr_top_text_pane

0x6c8c,	// (0x00025175) fep_hwr_top_text_pane_g1

0xc07d,	// (0x0002a566) fep_hwr_top_text_pane_t1

0x7fb7,	// (0x000264a0) fep_hwr_candidate_pane_g1

0xc2c8,	// (0x0002a7b1) fep_vkb_keypad_pane_g3_ParamLimits

0xc2c8,	// (0x0002a7b1) fep_vkb_keypad_pane_g3

0xc2f4,	// (0x0002a7dd) fep_vkb_keypad_pane_g4_ParamLimits

0xc2f4,	// (0x0002a7dd) fep_vkb_keypad_pane_g4

0xc36b,	// (0x0002a854) fep_vkb_bottom_pane_g2_ParamLimits

0xc36b,	// (0x0002a854) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0002dff9) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0002dff9) fep_vkb_bottom_pane_g

0xbfd4,	// (0x0002a4bd) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0002e003) cell_vkb_side_pane_g

0xc3f6,	// (0x0002a8df) cell_vkb_side_pane_t1

0xc404,	// (0x0002a8ed) cell_vkb_side_pane_t1_copy1

0xbfd4,	// (0x0002a4bd) bg_fep_vkb_candidate_pane_g2

0xc548,	// (0x0002aa31) cell_vkb_candidate_pane_ParamLimits

0xc08b,	// (0x0002a574) aid_size_cell_vkb_ParamLimits

0xc08b,	// (0x0002a574) aid_size_cell_vkb

0xc548,	// (0x0002aa31) cell_vkb_candidate_pane

0x7fd1,	// (0x000264ba) bg_popup_fep_shadow_pane_g1

0xc11d,	// (0x0002a606) fep_vkb_bottom_pane_ParamLimits

0xc11d,	// (0x0002a606) fep_vkb_bottom_pane

0xc15a,	// (0x0002a643) fep_vkb_candidate_pane_ParamLimits

0xc15a,	// (0x0002a643) fep_vkb_candidate_pane

0xc176,	// (0x0002a65f) fep_vkb_keypad_pane_ParamLimits

0xc176,	// (0x0002a65f) fep_vkb_keypad_pane

0xc1a9,	// (0x0002a692) fep_vkb_side_pane_ParamLimits

0xc1a9,	// (0x0002a692) fep_vkb_side_pane

0xc1e5,	// (0x0002a6ce) fep_vkb_top_pane_ParamLimits

0xc1e5,	// (0x0002a6ce) fep_vkb_top_pane

0xc221,	// (0x0002a70a) fep_vkb_top_pane_g1_ParamLimits

0xc221,	// (0x0002a70a) fep_vkb_top_pane_g1

0xc230,	// (0x0002a719) fep_vkb_top_pane_g2_ParamLimits

0xc230,	// (0x0002a719) fep_vkb_top_pane_g2

0xc23f,	// (0x0002a728) fep_vkb_top_pane_g3_ParamLimits

0xc23f,	// (0x0002a728) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0002dfe9) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0002dfe9) fep_vkb_top_pane_g

0xc25d,	// (0x0002a746) fep_vkb_top_text_pane_ParamLimits

0xc25d,	// (0x0002a746) fep_vkb_top_text_pane

0xc26e,	// (0x0002a757) fep_vkb_side_pane_g1_ParamLimits

0xc26e,	// (0x0002a757) fep_vkb_side_pane_g1

0xc2b7,	// (0x0002a7a0) grid_vkb_side_pane_ParamLimits

0xc2b7,	// (0x0002a7a0) grid_vkb_side_pane

0x7fd9,	// (0x000264c2) bg_popup_fep_shadow_pane_g2

0x7fe2,	// (0x000264cb) bg_popup_fep_shadow_pane_g3

0x7fea,	// (0x000264d3) bg_popup_fep_shadow_pane_g4

0x7ff3,	// (0x000264dc) bg_popup_fep_shadow_pane_g5

0x7ffd,	// (0x000264e6) bg_popup_fep_shadow_pane_g6

0x8005,	// (0x000264ee) bg_popup_fep_shadow_pane_g7

0x3362,	// (0x0002184b) bg_popup_fep_shadow_pane_g8

0xc316,	// (0x0002a7ff) grid_vkb_keypad_number_pane_ParamLimits

0xc316,	// (0x0002a7ff) grid_vkb_keypad_number_pane

0xc32a,	// (0x0002a813) grid_vkb_keypad_pane_ParamLimits

0xc32a,	// (0x0002a813) grid_vkb_keypad_pane

0xc350,	// (0x0002a839) fep_vkb_bottom_pane_g1_ParamLimits

0xc350,	// (0x0002a839) fep_vkb_bottom_pane_g1

0xc379,	// (0x0002a862) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc379,	// (0x0002a862) grid_vkb_keypad_bottom_left_pane

0xc38e,	// (0x0002a877) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc38e,	// (0x0002a877) grid_vkb_keypad_bottom_right_pane

0xc3a3,	// (0x0002a88c) fep_vkb_top_text_pane_g1

0xc3be,	// (0x0002a8a7) fep_vkb_top_text_pane_t1

0xc3d3,	// (0x0002a8bc) cell_vkb_side_pane_ParamLimits

0xc3d3,	// (0x0002a8bc) cell_vkb_side_pane

0xbfd4,	// (0x0002a4bd) cell_vkb_side_pane_g1

0xc412,	// (0x0002a8fb) cell_vkb_keypad_pane_ParamLimits

0xc412,	// (0x0002a8fb) cell_vkb_keypad_pane

0xc49f,	// (0x0002a988) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0002e016) bg_popup_fep_shadow_pane_g

0xbfd4,	// (0x0002a4bd) cell_hwr_side_pane_g1

0xbfd4,	// (0x0002a4bd) cell_hwr_side_pane_g2

0xc4a9,	// (0x0002a992) cell_vkb_keypad_pane_t1

0xc4b7,	// (0x0002a9a0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4b7,	// (0x0002a9a0) cell_vkb_keypad_bottom_left_pane

0xc4d4,	// (0x0002a9bd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4d4,	// (0x0002a9bd) cell_vkb_keypad_bottom_right_pane

0xbfd4,	// (0x0002a4bd) cell_vkb_keypad_bottom_left_pane_g1

0xbfd4,	// (0x0002a4bd) cell_vkb_keypad_bottom_right_pane_g1

0xc50d,	// (0x0002a9f6) cell_vkb_keypad_number_pane_ParamLimits

0xc50d,	// (0x0002a9f6) cell_vkb_keypad_number_pane

0xc52c,	// (0x0002aa15) cell_vkb_keypad_number_pane_g1

0xc536,	// (0x0002aa1f) cell_vkb_keypad_number_pane_g2

0xc53f,	// (0x0002aa28) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0002e008) cell_vkb_keypad_number_pane_g

0xc4a9,	// (0x0002a992) cell_vkb_keypad_number_pane_t1

0xc569,	// (0x0002aa52) fep_vkb_candidate_pane_g1

0x0001,

0xfb1a,	// (0x0002e003) cell_hwr_side_pane_g

0xc582,	// (0x0002aa6b) cell_hwr_side_pane_t1

0x8017,	// (0x00026500) cell_hwr_side_pane_t1_copy1

0xc24f,	// (0x0002a738) cell_hwr_candidate_pane_g1

0x8025,	// (0x0002650e) cell_hwr_candidate_pane_t1

0xbfd4,	// (0x0002a4bd) cell_vkb_candidate_pane_g2

0xc608,	// (0x0002aaf1) cell_vkb_candidate_pane_t1

0x7dcf,	// (0x000262b8) bg_popup_fep_shadow_pane_ParamLimits

0x7dcf,	// (0x000262b8) bg_popup_fep_shadow_pane

0x1484,	// (0x0001f96d) bg_fep_hwr_top_pane_g4

0xc059,	// (0x0002a542) bg_hwr_side_pane_g1_ParamLimits

0xc059,	// (0x0002a542) bg_hwr_side_pane_g1

0x7eeb,	// (0x000263d4) cell_hwr_side_pane_ParamLimits

0x7eeb,	// (0x000263d4) cell_hwr_side_pane

0x7f28,	// (0x00026411) fep_hwr_write_pane_g1_ParamLimits

0x7f28,	// (0x00026411) fep_hwr_write_pane_g1

0x7f35,	// (0x0002641e) fep_hwr_write_pane_g2_ParamLimits

0x7f35,	// (0x0002641e) fep_hwr_write_pane_g2

0x7f42,	// (0x0002642b) fep_hwr_write_pane_g3_ParamLimits

0x7f42,	// (0x0002642b) fep_hwr_write_pane_g3

0x7f50,	// (0x00026439) fep_hwr_write_pane_g4_ParamLimits

0x7f50,	// (0x00026439) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0002dfd5) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0002dfd5) fep_hwr_write_pane_g

0x1484,	// (0x0001f96d) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1484,	// (0x0001f96d) bg_fep_hwr_candidate_pane_g2

0x7f65,	// (0x0002644e) cell_hwr_candidate_pane_ParamLimits

0x7f65,	// (0x0002644e) cell_hwr_candidate_pane

0x7fb7,	// (0x000264a0) fep_hwr_candidate_pane_g1_ParamLimits

0xc0b9,	// (0x0002a5a2) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0b9,	// (0x0002a5a2) bg_popup_fep_shadow_pane_cp2

0xc24f,	// (0x0002a738) fep_vkb_top_pane_g4_ParamLimits

0xc24f,	// (0x0002a738) fep_vkb_top_pane_g4

0xc295,	// (0x0002a77e) fep_vkb_side_pane_g2_ParamLimits

0xc295,	// (0x0002a77e) fep_vkb_side_pane_g2

0x4fd4,	// (0x000234bd) list_setting_pane_t4_ParamLimits

0x4fd4,	// (0x000234bd) list_setting_pane_t4

0x5068,	// (0x00023551) list_setting_number_pane_t5_ParamLimits

0x5068,	// (0x00023551) list_setting_number_pane_t5

0x6cf2,	// (0x000251db) list_double_heading_pane_cp2_ParamLimits

0x6cf2,	// (0x000251db) list_double_heading_pane_cp2

0xc616,	// (0x0002aaff) list_double_heading_pane_g1_cp2_ParamLimits

0xc616,	// (0x0002aaff) list_double_heading_pane_g1_cp2

0xc622,	// (0x0002ab0b) list_double_heading_pane_g2_cp2_ParamLimits

0xc622,	// (0x0002ab0b) list_double_heading_pane_g2_cp2

0xc636,	// (0x0002ab1f) list_double_heading_pane_t1_cp2_ParamLimits

0xc636,	// (0x0002ab1f) list_double_heading_pane_t1_cp2

0xc64c,	// (0x0002ab35) list_double_heading_pane_t2_cp2_ParamLimits

0xc64c,	// (0x0002ab35) list_double_heading_pane_t2_cp2

0x14ac,	// (0x0001f995) aid_value_unit2

0x6040,	// (0x00024529) popup_preview_fixed_window

0x1671,	// (0x0001fb5a) bg_popup_preview_window_pane_cp02

0xc65e,	// (0x0002ab47) list_preview_fixed_pane

0xc6a4,	// (0x0002ab8d) list_empty_pane_fp_ParamLimits

0xc6a4,	// (0x0002ab8d) list_empty_pane_fp

0xc6a4,	// (0x0002ab8d) list_single_cale_day_pane_fp_ParamLimits

0xc6a4,	// (0x0002ab8d) list_single_cale_day_pane_fp

0xc6a4,	// (0x0002ab8d) list_single_graphic_heading_pane_fp_ParamLimits

0xc6a4,	// (0x0002ab8d) list_single_graphic_heading_pane_fp

0xc6a4,	// (0x0002ab8d) list_single_graphic_pane_fp_ParamLimits

0xc6a4,	// (0x0002ab8d) list_single_graphic_pane_fp

0xc6a4,	// (0x0002ab8d) list_single_heading_pane_fp_ParamLimits

0xc6a4,	// (0x0002ab8d) list_single_heading_pane_fp

0xc6a4,	// (0x0002ab8d) list_single_pane_fp_ParamLimits

0xc6a4,	// (0x0002ab8d) list_single_pane_fp

0xc6bd,	// (0x0002aba6) list_single_pane_fp_g1_ParamLimits

0xc6bd,	// (0x0002aba6) list_single_pane_fp_g1

0x4e11,	// (0x000232fa) list_single_pane_fp_g2_ParamLimits

0x4e11,	// (0x000232fa) list_single_pane_fp_g2

0x59b0,	// (0x00023e99) list_single_pane_fp_g3_ParamLimits

0x59b0,	// (0x00023e99) list_single_pane_fp_g3

0xc6c9,	// (0x0002abb2) list_single_pane_fp_g4_ParamLimits

0xc6c9,	// (0x0002abb2) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0002e037) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0002e037) list_single_pane_fp_g

0x59c4,	// (0x00023ead) list_single_pane_fp_t1_ParamLimits

0x59c4,	// (0x00023ead) list_single_pane_fp_t1

0x59db,	// (0x00023ec4) list_single_graphic_pane_fp_g1_ParamLimits

0x59db,	// (0x00023ec4) list_single_graphic_pane_fp_g1

0xc6bd,	// (0x0002aba6) list_single_graphic_pane_fp_g2_ParamLimits

0xc6bd,	// (0x0002aba6) list_single_graphic_pane_fp_g2

0x4e11,	// (0x000232fa) list_single_graphic_pane_fp_g3_ParamLimits

0x4e11,	// (0x000232fa) list_single_graphic_pane_fp_g3

0x59b0,	// (0x00023e99) list_single_graphic_pane_fp_g4_ParamLimits

0x59b0,	// (0x00023e99) list_single_graphic_pane_fp_g4

0xc6c9,	// (0x0002abb2) list_single_graphic_pane_fp_g5_ParamLimits

0xc6c9,	// (0x0002abb2) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0002e040) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0002e040) list_single_graphic_pane_fp_g

0x59e7,	// (0x00023ed0) list_single_graphic_pane_fp_t1_ParamLimits

0x59e7,	// (0x00023ed0) list_single_graphic_pane_fp_t1

0x59db,	// (0x00023ec4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x59db,	// (0x00023ec4) list_single_graphic_heading_pane_fp_g1

0xc6bd,	// (0x0002aba6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6bd,	// (0x0002aba6) list_single_graphic_heading_pane_fp_g2

0x4e11,	// (0x000232fa) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4e11,	// (0x000232fa) list_single_graphic_heading_pane_fp_g3

0x59b0,	// (0x00023e99) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x59b0,	// (0x00023e99) list_single_graphic_heading_pane_fp_g4

0xc6c9,	// (0x0002abb2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6c9,	// (0x0002abb2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002e040) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002e040) list_single_graphic_heading_pane_fp_g

0x59fd,	// (0x00023ee6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x59fd,	// (0x00023ee6) list_single_graphic_heading_pane_fp_t1

0x5a13,	// (0x00023efc) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5a13,	// (0x00023efc) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0002e04b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0002e04b) list_single_graphic_heading_pane_fp_t

0x5a25,	// (0x00023f0e) list_single_cale_day_pane_fp_g1_ParamLimits

0x5a25,	// (0x00023f0e) list_single_cale_day_pane_fp_g1

0xc6d5,	// (0x0002abbe) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6d5,	// (0x0002abbe) list_single_cale_day_pane_fp_g2

0x5a5d,	// (0x00023f46) list_single_cale_day_pane_fp_g3_ParamLimits

0x5a5d,	// (0x00023f46) list_single_cale_day_pane_fp_g3

0x5a85,	// (0x00023f6e) list_single_cale_day_pane_fp_g4_ParamLimits

0x5a85,	// (0x00023f6e) list_single_cale_day_pane_fp_g4

0x5aa9,	// (0x00023f92) list_single_cale_day_pane_fp_g5_ParamLimits

0x5aa9,	// (0x00023f92) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0002e050) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0002e050) list_single_cale_day_pane_fp_g

0x5acd,	// (0x00023fb6) list_single_cale_day_pane_fp_t1_ParamLimits

0x5acd,	// (0x00023fb6) list_single_cale_day_pane_fp_t1

0x5af3,	// (0x00023fdc) list_single_cale_day_pane_fp_t2_ParamLimits

0x5af3,	// (0x00023fdc) list_single_cale_day_pane_fp_t2

0x5b0c,	// (0x00023ff5) list_single_cale_day_pane_fp_t3_ParamLimits

0x5b0c,	// (0x00023ff5) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0002e05b) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0002e05b) list_single_cale_day_pane_fp_t

0xc6bd,	// (0x0002aba6) list_empty_pane_fp_g1_ParamLimits

0xc6bd,	// (0x0002aba6) list_empty_pane_fp_g1

0x5b25,	// (0x0002400e) list_empty_pane_fp_t1

0x5b33,	// (0x0002401c) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0002e062) list_empty_pane_fp_t

0xc6bd,	// (0x0002aba6) list_single_heading_pane_fp_g1_ParamLimits

0xc6bd,	// (0x0002aba6) list_single_heading_pane_fp_g1

0x4e11,	// (0x000232fa) list_single_heading_pane_fp_g2_ParamLimits

0x4e11,	// (0x000232fa) list_single_heading_pane_fp_g2

0x59b0,	// (0x00023e99) list_single_heading_pane_fp_g3_ParamLimits

0x59b0,	// (0x00023e99) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0002e067) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002e067) list_single_heading_pane_fp_g

0x5b41,	// (0x0002402a) list_single_heading_pane_fp_t1_ParamLimits

0x5b41,	// (0x0002402a) list_single_heading_pane_fp_t1

0x5b53,	// (0x0002403c) list_single_heading_pane_fp_t2_ParamLimits

0x5b53,	// (0x0002403c) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0002e06e) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0002e06e) list_single_heading_pane_fp_t

0x6666,	// (0x00024b4f) aid_size_cell_fast

0x1654,	// (0x0001fb3d) soft_indicator_pane_cp1_t1

0x66a3,	// (0x00024b8c) cell_app_pane_cp2_ParamLimits

0x66a3,	// (0x00024b8c) cell_app_pane_cp2

0x7df1,	// (0x000262da) fep_hwr_candidate_drop_down_list_pane

0x1492,	// (0x0001f97b) fep_hwr_candidate_pane_g3_ParamLimits

0x1492,	// (0x0001f97b) fep_hwr_candidate_pane_g3

0x149f,	// (0x0001f988) fep_hwr_candidate_pane_g4_ParamLimits

0x149f,	// (0x0001f988) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0002dfe2) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0002dfe2) fep_hwr_candidate_pane_g

0xc149,	// (0x0002a632) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc149,	// (0x0002a632) fep_vkb_candidate_drop_down_list_pane

0xc571,	// (0x0002aa5a) fep_vkb_candidate_pane_g3

0xc579,	// (0x0002aa62) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0002e00f) fep_vkb_candidate_pane_g

0xc24f,	// (0x0002a738) cell_hwr_candidate_pane_g1_ParamLimits

0xc590,	// (0x0002aa79) cell_hwr_candidate_pane_g3_ParamLimits

0xc590,	// (0x0002aa79) cell_hwr_candidate_pane_g3

0xc5b1,	// (0x0002aa9a) cell_hwr_candidate_pane_g4_ParamLimits

0xc5b1,	// (0x0002aa9a) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0002e029) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0002e029) cell_hwr_candidate_pane_g

0xc5d2,	// (0x0002aabb) cell_vkb_candidate_pane_g3_ParamLimits

0xc5d2,	// (0x0002aabb) cell_vkb_candidate_pane_g3

0xc5ed,	// (0x0002aad6) cell_vkb_candidate_pane_g4_ParamLimits

0xc5ed,	// (0x0002aad6) cell_vkb_candidate_pane_g4

0xc6e1,	// (0x0002abca) cell_app_pane_cp2_g1_ParamLimits

0xc6e1,	// (0x0002abca) cell_app_pane_cp2_g1

0xc6ff,	// (0x0002abe8) cell_app_pane_cp2_g2_ParamLimits

0xc6ff,	// (0x0002abe8) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0002e073) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0002e073) cell_app_pane_cp2_g

0xc70b,	// (0x0002abf4) cell_app_pane_cp2_t1_ParamLimits

0xc70b,	// (0x0002abf4) cell_app_pane_cp2_t1

0x3287,	// (0x00021770) grid_highlight_pane_cp1_ParamLimits

0x3287,	// (0x00021770) grid_highlight_pane_cp1

0x8043,	// (0x0002652c) cell_hwr_candidate_pane_cp1_ParamLimits

0x8043,	// (0x0002652c) cell_hwr_candidate_pane_cp1

0xc24f,	// (0x0002a738) fep_hwr_candidate_drop_down_list_pane_g1

0xc71d,	// (0x0002ac06) fep_hwr_candidate_drop_down_list_pane_g2

0xc72a,	// (0x0002ac13) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002e078) fep_hwr_candidate_drop_down_list_pane_g

0x8067,	// (0x00026550) fep_hwr_candidate_drop_down_list_scroll_pane

0x8070,	// (0x00026559) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8070,	// (0x00026559) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x807d,	// (0x00026566) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x807d,	// (0x00026566) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x808a,	// (0x00026573) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x808a,	// (0x00026573) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5d2,	// (0x0002aabb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5d2,	// (0x0002aabb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5ed,	// (0x0002aad6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5ed,	// (0x0002aad6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x8097,	// (0x00026580) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8097,	// (0x00026580) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x80b2,	// (0x0002659b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x80b2,	// (0x0002659b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x80cd,	// (0x000265b6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x80cd,	// (0x000265b6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0002e07f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0002e07f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc737,	// (0x0002ac20) cell_vkb_candidate_pane_cp1_ParamLimits

0xc737,	// (0x0002ac20) cell_vkb_candidate_pane_cp1

0xc24f,	// (0x0002a738) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc24f,	// (0x0002a738) fep_vkb_candidate_drop_down_list_pane_g1

0xc71d,	// (0x0002ac06) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc71d,	// (0x0002ac06) fep_vkb_candidate_drop_down_list_pane_g2

0xc72a,	// (0x0002ac13) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc72a,	// (0x0002ac13) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002e078) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8f,	// (0x0002e078) fep_vkb_candidate_drop_down_list_pane_g

0xc75d,	// (0x0002ac46) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc75d,	// (0x0002ac46) fep_vkb_candidate_drop_down_list_scroll_pane

0xc76a,	// (0x0002ac53) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc76a,	// (0x0002ac53) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc777,	// (0x0002ac60) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc777,	// (0x0002ac60) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc783,	// (0x0002ac6c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc783,	// (0x0002ac6c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc590,	// (0x0002aa79) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc590,	// (0x0002aa79) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5b1,	// (0x0002aa9a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5b1,	// (0x0002aa9a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc78f,	// (0x0002ac78) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc78f,	// (0x0002ac78) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7b0,	// (0x0002ac99) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7b0,	// (0x0002ac99) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7d1,	// (0x0002acba) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7d1,	// (0x0002acba) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0002e090) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0002e090) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6160,	// (0x00024649) title_pane_g1_ParamLimits

0x616d,	// (0x00024656) title_pane_g2_ParamLimits

0xf529,	// (0x0002da12) title_pane_g_ParamLimits

0x6c7c,	// (0x00025165) aid_call2_pane

0x6c84,	// (0x0002516d) aid_call_pane

0x6c8c,	// (0x00025175) popup_clock_analogue_window_g1

0x6c8c,	// (0x00025175) popup_clock_analogue_window_g2

0x6c94,	// (0x0002517d) popup_clock_analogue_window_g3

0x6c9d,	// (0x00025186) popup_clock_analogue_window_g4

0x14be,	// (0x0001f9a7) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0002dbbc) popup_clock_analogue_window_g

0x6ca5,	// (0x0002518e) popup_clock_analogue_window_t1

0x6d35,	// (0x0002521e) clock_digital_number_pane_ParamLimits

0x6d35,	// (0x0002521e) clock_digital_number_pane

0x6d41,	// (0x0002522a) clock_digital_number_pane_cp02_ParamLimits

0x6d41,	// (0x0002522a) clock_digital_number_pane_cp02

0x6d4d,	// (0x00025236) clock_digital_number_pane_cp03_ParamLimits

0x6d4d,	// (0x00025236) clock_digital_number_pane_cp03

0x6d59,	// (0x00025242) clock_digital_number_pane_cp04_ParamLimits

0x6d59,	// (0x00025242) clock_digital_number_pane_cp04

0x6d65,	// (0x0002524e) clock_digital_separator_pane_ParamLimits

0x6d65,	// (0x0002524e) clock_digital_separator_pane

0x6d71,	// (0x0002525a) popup_clock_digital_window_t1_ParamLimits

0x6d71,	// (0x0002525a) popup_clock_digital_window_t1

0x14be,	// (0x0001f9a7) clock_digital_number_pane_g1

0x14be,	// (0x0001f9a7) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0002dbc7) clock_digital_number_pane_g

0x14be,	// (0x0001f9a7) clock_digital_separator_pane_g1

0x14be,	// (0x0001f9a7) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0002dbc7) clock_digital_separator_pane_g

0x94b9,	// (0x000279a2) aid_fill_nsta_ParamLimits

0x9605,	// (0x00027aee) indicator_nsta_pane_ParamLimits

0x9796,	// (0x00027c7f) popup_clock_analogue_window

0x9796,	// (0x00027c7f) popup_clock_digital_window

0xba00,	// (0x00029ee9) grid_indicator_nsta_pane_ParamLimits

0xba29,	// (0x00029f12) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0002df62) clock_nsta_pane_t

0x6a65,	// (0x00024f4e) aid_size_max_handle

0x6a6f,	// (0x00024f58) aid_size_min_handle

0x9156,	// (0x0002763f) editor_scroll_pane

0xc7ec,	// (0x0002acd5) ex_editor_pane

0x65d3,	// (0x00024abc) scroll_pane_cp13

0x319f,	// (0x00021688) scroll_pane_cp14

0x6cda,	// (0x000251c3) scroll_pane_cp36

0x6d08,	// (0x000251f1) list_single_graphic_hl_pane_cp2_ParamLimits

0x6d08,	// (0x000251f1) list_single_graphic_hl_pane_cp2

0xaf79,	// (0x00029462) list_single_graphic_hl_pane_ParamLimits

0xaf79,	// (0x00029462) list_single_graphic_hl_pane

0x5b69,	// (0x00024052) aid_size_min_hl_cp1

0xc7f4,	// (0x0002acdd) list_highlight_pane_cp34_ParamLimits

0xc7f4,	// (0x0002acdd) list_highlight_pane_cp34

0xc805,	// (0x0002acee) list_single_graphic_hl_pane_g1_ParamLimits

0xc805,	// (0x0002acee) list_single_graphic_hl_pane_g1

0x5b72,	// (0x0002405b) list_single_graphic_hl_pane_g2_ParamLimits

0x5b72,	// (0x0002405b) list_single_graphic_hl_pane_g2

0x5b72,	// (0x0002405b) list_single_graphic_hl_pane_g3_ParamLimits

0x5b72,	// (0x0002405b) list_single_graphic_hl_pane_g3

0x53d2,	// (0x000238bb) list_single_graphic_hl_pane_g4_ParamLimits

0x53d2,	// (0x000238bb) list_single_graphic_hl_pane_g4

0x5b7e,	// (0x00024067) list_single_graphic_hl_pane_g5_ParamLimits

0x5b7e,	// (0x00024067) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0002e0a1) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0002e0a1) list_single_graphic_hl_pane_g

0x5b92,	// (0x0002407b) list_single_graphic_hl_pane_t1_ParamLimits

0x5b92,	// (0x0002407b) list_single_graphic_hl_pane_t1

0xc812,	// (0x0002acfb) aid_size_min_hl_cp2

0xc81b,	// (0x0002ad04) list_highlight_pane_cp34_cp2_ParamLimits

0xc81b,	// (0x0002ad04) list_highlight_pane_cp34_cp2

0xc805,	// (0x0002acee) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc805,	// (0x0002acee) list_single_graphic_hl_pane_g1_cp2

0xc828,	// (0x0002ad11) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc828,	// (0x0002ad11) list_single_graphic_hl_pane_g2_cp2

0xc834,	// (0x0002ad1d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc834,	// (0x0002ad1d) list_single_graphic_hl_pane_g3_cp2

0xb86d,	// (0x00029d56) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xb86d,	// (0x00029d56) list_single_graphic_hl_pane_g4_cp2

0xc842,	// (0x0002ad2b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc842,	// (0x0002ad2b) list_single_graphic_hl_pane_g5_cp2

0x71ed,	// (0x000256d6) control_pane_g4_ParamLimits

0x71ed,	// (0x000256d6) control_pane_g4

0x947d,	// (0x00027966) bg_popup_sub_pane_cp10_ParamLimits

0xbfde,	// (0x0002a4c7) list_choice_list_pane_ParamLimits

0xbfed,	// (0x0002a4d6) scroll_pane_cp23

0x1671,	// (0x0001fb5a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc65e,	// (0x0002ab47) list_preview_fixed_pane_ParamLimits

0xc674,	// (0x0002ab5d) list_preview_fixed_pane_cp_ParamLimits

0xc674,	// (0x0002ab5d) list_preview_fixed_pane_cp

0xc680,	// (0x0002ab69) popup_preview_fixed_window_g1_ParamLimits

0xc680,	// (0x0002ab69) popup_preview_fixed_window_g1

0xc68c,	// (0x0002ab75) popup_preview_fixed_window_g2_ParamLimits

0xc68c,	// (0x0002ab75) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0002e030) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0002e030) popup_preview_fixed_window_g

0x6904,	// (0x00024ded) aid_navi_side_left_pane_ParamLimits

0x6919,	// (0x00024e02) aid_navi_side_right_pane_ParamLimits

0x6931,	// (0x00024e1a) navi_icon_pane_stacon_ParamLimits

0x6945,	// (0x00024e2e) navi_navi_pane_stacon_ParamLimits

0x6931,	// (0x00024e1a) navi_text_pane_stacon_ParamLimits

0x14b4,	// (0x0001f99d) main_text_info_pane

0xc86c,	// (0x0002ad55) listscroll_text_info_pane

0xc874,	// (0x0002ad5d) list_text_info_pane_ParamLimits

0xc874,	// (0x0002ad5d) list_text_info_pane

0xc883,	// (0x0002ad6c) scroll_pane_cp24_ParamLimits

0xc883,	// (0x0002ad6c) scroll_pane_cp24

0xc8a1,	// (0x0002ad8a) list_text_info_pane_t1_ParamLimits

0xc8a1,	// (0x0002ad8a) list_text_info_pane_t1

0x7351,	// (0x0002583a) popup_fast_swap2_window_ParamLimits

0x7351,	// (0x0002583a) popup_fast_swap2_window

0xc8c6,	// (0x0002adaf) aid_size_cell_fast2

0x14b4,	// (0x0001f99d) bg_popup_window_pane_cp17

0x9de9,	// (0x000282d2) heading_pane_cp2

0x9df1,	// (0x000282da) listscroll_fast2_pane

0xc8d0,	// (0x0002adb9) grid_fast2_pane

0xc8da,	// (0x0002adc3) listscroll_fast2_pane_g1

0xc8e4,	// (0x0002adcd) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0002e0ac) listscroll_fast2_pane_g

0x65d3,	// (0x00024abc) scroll_pane_cp26

0xc8ee,	// (0x0002add7) cell_fast2_pane_ParamLimits

0xc8ee,	// (0x0002add7) cell_fast2_pane

0xc905,	// (0x0002adee) cell_fast2_pane_g1

0xc90e,	// (0x0002adf7) cell_fast2_pane_g2

0xc917,	// (0x0002ae00) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0002e0b1) cell_fast2_pane_g

0x2f66,	// (0x0002144f) grid_highlight_pane_cp9

0x2f7b,	// (0x00021464) main_eswt_pane_ParamLimits

0x2f7b,	// (0x00021464) main_eswt_pane

0xc898,	// (0x0002ad81) list_single_text_info_pane

0xc91f,	// (0x0002ae08) eswt_ctrl_button_pane

0xc91f,	// (0x0002ae08) eswt_ctrl_canvas_pane

0xc927,	// (0x0002ae10) eswt_ctrl_combo_pane

0xc91f,	// (0x0002ae08) eswt_ctrl_default_pane

0xc91f,	// (0x0002ae08) eswt_ctrl_label_pane

0xc92f,	// (0x0002ae18) eswt_ctrl_wait_pane

0xc937,	// (0x0002ae20) eswt_shell_pane

0x14b4,	// (0x0001f99d) listscroll_eswt_app_pane

0xc957,	// (0x0002ae40) popup_eswt_tasktip_window_ParamLimits

0xc957,	// (0x0002ae40) popup_eswt_tasktip_window

0x9a27,	// (0x00027f10) bg_popup_window_pane_cp18

0xc968,	// (0x0002ae51) eswt_control_pane_g1_ParamLimits

0xc968,	// (0x0002ae51) eswt_control_pane_g1

0xc975,	// (0x0002ae5e) eswt_control_pane_g2_ParamLimits

0xc975,	// (0x0002ae5e) eswt_control_pane_g2

0xc982,	// (0x0002ae6b) eswt_control_pane_g3_ParamLimits

0xc982,	// (0x0002ae6b) eswt_control_pane_g3

0xc98f,	// (0x0002ae78) eswt_control_pane_g4_ParamLimits

0xc98f,	// (0x0002ae78) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0002e0b8) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0002e0b8) eswt_control_pane_g

0x3287,	// (0x00021770) bg_button_pane_ParamLimits

0x3287,	// (0x00021770) bg_button_pane

0x2f7b,	// (0x00021464) common_borders_pane_copy2_ParamLimits

0x2f7b,	// (0x00021464) common_borders_pane_copy2

0xc99c,	// (0x0002ae85) control_button_pane_g1_ParamLimits

0xc99c,	// (0x0002ae85) control_button_pane_g1

0xc9a8,	// (0x0002ae91) control_button_pane_g2_ParamLimits

0xc9a8,	// (0x0002ae91) control_button_pane_g2

0xc9b4,	// (0x0002ae9d) control_button_pane_g3_ParamLimits

0xc9b4,	// (0x0002ae9d) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0002e0c1) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0002e0c1) control_button_pane_g

0xc9c8,	// (0x0002aeb1) control_button_pane_t1

0xc9d6,	// (0x0002aebf) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0002e0c8) control_button_pane_t

0x99b3,	// (0x00027e9c) bg_button_pane_g1

0x99bb,	// (0x00027ea4) bg_button_pane_g2

0x99c3,	// (0x00027eac) bg_button_pane_g3

0x99cb,	// (0x00027eb4) bg_button_pane_g4

0x99d3,	// (0x00027ebc) bg_button_pane_g5

0x99db,	// (0x00027ec4) bg_button_pane_g6

0x99e3,	// (0x00027ecc) bg_button_pane_g7

0x99eb,	// (0x00027ed4) bg_button_pane_g8

0x99f3,	// (0x00027edc) bg_button_pane_g9

0x0008,

0xf841,	// (0x0002dd2a) bg_button_pane_g

0xbf99,	// (0x0002a482) common_borders_pane_ParamLimits

0xbf99,	// (0x0002a482) common_borders_pane

0xc968,	// (0x0002ae51) eswt_control_pane_g1_copy1_ParamLimits

0xc968,	// (0x0002ae51) eswt_control_pane_g1_copy1

0xc975,	// (0x0002ae5e) eswt_control_pane_g2_copy1_ParamLimits

0xc975,	// (0x0002ae5e) eswt_control_pane_g2_copy1

0xc982,	// (0x0002ae6b) eswt_control_pane_g3_copy1_ParamLimits

0xc982,	// (0x0002ae6b) eswt_control_pane_g3_copy1

0xc98f,	// (0x0002ae78) eswt_control_pane_g4_copy1_ParamLimits

0xc98f,	// (0x0002ae78) eswt_control_pane_g4_copy1

0xbfd4,	// (0x0002a4bd) bg_eswt_ctrl_canvas_pane_g1

0xbf99,	// (0x0002a482) common_borders_pane_cp2_ParamLimits

0xbf99,	// (0x0002a482) common_borders_pane_cp2

0xbf99,	// (0x0002a482) common_borders_pane_cp3_ParamLimits

0xbf99,	// (0x0002a482) common_borders_pane_cp3

0xc9e4,	// (0x0002aecd) separator_horizontal_pane

0xc9ec,	// (0x0002aed5) separator_vertical_pane

0xc968,	// (0x0002ae51) eswt_control_pane_g1_copy2_ParamLimits

0xc968,	// (0x0002ae51) eswt_control_pane_g1_copy2

0xc975,	// (0x0002ae5e) eswt_control_pane_g2_copy2_ParamLimits

0xc975,	// (0x0002ae5e) eswt_control_pane_g2_copy2

0xc982,	// (0x0002ae6b) eswt_control_pane_g3_copy2_ParamLimits

0xc982,	// (0x0002ae6b) eswt_control_pane_g3_copy2

0xc98f,	// (0x0002ae78) eswt_control_pane_g4_copy2_ParamLimits

0xc98f,	// (0x0002ae78) eswt_control_pane_g4_copy2

0x14b4,	// (0x0001f99d) common_borders_pane_cp4

0xc9f5,	// (0x0002aede) separator_horizontal_pane_g1

0xc9fe,	// (0x0002aee7) separator_horizontal_pane_g2

0xca07,	// (0x0002aef0) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0002e0cd) separator_horizontal_pane_g

0xc968,	// (0x0002ae51) eswt_control_pane_g1_copy3_ParamLimits

0xc968,	// (0x0002ae51) eswt_control_pane_g1_copy3

0xc975,	// (0x0002ae5e) eswt_control_pane_g2_copy3_ParamLimits

0xc975,	// (0x0002ae5e) eswt_control_pane_g2_copy3

0xc982,	// (0x0002ae6b) eswt_control_pane_g3_copy3_ParamLimits

0xc982,	// (0x0002ae6b) eswt_control_pane_g3_copy3

0xc98f,	// (0x0002ae78) eswt_control_pane_g4_copy3_ParamLimits

0xc98f,	// (0x0002ae78) eswt_control_pane_g4_copy3

0x14b4,	// (0x0001f99d) common_borders_pane_cp5

0xca10,	// (0x0002aef9) separator_vertical_pane_g1

0xca19,	// (0x0002af02) separator_vertical_pane_g2

0xca22,	// (0x0002af0b) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0002e0d4) separator_vertical_pane_g

0xc968,	// (0x0002ae51) eswt_control_pane_g1_copy4_ParamLimits

0xc968,	// (0x0002ae51) eswt_control_pane_g1_copy4

0xc975,	// (0x0002ae5e) eswt_control_pane_g2_copy4_ParamLimits

0xc975,	// (0x0002ae5e) eswt_control_pane_g2_copy4

0xc982,	// (0x0002ae6b) eswt_control_pane_g3_copy4_ParamLimits

0xc982,	// (0x0002ae6b) eswt_control_pane_g3_copy4

0xc98f,	// (0x0002ae78) eswt_control_pane_g4_copy4_ParamLimits

0xc98f,	// (0x0002ae78) eswt_control_pane_g4_copy4

0xca2b,	// (0x0002af14) eswt_ctrl_combo_button_pane

0xca33,	// (0x0002af1c) eswt_ctrl_input_pane

0xca3b,	// (0x0002af24) popup_choice_list_window_cp70

0xca43,	// (0x0002af2c) eswt_ctrl_input_pane_t1

0x14b4,	// (0x0001f99d) input_focus_pane_cp70

0xbf99,	// (0x0002a482) bg_button_pane_cp70_ParamLimits

0xbf99,	// (0x0002a482) bg_button_pane_cp70

0xca51,	// (0x0002af3a) eswt_ctrl_combo_button_pane_g1

0xca59,	// (0x0002af42) wait_bar_pane_cp70

0x9a27,	// (0x00027f10) bg_popup_window_pane_cp70_ParamLimits

0x9a27,	// (0x00027f10) bg_popup_window_pane_cp70

0xca61,	// (0x0002af4a) popup_eswt_tasktip_window_t1

0xca77,	// (0x0002af60) wait_bar_pane_cp71_ParamLimits

0xca77,	// (0x0002af60) wait_bar_pane_cp71

0xca83,	// (0x0002af6c) grid_eswt_app_pane

0x6ac9,	// (0x00024fb2) scroll_pane_cp70

0xca8c,	// (0x0002af75) cell_eswt_app_pane_ParamLimits

0xca8c,	// (0x0002af75) cell_eswt_app_pane

0xcabe,	// (0x0002afa7) cell_eswt_app_pane_g1_ParamLimits

0xcabe,	// (0x0002afa7) cell_eswt_app_pane_g1

0xcaed,	// (0x0002afd6) cell_eswt_app_pane_g2_ParamLimits

0xcaed,	// (0x0002afd6) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x0002e0db) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x0002e0db) cell_eswt_app_pane_g

0xcb16,	// (0x0002afff) cell_eswt_app_pane_t1_ParamLimits

0xcb16,	// (0x0002afff) cell_eswt_app_pane_t1

0xcb48,	// (0x0002b031) grid_highlight_pane_cp70_ParamLimits

0xcb48,	// (0x0002b031) grid_highlight_pane_cp70

0x9027,	// (0x00027510) set_content_pane_g1

0x9404,	// (0x000278ed) status_small_volume_pane

0x80e8,	// (0x000265d1) status_small_volume_pane_g1

0x80f0,	// (0x000265d9) volume_small2_pane

0x80f9,	// (0x000265e2) volume_small2_pane_g1

0x8102,	// (0x000265eb) volume_small2_pane_g2

0x810b,	// (0x000265f4) volume_small2_pane_g3

0x8114,	// (0x000265fd) volume_small2_pane_g4

0x811d,	// (0x00026606) volume_small2_pane_g5

0x8126,	// (0x0002660f) volume_small2_pane_g6

0x812f,	// (0x00026618) volume_small2_pane_g7

0x8138,	// (0x00026621) volume_small2_pane_g8

0x8141,	// (0x0002662a) volume_small2_pane_g9

0x814a,	// (0x00026633) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0002e0e0) volume_small2_pane_g

0xc3a3,	// (0x0002a88c) fep_vkb_top_text_pane_g1_ParamLimits

0xc3be,	// (0x0002a8a7) fep_vkb_top_text_pane_t1_ParamLimits

0xc698,	// (0x0002ab81) popup_preview_fixed_window_g3_ParamLimits

0xc698,	// (0x0002ab81) popup_preview_fixed_window_g3

0x7864,	// (0x00025d4d) popup_toolbar_trans_pane

0xad7f,	// (0x00029268) aid_height_set_list_ParamLimits

0xad90,	// (0x00029279) aid_size_parent_ParamLimits

0x947d,	// (0x00027966) list_highlight_pane_cp2_ParamLimits

0x9027,	// (0x00027510) set_content_pane_g1_ParamLimits

0x5626,	// (0x00023b0f) list_single_image_pane_ParamLimits

0x5626,	// (0x00023b0f) list_single_image_pane

0xcb54,	// (0x0002b03d) aid_size_cell_image_ParamLimits

0xcb54,	// (0x0002b03d) aid_size_cell_image

0xcb61,	// (0x0002b04a) grid_single_image_pane_ParamLimits

0xcb61,	// (0x0002b04a) grid_single_image_pane

0x32ad,	// (0x00021796) list_single_image_pane_g1_ParamLimits

0x32ad,	// (0x00021796) list_single_image_pane_g1

0x32b9,	// (0x000217a2) list_single_image_pane_g2_ParamLimits

0x32b9,	// (0x000217a2) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0002e0f5) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0002e0f5) list_single_image_pane_g

0xcb6f,	// (0x0002b058) list_single_image_pane_t1_ParamLimits

0xcb6f,	// (0x0002b058) list_single_image_pane_t1

0xcb85,	// (0x0002b06e) cell_image_list_pane_ParamLimits

0xcb85,	// (0x0002b06e) cell_image_list_pane

0xcb9d,	// (0x0002b086) cell_image_list_pane_g1

0xcba6,	// (0x0002b08f) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0002e0fa) cell_image_list_pane_g

0xcbaf,	// (0x0002b098) aid_size_cell_tb_trans_pane

0x3287,	// (0x00021770) bg_tb_trans_pane

0xcbc1,	// (0x0002b0aa) grid_tb_trans_pane

0x99b3,	// (0x00027e9c) bg_tb_trans_pane_g1

0x99bb,	// (0x00027ea4) bg_tb_trans_pane_g2

0x99c3,	// (0x00027eac) bg_tb_trans_pane_g3

0x99cb,	// (0x00027eb4) bg_tb_trans_pane_g4

0x99d3,	// (0x00027ebc) bg_tb_trans_pane_g5

0x99eb,	// (0x00027ed4) bg_tb_trans_pane_g6

0x99f3,	// (0x00027edc) bg_tb_trans_pane_g7

0x99db,	// (0x00027ec4) bg_tb_trans_pane_g8

0x99e3,	// (0x00027ecc) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x0002e0ff) bg_tb_trans_pane_g

0xcbd5,	// (0x0002b0be) cell_toolbar_trans_pane_ParamLimits

0xcbd5,	// (0x0002b0be) cell_toolbar_trans_pane

0xbfd4,	// (0x0002a4bd) cell_toolbar_trans_pane_g1

0xbc0c,	// (0x0002a0f5) list_form2_midp_pane_t1

0xbc1a,	// (0x0002a103) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0002dfa8) list_form2_midp_pane_t

0xbc28,	// (0x0002a111) scroll_pane_cp51_ParamLimits

0xbdef,	// (0x0002a2d8) form2_midp_wait_pane_g1

0xbdf8,	// (0x0002a2e1) form2_midp_wait_pane_g2

0xbe01,	// (0x0002a2ea) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0002dfbd) form2_midp_wait_pane_g

0x1524,	// (0x0001fa0d) list_highlight_pane_cp21_ParamLimits

0xbe3a,	// (0x0002a323) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe49,	// (0x0002a332) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x55dc,	// (0x00023ac5) list_single_2graphic_im_pane_ParamLimits

0x55dc,	// (0x00023ac5) list_single_2graphic_im_pane

0xcbfb,	// (0x0002b0e4) list_single_2graphic_im_pane_g1_ParamLimits

0xcbfb,	// (0x0002b0e4) list_single_2graphic_im_pane_g1

0xcc0c,	// (0x0002b0f5) list_single_2graphic_im_pane_g2_ParamLimits

0xcc0c,	// (0x0002b0f5) list_single_2graphic_im_pane_g2

0xcc18,	// (0x0002b101) list_single_2graphic_im_pane_g3_ParamLimits

0xcc18,	// (0x0002b101) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x0002e112) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x0002e112) list_single_2graphic_im_pane_g

0xcc38,	// (0x0002b121) list_single_2graphic_im_pane_t1_ParamLimits

0xcc38,	// (0x0002b121) list_single_2graphic_im_pane_t1

0xc6a4,	// (0x0002ab8d) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6a4,	// (0x0002ab8d) list_single_graphic_2heading_pane_fp

0x59db,	// (0x00023ec4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x59db,	// (0x00023ec4) list_single_graphic_2heading_pane_fp_g1

0xc6bd,	// (0x0002aba6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6bd,	// (0x0002aba6) list_single_graphic_2heading_pane_fp_g2

0x4e11,	// (0x000232fa) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4e11,	// (0x000232fa) list_single_graphic_2heading_pane_fp_g3

0x59b0,	// (0x00023e99) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x59b0,	// (0x00023e99) list_single_graphic_2heading_pane_fp_g4

0xc6c9,	// (0x0002abb2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6c9,	// (0x0002abb2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002e040) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002e040) list_single_graphic_2heading_pane_fp_g

0x5ba8,	// (0x00024091) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5ba8,	// (0x00024091) list_single_graphic_2heading_pane_fp_t1

0x5a13,	// (0x00023efc) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5a13,	// (0x00023efc) list_single_graphic_2heading_pane_fp_t2

0x5bbe,	// (0x000240a7) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5bbe,	// (0x000240a7) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x0002e11b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x0002e11b) list_single_graphic_2heading_pane_fp_t

0xc065,	// (0x0002a54e) fep_hwr_write_pane_g5_ParamLimits

0xc065,	// (0x0002a54e) fep_hwr_write_pane_g5

0xc071,	// (0x0002a55a) fep_hwr_write_pane_g6_ParamLimits

0xc071,	// (0x0002a55a) fep_hwr_write_pane_g6

0xc937,	// (0x0002ae20) eswt_shell_pane_ParamLimits

0x9a27,	// (0x00027f10) bg_popup_window_pane_cp18_ParamLimits

0xacd6,	// (0x000291bf) heading_pane_cp70

0xca61,	// (0x0002af4a) popup_eswt_tasktip_window_t1_ParamLimits

0x9510,	// (0x000279f9) aid_touch_tab_arrow_left

0x951c,	// (0x00027a05) aid_touch_tab_arrow_right

0x6186,	// (0x0002466f) title_pane_g3_ParamLimits

0x6186,	// (0x0002466f) title_pane_g3

0x31e0,	// (0x000216c9) set_value_pane_g1

0x7864,	// (0x00025d4d) popup_toolbar_trans_pane_ParamLimits

0xcbaf,	// (0x0002b098) aid_size_cell_tb_trans_pane_ParamLimits

0x3287,	// (0x00021770) bg_tb_trans_pane_ParamLimits

0xcbc1,	// (0x0002b0aa) grid_tb_trans_pane_ParamLimits

0x1671,	// (0x0001fb5a) cont_note_pane_ParamLimits

0x1671,	// (0x0001fb5a) cont_note_pane

0x2f7b,	// (0x00021464) cont_snote2_single_text_pane_ParamLimits

0x2f7b,	// (0x00021464) cont_snote2_single_text_pane

0x2f7b,	// (0x00021464) cont_snote2_single_graphic_pane_ParamLimits

0x2f7b,	// (0x00021464) cont_snote2_single_graphic_pane

0xa019,	// (0x00028502) cont_note_wait_pane_ParamLimits

0xa019,	// (0x00028502) cont_note_wait_pane

0xa019,	// (0x00028502) cont_note_image_pane_ParamLimits

0xa019,	// (0x00028502) cont_note_image_pane

0xcc69,	// (0x0002b152) popup_note2_window_g1_ParamLimits

0xcc69,	// (0x0002b152) popup_note2_window_g1

0xcc9a,	// (0x0002b183) popup_note2_window_t1_ParamLimits

0xcc9a,	// (0x0002b183) popup_note2_window_t1

0xccdf,	// (0x0002b1c8) popup_note2_window_t2_ParamLimits

0xccdf,	// (0x0002b1c8) popup_note2_window_t2

0xcd24,	// (0x0002b20d) popup_note2_window_t3_ParamLimits

0xcd24,	// (0x0002b20d) popup_note2_window_t3

0xcd69,	// (0x0002b252) popup_note2_window_t4_ParamLimits

0xcd69,	// (0x0002b252) popup_note2_window_t4

0x2d75,	// (0x0002125e) popup_note2_window_t5_ParamLimits

0x2d75,	// (0x0002125e) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0002e127) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0002e127) popup_note2_window_t

0xcd98,	// (0x0002b281) popup_note2_image_window_g1_ParamLimits

0xcd98,	// (0x0002b281) popup_note2_image_window_g1

0xcda4,	// (0x0002b28d) popup_note2_image_window_g2_ParamLimits

0xcda4,	// (0x0002b28d) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x0002e132) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x0002e132) popup_note2_image_window_g

0xcdb6,	// (0x0002b29f) popup_note2_image_window_t1_ParamLimits

0xcdb6,	// (0x0002b29f) popup_note2_image_window_t1

0xcdce,	// (0x0002b2b7) popup_note2_image_window_t2_ParamLimits

0xcdce,	// (0x0002b2b7) popup_note2_image_window_t2

0xcde6,	// (0x0002b2cf) popup_note2_image_window_t3_ParamLimits

0xcde6,	// (0x0002b2cf) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0002e137) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0002e137) popup_note2_image_window_t

0xa027,	// (0x00028510) popup_note2_wait_window_g1_ParamLimits

0xa027,	// (0x00028510) popup_note2_wait_window_g1

0xce02,	// (0x0002b2eb) popup_note2_wait_window_g2_ParamLimits

0xce02,	// (0x0002b2eb) popup_note2_wait_window_g2

0xa03f,	// (0x00028528) popup_note2_wait_window_g3_ParamLimits

0xa03f,	// (0x00028528) popup_note2_wait_window_g3

0x0002,

0xfc55,	// (0x0002e13e) popup_note2_wait_window_g_ParamLimits

0xfc55,	// (0x0002e13e) popup_note2_wait_window_g

0xce0e,	// (0x0002b2f7) popup_note2_wait_window_t1_ParamLimits

0xce0e,	// (0x0002b2f7) popup_note2_wait_window_t1

0xce2c,	// (0x0002b315) popup_note2_wait_window_t2_ParamLimits

0xce2c,	// (0x0002b315) popup_note2_wait_window_t2

0xce4a,	// (0x0002b333) popup_note2_wait_window_t3_ParamLimits

0xce4a,	// (0x0002b333) popup_note2_wait_window_t3

0xce5c,	// (0x0002b345) popup_note2_wait_window_t4_ParamLimits

0xce5c,	// (0x0002b345) popup_note2_wait_window_t4

0x0003,

0xfc5c,	// (0x0002e145) popup_note2_wait_window_t_ParamLimits

0xfc5c,	// (0x0002e145) popup_note2_wait_window_t

0xce6e,	// (0x0002b357) wait_bar2_pane_ParamLimits

0xce6e,	// (0x0002b357) wait_bar2_pane

0xce86,	// (0x0002b36f) popup_snote2_single_text_window_g1_ParamLimits

0xce86,	// (0x0002b36f) popup_snote2_single_text_window_g1

0xceae,	// (0x0002b397) popup_snote2_single_text_window_t1_ParamLimits

0xceae,	// (0x0002b397) popup_snote2_single_text_window_t1

0xcefa,	// (0x0002b3e3) popup_snote2_single_text_window_t2_ParamLimits

0xcefa,	// (0x0002b3e3) popup_snote2_single_text_window_t2

0xcf46,	// (0x0002b42f) popup_snote2_single_text_window_t3_ParamLimits

0xcf46,	// (0x0002b42f) popup_snote2_single_text_window_t3

0xcf87,	// (0x0002b470) popup_snote2_single_text_window_t4_ParamLimits

0xcf87,	// (0x0002b470) popup_snote2_single_text_window_t4

0xcfbd,	// (0x0002b4a6) popup_snote2_single_text_window_t5_ParamLimits

0xcfbd,	// (0x0002b4a6) popup_snote2_single_text_window_t5

0x0004,

0xfc65,	// (0x0002e14e) popup_snote2_single_text_window_t_ParamLimits

0xfc65,	// (0x0002e14e) popup_snote2_single_text_window_t

0xcfe8,	// (0x0002b4d1) popup_snote2_single_graphic_window_g1_ParamLimits

0xcfe8,	// (0x0002b4d1) popup_snote2_single_graphic_window_g1

0xd010,	// (0x0002b4f9) popup_snote2_single_graphic_window_g2_ParamLimits

0xd010,	// (0x0002b4f9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc70,	// (0x0002e159) popup_snote2_single_graphic_window_g_ParamLimits

0xfc70,	// (0x0002e159) popup_snote2_single_graphic_window_g

0xd038,	// (0x0002b521) popup_snote2_single_graphic_window_t1_ParamLimits

0xd038,	// (0x0002b521) popup_snote2_single_graphic_window_t1

0xd084,	// (0x0002b56d) popup_snote2_single_graphic_window_t2_ParamLimits

0xd084,	// (0x0002b56d) popup_snote2_single_graphic_window_t2

0xcf46,	// (0x0002b42f) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf46,	// (0x0002b42f) popup_snote2_single_graphic_window_t3

0xcf87,	// (0x0002b470) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf87,	// (0x0002b470) popup_snote2_single_graphic_window_t4

0xcfbd,	// (0x0002b4a6) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfbd,	// (0x0002b4a6) popup_snote2_single_graphic_window_t5

0x0004,

0xfc75,	// (0x0002e15e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc75,	// (0x0002e15e) popup_snote2_single_graphic_window_t

0xbad8,	// (0x00029fc1) clock_nsta_pane_cp2_t1

0xbad8,	// (0x00029fc1) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0002df7e) clock_nsta_pane_cp2_t

0x5192,	// (0x0002367b) form_field_data_wide_pane_g1_ParamLimits

0x32ad,	// (0x00021796) form_field_data_wide_pane_g2_ParamLimits

0x32ad,	// (0x00021796) form_field_data_wide_pane_g2

0x32b9,	// (0x000217a2) form_field_data_wide_pane_g3_ParamLimits

0x32b9,	// (0x000217a2) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002db3f) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002db3f) form_field_data_wide_pane_g

0xb9b3,	// (0x00029e9c) grid_touch_3_pane_ParamLimits

0xb9b3,	// (0x00029e9c) grid_touch_3_pane

0xd0d0,	// (0x0002b5b9) cell_touch_3_pane_ParamLimits

0xd0d0,	// (0x0002b5b9) cell_touch_3_pane

0xbfd4,	// (0x0002a4bd) cell_touch_3_pane_g1

0xbfd4,	// (0x0002a4bd) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0002e003) cell_touch_3_pane_g

0x2dcd,	// (0x000212b6) cont_query_data_pane

0x2dd5,	// (0x000212be) cont_query_data_pane_cp1

0xd103,	// (0x0002b5ec) button_value_adjust_pane_cp7

0xd10b,	// (0x0002b5f4) query_popup_pane_cp3

0x6dee,	// (0x000252d7) bg_popup_sub_pane_cp22_ParamLimits

0x6e04,	// (0x000252ed) navi_navi_volume_pane_cp2

0x6e1f,	// (0x00025308) popup_side_volume_key_window_g2

0x6e2e,	// (0x00025317) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0002dbd5) popup_side_volume_key_window_g

0x6e4b,	// (0x00025334) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0002dbdc) popup_side_volume_key_window_t

0x8ee2,	// (0x000273cb) popup_side_volume_key_window_ParamLimits

0x4dd1,	// (0x000232ba) list_double_graphic_pane_g4_ParamLimits

0x4dd1,	// (0x000232ba) list_double_graphic_pane_g4

0x560d,	// (0x00023af6) list_single_2heading_msg_pane_ParamLimits

0x560d,	// (0x00023af6) list_single_2heading_msg_pane

0x5bde,	// (0x000240c7) list_single_2heading_msg_pane_g1_ParamLimits

0x5bde,	// (0x000240c7) list_single_2heading_msg_pane_g1

0x4c00,	// (0x000230e9) list_single_2heading_msg_pane_g2_ParamLimits

0x4c00,	// (0x000230e9) list_single_2heading_msg_pane_g2

0x5bea,	// (0x000240d3) list_single_2heading_msg_pane_g3_ParamLimits

0x5bea,	// (0x000240d3) list_single_2heading_msg_pane_g3

0x5bf6,	// (0x000240df) list_single_2heading_msg_pane_g4_ParamLimits

0x5bf6,	// (0x000240df) list_single_2heading_msg_pane_g4

0x0003,

0xfc80,	// (0x0002e169) list_single_2heading_msg_pane_g_ParamLimits

0xfc80,	// (0x0002e169) list_single_2heading_msg_pane_g

0x5c0e,	// (0x000240f7) list_single_2heading_msg_pane_t1_ParamLimits

0x5c0e,	// (0x000240f7) list_single_2heading_msg_pane_t1

0x5c36,	// (0x0002411f) list_single_2heading_msg_pane_t2_ParamLimits

0x5c36,	// (0x0002411f) list_single_2heading_msg_pane_t2

0x5c6a,	// (0x00024153) list_single_2heading_msg_pane_t3_ParamLimits

0x5c6a,	// (0x00024153) list_single_2heading_msg_pane_t3

0x5ca3,	// (0x0002418c) list_single_2heading_msg_pane_t4_ParamLimits

0x5ca3,	// (0x0002418c) list_single_2heading_msg_pane_t4

0x0003,

0xfc89,	// (0x0002e172) list_single_2heading_msg_pane_t_ParamLimits

0xfc89,	// (0x0002e172) list_single_2heading_msg_pane_t

0x14d2,	// (0x0001f9bb) title_pane_g4_ParamLimits

0x14d2,	// (0x0001f9bb) title_pane_g4

0x682c,	// (0x00024d15) title_pane_stacon_g3_ParamLimits

0x682c,	// (0x00024d15) title_pane_stacon_g3

0xcc2c,	// (0x0002b115) list_single_2graphic_im_pane_g4_ParamLimits

0xcc2c,	// (0x0002b115) list_single_2graphic_im_pane_g4

0xaa89,	// (0x00028f72) popup_side_volume_key_window_cp

0xb2b7,	// (0x000297a0) main_idle_act2_pane_t1

0x7968,	// (0x00025e51) toolbar_button_pane_g10

0x64e3,	// (0x000249cc) popup_toolbar_window_cp1

0xbac9,	// (0x00029fb2) clock_nsta_pane_cp_t1

0xbac9,	// (0x00029fb2) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0002df79) clock_nsta_pane_cp_t

0x6e04,	// (0x000252ed) navi_navi_volume_pane_cp2_ParamLimits

0x6e13,	// (0x000252fc) popup_side_volume_key_window_g1_ParamLimits

0x6e1f,	// (0x00025308) popup_side_volume_key_window_g2_ParamLimits

0x6e2e,	// (0x00025317) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0002dbd5) popup_side_volume_key_window_g_ParamLimits

0x7ddd,	// (0x000262c6) fep_hwr_aid_pane

0x1484,	// (0x0001f96d) bg_fep_hwr_top_pane_g4_ParamLimits

0xc035,	// (0x0002a51e) fep_hwr_top_pane_g1_ParamLimits

0xc047,	// (0x0002a530) fep_hwr_top_pane_g2_ParamLimits

0x7e98,	// (0x00026381) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0002dfce) fep_hwr_top_pane_g_ParamLimits

0x7ead,	// (0x00026396) fep_hwr_top_text_pane_ParamLimits

0xa83e,	// (0x00028d27) aid_touch_tab_arrow_arrow_2

0xa847,	// (0x00028d30) aid_touch_tab_arrow_left_2

0x7df1,	// (0x000262da) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7e28,	// (0x00026311) fep_hwr_prediction_pane

0xc19d,	// (0x0002a686) fep_vkb_prediction_pane

0xc2a3,	// (0x0002a78c) fep_vkb_side_pane_g3_ParamLimits

0xc2a3,	// (0x0002a78c) fep_vkb_side_pane_g3

0xc24f,	// (0x0002a738) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc71d,	// (0x0002ac06) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc72a,	// (0x0002ac13) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0002e078) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd132,	// (0x0002b61b) fep_hwr_prediction_pane_g1

0x8153,	// (0x0002663c) fep_hwr_prediction_pane_g2

0x815b,	// (0x00026644) fep_hwr_prediction_pane_g3

0x8163,	// (0x0002664c) fep_hwr_prediction_pane_g4

0x0003,

0xfc92,	// (0x0002e17b) fep_hwr_prediction_pane_g

0xd132,	// (0x0002b61b) fep_vkb_prediction_pane_g1

0xd13c,	// (0x0002b625) fep_vkb_prediction_pane_g2

0xd144,	// (0x0002b62d) fep_vkb_prediction_pane_g3

0xd14c,	// (0x0002b635) fep_vkb_prediction_pane_g4

0x0003,

0xfc9b,	// (0x0002e184) fep_vkb_prediction_pane_g

0x7c5d,	// (0x00026146) slider_set_pane_g3

0x7c71,	// (0x0002615a) slider_set_pane_g4

0x7c89,	// (0x00026172) slider_set_pane_g5

0x7c5d,	// (0x00026146) slider_set_pane_g6

0x7c9f,	// (0x00026188) slider_set_pane_g7

0xaf0f,	// (0x000293f8) slider_form_pane_g3

0xaf18,	// (0x00029401) slider_form_pane_g4

0xaf20,	// (0x00029409) slider_form_pane_g5

0xaf0f,	// (0x000293f8) slider_form_pane_g6

0xaf28,	// (0x00029411) slider_form_pane_g7

0xb57b,	// (0x00029a64) slider_set_pane_vc_g3

0xb584,	// (0x00029a6d) slider_set_pane_vc_g4

0xb58d,	// (0x00029a76) slider_set_pane_vc_g5

0xb57b,	// (0x00029a64) slider_set_pane_vc_g6

0xb596,	// (0x00029a7f) slider_set_pane_vc_g7

0xb76c,	// (0x00029c55) slider_form_pane_vc_g1

0xb775,	// (0x00029c5e) slider_form_pane_vc_g2

0xb77e,	// (0x00029c67) slider_form_pane_vc_g3

0xb76c,	// (0x00029c55) slider_form_pane_vc_g4

0xb787,	// (0x00029c70) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0002df4b) slider_form_pane_vc_g

0x14b4,	// (0x0001f99d) main_idle_act3_pane

0xd154,	// (0x0002b63d) ai3_links_pane

0xd15d,	// (0x0002b646) popup_ai3_data_window_ParamLimits

0xd15d,	// (0x0002b646) popup_ai3_data_window

0x14b4,	// (0x0001f99d) grid_ai3_links_pane

0xd17b,	// (0x0002b664) cell_ai3_links_pane_ParamLimits

0xd17b,	// (0x0002b664) cell_ai3_links_pane

0xd195,	// (0x0002b67e) bg_popup_sub_pane_cp11

0xd1a2,	// (0x0002b68b) cell_ai3_links_pane_g1

0x14b4,	// (0x0001f99d) bg_popup_sub_pane_cp12

0xd1c7,	// (0x0002b6b0) heading_ai3_data_pane

0xd1cf,	// (0x0002b6b8) list_ai3_gene_pane

0xd1db,	// (0x0002b6c4) popup_ai3_data_window_g1

0xd1e3,	// (0x0002b6cc) heading_ai3_data_pane_g1

0xd1eb,	// (0x0002b6d4) heading_ai3_data_pane_t1

0xd1f9,	// (0x0002b6e2) list_double_ai3_gene_pane_ParamLimits

0xd1f9,	// (0x0002b6e2) list_double_ai3_gene_pane

0xd206,	// (0x0002b6ef) list_single_ai3_gene_pane_ParamLimits

0xd206,	// (0x0002b6ef) list_single_ai3_gene_pane

0xbf99,	// (0x0002a482) list_highlight_pane_cp7_ParamLimits

0xbf99,	// (0x0002a482) list_highlight_pane_cp7

0xd213,	// (0x0002b6fc) list_single_a13_gene_pane_t1_ParamLimits

0xd213,	// (0x0002b6fc) list_single_a13_gene_pane_t1

0xd22a,	// (0x0002b713) list_single_ai3_gene_pane_g1

0xd233,	// (0x0002b71c) list_single_ai3_gene_pane_g2

0x0001,

0xfca4,	// (0x0002e18d) list_single_ai3_gene_pane_g

0xd23b,	// (0x0002b724) list_double_ai3_gene_pane_g1_ParamLimits

0xd23b,	// (0x0002b724) list_double_ai3_gene_pane_g1

0xd247,	// (0x0002b730) list_double_ai3_gene_pane_t1_ParamLimits

0xd247,	// (0x0002b730) list_double_ai3_gene_pane_t1

0xd263,	// (0x0002b74c) list_double_ai3_gene_pane_t2_ParamLimits

0xd263,	// (0x0002b74c) list_double_ai3_gene_pane_t2

0xd278,	// (0x0002b761) list_double_ai3_gene_pane_t3_ParamLimits

0xd278,	// (0x0002b761) list_double_ai3_gene_pane_t3

0x0002,

0xfca9,	// (0x0002e192) list_double_ai3_gene_pane_t_ParamLimits

0xfca9,	// (0x0002e192) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5bd4,	// (0x000240bd) aid_size_min_col_2

0xd11c,	// (0x0002b605) aid_size_min_msg_ParamLimits

0xd11c,	// (0x0002b605) aid_size_min_msg

0xc3af,	// (0x0002a898) fep_vkb_top_text_pane_g2_ParamLimits

0xc3af,	// (0x0002a898) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0002dffe) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0002dffe) fep_vkb_top_text_pane_g

0x14b4,	// (0x0001f99d) main_hc_apps_shell_pane

0xd295,	// (0x0002b77e) grid_hc_apps_pane_ParamLimits

0xd295,	// (0x0002b77e) grid_hc_apps_pane

0xd2a7,	// (0x0002b790) list_hc_apps_pane

0xd2af,	// (0x0002b798) scroll_pane_cp37_ParamLimits

0xd2af,	// (0x0002b798) scroll_pane_cp37

0xd2bb,	// (0x0002b7a4) cell_hc_apps_pane_ParamLimits

0xd2bb,	// (0x0002b7a4) cell_hc_apps_pane

0xd371,	// (0x0002b85a) cell_hc_apps_pane_g1_ParamLimits

0xd371,	// (0x0002b85a) cell_hc_apps_pane_g1

0xd39d,	// (0x0002b886) cell_hc_apps_pane_g2_ParamLimits

0xd39d,	// (0x0002b886) cell_hc_apps_pane_g2

0xd3b9,	// (0x0002b8a2) cell_hc_apps_pane_g3_ParamLimits

0xd3b9,	// (0x0002b8a2) cell_hc_apps_pane_g3

0x0002,

0xfcb0,	// (0x0002e199) cell_hc_apps_pane_g_ParamLimits

0xfcb0,	// (0x0002e199) cell_hc_apps_pane_g

0xd3db,	// (0x0002b8c4) cell_hc_apps_pane_t1_ParamLimits

0xd3db,	// (0x0002b8c4) cell_hc_apps_pane_t1

0x1671,	// (0x0001fb5a) grid_highlight_pane_cp10_ParamLimits

0x1671,	// (0x0001fb5a) grid_highlight_pane_cp10

0xd41b,	// (0x0002b904) list_single_hc_apps_pane_ParamLimits

0xd41b,	// (0x0002b904) list_single_hc_apps_pane

0xd45a,	// (0x0002b943) list_single_hc_apps_pane_g1

0x5cc8,	// (0x000241b1) list_single_hc_apps_pane_g2

0x0001,

0xfcb7,	// (0x0002e1a0) list_single_hc_apps_pane_g

0x5ce1,	// (0x000241ca) list_single_hc_apps_pane_g2_copy1

0x5cfd,	// (0x000241e6) list_single_hc_apps_pane_t1

0x1524,	// (0x0001fa0d) bg_set_opt_pane_cp_ParamLimits

0x6238,	// (0x00024721) setting_slider_pane_t1_ParamLimits

0x6251,	// (0x0002473a) setting_slider_pane_t2_ParamLimits

0x626b,	// (0x00024754) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002da22) setting_slider_pane_t_ParamLimits

0x6283,	// (0x0002476c) slider_set_pane_ParamLimits

0x7201,	// (0x000256ea) control_pane_g5_ParamLimits

0x7201,	// (0x000256ea) control_pane_g5

0xad42,	// (0x0002922b) slider_set_pane_g1_ParamLimits

0x7c51,	// (0x0002613a) slider_set_pane_g2_ParamLimits

0x7c5d,	// (0x00026146) slider_set_pane_g3_ParamLimits

0x7c71,	// (0x0002615a) slider_set_pane_g4_ParamLimits

0x7c89,	// (0x00026172) slider_set_pane_g5_ParamLimits

0x7c5d,	// (0x00026146) slider_set_pane_g6_ParamLimits

0x7c9f,	// (0x00026188) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0002de28) slider_set_pane_g_ParamLimits

0x8fd2,	// (0x000274bb) navi_icon_text_pane_ParamLimits

0x94cf,	// (0x000279b8) aid_fill_nsta_2_ParamLimits

0x9510,	// (0x000279f9) aid_touch_tab_arrow_left_ParamLimits

0x951c,	// (0x00027a05) aid_touch_tab_arrow_right_ParamLimits

0x9588,	// (0x00027a71) clock_nsta_pane_ParamLimits

0xa820,	// (0x00028d09) navi_icon_pane_g1_ParamLimits

0xa82c,	// (0x00028d15) navi_text_pane_t1_ParamLimits

0xbbe6,	// (0x0002a0cf) navi_icon_text_pane_g1_ParamLimits

0xbbf2,	// (0x0002a0db) navi_icon_text_pane_t1_ParamLimits

0xd45a,	// (0x0002b943) list_single_hc_apps_pane_g1_ParamLimits

0x5cc8,	// (0x000241b1) list_single_hc_apps_pane_g2_ParamLimits

0xfcb7,	// (0x0002e1a0) list_single_hc_apps_pane_g_ParamLimits

0x5ce1,	// (0x000241ca) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5cfd,	// (0x000241e6) list_single_hc_apps_pane_t1_ParamLimits

0x606c,	// (0x00024555) popup_toolbar2_fixed_window_ParamLimits

0x606c,	// (0x00024555) popup_toolbar2_fixed_window

0x785a,	// (0x00025d43) popup_toolbar2_float_window

0x14b4,	// (0x0001f99d) bg_popup_sub_pane_cp27

0xd473,	// (0x0002b95c) grid_toolbar2_float_pane

0x14b4,	// (0x0001f99d) bg_popup_sub_pane_cp26

0xd473,	// (0x0002b95c) grid_toolbar2_fixed_pane

0xd47b,	// (0x0002b964) cell_toolbar2_fixed_pane_ParamLimits

0xd47b,	// (0x0002b964) cell_toolbar2_fixed_pane

0xd48b,	// (0x0002b974) cell_toolbar2_fixed_pane_g1

0xd494,	// (0x0002b97d) toolbar2_fixed_button_pane

0x99b3,	// (0x00027e9c) toolbar2_fixed_button_pane_g1

0x99bb,	// (0x00027ea4) toolbar2_fixed_button_pane_g2

0x99c3,	// (0x00027eac) toolbar2_fixed_button_pane_g3

0x99cb,	// (0x00027eb4) toolbar2_fixed_button_pane_g4

0x99d3,	// (0x00027ebc) toolbar2_fixed_button_pane_g5

0x99db,	// (0x00027ec4) toolbar2_fixed_button_pane_g6

0x99e3,	// (0x00027ecc) toolbar2_fixed_button_pane_g7

0x99eb,	// (0x00027ed4) toolbar2_fixed_button_pane_g8

0x99f3,	// (0x00027edc) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0002dd2a) toolbar2_fixed_button_pane_g

0xd49c,	// (0x0002b985) cell_toolbar2_float_pane_ParamLimits

0xd49c,	// (0x0002b985) cell_toolbar2_float_pane

0xd4ad,	// (0x0002b996) cell_toolbar2_float_pane_g1

0xd494,	// (0x0002b97d) toolbar2_fixed_button_pane_cp

0xc10b,	// (0x0002a5f4) fep_vkb_accented_list_pane_ParamLimits

0xc10b,	// (0x0002a5f4) fep_vkb_accented_list_pane

0x800f,	// (0x000264f8) bg_popup_fep_shadow_pane_g9

0x9156,	// (0x0002763f) bg_popup_fep_shadow_pane_cp3

0x65ba,	// (0x00024aa3) list_accented_list_pane

0xd4b6,	// (0x0002b99f) list_single_accented_list_pane_ParamLimits

0xd4b6,	// (0x0002b99f) list_single_accented_list_pane

0x9156,	// (0x0002763f) list_highlight_pane_cp10

0xd4c7,	// (0x0002b9b0) list_single_accented_list_pane_t1

0x77a0,	// (0x00025c89) popup_slider_window_ParamLimits

0x77a0,	// (0x00025c89) popup_slider_window

0xd113,	// (0x0002b5fc) aid_indentation_list_msg

0xd597,	// (0x0002ba80) bg_popup_window_pane_cp19

0xd603,	// (0x0002baec) popup_slider_window_g1

0xd61f,	// (0x0002bb08) popup_slider_window_g2

0xd63b,	// (0x0002bb24) popup_slider_window_g3

0x0005,

0xfcbc,	// (0x0002e1a5) popup_slider_window_g

0xd6a1,	// (0x0002bb8a) popup_slider_window_t1

0xd715,	// (0x0002bbfe) small_volume_slider_vertical_pane

0xbfd4,	// (0x0002a4bd) small_volume_slider_vertical_pane_g1

0xbfd4,	// (0x0002a4bd) small_volume_slider_vertical_pane_g2

0xd731,	// (0x0002bc1a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcce,	// (0x0002e1b7) small_volume_slider_vertical_pane_g

0x5e24,	// (0x0002430d) area_side_right_pane_ParamLimits

0x5e24,	// (0x0002430d) area_side_right_pane

0x816b,	// (0x00026654) aid_size_side_button_ParamLimits

0x816b,	// (0x00026654) aid_size_side_button

0x817f,	// (0x00026668) grid_sctrl_middle_pane_ParamLimits

0x817f,	// (0x00026668) grid_sctrl_middle_pane

0x819e,	// (0x00026687) sctrl_sk_bottom_pane

0x81af,	// (0x00026698) sctrl_sk_top_pane

0x81c1,	// (0x000266aa) aid_touch_sctrl_top

0x1671,	// (0x0001fb5a) bg_sctrl_sk_pane_ParamLimits

0x1671,	// (0x0001fb5a) bg_sctrl_sk_pane

0x81ce,	// (0x000266b7) sctrl_sk_top_pane_g1

0x81db,	// (0x000266c4) sctrl_sk_top_pane_t1

0x81c1,	// (0x000266aa) aid_touch_sctrl_bottom

0x1671,	// (0x0001fb5a) bg_sctrl_sk_pane_cp_ParamLimits

0x1671,	// (0x0001fb5a) bg_sctrl_sk_pane_cp

0x81f6,	// (0x000266df) sctrl_sk_bottom_pane_g1

0x81db,	// (0x000266c4) sctrl_sk_bottom_pane_t1

0x81ff,	// (0x000266e8) cell_sctrl_middle_pane_ParamLimits

0x81ff,	// (0x000266e8) cell_sctrl_middle_pane

0x821c,	// (0x00026705) aid_touch_sctrl_middle_ParamLimits

0x821c,	// (0x00026705) aid_touch_sctrl_middle

0x3287,	// (0x00021770) bg_sctrl_middle_pane_ParamLimits

0x3287,	// (0x00021770) bg_sctrl_middle_pane

0xc24f,	// (0x0002a738) cell_sctrl_middle_pane_g1_ParamLimits

0xc24f,	// (0x0002a738) cell_sctrl_middle_pane_g1

0x822e,	// (0x00026717) cell_sctrl_middle_pane_g2_ParamLimits

0x822e,	// (0x00026717) cell_sctrl_middle_pane_g2

0x0001,

0xfcda,	// (0x0002e1c3) cell_sctrl_middle_pane_g_ParamLimits

0xfcda,	// (0x0002e1c3) cell_sctrl_middle_pane_g

0x99b3,	// (0x00027e9c) bg_sctrl_middle_pane_g1

0x99bb,	// (0x00027ea4) bg_sctrl_middle_pane_g2

0x99c3,	// (0x00027eac) bg_sctrl_middle_pane_g3

0x99cb,	// (0x00027eb4) bg_sctrl_middle_pane_g4

0x99d3,	// (0x00027ebc) bg_sctrl_middle_pane_g5

0x99db,	// (0x00027ec4) bg_sctrl_middle_pane_g6

0x99e3,	// (0x00027ecc) bg_sctrl_middle_pane_g7

0x99eb,	// (0x00027ed4) bg_sctrl_middle_pane_g8

0x0007,

0xfcdf,	// (0x0002e1c8) bg_sctrl_middle_pane_g

0x99f3,	// (0x00027edc) bg_sctrl_middle_pane_g8_copy1

0x99b3,	// (0x00027e9c) bg_sctrl_sk_pane_g1

0x99bb,	// (0x00027ea4) bg_sctrl_sk_pane_g2

0x99c3,	// (0x00027eac) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0002dd2a) bg_sctrl_sk_pane_g

0x3139,	// (0x00021622) aid_size_touch_scroll_bar

0x99cb,	// (0x00027eb4) bg_sctrl_sk_pane_g4

0x99d3,	// (0x00027ebc) bg_sctrl_sk_pane_g5

0x99db,	// (0x00027ec4) bg_sctrl_sk_pane_g6

0x99e3,	// (0x00027ecc) bg_sctrl_sk_pane_g7

0x99eb,	// (0x00027ed4) bg_sctrl_sk_pane_g8

0x99f3,	// (0x00027edc) bg_sctrl_sk_pane_g9

0x73b5,	// (0x0002589e) popup_fep_china_hwr2_fs_candidate_window

0x73bf,	// (0x000258a8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x73bf,	// (0x000258a8) popup_fep_china_hwr2_fs_control_window

0xc24f,	// (0x0002a738) sctrl_sk_top_pane_g2

0x0001,

0xfcd5,	// (0x0002e1be) sctrl_sk_top_pane_g

0xd73a,	// (0x0002bc23) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd73a,	// (0x0002bc23) aid_fep_china_hwr2_fs_cell

0xd74d,	// (0x0002bc36) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd74d,	// (0x0002bc36) bg_popup_fep_shadow_pane_cp4

0xd766,	// (0x0002bc4f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd766,	// (0x0002bc4f) bg_popup_fep_shadow_pane_cp5

0xd778,	// (0x0002bc61) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd778,	// (0x0002bc61) popup_fep_china_hwr2_fs_control_bar_grid

0xd788,	// (0x0002bc71) popup_fep_china_hwr2_fs_control_funtion_grid

0xd790,	// (0x0002bc79) aid_fep_china_hwr2_fs_candi_cell

0x14b4,	// (0x0001f99d) bg_popup_fep_shadow_pane_cp6

0xd79a,	// (0x0002bc83) popup_fep_china_hwr2_fs_candidate_grid

0xd7a4,	// (0x0002bc8d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7a4,	// (0x0002bc8d) cell_fep_china_hwr2_fs_funtion_grid

0xbfd4,	// (0x0002a4bd) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7bc,	// (0x0002bca5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7bc,	// (0x0002bca5) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7ca,	// (0x0002bcb3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7ca,	// (0x0002bcb3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf0,	// (0x0002e1d9) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf0,	// (0x0002e1d9) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7e0,	// (0x0002bcc9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7e0,	// (0x0002bcc9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7f5,	// (0x0002bcde) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7f5,	// (0x0002bcde) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf5,	// (0x0002e1de) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf5,	// (0x0002e1de) cell_fep_china_hwr2_fs_funtion_grid_t

0xd811,	// (0x0002bcfa) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd819,	// (0x0002bd02) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd821,	// (0x0002bd0a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfa,	// (0x0002e1e3) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd829,	// (0x0002bd12) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd829,	// (0x0002bd12) cell_fep_china_hwr2_fs_candidate_grid

0xd848,	// (0x0002bd31) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd850,	// (0x0002bd39) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfd4,	// (0x0002a4bd) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfd4,	// (0x0002a4bd) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0002e003) cell_fep_china_hwr2_fs_candidate_grid_g

0xd858,	// (0x0002bd41) cell_fep_china_hwr2_fs_candidate_grid_t1

0x959b,	// (0x00027a84) clock_nsta_pane_cp_24_ParamLimits

0x959b,	// (0x00027a84) clock_nsta_pane_cp_24

0x961b,	// (0x00027b04) indicator_nsta_pane_cp_24_ParamLimits

0x961b,	// (0x00027b04) indicator_nsta_pane_cp_24

0xa69c,	// (0x00028b85) heading_pane_g1

0x0001,

0xf8a6,	// (0x0002dd8f) heading_pane_g

0xb0fe,	// (0x000295e7) grid_sct_catagory_button_pane

0xb130,	// (0x00029619) scroll_pane_cp5_ParamLimits

0xbc34,	// (0x0002a11d) button_value_adjust_pane_cp5_ParamLimits

0xbc34,	// (0x0002a11d) button_value_adjust_pane_cp5

0xbd19,	// (0x0002a202) form2_midp_time_pane_ParamLimits

0xd866,	// (0x0002bd4f) cell_sct_catagory_button_pane_ParamLimits

0xd866,	// (0x0002bd4f) cell_sct_catagory_button_pane

0xbf99,	// (0x0002a482) bg_button_pane_cp01_ParamLimits

0xbf99,	// (0x0002a482) bg_button_pane_cp01

0xbfd4,	// (0x0002a4bd) cell_sct_catagory_button_pane_g1

0x77e1,	// (0x00025cca) popup_tb_extension_window

0xd878,	// (0x0002bd61) aid_size_cell_ext_ParamLimits

0xd878,	// (0x0002bd61) aid_size_cell_ext

0x1671,	// (0x0001fb5a) bg_tb_trans_pane_cp1_ParamLimits

0x1671,	// (0x0001fb5a) bg_tb_trans_pane_cp1

0xd898,	// (0x0002bd81) grid_tb_ext_pane_ParamLimits

0xd898,	// (0x0002bd81) grid_tb_ext_pane

0xd8c6,	// (0x0002bdaf) cell_tb_ext_pane_ParamLimits

0xd8c6,	// (0x0002bdaf) cell_tb_ext_pane

0xd8dd,	// (0x0002bdc6) cell_tb_ext_pane_g1_ParamLimits

0xd8dd,	// (0x0002bdc6) cell_tb_ext_pane_g1

0xd8fa,	// (0x0002bde3) cell_tb_ext_pane_t1

0x1671,	// (0x0001fb5a) list_highlight_pane_cp11_ParamLimits

0x1671,	// (0x0001fb5a) list_highlight_pane_cp11

0x608b,	// (0x00024574) popup_uni_indicator_window_ParamLimits

0x608b,	// (0x00024574) popup_uni_indicator_window

0x3287,	// (0x00021770) bg_popup_sub_pane_cp14

0xd915,	// (0x0002bdfe) list_uniindi_pane

0xd921,	// (0x0002be0a) uniindi_top_pane

0x1671,	// (0x0001fb5a) bg_uniindi_top_pane

0xd942,	// (0x0002be2b) uniindi_top_pane_g1

0xd958,	// (0x0002be41) uniindi_top_pane_g2

0x0003,

0xfd01,	// (0x0002e1ea) uniindi_top_pane_g

0xd982,	// (0x0002be6b) uniindi_top_pane_t1

0xd9ae,	// (0x0002be97) list_single_uniindi_pane_ParamLimits

0xd9ae,	// (0x0002be97) list_single_uniindi_pane

0xbfd4,	// (0x0002a4bd) bg_uniindi_top_pane_g1

0xd9c1,	// (0x0002beaa) list_single_uniindi_pane_g1

0xd9d4,	// (0x0002bebd) list_single_uniindi_pane_t1

0x14b4,	// (0x0001f99d) control_bg_pane

0xd9f9,	// (0x0002bee2) bg_sctrl_sk_pane_cp1

0xda02,	// (0x0002beeb) bg_sctrl_sk_pane_cp2

0xda0b,	// (0x0002bef4) control_bg_pane_g1

0xda14,	// (0x0002befd) control_bg_pane_g2

0x0001,

0xfd0a,	// (0x0002e1f3) control_bg_pane_g

0xba6c,	// (0x00029f55) cell_indicator_nsta_pane_g1_ParamLimits

0xba7a,	// (0x00029f63) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0002df67) cell_indicator_nsta_pane_g_ParamLimits

0x599d,	// (0x00023e86) form2_midp_time_pane_t1_ParamLimits

0x2f7b,	// (0x00021464) main_idle_act4_pane_ParamLimits

0x2f7b,	// (0x00021464) main_idle_act4_pane

0x77e1,	// (0x00025cca) popup_tb_extension_window_ParamLimits

0xd8b8,	// (0x0002bda1) tb_ext_find_pane_ParamLimits

0xd8b8,	// (0x0002bda1) tb_ext_find_pane

0xda1d,	// (0x0002bf06) ai_gene_pane_1_cp1

0x92a0,	// (0x00027789) ai_gene_pane_2_cp1

0xda25,	// (0x0002bf0e) list_single_idle_plugin_calendar_pane

0xda2e,	// (0x0002bf17) list_single_idle_plugin_notification_pane

0xda37,	// (0x0002bf20) list_single_idle_plugin_player_pane

0xda40,	// (0x0002bf29) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda40,	// (0x0002bf29) list_single_idle_plugin_shortcut_pane

0xda62,	// (0x0002bf4b) main_idle_act4_pane_t1

0xda74,	// (0x0002bf5d) main_idle_act4_pane_t2

0x0001,

0xfd0f,	// (0x0002e1f8) main_idle_act4_pane_t

0xda86,	// (0x0002bf6f) middle_sk_idle_act4_pane_ParamLimits

0xda86,	// (0x0002bf6f) middle_sk_idle_act4_pane

0xda9c,	// (0x0002bf85) popup_clock_digital_analogue_window_cp2

0xdab6,	// (0x0002bf9f) shortcut_wheel_idle_act4_pane_ParamLimits

0xdab6,	// (0x0002bf9f) shortcut_wheel_idle_act4_pane

0xbfd4,	// (0x0002a4bd) shortcut_wheel_idle_act4_pane_g1

0xbfd4,	// (0x0002a4bd) shortcut_wheel_idle_act4_pane_g2

0xbfd4,	// (0x0002a4bd) shortcut_wheel_idle_act4_pane_g3

0xbfd4,	// (0x0002a4bd) shortcut_wheel_idle_act4_pane_g4

0xbfd4,	// (0x0002a4bd) shortcut_wheel_idle_act4_pane_g5

0xdaca,	// (0x0002bfb3) shortcut_wheel_idle_act4_pane_g6

0xdad2,	// (0x0002bfbb) shortcut_wheel_idle_act4_pane_g7

0xdada,	// (0x0002bfc3) shortcut_wheel_idle_act4_pane_g8

0xdae2,	// (0x0002bfcb) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd14,	// (0x0002e1fd) shortcut_wheel_idle_act4_pane_g

0xc24f,	// (0x0002a738) middle_sk_idle_act4_pane_g1_ParamLimits

0xc24f,	// (0x0002a738) middle_sk_idle_act4_pane_g1

0xdb46,	// (0x0002c02f) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb46,	// (0x0002c02f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x0002e220) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x0002e220) middle_sk_idle_act4_pane_g

0xdb52,	// (0x0002c03b) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb52,	// (0x0002c03b) middle_sk_idle_act4_pane_t1

0xdb6f,	// (0x0002c058) grid_ai_shortcut_pane_ParamLimits

0xdb6f,	// (0x0002c058) grid_ai_shortcut_pane

0xdb88,	// (0x0002c071) list_highlight_pane_cp16_ParamLimits

0xdb88,	// (0x0002c071) list_highlight_pane_cp16

0xdb95,	// (0x0002c07e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb95,	// (0x0002c07e) list_single_idle_plugin_shortcut_pane_g1

0xdba1,	// (0x0002c08a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdba1,	// (0x0002c08a) list_single_idle_plugin_shortcut_pane_g2

0xdbbb,	// (0x0002c0a4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbbb,	// (0x0002c0a4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3c,	// (0x0002e225) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3c,	// (0x0002e225) list_single_idle_plugin_shortcut_pane_g

0xdbce,	// (0x0002c0b7) cell_ai_shortcut_pane_ParamLimits

0xdbce,	// (0x0002c0b7) cell_ai_shortcut_pane

0xdbf1,	// (0x0002c0da) cell_ai_shortcut_pane_g1_ParamLimits

0xdbf1,	// (0x0002c0da) cell_ai_shortcut_pane_g1

0xda1d,	// (0x0002bf06) ai_gene_pane_1_cp2

0xdc13,	// (0x0002c0fc) ai_gene_pane_2_cp2

0xdc1b,	// (0x0002c104) list_highlight_pane_cp15

0xdc24,	// (0x0002c10d) list_single_idle_plugin_calendar_pane_g1

0xdc1b,	// (0x0002c104) list_highlight_pane_cp17

0xdc2c,	// (0x0002c115) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc34,	// (0x0002c11d) list_single_idle_plugin_player_pane_g1

0xb365,	// (0x0002984e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd43,	// (0x0002e22c) list_single_idle_plugin_player_pane_g

0xdc3c,	// (0x0002c125) list_single_idle_plugin_player_pane_t1

0xdc4a,	// (0x0002c133) list_single_idle_plugin_player_pane_t2

0xdc58,	// (0x0002c141) list_single_idle_plugin_player_pane_t3

0xdc66,	// (0x0002c14f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd48,	// (0x0002e231) list_single_idle_plugin_player_pane_t

0xdc74,	// (0x0002c15d) wait_bar_pane_cp15

0xdc7c,	// (0x0002c165) grid_ai_notification_pane

0xb365,	// (0x0002984e) list_single_idle_plugin_notification_pane_g1

0xdc85,	// (0x0002c16e) cell_ai_notification_pane_ParamLimits

0xdc85,	// (0x0002c16e) cell_ai_notification_pane

0xdc92,	// (0x0002c17b) cell_ai_notification_pane_g1

0xdc9a,	// (0x0002c183) cell_ai_notification_pane_t1

0xdca8,	// (0x0002c191) tb_ext_find_button_pane

0xdcb0,	// (0x0002c199) tb_ext_find_pane_g1

0xdcb8,	// (0x0002c1a1) tb_ext_find_pane_t1

0x6c8c,	// (0x00025175) tb_ext_find_button_pane_g1

0xdcc6,	// (0x0002c1af) tb_ext_find_button_pane_g2

0x0001,

0xfd51,	// (0x0002e23a) tb_ext_find_button_pane_g

0xda62,	// (0x0002bf4b) main_idle_act4_pane_t1_ParamLimits

0xda74,	// (0x0002bf5d) main_idle_act4_pane_t2_ParamLimits

0xfd0f,	// (0x0002e1f8) main_idle_act4_pane_t_ParamLimits

0xda9c,	// (0x0002bf85) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdaaa,	// (0x0002bf93) sat_plugin_idle_act4_pane_ParamLimits

0xdaaa,	// (0x0002bf93) sat_plugin_idle_act4_pane

0xdccf,	// (0x0002c1b8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdccf,	// (0x0002c1b8) sat_plugin_idle_act4_pane_t1

0xdce2,	// (0x0002c1cb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdce2,	// (0x0002c1cb) sat_plugin_idle_act4_pane_t2

0xdcf5,	// (0x0002c1de) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdcf5,	// (0x0002c1de) sat_plugin_idle_act4_pane_t3

0xdd08,	// (0x0002c1f1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd08,	// (0x0002c1f1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd56,	// (0x0002e23f) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd56,	// (0x0002e23f) sat_plugin_idle_act4_pane_t

0x5fbc,	// (0x000244a5) popup_battery_window_ParamLimits

0x5fbc,	// (0x000244a5) popup_battery_window

0x1671,	// (0x0001fb5a) bg_popup_sub_pane_cp25_ParamLimits

0x1671,	// (0x0001fb5a) bg_popup_sub_pane_cp25

0xdd1b,	// (0x0002c204) popup_battery_window_g1_ParamLimits

0xdd1b,	// (0x0002c204) popup_battery_window_g1

0xdd27,	// (0x0002c210) popup_battery_window_t1_ParamLimits

0xdd27,	// (0x0002c210) popup_battery_window_t1

0xdd39,	// (0x0002c222) popup_battery_window_t2_ParamLimits

0xdd39,	// (0x0002c222) popup_battery_window_t2

0x0001,

0xfd5f,	// (0x0002e248) popup_battery_window_t_ParamLimits

0xfd5f,	// (0x0002e248) popup_battery_window_t

0x916a,	// (0x00027653) midp_canvas_pane_ParamLimits

0x91e2,	// (0x000276cb) midp_keypad_pane_ParamLimits

0x91e2,	// (0x000276cb) midp_keypad_pane

0x947d,	// (0x00027966) main_midp_pane_ParamLimits

0xbae7,	// (0x00029fd0) signal_pane_g2_cp_ParamLimits

0xdd56,	// (0x0002c23f) aid_size_cell_midp_keypad_ParamLimits

0xdd56,	// (0x0002c23f) aid_size_cell_midp_keypad

0xdd70,	// (0x0002c259) midp_keyp_game_grid_pane_ParamLimits

0xdd70,	// (0x0002c259) midp_keyp_game_grid_pane

0xdd90,	// (0x0002c279) midp_keyp_rocker_pane_ParamLimits

0xdd90,	// (0x0002c279) midp_keyp_rocker_pane

0xddbf,	// (0x0002c2a8) midp_keyp_sk_left_pane_ParamLimits

0xddbf,	// (0x0002c2a8) midp_keyp_sk_left_pane

0xde1b,	// (0x0002c304) midp_keyp_sk_right_pane_ParamLimits

0xde1b,	// (0x0002c304) midp_keyp_sk_right_pane

0x14b4,	// (0x0001f99d) bg_button_pane_cp03

0xde77,	// (0x0002c360) midp_keyp_sk_left_pane_g1

0x14b4,	// (0x0001f99d) bg_button_pane_cp04

0xde77,	// (0x0002c360) midp_keyp_sk_right_pane_g1

0xbfd4,	// (0x0002a4bd) midp_keyp_rocker_pane_g1

0xde7f,	// (0x0002c368) keyp_game_cell_pane_ParamLimits

0xde7f,	// (0x0002c368) keyp_game_cell_pane

0x14b4,	// (0x0001f99d) bg_button_pane_cp02

0xde92,	// (0x0002c37b) keyp_game_cell_pane_g1

0x6006,	// (0x000244ef) popup_fep_vkb2_window_ParamLimits

0x6006,	// (0x000244ef) popup_fep_vkb2_window

0x824c,	// (0x00026735) aid_size_cell_vkb2_ParamLimits

0x824c,	// (0x00026735) aid_size_cell_vkb2

0x82a0,	// (0x00026789) popup_fep_vkb2_window_g1_ParamLimits

0x82a0,	// (0x00026789) popup_fep_vkb2_window_g1

0x82e8,	// (0x000267d1) vkb2_area_bottom_pane_ParamLimits

0x82e8,	// (0x000267d1) vkb2_area_bottom_pane

0x833c,	// (0x00026825) vkb2_area_keypad_pane_ParamLimits

0x833c,	// (0x00026825) vkb2_area_keypad_pane

0x8382,	// (0x0002686b) vkb2_area_top_pane_ParamLimits

0x8382,	// (0x0002686b) vkb2_area_top_pane

0x83fc,	// (0x000268e5) vkb2_top_entry_pane_ParamLimits

0x83fc,	// (0x000268e5) vkb2_top_entry_pane

0x8426,	// (0x0002690f) vkb2_top_grid_left_pane_ParamLimits

0x8426,	// (0x0002690f) vkb2_top_grid_left_pane

0x8444,	// (0x0002692d) vkb2_top_grid_right_pane_ParamLimits

0x8444,	// (0x0002692d) vkb2_top_grid_right_pane

0x8462,	// (0x0002694b) vkb2_cell_keypad_pane_ParamLimits

0x8462,	// (0x0002694b) vkb2_cell_keypad_pane

0x8533,	// (0x00026a1c) vkb2_area_bottom_grid_pane_ParamLimits

0x8533,	// (0x00026a1c) vkb2_area_bottom_grid_pane

0x8559,	// (0x00026a42) vkb2_area_bottom_pane_g1_ParamLimits

0x8559,	// (0x00026a42) vkb2_area_bottom_pane_g1

0x857d,	// (0x00026a66) vkb2_area_bottom_pane_g2_ParamLimits

0x857d,	// (0x00026a66) vkb2_area_bottom_pane_g2

0x85ab,	// (0x00026a94) vkb2_area_bottom_pane_g3_ParamLimits

0x85ab,	// (0x00026a94) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x0002e24d) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x0002e24d) vkb2_area_bottom_pane_g

0x860c,	// (0x00026af5) vkb2_top_cell_left_pane_ParamLimits

0x860c,	// (0x00026af5) vkb2_top_cell_left_pane

0xdea3,	// (0x0002c38c) vkb2_top_entry_pane_g1_ParamLimits

0xdea3,	// (0x0002c38c) vkb2_top_entry_pane_g1

0xdeb1,	// (0x0002c39a) vkb2_top_entry_pane_t1_ParamLimits

0xdeb1,	// (0x0002c39a) vkb2_top_entry_pane_t1

0xdee3,	// (0x0002c3cc) vkb2_top_entry_pane_t2_ParamLimits

0xdee3,	// (0x0002c3cc) vkb2_top_entry_pane_t2

0xdf15,	// (0x0002c3fe) vkb2_top_entry_pane_t3_ParamLimits

0xdf15,	// (0x0002c3fe) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x0002e254) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x0002e254) vkb2_top_entry_pane_t

0x8659,	// (0x00026b42) vkb2_top_grid_right_pane_g1_ParamLimits

0x8659,	// (0x00026b42) vkb2_top_grid_right_pane_g1

0x866f,	// (0x00026b58) vkb2_top_grid_right_pane_g2_ParamLimits

0x866f,	// (0x00026b58) vkb2_top_grid_right_pane_g2

0x8687,	// (0x00026b70) vkb2_top_grid_right_pane_g3_ParamLimits

0x8687,	// (0x00026b70) vkb2_top_grid_right_pane_g3

0x869f,	// (0x00026b88) vkb2_top_grid_right_pane_g4_ParamLimits

0x869f,	// (0x00026b88) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x0002e25b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x0002e25b) vkb2_top_grid_right_pane_g

0x86b5,	// (0x00026b9e) vkb2_top_cell_left_pane_g1

0x86cc,	// (0x00026bb5) vkb2_cell_keypad_pane_g1_ParamLimits

0x86cc,	// (0x00026bb5) vkb2_cell_keypad_pane_g1

0xdf39,	// (0x0002c422) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf39,	// (0x0002c422) vkb2_cell_keypad_pane_t1

0x86da,	// (0x00026bc3) vkb2_cell_bottom_grid_pane_ParamLimits

0x86da,	// (0x00026bc3) vkb2_cell_bottom_grid_pane

0x8713,	// (0x00026bfc) vkb2_cell_bottom_grid_pane_g1

0xdaea,	// (0x0002bfd3) aid_call2_pane_cp02

0xdaf2,	// (0x0002bfdb) aid_call_pane_cp02

0xdafa,	// (0x0002bfe3) clock_digital_number_pane_cp10

0xdb02,	// (0x0002bfeb) clock_digital_number_pane_cp11

0xdb0a,	// (0x0002bff3) clock_digital_number_pane_cp12

0xdb12,	// (0x0002bffb) clock_digital_number_pane_cp13

0xdb1a,	// (0x0002c003) clock_digital_separator_pane_cp10

0x6c8c,	// (0x00025175) popup_clock_digital_analogue_window_cp2_g1

0x6c8c,	// (0x00025175) popup_clock_digital_analogue_window_cp2_g2

0xdb22,	// (0x0002c00b) popup_clock_digital_analogue_window_cp2_g3

0x6c8c,	// (0x00025175) popup_clock_digital_analogue_window_cp2_g4

0xdb22,	// (0x0002c00b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd27,	// (0x0002e210) popup_clock_digital_analogue_window_cp2_g

0xdb2a,	// (0x0002c013) popup_clock_digital_analogue_window_cp2_t1

0xdb38,	// (0x0002c021) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd32,	// (0x0002e21b) popup_clock_digital_analogue_window_cp2_t

0xbfd4,	// (0x0002a4bd) clock_digital_number_pane_cp10_g1

0xbfd4,	// (0x0002a4bd) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002e003) clock_digital_number_pane_cp10_g

0xbfd4,	// (0x0002a4bd) clock_digital_separator_pane_cp10_g1

0xbfd4,	// (0x0002a4bd) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002e003) clock_digital_separator_pane_cp10_g

0xd964,	// (0x0002be4d) uniindi_top_pane_g3

0xd975,	// (0x0002be5e) uniindi_top_pane_g4

0x84ed,	// (0x000269d6) vkb2_row_keypad_pane_ParamLimits

0x84ed,	// (0x000269d6) vkb2_row_keypad_pane

0x872f,	// (0x00026c18) vkb2_cell_t_keypad_pane_ParamLimits

0x872f,	// (0x00026c18) vkb2_cell_t_keypad_pane

0x873f,	// (0x00026c28) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x873f,	// (0x00026c28) vkb2_cell_t_keypad_pane_cp08

0x8754,	// (0x00026c3d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8754,	// (0x00026c3d) vkb2_cell_t_keypad_pane_cp09

0x8768,	// (0x00026c51) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8768,	// (0x00026c51) vkb2_cell_t_keypad_pane_cp01

0x8779,	// (0x00026c62) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8779,	// (0x00026c62) vkb2_cell_t_keypad_pane_cp02

0x878a,	// (0x00026c73) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x878a,	// (0x00026c73) vkb2_cell_t_keypad_pane_cp03

0x879b,	// (0x00026c84) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x879b,	// (0x00026c84) vkb2_cell_t_keypad_pane_cp04

0x87ac,	// (0x00026c95) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x87ac,	// (0x00026c95) vkb2_cell_t_keypad_pane_cp05

0x87bd,	// (0x00026ca6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x87bd,	// (0x00026ca6) vkb2_cell_t_keypad_pane_cp06

0x87d0,	// (0x00026cb9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x87d0,	// (0x00026cb9) vkb2_cell_t_keypad_pane_cp07

0x87e5,	// (0x00026cce) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x87e5,	// (0x00026cce) vkb2_cell_t_keypad_pane_cp10

0xc24f,	// (0x0002a738) vkb2_cell_t_keypad_pane_g1

0xdf50,	// (0x0002c439) vkb2_cell_t_keypad_pane_t1

0x14b4,	// (0x0001f99d) popup_grid_graphic2_window

0xdf62,	// (0x0002c44b) aid_size_cell_graphic2_ParamLimits

0xdf62,	// (0x0002c44b) aid_size_cell_graphic2

0xdf9a,	// (0x0002c483) bg_popup_window_pane_cp21_ParamLimits

0xdf9a,	// (0x0002c483) bg_popup_window_pane_cp21

0xdfa8,	// (0x0002c491) graphic2_pages_pane_ParamLimits

0xdfa8,	// (0x0002c491) graphic2_pages_pane

0xdfee,	// (0x0002c4d7) grid_graphic2_control_pane_ParamLimits

0xdfee,	// (0x0002c4d7) grid_graphic2_control_pane

0xe02c,	// (0x0002c515) grid_graphic2_pane_ParamLimits

0xe02c,	// (0x0002c515) grid_graphic2_pane

0xe0a2,	// (0x0002c58b) cell_graphic2_pane

0x14b4,	// (0x0001f99d) main_comp_mode_pane

0xd1cf,	// (0x0002b6b8) list_ai3_gene_pane_ParamLimits

0xd597,	// (0x0002ba80) bg_popup_window_pane_cp19_ParamLimits

0xd5a3,	// (0x0002ba8c) bg_touch_area_indi_pane_ParamLimits

0xd5a3,	// (0x0002ba8c) bg_touch_area_indi_pane

0xd5b9,	// (0x0002baa2) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5b9,	// (0x0002baa2) bg_touch_area_indi_pane_cp01

0xd5cf,	// (0x0002bab8) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5cf,	// (0x0002bab8) bg_touch_area_indi_pane_cp02

0xd5e9,	// (0x0002bad2) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5e9,	// (0x0002bad2) bg_touch_area_indi_pane_cp03

0xd603,	// (0x0002baec) popup_slider_window_g1_ParamLimits

0xd61f,	// (0x0002bb08) popup_slider_window_g2_ParamLimits

0xd63b,	// (0x0002bb24) popup_slider_window_g3_ParamLimits

0xfcbc,	// (0x0002e1a5) popup_slider_window_g_ParamLimits

0xd6a1,	// (0x0002bb8a) popup_slider_window_t1_ParamLimits

0xd715,	// (0x0002bbfe) small_volume_slider_vertical_pane_ParamLimits

0xe0a2,	// (0x0002c58b) cell_graphic2_pane_ParamLimits

0xe0f6,	// (0x0002c5df) bg_button_pane_cp10_ParamLimits

0xe0f6,	// (0x0002c5df) bg_button_pane_cp10

0xe10b,	// (0x0002c5f4) bg_button_pane_cp11_ParamLimits

0xe10b,	// (0x0002c5f4) bg_button_pane_cp11

0xe120,	// (0x0002c609) graphic2_pages_pane_g1_ParamLimits

0xe120,	// (0x0002c609) graphic2_pages_pane_g1

0xe13b,	// (0x0002c624) graphic2_pages_pane_g2_ParamLimits

0xe13b,	// (0x0002c624) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x0002e269) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x0002e269) graphic2_pages_pane_g

0xe153,	// (0x0002c63c) graphic2_pages_pane_t1_ParamLimits

0xe153,	// (0x0002c63c) graphic2_pages_pane_t1

0xe169,	// (0x0002c652) cell_graphic2_control_pane_ParamLimits

0xe169,	// (0x0002c652) cell_graphic2_control_pane

0xe189,	// (0x0002c672) cell_graphic2_pane_g1_ParamLimits

0xe189,	// (0x0002c672) cell_graphic2_pane_g1

0xe196,	// (0x0002c67f) cell_graphic2_pane_g2_ParamLimits

0xe196,	// (0x0002c67f) cell_graphic2_pane_g2

0xe1a3,	// (0x0002c68c) cell_graphic2_pane_g3_ParamLimits

0xe1a3,	// (0x0002c68c) cell_graphic2_pane_g3

0xe1b0,	// (0x0002c699) cell_graphic2_pane_g4_ParamLimits

0xe1b0,	// (0x0002c699) cell_graphic2_pane_g4

0xe1bd,	// (0x0002c6a6) cell_graphic2_pane_g5_ParamLimits

0xe1bd,	// (0x0002c6a6) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x0002e26e) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x0002e26e) cell_graphic2_pane_g

0xe1d5,	// (0x0002c6be) cell_graphic2_pane_t1_ParamLimits

0xe1d5,	// (0x0002c6be) cell_graphic2_pane_t1

0x9a27,	// (0x00027f10) grid_highlight_pane_cp11_ParamLimits

0x9a27,	// (0x00027f10) grid_highlight_pane_cp11

0x1671,	// (0x0001fb5a) bg_button_pane_cp05

0xe20b,	// (0x0002c6f4) cell_graphic2_control_pane_g1

0xbfd4,	// (0x0002a4bd) bg_touch_area_indi_pane_g1

0xe233,	// (0x0002c71c) aid_cmod_rocker_key_size

0xe23d,	// (0x0002c726) aid_cmode_itu_key_size

0xe247,	// (0x0002c730) main_cmode_video_pane

0xe251,	// (0x0002c73a) main_comp_mode_itu_pane

0xe25d,	// (0x0002c746) main_comp_mode_rocker_pane

0xe269,	// (0x0002c752) cell_cmode_rocker_pane_ParamLimits

0xe269,	// (0x0002c752) cell_cmode_rocker_pane

0xe27d,	// (0x0002c766) cell_cmode_itu_pane_ParamLimits

0xe27d,	// (0x0002c766) cell_cmode_itu_pane

0x3287,	// (0x00021770) bg_button_pane_cp06_ParamLimits

0x3287,	// (0x00021770) bg_button_pane_cp06

0xc24f,	// (0x0002a738) cell_cmode_rocker_pane_g1_ParamLimits

0xc24f,	// (0x0002a738) cell_cmode_rocker_pane_g1

0xd7bc,	// (0x0002bca5) cell_cmode_rocker_pane_g2_ParamLimits

0xd7bc,	// (0x0002bca5) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x0002e27e) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x0002e27e) cell_cmode_rocker_pane_g

0x14b4,	// (0x0001f99d) bg_button_pane_cp07

0xe294,	// (0x0002c77d) cell_cmode_itu_pane_g1

0xe29d,	// (0x0002c786) cell_cmode_itu_pane_t1

0xe2ab,	// (0x0002c794) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x0002e283) cell_cmode_itu_pane_t

0xd9e9,	// (0x0002bed2) aid_touch_ctrl_left

0xd9f1,	// (0x0002beda) aid_touch_ctrl_right

0x14b4,	// (0x0001f99d) compa_mode_pane

0xe2b9,	// (0x0002c7a2) aid_cmod_rocker_key_size_cp

0xe2c3,	// (0x0002c7ac) aid_cmode_itu_key_size_cp

0xe2cd,	// (0x0002c7b6) compa_mode_pane_g1

0xe2d5,	// (0x0002c7be) compa_mode_pane_g2

0xe2dd,	// (0x0002c7c6) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x0002e288) compa_mode_pane_g

0xe2e5,	// (0x0002c7ce) main_comp_mode_itu_pane_cp

0xe2ed,	// (0x0002c7d6) main_comp_mode_rocker_pane_cp

0xe2f5,	// (0x0002c7de) cell_cmode_itu_pane_cp_ParamLimits

0xe2f5,	// (0x0002c7de) cell_cmode_itu_pane_cp

0xe30a,	// (0x0002c7f3) cell_cmode_rocker_pane_cp_ParamLimits

0xe30a,	// (0x0002c7f3) cell_cmode_rocker_pane_cp

0x3287,	// (0x00021770) bg_button_pane_cp06_cp_ParamLimits

0x3287,	// (0x00021770) bg_button_pane_cp06_cp

0xc24f,	// (0x0002a738) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc24f,	// (0x0002a738) cell_cmode_rocker_pane_g1_cp

0xbfd4,	// (0x0002a4bd) cell_cmode_rocker_pane_g2_cp

0x14b4,	// (0x0001f99d) bg_button_pane_cp07_cp

0xe31c,	// (0x0002c805) cell_cmode_itu_pane_g1_cp

0xe325,	// (0x0002c80e) cell_cmode_itu_pane_t1_cp

0xe325,	// (0x0002c80e) cell_cmode_itu_pane_t2_cp

0xaefe,	// (0x000293e7) settings_code_pane_cp2

0x1524,	// (0x0001fa0d) bg_popup_window_pane_cp3_ParamLimits

0x2f05,	// (0x000213ee) heading_pane_cp3_ParamLimits

0x2f14,	// (0x000213fd) listscroll_popup_graphic_pane_ParamLimits

0x7ddd,	// (0x000262c6) fep_hwr_aid_pane_ParamLimits

0x81c1,	// (0x000266aa) aid_touch_sctrl_top_ParamLimits

0x81ce,	// (0x000266b7) sctrl_sk_top_pane_g1_ParamLimits

0xc24f,	// (0x0002a738) sctrl_sk_top_pane_g2_ParamLimits

0xfcd5,	// (0x0002e1be) sctrl_sk_top_pane_g_ParamLimits

0x81db,	// (0x000266c4) sctrl_sk_top_pane_t1_ParamLimits

0x81c1,	// (0x000266aa) aid_touch_sctrl_bottom_ParamLimits

0x81db,	// (0x000266c4) sctrl_sk_bottom_pane_t1_ParamLimits

0xd92e,	// (0x0002be17) aid_area_touch_clock

0x83c4,	// (0x000268ad) aid_vkb2_area_top_pane_cell_ParamLimits

0x83c4,	// (0x000268ad) aid_vkb2_area_top_pane_cell

0x850f,	// (0x000269f8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x850f,	// (0x000269f8) aid_vkb2_area_bottom_pane_cell

0xde9b,	// (0x0002c384) popup_char_count_window

0xe333,	// (0x0002c81c) popup_char_count_window_g1

0xe33c,	// (0x0002c825) popup_char_count_window_g2

0xe345,	// (0x0002c82e) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x0002e28f) popup_char_count_window_g

0xe34e,	// (0x0002c837) popup_char_count_window_t1

0x827e,	// (0x00026767) popup_fep_char_preview_window_ParamLimits

0x827e,	// (0x00026767) popup_fep_char_preview_window

0x83e2,	// (0x000268cb) vkb2_top_candi_pane_ParamLimits

0x83e2,	// (0x000268cb) vkb2_top_candi_pane

0xe35c,	// (0x0002c845) cell_vkb2_top_candi_pane_ParamLimits

0xe35c,	// (0x0002c845) cell_vkb2_top_candi_pane

0xa019,	// (0x00028502) bg_popup_fep_char_preview_window_ParamLimits

0xa019,	// (0x00028502) bg_popup_fep_char_preview_window

0x87fa,	// (0x00026ce3) popup_fep_char_preview_window_t1_ParamLimits

0x87fa,	// (0x00026ce3) popup_fep_char_preview_window_t1

0xe3ad,	// (0x0002c896) bg_popup_fep_char_preview_window_g1

0xe3b5,	// (0x0002c89e) bg_popup_fep_char_preview_window_g2

0xe3bd,	// (0x0002c8a6) bg_popup_fep_char_preview_window_g3

0xe3c5,	// (0x0002c8ae) bg_popup_fep_char_preview_window_g4

0xe3cd,	// (0x0002c8b6) bg_popup_fep_char_preview_window_g5

0xe3d5,	// (0x0002c8be) bg_popup_fep_char_preview_window_g6

0xe3dd,	// (0x0002c8c6) bg_popup_fep_char_preview_window_g7

0xe3e5,	// (0x0002c8ce) bg_popup_fep_char_preview_window_g8

0xe3ed,	// (0x0002c8d6) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdad,	// (0x0002e296) bg_popup_fep_char_preview_window_g

0xc24f,	// (0x0002a738) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc24f,	// (0x0002a738) cell_vkb2_top_candi_pane_g1

0xc590,	// (0x0002aa79) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc590,	// (0x0002aa79) cell_vkb2_top_candi_pane_g2

0xc5b1,	// (0x0002aa9a) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5b1,	// (0x0002aa9a) cell_vkb2_top_candi_pane_g3

0x883c,	// (0x00026d25) cell_vkb2_top_candi_pane_g4_ParamLimits

0x883c,	// (0x00026d25) cell_vkb2_top_candi_pane_g4

0xe3f5,	// (0x0002c8de) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3f5,	// (0x0002c8de) cell_vkb2_top_candi_pane_g5

0xd7bc,	// (0x0002bca5) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7bc,	// (0x0002bca5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x0002e2ab) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x0002e2ab) cell_vkb2_top_candi_pane_g

0x885d,	// (0x00026d46) cell_vkb2_top_candi_pane_t1

0x7c3d,	// (0x00026126) aid_size_touch_slider_mark_ParamLimits

0x7c3d,	// (0x00026126) aid_size_touch_slider_mark

0xdfde,	// (0x0002c4c7) grid_graphic2_catg_pane_ParamLimits

0xdfde,	// (0x0002c4c7) grid_graphic2_catg_pane

0xe07c,	// (0x0002c565) popup_grid_graphic2_window_t1_ParamLimits

0xe07c,	// (0x0002c565) popup_grid_graphic2_window_t1

0xe08e,	// (0x0002c577) popup_grid_graphic2_window_t2_ParamLimits

0xe08e,	// (0x0002c577) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x0002e264) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x0002e264) popup_grid_graphic2_window_t

0x1671,	// (0x0001fb5a) bg_button_pane_cp05_ParamLimits

0xe20b,	// (0x0002c6f4) cell_graphic2_control_pane_g1_ParamLimits

0xe416,	// (0x0002c8ff) cell_graphic2_catg_pane_ParamLimits

0xe416,	// (0x0002c8ff) cell_graphic2_catg_pane

0x14b4,	// (0x0001f99d) bg_button_pane_cp12

0xe428,	// (0x0002c911) cell_graphic2_catg_pane_g1

0xd8fa,	// (0x0002bde3) cell_tb_ext_pane_t1_ParamLimits

0x862c,	// (0x00026b15) vkb2_top_cell_right_narrow_pane_ParamLimits

0x862c,	// (0x00026b15) vkb2_top_cell_right_narrow_pane

0x8644,	// (0x00026b2d) vkb2_top_cell_right_wide_pane_ParamLimits

0x8644,	// (0x00026b2d) vkb2_top_cell_right_wide_pane

0x7dcf,	// (0x000262b8) bg_vkb2_func_pane_ParamLimits

0x7dcf,	// (0x000262b8) bg_vkb2_func_pane

0x86b5,	// (0x00026b9e) vkb2_top_cell_left_pane_g1_ParamLimits

0x7dcf,	// (0x000262b8) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7dcf,	// (0x000262b8) bg_vkb2_fuc_pane_cp03

0x8713,	// (0x00026bfc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99bb,	// (0x00027ea4) bg_vkb2_func_pane_g1

0x99c3,	// (0x00027eac) bg_vkb2_func_pane_g2

0x99d3,	// (0x00027ebc) bg_vkb2_func_pane_g3

0x99cb,	// (0x00027eb4) bg_vkb2_func_pane_g4

0x99db,	// (0x00027ec4) bg_vkb2_func_pane_g5

0x99e3,	// (0x00027ecc) bg_vkb2_func_pane_g6

0x99eb,	// (0x00027ed4) bg_vkb2_func_pane_g7

0x99f3,	// (0x00027edc) bg_vkb2_func_pane_g8

0x99b3,	// (0x00027e9c) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x0002e2b8) bg_vkb2_func_pane_g

0x7dcf,	// (0x000262b8) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7dcf,	// (0x000262b8) bg_vkb2_fuc_pane_cp01

0x86b5,	// (0x00026b9e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x86b5,	// (0x00026b9e) vkb2_top_cell_right_wide_pane_g1

0x7dcf,	// (0x000262b8) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7dcf,	// (0x000262b8) bg_vkb2_fuc_pane_cp02

0x8713,	// (0x00026bfc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8713,	// (0x00026bfc) vkb2_top_cell_right_narrow_pane_g1

0xd511,	// (0x0002b9fa) aid_touch_area_decrease_ParamLimits

0xd511,	// (0x0002b9fa) aid_touch_area_decrease

0xd535,	// (0x0002ba1e) aid_touch_area_increase_ParamLimits

0xd535,	// (0x0002ba1e) aid_touch_area_increase

0xd54d,	// (0x0002ba36) aid_touch_area_mute_ParamLimits

0xd54d,	// (0x0002ba36) aid_touch_area_mute

0xd569,	// (0x0002ba52) aid_touch_area_slider_ParamLimits

0xd569,	// (0x0002ba52) aid_touch_area_slider

0xd657,	// (0x0002bb40) popup_slider_window_g4_ParamLimits

0xd657,	// (0x0002bb40) popup_slider_window_g4

0xd66f,	// (0x0002bb58) popup_slider_window_g5_ParamLimits

0xd66f,	// (0x0002bb58) popup_slider_window_g5

0xd691,	// (0x0002bb7a) popup_slider_window_g6_ParamLimits

0xd691,	// (0x0002bb7a) popup_slider_window_g6

0xd6cf,	// (0x0002bbb8) popup_slider_window_t2_ParamLimits

0xd6cf,	// (0x0002bbb8) popup_slider_window_t2

0x0001,

0xfcc9,	// (0x0002e1b2) popup_slider_window_t_ParamLimits

0xfcc9,	// (0x0002e1b2) popup_slider_window_t

0xd6e7,	// (0x0002bbd0) slider_pane_ParamLimits

0xd6e7,	// (0x0002bbd0) slider_pane

0xe431,	// (0x0002c91a) slider_pane_g1_ParamLimits

0xe431,	// (0x0002c91a) slider_pane_g1

0xe445,	// (0x0002c92e) slider_pane_g2_ParamLimits

0xe445,	// (0x0002c92e) slider_pane_g2

0xe45b,	// (0x0002c944) slider_pane_g3_ParamLimits

0xe45b,	// (0x0002c944) slider_pane_g3

0x0003,

0xfde2,	// (0x0002e2cb) slider_pane_g_ParamLimits

0xfde2,	// (0x0002e2cb) slider_pane_g

0x7843,	// (0x00025d2c) popup_tb_float_extension_window_ParamLimits

0x7843,	// (0x00025d2c) popup_tb_float_extension_window

0xe487,	// (0x0002c970) aid_size_cell_tb_float_ext

0x14b4,	// (0x0001f99d) bg_popup_sub_window_cp28

0xe493,	// (0x0002c97c) grid_tb_float_ext_pane

0xe49f,	// (0x0002c988) cell_tb_float_ext_pane_ParamLimits

0xe49f,	// (0x0002c988) cell_tb_float_ext_pane

0xe4bb,	// (0x0002c9a4) cell_tb_float_ext_pane_g1

0xe4c4,	// (0x0002c9ad) grid_highlight_pane_cp12

0x7f16,	// (0x000263ff) cell_last_hwr_side_pane_ParamLimits

0x7f16,	// (0x000263ff) cell_last_hwr_side_pane

0xbfd4,	// (0x0002a4bd) cell_last_hwr_side_pane_g1

0xe4cd,	// (0x0002c9b6) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x0002e2d4) cell_last_hwr_side_pane_g

0x85db,	// (0x00026ac4) vkb2_area_bottom_space_btn_pane_ParamLimits

0x85db,	// (0x00026ac4) vkb2_area_bottom_space_btn_pane

0xc24f,	// (0x0002a738) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf50,	// (0x0002c439) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x885d,	// (0x00026d46) cell_vkb2_top_candi_pane_t1_ParamLimits

0x887b,	// (0x00026d64) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x887b,	// (0x00026d64) vkb2_area_bottom_space_btn_pane_g1

0x88b5,	// (0x00026d9e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x88b5,	// (0x00026d9e) vkb2_area_bottom_space_btn_pane_g2

0x88eb,	// (0x00026dd4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x88eb,	// (0x00026dd4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x0002e2d9) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x0002e2d9) vkb2_area_bottom_space_btn_pane_g

0x7e86,	// (0x0002636f) cel_fep_hwr_func_pane_ParamLimits

0x7e86,	// (0x0002636f) cel_fep_hwr_func_pane

0x7ec2,	// (0x000263ab) cell_hwr_side_button_pane_ParamLimits

0x7ec2,	// (0x000263ab) cell_hwr_side_button_pane

0xd92e,	// (0x0002be17) aid_area_touch_clock_ParamLimits

0x1671,	// (0x0001fb5a) bg_uniindi_top_pane_ParamLimits

0xd942,	// (0x0002be2b) uniindi_top_pane_g1_ParamLimits

0xd958,	// (0x0002be41) uniindi_top_pane_g2_ParamLimits

0xd964,	// (0x0002be4d) uniindi_top_pane_g3_ParamLimits

0xd975,	// (0x0002be5e) uniindi_top_pane_g4_ParamLimits

0xfd01,	// (0x0002e1ea) uniindi_top_pane_g_ParamLimits

0xd982,	// (0x0002be6b) uniindi_top_pane_t1_ParamLimits

0x1671,	// (0x0001fb5a) bg_vkb2_func_pane_cp01_ParamLimits

0x1671,	// (0x0001fb5a) bg_vkb2_func_pane_cp01

0xe4d6,	// (0x0002c9bf) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4d6,	// (0x0002c9bf) cel_fep_hwr_func_pane_g1

0x1671,	// (0x0001fb5a) bg_vkb2_func_pane_cp02_ParamLimits

0x1671,	// (0x0001fb5a) bg_vkb2_func_pane_cp02

0xe4d6,	// (0x0002c9bf) cell_hwr_side_button_pane_g1_ParamLimits

0xe4d6,	// (0x0002c9bf) cell_hwr_side_button_pane_g1

0x9838,	// (0x00027d21) status_pane_g4_ParamLimits

0x9838,	// (0x00027d21) status_pane_g4

0x9852,	// (0x00027d3b) status_pane_t1

0xbd87,	// (0x0002a270) form2_midp_gauge_slider_cont_pane

0xbd8f,	// (0x0002a278) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbda1,	// (0x0002a28a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbdb3,	// (0x0002a29c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0002dfb6) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdc5,	// (0x0002a2ae) form2_midp_slider_pane_ParamLimits

0x823e,	// (0x00026727) aid_size_cell_func_vkb2_ParamLimits

0x823e,	// (0x00026727) aid_size_cell_func_vkb2

0xe473,	// (0x0002c95c) slider_pane_g4_ParamLimits

0xe473,	// (0x0002c95c) slider_pane_g4

0x8935,	// (0x00026e1e) form2_midp_gauge_slider_pane_t2_cp01

0x8943,	// (0x00026e2c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8943,	// (0x00026e2c) form2_midp_gauge_slider_pane_t3_cp01

0x8960,	// (0x00026e49) form2_midp_slider_pane_cp01

0x14b4,	// (0x0001f99d) navi_smil_pane

0xe50f,	// (0x0002c9f8) navi_smil_pane_g1

0xe517,	// (0x0002ca00) navi_smil_pane_t1

0xe4e4,	// (0x0002c9cd) form2_midp_slider_pane_g1

0xe4ed,	// (0x0002c9d6) form2_midp_slider_pane_g2

0xe4f5,	// (0x0002c9de) form2_midp_slider_pane_g3

0xe4e4,	// (0x0002c9cd) form2_midp_slider_pane_g4

0xe4fd,	// (0x0002c9e6) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x0002e2e2) form2_midp_slider_pane_g

0x8925,	// (0x00026e0e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8925,	// (0x00026e0e) vkb2_area_bottom_space_btn_pane_g4

0x9657,	// (0x00027b40) lc0_navi_pane_ParamLimits

0x9657,	// (0x00027b40) lc0_navi_pane

0x96d3,	// (0x00027bbc) lc0_stat_indi_pane_ParamLimits

0x96d3,	// (0x00027bbc) lc0_stat_indi_pane

0x96ea,	// (0x00027bd3) ls0_title_pane_ParamLimits

0x96ea,	// (0x00027bd3) ls0_title_pane

0x3287,	// (0x00021770) bg_popup_sub_pane_cp14_ParamLimits

0xd915,	// (0x0002bdfe) list_uniindi_pane_ParamLimits

0xd921,	// (0x0002be0a) uniindi_top_pane_ParamLimits

0xd9c1,	// (0x0002beaa) list_single_uniindi_pane_g1_ParamLimits

0xd9d4,	// (0x0002bebd) list_single_uniindi_pane_t1_ParamLimits

0x8969,	// (0x00026e52) lc0_stat_clock_pane_ParamLimits

0x8969,	// (0x00026e52) lc0_stat_clock_pane

0xe525,	// (0x0002ca0e) lc0_stat_indi_pane_g1_ParamLimits

0xe525,	// (0x0002ca0e) lc0_stat_indi_pane_g1

0xe532,	// (0x0002ca1b) lc0_stat_indi_pane_g2_ParamLimits

0xe532,	// (0x0002ca1b) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x0002e2ed) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x0002e2ed) lc0_stat_indi_pane_g

0x8976,	// (0x00026e5f) lc0_uni_indicator_pane_ParamLimits

0x8976,	// (0x00026e5f) lc0_uni_indicator_pane

0xe53f,	// (0x0002ca28) ls0_title_pane_g1_ParamLimits

0xe53f,	// (0x0002ca28) ls0_title_pane_g1

0xe553,	// (0x0002ca3c) ls0_title_pane_t1_ParamLimits

0xe553,	// (0x0002ca3c) ls0_title_pane_t1

0x8983,	// (0x00026e6c) lc0_uni_indicator_pane_g1_ParamLimits

0x8983,	// (0x00026e6c) lc0_uni_indicator_pane_g1

0xe589,	// (0x0002ca72) lc0_stat_clock_pane_t1

0x14b4,	// (0x0001f99d) main_ai5_pane

0xe597,	// (0x0002ca80) ai5_sk_pane_ParamLimits

0xe597,	// (0x0002ca80) ai5_sk_pane

0xe5a4,	// (0x0002ca8d) cell_ai5_widget_pane_ParamLimits

0xe5a4,	// (0x0002ca8d) cell_ai5_widget_pane

0xe647,	// (0x0002cb30) aid_size_cell_widget_grid

0xe655,	// (0x0002cb3e) bg_ai5_widget_pane_ParamLimits

0xe655,	// (0x0002cb3e) bg_ai5_widget_pane

0xe6d1,	// (0x0002cbba) cell_ai5_widget_pane_g2

0xe6e5,	// (0x0002cbce) cell_ai5_widget_pane_g3

0xe6ff,	// (0x0002cbe8) cell_ai5_widget_pane_g4

0xe70f,	// (0x0002cbf8) cell_ai5_widget_pane_g5

0xe71f,	// (0x0002cc08) cell_ai5_widget_pane_g6

0xe72b,	// (0x0002cc14) cell_ai5_widget_pane_g7

0xe797,	// (0x0002cc80) cell_ai5_widget_pane_t1_ParamLimits

0xe797,	// (0x0002cc80) cell_ai5_widget_pane_t1

0xe7b4,	// (0x0002cc9d) cell_ai5_widget_pane_t2_ParamLimits

0xe7b4,	// (0x0002cc9d) cell_ai5_widget_pane_t2

0xe7cc,	// (0x0002ccb5) cell_ai5_widget_pane_t3_ParamLimits

0xe7cc,	// (0x0002ccb5) cell_ai5_widget_pane_t3

0xe7e4,	// (0x0002cccd) cell_ai5_widget_pane_t4_ParamLimits

0xe7e4,	// (0x0002cccd) cell_ai5_widget_pane_t4

0xe80a,	// (0x0002ccf3) cell_ai5_widget_pane_t5_ParamLimits

0xe80a,	// (0x0002ccf3) cell_ai5_widget_pane_t5

0xe82a,	// (0x0002cd13) cell_ai5_widget_pane_t6_ParamLimits

0xe82a,	// (0x0002cd13) cell_ai5_widget_pane_t6

0xe83c,	// (0x0002cd25) cell_ai5_widget_pane_t7_ParamLimits

0xe83c,	// (0x0002cd25) cell_ai5_widget_pane_t7

0xe85b,	// (0x0002cd44) cell_ai5_widget_pane_t8_ParamLimits

0xe85b,	// (0x0002cd44) cell_ai5_widget_pane_t8

0x000b,

0xfe24,	// (0x0002e30d) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x0002e30d) cell_ai5_widget_pane_t

0xe8df,	// (0x0002cdc8) grid_ai5_widget_pane

0x3287,	// (0x00021770) highlight_cell_ai5_widget_pane_ParamLimits

0x3287,	// (0x00021770) highlight_cell_ai5_widget_pane

0xe8ed,	// (0x0002cdd6) ai5_sk_left_pane

0xe8f7,	// (0x0002cde0) ai5_sk_middle_pane

0xe901,	// (0x0002cdea) ai5_sk_right_pane

0xe90b,	// (0x0002cdf4) bg_ai5_widget_pane_g1_ParamLimits

0xe90b,	// (0x0002cdf4) bg_ai5_widget_pane_g1

0xe917,	// (0x0002ce00) bg_ai5_widget_pane_g2_ParamLimits

0xe917,	// (0x0002ce00) bg_ai5_widget_pane_g2

0xe923,	// (0x0002ce0c) bg_ai5_widget_pane_g3_ParamLimits

0xe923,	// (0x0002ce0c) bg_ai5_widget_pane_g3

0xe92f,	// (0x0002ce18) bg_ai5_widget_pane_g4_ParamLimits

0xe92f,	// (0x0002ce18) bg_ai5_widget_pane_g4

0xe93b,	// (0x0002ce24) bg_ai5_widget_pane_g5_ParamLimits

0xe93b,	// (0x0002ce24) bg_ai5_widget_pane_g5

0xe947,	// (0x0002ce30) bg_ai5_widget_pane_g6_ParamLimits

0xe947,	// (0x0002ce30) bg_ai5_widget_pane_g6

0xe953,	// (0x0002ce3c) bg_ai5_widget_pane_g7_ParamLimits

0xe953,	// (0x0002ce3c) bg_ai5_widget_pane_g7

0xe95f,	// (0x0002ce48) bg_ai5_widget_pane_g8_ParamLimits

0xe95f,	// (0x0002ce48) bg_ai5_widget_pane_g8

0xe96b,	// (0x0002ce54) bg_ai5_widget_pane_g9_ParamLimits

0xe96b,	// (0x0002ce54) bg_ai5_widget_pane_g9

0x0008,

0xfe3d,	// (0x0002e326) bg_ai5_widget_pane_g_ParamLimits

0xfe3d,	// (0x0002e326) bg_ai5_widget_pane_g

0xe9a3,	// (0x0002ce8c) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9a3,	// (0x0002ce8c) cell_shortcut_ai5_widget_pane

0x9156,	// (0x0002763f) bg_cell_shortcut_ai5_widget_pane

0xe9b6,	// (0x0002ce9f) cell_grid_ai5_widget_pane_g1

0x9156,	// (0x0002763f) highlight_cell_shortcut_ai5_widget_pane

0x99c3,	// (0x00027eac) ai5_sk_left_pane_g1

0xe9bf,	// (0x0002cea8) ai5_sk_left_pane_g2

0xe9c7,	// (0x0002ceb0) ai5_sk_left_pane_g3

0xe9cf,	// (0x0002ceb8) ai5_sk_left_pane_g4

0x0003,

0xfe50,	// (0x0002e339) ai5_sk_left_pane_g

0xe9d7,	// (0x0002cec0) ai5_sk_left_pane_t1

0x99bb,	// (0x00027ea4) ai5_sk_right_pane_g1

0xe9e5,	// (0x0002cece) ai5_sk_right_pane_g2

0xe9ed,	// (0x0002ced6) ai5_sk_right_pane_g3

0xe9f5,	// (0x0002cede) ai5_sk_right_pane_g4

0x0003,

0xfe59,	// (0x0002e342) ai5_sk_right_pane_g

0xe9fd,	// (0x0002cee6) ai5_sk_right_pane_t1

0x99bb,	// (0x00027ea4) ai5_sk_middle_pane_g1

0x99c3,	// (0x00027eac) ai5_sk_middle_pane_g2

0x99db,	// (0x00027ec4) ai5_sk_middle_pane_g3

0xe9ed,	// (0x0002ced6) ai5_sk_middle_pane_g4

0xe9c7,	// (0x0002ceb0) ai5_sk_middle_pane_g5

0xea0b,	// (0x0002cef4) ai5_sk_middle_pane_g6

0xea13,	// (0x0002cefc) ai5_sk_middle_pane_g7

0x0006,

0xfe62,	// (0x0002e34b) ai5_sk_middle_pane_g

0x94dd,	// (0x000279c6) aid_touch_area_size_lc0_ParamLimits

0x94dd,	// (0x000279c6) aid_touch_area_size_lc0

0x8025,	// (0x0002650e) cell_hwr_candidate_pane_t1_ParamLimits

0x94fb,	// (0x000279e4) aid_touch_navi_pane

0x97ea,	// (0x00027cd3) status_dt_navi_pane_ParamLimits

0x97ea,	// (0x00027cd3) status_dt_navi_pane

0x97f7,	// (0x00027ce0) status_dt_sta_pane_ParamLimits

0x97f7,	// (0x00027ce0) status_dt_sta_pane

0xea1b,	// (0x0002cf04) dt_sta_controll_pane

0xea28,	// (0x0002cf11) dt_sta_indi_pane

0xea39,	// (0x0002cf22) dt_sta_title_pane

0x1671,	// (0x0001fb5a) bg_dt_sta_indi_pane_ParamLimits

0x1671,	// (0x0001fb5a) bg_dt_sta_indi_pane

0xea4c,	// (0x0002cf35) dt_sta_battery_pane

0xea54,	// (0x0002cf3d) dt_sta_indi_pane_g1

0xea5d,	// (0x0002cf46) dt_sta_indi_pane_g2

0xea66,	// (0x0002cf4f) dt_sta_indi_pane_g3

0x0002,

0xfe71,	// (0x0002e35a) dt_sta_indi_pane_g

0xea6f,	// (0x0002cf58) dt_sta_signal_pane

0x3287,	// (0x00021770) bg_dt_sta_title_pane_ParamLimits

0x3287,	// (0x00021770) bg_dt_sta_title_pane

0xea78,	// (0x0002cf61) dt_sta_title_pane_g1

0xea80,	// (0x0002cf69) dt_sta_title_pane_t1_ParamLimits

0xea80,	// (0x0002cf69) dt_sta_title_pane_t1

0x14b4,	// (0x0001f99d) bg_dt_sta_control_pane

0xea95,	// (0x0002cf7e) dt_sta_controll_pane_g1

0xea9e,	// (0x0002cf87) bg_dt_sta_title_pane_g1

0xeaa7,	// (0x0002cf90) bg_dt_sta_title_pane_g2

0xeab0,	// (0x0002cf99) bg_dt_sta_title_pane_g3

0x0002,

0xfe78,	// (0x0002e361) bg_dt_sta_title_pane_g

0xbfd4,	// (0x0002a4bd) bg_dt_sta_indi_pane_g1

0xeab9,	// (0x0002cfa2) dt_sta_signal_pane_g1

0xeac1,	// (0x0002cfaa) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x0002e368) dt_sta_signal_pane_g

0xeac9,	// (0x0002cfb2) dt_sta_battery_pane_g1

0xead2,	// (0x0002cfbb) dt_sta_battery_pane_t1

0xbfd4,	// (0x0002a4bd) bg_dt_sta_control_pane_g1

0x6e6f,	// (0x00025358) fep_china_uni_eep_pane

0x6e77,	// (0x00025360) fep_china_uni_entry_pane_ParamLimits

0x6e87,	// (0x00025370) popup_fep_china_uni_window_g1_ParamLimits

0x6e97,	// (0x00025380) popup_fep_china_uni_window_g2_ParamLimits

0x6e97,	// (0x00025380) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0002dbe1) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0002dbe1) popup_fep_china_uni_window_g

0xeae1,	// (0x0002cfca) fep_china_uni_eep_pane_g1

0xeae9,	// (0x0002cfd2) fep_china_uni_eep_pane_t1

0xe506,	// (0x0002c9ef) aid_touch_area_size_smil_player

0x964f,	// (0x00027b38) lc0_clock_pane

0x9846,	// (0x00027d2f) status_pane_g5_ParamLimits

0x9846,	// (0x00027d2f) status_pane_g5

0x74c8,	// (0x000259b1) popup_keymap_window

0x980c,	// (0x00027cf5) status_icon_pane

0xe6e5,	// (0x0002cbce) cell_ai5_widget_pane_g3_ParamLimits

0xe6ff,	// (0x0002cbe8) cell_ai5_widget_pane_g4_ParamLimits

0xe70f,	// (0x0002cbf8) cell_ai5_widget_pane_g5_ParamLimits

0xe737,	// (0x0002cc20) cell_ai5_widget_pane_g8_ParamLimits

0xe737,	// (0x0002cc20) cell_ai5_widget_pane_g8

0xe74b,	// (0x0002cc34) cell_ai5_widget_pane_g9_ParamLimits

0xe74b,	// (0x0002cc34) cell_ai5_widget_pane_g9

0xe75f,	// (0x0002cc48) cell_ai5_widget_pane_g10_ParamLimits

0xe75f,	// (0x0002cc48) cell_ai5_widget_pane_g10

0xeaf8,	// (0x0002cfe1) status_icon_pane_g1

0x14b4,	// (0x0001f99d) bg_popup_sub_pane_cp13

0xeb00,	// (0x0002cfe9) popup_keymap_window_t1

0x942e,	// (0x00027917) control_pane_g6_ParamLimits

0x942e,	// (0x00027917) control_pane_g6

0x943b,	// (0x00027924) control_pane_g7_ParamLimits

0x943b,	// (0x00027924) control_pane_g7

0x9448,	// (0x00027931) control_pane_g8_ParamLimits

0x9448,	// (0x00027931) control_pane_g8

0xea1b,	// (0x0002cf04) dt_sta_controll_pane_ParamLimits

0xea28,	// (0x0002cf11) dt_sta_indi_pane_ParamLimits

0xea39,	// (0x0002cf22) dt_sta_title_pane_ParamLimits

0x3142,	// (0x0002162b) aid_size_touch_scroll_bar_cale

0x5fd4,	// (0x000244bd) popup_discreet_window_ParamLimits

0x5fd4,	// (0x000244bd) popup_discreet_window

0x6062,	// (0x0002454b) popup_sk_window

0xa019,	// (0x00028502) bg_popup_sub_pane_cp28_ParamLimits

0xa019,	// (0x00028502) bg_popup_sub_pane_cp28

0xeb0e,	// (0x0002cff7) popup_discreet_window_g1_ParamLimits

0xeb0e,	// (0x0002cff7) popup_discreet_window_g1

0xeb2e,	// (0x0002d017) popup_discreet_window_t1_ParamLimits

0xeb2e,	// (0x0002d017) popup_discreet_window_t1

0xeb4c,	// (0x0002d035) popup_discreet_window_t2_ParamLimits

0xeb4c,	// (0x0002d035) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x0002e36d) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x0002e36d) popup_discreet_window_t

0x8996,	// (0x00026e7f) popup_sk_window_g1

0x89a0,	// (0x00026e89) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x0002e374) popup_sk_window_g

0x89a8,	// (0x00026e91) popup_sk_window_t1

0x89b6,	// (0x00026e9f) popup_sk_window_t1_copy1

0xe6d1,	// (0x0002cbba) cell_ai5_widget_pane_g2_ParamLimits

0xe86d,	// (0x0002cd56) cell_ai5_widget_pane_t9_ParamLimits

0xe86d,	// (0x0002cd56) cell_ai5_widget_pane_t9

0x14b4,	// (0x0001f99d) main_fep_fshwr2_pane

0x89c4,	// (0x00026ead) aid_fshwr2_btn_pane

0x89d0,	// (0x00026eb9) aid_fshwr2_syb_pane

0x89e2,	// (0x00026ecb) aid_fshwr2_txt_pane

0x89ee,	// (0x00026ed7) fshwr2_func_candi_pane

0x8a06,	// (0x00026eef) fshwr2_hwr_syb_pane

0x8a1c,	// (0x00026f05) fshwr2_icf_pane

0x14b4,	// (0x0001f99d) fshwr2_icf_bg_pane

0x8a50,	// (0x00026f39) fshwr2_icf_pane_t1_ParamLimits

0x8a50,	// (0x00026f39) fshwr2_icf_pane_t1

0x6c8c,	// (0x00025175) fshwr2_func_candi_pane_g1

0xeb9e,	// (0x0002d087) fshwr2_func_candi_row_pane_ParamLimits

0xeb9e,	// (0x0002d087) fshwr2_func_candi_row_pane

0x8a68,	// (0x00026f51) cell_fshwr2_syb_pane_ParamLimits

0x8a68,	// (0x00026f51) cell_fshwr2_syb_pane

0xe4d6,	// (0x0002c9bf) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4d6,	// (0x0002c9bf) fshwr2_hwr_syb_pane_g1

0x14b4,	// (0x0001f99d) bg_popup_call_pane_cp01

0x8a89,	// (0x00026f72) fshwr2_func_candi_cell_pane_ParamLimits

0x8a89,	// (0x00026f72) fshwr2_func_candi_cell_pane

0xa690,	// (0x00028b79) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa690,	// (0x00028b79) fshwr2_func_candi_cell_bg_pane

0x8ada,	// (0x00026fc3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8ada,	// (0x00026fc3) fshwr2_func_candi_cell_pane_g1

0x8afa,	// (0x00026fe3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8afa,	// (0x00026fe3) fshwr2_func_candi_cell_pane_t1

0x14b4,	// (0x0001f99d) bg_button_pane_cp08

0x947d,	// (0x00027966) cell_fshwr2_syb_bg_pane

0x8b0d,	// (0x00026ff6) cell_fshwr2_syb_bg_pane_g1

0x8b21,	// (0x0002700a) cell_fshwr2_syb_bg_pane_t1

0x3287,	// (0x00021770) main_tmo_pane

0xab3d,	// (0x00029026) uni_indicator_pane_g1_ParamLimits

0xab53,	// (0x0002903c) uni_indicator_pane_g2_ParamLimits

0xab69,	// (0x00029052) uni_indicator_pane_g3_ParamLimits

0xab7c,	// (0x00029065) uni_indicator_pane_g4_ParamLimits

0xab7c,	// (0x00029065) uni_indicator_pane_g4

0xab90,	// (0x00029079) uni_indicator_pane_g5_ParamLimits

0xab90,	// (0x00029079) uni_indicator_pane_g5

0xab90,	// (0x00029079) uni_indicator_pane_g6_ParamLimits

0xab90,	// (0x00029079) uni_indicator_pane_g6

0xf8fc,	// (0x0002dde5) uni_indicator_pane_g_ParamLimits

0xd4e1,	// (0x0002b9ca) popup_tmo_note_window_ParamLimits

0xd4e1,	// (0x0002b9ca) popup_tmo_note_window

0x3287,	// (0x00021770) fshwr2_bg_pane

0x8aeb,	// (0x00026fd4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8aeb,	// (0x00026fd4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x0002e379) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x0002e379) fshwr2_func_candi_cell_pane_g

0xbfd4,	// (0x0002a4bd) bg_popup_window_pane_cp01

0x8b34,	// (0x0002701d) bg_popup_window_pane_g1_cp01

0xebc1,	// (0x0002d0aa) bg_popup_window_pane_cp22_ParamLimits

0xebc1,	// (0x0002d0aa) bg_popup_window_pane_cp22

0xebcf,	// (0x0002d0b8) listscroll_tmo_link_pane_ParamLimits

0xebcf,	// (0x0002d0b8) listscroll_tmo_link_pane

0xec0f,	// (0x0002d0f8) popup_tmo_note_window_g1_ParamLimits

0xec0f,	// (0x0002d0f8) popup_tmo_note_window_g1

0xec1c,	// (0x0002d105) tmo_note_info_pane_ParamLimits

0xec1c,	// (0x0002d105) tmo_note_info_pane

0xec36,	// (0x0002d11f) list_tmo_note_info_pane_g1_ParamLimits

0xec36,	// (0x0002d11f) list_tmo_note_info_pane_g1

0xec4d,	// (0x0002d136) list_tmo_note_info_pane_g2_ParamLimits

0xec4d,	// (0x0002d136) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x0002e37e) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x0002e37e) list_tmo_note_info_pane_g

0xec69,	// (0x0002d152) list_tmo_note_info_text_pane_ParamLimits

0xec69,	// (0x0002d152) list_tmo_note_info_text_pane

0xecee,	// (0x0002d1d7) list_tmo_link_pane

0xecfb,	// (0x0002d1e4) scroll_pane_cp20

0xed08,	// (0x0002d1f1) list_single_tmo_link_pane_ParamLimits

0xed08,	// (0x0002d1f1) list_single_tmo_link_pane

0xed18,	// (0x0002d201) list_single_tmo_link_pane_t1

0xed26,	// (0x0002d20f) list_tmo_note_info_text_pane_t1_ParamLimits

0xed26,	// (0x0002d20f) list_tmo_note_info_text_pane_t1

0x6509,	// (0x000249f2) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6509,	// (0x000249f2) aid_size_touch_scroll_bar_cp01

0x51f7,	// (0x000236e0) aid_size_touch_slider_marker

0x604a,	// (0x00024533) popup_settings_window_ParamLimits

0x604a,	// (0x00024533) popup_settings_window

0x53be,	// (0x000238a7) popup_candi_list_indi_window

0x94fb,	// (0x000279e4) aid_touch_navi_pane_ParamLimits

0x8195,	// (0x0002667e) rs_clock_indi_pane

0x819e,	// (0x00026687) sctrl_sk_bottom_pane_ParamLimits

0x81af,	// (0x00026698) sctrl_sk_top_pane_ParamLimits

0x8298,	// (0x00026781) popup_fep_tooltip_window

0xe647,	// (0x0002cb30) aid_size_cell_widget_grid_ParamLimits

0xe6bc,	// (0x0002cba5) cell_ai5_widget_pane_g1_ParamLimits

0xe6bc,	// (0x0002cba5) cell_ai5_widget_pane_g1

0xe71f,	// (0x0002cc08) cell_ai5_widget_pane_g6_ParamLimits

0xe72b,	// (0x0002cc14) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe09,	// (0x0002e2f2) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0002e2f2) cell_ai5_widget_pane_g

0xe89c,	// (0x0002cd85) cell_ai5_widget_pane_t10_ParamLimits

0xe89c,	// (0x0002cd85) cell_ai5_widget_pane_t10

0xe8df,	// (0x0002cdc8) grid_ai5_widget_pane_ParamLimits

0xe977,	// (0x0002ce60) cell_contacts_ai5_widget_pane_ParamLimits

0xe977,	// (0x0002ce60) cell_contacts_ai5_widget_pane

0xeb61,	// (0x0002d04a) popup_discreet_window_t3_ParamLimits

0xeb61,	// (0x0002d04a) popup_discreet_window_t3

0x8a38,	// (0x00026f21) popup_fshwr2_char_preview_window_ParamLimits

0x8a38,	// (0x00026f21) popup_fshwr2_char_preview_window

0xec87,	// (0x0002d170) tmo_note_info_pane_t1

0xec9c,	// (0x0002d185) tmo_note_info_pane_t2

0xecb5,	// (0x0002d19e) tmo_note_info_pane_t3

0xecca,	// (0x0002d1b3) tmo_note_info_pane_t4

0xecdc,	// (0x0002d1c5) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x0002e383) tmo_note_info_pane_t

0xecee,	// (0x0002d1d7) list_tmo_link_pane_ParamLimits

0xecfb,	// (0x0002d1e4) scroll_pane_cp20_ParamLimits

0x14b4,	// (0x0001f99d) bg_popup_fep_char_preview_window_cp01

0xed3f,	// (0x0002d228) popup_fshwr2_char_preview_window_t1

0xed4d,	// (0x0002d236) popup_candi_list_indi_window_g1

0xed56,	// (0x0002d23f) bg_cell_contacts_ai5_widget_pane

0xed62,	// (0x0002d24b) cell_contacts_ai5_widget_pane_g1

0xed77,	// (0x0002d260) cell_contacts_ai5_widget_pane_g2

0xed83,	// (0x0002d26c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x0002e38e) cell_contacts_ai5_widget_pane_g

0xed8f,	// (0x0002d278) cell_contacts_ai5_widget_pane_t1

0x3287,	// (0x00021770) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee06,	// (0x0002d2ef) settings_container_pane

0x9156,	// (0x0002763f) listscroll_set_pane_copy1

0xb6f9,	// (0x00029be2) scroll_pane_cp121_copy1

0xee12,	// (0x0002d2fb) set_content_pane_copy1

0xee1a,	// (0x0002d303) aid_height_set_list_copy1_ParamLimits

0xee1a,	// (0x0002d303) aid_height_set_list_copy1

0xad90,	// (0x00029279) aid_size_parent_copy1_ParamLimits

0xad90,	// (0x00029279) aid_size_parent_copy1

0xee26,	// (0x0002d30f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee26,	// (0x0002d30f) button_value_adjust_pane_cp6_copy1

0x947d,	// (0x00027966) list_highlight_pane_cp2_copy1_ParamLimits

0x947d,	// (0x00027966) list_highlight_pane_cp2_copy1

0xee3a,	// (0x0002d323) list_set_pane_copy1_ParamLimits

0xee3a,	// (0x0002d323) list_set_pane_copy1

0xeda1,	// (0x0002d28a) main_pane_set_t1_copy1_ParamLimits

0xeda1,	// (0x0002d28a) main_pane_set_t1_copy1

0xeddb,	// (0x0002d2c4) main_pane_set_t2_copy1_ParamLimits

0xeddb,	// (0x0002d2c4) main_pane_set_t2_copy1

0xeefb,	// (0x0002d3e4) main_pane_set_t3_copy1

0xef09,	// (0x0002d3f2) main_pane_set_t4_copy1

0xedfa,	// (0x0002d2e3) set_content_pane_g1_copy1_ParamLimits

0xedfa,	// (0x0002d2e3) set_content_pane_g1_copy1

0xef17,	// (0x0002d400) setting_code_pane_copy1

0xef1f,	// (0x0002d408) setting_slider_graphic_pane_copy1

0xef1f,	// (0x0002d408) setting_slider_pane_copy1

0xef27,	// (0x0002d410) setting_text_pane_copy1

0xef27,	// (0x0002d410) setting_volume_pane_copy1

0xef17,	// (0x0002d400) settings_code_pane_cp2_copy1

0xef2f,	// (0x0002d418) settings_code_pane_cp_copy1_ParamLimits

0xef2f,	// (0x0002d418) settings_code_pane_cp_copy1

0x8b3d,	// (0x00027026) volume_set_pane_copy1

0xef43,	// (0x0002d42c) volume_set_pane_g10_copy1

0xef4f,	// (0x0002d438) volume_set_pane_g1_copy1

0xef59,	// (0x0002d442) volume_set_pane_g2_copy1

0xef63,	// (0x0002d44c) volume_set_pane_g3_copy1

0xef6d,	// (0x0002d456) volume_set_pane_g4_copy1

0xef77,	// (0x0002d460) volume_set_pane_g5_copy1

0xef81,	// (0x0002d46a) volume_set_pane_g6_copy1

0xef8b,	// (0x0002d474) volume_set_pane_g7_copy1

0xef95,	// (0x0002d47e) volume_set_pane_g8_copy1

0xef9f,	// (0x0002d488) volume_set_pane_g9_copy1

0x1524,	// (0x0001fa0d) bg_set_opt_pane_cp_copy1_ParamLimits

0x1524,	// (0x0001fa0d) bg_set_opt_pane_cp_copy1

0x8b49,	// (0x00027032) setting_slider_pane_t1_copy1_ParamLimits

0x8b49,	// (0x00027032) setting_slider_pane_t1_copy1

0x8b68,	// (0x00027051) setting_slider_pane_t2_copy1_ParamLimits

0x8b68,	// (0x00027051) setting_slider_pane_t2_copy1

0x8b82,	// (0x0002706b) setting_slider_pane_t3_copy1_ParamLimits

0x8b82,	// (0x0002706b) setting_slider_pane_t3_copy1

0x8b9a,	// (0x00027083) slider_set_pane_copy1_ParamLimits

0x8b9a,	// (0x00027083) slider_set_pane_copy1

0x3342,	// (0x0002182b) set_opt_bg_pane_g1_copy2

0x334a,	// (0x00021833) set_opt_bg_pane_g2_copy2

0xefab,	// (0x0002d494) set_opt_bg_pane_g3_copy2

0x335a,	// (0x00021843) set_opt_bg_pane_g4_copy2

0x3362,	// (0x0002184b) set_opt_bg_pane_g5_copy2

0x336a,	// (0x00021853) set_opt_bg_pane_g6_copy2

0xefb5,	// (0x0002d49e) set_opt_bg_pane_g7_copy2

0xefbf,	// (0x0002d4a8) set_opt_bg_pane_g8_copy2

0xefc9,	// (0x0002d4b2) set_opt_bg_pane_g9_copy2

0x8bb0,	// (0x00027099) aid_size_touch_slider_mark_copy1_ParamLimits

0x8bb0,	// (0x00027099) aid_size_touch_slider_mark_copy1

0xefd3,	// (0x0002d4bc) slider_set_pane_g1_copy1

0x8bc4,	// (0x000270ad) slider_set_pane_g2_copy1

0x7c5d,	// (0x00026146) slider_set_pane_g3_copy1_ParamLimits

0x7c5d,	// (0x00026146) slider_set_pane_g3_copy1

0x7c71,	// (0x0002615a) slider_set_pane_g4_copy1_ParamLimits

0x7c71,	// (0x0002615a) slider_set_pane_g4_copy1

0x7c89,	// (0x00026172) slider_set_pane_g5_copy1_ParamLimits

0x7c89,	// (0x00026172) slider_set_pane_g5_copy1

0x7c5d,	// (0x00026146) slider_set_pane_g6_copy1_ParamLimits

0x7c5d,	// (0x00026146) slider_set_pane_g6_copy1

0x8bcc,	// (0x000270b5) slider_set_pane_g7_copy1_ParamLimits

0x8bcc,	// (0x000270b5) slider_set_pane_g7_copy1

0x14c8,	// (0x0001f9b1) bg_set_opt_pane_cp2_copy1

0xefdc,	// (0x0002d4c5) setting_slider_graphic_pane_g1_copy1

0xefe5,	// (0x0002d4ce) setting_slider_graphic_pane_t1_copy1

0xeff5,	// (0x0002d4de) setting_slider_graphic_pane_t2_copy1

0xf005,	// (0x0002d4ee) slider_set_pane_cp_copy1

0xf015,	// (0x0002d4fe) input_focus_pane_cp1_copy1

0xf01e,	// (0x0002d507) list_set_text_pane_copy1

0xf026,	// (0x0002d50f) setting_text_pane_g1_copy1

0x5d2b,	// (0x00024214) set_text_pane_t1_copy1

0xf015,	// (0x0002d4fe) input_focus_pane_cp2_copy1

0xf026,	// (0x0002d50f) setting_code_pane_g1_copy1

0xf02f,	// (0x0002d518) setting_code_pane_t1_copy1

0xb4fe,	// (0x000299e7) list_set_graphic_pane_copy1

0x14c8,	// (0x0001f9b1) bg_set_opt_pane_cp4_copy1

0x8e45,	// (0x0002732e) list_set_graphic_pane_g1_copy1_ParamLimits

0x8e45,	// (0x0002732e) list_set_graphic_pane_g1_copy1

0xf03d,	// (0x0002d526) list_set_graphic_pane_g2_copy1

0x8e5d,	// (0x00027346) list_set_graphic_pane_t1_copy1_ParamLimits

0x8e5d,	// (0x00027346) list_set_graphic_pane_t1_copy1

0xbfd4,	// (0x0002a4bd) rs_clock_indi_pane_g1

0xf045,	// (0x0002d52e) rs_clock_indi_pane_t1

0xf053,	// (0x0002d53c) rs_indi_pane

0xf05b,	// (0x0002d544) rs_indi_pane_g1

0xf064,	// (0x0002d54d) rs_indi_pane_g2

0xf06d,	// (0x0002d556) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x0002e395) rs_indi_pane_g

0x9156,	// (0x0002763f) bg_popup_preview_window_pane_cp03

0xf076,	// (0x0002d55f) popup_fep_tooltip_window_t1

0xcc8d,	// (0x0002b176) popup_note2_window_g2_ParamLimits

0xcc8d,	// (0x0002b176) popup_note2_window_g2

0x0001,

0xfc39,	// (0x0002e122) popup_note2_window_g_ParamLimits

0xfc39,	// (0x0002e122) popup_note2_window_g

0xd195,	// (0x0002b67e) bg_popup_sub_pane_cp11_ParamLimits

0xd1a2,	// (0x0002b68b) cell_ai3_links_pane_g1_ParamLimits

0xd1b9,	// (0x0002b6a2) cell_ai3_links_pane_t1

0x5d2b,	// (0x00024214) set_text_pane_t1_copy1_ParamLimits

0x9063,	// (0x0002754c) cell_graphic_popup_pane_cp2_ParamLimits

0x9063,	// (0x0002754c) cell_graphic_popup_pane_cp2

0xf084,	// (0x0002d56d) cell_graphic_popup_pane_g1_cp2

0x2f55,	// (0x0002143e) cell_graphic_popup_pane_g2_cp2

0xf08c,	// (0x0002d575) cell_graphic_popup_pane_g3_cp2

0xf094,	// (0x0002d57d) cell_graphic_popup_pane_t2_cp2

0x2f66,	// (0x0002144f) grid_highlight_pane_cp3_cp2

0x6992,	// (0x00024e7b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3287,	// (0x00021770) main_tmo_pane_ParamLimits

0xd4d5,	// (0x0002b9be) popup_tmo_big_image_note_window

0xe6ab,	// (0x0002cb94) cell_ai5_widget_list_pane

0xe6b3,	// (0x0002cb9c) cell_ai5_widget_lrg_icon_pane

0xec87,	// (0x0002d170) tmo_note_info_pane_t1_ParamLimits

0xec9c,	// (0x0002d185) tmo_note_info_pane_t2_ParamLimits

0xecb5,	// (0x0002d19e) tmo_note_info_pane_t3_ParamLimits

0xecca,	// (0x0002d1b3) tmo_note_info_pane_t4_ParamLimits

0xecdc,	// (0x0002d1c5) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x0002e383) tmo_note_info_pane_t_ParamLimits

0xee06,	// (0x0002d2ef) settings_container_pane_ParamLimits

0xf00d,	// (0x0002d4f6) indicator_popup_pane_cp5

0xf00d,	// (0x0002d4f6) indicator_popup_pane_cp6

0xb4fe,	// (0x000299e7) list_set_graphic_pane_copy1_ParamLimits

0x14b4,	// (0x0001f99d) bg_popup_window_pane_cp23

0xf0a2,	// (0x0002d58b) popup_tmo_big_image_note_window_g1

0xf0ae,	// (0x0002d597) popup_tmo_big_image_note_window_t1

0xf0be,	// (0x0002d5a7) popup_tmo_big_image_note_window_t2

0xf0ce,	// (0x0002d5b7) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x0002e39c) popup_tmo_big_image_note_window_t

0xbfd4,	// (0x0002a4bd) cell_ai5_widget_lrg_icon_pane_g1

0xf0de,	// (0x0002d5c7) cell_ai5_widget_lrg_icon_pane_t1

0xf0ec,	// (0x0002d5d5) cell_ai5_widget_list_row_pane_ParamLimits

0xf0ec,	// (0x0002d5d5) cell_ai5_widget_list_row_pane

0xf104,	// (0x0002d5ed) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf104,	// (0x0002d5ed) cell_ai5_widget_list_row_pane_g1

0xf111,	// (0x0002d5fa) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf111,	// (0x0002d5fa) cell_ai5_widget_list_row_pane_t1

0xf13c,	// (0x0002d625) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf13c,	// (0x0002d625) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeba,	// (0x0002e3a3) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeba,	// (0x0002e3a3) cell_ai5_widget_list_row_pane_t

0x14b4,	// (0x0001f99d) main_fep_vtchi_ss_pane

0xf18c,	// (0x0002d675) popup_fep_char_pre_window

0xf194,	// (0x0002d67d) popup_fep_ituss_window

0xf1c0,	// (0x0002d6a9) popup_fep_vkbss_window

0x947d,	// (0x00027966) grid_vkbss_keypad_pane_ParamLimits

0x947d,	// (0x00027966) grid_vkbss_keypad_pane

0xf202,	// (0x0002d6eb) ituss_keypad_pane

0x8bee,	// (0x000270d7) aid_vkbss_key_offset_ParamLimits

0x8bee,	// (0x000270d7) aid_vkbss_key_offset

0x8bfa,	// (0x000270e3) cell_vkbss_key_pane_ParamLimits

0x8bfa,	// (0x000270e3) cell_vkbss_key_pane

0xf20e,	// (0x0002d6f7) bg_cell_vkbss_key_g1_ParamLimits

0xf20e,	// (0x0002d6f7) bg_cell_vkbss_key_g1

0xf21a,	// (0x0002d703) cell_vkbss_key_3p_pane_ParamLimits

0xf21a,	// (0x0002d703) cell_vkbss_key_3p_pane

0xf250,	// (0x0002d739) cell_vkbss_key_g1_ParamLimits

0xf250,	// (0x0002d739) cell_vkbss_key_g1

0xf286,	// (0x0002d76f) cell_vkbss_key_t1_ParamLimits

0xf286,	// (0x0002d76f) cell_vkbss_key_t1

0x8c34,	// (0x0002711d) cell_ituss_key_pane_ParamLimits

0x8c34,	// (0x0002711d) cell_ituss_key_pane

0xf2e2,	// (0x0002d7cb) bg_cell_ituss_key_g1_ParamLimits

0xf2e2,	// (0x0002d7cb) bg_cell_ituss_key_g1

0xf2ee,	// (0x0002d7d7) cell_ituss_key_pane_g1_ParamLimits

0xf2ee,	// (0x0002d7d7) cell_ituss_key_pane_g1

0x8c45,	// (0x0002712e) cell_ituss_key_pane_g2_ParamLimits

0x8c45,	// (0x0002712e) cell_ituss_key_pane_g2

0x0005,

0xfec1,	// (0x0002e3aa) cell_ituss_key_pane_g_ParamLimits

0xfec1,	// (0x0002e3aa) cell_ituss_key_pane_g

0x8cc9,	// (0x000271b2) cell_ituss_key_t1_ParamLimits

0x8cc9,	// (0x000271b2) cell_ituss_key_t1

0x8d03,	// (0x000271ec) cell_ituss_key_t2_ParamLimits

0x8d03,	// (0x000271ec) cell_ituss_key_t2

0x8d34,	// (0x0002721d) cell_ituss_key_t3_ParamLimits

0x8d34,	// (0x0002721d) cell_ituss_key_t3

0x8d03,	// (0x000271ec) cell_ituss_key_t4_ParamLimits

0x8d03,	// (0x000271ec) cell_ituss_key_t4

0x0004,

0xfece,	// (0x0002e3b7) cell_ituss_key_t_ParamLimits

0xfece,	// (0x0002e3b7) cell_ituss_key_t

0xf314,	// (0x0002d7fd) cell_vkbss_key_3p_pane_g1

0xf31c,	// (0x0002d805) cell_vkbss_key_3p_pane_g2

0xf324,	// (0x0002d80d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed9,	// (0x0002e3c2) cell_vkbss_key_3p_pane_g

0x9156,	// (0x0002763f) bg_popup_fep_char_preview_window_cp02

0xf32c,	// (0x0002d815) popup_fep_char_pre_window_t1

0xe634,	// (0x0002cb1d) main_ai5_sk_pane

0xed56,	// (0x0002d23f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed62,	// (0x0002d24b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed77,	// (0x0002d260) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed83,	// (0x0002d26c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x0002e38e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed8f,	// (0x0002d278) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3287,	// (0x00021770) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf33a,	// (0x0002d823) main_ai5_sk_pane_g1

0x9e51,	// (0x0002833a) popup_query_code_window_g1

0xf1aa,	// (0x0002d693) popup_fep_vkb_icf_pane

0xf1d9,	// (0x0002d6c2) popup_fep_vtchi_icf_pane

0x947d,	// (0x00027966) bg_icf_pane

0x947d,	// (0x00027966) list_vkb_icf_pane

0xf343,	// (0x0002d82c) bg_icf_pane_cp01

0xf356,	// (0x0002d83f) vtchi_icf_list_pane

0xf3be,	// (0x0002d8a7) list_vkb_icf_pane_t1_ParamLimits

0xf3be,	// (0x0002d8a7) list_vkb_icf_pane_t1

0xf3da,	// (0x0002d8c3) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0002d8c3) vtchi_icf_list_pane_t1

0xf194,	// (0x0002d67d) popup_fep_ituss_window_ParamLimits

0xf1d9,	// (0x0002d6c2) popup_fep_vtchi_icf_pane_ParamLimits

0xf202,	// (0x0002d6eb) ituss_keypad_pane_ParamLimits

0x8be2,	// (0x000270cb) ituss_sks_pane

0x947d,	// (0x00027966) bg_icf_pane_ParamLimits

0xf164,	// (0x0002d64d) icf_edit_indi_pane_ParamLimits

0xf164,	// (0x0002d64d) icf_edit_indi_pane

0x947d,	// (0x00027966) list_vkb_icf_pane_ParamLimits

0xf343,	// (0x0002d82c) bg_icf_pane_cp01_ParamLimits

0xf17f,	// (0x0002d668) icf_edit_indi_pane_cp01_ParamLimits

0xf17f,	// (0x0002d668) icf_edit_indi_pane_cp01

0xf35e,	// (0x0002d847) vtchi_query_pane

0xe4d6,	// (0x0002c9bf) icf_edit_indi_pane_g1_ParamLimits

0xe4d6,	// (0x0002c9bf) icf_edit_indi_pane_g1

0xf44a,	// (0x0002d933) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x0002d933) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0002e3ed) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0002e3ed) icf_edit_indi_pane_g

0xf45e,	// (0x0002d947) icf_edit_indi_pane_t1

0xf3f3,	// (0x0002d8dc) bg_input_focus_pane_cp042

0x3139,	// (0x00021622) vtchi_button_pane

0xf3fc,	// (0x0002d8e5) vtchi_query_pane_t1

0xf40a,	// (0x0002d8f3) vtchi_query_pane_t2

0xf418,	// (0x0002d901) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0002e3dc) vtchi_query_pane_t

0x14b4,	// (0x0001f99d) bg_button_pane_cp13

0xf426,	// (0x0002d90f) vtchi_button_pane_g1

0x8d77,	// (0x00027260) ituss_sks_pane_g1

0x8d82,	// (0x0002726b) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0002e3e3) ituss_sks_pane_g

0xf42e,	// (0x0002d917) ituss_sks_pane_t1

0xf43c,	// (0x0002d925) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0002e3e8) ituss_sks_pane_t

0xbaa8,	// (0x00029f91) indicator_nsta_pane_cp_g1

0xbab1,	// (0x00029f9a) indicator_nsta_pane_cp_g2

0xbab9,	// (0x00029fa2) indicator_nsta_pane_cp_g3

0xbac1,	// (0x00029faa) indicator_nsta_pane_cp_g4

0xbab1,	// (0x00029f9a) indicator_nsta_pane_cp_g5

0xbab9,	// (0x00029fa2) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0002df6c) indicator_nsta_pane_cp_g

0xe1f9,	// (0x0002c6e2) cell_graphic2_pane_t2_ParamLimits

0xe1f9,	// (0x0002c6e2) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x0002e279) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x0002e279) cell_graphic2_pane_t

0xe225,	// (0x0002c70e) cell_graphic2_control_pane_t1

0x6dc6,	// (0x000252af) signal_pane_g3_ParamLimits

0x6dc6,	// (0x000252af) signal_pane_g3

0x6dd5,	// (0x000252be) signal_pane_g4_ParamLimits

0x6dd5,	// (0x000252be) signal_pane_g4

0xf14e,	// (0x0002d637) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14e,	// (0x0002d637) cell_ai5_widget_list_row_pane_t3

0xf302,	// (0x0002d7eb) cell_ituss_key_pane_t1_ParamLimits

0xf302,	// (0x0002d7eb) cell_ituss_key_pane_t1

0x9ab8,	// (0x00027fa1) form_field_data_wide_pane_vc_t2_ParamLimits

0x9ab8,	// (0x00027fa1) form_field_data_wide_pane_vc_t2

0x9acc,	// (0x00027fb5) form_field_data_wide_pane_vc_t3_ParamLimits

0x9acc,	// (0x00027fb5) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0002dccd) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0002dccd) form_field_data_wide_pane_vc_t

0xb739,	// (0x00029c22) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb739,	// (0x00029c22) form_field_slider_wide_pane_vc_t3

0xb80f,	// (0x00029cf8) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb80f,	// (0x00029cf8) form_field_popup_wide_pane_vc_t2

0xb826,	// (0x00029d0f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb826,	// (0x00029d0f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0002df5b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002df5b) form_field_popup_wide_pane_vc_t

0x89c4,	// (0x00026ead) aid_fshwr2_btn_pane_ParamLimits

0x89d0,	// (0x00026eb9) aid_fshwr2_syb_pane_ParamLimits

0x89e2,	// (0x00026ecb) aid_fshwr2_txt_pane_ParamLimits

0x3287,	// (0x00021770) fshwr2_bg_pane_ParamLimits

0x89ee,	// (0x00026ed7) fshwr2_func_candi_pane_ParamLimits

0x8a06,	// (0x00026eef) fshwr2_hwr_syb_pane_ParamLimits

0x8a1c,	// (0x00026f05) fshwr2_icf_pane_ParamLimits

0x5904,	// (0x00023ded) list_double_graphic_pane_vc_g4_ParamLimits

0x5904,	// (0x00023ded) list_double_graphic_pane_vc_g4

0x8c65,	// (0x0002714e) cell_ituss_key_pane_g3_ParamLimits

0x8c65,	// (0x0002714e) cell_ituss_key_pane_g3

0x8d65,	// (0x0002724e) cell_ituss_key_t5_ParamLimits

0x8d65,	// (0x0002724e) cell_ituss_key_t5

0xf1c0,	// (0x0002d6a9) popup_fep_vkbss_window_ParamLimits

0xe63e,	// (0x0002cb27) aid_cell_ai5_quarter

0xf45e,	// (0x0002d947) icf_edit_indi_pane_t1_ParamLimits

0x2d99,	// (0x00021282) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x2d99,	// (0x00021282) aid_tch_indicator_popup_pane_cp2

0x2dac,	// (0x00021295) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x2dac,	// (0x00021295) aid_tch_query_popup_data_pane_cp2

0x9df9,	// (0x000282e2) aid_tch_query_popup_pane_ParamLimits

0x9df9,	// (0x000282e2) aid_tch_query_popup_pane

0x9df9,	// (0x000282e2) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9df9,	// (0x000282e2) aid_tch_query_popup_data_pane_cp1

0x947d,	// (0x00027966) cell_fshwr2_syb_bg_pane_ParamLimits

0x8b0d,	// (0x00026ff6) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8b21,	// (0x0002700a) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1aa,	// (0x0002d693) popup_fep_vkb_icf_pane_ParamLimits

0x8834,	// (0x00026d1d) bg_popup_fep_char_preview_window_g10

0xe773,	// (0x0002cc5c) cell_ai5_widget_pane_g11_ParamLimits

0xe773,	// (0x0002cc5c) cell_ai5_widget_pane_g11

0xe77f,	// (0x0002cc68) cell_ai5_widget_pane_g12_ParamLimits

0xe77f,	// (0x0002cc68) cell_ai5_widget_pane_g12

0xe78b,	// (0x0002cc74) cell_ai5_widget_pane_g13_ParamLimits

0xe78b,	// (0x0002cc74) cell_ai5_widget_pane_g13

0xe8bb,	// (0x0002cda4) cell_ai5_widget_pane_t11_ParamLimits

0xe8bb,	// (0x0002cda4) cell_ai5_widget_pane_t11

0xe8cd,	// (0x0002cdb6) cell_ai5_widget_pane_t12_ParamLimits

0xe8cd,	// (0x0002cdb6) cell_ai5_widget_pane_t12

0x8c71,	// (0x0002715a) cell_ituss_key_pane_g4_ParamLimits

0x8c71,	// (0x0002715a) cell_ituss_key_pane_g4

0x8c8d,	// (0x00027176) cell_ituss_key_pane_g5_ParamLimits

0x8c8d,	// (0x00027176) cell_ituss_key_pane_g5

0x8ca9,	// (0x00027192) cell_ituss_key_pane_g6_ParamLimits

0x8ca9,	// (0x00027192) cell_ituss_key_pane_g6

0x99b3,	// (0x00027e9c) bg_icf_pane_g1

0xf366,	// (0x0002d84f) bg_icf_pane_g2

0xf372,	// (0x0002d85b) bg_icf_pane_g3

0xf37c,	// (0x0002d865) bg_icf_pane_g4

0xf388,	// (0x0002d871) bg_icf_pane_g5

0xf392,	// (0x0002d87b) bg_icf_pane_g6

0xf39e,	// (0x0002d887) bg_icf_pane_g7

0xf3a8,	// (0x0002d891) bg_icf_pane_g8

0xf3b4,	// (0x0002d89d) bg_icf_pane_g9

0x0008,

0xfee0,	// (0x0002e3c9) bg_icf_pane_g

0xf1ef,	// (0x0002d6d8) popup_hyb_candi_window_ParamLimits

0xf1ef,	// (0x0002d6d8) popup_hyb_candi_window

0x9a27,	// (0x00027f10) bg_popup_sub_pane_cp01_ParamLimits

0x9a27,	// (0x00027f10) bg_popup_sub_pane_cp01

0xf477,	// (0x0002d960) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0002d960) entry_hyb_candi_pane

0xf486,	// (0x0002d96f) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0002d96f) grid_hyb_candi_pane

0xf49b,	// (0x0002d984) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x0002d984) grid_hyb_phrase_pane

0xf4aa,	// (0x0002d993) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x0002d993) cell_hyb_candi_pane

0x3142,	// (0x0002162b) cell_hyb_candi_scroll_pane

0x6c8c,	// (0x00025175) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0002d9af) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0002d9bd) cell_hyb_phrase_pane

0x6c8c,	// (0x00025175) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0002d9c6) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0002d9d4) entry_hyb_candi_pane_t1

0x9156,	// (0x0002763f) input_focus_pane_cp06

0xf4f9,	// (0x0002d9e2) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0002d9ea) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0002d9f2) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0002d9fa) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0002da02) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0002da0a) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small

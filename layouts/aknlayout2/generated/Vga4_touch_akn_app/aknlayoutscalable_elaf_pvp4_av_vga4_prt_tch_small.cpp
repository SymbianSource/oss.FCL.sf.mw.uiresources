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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001c21f };

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
0x5ad9,	// (0x00021cf8) Screen

0x5ae5,	// (0x00021d04) application_window_ParamLimits

0x5ae5,	// (0x00021d04) application_window

0x3452,	// (0x0001f671) screen_g1

0x5b41,	// (0x00021d60) area_bottom_pane_ParamLimits

0x5b41,	// (0x00021d60) area_bottom_pane

0x5c01,	// (0x00021e20) area_top_pane_ParamLimits

0x5c01,	// (0x00021e20) area_top_pane

0x5c95,	// (0x00021eb4) main_pane_ParamLimits

0x5c95,	// (0x00021eb4) main_pane

0x345c,	// (0x0001f67b) misc_graphics

0x955d,	// (0x0002577c) battery_pane_ParamLimits

0x955d,	// (0x0002577c) battery_pane

0xa27c,	// (0x0002649b) bg_status_flat_pane_g8

0xa284,	// (0x000264a3) bg_status_flat_pane_g9

0x9625,	// (0x00025844) context_pane_ParamLimits

0x9625,	// (0x00025844) context_pane

0x9749,	// (0x00025968) navi_pane_ParamLimits

0x9749,	// (0x00025968) navi_pane

0x97d8,	// (0x000259f7) signal_pane_ParamLimits

0x97d8,	// (0x000259f7) signal_pane

0x0008,

0xf88a,	// (0x0002baa9) bg_status_flat_pane_g

0x9845,	// (0x00025a64) status_pane_g1_ParamLimits

0x9845,	// (0x00025a64) status_pane_g1

0x9859,	// (0x00025a78) status_pane_g2_ParamLimits

0x9859,	// (0x00025a78) status_pane_g2

0x9865,	// (0x00025a84) status_pane_g3_ParamLimits

0x9865,	// (0x00025a84) status_pane_g3

0x0004,

0xf7b8,	// (0x0002b9d7) status_pane_g_ParamLimits

0xf7b8,	// (0x0002b9d7) status_pane_g

0x9899,	// (0x00025ab8) title_pane_ParamLimits

0x9899,	// (0x00025ab8) title_pane

0x98d6,	// (0x00025af5) uni_indicator_pane_ParamLimits

0x98d6,	// (0x00025af5) uni_indicator_pane

0x8e52,	// (0x00025071) bg_list_pane_ParamLimits

0x8e52,	// (0x00025071) bg_list_pane

0x8e72,	// (0x00025091) find_pane

0x8e7a,	// (0x00025099) listscroll_app_pane_ParamLimits

0x8e7a,	// (0x00025099) listscroll_app_pane

0x8e86,	// (0x000250a5) listscroll_form_pane

0x8e8e,	// (0x000250ad) listscroll_gen_pane_ParamLimits

0x8e8e,	// (0x000250ad) listscroll_gen_pane

0x8e86,	// (0x000250a5) listscroll_set_pane

0x80c7,	// (0x000242e6) main_idle_act_pane

0x8b2e,	// (0x00024d4d) main_idle_trad_pane

0x8b2e,	// (0x00024d4d) main_list_empty_pane

0x8eb4,	// (0x000250d3) main_midp_pane

0x8ec0,	// (0x000250df) main_pane_g1_ParamLimits

0x8ec0,	// (0x000250df) main_pane_g1

0x8ece,	// (0x000250ed) popup_ai_message_window_ParamLimits

0x8ece,	// (0x000250ed) popup_ai_message_window

0x8f7e,	// (0x0002519d) popup_fep_china_uni_window_ParamLimits

0x8f7e,	// (0x0002519d) popup_fep_china_uni_window

0x8fde,	// (0x000251fd) popup_fep_japan_candidate_window_ParamLimits

0x8fde,	// (0x000251fd) popup_fep_japan_candidate_window

0x9008,	// (0x00025227) popup_fep_japan_predictive_window_ParamLimits

0x9008,	// (0x00025227) popup_fep_japan_predictive_window

0x903e,	// (0x0002525d) popup_find_window

0x904b,	// (0x0002526a) popup_grid_graphic_window_ParamLimits

0x904b,	// (0x0002526a) popup_grid_graphic_window

0x9079,	// (0x00025298) popup_large_graphic_colour_window

0x909f,	// (0x000252be) popup_menu_window_ParamLimits

0x909f,	// (0x000252be) popup_menu_window

0x9269,	// (0x00025488) popup_note_image_window

0x9253,	// (0x00025472) popup_note_wait_window_ParamLimits

0x9253,	// (0x00025472) popup_note_wait_window

0x9253,	// (0x00025472) popup_note_window_ParamLimits

0x9253,	// (0x00025472) popup_note_window

0x92cf,	// (0x000254ee) popup_query_code_window_ParamLimits

0x92cf,	// (0x000254ee) popup_query_code_window

0x92e5,	// (0x00025504) popup_query_data_code_window_ParamLimits

0x92e5,	// (0x00025504) popup_query_data_code_window

0x9308,	// (0x00025527) popup_query_data_window_ParamLimits

0x9308,	// (0x00025527) popup_query_data_window

0x932a,	// (0x00025549) popup_query_sat_info_window_ParamLimits

0x932a,	// (0x00025549) popup_query_sat_info_window

0x9369,	// (0x00025588) popup_snote_single_graphic_window_ParamLimits

0x9369,	// (0x00025588) popup_snote_single_graphic_window

0x9369,	// (0x00025588) popup_snote_single_text_window_ParamLimits

0x9369,	// (0x00025588) popup_snote_single_text_window

0x9380,	// (0x0002559f) popup_sub_window_general

0x94c6,	// (0x000256e5) popup_window_general_ParamLimits

0x94c6,	// (0x000256e5) popup_window_general

0x94df,	// (0x000256fe) power_save_pane

0x6cd2,	// (0x00022ef1) control_pane_g1_ParamLimits

0x6cd2,	// (0x00022ef1) control_pane_g1

0x6cfb,	// (0x00022f1a) control_pane_g2_ParamLimits

0x6cfb,	// (0x00022f1a) control_pane_g2

0x8dfb,	// (0x0002501a) control_pane_g3_ParamLimits

0x8dfb,	// (0x0002501a) control_pane_g3

0x0007,

0xf7a0,	// (0x0002b9bf) control_pane_g_ParamLimits

0xf7a0,	// (0x0002b9bf) control_pane_g

0x6d46,	// (0x00022f65) control_pane_t1_ParamLimits

0x6d46,	// (0x00022f65) control_pane_t1

0x6d98,	// (0x00022fb7) control_pane_t2_ParamLimits

0x6d98,	// (0x00022fb7) control_pane_t2

0x0002,

0xf7b1,	// (0x0002b9d0) control_pane_t_ParamLimits

0xf7b1,	// (0x0002b9d0) control_pane_t

0x8d1c,	// (0x00024f3b) navi_navi_volume_pane_cp1

0x8d25,	// (0x00024f44) status_small_icon_pane

0x8d2d,	// (0x00024f4c) status_small_pane_g1_ParamLimits

0x8d2d,	// (0x00024f4c) status_small_pane_g1

0x8d61,	// (0x00024f80) status_small_pane_g2_ParamLimits

0x8d61,	// (0x00024f80) status_small_pane_g2

0x8d6d,	// (0x00024f8c) status_small_pane_g3_ParamLimits

0x8d6d,	// (0x00024f8c) status_small_pane_g3

0x8d79,	// (0x00024f98) status_small_pane_g4_ParamLimits

0x8d79,	// (0x00024f98) status_small_pane_g4

0x8d85,	// (0x00024fa4) status_small_pane_g5_ParamLimits

0x8d85,	// (0x00024fa4) status_small_pane_g5

0x8d94,	// (0x00024fb3) status_small_pane_g6_ParamLimits

0x8d94,	// (0x00024fb3) status_small_pane_g6

0x0007,

0xf78f,	// (0x0002b9ae) status_small_pane_g_ParamLimits

0xf78f,	// (0x0002b9ae) status_small_pane_g

0x8dc4,	// (0x00024fe3) status_small_pane_t1

0x8de7,	// (0x00025006) status_small_wait_pane_ParamLimits

0x8de7,	// (0x00025006) status_small_wait_pane

0x85c5,	// (0x000247e4) aid_levels_signal_ParamLimits

0x85c5,	// (0x000247e4) aid_levels_signal

0x85d7,	// (0x000247f6) signal_pane_g1_ParamLimits

0x85d7,	// (0x000247f6) signal_pane_g1

0x85ec,	// (0x0002480b) signal_pane_g2_ParamLimits

0x85ec,	// (0x0002480b) signal_pane_g2

0x0001,

0xf724,	// (0x0002b943) signal_pane_g_ParamLimits

0xf724,	// (0x0002b943) signal_pane_g

0x8601,	// (0x00024820) context_pane_g1

0x5eec,	// (0x0002210b) title_pane_g1

0x5f22,	// (0x00022141) title_pane_t1

0x5f8a,	// (0x000221a9) title_pane_t2

0x5fb0,	// (0x000221cf) title_pane_t3

0x0002,

0xf573,	// (0x0002b792) title_pane_t

0x98ee,	// (0x00025b0d) aid_levels_battery_ParamLimits

0x98ee,	// (0x00025b0d) aid_levels_battery

0x9902,	// (0x00025b21) battery_pane_g1_ParamLimits

0x9902,	// (0x00025b21) battery_pane_g1

0x9918,	// (0x00025b37) battery_pane_g2_ParamLimits

0x9918,	// (0x00025b37) battery_pane_g2

0x0001,

0xf7c3,	// (0x0002b9e2) battery_pane_g_ParamLimits

0xf7c3,	// (0x0002b9e2) battery_pane_g

0xabcc,	// (0x00026deb) uni_indicator_pane_g1

0xabe1,	// (0x00026e00) uni_indicator_pane_g2

0xabf7,	// (0x00026e16) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0002bb51) uni_indicator_pane_g

0x899c,	// (0x00024bbb) navi_icon_pane_ParamLimits

0x899c,	// (0x00024bbb) navi_icon_pane

0x88e3,	// (0x00024b02) navi_midp_pane

0x89b8,	// (0x00024bd7) navi_navi_pane

0x89c2,	// (0x00024be1) navi_text_pane_ParamLimits

0x89c2,	// (0x00024be1) navi_text_pane

0x3452,	// (0x0001f671) status_small_wait_pane_g1

0x6484,	// (0x000226a3) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x0002bb4c) status_small_wait_pane_g

0xa8df,	// (0x00026afe) navi_navi_icon_text_pane

0xa8e7,	// (0x00026b06) navi_navi_pane_g1_ParamLimits

0xa8e7,	// (0x00026b06) navi_navi_pane_g1

0xa8f9,	// (0x00026b18) navi_navi_pane_g2_ParamLimits

0xa8f9,	// (0x00026b18) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x0002bb1a) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x0002bb1a) navi_navi_pane_g

0xa90b,	// (0x00026b2a) navi_navi_tabs_pane

0xa914,	// (0x00026b33) navi_navi_text_pane

0xa8df,	// (0x00026afe) navi_navi_volume_pane

0xa8b8,	// (0x00026ad7) navi_text_pane_t1

0xa8a9,	// (0x00026ac8) navi_icon_pane_g1

0xa7fc,	// (0x00026a1b) navi_navi_text_pane_t1

0x70af,	// (0x000232ce) navi_navi_volume_pane_g1

0x70b7,	// (0x000232d6) volume_small_pane

0xa762,	// (0x00026981) navi_navi_icon_text_pane_g1

0xa76a,	// (0x00026989) navi_navi_icon_text_pane_t1

0x89b8,	// (0x00024bd7) navi_tabs_2_long_pane

0x89b8,	// (0x00024bd7) navi_tabs_2_pane

0x89b8,	// (0x00024bd7) navi_tabs_3_long_pane

0x89b8,	// (0x00024bd7) navi_tabs_3_pane

0x89b8,	// (0x00024bd7) navi_tabs_4_pane

0x708f,	// (0x000232ae) tabs_2_active_pane_ParamLimits

0x708f,	// (0x000232ae) tabs_2_active_pane

0x709f,	// (0x000232be) tabs_2_passive_pane_ParamLimits

0x709f,	// (0x000232be) tabs_2_passive_pane

0x705d,	// (0x0002327c) tabs_3_active_pane_ParamLimits

0x705d,	// (0x0002327c) tabs_3_active_pane

0x706d,	// (0x0002328c) tabs_3_passive_pane_ParamLimits

0x706d,	// (0x0002328c) tabs_3_passive_pane

0x707e,	// (0x0002329d) tabs_3_passive_pane_cp_ParamLimits

0x707e,	// (0x0002329d) tabs_3_passive_pane_cp

0x7011,	// (0x00023230) tabs_4_active_pane_ParamLimits

0x7011,	// (0x00023230) tabs_4_active_pane

0x7024,	// (0x00023243) tabs_4_passive_pane_ParamLimits

0x7024,	// (0x00023243) tabs_4_passive_pane

0x7035,	// (0x00023254) tabs_4_passive_pane_cp_ParamLimits

0x7035,	// (0x00023254) tabs_4_passive_pane_cp

0x7046,	// (0x00023265) tabs_4_passive_pane_cp2_ParamLimits

0x7046,	// (0x00023265) tabs_4_passive_pane_cp2

0x6fed,	// (0x0002320c) tabs_2_long_active_pane_ParamLimits

0x6fed,	// (0x0002320c) tabs_2_long_active_pane

0x6fff,	// (0x0002321e) tabs_2_long_passive_pane_ParamLimits

0x6fff,	// (0x0002321e) tabs_2_long_passive_pane

0x6fae,	// (0x000231cd) tabs_3_long_active_pane_ParamLimits

0x6fae,	// (0x000231cd) tabs_3_long_active_pane

0x6fc1,	// (0x000231e0) tabs_3_long_passive_pane_ParamLimits

0x6fc1,	// (0x000231e0) tabs_3_long_passive_pane

0x6fda,	// (0x000231f9) tabs_3_long_passive_pane_cp_ParamLimits

0x6fda,	// (0x000231f9) tabs_3_long_passive_pane_cp

0x6f54,	// (0x00023173) volume_small_pane_g1

0x6f5d,	// (0x0002317c) volume_small_pane_g2

0x6f66,	// (0x00023185) volume_small_pane_g3

0x6f6f,	// (0x0002318e) volume_small_pane_g4

0x6f78,	// (0x00023197) volume_small_pane_g5

0x6f81,	// (0x000231a0) volume_small_pane_g6

0x6f8a,	// (0x000231a9) volume_small_pane_g7

0x6f93,	// (0x000231b2) volume_small_pane_g8

0x6f9c,	// (0x000231bb) volume_small_pane_g9

0x6fa5,	// (0x000231c4) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x0002bae6) volume_small_pane_g

0x5fc2,	// (0x000221e1) bg_active_tab_pane_cp2_ParamLimits

0x5fc2,	// (0x000221e1) bg_active_tab_pane_cp2

0x5fd0,	// (0x000221ef) tabs_3_active_pane_g1

0x5fd8,	// (0x000221f7) tabs_3_active_pane_t1

0x5fc2,	// (0x000221e1) bg_passive_tab_pane_cp2_ParamLimits

0x5fc2,	// (0x000221e1) bg_passive_tab_pane_cp2

0x5fd0,	// (0x000221ef) tabs_3_passive_pane_g1

0x5fd8,	// (0x000221f7) tabs_3_passive_pane_t1

0x5fc2,	// (0x000221e1) bg_active_tab_pane_cp3_ParamLimits

0x5fc2,	// (0x000221e1) bg_active_tab_pane_cp3

0x5fea,	// (0x00022209) tabs_4_active_pane_g1

0x5ff2,	// (0x00022211) tabs_4_active_pane_t1

0x5fc2,	// (0x000221e1) bg_passive_tab_pane_cp3_ParamLimits

0x5fc2,	// (0x000221e1) bg_passive_tab_pane_cp3

0x5fea,	// (0x00022209) tabs_4_1_passive_pane_g1

0x5ff2,	// (0x00022211) tabs_4_1_passive_pane_t1

0x8eb4,	// (0x000250d3) list_highlight_pane_cp2

0xae5b,	// (0x0002707a) list_set_pane_ParamLimits

0xae5b,	// (0x0002707a) list_set_pane

0xaf23,	// (0x00027142) main_pane_set_t1_ParamLimits

0xaf23,	// (0x00027142) main_pane_set_t1

0xaf43,	// (0x00027162) main_pane_set_t2_ParamLimits

0xaf43,	// (0x00027162) main_pane_set_t2

0xaf57,	// (0x00027176) main_pane_set_t3_ParamLimits

0xaf57,	// (0x00027176) main_pane_set_t3

0xaf6b,	// (0x0002718a) main_pane_set_t4_ParamLimits

0xaf6b,	// (0x0002718a) main_pane_set_t4

0x0003,

0xf997,	// (0x0002bbb6) main_pane_set_t_ParamLimits

0xf997,	// (0x0002bbb6) main_pane_set_t

0xaf8b,	// (0x000271aa) setting_code_pane

0xaf95,	// (0x000271b4) setting_slider_graphic_pane

0xaf95,	// (0x000271b4) setting_slider_pane

0xaf95,	// (0x000271b4) setting_text_pane

0xaf95,	// (0x000271b4) setting_volume_pane

0x6004,	// (0x00022223) volume_set_pane

0x5fc2,	// (0x000221e1) bg_set_opt_pane_cp

0x600e,	// (0x0002222d) setting_slider_pane_t1

0x6024,	// (0x00022243) setting_slider_pane_t2

0x603e,	// (0x0002225d) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0002b799) setting_slider_pane_t

0x6056,	// (0x00022275) slider_set_pane

0x345c,	// (0x0001f67b) bg_set_opt_pane_cp2

0x606c,	// (0x0002228b) setting_slider_graphic_pane_g1

0x6075,	// (0x00022294) setting_slider_graphic_pane_t1

0x6085,	// (0x000222a4) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0002b7a0) setting_slider_graphic_pane_t

0x6095,	// (0x000222b4) slider_set_pane_cp

0x345c,	// (0x0001f67b) input_focus_pane_cp1

0xae1c,	// (0x0002703b) list_set_text_pane

0x3452,	// (0x0001f671) setting_text_pane_g1

0x345c,	// (0x0001f67b) input_focus_pane_cp2

0x3452,	// (0x0001f671) setting_code_pane_g1

0x609d,	// (0x000222bc) setting_code_pane_t1

0x4b00,	// (0x00020d1f) set_text_pane_t1_ParamLimits

0x4b00,	// (0x00020d1f) set_text_pane_t1

0x7f37,	// (0x00024156) set_opt_bg_pane_g1

0x7f3f,	// (0x0002415e) set_opt_bg_pane_g2

0xadf4,	// (0x00027013) set_opt_bg_pane_g3

0x7f4f,	// (0x0002416e) set_opt_bg_pane_g4

0x7f57,	// (0x00024176) set_opt_bg_pane_g5

0x7f5f,	// (0x0002417e) set_opt_bg_pane_g6

0xadfe,	// (0x0002701d) set_opt_bg_pane_g7

0xae08,	// (0x00027027) set_opt_bg_pane_g8

0xae12,	// (0x00027031) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0002bba3) set_opt_bg_pane_g

0xade7,	// (0x00027006) slider_set_pane_g1

0x7138,	// (0x00023357) slider_set_pane_g2

0x0006,

0xf975,	// (0x0002bb94) slider_set_pane_g

0x70c0,	// (0x000232df) volume_set_pane_g1

0x70ca,	// (0x000232e9) volume_set_pane_g2

0x70d4,	// (0x000232f3) volume_set_pane_g3

0x70de,	// (0x000232fd) volume_set_pane_g4

0x70e8,	// (0x00023307) volume_set_pane_g5

0x70f2,	// (0x00023311) volume_set_pane_g6

0x70fc,	// (0x0002331b) volume_set_pane_g7

0x7106,	// (0x00023325) volume_set_pane_g8

0x7110,	// (0x0002332f) volume_set_pane_g9

0x711a,	// (0x00023339) volume_set_pane_g10

0x0009,

0xf94d,	// (0x0002bb6c) volume_set_pane_g

0x60ab,	// (0x000222ca) indicator_pane_ParamLimits

0x60ab,	// (0x000222ca) indicator_pane

0x60b7,	// (0x000222d6) main_idle_pane_g2_ParamLimits

0x60b7,	// (0x000222d6) main_idle_pane_g2

0x60df,	// (0x000222fe) main_pane_idle_g1_ParamLimits

0x60df,	// (0x000222fe) main_pane_idle_g1

0x60ed,	// (0x0002230c) popup_clock_digital_analogue_window_ParamLimits

0x60ed,	// (0x0002230c) popup_clock_digital_analogue_window

0x6104,	// (0x00022323) soft_indicator_pane_ParamLimits

0x6104,	// (0x00022323) soft_indicator_pane

0x6112,	// (0x00022331) wallpaper_pane_ParamLimits

0x6112,	// (0x00022331) wallpaper_pane

0x3452,	// (0x0001f671) wallpaper_pane_g1

0x6126,	// (0x00022345) indicator_pane_g1_ParamLimits

0x6126,	// (0x00022345) indicator_pane_g1

0xb259,	// (0x00027478) navi_navi_icon_text_pane_srt_g1

0x6141,	// (0x00022360) soft_indicator_pane_t1

0x615b,	// (0x0002237a) aid_ps_area_pane

0x616c,	// (0x0002238b) aid_ps_clock_pane

0x617a,	// (0x00022399) aid_ps_indicator_pane

0x6186,	// (0x000223a5) indicator_ps_pane_ParamLimits

0x6186,	// (0x000223a5) indicator_ps_pane

0x6195,	// (0x000223b4) power_save_pane_g1_ParamLimits

0x6195,	// (0x000223b4) power_save_pane_g1

0x61a1,	// (0x000223c0) power_save_pane_g2_ParamLimits

0x61a1,	// (0x000223c0) power_save_pane_g2

0x5af5,	// (0x00021d14) aid_navinavi_width_pane

0x615b,	// (0x0002237a) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0002b7a5) power_save_pane_g_ParamLimits

0xf586,	// (0x0002b7a5) power_save_pane_g

0x61af,	// (0x000223ce) power_save_pane_t1_ParamLimits

0x61af,	// (0x000223ce) power_save_pane_t1

0x616c,	// (0x0002238b) aid_ps_clock_pane_ParamLimits

0x617a,	// (0x00022399) aid_ps_indicator_pane_ParamLimits

0x61c1,	// (0x000223e0) power_save_pane_t4_ParamLimits

0x61c1,	// (0x000223e0) power_save_pane_t4

0x0001,

0xf58b,	// (0x0002b7aa) power_save_pane_t_ParamLimits

0xf58b,	// (0x0002b7aa) power_save_pane_t

0x61eb,	// (0x0002240a) power_save_t3_ParamLimits

0x61eb,	// (0x0002240a) power_save_t3

0x61d6,	// (0x000223f5) power_save_t2_ParamLimits

0x61d6,	// (0x000223f5) power_save_t2

0x6200,	// (0x0002241f) indicator_ps_pane_g1

0x6209,	// (0x00022428) ai_gene_pane_ParamLimits

0x6209,	// (0x00022428) ai_gene_pane

0x6215,	// (0x00022434) ai_links_pane_ParamLimits

0x6215,	// (0x00022434) ai_links_pane

0x6221,	// (0x00022440) indicator_pane_cp1_ParamLimits

0x6221,	// (0x00022440) indicator_pane_cp1

0x622d,	// (0x0002244c) main_pane_idle_g1_cp_ParamLimits

0x622d,	// (0x0002244c) main_pane_idle_g1_cp

0x6239,	// (0x00022458) popup_ai_links_title_window

0x6242,	// (0x00022461) soft_indicator_pane_cp1_ParamLimits

0x6242,	// (0x00022461) soft_indicator_pane_cp1

0xabba,	// (0x00026dd9) ai_links_pane_g1

0xabc3,	// (0x00026de2) grid_ai_links_pane

0xab9f,	// (0x00026dbe) ai_gene_pane_1

0xaba8,	// (0x00026dc7) ai_gene_pane_2

0xabb1,	// (0x00026dd0) list_highlight_pane_cp4

0xab7f,	// (0x00026d9e) cell_ai_link_pane_ParamLimits

0xab7f,	// (0x00026d9e) cell_ai_link_pane

0xab77,	// (0x00026d96) cell_ai_link_pane_g1

0x6484,	// (0x000226a3) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0002bb47) cell_ai_link_pane_g

0x345c,	// (0x0001f67b) grid_highlight_cp2

0x345c,	// (0x0001f67b) bg_popup_sub_pane_cp1

0x625c,	// (0x0002247b) popup_ai_links_title_window_t1

0xaac3,	// (0x00026ce2) ai_gene_pane_1_g1_ParamLimits

0xaac3,	// (0x00026ce2) ai_gene_pane_1_g1

0xaacf,	// (0x00026cee) ai_gene_pane_1_g2_ParamLimits

0xaacf,	// (0x00026cee) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0002bb3d) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0002bb3d) ai_gene_pane_1_g

0xaadc,	// (0x00026cfb) ai_gene_pane_1_t1_ParamLimits

0xaadc,	// (0x00026cfb) ai_gene_pane_1_t1

0xab10,	// (0x00026d2f) grid_ai_soft_ind_pane

0xaaae,	// (0x00026ccd) ai_gene_pane_2_t1_ParamLimits

0xaaae,	// (0x00026ccd) ai_gene_pane_2_t1

0x626b,	// (0x0002248a) main_pane_empty_t1_ParamLimits

0x626b,	// (0x0002248a) main_pane_empty_t1

0x6283,	// (0x000224a2) main_pane_empty_t2_ParamLimits

0x6283,	// (0x000224a2) main_pane_empty_t2

0x6298,	// (0x000224b7) main_pane_empty_t3_ParamLimits

0x6298,	// (0x000224b7) main_pane_empty_t3

0x62aa,	// (0x000224c9) main_pane_empty_t4_ParamLimits

0x62aa,	// (0x000224c9) main_pane_empty_t4

0x62bc,	// (0x000224db) main_pane_empty_t5_ParamLimits

0x62bc,	// (0x000224db) main_pane_empty_t5

0x0004,

0xf590,	// (0x0002b7af) main_pane_empty_t_ParamLimits

0xf590,	// (0x0002b7af) main_pane_empty_t

0x7f88,	// (0x000241a7) bg_popup_window_pane_ParamLimits

0x7f88,	// (0x000241a7) bg_popup_window_pane

0xa80a,	// (0x00026a29) find_popup_pane_cp2_ParamLimits

0xa80a,	// (0x00026a29) find_popup_pane_cp2

0xa816,	// (0x00026a35) heading_pane_ParamLimits

0xa816,	// (0x00026a35) heading_pane

0x345c,	// (0x0001f67b) bg_popup_sub_pane

0xa784,	// (0x000269a3) bg_popup_window_pane_g1_ParamLimits

0xa784,	// (0x000269a3) bg_popup_window_pane_g1

0xa790,	// (0x000269af) bg_popup_window_pane_g2_ParamLimits

0xa790,	// (0x000269af) bg_popup_window_pane_g2

0xa79c,	// (0x000269bb) bg_popup_window_pane_g3_ParamLimits

0xa79c,	// (0x000269bb) bg_popup_window_pane_g3

0xa7a8,	// (0x000269c7) bg_popup_window_pane_g4_ParamLimits

0xa7a8,	// (0x000269c7) bg_popup_window_pane_g4

0xa7b4,	// (0x000269d3) bg_popup_window_pane_g5_ParamLimits

0xa7b4,	// (0x000269d3) bg_popup_window_pane_g5

0xa7c0,	// (0x000269df) bg_popup_window_pane_g6_ParamLimits

0xa7c0,	// (0x000269df) bg_popup_window_pane_g6

0xa7cc,	// (0x000269eb) bg_popup_window_pane_g7_ParamLimits

0xa7cc,	// (0x000269eb) bg_popup_window_pane_g7

0xa7d8,	// (0x000269f7) bg_popup_window_pane_g8_ParamLimits

0xa7d8,	// (0x000269f7) bg_popup_window_pane_g8

0xa7e4,	// (0x00026a03) bg_popup_window_pane_g9_ParamLimits

0xa7e4,	// (0x00026a03) bg_popup_window_pane_g9

0xa7f0,	// (0x00026a0f) bg_popup_window_pane_g10_ParamLimits

0xa7f0,	// (0x00026a0f) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0002bb05) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0002bb05) bg_popup_window_pane_g

0xa719,	// (0x00026938) bg_popup_heading_pane_ParamLimits

0xa719,	// (0x00026938) bg_popup_heading_pane

0x717e,	// (0x0002339d) tabs_4_passive_pane_cp_srt_ParamLimits

0x717e,	// (0x0002339d) tabs_4_passive_pane_cp_srt

0x7190,	// (0x000233af) tabs_4_passive_pane_srt_ParamLimits

0xa72d,	// (0x0002694c) heading_pane_g2

0x7190,	// (0x000233af) tabs_4_passive_pane_srt

0x8eb4,	// (0x000250d3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8eb4,	// (0x000250d3) bg_passive_tab_pane_cp3_srt

0xa735,	// (0x00026954) heading_pane_t1_ParamLimits

0xa735,	// (0x00026954) heading_pane_t1

0xa74c,	// (0x0002696b) heading_pane_t2_ParamLimits

0xa74c,	// (0x0002696b) heading_pane_t2

0x0001,

0xf8e1,	// (0x0002bb00) heading_pane_t_ParamLimits

0xf8e1,	// (0x0002bb00) heading_pane_t

0xa244,	// (0x00026463) bg_popup_heading_pane_g1

0xa2f3,	// (0x00026512) bg_popup_heading_pane_g2

0xa2fd,	// (0x0002651c) bg_popup_heading_pane_g3

0xa307,	// (0x00026526) bg_popup_heading_pane_g4

0xa311,	// (0x00026530) bg_popup_heading_pane_g5

0xa31b,	// (0x0002653a) bg_popup_heading_pane_g6

0xa323,	// (0x00026542) bg_popup_heading_pane_g7

0xa32b,	// (0x0002654a) bg_popup_heading_pane_g8

0xa335,	// (0x00026554) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0002babc) bg_popup_heading_pane_g

0x99fc,	// (0x00025c1b) bg_popup_sub_pane_g1

0x9a04,	// (0x00025c23) bg_popup_sub_pane_g2

0x9a0c,	// (0x00025c2b) bg_popup_sub_pane_g3

0x9a14,	// (0x00025c33) bg_popup_sub_pane_g4

0x9a1c,	// (0x00025c3b) bg_popup_sub_pane_g5

0x9a24,	// (0x00025c43) bg_popup_sub_pane_g6

0x9a2c,	// (0x00025c4b) bg_popup_sub_pane_g7

0x9a34,	// (0x00025c53) bg_popup_sub_pane_g8

0x9a3c,	// (0x00025c5b) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x0002ba96) bg_popup_sub_pane_g

0x62ce,	// (0x000224ed) bg_popup_window_pane_cp5_ParamLimits

0x62ce,	// (0x000224ed) bg_popup_window_pane_cp5

0x62ea,	// (0x00022509) popup_note_window_g1_ParamLimits

0x62ea,	// (0x00022509) popup_note_window_g1

0x62f6,	// (0x00022515) popup_note_window_t1_ParamLimits

0x62f6,	// (0x00022515) popup_note_window_t1

0x630c,	// (0x0002252b) popup_note_window_t2_ParamLimits

0x630c,	// (0x0002252b) popup_note_window_t2

0x6322,	// (0x00022541) popup_note_window_t3_ParamLimits

0x6322,	// (0x00022541) popup_note_window_t3

0x6338,	// (0x00022557) popup_note_window_t4_ParamLimits

0x6338,	// (0x00022557) popup_note_window_t4

0x6360,	// (0x0002257f) popup_note_window_t5_ParamLimits

0x6360,	// (0x0002257f) popup_note_window_t5

0x0004,

0xf59b,	// (0x0002b7ba) popup_note_window_t_ParamLimits

0xf59b,	// (0x0002b7ba) popup_note_window_t

0x6384,	// (0x000225a3) bg_popup_window_pane_cp6_ParamLimits

0x6384,	// (0x000225a3) bg_popup_window_pane_cp6

0xa1c0,	// (0x000263df) popup_note_image_window_g1_ParamLimits

0xa1c0,	// (0x000263df) popup_note_image_window_g1

0xa1cc,	// (0x000263eb) popup_note_image_window_g2_ParamLimits

0xa1cc,	// (0x000263eb) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x0002ba8a) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x0002ba8a) popup_note_image_window_g

0xa1e5,	// (0x00026404) popup_note_image_window_t1_ParamLimits

0xa1e5,	// (0x00026404) popup_note_image_window_t1

0xa1fe,	// (0x0002641d) popup_note_image_window_t2_ParamLimits

0xa1fe,	// (0x0002641d) popup_note_image_window_t2

0xa217,	// (0x00026436) popup_note_image_window_t3_ParamLimits

0xa217,	// (0x00026436) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0002ba8f) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0002ba8f) popup_note_image_window_t

0xa080,	// (0x0002629f) bg_popup_window_pane_cp7_ParamLimits

0xa080,	// (0x0002629f) bg_popup_window_pane_cp7

0xa0b0,	// (0x000262cf) popup_note_wait_window_g1_ParamLimits

0xa0b0,	// (0x000262cf) popup_note_wait_window_g1

0xa0bc,	// (0x000262db) popup_note_wait_window_g2_ParamLimits

0xa0bc,	// (0x000262db) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x0002ba78) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x0002ba78) popup_note_wait_window_g

0xa0d4,	// (0x000262f3) popup_note_wait_window_t1_ParamLimits

0xa0d4,	// (0x000262f3) popup_note_wait_window_t1

0xa0fb,	// (0x0002631a) popup_note_wait_window_t2_ParamLimits

0xa0fb,	// (0x0002631a) popup_note_wait_window_t2

0xa119,	// (0x00026338) popup_note_wait_window_t3_ParamLimits

0xa119,	// (0x00026338) popup_note_wait_window_t3

0xa12c,	// (0x0002634b) popup_note_wait_window_t4_ParamLimits

0xa12c,	// (0x0002634b) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x0002ba7f) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x0002ba7f) popup_note_wait_window_t

0xa151,	// (0x00026370) wait_bar_pane_ParamLimits

0xa151,	// (0x00026370) wait_bar_pane

0x345c,	// (0x0001f67b) wait_anim_pane

0x345c,	// (0x0001f67b) wait_border_pane

0x3452,	// (0x0001f671) wait_anim_pane_g1

0x3452,	// (0x0001f671) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x0002b93e) wait_anim_pane_g

0xa024,	// (0x00026243) wait_border_pane_g1

0xa02f,	// (0x0002624e) wait_border_pane_g2

0xa038,	// (0x00026257) wait_border_pane_g3

0x0002,

0xf852,	// (0x0002ba71) wait_border_pane_g

0x9e8e,	// (0x000260ad) bg_popup_window_pane_cp16_ParamLimits

0x9e8e,	// (0x000260ad) bg_popup_window_pane_cp16

0x9f8e,	// (0x000261ad) indicator_popup_pane_cp4_ParamLimits

0x9f8e,	// (0x000261ad) indicator_popup_pane_cp4

0x9fa2,	// (0x000261c1) popup_query_data_window_t1_ParamLimits

0x9fa2,	// (0x000261c1) popup_query_data_window_t1

0x9fb4,	// (0x000261d3) popup_query_data_window_t2_ParamLimits

0x9fb4,	// (0x000261d3) popup_query_data_window_t2

0x9fcd,	// (0x000261ec) popup_query_data_window_t3_ParamLimits

0x9fcd,	// (0x000261ec) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x0002ba6a) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x0002ba6a) popup_query_data_window_t

0x9fe7,	// (0x00026206) query_popup_data_pane_ParamLimits

0x9fe7,	// (0x00026206) query_popup_data_pane

0x9ffb,	// (0x0002621a) query_popup_data_pane_cp1_ParamLimits

0x9ffb,	// (0x0002621a) query_popup_data_pane_cp1

0x9e8e,	// (0x000260ad) bg_popup_window_pane_cp10_ParamLimits

0x9e8e,	// (0x000260ad) bg_popup_window_pane_cp10

0x9ec0,	// (0x000260df) indicator_popup_pane_ParamLimits

0x9ec0,	// (0x000260df) indicator_popup_pane

0x9ee2,	// (0x00026101) popup_query_code_window_t1_ParamLimits

0x9ee2,	// (0x00026101) popup_query_code_window_t1

0x9efc,	// (0x0002611b) popup_query_code_window_t2_ParamLimits

0x9efc,	// (0x0002611b) popup_query_code_window_t2

0x9f45,	// (0x00026164) popup_query_code_window_t3_ParamLimits

0x9f45,	// (0x00026164) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0002ba63) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0002ba63) popup_query_code_window_t

0x9f74,	// (0x00026193) query_popup_pane_ParamLimits

0x9f74,	// (0x00026193) query_popup_pane

0x6384,	// (0x000225a3) bg_popup_window_pane_cp15_ParamLimits

0x6384,	// (0x000225a3) bg_popup_window_pane_cp15

0x63a4,	// (0x000225c3) indicator_popup_pane_cp1_ParamLimits

0x63a4,	// (0x000225c3) indicator_popup_pane_cp1

0x63b7,	// (0x000225d6) indicator_popup_pane_cp2_ParamLimits

0x63b7,	// (0x000225d6) indicator_popup_pane_cp2

0x63d2,	// (0x000225f1) popup_query_data_code_window_g1_ParamLimits

0x63d2,	// (0x000225f1) popup_query_data_code_window_g1

0x63e5,	// (0x00022604) popup_query_data_code_window_t1_ParamLimits

0x63e5,	// (0x00022604) popup_query_data_code_window_t1

0x63f7,	// (0x00022616) popup_query_data_code_window_t2_ParamLimits

0x63f7,	// (0x00022616) popup_query_data_code_window_t2

0x6409,	// (0x00022628) popup_query_data_code_window_t3_ParamLimits

0x6409,	// (0x00022628) popup_query_data_code_window_t3

0x641f,	// (0x0002263e) popup_query_data_code_window_t4_ParamLimits

0x641f,	// (0x0002263e) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0002b7c5) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0002b7c5) popup_query_data_code_window_t

0x8958,	// (0x00024b77) list_single_midp_graphic_pane_g3

0x6439,	// (0x00022658) query_popup_data_pane_cp2_ParamLimits

0x644c,	// (0x0002266b) query_popup_pane_cp2_ParamLimits

0x644c,	// (0x0002266b) query_popup_pane_cp2

0x345c,	// (0x0001f67b) bg_popup_window_pane_cp11

0x9e86,	// (0x000260a5) heading_pane_cp5

0x653c,	// (0x0002275b) listscroll_popup_info_pane

0x345c,	// (0x0001f67b) input_focus_pane_cp3

0x6467,	// (0x00022686) query_popup_pane_t1

0x6475,	// (0x00022694) list_popup_info_pane_ParamLimits

0x6475,	// (0x00022694) list_popup_info_pane

0x6484,	// (0x000226a3) listscroll_popup_info_pane_g1

0x648c,	// (0x000226ab) scroll_pane_cp7

0x6496,	// (0x000226b5) popup_info_list_pane_t1_ParamLimits

0x6496,	// (0x000226b5) popup_info_list_pane_t1

0x64b0,	// (0x000226cf) popup_info_list_pane_t2_ParamLimits

0x64b0,	// (0x000226cf) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0002b7ce) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0002b7ce) popup_info_list_pane_t

0x345c,	// (0x0001f67b) bg_popup_window_pane_cp12

0xb273,	// (0x00027492) find_popup_pane

0x5fc2,	// (0x000221e1) bg_popup_window_pane_cp3

0x64ca,	// (0x000226e9) heading_pane_cp3

0x64d6,	// (0x000226f5) listscroll_popup_graphic_pane

0x345c,	// (0x0001f67b) bg_popup_window_pane_cp4

0x6532,	// (0x00022751) heading_pane_cp4

0x653c,	// (0x0002275b) listscroll_popup_colour_pane

0x6544,	// (0x00022763) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6544,	// (0x00022763) cell_large_graphic_colour_none_popup_pane

0x6558,	// (0x00022777) grid_large_graphic_colour_popup_pane_ParamLimits

0x6558,	// (0x00022777) grid_large_graphic_colour_popup_pane

0x6584,	// (0x000227a3) listscroll_popup_colour_pane_g1_ParamLimits

0x6584,	// (0x000227a3) listscroll_popup_colour_pane_g1

0x659b,	// (0x000227ba) listscroll_popup_colour_pane_g2_ParamLimits

0x659b,	// (0x000227ba) listscroll_popup_colour_pane_g2

0x65b2,	// (0x000227d1) listscroll_popup_colour_pane_g3_ParamLimits

0x65b2,	// (0x000227d1) listscroll_popup_colour_pane_g3

0x65c2,	// (0x000227e1) listscroll_popup_colour_pane_g4_ParamLimits

0x65c2,	// (0x000227e1) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0002b7d3) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0002b7d3) listscroll_popup_colour_pane_g

0x65d6,	// (0x000227f5) scroll_pane_cp6_ParamLimits

0x65d6,	// (0x000227f5) scroll_pane_cp6

0x65e8,	// (0x00022807) cell_large_graphic_colour_popup_pane_ParamLimits

0x65e8,	// (0x00022807) cell_large_graphic_colour_popup_pane

0x660d,	// (0x0002282c) cell_large_graphic_colour_none_popup_pane_t1

0x345c,	// (0x0001f67b) grid_highlight_pane_cp5

0x661c,	// (0x0002283b) cell_large_graphic_colour_popup_pane_g1

0x6624,	// (0x00022843) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0002b7dc) cell_large_graphic_colour_popup_pane_g

0x662c,	// (0x0002284b) cell_large_graphic_colour_popup_pane_g2_copy1

0x6635,	// (0x00022854) grid_highlight_pane_cp4

0x663d,	// (0x0002285c) bg_popup_window_pane_cp8_ParamLimits

0x663d,	// (0x0002285c) bg_popup_window_pane_cp8

0x6658,	// (0x00022877) popup_snote_single_text_window_g1_ParamLimits

0x6658,	// (0x00022877) popup_snote_single_text_window_g1

0x666a,	// (0x00022889) popup_snote_single_text_window_t1_ParamLimits

0x666a,	// (0x00022889) popup_snote_single_text_window_t1

0x667d,	// (0x0002289c) popup_snote_single_text_window_t2_ParamLimits

0x667d,	// (0x0002289c) popup_snote_single_text_window_t2

0x6690,	// (0x000228af) popup_snote_single_text_window_t3_ParamLimits

0x6690,	// (0x000228af) popup_snote_single_text_window_t3

0x66c9,	// (0x000228e8) popup_snote_single_text_window_t4_ParamLimits

0x66c9,	// (0x000228e8) popup_snote_single_text_window_t4

0x66fd,	// (0x0002291c) popup_snote_single_text_window_t5_ParamLimits

0x66fd,	// (0x0002291c) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0002b7e1) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0002b7e1) popup_snote_single_text_window_t

0x672c,	// (0x0002294b) bg_popup_window_pane_cp9_ParamLimits

0x672c,	// (0x0002294b) bg_popup_window_pane_cp9

0x6658,	// (0x00022877) popup_snote_single_graphic_window_g1_ParamLimits

0x6658,	// (0x00022877) popup_snote_single_graphic_window_g1

0x673a,	// (0x00022959) popup_snote_single_graphic_window_g2_ParamLimits

0x673a,	// (0x00022959) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0002b7ec) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0002b7ec) popup_snote_single_graphic_window_g

0x6746,	// (0x00022965) popup_snote_single_graphic_window_t1_ParamLimits

0x6746,	// (0x00022965) popup_snote_single_graphic_window_t1

0x6759,	// (0x00022978) popup_snote_single_graphic_window_t2_ParamLimits

0x6759,	// (0x00022978) popup_snote_single_graphic_window_t2

0x676c,	// (0x0002298b) popup_snote_single_graphic_window_t3_ParamLimits

0x676c,	// (0x0002298b) popup_snote_single_graphic_window_t3

0x67a5,	// (0x000229c4) popup_snote_single_graphic_window_t4_ParamLimits

0x67a5,	// (0x000229c4) popup_snote_single_graphic_window_t4

0x67d9,	// (0x000229f8) popup_snote_single_graphic_window_t5_ParamLimits

0x67d9,	// (0x000229f8) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0002b7f1) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0002b7f1) popup_snote_single_graphic_window_t

0xb1b1,	// (0x000273d0) grid_graphic_popup_pane_ParamLimits

0xb1b1,	// (0x000273d0) grid_graphic_popup_pane

0xb1df,	// (0x000273fe) listscroll_popup_graphic_pane_g1_ParamLimits

0xb1df,	// (0x000273fe) listscroll_popup_graphic_pane_g1

0xb1f3,	// (0x00027412) listscroll_popup_graphic_pane_g2_ParamLimits

0xb1f3,	// (0x00027412) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0002bbe0) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0002bbe0) listscroll_popup_graphic_pane_g

0xb207,	// (0x00027426) scroll_pane_cp5

0xb159,	// (0x00027378) cell_graphic_popup_pane_ParamLimits

0xb159,	// (0x00027378) cell_graphic_popup_pane

0xb13a,	// (0x00027359) cell_graphic_popup_pane_g1

0xb142,	// (0x00027361) cell_graphic_popup_pane_g2

0x662c,	// (0x0002284b) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x0002bbd9) cell_graphic_popup_pane_g

0xb14b,	// (0x0002736a) cell_graphic_popup_pane_t2

0x6635,	// (0x00022854) grid_highlight_pane_cp3

0x681a,	// (0x00022a39) list_gen_pane_ParamLimits

0x681a,	// (0x00022a39) list_gen_pane

0x7e43,	// (0x00024062) scroll_pane

0xb09c,	// (0x000272bb) bg_list_pane_g1_ParamLimits

0xb09c,	// (0x000272bb) bg_list_pane_g1

0xb0b7,	// (0x000272d6) bg_list_pane_g2_ParamLimits

0xb0b7,	// (0x000272d6) bg_list_pane_g2

0xb0ca,	// (0x000272e9) bg_list_pane_g3_ParamLimits

0xb0ca,	// (0x000272e9) bg_list_pane_g3

0xb0dc,	// (0x000272fb) bg_list_pane_g4_ParamLimits

0xb0dc,	// (0x000272fb) bg_list_pane_g4

0xb0ee,	// (0x0002730d) bg_list_pane_g5_ParamLimits

0xb0ee,	// (0x0002730d) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0002bbce) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0002bbce) bg_list_pane_g

0x5458,	// (0x00021677) list_double2_graphic_large_graphic_pane_ParamLimits

0x5458,	// (0x00021677) list_double2_graphic_large_graphic_pane

0x5458,	// (0x00021677) list_double2_graphic_pane_ParamLimits

0x5458,	// (0x00021677) list_double2_graphic_pane

0x5458,	// (0x00021677) list_double2_large_graphic_pane_ParamLimits

0x5458,	// (0x00021677) list_double2_large_graphic_pane

0xb02d,	// (0x0002724c) list_double2_pane_ParamLimits

0xb02d,	// (0x0002724c) list_double2_pane

0x5458,	// (0x00021677) list_double_graphic_heading_pane_ParamLimits

0x5458,	// (0x00021677) list_double_graphic_heading_pane

0x5458,	// (0x00021677) list_double_graphic_pane_ParamLimits

0x5458,	// (0x00021677) list_double_graphic_pane

0x5458,	// (0x00021677) list_double_heading_pane_ParamLimits

0x5458,	// (0x00021677) list_double_heading_pane

0x5458,	// (0x00021677) list_double_large_graphic_pane_ParamLimits

0x5458,	// (0x00021677) list_double_large_graphic_pane

0x5458,	// (0x00021677) list_double_number_pane_ParamLimits

0x5458,	// (0x00021677) list_double_number_pane

0x5458,	// (0x00021677) list_double_pane_ParamLimits

0x5458,	// (0x00021677) list_double_pane

0x5458,	// (0x00021677) list_double_time_pane_ParamLimits

0x5458,	// (0x00021677) list_double_time_pane

0x5458,	// (0x00021677) list_setting_number_pane_ParamLimits

0x5458,	// (0x00021677) list_setting_number_pane

0x5458,	// (0x00021677) list_setting_pane_ParamLimits

0x5458,	// (0x00021677) list_setting_pane

0xb058,	// (0x00027277) list_single_2graphic_pane_ParamLimits

0xb058,	// (0x00027277) list_single_2graphic_pane

0xb058,	// (0x00027277) list_single_graphic_heading_pane_ParamLimits

0xb058,	// (0x00027277) list_single_graphic_heading_pane

0xb058,	// (0x00027277) list_single_graphic_pane_ParamLimits

0xb058,	// (0x00027277) list_single_graphic_pane

0xb058,	// (0x00027277) list_single_heading_pane_ParamLimits

0xb058,	// (0x00027277) list_single_heading_pane

0x5497,	// (0x000216b6) list_single_large_graphic_pane_ParamLimits

0x5497,	// (0x000216b6) list_single_large_graphic_pane

0xb058,	// (0x00027277) list_single_number_heading_pane_ParamLimits

0xb058,	// (0x00027277) list_single_number_heading_pane

0xb058,	// (0x00027277) list_single_number_pane_ParamLimits

0xb058,	// (0x00027277) list_single_number_pane

0xb058,	// (0x00027277) list_single_pane_ParamLimits

0xb058,	// (0x00027277) list_single_pane

0x345c,	// (0x0001f67b) list_highlight_pane_cp1

0x4b27,	// (0x00020d46) list_single_pane_g1_ParamLimits

0x4b27,	// (0x00020d46) list_single_pane_g1

0x4b33,	// (0x00020d52) list_single_pane_g2_ParamLimits

0x4b33,	// (0x00020d52) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0002b803) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0002b803) list_single_pane_g

0x5442,	// (0x00021661) list_single_pane_t1_ParamLimits

0x5442,	// (0x00021661) list_single_pane_t1

0x4b27,	// (0x00020d46) list_single_number_pane_g1_ParamLimits

0x4b27,	// (0x00020d46) list_single_number_pane_g1

0x4b33,	// (0x00020d52) list_single_number_pane_g2_ParamLimits

0x4b33,	// (0x00020d52) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0002b803) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0002b803) list_single_number_pane_g

0x53ec,	// (0x0002160b) list_single_number_pane_t1_ParamLimits

0x53ec,	// (0x0002160b) list_single_number_pane_t1

0x5402,	// (0x00021621) list_single_number_pane_t2_ParamLimits

0x5402,	// (0x00021621) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0002bb8f) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0002bb8f) list_single_number_pane_t

0x4b1b,	// (0x00020d3a) list_single_graphic_pane_g1_ParamLimits

0x4b1b,	// (0x00020d3a) list_single_graphic_pane_g1

0x4b27,	// (0x00020d46) list_single_graphic_pane_g2_ParamLimits

0x4b27,	// (0x00020d46) list_single_graphic_pane_g2

0x4b33,	// (0x00020d52) list_single_graphic_pane_g3_ParamLimits

0x4b33,	// (0x00020d52) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0002b7fc) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0002b7fc) list_single_graphic_pane_g

0x4b3f,	// (0x00020d5e) list_single_graphic_pane_t1_ParamLimits

0x4b3f,	// (0x00020d5e) list_single_graphic_pane_t1

0x4b27,	// (0x00020d46) list_single_heading_pane_g1_ParamLimits

0x4b27,	// (0x00020d46) list_single_heading_pane_g1

0x4b33,	// (0x00020d52) list_single_heading_pane_g2_ParamLimits

0x4b33,	// (0x00020d52) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002b803) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002b803) list_single_heading_pane_g

0x4b55,	// (0x00020d74) list_single_heading_pane_t1_ParamLimits

0x4b55,	// (0x00020d74) list_single_heading_pane_t1

0x4b6b,	// (0x00020d8a) list_single_heading_pane_t2_ParamLimits

0x4b6b,	// (0x00020d8a) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0002b808) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0002b808) list_single_heading_pane_t

0x4b27,	// (0x00020d46) list_single_number_heading_pane_g1_ParamLimits

0x4b27,	// (0x00020d46) list_single_number_heading_pane_g1

0x4b33,	// (0x00020d52) list_single_number_heading_pane_g2_ParamLimits

0x4b33,	// (0x00020d52) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002b803) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002b803) list_single_number_heading_pane_g

0x4b55,	// (0x00020d74) list_single_number_heading_pane_t1_ParamLimits

0x4b55,	// (0x00020d74) list_single_number_heading_pane_t1

0x4b7d,	// (0x00020d9c) list_single_number_heading_pane_t2_ParamLimits

0x4b7d,	// (0x00020d9c) list_single_number_heading_pane_t2

0x4b8f,	// (0x00020dae) list_single_number_heading_pane_t3_ParamLimits

0x4b8f,	// (0x00020dae) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0002b80d) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0002b80d) list_single_number_heading_pane_t

0x4ba1,	// (0x00020dc0) list_single_graphic_heading_pane_g1_ParamLimits

0x4ba1,	// (0x00020dc0) list_single_graphic_heading_pane_g1

0x4bad,	// (0x00020dcc) list_single_graphic_heading_pane_g4_ParamLimits

0x4bad,	// (0x00020dcc) list_single_graphic_heading_pane_g4

0x4b33,	// (0x00020d52) list_single_graphic_heading_pane_g5_ParamLimits

0x4b33,	// (0x00020d52) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0002b814) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0002b814) list_single_graphic_heading_pane_g

0x4b55,	// (0x00020d74) list_single_graphic_heading_pane_t1_ParamLimits

0x4b55,	// (0x00020d74) list_single_graphic_heading_pane_t1

0x4bbe,	// (0x00020ddd) list_single_graphic_heading_pane_t2_ParamLimits

0x4bbe,	// (0x00020ddd) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0002b81b) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0002b81b) list_single_graphic_heading_pane_t

0x4bd0,	// (0x00020def) list_single_large_graphic_pane_g1_ParamLimits

0x4bd0,	// (0x00020def) list_single_large_graphic_pane_g1

0x4b27,	// (0x00020d46) list_single_large_graphic_pane_g2_ParamLimits

0x4b27,	// (0x00020d46) list_single_large_graphic_pane_g2

0x4b33,	// (0x00020d52) list_single_large_graphic_pane_g3_ParamLimits

0x4b33,	// (0x00020d52) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0002b820) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0002b820) list_single_large_graphic_pane_g

0xa02f,	// (0x0002624e) wait_border_pane_g2_copy1

0x4bdc,	// (0x00020dfb) list_single_large_graphic_pane_g4_cp2

0x4b55,	// (0x00020d74) list_single_large_graphic_pane_t1_ParamLimits

0x4b55,	// (0x00020d74) list_single_large_graphic_pane_t1

0x4be4,	// (0x00020e03) list_double_pane_g1_ParamLimits

0x4be4,	// (0x00020e03) list_double_pane_g1

0x4bf0,	// (0x00020e0f) list_double_pane_g2_ParamLimits

0x4bf0,	// (0x00020e0f) list_double_pane_g2

0x0001,

0xf608,	// (0x0002b827) list_double_pane_g_ParamLimits

0xf608,	// (0x0002b827) list_double_pane_g

0x4bfc,	// (0x00020e1b) list_double_pane_t1_ParamLimits

0x4bfc,	// (0x00020e1b) list_double_pane_t1

0x4c12,	// (0x00020e31) list_double_pane_t2_ParamLimits

0x4c12,	// (0x00020e31) list_double_pane_t2

0x0001,

0xf60d,	// (0x0002b82c) list_double_pane_t_ParamLimits

0xf60d,	// (0x0002b82c) list_double_pane_t

0x4c24,	// (0x00020e43) list_double2_pane_g1_ParamLimits

0x4c24,	// (0x00020e43) list_double2_pane_g1

0x4c35,	// (0x00020e54) list_double2_pane_g2_ParamLimits

0x4c35,	// (0x00020e54) list_double2_pane_g2

0x0001,

0xf612,	// (0x0002b831) list_double2_pane_g_ParamLimits

0xf612,	// (0x0002b831) list_double2_pane_g

0x4c41,	// (0x00020e60) list_double2_pane_t1_ParamLimits

0x4c41,	// (0x00020e60) list_double2_pane_t1

0x4c57,	// (0x00020e76) list_double2_pane_t2_ParamLimits

0x4c57,	// (0x00020e76) list_double2_pane_t2

0x0001,

0xf617,	// (0x0002b836) list_double2_pane_t_ParamLimits

0xf617,	// (0x0002b836) list_double2_pane_t

0x4be4,	// (0x00020e03) list_double_number_pane_g1_ParamLimits

0x4be4,	// (0x00020e03) list_double_number_pane_g1

0x4bf0,	// (0x00020e0f) list_double_number_pane_g2_ParamLimits

0x4bf0,	// (0x00020e0f) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0002b827) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0002b827) list_double_number_pane_g

0x4c69,	// (0x00020e88) list_double_number_pane_t1_ParamLimits

0x4c69,	// (0x00020e88) list_double_number_pane_t1

0x4c7b,	// (0x00020e9a) list_double_number_pane_t2_ParamLimits

0x4c7b,	// (0x00020e9a) list_double_number_pane_t2

0x4c91,	// (0x00020eb0) list_double_number_pane_t3_ParamLimits

0x4c91,	// (0x00020eb0) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0002b83b) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0002b83b) list_double_number_pane_t

0x4ca3,	// (0x00020ec2) list_double_graphic_pane_g1_ParamLimits

0x4ca3,	// (0x00020ec2) list_double_graphic_pane_g1

0x4caf,	// (0x00020ece) list_double_graphic_pane_g2_ParamLimits

0x4caf,	// (0x00020ece) list_double_graphic_pane_g2

0x4cbe,	// (0x00020edd) list_double_graphic_pane_g3_ParamLimits

0x4cbe,	// (0x00020edd) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0002b842) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0002b842) list_double_graphic_pane_g

0x4cd6,	// (0x00020ef5) list_double_graphic_pane_t1_ParamLimits

0x4cd6,	// (0x00020ef5) list_double_graphic_pane_t1

0x4cec,	// (0x00020f0b) list_double_graphic_pane_t2_ParamLimits

0x4cec,	// (0x00020f0b) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002b84b) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002b84b) list_double_graphic_pane_t

0x4cfe,	// (0x00020f1d) list_double2_graphic_pane_g1_ParamLimits

0x4cfe,	// (0x00020f1d) list_double2_graphic_pane_g1

0x4d0a,	// (0x00020f29) list_double2_graphic_pane_g2_ParamLimits

0x4d0a,	// (0x00020f29) list_double2_graphic_pane_g2

0x4d16,	// (0x00020f35) list_double2_graphic_pane_g3_ParamLimits

0x4d16,	// (0x00020f35) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0002b850) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0002b850) list_double2_graphic_pane_g

0x4d22,	// (0x00020f41) list_double2_graphic_pane_t1_ParamLimits

0x4d22,	// (0x00020f41) list_double2_graphic_pane_t1

0x4d38,	// (0x00020f57) list_double2_graphic_pane_t2_ParamLimits

0x4d38,	// (0x00020f57) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0002b857) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0002b857) list_double2_graphic_pane_t

0x4d4a,	// (0x00020f69) list_double_large_graphic_pane_g1_ParamLimits

0x4d4a,	// (0x00020f69) list_double_large_graphic_pane_g1

0x4d75,	// (0x00020f94) list_double_large_graphic_pane_g2_ParamLimits

0x4d75,	// (0x00020f94) list_double_large_graphic_pane_g2

0x4bf0,	// (0x00020e0f) list_double_large_graphic_pane_g3_ParamLimits

0x4bf0,	// (0x00020e0f) list_double_large_graphic_pane_g3

0x4d86,	// (0x00020fa5) list_double_large_graphic_pane_g4_ParamLimits

0x4d86,	// (0x00020fa5) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0002b85c) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0002b85c) list_double_large_graphic_pane_g

0x4dae,	// (0x00020fcd) list_double_large_graphic_pane_t1_ParamLimits

0x4dae,	// (0x00020fcd) list_double_large_graphic_pane_t1

0x4dc7,	// (0x00020fe6) list_double_large_graphic_pane_t2_ParamLimits

0x4dc7,	// (0x00020fe6) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0002b867) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0002b867) list_double_large_graphic_pane_t

0x4dd9,	// (0x00020ff8) list_double2_large_graphic_pane_g1_ParamLimits

0x4dd9,	// (0x00020ff8) list_double2_large_graphic_pane_g1

0x4de5,	// (0x00021004) list_double2_large_graphic_pane_g2_ParamLimits

0x4de5,	// (0x00021004) list_double2_large_graphic_pane_g2

0x4df6,	// (0x00021015) list_double2_large_graphic_pane_g3_ParamLimits

0x4df6,	// (0x00021015) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0002b86c) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0002b86c) list_double2_large_graphic_pane_g

0x4e02,	// (0x00021021) list_double2_large_graphic_pane_t1_ParamLimits

0x4e02,	// (0x00021021) list_double2_large_graphic_pane_t1

0x4e18,	// (0x00021037) list_double2_large_graphic_pane_t2_ParamLimits

0x4e18,	// (0x00021037) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0002b873) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0002b873) list_double2_large_graphic_pane_t

0x4e2a,	// (0x00021049) list_double_heading_pane_g1_ParamLimits

0x4e2a,	// (0x00021049) list_double_heading_pane_g1

0x4e3b,	// (0x0002105a) list_double_heading_pane_g2_ParamLimits

0x4e3b,	// (0x0002105a) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0002b878) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0002b878) list_double_heading_pane_g

0x4e47,	// (0x00021066) list_double_heading_pane_t1_ParamLimits

0x4e47,	// (0x00021066) list_double_heading_pane_t1

0x4e5d,	// (0x0002107c) list_double_heading_pane_t2_ParamLimits

0x4e5d,	// (0x0002107c) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0002b87d) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0002b87d) list_double_heading_pane_t

0x4e6f,	// (0x0002108e) list_double_graphic_heading_pane_g1_ParamLimits

0x4e6f,	// (0x0002108e) list_double_graphic_heading_pane_g1

0x4e2a,	// (0x00021049) list_double_graphic_heading_pane_g2_ParamLimits

0x4e2a,	// (0x00021049) list_double_graphic_heading_pane_g2

0x4e3b,	// (0x0002105a) list_double_graphic_heading_pane_g3_ParamLimits

0x4e3b,	// (0x0002105a) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0002b882) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0002b882) list_double_graphic_heading_pane_g

0x4e7b,	// (0x0002109a) list_double_graphic_heading_pane_t1_ParamLimits

0x4e7b,	// (0x0002109a) list_double_graphic_heading_pane_t1

0x4d38,	// (0x00020f57) list_double_graphic_heading_pane_t2_ParamLimits

0x4d38,	// (0x00020f57) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0002b889) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0002b889) list_double_graphic_heading_pane_t

0x4d75,	// (0x00020f94) list_double_time_pane_g1_ParamLimits

0x4d75,	// (0x00020f94) list_double_time_pane_g1

0x4bf0,	// (0x00020e0f) list_double_time_pane_g2_ParamLimits

0x4bf0,	// (0x00020e0f) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0002b88e) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0002b88e) list_double_time_pane_g

0x4e91,	// (0x000210b0) list_double_time_pane_t1_ParamLimits

0x4e91,	// (0x000210b0) list_double_time_pane_t1

0x4ea7,	// (0x000210c6) list_double_time_pane_t2_ParamLimits

0x4ea7,	// (0x000210c6) list_double_time_pane_t2

0x4eb9,	// (0x000210d8) list_double_time_pane_t3_ParamLimits

0x4eb9,	// (0x000210d8) list_double_time_pane_t3

0x4ecb,	// (0x000210ea) list_double_time_pane_t4_ParamLimits

0x4ecb,	// (0x000210ea) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0002b893) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0002b893) list_double_time_pane_t

0x4edd,	// (0x000210fc) list_setting_pane_g1_ParamLimits

0x4edd,	// (0x000210fc) list_setting_pane_g1

0x4ee9,	// (0x00021108) list_setting_pane_g2_ParamLimits

0x4ee9,	// (0x00021108) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0002b89c) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0002b89c) list_setting_pane_g

0x4ef5,	// (0x00021114) list_setting_pane_t1_ParamLimits

0x4ef5,	// (0x00021114) list_setting_pane_t1

0x4f0f,	// (0x0002112e) list_setting_pane_t2_ParamLimits

0x4f0f,	// (0x0002112e) list_setting_pane_t2

0x0002,

0xf682,	// (0x0002b8a1) list_setting_pane_t_ParamLimits

0xf682,	// (0x0002b8a1) list_setting_pane_t

0x4f4e,	// (0x0002116d) set_value_pane_cp_ParamLimits

0x4f4e,	// (0x0002116d) set_value_pane_cp

0x4f5c,	// (0x0002117b) list_setting_number_pane_g1_ParamLimits

0x4f5c,	// (0x0002117b) list_setting_number_pane_g1

0x4f68,	// (0x00021187) list_setting_number_pane_g2_ParamLimits

0x4f68,	// (0x00021187) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x0002b8a8) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x0002b8a8) list_setting_number_pane_g

0x4f74,	// (0x00021193) list_setting_number_pane_t1_ParamLimits

0x4f74,	// (0x00021193) list_setting_number_pane_t1

0x4f8d,	// (0x000211ac) list_setting_number_pane_t2_ParamLimits

0x4f8d,	// (0x000211ac) list_setting_number_pane_t2

0x4fa7,	// (0x000211c6) list_setting_number_pane_t3_ParamLimits

0x4fa7,	// (0x000211c6) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x0002b8ad) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x0002b8ad) list_setting_number_pane_t

0x4f4e,	// (0x0002116d) set_value_pane_ParamLimits

0x4f4e,	// (0x0002116d) set_value_pane

0x7e77,	// (0x00024096) bg_set_opt_pane_ParamLimits

0x7e77,	// (0x00024096) bg_set_opt_pane

0x4fea,	// (0x00021209) set_value_pane_t1

0x7e98,	// (0x000240b7) slider_set_pane_cp3

0x7ea1,	// (0x000240c0) volume_small_pane_cp

0x7eaa,	// (0x000240c9) list_form_gen_pane

0x7eb3,	// (0x000240d2) scroll_pane_cp8

0x4ff8,	// (0x00021217) form_field_data_pane_ParamLimits

0x4ff8,	// (0x00021217) form_field_data_pane

0x501e,	// (0x0002123d) form_field_data_wide_pane_ParamLimits

0x501e,	// (0x0002123d) form_field_data_wide_pane

0x5045,	// (0x00021264) form_field_popup_pane_ParamLimits

0x5045,	// (0x00021264) form_field_popup_pane

0x5067,	// (0x00021286) form_field_popup_wide_pane_ParamLimits

0x5067,	// (0x00021286) form_field_popup_wide_pane

0x5088,	// (0x000212a7) form_field_slider_pane_ParamLimits

0x5088,	// (0x000212a7) form_field_slider_pane

0x509b,	// (0x000212ba) form_field_slider_wide_pane_ParamLimits

0x509b,	// (0x000212ba) form_field_slider_wide_pane

0x7ec4,	// (0x000240e3) data_form_pane

0x50b8,	// (0x000212d7) form_field_data_pane_t1

0x7ed0,	// (0x000240ef) input_focus_pane

0x7ede,	// (0x000240fd) data_form_wide_pane

0x50de,	// (0x000212fd) form_field_data_wide_pane_t1

0x664a,	// (0x00022869) input_focus_pane_cp6

0x5100,	// (0x0002131f) form_field_popup_pane_t1

0x7ed0,	// (0x000240ef) input_focus_pane_cp7

0x7f0a,	// (0x00024129) list_form_pane

0x5122,	// (0x00021341) form_field_popup_wide_pane_t1

0x7ed0,	// (0x000240ef) input_focus_pane_cp8

0x7f16,	// (0x00024135) list_form_wide_pane

0x513f,	// (0x0002135e) form_field_slider_pane_t1_ParamLimits

0x513f,	// (0x0002135e) form_field_slider_pane_t1

0x5157,	// (0x00021376) form_field_slider_pane_t2_ParamLimits

0x5157,	// (0x00021376) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x0002b8bd) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x0002b8bd) form_field_slider_pane_t

0x62ce,	// (0x000224ed) input_focus_pane_cp9_ParamLimits

0x62ce,	// (0x000224ed) input_focus_pane_cp9

0x516c,	// (0x0002138b) slider_cont_pane_ParamLimits

0x516c,	// (0x0002138b) slider_cont_pane

0x7f25,	// (0x00024144) form_field_slider_wide_pane_t1_ParamLimits

0x7f25,	// (0x00024144) form_field_slider_wide_pane_t1

0x5180,	// (0x0002139f) form_field_slider_wide_pane_t2_ParamLimits

0x5180,	// (0x0002139f) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x0002b8c2) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x0002b8c2) form_field_slider_wide_pane_t

0x62ce,	// (0x000224ed) input_focus_pane_cp10_ParamLimits

0x62ce,	// (0x000224ed) input_focus_pane_cp10

0x5192,	// (0x000213b1) slider_cont_pane_cp1_ParamLimits

0x5192,	// (0x000213b1) slider_cont_pane_cp1

0x51a6,	// (0x000213c5) slider_form_pane_cp

0x7f37,	// (0x00024156) input_focus_pane_g1

0x7f3f,	// (0x0002415e) input_focus_pane_g2

0x7f47,	// (0x00024166) input_focus_pane_g3

0x7f4f,	// (0x0002416e) input_focus_pane_g4

0x7f57,	// (0x00024176) input_focus_pane_g5

0x7f5f,	// (0x0002417e) input_focus_pane_g6

0x7f67,	// (0x00024186) input_focus_pane_g7

0x7f6f,	// (0x0002418e) input_focus_pane_g8

0x7f77,	// (0x00024196) input_focus_pane_g9

0x3452,	// (0x0001f671) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x0002b8c7) input_focus_pane_g

0xa038,	// (0x00026257) wait_border_pane_g3_copy1

0x51ae,	// (0x000213cd) data_form_pane_t1

0x3452,	// (0x0001f671) wait_anim_pane_g1_copy1

0x5414,	// (0x00021633) data_form_wide_pane_t1

0x51cb,	// (0x000213ea) list_form_graphic_pane_cp_ParamLimits

0x51cb,	// (0x000213ea) list_form_graphic_pane_cp

0xafbd,	// (0x000271dc) slider_form_pane_g1

0xafc6,	// (0x000271e5) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0002bbbf) slider_form_pane_g

0x51e0,	// (0x000213ff) list_form_graphic_pane_ParamLimits

0x51e0,	// (0x000213ff) list_form_graphic_pane

0x51f2,	// (0x00021411) list_form_graphic_pane_g1

0x51fa,	// (0x00021419) list_form_graphic_pane_t1_ParamLimits

0x51fa,	// (0x00021419) list_form_graphic_pane_t1

0x5fc2,	// (0x000221e1) list_highlight_pane_cp5_ParamLimits

0x5fc2,	// (0x000221e1) list_highlight_pane_cp5

0x520f,	// (0x0002142e) find_pane_g1

0x7f7f,	// (0x0002419e) input_find_pane

0x5218,	// (0x00021437) input_find_pane_g1_ParamLimits

0x5218,	// (0x00021437) input_find_pane_g1

0x5224,	// (0x00021443) input_find_pane_t1_ParamLimits

0x5224,	// (0x00021443) input_find_pane_t1

0x5239,	// (0x00021458) input_find_pane_t2_ParamLimits

0x5239,	// (0x00021458) input_find_pane_t2

0x0001,

0xf6bd,	// (0x0002b8dc) input_find_pane_t_ParamLimits

0xf6bd,	// (0x0002b8dc) input_find_pane_t

0x7f88,	// (0x000241a7) input_focus_pane_cp5_ParamLimits

0x7f88,	// (0x000241a7) input_focus_pane_cp5

0x7fa2,	// (0x000241c1) bg_popup_window_pane_cp2_ParamLimits

0x7fa2,	// (0x000241c1) bg_popup_window_pane_cp2

0x7faf,	// (0x000241ce) listscroll_menu_pane_ParamLimits

0x7faf,	// (0x000241ce) listscroll_menu_pane

0x7fbb,	// (0x000241da) popup_submenu_window_ParamLimits

0x7fbb,	// (0x000241da) popup_submenu_window

0x7feb,	// (0x0002420a) find_popup_pane_g1

0x7ff3,	// (0x00024212) input_popup_find_pane_cp

0x7f88,	// (0x000241a7) input_focus_pane_cp4_ParamLimits

0x7f88,	// (0x000241a7) input_focus_pane_cp4

0x800b,	// (0x0002422a) input_popup_find_pane_t1_ParamLimits

0x800b,	// (0x0002422a) input_popup_find_pane_t1

0x345c,	// (0x0001f67b) bg_popup_sub_pane_cp

0x8039,	// (0x00024258) listscroll_popup_sub_pane

0x8041,	// (0x00024260) list_submenu_pane_ParamLimits

0x8041,	// (0x00024260) list_submenu_pane

0x8052,	// (0x00024271) scroll_pane_cp4

0x805a,	// (0x00024279) list_single_popup_submenu_pane_ParamLimits

0x805a,	// (0x00024279) list_single_popup_submenu_pane

0x806f,	// (0x0002428e) list_single_popup_submenu_pane_g1

0x8077,	// (0x00024296) list_single_popup_submenu_pane_t1_ParamLimits

0x8077,	// (0x00024296) list_single_popup_submenu_pane_t1

0x5fc2,	// (0x000221e1) bg_active_tab_pane_cp1_ParamLimits

0x5fc2,	// (0x000221e1) bg_active_tab_pane_cp1

0x808c,	// (0x000242ab) tabs_2_active_pane_g1

0x8094,	// (0x000242b3) tabs_2_active_pane_t1

0x5fc2,	// (0x000221e1) bg_passive_tab_pane_cp1_ParamLimits

0x5fc2,	// (0x000221e1) bg_passive_tab_pane_cp1

0x808c,	// (0x000242ab) tabs_2_passive_pane_g1

0x8094,	// (0x000242b3) tabs_2_passive_pane_t1

0x80a6,	// (0x000242c5) bg_active_tab_pane_cp4

0x80b4,	// (0x000242d3) tabs_2_long_active_pane_t1

0x80c7,	// (0x000242e6) bg_passive_tab_pane_cp4

0x0a03,	// (0x0001cc22) list_single_midp_graphic_pane_g4_ParamLimits

0x80a6,	// (0x000242c5) bg_active_tab_pane_cp5

0x80d3,	// (0x000242f2) tabs_3_long_active_pane_t1

0x80c7,	// (0x000242e6) bg_passive_tab_pane_cp5

0x0a03,	// (0x0001cc22) list_single_midp_graphic_pane_g4

0x5fc2,	// (0x000221e1) bg_popup_window_pane_cp13_ParamLimits

0x5fc2,	// (0x000221e1) bg_popup_window_pane_cp13

0x80ee,	// (0x0002430d) listscroll_popup_fast_pane_ParamLimits

0x80ee,	// (0x0002430d) listscroll_popup_fast_pane

0x80fd,	// (0x0002431c) grid_popup_fast_pane_ParamLimits

0x80fd,	// (0x0002431c) grid_popup_fast_pane

0x810f,	// (0x0002432e) scroll_pane_cp9_ParamLimits

0x810f,	// (0x0002432e) scroll_pane_cp9

0xc913,	// (0x00028b32) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc913,	// (0x00028b32) list_single_graphic_hl_pane_t1_cp2

0x8133,	// (0x00024352) input_focus_pane_cp20_ParamLimits

0x8133,	// (0x00024352) input_focus_pane_cp20

0x8141,	// (0x00024360) query_popup_data_pane_t1_ParamLimits

0x8141,	// (0x00024360) query_popup_data_pane_t1

0x8154,	// (0x00024373) query_popup_data_pane_t2_ParamLimits

0x8154,	// (0x00024373) query_popup_data_pane_t2

0x819a,	// (0x000243b9) query_popup_data_pane_t3_ParamLimits

0x819a,	// (0x000243b9) query_popup_data_pane_t3

0x81db,	// (0x000243fa) query_popup_data_pane_t4_ParamLimits

0x81db,	// (0x000243fa) query_popup_data_pane_t4

0x8217,	// (0x00024436) query_popup_data_pane_t5_ParamLimits

0x8217,	// (0x00024436) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x0002b8e1) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x0002b8e1) query_popup_data_pane_t

0x7f37,	// (0x00024156) bg_set_opt_pane_g1

0x7f3f,	// (0x0002415e) bg_set_opt_pane_g2

0x7f47,	// (0x00024166) bg_set_opt_pane_g3

0x7f4f,	// (0x0002416e) bg_set_opt_pane_g4

0x7f57,	// (0x00024176) bg_set_opt_pane_g5

0x7f5f,	// (0x0002417e) bg_set_opt_pane_g6

0x7f67,	// (0x00024186) bg_set_opt_pane_g7

0x7f6f,	// (0x0002418e) bg_set_opt_pane_g8

0x7f77,	// (0x00024196) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x0002b8ec) bg_set_opt_pane_g

0x6ae5,	// (0x00022d04) control_top_pane_stacon_ParamLimits

0x6ae5,	// (0x00022d04) control_top_pane_stacon

0x6b38,	// (0x00022d57) signal_pane_stacon_ParamLimits

0x6b38,	// (0x00022d57) signal_pane_stacon

0x87c3,	// (0x000249e2) stacon_top_pane_g1_ParamLimits

0x87c3,	// (0x000249e2) stacon_top_pane_g1

0x6b5d,	// (0x00022d7c) title_pane_stacon_ParamLimits

0x6b5d,	// (0x00022d7c) title_pane_stacon

0x6b87,	// (0x00022da6) uni_indicator_pane_stacon_ParamLimits

0x6b87,	// (0x00022da6) uni_indicator_pane_stacon

0x6b9f,	// (0x00022dbe) battery_pane_stacon_ParamLimits

0x6b9f,	// (0x00022dbe) battery_pane_stacon

0x6be3,	// (0x00022e02) control_bottom_pane_stacon_ParamLimits

0x6be3,	// (0x00022e02) control_bottom_pane_stacon

0x6c06,	// (0x00022e25) navi_pane_stacon_ParamLimits

0x6c06,	// (0x00022e25) navi_pane_stacon

0x87e5,	// (0x00024a04) stacon_bottom_pane_g1_ParamLimits

0x87e5,	// (0x00024a04) stacon_bottom_pane_g1

0x6842,	// (0x00022a61) aid_levels_signal_lsc_ParamLimits

0x6842,	// (0x00022a61) aid_levels_signal_lsc

0x6859,	// (0x00022a78) signal_pane_stacon_g1_ParamLimits

0x6859,	// (0x00022a78) signal_pane_stacon_g1

0x686d,	// (0x00022a8c) signal_pane_stacon_g2_ParamLimits

0x686d,	// (0x00022a8c) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x0002b8ff) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0002b8ff) signal_pane_stacon_g

0x68a2,	// (0x00022ac1) title_pane_stacon_t1_ParamLimits

0x68a2,	// (0x00022ac1) title_pane_stacon_t1

0x825b,	// (0x0002447a) uni_indicator_pane_stacon_g1

0x8265,	// (0x00024484) uni_indicator_pane_stacon_g2

0x826f,	// (0x0002448e) uni_indicator_pane_stacon_g3

0x8279,	// (0x00024498) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x0002b90b) uni_indicator_pane_stacon_g

0x68c7,	// (0x00022ae6) control_top_pane_stacon_g1

0x68cf,	// (0x00022aee) control_top_pane_stacon_t1_ParamLimits

0x68cf,	// (0x00022aee) control_top_pane_stacon_t1

0x6906,	// (0x00022b25) aid_levels_battery_lsc_ParamLimits

0x6906,	// (0x00022b25) aid_levels_battery_lsc

0x691e,	// (0x00022b3d) battery_pane_stacon_g1_ParamLimits

0x691e,	// (0x00022b3d) battery_pane_stacon_g1

0x6931,	// (0x00022b50) battery_pane_stacon_g2_ParamLimits

0x6931,	// (0x00022b50) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x0002b914) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x0002b914) battery_pane_stacon_g

0x696f,	// (0x00022b8e) navi_icon_pane_stacon

0x6983,	// (0x00022ba2) navi_navi_pane_stacon

0x696f,	// (0x00022b8e) navi_text_pane_stacon

0x68c7,	// (0x00022ae6) control_bottom_pane_stacon_g1

0x6999,	// (0x00022bb8) control_bottom_pane_stacon_t1_ParamLimits

0x6999,	// (0x00022bb8) control_bottom_pane_stacon_t1

0x829d,	// (0x000244bc) grid_app_pane_ParamLimits

0x829d,	// (0x000244bc) grid_app_pane

0x82c1,	// (0x000244e0) scroll_pane_cp15_ParamLimits

0x82c1,	// (0x000244e0) scroll_pane_cp15

0x82d6,	// (0x000244f5) cell_app_pane_ParamLimits

0x82d6,	// (0x000244f5) cell_app_pane

0x8302,	// (0x00024521) cell_app_pane_g1_ParamLimits

0x8302,	// (0x00024521) cell_app_pane_g1

0x8326,	// (0x00024545) cell_app_pane_g2_ParamLimits

0x8326,	// (0x00024545) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x0002b919) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x0002b919) cell_app_pane_g

0x8332,	// (0x00024551) cell_app_pane_t1_ParamLimits

0x8332,	// (0x00024551) cell_app_pane_t1

0x8344,	// (0x00024563) grid_highlight_pane_ParamLimits

0x8344,	// (0x00024563) grid_highlight_pane

0x7f37,	// (0x00024156) cell_highlight_pane_g1

0x7f3f,	// (0x0002415e) cell_highlight_pane_g2

0x7f47,	// (0x00024166) cell_highlight_pane_g3

0x7f4f,	// (0x0002416e) cell_highlight_pane_g4

0x7f57,	// (0x00024176) cell_highlight_pane_g5

0x7f5f,	// (0x0002417e) cell_highlight_pane_g6

0x7f67,	// (0x00024186) cell_highlight_pane_g7

0x7f6f,	// (0x0002418e) cell_highlight_pane_g8

0x7f77,	// (0x00024196) cell_highlight_pane_g9

0x3452,	// (0x0001f671) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x0002b8c7) cell_highlight_pane_g

0x8355,	// (0x00024574) bg_scroll_pane

0x69e3,	// (0x00022c02) scroll_handle_pane

0x839c,	// (0x000245bb) scroll_bg_pane_g1

0x83b1,	// (0x000245d0) scroll_bg_pane_g2

0x83c9,	// (0x000245e8) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x0002b91e) scroll_bg_pane_g

0x83de,	// (0x000245fd) scroll_handle_focus_pane_ParamLimits

0x83de,	// (0x000245fd) scroll_handle_focus_pane

0x839c,	// (0x000245bb) scroll_handle_pane_g1

0x83eb,	// (0x0002460a) scroll_handle_pane_g2

0x83c9,	// (0x000245e8) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x0002b925) scroll_handle_pane_g

0x7f88,	// (0x000241a7) bg_popup_sub_pane_cp21_ParamLimits

0x7f88,	// (0x000241a7) bg_popup_sub_pane_cp21

0x83ff,	// (0x0002461e) popup_fep_japan_predictive_window_t1_ParamLimits

0x83ff,	// (0x0002461e) popup_fep_japan_predictive_window_t1

0x8416,	// (0x00024635) popup_fep_japan_predictive_window_t2_ParamLimits

0x8416,	// (0x00024635) popup_fep_japan_predictive_window_t2

0x8449,	// (0x00024668) popup_fep_japan_predictive_window_t3_ParamLimits

0x8449,	// (0x00024668) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x0002b92c) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x0002b92c) popup_fep_japan_predictive_window_t

0x345c,	// (0x0001f67b) bg_popup_sub_pane_cp23

0x8480,	// (0x0002469f) listscroll_japin_cand_pane

0x8488,	// (0x000246a7) popup_fep_japan_candidate_window_t1

0x8496,	// (0x000246b5) candidate_pane_ParamLimits

0x8496,	// (0x000246b5) candidate_pane

0x84a8,	// (0x000246c7) scroll_pane_cp30

0x84b2,	// (0x000246d1) list_single_popup_jap_candidate_pane_ParamLimits

0x84b2,	// (0x000246d1) list_single_popup_jap_candidate_pane

0x345c,	// (0x0001f67b) list_highlight_pane_cp30

0x84c6,	// (0x000246e5) list_single_popup_jap_candidate_pane_t1

0x84d5,	// (0x000246f4) level_1_signal

0x84e2,	// (0x00024701) level_2_signal

0x84ef,	// (0x0002470e) level_3_signal

0x84fc,	// (0x0002471b) level_4_signal

0x8509,	// (0x00024728) level_5_signal

0x8516,	// (0x00024735) level_6_signal

0x8523,	// (0x00024742) level_7_signal

0x84d5,	// (0x000246f4) level_1_battery

0x84e2,	// (0x00024701) level_2_battery

0x84ef,	// (0x0002470e) level_3_battery

0x84fc,	// (0x0002471b) level_4_battery

0x8509,	// (0x00024728) level_5_battery

0x8516,	// (0x00024735) level_6_battery

0x8523,	// (0x00024742) level_7_battery

0x8548,	// (0x00024767) list_menu_pane_ParamLimits

0x8548,	// (0x00024767) list_menu_pane

0x8559,	// (0x00024778) scroll_pane_cp25_ParamLimits

0x8559,	// (0x00024778) scroll_pane_cp25

0x8572,	// (0x00024791) list_double2_graphic_pane_cp2_ParamLimits

0x8572,	// (0x00024791) list_double2_graphic_pane_cp2

0x8572,	// (0x00024791) list_double2_large_graphic_pane_cp2_ParamLimits

0x8572,	// (0x00024791) list_double2_large_graphic_pane_cp2

0x8572,	// (0x00024791) list_double2_pane_cp2_ParamLimits

0x8572,	// (0x00024791) list_double2_pane_cp2

0x8572,	// (0x00024791) list_double_graphic_pane_cp2_ParamLimits

0x8572,	// (0x00024791) list_double_graphic_pane_cp2

0x8572,	// (0x00024791) list_double_large_graphic_pane_cp2_ParamLimits

0x8572,	// (0x00024791) list_double_large_graphic_pane_cp2

0x8572,	// (0x00024791) list_double_number_pane_cp2_ParamLimits

0x8572,	// (0x00024791) list_double_number_pane_cp2

0x8572,	// (0x00024791) list_double_pane_cp2_ParamLimits

0x8572,	// (0x00024791) list_double_pane_cp2

0x8598,	// (0x000247b7) list_single_2graphic_pane_cp2_ParamLimits

0x8598,	// (0x000247b7) list_single_2graphic_pane_cp2

0x8598,	// (0x000247b7) list_single_graphic_heading_pane_cp2_ParamLimits

0x8598,	// (0x000247b7) list_single_graphic_heading_pane_cp2

0x8598,	// (0x000247b7) list_single_graphic_pane_cp2_ParamLimits

0x8598,	// (0x000247b7) list_single_graphic_pane_cp2

0x8598,	// (0x000247b7) list_single_heading_pane_cp2_ParamLimits

0x8598,	// (0x000247b7) list_single_heading_pane_cp2

0x85b5,	// (0x000247d4) list_single_large_graphic_pane_cp2_ParamLimits

0x85b5,	// (0x000247d4) list_single_large_graphic_pane_cp2

0x8598,	// (0x000247b7) list_single_number_heading_pane_cp2_ParamLimits

0x8598,	// (0x000247b7) list_single_number_heading_pane_cp2

0x8598,	// (0x000247b7) list_single_number_pane_cp2_ParamLimits

0x8598,	// (0x000247b7) list_single_number_pane_cp2

0x8598,	// (0x000247b7) list_single_pane_cp2_ParamLimits

0x8598,	// (0x000247b7) list_single_pane_cp2

0x860a,	// (0x00024829) bg_popup_sub_pane_cp22

0x6a95,	// (0x00022cb4) popup_side_volume_key_window_g1

0x6abf,	// (0x00022cde) popup_side_volume_key_window_t1

0x6add,	// (0x00022cfc) volume_small_pane_cp1

0x62ce,	// (0x000224ed) bg_popup_sub_pane_cp24_ParamLimits

0x62ce,	// (0x000224ed) bg_popup_sub_pane_cp24

0x8620,	// (0x0002483f) fep_china_uni_candidate_pane_ParamLimits

0x8620,	// (0x0002483f) fep_china_uni_candidate_pane

0x8634,	// (0x00024853) fep_china_uni_entry_pane

0x8644,	// (0x00024863) popup_fep_china_uni_window_g1

0x8660,	// (0x0002487f) fep_china_uni_entry_pane_g1

0x866a,	// (0x00024889) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0002b959) fep_china_uni_entry_pane_g

0x8674,	// (0x00024893) fep_entry_item_pane

0x867e,	// (0x0002489d) fep_candidate_item_pane

0x8686,	// (0x000248a5) fep_china_uni_candidate_pane_g1

0x8690,	// (0x000248af) fep_china_uni_candidate_pane_g2

0x8698,	// (0x000248b7) fep_china_uni_candidate_pane_g3

0x86a0,	// (0x000248bf) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0002b95e) fep_china_uni_candidate_pane_g

0x3452,	// (0x0001f671) fep_entry_item_pane_g1

0x86aa,	// (0x000248c9) fep_entry_item_pane_t1_ParamLimits

0x86aa,	// (0x000248c9) fep_entry_item_pane_t1

0x86c0,	// (0x000248df) fep_candidate_item_pane_t1_ParamLimits

0x86c0,	// (0x000248df) fep_candidate_item_pane_t1

0x86d5,	// (0x000248f4) fep_candidate_item_pane_t2_ParamLimits

0x86d5,	// (0x000248f4) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0002b967) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0002b967) fep_candidate_item_pane_t

0x5fc2,	// (0x000221e1) list_highlight_pane_cp31_ParamLimits

0x5fc2,	// (0x000221e1) list_highlight_pane_cp31

0x86e7,	// (0x00024906) level_1_signal_lsc

0x86f0,	// (0x0002490f) level_2_signal_lsc

0x86f9,	// (0x00024918) level_3_signal_lsc

0x8702,	// (0x00024921) level_4_signal_lsc

0x870b,	// (0x0002492a) level_5_signal_lsc

0x8714,	// (0x00024933) level_6_signal_lsc

0x871d,	// (0x0002493c) level_7_signal_lsc

0x871d,	// (0x0002493c) level_1_battery_lsc

0x8726,	// (0x00024945) level_2_battery_lsc

0x872f,	// (0x0002494e) level_3_battery_lsc

0x8738,	// (0x00024957) level_4_battery_lsc

0x8741,	// (0x00024960) level_5_battery_lsc

0x874a,	// (0x00024969) level_6_battery_lsc

0x86e7,	// (0x00024906) level_7_battery_lsc

0x8753,	// (0x00024972) scroll_handle_focus_pane_g1

0x875c,	// (0x0002497b) scroll_handle_focus_pane_g2

0x8765,	// (0x00024984) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0002b96c) scroll_handle_focus_pane_g

0x524e,	// (0x0002146d) list_single_2graphic_pane_g1_ParamLimits

0x524e,	// (0x0002146d) list_single_2graphic_pane_g1

0x4bad,	// (0x00020dcc) list_single_2graphic_pane_g2_ParamLimits

0x4bad,	// (0x00020dcc) list_single_2graphic_pane_g2

0x4b33,	// (0x00020d52) list_single_2graphic_pane_g3_ParamLimits

0x4b33,	// (0x00020d52) list_single_2graphic_pane_g3

0x525a,	// (0x00021479) list_single_2graphic_pane_g4_ParamLimits

0x525a,	// (0x00021479) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0002b973) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0002b973) list_single_2graphic_pane_g

0x5266,	// (0x00021485) list_single_2graphic_pane_t1_ParamLimits

0x5266,	// (0x00021485) list_single_2graphic_pane_t1

0x5294,	// (0x000214b3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5294,	// (0x000214b3) list_double2_graphic_large_graphic_pane_g1

0x4de5,	// (0x00021004) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4de5,	// (0x00021004) list_double2_graphic_large_graphic_pane_g2

0x4df6,	// (0x00021015) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4df6,	// (0x00021015) list_double2_graphic_large_graphic_pane_g3

0x52a6,	// (0x000214c5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x52a6,	// (0x000214c5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0002b97c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0002b97c) list_double2_graphic_large_graphic_pane_g

0x52b2,	// (0x000214d1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x52b2,	// (0x000214d1) list_double2_graphic_large_graphic_pane_t1

0x52c8,	// (0x000214e7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x52c8,	// (0x000214e7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0002b985) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0002b985) list_double2_graphic_large_graphic_pane_t

0x88a7,	// (0x00024ac6) popup_fast_swap_window_ParamLimits

0x88a7,	// (0x00024ac6) popup_fast_swap_window

0x88c5,	// (0x00024ae4) popup_side_volume_key_window

0x88e3,	// (0x00024b02) stacon_top_pane

0x88ed,	// (0x00024b0c) status_pane_ParamLimits

0x88ed,	// (0x00024b0c) status_pane

0x88e3,	// (0x00024b02) status_small_pane

0x345c,	// (0x0001f67b) control_pane

0x345c,	// (0x0001f67b) stacon_bottom_pane

0x7eb3,	// (0x000240d2) scroll_pane_cp121

0x7eaa,	// (0x000240c9) set_content_pane

0x876e,	// (0x0002498d) bg_active_tab_pane_g1_cp1

0x8777,	// (0x00024996) bg_active_tab_pane_g2_cp1

0x8780,	// (0x0002499f) bg_active_tab_pane_g3_cp1

0x876e,	// (0x0002498d) bg_passive_tab_pane_g1_cp1

0x8777,	// (0x00024996) bg_passive_tab_pane_g2_cp1

0x8780,	// (0x0002499f) bg_passive_tab_pane_g3_cp1

0x8789,	// (0x000249a8) bg_active_tab_pane_g1_cp2

0x8777,	// (0x00024996) bg_active_tab_pane_g2_cp2

0x8792,	// (0x000249b1) bg_active_tab_pane_g3_cp2

0x8789,	// (0x000249a8) bg_passive_tab_pane_g1_cp2

0x8777,	// (0x00024996) bg_passive_tab_pane_g2_cp2

0x8792,	// (0x000249b1) bg_passive_tab_pane_g3_cp2

0x879b,	// (0x000249ba) bg_active_tab_pane_g1_cp3

0x8777,	// (0x00024996) bg_active_tab_pane_g2_cp3

0x87a4,	// (0x000249c3) bg_active_tab_pane_g3_cp3

0x879b,	// (0x000249ba) bg_passive_tab_pane_g1_cp3

0x8777,	// (0x00024996) bg_passive_tab_pane_g2_cp3

0x87a4,	// (0x000249c3) bg_passive_tab_pane_g3_cp3

0x87ad,	// (0x000249cc) bg_active_tab_pane_g1_cp4

0x8777,	// (0x00024996) bg_active_tab_pane_g2_cp4

0x87b8,	// (0x000249d7) bg_active_tab_pane_g3_cp4

0x87ad,	// (0x000249cc) bg_passive_tab_pane_g1_cp4

0x8777,	// (0x00024996) bg_passive_tab_pane_g2_cp4

0x87b8,	// (0x000249d7) bg_passive_tab_pane_g3_cp4

0x8801,	// (0x00024a20) bg_active_tab_pane_g1_cp5

0x8777,	// (0x00024996) bg_active_tab_pane_g2_cp5

0x880a,	// (0x00024a29) bg_active_tab_pane_g3_cp5

0x8801,	// (0x00024a20) bg_passive_tab_pane_g1_cp5

0x8777,	// (0x00024996) bg_passive_tab_pane_g2_cp5

0x880a,	// (0x00024a29) bg_passive_tab_pane_g3_cp5

0x8813,	// (0x00024a32) list_set_graphic_pane_ParamLimits

0x8813,	// (0x00024a32) list_set_graphic_pane

0x345c,	// (0x0001f67b) bg_set_opt_pane_cp4

0x8828,	// (0x00024a47) list_set_graphic_pane_g1_ParamLimits

0x8828,	// (0x00024a47) list_set_graphic_pane_g1

0x8834,	// (0x00024a53) list_set_graphic_pane_g2_ParamLimits

0x8834,	// (0x00024a53) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0002b98a) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0002b98a) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0002bcf4) volume_small_pane_cp_g

0x8858,	// (0x00024a77) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8858,	// (0x00024a77) list_double2_large_graphic_pane_g1_cp2

0x8866,	// (0x00024a85) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8866,	// (0x00024a85) list_double2_large_graphic_pane_g2_cp2

0x8877,	// (0x00024a96) list_double2_large_graphic_pane_g3_cp2

0x887f,	// (0x00024a9e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x887f,	// (0x00024a9e) list_double2_large_graphic_pane_t1_cp2

0x8895,	// (0x00024ab4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8895,	// (0x00024ab4) list_double2_large_graphic_pane_t2_cp2

0xab22,	// (0x00026d41) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xab22,	// (0x00026d41) list_double_large_graphic_pane_g1_cp2

0xab35,	// (0x00026d54) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab35,	// (0x00026d54) list_double_large_graphic_pane_g2_cp2

0x8a0b,	// (0x00024c2a) list_double_large_graphic_pane_g3_cp2

0xab46,	// (0x00026d65) list_double_large_graphic_pane_g4_cp

0xab4e,	// (0x00026d6d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab4e,	// (0x00026d6d) list_double_large_graphic_pane_t1_cp2

0xab65,	// (0x00026d84) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab65,	// (0x00026d84) list_double_large_graphic_pane_t2_cp2

0x88fb,	// (0x00024b1a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x88fb,	// (0x00024b1a) list_double2_graphic_pane_g1_cp2

0x8909,	// (0x00024b28) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8909,	// (0x00024b28) list_double2_graphic_pane_g2_cp2

0x891a,	// (0x00024b39) list_double2_graphic_pane_g3_cp2

0x8924,	// (0x00024b43) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8924,	// (0x00024b43) list_double2_graphic_pane_t1_cp2

0x893a,	// (0x00024b59) list_double2_graphic_pane_t2_cp2_ParamLimits

0x893a,	// (0x00024b59) list_double2_graphic_pane_t2_cp2

0x894c,	// (0x00024b6b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x894c,	// (0x00024b6b) list_single_number_heading_pane_g1_cp2

0x8958,	// (0x00024b77) list_single_number_heading_pane_g2_cp2

0x8960,	// (0x00024b7f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8960,	// (0x00024b7f) list_single_number_heading_pane_t1_cp2

0x8976,	// (0x00024b95) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8976,	// (0x00024b95) list_single_number_heading_pane_t2_cp2

0x898a,	// (0x00024ba9) list_single_number_heading_pane_t3_cp2_ParamLimits

0x898a,	// (0x00024ba9) list_single_number_heading_pane_t3_cp2

0x894c,	// (0x00024b6b) list_single_heading_pane_g1_cp2_ParamLimits

0x894c,	// (0x00024b6b) list_single_heading_pane_g1_cp2

0x8958,	// (0x00024b77) list_single_heading_pane_g2_cp2

0x8960,	// (0x00024b7f) list_single_heading_pane_t1_cp2_ParamLimits

0x8960,	// (0x00024b7f) list_single_heading_pane_t1_cp2

0xa91c,	// (0x00026b3b) list_single_heading_pane_t2_cp2_ParamLimits

0xa91c,	// (0x00026b3b) list_single_heading_pane_t2_cp2

0xa85e,	// (0x00026a7d) list_double_graphic_pane_g1_cp2_ParamLimits

0xa85e,	// (0x00026a7d) list_double_graphic_pane_g1_cp2

0xa86a,	// (0x00026a89) list_double_graphic_pane_g2_cp2_ParamLimits

0xa86a,	// (0x00026a89) list_double_graphic_pane_g2_cp2

0xa879,	// (0x00026a98) list_double_graphic_pane_g3_cp2

0xa881,	// (0x00026aa0) list_double_graphic_pane_t1_cp2_ParamLimits

0xa881,	// (0x00026aa0) list_double_graphic_pane_t1_cp2

0xa897,	// (0x00026ab6) list_double_graphic_pane_t2_cp2_ParamLimits

0xa897,	// (0x00026ab6) list_double_graphic_pane_t2_cp2

0x89ff,	// (0x00024c1e) list_double_number_pane_g1_cp2_ParamLimits

0x89ff,	// (0x00024c1e) list_double_number_pane_g1_cp2

0x8a0b,	// (0x00024c2a) list_double_number_pane_g2_cp2

0xa822,	// (0x00026a41) list_double_number_pane_t1_cp2_ParamLimits

0xa822,	// (0x00026a41) list_double_number_pane_t1_cp2

0xa836,	// (0x00026a55) list_double_number_pane_t2_cp2_ParamLimits

0xa836,	// (0x00026a55) list_double_number_pane_t2_cp2

0xa84c,	// (0x00026a6b) list_double_number_pane_t3_cp2_ParamLimits

0xa84c,	// (0x00026a6b) list_double_number_pane_t3_cp2

0xa70b,	// (0x0002692a) list_single_graphic_pane_g1_cp2_ParamLimits

0xa70b,	// (0x0002692a) list_single_graphic_pane_g1_cp2

0x8a65,	// (0x00024c84) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a65,	// (0x00024c84) list_single_graphic_pane_g2_cp2

0x8a71,	// (0x00024c90) list_single_graphic_pane_g3_cp2

0xa6e1,	// (0x00026900) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6e1,	// (0x00026900) list_single_graphic_pane_t1_cp2

0x8a65,	// (0x00024c84) list_single_number_pane_g1_cp2_ParamLimits

0x8a65,	// (0x00024c84) list_single_number_pane_g1_cp2

0x8a71,	// (0x00024c90) list_single_number_pane_g2_cp2

0xa6e1,	// (0x00026900) list_single_number_pane_t1_cp2_ParamLimits

0xa6e1,	// (0x00026900) list_single_number_pane_t1_cp2

0xa6f7,	// (0x00026916) list_single_number_pane_t2_cp2_ParamLimits

0xa6f7,	// (0x00026916) list_single_number_pane_t2_cp2

0x8866,	// (0x00024a85) list_double2_pane_g1_cp2_ParamLimits

0x8866,	// (0x00024a85) list_double2_pane_g1_cp2

0x8877,	// (0x00024a96) list_double2_pane_g2_cp2

0x89d7,	// (0x00024bf6) list_double2_pane_t1_cp2_ParamLimits

0x89d7,	// (0x00024bf6) list_double2_pane_t1_cp2

0x89ed,	// (0x00024c0c) list_double2_pane_t2_cp2_ParamLimits

0x89ed,	// (0x00024c0c) list_double2_pane_t2_cp2

0x89ff,	// (0x00024c1e) list_double_pane_g1_cp2_ParamLimits

0x89ff,	// (0x00024c1e) list_double_pane_g1_cp2

0x8a0b,	// (0x00024c2a) list_double_pane_g2_cp2

0x8a13,	// (0x00024c32) list_double_pane_t1_cp2_ParamLimits

0x8a13,	// (0x00024c32) list_double_pane_t1_cp2

0x8a29,	// (0x00024c48) list_double_pane_t2_cp2_ParamLimits

0x8a29,	// (0x00024c48) list_double_pane_t2_cp2

0x8a55,	// (0x00024c74) list_single_pane_cp2_g3

0x8a65,	// (0x00024c84) list_single_pane_g1_cp2_ParamLimits

0x8a65,	// (0x00024c84) list_single_pane_g1_cp2

0x8a71,	// (0x00024c90) list_single_pane_g2_cp2

0x8a79,	// (0x00024c98) list_single_pane_t1_cp2_ParamLimits

0x8a79,	// (0x00024c98) list_single_pane_t1_cp2

0x8a91,	// (0x00024cb0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a91,	// (0x00024cb0) list_single_large_graphic_pane_g1_cp2

0x8a9f,	// (0x00024cbe) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8a9f,	// (0x00024cbe) list_single_large_graphic_pane_g2_cp2

0x8aab,	// (0x00024cca) list_single_large_graphic_pane_g3_cp2

0x8ab3,	// (0x00024cd2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8ab3,	// (0x00024cd2) list_single_large_graphic_pane_g4_cp1

0x8acd,	// (0x00024cec) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8acd,	// (0x00024cec) list_single_large_graphic_pane_t1_cp2

0xa6ab,	// (0x000268ca) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa6ab,	// (0x000268ca) list_single_graphic_heading_pane_g1_cp2

0xa678,	// (0x00026897) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa678,	// (0x00026897) list_single_graphic_heading_pane_g4_cp2

0x8a71,	// (0x00024c90) list_single_graphic_heading_pane_g5_cp2

0xa6b7,	// (0x000268d6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6b7,	// (0x000268d6) list_single_graphic_heading_pane_t1_cp2

0xa6cd,	// (0x000268ec) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6cd,	// (0x000268ec) list_single_graphic_heading_pane_t2_cp2

0xa66c,	// (0x0002688b) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa66c,	// (0x0002688b) list_single_2graphic_pane_g1_cp2

0xa678,	// (0x00026897) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa678,	// (0x00026897) list_single_2graphic_pane_g2_cp2

0x8a71,	// (0x00024c90) list_single_2graphic_pane_g3_cp2

0xa689,	// (0x000268a8) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa689,	// (0x000268a8) list_single_2graphic_pane_g4_cp2

0xa695,	// (0x000268b4) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa695,	// (0x000268b4) list_single_2graphic_pane_t1_cp2

0x3452,	// (0x0001f671) list_highlight_pane_g10_cp1

0xa244,	// (0x00026463) list_highlight_pane_g1_cp1

0xa24c,	// (0x0002646b) list_highlight_pane_g2_cp1

0xa254,	// (0x00026473) list_highlight_pane_g3_cp1

0xa25c,	// (0x0002647b) list_highlight_pane_g4_cp1

0xa264,	// (0x00026483) list_highlight_pane_g5_cp1

0xa26c,	// (0x0002648b) list_highlight_pane_g6_cp1

0xa274,	// (0x00026493) list_highlight_pane_g7_cp1

0xa27c,	// (0x0002649b) list_highlight_pane_g8_cp1

0xa284,	// (0x000264a3) list_highlight_pane_g9_cp1

0xa164,	// (0x00026383) form_field_slider_pane_t3

0xa172,	// (0x00026391) form_field_slider_pane_t4

0xa180,	// (0x0002639f) slider_form_pane_ParamLimits

0xa180,	// (0x0002639f) slider_form_pane

0x345c,	// (0x0001f67b) control_abbreviations

0x345c,	// (0x0001f67b) control_conventions

0x345c,	// (0x0001f67b) control_definitions

0x345c,	// (0x0001f67b) format_table_attribute

0xa972,	// (0x00026b91) bg_popup_preview_window_pane_g9

0x345c,	// (0x0001f67b) format_table_data2

0x345c,	// (0x0001f67b) format_table_data3

0x345c,	// (0x0001f67b) format_table_data_example

0x0008,

0x345c,	// (0x0001f67b) intro_purpose

0xf900,	// (0x0002bb1f) bg_popup_preview_window_pane_g

0x345c,	// (0x0001f67b) texts_category

0x345c,	// (0x0001f67b) texts_graphics

0x8ae3,	// (0x00024d02) text_digital

0x8af2,	// (0x00024d11) text_primary

0x8b01,	// (0x00024d20) text_primary_small

0x8b10,	// (0x00024d2f) text_secondary

0x8b1f,	// (0x00024d3e) text_title

0xb10e,	// (0x0002732d) bg_passive_tab_pane_g1_cp3_srt

0x8777,	// (0x00024996) bg_passive_tab_pane_g2_cp3_srt

0xb117,	// (0x00027336) bg_passive_tab_pane_g3_cp3_srt

0x5fc2,	// (0x000221e1) bg_active_tab_pane_cp3_srt_ParamLimits

0x5fc2,	// (0x000221e1) bg_active_tab_pane_cp3_srt

0xb120,	// (0x0002733f) tabs_4_active_pane_srt_g1

0xb128,	// (0x00027347) tabs_4_active_pane_srt_t1_ParamLimits

0xb128,	// (0x00027347) tabs_4_active_pane_srt_t1

0xb10e,	// (0x0002732d) bg_active_tab_pane_g1_cp3_copy1

0x8777,	// (0x00024996) bg_active_tab_pane_g2_cp3_copy1

0xb117,	// (0x00027336) bg_active_tab_pane_g3_cp3_copy1

0x5fc2,	// (0x000221e1) tabs_2_long_active_pane_srt_ParamLimits

0x5fc2,	// (0x000221e1) tabs_2_long_active_pane_srt

0x5fc2,	// (0x000221e1) tabs_2_long_passive_pane_srt_ParamLimits

0x5fc2,	// (0x000221e1) tabs_2_long_passive_pane_srt

0x80c7,	// (0x000242e6) bg_passive_tab_pane_cp4_srt_ParamLimits

0x80c7,	// (0x000242e6) bg_passive_tab_pane_cp4_srt

0xadc2,	// (0x00026fe1) bg_passive_tab_pane_g1_cp4_srt

0x8777,	// (0x00024996) bg_passive_tab_pane_g2_cp4_srt

0xadcb,	// (0x00026fea) bg_passive_tab_pane_g3_cp4_srt

0x80a6,	// (0x000242c5) bg_active_tab_pane_cp4_srt_ParamLimits

0x80a6,	// (0x000242c5) bg_active_tab_pane_cp4_srt

0xadd4,	// (0x00026ff3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xadd4,	// (0x00026ff3) tabs_2_long_active_pane_srt_t1

0xadc2,	// (0x00026fe1) bg_active_tab_pane_g1_cp4_srt

0x8777,	// (0x00024996) bg_active_tab_pane_g2_cp4_srt

0xadcb,	// (0x00026fea) bg_active_tab_pane_g3_cp4_srt

0x62ce,	// (0x000224ed) tabs_3_long_active_pane_srt_ParamLimits

0x62ce,	// (0x000224ed) tabs_3_long_active_pane_srt

0x62ce,	// (0x000224ed) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x62ce,	// (0x000224ed) tabs_3_long_passive_pane_cp_srt

0x62ce,	// (0x000224ed) tabs_3_long_passive_pane_srt_ParamLimits

0x62ce,	// (0x000224ed) tabs_3_long_passive_pane_srt

0x80c7,	// (0x000242e6) bg_passive_tab_pane_cp5_srt_ParamLimits

0x80c7,	// (0x000242e6) bg_passive_tab_pane_cp5_srt

0x8801,	// (0x00024a20) bg_passive_tab_pane_g1_cp5_srt

0x8777,	// (0x00024996) bg_passive_tab_pane_g2_cp5_srt

0x880a,	// (0x00024a29) bg_passive_tab_pane_g3_cp5_srt

0x80a6,	// (0x000242c5) bg_active_tab_pane_cp5_srt_ParamLimits

0x80a6,	// (0x000242c5) bg_active_tab_pane_cp5_srt

0xadb0,	// (0x00026fcf) tabs_3_long_active_pane_srt_t1_ParamLimits

0xadb0,	// (0x00026fcf) tabs_3_long_active_pane_srt_t1

0x8801,	// (0x00024a20) bg_active_tab_pane_g1_cp5_srt

0x8777,	// (0x00024996) bg_active_tab_pane_g2_cp5_srt

0x880a,	// (0x00024a29) bg_active_tab_pane_g3_cp5_srt

0xada2,	// (0x00026fc1) navi_text_pane_srt_t1

0xad9a,	// (0x00026fb9) navi_icon_pane_srt_g1

0x8cf6,	// (0x00024f15) midp_editing_number_pane_srt

0x8b2e,	// (0x00024d4d) midp_ticker_pane_srt

0x8cfe,	// (0x00024f1d) midp_ticker_pane_srt_g1

0x8d06,	// (0x00024f25) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0002b9a9) midp_ticker_pane_srt_g

0x8d0e,	// (0x00024f2d) midp_ticker_pane_srt_t1

0xad8b,	// (0x00026faa) midp_editing_number_pane_t1_copy1

0x8b36,	// (0x00024d55) listscroll_midp_pane

0x8b36,	// (0x00024d55) midp_form_pane

0x8ba4,	// (0x00024dc3) midp_info_popup_window_ParamLimits

0x8ba4,	// (0x00024dc3) midp_info_popup_window

0x7f88,	// (0x000241a7) bg_popup_sub_pane_cp50_ParamLimits

0x7f88,	// (0x000241a7) bg_popup_sub_pane_cp50

0x9e7a,	// (0x00026099) listscroll_midp_info_pane_ParamLimits

0x9e7a,	// (0x00026099) listscroll_midp_info_pane

0x9e62,	// (0x00026081) listscroll_form_midp_pane_ParamLimits

0x9e62,	// (0x00026081) listscroll_form_midp_pane

0x9e6e,	// (0x0002608d) scroll_bar_cp050

0x9e42,	// (0x00026061) list_midp_pane

0xbb98,	// (0x00027db7) signal_pane_g2_cp

0x9d7c,	// (0x00025f9b) listscroll_midp_info_pane_t1_ParamLimits

0x9d7c,	// (0x00025f9b) listscroll_midp_info_pane_t1

0x9d94,	// (0x00025fb3) listscroll_midp_info_pane_t2_ParamLimits

0x9d94,	// (0x00025fb3) listscroll_midp_info_pane_t2

0x9dd2,	// (0x00025ff1) listscroll_midp_info_pane_t3_ParamLimits

0x9dd2,	// (0x00025ff1) listscroll_midp_info_pane_t3

0x9e0c,	// (0x0002602b) listscroll_midp_info_pane_t4_ParamLimits

0x9e0c,	// (0x0002602b) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x0002ba5a) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x0002ba5a) listscroll_midp_info_pane_t

0x8052,	// (0x00024271) scroll_pane_cp21

0x9d16,	// (0x00025f35) form_midp_field_choice_group_pane

0x9d1f,	// (0x00025f3e) form_midp_field_text_pane

0x9d62,	// (0x00025f81) form_midp_field_time_pane

0x9d6a,	// (0x00025f89) form_midp_gauge_slider_pane

0x9d73,	// (0x00025f92) form_midp_gauge_wait_pane

0x345c,	// (0x0001f67b) form_midp_image_pane

0x53c9,	// (0x000215e8) list_single_midp_pane_ParamLimits

0x53c9,	// (0x000215e8) list_single_midp_pane

0x9cda,	// (0x00025ef9) form_midp_field_text_pane_t1

0x9aee,	// (0x00025d0d) input_focus_pane_cp050

0x9d05,	// (0x00025f24) list_midp_form_text_pane

0x9ca9,	// (0x00025ec8) form_midp_field_choice_group_pane_t1

0x9cb7,	// (0x00025ed6) input_focus_pane_cp051

0x9ccb,	// (0x00025eea) list_midp_choice_pane

0x345c,	// (0x0001f67b) status_idle_pane

0x9c8d,	// (0x00025eac) form_midp_field_time_pane_t1

0x3452,	// (0x0001f671) wait_anim_pane_g2_copy1

0x9c9b,	// (0x00025eba) form_midp_field_time_pane_t2

0x0001,

0x8c54,	// (0x00024e73) aid_navinavi_width_2_pane

0xf836,	// (0x0002ba55) form_midp_field_time_pane_t

0x345c,	// (0x0001f67b) input_focus_pane_cp052

0x345c,	// (0x0001f67b) bg_input_focus_pane_cp040

0x9c4d,	// (0x00025e6c) form_midp_gauge_slider_pane_t1

0x9c5b,	// (0x00025e7a) form_midp_gauge_slider_pane_t2

0x9c69,	// (0x00025e88) form_midp_gauge_slider_pane_t3

0x9c77,	// (0x00025e96) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x0002ba4c) form_midp_gauge_slider_pane_t

0x9c85,	// (0x00025ea4) form_midp_slider_pane

0x5fc2,	// (0x000221e1) bg_input_focus_pane_cp041_ParamLimits

0x5fc2,	// (0x000221e1) bg_input_focus_pane_cp041

0x9c1a,	// (0x00025e39) form_midp_gauge_wait_pane_t1_ParamLimits

0x9c1a,	// (0x00025e39) form_midp_gauge_wait_pane_t1

0x9c2c,	// (0x00025e4b) form_midp_gauge_wait_pane_t2_ParamLimits

0x9c2c,	// (0x00025e4b) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x0002ba47) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x0002ba47) form_midp_gauge_wait_pane_t

0x9c3e,	// (0x00025e5d) form_midp_wait_pane_ParamLimits

0x9c3e,	// (0x00025e5d) form_midp_wait_pane

0x9be2,	// (0x00025e01) form_midp_image_pane_g1

0x9beb,	// (0x00025e0a) form_midp_image_pane_t1

0x9bfa,	// (0x00025e19) form_midp_image_pane_t2

0x9c09,	// (0x00025e28) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0002ba40) form_midp_image_pane_t

0x9bd9,	// (0x00025df8) list_single_midp_pane_g1

0x53ba,	// (0x000215d9) list_single_midp_pane_t1

0x9bbf,	// (0x00025dde) list_midp_form_item_pane_ParamLimits

0x9bbf,	// (0x00025dde) list_midp_form_item_pane

0x8bfc,	// (0x00024e1b) list_midp_form_item_pane_t1

0x8c0b,	// (0x00024e2a) midp_ticker_pane_g1

0x8c17,	// (0x00024e36) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0002b98f) midp_ticker_pane_g

0x8c23,	// (0x00024e42) midp_ticker_pane_t1

0xb00a,	// (0x00027229) midp_editing_number_pane_t1

0xafe8,	// (0x00027207) midp_editing_number_pane

0xaff7,	// (0x00027216) midp_ticker_pane

0xad7b,	// (0x00026f9a) ai_message_heading_pane

0x345c,	// (0x0001f67b) bg_popup_window_pane_cp14

0xad83,	// (0x00026fa2) listscroll_ai_message_pane

0xad01,	// (0x00026f20) ai_message_heading_pane_g1_ParamLimits

0xad01,	// (0x00026f20) ai_message_heading_pane_g1

0xad0d,	// (0x00026f2c) ai_message_heading_pane_g2_ParamLimits

0xad0d,	// (0x00026f2c) ai_message_heading_pane_g2

0xad1b,	// (0x00026f3a) ai_message_heading_pane_g3_ParamLimits

0xad1b,	// (0x00026f3a) ai_message_heading_pane_g3

0xad27,	// (0x00026f46) ai_message_heading_pane_g4_ParamLimits

0xad27,	// (0x00026f46) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0002bb81) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0002bb81) ai_message_heading_pane_g

0xad33,	// (0x00026f52) ai_message_heading_pane_t1_ParamLimits

0xad33,	// (0x00026f52) ai_message_heading_pane_t1

0xad4d,	// (0x00026f6c) ai_message_heading_pane_t2_ParamLimits

0xad4d,	// (0x00026f6c) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x0002bb8a) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x0002bb8a) ai_message_heading_pane_t

0xad61,	// (0x00026f80) bg_popup_heading_pane_cp1_ParamLimits

0xad61,	// (0x00026f80) bg_popup_heading_pane_cp1

0xacef,	// (0x00026f0e) list_ai_message_pane_ParamLimits

0xacef,	// (0x00026f0e) list_ai_message_pane

0x8052,	// (0x00024271) scroll_pane_cp10

0xac8b,	// (0x00026eaa) list_ai_message_pane_g1

0xac93,	// (0x00026eb2) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x0002bb5e) list_ai_message_pane_g

0xac9b,	// (0x00026eba) list_ai_message_pane_t1_ParamLimits

0xac9b,	// (0x00026eba) list_ai_message_pane_t1

0xacb0,	// (0x00026ecf) list_ai_message_pane_t2_ParamLimits

0xacb0,	// (0x00026ecf) list_ai_message_pane_t2

0xacc5,	// (0x00026ee4) list_ai_message_pane_t3_ParamLimits

0xacc5,	// (0x00026ee4) list_ai_message_pane_t3

0xacda,	// (0x00026ef9) list_ai_message_pane_t4_ParamLimits

0xacda,	// (0x00026ef9) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0002bb63) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0002bb63) list_ai_message_pane_t

0xac74,	// (0x00026e93) cell_ai_soft_ind_pane_ParamLimits

0xac74,	// (0x00026e93) cell_ai_soft_ind_pane

0x8c35,	// (0x00024e54) cell_ai_soft_ind_pane_g1_ParamLimits

0x8c35,	// (0x00024e54) cell_ai_soft_ind_pane_g1

0x345c,	// (0x0001f67b) grid_highlight_cp1

0x8c42,	// (0x00024e61) text_secondary_cp56_ParamLimits

0x8c42,	// (0x00024e61) text_secondary_cp56

0xac49,	// (0x00026e68) example_general_pane_ParamLimits

0xac49,	// (0x00026e68) example_general_pane

0xac55,	// (0x00026e74) example_parent_pane_g1_ParamLimits

0xac55,	// (0x00026e74) example_parent_pane_g1

0xac61,	// (0x00026e80) example_parent_pane_t1_ParamLimits

0xac61,	// (0x00026e80) example_parent_pane_t1

0x9277,	// (0x00025496) popup_preview_text_window_ParamLimits

0x9277,	// (0x00025496) popup_preview_text_window

0x8a5d,	// (0x00024c7c) list_single_pane_cp2_g4

0x6384,	// (0x000225a3) bg_popup_preview_window_pane_ParamLimits

0x6384,	// (0x000225a3) bg_popup_preview_window_pane

0xa97c,	// (0x00026b9b) popup_preview_text_window_t1_ParamLimits

0xa97c,	// (0x00026b9b) popup_preview_text_window_t1

0xa99a,	// (0x00026bb9) popup_preview_text_window_t2_ParamLimits

0xa99a,	// (0x00026bb9) popup_preview_text_window_t2

0xa9e3,	// (0x00026c02) popup_preview_text_window_t3_ParamLimits

0xa9e3,	// (0x00026c02) popup_preview_text_window_t3

0xaa28,	// (0x00026c47) popup_preview_text_window_t4_ParamLimits

0xaa28,	// (0x00026c47) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0002bb32) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0002bb32) popup_preview_text_window_t

0xaaa6,	// (0x00026cc5) scroll_pane_cp11

0x99fc,	// (0x00025c1b) bg_popup_preview_window_pane_g1

0xa930,	// (0x00026b4f) bg_popup_preview_window_pane_g2

0xa93a,	// (0x00026b59) bg_popup_preview_window_pane_g3

0xa944,	// (0x00026b63) bg_popup_preview_window_pane_g4

0xa94e,	// (0x00026b6d) bg_popup_preview_window_pane_g5

0xa958,	// (0x00026b77) bg_popup_preview_window_pane_g6

0xa960,	// (0x00026b7f) bg_popup_preview_window_pane_g7

0xa968,	// (0x00026b87) bg_popup_preview_window_pane_g8

0x5b01,	// (0x00021d20) aid_popup_width_pane

0x9253,	// (0x00025472) popup_midp_note_alarm_window_ParamLimits

0x9253,	// (0x00025472) popup_midp_note_alarm_window

0x7ec4,	// (0x000240e3) data_form_pane_ParamLimits

0x50ae,	// (0x000212cd) form_field_data_pane_g1

0x50b8,	// (0x000212d7) form_field_data_pane_t1_ParamLimits

0x7ed0,	// (0x000240ef) input_focus_pane_ParamLimits

0x7ede,	// (0x000240fd) data_form_wide_pane_ParamLimits

0x50d2,	// (0x000212f1) form_field_data_wide_pane_g1

0x50de,	// (0x000212fd) form_field_data_wide_pane_t1_ParamLimits

0x664a,	// (0x00022869) input_focus_pane_cp6_ParamLimits

0x7ffd,	// (0x0002421c) input_popup_find_pane_g1_ParamLimits

0x7ffd,	// (0x0002421c) input_popup_find_pane_g1

0x6942,	// (0x00022b61) aid_navi_side_left_pane

0x6957,	// (0x00022b76) aid_navi_side_right_pane

0xa33f,	// (0x0002655e) bg_popup_window_pane_cp30_ParamLimits

0xa33f,	// (0x0002655e) bg_popup_window_pane_cp30

0xa3b9,	// (0x000265d8) popup_midp_note_alarm_window_g1_ParamLimits

0xa3b9,	// (0x000265d8) popup_midp_note_alarm_window_g1

0xa3e9,	// (0x00026608) popup_midp_note_alarm_window_t1_ParamLimits

0xa3e9,	// (0x00026608) popup_midp_note_alarm_window_t1

0xa48a,	// (0x000266a9) popup_midp_note_alarm_window_t2_ParamLimits

0xa48a,	// (0x000266a9) popup_midp_note_alarm_window_t2

0xa538,	// (0x00026757) popup_midp_note_alarm_window_t3_ParamLimits

0xa538,	// (0x00026757) popup_midp_note_alarm_window_t3

0xa56a,	// (0x00026789) popup_midp_note_alarm_window_t4_ParamLimits

0xa56a,	// (0x00026789) popup_midp_note_alarm_window_t4

0xa590,	// (0x000267af) popup_midp_note_alarm_window_t5_ParamLimits

0xa590,	// (0x000267af) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0002bacf) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0002bacf) popup_midp_note_alarm_window_t

0xa63c,	// (0x0002685b) wait_bar_pane_cp1_ParamLimits

0xa63c,	// (0x0002685b) wait_bar_pane_cp1

0x345c,	// (0x0001f67b) wait_anim_pane_copy1

0x345c,	// (0x0001f67b) wait_border_pane_copy1

0xa024,	// (0x00026243) wait_border_pane_g1_copy1

0x50f8,	// (0x00021317) form_field_popup_pane_g1

0x5100,	// (0x0002131f) form_field_popup_pane_t1_ParamLimits

0x7ed0,	// (0x000240ef) input_focus_pane_cp7_ParamLimits

0x7f0a,	// (0x00024129) list_form_pane_ParamLimits

0x511a,	// (0x00021339) form_field_popup_wide_pane_g1

0x5122,	// (0x00021341) form_field_popup_wide_pane_t1_ParamLimits

0x7ed0,	// (0x000240ef) input_focus_pane_cp8_ParamLimits

0x7f16,	// (0x00024135) list_form_wide_pane_ParamLimits

0xb19b,	// (0x000273ba) aid_size_cell_graphic_pane

0x51ae,	// (0x000213cd) data_form_pane_t1_ParamLimits

0x5414,	// (0x00021633) data_form_wide_pane_t1_ParamLimits

0x959e,	// (0x000257bd) bg_status_flat_pane

0x5f22,	// (0x00022141) title_pane_t1_ParamLimits

0x5f8a,	// (0x000221a9) title_pane_t2_ParamLimits

0x5fb0,	// (0x000221cf) title_pane_t3_ParamLimits

0xf573,	// (0x0002b792) title_pane_t_ParamLimits

0x84d5,	// (0x000246f4) level_1_signal_ParamLimits

0x84e2,	// (0x00024701) level_2_signal_ParamLimits

0x84ef,	// (0x0002470e) level_3_signal_ParamLimits

0x84fc,	// (0x0002471b) level_4_signal_ParamLimits

0x8509,	// (0x00024728) level_5_signal_ParamLimits

0x8516,	// (0x00024735) level_6_signal_ParamLimits

0x8523,	// (0x00024742) level_7_signal_ParamLimits

0x84d5,	// (0x000246f4) level_1_battery_ParamLimits

0x84e2,	// (0x00024701) level_2_battery_ParamLimits

0x84ef,	// (0x0002470e) level_3_battery_ParamLimits

0x84fc,	// (0x0002471b) level_4_battery_ParamLimits

0x8509,	// (0x00024728) level_5_battery_ParamLimits

0x8516,	// (0x00024735) level_6_battery_ParamLimits

0x8523,	// (0x00024742) level_7_battery_ParamLimits

0xa244,	// (0x00026463) bg_status_flat_pane_g1

0xa24c,	// (0x0002646b) bg_status_flat_pane_g2

0xa254,	// (0x00026473) bg_status_flat_pane_g3

0xa25c,	// (0x0002647b) bg_status_flat_pane_g4

0xa264,	// (0x00026483) bg_status_flat_pane_g5

0xa26c,	// (0x0002648b) bg_status_flat_pane_g6

0xa274,	// (0x00026493) bg_status_flat_pane_g7

0x5fd8,	// (0x000221f7) tabs_3_active_pane_t1_ParamLimits

0x5fd8,	// (0x000221f7) tabs_3_passive_pane_t1_ParamLimits

0x5ff2,	// (0x00022211) tabs_4_active_pane_t1_ParamLimits

0x5ff2,	// (0x00022211) tabs_4_1_passive_pane_t1_ParamLimits

0x8094,	// (0x000242b3) tabs_2_active_pane_t1_ParamLimits

0x8094,	// (0x000242b3) tabs_2_passive_pane_t1_ParamLimits

0x80a6,	// (0x000242c5) bg_active_tab_pane_cp4_ParamLimits

0x80b4,	// (0x000242d3) tabs_2_long_active_pane_t1_ParamLimits

0x80c7,	// (0x000242e6) bg_passive_tab_pane_cp4_ParamLimits

0x6e9b,	// (0x000230ba) list_single_midp_graphic_pane_t1_ParamLimits

0x80a6,	// (0x000242c5) bg_active_tab_pane_cp5_ParamLimits

0x80d3,	// (0x000242f2) tabs_3_long_active_pane_t1_ParamLimits

0x80c7,	// (0x000242e6) bg_passive_tab_pane_cp5_ParamLimits

0x6e9b,	// (0x000230ba) list_single_midp_graphic_pane_t1

0x959e,	// (0x000257bd) bg_status_flat_pane_ParamLimits

0x9669,	// (0x00025888) indicator_pane_cp2_ParamLimits

0x9669,	// (0x00025888) indicator_pane_cp2

0x97ab,	// (0x000259ca) navi_pane_srt_ParamLimits

0x97ab,	// (0x000259ca) navi_pane_srt

0x97cf,	// (0x000259ee) popup_clock_digital_analogue_window_cp1

0x6132,	// (0x00022351) indicator_pane_t1

0x8b2e,	// (0x00024d4d) copy_highlight_pane

0x8b2e,	// (0x00024d4d) cursor_graphics_pane

0x8b2e,	// (0x00024d4d) graphic_within_text_pane

0x8b2e,	// (0x00024d4d) link_highlight_pane

0xaa69,	// (0x00026c88) popup_preview_text_window_t5_ParamLimits

0xaa69,	// (0x00026c88) popup_preview_text_window_t5

0x8c5e,	// (0x00024e7d) cursor_digital_pane

0x8c5e,	// (0x00024e7d) cursor_primary_pane

0x8c6f,	// (0x00024e8e) cursor_primary_small_pane

0x8c77,	// (0x00024e96) cursor_secondary_pane

0x8c7f,	// (0x00024e9e) cursor_title_pane

0x8c5e,	// (0x00024e7d) link_highlight_digital_pane

0x8c66,	// (0x00024e85) link_highlight_primary_pane

0x8c6f,	// (0x00024e8e) link_highlight_primary_small_pane

0x8c77,	// (0x00024e96) link_highlight_secondary_pane

0x8c7f,	// (0x00024e9e) link_highlight_title_pane

0x8c5e,	// (0x00024e7d) copy_highlight_digital_pane

0x8c5e,	// (0x00024e7d) copy_highlight_primary_pane

0x8c6f,	// (0x00024e8e) copy_highlight_primary_small_pane

0x8c77,	// (0x00024e96) copy_highlight_secondary_pane

0x8c7f,	// (0x00024e9e) copy_highlight_title_pane

0x8c77,	// (0x00024e96) graphic_text_digital_pane

0xa2e2,	// (0x00026501) graphic_text_primary_pane

0xa2eb,	// (0x0002650a) graphic_text_primary_small_pane

0x8c6f,	// (0x00024e8e) graphic_text_secondary_pane

0x8c5e,	// (0x00024e7d) graphic_text_title_pane

0x8c87,	// (0x00024ea6) cursor_primary_pane_g1

0xa2d4,	// (0x000264f3) cursor_text_primary_t1

0xa2bc,	// (0x000264db) cursor_primary_small_pane_g1

0xa2c6,	// (0x000264e5) cursor_text_primary_small_t1

0xa2a4,	// (0x000264c3) cursor_primary_small_pane_g1_copy1

0xa2ae,	// (0x000264cd) cursor_text_primary_small_t1_copy1

0xa28c,	// (0x000264ab) cursor_text_title_t1

0xa29a,	// (0x000264b9) cursor_title_pane_g1

0x8c87,	// (0x00024ea6) cursor_digital_pane_g1

0x8c91,	// (0x00024eb0) cursor_text_digital_t1

0x8c9f,	// (0x00024ebe) link_highlight_primary_pane_g1

0xa235,	// (0x00026454) link_highlight_primary_pane_t1

0x8c9f,	// (0x00024ebe) link_highlight_primary_small_pane_g1

0x8ca7,	// (0x00024ec6) link_highlight_primary_small_pane_t1

0x8cb6,	// (0x00024ed5) link_highlight_secondary_pane_g1

0x8cbe,	// (0x00024edd) link_highlight_secondary_pane_t1

0xa1a9,	// (0x000263c8) link_highlight_title_pane_g1

0xa1b1,	// (0x000263d0) link_highlight_title_pane_t1

0xa192,	// (0x000263b1) link_highlight_digital_pane_g1

0xa19a,	// (0x000263b9) link_highlight_digital_pane_t1

0xa05a,	// (0x00026279) copy_highlight_primary_pane_g1

0xa071,	// (0x00026290) copy_highlight_primary_pane_t1

0xa05a,	// (0x00026279) copy_highlight_primary_small_pane_g1

0xa062,	// (0x00026281) copy_highlight_primary_small_pane_t1

0x8ccd,	// (0x00024eec) copy_highlight_secondary_pane_g1

0x8cd5,	// (0x00024ef4) copy_highlight_secondary_pane_t1

0xa043,	// (0x00026262) copy_highlight_title_pane_g1

0xa04b,	// (0x0002626a) copy_highlight_title_pane_t1

0xa05a,	// (0x00026279) copy_highlight_digital_pane_g1

0xb36b,	// (0x0002758a) copy_highlight_digital_pane_t1

0xb2bf,	// (0x000274de) graphic_text_primary_pane_g1

0xb34f,	// (0x0002756e) graphic_text_primary_pane_t1

0xb35d,	// (0x0002757c) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0002bbfe) graphic_text_primary_pane_t

0xb32b,	// (0x0002754a) graphic_text_primary_small_pane_g1

0xb333,	// (0x00027552) graphic_text_primary_small_pane_t1

0xb341,	// (0x00027560) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x0002bbf9) graphic_text_primary_small_pane_t

0xb307,	// (0x00027526) graphic_text_secondary_pane_g1

0xb30f,	// (0x0002752e) graphic_text_secondary_pane_t1

0xb31d,	// (0x0002753c) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x0002bbf4) graphic_text_secondary_pane_t

0xb2e3,	// (0x00027502) graphic_text_title_pane_g1

0xb2eb,	// (0x0002750a) graphic_text_title_pane_t1

0xb2f9,	// (0x00027518) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0002bbef) graphic_text_title_pane_t

0xb2bf,	// (0x000274de) graphic_text_digital_pane_g1

0xb2c7,	// (0x000274e6) graphic_text_digital_pane_t1

0xb2d5,	// (0x000274f4) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x0002bbea) graphic_text_digital_pane_t

0x5fc2,	// (0x000221e1) navi_icon_pane_srt_ParamLimits

0x5fc2,	// (0x000221e1) navi_icon_pane_srt

0x345c,	// (0x0001f67b) navi_midp_pane_srt

0x345c,	// (0x0001f67b) navi_navi_pane_srt

0x5fc2,	// (0x000221e1) navi_text_pane_srt_ParamLimits

0x5fc2,	// (0x000221e1) navi_text_pane_srt

0xb28a,	// (0x000274a9) navi_navi_icon_text_pane_srt

0xb292,	// (0x000274b1) navi_navi_pane_srt_g1_ParamLimits

0xb292,	// (0x000274b1) navi_navi_pane_srt_g1

0xb2a4,	// (0x000274c3) navi_navi_pane_srt_g2_ParamLimits

0xb2a4,	// (0x000274c3) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x0002bbe5) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x0002bbe5) navi_navi_pane_srt_g

0xb2b6,	// (0x000274d5) navi_navi_tabs_pane_srt

0xb28a,	// (0x000274a9) navi_navi_text_pane_srt

0xb28a,	// (0x000274a9) navi_navi_volume_pane_srt

0xb27b,	// (0x0002749a) navi_navi_text_pane_srt_t1

0x71f5,	// (0x00023414) navi_navi_volume_pane_srt_g1

0x71fd,	// (0x0002341c) volume_small_pane_srt_ParamLimits

0x71fd,	// (0x0002341c) volume_small_pane_srt

0x6c29,	// (0x00022e48) volume_small_pane_srt_g1_ParamLimits

0x6c29,	// (0x00022e48) volume_small_pane_srt_g1

0x6c39,	// (0x00022e58) volume_small_pane_srt_g2_ParamLimits

0x6c39,	// (0x00022e58) volume_small_pane_srt_g2

0x6c4a,	// (0x00022e69) volume_small_pane_srt_g3_ParamLimits

0x6c4a,	// (0x00022e69) volume_small_pane_srt_g3

0x6c5b,	// (0x00022e7a) volume_small_pane_srt_g4_ParamLimits

0x6c5b,	// (0x00022e7a) volume_small_pane_srt_g4

0x6c6c,	// (0x00022e8b) volume_small_pane_srt_g5_ParamLimits

0x6c6c,	// (0x00022e8b) volume_small_pane_srt_g5

0x6c7d,	// (0x00022e9c) volume_small_pane_srt_g6_ParamLimits

0x6c7d,	// (0x00022e9c) volume_small_pane_srt_g6

0x6c8e,	// (0x00022ead) volume_small_pane_srt_g7_ParamLimits

0x6c8e,	// (0x00022ead) volume_small_pane_srt_g7

0x6c9f,	// (0x00022ebe) volume_small_pane_srt_g8_ParamLimits

0x6c9f,	// (0x00022ebe) volume_small_pane_srt_g8

0x6cb0,	// (0x00022ecf) volume_small_pane_srt_g9_ParamLimits

0x6cb0,	// (0x00022ecf) volume_small_pane_srt_g9

0x6cc1,	// (0x00022ee0) volume_small_pane_srt_g10_ParamLimits

0x6cc1,	// (0x00022ee0) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0002b994) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0002b994) volume_small_pane_srt_g

0x6439,	// (0x00022658) query_popup_data_pane_cp2

0xb261,	// (0x00027480) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb261,	// (0x00027480) navi_navi_icon_text_pane_srt_t1

0xa2e2,	// (0x00026501) navi_tabs_2_long_pane_srt

0xa2e2,	// (0x00026501) navi_tabs_2_pane_srt

0xa2e2,	// (0x00026501) navi_tabs_3_long_pane_srt

0xa2e2,	// (0x00026501) navi_tabs_3_pane_srt

0xa2e2,	// (0x00026501) navi_tabs_4_pane_srt

0x71d5,	// (0x000233f4) tabs_2_active_pane_srt_ParamLimits

0x71d5,	// (0x000233f4) tabs_2_active_pane_srt

0x71e5,	// (0x00023404) tabs_2_passive_pane_srt_ParamLimits

0x71e5,	// (0x00023404) tabs_2_passive_pane_srt

0x8eb4,	// (0x000250d3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8eb4,	// (0x000250d3) bg_passive_tab_pane_cp1_srt

0xb22d,	// (0x0002744c) bg_passive_tab_pane_g1_cp1_srt

0x8777,	// (0x00024996) bg_passive_tab_pane_g2_cp1_srt

0xb236,	// (0x00027455) bg_passive_tab_pane_g3_cp1_srt

0x5fc2,	// (0x000221e1) bg_active_tab_pane_cp1_srt_ParamLimits

0x5fc2,	// (0x000221e1) bg_active_tab_pane_cp1_srt

0xb23f,	// (0x0002745e) tabs_2_active_pane_srt_g1

0xb247,	// (0x00027466) tabs_2_active_pane_srt_t1_ParamLimits

0xb247,	// (0x00027466) tabs_2_active_pane_srt_t1

0xb22d,	// (0x0002744c) bg_active_tab_pane_g1_cp1_srt

0x8777,	// (0x00024996) bg_active_tab_pane_g2_cp1_srt

0xb236,	// (0x00027455) bg_active_tab_pane_g3_cp1_srt

0x71a2,	// (0x000233c1) tabs_3_active_pane_srt_ParamLimits

0x71a2,	// (0x000233c1) tabs_3_active_pane_srt

0x71b3,	// (0x000233d2) tabs_3_passive_pane_cp_srt_ParamLimits

0x71b3,	// (0x000233d2) tabs_3_passive_pane_cp_srt

0x71c4,	// (0x000233e3) tabs_3_passive_pane_srt_ParamLimits

0x71c4,	// (0x000233e3) tabs_3_passive_pane_srt

0x8eb4,	// (0x000250d3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8eb4,	// (0x000250d3) bg_passive_tab_pane_cp2_srt

0x8ce4,	// (0x00024f03) bg_passive_tab_pane_g1_cp2_srt

0x8777,	// (0x00024996) bg_passive_tab_pane_g2_cp2_srt

0x8ced,	// (0x00024f0c) bg_passive_tab_pane_g3_cp2_srt

0x5fc2,	// (0x000221e1) bg_active_tab_pane_cp2_srt_ParamLimits

0x5fc2,	// (0x000221e1) bg_active_tab_pane_cp2_srt

0xb213,	// (0x00027432) tabs_3_active_pane_srt_g1

0xb21b,	// (0x0002743a) tabs_3_active_pane_srt_t1_ParamLimits

0xb21b,	// (0x0002743a) tabs_3_active_pane_srt_t1

0x8ce4,	// (0x00024f03) bg_active_tab_pane_g1_cp2_srt

0x8777,	// (0x00024996) bg_active_tab_pane_g2_cp2_srt

0x8ced,	// (0x00024f0c) bg_active_tab_pane_g3_cp2_srt

0x715a,	// (0x00023379) tabs_4_active_pane_srt_ParamLimits

0x715a,	// (0x00023379) tabs_4_active_pane_srt

0x716c,	// (0x0002338b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x716c,	// (0x0002338b) tabs_4_passive_pane_cp2_srt

0x8e42,	// (0x00025061) aid_size_cell_toolbar

0x80c7,	// (0x000242e6) main_idle_act_pane_ParamLimits

0x9079,	// (0x00025298) popup_large_graphic_colour_window_ParamLimits

0x9420,	// (0x0002563f) popup_toolbar_window_ParamLimits

0x9420,	// (0x0002563f) popup_toolbar_window

0x546d,	// (0x0002168c) list_single_graphic_2heading_pane_ParamLimits

0x546d,	// (0x0002168c) list_single_graphic_2heading_pane

0x8283,	// (0x000244a2) aid_size_cell_apps_grid_lsc_pane

0x8295,	// (0x000244b4) aid_size_cell_apps_grid_prt_pane

0x8eb4,	// (0x000250d3) bg_wml_button_pane_cp1_ParamLimits

0x8eb4,	// (0x000250d3) bg_wml_button_pane_cp1

0x9cda,	// (0x00025ef9) form_midp_field_text_pane_t1_ParamLimits

0x9aee,	// (0x00025d0d) input_focus_pane_cp050_ParamLimits

0x9d05,	// (0x00025f24) list_midp_form_text_pane_ParamLimits

0x9cb7,	// (0x00025ed6) input_focus_pane_cp051_ParamLimits

0x9ccb,	// (0x00025eea) list_midp_choice_pane_ParamLimits

0x9b7f,	// (0x00025d9e) list_single_2graphic_pane_cp3_ParamLimits

0x9b7f,	// (0x00025d9e) list_single_2graphic_pane_cp3

0x9b98,	// (0x00025db7) list_single_midp_graphic_pane_ParamLimits

0x9b98,	// (0x00025db7) list_single_midp_graphic_pane

0x52ea,	// (0x00021509) list_single_graphic_2heading_pane_g1_ParamLimits

0x52ea,	// (0x00021509) list_single_graphic_2heading_pane_g1

0x52f6,	// (0x00021515) list_single_graphic_2heading_pane_g4_ParamLimits

0x52f6,	// (0x00021515) list_single_graphic_2heading_pane_g4

0x5302,	// (0x00021521) list_single_graphic_2heading_pane_g5_ParamLimits

0x5302,	// (0x00021521) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0002b9e7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0002b9e7) list_single_graphic_2heading_pane_g

0x530e,	// (0x0002152d) list_single_graphic_2heading_pane_t1_ParamLimits

0x530e,	// (0x0002152d) list_single_graphic_2heading_pane_t1

0x5322,	// (0x00021541) list_single_graphic_2heading_pane_t2_ParamLimits

0x5322,	// (0x00021541) list_single_graphic_2heading_pane_t2

0x533e,	// (0x0002155d) list_single_graphic_2heading_pane_t3_ParamLimits

0x533e,	// (0x0002155d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0002b9ee) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0002b9ee) list_single_graphic_2heading_pane_t

0x992e,	// (0x00025b4d) bg_popup_sub_pane_cp2

0x9958,	// (0x00025b77) grid_toobar_pane

0x6e2b,	// (0x0002304a) cell_toolbar_pane_ParamLimits

0x6e2b,	// (0x0002304a) cell_toolbar_pane

0x9994,	// (0x00025bb3) cell_toolbar_pane_g1_ParamLimits

0x9994,	// (0x00025bb3) cell_toolbar_pane_g1

0x99a8,	// (0x00025bc7) cell_toolbar_pane_g2_ParamLimits

0x99a8,	// (0x00025bc7) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0002b9fc) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0002b9fc) cell_toolbar_pane_g

0x99d6,	// (0x00025bf5) grid_highlight_pane_cp2_ParamLimits

0x99d6,	// (0x00025bf5) grid_highlight_pane_cp2

0x99f0,	// (0x00025c0f) toolbar_button_pane

0x99fc,	// (0x00025c1b) toolbar_button_pane_g1

0x9a04,	// (0x00025c23) toolbar_button_pane_g2

0x9a0c,	// (0x00025c2b) toolbar_button_pane_g3

0x9a14,	// (0x00025c33) toolbar_button_pane_g4

0x9a1c,	// (0x00025c3b) toolbar_button_pane_g5

0x9a24,	// (0x00025c43) toolbar_button_pane_g6

0x9a2c,	// (0x00025c4b) toolbar_button_pane_g7

0x9a34,	// (0x00025c53) toolbar_button_pane_g8

0x9a3c,	// (0x00025c5b) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0002ba01) toolbar_button_pane_g

0x6e63,	// (0x00023082) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6e63,	// (0x00023082) list_single_2graphic_pane_g1_cp3

0x6e6f,	// (0x0002308e) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6e6f,	// (0x0002308e) list_single_2graphic_pane_g2_cp3

0x8958,	// (0x00024b77) list_single_2graphic_pane_g3_cp3

0x0a03,	// (0x0001cc22) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0a03,	// (0x0001cc22) list_single_2graphic_pane_g4_cp3

0x6e80,	// (0x0002309f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6e80,	// (0x0002309f) list_single_2graphic_pane_t1_cp3

0x894c,	// (0x00024b6b) list_single_midp_graphic_pane_g2_ParamLimits

0x894c,	// (0x00024b6b) list_single_midp_graphic_pane_g2

0x8e4a,	// (0x00025069) aid_zoom_text_primary

0x52da,	// (0x000214f9) aid_zoom_text_secondary

0x8da1,	// (0x00024fc0) status_small_pane_g7_ParamLimits

0x8da1,	// (0x00024fc0) status_small_pane_g7

0x8dc4,	// (0x00024fe3) status_small_pane_t1_ParamLimits

0x5ef9,	// (0x00022118) title_pane_g2

0x0003,

0xf56a,	// (0x0002b789) title_pane_g

0x64e2,	// (0x00022701) aid_size_cell_colour_1_pane_ParamLimits

0x64e2,	// (0x00022701) aid_size_cell_colour_1_pane

0x64f6,	// (0x00022715) aid_size_cell_colour_2_pane_ParamLimits

0x64f6,	// (0x00022715) aid_size_cell_colour_2_pane

0x650a,	// (0x00022729) aid_size_cell_colour_3_pane_ParamLimits

0x650a,	// (0x00022729) aid_size_cell_colour_3_pane

0x651e,	// (0x0002273d) aid_size_cell_colour_4_pane_ParamLimits

0x651e,	// (0x0002273d) aid_size_cell_colour_4_pane

0x687e,	// (0x00022a9d) title_pane_stacon_g1_ParamLimits

0x687e,	// (0x00022a9d) title_pane_stacon_g1

0xa0c8,	// (0x000262e7) popup_note_wait_window_g3_ParamLimits

0xa0c8,	// (0x000262e7) popup_note_wait_window_g3

0xa13f,	// (0x0002635e) popup_note_wait_window_t5_ParamLimits

0xa13f,	// (0x0002635e) popup_note_wait_window_t5

0x345c,	// (0x0001f67b) main_feb_china_hwr_fs_writing_pane

0x8f40,	// (0x0002515f) popup_feb_china_hwr_fs_window_ParamLimits

0x8f40,	// (0x0002515f) popup_feb_china_hwr_fs_window

0x6eb1,	// (0x000230d0) aid_size_cell_hwr_fs_ParamLimits

0x6eb1,	// (0x000230d0) aid_size_cell_hwr_fs

0x9aee,	// (0x00025d0d) bg_popup_sub_pane_cp3_ParamLimits

0x9aee,	// (0x00025d0d) bg_popup_sub_pane_cp3

0x6ec6,	// (0x000230e5) grid_hwr_fs_pane_ParamLimits

0x6ec6,	// (0x000230e5) grid_hwr_fs_pane

0x6ede,	// (0x000230fd) linegrid_hwr_fs_pane_ParamLimits

0x6ede,	// (0x000230fd) linegrid_hwr_fs_pane

0x6eee,	// (0x0002310d) cell_hwr_fs_pane_ParamLimits

0x6eee,	// (0x0002310d) cell_hwr_fs_pane

0x9afa,	// (0x00025d19) linegrid_hwr_fs_pane_g1_ParamLimits

0x9afa,	// (0x00025d19) linegrid_hwr_fs_pane_g1

0x9b06,	// (0x00025d25) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b06,	// (0x00025d25) linegrid_hwr_fs_pane_g2

0x9b18,	// (0x00025d37) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b18,	// (0x00025d37) linegrid_hwr_fs_pane_g3

0x6f12,	// (0x00023131) linegrid_hwr_fs_pane_g4_ParamLimits

0x6f12,	// (0x00023131) linegrid_hwr_fs_pane_g4

0x6f30,	// (0x0002314f) linegrid_hwr_fs_pane_g5_ParamLimits

0x6f30,	// (0x0002314f) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x0002ba2c) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x0002ba2c) linegrid_hwr_fs_pane_g

0x9b24,	// (0x00025d43) cell_hwr_fs_pane_g1_ParamLimits

0x9b24,	// (0x00025d43) cell_hwr_fs_pane_g1

0x9865,	// (0x00025a84) cell_hwr_fs_pane_g2_ParamLimits

0x9865,	// (0x00025a84) cell_hwr_fs_pane_g2

0x9b3a,	// (0x00025d59) cell_hwr_fs_pane_g3_ParamLimits

0x9b3a,	// (0x00025d59) cell_hwr_fs_pane_g3

0x9b47,	// (0x00025d66) cell_hwr_fs_pane_g4_ParamLimits

0x9b47,	// (0x00025d66) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x0002ba37) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x0002ba37) cell_hwr_fs_pane_g

0x6f46,	// (0x00023165) cell_hwr_fs_pane_t1

0x345c,	// (0x0001f67b) grid_highlight_pane_cp6

0x345c,	// (0x0001f67b) main_idle_act2_pane

0x8039,	// (0x00024258) aid_inside_area_popup_secondary

0xa778,	// (0x00026997) aid_inside_area_window_primary_ParamLimits

0xa778,	// (0x00026997) aid_inside_area_window_primary

0xb37a,	// (0x00027599) ai2_news_ticker_pane

0xb382,	// (0x000275a1) aid_size_cell_ai1_link_ParamLimits

0xb382,	// (0x000275a1) aid_size_cell_ai1_link

0xb39c,	// (0x000275bb) popup_ai2_data_window_ParamLimits

0xb39c,	// (0x000275bb) popup_ai2_data_window

0xb3ba,	// (0x000275d9) popup_ai2_link_window_ParamLimits

0xb3ba,	// (0x000275d9) popup_ai2_link_window

0x9aee,	// (0x00025d0d) bg_popup_sub_pane_cp4_ParamLimits

0x9aee,	// (0x00025d0d) bg_popup_sub_pane_cp4

0xb3d0,	// (0x000275ef) grid_ai2_link_pane_ParamLimits

0xb3d0,	// (0x000275ef) grid_ai2_link_pane

0xb3e7,	// (0x00027606) popup_ai2_link_window_g1_ParamLimits

0xb3e7,	// (0x00027606) popup_ai2_link_window_g1

0xb3f3,	// (0x00027612) popup_ai2_link_window_g2_ParamLimits

0xb3f3,	// (0x00027612) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x0002bc03) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x0002bc03) popup_ai2_link_window_g

0xb404,	// (0x00027623) ai2_mp_button_pane

0xb40c,	// (0x0002762b) ai2_mp_volume_pane

0x9cb7,	// (0x00025ed6) bg_popup_sub_pane_cp5_ParamLimits

0x9cb7,	// (0x00025ed6) bg_popup_sub_pane_cp5

0xb414,	// (0x00027633) heading_ai2_gene_pane_ParamLimits

0xb414,	// (0x00027633) heading_ai2_gene_pane

0xb420,	// (0x0002763f) list_ai2_gene_pane_ParamLimits

0xb420,	// (0x0002763f) list_ai2_gene_pane

0xb4aa,	// (0x000276c9) cell_ai2_link_pane_ParamLimits

0xb4aa,	// (0x000276c9) cell_ai2_link_pane

0xb4c0,	// (0x000276df) cell_ai2_link_pane_g1

0x345c,	// (0x0001f67b) grid_highlight_pane_cp7

0x7212,	// (0x00023431) ai2_mp_volume_pane_g1

0xb593,	// (0x000277b2) ai2_mp_volume_pane_g2

0xb508,	// (0x00027727) list_ai2_gene_pane_t1

0xb59b,	// (0x000277ba) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0002bc1c) ai2_mp_volume_pane_g

0x721a,	// (0x00023439) volume_small_pane_cp3

0xb5a3,	// (0x000277c2) aid_size_cell_ai2_button

0xb5ab,	// (0x000277ca) grid_ai2_button_pane

0xb5b4,	// (0x000277d3) cell_ai2_button_pane_ParamLimits

0xb5b4,	// (0x000277d3) cell_ai2_button_pane

0x3452,	// (0x0001f671) cell_ai2_button_pane_g1

0x345c,	// (0x0001f67b) grid_highlight_pane_cp8

0xb553,	// (0x00027772) ai2_gene_pane_t1_ParamLimits

0xb553,	// (0x00027772) ai2_gene_pane_t1

0x8e38,	// (0x00025057) aid_height_parent_landscape

0xae24,	// (0x00027043) aid_height_set_list

0xae35,	// (0x00027054) aid_size_parent

0xb19b,	// (0x000273ba) aid_size_cell_graphic_pane_ParamLimits

0xb430,	// (0x0002764f) popup_ai2_data_window_g1_ParamLimits

0xb430,	// (0x0002764f) popup_ai2_data_window_g1

0xb43c,	// (0x0002765b) ai2_news_ticker_pane_g1

0xb444,	// (0x00027663) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x0002bc08) ai2_news_ticker_pane_g

0xb44c,	// (0x0002766b) ai2_news_ticker_pane_t1

0xb45a,	// (0x00027679) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0002bc0d) ai2_news_ticker_pane_t

0xb4c9,	// (0x000276e8) heading_ai2_gene_pane_g1

0xb4d1,	// (0x000276f0) heading_ai2_gene_pane_t1_ParamLimits

0xb4d1,	// (0x000276f0) heading_ai2_gene_pane_t1

0xb4e6,	// (0x00027705) list_highlight_pane_cp6

0xb4ee,	// (0x0002770d) ai2_gene_pane_ParamLimits

0xb4ee,	// (0x0002770d) ai2_gene_pane

0xb516,	// (0x00027735) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x0002bc12) list_ai2_gene_pane_t

0xb524,	// (0x00027743) list_highlight_pane_cp8_ParamLimits

0xb524,	// (0x00027743) list_highlight_pane_cp8

0xb535,	// (0x00027754) ai2_gene_pane_g1_ParamLimits

0xb535,	// (0x00027754) ai2_gene_pane_g1

0xb547,	// (0x00027766) ai2_gene_pane_g2_ParamLimits

0xb547,	// (0x00027766) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x0002bc17) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x0002bc17) ai2_gene_pane_g

0x7e66,	// (0x00024085) scroll_pane_cp12

0x6dea,	// (0x00023009) control_pane_t3_ParamLimits

0x6dea,	// (0x00023009) control_pane_t3

0x8db5,	// (0x00024fd4) status_small_pane_g8_ParamLimits

0x8db5,	// (0x00024fd4) status_small_pane_g8

0x903e,	// (0x0002525d) popup_find_window_ParamLimits

0x9269,	// (0x00025488) popup_note_image_window_ParamLimits

0x5356,	// (0x00021575) list_double2_graphic_pane_vc_g1_ParamLimits

0x5356,	// (0x00021575) list_double2_graphic_pane_vc_g1

0x5362,	// (0x00021581) list_double2_graphic_pane_vc_g2_ParamLimits

0x5362,	// (0x00021581) list_double2_graphic_pane_vc_g2

0x536e,	// (0x0002158d) list_double2_graphic_pane_vc_g3_ParamLimits

0x536e,	// (0x0002158d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0002b9f5) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0002b9f5) list_double2_graphic_pane_vc_g

0x537a,	// (0x00021599) list_double2_graphic_pane_vc_t1_ParamLimits

0x537a,	// (0x00021599) list_double2_graphic_pane_vc_t1

0x52f6,	// (0x00021515) list_single_heading_pane_vc_g1_ParamLimits

0x52f6,	// (0x00021515) list_single_heading_pane_vc_g1

0x5302,	// (0x00021521) list_single_heading_pane_vc_g2_ParamLimits

0x5302,	// (0x00021521) list_single_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002ba16) list_single_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002ba16) list_single_heading_pane_vc_g

0x5390,	// (0x000215af) list_single_heading_pane_vc_t1_ParamLimits

0x5390,	// (0x000215af) list_single_heading_pane_vc_t1

0x53a6,	// (0x000215c5) list_single_heading_pane_vc_t2_ParamLimits

0x53a6,	// (0x000215c5) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0002ba1b) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0002ba1b) list_single_heading_pane_vc_t

0x9a44,	// (0x00025c63) list_setting_number_pane_vc_g1_ParamLimits

0x9a44,	// (0x00025c63) list_setting_number_pane_vc_g1

0x9a50,	// (0x00025c6f) list_setting_number_pane_vc_g2_ParamLimits

0x9a50,	// (0x00025c6f) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0002ba20) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0002ba20) list_setting_number_pane_vc_g

0x9a5c,	// (0x00025c7b) list_setting_number_pane_vc_t1_ParamLimits

0x9a5c,	// (0x00025c7b) list_setting_number_pane_vc_t1

0x9a70,	// (0x00025c8f) list_setting_number_pane_vc_t2_ParamLimits

0x9a70,	// (0x00025c8f) list_setting_number_pane_vc_t2

0x9a8c,	// (0x00025cab) list_setting_number_pane_vc_t3_ParamLimits

0x9a8c,	// (0x00025cab) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0002ba25) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0002ba25) list_setting_number_pane_vc_t

0x9ab4,	// (0x00025cd3) set_value_pane_vc_ParamLimits

0x9ab4,	// (0x00025cd3) set_value_pane_vc

0x546d,	// (0x0002168c) list_double2_graphic_pane_vc_ParamLimits

0x546d,	// (0x0002168c) list_double2_graphic_pane_vc

0xb019,	// (0x00027238) list_double2_large_graphic_pane_vc_ParamLimits

0xb019,	// (0x00027238) list_double2_large_graphic_pane_vc

0x546d,	// (0x0002168c) list_double2_pane_vc_ParamLimits

0x546d,	// (0x0002168c) list_double2_pane_vc

0x546d,	// (0x0002168c) list_double_graphic_heading_pane_vc_ParamLimits

0x546d,	// (0x0002168c) list_double_graphic_heading_pane_vc

0x546d,	// (0x0002168c) list_double_graphic_pane_vc_ParamLimits

0x546d,	// (0x0002168c) list_double_graphic_pane_vc

0x546d,	// (0x0002168c) list_double_heading_pane_vc_ParamLimits

0x546d,	// (0x0002168c) list_double_heading_pane_vc

0xb019,	// (0x00027238) list_double_large_graphic_pane_vc_ParamLimits

0xb019,	// (0x00027238) list_double_large_graphic_pane_vc

0x546d,	// (0x0002168c) list_double_number_pane_vc_ParamLimits

0x546d,	// (0x0002168c) list_double_number_pane_vc

0x546d,	// (0x0002168c) list_double_pane_vc_ParamLimits

0x546d,	// (0x0002168c) list_double_pane_vc

0x546d,	// (0x0002168c) list_double_time_pane_vc_ParamLimits

0x546d,	// (0x0002168c) list_double_time_pane_vc

0x546d,	// (0x0002168c) list_setting_number_pane_vc_ParamLimits

0x546d,	// (0x0002168c) list_setting_number_pane_vc

0x546d,	// (0x0002168c) list_setting_pane_vc_ParamLimits

0x546d,	// (0x0002168c) list_setting_pane_vc

0x546d,	// (0x0002168c) list_single_graphic_heading_pane_vc_ParamLimits

0x546d,	// (0x0002168c) list_single_graphic_heading_pane_vc

0x546d,	// (0x0002168c) list_single_heading_pane_vc_ParamLimits

0x546d,	// (0x0002168c) list_single_heading_pane_vc

0xb041,	// (0x00027260) list_single_number_heading_pane_vc_ParamLimits

0xb041,	// (0x00027260) list_single_number_heading_pane_vc

0x5356,	// (0x00021575) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5356,	// (0x00021575) list_double_graphic_heading_pane_vc_g1

0x52f6,	// (0x00021515) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x52f6,	// (0x00021515) list_double_graphic_heading_pane_vc_g2

0x5302,	// (0x00021521) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5302,	// (0x00021521) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x0002bc23) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0002bc23) list_double_graphic_heading_pane_vc_g

0x54b2,	// (0x000216d1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x54b2,	// (0x000216d1) list_double_graphic_heading_pane_vc_t1

0x5390,	// (0x000215af) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5390,	// (0x000215af) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x0002bc2a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x0002bc2a) list_double_graphic_heading_pane_vc_t

0x9a44,	// (0x00025c63) list_setting_pane_vc_g1_ParamLimits

0x9a44,	// (0x00025c63) list_setting_pane_vc_g1

0x9a50,	// (0x00025c6f) list_setting_pane_vc_g2_ParamLimits

0x9a50,	// (0x00025c6f) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0002ba20) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0002ba20) list_setting_pane_vc_g

0xb7f0,	// (0x00027a0f) list_setting_pane_vc_t1_ParamLimits

0xb7f0,	// (0x00027a0f) list_setting_pane_vc_t1

0xb804,	// (0x00027a23) list_setting_pane_vc_t2_ParamLimits

0xb804,	// (0x00027a23) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0002bc58) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0002bc58) list_setting_pane_vc_t

0x9ab4,	// (0x00025cd3) set_value_pane_cp_vc_ParamLimits

0x9ab4,	// (0x00025cd3) set_value_pane_cp_vc

0x52f6,	// (0x00021515) list_single_number_heading_pane_vc_g1_ParamLimits

0x52f6,	// (0x00021515) list_single_number_heading_pane_vc_g1

0x5302,	// (0x00021521) list_single_number_heading_pane_vc_g2_ParamLimits

0x5302,	// (0x00021521) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002ba16) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002ba16) list_single_number_heading_pane_vc_g

0x5390,	// (0x000215af) list_single_number_heading_pane_vc_t1_ParamLimits

0x5390,	// (0x000215af) list_single_number_heading_pane_vc_t1

0x54c6,	// (0x000216e5) list_single_number_heading_pane_vc_t2_ParamLimits

0x54c6,	// (0x000216e5) list_single_number_heading_pane_vc_t2

0x54da,	// (0x000216f9) list_single_number_heading_pane_vc_t3_ParamLimits

0x54da,	// (0x000216f9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0002bc5d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002bc5d) list_single_number_heading_pane_vc_t

0x5356,	// (0x00021575) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5356,	// (0x00021575) list_single_graphic_heading_pane_vc_g1

0x52f6,	// (0x00021515) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x52f6,	// (0x00021515) list_single_graphic_heading_pane_vc_g4

0x5302,	// (0x00021521) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5302,	// (0x00021521) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x0002bc23) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0002bc23) list_single_graphic_heading_pane_vc_g

0x5390,	// (0x000215af) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5390,	// (0x000215af) list_single_graphic_heading_pane_vc_t1

0x54ec,	// (0x0002170b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x54ec,	// (0x0002170b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0002bc64) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0002bc64) list_single_graphic_heading_pane_vc_t

0x52f6,	// (0x00021515) list_double2_pane_vc_g1_ParamLimits

0x52f6,	// (0x00021515) list_double2_pane_vc_g1

0x5302,	// (0x00021521) list_double2_pane_vc_g2_ParamLimits

0x5302,	// (0x00021521) list_double2_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002ba16) list_double2_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002ba16) list_double2_pane_vc_g

0x5500,	// (0x0002171f) list_double2_pane_vc_t1_ParamLimits

0x5500,	// (0x0002171f) list_double2_pane_vc_t1

0x5516,	// (0x00021735) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5516,	// (0x00021735) list_double2_large_graphic_pane_vc_g1

0x5522,	// (0x00021741) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5522,	// (0x00021741) list_double2_large_graphic_pane_vc_g2

0x552e,	// (0x0002174d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x552e,	// (0x0002174d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4a,	// (0x0002bc69) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x0002bc69) list_double2_large_graphic_pane_vc_g

0x553a,	// (0x00021759) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x553a,	// (0x00021759) list_double2_large_graphic_pane_vc_t1

0x5550,	// (0x0002176f) list_double_time_pane_vc_g1_ParamLimits

0x5550,	// (0x0002176f) list_double_time_pane_vc_g1

0x555c,	// (0x0002177b) list_double_time_pane_vc_g2_ParamLimits

0x555c,	// (0x0002177b) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x0002bc70) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x0002bc70) list_double_time_pane_vc_g

0x5568,	// (0x00021787) list_double_time_pane_vc_t1_ParamLimits

0x5568,	// (0x00021787) list_double_time_pane_vc_t1

0x5581,	// (0x000217a0) list_double_time_pane_vc_t2_ParamLimits

0x5581,	// (0x000217a0) list_double_time_pane_vc_t2

0x55c1,	// (0x000217e0) list_double_time_pane_vc_t3_ParamLimits

0x55c1,	// (0x000217e0) list_double_time_pane_vc_t3

0x55d9,	// (0x000217f8) list_double_time_pane_vc_t4_ParamLimits

0x55d9,	// (0x000217f8) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x0002bc75) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x0002bc75) list_double_time_pane_vc_t

0x52f6,	// (0x00021515) list_double_pane_vc_g1_ParamLimits

0x52f6,	// (0x00021515) list_double_pane_vc_g1

0x5302,	// (0x00021521) list_double_pane_vc_g2_ParamLimits

0x5302,	// (0x00021521) list_double_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002ba16) list_double_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002ba16) list_double_pane_vc_g

0x55ed,	// (0x0002180c) list_double_pane_vc_t1_ParamLimits

0x55ed,	// (0x0002180c) list_double_pane_vc_t1

0x55ff,	// (0x0002181e) list_double_pane_vc_t2_ParamLimits

0x55ff,	// (0x0002181e) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x0002bc7e) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x0002bc7e) list_double_pane_vc_t

0x52f6,	// (0x00021515) list_double_number_pane_vc_g1_ParamLimits

0x52f6,	// (0x00021515) list_double_number_pane_vc_g1

0x5302,	// (0x00021521) list_double_number_pane_vc_g2_ParamLimits

0x5302,	// (0x00021521) list_double_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002ba16) list_double_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002ba16) list_double_number_pane_vc_g

0x5617,	// (0x00021836) list_double_number_pane_vc_t1_ParamLimits

0x5617,	// (0x00021836) list_double_number_pane_vc_t1

0x562b,	// (0x0002184a) list_double_number_pane_vc_t2_ParamLimits

0x562b,	// (0x0002184a) list_double_number_pane_vc_t2

0x55ff,	// (0x0002181e) list_double_number_pane_vc_t3_ParamLimits

0x55ff,	// (0x0002181e) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x0002bc83) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x0002bc83) list_double_number_pane_vc_t

0x563d,	// (0x0002185c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x563d,	// (0x0002185c) list_double_large_graphic_pane_vc_g1

0x5649,	// (0x00021868) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5649,	// (0x00021868) list_double_large_graphic_pane_vc_g2

0x552e,	// (0x0002174d) list_double_large_graphic_pane_vc_g3_ParamLimits

0x552e,	// (0x0002174d) list_double_large_graphic_pane_vc_g3

0x5658,	// (0x00021877) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5658,	// (0x00021877) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x0002bc8a) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0002bc8a) list_double_large_graphic_pane_vc_g

0x5664,	// (0x00021883) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5664,	// (0x00021883) list_double_large_graphic_pane_vc_t1

0x5676,	// (0x00021895) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5676,	// (0x00021895) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0002bc93) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0002bc93) list_double_large_graphic_pane_vc_t

0x52f6,	// (0x00021515) list_double_heading_pane_vc_g1_ParamLimits

0x52f6,	// (0x00021515) list_double_heading_pane_vc_g1

0x5302,	// (0x00021521) list_double_heading_pane_vc_g2_ParamLimits

0x5302,	// (0x00021521) list_double_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0002ba16) list_double_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0002ba16) list_double_heading_pane_vc_g

0x568f,	// (0x000218ae) list_double_heading_pane_vc_t1_ParamLimits

0x568f,	// (0x000218ae) list_double_heading_pane_vc_t1

0x5390,	// (0x000215af) list_double_heading_pane_vc_t2_ParamLimits

0x5390,	// (0x000215af) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x0002bc98) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0002bc98) list_double_heading_pane_vc_t

0x56a3,	// (0x000218c2) list_double_graphic_pane_vc_g1_ParamLimits

0x56a3,	// (0x000218c2) list_double_graphic_pane_vc_g1

0x56b3,	// (0x000218d2) list_double_graphic_pane_vc_g2_ParamLimits

0x56b3,	// (0x000218d2) list_double_graphic_pane_vc_g2

0x56c2,	// (0x000218e1) list_double_graphic_pane_vc_g3_ParamLimits

0x56c2,	// (0x000218e1) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x0002bc9d) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0002bc9d) list_double_graphic_pane_vc_g

0x56ce,	// (0x000218ed) list_double_graphic_pane_vc_t1_ParamLimits

0x56ce,	// (0x000218ed) list_double_graphic_pane_vc_t1

0x55ff,	// (0x0002181e) list_double_graphic_pane_vc_t2_ParamLimits

0x55ff,	// (0x0002181e) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0002bca4) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0002bca4) list_double_graphic_pane_vc_t

0x5b0d,	// (0x00021d2c) aid_size_cell_fastswap

0x5b15,	// (0x00021d34) aid_size_cell_touch_ParamLimits

0x5b15,	// (0x00021d34) aid_size_cell_touch

0x5d76,	// (0x00021f95) popup_fast_swap_wide_window_ParamLimits

0x5d76,	// (0x00021f95) popup_fast_swap_wide_window

0x5e8c,	// (0x000220ab) touch_pane_ParamLimits

0x5e8c,	// (0x000220ab) touch_pane

0x7ebc,	// (0x000240db) button_value_adjust_pane_cp2

0x7ebc,	// (0x000240db) button_value_adjust_pane_cp4

0x5016,	// (0x00021235) form_field_data_pane_cp2

0x503b,	// (0x0002125a) form_field_data_wide_pane_cp2

0x8355,	// (0x00024574) bg_scroll_pane_ParamLimits

0x69e3,	// (0x00022c02) scroll_handle_pane_ParamLimits

0x69f7,	// (0x00022c16) scroll_sc2_down_pane_ParamLimits

0x69f7,	// (0x00022c16) scroll_sc2_down_pane

0x8386,	// (0x000245a5) scroll_sc2_up_pane_ParamLimits

0x8386,	// (0x000245a5) scroll_sc2_up_pane

0xbc80,	// (0x00027e9f) grid_wheel_folder_pane_g1_ParamLimits

0xbc80,	// (0x00027e9f) grid_wheel_folder_pane_g1

0x6bc1,	// (0x00022de0) clock_nsta_pane_cp2_ParamLimits

0x6bc1,	// (0x00022de0) clock_nsta_pane_cp2

0x8b36,	// (0x00024d55) listscroll_midp_pane_ParamLimits

0x8b42,	// (0x00024d61) midp_canvas_pane

0x8e30,	// (0x0002504f) nsta_clock_indic_pane

0x8e86,	// (0x000250a5) listscroll_form_pane_vc

0x8ea2,	// (0x000250c1) listscroll_set_pane_vc_ParamLimits

0x8ea2,	// (0x000250c1) listscroll_set_pane_vc

0x95ba,	// (0x000257d9) clock_nsta_pane

0x9637,	// (0x00025856) indicator_nsta_pane

0x992e,	// (0x00025b4d) bg_popup_sub_pane_cp2_ParamLimits

0x9942,	// (0x00025b61) find_pane_cp2_ParamLimits

0x9942,	// (0x00025b61) find_pane_cp2

0x9958,	// (0x00025b77) grid_toobar_pane_ParamLimits

0x9ac2,	// (0x00025ce1) list_form_gen_pane_vc_ParamLimits

0x9ac2,	// (0x00025ce1) list_form_gen_pane_vc

0x9ad8,	// (0x00025cf7) scroll_pane_cp8_vc_ParamLimits

0x9ad8,	// (0x00025cf7) scroll_pane_cp8_vc

0x9b54,	// (0x00025d73) data_form_wide_pane_vc_ParamLimits

0x9b54,	// (0x00025d73) data_form_wide_pane_vc

0x9b60,	// (0x00025d7f) form_field_data_wide_pane_vc_g1

0x9b68,	// (0x00025d87) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b68,	// (0x00025d87) form_field_data_wide_pane_vc_t1

0x7ed0,	// (0x000240ef) input_focus_pane_cp6_vc_ParamLimits

0x7ed0,	// (0x000240ef) input_focus_pane_cp6_vc

0x9e42,	// (0x00026061) list_midp_pane_ParamLimits

0x9e4e,	// (0x0002606d) scroll_pane_cp16_ParamLimits

0x9e4e,	// (0x0002606d) scroll_pane_cp16

0x9e9c,	// (0x000260bb) button_value_adjust_pane_ParamLimits

0x9e9c,	// (0x000260bb) button_value_adjust_pane

0xae47,	// (0x00027066) button_value_adjust_pane_cp6_ParamLimits

0xae47,	// (0x00027066) button_value_adjust_pane_cp6

0xafa1,	// (0x000271c0) settings_code_pane_cp_ParamLimits

0xafa1,	// (0x000271c0) settings_code_pane_cp

0x3452,	// (0x0001f671) cell_touch_pane_g1

0x3452,	// (0x0001f671) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x0002b93e) cell_touch_pane_g

0xb5c6,	// (0x000277e5) cell_touch_pane_cp_ParamLimits

0xb5c6,	// (0x000277e5) cell_touch_pane_cp

0xb5d6,	// (0x000277f5) cell_touch_pane_ParamLimits

0xb5d6,	// (0x000277f5) cell_touch_pane

0x3452,	// (0x0001f671) scroll_sc2_down_pane_g1

0x3452,	// (0x0001f671) scroll_sc2_up_pane_g1

0x345c,	// (0x0001f67b) bg_set_opt_pane_cp4_vc

0xb5e7,	// (0x00027806) list_set_graphic_pane_vc_g1_ParamLimits

0xb5e7,	// (0x00027806) list_set_graphic_pane_vc_g1

0xb5f3,	// (0x00027812) list_set_graphic_pane_vc_g2_ParamLimits

0xb5f3,	// (0x00027812) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x0002bc2f) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x0002bc2f) list_set_graphic_pane_vc_g

0xb5ff,	// (0x0002781e) text_primary_small_cp13_vc_ParamLimits

0xb5ff,	// (0x0002781e) text_primary_small_cp13_vc

0xb617,	// (0x00027836) list_set_graphic_pane_vc_ParamLimits

0xb617,	// (0x00027836) list_set_graphic_pane_vc

0x345c,	// (0x0001f67b) input_focus_pane_cp2_vc

0x3452,	// (0x0001f671) setting_code_pane_vc_g1

0xb62b,	// (0x0002784a) setting_code_pane_vc_t1

0xb639,	// (0x00027858) set_text_pane_vc_t1_ParamLimits

0xb639,	// (0x00027858) set_text_pane_vc_t1

0x345c,	// (0x0001f67b) input_focus_pane_cp1_vc

0xb657,	// (0x00027876) list_set_text_pane_vc

0x3452,	// (0x0001f671) setting_text_pane_vc_g1

0x345c,	// (0x0001f67b) bg_set_opt_pane_cp2_vc

0xb661,	// (0x00027880) setting_slider_graphic_pane_vc_g1

0xb669,	// (0x00027888) setting_slider_graphic_pane_vc_t1

0xb677,	// (0x00027896) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0002bc34) setting_slider_graphic_pane_vc_t

0xb685,	// (0x000278a4) slider_set_pane_cp_vc

0xb68d,	// (0x000278ac) slider_set_pane_vc_g1

0xb696,	// (0x000278b5) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x0002bc39) slider_set_pane_vc_g

0x7f37,	// (0x00024156) set_opt_bg_pane_g1_copy1

0x7f3f,	// (0x0002415e) set_opt_bg_pane_g2_copy1

0xb6c2,	// (0x000278e1) set_opt_bg_pane_g3_copy1

0x7f4f,	// (0x0002416e) set_opt_bg_pane_g4_copy1

0x7f57,	// (0x00024176) set_opt_bg_pane_g5_copy1

0x7f5f,	// (0x0002417e) set_opt_bg_pane_g6_copy1

0xb6cc,	// (0x000278eb) set_opt_bg_pane_g7_copy1

0xb6d6,	// (0x000278f5) set_opt_bg_pane_g8_copy1

0xb6e0,	// (0x000278ff) set_opt_bg_pane_g9_copy1

0x345c,	// (0x0001f67b) bg_set_opt_pane_cp_vc

0xb6ea,	// (0x00027909) setting_slider_pane_vc_t1

0xb669,	// (0x00027888) setting_slider_pane_vc_t2

0xb677,	// (0x00027896) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x0002bc48) setting_slider_pane_vc_t

0xb685,	// (0x000278a4) slider_set_pane_vc

0x6f54,	// (0x00023173) volume_set_pane_vc_g1

0x6f5d,	// (0x0002317c) volume_set_pane_vc_g2

0x6f66,	// (0x00023185) volume_set_pane_vc_g3

0x6f6f,	// (0x0002318e) volume_set_pane_vc_g4

0x6f78,	// (0x00023197) volume_set_pane_vc_g5

0x6f81,	// (0x000231a0) volume_set_pane_vc_g6

0x6f8a,	// (0x000231a9) volume_set_pane_vc_g7

0x6f93,	// (0x000231b2) volume_set_pane_vc_g8

0x6f9c,	// (0x000231bb) volume_set_pane_vc_g9

0x6fa5,	// (0x000231c4) volume_set_pane_vc_g10

0x0009,

0xf8c7,	// (0x0002bae6) volume_set_pane_vc_g

0xb6f9,	// (0x00027918) volume_set_pane_vc

0xb701,	// (0x00027920) button_value_adjust_pane_cp1_vc

0xb70b,	// (0x0002792a) list_highlight_pane_cp2_vc

0xb714,	// (0x00027933) list_set_pane_vc_ParamLimits

0xb714,	// (0x00027933) list_set_pane_vc

0xb77e,	// (0x0002799d) main_pane_set_vc_t1_ParamLimits

0xb77e,	// (0x0002799d) main_pane_set_vc_t1

0xb793,	// (0x000279b2) main_pane_set_vc_t2_ParamLimits

0xb793,	// (0x000279b2) main_pane_set_vc_t2

0xb7a5,	// (0x000279c4) main_pane_set_vc_t3_ParamLimits

0xb7a5,	// (0x000279c4) main_pane_set_vc_t3

0xb7b9,	// (0x000279d8) main_pane_set_vc_t4_ParamLimits

0xb7b9,	// (0x000279d8) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0002bc4f) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0002bc4f) main_pane_set_vc_t

0xb7cd,	// (0x000279ec) setting_code_pane_vc_ParamLimits

0xb7cd,	// (0x000279ec) setting_code_pane_vc

0xb7de,	// (0x000279fd) setting_slider_graphic_pane_vc

0xb7de,	// (0x000279fd) setting_slider_pane_vc

0xb7de,	// (0x000279fd) setting_text_pane_vc

0xb7de,	// (0x000279fd) setting_volume_pane_vc

0xb7e8,	// (0x00027a07) scroll_pane_cp121_vc

0x7eaa,	// (0x000240c9) set_content_pane_vc

0xb826,	// (0x00027a45) button_value_adjust_pane_g1

0xb82f,	// (0x00027a4e) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x0002bca9) button_value_adjust_pane_g

0xb838,	// (0x00027a57) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb838,	// (0x00027a57) form_field_slider_wide_pane_vc_t1

0xb84c,	// (0x00027a6b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb84c,	// (0x00027a6b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x0002bcae) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0002bcae) form_field_slider_wide_pane_vc_t

0x62ce,	// (0x000224ed) input_focus_pane_cp10_vc_ParamLimits

0x62ce,	// (0x000224ed) input_focus_pane_cp10_vc

0xb85e,	// (0x00027a7d) slider_cont_pane_cp1_vc_ParamLimits

0xb85e,	// (0x00027a7d) slider_cont_pane_cp1_vc

0xb68d,	// (0x000278ac) slider_form_pane_g1_cp2

0xb696,	// (0x000278b5) slider_form_pane_g2_cp2

0xb877,	// (0x00027a96) form_field_slider_pane_vc_t3

0xb885,	// (0x00027aa4) form_field_slider_pane_vc_t4

0xb893,	// (0x00027ab2) slider_form_pane_vc_ParamLimits

0xb893,	// (0x00027ab2) slider_form_pane_vc

0xb8a0,	// (0x00027abf) form_field_slider_pane_vc_t1_ParamLimits

0xb8a0,	// (0x00027abf) form_field_slider_pane_vc_t1

0xb84c,	// (0x00027a6b) form_field_slider_pane_vc_t2_ParamLimits

0xb84c,	// (0x00027a6b) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0002bcbe) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0002bcbe) form_field_slider_pane_vc_t

0x62ce,	// (0x000224ed) input_focus_pane_cp9_vc_ParamLimits

0x62ce,	// (0x000224ed) input_focus_pane_cp9_vc

0xb8bc,	// (0x00027adb) slider_cont_pane_vc_ParamLimits

0xb8bc,	// (0x00027adb) slider_cont_pane_vc

0xb8ce,	// (0x00027aed) list_form_graphic_pane_cp_vc_ParamLimits

0xb8ce,	// (0x00027aed) list_form_graphic_pane_cp_vc

0x9b60,	// (0x00025d7f) form_field_popup_wide_pane_vc_g1

0xb8e3,	// (0x00027b02) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb8e3,	// (0x00027b02) form_field_popup_wide_pane_vc_t1

0x7ed0,	// (0x000240ef) input_focus_pane_cp8_vc_ParamLimits

0x7ed0,	// (0x000240ef) input_focus_pane_cp8_vc

0xb8fa,	// (0x00027b19) list_form_wide_pane_vc_ParamLimits

0xb8fa,	// (0x00027b19) list_form_wide_pane_vc

0xb906,	// (0x00027b25) list_form_graphic_pane_vc_g1

0xb90e,	// (0x00027b2d) list_form_graphic_pane_vc_t1_ParamLimits

0xb90e,	// (0x00027b2d) list_form_graphic_pane_vc_t1

0x5fc2,	// (0x000221e1) list_highlight_pane_cp5_vc_ParamLimits

0x5fc2,	// (0x000221e1) list_highlight_pane_cp5_vc

0xb92a,	// (0x00027b49) list_form_graphic_pane_vc_ParamLimits

0xb92a,	// (0x00027b49) list_form_graphic_pane_vc

0x9b60,	// (0x00025d7f) form_field_popup_pane_vc_g1

0xb940,	// (0x00027b5f) form_field_popup_pane_vc_t1_ParamLimits

0xb940,	// (0x00027b5f) form_field_popup_pane_vc_t1

0x7ed0,	// (0x000240ef) input_focus_pane_cp7_vc_ParamLimits

0x7ed0,	// (0x000240ef) input_focus_pane_cp7_vc

0xb957,	// (0x00027b76) list_form_pane_vc_ParamLimits

0xb957,	// (0x00027b76) list_form_pane_vc

0xb963,	// (0x00027b82) data_form_pane_vc_t1_ParamLimits

0xb963,	// (0x00027b82) data_form_pane_vc_t1

0x7f37,	// (0x00024156) input_focus_pane_vc_g1

0x7f3f,	// (0x0002415e) input_focus_pane_vc_g2

0x7f47,	// (0x00024166) input_focus_pane_vc_g3

0x7f4f,	// (0x0002416e) input_focus_pane_vc_g4

0x7f57,	// (0x00024176) input_focus_pane_vc_g5

0x7f5f,	// (0x0002417e) input_focus_pane_vc_g6

0x7f67,	// (0x00024186) input_focus_pane_vc_g7

0x7f6f,	// (0x0002418e) input_focus_pane_vc_g8

0x7f77,	// (0x00024196) input_focus_pane_vc_g9

0x3452,	// (0x0001f671) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x0002b8c7) input_focus_pane_vc_g

0x9b54,	// (0x00025d73) data_form_pane_vc_ParamLimits

0x9b54,	// (0x00025d73) data_form_pane_vc

0x9b60,	// (0x00025d7f) form_field_data_pane_vc_g1

0xb980,	// (0x00027b9f) form_field_data_pane_vc_t1_ParamLimits

0xb980,	// (0x00027b9f) form_field_data_pane_vc_t1

0x7ed0,	// (0x000240ef) input_focus_pane_vc_ParamLimits

0x7ed0,	// (0x000240ef) input_focus_pane_vc

0xb99a,	// (0x00027bb9) button_value_adjust_pane_cp3_vc

0xb9a2,	// (0x00027bc1) button_value_adjust_pane_cp5_vc

0xb9aa,	// (0x00027bc9) form_field_data_pane_vc_ParamLimits

0xb9aa,	// (0x00027bc9) form_field_data_pane_vc

0xb9c5,	// (0x00027be4) form_field_data_pane_vc_cp2

0xb9cd,	// (0x00027bec) form_field_data_wide_pane_vc_ParamLimits

0xb9cd,	// (0x00027bec) form_field_data_wide_pane_vc

0xb9e7,	// (0x00027c06) form_field_data_wide_pane_vc_cp2

0xb9ef,	// (0x00027c0e) form_field_popup_pane_vc_ParamLimits

0xb9ef,	// (0x00027c0e) form_field_popup_pane_vc

0xba0a,	// (0x00027c29) form_field_popup_wide_pane_vc_ParamLimits

0xba0a,	// (0x00027c29) form_field_popup_wide_pane_vc

0xba24,	// (0x00027c43) form_field_slider_pane_vc_ParamLimits

0xba24,	// (0x00027c43) form_field_slider_pane_vc

0xba37,	// (0x00027c56) form_field_slider_wide_pane_vc_ParamLimits

0xba37,	// (0x00027c56) form_field_slider_wide_pane_vc

0xba4a,	// (0x00027c69) grid_touch_1_pane_ParamLimits

0xba4a,	// (0x00027c69) grid_touch_1_pane

0xba56,	// (0x00027c75) grid_touch_2_pane_ParamLimits

0xba56,	// (0x00027c75) grid_touch_2_pane

0x8dfb,	// (0x0002501a) touch_pane_g1_ParamLimits

0x8dfb,	// (0x0002501a) touch_pane_g1

0xba70,	// (0x00027c8f) cell_app_pane_cp_wide_ParamLimits

0xba70,	// (0x00027c8f) cell_app_pane_cp_wide

0xba81,	// (0x00027ca0) grid_popup_fast_wide_pane_ParamLimits

0xba81,	// (0x00027ca0) grid_popup_fast_wide_pane

0xba95,	// (0x00027cb4) scroll_pane_cp19_ParamLimits

0xba95,	// (0x00027cb4) scroll_pane_cp19

0x345c,	// (0x0001f67b) bg_popup_window_pane_cp20

0xbaa9,	// (0x00027cc8) listscroll_popup_fast_wide_pane

0x5fc2,	// (0x000221e1) grid_indicator_nsta_pane

0xbab1,	// (0x00027cd0) clock_nsta_pane_g1

0xbaba,	// (0x00027cd9) clock_nsta_pane_t1

0xbad6,	// (0x00027cf5) cell_indicator_nsta_pane_ParamLimits

0xbad6,	// (0x00027cf5) cell_indicator_nsta_pane

0xbb0e,	// (0x00027d2d) cell_indicator_nsta_pane_g1

0xbb1c,	// (0x00027d3b) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0002bcc8) cell_indicator_nsta_pane_g

0xbb31,	// (0x00027d50) clock_nsta_pane_cp

0xbb39,	// (0x00027d58) indicator_nsta_pane_cp

0xbb41,	// (0x00027d60) nsta_clock_indic_pane_g1

0x611e,	// (0x0002233d) grid_indicator_pane

0x8478,	// (0x00024697) scroll_pane_cp29

0x6b0d,	// (0x00022d2c) indicator_nsta_pane_cp2_ParamLimits

0x6b0d,	// (0x00022d2c) indicator_nsta_pane_cp2

0x5fc2,	// (0x000221e1) main_apps_wheel_pane

0x9d1f,	// (0x00025f3e) form_midp_field_text_pane_ParamLimits

0x9e6e,	// (0x0002608d) scroll_bar_cp050_ParamLimits

0xbbaa,	// (0x00027dc9) cell_indicator_pane_ParamLimits

0xbbaa,	// (0x00027dc9) cell_indicator_pane

0xbbc2,	// (0x00027de1) cell_indicator_pane_g1

0xbbcc,	// (0x00027deb) grid_wheel_folder_pane_ParamLimits

0xbbcc,	// (0x00027deb) grid_wheel_folder_pane

0xbbe0,	// (0x00027dff) list_wheel_apps_pane_ParamLimits

0xbbe0,	// (0x00027dff) list_wheel_apps_pane

0xbbf3,	// (0x00027e12) main_apps_wheel_pane_g1_ParamLimits

0xbbf3,	// (0x00027e12) main_apps_wheel_pane_g1

0xbc0f,	// (0x00027e2e) main_apps_wheel_pane_g2_ParamLimits

0xbc0f,	// (0x00027e2e) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0002bce4) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0002bce4) main_apps_wheel_pane_g

0xbc2b,	// (0x00027e4a) main_apps_wheel_pane_t1_ParamLimits

0xbc2b,	// (0x00027e4a) main_apps_wheel_pane_t1

0xbc54,	// (0x00027e73) list_wheel_apps_pane_g1

0xbc5c,	// (0x00027e7b) list_wheel_apps_pane_g2

0xbc64,	// (0x00027e83) list_wheel_apps_pane_g3

0xbc6c,	// (0x00027e8b) list_wheel_apps_pane_g4

0xbc76,	// (0x00027e95) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0002bce9) list_wheel_apps_pane_g

0x89aa,	// (0x00024bc9) navi_icon_text_pane

0x94e7,	// (0x00025706) aid_fill_nsta

0xbc97,	// (0x00027eb6) navi_icon_text_pane_g1

0xbca6,	// (0x00027ec5) navi_icon_text_pane_t1

0x8840,	// (0x00024a5f) list_set_graphic_pane_t1_ParamLimits

0x8840,	// (0x00024a5f) list_set_graphic_pane_t1

0xa5bf,	// (0x000267de) popup_midp_note_alarm_window_t6_ParamLimits

0xa5bf,	// (0x000267de) popup_midp_note_alarm_window_t6

0xa5d1,	// (0x000267f0) popup_midp_note_alarm_window_t7_ParamLimits

0xa5d1,	// (0x000267f0) popup_midp_note_alarm_window_t7

0xa5e3,	// (0x00026802) popup_midp_note_alarm_window_t8_ParamLimits

0xa5e3,	// (0x00026802) popup_midp_note_alarm_window_t8

0xa5f5,	// (0x00026814) popup_midp_note_alarm_window_t9_ParamLimits

0xa5f5,	// (0x00026814) popup_midp_note_alarm_window_t9

0xa607,	// (0x00026826) popup_midp_note_alarm_window_t10_ParamLimits

0xa607,	// (0x00026826) popup_midp_note_alarm_window_t10

0xa619,	// (0x00026838) popup_midp_note_alarm_window_t11_ParamLimits

0xa619,	// (0x00026838) popup_midp_note_alarm_window_t11

0xa62b,	// (0x0002684a) scroll_pane_cp17_ParamLimits

0xa62b,	// (0x0002684a) scroll_pane_cp17

0x6f54,	// (0x00023173) volume_small_pane_cp_g1

0x7223,	// (0x00023442) volume_small_pane_cp_g2

0x722c,	// (0x0002344b) volume_small_pane_cp_g3

0x7235,	// (0x00023454) volume_small_pane_cp_g4

0x723e,	// (0x0002345d) volume_small_pane_cp_g5

0x7247,	// (0x00023466) volume_small_pane_cp_g6

0x7250,	// (0x0002346f) volume_small_pane_cp_g7

0x7259,	// (0x00023478) volume_small_pane_cp_g8

0x7262,	// (0x00023481) volume_small_pane_cp_g9

0x726b,	// (0x0002348a) volume_small_pane_cp_g10

0x8c0b,	// (0x00024e2a) midp_ticker_pane_g1_ParamLimits

0x8c17,	// (0x00024e36) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0002b98f) midp_ticker_pane_g_ParamLimits

0x8c23,	// (0x00024e42) midp_ticker_pane_t1_ParamLimits

0x94fd,	// (0x0002571c) aid_fill_nsta_2

0x9e5a,	// (0x00026079) list_form2_midp_pane

0xafe8,	// (0x00027207) midp_editing_number_pane_ParamLimits

0xaff7,	// (0x00027216) midp_ticker_pane_ParamLimits

0xbcbb,	// (0x00027eda) form2_midp_field_pane

0xbcdf,	// (0x00027efe) scroll_pane_cp51

0xbcff,	// (0x00027f1e) form2_midp_button_pane_ParamLimits

0xbcff,	// (0x00027f1e) form2_midp_button_pane

0xbd11,	// (0x00027f30) form2_midp_content_pane_ParamLimits

0xbd11,	// (0x00027f30) form2_midp_content_pane

0xbd2b,	// (0x00027f4a) form2_midp_field_choice_group_pane

0xbd33,	// (0x00027f52) form2_midp_field_pane_g1

0xbd3b,	// (0x00027f5a) form2_midp_field_pane_g2

0xbd43,	// (0x00027f62) form2_midp_field_pane_g3

0xbd4b,	// (0x00027f6a) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0002bd0e) form2_midp_field_pane_g

0xbd53,	// (0x00027f72) form2_midp_gauge_slider_pane

0xbd5b,	// (0x00027f7a) form2_midp_gauge_wait_pane

0xbd63,	// (0x00027f82) form2_midp_image_pane_ParamLimits

0xbd63,	// (0x00027f82) form2_midp_image_pane

0xbd7e,	// (0x00027f9d) form2_midp_label_pane_ParamLimits

0xbd7e,	// (0x00027f9d) form2_midp_label_pane

0xbd9d,	// (0x00027fbc) form2_midp_label_pane_cp_ParamLimits

0xbd9d,	// (0x00027fbc) form2_midp_label_pane_cp

0xbdbe,	// (0x00027fdd) form2_midp_string_pane_ParamLimits

0xbdbe,	// (0x00027fdd) form2_midp_string_pane

0x56e0,	// (0x000218ff) form2_midp_text_pane_ParamLimits

0x56e0,	// (0x000218ff) form2_midp_text_pane

0xbdd0,	// (0x00027fef) form2_midp_time_pane

0xbde0,	// (0x00027fff) input_focus_pane_cp51_ParamLimits

0xbde0,	// (0x00027fff) input_focus_pane_cp51

0xbdf8,	// (0x00028017) form2_midp_label_pane_t1_ParamLimits

0xbdf8,	// (0x00028017) form2_midp_label_pane_t1

0x5701,	// (0x00021920) form2_mdip_text_pane_t1_ParamLimits

0x5701,	// (0x00021920) form2_mdip_text_pane_t1

0x5725,	// (0x00021944) form2_midp_time_pane_t1

0xbe46,	// (0x00028065) form2_midp_gauge_slider_pane_t1

0xbe58,	// (0x00028077) form2_midp_gauge_slider_pane_t2

0xbe6a,	// (0x00028089) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0002bd17) form2_midp_gauge_slider_pane_t

0xbe7c,	// (0x0002809b) form2_midp_slider_pane

0xbe88,	// (0x000280a7) form2_midp_gauge_wait_pane_t1

0xbe96,	// (0x000280b5) form2_midp_wait_pane_ParamLimits

0xbe96,	// (0x000280b5) form2_midp_wait_pane

0x9b7f,	// (0x00025d9e) list_single_2graphic_pane_cp4_ParamLimits

0x9b7f,	// (0x00025d9e) list_single_2graphic_pane_cp4

0xbec1,	// (0x000280e0) list_single_midp_graphic_pane_cp_ParamLimits

0xbec1,	// (0x000280e0) list_single_midp_graphic_pane_cp

0x345c,	// (0x0001f67b) list_highlight_pane_cp20

0xbee5,	// (0x00028104) list_single_2graphic_pane_g1_cp4

0xb4c9,	// (0x000276e8) list_single_2graphic_pane_g2_cp4

0xbeed,	// (0x0002810c) list_single_2graphic_pane_t1_cp4

0x5fc2,	// (0x000221e1) list_highlight_pane_cp21

0xbefc,	// (0x0002811b) list_single_midp_graphic_pane_g4_cp

0xbf0b,	// (0x0002812a) list_single_midp_graphic_pane_t1_cp

0xbf20,	// (0x0002813f) form2_mdip_string_pane_t1_ParamLimits

0xbf20,	// (0x0002813f) form2_mdip_string_pane_t1

0x345c,	// (0x0001f67b) bg_wml_button_pane_cp2

0x3452,	// (0x0001f671) form2_midp_image_pane_g1

0x4d99,	// (0x00020fb8) list_double_large_graphic_pane_g5_ParamLimits

0x4d99,	// (0x00020fb8) list_double_large_graphic_pane_g5

0x8b36,	// (0x00024d55) midp_form_pane_ParamLimits

0x5fc2,	// (0x000221e1) main_apps_wheel_pane_ParamLimits

0x9291,	// (0x000254b0) popup_preview_window_ParamLimits

0x9291,	// (0x000254b0) popup_preview_window

0x9478,	// (0x00025697) popup_touch_info_window_ParamLimits

0x9478,	// (0x00025697) popup_touch_info_window

0x949a,	// (0x000256b9) popup_touch_menu_window_ParamLimits

0x949a,	// (0x000256b9) popup_touch_menu_window

0x3448,	// (0x0001f667) bg_popup_sub_pane_cp6

0xbfc5,	// (0x000281e4) list_touch_menu_pane

0xbfcd,	// (0x000281ec) list_single_touch_menu_pane_ParamLimits

0xbfcd,	// (0x000281ec) list_single_touch_menu_pane

0xbfe8,	// (0x00028207) list_single_touch_menu_pane_t1

0x5fc2,	// (0x000221e1) bg_popup_sub_pane_cp7_ParamLimits

0x5fc2,	// (0x000221e1) bg_popup_sub_pane_cp7

0xbff6,	// (0x00028215) heading_sub_pane

0xbffe,	// (0x0002821d) list_touch_info_pane_ParamLimits

0xbffe,	// (0x0002821d) list_touch_info_pane

0xc00d,	// (0x0002822c) list_single_touch_info_pane_ParamLimits

0xc00d,	// (0x0002822c) list_single_touch_info_pane

0xc01f,	// (0x0002823e) list_single_touch_info_pane_t1

0xc02d,	// (0x0002824c) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0002bd25) list_single_touch_info_pane_t

0x8b2e,	// (0x00024d4d) bg_popup_heading_pane_cp

0xc03b,	// (0x0002825a) heading_sub_pane_t1

0x9aee,	// (0x00025d0d) bg_popup_preview_window_pane_cp_ParamLimits

0x9aee,	// (0x00025d0d) bg_popup_preview_window_pane_cp

0xbff6,	// (0x00028215) heading_preview_pane

0xbffe,	// (0x0002821d) list_preview_pane_ParamLimits

0xbffe,	// (0x0002821d) list_preview_pane

0xc049,	// (0x00028268) popup_preview_window_g1

0xc00d,	// (0x0002822c) list_single_preview_pane_ParamLimits

0xc00d,	// (0x0002822c) list_single_preview_pane

0xc051,	// (0x00028270) list_single_preview_pane_g1

0xc059,	// (0x00028278) list_single_preview_pane_t1

0xc01f,	// (0x0002823e) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0002bd2a) list_single_preview_pane_t

0xc067,	// (0x00028286) bg_popup_heading_pane_cp2_ParamLimits

0xc067,	// (0x00028286) bg_popup_heading_pane_cp2

0xc07d,	// (0x0002829c) heading_preview_pane_g1

0xc085,	// (0x000282a4) heading_preview_pane_t1_ParamLimits

0xc085,	// (0x000282a4) heading_preview_pane_t1

0x6141,	// (0x00022360) soft_indicator_pane_t1_ParamLimits

0x7e43,	// (0x00024062) scroll_pane_ParamLimits

0x8374,	// (0x00024593) scroll_sc2_left_pane

0x837d,	// (0x0002459c) scroll_sc2_right_pane

0x839c,	// (0x000245bb) scroll_bg_pane_g1_ParamLimits

0x83b1,	// (0x000245d0) scroll_bg_pane_g2_ParamLimits

0x83c9,	// (0x000245e8) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x0002b91e) scroll_bg_pane_g_ParamLimits

0x839c,	// (0x000245bb) scroll_handle_pane_g1_ParamLimits

0x83eb,	// (0x0002460a) scroll_handle_pane_g2_ParamLimits

0x83c9,	// (0x000245e8) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x0002b925) scroll_handle_pane_g_ParamLimits

0x8edc,	// (0x000250fb) popup_choice_list_window_ParamLimits

0x8edc,	// (0x000250fb) popup_choice_list_window

0x993a,	// (0x00025b59) choice_list_pane

0x99c8,	// (0x00025be7) cell_toolbar_pane_t1

0x99f0,	// (0x00025c0f) toolbar_button_pane_ParamLimits

0xaafb,	// (0x00026d1a) ai_gene_pane_1_t2_ParamLimits

0xaafb,	// (0x00026d1a) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0002bb42) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0002bb42) ai_gene_pane_1_t

0xc0a2,	// (0x000282c1) scroll_sc2_left_pane_g1

0xc0a2,	// (0x000282c1) scroll_sc2_right_pane_g1

0x8eb4,	// (0x000250d3) bg_popup_sub_pane_cp10

0xc0ac,	// (0x000282cb) list_choice_list_pane

0xc0c3,	// (0x000282e2) list_single_choice_list_pane_ParamLimits

0xc0c3,	// (0x000282e2) list_single_choice_list_pane

0xc0d7,	// (0x000282f6) list_single_choice_list_pane_g1

0xc0df,	// (0x000282fe) list_single_choice_list_pane_t1_ParamLimits

0xc0df,	// (0x000282fe) list_single_choice_list_pane_t1

0xc0f4,	// (0x00028313) choice_list_pane_g1

0xc0fc,	// (0x0002831b) choice_list_pane_t1

0x3448,	// (0x0001f667) input_focus_pane_cp11

0x824e,	// (0x0002446d) title_pane_stacon_g2_ParamLimits

0x824e,	// (0x0002446d) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x0002b904) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0002b904) title_pane_stacon_g

0x8b2e,	// (0x00024d4d) cursor_press_pane

0x8f92,	// (0x000251b1) popup_fep_hwr_window_ParamLimits

0x8f92,	// (0x000251b1) popup_fep_hwr_window

0x901c,	// (0x0002523b) popup_fep_vkb_window_ParamLimits

0x901c,	// (0x0002523b) popup_fep_vkb_window

0xc10a,	// (0x00028329) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0002bd53) fep_vkb_side_pane_g_ParamLimits

0x729f,	// (0x000234be) fep_hwr_candidate_pane_ParamLimits

0x729f,	// (0x000234be) fep_hwr_candidate_pane

0x72c9,	// (0x000234e8) fep_hwr_side_pane_ParamLimits

0x72c9,	// (0x000234e8) fep_hwr_side_pane

0x72eb,	// (0x0002350a) fep_hwr_top_pane_ParamLimits

0x72eb,	// (0x0002350a) fep_hwr_top_pane

0x7303,	// (0x00023522) fep_hwr_write_pane_ParamLimits

0x7303,	// (0x00023522) fep_hwr_write_pane

0xfb34,	// (0x0002bd53) fep_vkb_side_pane_g

0xc112,	// (0x00028331) fep_hwr_top_pane_g1

0xc124,	// (0x00028343) fep_hwr_top_pane_g2

0x732f,	// (0x0002354e) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0002bd2f) fep_hwr_top_pane_g

0x7344,	// (0x00023563) fep_hwr_top_text_pane

0x8540,	// (0x0002475f) fep_hwr_top_text_pane_g1

0xc15a,	// (0x00028379) fep_hwr_top_text_pane_t1

0x744e,	// (0x0002366d) fep_hwr_candidate_pane_g1

0xc3a5,	// (0x000285c4) fep_vkb_keypad_pane_g3_ParamLimits

0xc3a5,	// (0x000285c4) fep_vkb_keypad_pane_g3

0xc3d1,	// (0x000285f0) fep_vkb_keypad_pane_g4_ParamLimits

0xc3d1,	// (0x000285f0) fep_vkb_keypad_pane_g4

0xc448,	// (0x00028667) fep_vkb_bottom_pane_g2_ParamLimits

0xc448,	// (0x00028667) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0002bd5a) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0002bd5a) fep_vkb_bottom_pane_g

0xc0a2,	// (0x000282c1) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0002bd64) cell_vkb_side_pane_g

0xc4d3,	// (0x000286f2) cell_vkb_side_pane_t1

0xc4e1,	// (0x00028700) cell_vkb_side_pane_t1_copy1

0xc0a2,	// (0x000282c1) bg_fep_vkb_candidate_pane_g2

0xc625,	// (0x00028844) cell_vkb_candidate_pane_ParamLimits

0xc168,	// (0x00028387) aid_size_cell_vkb_ParamLimits

0xc168,	// (0x00028387) aid_size_cell_vkb

0xc625,	// (0x00028844) cell_vkb_candidate_pane

0x7468,	// (0x00023687) bg_popup_fep_shadow_pane_g1

0xc1fa,	// (0x00028419) fep_vkb_bottom_pane_ParamLimits

0xc1fa,	// (0x00028419) fep_vkb_bottom_pane

0xc237,	// (0x00028456) fep_vkb_candidate_pane_ParamLimits

0xc237,	// (0x00028456) fep_vkb_candidate_pane

0xc253,	// (0x00028472) fep_vkb_keypad_pane_ParamLimits

0xc253,	// (0x00028472) fep_vkb_keypad_pane

0xc286,	// (0x000284a5) fep_vkb_side_pane_ParamLimits

0xc286,	// (0x000284a5) fep_vkb_side_pane

0xc2c2,	// (0x000284e1) fep_vkb_top_pane_ParamLimits

0xc2c2,	// (0x000284e1) fep_vkb_top_pane

0xc2fe,	// (0x0002851d) fep_vkb_top_pane_g1_ParamLimits

0xc2fe,	// (0x0002851d) fep_vkb_top_pane_g1

0xc30d,	// (0x0002852c) fep_vkb_top_pane_g2_ParamLimits

0xc30d,	// (0x0002852c) fep_vkb_top_pane_g2

0xc31c,	// (0x0002853b) fep_vkb_top_pane_g3_ParamLimits

0xc31c,	// (0x0002853b) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0002bd4a) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0002bd4a) fep_vkb_top_pane_g

0xc33a,	// (0x00028559) fep_vkb_top_text_pane_ParamLimits

0xc33a,	// (0x00028559) fep_vkb_top_text_pane

0xc34b,	// (0x0002856a) fep_vkb_side_pane_g1_ParamLimits

0xc34b,	// (0x0002856a) fep_vkb_side_pane_g1

0xc394,	// (0x000285b3) grid_vkb_side_pane_ParamLimits

0xc394,	// (0x000285b3) grid_vkb_side_pane

0x7470,	// (0x0002368f) bg_popup_fep_shadow_pane_g2

0x7479,	// (0x00023698) bg_popup_fep_shadow_pane_g3

0x7481,	// (0x000236a0) bg_popup_fep_shadow_pane_g4

0x748a,	// (0x000236a9) bg_popup_fep_shadow_pane_g5

0x7494,	// (0x000236b3) bg_popup_fep_shadow_pane_g6

0x749c,	// (0x000236bb) bg_popup_fep_shadow_pane_g7

0x7f57,	// (0x00024176) bg_popup_fep_shadow_pane_g8

0xc3f3,	// (0x00028612) grid_vkb_keypad_number_pane_ParamLimits

0xc3f3,	// (0x00028612) grid_vkb_keypad_number_pane

0xc407,	// (0x00028626) grid_vkb_keypad_pane_ParamLimits

0xc407,	// (0x00028626) grid_vkb_keypad_pane

0xc42d,	// (0x0002864c) fep_vkb_bottom_pane_g1_ParamLimits

0xc42d,	// (0x0002864c) fep_vkb_bottom_pane_g1

0xc456,	// (0x00028675) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc456,	// (0x00028675) grid_vkb_keypad_bottom_left_pane

0xc46b,	// (0x0002868a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc46b,	// (0x0002868a) grid_vkb_keypad_bottom_right_pane

0xc480,	// (0x0002869f) fep_vkb_top_text_pane_g1

0xc49b,	// (0x000286ba) fep_vkb_top_text_pane_t1

0xc4b0,	// (0x000286cf) cell_vkb_side_pane_ParamLimits

0xc4b0,	// (0x000286cf) cell_vkb_side_pane

0xc0a2,	// (0x000282c1) cell_vkb_side_pane_g1

0xc4ef,	// (0x0002870e) cell_vkb_keypad_pane_ParamLimits

0xc4ef,	// (0x0002870e) cell_vkb_keypad_pane

0xc57c,	// (0x0002879b) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0002bd77) bg_popup_fep_shadow_pane_g

0xc0a2,	// (0x000282c1) cell_hwr_side_pane_g1

0xc0a2,	// (0x000282c1) cell_hwr_side_pane_g2

0xc586,	// (0x000287a5) cell_vkb_keypad_pane_t1

0xc594,	// (0x000287b3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc594,	// (0x000287b3) cell_vkb_keypad_bottom_left_pane

0xc5b1,	// (0x000287d0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc5b1,	// (0x000287d0) cell_vkb_keypad_bottom_right_pane

0xc0a2,	// (0x000282c1) cell_vkb_keypad_bottom_left_pane_g1

0xc0a2,	// (0x000282c1) cell_vkb_keypad_bottom_right_pane_g1

0xc5ea,	// (0x00028809) cell_vkb_keypad_number_pane_ParamLimits

0xc5ea,	// (0x00028809) cell_vkb_keypad_number_pane

0xc609,	// (0x00028828) cell_vkb_keypad_number_pane_g1

0xc613,	// (0x00028832) cell_vkb_keypad_number_pane_g2

0xc61c,	// (0x0002883b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0002bd69) cell_vkb_keypad_number_pane_g

0xc586,	// (0x000287a5) cell_vkb_keypad_number_pane_t1

0xc646,	// (0x00028865) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x0002bd64) cell_hwr_side_pane_g

0xc65f,	// (0x0002887e) cell_hwr_side_pane_t1

0x74ae,	// (0x000236cd) cell_hwr_side_pane_t1_copy1

0xc32c,	// (0x0002854b) cell_hwr_candidate_pane_g1

0x74bc,	// (0x000236db) cell_hwr_candidate_pane_t1

0xc0a2,	// (0x000282c1) cell_vkb_candidate_pane_g2

0xc6e5,	// (0x00028904) cell_vkb_candidate_pane_t1

0xcab2,	// (0x00028cd1) bg_popup_fep_shadow_pane_ParamLimits

0xcab2,	// (0x00028cd1) bg_popup_fep_shadow_pane

0x12e7,	// (0x0001d506) bg_fep_hwr_top_pane_g4

0xc136,	// (0x00028355) bg_hwr_side_pane_g1_ParamLimits

0xc136,	// (0x00028355) bg_hwr_side_pane_g1

0x7382,	// (0x000235a1) cell_hwr_side_pane_ParamLimits

0x7382,	// (0x000235a1) cell_hwr_side_pane

0x73bf,	// (0x000235de) fep_hwr_write_pane_g1_ParamLimits

0x73bf,	// (0x000235de) fep_hwr_write_pane_g1

0x73cc,	// (0x000235eb) fep_hwr_write_pane_g2_ParamLimits

0x73cc,	// (0x000235eb) fep_hwr_write_pane_g2

0x73d9,	// (0x000235f8) fep_hwr_write_pane_g3_ParamLimits

0x73d9,	// (0x000235f8) fep_hwr_write_pane_g3

0x73e7,	// (0x00023606) fep_hwr_write_pane_g4_ParamLimits

0x73e7,	// (0x00023606) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0002bd36) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0002bd36) fep_hwr_write_pane_g

0x12e7,	// (0x0001d506) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x12e7,	// (0x0001d506) bg_fep_hwr_candidate_pane_g2

0x73fc,	// (0x0002361b) cell_hwr_candidate_pane_ParamLimits

0x73fc,	// (0x0002361b) cell_hwr_candidate_pane

0x744e,	// (0x0002366d) fep_hwr_candidate_pane_g1_ParamLimits

0xc196,	// (0x000283b5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc196,	// (0x000283b5) bg_popup_fep_shadow_pane_cp2

0xc32c,	// (0x0002854b) fep_vkb_top_pane_g4_ParamLimits

0xc32c,	// (0x0002854b) fep_vkb_top_pane_g4

0xc372,	// (0x00028591) fep_vkb_side_pane_g2_ParamLimits

0xc372,	// (0x00028591) fep_vkb_side_pane_g2

0x4f23,	// (0x00021142) list_setting_pane_t4_ParamLimits

0x4f23,	// (0x00021142) list_setting_pane_t4

0x4fbf,	// (0x000211de) list_setting_number_pane_t5_ParamLimits

0x4fbf,	// (0x000211de) list_setting_number_pane_t5

0x8582,	// (0x000247a1) list_double_heading_pane_cp2_ParamLimits

0x8582,	// (0x000247a1) list_double_heading_pane_cp2

0x7eea,	// (0x00024109) list_double_heading_pane_g1_cp2_ParamLimits

0x7eea,	// (0x00024109) list_double_heading_pane_g1_cp2

0x7ef6,	// (0x00024115) list_double_heading_pane_g2_cp2_ParamLimits

0x7ef6,	// (0x00024115) list_double_heading_pane_g2_cp2

0xc6f3,	// (0x00028912) list_double_heading_pane_t1_cp2_ParamLimits

0xc6f3,	// (0x00028912) list_double_heading_pane_t1_cp2

0xc709,	// (0x00028928) list_double_heading_pane_t2_cp2_ParamLimits

0xc709,	// (0x00028928) list_double_heading_pane_t2_cp2

0x3440,	// (0x0001f65f) aid_value_unit2

0x5dd4,	// (0x00021ff3) popup_preview_fixed_window

0x62dc,	// (0x000224fb) bg_popup_preview_window_pane_cp02

0xc71b,	// (0x0002893a) list_preview_fixed_pane

0xc761,	// (0x00028980) list_empty_pane_fp_ParamLimits

0xc761,	// (0x00028980) list_empty_pane_fp

0xc761,	// (0x00028980) list_single_cale_day_pane_fp_ParamLimits

0xc761,	// (0x00028980) list_single_cale_day_pane_fp

0xc761,	// (0x00028980) list_single_graphic_heading_pane_fp_ParamLimits

0xc761,	// (0x00028980) list_single_graphic_heading_pane_fp

0xc761,	// (0x00028980) list_single_graphic_pane_fp_ParamLimits

0xc761,	// (0x00028980) list_single_graphic_pane_fp

0xc761,	// (0x00028980) list_single_heading_pane_fp_ParamLimits

0xc761,	// (0x00028980) list_single_heading_pane_fp

0xc761,	// (0x00028980) list_single_pane_fp_ParamLimits

0xc761,	// (0x00028980) list_single_pane_fp

0xc77a,	// (0x00028999) list_single_pane_fp_g1_ParamLimits

0xc77a,	// (0x00028999) list_single_pane_fp_g1

0x5738,	// (0x00021957) list_single_pane_fp_g2_ParamLimits

0x5738,	// (0x00021957) list_single_pane_fp_g2

0x5744,	// (0x00021963) list_single_pane_fp_g3_ParamLimits

0x5744,	// (0x00021963) list_single_pane_fp_g3

0xc786,	// (0x000289a5) list_single_pane_fp_g4_ParamLimits

0xc786,	// (0x000289a5) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x0002bd98) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x0002bd98) list_single_pane_fp_g

0x5758,	// (0x00021977) list_single_pane_fp_t1_ParamLimits

0x5758,	// (0x00021977) list_single_pane_fp_t1

0x576f,	// (0x0002198e) list_single_graphic_pane_fp_g1_ParamLimits

0x576f,	// (0x0002198e) list_single_graphic_pane_fp_g1

0xc77a,	// (0x00028999) list_single_graphic_pane_fp_g2_ParamLimits

0xc77a,	// (0x00028999) list_single_graphic_pane_fp_g2

0x5738,	// (0x00021957) list_single_graphic_pane_fp_g3_ParamLimits

0x5738,	// (0x00021957) list_single_graphic_pane_fp_g3

0x5744,	// (0x00021963) list_single_graphic_pane_fp_g4_ParamLimits

0x5744,	// (0x00021963) list_single_graphic_pane_fp_g4

0xc786,	// (0x000289a5) list_single_graphic_pane_fp_g5_ParamLimits

0xc786,	// (0x000289a5) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x0002bda1) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x0002bda1) list_single_graphic_pane_fp_g

0x577b,	// (0x0002199a) list_single_graphic_pane_fp_t1_ParamLimits

0x577b,	// (0x0002199a) list_single_graphic_pane_fp_t1

0x576f,	// (0x0002198e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x576f,	// (0x0002198e) list_single_graphic_heading_pane_fp_g1

0xc77a,	// (0x00028999) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc77a,	// (0x00028999) list_single_graphic_heading_pane_fp_g2

0x5738,	// (0x00021957) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5738,	// (0x00021957) list_single_graphic_heading_pane_fp_g3

0x5744,	// (0x00021963) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5744,	// (0x00021963) list_single_graphic_heading_pane_fp_g4

0xc786,	// (0x000289a5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc786,	// (0x000289a5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002bda1) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002bda1) list_single_graphic_heading_pane_fp_g

0x5791,	// (0x000219b0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5791,	// (0x000219b0) list_single_graphic_heading_pane_fp_t1

0x57a7,	// (0x000219c6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x57a7,	// (0x000219c6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x0002bdac) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x0002bdac) list_single_graphic_heading_pane_fp_t

0x57b9,	// (0x000219d8) list_single_cale_day_pane_fp_g1_ParamLimits

0x57b9,	// (0x000219d8) list_single_cale_day_pane_fp_g1

0xc792,	// (0x000289b1) list_single_cale_day_pane_fp_g2_ParamLimits

0xc792,	// (0x000289b1) list_single_cale_day_pane_fp_g2

0x57f1,	// (0x00021a10) list_single_cale_day_pane_fp_g3_ParamLimits

0x57f1,	// (0x00021a10) list_single_cale_day_pane_fp_g3

0x5819,	// (0x00021a38) list_single_cale_day_pane_fp_g4_ParamLimits

0x5819,	// (0x00021a38) list_single_cale_day_pane_fp_g4

0x583d,	// (0x00021a5c) list_single_cale_day_pane_fp_g5_ParamLimits

0x583d,	// (0x00021a5c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x0002bdb1) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x0002bdb1) list_single_cale_day_pane_fp_g

0x5861,	// (0x00021a80) list_single_cale_day_pane_fp_t1_ParamLimits

0x5861,	// (0x00021a80) list_single_cale_day_pane_fp_t1

0x5887,	// (0x00021aa6) list_single_cale_day_pane_fp_t2_ParamLimits

0x5887,	// (0x00021aa6) list_single_cale_day_pane_fp_t2

0x58a0,	// (0x00021abf) list_single_cale_day_pane_fp_t3_ParamLimits

0x58a0,	// (0x00021abf) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x0002bdbc) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x0002bdbc) list_single_cale_day_pane_fp_t

0xc77a,	// (0x00028999) list_empty_pane_fp_g1_ParamLimits

0xc77a,	// (0x00028999) list_empty_pane_fp_g1

0x58b9,	// (0x00021ad8) list_empty_pane_fp_t1

0x58c7,	// (0x00021ae6) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x0002bdc3) list_empty_pane_fp_t

0xc77a,	// (0x00028999) list_single_heading_pane_fp_g1_ParamLimits

0xc77a,	// (0x00028999) list_single_heading_pane_fp_g1

0x5738,	// (0x00021957) list_single_heading_pane_fp_g2_ParamLimits

0x5738,	// (0x00021957) list_single_heading_pane_fp_g2

0x5744,	// (0x00021963) list_single_heading_pane_fp_g3_ParamLimits

0x5744,	// (0x00021963) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x0002bdc8) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x0002bdc8) list_single_heading_pane_fp_g

0x58d5,	// (0x00021af4) list_single_heading_pane_fp_t1_ParamLimits

0x58d5,	// (0x00021af4) list_single_heading_pane_fp_t1

0x58e7,	// (0x00021b06) list_single_heading_pane_fp_t2_ParamLimits

0x58e7,	// (0x00021b06) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x0002bdcf) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x0002bdcf) list_single_heading_pane_fp_t

0x80e5,	// (0x00024304) aid_size_cell_fast

0x624e,	// (0x0002246d) soft_indicator_pane_cp1_t1

0x8122,	// (0x00024341) cell_app_pane_cp2_ParamLimits

0x8122,	// (0x00024341) cell_app_pane_cp2

0x7288,	// (0x000234a7) fep_hwr_candidate_drop_down_list_pane

0x12f5,	// (0x0001d514) fep_hwr_candidate_pane_g3_ParamLimits

0x12f5,	// (0x0001d514) fep_hwr_candidate_pane_g3

0x1302,	// (0x0001d521) fep_hwr_candidate_pane_g4_ParamLimits

0x1302,	// (0x0001d521) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0002bd43) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0002bd43) fep_hwr_candidate_pane_g

0xc226,	// (0x00028445) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc226,	// (0x00028445) fep_vkb_candidate_drop_down_list_pane

0xc64e,	// (0x0002886d) fep_vkb_candidate_pane_g3

0xc656,	// (0x00028875) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0002bd70) fep_vkb_candidate_pane_g

0xc32c,	// (0x0002854b) cell_hwr_candidate_pane_g1_ParamLimits

0xc66d,	// (0x0002888c) cell_hwr_candidate_pane_g3_ParamLimits

0xc66d,	// (0x0002888c) cell_hwr_candidate_pane_g3

0xc68e,	// (0x000288ad) cell_hwr_candidate_pane_g4_ParamLimits

0xc68e,	// (0x000288ad) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x0002bd8a) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x0002bd8a) cell_hwr_candidate_pane_g

0xc6af,	// (0x000288ce) cell_vkb_candidate_pane_g3_ParamLimits

0xc6af,	// (0x000288ce) cell_vkb_candidate_pane_g3

0xc6ca,	// (0x000288e9) cell_vkb_candidate_pane_g4_ParamLimits

0xc6ca,	// (0x000288e9) cell_vkb_candidate_pane_g4

0xc79e,	// (0x000289bd) cell_app_pane_cp2_g1_ParamLimits

0xc79e,	// (0x000289bd) cell_app_pane_cp2_g1

0xc7bc,	// (0x000289db) cell_app_pane_cp2_g2_ParamLimits

0xc7bc,	// (0x000289db) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x0002bdd4) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x0002bdd4) cell_app_pane_cp2_g

0xc7c8,	// (0x000289e7) cell_app_pane_cp2_t1_ParamLimits

0xc7c8,	// (0x000289e7) cell_app_pane_cp2_t1

0x7ed0,	// (0x000240ef) grid_highlight_pane_cp1_ParamLimits

0x7ed0,	// (0x000240ef) grid_highlight_pane_cp1

0x74da,	// (0x000236f9) cell_hwr_candidate_pane_cp1_ParamLimits

0x74da,	// (0x000236f9) cell_hwr_candidate_pane_cp1

0xc32c,	// (0x0002854b) fep_hwr_candidate_drop_down_list_pane_g1

0xc7da,	// (0x000289f9) fep_hwr_candidate_drop_down_list_pane_g2

0xc7e7,	// (0x00028a06) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0002bdd9) fep_hwr_candidate_drop_down_list_pane_g

0x74fe,	// (0x0002371d) fep_hwr_candidate_drop_down_list_scroll_pane

0x7507,	// (0x00023726) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7507,	// (0x00023726) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7514,	// (0x00023733) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7514,	// (0x00023733) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7521,	// (0x00023740) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7521,	// (0x00023740) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc6af,	// (0x000288ce) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6af,	// (0x000288ce) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc6ca,	// (0x000288e9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6ca,	// (0x000288e9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x752e,	// (0x0002374d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x752e,	// (0x0002374d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7549,	// (0x00023768) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7549,	// (0x00023768) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7564,	// (0x00023783) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7564,	// (0x00023783) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x0002bde0) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x0002bde0) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7f4,	// (0x00028a13) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7f4,	// (0x00028a13) cell_vkb_candidate_pane_cp1

0xc32c,	// (0x0002854b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc32c,	// (0x0002854b) fep_vkb_candidate_drop_down_list_pane_g1

0xc7da,	// (0x000289f9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7da,	// (0x000289f9) fep_vkb_candidate_drop_down_list_pane_g2

0xc7e7,	// (0x00028a06) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7e7,	// (0x00028a06) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x0002bdd9) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x0002bdd9) fep_vkb_candidate_drop_down_list_pane_g

0xc81a,	// (0x00028a39) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc81a,	// (0x00028a39) fep_vkb_candidate_drop_down_list_scroll_pane

0xc827,	// (0x00028a46) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc827,	// (0x00028a46) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc834,	// (0x00028a53) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc834,	// (0x00028a53) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc840,	// (0x00028a5f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc840,	// (0x00028a5f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc66d,	// (0x0002888c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc66d,	// (0x0002888c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc68e,	// (0x000288ad) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc68e,	// (0x000288ad) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc84c,	// (0x00028a6b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc84c,	// (0x00028a6b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc86d,	// (0x00028a8c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc86d,	// (0x00028a8c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc88e,	// (0x00028aad) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc88e,	// (0x00028aad) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x0002bdf1) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x0002bdf1) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5eec,	// (0x0002210b) title_pane_g1_ParamLimits

0x5ef9,	// (0x00022118) title_pane_g2_ParamLimits

0xf56a,	// (0x0002b789) title_pane_g_ParamLimits

0x8530,	// (0x0002474f) aid_call2_pane

0x8538,	// (0x00024757) aid_call_pane

0x8540,	// (0x0002475f) popup_clock_analogue_window_g1

0x8540,	// (0x0002475f) popup_clock_analogue_window_g2

0x6a0c,	// (0x00022c2b) popup_clock_analogue_window_g3

0x6a15,	// (0x00022c34) popup_clock_analogue_window_g4

0x3452,	// (0x0001f671) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x0002b933) popup_clock_analogue_window_g

0x6a1d,	// (0x00022c3c) popup_clock_analogue_window_t1

0x6a2b,	// (0x00022c4a) clock_digital_number_pane_ParamLimits

0x6a2b,	// (0x00022c4a) clock_digital_number_pane

0x6a37,	// (0x00022c56) clock_digital_number_pane_cp02_ParamLimits

0x6a37,	// (0x00022c56) clock_digital_number_pane_cp02

0x6a43,	// (0x00022c62) clock_digital_number_pane_cp03_ParamLimits

0x6a43,	// (0x00022c62) clock_digital_number_pane_cp03

0x6a4f,	// (0x00022c6e) clock_digital_number_pane_cp04_ParamLimits

0x6a4f,	// (0x00022c6e) clock_digital_number_pane_cp04

0x6a5b,	// (0x00022c7a) clock_digital_separator_pane_ParamLimits

0x6a5b,	// (0x00022c7a) clock_digital_separator_pane

0x6a67,	// (0x00022c86) popup_clock_digital_window_t1_ParamLimits

0x6a67,	// (0x00022c86) popup_clock_digital_window_t1

0x3452,	// (0x0001f671) clock_digital_number_pane_g1

0x3452,	// (0x0001f671) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x0002b93e) clock_digital_number_pane_g

0x3452,	// (0x0001f671) clock_digital_separator_pane_g1

0x3452,	// (0x0001f671) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x0002b93e) clock_digital_separator_pane_g

0x94e7,	// (0x00025706) aid_fill_nsta_ParamLimits

0x9637,	// (0x00025856) indicator_nsta_pane_ParamLimits

0x97c7,	// (0x000259e6) popup_clock_analogue_window

0x97c7,	// (0x000259e6) popup_clock_digital_window

0x5fc2,	// (0x000221e1) grid_indicator_nsta_pane_ParamLimits

0xbac8,	// (0x00027ce7) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0002bcc3) clock_nsta_pane_t

0x69d0,	// (0x00022bef) aid_size_max_handle

0x69da,	// (0x00022bf9) aid_size_min_handle

0x8b2e,	// (0x00024d4d) editor_scroll_pane

0xc8a9,	// (0x00028ac8) ex_editor_pane

0x8052,	// (0x00024271) scroll_pane_cp13

0x7e6f,	// (0x0002408e) scroll_pane_cp14

0x856a,	// (0x00024789) scroll_pane_cp36

0x8598,	// (0x000247b7) list_single_graphic_hl_pane_cp2_ParamLimits

0x8598,	// (0x000247b7) list_single_graphic_hl_pane_cp2

0x5482,	// (0x000216a1) list_single_graphic_hl_pane_ParamLimits

0x5482,	// (0x000216a1) list_single_graphic_hl_pane

0x58fd,	// (0x00021b1c) aid_size_min_hl_cp1

0xc8b1,	// (0x00028ad0) list_highlight_pane_cp34_ParamLimits

0xc8b1,	// (0x00028ad0) list_highlight_pane_cp34

0xc8c2,	// (0x00028ae1) list_single_graphic_hl_pane_g1_ParamLimits

0xc8c2,	// (0x00028ae1) list_single_graphic_hl_pane_g1

0x5906,	// (0x00021b25) list_single_graphic_hl_pane_g2_ParamLimits

0x5906,	// (0x00021b25) list_single_graphic_hl_pane_g2

0x5906,	// (0x00021b25) list_single_graphic_hl_pane_g3_ParamLimits

0x5906,	// (0x00021b25) list_single_graphic_hl_pane_g3

0x52f6,	// (0x00021515) list_single_graphic_hl_pane_g4_ParamLimits

0x52f6,	// (0x00021515) list_single_graphic_hl_pane_g4

0x5912,	// (0x00021b31) list_single_graphic_hl_pane_g5_ParamLimits

0x5912,	// (0x00021b31) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x0002be02) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x0002be02) list_single_graphic_hl_pane_g

0x5926,	// (0x00021b45) list_single_graphic_hl_pane_t1_ParamLimits

0x5926,	// (0x00021b45) list_single_graphic_hl_pane_t1

0xc8cf,	// (0x00028aee) aid_size_min_hl_cp2

0xc8d8,	// (0x00028af7) list_highlight_pane_cp34_cp2_ParamLimits

0xc8d8,	// (0x00028af7) list_highlight_pane_cp34_cp2

0xc8c2,	// (0x00028ae1) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8c2,	// (0x00028ae1) list_single_graphic_hl_pane_g1_cp2

0xc8e5,	// (0x00028b04) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8e5,	// (0x00028b04) list_single_graphic_hl_pane_g2_cp2

0xc8f1,	// (0x00028b10) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8f1,	// (0x00028b10) list_single_graphic_hl_pane_g3_cp2

0x99bc,	// (0x00025bdb) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x99bc,	// (0x00025bdb) list_single_graphic_hl_pane_g4_cp2

0xc8ff,	// (0x00028b1e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8ff,	// (0x00028b1e) list_single_graphic_hl_pane_g5_cp2

0x6d20,	// (0x00022f3f) control_pane_g4_ParamLimits

0x6d20,	// (0x00022f3f) control_pane_g4

0x8eb4,	// (0x000250d3) bg_popup_sub_pane_cp10_ParamLimits

0xc0ac,	// (0x000282cb) list_choice_list_pane_ParamLimits

0xc0bb,	// (0x000282da) scroll_pane_cp23

0x62dc,	// (0x000224fb) bg_popup_preview_window_pane_cp02_ParamLimits

0xc71b,	// (0x0002893a) list_preview_fixed_pane_ParamLimits

0xc731,	// (0x00028950) list_preview_fixed_pane_cp_ParamLimits

0xc731,	// (0x00028950) list_preview_fixed_pane_cp

0xc73d,	// (0x0002895c) popup_preview_fixed_window_g1_ParamLimits

0xc73d,	// (0x0002895c) popup_preview_fixed_window_g1

0xc749,	// (0x00028968) popup_preview_fixed_window_g2_ParamLimits

0xc749,	// (0x00028968) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x0002bd91) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x0002bd91) popup_preview_fixed_window_g

0x6942,	// (0x00022b61) aid_navi_side_left_pane_ParamLimits

0x6957,	// (0x00022b76) aid_navi_side_right_pane_ParamLimits

0x696f,	// (0x00022b8e) navi_icon_pane_stacon_ParamLimits

0x6983,	// (0x00022ba2) navi_navi_pane_stacon_ParamLimits

0x696f,	// (0x00022b8e) navi_text_pane_stacon_ParamLimits

0x3448,	// (0x0001f667) main_text_info_pane

0xc929,	// (0x00028b48) listscroll_text_info_pane

0xc931,	// (0x00028b50) list_text_info_pane_ParamLimits

0xc931,	// (0x00028b50) list_text_info_pane

0xc940,	// (0x00028b5f) scroll_pane_cp24_ParamLimits

0xc940,	// (0x00028b5f) scroll_pane_cp24

0xc95e,	// (0x00028b7d) list_text_info_pane_t1_ParamLimits

0xc95e,	// (0x00028b7d) list_text_info_pane_t1

0x8efa,	// (0x00025119) popup_fast_swap2_window_ParamLimits

0x8efa,	// (0x00025119) popup_fast_swap2_window

0xc983,	// (0x00028ba2) aid_size_cell_fast2

0x3448,	// (0x0001f667) bg_popup_window_pane_cp17

0x9e86,	// (0x000260a5) heading_pane_cp2

0x653c,	// (0x0002275b) listscroll_fast2_pane

0xc98d,	// (0x00028bac) grid_fast2_pane

0xc997,	// (0x00028bb6) listscroll_fast2_pane_g1

0xc9a1,	// (0x00028bc0) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x0002be0d) listscroll_fast2_pane_g

0x8052,	// (0x00024271) scroll_pane_cp26

0xc9ab,	// (0x00028bca) cell_fast2_pane_ParamLimits

0xc9ab,	// (0x00028bca) cell_fast2_pane

0xc9c2,	// (0x00028be1) cell_fast2_pane_g1

0xc9cb,	// (0x00028bea) cell_fast2_pane_g2

0xc9d4,	// (0x00028bf3) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x0002be12) cell_fast2_pane_g

0x6635,	// (0x00022854) grid_highlight_pane_cp9

0x664a,	// (0x00022869) main_eswt_pane_ParamLimits

0x664a,	// (0x00022869) main_eswt_pane

0xc955,	// (0x00028b74) list_single_text_info_pane

0xc9dc,	// (0x00028bfb) eswt_ctrl_button_pane

0xc9dc,	// (0x00028bfb) eswt_ctrl_canvas_pane

0xc9e4,	// (0x00028c03) eswt_ctrl_combo_pane

0xc9dc,	// (0x00028bfb) eswt_ctrl_default_pane

0xc9dc,	// (0x00028bfb) eswt_ctrl_label_pane

0xc9ec,	// (0x00028c0b) eswt_ctrl_wait_pane

0xc9f4,	// (0x00028c13) eswt_shell_pane

0x3448,	// (0x0001f667) listscroll_eswt_app_pane

0xca14,	// (0x00028c33) popup_eswt_tasktip_window_ParamLimits

0xca14,	// (0x00028c33) popup_eswt_tasktip_window

0x9aee,	// (0x00025d0d) bg_popup_window_pane_cp18

0xca25,	// (0x00028c44) eswt_control_pane_g1_ParamLimits

0xca25,	// (0x00028c44) eswt_control_pane_g1

0xca32,	// (0x00028c51) eswt_control_pane_g2_ParamLimits

0xca32,	// (0x00028c51) eswt_control_pane_g2

0xca3f,	// (0x00028c5e) eswt_control_pane_g3_ParamLimits

0xca3f,	// (0x00028c5e) eswt_control_pane_g3

0xca4c,	// (0x00028c6b) eswt_control_pane_g4_ParamLimits

0xca4c,	// (0x00028c6b) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x0002be19) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x0002be19) eswt_control_pane_g

0x7ed0,	// (0x000240ef) bg_button_pane_ParamLimits

0x7ed0,	// (0x000240ef) bg_button_pane

0x664a,	// (0x00022869) common_borders_pane_copy2_ParamLimits

0x664a,	// (0x00022869) common_borders_pane_copy2

0xca59,	// (0x00028c78) control_button_pane_g1_ParamLimits

0xca59,	// (0x00028c78) control_button_pane_g1

0xca65,	// (0x00028c84) control_button_pane_g2_ParamLimits

0xca65,	// (0x00028c84) control_button_pane_g2

0xca71,	// (0x00028c90) control_button_pane_g3_ParamLimits

0xca71,	// (0x00028c90) control_button_pane_g3

0x0002,

0xfc03,	// (0x0002be22) control_button_pane_g_ParamLimits

0xfc03,	// (0x0002be22) control_button_pane_g

0xca85,	// (0x00028ca4) control_button_pane_t1

0xca93,	// (0x00028cb2) control_button_pane_t2

0x0001,

0xfc0a,	// (0x0002be29) control_button_pane_t

0x99fc,	// (0x00025c1b) bg_button_pane_g1

0x9a04,	// (0x00025c23) bg_button_pane_g2

0x9a0c,	// (0x00025c2b) bg_button_pane_g3

0x9a14,	// (0x00025c33) bg_button_pane_g4

0x9a1c,	// (0x00025c3b) bg_button_pane_g5

0x9a24,	// (0x00025c43) bg_button_pane_g6

0x9a2c,	// (0x00025c4b) bg_button_pane_g7

0x9a34,	// (0x00025c53) bg_button_pane_g8

0x9a3c,	// (0x00025c5b) bg_button_pane_g9

0x0008,

0xf877,	// (0x0002ba96) bg_button_pane_g

0xc067,	// (0x00028286) common_borders_pane_ParamLimits

0xc067,	// (0x00028286) common_borders_pane

0xca25,	// (0x00028c44) eswt_control_pane_g1_copy1_ParamLimits

0xca25,	// (0x00028c44) eswt_control_pane_g1_copy1

0xca32,	// (0x00028c51) eswt_control_pane_g2_copy1_ParamLimits

0xca32,	// (0x00028c51) eswt_control_pane_g2_copy1

0xca3f,	// (0x00028c5e) eswt_control_pane_g3_copy1_ParamLimits

0xca3f,	// (0x00028c5e) eswt_control_pane_g3_copy1

0xca4c,	// (0x00028c6b) eswt_control_pane_g4_copy1_ParamLimits

0xca4c,	// (0x00028c6b) eswt_control_pane_g4_copy1

0xc0a2,	// (0x000282c1) bg_eswt_ctrl_canvas_pane_g1

0xc067,	// (0x00028286) common_borders_pane_cp2_ParamLimits

0xc067,	// (0x00028286) common_borders_pane_cp2

0xc067,	// (0x00028286) common_borders_pane_cp3_ParamLimits

0xc067,	// (0x00028286) common_borders_pane_cp3

0xcaa1,	// (0x00028cc0) separator_horizontal_pane

0xcaa9,	// (0x00028cc8) separator_vertical_pane

0xca25,	// (0x00028c44) eswt_control_pane_g1_copy2_ParamLimits

0xca25,	// (0x00028c44) eswt_control_pane_g1_copy2

0xca32,	// (0x00028c51) eswt_control_pane_g2_copy2_ParamLimits

0xca32,	// (0x00028c51) eswt_control_pane_g2_copy2

0xca3f,	// (0x00028c5e) eswt_control_pane_g3_copy2_ParamLimits

0xca3f,	// (0x00028c5e) eswt_control_pane_g3_copy2

0xca4c,	// (0x00028c6b) eswt_control_pane_g4_copy2_ParamLimits

0xca4c,	// (0x00028c6b) eswt_control_pane_g4_copy2

0x3448,	// (0x0001f667) common_borders_pane_cp4

0xcac0,	// (0x00028cdf) separator_horizontal_pane_g1

0xcac9,	// (0x00028ce8) separator_horizontal_pane_g2

0xcad2,	// (0x00028cf1) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x0002be2e) separator_horizontal_pane_g

0xca25,	// (0x00028c44) eswt_control_pane_g1_copy3_ParamLimits

0xca25,	// (0x00028c44) eswt_control_pane_g1_copy3

0xca32,	// (0x00028c51) eswt_control_pane_g2_copy3_ParamLimits

0xca32,	// (0x00028c51) eswt_control_pane_g2_copy3

0xca3f,	// (0x00028c5e) eswt_control_pane_g3_copy3_ParamLimits

0xca3f,	// (0x00028c5e) eswt_control_pane_g3_copy3

0xca4c,	// (0x00028c6b) eswt_control_pane_g4_copy3_ParamLimits

0xca4c,	// (0x00028c6b) eswt_control_pane_g4_copy3

0x3448,	// (0x0001f667) common_borders_pane_cp5

0xcadb,	// (0x00028cfa) separator_vertical_pane_g1

0xcae4,	// (0x00028d03) separator_vertical_pane_g2

0xcaed,	// (0x00028d0c) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x0002be35) separator_vertical_pane_g

0xca25,	// (0x00028c44) eswt_control_pane_g1_copy4_ParamLimits

0xca25,	// (0x00028c44) eswt_control_pane_g1_copy4

0xca32,	// (0x00028c51) eswt_control_pane_g2_copy4_ParamLimits

0xca32,	// (0x00028c51) eswt_control_pane_g2_copy4

0xca3f,	// (0x00028c5e) eswt_control_pane_g3_copy4_ParamLimits

0xca3f,	// (0x00028c5e) eswt_control_pane_g3_copy4

0xca4c,	// (0x00028c6b) eswt_control_pane_g4_copy4_ParamLimits

0xca4c,	// (0x00028c6b) eswt_control_pane_g4_copy4

0xcaf6,	// (0x00028d15) eswt_ctrl_combo_button_pane

0xcafe,	// (0x00028d1d) eswt_ctrl_input_pane

0xcb06,	// (0x00028d25) popup_choice_list_window_cp70

0xcb0e,	// (0x00028d2d) eswt_ctrl_input_pane_t1

0x3448,	// (0x0001f667) input_focus_pane_cp70

0xc067,	// (0x00028286) bg_button_pane_cp70_ParamLimits

0xc067,	// (0x00028286) bg_button_pane_cp70

0xcb1c,	// (0x00028d3b) eswt_ctrl_combo_button_pane_g1

0xcb24,	// (0x00028d43) wait_bar_pane_cp70

0x9aee,	// (0x00025d0d) bg_popup_window_pane_cp70_ParamLimits

0x9aee,	// (0x00025d0d) bg_popup_window_pane_cp70

0xcb2c,	// (0x00028d4b) popup_eswt_tasktip_window_t1

0xcb42,	// (0x00028d61) wait_bar_pane_cp71_ParamLimits

0xcb42,	// (0x00028d61) wait_bar_pane_cp71

0xcb4e,	// (0x00028d6d) grid_eswt_app_pane

0x837d,	// (0x0002459c) scroll_pane_cp70

0xcb57,	// (0x00028d76) cell_eswt_app_pane_ParamLimits

0xcb57,	// (0x00028d76) cell_eswt_app_pane

0xcb89,	// (0x00028da8) cell_eswt_app_pane_g1_ParamLimits

0xcb89,	// (0x00028da8) cell_eswt_app_pane_g1

0xcbb8,	// (0x00028dd7) cell_eswt_app_pane_g2_ParamLimits

0xcbb8,	// (0x00028dd7) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x0002be3c) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x0002be3c) cell_eswt_app_pane_g

0xcbe1,	// (0x00028e00) cell_eswt_app_pane_t1_ParamLimits

0xcbe1,	// (0x00028e00) cell_eswt_app_pane_t1

0xcc13,	// (0x00028e32) grid_highlight_pane_cp70_ParamLimits

0xcc13,	// (0x00028e32) grid_highlight_pane_cp70

0xaf7f,	// (0x0002719e) set_content_pane_g1

0x8dde,	// (0x00024ffd) status_small_volume_pane

0x757f,	// (0x0002379e) status_small_volume_pane_g1

0x7587,	// (0x000237a6) volume_small2_pane

0x7590,	// (0x000237af) volume_small2_pane_g1

0x7599,	// (0x000237b8) volume_small2_pane_g2

0x75a2,	// (0x000237c1) volume_small2_pane_g3

0x75ab,	// (0x000237ca) volume_small2_pane_g4

0x75b4,	// (0x000237d3) volume_small2_pane_g5

0x75bd,	// (0x000237dc) volume_small2_pane_g6

0x75c6,	// (0x000237e5) volume_small2_pane_g7

0x75cf,	// (0x000237ee) volume_small2_pane_g8

0x75d8,	// (0x000237f7) volume_small2_pane_g9

0x75e1,	// (0x00023800) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x0002be41) volume_small2_pane_g

0xc480,	// (0x0002869f) fep_vkb_top_text_pane_g1_ParamLimits

0xc49b,	// (0x000286ba) fep_vkb_top_text_pane_t1_ParamLimits

0xc755,	// (0x00028974) popup_preview_fixed_window_g3_ParamLimits

0xc755,	// (0x00028974) popup_preview_fixed_window_g3

0x940b,	// (0x0002562a) popup_toolbar_trans_pane

0xae24,	// (0x00027043) aid_height_set_list_ParamLimits

0xae35,	// (0x00027054) aid_size_parent_ParamLimits

0x8eb4,	// (0x000250d3) list_highlight_pane_cp2_ParamLimits

0xaf7f,	// (0x0002719e) set_content_pane_g1_ParamLimits

0xb088,	// (0x000272a7) list_single_image_pane_ParamLimits

0xb088,	// (0x000272a7) list_single_image_pane

0xcc1f,	// (0x00028e3e) aid_size_cell_image_ParamLimits

0xcc1f,	// (0x00028e3e) aid_size_cell_image

0xcc2c,	// (0x00028e4b) grid_single_image_pane_ParamLimits

0xcc2c,	// (0x00028e4b) grid_single_image_pane

0x7eea,	// (0x00024109) list_single_image_pane_g1_ParamLimits

0x7eea,	// (0x00024109) list_single_image_pane_g1

0x7ef6,	// (0x00024115) list_single_image_pane_g2_ParamLimits

0x7ef6,	// (0x00024115) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x0002be56) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x0002be56) list_single_image_pane_g

0xcc3a,	// (0x00028e59) list_single_image_pane_t1_ParamLimits

0xcc3a,	// (0x00028e59) list_single_image_pane_t1

0xcc50,	// (0x00028e6f) cell_image_list_pane_ParamLimits

0xcc50,	// (0x00028e6f) cell_image_list_pane

0xcc66,	// (0x00028e85) cell_image_list_pane_g1

0xcc6f,	// (0x00028e8e) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x0002be5b) cell_image_list_pane_g

0xcc78,	// (0x00028e97) aid_size_cell_tb_trans_pane

0x7ed0,	// (0x000240ef) bg_tb_trans_pane

0xcc8a,	// (0x00028ea9) grid_tb_trans_pane

0x99fc,	// (0x00025c1b) bg_tb_trans_pane_g1

0x9a04,	// (0x00025c23) bg_tb_trans_pane_g2

0x9a0c,	// (0x00025c2b) bg_tb_trans_pane_g3

0x9a14,	// (0x00025c33) bg_tb_trans_pane_g4

0x9a1c,	// (0x00025c3b) bg_tb_trans_pane_g5

0x9a34,	// (0x00025c53) bg_tb_trans_pane_g6

0x9a3c,	// (0x00025c5b) bg_tb_trans_pane_g7

0x9a24,	// (0x00025c43) bg_tb_trans_pane_g8

0x9a2c,	// (0x00025c4b) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x0002be60) bg_tb_trans_pane_g

0xcc9e,	// (0x00028ebd) cell_toolbar_trans_pane_ParamLimits

0xcc9e,	// (0x00028ebd) cell_toolbar_trans_pane

0xc0a2,	// (0x000282c1) cell_toolbar_trans_pane_g1

0xbcc3,	// (0x00027ee2) list_form2_midp_pane_t1

0xbcd1,	// (0x00027ef0) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0002bd09) list_form2_midp_pane_t

0xbcdf,	// (0x00027efe) scroll_pane_cp51_ParamLimits

0xbea6,	// (0x000280c5) form2_midp_wait_pane_g1

0xbeaf,	// (0x000280ce) form2_midp_wait_pane_g2

0xbeb8,	// (0x000280d7) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0002bd1e) form2_midp_wait_pane_g

0x5fc2,	// (0x000221e1) list_highlight_pane_cp21_ParamLimits

0xbefc,	// (0x0002811b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf0b,	// (0x0002812a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb041,	// (0x00027260) list_single_2graphic_im_pane_ParamLimits

0xb041,	// (0x00027260) list_single_2graphic_im_pane

0xccc4,	// (0x00028ee3) list_single_2graphic_im_pane_g1_ParamLimits

0xccc4,	// (0x00028ee3) list_single_2graphic_im_pane_g1

0xccd5,	// (0x00028ef4) list_single_2graphic_im_pane_g2_ParamLimits

0xccd5,	// (0x00028ef4) list_single_2graphic_im_pane_g2

0xcce1,	// (0x00028f00) list_single_2graphic_im_pane_g3_ParamLimits

0xcce1,	// (0x00028f00) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x0002be73) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x0002be73) list_single_2graphic_im_pane_g

0xcd01,	// (0x00028f20) list_single_2graphic_im_pane_t1_ParamLimits

0xcd01,	// (0x00028f20) list_single_2graphic_im_pane_t1

0xc761,	// (0x00028980) list_single_graphic_2heading_pane_fp_ParamLimits

0xc761,	// (0x00028980) list_single_graphic_2heading_pane_fp

0x576f,	// (0x0002198e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x576f,	// (0x0002198e) list_single_graphic_2heading_pane_fp_g1

0xc77a,	// (0x00028999) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc77a,	// (0x00028999) list_single_graphic_2heading_pane_fp_g2

0x5738,	// (0x00021957) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5738,	// (0x00021957) list_single_graphic_2heading_pane_fp_g3

0x5744,	// (0x00021963) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5744,	// (0x00021963) list_single_graphic_2heading_pane_fp_g4

0xc786,	// (0x000289a5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc786,	// (0x000289a5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0002bda1) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0002bda1) list_single_graphic_2heading_pane_fp_g

0x593c,	// (0x00021b5b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x593c,	// (0x00021b5b) list_single_graphic_2heading_pane_fp_t1

0x57a7,	// (0x000219c6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x57a7,	// (0x000219c6) list_single_graphic_2heading_pane_fp_t2

0x5952,	// (0x00021b71) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5952,	// (0x00021b71) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x0002be7c) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x0002be7c) list_single_graphic_2heading_pane_fp_t

0xc142,	// (0x00028361) fep_hwr_write_pane_g5_ParamLimits

0xc142,	// (0x00028361) fep_hwr_write_pane_g5

0xc14e,	// (0x0002836d) fep_hwr_write_pane_g6_ParamLimits

0xc14e,	// (0x0002836d) fep_hwr_write_pane_g6

0xc9f4,	// (0x00028c13) eswt_shell_pane_ParamLimits

0x9aee,	// (0x00025d0d) bg_popup_window_pane_cp18_ParamLimits

0xad7b,	// (0x00026f9a) heading_pane_cp70

0xcb2c,	// (0x00028d4b) popup_eswt_tasktip_window_t1_ParamLimits

0x953e,	// (0x0002575d) aid_touch_tab_arrow_left

0x954d,	// (0x0002576c) aid_touch_tab_arrow_right

0x5f0a,	// (0x00022129) title_pane_g3_ParamLimits

0x5f0a,	// (0x00022129) title_pane_g3

0x7e8f,	// (0x000240ae) set_value_pane_g1

0x940b,	// (0x0002562a) popup_toolbar_trans_pane_ParamLimits

0xcc78,	// (0x00028e97) aid_size_cell_tb_trans_pane_ParamLimits

0x7ed0,	// (0x000240ef) bg_tb_trans_pane_ParamLimits

0xcc8a,	// (0x00028ea9) grid_tb_trans_pane_ParamLimits

0x62dc,	// (0x000224fb) cont_note_pane_ParamLimits

0x62dc,	// (0x000224fb) cont_note_pane

0x664a,	// (0x00022869) cont_snote2_single_text_pane_ParamLimits

0x664a,	// (0x00022869) cont_snote2_single_text_pane

0x664a,	// (0x00022869) cont_snote2_single_graphic_pane_ParamLimits

0x664a,	// (0x00022869) cont_snote2_single_graphic_pane

0xa0a2,	// (0x000262c1) cont_note_wait_pane_ParamLimits

0xa0a2,	// (0x000262c1) cont_note_wait_pane

0xa0a2,	// (0x000262c1) cont_note_image_pane_ParamLimits

0xa0a2,	// (0x000262c1) cont_note_image_pane

0xcd32,	// (0x00028f51) popup_note2_window_g1_ParamLimits

0xcd32,	// (0x00028f51) popup_note2_window_g1

0xcd63,	// (0x00028f82) popup_note2_window_t1_ParamLimits

0xcd63,	// (0x00028f82) popup_note2_window_t1

0xcda8,	// (0x00028fc7) popup_note2_window_t2_ParamLimits

0xcda8,	// (0x00028fc7) popup_note2_window_t2

0xcded,	// (0x0002900c) popup_note2_window_t3_ParamLimits

0xcded,	// (0x0002900c) popup_note2_window_t3

0xce32,	// (0x00029051) popup_note2_window_t4_ParamLimits

0xce32,	// (0x00029051) popup_note2_window_t4

0x6360,	// (0x0002257f) popup_note2_window_t5_ParamLimits

0x6360,	// (0x0002257f) popup_note2_window_t5

0x0004,

0xfc69,	// (0x0002be88) popup_note2_window_t_ParamLimits

0xfc69,	// (0x0002be88) popup_note2_window_t

0xce61,	// (0x00029080) popup_note2_image_window_g1_ParamLimits

0xce61,	// (0x00029080) popup_note2_image_window_g1

0xce6d,	// (0x0002908c) popup_note2_image_window_g2_ParamLimits

0xce6d,	// (0x0002908c) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x0002be93) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x0002be93) popup_note2_image_window_g

0xce7f,	// (0x0002909e) popup_note2_image_window_t1_ParamLimits

0xce7f,	// (0x0002909e) popup_note2_image_window_t1

0xce97,	// (0x000290b6) popup_note2_image_window_t2_ParamLimits

0xce97,	// (0x000290b6) popup_note2_image_window_t2

0xceaf,	// (0x000290ce) popup_note2_image_window_t3_ParamLimits

0xceaf,	// (0x000290ce) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x0002be98) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x0002be98) popup_note2_image_window_t

0xa0b0,	// (0x000262cf) popup_note2_wait_window_g1_ParamLimits

0xa0b0,	// (0x000262cf) popup_note2_wait_window_g1

0xcecb,	// (0x000290ea) popup_note2_wait_window_g2_ParamLimits

0xcecb,	// (0x000290ea) popup_note2_wait_window_g2

0xa0c8,	// (0x000262e7) popup_note2_wait_window_g3_ParamLimits

0xa0c8,	// (0x000262e7) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x0002be9f) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x0002be9f) popup_note2_wait_window_g

0xced7,	// (0x000290f6) popup_note2_wait_window_t1_ParamLimits

0xced7,	// (0x000290f6) popup_note2_wait_window_t1

0xcef5,	// (0x00029114) popup_note2_wait_window_t2_ParamLimits

0xcef5,	// (0x00029114) popup_note2_wait_window_t2

0xcf13,	// (0x00029132) popup_note2_wait_window_t3_ParamLimits

0xcf13,	// (0x00029132) popup_note2_wait_window_t3

0xcf25,	// (0x00029144) popup_note2_wait_window_t4_ParamLimits

0xcf25,	// (0x00029144) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x0002bea6) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x0002bea6) popup_note2_wait_window_t

0xcf37,	// (0x00029156) wait_bar2_pane_ParamLimits

0xcf37,	// (0x00029156) wait_bar2_pane

0xcf4f,	// (0x0002916e) popup_snote2_single_text_window_g1_ParamLimits

0xcf4f,	// (0x0002916e) popup_snote2_single_text_window_g1

0xcf77,	// (0x00029196) popup_snote2_single_text_window_t1_ParamLimits

0xcf77,	// (0x00029196) popup_snote2_single_text_window_t1

0xcfc3,	// (0x000291e2) popup_snote2_single_text_window_t2_ParamLimits

0xcfc3,	// (0x000291e2) popup_snote2_single_text_window_t2

0xd00f,	// (0x0002922e) popup_snote2_single_text_window_t3_ParamLimits

0xd00f,	// (0x0002922e) popup_snote2_single_text_window_t3

0xd050,	// (0x0002926f) popup_snote2_single_text_window_t4_ParamLimits

0xd050,	// (0x0002926f) popup_snote2_single_text_window_t4

0xd086,	// (0x000292a5) popup_snote2_single_text_window_t5_ParamLimits

0xd086,	// (0x000292a5) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x0002beaf) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x0002beaf) popup_snote2_single_text_window_t

0xd0b1,	// (0x000292d0) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0b1,	// (0x000292d0) popup_snote2_single_graphic_window_g1

0xd0d9,	// (0x000292f8) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0d9,	// (0x000292f8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x0002beba) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x0002beba) popup_snote2_single_graphic_window_g

0xd101,	// (0x00029320) popup_snote2_single_graphic_window_t1_ParamLimits

0xd101,	// (0x00029320) popup_snote2_single_graphic_window_t1

0xd14d,	// (0x0002936c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd14d,	// (0x0002936c) popup_snote2_single_graphic_window_t2

0xd00f,	// (0x0002922e) popup_snote2_single_graphic_window_t3_ParamLimits

0xd00f,	// (0x0002922e) popup_snote2_single_graphic_window_t3

0xd050,	// (0x0002926f) popup_snote2_single_graphic_window_t4_ParamLimits

0xd050,	// (0x0002926f) popup_snote2_single_graphic_window_t4

0xd086,	// (0x000292a5) popup_snote2_single_graphic_window_t5_ParamLimits

0xd086,	// (0x000292a5) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x0002bebf) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x0002bebf) popup_snote2_single_graphic_window_t

0xbb89,	// (0x00027da8) clock_nsta_pane_cp2_t1

0xbb89,	// (0x00027da8) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0002bcdf) clock_nsta_pane_cp2_t

0x50d2,	// (0x000212f1) form_field_data_wide_pane_g1_ParamLimits

0x7eea,	// (0x00024109) form_field_data_wide_pane_g2_ParamLimits

0x7eea,	// (0x00024109) form_field_data_wide_pane_g2

0x7ef6,	// (0x00024115) form_field_data_wide_pane_g3_ParamLimits

0x7ef6,	// (0x00024115) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x0002b8b6) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x0002b8b6) form_field_data_wide_pane_g

0xba64,	// (0x00027c83) grid_touch_3_pane_ParamLimits

0xba64,	// (0x00027c83) grid_touch_3_pane

0xd199,	// (0x000293b8) cell_touch_3_pane_ParamLimits

0xd199,	// (0x000293b8) cell_touch_3_pane

0xc0a2,	// (0x000282c1) cell_touch_3_pane_g1

0xc0a2,	// (0x000282c1) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0002bd64) cell_touch_3_pane_g

0x6392,	// (0x000225b1) cont_query_data_pane

0x639a,	// (0x000225b9) cont_query_data_pane_cp1

0xd1cc,	// (0x000293eb) button_value_adjust_pane_cp7

0xd1d4,	// (0x000293f3) query_popup_pane_cp3

0x860a,	// (0x00024829) bg_popup_sub_pane_cp22_ParamLimits

0x6a86,	// (0x00022ca5) navi_navi_volume_pane_cp2

0x6aa1,	// (0x00022cc0) popup_side_volume_key_window_g2

0x6ab0,	// (0x00022ccf) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0002b948) popup_side_volume_key_window_g

0x6acd,	// (0x00022cec) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0002b94f) popup_side_volume_key_window_t

0x88c5,	// (0x00024ae4) popup_side_volume_key_window_ParamLimits

0x4cca,	// (0x00020ee9) list_double_graphic_pane_g4_ParamLimits

0x4cca,	// (0x00020ee9) list_double_graphic_pane_g4

0xb070,	// (0x0002728f) list_single_2heading_msg_pane_ParamLimits

0xb070,	// (0x0002728f) list_single_2heading_msg_pane

0x5972,	// (0x00021b91) list_single_2heading_msg_pane_g1_ParamLimits

0x5972,	// (0x00021b91) list_single_2heading_msg_pane_g1

0x4b27,	// (0x00020d46) list_single_2heading_msg_pane_g2_ParamLimits

0x4b27,	// (0x00020d46) list_single_2heading_msg_pane_g2

0x597e,	// (0x00021b9d) list_single_2heading_msg_pane_g3_ParamLimits

0x597e,	// (0x00021b9d) list_single_2heading_msg_pane_g3

0x598a,	// (0x00021ba9) list_single_2heading_msg_pane_g4_ParamLimits

0x598a,	// (0x00021ba9) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x0002beca) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x0002beca) list_single_2heading_msg_pane_g

0x59a2,	// (0x00021bc1) list_single_2heading_msg_pane_t1_ParamLimits

0x59a2,	// (0x00021bc1) list_single_2heading_msg_pane_t1

0x59ca,	// (0x00021be9) list_single_2heading_msg_pane_t2_ParamLimits

0x59ca,	// (0x00021be9) list_single_2heading_msg_pane_t2

0x59fe,	// (0x00021c1d) list_single_2heading_msg_pane_t3_ParamLimits

0x59fe,	// (0x00021c1d) list_single_2heading_msg_pane_t3

0x5a37,	// (0x00021c56) list_single_2heading_msg_pane_t4_ParamLimits

0x5a37,	// (0x00021c56) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x0002bed3) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x0002bed3) list_single_2heading_msg_pane_t

0x5f16,	// (0x00022135) title_pane_g4_ParamLimits

0x5f16,	// (0x00022135) title_pane_g4

0x6892,	// (0x00022ab1) title_pane_stacon_g3_ParamLimits

0x6892,	// (0x00022ab1) title_pane_stacon_g3

0xccf5,	// (0x00028f14) list_single_2graphic_im_pane_g4_ParamLimits

0xccf5,	// (0x00028f14) list_single_2graphic_im_pane_g4

0xab18,	// (0x00026d37) popup_side_volume_key_window_cp

0xb38e,	// (0x000275ad) main_idle_act2_pane_t1

0x6e5b,	// (0x0002307a) toolbar_button_pane_g10

0x7e39,	// (0x00024058) popup_toolbar_window_cp1

0xbb7a,	// (0x00027d99) clock_nsta_pane_cp_t1

0xbb7a,	// (0x00027d99) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0002bcda) clock_nsta_pane_cp_t

0x6a86,	// (0x00022ca5) navi_navi_volume_pane_cp2_ParamLimits

0x6a95,	// (0x00022cb4) popup_side_volume_key_window_g1_ParamLimits

0x6aa1,	// (0x00022cc0) popup_side_volume_key_window_g2_ParamLimits

0x6ab0,	// (0x00022ccf) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0002b948) popup_side_volume_key_window_g_ParamLimits

0x7274,	// (0x00023493) fep_hwr_aid_pane

0x12e7,	// (0x0001d506) bg_fep_hwr_top_pane_g4_ParamLimits

0xc112,	// (0x00028331) fep_hwr_top_pane_g1_ParamLimits

0xc124,	// (0x00028343) fep_hwr_top_pane_g2_ParamLimits

0x732f,	// (0x0002354e) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0002bd2f) fep_hwr_top_pane_g_ParamLimits

0x7344,	// (0x00023563) fep_hwr_top_text_pane_ParamLimits

0xa8cd,	// (0x00026aec) aid_touch_tab_arrow_arrow_2

0xa8d6,	// (0x00026af5) aid_touch_tab_arrow_left_2

0x7288,	// (0x000234a7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x72bf,	// (0x000234de) fep_hwr_prediction_pane

0xc27a,	// (0x00028499) fep_vkb_prediction_pane

0xc380,	// (0x0002859f) fep_vkb_side_pane_g3_ParamLimits

0xc380,	// (0x0002859f) fep_vkb_side_pane_g3

0xc32c,	// (0x0002854b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc7da,	// (0x000289f9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc7e7,	// (0x00028a06) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x0002bdd9) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd1fb,	// (0x0002941a) fep_hwr_prediction_pane_g1

0x75ea,	// (0x00023809) fep_hwr_prediction_pane_g2

0x75f2,	// (0x00023811) fep_hwr_prediction_pane_g3

0x75fa,	// (0x00023819) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0002bedc) fep_hwr_prediction_pane_g

0xd1fb,	// (0x0002941a) fep_vkb_prediction_pane_g1

0xd205,	// (0x00029424) fep_vkb_prediction_pane_g2

0xd20d,	// (0x0002942c) fep_vkb_prediction_pane_g3

0xd215,	// (0x00029434) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x0002bee5) fep_vkb_prediction_pane_g

0xb468,	// (0x00027687) slider_set_pane_g3

0xb47c,	// (0x0002769b) slider_set_pane_g4

0xb494,	// (0x000276b3) slider_set_pane_g5

0xb468,	// (0x00027687) slider_set_pane_g6

0x7144,	// (0x00023363) slider_set_pane_g7

0xafc6,	// (0x000271e5) slider_form_pane_g3

0xafcf,	// (0x000271ee) slider_form_pane_g4

0xafd7,	// (0x000271f6) slider_form_pane_g5

0xafc6,	// (0x000271e5) slider_form_pane_g6

0xafdf,	// (0x000271fe) slider_form_pane_g7

0xb69e,	// (0x000278bd) slider_set_pane_vc_g3

0xb6a7,	// (0x000278c6) slider_set_pane_vc_g4

0xb6b0,	// (0x000278cf) slider_set_pane_vc_g5

0xb69e,	// (0x000278bd) slider_set_pane_vc_g6

0xb6b9,	// (0x000278d8) slider_set_pane_vc_g7

0xb69e,	// (0x000278bd) slider_form_pane_vc_g1

0xb6a7,	// (0x000278c6) slider_form_pane_vc_g2

0xb6b0,	// (0x000278cf) slider_form_pane_vc_g3

0xb69e,	// (0x000278bd) slider_form_pane_vc_g4

0xb86e,	// (0x00027a8d) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0002bcb3) slider_form_pane_vc_g

0x3448,	// (0x0001f667) main_idle_act3_pane

0xd21d,	// (0x0002943c) ai3_links_pane

0xd226,	// (0x00029445) popup_ai3_data_window_ParamLimits

0xd226,	// (0x00029445) popup_ai3_data_window

0x3448,	// (0x0001f667) grid_ai3_links_pane

0xd244,	// (0x00029463) cell_ai3_links_pane_ParamLimits

0xd244,	// (0x00029463) cell_ai3_links_pane

0xd25e,	// (0x0002947d) bg_popup_sub_pane_cp11

0xd26b,	// (0x0002948a) cell_ai3_links_pane_g1

0x3448,	// (0x0001f667) bg_popup_sub_pane_cp12

0xd290,	// (0x000294af) heading_ai3_data_pane

0xd298,	// (0x000294b7) list_ai3_gene_pane

0xd2a4,	// (0x000294c3) popup_ai3_data_window_g1

0xd2ac,	// (0x000294cb) heading_ai3_data_pane_g1

0xd2b4,	// (0x000294d3) heading_ai3_data_pane_t1

0xd2c2,	// (0x000294e1) list_double_ai3_gene_pane_ParamLimits

0xd2c2,	// (0x000294e1) list_double_ai3_gene_pane

0xd2cf,	// (0x000294ee) list_single_ai3_gene_pane_ParamLimits

0xd2cf,	// (0x000294ee) list_single_ai3_gene_pane

0xc067,	// (0x00028286) list_highlight_pane_cp7_ParamLimits

0xc067,	// (0x00028286) list_highlight_pane_cp7

0xd2dc,	// (0x000294fb) list_single_a13_gene_pane_t1_ParamLimits

0xd2dc,	// (0x000294fb) list_single_a13_gene_pane_t1

0xd2f3,	// (0x00029512) list_single_ai3_gene_pane_g1

0xd2fc,	// (0x0002951b) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x0002beee) list_single_ai3_gene_pane_g

0xd304,	// (0x00029523) list_double_ai3_gene_pane_g1_ParamLimits

0xd304,	// (0x00029523) list_double_ai3_gene_pane_g1

0xd310,	// (0x0002952f) list_double_ai3_gene_pane_t1_ParamLimits

0xd310,	// (0x0002952f) list_double_ai3_gene_pane_t1

0xd32c,	// (0x0002954b) list_double_ai3_gene_pane_t2_ParamLimits

0xd32c,	// (0x0002954b) list_double_ai3_gene_pane_t2

0xd341,	// (0x00029560) list_double_ai3_gene_pane_t3_ParamLimits

0xd341,	// (0x00029560) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x0002bef3) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x0002bef3) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5968,	// (0x00021b87) aid_size_min_col_2

0xd1e5,	// (0x00029404) aid_size_min_msg_ParamLimits

0xd1e5,	// (0x00029404) aid_size_min_msg

0xc48c,	// (0x000286ab) fep_vkb_top_text_pane_g2_ParamLimits

0xc48c,	// (0x000286ab) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0002bd5f) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0002bd5f) fep_vkb_top_text_pane_g

0x3448,	// (0x0001f667) main_hc_apps_shell_pane

0xd35e,	// (0x0002957d) grid_hc_apps_pane_ParamLimits

0xd35e,	// (0x0002957d) grid_hc_apps_pane

0xd36d,	// (0x0002958c) list_hc_apps_pane

0xd375,	// (0x00029594) scroll_pane_cp37_ParamLimits

0xd375,	// (0x00029594) scroll_pane_cp37

0xd381,	// (0x000295a0) cell_hc_apps_pane_ParamLimits

0xd381,	// (0x000295a0) cell_hc_apps_pane

0xd439,	// (0x00029658) cell_hc_apps_pane_g1_ParamLimits

0xd439,	// (0x00029658) cell_hc_apps_pane_g1

0xd46a,	// (0x00029689) cell_hc_apps_pane_g2_ParamLimits

0xd46a,	// (0x00029689) cell_hc_apps_pane_g2

0xd486,	// (0x000296a5) cell_hc_apps_pane_g3_ParamLimits

0xd486,	// (0x000296a5) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x0002befa) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x0002befa) cell_hc_apps_pane_g

0xd4a8,	// (0x000296c7) cell_hc_apps_pane_t1_ParamLimits

0xd4a8,	// (0x000296c7) cell_hc_apps_pane_t1

0x62dc,	// (0x000224fb) grid_highlight_pane_cp10_ParamLimits

0x62dc,	// (0x000224fb) grid_highlight_pane_cp10

0xd4e8,	// (0x00029707) list_single_hc_apps_pane_ParamLimits

0xd4e8,	// (0x00029707) list_single_hc_apps_pane

0xd527,	// (0x00029746) list_single_hc_apps_pane_g1

0x5a5c,	// (0x00021c7b) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x0002bf01) list_single_hc_apps_pane_g

0x5a75,	// (0x00021c94) list_single_hc_apps_pane_g2_copy1

0x5a91,	// (0x00021cb0) list_single_hc_apps_pane_t1

0x5fc2,	// (0x000221e1) bg_set_opt_pane_cp_ParamLimits

0x600e,	// (0x0002222d) setting_slider_pane_t1_ParamLimits

0x6024,	// (0x00022243) setting_slider_pane_t2_ParamLimits

0x603e,	// (0x0002225d) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0002b799) setting_slider_pane_t_ParamLimits

0x6056,	// (0x00022275) slider_set_pane_ParamLimits

0x6d37,	// (0x00022f56) control_pane_g5_ParamLimits

0x6d37,	// (0x00022f56) control_pane_g5

0xade7,	// (0x00027006) slider_set_pane_g1_ParamLimits

0x7138,	// (0x00023357) slider_set_pane_g2_ParamLimits

0xb468,	// (0x00027687) slider_set_pane_g3_ParamLimits

0xb47c,	// (0x0002769b) slider_set_pane_g4_ParamLimits

0xb494,	// (0x000276b3) slider_set_pane_g5_ParamLimits

0xb468,	// (0x00027687) slider_set_pane_g6_ParamLimits

0x7144,	// (0x00023363) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0002bb94) slider_set_pane_g_ParamLimits

0x89aa,	// (0x00024bc9) navi_icon_text_pane_ParamLimits

0x94fd,	// (0x0002571c) aid_fill_nsta_2_ParamLimits

0x953e,	// (0x0002575d) aid_touch_tab_arrow_left_ParamLimits

0x954d,	// (0x0002576c) aid_touch_tab_arrow_right_ParamLimits

0x95ba,	// (0x000257d9) clock_nsta_pane_ParamLimits

0xa8a9,	// (0x00026ac8) navi_icon_pane_g1_ParamLimits

0xa8b8,	// (0x00026ad7) navi_text_pane_t1_ParamLimits

0xbc97,	// (0x00027eb6) navi_icon_text_pane_g1_ParamLimits

0xbca6,	// (0x00027ec5) navi_icon_text_pane_t1_ParamLimits

0xd527,	// (0x00029746) list_single_hc_apps_pane_g1_ParamLimits

0x5a5c,	// (0x00021c7b) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x0002bf01) list_single_hc_apps_pane_g_ParamLimits

0x5a75,	// (0x00021c94) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5a91,	// (0x00021cb0) list_single_hc_apps_pane_t1_ParamLimits

0x5e00,	// (0x0002201f) popup_toolbar2_fixed_window_ParamLimits

0x5e00,	// (0x0002201f) popup_toolbar2_fixed_window

0x9401,	// (0x00025620) popup_toolbar2_float_window

0x3448,	// (0x0001f667) bg_popup_sub_pane_cp27

0xd540,	// (0x0002975f) grid_toolbar2_float_pane

0x3448,	// (0x0001f667) bg_popup_sub_pane_cp26

0xd540,	// (0x0002975f) grid_toolbar2_fixed_pane

0xd548,	// (0x00029767) cell_toolbar2_fixed_pane_ParamLimits

0xd548,	// (0x00029767) cell_toolbar2_fixed_pane

0xd558,	// (0x00029777) cell_toolbar2_fixed_pane_g1

0xd561,	// (0x00029780) toolbar2_fixed_button_pane

0x99fc,	// (0x00025c1b) toolbar2_fixed_button_pane_g1

0x9a04,	// (0x00025c23) toolbar2_fixed_button_pane_g2

0x9a0c,	// (0x00025c2b) toolbar2_fixed_button_pane_g3

0x9a14,	// (0x00025c33) toolbar2_fixed_button_pane_g4

0x9a1c,	// (0x00025c3b) toolbar2_fixed_button_pane_g5

0x9a24,	// (0x00025c43) toolbar2_fixed_button_pane_g6

0x9a2c,	// (0x00025c4b) toolbar2_fixed_button_pane_g7

0x9a34,	// (0x00025c53) toolbar2_fixed_button_pane_g8

0x9a3c,	// (0x00025c5b) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x0002ba96) toolbar2_fixed_button_pane_g

0xd569,	// (0x00029788) cell_toolbar2_float_pane_ParamLimits

0xd569,	// (0x00029788) cell_toolbar2_float_pane

0xd57a,	// (0x00029799) cell_toolbar2_float_pane_g1

0xd561,	// (0x00029780) toolbar2_fixed_button_pane_cp

0xc1e8,	// (0x00028407) fep_vkb_accented_list_pane_ParamLimits

0xc1e8,	// (0x00028407) fep_vkb_accented_list_pane

0x74a6,	// (0x000236c5) bg_popup_fep_shadow_pane_g9

0x8b2e,	// (0x00024d4d) bg_popup_fep_shadow_pane_cp3

0x8039,	// (0x00024258) list_accented_list_pane

0xd583,	// (0x000297a2) list_single_accented_list_pane_ParamLimits

0xd583,	// (0x000297a2) list_single_accented_list_pane

0x8b2e,	// (0x00024d4d) list_highlight_pane_cp10

0xd594,	// (0x000297b3) list_single_accented_list_pane_t1

0x9347,	// (0x00025566) popup_slider_window_ParamLimits

0x9347,	// (0x00025566) popup_slider_window

0xd1dc,	// (0x000293fb) aid_indentation_list_msg

0xd660,	// (0x0002987f) bg_popup_window_pane_cp19

0xd6ce,	// (0x000298ed) popup_slider_window_g1

0xd6ea,	// (0x00029909) popup_slider_window_g2

0xd706,	// (0x00029925) popup_slider_window_g3

0x0005,

0xfce7,	// (0x0002bf06) popup_slider_window_g

0xd762,	// (0x00029981) popup_slider_window_t1

0xd7d6,	// (0x000299f5) small_volume_slider_vertical_pane

0xc0a2,	// (0x000282c1) small_volume_slider_vertical_pane_g1

0xc0a2,	// (0x000282c1) small_volume_slider_vertical_pane_g2

0xd7f2,	// (0x00029a11) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x0002bf18) small_volume_slider_vertical_pane_g

0x5bb8,	// (0x00021dd7) area_side_right_pane_ParamLimits

0x5bb8,	// (0x00021dd7) area_side_right_pane

0x7602,	// (0x00023821) aid_size_side_button_ParamLimits

0x7602,	// (0x00023821) aid_size_side_button

0x7616,	// (0x00023835) grid_sctrl_middle_pane_ParamLimits

0x7616,	// (0x00023835) grid_sctrl_middle_pane

0x7636,	// (0x00023855) sctrl_sk_bottom_pane

0x7647,	// (0x00023866) sctrl_sk_top_pane

0x7659,	// (0x00023878) aid_touch_sctrl_top

0x62dc,	// (0x000224fb) bg_sctrl_sk_pane_ParamLimits

0x62dc,	// (0x000224fb) bg_sctrl_sk_pane

0x7666,	// (0x00023885) sctrl_sk_top_pane_g1

0x7673,	// (0x00023892) sctrl_sk_top_pane_t1

0x7659,	// (0x00023878) aid_touch_sctrl_bottom

0x62dc,	// (0x000224fb) bg_sctrl_sk_pane_cp_ParamLimits

0x62dc,	// (0x000224fb) bg_sctrl_sk_pane_cp

0x768e,	// (0x000238ad) sctrl_sk_bottom_pane_g1

0x7673,	// (0x00023892) sctrl_sk_bottom_pane_t1

0x7697,	// (0x000238b6) cell_sctrl_middle_pane_ParamLimits

0x7697,	// (0x000238b6) cell_sctrl_middle_pane

0x76b4,	// (0x000238d3) aid_touch_sctrl_middle_ParamLimits

0x76b4,	// (0x000238d3) aid_touch_sctrl_middle

0x7ed0,	// (0x000240ef) bg_sctrl_middle_pane_ParamLimits

0x7ed0,	// (0x000240ef) bg_sctrl_middle_pane

0xc32c,	// (0x0002854b) cell_sctrl_middle_pane_g1_ParamLimits

0xc32c,	// (0x0002854b) cell_sctrl_middle_pane_g1

0x76c6,	// (0x000238e5) cell_sctrl_middle_pane_g2_ParamLimits

0x76c6,	// (0x000238e5) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x0002bf24) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x0002bf24) cell_sctrl_middle_pane_g

0x99fc,	// (0x00025c1b) bg_sctrl_middle_pane_g1

0x9a04,	// (0x00025c23) bg_sctrl_middle_pane_g2

0x9a0c,	// (0x00025c2b) bg_sctrl_middle_pane_g3

0x9a14,	// (0x00025c33) bg_sctrl_middle_pane_g4

0x9a1c,	// (0x00025c3b) bg_sctrl_middle_pane_g5

0x9a24,	// (0x00025c43) bg_sctrl_middle_pane_g6

0x9a2c,	// (0x00025c4b) bg_sctrl_middle_pane_g7

0x9a34,	// (0x00025c53) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x0002bf29) bg_sctrl_middle_pane_g

0x9a3c,	// (0x00025c5b) bg_sctrl_middle_pane_g8_copy1

0x99fc,	// (0x00025c1b) bg_sctrl_sk_pane_g1

0x9a04,	// (0x00025c23) bg_sctrl_sk_pane_g2

0x9a0c,	// (0x00025c2b) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x0002ba96) bg_sctrl_sk_pane_g

0x6808,	// (0x00022a27) aid_size_touch_scroll_bar

0x9a14,	// (0x00025c33) bg_sctrl_sk_pane_g4

0x9a1c,	// (0x00025c3b) bg_sctrl_sk_pane_g5

0x9a24,	// (0x00025c43) bg_sctrl_sk_pane_g6

0x9a2c,	// (0x00025c4b) bg_sctrl_sk_pane_g7

0x9a34,	// (0x00025c53) bg_sctrl_sk_pane_g8

0x9a3c,	// (0x00025c5b) bg_sctrl_sk_pane_g9

0x8f5e,	// (0x0002517d) popup_fep_china_hwr2_fs_candidate_window

0x8f68,	// (0x00025187) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8f68,	// (0x00025187) popup_fep_china_hwr2_fs_control_window

0xc32c,	// (0x0002854b) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x0002bf1f) sctrl_sk_top_pane_g

0xd7fb,	// (0x00029a1a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7fb,	// (0x00029a1a) aid_fep_china_hwr2_fs_cell

0xd80e,	// (0x00029a2d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd80e,	// (0x00029a2d) bg_popup_fep_shadow_pane_cp4

0xd827,	// (0x00029a46) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd827,	// (0x00029a46) bg_popup_fep_shadow_pane_cp5

0xd839,	// (0x00029a58) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd839,	// (0x00029a58) popup_fep_china_hwr2_fs_control_bar_grid

0xd849,	// (0x00029a68) popup_fep_china_hwr2_fs_control_funtion_grid

0xd851,	// (0x00029a70) aid_fep_china_hwr2_fs_candi_cell

0x3448,	// (0x0001f667) bg_popup_fep_shadow_pane_cp6

0xd85b,	// (0x00029a7a) popup_fep_china_hwr2_fs_candidate_grid

0xd865,	// (0x00029a84) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd865,	// (0x00029a84) cell_fep_china_hwr2_fs_funtion_grid

0xc0a2,	// (0x000282c1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd87d,	// (0x00029a9c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd87d,	// (0x00029a9c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd88b,	// (0x00029aaa) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd88b,	// (0x00029aaa) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x0002bf3a) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x0002bf3a) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8a1,	// (0x00029ac0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8a1,	// (0x00029ac0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8b6,	// (0x00029ad5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8b6,	// (0x00029ad5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x0002bf3f) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x0002bf3f) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8d2,	// (0x00029af1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8da,	// (0x00029af9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8e2,	// (0x00029b01) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x0002bf44) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8ea,	// (0x00029b09) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8ea,	// (0x00029b09) cell_fep_china_hwr2_fs_candidate_grid

0xd909,	// (0x00029b28) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd911,	// (0x00029b30) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc0a2,	// (0x000282c1) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc0a2,	// (0x000282c1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0002bd64) cell_fep_china_hwr2_fs_candidate_grid_g

0xd919,	// (0x00029b38) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95cd,	// (0x000257ec) clock_nsta_pane_cp_24_ParamLimits

0x95cd,	// (0x000257ec) clock_nsta_pane_cp_24

0x964d,	// (0x0002586c) indicator_nsta_pane_cp_24_ParamLimits

0x964d,	// (0x0002586c) indicator_nsta_pane_cp_24

0xa725,	// (0x00026944) heading_pane_g1

0x0001,

0xf8dc,	// (0x0002bafb) heading_pane_g

0xb1d5,	// (0x000273f4) grid_sct_catagory_button_pane

0xb207,	// (0x00027426) scroll_pane_cp5_ParamLimits

0xbceb,	// (0x00027f0a) button_value_adjust_pane_cp5_ParamLimits

0xbceb,	// (0x00027f0a) button_value_adjust_pane_cp5

0xbdd0,	// (0x00027fef) form2_midp_time_pane_ParamLimits

0xd927,	// (0x00029b46) cell_sct_catagory_button_pane_ParamLimits

0xd927,	// (0x00029b46) cell_sct_catagory_button_pane

0xc067,	// (0x00028286) bg_button_pane_cp01_ParamLimits

0xc067,	// (0x00028286) bg_button_pane_cp01

0xc0a2,	// (0x000282c1) cell_sct_catagory_button_pane_g1

0x9388,	// (0x000255a7) popup_tb_extension_window

0xd939,	// (0x00029b58) aid_size_cell_ext_ParamLimits

0xd939,	// (0x00029b58) aid_size_cell_ext

0x62dc,	// (0x000224fb) bg_tb_trans_pane_cp1_ParamLimits

0x62dc,	// (0x000224fb) bg_tb_trans_pane_cp1

0xd959,	// (0x00029b78) grid_tb_ext_pane_ParamLimits

0xd959,	// (0x00029b78) grid_tb_ext_pane

0xd989,	// (0x00029ba8) cell_tb_ext_pane_ParamLimits

0xd989,	// (0x00029ba8) cell_tb_ext_pane

0xd9a0,	// (0x00029bbf) cell_tb_ext_pane_g1_ParamLimits

0xd9a0,	// (0x00029bbf) cell_tb_ext_pane_g1

0xd9bd,	// (0x00029bdc) cell_tb_ext_pane_t1

0x62dc,	// (0x000224fb) list_highlight_pane_cp11_ParamLimits

0x62dc,	// (0x000224fb) list_highlight_pane_cp11

0x5e1f,	// (0x0002203e) popup_uni_indicator_window_ParamLimits

0x5e1f,	// (0x0002203e) popup_uni_indicator_window

0x7ed0,	// (0x000240ef) bg_popup_sub_pane_cp14

0xd9d8,	// (0x00029bf7) list_uniindi_pane

0xd9e4,	// (0x00029c03) uniindi_top_pane

0x62dc,	// (0x000224fb) bg_uniindi_top_pane

0xda05,	// (0x00029c24) uniindi_top_pane_g1

0xda1b,	// (0x00029c3a) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x0002bf4b) uniindi_top_pane_g

0xda45,	// (0x00029c64) uniindi_top_pane_t1

0xda71,	// (0x00029c90) list_single_uniindi_pane_ParamLimits

0xda71,	// (0x00029c90) list_single_uniindi_pane

0xc0a2,	// (0x000282c1) bg_uniindi_top_pane_g1

0xda83,	// (0x00029ca2) list_single_uniindi_pane_g1

0xda96,	// (0x00029cb5) list_single_uniindi_pane_t1

0x3448,	// (0x0001f667) control_bg_pane

0xdabb,	// (0x00029cda) bg_sctrl_sk_pane_cp1

0xdac4,	// (0x00029ce3) bg_sctrl_sk_pane_cp2

0xdacd,	// (0x00029cec) control_bg_pane_g1

0xdad6,	// (0x00029cf5) control_bg_pane_g2

0x0001,

0xfd35,	// (0x0002bf54) control_bg_pane_g

0xbb0e,	// (0x00027d2d) cell_indicator_nsta_pane_g1_ParamLimits

0xbb1c,	// (0x00027d3b) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0002bcc8) cell_indicator_nsta_pane_g_ParamLimits

0x5725,	// (0x00021944) form2_midp_time_pane_t1_ParamLimits

0x664a,	// (0x00022869) main_idle_act4_pane_ParamLimits

0x664a,	// (0x00022869) main_idle_act4_pane

0x9388,	// (0x000255a7) popup_tb_extension_window_ParamLimits

0xd97b,	// (0x00029b9a) tb_ext_find_pane_ParamLimits

0xd97b,	// (0x00029b9a) tb_ext_find_pane

0xdadf,	// (0x00029cfe) ai_gene_pane_1_cp1

0x8c77,	// (0x00024e96) ai_gene_pane_2_cp1

0xdae7,	// (0x00029d06) list_single_idle_plugin_calendar_pane

0xdaf0,	// (0x00029d0f) list_single_idle_plugin_notification_pane

0xdaf9,	// (0x00029d18) list_single_idle_plugin_player_pane

0xdb02,	// (0x00029d21) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb02,	// (0x00029d21) list_single_idle_plugin_shortcut_pane

0xdb24,	// (0x00029d43) main_idle_act4_pane_t1

0xdb36,	// (0x00029d55) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x0002bf59) main_idle_act4_pane_t

0xdb48,	// (0x00029d67) middle_sk_idle_act4_pane_ParamLimits

0xdb48,	// (0x00029d67) middle_sk_idle_act4_pane

0xdb5e,	// (0x00029d7d) popup_clock_digital_analogue_window_cp2

0xdb78,	// (0x00029d97) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb78,	// (0x00029d97) shortcut_wheel_idle_act4_pane

0xc0a2,	// (0x000282c1) shortcut_wheel_idle_act4_pane_g1

0xc0a2,	// (0x000282c1) shortcut_wheel_idle_act4_pane_g2

0xc0a2,	// (0x000282c1) shortcut_wheel_idle_act4_pane_g3

0xc0a2,	// (0x000282c1) shortcut_wheel_idle_act4_pane_g4

0xc0a2,	// (0x000282c1) shortcut_wheel_idle_act4_pane_g5

0xdb8c,	// (0x00029dab) shortcut_wheel_idle_act4_pane_g6

0xdb94,	// (0x00029db3) shortcut_wheel_idle_act4_pane_g7

0xdb9c,	// (0x00029dbb) shortcut_wheel_idle_act4_pane_g8

0xdba4,	// (0x00029dc3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x0002bf5e) shortcut_wheel_idle_act4_pane_g

0xc32c,	// (0x0002854b) middle_sk_idle_act4_pane_g1_ParamLimits

0xc32c,	// (0x0002854b) middle_sk_idle_act4_pane_g1

0xdc08,	// (0x00029e27) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc08,	// (0x00029e27) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x0002bf81) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x0002bf81) middle_sk_idle_act4_pane_g

0xdc14,	// (0x00029e33) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc14,	// (0x00029e33) middle_sk_idle_act4_pane_t1

0xdc31,	// (0x00029e50) grid_ai_shortcut_pane_ParamLimits

0xdc31,	// (0x00029e50) grid_ai_shortcut_pane

0xdc4a,	// (0x00029e69) list_highlight_pane_cp16_ParamLimits

0xdc4a,	// (0x00029e69) list_highlight_pane_cp16

0xdc57,	// (0x00029e76) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc57,	// (0x00029e76) list_single_idle_plugin_shortcut_pane_g1

0xdc63,	// (0x00029e82) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc63,	// (0x00029e82) list_single_idle_plugin_shortcut_pane_g2

0xdc7d,	// (0x00029e9c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc7d,	// (0x00029e9c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x0002bf86) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x0002bf86) list_single_idle_plugin_shortcut_pane_g

0xdc90,	// (0x00029eaf) cell_ai_shortcut_pane_ParamLimits

0xdc90,	// (0x00029eaf) cell_ai_shortcut_pane

0xdcb3,	// (0x00029ed2) cell_ai_shortcut_pane_g1_ParamLimits

0xdcb3,	// (0x00029ed2) cell_ai_shortcut_pane_g1

0xdadf,	// (0x00029cfe) ai_gene_pane_1_cp2

0xdcd5,	// (0x00029ef4) ai_gene_pane_2_cp2

0xdcdd,	// (0x00029efc) list_highlight_pane_cp15

0xdce6,	// (0x00029f05) list_single_idle_plugin_calendar_pane_g1

0xdcdd,	// (0x00029efc) list_highlight_pane_cp17

0xdcee,	// (0x00029f0d) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcf6,	// (0x00029f15) list_single_idle_plugin_player_pane_g1

0xb43c,	// (0x0002765b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x0002bf8d) list_single_idle_plugin_player_pane_g

0xdcfe,	// (0x00029f1d) list_single_idle_plugin_player_pane_t1

0xdd0c,	// (0x00029f2b) list_single_idle_plugin_player_pane_t2

0xdd1a,	// (0x00029f39) list_single_idle_plugin_player_pane_t3

0xdd28,	// (0x00029f47) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x0002bf92) list_single_idle_plugin_player_pane_t

0xdd36,	// (0x00029f55) wait_bar_pane_cp15

0xdd3e,	// (0x00029f5d) grid_ai_notification_pane

0xb43c,	// (0x0002765b) list_single_idle_plugin_notification_pane_g1

0xdd47,	// (0x00029f66) cell_ai_notification_pane_ParamLimits

0xdd47,	// (0x00029f66) cell_ai_notification_pane

0xdd54,	// (0x00029f73) cell_ai_notification_pane_g1

0xdd5c,	// (0x00029f7b) cell_ai_notification_pane_t1

0xdd6a,	// (0x00029f89) tb_ext_find_button_pane

0xdd72,	// (0x00029f91) tb_ext_find_pane_g1

0xdd7a,	// (0x00029f99) tb_ext_find_pane_t1

0x8540,	// (0x0002475f) tb_ext_find_button_pane_g1

0xdd88,	// (0x00029fa7) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x0002bf9b) tb_ext_find_button_pane_g

0xdb24,	// (0x00029d43) main_idle_act4_pane_t1_ParamLimits

0xdb36,	// (0x00029d55) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x0002bf59) main_idle_act4_pane_t_ParamLimits

0xdb5e,	// (0x00029d7d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb6c,	// (0x00029d8b) sat_plugin_idle_act4_pane_ParamLimits

0xdb6c,	// (0x00029d8b) sat_plugin_idle_act4_pane

0xdd91,	// (0x00029fb0) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd91,	// (0x00029fb0) sat_plugin_idle_act4_pane_t1

0xdda4,	// (0x00029fc3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdda4,	// (0x00029fc3) sat_plugin_idle_act4_pane_t2

0xddb7,	// (0x00029fd6) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddb7,	// (0x00029fd6) sat_plugin_idle_act4_pane_t3

0xddca,	// (0x00029fe9) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddca,	// (0x00029fe9) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x0002bfa0) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x0002bfa0) sat_plugin_idle_act4_pane_t

0x5d50,	// (0x00021f6f) popup_battery_window_ParamLimits

0x5d50,	// (0x00021f6f) popup_battery_window

0x62dc,	// (0x000224fb) bg_popup_sub_pane_cp25_ParamLimits

0x62dc,	// (0x000224fb) bg_popup_sub_pane_cp25

0xdddd,	// (0x00029ffc) popup_battery_window_g1_ParamLimits

0xdddd,	// (0x00029ffc) popup_battery_window_g1

0xdde9,	// (0x0002a008) popup_battery_window_t1_ParamLimits

0xdde9,	// (0x0002a008) popup_battery_window_t1

0xddfb,	// (0x0002a01a) popup_battery_window_t2_ParamLimits

0xddfb,	// (0x0002a01a) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x0002bfa9) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x0002bfa9) popup_battery_window_t

0x8b42,	// (0x00024d61) midp_canvas_pane_ParamLimits

0x8bb9,	// (0x00024dd8) midp_keypad_pane_ParamLimits

0x8bb9,	// (0x00024dd8) midp_keypad_pane

0x8eb4,	// (0x000250d3) main_midp_pane_ParamLimits

0xbb98,	// (0x00027db7) signal_pane_g2_cp_ParamLimits

0xde18,	// (0x0002a037) aid_size_cell_midp_keypad_ParamLimits

0xde18,	// (0x0002a037) aid_size_cell_midp_keypad

0xde32,	// (0x0002a051) midp_keyp_game_grid_pane_ParamLimits

0xde32,	// (0x0002a051) midp_keyp_game_grid_pane

0xde52,	// (0x0002a071) midp_keyp_rocker_pane_ParamLimits

0xde52,	// (0x0002a071) midp_keyp_rocker_pane

0xde81,	// (0x0002a0a0) midp_keyp_sk_left_pane_ParamLimits

0xde81,	// (0x0002a0a0) midp_keyp_sk_left_pane

0xdedb,	// (0x0002a0fa) midp_keyp_sk_right_pane_ParamLimits

0xdedb,	// (0x0002a0fa) midp_keyp_sk_right_pane

0x3448,	// (0x0001f667) bg_button_pane_cp03

0xdf35,	// (0x0002a154) midp_keyp_sk_left_pane_g1

0x3448,	// (0x0001f667) bg_button_pane_cp04

0xdf35,	// (0x0002a154) midp_keyp_sk_right_pane_g1

0xc0a2,	// (0x000282c1) midp_keyp_rocker_pane_g1

0xdf3e,	// (0x0002a15d) keyp_game_cell_pane_ParamLimits

0xdf3e,	// (0x0002a15d) keyp_game_cell_pane

0x3448,	// (0x0001f667) bg_button_pane_cp02

0xdf51,	// (0x0002a170) keyp_game_cell_pane_g1

0x5d9a,	// (0x00021fb9) popup_fep_vkb2_window_ParamLimits

0x5d9a,	// (0x00021fb9) popup_fep_vkb2_window

0x76e8,	// (0x00023907) aid_size_cell_vkb2_ParamLimits

0x76e8,	// (0x00023907) aid_size_cell_vkb2

0x7734,	// (0x00023953) popup_fep_vkb2_window_g1_ParamLimits

0x7734,	// (0x00023953) popup_fep_vkb2_window_g1

0x777c,	// (0x0002399b) vkb2_area_bottom_pane_ParamLimits

0x777c,	// (0x0002399b) vkb2_area_bottom_pane

0x77d0,	// (0x000239ef) vkb2_area_keypad_pane_ParamLimits

0x77d0,	// (0x000239ef) vkb2_area_keypad_pane

0x7816,	// (0x00023a35) vkb2_area_top_pane_ParamLimits

0x7816,	// (0x00023a35) vkb2_area_top_pane

0x7890,	// (0x00023aaf) vkb2_top_entry_pane_ParamLimits

0x7890,	// (0x00023aaf) vkb2_top_entry_pane

0x78ba,	// (0x00023ad9) vkb2_top_grid_left_pane_ParamLimits

0x78ba,	// (0x00023ad9) vkb2_top_grid_left_pane

0x78d8,	// (0x00023af7) vkb2_top_grid_right_pane_ParamLimits

0x78d8,	// (0x00023af7) vkb2_top_grid_right_pane

0x78f6,	// (0x00023b15) vkb2_cell_keypad_pane_ParamLimits

0x78f6,	// (0x00023b15) vkb2_cell_keypad_pane

0x79ac,	// (0x00023bcb) vkb2_area_bottom_grid_pane_ParamLimits

0x79ac,	// (0x00023bcb) vkb2_area_bottom_grid_pane

0x79d2,	// (0x00023bf1) vkb2_area_bottom_pane_g1_ParamLimits

0x79d2,	// (0x00023bf1) vkb2_area_bottom_pane_g1

0x79f6,	// (0x00023c15) vkb2_area_bottom_pane_g2_ParamLimits

0x79f6,	// (0x00023c15) vkb2_area_bottom_pane_g2

0x7a24,	// (0x00023c43) vkb2_area_bottom_pane_g3_ParamLimits

0x7a24,	// (0x00023c43) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x0002bfae) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x0002bfae) vkb2_area_bottom_pane_g

0x7a85,	// (0x00023ca4) vkb2_top_cell_left_pane_ParamLimits

0x7a85,	// (0x00023ca4) vkb2_top_cell_left_pane

0xdf62,	// (0x0002a181) vkb2_top_entry_pane_g1_ParamLimits

0xdf62,	// (0x0002a181) vkb2_top_entry_pane_g1

0xdf70,	// (0x0002a18f) vkb2_top_entry_pane_t1_ParamLimits

0xdf70,	// (0x0002a18f) vkb2_top_entry_pane_t1

0xdf88,	// (0x0002a1a7) vkb2_top_entry_pane_t2_ParamLimits

0xdf88,	// (0x0002a1a7) vkb2_top_entry_pane_t2

0xdfa0,	// (0x0002a1bf) vkb2_top_entry_pane_t3_ParamLimits

0xdfa0,	// (0x0002a1bf) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x0002bfb5) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x0002bfb5) vkb2_top_entry_pane_t

0x7ad2,	// (0x00023cf1) vkb2_top_grid_right_pane_g1_ParamLimits

0x7ad2,	// (0x00023cf1) vkb2_top_grid_right_pane_g1

0x7ae8,	// (0x00023d07) vkb2_top_grid_right_pane_g2_ParamLimits

0x7ae8,	// (0x00023d07) vkb2_top_grid_right_pane_g2

0x7b00,	// (0x00023d1f) vkb2_top_grid_right_pane_g3_ParamLimits

0x7b00,	// (0x00023d1f) vkb2_top_grid_right_pane_g3

0x7b18,	// (0x00023d37) vkb2_top_grid_right_pane_g4_ParamLimits

0x7b18,	// (0x00023d37) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x0002bfbc) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x0002bfbc) vkb2_top_grid_right_pane_g

0x7b2e,	// (0x00023d4d) vkb2_top_cell_left_pane_g1

0x7b45,	// (0x00023d64) vkb2_cell_keypad_pane_g1_ParamLimits

0x7b45,	// (0x00023d64) vkb2_cell_keypad_pane_g1

0xdfb6,	// (0x0002a1d5) vkb2_cell_keypad_pane_t1_ParamLimits

0xdfb6,	// (0x0002a1d5) vkb2_cell_keypad_pane_t1

0x7b69,	// (0x00023d88) vkb2_cell_bottom_grid_pane_ParamLimits

0x7b69,	// (0x00023d88) vkb2_cell_bottom_grid_pane

0x7ba2,	// (0x00023dc1) vkb2_cell_bottom_grid_pane_g1

0xdbac,	// (0x00029dcb) aid_call2_pane_cp02

0xdbb4,	// (0x00029dd3) aid_call_pane_cp02

0xdbbc,	// (0x00029ddb) clock_digital_number_pane_cp10

0xdbc4,	// (0x00029de3) clock_digital_number_pane_cp11

0xdbcc,	// (0x00029deb) clock_digital_number_pane_cp12

0xdbd4,	// (0x00029df3) clock_digital_number_pane_cp13

0xdbdc,	// (0x00029dfb) clock_digital_separator_pane_cp10

0x8540,	// (0x0002475f) popup_clock_digital_analogue_window_cp2_g1

0x8540,	// (0x0002475f) popup_clock_digital_analogue_window_cp2_g2

0xdbe4,	// (0x00029e03) popup_clock_digital_analogue_window_cp2_g3

0x8540,	// (0x0002475f) popup_clock_digital_analogue_window_cp2_g4

0xdbe4,	// (0x00029e03) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x0002bf71) popup_clock_digital_analogue_window_cp2_g

0xdbec,	// (0x00029e0b) popup_clock_digital_analogue_window_cp2_t1

0xdbfa,	// (0x00029e19) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x0002bf7c) popup_clock_digital_analogue_window_cp2_t

0xc0a2,	// (0x000282c1) clock_digital_number_pane_cp10_g1

0xc0a2,	// (0x000282c1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002bd64) clock_digital_number_pane_cp10_g

0xc0a2,	// (0x000282c1) clock_digital_separator_pane_cp10_g1

0xc0a2,	// (0x000282c1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0002bd64) clock_digital_separator_pane_cp10_g

0xda27,	// (0x00029c46) uniindi_top_pane_g3

0xda38,	// (0x00029c57) uniindi_top_pane_g4

0x7966,	// (0x00023b85) vkb2_row_keypad_pane_ParamLimits

0x7966,	// (0x00023b85) vkb2_row_keypad_pane

0x7bbe,	// (0x00023ddd) vkb2_cell_t_keypad_pane_ParamLimits

0x7bbe,	// (0x00023ddd) vkb2_cell_t_keypad_pane

0x7bce,	// (0x00023ded) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7bce,	// (0x00023ded) vkb2_cell_t_keypad_pane_cp08

0x7be3,	// (0x00023e02) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7be3,	// (0x00023e02) vkb2_cell_t_keypad_pane_cp09

0x7bf7,	// (0x00023e16) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7bf7,	// (0x00023e16) vkb2_cell_t_keypad_pane_cp01

0x7c08,	// (0x00023e27) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7c08,	// (0x00023e27) vkb2_cell_t_keypad_pane_cp02

0x7c19,	// (0x00023e38) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7c19,	// (0x00023e38) vkb2_cell_t_keypad_pane_cp03

0x7c2a,	// (0x00023e49) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7c2a,	// (0x00023e49) vkb2_cell_t_keypad_pane_cp04

0x7c3b,	// (0x00023e5a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7c3b,	// (0x00023e5a) vkb2_cell_t_keypad_pane_cp05

0x7c4c,	// (0x00023e6b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7c4c,	// (0x00023e6b) vkb2_cell_t_keypad_pane_cp06

0x7c5f,	// (0x00023e7e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7c5f,	// (0x00023e7e) vkb2_cell_t_keypad_pane_cp07

0x7c74,	// (0x00023e93) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7c74,	// (0x00023e93) vkb2_cell_t_keypad_pane_cp10

0xc32c,	// (0x0002854b) vkb2_cell_t_keypad_pane_g1

0xdfcd,	// (0x0002a1ec) vkb2_cell_t_keypad_pane_t1

0x3448,	// (0x0001f667) popup_grid_graphic2_window

0xdfdf,	// (0x0002a1fe) aid_size_cell_graphic2_ParamLimits

0xdfdf,	// (0x0002a1fe) aid_size_cell_graphic2

0xcab2,	// (0x00028cd1) bg_popup_window_pane_cp21_ParamLimits

0xcab2,	// (0x00028cd1) bg_popup_window_pane_cp21

0xe00b,	// (0x0002a22a) graphic2_pages_pane_ParamLimits

0xe00b,	// (0x0002a22a) graphic2_pages_pane

0xe051,	// (0x0002a270) grid_graphic2_control_pane_ParamLimits

0xe051,	// (0x0002a270) grid_graphic2_control_pane

0xe07f,	// (0x0002a29e) grid_graphic2_pane_ParamLimits

0xe07f,	// (0x0002a29e) grid_graphic2_pane

0xe0e1,	// (0x0002a300) cell_graphic2_pane

0x3448,	// (0x0001f667) main_comp_mode_pane

0xd298,	// (0x000294b7) list_ai3_gene_pane_ParamLimits

0xd660,	// (0x0002987f) bg_popup_window_pane_cp19_ParamLimits

0xd66c,	// (0x0002988b) bg_touch_area_indi_pane_ParamLimits

0xd66c,	// (0x0002988b) bg_touch_area_indi_pane

0xd682,	// (0x000298a1) bg_touch_area_indi_pane_cp01_ParamLimits

0xd682,	// (0x000298a1) bg_touch_area_indi_pane_cp01

0xd69a,	// (0x000298b9) bg_touch_area_indi_pane_cp02_ParamLimits

0xd69a,	// (0x000298b9) bg_touch_area_indi_pane_cp02

0xd6b4,	// (0x000298d3) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6b4,	// (0x000298d3) bg_touch_area_indi_pane_cp03

0xd6ce,	// (0x000298ed) popup_slider_window_g1_ParamLimits

0xd6ea,	// (0x00029909) popup_slider_window_g2_ParamLimits

0xd706,	// (0x00029925) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x0002bf06) popup_slider_window_g_ParamLimits

0xd762,	// (0x00029981) popup_slider_window_t1_ParamLimits

0xd7d6,	// (0x000299f5) small_volume_slider_vertical_pane_ParamLimits

0xe0e1,	// (0x0002a300) cell_graphic2_pane_ParamLimits

0xe136,	// (0x0002a355) bg_button_pane_cp10_ParamLimits

0xe136,	// (0x0002a355) bg_button_pane_cp10

0xe14b,	// (0x0002a36a) bg_button_pane_cp11_ParamLimits

0xe14b,	// (0x0002a36a) bg_button_pane_cp11

0xe160,	// (0x0002a37f) graphic2_pages_pane_g1_ParamLimits

0xe160,	// (0x0002a37f) graphic2_pages_pane_g1

0xe17b,	// (0x0002a39a) graphic2_pages_pane_g2_ParamLimits

0xe17b,	// (0x0002a39a) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x0002bfca) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x0002bfca) graphic2_pages_pane_g

0xe193,	// (0x0002a3b2) graphic2_pages_pane_t1_ParamLimits

0xe193,	// (0x0002a3b2) graphic2_pages_pane_t1

0xe1a9,	// (0x0002a3c8) cell_graphic2_control_pane_ParamLimits

0xe1a9,	// (0x0002a3c8) cell_graphic2_control_pane

0xe1c3,	// (0x0002a3e2) cell_graphic2_pane_g1_ParamLimits

0xe1c3,	// (0x0002a3e2) cell_graphic2_pane_g1

0xe1d0,	// (0x0002a3ef) cell_graphic2_pane_g2_ParamLimits

0xe1d0,	// (0x0002a3ef) cell_graphic2_pane_g2

0xe1dd,	// (0x0002a3fc) cell_graphic2_pane_g3_ParamLimits

0xe1dd,	// (0x0002a3fc) cell_graphic2_pane_g3

0xe1ea,	// (0x0002a409) cell_graphic2_pane_g4_ParamLimits

0xe1ea,	// (0x0002a409) cell_graphic2_pane_g4

0xe1f7,	// (0x0002a416) cell_graphic2_pane_g5_ParamLimits

0xe1f7,	// (0x0002a416) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x0002bfcf) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x0002bfcf) cell_graphic2_pane_g

0xe212,	// (0x0002a431) cell_graphic2_pane_t1_ParamLimits

0xe212,	// (0x0002a431) cell_graphic2_pane_t1

0x9aee,	// (0x00025d0d) grid_highlight_pane_cp11_ParamLimits

0x9aee,	// (0x00025d0d) grid_highlight_pane_cp11

0x7ed0,	// (0x000240ef) bg_button_pane_cp05

0xe23b,	// (0x0002a45a) cell_graphic2_control_pane_g1

0xc0a2,	// (0x000282c1) bg_touch_area_indi_pane_g1

0xe248,	// (0x0002a467) aid_cmod_rocker_key_size

0xe252,	// (0x0002a471) aid_cmode_itu_key_size

0xe25c,	// (0x0002a47b) main_cmode_video_pane

0xe266,	// (0x0002a485) main_comp_mode_itu_pane

0xe272,	// (0x0002a491) main_comp_mode_rocker_pane

0xe27e,	// (0x0002a49d) cell_cmode_rocker_pane_ParamLimits

0xe27e,	// (0x0002a49d) cell_cmode_rocker_pane

0xe292,	// (0x0002a4b1) cell_cmode_itu_pane_ParamLimits

0xe292,	// (0x0002a4b1) cell_cmode_itu_pane

0x7ed0,	// (0x000240ef) bg_button_pane_cp06_ParamLimits

0x7ed0,	// (0x000240ef) bg_button_pane_cp06

0xc32c,	// (0x0002854b) cell_cmode_rocker_pane_g1_ParamLimits

0xc32c,	// (0x0002854b) cell_cmode_rocker_pane_g1

0xd87d,	// (0x00029a9c) cell_cmode_rocker_pane_g2_ParamLimits

0xd87d,	// (0x00029a9c) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x0002bfdf) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x0002bfdf) cell_cmode_rocker_pane_g

0x3448,	// (0x0001f667) bg_button_pane_cp07

0xe2a9,	// (0x0002a4c8) cell_cmode_itu_pane_g1

0xe2b2,	// (0x0002a4d1) cell_cmode_itu_pane_t1

0xe2c0,	// (0x0002a4df) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x0002bfe4) cell_cmode_itu_pane_t

0xdaab,	// (0x00029cca) aid_touch_ctrl_left

0xdab3,	// (0x00029cd2) aid_touch_ctrl_right

0x3448,	// (0x0001f667) compa_mode_pane

0xe2ce,	// (0x0002a4ed) aid_cmod_rocker_key_size_cp

0xe2d8,	// (0x0002a4f7) aid_cmode_itu_key_size_cp

0xe2e2,	// (0x0002a501) compa_mode_pane_g1

0xe2ea,	// (0x0002a509) compa_mode_pane_g2

0xe2f2,	// (0x0002a511) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x0002bfe9) compa_mode_pane_g

0xe2fa,	// (0x0002a519) main_comp_mode_itu_pane_cp

0xe302,	// (0x0002a521) main_comp_mode_rocker_pane_cp

0xe30a,	// (0x0002a529) cell_cmode_itu_pane_cp_ParamLimits

0xe30a,	// (0x0002a529) cell_cmode_itu_pane_cp

0xe31f,	// (0x0002a53e) cell_cmode_rocker_pane_cp_ParamLimits

0xe31f,	// (0x0002a53e) cell_cmode_rocker_pane_cp

0x7ed0,	// (0x000240ef) bg_button_pane_cp06_cp_ParamLimits

0x7ed0,	// (0x000240ef) bg_button_pane_cp06_cp

0xc32c,	// (0x0002854b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc32c,	// (0x0002854b) cell_cmode_rocker_pane_g1_cp

0xc0a2,	// (0x000282c1) cell_cmode_rocker_pane_g2_cp

0x3448,	// (0x0001f667) bg_button_pane_cp07_cp

0xe331,	// (0x0002a550) cell_cmode_itu_pane_g1_cp

0xe33a,	// (0x0002a559) cell_cmode_itu_pane_t1_cp

0xe33a,	// (0x0002a559) cell_cmode_itu_pane_t2_cp

0xafb5,	// (0x000271d4) settings_code_pane_cp2

0x5fc2,	// (0x000221e1) bg_popup_window_pane_cp3_ParamLimits

0x64ca,	// (0x000226e9) heading_pane_cp3_ParamLimits

0x64d6,	// (0x000226f5) listscroll_popup_graphic_pane_ParamLimits

0x7274,	// (0x00023493) fep_hwr_aid_pane_ParamLimits

0x7659,	// (0x00023878) aid_touch_sctrl_top_ParamLimits

0x7666,	// (0x00023885) sctrl_sk_top_pane_g1_ParamLimits

0xc32c,	// (0x0002854b) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x0002bf1f) sctrl_sk_top_pane_g_ParamLimits

0x7673,	// (0x00023892) sctrl_sk_top_pane_t1_ParamLimits

0x7659,	// (0x00023878) aid_touch_sctrl_bottom_ParamLimits

0x7673,	// (0x00023892) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9f1,	// (0x00029c10) aid_area_touch_clock

0x7858,	// (0x00023a77) aid_vkb2_area_top_pane_cell_ParamLimits

0x7858,	// (0x00023a77) aid_vkb2_area_top_pane_cell

0x7988,	// (0x00023ba7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7988,	// (0x00023ba7) aid_vkb2_area_bottom_pane_cell

0xdf5a,	// (0x0002a179) popup_char_count_window

0xe348,	// (0x0002a567) popup_char_count_window_g1

0xe351,	// (0x0002a570) popup_char_count_window_g2

0xe35a,	// (0x0002a579) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x0002bff0) popup_char_count_window_g

0xe363,	// (0x0002a582) popup_char_count_window_t1

0x7712,	// (0x00023931) popup_fep_char_preview_window_ParamLimits

0x7712,	// (0x00023931) popup_fep_char_preview_window

0x7876,	// (0x00023a95) vkb2_top_candi_pane_ParamLimits

0x7876,	// (0x00023a95) vkb2_top_candi_pane

0xe371,	// (0x0002a590) cell_vkb2_top_candi_pane_ParamLimits

0xe371,	// (0x0002a590) cell_vkb2_top_candi_pane

0xa0a2,	// (0x000262c1) bg_popup_fep_char_preview_window_ParamLimits

0xa0a2,	// (0x000262c1) bg_popup_fep_char_preview_window

0x7c89,	// (0x00023ea8) popup_fep_char_preview_window_t1_ParamLimits

0x7c89,	// (0x00023ea8) popup_fep_char_preview_window_t1

0xe3c2,	// (0x0002a5e1) bg_popup_fep_char_preview_window_g1

0xe3ca,	// (0x0002a5e9) bg_popup_fep_char_preview_window_g2

0xe3d2,	// (0x0002a5f1) bg_popup_fep_char_preview_window_g3

0xe3da,	// (0x0002a5f9) bg_popup_fep_char_preview_window_g4

0xe3e2,	// (0x0002a601) bg_popup_fep_char_preview_window_g5

0x7cc3,	// (0x00023ee2) bg_popup_fep_char_preview_window_g6

0xe3ea,	// (0x0002a609) bg_popup_fep_char_preview_window_g7

0xe3f2,	// (0x0002a611) bg_popup_fep_char_preview_window_g8

0xe3fa,	// (0x0002a619) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x0002bff7) bg_popup_fep_char_preview_window_g

0xc32c,	// (0x0002854b) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc32c,	// (0x0002854b) cell_vkb2_top_candi_pane_g1

0xc66d,	// (0x0002888c) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc66d,	// (0x0002888c) cell_vkb2_top_candi_pane_g2

0xc68e,	// (0x000288ad) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc68e,	// (0x000288ad) cell_vkb2_top_candi_pane_g3

0x7ccb,	// (0x00023eea) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7ccb,	// (0x00023eea) cell_vkb2_top_candi_pane_g4

0xe402,	// (0x0002a621) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe402,	// (0x0002a621) cell_vkb2_top_candi_pane_g5

0xd87d,	// (0x00029a9c) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd87d,	// (0x00029a9c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x0002c00a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x0002c00a) cell_vkb2_top_candi_pane_g

0x7cec,	// (0x00023f0b) cell_vkb2_top_candi_pane_t1

0x7124,	// (0x00023343) aid_size_touch_slider_mark_ParamLimits

0x7124,	// (0x00023343) aid_size_touch_slider_mark

0xe041,	// (0x0002a260) grid_graphic2_catg_pane_ParamLimits

0xe041,	// (0x0002a260) grid_graphic2_catg_pane

0xe0bb,	// (0x0002a2da) popup_grid_graphic2_window_t1_ParamLimits

0xe0bb,	// (0x0002a2da) popup_grid_graphic2_window_t1

0xe0cd,	// (0x0002a2ec) popup_grid_graphic2_window_t2_ParamLimits

0xe0cd,	// (0x0002a2ec) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x0002bfc5) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x0002bfc5) popup_grid_graphic2_window_t

0x7ed0,	// (0x000240ef) bg_button_pane_cp05_ParamLimits

0xe23b,	// (0x0002a45a) cell_graphic2_control_pane_g1_ParamLimits

0xe423,	// (0x0002a642) cell_graphic2_catg_pane_ParamLimits

0xe423,	// (0x0002a642) cell_graphic2_catg_pane

0x3448,	// (0x0001f667) bg_button_pane_cp12

0xe435,	// (0x0002a654) cell_graphic2_catg_pane_g1

0xd9bd,	// (0x00029bdc) cell_tb_ext_pane_t1_ParamLimits

0x7aa5,	// (0x00023cc4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7aa5,	// (0x00023cc4) vkb2_top_cell_right_narrow_pane

0x7abd,	// (0x00023cdc) vkb2_top_cell_right_wide_pane_ParamLimits

0x7abd,	// (0x00023cdc) vkb2_top_cell_right_wide_pane

0xcab2,	// (0x00028cd1) bg_vkb2_func_pane_ParamLimits

0xcab2,	// (0x00028cd1) bg_vkb2_func_pane

0x7b2e,	// (0x00023d4d) vkb2_top_cell_left_pane_g1_ParamLimits

0xcab2,	// (0x00028cd1) bg_vkb2_fuc_pane_cp03_ParamLimits

0xcab2,	// (0x00028cd1) bg_vkb2_fuc_pane_cp03

0x7ba2,	// (0x00023dc1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9a04,	// (0x00025c23) bg_vkb2_func_pane_g1

0x9a0c,	// (0x00025c2b) bg_vkb2_func_pane_g2

0x9a1c,	// (0x00025c3b) bg_vkb2_func_pane_g3

0x9a14,	// (0x00025c33) bg_vkb2_func_pane_g4

0x9a24,	// (0x00025c43) bg_vkb2_func_pane_g5

0x9a2c,	// (0x00025c4b) bg_vkb2_func_pane_g6

0x9a34,	// (0x00025c53) bg_vkb2_func_pane_g7

0x9a3c,	// (0x00025c5b) bg_vkb2_func_pane_g8

0x99fc,	// (0x00025c1b) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x0002c017) bg_vkb2_func_pane_g

0xcab2,	// (0x00028cd1) bg_vkb2_fuc_pane_cp01_ParamLimits

0xcab2,	// (0x00028cd1) bg_vkb2_fuc_pane_cp01

0x7b2e,	// (0x00023d4d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7b2e,	// (0x00023d4d) vkb2_top_cell_right_wide_pane_g1

0xcab2,	// (0x00028cd1) bg_vkb2_fuc_pane_cp02_ParamLimits

0xcab2,	// (0x00028cd1) bg_vkb2_fuc_pane_cp02

0x7ba2,	// (0x00023dc1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7ba2,	// (0x00023dc1) vkb2_top_cell_right_narrow_pane_g1

0xd5de,	// (0x000297fd) aid_touch_area_decrease_ParamLimits

0xd5de,	// (0x000297fd) aid_touch_area_decrease

0xd602,	// (0x00029821) aid_touch_area_increase_ParamLimits

0xd602,	// (0x00029821) aid_touch_area_increase

0xd60e,	// (0x0002982d) aid_touch_area_mute_ParamLimits

0xd60e,	// (0x0002982d) aid_touch_area_mute

0xd632,	// (0x00029851) aid_touch_area_slider_ParamLimits

0xd632,	// (0x00029851) aid_touch_area_slider

0xd722,	// (0x00029941) popup_slider_window_g4_ParamLimits

0xd722,	// (0x00029941) popup_slider_window_g4

0xd72e,	// (0x0002994d) popup_slider_window_g5_ParamLimits

0xd72e,	// (0x0002994d) popup_slider_window_g5

0xd750,	// (0x0002996f) popup_slider_window_g6_ParamLimits

0xd750,	// (0x0002996f) popup_slider_window_g6

0xd790,	// (0x000299af) popup_slider_window_t2_ParamLimits

0xd790,	// (0x000299af) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x0002bf13) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x0002bf13) popup_slider_window_t

0xd7a8,	// (0x000299c7) slider_pane_ParamLimits

0xd7a8,	// (0x000299c7) slider_pane

0xe43e,	// (0x0002a65d) slider_pane_g1_ParamLimits

0xe43e,	// (0x0002a65d) slider_pane_g1

0xe452,	// (0x0002a671) slider_pane_g2_ParamLimits

0xe452,	// (0x0002a671) slider_pane_g2

0xe468,	// (0x0002a687) slider_pane_g3_ParamLimits

0xe468,	// (0x0002a687) slider_pane_g3

0x0003,

0xfe0b,	// (0x0002c02a) slider_pane_g_ParamLimits

0xfe0b,	// (0x0002c02a) slider_pane_g

0x93ea,	// (0x00025609) popup_tb_float_extension_window_ParamLimits

0x93ea,	// (0x00025609) popup_tb_float_extension_window

0xe494,	// (0x0002a6b3) aid_size_cell_tb_float_ext

0x3448,	// (0x0001f667) bg_popup_sub_window_cp28

0xe4a0,	// (0x0002a6bf) grid_tb_float_ext_pane

0xe4ac,	// (0x0002a6cb) cell_tb_float_ext_pane_ParamLimits

0xe4ac,	// (0x0002a6cb) cell_tb_float_ext_pane

0xe4c8,	// (0x0002a6e7) cell_tb_float_ext_pane_g1

0xe4d1,	// (0x0002a6f0) grid_highlight_pane_cp12

0x73ad,	// (0x000235cc) cell_last_hwr_side_pane_ParamLimits

0x73ad,	// (0x000235cc) cell_last_hwr_side_pane

0xc0a2,	// (0x000282c1) cell_last_hwr_side_pane_g1

0xe4da,	// (0x0002a6f9) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x0002c033) cell_last_hwr_side_pane_g

0x7a54,	// (0x00023c73) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7a54,	// (0x00023c73) vkb2_area_bottom_space_btn_pane

0xc32c,	// (0x0002854b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfcd,	// (0x0002a1ec) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7cec,	// (0x00023f0b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7d0a,	// (0x00023f29) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7d0a,	// (0x00023f29) vkb2_area_bottom_space_btn_pane_g1

0x7d44,	// (0x00023f63) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7d44,	// (0x00023f63) vkb2_area_bottom_space_btn_pane_g2

0x7d7a,	// (0x00023f99) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7d7a,	// (0x00023f99) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x0002c038) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x0002c038) vkb2_area_bottom_space_btn_pane_g

0x731d,	// (0x0002353c) cel_fep_hwr_func_pane_ParamLimits

0x731d,	// (0x0002353c) cel_fep_hwr_func_pane

0x7359,	// (0x00023578) cell_hwr_side_button_pane_ParamLimits

0x7359,	// (0x00023578) cell_hwr_side_button_pane

0xd9f1,	// (0x00029c10) aid_area_touch_clock_ParamLimits

0x62dc,	// (0x000224fb) bg_uniindi_top_pane_ParamLimits

0xda05,	// (0x00029c24) uniindi_top_pane_g1_ParamLimits

0xda1b,	// (0x00029c3a) uniindi_top_pane_g2_ParamLimits

0xda27,	// (0x00029c46) uniindi_top_pane_g3_ParamLimits

0xda38,	// (0x00029c57) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x0002bf4b) uniindi_top_pane_g_ParamLimits

0xda45,	// (0x00029c64) uniindi_top_pane_t1_ParamLimits

0x62dc,	// (0x000224fb) bg_vkb2_func_pane_cp01_ParamLimits

0x62dc,	// (0x000224fb) bg_vkb2_func_pane_cp01

0xe4e3,	// (0x0002a702) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e3,	// (0x0002a702) cel_fep_hwr_func_pane_g1

0x62dc,	// (0x000224fb) bg_vkb2_func_pane_cp02_ParamLimits

0x62dc,	// (0x000224fb) bg_vkb2_func_pane_cp02

0xe4e3,	// (0x0002a702) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e3,	// (0x0002a702) cell_hwr_side_button_pane_g1

0x9871,	// (0x00025a90) status_pane_g4_ParamLimits

0x9871,	// (0x00025a90) status_pane_g4

0x988b,	// (0x00025aaa) status_pane_t1

0xbe3e,	// (0x0002805d) form2_midp_gauge_slider_cont_pane

0xbe46,	// (0x00028065) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe58,	// (0x00028077) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe6a,	// (0x00028089) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0002bd17) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe7c,	// (0x0002809b) form2_midp_slider_pane_ParamLimits

0x76da,	// (0x000238f9) aid_size_cell_func_vkb2_ParamLimits

0x76da,	// (0x000238f9) aid_size_cell_func_vkb2

0xe480,	// (0x0002a69f) slider_pane_g4_ParamLimits

0xe480,	// (0x0002a69f) slider_pane_g4

0x7dc4,	// (0x00023fe3) form2_midp_gauge_slider_pane_t2_cp01

0x7dd2,	// (0x00023ff1) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7dd2,	// (0x00023ff1) form2_midp_gauge_slider_pane_t3_cp01

0x7def,	// (0x0002400e) form2_midp_slider_pane_cp01

0x3448,	// (0x0001f667) navi_smil_pane

0xe51c,	// (0x0002a73b) navi_smil_pane_g1

0xe524,	// (0x0002a743) navi_smil_pane_t1

0xe4f1,	// (0x0002a710) form2_midp_slider_pane_g1

0xe4fa,	// (0x0002a719) form2_midp_slider_pane_g2

0xe502,	// (0x0002a721) form2_midp_slider_pane_g3

0xe4f1,	// (0x0002a710) form2_midp_slider_pane_g4

0xe50a,	// (0x0002a729) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x0002c041) form2_midp_slider_pane_g

0x7db4,	// (0x00023fd3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7db4,	// (0x00023fd3) vkb2_area_bottom_space_btn_pane_g4

0x9689,	// (0x000258a8) lc0_navi_pane_ParamLimits

0x9689,	// (0x000258a8) lc0_navi_pane

0x9705,	// (0x00025924) lc0_stat_indi_pane_ParamLimits

0x9705,	// (0x00025924) lc0_stat_indi_pane

0x971c,	// (0x0002593b) ls0_title_pane_ParamLimits

0x971c,	// (0x0002593b) ls0_title_pane

0x7ed0,	// (0x000240ef) bg_popup_sub_pane_cp14_ParamLimits

0xd9d8,	// (0x00029bf7) list_uniindi_pane_ParamLimits

0xd9e4,	// (0x00029c03) uniindi_top_pane_ParamLimits

0xda83,	// (0x00029ca2) list_single_uniindi_pane_g1_ParamLimits

0xda96,	// (0x00029cb5) list_single_uniindi_pane_t1_ParamLimits

0x7df8,	// (0x00024017) lc0_stat_clock_pane_ParamLimits

0x7df8,	// (0x00024017) lc0_stat_clock_pane

0xe532,	// (0x0002a751) lc0_stat_indi_pane_g1_ParamLimits

0xe532,	// (0x0002a751) lc0_stat_indi_pane_g1

0xe53f,	// (0x0002a75e) lc0_stat_indi_pane_g2_ParamLimits

0xe53f,	// (0x0002a75e) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x0002c04c) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x0002c04c) lc0_stat_indi_pane_g

0x7e05,	// (0x00024024) lc0_uni_indicator_pane_ParamLimits

0x7e05,	// (0x00024024) lc0_uni_indicator_pane

0xe54c,	// (0x0002a76b) ls0_title_pane_g1_ParamLimits

0xe54c,	// (0x0002a76b) ls0_title_pane_g1

0xe560,	// (0x0002a77f) ls0_title_pane_t1_ParamLimits

0xe560,	// (0x0002a77f) ls0_title_pane_t1

0x7e12,	// (0x00024031) lc0_uni_indicator_pane_g1_ParamLimits

0x7e12,	// (0x00024031) lc0_uni_indicator_pane_g1

0xe596,	// (0x0002a7b5) lc0_stat_clock_pane_t1

0x3448,	// (0x0001f667) main_ai5_pane

0xe5a4,	// (0x0002a7c3) ai5_sk_pane_ParamLimits

0xe5a4,	// (0x0002a7c3) ai5_sk_pane

0xe5b1,	// (0x0002a7d0) cell_ai5_widget_pane_ParamLimits

0xe5b1,	// (0x0002a7d0) cell_ai5_widget_pane

0xe627,	// (0x0002a846) aid_size_cell_widget_grid

0xe63b,	// (0x0002a85a) bg_ai5_widget_pane_ParamLimits

0xe63b,	// (0x0002a85a) bg_ai5_widget_pane

0xe663,	// (0x0002a882) cell_ai5_widget_pane_g2

0xe673,	// (0x0002a892) cell_ai5_widget_pane_g3

0xe692,	// (0x0002a8b1) cell_ai5_widget_pane_g4

0xe69e,	// (0x0002a8bd) cell_ai5_widget_pane_g5

0xe6aa,	// (0x0002a8c9) cell_ai5_widget_pane_g6

0xe6b8,	// (0x0002a8d7) cell_ai5_widget_pane_g7

0xe700,	// (0x0002a91f) cell_ai5_widget_pane_t1_ParamLimits

0xe700,	// (0x0002a91f) cell_ai5_widget_pane_t1

0xe71d,	// (0x0002a93c) cell_ai5_widget_pane_t2_ParamLimits

0xe71d,	// (0x0002a93c) cell_ai5_widget_pane_t2

0xe735,	// (0x0002a954) cell_ai5_widget_pane_t3_ParamLimits

0xe735,	// (0x0002a954) cell_ai5_widget_pane_t3

0xe74d,	// (0x0002a96c) cell_ai5_widget_pane_t4_ParamLimits

0xe74d,	// (0x0002a96c) cell_ai5_widget_pane_t4

0xe767,	// (0x0002a986) cell_ai5_widget_pane_t5_ParamLimits

0xe767,	// (0x0002a986) cell_ai5_widget_pane_t5

0xe786,	// (0x0002a9a5) cell_ai5_widget_pane_t6_ParamLimits

0xe786,	// (0x0002a9a5) cell_ai5_widget_pane_t6

0xe798,	// (0x0002a9b7) cell_ai5_widget_pane_t7_ParamLimits

0xe798,	// (0x0002a9b7) cell_ai5_widget_pane_t7

0xe7b1,	// (0x0002a9d0) cell_ai5_widget_pane_t8_ParamLimits

0xe7b1,	// (0x0002a9d0) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x0002c066) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x0002c066) cell_ai5_widget_pane_t

0xe7fd,	// (0x0002aa1c) grid_ai5_widget_pane

0x7ed0,	// (0x000240ef) highlight_cell_ai5_widget_pane_ParamLimits

0x7ed0,	// (0x000240ef) highlight_cell_ai5_widget_pane

0xe814,	// (0x0002aa33) ai5_sk_left_pane

0xe81e,	// (0x0002aa3d) ai5_sk_middle_pane

0xe828,	// (0x0002aa47) ai5_sk_right_pane

0xe832,	// (0x0002aa51) bg_ai5_widget_pane_g1_ParamLimits

0xe832,	// (0x0002aa51) bg_ai5_widget_pane_g1

0xe83e,	// (0x0002aa5d) bg_ai5_widget_pane_g2_ParamLimits

0xe83e,	// (0x0002aa5d) bg_ai5_widget_pane_g2

0xe84a,	// (0x0002aa69) bg_ai5_widget_pane_g3_ParamLimits

0xe84a,	// (0x0002aa69) bg_ai5_widget_pane_g3

0xe856,	// (0x0002aa75) bg_ai5_widget_pane_g4_ParamLimits

0xe856,	// (0x0002aa75) bg_ai5_widget_pane_g4

0xe862,	// (0x0002aa81) bg_ai5_widget_pane_g5_ParamLimits

0xe862,	// (0x0002aa81) bg_ai5_widget_pane_g5

0xe86e,	// (0x0002aa8d) bg_ai5_widget_pane_g6_ParamLimits

0xe86e,	// (0x0002aa8d) bg_ai5_widget_pane_g6

0xe87a,	// (0x0002aa99) bg_ai5_widget_pane_g7_ParamLimits

0xe87a,	// (0x0002aa99) bg_ai5_widget_pane_g7

0xe886,	// (0x0002aaa5) bg_ai5_widget_pane_g8_ParamLimits

0xe886,	// (0x0002aaa5) bg_ai5_widget_pane_g8

0xe892,	// (0x0002aab1) bg_ai5_widget_pane_g9_ParamLimits

0xe892,	// (0x0002aab1) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x0002c07b) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x0002c07b) bg_ai5_widget_pane_g

0xe8b9,	// (0x0002aad8) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8b9,	// (0x0002aad8) cell_shortcut_ai5_widget_pane

0x611e,	// (0x0002233d) bg_cell_shortcut_ai5_widget_pane

0xe8cb,	// (0x0002aaea) cell_grid_ai5_widget_pane_g1

0xe8d4,	// (0x0002aaf3) highlight_cell_shortcut_ai5_widget_pane

0x9a0c,	// (0x00025c2b) ai5_sk_left_pane_g1

0xe8dc,	// (0x0002aafb) ai5_sk_left_pane_g2

0xe8e4,	// (0x0002ab03) ai5_sk_left_pane_g3

0xe8ec,	// (0x0002ab0b) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x0002c08e) ai5_sk_left_pane_g

0xe8f4,	// (0x0002ab13) ai5_sk_left_pane_t1

0x9a04,	// (0x00025c23) ai5_sk_right_pane_g1

0xe902,	// (0x0002ab21) ai5_sk_right_pane_g2

0xe90a,	// (0x0002ab29) ai5_sk_right_pane_g3

0xe912,	// (0x0002ab31) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x0002c097) ai5_sk_right_pane_g

0xe91a,	// (0x0002ab39) ai5_sk_right_pane_t1

0x9a04,	// (0x00025c23) ai5_sk_middle_pane_g1

0x9a0c,	// (0x00025c2b) ai5_sk_middle_pane_g2

0x9a24,	// (0x00025c43) ai5_sk_middle_pane_g3

0xe90a,	// (0x0002ab29) ai5_sk_middle_pane_g4

0xe8e4,	// (0x0002ab03) ai5_sk_middle_pane_g5

0xe928,	// (0x0002ab47) ai5_sk_middle_pane_g6

0xe930,	// (0x0002ab4f) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x0002c0a0) ai5_sk_middle_pane_g

0x950b,	// (0x0002572a) aid_touch_area_size_lc0_ParamLimits

0x950b,	// (0x0002572a) aid_touch_area_size_lc0

0x74bc,	// (0x000236db) cell_hwr_candidate_pane_t1_ParamLimits

0x9529,	// (0x00025748) aid_touch_navi_pane

0x981b,	// (0x00025a3a) status_dt_navi_pane_ParamLimits

0x981b,	// (0x00025a3a) status_dt_navi_pane

0x9828,	// (0x00025a47) status_dt_sta_pane_ParamLimits

0x9828,	// (0x00025a47) status_dt_sta_pane

0xe938,	// (0x0002ab57) dt_sta_controll_pane

0xe945,	// (0x0002ab64) dt_sta_indi_pane

0xe956,	// (0x0002ab75) dt_sta_title_pane

0x62dc,	// (0x000224fb) bg_dt_sta_indi_pane_ParamLimits

0x62dc,	// (0x000224fb) bg_dt_sta_indi_pane

0xe969,	// (0x0002ab88) dt_sta_battery_pane

0xe971,	// (0x0002ab90) dt_sta_indi_pane_g1

0xe97a,	// (0x0002ab99) dt_sta_indi_pane_g2

0xe983,	// (0x0002aba2) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x0002c0af) dt_sta_indi_pane_g

0xe98c,	// (0x0002abab) dt_sta_signal_pane

0x7ed0,	// (0x000240ef) bg_dt_sta_title_pane_ParamLimits

0x7ed0,	// (0x000240ef) bg_dt_sta_title_pane

0xe995,	// (0x0002abb4) dt_sta_title_pane_g1

0xe99d,	// (0x0002abbc) dt_sta_title_pane_t1_ParamLimits

0xe99d,	// (0x0002abbc) dt_sta_title_pane_t1

0x3448,	// (0x0001f667) bg_dt_sta_control_pane

0xe9b2,	// (0x0002abd1) dt_sta_controll_pane_g1

0xe9bb,	// (0x0002abda) bg_dt_sta_title_pane_g1

0xe9c4,	// (0x0002abe3) bg_dt_sta_title_pane_g2

0xe9cd,	// (0x0002abec) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x0002c0b6) bg_dt_sta_title_pane_g

0xc0a2,	// (0x000282c1) bg_dt_sta_indi_pane_g1

0xe9d6,	// (0x0002abf5) dt_sta_signal_pane_g1

0xe9de,	// (0x0002abfd) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x0002c0bd) dt_sta_signal_pane_g

0xe9e6,	// (0x0002ac05) dt_sta_battery_pane_g1

0xe9ef,	// (0x0002ac0e) dt_sta_battery_pane_t1

0xc0a2,	// (0x000282c1) bg_dt_sta_control_pane_g1

0x862c,	// (0x0002484b) fep_china_uni_eep_pane

0x8634,	// (0x00024853) fep_china_uni_entry_pane_ParamLimits

0x8644,	// (0x00024863) popup_fep_china_uni_window_g1_ParamLimits

0x8654,	// (0x00024873) popup_fep_china_uni_window_g2_ParamLimits

0x8654,	// (0x00024873) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0002b954) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0002b954) popup_fep_china_uni_window_g

0xe9fe,	// (0x0002ac1d) fep_china_uni_eep_pane_g1

0xea06,	// (0x0002ac25) fep_china_uni_eep_pane_t1

0xe513,	// (0x0002a732) aid_touch_area_size_smil_player

0x9681,	// (0x000258a0) lc0_clock_pane

0x987f,	// (0x00025a9e) status_pane_g5_ParamLimits

0x987f,	// (0x00025a9e) status_pane_g5

0x906f,	// (0x0002528e) popup_keymap_window

0x983d,	// (0x00025a5c) status_icon_pane

0xe673,	// (0x0002a892) cell_ai5_widget_pane_g3_ParamLimits

0xe692,	// (0x0002a8b1) cell_ai5_widget_pane_g4_ParamLimits

0xe69e,	// (0x0002a8bd) cell_ai5_widget_pane_g5_ParamLimits

0xe6c4,	// (0x0002a8e3) cell_ai5_widget_pane_g8_ParamLimits

0xe6c4,	// (0x0002a8e3) cell_ai5_widget_pane_g8

0xe6d8,	// (0x0002a8f7) cell_ai5_widget_pane_g9_ParamLimits

0xe6d8,	// (0x0002a8f7) cell_ai5_widget_pane_g9

0xe6ec,	// (0x0002a90b) cell_ai5_widget_pane_g10_ParamLimits

0xe6ec,	// (0x0002a90b) cell_ai5_widget_pane_g10

0xea15,	// (0x0002ac34) status_icon_pane_g1

0x3448,	// (0x0001f667) bg_popup_sub_pane_cp13

0xea1d,	// (0x0002ac3c) popup_keymap_window_t1

0x8e09,	// (0x00025028) control_pane_g6_ParamLimits

0x8e09,	// (0x00025028) control_pane_g6

0x8e16,	// (0x00025035) control_pane_g7_ParamLimits

0x8e16,	// (0x00025035) control_pane_g7

0x8e23,	// (0x00025042) control_pane_g8_ParamLimits

0x8e23,	// (0x00025042) control_pane_g8

0xe938,	// (0x0002ab57) dt_sta_controll_pane_ParamLimits

0xe945,	// (0x0002ab64) dt_sta_indi_pane_ParamLimits

0xe956,	// (0x0002ab75) dt_sta_title_pane_ParamLimits

0x6811,	// (0x00022a30) aid_size_touch_scroll_bar_cale

0x5d68,	// (0x00021f87) popup_discreet_window_ParamLimits

0x5d68,	// (0x00021f87) popup_discreet_window

0x5df6,	// (0x00022015) popup_sk_window

0xa0a2,	// (0x000262c1) bg_popup_sub_pane_cp28_ParamLimits

0xa0a2,	// (0x000262c1) bg_popup_sub_pane_cp28

0xea2b,	// (0x0002ac4a) popup_discreet_window_g1_ParamLimits

0xea2b,	// (0x0002ac4a) popup_discreet_window_g1

0xea4b,	// (0x0002ac6a) popup_discreet_window_t1_ParamLimits

0xea4b,	// (0x0002ac6a) popup_discreet_window_t1

0xea69,	// (0x0002ac88) popup_discreet_window_t2_ParamLimits

0xea69,	// (0x0002ac88) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x0002c0c2) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x0002c0c2) popup_discreet_window_t

0x7e25,	// (0x00024044) popup_sk_window_g1

0x7e2f,	// (0x0002404e) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x0002c0c9) popup_sk_window_g

0xeabb,	// (0x0002acda) popup_sk_window_t1

0xeac9,	// (0x0002ace8) popup_sk_window_t1_copy1

0xe663,	// (0x0002a882) cell_ai5_widget_pane_g2_ParamLimits

0xe7c3,	// (0x0002a9e2) cell_ai5_widget_pane_t9_ParamLimits

0xe7c3,	// (0x0002a9e2) cell_ai5_widget_pane_t9

0x3448,	// (0x0001f667) main_fep_fshwr2_pane

0xead7,	// (0x0002acf6) aid_fshwr2_btn_pane

0xeadf,	// (0x0002acfe) aid_fshwr2_syb_pane

0xeae7,	// (0x0002ad06) aid_fshwr2_txt_pane

0xeaef,	// (0x0002ad0e) fshwr2_func_candi_pane

0xeaf9,	// (0x0002ad18) fshwr2_hwr_syb_pane

0xeb03,	// (0x0002ad22) fshwr2_icf_pane

0x3448,	// (0x0001f667) fshwr2_icf_bg_pane

0xeb25,	// (0x0002ad44) fshwr2_icf_pane_t1_ParamLimits

0xeb25,	// (0x0002ad44) fshwr2_icf_pane_t1

0xc0a2,	// (0x000282c1) fshwr2_func_candi_pane_g1

0xeb3c,	// (0x0002ad5b) fshwr2_func_candi_row_pane_ParamLimits

0xeb3c,	// (0x0002ad5b) fshwr2_func_candi_row_pane

0xeb4d,	// (0x0002ad6c) cell_fshwr2_syb_pane_ParamLimits

0xeb4d,	// (0x0002ad6c) cell_fshwr2_syb_pane

0xc32c,	// (0x0002854b) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc32c,	// (0x0002854b) fshwr2_hwr_syb_pane_g1

0x3448,	// (0x0001f667) bg_popup_call_pane_cp01

0xeb67,	// (0x0002ad86) fshwr2_func_candi_cell_pane_ParamLimits

0xeb67,	// (0x0002ad86) fshwr2_func_candi_cell_pane

0xeb99,	// (0x0002adb8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb99,	// (0x0002adb8) fshwr2_func_candi_cell_bg_pane

0xebb3,	// (0x0002add2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebb3,	// (0x0002add2) fshwr2_func_candi_cell_pane_g1

0xebd3,	// (0x0002adf2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebd3,	// (0x0002adf2) fshwr2_func_candi_cell_pane_t1

0x3448,	// (0x0001f667) bg_button_pane_cp08

0x8b2e,	// (0x00024d4d) cell_fshwr2_syb_bg_pane

0xebe6,	// (0x0002ae05) cell_fshwr2_syb_bg_pane_g1

0xebee,	// (0x0002ae0d) cell_fshwr2_syb_bg_pane_t1

0x7ed0,	// (0x000240ef) main_tmo_pane

0xabcc,	// (0x00026deb) uni_indicator_pane_g1_ParamLimits

0xabe1,	// (0x00026e00) uni_indicator_pane_g2_ParamLimits

0xabf7,	// (0x00026e16) uni_indicator_pane_g3_ParamLimits

0xac0d,	// (0x00026e2c) uni_indicator_pane_g4_ParamLimits

0xac0d,	// (0x00026e2c) uni_indicator_pane_g4

0xac21,	// (0x00026e40) uni_indicator_pane_g5_ParamLimits

0xac21,	// (0x00026e40) uni_indicator_pane_g5

0xac35,	// (0x00026e54) uni_indicator_pane_g6_ParamLimits

0xac35,	// (0x00026e54) uni_indicator_pane_g6

0xf932,	// (0x0002bb51) uni_indicator_pane_g_ParamLimits

0xd5ae,	// (0x000297cd) popup_tmo_note_window_ParamLimits

0xd5ae,	// (0x000297cd) popup_tmo_note_window

0x3448,	// (0x0001f667) fshwr2_bg_pane

0xebc4,	// (0x0002ade3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc4,	// (0x0002ade3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x0002c0ce) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x0002c0ce) fshwr2_func_candi_cell_pane_g

0xc0a2,	// (0x000282c1) bg_popup_window_pane_cp01

0xebfd,	// (0x0002ae1c) bg_popup_window_pane_g1_cp01

0xec06,	// (0x0002ae25) bg_popup_window_pane_cp22_ParamLimits

0xec06,	// (0x0002ae25) bg_popup_window_pane_cp22

0xec14,	// (0x0002ae33) listscroll_tmo_link_pane_ParamLimits

0xec14,	// (0x0002ae33) listscroll_tmo_link_pane

0xec54,	// (0x0002ae73) popup_tmo_note_window_g1_ParamLimits

0xec54,	// (0x0002ae73) popup_tmo_note_window_g1

0xec61,	// (0x0002ae80) tmo_note_info_pane_ParamLimits

0xec61,	// (0x0002ae80) tmo_note_info_pane

0xec7b,	// (0x0002ae9a) list_tmo_note_info_pane_g1_ParamLimits

0xec7b,	// (0x0002ae9a) list_tmo_note_info_pane_g1

0xec92,	// (0x0002aeb1) list_tmo_note_info_pane_g2_ParamLimits

0xec92,	// (0x0002aeb1) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x0002c0d3) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x0002c0d3) list_tmo_note_info_pane_g

0xecae,	// (0x0002aecd) list_tmo_note_info_text_pane_ParamLimits

0xecae,	// (0x0002aecd) list_tmo_note_info_text_pane

0xed33,	// (0x0002af52) list_tmo_link_pane

0xed40,	// (0x0002af5f) scroll_pane_cp20

0xed4d,	// (0x0002af6c) list_single_tmo_link_pane_ParamLimits

0xed4d,	// (0x0002af6c) list_single_tmo_link_pane

0xed5d,	// (0x0002af7c) list_single_tmo_link_pane_t1

0xed6b,	// (0x0002af8a) list_tmo_note_info_text_pane_t1_ParamLimits

0xed6b,	// (0x0002af8a) list_tmo_note_info_text_pane_t1

0x7f96,	// (0x000241b5) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7f96,	// (0x000241b5) aid_size_touch_scroll_bar_cp01

0x5137,	// (0x00021356) aid_size_touch_slider_marker

0x5dde,	// (0x00021ffd) popup_settings_window_ParamLimits

0x5dde,	// (0x00021ffd) popup_settings_window

0x52e2,	// (0x00021501) popup_candi_list_indi_window

0x9529,	// (0x00025748) aid_touch_navi_pane_ParamLimits

0x762d,	// (0x0002384c) rs_clock_indi_pane

0x7636,	// (0x00023855) sctrl_sk_bottom_pane_ParamLimits

0x7647,	// (0x00023866) sctrl_sk_top_pane_ParamLimits

0x772c,	// (0x0002394b) popup_fep_tooltip_window

0xe627,	// (0x0002a846) aid_size_cell_widget_grid_ParamLimits

0xe657,	// (0x0002a876) cell_ai5_widget_pane_g1_ParamLimits

0xe657,	// (0x0002a876) cell_ai5_widget_pane_g1

0xe6aa,	// (0x0002a8c9) cell_ai5_widget_pane_g6_ParamLimits

0xe6b8,	// (0x0002a8d7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x0002c051) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x0002c051) cell_ai5_widget_pane_g

0xe7e7,	// (0x0002aa06) cell_ai5_widget_pane_t10_ParamLimits

0xe7e7,	// (0x0002aa06) cell_ai5_widget_pane_t10

0xe7fd,	// (0x0002aa1c) grid_ai5_widget_pane_ParamLimits

0xe89e,	// (0x0002aabd) cell_contacts_ai5_widget_pane_ParamLimits

0xe89e,	// (0x0002aabd) cell_contacts_ai5_widget_pane

0xea7e,	// (0x0002ac9d) popup_discreet_window_t3_ParamLimits

0xea7e,	// (0x0002ac9d) popup_discreet_window_t3

0xeb0d,	// (0x0002ad2c) popup_fshwr2_char_preview_window_ParamLimits

0xeb0d,	// (0x0002ad2c) popup_fshwr2_char_preview_window

0xeccc,	// (0x0002aeeb) tmo_note_info_pane_t1

0xece1,	// (0x0002af00) tmo_note_info_pane_t2

0xecfa,	// (0x0002af19) tmo_note_info_pane_t3

0xed0f,	// (0x0002af2e) tmo_note_info_pane_t4

0xed21,	// (0x0002af40) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x0002c0d8) tmo_note_info_pane_t

0xed33,	// (0x0002af52) list_tmo_link_pane_ParamLimits

0xed40,	// (0x0002af5f) scroll_pane_cp20_ParamLimits

0x3448,	// (0x0001f667) bg_popup_fep_char_preview_window_cp01

0xed84,	// (0x0002afa3) popup_fshwr2_char_preview_window_t1

0xed92,	// (0x0002afb1) popup_candi_list_indi_window_g1

0xed9b,	// (0x0002afba) bg_cell_contacts_ai5_widget_pane

0xeda7,	// (0x0002afc6) cell_contacts_ai5_widget_pane_g1

0xedbb,	// (0x0002afda) cell_contacts_ai5_widget_pane_g2

0xedca,	// (0x0002afe9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x0002c0e3) cell_contacts_ai5_widget_pane_g

0xeddd,	// (0x0002affc) cell_contacts_ai5_widget_pane_t1

0x7ed0,	// (0x000240ef) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee57,	// (0x0002b076) settings_container_pane

0x8b2e,	// (0x00024d4d) listscroll_set_pane_copy1

0xb7e8,	// (0x00027a07) scroll_pane_cp121_copy1

0xee63,	// (0x0002b082) set_content_pane_copy1

0xee6b,	// (0x0002b08a) aid_height_set_list_copy1_ParamLimits

0xee6b,	// (0x0002b08a) aid_height_set_list_copy1

0xae35,	// (0x00027054) aid_size_parent_copy1_ParamLimits

0xae35,	// (0x00027054) aid_size_parent_copy1

0xee77,	// (0x0002b096) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee77,	// (0x0002b096) button_value_adjust_pane_cp6_copy1

0x8eb4,	// (0x000250d3) list_highlight_pane_cp2_copy1_ParamLimits

0x8eb4,	// (0x000250d3) list_highlight_pane_cp2_copy1

0xee8b,	// (0x0002b0aa) list_set_pane_copy1_ParamLimits

0xee8b,	// (0x0002b0aa) list_set_pane_copy1

0xedf2,	// (0x0002b011) main_pane_set_t1_copy1_ParamLimits

0xedf2,	// (0x0002b011) main_pane_set_t1_copy1

0xee2c,	// (0x0002b04b) main_pane_set_t2_copy1_ParamLimits

0xee2c,	// (0x0002b04b) main_pane_set_t2_copy1

0xef52,	// (0x0002b171) main_pane_set_t3_copy1

0xef60,	// (0x0002b17f) main_pane_set_t4_copy1

0xee4b,	// (0x0002b06a) set_content_pane_g1_copy1_ParamLimits

0xee4b,	// (0x0002b06a) set_content_pane_g1_copy1

0xef6e,	// (0x0002b18d) setting_code_pane_copy1

0xef78,	// (0x0002b197) setting_slider_graphic_pane_copy1

0xef78,	// (0x0002b197) setting_slider_pane_copy1

0xef78,	// (0x0002b197) setting_text_pane_copy1

0xef82,	// (0x0002b1a1) setting_volume_pane_copy1

0xef8b,	// (0x0002b1aa) settings_code_pane_cp2_copy1

0xef93,	// (0x0002b1b2) settings_code_pane_cp_copy1_ParamLimits

0xef93,	// (0x0002b1b2) settings_code_pane_cp_copy1

0xefa7,	// (0x0002b1c6) volume_set_pane_copy1

0xefb3,	// (0x0002b1d2) volume_set_pane_g10_copy1

0xefbf,	// (0x0002b1de) volume_set_pane_g1_copy1

0xefc9,	// (0x0002b1e8) volume_set_pane_g2_copy1

0xefd3,	// (0x0002b1f2) volume_set_pane_g3_copy1

0xefdd,	// (0x0002b1fc) volume_set_pane_g4_copy1

0xefe7,	// (0x0002b206) volume_set_pane_g5_copy1

0xeff1,	// (0x0002b210) volume_set_pane_g6_copy1

0xeffb,	// (0x0002b21a) volume_set_pane_g7_copy1

0xf005,	// (0x0002b224) volume_set_pane_g8_copy1

0xf00f,	// (0x0002b22e) volume_set_pane_g9_copy1

0x5fc2,	// (0x000221e1) bg_set_opt_pane_cp_copy1_ParamLimits

0x5fc2,	// (0x000221e1) bg_set_opt_pane_cp_copy1

0xf019,	// (0x0002b238) setting_slider_pane_t1_copy1_ParamLimits

0xf019,	// (0x0002b238) setting_slider_pane_t1_copy1

0xf037,	// (0x0002b256) setting_slider_pane_t2_copy1_ParamLimits

0xf037,	// (0x0002b256) setting_slider_pane_t2_copy1

0xf051,	// (0x0002b270) setting_slider_pane_t3_copy1_ParamLimits

0xf051,	// (0x0002b270) setting_slider_pane_t3_copy1

0xf069,	// (0x0002b288) slider_set_pane_copy1_ParamLimits

0xf069,	// (0x0002b288) slider_set_pane_copy1

0x7f37,	// (0x00024156) set_opt_bg_pane_g1_copy2

0x7f3f,	// (0x0002415e) set_opt_bg_pane_g2_copy2

0xf07f,	// (0x0002b29e) set_opt_bg_pane_g3_copy2

0x7f4f,	// (0x0002416e) set_opt_bg_pane_g4_copy2

0x7f57,	// (0x00024176) set_opt_bg_pane_g5_copy2

0x7f5f,	// (0x0002417e) set_opt_bg_pane_g6_copy2

0xf089,	// (0x0002b2a8) set_opt_bg_pane_g7_copy2

0xf093,	// (0x0002b2b2) set_opt_bg_pane_g8_copy2

0xf09d,	// (0x0002b2bc) set_opt_bg_pane_g9_copy2

0xf0a7,	// (0x0002b2c6) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0a7,	// (0x0002b2c6) aid_size_touch_slider_mark_copy1

0xf0bb,	// (0x0002b2da) slider_set_pane_g1_copy1

0xf0c4,	// (0x0002b2e3) slider_set_pane_g2_copy1

0xb468,	// (0x00027687) slider_set_pane_g3_copy1_ParamLimits

0xb468,	// (0x00027687) slider_set_pane_g3_copy1

0xb47c,	// (0x0002769b) slider_set_pane_g4_copy1_ParamLimits

0xb47c,	// (0x0002769b) slider_set_pane_g4_copy1

0xb494,	// (0x000276b3) slider_set_pane_g5_copy1_ParamLimits

0xb494,	// (0x000276b3) slider_set_pane_g5_copy1

0xb468,	// (0x00027687) slider_set_pane_g6_copy1_ParamLimits

0xb468,	// (0x00027687) slider_set_pane_g6_copy1

0xf0cc,	// (0x0002b2eb) slider_set_pane_g7_copy1_ParamLimits

0xf0cc,	// (0x0002b2eb) slider_set_pane_g7_copy1

0x345c,	// (0x0001f67b) bg_set_opt_pane_cp2_copy1

0xf0e2,	// (0x0002b301) setting_slider_graphic_pane_g1_copy1

0xf0eb,	// (0x0002b30a) setting_slider_graphic_pane_t1_copy1

0xf0fb,	// (0x0002b31a) setting_slider_graphic_pane_t2_copy1

0xf10b,	// (0x0002b32a) slider_set_pane_cp_copy1

0xf11b,	// (0x0002b33a) input_focus_pane_cp1_copy1

0xf124,	// (0x0002b343) list_set_text_pane_copy1

0xf12c,	// (0x0002b34b) setting_text_pane_g1_copy1

0x5abf,	// (0x00021cde) set_text_pane_t1_copy1

0xf11b,	// (0x0002b33a) input_focus_pane_cp2_copy1

0xf12c,	// (0x0002b34b) setting_code_pane_g1_copy1

0xf135,	// (0x0002b354) setting_code_pane_t1_copy1

0xf143,	// (0x0002b362) list_set_graphic_pane_copy1

0x345c,	// (0x0001f67b) bg_set_opt_pane_cp4_copy1

0x8828,	// (0x00024a47) list_set_graphic_pane_g1_copy1_ParamLimits

0x8828,	// (0x00024a47) list_set_graphic_pane_g1_copy1

0xf155,	// (0x0002b374) list_set_graphic_pane_g2_copy1

0x8840,	// (0x00024a5f) list_set_graphic_pane_t1_copy1_ParamLimits

0x8840,	// (0x00024a5f) list_set_graphic_pane_t1_copy1

0xc0a2,	// (0x000282c1) rs_clock_indi_pane_g1

0xf15d,	// (0x0002b37c) rs_clock_indi_pane_t1

0xf16b,	// (0x0002b38a) rs_indi_pane

0xf173,	// (0x0002b392) rs_indi_pane_g1

0xf17c,	// (0x0002b39b) rs_indi_pane_g2

0xf185,	// (0x0002b3a4) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x0002c0ea) rs_indi_pane_g

0x8b2e,	// (0x00024d4d) bg_popup_preview_window_pane_cp03

0xf18e,	// (0x0002b3ad) popup_fep_tooltip_window_t1

0xcd56,	// (0x00028f75) popup_note2_window_g2_ParamLimits

0xcd56,	// (0x00028f75) popup_note2_window_g2

0x0001,

0xfc64,	// (0x0002be83) popup_note2_window_g_ParamLimits

0xfc64,	// (0x0002be83) popup_note2_window_g

0xd25e,	// (0x0002947d) bg_popup_sub_pane_cp11_ParamLimits

0xd26b,	// (0x0002948a) cell_ai3_links_pane_g1_ParamLimits

0xd282,	// (0x000294a1) cell_ai3_links_pane_t1

0x5abf,	// (0x00021cde) set_text_pane_t1_copy1_ParamLimits

0x8a3b,	// (0x00024c5a) cell_graphic_popup_pane_cp2_ParamLimits

0x8a3b,	// (0x00024c5a) cell_graphic_popup_pane_cp2

0xf19c,	// (0x0002b3bb) cell_graphic_popup_pane_g1_cp2

0x6624,	// (0x00022843) cell_graphic_popup_pane_g2_cp2

0xf1a4,	// (0x0002b3c3) cell_graphic_popup_pane_g3_cp2

0xf1ac,	// (0x0002b3cb) cell_graphic_popup_pane_t2_cp2

0x6635,	// (0x00022854) grid_highlight_pane_cp3_cp2

0x8283,	// (0x000244a2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7ed0,	// (0x000240ef) main_tmo_pane_ParamLimits

0xd5a2,	// (0x000297c1) popup_tmo_big_image_note_window

0xe647,	// (0x0002a866) cell_ai5_widget_list_pane

0xe64f,	// (0x0002a86e) cell_ai5_widget_lrg_icon_pane

0xeccc,	// (0x0002aeeb) tmo_note_info_pane_t1_ParamLimits

0xece1,	// (0x0002af00) tmo_note_info_pane_t2_ParamLimits

0xecfa,	// (0x0002af19) tmo_note_info_pane_t3_ParamLimits

0xed0f,	// (0x0002af2e) tmo_note_info_pane_t4_ParamLimits

0xed21,	// (0x0002af40) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x0002c0d8) tmo_note_info_pane_t_ParamLimits

0xee57,	// (0x0002b076) settings_container_pane_ParamLimits

0xf113,	// (0x0002b332) indicator_popup_pane_cp5

0xf113,	// (0x0002b332) indicator_popup_pane_cp6

0xf143,	// (0x0002b362) list_set_graphic_pane_copy1_ParamLimits

0x3448,	// (0x0001f667) bg_popup_window_pane_cp23

0xf1ba,	// (0x0002b3d9) popup_tmo_big_image_note_window_g1

0xf1c6,	// (0x0002b3e5) popup_tmo_big_image_note_window_t1

0xf1d6,	// (0x0002b3f5) popup_tmo_big_image_note_window_t2

0xf1e6,	// (0x0002b405) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x0002c0f1) popup_tmo_big_image_note_window_t

0xf1f6,	// (0x0002b415) cell_ai5_widget_lrg_icon_pane_g1

0xf1fe,	// (0x0002b41d) cell_ai5_widget_lrg_icon_pane_t1

0xf20c,	// (0x0002b42b) cell_ai5_widget_list_row_pane_ParamLimits

0xf20c,	// (0x0002b42b) cell_ai5_widget_list_row_pane

0xf225,	// (0x0002b444) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf225,	// (0x0002b444) cell_ai5_widget_list_row_pane_g1

0xf232,	// (0x0002b451) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf232,	// (0x0002b451) cell_ai5_widget_list_row_pane_t1

0xf24a,	// (0x0002b469) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf24a,	// (0x0002b469) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfed9,	// (0x0002c0f8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x0002c0f8) cell_ai5_widget_list_row_pane_t

0x3448,	// (0x0001f667) main_fep_vtchi_ss_pane

0xf25c,	// (0x0002b47b) popup_fep_char_pre_window

0xf264,	// (0x0002b483) popup_fep_ituss_window

0xf285,	// (0x0002b4a4) popup_fep_vkbss_window

0xf2a6,	// (0x0002b4c5) grid_vkbss_keypad_pane_ParamLimits

0xf2a6,	// (0x0002b4c5) grid_vkbss_keypad_pane

0xf2b6,	// (0x0002b4d5) ituss_keypad_pane

0xf2cf,	// (0x0002b4ee) aid_vkbss_key_offset_ParamLimits

0xf2cf,	// (0x0002b4ee) aid_vkbss_key_offset

0xf2db,	// (0x0002b4fa) cell_vkbss_key_pane_ParamLimits

0xf2db,	// (0x0002b4fa) cell_vkbss_key_pane

0xf2f1,	// (0x0002b510) bg_cell_vkbss_key_g1_ParamLimits

0xf2f1,	// (0x0002b510) bg_cell_vkbss_key_g1

0xf2fd,	// (0x0002b51c) cell_vkbss_key_3p_pane_ParamLimits

0xf2fd,	// (0x0002b51c) cell_vkbss_key_3p_pane

0xf317,	// (0x0002b536) cell_vkbss_key_g1_ParamLimits

0xf317,	// (0x0002b536) cell_vkbss_key_g1

0xf331,	// (0x0002b550) cell_vkbss_key_t1_ParamLimits

0xf331,	// (0x0002b550) cell_vkbss_key_t1

0xf35c,	// (0x0002b57b) cell_ituss_key_pane_ParamLimits

0xf35c,	// (0x0002b57b) cell_ituss_key_pane

0xf36c,	// (0x0002b58b) bg_cell_ituss_key_g1_ParamLimits

0xf36c,	// (0x0002b58b) bg_cell_ituss_key_g1

0xf378,	// (0x0002b597) cell_ituss_key_pane_g1_ParamLimits

0xf378,	// (0x0002b597) cell_ituss_key_pane_g1

0xf384,	// (0x0002b5a3) cell_ituss_key_pane_g2_ParamLimits

0xf384,	// (0x0002b5a3) cell_ituss_key_pane_g2

0x0001,

0xfede,	// (0x0002c0fd) cell_ituss_key_pane_g_ParamLimits

0xfede,	// (0x0002c0fd) cell_ituss_key_pane_g

0xf3a0,	// (0x0002b5bf) cell_ituss_key_t1_ParamLimits

0xf3a0,	// (0x0002b5bf) cell_ituss_key_t1

0xf3ce,	// (0x0002b5ed) cell_ituss_key_t2_ParamLimits

0xf3ce,	// (0x0002b5ed) cell_ituss_key_t2

0xf3ff,	// (0x0002b61e) cell_ituss_key_t3_ParamLimits

0xf3ff,	// (0x0002b61e) cell_ituss_key_t3

0xf430,	// (0x0002b64f) cell_ituss_key_t4_ParamLimits

0xf430,	// (0x0002b64f) cell_ituss_key_t4

0x0003,

0xfee3,	// (0x0002c102) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x0002c102) cell_ituss_key_t

0xf461,	// (0x0002b680) cell_vkbss_key_3p_pane_g1

0xf469,	// (0x0002b688) cell_vkbss_key_3p_pane_g2

0xf471,	// (0x0002b690) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeec,	// (0x0002c10b) cell_vkbss_key_3p_pane_g

0x3448,	// (0x0001f667) bg_popup_fep_char_preview_window_cp02

0xf479,	// (0x0002b698) popup_fep_char_pre_window_t1

0xe61d,	// (0x0002a83c) main_ai5_sk_pane

0xed9b,	// (0x0002afba) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda7,	// (0x0002afc6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedbb,	// (0x0002afda) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedca,	// (0x0002afe9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x0002c0e3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeddd,	// (0x0002affc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7ed0,	// (0x000240ef) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf488,	// (0x0002b6a7) main_ai5_sk_pane_g1

0x9eda,	// (0x000260f9) popup_query_code_window_g1

0xf27a,	// (0x0002b499) popup_fep_vkb_icf_pane

0xf290,	// (0x0002b4af) popup_fep_vtchi_icf_pane

0x7ed0,	// (0x000240ef) bg_icf_pane

0xf4a0,	// (0x0002b6bf) list_vkb_icf_pane

0x7ed0,	// (0x000240ef) bg_icf_pane_cp01

0xd561,	// (0x00029780) vtchi_icf_list_pane

0xf4c0,	// (0x0002b6df) list_vkb_icf_pane_t1_ParamLimits

0xf4c0,	// (0x0002b6df) list_vkb_icf_pane_t1

0xf4d7,	// (0x0002b6f6) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x0002b6f6) vtchi_icf_list_pane_t1

0xf264,	// (0x0002b483) popup_fep_ituss_window_ParamLimits

0xf290,	// (0x0002b4af) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b6,	// (0x0002b4d5) ituss_keypad_pane_ParamLimits

0xf2c6,	// (0x0002b4e5) ituss_sks_pane

0x7ed0,	// (0x000240ef) bg_icf_pane_ParamLimits

0xf491,	// (0x0002b6b0) icf_edit_indi_pane_ParamLimits

0xf491,	// (0x0002b6b0) icf_edit_indi_pane

0xf4a0,	// (0x0002b6bf) list_vkb_icf_pane_ParamLimits

0x7ed0,	// (0x000240ef) bg_icf_pane_cp01_ParamLimits

0xf4ac,	// (0x0002b6cb) icf_edit_indi_pane_cp01_ParamLimits

0xf4ac,	// (0x0002b6cb) icf_edit_indi_pane_cp01

0xf4b8,	// (0x0002b6d7) vtchi_query_pane

0xc32c,	// (0x0002854b) icf_edit_indi_pane_g1_ParamLimits

0xc32c,	// (0x0002854b) icf_edit_indi_pane_g1

0xf4f0,	// (0x0002b70f) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x0002b70f) icf_edit_indi_pane_g2

0x0001,

0xfef3,	// (0x0002c112) icf_edit_indi_pane_g_ParamLimits

0xfef3,	// (0x0002c112) icf_edit_indi_pane_g

0xf4fc,	// (0x0002b71b) icf_edit_indi_pane_t1

0xf50a,	// (0x0002b729) bg_input_focus_pane_cp042

0x6808,	// (0x00022a27) vtchi_button_pane

0xf513,	// (0x0002b732) vtchi_query_pane_t1

0xf521,	// (0x0002b740) vtchi_query_pane_t2

0xf52f,	// (0x0002b74e) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0002c117) vtchi_query_pane_t

0x3448,	// (0x0001f667) bg_button_pane_cp13

0xf53d,	// (0x0002b75c) vtchi_button_pane_g1

0xdacd,	// (0x00029cec) ituss_sks_pane_g1

0xf545,	// (0x0002b764) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0002c11e) ituss_sks_pane_g

0xf54e,	// (0x0002b76d) ituss_sks_pane_t1

0xf55c,	// (0x0002b77b) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0002c123) ituss_sks_pane_t

0xbb49,	// (0x00027d68) indicator_nsta_pane_cp_g1

0xbb52,	// (0x00027d71) indicator_nsta_pane_cp_g2

0xbb5a,	// (0x00027d79) indicator_nsta_pane_cp_g3

0xbb62,	// (0x00027d81) indicator_nsta_pane_cp_g4

0xbb6a,	// (0x00027d89) indicator_nsta_pane_cp_g5

0xbb72,	// (0x00027d91) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0002bccd) indicator_nsta_pane_cp_g

0xe228,	// (0x0002a447) cell_graphic2_pane_t2_ParamLimits

0xe228,	// (0x0002a447) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x0002bfda) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x0002bfda) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small

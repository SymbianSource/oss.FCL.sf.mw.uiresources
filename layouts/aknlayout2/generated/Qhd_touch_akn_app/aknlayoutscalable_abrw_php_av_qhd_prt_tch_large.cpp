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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004abd3 };

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
0x761a,	// (0x000521ed) Screen

0x762e,	// (0x00052201) application_window_ParamLimits

0x762e,	// (0x00052201) application_window

0x7648,	// (0x0005221b) screen_g1

0x47a0,	// (0x0004f373) area_bottom_pane_ParamLimits

0x47a0,	// (0x0004f373) area_bottom_pane

0x4860,	// (0x0004f433) area_top_pane_ParamLimits

0x4860,	// (0x0004f433) area_top_pane

0x48fe,	// (0x0004f4d1) main_pane_ParamLimits

0x48fe,	// (0x0004f4d1) main_pane

0x7652,	// (0x00052225) misc_graphics

0x9800,	// (0x000543d3) battery_pane_ParamLimits

0x9800,	// (0x000543d3) battery_pane

0xa4d4,	// (0x000550a7) bg_status_flat_pane_g8

0xa4dc,	// (0x000550af) bg_status_flat_pane_g9

0x98c2,	// (0x00054495) context_pane_ParamLimits

0x98c2,	// (0x00054495) context_pane

0x99d8,	// (0x000545ab) navi_pane_ParamLimits

0x99d8,	// (0x000545ab) navi_pane

0x9a5c,	// (0x0005462f) signal_pane_ParamLimits

0x9a5c,	// (0x0005462f) signal_pane

0x0008,

0xf87e,	// (0x0005a451) bg_status_flat_pane_g

0x9ac9,	// (0x0005469c) status_pane_g1_ParamLimits

0x9ac9,	// (0x0005469c) status_pane_g1

0x9add,	// (0x000546b0) status_pane_g2_ParamLimits

0x9add,	// (0x000546b0) status_pane_g2

0x9ae9,	// (0x000546bc) status_pane_g3_ParamLimits

0x9ae9,	// (0x000546bc) status_pane_g3

0x0004,

0xf7a5,	// (0x0005a378) status_pane_g_ParamLimits

0xf7a5,	// (0x0005a378) status_pane_g

0x9b1d,	// (0x000546f0) title_pane_ParamLimits

0x9b1d,	// (0x000546f0) title_pane

0x9b5a,	// (0x0005472d) uni_indicator_pane_ParamLimits

0x9b5a,	// (0x0005472d) uni_indicator_pane

0x9724,	// (0x000542f7) bg_list_pane_ParamLimits

0x9724,	// (0x000542f7) bg_list_pane

0x7a3d,	// (0x00052610) find_pane

0x9744,	// (0x00054317) listscroll_app_pane_ParamLimits

0x9744,	// (0x00054317) listscroll_app_pane

0x9750,	// (0x00054323) listscroll_form_pane

0x5914,	// (0x000504e7) listscroll_gen_pane_ParamLimits

0x5914,	// (0x000504e7) listscroll_gen_pane

0x5928,	// (0x000504fb) listscroll_set_pane

0x896c,	// (0x0005353f) main_idle_act_pane

0x9420,	// (0x00053ff3) main_idle_trad_pane

0x9420,	// (0x00053ff3) main_list_empty_pane

0x9744,	// (0x00054317) main_midp_pane

0x9776,	// (0x00054349) main_pane_g1_ParamLimits

0x9776,	// (0x00054349) main_pane_g1

0x593e,	// (0x00050511) popup_ai_message_window_ParamLimits

0x593e,	// (0x00050511) popup_ai_message_window

0x59ec,	// (0x000505bf) popup_fep_china_uni_window_ParamLimits

0x59ec,	// (0x000505bf) popup_fep_china_uni_window

0x5a48,	// (0x0005061b) popup_fep_japan_candidate_window_ParamLimits

0x5a48,	// (0x0005061b) popup_fep_japan_candidate_window

0x5a68,	// (0x0005063b) popup_fep_japan_predictive_window_ParamLimits

0x5a68,	// (0x0005063b) popup_fep_japan_predictive_window

0x5a98,	// (0x0005066b) popup_find_window

0x5aa5,	// (0x00050678) popup_grid_graphic_window_ParamLimits

0x5aa5,	// (0x00050678) popup_grid_graphic_window

0x5acf,	// (0x000506a2) popup_large_graphic_colour_window

0x5af5,	// (0x000506c8) popup_menu_window_ParamLimits

0x5af5,	// (0x000506c8) popup_menu_window

0x5cad,	// (0x00050880) popup_note_image_window

0x5c99,	// (0x0005086c) popup_note_wait_window_ParamLimits

0x5c99,	// (0x0005086c) popup_note_wait_window

0x5c99,	// (0x0005086c) popup_note_window_ParamLimits

0x5c99,	// (0x0005086c) popup_note_window

0x5d03,	// (0x000508d6) popup_query_code_window_ParamLimits

0x5d03,	// (0x000508d6) popup_query_code_window

0x5d17,	// (0x000508ea) popup_query_data_code_window_ParamLimits

0x5d17,	// (0x000508ea) popup_query_data_code_window

0x5d34,	// (0x00050907) popup_query_data_window_ParamLimits

0x5d34,	// (0x00050907) popup_query_data_window

0x5d50,	// (0x00050923) popup_query_sat_info_window_ParamLimits

0x5d50,	// (0x00050923) popup_query_sat_info_window

0x5d89,	// (0x0005095c) popup_snote_single_graphic_window_ParamLimits

0x5d89,	// (0x0005095c) popup_snote_single_graphic_window

0x5d89,	// (0x0005095c) popup_snote_single_text_window_ParamLimits

0x5d89,	// (0x0005095c) popup_snote_single_text_window

0x5d9e,	// (0x00050971) popup_sub_window_general

0x5ece,	// (0x00050aa1) popup_window_general_ParamLimits

0x5ece,	// (0x00050aa1) popup_window_general

0x9784,	// (0x00054357) power_save_pane

0x57a6,	// (0x00050379) control_pane_g1_ParamLimits

0x57a6,	// (0x00050379) control_pane_g1

0x57cd,	// (0x000503a0) control_pane_g2_ParamLimits

0x57cd,	// (0x000503a0) control_pane_g2

0x96e7,	// (0x000542ba) control_pane_g3_ParamLimits

0x96e7,	// (0x000542ba) control_pane_g3

0x0007,

0xf78d,	// (0x0005a360) control_pane_g_ParamLimits

0xf78d,	// (0x0005a360) control_pane_g

0x5817,	// (0x000503ea) control_pane_t1_ParamLimits

0x5817,	// (0x000503ea) control_pane_t1

0x586b,	// (0x0005043e) control_pane_t2_ParamLimits

0x586b,	// (0x0005043e) control_pane_t2

0x0002,

0xf79e,	// (0x0005a371) control_pane_t_ParamLimits

0xf79e,	// (0x0005a371) control_pane_t

0x960c,	// (0x000541df) navi_navi_volume_pane_cp1

0x9614,	// (0x000541e7) status_small_icon_pane

0x961c,	// (0x000541ef) status_small_pane_g1_ParamLimits

0x961c,	// (0x000541ef) status_small_pane_g1

0x9650,	// (0x00054223) status_small_pane_g2_ParamLimits

0x9650,	// (0x00054223) status_small_pane_g2

0x965c,	// (0x0005422f) status_small_pane_g3_ParamLimits

0x965c,	// (0x0005422f) status_small_pane_g3

0x9668,	// (0x0005423b) status_small_pane_g4_ParamLimits

0x9668,	// (0x0005423b) status_small_pane_g4

0x9674,	// (0x00054247) status_small_pane_g5_ParamLimits

0x9674,	// (0x00054247) status_small_pane_g5

0x9682,	// (0x00054255) status_small_pane_g6_ParamLimits

0x9682,	// (0x00054255) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005a34f) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005a34f) status_small_pane_g

0x96b1,	// (0x00054284) status_small_pane_t1

0x96d3,	// (0x000542a6) status_small_wait_pane_ParamLimits

0x96d3,	// (0x000542a6) status_small_wait_pane

0x8e92,	// (0x00053a65) aid_levels_signal_ParamLimits

0x8e92,	// (0x00053a65) aid_levels_signal

0x8ea4,	// (0x00053a77) signal_pane_g1_ParamLimits

0x8ea4,	// (0x00053a77) signal_pane_g1

0x8eb9,	// (0x00053a8c) signal_pane_g2_ParamLimits

0x8eb9,	// (0x00053a8c) signal_pane_g2

0x0003,

0xf70d,	// (0x0005a2e0) signal_pane_g_ParamLimits

0xf70d,	// (0x0005a2e0) signal_pane_g

0x8ef4,	// (0x00053ac7) context_pane_g1

0x765c,	// (0x0005222f) title_pane_g1

0x7692,	// (0x00052265) title_pane_t1

0x76fa,	// (0x000522cd) title_pane_t2

0x7720,	// (0x000522f3) title_pane_t3

0x0002,

0xf557,	// (0x0005a12a) title_pane_t

0x9b72,	// (0x00054745) aid_levels_battery_ParamLimits

0x9b72,	// (0x00054745) aid_levels_battery

0x9b86,	// (0x00054759) battery_pane_g1_ParamLimits

0x9b86,	// (0x00054759) battery_pane_g1

0x9b9c,	// (0x0005476f) battery_pane_g2_ParamLimits

0x9b9c,	// (0x0005476f) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005a383) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005a383) battery_pane_g

0xae0a,	// (0x000559dd) uni_indicator_pane_g1

0xae1d,	// (0x000559f0) uni_indicator_pane_g2

0xae2f,	// (0x00055a02) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0005a4f9) uni_indicator_pane_g

0x9292,	// (0x00053e65) navi_icon_pane_ParamLimits

0x9292,	// (0x00053e65) navi_icon_pane

0x91d0,	// (0x00053da3) navi_midp_pane

0x92ae,	// (0x00053e81) navi_navi_pane

0x92b8,	// (0x00053e8b) navi_text_pane_ParamLimits

0x92b8,	// (0x00053e8b) navi_text_pane

0x7648,	// (0x0005221b) status_small_wait_pane_g1

0x8339,	// (0x00052f0c) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0005a4f4) status_small_wait_pane_g

0xab2f,	// (0x00055702) navi_navi_icon_text_pane

0xab37,	// (0x0005570a) navi_navi_pane_g1_ParamLimits

0xab37,	// (0x0005570a) navi_navi_pane_g1

0xab49,	// (0x0005571c) navi_navi_pane_g2_ParamLimits

0xab49,	// (0x0005571c) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x0005a4c2) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x0005a4c2) navi_navi_pane_g

0xab5b,	// (0x0005572e) navi_navi_tabs_pane

0xab64,	// (0x00055737) navi_navi_text_pane

0xab2f,	// (0x00055702) navi_navi_volume_pane

0xab0b,	// (0x000556de) navi_text_pane_t1

0xaaff,	// (0x000556d2) navi_icon_pane_g1

0xaa52,	// (0x00055625) navi_navi_text_pane_t1

0x6269,	// (0x00050e3c) navi_navi_volume_pane_g1

0x6271,	// (0x00050e44) volume_small_pane

0xa9b8,	// (0x0005558b) navi_navi_icon_text_pane_g1

0xa9c0,	// (0x00055593) navi_navi_icon_text_pane_t1

0x92ae,	// (0x00053e81) navi_tabs_2_long_pane

0x92ae,	// (0x00053e81) navi_tabs_2_pane

0x92ae,	// (0x00053e81) navi_tabs_3_long_pane

0x92ae,	// (0x00053e81) navi_tabs_3_pane

0x92ae,	// (0x00053e81) navi_tabs_4_pane

0x6249,	// (0x00050e1c) tabs_2_active_pane_ParamLimits

0x6249,	// (0x00050e1c) tabs_2_active_pane

0x6259,	// (0x00050e2c) tabs_2_passive_pane_ParamLimits

0x6259,	// (0x00050e2c) tabs_2_passive_pane

0x6217,	// (0x00050dea) tabs_3_active_pane_ParamLimits

0x6217,	// (0x00050dea) tabs_3_active_pane

0x6227,	// (0x00050dfa) tabs_3_passive_pane_ParamLimits

0x6227,	// (0x00050dfa) tabs_3_passive_pane

0x6238,	// (0x00050e0b) tabs_3_passive_pane_cp_ParamLimits

0x6238,	// (0x00050e0b) tabs_3_passive_pane_cp

0x61d3,	// (0x00050da6) tabs_4_active_pane_ParamLimits

0x61d3,	// (0x00050da6) tabs_4_active_pane

0x61e4,	// (0x00050db7) tabs_4_passive_pane_ParamLimits

0x61e4,	// (0x00050db7) tabs_4_passive_pane

0x61f5,	// (0x00050dc8) tabs_4_passive_pane_cp_ParamLimits

0x61f5,	// (0x00050dc8) tabs_4_passive_pane_cp

0x6206,	// (0x00050dd9) tabs_4_passive_pane_cp2_ParamLimits

0x6206,	// (0x00050dd9) tabs_4_passive_pane_cp2

0x61af,	// (0x00050d82) tabs_2_long_active_pane_ParamLimits

0x61af,	// (0x00050d82) tabs_2_long_active_pane

0x61c1,	// (0x00050d94) tabs_2_long_passive_pane_ParamLimits

0x61c1,	// (0x00050d94) tabs_2_long_passive_pane

0x6170,	// (0x00050d43) tabs_3_long_active_pane_ParamLimits

0x6170,	// (0x00050d43) tabs_3_long_active_pane

0x6183,	// (0x00050d56) tabs_3_long_passive_pane_ParamLimits

0x6183,	// (0x00050d56) tabs_3_long_passive_pane

0x619c,	// (0x00050d6f) tabs_3_long_passive_pane_cp_ParamLimits

0x619c,	// (0x00050d6f) tabs_3_long_passive_pane_cp

0x6116,	// (0x00050ce9) volume_small_pane_g1

0x611f,	// (0x00050cf2) volume_small_pane_g2

0x6128,	// (0x00050cfb) volume_small_pane_g3

0x6131,	// (0x00050d04) volume_small_pane_g4

0x613a,	// (0x00050d0d) volume_small_pane_g5

0x6143,	// (0x00050d16) volume_small_pane_g6

0x614c,	// (0x00050d1f) volume_small_pane_g7

0x6155,	// (0x00050d28) volume_small_pane_g8

0x615e,	// (0x00050d31) volume_small_pane_g9

0x6167,	// (0x00050d3a) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x0005a48e) volume_small_pane_g

0x7732,	// (0x00052305) bg_active_tab_pane_cp2_ParamLimits

0x7732,	// (0x00052305) bg_active_tab_pane_cp2

0x7740,	// (0x00052313) tabs_3_active_pane_g1

0x7748,	// (0x0005231b) tabs_3_active_pane_t1

0x7732,	// (0x00052305) bg_passive_tab_pane_cp2_ParamLimits

0x7732,	// (0x00052305) bg_passive_tab_pane_cp2

0x7740,	// (0x00052313) tabs_3_passive_pane_g1

0x7748,	// (0x0005231b) tabs_3_passive_pane_t1

0x7732,	// (0x00052305) bg_active_tab_pane_cp3_ParamLimits

0x7732,	// (0x00052305) bg_active_tab_pane_cp3

0x775a,	// (0x0005232d) tabs_4_active_pane_g1

0x7762,	// (0x00052335) tabs_4_active_pane_t1

0x7732,	// (0x00052305) bg_passive_tab_pane_cp3_ParamLimits

0x7732,	// (0x00052305) bg_passive_tab_pane_cp3

0x775a,	// (0x0005232d) tabs_4_1_passive_pane_g1

0x7762,	// (0x00052335) tabs_4_1_passive_pane_t1

0x9744,	// (0x00054317) list_highlight_pane_cp2

0xb072,	// (0x00055c45) list_set_pane_ParamLimits

0xb072,	// (0x00055c45) list_set_pane

0xb118,	// (0x00055ceb) main_pane_set_t1_ParamLimits

0xb118,	// (0x00055ceb) main_pane_set_t1

0xb138,	// (0x00055d0b) main_pane_set_t2_ParamLimits

0xb138,	// (0x00055d0b) main_pane_set_t2

0xb14c,	// (0x00055d1f) main_pane_set_t3_ParamLimits

0xb14c,	// (0x00055d1f) main_pane_set_t3

0xb15e,	// (0x00055d31) main_pane_set_t4_ParamLimits

0xb15e,	// (0x00055d31) main_pane_set_t4

0x0003,

0xf98b,	// (0x0005a55e) main_pane_set_t_ParamLimits

0xf98b,	// (0x0005a55e) main_pane_set_t

0xb170,	// (0x00055d43) setting_code_pane

0xb17c,	// (0x00055d4f) setting_slider_graphic_pane

0xb17c,	// (0x00055d4f) setting_slider_pane

0xb17c,	// (0x00055d4f) setting_text_pane

0xb17c,	// (0x00055d4f) setting_volume_pane

0x4b4d,	// (0x0004f720) volume_set_pane

0x7732,	// (0x00052305) bg_set_opt_pane_cp

0x4b55,	// (0x0004f728) setting_slider_pane_t1

0x4b6e,	// (0x0004f741) setting_slider_pane_t2

0x4b88,	// (0x0004f75b) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005a131) setting_slider_pane_t

0x4ba0,	// (0x0004f773) slider_set_pane

0x7652,	// (0x00052225) bg_set_opt_pane_cp2

0x7774,	// (0x00052347) setting_slider_graphic_pane_g1

0x4bb6,	// (0x0004f789) setting_slider_graphic_pane_t1

0x4bc6,	// (0x0004f799) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005a138) setting_slider_graphic_pane_t

0x4bd6,	// (0x0004f7a9) slider_set_pane_cp

0x7652,	// (0x00052225) input_focus_pane_cp1

0xb031,	// (0x00055c04) list_set_text_pane

0x7648,	// (0x0005221b) setting_text_pane_g1

0x7652,	// (0x00052225) input_focus_pane_cp2

0x7648,	// (0x0005221b) setting_code_pane_g1

0x777d,	// (0x00052350) setting_code_pane_t1

0x3d1a,	// (0x0004e8ed) set_text_pane_t1_ParamLimits

0x3d1a,	// (0x0004e8ed) set_text_pane_t1

0x87e3,	// (0x000533b6) set_opt_bg_pane_g1

0x87eb,	// (0x000533be) set_opt_bg_pane_g2

0xb00b,	// (0x00055bde) set_opt_bg_pane_g3

0x87fb,	// (0x000533ce) set_opt_bg_pane_g4

0x8803,	// (0x000533d6) set_opt_bg_pane_g5

0x880b,	// (0x000533de) set_opt_bg_pane_g6

0xb015,	// (0x00055be8) set_opt_bg_pane_g7

0xb01d,	// (0x00055bf0) set_opt_bg_pane_g8

0xb027,	// (0x00055bfa) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0005a54b) set_opt_bg_pane_g

0xaffe,	// (0x00055bd1) slider_set_pane_g1

0x6306,	// (0x00050ed9) slider_set_pane_g2

0x0006,

0xf969,	// (0x0005a53c) slider_set_pane_g

0x627a,	// (0x00050e4d) volume_set_pane_g1

0x6282,	// (0x00050e55) volume_set_pane_g2

0x628a,	// (0x00050e5d) volume_set_pane_g3

0x6292,	// (0x00050e65) volume_set_pane_g4

0x629a,	// (0x00050e6d) volume_set_pane_g5

0x62a2,	// (0x00050e75) volume_set_pane_g6

0x62aa,	// (0x00050e7d) volume_set_pane_g7

0x62b2,	// (0x00050e85) volume_set_pane_g8

0x62ba,	// (0x00050e8d) volume_set_pane_g9

0x62c2,	// (0x00050e95) volume_set_pane_g10

0x0009,

0xf941,	// (0x0005a514) volume_set_pane_g

0x778b,	// (0x0005235e) indicator_pane_ParamLimits

0x778b,	// (0x0005235e) indicator_pane

0x7797,	// (0x0005236a) main_idle_pane_g2_ParamLimits

0x7797,	// (0x0005236a) main_idle_pane_g2

0x77bf,	// (0x00052392) main_pane_idle_g1_ParamLimits

0x77bf,	// (0x00052392) main_pane_idle_g1

0x77cc,	// (0x0005239f) popup_clock_digital_analogue_window_ParamLimits

0x77cc,	// (0x0005239f) popup_clock_digital_analogue_window

0x77e3,	// (0x000523b6) soft_indicator_pane_ParamLimits

0x77e3,	// (0x000523b6) soft_indicator_pane

0x77ef,	// (0x000523c2) wallpaper_pane_ParamLimits

0x77ef,	// (0x000523c2) wallpaper_pane

0x7648,	// (0x0005221b) wallpaper_pane_g1

0x7803,	// (0x000523d6) indicator_pane_g1_ParamLimits

0x7803,	// (0x000523d6) indicator_pane_g1

0xb3e0,	// (0x00055fb3) navi_navi_icon_text_pane_srt_g1

0x781e,	// (0x000523f1) soft_indicator_pane_t1

0x7838,	// (0x0005240b) aid_ps_area_pane

0x7849,	// (0x0005241c) aid_ps_clock_pane

0x7857,	// (0x0005242a) aid_ps_indicator_pane

0x7863,	// (0x00052436) indicator_ps_pane_ParamLimits

0x7863,	// (0x00052436) indicator_ps_pane

0x7872,	// (0x00052445) power_save_pane_g1_ParamLimits

0x7872,	// (0x00052445) power_save_pane_g1

0x787e,	// (0x00052451) power_save_pane_g2_ParamLimits

0x787e,	// (0x00052451) power_save_pane_g2

0x4754,	// (0x0004f327) aid_navinavi_width_pane

0x7838,	// (0x0005240b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005a13d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005a13d) power_save_pane_g

0x788c,	// (0x0005245f) power_save_pane_t1_ParamLimits

0x788c,	// (0x0005245f) power_save_pane_t1

0x7849,	// (0x0005241c) aid_ps_clock_pane_ParamLimits

0x7857,	// (0x0005242a) aid_ps_indicator_pane_ParamLimits

0x789e,	// (0x00052471) power_save_pane_t4_ParamLimits

0x789e,	// (0x00052471) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005a142) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005a142) power_save_pane_t

0x78c8,	// (0x0005249b) power_save_t3_ParamLimits

0x78c8,	// (0x0005249b) power_save_t3

0x78b3,	// (0x00052486) power_save_t2_ParamLimits

0x78b3,	// (0x00052486) power_save_t2

0x78dd,	// (0x000524b0) indicator_ps_pane_g1

0x78e6,	// (0x000524b9) ai_gene_pane_ParamLimits

0x78e6,	// (0x000524b9) ai_gene_pane

0x78f2,	// (0x000524c5) ai_links_pane_ParamLimits

0x78f2,	// (0x000524c5) ai_links_pane

0x78fe,	// (0x000524d1) indicator_pane_cp1_ParamLimits

0x78fe,	// (0x000524d1) indicator_pane_cp1

0x790a,	// (0x000524dd) main_pane_idle_g1_cp_ParamLimits

0x790a,	// (0x000524dd) main_pane_idle_g1_cp

0x7916,	// (0x000524e9) popup_ai_links_title_window

0x791f,	// (0x000524f2) soft_indicator_pane_cp1_ParamLimits

0x791f,	// (0x000524f2) soft_indicator_pane_cp1

0xadf8,	// (0x000559cb) ai_links_pane_g1

0xae01,	// (0x000559d4) grid_ai_links_pane

0xaddb,	// (0x000559ae) ai_gene_pane_1

0xade6,	// (0x000559b9) ai_gene_pane_2

0xadef,	// (0x000559c2) list_highlight_pane_cp4

0xadbf,	// (0x00055992) cell_ai_link_pane_ParamLimits

0xadbf,	// (0x00055992) cell_ai_link_pane

0xadb7,	// (0x0005598a) cell_ai_link_pane_g1

0x8339,	// (0x00052f0c) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0005a4ef) cell_ai_link_pane_g

0x7652,	// (0x00052225) grid_highlight_cp2

0x7652,	// (0x00052225) bg_popup_sub_pane_cp1

0x7939,	// (0x0005250c) popup_ai_links_title_window_t1

0xad05,	// (0x000558d8) ai_gene_pane_1_g1_ParamLimits

0xad05,	// (0x000558d8) ai_gene_pane_1_g1

0xad11,	// (0x000558e4) ai_gene_pane_1_g2_ParamLimits

0xad11,	// (0x000558e4) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0005a4e5) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0005a4e5) ai_gene_pane_1_g

0xad1e,	// (0x000558f1) ai_gene_pane_1_t1_ParamLimits

0xad1e,	// (0x000558f1) ai_gene_pane_1_t1

0xad52,	// (0x00055925) grid_ai_soft_ind_pane

0xacf0,	// (0x000558c3) ai_gene_pane_2_t1_ParamLimits

0xacf0,	// (0x000558c3) ai_gene_pane_2_t1

0x7948,	// (0x0005251b) main_pane_empty_t1_ParamLimits

0x7948,	// (0x0005251b) main_pane_empty_t1

0x7960,	// (0x00052533) main_pane_empty_t2_ParamLimits

0x7960,	// (0x00052533) main_pane_empty_t2

0x8139,	// (0x00052d0c) main_pane_empty_t3_ParamLimits

0x8139,	// (0x00052d0c) main_pane_empty_t3

0x814b,	// (0x00052d1e) main_pane_empty_t4_ParamLimits

0x814b,	// (0x00052d1e) main_pane_empty_t4

0x815d,	// (0x00052d30) main_pane_empty_t5_ParamLimits

0x815d,	// (0x00052d30) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005a147) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005a147) main_pane_empty_t

0x8834,	// (0x00053407) bg_popup_window_pane_ParamLimits

0x8834,	// (0x00053407) bg_popup_window_pane

0xaa60,	// (0x00055633) find_popup_pane_cp2_ParamLimits

0xaa60,	// (0x00055633) find_popup_pane_cp2

0xaa6c,	// (0x0005563f) heading_pane_ParamLimits

0xaa6c,	// (0x0005563f) heading_pane

0x7652,	// (0x00052225) bg_popup_sub_pane

0xa9da,	// (0x000555ad) bg_popup_window_pane_g1_ParamLimits

0xa9da,	// (0x000555ad) bg_popup_window_pane_g1

0xa9e6,	// (0x000555b9) bg_popup_window_pane_g2_ParamLimits

0xa9e6,	// (0x000555b9) bg_popup_window_pane_g2

0xa9f2,	// (0x000555c5) bg_popup_window_pane_g3_ParamLimits

0xa9f2,	// (0x000555c5) bg_popup_window_pane_g3

0xa9fe,	// (0x000555d1) bg_popup_window_pane_g4_ParamLimits

0xa9fe,	// (0x000555d1) bg_popup_window_pane_g4

0xaa0a,	// (0x000555dd) bg_popup_window_pane_g5_ParamLimits

0xaa0a,	// (0x000555dd) bg_popup_window_pane_g5

0xaa16,	// (0x000555e9) bg_popup_window_pane_g6_ParamLimits

0xaa16,	// (0x000555e9) bg_popup_window_pane_g6

0xaa22,	// (0x000555f5) bg_popup_window_pane_g7_ParamLimits

0xaa22,	// (0x000555f5) bg_popup_window_pane_g7

0xaa2e,	// (0x00055601) bg_popup_window_pane_g8_ParamLimits

0xaa2e,	// (0x00055601) bg_popup_window_pane_g8

0xaa3a,	// (0x0005560d) bg_popup_window_pane_g9_ParamLimits

0xaa3a,	// (0x0005560d) bg_popup_window_pane_g9

0xaa46,	// (0x00055619) bg_popup_window_pane_g10_ParamLimits

0xaa46,	// (0x00055619) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x0005a4ad) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x0005a4ad) bg_popup_window_pane_g

0xa96f,	// (0x00055542) bg_popup_heading_pane_ParamLimits

0xa96f,	// (0x00055542) bg_popup_heading_pane

0x6434,	// (0x00051007) tabs_4_passive_pane_cp_srt_ParamLimits

0x6434,	// (0x00051007) tabs_4_passive_pane_cp_srt

0x6446,	// (0x00051019) tabs_4_passive_pane_srt_ParamLimits

0xa983,	// (0x00055556) heading_pane_g2

0x6446,	// (0x00051019) tabs_4_passive_pane_srt

0x9744,	// (0x00054317) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9744,	// (0x00054317) bg_passive_tab_pane_cp3_srt

0xa98b,	// (0x0005555e) heading_pane_t1_ParamLimits

0xa98b,	// (0x0005555e) heading_pane_t1

0xa9a2,	// (0x00055575) heading_pane_t2_ParamLimits

0xa9a2,	// (0x00055575) heading_pane_t2

0x0001,

0xf8d5,	// (0x0005a4a8) heading_pane_t_ParamLimits

0xf8d5,	// (0x0005a4a8) heading_pane_t

0xa49c,	// (0x0005506f) bg_popup_heading_pane_g1

0xa54b,	// (0x0005511e) bg_popup_heading_pane_g2

0xa555,	// (0x00055128) bg_popup_heading_pane_g3

0xa55f,	// (0x00055132) bg_popup_heading_pane_g4

0xa569,	// (0x0005513c) bg_popup_heading_pane_g5

0xa573,	// (0x00055146) bg_popup_heading_pane_g6

0xa57b,	// (0x0005514e) bg_popup_heading_pane_g7

0xa583,	// (0x00055156) bg_popup_heading_pane_g8

0xa58d,	// (0x00055160) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x0005a464) bg_popup_heading_pane_g

0x9c74,	// (0x00054847) bg_popup_sub_pane_g1

0x9c84,	// (0x00054857) bg_popup_sub_pane_g2

0x9c7c,	// (0x0005484f) bg_popup_sub_pane_g3

0x9c94,	// (0x00054867) bg_popup_sub_pane_g4

0x9c8c,	// (0x0005485f) bg_popup_sub_pane_g5

0x9c9c,	// (0x0005486f) bg_popup_sub_pane_g6

0x9ca4,	// (0x00054877) bg_popup_sub_pane_g7

0x9cb4,	// (0x00054887) bg_popup_sub_pane_g8

0x9cac,	// (0x0005487f) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0005a43e) bg_popup_sub_pane_g

0x8171,	// (0x00052d44) bg_popup_window_pane_cp5_ParamLimits

0x8171,	// (0x00052d44) bg_popup_window_pane_cp5

0x818d,	// (0x00052d60) popup_note_window_g1_ParamLimits

0x818d,	// (0x00052d60) popup_note_window_g1

0x8199,	// (0x00052d6c) popup_note_window_t1_ParamLimits

0x8199,	// (0x00052d6c) popup_note_window_t1

0x81af,	// (0x00052d82) popup_note_window_t2_ParamLimits

0x81af,	// (0x00052d82) popup_note_window_t2

0x81c5,	// (0x00052d98) popup_note_window_t3_ParamLimits

0x81c5,	// (0x00052d98) popup_note_window_t3

0x81db,	// (0x00052dae) popup_note_window_t4_ParamLimits

0x81db,	// (0x00052dae) popup_note_window_t4

0x8203,	// (0x00052dd6) popup_note_window_t5_ParamLimits

0x8203,	// (0x00052dd6) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005a152) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005a152) popup_note_window_t

0x824d,	// (0x00052e20) bg_popup_window_pane_cp6_ParamLimits

0x824d,	// (0x00052e20) bg_popup_window_pane_cp6

0xa418,	// (0x00054feb) popup_note_image_window_g1_ParamLimits

0xa418,	// (0x00054feb) popup_note_image_window_g1

0xa424,	// (0x00054ff7) popup_note_image_window_g2_ParamLimits

0xa424,	// (0x00054ff7) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0005a432) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0005a432) popup_note_image_window_g

0xa43d,	// (0x00055010) popup_note_image_window_t1_ParamLimits

0xa43d,	// (0x00055010) popup_note_image_window_t1

0xa456,	// (0x00055029) popup_note_image_window_t2_ParamLimits

0xa456,	// (0x00055029) popup_note_image_window_t2

0xa46f,	// (0x00055042) popup_note_image_window_t3_ParamLimits

0xa46f,	// (0x00055042) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0005a437) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0005a437) popup_note_image_window_t

0xa2d9,	// (0x00054eac) bg_popup_window_pane_cp7_ParamLimits

0xa2d9,	// (0x00054eac) bg_popup_window_pane_cp7

0xa309,	// (0x00054edc) popup_note_wait_window_g1_ParamLimits

0xa309,	// (0x00054edc) popup_note_wait_window_g1

0xa315,	// (0x00054ee8) popup_note_wait_window_g2_ParamLimits

0xa315,	// (0x00054ee8) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0005a420) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0005a420) popup_note_wait_window_g

0xa32d,	// (0x00054f00) popup_note_wait_window_t1_ParamLimits

0xa32d,	// (0x00054f00) popup_note_wait_window_t1

0xa354,	// (0x00054f27) popup_note_wait_window_t2_ParamLimits

0xa354,	// (0x00054f27) popup_note_wait_window_t2

0xa371,	// (0x00054f44) popup_note_wait_window_t3_ParamLimits

0xa371,	// (0x00054f44) popup_note_wait_window_t3

0xa384,	// (0x00054f57) popup_note_wait_window_t4_ParamLimits

0xa384,	// (0x00054f57) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0005a427) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0005a427) popup_note_wait_window_t

0xa3a9,	// (0x00054f7c) wait_bar_pane_ParamLimits

0xa3a9,	// (0x00054f7c) wait_bar_pane

0x7652,	// (0x00052225) wait_anim_pane

0x7652,	// (0x00052225) wait_border_pane

0x7648,	// (0x0005221b) wait_anim_pane_g1

0x7648,	// (0x0005221b) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005a2db) wait_anim_pane_g

0xa27d,	// (0x00054e50) wait_border_pane_g1

0xa288,	// (0x00054e5b) wait_border_pane_g2

0xa291,	// (0x00054e64) wait_border_pane_g3

0x0002,

0xf846,	// (0x0005a419) wait_border_pane_g

0xa0e8,	// (0x00054cbb) bg_popup_window_pane_cp16_ParamLimits

0xa0e8,	// (0x00054cbb) bg_popup_window_pane_cp16

0xa1e8,	// (0x00054dbb) indicator_popup_pane_cp4_ParamLimits

0xa1e8,	// (0x00054dbb) indicator_popup_pane_cp4

0xa1fc,	// (0x00054dcf) popup_query_data_window_t1_ParamLimits

0xa1fc,	// (0x00054dcf) popup_query_data_window_t1

0xa20e,	// (0x00054de1) popup_query_data_window_t2_ParamLimits

0xa20e,	// (0x00054de1) popup_query_data_window_t2

0xa227,	// (0x00054dfa) popup_query_data_window_t3_ParamLimits

0xa227,	// (0x00054dfa) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0005a412) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0005a412) popup_query_data_window_t

0xa241,	// (0x00054e14) query_popup_data_pane_ParamLimits

0xa241,	// (0x00054e14) query_popup_data_pane

0xa255,	// (0x00054e28) query_popup_data_pane_cp1_ParamLimits

0xa255,	// (0x00054e28) query_popup_data_pane_cp1

0xa0e8,	// (0x00054cbb) bg_popup_window_pane_cp10_ParamLimits

0xa0e8,	// (0x00054cbb) bg_popup_window_pane_cp10

0xa11a,	// (0x00054ced) indicator_popup_pane_ParamLimits

0xa11a,	// (0x00054ced) indicator_popup_pane

0xa13c,	// (0x00054d0f) popup_query_code_window_t1_ParamLimits

0xa13c,	// (0x00054d0f) popup_query_code_window_t1

0xa156,	// (0x00054d29) popup_query_code_window_t2_ParamLimits

0xa156,	// (0x00054d29) popup_query_code_window_t2

0xa19f,	// (0x00054d72) popup_query_code_window_t3_ParamLimits

0xa19f,	// (0x00054d72) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0005a40b) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0005a40b) popup_query_code_window_t

0xa1ce,	// (0x00054da1) query_popup_pane_ParamLimits

0xa1ce,	// (0x00054da1) query_popup_pane

0x824d,	// (0x00052e20) bg_popup_window_pane_cp15_ParamLimits

0x824d,	// (0x00052e20) bg_popup_window_pane_cp15

0x826b,	// (0x00052e3e) indicator_popup_pane_cp1_ParamLimits

0x826b,	// (0x00052e3e) indicator_popup_pane_cp1

0x827e,	// (0x00052e51) indicator_popup_pane_cp2_ParamLimits

0x827e,	// (0x00052e51) indicator_popup_pane_cp2

0x8291,	// (0x00052e64) popup_query_data_code_window_g1_ParamLimits

0x8291,	// (0x00052e64) popup_query_data_code_window_g1

0x82a4,	// (0x00052e77) popup_query_data_code_window_t1_ParamLimits

0x82a4,	// (0x00052e77) popup_query_data_code_window_t1

0x82b6,	// (0x00052e89) popup_query_data_code_window_t2_ParamLimits

0x82b6,	// (0x00052e89) popup_query_data_code_window_t2

0x82c8,	// (0x00052e9b) popup_query_data_code_window_t3_ParamLimits

0x82c8,	// (0x00052e9b) popup_query_data_code_window_t3

0x82de,	// (0x00052eb1) popup_query_data_code_window_t4_ParamLimits

0x82de,	// (0x00052eb1) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005a15d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005a15d) popup_query_data_code_window_t

0x5f5a,	// (0x00050b2d) list_single_midp_graphic_pane_g3

0x82f6,	// (0x00052ec9) query_popup_data_pane_cp2_ParamLimits

0x8309,	// (0x00052edc) query_popup_pane_cp2_ParamLimits

0x8309,	// (0x00052edc) query_popup_pane_cp2

0x7652,	// (0x00052225) bg_popup_window_pane_cp11

0xa0d4,	// (0x00054ca7) heading_pane_cp5

0x83f4,	// (0x00052fc7) listscroll_popup_info_pane

0x7652,	// (0x00052225) input_focus_pane_cp3

0x831c,	// (0x00052eef) query_popup_pane_t1

0x832a,	// (0x00052efd) list_popup_info_pane_ParamLimits

0x832a,	// (0x00052efd) list_popup_info_pane

0x8339,	// (0x00052f0c) listscroll_popup_info_pane_g1

0x8341,	// (0x00052f14) scroll_pane_cp7

0x834b,	// (0x00052f1e) popup_info_list_pane_t1_ParamLimits

0x834b,	// (0x00052f1e) popup_info_list_pane_t1

0x8365,	// (0x00052f38) popup_info_list_pane_t2_ParamLimits

0x8365,	// (0x00052f38) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005a166) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005a166) popup_info_list_pane_t

0x7652,	// (0x00052225) bg_popup_window_pane_cp12

0xb3fa,	// (0x00055fcd) find_popup_pane

0x7732,	// (0x00052305) bg_popup_window_pane_cp3

0x837f,	// (0x00052f52) heading_pane_cp3

0x838b,	// (0x00052f5e) listscroll_popup_graphic_pane

0x7652,	// (0x00052225) bg_popup_window_pane_cp4

0x83ea,	// (0x00052fbd) heading_pane_cp4

0x83f4,	// (0x00052fc7) listscroll_popup_colour_pane

0x83fc,	// (0x00052fcf) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x83fc,	// (0x00052fcf) cell_large_graphic_colour_none_popup_pane

0x8410,	// (0x00052fe3) grid_large_graphic_colour_popup_pane_ParamLimits

0x8410,	// (0x00052fe3) grid_large_graphic_colour_popup_pane

0x843c,	// (0x0005300f) listscroll_popup_colour_pane_g1_ParamLimits

0x843c,	// (0x0005300f) listscroll_popup_colour_pane_g1

0x8453,	// (0x00053026) listscroll_popup_colour_pane_g2_ParamLimits

0x8453,	// (0x00053026) listscroll_popup_colour_pane_g2

0x846a,	// (0x0005303d) listscroll_popup_colour_pane_g3_ParamLimits

0x846a,	// (0x0005303d) listscroll_popup_colour_pane_g3

0x847a,	// (0x0005304d) listscroll_popup_colour_pane_g4_ParamLimits

0x847a,	// (0x0005304d) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005a16b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005a16b) listscroll_popup_colour_pane_g

0x848e,	// (0x00053061) scroll_pane_cp6_ParamLimits

0x848e,	// (0x00053061) scroll_pane_cp6

0x84a0,	// (0x00053073) cell_large_graphic_colour_popup_pane_ParamLimits

0x84a0,	// (0x00053073) cell_large_graphic_colour_popup_pane

0x84bf,	// (0x00053092) cell_large_graphic_colour_none_popup_pane_t1

0x7652,	// (0x00052225) grid_highlight_pane_cp5

0x84ce,	// (0x000530a1) cell_large_graphic_colour_popup_pane_g1

0x84d6,	// (0x000530a9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005a174) cell_large_graphic_colour_popup_pane_g

0x84de,	// (0x000530b1) cell_large_graphic_colour_popup_pane_g2_copy1

0x84e7,	// (0x000530ba) grid_highlight_pane_cp4

0x84ef,	// (0x000530c2) bg_popup_window_pane_cp8_ParamLimits

0x84ef,	// (0x000530c2) bg_popup_window_pane_cp8

0x850a,	// (0x000530dd) popup_snote_single_text_window_g1_ParamLimits

0x850a,	// (0x000530dd) popup_snote_single_text_window_g1

0x851c,	// (0x000530ef) popup_snote_single_text_window_t1_ParamLimits

0x851c,	// (0x000530ef) popup_snote_single_text_window_t1

0x852f,	// (0x00053102) popup_snote_single_text_window_t2_ParamLimits

0x852f,	// (0x00053102) popup_snote_single_text_window_t2

0x8542,	// (0x00053115) popup_snote_single_text_window_t3_ParamLimits

0x8542,	// (0x00053115) popup_snote_single_text_window_t3

0x857b,	// (0x0005314e) popup_snote_single_text_window_t4_ParamLimits

0x857b,	// (0x0005314e) popup_snote_single_text_window_t4

0x85af,	// (0x00053182) popup_snote_single_text_window_t5_ParamLimits

0x85af,	// (0x00053182) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005a179) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005a179) popup_snote_single_text_window_t

0x85de,	// (0x000531b1) bg_popup_window_pane_cp9_ParamLimits

0x85de,	// (0x000531b1) bg_popup_window_pane_cp9

0x850a,	// (0x000530dd) popup_snote_single_graphic_window_g1_ParamLimits

0x850a,	// (0x000530dd) popup_snote_single_graphic_window_g1

0x85ec,	// (0x000531bf) popup_snote_single_graphic_window_g2_ParamLimits

0x85ec,	// (0x000531bf) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005a184) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005a184) popup_snote_single_graphic_window_g

0x85f8,	// (0x000531cb) popup_snote_single_graphic_window_t1_ParamLimits

0x85f8,	// (0x000531cb) popup_snote_single_graphic_window_t1

0x860b,	// (0x000531de) popup_snote_single_graphic_window_t2_ParamLimits

0x860b,	// (0x000531de) popup_snote_single_graphic_window_t2

0x861e,	// (0x000531f1) popup_snote_single_graphic_window_t3_ParamLimits

0x861e,	// (0x000531f1) popup_snote_single_graphic_window_t3

0x8657,	// (0x0005322a) popup_snote_single_graphic_window_t4_ParamLimits

0x8657,	// (0x0005322a) popup_snote_single_graphic_window_t4

0x868b,	// (0x0005325e) popup_snote_single_graphic_window_t5_ParamLimits

0x868b,	// (0x0005325e) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005a189) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005a189) popup_snote_single_graphic_window_t

0xb33c,	// (0x00055f0f) grid_graphic_popup_pane_ParamLimits

0xb33c,	// (0x00055f0f) grid_graphic_popup_pane

0xb366,	// (0x00055f39) listscroll_popup_graphic_pane_g1_ParamLimits

0xb366,	// (0x00055f39) listscroll_popup_graphic_pane_g1

0xb37a,	// (0x00055f4d) listscroll_popup_graphic_pane_g2_ParamLimits

0xb37a,	// (0x00055f4d) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x0005a588) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x0005a588) listscroll_popup_graphic_pane_g

0xb38e,	// (0x00055f61) scroll_pane_cp5

0xb2db,	// (0x00055eae) cell_graphic_popup_pane_ParamLimits

0xb2db,	// (0x00055eae) cell_graphic_popup_pane

0xb2bc,	// (0x00055e8f) cell_graphic_popup_pane_g1

0xb2c4,	// (0x00055e97) cell_graphic_popup_pane_g2

0x84de,	// (0x000530b1) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x0005a581) cell_graphic_popup_pane_g

0xb2cd,	// (0x00055ea0) cell_graphic_popup_pane_t2

0x84e7,	// (0x000530ba) grid_highlight_pane_cp3

0x86cc,	// (0x0005329f) list_gen_pane_ParamLimits

0x86cc,	// (0x0005329f) list_gen_pane

0x86fe,	// (0x000532d1) scroll_pane

0xb214,	// (0x00055de7) bg_list_pane_g1_ParamLimits

0xb214,	// (0x00055de7) bg_list_pane_g1

0xb231,	// (0x00055e04) bg_list_pane_g2_ParamLimits

0xb231,	// (0x00055e04) bg_list_pane_g2

0xb246,	// (0x00055e19) bg_list_pane_g3_ParamLimits

0xb246,	// (0x00055e19) bg_list_pane_g3

0xb25a,	// (0x00055e2d) bg_list_pane_g4_ParamLimits

0xb25a,	// (0x00055e2d) bg_list_pane_g4

0xb26e,	// (0x00055e41) bg_list_pane_g5_ParamLimits

0xb26e,	// (0x00055e41) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x0005a576) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x0005a576) bg_list_pane_g

0x7a69,	// (0x0005263c) list_double2_graphic_large_graphic_pane_ParamLimits

0x7a69,	// (0x0005263c) list_double2_graphic_large_graphic_pane

0x7a69,	// (0x0005263c) list_double2_graphic_pane_ParamLimits

0x7a69,	// (0x0005263c) list_double2_graphic_pane

0x7a69,	// (0x0005263c) list_double2_large_graphic_pane_ParamLimits

0x7a69,	// (0x0005263c) list_double2_large_graphic_pane

0x7a69,	// (0x0005263c) list_double2_pane_ParamLimits

0x7a69,	// (0x0005263c) list_double2_pane

0x7a69,	// (0x0005263c) list_double_graphic_heading_pane_ParamLimits

0x7a69,	// (0x0005263c) list_double_graphic_heading_pane

0x7a69,	// (0x0005263c) list_double_graphic_pane_ParamLimits

0x7a69,	// (0x0005263c) list_double_graphic_pane

0x7a69,	// (0x0005263c) list_double_heading_pane_ParamLimits

0x7a69,	// (0x0005263c) list_double_heading_pane

0x7a69,	// (0x0005263c) list_double_large_graphic_pane_ParamLimits

0x7a69,	// (0x0005263c) list_double_large_graphic_pane

0x7a69,	// (0x0005263c) list_double_number_pane_ParamLimits

0x7a69,	// (0x0005263c) list_double_number_pane

0x7a69,	// (0x0005263c) list_double_pane_ParamLimits

0x7a69,	// (0x0005263c) list_double_pane

0x7a69,	// (0x0005263c) list_double_time_pane_ParamLimits

0x7a69,	// (0x0005263c) list_double_time_pane

0x7a69,	// (0x0005263c) list_setting_number_pane_ParamLimits

0x7a69,	// (0x0005263c) list_setting_number_pane

0x7a69,	// (0x0005263c) list_setting_pane_ParamLimits

0x7a69,	// (0x0005263c) list_setting_pane

0x7aa2,	// (0x00052675) list_single_2graphic_pane_ParamLimits

0x7aa2,	// (0x00052675) list_single_2graphic_pane

0x7aa2,	// (0x00052675) list_single_graphic_heading_pane_ParamLimits

0x7aa2,	// (0x00052675) list_single_graphic_heading_pane

0x7aa2,	// (0x00052675) list_single_graphic_pane_ParamLimits

0x7aa2,	// (0x00052675) list_single_graphic_pane

0x7aa2,	// (0x00052675) list_single_heading_pane_ParamLimits

0x7aa2,	// (0x00052675) list_single_heading_pane

0x7ae0,	// (0x000526b3) list_single_large_graphic_pane_ParamLimits

0x7ae0,	// (0x000526b3) list_single_large_graphic_pane

0x7aa2,	// (0x00052675) list_single_number_heading_pane_ParamLimits

0x7aa2,	// (0x00052675) list_single_number_heading_pane

0x7aa2,	// (0x00052675) list_single_number_pane_ParamLimits

0x7aa2,	// (0x00052675) list_single_number_pane

0x7aa2,	// (0x00052675) list_single_pane_ParamLimits

0x7aa2,	// (0x00052675) list_single_pane

0x7652,	// (0x00052225) list_highlight_pane_cp1

0x7975,	// (0x00052548) list_single_pane_g1_ParamLimits

0x7975,	// (0x00052548) list_single_pane_g1

0x7981,	// (0x00052554) list_single_pane_g2_ParamLimits

0x7981,	// (0x00052554) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005a1a5) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005a1a5) list_single_pane_g

0x639a,	// (0x00050f6d) list_single_pane_t1_ParamLimits

0x639a,	// (0x00050f6d) list_single_pane_t1

0x7975,	// (0x00052548) list_single_number_pane_g1_ParamLimits

0x7975,	// (0x00052548) list_single_number_pane_g1

0x7981,	// (0x00052554) list_single_number_pane_g2_ParamLimits

0x7981,	// (0x00052554) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005a1a5) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005a1a5) list_single_number_pane_g

0x62ca,	// (0x00050e9d) list_single_number_pane_t1_ParamLimits

0x62ca,	// (0x00050e9d) list_single_number_pane_t1

0x62e0,	// (0x00050eb3) list_single_number_pane_t2_ParamLimits

0x62e0,	// (0x00050eb3) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0005a537) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0005a537) list_single_number_pane_t

0x4bde,	// (0x0004f7b1) list_single_graphic_pane_g1_ParamLimits

0x4bde,	// (0x0004f7b1) list_single_graphic_pane_g1

0x7975,	// (0x00052548) list_single_graphic_pane_g2_ParamLimits

0x7975,	// (0x00052548) list_single_graphic_pane_g2

0x7981,	// (0x00052554) list_single_graphic_pane_g3_ParamLimits

0x7981,	// (0x00052554) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005a194) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005a194) list_single_graphic_pane_g

0x4bea,	// (0x0004f7bd) list_single_graphic_pane_t1_ParamLimits

0x4bea,	// (0x0004f7bd) list_single_graphic_pane_t1

0x4c00,	// (0x0004f7d3) list_single_heading_pane_g1_ParamLimits

0x4c00,	// (0x0004f7d3) list_single_heading_pane_g1

0x7981,	// (0x00052554) list_single_heading_pane_g2_ParamLimits

0x7981,	// (0x00052554) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005a19b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005a19b) list_single_heading_pane_g

0x4c13,	// (0x0004f7e6) list_single_heading_pane_t1_ParamLimits

0x4c13,	// (0x0004f7e6) list_single_heading_pane_t1

0x798d,	// (0x00052560) list_single_heading_pane_t2_ParamLimits

0x798d,	// (0x00052560) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005a1a0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005a1a0) list_single_heading_pane_t

0x7975,	// (0x00052548) list_single_number_heading_pane_g1_ParamLimits

0x7975,	// (0x00052548) list_single_number_heading_pane_g1

0x7981,	// (0x00052554) list_single_number_heading_pane_g2_ParamLimits

0x7981,	// (0x00052554) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005a1a5) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005a1a5) list_single_number_heading_pane_g

0x4c29,	// (0x0004f7fc) list_single_number_heading_pane_t1_ParamLimits

0x4c29,	// (0x0004f7fc) list_single_number_heading_pane_t1

0x4c3f,	// (0x0004f812) list_single_number_heading_pane_t2_ParamLimits

0x4c3f,	// (0x0004f812) list_single_number_heading_pane_t2

0x4c51,	// (0x0004f824) list_single_number_heading_pane_t3_ParamLimits

0x4c51,	// (0x0004f824) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005a1aa) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005a1aa) list_single_number_heading_pane_t

0x4c63,	// (0x0004f836) list_single_graphic_heading_pane_g1_ParamLimits

0x4c63,	// (0x0004f836) list_single_graphic_heading_pane_g1

0x799f,	// (0x00052572) list_single_graphic_heading_pane_g4_ParamLimits

0x799f,	// (0x00052572) list_single_graphic_heading_pane_g4

0x7981,	// (0x00052554) list_single_graphic_heading_pane_g5_ParamLimits

0x7981,	// (0x00052554) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005a1b1) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005a1b1) list_single_graphic_heading_pane_g

0x4c29,	// (0x0004f7fc) list_single_graphic_heading_pane_t1_ParamLimits

0x4c29,	// (0x0004f7fc) list_single_graphic_heading_pane_t1

0x4c7b,	// (0x0004f84e) list_single_graphic_heading_pane_t2_ParamLimits

0x4c7b,	// (0x0004f84e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005a1b8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005a1b8) list_single_graphic_heading_pane_t

0x79b0,	// (0x00052583) list_single_large_graphic_pane_g1_ParamLimits

0x79b0,	// (0x00052583) list_single_large_graphic_pane_g1

0x79bc,	// (0x0005258f) list_single_large_graphic_pane_g2_ParamLimits

0x79bc,	// (0x0005258f) list_single_large_graphic_pane_g2

0x79c8,	// (0x0005259b) list_single_large_graphic_pane_g3_ParamLimits

0x79c8,	// (0x0005259b) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005a1bd) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005a1bd) list_single_large_graphic_pane_g

0xa288,	// (0x00054e5b) wait_border_pane_g2_copy1

0x79d4,	// (0x000525a7) list_single_large_graphic_pane_g4_cp2

0x4c91,	// (0x0004f864) list_single_large_graphic_pane_t1_ParamLimits

0x4c91,	// (0x0004f864) list_single_large_graphic_pane_t1

0x8732,	// (0x00053305) list_double_pane_g1_ParamLimits

0x8732,	// (0x00053305) list_double_pane_g1

0x79dc,	// (0x000525af) list_double_pane_g2_ParamLimits

0x79dc,	// (0x000525af) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005a1c4) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005a1c4) list_double_pane_g

0x4ca7,	// (0x0004f87a) list_double_pane_t1_ParamLimits

0x4ca7,	// (0x0004f87a) list_double_pane_t1

0x4cbd,	// (0x0004f890) list_double_pane_t2_ParamLimits

0x4cbd,	// (0x0004f890) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005a1c9) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005a1c9) list_double_pane_t

0x4ccf,	// (0x0004f8a2) list_double2_pane_g1_ParamLimits

0x4ccf,	// (0x0004f8a2) list_double2_pane_g1

0x4ce0,	// (0x0004f8b3) list_double2_pane_g2_ParamLimits

0x4ce0,	// (0x0004f8b3) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005a1ce) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005a1ce) list_double2_pane_g

0x4cec,	// (0x0004f8bf) list_double2_pane_t1_ParamLimits

0x4cec,	// (0x0004f8bf) list_double2_pane_t1

0x4d02,	// (0x0004f8d5) list_double2_pane_t2_ParamLimits

0x4d02,	// (0x0004f8d5) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005a1d3) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005a1d3) list_double2_pane_t

0x8732,	// (0x00053305) list_double_number_pane_g1_ParamLimits

0x8732,	// (0x00053305) list_double_number_pane_g1

0x79dc,	// (0x000525af) list_double_number_pane_g2_ParamLimits

0x79dc,	// (0x000525af) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005a1c4) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005a1c4) list_double_number_pane_g

0x4d14,	// (0x0004f8e7) list_double_number_pane_t1_ParamLimits

0x4d14,	// (0x0004f8e7) list_double_number_pane_t1

0x4d26,	// (0x0004f8f9) list_double_number_pane_t2_ParamLimits

0x4d26,	// (0x0004f8f9) list_double_number_pane_t2

0x4d3c,	// (0x0004f90f) list_double_number_pane_t3_ParamLimits

0x4d3c,	// (0x0004f90f) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005a1d8) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005a1d8) list_double_number_pane_t

0x4d4e,	// (0x0004f921) list_double_graphic_pane_g1_ParamLimits

0x4d4e,	// (0x0004f921) list_double_graphic_pane_g1

0x4d5a,	// (0x0004f92d) list_double_graphic_pane_g2_ParamLimits

0x4d5a,	// (0x0004f92d) list_double_graphic_pane_g2

0x4d69,	// (0x0004f93c) list_double_graphic_pane_g3_ParamLimits

0x4d69,	// (0x0004f93c) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005a1df) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005a1df) list_double_graphic_pane_g

0x4d81,	// (0x0004f954) list_double_graphic_pane_t1_ParamLimits

0x4d81,	// (0x0004f954) list_double_graphic_pane_t1

0x4d97,	// (0x0004f96a) list_double_graphic_pane_t2_ParamLimits

0x4d97,	// (0x0004f96a) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005a1e8) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005a1e8) list_double_graphic_pane_t

0x4da9,	// (0x0004f97c) list_double2_graphic_pane_g1_ParamLimits

0x4da9,	// (0x0004f97c) list_double2_graphic_pane_g1

0x976a,	// (0x0005433d) list_double2_graphic_pane_g2_ParamLimits

0x976a,	// (0x0005433d) list_double2_graphic_pane_g2

0x79e8,	// (0x000525bb) list_double2_graphic_pane_g3_ParamLimits

0x79e8,	// (0x000525bb) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005a1ed) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005a1ed) list_double2_graphic_pane_g

0x4db5,	// (0x0004f988) list_double2_graphic_pane_t1_ParamLimits

0x4db5,	// (0x0004f988) list_double2_graphic_pane_t1

0x4dcb,	// (0x0004f99e) list_double2_graphic_pane_t2_ParamLimits

0x4dcb,	// (0x0004f99e) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005a1f4) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005a1f4) list_double2_graphic_pane_t

0x4ddd,	// (0x0004f9b0) list_double_large_graphic_pane_g1_ParamLimits

0x4ddd,	// (0x0004f9b0) list_double_large_graphic_pane_g1

0x4dfc,	// (0x0004f9cf) list_double_large_graphic_pane_g2_ParamLimits

0x4dfc,	// (0x0004f9cf) list_double_large_graphic_pane_g2

0x79dc,	// (0x000525af) list_double_large_graphic_pane_g3_ParamLimits

0x79dc,	// (0x000525af) list_double_large_graphic_pane_g3

0x4e12,	// (0x0004f9e5) list_double_large_graphic_pane_g4_ParamLimits

0x4e12,	// (0x0004f9e5) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005a1f9) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005a1f9) list_double_large_graphic_pane_g

0x4e23,	// (0x0004f9f6) list_double_large_graphic_pane_t1_ParamLimits

0x4e23,	// (0x0004f9f6) list_double_large_graphic_pane_t1

0x4e3c,	// (0x0004fa0f) list_double_large_graphic_pane_t2_ParamLimits

0x4e3c,	// (0x0004fa0f) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005a204) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005a204) list_double_large_graphic_pane_t

0x7a09,	// (0x000525dc) list_double2_large_graphic_pane_g1_ParamLimits

0x7a09,	// (0x000525dc) list_double2_large_graphic_pane_g1

0x4e4e,	// (0x0004fa21) list_double2_large_graphic_pane_g2_ParamLimits

0x4e4e,	// (0x0004fa21) list_double2_large_graphic_pane_g2

0x79e8,	// (0x000525bb) list_double2_large_graphic_pane_g3_ParamLimits

0x79e8,	// (0x000525bb) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005a209) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005a209) list_double2_large_graphic_pane_g

0x4e5f,	// (0x0004fa32) list_double2_large_graphic_pane_t1_ParamLimits

0x4e5f,	// (0x0004fa32) list_double2_large_graphic_pane_t1

0x4e75,	// (0x0004fa48) list_double2_large_graphic_pane_t2_ParamLimits

0x4e75,	// (0x0004fa48) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005a210) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005a210) list_double2_large_graphic_pane_t

0x4e87,	// (0x0004fa5a) list_double_heading_pane_g1_ParamLimits

0x4e87,	// (0x0004fa5a) list_double_heading_pane_g1

0x7a15,	// (0x000525e8) list_double_heading_pane_g2_ParamLimits

0x7a15,	// (0x000525e8) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005a215) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005a215) list_double_heading_pane_g

0x4e98,	// (0x0004fa6b) list_double_heading_pane_t1_ParamLimits

0x4e98,	// (0x0004fa6b) list_double_heading_pane_t1

0x4d02,	// (0x0004f8d5) list_double_heading_pane_t2_ParamLimits

0x4d02,	// (0x0004f8d5) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005a21a) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005a21a) list_double_heading_pane_t

0x4eae,	// (0x0004fa81) list_double_graphic_heading_pane_g1_ParamLimits

0x4eae,	// (0x0004fa81) list_double_graphic_heading_pane_g1

0x4e87,	// (0x0004fa5a) list_double_graphic_heading_pane_g2_ParamLimits

0x4e87,	// (0x0004fa5a) list_double_graphic_heading_pane_g2

0x7a15,	// (0x000525e8) list_double_graphic_heading_pane_g3_ParamLimits

0x7a15,	// (0x000525e8) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005a21f) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005a21f) list_double_graphic_heading_pane_g

0x4eba,	// (0x0004fa8d) list_double_graphic_heading_pane_t1_ParamLimits

0x4eba,	// (0x0004fa8d) list_double_graphic_heading_pane_t1

0x4dcb,	// (0x0004f99e) list_double_graphic_heading_pane_t2_ParamLimits

0x4dcb,	// (0x0004f99e) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005a226) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005a226) list_double_graphic_heading_pane_t

0x4ed0,	// (0x0004faa3) list_double_time_pane_g1_ParamLimits

0x4ed0,	// (0x0004faa3) list_double_time_pane_g1

0x4ee1,	// (0x0004fab4) list_double_time_pane_g2_ParamLimits

0x4ee1,	// (0x0004fab4) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005a22b) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005a22b) list_double_time_pane_g

0x4eed,	// (0x0004fac0) list_double_time_pane_t1_ParamLimits

0x4eed,	// (0x0004fac0) list_double_time_pane_t1

0x4f03,	// (0x0004fad6) list_double_time_pane_t2_ParamLimits

0x4f03,	// (0x0004fad6) list_double_time_pane_t2

0x4f15,	// (0x0004fae8) list_double_time_pane_t3_ParamLimits

0x4f15,	// (0x0004fae8) list_double_time_pane_t3

0x4f27,	// (0x0004fafa) list_double_time_pane_t4_ParamLimits

0x4f27,	// (0x0004fafa) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0005a230) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0005a230) list_double_time_pane_t

0x4f39,	// (0x0004fb0c) list_setting_pane_g1_ParamLimits

0x4f39,	// (0x0004fb0c) list_setting_pane_g1

0x4ce0,	// (0x0004f8b3) list_setting_pane_g2_ParamLimits

0x4ce0,	// (0x0004f8b3) list_setting_pane_g2

0x0001,

0xf666,	// (0x0005a239) list_setting_pane_g_ParamLimits

0xf666,	// (0x0005a239) list_setting_pane_g

0x4f45,	// (0x0004fb18) list_setting_pane_t1_ParamLimits

0x4f45,	// (0x0004fb18) list_setting_pane_t1

0x4f5f,	// (0x0004fb32) list_setting_pane_t2_ParamLimits

0x4f5f,	// (0x0004fb32) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005a23e) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005a23e) list_setting_pane_t

0x4f9e,	// (0x0004fb71) set_value_pane_cp_ParamLimits

0x4f9e,	// (0x0004fb71) set_value_pane_cp

0x4faa,	// (0x0004fb7d) list_setting_number_pane_g1_ParamLimits

0x4faa,	// (0x0004fb7d) list_setting_number_pane_g1

0x4fb6,	// (0x0004fb89) list_setting_number_pane_g2_ParamLimits

0x4fb6,	// (0x0004fb89) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005a245) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005a245) list_setting_number_pane_g

0x4fc2,	// (0x0004fb95) list_setting_number_pane_t1_ParamLimits

0x4fc2,	// (0x0004fb95) list_setting_number_pane_t1

0x4fdb,	// (0x0004fbae) list_setting_number_pane_t2_ParamLimits

0x4fdb,	// (0x0004fbae) list_setting_number_pane_t2

0x4ff5,	// (0x0004fbc8) list_setting_number_pane_t3_ParamLimits

0x4ff5,	// (0x0004fbc8) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005a24a) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005a24a) list_setting_number_pane_t

0x4f9e,	// (0x0004fb71) set_value_pane_ParamLimits

0x4f9e,	// (0x0004fb71) set_value_pane

0x873e,	// (0x00053311) bg_set_opt_pane_ParamLimits

0x873e,	// (0x00053311) bg_set_opt_pane

0x5038,	// (0x0004fc0b) set_value_pane_t1

0x875f,	// (0x00053332) slider_set_pane_cp3

0x8768,	// (0x0005333b) volume_small_pane_cp

0x8771,	// (0x00053344) list_form_gen_pane

0x877a,	// (0x0005334d) scroll_pane_cp8

0x504e,	// (0x0004fc21) form_field_data_pane_ParamLimits

0x504e,	// (0x0004fc21) form_field_data_pane

0x5072,	// (0x0004fc45) form_field_data_wide_pane_ParamLimits

0x5072,	// (0x0004fc45) form_field_data_wide_pane

0x5095,	// (0x0004fc68) form_field_popup_pane_ParamLimits

0x5095,	// (0x0004fc68) form_field_popup_pane

0x50b5,	// (0x0004fc88) form_field_popup_wide_pane_ParamLimits

0x50b5,	// (0x0004fc88) form_field_popup_wide_pane

0x50d4,	// (0x0004fca7) form_field_slider_pane_ParamLimits

0x50d4,	// (0x0004fca7) form_field_slider_pane

0x50e7,	// (0x0004fcba) form_field_slider_wide_pane_ParamLimits

0x50e7,	// (0x0004fcba) form_field_slider_wide_pane

0x878b,	// (0x0005335e) data_form_pane

0x5104,	// (0x0004fcd7) form_field_data_pane_t1

0x8797,	// (0x0005336a) input_focus_pane

0x511c,	// (0x0004fcef) data_form_wide_pane

0x5139,	// (0x0004fd0c) form_field_data_wide_pane_t1

0x84fc,	// (0x000530cf) input_focus_pane_cp6

0x515b,	// (0x0004fd2e) form_field_popup_pane_t1

0x8797,	// (0x0005336a) input_focus_pane_cp7

0x87b9,	// (0x0005338c) list_form_pane

0x517b,	// (0x0004fd4e) form_field_popup_wide_pane_t1

0x8797,	// (0x0005336a) input_focus_pane_cp8

0x87c5,	// (0x00053398) list_form_wide_pane

0x5198,	// (0x0004fd6b) form_field_slider_pane_t1_ParamLimits

0x5198,	// (0x0004fd6b) form_field_slider_pane_t1

0x51ae,	// (0x0004fd81) form_field_slider_pane_t2_ParamLimits

0x51ae,	// (0x0004fd81) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005a25a) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005a25a) form_field_slider_pane_t

0x8171,	// (0x00052d44) input_focus_pane_cp9_ParamLimits

0x8171,	// (0x00052d44) input_focus_pane_cp9

0x51c3,	// (0x0004fd96) slider_cont_pane_ParamLimits

0x51c3,	// (0x0004fd96) slider_cont_pane

0x87d1,	// (0x000533a4) form_field_slider_wide_pane_t1_ParamLimits

0x87d1,	// (0x000533a4) form_field_slider_wide_pane_t1

0x51d7,	// (0x0004fdaa) form_field_slider_wide_pane_t2_ParamLimits

0x51d7,	// (0x0004fdaa) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0005a25f) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0005a25f) form_field_slider_wide_pane_t

0x8171,	// (0x00052d44) input_focus_pane_cp10_ParamLimits

0x8171,	// (0x00052d44) input_focus_pane_cp10

0x51e9,	// (0x0004fdbc) slider_cont_pane_cp1_ParamLimits

0x51e9,	// (0x0004fdbc) slider_cont_pane_cp1

0x51fd,	// (0x0004fdd0) slider_form_pane_cp

0x87e3,	// (0x000533b6) input_focus_pane_g1

0x87eb,	// (0x000533be) input_focus_pane_g2

0x87f3,	// (0x000533c6) input_focus_pane_g3

0x87fb,	// (0x000533ce) input_focus_pane_g4

0x8803,	// (0x000533d6) input_focus_pane_g5

0x880b,	// (0x000533de) input_focus_pane_g6

0x8813,	// (0x000533e6) input_focus_pane_g7

0x881b,	// (0x000533ee) input_focus_pane_g8

0x8823,	// (0x000533f6) input_focus_pane_g9

0x7648,	// (0x0005221b) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005a264) input_focus_pane_g

0xa291,	// (0x00054e64) wait_border_pane_g3_copy1

0x5205,	// (0x0004fdd8) data_form_pane_t1

0x7648,	// (0x0005221b) wait_anim_pane_g1_copy1

0x636a,	// (0x00050f3d) data_form_wide_pane_t1

0x5220,	// (0x0004fdf3) list_form_graphic_pane_cp_ParamLimits

0x5220,	// (0x0004fdf3) list_form_graphic_pane_cp

0xb1a6,	// (0x00055d79) slider_form_pane_g1

0xb1af,	// (0x00055d82) slider_form_pane_g2

0x0006,

0xf994,	// (0x0005a567) slider_form_pane_g

0x5239,	// (0x0004fe0c) list_form_graphic_pane_ParamLimits

0x5239,	// (0x0004fe0c) list_form_graphic_pane

0x5255,	// (0x0004fe28) list_form_graphic_pane_g1

0x525d,	// (0x0004fe30) list_form_graphic_pane_t1_ParamLimits

0x525d,	// (0x0004fe30) list_form_graphic_pane_t1

0x7732,	// (0x00052305) list_highlight_pane_cp5_ParamLimits

0x7732,	// (0x00052305) list_highlight_pane_cp5

0x5272,	// (0x0004fe45) find_pane_g1

0x882b,	// (0x000533fe) input_find_pane

0x527b,	// (0x0004fe4e) input_find_pane_g1_ParamLimits

0x527b,	// (0x0004fe4e) input_find_pane_g1

0x5287,	// (0x0004fe5a) input_find_pane_t1_ParamLimits

0x5287,	// (0x0004fe5a) input_find_pane_t1

0x529c,	// (0x0004fe6f) input_find_pane_t2_ParamLimits

0x529c,	// (0x0004fe6f) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005a279) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005a279) input_find_pane_t

0x8834,	// (0x00053407) input_focus_pane_cp5_ParamLimits

0x8834,	// (0x00053407) input_focus_pane_cp5

0x884e,	// (0x00053421) bg_popup_window_pane_cp2_ParamLimits

0x884e,	// (0x00053421) bg_popup_window_pane_cp2

0x885b,	// (0x0005342e) listscroll_menu_pane_ParamLimits

0x885b,	// (0x0005342e) listscroll_menu_pane

0x8867,	// (0x0005343a) popup_submenu_window_ParamLimits

0x8867,	// (0x0005343a) popup_submenu_window

0x8893,	// (0x00053466) find_popup_pane_g1

0x889b,	// (0x0005346e) input_popup_find_pane_cp

0x8834,	// (0x00053407) input_focus_pane_cp4_ParamLimits

0x8834,	// (0x00053407) input_focus_pane_cp4

0x88b1,	// (0x00053484) input_popup_find_pane_t1_ParamLimits

0x88b1,	// (0x00053484) input_popup_find_pane_t1

0x7652,	// (0x00052225) bg_popup_sub_pane_cp

0x88df,	// (0x000534b2) listscroll_popup_sub_pane

0x88e7,	// (0x000534ba) list_submenu_pane_ParamLimits

0x88e7,	// (0x000534ba) list_submenu_pane

0x88f8,	// (0x000534cb) scroll_pane_cp4

0x8900,	// (0x000534d3) list_single_popup_submenu_pane_ParamLimits

0x8900,	// (0x000534d3) list_single_popup_submenu_pane

0x8914,	// (0x000534e7) list_single_popup_submenu_pane_g1

0x891c,	// (0x000534ef) list_single_popup_submenu_pane_t1_ParamLimits

0x891c,	// (0x000534ef) list_single_popup_submenu_pane_t1

0x7732,	// (0x00052305) bg_active_tab_pane_cp1_ParamLimits

0x7732,	// (0x00052305) bg_active_tab_pane_cp1

0x8931,	// (0x00053504) tabs_2_active_pane_g1

0x8939,	// (0x0005350c) tabs_2_active_pane_t1

0x7732,	// (0x00052305) bg_passive_tab_pane_cp1_ParamLimits

0x7732,	// (0x00052305) bg_passive_tab_pane_cp1

0x8931,	// (0x00053504) tabs_2_passive_pane_g1

0x8939,	// (0x0005350c) tabs_2_passive_pane_t1

0x894b,	// (0x0005351e) bg_active_tab_pane_cp4

0x8959,	// (0x0005352c) tabs_2_long_active_pane_t1

0x896c,	// (0x0005353f) bg_passive_tab_pane_cp4

0x5f62,	// (0x00050b35) list_single_midp_graphic_pane_g4_ParamLimits

0x894b,	// (0x0005351e) bg_active_tab_pane_cp5

0x8978,	// (0x0005354b) tabs_3_long_active_pane_t1

0x896c,	// (0x0005353f) bg_passive_tab_pane_cp5

0x5f62,	// (0x00050b35) list_single_midp_graphic_pane_g4

0x7732,	// (0x00052305) bg_popup_window_pane_cp13_ParamLimits

0x7732,	// (0x00052305) bg_popup_window_pane_cp13

0x8993,	// (0x00053566) listscroll_popup_fast_pane_ParamLimits

0x8993,	// (0x00053566) listscroll_popup_fast_pane

0x89a2,	// (0x00053575) grid_popup_fast_pane_ParamLimits

0x89a2,	// (0x00053575) grid_popup_fast_pane

0x89b4,	// (0x00053587) scroll_pane_cp9_ParamLimits

0x89b4,	// (0x00053587) scroll_pane_cp9

0xca50,	// (0x00057623) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xca50,	// (0x00057623) list_single_graphic_hl_pane_t1_cp2

0x89d8,	// (0x000535ab) input_focus_pane_cp20_ParamLimits

0x89d8,	// (0x000535ab) input_focus_pane_cp20

0x89e6,	// (0x000535b9) query_popup_data_pane_t1_ParamLimits

0x89e6,	// (0x000535b9) query_popup_data_pane_t1

0x89f9,	// (0x000535cc) query_popup_data_pane_t2_ParamLimits

0x89f9,	// (0x000535cc) query_popup_data_pane_t2

0x8a3f,	// (0x00053612) query_popup_data_pane_t3_ParamLimits

0x8a3f,	// (0x00053612) query_popup_data_pane_t3

0x8a80,	// (0x00053653) query_popup_data_pane_t4_ParamLimits

0x8a80,	// (0x00053653) query_popup_data_pane_t4

0x8abc,	// (0x0005368f) query_popup_data_pane_t5_ParamLimits

0x8abc,	// (0x0005368f) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005a27e) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005a27e) query_popup_data_pane_t

0x87e3,	// (0x000533b6) bg_set_opt_pane_g1

0x87eb,	// (0x000533be) bg_set_opt_pane_g2

0x87f3,	// (0x000533c6) bg_set_opt_pane_g3

0x87fb,	// (0x000533ce) bg_set_opt_pane_g4

0x8803,	// (0x000533d6) bg_set_opt_pane_g5

0x880b,	// (0x000533de) bg_set_opt_pane_g6

0x8813,	// (0x000533e6) bg_set_opt_pane_g7

0x881b,	// (0x000533ee) bg_set_opt_pane_g8

0x8823,	// (0x000533f6) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005a289) bg_set_opt_pane_g

0x55bc,	// (0x0005018f) control_top_pane_stacon_ParamLimits

0x55bc,	// (0x0005018f) control_top_pane_stacon

0x560f,	// (0x000501e2) signal_pane_stacon_ParamLimits

0x560f,	// (0x000501e2) signal_pane_stacon

0x90ae,	// (0x00053c81) stacon_top_pane_g1_ParamLimits

0x90ae,	// (0x00053c81) stacon_top_pane_g1

0x5634,	// (0x00050207) title_pane_stacon_ParamLimits

0x5634,	// (0x00050207) title_pane_stacon

0x565e,	// (0x00050231) uni_indicator_pane_stacon_ParamLimits

0x565e,	// (0x00050231) uni_indicator_pane_stacon

0x5673,	// (0x00050246) battery_pane_stacon_ParamLimits

0x5673,	// (0x00050246) battery_pane_stacon

0x56b7,	// (0x0005028a) control_bottom_pane_stacon_ParamLimits

0x56b7,	// (0x0005028a) control_bottom_pane_stacon

0x56da,	// (0x000502ad) navi_pane_stacon_ParamLimits

0x56da,	// (0x000502ad) navi_pane_stacon

0x90d0,	// (0x00053ca3) stacon_bottom_pane_g1_ParamLimits

0x90d0,	// (0x00053ca3) stacon_bottom_pane_g1

0x52b1,	// (0x0004fe84) aid_levels_signal_lsc_ParamLimits

0x52b1,	// (0x0004fe84) aid_levels_signal_lsc

0x52c7,	// (0x0004fe9a) signal_pane_stacon_g1_ParamLimits

0x52c7,	// (0x0004fe9a) signal_pane_stacon_g1

0x52db,	// (0x0004feae) signal_pane_stacon_g2_ParamLimits

0x52db,	// (0x0004feae) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0005a29c) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005a29c) signal_pane_stacon_g

0x5310,	// (0x0004fee3) title_pane_stacon_t1_ParamLimits

0x5310,	// (0x0004fee3) title_pane_stacon_t1

0x8b00,	// (0x000536d3) uni_indicator_pane_stacon_g1

0x8b0a,	// (0x000536dd) uni_indicator_pane_stacon_g2

0x8b14,	// (0x000536e7) uni_indicator_pane_stacon_g3

0x8b1e,	// (0x000536f1) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005a2a8) uni_indicator_pane_stacon_g

0x5335,	// (0x0004ff08) control_top_pane_stacon_g1

0x533d,	// (0x0004ff10) control_top_pane_stacon_t1_ParamLimits

0x533d,	// (0x0004ff10) control_top_pane_stacon_t1

0x5374,	// (0x0004ff47) aid_levels_battery_lsc_ParamLimits

0x5374,	// (0x0004ff47) aid_levels_battery_lsc

0x538b,	// (0x0004ff5e) battery_pane_stacon_g1_ParamLimits

0x538b,	// (0x0004ff5e) battery_pane_stacon_g1

0x539e,	// (0x0004ff71) battery_pane_stacon_g2_ParamLimits

0x539e,	// (0x0004ff71) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0005a2b1) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0005a2b1) battery_pane_stacon_g

0x53dc,	// (0x0004ffaf) navi_icon_pane_stacon

0x53f0,	// (0x0004ffc3) navi_navi_pane_stacon

0x53dc,	// (0x0004ffaf) navi_text_pane_stacon

0x5335,	// (0x0004ff08) control_bottom_pane_stacon_g1

0x5404,	// (0x0004ffd7) control_bottom_pane_stacon_t1_ParamLimits

0x5404,	// (0x0004ffd7) control_bottom_pane_stacon_t1

0x8b42,	// (0x00053715) grid_app_pane_ParamLimits

0x8b42,	// (0x00053715) grid_app_pane

0x8b64,	// (0x00053737) scroll_pane_cp15_ParamLimits

0x8b64,	// (0x00053737) scroll_pane_cp15

0x8b77,	// (0x0005374a) cell_app_pane_ParamLimits

0x8b77,	// (0x0005374a) cell_app_pane

0x8b9f,	// (0x00053772) cell_app_pane_g1_ParamLimits

0x8b9f,	// (0x00053772) cell_app_pane_g1

0x8bc3,	// (0x00053796) cell_app_pane_g2_ParamLimits

0x8bc3,	// (0x00053796) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005a2b6) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005a2b6) cell_app_pane_g

0x8bcf,	// (0x000537a2) cell_app_pane_t1_ParamLimits

0x8bcf,	// (0x000537a2) cell_app_pane_t1

0x8be6,	// (0x000537b9) grid_highlight_pane_ParamLimits

0x8be6,	// (0x000537b9) grid_highlight_pane

0x87e3,	// (0x000533b6) cell_highlight_pane_g1

0x87eb,	// (0x000533be) cell_highlight_pane_g2

0x87f3,	// (0x000533c6) cell_highlight_pane_g3

0x87fb,	// (0x000533ce) cell_highlight_pane_g4

0x8803,	// (0x000533d6) cell_highlight_pane_g5

0x880b,	// (0x000533de) cell_highlight_pane_g6

0x8813,	// (0x000533e6) cell_highlight_pane_g7

0x881b,	// (0x000533ee) cell_highlight_pane_g8

0x8823,	// (0x000533f6) cell_highlight_pane_g9

0x7648,	// (0x0005221b) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005a264) cell_highlight_pane_g

0x8bf7,	// (0x000537ca) bg_scroll_pane

0x544e,	// (0x00050021) scroll_handle_pane

0x8c3e,	// (0x00053811) scroll_bg_pane_g1

0x8c53,	// (0x00053826) scroll_bg_pane_g2

0x8c6b,	// (0x0005383e) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005a2bb) scroll_bg_pane_g

0x8c80,	// (0x00053853) scroll_handle_focus_pane_ParamLimits

0x8c80,	// (0x00053853) scroll_handle_focus_pane

0x8c3e,	// (0x00053811) scroll_handle_pane_g1

0x8c8d,	// (0x00053860) scroll_handle_pane_g2

0x8c6b,	// (0x0005383e) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005a2c2) scroll_handle_pane_g

0x8834,	// (0x00053407) bg_popup_sub_pane_cp21_ParamLimits

0x8834,	// (0x00053407) bg_popup_sub_pane_cp21

0x8ca1,	// (0x00053874) popup_fep_japan_predictive_window_t1_ParamLimits

0x8ca1,	// (0x00053874) popup_fep_japan_predictive_window_t1

0x8cbb,	// (0x0005388e) popup_fep_japan_predictive_window_t2_ParamLimits

0x8cbb,	// (0x0005388e) popup_fep_japan_predictive_window_t2

0x8cee,	// (0x000538c1) popup_fep_japan_predictive_window_t3_ParamLimits

0x8cee,	// (0x000538c1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005a2c9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005a2c9) popup_fep_japan_predictive_window_t

0x7652,	// (0x00052225) bg_popup_sub_pane_cp23

0x8d25,	// (0x000538f8) listscroll_japin_cand_pane

0x8d2d,	// (0x00053900) popup_fep_japan_candidate_window_t1

0x8d3b,	// (0x0005390e) candidate_pane_ParamLimits

0x8d3b,	// (0x0005390e) candidate_pane

0x8d4d,	// (0x00053920) scroll_pane_cp30

0x8d55,	// (0x00053928) list_single_popup_jap_candidate_pane_ParamLimits

0x8d55,	// (0x00053928) list_single_popup_jap_candidate_pane

0x7652,	// (0x00052225) list_highlight_pane_cp30

0x8d6a,	// (0x0005393d) list_single_popup_jap_candidate_pane_t1

0x8d79,	// (0x0005394c) level_1_signal

0x8d8b,	// (0x0005395e) level_2_signal

0x8d9e,	// (0x00053971) level_3_signal

0x8db1,	// (0x00053984) level_4_signal

0x8dc4,	// (0x00053997) level_5_signal

0x8dd7,	// (0x000539aa) level_6_signal

0x8dea,	// (0x000539bd) level_7_signal

0x8d79,	// (0x0005394c) level_1_battery

0x8d8b,	// (0x0005395e) level_2_battery

0x8d9e,	// (0x00053971) level_3_battery

0x8db1,	// (0x00053984) level_4_battery

0x8dc4,	// (0x00053997) level_5_battery

0x8dd7,	// (0x000539aa) level_6_battery

0x8dea,	// (0x000539bd) level_7_battery

0x8e15,	// (0x000539e8) list_menu_pane_ParamLimits

0x8e15,	// (0x000539e8) list_menu_pane

0x8e2b,	// (0x000539fe) scroll_pane_cp25_ParamLimits

0x8e2b,	// (0x000539fe) scroll_pane_cp25

0x8e44,	// (0x00053a17) list_double2_graphic_pane_cp2_ParamLimits

0x8e44,	// (0x00053a17) list_double2_graphic_pane_cp2

0x8e44,	// (0x00053a17) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e44,	// (0x00053a17) list_double2_large_graphic_pane_cp2

0x8e44,	// (0x00053a17) list_double2_pane_cp2_ParamLimits

0x8e44,	// (0x00053a17) list_double2_pane_cp2

0x8e44,	// (0x00053a17) list_double_graphic_pane_cp2_ParamLimits

0x8e44,	// (0x00053a17) list_double_graphic_pane_cp2

0x8e44,	// (0x00053a17) list_double_large_graphic_pane_cp2_ParamLimits

0x8e44,	// (0x00053a17) list_double_large_graphic_pane_cp2

0x8e44,	// (0x00053a17) list_double_number_pane_cp2_ParamLimits

0x8e44,	// (0x00053a17) list_double_number_pane_cp2

0x8e44,	// (0x00053a17) list_double_pane_cp2_ParamLimits

0x8e44,	// (0x00053a17) list_double_pane_cp2

0x8e68,	// (0x00053a3b) list_single_2graphic_pane_cp2_ParamLimits

0x8e68,	// (0x00053a3b) list_single_2graphic_pane_cp2

0x8e68,	// (0x00053a3b) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e68,	// (0x00053a3b) list_single_graphic_heading_pane_cp2

0x8e68,	// (0x00053a3b) list_single_graphic_pane_cp2_ParamLimits

0x8e68,	// (0x00053a3b) list_single_graphic_pane_cp2

0x8e68,	// (0x00053a3b) list_single_heading_pane_cp2_ParamLimits

0x8e68,	// (0x00053a3b) list_single_heading_pane_cp2

0x8e81,	// (0x00053a54) list_single_large_graphic_pane_cp2_ParamLimits

0x8e81,	// (0x00053a54) list_single_large_graphic_pane_cp2

0x8e68,	// (0x00053a3b) list_single_number_heading_pane_cp2_ParamLimits

0x8e68,	// (0x00053a3b) list_single_number_heading_pane_cp2

0x8e68,	// (0x00053a3b) list_single_number_pane_cp2_ParamLimits

0x8e68,	// (0x00053a3b) list_single_number_pane_cp2

0x8e68,	// (0x00053a3b) list_single_pane_cp2_ParamLimits

0x8e68,	// (0x00053a3b) list_single_pane_cp2

0x8efd,	// (0x00053ad0) bg_popup_sub_pane_cp22

0x5500,	// (0x000500d3) popup_side_volume_key_window_g1

0x552a,	// (0x000500fd) popup_side_volume_key_window_t1

0x5546,	// (0x00050119) volume_small_pane_cp1

0x8171,	// (0x00052d44) bg_popup_sub_pane_cp24_ParamLimits

0x8171,	// (0x00052d44) bg_popup_sub_pane_cp24

0x8f13,	// (0x00053ae6) fep_china_uni_candidate_pane_ParamLimits

0x8f13,	// (0x00053ae6) fep_china_uni_candidate_pane

0x8f27,	// (0x00053afa) fep_china_uni_entry_pane

0x8f37,	// (0x00053b0a) popup_fep_china_uni_window_g1

0x8f53,	// (0x00053b26) fep_china_uni_entry_pane_g1

0x8f5b,	// (0x00053b2e) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005a2fa) fep_china_uni_entry_pane_g

0x8f63,	// (0x00053b36) fep_entry_item_pane

0x8f6d,	// (0x00053b40) fep_candidate_item_pane

0x8f75,	// (0x00053b48) fep_china_uni_candidate_pane_g1

0x8f7d,	// (0x00053b50) fep_china_uni_candidate_pane_g2

0x8f85,	// (0x00053b58) fep_china_uni_candidate_pane_g3

0x8f8d,	// (0x00053b60) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005a2ff) fep_china_uni_candidate_pane_g

0x7648,	// (0x0005221b) fep_entry_item_pane_g1

0x8f95,	// (0x00053b68) fep_entry_item_pane_t1_ParamLimits

0x8f95,	// (0x00053b68) fep_entry_item_pane_t1

0x8fab,	// (0x00053b7e) fep_candidate_item_pane_t1_ParamLimits

0x8fab,	// (0x00053b7e) fep_candidate_item_pane_t1

0x8fc0,	// (0x00053b93) fep_candidate_item_pane_t2_ParamLimits

0x8fc0,	// (0x00053b93) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005a308) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005a308) fep_candidate_item_pane_t

0x7732,	// (0x00052305) list_highlight_pane_cp31_ParamLimits

0x7732,	// (0x00052305) list_highlight_pane_cp31

0x8fd2,	// (0x00053ba5) level_1_signal_lsc

0x8fdb,	// (0x00053bae) level_2_signal_lsc

0x8fe4,	// (0x00053bb7) level_3_signal_lsc

0x8fed,	// (0x00053bc0) level_4_signal_lsc

0x8ff6,	// (0x00053bc9) level_5_signal_lsc

0x8fff,	// (0x00053bd2) level_6_signal_lsc

0x9008,	// (0x00053bdb) level_7_signal_lsc

0x9008,	// (0x00053bdb) level_1_battery_lsc

0x9011,	// (0x00053be4) level_2_battery_lsc

0x901a,	// (0x00053bed) level_3_battery_lsc

0x9023,	// (0x00053bf6) level_4_battery_lsc

0x902c,	// (0x00053bff) level_5_battery_lsc

0x9035,	// (0x00053c08) level_6_battery_lsc

0x8fd2,	// (0x00053ba5) level_7_battery_lsc

0x903e,	// (0x00053c11) scroll_handle_focus_pane_g1

0x9047,	// (0x00053c1a) scroll_handle_focus_pane_g2

0x9050,	// (0x00053c23) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005a30d) scroll_handle_focus_pane_g

0x554e,	// (0x00050121) list_single_2graphic_pane_g1_ParamLimits

0x554e,	// (0x00050121) list_single_2graphic_pane_g1

0x799f,	// (0x00052572) list_single_2graphic_pane_g2_ParamLimits

0x799f,	// (0x00052572) list_single_2graphic_pane_g2

0x7981,	// (0x00052554) list_single_2graphic_pane_g3_ParamLimits

0x7981,	// (0x00052554) list_single_2graphic_pane_g3

0x555a,	// (0x0005012d) list_single_2graphic_pane_g4_ParamLimits

0x555a,	// (0x0005012d) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005a314) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005a314) list_single_2graphic_pane_g

0x5566,	// (0x00050139) list_single_2graphic_pane_t1_ParamLimits

0x5566,	// (0x00050139) list_single_2graphic_pane_t1

0x7a21,	// (0x000525f4) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7a21,	// (0x000525f4) list_double2_graphic_large_graphic_pane_g1

0x4e4e,	// (0x0004fa21) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4e4e,	// (0x0004fa21) list_double2_graphic_large_graphic_pane_g2

0x79e8,	// (0x000525bb) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x79e8,	// (0x000525bb) list_double2_graphic_large_graphic_pane_g3

0x7a31,	// (0x00052604) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7a31,	// (0x00052604) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005a31d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005a31d) list_double2_graphic_large_graphic_pane_g

0x5594,	// (0x00050167) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5594,	// (0x00050167) list_double2_graphic_large_graphic_pane_t1

0x55aa,	// (0x0005017d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x55aa,	// (0x0005017d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005a326) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005a326) list_double2_graphic_large_graphic_pane_t

0x9198,	// (0x00053d6b) popup_fast_swap_window_ParamLimits

0x9198,	// (0x00053d6b) popup_fast_swap_window

0x91b4,	// (0x00053d87) popup_side_volume_key_window

0x91d0,	// (0x00053da3) stacon_top_pane

0x91da,	// (0x00053dad) status_pane_ParamLimits

0x91da,	// (0x00053dad) status_pane

0x91e8,	// (0x00053dbb) status_small_pane

0x7652,	// (0x00052225) control_pane

0x7652,	// (0x00052225) stacon_bottom_pane

0x877a,	// (0x0005334d) scroll_pane_cp121

0x8771,	// (0x00053344) set_content_pane

0x9059,	// (0x00053c2c) bg_active_tab_pane_g1_cp1

0x9062,	// (0x00053c35) bg_active_tab_pane_g2_cp1

0x906b,	// (0x00053c3e) bg_active_tab_pane_g3_cp1

0x9059,	// (0x00053c2c) bg_passive_tab_pane_g1_cp1

0x9062,	// (0x00053c35) bg_passive_tab_pane_g2_cp1

0x906b,	// (0x00053c3e) bg_passive_tab_pane_g3_cp1

0x9074,	// (0x00053c47) bg_active_tab_pane_g1_cp2

0x9062,	// (0x00053c35) bg_active_tab_pane_g2_cp2

0x907d,	// (0x00053c50) bg_active_tab_pane_g3_cp2

0x9074,	// (0x00053c47) bg_passive_tab_pane_g1_cp2

0x9062,	// (0x00053c35) bg_passive_tab_pane_g2_cp2

0x907d,	// (0x00053c50) bg_passive_tab_pane_g3_cp2

0x9086,	// (0x00053c59) bg_active_tab_pane_g1_cp3

0x9062,	// (0x00053c35) bg_active_tab_pane_g2_cp3

0x908f,	// (0x00053c62) bg_active_tab_pane_g3_cp3

0x9086,	// (0x00053c59) bg_passive_tab_pane_g1_cp3

0x9062,	// (0x00053c35) bg_passive_tab_pane_g2_cp3

0x908f,	// (0x00053c62) bg_passive_tab_pane_g3_cp3

0x9098,	// (0x00053c6b) bg_active_tab_pane_g1_cp4

0x9062,	// (0x00053c35) bg_active_tab_pane_g2_cp4

0x90a3,	// (0x00053c76) bg_active_tab_pane_g3_cp4

0x9098,	// (0x00053c6b) bg_passive_tab_pane_g1_cp4

0x9062,	// (0x00053c35) bg_passive_tab_pane_g2_cp4

0x90a3,	// (0x00053c76) bg_passive_tab_pane_g3_cp4

0x90ec,	// (0x00053cbf) bg_active_tab_pane_g1_cp5

0x9062,	// (0x00053c35) bg_active_tab_pane_g2_cp5

0x90f5,	// (0x00053cc8) bg_active_tab_pane_g3_cp5

0x90ec,	// (0x00053cbf) bg_passive_tab_pane_g1_cp5

0x9062,	// (0x00053c35) bg_passive_tab_pane_g2_cp5

0x90f5,	// (0x00053cc8) bg_passive_tab_pane_g3_cp5

0x90fe,	// (0x00053cd1) list_set_graphic_pane_ParamLimits

0x90fe,	// (0x00053cd1) list_set_graphic_pane

0x7652,	// (0x00052225) bg_set_opt_pane_cp4

0x911b,	// (0x00053cee) list_set_graphic_pane_g1_ParamLimits

0x911b,	// (0x00053cee) list_set_graphic_pane_g1

0x9127,	// (0x00053cfa) list_set_graphic_pane_g2_ParamLimits

0x9127,	// (0x00053cfa) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005a32b) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005a32b) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x0005a6a0) volume_small_pane_cp_g

0x914b,	// (0x00053d1e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x914b,	// (0x00053d1e) list_double2_large_graphic_pane_g1_cp2

0x9157,	// (0x00053d2a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9157,	// (0x00053d2a) list_double2_large_graphic_pane_g2_cp2

0x9168,	// (0x00053d3b) list_double2_large_graphic_pane_g3_cp2

0x9170,	// (0x00053d43) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9170,	// (0x00053d43) list_double2_large_graphic_pane_t1_cp2

0x9186,	// (0x00053d59) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9186,	// (0x00053d59) list_double2_large_graphic_pane_t2_cp2

0xad64,	// (0x00055937) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad64,	// (0x00055937) list_double_large_graphic_pane_g1_cp2

0xad75,	// (0x00055948) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad75,	// (0x00055948) list_double_large_graphic_pane_g2_cp2

0x9301,	// (0x00053ed4) list_double_large_graphic_pane_g3_cp2

0xad86,	// (0x00055959) list_double_large_graphic_pane_g4_cp

0xad8e,	// (0x00055961) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad8e,	// (0x00055961) list_double_large_graphic_pane_t1_cp2

0xada5,	// (0x00055978) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xada5,	// (0x00055978) list_double_large_graphic_pane_t2_cp2

0x91f3,	// (0x00053dc6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x91f3,	// (0x00053dc6) list_double2_graphic_pane_g1_cp2

0x9201,	// (0x00053dd4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9201,	// (0x00053dd4) list_double2_graphic_pane_g2_cp2

0x9212,	// (0x00053de5) list_double2_graphic_pane_g3_cp2

0x921c,	// (0x00053def) list_double2_graphic_pane_t1_cp2_ParamLimits

0x921c,	// (0x00053def) list_double2_graphic_pane_t1_cp2

0x9232,	// (0x00053e05) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9232,	// (0x00053e05) list_double2_graphic_pane_t2_cp2

0x9244,	// (0x00053e17) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9244,	// (0x00053e17) list_single_number_heading_pane_g1_cp2

0x9250,	// (0x00053e23) list_single_number_heading_pane_g2_cp2

0x9258,	// (0x00053e2b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9258,	// (0x00053e2b) list_single_number_heading_pane_t1_cp2

0x926e,	// (0x00053e41) list_single_number_heading_pane_t2_cp2_ParamLimits

0x926e,	// (0x00053e41) list_single_number_heading_pane_t2_cp2

0x9280,	// (0x00053e53) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9280,	// (0x00053e53) list_single_number_heading_pane_t3_cp2

0x9244,	// (0x00053e17) list_single_heading_pane_g1_cp2_ParamLimits

0x9244,	// (0x00053e17) list_single_heading_pane_g1_cp2

0x9250,	// (0x00053e23) list_single_heading_pane_g2_cp2

0x9258,	// (0x00053e2b) list_single_heading_pane_t1_cp2_ParamLimits

0x9258,	// (0x00053e2b) list_single_heading_pane_t1_cp2

0xab6c,	// (0x0005573f) list_single_heading_pane_t2_cp2_ParamLimits

0xab6c,	// (0x0005573f) list_single_heading_pane_t2_cp2

0xaab4,	// (0x00055687) list_double_graphic_pane_g1_cp2_ParamLimits

0xaab4,	// (0x00055687) list_double_graphic_pane_g1_cp2

0xaac0,	// (0x00055693) list_double_graphic_pane_g2_cp2_ParamLimits

0xaac0,	// (0x00055693) list_double_graphic_pane_g2_cp2

0xaacf,	// (0x000556a2) list_double_graphic_pane_g3_cp2

0xaad7,	// (0x000556aa) list_double_graphic_pane_t1_cp2_ParamLimits

0xaad7,	// (0x000556aa) list_double_graphic_pane_t1_cp2

0xaaed,	// (0x000556c0) list_double_graphic_pane_t2_cp2_ParamLimits

0xaaed,	// (0x000556c0) list_double_graphic_pane_t2_cp2

0x92f5,	// (0x00053ec8) list_double_number_pane_g1_cp2_ParamLimits

0x92f5,	// (0x00053ec8) list_double_number_pane_g1_cp2

0x9301,	// (0x00053ed4) list_double_number_pane_g2_cp2

0xaa78,	// (0x0005564b) list_double_number_pane_t1_cp2_ParamLimits

0xaa78,	// (0x0005564b) list_double_number_pane_t1_cp2

0xaa8c,	// (0x0005565f) list_double_number_pane_t2_cp2_ParamLimits

0xaa8c,	// (0x0005565f) list_double_number_pane_t2_cp2

0xaaa2,	// (0x00055675) list_double_number_pane_t3_cp2_ParamLimits

0xaaa2,	// (0x00055675) list_double_number_pane_t3_cp2

0xa961,	// (0x00055534) list_single_graphic_pane_g1_cp2_ParamLimits

0xa961,	// (0x00055534) list_single_graphic_pane_g1_cp2

0x9359,	// (0x00053f2c) list_single_graphic_pane_g2_cp2_ParamLimits

0x9359,	// (0x00053f2c) list_single_graphic_pane_g2_cp2

0x9365,	// (0x00053f38) list_single_graphic_pane_g3_cp2

0xa937,	// (0x0005550a) list_single_graphic_pane_t1_cp2_ParamLimits

0xa937,	// (0x0005550a) list_single_graphic_pane_t1_cp2

0x9359,	// (0x00053f2c) list_single_number_pane_g1_cp2_ParamLimits

0x9359,	// (0x00053f2c) list_single_number_pane_g1_cp2

0x9365,	// (0x00053f38) list_single_number_pane_g2_cp2

0xa937,	// (0x0005550a) list_single_number_pane_t1_cp2_ParamLimits

0xa937,	// (0x0005550a) list_single_number_pane_t1_cp2

0xa94d,	// (0x00055520) list_single_number_pane_t2_cp2_ParamLimits

0xa94d,	// (0x00055520) list_single_number_pane_t2_cp2

0x9157,	// (0x00053d2a) list_double2_pane_g1_cp2_ParamLimits

0x9157,	// (0x00053d2a) list_double2_pane_g1_cp2

0x9168,	// (0x00053d3b) list_double2_pane_g2_cp2

0x92cd,	// (0x00053ea0) list_double2_pane_t1_cp2_ParamLimits

0x92cd,	// (0x00053ea0) list_double2_pane_t1_cp2

0x92e3,	// (0x00053eb6) list_double2_pane_t2_cp2_ParamLimits

0x92e3,	// (0x00053eb6) list_double2_pane_t2_cp2

0x92f5,	// (0x00053ec8) list_double_pane_g1_cp2_ParamLimits

0x92f5,	// (0x00053ec8) list_double_pane_g1_cp2

0x9301,	// (0x00053ed4) list_double_pane_g2_cp2

0x9309,	// (0x00053edc) list_double_pane_t1_cp2_ParamLimits

0x9309,	// (0x00053edc) list_double_pane_t1_cp2

0x931f,	// (0x00053ef2) list_double_pane_t2_cp2_ParamLimits

0x931f,	// (0x00053ef2) list_double_pane_t2_cp2

0x9349,	// (0x00053f1c) list_single_pane_cp2_g3

0x9359,	// (0x00053f2c) list_single_pane_g1_cp2_ParamLimits

0x9359,	// (0x00053f2c) list_single_pane_g1_cp2

0x9365,	// (0x00053f38) list_single_pane_g2_cp2

0x936d,	// (0x00053f40) list_single_pane_t1_cp2_ParamLimits

0x936d,	// (0x00053f40) list_single_pane_t1_cp2

0x9385,	// (0x00053f58) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9385,	// (0x00053f58) list_single_large_graphic_pane_g1_cp2

0x9391,	// (0x00053f64) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9391,	// (0x00053f64) list_single_large_graphic_pane_g2_cp2

0x939d,	// (0x00053f70) list_single_large_graphic_pane_g3_cp2

0x93a5,	// (0x00053f78) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x93a5,	// (0x00053f78) list_single_large_graphic_pane_g4_cp1

0x93bf,	// (0x00053f92) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x93bf,	// (0x00053f92) list_single_large_graphic_pane_t1_cp2

0xa903,	// (0x000554d6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa903,	// (0x000554d6) list_single_graphic_heading_pane_g1_cp2

0xa8d0,	// (0x000554a3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8d0,	// (0x000554a3) list_single_graphic_heading_pane_g4_cp2

0x9365,	// (0x00053f38) list_single_graphic_heading_pane_g5_cp2

0xa90f,	// (0x000554e2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa90f,	// (0x000554e2) list_single_graphic_heading_pane_t1_cp2

0xa925,	// (0x000554f8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa925,	// (0x000554f8) list_single_graphic_heading_pane_t2_cp2

0xa8c4,	// (0x00055497) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8c4,	// (0x00055497) list_single_2graphic_pane_g1_cp2

0xa8d0,	// (0x000554a3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8d0,	// (0x000554a3) list_single_2graphic_pane_g2_cp2

0x9365,	// (0x00053f38) list_single_2graphic_pane_g3_cp2

0xa8e1,	// (0x000554b4) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa8e1,	// (0x000554b4) list_single_2graphic_pane_g4_cp2

0xa8ed,	// (0x000554c0) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa8ed,	// (0x000554c0) list_single_2graphic_pane_t1_cp2

0x7648,	// (0x0005221b) list_highlight_pane_g10_cp1

0xa49c,	// (0x0005506f) list_highlight_pane_g1_cp1

0xa4a4,	// (0x00055077) list_highlight_pane_g2_cp1

0xa4ac,	// (0x0005507f) list_highlight_pane_g3_cp1

0xa4b4,	// (0x00055087) list_highlight_pane_g4_cp1

0xa4bc,	// (0x0005508f) list_highlight_pane_g5_cp1

0xa4c4,	// (0x00055097) list_highlight_pane_g6_cp1

0xa4cc,	// (0x0005509f) list_highlight_pane_g7_cp1

0xa4d4,	// (0x000550a7) list_highlight_pane_g8_cp1

0xa4dc,	// (0x000550af) list_highlight_pane_g9_cp1

0xa3bc,	// (0x00054f8f) form_field_slider_pane_t3

0xa3ca,	// (0x00054f9d) form_field_slider_pane_t4

0xa3d8,	// (0x00054fab) slider_form_pane_ParamLimits

0xa3d8,	// (0x00054fab) slider_form_pane

0x7652,	// (0x00052225) control_abbreviations

0x7652,	// (0x00052225) control_conventions

0x7652,	// (0x00052225) control_definitions

0x7652,	// (0x00052225) format_table_attribute

0xabb6,	// (0x00055789) bg_popup_preview_window_pane_g9

0x7652,	// (0x00052225) format_table_data2

0x7652,	// (0x00052225) format_table_data3

0x7652,	// (0x00052225) format_table_data_example

0x0008,

0x7652,	// (0x00052225) intro_purpose

0xf8f4,	// (0x0005a4c7) bg_popup_preview_window_pane_g

0x7652,	// (0x00052225) texts_category

0x7652,	// (0x00052225) texts_graphics

0x93d5,	// (0x00053fa8) text_digital

0x93e4,	// (0x00053fb7) text_primary

0x93f3,	// (0x00053fc6) text_primary_small

0x9402,	// (0x00053fd5) text_secondary

0x9411,	// (0x00053fe4) text_title

0xb290,	// (0x00055e63) bg_passive_tab_pane_g1_cp3_srt

0x9062,	// (0x00053c35) bg_passive_tab_pane_g2_cp3_srt

0xb299,	// (0x00055e6c) bg_passive_tab_pane_g3_cp3_srt

0x7732,	// (0x00052305) bg_active_tab_pane_cp3_srt_ParamLimits

0x7732,	// (0x00052305) bg_active_tab_pane_cp3_srt

0xb2a2,	// (0x00055e75) tabs_4_active_pane_srt_g1

0xb2aa,	// (0x00055e7d) tabs_4_active_pane_srt_t1_ParamLimits

0xb2aa,	// (0x00055e7d) tabs_4_active_pane_srt_t1

0xb290,	// (0x00055e63) bg_active_tab_pane_g1_cp3_copy1

0x9062,	// (0x00053c35) bg_active_tab_pane_g2_cp3_copy1

0xb299,	// (0x00055e6c) bg_active_tab_pane_g3_cp3_copy1

0x7732,	// (0x00052305) tabs_2_long_active_pane_srt_ParamLimits

0x7732,	// (0x00052305) tabs_2_long_active_pane_srt

0x7732,	// (0x00052305) tabs_2_long_passive_pane_srt_ParamLimits

0x7732,	// (0x00052305) tabs_2_long_passive_pane_srt

0x896c,	// (0x0005353f) bg_passive_tab_pane_cp4_srt_ParamLimits

0x896c,	// (0x0005353f) bg_passive_tab_pane_cp4_srt

0xafd9,	// (0x00055bac) bg_passive_tab_pane_g1_cp4_srt

0x9062,	// (0x00053c35) bg_passive_tab_pane_g2_cp4_srt

0xafe2,	// (0x00055bb5) bg_passive_tab_pane_g3_cp4_srt

0x894b,	// (0x0005351e) bg_active_tab_pane_cp4_srt_ParamLimits

0x894b,	// (0x0005351e) bg_active_tab_pane_cp4_srt

0xafeb,	// (0x00055bbe) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafeb,	// (0x00055bbe) tabs_2_long_active_pane_srt_t1

0xafd9,	// (0x00055bac) bg_active_tab_pane_g1_cp4_srt

0x9062,	// (0x00053c35) bg_active_tab_pane_g2_cp4_srt

0xafe2,	// (0x00055bb5) bg_active_tab_pane_g3_cp4_srt

0x8171,	// (0x00052d44) tabs_3_long_active_pane_srt_ParamLimits

0x8171,	// (0x00052d44) tabs_3_long_active_pane_srt

0x8171,	// (0x00052d44) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8171,	// (0x00052d44) tabs_3_long_passive_pane_cp_srt

0x8171,	// (0x00052d44) tabs_3_long_passive_pane_srt_ParamLimits

0x8171,	// (0x00052d44) tabs_3_long_passive_pane_srt

0x896c,	// (0x0005353f) bg_passive_tab_pane_cp5_srt_ParamLimits

0x896c,	// (0x0005353f) bg_passive_tab_pane_cp5_srt

0x90ec,	// (0x00053cbf) bg_passive_tab_pane_g1_cp5_srt

0x9062,	// (0x00053c35) bg_passive_tab_pane_g2_cp5_srt

0x90f5,	// (0x00053cc8) bg_passive_tab_pane_g3_cp5_srt

0x894b,	// (0x0005351e) bg_active_tab_pane_cp5_srt_ParamLimits

0x894b,	// (0x0005351e) bg_active_tab_pane_cp5_srt

0xafc7,	// (0x00055b9a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafc7,	// (0x00055b9a) tabs_3_long_active_pane_srt_t1

0x90ec,	// (0x00053cbf) bg_active_tab_pane_g1_cp5_srt

0x9062,	// (0x00053c35) bg_active_tab_pane_g2_cp5_srt

0x90f5,	// (0x00053cc8) bg_active_tab_pane_g3_cp5_srt

0xafb9,	// (0x00055b8c) navi_text_pane_srt_t1

0xafb1,	// (0x00055b84) navi_icon_pane_srt_g1

0x95e6,	// (0x000541b9) midp_editing_number_pane_srt

0x9420,	// (0x00053ff3) midp_ticker_pane_srt

0x95ee,	// (0x000541c1) midp_ticker_pane_srt_g1

0x95f6,	// (0x000541c9) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005a34a) midp_ticker_pane_srt_g

0x95fe,	// (0x000541d1) midp_ticker_pane_srt_t1

0xafa2,	// (0x00055b75) midp_editing_number_pane_t1_copy1

0x9428,	// (0x00053ffb) listscroll_midp_pane

0x9428,	// (0x00053ffb) midp_form_pane

0x9498,	// (0x0005406b) midp_info_popup_window_ParamLimits

0x9498,	// (0x0005406b) midp_info_popup_window

0x8834,	// (0x00053407) bg_popup_sub_pane_cp50_ParamLimits

0x8834,	// (0x00053407) bg_popup_sub_pane_cp50

0xa0c8,	// (0x00054c9b) listscroll_midp_info_pane_ParamLimits

0xa0c8,	// (0x00054c9b) listscroll_midp_info_pane

0xa0a8,	// (0x00054c7b) listscroll_form_midp_pane_ParamLimits

0xa0a8,	// (0x00054c7b) listscroll_form_midp_pane

0xa0b4,	// (0x00054c87) scroll_bar_cp050

0xa088,	// (0x00054c5b) list_midp_pane

0xbcd4,	// (0x000568a7) signal_pane_g2_cp

0x9fc2,	// (0x00054b95) listscroll_midp_info_pane_t1_ParamLimits

0x9fc2,	// (0x00054b95) listscroll_midp_info_pane_t1

0x9fda,	// (0x00054bad) listscroll_midp_info_pane_t2_ParamLimits

0x9fda,	// (0x00054bad) listscroll_midp_info_pane_t2

0xa018,	// (0x00054beb) listscroll_midp_info_pane_t3_ParamLimits

0xa018,	// (0x00054beb) listscroll_midp_info_pane_t3

0xa052,	// (0x00054c25) listscroll_midp_info_pane_t4_ParamLimits

0xa052,	// (0x00054c25) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0005a402) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0005a402) listscroll_midp_info_pane_t

0x88f8,	// (0x000534cb) scroll_pane_cp21

0x9f60,	// (0x00054b33) form_midp_field_choice_group_pane

0x9f69,	// (0x00054b3c) form_midp_field_text_pane

0x9fa8,	// (0x00054b7b) form_midp_field_time_pane

0x9fb0,	// (0x00054b83) form_midp_gauge_slider_pane

0x9fb9,	// (0x00054b8c) form_midp_gauge_wait_pane

0x7652,	// (0x00052225) form_midp_image_pane

0x60ec,	// (0x00050cbf) list_single_midp_pane_ParamLimits

0x60ec,	// (0x00050cbf) list_single_midp_pane

0x9f18,	// (0x00054aeb) form_midp_field_text_pane_t1

0x9ce8,	// (0x000548bb) input_focus_pane_cp050

0x9f4f,	// (0x00054b22) list_midp_form_text_pane

0x9ee7,	// (0x00054aba) form_midp_field_choice_group_pane_t1

0x9ef5,	// (0x00054ac8) input_focus_pane_cp051

0x9f09,	// (0x00054adc) list_midp_choice_pane

0x7652,	// (0x00052225) status_idle_pane

0x9ecb,	// (0x00054a9e) form_midp_field_time_pane_t1

0x7648,	// (0x0005221b) wait_anim_pane_g2_copy1

0x9ed9,	// (0x00054aac) form_midp_field_time_pane_t2

0x0001,

0x9546,	// (0x00054119) aid_navinavi_width_2_pane

0xf82a,	// (0x0005a3fd) form_midp_field_time_pane_t

0x7652,	// (0x00052225) input_focus_pane_cp052

0x7652,	// (0x00052225) bg_input_focus_pane_cp040

0x9e8b,	// (0x00054a5e) form_midp_gauge_slider_pane_t1

0x9e99,	// (0x00054a6c) form_midp_gauge_slider_pane_t2

0x9ea7,	// (0x00054a7a) form_midp_gauge_slider_pane_t3

0x9eb5,	// (0x00054a88) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0005a3f4) form_midp_gauge_slider_pane_t

0x9ec3,	// (0x00054a96) form_midp_slider_pane

0x7732,	// (0x00052305) bg_input_focus_pane_cp041_ParamLimits

0x7732,	// (0x00052305) bg_input_focus_pane_cp041

0x9e58,	// (0x00054a2b) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e58,	// (0x00054a2b) form_midp_gauge_wait_pane_t1

0x9e6a,	// (0x00054a3d) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e6a,	// (0x00054a3d) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x0005a3ef) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x0005a3ef) form_midp_gauge_wait_pane_t

0x9e7c,	// (0x00054a4f) form_midp_wait_pane_ParamLimits

0x9e7c,	// (0x00054a4f) form_midp_wait_pane

0x9e22,	// (0x000549f5) form_midp_image_pane_g1

0x9e2b,	// (0x000549fe) form_midp_image_pane_t1

0x9e3a,	// (0x00054a0d) form_midp_image_pane_t2

0x9e49,	// (0x00054a1c) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0005a3e8) form_midp_image_pane_t

0x9e19,	// (0x000549ec) list_single_midp_pane_g1

0x60dd,	// (0x00050cb0) list_single_midp_pane_t1

0x9df1,	// (0x000549c4) list_midp_form_item_pane_ParamLimits

0x9df1,	// (0x000549c4) list_midp_form_item_pane

0x94ee,	// (0x000540c1) list_midp_form_item_pane_t1

0x94fd,	// (0x000540d0) midp_ticker_pane_g1

0x9509,	// (0x000540dc) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0005a330) midp_ticker_pane_g

0x9515,	// (0x000540e8) midp_ticker_pane_t1

0xb1f3,	// (0x00055dc6) midp_editing_number_pane_t1

0xb1d1,	// (0x00055da4) midp_editing_number_pane

0xb1e0,	// (0x00055db3) midp_ticker_pane

0xaf92,	// (0x00055b65) ai_message_heading_pane

0x7652,	// (0x00052225) bg_popup_window_pane_cp14

0xaf9a,	// (0x00055b6d) listscroll_ai_message_pane

0xaf1c,	// (0x00055aef) ai_message_heading_pane_g1_ParamLimits

0xaf1c,	// (0x00055aef) ai_message_heading_pane_g1

0xaf28,	// (0x00055afb) ai_message_heading_pane_g2_ParamLimits

0xaf28,	// (0x00055afb) ai_message_heading_pane_g2

0xaf34,	// (0x00055b07) ai_message_heading_pane_g3_ParamLimits

0xaf34,	// (0x00055b07) ai_message_heading_pane_g3

0xaf40,	// (0x00055b13) ai_message_heading_pane_g4_ParamLimits

0xaf40,	// (0x00055b13) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0005a529) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0005a529) ai_message_heading_pane_g

0xaf4c,	// (0x00055b1f) ai_message_heading_pane_t1_ParamLimits

0xaf4c,	// (0x00055b1f) ai_message_heading_pane_t1

0xaf66,	// (0x00055b39) ai_message_heading_pane_t2_ParamLimits

0xaf66,	// (0x00055b39) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0005a532) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0005a532) ai_message_heading_pane_t

0xaf78,	// (0x00055b4b) bg_popup_heading_pane_cp1_ParamLimits

0xaf78,	// (0x00055b4b) bg_popup_heading_pane_cp1

0xaf0a,	// (0x00055add) list_ai_message_pane_ParamLimits

0xaf0a,	// (0x00055add) list_ai_message_pane

0x88f8,	// (0x000534cb) scroll_pane_cp10

0xaea6,	// (0x00055a79) list_ai_message_pane_g1

0xaeae,	// (0x00055a81) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0005a506) list_ai_message_pane_g

0xaeb6,	// (0x00055a89) list_ai_message_pane_t1_ParamLimits

0xaeb6,	// (0x00055a89) list_ai_message_pane_t1

0xaecb,	// (0x00055a9e) list_ai_message_pane_t2_ParamLimits

0xaecb,	// (0x00055a9e) list_ai_message_pane_t2

0xaee0,	// (0x00055ab3) list_ai_message_pane_t3_ParamLimits

0xaee0,	// (0x00055ab3) list_ai_message_pane_t3

0xaef5,	// (0x00055ac8) list_ai_message_pane_t4_ParamLimits

0xaef5,	// (0x00055ac8) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0005a50b) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0005a50b) list_ai_message_pane_t

0xae91,	// (0x00055a64) cell_ai_soft_ind_pane_ParamLimits

0xae91,	// (0x00055a64) cell_ai_soft_ind_pane

0x9527,	// (0x000540fa) cell_ai_soft_ind_pane_g1_ParamLimits

0x9527,	// (0x000540fa) cell_ai_soft_ind_pane_g1

0x7652,	// (0x00052225) grid_highlight_cp1

0x9534,	// (0x00054107) text_secondary_cp56_ParamLimits

0x9534,	// (0x00054107) text_secondary_cp56

0xae66,	// (0x00055a39) example_general_pane_ParamLimits

0xae66,	// (0x00055a39) example_general_pane

0xae72,	// (0x00055a45) example_parent_pane_g1_ParamLimits

0xae72,	// (0x00055a45) example_parent_pane_g1

0xae7e,	// (0x00055a51) example_parent_pane_t1_ParamLimits

0xae7e,	// (0x00055a51) example_parent_pane_t1

0x5cbb,	// (0x0005088e) popup_preview_text_window_ParamLimits

0x5cbb,	// (0x0005088e) popup_preview_text_window

0x9351,	// (0x00053f24) list_single_pane_cp2_g4

0x824d,	// (0x00052e20) bg_popup_preview_window_pane_ParamLimits

0x824d,	// (0x00052e20) bg_popup_preview_window_pane

0xabbe,	// (0x00055791) popup_preview_text_window_t1_ParamLimits

0xabbe,	// (0x00055791) popup_preview_text_window_t1

0xabdc,	// (0x000557af) popup_preview_text_window_t2_ParamLimits

0xabdc,	// (0x000557af) popup_preview_text_window_t2

0xac25,	// (0x000557f8) popup_preview_text_window_t3_ParamLimits

0xac25,	// (0x000557f8) popup_preview_text_window_t3

0xac6a,	// (0x0005583d) popup_preview_text_window_t4_ParamLimits

0xac6a,	// (0x0005583d) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0005a4da) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0005a4da) popup_preview_text_window_t

0xace8,	// (0x000558bb) scroll_pane_cp11

0x9c74,	// (0x00054847) bg_popup_preview_window_pane_g1

0xab7e,	// (0x00055751) bg_popup_preview_window_pane_g2

0xab86,	// (0x00055759) bg_popup_preview_window_pane_g3

0xab8e,	// (0x00055761) bg_popup_preview_window_pane_g4

0xab96,	// (0x00055769) bg_popup_preview_window_pane_g5

0xab9e,	// (0x00055771) bg_popup_preview_window_pane_g6

0xaba6,	// (0x00055779) bg_popup_preview_window_pane_g7

0xabae,	// (0x00055781) bg_popup_preview_window_pane_g8

0x4760,	// (0x0004f333) aid_popup_width_pane

0x5c99,	// (0x0005086c) popup_midp_note_alarm_window_ParamLimits

0x5c99,	// (0x0005086c) popup_midp_note_alarm_window

0x878b,	// (0x0005335e) data_form_pane_ParamLimits

0x50fa,	// (0x0004fccd) form_field_data_pane_g1

0x5104,	// (0x0004fcd7) form_field_data_pane_t1_ParamLimits

0x8797,	// (0x0005336a) input_focus_pane_ParamLimits

0x511c,	// (0x0004fcef) data_form_wide_pane_ParamLimits

0x512d,	// (0x0004fd00) form_field_data_wide_pane_g1

0x5139,	// (0x0004fd0c) form_field_data_wide_pane_t1_ParamLimits

0x84fc,	// (0x000530cf) input_focus_pane_cp6_ParamLimits

0x88a5,	// (0x00053478) input_popup_find_pane_g1_ParamLimits

0x88a5,	// (0x00053478) input_popup_find_pane_g1

0x53af,	// (0x0004ff82) aid_navi_side_left_pane

0x53c4,	// (0x0004ff97) aid_navi_side_right_pane

0xa597,	// (0x0005516a) bg_popup_window_pane_cp30_ParamLimits

0xa597,	// (0x0005516a) bg_popup_window_pane_cp30

0xa611,	// (0x000551e4) popup_midp_note_alarm_window_g1_ParamLimits

0xa611,	// (0x000551e4) popup_midp_note_alarm_window_g1

0xa641,	// (0x00055214) popup_midp_note_alarm_window_t1_ParamLimits

0xa641,	// (0x00055214) popup_midp_note_alarm_window_t1

0xa6e2,	// (0x000552b5) popup_midp_note_alarm_window_t2_ParamLimits

0xa6e2,	// (0x000552b5) popup_midp_note_alarm_window_t2

0xa790,	// (0x00055363) popup_midp_note_alarm_window_t3_ParamLimits

0xa790,	// (0x00055363) popup_midp_note_alarm_window_t3

0xa7c2,	// (0x00055395) popup_midp_note_alarm_window_t4_ParamLimits

0xa7c2,	// (0x00055395) popup_midp_note_alarm_window_t4

0xa7e8,	// (0x000553bb) popup_midp_note_alarm_window_t5_ParamLimits

0xa7e8,	// (0x000553bb) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x0005a477) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x0005a477) popup_midp_note_alarm_window_t

0xa894,	// (0x00055467) wait_bar_pane_cp1_ParamLimits

0xa894,	// (0x00055467) wait_bar_pane_cp1

0x7652,	// (0x00052225) wait_anim_pane_copy1

0x7652,	// (0x00052225) wait_border_pane_copy1

0xa27d,	// (0x00054e50) wait_border_pane_g1_copy1

0x5153,	// (0x0004fd26) form_field_popup_pane_g1

0x515b,	// (0x0004fd2e) form_field_popup_pane_t1_ParamLimits

0x8797,	// (0x0005336a) input_focus_pane_cp7_ParamLimits

0x87b9,	// (0x0005338c) list_form_pane_ParamLimits

0x5173,	// (0x0004fd46) form_field_popup_wide_pane_g1

0x517b,	// (0x0004fd4e) form_field_popup_wide_pane_t1_ParamLimits

0x8797,	// (0x0005336a) input_focus_pane_cp8_ParamLimits

0x87c5,	// (0x00053398) list_form_wide_pane_ParamLimits

0xb324,	// (0x00055ef7) aid_size_cell_graphic_pane

0x5205,	// (0x0004fdd8) data_form_pane_t1_ParamLimits

0x636a,	// (0x00050f3d) data_form_wide_pane_t1_ParamLimits

0x9841,	// (0x00054414) bg_status_flat_pane

0x7692,	// (0x00052265) title_pane_t1_ParamLimits

0x76fa,	// (0x000522cd) title_pane_t2_ParamLimits

0x7720,	// (0x000522f3) title_pane_t3_ParamLimits

0xf557,	// (0x0005a12a) title_pane_t_ParamLimits

0x8d79,	// (0x0005394c) level_1_signal_ParamLimits

0x8d8b,	// (0x0005395e) level_2_signal_ParamLimits

0x8d9e,	// (0x00053971) level_3_signal_ParamLimits

0x8db1,	// (0x00053984) level_4_signal_ParamLimits

0x8dc4,	// (0x00053997) level_5_signal_ParamLimits

0x8dd7,	// (0x000539aa) level_6_signal_ParamLimits

0x8dea,	// (0x000539bd) level_7_signal_ParamLimits

0x8d79,	// (0x0005394c) level_1_battery_ParamLimits

0x8d8b,	// (0x0005395e) level_2_battery_ParamLimits

0x8d9e,	// (0x00053971) level_3_battery_ParamLimits

0x8db1,	// (0x00053984) level_4_battery_ParamLimits

0x8dc4,	// (0x00053997) level_5_battery_ParamLimits

0x8dd7,	// (0x000539aa) level_6_battery_ParamLimits

0x8dea,	// (0x000539bd) level_7_battery_ParamLimits

0xa49c,	// (0x0005506f) bg_status_flat_pane_g1

0xa4a4,	// (0x00055077) bg_status_flat_pane_g2

0xa4ac,	// (0x0005507f) bg_status_flat_pane_g3

0xa4b4,	// (0x00055087) bg_status_flat_pane_g4

0xa4bc,	// (0x0005508f) bg_status_flat_pane_g5

0xa4c4,	// (0x00055097) bg_status_flat_pane_g6

0xa4cc,	// (0x0005509f) bg_status_flat_pane_g7

0x7748,	// (0x0005231b) tabs_3_active_pane_t1_ParamLimits

0x7748,	// (0x0005231b) tabs_3_passive_pane_t1_ParamLimits

0x7762,	// (0x00052335) tabs_4_active_pane_t1_ParamLimits

0x7762,	// (0x00052335) tabs_4_1_passive_pane_t1_ParamLimits

0x8939,	// (0x0005350c) tabs_2_active_pane_t1_ParamLimits

0x8939,	// (0x0005350c) tabs_2_passive_pane_t1_ParamLimits

0x894b,	// (0x0005351e) bg_active_tab_pane_cp4_ParamLimits

0x8959,	// (0x0005352c) tabs_2_long_active_pane_t1_ParamLimits

0x896c,	// (0x0005353f) bg_passive_tab_pane_cp4_ParamLimits

0x5fbe,	// (0x00050b91) list_single_midp_graphic_pane_t1_ParamLimits

0x894b,	// (0x0005351e) bg_active_tab_pane_cp5_ParamLimits

0x8978,	// (0x0005354b) tabs_3_long_active_pane_t1_ParamLimits

0x896c,	// (0x0005353f) bg_passive_tab_pane_cp5_ParamLimits

0x5fbe,	// (0x00050b91) list_single_midp_graphic_pane_t1

0x9841,	// (0x00054414) bg_status_flat_pane_ParamLimits

0x9904,	// (0x000544d7) indicator_pane_cp2_ParamLimits

0x9904,	// (0x000544d7) indicator_pane_cp2

0x9a2f,	// (0x00054602) navi_pane_srt_ParamLimits

0x9a2f,	// (0x00054602) navi_pane_srt

0x9a53,	// (0x00054626) popup_clock_digital_analogue_window_cp1

0x780f,	// (0x000523e2) indicator_pane_t1

0x9420,	// (0x00053ff3) copy_highlight_pane

0x9420,	// (0x00053ff3) cursor_graphics_pane

0x9420,	// (0x00053ff3) graphic_within_text_pane

0x9420,	// (0x00053ff3) link_highlight_pane

0xacab,	// (0x0005587e) popup_preview_text_window_t5_ParamLimits

0xacab,	// (0x0005587e) popup_preview_text_window_t5

0x954e,	// (0x00054121) cursor_digital_pane

0x954e,	// (0x00054121) cursor_primary_pane

0x955f,	// (0x00054132) cursor_primary_small_pane

0x9567,	// (0x0005413a) cursor_secondary_pane

0x956f,	// (0x00054142) cursor_title_pane

0x954e,	// (0x00054121) link_highlight_digital_pane

0x9556,	// (0x00054129) link_highlight_primary_pane

0x955f,	// (0x00054132) link_highlight_primary_small_pane

0x9567,	// (0x0005413a) link_highlight_secondary_pane

0x956f,	// (0x00054142) link_highlight_title_pane

0x954e,	// (0x00054121) copy_highlight_digital_pane

0x954e,	// (0x00054121) copy_highlight_primary_pane

0x955f,	// (0x00054132) copy_highlight_primary_small_pane

0x9567,	// (0x0005413a) copy_highlight_secondary_pane

0x956f,	// (0x00054142) copy_highlight_title_pane

0x9567,	// (0x0005413a) graphic_text_digital_pane

0xa53a,	// (0x0005510d) graphic_text_primary_pane

0xa543,	// (0x00055116) graphic_text_primary_small_pane

0x955f,	// (0x00054132) graphic_text_secondary_pane

0x954e,	// (0x00054121) graphic_text_title_pane

0x9577,	// (0x0005414a) cursor_primary_pane_g1

0xa52c,	// (0x000550ff) cursor_text_primary_t1

0xa514,	// (0x000550e7) cursor_primary_small_pane_g1

0xa51e,	// (0x000550f1) cursor_text_primary_small_t1

0xa4fc,	// (0x000550cf) cursor_primary_small_pane_g1_copy1

0xa506,	// (0x000550d9) cursor_text_primary_small_t1_copy1

0xa4e4,	// (0x000550b7) cursor_text_title_t1

0xa4f2,	// (0x000550c5) cursor_title_pane_g1

0x9577,	// (0x0005414a) cursor_digital_pane_g1

0x9581,	// (0x00054154) cursor_text_digital_t1

0x95a6,	// (0x00054179) link_highlight_primary_pane_g1

0xa48d,	// (0x00055060) link_highlight_primary_pane_t1

0x958f,	// (0x00054162) link_highlight_primary_small_pane_g1

0x9597,	// (0x0005416a) link_highlight_primary_small_pane_t1

0x95a6,	// (0x00054179) link_highlight_secondary_pane_g1

0x95ae,	// (0x00054181) link_highlight_secondary_pane_t1

0xa401,	// (0x00054fd4) link_highlight_title_pane_g1

0xa409,	// (0x00054fdc) link_highlight_title_pane_t1

0xa3ea,	// (0x00054fbd) link_highlight_digital_pane_g1

0xa3f2,	// (0x00054fc5) link_highlight_digital_pane_t1

0xa2c2,	// (0x00054e95) copy_highlight_primary_pane_g1

0xa2ca,	// (0x00054e9d) copy_highlight_primary_pane_t1

0xa29c,	// (0x00054e6f) copy_highlight_primary_small_pane_g1

0xa2b3,	// (0x00054e86) copy_highlight_primary_small_pane_t1

0x95bd,	// (0x00054190) copy_highlight_secondary_pane_g1

0x95c5,	// (0x00054198) copy_highlight_secondary_pane_t1

0xa29c,	// (0x00054e6f) copy_highlight_title_pane_g1

0xa2a4,	// (0x00054e77) copy_highlight_title_pane_t1

0xa2c2,	// (0x00054e95) copy_highlight_digital_pane_g1

0xb4f2,	// (0x000560c5) copy_highlight_digital_pane_t1

0xb446,	// (0x00056019) graphic_text_primary_pane_g1

0xb4d6,	// (0x000560a9) graphic_text_primary_pane_t1

0xb4e4,	// (0x000560b7) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x0005a5a6) graphic_text_primary_pane_t

0xb4b2,	// (0x00056085) graphic_text_primary_small_pane_g1

0xb4ba,	// (0x0005608d) graphic_text_primary_small_pane_t1

0xb4c8,	// (0x0005609b) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x0005a5a1) graphic_text_primary_small_pane_t

0xb48e,	// (0x00056061) graphic_text_secondary_pane_g1

0xb496,	// (0x00056069) graphic_text_secondary_pane_t1

0xb4a4,	// (0x00056077) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x0005a59c) graphic_text_secondary_pane_t

0xb46a,	// (0x0005603d) graphic_text_title_pane_g1

0xb472,	// (0x00056045) graphic_text_title_pane_t1

0xb480,	// (0x00056053) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x0005a597) graphic_text_title_pane_t

0xb446,	// (0x00056019) graphic_text_digital_pane_g1

0xb44e,	// (0x00056021) graphic_text_digital_pane_t1

0xb45c,	// (0x0005602f) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x0005a592) graphic_text_digital_pane_t

0x7732,	// (0x00052305) navi_icon_pane_srt_ParamLimits

0x7732,	// (0x00052305) navi_icon_pane_srt

0x7652,	// (0x00052225) navi_midp_pane_srt

0x7652,	// (0x00052225) navi_navi_pane_srt

0x7732,	// (0x00052305) navi_text_pane_srt_ParamLimits

0x7732,	// (0x00052305) navi_text_pane_srt

0xb411,	// (0x00055fe4) navi_navi_icon_text_pane_srt

0xb419,	// (0x00055fec) navi_navi_pane_srt_g1_ParamLimits

0xb419,	// (0x00055fec) navi_navi_pane_srt_g1

0xb42b,	// (0x00055ffe) navi_navi_pane_srt_g2_ParamLimits

0xb42b,	// (0x00055ffe) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x0005a58d) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x0005a58d) navi_navi_pane_srt_g

0xb43d,	// (0x00056010) navi_navi_tabs_pane_srt

0xb411,	// (0x00055fe4) navi_navi_text_pane_srt

0xb411,	// (0x00055fe4) navi_navi_volume_pane_srt

0xb402,	// (0x00055fd5) navi_navi_text_pane_srt_t1

0x64ab,	// (0x0005107e) navi_navi_volume_pane_srt_g1

0x64b3,	// (0x00051086) volume_small_pane_srt_ParamLimits

0x64b3,	// (0x00051086) volume_small_pane_srt

0x56fd,	// (0x000502d0) volume_small_pane_srt_g1_ParamLimits

0x56fd,	// (0x000502d0) volume_small_pane_srt_g1

0x570d,	// (0x000502e0) volume_small_pane_srt_g2_ParamLimits

0x570d,	// (0x000502e0) volume_small_pane_srt_g2

0x571e,	// (0x000502f1) volume_small_pane_srt_g3_ParamLimits

0x571e,	// (0x000502f1) volume_small_pane_srt_g3

0x572f,	// (0x00050302) volume_small_pane_srt_g4_ParamLimits

0x572f,	// (0x00050302) volume_small_pane_srt_g4

0x5740,	// (0x00050313) volume_small_pane_srt_g5_ParamLimits

0x5740,	// (0x00050313) volume_small_pane_srt_g5

0x5751,	// (0x00050324) volume_small_pane_srt_g6_ParamLimits

0x5751,	// (0x00050324) volume_small_pane_srt_g6

0x5762,	// (0x00050335) volume_small_pane_srt_g7_ParamLimits

0x5762,	// (0x00050335) volume_small_pane_srt_g7

0x5773,	// (0x00050346) volume_small_pane_srt_g8_ParamLimits

0x5773,	// (0x00050346) volume_small_pane_srt_g8

0x5784,	// (0x00050357) volume_small_pane_srt_g9_ParamLimits

0x5784,	// (0x00050357) volume_small_pane_srt_g9

0x5795,	// (0x00050368) volume_small_pane_srt_g10_ParamLimits

0x5795,	// (0x00050368) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005a335) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005a335) volume_small_pane_srt_g

0x82f6,	// (0x00052ec9) query_popup_data_pane_cp2

0xb3e8,	// (0x00055fbb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb3e8,	// (0x00055fbb) navi_navi_icon_text_pane_srt_t1

0xa53a,	// (0x0005510d) navi_tabs_2_long_pane_srt

0xa53a,	// (0x0005510d) navi_tabs_2_pane_srt

0xa53a,	// (0x0005510d) navi_tabs_3_long_pane_srt

0xa53a,	// (0x0005510d) navi_tabs_3_pane_srt

0xa53a,	// (0x0005510d) navi_tabs_4_pane_srt

0x648b,	// (0x0005105e) tabs_2_active_pane_srt_ParamLimits

0x648b,	// (0x0005105e) tabs_2_active_pane_srt

0x649b,	// (0x0005106e) tabs_2_passive_pane_srt_ParamLimits

0x649b,	// (0x0005106e) tabs_2_passive_pane_srt

0x9744,	// (0x00054317) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9744,	// (0x00054317) bg_passive_tab_pane_cp1_srt

0xb3b4,	// (0x00055f87) bg_passive_tab_pane_g1_cp1_srt

0x9062,	// (0x00053c35) bg_passive_tab_pane_g2_cp1_srt

0xb3bd,	// (0x00055f90) bg_passive_tab_pane_g3_cp1_srt

0x7732,	// (0x00052305) bg_active_tab_pane_cp1_srt_ParamLimits

0x7732,	// (0x00052305) bg_active_tab_pane_cp1_srt

0xb3c6,	// (0x00055f99) tabs_2_active_pane_srt_g1

0xb3ce,	// (0x00055fa1) tabs_2_active_pane_srt_t1_ParamLimits

0xb3ce,	// (0x00055fa1) tabs_2_active_pane_srt_t1

0xb3b4,	// (0x00055f87) bg_active_tab_pane_g1_cp1_srt

0x9062,	// (0x00053c35) bg_active_tab_pane_g2_cp1_srt

0xb3bd,	// (0x00055f90) bg_active_tab_pane_g3_cp1_srt

0x6458,	// (0x0005102b) tabs_3_active_pane_srt_ParamLimits

0x6458,	// (0x0005102b) tabs_3_active_pane_srt

0x6469,	// (0x0005103c) tabs_3_passive_pane_cp_srt_ParamLimits

0x6469,	// (0x0005103c) tabs_3_passive_pane_cp_srt

0x647a,	// (0x0005104d) tabs_3_passive_pane_srt_ParamLimits

0x647a,	// (0x0005104d) tabs_3_passive_pane_srt

0x9744,	// (0x00054317) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9744,	// (0x00054317) bg_passive_tab_pane_cp2_srt

0x95d4,	// (0x000541a7) bg_passive_tab_pane_g1_cp2_srt

0x9062,	// (0x00053c35) bg_passive_tab_pane_g2_cp2_srt

0x95dd,	// (0x000541b0) bg_passive_tab_pane_g3_cp2_srt

0x7732,	// (0x00052305) bg_active_tab_pane_cp2_srt_ParamLimits

0x7732,	// (0x00052305) bg_active_tab_pane_cp2_srt

0xb39a,	// (0x00055f6d) tabs_3_active_pane_srt_g1

0xb3a2,	// (0x00055f75) tabs_3_active_pane_srt_t1_ParamLimits

0xb3a2,	// (0x00055f75) tabs_3_active_pane_srt_t1

0x95d4,	// (0x000541a7) bg_active_tab_pane_g1_cp2_srt

0x9062,	// (0x00053c35) bg_active_tab_pane_g2_cp2_srt

0x95dd,	// (0x000541b0) bg_active_tab_pane_g3_cp2_srt

0x6410,	// (0x00050fe3) tabs_4_active_pane_srt_ParamLimits

0x6410,	// (0x00050fe3) tabs_4_active_pane_srt

0x6422,	// (0x00050ff5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6422,	// (0x00050ff5) tabs_4_passive_pane_cp2_srt

0x5904,	// (0x000504d7) aid_size_cell_toolbar

0x896c,	// (0x0005353f) main_idle_act_pane_ParamLimits

0x5acf,	// (0x000506a2) popup_large_graphic_colour_window_ParamLimits

0x5e36,	// (0x00050a09) popup_toolbar_window_ParamLimits

0x5e36,	// (0x00050a09) popup_toolbar_window

0xb202,	// (0x00055dd5) list_single_graphic_2heading_pane_ParamLimits

0xb202,	// (0x00055dd5) list_single_graphic_2heading_pane

0x8b28,	// (0x000536fb) aid_size_cell_apps_grid_lsc_pane

0x8b3a,	// (0x0005370d) aid_size_cell_apps_grid_prt_pane

0x9744,	// (0x00054317) bg_wml_button_pane_cp1_ParamLimits

0x9744,	// (0x00054317) bg_wml_button_pane_cp1

0x9f18,	// (0x00054aeb) form_midp_field_text_pane_t1_ParamLimits

0x9ce8,	// (0x000548bb) input_focus_pane_cp050_ParamLimits

0x9f4f,	// (0x00054b22) list_midp_form_text_pane_ParamLimits

0x9ef5,	// (0x00054ac8) input_focus_pane_cp051_ParamLimits

0x9f09,	// (0x00054adc) list_midp_choice_pane_ParamLimits

0x9da1,	// (0x00054974) list_single_2graphic_pane_cp3_ParamLimits

0x9da1,	// (0x00054974) list_single_2graphic_pane_cp3

0x9dc2,	// (0x00054995) list_single_midp_graphic_pane_ParamLimits

0x9dc2,	// (0x00054995) list_single_midp_graphic_pane

0x46e8,	// (0x0004f2bb) list_single_graphic_2heading_pane_g1_ParamLimits

0x46e8,	// (0x0004f2bb) list_single_graphic_2heading_pane_g1

0x46f4,	// (0x0004f2c7) list_single_graphic_2heading_pane_g4_ParamLimits

0x46f4,	// (0x0004f2c7) list_single_graphic_2heading_pane_g4

0x4700,	// (0x0004f2d3) list_single_graphic_2heading_pane_g5_ParamLimits

0x4700,	// (0x0004f2d3) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005a388) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005a388) list_single_graphic_2heading_pane_g

0x470c,	// (0x0004f2df) list_single_graphic_2heading_pane_t1_ParamLimits

0x470c,	// (0x0004f2df) list_single_graphic_2heading_pane_t1

0x4720,	// (0x0004f2f3) list_single_graphic_2heading_pane_t2_ParamLimits

0x4720,	// (0x0004f2f3) list_single_graphic_2heading_pane_t2

0x473c,	// (0x0004f30f) list_single_graphic_2heading_pane_t3_ParamLimits

0x473c,	// (0x0004f30f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0005a38f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0005a38f) list_single_graphic_2heading_pane_t

0x9bb2,	// (0x00054785) bg_popup_sub_pane_cp2

0x9bdc,	// (0x000547af) grid_toobar_pane

0x5ee3,	// (0x00050ab6) cell_toolbar_pane_ParamLimits

0x5ee3,	// (0x00050ab6) cell_toolbar_pane

0x9c18,	// (0x000547eb) cell_toolbar_pane_g1_ParamLimits

0x9c18,	// (0x000547eb) cell_toolbar_pane_g1

0x9c2c,	// (0x000547ff) cell_toolbar_pane_g2_ParamLimits

0x9c2c,	// (0x000547ff) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0005a39d) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0005a39d) cell_toolbar_pane_g

0x9c4e,	// (0x00054821) grid_highlight_pane_cp2_ParamLimits

0x9c4e,	// (0x00054821) grid_highlight_pane_cp2

0x9c68,	// (0x0005483b) toolbar_button_pane

0x9c74,	// (0x00054847) toolbar_button_pane_g1

0x9c7c,	// (0x0005484f) toolbar_button_pane_g2

0x9c84,	// (0x00054857) toolbar_button_pane_g3

0x9c8c,	// (0x0005485f) toolbar_button_pane_g4

0x9c94,	// (0x00054867) toolbar_button_pane_g5

0x9c9c,	// (0x0005486f) toolbar_button_pane_g6

0x9ca4,	// (0x00054877) toolbar_button_pane_g7

0x9cac,	// (0x0005487f) toolbar_button_pane_g8

0x9cb4,	// (0x00054887) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0005a3a2) toolbar_button_pane_g

0x5f3d,	// (0x00050b10) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5f3d,	// (0x00050b10) list_single_2graphic_pane_g1_cp3

0x5f49,	// (0x00050b1c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5f49,	// (0x00050b1c) list_single_2graphic_pane_g2_cp3

0x5f5a,	// (0x00050b2d) list_single_2graphic_pane_g3_cp3

0x5f62,	// (0x00050b35) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5f62,	// (0x00050b35) list_single_2graphic_pane_g4_cp3

0x5f6e,	// (0x00050b41) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5f6e,	// (0x00050b41) list_single_2graphic_pane_t1_cp3

0x5fb2,	// (0x00050b85) list_single_midp_graphic_pane_g2_ParamLimits

0x5fb2,	// (0x00050b85) list_single_midp_graphic_pane_g2

0x46e0,	// (0x0004f2b3) aid_zoom_text_primary

0x590c,	// (0x000504df) aid_zoom_text_secondary

0x968e,	// (0x00054261) status_small_pane_g7_ParamLimits

0x968e,	// (0x00054261) status_small_pane_g7

0x96b1,	// (0x00054284) status_small_pane_t1_ParamLimits

0x7669,	// (0x0005223c) title_pane_g2

0x0003,

0xf54e,	// (0x0005a121) title_pane_g

0x839a,	// (0x00052f6d) aid_size_cell_colour_1_pane_ParamLimits

0x839a,	// (0x00052f6d) aid_size_cell_colour_1_pane

0x83ae,	// (0x00052f81) aid_size_cell_colour_2_pane_ParamLimits

0x83ae,	// (0x00052f81) aid_size_cell_colour_2_pane

0x83c2,	// (0x00052f95) aid_size_cell_colour_3_pane_ParamLimits

0x83c2,	// (0x00052f95) aid_size_cell_colour_3_pane

0x83d6,	// (0x00052fa9) aid_size_cell_colour_4_pane_ParamLimits

0x83d6,	// (0x00052fa9) aid_size_cell_colour_4_pane

0x52ec,	// (0x0004febf) title_pane_stacon_g1_ParamLimits

0x52ec,	// (0x0004febf) title_pane_stacon_g1

0xa321,	// (0x00054ef4) popup_note_wait_window_g3_ParamLimits

0xa321,	// (0x00054ef4) popup_note_wait_window_g3

0xa397,	// (0x00054f6a) popup_note_wait_window_t5_ParamLimits

0xa397,	// (0x00054f6a) popup_note_wait_window_t5

0x7652,	// (0x00052225) main_feb_china_hwr_fs_writing_pane

0x59b2,	// (0x00050585) popup_feb_china_hwr_fs_window_ParamLimits

0x59b2,	// (0x00050585) popup_feb_china_hwr_fs_window

0x6040,	// (0x00050c13) aid_size_cell_hwr_fs_ParamLimits

0x6040,	// (0x00050c13) aid_size_cell_hwr_fs

0x9ce8,	// (0x000548bb) bg_popup_sub_pane_cp3_ParamLimits

0x9ce8,	// (0x000548bb) bg_popup_sub_pane_cp3

0x6055,	// (0x00050c28) grid_hwr_fs_pane_ParamLimits

0x6055,	// (0x00050c28) grid_hwr_fs_pane

0x606d,	// (0x00050c40) linegrid_hwr_fs_pane_ParamLimits

0x606d,	// (0x00050c40) linegrid_hwr_fs_pane

0x607d,	// (0x00050c50) cell_hwr_fs_pane_ParamLimits

0x607d,	// (0x00050c50) cell_hwr_fs_pane

0x9cf4,	// (0x000548c7) linegrid_hwr_fs_pane_g1_ParamLimits

0x9cf4,	// (0x000548c7) linegrid_hwr_fs_pane_g1

0x9d00,	// (0x000548d3) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d00,	// (0x000548d3) linegrid_hwr_fs_pane_g2

0x9d12,	// (0x000548e5) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d12,	// (0x000548e5) linegrid_hwr_fs_pane_g3

0x609f,	// (0x00050c72) linegrid_hwr_fs_pane_g4_ParamLimits

0x609f,	// (0x00050c72) linegrid_hwr_fs_pane_g4

0x60b9,	// (0x00050c8c) linegrid_hwr_fs_pane_g5_ParamLimits

0x60b9,	// (0x00050c8c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x0005a3cd) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x0005a3cd) linegrid_hwr_fs_pane_g

0x9d1e,	// (0x000548f1) cell_hwr_fs_pane_g1_ParamLimits

0x9d1e,	// (0x000548f1) cell_hwr_fs_pane_g1

0x9ae9,	// (0x000546bc) cell_hwr_fs_pane_g2_ParamLimits

0x9ae9,	// (0x000546bc) cell_hwr_fs_pane_g2

0x9d34,	// (0x00054907) cell_hwr_fs_pane_g3_ParamLimits

0x9d34,	// (0x00054907) cell_hwr_fs_pane_g3

0x9d41,	// (0x00054914) cell_hwr_fs_pane_g4_ParamLimits

0x9d41,	// (0x00054914) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x0005a3d8) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x0005a3d8) cell_hwr_fs_pane_g

0x60cf,	// (0x00050ca2) cell_hwr_fs_pane_t1

0x7652,	// (0x00052225) grid_highlight_pane_cp6

0x7652,	// (0x00052225) main_idle_act2_pane

0x88df,	// (0x000534b2) aid_inside_area_popup_secondary

0xa9ce,	// (0x000555a1) aid_inside_area_window_primary_ParamLimits

0xa9ce,	// (0x000555a1) aid_inside_area_window_primary

0xb501,	// (0x000560d4) ai2_news_ticker_pane

0xb509,	// (0x000560dc) aid_size_cell_ai1_link_ParamLimits

0xb509,	// (0x000560dc) aid_size_cell_ai1_link

0xb523,	// (0x000560f6) popup_ai2_data_window_ParamLimits

0xb523,	// (0x000560f6) popup_ai2_data_window

0xb539,	// (0x0005610c) popup_ai2_link_window_ParamLimits

0xb539,	// (0x0005610c) popup_ai2_link_window

0x9ce8,	// (0x000548bb) bg_popup_sub_pane_cp4_ParamLimits

0x9ce8,	// (0x000548bb) bg_popup_sub_pane_cp4

0xb54d,	// (0x00056120) grid_ai2_link_pane_ParamLimits

0xb54d,	// (0x00056120) grid_ai2_link_pane

0xb564,	// (0x00056137) popup_ai2_link_window_g1_ParamLimits

0xb564,	// (0x00056137) popup_ai2_link_window_g1

0xb570,	// (0x00056143) popup_ai2_link_window_g2_ParamLimits

0xb570,	// (0x00056143) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x0005a5ab) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x0005a5ab) popup_ai2_link_window_g

0xb57f,	// (0x00056152) ai2_mp_button_pane

0xb587,	// (0x0005615a) ai2_mp_volume_pane

0x9ef5,	// (0x00054ac8) bg_popup_sub_pane_cp5_ParamLimits

0x9ef5,	// (0x00054ac8) bg_popup_sub_pane_cp5

0xb58f,	// (0x00056162) heading_ai2_gene_pane_ParamLimits

0xb58f,	// (0x00056162) heading_ai2_gene_pane

0xb59b,	// (0x0005616e) list_ai2_gene_pane_ParamLimits

0xb59b,	// (0x0005616e) list_ai2_gene_pane

0xb5e3,	// (0x000561b6) cell_ai2_link_pane_ParamLimits

0xb5e3,	// (0x000561b6) cell_ai2_link_pane

0xb5f9,	// (0x000561cc) cell_ai2_link_pane_g1

0x7652,	// (0x00052225) grid_highlight_pane_cp7

0x64c8,	// (0x0005109b) ai2_mp_volume_pane_g1

0xb6c9,	// (0x0005629c) ai2_mp_volume_pane_g2

0xb63e,	// (0x00056211) list_ai2_gene_pane_t1

0xb6d1,	// (0x000562a4) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x0005a5c4) ai2_mp_volume_pane_g

0x64d0,	// (0x000510a3) volume_small_pane_cp3

0xb6d9,	// (0x000562ac) aid_size_cell_ai2_button

0xb6e1,	// (0x000562b4) grid_ai2_button_pane

0xb6ea,	// (0x000562bd) cell_ai2_button_pane_ParamLimits

0xb6ea,	// (0x000562bd) cell_ai2_button_pane

0x7648,	// (0x0005221b) cell_ai2_button_pane_g1

0x7652,	// (0x00052225) grid_highlight_pane_cp8

0xb689,	// (0x0005625c) ai2_gene_pane_t1_ParamLimits

0xb689,	// (0x0005625c) ai2_gene_pane_t1

0x58fa,	// (0x000504cd) aid_height_parent_landscape

0xb039,	// (0x00055c0c) aid_height_set_list

0xb04a,	// (0x00055c1d) aid_size_parent

0xb324,	// (0x00055ef7) aid_size_cell_graphic_pane_ParamLimits

0xb5ab,	// (0x0005617e) popup_ai2_data_window_g1_ParamLimits

0xb5ab,	// (0x0005617e) popup_ai2_data_window_g1

0xb5b7,	// (0x0005618a) ai2_news_ticker_pane_g1

0xb5bf,	// (0x00056192) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x0005a5b0) ai2_news_ticker_pane_g

0xb5c7,	// (0x0005619a) ai2_news_ticker_pane_t1

0xb5d5,	// (0x000561a8) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x0005a5b5) ai2_news_ticker_pane_t

0xb602,	// (0x000561d5) heading_ai2_gene_pane_g1

0xb60a,	// (0x000561dd) heading_ai2_gene_pane_t1_ParamLimits

0xb60a,	// (0x000561dd) heading_ai2_gene_pane_t1

0xb61f,	// (0x000561f2) list_highlight_pane_cp6

0xb627,	// (0x000561fa) ai2_gene_pane_ParamLimits

0xb627,	// (0x000561fa) ai2_gene_pane

0xb64c,	// (0x0005621f) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x0005a5ba) list_ai2_gene_pane_t

0xb65a,	// (0x0005622d) list_highlight_pane_cp8_ParamLimits

0xb65a,	// (0x0005622d) list_highlight_pane_cp8

0xb66b,	// (0x0005623e) ai2_gene_pane_g1_ParamLimits

0xb66b,	// (0x0005623e) ai2_gene_pane_g1

0xb67d,	// (0x00056250) ai2_gene_pane_g2_ParamLimits

0xb67d,	// (0x00056250) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x0005a5bf) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x0005a5bf) ai2_gene_pane_g

0x8721,	// (0x000532f4) scroll_pane_cp12

0x58b7,	// (0x0005048a) control_pane_t3_ParamLimits

0x58b7,	// (0x0005048a) control_pane_t3

0x96a2,	// (0x00054275) status_small_pane_g8_ParamLimits

0x96a2,	// (0x00054275) status_small_pane_g8

0x5a98,	// (0x0005066b) popup_find_window_ParamLimits

0x5cad,	// (0x00050880) popup_note_image_window_ParamLimits

0x5f13,	// (0x00050ae6) list_double2_graphic_pane_vc_g1_ParamLimits

0x5f13,	// (0x00050ae6) list_double2_graphic_pane_vc_g1

0x9359,	// (0x00053f2c) list_double2_graphic_pane_vc_g2_ParamLimits

0x9359,	// (0x00053f2c) list_double2_graphic_pane_vc_g2

0x7a45,	// (0x00052618) list_double2_graphic_pane_vc_g3_ParamLimits

0x7a45,	// (0x00052618) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005a396) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005a396) list_double2_graphic_pane_vc_g

0x5f1f,	// (0x00050af2) list_double2_graphic_pane_vc_t1_ParamLimits

0x5f1f,	// (0x00050af2) list_double2_graphic_pane_vc_t1

0x9359,	// (0x00053f2c) list_single_heading_pane_vc_g1_ParamLimits

0x9359,	// (0x00053f2c) list_single_heading_pane_vc_g1

0x7a45,	// (0x00052618) list_single_heading_pane_vc_g2_ParamLimits

0x7a45,	// (0x00052618) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a3b7) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a3b7) list_single_heading_pane_vc_g

0x5f8a,	// (0x00050b5d) list_single_heading_pane_vc_t1_ParamLimits

0x5f8a,	// (0x00050b5d) list_single_heading_pane_vc_t1

0x5fa0,	// (0x00050b73) list_single_heading_pane_vc_t2_ParamLimits

0x5fa0,	// (0x00050b73) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x0005a3bc) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x0005a3bc) list_single_heading_pane_vc_t

0x7a51,	// (0x00052624) list_setting_number_pane_vc_g1_ParamLimits

0x7a51,	// (0x00052624) list_setting_number_pane_vc_g1

0x7a5d,	// (0x00052630) list_setting_number_pane_vc_g2_ParamLimits

0x7a5d,	// (0x00052630) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x0005a3c1) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x0005a3c1) list_setting_number_pane_vc_g

0x5fd4,	// (0x00050ba7) list_setting_number_pane_vc_t1_ParamLimits

0x5fd4,	// (0x00050ba7) list_setting_number_pane_vc_t1

0x5fe8,	// (0x00050bbb) list_setting_number_pane_vc_t2_ParamLimits

0x5fe8,	// (0x00050bbb) list_setting_number_pane_vc_t2

0x6004,	// (0x00050bd7) list_setting_number_pane_vc_t3_ParamLimits

0x6004,	// (0x00050bd7) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x0005a3c6) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x0005a3c6) list_setting_number_pane_vc_t

0x6030,	// (0x00050c03) set_value_pane_vc_ParamLimits

0x6030,	// (0x00050c03) set_value_pane_vc

0xb202,	// (0x00055dd5) list_double2_graphic_pane_vc_ParamLimits

0xb202,	// (0x00055dd5) list_double2_graphic_pane_vc

0x63b0,	// (0x00050f83) list_double2_large_graphic_pane_vc_ParamLimits

0x63b0,	// (0x00050f83) list_double2_large_graphic_pane_vc

0xb202,	// (0x00055dd5) list_double2_pane_vc_ParamLimits

0xb202,	// (0x00055dd5) list_double2_pane_vc

0xb202,	// (0x00055dd5) list_double_graphic_heading_pane_vc_ParamLimits

0xb202,	// (0x00055dd5) list_double_graphic_heading_pane_vc

0xb202,	// (0x00055dd5) list_double_graphic_pane_vc_ParamLimits

0xb202,	// (0x00055dd5) list_double_graphic_pane_vc

0xb202,	// (0x00055dd5) list_double_heading_pane_vc_ParamLimits

0xb202,	// (0x00055dd5) list_double_heading_pane_vc

0x63c1,	// (0x00050f94) list_double_large_graphic_pane_vc_ParamLimits

0x63c1,	// (0x00050f94) list_double_large_graphic_pane_vc

0xb202,	// (0x00055dd5) list_double_number_pane_vc_ParamLimits

0xb202,	// (0x00055dd5) list_double_number_pane_vc

0xb202,	// (0x00055dd5) list_double_pane_vc_ParamLimits

0xb202,	// (0x00055dd5) list_double_pane_vc

0xb202,	// (0x00055dd5) list_double_time_pane_vc_ParamLimits

0xb202,	// (0x00055dd5) list_double_time_pane_vc

0xb202,	// (0x00055dd5) list_setting_number_pane_vc_ParamLimits

0xb202,	// (0x00055dd5) list_setting_number_pane_vc

0xb202,	// (0x00055dd5) list_setting_pane_vc_ParamLimits

0xb202,	// (0x00055dd5) list_setting_pane_vc

0xb202,	// (0x00055dd5) list_single_graphic_heading_pane_vc_ParamLimits

0xb202,	// (0x00055dd5) list_single_graphic_heading_pane_vc

0xb202,	// (0x00055dd5) list_single_heading_pane_vc_ParamLimits

0xb202,	// (0x00055dd5) list_single_heading_pane_vc

0x7a84,	// (0x00052657) list_single_number_heading_pane_vc_ParamLimits

0x7a84,	// (0x00052657) list_single_number_heading_pane_vc

0x5f13,	// (0x00050ae6) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5f13,	// (0x00050ae6) list_double_graphic_heading_pane_vc_g1

0x9359,	// (0x00053f2c) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9359,	// (0x00053f2c) list_double_graphic_heading_pane_vc_g2

0x7a45,	// (0x00052618) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7a45,	// (0x00052618) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005a396) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005a396) list_double_graphic_heading_pane_vc_g

0x64d9,	// (0x000510ac) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x64d9,	// (0x000510ac) list_double_graphic_heading_pane_vc_t1

0x64f5,	// (0x000510c8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x64f5,	// (0x000510c8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x0005a5cb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x0005a5cb) list_double_graphic_heading_pane_vc_t

0x7a51,	// (0x00052624) list_setting_pane_vc_g1_ParamLimits

0x7a51,	// (0x00052624) list_setting_pane_vc_g1

0x7a5d,	// (0x00052630) list_setting_pane_vc_g2_ParamLimits

0x7a5d,	// (0x00052630) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x0005a3c1) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x0005a3c1) list_setting_pane_vc_g

0x6513,	// (0x000510e6) list_setting_pane_vc_t1_ParamLimits

0x6513,	// (0x000510e6) list_setting_pane_vc_t1

0x652f,	// (0x00051102) list_setting_pane_vc_t2_ParamLimits

0x652f,	// (0x00051102) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x0005a5f9) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x0005a5f9) list_setting_pane_vc_t

0x6030,	// (0x00050c03) set_value_pane_cp_vc_ParamLimits

0x6030,	// (0x00050c03) set_value_pane_cp_vc

0x9359,	// (0x00053f2c) list_single_number_heading_pane_vc_g1_ParamLimits

0x9359,	// (0x00053f2c) list_single_number_heading_pane_vc_g1

0x7a45,	// (0x00052618) list_single_number_heading_pane_vc_g2_ParamLimits

0x7a45,	// (0x00052618) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a3b7) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a3b7) list_single_number_heading_pane_vc_g

0x654b,	// (0x0005111e) list_single_number_heading_pane_vc_t1_ParamLimits

0x654b,	// (0x0005111e) list_single_number_heading_pane_vc_t1

0x6561,	// (0x00051134) list_single_number_heading_pane_vc_t2_ParamLimits

0x6561,	// (0x00051134) list_single_number_heading_pane_vc_t2

0x6573,	// (0x00051146) list_single_number_heading_pane_vc_t3_ParamLimits

0x6573,	// (0x00051146) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x0005a5fe) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x0005a5fe) list_single_number_heading_pane_vc_t

0x5f13,	// (0x00050ae6) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5f13,	// (0x00050ae6) list_single_graphic_heading_pane_vc_g1

0x9359,	// (0x00053f2c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9359,	// (0x00053f2c) list_single_graphic_heading_pane_vc_g4

0x7a45,	// (0x00052618) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7a45,	// (0x00052618) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005a396) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005a396) list_single_graphic_heading_pane_vc_g

0x654b,	// (0x0005111e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x654b,	// (0x0005111e) list_single_graphic_heading_pane_vc_t1

0x6585,	// (0x00051158) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6585,	// (0x00051158) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x0005a605) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x0005a605) list_single_graphic_heading_pane_vc_t

0x9359,	// (0x00053f2c) list_double2_pane_vc_g1_ParamLimits

0x9359,	// (0x00053f2c) list_double2_pane_vc_g1

0x7a45,	// (0x00052618) list_double2_pane_vc_g2_ParamLimits

0x7a45,	// (0x00052618) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a3b7) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a3b7) list_double2_pane_vc_g

0x6597,	// (0x0005116a) list_double2_pane_vc_t1_ParamLimits

0x6597,	// (0x0005116a) list_double2_pane_vc_t1

0x65ad,	// (0x00051180) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x65ad,	// (0x00051180) list_double2_large_graphic_pane_vc_g1

0x65b9,	// (0x0005118c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x65b9,	// (0x0005118c) list_double2_large_graphic_pane_vc_g2

0x7aff,	// (0x000526d2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7aff,	// (0x000526d2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x0005a60a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x0005a60a) list_double2_large_graphic_pane_vc_g

0x7b0b,	// (0x000526de) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7b0b,	// (0x000526de) list_double2_large_graphic_pane_vc_t1

0x7b21,	// (0x000526f4) list_double_time_pane_vc_g1_ParamLimits

0x7b21,	// (0x000526f4) list_double_time_pane_vc_g1

0x7b2d,	// (0x00052700) list_double_time_pane_vc_g2_ParamLimits

0x7b2d,	// (0x00052700) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x0005a611) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x0005a611) list_double_time_pane_vc_g

0x7b39,	// (0x0005270c) list_double_time_pane_vc_t1_ParamLimits

0x7b39,	// (0x0005270c) list_double_time_pane_vc_t1

0x7b5d,	// (0x00052730) list_double_time_pane_vc_t2_ParamLimits

0x7b5d,	// (0x00052730) list_double_time_pane_vc_t2

0x7bac,	// (0x0005277f) list_double_time_pane_vc_t3_ParamLimits

0x7bac,	// (0x0005277f) list_double_time_pane_vc_t3

0x7bbe,	// (0x00052791) list_double_time_pane_vc_t4_ParamLimits

0x7bbe,	// (0x00052791) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x0005a616) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x0005a616) list_double_time_pane_vc_t

0x9359,	// (0x00053f2c) list_double_pane_vc_g1_ParamLimits

0x9359,	// (0x00053f2c) list_double_pane_vc_g1

0x7a45,	// (0x00052618) list_double_pane_vc_g2_ParamLimits

0x7a45,	// (0x00052618) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a3b7) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a3b7) list_double_pane_vc_g

0x7bd2,	// (0x000527a5) list_double_pane_vc_t1_ParamLimits

0x7bd2,	// (0x000527a5) list_double_pane_vc_t1

0x7be6,	// (0x000527b9) list_double_pane_vc_t2_ParamLimits

0x7be6,	// (0x000527b9) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x0005a61f) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x0005a61f) list_double_pane_vc_t

0x9359,	// (0x00053f2c) list_double_number_pane_vc_g1_ParamLimits

0x9359,	// (0x00053f2c) list_double_number_pane_vc_g1

0x7a45,	// (0x00052618) list_double_number_pane_vc_g2_ParamLimits

0x7a45,	// (0x00052618) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a3b7) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a3b7) list_double_number_pane_vc_g

0x7bfe,	// (0x000527d1) list_double_number_pane_vc_t1_ParamLimits

0x7bfe,	// (0x000527d1) list_double_number_pane_vc_t1

0x7c10,	// (0x000527e3) list_double_number_pane_vc_t2_ParamLimits

0x7c10,	// (0x000527e3) list_double_number_pane_vc_t2

0x7c24,	// (0x000527f7) list_double_number_pane_vc_t3_ParamLimits

0x7c24,	// (0x000527f7) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x0005a624) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x0005a624) list_double_number_pane_vc_t

0x7c3c,	// (0x0005280f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7c3c,	// (0x0005280f) list_double_large_graphic_pane_vc_g1

0x7c5e,	// (0x00052831) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7c5e,	// (0x00052831) list_double_large_graphic_pane_vc_g2

0x7c72,	// (0x00052845) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7c72,	// (0x00052845) list_double_large_graphic_pane_vc_g3

0x7c81,	// (0x00052854) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7c81,	// (0x00052854) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x0005a62b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x0005a62b) list_double_large_graphic_pane_vc_g

0x7c8d,	// (0x00052860) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7c8d,	// (0x00052860) list_double_large_graphic_pane_vc_t1

0x7ca9,	// (0x0005287c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7ca9,	// (0x0005287c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x0005a634) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x0005a634) list_double_large_graphic_pane_vc_t

0x9359,	// (0x00053f2c) list_double_heading_pane_vc_g1_ParamLimits

0x9359,	// (0x00053f2c) list_double_heading_pane_vc_g1

0x7a45,	// (0x00052618) list_double_heading_pane_vc_g2_ParamLimits

0x7a45,	// (0x00052618) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a3b7) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a3b7) list_double_heading_pane_vc_g

0x7ccb,	// (0x0005289e) list_double_heading_pane_vc_t1_ParamLimits

0x7ccb,	// (0x0005289e) list_double_heading_pane_vc_t1

0x7cdf,	// (0x000528b2) list_double_heading_pane_vc_t2_ParamLimits

0x7cdf,	// (0x000528b2) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x0005a639) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0005a639) list_double_heading_pane_vc_t

0x7cf7,	// (0x000528ca) list_double_graphic_pane_vc_g1_ParamLimits

0x7cf7,	// (0x000528ca) list_double_graphic_pane_vc_g1

0x7d03,	// (0x000528d6) list_double_graphic_pane_vc_g2_ParamLimits

0x7d03,	// (0x000528d6) list_double_graphic_pane_vc_g2

0x9359,	// (0x00053f2c) list_double_graphic_pane_vc_g3_ParamLimits

0x9359,	// (0x00053f2c) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x0005a63e) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0005a63e) list_double_graphic_pane_vc_g

0x7d20,	// (0x000528f3) list_double_graphic_pane_vc_t1_ParamLimits

0x7d20,	// (0x000528f3) list_double_graphic_pane_vc_t1

0x7d4a,	// (0x0005291d) list_double_graphic_pane_vc_t2_ParamLimits

0x7d4a,	// (0x0005291d) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0005a647) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0005a647) list_double_graphic_pane_vc_t

0x476c,	// (0x0004f33f) aid_size_cell_fastswap

0x4774,	// (0x0004f347) aid_size_cell_touch_ParamLimits

0x4774,	// (0x0004f347) aid_size_cell_touch

0x49d9,	// (0x0004f5ac) popup_fast_swap_wide_window_ParamLimits

0x49d9,	// (0x0004f5ac) popup_fast_swap_wide_window

0x4aed,	// (0x0004f6c0) touch_pane_ParamLimits

0x4aed,	// (0x0004f6c0) touch_pane

0x8783,	// (0x00053356) button_value_adjust_pane_cp2

0x5046,	// (0x0004fc19) button_value_adjust_pane_cp4

0x506a,	// (0x0004fc3d) form_field_data_pane_cp2

0x508b,	// (0x0004fc5e) form_field_data_wide_pane_cp2

0x8bf7,	// (0x000537ca) bg_scroll_pane_ParamLimits

0x544e,	// (0x00050021) scroll_handle_pane_ParamLimits

0x5462,	// (0x00050035) scroll_sc2_down_pane_ParamLimits

0x5462,	// (0x00050035) scroll_sc2_down_pane

0x8c28,	// (0x000537fb) scroll_sc2_up_pane_ParamLimits

0x8c28,	// (0x000537fb) scroll_sc2_up_pane

0xbda9,	// (0x0005697c) grid_wheel_folder_pane_g1_ParamLimits

0xbda9,	// (0x0005697c) grid_wheel_folder_pane_g1

0x5695,	// (0x00050268) clock_nsta_pane_cp2_ParamLimits

0x5695,	// (0x00050268) clock_nsta_pane_cp2

0x9428,	// (0x00053ffb) listscroll_midp_pane_ParamLimits

0x9434,	// (0x00054007) midp_canvas_pane

0x971c,	// (0x000542ef) nsta_clock_indic_pane

0x9750,	// (0x00054323) listscroll_form_pane_vc

0x9758,	// (0x0005432b) listscroll_set_pane_vc_ParamLimits

0x9758,	// (0x0005432b) listscroll_set_pane_vc

0x985d,	// (0x00054430) clock_nsta_pane

0x98d2,	// (0x000544a5) indicator_nsta_pane

0x9bb2,	// (0x00054785) bg_popup_sub_pane_cp2_ParamLimits

0x9bc6,	// (0x00054799) find_pane_cp2_ParamLimits

0x9bc6,	// (0x00054799) find_pane_cp2

0x9bdc,	// (0x000547af) grid_toobar_pane_ParamLimits

0x9cbc,	// (0x0005488f) list_form_gen_pane_vc_ParamLimits

0x9cbc,	// (0x0005488f) list_form_gen_pane_vc

0x9cd2,	// (0x000548a5) scroll_pane_cp8_vc_ParamLimits

0x9cd2,	// (0x000548a5) scroll_pane_cp8_vc

0x9d4e,	// (0x00054921) data_form_wide_pane_vc_ParamLimits

0x9d4e,	// (0x00054921) data_form_wide_pane_vc

0x9d5a,	// (0x0005492d) form_field_data_wide_pane_vc_g1

0x9d62,	// (0x00054935) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d62,	// (0x00054935) form_field_data_wide_pane_vc_t1

0x8797,	// (0x0005336a) input_focus_pane_cp6_vc_ParamLimits

0x8797,	// (0x0005336a) input_focus_pane_cp6_vc

0xa088,	// (0x00054c5b) list_midp_pane_ParamLimits

0xa094,	// (0x00054c67) scroll_pane_cp16_ParamLimits

0xa094,	// (0x00054c67) scroll_pane_cp16

0xa0f6,	// (0x00054cc9) button_value_adjust_pane_ParamLimits

0xa0f6,	// (0x00054cc9) button_value_adjust_pane

0xb05c,	// (0x00055c2f) button_value_adjust_pane_cp6_ParamLimits

0xb05c,	// (0x00055c2f) button_value_adjust_pane_cp6

0xb186,	// (0x00055d59) settings_code_pane_cp_ParamLimits

0xb186,	// (0x00055d59) settings_code_pane_cp

0x7648,	// (0x0005221b) cell_touch_pane_g1

0x7648,	// (0x0005221b) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005a2db) cell_touch_pane_g

0xb6fc,	// (0x000562cf) cell_touch_pane_cp_ParamLimits

0xb6fc,	// (0x000562cf) cell_touch_pane_cp

0xb70c,	// (0x000562df) cell_touch_pane_ParamLimits

0xb70c,	// (0x000562df) cell_touch_pane

0x7648,	// (0x0005221b) scroll_sc2_down_pane_g1

0x7648,	// (0x0005221b) scroll_sc2_up_pane_g1

0x7652,	// (0x00052225) bg_set_opt_pane_cp4_vc

0xb71e,	// (0x000562f1) list_set_graphic_pane_vc_g1_ParamLimits

0xb71e,	// (0x000562f1) list_set_graphic_pane_vc_g1

0xb72a,	// (0x000562fd) list_set_graphic_pane_vc_g2_ParamLimits

0xb72a,	// (0x000562fd) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x0005a5d0) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x0005a5d0) list_set_graphic_pane_vc_g

0xb736,	// (0x00056309) text_primary_small_cp13_vc_ParamLimits

0xb736,	// (0x00056309) text_primary_small_cp13_vc

0xb74e,	// (0x00056321) list_set_graphic_pane_vc_ParamLimits

0xb74e,	// (0x00056321) list_set_graphic_pane_vc

0x7652,	// (0x00052225) input_focus_pane_cp2_vc

0x7648,	// (0x0005221b) setting_code_pane_vc_g1

0x777d,	// (0x00052350) setting_code_pane_vc_t1

0xb760,	// (0x00056333) set_text_pane_vc_t1_ParamLimits

0xb760,	// (0x00056333) set_text_pane_vc_t1

0x7652,	// (0x00052225) input_focus_pane_cp1_vc

0xb77c,	// (0x0005634f) list_set_text_pane_vc

0x7648,	// (0x0005221b) setting_text_pane_vc_g1

0x7652,	// (0x00052225) bg_set_opt_pane_cp2_vc

0x7774,	// (0x00052347) setting_slider_graphic_pane_vc_g1

0xb786,	// (0x00056359) setting_slider_graphic_pane_vc_t1

0xb796,	// (0x00056369) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x0005a5d5) setting_slider_graphic_pane_vc_t

0xb7a6,	// (0x00056379) slider_set_pane_cp_vc

0xb7ae,	// (0x00056381) slider_set_pane_vc_g1

0xb7b7,	// (0x0005638a) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x0005a5da) slider_set_pane_vc_g

0x87e3,	// (0x000533b6) set_opt_bg_pane_g1_copy1

0x87eb,	// (0x000533be) set_opt_bg_pane_g2_copy1

0xb7e3,	// (0x000563b6) set_opt_bg_pane_g3_copy1

0x87fb,	// (0x000533ce) set_opt_bg_pane_g4_copy1

0x8803,	// (0x000533d6) set_opt_bg_pane_g5_copy1

0x880b,	// (0x000533de) set_opt_bg_pane_g6_copy1

0xb7ed,	// (0x000563c0) set_opt_bg_pane_g7_copy1

0xb7f5,	// (0x000563c8) set_opt_bg_pane_g8_copy1

0xb7ff,	// (0x000563d2) set_opt_bg_pane_g9_copy1

0x7652,	// (0x00052225) bg_set_opt_pane_cp_vc

0xb809,	// (0x000563dc) setting_slider_pane_vc_t1

0xb818,	// (0x000563eb) setting_slider_pane_vc_t2

0xb828,	// (0x000563fb) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x0005a5e9) setting_slider_pane_vc_t

0xb838,	// (0x0005640b) slider_set_pane_vc

0x6116,	// (0x00050ce9) volume_set_pane_vc_g1

0x611f,	// (0x00050cf2) volume_set_pane_vc_g2

0x6128,	// (0x00050cfb) volume_set_pane_vc_g3

0x6131,	// (0x00050d04) volume_set_pane_vc_g4

0x613a,	// (0x00050d0d) volume_set_pane_vc_g5

0x6143,	// (0x00050d16) volume_set_pane_vc_g6

0x614c,	// (0x00050d1f) volume_set_pane_vc_g7

0x6155,	// (0x00050d28) volume_set_pane_vc_g8

0x615e,	// (0x00050d31) volume_set_pane_vc_g9

0x6167,	// (0x00050d3a) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x0005a48e) volume_set_pane_vc_g

0xb840,	// (0x00056413) volume_set_pane_vc

0xb848,	// (0x0005641b) button_value_adjust_pane_cp1_vc

0xb852,	// (0x00056425) list_highlight_pane_cp2_vc

0xb85b,	// (0x0005642e) list_set_pane_vc_ParamLimits

0xb85b,	// (0x0005642e) list_set_pane_vc

0xb8b9,	// (0x0005648c) main_pane_set_vc_t1_ParamLimits

0xb8b9,	// (0x0005648c) main_pane_set_vc_t1

0xb8ce,	// (0x000564a1) main_pane_set_vc_t2_ParamLimits

0xb8ce,	// (0x000564a1) main_pane_set_vc_t2

0xb8e0,	// (0x000564b3) main_pane_set_vc_t3_ParamLimits

0xb8e0,	// (0x000564b3) main_pane_set_vc_t3

0xb8f4,	// (0x000564c7) main_pane_set_vc_t4_ParamLimits

0xb8f4,	// (0x000564c7) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x0005a5f0) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x0005a5f0) main_pane_set_vc_t

0xb908,	// (0x000564db) setting_code_pane_vc_ParamLimits

0xb908,	// (0x000564db) setting_code_pane_vc

0xb919,	// (0x000564ec) setting_slider_graphic_pane_vc

0xb919,	// (0x000564ec) setting_slider_pane_vc

0xb919,	// (0x000564ec) setting_text_pane_vc

0xb919,	// (0x000564ec) setting_volume_pane_vc

0xb923,	// (0x000564f6) scroll_pane_cp121_vc

0x8771,	// (0x00053344) set_content_pane_vc

0xb92b,	// (0x000564fe) button_value_adjust_pane_g1

0xb934,	// (0x00056507) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x0005a64c) button_value_adjust_pane_g

0xb93d,	// (0x00056510) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb93d,	// (0x00056510) form_field_slider_wide_pane_vc_t1

0xb951,	// (0x00056524) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb951,	// (0x00056524) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x0005a651) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x0005a651) form_field_slider_wide_pane_vc_t

0x8171,	// (0x00052d44) input_focus_pane_cp10_vc_ParamLimits

0x8171,	// (0x00052d44) input_focus_pane_cp10_vc

0xb97f,	// (0x00056552) slider_cont_pane_cp1_vc_ParamLimits

0xb97f,	// (0x00056552) slider_cont_pane_cp1_vc

0xb991,	// (0x00056564) slider_form_pane_g1_cp2

0xb7b7,	// (0x0005638a) slider_form_pane_g2_cp2

0xb9be,	// (0x00056591) form_field_slider_pane_vc_t3

0xb9cc,	// (0x0005659f) form_field_slider_pane_vc_t4

0xb9da,	// (0x000565ad) slider_form_pane_vc_ParamLimits

0xb9da,	// (0x000565ad) slider_form_pane_vc

0xb9e7,	// (0x000565ba) form_field_slider_pane_vc_t1_ParamLimits

0xb9e7,	// (0x000565ba) form_field_slider_pane_vc_t1

0xb951,	// (0x00056524) form_field_slider_pane_vc_t2_ParamLimits

0xb951,	// (0x00056524) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x0005a663) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x0005a663) form_field_slider_pane_vc_t

0x8171,	// (0x00052d44) input_focus_pane_cp9_vc_ParamLimits

0x8171,	// (0x00052d44) input_focus_pane_cp9_vc

0xba03,	// (0x000565d6) slider_cont_pane_vc_ParamLimits

0xba03,	// (0x000565d6) slider_cont_pane_vc

0xba17,	// (0x000565ea) list_form_graphic_pane_cp_vc_ParamLimits

0xba17,	// (0x000565ea) list_form_graphic_pane_cp_vc

0x9d5a,	// (0x0005492d) form_field_popup_wide_pane_vc_g1

0xba2c,	// (0x000565ff) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba2c,	// (0x000565ff) form_field_popup_wide_pane_vc_t1

0x8797,	// (0x0005336a) input_focus_pane_cp8_vc_ParamLimits

0x8797,	// (0x0005336a) input_focus_pane_cp8_vc

0xba71,	// (0x00056644) list_form_wide_pane_vc_ParamLimits

0xba71,	// (0x00056644) list_form_wide_pane_vc

0xba7d,	// (0x00056650) list_form_graphic_pane_vc_g1

0xba85,	// (0x00056658) list_form_graphic_pane_vc_t1_ParamLimits

0xba85,	// (0x00056658) list_form_graphic_pane_vc_t1

0x7732,	// (0x00052305) list_highlight_pane_cp5_vc_ParamLimits

0x7732,	// (0x00052305) list_highlight_pane_cp5_vc

0xbaa1,	// (0x00056674) list_form_graphic_pane_vc_ParamLimits

0xbaa1,	// (0x00056674) list_form_graphic_pane_vc

0x9d5a,	// (0x0005492d) form_field_popup_pane_vc_g1

0xbab7,	// (0x0005668a) form_field_popup_pane_vc_t1_ParamLimits

0xbab7,	// (0x0005668a) form_field_popup_pane_vc_t1

0x8797,	// (0x0005336a) input_focus_pane_cp7_vc_ParamLimits

0x8797,	// (0x0005336a) input_focus_pane_cp7_vc

0xbace,	// (0x000566a1) list_form_pane_vc_ParamLimits

0xbace,	// (0x000566a1) list_form_pane_vc

0xbada,	// (0x000566ad) data_form_pane_vc_t1_ParamLimits

0xbada,	// (0x000566ad) data_form_pane_vc_t1

0x87e3,	// (0x000533b6) input_focus_pane_vc_g1

0x87eb,	// (0x000533be) input_focus_pane_vc_g2

0x87f3,	// (0x000533c6) input_focus_pane_vc_g3

0x87fb,	// (0x000533ce) input_focus_pane_vc_g4

0x8803,	// (0x000533d6) input_focus_pane_vc_g5

0x880b,	// (0x000533de) input_focus_pane_vc_g6

0x8813,	// (0x000533e6) input_focus_pane_vc_g7

0x881b,	// (0x000533ee) input_focus_pane_vc_g8

0x8823,	// (0x000533f6) input_focus_pane_vc_g9

0x7648,	// (0x0005221b) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005a264) input_focus_pane_vc_g

0x9d4e,	// (0x00054921) data_form_pane_vc_ParamLimits

0x9d4e,	// (0x00054921) data_form_pane_vc

0x9d5a,	// (0x0005492d) form_field_data_pane_vc_g1

0xbaf5,	// (0x000566c8) form_field_data_pane_vc_t1_ParamLimits

0xbaf5,	// (0x000566c8) form_field_data_pane_vc_t1

0x8797,	// (0x0005336a) input_focus_pane_vc_ParamLimits

0x8797,	// (0x0005336a) input_focus_pane_vc

0xbb0f,	// (0x000566e2) button_value_adjust_pane_cp3_vc

0xbb17,	// (0x000566ea) button_value_adjust_pane_cp5_vc

0xbb1f,	// (0x000566f2) form_field_data_pane_vc_ParamLimits

0xbb1f,	// (0x000566f2) form_field_data_pane_vc

0xbb36,	// (0x00056709) form_field_data_pane_vc_cp2

0xbb3e,	// (0x00056711) form_field_data_wide_pane_vc_ParamLimits

0xbb3e,	// (0x00056711) form_field_data_wide_pane_vc

0xbb54,	// (0x00056727) form_field_data_wide_pane_vc_cp2

0xbb5c,	// (0x0005672f) form_field_popup_pane_vc_ParamLimits

0xbb5c,	// (0x0005672f) form_field_popup_pane_vc

0xbb73,	// (0x00056746) form_field_popup_wide_pane_vc_ParamLimits

0xbb73,	// (0x00056746) form_field_popup_wide_pane_vc

0xbb89,	// (0x0005675c) form_field_slider_pane_vc_ParamLimits

0xbb89,	// (0x0005675c) form_field_slider_pane_vc

0xbb9c,	// (0x0005676f) form_field_slider_wide_pane_vc_ParamLimits

0xbb9c,	// (0x0005676f) form_field_slider_wide_pane_vc

0xbbaf,	// (0x00056782) grid_touch_1_pane_ParamLimits

0xbbaf,	// (0x00056782) grid_touch_1_pane

0xbbbb,	// (0x0005678e) grid_touch_2_pane_ParamLimits

0xbbbb,	// (0x0005678e) grid_touch_2_pane

0x96e7,	// (0x000542ba) touch_pane_g1_ParamLimits

0x96e7,	// (0x000542ba) touch_pane_g1

0xbbd3,	// (0x000567a6) cell_app_pane_cp_wide_ParamLimits

0xbbd3,	// (0x000567a6) cell_app_pane_cp_wide

0xbbe4,	// (0x000567b7) grid_popup_fast_wide_pane_ParamLimits

0xbbe4,	// (0x000567b7) grid_popup_fast_wide_pane

0xbbf8,	// (0x000567cb) scroll_pane_cp19_ParamLimits

0xbbf8,	// (0x000567cb) scroll_pane_cp19

0x7652,	// (0x00052225) bg_popup_window_pane_cp20

0xbc0c,	// (0x000567df) listscroll_popup_fast_wide_pane

0x7732,	// (0x00052305) grid_indicator_nsta_pane

0xbc14,	// (0x000567e7) clock_nsta_pane_g1

0xbc1d,	// (0x000567f0) clock_nsta_pane_t1

0xbc39,	// (0x0005680c) cell_indicator_nsta_pane_ParamLimits

0xbc39,	// (0x0005680c) cell_indicator_nsta_pane

0xbc6a,	// (0x0005683d) cell_indicator_nsta_pane_g1

0xbc78,	// (0x0005684b) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x0005a674) cell_indicator_nsta_pane_g

0xbc85,	// (0x00056858) clock_nsta_pane_cp

0xbc8e,	// (0x00056861) indicator_nsta_pane_cp

0xbc96,	// (0x00056869) nsta_clock_indic_pane_g1

0x77fb,	// (0x000523ce) grid_indicator_pane

0x8d1d,	// (0x000538f0) scroll_pane_cp29

0x55e4,	// (0x000501b7) indicator_nsta_pane_cp2_ParamLimits

0x55e4,	// (0x000501b7) indicator_nsta_pane_cp2

0x7732,	// (0x00052305) main_apps_wheel_pane

0x9f69,	// (0x00054b3c) form_midp_field_text_pane_ParamLimits

0xa0b4,	// (0x00054c87) scroll_bar_cp050_ParamLimits

0xbce6,	// (0x000568b9) cell_indicator_pane_ParamLimits

0xbce6,	// (0x000568b9) cell_indicator_pane

0xbcfd,	// (0x000568d0) cell_indicator_pane_g1

0xbd07,	// (0x000568da) grid_wheel_folder_pane_ParamLimits

0xbd07,	// (0x000568da) grid_wheel_folder_pane

0xbd1d,	// (0x000568f0) list_wheel_apps_pane_ParamLimits

0xbd1d,	// (0x000568f0) list_wheel_apps_pane

0xbd2e,	// (0x00056901) main_apps_wheel_pane_g1_ParamLimits

0xbd2e,	// (0x00056901) main_apps_wheel_pane_g1

0xbd42,	// (0x00056915) main_apps_wheel_pane_g2_ParamLimits

0xbd42,	// (0x00056915) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x0005a690) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x0005a690) main_apps_wheel_pane_g

0xbd5a,	// (0x0005692d) main_apps_wheel_pane_t1_ParamLimits

0xbd5a,	// (0x0005692d) main_apps_wheel_pane_t1

0xbd7d,	// (0x00056950) list_wheel_apps_pane_g1

0xbd85,	// (0x00056958) list_wheel_apps_pane_g2

0xbd8d,	// (0x00056960) list_wheel_apps_pane_g3

0xbd95,	// (0x00056968) list_wheel_apps_pane_g4

0xbd9f,	// (0x00056972) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x0005a695) list_wheel_apps_pane_g

0x92a0,	// (0x00053e73) navi_icon_text_pane

0x978c,	// (0x0005435f) aid_fill_nsta

0xbdc2,	// (0x00056995) navi_icon_text_pane_g1

0xbdce,	// (0x000569a1) navi_icon_text_pane_t1

0x9133,	// (0x00053d06) list_set_graphic_pane_t1_ParamLimits

0x9133,	// (0x00053d06) list_set_graphic_pane_t1

0xa817,	// (0x000553ea) popup_midp_note_alarm_window_t6_ParamLimits

0xa817,	// (0x000553ea) popup_midp_note_alarm_window_t6

0xa829,	// (0x000553fc) popup_midp_note_alarm_window_t7_ParamLimits

0xa829,	// (0x000553fc) popup_midp_note_alarm_window_t7

0xa83b,	// (0x0005540e) popup_midp_note_alarm_window_t8_ParamLimits

0xa83b,	// (0x0005540e) popup_midp_note_alarm_window_t8

0xa84d,	// (0x00055420) popup_midp_note_alarm_window_t9_ParamLimits

0xa84d,	// (0x00055420) popup_midp_note_alarm_window_t9

0xa85f,	// (0x00055432) popup_midp_note_alarm_window_t10_ParamLimits

0xa85f,	// (0x00055432) popup_midp_note_alarm_window_t10

0xa871,	// (0x00055444) popup_midp_note_alarm_window_t11_ParamLimits

0xa871,	// (0x00055444) popup_midp_note_alarm_window_t11

0xa883,	// (0x00055456) scroll_pane_cp17_ParamLimits

0xa883,	// (0x00055456) scroll_pane_cp17

0x6116,	// (0x00050ce9) volume_small_pane_cp_g1

0x65c5,	// (0x00051198) volume_small_pane_cp_g2

0x65ce,	// (0x000511a1) volume_small_pane_cp_g3

0x65d7,	// (0x000511aa) volume_small_pane_cp_g4

0x65e0,	// (0x000511b3) volume_small_pane_cp_g5

0x65e9,	// (0x000511bc) volume_small_pane_cp_g6

0x65f2,	// (0x000511c5) volume_small_pane_cp_g7

0x65fb,	// (0x000511ce) volume_small_pane_cp_g8

0x6604,	// (0x000511d7) volume_small_pane_cp_g9

0x660d,	// (0x000511e0) volume_small_pane_cp_g10

0x94fd,	// (0x000540d0) midp_ticker_pane_g1_ParamLimits

0x9509,	// (0x000540dc) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0005a330) midp_ticker_pane_g_ParamLimits

0x9515,	// (0x000540e8) midp_ticker_pane_t1_ParamLimits

0x97a2,	// (0x00054375) aid_fill_nsta_2

0xa0a0,	// (0x00054c73) list_form2_midp_pane

0xb1d1,	// (0x00055da4) midp_editing_number_pane_ParamLimits

0xb1e0,	// (0x00055db3) midp_ticker_pane_ParamLimits

0xbde0,	// (0x000569b3) form2_midp_field_pane

0xbe04,	// (0x000569d7) scroll_pane_cp51

0xbe24,	// (0x000569f7) form2_midp_button_pane_ParamLimits

0xbe24,	// (0x000569f7) form2_midp_button_pane

0xbe36,	// (0x00056a09) form2_midp_content_pane_ParamLimits

0xbe36,	// (0x00056a09) form2_midp_content_pane

0xbe50,	// (0x00056a23) form2_midp_field_choice_group_pane

0xbe58,	// (0x00056a2b) form2_midp_field_pane_g1

0xbe60,	// (0x00056a33) form2_midp_field_pane_g2

0xbe68,	// (0x00056a3b) form2_midp_field_pane_g3

0xbe70,	// (0x00056a43) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x0005a6ba) form2_midp_field_pane_g

0xbe78,	// (0x00056a4b) form2_midp_gauge_slider_pane

0xbe80,	// (0x00056a53) form2_midp_gauge_wait_pane

0xbe88,	// (0x00056a5b) form2_midp_image_pane_ParamLimits

0xbe88,	// (0x00056a5b) form2_midp_image_pane

0xbea3,	// (0x00056a76) form2_midp_label_pane_ParamLimits

0xbea3,	// (0x00056a76) form2_midp_label_pane

0xbebc,	// (0x00056a8f) form2_midp_label_pane_cp_ParamLimits

0xbebc,	// (0x00056a8f) form2_midp_label_pane_cp

0xbedd,	// (0x00056ab0) form2_midp_string_pane_ParamLimits

0xbedd,	// (0x00056ab0) form2_midp_string_pane

0x7d74,	// (0x00052947) form2_midp_text_pane_ParamLimits

0x7d74,	// (0x00052947) form2_midp_text_pane

0xbeef,	// (0x00056ac2) form2_midp_time_pane

0xbeff,	// (0x00056ad2) input_focus_pane_cp51_ParamLimits

0xbeff,	// (0x00056ad2) input_focus_pane_cp51

0xbf17,	// (0x00056aea) form2_midp_label_pane_t1_ParamLimits

0xbf17,	// (0x00056aea) form2_midp_label_pane_t1

0x7d93,	// (0x00052966) form2_mdip_text_pane_t1_ParamLimits

0x7d93,	// (0x00052966) form2_mdip_text_pane_t1

0x7db1,	// (0x00052984) form2_midp_time_pane_t1

0xbf60,	// (0x00056b33) form2_midp_gauge_slider_pane_t1

0xbf72,	// (0x00056b45) form2_midp_gauge_slider_pane_t2

0xbf84,	// (0x00056b57) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x0005a6c3) form2_midp_gauge_slider_pane_t

0xbf96,	// (0x00056b69) form2_midp_slider_pane

0xbfa2,	// (0x00056b75) form2_midp_gauge_wait_pane_t1

0xbfb0,	// (0x00056b83) form2_midp_wait_pane_ParamLimits

0xbfb0,	// (0x00056b83) form2_midp_wait_pane

0xbfdb,	// (0x00056bae) list_single_2graphic_pane_cp4_ParamLimits

0xbfdb,	// (0x00056bae) list_single_2graphic_pane_cp4

0x9dc2,	// (0x00054995) list_single_midp_graphic_pane_cp_ParamLimits

0x9dc2,	// (0x00054995) list_single_midp_graphic_pane_cp

0x7652,	// (0x00052225) list_highlight_pane_cp20

0xbfff,	// (0x00056bd2) list_single_2graphic_pane_g1_cp4

0xc007,	// (0x00056bda) list_single_2graphic_pane_g2_cp4

0xc00f,	// (0x00056be2) list_single_2graphic_pane_t1_cp4

0x7732,	// (0x00052305) list_highlight_pane_cp21

0xc01e,	// (0x00056bf1) list_single_midp_graphic_pane_g4_cp

0xc02d,	// (0x00056c00) list_single_midp_graphic_pane_t1_cp

0xc042,	// (0x00056c15) form2_mdip_string_pane_t1_ParamLimits

0xc042,	// (0x00056c15) form2_mdip_string_pane_t1

0x7652,	// (0x00052225) bg_wml_button_pane_cp2

0x7648,	// (0x0005221b) form2_midp_image_pane_g1

0x79f4,	// (0x000525c7) list_double_large_graphic_pane_g5_ParamLimits

0x79f4,	// (0x000525c7) list_double_large_graphic_pane_g5

0x9428,	// (0x00053ffb) midp_form_pane_ParamLimits

0x7732,	// (0x00052305) main_apps_wheel_pane_ParamLimits

0x5cd3,	// (0x000508a6) popup_preview_window_ParamLimits

0x5cd3,	// (0x000508a6) popup_preview_window

0x5e8e,	// (0x00050a61) popup_touch_info_window_ParamLimits

0x5e8e,	// (0x00050a61) popup_touch_info_window

0x5eac,	// (0x00050a7f) popup_touch_menu_window_ParamLimits

0x5eac,	// (0x00050a7f) popup_touch_menu_window

0x763e,	// (0x00052211) bg_popup_sub_pane_cp6

0xc13b,	// (0x00056d0e) list_touch_menu_pane

0xc143,	// (0x00056d16) list_single_touch_menu_pane_ParamLimits

0xc143,	// (0x00056d16) list_single_touch_menu_pane

0xc159,	// (0x00056d2c) list_single_touch_menu_pane_t1

0x7732,	// (0x00052305) bg_popup_sub_pane_cp7_ParamLimits

0x7732,	// (0x00052305) bg_popup_sub_pane_cp7

0xc167,	// (0x00056d3a) heading_sub_pane

0xc16f,	// (0x00056d42) list_touch_info_pane_ParamLimits

0xc16f,	// (0x00056d42) list_touch_info_pane

0xc17e,	// (0x00056d51) list_single_touch_info_pane_ParamLimits

0xc17e,	// (0x00056d51) list_single_touch_info_pane

0xc190,	// (0x00056d63) list_single_touch_info_pane_t1

0xc19e,	// (0x00056d71) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x0005a6d1) list_single_touch_info_pane_t

0x9420,	// (0x00053ff3) bg_popup_heading_pane_cp

0xc1ac,	// (0x00056d7f) heading_sub_pane_t1

0x9ce8,	// (0x000548bb) bg_popup_preview_window_pane_cp_ParamLimits

0x9ce8,	// (0x000548bb) bg_popup_preview_window_pane_cp

0xc167,	// (0x00056d3a) heading_preview_pane

0xc16f,	// (0x00056d42) list_preview_pane_ParamLimits

0xc16f,	// (0x00056d42) list_preview_pane

0xc1ba,	// (0x00056d8d) popup_preview_window_g1

0xc17e,	// (0x00056d51) list_single_preview_pane_ParamLimits

0xc17e,	// (0x00056d51) list_single_preview_pane

0xc1c2,	// (0x00056d95) list_single_preview_pane_g1

0xc1ca,	// (0x00056d9d) list_single_preview_pane_t1

0xc190,	// (0x00056d63) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x0005a6d6) list_single_preview_pane_t

0xc1d8,	// (0x00056dab) bg_popup_heading_pane_cp2_ParamLimits

0xc1d8,	// (0x00056dab) bg_popup_heading_pane_cp2

0xc1ee,	// (0x00056dc1) heading_preview_pane_g1

0xc1f6,	// (0x00056dc9) heading_preview_pane_t1_ParamLimits

0xc1f6,	// (0x00056dc9) heading_preview_pane_t1

0x781e,	// (0x000523f1) soft_indicator_pane_t1_ParamLimits

0x86fe,	// (0x000532d1) scroll_pane_ParamLimits

0x8c16,	// (0x000537e9) scroll_sc2_left_pane

0x8c1f,	// (0x000537f2) scroll_sc2_right_pane

0x8c3e,	// (0x00053811) scroll_bg_pane_g1_ParamLimits

0x8c53,	// (0x00053826) scroll_bg_pane_g2_ParamLimits

0x8c6b,	// (0x0005383e) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005a2bb) scroll_bg_pane_g_ParamLimits

0x8c3e,	// (0x00053811) scroll_handle_pane_g1_ParamLimits

0x8c8d,	// (0x00053860) scroll_handle_pane_g2_ParamLimits

0x8c6b,	// (0x0005383e) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005a2c2) scroll_handle_pane_g_ParamLimits

0x5954,	// (0x00050527) popup_choice_list_window_ParamLimits

0x5954,	// (0x00050527) popup_choice_list_window

0x9bbe,	// (0x00054791) choice_list_pane

0x9c40,	// (0x00054813) cell_toolbar_pane_t1

0x9c68,	// (0x0005483b) toolbar_button_pane_ParamLimits

0xad3d,	// (0x00055910) ai_gene_pane_1_t2_ParamLimits

0xad3d,	// (0x00055910) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0005a4ea) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0005a4ea) ai_gene_pane_1_t

0xc213,	// (0x00056de6) scroll_sc2_left_pane_g1

0xc213,	// (0x00056de6) scroll_sc2_right_pane_g1

0x9744,	// (0x00054317) bg_popup_sub_pane_cp10

0xc21d,	// (0x00056df0) list_choice_list_pane

0xc236,	// (0x00056e09) list_single_choice_list_pane_ParamLimits

0xc236,	// (0x00056e09) list_single_choice_list_pane

0xc249,	// (0x00056e1c) list_single_choice_list_pane_g1

0x891c,	// (0x000534ef) list_single_choice_list_pane_t1_ParamLimits

0x891c,	// (0x000534ef) list_single_choice_list_pane_t1

0xc251,	// (0x00056e24) choice_list_pane_g1

0xc259,	// (0x00056e2c) choice_list_pane_t1

0x763e,	// (0x00052211) input_focus_pane_cp11

0x8af3,	// (0x000536c6) title_pane_stacon_g2_ParamLimits

0x8af3,	// (0x000536c6) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0005a2a1) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0005a2a1) title_pane_stacon_g

0x9420,	// (0x00053ff3) cursor_press_pane

0x5a00,	// (0x000505d3) popup_fep_hwr_window_ParamLimits

0x5a00,	// (0x000505d3) popup_fep_hwr_window

0x5a7a,	// (0x0005064d) popup_fep_vkb_window_ParamLimits

0x5a7a,	// (0x0005064d) popup_fep_vkb_window

0xc267,	// (0x00056e3a) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x0005a6ff) fep_vkb_side_pane_g_ParamLimits

0x664f,	// (0x00051222) fep_hwr_candidate_pane_ParamLimits

0x664f,	// (0x00051222) fep_hwr_candidate_pane

0x6679,	// (0x0005124c) fep_hwr_side_pane_ParamLimits

0x6679,	// (0x0005124c) fep_hwr_side_pane

0x6699,	// (0x0005126c) fep_hwr_top_pane_ParamLimits

0x6699,	// (0x0005126c) fep_hwr_top_pane

0x66b1,	// (0x00051284) fep_hwr_write_pane_ParamLimits

0x66b1,	// (0x00051284) fep_hwr_write_pane

0xfb2c,	// (0x0005a6ff) fep_vkb_side_pane_g

0xc26f,	// (0x00056e42) fep_hwr_top_pane_g1

0xc281,	// (0x00056e54) fep_hwr_top_pane_g2

0x66eb,	// (0x000512be) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x0005a6db) fep_hwr_top_pane_g

0x6700,	// (0x000512d3) fep_hwr_top_text_pane

0x8e0d,	// (0x000539e0) fep_hwr_top_text_pane_g1

0xc2b7,	// (0x00056e8a) fep_hwr_top_text_pane_t1

0x67f6,	// (0x000513c9) fep_hwr_candidate_pane_g1

0xc50a,	// (0x000570dd) fep_vkb_keypad_pane_g3_ParamLimits

0xc50a,	// (0x000570dd) fep_vkb_keypad_pane_g3

0xc532,	// (0x00057105) fep_vkb_keypad_pane_g4_ParamLimits

0xc532,	// (0x00057105) fep_vkb_keypad_pane_g4

0xc5a1,	// (0x00057174) fep_vkb_bottom_pane_g2_ParamLimits

0xc5a1,	// (0x00057174) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x0005a706) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x0005a706) fep_vkb_bottom_pane_g

0xc213,	// (0x00056de6) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x0005a710) cell_vkb_side_pane_g

0xc62c,	// (0x000571ff) cell_vkb_side_pane_t1

0xc63a,	// (0x0005720d) cell_vkb_side_pane_t1_copy1

0xc213,	// (0x00056de6) bg_fep_vkb_candidate_pane_g2

0xc766,	// (0x00057339) cell_vkb_candidate_pane_ParamLimits

0xc2c5,	// (0x00056e98) aid_size_cell_vkb_ParamLimits

0xc2c5,	// (0x00056e98) aid_size_cell_vkb

0xc766,	// (0x00057339) cell_vkb_candidate_pane

0x681d,	// (0x000513f0) bg_popup_fep_shadow_pane_g1

0xc353,	// (0x00056f26) fep_vkb_bottom_pane_ParamLimits

0xc353,	// (0x00056f26) fep_vkb_bottom_pane

0xc389,	// (0x00056f5c) fep_vkb_candidate_pane_ParamLimits

0xc389,	// (0x00056f5c) fep_vkb_candidate_pane

0xc3a5,	// (0x00056f78) fep_vkb_keypad_pane_ParamLimits

0xc3a5,	// (0x00056f78) fep_vkb_keypad_pane

0xc3eb,	// (0x00056fbe) fep_vkb_side_pane_ParamLimits

0xc3eb,	// (0x00056fbe) fep_vkb_side_pane

0xc427,	// (0x00056ffa) fep_vkb_top_pane_ParamLimits

0xc427,	// (0x00056ffa) fep_vkb_top_pane

0xc463,	// (0x00057036) fep_vkb_top_pane_g1_ParamLimits

0xc463,	// (0x00057036) fep_vkb_top_pane_g1

0xc472,	// (0x00057045) fep_vkb_top_pane_g2_ParamLimits

0xc472,	// (0x00057045) fep_vkb_top_pane_g2

0xc481,	// (0x00057054) fep_vkb_top_pane_g3_ParamLimits

0xc481,	// (0x00057054) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x0005a6f6) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x0005a6f6) fep_vkb_top_pane_g

0xc49f,	// (0x00057072) fep_vkb_top_text_pane_ParamLimits

0xc49f,	// (0x00057072) fep_vkb_top_text_pane

0xc4b0,	// (0x00057083) fep_vkb_side_pane_g1_ParamLimits

0xc4b0,	// (0x00057083) fep_vkb_side_pane_g1

0xc4f9,	// (0x000570cc) grid_vkb_side_pane_ParamLimits

0xc4f9,	// (0x000570cc) grid_vkb_side_pane

0x6825,	// (0x000513f8) bg_popup_fep_shadow_pane_g2

0x682e,	// (0x00051401) bg_popup_fep_shadow_pane_g3

0x6836,	// (0x00051409) bg_popup_fep_shadow_pane_g4

0x683f,	// (0x00051412) bg_popup_fep_shadow_pane_g5

0x6849,	// (0x0005141c) bg_popup_fep_shadow_pane_g6

0x6851,	// (0x00051424) bg_popup_fep_shadow_pane_g7

0x87fb,	// (0x000533ce) bg_popup_fep_shadow_pane_g8

0xc550,	// (0x00057123) grid_vkb_keypad_number_pane_ParamLimits

0xc550,	// (0x00057123) grid_vkb_keypad_number_pane

0xc560,	// (0x00057133) grid_vkb_keypad_pane_ParamLimits

0xc560,	// (0x00057133) grid_vkb_keypad_pane

0xc586,	// (0x00057159) fep_vkb_bottom_pane_g1_ParamLimits

0xc586,	// (0x00057159) fep_vkb_bottom_pane_g1

0xc5af,	// (0x00057182) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5af,	// (0x00057182) grid_vkb_keypad_bottom_left_pane

0xc5c4,	// (0x00057197) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc5c4,	// (0x00057197) grid_vkb_keypad_bottom_right_pane

0xc5d9,	// (0x000571ac) fep_vkb_top_text_pane_g1

0xc5f4,	// (0x000571c7) fep_vkb_top_text_pane_t1

0xc609,	// (0x000571dc) cell_vkb_side_pane_ParamLimits

0xc609,	// (0x000571dc) cell_vkb_side_pane

0xc213,	// (0x00056de6) cell_vkb_side_pane_g1

0xc648,	// (0x0005721b) cell_vkb_keypad_pane_ParamLimits

0xc648,	// (0x0005721b) cell_vkb_keypad_pane

0xc6bd,	// (0x00057290) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x0005a723) bg_popup_fep_shadow_pane_g

0x6863,	// (0x00051436) cell_hwr_side_pane_g1

0x6863,	// (0x00051436) cell_hwr_side_pane_g2

0xc6c7,	// (0x0005729a) cell_vkb_keypad_pane_t1

0xc6d5,	// (0x000572a8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc6d5,	// (0x000572a8) cell_vkb_keypad_bottom_left_pane

0xc6f2,	// (0x000572c5) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc6f2,	// (0x000572c5) cell_vkb_keypad_bottom_right_pane

0xc213,	// (0x00056de6) cell_vkb_keypad_bottom_left_pane_g1

0xc213,	// (0x00056de6) cell_vkb_keypad_bottom_right_pane_g1

0xc72b,	// (0x000572fe) cell_vkb_keypad_number_pane_ParamLimits

0xc72b,	// (0x000572fe) cell_vkb_keypad_number_pane

0xc74a,	// (0x0005731d) cell_vkb_keypad_number_pane_g1

0xc754,	// (0x00057327) cell_vkb_keypad_number_pane_g2

0xc75d,	// (0x00057330) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x0005a715) cell_vkb_keypad_number_pane_g

0xc6c7,	// (0x0005729a) cell_vkb_keypad_number_pane_t1

0xc781,	// (0x00057354) fep_vkb_candidate_pane_g1

0x0001,

0xfb63,	// (0x0005a736) cell_hwr_side_pane_g

0xc79a,	// (0x0005736d) cell_hwr_side_pane_t1

0x686d,	// (0x00051440) cell_hwr_side_pane_t1_copy1

0x687b,	// (0x0005144e) cell_hwr_candidate_pane_g1

0x68aa,	// (0x0005147d) cell_hwr_candidate_pane_t1

0xc213,	// (0x00056de6) cell_vkb_candidate_pane_g2

0xc7de,	// (0x000573b1) cell_vkb_candidate_pane_t1

0x6616,	// (0x000511e9) bg_popup_fep_shadow_pane_ParamLimits

0x6616,	// (0x000511e9) bg_popup_fep_shadow_pane

0x66cb,	// (0x0005129e) bg_fep_hwr_top_pane_g4

0xc293,	// (0x00056e66) bg_hwr_side_pane_g1_ParamLimits

0xc293,	// (0x00056e66) bg_hwr_side_pane_g1

0x673c,	// (0x0005130f) cell_hwr_side_pane_ParamLimits

0x673c,	// (0x0005130f) cell_hwr_side_pane

0x6777,	// (0x0005134a) fep_hwr_write_pane_g1_ParamLimits

0x6777,	// (0x0005134a) fep_hwr_write_pane_g1

0x6784,	// (0x00051357) fep_hwr_write_pane_g2_ParamLimits

0x6784,	// (0x00051357) fep_hwr_write_pane_g2

0x6791,	// (0x00051364) fep_hwr_write_pane_g3_ParamLimits

0x6791,	// (0x00051364) fep_hwr_write_pane_g3

0x679f,	// (0x00051372) fep_hwr_write_pane_g4_ParamLimits

0x679f,	// (0x00051372) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x0005a6e2) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x0005a6e2) fep_hwr_write_pane_g

0x66cb,	// (0x0005129e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x66cb,	// (0x0005129e) bg_fep_hwr_candidate_pane_g2

0x67b4,	// (0x00051387) cell_hwr_candidate_pane_ParamLimits

0x67b4,	// (0x00051387) cell_hwr_candidate_pane

0x67f6,	// (0x000513c9) fep_hwr_candidate_pane_g1_ParamLimits

0xc2f3,	// (0x00056ec6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc2f3,	// (0x00056ec6) bg_popup_fep_shadow_pane_cp2

0xc491,	// (0x00057064) fep_vkb_top_pane_g4_ParamLimits

0xc491,	// (0x00057064) fep_vkb_top_pane_g4

0xc4d7,	// (0x000570aa) fep_vkb_side_pane_g2_ParamLimits

0xc4d7,	// (0x000570aa) fep_vkb_side_pane_g2

0x4f73,	// (0x0004fb46) list_setting_pane_t4_ParamLimits

0x4f73,	// (0x0004fb46) list_setting_pane_t4

0x500d,	// (0x0004fbe0) list_setting_number_pane_t5_ParamLimits

0x500d,	// (0x0004fbe0) list_setting_number_pane_t5

0x8e54,	// (0x00053a27) list_double_heading_pane_cp2_ParamLimits

0x8e54,	// (0x00053a27) list_double_heading_pane_cp2

0x8732,	// (0x00053305) list_double_heading_pane_g1_cp2_ParamLimits

0x8732,	// (0x00053305) list_double_heading_pane_g1_cp2

0x87a5,	// (0x00053378) list_double_heading_pane_g2_cp2_ParamLimits

0x87a5,	// (0x00053378) list_double_heading_pane_g2_cp2

0xc7ec,	// (0x000573bf) list_double_heading_pane_t1_cp2_ParamLimits

0xc7ec,	// (0x000573bf) list_double_heading_pane_t1_cp2

0xc802,	// (0x000573d5) list_double_heading_pane_t2_cp2_ParamLimits

0xc802,	// (0x000573d5) list_double_heading_pane_t2_cp2

0x7626,	// (0x000521f9) aid_value_unit2

0x4a33,	// (0x0004f606) popup_preview_fixed_window

0x817f,	// (0x00052d52) bg_popup_preview_window_pane_cp02

0xc814,	// (0x000573e7) list_preview_fixed_pane

0xc85a,	// (0x0005742d) list_empty_pane_fp_ParamLimits

0xc85a,	// (0x0005742d) list_empty_pane_fp

0xc85a,	// (0x0005742d) list_single_cale_day_pane_fp_ParamLimits

0xc85a,	// (0x0005742d) list_single_cale_day_pane_fp

0xc85a,	// (0x0005742d) list_single_graphic_heading_pane_fp_ParamLimits

0xc85a,	// (0x0005742d) list_single_graphic_heading_pane_fp

0xc85a,	// (0x0005742d) list_single_graphic_pane_fp_ParamLimits

0xc85a,	// (0x0005742d) list_single_graphic_pane_fp

0xc85a,	// (0x0005742d) list_single_heading_pane_fp_ParamLimits

0xc85a,	// (0x0005742d) list_single_heading_pane_fp

0xc85a,	// (0x0005742d) list_single_pane_fp_ParamLimits

0xc85a,	// (0x0005742d) list_single_pane_fp

0xc86f,	// (0x00057442) list_single_pane_fp_g1_ParamLimits

0xc86f,	// (0x00057442) list_single_pane_fp_g1

0x8732,	// (0x00053305) list_single_pane_fp_g2_ParamLimits

0x8732,	// (0x00053305) list_single_pane_fp_g2

0x87a5,	// (0x00053378) list_single_pane_fp_g3_ParamLimits

0x87a5,	// (0x00053378) list_single_pane_fp_g3

0xc87b,	// (0x0005744e) list_single_pane_fp_g4_ParamLimits

0xc87b,	// (0x0005744e) list_single_pane_fp_g4

0x0003,

0xfb76,	// (0x0005a749) list_single_pane_fp_g_ParamLimits

0xfb76,	// (0x0005a749) list_single_pane_fp_g

0x7dc4,	// (0x00052997) list_single_pane_fp_t1_ParamLimits

0x7dc4,	// (0x00052997) list_single_pane_fp_t1

0x7ddb,	// (0x000529ae) list_single_graphic_pane_fp_g1_ParamLimits

0x7ddb,	// (0x000529ae) list_single_graphic_pane_fp_g1

0xc86f,	// (0x00057442) list_single_graphic_pane_fp_g2_ParamLimits

0xc86f,	// (0x00057442) list_single_graphic_pane_fp_g2

0x8732,	// (0x00053305) list_single_graphic_pane_fp_g3_ParamLimits

0x8732,	// (0x00053305) list_single_graphic_pane_fp_g3

0x87a5,	// (0x00053378) list_single_graphic_pane_fp_g4_ParamLimits

0x87a5,	// (0x00053378) list_single_graphic_pane_fp_g4

0xc87b,	// (0x0005744e) list_single_graphic_pane_fp_g5_ParamLimits

0xc87b,	// (0x0005744e) list_single_graphic_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005a752) list_single_graphic_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005a752) list_single_graphic_pane_fp_g

0x7de7,	// (0x000529ba) list_single_graphic_pane_fp_t1_ParamLimits

0x7de7,	// (0x000529ba) list_single_graphic_pane_fp_t1

0x7ddb,	// (0x000529ae) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7ddb,	// (0x000529ae) list_single_graphic_heading_pane_fp_g1

0xc86f,	// (0x00057442) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc86f,	// (0x00057442) list_single_graphic_heading_pane_fp_g2

0x8732,	// (0x00053305) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8732,	// (0x00053305) list_single_graphic_heading_pane_fp_g3

0x87a5,	// (0x00053378) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x87a5,	// (0x00053378) list_single_graphic_heading_pane_fp_g4

0xc87b,	// (0x0005744e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc87b,	// (0x0005744e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005a752) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005a752) list_single_graphic_heading_pane_fp_g

0x7dfd,	// (0x000529d0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7dfd,	// (0x000529d0) list_single_graphic_heading_pane_fp_t1

0x7e13,	// (0x000529e6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7e13,	// (0x000529e6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0005a75d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0005a75d) list_single_graphic_heading_pane_fp_t

0x7e25,	// (0x000529f8) list_single_cale_day_pane_fp_g1_ParamLimits

0x7e25,	// (0x000529f8) list_single_cale_day_pane_fp_g1

0xc887,	// (0x0005745a) list_single_cale_day_pane_fp_g2_ParamLimits

0xc887,	// (0x0005745a) list_single_cale_day_pane_fp_g2

0x7e5d,	// (0x00052a30) list_single_cale_day_pane_fp_g3_ParamLimits

0x7e5d,	// (0x00052a30) list_single_cale_day_pane_fp_g3

0x7e85,	// (0x00052a58) list_single_cale_day_pane_fp_g4_ParamLimits

0x7e85,	// (0x00052a58) list_single_cale_day_pane_fp_g4

0x7ea9,	// (0x00052a7c) list_single_cale_day_pane_fp_g5_ParamLimits

0x7ea9,	// (0x00052a7c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8f,	// (0x0005a762) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8f,	// (0x0005a762) list_single_cale_day_pane_fp_g

0x7ecd,	// (0x00052aa0) list_single_cale_day_pane_fp_t1_ParamLimits

0x7ecd,	// (0x00052aa0) list_single_cale_day_pane_fp_t1

0x7ef3,	// (0x00052ac6) list_single_cale_day_pane_fp_t2_ParamLimits

0x7ef3,	// (0x00052ac6) list_single_cale_day_pane_fp_t2

0x7f0c,	// (0x00052adf) list_single_cale_day_pane_fp_t3_ParamLimits

0x7f0c,	// (0x00052adf) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9a,	// (0x0005a76d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9a,	// (0x0005a76d) list_single_cale_day_pane_fp_t

0xc86f,	// (0x00057442) list_empty_pane_fp_g1_ParamLimits

0xc86f,	// (0x00057442) list_empty_pane_fp_g1

0x7f25,	// (0x00052af8) list_empty_pane_fp_t1

0x7f33,	// (0x00052b06) list_empty_pane_fp_t2

0x0001,

0xfba1,	// (0x0005a774) list_empty_pane_fp_t

0xc86f,	// (0x00057442) list_single_heading_pane_fp_g1_ParamLimits

0xc86f,	// (0x00057442) list_single_heading_pane_fp_g1

0x8732,	// (0x00053305) list_single_heading_pane_fp_g2_ParamLimits

0x8732,	// (0x00053305) list_single_heading_pane_fp_g2

0x87a5,	// (0x00053378) list_single_heading_pane_fp_g3_ParamLimits

0x87a5,	// (0x00053378) list_single_heading_pane_fp_g3

0x0002,

0xfba6,	// (0x0005a779) list_single_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0005a779) list_single_heading_pane_fp_g

0x7f41,	// (0x00052b14) list_single_heading_pane_fp_t1_ParamLimits

0x7f41,	// (0x00052b14) list_single_heading_pane_fp_t1

0x7f53,	// (0x00052b26) list_single_heading_pane_fp_t2_ParamLimits

0x7f53,	// (0x00052b26) list_single_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0005a780) list_single_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0005a780) list_single_heading_pane_fp_t

0x898a,	// (0x0005355d) aid_size_cell_fast

0x792b,	// (0x000524fe) soft_indicator_pane_cp1_t1

0x89c7,	// (0x0005359a) cell_app_pane_cp2_ParamLimits

0x89c7,	// (0x0005359a) cell_app_pane_cp2

0x6638,	// (0x0005120b) fep_hwr_candidate_drop_down_list_pane

0x6810,	// (0x000513e3) fep_hwr_candidate_pane_g3_ParamLimits

0x6810,	// (0x000513e3) fep_hwr_candidate_pane_g3

0x37ff,	// (0x0004e3d2) fep_hwr_candidate_pane_g4_ParamLimits

0x37ff,	// (0x0004e3d2) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x0005a6ef) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x0005a6ef) fep_hwr_candidate_pane_g

0xc378,	// (0x00056f4b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc378,	// (0x00056f4b) fep_vkb_candidate_drop_down_list_pane

0xc789,	// (0x0005735c) fep_vkb_candidate_pane_g3

0xc791,	// (0x00057364) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x0005a71c) fep_vkb_candidate_pane_g

0x687b,	// (0x0005144e) cell_hwr_candidate_pane_g1_ParamLimits

0x6889,	// (0x0005145c) cell_hwr_candidate_pane_g3_ParamLimits

0x6889,	// (0x0005145c) cell_hwr_candidate_pane_g3

0xe597,	// (0x0005916a) cell_hwr_candidate_pane_g4_ParamLimits

0xe597,	// (0x0005916a) cell_hwr_candidate_pane_g4

0x0002,

0xfb68,	// (0x0005a73b) cell_hwr_candidate_pane_g_ParamLimits

0xfb68,	// (0x0005a73b) cell_hwr_candidate_pane_g

0xc7a8,	// (0x0005737b) cell_vkb_candidate_pane_g3_ParamLimits

0xc7a8,	// (0x0005737b) cell_vkb_candidate_pane_g3

0xc7c3,	// (0x00057396) cell_vkb_candidate_pane_g4_ParamLimits

0xc7c3,	// (0x00057396) cell_vkb_candidate_pane_g4

0xc893,	// (0x00057466) cell_app_pane_cp2_g1_ParamLimits

0xc893,	// (0x00057466) cell_app_pane_cp2_g1

0xc8b1,	// (0x00057484) cell_app_pane_cp2_g2_ParamLimits

0xc8b1,	// (0x00057484) cell_app_pane_cp2_g2

0x0001,

0xfbb2,	// (0x0005a785) cell_app_pane_cp2_g_ParamLimits

0xfbb2,	// (0x0005a785) cell_app_pane_cp2_g

0xc8bd,	// (0x00057490) cell_app_pane_cp2_t1_ParamLimits

0xc8bd,	// (0x00057490) cell_app_pane_cp2_t1

0x8797,	// (0x0005336a) grid_highlight_pane_cp1_ParamLimits

0x8797,	// (0x0005336a) grid_highlight_pane_cp1

0x68c8,	// (0x0005149b) cell_hwr_candidate_pane_cp1_ParamLimits

0x68c8,	// (0x0005149b) cell_hwr_candidate_pane_cp1

0x687b,	// (0x0005144e) fep_hwr_candidate_drop_down_list_pane_g1

0x68e7,	// (0x000514ba) fep_hwr_candidate_drop_down_list_pane_g2

0x68f4,	// (0x000514c7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0005a78a) fep_hwr_candidate_drop_down_list_pane_g

0x6901,	// (0x000514d4) fep_hwr_candidate_drop_down_list_scroll_pane

0x690a,	// (0x000514dd) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x690a,	// (0x000514dd) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6917,	// (0x000514ea) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6917,	// (0x000514ea) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6924,	// (0x000514f7) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6924,	// (0x000514f7) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6931,	// (0x00051504) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6931,	// (0x00051504) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x694c,	// (0x0005151f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x694c,	// (0x0005151f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6967,	// (0x0005153a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6967,	// (0x0005153a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6982,	// (0x00051555) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6982,	// (0x00051555) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x699d,	// (0x00051570) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x699d,	// (0x00051570) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0005a791) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0005a791) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc8cf,	// (0x000574a2) cell_vkb_candidate_pane_cp1_ParamLimits

0xc8cf,	// (0x000574a2) cell_vkb_candidate_pane_cp1

0xc491,	// (0x00057064) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc491,	// (0x00057064) fep_vkb_candidate_drop_down_list_pane_g1

0xc8ef,	// (0x000574c2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc8ef,	// (0x000574c2) fep_vkb_candidate_drop_down_list_pane_g2

0xc8fc,	// (0x000574cf) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc8fc,	// (0x000574cf) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcf,	// (0x0005a7a2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcf,	// (0x0005a7a2) fep_vkb_candidate_drop_down_list_pane_g

0xc909,	// (0x000574dc) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc909,	// (0x000574dc) fep_vkb_candidate_drop_down_list_scroll_pane

0xc916,	// (0x000574e9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc916,	// (0x000574e9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc923,	// (0x000574f6) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc923,	// (0x000574f6) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc92f,	// (0x00057502) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc92f,	// (0x00057502) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc93b,	// (0x0005750e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc93b,	// (0x0005750e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc95c,	// (0x0005752f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc95c,	// (0x0005752f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc97d,	// (0x00057550) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc97d,	// (0x00057550) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc99e,	// (0x00057571) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc99e,	// (0x00057571) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc9bf,	// (0x00057592) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc9bf,	// (0x00057592) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x0005a7a9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x0005a7a9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x765c,	// (0x0005222f) title_pane_g1_ParamLimits

0x7669,	// (0x0005223c) title_pane_g2_ParamLimits

0xf54e,	// (0x0005a121) title_pane_g_ParamLimits

0x8dfd,	// (0x000539d0) aid_call2_pane

0x8e05,	// (0x000539d8) aid_call_pane

0x8e0d,	// (0x000539e0) popup_clock_analogue_window_g1

0x8e0d,	// (0x000539e0) popup_clock_analogue_window_g2

0x5477,	// (0x0005004a) popup_clock_analogue_window_g3

0x5480,	// (0x00050053) popup_clock_analogue_window_g4

0x7648,	// (0x0005221b) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0005a2d0) popup_clock_analogue_window_g

0x5488,	// (0x0005005b) popup_clock_analogue_window_t1

0x5496,	// (0x00050069) clock_digital_number_pane_ParamLimits

0x5496,	// (0x00050069) clock_digital_number_pane

0x54a2,	// (0x00050075) clock_digital_number_pane_cp02_ParamLimits

0x54a2,	// (0x00050075) clock_digital_number_pane_cp02

0x54ae,	// (0x00050081) clock_digital_number_pane_cp03_ParamLimits

0x54ae,	// (0x00050081) clock_digital_number_pane_cp03

0x54ba,	// (0x0005008d) clock_digital_number_pane_cp04_ParamLimits

0x54ba,	// (0x0005008d) clock_digital_number_pane_cp04

0x54c6,	// (0x00050099) clock_digital_separator_pane_ParamLimits

0x54c6,	// (0x00050099) clock_digital_separator_pane

0x54d2,	// (0x000500a5) popup_clock_digital_window_t1_ParamLimits

0x54d2,	// (0x000500a5) popup_clock_digital_window_t1

0x7648,	// (0x0005221b) clock_digital_number_pane_g1

0x7648,	// (0x0005221b) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005a2db) clock_digital_number_pane_g

0x7648,	// (0x0005221b) clock_digital_separator_pane_g1

0x7648,	// (0x0005221b) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005a2db) clock_digital_separator_pane_g

0x978c,	// (0x0005435f) aid_fill_nsta_ParamLimits

0x98d2,	// (0x000544a5) indicator_nsta_pane_ParamLimits

0x9a4b,	// (0x0005461e) popup_clock_analogue_window

0x9a4b,	// (0x0005461e) popup_clock_digital_window

0x7732,	// (0x00052305) grid_indicator_nsta_pane_ParamLimits

0xbc2b,	// (0x000567fe) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x0005a66f) clock_nsta_pane_t

0x543b,	// (0x0005000e) aid_size_max_handle

0x5445,	// (0x00050018) aid_size_min_handle

0x9420,	// (0x00053ff3) editor_scroll_pane

0xc9da,	// (0x000575ad) ex_editor_pane

0x88f8,	// (0x000534cb) scroll_pane_cp13

0x872a,	// (0x000532fd) scroll_pane_cp14

0x8e3c,	// (0x00053a0f) scroll_pane_cp36

0x8e68,	// (0x00053a3b) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e68,	// (0x00053a3b) list_single_graphic_hl_pane_cp2

0x63dd,	// (0x00050fb0) list_single_graphic_hl_pane_ParamLimits

0x63dd,	// (0x00050fb0) list_single_graphic_hl_pane

0x7f69,	// (0x00052b3c) aid_size_min_hl_cp1

0xc9e2,	// (0x000575b5) list_highlight_pane_cp34_ParamLimits

0xc9e2,	// (0x000575b5) list_highlight_pane_cp34

0xc9f3,	// (0x000575c6) list_single_graphic_hl_pane_g1_ParamLimits

0xc9f3,	// (0x000575c6) list_single_graphic_hl_pane_g1

0x7f72,	// (0x00052b45) list_single_graphic_hl_pane_g2_ParamLimits

0x7f72,	// (0x00052b45) list_single_graphic_hl_pane_g2

0x7f72,	// (0x00052b45) list_single_graphic_hl_pane_g3_ParamLimits

0x7f72,	// (0x00052b45) list_single_graphic_hl_pane_g3

0x9391,	// (0x00053f64) list_single_graphic_hl_pane_g4_ParamLimits

0x9391,	// (0x00053f64) list_single_graphic_hl_pane_g4

0x7f7e,	// (0x00052b51) list_single_graphic_hl_pane_g5_ParamLimits

0x7f7e,	// (0x00052b51) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x0005a7ba) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x0005a7ba) list_single_graphic_hl_pane_g

0x7f92,	// (0x00052b65) list_single_graphic_hl_pane_t1_ParamLimits

0x7f92,	// (0x00052b65) list_single_graphic_hl_pane_t1

0xca00,	// (0x000575d3) aid_size_min_hl_cp2

0xca09,	// (0x000575dc) list_highlight_pane_cp34_cp2_ParamLimits

0xca09,	// (0x000575dc) list_highlight_pane_cp34_cp2

0xc9f3,	// (0x000575c6) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc9f3,	// (0x000575c6) list_single_graphic_hl_pane_g1_cp2

0xca16,	// (0x000575e9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca16,	// (0x000575e9) list_single_graphic_hl_pane_g2_cp2

0xca22,	// (0x000575f5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca22,	// (0x000575f5) list_single_graphic_hl_pane_g3_cp2

0xca30,	// (0x00057603) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xca30,	// (0x00057603) list_single_graphic_hl_pane_g4_cp2

0xca3c,	// (0x0005760f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xca3c,	// (0x0005760f) list_single_graphic_hl_pane_g5_cp2

0x57f4,	// (0x000503c7) control_pane_g4_ParamLimits

0x57f4,	// (0x000503c7) control_pane_g4

0x9744,	// (0x00054317) bg_popup_sub_pane_cp10_ParamLimits

0xc21d,	// (0x00056df0) list_choice_list_pane_ParamLimits

0xc22c,	// (0x00056dff) scroll_pane_cp23

0x817f,	// (0x00052d52) bg_popup_preview_window_pane_cp02_ParamLimits

0xc814,	// (0x000573e7) list_preview_fixed_pane_ParamLimits

0xc82a,	// (0x000573fd) list_preview_fixed_pane_cp_ParamLimits

0xc82a,	// (0x000573fd) list_preview_fixed_pane_cp

0xc836,	// (0x00057409) popup_preview_fixed_window_g1_ParamLimits

0xc836,	// (0x00057409) popup_preview_fixed_window_g1

0xc842,	// (0x00057415) popup_preview_fixed_window_g2_ParamLimits

0xc842,	// (0x00057415) popup_preview_fixed_window_g2

0x0002,

0xfb6f,	// (0x0005a742) popup_preview_fixed_window_g_ParamLimits

0xfb6f,	// (0x0005a742) popup_preview_fixed_window_g

0x53af,	// (0x0004ff82) aid_navi_side_left_pane_ParamLimits

0x53c4,	// (0x0004ff97) aid_navi_side_right_pane_ParamLimits

0x53dc,	// (0x0004ffaf) navi_icon_pane_stacon_ParamLimits

0x53f0,	// (0x0004ffc3) navi_navi_pane_stacon_ParamLimits

0x53dc,	// (0x0004ffaf) navi_text_pane_stacon_ParamLimits

0x48f4,	// (0x0004f4c7) main_text_info_pane

0xca66,	// (0x00057639) listscroll_text_info_pane

0xca6e,	// (0x00057641) list_text_info_pane_ParamLimits

0xca6e,	// (0x00057641) list_text_info_pane

0xca7d,	// (0x00057650) scroll_pane_cp24_ParamLimits

0xca7d,	// (0x00057650) scroll_pane_cp24

0xca9b,	// (0x0005766e) list_text_info_pane_t1_ParamLimits

0xca9b,	// (0x0005766e) list_text_info_pane_t1

0x5972,	// (0x00050545) popup_fast_swap2_window_ParamLimits

0x5972,	// (0x00050545) popup_fast_swap2_window

0xcacc,	// (0x0005769f) aid_size_cell_fast2

0x763e,	// (0x00052211) bg_popup_window_pane_cp17

0xa0d4,	// (0x00054ca7) heading_pane_cp2

0x83f4,	// (0x00052fc7) listscroll_fast2_pane

0xcad6,	// (0x000576a9) grid_fast2_pane

0xcae0,	// (0x000576b3) listscroll_fast2_pane_g1

0xcae8,	// (0x000576bb) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x0005a7c5) listscroll_fast2_pane_g

0x88f8,	// (0x000534cb) scroll_pane_cp26

0xcaf2,	// (0x000576c5) cell_fast2_pane_ParamLimits

0xcaf2,	// (0x000576c5) cell_fast2_pane

0xcb07,	// (0x000576da) cell_fast2_pane_g1

0xcb10,	// (0x000576e3) cell_fast2_pane_g2

0xcb19,	// (0x000576ec) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x0005a7ca) cell_fast2_pane_g

0x84e7,	// (0x000530ba) grid_highlight_pane_cp9

0x5930,	// (0x00050503) main_eswt_pane_ParamLimits

0x5930,	// (0x00050503) main_eswt_pane

0xca92,	// (0x00057665) list_single_text_info_pane

0xcb21,	// (0x000576f4) eswt_ctrl_button_pane

0xcb21,	// (0x000576f4) eswt_ctrl_canvas_pane

0xcb29,	// (0x000576fc) eswt_ctrl_combo_pane

0xcb21,	// (0x000576f4) eswt_ctrl_default_pane

0xcb21,	// (0x000576f4) eswt_ctrl_label_pane

0xcb31,	// (0x00057704) eswt_ctrl_wait_pane

0xcb39,	// (0x0005770c) eswt_shell_pane

0x763e,	// (0x00052211) listscroll_eswt_app_pane

0xcb59,	// (0x0005772c) popup_eswt_tasktip_window_ParamLimits

0xcb59,	// (0x0005772c) popup_eswt_tasktip_window

0x9ce8,	// (0x000548bb) bg_popup_window_pane_cp18

0xcb6a,	// (0x0005773d) eswt_control_pane_g1_ParamLimits

0xcb6a,	// (0x0005773d) eswt_control_pane_g1

0xcb77,	// (0x0005774a) eswt_control_pane_g2_ParamLimits

0xcb77,	// (0x0005774a) eswt_control_pane_g2

0xcb84,	// (0x00057757) eswt_control_pane_g3_ParamLimits

0xcb84,	// (0x00057757) eswt_control_pane_g3

0xcb91,	// (0x00057764) eswt_control_pane_g4_ParamLimits

0xcb91,	// (0x00057764) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x0005a7d1) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x0005a7d1) eswt_control_pane_g

0x8797,	// (0x0005336a) bg_button_pane_ParamLimits

0x8797,	// (0x0005336a) bg_button_pane

0x84fc,	// (0x000530cf) common_borders_pane_copy2_ParamLimits

0x84fc,	// (0x000530cf) common_borders_pane_copy2

0xcb9e,	// (0x00057771) control_button_pane_g1_ParamLimits

0xcb9e,	// (0x00057771) control_button_pane_g1

0xcbaa,	// (0x0005777d) control_button_pane_g2_ParamLimits

0xcbaa,	// (0x0005777d) control_button_pane_g2

0xcbb6,	// (0x00057789) control_button_pane_g3_ParamLimits

0xcbb6,	// (0x00057789) control_button_pane_g3

0x0002,

0xfc07,	// (0x0005a7da) control_button_pane_g_ParamLimits

0xfc07,	// (0x0005a7da) control_button_pane_g

0xcbca,	// (0x0005779d) control_button_pane_t1

0xcbd8,	// (0x000577ab) control_button_pane_t2

0x0001,

0xfc0e,	// (0x0005a7e1) control_button_pane_t

0x9c74,	// (0x00054847) bg_button_pane_g1

0x9c84,	// (0x00054857) bg_button_pane_g2

0x9c7c,	// (0x0005484f) bg_button_pane_g3

0x9c94,	// (0x00054867) bg_button_pane_g4

0x9c8c,	// (0x0005485f) bg_button_pane_g5

0x9c9c,	// (0x0005486f) bg_button_pane_g6

0x9ca4,	// (0x00054877) bg_button_pane_g7

0x9cb4,	// (0x00054887) bg_button_pane_g8

0x9cac,	// (0x0005487f) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0005a43e) bg_button_pane_g

0xc1d8,	// (0x00056dab) common_borders_pane_ParamLimits

0xc1d8,	// (0x00056dab) common_borders_pane

0xcb6a,	// (0x0005773d) eswt_control_pane_g1_copy1_ParamLimits

0xcb6a,	// (0x0005773d) eswt_control_pane_g1_copy1

0xcb77,	// (0x0005774a) eswt_control_pane_g2_copy1_ParamLimits

0xcb77,	// (0x0005774a) eswt_control_pane_g2_copy1

0xcb84,	// (0x00057757) eswt_control_pane_g3_copy1_ParamLimits

0xcb84,	// (0x00057757) eswt_control_pane_g3_copy1

0xcb91,	// (0x00057764) eswt_control_pane_g4_copy1_ParamLimits

0xcb91,	// (0x00057764) eswt_control_pane_g4_copy1

0xc213,	// (0x00056de6) bg_eswt_ctrl_canvas_pane_g1

0xc1d8,	// (0x00056dab) common_borders_pane_cp2_ParamLimits

0xc1d8,	// (0x00056dab) common_borders_pane_cp2

0xc1d8,	// (0x00056dab) common_borders_pane_cp3_ParamLimits

0xc1d8,	// (0x00056dab) common_borders_pane_cp3

0xcbe6,	// (0x000577b9) separator_horizontal_pane

0xcbee,	// (0x000577c1) separator_vertical_pane

0xcb6a,	// (0x0005773d) eswt_control_pane_g1_copy2_ParamLimits

0xcb6a,	// (0x0005773d) eswt_control_pane_g1_copy2

0xcb77,	// (0x0005774a) eswt_control_pane_g2_copy2_ParamLimits

0xcb77,	// (0x0005774a) eswt_control_pane_g2_copy2

0xcb84,	// (0x00057757) eswt_control_pane_g3_copy2_ParamLimits

0xcb84,	// (0x00057757) eswt_control_pane_g3_copy2

0xcb91,	// (0x00057764) eswt_control_pane_g4_copy2_ParamLimits

0xcb91,	// (0x00057764) eswt_control_pane_g4_copy2

0x763e,	// (0x00052211) common_borders_pane_cp4

0xcbf7,	// (0x000577ca) separator_horizontal_pane_g1

0xcc00,	// (0x000577d3) separator_horizontal_pane_g2

0xcc09,	// (0x000577dc) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x0005a7e6) separator_horizontal_pane_g

0xcb6a,	// (0x0005773d) eswt_control_pane_g1_copy3_ParamLimits

0xcb6a,	// (0x0005773d) eswt_control_pane_g1_copy3

0xcb77,	// (0x0005774a) eswt_control_pane_g2_copy3_ParamLimits

0xcb77,	// (0x0005774a) eswt_control_pane_g2_copy3

0xcb84,	// (0x00057757) eswt_control_pane_g3_copy3_ParamLimits

0xcb84,	// (0x00057757) eswt_control_pane_g3_copy3

0xcb91,	// (0x00057764) eswt_control_pane_g4_copy3_ParamLimits

0xcb91,	// (0x00057764) eswt_control_pane_g4_copy3

0x763e,	// (0x00052211) common_borders_pane_cp5

0xcc12,	// (0x000577e5) separator_vertical_pane_g1

0xcc1b,	// (0x000577ee) separator_vertical_pane_g2

0xcc24,	// (0x000577f7) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x0005a7ed) separator_vertical_pane_g

0xcb6a,	// (0x0005773d) eswt_control_pane_g1_copy4_ParamLimits

0xcb6a,	// (0x0005773d) eswt_control_pane_g1_copy4

0xcb77,	// (0x0005774a) eswt_control_pane_g2_copy4_ParamLimits

0xcb77,	// (0x0005774a) eswt_control_pane_g2_copy4

0xcb84,	// (0x00057757) eswt_control_pane_g3_copy4_ParamLimits

0xcb84,	// (0x00057757) eswt_control_pane_g3_copy4

0xcb91,	// (0x00057764) eswt_control_pane_g4_copy4_ParamLimits

0xcb91,	// (0x00057764) eswt_control_pane_g4_copy4

0xcc2d,	// (0x00057800) eswt_ctrl_combo_button_pane

0xcc35,	// (0x00057808) eswt_ctrl_input_pane

0xcc3d,	// (0x00057810) popup_choice_list_window_cp70

0xcc45,	// (0x00057818) eswt_ctrl_input_pane_t1

0x763e,	// (0x00052211) input_focus_pane_cp70

0xc1d8,	// (0x00056dab) bg_button_pane_cp70_ParamLimits

0xc1d8,	// (0x00056dab) bg_button_pane_cp70

0xcc53,	// (0x00057826) eswt_ctrl_combo_button_pane_g1

0xcc5b,	// (0x0005782e) wait_bar_pane_cp70

0x9ce8,	// (0x000548bb) bg_popup_window_pane_cp70_ParamLimits

0x9ce8,	// (0x000548bb) bg_popup_window_pane_cp70

0xcc63,	// (0x00057836) popup_eswt_tasktip_window_t1

0xcc79,	// (0x0005784c) wait_bar_pane_cp71_ParamLimits

0xcc79,	// (0x0005784c) wait_bar_pane_cp71

0xcc85,	// (0x00057858) grid_eswt_app_pane

0x8c16,	// (0x000537e9) scroll_pane_cp70

0xcc8e,	// (0x00057861) cell_eswt_app_pane_ParamLimits

0xcc8e,	// (0x00057861) cell_eswt_app_pane

0xccbe,	// (0x00057891) cell_eswt_app_pane_g1_ParamLimits

0xccbe,	// (0x00057891) cell_eswt_app_pane_g1

0xcced,	// (0x000578c0) cell_eswt_app_pane_g2_ParamLimits

0xcced,	// (0x000578c0) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x0005a7f4) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x0005a7f4) cell_eswt_app_pane_g

0xcd16,	// (0x000578e9) cell_eswt_app_pane_t1_ParamLimits

0xcd16,	// (0x000578e9) cell_eswt_app_pane_t1

0xcd48,	// (0x0005791b) grid_highlight_pane_cp70_ParamLimits

0xcd48,	// (0x0005791b) grid_highlight_pane_cp70

0x92f5,	// (0x00053ec8) set_content_pane_g1

0x96cb,	// (0x0005429e) status_small_volume_pane

0x69b8,	// (0x0005158b) status_small_volume_pane_g1

0x69c0,	// (0x00051593) volume_small2_pane

0x69c9,	// (0x0005159c) volume_small2_pane_g1

0x69d2,	// (0x000515a5) volume_small2_pane_g2

0x69db,	// (0x000515ae) volume_small2_pane_g3

0x69e4,	// (0x000515b7) volume_small2_pane_g4

0x69ed,	// (0x000515c0) volume_small2_pane_g5

0x69f6,	// (0x000515c9) volume_small2_pane_g6

0x69ff,	// (0x000515d2) volume_small2_pane_g7

0x6a08,	// (0x000515db) volume_small2_pane_g8

0x6a11,	// (0x000515e4) volume_small2_pane_g9

0x6a1a,	// (0x000515ed) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x0005a7f9) volume_small2_pane_g

0xc5d9,	// (0x000571ac) fep_vkb_top_text_pane_g1_ParamLimits

0xc5f4,	// (0x000571c7) fep_vkb_top_text_pane_t1_ParamLimits

0xc84e,	// (0x00057421) popup_preview_fixed_window_g3_ParamLimits

0xc84e,	// (0x00057421) popup_preview_fixed_window_g3

0x5e21,	// (0x000509f4) popup_toolbar_trans_pane

0xb039,	// (0x00055c0c) aid_height_set_list_ParamLimits

0xb04a,	// (0x00055c1d) aid_size_parent_ParamLimits

0x9744,	// (0x00054317) list_highlight_pane_cp2_ParamLimits

0x92f5,	// (0x00053ec8) set_content_pane_g1_ParamLimits

0x63f8,	// (0x00050fcb) list_single_image_pane_ParamLimits

0x63f8,	// (0x00050fcb) list_single_image_pane

0xcd54,	// (0x00057927) aid_size_cell_image_ParamLimits

0xcd54,	// (0x00057927) aid_size_cell_image

0xcd61,	// (0x00057934) grid_single_image_pane_ParamLimits

0xcd61,	// (0x00057934) grid_single_image_pane

0x976a,	// (0x0005433d) list_single_image_pane_g1_ParamLimits

0x976a,	// (0x0005433d) list_single_image_pane_g1

0xcd6d,	// (0x00057940) list_single_image_pane_g2_ParamLimits

0xcd6d,	// (0x00057940) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x0005a80e) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x0005a80e) list_single_image_pane_g

0xcd81,	// (0x00057954) list_single_image_pane_t1_ParamLimits

0xcd81,	// (0x00057954) list_single_image_pane_t1

0xcd97,	// (0x0005796a) cell_image_list_pane_ParamLimits

0xcd97,	// (0x0005796a) cell_image_list_pane

0xcdab,	// (0x0005797e) cell_image_list_pane_g1

0xcdb4,	// (0x00057987) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x0005a813) cell_image_list_pane_g

0xcdbd,	// (0x00057990) aid_size_cell_tb_trans_pane

0x8797,	// (0x0005336a) bg_tb_trans_pane

0xcdcf,	// (0x000579a2) grid_tb_trans_pane

0x9c74,	// (0x00054847) bg_tb_trans_pane_g1

0x9c84,	// (0x00054857) bg_tb_trans_pane_g2

0x9c7c,	// (0x0005484f) bg_tb_trans_pane_g3

0x9c94,	// (0x00054867) bg_tb_trans_pane_g4

0x9c8c,	// (0x0005485f) bg_tb_trans_pane_g5

0x9cb4,	// (0x00054887) bg_tb_trans_pane_g6

0x9cac,	// (0x0005487f) bg_tb_trans_pane_g7

0x9c9c,	// (0x0005486f) bg_tb_trans_pane_g8

0x9ca4,	// (0x00054877) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x0005a818) bg_tb_trans_pane_g

0xcde3,	// (0x000579b6) cell_toolbar_trans_pane_ParamLimits

0xcde3,	// (0x000579b6) cell_toolbar_trans_pane

0xc213,	// (0x00056de6) cell_toolbar_trans_pane_g1

0xbde8,	// (0x000569bb) list_form2_midp_pane_t1

0xbdf6,	// (0x000569c9) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x0005a6b5) list_form2_midp_pane_t

0xbe04,	// (0x000569d7) scroll_pane_cp51_ParamLimits

0xbfc0,	// (0x00056b93) form2_midp_wait_pane_g1

0xbfc9,	// (0x00056b9c) form2_midp_wait_pane_g2

0xbfd2,	// (0x00056ba5) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x0005a6ca) form2_midp_wait_pane_g

0x7732,	// (0x00052305) list_highlight_pane_cp21_ParamLimits

0xc01e,	// (0x00056bf1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc02d,	// (0x00056c00) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7a84,	// (0x00052657) list_single_2graphic_im_pane_ParamLimits

0x7a84,	// (0x00052657) list_single_2graphic_im_pane

0xce09,	// (0x000579dc) list_single_2graphic_im_pane_g1_ParamLimits

0xce09,	// (0x000579dc) list_single_2graphic_im_pane_g1

0xce1a,	// (0x000579ed) list_single_2graphic_im_pane_g2_ParamLimits

0xce1a,	// (0x000579ed) list_single_2graphic_im_pane_g2

0xce26,	// (0x000579f9) list_single_2graphic_im_pane_g3_ParamLimits

0xce26,	// (0x000579f9) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x0005a82b) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x0005a82b) list_single_2graphic_im_pane_g

0xce46,	// (0x00057a19) list_single_2graphic_im_pane_t1_ParamLimits

0xce46,	// (0x00057a19) list_single_2graphic_im_pane_t1

0xc85a,	// (0x0005742d) list_single_graphic_2heading_pane_fp_ParamLimits

0xc85a,	// (0x0005742d) list_single_graphic_2heading_pane_fp

0x7ddb,	// (0x000529ae) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7ddb,	// (0x000529ae) list_single_graphic_2heading_pane_fp_g1

0xc86f,	// (0x00057442) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc86f,	// (0x00057442) list_single_graphic_2heading_pane_fp_g2

0x8732,	// (0x00053305) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8732,	// (0x00053305) list_single_graphic_2heading_pane_fp_g3

0x87a5,	// (0x00053378) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x87a5,	// (0x00053378) list_single_graphic_2heading_pane_fp_g4

0xc87b,	// (0x0005744e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc87b,	// (0x0005744e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005a752) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005a752) list_single_graphic_2heading_pane_fp_g

0x7fa8,	// (0x00052b7b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7fa8,	// (0x00052b7b) list_single_graphic_2heading_pane_fp_t1

0x7e13,	// (0x000529e6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7e13,	// (0x000529e6) list_single_graphic_2heading_pane_fp_t2

0x7fbe,	// (0x00052b91) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7fbe,	// (0x00052b91) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x0005a834) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x0005a834) list_single_graphic_2heading_pane_fp_t

0xc29f,	// (0x00056e72) fep_hwr_write_pane_g5_ParamLimits

0xc29f,	// (0x00056e72) fep_hwr_write_pane_g5

0xc2ab,	// (0x00056e7e) fep_hwr_write_pane_g6_ParamLimits

0xc2ab,	// (0x00056e7e) fep_hwr_write_pane_g6

0xcb39,	// (0x0005770c) eswt_shell_pane_ParamLimits

0x9ce8,	// (0x000548bb) bg_popup_window_pane_cp18_ParamLimits

0xaf92,	// (0x00055b65) heading_pane_cp70

0xcc63,	// (0x00057836) popup_eswt_tasktip_window_t1_ParamLimits

0x97e1,	// (0x000543b4) aid_touch_tab_arrow_left

0x97f0,	// (0x000543c3) aid_touch_tab_arrow_right

0x767a,	// (0x0005224d) title_pane_g3_ParamLimits

0x767a,	// (0x0005224d) title_pane_g3

0x8756,	// (0x00053329) set_value_pane_g1

0x5e21,	// (0x000509f4) popup_toolbar_trans_pane_ParamLimits

0xcdbd,	// (0x00057990) aid_size_cell_tb_trans_pane_ParamLimits

0x8797,	// (0x0005336a) bg_tb_trans_pane_ParamLimits

0xcdcf,	// (0x000579a2) grid_tb_trans_pane_ParamLimits

0x817f,	// (0x00052d52) cont_note_pane_ParamLimits

0x817f,	// (0x00052d52) cont_note_pane

0x84fc,	// (0x000530cf) cont_snote2_single_text_pane_ParamLimits

0x84fc,	// (0x000530cf) cont_snote2_single_text_pane

0x84fc,	// (0x000530cf) cont_snote2_single_graphic_pane_ParamLimits

0x84fc,	// (0x000530cf) cont_snote2_single_graphic_pane

0xa2fb,	// (0x00054ece) cont_note_wait_pane_ParamLimits

0xa2fb,	// (0x00054ece) cont_note_wait_pane

0xa2fb,	// (0x00054ece) cont_note_image_pane_ParamLimits

0xa2fb,	// (0x00054ece) cont_note_image_pane

0xce77,	// (0x00057a4a) popup_note2_window_g1_ParamLimits

0xce77,	// (0x00057a4a) popup_note2_window_g1

0xcea8,	// (0x00057a7b) popup_note2_window_t1_ParamLimits

0xcea8,	// (0x00057a7b) popup_note2_window_t1

0xceed,	// (0x00057ac0) popup_note2_window_t2_ParamLimits

0xceed,	// (0x00057ac0) popup_note2_window_t2

0xcf32,	// (0x00057b05) popup_note2_window_t3_ParamLimits

0xcf32,	// (0x00057b05) popup_note2_window_t3

0xcf77,	// (0x00057b4a) popup_note2_window_t4_ParamLimits

0xcf77,	// (0x00057b4a) popup_note2_window_t4

0x8203,	// (0x00052dd6) popup_note2_window_t5_ParamLimits

0x8203,	// (0x00052dd6) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x0005a840) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x0005a840) popup_note2_window_t

0xcfa6,	// (0x00057b79) popup_note2_image_window_g1_ParamLimits

0xcfa6,	// (0x00057b79) popup_note2_image_window_g1

0xcfb2,	// (0x00057b85) popup_note2_image_window_g2_ParamLimits

0xcfb2,	// (0x00057b85) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x0005a84b) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x0005a84b) popup_note2_image_window_g

0xcfc4,	// (0x00057b97) popup_note2_image_window_t1_ParamLimits

0xcfc4,	// (0x00057b97) popup_note2_image_window_t1

0xcfdc,	// (0x00057baf) popup_note2_image_window_t2_ParamLimits

0xcfdc,	// (0x00057baf) popup_note2_image_window_t2

0xcff4,	// (0x00057bc7) popup_note2_image_window_t3_ParamLimits

0xcff4,	// (0x00057bc7) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x0005a850) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x0005a850) popup_note2_image_window_t

0xa309,	// (0x00054edc) popup_note2_wait_window_g1_ParamLimits

0xa309,	// (0x00054edc) popup_note2_wait_window_g1

0xd010,	// (0x00057be3) popup_note2_wait_window_g2_ParamLimits

0xd010,	// (0x00057be3) popup_note2_wait_window_g2

0xa321,	// (0x00054ef4) popup_note2_wait_window_g3_ParamLimits

0xa321,	// (0x00054ef4) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x0005a857) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x0005a857) popup_note2_wait_window_g

0xd01c,	// (0x00057bef) popup_note2_wait_window_t1_ParamLimits

0xd01c,	// (0x00057bef) popup_note2_wait_window_t1

0xd03a,	// (0x00057c0d) popup_note2_wait_window_t2_ParamLimits

0xd03a,	// (0x00057c0d) popup_note2_wait_window_t2

0xd058,	// (0x00057c2b) popup_note2_wait_window_t3_ParamLimits

0xd058,	// (0x00057c2b) popup_note2_wait_window_t3

0xd06a,	// (0x00057c3d) popup_note2_wait_window_t4_ParamLimits

0xd06a,	// (0x00057c3d) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x0005a85e) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x0005a85e) popup_note2_wait_window_t

0xd07c,	// (0x00057c4f) wait_bar2_pane_ParamLimits

0xd07c,	// (0x00057c4f) wait_bar2_pane

0xd094,	// (0x00057c67) popup_snote2_single_text_window_g1_ParamLimits

0xd094,	// (0x00057c67) popup_snote2_single_text_window_g1

0xd0bc,	// (0x00057c8f) popup_snote2_single_text_window_t1_ParamLimits

0xd0bc,	// (0x00057c8f) popup_snote2_single_text_window_t1

0xd108,	// (0x00057cdb) popup_snote2_single_text_window_t2_ParamLimits

0xd108,	// (0x00057cdb) popup_snote2_single_text_window_t2

0xd154,	// (0x00057d27) popup_snote2_single_text_window_t3_ParamLimits

0xd154,	// (0x00057d27) popup_snote2_single_text_window_t3

0xd195,	// (0x00057d68) popup_snote2_single_text_window_t4_ParamLimits

0xd195,	// (0x00057d68) popup_snote2_single_text_window_t4

0xd1cb,	// (0x00057d9e) popup_snote2_single_text_window_t5_ParamLimits

0xd1cb,	// (0x00057d9e) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x0005a867) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x0005a867) popup_snote2_single_text_window_t

0xd1f6,	// (0x00057dc9) popup_snote2_single_graphic_window_g1_ParamLimits

0xd1f6,	// (0x00057dc9) popup_snote2_single_graphic_window_g1

0xd21e,	// (0x00057df1) popup_snote2_single_graphic_window_g2_ParamLimits

0xd21e,	// (0x00057df1) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x0005a872) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x0005a872) popup_snote2_single_graphic_window_g

0xd246,	// (0x00057e19) popup_snote2_single_graphic_window_t1_ParamLimits

0xd246,	// (0x00057e19) popup_snote2_single_graphic_window_t1

0xd292,	// (0x00057e65) popup_snote2_single_graphic_window_t2_ParamLimits

0xd292,	// (0x00057e65) popup_snote2_single_graphic_window_t2

0xd154,	// (0x00057d27) popup_snote2_single_graphic_window_t3_ParamLimits

0xd154,	// (0x00057d27) popup_snote2_single_graphic_window_t3

0xd195,	// (0x00057d68) popup_snote2_single_graphic_window_t4_ParamLimits

0xd195,	// (0x00057d68) popup_snote2_single_graphic_window_t4

0xd1cb,	// (0x00057d9e) popup_snote2_single_graphic_window_t5_ParamLimits

0xd1cb,	// (0x00057d9e) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x0005a877) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x0005a877) popup_snote2_single_graphic_window_t

0xbcc5,	// (0x00056898) clock_nsta_pane_cp2_t1

0xbcc5,	// (0x00056898) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x0005a68b) clock_nsta_pane_cp2_t

0x512d,	// (0x0004fd00) form_field_data_wide_pane_g1_ParamLimits

0x8732,	// (0x00053305) form_field_data_wide_pane_g2_ParamLimits

0x8732,	// (0x00053305) form_field_data_wide_pane_g2

0x87a5,	// (0x00053378) form_field_data_wide_pane_g3_ParamLimits

0x87a5,	// (0x00053378) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005a253) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005a253) form_field_data_wide_pane_g

0xbbc7,	// (0x0005679a) grid_touch_3_pane_ParamLimits

0xbbc7,	// (0x0005679a) grid_touch_3_pane

0xd2de,	// (0x00057eb1) cell_touch_3_pane_ParamLimits

0xd2de,	// (0x00057eb1) cell_touch_3_pane

0xc213,	// (0x00056de6) cell_touch_3_pane_g1

0xc213,	// (0x00056de6) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x0005a710) cell_touch_3_pane_g

0x825b,	// (0x00052e2e) cont_query_data_pane

0x8263,	// (0x00052e36) cont_query_data_pane_cp1

0xd30c,	// (0x00057edf) button_value_adjust_pane_cp7

0xd314,	// (0x00057ee7) query_popup_pane_cp3

0x8efd,	// (0x00053ad0) bg_popup_sub_pane_cp22_ParamLimits

0x54f1,	// (0x000500c4) navi_navi_volume_pane_cp2

0x550c,	// (0x000500df) popup_side_volume_key_window_g2

0x551b,	// (0x000500ee) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005a2e9) popup_side_volume_key_window_g

0x5538,	// (0x0005010b) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005a2f0) popup_side_volume_key_window_t

0x91b4,	// (0x00053d87) popup_side_volume_key_window_ParamLimits

0x4d75,	// (0x0004f948) list_double_graphic_pane_g4_ParamLimits

0x4d75,	// (0x0004f948) list_double_graphic_pane_g4

0x7ac1,	// (0x00052694) list_single_2heading_msg_pane_ParamLimits

0x7ac1,	// (0x00052694) list_single_2heading_msg_pane

0x7fde,	// (0x00052bb1) list_single_2heading_msg_pane_g1_ParamLimits

0x7fde,	// (0x00052bb1) list_single_2heading_msg_pane_g1

0x9359,	// (0x00053f2c) list_single_2heading_msg_pane_g2_ParamLimits

0x9359,	// (0x00053f2c) list_single_2heading_msg_pane_g2

0x7b21,	// (0x000526f4) list_single_2heading_msg_pane_g3_ParamLimits

0x7b21,	// (0x000526f4) list_single_2heading_msg_pane_g3

0x7fea,	// (0x00052bbd) list_single_2heading_msg_pane_g4_ParamLimits

0x7fea,	// (0x00052bbd) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x0005a882) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x0005a882) list_single_2heading_msg_pane_g

0x8002,	// (0x00052bd5) list_single_2heading_msg_pane_t1_ParamLimits

0x8002,	// (0x00052bd5) list_single_2heading_msg_pane_t1

0x802a,	// (0x00052bfd) list_single_2heading_msg_pane_t2_ParamLimits

0x802a,	// (0x00052bfd) list_single_2heading_msg_pane_t2

0x805e,	// (0x00052c31) list_single_2heading_msg_pane_t3_ParamLimits

0x805e,	// (0x00052c31) list_single_2heading_msg_pane_t3

0x8097,	// (0x00052c6a) list_single_2heading_msg_pane_t4_ParamLimits

0x8097,	// (0x00052c6a) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x0005a88b) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x0005a88b) list_single_2heading_msg_pane_t

0x7686,	// (0x00052259) title_pane_g4_ParamLimits

0x7686,	// (0x00052259) title_pane_g4

0x5300,	// (0x0004fed3) title_pane_stacon_g3_ParamLimits

0x5300,	// (0x0004fed3) title_pane_stacon_g3

0xce3a,	// (0x00057a0d) list_single_2graphic_im_pane_g4_ParamLimits

0xce3a,	// (0x00057a0d) list_single_2graphic_im_pane_g4

0xad5a,	// (0x0005592d) popup_side_volume_key_window_cp

0xb515,	// (0x000560e8) main_idle_act2_pane_t1

0x5f35,	// (0x00050b08) toolbar_button_pane_g10

0x86f4,	// (0x000532c7) popup_toolbar_window_cp1

0xbcb6,	// (0x00056889) clock_nsta_pane_cp_t1

0xbcb6,	// (0x00056889) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x0005a686) clock_nsta_pane_cp_t

0x54f1,	// (0x000500c4) navi_navi_volume_pane_cp2_ParamLimits

0x5500,	// (0x000500d3) popup_side_volume_key_window_g1_ParamLimits

0x550c,	// (0x000500df) popup_side_volume_key_window_g2_ParamLimits

0x551b,	// (0x000500ee) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005a2e9) popup_side_volume_key_window_g_ParamLimits

0x6624,	// (0x000511f7) fep_hwr_aid_pane

0x66cb,	// (0x0005129e) bg_fep_hwr_top_pane_g4_ParamLimits

0xc26f,	// (0x00056e42) fep_hwr_top_pane_g1_ParamLimits

0xc281,	// (0x00056e54) fep_hwr_top_pane_g2_ParamLimits

0x66eb,	// (0x000512be) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x0005a6db) fep_hwr_top_pane_g_ParamLimits

0x6700,	// (0x000512d3) fep_hwr_top_text_pane_ParamLimits

0xab1d,	// (0x000556f0) aid_touch_tab_arrow_arrow_2

0xab26,	// (0x000556f9) aid_touch_tab_arrow_left_2

0x6638,	// (0x0005120b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x666f,	// (0x00051242) fep_hwr_prediction_pane

0xc3e1,	// (0x00056fb4) fep_vkb_prediction_pane

0xc4e5,	// (0x000570b8) fep_vkb_side_pane_g3_ParamLimits

0xc4e5,	// (0x000570b8) fep_vkb_side_pane_g3

0x687b,	// (0x0005144e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x68e7,	// (0x000514ba) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x68f4,	// (0x000514c7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb7,	// (0x0005a78a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6a23,	// (0x000515f6) fep_hwr_prediction_pane_g1

0x6a2d,	// (0x00051600) fep_hwr_prediction_pane_g2

0x6a35,	// (0x00051608) fep_hwr_prediction_pane_g3

0x6a3d,	// (0x00051610) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x0005a894) fep_hwr_prediction_pane_g

0xd339,	// (0x00057f0c) fep_vkb_prediction_pane_g1

0xd343,	// (0x00057f16) fep_vkb_prediction_pane_g2

0xd34b,	// (0x00057f1e) fep_vkb_prediction_pane_g3

0xd353,	// (0x00057f26) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x0005a89d) fep_vkb_prediction_pane_g

0x6312,	// (0x00050ee5) slider_set_pane_g3

0x6326,	// (0x00050ef9) slider_set_pane_g4

0x633e,	// (0x00050f11) slider_set_pane_g5

0x6312,	// (0x00050ee5) slider_set_pane_g6

0x6354,	// (0x00050f27) slider_set_pane_g7

0xb1af,	// (0x00055d82) slider_form_pane_g3

0xb1b8,	// (0x00055d8b) slider_form_pane_g4

0xb1c0,	// (0x00055d93) slider_form_pane_g5

0xb1af,	// (0x00055d82) slider_form_pane_g6

0xb1c8,	// (0x00055d9b) slider_form_pane_g7

0xb7bf,	// (0x00056392) slider_set_pane_vc_g3

0xb7c8,	// (0x0005639b) slider_set_pane_vc_g4

0xb7d1,	// (0x000563a4) slider_set_pane_vc_g5

0xb7bf,	// (0x00056392) slider_set_pane_vc_g6

0xb7da,	// (0x000563ad) slider_set_pane_vc_g7

0xb99a,	// (0x0005656d) slider_form_pane_vc_g1

0xb9a3,	// (0x00056576) slider_form_pane_vc_g2

0xb9ac,	// (0x0005657f) slider_form_pane_vc_g3

0xb99a,	// (0x0005656d) slider_form_pane_vc_g4

0xb9b5,	// (0x00056588) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x0005a658) slider_form_pane_vc_g

0x48f4,	// (0x0004f4c7) main_idle_act3_pane

0xd35b,	// (0x00057f2e) ai3_links_pane

0xd364,	// (0x00057f37) popup_ai3_data_window_ParamLimits

0xd364,	// (0x00057f37) popup_ai3_data_window

0x763e,	// (0x00052211) grid_ai3_links_pane

0xd37e,	// (0x00057f51) cell_ai3_links_pane_ParamLimits

0xd37e,	// (0x00057f51) cell_ai3_links_pane

0xd396,	// (0x00057f69) bg_popup_sub_pane_cp11

0xd3a3,	// (0x00057f76) cell_ai3_links_pane_g1

0x763e,	// (0x00052211) bg_popup_sub_pane_cp12

0xd3c8,	// (0x00057f9b) heading_ai3_data_pane

0xd3d0,	// (0x00057fa3) list_ai3_gene_pane

0xd3dc,	// (0x00057faf) popup_ai3_data_window_g1

0xd3e4,	// (0x00057fb7) heading_ai3_data_pane_g1

0xd3ec,	// (0x00057fbf) heading_ai3_data_pane_t1

0xd3fa,	// (0x00057fcd) list_double_ai3_gene_pane_ParamLimits

0xd3fa,	// (0x00057fcd) list_double_ai3_gene_pane

0xd407,	// (0x00057fda) list_single_ai3_gene_pane_ParamLimits

0xd407,	// (0x00057fda) list_single_ai3_gene_pane

0xc1d8,	// (0x00056dab) list_highlight_pane_cp7_ParamLimits

0xc1d8,	// (0x00056dab) list_highlight_pane_cp7

0xd414,	// (0x00057fe7) list_single_a13_gene_pane_t1_ParamLimits

0xd414,	// (0x00057fe7) list_single_a13_gene_pane_t1

0xd42b,	// (0x00057ffe) list_single_ai3_gene_pane_g1

0xd434,	// (0x00058007) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x0005a8a6) list_single_ai3_gene_pane_g

0xd43c,	// (0x0005800f) list_double_ai3_gene_pane_g1_ParamLimits

0xd43c,	// (0x0005800f) list_double_ai3_gene_pane_g1

0xd448,	// (0x0005801b) list_double_ai3_gene_pane_t1_ParamLimits

0xd448,	// (0x0005801b) list_double_ai3_gene_pane_t1

0xd464,	// (0x00058037) list_double_ai3_gene_pane_t2_ParamLimits

0xd464,	// (0x00058037) list_double_ai3_gene_pane_t2

0xd47a,	// (0x0005804d) list_double_ai3_gene_pane_t3_ParamLimits

0xd47a,	// (0x0005804d) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x0005a8ab) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x0005a8ab) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7fd4,	// (0x00052ba7) aid_size_min_col_2

0xd325,	// (0x00057ef8) aid_size_min_msg_ParamLimits

0xd325,	// (0x00057ef8) aid_size_min_msg

0xc5e5,	// (0x000571b8) fep_vkb_top_text_pane_g2_ParamLimits

0xc5e5,	// (0x000571b8) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x0005a70b) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x0005a70b) fep_vkb_top_text_pane_g

0x48f4,	// (0x0004f4c7) main_hc_apps_shell_pane

0xd497,	// (0x0005806a) grid_hc_apps_pane_ParamLimits

0xd497,	// (0x0005806a) grid_hc_apps_pane

0xd4a6,	// (0x00058079) list_hc_apps_pane

0xd4ae,	// (0x00058081) scroll_pane_cp37_ParamLimits

0xd4ae,	// (0x00058081) scroll_pane_cp37

0xd4ba,	// (0x0005808d) cell_hc_apps_pane_ParamLimits

0xd4ba,	// (0x0005808d) cell_hc_apps_pane

0xd568,	// (0x0005813b) cell_hc_apps_pane_g1_ParamLimits

0xd568,	// (0x0005813b) cell_hc_apps_pane_g1

0xd599,	// (0x0005816c) cell_hc_apps_pane_g2_ParamLimits

0xd599,	// (0x0005816c) cell_hc_apps_pane_g2

0xd5b5,	// (0x00058188) cell_hc_apps_pane_g3_ParamLimits

0xd5b5,	// (0x00058188) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x0005a8b2) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x0005a8b2) cell_hc_apps_pane_g

0xd5d7,	// (0x000581aa) cell_hc_apps_pane_t1_ParamLimits

0xd5d7,	// (0x000581aa) cell_hc_apps_pane_t1

0x817f,	// (0x00052d52) grid_highlight_pane_cp10_ParamLimits

0x817f,	// (0x00052d52) grid_highlight_pane_cp10

0xd617,	// (0x000581ea) list_single_hc_apps_pane_ParamLimits

0xd617,	// (0x000581ea) list_single_hc_apps_pane

0xd673,	// (0x00058246) list_single_hc_apps_pane_g1

0x80bc,	// (0x00052c8f) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x0005a8b9) list_single_hc_apps_pane_g

0x80d5,	// (0x00052ca8) list_single_hc_apps_pane_g2_copy1

0x80f1,	// (0x00052cc4) list_single_hc_apps_pane_t1

0x7732,	// (0x00052305) bg_set_opt_pane_cp_ParamLimits

0x4b55,	// (0x0004f728) setting_slider_pane_t1_ParamLimits

0x4b6e,	// (0x0004f741) setting_slider_pane_t2_ParamLimits

0x4b88,	// (0x0004f75b) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005a131) setting_slider_pane_t_ParamLimits

0x4ba0,	// (0x0004f773) slider_set_pane_ParamLimits

0x5808,	// (0x000503db) control_pane_g5_ParamLimits

0x5808,	// (0x000503db) control_pane_g5

0xaffe,	// (0x00055bd1) slider_set_pane_g1_ParamLimits

0x6306,	// (0x00050ed9) slider_set_pane_g2_ParamLimits

0x6312,	// (0x00050ee5) slider_set_pane_g3_ParamLimits

0x6326,	// (0x00050ef9) slider_set_pane_g4_ParamLimits

0x633e,	// (0x00050f11) slider_set_pane_g5_ParamLimits

0x6312,	// (0x00050ee5) slider_set_pane_g6_ParamLimits

0x6354,	// (0x00050f27) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0005a53c) slider_set_pane_g_ParamLimits

0x92a0,	// (0x00053e73) navi_icon_text_pane_ParamLimits

0x97a2,	// (0x00054375) aid_fill_nsta_2_ParamLimits

0x97e1,	// (0x000543b4) aid_touch_tab_arrow_left_ParamLimits

0x97f0,	// (0x000543c3) aid_touch_tab_arrow_right_ParamLimits

0x985d,	// (0x00054430) clock_nsta_pane_ParamLimits

0xaaff,	// (0x000556d2) navi_icon_pane_g1_ParamLimits

0xab0b,	// (0x000556de) navi_text_pane_t1_ParamLimits

0xbdc2,	// (0x00056995) navi_icon_text_pane_g1_ParamLimits

0xbdce,	// (0x000569a1) navi_icon_text_pane_t1_ParamLimits

0xd673,	// (0x00058246) list_single_hc_apps_pane_g1_ParamLimits

0x80bc,	// (0x00052c8f) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x0005a8b9) list_single_hc_apps_pane_g_ParamLimits

0x80d5,	// (0x00052ca8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x80f1,	// (0x00052cc4) list_single_hc_apps_pane_t1_ParamLimits

0x4a5f,	// (0x0004f632) popup_toolbar2_fixed_window_ParamLimits

0x4a5f,	// (0x0004f632) popup_toolbar2_fixed_window

0x5e17,	// (0x000509ea) popup_toolbar2_float_window

0x763e,	// (0x00052211) bg_popup_sub_pane_cp27

0xd68c,	// (0x0005825f) grid_toolbar2_float_pane

0x763e,	// (0x00052211) bg_popup_sub_pane_cp26

0xd68c,	// (0x0005825f) grid_toolbar2_fixed_pane

0xd694,	// (0x00058267) cell_toolbar2_fixed_pane_ParamLimits

0xd694,	// (0x00058267) cell_toolbar2_fixed_pane

0xd6a4,	// (0x00058277) cell_toolbar2_fixed_pane_g1

0xd6ad,	// (0x00058280) toolbar2_fixed_button_pane

0x9c74,	// (0x00054847) toolbar2_fixed_button_pane_g1

0x9c84,	// (0x00054857) toolbar2_fixed_button_pane_g2

0x9c7c,	// (0x0005484f) toolbar2_fixed_button_pane_g3

0x9c94,	// (0x00054867) toolbar2_fixed_button_pane_g4

0x9c8c,	// (0x0005485f) toolbar2_fixed_button_pane_g5

0x9c9c,	// (0x0005486f) toolbar2_fixed_button_pane_g6

0x9ca4,	// (0x00054877) toolbar2_fixed_button_pane_g7

0x9cb4,	// (0x00054887) toolbar2_fixed_button_pane_g8

0x9cac,	// (0x0005487f) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0005a43e) toolbar2_fixed_button_pane_g

0xd6b5,	// (0x00058288) cell_toolbar2_float_pane_ParamLimits

0xd6b5,	// (0x00058288) cell_toolbar2_float_pane

0xd6c6,	// (0x00058299) cell_toolbar2_float_pane_g1

0xd6ad,	// (0x00058280) toolbar2_fixed_button_pane_cp

0xc341,	// (0x00056f14) fep_vkb_accented_list_pane_ParamLimits

0xc341,	// (0x00056f14) fep_vkb_accented_list_pane

0x685b,	// (0x0005142e) bg_popup_fep_shadow_pane_g9

0x9420,	// (0x00053ff3) bg_popup_fep_shadow_pane_cp3

0x88df,	// (0x000534b2) list_accented_list_pane

0xd6cf,	// (0x000582a2) list_single_accented_list_pane_ParamLimits

0xd6cf,	// (0x000582a2) list_single_accented_list_pane

0x9420,	// (0x00053ff3) list_highlight_pane_cp10

0xd6e0,	// (0x000582b3) list_single_accented_list_pane_t1

0x5d67,	// (0x0005093a) popup_slider_window_ParamLimits

0x5d67,	// (0x0005093a) popup_slider_window

0xd31c,	// (0x00057eef) aid_indentation_list_msg

0xd7a4,	// (0x00058377) bg_popup_window_pane_cp19

0xd80c,	// (0x000583df) popup_slider_window_g1

0xd828,	// (0x000583fb) popup_slider_window_g2

0xd844,	// (0x00058417) popup_slider_window_g3

0x0005,

0xfceb,	// (0x0005a8be) popup_slider_window_g

0xd8aa,	// (0x0005847d) popup_slider_window_t1

0xd91e,	// (0x000584f1) small_volume_slider_vertical_pane

0xc213,	// (0x00056de6) small_volume_slider_vertical_pane_g1

0xc213,	// (0x00056de6) small_volume_slider_vertical_pane_g2

0xd93a,	// (0x0005850d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x0005a8d0) small_volume_slider_vertical_pane_g

0x4817,	// (0x0004f3ea) area_side_right_pane_ParamLimits

0x4817,	// (0x0004f3ea) area_side_right_pane

0x6a45,	// (0x00051618) aid_size_side_button_ParamLimits

0x6a45,	// (0x00051618) aid_size_side_button

0x6a59,	// (0x0005162c) grid_sctrl_middle_pane_ParamLimits

0x6a59,	// (0x0005162c) grid_sctrl_middle_pane

0x6a78,	// (0x0005164b) sctrl_sk_bottom_pane

0x6a89,	// (0x0005165c) sctrl_sk_top_pane

0x6a9b,	// (0x0005166e) aid_touch_sctrl_top

0x6aa8,	// (0x0005167b) bg_sctrl_sk_pane_ParamLimits

0x6aa8,	// (0x0005167b) bg_sctrl_sk_pane

0x6ab6,	// (0x00051689) sctrl_sk_top_pane_g1

0x6ac3,	// (0x00051696) sctrl_sk_top_pane_t1

0x6a9b,	// (0x0005166e) aid_touch_sctrl_bottom

0x6aa8,	// (0x0005167b) bg_sctrl_sk_pane_cp_ParamLimits

0x6aa8,	// (0x0005167b) bg_sctrl_sk_pane_cp

0x6ade,	// (0x000516b1) sctrl_sk_bottom_pane_g1

0x6ac3,	// (0x00051696) sctrl_sk_bottom_pane_t1

0x6ae7,	// (0x000516ba) cell_sctrl_middle_pane_ParamLimits

0x6ae7,	// (0x000516ba) cell_sctrl_middle_pane

0x6b02,	// (0x000516d5) aid_touch_sctrl_middle_ParamLimits

0x6b02,	// (0x000516d5) aid_touch_sctrl_middle

0x6b14,	// (0x000516e7) bg_sctrl_middle_pane_ParamLimits

0x6b14,	// (0x000516e7) bg_sctrl_middle_pane

0x687b,	// (0x0005144e) cell_sctrl_middle_pane_g1_ParamLimits

0x687b,	// (0x0005144e) cell_sctrl_middle_pane_g1

0x6b22,	// (0x000516f5) cell_sctrl_middle_pane_g2_ParamLimits

0x6b22,	// (0x000516f5) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x0005a8dc) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x0005a8dc) cell_sctrl_middle_pane_g

0x9c74,	// (0x00054847) bg_sctrl_middle_pane_g1

0x9c7c,	// (0x0005484f) bg_sctrl_middle_pane_g2

0x9c84,	// (0x00054857) bg_sctrl_middle_pane_g3

0x9c8c,	// (0x0005485f) bg_sctrl_middle_pane_g4

0x9c94,	// (0x00054867) bg_sctrl_middle_pane_g5

0x9c9c,	// (0x0005486f) bg_sctrl_middle_pane_g6

0x9ca4,	// (0x00054877) bg_sctrl_middle_pane_g7

0x9cac,	// (0x0005487f) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x0005a8e1) bg_sctrl_middle_pane_g

0x9cb4,	// (0x00054887) bg_sctrl_middle_pane_g8_copy1

0x9c74,	// (0x00054847) bg_sctrl_sk_pane_g1

0x9c84,	// (0x00054857) bg_sctrl_sk_pane_g2

0x9c7c,	// (0x0005484f) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0005a43e) bg_sctrl_sk_pane_g

0x86ba,	// (0x0005328d) aid_size_touch_scroll_bar

0x9c94,	// (0x00054867) bg_sctrl_sk_pane_g4

0x9c8c,	// (0x0005485f) bg_sctrl_sk_pane_g5

0x9c9c,	// (0x0005486f) bg_sctrl_sk_pane_g6

0x9ca4,	// (0x00054877) bg_sctrl_sk_pane_g7

0x9cb4,	// (0x00054887) bg_sctrl_sk_pane_g8

0x9cac,	// (0x0005487f) bg_sctrl_sk_pane_g9

0x59d0,	// (0x000505a3) popup_fep_china_hwr2_fs_candidate_window

0x59da,	// (0x000505ad) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x59da,	// (0x000505ad) popup_fep_china_hwr2_fs_control_window

0x687b,	// (0x0005144e) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x0005a8d7) sctrl_sk_top_pane_g

0xd943,	// (0x00058516) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd943,	// (0x00058516) aid_fep_china_hwr2_fs_cell

0xd955,	// (0x00058528) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd955,	// (0x00058528) bg_popup_fep_shadow_pane_cp4

0xd96c,	// (0x0005853f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd96c,	// (0x0005853f) bg_popup_fep_shadow_pane_cp5

0xd97e,	// (0x00058551) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd97e,	// (0x00058551) popup_fep_china_hwr2_fs_control_bar_grid

0xd98e,	// (0x00058561) popup_fep_china_hwr2_fs_control_funtion_grid

0xd996,	// (0x00058569) aid_fep_china_hwr2_fs_candi_cell

0x763e,	// (0x00052211) bg_popup_fep_shadow_pane_cp6

0xd9a0,	// (0x00058573) popup_fep_china_hwr2_fs_candidate_grid

0xd9aa,	// (0x0005857d) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9aa,	// (0x0005857d) cell_fep_china_hwr2_fs_funtion_grid

0xc213,	// (0x00056de6) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd9c2,	// (0x00058595) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd9c2,	// (0x00058595) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd9d0,	// (0x000585a3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd9d0,	// (0x000585a3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x0005a8f2) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x0005a8f2) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9e6,	// (0x000585b9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9e6,	// (0x000585b9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd9fb,	// (0x000585ce) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd9fb,	// (0x000585ce) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x0005a8f7) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x0005a8f7) cell_fep_china_hwr2_fs_funtion_grid_t

0xda17,	// (0x000585ea) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda1f,	// (0x000585f2) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda27,	// (0x000585fa) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x0005a8fc) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda2f,	// (0x00058602) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda2f,	// (0x00058602) cell_fep_china_hwr2_fs_candidate_grid

0xda48,	// (0x0005861b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda50,	// (0x00058623) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc213,	// (0x00056de6) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc213,	// (0x00056de6) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x0005a710) cell_fep_china_hwr2_fs_candidate_grid_g

0xda58,	// (0x0005862b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x986a,	// (0x0005443d) clock_nsta_pane_cp_24_ParamLimits

0x986a,	// (0x0005443d) clock_nsta_pane_cp_24

0x98e8,	// (0x000544bb) indicator_nsta_pane_cp_24_ParamLimits

0x98e8,	// (0x000544bb) indicator_nsta_pane_cp_24

0xa97b,	// (0x0005554e) heading_pane_g1

0x0001,

0xf8d0,	// (0x0005a4a3) heading_pane_g

0xb35e,	// (0x00055f31) grid_sct_catagory_button_pane

0xb38e,	// (0x00055f61) scroll_pane_cp5_ParamLimits

0xbe10,	// (0x000569e3) button_value_adjust_pane_cp5_ParamLimits

0xbe10,	// (0x000569e3) button_value_adjust_pane_cp5

0xbeef,	// (0x00056ac2) form2_midp_time_pane_ParamLimits

0xda66,	// (0x00058639) cell_sct_catagory_button_pane_ParamLimits

0xda66,	// (0x00058639) cell_sct_catagory_button_pane

0xc1d8,	// (0x00056dab) bg_button_pane_cp01_ParamLimits

0xc1d8,	// (0x00056dab) bg_button_pane_cp01

0xc213,	// (0x00056de6) cell_sct_catagory_button_pane_g1

0x5da6,	// (0x00050979) popup_tb_extension_window

0xda78,	// (0x0005864b) aid_size_cell_ext_ParamLimits

0xda78,	// (0x0005864b) aid_size_cell_ext

0x817f,	// (0x00052d52) bg_tb_trans_pane_cp1_ParamLimits

0x817f,	// (0x00052d52) bg_tb_trans_pane_cp1

0xda98,	// (0x0005866b) grid_tb_ext_pane_ParamLimits

0xda98,	// (0x0005866b) grid_tb_ext_pane

0xdac6,	// (0x00058699) cell_tb_ext_pane_ParamLimits

0xdac6,	// (0x00058699) cell_tb_ext_pane

0xdadd,	// (0x000586b0) cell_tb_ext_pane_g1_ParamLimits

0xdadd,	// (0x000586b0) cell_tb_ext_pane_g1

0xdafa,	// (0x000586cd) cell_tb_ext_pane_t1

0x817f,	// (0x00052d52) list_highlight_pane_cp11_ParamLimits

0x817f,	// (0x00052d52) list_highlight_pane_cp11

0x4a7e,	// (0x0004f651) popup_uni_indicator_window_ParamLimits

0x4a7e,	// (0x0004f651) popup_uni_indicator_window

0x8797,	// (0x0005336a) bg_popup_sub_pane_cp14

0xdb15,	// (0x000586e8) list_uniindi_pane

0xdb21,	// (0x000586f4) uniindi_top_pane

0x817f,	// (0x00052d52) bg_uniindi_top_pane

0xdb40,	// (0x00058713) uniindi_top_pane_g1

0xdb56,	// (0x00058729) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x0005a903) uniindi_top_pane_g

0xdb80,	// (0x00058753) uniindi_top_pane_t1

0xdbaa,	// (0x0005877d) list_single_uniindi_pane_ParamLimits

0xdbaa,	// (0x0005877d) list_single_uniindi_pane

0xc213,	// (0x00056de6) bg_uniindi_top_pane_g1

0xdbbd,	// (0x00058790) list_single_uniindi_pane_g1

0xdbd0,	// (0x000587a3) list_single_uniindi_pane_t1

0x48f4,	// (0x0004f4c7) control_bg_pane

0xdbf5,	// (0x000587c8) bg_sctrl_sk_pane_cp1

0xdbfe,	// (0x000587d1) bg_sctrl_sk_pane_cp2

0xdc07,	// (0x000587da) control_bg_pane_g1

0xdc10,	// (0x000587e3) control_bg_pane_g2

0x0001,

0xfd39,	// (0x0005a90c) control_bg_pane_g

0xbc6a,	// (0x0005683d) cell_indicator_nsta_pane_g1_ParamLimits

0xbc78,	// (0x0005684b) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x0005a674) cell_indicator_nsta_pane_g_ParamLimits

0x7db1,	// (0x00052984) form2_midp_time_pane_t1_ParamLimits

0x5930,	// (0x00050503) main_idle_act4_pane_ParamLimits

0x5930,	// (0x00050503) main_idle_act4_pane

0x5da6,	// (0x00050979) popup_tb_extension_window_ParamLimits

0xdab6,	// (0x00058689) tb_ext_find_pane_ParamLimits

0xdab6,	// (0x00058689) tb_ext_find_pane

0xdc19,	// (0x000587ec) ai_gene_pane_1_cp1

0x9567,	// (0x0005413a) ai_gene_pane_2_cp1

0xdc21,	// (0x000587f4) list_single_idle_plugin_calendar_pane

0xdc2a,	// (0x000587fd) list_single_idle_plugin_notification_pane

0xdc33,	// (0x00058806) list_single_idle_plugin_player_pane

0xdc3c,	// (0x0005880f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc3c,	// (0x0005880f) list_single_idle_plugin_shortcut_pane

0xdc5e,	// (0x00058831) main_idle_act4_pane_t1

0xdc70,	// (0x00058843) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x0005a911) main_idle_act4_pane_t

0xdc82,	// (0x00058855) middle_sk_idle_act4_pane_ParamLimits

0xdc82,	// (0x00058855) middle_sk_idle_act4_pane

0xdc98,	// (0x0005886b) popup_clock_digital_analogue_window_cp2

0xdcb2,	// (0x00058885) shortcut_wheel_idle_act4_pane_ParamLimits

0xdcb2,	// (0x00058885) shortcut_wheel_idle_act4_pane

0xc213,	// (0x00056de6) shortcut_wheel_idle_act4_pane_g1

0xc213,	// (0x00056de6) shortcut_wheel_idle_act4_pane_g2

0xc213,	// (0x00056de6) shortcut_wheel_idle_act4_pane_g3

0xc213,	// (0x00056de6) shortcut_wheel_idle_act4_pane_g4

0xc213,	// (0x00056de6) shortcut_wheel_idle_act4_pane_g5

0xdcc6,	// (0x00058899) shortcut_wheel_idle_act4_pane_g6

0xdcce,	// (0x000588a1) shortcut_wheel_idle_act4_pane_g7

0xdcd6,	// (0x000588a9) shortcut_wheel_idle_act4_pane_g8

0xdcde,	// (0x000588b1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x0005a916) shortcut_wheel_idle_act4_pane_g

0xc491,	// (0x00057064) middle_sk_idle_act4_pane_g1_ParamLimits

0xc491,	// (0x00057064) middle_sk_idle_act4_pane_g1

0xdd42,	// (0x00058915) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd42,	// (0x00058915) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x0005a939) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x0005a939) middle_sk_idle_act4_pane_g

0xdd4e,	// (0x00058921) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd4e,	// (0x00058921) middle_sk_idle_act4_pane_t1

0xdd6b,	// (0x0005893e) grid_ai_shortcut_pane_ParamLimits

0xdd6b,	// (0x0005893e) grid_ai_shortcut_pane

0xdd84,	// (0x00058957) list_highlight_pane_cp16_ParamLimits

0xdd84,	// (0x00058957) list_highlight_pane_cp16

0xdd91,	// (0x00058964) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdd91,	// (0x00058964) list_single_idle_plugin_shortcut_pane_g1

0xdd9d,	// (0x00058970) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdd9d,	// (0x00058970) list_single_idle_plugin_shortcut_pane_g2

0xddb5,	// (0x00058988) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xddb5,	// (0x00058988) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x0005a93e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x0005a93e) list_single_idle_plugin_shortcut_pane_g

0xddc8,	// (0x0005899b) cell_ai_shortcut_pane_ParamLimits

0xddc8,	// (0x0005899b) cell_ai_shortcut_pane

0xddec,	// (0x000589bf) cell_ai_shortcut_pane_g1_ParamLimits

0xddec,	// (0x000589bf) cell_ai_shortcut_pane_g1

0xdc19,	// (0x000587ec) ai_gene_pane_1_cp2

0xde0e,	// (0x000589e1) ai_gene_pane_2_cp2

0xde16,	// (0x000589e9) list_highlight_pane_cp15

0xde1f,	// (0x000589f2) list_single_idle_plugin_calendar_pane_g1

0xde16,	// (0x000589e9) list_highlight_pane_cp17

0xde27,	// (0x000589fa) list_single_idle_plugin_calendar_pane_g1_copy1

0xde2f,	// (0x00058a02) list_single_idle_plugin_player_pane_g1

0xb5b7,	// (0x0005618a) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x0005a945) list_single_idle_plugin_player_pane_g

0xde37,	// (0x00058a0a) list_single_idle_plugin_player_pane_t1

0xde45,	// (0x00058a18) list_single_idle_plugin_player_pane_t2

0xde53,	// (0x00058a26) list_single_idle_plugin_player_pane_t3

0xde61,	// (0x00058a34) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x0005a94a) list_single_idle_plugin_player_pane_t

0xde6f,	// (0x00058a42) wait_bar_pane_cp15

0xde77,	// (0x00058a4a) grid_ai_notification_pane

0xb5b7,	// (0x0005618a) list_single_idle_plugin_notification_pane_g1

0xde80,	// (0x00058a53) cell_ai_notification_pane_ParamLimits

0xde80,	// (0x00058a53) cell_ai_notification_pane

0xde8d,	// (0x00058a60) cell_ai_notification_pane_g1

0xde95,	// (0x00058a68) cell_ai_notification_pane_t1

0xdea3,	// (0x00058a76) tb_ext_find_button_pane

0xdeab,	// (0x00058a7e) tb_ext_find_pane_g1

0xdeb3,	// (0x00058a86) tb_ext_find_pane_t1

0x8e0d,	// (0x000539e0) tb_ext_find_button_pane_g1

0xdec1,	// (0x00058a94) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x0005a953) tb_ext_find_button_pane_g

0xdc5e,	// (0x00058831) main_idle_act4_pane_t1_ParamLimits

0xdc70,	// (0x00058843) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x0005a911) main_idle_act4_pane_t_ParamLimits

0xdc98,	// (0x0005886b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdca6,	// (0x00058879) sat_plugin_idle_act4_pane_ParamLimits

0xdca6,	// (0x00058879) sat_plugin_idle_act4_pane

0xdeca,	// (0x00058a9d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdeca,	// (0x00058a9d) sat_plugin_idle_act4_pane_t1

0xdedd,	// (0x00058ab0) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdedd,	// (0x00058ab0) sat_plugin_idle_act4_pane_t2

0xdef0,	// (0x00058ac3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdef0,	// (0x00058ac3) sat_plugin_idle_act4_pane_t3

0xdf03,	// (0x00058ad6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf03,	// (0x00058ad6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x0005a958) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x0005a958) sat_plugin_idle_act4_pane_t

0x49b9,	// (0x0004f58c) popup_battery_window_ParamLimits

0x49b9,	// (0x0004f58c) popup_battery_window

0x817f,	// (0x00052d52) bg_popup_sub_pane_cp25_ParamLimits

0x817f,	// (0x00052d52) bg_popup_sub_pane_cp25

0xdf16,	// (0x00058ae9) popup_battery_window_g1_ParamLimits

0xdf16,	// (0x00058ae9) popup_battery_window_g1

0xdf22,	// (0x00058af5) popup_battery_window_t1_ParamLimits

0xdf22,	// (0x00058af5) popup_battery_window_t1

0xdf34,	// (0x00058b07) popup_battery_window_t2_ParamLimits

0xdf34,	// (0x00058b07) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x0005a961) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x0005a961) popup_battery_window_t

0x9434,	// (0x00054007) midp_canvas_pane_ParamLimits

0x94ab,	// (0x0005407e) midp_keypad_pane_ParamLimits

0x94ab,	// (0x0005407e) midp_keypad_pane

0x9744,	// (0x00054317) main_midp_pane_ParamLimits

0xbcd4,	// (0x000568a7) signal_pane_g2_cp_ParamLimits

0xdf51,	// (0x00058b24) aid_size_cell_midp_keypad_ParamLimits

0xdf51,	// (0x00058b24) aid_size_cell_midp_keypad

0xdf6b,	// (0x00058b3e) midp_keyp_game_grid_pane_ParamLimits

0xdf6b,	// (0x00058b3e) midp_keyp_game_grid_pane

0xdf8b,	// (0x00058b5e) midp_keyp_rocker_pane_ParamLimits

0xdf8b,	// (0x00058b5e) midp_keyp_rocker_pane

0xdfc4,	// (0x00058b97) midp_keyp_sk_left_pane_ParamLimits

0xdfc4,	// (0x00058b97) midp_keyp_sk_left_pane

0xe01e,	// (0x00058bf1) midp_keyp_sk_right_pane_ParamLimits

0xe01e,	// (0x00058bf1) midp_keyp_sk_right_pane

0x763e,	// (0x00052211) bg_button_pane_cp03

0xe078,	// (0x00058c4b) midp_keyp_sk_left_pane_g1

0x763e,	// (0x00052211) bg_button_pane_cp04

0xe078,	// (0x00058c4b) midp_keyp_sk_right_pane_g1

0xc213,	// (0x00056de6) midp_keyp_rocker_pane_g1

0xe081,	// (0x00058c54) keyp_game_cell_pane_ParamLimits

0xe081,	// (0x00058c54) keyp_game_cell_pane

0x763e,	// (0x00052211) bg_button_pane_cp02

0xe094,	// (0x00058c67) keyp_game_cell_pane_g1

0x49fd,	// (0x0004f5d0) popup_fep_vkb2_window_ParamLimits

0x49fd,	// (0x0004f5d0) popup_fep_vkb2_window

0x6b40,	// (0x00051713) aid_size_cell_vkb2_ParamLimits

0x6b40,	// (0x00051713) aid_size_cell_vkb2

0x6b94,	// (0x00051767) popup_fep_vkb2_window_g1_ParamLimits

0x6b94,	// (0x00051767) popup_fep_vkb2_window_g1

0x6bdc,	// (0x000517af) vkb2_area_bottom_pane_ParamLimits

0x6bdc,	// (0x000517af) vkb2_area_bottom_pane

0x6c28,	// (0x000517fb) vkb2_area_keypad_pane_ParamLimits

0x6c28,	// (0x000517fb) vkb2_area_keypad_pane

0x6c6a,	// (0x0005183d) vkb2_area_top_pane_ParamLimits

0x6c6a,	// (0x0005183d) vkb2_area_top_pane

0x6ce4,	// (0x000518b7) vkb2_top_entry_pane_ParamLimits

0x6ce4,	// (0x000518b7) vkb2_top_entry_pane

0x6d0e,	// (0x000518e1) vkb2_top_grid_left_pane_ParamLimits

0x6d0e,	// (0x000518e1) vkb2_top_grid_left_pane

0x6d2c,	// (0x000518ff) vkb2_top_grid_right_pane_ParamLimits

0x6d2c,	// (0x000518ff) vkb2_top_grid_right_pane

0x6d4a,	// (0x0005191d) vkb2_cell_keypad_pane_ParamLimits

0x6d4a,	// (0x0005191d) vkb2_cell_keypad_pane

0x6e1b,	// (0x000519ee) vkb2_area_bottom_grid_pane_ParamLimits

0x6e1b,	// (0x000519ee) vkb2_area_bottom_grid_pane

0x6e41,	// (0x00051a14) vkb2_area_bottom_pane_g1_ParamLimits

0x6e41,	// (0x00051a14) vkb2_area_bottom_pane_g1

0x6e65,	// (0x00051a38) vkb2_area_bottom_pane_g2_ParamLimits

0x6e65,	// (0x00051a38) vkb2_area_bottom_pane_g2

0x6e93,	// (0x00051a66) vkb2_area_bottom_pane_g3_ParamLimits

0x6e93,	// (0x00051a66) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x0005a966) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x0005a966) vkb2_area_bottom_pane_g

0x6ef4,	// (0x00051ac7) vkb2_top_cell_left_pane_ParamLimits

0x6ef4,	// (0x00051ac7) vkb2_top_cell_left_pane

0xe0a5,	// (0x00058c78) vkb2_top_entry_pane_g1_ParamLimits

0xe0a5,	// (0x00058c78) vkb2_top_entry_pane_g1

0xe0b3,	// (0x00058c86) vkb2_top_entry_pane_t1_ParamLimits

0xe0b3,	// (0x00058c86) vkb2_top_entry_pane_t1

0xe0e5,	// (0x00058cb8) vkb2_top_entry_pane_t2_ParamLimits

0xe0e5,	// (0x00058cb8) vkb2_top_entry_pane_t2

0xe117,	// (0x00058cea) vkb2_top_entry_pane_t3_ParamLimits

0xe117,	// (0x00058cea) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x0005a96d) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x0005a96d) vkb2_top_entry_pane_t

0x6f41,	// (0x00051b14) vkb2_top_grid_right_pane_g1_ParamLimits

0x6f41,	// (0x00051b14) vkb2_top_grid_right_pane_g1

0x6f57,	// (0x00051b2a) vkb2_top_grid_right_pane_g2_ParamLimits

0x6f57,	// (0x00051b2a) vkb2_top_grid_right_pane_g2

0x6f6f,	// (0x00051b42) vkb2_top_grid_right_pane_g3_ParamLimits

0x6f6f,	// (0x00051b42) vkb2_top_grid_right_pane_g3

0x6f87,	// (0x00051b5a) vkb2_top_grid_right_pane_g4_ParamLimits

0x6f87,	// (0x00051b5a) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x0005a974) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x0005a974) vkb2_top_grid_right_pane_g

0x6f9d,	// (0x00051b70) vkb2_top_cell_left_pane_g1

0x6fb4,	// (0x00051b87) vkb2_cell_keypad_pane_g1_ParamLimits

0x6fb4,	// (0x00051b87) vkb2_cell_keypad_pane_g1

0xe13b,	// (0x00058d0e) vkb2_cell_keypad_pane_t1_ParamLimits

0xe13b,	// (0x00058d0e) vkb2_cell_keypad_pane_t1

0x6fc2,	// (0x00051b95) vkb2_cell_bottom_grid_pane_ParamLimits

0x6fc2,	// (0x00051b95) vkb2_cell_bottom_grid_pane

0x6ffb,	// (0x00051bce) vkb2_cell_bottom_grid_pane_g1

0xdce6,	// (0x000588b9) aid_call2_pane_cp02

0xdcee,	// (0x000588c1) aid_call_pane_cp02

0xdcf6,	// (0x000588c9) clock_digital_number_pane_cp10

0xdcfe,	// (0x000588d1) clock_digital_number_pane_cp11

0xdd06,	// (0x000588d9) clock_digital_number_pane_cp12

0xdd0e,	// (0x000588e1) clock_digital_number_pane_cp13

0xdd16,	// (0x000588e9) clock_digital_separator_pane_cp10

0x8e0d,	// (0x000539e0) popup_clock_digital_analogue_window_cp2_g1

0x8e0d,	// (0x000539e0) popup_clock_digital_analogue_window_cp2_g2

0xdd1e,	// (0x000588f1) popup_clock_digital_analogue_window_cp2_g3

0x8e0d,	// (0x000539e0) popup_clock_digital_analogue_window_cp2_g4

0xdd1e,	// (0x000588f1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x0005a929) popup_clock_digital_analogue_window_cp2_g

0xdd26,	// (0x000588f9) popup_clock_digital_analogue_window_cp2_t1

0xdd34,	// (0x00058907) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x0005a934) popup_clock_digital_analogue_window_cp2_t

0xc213,	// (0x00056de6) clock_digital_number_pane_cp10_g1

0xc213,	// (0x00056de6) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0005a710) clock_digital_number_pane_cp10_g

0xc213,	// (0x00056de6) clock_digital_separator_pane_cp10_g1

0xc213,	// (0x00056de6) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0005a710) clock_digital_separator_pane_cp10_g

0xdb62,	// (0x00058735) uniindi_top_pane_g3

0xdb73,	// (0x00058746) uniindi_top_pane_g4

0x6dd5,	// (0x000519a8) vkb2_row_keypad_pane_ParamLimits

0x6dd5,	// (0x000519a8) vkb2_row_keypad_pane

0x7017,	// (0x00051bea) vkb2_cell_t_keypad_pane_ParamLimits

0x7017,	// (0x00051bea) vkb2_cell_t_keypad_pane

0x7027,	// (0x00051bfa) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7027,	// (0x00051bfa) vkb2_cell_t_keypad_pane_cp08

0x703a,	// (0x00051c0d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x703a,	// (0x00051c0d) vkb2_cell_t_keypad_pane_cp09

0x704e,	// (0x00051c21) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x704e,	// (0x00051c21) vkb2_cell_t_keypad_pane_cp01

0x705f,	// (0x00051c32) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x705f,	// (0x00051c32) vkb2_cell_t_keypad_pane_cp02

0x7070,	// (0x00051c43) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7070,	// (0x00051c43) vkb2_cell_t_keypad_pane_cp03

0x7081,	// (0x00051c54) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7081,	// (0x00051c54) vkb2_cell_t_keypad_pane_cp04

0x7092,	// (0x00051c65) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7092,	// (0x00051c65) vkb2_cell_t_keypad_pane_cp05

0x70a3,	// (0x00051c76) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x70a3,	// (0x00051c76) vkb2_cell_t_keypad_pane_cp06

0x70b4,	// (0x00051c87) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x70b4,	// (0x00051c87) vkb2_cell_t_keypad_pane_cp07

0x70c5,	// (0x00051c98) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x70c5,	// (0x00051c98) vkb2_cell_t_keypad_pane_cp10

0x687b,	// (0x0005144e) vkb2_cell_t_keypad_pane_g1

0xe152,	// (0x00058d25) vkb2_cell_t_keypad_pane_t1

0x48f4,	// (0x0004f4c7) popup_grid_graphic2_window

0xe164,	// (0x00058d37) aid_size_cell_graphic2_ParamLimits

0xe164,	// (0x00058d37) aid_size_cell_graphic2

0xe19c,	// (0x00058d6f) bg_popup_window_pane_cp21_ParamLimits

0xe19c,	// (0x00058d6f) bg_popup_window_pane_cp21

0xe1aa,	// (0x00058d7d) graphic2_pages_pane_ParamLimits

0xe1aa,	// (0x00058d7d) graphic2_pages_pane

0xe1f0,	// (0x00058dc3) grid_graphic2_control_pane_ParamLimits

0xe1f0,	// (0x00058dc3) grid_graphic2_control_pane

0xe22e,	// (0x00058e01) grid_graphic2_pane_ParamLimits

0xe22e,	// (0x00058e01) grid_graphic2_pane

0xe2a2,	// (0x00058e75) cell_graphic2_pane

0x48f4,	// (0x0004f4c7) main_comp_mode_pane

0xd3d0,	// (0x00057fa3) list_ai3_gene_pane_ParamLimits

0xd7a4,	// (0x00058377) bg_popup_window_pane_cp19_ParamLimits

0xd7b0,	// (0x00058383) bg_touch_area_indi_pane_ParamLimits

0xd7b0,	// (0x00058383) bg_touch_area_indi_pane

0xd7c6,	// (0x00058399) bg_touch_area_indi_pane_cp01_ParamLimits

0xd7c6,	// (0x00058399) bg_touch_area_indi_pane_cp01

0xd7dc,	// (0x000583af) bg_touch_area_indi_pane_cp02_ParamLimits

0xd7dc,	// (0x000583af) bg_touch_area_indi_pane_cp02

0xd7f2,	// (0x000583c5) bg_touch_area_indi_pane_cp03_ParamLimits

0xd7f2,	// (0x000583c5) bg_touch_area_indi_pane_cp03

0xd80c,	// (0x000583df) popup_slider_window_g1_ParamLimits

0xd828,	// (0x000583fb) popup_slider_window_g2_ParamLimits

0xd844,	// (0x00058417) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x0005a8be) popup_slider_window_g_ParamLimits

0xd8aa,	// (0x0005847d) popup_slider_window_t1_ParamLimits

0xd91e,	// (0x000584f1) small_volume_slider_vertical_pane_ParamLimits

0xe2a2,	// (0x00058e75) cell_graphic2_pane_ParamLimits

0xe2f1,	// (0x00058ec4) bg_button_pane_cp10_ParamLimits

0xe2f1,	// (0x00058ec4) bg_button_pane_cp10

0xe304,	// (0x00058ed7) bg_button_pane_cp11_ParamLimits

0xe304,	// (0x00058ed7) bg_button_pane_cp11

0xe317,	// (0x00058eea) graphic2_pages_pane_g1_ParamLimits

0xe317,	// (0x00058eea) graphic2_pages_pane_g1

0xe332,	// (0x00058f05) graphic2_pages_pane_g2_ParamLimits

0xe332,	// (0x00058f05) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x0005a982) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x0005a982) graphic2_pages_pane_g

0xe34a,	// (0x00058f1d) graphic2_pages_pane_t1_ParamLimits

0xe34a,	// (0x00058f1d) graphic2_pages_pane_t1

0xe362,	// (0x00058f35) cell_graphic2_control_pane_ParamLimits

0xe362,	// (0x00058f35) cell_graphic2_control_pane

0xe380,	// (0x00058f53) cell_graphic2_pane_g1_ParamLimits

0xe380,	// (0x00058f53) cell_graphic2_pane_g1

0xe38d,	// (0x00058f60) cell_graphic2_pane_g2_ParamLimits

0xe38d,	// (0x00058f60) cell_graphic2_pane_g2

0xe39a,	// (0x00058f6d) cell_graphic2_pane_g3_ParamLimits

0xe39a,	// (0x00058f6d) cell_graphic2_pane_g3

0xe3a7,	// (0x00058f7a) cell_graphic2_pane_g4_ParamLimits

0xe3a7,	// (0x00058f7a) cell_graphic2_pane_g4

0xe3b4,	// (0x00058f87) cell_graphic2_pane_g5_ParamLimits

0xe3b4,	// (0x00058f87) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x0005a987) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x0005a987) cell_graphic2_pane_g

0xe3cf,	// (0x00058fa2) cell_graphic2_pane_t1_ParamLimits

0xe3cf,	// (0x00058fa2) cell_graphic2_pane_t1

0x9ce8,	// (0x000548bb) grid_highlight_pane_cp11_ParamLimits

0x9ce8,	// (0x000548bb) grid_highlight_pane_cp11

0x817f,	// (0x00052d52) bg_button_pane_cp05

0xe406,	// (0x00058fd9) cell_graphic2_control_pane_g1

0xc213,	// (0x00056de6) bg_touch_area_indi_pane_g1

0xe42e,	// (0x00059001) aid_cmod_rocker_key_size

0xe438,	// (0x0005900b) aid_cmode_itu_key_size

0xe442,	// (0x00059015) main_cmode_video_pane

0xe44c,	// (0x0005901f) main_comp_mode_itu_pane

0xe458,	// (0x0005902b) main_comp_mode_rocker_pane

0xe464,	// (0x00059037) cell_cmode_rocker_pane_ParamLimits

0xe464,	// (0x00059037) cell_cmode_rocker_pane

0xe476,	// (0x00059049) cell_cmode_itu_pane_ParamLimits

0xe476,	// (0x00059049) cell_cmode_itu_pane

0x8797,	// (0x0005336a) bg_button_pane_cp06_ParamLimits

0x8797,	// (0x0005336a) bg_button_pane_cp06

0xc491,	// (0x00057064) cell_cmode_rocker_pane_g1_ParamLimits

0xc491,	// (0x00057064) cell_cmode_rocker_pane_g1

0xd9c2,	// (0x00058595) cell_cmode_rocker_pane_g2_ParamLimits

0xd9c2,	// (0x00058595) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x0005a997) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x0005a997) cell_cmode_rocker_pane_g

0x763e,	// (0x00052211) bg_button_pane_cp07

0xe48b,	// (0x0005905e) cell_cmode_itu_pane_g1

0xe494,	// (0x00059067) cell_cmode_itu_pane_t1

0xe4a2,	// (0x00059075) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x0005a99c) cell_cmode_itu_pane_t

0xdbe5,	// (0x000587b8) aid_touch_ctrl_left

0xdbed,	// (0x000587c0) aid_touch_ctrl_right

0x763e,	// (0x00052211) compa_mode_pane

0xe4b0,	// (0x00059083) aid_cmod_rocker_key_size_cp

0xe4ba,	// (0x0005908d) aid_cmode_itu_key_size_cp

0xe4c4,	// (0x00059097) compa_mode_pane_g1

0xe4cc,	// (0x0005909f) compa_mode_pane_g2

0xe4d4,	// (0x000590a7) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x0005a9a1) compa_mode_pane_g

0xe4dc,	// (0x000590af) main_comp_mode_itu_pane_cp

0xe4e4,	// (0x000590b7) main_comp_mode_rocker_pane_cp

0xe4ec,	// (0x000590bf) cell_cmode_itu_pane_cp_ParamLimits

0xe4ec,	// (0x000590bf) cell_cmode_itu_pane_cp

0xe501,	// (0x000590d4) cell_cmode_rocker_pane_cp_ParamLimits

0xe501,	// (0x000590d4) cell_cmode_rocker_pane_cp

0x8797,	// (0x0005336a) bg_button_pane_cp06_cp_ParamLimits

0x8797,	// (0x0005336a) bg_button_pane_cp06_cp

0xc491,	// (0x00057064) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc491,	// (0x00057064) cell_cmode_rocker_pane_g1_cp

0xc213,	// (0x00056de6) cell_cmode_rocker_pane_g2_cp

0x763e,	// (0x00052211) bg_button_pane_cp07_cp

0xb1af,	// (0x00055d82) cell_cmode_itu_pane_g1_cp

0xe513,	// (0x000590e6) cell_cmode_itu_pane_t1_cp

0xe513,	// (0x000590e6) cell_cmode_itu_pane_t2_cp

0xb19c,	// (0x00055d6f) settings_code_pane_cp2

0x7732,	// (0x00052305) bg_popup_window_pane_cp3_ParamLimits

0x837f,	// (0x00052f52) heading_pane_cp3_ParamLimits

0x838b,	// (0x00052f5e) listscroll_popup_graphic_pane_ParamLimits

0x6624,	// (0x000511f7) fep_hwr_aid_pane_ParamLimits

0x6a9b,	// (0x0005166e) aid_touch_sctrl_top_ParamLimits

0x6ab6,	// (0x00051689) sctrl_sk_top_pane_g1_ParamLimits

0x687b,	// (0x0005144e) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x0005a8d7) sctrl_sk_top_pane_g_ParamLimits

0x6ac3,	// (0x00051696) sctrl_sk_top_pane_t1_ParamLimits

0x6a9b,	// (0x0005166e) aid_touch_sctrl_bottom_ParamLimits

0x6ac3,	// (0x00051696) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb2e,	// (0x00058701) aid_area_touch_clock

0x6cac,	// (0x0005187f) aid_vkb2_area_top_pane_cell_ParamLimits

0x6cac,	// (0x0005187f) aid_vkb2_area_top_pane_cell

0x6df7,	// (0x000519ca) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6df7,	// (0x000519ca) aid_vkb2_area_bottom_pane_cell

0xe09d,	// (0x00058c70) popup_char_count_window

0xe521,	// (0x000590f4) popup_char_count_window_g1

0xe52a,	// (0x000590fd) popup_char_count_window_g2

0xe533,	// (0x00059106) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x0005a9a8) popup_char_count_window_g

0xe53c,	// (0x0005910f) popup_char_count_window_t1

0x6b72,	// (0x00051745) popup_fep_char_preview_window_ParamLimits

0x6b72,	// (0x00051745) popup_fep_char_preview_window

0x6cca,	// (0x0005189d) vkb2_top_candi_pane_ParamLimits

0x6cca,	// (0x0005189d) vkb2_top_candi_pane

0xe54a,	// (0x0005911d) cell_vkb2_top_candi_pane_ParamLimits

0xe54a,	// (0x0005911d) cell_vkb2_top_candi_pane

0x70da,	// (0x00051cad) bg_popup_fep_char_preview_window_ParamLimits

0x70da,	// (0x00051cad) bg_popup_fep_char_preview_window

0x70e8,	// (0x00051cbb) popup_fep_char_preview_window_t1_ParamLimits

0x70e8,	// (0x00051cbb) popup_fep_char_preview_window_t1

0xe5b8,	// (0x0005918b) bg_popup_fep_char_preview_window_g1

0xe5c0,	// (0x00059193) bg_popup_fep_char_preview_window_g2

0xe5c8,	// (0x0005919b) bg_popup_fep_char_preview_window_g3

0xe5d0,	// (0x000591a3) bg_popup_fep_char_preview_window_g4

0xe5d8,	// (0x000591ab) bg_popup_fep_char_preview_window_g5

0x7122,	// (0x00051cf5) bg_popup_fep_char_preview_window_g6

0xe5e0,	// (0x000591b3) bg_popup_fep_char_preview_window_g7

0xe5e8,	// (0x000591bb) bg_popup_fep_char_preview_window_g8

0xe5f0,	// (0x000591c3) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x0005a9af) bg_popup_fep_char_preview_window_g

0x687b,	// (0x0005144e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x687b,	// (0x0005144e) cell_vkb2_top_candi_pane_g1

0x6889,	// (0x0005145c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6889,	// (0x0005145c) cell_vkb2_top_candi_pane_g2

0xe597,	// (0x0005916a) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe597,	// (0x0005916a) cell_vkb2_top_candi_pane_g3

0x712a,	// (0x00051cfd) cell_vkb2_top_candi_pane_g4_ParamLimits

0x712a,	// (0x00051cfd) cell_vkb2_top_candi_pane_g4

0xc95c,	// (0x0005752f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc95c,	// (0x0005752f) cell_vkb2_top_candi_pane_g5

0x714b,	// (0x00051d1e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x714b,	// (0x00051d1e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x0005a9c2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x0005a9c2) cell_vkb2_top_candi_pane_g

0x7159,	// (0x00051d2c) cell_vkb2_top_candi_pane_t1

0x62f2,	// (0x00050ec5) aid_size_touch_slider_mark_ParamLimits

0x62f2,	// (0x00050ec5) aid_size_touch_slider_mark

0xe1e0,	// (0x00058db3) grid_graphic2_catg_pane_ParamLimits

0xe1e0,	// (0x00058db3) grid_graphic2_catg_pane

0xe27e,	// (0x00058e51) popup_grid_graphic2_window_t1_ParamLimits

0xe27e,	// (0x00058e51) popup_grid_graphic2_window_t1

0xe290,	// (0x00058e63) popup_grid_graphic2_window_t2_ParamLimits

0xe290,	// (0x00058e63) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x0005a97d) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x0005a97d) popup_grid_graphic2_window_t

0x817f,	// (0x00052d52) bg_button_pane_cp05_ParamLimits

0xe406,	// (0x00058fd9) cell_graphic2_control_pane_g1_ParamLimits

0xe5f8,	// (0x000591cb) cell_graphic2_catg_pane_ParamLimits

0xe5f8,	// (0x000591cb) cell_graphic2_catg_pane

0x763e,	// (0x00052211) bg_button_pane_cp12

0xe60a,	// (0x000591dd) cell_graphic2_catg_pane_g1

0xdafa,	// (0x000586cd) cell_tb_ext_pane_t1_ParamLimits

0x6f14,	// (0x00051ae7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6f14,	// (0x00051ae7) vkb2_top_cell_right_narrow_pane

0x6f2c,	// (0x00051aff) vkb2_top_cell_right_wide_pane_ParamLimits

0x6f2c,	// (0x00051aff) vkb2_top_cell_right_wide_pane

0x6616,	// (0x000511e9) bg_vkb2_func_pane_ParamLimits

0x6616,	// (0x000511e9) bg_vkb2_func_pane

0x6f9d,	// (0x00051b70) vkb2_top_cell_left_pane_g1_ParamLimits

0x6616,	// (0x000511e9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6616,	// (0x000511e9) bg_vkb2_fuc_pane_cp03

0x6ffb,	// (0x00051bce) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c7c,	// (0x0005484f) bg_vkb2_func_pane_g1

0x9c84,	// (0x00054857) bg_vkb2_func_pane_g2

0x9c94,	// (0x00054867) bg_vkb2_func_pane_g3

0x9c8c,	// (0x0005485f) bg_vkb2_func_pane_g4

0x9c9c,	// (0x0005486f) bg_vkb2_func_pane_g5

0x9ca4,	// (0x00054877) bg_vkb2_func_pane_g6

0x9cac,	// (0x0005487f) bg_vkb2_func_pane_g7

0x9cb4,	// (0x00054887) bg_vkb2_func_pane_g8

0x9c74,	// (0x00054847) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x0005a9cf) bg_vkb2_func_pane_g

0x6616,	// (0x000511e9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6616,	// (0x000511e9) bg_vkb2_fuc_pane_cp01

0x6f9d,	// (0x00051b70) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6f9d,	// (0x00051b70) vkb2_top_cell_right_wide_pane_g1

0x6616,	// (0x000511e9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6616,	// (0x000511e9) bg_vkb2_fuc_pane_cp02

0x6ffb,	// (0x00051bce) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ffb,	// (0x00051bce) vkb2_top_cell_right_narrow_pane_g1

0xd71e,	// (0x000582f1) aid_touch_area_decrease_ParamLimits

0xd71e,	// (0x000582f1) aid_touch_area_decrease

0xd742,	// (0x00058315) aid_touch_area_increase_ParamLimits

0xd742,	// (0x00058315) aid_touch_area_increase

0xd75a,	// (0x0005832d) aid_touch_area_mute_ParamLimits

0xd75a,	// (0x0005832d) aid_touch_area_mute

0xd776,	// (0x00058349) aid_touch_area_slider_ParamLimits

0xd776,	// (0x00058349) aid_touch_area_slider

0xd860,	// (0x00058433) popup_slider_window_g4_ParamLimits

0xd860,	// (0x00058433) popup_slider_window_g4

0xd878,	// (0x0005844b) popup_slider_window_g5_ParamLimits

0xd878,	// (0x0005844b) popup_slider_window_g5

0xd89a,	// (0x0005846d) popup_slider_window_g6_ParamLimits

0xd89a,	// (0x0005846d) popup_slider_window_g6

0xd8d8,	// (0x000584ab) popup_slider_window_t2_ParamLimits

0xd8d8,	// (0x000584ab) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x0005a8cb) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x0005a8cb) popup_slider_window_t

0xd8f0,	// (0x000584c3) slider_pane_ParamLimits

0xd8f0,	// (0x000584c3) slider_pane

0xe613,	// (0x000591e6) slider_pane_g1_ParamLimits

0xe613,	// (0x000591e6) slider_pane_g1

0xe627,	// (0x000591fa) slider_pane_g2_ParamLimits

0xe627,	// (0x000591fa) slider_pane_g2

0xe63d,	// (0x00059210) slider_pane_g3_ParamLimits

0xe63d,	// (0x00059210) slider_pane_g3

0x0003,

0xfe0f,	// (0x0005a9e2) slider_pane_g_ParamLimits

0xfe0f,	// (0x0005a9e2) slider_pane_g

0x5e02,	// (0x000509d5) popup_tb_float_extension_window_ParamLimits

0x5e02,	// (0x000509d5) popup_tb_float_extension_window

0xe669,	// (0x0005923c) aid_size_cell_tb_float_ext

0x763e,	// (0x00052211) bg_popup_sub_window_cp28

0xe675,	// (0x00059248) grid_tb_float_ext_pane

0xe67f,	// (0x00059252) cell_tb_float_ext_pane_ParamLimits

0xe67f,	// (0x00059252) cell_tb_float_ext_pane

0xe699,	// (0x0005926c) cell_tb_float_ext_pane_g1

0xe6a2,	// (0x00059275) grid_highlight_pane_cp12

0x6765,	// (0x00051338) cell_last_hwr_side_pane_ParamLimits

0x6765,	// (0x00051338) cell_last_hwr_side_pane

0xc213,	// (0x00056de6) cell_last_hwr_side_pane_g1

0xe6ab,	// (0x0005927e) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x0005a9eb) cell_last_hwr_side_pane_g

0x6ec3,	// (0x00051a96) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6ec3,	// (0x00051a96) vkb2_area_bottom_space_btn_pane

0x687b,	// (0x0005144e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe152,	// (0x00058d25) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7159,	// (0x00051d2c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7178,	// (0x00051d4b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7178,	// (0x00051d4b) vkb2_area_bottom_space_btn_pane_g1

0x71b2,	// (0x00051d85) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x71b2,	// (0x00051d85) vkb2_area_bottom_space_btn_pane_g2

0x71e8,	// (0x00051dbb) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x71e8,	// (0x00051dbb) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x0005a9f0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x0005a9f0) vkb2_area_bottom_space_btn_pane_g

0x66d9,	// (0x000512ac) cel_fep_hwr_func_pane_ParamLimits

0x66d9,	// (0x000512ac) cel_fep_hwr_func_pane

0x6715,	// (0x000512e8) cell_hwr_side_button_pane_ParamLimits

0x6715,	// (0x000512e8) cell_hwr_side_button_pane

0xdb2e,	// (0x00058701) aid_area_touch_clock_ParamLimits

0x817f,	// (0x00052d52) bg_uniindi_top_pane_ParamLimits

0xdb40,	// (0x00058713) uniindi_top_pane_g1_ParamLimits

0xdb56,	// (0x00058729) uniindi_top_pane_g2_ParamLimits

0xdb62,	// (0x00058735) uniindi_top_pane_g3_ParamLimits

0xdb73,	// (0x00058746) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x0005a903) uniindi_top_pane_g_ParamLimits

0xdb80,	// (0x00058753) uniindi_top_pane_t1_ParamLimits

0x817f,	// (0x00052d52) bg_vkb2_func_pane_cp01_ParamLimits

0x817f,	// (0x00052d52) bg_vkb2_func_pane_cp01

0xe6b4,	// (0x00059287) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6b4,	// (0x00059287) cel_fep_hwr_func_pane_g1

0x817f,	// (0x00052d52) bg_vkb2_func_pane_cp02_ParamLimits

0x817f,	// (0x00052d52) bg_vkb2_func_pane_cp02

0xe6b4,	// (0x00059287) cell_hwr_side_button_pane_g1_ParamLimits

0xe6b4,	// (0x00059287) cell_hwr_side_button_pane_g1

0x9af5,	// (0x000546c8) status_pane_g4_ParamLimits

0x9af5,	// (0x000546c8) status_pane_g4

0x9b0f,	// (0x000546e2) status_pane_t1

0xbf58,	// (0x00056b2b) form2_midp_gauge_slider_cont_pane

0xbf60,	// (0x00056b33) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbf72,	// (0x00056b45) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbf84,	// (0x00056b57) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x0005a6c3) form2_midp_gauge_slider_pane_t_ParamLimits

0xbf96,	// (0x00056b69) form2_midp_slider_pane_ParamLimits

0x6b32,	// (0x00051705) aid_size_cell_func_vkb2_ParamLimits

0x6b32,	// (0x00051705) aid_size_cell_func_vkb2

0xe655,	// (0x00059228) slider_pane_g4_ParamLimits

0xe655,	// (0x00059228) slider_pane_g4

0x7232,	// (0x00051e05) form2_midp_gauge_slider_pane_t2_cp01

0x7240,	// (0x00051e13) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7240,	// (0x00051e13) form2_midp_gauge_slider_pane_t3_cp01

0x725d,	// (0x00051e30) form2_midp_slider_pane_cp01

0x763e,	// (0x00052211) navi_smil_pane

0xe6ed,	// (0x000592c0) navi_smil_pane_g1

0xe6f5,	// (0x000592c8) navi_smil_pane_t1

0xe6c2,	// (0x00059295) form2_midp_slider_pane_g1

0xe6cb,	// (0x0005929e) form2_midp_slider_pane_g2

0xe6d3,	// (0x000592a6) form2_midp_slider_pane_g3

0xe6c2,	// (0x00059295) form2_midp_slider_pane_g4

0xe6db,	// (0x000592ae) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x0005a9f9) form2_midp_slider_pane_g

0x7222,	// (0x00051df5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7222,	// (0x00051df5) vkb2_area_bottom_space_btn_pane_g4

0x9924,	// (0x000544f7) lc0_navi_pane_ParamLimits

0x9924,	// (0x000544f7) lc0_navi_pane

0x999a,	// (0x0005456d) lc0_stat_indi_pane_ParamLimits

0x999a,	// (0x0005456d) lc0_stat_indi_pane

0x99b1,	// (0x00054584) ls0_title_pane_ParamLimits

0x99b1,	// (0x00054584) ls0_title_pane

0x8797,	// (0x0005336a) bg_popup_sub_pane_cp14_ParamLimits

0xdb15,	// (0x000586e8) list_uniindi_pane_ParamLimits

0xdb21,	// (0x000586f4) uniindi_top_pane_ParamLimits

0xdbbd,	// (0x00058790) list_single_uniindi_pane_g1_ParamLimits

0xdbd0,	// (0x000587a3) list_single_uniindi_pane_t1_ParamLimits

0x7266,	// (0x00051e39) lc0_stat_clock_pane_ParamLimits

0x7266,	// (0x00051e39) lc0_stat_clock_pane

0xe703,	// (0x000592d6) lc0_stat_indi_pane_g1_ParamLimits

0xe703,	// (0x000592d6) lc0_stat_indi_pane_g1

0xe710,	// (0x000592e3) lc0_stat_indi_pane_g2_ParamLimits

0xe710,	// (0x000592e3) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x0005aa04) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x0005aa04) lc0_stat_indi_pane_g

0x7273,	// (0x00051e46) lc0_uni_indicator_pane_ParamLimits

0x7273,	// (0x00051e46) lc0_uni_indicator_pane

0xe71d,	// (0x000592f0) ls0_title_pane_g1_ParamLimits

0xe71d,	// (0x000592f0) ls0_title_pane_g1

0xe731,	// (0x00059304) ls0_title_pane_t1_ParamLimits

0xe731,	// (0x00059304) ls0_title_pane_t1

0x7280,	// (0x00051e53) lc0_uni_indicator_pane_g1_ParamLimits

0x7280,	// (0x00051e53) lc0_uni_indicator_pane_g1

0xe767,	// (0x0005933a) lc0_stat_clock_pane_t1

0x48f4,	// (0x0004f4c7) main_ai5_pane

0xe775,	// (0x00059348) ai5_sk_pane_ParamLimits

0xe775,	// (0x00059348) ai5_sk_pane

0xe782,	// (0x00059355) cell_ai5_widget_pane_ParamLimits

0xe782,	// (0x00059355) cell_ai5_widget_pane

0xe83d,	// (0x00059410) aid_size_cell_widget_grid

0xe853,	// (0x00059426) bg_ai5_widget_pane_ParamLimits

0xe853,	// (0x00059426) bg_ai5_widget_pane

0xe8cb,	// (0x0005949e) cell_ai5_widget_pane_g2

0xe8df,	// (0x000594b2) cell_ai5_widget_pane_g3

0xe8f9,	// (0x000594cc) cell_ai5_widget_pane_g4

0xe909,	// (0x000594dc) cell_ai5_widget_pane_g5

0xe919,	// (0x000594ec) cell_ai5_widget_pane_g6

0xe925,	// (0x000594f8) cell_ai5_widget_pane_g7

0xe96d,	// (0x00059540) cell_ai5_widget_pane_t1_ParamLimits

0xe96d,	// (0x00059540) cell_ai5_widget_pane_t1

0xe98a,	// (0x0005955d) cell_ai5_widget_pane_t2_ParamLimits

0xe98a,	// (0x0005955d) cell_ai5_widget_pane_t2

0xe9a2,	// (0x00059575) cell_ai5_widget_pane_t3_ParamLimits

0xe9a2,	// (0x00059575) cell_ai5_widget_pane_t3

0xe9ba,	// (0x0005958d) cell_ai5_widget_pane_t4_ParamLimits

0xe9ba,	// (0x0005958d) cell_ai5_widget_pane_t4

0xe9e0,	// (0x000595b3) cell_ai5_widget_pane_t5_ParamLimits

0xe9e0,	// (0x000595b3) cell_ai5_widget_pane_t5

0xea00,	// (0x000595d3) cell_ai5_widget_pane_t6_ParamLimits

0xea00,	// (0x000595d3) cell_ai5_widget_pane_t6

0xea12,	// (0x000595e5) cell_ai5_widget_pane_t7_ParamLimits

0xea12,	// (0x000595e5) cell_ai5_widget_pane_t7

0xea2b,	// (0x000595fe) cell_ai5_widget_pane_t8_ParamLimits

0xea2b,	// (0x000595fe) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x0005aa1e) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x0005aa1e) cell_ai5_widget_pane_t

0xea8a,	// (0x0005965d) grid_ai5_widget_pane

0x8797,	// (0x0005336a) highlight_cell_ai5_widget_pane_ParamLimits

0x8797,	// (0x0005336a) highlight_cell_ai5_widget_pane

0xeaa1,	// (0x00059674) ai5_sk_left_pane

0xeaab,	// (0x0005967e) ai5_sk_middle_pane

0xeab5,	// (0x00059688) ai5_sk_right_pane

0xeabf,	// (0x00059692) bg_ai5_widget_pane_g1_ParamLimits

0xeabf,	// (0x00059692) bg_ai5_widget_pane_g1

0xeacb,	// (0x0005969e) bg_ai5_widget_pane_g2_ParamLimits

0xeacb,	// (0x0005969e) bg_ai5_widget_pane_g2

0xead7,	// (0x000596aa) bg_ai5_widget_pane_g3_ParamLimits

0xead7,	// (0x000596aa) bg_ai5_widget_pane_g3

0xeae3,	// (0x000596b6) bg_ai5_widget_pane_g4_ParamLimits

0xeae3,	// (0x000596b6) bg_ai5_widget_pane_g4

0xeaef,	// (0x000596c2) bg_ai5_widget_pane_g5_ParamLimits

0xeaef,	// (0x000596c2) bg_ai5_widget_pane_g5

0xeafb,	// (0x000596ce) bg_ai5_widget_pane_g6_ParamLimits

0xeafb,	// (0x000596ce) bg_ai5_widget_pane_g6

0xeb07,	// (0x000596da) bg_ai5_widget_pane_g7_ParamLimits

0xeb07,	// (0x000596da) bg_ai5_widget_pane_g7

0xeb13,	// (0x000596e6) bg_ai5_widget_pane_g8_ParamLimits

0xeb13,	// (0x000596e6) bg_ai5_widget_pane_g8

0xeb1f,	// (0x000596f2) bg_ai5_widget_pane_g9_ParamLimits

0xeb1f,	// (0x000596f2) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x0005aa33) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x0005aa33) bg_ai5_widget_pane_g

0xeb51,	// (0x00059724) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb51,	// (0x00059724) cell_shortcut_ai5_widget_pane

0x9420,	// (0x00053ff3) bg_cell_shortcut_ai5_widget_pane

0xeb62,	// (0x00059735) cell_grid_ai5_widget_pane_g1

0x9420,	// (0x00053ff3) highlight_cell_shortcut_ai5_widget_pane

0x9c7c,	// (0x0005484f) ai5_sk_left_pane_g1

0xeb6b,	// (0x0005973e) ai5_sk_left_pane_g2

0xeb73,	// (0x00059746) ai5_sk_left_pane_g3

0xeb7b,	// (0x0005974e) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x0005aa46) ai5_sk_left_pane_g

0xeb83,	// (0x00059756) ai5_sk_left_pane_t1

0x9c84,	// (0x00054857) ai5_sk_right_pane_g1

0xeb91,	// (0x00059764) ai5_sk_right_pane_g2

0xeb99,	// (0x0005976c) ai5_sk_right_pane_g3

0xeba1,	// (0x00059774) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x0005aa4f) ai5_sk_right_pane_g

0xeba9,	// (0x0005977c) ai5_sk_right_pane_t1

0x9c84,	// (0x00054857) ai5_sk_middle_pane_g1

0x9c7c,	// (0x0005484f) ai5_sk_middle_pane_g2

0x9c9c,	// (0x0005486f) ai5_sk_middle_pane_g3

0xeb99,	// (0x0005976c) ai5_sk_middle_pane_g4

0xeb73,	// (0x00059746) ai5_sk_middle_pane_g5

0xebb7,	// (0x0005978a) ai5_sk_middle_pane_g6

0xebbf,	// (0x00059792) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x0005aa58) ai5_sk_middle_pane_g

0x97b0,	// (0x00054383) aid_touch_area_size_lc0_ParamLimits

0x97b0,	// (0x00054383) aid_touch_area_size_lc0

0x68aa,	// (0x0005147d) cell_hwr_candidate_pane_t1_ParamLimits

0x97cc,	// (0x0005439f) aid_touch_navi_pane

0x9a9f,	// (0x00054672) status_dt_navi_pane_ParamLimits

0x9a9f,	// (0x00054672) status_dt_navi_pane

0x9aac,	// (0x0005467f) status_dt_sta_pane_ParamLimits

0x9aac,	// (0x0005467f) status_dt_sta_pane

0xebc7,	// (0x0005979a) dt_sta_controll_pane

0xebd4,	// (0x000597a7) dt_sta_indi_pane

0xebe5,	// (0x000597b8) dt_sta_title_pane

0x817f,	// (0x00052d52) bg_dt_sta_indi_pane_ParamLimits

0x817f,	// (0x00052d52) bg_dt_sta_indi_pane

0xebf8,	// (0x000597cb) dt_sta_battery_pane

0xec00,	// (0x000597d3) dt_sta_indi_pane_g1

0xec09,	// (0x000597dc) dt_sta_indi_pane_g2

0xec12,	// (0x000597e5) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x0005aa67) dt_sta_indi_pane_g

0xec1b,	// (0x000597ee) dt_sta_signal_pane

0x8797,	// (0x0005336a) bg_dt_sta_title_pane_ParamLimits

0x8797,	// (0x0005336a) bg_dt_sta_title_pane

0xec24,	// (0x000597f7) dt_sta_title_pane_g1

0xec2c,	// (0x000597ff) dt_sta_title_pane_t1_ParamLimits

0xec2c,	// (0x000597ff) dt_sta_title_pane_t1

0x763e,	// (0x00052211) bg_dt_sta_control_pane

0xec41,	// (0x00059814) dt_sta_controll_pane_g1

0xec4a,	// (0x0005981d) bg_dt_sta_title_pane_g1

0xec53,	// (0x00059826) bg_dt_sta_title_pane_g2

0xec5c,	// (0x0005982f) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x0005aa6e) bg_dt_sta_title_pane_g

0xc213,	// (0x00056de6) bg_dt_sta_indi_pane_g1

0xec65,	// (0x00059838) dt_sta_signal_pane_g1

0xec6d,	// (0x00059840) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x0005aa75) dt_sta_signal_pane_g

0xec75,	// (0x00059848) dt_sta_battery_pane_g1

0xec7e,	// (0x00059851) dt_sta_battery_pane_t1

0xc213,	// (0x00056de6) bg_dt_sta_control_pane_g1

0x8f1f,	// (0x00053af2) fep_china_uni_eep_pane

0x8f27,	// (0x00053afa) fep_china_uni_entry_pane_ParamLimits

0x8f37,	// (0x00053b0a) popup_fep_china_uni_window_g1_ParamLimits

0x8f47,	// (0x00053b1a) popup_fep_china_uni_window_g2_ParamLimits

0x8f47,	// (0x00053b1a) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005a2f5) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005a2f5) popup_fep_china_uni_window_g

0xec8d,	// (0x00059860) fep_china_uni_eep_pane_g1

0xec95,	// (0x00059868) fep_china_uni_eep_pane_t1

0xe6e4,	// (0x000592b7) aid_touch_area_size_smil_player

0x991c,	// (0x000544ef) lc0_clock_pane

0x9b03,	// (0x000546d6) status_pane_g5_ParamLimits

0x9b03,	// (0x000546d6) status_pane_g5

0x5ac7,	// (0x0005069a) popup_keymap_window

0x9ac1,	// (0x00054694) status_icon_pane

0xe8df,	// (0x000594b2) cell_ai5_widget_pane_g3_ParamLimits

0xe8f9,	// (0x000594cc) cell_ai5_widget_pane_g4_ParamLimits

0xe909,	// (0x000594dc) cell_ai5_widget_pane_g5_ParamLimits

0xe931,	// (0x00059504) cell_ai5_widget_pane_g8_ParamLimits

0xe931,	// (0x00059504) cell_ai5_widget_pane_g8

0xe945,	// (0x00059518) cell_ai5_widget_pane_g9_ParamLimits

0xe945,	// (0x00059518) cell_ai5_widget_pane_g9

0xe959,	// (0x0005952c) cell_ai5_widget_pane_g10_ParamLimits

0xe959,	// (0x0005952c) cell_ai5_widget_pane_g10

0xeca4,	// (0x00059877) status_icon_pane_g1

0x763e,	// (0x00052211) bg_popup_sub_pane_cp13

0xecac,	// (0x0005987f) popup_keymap_window_t1

0x96f5,	// (0x000542c8) control_pane_g6_ParamLimits

0x96f5,	// (0x000542c8) control_pane_g6

0x9702,	// (0x000542d5) control_pane_g7_ParamLimits

0x9702,	// (0x000542d5) control_pane_g7

0x970f,	// (0x000542e2) control_pane_g8_ParamLimits

0x970f,	// (0x000542e2) control_pane_g8

0xebc7,	// (0x0005979a) dt_sta_controll_pane_ParamLimits

0xebd4,	// (0x000597a7) dt_sta_indi_pane_ParamLimits

0xebe5,	// (0x000597b8) dt_sta_title_pane_ParamLimits

0x86c3,	// (0x00053296) aid_size_touch_scroll_bar_cale

0x49cd,	// (0x0004f5a0) popup_discreet_window_ParamLimits

0x49cd,	// (0x0004f5a0) popup_discreet_window

0x4a55,	// (0x0004f628) popup_sk_window

0xa2fb,	// (0x00054ece) bg_popup_sub_pane_cp28_ParamLimits

0xa2fb,	// (0x00054ece) bg_popup_sub_pane_cp28

0xecba,	// (0x0005988d) popup_discreet_window_g1_ParamLimits

0xecba,	// (0x0005988d) popup_discreet_window_g1

0xecda,	// (0x000598ad) popup_discreet_window_t1_ParamLimits

0xecda,	// (0x000598ad) popup_discreet_window_t1

0xecf8,	// (0x000598cb) popup_discreet_window_t2_ParamLimits

0xecf8,	// (0x000598cb) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x0005aa7a) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x0005aa7a) popup_discreet_window_t

0x7294,	// (0x00051e67) popup_sk_window_g1

0x729e,	// (0x00051e71) popup_sk_window_g2

0x0001,

0xfeae,	// (0x0005aa81) popup_sk_window_g

0x72a6,	// (0x00051e79) popup_sk_window_t1

0x72b4,	// (0x00051e87) popup_sk_window_t1_copy1

0xe8cb,	// (0x0005949e) cell_ai5_widget_pane_g2_ParamLimits

0xea3d,	// (0x00059610) cell_ai5_widget_pane_t9_ParamLimits

0xea3d,	// (0x00059610) cell_ai5_widget_pane_t9

0x763e,	// (0x00052211) main_fep_fshwr2_pane

0x72c2,	// (0x00051e95) aid_fshwr2_btn_pane

0x72ce,	// (0x00051ea1) aid_fshwr2_syb_pane

0x72e0,	// (0x00051eb3) aid_fshwr2_txt_pane

0x72ec,	// (0x00051ebf) fshwr2_func_candi_pane

0x7308,	// (0x00051edb) fshwr2_hwr_syb_pane

0x7322,	// (0x00051ef5) fshwr2_icf_pane

0x48f4,	// (0x0004f4c7) fshwr2_icf_bg_pane

0x734e,	// (0x00051f21) fshwr2_icf_pane_t1_ParamLimits

0x734e,	// (0x00051f21) fshwr2_icf_pane_t1

0x8e0d,	// (0x000539e0) fshwr2_func_candi_pane_g1

0xed4a,	// (0x0005991d) fshwr2_func_candi_row_pane_ParamLimits

0xed4a,	// (0x0005991d) fshwr2_func_candi_row_pane

0x7366,	// (0x00051f39) cell_fshwr2_syb_pane_ParamLimits

0x7366,	// (0x00051f39) cell_fshwr2_syb_pane

0x7387,	// (0x00051f5a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7387,	// (0x00051f5a) fshwr2_hwr_syb_pane_g1

0x48f4,	// (0x0004f4c7) bg_popup_call_pane_cp01

0x7395,	// (0x00051f68) fshwr2_func_candi_cell_pane_ParamLimits

0x7395,	// (0x00051f68) fshwr2_func_candi_cell_pane

0xed6f,	// (0x00059942) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed6f,	// (0x00059942) fshwr2_func_candi_cell_bg_pane

0x73e0,	// (0x00051fb3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x73e0,	// (0x00051fb3) fshwr2_func_candi_cell_pane_g1

0x7408,	// (0x00051fdb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7408,	// (0x00051fdb) fshwr2_func_candi_cell_pane_t1

0x48f4,	// (0x0004f4c7) bg_button_pane_cp08

0xed7b,	// (0x0005994e) cell_fshwr2_syb_bg_pane

0x741b,	// (0x00051fee) cell_fshwr2_syb_bg_pane_g1

0x742f,	// (0x00052002) cell_fshwr2_syb_bg_pane_t1

0x8797,	// (0x0005336a) main_tmo_pane

0xae0a,	// (0x000559dd) uni_indicator_pane_g1_ParamLimits

0xae1d,	// (0x000559f0) uni_indicator_pane_g2_ParamLimits

0xae2f,	// (0x00055a02) uni_indicator_pane_g3_ParamLimits

0xae3e,	// (0x00055a11) uni_indicator_pane_g4_ParamLimits

0xae3e,	// (0x00055a11) uni_indicator_pane_g4

0xae52,	// (0x00055a25) uni_indicator_pane_g5_ParamLimits

0xae52,	// (0x00055a25) uni_indicator_pane_g5

0xae52,	// (0x00055a25) uni_indicator_pane_g6_ParamLimits

0xae52,	// (0x00055a25) uni_indicator_pane_g6

0xf926,	// (0x0005a4f9) uni_indicator_pane_g_ParamLimits

0xd6fa,	// (0x000582cd) popup_tmo_note_window_ParamLimits

0xd6fa,	// (0x000582cd) popup_tmo_note_window

0x6b14,	// (0x000516e7) fshwr2_bg_pane

0x73f9,	// (0x00051fcc) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x73f9,	// (0x00051fcc) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x0005aa86) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x0005aa86) fshwr2_func_candi_cell_pane_g

0x6863,	// (0x00051436) bg_popup_window_pane_cp01

0x7445,	// (0x00052018) bg_popup_window_pane_g1_cp01

0xed87,	// (0x0005995a) bg_popup_window_pane_cp22_ParamLimits

0xed87,	// (0x0005995a) bg_popup_window_pane_cp22

0xed95,	// (0x00059968) listscroll_tmo_link_pane_ParamLimits

0xed95,	// (0x00059968) listscroll_tmo_link_pane

0xedd5,	// (0x000599a8) popup_tmo_note_window_g1_ParamLimits

0xedd5,	// (0x000599a8) popup_tmo_note_window_g1

0xede2,	// (0x000599b5) tmo_note_info_pane_ParamLimits

0xede2,	// (0x000599b5) tmo_note_info_pane

0xedfc,	// (0x000599cf) list_tmo_note_info_pane_g1_ParamLimits

0xedfc,	// (0x000599cf) list_tmo_note_info_pane_g1

0xee13,	// (0x000599e6) list_tmo_note_info_pane_g2_ParamLimits

0xee13,	// (0x000599e6) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x0005aa8b) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x0005aa8b) list_tmo_note_info_pane_g

0xee2f,	// (0x00059a02) list_tmo_note_info_text_pane_ParamLimits

0xee2f,	// (0x00059a02) list_tmo_note_info_text_pane

0xeeb0,	// (0x00059a83) list_tmo_link_pane

0xeebd,	// (0x00059a90) scroll_pane_cp20

0xeeca,	// (0x00059a9d) list_single_tmo_link_pane_ParamLimits

0xeeca,	// (0x00059a9d) list_single_tmo_link_pane

0xeeda,	// (0x00059aad) list_single_tmo_link_pane_t1

0xeee8,	// (0x00059abb) list_tmo_note_info_text_pane_t1_ParamLimits

0xeee8,	// (0x00059abb) list_tmo_note_info_text_pane_t1

0x8842,	// (0x00053415) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8842,	// (0x00053415) aid_size_touch_scroll_bar_cp01

0x5190,	// (0x0004fd63) aid_size_touch_slider_marker

0x4a3d,	// (0x0004f610) popup_settings_window_ParamLimits

0x4a3d,	// (0x0004f610) popup_settings_window

0x594c,	// (0x0005051f) popup_candi_list_indi_window

0x97cc,	// (0x0005439f) aid_touch_navi_pane_ParamLimits

0x6a6f,	// (0x00051642) rs_clock_indi_pane

0x6a78,	// (0x0005164b) sctrl_sk_bottom_pane_ParamLimits

0x6a89,	// (0x0005165c) sctrl_sk_top_pane_ParamLimits

0x6b8c,	// (0x0005175f) popup_fep_tooltip_window

0xe83d,	// (0x00059410) aid_size_cell_widget_grid_ParamLimits

0xe8b6,	// (0x00059489) cell_ai5_widget_pane_g1_ParamLimits

0xe8b6,	// (0x00059489) cell_ai5_widget_pane_g1

0xe919,	// (0x000594ec) cell_ai5_widget_pane_g6_ParamLimits

0xe925,	// (0x000594f8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x0005aa09) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x0005aa09) cell_ai5_widget_pane_g

0xea6c,	// (0x0005963f) cell_ai5_widget_pane_t10_ParamLimits

0xea6c,	// (0x0005963f) cell_ai5_widget_pane_t10

0xea8a,	// (0x0005965d) grid_ai5_widget_pane_ParamLimits

0xeb2b,	// (0x000596fe) cell_contacts_ai5_widget_pane_ParamLimits

0xeb2b,	// (0x000596fe) cell_contacts_ai5_widget_pane

0xed0d,	// (0x000598e0) popup_discreet_window_t3_ParamLimits

0xed0d,	// (0x000598e0) popup_discreet_window_t3

0x733a,	// (0x00051f0d) popup_fshwr2_char_preview_window_ParamLimits

0x733a,	// (0x00051f0d) popup_fshwr2_char_preview_window

0xee4d,	// (0x00059a20) tmo_note_info_pane_t1

0xee62,	// (0x00059a35) tmo_note_info_pane_t2

0xee77,	// (0x00059a4a) tmo_note_info_pane_t3

0xee8c,	// (0x00059a5f) tmo_note_info_pane_t4

0xee9e,	// (0x00059a71) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x0005aa90) tmo_note_info_pane_t

0xeeb0,	// (0x00059a83) list_tmo_link_pane_ParamLimits

0xeebd,	// (0x00059a90) scroll_pane_cp20_ParamLimits

0x48f4,	// (0x0004f4c7) bg_popup_fep_char_preview_window_cp01

0xef01,	// (0x00059ad4) popup_fshwr2_char_preview_window_t1

0xef0f,	// (0x00059ae2) popup_candi_list_indi_window_g1

0xef18,	// (0x00059aeb) bg_cell_contacts_ai5_widget_pane

0xef24,	// (0x00059af7) cell_contacts_ai5_widget_pane_g1

0xc8b1,	// (0x00057484) cell_contacts_ai5_widget_pane_g2

0xef39,	// (0x00059b0c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x0005aa9b) cell_contacts_ai5_widget_pane_g

0xef45,	// (0x00059b18) cell_contacts_ai5_widget_pane_t1

0x8797,	// (0x0005336a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefbc,	// (0x00059b8f) settings_container_pane

0x9420,	// (0x00053ff3) listscroll_set_pane_copy1

0xb923,	// (0x000564f6) scroll_pane_cp121_copy1

0xa0a0,	// (0x00054c73) set_content_pane_copy1

0xefc8,	// (0x00059b9b) aid_height_set_list_copy1_ParamLimits

0xefc8,	// (0x00059b9b) aid_height_set_list_copy1

0xb04a,	// (0x00055c1d) aid_size_parent_copy1_ParamLimits

0xb04a,	// (0x00055c1d) aid_size_parent_copy1

0xefd4,	// (0x00059ba7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd4,	// (0x00059ba7) button_value_adjust_pane_cp6_copy1

0x9744,	// (0x00054317) list_highlight_pane_cp2_copy1_ParamLimits

0x9744,	// (0x00054317) list_highlight_pane_cp2_copy1

0xefe8,	// (0x00059bbb) list_set_pane_copy1_ParamLimits

0xefe8,	// (0x00059bbb) list_set_pane_copy1

0xef57,	// (0x00059b2a) main_pane_set_t1_copy1_ParamLimits

0xef57,	// (0x00059b2a) main_pane_set_t1_copy1

0xef91,	// (0x00059b64) main_pane_set_t2_copy1_ParamLimits

0xef91,	// (0x00059b64) main_pane_set_t2_copy1

0xf095,	// (0x00059c68) main_pane_set_t3_copy1

0xf0a3,	// (0x00059c76) main_pane_set_t4_copy1

0xefb0,	// (0x00059b83) set_content_pane_g1_copy1_ParamLimits

0xefb0,	// (0x00059b83) set_content_pane_g1_copy1

0xf0b1,	// (0x00059c84) setting_code_pane_copy1

0xf0b9,	// (0x00059c8c) setting_slider_graphic_pane_copy1

0xf0b9,	// (0x00059c8c) setting_slider_pane_copy1

0xf0b9,	// (0x00059c8c) setting_text_pane_copy1

0xf0b9,	// (0x00059c8c) setting_volume_pane_copy1

0xf0b1,	// (0x00059c84) settings_code_pane_cp2_copy1

0xf0c1,	// (0x00059c94) settings_code_pane_cp_copy1_ParamLimits

0xf0c1,	// (0x00059c94) settings_code_pane_cp_copy1

0x744e,	// (0x00052021) volume_set_pane_copy1

0xf0d5,	// (0x00059ca8) volume_set_pane_g10_copy1

0xf0dd,	// (0x00059cb0) volume_set_pane_g1_copy1

0xf0e5,	// (0x00059cb8) volume_set_pane_g2_copy1

0xf0ed,	// (0x00059cc0) volume_set_pane_g3_copy1

0xf0f5,	// (0x00059cc8) volume_set_pane_g4_copy1

0xf0fd,	// (0x00059cd0) volume_set_pane_g5_copy1

0xf105,	// (0x00059cd8) volume_set_pane_g6_copy1

0xf10d,	// (0x00059ce0) volume_set_pane_g7_copy1

0xf115,	// (0x00059ce8) volume_set_pane_g8_copy1

0xf11d,	// (0x00059cf0) volume_set_pane_g9_copy1

0x7732,	// (0x00052305) bg_set_opt_pane_cp_copy1_ParamLimits

0x7732,	// (0x00052305) bg_set_opt_pane_cp_copy1

0x7456,	// (0x00052029) setting_slider_pane_t1_copy1_ParamLimits

0x7456,	// (0x00052029) setting_slider_pane_t1_copy1

0x7474,	// (0x00052047) setting_slider_pane_t2_copy1_ParamLimits

0x7474,	// (0x00052047) setting_slider_pane_t2_copy1

0x748e,	// (0x00052061) setting_slider_pane_t3_copy1_ParamLimits

0x748e,	// (0x00052061) setting_slider_pane_t3_copy1

0x74a6,	// (0x00052079) slider_set_pane_copy1_ParamLimits

0x74a6,	// (0x00052079) slider_set_pane_copy1

0x87e3,	// (0x000533b6) set_opt_bg_pane_g1_copy2

0x87eb,	// (0x000533be) set_opt_bg_pane_g2_copy2

0xf125,	// (0x00059cf8) set_opt_bg_pane_g3_copy2

0x87fb,	// (0x000533ce) set_opt_bg_pane_g4_copy2

0x8803,	// (0x000533d6) set_opt_bg_pane_g5_copy2

0x880b,	// (0x000533de) set_opt_bg_pane_g6_copy2

0xf12f,	// (0x00059d02) set_opt_bg_pane_g7_copy2

0xf137,	// (0x00059d0a) set_opt_bg_pane_g8_copy2

0xf141,	// (0x00059d14) set_opt_bg_pane_g9_copy2

0x74bc,	// (0x0005208f) aid_size_touch_slider_mark_copy1_ParamLimits

0x74bc,	// (0x0005208f) aid_size_touch_slider_mark_copy1

0xf14b,	// (0x00059d1e) slider_set_pane_g1_copy1

0x74d0,	// (0x000520a3) slider_set_pane_g2_copy1

0x6312,	// (0x00050ee5) slider_set_pane_g3_copy1_ParamLimits

0x6312,	// (0x00050ee5) slider_set_pane_g3_copy1

0x6326,	// (0x00050ef9) slider_set_pane_g4_copy1_ParamLimits

0x6326,	// (0x00050ef9) slider_set_pane_g4_copy1

0x633e,	// (0x00050f11) slider_set_pane_g5_copy1_ParamLimits

0x633e,	// (0x00050f11) slider_set_pane_g5_copy1

0x6312,	// (0x00050ee5) slider_set_pane_g6_copy1_ParamLimits

0x6312,	// (0x00050ee5) slider_set_pane_g6_copy1

0x74d8,	// (0x000520ab) slider_set_pane_g7_copy1_ParamLimits

0x74d8,	// (0x000520ab) slider_set_pane_g7_copy1

0x7652,	// (0x00052225) bg_set_opt_pane_cp2_copy1

0xf154,	// (0x00059d27) setting_slider_graphic_pane_g1_copy1

0xf15d,	// (0x00059d30) setting_slider_graphic_pane_t1_copy1

0xf16d,	// (0x00059d40) setting_slider_graphic_pane_t2_copy1

0xf17d,	// (0x00059d50) slider_set_pane_cp_copy1

0xf18d,	// (0x00059d60) input_focus_pane_cp1_copy1

0xf196,	// (0x00059d69) list_set_text_pane_copy1

0xf19e,	// (0x00059d71) setting_text_pane_g1_copy1

0x811f,	// (0x00052cf2) set_text_pane_t1_copy1

0xf18d,	// (0x00059d60) input_focus_pane_cp2_copy1

0xf19e,	// (0x00059d71) setting_code_pane_g1_copy1

0xf1a7,	// (0x00059d7a) setting_code_pane_t1_copy1

0xf1b5,	// (0x00059d88) list_set_graphic_pane_copy1

0x7652,	// (0x00052225) bg_set_opt_pane_cp4_copy1

0x911b,	// (0x00053cee) list_set_graphic_pane_g1_copy1_ParamLimits

0x911b,	// (0x00053cee) list_set_graphic_pane_g1_copy1

0xf1c8,	// (0x00059d9b) list_set_graphic_pane_g2_copy1

0x9133,	// (0x00053d06) list_set_graphic_pane_t1_copy1_ParamLimits

0x9133,	// (0x00053d06) list_set_graphic_pane_t1_copy1

0xc213,	// (0x00056de6) rs_clock_indi_pane_g1

0xf1d0,	// (0x00059da3) rs_clock_indi_pane_t1

0xf1de,	// (0x00059db1) rs_indi_pane

0xf1e6,	// (0x00059db9) rs_indi_pane_g1

0xf1ef,	// (0x00059dc2) rs_indi_pane_g2

0xf1f8,	// (0x00059dcb) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x0005aaa2) rs_indi_pane_g

0x9420,	// (0x00053ff3) bg_popup_preview_window_pane_cp03

0xf201,	// (0x00059dd4) popup_fep_tooltip_window_t1

0xce9b,	// (0x00057a6e) popup_note2_window_g2_ParamLimits

0xce9b,	// (0x00057a6e) popup_note2_window_g2

0x0001,

0xfc68,	// (0x0005a83b) popup_note2_window_g_ParamLimits

0xfc68,	// (0x0005a83b) popup_note2_window_g

0xd396,	// (0x00057f69) bg_popup_sub_pane_cp11_ParamLimits

0xd3a3,	// (0x00057f76) cell_ai3_links_pane_g1_ParamLimits

0xd3ba,	// (0x00057f8d) cell_ai3_links_pane_t1

0x811f,	// (0x00052cf2) set_text_pane_t1_copy1_ParamLimits

0x9331,	// (0x00053f04) cell_graphic_popup_pane_cp2_ParamLimits

0x9331,	// (0x00053f04) cell_graphic_popup_pane_cp2

0xf20f,	// (0x00059de2) cell_graphic_popup_pane_g1_cp2

0x84d6,	// (0x000530a9) cell_graphic_popup_pane_g2_cp2

0xf217,	// (0x00059dea) cell_graphic_popup_pane_g3_cp2

0xf21f,	// (0x00059df2) cell_graphic_popup_pane_t2_cp2

0x84e7,	// (0x000530ba) grid_highlight_pane_cp3_cp2

0x8b28,	// (0x000536fb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8797,	// (0x0005336a) main_tmo_pane_ParamLimits

0xd6ee,	// (0x000582c1) popup_tmo_big_image_note_window

0xe8a5,	// (0x00059478) cell_ai5_widget_list_pane

0xe8ad,	// (0x00059480) cell_ai5_widget_lrg_icon_pane

0xee4d,	// (0x00059a20) tmo_note_info_pane_t1_ParamLimits

0xee62,	// (0x00059a35) tmo_note_info_pane_t2_ParamLimits

0xee77,	// (0x00059a4a) tmo_note_info_pane_t3_ParamLimits

0xee8c,	// (0x00059a5f) tmo_note_info_pane_t4_ParamLimits

0xee9e,	// (0x00059a71) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x0005aa90) tmo_note_info_pane_t_ParamLimits

0xefbc,	// (0x00059b8f) settings_container_pane_ParamLimits

0xf185,	// (0x00059d58) indicator_popup_pane_cp5

0xf185,	// (0x00059d58) indicator_popup_pane_cp6

0xf1b5,	// (0x00059d88) list_set_graphic_pane_copy1_ParamLimits

0x763e,	// (0x00052211) bg_popup_window_pane_cp23

0xf22d,	// (0x00059e00) popup_tmo_big_image_note_window_g1

0xf237,	// (0x00059e0a) popup_tmo_big_image_note_window_t1

0xf247,	// (0x00059e1a) popup_tmo_big_image_note_window_t2

0xf257,	// (0x00059e2a) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x0005aaa9) popup_tmo_big_image_note_window_t

0xc213,	// (0x00056de6) cell_ai5_widget_lrg_icon_pane_g1

0xf267,	// (0x00059e3a) cell_ai5_widget_lrg_icon_pane_t1

0xf275,	// (0x00059e48) cell_ai5_widget_list_row_pane_ParamLimits

0xf275,	// (0x00059e48) cell_ai5_widget_list_row_pane

0xf28c,	// (0x00059e5f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf28c,	// (0x00059e5f) cell_ai5_widget_list_row_pane_g1

0xf299,	// (0x00059e6c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf299,	// (0x00059e6c) cell_ai5_widget_list_row_pane_t1

0xf2ca,	// (0x00059e9d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2ca,	// (0x00059e9d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedd,	// (0x0005aab0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x0005aab0) cell_ai5_widget_list_row_pane_t

0x48f4,	// (0x0004f4c7) main_fep_vtchi_ss_pane

0xf312,	// (0x00059ee5) popup_fep_char_pre_window

0xf31a,	// (0x00059eed) popup_fep_ituss_window

0xf346,	// (0x00059f19) popup_fep_vkbss_window

0xf370,	// (0x00059f43) grid_vkbss_keypad_pane_ParamLimits

0xf370,	// (0x00059f43) grid_vkbss_keypad_pane

0xf380,	// (0x00059f53) ituss_keypad_pane

0x74fa,	// (0x000520cd) aid_vkbss_key_offset_ParamLimits

0x74fa,	// (0x000520cd) aid_vkbss_key_offset

0x7506,	// (0x000520d9) cell_vkbss_key_pane_ParamLimits

0x7506,	// (0x000520d9) cell_vkbss_key_pane

0xf38f,	// (0x00059f62) bg_cell_vkbss_key_g1_ParamLimits

0xf38f,	// (0x00059f62) bg_cell_vkbss_key_g1

0xf39b,	// (0x00059f6e) cell_vkbss_key_3p_pane_ParamLimits

0xf39b,	// (0x00059f6e) cell_vkbss_key_3p_pane

0xf3af,	// (0x00059f82) cell_vkbss_key_g1_ParamLimits

0xf3af,	// (0x00059f82) cell_vkbss_key_g1

0xf3c3,	// (0x00059f96) cell_vkbss_key_t1_ParamLimits

0xf3c3,	// (0x00059f96) cell_vkbss_key_t1

0x751c,	// (0x000520ef) cell_ituss_key_pane_ParamLimits

0x751c,	// (0x000520ef) cell_ituss_key_pane

0xf3ee,	// (0x00059fc1) bg_cell_ituss_key_g1_ParamLimits

0xf3ee,	// (0x00059fc1) bg_cell_ituss_key_g1

0xf3fa,	// (0x00059fcd) cell_ituss_key_pane_g1_ParamLimits

0xf3fa,	// (0x00059fcd) cell_ituss_key_pane_g1

0x752d,	// (0x00052100) cell_ituss_key_pane_g2_ParamLimits

0x752d,	// (0x00052100) cell_ituss_key_pane_g2

0x0002,

0xfee4,	// (0x0005aab7) cell_ituss_key_pane_g_ParamLimits

0xfee4,	// (0x0005aab7) cell_ituss_key_pane_g

0x7559,	// (0x0005212c) cell_ituss_key_t1_ParamLimits

0x7559,	// (0x0005212c) cell_ituss_key_t1

0x7593,	// (0x00052166) cell_ituss_key_t2_ParamLimits

0x7593,	// (0x00052166) cell_ituss_key_t2

0x75c4,	// (0x00052197) cell_ituss_key_t3_ParamLimits

0x75c4,	// (0x00052197) cell_ituss_key_t3

0x7593,	// (0x00052166) cell_ituss_key_t4_ParamLimits

0x7593,	// (0x00052166) cell_ituss_key_t4

0x0004,

0xfeeb,	// (0x0005aabe) cell_ituss_key_t_ParamLimits

0xfeeb,	// (0x0005aabe) cell_ituss_key_t

0xf426,	// (0x00059ff9) cell_vkbss_key_3p_pane_g1

0xf42e,	// (0x0005a001) cell_vkbss_key_3p_pane_g2

0xf436,	// (0x0005a009) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0005aac9) cell_vkbss_key_3p_pane_g

0x9420,	// (0x00053ff3) bg_popup_fep_char_preview_window_cp02

0xf43e,	// (0x0005a011) popup_fep_char_pre_window_t1

0xe82a,	// (0x000593fd) main_ai5_sk_pane

0xef18,	// (0x00059aeb) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef24,	// (0x00059af7) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc8b1,	// (0x00057484) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef39,	// (0x00059b0c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x0005aa9b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef45,	// (0x00059b18) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8797,	// (0x0005336a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf44c,	// (0x0005a01f) main_ai5_sk_pane_g1

0xa134,	// (0x00054d07) popup_query_code_window_g1

0xf330,	// (0x00059f03) popup_fep_vkb_icf_pane

0xf35a,	// (0x00059f2d) popup_fep_vtchi_icf_pane

0xf455,	// (0x0005a028) bg_icf_pane

0xf461,	// (0x0005a034) list_vkb_icf_pane

0xf470,	// (0x0005a043) bg_icf_pane_cp01

0xf483,	// (0x0005a056) vtchi_icf_list_pane

0xf493,	// (0x0005a066) list_vkb_icf_pane_t1_ParamLimits

0xf493,	// (0x0005a066) list_vkb_icf_pane_t1

0xf4b4,	// (0x0005a087) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x0005a087) vtchi_icf_list_pane_t1

0xf31a,	// (0x00059eed) popup_fep_ituss_window_ParamLimits

0xf35a,	// (0x00059f2d) popup_fep_vtchi_icf_pane_ParamLimits

0xf380,	// (0x00059f53) ituss_keypad_pane_ParamLimits

0x74ee,	// (0x000520c1) ituss_sks_pane

0xf455,	// (0x0005a028) bg_icf_pane_ParamLimits

0xf2f2,	// (0x00059ec5) icf_edit_indi_pane_ParamLimits

0xf2f2,	// (0x00059ec5) icf_edit_indi_pane

0xf461,	// (0x0005a034) list_vkb_icf_pane_ParamLimits

0xf470,	// (0x0005a043) bg_icf_pane_cp01_ParamLimits

0xf305,	// (0x00059ed8) icf_edit_indi_pane_cp01_ParamLimits

0xf305,	// (0x00059ed8) icf_edit_indi_pane_cp01

0xf48b,	// (0x0005a05e) vtchi_query_pane

0xe6b4,	// (0x00059287) icf_edit_indi_pane_g1_ParamLimits

0xe6b4,	// (0x00059287) icf_edit_indi_pane_g1

0xf525,	// (0x0005a0f8) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0005a0f8) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x0005aae1) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x0005aae1) icf_edit_indi_pane_g

0xf537,	// (0x0005a10a) icf_edit_indi_pane_t1

0xf4ce,	// (0x0005a0a1) bg_input_focus_pane_cp042

0x86ba,	// (0x0005328d) vtchi_button_pane

0xf4d7,	// (0x0005a0aa) vtchi_query_pane_t1

0xf4e5,	// (0x0005a0b8) vtchi_query_pane_t2

0xf4f3,	// (0x0005a0c6) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x0005aad0) vtchi_query_pane_t

0x48f4,	// (0x0004f4c7) bg_button_pane_cp13

0xf501,	// (0x0005a0d4) vtchi_button_pane_g1

0x7607,	// (0x000521da) ituss_sks_pane_g1

0x7612,	// (0x000521e5) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x0005aad7) ituss_sks_pane_g

0xf509,	// (0x0005a0dc) ituss_sks_pane_t1

0xf517,	// (0x0005a0ea) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0005aadc) ituss_sks_pane_t

0xbc9e,	// (0x00056871) indicator_nsta_pane_cp_g1

0xbca6,	// (0x00056879) indicator_nsta_pane_cp_g2

0xbcae,	// (0x00056881) indicator_nsta_pane_cp_g3

0xbc9e,	// (0x00056871) indicator_nsta_pane_cp_g4

0xbca6,	// (0x00056879) indicator_nsta_pane_cp_g5

0xbcae,	// (0x00056881) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x0005a679) indicator_nsta_pane_cp_g

0xe3f3,	// (0x00058fc6) cell_graphic2_pane_t2_ParamLimits

0xe3f3,	// (0x00058fc6) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x0005a992) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x0005a992) cell_graphic2_pane_t

0xe420,	// (0x00058ff3) cell_graphic2_control_pane_t1

0x8ece,	// (0x00053aa1) signal_pane_g3_ParamLimits

0x8ece,	// (0x00053aa1) signal_pane_g3

0x8ee0,	// (0x00053ab3) signal_pane_g4_ParamLimits

0x8ee0,	// (0x00053ab3) signal_pane_g4

0xf2dc,	// (0x00059eaf) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2dc,	// (0x00059eaf) cell_ai5_widget_list_row_pane_t3

0xf414,	// (0x00059fe7) cell_ituss_key_pane_t1_ParamLimits

0xf414,	// (0x00059fe7) cell_ituss_key_pane_t1

0x9d79,	// (0x0005494c) form_field_data_wide_pane_vc_t2_ParamLimits

0x9d79,	// (0x0005494c) form_field_data_wide_pane_vc_t2

0x9d8d,	// (0x00054960) form_field_data_wide_pane_vc_t3_ParamLimits

0x9d8d,	// (0x00054960) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x0005a3e1) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x0005a3e1) form_field_data_wide_pane_vc_t

0xb965,	// (0x00056538) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb965,	// (0x00056538) form_field_slider_wide_pane_vc_t3

0xba43,	// (0x00056616) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba43,	// (0x00056616) form_field_popup_wide_pane_vc_t2

0xba5a,	// (0x0005662d) form_field_popup_wide_pane_vc_t3_ParamLimits

0xba5a,	// (0x0005662d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x0005a668) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0005a668) form_field_popup_wide_pane_vc_t

0x72c2,	// (0x00051e95) aid_fshwr2_btn_pane_ParamLimits

0x72ce,	// (0x00051ea1) aid_fshwr2_syb_pane_ParamLimits

0x72e0,	// (0x00051eb3) aid_fshwr2_txt_pane_ParamLimits

0x6b14,	// (0x000516e7) fshwr2_bg_pane_ParamLimits

0x72ec,	// (0x00051ebf) fshwr2_func_candi_pane_ParamLimits

0x7308,	// (0x00051edb) fshwr2_hwr_syb_pane_ParamLimits

0x7322,	// (0x00051ef5) fshwr2_icf_pane_ParamLimits

0x7d14,	// (0x000528e7) list_double_graphic_pane_vc_g4_ParamLimits

0x7d14,	// (0x000528e7) list_double_graphic_pane_vc_g4

0x754d,	// (0x00052120) cell_ituss_key_pane_g3_ParamLimits

0x754d,	// (0x00052120) cell_ituss_key_pane_g3

0x75f5,	// (0x000521c8) cell_ituss_key_t5_ParamLimits

0x75f5,	// (0x000521c8) cell_ituss_key_t5

0xf346,	// (0x00059f19) popup_fep_vkbss_window_ParamLimits

0xe834,	// (0x00059407) aid_cell_ai5_quarter

0xf537,	// (0x0005a10a) icf_edit_indi_pane_t1_ParamLimits

0x8227,	// (0x00052dfa) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8227,	// (0x00052dfa) aid_tch_indicator_popup_pane_cp2

0x823a,	// (0x00052e0d) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x823a,	// (0x00052e0d) aid_tch_query_popup_data_pane_cp2

0xa0dc,	// (0x00054caf) aid_tch_query_popup_pane_ParamLimits

0xa0dc,	// (0x00054caf) aid_tch_query_popup_pane

0xa0dc,	// (0x00054caf) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa0dc,	// (0x00054caf) aid_tch_query_popup_data_pane_cp1

0xed7b,	// (0x0005994e) cell_fshwr2_syb_bg_pane_ParamLimits

0x741b,	// (0x00051fee) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x742f,	// (0x00052002) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf330,	// (0x00059f03) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large

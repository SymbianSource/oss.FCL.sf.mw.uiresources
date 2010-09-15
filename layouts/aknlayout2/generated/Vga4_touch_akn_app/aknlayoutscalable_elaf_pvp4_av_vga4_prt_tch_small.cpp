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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001e9c3 };

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
0x5ef1,	// (0x000248b4) Screen

0x5efd,	// (0x000248c0) application_window_ParamLimits

0x5efd,	// (0x000248c0) application_window

0x154f,	// (0x0001ff12) screen_g1

0x5f59,	// (0x0002491c) area_bottom_pane_ParamLimits

0x5f59,	// (0x0002491c) area_bottom_pane

0x6019,	// (0x000249dc) area_top_pane_ParamLimits

0x6019,	// (0x000249dc) area_top_pane

0x60ad,	// (0x00024a70) main_pane_ParamLimits

0x60ad,	// (0x00024a70) main_pane

0x1559,	// (0x0001ff1c) misc_graphics

0x94ee,	// (0x00027eb1) battery_pane_ParamLimits

0x94ee,	// (0x00027eb1) battery_pane

0xa1b6,	// (0x00028b79) bg_status_flat_pane_g8

0xa1be,	// (0x00028b81) bg_status_flat_pane_g9

0x95b6,	// (0x00027f79) context_pane_ParamLimits

0x95b6,	// (0x00027f79) context_pane

0x96da,	// (0x0002809d) navi_pane_ParamLimits

0x96da,	// (0x0002809d) navi_pane

0x976a,	// (0x0002812d) signal_pane_ParamLimits

0x976a,	// (0x0002812d) signal_pane

0x0008,

0xf854,	// (0x0002e217) bg_status_flat_pane_g

0x97d7,	// (0x0002819a) status_pane_g1_ParamLimits

0x97d7,	// (0x0002819a) status_pane_g1

0x97e3,	// (0x000281a6) status_pane_g2_ParamLimits

0x97e3,	// (0x000281a6) status_pane_g2

0x97ef,	// (0x000281b2) status_pane_g3_ParamLimits

0x97ef,	// (0x000281b2) status_pane_g3

0x0004,

0xf77b,	// (0x0002e13e) status_pane_g_ParamLimits

0xf77b,	// (0x0002e13e) status_pane_g

0x9823,	// (0x000281e6) title_pane_ParamLimits

0x9823,	// (0x000281e6) title_pane

0x9862,	// (0x00028225) uni_indicator_pane_ParamLimits

0x9862,	// (0x00028225) uni_indicator_pane

0x9420,	// (0x00027de3) bg_list_pane_ParamLimits

0x9420,	// (0x00027de3) bg_list_pane

0x553d,	// (0x00023f00) find_pane

0x9440,	// (0x00027e03) listscroll_app_pane_ParamLimits

0x9440,	// (0x00027e03) listscroll_app_pane

0x944c,	// (0x00027e0f) listscroll_form_pane

0x5545,	// (0x00023f08) listscroll_gen_pane_ParamLimits

0x5545,	// (0x00023f08) listscroll_gen_pane

0x7591,	// (0x00025f54) listscroll_set_pane

0x671e,	// (0x000250e1) main_idle_act_pane

0x9119,	// (0x00027adc) main_idle_trad_pane

0x9119,	// (0x00027adc) main_list_empty_pane

0x9440,	// (0x00027e03) main_midp_pane

0x9466,	// (0x00027e29) main_pane_g1_ParamLimits

0x9466,	// (0x00027e29) main_pane_g1

0x7599,	// (0x00025f5c) popup_ai_message_window_ParamLimits

0x7599,	// (0x00025f5c) popup_ai_message_window

0x764d,	// (0x00026010) popup_fep_china_uni_window_ParamLimits

0x764d,	// (0x00026010) popup_fep_china_uni_window

0x76ad,	// (0x00026070) popup_fep_japan_candidate_window_ParamLimits

0x76ad,	// (0x00026070) popup_fep_japan_candidate_window

0x76d7,	// (0x0002609a) popup_fep_japan_predictive_window_ParamLimits

0x76d7,	// (0x0002609a) popup_fep_japan_predictive_window

0x770d,	// (0x000260d0) popup_find_window

0x771a,	// (0x000260dd) popup_grid_graphic_window_ParamLimits

0x771a,	// (0x000260dd) popup_grid_graphic_window

0x774a,	// (0x0002610d) popup_large_graphic_colour_window

0x7770,	// (0x00026133) popup_menu_window_ParamLimits

0x7770,	// (0x00026133) popup_menu_window

0x793a,	// (0x000262fd) popup_note_image_window

0x7924,	// (0x000262e7) popup_note_wait_window_ParamLimits

0x7924,	// (0x000262e7) popup_note_wait_window

0x7924,	// (0x000262e7) popup_note_window_ParamLimits

0x7924,	// (0x000262e7) popup_note_window

0x79a0,	// (0x00026363) popup_query_code_window_ParamLimits

0x79a0,	// (0x00026363) popup_query_code_window

0x79b6,	// (0x00026379) popup_query_data_code_window_ParamLimits

0x79b6,	// (0x00026379) popup_query_data_code_window

0x79d9,	// (0x0002639c) popup_query_data_window_ParamLimits

0x79d9,	// (0x0002639c) popup_query_data_window

0x79fb,	// (0x000263be) popup_query_sat_info_window_ParamLimits

0x79fb,	// (0x000263be) popup_query_sat_info_window

0x7a3a,	// (0x000263fd) popup_snote_single_graphic_window_ParamLimits

0x7a3a,	// (0x000263fd) popup_snote_single_graphic_window

0x7a3a,	// (0x000263fd) popup_snote_single_text_window_ParamLimits

0x7a3a,	// (0x000263fd) popup_snote_single_text_window

0x7a51,	// (0x00026414) popup_sub_window_general

0x7b97,	// (0x0002655a) popup_window_general_ParamLimits

0x7b97,	// (0x0002655a) popup_window_general

0x9474,	// (0x00027e37) power_save_pane

0x7440,	// (0x00025e03) control_pane_g1_ParamLimits

0x7440,	// (0x00025e03) control_pane_g1

0x7463,	// (0x00025e26) control_pane_g2_ParamLimits

0x7463,	// (0x00025e26) control_pane_g2

0x93e3,	// (0x00027da6) control_pane_g3_ParamLimits

0x93e3,	// (0x00027da6) control_pane_g3

0x0007,

0xf763,	// (0x0002e126) control_pane_g_ParamLimits

0xf763,	// (0x0002e126) control_pane_g

0x74a8,	// (0x00025e6b) control_pane_t1_ParamLimits

0x74a8,	// (0x00025e6b) control_pane_t1

0x74f0,	// (0x00025eb3) control_pane_t2_ParamLimits

0x74f0,	// (0x00025eb3) control_pane_t2

0x0002,

0xf774,	// (0x0002e137) control_pane_t_ParamLimits

0xf774,	// (0x0002e137) control_pane_t

0x9308,	// (0x00027ccb) navi_navi_volume_pane_cp1

0x9310,	// (0x00027cd3) status_small_icon_pane

0x9318,	// (0x00027cdb) status_small_pane_g1_ParamLimits

0x9318,	// (0x00027cdb) status_small_pane_g1

0x934c,	// (0x00027d0f) status_small_pane_g2_ParamLimits

0x934c,	// (0x00027d0f) status_small_pane_g2

0x9358,	// (0x00027d1b) status_small_pane_g3_ParamLimits

0x9358,	// (0x00027d1b) status_small_pane_g3

0x9364,	// (0x00027d27) status_small_pane_g4_ParamLimits

0x9364,	// (0x00027d27) status_small_pane_g4

0x9370,	// (0x00027d33) status_small_pane_g5_ParamLimits

0x9370,	// (0x00027d33) status_small_pane_g5

0x937e,	// (0x00027d41) status_small_pane_g6_ParamLimits

0x937e,	// (0x00027d41) status_small_pane_g6

0x0007,

0xf752,	// (0x0002e115) status_small_pane_g_ParamLimits

0xf752,	// (0x0002e115) status_small_pane_g

0x93ad,	// (0x00027d70) status_small_pane_t1

0x93cf,	// (0x00027d92) status_small_wait_pane_ParamLimits

0x93cf,	// (0x00027d92) status_small_wait_pane

0x6cec,	// (0x000256af) aid_levels_signal_ParamLimits

0x6cec,	// (0x000256af) aid_levels_signal

0x6cfb,	// (0x000256be) signal_pane_g1_ParamLimits

0x6cfb,	// (0x000256be) signal_pane_g1

0x6d10,	// (0x000256d3) signal_pane_g2_ParamLimits

0x6d10,	// (0x000256d3) signal_pane_g2

0x0003,

0xf6e3,	// (0x0002e0a6) signal_pane_g_ParamLimits

0xf6e3,	// (0x0002e0a6) signal_pane_g

0x6d41,	// (0x00025704) context_pane_g1

0x630c,	// (0x00024ccf) title_pane_g1

0x633e,	// (0x00024d01) title_pane_t1

0x156f,	// (0x0001ff32) title_pane_t2

0x1595,	// (0x0001ff58) title_pane_t3

0x0002,

0xf532,	// (0x0002def5) title_pane_t

0x987a,	// (0x0002823d) aid_levels_battery_ParamLimits

0x987a,	// (0x0002823d) aid_levels_battery

0x988b,	// (0x0002824e) battery_pane_g1_ParamLimits

0x988b,	// (0x0002824e) battery_pane_g1

0x98a1,	// (0x00028264) battery_pane_g2_ParamLimits

0x98a1,	// (0x00028264) battery_pane_g2

0x0001,

0xf786,	// (0x0002e149) battery_pane_g_ParamLimits

0xf786,	// (0x0002e149) battery_pane_g

0xab00,	// (0x000294c3) uni_indicator_pane_g1

0xab16,	// (0x000294d9) uni_indicator_pane_g2

0xab2c,	// (0x000294ef) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0002e2bf) uni_indicator_pane_g

0x727d,	// (0x00025c40) navi_icon_pane_ParamLimits

0x727d,	// (0x00025c40) navi_icon_pane

0x71c4,	// (0x00025b87) navi_midp_pane

0x7299,	// (0x00025c5c) navi_navi_pane

0x72a3,	// (0x00025c66) navi_text_pane_ParamLimits

0x72a3,	// (0x00025c66) navi_text_pane

0x154f,	// (0x0001ff12) status_small_wait_pane_g1

0x18d0,	// (0x00020293) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0002e2ba) status_small_wait_pane_g

0xa813,	// (0x000291d6) navi_navi_icon_text_pane

0xa81b,	// (0x000291de) navi_navi_pane_g1_ParamLimits

0xa81b,	// (0x000291de) navi_navi_pane_g1

0xa82d,	// (0x000291f0) navi_navi_pane_g2_ParamLimits

0xa82d,	// (0x000291f0) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0002e288) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0002e288) navi_navi_pane_g

0xa83f,	// (0x00029202) navi_navi_tabs_pane

0xa848,	// (0x0002920b) navi_navi_text_pane

0xa813,	// (0x000291d6) navi_navi_volume_pane

0xa7ef,	// (0x000291b2) navi_text_pane_t1

0xa7e3,	// (0x000291a6) navi_icon_pane_g1

0xa736,	// (0x000290f9) navi_navi_text_pane_t1

0x7e40,	// (0x00026803) navi_navi_volume_pane_g1

0x7e48,	// (0x0002680b) volume_small_pane

0xa69c,	// (0x0002905f) navi_navi_icon_text_pane_g1

0xa6a4,	// (0x00029067) navi_navi_icon_text_pane_t1

0x7299,	// (0x00025c5c) navi_tabs_2_long_pane

0x7299,	// (0x00025c5c) navi_tabs_2_pane

0x7299,	// (0x00025c5c) navi_tabs_3_long_pane

0x7299,	// (0x00025c5c) navi_tabs_3_pane

0x7299,	// (0x00025c5c) navi_tabs_4_pane

0x7e20,	// (0x000267e3) tabs_2_active_pane_ParamLimits

0x7e20,	// (0x000267e3) tabs_2_active_pane

0x7e30,	// (0x000267f3) tabs_2_passive_pane_ParamLimits

0x7e30,	// (0x000267f3) tabs_2_passive_pane

0x7dee,	// (0x000267b1) tabs_3_active_pane_ParamLimits

0x7dee,	// (0x000267b1) tabs_3_active_pane

0x7dfe,	// (0x000267c1) tabs_3_passive_pane_ParamLimits

0x7dfe,	// (0x000267c1) tabs_3_passive_pane

0x7e0f,	// (0x000267d2) tabs_3_passive_pane_cp_ParamLimits

0x7e0f,	// (0x000267d2) tabs_3_passive_pane_cp

0x7da2,	// (0x00026765) tabs_4_active_pane_ParamLimits

0x7da2,	// (0x00026765) tabs_4_active_pane

0x7db5,	// (0x00026778) tabs_4_passive_pane_ParamLimits

0x7db5,	// (0x00026778) tabs_4_passive_pane

0x7dc6,	// (0x00026789) tabs_4_passive_pane_cp_ParamLimits

0x7dc6,	// (0x00026789) tabs_4_passive_pane_cp

0x7dd7,	// (0x0002679a) tabs_4_passive_pane_cp2_ParamLimits

0x7dd7,	// (0x0002679a) tabs_4_passive_pane_cp2

0x7d7e,	// (0x00026741) tabs_2_long_active_pane_ParamLimits

0x7d7e,	// (0x00026741) tabs_2_long_active_pane

0x7d90,	// (0x00026753) tabs_2_long_passive_pane_ParamLimits

0x7d90,	// (0x00026753) tabs_2_long_passive_pane

0x7d3f,	// (0x00026702) tabs_3_long_active_pane_ParamLimits

0x7d3f,	// (0x00026702) tabs_3_long_active_pane

0x7d52,	// (0x00026715) tabs_3_long_passive_pane_ParamLimits

0x7d52,	// (0x00026715) tabs_3_long_passive_pane

0x7d6b,	// (0x0002672e) tabs_3_long_passive_pane_cp_ParamLimits

0x7d6b,	// (0x0002672e) tabs_3_long_passive_pane_cp

0x7ce5,	// (0x000266a8) volume_small_pane_g1

0x7cee,	// (0x000266b1) volume_small_pane_g2

0x7cf7,	// (0x000266ba) volume_small_pane_g3

0x7d00,	// (0x000266c3) volume_small_pane_g4

0x7d09,	// (0x000266cc) volume_small_pane_g5

0x7d12,	// (0x000266d5) volume_small_pane_g6

0x7d1b,	// (0x000266de) volume_small_pane_g7

0x7d24,	// (0x000266e7) volume_small_pane_g8

0x7d2d,	// (0x000266f0) volume_small_pane_g9

0x7d36,	// (0x000266f9) volume_small_pane_g10

0x0009,

0xf891,	// (0x0002e254) volume_small_pane_g

0x15b5,	// (0x0001ff78) bg_active_tab_pane_cp2_ParamLimits

0x15b5,	// (0x0001ff78) bg_active_tab_pane_cp2

0x63a6,	// (0x00024d69) tabs_3_active_pane_g1

0x63ae,	// (0x00024d71) tabs_3_active_pane_t1

0x15b5,	// (0x0001ff78) bg_passive_tab_pane_cp2_ParamLimits

0x15b5,	// (0x0001ff78) bg_passive_tab_pane_cp2

0x63a6,	// (0x00024d69) tabs_3_passive_pane_g1

0x63ae,	// (0x00024d71) tabs_3_passive_pane_t1

0x15b5,	// (0x0001ff78) bg_active_tab_pane_cp3_ParamLimits

0x15b5,	// (0x0001ff78) bg_active_tab_pane_cp3

0x63c0,	// (0x00024d83) tabs_4_active_pane_g1

0x63c8,	// (0x00024d8b) tabs_4_active_pane_t1

0x15b5,	// (0x0001ff78) bg_passive_tab_pane_cp3_ParamLimits

0x15b5,	// (0x0001ff78) bg_passive_tab_pane_cp3

0x63c0,	// (0x00024d83) tabs_4_1_passive_pane_g1

0x63c8,	// (0x00024d8b) tabs_4_1_passive_pane_t1

0x9440,	// (0x00027e03) list_highlight_pane_cp2

0xad79,	// (0x0002973c) list_set_pane_ParamLimits

0xad79,	// (0x0002973c) list_set_pane

0xae3b,	// (0x000297fe) main_pane_set_t1_ParamLimits

0xae3b,	// (0x000297fe) main_pane_set_t1

0xae5b,	// (0x0002981e) main_pane_set_t2_ParamLimits

0xae5b,	// (0x0002981e) main_pane_set_t2

0xae6f,	// (0x00029832) main_pane_set_t3_ParamLimits

0xae6f,	// (0x00029832) main_pane_set_t3

0xae83,	// (0x00029846) main_pane_set_t4_ParamLimits

0xae83,	// (0x00029846) main_pane_set_t4

0x0003,

0xf961,	// (0x0002e324) main_pane_set_t_ParamLimits

0xf961,	// (0x0002e324) main_pane_set_t

0xae97,	// (0x0002985a) setting_code_pane

0xaea1,	// (0x00029864) setting_slider_graphic_pane

0xaea1,	// (0x00029864) setting_slider_pane

0xaea1,	// (0x00029864) setting_text_pane

0xaea1,	// (0x00029864) setting_volume_pane

0x63da,	// (0x00024d9d) volume_set_pane

0x15b5,	// (0x0001ff78) bg_set_opt_pane_cp

0x63e4,	// (0x00024da7) setting_slider_pane_t1

0x63fd,	// (0x00024dc0) setting_slider_pane_t2

0x6417,	// (0x00024dda) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002defc) setting_slider_pane_t

0x642f,	// (0x00024df2) slider_set_pane

0x1559,	// (0x0001ff1c) bg_set_opt_pane_cp2

0x15c3,	// (0x0001ff86) setting_slider_graphic_pane_g1

0x6445,	// (0x00024e08) setting_slider_graphic_pane_t1

0x6455,	// (0x00024e18) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002df03) setting_slider_graphic_pane_t

0x6465,	// (0x00024e28) slider_set_pane_cp

0x1559,	// (0x0001ff1c) input_focus_pane_cp1

0xad3a,	// (0x000296fd) list_set_text_pane

0x154f,	// (0x0001ff12) setting_text_pane_g1

0x1559,	// (0x0001ff1c) input_focus_pane_cp2

0x154f,	// (0x0001ff12) setting_code_pane_g1

0x15cc,	// (0x0001ff8f) setting_code_pane_t1

0x4d74,	// (0x00023737) set_text_pane_t1_ParamLimits

0x4d74,	// (0x00023737) set_text_pane_t1

0x31c1,	// (0x00021b84) set_opt_bg_pane_g1

0x31c9,	// (0x00021b8c) set_opt_bg_pane_g2

0xad12,	// (0x000296d5) set_opt_bg_pane_g3

0x31d9,	// (0x00021b9c) set_opt_bg_pane_g4

0x31e1,	// (0x00021ba4) set_opt_bg_pane_g5

0x31e9,	// (0x00021bac) set_opt_bg_pane_g6

0xad1c,	// (0x000296df) set_opt_bg_pane_g7

0xad26,	// (0x000296e9) set_opt_bg_pane_g8

0xad30,	// (0x000296f3) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0002e311) set_opt_bg_pane_g

0xad05,	// (0x000296c8) slider_set_pane_g1

0x7ec9,	// (0x0002688c) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0002e302) slider_set_pane_g

0x7e51,	// (0x00026814) volume_set_pane_g1

0x7e5b,	// (0x0002681e) volume_set_pane_g2

0x7e65,	// (0x00026828) volume_set_pane_g3

0x7e6f,	// (0x00026832) volume_set_pane_g4

0x7e79,	// (0x0002683c) volume_set_pane_g5

0x7e83,	// (0x00026846) volume_set_pane_g6

0x7e8d,	// (0x00026850) volume_set_pane_g7

0x7e97,	// (0x0002685a) volume_set_pane_g8

0x7ea1,	// (0x00026864) volume_set_pane_g9

0x7eab,	// (0x0002686e) volume_set_pane_g10

0x0009,

0xf917,	// (0x0002e2da) volume_set_pane_g

0x646d,	// (0x00024e30) indicator_pane_ParamLimits

0x646d,	// (0x00024e30) indicator_pane

0x6479,	// (0x00024e3c) main_idle_pane_g2_ParamLimits

0x6479,	// (0x00024e3c) main_idle_pane_g2

0x64a1,	// (0x00024e64) main_pane_idle_g1_ParamLimits

0x64a1,	// (0x00024e64) main_pane_idle_g1

0x15f4,	// (0x0001ffb7) popup_clock_digital_analogue_window_ParamLimits

0x15f4,	// (0x0001ffb7) popup_clock_digital_analogue_window

0x64af,	// (0x00024e72) soft_indicator_pane_ParamLimits

0x64af,	// (0x00024e72) soft_indicator_pane

0x64bd,	// (0x00024e80) wallpaper_pane_ParamLimits

0x64bd,	// (0x00024e80) wallpaper_pane

0x154f,	// (0x0001ff12) wallpaper_pane_g1

0x64c9,	// (0x00024e8c) indicator_pane_g1_ParamLimits

0x64c9,	// (0x00024e8c) indicator_pane_g1

0xb17b,	// (0x00029b3e) navi_navi_icon_text_pane_srt_g1

0x1622,	// (0x0001ffe5) soft_indicator_pane_t1

0x163c,	// (0x0001ffff) aid_ps_area_pane

0x64d5,	// (0x00024e98) aid_ps_clock_pane

0x164d,	// (0x00020010) aid_ps_indicator_pane

0x1659,	// (0x0002001c) indicator_ps_pane_ParamLimits

0x1659,	// (0x0002001c) indicator_ps_pane

0x1668,	// (0x0002002b) power_save_pane_g1_ParamLimits

0x1668,	// (0x0002002b) power_save_pane_g1

0x1674,	// (0x00020037) power_save_pane_g2_ParamLimits

0x1674,	// (0x00020037) power_save_pane_g2

0x5f0d,	// (0x000248d0) aid_navinavi_width_pane

0x163c,	// (0x0001ffff) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002df08) power_save_pane_g_ParamLimits

0xf545,	// (0x0002df08) power_save_pane_g

0x1682,	// (0x00020045) power_save_pane_t1_ParamLimits

0x1682,	// (0x00020045) power_save_pane_t1

0x64d5,	// (0x00024e98) aid_ps_clock_pane_ParamLimits

0x164d,	// (0x00020010) aid_ps_indicator_pane_ParamLimits

0x1694,	// (0x00020057) power_save_pane_t4_ParamLimits

0x1694,	// (0x00020057) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002df0d) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002df0d) power_save_pane_t

0x16be,	// (0x00020081) power_save_t3_ParamLimits

0x16be,	// (0x00020081) power_save_t3

0x16a9,	// (0x0002006c) power_save_t2_ParamLimits

0x16a9,	// (0x0002006c) power_save_t2

0x16d3,	// (0x00020096) indicator_ps_pane_g1

0x64e3,	// (0x00024ea6) ai_gene_pane_ParamLimits

0x64e3,	// (0x00024ea6) ai_gene_pane

0x64ef,	// (0x00024eb2) ai_links_pane_ParamLimits

0x64ef,	// (0x00024eb2) ai_links_pane

0x64fb,	// (0x00024ebe) indicator_pane_cp1_ParamLimits

0x64fb,	// (0x00024ebe) indicator_pane_cp1

0x6507,	// (0x00024eca) main_pane_idle_g1_cp_ParamLimits

0x6507,	// (0x00024eca) main_pane_idle_g1_cp

0x16dc,	// (0x0002009f) popup_ai_links_title_window

0x6513,	// (0x00024ed6) soft_indicator_pane_cp1_ParamLimits

0x6513,	// (0x00024ed6) soft_indicator_pane_cp1

0xaaee,	// (0x000294b1) ai_links_pane_g1

0xaaf7,	// (0x000294ba) grid_ai_links_pane

0xaad3,	// (0x00029496) ai_gene_pane_1

0xaadc,	// (0x0002949f) ai_gene_pane_2

0xaae5,	// (0x000294a8) list_highlight_pane_cp4

0xaab3,	// (0x00029476) cell_ai_link_pane_ParamLimits

0xaab3,	// (0x00029476) cell_ai_link_pane

0xaaab,	// (0x0002946e) cell_ai_link_pane_g1

0x18d0,	// (0x00020293) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0002e2b5) cell_ai_link_pane_g

0x1559,	// (0x0001ff1c) grid_highlight_cp2

0x1559,	// (0x0001ff1c) bg_popup_sub_pane_cp1

0x16f3,	// (0x000200b6) popup_ai_links_title_window_t1

0xa9f7,	// (0x000293ba) ai_gene_pane_1_g1_ParamLimits

0xa9f7,	// (0x000293ba) ai_gene_pane_1_g1

0xaa03,	// (0x000293c6) ai_gene_pane_1_g2_ParamLimits

0xaa03,	// (0x000293c6) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0002e2ab) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0002e2ab) ai_gene_pane_1_g

0xaa10,	// (0x000293d3) ai_gene_pane_1_t1_ParamLimits

0xaa10,	// (0x000293d3) ai_gene_pane_1_t1

0xaa44,	// (0x00029407) grid_ai_soft_ind_pane

0xa9e2,	// (0x000293a5) ai_gene_pane_2_t1_ParamLimits

0xa9e2,	// (0x000293a5) ai_gene_pane_2_t1

0x651f,	// (0x00024ee2) main_pane_empty_t1_ParamLimits

0x651f,	// (0x00024ee2) main_pane_empty_t1

0x6537,	// (0x00024efa) main_pane_empty_t2_ParamLimits

0x6537,	// (0x00024efa) main_pane_empty_t2

0x654c,	// (0x00024f0f) main_pane_empty_t3_ParamLimits

0x654c,	// (0x00024f0f) main_pane_empty_t3

0x655e,	// (0x00024f21) main_pane_empty_t4_ParamLimits

0x655e,	// (0x00024f21) main_pane_empty_t4

0x6570,	// (0x00024f33) main_pane_empty_t5_ParamLimits

0x6570,	// (0x00024f33) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002df12) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002df12) main_pane_empty_t

0x327f,	// (0x00021c42) bg_popup_window_pane_ParamLimits

0x327f,	// (0x00021c42) bg_popup_window_pane

0xa744,	// (0x00029107) find_popup_pane_cp2_ParamLimits

0xa744,	// (0x00029107) find_popup_pane_cp2

0xa750,	// (0x00029113) heading_pane_ParamLimits

0xa750,	// (0x00029113) heading_pane

0x1559,	// (0x0001ff1c) bg_popup_sub_pane

0xa6be,	// (0x00029081) bg_popup_window_pane_g1_ParamLimits

0xa6be,	// (0x00029081) bg_popup_window_pane_g1

0xa6ca,	// (0x0002908d) bg_popup_window_pane_g2_ParamLimits

0xa6ca,	// (0x0002908d) bg_popup_window_pane_g2

0xa6d6,	// (0x00029099) bg_popup_window_pane_g3_ParamLimits

0xa6d6,	// (0x00029099) bg_popup_window_pane_g3

0xa6e2,	// (0x000290a5) bg_popup_window_pane_g4_ParamLimits

0xa6e2,	// (0x000290a5) bg_popup_window_pane_g4

0xa6ee,	// (0x000290b1) bg_popup_window_pane_g5_ParamLimits

0xa6ee,	// (0x000290b1) bg_popup_window_pane_g5

0xa6fa,	// (0x000290bd) bg_popup_window_pane_g6_ParamLimits

0xa6fa,	// (0x000290bd) bg_popup_window_pane_g6

0xa706,	// (0x000290c9) bg_popup_window_pane_g7_ParamLimits

0xa706,	// (0x000290c9) bg_popup_window_pane_g7

0xa712,	// (0x000290d5) bg_popup_window_pane_g8_ParamLimits

0xa712,	// (0x000290d5) bg_popup_window_pane_g8

0xa71e,	// (0x000290e1) bg_popup_window_pane_g9_ParamLimits

0xa71e,	// (0x000290e1) bg_popup_window_pane_g9

0xa72a,	// (0x000290ed) bg_popup_window_pane_g10_ParamLimits

0xa72a,	// (0x000290ed) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0002e273) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0002e273) bg_popup_window_pane_g

0xa653,	// (0x00029016) bg_popup_heading_pane_ParamLimits

0xa653,	// (0x00029016) bg_popup_heading_pane

0x7f51,	// (0x00026914) tabs_4_passive_pane_cp_srt_ParamLimits

0x7f51,	// (0x00026914) tabs_4_passive_pane_cp_srt

0x7f63,	// (0x00026926) tabs_4_passive_pane_srt_ParamLimits

0xa667,	// (0x0002902a) heading_pane_g2

0x7f63,	// (0x00026926) tabs_4_passive_pane_srt

0x9440,	// (0x00027e03) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9440,	// (0x00027e03) bg_passive_tab_pane_cp3_srt

0xa66f,	// (0x00029032) heading_pane_t1_ParamLimits

0xa66f,	// (0x00029032) heading_pane_t1

0xa686,	// (0x00029049) heading_pane_t2_ParamLimits

0xa686,	// (0x00029049) heading_pane_t2

0x0001,

0xf8ab,	// (0x0002e26e) heading_pane_t_ParamLimits

0xf8ab,	// (0x0002e26e) heading_pane_t

0xa17e,	// (0x00028b41) bg_popup_heading_pane_g1

0xa22d,	// (0x00028bf0) bg_popup_heading_pane_g2

0xa237,	// (0x00028bfa) bg_popup_heading_pane_g3

0xa241,	// (0x00028c04) bg_popup_heading_pane_g4

0xa24b,	// (0x00028c0e) bg_popup_heading_pane_g5

0xa255,	// (0x00028c18) bg_popup_heading_pane_g6

0xa25d,	// (0x00028c20) bg_popup_heading_pane_g7

0xa265,	// (0x00028c28) bg_popup_heading_pane_g8

0xa26f,	// (0x00028c32) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0002e22a) bg_popup_heading_pane_g

0x9976,	// (0x00028339) bg_popup_sub_pane_g1

0x997e,	// (0x00028341) bg_popup_sub_pane_g2

0x9986,	// (0x00028349) bg_popup_sub_pane_g3

0x998e,	// (0x00028351) bg_popup_sub_pane_g4

0x9996,	// (0x00028359) bg_popup_sub_pane_g5

0x999e,	// (0x00028361) bg_popup_sub_pane_g6

0x99a6,	// (0x00028369) bg_popup_sub_pane_g7

0x99ae,	// (0x00028371) bg_popup_sub_pane_g8

0x99b6,	// (0x00028379) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0002e204) bg_popup_sub_pane_g

0x15a7,	// (0x0001ff6a) bg_popup_window_pane_cp5_ParamLimits

0x15a7,	// (0x0001ff6a) bg_popup_window_pane_cp5

0x1710,	// (0x000200d3) popup_note_window_g1_ParamLimits

0x1710,	// (0x000200d3) popup_note_window_g1

0x171c,	// (0x000200df) popup_note_window_t1_ParamLimits

0x171c,	// (0x000200df) popup_note_window_t1

0x1732,	// (0x000200f5) popup_note_window_t2_ParamLimits

0x1732,	// (0x000200f5) popup_note_window_t2

0x1748,	// (0x0002010b) popup_note_window_t3_ParamLimits

0x1748,	// (0x0002010b) popup_note_window_t3

0x175e,	// (0x00020121) popup_note_window_t4_ParamLimits

0x175e,	// (0x00020121) popup_note_window_t4

0x1786,	// (0x00020149) popup_note_window_t5_ParamLimits

0x1786,	// (0x00020149) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002df1d) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002df1d) popup_note_window_t

0x17d0,	// (0x00020193) bg_popup_window_pane_cp6_ParamLimits

0x17d0,	// (0x00020193) bg_popup_window_pane_cp6

0xa0fa,	// (0x00028abd) popup_note_image_window_g1_ParamLimits

0xa0fa,	// (0x00028abd) popup_note_image_window_g1

0xa106,	// (0x00028ac9) popup_note_image_window_g2_ParamLimits

0xa106,	// (0x00028ac9) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0002e1f8) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0002e1f8) popup_note_image_window_g

0xa11f,	// (0x00028ae2) popup_note_image_window_t1_ParamLimits

0xa11f,	// (0x00028ae2) popup_note_image_window_t1

0xa138,	// (0x00028afb) popup_note_image_window_t2_ParamLimits

0xa138,	// (0x00028afb) popup_note_image_window_t2

0xa151,	// (0x00028b14) popup_note_image_window_t3_ParamLimits

0xa151,	// (0x00028b14) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0002e1fd) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0002e1fd) popup_note_image_window_t

0x9fba,	// (0x0002897d) bg_popup_window_pane_cp7_ParamLimits

0x9fba,	// (0x0002897d) bg_popup_window_pane_cp7

0x9fea,	// (0x000289ad) popup_note_wait_window_g1_ParamLimits

0x9fea,	// (0x000289ad) popup_note_wait_window_g1

0x9ff6,	// (0x000289b9) popup_note_wait_window_g2_ParamLimits

0x9ff6,	// (0x000289b9) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0002e1e6) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0002e1e6) popup_note_wait_window_g

0xa00e,	// (0x000289d1) popup_note_wait_window_t1_ParamLimits

0xa00e,	// (0x000289d1) popup_note_wait_window_t1

0xa035,	// (0x000289f8) popup_note_wait_window_t2_ParamLimits

0xa035,	// (0x000289f8) popup_note_wait_window_t2

0xa053,	// (0x00028a16) popup_note_wait_window_t3_ParamLimits

0xa053,	// (0x00028a16) popup_note_wait_window_t3

0xa066,	// (0x00028a29) popup_note_wait_window_t4_ParamLimits

0xa066,	// (0x00028a29) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0002e1ed) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0002e1ed) popup_note_wait_window_t

0xa08b,	// (0x00028a4e) wait_bar_pane_ParamLimits

0xa08b,	// (0x00028a4e) wait_bar_pane

0x1559,	// (0x0001ff1c) wait_anim_pane

0x1559,	// (0x0001ff1c) wait_border_pane

0x154f,	// (0x0001ff12) wait_anim_pane_g1

0x154f,	// (0x0001ff12) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0002e0a1) wait_anim_pane_g

0x9f5e,	// (0x00028921) wait_border_pane_g1

0x9f69,	// (0x0002892c) wait_border_pane_g2

0x9f72,	// (0x00028935) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0002e1df) wait_border_pane_g

0x9dc8,	// (0x0002878b) bg_popup_window_pane_cp16_ParamLimits

0x9dc8,	// (0x0002878b) bg_popup_window_pane_cp16

0x9ec8,	// (0x0002888b) indicator_popup_pane_cp4_ParamLimits

0x9ec8,	// (0x0002888b) indicator_popup_pane_cp4

0x9edc,	// (0x0002889f) popup_query_data_window_t1_ParamLimits

0x9edc,	// (0x0002889f) popup_query_data_window_t1

0x9eee,	// (0x000288b1) popup_query_data_window_t2_ParamLimits

0x9eee,	// (0x000288b1) popup_query_data_window_t2

0x9f07,	// (0x000288ca) popup_query_data_window_t3_ParamLimits

0x9f07,	// (0x000288ca) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0002e1d8) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0002e1d8) popup_query_data_window_t

0x9f21,	// (0x000288e4) query_popup_data_pane_ParamLimits

0x9f21,	// (0x000288e4) query_popup_data_pane

0x9f35,	// (0x000288f8) query_popup_data_pane_cp1_ParamLimits

0x9f35,	// (0x000288f8) query_popup_data_pane_cp1

0x9dc8,	// (0x0002878b) bg_popup_window_pane_cp10_ParamLimits

0x9dc8,	// (0x0002878b) bg_popup_window_pane_cp10

0x9dfa,	// (0x000287bd) indicator_popup_pane_ParamLimits

0x9dfa,	// (0x000287bd) indicator_popup_pane

0x9e1c,	// (0x000287df) popup_query_code_window_t1_ParamLimits

0x9e1c,	// (0x000287df) popup_query_code_window_t1

0x9e36,	// (0x000287f9) popup_query_code_window_t2_ParamLimits

0x9e36,	// (0x000287f9) popup_query_code_window_t2

0x9e7f,	// (0x00028842) popup_query_code_window_t3_ParamLimits

0x9e7f,	// (0x00028842) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0002e1d1) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0002e1d1) popup_query_code_window_t

0x9eae,	// (0x00028871) query_popup_pane_ParamLimits

0x9eae,	// (0x00028871) query_popup_pane

0x17d0,	// (0x00020193) bg_popup_window_pane_cp15_ParamLimits

0x17d0,	// (0x00020193) bg_popup_window_pane_cp15

0x17f0,	// (0x000201b3) indicator_popup_pane_cp1_ParamLimits

0x17f0,	// (0x000201b3) indicator_popup_pane_cp1

0x1803,	// (0x000201c6) indicator_popup_pane_cp2_ParamLimits

0x1803,	// (0x000201c6) indicator_popup_pane_cp2

0x181e,	// (0x000201e1) popup_query_data_code_window_g1_ParamLimits

0x181e,	// (0x000201e1) popup_query_data_code_window_g1

0x1831,	// (0x000201f4) popup_query_data_code_window_t1_ParamLimits

0x1831,	// (0x000201f4) popup_query_data_code_window_t1

0x1843,	// (0x00020206) popup_query_data_code_window_t2_ParamLimits

0x1843,	// (0x00020206) popup_query_data_code_window_t2

0x1855,	// (0x00020218) popup_query_data_code_window_t3_ParamLimits

0x1855,	// (0x00020218) popup_query_data_code_window_t3

0x186b,	// (0x0002022e) popup_query_data_code_window_t4_ParamLimits

0x186b,	// (0x0002022e) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002df28) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002df28) popup_query_data_code_window_t

0x7239,	// (0x00025bfc) list_single_midp_graphic_pane_g3

0x1885,	// (0x00020248) query_popup_data_pane_cp2_ParamLimits

0x1898,	// (0x0002025b) query_popup_pane_cp2_ParamLimits

0x1898,	// (0x0002025b) query_popup_pane_cp2

0x1559,	// (0x0001ff1c) bg_popup_window_pane_cp11

0x9dac,	// (0x0002876f) heading_pane_cp5

0x9db4,	// (0x00028777) listscroll_popup_info_pane

0x1559,	// (0x0001ff1c) input_focus_pane_cp3

0x18b3,	// (0x00020276) query_popup_pane_t1

0x18c1,	// (0x00020284) list_popup_info_pane_ParamLimits

0x18c1,	// (0x00020284) list_popup_info_pane

0x18d0,	// (0x00020293) listscroll_popup_info_pane_g1

0x18d8,	// (0x0002029b) scroll_pane_cp7

0x18e2,	// (0x000202a5) popup_info_list_pane_t1_ParamLimits

0x18e2,	// (0x000202a5) popup_info_list_pane_t1

0x18fc,	// (0x000202bf) popup_info_list_pane_t2_ParamLimits

0x18fc,	// (0x000202bf) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002df31) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002df31) popup_info_list_pane_t

0x1559,	// (0x0001ff1c) bg_popup_window_pane_cp12

0xb195,	// (0x00029b58) find_popup_pane

0x15b5,	// (0x0001ff78) bg_popup_window_pane_cp3

0x1916,	// (0x000202d9) heading_pane_cp3

0x1925,	// (0x000202e8) listscroll_popup_graphic_pane

0x1559,	// (0x0001ff1c) bg_popup_window_pane_cp4

0x65d2,	// (0x00024f95) heading_pane_cp4

0x1935,	// (0x000202f8) listscroll_popup_colour_pane

0x65dc,	// (0x00024f9f) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x65dc,	// (0x00024f9f) cell_large_graphic_colour_none_popup_pane

0x65f0,	// (0x00024fb3) grid_large_graphic_colour_popup_pane_ParamLimits

0x65f0,	// (0x00024fb3) grid_large_graphic_colour_popup_pane

0x661c,	// (0x00024fdf) listscroll_popup_colour_pane_g1_ParamLimits

0x661c,	// (0x00024fdf) listscroll_popup_colour_pane_g1

0x6633,	// (0x00024ff6) listscroll_popup_colour_pane_g2_ParamLimits

0x6633,	// (0x00024ff6) listscroll_popup_colour_pane_g2

0x664a,	// (0x0002500d) listscroll_popup_colour_pane_g3_ParamLimits

0x664a,	// (0x0002500d) listscroll_popup_colour_pane_g3

0x665a,	// (0x0002501d) listscroll_popup_colour_pane_g4_ParamLimits

0x665a,	// (0x0002501d) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002df36) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002df36) listscroll_popup_colour_pane_g

0x193d,	// (0x00020300) scroll_pane_cp6_ParamLimits

0x193d,	// (0x00020300) scroll_pane_cp6

0x666e,	// (0x00025031) cell_large_graphic_colour_popup_pane_ParamLimits

0x666e,	// (0x00025031) cell_large_graphic_colour_popup_pane

0x194f,	// (0x00020312) cell_large_graphic_colour_none_popup_pane_t1

0x1559,	// (0x0001ff1c) grid_highlight_pane_cp5

0x195e,	// (0x00020321) cell_large_graphic_colour_popup_pane_g1

0x1966,	// (0x00020329) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002df3f) cell_large_graphic_colour_popup_pane_g

0x196e,	// (0x00020331) cell_large_graphic_colour_popup_pane_g2_copy1

0x1977,	// (0x0002033a) grid_highlight_pane_cp4

0x197f,	// (0x00020342) bg_popup_window_pane_cp8_ParamLimits

0x197f,	// (0x00020342) bg_popup_window_pane_cp8

0x199a,	// (0x0002035d) popup_snote_single_text_window_g1_ParamLimits

0x199a,	// (0x0002035d) popup_snote_single_text_window_g1

0x19ac,	// (0x0002036f) popup_snote_single_text_window_t1_ParamLimits

0x19ac,	// (0x0002036f) popup_snote_single_text_window_t1

0x19bf,	// (0x00020382) popup_snote_single_text_window_t2_ParamLimits

0x19bf,	// (0x00020382) popup_snote_single_text_window_t2

0x19d2,	// (0x00020395) popup_snote_single_text_window_t3_ParamLimits

0x19d2,	// (0x00020395) popup_snote_single_text_window_t3

0x1a0b,	// (0x000203ce) popup_snote_single_text_window_t4_ParamLimits

0x1a0b,	// (0x000203ce) popup_snote_single_text_window_t4

0x1a3f,	// (0x00020402) popup_snote_single_text_window_t5_ParamLimits

0x1a3f,	// (0x00020402) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002df44) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002df44) popup_snote_single_text_window_t

0x1a6e,	// (0x00020431) bg_popup_window_pane_cp9_ParamLimits

0x1a6e,	// (0x00020431) bg_popup_window_pane_cp9

0x199a,	// (0x0002035d) popup_snote_single_graphic_window_g1_ParamLimits

0x199a,	// (0x0002035d) popup_snote_single_graphic_window_g1

0x1a7c,	// (0x0002043f) popup_snote_single_graphic_window_g2_ParamLimits

0x1a7c,	// (0x0002043f) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002df4f) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002df4f) popup_snote_single_graphic_window_g

0x1a88,	// (0x0002044b) popup_snote_single_graphic_window_t1_ParamLimits

0x1a88,	// (0x0002044b) popup_snote_single_graphic_window_t1

0x1a9b,	// (0x0002045e) popup_snote_single_graphic_window_t2_ParamLimits

0x1a9b,	// (0x0002045e) popup_snote_single_graphic_window_t2

0x1aae,	// (0x00020471) popup_snote_single_graphic_window_t3_ParamLimits

0x1aae,	// (0x00020471) popup_snote_single_graphic_window_t3

0x1ae7,	// (0x000204aa) popup_snote_single_graphic_window_t4_ParamLimits

0x1ae7,	// (0x000204aa) popup_snote_single_graphic_window_t4

0x1b1b,	// (0x000204de) popup_snote_single_graphic_window_t5_ParamLimits

0x1b1b,	// (0x000204de) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002df54) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002df54) popup_snote_single_graphic_window_t

0xb0d3,	// (0x00029a96) grid_graphic_popup_pane_ParamLimits

0xb0d3,	// (0x00029a96) grid_graphic_popup_pane

0xb101,	// (0x00029ac4) listscroll_popup_graphic_pane_g1_ParamLimits

0xb101,	// (0x00029ac4) listscroll_popup_graphic_pane_g1

0xb115,	// (0x00029ad8) listscroll_popup_graphic_pane_g2_ParamLimits

0xb115,	// (0x00029ad8) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0002e34e) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0002e34e) listscroll_popup_graphic_pane_g

0xb129,	// (0x00029aec) scroll_pane_cp5

0xb06b,	// (0x00029a2e) cell_graphic_popup_pane_ParamLimits

0xb06b,	// (0x00029a2e) cell_graphic_popup_pane

0xb04c,	// (0x00029a0f) cell_graphic_popup_pane_g1

0xb054,	// (0x00029a17) cell_graphic_popup_pane_g2

0x196e,	// (0x00020331) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0002e347) cell_graphic_popup_pane_g

0xb05d,	// (0x00029a20) cell_graphic_popup_pane_t2

0x1977,	// (0x0002033a) grid_highlight_pane_cp3

0x1b5c,	// (0x0002051f) list_gen_pane_ParamLimits

0x1b5c,	// (0x0002051f) list_gen_pane

0x1b84,	// (0x00020547) scroll_pane

0xafa4,	// (0x00029967) bg_list_pane_g1_ParamLimits

0xafa4,	// (0x00029967) bg_list_pane_g1

0xafc1,	// (0x00029984) bg_list_pane_g2_ParamLimits

0xafc1,	// (0x00029984) bg_list_pane_g2

0xafd6,	// (0x00029999) bg_list_pane_g3_ParamLimits

0xafd6,	// (0x00029999) bg_list_pane_g3

0xafea,	// (0x000299ad) bg_list_pane_g4_ParamLimits

0xafea,	// (0x000299ad) bg_list_pane_g4

0xaffe,	// (0x000299c1) bg_list_pane_g5_ParamLimits

0xaffe,	// (0x000299c1) bg_list_pane_g5

0x0004,

0xf979,	// (0x0002e33c) bg_list_pane_g_ParamLimits

0xf979,	// (0x0002e33c) bg_list_pane_g

0xaf25,	// (0x000298e8) list_double2_graphic_large_graphic_pane_ParamLimits

0xaf25,	// (0x000298e8) list_double2_graphic_large_graphic_pane

0xaf25,	// (0x000298e8) list_double2_graphic_pane_ParamLimits

0xaf25,	// (0x000298e8) list_double2_graphic_pane

0xaf25,	// (0x000298e8) list_double2_large_graphic_pane_ParamLimits

0xaf25,	// (0x000298e8) list_double2_large_graphic_pane

0xaf25,	// (0x000298e8) list_double2_pane_ParamLimits

0xaf25,	// (0x000298e8) list_double2_pane

0xaf25,	// (0x000298e8) list_double_graphic_heading_pane_ParamLimits

0xaf25,	// (0x000298e8) list_double_graphic_heading_pane

0xaf25,	// (0x000298e8) list_double_graphic_pane_ParamLimits

0xaf25,	// (0x000298e8) list_double_graphic_pane

0xaf25,	// (0x000298e8) list_double_heading_pane_ParamLimits

0xaf25,	// (0x000298e8) list_double_heading_pane

0xaf25,	// (0x000298e8) list_double_large_graphic_pane_ParamLimits

0xaf25,	// (0x000298e8) list_double_large_graphic_pane

0xaf25,	// (0x000298e8) list_double_number_pane_ParamLimits

0xaf25,	// (0x000298e8) list_double_number_pane

0xaf25,	// (0x000298e8) list_double_pane_ParamLimits

0xaf25,	// (0x000298e8) list_double_pane

0xaf25,	// (0x000298e8) list_double_time_pane_ParamLimits

0xaf25,	// (0x000298e8) list_double_time_pane

0xaf25,	// (0x000298e8) list_setting_number_pane_ParamLimits

0xaf25,	// (0x000298e8) list_setting_number_pane

0xaf25,	// (0x000298e8) list_setting_pane_ParamLimits

0xaf25,	// (0x000298e8) list_setting_pane

0x5781,	// (0x00024144) list_single_2graphic_pane_ParamLimits

0x5781,	// (0x00024144) list_single_2graphic_pane

0x5781,	// (0x00024144) list_single_graphic_heading_pane_ParamLimits

0x5781,	// (0x00024144) list_single_graphic_heading_pane

0x5781,	// (0x00024144) list_single_graphic_pane_ParamLimits

0x5781,	// (0x00024144) list_single_graphic_pane

0x5781,	// (0x00024144) list_single_heading_pane_ParamLimits

0x5781,	// (0x00024144) list_single_heading_pane

0xaf89,	// (0x0002994c) list_single_large_graphic_pane_ParamLimits

0xaf89,	// (0x0002994c) list_single_large_graphic_pane

0x5781,	// (0x00024144) list_single_number_heading_pane_ParamLimits

0x5781,	// (0x00024144) list_single_number_heading_pane

0x5781,	// (0x00024144) list_single_number_pane_ParamLimits

0x5781,	// (0x00024144) list_single_number_pane

0x5781,	// (0x00024144) list_single_pane_ParamLimits

0x5781,	// (0x00024144) list_single_pane

0x1559,	// (0x0001ff1c) list_highlight_pane_cp1

0x4d9b,	// (0x0002375e) list_single_pane_g1_ParamLimits

0x4d9b,	// (0x0002375e) list_single_pane_g1

0x4da7,	// (0x0002376a) list_single_pane_g2_ParamLimits

0x4da7,	// (0x0002376a) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002df66) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002df66) list_single_pane_g

0x573c,	// (0x000240ff) list_single_pane_t1_ParamLimits

0x573c,	// (0x000240ff) list_single_pane_t1

0x4d9b,	// (0x0002375e) list_single_number_pane_g1_ParamLimits

0x4d9b,	// (0x0002375e) list_single_number_pane_g1

0x4da7,	// (0x0002376a) list_single_number_pane_g2_ParamLimits

0x4da7,	// (0x0002376a) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002df66) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002df66) list_single_number_pane_g

0x56e6,	// (0x000240a9) list_single_number_pane_t1_ParamLimits

0x56e6,	// (0x000240a9) list_single_number_pane_t1

0x56fc,	// (0x000240bf) list_single_number_pane_t2_ParamLimits

0x56fc,	// (0x000240bf) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0002e2fd) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0002e2fd) list_single_number_pane_t

0x4d8f,	// (0x00023752) list_single_graphic_pane_g1_ParamLimits

0x4d8f,	// (0x00023752) list_single_graphic_pane_g1

0x4d9b,	// (0x0002375e) list_single_graphic_pane_g2_ParamLimits

0x4d9b,	// (0x0002375e) list_single_graphic_pane_g2

0x4da7,	// (0x0002376a) list_single_graphic_pane_g3_ParamLimits

0x4da7,	// (0x0002376a) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002df5f) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002df5f) list_single_graphic_pane_g

0x4db3,	// (0x00023776) list_single_graphic_pane_t1_ParamLimits

0x4db3,	// (0x00023776) list_single_graphic_pane_t1

0x4d9b,	// (0x0002375e) list_single_heading_pane_g1_ParamLimits

0x4d9b,	// (0x0002375e) list_single_heading_pane_g1

0x4da7,	// (0x0002376a) list_single_heading_pane_g2_ParamLimits

0x4da7,	// (0x0002376a) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002df66) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002df66) list_single_heading_pane_g

0x4dc9,	// (0x0002378c) list_single_heading_pane_t1_ParamLimits

0x4dc9,	// (0x0002378c) list_single_heading_pane_t1

0x4ddf,	// (0x000237a2) list_single_heading_pane_t2_ParamLimits

0x4ddf,	// (0x000237a2) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002df6b) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002df6b) list_single_heading_pane_t

0x4d9b,	// (0x0002375e) list_single_number_heading_pane_g1_ParamLimits

0x4d9b,	// (0x0002375e) list_single_number_heading_pane_g1

0x4da7,	// (0x0002376a) list_single_number_heading_pane_g2_ParamLimits

0x4da7,	// (0x0002376a) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002df66) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002df66) list_single_number_heading_pane_g

0x4dc9,	// (0x0002378c) list_single_number_heading_pane_t1_ParamLimits

0x4dc9,	// (0x0002378c) list_single_number_heading_pane_t1

0x4df1,	// (0x000237b4) list_single_number_heading_pane_t2_ParamLimits

0x4df1,	// (0x000237b4) list_single_number_heading_pane_t2

0x4e03,	// (0x000237c6) list_single_number_heading_pane_t3_ParamLimits

0x4e03,	// (0x000237c6) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002df70) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002df70) list_single_number_heading_pane_t

0x4e15,	// (0x000237d8) list_single_graphic_heading_pane_g1_ParamLimits

0x4e15,	// (0x000237d8) list_single_graphic_heading_pane_g1

0x4e21,	// (0x000237e4) list_single_graphic_heading_pane_g4_ParamLimits

0x4e21,	// (0x000237e4) list_single_graphic_heading_pane_g4

0x4da7,	// (0x0002376a) list_single_graphic_heading_pane_g5_ParamLimits

0x4da7,	// (0x0002376a) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002df77) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002df77) list_single_graphic_heading_pane_g

0x4dc9,	// (0x0002378c) list_single_graphic_heading_pane_t1_ParamLimits

0x4dc9,	// (0x0002378c) list_single_graphic_heading_pane_t1

0x4e32,	// (0x000237f5) list_single_graphic_heading_pane_t2_ParamLimits

0x4e32,	// (0x000237f5) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002df7e) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002df7e) list_single_graphic_heading_pane_t

0x4e44,	// (0x00023807) list_single_large_graphic_pane_g1_ParamLimits

0x4e44,	// (0x00023807) list_single_large_graphic_pane_g1

0x4e50,	// (0x00023813) list_single_large_graphic_pane_g2_ParamLimits

0x4e50,	// (0x00023813) list_single_large_graphic_pane_g2

0x4e5c,	// (0x0002381f) list_single_large_graphic_pane_g3_ParamLimits

0x4e5c,	// (0x0002381f) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002df83) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002df83) list_single_large_graphic_pane_g

0x9f69,	// (0x0002892c) wait_border_pane_g2_copy1

0x4e68,	// (0x0002382b) list_single_large_graphic_pane_g4_cp2

0x4e70,	// (0x00023833) list_single_large_graphic_pane_t1_ParamLimits

0x4e70,	// (0x00023833) list_single_large_graphic_pane_t1

0x4e86,	// (0x00023849) list_double_pane_g1_ParamLimits

0x4e86,	// (0x00023849) list_double_pane_g1

0x4e92,	// (0x00023855) list_double_pane_g2_ParamLimits

0x4e92,	// (0x00023855) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002df8a) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002df8a) list_double_pane_g

0x4e9e,	// (0x00023861) list_double_pane_t1_ParamLimits

0x4e9e,	// (0x00023861) list_double_pane_t1

0x4eb4,	// (0x00023877) list_double_pane_t2_ParamLimits

0x4eb4,	// (0x00023877) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002df8f) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002df8f) list_double_pane_t

0x4ec6,	// (0x00023889) list_double2_pane_g1_ParamLimits

0x4ec6,	// (0x00023889) list_double2_pane_g1

0x4ed7,	// (0x0002389a) list_double2_pane_g2_ParamLimits

0x4ed7,	// (0x0002389a) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002df94) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002df94) list_double2_pane_g

0x4ee3,	// (0x000238a6) list_double2_pane_t1_ParamLimits

0x4ee3,	// (0x000238a6) list_double2_pane_t1

0x4ef9,	// (0x000238bc) list_double2_pane_t2_ParamLimits

0x4ef9,	// (0x000238bc) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002df99) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002df99) list_double2_pane_t

0x4e86,	// (0x00023849) list_double_number_pane_g1_ParamLimits

0x4e86,	// (0x00023849) list_double_number_pane_g1

0x4e92,	// (0x00023855) list_double_number_pane_g2_ParamLimits

0x4e92,	// (0x00023855) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002df8a) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002df8a) list_double_number_pane_g

0x4f0b,	// (0x000238ce) list_double_number_pane_t1_ParamLimits

0x4f0b,	// (0x000238ce) list_double_number_pane_t1

0x4f1d,	// (0x000238e0) list_double_number_pane_t2_ParamLimits

0x4f1d,	// (0x000238e0) list_double_number_pane_t2

0x4f33,	// (0x000238f6) list_double_number_pane_t3_ParamLimits

0x4f33,	// (0x000238f6) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002df9e) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002df9e) list_double_number_pane_t

0x4f45,	// (0x00023908) list_double_graphic_pane_g1_ParamLimits

0x4f45,	// (0x00023908) list_double_graphic_pane_g1

0x4f51,	// (0x00023914) list_double_graphic_pane_g2_ParamLimits

0x4f51,	// (0x00023914) list_double_graphic_pane_g2

0x4f60,	// (0x00023923) list_double_graphic_pane_g3_ParamLimits

0x4f60,	// (0x00023923) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002dfa5) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002dfa5) list_double_graphic_pane_g

0x4f78,	// (0x0002393b) list_double_graphic_pane_t1_ParamLimits

0x4f78,	// (0x0002393b) list_double_graphic_pane_t1

0x4f8e,	// (0x00023951) list_double_graphic_pane_t2_ParamLimits

0x4f8e,	// (0x00023951) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002dfae) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002dfae) list_double_graphic_pane_t

0x4fa0,	// (0x00023963) list_double2_graphic_pane_g1_ParamLimits

0x4fa0,	// (0x00023963) list_double2_graphic_pane_g1

0x4fac,	// (0x0002396f) list_double2_graphic_pane_g2_ParamLimits

0x4fac,	// (0x0002396f) list_double2_graphic_pane_g2

0x4fb8,	// (0x0002397b) list_double2_graphic_pane_g3_ParamLimits

0x4fb8,	// (0x0002397b) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002dfb3) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002dfb3) list_double2_graphic_pane_g

0x4fc4,	// (0x00023987) list_double2_graphic_pane_t1_ParamLimits

0x4fc4,	// (0x00023987) list_double2_graphic_pane_t1

0x4fda,	// (0x0002399d) list_double2_graphic_pane_t2_ParamLimits

0x4fda,	// (0x0002399d) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002dfba) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002dfba) list_double2_graphic_pane_t

0x4fec,	// (0x000239af) list_double_large_graphic_pane_g1_ParamLimits

0x4fec,	// (0x000239af) list_double_large_graphic_pane_g1

0x500b,	// (0x000239ce) list_double_large_graphic_pane_g2_ParamLimits

0x500b,	// (0x000239ce) list_double_large_graphic_pane_g2

0x4e92,	// (0x00023855) list_double_large_graphic_pane_g3_ParamLimits

0x4e92,	// (0x00023855) list_double_large_graphic_pane_g3

0x501c,	// (0x000239df) list_double_large_graphic_pane_g4_ParamLimits

0x501c,	// (0x000239df) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002dfbf) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002dfbf) list_double_large_graphic_pane_g

0x5044,	// (0x00023a07) list_double_large_graphic_pane_t1_ParamLimits

0x5044,	// (0x00023a07) list_double_large_graphic_pane_t1

0x505d,	// (0x00023a20) list_double_large_graphic_pane_t2_ParamLimits

0x505d,	// (0x00023a20) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002dfca) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002dfca) list_double_large_graphic_pane_t

0x506f,	// (0x00023a32) list_double2_large_graphic_pane_g1_ParamLimits

0x506f,	// (0x00023a32) list_double2_large_graphic_pane_g1

0x4ec6,	// (0x00023889) list_double2_large_graphic_pane_g2_ParamLimits

0x4ec6,	// (0x00023889) list_double2_large_graphic_pane_g2

0x4ed7,	// (0x0002389a) list_double2_large_graphic_pane_g3_ParamLimits

0x4ed7,	// (0x0002389a) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002dfcf) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002dfcf) list_double2_large_graphic_pane_g

0x507b,	// (0x00023a3e) list_double2_large_graphic_pane_t1_ParamLimits

0x507b,	// (0x00023a3e) list_double2_large_graphic_pane_t1

0x5091,	// (0x00023a54) list_double2_large_graphic_pane_t2_ParamLimits

0x5091,	// (0x00023a54) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0002dfd6) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0002dfd6) list_double2_large_graphic_pane_t

0x50a3,	// (0x00023a66) list_double_heading_pane_g1_ParamLimits

0x50a3,	// (0x00023a66) list_double_heading_pane_g1

0x50b4,	// (0x00023a77) list_double_heading_pane_g2_ParamLimits

0x50b4,	// (0x00023a77) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002dfdb) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002dfdb) list_double_heading_pane_g

0x50c0,	// (0x00023a83) list_double_heading_pane_t1_ParamLimits

0x50c0,	// (0x00023a83) list_double_heading_pane_t1

0x4ef9,	// (0x000238bc) list_double_heading_pane_t2_ParamLimits

0x4ef9,	// (0x000238bc) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0002dfe0) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0002dfe0) list_double_heading_pane_t

0x4fa0,	// (0x00023963) list_double_graphic_heading_pane_g1_ParamLimits

0x4fa0,	// (0x00023963) list_double_graphic_heading_pane_g1

0x50a3,	// (0x00023a66) list_double_graphic_heading_pane_g2_ParamLimits

0x50a3,	// (0x00023a66) list_double_graphic_heading_pane_g2

0x50b4,	// (0x00023a77) list_double_graphic_heading_pane_g3_ParamLimits

0x50b4,	// (0x00023a77) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0002dfe5) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002dfe5) list_double_graphic_heading_pane_g

0x50d6,	// (0x00023a99) list_double_graphic_heading_pane_t1_ParamLimits

0x50d6,	// (0x00023a99) list_double_graphic_heading_pane_t1

0x4fda,	// (0x0002399d) list_double_graphic_heading_pane_t2_ParamLimits

0x4fda,	// (0x0002399d) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002dfec) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002dfec) list_double_graphic_heading_pane_t

0x500b,	// (0x000239ce) list_double_time_pane_g1_ParamLimits

0x500b,	// (0x000239ce) list_double_time_pane_g1

0x4e92,	// (0x00023855) list_double_time_pane_g2_ParamLimits

0x4e92,	// (0x00023855) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0002dff1) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0002dff1) list_double_time_pane_g

0x50ec,	// (0x00023aaf) list_double_time_pane_t1_ParamLimits

0x50ec,	// (0x00023aaf) list_double_time_pane_t1

0x5102,	// (0x00023ac5) list_double_time_pane_t2_ParamLimits

0x5102,	// (0x00023ac5) list_double_time_pane_t2

0x5114,	// (0x00023ad7) list_double_time_pane_t3_ParamLimits

0x5114,	// (0x00023ad7) list_double_time_pane_t3

0x5126,	// (0x00023ae9) list_double_time_pane_t4_ParamLimits

0x5126,	// (0x00023ae9) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0002dff6) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0002dff6) list_double_time_pane_t

0x5138,	// (0x00023afb) list_setting_pane_g1_ParamLimits

0x5138,	// (0x00023afb) list_setting_pane_g1

0x50b4,	// (0x00023a77) list_setting_pane_g2_ParamLimits

0x50b4,	// (0x00023a77) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0002dfff) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0002dfff) list_setting_pane_g

0x5144,	// (0x00023b07) list_setting_pane_t1_ParamLimits

0x5144,	// (0x00023b07) list_setting_pane_t1

0x515b,	// (0x00023b1e) list_setting_pane_t2_ParamLimits

0x515b,	// (0x00023b1e) list_setting_pane_t2

0x0002,

0xf641,	// (0x0002e004) list_setting_pane_t_ParamLimits

0xf641,	// (0x0002e004) list_setting_pane_t

0x519a,	// (0x00023b5d) set_value_pane_cp_ParamLimits

0x519a,	// (0x00023b5d) set_value_pane_cp

0x51a8,	// (0x00023b6b) list_setting_number_pane_g1_ParamLimits

0x51a8,	// (0x00023b6b) list_setting_number_pane_g1

0x51b4,	// (0x00023b77) list_setting_number_pane_g2_ParamLimits

0x51b4,	// (0x00023b77) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002e00b) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002e00b) list_setting_number_pane_g

0x51c0,	// (0x00023b83) list_setting_number_pane_t1_ParamLimits

0x51c0,	// (0x00023b83) list_setting_number_pane_t1

0x51d4,	// (0x00023b97) list_setting_number_pane_t2_ParamLimits

0x51d4,	// (0x00023b97) list_setting_number_pane_t2

0x51eb,	// (0x00023bae) list_setting_number_pane_t3_ParamLimits

0x51eb,	// (0x00023bae) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0002e010) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0002e010) list_setting_number_pane_t

0x519a,	// (0x00023b5d) set_value_pane_ParamLimits

0x519a,	// (0x00023b5d) set_value_pane

0x3047,	// (0x00021a0a) bg_set_opt_pane_ParamLimits

0x3047,	// (0x00021a0a) bg_set_opt_pane

0x522e,	// (0x00023bf1) set_value_pane_t1

0x3076,	// (0x00021a39) slider_set_pane_cp3

0x307f,	// (0x00021a42) volume_small_pane_cp

0x3088,	// (0x00021a4b) list_form_gen_pane

0x3091,	// (0x00021a54) scroll_pane_cp8

0x5244,	// (0x00023c07) form_field_data_pane_ParamLimits

0x5244,	// (0x00023c07) form_field_data_pane

0x526a,	// (0x00023c2d) form_field_data_wide_pane_ParamLimits

0x526a,	// (0x00023c2d) form_field_data_wide_pane

0x528f,	// (0x00023c52) form_field_popup_pane_ParamLimits

0x528f,	// (0x00023c52) form_field_popup_pane

0x52b1,	// (0x00023c74) form_field_popup_wide_pane_ParamLimits

0x52b1,	// (0x00023c74) form_field_popup_wide_pane

0x52d2,	// (0x00023c95) form_field_slider_pane_ParamLimits

0x52d2,	// (0x00023c95) form_field_slider_pane

0x52e5,	// (0x00023ca8) form_field_slider_wide_pane_ParamLimits

0x52e5,	// (0x00023ca8) form_field_slider_wide_pane

0x30fa,	// (0x00021abd) data_form_pane

0x5302,	// (0x00023cc5) form_field_data_pane_t1

0x3106,	// (0x00021ac9) input_focus_pane

0x531c,	// (0x00023cdf) data_form_wide_pane

0x5339,	// (0x00023cfc) form_field_data_wide_pane_t1

0x198c,	// (0x0002034f) input_focus_pane_cp6

0x535b,	// (0x00023d1e) form_field_popup_pane_t1

0x3106,	// (0x00021ac9) input_focus_pane_cp7

0x316b,	// (0x00021b2e) list_form_pane

0x537d,	// (0x00023d40) form_field_popup_wide_pane_t1

0x3106,	// (0x00021ac9) input_focus_pane_cp8

0x3191,	// (0x00021b54) list_form_wide_pane

0x539a,	// (0x00023d5d) form_field_slider_pane_t1_ParamLimits

0x539a,	// (0x00023d5d) form_field_slider_pane_t1

0x53b2,	// (0x00023d75) form_field_slider_pane_t2_ParamLimits

0x53b2,	// (0x00023d75) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0002e020) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0002e020) form_field_slider_pane_t

0x15a7,	// (0x0001ff6a) input_focus_pane_cp9_ParamLimits

0x15a7,	// (0x0001ff6a) input_focus_pane_cp9

0x53c7,	// (0x00023d8a) slider_cont_pane_ParamLimits

0x53c7,	// (0x00023d8a) slider_cont_pane

0x319d,	// (0x00021b60) form_field_slider_wide_pane_t1_ParamLimits

0x319d,	// (0x00021b60) form_field_slider_wide_pane_t1

0x53db,	// (0x00023d9e) form_field_slider_wide_pane_t2_ParamLimits

0x53db,	// (0x00023d9e) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0002e025) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0002e025) form_field_slider_wide_pane_t

0x15a7,	// (0x0001ff6a) input_focus_pane_cp10_ParamLimits

0x15a7,	// (0x0001ff6a) input_focus_pane_cp10

0x53ed,	// (0x00023db0) slider_cont_pane_cp1_ParamLimits

0x53ed,	// (0x00023db0) slider_cont_pane_cp1

0x5401,	// (0x00023dc4) slider_form_pane_cp

0x31c1,	// (0x00021b84) input_focus_pane_g1

0x31c9,	// (0x00021b8c) input_focus_pane_g2

0x31d1,	// (0x00021b94) input_focus_pane_g3

0x31d9,	// (0x00021b9c) input_focus_pane_g4

0x31e1,	// (0x00021ba4) input_focus_pane_g5

0x31e9,	// (0x00021bac) input_focus_pane_g6

0x31f1,	// (0x00021bb4) input_focus_pane_g7

0x31f9,	// (0x00021bbc) input_focus_pane_g8

0x3201,	// (0x00021bc4) input_focus_pane_g9

0x154f,	// (0x0001ff12) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002e02a) input_focus_pane_g

0x9f72,	// (0x00028935) wait_border_pane_g3_copy1

0x5409,	// (0x00023dcc) data_form_pane_t1

0x154f,	// (0x0001ff12) wait_anim_pane_g1_copy1

0x570e,	// (0x000240d1) data_form_wide_pane_t1

0x5426,	// (0x00023de9) list_form_graphic_pane_cp_ParamLimits

0x5426,	// (0x00023de9) list_form_graphic_pane_cp

0xaec9,	// (0x0002988c) slider_form_pane_g1

0xaed2,	// (0x00029895) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0002e32d) slider_form_pane_g

0x543b,	// (0x00023dfe) list_form_graphic_pane_ParamLimits

0x543b,	// (0x00023dfe) list_form_graphic_pane

0x544d,	// (0x00023e10) list_form_graphic_pane_g1

0x5455,	// (0x00023e18) list_form_graphic_pane_t1_ParamLimits

0x5455,	// (0x00023e18) list_form_graphic_pane_t1

0x15b5,	// (0x0001ff78) list_highlight_pane_cp5_ParamLimits

0x15b5,	// (0x0001ff78) list_highlight_pane_cp5

0x546a,	// (0x00023e2d) find_pane_g1

0x3238,	// (0x00021bfb) input_find_pane

0x5473,	// (0x00023e36) input_find_pane_g1_ParamLimits

0x5473,	// (0x00023e36) input_find_pane_g1

0x547f,	// (0x00023e42) input_find_pane_t1_ParamLimits

0x547f,	// (0x00023e42) input_find_pane_t1

0x5494,	// (0x00023e57) input_find_pane_t2_ParamLimits

0x5494,	// (0x00023e57) input_find_pane_t2

0x0001,

0xf67c,	// (0x0002e03f) input_find_pane_t_ParamLimits

0xf67c,	// (0x0002e03f) input_find_pane_t

0x3241,	// (0x00021c04) input_focus_pane_cp5_ParamLimits

0x3241,	// (0x00021c04) input_focus_pane_cp5

0x3254,	// (0x00021c17) bg_popup_window_pane_cp2_ParamLimits

0x3254,	// (0x00021c17) bg_popup_window_pane_cp2

0x3261,	// (0x00021c24) listscroll_menu_pane_ParamLimits

0x3261,	// (0x00021c24) listscroll_menu_pane

0x66a5,	// (0x00025068) popup_submenu_window_ParamLimits

0x66a5,	// (0x00025068) popup_submenu_window

0x326d,	// (0x00021c30) find_popup_pane_g1

0x3275,	// (0x00021c38) input_popup_find_pane_cp

0x327f,	// (0x00021c42) input_focus_pane_cp4_ParamLimits

0x327f,	// (0x00021c42) input_focus_pane_cp4

0x328d,	// (0x00021c50) input_popup_find_pane_t1_ParamLimits

0x328d,	// (0x00021c50) input_popup_find_pane_t1

0x1559,	// (0x0001ff1c) bg_popup_sub_pane_cp

0x32bb,	// (0x00021c7e) listscroll_popup_sub_pane

0x32c3,	// (0x00021c86) list_submenu_pane_ParamLimits

0x32c3,	// (0x00021c86) list_submenu_pane

0x32d4,	// (0x00021c97) scroll_pane_cp4

0x32dc,	// (0x00021c9f) list_single_popup_submenu_pane_ParamLimits

0x32dc,	// (0x00021c9f) list_single_popup_submenu_pane

0x32f1,	// (0x00021cb4) list_single_popup_submenu_pane_g1

0x32f9,	// (0x00021cbc) list_single_popup_submenu_pane_t1_ParamLimits

0x32f9,	// (0x00021cbc) list_single_popup_submenu_pane_t1

0x15b5,	// (0x0001ff78) bg_active_tab_pane_cp1_ParamLimits

0x15b5,	// (0x0001ff78) bg_active_tab_pane_cp1

0x66e3,	// (0x000250a6) tabs_2_active_pane_g1

0x66eb,	// (0x000250ae) tabs_2_active_pane_t1

0x15b5,	// (0x0001ff78) bg_passive_tab_pane_cp1_ParamLimits

0x15b5,	// (0x0001ff78) bg_passive_tab_pane_cp1

0x66e3,	// (0x000250a6) tabs_2_passive_pane_g1

0x66eb,	// (0x000250ae) tabs_2_passive_pane_t1

0x66fd,	// (0x000250c0) bg_active_tab_pane_cp4

0x670b,	// (0x000250ce) tabs_2_long_active_pane_t1

0x671e,	// (0x000250e1) bg_passive_tab_pane_cp4

0x7c05,	// (0x000265c8) list_single_midp_graphic_pane_g4_ParamLimits

0x66fd,	// (0x000250c0) bg_active_tab_pane_cp5

0x672a,	// (0x000250ed) tabs_3_long_active_pane_t1

0x671e,	// (0x000250e1) bg_passive_tab_pane_cp5

0x7c05,	// (0x000265c8) list_single_midp_graphic_pane_g4

0x15b5,	// (0x0001ff78) bg_popup_window_pane_cp13_ParamLimits

0x15b5,	// (0x0001ff78) bg_popup_window_pane_cp13

0x3317,	// (0x00021cda) listscroll_popup_fast_pane_ParamLimits

0x3317,	// (0x00021cda) listscroll_popup_fast_pane

0x3326,	// (0x00021ce9) grid_popup_fast_pane_ParamLimits

0x3326,	// (0x00021ce9) grid_popup_fast_pane

0x3338,	// (0x00021cfb) scroll_pane_cp9_ParamLimits

0x3338,	// (0x00021cfb) scroll_pane_cp9

0xc84f,	// (0x0002b212) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc84f,	// (0x0002b212) list_single_graphic_hl_pane_t1_cp2

0x335c,	// (0x00021d1f) input_focus_pane_cp20_ParamLimits

0x335c,	// (0x00021d1f) input_focus_pane_cp20

0x336a,	// (0x00021d2d) query_popup_data_pane_t1_ParamLimits

0x336a,	// (0x00021d2d) query_popup_data_pane_t1

0x337d,	// (0x00021d40) query_popup_data_pane_t2_ParamLimits

0x337d,	// (0x00021d40) query_popup_data_pane_t2

0x33c3,	// (0x00021d86) query_popup_data_pane_t3_ParamLimits

0x33c3,	// (0x00021d86) query_popup_data_pane_t3

0x3404,	// (0x00021dc7) query_popup_data_pane_t4_ParamLimits

0x3404,	// (0x00021dc7) query_popup_data_pane_t4

0x3440,	// (0x00021e03) query_popup_data_pane_t5_ParamLimits

0x3440,	// (0x00021e03) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0002e044) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0002e044) query_popup_data_pane_t

0x31c1,	// (0x00021b84) bg_set_opt_pane_g1

0x31c9,	// (0x00021b8c) bg_set_opt_pane_g2

0x31d1,	// (0x00021b94) bg_set_opt_pane_g3

0x31d9,	// (0x00021b9c) bg_set_opt_pane_g4

0x31e1,	// (0x00021ba4) bg_set_opt_pane_g5

0x31e9,	// (0x00021bac) bg_set_opt_pane_g6

0x31f1,	// (0x00021bb4) bg_set_opt_pane_g7

0x31f9,	// (0x00021bbc) bg_set_opt_pane_g8

0x3201,	// (0x00021bc4) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0002e04f) bg_set_opt_pane_g

0x6f62,	// (0x00025925) control_top_pane_stacon_ParamLimits

0x6f62,	// (0x00025925) control_top_pane_stacon

0x6fb5,	// (0x00025978) signal_pane_stacon_ParamLimits

0x6fb5,	// (0x00025978) signal_pane_stacon

0x6fda,	// (0x0002599d) stacon_top_pane_g1_ParamLimits

0x6fda,	// (0x0002599d) stacon_top_pane_g1

0x6ffc,	// (0x000259bf) title_pane_stacon_ParamLimits

0x6ffc,	// (0x000259bf) title_pane_stacon

0x7026,	// (0x000259e9) uni_indicator_pane_stacon_ParamLimits

0x7026,	// (0x000259e9) uni_indicator_pane_stacon

0x703b,	// (0x000259fe) battery_pane_stacon_ParamLimits

0x703b,	// (0x000259fe) battery_pane_stacon

0x707f,	// (0x00025a42) control_bottom_pane_stacon_ParamLimits

0x707f,	// (0x00025a42) control_bottom_pane_stacon

0x70a2,	// (0x00025a65) navi_pane_stacon_ParamLimits

0x70a2,	// (0x00025a65) navi_pane_stacon

0x70c5,	// (0x00025a88) stacon_bottom_pane_g1_ParamLimits

0x70c5,	// (0x00025a88) stacon_bottom_pane_g1

0x673c,	// (0x000250ff) aid_levels_signal_lsc_ParamLimits

0x673c,	// (0x000250ff) aid_levels_signal_lsc

0x6753,	// (0x00025116) signal_pane_stacon_g1_ParamLimits

0x6753,	// (0x00025116) signal_pane_stacon_g1

0x6767,	// (0x0002512a) signal_pane_stacon_g2_ParamLimits

0x6767,	// (0x0002512a) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0002e062) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002e062) signal_pane_stacon_g

0x679c,	// (0x0002515f) title_pane_stacon_t1_ParamLimits

0x679c,	// (0x0002515f) title_pane_stacon_t1

0x351d,	// (0x00021ee0) uni_indicator_pane_stacon_g1

0x3527,	// (0x00021eea) uni_indicator_pane_stacon_g2

0x3509,	// (0x00021ecc) uni_indicator_pane_stacon_g3

0x3513,	// (0x00021ed6) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0002e06e) uni_indicator_pane_stacon_g

0x67c1,	// (0x00025184) control_top_pane_stacon_g1

0x67c9,	// (0x0002518c) control_top_pane_stacon_t1_ParamLimits

0x67c9,	// (0x0002518c) control_top_pane_stacon_t1

0x6800,	// (0x000251c3) aid_levels_battery_lsc_ParamLimits

0x6800,	// (0x000251c3) aid_levels_battery_lsc

0x6818,	// (0x000251db) battery_pane_stacon_g1_ParamLimits

0x6818,	// (0x000251db) battery_pane_stacon_g1

0x682a,	// (0x000251ed) battery_pane_stacon_g2_ParamLimits

0x682a,	// (0x000251ed) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0002e077) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0002e077) battery_pane_stacon_g

0x6868,	// (0x0002522b) navi_icon_pane_stacon

0x687c,	// (0x0002523f) navi_navi_pane_stacon

0x6868,	// (0x0002522b) navi_text_pane_stacon

0x6892,	// (0x00025255) control_bottom_pane_stacon_g1

0x689a,	// (0x0002525d) control_bottom_pane_stacon_t1_ParamLimits

0x689a,	// (0x0002525d) control_bottom_pane_stacon_t1

0x68d1,	// (0x00025294) grid_app_pane_ParamLimits

0x68d1,	// (0x00025294) grid_app_pane

0x68f3,	// (0x000252b6) scroll_pane_cp15_ParamLimits

0x68f3,	// (0x000252b6) scroll_pane_cp15

0x6906,	// (0x000252c9) cell_app_pane_ParamLimits

0x6906,	// (0x000252c9) cell_app_pane

0x6932,	// (0x000252f5) cell_app_pane_g1_ParamLimits

0x6932,	// (0x000252f5) cell_app_pane_g1

0x6956,	// (0x00025319) cell_app_pane_g2_ParamLimits

0x6956,	// (0x00025319) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0002e07c) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0002e07c) cell_app_pane_g

0x6962,	// (0x00025325) cell_app_pane_t1_ParamLimits

0x6962,	// (0x00025325) cell_app_pane_t1

0x6993,	// (0x00025356) grid_highlight_pane_ParamLimits

0x6993,	// (0x00025356) grid_highlight_pane

0x31c1,	// (0x00021b84) cell_highlight_pane_g1

0x31c9,	// (0x00021b8c) cell_highlight_pane_g2

0x31d1,	// (0x00021b94) cell_highlight_pane_g3

0x31d9,	// (0x00021b9c) cell_highlight_pane_g4

0x31e1,	// (0x00021ba4) cell_highlight_pane_g5

0x31e9,	// (0x00021bac) cell_highlight_pane_g6

0x31f1,	// (0x00021bb4) cell_highlight_pane_g7

0x31f9,	// (0x00021bbc) cell_highlight_pane_g8

0x3201,	// (0x00021bc4) cell_highlight_pane_g9

0x154f,	// (0x0001ff12) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002e02a) cell_highlight_pane_g

0x69b7,	// (0x0002537a) bg_scroll_pane

0x69d6,	// (0x00025399) scroll_handle_pane

0x6a27,	// (0x000253ea) scroll_bg_pane_g1

0x6a3c,	// (0x000253ff) scroll_bg_pane_g2

0x6a54,	// (0x00025417) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0002e081) scroll_bg_pane_g

0x6a69,	// (0x0002542c) scroll_handle_focus_pane_ParamLimits

0x6a69,	// (0x0002542c) scroll_handle_focus_pane

0x6a27,	// (0x000253ea) scroll_handle_pane_g1

0x6a76,	// (0x00025439) scroll_handle_pane_g2

0x6a54,	// (0x00025417) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0002e088) scroll_handle_pane_g

0x327f,	// (0x00021c42) bg_popup_sub_pane_cp21_ParamLimits

0x327f,	// (0x00021c42) bg_popup_sub_pane_cp21

0x6a8a,	// (0x0002544d) popup_fep_japan_predictive_window_t1_ParamLimits

0x6a8a,	// (0x0002544d) popup_fep_japan_predictive_window_t1

0x6aa1,	// (0x00025464) popup_fep_japan_predictive_window_t2_ParamLimits

0x6aa1,	// (0x00025464) popup_fep_japan_predictive_window_t2

0x6ad4,	// (0x00025497) popup_fep_japan_predictive_window_t3_ParamLimits

0x6ad4,	// (0x00025497) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0002e08f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0002e08f) popup_fep_japan_predictive_window_t

0x1559,	// (0x0001ff1c) bg_popup_sub_pane_cp23

0x6b0b,	// (0x000254ce) listscroll_japin_cand_pane

0x6b13,	// (0x000254d6) popup_fep_japan_candidate_window_t1

0x6b21,	// (0x000254e4) candidate_pane_ParamLimits

0x6b21,	// (0x000254e4) candidate_pane

0x6b33,	// (0x000254f6) scroll_pane_cp30

0x6b3d,	// (0x00025500) list_single_popup_jap_candidate_pane_ParamLimits

0x6b3d,	// (0x00025500) list_single_popup_jap_candidate_pane

0x1559,	// (0x0001ff1c) list_highlight_pane_cp30

0x6b51,	// (0x00025514) list_single_popup_jap_candidate_pane_t1

0x6b60,	// (0x00025523) level_1_signal

0x6b6d,	// (0x00025530) level_2_signal

0x6b7a,	// (0x0002553d) level_3_signal

0x6b87,	// (0x0002554a) level_4_signal

0x6b94,	// (0x00025557) level_5_signal

0x6ba1,	// (0x00025564) level_6_signal

0x6bae,	// (0x00025571) level_7_signal

0x6b60,	// (0x00025523) level_1_battery

0x6b6d,	// (0x00025530) level_2_battery

0x6b7a,	// (0x0002553d) level_3_battery

0x6b87,	// (0x0002554a) level_4_battery

0x6b94,	// (0x00025557) level_5_battery

0x6ba1,	// (0x00025564) level_6_battery

0x6bae,	// (0x00025571) level_7_battery

0x6bf2,	// (0x000255b5) list_menu_pane_ParamLimits

0x6bf2,	// (0x000255b5) list_menu_pane

0x6c08,	// (0x000255cb) scroll_pane_cp25_ParamLimits

0x6c08,	// (0x000255cb) scroll_pane_cp25

0x6c21,	// (0x000255e4) list_double2_graphic_pane_cp2_ParamLimits

0x6c21,	// (0x000255e4) list_double2_graphic_pane_cp2

0x6c21,	// (0x000255e4) list_double2_large_graphic_pane_cp2_ParamLimits

0x6c21,	// (0x000255e4) list_double2_large_graphic_pane_cp2

0x6c21,	// (0x000255e4) list_double2_pane_cp2_ParamLimits

0x6c21,	// (0x000255e4) list_double2_pane_cp2

0x6c21,	// (0x000255e4) list_double_graphic_pane_cp2_ParamLimits

0x6c21,	// (0x000255e4) list_double_graphic_pane_cp2

0x6c21,	// (0x000255e4) list_double_large_graphic_pane_cp2_ParamLimits

0x6c21,	// (0x000255e4) list_double_large_graphic_pane_cp2

0x6c21,	// (0x000255e4) list_double_number_pane_cp2_ParamLimits

0x6c21,	// (0x000255e4) list_double_number_pane_cp2

0x6c21,	// (0x000255e4) list_double_pane_cp2_ParamLimits

0x6c21,	// (0x000255e4) list_double_pane_cp2

0x6c47,	// (0x0002560a) list_single_2graphic_pane_cp2_ParamLimits

0x6c47,	// (0x0002560a) list_single_2graphic_pane_cp2

0x6c47,	// (0x0002560a) list_single_graphic_heading_pane_cp2_ParamLimits

0x6c47,	// (0x0002560a) list_single_graphic_heading_pane_cp2

0x6c47,	// (0x0002560a) list_single_graphic_pane_cp2_ParamLimits

0x6c47,	// (0x0002560a) list_single_graphic_pane_cp2

0x6c47,	// (0x0002560a) list_single_heading_pane_cp2_ParamLimits

0x6c47,	// (0x0002560a) list_single_heading_pane_cp2

0x6c64,	// (0x00025627) list_single_large_graphic_pane_cp2_ParamLimits

0x6c64,	// (0x00025627) list_single_large_graphic_pane_cp2

0x6c47,	// (0x0002560a) list_single_number_heading_pane_cp2_ParamLimits

0x6c47,	// (0x0002560a) list_single_number_heading_pane_cp2

0x6c47,	// (0x0002560a) list_single_number_pane_cp2_ParamLimits

0x6c47,	// (0x0002560a) list_single_number_pane_cp2

0x6c74,	// (0x00025637) list_single_pane_cp2_ParamLimits

0x6c74,	// (0x00025637) list_single_pane_cp2

0x6d4a,	// (0x0002570d) bg_popup_sub_pane_cp22

0x6d6f,	// (0x00025732) popup_side_volume_key_window_g1

0x6d99,	// (0x0002575c) popup_side_volume_key_window_t1

0x6db7,	// (0x0002577a) volume_small_pane_cp1

0x15a7,	// (0x0001ff6a) bg_popup_sub_pane_cp24_ParamLimits

0x15a7,	// (0x0001ff6a) bg_popup_sub_pane_cp24

0x6dbf,	// (0x00025782) fep_china_uni_candidate_pane_ParamLimits

0x6dbf,	// (0x00025782) fep_china_uni_candidate_pane

0x6dd3,	// (0x00025796) fep_china_uni_entry_pane

0x6de3,	// (0x000257a6) popup_fep_china_uni_window_g1

0x6dff,	// (0x000257c2) fep_china_uni_entry_pane_g1

0x6e09,	// (0x000257cc) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0002e0c0) fep_china_uni_entry_pane_g

0x6e13,	// (0x000257d6) fep_entry_item_pane

0x6e1d,	// (0x000257e0) fep_candidate_item_pane

0x6e25,	// (0x000257e8) fep_china_uni_candidate_pane_g1

0x6e2f,	// (0x000257f2) fep_china_uni_candidate_pane_g2

0x6e37,	// (0x000257fa) fep_china_uni_candidate_pane_g3

0x6e3f,	// (0x00025802) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0002e0c5) fep_china_uni_candidate_pane_g

0x154f,	// (0x0001ff12) fep_entry_item_pane_g1

0x6e49,	// (0x0002580c) fep_entry_item_pane_t1_ParamLimits

0x6e49,	// (0x0002580c) fep_entry_item_pane_t1

0x6e5f,	// (0x00025822) fep_candidate_item_pane_t1_ParamLimits

0x6e5f,	// (0x00025822) fep_candidate_item_pane_t1

0x6e74,	// (0x00025837) fep_candidate_item_pane_t2_ParamLimits

0x6e74,	// (0x00025837) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0002e0ce) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0002e0ce) fep_candidate_item_pane_t

0x15b5,	// (0x0001ff78) list_highlight_pane_cp31_ParamLimits

0x15b5,	// (0x0001ff78) list_highlight_pane_cp31

0x6e86,	// (0x00025849) level_1_signal_lsc

0x6e8f,	// (0x00025852) level_2_signal_lsc

0x6e98,	// (0x0002585b) level_3_signal_lsc

0x6ea1,	// (0x00025864) level_4_signal_lsc

0x6eaa,	// (0x0002586d) level_5_signal_lsc

0x6eb3,	// (0x00025876) level_6_signal_lsc

0x6ebc,	// (0x0002587f) level_7_signal_lsc

0x6ebc,	// (0x0002587f) level_1_battery_lsc

0x6ec5,	// (0x00025888) level_2_battery_lsc

0x6ece,	// (0x00025891) level_3_battery_lsc

0x6ed7,	// (0x0002589a) level_4_battery_lsc

0x6ee0,	// (0x000258a3) level_5_battery_lsc

0x6ee9,	// (0x000258ac) level_6_battery_lsc

0x6e86,	// (0x00025849) level_7_battery_lsc

0x6ef2,	// (0x000258b5) scroll_handle_focus_pane_g1

0x6efb,	// (0x000258be) scroll_handle_focus_pane_g2

0x6f04,	// (0x000258c7) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0002e0d3) scroll_handle_focus_pane_g

0x54a9,	// (0x00023e6c) list_single_2graphic_pane_g1_ParamLimits

0x54a9,	// (0x00023e6c) list_single_2graphic_pane_g1

0x4e21,	// (0x000237e4) list_single_2graphic_pane_g2_ParamLimits

0x4e21,	// (0x000237e4) list_single_2graphic_pane_g2

0x4da7,	// (0x0002376a) list_single_2graphic_pane_g3_ParamLimits

0x4da7,	// (0x0002376a) list_single_2graphic_pane_g3

0x54b5,	// (0x00023e78) list_single_2graphic_pane_g4_ParamLimits

0x54b5,	// (0x00023e78) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0002e0da) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0002e0da) list_single_2graphic_pane_g

0x54c1,	// (0x00023e84) list_single_2graphic_pane_t1_ParamLimits

0x54c1,	// (0x00023e84) list_single_2graphic_pane_t1

0x54ef,	// (0x00023eb2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x54ef,	// (0x00023eb2) list_double2_graphic_large_graphic_pane_g1

0x4ec6,	// (0x00023889) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4ec6,	// (0x00023889) list_double2_graphic_large_graphic_pane_g2

0x4ed7,	// (0x0002389a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ed7,	// (0x0002389a) list_double2_graphic_large_graphic_pane_g3

0x5501,	// (0x00023ec4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5501,	// (0x00023ec4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0002e0e3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0002e0e3) list_double2_graphic_large_graphic_pane_g

0x550d,	// (0x00023ed0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x550d,	// (0x00023ed0) list_double2_graphic_large_graphic_pane_t1

0x5523,	// (0x00023ee6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5523,	// (0x00023ee6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0002e0ec) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0002e0ec) list_double2_graphic_large_graphic_pane_t

0x7188,	// (0x00025b4b) popup_fast_swap_window_ParamLimits

0x7188,	// (0x00025b4b) popup_fast_swap_window

0x71a6,	// (0x00025b69) popup_side_volume_key_window

0x71c4,	// (0x00025b87) stacon_top_pane

0x71ce,	// (0x00025b91) status_pane_ParamLimits

0x71ce,	// (0x00025b91) status_pane

0x1545,	// (0x0001ff08) status_small_pane

0x1559,	// (0x0001ff1c) control_pane

0x1559,	// (0x0001ff1c) stacon_bottom_pane

0x3091,	// (0x00021a54) scroll_pane_cp121

0x3088,	// (0x00021a4b) set_content_pane

0x6f0d,	// (0x000258d0) bg_active_tab_pane_g1_cp1

0x6f16,	// (0x000258d9) bg_active_tab_pane_g2_cp1

0x6f1f,	// (0x000258e2) bg_active_tab_pane_g3_cp1

0x6f0d,	// (0x000258d0) bg_passive_tab_pane_g1_cp1

0x6f16,	// (0x000258d9) bg_passive_tab_pane_g2_cp1

0x6f1f,	// (0x000258e2) bg_passive_tab_pane_g3_cp1

0x6f28,	// (0x000258eb) bg_active_tab_pane_g1_cp2

0x6f16,	// (0x000258d9) bg_active_tab_pane_g2_cp2

0x6f31,	// (0x000258f4) bg_active_tab_pane_g3_cp2

0x6f28,	// (0x000258eb) bg_passive_tab_pane_g1_cp2

0x6f16,	// (0x000258d9) bg_passive_tab_pane_g2_cp2

0x6f31,	// (0x000258f4) bg_passive_tab_pane_g3_cp2

0x6f3a,	// (0x000258fd) bg_active_tab_pane_g1_cp3

0x6f16,	// (0x000258d9) bg_active_tab_pane_g2_cp3

0x6f43,	// (0x00025906) bg_active_tab_pane_g3_cp3

0x6f3a,	// (0x000258fd) bg_passive_tab_pane_g1_cp3

0x6f16,	// (0x000258d9) bg_passive_tab_pane_g2_cp3

0x6f43,	// (0x00025906) bg_passive_tab_pane_g3_cp3

0x6f4c,	// (0x0002590f) bg_active_tab_pane_g1_cp4

0x6f16,	// (0x000258d9) bg_active_tab_pane_g2_cp4

0x6f57,	// (0x0002591a) bg_active_tab_pane_g3_cp4

0x6f4c,	// (0x0002590f) bg_passive_tab_pane_g1_cp4

0x6f16,	// (0x000258d9) bg_passive_tab_pane_g2_cp4

0x6f57,	// (0x0002591a) bg_passive_tab_pane_g3_cp4

0x70e1,	// (0x00025aa4) bg_active_tab_pane_g1_cp5

0x6f16,	// (0x000258d9) bg_active_tab_pane_g2_cp5

0x70ea,	// (0x00025aad) bg_active_tab_pane_g3_cp5

0x70e1,	// (0x00025aa4) bg_passive_tab_pane_g1_cp5

0x6f16,	// (0x000258d9) bg_passive_tab_pane_g2_cp5

0x70ea,	// (0x00025aad) bg_passive_tab_pane_g3_cp5

0x70f3,	// (0x00025ab6) list_set_graphic_pane_ParamLimits

0x70f3,	// (0x00025ab6) list_set_graphic_pane

0x1559,	// (0x0001ff1c) bg_set_opt_pane_cp4

0x7109,	// (0x00025acc) list_set_graphic_pane_g1_ParamLimits

0x7109,	// (0x00025acc) list_set_graphic_pane_g1

0x7115,	// (0x00025ad8) list_set_graphic_pane_g2_ParamLimits

0x7115,	// (0x00025ad8) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0002e0f1) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0002e0f1) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0002e46d) volume_small_pane_cp_g

0x7139,	// (0x00025afc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7139,	// (0x00025afc) list_double2_large_graphic_pane_g1_cp2

0x7147,	// (0x00025b0a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7147,	// (0x00025b0a) list_double2_large_graphic_pane_g2_cp2

0x7158,	// (0x00025b1b) list_double2_large_graphic_pane_g3_cp2

0x7160,	// (0x00025b23) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7160,	// (0x00025b23) list_double2_large_graphic_pane_t1_cp2

0x7176,	// (0x00025b39) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7176,	// (0x00025b39) list_double2_large_graphic_pane_t2_cp2

0xaa56,	// (0x00029419) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaa56,	// (0x00029419) list_double_large_graphic_pane_g1_cp2

0xaa69,	// (0x0002942c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaa69,	// (0x0002942c) list_double_large_graphic_pane_g2_cp2

0x72ec,	// (0x00025caf) list_double_large_graphic_pane_g3_cp2

0xaa7a,	// (0x0002943d) list_double_large_graphic_pane_g4_cp

0xaa82,	// (0x00029445) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xaa82,	// (0x00029445) list_double_large_graphic_pane_t1_cp2

0xaa99,	// (0x0002945c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xaa99,	// (0x0002945c) list_double_large_graphic_pane_t2_cp2

0x71dc,	// (0x00025b9f) list_double2_graphic_pane_g1_cp2_ParamLimits

0x71dc,	// (0x00025b9f) list_double2_graphic_pane_g1_cp2

0x71ea,	// (0x00025bad) list_double2_graphic_pane_g2_cp2_ParamLimits

0x71ea,	// (0x00025bad) list_double2_graphic_pane_g2_cp2

0x71fb,	// (0x00025bbe) list_double2_graphic_pane_g3_cp2

0x7205,	// (0x00025bc8) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7205,	// (0x00025bc8) list_double2_graphic_pane_t1_cp2

0x721b,	// (0x00025bde) list_double2_graphic_pane_t2_cp2_ParamLimits

0x721b,	// (0x00025bde) list_double2_graphic_pane_t2_cp2

0x722d,	// (0x00025bf0) list_single_number_heading_pane_g1_cp2_ParamLimits

0x722d,	// (0x00025bf0) list_single_number_heading_pane_g1_cp2

0x7239,	// (0x00025bfc) list_single_number_heading_pane_g2_cp2

0x7241,	// (0x00025c04) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7241,	// (0x00025c04) list_single_number_heading_pane_t1_cp2

0x7257,	// (0x00025c1a) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7257,	// (0x00025c1a) list_single_number_heading_pane_t2_cp2

0x726b,	// (0x00025c2e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x726b,	// (0x00025c2e) list_single_number_heading_pane_t3_cp2

0x722d,	// (0x00025bf0) list_single_heading_pane_g1_cp2_ParamLimits

0x722d,	// (0x00025bf0) list_single_heading_pane_g1_cp2

0x7239,	// (0x00025bfc) list_single_heading_pane_g2_cp2

0x7241,	// (0x00025c04) list_single_heading_pane_t1_cp2_ParamLimits

0x7241,	// (0x00025c04) list_single_heading_pane_t1_cp2

0xa850,	// (0x00029213) list_single_heading_pane_t2_cp2_ParamLimits

0xa850,	// (0x00029213) list_single_heading_pane_t2_cp2

0xa798,	// (0x0002915b) list_double_graphic_pane_g1_cp2_ParamLimits

0xa798,	// (0x0002915b) list_double_graphic_pane_g1_cp2

0xa7a4,	// (0x00029167) list_double_graphic_pane_g2_cp2_ParamLimits

0xa7a4,	// (0x00029167) list_double_graphic_pane_g2_cp2

0xa7b3,	// (0x00029176) list_double_graphic_pane_g3_cp2

0xa7bb,	// (0x0002917e) list_double_graphic_pane_t1_cp2_ParamLimits

0xa7bb,	// (0x0002917e) list_double_graphic_pane_t1_cp2

0xa7d1,	// (0x00029194) list_double_graphic_pane_t2_cp2_ParamLimits

0xa7d1,	// (0x00029194) list_double_graphic_pane_t2_cp2

0x72e0,	// (0x00025ca3) list_double_number_pane_g1_cp2_ParamLimits

0x72e0,	// (0x00025ca3) list_double_number_pane_g1_cp2

0x72ec,	// (0x00025caf) list_double_number_pane_g2_cp2

0xa75c,	// (0x0002911f) list_double_number_pane_t1_cp2_ParamLimits

0xa75c,	// (0x0002911f) list_double_number_pane_t1_cp2

0xa770,	// (0x00029133) list_double_number_pane_t2_cp2_ParamLimits

0xa770,	// (0x00029133) list_double_number_pane_t2_cp2

0xa786,	// (0x00029149) list_double_number_pane_t3_cp2_ParamLimits

0xa786,	// (0x00029149) list_double_number_pane_t3_cp2

0xa645,	// (0x00029008) list_single_graphic_pane_g1_cp2_ParamLimits

0xa645,	// (0x00029008) list_single_graphic_pane_g1_cp2

0x7351,	// (0x00025d14) list_single_graphic_pane_g2_cp2_ParamLimits

0x7351,	// (0x00025d14) list_single_graphic_pane_g2_cp2

0x735d,	// (0x00025d20) list_single_graphic_pane_g3_cp2

0xa61b,	// (0x00028fde) list_single_graphic_pane_t1_cp2_ParamLimits

0xa61b,	// (0x00028fde) list_single_graphic_pane_t1_cp2

0x7351,	// (0x00025d14) list_single_number_pane_g1_cp2_ParamLimits

0x7351,	// (0x00025d14) list_single_number_pane_g1_cp2

0x735d,	// (0x00025d20) list_single_number_pane_g2_cp2

0xa61b,	// (0x00028fde) list_single_number_pane_t1_cp2_ParamLimits

0xa61b,	// (0x00028fde) list_single_number_pane_t1_cp2

0xa631,	// (0x00028ff4) list_single_number_pane_t2_cp2_ParamLimits

0xa631,	// (0x00028ff4) list_single_number_pane_t2_cp2

0x7147,	// (0x00025b0a) list_double2_pane_g1_cp2_ParamLimits

0x7147,	// (0x00025b0a) list_double2_pane_g1_cp2

0x7158,	// (0x00025b1b) list_double2_pane_g2_cp2

0x72b8,	// (0x00025c7b) list_double2_pane_t1_cp2_ParamLimits

0x72b8,	// (0x00025c7b) list_double2_pane_t1_cp2

0x72ce,	// (0x00025c91) list_double2_pane_t2_cp2_ParamLimits

0x72ce,	// (0x00025c91) list_double2_pane_t2_cp2

0x72e0,	// (0x00025ca3) list_double_pane_g1_cp2_ParamLimits

0x72e0,	// (0x00025ca3) list_double_pane_g1_cp2

0x72ec,	// (0x00025caf) list_double_pane_g2_cp2

0x72f4,	// (0x00025cb7) list_double_pane_t1_cp2_ParamLimits

0x72f4,	// (0x00025cb7) list_double_pane_t1_cp2

0x730a,	// (0x00025ccd) list_double_pane_t2_cp2_ParamLimits

0x730a,	// (0x00025ccd) list_double_pane_t2_cp2

0x7341,	// (0x00025d04) list_single_pane_cp2_g3

0x7351,	// (0x00025d14) list_single_pane_g1_cp2_ParamLimits

0x7351,	// (0x00025d14) list_single_pane_g1_cp2

0x735d,	// (0x00025d20) list_single_pane_g2_cp2

0x7365,	// (0x00025d28) list_single_pane_t1_cp2_ParamLimits

0x7365,	// (0x00025d28) list_single_pane_t1_cp2

0x737d,	// (0x00025d40) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x737d,	// (0x00025d40) list_single_large_graphic_pane_g1_cp2

0x738b,	// (0x00025d4e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x738b,	// (0x00025d4e) list_single_large_graphic_pane_g2_cp2

0x9096,	// (0x00027a59) list_single_large_graphic_pane_g3_cp2

0x909e,	// (0x00027a61) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x909e,	// (0x00027a61) list_single_large_graphic_pane_g4_cp1

0x90b8,	// (0x00027a7b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x90b8,	// (0x00027a7b) list_single_large_graphic_pane_t1_cp2

0xa5e5,	// (0x00028fa8) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa5e5,	// (0x00028fa8) list_single_graphic_heading_pane_g1_cp2

0xa5b2,	// (0x00028f75) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa5b2,	// (0x00028f75) list_single_graphic_heading_pane_g4_cp2

0x735d,	// (0x00025d20) list_single_graphic_heading_pane_g5_cp2

0xa5f1,	// (0x00028fb4) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa5f1,	// (0x00028fb4) list_single_graphic_heading_pane_t1_cp2

0xa607,	// (0x00028fca) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa607,	// (0x00028fca) list_single_graphic_heading_pane_t2_cp2

0xa5a6,	// (0x00028f69) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa5a6,	// (0x00028f69) list_single_2graphic_pane_g1_cp2

0xa5b2,	// (0x00028f75) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa5b2,	// (0x00028f75) list_single_2graphic_pane_g2_cp2

0x735d,	// (0x00025d20) list_single_2graphic_pane_g3_cp2

0xa5c3,	// (0x00028f86) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa5c3,	// (0x00028f86) list_single_2graphic_pane_g4_cp2

0xa5cf,	// (0x00028f92) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa5cf,	// (0x00028f92) list_single_2graphic_pane_t1_cp2

0x154f,	// (0x0001ff12) list_highlight_pane_g10_cp1

0xa17e,	// (0x00028b41) list_highlight_pane_g1_cp1

0xa186,	// (0x00028b49) list_highlight_pane_g2_cp1

0xa18e,	// (0x00028b51) list_highlight_pane_g3_cp1

0xa196,	// (0x00028b59) list_highlight_pane_g4_cp1

0xa19e,	// (0x00028b61) list_highlight_pane_g5_cp1

0xa1a6,	// (0x00028b69) list_highlight_pane_g6_cp1

0xa1ae,	// (0x00028b71) list_highlight_pane_g7_cp1

0xa1b6,	// (0x00028b79) list_highlight_pane_g8_cp1

0xa1be,	// (0x00028b81) list_highlight_pane_g9_cp1

0xa09e,	// (0x00028a61) form_field_slider_pane_t3

0xa0ac,	// (0x00028a6f) form_field_slider_pane_t4

0xa0ba,	// (0x00028a7d) slider_form_pane_ParamLimits

0xa0ba,	// (0x00028a7d) slider_form_pane

0x1559,	// (0x0001ff1c) control_abbreviations

0x1559,	// (0x0001ff1c) control_conventions

0x1559,	// (0x0001ff1c) control_definitions

0x1559,	// (0x0001ff1c) format_table_attribute

0xa8a6,	// (0x00029269) bg_popup_preview_window_pane_g9

0x1559,	// (0x0001ff1c) format_table_data2

0x1559,	// (0x0001ff1c) format_table_data3

0x1559,	// (0x0001ff1c) format_table_data_example

0x0008,

0x1559,	// (0x0001ff1c) intro_purpose

0xf8ca,	// (0x0002e28d) bg_popup_preview_window_pane_g

0x1559,	// (0x0001ff1c) texts_category

0x1559,	// (0x0001ff1c) texts_graphics

0x90ce,	// (0x00027a91) text_digital

0x90dd,	// (0x00027aa0) text_primary

0x90ec,	// (0x00027aaf) text_primary_small

0x90fb,	// (0x00027abe) text_secondary

0x910a,	// (0x00027acd) text_title

0xb020,	// (0x000299e3) bg_passive_tab_pane_g1_cp3_srt

0x6f16,	// (0x000258d9) bg_passive_tab_pane_g2_cp3_srt

0xb029,	// (0x000299ec) bg_passive_tab_pane_g3_cp3_srt

0x15b5,	// (0x0001ff78) bg_active_tab_pane_cp3_srt_ParamLimits

0x15b5,	// (0x0001ff78) bg_active_tab_pane_cp3_srt

0xb032,	// (0x000299f5) tabs_4_active_pane_srt_g1

0xb03a,	// (0x000299fd) tabs_4_active_pane_srt_t1_ParamLimits

0xb03a,	// (0x000299fd) tabs_4_active_pane_srt_t1

0xb020,	// (0x000299e3) bg_active_tab_pane_g1_cp3_copy1

0x6f16,	// (0x000258d9) bg_active_tab_pane_g2_cp3_copy1

0xb029,	// (0x000299ec) bg_active_tab_pane_g3_cp3_copy1

0x15b5,	// (0x0001ff78) tabs_2_long_active_pane_srt_ParamLimits

0x15b5,	// (0x0001ff78) tabs_2_long_active_pane_srt

0x15b5,	// (0x0001ff78) tabs_2_long_passive_pane_srt_ParamLimits

0x15b5,	// (0x0001ff78) tabs_2_long_passive_pane_srt

0x671e,	// (0x000250e1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x671e,	// (0x000250e1) bg_passive_tab_pane_cp4_srt

0xace0,	// (0x000296a3) bg_passive_tab_pane_g1_cp4_srt

0x6f16,	// (0x000258d9) bg_passive_tab_pane_g2_cp4_srt

0xace9,	// (0x000296ac) bg_passive_tab_pane_g3_cp4_srt

0x66fd,	// (0x000250c0) bg_active_tab_pane_cp4_srt_ParamLimits

0x66fd,	// (0x000250c0) bg_active_tab_pane_cp4_srt

0xacf2,	// (0x000296b5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xacf2,	// (0x000296b5) tabs_2_long_active_pane_srt_t1

0xace0,	// (0x000296a3) bg_active_tab_pane_g1_cp4_srt

0x6f16,	// (0x000258d9) bg_active_tab_pane_g2_cp4_srt

0xace9,	// (0x000296ac) bg_active_tab_pane_g3_cp4_srt

0x15a7,	// (0x0001ff6a) tabs_3_long_active_pane_srt_ParamLimits

0x15a7,	// (0x0001ff6a) tabs_3_long_active_pane_srt

0x15a7,	// (0x0001ff6a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x15a7,	// (0x0001ff6a) tabs_3_long_passive_pane_cp_srt

0x15a7,	// (0x0001ff6a) tabs_3_long_passive_pane_srt_ParamLimits

0x15a7,	// (0x0001ff6a) tabs_3_long_passive_pane_srt

0x671e,	// (0x000250e1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x671e,	// (0x000250e1) bg_passive_tab_pane_cp5_srt

0x70e1,	// (0x00025aa4) bg_passive_tab_pane_g1_cp5_srt

0x6f16,	// (0x000258d9) bg_passive_tab_pane_g2_cp5_srt

0x70ea,	// (0x00025aad) bg_passive_tab_pane_g3_cp5_srt

0x66fd,	// (0x000250c0) bg_active_tab_pane_cp5_srt_ParamLimits

0x66fd,	// (0x000250c0) bg_active_tab_pane_cp5_srt

0xacce,	// (0x00029691) tabs_3_long_active_pane_srt_t1_ParamLimits

0xacce,	// (0x00029691) tabs_3_long_active_pane_srt_t1

0x70e1,	// (0x00025aa4) bg_active_tab_pane_g1_cp5_srt

0x6f16,	// (0x000258d9) bg_active_tab_pane_g2_cp5_srt

0x70ea,	// (0x00025aad) bg_active_tab_pane_g3_cp5_srt

0xacc0,	// (0x00029683) navi_text_pane_srt_t1

0xacb8,	// (0x0002967b) navi_icon_pane_srt_g1

0x92e2,	// (0x00027ca5) midp_editing_number_pane_srt

0x9119,	// (0x00027adc) midp_ticker_pane_srt

0x92ea,	// (0x00027cad) midp_ticker_pane_srt_g1

0x92f2,	// (0x00027cb5) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0002e110) midp_ticker_pane_srt_g

0x92fa,	// (0x00027cbd) midp_ticker_pane_srt_t1

0xaca9,	// (0x0002966c) midp_editing_number_pane_t1_copy1

0x9121,	// (0x00027ae4) listscroll_midp_pane

0x9121,	// (0x00027ae4) midp_form_pane

0x9190,	// (0x00027b53) midp_info_popup_window_ParamLimits

0x9190,	// (0x00027b53) midp_info_popup_window

0x327f,	// (0x00021c42) bg_popup_sub_pane_cp50_ParamLimits

0x327f,	// (0x00021c42) bg_popup_sub_pane_cp50

0x9da0,	// (0x00028763) listscroll_midp_info_pane_ParamLimits

0x9da0,	// (0x00028763) listscroll_midp_info_pane

0x9d80,	// (0x00028743) listscroll_form_midp_pane_ParamLimits

0x9d80,	// (0x00028743) listscroll_form_midp_pane

0x9d8c,	// (0x0002874f) scroll_bar_cp050

0x9d60,	// (0x00028723) list_midp_pane

0xbad4,	// (0x0002a497) signal_pane_g2_cp

0x9c9a,	// (0x0002865d) listscroll_midp_info_pane_t1_ParamLimits

0x9c9a,	// (0x0002865d) listscroll_midp_info_pane_t1

0x9cb2,	// (0x00028675) listscroll_midp_info_pane_t2_ParamLimits

0x9cb2,	// (0x00028675) listscroll_midp_info_pane_t2

0x9cf0,	// (0x000286b3) listscroll_midp_info_pane_t3_ParamLimits

0x9cf0,	// (0x000286b3) listscroll_midp_info_pane_t3

0x9d2a,	// (0x000286ed) listscroll_midp_info_pane_t4_ParamLimits

0x9d2a,	// (0x000286ed) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0002e1c8) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0002e1c8) listscroll_midp_info_pane_t

0x32d4,	// (0x00021c97) scroll_pane_cp21

0x9c34,	// (0x000285f7) form_midp_field_choice_group_pane

0x9c3d,	// (0x00028600) form_midp_field_text_pane

0x9c80,	// (0x00028643) form_midp_field_time_pane

0x9c88,	// (0x0002864b) form_midp_gauge_slider_pane

0x9c91,	// (0x00028654) form_midp_gauge_wait_pane

0x1559,	// (0x0001ff1c) form_midp_image_pane

0x56c6,	// (0x00024089) list_single_midp_pane_ParamLimits

0x56c6,	// (0x00024089) list_single_midp_pane

0x9bf8,	// (0x000285bb) form_midp_field_text_pane_t1

0x99ea,	// (0x000283ad) input_focus_pane_cp050

0x9c23,	// (0x000285e6) list_midp_form_text_pane

0x9bc7,	// (0x0002858a) form_midp_field_choice_group_pane_t1

0x9bd5,	// (0x00028598) input_focus_pane_cp051

0x9be9,	// (0x000285ac) list_midp_choice_pane

0x1559,	// (0x0001ff1c) status_idle_pane

0x9bab,	// (0x0002856e) form_midp_field_time_pane_t1

0x154f,	// (0x0001ff12) wait_anim_pane_g2_copy1

0x9bb9,	// (0x0002857c) form_midp_field_time_pane_t2

0x0001,

0x9240,	// (0x00027c03) aid_navinavi_width_2_pane

0xf800,	// (0x0002e1c3) form_midp_field_time_pane_t

0x1559,	// (0x0001ff1c) input_focus_pane_cp052

0x1559,	// (0x0001ff1c) bg_input_focus_pane_cp040

0x9b6b,	// (0x0002852e) form_midp_gauge_slider_pane_t1

0x9b79,	// (0x0002853c) form_midp_gauge_slider_pane_t2

0x9b87,	// (0x0002854a) form_midp_gauge_slider_pane_t3

0x9b95,	// (0x00028558) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0002e1ba) form_midp_gauge_slider_pane_t

0x9ba3,	// (0x00028566) form_midp_slider_pane

0x15b5,	// (0x0001ff78) bg_input_focus_pane_cp041_ParamLimits

0x15b5,	// (0x0001ff78) bg_input_focus_pane_cp041

0x9b38,	// (0x000284fb) form_midp_gauge_wait_pane_t1_ParamLimits

0x9b38,	// (0x000284fb) form_midp_gauge_wait_pane_t1

0x9b4a,	// (0x0002850d) form_midp_gauge_wait_pane_t2_ParamLimits

0x9b4a,	// (0x0002850d) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0002e1b5) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0002e1b5) form_midp_gauge_wait_pane_t

0x9b5c,	// (0x0002851f) form_midp_wait_pane_ParamLimits

0x9b5c,	// (0x0002851f) form_midp_wait_pane

0x9b00,	// (0x000284c3) form_midp_image_pane_g1

0x9b09,	// (0x000284cc) form_midp_image_pane_t1

0x9b18,	// (0x000284db) form_midp_image_pane_t2

0x9b27,	// (0x000284ea) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0002e1ae) form_midp_image_pane_t

0x9af7,	// (0x000284ba) list_single_midp_pane_g1

0x56b7,	// (0x0002407a) list_single_midp_pane_t1

0x9add,	// (0x000284a0) list_midp_form_item_pane_ParamLimits

0x9add,	// (0x000284a0) list_midp_form_item_pane

0x91e8,	// (0x00027bab) list_midp_form_item_pane_t1

0x91f7,	// (0x00027bba) midp_ticker_pane_g1

0x9203,	// (0x00027bc6) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0002e0f6) midp_ticker_pane_g

0x920f,	// (0x00027bd2) midp_ticker_pane_t1

0xaf16,	// (0x000298d9) midp_editing_number_pane_t1

0xaef4,	// (0x000298b7) midp_editing_number_pane

0xaf03,	// (0x000298c6) midp_ticker_pane

0xac99,	// (0x0002965c) ai_message_heading_pane

0x1559,	// (0x0001ff1c) bg_popup_window_pane_cp14

0xaca1,	// (0x00029664) listscroll_ai_message_pane

0xac1f,	// (0x000295e2) ai_message_heading_pane_g1_ParamLimits

0xac1f,	// (0x000295e2) ai_message_heading_pane_g1

0xac2b,	// (0x000295ee) ai_message_heading_pane_g2_ParamLimits

0xac2b,	// (0x000295ee) ai_message_heading_pane_g2

0xac39,	// (0x000295fc) ai_message_heading_pane_g3_ParamLimits

0xac39,	// (0x000295fc) ai_message_heading_pane_g3

0xac45,	// (0x00029608) ai_message_heading_pane_g4_ParamLimits

0xac45,	// (0x00029608) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0002e2ef) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0002e2ef) ai_message_heading_pane_g

0xac51,	// (0x00029614) ai_message_heading_pane_t1_ParamLimits

0xac51,	// (0x00029614) ai_message_heading_pane_t1

0xac6b,	// (0x0002962e) ai_message_heading_pane_t2_ParamLimits

0xac6b,	// (0x0002962e) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0002e2f8) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0002e2f8) ai_message_heading_pane_t

0xac7f,	// (0x00029642) bg_popup_heading_pane_cp1_ParamLimits

0xac7f,	// (0x00029642) bg_popup_heading_pane_cp1

0xac0d,	// (0x000295d0) list_ai_message_pane_ParamLimits

0xac0d,	// (0x000295d0) list_ai_message_pane

0x32d4,	// (0x00021c97) scroll_pane_cp10

0xaba9,	// (0x0002956c) list_ai_message_pane_g1

0xabb1,	// (0x00029574) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0002e2cc) list_ai_message_pane_g

0xabb9,	// (0x0002957c) list_ai_message_pane_t1_ParamLimits

0xabb9,	// (0x0002957c) list_ai_message_pane_t1

0xabce,	// (0x00029591) list_ai_message_pane_t2_ParamLimits

0xabce,	// (0x00029591) list_ai_message_pane_t2

0xabe3,	// (0x000295a6) list_ai_message_pane_t3_ParamLimits

0xabe3,	// (0x000295a6) list_ai_message_pane_t3

0xabf8,	// (0x000295bb) list_ai_message_pane_t4_ParamLimits

0xabf8,	// (0x000295bb) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0002e2d1) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0002e2d1) list_ai_message_pane_t

0xab92,	// (0x00029555) cell_ai_soft_ind_pane_ParamLimits

0xab92,	// (0x00029555) cell_ai_soft_ind_pane

0x9221,	// (0x00027be4) cell_ai_soft_ind_pane_g1_ParamLimits

0x9221,	// (0x00027be4) cell_ai_soft_ind_pane_g1

0x1559,	// (0x0001ff1c) grid_highlight_cp1

0x922e,	// (0x00027bf1) text_secondary_cp56_ParamLimits

0x922e,	// (0x00027bf1) text_secondary_cp56

0xab67,	// (0x0002952a) example_general_pane_ParamLimits

0xab67,	// (0x0002952a) example_general_pane

0xab73,	// (0x00029536) example_parent_pane_g1_ParamLimits

0xab73,	// (0x00029536) example_parent_pane_g1

0xab7f,	// (0x00029542) example_parent_pane_t1_ParamLimits

0xab7f,	// (0x00029542) example_parent_pane_t1

0x7948,	// (0x0002630b) popup_preview_text_window_ParamLimits

0x7948,	// (0x0002630b) popup_preview_text_window

0x7349,	// (0x00025d0c) list_single_pane_cp2_g4

0x17d0,	// (0x00020193) bg_popup_preview_window_pane_ParamLimits

0x17d0,	// (0x00020193) bg_popup_preview_window_pane

0xa8b0,	// (0x00029273) popup_preview_text_window_t1_ParamLimits

0xa8b0,	// (0x00029273) popup_preview_text_window_t1

0xa8ce,	// (0x00029291) popup_preview_text_window_t2_ParamLimits

0xa8ce,	// (0x00029291) popup_preview_text_window_t2

0xa917,	// (0x000292da) popup_preview_text_window_t3_ParamLimits

0xa917,	// (0x000292da) popup_preview_text_window_t3

0xa95c,	// (0x0002931f) popup_preview_text_window_t4_ParamLimits

0xa95c,	// (0x0002931f) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0002e2a0) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0002e2a0) popup_preview_text_window_t

0xa9da,	// (0x0002939d) scroll_pane_cp11

0x9976,	// (0x00028339) bg_popup_preview_window_pane_g1

0xa864,	// (0x00029227) bg_popup_preview_window_pane_g2

0xa86e,	// (0x00029231) bg_popup_preview_window_pane_g3

0xa878,	// (0x0002923b) bg_popup_preview_window_pane_g4

0xa882,	// (0x00029245) bg_popup_preview_window_pane_g5

0xa88c,	// (0x0002924f) bg_popup_preview_window_pane_g6

0xa894,	// (0x00029257) bg_popup_preview_window_pane_g7

0xa89c,	// (0x0002925f) bg_popup_preview_window_pane_g8

0x5f19,	// (0x000248dc) aid_popup_width_pane

0x7924,	// (0x000262e7) popup_midp_note_alarm_window_ParamLimits

0x7924,	// (0x000262e7) popup_midp_note_alarm_window

0x30fa,	// (0x00021abd) data_form_pane_ParamLimits

0x52f8,	// (0x00023cbb) form_field_data_pane_g1

0x5302,	// (0x00023cc5) form_field_data_pane_t1_ParamLimits

0x3106,	// (0x00021ac9) input_focus_pane_ParamLimits

0x531c,	// (0x00023cdf) data_form_wide_pane_ParamLimits

0x532d,	// (0x00023cf0) form_field_data_wide_pane_g1

0x5339,	// (0x00023cfc) form_field_data_wide_pane_t1_ParamLimits

0x198c,	// (0x0002034f) input_focus_pane_cp6_ParamLimits

0x66d5,	// (0x00025098) input_popup_find_pane_g1_ParamLimits

0x66d5,	// (0x00025098) input_popup_find_pane_g1

0x683b,	// (0x000251fe) aid_navi_side_left_pane

0x6850,	// (0x00025213) aid_navi_side_right_pane

0xa279,	// (0x00028c3c) bg_popup_window_pane_cp30_ParamLimits

0xa279,	// (0x00028c3c) bg_popup_window_pane_cp30

0xa2f3,	// (0x00028cb6) popup_midp_note_alarm_window_g1_ParamLimits

0xa2f3,	// (0x00028cb6) popup_midp_note_alarm_window_g1

0xa323,	// (0x00028ce6) popup_midp_note_alarm_window_t1_ParamLimits

0xa323,	// (0x00028ce6) popup_midp_note_alarm_window_t1

0xa3c4,	// (0x00028d87) popup_midp_note_alarm_window_t2_ParamLimits

0xa3c4,	// (0x00028d87) popup_midp_note_alarm_window_t2

0xa472,	// (0x00028e35) popup_midp_note_alarm_window_t3_ParamLimits

0xa472,	// (0x00028e35) popup_midp_note_alarm_window_t3

0xa4a4,	// (0x00028e67) popup_midp_note_alarm_window_t4_ParamLimits

0xa4a4,	// (0x00028e67) popup_midp_note_alarm_window_t4

0xa4ca,	// (0x00028e8d) popup_midp_note_alarm_window_t5_ParamLimits

0xa4ca,	// (0x00028e8d) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0002e23d) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0002e23d) popup_midp_note_alarm_window_t

0xa576,	// (0x00028f39) wait_bar_pane_cp1_ParamLimits

0xa576,	// (0x00028f39) wait_bar_pane_cp1

0x1559,	// (0x0001ff1c) wait_anim_pane_copy1

0x1559,	// (0x0001ff1c) wait_border_pane_copy1

0x9f5e,	// (0x00028921) wait_border_pane_g1_copy1

0x5353,	// (0x00023d16) form_field_popup_pane_g1

0x535b,	// (0x00023d1e) form_field_popup_pane_t1_ParamLimits

0x3106,	// (0x00021ac9) input_focus_pane_cp7_ParamLimits

0x316b,	// (0x00021b2e) list_form_pane_ParamLimits

0x5375,	// (0x00023d38) form_field_popup_wide_pane_g1

0x537d,	// (0x00023d40) form_field_popup_wide_pane_t1_ParamLimits

0x3106,	// (0x00021ac9) input_focus_pane_cp8_ParamLimits

0x3191,	// (0x00021b54) list_form_wide_pane_ParamLimits

0xb0bb,	// (0x00029a7e) aid_size_cell_graphic_pane

0x5409,	// (0x00023dcc) data_form_pane_t1_ParamLimits

0x570e,	// (0x000240d1) data_form_wide_pane_t1_ParamLimits

0x952f,	// (0x00027ef2) bg_status_flat_pane

0x633e,	// (0x00024d01) title_pane_t1_ParamLimits

0x156f,	// (0x0001ff32) title_pane_t2_ParamLimits

0x1595,	// (0x0001ff58) title_pane_t3_ParamLimits

0xf532,	// (0x0002def5) title_pane_t_ParamLimits

0x6b60,	// (0x00025523) level_1_signal_ParamLimits

0x6b6d,	// (0x00025530) level_2_signal_ParamLimits

0x6b7a,	// (0x0002553d) level_3_signal_ParamLimits

0x6b87,	// (0x0002554a) level_4_signal_ParamLimits

0x6b94,	// (0x00025557) level_5_signal_ParamLimits

0x6ba1,	// (0x00025564) level_6_signal_ParamLimits

0x6bae,	// (0x00025571) level_7_signal_ParamLimits

0x6b60,	// (0x00025523) level_1_battery_ParamLimits

0x6b6d,	// (0x00025530) level_2_battery_ParamLimits

0x6b7a,	// (0x0002553d) level_3_battery_ParamLimits

0x6b87,	// (0x0002554a) level_4_battery_ParamLimits

0x6b94,	// (0x00025557) level_5_battery_ParamLimits

0x6ba1,	// (0x00025564) level_6_battery_ParamLimits

0x6bae,	// (0x00025571) level_7_battery_ParamLimits

0xa17e,	// (0x00028b41) bg_status_flat_pane_g1

0xa186,	// (0x00028b49) bg_status_flat_pane_g2

0xa18e,	// (0x00028b51) bg_status_flat_pane_g3

0xa196,	// (0x00028b59) bg_status_flat_pane_g4

0xa19e,	// (0x00028b61) bg_status_flat_pane_g5

0xa1a6,	// (0x00028b69) bg_status_flat_pane_g6

0xa1ae,	// (0x00028b71) bg_status_flat_pane_g7

0x63ae,	// (0x00024d71) tabs_3_active_pane_t1_ParamLimits

0x63ae,	// (0x00024d71) tabs_3_passive_pane_t1_ParamLimits

0x63c8,	// (0x00024d8b) tabs_4_active_pane_t1_ParamLimits

0x63c8,	// (0x00024d8b) tabs_4_1_passive_pane_t1_ParamLimits

0x66eb,	// (0x000250ae) tabs_2_active_pane_t1_ParamLimits

0x66eb,	// (0x000250ae) tabs_2_passive_pane_t1_ParamLimits

0x66fd,	// (0x000250c0) bg_active_tab_pane_cp4_ParamLimits

0x670b,	// (0x000250ce) tabs_2_long_active_pane_t1_ParamLimits

0x671e,	// (0x000250e1) bg_passive_tab_pane_cp4_ParamLimits

0x7c2c,	// (0x000265ef) list_single_midp_graphic_pane_t1_ParamLimits

0x66fd,	// (0x000250c0) bg_active_tab_pane_cp5_ParamLimits

0x672a,	// (0x000250ed) tabs_3_long_active_pane_t1_ParamLimits

0x671e,	// (0x000250e1) bg_passive_tab_pane_cp5_ParamLimits

0x7c2c,	// (0x000265ef) list_single_midp_graphic_pane_t1

0x952f,	// (0x00027ef2) bg_status_flat_pane_ParamLimits

0x95fa,	// (0x00027fbd) indicator_pane_cp2_ParamLimits

0x95fa,	// (0x00027fbd) indicator_pane_cp2

0x973d,	// (0x00028100) navi_pane_srt_ParamLimits

0x973d,	// (0x00028100) navi_pane_srt

0x9761,	// (0x00028124) popup_clock_digital_analogue_window_cp1

0x1613,	// (0x0001ffd6) indicator_pane_t1

0x9119,	// (0x00027adc) copy_highlight_pane

0x9119,	// (0x00027adc) cursor_graphics_pane

0x9119,	// (0x00027adc) graphic_within_text_pane

0x9119,	// (0x00027adc) link_highlight_pane

0xa99d,	// (0x00029360) popup_preview_text_window_t5_ParamLimits

0xa99d,	// (0x00029360) popup_preview_text_window_t5

0x924a,	// (0x00027c0d) cursor_digital_pane

0x924a,	// (0x00027c0d) cursor_primary_pane

0x925b,	// (0x00027c1e) cursor_primary_small_pane

0x9263,	// (0x00027c26) cursor_secondary_pane

0x926b,	// (0x00027c2e) cursor_title_pane

0x924a,	// (0x00027c0d) link_highlight_digital_pane

0x9252,	// (0x00027c15) link_highlight_primary_pane

0x925b,	// (0x00027c1e) link_highlight_primary_small_pane

0x9263,	// (0x00027c26) link_highlight_secondary_pane

0x926b,	// (0x00027c2e) link_highlight_title_pane

0x924a,	// (0x00027c0d) copy_highlight_digital_pane

0x924a,	// (0x00027c0d) copy_highlight_primary_pane

0x925b,	// (0x00027c1e) copy_highlight_primary_small_pane

0x9263,	// (0x00027c26) copy_highlight_secondary_pane

0x926b,	// (0x00027c2e) copy_highlight_title_pane

0x9263,	// (0x00027c26) graphic_text_digital_pane

0xa21c,	// (0x00028bdf) graphic_text_primary_pane

0xa225,	// (0x00028be8) graphic_text_primary_small_pane

0x925b,	// (0x00027c1e) graphic_text_secondary_pane

0x924a,	// (0x00027c0d) graphic_text_title_pane

0x9273,	// (0x00027c36) cursor_primary_pane_g1

0xa20e,	// (0x00028bd1) cursor_text_primary_t1

0xa1f6,	// (0x00028bb9) cursor_primary_small_pane_g1

0xa200,	// (0x00028bc3) cursor_text_primary_small_t1

0xa1de,	// (0x00028ba1) cursor_primary_small_pane_g1_copy1

0xa1e8,	// (0x00028bab) cursor_text_primary_small_t1_copy1

0xa1c6,	// (0x00028b89) cursor_text_title_t1

0xa1d4,	// (0x00028b97) cursor_title_pane_g1

0x9273,	// (0x00027c36) cursor_digital_pane_g1

0x927d,	// (0x00027c40) cursor_text_digital_t1

0x928b,	// (0x00027c4e) link_highlight_primary_pane_g1

0xa16f,	// (0x00028b32) link_highlight_primary_pane_t1

0x928b,	// (0x00027c4e) link_highlight_primary_small_pane_g1

0x9293,	// (0x00027c56) link_highlight_primary_small_pane_t1

0x92a2,	// (0x00027c65) link_highlight_secondary_pane_g1

0x92aa,	// (0x00027c6d) link_highlight_secondary_pane_t1

0xa0e3,	// (0x00028aa6) link_highlight_title_pane_g1

0xa0eb,	// (0x00028aae) link_highlight_title_pane_t1

0xa0cc,	// (0x00028a8f) link_highlight_digital_pane_g1

0xa0d4,	// (0x00028a97) link_highlight_digital_pane_t1

0x9f94,	// (0x00028957) copy_highlight_primary_pane_g1

0x9fab,	// (0x0002896e) copy_highlight_primary_pane_t1

0x9f94,	// (0x00028957) copy_highlight_primary_small_pane_g1

0x9f9c,	// (0x0002895f) copy_highlight_primary_small_pane_t1

0x92b9,	// (0x00027c7c) copy_highlight_secondary_pane_g1

0x92c1,	// (0x00027c84) copy_highlight_secondary_pane_t1

0x9f7d,	// (0x00028940) copy_highlight_title_pane_g1

0x9f85,	// (0x00028948) copy_highlight_title_pane_t1

0x9f94,	// (0x00028957) copy_highlight_digital_pane_g1

0xb28d,	// (0x00029c50) copy_highlight_digital_pane_t1

0xb1e1,	// (0x00029ba4) graphic_text_primary_pane_g1

0xb271,	// (0x00029c34) graphic_text_primary_pane_t1

0xb27f,	// (0x00029c42) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0002e36c) graphic_text_primary_pane_t

0xb24d,	// (0x00029c10) graphic_text_primary_small_pane_g1

0xb255,	// (0x00029c18) graphic_text_primary_small_pane_t1

0xb263,	// (0x00029c26) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0002e367) graphic_text_primary_small_pane_t

0xb229,	// (0x00029bec) graphic_text_secondary_pane_g1

0xb231,	// (0x00029bf4) graphic_text_secondary_pane_t1

0xb23f,	// (0x00029c02) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0002e362) graphic_text_secondary_pane_t

0xb205,	// (0x00029bc8) graphic_text_title_pane_g1

0xb20d,	// (0x00029bd0) graphic_text_title_pane_t1

0xb21b,	// (0x00029bde) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0002e35d) graphic_text_title_pane_t

0xb1e1,	// (0x00029ba4) graphic_text_digital_pane_g1

0xb1e9,	// (0x00029bac) graphic_text_digital_pane_t1

0xb1f7,	// (0x00029bba) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0002e358) graphic_text_digital_pane_t

0x15b5,	// (0x0001ff78) navi_icon_pane_srt_ParamLimits

0x15b5,	// (0x0001ff78) navi_icon_pane_srt

0x1559,	// (0x0001ff1c) navi_midp_pane_srt

0x1559,	// (0x0001ff1c) navi_navi_pane_srt

0x15b5,	// (0x0001ff78) navi_text_pane_srt_ParamLimits

0x15b5,	// (0x0001ff78) navi_text_pane_srt

0xb1ac,	// (0x00029b6f) navi_navi_icon_text_pane_srt

0xb1b4,	// (0x00029b77) navi_navi_pane_srt_g1_ParamLimits

0xb1b4,	// (0x00029b77) navi_navi_pane_srt_g1

0xb1c6,	// (0x00029b89) navi_navi_pane_srt_g2_ParamLimits

0xb1c6,	// (0x00029b89) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0002e353) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0002e353) navi_navi_pane_srt_g

0xb1d8,	// (0x00029b9b) navi_navi_tabs_pane_srt

0xb1ac,	// (0x00029b6f) navi_navi_text_pane_srt

0xb1ac,	// (0x00029b6f) navi_navi_volume_pane_srt

0xb19d,	// (0x00029b60) navi_navi_text_pane_srt_t1

0x7fc8,	// (0x0002698b) navi_navi_volume_pane_srt_g1

0x7fd0,	// (0x00026993) volume_small_pane_srt_ParamLimits

0x7fd0,	// (0x00026993) volume_small_pane_srt

0x7397,	// (0x00025d5a) volume_small_pane_srt_g1_ParamLimits

0x7397,	// (0x00025d5a) volume_small_pane_srt_g1

0x73a7,	// (0x00025d6a) volume_small_pane_srt_g2_ParamLimits

0x73a7,	// (0x00025d6a) volume_small_pane_srt_g2

0x73b8,	// (0x00025d7b) volume_small_pane_srt_g3_ParamLimits

0x73b8,	// (0x00025d7b) volume_small_pane_srt_g3

0x73c9,	// (0x00025d8c) volume_small_pane_srt_g4_ParamLimits

0x73c9,	// (0x00025d8c) volume_small_pane_srt_g4

0x73da,	// (0x00025d9d) volume_small_pane_srt_g5_ParamLimits

0x73da,	// (0x00025d9d) volume_small_pane_srt_g5

0x73eb,	// (0x00025dae) volume_small_pane_srt_g6_ParamLimits

0x73eb,	// (0x00025dae) volume_small_pane_srt_g6

0x73fc,	// (0x00025dbf) volume_small_pane_srt_g7_ParamLimits

0x73fc,	// (0x00025dbf) volume_small_pane_srt_g7

0x740d,	// (0x00025dd0) volume_small_pane_srt_g8_ParamLimits

0x740d,	// (0x00025dd0) volume_small_pane_srt_g8

0x741e,	// (0x00025de1) volume_small_pane_srt_g9_ParamLimits

0x741e,	// (0x00025de1) volume_small_pane_srt_g9

0x742f,	// (0x00025df2) volume_small_pane_srt_g10_ParamLimits

0x742f,	// (0x00025df2) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0002e0fb) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0002e0fb) volume_small_pane_srt_g

0x1885,	// (0x00020248) query_popup_data_pane_cp2

0xb183,	// (0x00029b46) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb183,	// (0x00029b46) navi_navi_icon_text_pane_srt_t1

0xa21c,	// (0x00028bdf) navi_tabs_2_long_pane_srt

0xa21c,	// (0x00028bdf) navi_tabs_2_pane_srt

0xa21c,	// (0x00028bdf) navi_tabs_3_long_pane_srt

0xa21c,	// (0x00028bdf) navi_tabs_3_pane_srt

0xa21c,	// (0x00028bdf) navi_tabs_4_pane_srt

0x7fa8,	// (0x0002696b) tabs_2_active_pane_srt_ParamLimits

0x7fa8,	// (0x0002696b) tabs_2_active_pane_srt

0x7fb8,	// (0x0002697b) tabs_2_passive_pane_srt_ParamLimits

0x7fb8,	// (0x0002697b) tabs_2_passive_pane_srt

0x9440,	// (0x00027e03) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9440,	// (0x00027e03) bg_passive_tab_pane_cp1_srt

0xb14f,	// (0x00029b12) bg_passive_tab_pane_g1_cp1_srt

0x6f16,	// (0x000258d9) bg_passive_tab_pane_g2_cp1_srt

0xb158,	// (0x00029b1b) bg_passive_tab_pane_g3_cp1_srt

0x15b5,	// (0x0001ff78) bg_active_tab_pane_cp1_srt_ParamLimits

0x15b5,	// (0x0001ff78) bg_active_tab_pane_cp1_srt

0xb161,	// (0x00029b24) tabs_2_active_pane_srt_g1

0xb169,	// (0x00029b2c) tabs_2_active_pane_srt_t1_ParamLimits

0xb169,	// (0x00029b2c) tabs_2_active_pane_srt_t1

0xb14f,	// (0x00029b12) bg_active_tab_pane_g1_cp1_srt

0x6f16,	// (0x000258d9) bg_active_tab_pane_g2_cp1_srt

0xb158,	// (0x00029b1b) bg_active_tab_pane_g3_cp1_srt

0x7f75,	// (0x00026938) tabs_3_active_pane_srt_ParamLimits

0x7f75,	// (0x00026938) tabs_3_active_pane_srt

0x7f86,	// (0x00026949) tabs_3_passive_pane_cp_srt_ParamLimits

0x7f86,	// (0x00026949) tabs_3_passive_pane_cp_srt

0x7f97,	// (0x0002695a) tabs_3_passive_pane_srt_ParamLimits

0x7f97,	// (0x0002695a) tabs_3_passive_pane_srt

0x9440,	// (0x00027e03) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9440,	// (0x00027e03) bg_passive_tab_pane_cp2_srt

0x92d0,	// (0x00027c93) bg_passive_tab_pane_g1_cp2_srt

0x6f16,	// (0x000258d9) bg_passive_tab_pane_g2_cp2_srt

0x92d9,	// (0x00027c9c) bg_passive_tab_pane_g3_cp2_srt

0x15b5,	// (0x0001ff78) bg_active_tab_pane_cp2_srt_ParamLimits

0x15b5,	// (0x0001ff78) bg_active_tab_pane_cp2_srt

0xb135,	// (0x00029af8) tabs_3_active_pane_srt_g1

0xb13d,	// (0x00029b00) tabs_3_active_pane_srt_t1_ParamLimits

0xb13d,	// (0x00029b00) tabs_3_active_pane_srt_t1

0x92d0,	// (0x00027c93) bg_active_tab_pane_g1_cp2_srt

0x6f16,	// (0x000258d9) bg_active_tab_pane_g2_cp2_srt

0x92d9,	// (0x00027c9c) bg_active_tab_pane_g3_cp2_srt

0x7f2d,	// (0x000268f0) tabs_4_active_pane_srt_ParamLimits

0x7f2d,	// (0x000268f0) tabs_4_active_pane_srt

0x7f3f,	// (0x00026902) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7f3f,	// (0x00026902) tabs_4_passive_pane_cp2_srt

0x7581,	// (0x00025f44) aid_size_cell_toolbar

0x671e,	// (0x000250e1) main_idle_act_pane_ParamLimits

0x774a,	// (0x0002610d) popup_large_graphic_colour_window_ParamLimits

0x7af1,	// (0x000264b4) popup_toolbar_window_ParamLimits

0x7af1,	// (0x000264b4) popup_toolbar_window

0x5752,	// (0x00024115) list_single_graphic_2heading_pane_ParamLimits

0x5752,	// (0x00024115) list_single_graphic_2heading_pane

0x3641,	// (0x00022004) aid_size_cell_apps_grid_lsc_pane

0x3653,	// (0x00022016) aid_size_cell_apps_grid_prt_pane

0x9440,	// (0x00027e03) bg_wml_button_pane_cp1_ParamLimits

0x9440,	// (0x00027e03) bg_wml_button_pane_cp1

0x9bf8,	// (0x000285bb) form_midp_field_text_pane_t1_ParamLimits

0x99ea,	// (0x000283ad) input_focus_pane_cp050_ParamLimits

0x9c23,	// (0x000285e6) list_midp_form_text_pane_ParamLimits

0x9bd5,	// (0x00028598) input_focus_pane_cp051_ParamLimits

0x9be9,	// (0x000285ac) list_midp_choice_pane_ParamLimits

0x9aa3,	// (0x00028466) list_single_2graphic_pane_cp3_ParamLimits

0x9aa3,	// (0x00028466) list_single_2graphic_pane_cp3

0x9ab9,	// (0x0002847c) list_single_midp_graphic_pane_ParamLimits

0x9ab9,	// (0x0002847c) list_single_midp_graphic_pane

0x5561,	// (0x00023f24) list_single_graphic_2heading_pane_g1_ParamLimits

0x5561,	// (0x00023f24) list_single_graphic_2heading_pane_g1

0x556d,	// (0x00023f30) list_single_graphic_2heading_pane_g4_ParamLimits

0x556d,	// (0x00023f30) list_single_graphic_2heading_pane_g4

0x5579,	// (0x00023f3c) list_single_graphic_2heading_pane_g5_ParamLimits

0x5579,	// (0x00023f3c) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0002e14e) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0002e14e) list_single_graphic_2heading_pane_g

0x5585,	// (0x00023f48) list_single_graphic_2heading_pane_t1_ParamLimits

0x5585,	// (0x00023f48) list_single_graphic_2heading_pane_t1

0x5599,	// (0x00023f5c) list_single_graphic_2heading_pane_t2_ParamLimits

0x5599,	// (0x00023f5c) list_single_graphic_2heading_pane_t2

0x55b5,	// (0x00023f78) list_single_graphic_2heading_pane_t3_ParamLimits

0x55b5,	// (0x00023f78) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0002e155) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0002e155) list_single_graphic_2heading_pane_t

0x98b4,	// (0x00028277) bg_popup_sub_pane_cp2

0x98de,	// (0x000282a1) grid_toobar_pane

0x7bb0,	// (0x00026573) cell_toolbar_pane_ParamLimits

0x7bb0,	// (0x00026573) cell_toolbar_pane

0x991a,	// (0x000282dd) cell_toolbar_pane_g1_ParamLimits

0x991a,	// (0x000282dd) cell_toolbar_pane_g1

0x992e,	// (0x000282f1) cell_toolbar_pane_g2_ParamLimits

0x992e,	// (0x000282f1) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0002e163) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0002e163) cell_toolbar_pane_g

0x9950,	// (0x00028313) grid_highlight_pane_cp2_ParamLimits

0x9950,	// (0x00028313) grid_highlight_pane_cp2

0x996a,	// (0x0002832d) toolbar_button_pane

0x9976,	// (0x00028339) toolbar_button_pane_g1

0x997e,	// (0x00028341) toolbar_button_pane_g2

0x9986,	// (0x00028349) toolbar_button_pane_g3

0x998e,	// (0x00028351) toolbar_button_pane_g4

0x9996,	// (0x00028359) toolbar_button_pane_g5

0x999e,	// (0x00028361) toolbar_button_pane_g6

0x99a6,	// (0x00028369) toolbar_button_pane_g7

0x99ae,	// (0x00028371) toolbar_button_pane_g8

0x99b6,	// (0x00028379) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0002e168) toolbar_button_pane_g

0x7be8,	// (0x000265ab) list_single_2graphic_pane_g1_cp3_ParamLimits

0x7be8,	// (0x000265ab) list_single_2graphic_pane_g1_cp3

0x7bf4,	// (0x000265b7) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7bf4,	// (0x000265b7) list_single_2graphic_pane_g2_cp3

0x7239,	// (0x00025bfc) list_single_2graphic_pane_g3_cp3

0x7c05,	// (0x000265c8) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7c05,	// (0x000265c8) list_single_2graphic_pane_g4_cp3

0x7c11,	// (0x000265d4) list_single_2graphic_pane_t1_cp3_ParamLimits

0x7c11,	// (0x000265d4) list_single_2graphic_pane_t1_cp3

0x722d,	// (0x00025bf0) list_single_midp_graphic_pane_g2_ParamLimits

0x722d,	// (0x00025bf0) list_single_midp_graphic_pane_g2

0x7589,	// (0x00025f4c) aid_zoom_text_primary

0x5535,	// (0x00023ef8) aid_zoom_text_secondary

0x938a,	// (0x00027d4d) status_small_pane_g7_ParamLimits

0x938a,	// (0x00027d4d) status_small_pane_g7

0x93ad,	// (0x00027d70) status_small_pane_t1_ParamLimits

0x6319,	// (0x00024cdc) title_pane_g2

0x0003,

0xf529,	// (0x0002deec) title_pane_g

0x6582,	// (0x00024f45) aid_size_cell_colour_1_pane_ParamLimits

0x6582,	// (0x00024f45) aid_size_cell_colour_1_pane

0x6596,	// (0x00024f59) aid_size_cell_colour_2_pane_ParamLimits

0x6596,	// (0x00024f59) aid_size_cell_colour_2_pane

0x65aa,	// (0x00024f6d) aid_size_cell_colour_3_pane_ParamLimits

0x65aa,	// (0x00024f6d) aid_size_cell_colour_3_pane

0x65be,	// (0x00024f81) aid_size_cell_colour_4_pane_ParamLimits

0x65be,	// (0x00024f81) aid_size_cell_colour_4_pane

0x6778,	// (0x0002513b) title_pane_stacon_g1_ParamLimits

0x6778,	// (0x0002513b) title_pane_stacon_g1

0xa002,	// (0x000289c5) popup_note_wait_window_g3_ParamLimits

0xa002,	// (0x000289c5) popup_note_wait_window_g3

0xa079,	// (0x00028a3c) popup_note_wait_window_t5_ParamLimits

0xa079,	// (0x00028a3c) popup_note_wait_window_t5

0x1559,	// (0x0001ff1c) main_feb_china_hwr_fs_writing_pane

0x760f,	// (0x00025fd2) popup_feb_china_hwr_fs_window_ParamLimits

0x760f,	// (0x00025fd2) popup_feb_china_hwr_fs_window

0x7c42,	// (0x00026605) aid_size_cell_hwr_fs_ParamLimits

0x7c42,	// (0x00026605) aid_size_cell_hwr_fs

0x99ea,	// (0x000283ad) bg_popup_sub_pane_cp3_ParamLimits

0x99ea,	// (0x000283ad) bg_popup_sub_pane_cp3

0x7c57,	// (0x0002661a) grid_hwr_fs_pane_ParamLimits

0x7c57,	// (0x0002661a) grid_hwr_fs_pane

0x7c6f,	// (0x00026632) linegrid_hwr_fs_pane_ParamLimits

0x7c6f,	// (0x00026632) linegrid_hwr_fs_pane

0x7c7f,	// (0x00026642) cell_hwr_fs_pane_ParamLimits

0x7c7f,	// (0x00026642) cell_hwr_fs_pane

0x99f6,	// (0x000283b9) linegrid_hwr_fs_pane_g1_ParamLimits

0x99f6,	// (0x000283b9) linegrid_hwr_fs_pane_g1

0x9a02,	// (0x000283c5) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a02,	// (0x000283c5) linegrid_hwr_fs_pane_g2

0x9a14,	// (0x000283d7) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a14,	// (0x000283d7) linegrid_hwr_fs_pane_g3

0x7ca3,	// (0x00026666) linegrid_hwr_fs_pane_g4_ParamLimits

0x7ca3,	// (0x00026666) linegrid_hwr_fs_pane_g4

0x7cc1,	// (0x00026684) linegrid_hwr_fs_pane_g5_ParamLimits

0x7cc1,	// (0x00026684) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0002e193) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0002e193) linegrid_hwr_fs_pane_g

0x9a20,	// (0x000283e3) cell_hwr_fs_pane_g1_ParamLimits

0x9a20,	// (0x000283e3) cell_hwr_fs_pane_g1

0x97ef,	// (0x000281b2) cell_hwr_fs_pane_g2_ParamLimits

0x97ef,	// (0x000281b2) cell_hwr_fs_pane_g2

0x9a36,	// (0x000283f9) cell_hwr_fs_pane_g3_ParamLimits

0x9a36,	// (0x000283f9) cell_hwr_fs_pane_g3

0x9a43,	// (0x00028406) cell_hwr_fs_pane_g4_ParamLimits

0x9a43,	// (0x00028406) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0002e19e) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0002e19e) cell_hwr_fs_pane_g

0x7cd7,	// (0x0002669a) cell_hwr_fs_pane_t1

0x1559,	// (0x0001ff1c) grid_highlight_pane_cp6

0x1559,	// (0x0001ff1c) main_idle_act2_pane

0x32bb,	// (0x00021c7e) aid_inside_area_popup_secondary

0xa6b2,	// (0x00029075) aid_inside_area_window_primary_ParamLimits

0xa6b2,	// (0x00029075) aid_inside_area_window_primary

0xb29c,	// (0x00029c5f) ai2_news_ticker_pane

0xb2a4,	// (0x00029c67) aid_size_cell_ai1_link_ParamLimits

0xb2a4,	// (0x00029c67) aid_size_cell_ai1_link

0xb2be,	// (0x00029c81) popup_ai2_data_window_ParamLimits

0xb2be,	// (0x00029c81) popup_ai2_data_window

0xb2dc,	// (0x00029c9f) popup_ai2_link_window_ParamLimits

0xb2dc,	// (0x00029c9f) popup_ai2_link_window

0x99ea,	// (0x000283ad) bg_popup_sub_pane_cp4_ParamLimits

0x99ea,	// (0x000283ad) bg_popup_sub_pane_cp4

0xb2f2,	// (0x00029cb5) grid_ai2_link_pane_ParamLimits

0xb2f2,	// (0x00029cb5) grid_ai2_link_pane

0xb309,	// (0x00029ccc) popup_ai2_link_window_g1_ParamLimits

0xb309,	// (0x00029ccc) popup_ai2_link_window_g1

0xb315,	// (0x00029cd8) popup_ai2_link_window_g2_ParamLimits

0xb315,	// (0x00029cd8) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0002e371) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0002e371) popup_ai2_link_window_g

0xb326,	// (0x00029ce9) ai2_mp_button_pane

0xb32e,	// (0x00029cf1) ai2_mp_volume_pane

0x9bd5,	// (0x00028598) bg_popup_sub_pane_cp5_ParamLimits

0x9bd5,	// (0x00028598) bg_popup_sub_pane_cp5

0xb336,	// (0x00029cf9) heading_ai2_gene_pane_ParamLimits

0xb336,	// (0x00029cf9) heading_ai2_gene_pane

0xb342,	// (0x00029d05) list_ai2_gene_pane_ParamLimits

0xb342,	// (0x00029d05) list_ai2_gene_pane

0xb38a,	// (0x00029d4d) cell_ai2_link_pane_ParamLimits

0xb38a,	// (0x00029d4d) cell_ai2_link_pane

0xb3a0,	// (0x00029d63) cell_ai2_link_pane_g1

0x1559,	// (0x0001ff1c) grid_highlight_pane_cp7

0x7fe5,	// (0x000269a8) ai2_mp_volume_pane_g1

0xb473,	// (0x00029e36) ai2_mp_volume_pane_g2

0xb3e8,	// (0x00029dab) list_ai2_gene_pane_t1

0xb47b,	// (0x00029e3e) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0002e38a) ai2_mp_volume_pane_g

0x7fed,	// (0x000269b0) volume_small_pane_cp3

0xb483,	// (0x00029e46) aid_size_cell_ai2_button

0xb48b,	// (0x00029e4e) grid_ai2_button_pane

0xb494,	// (0x00029e57) cell_ai2_button_pane_ParamLimits

0xb494,	// (0x00029e57) cell_ai2_button_pane

0x154f,	// (0x0001ff12) cell_ai2_button_pane_g1

0x1559,	// (0x0001ff1c) grid_highlight_pane_cp8

0xb433,	// (0x00029df6) ai2_gene_pane_t1_ParamLimits

0xb433,	// (0x00029df6) ai2_gene_pane_t1

0x7577,	// (0x00025f3a) aid_height_parent_landscape

0xad42,	// (0x00029705) aid_height_set_list

0xad53,	// (0x00029716) aid_size_parent

0xb0bb,	// (0x00029a7e) aid_size_cell_graphic_pane_ParamLimits

0xb352,	// (0x00029d15) popup_ai2_data_window_g1_ParamLimits

0xb352,	// (0x00029d15) popup_ai2_data_window_g1

0xb35e,	// (0x00029d21) ai2_news_ticker_pane_g1

0xb366,	// (0x00029d29) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0002e376) ai2_news_ticker_pane_g

0xb36e,	// (0x00029d31) ai2_news_ticker_pane_t1

0xb37c,	// (0x00029d3f) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0002e37b) ai2_news_ticker_pane_t

0xb3a9,	// (0x00029d6c) heading_ai2_gene_pane_g1

0xb3b1,	// (0x00029d74) heading_ai2_gene_pane_t1_ParamLimits

0xb3b1,	// (0x00029d74) heading_ai2_gene_pane_t1

0xb3c6,	// (0x00029d89) list_highlight_pane_cp6

0xb3ce,	// (0x00029d91) ai2_gene_pane_ParamLimits

0xb3ce,	// (0x00029d91) ai2_gene_pane

0xb3f6,	// (0x00029db9) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0002e380) list_ai2_gene_pane_t

0xb404,	// (0x00029dc7) list_highlight_pane_cp8_ParamLimits

0xb404,	// (0x00029dc7) list_highlight_pane_cp8

0xb415,	// (0x00029dd8) ai2_gene_pane_g1_ParamLimits

0xb415,	// (0x00029dd8) ai2_gene_pane_g1

0xb427,	// (0x00029dea) ai2_gene_pane_g2_ParamLimits

0xb427,	// (0x00029dea) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0002e385) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0002e385) ai2_gene_pane_g

0x1ba7,	// (0x0002056a) scroll_pane_cp12

0x7536,	// (0x00025ef9) control_pane_t3_ParamLimits

0x7536,	// (0x00025ef9) control_pane_t3

0x939e,	// (0x00027d61) status_small_pane_g8_ParamLimits

0x939e,	// (0x00027d61) status_small_pane_g8

0x770d,	// (0x000260d0) popup_find_window_ParamLimits

0x793a,	// (0x000262fd) popup_note_image_window_ParamLimits

0x55cd,	// (0x00023f90) list_double2_graphic_pane_vc_g1_ParamLimits

0x55cd,	// (0x00023f90) list_double2_graphic_pane_vc_g1

0x55d9,	// (0x00023f9c) list_double2_graphic_pane_vc_g2_ParamLimits

0x55d9,	// (0x00023f9c) list_double2_graphic_pane_vc_g2

0x55e5,	// (0x00023fa8) list_double2_graphic_pane_vc_g3_ParamLimits

0x55e5,	// (0x00023fa8) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0002e15c) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0002e15c) list_double2_graphic_pane_vc_g

0x55f1,	// (0x00023fb4) list_double2_graphic_pane_vc_t1_ParamLimits

0x55f1,	// (0x00023fb4) list_double2_graphic_pane_vc_t1

0x556d,	// (0x00023f30) list_single_heading_pane_vc_g1_ParamLimits

0x556d,	// (0x00023f30) list_single_heading_pane_vc_g1

0x5579,	// (0x00023f3c) list_single_heading_pane_vc_g2_ParamLimits

0x5579,	// (0x00023f3c) list_single_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002e17d) list_single_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002e17d) list_single_heading_pane_vc_g

0x5607,	// (0x00023fca) list_single_heading_pane_vc_t1_ParamLimits

0x5607,	// (0x00023fca) list_single_heading_pane_vc_t1

0x561d,	// (0x00023fe0) list_single_heading_pane_vc_t2_ParamLimits

0x561d,	// (0x00023fe0) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0002e182) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0002e182) list_single_heading_pane_vc_t

0x562f,	// (0x00023ff2) list_setting_number_pane_vc_g1_ParamLimits

0x562f,	// (0x00023ff2) list_setting_number_pane_vc_g1

0x563b,	// (0x00023ffe) list_setting_number_pane_vc_g2_ParamLimits

0x563b,	// (0x00023ffe) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002e187) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002e187) list_setting_number_pane_vc_g

0x5647,	// (0x0002400a) list_setting_number_pane_vc_t1_ParamLimits

0x5647,	// (0x0002400a) list_setting_number_pane_vc_t1

0x565b,	// (0x0002401e) list_setting_number_pane_vc_t2_ParamLimits

0x565b,	// (0x0002401e) list_setting_number_pane_vc_t2

0x5677,	// (0x0002403a) list_setting_number_pane_vc_t3_ParamLimits

0x5677,	// (0x0002403a) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0002e18c) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0002e18c) list_setting_number_pane_vc_t

0x56a5,	// (0x00024068) set_value_pane_vc_ParamLimits

0x56a5,	// (0x00024068) set_value_pane_vc

0x5752,	// (0x00024115) list_double2_graphic_pane_vc_ParamLimits

0x5752,	// (0x00024115) list_double2_graphic_pane_vc

0xaf3c,	// (0x000298ff) list_double2_large_graphic_pane_vc_ParamLimits

0xaf3c,	// (0x000298ff) list_double2_large_graphic_pane_vc

0x5752,	// (0x00024115) list_double2_pane_vc_ParamLimits

0x5752,	// (0x00024115) list_double2_pane_vc

0x5752,	// (0x00024115) list_double_graphic_heading_pane_vc_ParamLimits

0x5752,	// (0x00024115) list_double_graphic_heading_pane_vc

0x5752,	// (0x00024115) list_double_graphic_pane_vc_ParamLimits

0x5752,	// (0x00024115) list_double_graphic_pane_vc

0x5752,	// (0x00024115) list_double_heading_pane_vc_ParamLimits

0x5752,	// (0x00024115) list_double_heading_pane_vc

0xaf50,	// (0x00029913) list_double_large_graphic_pane_vc_ParamLimits

0xaf50,	// (0x00029913) list_double_large_graphic_pane_vc

0x5752,	// (0x00024115) list_double_number_pane_vc_ParamLimits

0x5752,	// (0x00024115) list_double_number_pane_vc

0x5752,	// (0x00024115) list_double_pane_vc_ParamLimits

0x5752,	// (0x00024115) list_double_pane_vc

0x5752,	// (0x00024115) list_double_time_pane_vc_ParamLimits

0x5752,	// (0x00024115) list_double_time_pane_vc

0x5752,	// (0x00024115) list_setting_number_pane_vc_ParamLimits

0x5752,	// (0x00024115) list_setting_number_pane_vc

0x5752,	// (0x00024115) list_setting_pane_vc_ParamLimits

0x5752,	// (0x00024115) list_setting_pane_vc

0x5752,	// (0x00024115) list_single_graphic_heading_pane_vc_ParamLimits

0x5752,	// (0x00024115) list_single_graphic_heading_pane_vc

0x5752,	// (0x00024115) list_single_heading_pane_vc_ParamLimits

0x5752,	// (0x00024115) list_single_heading_pane_vc

0x5769,	// (0x0002412c) list_single_number_heading_pane_vc_ParamLimits

0x5769,	// (0x0002412c) list_single_number_heading_pane_vc

0x55cd,	// (0x00023f90) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x55cd,	// (0x00023f90) list_double_graphic_heading_pane_vc_g1

0x556d,	// (0x00023f30) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x556d,	// (0x00023f30) list_double_graphic_heading_pane_vc_g2

0x5579,	// (0x00023f3c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5579,	// (0x00023f3c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0002e391) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0002e391) list_double_graphic_heading_pane_vc_g

0x57c8,	// (0x0002418b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x57c8,	// (0x0002418b) list_double_graphic_heading_pane_vc_t1

0x57de,	// (0x000241a1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x57de,	// (0x000241a1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x0002e398) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x0002e398) list_double_graphic_heading_pane_vc_t

0x562f,	// (0x00023ff2) list_setting_pane_vc_g1_ParamLimits

0x562f,	// (0x00023ff2) list_setting_pane_vc_g1

0x563b,	// (0x00023ffe) list_setting_pane_vc_g2_ParamLimits

0x563b,	// (0x00023ffe) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0002e187) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002e187) list_setting_pane_vc_g

0x57fc,	// (0x000241bf) list_setting_pane_vc_t1_ParamLimits

0x57fc,	// (0x000241bf) list_setting_pane_vc_t1

0x5818,	// (0x000241db) list_setting_pane_vc_t2_ParamLimits

0x5818,	// (0x000241db) list_setting_pane_vc_t2

0x0001,

0xfa03,	// (0x0002e3c6) list_setting_pane_vc_t_ParamLimits

0xfa03,	// (0x0002e3c6) list_setting_pane_vc_t

0x56a5,	// (0x00024068) set_value_pane_cp_vc_ParamLimits

0x56a5,	// (0x00024068) set_value_pane_cp_vc

0x556d,	// (0x00023f30) list_single_number_heading_pane_vc_g1_ParamLimits

0x556d,	// (0x00023f30) list_single_number_heading_pane_vc_g1

0x5579,	// (0x00023f3c) list_single_number_heading_pane_vc_g2_ParamLimits

0x5579,	// (0x00023f3c) list_single_number_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002e17d) list_single_number_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002e17d) list_single_number_heading_pane_vc_g

0x5834,	// (0x000241f7) list_single_number_heading_pane_vc_t1_ParamLimits

0x5834,	// (0x000241f7) list_single_number_heading_pane_vc_t1

0x584a,	// (0x0002420d) list_single_number_heading_pane_vc_t2_ParamLimits

0x584a,	// (0x0002420d) list_single_number_heading_pane_vc_t2

0x5860,	// (0x00024223) list_single_number_heading_pane_vc_t3_ParamLimits

0x5860,	// (0x00024223) list_single_number_heading_pane_vc_t3

0x0002,

0xfa08,	// (0x0002e3cb) list_single_number_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0002e3cb) list_single_number_heading_pane_vc_t

0x55cd,	// (0x00023f90) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x55cd,	// (0x00023f90) list_single_graphic_heading_pane_vc_g1

0x556d,	// (0x00023f30) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x556d,	// (0x00023f30) list_single_graphic_heading_pane_vc_g4

0x5579,	// (0x00023f3c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5579,	// (0x00023f3c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ce,	// (0x0002e391) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0002e391) list_single_graphic_heading_pane_vc_g

0x5834,	// (0x000241f7) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5834,	// (0x000241f7) list_single_graphic_heading_pane_vc_t1

0x5872,	// (0x00024235) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5872,	// (0x00024235) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0f,	// (0x0002e3d2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0f,	// (0x0002e3d2) list_single_graphic_heading_pane_vc_t

0x556d,	// (0x00023f30) list_double2_pane_vc_g1_ParamLimits

0x556d,	// (0x00023f30) list_double2_pane_vc_g1

0x5579,	// (0x00023f3c) list_double2_pane_vc_g2_ParamLimits

0x5579,	// (0x00023f3c) list_double2_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002e17d) list_double2_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002e17d) list_double2_pane_vc_g

0x5884,	// (0x00024247) list_double2_pane_vc_t1_ParamLimits

0x5884,	// (0x00024247) list_double2_pane_vc_t1

0x589a,	// (0x0002425d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x589a,	// (0x0002425d) list_double2_large_graphic_pane_vc_g1

0x58a6,	// (0x00024269) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x58a6,	// (0x00024269) list_double2_large_graphic_pane_vc_g2

0x58b2,	// (0x00024275) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x58b2,	// (0x00024275) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa14,	// (0x0002e3d7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa14,	// (0x0002e3d7) list_double2_large_graphic_pane_vc_g

0x58be,	// (0x00024281) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x58be,	// (0x00024281) list_double2_large_graphic_pane_vc_t1

0x58d4,	// (0x00024297) list_double_time_pane_vc_g1_ParamLimits

0x58d4,	// (0x00024297) list_double_time_pane_vc_g1

0x58e0,	// (0x000242a3) list_double_time_pane_vc_g2_ParamLimits

0x58e0,	// (0x000242a3) list_double_time_pane_vc_g2

0x0001,

0xfa1b,	// (0x0002e3de) list_double_time_pane_vc_g_ParamLimits

0xfa1b,	// (0x0002e3de) list_double_time_pane_vc_g

0x58ec,	// (0x000242af) list_double_time_pane_vc_t1_ParamLimits

0x58ec,	// (0x000242af) list_double_time_pane_vc_t1

0x5916,	// (0x000242d9) list_double_time_pane_vc_t2_ParamLimits

0x5916,	// (0x000242d9) list_double_time_pane_vc_t2

0x595f,	// (0x00024322) list_double_time_pane_vc_t3_ParamLimits

0x595f,	// (0x00024322) list_double_time_pane_vc_t3

0x5971,	// (0x00024334) list_double_time_pane_vc_t4_ParamLimits

0x5971,	// (0x00024334) list_double_time_pane_vc_t4

0x0003,

0xfa20,	// (0x0002e3e3) list_double_time_pane_vc_t_ParamLimits

0xfa20,	// (0x0002e3e3) list_double_time_pane_vc_t

0x556d,	// (0x00023f30) list_double_pane_vc_g1_ParamLimits

0x556d,	// (0x00023f30) list_double_pane_vc_g1

0x5579,	// (0x00023f3c) list_double_pane_vc_g2_ParamLimits

0x5579,	// (0x00023f3c) list_double_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002e17d) list_double_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002e17d) list_double_pane_vc_g

0x5985,	// (0x00024348) list_double_pane_vc_t1_ParamLimits

0x5985,	// (0x00024348) list_double_pane_vc_t1

0x5999,	// (0x0002435c) list_double_pane_vc_t2_ParamLimits

0x5999,	// (0x0002435c) list_double_pane_vc_t2

0x0001,

0xfa29,	// (0x0002e3ec) list_double_pane_vc_t_ParamLimits

0xfa29,	// (0x0002e3ec) list_double_pane_vc_t

0x556d,	// (0x00023f30) list_double_number_pane_vc_g1_ParamLimits

0x556d,	// (0x00023f30) list_double_number_pane_vc_g1

0x5579,	// (0x00023f3c) list_double_number_pane_vc_g2_ParamLimits

0x5579,	// (0x00023f3c) list_double_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002e17d) list_double_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002e17d) list_double_number_pane_vc_g

0x59af,	// (0x00024372) list_double_number_pane_vc_t1_ParamLimits

0x59af,	// (0x00024372) list_double_number_pane_vc_t1

0x59c1,	// (0x00024384) list_double_number_pane_vc_t2_ParamLimits

0x59c1,	// (0x00024384) list_double_number_pane_vc_t2

0x5999,	// (0x0002435c) list_double_number_pane_vc_t3_ParamLimits

0x5999,	// (0x0002435c) list_double_number_pane_vc_t3

0x0002,

0xfa2e,	// (0x0002e3f1) list_double_number_pane_vc_t_ParamLimits

0xfa2e,	// (0x0002e3f1) list_double_number_pane_vc_t

0x59d5,	// (0x00024398) list_double_large_graphic_pane_vc_g1_ParamLimits

0x59d5,	// (0x00024398) list_double_large_graphic_pane_vc_g1

0x59f7,	// (0x000243ba) list_double_large_graphic_pane_vc_g2_ParamLimits

0x59f7,	// (0x000243ba) list_double_large_graphic_pane_vc_g2

0x5a0b,	// (0x000243ce) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5a0b,	// (0x000243ce) list_double_large_graphic_pane_vc_g3

0x5a1a,	// (0x000243dd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5a1a,	// (0x000243dd) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa35,	// (0x0002e3f8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa35,	// (0x0002e3f8) list_double_large_graphic_pane_vc_g

0x5a26,	// (0x000243e9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5a26,	// (0x000243e9) list_double_large_graphic_pane_vc_t1

0x5a42,	// (0x00024405) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5a42,	// (0x00024405) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3e,	// (0x0002e401) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3e,	// (0x0002e401) list_double_large_graphic_pane_vc_t

0x556d,	// (0x00023f30) list_double_heading_pane_vc_g1_ParamLimits

0x556d,	// (0x00023f30) list_double_heading_pane_vc_g1

0x5579,	// (0x00023f3c) list_double_heading_pane_vc_g2_ParamLimits

0x5579,	// (0x00023f3c) list_double_heading_pane_vc_g2

0x0001,

0xf7ba,	// (0x0002e17d) list_double_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0002e17d) list_double_heading_pane_vc_g

0x5a62,	// (0x00024425) list_double_heading_pane_vc_t1_ParamLimits

0x5a62,	// (0x00024425) list_double_heading_pane_vc_t1

0x5a74,	// (0x00024437) list_double_heading_pane_vc_t2_ParamLimits

0x5a74,	// (0x00024437) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x0002e406) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0002e406) list_double_heading_pane_vc_t

0x5a8c,	// (0x0002444f) list_double_graphic_pane_vc_g1_ParamLimits

0x5a8c,	// (0x0002444f) list_double_graphic_pane_vc_g1

0x5a9f,	// (0x00024462) list_double_graphic_pane_vc_g2_ParamLimits

0x5a9f,	// (0x00024462) list_double_graphic_pane_vc_g2

0x556d,	// (0x00023f30) list_double_graphic_pane_vc_g3_ParamLimits

0x556d,	// (0x00023f30) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x0002e40b) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0002e40b) list_double_graphic_pane_vc_g

0x5abc,	// (0x0002447f) list_double_graphic_pane_vc_t1_ParamLimits

0x5abc,	// (0x0002447f) list_double_graphic_pane_vc_t1

0x5ae6,	// (0x000244a9) list_double_graphic_pane_vc_t2_ParamLimits

0x5ae6,	// (0x000244a9) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x0002e414) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x0002e414) list_double_graphic_pane_vc_t

0x5f25,	// (0x000248e8) aid_size_cell_fastswap

0x5f2d,	// (0x000248f0) aid_size_cell_touch_ParamLimits

0x5f2d,	// (0x000248f0) aid_size_cell_touch

0x618e,	// (0x00024b51) popup_fast_swap_wide_window_ParamLimits

0x618e,	// (0x00024b51) popup_fast_swap_wide_window

0x62ac,	// (0x00024c6f) touch_pane_ParamLimits

0x62ac,	// (0x00024c6f) touch_pane

0x309a,	// (0x00021a5d) button_value_adjust_pane_cp2

0x523c,	// (0x00023bff) button_value_adjust_pane_cp4

0x5262,	// (0x00023c25) form_field_data_pane_cp2

0x5285,	// (0x00023c48) form_field_data_wide_pane_cp2

0x69b7,	// (0x0002537a) bg_scroll_pane_ParamLimits

0x69d6,	// (0x00025399) scroll_handle_pane_ParamLimits

0x69ea,	// (0x000253ad) scroll_sc2_down_pane_ParamLimits

0x69ea,	// (0x000253ad) scroll_sc2_down_pane

0x6a11,	// (0x000253d4) scroll_sc2_up_pane_ParamLimits

0x6a11,	// (0x000253d4) scroll_sc2_up_pane

0xbbbc,	// (0x0002a57f) grid_wheel_folder_pane_g1_ParamLimits

0xbbbc,	// (0x0002a57f) grid_wheel_folder_pane_g1

0x705d,	// (0x00025a20) clock_nsta_pane_cp2_ParamLimits

0x705d,	// (0x00025a20) clock_nsta_pane_cp2

0x9121,	// (0x00027ae4) listscroll_midp_pane_ParamLimits

0x912d,	// (0x00027af0) midp_canvas_pane

0x9418,	// (0x00027ddb) nsta_clock_indic_pane

0x944c,	// (0x00027e0f) listscroll_form_pane_vc

0x9454,	// (0x00027e17) listscroll_set_pane_vc_ParamLimits

0x9454,	// (0x00027e17) listscroll_set_pane_vc

0x954b,	// (0x00027f0e) clock_nsta_pane

0x95c8,	// (0x00027f8b) indicator_nsta_pane

0x98b4,	// (0x00028277) bg_popup_sub_pane_cp2_ParamLimits

0x98c8,	// (0x0002828b) find_pane_cp2_ParamLimits

0x98c8,	// (0x0002828b) find_pane_cp2

0x98de,	// (0x000282a1) grid_toobar_pane_ParamLimits

0x99be,	// (0x00028381) list_form_gen_pane_vc_ParamLimits

0x99be,	// (0x00028381) list_form_gen_pane_vc

0x99d4,	// (0x00028397) scroll_pane_cp8_vc_ParamLimits

0x99d4,	// (0x00028397) scroll_pane_cp8_vc

0x9a50,	// (0x00028413) data_form_wide_pane_vc_ParamLimits

0x9a50,	// (0x00028413) data_form_wide_pane_vc

0x9a5c,	// (0x0002841f) form_field_data_wide_pane_vc_g1

0x9a64,	// (0x00028427) form_field_data_wide_pane_vc_t1_ParamLimits

0x9a64,	// (0x00028427) form_field_data_wide_pane_vc_t1

0x3106,	// (0x00021ac9) input_focus_pane_cp6_vc_ParamLimits

0x3106,	// (0x00021ac9) input_focus_pane_cp6_vc

0x9d60,	// (0x00028723) list_midp_pane_ParamLimits

0x9d6c,	// (0x0002872f) scroll_pane_cp16_ParamLimits

0x9d6c,	// (0x0002872f) scroll_pane_cp16

0x9dd6,	// (0x00028799) button_value_adjust_pane_ParamLimits

0x9dd6,	// (0x00028799) button_value_adjust_pane

0xad65,	// (0x00029728) button_value_adjust_pane_cp6_ParamLimits

0xad65,	// (0x00029728) button_value_adjust_pane_cp6

0xaead,	// (0x00029870) settings_code_pane_cp_ParamLimits

0xaead,	// (0x00029870) settings_code_pane_cp

0x154f,	// (0x0001ff12) cell_touch_pane_g1

0x154f,	// (0x0001ff12) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0002e0a1) cell_touch_pane_g

0xb4a6,	// (0x00029e69) cell_touch_pane_cp_ParamLimits

0xb4a6,	// (0x00029e69) cell_touch_pane_cp

0xb4b6,	// (0x00029e79) cell_touch_pane_ParamLimits

0xb4b6,	// (0x00029e79) cell_touch_pane

0x154f,	// (0x0001ff12) scroll_sc2_down_pane_g1

0x154f,	// (0x0001ff12) scroll_sc2_up_pane_g1

0x1559,	// (0x0001ff1c) bg_set_opt_pane_cp4_vc

0xb4c7,	// (0x00029e8a) list_set_graphic_pane_vc_g1_ParamLimits

0xb4c7,	// (0x00029e8a) list_set_graphic_pane_vc_g1

0xb4d3,	// (0x00029e96) list_set_graphic_pane_vc_g2_ParamLimits

0xb4d3,	// (0x00029e96) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x0002e39d) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x0002e39d) list_set_graphic_pane_vc_g

0xb4df,	// (0x00029ea2) text_primary_small_cp13_vc_ParamLimits

0xb4df,	// (0x00029ea2) text_primary_small_cp13_vc

0xb4f7,	// (0x00029eba) list_set_graphic_pane_vc_ParamLimits

0xb4f7,	// (0x00029eba) list_set_graphic_pane_vc

0x1559,	// (0x0001ff1c) input_focus_pane_cp2_vc

0x154f,	// (0x0001ff12) setting_code_pane_vc_g1

0x15cc,	// (0x0001ff8f) setting_code_pane_vc_t1

0xb50a,	// (0x00029ecd) set_text_pane_vc_t1_ParamLimits

0xb50a,	// (0x00029ecd) set_text_pane_vc_t1

0x1559,	// (0x0001ff1c) input_focus_pane_cp1_vc

0xb52b,	// (0x00029eee) list_set_text_pane_vc

0x154f,	// (0x0001ff12) setting_text_pane_vc_g1

0x1559,	// (0x0001ff1c) bg_set_opt_pane_cp2_vc

0x15c3,	// (0x0001ff86) setting_slider_graphic_pane_vc_g1

0xb535,	// (0x00029ef8) setting_slider_graphic_pane_vc_t1

0xb547,	// (0x00029f0a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0002e3a2) setting_slider_graphic_pane_vc_t

0xb559,	// (0x00029f1c) slider_set_pane_cp_vc

0xb563,	// (0x00029f26) slider_set_pane_vc_g1

0xb56c,	// (0x00029f2f) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x0002e3a7) slider_set_pane_vc_g

0x31c1,	// (0x00021b84) set_opt_bg_pane_g1_copy1

0x31c9,	// (0x00021b8c) set_opt_bg_pane_g2_copy1

0xb598,	// (0x00029f5b) set_opt_bg_pane_g3_copy1

0x31d9,	// (0x00021b9c) set_opt_bg_pane_g4_copy1

0x31e1,	// (0x00021ba4) set_opt_bg_pane_g5_copy1

0x31e9,	// (0x00021bac) set_opt_bg_pane_g6_copy1

0xb5a2,	// (0x00029f65) set_opt_bg_pane_g7_copy1

0xb5ac,	// (0x00029f6f) set_opt_bg_pane_g8_copy1

0xb5b6,	// (0x00029f79) set_opt_bg_pane_g9_copy1

0x1559,	// (0x0001ff1c) bg_set_opt_pane_cp_vc

0xb5c0,	// (0x00029f83) setting_slider_pane_vc_t1

0xb5cf,	// (0x00029f92) setting_slider_pane_vc_t2

0xb5e1,	// (0x00029fa4) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x0002e3b6) setting_slider_pane_vc_t

0xb5f3,	// (0x00029fb6) slider_set_pane_vc

0x7ce5,	// (0x000266a8) volume_set_pane_vc_g1

0x7cee,	// (0x000266b1) volume_set_pane_vc_g2

0x7cf7,	// (0x000266ba) volume_set_pane_vc_g3

0x7d00,	// (0x000266c3) volume_set_pane_vc_g4

0x7d09,	// (0x000266cc) volume_set_pane_vc_g5

0x7d12,	// (0x000266d5) volume_set_pane_vc_g6

0x7d1b,	// (0x000266de) volume_set_pane_vc_g7

0x7d24,	// (0x000266e7) volume_set_pane_vc_g8

0x7d2d,	// (0x000266f0) volume_set_pane_vc_g9

0x7d36,	// (0x000266f9) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0002e254) volume_set_pane_vc_g

0xb5fd,	// (0x00029fc0) volume_set_pane_vc

0xb607,	// (0x00029fca) button_value_adjust_pane_cp1_vc

0xb611,	// (0x00029fd4) list_highlight_pane_cp2_vc

0xb61a,	// (0x00029fdd) list_set_pane_vc_ParamLimits

0xb61a,	// (0x00029fdd) list_set_pane_vc

0xb688,	// (0x0002a04b) main_pane_set_vc_t1_ParamLimits

0xb688,	// (0x0002a04b) main_pane_set_vc_t1

0xb69d,	// (0x0002a060) main_pane_set_vc_t2_ParamLimits

0xb69d,	// (0x0002a060) main_pane_set_vc_t2

0xb6af,	// (0x0002a072) main_pane_set_vc_t3_ParamLimits

0xb6af,	// (0x0002a072) main_pane_set_vc_t3

0xb6c3,	// (0x0002a086) main_pane_set_vc_t4_ParamLimits

0xb6c3,	// (0x0002a086) main_pane_set_vc_t4

0x0003,

0xf9fa,	// (0x0002e3bd) main_pane_set_vc_t_ParamLimits

0xf9fa,	// (0x0002e3bd) main_pane_set_vc_t

0xb6d7,	// (0x0002a09a) setting_code_pane_vc_ParamLimits

0xb6d7,	// (0x0002a09a) setting_code_pane_vc

0xb6e8,	// (0x0002a0ab) setting_slider_graphic_pane_vc

0xb6e8,	// (0x0002a0ab) setting_slider_pane_vc

0xb6e8,	// (0x0002a0ab) setting_text_pane_vc

0xb6e8,	// (0x0002a0ab) setting_volume_pane_vc

0xb6f2,	// (0x0002a0b5) scroll_pane_cp121_vc

0x3088,	// (0x00021a4b) set_content_pane_vc

0xb6fa,	// (0x0002a0bd) button_value_adjust_pane_g1

0xb703,	// (0x0002a0c6) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x0002e419) button_value_adjust_pane_g

0xb70c,	// (0x0002a0cf) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb70c,	// (0x0002a0cf) form_field_slider_wide_pane_vc_t1

0xb71e,	// (0x0002a0e1) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb71e,	// (0x0002a0e1) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x0002e41e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x0002e41e) form_field_slider_wide_pane_vc_t

0x15a7,	// (0x0001ff6a) input_focus_pane_cp10_vc_ParamLimits

0x15a7,	// (0x0001ff6a) input_focus_pane_cp10_vc

0xb74a,	// (0x0002a10d) slider_cont_pane_cp1_vc_ParamLimits

0xb74a,	// (0x0002a10d) slider_cont_pane_cp1_vc

0xb75c,	// (0x0002a11f) slider_form_pane_g1_cp2

0xb56c,	// (0x00029f2f) slider_form_pane_g2_cp2

0xb789,	// (0x0002a14c) form_field_slider_pane_vc_t3

0xb797,	// (0x0002a15a) form_field_slider_pane_vc_t4

0xb7a5,	// (0x0002a168) slider_form_pane_vc_ParamLimits

0xb7a5,	// (0x0002a168) slider_form_pane_vc

0xb7b2,	// (0x0002a175) form_field_slider_pane_vc_t1_ParamLimits

0xb7b2,	// (0x0002a175) form_field_slider_pane_vc_t1

0xb71e,	// (0x0002a0e1) form_field_slider_pane_vc_t2_ParamLimits

0xb71e,	// (0x0002a0e1) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x0002e430) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002e430) form_field_slider_pane_vc_t

0x15a7,	// (0x0001ff6a) input_focus_pane_cp9_vc_ParamLimits

0x15a7,	// (0x0001ff6a) input_focus_pane_cp9_vc

0xb7c8,	// (0x0002a18b) slider_cont_pane_vc_ParamLimits

0xb7c8,	// (0x0002a18b) slider_cont_pane_vc

0xb7dc,	// (0x0002a19f) list_form_graphic_pane_cp_vc_ParamLimits

0xb7dc,	// (0x0002a19f) list_form_graphic_pane_cp_vc

0x9a5c,	// (0x0002841f) form_field_popup_wide_pane_vc_g1

0xb7f1,	// (0x0002a1b4) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb7f1,	// (0x0002a1b4) form_field_popup_wide_pane_vc_t1

0x3106,	// (0x00021ac9) input_focus_pane_cp8_vc_ParamLimits

0x3106,	// (0x00021ac9) input_focus_pane_cp8_vc

0xb836,	// (0x0002a1f9) list_form_wide_pane_vc_ParamLimits

0xb836,	// (0x0002a1f9) list_form_wide_pane_vc

0xb842,	// (0x0002a205) list_form_graphic_pane_vc_g1

0xb84a,	// (0x0002a20d) list_form_graphic_pane_vc_t1_ParamLimits

0xb84a,	// (0x0002a20d) list_form_graphic_pane_vc_t1

0x15b5,	// (0x0001ff78) list_highlight_pane_cp5_vc_ParamLimits

0x15b5,	// (0x0001ff78) list_highlight_pane_cp5_vc

0xb866,	// (0x0002a229) list_form_graphic_pane_vc_ParamLimits

0xb866,	// (0x0002a229) list_form_graphic_pane_vc

0x9a5c,	// (0x0002841f) form_field_popup_pane_vc_g1

0xb87c,	// (0x0002a23f) form_field_popup_pane_vc_t1_ParamLimits

0xb87c,	// (0x0002a23f) form_field_popup_pane_vc_t1

0x3106,	// (0x00021ac9) input_focus_pane_cp7_vc_ParamLimits

0x3106,	// (0x00021ac9) input_focus_pane_cp7_vc

0xb893,	// (0x0002a256) list_form_pane_vc_ParamLimits

0xb893,	// (0x0002a256) list_form_pane_vc

0xb89f,	// (0x0002a262) data_form_pane_vc_t1_ParamLimits

0xb89f,	// (0x0002a262) data_form_pane_vc_t1

0x31c1,	// (0x00021b84) input_focus_pane_vc_g1

0x31c9,	// (0x00021b8c) input_focus_pane_vc_g2

0x31d1,	// (0x00021b94) input_focus_pane_vc_g3

0x31d9,	// (0x00021b9c) input_focus_pane_vc_g4

0x31e1,	// (0x00021ba4) input_focus_pane_vc_g5

0x31e9,	// (0x00021bac) input_focus_pane_vc_g6

0x31f1,	// (0x00021bb4) input_focus_pane_vc_g7

0x31f9,	// (0x00021bbc) input_focus_pane_vc_g8

0x3201,	// (0x00021bc4) input_focus_pane_vc_g9

0x154f,	// (0x0001ff12) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002e02a) input_focus_pane_vc_g

0x9a50,	// (0x00028413) data_form_pane_vc_ParamLimits

0x9a50,	// (0x00028413) data_form_pane_vc

0x9a5c,	// (0x0002841f) form_field_data_pane_vc_g1

0xb8bc,	// (0x0002a27f) form_field_data_pane_vc_t1_ParamLimits

0xb8bc,	// (0x0002a27f) form_field_data_pane_vc_t1

0x3106,	// (0x00021ac9) input_focus_pane_vc_ParamLimits

0x3106,	// (0x00021ac9) input_focus_pane_vc

0xb8d6,	// (0x0002a299) button_value_adjust_pane_cp3_vc

0xb8de,	// (0x0002a2a1) button_value_adjust_pane_cp5_vc

0xb8e6,	// (0x0002a2a9) form_field_data_pane_vc_ParamLimits

0xb8e6,	// (0x0002a2a9) form_field_data_pane_vc

0xb901,	// (0x0002a2c4) form_field_data_pane_vc_cp2

0xb909,	// (0x0002a2cc) form_field_data_wide_pane_vc_ParamLimits

0xb909,	// (0x0002a2cc) form_field_data_wide_pane_vc

0xb923,	// (0x0002a2e6) form_field_data_wide_pane_vc_cp2

0xb92b,	// (0x0002a2ee) form_field_popup_pane_vc_ParamLimits

0xb92b,	// (0x0002a2ee) form_field_popup_pane_vc

0xb946,	// (0x0002a309) form_field_popup_wide_pane_vc_ParamLimits

0xb946,	// (0x0002a309) form_field_popup_wide_pane_vc

0xb960,	// (0x0002a323) form_field_slider_pane_vc_ParamLimits

0xb960,	// (0x0002a323) form_field_slider_pane_vc

0xb973,	// (0x0002a336) form_field_slider_wide_pane_vc_ParamLimits

0xb973,	// (0x0002a336) form_field_slider_wide_pane_vc

0xb986,	// (0x0002a349) grid_touch_1_pane_ParamLimits

0xb986,	// (0x0002a349) grid_touch_1_pane

0xb992,	// (0x0002a355) grid_touch_2_pane_ParamLimits

0xb992,	// (0x0002a355) grid_touch_2_pane

0x93e3,	// (0x00027da6) touch_pane_g1_ParamLimits

0x93e3,	// (0x00027da6) touch_pane_g1

0xb9ac,	// (0x0002a36f) cell_app_pane_cp_wide_ParamLimits

0xb9ac,	// (0x0002a36f) cell_app_pane_cp_wide

0xb9bd,	// (0x0002a380) grid_popup_fast_wide_pane_ParamLimits

0xb9bd,	// (0x0002a380) grid_popup_fast_wide_pane

0xb9d1,	// (0x0002a394) scroll_pane_cp19_ParamLimits

0xb9d1,	// (0x0002a394) scroll_pane_cp19

0x1559,	// (0x0001ff1c) bg_popup_window_pane_cp20

0xb9e5,	// (0x0002a3a8) listscroll_popup_fast_wide_pane

0xb9ed,	// (0x0002a3b0) grid_indicator_nsta_pane

0xb9ff,	// (0x0002a3c2) clock_nsta_pane_g1

0xba08,	// (0x0002a3cb) clock_nsta_pane_t1

0xba24,	// (0x0002a3e7) cell_indicator_nsta_pane_ParamLimits

0xba24,	// (0x0002a3e7) cell_indicator_nsta_pane

0xba59,	// (0x0002a41c) cell_indicator_nsta_pane_g1

0xba67,	// (0x0002a42a) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x0002e441) cell_indicator_nsta_pane_g

0xba7a,	// (0x0002a43d) clock_nsta_pane_cp

0xba83,	// (0x0002a446) indicator_nsta_pane_cp

0xba8d,	// (0x0002a450) nsta_clock_indic_pane_g1

0x160b,	// (0x0001ffce) grid_indicator_pane

0x6b03,	// (0x000254c6) scroll_pane_cp29

0x6f8a,	// (0x0002594d) indicator_nsta_pane_cp2_ParamLimits

0x6f8a,	// (0x0002594d) indicator_nsta_pane_cp2

0x15b5,	// (0x0001ff78) main_apps_wheel_pane

0x9c3d,	// (0x00028600) form_midp_field_text_pane_ParamLimits

0x9d8c,	// (0x0002874f) scroll_bar_cp050_ParamLimits

0xbae6,	// (0x0002a4a9) cell_indicator_pane_ParamLimits

0xbae6,	// (0x0002a4a9) cell_indicator_pane

0xbafe,	// (0x0002a4c1) cell_indicator_pane_g1

0xbb08,	// (0x0002a4cb) grid_wheel_folder_pane_ParamLimits

0xbb08,	// (0x0002a4cb) grid_wheel_folder_pane

0xbb1c,	// (0x0002a4df) list_wheel_apps_pane_ParamLimits

0xbb1c,	// (0x0002a4df) list_wheel_apps_pane

0xbb2f,	// (0x0002a4f2) main_apps_wheel_pane_g1_ParamLimits

0xbb2f,	// (0x0002a4f2) main_apps_wheel_pane_g1

0xbb4b,	// (0x0002a50e) main_apps_wheel_pane_g2_ParamLimits

0xbb4b,	// (0x0002a50e) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0002e45d) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0002e45d) main_apps_wheel_pane_g

0xbb67,	// (0x0002a52a) main_apps_wheel_pane_t1_ParamLimits

0xbb67,	// (0x0002a52a) main_apps_wheel_pane_t1

0xbb90,	// (0x0002a553) list_wheel_apps_pane_g1

0xbb98,	// (0x0002a55b) list_wheel_apps_pane_g2

0xbba0,	// (0x0002a563) list_wheel_apps_pane_g3

0xbba8,	// (0x0002a56b) list_wheel_apps_pane_g4

0xbbb2,	// (0x0002a575) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x0002e462) list_wheel_apps_pane_g

0x728b,	// (0x00025c4e) navi_icon_text_pane

0x947c,	// (0x00027e3f) aid_fill_nsta

0xbbd3,	// (0x0002a596) navi_icon_text_pane_g1

0xbbdf,	// (0x0002a5a2) navi_icon_text_pane_t1

0x7121,	// (0x00025ae4) list_set_graphic_pane_t1_ParamLimits

0x7121,	// (0x00025ae4) list_set_graphic_pane_t1

0xa4f9,	// (0x00028ebc) popup_midp_note_alarm_window_t6_ParamLimits

0xa4f9,	// (0x00028ebc) popup_midp_note_alarm_window_t6

0xa50b,	// (0x00028ece) popup_midp_note_alarm_window_t7_ParamLimits

0xa50b,	// (0x00028ece) popup_midp_note_alarm_window_t7

0xa51d,	// (0x00028ee0) popup_midp_note_alarm_window_t8_ParamLimits

0xa51d,	// (0x00028ee0) popup_midp_note_alarm_window_t8

0xa52f,	// (0x00028ef2) popup_midp_note_alarm_window_t9_ParamLimits

0xa52f,	// (0x00028ef2) popup_midp_note_alarm_window_t9

0xa541,	// (0x00028f04) popup_midp_note_alarm_window_t10_ParamLimits

0xa541,	// (0x00028f04) popup_midp_note_alarm_window_t10

0xa553,	// (0x00028f16) popup_midp_note_alarm_window_t11_ParamLimits

0xa553,	// (0x00028f16) popup_midp_note_alarm_window_t11

0xa565,	// (0x00028f28) scroll_pane_cp17_ParamLimits

0xa565,	// (0x00028f28) scroll_pane_cp17

0x7ce5,	// (0x000266a8) volume_small_pane_cp_g1

0x7ff6,	// (0x000269b9) volume_small_pane_cp_g2

0x7fff,	// (0x000269c2) volume_small_pane_cp_g3

0x8008,	// (0x000269cb) volume_small_pane_cp_g4

0x8011,	// (0x000269d4) volume_small_pane_cp_g5

0x801a,	// (0x000269dd) volume_small_pane_cp_g6

0x8023,	// (0x000269e6) volume_small_pane_cp_g7

0x802c,	// (0x000269ef) volume_small_pane_cp_g8

0x8035,	// (0x000269f8) volume_small_pane_cp_g9

0x803e,	// (0x00026a01) volume_small_pane_cp_g10

0x91f7,	// (0x00027bba) midp_ticker_pane_g1_ParamLimits

0x9203,	// (0x00027bc6) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0002e0f6) midp_ticker_pane_g_ParamLimits

0x920f,	// (0x00027bd2) midp_ticker_pane_t1_ParamLimits

0x9492,	// (0x00027e55) aid_fill_nsta_2

0x9d78,	// (0x0002873b) list_form2_midp_pane

0xaef4,	// (0x000298b7) midp_editing_number_pane_ParamLimits

0xaf03,	// (0x000298c6) midp_ticker_pane_ParamLimits

0xbbf1,	// (0x0002a5b4) form2_midp_field_pane

0xbc15,	// (0x0002a5d8) scroll_pane_cp51

0xbc35,	// (0x0002a5f8) form2_midp_button_pane_ParamLimits

0xbc35,	// (0x0002a5f8) form2_midp_button_pane

0xbc47,	// (0x0002a60a) form2_midp_content_pane_ParamLimits

0xbc47,	// (0x0002a60a) form2_midp_content_pane

0xbc61,	// (0x0002a624) form2_midp_field_choice_group_pane

0xbc69,	// (0x0002a62c) form2_midp_field_pane_g1

0xbc71,	// (0x0002a634) form2_midp_field_pane_g2

0xbc79,	// (0x0002a63c) form2_midp_field_pane_g3

0xbc81,	// (0x0002a644) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x0002e487) form2_midp_field_pane_g

0xbc89,	// (0x0002a64c) form2_midp_gauge_slider_pane

0xbc91,	// (0x0002a654) form2_midp_gauge_wait_pane

0xbc99,	// (0x0002a65c) form2_midp_image_pane_ParamLimits

0xbc99,	// (0x0002a65c) form2_midp_image_pane

0xbcb4,	// (0x0002a677) form2_midp_label_pane_ParamLimits

0xbcb4,	// (0x0002a677) form2_midp_label_pane

0xbcd3,	// (0x0002a696) form2_midp_label_pane_cp_ParamLimits

0xbcd3,	// (0x0002a696) form2_midp_label_pane_cp

0xbcf4,	// (0x0002a6b7) form2_midp_string_pane_ParamLimits

0xbcf4,	// (0x0002a6b7) form2_midp_string_pane

0x5b04,	// (0x000244c7) form2_midp_text_pane_ParamLimits

0x5b04,	// (0x000244c7) form2_midp_text_pane

0xbd06,	// (0x0002a6c9) form2_midp_time_pane

0xbd16,	// (0x0002a6d9) input_focus_pane_cp51_ParamLimits

0xbd16,	// (0x0002a6d9) input_focus_pane_cp51

0xbd2e,	// (0x0002a6f1) form2_midp_label_pane_t1_ParamLimits

0xbd2e,	// (0x0002a6f1) form2_midp_label_pane_t1

0x5b25,	// (0x000244e8) form2_mdip_text_pane_t1_ParamLimits

0x5b25,	// (0x000244e8) form2_mdip_text_pane_t1

0x5b49,	// (0x0002450c) form2_midp_time_pane_t1

0xbd7c,	// (0x0002a73f) form2_midp_gauge_slider_pane_t1

0xbd8e,	// (0x0002a751) form2_midp_gauge_slider_pane_t2

0xbda0,	// (0x0002a763) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x0002e490) form2_midp_gauge_slider_pane_t

0xbdb2,	// (0x0002a775) form2_midp_slider_pane

0xbdbe,	// (0x0002a781) form2_midp_gauge_wait_pane_t1

0xbdcc,	// (0x0002a78f) form2_midp_wait_pane_ParamLimits

0xbdcc,	// (0x0002a78f) form2_midp_wait_pane

0xbdf7,	// (0x0002a7ba) list_single_2graphic_pane_cp4_ParamLimits

0xbdf7,	// (0x0002a7ba) list_single_2graphic_pane_cp4

0x9ab9,	// (0x0002847c) list_single_midp_graphic_pane_cp_ParamLimits

0x9ab9,	// (0x0002847c) list_single_midp_graphic_pane_cp

0x1559,	// (0x0001ff1c) list_highlight_pane_cp20

0xbe10,	// (0x0002a7d3) list_single_2graphic_pane_g1_cp4

0xb3a9,	// (0x00029d6c) list_single_2graphic_pane_g2_cp4

0xbe18,	// (0x0002a7db) list_single_2graphic_pane_t1_cp4

0x15b5,	// (0x0001ff78) list_highlight_pane_cp21

0xbe27,	// (0x0002a7ea) list_single_midp_graphic_pane_g4_cp

0xbe36,	// (0x0002a7f9) list_single_midp_graphic_pane_t1_cp

0xbe4b,	// (0x0002a80e) form2_mdip_string_pane_t1_ParamLimits

0xbe4b,	// (0x0002a80e) form2_mdip_string_pane_t1

0x1559,	// (0x0001ff1c) bg_wml_button_pane_cp2

0x154f,	// (0x0001ff12) form2_midp_image_pane_g1

0x502f,	// (0x000239f2) list_double_large_graphic_pane_g5_ParamLimits

0x502f,	// (0x000239f2) list_double_large_graphic_pane_g5

0x9121,	// (0x00027ae4) midp_form_pane_ParamLimits

0x15b5,	// (0x0001ff78) main_apps_wheel_pane_ParamLimits

0x7962,	// (0x00026325) popup_preview_window_ParamLimits

0x7962,	// (0x00026325) popup_preview_window

0x7b49,	// (0x0002650c) popup_touch_info_window_ParamLimits

0x7b49,	// (0x0002650c) popup_touch_info_window

0x7b6b,	// (0x0002652e) popup_touch_menu_window_ParamLimits

0x7b6b,	// (0x0002652e) popup_touch_menu_window

0x1545,	// (0x0001ff08) bg_popup_sub_pane_cp6

0xbee7,	// (0x0002a8aa) list_touch_menu_pane

0xbeef,	// (0x0002a8b2) list_single_touch_menu_pane_ParamLimits

0xbeef,	// (0x0002a8b2) list_single_touch_menu_pane

0xbf07,	// (0x0002a8ca) list_single_touch_menu_pane_t1

0x15b5,	// (0x0001ff78) bg_popup_sub_pane_cp7_ParamLimits

0x15b5,	// (0x0001ff78) bg_popup_sub_pane_cp7

0xbf15,	// (0x0002a8d8) heading_sub_pane

0xbf1d,	// (0x0002a8e0) list_touch_info_pane_ParamLimits

0xbf1d,	// (0x0002a8e0) list_touch_info_pane

0xbf2c,	// (0x0002a8ef) list_single_touch_info_pane_ParamLimits

0xbf2c,	// (0x0002a8ef) list_single_touch_info_pane

0xbf3e,	// (0x0002a901) list_single_touch_info_pane_t1

0xbf4c,	// (0x0002a90f) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x0002e49e) list_single_touch_info_pane_t

0x9119,	// (0x00027adc) bg_popup_heading_pane_cp

0xbf5a,	// (0x0002a91d) heading_sub_pane_t1

0x99ea,	// (0x000283ad) bg_popup_preview_window_pane_cp_ParamLimits

0x99ea,	// (0x000283ad) bg_popup_preview_window_pane_cp

0xbf15,	// (0x0002a8d8) heading_preview_pane

0xbf1d,	// (0x0002a8e0) list_preview_pane_ParamLimits

0xbf1d,	// (0x0002a8e0) list_preview_pane

0xbf68,	// (0x0002a92b) popup_preview_window_g1

0xbf2c,	// (0x0002a8ef) list_single_preview_pane_ParamLimits

0xbf2c,	// (0x0002a8ef) list_single_preview_pane

0xbf70,	// (0x0002a933) list_single_preview_pane_g1

0xbf78,	// (0x0002a93b) list_single_preview_pane_t1

0xbf3e,	// (0x0002a901) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x0002e4a3) list_single_preview_pane_t

0xbf86,	// (0x0002a949) bg_popup_heading_pane_cp2_ParamLimits

0xbf86,	// (0x0002a949) bg_popup_heading_pane_cp2

0xbf9c,	// (0x0002a95f) heading_preview_pane_g1

0xbfa4,	// (0x0002a967) heading_preview_pane_t1_ParamLimits

0xbfa4,	// (0x0002a967) heading_preview_pane_t1

0x1622,	// (0x0001ffe5) soft_indicator_pane_t1_ParamLimits

0x1b84,	// (0x00020547) scroll_pane_ParamLimits

0x69ff,	// (0x000253c2) scroll_sc2_left_pane

0x6a08,	// (0x000253cb) scroll_sc2_right_pane

0x6a27,	// (0x000253ea) scroll_bg_pane_g1_ParamLimits

0x6a3c,	// (0x000253ff) scroll_bg_pane_g2_ParamLimits

0x6a54,	// (0x00025417) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0002e081) scroll_bg_pane_g_ParamLimits

0x6a27,	// (0x000253ea) scroll_handle_pane_g1_ParamLimits

0x6a76,	// (0x00025439) scroll_handle_pane_g2_ParamLimits

0x6a54,	// (0x00025417) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0002e088) scroll_handle_pane_g_ParamLimits

0x75a7,	// (0x00025f6a) popup_choice_list_window_ParamLimits

0x75a7,	// (0x00025f6a) popup_choice_list_window

0x98c0,	// (0x00028283) choice_list_pane

0x9942,	// (0x00028305) cell_toolbar_pane_t1

0x996a,	// (0x0002832d) toolbar_button_pane_ParamLimits

0xaa2f,	// (0x000293f2) ai_gene_pane_1_t2_ParamLimits

0xaa2f,	// (0x000293f2) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0002e2b0) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0002e2b0) ai_gene_pane_1_t

0xbfc1,	// (0x0002a984) scroll_sc2_left_pane_g1

0xbfc1,	// (0x0002a984) scroll_sc2_right_pane_g1

0x9440,	// (0x00027e03) bg_popup_sub_pane_cp10

0xbfcb,	// (0x0002a98e) list_choice_list_pane

0xbfe4,	// (0x0002a9a7) list_single_choice_list_pane_ParamLimits

0xbfe4,	// (0x0002a9a7) list_single_choice_list_pane

0xbffc,	// (0x0002a9bf) list_single_choice_list_pane_g1

0x32f9,	// (0x00021cbc) list_single_choice_list_pane_t1_ParamLimits

0x32f9,	// (0x00021cbc) list_single_choice_list_pane_t1

0xc004,	// (0x0002a9c7) choice_list_pane_g1

0xc00c,	// (0x0002a9cf) choice_list_pane_t1

0x1545,	// (0x0001ff08) input_focus_pane_cp11

0x34c7,	// (0x00021e8a) title_pane_stacon_g2_ParamLimits

0x34c7,	// (0x00021e8a) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0002e067) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0002e067) title_pane_stacon_g

0x9119,	// (0x00027adc) cursor_press_pane

0x7661,	// (0x00026024) popup_fep_hwr_window_ParamLimits

0x7661,	// (0x00026024) popup_fep_hwr_window

0x76eb,	// (0x000260ae) popup_fep_vkb_window_ParamLimits

0x76eb,	// (0x000260ae) popup_fep_vkb_window

0xc01a,	// (0x0002a9dd) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0002e4cc) fep_vkb_side_pane_g_ParamLimits

0x8080,	// (0x00026a43) fep_hwr_candidate_pane_ParamLimits

0x8080,	// (0x00026a43) fep_hwr_candidate_pane

0x80aa,	// (0x00026a6d) fep_hwr_side_pane_ParamLimits

0x80aa,	// (0x00026a6d) fep_hwr_side_pane

0x80cc,	// (0x00026a8f) fep_hwr_top_pane_ParamLimits

0x80cc,	// (0x00026a8f) fep_hwr_top_pane

0x80e4,	// (0x00026aa7) fep_hwr_write_pane_ParamLimits

0x80e4,	// (0x00026aa7) fep_hwr_write_pane

0xfb09,	// (0x0002e4cc) fep_vkb_side_pane_g

0xc022,	// (0x0002a9e5) fep_hwr_top_pane_g1

0xc034,	// (0x0002a9f7) fep_hwr_top_pane_g2

0x8110,	// (0x00026ad3) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0002e4a8) fep_hwr_top_pane_g

0x8125,	// (0x00026ae8) fep_hwr_top_text_pane

0x6bcb,	// (0x0002558e) fep_hwr_top_text_pane_g1

0xc06a,	// (0x0002aa2d) fep_hwr_top_text_pane_t1

0x822f,	// (0x00026bf2) fep_hwr_candidate_pane_g1

0xc2b5,	// (0x0002ac78) fep_vkb_keypad_pane_g3_ParamLimits

0xc2b5,	// (0x0002ac78) fep_vkb_keypad_pane_g3

0xc2e1,	// (0x0002aca4) fep_vkb_keypad_pane_g4_ParamLimits

0xc2e1,	// (0x0002aca4) fep_vkb_keypad_pane_g4

0xc358,	// (0x0002ad1b) fep_vkb_bottom_pane_g2_ParamLimits

0xc358,	// (0x0002ad1b) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x0002e4d3) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x0002e4d3) fep_vkb_bottom_pane_g

0xbfc1,	// (0x0002a984) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x0002e4dd) cell_vkb_side_pane_g

0xc3e3,	// (0x0002ada6) cell_vkb_side_pane_t1

0xc3f1,	// (0x0002adb4) cell_vkb_side_pane_t1_copy1

0xbfc1,	// (0x0002a984) bg_fep_vkb_candidate_pane_g2

0xc535,	// (0x0002aef8) cell_vkb_candidate_pane_ParamLimits

0xc078,	// (0x0002aa3b) aid_size_cell_vkb_ParamLimits

0xc078,	// (0x0002aa3b) aid_size_cell_vkb

0xc535,	// (0x0002aef8) cell_vkb_candidate_pane

0x8249,	// (0x00026c0c) bg_popup_fep_shadow_pane_g1

0xc10a,	// (0x0002aacd) fep_vkb_bottom_pane_ParamLimits

0xc10a,	// (0x0002aacd) fep_vkb_bottom_pane

0xc147,	// (0x0002ab0a) fep_vkb_candidate_pane_ParamLimits

0xc147,	// (0x0002ab0a) fep_vkb_candidate_pane

0xc163,	// (0x0002ab26) fep_vkb_keypad_pane_ParamLimits

0xc163,	// (0x0002ab26) fep_vkb_keypad_pane

0xc196,	// (0x0002ab59) fep_vkb_side_pane_ParamLimits

0xc196,	// (0x0002ab59) fep_vkb_side_pane

0xc1d2,	// (0x0002ab95) fep_vkb_top_pane_ParamLimits

0xc1d2,	// (0x0002ab95) fep_vkb_top_pane

0xc20e,	// (0x0002abd1) fep_vkb_top_pane_g1_ParamLimits

0xc20e,	// (0x0002abd1) fep_vkb_top_pane_g1

0xc21d,	// (0x0002abe0) fep_vkb_top_pane_g2_ParamLimits

0xc21d,	// (0x0002abe0) fep_vkb_top_pane_g2

0xc22c,	// (0x0002abef) fep_vkb_top_pane_g3_ParamLimits

0xc22c,	// (0x0002abef) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x0002e4c3) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x0002e4c3) fep_vkb_top_pane_g

0xc24a,	// (0x0002ac0d) fep_vkb_top_text_pane_ParamLimits

0xc24a,	// (0x0002ac0d) fep_vkb_top_text_pane

0xc25b,	// (0x0002ac1e) fep_vkb_side_pane_g1_ParamLimits

0xc25b,	// (0x0002ac1e) fep_vkb_side_pane_g1

0xc2a4,	// (0x0002ac67) grid_vkb_side_pane_ParamLimits

0xc2a4,	// (0x0002ac67) grid_vkb_side_pane

0x8251,	// (0x00026c14) bg_popup_fep_shadow_pane_g2

0x825a,	// (0x00026c1d) bg_popup_fep_shadow_pane_g3

0x8262,	// (0x00026c25) bg_popup_fep_shadow_pane_g4

0x826b,	// (0x00026c2e) bg_popup_fep_shadow_pane_g5

0x8275,	// (0x00026c38) bg_popup_fep_shadow_pane_g6

0x827d,	// (0x00026c40) bg_popup_fep_shadow_pane_g7

0x31e1,	// (0x00021ba4) bg_popup_fep_shadow_pane_g8

0xc303,	// (0x0002acc6) grid_vkb_keypad_number_pane_ParamLimits

0xc303,	// (0x0002acc6) grid_vkb_keypad_number_pane

0xc317,	// (0x0002acda) grid_vkb_keypad_pane_ParamLimits

0xc317,	// (0x0002acda) grid_vkb_keypad_pane

0xc33d,	// (0x0002ad00) fep_vkb_bottom_pane_g1_ParamLimits

0xc33d,	// (0x0002ad00) fep_vkb_bottom_pane_g1

0xc366,	// (0x0002ad29) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc366,	// (0x0002ad29) grid_vkb_keypad_bottom_left_pane

0xc37b,	// (0x0002ad3e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc37b,	// (0x0002ad3e) grid_vkb_keypad_bottom_right_pane

0xc390,	// (0x0002ad53) fep_vkb_top_text_pane_g1

0xc3ab,	// (0x0002ad6e) fep_vkb_top_text_pane_t1

0xc3c0,	// (0x0002ad83) cell_vkb_side_pane_ParamLimits

0xc3c0,	// (0x0002ad83) cell_vkb_side_pane

0xbfc1,	// (0x0002a984) cell_vkb_side_pane_g1

0xc3ff,	// (0x0002adc2) cell_vkb_keypad_pane_ParamLimits

0xc3ff,	// (0x0002adc2) cell_vkb_keypad_pane

0xc48c,	// (0x0002ae4f) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x0002e4f0) bg_popup_fep_shadow_pane_g

0xbfc1,	// (0x0002a984) cell_hwr_side_pane_g1

0xbfc1,	// (0x0002a984) cell_hwr_side_pane_g2

0xc496,	// (0x0002ae59) cell_vkb_keypad_pane_t1

0xc4a4,	// (0x0002ae67) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4a4,	// (0x0002ae67) cell_vkb_keypad_bottom_left_pane

0xc4c1,	// (0x0002ae84) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc4c1,	// (0x0002ae84) cell_vkb_keypad_bottom_right_pane

0xbfc1,	// (0x0002a984) cell_vkb_keypad_bottom_left_pane_g1

0xbfc1,	// (0x0002a984) cell_vkb_keypad_bottom_right_pane_g1

0xc4fa,	// (0x0002aebd) cell_vkb_keypad_number_pane_ParamLimits

0xc4fa,	// (0x0002aebd) cell_vkb_keypad_number_pane

0xc519,	// (0x0002aedc) cell_vkb_keypad_number_pane_g1

0xc523,	// (0x0002aee6) cell_vkb_keypad_number_pane_g2

0xc52c,	// (0x0002aeef) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x0002e4e2) cell_vkb_keypad_number_pane_g

0xc496,	// (0x0002ae59) cell_vkb_keypad_number_pane_t1

0xc556,	// (0x0002af19) fep_vkb_candidate_pane_g1

0x0001,

0xfb1a,	// (0x0002e4dd) cell_hwr_side_pane_g

0xc56f,	// (0x0002af32) cell_hwr_side_pane_t1

0x828f,	// (0x00026c52) cell_hwr_side_pane_t1_copy1

0xc23c,	// (0x0002abff) cell_hwr_candidate_pane_g1

0x829d,	// (0x00026c60) cell_hwr_candidate_pane_t1

0xbfc1,	// (0x0002a984) cell_vkb_candidate_pane_g2

0xc5f5,	// (0x0002afb8) cell_vkb_candidate_pane_t1

0x8047,	// (0x00026a0a) bg_popup_fep_shadow_pane_ParamLimits

0x8047,	// (0x00026a0a) bg_popup_fep_shadow_pane

0x1515,	// (0x0001fed8) bg_fep_hwr_top_pane_g4

0xc046,	// (0x0002aa09) bg_hwr_side_pane_g1_ParamLimits

0xc046,	// (0x0002aa09) bg_hwr_side_pane_g1

0x8163,	// (0x00026b26) cell_hwr_side_pane_ParamLimits

0x8163,	// (0x00026b26) cell_hwr_side_pane

0x81a0,	// (0x00026b63) fep_hwr_write_pane_g1_ParamLimits

0x81a0,	// (0x00026b63) fep_hwr_write_pane_g1

0x81ad,	// (0x00026b70) fep_hwr_write_pane_g2_ParamLimits

0x81ad,	// (0x00026b70) fep_hwr_write_pane_g2

0x81ba,	// (0x00026b7d) fep_hwr_write_pane_g3_ParamLimits

0x81ba,	// (0x00026b7d) fep_hwr_write_pane_g3

0x81c8,	// (0x00026b8b) fep_hwr_write_pane_g4_ParamLimits

0x81c8,	// (0x00026b8b) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x0002e4af) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x0002e4af) fep_hwr_write_pane_g

0x1515,	// (0x0001fed8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1515,	// (0x0001fed8) bg_fep_hwr_candidate_pane_g2

0x81dd,	// (0x00026ba0) cell_hwr_candidate_pane_ParamLimits

0x81dd,	// (0x00026ba0) cell_hwr_candidate_pane

0x822f,	// (0x00026bf2) fep_hwr_candidate_pane_g1_ParamLimits

0xc0a6,	// (0x0002aa69) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc0a6,	// (0x0002aa69) bg_popup_fep_shadow_pane_cp2

0xc23c,	// (0x0002abff) fep_vkb_top_pane_g4_ParamLimits

0xc23c,	// (0x0002abff) fep_vkb_top_pane_g4

0xc282,	// (0x0002ac45) fep_vkb_side_pane_g2_ParamLimits

0xc282,	// (0x0002ac45) fep_vkb_side_pane_g2

0x516f,	// (0x00023b32) list_setting_pane_t4_ParamLimits

0x516f,	// (0x00023b32) list_setting_pane_t4

0x5203,	// (0x00023bc6) list_setting_number_pane_t5_ParamLimits

0x5203,	// (0x00023bc6) list_setting_number_pane_t5

0x6c31,	// (0x000255f4) list_double_heading_pane_cp2_ParamLimits

0x6c31,	// (0x000255f4) list_double_heading_pane_cp2

0xc603,	// (0x0002afc6) list_double_heading_pane_g1_cp2_ParamLimits

0xc603,	// (0x0002afc6) list_double_heading_pane_g1_cp2

0xc60f,	// (0x0002afd2) list_double_heading_pane_g2_cp2_ParamLimits

0xc60f,	// (0x0002afd2) list_double_heading_pane_g2_cp2

0xc623,	// (0x0002afe6) list_double_heading_pane_t1_cp2_ParamLimits

0xc623,	// (0x0002afe6) list_double_heading_pane_t1_cp2

0xc639,	// (0x0002affc) list_double_heading_pane_t2_cp2_ParamLimits

0xc639,	// (0x0002affc) list_double_heading_pane_t2_cp2

0x153d,	// (0x0001ff00) aid_value_unit2

0x61ec,	// (0x00024baf) popup_preview_fixed_window

0x1702,	// (0x000200c5) bg_popup_preview_window_pane_cp02

0xc64b,	// (0x0002b00e) list_preview_fixed_pane

0xc691,	// (0x0002b054) list_empty_pane_fp_ParamLimits

0xc691,	// (0x0002b054) list_empty_pane_fp

0xc691,	// (0x0002b054) list_single_cale_day_pane_fp_ParamLimits

0xc691,	// (0x0002b054) list_single_cale_day_pane_fp

0xc691,	// (0x0002b054) list_single_graphic_heading_pane_fp_ParamLimits

0xc691,	// (0x0002b054) list_single_graphic_heading_pane_fp

0xc691,	// (0x0002b054) list_single_graphic_pane_fp_ParamLimits

0xc691,	// (0x0002b054) list_single_graphic_pane_fp

0xc691,	// (0x0002b054) list_single_heading_pane_fp_ParamLimits

0xc691,	// (0x0002b054) list_single_heading_pane_fp

0xc691,	// (0x0002b054) list_single_pane_fp_ParamLimits

0xc691,	// (0x0002b054) list_single_pane_fp

0xc6aa,	// (0x0002b06d) list_single_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0002b06d) list_single_pane_fp_g1

0x4e86,	// (0x00023849) list_single_pane_fp_g2_ParamLimits

0x4e86,	// (0x00023849) list_single_pane_fp_g2

0x5b5c,	// (0x0002451f) list_single_pane_fp_g3_ParamLimits

0x5b5c,	// (0x0002451f) list_single_pane_fp_g3

0xc6b6,	// (0x0002b079) list_single_pane_fp_g4_ParamLimits

0xc6b6,	// (0x0002b079) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x0002e511) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x0002e511) list_single_pane_fp_g

0x5b70,	// (0x00024533) list_single_pane_fp_t1_ParamLimits

0x5b70,	// (0x00024533) list_single_pane_fp_t1

0x5b87,	// (0x0002454a) list_single_graphic_pane_fp_g1_ParamLimits

0x5b87,	// (0x0002454a) list_single_graphic_pane_fp_g1

0xc6aa,	// (0x0002b06d) list_single_graphic_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0002b06d) list_single_graphic_pane_fp_g2

0x4e86,	// (0x00023849) list_single_graphic_pane_fp_g3_ParamLimits

0x4e86,	// (0x00023849) list_single_graphic_pane_fp_g3

0x5b5c,	// (0x0002451f) list_single_graphic_pane_fp_g4_ParamLimits

0x5b5c,	// (0x0002451f) list_single_graphic_pane_fp_g4

0xc6b6,	// (0x0002b079) list_single_graphic_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0002b079) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x0002e51a) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x0002e51a) list_single_graphic_pane_fp_g

0x5b93,	// (0x00024556) list_single_graphic_pane_fp_t1_ParamLimits

0x5b93,	// (0x00024556) list_single_graphic_pane_fp_t1

0x5b87,	// (0x0002454a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5b87,	// (0x0002454a) list_single_graphic_heading_pane_fp_g1

0xc6aa,	// (0x0002b06d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0002b06d) list_single_graphic_heading_pane_fp_g2

0x4e86,	// (0x00023849) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4e86,	// (0x00023849) list_single_graphic_heading_pane_fp_g3

0x5b5c,	// (0x0002451f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5b5c,	// (0x0002451f) list_single_graphic_heading_pane_fp_g4

0xc6b6,	// (0x0002b079) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0002b079) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002e51a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002e51a) list_single_graphic_heading_pane_fp_g

0x5ba9,	// (0x0002456c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5ba9,	// (0x0002456c) list_single_graphic_heading_pane_fp_t1

0x5bbf,	// (0x00024582) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5bbf,	// (0x00024582) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0002e525) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0002e525) list_single_graphic_heading_pane_fp_t

0x5bd1,	// (0x00024594) list_single_cale_day_pane_fp_g1_ParamLimits

0x5bd1,	// (0x00024594) list_single_cale_day_pane_fp_g1

0xc6c2,	// (0x0002b085) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6c2,	// (0x0002b085) list_single_cale_day_pane_fp_g2

0x5c09,	// (0x000245cc) list_single_cale_day_pane_fp_g3_ParamLimits

0x5c09,	// (0x000245cc) list_single_cale_day_pane_fp_g3

0x5c31,	// (0x000245f4) list_single_cale_day_pane_fp_g4_ParamLimits

0x5c31,	// (0x000245f4) list_single_cale_day_pane_fp_g4

0x5c55,	// (0x00024618) list_single_cale_day_pane_fp_g5_ParamLimits

0x5c55,	// (0x00024618) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x0002e52a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x0002e52a) list_single_cale_day_pane_fp_g

0x5c79,	// (0x0002463c) list_single_cale_day_pane_fp_t1_ParamLimits

0x5c79,	// (0x0002463c) list_single_cale_day_pane_fp_t1

0x5c9f,	// (0x00024662) list_single_cale_day_pane_fp_t2_ParamLimits

0x5c9f,	// (0x00024662) list_single_cale_day_pane_fp_t2

0x5cb8,	// (0x0002467b) list_single_cale_day_pane_fp_t3_ParamLimits

0x5cb8,	// (0x0002467b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0002e535) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0002e535) list_single_cale_day_pane_fp_t

0xc6aa,	// (0x0002b06d) list_empty_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0002b06d) list_empty_pane_fp_g1

0x5cd1,	// (0x00024694) list_empty_pane_fp_t1

0x5cdf,	// (0x000246a2) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0002e53c) list_empty_pane_fp_t

0xc6aa,	// (0x0002b06d) list_single_heading_pane_fp_g1_ParamLimits

0xc6aa,	// (0x0002b06d) list_single_heading_pane_fp_g1

0x4e86,	// (0x00023849) list_single_heading_pane_fp_g2_ParamLimits

0x4e86,	// (0x00023849) list_single_heading_pane_fp_g2

0x5b5c,	// (0x0002451f) list_single_heading_pane_fp_g3_ParamLimits

0x5b5c,	// (0x0002451f) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x0002e541) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0002e541) list_single_heading_pane_fp_g

0x5ced,	// (0x000246b0) list_single_heading_pane_fp_t1_ParamLimits

0x5ced,	// (0x000246b0) list_single_heading_pane_fp_t1

0x5cff,	// (0x000246c2) list_single_heading_pane_fp_t2_ParamLimits

0x5cff,	// (0x000246c2) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0002e548) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0002e548) list_single_heading_pane_fp_t

0x330e,	// (0x00021cd1) aid_size_cell_fast

0x16e5,	// (0x000200a8) soft_indicator_pane_cp1_t1

0x334b,	// (0x00021d0e) cell_app_pane_cp2_ParamLimits

0x334b,	// (0x00021d0e) cell_app_pane_cp2

0x8069,	// (0x00026a2c) fep_hwr_candidate_drop_down_list_pane

0x1523,	// (0x0001fee6) fep_hwr_candidate_pane_g3_ParamLimits

0x1523,	// (0x0001fee6) fep_hwr_candidate_pane_g3

0x1530,	// (0x0001fef3) fep_hwr_candidate_pane_g4_ParamLimits

0x1530,	// (0x0001fef3) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0002e4bc) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0002e4bc) fep_hwr_candidate_pane_g

0xc136,	// (0x0002aaf9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc136,	// (0x0002aaf9) fep_vkb_candidate_drop_down_list_pane

0xc55e,	// (0x0002af21) fep_vkb_candidate_pane_g3

0xc566,	// (0x0002af29) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x0002e4e9) fep_vkb_candidate_pane_g

0xc23c,	// (0x0002abff) cell_hwr_candidate_pane_g1_ParamLimits

0xc57d,	// (0x0002af40) cell_hwr_candidate_pane_g3_ParamLimits

0xc57d,	// (0x0002af40) cell_hwr_candidate_pane_g3

0xc59e,	// (0x0002af61) cell_hwr_candidate_pane_g4_ParamLimits

0xc59e,	// (0x0002af61) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0002e503) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0002e503) cell_hwr_candidate_pane_g

0xc5bf,	// (0x0002af82) cell_vkb_candidate_pane_g3_ParamLimits

0xc5bf,	// (0x0002af82) cell_vkb_candidate_pane_g3

0xc5da,	// (0x0002af9d) cell_vkb_candidate_pane_g4_ParamLimits

0xc5da,	// (0x0002af9d) cell_vkb_candidate_pane_g4

0xc6ce,	// (0x0002b091) cell_app_pane_cp2_g1_ParamLimits

0xc6ce,	// (0x0002b091) cell_app_pane_cp2_g1

0xc6ec,	// (0x0002b0af) cell_app_pane_cp2_g2_ParamLimits

0xc6ec,	// (0x0002b0af) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0002e54d) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0002e54d) cell_app_pane_cp2_g

0xc6f8,	// (0x0002b0bb) cell_app_pane_cp2_t1_ParamLimits

0xc6f8,	// (0x0002b0bb) cell_app_pane_cp2_t1

0x3106,	// (0x00021ac9) grid_highlight_pane_cp1_ParamLimits

0x3106,	// (0x00021ac9) grid_highlight_pane_cp1

0x82bb,	// (0x00026c7e) cell_hwr_candidate_pane_cp1_ParamLimits

0x82bb,	// (0x00026c7e) cell_hwr_candidate_pane_cp1

0xc23c,	// (0x0002abff) fep_hwr_candidate_drop_down_list_pane_g1

0xc70a,	// (0x0002b0cd) fep_hwr_candidate_drop_down_list_pane_g2

0xc717,	// (0x0002b0da) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002e552) fep_hwr_candidate_drop_down_list_pane_g

0x82df,	// (0x00026ca2) fep_hwr_candidate_drop_down_list_scroll_pane

0x82e8,	// (0x00026cab) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x82e8,	// (0x00026cab) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x82f5,	// (0x00026cb8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x82f5,	// (0x00026cb8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x8302,	// (0x00026cc5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8302,	// (0x00026cc5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5bf,	// (0x0002af82) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5bf,	// (0x0002af82) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc5da,	// (0x0002af9d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5da,	// (0x0002af9d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x830f,	// (0x00026cd2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x830f,	// (0x00026cd2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x832a,	// (0x00026ced) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x832a,	// (0x00026ced) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x8345,	// (0x00026d08) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8345,	// (0x00026d08) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0002e559) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0002e559) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc724,	// (0x0002b0e7) cell_vkb_candidate_pane_cp1_ParamLimits

0xc724,	// (0x0002b0e7) cell_vkb_candidate_pane_cp1

0xc23c,	// (0x0002abff) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc23c,	// (0x0002abff) fep_vkb_candidate_drop_down_list_pane_g1

0xc70a,	// (0x0002b0cd) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc70a,	// (0x0002b0cd) fep_vkb_candidate_drop_down_list_pane_g2

0xc717,	// (0x0002b0da) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc717,	// (0x0002b0da) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0002e552) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8f,	// (0x0002e552) fep_vkb_candidate_drop_down_list_pane_g

0xc74a,	// (0x0002b10d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc74a,	// (0x0002b10d) fep_vkb_candidate_drop_down_list_scroll_pane

0xc757,	// (0x0002b11a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc757,	// (0x0002b11a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc764,	// (0x0002b127) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc764,	// (0x0002b127) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc770,	// (0x0002b133) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc770,	// (0x0002b133) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc57d,	// (0x0002af40) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc57d,	// (0x0002af40) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc59e,	// (0x0002af61) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc59e,	// (0x0002af61) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc77c,	// (0x0002b13f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc77c,	// (0x0002b13f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc79d,	// (0x0002b160) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc79d,	// (0x0002b160) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7be,	// (0x0002b181) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7be,	// (0x0002b181) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0002e56a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0002e56a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x630c,	// (0x00024ccf) title_pane_g1_ParamLimits

0x6319,	// (0x00024cdc) title_pane_g2_ParamLimits

0xf529,	// (0x0002deec) title_pane_g_ParamLimits

0x6bbb,	// (0x0002557e) aid_call2_pane

0x6bc3,	// (0x00025586) aid_call_pane

0x6bcb,	// (0x0002558e) popup_clock_analogue_window_g1

0x6bcb,	// (0x0002558e) popup_clock_analogue_window_g2

0x6bd3,	// (0x00025596) popup_clock_analogue_window_g3

0x6bdc,	// (0x0002559f) popup_clock_analogue_window_g4

0x154f,	// (0x0001ff12) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0002e096) popup_clock_analogue_window_g

0x6be4,	// (0x000255a7) popup_clock_analogue_window_t1

0x6c91,	// (0x00025654) clock_digital_number_pane_ParamLimits

0x6c91,	// (0x00025654) clock_digital_number_pane

0x6c9d,	// (0x00025660) clock_digital_number_pane_cp02_ParamLimits

0x6c9d,	// (0x00025660) clock_digital_number_pane_cp02

0x6ca9,	// (0x0002566c) clock_digital_number_pane_cp03_ParamLimits

0x6ca9,	// (0x0002566c) clock_digital_number_pane_cp03

0x6cb5,	// (0x00025678) clock_digital_number_pane_cp04_ParamLimits

0x6cb5,	// (0x00025678) clock_digital_number_pane_cp04

0x6cc1,	// (0x00025684) clock_digital_separator_pane_ParamLimits

0x6cc1,	// (0x00025684) clock_digital_separator_pane

0x6ccd,	// (0x00025690) popup_clock_digital_window_t1_ParamLimits

0x6ccd,	// (0x00025690) popup_clock_digital_window_t1

0x154f,	// (0x0001ff12) clock_digital_number_pane_g1

0x154f,	// (0x0001ff12) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0002e0a1) clock_digital_number_pane_g

0x154f,	// (0x0001ff12) clock_digital_separator_pane_g1

0x154f,	// (0x0001ff12) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0002e0a1) clock_digital_separator_pane_g

0x947c,	// (0x00027e3f) aid_fill_nsta_ParamLimits

0x95c8,	// (0x00027f8b) indicator_nsta_pane_ParamLimits

0x9759,	// (0x0002811c) popup_clock_analogue_window

0x9759,	// (0x0002811c) popup_clock_digital_window

0xb9ed,	// (0x0002a3b0) grid_indicator_nsta_pane_ParamLimits

0xba16,	// (0x0002a3d9) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0002e43c) clock_nsta_pane_t

0x69a4,	// (0x00025367) aid_size_max_handle

0x69ae,	// (0x00025371) aid_size_min_handle

0x9119,	// (0x00027adc) editor_scroll_pane

0xc7d9,	// (0x0002b19c) ex_editor_pane

0x32d4,	// (0x00021c97) scroll_pane_cp13

0x1bb0,	// (0x00020573) scroll_pane_cp14

0x6c19,	// (0x000255dc) scroll_pane_cp36

0x6c47,	// (0x0002560a) list_single_graphic_hl_pane_cp2_ParamLimits

0x6c47,	// (0x0002560a) list_single_graphic_hl_pane_cp2

0xaf72,	// (0x00029935) list_single_graphic_hl_pane_ParamLimits

0xaf72,	// (0x00029935) list_single_graphic_hl_pane

0x5d15,	// (0x000246d8) aid_size_min_hl_cp1

0xc7e1,	// (0x0002b1a4) list_highlight_pane_cp34_ParamLimits

0xc7e1,	// (0x0002b1a4) list_highlight_pane_cp34

0xc7f2,	// (0x0002b1b5) list_single_graphic_hl_pane_g1_ParamLimits

0xc7f2,	// (0x0002b1b5) list_single_graphic_hl_pane_g1

0x5d1e,	// (0x000246e1) list_single_graphic_hl_pane_g2_ParamLimits

0x5d1e,	// (0x000246e1) list_single_graphic_hl_pane_g2

0x5d1e,	// (0x000246e1) list_single_graphic_hl_pane_g3_ParamLimits

0x5d1e,	// (0x000246e1) list_single_graphic_hl_pane_g3

0x55d9,	// (0x00023f9c) list_single_graphic_hl_pane_g4_ParamLimits

0x55d9,	// (0x00023f9c) list_single_graphic_hl_pane_g4

0x5d2a,	// (0x000246ed) list_single_graphic_hl_pane_g5_ParamLimits

0x5d2a,	// (0x000246ed) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0002e57b) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0002e57b) list_single_graphic_hl_pane_g

0x5d3e,	// (0x00024701) list_single_graphic_hl_pane_t1_ParamLimits

0x5d3e,	// (0x00024701) list_single_graphic_hl_pane_t1

0xc7ff,	// (0x0002b1c2) aid_size_min_hl_cp2

0xc808,	// (0x0002b1cb) list_highlight_pane_cp34_cp2_ParamLimits

0xc808,	// (0x0002b1cb) list_highlight_pane_cp34_cp2

0xc7f2,	// (0x0002b1b5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc7f2,	// (0x0002b1b5) list_single_graphic_hl_pane_g1_cp2

0xc815,	// (0x0002b1d8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc815,	// (0x0002b1d8) list_single_graphic_hl_pane_g2_cp2

0xc821,	// (0x0002b1e4) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc821,	// (0x0002b1e4) list_single_graphic_hl_pane_g3_cp2

0xc82f,	// (0x0002b1f2) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc82f,	// (0x0002b1f2) list_single_graphic_hl_pane_g4_cp2

0xc83b,	// (0x0002b1fe) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc83b,	// (0x0002b1fe) list_single_graphic_hl_pane_g5_cp2

0x7485,	// (0x00025e48) control_pane_g4_ParamLimits

0x7485,	// (0x00025e48) control_pane_g4

0x9440,	// (0x00027e03) bg_popup_sub_pane_cp10_ParamLimits

0xbfcb,	// (0x0002a98e) list_choice_list_pane_ParamLimits

0xbfda,	// (0x0002a99d) scroll_pane_cp23

0x1702,	// (0x000200c5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc64b,	// (0x0002b00e) list_preview_fixed_pane_ParamLimits

0xc661,	// (0x0002b024) list_preview_fixed_pane_cp_ParamLimits

0xc661,	// (0x0002b024) list_preview_fixed_pane_cp

0xc66d,	// (0x0002b030) popup_preview_fixed_window_g1_ParamLimits

0xc66d,	// (0x0002b030) popup_preview_fixed_window_g1

0xc679,	// (0x0002b03c) popup_preview_fixed_window_g2_ParamLimits

0xc679,	// (0x0002b03c) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x0002e50a) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x0002e50a) popup_preview_fixed_window_g

0x683b,	// (0x000251fe) aid_navi_side_left_pane_ParamLimits

0x6850,	// (0x00025213) aid_navi_side_right_pane_ParamLimits

0x6868,	// (0x0002522b) navi_icon_pane_stacon_ParamLimits

0x687c,	// (0x0002523f) navi_navi_pane_stacon_ParamLimits

0x6868,	// (0x0002522b) navi_text_pane_stacon_ParamLimits

0x1545,	// (0x0001ff08) main_text_info_pane

0xc865,	// (0x0002b228) listscroll_text_info_pane

0xc86d,	// (0x0002b230) list_text_info_pane_ParamLimits

0xc86d,	// (0x0002b230) list_text_info_pane

0xc87c,	// (0x0002b23f) scroll_pane_cp24_ParamLimits

0xc87c,	// (0x0002b23f) scroll_pane_cp24

0xc89a,	// (0x0002b25d) list_text_info_pane_t1_ParamLimits

0xc89a,	// (0x0002b25d) list_text_info_pane_t1

0x75c9,	// (0x00025f8c) popup_fast_swap2_window_ParamLimits

0x75c9,	// (0x00025f8c) popup_fast_swap2_window

0xc8bf,	// (0x0002b282) aid_size_cell_fast2

0x1545,	// (0x0001ff08) bg_popup_window_pane_cp17

0xc8c9,	// (0x0002b28c) heading_pane_cp2

0xc8d1,	// (0x0002b294) listscroll_fast2_pane

0xc8d9,	// (0x0002b29c) grid_fast2_pane

0xc8e3,	// (0x0002b2a6) listscroll_fast2_pane_g1

0xc8ed,	// (0x0002b2b0) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x0002e586) listscroll_fast2_pane_g

0x32d4,	// (0x00021c97) scroll_pane_cp26

0xc8f7,	// (0x0002b2ba) cell_fast2_pane_ParamLimits

0xc8f7,	// (0x0002b2ba) cell_fast2_pane

0xc90e,	// (0x0002b2d1) cell_fast2_pane_g1

0xc917,	// (0x0002b2da) cell_fast2_pane_g2

0xc920,	// (0x0002b2e3) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0002e58b) cell_fast2_pane_g

0x1977,	// (0x0002033a) grid_highlight_pane_cp9

0x198c,	// (0x0002034f) main_eswt_pane_ParamLimits

0x198c,	// (0x0002034f) main_eswt_pane

0xc891,	// (0x0002b254) list_single_text_info_pane

0xc928,	// (0x0002b2eb) eswt_ctrl_button_pane

0xc928,	// (0x0002b2eb) eswt_ctrl_canvas_pane

0xc930,	// (0x0002b2f3) eswt_ctrl_combo_pane

0xc928,	// (0x0002b2eb) eswt_ctrl_default_pane

0xc928,	// (0x0002b2eb) eswt_ctrl_label_pane

0xc938,	// (0x0002b2fb) eswt_ctrl_wait_pane

0xc940,	// (0x0002b303) eswt_shell_pane

0x1545,	// (0x0001ff08) listscroll_eswt_app_pane

0xc960,	// (0x0002b323) popup_eswt_tasktip_window_ParamLimits

0xc960,	// (0x0002b323) popup_eswt_tasktip_window

0x99ea,	// (0x000283ad) bg_popup_window_pane_cp18

0xc979,	// (0x0002b33c) eswt_control_pane_g1_ParamLimits

0xc979,	// (0x0002b33c) eswt_control_pane_g1

0xc986,	// (0x0002b349) eswt_control_pane_g2_ParamLimits

0xc986,	// (0x0002b349) eswt_control_pane_g2

0xc993,	// (0x0002b356) eswt_control_pane_g3_ParamLimits

0xc993,	// (0x0002b356) eswt_control_pane_g3

0xc9a0,	// (0x0002b363) eswt_control_pane_g4_ParamLimits

0xc9a0,	// (0x0002b363) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x0002e592) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x0002e592) eswt_control_pane_g

0x3106,	// (0x00021ac9) bg_button_pane_ParamLimits

0x3106,	// (0x00021ac9) bg_button_pane

0x198c,	// (0x0002034f) common_borders_pane_copy2_ParamLimits

0x198c,	// (0x0002034f) common_borders_pane_copy2

0xc9ad,	// (0x0002b370) control_button_pane_g1_ParamLimits

0xc9ad,	// (0x0002b370) control_button_pane_g1

0xc9b9,	// (0x0002b37c) control_button_pane_g2_ParamLimits

0xc9b9,	// (0x0002b37c) control_button_pane_g2

0xc9c5,	// (0x0002b388) control_button_pane_g3_ParamLimits

0xc9c5,	// (0x0002b388) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0002e59b) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0002e59b) control_button_pane_g

0xc9d9,	// (0x0002b39c) control_button_pane_t1

0xc9e7,	// (0x0002b3aa) control_button_pane_t2

0x0001,

0xfbdf,	// (0x0002e5a2) control_button_pane_t

0x9976,	// (0x00028339) bg_button_pane_g1

0x997e,	// (0x00028341) bg_button_pane_g2

0x9986,	// (0x00028349) bg_button_pane_g3

0x998e,	// (0x00028351) bg_button_pane_g4

0x9996,	// (0x00028359) bg_button_pane_g5

0x999e,	// (0x00028361) bg_button_pane_g6

0x99a6,	// (0x00028369) bg_button_pane_g7

0x99ae,	// (0x00028371) bg_button_pane_g8

0x99b6,	// (0x00028379) bg_button_pane_g9

0x0008,

0xf841,	// (0x0002e204) bg_button_pane_g

0xbf86,	// (0x0002a949) common_borders_pane_ParamLimits

0xbf86,	// (0x0002a949) common_borders_pane

0xc979,	// (0x0002b33c) eswt_control_pane_g1_copy1_ParamLimits

0xc979,	// (0x0002b33c) eswt_control_pane_g1_copy1

0xc986,	// (0x0002b349) eswt_control_pane_g2_copy1_ParamLimits

0xc986,	// (0x0002b349) eswt_control_pane_g2_copy1

0xc993,	// (0x0002b356) eswt_control_pane_g3_copy1_ParamLimits

0xc993,	// (0x0002b356) eswt_control_pane_g3_copy1

0xc9a0,	// (0x0002b363) eswt_control_pane_g4_copy1_ParamLimits

0xc9a0,	// (0x0002b363) eswt_control_pane_g4_copy1

0xbfc1,	// (0x0002a984) bg_eswt_ctrl_canvas_pane_g1

0xbf86,	// (0x0002a949) common_borders_pane_cp2_ParamLimits

0xbf86,	// (0x0002a949) common_borders_pane_cp2

0xbf86,	// (0x0002a949) common_borders_pane_cp3_ParamLimits

0xbf86,	// (0x0002a949) common_borders_pane_cp3

0xc9f5,	// (0x0002b3b8) separator_horizontal_pane

0xc9fd,	// (0x0002b3c0) separator_vertical_pane

0xc979,	// (0x0002b33c) eswt_control_pane_g1_copy2_ParamLimits

0xc979,	// (0x0002b33c) eswt_control_pane_g1_copy2

0xc986,	// (0x0002b349) eswt_control_pane_g2_copy2_ParamLimits

0xc986,	// (0x0002b349) eswt_control_pane_g2_copy2

0xc993,	// (0x0002b356) eswt_control_pane_g3_copy2_ParamLimits

0xc993,	// (0x0002b356) eswt_control_pane_g3_copy2

0xc9a0,	// (0x0002b363) eswt_control_pane_g4_copy2_ParamLimits

0xc9a0,	// (0x0002b363) eswt_control_pane_g4_copy2

0x1545,	// (0x0001ff08) common_borders_pane_cp4

0xca06,	// (0x0002b3c9) separator_horizontal_pane_g1

0xca0f,	// (0x0002b3d2) separator_horizontal_pane_g2

0xca18,	// (0x0002b3db) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x0002e5a7) separator_horizontal_pane_g

0xc979,	// (0x0002b33c) eswt_control_pane_g1_copy3_ParamLimits

0xc979,	// (0x0002b33c) eswt_control_pane_g1_copy3

0xc986,	// (0x0002b349) eswt_control_pane_g2_copy3_ParamLimits

0xc986,	// (0x0002b349) eswt_control_pane_g2_copy3

0xc993,	// (0x0002b356) eswt_control_pane_g3_copy3_ParamLimits

0xc993,	// (0x0002b356) eswt_control_pane_g3_copy3

0xc9a0,	// (0x0002b363) eswt_control_pane_g4_copy3_ParamLimits

0xc9a0,	// (0x0002b363) eswt_control_pane_g4_copy3

0x1545,	// (0x0001ff08) common_borders_pane_cp5

0xca21,	// (0x0002b3e4) separator_vertical_pane_g1

0xca2a,	// (0x0002b3ed) separator_vertical_pane_g2

0xca33,	// (0x0002b3f6) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x0002e5ae) separator_vertical_pane_g

0xc979,	// (0x0002b33c) eswt_control_pane_g1_copy4_ParamLimits

0xc979,	// (0x0002b33c) eswt_control_pane_g1_copy4

0xc986,	// (0x0002b349) eswt_control_pane_g2_copy4_ParamLimits

0xc986,	// (0x0002b349) eswt_control_pane_g2_copy4

0xc993,	// (0x0002b356) eswt_control_pane_g3_copy4_ParamLimits

0xc993,	// (0x0002b356) eswt_control_pane_g3_copy4

0xc9a0,	// (0x0002b363) eswt_control_pane_g4_copy4_ParamLimits

0xc9a0,	// (0x0002b363) eswt_control_pane_g4_copy4

0xca3c,	// (0x0002b3ff) eswt_ctrl_combo_button_pane

0xca44,	// (0x0002b407) eswt_ctrl_input_pane

0xca4c,	// (0x0002b40f) popup_choice_list_window_cp70

0xca54,	// (0x0002b417) eswt_ctrl_input_pane_t1

0x1545,	// (0x0001ff08) input_focus_pane_cp70

0xbf86,	// (0x0002a949) bg_button_pane_cp70_ParamLimits

0xbf86,	// (0x0002a949) bg_button_pane_cp70

0xca62,	// (0x0002b425) eswt_ctrl_combo_button_pane_g1

0xca6a,	// (0x0002b42d) wait_bar_pane_cp70

0x99ea,	// (0x000283ad) bg_popup_window_pane_cp70_ParamLimits

0x99ea,	// (0x000283ad) bg_popup_window_pane_cp70

0xca72,	// (0x0002b435) popup_eswt_tasktip_window_t1

0xca88,	// (0x0002b44b) wait_bar_pane_cp71_ParamLimits

0xca88,	// (0x0002b44b) wait_bar_pane_cp71

0xca94,	// (0x0002b457) grid_eswt_app_pane

0x6a08,	// (0x000253cb) scroll_pane_cp70

0xca9d,	// (0x0002b460) cell_eswt_app_pane_ParamLimits

0xca9d,	// (0x0002b460) cell_eswt_app_pane

0xcacf,	// (0x0002b492) cell_eswt_app_pane_g1_ParamLimits

0xcacf,	// (0x0002b492) cell_eswt_app_pane_g1

0xcafe,	// (0x0002b4c1) cell_eswt_app_pane_g2_ParamLimits

0xcafe,	// (0x0002b4c1) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x0002e5b5) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x0002e5b5) cell_eswt_app_pane_g

0xcb27,	// (0x0002b4ea) cell_eswt_app_pane_t1_ParamLimits

0xcb27,	// (0x0002b4ea) cell_eswt_app_pane_t1

0xcb59,	// (0x0002b51c) grid_highlight_pane_cp70_ParamLimits

0xcb59,	// (0x0002b51c) grid_highlight_pane_cp70

0x72e0,	// (0x00025ca3) set_content_pane_g1

0x93c7,	// (0x00027d8a) status_small_volume_pane

0x8360,	// (0x00026d23) status_small_volume_pane_g1

0x8368,	// (0x00026d2b) volume_small2_pane

0x8371,	// (0x00026d34) volume_small2_pane_g1

0x837a,	// (0x00026d3d) volume_small2_pane_g2

0x8383,	// (0x00026d46) volume_small2_pane_g3

0x838c,	// (0x00026d4f) volume_small2_pane_g4

0x8395,	// (0x00026d58) volume_small2_pane_g5

0x839e,	// (0x00026d61) volume_small2_pane_g6

0x83a7,	// (0x00026d6a) volume_small2_pane_g7

0x83b0,	// (0x00026d73) volume_small2_pane_g8

0x83b9,	// (0x00026d7c) volume_small2_pane_g9

0x83c2,	// (0x00026d85) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0002e5ba) volume_small2_pane_g

0xc390,	// (0x0002ad53) fep_vkb_top_text_pane_g1_ParamLimits

0xc3ab,	// (0x0002ad6e) fep_vkb_top_text_pane_t1_ParamLimits

0xc685,	// (0x0002b048) popup_preview_fixed_window_g3_ParamLimits

0xc685,	// (0x0002b048) popup_preview_fixed_window_g3

0x7adc,	// (0x0002649f) popup_toolbar_trans_pane

0xad42,	// (0x00029705) aid_height_set_list_ParamLimits

0xad53,	// (0x00029716) aid_size_parent_ParamLimits

0x9440,	// (0x00027e03) list_highlight_pane_cp2_ParamLimits

0x72e0,	// (0x00025ca3) set_content_pane_g1_ParamLimits

0x57b3,	// (0x00024176) list_single_image_pane_ParamLimits

0x57b3,	// (0x00024176) list_single_image_pane

0xcb65,	// (0x0002b528) aid_size_cell_image_ParamLimits

0xcb65,	// (0x0002b528) aid_size_cell_image

0xcb72,	// (0x0002b535) grid_single_image_pane_ParamLimits

0xcb72,	// (0x0002b535) grid_single_image_pane

0x312c,	// (0x00021aef) list_single_image_pane_g1_ParamLimits

0x312c,	// (0x00021aef) list_single_image_pane_g1

0x3138,	// (0x00021afb) list_single_image_pane_g2_ParamLimits

0x3138,	// (0x00021afb) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x0002e5cf) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x0002e5cf) list_single_image_pane_g

0xcb80,	// (0x0002b543) list_single_image_pane_t1_ParamLimits

0xcb80,	// (0x0002b543) list_single_image_pane_t1

0xcb96,	// (0x0002b559) cell_image_list_pane_ParamLimits

0xcb96,	// (0x0002b559) cell_image_list_pane

0xcbae,	// (0x0002b571) cell_image_list_pane_g1

0xcbb7,	// (0x0002b57a) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x0002e5d4) cell_image_list_pane_g

0xcbc0,	// (0x0002b583) aid_size_cell_tb_trans_pane

0x3106,	// (0x00021ac9) bg_tb_trans_pane

0xcbd2,	// (0x0002b595) grid_tb_trans_pane

0x9976,	// (0x00028339) bg_tb_trans_pane_g1

0x997e,	// (0x00028341) bg_tb_trans_pane_g2

0x9986,	// (0x00028349) bg_tb_trans_pane_g3

0x998e,	// (0x00028351) bg_tb_trans_pane_g4

0x9996,	// (0x00028359) bg_tb_trans_pane_g5

0x99ae,	// (0x00028371) bg_tb_trans_pane_g6

0x99b6,	// (0x00028379) bg_tb_trans_pane_g7

0x999e,	// (0x00028361) bg_tb_trans_pane_g8

0x99a6,	// (0x00028369) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x0002e5d9) bg_tb_trans_pane_g

0xcbe6,	// (0x0002b5a9) cell_toolbar_trans_pane_ParamLimits

0xcbe6,	// (0x0002b5a9) cell_toolbar_trans_pane

0xbfc1,	// (0x0002a984) cell_toolbar_trans_pane_g1

0xbbf9,	// (0x0002a5bc) list_form2_midp_pane_t1

0xbc07,	// (0x0002a5ca) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x0002e482) list_form2_midp_pane_t

0xbc15,	// (0x0002a5d8) scroll_pane_cp51_ParamLimits

0xbddc,	// (0x0002a79f) form2_midp_wait_pane_g1

0xbde5,	// (0x0002a7a8) form2_midp_wait_pane_g2

0xbdee,	// (0x0002a7b1) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x0002e497) form2_midp_wait_pane_g

0x15b5,	// (0x0001ff78) list_highlight_pane_cp21_ParamLimits

0xbe27,	// (0x0002a7ea) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe36,	// (0x0002a7f9) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5769,	// (0x0002412c) list_single_2graphic_im_pane_ParamLimits

0x5769,	// (0x0002412c) list_single_2graphic_im_pane

0xcc0c,	// (0x0002b5cf) list_single_2graphic_im_pane_g1_ParamLimits

0xcc0c,	// (0x0002b5cf) list_single_2graphic_im_pane_g1

0xcc1d,	// (0x0002b5e0) list_single_2graphic_im_pane_g2_ParamLimits

0xcc1d,	// (0x0002b5e0) list_single_2graphic_im_pane_g2

0xcc29,	// (0x0002b5ec) list_single_2graphic_im_pane_g3_ParamLimits

0xcc29,	// (0x0002b5ec) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x0002e5ec) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x0002e5ec) list_single_2graphic_im_pane_g

0xcc49,	// (0x0002b60c) list_single_2graphic_im_pane_t1_ParamLimits

0xcc49,	// (0x0002b60c) list_single_2graphic_im_pane_t1

0xc691,	// (0x0002b054) list_single_graphic_2heading_pane_fp_ParamLimits

0xc691,	// (0x0002b054) list_single_graphic_2heading_pane_fp

0x5b87,	// (0x0002454a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5b87,	// (0x0002454a) list_single_graphic_2heading_pane_fp_g1

0xc6aa,	// (0x0002b06d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6aa,	// (0x0002b06d) list_single_graphic_2heading_pane_fp_g2

0x4e86,	// (0x00023849) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4e86,	// (0x00023849) list_single_graphic_2heading_pane_fp_g3

0x5b5c,	// (0x0002451f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5b5c,	// (0x0002451f) list_single_graphic_2heading_pane_fp_g4

0xc6b6,	// (0x0002b079) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6b6,	// (0x0002b079) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x0002e51a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x0002e51a) list_single_graphic_2heading_pane_fp_g

0x5d54,	// (0x00024717) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5d54,	// (0x00024717) list_single_graphic_2heading_pane_fp_t1

0x5bbf,	// (0x00024582) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5bbf,	// (0x00024582) list_single_graphic_2heading_pane_fp_t2

0x5d6a,	// (0x0002472d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5d6a,	// (0x0002472d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x0002e5f5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x0002e5f5) list_single_graphic_2heading_pane_fp_t

0xc052,	// (0x0002aa15) fep_hwr_write_pane_g5_ParamLimits

0xc052,	// (0x0002aa15) fep_hwr_write_pane_g5

0xc05e,	// (0x0002aa21) fep_hwr_write_pane_g6_ParamLimits

0xc05e,	// (0x0002aa21) fep_hwr_write_pane_g6

0xc940,	// (0x0002b303) eswt_shell_pane_ParamLimits

0x99ea,	// (0x000283ad) bg_popup_window_pane_cp18_ParamLimits

0xc971,	// (0x0002b334) heading_pane_cp70

0xca72,	// (0x0002b435) popup_eswt_tasktip_window_t1_ParamLimits

0x94d3,	// (0x00027e96) aid_touch_tab_arrow_left

0x94df,	// (0x00027ea2) aid_touch_tab_arrow_right

0x6332,	// (0x00024cf5) title_pane_g3_ParamLimits

0x6332,	// (0x00024cf5) title_pane_g3

0x305f,	// (0x00021a22) set_value_pane_g1

0x7adc,	// (0x0002649f) popup_toolbar_trans_pane_ParamLimits

0xcbc0,	// (0x0002b583) aid_size_cell_tb_trans_pane_ParamLimits

0x3106,	// (0x00021ac9) bg_tb_trans_pane_ParamLimits

0xcbd2,	// (0x0002b595) grid_tb_trans_pane_ParamLimits

0x1702,	// (0x000200c5) cont_note_pane_ParamLimits

0x1702,	// (0x000200c5) cont_note_pane

0x198c,	// (0x0002034f) cont_snote2_single_text_pane_ParamLimits

0x198c,	// (0x0002034f) cont_snote2_single_text_pane

0x198c,	// (0x0002034f) cont_snote2_single_graphic_pane_ParamLimits

0x198c,	// (0x0002034f) cont_snote2_single_graphic_pane

0x9fdc,	// (0x0002899f) cont_note_wait_pane_ParamLimits

0x9fdc,	// (0x0002899f) cont_note_wait_pane

0x9fdc,	// (0x0002899f) cont_note_image_pane_ParamLimits

0x9fdc,	// (0x0002899f) cont_note_image_pane

0xcc7a,	// (0x0002b63d) popup_note2_window_g1_ParamLimits

0xcc7a,	// (0x0002b63d) popup_note2_window_g1

0xccab,	// (0x0002b66e) popup_note2_window_t1_ParamLimits

0xccab,	// (0x0002b66e) popup_note2_window_t1

0xccf0,	// (0x0002b6b3) popup_note2_window_t2_ParamLimits

0xccf0,	// (0x0002b6b3) popup_note2_window_t2

0xcd35,	// (0x0002b6f8) popup_note2_window_t3_ParamLimits

0xcd35,	// (0x0002b6f8) popup_note2_window_t3

0xcd7a,	// (0x0002b73d) popup_note2_window_t4_ParamLimits

0xcd7a,	// (0x0002b73d) popup_note2_window_t4

0x1786,	// (0x00020149) popup_note2_window_t5_ParamLimits

0x1786,	// (0x00020149) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x0002e601) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x0002e601) popup_note2_window_t

0xcda9,	// (0x0002b76c) popup_note2_image_window_g1_ParamLimits

0xcda9,	// (0x0002b76c) popup_note2_image_window_g1

0xcdb5,	// (0x0002b778) popup_note2_image_window_g2_ParamLimits

0xcdb5,	// (0x0002b778) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x0002e60c) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x0002e60c) popup_note2_image_window_g

0xcdc7,	// (0x0002b78a) popup_note2_image_window_t1_ParamLimits

0xcdc7,	// (0x0002b78a) popup_note2_image_window_t1

0xcddf,	// (0x0002b7a2) popup_note2_image_window_t2_ParamLimits

0xcddf,	// (0x0002b7a2) popup_note2_image_window_t2

0xcdf7,	// (0x0002b7ba) popup_note2_image_window_t3_ParamLimits

0xcdf7,	// (0x0002b7ba) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x0002e611) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x0002e611) popup_note2_image_window_t

0x9fea,	// (0x000289ad) popup_note2_wait_window_g1_ParamLimits

0x9fea,	// (0x000289ad) popup_note2_wait_window_g1

0xce13,	// (0x0002b7d6) popup_note2_wait_window_g2_ParamLimits

0xce13,	// (0x0002b7d6) popup_note2_wait_window_g2

0xa002,	// (0x000289c5) popup_note2_wait_window_g3_ParamLimits

0xa002,	// (0x000289c5) popup_note2_wait_window_g3

0x0002,

0xfc55,	// (0x0002e618) popup_note2_wait_window_g_ParamLimits

0xfc55,	// (0x0002e618) popup_note2_wait_window_g

0xce1f,	// (0x0002b7e2) popup_note2_wait_window_t1_ParamLimits

0xce1f,	// (0x0002b7e2) popup_note2_wait_window_t1

0xce3d,	// (0x0002b800) popup_note2_wait_window_t2_ParamLimits

0xce3d,	// (0x0002b800) popup_note2_wait_window_t2

0xce5b,	// (0x0002b81e) popup_note2_wait_window_t3_ParamLimits

0xce5b,	// (0x0002b81e) popup_note2_wait_window_t3

0xce6d,	// (0x0002b830) popup_note2_wait_window_t4_ParamLimits

0xce6d,	// (0x0002b830) popup_note2_wait_window_t4

0x0003,

0xfc5c,	// (0x0002e61f) popup_note2_wait_window_t_ParamLimits

0xfc5c,	// (0x0002e61f) popup_note2_wait_window_t

0xce7f,	// (0x0002b842) wait_bar2_pane_ParamLimits

0xce7f,	// (0x0002b842) wait_bar2_pane

0xce97,	// (0x0002b85a) popup_snote2_single_text_window_g1_ParamLimits

0xce97,	// (0x0002b85a) popup_snote2_single_text_window_g1

0xcebf,	// (0x0002b882) popup_snote2_single_text_window_t1_ParamLimits

0xcebf,	// (0x0002b882) popup_snote2_single_text_window_t1

0xcf0b,	// (0x0002b8ce) popup_snote2_single_text_window_t2_ParamLimits

0xcf0b,	// (0x0002b8ce) popup_snote2_single_text_window_t2

0xcf57,	// (0x0002b91a) popup_snote2_single_text_window_t3_ParamLimits

0xcf57,	// (0x0002b91a) popup_snote2_single_text_window_t3

0xcf98,	// (0x0002b95b) popup_snote2_single_text_window_t4_ParamLimits

0xcf98,	// (0x0002b95b) popup_snote2_single_text_window_t4

0xcfce,	// (0x0002b991) popup_snote2_single_text_window_t5_ParamLimits

0xcfce,	// (0x0002b991) popup_snote2_single_text_window_t5

0x0004,

0xfc65,	// (0x0002e628) popup_snote2_single_text_window_t_ParamLimits

0xfc65,	// (0x0002e628) popup_snote2_single_text_window_t

0xcff9,	// (0x0002b9bc) popup_snote2_single_graphic_window_g1_ParamLimits

0xcff9,	// (0x0002b9bc) popup_snote2_single_graphic_window_g1

0xd021,	// (0x0002b9e4) popup_snote2_single_graphic_window_g2_ParamLimits

0xd021,	// (0x0002b9e4) popup_snote2_single_graphic_window_g2

0x0001,

0xfc70,	// (0x0002e633) popup_snote2_single_graphic_window_g_ParamLimits

0xfc70,	// (0x0002e633) popup_snote2_single_graphic_window_g

0xd049,	// (0x0002ba0c) popup_snote2_single_graphic_window_t1_ParamLimits

0xd049,	// (0x0002ba0c) popup_snote2_single_graphic_window_t1

0xd095,	// (0x0002ba58) popup_snote2_single_graphic_window_t2_ParamLimits

0xd095,	// (0x0002ba58) popup_snote2_single_graphic_window_t2

0xcf57,	// (0x0002b91a) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf57,	// (0x0002b91a) popup_snote2_single_graphic_window_t3

0xcf98,	// (0x0002b95b) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf98,	// (0x0002b95b) popup_snote2_single_graphic_window_t4

0xcfce,	// (0x0002b991) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfce,	// (0x0002b991) popup_snote2_single_graphic_window_t5

0x0004,

0xfc75,	// (0x0002e638) popup_snote2_single_graphic_window_t_ParamLimits

0xfc75,	// (0x0002e638) popup_snote2_single_graphic_window_t

0xbac5,	// (0x0002a488) clock_nsta_pane_cp2_t1

0xbac5,	// (0x0002a488) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0002e458) clock_nsta_pane_cp2_t

0x532d,	// (0x00023cf0) form_field_data_wide_pane_g1_ParamLimits

0x312c,	// (0x00021aef) form_field_data_wide_pane_g2_ParamLimits

0x312c,	// (0x00021aef) form_field_data_wide_pane_g2

0x3138,	// (0x00021afb) form_field_data_wide_pane_g3_ParamLimits

0x3138,	// (0x00021afb) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002e019) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002e019) form_field_data_wide_pane_g

0xb9a0,	// (0x0002a363) grid_touch_3_pane_ParamLimits

0xb9a0,	// (0x0002a363) grid_touch_3_pane

0xd0e1,	// (0x0002baa4) cell_touch_3_pane_ParamLimits

0xd0e1,	// (0x0002baa4) cell_touch_3_pane

0xbfc1,	// (0x0002a984) cell_touch_3_pane_g1

0xbfc1,	// (0x0002a984) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x0002e4dd) cell_touch_3_pane_g

0x17de,	// (0x000201a1) cont_query_data_pane

0x17e6,	// (0x000201a9) cont_query_data_pane_cp1

0xd114,	// (0x0002bad7) button_value_adjust_pane_cp7

0xd11c,	// (0x0002badf) query_popup_pane_cp3

0x6d4a,	// (0x0002570d) bg_popup_sub_pane_cp22_ParamLimits

0x6d60,	// (0x00025723) navi_navi_volume_pane_cp2

0x6d7b,	// (0x0002573e) popup_side_volume_key_window_g2

0x6d8a,	// (0x0002574d) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0002e0af) popup_side_volume_key_window_g

0x6da7,	// (0x0002576a) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0002e0b6) popup_side_volume_key_window_t

0x71a6,	// (0x00025b69) popup_side_volume_key_window_ParamLimits

0x4f6c,	// (0x0002392f) list_double_graphic_pane_g4_ParamLimits

0x4f6c,	// (0x0002392f) list_double_graphic_pane_g4

0x579a,	// (0x0002415d) list_single_2heading_msg_pane_ParamLimits

0x579a,	// (0x0002415d) list_single_2heading_msg_pane

0x5d8a,	// (0x0002474d) list_single_2heading_msg_pane_g1_ParamLimits

0x5d8a,	// (0x0002474d) list_single_2heading_msg_pane_g1

0x4d9b,	// (0x0002375e) list_single_2heading_msg_pane_g2_ParamLimits

0x4d9b,	// (0x0002375e) list_single_2heading_msg_pane_g2

0x5d96,	// (0x00024759) list_single_2heading_msg_pane_g3_ParamLimits

0x5d96,	// (0x00024759) list_single_2heading_msg_pane_g3

0x5da2,	// (0x00024765) list_single_2heading_msg_pane_g4_ParamLimits

0x5da2,	// (0x00024765) list_single_2heading_msg_pane_g4

0x0003,

0xfc80,	// (0x0002e643) list_single_2heading_msg_pane_g_ParamLimits

0xfc80,	// (0x0002e643) list_single_2heading_msg_pane_g

0x5dba,	// (0x0002477d) list_single_2heading_msg_pane_t1_ParamLimits

0x5dba,	// (0x0002477d) list_single_2heading_msg_pane_t1

0x5de2,	// (0x000247a5) list_single_2heading_msg_pane_t2_ParamLimits

0x5de2,	// (0x000247a5) list_single_2heading_msg_pane_t2

0x5e16,	// (0x000247d9) list_single_2heading_msg_pane_t3_ParamLimits

0x5e16,	// (0x000247d9) list_single_2heading_msg_pane_t3

0x5e4f,	// (0x00024812) list_single_2heading_msg_pane_t4_ParamLimits

0x5e4f,	// (0x00024812) list_single_2heading_msg_pane_t4

0x0003,

0xfc89,	// (0x0002e64c) list_single_2heading_msg_pane_t_ParamLimits

0xfc89,	// (0x0002e64c) list_single_2heading_msg_pane_t

0x1563,	// (0x0001ff26) title_pane_g4_ParamLimits

0x1563,	// (0x0001ff26) title_pane_g4

0x678c,	// (0x0002514f) title_pane_stacon_g3_ParamLimits

0x678c,	// (0x0002514f) title_pane_stacon_g3

0xcc3d,	// (0x0002b600) list_single_2graphic_im_pane_g4_ParamLimits

0xcc3d,	// (0x0002b600) list_single_2graphic_im_pane_g4

0xaa4c,	// (0x0002940f) popup_side_volume_key_window_cp

0xb2b0,	// (0x00029c73) main_idle_act2_pane_t1

0x7be0,	// (0x000265a3) toolbar_button_pane_g10

0x668f,	// (0x00025052) popup_toolbar_window_cp1

0xbab6,	// (0x0002a479) clock_nsta_pane_cp_t1

0xbab6,	// (0x0002a479) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x0002e453) clock_nsta_pane_cp_t

0x6d60,	// (0x00025723) navi_navi_volume_pane_cp2_ParamLimits

0x6d6f,	// (0x00025732) popup_side_volume_key_window_g1_ParamLimits

0x6d7b,	// (0x0002573e) popup_side_volume_key_window_g2_ParamLimits

0x6d8a,	// (0x0002574d) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0002e0af) popup_side_volume_key_window_g_ParamLimits

0x8055,	// (0x00026a18) fep_hwr_aid_pane

0x1515,	// (0x0001fed8) bg_fep_hwr_top_pane_g4_ParamLimits

0xc022,	// (0x0002a9e5) fep_hwr_top_pane_g1_ParamLimits

0xc034,	// (0x0002a9f7) fep_hwr_top_pane_g2_ParamLimits

0x8110,	// (0x00026ad3) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0002e4a8) fep_hwr_top_pane_g_ParamLimits

0x8125,	// (0x00026ae8) fep_hwr_top_text_pane_ParamLimits

0xa801,	// (0x000291c4) aid_touch_tab_arrow_arrow_2

0xa80a,	// (0x000291cd) aid_touch_tab_arrow_left_2

0x8069,	// (0x00026a2c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x80a0,	// (0x00026a63) fep_hwr_prediction_pane

0xc18a,	// (0x0002ab4d) fep_vkb_prediction_pane

0xc290,	// (0x0002ac53) fep_vkb_side_pane_g3_ParamLimits

0xc290,	// (0x0002ac53) fep_vkb_side_pane_g3

0xc23c,	// (0x0002abff) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc70a,	// (0x0002b0cd) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc717,	// (0x0002b0da) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0002e552) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd143,	// (0x0002bb06) fep_hwr_prediction_pane_g1

0x83cb,	// (0x00026d8e) fep_hwr_prediction_pane_g2

0x83d3,	// (0x00026d96) fep_hwr_prediction_pane_g3

0x83db,	// (0x00026d9e) fep_hwr_prediction_pane_g4

0x0003,

0xfc92,	// (0x0002e655) fep_hwr_prediction_pane_g

0xd143,	// (0x0002bb06) fep_vkb_prediction_pane_g1

0xd14d,	// (0x0002bb10) fep_vkb_prediction_pane_g2

0xd155,	// (0x0002bb18) fep_vkb_prediction_pane_g3

0xd15d,	// (0x0002bb20) fep_vkb_prediction_pane_g4

0x0003,

0xfc9b,	// (0x0002e65e) fep_vkb_prediction_pane_g

0x7ed5,	// (0x00026898) slider_set_pane_g3

0x7ee9,	// (0x000268ac) slider_set_pane_g4

0x7f01,	// (0x000268c4) slider_set_pane_g5

0x7ed5,	// (0x00026898) slider_set_pane_g6

0x7f17,	// (0x000268da) slider_set_pane_g7

0xaed2,	// (0x00029895) slider_form_pane_g3

0xaedb,	// (0x0002989e) slider_form_pane_g4

0xaee3,	// (0x000298a6) slider_form_pane_g5

0xaed2,	// (0x00029895) slider_form_pane_g6

0xaeeb,	// (0x000298ae) slider_form_pane_g7

0xb574,	// (0x00029f37) slider_set_pane_vc_g3

0xb57d,	// (0x00029f40) slider_set_pane_vc_g4

0xb586,	// (0x00029f49) slider_set_pane_vc_g5

0xb574,	// (0x00029f37) slider_set_pane_vc_g6

0xb58f,	// (0x00029f52) slider_set_pane_vc_g7

0xb765,	// (0x0002a128) slider_form_pane_vc_g1

0xb76e,	// (0x0002a131) slider_form_pane_vc_g2

0xb777,	// (0x0002a13a) slider_form_pane_vc_g3

0xb765,	// (0x0002a128) slider_form_pane_vc_g4

0xb780,	// (0x0002a143) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x0002e425) slider_form_pane_vc_g

0x1545,	// (0x0001ff08) main_idle_act3_pane

0xd165,	// (0x0002bb28) ai3_links_pane

0xd16e,	// (0x0002bb31) popup_ai3_data_window_ParamLimits

0xd16e,	// (0x0002bb31) popup_ai3_data_window

0x1545,	// (0x0001ff08) grid_ai3_links_pane

0xd18c,	// (0x0002bb4f) cell_ai3_links_pane_ParamLimits

0xd18c,	// (0x0002bb4f) cell_ai3_links_pane

0xd1a6,	// (0x0002bb69) bg_popup_sub_pane_cp11

0xd1b3,	// (0x0002bb76) cell_ai3_links_pane_g1

0x1545,	// (0x0001ff08) bg_popup_sub_pane_cp12

0xd1d8,	// (0x0002bb9b) heading_ai3_data_pane

0xd1e0,	// (0x0002bba3) list_ai3_gene_pane

0xd1ec,	// (0x0002bbaf) popup_ai3_data_window_g1

0xd1f4,	// (0x0002bbb7) heading_ai3_data_pane_g1

0xd1fc,	// (0x0002bbbf) heading_ai3_data_pane_t1

0xd20a,	// (0x0002bbcd) list_double_ai3_gene_pane_ParamLimits

0xd20a,	// (0x0002bbcd) list_double_ai3_gene_pane

0xd217,	// (0x0002bbda) list_single_ai3_gene_pane_ParamLimits

0xd217,	// (0x0002bbda) list_single_ai3_gene_pane

0xbf86,	// (0x0002a949) list_highlight_pane_cp7_ParamLimits

0xbf86,	// (0x0002a949) list_highlight_pane_cp7

0xd224,	// (0x0002bbe7) list_single_a13_gene_pane_t1_ParamLimits

0xd224,	// (0x0002bbe7) list_single_a13_gene_pane_t1

0xd23b,	// (0x0002bbfe) list_single_ai3_gene_pane_g1

0xd244,	// (0x0002bc07) list_single_ai3_gene_pane_g2

0x0001,

0xfca4,	// (0x0002e667) list_single_ai3_gene_pane_g

0xd24c,	// (0x0002bc0f) list_double_ai3_gene_pane_g1_ParamLimits

0xd24c,	// (0x0002bc0f) list_double_ai3_gene_pane_g1

0xd258,	// (0x0002bc1b) list_double_ai3_gene_pane_t1_ParamLimits

0xd258,	// (0x0002bc1b) list_double_ai3_gene_pane_t1

0xd274,	// (0x0002bc37) list_double_ai3_gene_pane_t2_ParamLimits

0xd274,	// (0x0002bc37) list_double_ai3_gene_pane_t2

0xd289,	// (0x0002bc4c) list_double_ai3_gene_pane_t3_ParamLimits

0xd289,	// (0x0002bc4c) list_double_ai3_gene_pane_t3

0x0002,

0xfca9,	// (0x0002e66c) list_double_ai3_gene_pane_t_ParamLimits

0xfca9,	// (0x0002e66c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5d80,	// (0x00024743) aid_size_min_col_2

0xd12d,	// (0x0002baf0) aid_size_min_msg_ParamLimits

0xd12d,	// (0x0002baf0) aid_size_min_msg

0xc39c,	// (0x0002ad5f) fep_vkb_top_text_pane_g2_ParamLimits

0xc39c,	// (0x0002ad5f) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x0002e4d8) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x0002e4d8) fep_vkb_top_text_pane_g

0x1545,	// (0x0001ff08) main_hc_apps_shell_pane

0xd2a6,	// (0x0002bc69) grid_hc_apps_pane_ParamLimits

0xd2a6,	// (0x0002bc69) grid_hc_apps_pane

0xd2b8,	// (0x0002bc7b) list_hc_apps_pane

0xd2c0,	// (0x0002bc83) scroll_pane_cp37_ParamLimits

0xd2c0,	// (0x0002bc83) scroll_pane_cp37

0xd2cc,	// (0x0002bc8f) cell_hc_apps_pane_ParamLimits

0xd2cc,	// (0x0002bc8f) cell_hc_apps_pane

0xd380,	// (0x0002bd43) cell_hc_apps_pane_g1_ParamLimits

0xd380,	// (0x0002bd43) cell_hc_apps_pane_g1

0xd3ac,	// (0x0002bd6f) cell_hc_apps_pane_g2_ParamLimits

0xd3ac,	// (0x0002bd6f) cell_hc_apps_pane_g2

0xd3c8,	// (0x0002bd8b) cell_hc_apps_pane_g3_ParamLimits

0xd3c8,	// (0x0002bd8b) cell_hc_apps_pane_g3

0x0002,

0xfcb0,	// (0x0002e673) cell_hc_apps_pane_g_ParamLimits

0xfcb0,	// (0x0002e673) cell_hc_apps_pane_g

0xd3ea,	// (0x0002bdad) cell_hc_apps_pane_t1_ParamLimits

0xd3ea,	// (0x0002bdad) cell_hc_apps_pane_t1

0x1702,	// (0x000200c5) grid_highlight_pane_cp10_ParamLimits

0x1702,	// (0x000200c5) grid_highlight_pane_cp10

0xd42a,	// (0x0002bded) list_single_hc_apps_pane_ParamLimits

0xd42a,	// (0x0002bded) list_single_hc_apps_pane

0xd469,	// (0x0002be2c) list_single_hc_apps_pane_g1

0x5e74,	// (0x00024837) list_single_hc_apps_pane_g2

0x0001,

0xfcb7,	// (0x0002e67a) list_single_hc_apps_pane_g

0x5e8d,	// (0x00024850) list_single_hc_apps_pane_g2_copy1

0x5ea9,	// (0x0002486c) list_single_hc_apps_pane_t1

0x15b5,	// (0x0001ff78) bg_set_opt_pane_cp_ParamLimits

0x63e4,	// (0x00024da7) setting_slider_pane_t1_ParamLimits

0x63fd,	// (0x00024dc0) setting_slider_pane_t2_ParamLimits

0x6417,	// (0x00024dda) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002defc) setting_slider_pane_t_ParamLimits

0x642f,	// (0x00024df2) slider_set_pane_ParamLimits

0x7499,	// (0x00025e5c) control_pane_g5_ParamLimits

0x7499,	// (0x00025e5c) control_pane_g5

0xad05,	// (0x000296c8) slider_set_pane_g1_ParamLimits

0x7ec9,	// (0x0002688c) slider_set_pane_g2_ParamLimits

0x7ed5,	// (0x00026898) slider_set_pane_g3_ParamLimits

0x7ee9,	// (0x000268ac) slider_set_pane_g4_ParamLimits

0x7f01,	// (0x000268c4) slider_set_pane_g5_ParamLimits

0x7ed5,	// (0x00026898) slider_set_pane_g6_ParamLimits

0x7f17,	// (0x000268da) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0002e302) slider_set_pane_g_ParamLimits

0x728b,	// (0x00025c4e) navi_icon_text_pane_ParamLimits

0x9492,	// (0x00027e55) aid_fill_nsta_2_ParamLimits

0x94d3,	// (0x00027e96) aid_touch_tab_arrow_left_ParamLimits

0x94df,	// (0x00027ea2) aid_touch_tab_arrow_right_ParamLimits

0x954b,	// (0x00027f0e) clock_nsta_pane_ParamLimits

0xa7e3,	// (0x000291a6) navi_icon_pane_g1_ParamLimits

0xa7ef,	// (0x000291b2) navi_text_pane_t1_ParamLimits

0xbbd3,	// (0x0002a596) navi_icon_text_pane_g1_ParamLimits

0xbbdf,	// (0x0002a5a2) navi_icon_text_pane_t1_ParamLimits

0xd469,	// (0x0002be2c) list_single_hc_apps_pane_g1_ParamLimits

0x5e74,	// (0x00024837) list_single_hc_apps_pane_g2_ParamLimits

0xfcb7,	// (0x0002e67a) list_single_hc_apps_pane_g_ParamLimits

0x5e8d,	// (0x00024850) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5ea9,	// (0x0002486c) list_single_hc_apps_pane_t1_ParamLimits

0x6218,	// (0x00024bdb) popup_toolbar2_fixed_window_ParamLimits

0x6218,	// (0x00024bdb) popup_toolbar2_fixed_window

0x7ad2,	// (0x00026495) popup_toolbar2_float_window

0x1545,	// (0x0001ff08) bg_popup_sub_pane_cp27

0xd482,	// (0x0002be45) grid_toolbar2_float_pane

0x1545,	// (0x0001ff08) bg_popup_sub_pane_cp26

0xd482,	// (0x0002be45) grid_toolbar2_fixed_pane

0xd48a,	// (0x0002be4d) cell_toolbar2_fixed_pane_ParamLimits

0xd48a,	// (0x0002be4d) cell_toolbar2_fixed_pane

0xd49a,	// (0x0002be5d) cell_toolbar2_fixed_pane_g1

0xd4a3,	// (0x0002be66) toolbar2_fixed_button_pane

0x9976,	// (0x00028339) toolbar2_fixed_button_pane_g1

0x997e,	// (0x00028341) toolbar2_fixed_button_pane_g2

0x9986,	// (0x00028349) toolbar2_fixed_button_pane_g3

0x998e,	// (0x00028351) toolbar2_fixed_button_pane_g4

0x9996,	// (0x00028359) toolbar2_fixed_button_pane_g5

0x999e,	// (0x00028361) toolbar2_fixed_button_pane_g6

0x99a6,	// (0x00028369) toolbar2_fixed_button_pane_g7

0x99ae,	// (0x00028371) toolbar2_fixed_button_pane_g8

0x99b6,	// (0x00028379) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0002e204) toolbar2_fixed_button_pane_g

0xd4ab,	// (0x0002be6e) cell_toolbar2_float_pane_ParamLimits

0xd4ab,	// (0x0002be6e) cell_toolbar2_float_pane

0xd4bc,	// (0x0002be7f) cell_toolbar2_float_pane_g1

0xd4a3,	// (0x0002be66) toolbar2_fixed_button_pane_cp

0xc0f8,	// (0x0002aabb) fep_vkb_accented_list_pane_ParamLimits

0xc0f8,	// (0x0002aabb) fep_vkb_accented_list_pane

0x8287,	// (0x00026c4a) bg_popup_fep_shadow_pane_g9

0x9119,	// (0x00027adc) bg_popup_fep_shadow_pane_cp3

0x32bb,	// (0x00021c7e) list_accented_list_pane

0xd4c5,	// (0x0002be88) list_single_accented_list_pane_ParamLimits

0xd4c5,	// (0x0002be88) list_single_accented_list_pane

0x9119,	// (0x00027adc) list_highlight_pane_cp10

0xd4d6,	// (0x0002be99) list_single_accented_list_pane_t1

0x7a18,	// (0x000263db) popup_slider_window_ParamLimits

0x7a18,	// (0x000263db) popup_slider_window

0xd124,	// (0x0002bae7) aid_indentation_list_msg

0xd5a6,	// (0x0002bf69) bg_popup_window_pane_cp19

0xd612,	// (0x0002bfd5) popup_slider_window_g1

0xd62e,	// (0x0002bff1) popup_slider_window_g2

0xd64a,	// (0x0002c00d) popup_slider_window_g3

0x0005,

0xfcbc,	// (0x0002e67f) popup_slider_window_g

0xd6b0,	// (0x0002c073) popup_slider_window_t1

0xd724,	// (0x0002c0e7) small_volume_slider_vertical_pane

0xbfc1,	// (0x0002a984) small_volume_slider_vertical_pane_g1

0xbfc1,	// (0x0002a984) small_volume_slider_vertical_pane_g2

0xd740,	// (0x0002c103) small_volume_slider_vertical_pane_g3

0x0002,

0xfcce,	// (0x0002e691) small_volume_slider_vertical_pane_g

0x5fd0,	// (0x00024993) area_side_right_pane_ParamLimits

0x5fd0,	// (0x00024993) area_side_right_pane

0x83e3,	// (0x00026da6) aid_size_side_button_ParamLimits

0x83e3,	// (0x00026da6) aid_size_side_button

0x83f7,	// (0x00026dba) grid_sctrl_middle_pane_ParamLimits

0x83f7,	// (0x00026dba) grid_sctrl_middle_pane

0x8416,	// (0x00026dd9) sctrl_sk_bottom_pane

0x8427,	// (0x00026dea) sctrl_sk_top_pane

0x8439,	// (0x00026dfc) aid_touch_sctrl_top

0x1702,	// (0x000200c5) bg_sctrl_sk_pane_ParamLimits

0x1702,	// (0x000200c5) bg_sctrl_sk_pane

0x8446,	// (0x00026e09) sctrl_sk_top_pane_g1

0x8453,	// (0x00026e16) sctrl_sk_top_pane_t1

0x8439,	// (0x00026dfc) aid_touch_sctrl_bottom

0x1702,	// (0x000200c5) bg_sctrl_sk_pane_cp_ParamLimits

0x1702,	// (0x000200c5) bg_sctrl_sk_pane_cp

0x846e,	// (0x00026e31) sctrl_sk_bottom_pane_g1

0x8453,	// (0x00026e16) sctrl_sk_bottom_pane_t1

0x8477,	// (0x00026e3a) cell_sctrl_middle_pane_ParamLimits

0x8477,	// (0x00026e3a) cell_sctrl_middle_pane

0x8494,	// (0x00026e57) aid_touch_sctrl_middle_ParamLimits

0x8494,	// (0x00026e57) aid_touch_sctrl_middle

0x3106,	// (0x00021ac9) bg_sctrl_middle_pane_ParamLimits

0x3106,	// (0x00021ac9) bg_sctrl_middle_pane

0xc23c,	// (0x0002abff) cell_sctrl_middle_pane_g1_ParamLimits

0xc23c,	// (0x0002abff) cell_sctrl_middle_pane_g1

0x84a6,	// (0x00026e69) cell_sctrl_middle_pane_g2_ParamLimits

0x84a6,	// (0x00026e69) cell_sctrl_middle_pane_g2

0x0001,

0xfcda,	// (0x0002e69d) cell_sctrl_middle_pane_g_ParamLimits

0xfcda,	// (0x0002e69d) cell_sctrl_middle_pane_g

0x9976,	// (0x00028339) bg_sctrl_middle_pane_g1

0x997e,	// (0x00028341) bg_sctrl_middle_pane_g2

0x9986,	// (0x00028349) bg_sctrl_middle_pane_g3

0x998e,	// (0x00028351) bg_sctrl_middle_pane_g4

0x9996,	// (0x00028359) bg_sctrl_middle_pane_g5

0x999e,	// (0x00028361) bg_sctrl_middle_pane_g6

0x99a6,	// (0x00028369) bg_sctrl_middle_pane_g7

0x99ae,	// (0x00028371) bg_sctrl_middle_pane_g8

0x0007,

0xfcdf,	// (0x0002e6a2) bg_sctrl_middle_pane_g

0x99b6,	// (0x00028379) bg_sctrl_middle_pane_g8_copy1

0x9976,	// (0x00028339) bg_sctrl_sk_pane_g1

0x997e,	// (0x00028341) bg_sctrl_sk_pane_g2

0x9986,	// (0x00028349) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0002e204) bg_sctrl_sk_pane_g

0x1b4a,	// (0x0002050d) aid_size_touch_scroll_bar

0x998e,	// (0x00028351) bg_sctrl_sk_pane_g4

0x9996,	// (0x00028359) bg_sctrl_sk_pane_g5

0x999e,	// (0x00028361) bg_sctrl_sk_pane_g6

0x99a6,	// (0x00028369) bg_sctrl_sk_pane_g7

0x99ae,	// (0x00028371) bg_sctrl_sk_pane_g8

0x99b6,	// (0x00028379) bg_sctrl_sk_pane_g9

0x762d,	// (0x00025ff0) popup_fep_china_hwr2_fs_candidate_window

0x7637,	// (0x00025ffa) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x7637,	// (0x00025ffa) popup_fep_china_hwr2_fs_control_window

0xc23c,	// (0x0002abff) sctrl_sk_top_pane_g2

0x0001,

0xfcd5,	// (0x0002e698) sctrl_sk_top_pane_g

0xd749,	// (0x0002c10c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd749,	// (0x0002c10c) aid_fep_china_hwr2_fs_cell

0xd75c,	// (0x0002c11f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd75c,	// (0x0002c11f) bg_popup_fep_shadow_pane_cp4

0xd775,	// (0x0002c138) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd775,	// (0x0002c138) bg_popup_fep_shadow_pane_cp5

0xd787,	// (0x0002c14a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd787,	// (0x0002c14a) popup_fep_china_hwr2_fs_control_bar_grid

0xd797,	// (0x0002c15a) popup_fep_china_hwr2_fs_control_funtion_grid

0xd79f,	// (0x0002c162) aid_fep_china_hwr2_fs_candi_cell

0x1545,	// (0x0001ff08) bg_popup_fep_shadow_pane_cp6

0xd7a9,	// (0x0002c16c) popup_fep_china_hwr2_fs_candidate_grid

0xd7b3,	// (0x0002c176) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7b3,	// (0x0002c176) cell_fep_china_hwr2_fs_funtion_grid

0xbfc1,	// (0x0002a984) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7cb,	// (0x0002c18e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7cb,	// (0x0002c18e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7d9,	// (0x0002c19c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7d9,	// (0x0002c19c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf0,	// (0x0002e6b3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf0,	// (0x0002e6b3) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7ef,	// (0x0002c1b2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7ef,	// (0x0002c1b2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd804,	// (0x0002c1c7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd804,	// (0x0002c1c7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf5,	// (0x0002e6b8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf5,	// (0x0002e6b8) cell_fep_china_hwr2_fs_funtion_grid_t

0xd820,	// (0x0002c1e3) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd828,	// (0x0002c1eb) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd830,	// (0x0002c1f3) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfa,	// (0x0002e6bd) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd838,	// (0x0002c1fb) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd838,	// (0x0002c1fb) cell_fep_china_hwr2_fs_candidate_grid

0xd857,	// (0x0002c21a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd85f,	// (0x0002c222) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfc1,	// (0x0002a984) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfc1,	// (0x0002a984) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x0002e4dd) cell_fep_china_hwr2_fs_candidate_grid_g

0xd867,	// (0x0002c22a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x955e,	// (0x00027f21) clock_nsta_pane_cp_24_ParamLimits

0x955e,	// (0x00027f21) clock_nsta_pane_cp_24

0x95de,	// (0x00027fa1) indicator_nsta_pane_cp_24_ParamLimits

0x95de,	// (0x00027fa1) indicator_nsta_pane_cp_24

0xa65f,	// (0x00029022) heading_pane_g1

0x0001,

0xf8a6,	// (0x0002e269) heading_pane_g

0xb0f7,	// (0x00029aba) grid_sct_catagory_button_pane

0xb129,	// (0x00029aec) scroll_pane_cp5_ParamLimits

0xbc21,	// (0x0002a5e4) button_value_adjust_pane_cp5_ParamLimits

0xbc21,	// (0x0002a5e4) button_value_adjust_pane_cp5

0xbd06,	// (0x0002a6c9) form2_midp_time_pane_ParamLimits

0xd875,	// (0x0002c238) cell_sct_catagory_button_pane_ParamLimits

0xd875,	// (0x0002c238) cell_sct_catagory_button_pane

0xbf86,	// (0x0002a949) bg_button_pane_cp01_ParamLimits

0xbf86,	// (0x0002a949) bg_button_pane_cp01

0xbfc1,	// (0x0002a984) cell_sct_catagory_button_pane_g1

0x7a59,	// (0x0002641c) popup_tb_extension_window

0xd887,	// (0x0002c24a) aid_size_cell_ext_ParamLimits

0xd887,	// (0x0002c24a) aid_size_cell_ext

0x1702,	// (0x000200c5) bg_tb_trans_pane_cp1_ParamLimits

0x1702,	// (0x000200c5) bg_tb_trans_pane_cp1

0xd8a7,	// (0x0002c26a) grid_tb_ext_pane_ParamLimits

0xd8a7,	// (0x0002c26a) grid_tb_ext_pane

0xd8d5,	// (0x0002c298) cell_tb_ext_pane_ParamLimits

0xd8d5,	// (0x0002c298) cell_tb_ext_pane

0xd8ec,	// (0x0002c2af) cell_tb_ext_pane_g1_ParamLimits

0xd8ec,	// (0x0002c2af) cell_tb_ext_pane_g1

0xd909,	// (0x0002c2cc) cell_tb_ext_pane_t1

0x1702,	// (0x000200c5) list_highlight_pane_cp11_ParamLimits

0x1702,	// (0x000200c5) list_highlight_pane_cp11

0x6237,	// (0x00024bfa) popup_uni_indicator_window_ParamLimits

0x6237,	// (0x00024bfa) popup_uni_indicator_window

0x3106,	// (0x00021ac9) bg_popup_sub_pane_cp14

0xd924,	// (0x0002c2e7) list_uniindi_pane

0xd930,	// (0x0002c2f3) uniindi_top_pane

0x1702,	// (0x000200c5) bg_uniindi_top_pane

0xd951,	// (0x0002c314) uniindi_top_pane_g1

0xd967,	// (0x0002c32a) uniindi_top_pane_g2

0x0003,

0xfd01,	// (0x0002e6c4) uniindi_top_pane_g

0xd991,	// (0x0002c354) uniindi_top_pane_t1

0xd9bd,	// (0x0002c380) list_single_uniindi_pane_ParamLimits

0xd9bd,	// (0x0002c380) list_single_uniindi_pane

0xbfc1,	// (0x0002a984) bg_uniindi_top_pane_g1

0xd9d0,	// (0x0002c393) list_single_uniindi_pane_g1

0xd9e3,	// (0x0002c3a6) list_single_uniindi_pane_t1

0x1545,	// (0x0001ff08) control_bg_pane

0xda08,	// (0x0002c3cb) bg_sctrl_sk_pane_cp1

0xda11,	// (0x0002c3d4) bg_sctrl_sk_pane_cp2

0xda1a,	// (0x0002c3dd) control_bg_pane_g1

0xda23,	// (0x0002c3e6) control_bg_pane_g2

0x0001,

0xfd0a,	// (0x0002e6cd) control_bg_pane_g

0xba59,	// (0x0002a41c) cell_indicator_nsta_pane_g1_ParamLimits

0xba67,	// (0x0002a42a) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x0002e441) cell_indicator_nsta_pane_g_ParamLimits

0x5b49,	// (0x0002450c) form2_midp_time_pane_t1_ParamLimits

0x198c,	// (0x0002034f) main_idle_act4_pane_ParamLimits

0x198c,	// (0x0002034f) main_idle_act4_pane

0x7a59,	// (0x0002641c) popup_tb_extension_window_ParamLimits

0xd8c7,	// (0x0002c28a) tb_ext_find_pane_ParamLimits

0xd8c7,	// (0x0002c28a) tb_ext_find_pane

0xda2c,	// (0x0002c3ef) ai_gene_pane_1_cp1

0x9263,	// (0x00027c26) ai_gene_pane_2_cp1

0xda34,	// (0x0002c3f7) list_single_idle_plugin_calendar_pane

0xda3d,	// (0x0002c400) list_single_idle_plugin_notification_pane

0xda46,	// (0x0002c409) list_single_idle_plugin_player_pane

0xda4f,	// (0x0002c412) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda4f,	// (0x0002c412) list_single_idle_plugin_shortcut_pane

0xda71,	// (0x0002c434) main_idle_act4_pane_t1

0xda83,	// (0x0002c446) main_idle_act4_pane_t2

0x0001,

0xfd0f,	// (0x0002e6d2) main_idle_act4_pane_t

0xda95,	// (0x0002c458) middle_sk_idle_act4_pane_ParamLimits

0xda95,	// (0x0002c458) middle_sk_idle_act4_pane

0xdaab,	// (0x0002c46e) popup_clock_digital_analogue_window_cp2

0xdac5,	// (0x0002c488) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac5,	// (0x0002c488) shortcut_wheel_idle_act4_pane

0xbfc1,	// (0x0002a984) shortcut_wheel_idle_act4_pane_g1

0xbfc1,	// (0x0002a984) shortcut_wheel_idle_act4_pane_g2

0xbfc1,	// (0x0002a984) shortcut_wheel_idle_act4_pane_g3

0xbfc1,	// (0x0002a984) shortcut_wheel_idle_act4_pane_g4

0xbfc1,	// (0x0002a984) shortcut_wheel_idle_act4_pane_g5

0xdad9,	// (0x0002c49c) shortcut_wheel_idle_act4_pane_g6

0xdae1,	// (0x0002c4a4) shortcut_wheel_idle_act4_pane_g7

0xdae9,	// (0x0002c4ac) shortcut_wheel_idle_act4_pane_g8

0xdaf1,	// (0x0002c4b4) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd14,	// (0x0002e6d7) shortcut_wheel_idle_act4_pane_g

0xc23c,	// (0x0002abff) middle_sk_idle_act4_pane_g1_ParamLimits

0xc23c,	// (0x0002abff) middle_sk_idle_act4_pane_g1

0xdb55,	// (0x0002c518) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb55,	// (0x0002c518) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x0002e6fa) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x0002e6fa) middle_sk_idle_act4_pane_g

0xdb61,	// (0x0002c524) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb61,	// (0x0002c524) middle_sk_idle_act4_pane_t1

0xdb7e,	// (0x0002c541) grid_ai_shortcut_pane_ParamLimits

0xdb7e,	// (0x0002c541) grid_ai_shortcut_pane

0xdb97,	// (0x0002c55a) list_highlight_pane_cp16_ParamLimits

0xdb97,	// (0x0002c55a) list_highlight_pane_cp16

0xdba4,	// (0x0002c567) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdba4,	// (0x0002c567) list_single_idle_plugin_shortcut_pane_g1

0xdbb0,	// (0x0002c573) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb0,	// (0x0002c573) list_single_idle_plugin_shortcut_pane_g2

0xdbca,	// (0x0002c58d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbca,	// (0x0002c58d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3c,	// (0x0002e6ff) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3c,	// (0x0002e6ff) list_single_idle_plugin_shortcut_pane_g

0xdbdd,	// (0x0002c5a0) cell_ai_shortcut_pane_ParamLimits

0xdbdd,	// (0x0002c5a0) cell_ai_shortcut_pane

0xdc00,	// (0x0002c5c3) cell_ai_shortcut_pane_g1_ParamLimits

0xdc00,	// (0x0002c5c3) cell_ai_shortcut_pane_g1

0xda2c,	// (0x0002c3ef) ai_gene_pane_1_cp2

0xdc22,	// (0x0002c5e5) ai_gene_pane_2_cp2

0xdc2a,	// (0x0002c5ed) list_highlight_pane_cp15

0xdc33,	// (0x0002c5f6) list_single_idle_plugin_calendar_pane_g1

0xdc2a,	// (0x0002c5ed) list_highlight_pane_cp17

0xdc3b,	// (0x0002c5fe) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc43,	// (0x0002c606) list_single_idle_plugin_player_pane_g1

0xb35e,	// (0x00029d21) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd43,	// (0x0002e706) list_single_idle_plugin_player_pane_g

0xdc4b,	// (0x0002c60e) list_single_idle_plugin_player_pane_t1

0xdc59,	// (0x0002c61c) list_single_idle_plugin_player_pane_t2

0xdc67,	// (0x0002c62a) list_single_idle_plugin_player_pane_t3

0xdc75,	// (0x0002c638) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd48,	// (0x0002e70b) list_single_idle_plugin_player_pane_t

0xdc83,	// (0x0002c646) wait_bar_pane_cp15

0xdc8b,	// (0x0002c64e) grid_ai_notification_pane

0xb35e,	// (0x00029d21) list_single_idle_plugin_notification_pane_g1

0xdc94,	// (0x0002c657) cell_ai_notification_pane_ParamLimits

0xdc94,	// (0x0002c657) cell_ai_notification_pane

0xdca1,	// (0x0002c664) cell_ai_notification_pane_g1

0xdca9,	// (0x0002c66c) cell_ai_notification_pane_t1

0xdcb7,	// (0x0002c67a) tb_ext_find_button_pane

0xdcbf,	// (0x0002c682) tb_ext_find_pane_g1

0xdcc7,	// (0x0002c68a) tb_ext_find_pane_t1

0x6bcb,	// (0x0002558e) tb_ext_find_button_pane_g1

0xdcd5,	// (0x0002c698) tb_ext_find_button_pane_g2

0x0001,

0xfd51,	// (0x0002e714) tb_ext_find_button_pane_g

0xda71,	// (0x0002c434) main_idle_act4_pane_t1_ParamLimits

0xda83,	// (0x0002c446) main_idle_act4_pane_t2_ParamLimits

0xfd0f,	// (0x0002e6d2) main_idle_act4_pane_t_ParamLimits

0xdaab,	// (0x0002c46e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdab9,	// (0x0002c47c) sat_plugin_idle_act4_pane_ParamLimits

0xdab9,	// (0x0002c47c) sat_plugin_idle_act4_pane

0xdcde,	// (0x0002c6a1) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcde,	// (0x0002c6a1) sat_plugin_idle_act4_pane_t1

0xdcf1,	// (0x0002c6b4) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf1,	// (0x0002c6b4) sat_plugin_idle_act4_pane_t2

0xdd04,	// (0x0002c6c7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd04,	// (0x0002c6c7) sat_plugin_idle_act4_pane_t3

0xdd17,	// (0x0002c6da) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd17,	// (0x0002c6da) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd56,	// (0x0002e719) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd56,	// (0x0002e719) sat_plugin_idle_act4_pane_t

0x6168,	// (0x00024b2b) popup_battery_window_ParamLimits

0x6168,	// (0x00024b2b) popup_battery_window

0x1702,	// (0x000200c5) bg_popup_sub_pane_cp25_ParamLimits

0x1702,	// (0x000200c5) bg_popup_sub_pane_cp25

0xdd2a,	// (0x0002c6ed) popup_battery_window_g1_ParamLimits

0xdd2a,	// (0x0002c6ed) popup_battery_window_g1

0xdd36,	// (0x0002c6f9) popup_battery_window_t1_ParamLimits

0xdd36,	// (0x0002c6f9) popup_battery_window_t1

0xdd48,	// (0x0002c70b) popup_battery_window_t2_ParamLimits

0xdd48,	// (0x0002c70b) popup_battery_window_t2

0x0001,

0xfd5f,	// (0x0002e722) popup_battery_window_t_ParamLimits

0xfd5f,	// (0x0002e722) popup_battery_window_t

0x912d,	// (0x00027af0) midp_canvas_pane_ParamLimits

0x91a5,	// (0x00027b68) midp_keypad_pane_ParamLimits

0x91a5,	// (0x00027b68) midp_keypad_pane

0x9440,	// (0x00027e03) main_midp_pane_ParamLimits

0xbad4,	// (0x0002a497) signal_pane_g2_cp_ParamLimits

0xdd65,	// (0x0002c728) aid_size_cell_midp_keypad_ParamLimits

0xdd65,	// (0x0002c728) aid_size_cell_midp_keypad

0xdd7f,	// (0x0002c742) midp_keyp_game_grid_pane_ParamLimits

0xdd7f,	// (0x0002c742) midp_keyp_game_grid_pane

0xdd9f,	// (0x0002c762) midp_keyp_rocker_pane_ParamLimits

0xdd9f,	// (0x0002c762) midp_keyp_rocker_pane

0xddce,	// (0x0002c791) midp_keyp_sk_left_pane_ParamLimits

0xddce,	// (0x0002c791) midp_keyp_sk_left_pane

0xde2a,	// (0x0002c7ed) midp_keyp_sk_right_pane_ParamLimits

0xde2a,	// (0x0002c7ed) midp_keyp_sk_right_pane

0x1545,	// (0x0001ff08) bg_button_pane_cp03

0xde86,	// (0x0002c849) midp_keyp_sk_left_pane_g1

0x1545,	// (0x0001ff08) bg_button_pane_cp04

0xde86,	// (0x0002c849) midp_keyp_sk_right_pane_g1

0xbfc1,	// (0x0002a984) midp_keyp_rocker_pane_g1

0xde8e,	// (0x0002c851) keyp_game_cell_pane_ParamLimits

0xde8e,	// (0x0002c851) keyp_game_cell_pane

0x1545,	// (0x0001ff08) bg_button_pane_cp02

0xdea1,	// (0x0002c864) keyp_game_cell_pane_g1

0x61b2,	// (0x00024b75) popup_fep_vkb2_window_ParamLimits

0x61b2,	// (0x00024b75) popup_fep_vkb2_window

0x84c4,	// (0x00026e87) aid_size_cell_vkb2_ParamLimits

0x84c4,	// (0x00026e87) aid_size_cell_vkb2

0x8510,	// (0x00026ed3) popup_fep_vkb2_window_g1_ParamLimits

0x8510,	// (0x00026ed3) popup_fep_vkb2_window_g1

0x8558,	// (0x00026f1b) vkb2_area_bottom_pane_ParamLimits

0x8558,	// (0x00026f1b) vkb2_area_bottom_pane

0x85ac,	// (0x00026f6f) vkb2_area_keypad_pane_ParamLimits

0x85ac,	// (0x00026f6f) vkb2_area_keypad_pane

0x85f2,	// (0x00026fb5) vkb2_area_top_pane_ParamLimits

0x85f2,	// (0x00026fb5) vkb2_area_top_pane

0x8672,	// (0x00027035) vkb2_top_entry_pane_ParamLimits

0x8672,	// (0x00027035) vkb2_top_entry_pane

0x869c,	// (0x0002705f) vkb2_top_grid_left_pane_ParamLimits

0x869c,	// (0x0002705f) vkb2_top_grid_left_pane

0x86bb,	// (0x0002707e) vkb2_top_grid_right_pane_ParamLimits

0x86bb,	// (0x0002707e) vkb2_top_grid_right_pane

0x86da,	// (0x0002709d) vkb2_cell_keypad_pane_ParamLimits

0x86da,	// (0x0002709d) vkb2_cell_keypad_pane

0x87ab,	// (0x0002716e) vkb2_area_bottom_grid_pane_ParamLimits

0x87ab,	// (0x0002716e) vkb2_area_bottom_grid_pane

0x87d1,	// (0x00027194) vkb2_area_bottom_pane_g1_ParamLimits

0x87d1,	// (0x00027194) vkb2_area_bottom_pane_g1

0x87f5,	// (0x000271b8) vkb2_area_bottom_pane_g2_ParamLimits

0x87f5,	// (0x000271b8) vkb2_area_bottom_pane_g2

0x8823,	// (0x000271e6) vkb2_area_bottom_pane_g3_ParamLimits

0x8823,	// (0x000271e6) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x0002e727) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x0002e727) vkb2_area_bottom_pane_g

0x8884,	// (0x00027247) vkb2_top_cell_left_pane_ParamLimits

0x8884,	// (0x00027247) vkb2_top_cell_left_pane

0xdeb2,	// (0x0002c875) vkb2_top_entry_pane_g1_ParamLimits

0xdeb2,	// (0x0002c875) vkb2_top_entry_pane_g1

0xdec0,	// (0x0002c883) vkb2_top_entry_pane_t1_ParamLimits

0xdec0,	// (0x0002c883) vkb2_top_entry_pane_t1

0xdef2,	// (0x0002c8b5) vkb2_top_entry_pane_t2_ParamLimits

0xdef2,	// (0x0002c8b5) vkb2_top_entry_pane_t2

0xdf24,	// (0x0002c8e7) vkb2_top_entry_pane_t3_ParamLimits

0xdf24,	// (0x0002c8e7) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x0002e72e) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x0002e72e) vkb2_top_entry_pane_t

0x88d1,	// (0x00027294) vkb2_top_grid_right_pane_g1_ParamLimits

0x88d1,	// (0x00027294) vkb2_top_grid_right_pane_g1

0x88e7,	// (0x000272aa) vkb2_top_grid_right_pane_g2_ParamLimits

0x88e7,	// (0x000272aa) vkb2_top_grid_right_pane_g2

0x88ff,	// (0x000272c2) vkb2_top_grid_right_pane_g3_ParamLimits

0x88ff,	// (0x000272c2) vkb2_top_grid_right_pane_g3

0x8917,	// (0x000272da) vkb2_top_grid_right_pane_g4_ParamLimits

0x8917,	// (0x000272da) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x0002e735) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x0002e735) vkb2_top_grid_right_pane_g

0x892d,	// (0x000272f0) vkb2_top_cell_left_pane_g1

0x8944,	// (0x00027307) vkb2_cell_keypad_pane_g1_ParamLimits

0x8944,	// (0x00027307) vkb2_cell_keypad_pane_g1

0xdf48,	// (0x0002c90b) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf48,	// (0x0002c90b) vkb2_cell_keypad_pane_t1

0x8952,	// (0x00027315) vkb2_cell_bottom_grid_pane_ParamLimits

0x8952,	// (0x00027315) vkb2_cell_bottom_grid_pane

0x898b,	// (0x0002734e) vkb2_cell_bottom_grid_pane_g1

0xdaf9,	// (0x0002c4bc) aid_call2_pane_cp02

0xdb01,	// (0x0002c4c4) aid_call_pane_cp02

0xdb09,	// (0x0002c4cc) clock_digital_number_pane_cp10

0xdb11,	// (0x0002c4d4) clock_digital_number_pane_cp11

0xdb19,	// (0x0002c4dc) clock_digital_number_pane_cp12

0xdb21,	// (0x0002c4e4) clock_digital_number_pane_cp13

0xdb29,	// (0x0002c4ec) clock_digital_separator_pane_cp10

0x6bcb,	// (0x0002558e) popup_clock_digital_analogue_window_cp2_g1

0x6bcb,	// (0x0002558e) popup_clock_digital_analogue_window_cp2_g2

0xdb31,	// (0x0002c4f4) popup_clock_digital_analogue_window_cp2_g3

0x6bcb,	// (0x0002558e) popup_clock_digital_analogue_window_cp2_g4

0xdb31,	// (0x0002c4f4) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd27,	// (0x0002e6ea) popup_clock_digital_analogue_window_cp2_g

0xdb39,	// (0x0002c4fc) popup_clock_digital_analogue_window_cp2_t1

0xdb47,	// (0x0002c50a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd32,	// (0x0002e6f5) popup_clock_digital_analogue_window_cp2_t

0xbfc1,	// (0x0002a984) clock_digital_number_pane_cp10_g1

0xbfc1,	// (0x0002a984) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002e4dd) clock_digital_number_pane_cp10_g

0xbfc1,	// (0x0002a984) clock_digital_separator_pane_cp10_g1

0xbfc1,	// (0x0002a984) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x0002e4dd) clock_digital_separator_pane_cp10_g

0xd973,	// (0x0002c336) uniindi_top_pane_g3

0xd984,	// (0x0002c347) uniindi_top_pane_g4

0x8765,	// (0x00027128) vkb2_row_keypad_pane_ParamLimits

0x8765,	// (0x00027128) vkb2_row_keypad_pane

0x89a7,	// (0x0002736a) vkb2_cell_t_keypad_pane_ParamLimits

0x89a7,	// (0x0002736a) vkb2_cell_t_keypad_pane

0x89b7,	// (0x0002737a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x89b7,	// (0x0002737a) vkb2_cell_t_keypad_pane_cp08

0x89cc,	// (0x0002738f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x89cc,	// (0x0002738f) vkb2_cell_t_keypad_pane_cp09

0x89e0,	// (0x000273a3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x89e0,	// (0x000273a3) vkb2_cell_t_keypad_pane_cp01

0x89f1,	// (0x000273b4) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x89f1,	// (0x000273b4) vkb2_cell_t_keypad_pane_cp02

0x8a02,	// (0x000273c5) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8a02,	// (0x000273c5) vkb2_cell_t_keypad_pane_cp03

0x8a13,	// (0x000273d6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8a13,	// (0x000273d6) vkb2_cell_t_keypad_pane_cp04

0x8a24,	// (0x000273e7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8a24,	// (0x000273e7) vkb2_cell_t_keypad_pane_cp05

0x8a35,	// (0x000273f8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8a35,	// (0x000273f8) vkb2_cell_t_keypad_pane_cp06

0x8a48,	// (0x0002740b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8a48,	// (0x0002740b) vkb2_cell_t_keypad_pane_cp07

0x8a5d,	// (0x00027420) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8a5d,	// (0x00027420) vkb2_cell_t_keypad_pane_cp10

0xc23c,	// (0x0002abff) vkb2_cell_t_keypad_pane_g1

0xdf5f,	// (0x0002c922) vkb2_cell_t_keypad_pane_t1

0x1545,	// (0x0001ff08) popup_grid_graphic2_window

0xdf71,	// (0x0002c934) aid_size_cell_graphic2_ParamLimits

0xdf71,	// (0x0002c934) aid_size_cell_graphic2

0xdfa9,	// (0x0002c96c) bg_popup_window_pane_cp21_ParamLimits

0xdfa9,	// (0x0002c96c) bg_popup_window_pane_cp21

0xdfb7,	// (0x0002c97a) graphic2_pages_pane_ParamLimits

0xdfb7,	// (0x0002c97a) graphic2_pages_pane

0xdffd,	// (0x0002c9c0) grid_graphic2_control_pane_ParamLimits

0xdffd,	// (0x0002c9c0) grid_graphic2_control_pane

0xe03b,	// (0x0002c9fe) grid_graphic2_pane_ParamLimits

0xe03b,	// (0x0002c9fe) grid_graphic2_pane

0xe0b1,	// (0x0002ca74) cell_graphic2_pane

0x1545,	// (0x0001ff08) main_comp_mode_pane

0xd1e0,	// (0x0002bba3) list_ai3_gene_pane_ParamLimits

0xd5a6,	// (0x0002bf69) bg_popup_window_pane_cp19_ParamLimits

0xd5b2,	// (0x0002bf75) bg_touch_area_indi_pane_ParamLimits

0xd5b2,	// (0x0002bf75) bg_touch_area_indi_pane

0xd5c8,	// (0x0002bf8b) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5c8,	// (0x0002bf8b) bg_touch_area_indi_pane_cp01

0xd5de,	// (0x0002bfa1) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5de,	// (0x0002bfa1) bg_touch_area_indi_pane_cp02

0xd5f8,	// (0x0002bfbb) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5f8,	// (0x0002bfbb) bg_touch_area_indi_pane_cp03

0xd612,	// (0x0002bfd5) popup_slider_window_g1_ParamLimits

0xd62e,	// (0x0002bff1) popup_slider_window_g2_ParamLimits

0xd64a,	// (0x0002c00d) popup_slider_window_g3_ParamLimits

0xfcbc,	// (0x0002e67f) popup_slider_window_g_ParamLimits

0xd6b0,	// (0x0002c073) popup_slider_window_t1_ParamLimits

0xd724,	// (0x0002c0e7) small_volume_slider_vertical_pane_ParamLimits

0xe0b1,	// (0x0002ca74) cell_graphic2_pane_ParamLimits

0xe105,	// (0x0002cac8) bg_button_pane_cp10_ParamLimits

0xe105,	// (0x0002cac8) bg_button_pane_cp10

0xe11a,	// (0x0002cadd) bg_button_pane_cp11_ParamLimits

0xe11a,	// (0x0002cadd) bg_button_pane_cp11

0xe12f,	// (0x0002caf2) graphic2_pages_pane_g1_ParamLimits

0xe12f,	// (0x0002caf2) graphic2_pages_pane_g1

0xe14a,	// (0x0002cb0d) graphic2_pages_pane_g2_ParamLimits

0xe14a,	// (0x0002cb0d) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x0002e743) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x0002e743) graphic2_pages_pane_g

0xe162,	// (0x0002cb25) graphic2_pages_pane_t1_ParamLimits

0xe162,	// (0x0002cb25) graphic2_pages_pane_t1

0xe178,	// (0x0002cb3b) cell_graphic2_control_pane_ParamLimits

0xe178,	// (0x0002cb3b) cell_graphic2_control_pane

0xe198,	// (0x0002cb5b) cell_graphic2_pane_g1_ParamLimits

0xe198,	// (0x0002cb5b) cell_graphic2_pane_g1

0xe1a5,	// (0x0002cb68) cell_graphic2_pane_g2_ParamLimits

0xe1a5,	// (0x0002cb68) cell_graphic2_pane_g2

0xe1b2,	// (0x0002cb75) cell_graphic2_pane_g3_ParamLimits

0xe1b2,	// (0x0002cb75) cell_graphic2_pane_g3

0xe1bf,	// (0x0002cb82) cell_graphic2_pane_g4_ParamLimits

0xe1bf,	// (0x0002cb82) cell_graphic2_pane_g4

0xe1cc,	// (0x0002cb8f) cell_graphic2_pane_g5_ParamLimits

0xe1cc,	// (0x0002cb8f) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x0002e748) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x0002e748) cell_graphic2_pane_g

0xe1e4,	// (0x0002cba7) cell_graphic2_pane_t1_ParamLimits

0xe1e4,	// (0x0002cba7) cell_graphic2_pane_t1

0x99ea,	// (0x000283ad) grid_highlight_pane_cp11_ParamLimits

0x99ea,	// (0x000283ad) grid_highlight_pane_cp11

0x1702,	// (0x000200c5) bg_button_pane_cp05

0xe21a,	// (0x0002cbdd) cell_graphic2_control_pane_g1

0xbfc1,	// (0x0002a984) bg_touch_area_indi_pane_g1

0xe242,	// (0x0002cc05) aid_cmod_rocker_key_size

0xe24c,	// (0x0002cc0f) aid_cmode_itu_key_size

0xe256,	// (0x0002cc19) main_cmode_video_pane

0xe260,	// (0x0002cc23) main_comp_mode_itu_pane

0xe26c,	// (0x0002cc2f) main_comp_mode_rocker_pane

0xe278,	// (0x0002cc3b) cell_cmode_rocker_pane_ParamLimits

0xe278,	// (0x0002cc3b) cell_cmode_rocker_pane

0xe28c,	// (0x0002cc4f) cell_cmode_itu_pane_ParamLimits

0xe28c,	// (0x0002cc4f) cell_cmode_itu_pane

0x3106,	// (0x00021ac9) bg_button_pane_cp06_ParamLimits

0x3106,	// (0x00021ac9) bg_button_pane_cp06

0xc23c,	// (0x0002abff) cell_cmode_rocker_pane_g1_ParamLimits

0xc23c,	// (0x0002abff) cell_cmode_rocker_pane_g1

0xd7cb,	// (0x0002c18e) cell_cmode_rocker_pane_g2_ParamLimits

0xd7cb,	// (0x0002c18e) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x0002e758) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x0002e758) cell_cmode_rocker_pane_g

0x1545,	// (0x0001ff08) bg_button_pane_cp07

0xe2a3,	// (0x0002cc66) cell_cmode_itu_pane_g1

0xe2ac,	// (0x0002cc6f) cell_cmode_itu_pane_t1

0xe2ba,	// (0x0002cc7d) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x0002e75d) cell_cmode_itu_pane_t

0xd9f8,	// (0x0002c3bb) aid_touch_ctrl_left

0xda00,	// (0x0002c3c3) aid_touch_ctrl_right

0x1545,	// (0x0001ff08) compa_mode_pane

0xe2c8,	// (0x0002cc8b) aid_cmod_rocker_key_size_cp

0xe2d2,	// (0x0002cc95) aid_cmode_itu_key_size_cp

0xe2dc,	// (0x0002cc9f) compa_mode_pane_g1

0xe2e4,	// (0x0002cca7) compa_mode_pane_g2

0xe2ec,	// (0x0002ccaf) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x0002e762) compa_mode_pane_g

0xe2f4,	// (0x0002ccb7) main_comp_mode_itu_pane_cp

0xe2fc,	// (0x0002ccbf) main_comp_mode_rocker_pane_cp

0xe304,	// (0x0002ccc7) cell_cmode_itu_pane_cp_ParamLimits

0xe304,	// (0x0002ccc7) cell_cmode_itu_pane_cp

0xe319,	// (0x0002ccdc) cell_cmode_rocker_pane_cp_ParamLimits

0xe319,	// (0x0002ccdc) cell_cmode_rocker_pane_cp

0x3106,	// (0x00021ac9) bg_button_pane_cp06_cp_ParamLimits

0x3106,	// (0x00021ac9) bg_button_pane_cp06_cp

0xc23c,	// (0x0002abff) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc23c,	// (0x0002abff) cell_cmode_rocker_pane_g1_cp

0xbfc1,	// (0x0002a984) cell_cmode_rocker_pane_g2_cp

0x1545,	// (0x0001ff08) bg_button_pane_cp07_cp

0xe32b,	// (0x0002ccee) cell_cmode_itu_pane_g1_cp

0xe334,	// (0x0002ccf7) cell_cmode_itu_pane_t1_cp

0xe334,	// (0x0002ccf7) cell_cmode_itu_pane_t2_cp

0xaec1,	// (0x00029884) settings_code_pane_cp2

0x15b5,	// (0x0001ff78) bg_popup_window_pane_cp3_ParamLimits

0x1916,	// (0x000202d9) heading_pane_cp3_ParamLimits

0x1925,	// (0x000202e8) listscroll_popup_graphic_pane_ParamLimits

0x8055,	// (0x00026a18) fep_hwr_aid_pane_ParamLimits

0x8439,	// (0x00026dfc) aid_touch_sctrl_top_ParamLimits

0x8446,	// (0x00026e09) sctrl_sk_top_pane_g1_ParamLimits

0xc23c,	// (0x0002abff) sctrl_sk_top_pane_g2_ParamLimits

0xfcd5,	// (0x0002e698) sctrl_sk_top_pane_g_ParamLimits

0x8453,	// (0x00026e16) sctrl_sk_top_pane_t1_ParamLimits

0x8439,	// (0x00026dfc) aid_touch_sctrl_bottom_ParamLimits

0x8453,	// (0x00026e16) sctrl_sk_bottom_pane_t1_ParamLimits

0xd93d,	// (0x0002c300) aid_area_touch_clock

0x8638,	// (0x00026ffb) aid_vkb2_area_top_pane_cell_ParamLimits

0x8638,	// (0x00026ffb) aid_vkb2_area_top_pane_cell

0x8787,	// (0x0002714a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8787,	// (0x0002714a) aid_vkb2_area_bottom_pane_cell

0xdeaa,	// (0x0002c86d) popup_char_count_window

0xe342,	// (0x0002cd05) popup_char_count_window_g1

0xe34b,	// (0x0002cd0e) popup_char_count_window_g2

0xe354,	// (0x0002cd17) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x0002e769) popup_char_count_window_g

0xe35d,	// (0x0002cd20) popup_char_count_window_t1

0x84ee,	// (0x00026eb1) popup_fep_char_preview_window_ParamLimits

0x84ee,	// (0x00026eb1) popup_fep_char_preview_window

0x8656,	// (0x00027019) vkb2_top_candi_pane_ParamLimits

0x8656,	// (0x00027019) vkb2_top_candi_pane

0xe36b,	// (0x0002cd2e) cell_vkb2_top_candi_pane_ParamLimits

0xe36b,	// (0x0002cd2e) cell_vkb2_top_candi_pane

0x9fdc,	// (0x0002899f) bg_popup_fep_char_preview_window_ParamLimits

0x9fdc,	// (0x0002899f) bg_popup_fep_char_preview_window

0x8a72,	// (0x00027435) popup_fep_char_preview_window_t1_ParamLimits

0x8a72,	// (0x00027435) popup_fep_char_preview_window_t1

0xe3b9,	// (0x0002cd7c) bg_popup_fep_char_preview_window_g1

0xe3c1,	// (0x0002cd84) bg_popup_fep_char_preview_window_g2

0xe3c9,	// (0x0002cd8c) bg_popup_fep_char_preview_window_g3

0xe3d1,	// (0x0002cd94) bg_popup_fep_char_preview_window_g4

0xe3d9,	// (0x0002cd9c) bg_popup_fep_char_preview_window_g5

0xe3e1,	// (0x0002cda4) bg_popup_fep_char_preview_window_g6

0xe3e9,	// (0x0002cdac) bg_popup_fep_char_preview_window_g7

0xe3f1,	// (0x0002cdb4) bg_popup_fep_char_preview_window_g8

0xe3f9,	// (0x0002cdbc) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdad,	// (0x0002e770) bg_popup_fep_char_preview_window_g

0xc23c,	// (0x0002abff) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc23c,	// (0x0002abff) cell_vkb2_top_candi_pane_g1

0xc57d,	// (0x0002af40) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc57d,	// (0x0002af40) cell_vkb2_top_candi_pane_g2

0xc59e,	// (0x0002af61) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc59e,	// (0x0002af61) cell_vkb2_top_candi_pane_g3

0x8ab4,	// (0x00027477) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8ab4,	// (0x00027477) cell_vkb2_top_candi_pane_g4

0xe401,	// (0x0002cdc4) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe401,	// (0x0002cdc4) cell_vkb2_top_candi_pane_g5

0xd7cb,	// (0x0002c18e) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7cb,	// (0x0002c18e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x0002e785) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x0002e785) cell_vkb2_top_candi_pane_g

0x8ad5,	// (0x00027498) cell_vkb2_top_candi_pane_t1

0x7eb5,	// (0x00026878) aid_size_touch_slider_mark_ParamLimits

0x7eb5,	// (0x00026878) aid_size_touch_slider_mark

0xdfed,	// (0x0002c9b0) grid_graphic2_catg_pane_ParamLimits

0xdfed,	// (0x0002c9b0) grid_graphic2_catg_pane

0xe08b,	// (0x0002ca4e) popup_grid_graphic2_window_t1_ParamLimits

0xe08b,	// (0x0002ca4e) popup_grid_graphic2_window_t1

0xe09d,	// (0x0002ca60) popup_grid_graphic2_window_t2_ParamLimits

0xe09d,	// (0x0002ca60) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x0002e73e) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x0002e73e) popup_grid_graphic2_window_t

0x1702,	// (0x000200c5) bg_button_pane_cp05_ParamLimits

0xe21a,	// (0x0002cbdd) cell_graphic2_control_pane_g1_ParamLimits

0xe422,	// (0x0002cde5) cell_graphic2_catg_pane_ParamLimits

0xe422,	// (0x0002cde5) cell_graphic2_catg_pane

0x1545,	// (0x0001ff08) bg_button_pane_cp12

0xe434,	// (0x0002cdf7) cell_graphic2_catg_pane_g1

0xd909,	// (0x0002c2cc) cell_tb_ext_pane_t1_ParamLimits

0x88a4,	// (0x00027267) vkb2_top_cell_right_narrow_pane_ParamLimits

0x88a4,	// (0x00027267) vkb2_top_cell_right_narrow_pane

0x88bc,	// (0x0002727f) vkb2_top_cell_right_wide_pane_ParamLimits

0x88bc,	// (0x0002727f) vkb2_top_cell_right_wide_pane

0x8047,	// (0x00026a0a) bg_vkb2_func_pane_ParamLimits

0x8047,	// (0x00026a0a) bg_vkb2_func_pane

0x892d,	// (0x000272f0) vkb2_top_cell_left_pane_g1_ParamLimits

0x8047,	// (0x00026a0a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x8047,	// (0x00026a0a) bg_vkb2_fuc_pane_cp03

0x898b,	// (0x0002734e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x997e,	// (0x00028341) bg_vkb2_func_pane_g1

0x9986,	// (0x00028349) bg_vkb2_func_pane_g2

0x9996,	// (0x00028359) bg_vkb2_func_pane_g3

0x998e,	// (0x00028351) bg_vkb2_func_pane_g4

0x999e,	// (0x00028361) bg_vkb2_func_pane_g5

0x99a6,	// (0x00028369) bg_vkb2_func_pane_g6

0x99ae,	// (0x00028371) bg_vkb2_func_pane_g7

0x99b6,	// (0x00028379) bg_vkb2_func_pane_g8

0x9976,	// (0x00028339) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x0002e792) bg_vkb2_func_pane_g

0x8047,	// (0x00026a0a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x8047,	// (0x00026a0a) bg_vkb2_fuc_pane_cp01

0x892d,	// (0x000272f0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x892d,	// (0x000272f0) vkb2_top_cell_right_wide_pane_g1

0x8047,	// (0x00026a0a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x8047,	// (0x00026a0a) bg_vkb2_fuc_pane_cp02

0x8af3,	// (0x000274b6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8af3,	// (0x000274b6) vkb2_top_cell_right_narrow_pane_g1

0xd520,	// (0x0002bee3) aid_touch_area_decrease_ParamLimits

0xd520,	// (0x0002bee3) aid_touch_area_decrease

0xd544,	// (0x0002bf07) aid_touch_area_increase_ParamLimits

0xd544,	// (0x0002bf07) aid_touch_area_increase

0xd55c,	// (0x0002bf1f) aid_touch_area_mute_ParamLimits

0xd55c,	// (0x0002bf1f) aid_touch_area_mute

0xd578,	// (0x0002bf3b) aid_touch_area_slider_ParamLimits

0xd578,	// (0x0002bf3b) aid_touch_area_slider

0xd666,	// (0x0002c029) popup_slider_window_g4_ParamLimits

0xd666,	// (0x0002c029) popup_slider_window_g4

0xd67e,	// (0x0002c041) popup_slider_window_g5_ParamLimits

0xd67e,	// (0x0002c041) popup_slider_window_g5

0xd6a0,	// (0x0002c063) popup_slider_window_g6_ParamLimits

0xd6a0,	// (0x0002c063) popup_slider_window_g6

0xd6de,	// (0x0002c0a1) popup_slider_window_t2_ParamLimits

0xd6de,	// (0x0002c0a1) popup_slider_window_t2

0x0001,

0xfcc9,	// (0x0002e68c) popup_slider_window_t_ParamLimits

0xfcc9,	// (0x0002e68c) popup_slider_window_t

0xd6f6,	// (0x0002c0b9) slider_pane_ParamLimits

0xd6f6,	// (0x0002c0b9) slider_pane

0xe43d,	// (0x0002ce00) slider_pane_g1_ParamLimits

0xe43d,	// (0x0002ce00) slider_pane_g1

0xe451,	// (0x0002ce14) slider_pane_g2_ParamLimits

0xe451,	// (0x0002ce14) slider_pane_g2

0xe467,	// (0x0002ce2a) slider_pane_g3_ParamLimits

0xe467,	// (0x0002ce2a) slider_pane_g3

0x0003,

0xfde2,	// (0x0002e7a5) slider_pane_g_ParamLimits

0xfde2,	// (0x0002e7a5) slider_pane_g

0x7abb,	// (0x0002647e) popup_tb_float_extension_window_ParamLimits

0x7abb,	// (0x0002647e) popup_tb_float_extension_window

0xe493,	// (0x0002ce56) aid_size_cell_tb_float_ext

0x1545,	// (0x0001ff08) bg_popup_sub_window_cp28

0xe49f,	// (0x0002ce62) grid_tb_float_ext_pane

0xe4ab,	// (0x0002ce6e) cell_tb_float_ext_pane_ParamLimits

0xe4ab,	// (0x0002ce6e) cell_tb_float_ext_pane

0xe4c7,	// (0x0002ce8a) cell_tb_float_ext_pane_g1

0xe4d0,	// (0x0002ce93) grid_highlight_pane_cp12

0x818e,	// (0x00026b51) cell_last_hwr_side_pane_ParamLimits

0x818e,	// (0x00026b51) cell_last_hwr_side_pane

0xbfc1,	// (0x0002a984) cell_last_hwr_side_pane_g1

0xe4d9,	// (0x0002ce9c) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x0002e7ae) cell_last_hwr_side_pane_g

0x8853,	// (0x00027216) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8853,	// (0x00027216) vkb2_area_bottom_space_btn_pane

0xc23c,	// (0x0002abff) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf5f,	// (0x0002c922) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8ad5,	// (0x00027498) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8b0f,	// (0x000274d2) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8b0f,	// (0x000274d2) vkb2_area_bottom_space_btn_pane_g1

0x8b49,	// (0x0002750c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8b49,	// (0x0002750c) vkb2_area_bottom_space_btn_pane_g2

0x8b7f,	// (0x00027542) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8b7f,	// (0x00027542) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x0002e7b3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x0002e7b3) vkb2_area_bottom_space_btn_pane_g

0x80fe,	// (0x00026ac1) cel_fep_hwr_func_pane_ParamLimits

0x80fe,	// (0x00026ac1) cel_fep_hwr_func_pane

0x813a,	// (0x00026afd) cell_hwr_side_button_pane_ParamLimits

0x813a,	// (0x00026afd) cell_hwr_side_button_pane

0xd93d,	// (0x0002c300) aid_area_touch_clock_ParamLimits

0x1702,	// (0x000200c5) bg_uniindi_top_pane_ParamLimits

0xd951,	// (0x0002c314) uniindi_top_pane_g1_ParamLimits

0xd967,	// (0x0002c32a) uniindi_top_pane_g2_ParamLimits

0xd973,	// (0x0002c336) uniindi_top_pane_g3_ParamLimits

0xd984,	// (0x0002c347) uniindi_top_pane_g4_ParamLimits

0xfd01,	// (0x0002e6c4) uniindi_top_pane_g_ParamLimits

0xd991,	// (0x0002c354) uniindi_top_pane_t1_ParamLimits

0x1702,	// (0x000200c5) bg_vkb2_func_pane_cp01_ParamLimits

0x1702,	// (0x000200c5) bg_vkb2_func_pane_cp01

0xe4e2,	// (0x0002cea5) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4e2,	// (0x0002cea5) cel_fep_hwr_func_pane_g1

0x1702,	// (0x000200c5) bg_vkb2_func_pane_cp02_ParamLimits

0x1702,	// (0x000200c5) bg_vkb2_func_pane_cp02

0xe4e2,	// (0x0002cea5) cell_hwr_side_button_pane_g1_ParamLimits

0xe4e2,	// (0x0002cea5) cell_hwr_side_button_pane_g1

0x97fb,	// (0x000281be) status_pane_g4_ParamLimits

0x97fb,	// (0x000281be) status_pane_g4

0x9815,	// (0x000281d8) status_pane_t1

0xbd74,	// (0x0002a737) form2_midp_gauge_slider_cont_pane

0xbd7c,	// (0x0002a73f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd8e,	// (0x0002a751) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbda0,	// (0x0002a763) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x0002e490) form2_midp_gauge_slider_pane_t_ParamLimits

0xbdb2,	// (0x0002a775) form2_midp_slider_pane_ParamLimits

0x84b6,	// (0x00026e79) aid_size_cell_func_vkb2_ParamLimits

0x84b6,	// (0x00026e79) aid_size_cell_func_vkb2

0xe47f,	// (0x0002ce42) slider_pane_g4_ParamLimits

0xe47f,	// (0x0002ce42) slider_pane_g4

0x8bc9,	// (0x0002758c) form2_midp_gauge_slider_pane_t2_cp01

0x8bd7,	// (0x0002759a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8bd7,	// (0x0002759a) form2_midp_gauge_slider_pane_t3_cp01

0x8bf4,	// (0x000275b7) form2_midp_slider_pane_cp01

0x1545,	// (0x0001ff08) navi_smil_pane

0xe51b,	// (0x0002cede) navi_smil_pane_g1

0xe523,	// (0x0002cee6) navi_smil_pane_t1

0xe4f0,	// (0x0002ceb3) form2_midp_slider_pane_g1

0xe4f9,	// (0x0002cebc) form2_midp_slider_pane_g2

0xe501,	// (0x0002cec4) form2_midp_slider_pane_g3

0xe4f0,	// (0x0002ceb3) form2_midp_slider_pane_g4

0xe509,	// (0x0002cecc) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x0002e7bc) form2_midp_slider_pane_g

0x8bb9,	// (0x0002757c) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8bb9,	// (0x0002757c) vkb2_area_bottom_space_btn_pane_g4

0x961a,	// (0x00027fdd) lc0_navi_pane_ParamLimits

0x961a,	// (0x00027fdd) lc0_navi_pane

0x9696,	// (0x00028059) lc0_stat_indi_pane_ParamLimits

0x9696,	// (0x00028059) lc0_stat_indi_pane

0x96ad,	// (0x00028070) ls0_title_pane_ParamLimits

0x96ad,	// (0x00028070) ls0_title_pane

0x3106,	// (0x00021ac9) bg_popup_sub_pane_cp14_ParamLimits

0xd924,	// (0x0002c2e7) list_uniindi_pane_ParamLimits

0xd930,	// (0x0002c2f3) uniindi_top_pane_ParamLimits

0xd9d0,	// (0x0002c393) list_single_uniindi_pane_g1_ParamLimits

0xd9e3,	// (0x0002c3a6) list_single_uniindi_pane_t1_ParamLimits

0x8bfd,	// (0x000275c0) lc0_stat_clock_pane_ParamLimits

0x8bfd,	// (0x000275c0) lc0_stat_clock_pane

0xe531,	// (0x0002cef4) lc0_stat_indi_pane_g1_ParamLimits

0xe531,	// (0x0002cef4) lc0_stat_indi_pane_g1

0xe53e,	// (0x0002cf01) lc0_stat_indi_pane_g2_ParamLimits

0xe53e,	// (0x0002cf01) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x0002e7c7) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x0002e7c7) lc0_stat_indi_pane_g

0x8c0a,	// (0x000275cd) lc0_uni_indicator_pane_ParamLimits

0x8c0a,	// (0x000275cd) lc0_uni_indicator_pane

0xe54b,	// (0x0002cf0e) ls0_title_pane_g1_ParamLimits

0xe54b,	// (0x0002cf0e) ls0_title_pane_g1

0xe55f,	// (0x0002cf22) ls0_title_pane_t1_ParamLimits

0xe55f,	// (0x0002cf22) ls0_title_pane_t1

0x8c17,	// (0x000275da) lc0_uni_indicator_pane_g1_ParamLimits

0x8c17,	// (0x000275da) lc0_uni_indicator_pane_g1

0xe595,	// (0x0002cf58) lc0_stat_clock_pane_t1

0x1545,	// (0x0001ff08) main_ai5_pane

0xe5a3,	// (0x0002cf66) ai5_sk_pane_ParamLimits

0xe5a3,	// (0x0002cf66) ai5_sk_pane

0xe5b0,	// (0x0002cf73) cell_ai5_widget_pane_ParamLimits

0xe5b0,	// (0x0002cf73) cell_ai5_widget_pane

0xe64f,	// (0x0002d012) aid_size_cell_widget_grid

0xe65d,	// (0x0002d020) bg_ai5_widget_pane_ParamLimits

0xe65d,	// (0x0002d020) bg_ai5_widget_pane

0xe6d9,	// (0x0002d09c) cell_ai5_widget_pane_g2

0xe6ed,	// (0x0002d0b0) cell_ai5_widget_pane_g3

0xe707,	// (0x0002d0ca) cell_ai5_widget_pane_g4

0xe717,	// (0x0002d0da) cell_ai5_widget_pane_g5

0xe727,	// (0x0002d0ea) cell_ai5_widget_pane_g6

0xe733,	// (0x0002d0f6) cell_ai5_widget_pane_g7

0xe79f,	// (0x0002d162) cell_ai5_widget_pane_t1_ParamLimits

0xe79f,	// (0x0002d162) cell_ai5_widget_pane_t1

0xe7bc,	// (0x0002d17f) cell_ai5_widget_pane_t2_ParamLimits

0xe7bc,	// (0x0002d17f) cell_ai5_widget_pane_t2

0xe7d4,	// (0x0002d197) cell_ai5_widget_pane_t3_ParamLimits

0xe7d4,	// (0x0002d197) cell_ai5_widget_pane_t3

0xe7ec,	// (0x0002d1af) cell_ai5_widget_pane_t4_ParamLimits

0xe7ec,	// (0x0002d1af) cell_ai5_widget_pane_t4

0xe812,	// (0x0002d1d5) cell_ai5_widget_pane_t5_ParamLimits

0xe812,	// (0x0002d1d5) cell_ai5_widget_pane_t5

0xe832,	// (0x0002d1f5) cell_ai5_widget_pane_t6_ParamLimits

0xe832,	// (0x0002d1f5) cell_ai5_widget_pane_t6

0xe844,	// (0x0002d207) cell_ai5_widget_pane_t7_ParamLimits

0xe844,	// (0x0002d207) cell_ai5_widget_pane_t7

0xe863,	// (0x0002d226) cell_ai5_widget_pane_t8_ParamLimits

0xe863,	// (0x0002d226) cell_ai5_widget_pane_t8

0x000b,

0xfe24,	// (0x0002e7e7) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x0002e7e7) cell_ai5_widget_pane_t

0xe8e7,	// (0x0002d2aa) grid_ai5_widget_pane

0x3106,	// (0x00021ac9) highlight_cell_ai5_widget_pane_ParamLimits

0x3106,	// (0x00021ac9) highlight_cell_ai5_widget_pane

0xe8f5,	// (0x0002d2b8) ai5_sk_left_pane

0xe8ff,	// (0x0002d2c2) ai5_sk_middle_pane

0xe909,	// (0x0002d2cc) ai5_sk_right_pane

0xe913,	// (0x0002d2d6) bg_ai5_widget_pane_g1_ParamLimits

0xe913,	// (0x0002d2d6) bg_ai5_widget_pane_g1

0xe91f,	// (0x0002d2e2) bg_ai5_widget_pane_g2_ParamLimits

0xe91f,	// (0x0002d2e2) bg_ai5_widget_pane_g2

0xe92b,	// (0x0002d2ee) bg_ai5_widget_pane_g3_ParamLimits

0xe92b,	// (0x0002d2ee) bg_ai5_widget_pane_g3

0xe937,	// (0x0002d2fa) bg_ai5_widget_pane_g4_ParamLimits

0xe937,	// (0x0002d2fa) bg_ai5_widget_pane_g4

0xe943,	// (0x0002d306) bg_ai5_widget_pane_g5_ParamLimits

0xe943,	// (0x0002d306) bg_ai5_widget_pane_g5

0xe94f,	// (0x0002d312) bg_ai5_widget_pane_g6_ParamLimits

0xe94f,	// (0x0002d312) bg_ai5_widget_pane_g6

0xe95b,	// (0x0002d31e) bg_ai5_widget_pane_g7_ParamLimits

0xe95b,	// (0x0002d31e) bg_ai5_widget_pane_g7

0xe967,	// (0x0002d32a) bg_ai5_widget_pane_g8_ParamLimits

0xe967,	// (0x0002d32a) bg_ai5_widget_pane_g8

0xe973,	// (0x0002d336) bg_ai5_widget_pane_g9_ParamLimits

0xe973,	// (0x0002d336) bg_ai5_widget_pane_g9

0x0008,

0xfe3d,	// (0x0002e800) bg_ai5_widget_pane_g_ParamLimits

0xfe3d,	// (0x0002e800) bg_ai5_widget_pane_g

0xe9ab,	// (0x0002d36e) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9ab,	// (0x0002d36e) cell_shortcut_ai5_widget_pane

0x9119,	// (0x00027adc) bg_cell_shortcut_ai5_widget_pane

0xe9be,	// (0x0002d381) cell_grid_ai5_widget_pane_g1

0x9119,	// (0x00027adc) highlight_cell_shortcut_ai5_widget_pane

0x9986,	// (0x00028349) ai5_sk_left_pane_g1

0xe9c7,	// (0x0002d38a) ai5_sk_left_pane_g2

0xe9cf,	// (0x0002d392) ai5_sk_left_pane_g3

0xe9d7,	// (0x0002d39a) ai5_sk_left_pane_g4

0x0003,

0xfe50,	// (0x0002e813) ai5_sk_left_pane_g

0xe9df,	// (0x0002d3a2) ai5_sk_left_pane_t1

0x997e,	// (0x00028341) ai5_sk_right_pane_g1

0xe9ed,	// (0x0002d3b0) ai5_sk_right_pane_g2

0xe9f5,	// (0x0002d3b8) ai5_sk_right_pane_g3

0xe9fd,	// (0x0002d3c0) ai5_sk_right_pane_g4

0x0003,

0xfe59,	// (0x0002e81c) ai5_sk_right_pane_g

0xea05,	// (0x0002d3c8) ai5_sk_right_pane_t1

0x997e,	// (0x00028341) ai5_sk_middle_pane_g1

0x9986,	// (0x00028349) ai5_sk_middle_pane_g2

0x999e,	// (0x00028361) ai5_sk_middle_pane_g3

0xe9f5,	// (0x0002d3b8) ai5_sk_middle_pane_g4

0xe9cf,	// (0x0002d392) ai5_sk_middle_pane_g5

0xea13,	// (0x0002d3d6) ai5_sk_middle_pane_g6

0xea1b,	// (0x0002d3de) ai5_sk_middle_pane_g7

0x0006,

0xfe62,	// (0x0002e825) ai5_sk_middle_pane_g

0x94a0,	// (0x00027e63) aid_touch_area_size_lc0_ParamLimits

0x94a0,	// (0x00027e63) aid_touch_area_size_lc0

0x829d,	// (0x00026c60) cell_hwr_candidate_pane_t1_ParamLimits

0x94be,	// (0x00027e81) aid_touch_navi_pane

0x97ad,	// (0x00028170) status_dt_navi_pane_ParamLimits

0x97ad,	// (0x00028170) status_dt_navi_pane

0x97ba,	// (0x0002817d) status_dt_sta_pane_ParamLimits

0x97ba,	// (0x0002817d) status_dt_sta_pane

0xea23,	// (0x0002d3e6) dt_sta_controll_pane

0xea30,	// (0x0002d3f3) dt_sta_indi_pane

0xea41,	// (0x0002d404) dt_sta_title_pane

0x1702,	// (0x000200c5) bg_dt_sta_indi_pane_ParamLimits

0x1702,	// (0x000200c5) bg_dt_sta_indi_pane

0xea54,	// (0x0002d417) dt_sta_battery_pane

0xea5c,	// (0x0002d41f) dt_sta_indi_pane_g1

0xea65,	// (0x0002d428) dt_sta_indi_pane_g2

0xea6e,	// (0x0002d431) dt_sta_indi_pane_g3

0x0002,

0xfe71,	// (0x0002e834) dt_sta_indi_pane_g

0xea77,	// (0x0002d43a) dt_sta_signal_pane

0x3106,	// (0x00021ac9) bg_dt_sta_title_pane_ParamLimits

0x3106,	// (0x00021ac9) bg_dt_sta_title_pane

0xea80,	// (0x0002d443) dt_sta_title_pane_g1

0xea88,	// (0x0002d44b) dt_sta_title_pane_t1_ParamLimits

0xea88,	// (0x0002d44b) dt_sta_title_pane_t1

0x1545,	// (0x0001ff08) bg_dt_sta_control_pane

0xea9d,	// (0x0002d460) dt_sta_controll_pane_g1

0xeaa6,	// (0x0002d469) bg_dt_sta_title_pane_g1

0xeaaf,	// (0x0002d472) bg_dt_sta_title_pane_g2

0xeab8,	// (0x0002d47b) bg_dt_sta_title_pane_g3

0x0002,

0xfe78,	// (0x0002e83b) bg_dt_sta_title_pane_g

0xbfc1,	// (0x0002a984) bg_dt_sta_indi_pane_g1

0xeac1,	// (0x0002d484) dt_sta_signal_pane_g1

0xeac9,	// (0x0002d48c) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x0002e842) dt_sta_signal_pane_g

0xead1,	// (0x0002d494) dt_sta_battery_pane_g1

0xeada,	// (0x0002d49d) dt_sta_battery_pane_t1

0xbfc1,	// (0x0002a984) bg_dt_sta_control_pane_g1

0x6dcb,	// (0x0002578e) fep_china_uni_eep_pane

0x6dd3,	// (0x00025796) fep_china_uni_entry_pane_ParamLimits

0x6de3,	// (0x000257a6) popup_fep_china_uni_window_g1_ParamLimits

0x6df3,	// (0x000257b6) popup_fep_china_uni_window_g2_ParamLimits

0x6df3,	// (0x000257b6) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0002e0bb) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0002e0bb) popup_fep_china_uni_window_g

0xeae9,	// (0x0002d4ac) fep_china_uni_eep_pane_g1

0xeaf1,	// (0x0002d4b4) fep_china_uni_eep_pane_t1

0xe512,	// (0x0002ced5) aid_touch_area_size_smil_player

0x9612,	// (0x00027fd5) lc0_clock_pane

0x9809,	// (0x000281cc) status_pane_g5_ParamLimits

0x9809,	// (0x000281cc) status_pane_g5

0x7740,	// (0x00026103) popup_keymap_window

0x97cf,	// (0x00028192) status_icon_pane

0xe6ed,	// (0x0002d0b0) cell_ai5_widget_pane_g3_ParamLimits

0xe707,	// (0x0002d0ca) cell_ai5_widget_pane_g4_ParamLimits

0xe717,	// (0x0002d0da) cell_ai5_widget_pane_g5_ParamLimits

0xe73f,	// (0x0002d102) cell_ai5_widget_pane_g8_ParamLimits

0xe73f,	// (0x0002d102) cell_ai5_widget_pane_g8

0xe753,	// (0x0002d116) cell_ai5_widget_pane_g9_ParamLimits

0xe753,	// (0x0002d116) cell_ai5_widget_pane_g9

0xe767,	// (0x0002d12a) cell_ai5_widget_pane_g10_ParamLimits

0xe767,	// (0x0002d12a) cell_ai5_widget_pane_g10

0xeb00,	// (0x0002d4c3) status_icon_pane_g1

0x1545,	// (0x0001ff08) bg_popup_sub_pane_cp13

0xeb08,	// (0x0002d4cb) popup_keymap_window_t1

0x93f1,	// (0x00027db4) control_pane_g6_ParamLimits

0x93f1,	// (0x00027db4) control_pane_g6

0x93fe,	// (0x00027dc1) control_pane_g7_ParamLimits

0x93fe,	// (0x00027dc1) control_pane_g7

0x940b,	// (0x00027dce) control_pane_g8_ParamLimits

0x940b,	// (0x00027dce) control_pane_g8

0xea23,	// (0x0002d3e6) dt_sta_controll_pane_ParamLimits

0xea30,	// (0x0002d3f3) dt_sta_indi_pane_ParamLimits

0xea41,	// (0x0002d404) dt_sta_title_pane_ParamLimits

0x1b53,	// (0x00020516) aid_size_touch_scroll_bar_cale

0x6180,	// (0x00024b43) popup_discreet_window_ParamLimits

0x6180,	// (0x00024b43) popup_discreet_window

0x620e,	// (0x00024bd1) popup_sk_window

0x9fdc,	// (0x0002899f) bg_popup_sub_pane_cp28_ParamLimits

0x9fdc,	// (0x0002899f) bg_popup_sub_pane_cp28

0xeb16,	// (0x0002d4d9) popup_discreet_window_g1_ParamLimits

0xeb16,	// (0x0002d4d9) popup_discreet_window_g1

0xeb36,	// (0x0002d4f9) popup_discreet_window_t1_ParamLimits

0xeb36,	// (0x0002d4f9) popup_discreet_window_t1

0xeb54,	// (0x0002d517) popup_discreet_window_t2_ParamLimits

0xeb54,	// (0x0002d517) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x0002e847) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x0002e847) popup_discreet_window_t

0x8c2a,	// (0x000275ed) popup_sk_window_g1

0x8c34,	// (0x000275f7) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x0002e84e) popup_sk_window_g

0x8c3c,	// (0x000275ff) popup_sk_window_t1

0x8c4a,	// (0x0002760d) popup_sk_window_t1_copy1

0xe6d9,	// (0x0002d09c) cell_ai5_widget_pane_g2_ParamLimits

0xe875,	// (0x0002d238) cell_ai5_widget_pane_t9_ParamLimits

0xe875,	// (0x0002d238) cell_ai5_widget_pane_t9

0x1545,	// (0x0001ff08) main_fep_fshwr2_pane

0x8c58,	// (0x0002761b) aid_fshwr2_btn_pane

0x8c68,	// (0x0002762b) aid_fshwr2_syb_pane

0x8c7c,	// (0x0002763f) aid_fshwr2_txt_pane

0x8c8c,	// (0x0002764f) fshwr2_func_candi_pane

0x8cac,	// (0x0002766f) fshwr2_hwr_syb_pane

0x8cc2,	// (0x00027685) fshwr2_icf_pane

0x1545,	// (0x0001ff08) fshwr2_icf_bg_pane

0x8cf6,	// (0x000276b9) fshwr2_icf_pane_t1_ParamLimits

0x8cf6,	// (0x000276b9) fshwr2_icf_pane_t1

0x6bcb,	// (0x0002558e) fshwr2_func_candi_pane_g1

0xeba6,	// (0x0002d569) fshwr2_func_candi_row_pane_ParamLimits

0xeba6,	// (0x0002d569) fshwr2_func_candi_row_pane

0x8d0e,	// (0x000276d1) cell_fshwr2_syb_pane_ParamLimits

0x8d0e,	// (0x000276d1) cell_fshwr2_syb_pane

0xe4e2,	// (0x0002cea5) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4e2,	// (0x0002cea5) fshwr2_hwr_syb_pane_g1

0x1545,	// (0x0001ff08) bg_popup_call_pane_cp01

0x8d2f,	// (0x000276f2) fshwr2_func_candi_cell_pane_ParamLimits

0x8d2f,	// (0x000276f2) fshwr2_func_candi_cell_pane

0xa653,	// (0x00029016) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa653,	// (0x00029016) fshwr2_func_candi_cell_bg_pane

0x8d80,	// (0x00027743) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8d80,	// (0x00027743) fshwr2_func_candi_cell_pane_g1

0x8dab,	// (0x0002776e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8dab,	// (0x0002776e) fshwr2_func_candi_cell_pane_t1

0x1545,	// (0x0001ff08) bg_button_pane_cp08

0x9440,	// (0x00027e03) cell_fshwr2_syb_bg_pane

0x8dbe,	// (0x00027781) cell_fshwr2_syb_bg_pane_g1

0x8dd2,	// (0x00027795) cell_fshwr2_syb_bg_pane_t1

0x3106,	// (0x00021ac9) main_tmo_pane

0xab00,	// (0x000294c3) uni_indicator_pane_g1_ParamLimits

0xab16,	// (0x000294d9) uni_indicator_pane_g2_ParamLimits

0xab2c,	// (0x000294ef) uni_indicator_pane_g3_ParamLimits

0xab3f,	// (0x00029502) uni_indicator_pane_g4_ParamLimits

0xab3f,	// (0x00029502) uni_indicator_pane_g4

0xab53,	// (0x00029516) uni_indicator_pane_g5_ParamLimits

0xab53,	// (0x00029516) uni_indicator_pane_g5

0xab53,	// (0x00029516) uni_indicator_pane_g6_ParamLimits

0xab53,	// (0x00029516) uni_indicator_pane_g6

0xf8fc,	// (0x0002e2bf) uni_indicator_pane_g_ParamLimits

0xd4f0,	// (0x0002beb3) popup_tmo_note_window_ParamLimits

0xd4f0,	// (0x0002beb3) popup_tmo_note_window

0x3106,	// (0x00021ac9) fshwr2_bg_pane

0x8d9c,	// (0x0002775f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8d9c,	// (0x0002775f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x0002e853) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x0002e853) fshwr2_func_candi_cell_pane_g

0xbfc1,	// (0x0002a984) bg_popup_window_pane_cp01

0x8de8,	// (0x000277ab) bg_popup_window_pane_g1_cp01

0xebc9,	// (0x0002d58c) bg_popup_window_pane_cp22_ParamLimits

0xebc9,	// (0x0002d58c) bg_popup_window_pane_cp22

0xebd7,	// (0x0002d59a) listscroll_tmo_link_pane_ParamLimits

0xebd7,	// (0x0002d59a) listscroll_tmo_link_pane

0xec17,	// (0x0002d5da) popup_tmo_note_window_g1_ParamLimits

0xec17,	// (0x0002d5da) popup_tmo_note_window_g1

0xec24,	// (0x0002d5e7) tmo_note_info_pane_ParamLimits

0xec24,	// (0x0002d5e7) tmo_note_info_pane

0xec3e,	// (0x0002d601) list_tmo_note_info_pane_g1_ParamLimits

0xec3e,	// (0x0002d601) list_tmo_note_info_pane_g1

0xec55,	// (0x0002d618) list_tmo_note_info_pane_g2_ParamLimits

0xec55,	// (0x0002d618) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x0002e858) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x0002e858) list_tmo_note_info_pane_g

0xec71,	// (0x0002d634) list_tmo_note_info_text_pane_ParamLimits

0xec71,	// (0x0002d634) list_tmo_note_info_text_pane

0xecf6,	// (0x0002d6b9) list_tmo_link_pane

0xed03,	// (0x0002d6c6) scroll_pane_cp20

0xed10,	// (0x0002d6d3) list_single_tmo_link_pane_ParamLimits

0xed10,	// (0x0002d6d3) list_single_tmo_link_pane

0xed20,	// (0x0002d6e3) list_single_tmo_link_pane_t1

0xed2e,	// (0x0002d6f1) list_tmo_note_info_text_pane_t1_ParamLimits

0xed2e,	// (0x0002d6f1) list_tmo_note_info_text_pane_t1

0x6699,	// (0x0002505c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6699,	// (0x0002505c) aid_size_touch_scroll_bar_cp01

0x5392,	// (0x00023d55) aid_size_touch_slider_marker

0x61f6,	// (0x00024bb9) popup_settings_window_ParamLimits

0x61f6,	// (0x00024bb9) popup_settings_window

0x5559,	// (0x00023f1c) popup_candi_list_indi_window

0x94be,	// (0x00027e81) aid_touch_navi_pane_ParamLimits

0x840d,	// (0x00026dd0) rs_clock_indi_pane

0x8416,	// (0x00026dd9) sctrl_sk_bottom_pane_ParamLimits

0x8427,	// (0x00026dea) sctrl_sk_top_pane_ParamLimits

0x8508,	// (0x00026ecb) popup_fep_tooltip_window

0xe64f,	// (0x0002d012) aid_size_cell_widget_grid_ParamLimits

0xe6c4,	// (0x0002d087) cell_ai5_widget_pane_g1_ParamLimits

0xe6c4,	// (0x0002d087) cell_ai5_widget_pane_g1

0xe727,	// (0x0002d0ea) cell_ai5_widget_pane_g6_ParamLimits

0xe733,	// (0x0002d0f6) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe09,	// (0x0002e7cc) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0002e7cc) cell_ai5_widget_pane_g

0xe8a4,	// (0x0002d267) cell_ai5_widget_pane_t10_ParamLimits

0xe8a4,	// (0x0002d267) cell_ai5_widget_pane_t10

0xe8e7,	// (0x0002d2aa) grid_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0002d342) cell_contacts_ai5_widget_pane_ParamLimits

0xe97f,	// (0x0002d342) cell_contacts_ai5_widget_pane

0xeb69,	// (0x0002d52c) popup_discreet_window_t3_ParamLimits

0xeb69,	// (0x0002d52c) popup_discreet_window_t3

0x8cde,	// (0x000276a1) popup_fshwr2_char_preview_window_ParamLimits

0x8cde,	// (0x000276a1) popup_fshwr2_char_preview_window

0xec8f,	// (0x0002d652) tmo_note_info_pane_t1

0xeca4,	// (0x0002d667) tmo_note_info_pane_t2

0xecbd,	// (0x0002d680) tmo_note_info_pane_t3

0xecd2,	// (0x0002d695) tmo_note_info_pane_t4

0xece4,	// (0x0002d6a7) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x0002e85d) tmo_note_info_pane_t

0xecf6,	// (0x0002d6b9) list_tmo_link_pane_ParamLimits

0xed03,	// (0x0002d6c6) scroll_pane_cp20_ParamLimits

0x1545,	// (0x0001ff08) bg_popup_fep_char_preview_window_cp01

0xed47,	// (0x0002d70a) popup_fshwr2_char_preview_window_t1

0xed55,	// (0x0002d718) popup_candi_list_indi_window_g1

0xed5e,	// (0x0002d721) bg_cell_contacts_ai5_widget_pane

0xed6a,	// (0x0002d72d) cell_contacts_ai5_widget_pane_g1

0xed7f,	// (0x0002d742) cell_contacts_ai5_widget_pane_g2

0xed8b,	// (0x0002d74e) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x0002e868) cell_contacts_ai5_widget_pane_g

0xed97,	// (0x0002d75a) cell_contacts_ai5_widget_pane_t1

0x3106,	// (0x00021ac9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee0e,	// (0x0002d7d1) settings_container_pane

0x9119,	// (0x00027adc) listscroll_set_pane_copy1

0xb6f2,	// (0x0002a0b5) scroll_pane_cp121_copy1

0xee1a,	// (0x0002d7dd) set_content_pane_copy1

0xee22,	// (0x0002d7e5) aid_height_set_list_copy1_ParamLimits

0xee22,	// (0x0002d7e5) aid_height_set_list_copy1

0xad53,	// (0x00029716) aid_size_parent_copy1_ParamLimits

0xad53,	// (0x00029716) aid_size_parent_copy1

0xee2e,	// (0x0002d7f1) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee2e,	// (0x0002d7f1) button_value_adjust_pane_cp6_copy1

0x9440,	// (0x00027e03) list_highlight_pane_cp2_copy1_ParamLimits

0x9440,	// (0x00027e03) list_highlight_pane_cp2_copy1

0xee42,	// (0x0002d805) list_set_pane_copy1_ParamLimits

0xee42,	// (0x0002d805) list_set_pane_copy1

0xeda9,	// (0x0002d76c) main_pane_set_t1_copy1_ParamLimits

0xeda9,	// (0x0002d76c) main_pane_set_t1_copy1

0xede3,	// (0x0002d7a6) main_pane_set_t2_copy1_ParamLimits

0xede3,	// (0x0002d7a6) main_pane_set_t2_copy1

0xef03,	// (0x0002d8c6) main_pane_set_t3_copy1

0xef11,	// (0x0002d8d4) main_pane_set_t4_copy1

0xee02,	// (0x0002d7c5) set_content_pane_g1_copy1_ParamLimits

0xee02,	// (0x0002d7c5) set_content_pane_g1_copy1

0xef1f,	// (0x0002d8e2) setting_code_pane_copy1

0xef27,	// (0x0002d8ea) setting_slider_graphic_pane_copy1

0xef27,	// (0x0002d8ea) setting_slider_pane_copy1

0xef2f,	// (0x0002d8f2) setting_text_pane_copy1

0xef2f,	// (0x0002d8f2) setting_volume_pane_copy1

0xef1f,	// (0x0002d8e2) settings_code_pane_cp2_copy1

0xef37,	// (0x0002d8fa) settings_code_pane_cp_copy1_ParamLimits

0xef37,	// (0x0002d8fa) settings_code_pane_cp_copy1

0x8df1,	// (0x000277b4) volume_set_pane_copy1

0xef4b,	// (0x0002d90e) volume_set_pane_g10_copy1

0xef57,	// (0x0002d91a) volume_set_pane_g1_copy1

0xef61,	// (0x0002d924) volume_set_pane_g2_copy1

0xef6b,	// (0x0002d92e) volume_set_pane_g3_copy1

0xef75,	// (0x0002d938) volume_set_pane_g4_copy1

0xef7f,	// (0x0002d942) volume_set_pane_g5_copy1

0xef89,	// (0x0002d94c) volume_set_pane_g6_copy1

0xef93,	// (0x0002d956) volume_set_pane_g7_copy1

0xef9d,	// (0x0002d960) volume_set_pane_g8_copy1

0xefa7,	// (0x0002d96a) volume_set_pane_g9_copy1

0x15b5,	// (0x0001ff78) bg_set_opt_pane_cp_copy1_ParamLimits

0x15b5,	// (0x0001ff78) bg_set_opt_pane_cp_copy1

0x8dfd,	// (0x000277c0) setting_slider_pane_t1_copy1_ParamLimits

0x8dfd,	// (0x000277c0) setting_slider_pane_t1_copy1

0x8e1c,	// (0x000277df) setting_slider_pane_t2_copy1_ParamLimits

0x8e1c,	// (0x000277df) setting_slider_pane_t2_copy1

0x8e36,	// (0x000277f9) setting_slider_pane_t3_copy1_ParamLimits

0x8e36,	// (0x000277f9) setting_slider_pane_t3_copy1

0x8e4e,	// (0x00027811) slider_set_pane_copy1_ParamLimits

0x8e4e,	// (0x00027811) slider_set_pane_copy1

0x31c1,	// (0x00021b84) set_opt_bg_pane_g1_copy2

0x31c9,	// (0x00021b8c) set_opt_bg_pane_g2_copy2

0xefb3,	// (0x0002d976) set_opt_bg_pane_g3_copy2

0x31d9,	// (0x00021b9c) set_opt_bg_pane_g4_copy2

0x31e1,	// (0x00021ba4) set_opt_bg_pane_g5_copy2

0x31e9,	// (0x00021bac) set_opt_bg_pane_g6_copy2

0xefbd,	// (0x0002d980) set_opt_bg_pane_g7_copy2

0xefc7,	// (0x0002d98a) set_opt_bg_pane_g8_copy2

0xefd1,	// (0x0002d994) set_opt_bg_pane_g9_copy2

0x8e64,	// (0x00027827) aid_size_touch_slider_mark_copy1_ParamLimits

0x8e64,	// (0x00027827) aid_size_touch_slider_mark_copy1

0xefdb,	// (0x0002d99e) slider_set_pane_g1_copy1

0x8e78,	// (0x0002783b) slider_set_pane_g2_copy1

0x7ed5,	// (0x00026898) slider_set_pane_g3_copy1_ParamLimits

0x7ed5,	// (0x00026898) slider_set_pane_g3_copy1

0x7ee9,	// (0x000268ac) slider_set_pane_g4_copy1_ParamLimits

0x7ee9,	// (0x000268ac) slider_set_pane_g4_copy1

0x7f01,	// (0x000268c4) slider_set_pane_g5_copy1_ParamLimits

0x7f01,	// (0x000268c4) slider_set_pane_g5_copy1

0x7ed5,	// (0x00026898) slider_set_pane_g6_copy1_ParamLimits

0x7ed5,	// (0x00026898) slider_set_pane_g6_copy1

0x8e80,	// (0x00027843) slider_set_pane_g7_copy1_ParamLimits

0x8e80,	// (0x00027843) slider_set_pane_g7_copy1

0x1559,	// (0x0001ff1c) bg_set_opt_pane_cp2_copy1

0xefe4,	// (0x0002d9a7) setting_slider_graphic_pane_g1_copy1

0xefed,	// (0x0002d9b0) setting_slider_graphic_pane_t1_copy1

0xeffd,	// (0x0002d9c0) setting_slider_graphic_pane_t2_copy1

0xf00d,	// (0x0002d9d0) slider_set_pane_cp_copy1

0xf01d,	// (0x0002d9e0) input_focus_pane_cp1_copy1

0xf026,	// (0x0002d9e9) list_set_text_pane_copy1

0xf02e,	// (0x0002d9f1) setting_text_pane_g1_copy1

0x5ed7,	// (0x0002489a) set_text_pane_t1_copy1

0xf01d,	// (0x0002d9e0) input_focus_pane_cp2_copy1

0xf02e,	// (0x0002d9f1) setting_code_pane_g1_copy1

0xf037,	// (0x0002d9fa) setting_code_pane_t1_copy1

0xb4f7,	// (0x00029eba) list_set_graphic_pane_copy1

0x1559,	// (0x0001ff1c) bg_set_opt_pane_cp4_copy1

0x7109,	// (0x00025acc) list_set_graphic_pane_g1_copy1_ParamLimits

0x7109,	// (0x00025acc) list_set_graphic_pane_g1_copy1

0xf045,	// (0x0002da08) list_set_graphic_pane_g2_copy1

0x7121,	// (0x00025ae4) list_set_graphic_pane_t1_copy1_ParamLimits

0x7121,	// (0x00025ae4) list_set_graphic_pane_t1_copy1

0xbfc1,	// (0x0002a984) rs_clock_indi_pane_g1

0xf04d,	// (0x0002da10) rs_clock_indi_pane_t1

0xf05b,	// (0x0002da1e) rs_indi_pane

0xf063,	// (0x0002da26) rs_indi_pane_g1

0xf06c,	// (0x0002da2f) rs_indi_pane_g2

0xed55,	// (0x0002d718) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x0002e86f) rs_indi_pane_g

0x9119,	// (0x00027adc) bg_popup_preview_window_pane_cp03

0xf075,	// (0x0002da38) popup_fep_tooltip_window_t1

0xcc9e,	// (0x0002b661) popup_note2_window_g2_ParamLimits

0xcc9e,	// (0x0002b661) popup_note2_window_g2

0x0001,

0xfc39,	// (0x0002e5fc) popup_note2_window_g_ParamLimits

0xfc39,	// (0x0002e5fc) popup_note2_window_g

0xd1a6,	// (0x0002bb69) bg_popup_sub_pane_cp11_ParamLimits

0xd1b3,	// (0x0002bb76) cell_ai3_links_pane_g1_ParamLimits

0xd1ca,	// (0x0002bb8d) cell_ai3_links_pane_t1

0x5ed7,	// (0x0002489a) set_text_pane_t1_copy1_ParamLimits

0x731c,	// (0x00025cdf) cell_graphic_popup_pane_cp2_ParamLimits

0x731c,	// (0x00025cdf) cell_graphic_popup_pane_cp2

0xf083,	// (0x0002da46) cell_graphic_popup_pane_g1_cp2

0x1966,	// (0x00020329) cell_graphic_popup_pane_g2_cp2

0xf08b,	// (0x0002da4e) cell_graphic_popup_pane_g3_cp2

0xf093,	// (0x0002da56) cell_graphic_popup_pane_t2_cp2

0x1977,	// (0x0002033a) grid_highlight_pane_cp3_cp2

0x3641,	// (0x00022004) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3106,	// (0x00021ac9) main_tmo_pane_ParamLimits

0xd4e4,	// (0x0002bea7) popup_tmo_big_image_note_window

0xe6b3,	// (0x0002d076) cell_ai5_widget_list_pane

0xe6bb,	// (0x0002d07e) cell_ai5_widget_lrg_icon_pane

0xec8f,	// (0x0002d652) tmo_note_info_pane_t1_ParamLimits

0xeca4,	// (0x0002d667) tmo_note_info_pane_t2_ParamLimits

0xecbd,	// (0x0002d680) tmo_note_info_pane_t3_ParamLimits

0xecd2,	// (0x0002d695) tmo_note_info_pane_t4_ParamLimits

0xece4,	// (0x0002d6a7) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x0002e85d) tmo_note_info_pane_t_ParamLimits

0xee0e,	// (0x0002d7d1) settings_container_pane_ParamLimits

0xf015,	// (0x0002d9d8) indicator_popup_pane_cp5

0xf015,	// (0x0002d9d8) indicator_popup_pane_cp6

0xb4f7,	// (0x00029eba) list_set_graphic_pane_copy1_ParamLimits

0x1545,	// (0x0001ff08) bg_popup_window_pane_cp23

0xf0a1,	// (0x0002da64) popup_tmo_big_image_note_window_g1

0xf0ad,	// (0x0002da70) popup_tmo_big_image_note_window_t1

0xf0bd,	// (0x0002da80) popup_tmo_big_image_note_window_t2

0xf0cd,	// (0x0002da90) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x0002e876) popup_tmo_big_image_note_window_t

0xbfc1,	// (0x0002a984) cell_ai5_widget_lrg_icon_pane_g1

0xf0dd,	// (0x0002daa0) cell_ai5_widget_lrg_icon_pane_t1

0xf0eb,	// (0x0002daae) cell_ai5_widget_list_row_pane_ParamLimits

0xf0eb,	// (0x0002daae) cell_ai5_widget_list_row_pane

0xf103,	// (0x0002dac6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf103,	// (0x0002dac6) cell_ai5_widget_list_row_pane_g1

0xf110,	// (0x0002dad3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf110,	// (0x0002dad3) cell_ai5_widget_list_row_pane_t1

0xf13b,	// (0x0002dafe) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf13b,	// (0x0002dafe) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeba,	// (0x0002e87d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeba,	// (0x0002e87d) cell_ai5_widget_list_row_pane_t

0x1545,	// (0x0001ff08) main_fep_vtchi_ss_pane

0xf18b,	// (0x0002db4e) popup_fep_char_pre_window

0xf193,	// (0x0002db56) popup_fep_ituss_window

0xf1bf,	// (0x0002db82) popup_fep_vkbss_window

0x9440,	// (0x00027e03) grid_vkbss_keypad_pane_ParamLimits

0x9440,	// (0x00027e03) grid_vkbss_keypad_pane

0xf201,	// (0x0002dbc4) ituss_keypad_pane

0x8ea0,	// (0x00027863) aid_vkbss_key_offset_ParamLimits

0x8ea0,	// (0x00027863) aid_vkbss_key_offset

0x8eac,	// (0x0002786f) cell_vkbss_key_pane_ParamLimits

0x8eac,	// (0x0002786f) cell_vkbss_key_pane

0xf20d,	// (0x0002dbd0) bg_cell_vkbss_key_g1_ParamLimits

0xf20d,	// (0x0002dbd0) bg_cell_vkbss_key_g1

0xf219,	// (0x0002dbdc) cell_vkbss_key_3p_pane_ParamLimits

0xf219,	// (0x0002dbdc) cell_vkbss_key_3p_pane

0xf24f,	// (0x0002dc12) cell_vkbss_key_g1_ParamLimits

0xf24f,	// (0x0002dc12) cell_vkbss_key_g1

0xf285,	// (0x0002dc48) cell_vkbss_key_t1_ParamLimits

0xf285,	// (0x0002dc48) cell_vkbss_key_t1

0x8f0e,	// (0x000278d1) cell_ituss_key_pane_ParamLimits

0x8f0e,	// (0x000278d1) cell_ituss_key_pane

0xf2e1,	// (0x0002dca4) bg_cell_ituss_key_g1_ParamLimits

0xf2e1,	// (0x0002dca4) bg_cell_ituss_key_g1

0xf2ed,	// (0x0002dcb0) cell_ituss_key_pane_g1_ParamLimits

0xf2ed,	// (0x0002dcb0) cell_ituss_key_pane_g1

0x8f1f,	// (0x000278e2) cell_ituss_key_pane_g2_ParamLimits

0x8f1f,	// (0x000278e2) cell_ituss_key_pane_g2

0x0005,

0xfec1,	// (0x0002e884) cell_ituss_key_pane_g_ParamLimits

0xfec1,	// (0x0002e884) cell_ituss_key_pane_g

0x8fa3,	// (0x00027966) cell_ituss_key_t1_ParamLimits

0x8fa3,	// (0x00027966) cell_ituss_key_t1

0x8fdd,	// (0x000279a0) cell_ituss_key_t2_ParamLimits

0x8fdd,	// (0x000279a0) cell_ituss_key_t2

0x900f,	// (0x000279d2) cell_ituss_key_t3_ParamLimits

0x900f,	// (0x000279d2) cell_ituss_key_t3

0x9040,	// (0x00027a03) cell_ituss_key_t4_ParamLimits

0x9040,	// (0x00027a03) cell_ituss_key_t4

0x0004,

0xfece,	// (0x0002e891) cell_ituss_key_t_ParamLimits

0xfece,	// (0x0002e891) cell_ituss_key_t

0xf313,	// (0x0002dcd6) cell_vkbss_key_3p_pane_g1

0xf31b,	// (0x0002dcde) cell_vkbss_key_3p_pane_g2

0xf323,	// (0x0002dce6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed9,	// (0x0002e89c) cell_vkbss_key_3p_pane_g

0x9119,	// (0x00027adc) bg_popup_fep_char_preview_window_cp02

0xf32b,	// (0x0002dcee) popup_fep_char_pre_window_t1

0xe63c,	// (0x0002cfff) main_ai5_sk_pane

0xed5e,	// (0x0002d721) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed6a,	// (0x0002d72d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed7f,	// (0x0002d742) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed8b,	// (0x0002d74e) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x0002e868) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed97,	// (0x0002d75a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3106,	// (0x00021ac9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf339,	// (0x0002dcfc) main_ai5_sk_pane_g1

0x9e14,	// (0x000287d7) popup_query_code_window_g1

0xf1a9,	// (0x0002db6c) popup_fep_vkb_icf_pane

0xf1d8,	// (0x0002db9b) popup_fep_vtchi_icf_pane

0xf342,	// (0x0002dd05) bg_icf_pane

0xf342,	// (0x0002dd05) list_vkb_icf_pane

0xf34e,	// (0x0002dd11) bg_icf_pane_cp01

0xf361,	// (0x0002dd24) vtchi_icf_list_pane

0xf3c1,	// (0x0002dd84) list_vkb_icf_pane_t1_ParamLimits

0xf3c1,	// (0x0002dd84) list_vkb_icf_pane_t1

0xf3da,	// (0x0002dd9d) vtchi_icf_list_pane_t1_ParamLimits

0xf3da,	// (0x0002dd9d) vtchi_icf_list_pane_t1

0xf193,	// (0x0002db56) popup_fep_ituss_window_ParamLimits

0xf1d8,	// (0x0002db9b) popup_fep_vtchi_icf_pane_ParamLimits

0xf201,	// (0x0002dbc4) ituss_keypad_pane_ParamLimits

0x8e96,	// (0x00027859) ituss_sks_pane

0xf342,	// (0x0002dd05) bg_icf_pane_ParamLimits

0xf163,	// (0x0002db26) icf_edit_indi_pane_ParamLimits

0xf163,	// (0x0002db26) icf_edit_indi_pane

0xf342,	// (0x0002dd05) list_vkb_icf_pane_ParamLimits

0xf34e,	// (0x0002dd11) bg_icf_pane_cp01_ParamLimits

0xf17e,	// (0x0002db41) icf_edit_indi_pane_cp01_ParamLimits

0xf17e,	// (0x0002db41) icf_edit_indi_pane_cp01

0xf361,	// (0x0002dd24) vtchi_query_pane

0xe4e2,	// (0x0002cea5) icf_edit_indi_pane_g1_ParamLimits

0xe4e2,	// (0x0002cea5) icf_edit_indi_pane_g1

0xf44a,	// (0x0002de0d) icf_edit_indi_pane_g2_ParamLimits

0xf44a,	// (0x0002de0d) icf_edit_indi_pane_g2

0x0001,

0xff04,	// (0x0002e8c7) icf_edit_indi_pane_g_ParamLimits

0xff04,	// (0x0002e8c7) icf_edit_indi_pane_g

0xf45e,	// (0x0002de21) icf_edit_indi_pane_t1

0xf3f3,	// (0x0002ddb6) bg_input_focus_pane_cp042

0x1b4a,	// (0x0002050d) vtchi_button_pane

0xf3fc,	// (0x0002ddbf) vtchi_query_pane_t1

0xf40a,	// (0x0002ddcd) vtchi_query_pane_t2

0xf418,	// (0x0002dddb) vtchi_query_pane_t3

0x0002,

0xfef3,	// (0x0002e8b6) vtchi_query_pane_t

0x1545,	// (0x0001ff08) bg_button_pane_cp13

0xf426,	// (0x0002dde9) vtchi_button_pane_g1

0x9083,	// (0x00027a46) ituss_sks_pane_g1

0x908e,	// (0x00027a51) ituss_sks_pane_g2

0x0001,

0xfefa,	// (0x0002e8bd) ituss_sks_pane_g

0xf42e,	// (0x0002ddf1) ituss_sks_pane_t1

0xf43c,	// (0x0002ddff) ituss_sks_pane_t2

0x0001,

0xfeff,	// (0x0002e8c2) ituss_sks_pane_t

0xba95,	// (0x0002a458) indicator_nsta_pane_cp_g1

0xba9e,	// (0x0002a461) indicator_nsta_pane_cp_g2

0xbaa6,	// (0x0002a469) indicator_nsta_pane_cp_g3

0xbaae,	// (0x0002a471) indicator_nsta_pane_cp_g4

0xba9e,	// (0x0002a461) indicator_nsta_pane_cp_g5

0xbaa6,	// (0x0002a469) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x0002e446) indicator_nsta_pane_cp_g

0xe208,	// (0x0002cbcb) cell_graphic2_pane_t2_ParamLimits

0xe208,	// (0x0002cbcb) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x0002e753) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x0002e753) cell_graphic2_pane_t

0xe234,	// (0x0002cbf7) cell_graphic2_control_pane_t1

0x6d22,	// (0x000256e5) signal_pane_g3_ParamLimits

0x6d22,	// (0x000256e5) signal_pane_g3

0x6d31,	// (0x000256f4) signal_pane_g4_ParamLimits

0x6d31,	// (0x000256f4) signal_pane_g4

0xf14d,	// (0x0002db10) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf14d,	// (0x0002db10) cell_ai5_widget_list_row_pane_t3

0xf301,	// (0x0002dcc4) cell_ituss_key_pane_t1_ParamLimits

0xf301,	// (0x0002dcc4) cell_ituss_key_pane_t1

0x9a7b,	// (0x0002843e) form_field_data_wide_pane_vc_t2_ParamLimits

0x9a7b,	// (0x0002843e) form_field_data_wide_pane_vc_t2

0x9a8f,	// (0x00028452) form_field_data_wide_pane_vc_t3_ParamLimits

0x9a8f,	// (0x00028452) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0002e1a7) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0002e1a7) form_field_data_wide_pane_vc_t

0xb732,	// (0x0002a0f5) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb732,	// (0x0002a0f5) form_field_slider_wide_pane_vc_t3

0xb808,	// (0x0002a1cb) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb808,	// (0x0002a1cb) form_field_popup_wide_pane_vc_t2

0xb81f,	// (0x0002a1e2) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb81f,	// (0x0002a1e2) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x0002e435) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0002e435) form_field_popup_wide_pane_vc_t

0x8c58,	// (0x0002761b) aid_fshwr2_btn_pane_ParamLimits

0x8c68,	// (0x0002762b) aid_fshwr2_syb_pane_ParamLimits

0x8c7c,	// (0x0002763f) aid_fshwr2_txt_pane_ParamLimits

0x3106,	// (0x00021ac9) fshwr2_bg_pane_ParamLimits

0x8c8c,	// (0x0002764f) fshwr2_func_candi_pane_ParamLimits

0x8cac,	// (0x0002766f) fshwr2_hwr_syb_pane_ParamLimits

0x8cc2,	// (0x00027685) fshwr2_icf_pane_ParamLimits

0x5ab0,	// (0x00024473) list_double_graphic_pane_vc_g4_ParamLimits

0x5ab0,	// (0x00024473) list_double_graphic_pane_vc_g4

0x8f3f,	// (0x00027902) cell_ituss_key_pane_g3_ParamLimits

0x8f3f,	// (0x00027902) cell_ituss_key_pane_g3

0x9071,	// (0x00027a34) cell_ituss_key_t5_ParamLimits

0x9071,	// (0x00027a34) cell_ituss_key_t5

0xf1bf,	// (0x0002db82) popup_fep_vkbss_window_ParamLimits

0xe646,	// (0x0002d009) aid_cell_ai5_quarter

0xf45e,	// (0x0002de21) icf_edit_indi_pane_t1_ParamLimits

0x17aa,	// (0x0002016d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x17aa,	// (0x0002016d) aid_tch_indicator_popup_pane_cp2

0x17bd,	// (0x00020180) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x17bd,	// (0x00020180) aid_tch_query_popup_data_pane_cp2

0x9dbc,	// (0x0002877f) aid_tch_query_popup_pane_ParamLimits

0x9dbc,	// (0x0002877f) aid_tch_query_popup_pane

0x9dbc,	// (0x0002877f) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9dbc,	// (0x0002877f) aid_tch_query_popup_data_pane_cp1

0x9440,	// (0x00027e03) cell_fshwr2_syb_bg_pane_ParamLimits

0x8dbe,	// (0x00027781) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8dd2,	// (0x00027795) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf1a9,	// (0x0002db6c) popup_fep_vkb_icf_pane_ParamLimits

0x8aac,	// (0x0002746f) bg_popup_fep_char_preview_window_g10

0xe77b,	// (0x0002d13e) cell_ai5_widget_pane_g11_ParamLimits

0xe77b,	// (0x0002d13e) cell_ai5_widget_pane_g11

0xe787,	// (0x0002d14a) cell_ai5_widget_pane_g12_ParamLimits

0xe787,	// (0x0002d14a) cell_ai5_widget_pane_g12

0xe793,	// (0x0002d156) cell_ai5_widget_pane_g13_ParamLimits

0xe793,	// (0x0002d156) cell_ai5_widget_pane_g13

0xe8c3,	// (0x0002d286) cell_ai5_widget_pane_t11_ParamLimits

0xe8c3,	// (0x0002d286) cell_ai5_widget_pane_t11

0xe8d5,	// (0x0002d298) cell_ai5_widget_pane_t12_ParamLimits

0xe8d5,	// (0x0002d298) cell_ai5_widget_pane_t12

0x8f4b,	// (0x0002790e) cell_ituss_key_pane_g4_ParamLimits

0x8f4b,	// (0x0002790e) cell_ituss_key_pane_g4

0x8f67,	// (0x0002792a) cell_ituss_key_pane_g5_ParamLimits

0x8f67,	// (0x0002792a) cell_ituss_key_pane_g5

0x8f83,	// (0x00027946) cell_ituss_key_pane_g6_ParamLimits

0x8f83,	// (0x00027946) cell_ituss_key_pane_g6

0x9976,	// (0x00028339) bg_icf_pane_g1

0xf369,	// (0x0002dd2c) bg_icf_pane_g2

0xf375,	// (0x0002dd38) bg_icf_pane_g3

0xf37f,	// (0x0002dd42) bg_icf_pane_g4

0xf38b,	// (0x0002dd4e) bg_icf_pane_g5

0xf395,	// (0x0002dd58) bg_icf_pane_g6

0xf3a1,	// (0x0002dd64) bg_icf_pane_g7

0xf3ab,	// (0x0002dd6e) bg_icf_pane_g8

0xf3b7,	// (0x0002dd7a) bg_icf_pane_g9

0x0008,

0xfee0,	// (0x0002e8a3) bg_icf_pane_g

0xf1ee,	// (0x0002dbb1) popup_hyb_candi_window_ParamLimits

0xf1ee,	// (0x0002dbb1) popup_hyb_candi_window

0x99ea,	// (0x000283ad) bg_popup_sub_pane_cp01_ParamLimits

0x99ea,	// (0x000283ad) bg_popup_sub_pane_cp01

0xf477,	// (0x0002de3a) entry_hyb_candi_pane_ParamLimits

0xf477,	// (0x0002de3a) entry_hyb_candi_pane

0xf486,	// (0x0002de49) grid_hyb_candi_pane_ParamLimits

0xf486,	// (0x0002de49) grid_hyb_candi_pane

0xf49b,	// (0x0002de5e) grid_hyb_phrase_pane_ParamLimits

0xf49b,	// (0x0002de5e) grid_hyb_phrase_pane

0xf4aa,	// (0x0002de6d) cell_hyb_candi_pane_ParamLimits

0xf4aa,	// (0x0002de6d) cell_hyb_candi_pane

0x1b53,	// (0x00020516) cell_hyb_candi_scroll_pane

0x6bcb,	// (0x0002558e) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0002de89) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0002de97) cell_hyb_phrase_pane

0x6bcb,	// (0x0002558e) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0002dea0) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0002deae) entry_hyb_candi_pane_t1

0x9119,	// (0x00027adc) input_focus_pane_cp06

0xf4f9,	// (0x0002debc) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0002dec4) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0002decc) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0002ded4) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0002dedc) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0002dee4) cell_hyb_candi_scroll_pane_g4
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

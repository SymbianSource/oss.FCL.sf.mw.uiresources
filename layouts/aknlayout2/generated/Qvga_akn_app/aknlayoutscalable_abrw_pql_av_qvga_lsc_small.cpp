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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00020927 };

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
0xd807,	// (0x0002e12e) Screen

0xd811,	// (0x0002e138) application_window_ParamLimits

0xd811,	// (0x0002e138) application_window

0x274f,	// (0x00023076) screen_g1

0xd83f,	// (0x0002e166) area_bottom_pane_ParamLimits

0xd83f,	// (0x0002e166) area_bottom_pane

0x2759,	// (0x00023080) area_top_pane_ParamLimits

0x2759,	// (0x00023080) area_top_pane

0x7848,	// (0x0002816f) main_pane_ParamLimits

0x7848,	// (0x0002816f) main_pane

0x27d1,	// (0x000230f8) misc_graphics

0x0252,	// (0x00020b79) battery_pane_ParamLimits

0x0252,	// (0x00020b79) battery_pane

0x4367,	// (0x00024c8e) bg_status_flat_pane_g8

0x436f,	// (0x00024c96) bg_status_flat_pane_g9

0x3a4c,	// (0x00024373) context_pane_ParamLimits

0x3a4c,	// (0x00024373) context_pane

0x03ac,	// (0x00020cd3) navi_pane_ParamLimits

0x03ac,	// (0x00020cd3) navi_pane

0x0421,	// (0x00020d48) signal_pane_ParamLimits

0x0421,	// (0x00020d48) signal_pane

0x0008,

0xf84f,	// (0x00030176) bg_status_flat_pane_g

0x04ad,	// (0x00020dd4) status_pane_g1_ParamLimits

0x04ad,	// (0x00020dd4) status_pane_g1

0x04b9,	// (0x00020de0) status_pane_g2_ParamLimits

0x04b9,	// (0x00020de0) status_pane_g2

0x3ab2,	// (0x000243d9) status_pane_g3_ParamLimits

0x3ab2,	// (0x000243d9) status_pane_g3

0x0004,

0xf77b,	// (0x000300a2) status_pane_g_ParamLimits

0xf77b,	// (0x000300a2) status_pane_g

0x04c5,	// (0x00020dec) title_pane_ParamLimits

0x04c5,	// (0x00020dec) title_pane

0x0520,	// (0x00020e47) uni_indicator_pane_ParamLimits

0x0520,	// (0x00020e47) uni_indicator_pane

0x39a3,	// (0x000242ca) bg_list_pane_ParamLimits

0x39a3,	// (0x000242ca) bg_list_pane

0xf50c,	// (0x0002fe33) find_pane

0xdfd5,	// (0x0002e8fc) listscroll_app_pane_ParamLimits

0xdfd5,	// (0x0002e8fc) listscroll_app_pane

0x39c3,	// (0x000242ea) listscroll_form_pane

0xf514,	// (0x0002fe3b) listscroll_gen_pane_ParamLimits

0xf514,	// (0x0002fe3b) listscroll_gen_pane

0x8648,	// (0x00028f6f) listscroll_set_pane

0xdfe5,	// (0x0002e90c) main_idle_act_pane

0x37c1,	// (0x000240e8) main_idle_trad_pane

0x37c1,	// (0x000240e8) main_list_empty_pane

0x2f9c,	// (0x000238c3) main_midp_pane

0x39dd,	// (0x00024304) main_pane_g1_ParamLimits

0x39dd,	// (0x00024304) main_pane_g1

0xdff8,	// (0x0002e91f) popup_ai_message_window_ParamLimits

0xdff8,	// (0x0002e91f) popup_ai_message_window

0xe07c,	// (0x0002e9a3) popup_fep_china_uni_window_ParamLimits

0xe07c,	// (0x0002e9a3) popup_fep_china_uni_window

0x8732,	// (0x00029059) popup_fep_japan_candidate_window_ParamLimits

0x8732,	// (0x00029059) popup_fep_japan_candidate_window

0x8750,	// (0x00029077) popup_fep_japan_predictive_window_ParamLimits

0x8750,	// (0x00029077) popup_fep_japan_predictive_window

0xe0ba,	// (0x0002e9e1) popup_find_window

0xe0d3,	// (0x0002e9fa) popup_grid_graphic_window_ParamLimits

0xe0d3,	// (0x0002e9fa) popup_grid_graphic_window

0x87a7,	// (0x000290ce) popup_large_graphic_colour_window

0xe14f,	// (0x0002ea76) popup_menu_window_ParamLimits

0xe14f,	// (0x0002ea76) popup_menu_window

0xe2ad,	// (0x0002ebd4) popup_note_image_window

0xe275,	// (0x0002eb9c) popup_note_wait_window_ParamLimits

0xe275,	// (0x0002eb9c) popup_note_wait_window

0xe2c3,	// (0x0002ebea) popup_note_window_ParamLimits

0xe2c3,	// (0x0002ebea) popup_note_window

0xe357,	// (0x0002ec7e) popup_query_code_window_ParamLimits

0xe357,	// (0x0002ec7e) popup_query_code_window

0x8967,	// (0x0002928e) popup_query_data_code_window_ParamLimits

0x8967,	// (0x0002928e) popup_query_data_code_window

0xe38f,	// (0x0002ecb6) popup_query_data_window_ParamLimits

0xe38f,	// (0x0002ecb6) popup_query_data_window

0xe403,	// (0x0002ed2a) popup_query_sat_info_window_ParamLimits

0xe403,	// (0x0002ed2a) popup_query_sat_info_window

0xe490,	// (0x0002edb7) popup_snote_single_graphic_window_ParamLimits

0xe490,	// (0x0002edb7) popup_snote_single_graphic_window

0xe490,	// (0x0002edb7) popup_snote_single_text_window_ParamLimits

0xe490,	// (0x0002edb7) popup_snote_single_text_window

0x89d6,	// (0x000292fd) popup_sub_window_general

0x8ada,	// (0x00029401) popup_window_general_ParamLimits

0x8ada,	// (0x00029401) popup_window_general

0x39eb,	// (0x00024312) power_save_pane

0xdea2,	// (0x0002e7c9) control_pane_g1_ParamLimits

0xdea2,	// (0x0002e7c9) control_pane_g1

0x84ce,	// (0x00028df5) control_pane_g2_ParamLimits

0x84ce,	// (0x00028df5) control_pane_g2

0x3995,	// (0x000242bc) control_pane_g3_ParamLimits

0x3995,	// (0x000242bc) control_pane_g3

0x0007,

0xf763,	// (0x0003008a) control_pane_g_ParamLimits

0xf763,	// (0x0003008a) control_pane_g

0xded7,	// (0x0002e7fe) control_pane_t1_ParamLimits

0xded7,	// (0x0002e7fe) control_pane_t1

0xdf35,	// (0x0002e85c) control_pane_t2_ParamLimits

0xdf35,	// (0x0002e85c) control_pane_t2

0x0002,

0xf774,	// (0x0003009b) control_pane_t_ParamLimits

0xf774,	// (0x0003009b) control_pane_t

0x38f0,	// (0x00024217) navi_navi_volume_pane_cp1

0x38f8,	// (0x0002421f) status_small_icon_pane

0x3900,	// (0x00024227) status_small_pane_g1_ParamLimits

0x3900,	// (0x00024227) status_small_pane_g1

0x3934,	// (0x0002425b) status_small_pane_g2_ParamLimits

0x3934,	// (0x0002425b) status_small_pane_g2

0x3940,	// (0x00024267) status_small_pane_g3_ParamLimits

0x3940,	// (0x00024267) status_small_pane_g3

0xf4af,	// (0x0002fdd6) status_small_pane_g4_ParamLimits

0xf4af,	// (0x0002fdd6) status_small_pane_g4

0xf4bb,	// (0x0002fde2) status_small_pane_g5_ParamLimits

0xf4bb,	// (0x0002fde2) status_small_pane_g5

0x394c,	// (0x00024273) status_small_pane_g6_ParamLimits

0x394c,	// (0x00024273) status_small_pane_g6

0x0007,

0xf752,	// (0x00030079) status_small_pane_g_ParamLimits

0xf752,	// (0x00030079) status_small_pane_g

0x397b,	// (0x000242a2) status_small_pane_t1

0xf4d1,	// (0x0002fdf8) status_small_wait_pane_ParamLimits

0xf4d1,	// (0x0002fdf8) status_small_wait_pane

0xf35e,	// (0x0002fc85) aid_levels_signal_ParamLimits

0xf35e,	// (0x0002fc85) aid_levels_signal

0xf372,	// (0x0002fc99) signal_pane_g1_ParamLimits

0xf372,	// (0x0002fc99) signal_pane_g1

0xf38c,	// (0x0002fcb3) signal_pane_g2_ParamLimits

0xf38c,	// (0x0002fcb3) signal_pane_g2

0x0003,

0xf6e3,	// (0x0003000a) signal_pane_g_ParamLimits

0xf6e3,	// (0x0003000a) signal_pane_g

0x335f,	// (0x00023c86) context_pane_g1

0xd9d6,	// (0x0002e2fd) title_pane_g1

0xda18,	// (0x0002e33f) title_pane_t1

0x27e7,	// (0x0002310e) title_pane_t2

0x280d,	// (0x00023134) title_pane_t3

0x0002,

0xf532,	// (0x0002fe59) title_pane_t

0x0546,	// (0x00020e6d) aid_levels_battery_ParamLimits

0x0546,	// (0x00020e6d) aid_levels_battery

0x055e,	// (0x00020e85) battery_pane_g1_ParamLimits

0x055e,	// (0x00020e85) battery_pane_g1

0x0579,	// (0x00020ea0) battery_pane_g2_ParamLimits

0x0579,	// (0x00020ea0) battery_pane_g2

0x0001,

0xf786,	// (0x000300ad) battery_pane_g_ParamLimits

0xf786,	// (0x000300ad) battery_pane_g

0x0881,	// (0x000211a8) uni_indicator_pane_g1

0x0895,	// (0x000211bc) uni_indicator_pane_g2

0x08aa,	// (0x000211d1) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0003021e) uni_indicator_pane_g

0x2f10,	// (0x00023837) navi_icon_pane_ParamLimits

0x2f10,	// (0x00023837) navi_icon_pane

0x27d1,	// (0x000230f8) navi_midp_pane

0x27d1,	// (0x000230f8) navi_navi_pane

0x2f10,	// (0x00023837) navi_text_pane_ParamLimits

0x2f10,	// (0x00023837) navi_text_pane

0x274f,	// (0x00023076) status_small_wait_pane_g1

0x2b22,	// (0x00023449) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00030219) status_small_wait_pane_g

0x0827,	// (0x0002114e) navi_navi_icon_text_pane

0x0841,	// (0x00021168) navi_navi_pane_g1_ParamLimits

0x0841,	// (0x00021168) navi_navi_pane_g1

0x082f,	// (0x00021156) navi_navi_pane_g2_ParamLimits

0x082f,	// (0x00021156) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x000301e7) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x000301e7) navi_navi_pane_g

0x0853,	// (0x0002117a) navi_navi_tabs_pane

0x0827,	// (0x0002114e) navi_navi_text_pane

0x0827,	// (0x0002114e) navi_navi_volume_pane

0x48ad,	// (0x000251d4) navi_text_pane_t1

0x48a1,	// (0x000251c8) navi_icon_pane_g1

0x47f5,	// (0x0002511c) navi_navi_text_pane_t1

0x9181,	// (0x00029aa8) navi_navi_volume_pane_g1

0xe6de,	// (0x0002f005) volume_small_pane

0x077a,	// (0x000210a1) navi_navi_icon_text_pane_g1

0x0782,	// (0x000210a9) navi_navi_icon_text_pane_t1

0x43af,	// (0x00024cd6) navi_tabs_2_long_pane

0x43af,	// (0x00024cd6) navi_tabs_2_pane

0x43af,	// (0x00024cd6) navi_tabs_3_long_pane

0x43af,	// (0x00024cd6) navi_tabs_3_pane

0x43af,	// (0x00024cd6) navi_tabs_4_pane

0xe6be,	// (0x0002efe5) tabs_2_active_pane_ParamLimits

0xe6be,	// (0x0002efe5) tabs_2_active_pane

0xe6ce,	// (0x0002eff5) tabs_2_passive_pane_ParamLimits

0xe6ce,	// (0x0002eff5) tabs_2_passive_pane

0xe68c,	// (0x0002efb3) tabs_3_active_pane_ParamLimits

0xe68c,	// (0x0002efb3) tabs_3_active_pane

0xe69c,	// (0x0002efc3) tabs_3_passive_pane_ParamLimits

0xe69c,	// (0x0002efc3) tabs_3_passive_pane

0xe6ad,	// (0x0002efd4) tabs_3_passive_pane_cp_ParamLimits

0xe6ad,	// (0x0002efd4) tabs_3_passive_pane_cp

0xe648,	// (0x0002ef6f) tabs_4_active_pane_ParamLimits

0xe648,	// (0x0002ef6f) tabs_4_active_pane

0xe659,	// (0x0002ef80) tabs_4_passive_pane_ParamLimits

0xe659,	// (0x0002ef80) tabs_4_passive_pane

0xe66a,	// (0x0002ef91) tabs_4_passive_pane_cp_ParamLimits

0xe66a,	// (0x0002ef91) tabs_4_passive_pane_cp

0xe67b,	// (0x0002efa2) tabs_4_passive_pane_cp2_ParamLimits

0xe67b,	// (0x0002efa2) tabs_4_passive_pane_cp2

0xe628,	// (0x0002ef4f) tabs_2_long_active_pane_ParamLimits

0xe628,	// (0x0002ef4f) tabs_2_long_active_pane

0xe638,	// (0x0002ef5f) tabs_2_long_passive_pane_ParamLimits

0xe638,	// (0x0002ef5f) tabs_2_long_passive_pane

0xe5f1,	// (0x0002ef18) tabs_3_long_active_pane_ParamLimits

0xe5f1,	// (0x0002ef18) tabs_3_long_active_pane

0xe604,	// (0x0002ef2b) tabs_3_long_passive_pane_ParamLimits

0xe604,	// (0x0002ef2b) tabs_3_long_passive_pane

0xe615,	// (0x0002ef3c) tabs_3_long_passive_pane_cp_ParamLimits

0xe615,	// (0x0002ef3c) tabs_3_long_passive_pane_cp

0x8fae,	// (0x000298d5) volume_small_pane_g1

0x8fb7,	// (0x000298de) volume_small_pane_g2

0x8fc0,	// (0x000298e7) volume_small_pane_g3

0x8fc9,	// (0x000298f0) volume_small_pane_g4

0x8fd2,	// (0x000298f9) volume_small_pane_g5

0x8fdb,	// (0x00029902) volume_small_pane_g6

0x8fe4,	// (0x0002990b) volume_small_pane_g7

0x8fed,	// (0x00029914) volume_small_pane_g8

0x8ff6,	// (0x0002991d) volume_small_pane_g9

0x8fff,	// (0x00029926) volume_small_pane_g10

0x0009,

0xf88c,	// (0x000301b3) volume_small_pane_g

0x281f,	// (0x00023146) bg_active_tab_pane_cp2_ParamLimits

0x281f,	// (0x00023146) bg_active_tab_pane_cp2

0x282d,	// (0x00023154) tabs_3_active_pane_g1

0xdaa5,	// (0x0002e3cc) tabs_3_active_pane_t1

0x281f,	// (0x00023146) bg_passive_tab_pane_cp2_ParamLimits

0x281f,	// (0x00023146) bg_passive_tab_pane_cp2

0x282d,	// (0x00023154) tabs_3_passive_pane_g1

0xdaa5,	// (0x0002e3cc) tabs_3_passive_pane_t1

0x281f,	// (0x00023146) bg_active_tab_pane_cp3_ParamLimits

0x281f,	// (0x00023146) bg_active_tab_pane_cp3

0x40bb,	// (0x000249e2) tabs_4_active_pane_g1

0xdabb,	// (0x0002e3e2) tabs_4_active_pane_t1

0x281f,	// (0x00023146) bg_passive_tab_pane_cp3_ParamLimits

0x281f,	// (0x00023146) bg_passive_tab_pane_cp3

0x40bb,	// (0x000249e2) tabs_4_1_passive_pane_g1

0xdabb,	// (0x0002e3e2) tabs_4_1_passive_pane_t1

0x2f9c,	// (0x000238c3) list_highlight_pane_cp2

0x0959,	// (0x00021280) list_set_pane_ParamLimits

0x0959,	// (0x00021280) list_set_pane

0x09e7,	// (0x0002130e) main_pane_set_t1_ParamLimits

0x09e7,	// (0x0002130e) main_pane_set_t1

0x0a07,	// (0x0002132e) main_pane_set_t2_ParamLimits

0x0a07,	// (0x0002132e) main_pane_set_t2

0x0a1b,	// (0x00021342) main_pane_set_t3_ParamLimits

0x0a1b,	// (0x00021342) main_pane_set_t3

0x0a2d,	// (0x00021354) main_pane_set_t4_ParamLimits

0x0a2d,	// (0x00021354) main_pane_set_t4

0x0003,

0xf95c,	// (0x00030283) main_pane_set_t_ParamLimits

0xf95c,	// (0x00030283) main_pane_set_t

0x0a3f,	// (0x00021366) setting_code_pane

0x0a47,	// (0x0002136e) setting_slider_graphic_pane

0x0a47,	// (0x0002136e) setting_slider_pane

0x0a47,	// (0x0002136e) setting_text_pane

0x0a47,	// (0x0002136e) setting_volume_pane

0xdad1,	// (0x0002e3f8) volume_set_pane

0x2835,	// (0x0002315c) bg_set_opt_pane_cp

0x7b0d,	// (0x00028434) setting_slider_pane_t1

0xdad9,	// (0x0002e400) setting_slider_pane_t2

0xdaf2,	// (0x0002e419) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0002fe60) setting_slider_pane_t

0x7b53,	// (0x0002847a) slider_set_pane

0x27d1,	// (0x000230f8) bg_set_opt_pane_cp2

0x2843,	// (0x0002316a) setting_slider_graphic_pane_g1

0xdb09,	// (0x0002e430) setting_slider_graphic_pane_t1

0xdb18,	// (0x0002e43f) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0002fe67) setting_slider_graphic_pane_t

0xdb27,	// (0x0002e44e) slider_set_pane_cp

0x27d1,	// (0x000230f8) input_focus_pane_cp1

0x4ce9,	// (0x00025610) list_set_text_pane

0x274f,	// (0x00023076) setting_text_pane_g1

0x27d1,	// (0x000230f8) input_focus_pane_cp2

0x274f,	// (0x00023076) setting_code_pane_g1

0x284c,	// (0x00023173) setting_code_pane_t1

0xed8c,	// (0x0002f6b3) set_text_pane_t1_ParamLimits

0xed8c,	// (0x0002f6b3) set_text_pane_t1

0x2e5e,	// (0x00023785) set_opt_bg_pane_g1

0x2e66,	// (0x0002378d) set_opt_bg_pane_g2

0x0925,	// (0x0002124c) set_opt_bg_pane_g3

0x2e76,	// (0x0002379d) set_opt_bg_pane_g4

0x2e7e,	// (0x000237a5) set_opt_bg_pane_g5

0x2e86,	// (0x000237ad) set_opt_bg_pane_g6

0x092d,	// (0x00021254) set_opt_bg_pane_g7

0x0935,	// (0x0002125c) set_opt_bg_pane_g8

0x093d,	// (0x00021264) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x00030270) set_opt_bg_pane_g

0x4cdc,	// (0x00025603) slider_set_pane_g1

0x9259,	// (0x00029b80) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00030261) slider_set_pane_g

0xe6e7,	// (0x0002f00e) volume_set_pane_g1

0xe6ef,	// (0x0002f016) volume_set_pane_g2

0xe6f7,	// (0x0002f01e) volume_set_pane_g3

0xe6ff,	// (0x0002f026) volume_set_pane_g4

0xe707,	// (0x0002f02e) volume_set_pane_g5

0xe70f,	// (0x0002f036) volume_set_pane_g6

0xe717,	// (0x0002f03e) volume_set_pane_g7

0xe71f,	// (0x0002f046) volume_set_pane_g8

0xe727,	// (0x0002f04e) volume_set_pane_g9

0xe72f,	// (0x0002f056) volume_set_pane_g10

0x0009,

0xf912,	// (0x00030239) volume_set_pane_g

0xdb2f,	// (0x0002e456) indicator_pane_ParamLimits

0xdb2f,	// (0x0002e456) indicator_pane

0xdb57,	// (0x0002e47e) main_idle_pane_g2_ParamLimits

0xdb57,	// (0x0002e47e) main_idle_pane_g2

0xdb87,	// (0x0002e4ae) main_pane_idle_g1_ParamLimits

0xdb87,	// (0x0002e4ae) main_pane_idle_g1

0x285a,	// (0x00023181) popup_clock_digital_analogue_window_ParamLimits

0x285a,	// (0x00023181) popup_clock_digital_analogue_window

0xdbac,	// (0x0002e4d3) soft_indicator_pane_ParamLimits

0xdbac,	// (0x0002e4d3) soft_indicator_pane

0xdbc6,	// (0x0002e4ed) wallpaper_pane_ParamLimits

0xdbc6,	// (0x0002e4ed) wallpaper_pane

0x274f,	// (0x00023076) wallpaper_pane_g1

0xdbd8,	// (0x0002e4ff) indicator_pane_g1_ParamLimits

0xdbd8,	// (0x0002e4ff) indicator_pane_g1

0x4df2,	// (0x00025719) navi_navi_icon_text_pane_srt_g1

0x2888,	// (0x000231af) soft_indicator_pane_t1

0x28a2,	// (0x000231c9) aid_ps_area_pane

0xdbf1,	// (0x0002e518) aid_ps_clock_pane

0x28b3,	// (0x000231da) aid_ps_indicator_pane

0x28bf,	// (0x000231e6) indicator_ps_pane_ParamLimits

0x28bf,	// (0x000231e6) indicator_ps_pane

0x28ce,	// (0x000231f5) power_save_pane_g1_ParamLimits

0x28ce,	// (0x000231f5) power_save_pane_g1

0x28da,	// (0x00023201) power_save_pane_g2_ParamLimits

0x28da,	// (0x00023201) power_save_pane_g2

0x7755,	// (0x0002807c) aid_navinavi_width_pane

0x28a2,	// (0x000231c9) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0002fe6c) power_save_pane_g_ParamLimits

0xf545,	// (0x0002fe6c) power_save_pane_g

0x28e8,	// (0x0002320f) power_save_pane_t1_ParamLimits

0x28e8,	// (0x0002320f) power_save_pane_t1

0xdbf1,	// (0x0002e518) aid_ps_clock_pane_ParamLimits

0x28b3,	// (0x000231da) aid_ps_indicator_pane_ParamLimits

0x28fa,	// (0x00023221) power_save_pane_t4_ParamLimits

0x28fa,	// (0x00023221) power_save_pane_t4

0x0001,

0xf54a,	// (0x0002fe71) power_save_pane_t_ParamLimits

0xf54a,	// (0x0002fe71) power_save_pane_t

0x2924,	// (0x0002324b) power_save_t3_ParamLimits

0x2924,	// (0x0002324b) power_save_t3

0x290f,	// (0x00023236) power_save_t2_ParamLimits

0x290f,	// (0x00023236) power_save_t2

0x2939,	// (0x00023260) indicator_ps_pane_g1

0xdbfd,	// (0x0002e524) ai_gene_pane_ParamLimits

0xdbfd,	// (0x0002e524) ai_gene_pane

0xdc14,	// (0x0002e53b) ai_links_pane_ParamLimits

0xdc14,	// (0x0002e53b) ai_links_pane

0xdc26,	// (0x0002e54d) indicator_pane_cp1_ParamLimits

0xdc26,	// (0x0002e54d) indicator_pane_cp1

0xdc35,	// (0x0002e55c) main_pane_idle_g1_cp_ParamLimits

0xdc35,	// (0x0002e55c) main_pane_idle_g1_cp

0x2942,	// (0x00023269) popup_ai_links_title_window

0xdc4d,	// (0x0002e574) soft_indicator_pane_cp1_ParamLimits

0xdc4d,	// (0x0002e574) soft_indicator_pane_cp1

0x4b32,	// (0x00025459) ai_links_pane_g1

0x4b3b,	// (0x00025462) grid_ai_links_pane

0x0878,	// (0x0002119f) ai_gene_pane_1

0x4b20,	// (0x00025447) ai_gene_pane_2

0x4b29,	// (0x00025450) list_highlight_pane_cp4

0x085c,	// (0x00021183) cell_ai_link_pane_ParamLimits

0x085c,	// (0x00021183) cell_ai_link_pane

0x4b18,	// (0x0002543f) cell_ai_link_pane_g1

0x2b22,	// (0x00023449) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00030214) cell_ai_link_pane_g

0x27d1,	// (0x000230f8) grid_highlight_cp2

0x27d1,	// (0x000230f8) bg_popup_sub_pane_cp1

0x2959,	// (0x00023280) popup_ai_links_title_window_t1

0x4a6a,	// (0x00025391) ai_gene_pane_1_g1_ParamLimits

0x4a6a,	// (0x00025391) ai_gene_pane_1_g1

0x4a76,	// (0x0002539d) ai_gene_pane_1_g2_ParamLimits

0x4a76,	// (0x0002539d) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0003020a) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0003020a) ai_gene_pane_1_g

0x4a83,	// (0x000253aa) ai_gene_pane_1_t1_ParamLimits

0x4a83,	// (0x000253aa) ai_gene_pane_1_t1

0x4ab7,	// (0x000253de) grid_ai_soft_ind_pane

0x4a55,	// (0x0002537c) ai_gene_pane_2_t1_ParamLimits

0x4a55,	// (0x0002537c) ai_gene_pane_2_t1

0xdc61,	// (0x0002e588) main_pane_empty_t1_ParamLimits

0xdc61,	// (0x0002e588) main_pane_empty_t1

0xdc7e,	// (0x0002e5a5) main_pane_empty_t2_ParamLimits

0xdc7e,	// (0x0002e5a5) main_pane_empty_t2

0xdc96,	// (0x0002e5bd) main_pane_empty_t3_ParamLimits

0xdc96,	// (0x0002e5bd) main_pane_empty_t3

0xdca9,	// (0x0002e5d0) main_pane_empty_t4_ParamLimits

0xdca9,	// (0x0002e5d0) main_pane_empty_t4

0xdcbc,	// (0x0002e5e3) main_pane_empty_t5_ParamLimits

0xdcbc,	// (0x0002e5e3) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0002fe76) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0002fe76) main_pane_empty_t

0x2f10,	// (0x00023837) bg_popup_window_pane_ParamLimits

0x2f10,	// (0x00023837) bg_popup_window_pane

0x4804,	// (0x0002512b) find_popup_pane_cp2_ParamLimits

0x4804,	// (0x0002512b) find_popup_pane_cp2

0x4810,	// (0x00025137) heading_pane_ParamLimits

0x4810,	// (0x00025137) heading_pane

0x27d1,	// (0x000230f8) bg_popup_sub_pane

0x079f,	// (0x000210c6) bg_popup_window_pane_g1_ParamLimits

0x079f,	// (0x000210c6) bg_popup_window_pane_g1

0x07ae,	// (0x000210d5) bg_popup_window_pane_g2_ParamLimits

0x07ae,	// (0x000210d5) bg_popup_window_pane_g2

0x07ba,	// (0x000210e1) bg_popup_window_pane_g3_ParamLimits

0x07ba,	// (0x000210e1) bg_popup_window_pane_g3

0x07c6,	// (0x000210ed) bg_popup_window_pane_g4_ParamLimits

0x07c6,	// (0x000210ed) bg_popup_window_pane_g4

0x07d5,	// (0x000210fc) bg_popup_window_pane_g5_ParamLimits

0x07d5,	// (0x000210fc) bg_popup_window_pane_g5

0x07e5,	// (0x0002110c) bg_popup_window_pane_g6_ParamLimits

0x07e5,	// (0x0002110c) bg_popup_window_pane_g6

0x07f1,	// (0x00021118) bg_popup_window_pane_g7_ParamLimits

0x07f1,	// (0x00021118) bg_popup_window_pane_g7

0x0800,	// (0x00021127) bg_popup_window_pane_g8_ParamLimits

0x0800,	// (0x00021127) bg_popup_window_pane_g8

0x080f,	// (0x00021136) bg_popup_window_pane_g9_ParamLimits

0x080f,	// (0x00021136) bg_popup_window_pane_g9

0x47e9,	// (0x00025110) bg_popup_window_pane_g10_ParamLimits

0x47e9,	// (0x00025110) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x000301d2) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x000301d2) bg_popup_window_pane_g

0x47a0,	// (0x000250c7) bg_popup_heading_pane_ParamLimits

0x47a0,	// (0x000250c7) bg_popup_heading_pane

0x953e,	// (0x00029e65) tabs_4_passive_pane_cp_srt_ParamLimits

0x953e,	// (0x00029e65) tabs_4_passive_pane_cp_srt

0x9550,	// (0x00029e77) tabs_4_passive_pane_srt_ParamLimits

0x47b4,	// (0x000250db) heading_pane_g2

0x9550,	// (0x00029e77) tabs_4_passive_pane_srt

0x3c26,	// (0x0002454d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3c26,	// (0x0002454d) bg_passive_tab_pane_cp3_srt

0x47bc,	// (0x000250e3) heading_pane_t1_ParamLimits

0x47bc,	// (0x000250e3) heading_pane_t1

0x47d3,	// (0x000250fa) heading_pane_t2_ParamLimits

0x47d3,	// (0x000250fa) heading_pane_t2

0x0001,

0xf8a6,	// (0x000301cd) heading_pane_t_ParamLimits

0xf8a6,	// (0x000301cd) heading_pane_t

0x432f,	// (0x00024c56) bg_popup_heading_pane_g1

0x43c0,	// (0x00024ce7) bg_popup_heading_pane_g2

0x43c8,	// (0x00024cef) bg_popup_heading_pane_g3

0x43d0,	// (0x00024cf7) bg_popup_heading_pane_g4

0x43d8,	// (0x00024cff) bg_popup_heading_pane_g5

0x43e0,	// (0x00024d07) bg_popup_heading_pane_g6

0x43e8,	// (0x00024d0f) bg_popup_heading_pane_g7

0x43f0,	// (0x00024d17) bg_popup_heading_pane_g8

0x43f8,	// (0x00024d1f) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00030189) bg_popup_heading_pane_g

0x3b9a,	// (0x000244c1) bg_popup_sub_pane_g1

0x3ba2,	// (0x000244c9) bg_popup_sub_pane_g2

0x3baa,	// (0x000244d1) bg_popup_sub_pane_g3

0x3bb2,	// (0x000244d9) bg_popup_sub_pane_g4

0x3bba,	// (0x000244e1) bg_popup_sub_pane_g5

0x3bc2,	// (0x000244e9) bg_popup_sub_pane_g6

0x3bca,	// (0x000244f1) bg_popup_sub_pane_g7

0x3bd2,	// (0x000244f9) bg_popup_sub_pane_g8

0x3bda,	// (0x00024501) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00030163) bg_popup_sub_pane_g

0x281f,	// (0x00023146) bg_popup_window_pane_cp5_ParamLimits

0x281f,	// (0x00023146) bg_popup_window_pane_cp5

0x2976,	// (0x0002329d) popup_note_window_g1_ParamLimits

0x2976,	// (0x0002329d) popup_note_window_g1

0x2982,	// (0x000232a9) popup_note_window_t1_ParamLimits

0x2982,	// (0x000232a9) popup_note_window_t1

0x2998,	// (0x000232bf) popup_note_window_t2_ParamLimits

0x2998,	// (0x000232bf) popup_note_window_t2

0x29ae,	// (0x000232d5) popup_note_window_t3_ParamLimits

0x29ae,	// (0x000232d5) popup_note_window_t3

0x29c4,	// (0x000232eb) popup_note_window_t4_ParamLimits

0x29c4,	// (0x000232eb) popup_note_window_t4

0x29ec,	// (0x00023313) popup_note_window_t5_ParamLimits

0x29ec,	// (0x00023313) popup_note_window_t5

0x0004,

0xf55a,	// (0x0002fe81) popup_note_window_t_ParamLimits

0xf55a,	// (0x0002fe81) popup_note_window_t

0x2a36,	// (0x0002335d) bg_popup_window_pane_cp6_ParamLimits

0x2a36,	// (0x0002335d) bg_popup_window_pane_cp6

0x42ab,	// (0x00024bd2) popup_note_image_window_g1_ParamLimits

0x42ab,	// (0x00024bd2) popup_note_image_window_g1

0x42b7,	// (0x00024bde) popup_note_image_window_g2_ParamLimits

0x42b7,	// (0x00024bde) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00030157) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00030157) popup_note_image_window_g

0x42d0,	// (0x00024bf7) popup_note_image_window_t1_ParamLimits

0x42d0,	// (0x00024bf7) popup_note_image_window_t1

0x42e9,	// (0x00024c10) popup_note_image_window_t2_ParamLimits

0x42e9,	// (0x00024c10) popup_note_image_window_t2

0x4302,	// (0x00024c29) popup_note_image_window_t3_ParamLimits

0x4302,	// (0x00024c29) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0003015c) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0003015c) popup_note_image_window_t

0x4196,	// (0x00024abd) bg_popup_window_pane_cp7_ParamLimits

0x4196,	// (0x00024abd) bg_popup_window_pane_cp7

0x41c6,	// (0x00024aed) popup_note_wait_window_g1_ParamLimits

0x41c6,	// (0x00024aed) popup_note_wait_window_g1

0x41d2,	// (0x00024af9) popup_note_wait_window_g2_ParamLimits

0x41d2,	// (0x00024af9) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00030145) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00030145) popup_note_wait_window_g

0x41ea,	// (0x00024b11) popup_note_wait_window_t1_ParamLimits

0x41ea,	// (0x00024b11) popup_note_wait_window_t1

0x4211,	// (0x00024b38) popup_note_wait_window_t2_ParamLimits

0x4211,	// (0x00024b38) popup_note_wait_window_t2

0x422e,	// (0x00024b55) popup_note_wait_window_t3_ParamLimits

0x422e,	// (0x00024b55) popup_note_wait_window_t3

0x4241,	// (0x00024b68) popup_note_wait_window_t4_ParamLimits

0x4241,	// (0x00024b68) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0003014c) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0003014c) popup_note_wait_window_t

0x4266,	// (0x00024b8d) wait_bar_pane_ParamLimits

0x4266,	// (0x00024b8d) wait_bar_pane

0x27d1,	// (0x000230f8) wait_anim_pane

0x27d1,	// (0x000230f8) wait_border_pane

0x274f,	// (0x00023076) wait_anim_pane_g1

0x274f,	// (0x00023076) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x00030005) wait_anim_pane_g

0x4146,	// (0x00024a6d) wait_border_pane_g1

0x414f,	// (0x00024a76) wait_border_pane_g2

0x4158,	// (0x00024a7f) wait_border_pane_g3

0x0002,

0xf817,	// (0x0003013e) wait_border_pane_g

0x3f6c,	// (0x00024893) bg_popup_window_pane_cp16_ParamLimits

0x3f6c,	// (0x00024893) bg_popup_window_pane_cp16

0x406c,	// (0x00024993) indicator_popup_pane_cp4_ParamLimits

0x406c,	// (0x00024993) indicator_popup_pane_cp4

0x4080,	// (0x000249a7) popup_query_data_window_t1_ParamLimits

0x4080,	// (0x000249a7) popup_query_data_window_t1

0x4092,	// (0x000249b9) popup_query_data_window_t2_ParamLimits

0x4092,	// (0x000249b9) popup_query_data_window_t2

0x40f5,	// (0x00024a1c) popup_query_data_window_t3_ParamLimits

0x40f5,	// (0x00024a1c) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00030137) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00030137) popup_query_data_window_t

0x410f,	// (0x00024a36) query_popup_data_pane_ParamLimits

0x410f,	// (0x00024a36) query_popup_data_pane

0x4123,	// (0x00024a4a) query_popup_data_pane_cp1_ParamLimits

0x4123,	// (0x00024a4a) query_popup_data_pane_cp1

0x3f6c,	// (0x00024893) bg_popup_window_pane_cp10_ParamLimits

0x3f6c,	// (0x00024893) bg_popup_window_pane_cp10

0x3f9e,	// (0x000248c5) indicator_popup_pane_ParamLimits

0x3f9e,	// (0x000248c5) indicator_popup_pane

0x3fc0,	// (0x000248e7) popup_query_code_window_t1_ParamLimits

0x3fc0,	// (0x000248e7) popup_query_code_window_t1

0x3fda,	// (0x00024901) popup_query_code_window_t2_ParamLimits

0x3fda,	// (0x00024901) popup_query_code_window_t2

0x4023,	// (0x0002494a) popup_query_code_window_t3_ParamLimits

0x4023,	// (0x0002494a) popup_query_code_window_t3

0x0002,

0xf809,	// (0x00030130) popup_query_code_window_t_ParamLimits

0xf809,	// (0x00030130) popup_query_code_window_t

0x4052,	// (0x00024979) query_popup_pane_ParamLimits

0x4052,	// (0x00024979) query_popup_pane

0x2a36,	// (0x0002335d) bg_popup_window_pane_cp15_ParamLimits

0x2a36,	// (0x0002335d) bg_popup_window_pane_cp15

0x2a54,	// (0x0002337b) indicator_popup_pane_cp1_ParamLimits

0x2a54,	// (0x0002337b) indicator_popup_pane_cp1

0x2a67,	// (0x0002338e) indicator_popup_pane_cp2_ParamLimits

0x2a67,	// (0x0002338e) indicator_popup_pane_cp2

0x2a7a,	// (0x000233a1) popup_query_data_code_window_g1_ParamLimits

0x2a7a,	// (0x000233a1) popup_query_data_code_window_g1

0x2a8d,	// (0x000233b4) popup_query_data_code_window_t1_ParamLimits

0x2a8d,	// (0x000233b4) popup_query_data_code_window_t1

0x2a9f,	// (0x000233c6) popup_query_data_code_window_t2_ParamLimits

0x2a9f,	// (0x000233c6) popup_query_data_code_window_t2

0x2ab1,	// (0x000233d8) popup_query_data_code_window_t3_ParamLimits

0x2ab1,	// (0x000233d8) popup_query_data_code_window_t3

0x2ac7,	// (0x000233ee) popup_query_data_code_window_t4_ParamLimits

0x2ac7,	// (0x000233ee) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0002fe8c) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0002fe8c) popup_query_data_code_window_t

0x8e35,	// (0x0002975c) list_single_midp_graphic_pane_g3

0x2adf,	// (0x00023406) query_popup_data_pane_cp2_ParamLimits

0x2af2,	// (0x00023419) query_popup_pane_cp2_ParamLimits

0x2af2,	// (0x00023419) query_popup_pane_cp2

0x27d1,	// (0x000230f8) bg_popup_window_pane_cp11

0x3f50,	// (0x00024877) heading_pane_cp5

0x3f58,	// (0x0002487f) listscroll_popup_info_pane

0x27d1,	// (0x000230f8) input_focus_pane_cp3

0x2b05,	// (0x0002342c) query_popup_pane_t1

0x2b13,	// (0x0002343a) list_popup_info_pane_ParamLimits

0x2b13,	// (0x0002343a) list_popup_info_pane

0x2b22,	// (0x00023449) listscroll_popup_info_pane_g1

0x2b2a,	// (0x00023451) scroll_pane_cp7

0x2b32,	// (0x00023459) popup_info_list_pane_t1_ParamLimits

0x2b32,	// (0x00023459) popup_info_list_pane_t1

0x2b4c,	// (0x00023473) popup_info_list_pane_t2_ParamLimits

0x2b4c,	// (0x00023473) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0002fe95) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0002fe95) popup_info_list_pane_t

0x27d1,	// (0x000230f8) bg_popup_window_pane_cp12

0x4e0c,	// (0x00025733) find_popup_pane

0x2835,	// (0x0002315c) bg_popup_window_pane_cp3

0x2b66,	// (0x0002348d) heading_pane_cp3

0x2b75,	// (0x0002349c) listscroll_popup_graphic_pane

0x27d1,	// (0x000230f8) bg_popup_window_pane_cp4

0xdd1f,	// (0x0002e646) heading_pane_cp4

0x2b84,	// (0x000234ab) listscroll_popup_colour_pane

0x2b8c,	// (0x000234b3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2b8c,	// (0x000234b3) cell_large_graphic_colour_none_popup_pane

0xdd27,	// (0x0002e64e) grid_large_graphic_colour_popup_pane_ParamLimits

0xdd27,	// (0x0002e64e) grid_large_graphic_colour_popup_pane

0x2b9c,	// (0x000234c3) listscroll_popup_colour_pane_g1_ParamLimits

0x2b9c,	// (0x000234c3) listscroll_popup_colour_pane_g1

0x2bb3,	// (0x000234da) listscroll_popup_colour_pane_g2_ParamLimits

0x2bb3,	// (0x000234da) listscroll_popup_colour_pane_g2

0x2bca,	// (0x000234f1) listscroll_popup_colour_pane_g3_ParamLimits

0x2bca,	// (0x000234f1) listscroll_popup_colour_pane_g3

0xdd43,	// (0x0002e66a) listscroll_popup_colour_pane_g4_ParamLimits

0xdd43,	// (0x0002e66a) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0002fe9a) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0002fe9a) listscroll_popup_colour_pane_g

0x2bda,	// (0x00023501) scroll_pane_cp6_ParamLimits

0x2bda,	// (0x00023501) scroll_pane_cp6

0xdd52,	// (0x0002e679) cell_large_graphic_colour_popup_pane_ParamLimits

0xdd52,	// (0x0002e679) cell_large_graphic_colour_popup_pane

0x2bec,	// (0x00023513) cell_large_graphic_colour_none_popup_pane_t1

0x27d1,	// (0x000230f8) grid_highlight_pane_cp5

0x2bfb,	// (0x00023522) cell_large_graphic_colour_popup_pane_g1

0x2c03,	// (0x0002352a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0002fea3) cell_large_graphic_colour_popup_pane_g

0x2c0b,	// (0x00023532) cell_large_graphic_colour_popup_pane_g2_copy1

0x2c14,	// (0x0002353b) grid_highlight_pane_cp4

0x2c1c,	// (0x00023543) bg_popup_window_pane_cp8_ParamLimits

0x2c1c,	// (0x00023543) bg_popup_window_pane_cp8

0x2c37,	// (0x0002355e) popup_snote_single_text_window_g1_ParamLimits

0x2c37,	// (0x0002355e) popup_snote_single_text_window_g1

0x2c49,	// (0x00023570) popup_snote_single_text_window_t1_ParamLimits

0x2c49,	// (0x00023570) popup_snote_single_text_window_t1

0x2c5c,	// (0x00023583) popup_snote_single_text_window_t2_ParamLimits

0x2c5c,	// (0x00023583) popup_snote_single_text_window_t2

0x2c6f,	// (0x00023596) popup_snote_single_text_window_t3_ParamLimits

0x2c6f,	// (0x00023596) popup_snote_single_text_window_t3

0x2ca8,	// (0x000235cf) popup_snote_single_text_window_t4_ParamLimits

0x2ca8,	// (0x000235cf) popup_snote_single_text_window_t4

0x2cdc,	// (0x00023603) popup_snote_single_text_window_t5_ParamLimits

0x2cdc,	// (0x00023603) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0002fea8) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0002fea8) popup_snote_single_text_window_t

0x2d0b,	// (0x00023632) bg_popup_window_pane_cp9_ParamLimits

0x2d0b,	// (0x00023632) bg_popup_window_pane_cp9

0x2c37,	// (0x0002355e) popup_snote_single_graphic_window_g1_ParamLimits

0x2c37,	// (0x0002355e) popup_snote_single_graphic_window_g1

0x2d19,	// (0x00023640) popup_snote_single_graphic_window_g2_ParamLimits

0x2d19,	// (0x00023640) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0002feb3) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0002feb3) popup_snote_single_graphic_window_g

0x2d25,	// (0x0002364c) popup_snote_single_graphic_window_t1_ParamLimits

0x2d25,	// (0x0002364c) popup_snote_single_graphic_window_t1

0x2d38,	// (0x0002365f) popup_snote_single_graphic_window_t2_ParamLimits

0x2d38,	// (0x0002365f) popup_snote_single_graphic_window_t2

0x2c6f,	// (0x00023596) popup_snote_single_graphic_window_t3_ParamLimits

0x2c6f,	// (0x00023596) popup_snote_single_graphic_window_t3

0x2ca8,	// (0x000235cf) popup_snote_single_graphic_window_t4_ParamLimits

0x2ca8,	// (0x000235cf) popup_snote_single_graphic_window_t4

0x2cdc,	// (0x00023603) popup_snote_single_graphic_window_t5_ParamLimits

0x2cdc,	// (0x00023603) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0002feb8) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0002feb8) popup_snote_single_graphic_window_t

0x0b0c,	// (0x00021433) grid_graphic_popup_pane_ParamLimits

0x0b0c,	// (0x00021433) grid_graphic_popup_pane

0x0b2f,	// (0x00021456) listscroll_popup_graphic_pane_g1_ParamLimits

0x0b2f,	// (0x00021456) listscroll_popup_graphic_pane_g1

0x0b43,	// (0x0002146a) listscroll_popup_graphic_pane_g2_ParamLimits

0x0b43,	// (0x0002146a) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x000302ad) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x000302ad) listscroll_popup_graphic_pane_g

0x40e9,	// (0x00024a10) scroll_pane_cp5

0x0ac8,	// (0x000213ef) cell_graphic_popup_pane_ParamLimits

0x0ac8,	// (0x000213ef) cell_graphic_popup_pane

0x4db5,	// (0x000256dc) cell_graphic_popup_pane_g1

0x4dbd,	// (0x000256e4) cell_graphic_popup_pane_g2

0x2c0b,	// (0x00023532) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x000302a6) cell_graphic_popup_pane_g

0x4dc6,	// (0x000256ed) cell_graphic_popup_pane_t2

0x2c14,	// (0x0002353b) grid_highlight_pane_cp3

0x2d5d,	// (0x00023684) list_gen_pane_ParamLimits

0x2d5d,	// (0x00023684) list_gen_pane

0x2d86,	// (0x000236ad) scroll_pane

0x0a9b,	// (0x000213c2) bg_list_pane_g1_ParamLimits

0x0a9b,	// (0x000213c2) bg_list_pane_g1

0x4d6c,	// (0x00025693) bg_list_pane_g2_ParamLimits

0x4d6c,	// (0x00025693) bg_list_pane_g2

0x4d7f,	// (0x000256a6) bg_list_pane_g3_ParamLimits

0x4d7f,	// (0x000256a6) bg_list_pane_g3

0x4d91,	// (0x000256b8) bg_list_pane_g4_ParamLimits

0x4d91,	// (0x000256b8) bg_list_pane_g4

0x0ab6,	// (0x000213dd) bg_list_pane_g5_ParamLimits

0x0ab6,	// (0x000213dd) bg_list_pane_g5

0x0004,

0xf974,	// (0x0003029b) bg_list_pane_g_ParamLimits

0xf974,	// (0x0003029b) bg_list_pane_g

0x0a74,	// (0x0002139b) list_double2_graphic_large_graphic_pane_ParamLimits

0x0a74,	// (0x0002139b) list_double2_graphic_large_graphic_pane

0x0a74,	// (0x0002139b) list_double2_graphic_pane_ParamLimits

0x0a74,	// (0x0002139b) list_double2_graphic_pane

0x0a74,	// (0x0002139b) list_double2_large_graphic_pane_ParamLimits

0x0a74,	// (0x0002139b) list_double2_large_graphic_pane

0x0a74,	// (0x0002139b) list_double2_pane_ParamLimits

0x0a74,	// (0x0002139b) list_double2_pane

0x0a74,	// (0x0002139b) list_double_graphic_heading_pane_ParamLimits

0x0a74,	// (0x0002139b) list_double_graphic_heading_pane

0x0a74,	// (0x0002139b) list_double_graphic_pane_ParamLimits

0x0a74,	// (0x0002139b) list_double_graphic_pane

0x0a74,	// (0x0002139b) list_double_heading_pane_ParamLimits

0x0a74,	// (0x0002139b) list_double_heading_pane

0x0a74,	// (0x0002139b) list_double_large_graphic_pane_ParamLimits

0x0a74,	// (0x0002139b) list_double_large_graphic_pane

0x0a74,	// (0x0002139b) list_double_number_pane_ParamLimits

0x0a74,	// (0x0002139b) list_double_number_pane

0x0a74,	// (0x0002139b) list_double_pane_ParamLimits

0x0a74,	// (0x0002139b) list_double_pane

0x0a74,	// (0x0002139b) list_double_time_pane_ParamLimits

0x0a74,	// (0x0002139b) list_double_time_pane

0x0a74,	// (0x0002139b) list_setting_number_pane_ParamLimits

0x0a74,	// (0x0002139b) list_setting_number_pane

0x0a74,	// (0x0002139b) list_setting_pane_ParamLimits

0x0a74,	// (0x0002139b) list_setting_pane

0x0a86,	// (0x000213ad) list_single_2graphic_pane_ParamLimits

0x0a86,	// (0x000213ad) list_single_2graphic_pane

0x0a86,	// (0x000213ad) list_single_graphic_heading_pane_ParamLimits

0x0a86,	// (0x000213ad) list_single_graphic_heading_pane

0x0a86,	// (0x000213ad) list_single_graphic_pane_ParamLimits

0x0a86,	// (0x000213ad) list_single_graphic_pane

0x0a86,	// (0x000213ad) list_single_heading_pane_ParamLimits

0x0a86,	// (0x000213ad) list_single_heading_pane

0xf09d,	// (0x0002f9c4) list_single_large_graphic_pane_ParamLimits

0xf09d,	// (0x0002f9c4) list_single_large_graphic_pane

0x0a86,	// (0x000213ad) list_single_number_heading_pane_ParamLimits

0x0a86,	// (0x000213ad) list_single_number_heading_pane

0x0a86,	// (0x000213ad) list_single_number_pane_ParamLimits

0x0a86,	// (0x000213ad) list_single_number_pane

0x0a86,	// (0x000213ad) list_single_pane_ParamLimits

0x0a86,	// (0x000213ad) list_single_pane

0x27d1,	// (0x000230f8) list_highlight_pane_cp1

0xb297,	// (0x0002bbbe) list_single_pane_g1_ParamLimits

0xb297,	// (0x0002bbbe) list_single_pane_g1

0xb2a3,	// (0x0002bbca) list_single_pane_g2_ParamLimits

0xb2a3,	// (0x0002bbca) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0002feca) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0002feca) list_single_pane_g

0xbafa,	// (0x0002c421) list_single_pane_t1_ParamLimits

0xbafa,	// (0x0002c421) list_single_pane_t1

0xb297,	// (0x0002bbbe) list_single_number_pane_g1_ParamLimits

0xb297,	// (0x0002bbbe) list_single_number_pane_g1

0xb2a3,	// (0x0002bbca) list_single_number_pane_g2_ParamLimits

0xb2a3,	// (0x0002bbca) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0002feca) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0002feca) list_single_number_pane_g

0xb2af,	// (0x0002bbd6) list_single_number_pane_t1_ParamLimits

0xb2af,	// (0x0002bbd6) list_single_number_pane_t1

0xbabb,	// (0x0002c3e2) list_single_number_pane_t2_ParamLimits

0xbabb,	// (0x0002c3e2) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0003025c) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0003025c) list_single_number_pane_t

0xb9f6,	// (0x0002c31d) list_single_graphic_pane_g1_ParamLimits

0xb9f6,	// (0x0002c31d) list_single_graphic_pane_g1

0xb297,	// (0x0002bbbe) list_single_graphic_pane_g2_ParamLimits

0xb297,	// (0x0002bbbe) list_single_graphic_pane_g2

0xb2a3,	// (0x0002bbca) list_single_graphic_pane_g3_ParamLimits

0xb2a3,	// (0x0002bbca) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0002fec3) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0002fec3) list_single_graphic_pane_g

0xb2af,	// (0x0002bbd6) list_single_graphic_pane_t1_ParamLimits

0xb2af,	// (0x0002bbd6) list_single_graphic_pane_t1

0xb297,	// (0x0002bbbe) list_single_heading_pane_g1_ParamLimits

0xb297,	// (0x0002bbbe) list_single_heading_pane_g1

0xb2a3,	// (0x0002bbca) list_single_heading_pane_g2_ParamLimits

0xb2a3,	// (0x0002bbca) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002feca) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002feca) list_single_heading_pane_g

0xb2c5,	// (0x0002bbec) list_single_heading_pane_t1_ParamLimits

0xb2c5,	// (0x0002bbec) list_single_heading_pane_t1

0xb2db,	// (0x0002bc02) list_single_heading_pane_t2_ParamLimits

0xb2db,	// (0x0002bc02) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0002fecf) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0002fecf) list_single_heading_pane_t

0xb297,	// (0x0002bbbe) list_single_number_heading_pane_g1_ParamLimits

0xb297,	// (0x0002bbbe) list_single_number_heading_pane_g1

0xb2a3,	// (0x0002bbca) list_single_number_heading_pane_g2_ParamLimits

0xb2a3,	// (0x0002bbca) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0002feca) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0002feca) list_single_number_heading_pane_g

0xb2c5,	// (0x0002bbec) list_single_number_heading_pane_t1_ParamLimits

0xb2c5,	// (0x0002bbec) list_single_number_heading_pane_t1

0xb2ed,	// (0x0002bc14) list_single_number_heading_pane_t2_ParamLimits

0xb2ed,	// (0x0002bc14) list_single_number_heading_pane_t2

0xb2ff,	// (0x0002bc26) list_single_number_heading_pane_t3_ParamLimits

0xb2ff,	// (0x0002bc26) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0002fed4) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0002fed4) list_single_number_heading_pane_t

0xb9f6,	// (0x0002c31d) list_single_graphic_heading_pane_g1_ParamLimits

0xb9f6,	// (0x0002c31d) list_single_graphic_heading_pane_g1

0xeda6,	// (0x0002f6cd) list_single_graphic_heading_pane_g4_ParamLimits

0xeda6,	// (0x0002f6cd) list_single_graphic_heading_pane_g4

0xb2a3,	// (0x0002bbca) list_single_graphic_heading_pane_g5_ParamLimits

0xb2a3,	// (0x0002bbca) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0002fedb) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0002fedb) list_single_graphic_heading_pane_g

0xb2c5,	// (0x0002bbec) list_single_graphic_heading_pane_t1_ParamLimits

0xb2c5,	// (0x0002bbec) list_single_graphic_heading_pane_t1

0xb320,	// (0x0002bc47) list_single_graphic_heading_pane_t2_ParamLimits

0xb320,	// (0x0002bc47) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0002fee2) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0002fee2) list_single_graphic_heading_pane_t

0xbc11,	// (0x0002c538) list_single_large_graphic_pane_g1_ParamLimits

0xbc11,	// (0x0002c538) list_single_large_graphic_pane_g1

0xbc1d,	// (0x0002c544) list_single_large_graphic_pane_g2_ParamLimits

0xbc1d,	// (0x0002c544) list_single_large_graphic_pane_g2

0xbc29,	// (0x0002c550) list_single_large_graphic_pane_g3_ParamLimits

0xbc29,	// (0x0002c550) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0002fee7) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0002fee7) list_single_large_graphic_pane_g

0x414f,	// (0x00024a76) wait_border_pane_g2_copy1

0xedb7,	// (0x0002f6de) list_single_large_graphic_pane_g4_cp2

0xbc35,	// (0x0002c55c) list_single_large_graphic_pane_t1_ParamLimits

0xbc35,	// (0x0002c55c) list_single_large_graphic_pane_t1

0xb374,	// (0x0002bc9b) list_double_pane_g1_ParamLimits

0xb374,	// (0x0002bc9b) list_double_pane_g1

0xb380,	// (0x0002bca7) list_double_pane_g2_ParamLimits

0xb380,	// (0x0002bca7) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0002feee) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0002feee) list_double_pane_g

0xb38c,	// (0x0002bcb3) list_double_pane_t1_ParamLimits

0xb38c,	// (0x0002bcb3) list_double_pane_t1

0xb3a2,	// (0x0002bcc9) list_double_pane_t2_ParamLimits

0xb3a2,	// (0x0002bcc9) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0002fef3) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0002fef3) list_double_pane_t

0xedbf,	// (0x0002f6e6) list_double2_pane_g1_ParamLimits

0xedbf,	// (0x0002f6e6) list_double2_pane_g1

0xb558,	// (0x0002be7f) list_double2_pane_g2_ParamLimits

0xb558,	// (0x0002be7f) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0002fef8) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0002fef8) list_double2_pane_g

0xedd0,	// (0x0002f6f7) list_double2_pane_t1_ParamLimits

0xedd0,	// (0x0002f6f7) list_double2_pane_t1

0xb5bd,	// (0x0002bee4) list_double2_pane_t2_ParamLimits

0xb5bd,	// (0x0002bee4) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0002fefd) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0002fefd) list_double2_pane_t

0xb374,	// (0x0002bc9b) list_double_number_pane_g1_ParamLimits

0xb374,	// (0x0002bc9b) list_double_number_pane_g1

0xb380,	// (0x0002bca7) list_double_number_pane_g2_ParamLimits

0xb380,	// (0x0002bca7) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0002feee) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0002feee) list_double_number_pane_g

0xb3f7,	// (0x0002bd1e) list_double_number_pane_t1_ParamLimits

0xb3f7,	// (0x0002bd1e) list_double_number_pane_t1

0xb409,	// (0x0002bd30) list_double_number_pane_t2_ParamLimits

0xb409,	// (0x0002bd30) list_double_number_pane_t2

0xb41f,	// (0x0002bd46) list_double_number_pane_t3_ParamLimits

0xb41f,	// (0x0002bd46) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0002ff02) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0002ff02) list_double_number_pane_t

0xb28b,	// (0x0002bbb2) list_double_graphic_pane_g1_ParamLimits

0xb28b,	// (0x0002bbb2) list_double_graphic_pane_g1

0xb431,	// (0x0002bd58) list_double_graphic_pane_g2_ParamLimits

0xb431,	// (0x0002bd58) list_double_graphic_pane_g2

0xb440,	// (0x0002bd67) list_double_graphic_pane_g3_ParamLimits

0xb440,	// (0x0002bd67) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0002ff09) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0002ff09) list_double_graphic_pane_g

0xb458,	// (0x0002bd7f) list_double_graphic_pane_t1_ParamLimits

0xb458,	// (0x0002bd7f) list_double_graphic_pane_t1

0xb46e,	// (0x0002bd95) list_double_graphic_pane_t2_ParamLimits

0xb46e,	// (0x0002bd95) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0002ff12) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0002ff12) list_double_graphic_pane_t

0xb480,	// (0x0002bda7) list_double2_graphic_pane_g1_ParamLimits

0xb480,	// (0x0002bda7) list_double2_graphic_pane_g1

0xb374,	// (0x0002bc9b) list_double2_graphic_pane_g2_ParamLimits

0xb374,	// (0x0002bc9b) list_double2_graphic_pane_g2

0xb380,	// (0x0002bca7) list_double2_graphic_pane_g3_ParamLimits

0xb380,	// (0x0002bca7) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0002ff17) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0002ff17) list_double2_graphic_pane_g

0xb48c,	// (0x0002bdb3) list_double2_graphic_pane_t1_ParamLimits

0xb48c,	// (0x0002bdb3) list_double2_graphic_pane_t1

0xb4a2,	// (0x0002bdc9) list_double2_graphic_pane_t2_ParamLimits

0xb4a2,	// (0x0002bdc9) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0002ff1e) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0002ff1e) list_double2_graphic_pane_t

0xede6,	// (0x0002f70d) list_double_large_graphic_pane_g1_ParamLimits

0xede6,	// (0x0002f70d) list_double_large_graphic_pane_g1

0xee0f,	// (0x0002f736) list_double_large_graphic_pane_g2_ParamLimits

0xee0f,	// (0x0002f736) list_double_large_graphic_pane_g2

0xb380,	// (0x0002bca7) list_double_large_graphic_pane_g3_ParamLimits

0xb380,	// (0x0002bca7) list_double_large_graphic_pane_g3

0xee20,	// (0x0002f747) list_double_large_graphic_pane_g4_ParamLimits

0xee20,	// (0x0002f747) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0002ff23) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0002ff23) list_double_large_graphic_pane_g

0xb512,	// (0x0002be39) list_double_large_graphic_pane_t1_ParamLimits

0xb512,	// (0x0002be39) list_double_large_graphic_pane_t1

0xb52b,	// (0x0002be52) list_double_large_graphic_pane_t2_ParamLimits

0xb52b,	// (0x0002be52) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0002ff2e) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0002ff2e) list_double_large_graphic_pane_t

0xb53d,	// (0x0002be64) list_double2_large_graphic_pane_g1_ParamLimits

0xb53d,	// (0x0002be64) list_double2_large_graphic_pane_g1

0xedbf,	// (0x0002f6e6) list_double2_large_graphic_pane_g2_ParamLimits

0xedbf,	// (0x0002f6e6) list_double2_large_graphic_pane_g2

0xb558,	// (0x0002be7f) list_double2_large_graphic_pane_g3_ParamLimits

0xb558,	// (0x0002be7f) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0002ff33) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0002ff33) list_double2_large_graphic_pane_g

0xb564,	// (0x0002be8b) list_double2_large_graphic_pane_t1_ParamLimits

0xb564,	// (0x0002be8b) list_double2_large_graphic_pane_t1

0xb57a,	// (0x0002bea1) list_double2_large_graphic_pane_t2_ParamLimits

0xb57a,	// (0x0002bea1) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0002ff3a) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0002ff3a) list_double2_large_graphic_pane_t

0xee31,	// (0x0002f758) list_double_heading_pane_g1_ParamLimits

0xee31,	// (0x0002f758) list_double_heading_pane_g1

0xb59b,	// (0x0002bec2) list_double_heading_pane_g2_ParamLimits

0xb59b,	// (0x0002bec2) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0002ff3f) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0002ff3f) list_double_heading_pane_g

0xb5a7,	// (0x0002bece) list_double_heading_pane_t1_ParamLimits

0xb5a7,	// (0x0002bece) list_double_heading_pane_t1

0xb5bd,	// (0x0002bee4) list_double_heading_pane_t2_ParamLimits

0xb5bd,	// (0x0002bee4) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0002ff44) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0002ff44) list_double_heading_pane_t

0xb5cf,	// (0x0002bef6) list_double_graphic_heading_pane_g1_ParamLimits

0xb5cf,	// (0x0002bef6) list_double_graphic_heading_pane_g1

0xee31,	// (0x0002f758) list_double_graphic_heading_pane_g2_ParamLimits

0xee31,	// (0x0002f758) list_double_graphic_heading_pane_g2

0xb59b,	// (0x0002bec2) list_double_graphic_heading_pane_g3_ParamLimits

0xb59b,	// (0x0002bec2) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0002ff49) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0002ff49) list_double_graphic_heading_pane_g

0xb5db,	// (0x0002bf02) list_double_graphic_heading_pane_t1_ParamLimits

0xb5db,	// (0x0002bf02) list_double_graphic_heading_pane_t1

0xb4a2,	// (0x0002bdc9) list_double_graphic_heading_pane_t2_ParamLimits

0xb4a2,	// (0x0002bdc9) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0002ff50) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0002ff50) list_double_graphic_heading_pane_t

0xee0f,	// (0x0002f736) list_double_time_pane_g1_ParamLimits

0xee0f,	// (0x0002f736) list_double_time_pane_g1

0xb380,	// (0x0002bca7) list_double_time_pane_g2_ParamLimits

0xb380,	// (0x0002bca7) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0002ff55) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0002ff55) list_double_time_pane_g

0xb5f1,	// (0x0002bf18) list_double_time_pane_t1_ParamLimits

0xb5f1,	// (0x0002bf18) list_double_time_pane_t1

0xb607,	// (0x0002bf2e) list_double_time_pane_t2_ParamLimits

0xb607,	// (0x0002bf2e) list_double_time_pane_t2

0xb619,	// (0x0002bf40) list_double_time_pane_t3_ParamLimits

0xb619,	// (0x0002bf40) list_double_time_pane_t3

0xb62b,	// (0x0002bf52) list_double_time_pane_t4_ParamLimits

0xb62b,	// (0x0002bf52) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0002ff5a) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0002ff5a) list_double_time_pane_t

0xb63d,	// (0x0002bf64) list_setting_pane_g1_ParamLimits

0xb63d,	// (0x0002bf64) list_setting_pane_g1

0xb558,	// (0x0002be7f) list_setting_pane_g2_ParamLimits

0xb558,	// (0x0002be7f) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0002ff63) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0002ff63) list_setting_pane_g

0xb649,	// (0x0002bf70) list_setting_pane_t1_ParamLimits

0xb649,	// (0x0002bf70) list_setting_pane_t1

0xb663,	// (0x0002bf8a) list_setting_pane_t2_ParamLimits

0xb663,	// (0x0002bf8a) list_setting_pane_t2

0x0002,

0xf641,	// (0x0002ff68) list_setting_pane_t_ParamLimits

0xf641,	// (0x0002ff68) list_setting_pane_t

0xb6a0,	// (0x0002bfc7) set_value_pane_cp_ParamLimits

0xb6a0,	// (0x0002bfc7) set_value_pane_cp

0xb6ac,	// (0x0002bfd3) list_setting_number_pane_g1_ParamLimits

0xb6ac,	// (0x0002bfd3) list_setting_number_pane_g1

0xb6b8,	// (0x0002bfdf) list_setting_number_pane_g2_ParamLimits

0xb6b8,	// (0x0002bfdf) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0002ff6f) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0002ff6f) list_setting_number_pane_g

0xee42,	// (0x0002f769) list_setting_number_pane_t1_ParamLimits

0xee42,	// (0x0002f769) list_setting_number_pane_t1

0xb6db,	// (0x0002c002) list_setting_number_pane_t2_ParamLimits

0xb6db,	// (0x0002c002) list_setting_number_pane_t2

0xee5b,	// (0x0002f782) list_setting_number_pane_t3_ParamLimits

0xee5b,	// (0x0002f782) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0002ff74) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0002ff74) list_setting_number_pane_t

0xb6a0,	// (0x0002bfc7) set_value_pane_ParamLimits

0xb6a0,	// (0x0002bfc7) set_value_pane

0x2dbb,	// (0x000236e2) bg_set_opt_pane_ParamLimits

0x2dbb,	// (0x000236e2) bg_set_opt_pane

0xb736,	// (0x0002c05d) set_value_pane_t1

0x2ddc,	// (0x00023703) slider_set_pane_cp3

0x2de5,	// (0x0002370c) volume_small_pane_cp

0x2dee,	// (0x00023715) list_form_gen_pane

0x2daa,	// (0x000236d1) scroll_pane_cp8

0xee73,	// (0x0002f79a) form_field_data_pane_ParamLimits

0xee73,	// (0x0002f79a) form_field_data_pane

0xee8a,	// (0x0002f7b1) form_field_data_wide_pane_ParamLimits

0xee8a,	// (0x0002f7b1) form_field_data_wide_pane

0xeeaa,	// (0x0002f7d1) form_field_popup_pane_ParamLimits

0xeeaa,	// (0x0002f7d1) form_field_popup_pane

0xeec2,	// (0x0002f7e9) form_field_popup_wide_pane_ParamLimits

0xeec2,	// (0x0002f7e9) form_field_popup_wide_pane

0xb7ba,	// (0x0002c0e1) form_field_slider_pane_ParamLimits

0xb7ba,	// (0x0002c0e1) form_field_slider_pane

0xb7cd,	// (0x0002c0f4) form_field_slider_wide_pane_ParamLimits

0xb7cd,	// (0x0002c0f4) form_field_slider_wide_pane

0x2df7,	// (0x0002371e) data_form_pane

0xdd79,	// (0x0002e6a0) form_field_data_pane_t1

0x2e03,	// (0x0002372a) input_focus_pane

0x2e11,	// (0x00023738) data_form_wide_pane

0xb7f4,	// (0x0002c11b) form_field_data_wide_pane_t1

0x2c29,	// (0x00023550) input_focus_pane_cp6

0xeee3,	// (0x0002f80a) form_field_popup_pane_t1

0x2e03,	// (0x0002372a) input_focus_pane_cp7

0x2df7,	// (0x0002371e) list_form_pane

0xb836,	// (0x0002c15d) form_field_popup_wide_pane_t1

0x2e03,	// (0x0002372a) input_focus_pane_cp8

0x2e3d,	// (0x00023764) list_form_wide_pane

0xef03,	// (0x0002f82a) form_field_slider_pane_t1_ParamLimits

0xef03,	// (0x0002f82a) form_field_slider_pane_t1

0xef19,	// (0x0002f840) form_field_slider_pane_t2_ParamLimits

0xef19,	// (0x0002f840) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0002ff84) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0002ff84) form_field_slider_pane_t

0x281f,	// (0x00023146) input_focus_pane_cp9_ParamLimits

0x281f,	// (0x00023146) input_focus_pane_cp9

0xef2e,	// (0x0002f855) slider_cont_pane_ParamLimits

0xef2e,	// (0x0002f855) slider_cont_pane

0x2e4c,	// (0x00023773) form_field_slider_wide_pane_t1_ParamLimits

0x2e4c,	// (0x00023773) form_field_slider_wide_pane_t1

0xb88b,	// (0x0002c1b2) form_field_slider_wide_pane_t2_ParamLimits

0xb88b,	// (0x0002c1b2) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0002ff89) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0002ff89) form_field_slider_wide_pane_t

0x281f,	// (0x00023146) input_focus_pane_cp10_ParamLimits

0x281f,	// (0x00023146) input_focus_pane_cp10

0xef42,	// (0x0002f869) slider_cont_pane_cp1_ParamLimits

0xef42,	// (0x0002f869) slider_cont_pane_cp1

0xef58,	// (0x0002f87f) slider_form_pane_cp

0x2e5e,	// (0x00023785) input_focus_pane_g1

0x2e66,	// (0x0002378d) input_focus_pane_g2

0x2e6e,	// (0x00023795) input_focus_pane_g3

0x2e76,	// (0x0002379d) input_focus_pane_g4

0x2e7e,	// (0x000237a5) input_focus_pane_g5

0x2e86,	// (0x000237ad) input_focus_pane_g6

0x2e8e,	// (0x000237b5) input_focus_pane_g7

0x2e96,	// (0x000237bd) input_focus_pane_g8

0x2e9e,	// (0x000237c5) input_focus_pane_g9

0x274f,	// (0x00023076) input_focus_pane_g10

0x0009,

0xf667,	// (0x0002ff8e) input_focus_pane_g

0x4158,	// (0x00024a7f) wait_border_pane_g3_copy1

0xef60,	// (0x0002f887) data_form_pane_t1

0x274f,	// (0x00023076) wait_anim_pane_g1_copy1

0xf048,	// (0x0002f96f) data_form_wide_pane_t1

0xef79,	// (0x0002f8a0) list_form_graphic_pane_cp_ParamLimits

0xef79,	// (0x0002f8a0) list_form_graphic_pane_cp

0x4d0f,	// (0x00025636) slider_form_pane_g1

0x4d18,	// (0x0002563f) slider_form_pane_g2

0x0006,

0xf965,	// (0x0003028c) slider_form_pane_g

0xef8d,	// (0x0002f8b4) list_form_graphic_pane_ParamLimits

0xef8d,	// (0x0002f8b4) list_form_graphic_pane

0xb8eb,	// (0x0002c212) list_form_graphic_pane_g1

0xb8f3,	// (0x0002c21a) list_form_graphic_pane_t1_ParamLimits

0xb8f3,	// (0x0002c21a) list_form_graphic_pane_t1

0x2835,	// (0x0002315c) list_highlight_pane_cp5_ParamLimits

0x2835,	// (0x0002315c) list_highlight_pane_cp5

0xefa2,	// (0x0002f8c9) find_pane_g1

0x2ea6,	// (0x000237cd) input_find_pane

0xb911,	// (0x0002c238) input_find_pane_g1_ParamLimits

0xb911,	// (0x0002c238) input_find_pane_g1

0xefad,	// (0x0002f8d4) input_find_pane_t1_ParamLimits

0xefad,	// (0x0002f8d4) input_find_pane_t1

0xefc2,	// (0x0002f8e9) input_find_pane_t2_ParamLimits

0xefc2,	// (0x0002f8e9) input_find_pane_t2

0x0001,

0xf67c,	// (0x0002ffa3) input_find_pane_t_ParamLimits

0xf67c,	// (0x0002ffa3) input_find_pane_t

0x2eaf,	// (0x000237d6) input_focus_pane_cp5_ParamLimits

0x2eaf,	// (0x000237d6) input_focus_pane_cp5

0x281f,	// (0x00023146) bg_popup_window_pane_cp2_ParamLimits

0x281f,	// (0x00023146) bg_popup_window_pane_cp2

0x2ece,	// (0x000237f5) listscroll_menu_pane_ParamLimits

0x2ece,	// (0x000237f5) listscroll_menu_pane

0x2eda,	// (0x00023801) popup_submenu_window_ParamLimits

0x2eda,	// (0x00023801) popup_submenu_window

0x2efe,	// (0x00023825) find_popup_pane_g1

0x2f06,	// (0x0002382d) input_popup_find_pane_cp

0x2f10,	// (0x00023837) input_focus_pane_cp4_ParamLimits

0x2f10,	// (0x00023837) input_focus_pane_cp4

0x2f1e,	// (0x00023845) input_popup_find_pane_t1_ParamLimits

0x2f1e,	// (0x00023845) input_popup_find_pane_t1

0x27d1,	// (0x000230f8) bg_popup_sub_pane_cp

0x2f4c,	// (0x00023873) listscroll_popup_sub_pane

0x2f54,	// (0x0002387b) list_submenu_pane_ParamLimits

0x2f54,	// (0x0002387b) list_submenu_pane

0x2f65,	// (0x0002388c) scroll_pane_cp4

0x2f6d,	// (0x00023894) list_single_popup_submenu_pane_ParamLimits

0x2f6d,	// (0x00023894) list_single_popup_submenu_pane

0x2f7f,	// (0x000238a6) list_single_popup_submenu_pane_g1

0x2f87,	// (0x000238ae) list_single_popup_submenu_pane_t1_ParamLimits

0x2f87,	// (0x000238ae) list_single_popup_submenu_pane_t1

0x281f,	// (0x00023146) bg_active_tab_pane_cp1_ParamLimits

0x281f,	// (0x00023146) bg_active_tab_pane_cp1

0x40c3,	// (0x000249ea) tabs_2_active_pane_g1

0xdd9d,	// (0x0002e6c4) tabs_2_active_pane_t1

0x281f,	// (0x00023146) bg_passive_tab_pane_cp1_ParamLimits

0x281f,	// (0x00023146) bg_passive_tab_pane_cp1

0x40c3,	// (0x000249ea) tabs_2_passive_pane_g1

0xdd9d,	// (0x0002e6c4) tabs_2_passive_pane_t1

0x2835,	// (0x0002315c) bg_active_tab_pane_cp4

0xddb3,	// (0x0002e6da) tabs_2_long_active_pane_t1

0x2f9c,	// (0x000238c3) bg_passive_tab_pane_cp4

0x8e3d,	// (0x00029764) list_single_midp_graphic_pane_g4_ParamLimits

0x2835,	// (0x0002315c) bg_active_tab_pane_cp5

0xddca,	// (0x0002e6f1) tabs_3_long_active_pane_t1

0x2f9c,	// (0x000238c3) bg_passive_tab_pane_cp5

0x8e3d,	// (0x00029764) list_single_midp_graphic_pane_g4

0x2835,	// (0x0002315c) bg_popup_window_pane_cp13_ParamLimits

0x2835,	// (0x0002315c) bg_popup_window_pane_cp13

0x2fb1,	// (0x000238d8) listscroll_popup_fast_pane_ParamLimits

0x2fb1,	// (0x000238d8) listscroll_popup_fast_pane

0x2fc0,	// (0x000238e7) grid_popup_fast_pane_ParamLimits

0x2fc0,	// (0x000238e7) grid_popup_fast_pane

0x2fd2,	// (0x000238f9) scroll_pane_cp9_ParamLimits

0x2fd2,	// (0x000238f9) scroll_pane_cp9

0x6038,	// (0x0002695f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6038,	// (0x0002695f) list_single_graphic_hl_pane_t1_cp2

0x2ff6,	// (0x0002391d) input_focus_pane_cp20_ParamLimits

0x2ff6,	// (0x0002391d) input_focus_pane_cp20

0x3004,	// (0x0002392b) query_popup_data_pane_t1_ParamLimits

0x3004,	// (0x0002392b) query_popup_data_pane_t1

0x3017,	// (0x0002393e) query_popup_data_pane_t2_ParamLimits

0x3017,	// (0x0002393e) query_popup_data_pane_t2

0x305d,	// (0x00023984) query_popup_data_pane_t3_ParamLimits

0x305d,	// (0x00023984) query_popup_data_pane_t3

0x309e,	// (0x000239c5) query_popup_data_pane_t4_ParamLimits

0x309e,	// (0x000239c5) query_popup_data_pane_t4

0x30da,	// (0x00023a01) query_popup_data_pane_t5_ParamLimits

0x30da,	// (0x00023a01) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0002ffa8) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0002ffa8) query_popup_data_pane_t

0x2e5e,	// (0x00023785) bg_set_opt_pane_g1

0x2e66,	// (0x0002378d) bg_set_opt_pane_g2

0x2e6e,	// (0x00023795) bg_set_opt_pane_g3

0x2e76,	// (0x0002379d) bg_set_opt_pane_g4

0x2e7e,	// (0x000237a5) bg_set_opt_pane_g5

0x2e86,	// (0x000237ad) bg_set_opt_pane_g6

0x2e8e,	// (0x000237b5) bg_set_opt_pane_g7

0x2e96,	// (0x000237bd) bg_set_opt_pane_g8

0x2e9e,	// (0x000237c5) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0002ffb3) bg_set_opt_pane_g

0x81dd,	// (0x00028b04) control_top_pane_stacon_ParamLimits

0x81dd,	// (0x00028b04) control_top_pane_stacon

0x8230,	// (0x00028b57) signal_pane_stacon_ParamLimits

0x8230,	// (0x00028b57) signal_pane_stacon

0x34cd,	// (0x00023df4) stacon_top_pane_g1_ParamLimits

0x34cd,	// (0x00023df4) stacon_top_pane_g1

0x8255,	// (0x00028b7c) title_pane_stacon_ParamLimits

0x8255,	// (0x00028b7c) title_pane_stacon

0x8277,	// (0x00028b9e) uni_indicator_pane_stacon_ParamLimits

0x8277,	// (0x00028b9e) uni_indicator_pane_stacon

0x828c,	// (0x00028bb3) battery_pane_stacon_ParamLimits

0x828c,	// (0x00028bb3) battery_pane_stacon

0x82cc,	// (0x00028bf3) control_bottom_pane_stacon_ParamLimits

0x82cc,	// (0x00028bf3) control_bottom_pane_stacon

0x82eb,	// (0x00028c12) navi_pane_stacon_ParamLimits

0x82eb,	// (0x00028c12) navi_pane_stacon

0x34ef,	// (0x00023e16) stacon_bottom_pane_g1_ParamLimits

0x34ef,	// (0x00023e16) stacon_bottom_pane_g1

0x3111,	// (0x00023a38) aid_levels_signal_lsc_ParamLimits

0x3111,	// (0x00023a38) aid_levels_signal_lsc

0x7dcd,	// (0x000286f4) signal_pane_stacon_g1_ParamLimits

0x7dcd,	// (0x000286f4) signal_pane_stacon_g1

0x7dd9,	// (0x00028700) signal_pane_stacon_g2_ParamLimits

0x7dd9,	// (0x00028700) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0002ffc6) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0002ffc6) signal_pane_stacon_g

0x7e0d,	// (0x00028734) title_pane_stacon_t1_ParamLimits

0x7e0d,	// (0x00028734) title_pane_stacon_t1

0x313f,	// (0x00023a66) uni_indicator_pane_stacon_g1

0x3149,	// (0x00023a70) uni_indicator_pane_stacon_g2

0x312b,	// (0x00023a52) uni_indicator_pane_stacon_g3

0x3135,	// (0x00023a5c) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0002ffd2) uni_indicator_pane_stacon_g

0x7e32,	// (0x00028759) control_top_pane_stacon_g1

0x7e3a,	// (0x00028761) control_top_pane_stacon_t1_ParamLimits

0x7e3a,	// (0x00028761) control_top_pane_stacon_t1

0x3153,	// (0x00023a7a) aid_levels_battery_lsc_ParamLimits

0x3153,	// (0x00023a7a) aid_levels_battery_lsc

0x7e6b,	// (0x00028792) battery_pane_stacon_g1_ParamLimits

0x7e6b,	// (0x00028792) battery_pane_stacon_g1

0x7e77,	// (0x0002879e) battery_pane_stacon_g2_ParamLimits

0x7e77,	// (0x0002879e) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0002ffdb) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0002ffdb) battery_pane_stacon_g

0x7ea6,	// (0x000287cd) navi_icon_pane_stacon

0x7eb6,	// (0x000287dd) navi_navi_pane_stacon

0x7ea6,	// (0x000287cd) navi_text_pane_stacon

0x7e32,	// (0x00028759) control_bottom_pane_stacon_g1

0x7ec6,	// (0x000287ed) control_bottom_pane_stacon_t1_ParamLimits

0x7ec6,	// (0x000287ed) control_bottom_pane_stacon_t1

0xdde0,	// (0x0002e707) grid_app_pane_ParamLimits

0xdde0,	// (0x0002e707) grid_app_pane

0xde0e,	// (0x0002e735) scroll_pane_cp15_ParamLimits

0xde0e,	// (0x0002e735) scroll_pane_cp15

0xde21,	// (0x0002e748) cell_app_pane_ParamLimits

0xde21,	// (0x0002e748) cell_app_pane

0xde5e,	// (0x0002e785) cell_app_pane_g1_ParamLimits

0xde5e,	// (0x0002e785) cell_app_pane_g1

0x317b,	// (0x00023aa2) cell_app_pane_g2_ParamLimits

0x317b,	// (0x00023aa2) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0002ffe0) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0002ffe0) cell_app_pane_g

0xde82,	// (0x0002e7a9) cell_app_pane_t1_ParamLimits

0xde82,	// (0x0002e7a9) cell_app_pane_t1

0x3187,	// (0x00023aae) grid_highlight_pane_ParamLimits

0x3187,	// (0x00023aae) grid_highlight_pane

0x2e5e,	// (0x00023785) cell_highlight_pane_g1

0x2e66,	// (0x0002378d) cell_highlight_pane_g2

0x2e6e,	// (0x00023795) cell_highlight_pane_g3

0x2e76,	// (0x0002379d) cell_highlight_pane_g4

0x2e7e,	// (0x000237a5) cell_highlight_pane_g5

0x2e86,	// (0x000237ad) cell_highlight_pane_g6

0x2e8e,	// (0x000237b5) cell_highlight_pane_g7

0x2e96,	// (0x000237bd) cell_highlight_pane_g8

0x2e9e,	// (0x000237c5) cell_highlight_pane_g9

0x274f,	// (0x00023076) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0002ff8e) cell_highlight_pane_g

0x3198,	// (0x00023abf) bg_scroll_pane

0x7f96,	// (0x000288bd) scroll_handle_pane

0x31df,	// (0x00023b06) scroll_bg_pane_g1

0x31f4,	// (0x00023b1b) scroll_bg_pane_g2

0x320c,	// (0x00023b33) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0002ffe5) scroll_bg_pane_g

0x3221,	// (0x00023b48) scroll_handle_focus_pane_ParamLimits

0x3221,	// (0x00023b48) scroll_handle_focus_pane

0x31df,	// (0x00023b06) scroll_handle_pane_g1

0x322e,	// (0x00023b55) scroll_handle_pane_g2

0x320c,	// (0x00023b33) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0002ffec) scroll_handle_pane_g

0x2f10,	// (0x00023837) bg_popup_sub_pane_cp21_ParamLimits

0x2f10,	// (0x00023837) bg_popup_sub_pane_cp21

0x3242,	// (0x00023b69) popup_fep_japan_predictive_window_t1_ParamLimits

0x3242,	// (0x00023b69) popup_fep_japan_predictive_window_t1

0x3259,	// (0x00023b80) popup_fep_japan_predictive_window_t2_ParamLimits

0x3259,	// (0x00023b80) popup_fep_japan_predictive_window_t2

0x328c,	// (0x00023bb3) popup_fep_japan_predictive_window_t3_ParamLimits

0x328c,	// (0x00023bb3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0002fff3) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0002fff3) popup_fep_japan_predictive_window_t

0x27d1,	// (0x000230f8) bg_popup_sub_pane_cp23

0x32c3,	// (0x00023bea) listscroll_japin_cand_pane

0x32cb,	// (0x00023bf2) popup_fep_japan_candidate_window_t1

0x32d9,	// (0x00023c00) candidate_pane_ParamLimits

0x32d9,	// (0x00023c00) candidate_pane

0x32ec,	// (0x00023c13) scroll_pane_cp30

0x32f4,	// (0x00023c1b) list_single_popup_jap_candidate_pane_ParamLimits

0x32f4,	// (0x00023c1b) list_single_popup_jap_candidate_pane

0x27d1,	// (0x000230f8) list_highlight_pane_cp30

0x3309,	// (0x00023c30) list_single_popup_jap_candidate_pane_t1

0xf28d,	// (0x0002fbb4) level_1_signal

0xf29f,	// (0x0002fbc6) level_2_signal

0xf2b2,	// (0x0002fbd9) level_3_signal

0xf2c5,	// (0x0002fbec) level_4_signal

0xf2d8,	// (0x0002fbff) level_5_signal

0xf2eb,	// (0x0002fc12) level_6_signal

0xf2fe,	// (0x0002fc25) level_7_signal

0xf28d,	// (0x0002fbb4) level_1_battery

0xf29f,	// (0x0002fbc6) level_2_battery

0xf2b2,	// (0x0002fbd9) level_3_battery

0xf2c5,	// (0x0002fbec) level_4_battery

0xf2d8,	// (0x0002fbff) level_5_battery

0xf2eb,	// (0x0002fc12) level_6_battery

0xf2fe,	// (0x0002fc25) level_7_battery

0x3330,	// (0x00023c57) list_menu_pane_ParamLimits

0x3330,	// (0x00023c57) list_menu_pane

0x3346,	// (0x00023c6d) scroll_pane_cp25_ParamLimits

0x3346,	// (0x00023c6d) scroll_pane_cp25

0xf311,	// (0x0002fc38) list_double2_graphic_pane_cp2_ParamLimits

0xf311,	// (0x0002fc38) list_double2_graphic_pane_cp2

0xf311,	// (0x0002fc38) list_double2_large_graphic_pane_cp2_ParamLimits

0xf311,	// (0x0002fc38) list_double2_large_graphic_pane_cp2

0xf311,	// (0x0002fc38) list_double2_pane_cp2_ParamLimits

0xf311,	// (0x0002fc38) list_double2_pane_cp2

0xf311,	// (0x0002fc38) list_double_graphic_pane_cp2_ParamLimits

0xf311,	// (0x0002fc38) list_double_graphic_pane_cp2

0xf311,	// (0x0002fc38) list_double_large_graphic_pane_cp2_ParamLimits

0xf311,	// (0x0002fc38) list_double_large_graphic_pane_cp2

0xf311,	// (0x0002fc38) list_double_number_pane_cp2_ParamLimits

0xf311,	// (0x0002fc38) list_double_number_pane_cp2

0xf311,	// (0x0002fc38) list_double_pane_cp2_ParamLimits

0xf311,	// (0x0002fc38) list_double_pane_cp2

0xf32c,	// (0x0002fc53) list_single_2graphic_pane_cp2_ParamLimits

0xf32c,	// (0x0002fc53) list_single_2graphic_pane_cp2

0xf32c,	// (0x0002fc53) list_single_graphic_heading_pane_cp2_ParamLimits

0xf32c,	// (0x0002fc53) list_single_graphic_heading_pane_cp2

0xf32c,	// (0x0002fc53) list_single_graphic_pane_cp2_ParamLimits

0xf32c,	// (0x0002fc53) list_single_graphic_pane_cp2

0xf32c,	// (0x0002fc53) list_single_heading_pane_cp2_ParamLimits

0xf32c,	// (0x0002fc53) list_single_heading_pane_cp2

0xf33d,	// (0x0002fc64) list_single_large_graphic_pane_cp2_ParamLimits

0xf33d,	// (0x0002fc64) list_single_large_graphic_pane_cp2

0xf32c,	// (0x0002fc53) list_single_number_heading_pane_cp2_ParamLimits

0xf32c,	// (0x0002fc53) list_single_number_heading_pane_cp2

0xf32c,	// (0x0002fc53) list_single_number_pane_cp2_ParamLimits

0xf32c,	// (0x0002fc53) list_single_number_pane_cp2

0xf34d,	// (0x0002fc74) list_single_pane_cp2_ParamLimits

0xf34d,	// (0x0002fc74) list_single_pane_cp2

0x3368,	// (0x00023c8f) bg_popup_sub_pane_cp22

0x814d,	// (0x00028a74) popup_side_volume_key_window_g1

0x8171,	// (0x00028a98) popup_side_volume_key_window_t1

0x818d,	// (0x00028ab4) volume_small_pane_cp1

0x281f,	// (0x00023146) bg_popup_sub_pane_cp24_ParamLimits

0x281f,	// (0x00023146) bg_popup_sub_pane_cp24

0x337e,	// (0x00023ca5) fep_china_uni_candidate_pane_ParamLimits

0x337e,	// (0x00023ca5) fep_china_uni_candidate_pane

0x3392,	// (0x00023cb9) fep_china_uni_entry_pane

0x33a2,	// (0x00023cc9) popup_fep_china_uni_window_g1

0x33be,	// (0x00023ce5) fep_china_uni_entry_pane_g1

0x33c6,	// (0x00023ced) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x00030024) fep_china_uni_entry_pane_g

0x33ce,	// (0x00023cf5) fep_entry_item_pane

0x33d8,	// (0x00023cff) fep_candidate_item_pane

0x33e0,	// (0x00023d07) fep_china_uni_candidate_pane_g1

0x33e8,	// (0x00023d0f) fep_china_uni_candidate_pane_g2

0x33f0,	// (0x00023d17) fep_china_uni_candidate_pane_g3

0x33f8,	// (0x00023d1f) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x00030029) fep_china_uni_candidate_pane_g

0x274f,	// (0x00023076) fep_entry_item_pane_g1

0x3400,	// (0x00023d27) fep_entry_item_pane_t1_ParamLimits

0x3400,	// (0x00023d27) fep_entry_item_pane_t1

0x3416,	// (0x00023d3d) fep_candidate_item_pane_t1_ParamLimits

0x3416,	// (0x00023d3d) fep_candidate_item_pane_t1

0x342b,	// (0x00023d52) fep_candidate_item_pane_t2_ParamLimits

0x342b,	// (0x00023d52) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x00030032) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x00030032) fep_candidate_item_pane_t

0x2835,	// (0x0002315c) list_highlight_pane_cp31_ParamLimits

0x2835,	// (0x0002315c) list_highlight_pane_cp31

0x343d,	// (0x00023d64) level_1_signal_lsc

0x3446,	// (0x00023d6d) level_2_signal_lsc

0x344f,	// (0x00023d76) level_3_signal_lsc

0x3458,	// (0x00023d7f) level_4_signal_lsc

0x3461,	// (0x00023d88) level_5_signal_lsc

0x346a,	// (0x00023d91) level_6_signal_lsc

0x3473,	// (0x00023d9a) level_7_signal_lsc

0x3473,	// (0x00023d9a) level_1_battery_lsc

0x347c,	// (0x00023da3) level_2_battery_lsc

0x3485,	// (0x00023dac) level_3_battery_lsc

0x348e,	// (0x00023db5) level_4_battery_lsc

0x3497,	// (0x00023dbe) level_5_battery_lsc

0x34a0,	// (0x00023dc7) level_6_battery_lsc

0x343d,	// (0x00023d64) level_7_battery_lsc

0x34a9,	// (0x00023dd0) scroll_handle_focus_pane_g1

0x34b2,	// (0x00023dd9) scroll_handle_focus_pane_g2

0x34bb,	// (0x00023de2) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x00030037) scroll_handle_focus_pane_g

0xefd7,	// (0x0002f8fe) list_single_2graphic_pane_g1_ParamLimits

0xefd7,	// (0x0002f8fe) list_single_2graphic_pane_g1

0xeda6,	// (0x0002f6cd) list_single_2graphic_pane_g2_ParamLimits

0xeda6,	// (0x0002f6cd) list_single_2graphic_pane_g2

0xb2a3,	// (0x0002bbca) list_single_2graphic_pane_g3_ParamLimits

0xb2a3,	// (0x0002bbca) list_single_2graphic_pane_g3

0xefe3,	// (0x0002f90a) list_single_2graphic_pane_g4_ParamLimits

0xefe3,	// (0x0002f90a) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0003003e) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0003003e) list_single_2graphic_pane_g

0xeff4,	// (0x0002f91b) list_single_2graphic_pane_t1_ParamLimits

0xeff4,	// (0x0002f91b) list_single_2graphic_pane_t1

0xf022,	// (0x0002f949) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xf022,	// (0x0002f949) list_double2_graphic_large_graphic_pane_g1

0xedbf,	// (0x0002f6e6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xedbf,	// (0x0002f6e6) list_double2_graphic_large_graphic_pane_g2

0xb558,	// (0x0002be7f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb558,	// (0x0002be7f) list_double2_graphic_large_graphic_pane_g3

0xb99d,	// (0x0002c2c4) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb99d,	// (0x0002c2c4) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x00030047) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x00030047) list_double2_graphic_large_graphic_pane_g

0xb9a9,	// (0x0002c2d0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb9a9,	// (0x0002c2d0) list_double2_graphic_large_graphic_pane_t1

0xb9bf,	// (0x0002c2e6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb9bf,	// (0x0002c2e6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x00030050) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x00030050) list_double2_graphic_large_graphic_pane_t

0x3596,	// (0x00023ebd) popup_fast_swap_window_ParamLimits

0x3596,	// (0x00023ebd) popup_fast_swap_window

0x35b2,	// (0x00023ed9) popup_side_volume_key_window

0x35cc,	// (0x00023ef3) stacon_top_pane

0x35d6,	// (0x00023efd) status_pane_ParamLimits

0x35d6,	// (0x00023efd) status_pane

0x2745,	// (0x0002306c) status_small_pane

0x27d1,	// (0x000230f8) control_pane

0x27d1,	// (0x000230f8) stacon_bottom_pane

0x2daa,	// (0x000236d1) scroll_pane_cp121

0x2dee,	// (0x00023715) set_content_pane

0x40d4,	// (0x000249fb) bg_active_tab_pane_g1_cp1

0x34c4,	// (0x00023deb) bg_active_tab_pane_g2_cp1

0x40cb,	// (0x000249f2) bg_active_tab_pane_g3_cp1

0x40d4,	// (0x000249fb) bg_passive_tab_pane_g1_cp1

0x34c4,	// (0x00023deb) bg_passive_tab_pane_g2_cp1

0x40cb,	// (0x000249f2) bg_passive_tab_pane_g3_cp1

0xf3d3,	// (0x0002fcfa) bg_active_tab_pane_g1_cp2

0x34c4,	// (0x00023deb) bg_active_tab_pane_g2_cp2

0xf3dc,	// (0x0002fd03) bg_active_tab_pane_g3_cp2

0xf3d3,	// (0x0002fcfa) bg_passive_tab_pane_g1_cp2

0x34c4,	// (0x00023deb) bg_passive_tab_pane_g2_cp2

0xf3dc,	// (0x0002fd03) bg_passive_tab_pane_g3_cp2

0xf3e5,	// (0x0002fd0c) bg_active_tab_pane_g1_cp3

0x34c4,	// (0x00023deb) bg_active_tab_pane_g2_cp3

0xf3ee,	// (0x0002fd15) bg_active_tab_pane_g3_cp3

0xf3e5,	// (0x0002fd0c) bg_passive_tab_pane_g1_cp3

0x34c4,	// (0x00023deb) bg_passive_tab_pane_g2_cp3

0xf3ee,	// (0x0002fd15) bg_passive_tab_pane_g3_cp3

0xf3f7,	// (0x0002fd1e) bg_active_tab_pane_g1_cp4

0x34c4,	// (0x00023deb) bg_active_tab_pane_g2_cp4

0xf400,	// (0x0002fd27) bg_active_tab_pane_g3_cp4

0xf3f7,	// (0x0002fd1e) bg_passive_tab_pane_g1_cp4

0x34c4,	// (0x00023deb) bg_passive_tab_pane_g2_cp4

0xf400,	// (0x0002fd27) bg_passive_tab_pane_g3_cp4

0x3514,	// (0x00023e3b) bg_active_tab_pane_g1_cp5

0x34c4,	// (0x00023deb) bg_active_tab_pane_g2_cp5

0x350b,	// (0x00023e32) bg_active_tab_pane_g3_cp5

0x3514,	// (0x00023e3b) bg_passive_tab_pane_g1_cp5

0x34c4,	// (0x00023deb) bg_passive_tab_pane_g2_cp5

0x350b,	// (0x00023e32) bg_passive_tab_pane_g3_cp5

0xc90d,	// (0x0002d234) list_set_graphic_pane_ParamLimits

0xc90d,	// (0x0002d234) list_set_graphic_pane

0x27d1,	// (0x000230f8) bg_set_opt_pane_cp4

0x351d,	// (0x00023e44) list_set_graphic_pane_g1_ParamLimits

0x351d,	// (0x00023e44) list_set_graphic_pane_g1

0x3529,	// (0x00023e50) list_set_graphic_pane_g2_ParamLimits

0x3529,	// (0x00023e50) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00030055) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00030055) list_set_graphic_pane_g

0x0009,

0xfaac,	// (0x000303d3) volume_small_pane_cp_g

0x354b,	// (0x00023e72) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x354b,	// (0x00023e72) list_double2_large_graphic_pane_g1_cp2

0x3557,	// (0x00023e7e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3557,	// (0x00023e7e) list_double2_large_graphic_pane_g2_cp2

0x3566,	// (0x00023e8d) list_double2_large_graphic_pane_g3_cp2

0x356e,	// (0x00023e95) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x356e,	// (0x00023e95) list_double2_large_graphic_pane_t1_cp2

0x3584,	// (0x00023eab) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3584,	// (0x00023eab) list_double2_large_graphic_pane_t2_cp2

0x4ac7,	// (0x000253ee) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4ac7,	// (0x000253ee) list_double_large_graphic_pane_g1_cp2

0x4ad8,	// (0x000253ff) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4ad8,	// (0x000253ff) list_double_large_graphic_pane_g2_cp2

0x36b1,	// (0x00023fd8) list_double_large_graphic_pane_g3_cp2

0x4ae7,	// (0x0002540e) list_double_large_graphic_pane_g4_cp

0x4aef,	// (0x00025416) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4aef,	// (0x00025416) list_double_large_graphic_pane_t1_cp2

0x4b06,	// (0x0002542d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4b06,	// (0x0002542d) list_double_large_graphic_pane_t2_cp2

0x35e4,	// (0x00023f0b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x35e4,	// (0x00023f0b) list_double2_graphic_pane_g1_cp2

0x35f0,	// (0x00023f17) list_double2_graphic_pane_g2_cp2_ParamLimits

0x35f0,	// (0x00023f17) list_double2_graphic_pane_g2_cp2

0x35ff,	// (0x00023f26) list_double2_graphic_pane_g3_cp2

0x3607,	// (0x00023f2e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3607,	// (0x00023f2e) list_double2_graphic_pane_t1_cp2

0x361d,	// (0x00023f44) list_double2_graphic_pane_t2_cp2_ParamLimits

0x361d,	// (0x00023f44) list_double2_graphic_pane_t2_cp2

0x362f,	// (0x00023f56) list_single_number_heading_pane_g1_cp2_ParamLimits

0x362f,	// (0x00023f56) list_single_number_heading_pane_g1_cp2

0x363b,	// (0x00023f62) list_single_number_heading_pane_g2_cp2

0x3643,	// (0x00023f6a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3643,	// (0x00023f6a) list_single_number_heading_pane_t1_cp2

0x3659,	// (0x00023f80) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3659,	// (0x00023f80) list_single_number_heading_pane_t2_cp2

0x366b,	// (0x00023f92) list_single_number_heading_pane_t3_cp2_ParamLimits

0x366b,	// (0x00023f92) list_single_number_heading_pane_t3_cp2

0x362f,	// (0x00023f56) list_single_heading_pane_g1_cp2_ParamLimits

0x362f,	// (0x00023f56) list_single_heading_pane_g1_cp2

0x363b,	// (0x00023f62) list_single_heading_pane_g2_cp2

0x3643,	// (0x00023f6a) list_single_heading_pane_t1_cp2_ParamLimits

0x3643,	// (0x00023f6a) list_single_heading_pane_t1_cp2

0x48d1,	// (0x000251f8) list_single_heading_pane_t2_cp2_ParamLimits

0x48d1,	// (0x000251f8) list_single_heading_pane_t2_cp2

0x4856,	// (0x0002517d) list_double_graphic_pane_g1_cp2_ParamLimits

0x4856,	// (0x0002517d) list_double_graphic_pane_g1_cp2

0x4862,	// (0x00025189) list_double_graphic_pane_g2_cp2_ParamLimits

0x4862,	// (0x00025189) list_double_graphic_pane_g2_cp2

0x4871,	// (0x00025198) list_double_graphic_pane_g3_cp2

0x4879,	// (0x000251a0) list_double_graphic_pane_t1_cp2_ParamLimits

0x4879,	// (0x000251a0) list_double_graphic_pane_t1_cp2

0x488f,	// (0x000251b6) list_double_graphic_pane_t2_cp2_ParamLimits

0x488f,	// (0x000251b6) list_double_graphic_pane_t2_cp2

0x36a5,	// (0x00023fcc) list_double_number_pane_g1_cp2_ParamLimits

0x36a5,	// (0x00023fcc) list_double_number_pane_g1_cp2

0x36b1,	// (0x00023fd8) list_double_number_pane_g2_cp2

0x481c,	// (0x00025143) list_double_number_pane_t1_cp2_ParamLimits

0x481c,	// (0x00025143) list_double_number_pane_t1_cp2

0x482e,	// (0x00025155) list_double_number_pane_t2_cp2_ParamLimits

0x482e,	// (0x00025155) list_double_number_pane_t2_cp2

0x4844,	// (0x0002516b) list_double_number_pane_t3_cp2_ParamLimits

0x4844,	// (0x0002516b) list_double_number_pane_t3_cp2

0x4794,	// (0x000250bb) list_single_graphic_pane_g1_cp2_ParamLimits

0x4794,	// (0x000250bb) list_single_graphic_pane_g1_cp2

0x362f,	// (0x00023f56) list_single_graphic_pane_g2_cp2_ParamLimits

0x362f,	// (0x00023f56) list_single_graphic_pane_g2_cp2

0x363b,	// (0x00023f62) list_single_graphic_pane_g3_cp2

0x476c,	// (0x00025093) list_single_graphic_pane_t1_cp2_ParamLimits

0x476c,	// (0x00025093) list_single_graphic_pane_t1_cp2

0x362f,	// (0x00023f56) list_single_number_pane_g1_cp2_ParamLimits

0x362f,	// (0x00023f56) list_single_number_pane_g1_cp2

0x363b,	// (0x00023f62) list_single_number_pane_g2_cp2

0x476c,	// (0x00025093) list_single_number_pane_t1_cp2_ParamLimits

0x476c,	// (0x00025093) list_single_number_pane_t1_cp2

0x4782,	// (0x000250a9) list_single_number_pane_t2_cp2_ParamLimits

0x4782,	// (0x000250a9) list_single_number_pane_t2_cp2

0x3557,	// (0x00023e7e) list_double2_pane_g1_cp2_ParamLimits

0x3557,	// (0x00023e7e) list_double2_pane_g1_cp2

0x3566,	// (0x00023e8d) list_double2_pane_g2_cp2

0x367d,	// (0x00023fa4) list_double2_pane_t1_cp2_ParamLimits

0x367d,	// (0x00023fa4) list_double2_pane_t1_cp2

0x3693,	// (0x00023fba) list_double2_pane_t2_cp2_ParamLimits

0x3693,	// (0x00023fba) list_double2_pane_t2_cp2

0x36a5,	// (0x00023fcc) list_double_pane_g1_cp2_ParamLimits

0x36a5,	// (0x00023fcc) list_double_pane_g1_cp2

0x36b1,	// (0x00023fd8) list_double_pane_g2_cp2

0x36b9,	// (0x00023fe0) list_double_pane_t1_cp2_ParamLimits

0x36b9,	// (0x00023fe0) list_double_pane_t1_cp2

0x36cf,	// (0x00023ff6) list_double_pane_t2_cp2_ParamLimits

0x36cf,	// (0x00023ff6) list_double_pane_t2_cp2

0x36fe,	// (0x00024025) list_single_pane_cp2_g3

0x362f,	// (0x00023f56) list_single_pane_g1_cp2_ParamLimits

0x362f,	// (0x00023f56) list_single_pane_g1_cp2

0x363b,	// (0x00023f62) list_single_pane_g2_cp2

0x370e,	// (0x00024035) list_single_pane_t1_cp2_ParamLimits

0x370e,	// (0x00024035) list_single_pane_t1_cp2

0x3726,	// (0x0002404d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3726,	// (0x0002404d) list_single_large_graphic_pane_g1_cp2

0x3732,	// (0x00024059) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3732,	// (0x00024059) list_single_large_graphic_pane_g2_cp2

0x373e,	// (0x00024065) list_single_large_graphic_pane_g3_cp2

0x3746,	// (0x0002406d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3746,	// (0x0002406d) list_single_large_graphic_pane_g4_cp1

0x3760,	// (0x00024087) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3760,	// (0x00024087) list_single_large_graphic_pane_t1_cp2

0x474e,	// (0x00025075) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x474e,	// (0x00025075) list_single_graphic_heading_pane_g1_cp2

0x4729,	// (0x00025050) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4729,	// (0x00025050) list_single_graphic_heading_pane_g4_cp2

0x363b,	// (0x00023f62) list_single_graphic_heading_pane_g5_cp2

0x3643,	// (0x00023f6a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3643,	// (0x00023f6a) list_single_graphic_heading_pane_t1_cp2

0x475a,	// (0x00025081) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x475a,	// (0x00025081) list_single_graphic_heading_pane_t2_cp2

0x471d,	// (0x00025044) list_single_2graphic_pane_g1_cp2_ParamLimits

0x471d,	// (0x00025044) list_single_2graphic_pane_g1_cp2

0x4729,	// (0x00025050) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4729,	// (0x00025050) list_single_2graphic_pane_g2_cp2

0x363b,	// (0x00023f62) list_single_2graphic_pane_g3_cp2

0x40dd,	// (0x00024a04) list_single_2graphic_pane_g4_cp2_ParamLimits

0x40dd,	// (0x00024a04) list_single_2graphic_pane_g4_cp2

0x4738,	// (0x0002505f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4738,	// (0x0002505f) list_single_2graphic_pane_t1_cp2

0x274f,	// (0x00023076) list_highlight_pane_g10_cp1

0x432f,	// (0x00024c56) list_highlight_pane_g1_cp1

0x4337,	// (0x00024c5e) list_highlight_pane_g2_cp1

0x433f,	// (0x00024c66) list_highlight_pane_g3_cp1

0x4347,	// (0x00024c6e) list_highlight_pane_g4_cp1

0x434f,	// (0x00024c76) list_highlight_pane_g5_cp1

0x4357,	// (0x00024c7e) list_highlight_pane_g6_cp1

0x435f,	// (0x00024c86) list_highlight_pane_g7_cp1

0x4367,	// (0x00024c8e) list_highlight_pane_g8_cp1

0x436f,	// (0x00024c96) list_highlight_pane_g9_cp1

0x0653,	// (0x00020f7a) form_field_slider_pane_t3

0x0661,	// (0x00020f88) form_field_slider_pane_t4

0x4279,	// (0x00024ba0) slider_form_pane_ParamLimits

0x4279,	// (0x00024ba0) slider_form_pane

0x27d1,	// (0x000230f8) control_abbreviations

0x27d1,	// (0x000230f8) control_conventions

0x27d1,	// (0x000230f8) control_definitions

0x27d1,	// (0x000230f8) format_table_attribute

0x491b,	// (0x00025242) bg_popup_preview_window_pane_g9

0x27d1,	// (0x000230f8) format_table_data2

0x27d1,	// (0x000230f8) format_table_data3

0x27d1,	// (0x000230f8) format_table_data_example

0x0008,

0x27d1,	// (0x000230f8) intro_purpose

0xf8c5,	// (0x000301ec) bg_popup_preview_window_pane_g

0x27d1,	// (0x000230f8) texts_category

0x27d1,	// (0x000230f8) texts_graphics

0x3776,	// (0x0002409d) text_digital

0x3785,	// (0x000240ac) text_primary

0x3794,	// (0x000240bb) text_primary_small

0x37a3,	// (0x000240ca) text_secondary

0x37b2,	// (0x000240d9) text_title

0x4dac,	// (0x000256d3) bg_passive_tab_pane_g1_cp3_srt

0x34c4,	// (0x00023deb) bg_passive_tab_pane_g2_cp3_srt

0x4da3,	// (0x000256ca) bg_passive_tab_pane_g3_cp3_srt

0x281f,	// (0x00023146) bg_active_tab_pane_cp3_srt_ParamLimits

0x281f,	// (0x00023146) bg_active_tab_pane_cp3_srt

0x40bb,	// (0x000249e2) tabs_4_active_pane_srt_g1

0xdabb,	// (0x0002e3e2) tabs_4_active_pane_srt_t1_ParamLimits

0xdabb,	// (0x0002e3e2) tabs_4_active_pane_srt_t1

0x4dac,	// (0x000256d3) bg_active_tab_pane_g1_cp3_copy1

0x34c4,	// (0x00023deb) bg_active_tab_pane_g2_cp3_copy1

0x4da3,	// (0x000256ca) bg_active_tab_pane_g3_cp3_copy1

0x2835,	// (0x0002315c) tabs_2_long_active_pane_srt_ParamLimits

0x2835,	// (0x0002315c) tabs_2_long_active_pane_srt

0x2835,	// (0x0002315c) tabs_2_long_passive_pane_srt_ParamLimits

0x2835,	// (0x0002315c) tabs_2_long_passive_pane_srt

0x2f9c,	// (0x000238c3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2f9c,	// (0x000238c3) bg_passive_tab_pane_cp4_srt

0x4cd3,	// (0x000255fa) bg_passive_tab_pane_g1_cp4_srt

0x34c4,	// (0x00023deb) bg_passive_tab_pane_g2_cp4_srt

0x4cca,	// (0x000255f1) bg_passive_tab_pane_g3_cp4_srt

0x2835,	// (0x0002315c) bg_active_tab_pane_cp4_srt_ParamLimits

0x2835,	// (0x0002315c) bg_active_tab_pane_cp4_srt

0xddb3,	// (0x0002e6da) tabs_2_long_active_pane_srt_t1_ParamLimits

0xddb3,	// (0x0002e6da) tabs_2_long_active_pane_srt_t1

0x4cd3,	// (0x000255fa) bg_active_tab_pane_g1_cp4_srt

0x34c4,	// (0x00023deb) bg_active_tab_pane_g2_cp4_srt

0x4cca,	// (0x000255f1) bg_active_tab_pane_g3_cp4_srt

0x281f,	// (0x00023146) tabs_3_long_active_pane_srt_ParamLimits

0x281f,	// (0x00023146) tabs_3_long_active_pane_srt

0x281f,	// (0x00023146) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x281f,	// (0x00023146) tabs_3_long_passive_pane_cp_srt

0x281f,	// (0x00023146) tabs_3_long_passive_pane_srt_ParamLimits

0x281f,	// (0x00023146) tabs_3_long_passive_pane_srt

0x2f9c,	// (0x000238c3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2f9c,	// (0x000238c3) bg_passive_tab_pane_cp5_srt

0x3514,	// (0x00023e3b) bg_passive_tab_pane_g1_cp5_srt

0x34c4,	// (0x00023deb) bg_passive_tab_pane_g2_cp5_srt

0x350b,	// (0x00023e32) bg_passive_tab_pane_g3_cp5_srt

0x2835,	// (0x0002315c) bg_active_tab_pane_cp5_srt_ParamLimits

0x2835,	// (0x0002315c) bg_active_tab_pane_cp5_srt

0xddca,	// (0x0002e6f1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xddca,	// (0x0002e6f1) tabs_3_long_active_pane_srt_t1

0x3514,	// (0x00023e3b) bg_active_tab_pane_g1_cp5_srt

0x34c4,	// (0x00023deb) bg_active_tab_pane_g2_cp5_srt

0x350b,	// (0x00023e32) bg_active_tab_pane_g3_cp5_srt

0x4cbc,	// (0x000255e3) navi_text_pane_srt_t1

0x4cb4,	// (0x000255db) navi_icon_pane_srt_g1

0x38ca,	// (0x000241f1) midp_editing_number_pane_srt

0x37c1,	// (0x000240e8) midp_ticker_pane_srt

0x38d2,	// (0x000241f9) midp_ticker_pane_srt_g1

0x38da,	// (0x00024201) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x00030074) midp_ticker_pane_srt_g

0x38e2,	// (0x00024209) midp_ticker_pane_srt_t1

0x4ca5,	// (0x000255cc) midp_editing_number_pane_t1_copy1

0xf409,	// (0x0002fd30) listscroll_midp_pane

0xf409,	// (0x0002fd30) midp_form_pane

0x37c9,	// (0x000240f0) midp_info_popup_window_ParamLimits

0x37c9,	// (0x000240f0) midp_info_popup_window

0x2f10,	// (0x00023837) bg_popup_sub_pane_cp50_ParamLimits

0x2f10,	// (0x00023837) bg_popup_sub_pane_cp50

0x3f44,	// (0x0002486b) listscroll_midp_info_pane_ParamLimits

0x3f44,	// (0x0002486b) listscroll_midp_info_pane

0x3f2c,	// (0x00024853) listscroll_form_midp_pane_ParamLimits

0x3f2c,	// (0x00024853) listscroll_form_midp_pane

0x3f38,	// (0x0002485f) scroll_bar_cp050

0x0647,	// (0x00020f6e) list_midp_pane

0x55e0,	// (0x00025f07) signal_pane_g2_cp

0x3e5e,	// (0x00024785) listscroll_midp_info_pane_t1_ParamLimits

0x3e5e,	// (0x00024785) listscroll_midp_info_pane_t1

0x3e76,	// (0x0002479d) listscroll_midp_info_pane_t2_ParamLimits

0x3e76,	// (0x0002479d) listscroll_midp_info_pane_t2

0x3eb4,	// (0x000247db) listscroll_midp_info_pane_t3_ParamLimits

0x3eb4,	// (0x000247db) listscroll_midp_info_pane_t3

0x3eee,	// (0x00024815) listscroll_midp_info_pane_t4_ParamLimits

0x3eee,	// (0x00024815) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00030127) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00030127) listscroll_midp_info_pane_t

0x2f65,	// (0x0002388c) scroll_pane_cp21

0x3e02,	// (0x00024729) form_midp_field_choice_group_pane

0x3e0b,	// (0x00024732) form_midp_field_text_pane

0x3e44,	// (0x0002476b) form_midp_field_time_pane

0x3e4c,	// (0x00024773) form_midp_gauge_slider_pane

0x3e55,	// (0x0002477c) form_midp_gauge_wait_pane

0x27d1,	// (0x000230f8) form_midp_image_pane

0xf032,	// (0x0002f959) list_single_midp_pane_ParamLimits

0xf032,	// (0x0002f959) list_single_midp_pane

0x3dd0,	// (0x000246f7) form_midp_field_text_pane_t1

0x3c26,	// (0x0002454d) input_focus_pane_cp050

0x3df1,	// (0x00024718) list_midp_form_text_pane

0x3d9f,	// (0x000246c6) form_midp_field_choice_group_pane_t1

0x3dad,	// (0x000246d4) input_focus_pane_cp051

0x3dc1,	// (0x000246e8) list_midp_choice_pane

0x27d1,	// (0x000230f8) status_idle_pane

0x3d83,	// (0x000246aa) form_midp_field_time_pane_t1

0x274f,	// (0x00023076) wait_anim_pane_g2_copy1

0x3d91,	// (0x000246b8) form_midp_field_time_pane_t2

0x0001,

0x3834,	// (0x0002415b) aid_navinavi_width_2_pane

0xf7fb,	// (0x00030122) form_midp_field_time_pane_t

0x27d1,	// (0x000230f8) input_focus_pane_cp052

0x27d1,	// (0x000230f8) bg_input_focus_pane_cp040

0x3d5f,	// (0x00024686) form_midp_gauge_slider_pane_t1

0x3d6d,	// (0x00024694) form_midp_gauge_slider_pane_t2

0x062b,	// (0x00020f52) form_midp_gauge_slider_pane_t3

0x0639,	// (0x00020f60) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00030119) form_midp_gauge_slider_pane_t

0x3d7b,	// (0x000246a2) form_midp_slider_pane

0x2835,	// (0x0002315c) bg_input_focus_pane_cp041_ParamLimits

0x2835,	// (0x0002315c) bg_input_focus_pane_cp041

0x3d2f,	// (0x00024656) form_midp_gauge_wait_pane_t1_ParamLimits

0x3d2f,	// (0x00024656) form_midp_gauge_wait_pane_t1

0x3d41,	// (0x00024668) form_midp_gauge_wait_pane_t2_ParamLimits

0x3d41,	// (0x00024668) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00030114) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00030114) form_midp_gauge_wait_pane_t

0x3d53,	// (0x0002467a) form_midp_wait_pane_ParamLimits

0x3d53,	// (0x0002467a) form_midp_wait_pane

0x3cf9,	// (0x00024620) form_midp_image_pane_g1

0x3d02,	// (0x00024629) form_midp_image_pane_t1

0x3d11,	// (0x00024638) form_midp_image_pane_t2

0x3d20,	// (0x00024647) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0003010d) form_midp_image_pane_t

0x3cf0,	// (0x00024617) list_single_midp_pane_g1

0xba96,	// (0x0002c3bd) list_single_midp_pane_t1

0x3cdc,	// (0x00024603) list_midp_form_item_pane_ParamLimits

0x3cdc,	// (0x00024603) list_midp_form_item_pane

0x37dc,	// (0x00024103) list_midp_form_item_pane_t1

0x37eb,	// (0x00024112) midp_ticker_pane_g1

0x37f7,	// (0x0002411e) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0003005a) midp_ticker_pane_g

0x3803,	// (0x0002412a) midp_ticker_pane_t1

0x4ca5,	// (0x000255cc) midp_editing_number_pane_t1

0x4d39,	// (0x00025660) midp_editing_number_pane

0x4d45,	// (0x0002566c) midp_ticker_pane

0x4c95,	// (0x000255bc) ai_message_heading_pane

0x27d1,	// (0x000230f8) bg_popup_window_pane_cp14

0x4c9d,	// (0x000255c4) listscroll_ai_message_pane

0x4c1f,	// (0x00025546) ai_message_heading_pane_g1_ParamLimits

0x4c1f,	// (0x00025546) ai_message_heading_pane_g1

0x4c2b,	// (0x00025552) ai_message_heading_pane_g2_ParamLimits

0x4c2b,	// (0x00025552) ai_message_heading_pane_g2

0x4c37,	// (0x0002555e) ai_message_heading_pane_g3_ParamLimits

0x4c37,	// (0x0002555e) ai_message_heading_pane_g3

0x4c43,	// (0x0002556a) ai_message_heading_pane_g4_ParamLimits

0x4c43,	// (0x0002556a) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0003024e) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0003024e) ai_message_heading_pane_g

0x4c4f,	// (0x00025576) ai_message_heading_pane_t1_ParamLimits

0x4c4f,	// (0x00025576) ai_message_heading_pane_t1

0x4c69,	// (0x00025590) ai_message_heading_pane_t2_ParamLimits

0x4c69,	// (0x00025590) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00030257) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00030257) ai_message_heading_pane_t

0x4c7b,	// (0x000255a2) bg_popup_heading_pane_cp1_ParamLimits

0x4c7b,	// (0x000255a2) bg_popup_heading_pane_cp1

0x4c0d,	// (0x00025534) list_ai_message_pane_ParamLimits

0x4c0d,	// (0x00025534) list_ai_message_pane

0x2f65,	// (0x0002388c) scroll_pane_cp10

0x4ba9,	// (0x000254d0) list_ai_message_pane_g1

0x4bb1,	// (0x000254d8) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0003022b) list_ai_message_pane_g

0x4bb9,	// (0x000254e0) list_ai_message_pane_t1_ParamLimits

0x4bb9,	// (0x000254e0) list_ai_message_pane_t1

0x4bce,	// (0x000254f5) list_ai_message_pane_t2_ParamLimits

0x4bce,	// (0x000254f5) list_ai_message_pane_t2

0x4be3,	// (0x0002550a) list_ai_message_pane_t3_ParamLimits

0x4be3,	// (0x0002550a) list_ai_message_pane_t3

0x4bf8,	// (0x0002551f) list_ai_message_pane_t4_ParamLimits

0x4bf8,	// (0x0002551f) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x00030230) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x00030230) list_ai_message_pane_t

0x4b97,	// (0x000254be) cell_ai_soft_ind_pane_ParamLimits

0x4b97,	// (0x000254be) cell_ai_soft_ind_pane

0x3815,	// (0x0002413c) cell_ai_soft_ind_pane_g1_ParamLimits

0x3815,	// (0x0002413c) cell_ai_soft_ind_pane_g1

0x27d1,	// (0x000230f8) grid_highlight_cp1

0x3822,	// (0x00024149) text_secondary_cp56_ParamLimits

0x3822,	// (0x00024149) text_secondary_cp56

0x4b6c,	// (0x00025493) example_general_pane_ParamLimits

0x4b6c,	// (0x00025493) example_general_pane

0x4b78,	// (0x0002549f) example_parent_pane_g1_ParamLimits

0x4b78,	// (0x0002549f) example_parent_pane_g1

0x4b84,	// (0x000254ab) example_parent_pane_t1_ParamLimits

0x4b84,	// (0x000254ab) example_parent_pane_t1

0xe2f3,	// (0x0002ec1a) popup_preview_text_window_ParamLimits

0xe2f3,	// (0x0002ec1a) popup_preview_text_window

0x3706,	// (0x0002402d) list_single_pane_cp2_g4

0x2a36,	// (0x0002335d) bg_popup_preview_window_pane_ParamLimits

0x2a36,	// (0x0002335d) bg_popup_preview_window_pane

0x4923,	// (0x0002524a) popup_preview_text_window_t1_ParamLimits

0x4923,	// (0x0002524a) popup_preview_text_window_t1

0x4941,	// (0x00025268) popup_preview_text_window_t2_ParamLimits

0x4941,	// (0x00025268) popup_preview_text_window_t2

0x498a,	// (0x000252b1) popup_preview_text_window_t3_ParamLimits

0x498a,	// (0x000252b1) popup_preview_text_window_t3

0x49cf,	// (0x000252f6) popup_preview_text_window_t4_ParamLimits

0x49cf,	// (0x000252f6) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x000301ff) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x000301ff) popup_preview_text_window_t

0x4a4d,	// (0x00025374) scroll_pane_cp11

0x3b9a,	// (0x000244c1) bg_popup_preview_window_pane_g1

0x48e3,	// (0x0002520a) bg_popup_preview_window_pane_g2

0x48eb,	// (0x00025212) bg_popup_preview_window_pane_g3

0x48f3,	// (0x0002521a) bg_popup_preview_window_pane_g4

0x48fb,	// (0x00025222) bg_popup_preview_window_pane_g5

0x4903,	// (0x0002522a) bg_popup_preview_window_pane_g6

0x490b,	// (0x00025232) bg_popup_preview_window_pane_g7

0x4913,	// (0x0002523a) bg_popup_preview_window_pane_g8

0x775d,	// (0x00028084) aid_popup_width_pane

0xe275,	// (0x0002eb9c) popup_midp_note_alarm_window_ParamLimits

0xe275,	// (0x0002eb9c) popup_midp_note_alarm_window

0x2df7,	// (0x0002371e) data_form_pane_ParamLimits

0xeed9,	// (0x0002f800) form_field_data_pane_g1

0xdd79,	// (0x0002e6a0) form_field_data_pane_t1_ParamLimits

0x2e03,	// (0x0002372a) input_focus_pane_ParamLimits

0x2e11,	// (0x00023738) data_form_wide_pane_ParamLimits

0xb7e8,	// (0x0002c10f) form_field_data_wide_pane_g1

0xb7f4,	// (0x0002c11b) form_field_data_wide_pane_t1_ParamLimits

0x2c29,	// (0x00023550) input_focus_pane_cp6_ParamLimits

0xdd91,	// (0x0002e6b8) input_popup_find_pane_g1_ParamLimits

0xdd91,	// (0x0002e6b8) input_popup_find_pane_g1

0x7e87,	// (0x000287ae) aid_navi_side_left_pane

0x7e97,	// (0x000287be) aid_navi_side_right_pane

0x4400,	// (0x00024d27) bg_popup_window_pane_cp30_ParamLimits

0x4400,	// (0x00024d27) bg_popup_window_pane_cp30

0x447a,	// (0x00024da1) popup_midp_note_alarm_window_g1_ParamLimits

0x447a,	// (0x00024da1) popup_midp_note_alarm_window_g1

0x44aa,	// (0x00024dd1) popup_midp_note_alarm_window_t1_ParamLimits

0x44aa,	// (0x00024dd1) popup_midp_note_alarm_window_t1

0x454b,	// (0x00024e72) popup_midp_note_alarm_window_t2_ParamLimits

0x454b,	// (0x00024e72) popup_midp_note_alarm_window_t2

0x45f9,	// (0x00024f20) popup_midp_note_alarm_window_t3_ParamLimits

0x45f9,	// (0x00024f20) popup_midp_note_alarm_window_t3

0x4621,	// (0x00024f48) popup_midp_note_alarm_window_t4_ParamLimits

0x4621,	// (0x00024f48) popup_midp_note_alarm_window_t4

0x4641,	// (0x00024f68) popup_midp_note_alarm_window_t5_ParamLimits

0x4641,	// (0x00024f68) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0003019c) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0003019c) popup_midp_note_alarm_window_t

0x46ed,	// (0x00025014) wait_bar_pane_cp1_ParamLimits

0x46ed,	// (0x00025014) wait_bar_pane_cp1

0x27d1,	// (0x000230f8) wait_anim_pane_copy1

0x27d1,	// (0x000230f8) wait_border_pane_copy1

0x4146,	// (0x00024a6d) wait_border_pane_g1_copy1

0xb80e,	// (0x0002c135) form_field_popup_pane_g1

0xeee3,	// (0x0002f80a) form_field_popup_pane_t1_ParamLimits

0x2e03,	// (0x0002372a) input_focus_pane_cp7_ParamLimits

0x2df7,	// (0x0002371e) list_form_pane_ParamLimits

0xb82e,	// (0x0002c155) form_field_popup_wide_pane_g1

0xb836,	// (0x0002c15d) form_field_popup_wide_pane_t1_ParamLimits

0x2e03,	// (0x0002372a) input_focus_pane_cp8_ParamLimits

0x2e3d,	// (0x00023764) list_form_wide_pane_ParamLimits

0x4dd4,	// (0x000256fb) aid_size_cell_graphic_pane

0xef60,	// (0x0002f887) data_form_pane_t1_ParamLimits

0xf048,	// (0x0002f96f) data_form_wide_pane_t1_ParamLimits

0x02af,	// (0x00020bd6) bg_status_flat_pane

0xda18,	// (0x0002e33f) title_pane_t1_ParamLimits

0x27e7,	// (0x0002310e) title_pane_t2_ParamLimits

0x280d,	// (0x00023134) title_pane_t3_ParamLimits

0xf532,	// (0x0002fe59) title_pane_t_ParamLimits

0xf28d,	// (0x0002fbb4) level_1_signal_ParamLimits

0xf29f,	// (0x0002fbc6) level_2_signal_ParamLimits

0xf2b2,	// (0x0002fbd9) level_3_signal_ParamLimits

0xf2c5,	// (0x0002fbec) level_4_signal_ParamLimits

0xf2d8,	// (0x0002fbff) level_5_signal_ParamLimits

0xf2eb,	// (0x0002fc12) level_6_signal_ParamLimits

0xf2fe,	// (0x0002fc25) level_7_signal_ParamLimits

0xf28d,	// (0x0002fbb4) level_1_battery_ParamLimits

0xf29f,	// (0x0002fbc6) level_2_battery_ParamLimits

0xf2b2,	// (0x0002fbd9) level_3_battery_ParamLimits

0xf2c5,	// (0x0002fbec) level_4_battery_ParamLimits

0xf2d8,	// (0x0002fbff) level_5_battery_ParamLimits

0xf2eb,	// (0x0002fc12) level_6_battery_ParamLimits

0xf2fe,	// (0x0002fc25) level_7_battery_ParamLimits

0x432f,	// (0x00024c56) bg_status_flat_pane_g1

0x4337,	// (0x00024c5e) bg_status_flat_pane_g2

0x433f,	// (0x00024c66) bg_status_flat_pane_g3

0x4347,	// (0x00024c6e) bg_status_flat_pane_g4

0x434f,	// (0x00024c76) bg_status_flat_pane_g5

0x4357,	// (0x00024c7e) bg_status_flat_pane_g6

0x435f,	// (0x00024c86) bg_status_flat_pane_g7

0xdaa5,	// (0x0002e3cc) tabs_3_active_pane_t1_ParamLimits

0xdaa5,	// (0x0002e3cc) tabs_3_passive_pane_t1_ParamLimits

0xdabb,	// (0x0002e3e2) tabs_4_active_pane_t1_ParamLimits

0xdabb,	// (0x0002e3e2) tabs_4_1_passive_pane_t1_ParamLimits

0xdd9d,	// (0x0002e6c4) tabs_2_active_pane_t1_ParamLimits

0xdd9d,	// (0x0002e6c4) tabs_2_passive_pane_t1_ParamLimits

0x2835,	// (0x0002315c) bg_active_tab_pane_cp4_ParamLimits

0xddb3,	// (0x0002e6da) tabs_2_long_active_pane_t1_ParamLimits

0x2f9c,	// (0x000238c3) bg_passive_tab_pane_cp4_ParamLimits

0x8e6f,	// (0x00029796) list_single_midp_graphic_pane_t1_ParamLimits

0x2835,	// (0x0002315c) bg_active_tab_pane_cp5_ParamLimits

0xddca,	// (0x0002e6f1) tabs_3_long_active_pane_t1_ParamLimits

0x2f9c,	// (0x000238c3) bg_passive_tab_pane_cp5_ParamLimits

0x8e6f,	// (0x00029796) list_single_midp_graphic_pane_t1

0x02af,	// (0x00020bd6) bg_status_flat_pane_ParamLimits

0x3a79,	// (0x000243a0) indicator_pane_cp2_ParamLimits

0x3a79,	// (0x000243a0) indicator_pane_cp2

0x0415,	// (0x00020d3c) navi_pane_srt_ParamLimits

0x0415,	// (0x00020d3c) navi_pane_srt

0x3aa1,	// (0x000243c8) popup_clock_digital_analogue_window_cp1

0x2879,	// (0x000231a0) indicator_pane_t1

0x37c1,	// (0x000240e8) copy_highlight_pane

0x37c1,	// (0x000240e8) cursor_graphics_pane

0x37c1,	// (0x000240e8) graphic_within_text_pane

0x37c1,	// (0x000240e8) link_highlight_pane

0x4a10,	// (0x00025337) popup_preview_text_window_t5_ParamLimits

0x4a10,	// (0x00025337) popup_preview_text_window_t5

0x383c,	// (0x00024163) cursor_digital_pane

0x383c,	// (0x00024163) cursor_primary_pane

0x384d,	// (0x00024174) cursor_primary_small_pane

0x3855,	// (0x0002417c) cursor_secondary_pane

0x385d,	// (0x00024184) cursor_title_pane

0x383c,	// (0x00024163) link_highlight_digital_pane

0x3844,	// (0x0002416b) link_highlight_primary_pane

0x384d,	// (0x00024174) link_highlight_primary_small_pane

0x3855,	// (0x0002417c) link_highlight_secondary_pane

0x385d,	// (0x00024184) link_highlight_title_pane

0x383c,	// (0x00024163) copy_highlight_digital_pane

0x383c,	// (0x00024163) copy_highlight_primary_pane

0x384d,	// (0x00024174) copy_highlight_primary_small_pane

0x3855,	// (0x0002417c) copy_highlight_secondary_pane

0x385d,	// (0x00024184) copy_highlight_title_pane

0x3855,	// (0x0002417c) graphic_text_digital_pane

0x43af,	// (0x00024cd6) graphic_text_primary_pane

0x43b8,	// (0x00024cdf) graphic_text_primary_small_pane

0x384d,	// (0x00024174) graphic_text_secondary_pane

0x383c,	// (0x00024163) graphic_text_title_pane

0xf4a5,	// (0x0002fdcc) cursor_primary_pane_g1

0x43a1,	// (0x00024cc8) cursor_text_primary_t1

0x0683,	// (0x00020faa) cursor_primary_small_pane_g1

0x4393,	// (0x00024cba) cursor_text_primary_small_t1

0x0679,	// (0x00020fa0) cursor_primary_small_pane_g1_copy1

0x4385,	// (0x00024cac) cursor_text_primary_small_t1_copy1

0x4377,	// (0x00024c9e) cursor_text_title_t1

0x066f,	// (0x00020f96) cursor_title_pane_g1

0xf4a5,	// (0x0002fdcc) cursor_digital_pane_g1

0x3865,	// (0x0002418c) cursor_text_digital_t1

0x3873,	// (0x0002419a) link_highlight_primary_pane_g1

0x4320,	// (0x00024c47) link_highlight_primary_pane_t1

0x3873,	// (0x0002419a) link_highlight_primary_small_pane_g1

0x387b,	// (0x000241a2) link_highlight_primary_small_pane_t1

0x388a,	// (0x000241b1) link_highlight_secondary_pane_g1

0x3892,	// (0x000241b9) link_highlight_secondary_pane_t1

0x4285,	// (0x00024bac) link_highlight_title_pane_g1

0x429c,	// (0x00024bc3) link_highlight_title_pane_t1

0x4285,	// (0x00024bac) link_highlight_digital_pane_g1

0x428d,	// (0x00024bb4) link_highlight_digital_pane_t1

0x4161,	// (0x00024a88) copy_highlight_primary_pane_g1

0x4187,	// (0x00024aae) copy_highlight_primary_pane_t1

0x4161,	// (0x00024a88) copy_highlight_primary_small_pane_g1

0x4178,	// (0x00024a9f) copy_highlight_primary_small_pane_t1

0x38a1,	// (0x000241c8) copy_highlight_secondary_pane_g1

0x38a9,	// (0x000241d0) copy_highlight_secondary_pane_t1

0x4161,	// (0x00024a88) copy_highlight_title_pane_g1

0x4169,	// (0x00024a90) copy_highlight_title_pane_t1

0x4161,	// (0x00024a88) copy_highlight_digital_pane_g1

0x4f04,	// (0x0002582b) copy_highlight_digital_pane_t1

0x4e58,	// (0x0002577f) graphic_text_primary_pane_g1

0x4ee8,	// (0x0002580f) graphic_text_primary_pane_t1

0x4ef6,	// (0x0002581d) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x000302cb) graphic_text_primary_pane_t

0x4ec4,	// (0x000257eb) graphic_text_primary_small_pane_g1

0x4ecc,	// (0x000257f3) graphic_text_primary_small_pane_t1

0x4eda,	// (0x00025801) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x000302c6) graphic_text_primary_small_pane_t

0x4ea0,	// (0x000257c7) graphic_text_secondary_pane_g1

0x4ea8,	// (0x000257cf) graphic_text_secondary_pane_t1

0x4eb6,	// (0x000257dd) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x000302c1) graphic_text_secondary_pane_t

0x4e7c,	// (0x000257a3) graphic_text_title_pane_g1

0x4e84,	// (0x000257ab) graphic_text_title_pane_t1

0x4e92,	// (0x000257b9) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x000302bc) graphic_text_title_pane_t

0x4e58,	// (0x0002577f) graphic_text_digital_pane_g1

0x4e60,	// (0x00025787) graphic_text_digital_pane_t1

0x4e6e,	// (0x00025795) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x000302b7) graphic_text_digital_pane_t

0x2835,	// (0x0002315c) navi_icon_pane_srt_ParamLimits

0x2835,	// (0x0002315c) navi_icon_pane_srt

0x27d1,	// (0x000230f8) navi_midp_pane_srt

0x27d1,	// (0x000230f8) navi_navi_pane_srt

0x2835,	// (0x0002315c) navi_text_pane_srt_ParamLimits

0x2835,	// (0x0002315c) navi_text_pane_srt

0x4e23,	// (0x0002574a) navi_navi_icon_text_pane_srt

0x4e3d,	// (0x00025764) navi_navi_pane_srt_g1_ParamLimits

0x4e3d,	// (0x00025764) navi_navi_pane_srt_g1

0x4e2b,	// (0x00025752) navi_navi_pane_srt_g2_ParamLimits

0x4e2b,	// (0x00025752) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x000302b2) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x000302b2) navi_navi_pane_srt_g

0x4e4f,	// (0x00025776) navi_navi_tabs_pane_srt

0x4e23,	// (0x0002574a) navi_navi_text_pane_srt

0x4e23,	// (0x0002574a) navi_navi_volume_pane_srt

0x4e14,	// (0x0002573b) navi_navi_text_pane_srt_t1

0x95b5,	// (0x00029edc) navi_navi_volume_pane_srt_g1

0x95bd,	// (0x00029ee4) volume_small_pane_srt_ParamLimits

0x95bd,	// (0x00029ee4) volume_small_pane_srt

0x83d0,	// (0x00028cf7) volume_small_pane_srt_g1_ParamLimits

0x83d0,	// (0x00028cf7) volume_small_pane_srt_g1

0x83e0,	// (0x00028d07) volume_small_pane_srt_g2_ParamLimits

0x83e0,	// (0x00028d07) volume_small_pane_srt_g2

0x83f1,	// (0x00028d18) volume_small_pane_srt_g3_ParamLimits

0x83f1,	// (0x00028d18) volume_small_pane_srt_g3

0x8402,	// (0x00028d29) volume_small_pane_srt_g4_ParamLimits

0x8402,	// (0x00028d29) volume_small_pane_srt_g4

0x8413,	// (0x00028d3a) volume_small_pane_srt_g5_ParamLimits

0x8413,	// (0x00028d3a) volume_small_pane_srt_g5

0x8424,	// (0x00028d4b) volume_small_pane_srt_g6_ParamLimits

0x8424,	// (0x00028d4b) volume_small_pane_srt_g6

0x8435,	// (0x00028d5c) volume_small_pane_srt_g7_ParamLimits

0x8435,	// (0x00028d5c) volume_small_pane_srt_g7

0x8446,	// (0x00028d6d) volume_small_pane_srt_g8_ParamLimits

0x8446,	// (0x00028d6d) volume_small_pane_srt_g8

0x8457,	// (0x00028d7e) volume_small_pane_srt_g9_ParamLimits

0x8457,	// (0x00028d7e) volume_small_pane_srt_g9

0x8468,	// (0x00028d8f) volume_small_pane_srt_g10_ParamLimits

0x8468,	// (0x00028d8f) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0003005f) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0003005f) volume_small_pane_srt_g

0x2adf,	// (0x00023406) query_popup_data_pane_cp2

0x4dfa,	// (0x00025721) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4dfa,	// (0x00025721) navi_navi_icon_text_pane_srt_t1

0x43af,	// (0x00024cd6) navi_tabs_2_long_pane_srt

0x43af,	// (0x00024cd6) navi_tabs_2_pane_srt

0x43af,	// (0x00024cd6) navi_tabs_3_long_pane_srt

0x43af,	// (0x00024cd6) navi_tabs_3_pane_srt

0x43af,	// (0x00024cd6) navi_tabs_4_pane_srt

0x9595,	// (0x00029ebc) tabs_2_active_pane_srt_ParamLimits

0x9595,	// (0x00029ebc) tabs_2_active_pane_srt

0x95a5,	// (0x00029ecc) tabs_2_passive_pane_srt_ParamLimits

0x95a5,	// (0x00029ecc) tabs_2_passive_pane_srt

0x3c26,	// (0x0002454d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3c26,	// (0x0002454d) bg_passive_tab_pane_cp1_srt

0x40d4,	// (0x000249fb) bg_passive_tab_pane_g1_cp1_srt

0x34c4,	// (0x00023deb) bg_passive_tab_pane_g2_cp1_srt

0x40cb,	// (0x000249f2) bg_passive_tab_pane_g3_cp1_srt

0x281f,	// (0x00023146) bg_active_tab_pane_cp1_srt_ParamLimits

0x281f,	// (0x00023146) bg_active_tab_pane_cp1_srt

0x40c3,	// (0x000249ea) tabs_2_active_pane_srt_g1

0xdd9d,	// (0x0002e6c4) tabs_2_active_pane_srt_t1_ParamLimits

0xdd9d,	// (0x0002e6c4) tabs_2_active_pane_srt_t1

0x40d4,	// (0x000249fb) bg_active_tab_pane_g1_cp1_srt

0x34c4,	// (0x00023deb) bg_active_tab_pane_g2_cp1_srt

0x40cb,	// (0x000249f2) bg_active_tab_pane_g3_cp1_srt

0x9562,	// (0x00029e89) tabs_3_active_pane_srt_ParamLimits

0x9562,	// (0x00029e89) tabs_3_active_pane_srt

0x9573,	// (0x00029e9a) tabs_3_passive_pane_cp_srt_ParamLimits

0x9573,	// (0x00029e9a) tabs_3_passive_pane_cp_srt

0x9584,	// (0x00029eab) tabs_3_passive_pane_srt_ParamLimits

0x9584,	// (0x00029eab) tabs_3_passive_pane_srt

0x3c26,	// (0x0002454d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3c26,	// (0x0002454d) bg_passive_tab_pane_cp2_srt

0x38c1,	// (0x000241e8) bg_passive_tab_pane_g1_cp2_srt

0x34c4,	// (0x00023deb) bg_passive_tab_pane_g2_cp2_srt

0x38b8,	// (0x000241df) bg_passive_tab_pane_g3_cp2_srt

0x281f,	// (0x00023146) bg_active_tab_pane_cp2_srt_ParamLimits

0x281f,	// (0x00023146) bg_active_tab_pane_cp2_srt

0x4dea,	// (0x00025711) tabs_3_active_pane_srt_g1

0xdaa5,	// (0x0002e3cc) tabs_3_active_pane_srt_t1_ParamLimits

0xdaa5,	// (0x0002e3cc) tabs_3_active_pane_srt_t1

0x38c1,	// (0x000241e8) bg_active_tab_pane_g1_cp2_srt

0x34c4,	// (0x00023deb) bg_active_tab_pane_g2_cp2_srt

0x38b8,	// (0x000241df) bg_active_tab_pane_g3_cp2_srt

0x951a,	// (0x00029e41) tabs_4_active_pane_srt_ParamLimits

0x951a,	// (0x00029e41) tabs_4_active_pane_srt

0x952c,	// (0x00029e53) tabs_4_passive_pane_cp2_srt_ParamLimits

0x952c,	// (0x00029e53) tabs_4_passive_pane_cp2_srt

0x862c,	// (0x00028f53) aid_size_cell_toolbar

0xdfe5,	// (0x0002e90c) main_idle_act_pane_ParamLimits

0x87a7,	// (0x000290ce) popup_large_graphic_colour_window_ParamLimits

0xe543,	// (0x0002ee6a) popup_toolbar_window_ParamLimits

0xe543,	// (0x0002ee6a) popup_toolbar_window

0x4d58,	// (0x0002567f) list_single_graphic_2heading_pane_ParamLimits

0x4d58,	// (0x0002567f) list_single_graphic_2heading_pane

0x3161,	// (0x00023a88) aid_size_cell_apps_grid_lsc_pane

0x3173,	// (0x00023a9a) aid_size_cell_apps_grid_prt_pane

0x2f9c,	// (0x000238c3) bg_wml_button_pane_cp1_ParamLimits

0x2f9c,	// (0x000238c3) bg_wml_button_pane_cp1

0x3dd0,	// (0x000246f7) form_midp_field_text_pane_t1_ParamLimits

0x3c26,	// (0x0002454d) input_focus_pane_cp050_ParamLimits

0x3df1,	// (0x00024718) list_midp_form_text_pane_ParamLimits

0x3dad,	// (0x000246d4) input_focus_pane_cp051_ParamLimits

0x3dc1,	// (0x000246e8) list_midp_choice_pane_ParamLimits

0x3caa,	// (0x000245d1) list_single_2graphic_pane_cp3_ParamLimits

0x3caa,	// (0x000245d1) list_single_2graphic_pane_cp3

0x3cbd,	// (0x000245e4) list_single_midp_graphic_pane_ParamLimits

0x3cbd,	// (0x000245e4) list_single_midp_graphic_pane

0x76d3,	// (0x00027ffa) list_single_graphic_2heading_pane_g1_ParamLimits

0x76d3,	// (0x00027ffa) list_single_graphic_2heading_pane_g1

0x76df,	// (0x00028006) list_single_graphic_2heading_pane_g4_ParamLimits

0x76df,	// (0x00028006) list_single_graphic_2heading_pane_g4

0x76eb,	// (0x00028012) list_single_graphic_2heading_pane_g5_ParamLimits

0x76eb,	// (0x00028012) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x000300b2) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x000300b2) list_single_graphic_2heading_pane_g

0x76f7,	// (0x0002801e) list_single_graphic_2heading_pane_t1_ParamLimits

0x76f7,	// (0x0002801e) list_single_graphic_2heading_pane_t1

0x770b,	// (0x00028032) list_single_graphic_2heading_pane_t2_ParamLimits

0x770b,	// (0x00028032) list_single_graphic_2heading_pane_t2

0x7725,	// (0x0002804c) list_single_graphic_2heading_pane_t3_ParamLimits

0x7725,	// (0x0002804c) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x000300b9) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x000300b9) list_single_graphic_2heading_pane_t

0x3ae4,	// (0x0002440b) bg_popup_sub_pane_cp2

0x3b0a,	// (0x00024431) grid_toobar_pane

0x8deb,	// (0x00029712) cell_toolbar_pane_ParamLimits

0x8deb,	// (0x00029712) cell_toolbar_pane

0x3b40,	// (0x00024467) cell_toolbar_pane_g1_ParamLimits

0x3b40,	// (0x00024467) cell_toolbar_pane_g1

0x3b52,	// (0x00024479) cell_toolbar_pane_g2_ParamLimits

0x3b52,	// (0x00024479) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x000300c7) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x000300c7) cell_toolbar_pane_g

0x3b74,	// (0x0002449b) grid_highlight_pane_cp2_ParamLimits

0x3b74,	// (0x0002449b) grid_highlight_pane_cp2

0x3b8e,	// (0x000244b5) toolbar_button_pane

0x3b9a,	// (0x000244c1) toolbar_button_pane_g1

0x3baa,	// (0x000244d1) toolbar_button_pane_g2

0x3ba2,	// (0x000244c9) toolbar_button_pane_g3

0x3bba,	// (0x000244e1) toolbar_button_pane_g4

0x3bb2,	// (0x000244d9) toolbar_button_pane_g5

0x3bc2,	// (0x000244e9) toolbar_button_pane_g6

0x3bca,	// (0x000244f1) toolbar_button_pane_g7

0x3bda,	// (0x00024501) toolbar_button_pane_g8

0x3bd2,	// (0x000244f9) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x000300cc) toolbar_button_pane_g

0x8e1a,	// (0x00029741) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8e1a,	// (0x00029741) list_single_2graphic_pane_g1_cp3

0xe585,	// (0x0002eeac) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe585,	// (0x0002eeac) list_single_2graphic_pane_g2_cp3

0x8e35,	// (0x0002975c) list_single_2graphic_pane_g3_cp3

0x8e3d,	// (0x00029764) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8e3d,	// (0x00029764) list_single_2graphic_pane_g4_cp3

0x8e49,	// (0x00029770) list_single_2graphic_pane_t1_cp3_ParamLimits

0x8e49,	// (0x00029770) list_single_2graphic_pane_t1_cp3

0x8e63,	// (0x0002978a) list_single_midp_graphic_pane_g2_ParamLimits

0x8e63,	// (0x0002978a) list_single_midp_graphic_pane_g2

0x8634,	// (0x00028f5b) aid_zoom_text_primary

0x76cb,	// (0x00027ff2) aid_zoom_text_secondary

0x3958,	// (0x0002427f) status_small_pane_g7_ParamLimits

0x3958,	// (0x0002427f) status_small_pane_g7

0x397b,	// (0x000242a2) status_small_pane_t1_ParamLimits

0xd9ed,	// (0x0002e314) title_pane_g2

0x0003,

0xf529,	// (0x0002fe50) title_pane_g

0xdccf,	// (0x0002e5f6) aid_size_cell_colour_1_pane_ParamLimits

0xdccf,	// (0x0002e5f6) aid_size_cell_colour_1_pane

0xdce3,	// (0x0002e60a) aid_size_cell_colour_2_pane_ParamLimits

0xdce3,	// (0x0002e60a) aid_size_cell_colour_2_pane

0xdcf7,	// (0x0002e61e) aid_size_cell_colour_3_pane_ParamLimits

0xdcf7,	// (0x0002e61e) aid_size_cell_colour_3_pane

0xdd0b,	// (0x0002e632) aid_size_cell_colour_4_pane_ParamLimits

0xdd0b,	// (0x0002e632) aid_size_cell_colour_4_pane

0x7de9,	// (0x00028710) title_pane_stacon_g1_ParamLimits

0x7de9,	// (0x00028710) title_pane_stacon_g1

0x41de,	// (0x00024b05) popup_note_wait_window_g3_ParamLimits

0x41de,	// (0x00024b05) popup_note_wait_window_g3

0x4254,	// (0x00024b7b) popup_note_wait_window_t5_ParamLimits

0x4254,	// (0x00024b7b) popup_note_wait_window_t5

0x27d1,	// (0x000230f8) main_feb_china_hwr_fs_writing_pane

0xe046,	// (0x0002e96d) popup_feb_china_hwr_fs_window_ParamLimits

0xe046,	// (0x0002e96d) popup_feb_china_hwr_fs_window

0xe596,	// (0x0002eebd) aid_size_cell_hwr_fs_ParamLimits

0xe596,	// (0x0002eebd) aid_size_cell_hwr_fs

0x3c26,	// (0x0002454d) bg_popup_sub_pane_cp3_ParamLimits

0x3c26,	// (0x0002454d) bg_popup_sub_pane_cp3

0xe5ab,	// (0x0002eed2) grid_hwr_fs_pane_ParamLimits

0xe5ab,	// (0x0002eed2) grid_hwr_fs_pane

0x8eae,	// (0x000297d5) linegrid_hwr_fs_pane_ParamLimits

0x8eae,	// (0x000297d5) linegrid_hwr_fs_pane

0xe5c3,	// (0x0002eeea) cell_hwr_fs_pane_ParamLimits

0xe5c3,	// (0x0002eeea) cell_hwr_fs_pane

0x3c32,	// (0x00024559) linegrid_hwr_fs_pane_g1_ParamLimits

0x3c32,	// (0x00024559) linegrid_hwr_fs_pane_g1

0x05f1,	// (0x00020f18) linegrid_hwr_fs_pane_g2_ParamLimits

0x05f1,	// (0x00020f18) linegrid_hwr_fs_pane_g2

0x3c3e,	// (0x00024565) linegrid_hwr_fs_pane_g3_ParamLimits

0x3c3e,	// (0x00024565) linegrid_hwr_fs_pane_g3

0x8eee,	// (0x00029815) linegrid_hwr_fs_pane_g4_ParamLimits

0x8eee,	// (0x00029815) linegrid_hwr_fs_pane_g4

0x8f08,	// (0x0002982f) linegrid_hwr_fs_pane_g5_ParamLimits

0x8f08,	// (0x0002982f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x000300f2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x000300f2) linegrid_hwr_fs_pane_g

0x3c4a,	// (0x00024571) cell_hwr_fs_pane_g1_ParamLimits

0x3c4a,	// (0x00024571) cell_hwr_fs_pane_g1

0x3ab2,	// (0x000243d9) cell_hwr_fs_pane_g2_ParamLimits

0x3ab2,	// (0x000243d9) cell_hwr_fs_pane_g2

0x0603,	// (0x00020f2a) cell_hwr_fs_pane_g3_ParamLimits

0x0603,	// (0x00020f2a) cell_hwr_fs_pane_g3

0x0610,	// (0x00020f37) cell_hwr_fs_pane_g4_ParamLimits

0x0610,	// (0x00020f37) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x000300fd) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x000300fd) cell_hwr_fs_pane_g

0xe5e3,	// (0x0002ef0a) cell_hwr_fs_pane_t1

0x27d1,	// (0x000230f8) grid_highlight_pane_cp6

0x27d1,	// (0x000230f8) main_idle_act2_pane

0x2f4c,	// (0x00023873) aid_inside_area_popup_secondary

0x0790,	// (0x000210b7) aid_inside_area_window_primary_ParamLimits

0x0790,	// (0x000210b7) aid_inside_area_window_primary

0x4f13,	// (0x0002583a) ai2_news_ticker_pane

0x4f1b,	// (0x00025842) aid_size_cell_ai1_link_ParamLimits

0x4f1b,	// (0x00025842) aid_size_cell_ai1_link

0x0b57,	// (0x0002147e) popup_ai2_data_window_ParamLimits

0x0b57,	// (0x0002147e) popup_ai2_data_window

0x4f35,	// (0x0002585c) popup_ai2_link_window_ParamLimits

0x4f35,	// (0x0002585c) popup_ai2_link_window

0x3c26,	// (0x0002454d) bg_popup_sub_pane_cp4_ParamLimits

0x3c26,	// (0x0002454d) bg_popup_sub_pane_cp4

0x4f49,	// (0x00025870) grid_ai2_link_pane_ParamLimits

0x4f49,	// (0x00025870) grid_ai2_link_pane

0x4f60,	// (0x00025887) popup_ai2_link_window_g1_ParamLimits

0x4f60,	// (0x00025887) popup_ai2_link_window_g1

0x4f6c,	// (0x00025893) popup_ai2_link_window_g2_ParamLimits

0x4f6c,	// (0x00025893) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x000302d0) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x000302d0) popup_ai2_link_window_g

0x4f7b,	// (0x000258a2) ai2_mp_button_pane

0x4f83,	// (0x000258aa) ai2_mp_volume_pane

0x3dad,	// (0x000246d4) bg_popup_sub_pane_cp5_ParamLimits

0x3dad,	// (0x000246d4) bg_popup_sub_pane_cp5

0x4f8b,	// (0x000258b2) heading_ai2_gene_pane_ParamLimits

0x4f8b,	// (0x000258b2) heading_ai2_gene_pane

0x4f97,	// (0x000258be) list_ai2_gene_pane_ParamLimits

0x4f97,	// (0x000258be) list_ai2_gene_pane

0x4fdf,	// (0x00025906) cell_ai2_link_pane_ParamLimits

0x4fdf,	// (0x00025906) cell_ai2_link_pane

0x4ff5,	// (0x0002591c) cell_ai2_link_pane_g1

0x27d1,	// (0x000230f8) grid_highlight_pane_cp7

0x9619,	// (0x00029f40) ai2_mp_volume_pane_g1

0x509a,	// (0x000259c1) ai2_mp_volume_pane_g2

0x0b81,	// (0x000214a8) list_ai2_gene_pane_t1

0x5092,	// (0x000259b9) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x000302e9) ai2_mp_volume_pane_g

0x9621,	// (0x00029f48) volume_small_pane_cp3

0x50a2,	// (0x000259c9) aid_size_cell_ai2_button

0x50aa,	// (0x000259d1) grid_ai2_button_pane

0x50b3,	// (0x000259da) cell_ai2_button_pane_ParamLimits

0x50b3,	// (0x000259da) cell_ai2_button_pane

0x274f,	// (0x00023076) cell_ai2_button_pane_g1

0x27d1,	// (0x000230f8) grid_highlight_pane_cp8

0x5052,	// (0x00025979) ai2_gene_pane_t1_ParamLimits

0x5052,	// (0x00025979) ai2_gene_pane_t1

0xdfcd,	// (0x0002e8f4) aid_height_parent_landscape

0x4cf1,	// (0x00025618) aid_height_set_list

0x4cfd,	// (0x00025624) aid_size_parent

0x4dd4,	// (0x000256fb) aid_size_cell_graphic_pane_ParamLimits

0x4fa7,	// (0x000258ce) popup_ai2_data_window_g1_ParamLimits

0x4fa7,	// (0x000258ce) popup_ai2_data_window_g1

0x4fb3,	// (0x000258da) ai2_news_ticker_pane_g1

0x4fbb,	// (0x000258e2) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x000302d5) ai2_news_ticker_pane_g

0x4fc3,	// (0x000258ea) ai2_news_ticker_pane_t1

0x4fd1,	// (0x000258f8) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x000302da) ai2_news_ticker_pane_t

0x4ffe,	// (0x00025925) heading_ai2_gene_pane_g1

0x5006,	// (0x0002592d) heading_ai2_gene_pane_t1_ParamLimits

0x5006,	// (0x0002592d) heading_ai2_gene_pane_t1

0x501b,	// (0x00025942) list_highlight_pane_cp6

0x0b6b,	// (0x00021492) ai2_gene_pane_ParamLimits

0x0b6b,	// (0x00021492) ai2_gene_pane

0x0b8f,	// (0x000214b6) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x000302df) list_ai2_gene_pane_t

0x5023,	// (0x0002594a) list_highlight_pane_cp8_ParamLimits

0x5023,	// (0x0002594a) list_highlight_pane_cp8

0x5034,	// (0x0002595b) ai2_gene_pane_g1_ParamLimits

0x5034,	// (0x0002595b) ai2_gene_pane_g1

0x5046,	// (0x0002596d) ai2_gene_pane_g2_ParamLimits

0x5046,	// (0x0002596d) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x000302e4) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x000302e4) ai2_gene_pane_g

0x2daa,	// (0x000236d1) scroll_pane_cp12

0xdf8c,	// (0x0002e8b3) control_pane_t3_ParamLimits

0xdf8c,	// (0x0002e8b3) control_pane_t3

0x396c,	// (0x00024293) status_small_pane_g8_ParamLimits

0x396c,	// (0x00024293) status_small_pane_g8

0xe0ba,	// (0x0002e9e1) popup_find_window_ParamLimits

0xe2ad,	// (0x0002ebd4) popup_note_image_window_ParamLimits

0xb9f6,	// (0x0002c31d) list_double2_graphic_pane_vc_g1_ParamLimits

0xb9f6,	// (0x0002c31d) list_double2_graphic_pane_vc_g1

0xba02,	// (0x0002c329) list_double2_graphic_pane_vc_g2_ParamLimits

0xba02,	// (0x0002c329) list_double2_graphic_pane_vc_g2

0xba0e,	// (0x0002c335) list_double2_graphic_pane_vc_g3_ParamLimits

0xba0e,	// (0x0002c335) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x000300c0) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x000300c0) list_double2_graphic_pane_vc_g

0xb2af,	// (0x0002bbd6) list_double2_graphic_pane_vc_t1_ParamLimits

0xb2af,	// (0x0002bbd6) list_double2_graphic_pane_vc_t1

0xb297,	// (0x0002bbbe) list_single_heading_pane_vc_g1_ParamLimits

0xb297,	// (0x0002bbbe) list_single_heading_pane_vc_g1

0xb2a3,	// (0x0002bbca) list_single_heading_pane_vc_g2_ParamLimits

0xb2a3,	// (0x0002bbca) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002feca) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002feca) list_single_heading_pane_vc_g

0xba1a,	// (0x0002c341) list_single_heading_pane_vc_t1_ParamLimits

0xba1a,	// (0x0002c341) list_single_heading_pane_vc_t1

0xba30,	// (0x0002c357) list_single_heading_pane_vc_t2_ParamLimits

0xba30,	// (0x0002c357) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x000300e1) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x000300e1) list_single_heading_pane_vc_t

0x3be2,	// (0x00024509) list_setting_number_pane_vc_g1_ParamLimits

0x3be2,	// (0x00024509) list_setting_number_pane_vc_g1

0x3bee,	// (0x00024515) list_setting_number_pane_vc_g2_ParamLimits

0x3bee,	// (0x00024515) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x000300e6) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x000300e6) list_setting_number_pane_vc_g

0xba42,	// (0x0002c369) list_setting_number_pane_vc_t1_ParamLimits

0xba42,	// (0x0002c369) list_setting_number_pane_vc_t1

0xba56,	// (0x0002c37d) list_setting_number_pane_vc_t2_ParamLimits

0xba56,	// (0x0002c37d) list_setting_number_pane_vc_t2

0xba72,	// (0x0002c399) list_setting_number_pane_vc_t3_ParamLimits

0xba72,	// (0x0002c399) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x000300eb) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x000300eb) list_setting_number_pane_vc_t

0xba8a,	// (0x0002c3b1) set_value_pane_vc_ParamLimits

0xba8a,	// (0x0002c3b1) set_value_pane_vc

0x4d58,	// (0x0002567f) list_double2_graphic_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_double2_graphic_pane_vc

0xbb23,	// (0x0002c44a) list_double2_large_graphic_pane_vc_ParamLimits

0xbb23,	// (0x0002c44a) list_double2_large_graphic_pane_vc

0x4d58,	// (0x0002567f) list_double2_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_double2_pane_vc

0x4d58,	// (0x0002567f) list_double_graphic_heading_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_double_graphic_heading_pane_vc

0x4d58,	// (0x0002567f) list_double_graphic_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_double_graphic_pane_vc

0x4d58,	// (0x0002567f) list_double_heading_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_double_heading_pane_vc

0xbb35,	// (0x0002c45c) list_double_large_graphic_pane_vc_ParamLimits

0xbb35,	// (0x0002c45c) list_double_large_graphic_pane_vc

0x4d58,	// (0x0002567f) list_double_number_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_double_number_pane_vc

0x4d58,	// (0x0002567f) list_double_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_double_pane_vc

0x4d58,	// (0x0002567f) list_double_time_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_double_time_pane_vc

0x4d58,	// (0x0002567f) list_setting_number_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_setting_number_pane_vc

0x4d58,	// (0x0002567f) list_setting_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_setting_pane_vc

0x4d58,	// (0x0002567f) list_single_graphic_heading_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_single_graphic_heading_pane_vc

0x4d58,	// (0x0002567f) list_single_heading_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_single_heading_pane_vc

0x4d58,	// (0x0002567f) list_single_number_heading_pane_vc_ParamLimits

0x4d58,	// (0x0002567f) list_single_number_heading_pane_vc

0xb9f6,	// (0x0002c31d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb9f6,	// (0x0002c31d) list_double_graphic_heading_pane_vc_g1

0xb297,	// (0x0002bbbe) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb297,	// (0x0002bbbe) list_double_graphic_heading_pane_vc_g2

0xb2a3,	// (0x0002bbca) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb2a3,	// (0x0002bbca) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf59c,	// (0x0002fec3) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0002fec3) list_double_graphic_heading_pane_vc_g

0xbb97,	// (0x0002c4be) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xbb97,	// (0x0002c4be) list_double_graphic_heading_pane_vc_t1

0xbbad,	// (0x0002c4d4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xbbad,	// (0x0002c4d4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c9,	// (0x000302f0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c9,	// (0x000302f0) list_double_graphic_heading_pane_vc_t

0x3be2,	// (0x00024509) list_setting_pane_vc_g1_ParamLimits

0x3be2,	// (0x00024509) list_setting_pane_vc_g1

0x3bee,	// (0x00024515) list_setting_pane_vc_g2_ParamLimits

0x3bee,	// (0x00024515) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x000300e6) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x000300e6) list_setting_pane_vc_g

0xbbc5,	// (0x0002c4ec) list_setting_pane_vc_t1_ParamLimits

0xbbc5,	// (0x0002c4ec) list_setting_pane_vc_t1

0xbbd9,	// (0x0002c500) list_setting_pane_vc_t2_ParamLimits

0xbbd9,	// (0x0002c500) list_setting_pane_vc_t2

0x0001,

0xfa0c,	// (0x00030333) list_setting_pane_vc_t_ParamLimits

0xfa0c,	// (0x00030333) list_setting_pane_vc_t

0xba8a,	// (0x0002c3b1) set_value_pane_cp_vc_ParamLimits

0xba8a,	// (0x0002c3b1) set_value_pane_cp_vc

0xb297,	// (0x0002bbbe) list_single_number_heading_pane_vc_g1_ParamLimits

0xb297,	// (0x0002bbbe) list_single_number_heading_pane_vc_g1

0xb2a3,	// (0x0002bbca) list_single_number_heading_pane_vc_g2_ParamLimits

0xb2a3,	// (0x0002bbca) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002feca) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002feca) list_single_number_heading_pane_vc_g

0xba1a,	// (0x0002c341) list_single_number_heading_pane_vc_t1_ParamLimits

0xba1a,	// (0x0002c341) list_single_number_heading_pane_vc_t1

0xbbed,	// (0x0002c514) list_single_number_heading_pane_vc_t2_ParamLimits

0xbbed,	// (0x0002c514) list_single_number_heading_pane_vc_t2

0xb2ff,	// (0x0002bc26) list_single_number_heading_pane_vc_t3_ParamLimits

0xb2ff,	// (0x0002bc26) list_single_number_heading_pane_vc_t3

0x0002,

0xfa11,	// (0x00030338) list_single_number_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x00030338) list_single_number_heading_pane_vc_t

0xb9f6,	// (0x0002c31d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xb9f6,	// (0x0002c31d) list_single_graphic_heading_pane_vc_g1

0xb297,	// (0x0002bbbe) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xb297,	// (0x0002bbbe) list_single_graphic_heading_pane_vc_g4

0xb2a3,	// (0x0002bbca) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xb2a3,	// (0x0002bbca) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf59c,	// (0x0002fec3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf59c,	// (0x0002fec3) list_single_graphic_heading_pane_vc_g

0xba1a,	// (0x0002c341) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xba1a,	// (0x0002c341) list_single_graphic_heading_pane_vc_t1

0xbbff,	// (0x0002c526) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xbbff,	// (0x0002c526) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa18,	// (0x0003033f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa18,	// (0x0003033f) list_single_graphic_heading_pane_vc_t

0xb297,	// (0x0002bbbe) list_double2_pane_vc_g1_ParamLimits

0xb297,	// (0x0002bbbe) list_double2_pane_vc_g1

0xb2a3,	// (0x0002bbca) list_double2_pane_vc_g2_ParamLimits

0xb2a3,	// (0x0002bbca) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002feca) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002feca) list_double2_pane_vc_g

0xbafa,	// (0x0002c421) list_double2_pane_vc_t1_ParamLimits

0xbafa,	// (0x0002c421) list_double2_pane_vc_t1

0xbc11,	// (0x0002c538) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xbc11,	// (0x0002c538) list_double2_large_graphic_pane_vc_g1

0xbc1d,	// (0x0002c544) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xbc1d,	// (0x0002c544) list_double2_large_graphic_pane_vc_g2

0xbc29,	// (0x0002c550) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xbc29,	// (0x0002c550) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x0002fee7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x0002fee7) list_double2_large_graphic_pane_vc_g

0xbc35,	// (0x0002c55c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xbc35,	// (0x0002c55c) list_double2_large_graphic_pane_vc_t1

0xbc4b,	// (0x0002c572) list_double_time_pane_vc_g1_ParamLimits

0xbc4b,	// (0x0002c572) list_double_time_pane_vc_g1

0xbc57,	// (0x0002c57e) list_double_time_pane_vc_g2_ParamLimits

0xbc57,	// (0x0002c57e) list_double_time_pane_vc_g2

0x0001,

0xfa1d,	// (0x00030344) list_double_time_pane_vc_g_ParamLimits

0xfa1d,	// (0x00030344) list_double_time_pane_vc_g

0xbc63,	// (0x0002c58a) list_double_time_pane_vc_t1_ParamLimits

0xbc63,	// (0x0002c58a) list_double_time_pane_vc_t1

0xbc81,	// (0x0002c5a8) list_double_time_pane_vc_t2_ParamLimits

0xbc81,	// (0x0002c5a8) list_double_time_pane_vc_t2

0xbcca,	// (0x0002c5f1) list_double_time_pane_vc_t3_ParamLimits

0xbcca,	// (0x0002c5f1) list_double_time_pane_vc_t3

0xbcdc,	// (0x0002c603) list_double_time_pane_vc_t4_ParamLimits

0xbcdc,	// (0x0002c603) list_double_time_pane_vc_t4

0x0003,

0xfa22,	// (0x00030349) list_double_time_pane_vc_t_ParamLimits

0xfa22,	// (0x00030349) list_double_time_pane_vc_t

0xb297,	// (0x0002bbbe) list_double_pane_vc_g1_ParamLimits

0xb297,	// (0x0002bbbe) list_double_pane_vc_g1

0xb2a3,	// (0x0002bbca) list_double_pane_vc_g2_ParamLimits

0xb2a3,	// (0x0002bbca) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002feca) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002feca) list_double_pane_vc_g

0xbcee,	// (0x0002c615) list_double_pane_vc_t1_ParamLimits

0xbcee,	// (0x0002c615) list_double_pane_vc_t1

0xbd00,	// (0x0002c627) list_double_pane_vc_t2_ParamLimits

0xbd00,	// (0x0002c627) list_double_pane_vc_t2

0x0001,

0xfa2b,	// (0x00030352) list_double_pane_vc_t_ParamLimits

0xfa2b,	// (0x00030352) list_double_pane_vc_t

0xb297,	// (0x0002bbbe) list_double_number_pane_vc_g1_ParamLimits

0xb297,	// (0x0002bbbe) list_double_number_pane_vc_g1

0xb2a3,	// (0x0002bbca) list_double_number_pane_vc_g2_ParamLimits

0xb2a3,	// (0x0002bbca) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002feca) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002feca) list_double_number_pane_vc_g

0xbd16,	// (0x0002c63d) list_double_number_pane_vc_t1_ParamLimits

0xbd16,	// (0x0002c63d) list_double_number_pane_vc_t1

0xbd2a,	// (0x0002c651) list_double_number_pane_vc_t2_ParamLimits

0xbd2a,	// (0x0002c651) list_double_number_pane_vc_t2

0xbd3c,	// (0x0002c663) list_double_number_pane_vc_t3_ParamLimits

0xbd3c,	// (0x0002c663) list_double_number_pane_vc_t3

0x0002,

0xfa30,	// (0x00030357) list_double_number_pane_vc_t_ParamLimits

0xfa30,	// (0x00030357) list_double_number_pane_vc_t

0xbd52,	// (0x0002c679) list_double_large_graphic_pane_vc_g1_ParamLimits

0xbd52,	// (0x0002c679) list_double_large_graphic_pane_vc_g1

0xbd7a,	// (0x0002c6a1) list_double_large_graphic_pane_vc_g2_ParamLimits

0xbd7a,	// (0x0002c6a1) list_double_large_graphic_pane_vc_g2

0xbd8e,	// (0x0002c6b5) list_double_large_graphic_pane_vc_g3_ParamLimits

0xbd8e,	// (0x0002c6b5) list_double_large_graphic_pane_vc_g3

0xbd9d,	// (0x0002c6c4) list_double_large_graphic_pane_vc_g4_ParamLimits

0xbd9d,	// (0x0002c6c4) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa37,	// (0x0003035e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x0003035e) list_double_large_graphic_pane_vc_g

0xbdad,	// (0x0002c6d4) list_double_large_graphic_pane_vc_t1_ParamLimits

0xbdad,	// (0x0002c6d4) list_double_large_graphic_pane_vc_t1

0xbdc7,	// (0x0002c6ee) list_double_large_graphic_pane_vc_t2_ParamLimits

0xbdc7,	// (0x0002c6ee) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa40,	// (0x00030367) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa40,	// (0x00030367) list_double_large_graphic_pane_vc_t

0xb297,	// (0x0002bbbe) list_double_heading_pane_vc_g1_ParamLimits

0xb297,	// (0x0002bbbe) list_double_heading_pane_vc_g1

0xb2a3,	// (0x0002bbca) list_double_heading_pane_vc_g2_ParamLimits

0xb2a3,	// (0x0002bbca) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0002feca) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0002feca) list_double_heading_pane_vc_g

0xbde7,	// (0x0002c70e) list_double_heading_pane_vc_t1_ParamLimits

0xbde7,	// (0x0002c70e) list_double_heading_pane_vc_t1

0xba1a,	// (0x0002c341) list_double_heading_pane_vc_t2_ParamLimits

0xba1a,	// (0x0002c341) list_double_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0003036c) list_double_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0003036c) list_double_heading_pane_vc_t

0xbdf9,	// (0x0002c720) list_double_graphic_pane_vc_g1_ParamLimits

0xbdf9,	// (0x0002c720) list_double_graphic_pane_vc_g1

0xbe05,	// (0x0002c72c) list_double_graphic_pane_vc_g2_ParamLimits

0xbe05,	// (0x0002c72c) list_double_graphic_pane_vc_g2

0xb297,	// (0x0002bbbe) list_double_graphic_pane_vc_g3_ParamLimits

0xb297,	// (0x0002bbbe) list_double_graphic_pane_vc_g3

0x0003,

0xfa4a,	// (0x00030371) list_double_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x00030371) list_double_graphic_pane_vc_g

0xbe22,	// (0x0002c749) list_double_graphic_pane_vc_t1_ParamLimits

0xbe22,	// (0x0002c749) list_double_graphic_pane_vc_t1

0xbe40,	// (0x0002c767) list_double_graphic_pane_vc_t2_ParamLimits

0xbe40,	// (0x0002c767) list_double_graphic_pane_vc_t2

0x0001,

0xfa53,	// (0x0003037a) list_double_graphic_pane_vc_t_ParamLimits

0xfa53,	// (0x0003037a) list_double_graphic_pane_vc_t

0x7765,	// (0x0002808c) aid_size_cell_fastswap

0xd81f,	// (0x0002e146) aid_size_cell_touch_ParamLimits

0xd81f,	// (0x0002e146) aid_size_cell_touch

0x7921,	// (0x00028248) popup_fast_swap_wide_window_ParamLimits

0x7921,	// (0x00028248) popup_fast_swap_wide_window

0xd980,	// (0x0002e2a7) touch_pane_ParamLimits

0xd980,	// (0x0002e2a7) touch_pane

0xb744,	// (0x0002c06b) button_value_adjust_pane_cp2

0x5334,	// (0x00025c5b) button_value_adjust_pane_cp4

0xb764,	// (0x0002c08b) form_field_data_pane_cp2

0xeea0,	// (0x0002f7c7) form_field_data_wide_pane_cp2

0x3198,	// (0x00023abf) bg_scroll_pane_ParamLimits

0x7f96,	// (0x000288bd) scroll_handle_pane_ParamLimits

0x7faa,	// (0x000288d1) scroll_sc2_down_pane_ParamLimits

0x7faa,	// (0x000288d1) scroll_sc2_down_pane

0x31c9,	// (0x00023af0) scroll_sc2_up_pane_ParamLimits

0x31c9,	// (0x00023af0) scroll_sc2_up_pane

0x0cb1,	// (0x000215d8) grid_wheel_folder_pane_g1_ParamLimits

0x0cb1,	// (0x000215d8) grid_wheel_folder_pane_g1

0x82ae,	// (0x00028bd5) clock_nsta_pane_cp2_ParamLimits

0x82ae,	// (0x00028bd5) clock_nsta_pane_cp2

0xf409,	// (0x0002fd30) listscroll_midp_pane_ParamLimits

0xf418,	// (0x0002fd3f) midp_canvas_pane

0x861a,	// (0x00028f41) nsta_clock_indic_pane

0x39c3,	// (0x000242ea) listscroll_form_pane_vc

0x39cb,	// (0x000242f2) listscroll_set_pane_vc_ParamLimits

0x39cb,	// (0x000242f2) listscroll_set_pane_vc

0x02d7,	// (0x00020bfe) clock_nsta_pane

0x02fa,	// (0x00020c21) indicator_nsta_pane

0x3ae4,	// (0x0002440b) bg_popup_sub_pane_cp2_ParamLimits

0x3af8,	// (0x0002441f) find_pane_cp2_ParamLimits

0x3af8,	// (0x0002441f) find_pane_cp2

0x3b0a,	// (0x00024431) grid_toobar_pane_ParamLimits

0x3bfa,	// (0x00024521) list_form_gen_pane_vc_ParamLimits

0x3bfa,	// (0x00024521) list_form_gen_pane_vc

0x3c10,	// (0x00024537) scroll_pane_cp8_vc_ParamLimits

0x3c10,	// (0x00024537) scroll_pane_cp8_vc

0x3c60,	// (0x00024587) data_form_wide_pane_vc_ParamLimits

0x3c60,	// (0x00024587) data_form_wide_pane_vc

0x3c6c,	// (0x00024593) form_field_data_wide_pane_vc_g1

0x3c74,	// (0x0002459b) form_field_data_wide_pane_vc_t1_ParamLimits

0x3c74,	// (0x0002459b) form_field_data_wide_pane_vc_t1

0x2e03,	// (0x0002372a) input_focus_pane_cp6_vc_ParamLimits

0x2e03,	// (0x0002372a) input_focus_pane_cp6_vc

0x0647,	// (0x00020f6e) list_midp_pane_ParamLimits

0x40e9,	// (0x00024a10) scroll_pane_cp16_ParamLimits

0x40e9,	// (0x00024a10) scroll_pane_cp16

0x3f7a,	// (0x000248a1) button_value_adjust_pane_ParamLimits

0x3f7a,	// (0x000248a1) button_value_adjust_pane

0x0945,	// (0x0002126c) button_value_adjust_pane_cp6_ParamLimits

0x0945,	// (0x0002126c) button_value_adjust_pane_cp6

0x0a4f,	// (0x00021376) settings_code_pane_cp_ParamLimits

0x0a4f,	// (0x00021376) settings_code_pane_cp

0x274f,	// (0x00023076) cell_touch_pane_g1

0x274f,	// (0x00023076) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x00030005) cell_touch_pane_g

0x0b9d,	// (0x000214c4) cell_touch_pane_cp_ParamLimits

0x0b9d,	// (0x000214c4) cell_touch_pane_cp

0x0bb9,	// (0x000214e0) cell_touch_pane_ParamLimits

0x0bb9,	// (0x000214e0) cell_touch_pane

0x274f,	// (0x00023076) scroll_sc2_down_pane_g1

0x274f,	// (0x00023076) scroll_sc2_up_pane_g1

0x27d1,	// (0x000230f8) bg_set_opt_pane_cp4_vc

0x50c5,	// (0x000259ec) list_set_graphic_pane_vc_g1_ParamLimits

0x50c5,	// (0x000259ec) list_set_graphic_pane_vc_g1

0x50d1,	// (0x000259f8) list_set_graphic_pane_vc_g2_ParamLimits

0x50d1,	// (0x000259f8) list_set_graphic_pane_vc_g2

0x0001,

0xf9ce,	// (0x000302f5) list_set_graphic_pane_vc_g_ParamLimits

0xf9ce,	// (0x000302f5) list_set_graphic_pane_vc_g

0x50dd,	// (0x00025a04) text_primary_small_cp13_vc_ParamLimits

0x50dd,	// (0x00025a04) text_primary_small_cp13_vc

0x50f5,	// (0x00025a1c) list_set_graphic_pane_vc_ParamLimits

0x50f5,	// (0x00025a1c) list_set_graphic_pane_vc

0x27d1,	// (0x000230f8) input_focus_pane_cp2_vc

0x274f,	// (0x00023076) setting_code_pane_vc_g1

0x5108,	// (0x00025a2f) setting_code_pane_vc_t1

0x5116,	// (0x00025a3d) set_text_pane_vc_t1_ParamLimits

0x5116,	// (0x00025a3d) set_text_pane_vc_t1

0x27d1,	// (0x000230f8) input_focus_pane_cp1_vc

0x5131,	// (0x00025a58) list_set_text_pane_vc

0x274f,	// (0x00023076) setting_text_pane_vc_g1

0x27d1,	// (0x000230f8) bg_set_opt_pane_cp2_vc

0x513b,	// (0x00025a62) setting_slider_graphic_pane_vc_g1

0x5143,	// (0x00025a6a) setting_slider_graphic_pane_vc_t1

0x5151,	// (0x00025a78) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d3,	// (0x000302fa) setting_slider_graphic_pane_vc_t

0x515f,	// (0x00025a86) slider_set_pane_cp_vc

0x5167,	// (0x00025a8e) slider_set_pane_vc_g1

0x5170,	// (0x00025a97) slider_set_pane_vc_g2

0x0006,

0xf9d8,	// (0x000302ff) slider_set_pane_vc_g

0x2e5e,	// (0x00023785) set_opt_bg_pane_g1_copy1

0x2e66,	// (0x0002378d) set_opt_bg_pane_g2_copy1

0x519c,	// (0x00025ac3) set_opt_bg_pane_g3_copy1

0x2e76,	// (0x0002379d) set_opt_bg_pane_g4_copy1

0x2e7e,	// (0x000237a5) set_opt_bg_pane_g5_copy1

0x2e86,	// (0x000237ad) set_opt_bg_pane_g6_copy1

0x51a4,	// (0x00025acb) set_opt_bg_pane_g7_copy1

0x51ac,	// (0x00025ad3) set_opt_bg_pane_g8_copy1

0x51b4,	// (0x00025adb) set_opt_bg_pane_g9_copy1

0x27d1,	// (0x000230f8) bg_set_opt_pane_cp_vc

0x51bc,	// (0x00025ae3) setting_slider_pane_vc_t1

0x5143,	// (0x00025a6a) setting_slider_pane_vc_t2

0x5151,	// (0x00025a78) setting_slider_pane_vc_t3

0x0002,

0xf9e7,	// (0x0003030e) setting_slider_pane_vc_t

0x515f,	// (0x00025a86) slider_set_pane_vc

0x8fae,	// (0x000298d5) volume_set_pane_vc_g1

0x964c,	// (0x00029f73) volume_set_pane_vc_g2

0x9655,	// (0x00029f7c) volume_set_pane_vc_g3

0x965e,	// (0x00029f85) volume_set_pane_vc_g4

0x9667,	// (0x00029f8e) volume_set_pane_vc_g5

0x9670,	// (0x00029f97) volume_set_pane_vc_g6

0x9679,	// (0x00029fa0) volume_set_pane_vc_g7

0x9682,	// (0x00029fa9) volume_set_pane_vc_g8

0x968b,	// (0x00029fb2) volume_set_pane_vc_g9

0x9694,	// (0x00029fbb) volume_set_pane_vc_g10

0x0009,

0xf9ee,	// (0x00030315) volume_set_pane_vc_g

0x51cb,	// (0x00025af2) volume_set_pane_vc

0x51d3,	// (0x00025afa) button_value_adjust_pane_cp1_vc

0x51dd,	// (0x00025b04) list_highlight_pane_cp2_vc

0x51e6,	// (0x00025b0d) list_set_pane_vc_ParamLimits

0x51e6,	// (0x00025b0d) list_set_pane_vc

0x5238,	// (0x00025b5f) main_pane_set_vc_t1_ParamLimits

0x5238,	// (0x00025b5f) main_pane_set_vc_t1

0x524d,	// (0x00025b74) main_pane_set_vc_t2_ParamLimits

0x524d,	// (0x00025b74) main_pane_set_vc_t2

0x525f,	// (0x00025b86) main_pane_set_vc_t3_ParamLimits

0x525f,	// (0x00025b86) main_pane_set_vc_t3

0x5271,	// (0x00025b98) main_pane_set_vc_t4_ParamLimits

0x5271,	// (0x00025b98) main_pane_set_vc_t4

0x0003,

0xfa03,	// (0x0003032a) main_pane_set_vc_t_ParamLimits

0xfa03,	// (0x0003032a) main_pane_set_vc_t

0x5283,	// (0x00025baa) setting_code_pane_vc_ParamLimits

0x5283,	// (0x00025baa) setting_code_pane_vc

0x5292,	// (0x00025bb9) setting_slider_graphic_pane_vc

0x5292,	// (0x00025bb9) setting_slider_pane_vc

0x5292,	// (0x00025bb9) setting_text_pane_vc

0x5292,	// (0x00025bb9) setting_volume_pane_vc

0x529a,	// (0x00025bc1) scroll_pane_cp121_vc

0x2dee,	// (0x00023715) set_content_pane_vc

0x52a2,	// (0x00025bc9) button_value_adjust_pane_g1

0x52ab,	// (0x00025bd2) button_value_adjust_pane_g2

0x0001,

0xfa58,	// (0x0003037f) button_value_adjust_pane_g

0x52b4,	// (0x00025bdb) form_field_slider_wide_pane_vc_t1_ParamLimits

0x52b4,	// (0x00025bdb) form_field_slider_wide_pane_vc_t1

0x52ca,	// (0x00025bf1) form_field_slider_wide_pane_vc_t2_ParamLimits

0x52ca,	// (0x00025bf1) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5d,	// (0x00030384) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5d,	// (0x00030384) form_field_slider_wide_pane_vc_t

0x281f,	// (0x00023146) input_focus_pane_cp10_vc_ParamLimits

0x281f,	// (0x00023146) input_focus_pane_cp10_vc

0x52f5,	// (0x00025c1c) slider_cont_pane_cp1_vc_ParamLimits

0x52f5,	// (0x00025c1c) slider_cont_pane_cp1_vc

0x5167,	// (0x00025a8e) slider_form_pane_g1_cp2

0x5170,	// (0x00025a97) slider_form_pane_g2_cp2

0x5310,	// (0x00025c37) form_field_slider_pane_vc_t3

0x533c,	// (0x00025c63) form_field_slider_pane_vc_t4

0x534a,	// (0x00025c71) slider_form_pane_vc_ParamLimits

0x534a,	// (0x00025c71) slider_form_pane_vc

0x5357,	// (0x00025c7e) form_field_slider_pane_vc_t1_ParamLimits

0x5357,	// (0x00025c7e) form_field_slider_pane_vc_t1

0x536d,	// (0x00025c94) form_field_slider_pane_vc_t2_ParamLimits

0x536d,	// (0x00025c94) form_field_slider_pane_vc_t2

0x0001,

0xfa6f,	// (0x00030396) form_field_slider_pane_vc_t_ParamLimits

0xfa6f,	// (0x00030396) form_field_slider_pane_vc_t

0x281f,	// (0x00023146) input_focus_pane_cp9_vc_ParamLimits

0x281f,	// (0x00023146) input_focus_pane_cp9_vc

0x537f,	// (0x00025ca6) slider_cont_pane_vc_ParamLimits

0x537f,	// (0x00025ca6) slider_cont_pane_vc

0x5391,	// (0x00025cb8) list_form_graphic_pane_cp_vc_ParamLimits

0x5391,	// (0x00025cb8) list_form_graphic_pane_cp_vc

0x3c6c,	// (0x00024593) form_field_popup_wide_pane_vc_g1

0x53a6,	// (0x00025ccd) form_field_popup_wide_pane_vc_t1_ParamLimits

0x53a6,	// (0x00025ccd) form_field_popup_wide_pane_vc_t1

0x2e03,	// (0x0002372a) input_focus_pane_cp8_vc_ParamLimits

0x2e03,	// (0x0002372a) input_focus_pane_cp8_vc

0x53e5,	// (0x00025d0c) list_form_wide_pane_vc_ParamLimits

0x53e5,	// (0x00025d0c) list_form_wide_pane_vc

0x53f1,	// (0x00025d18) list_form_graphic_pane_vc_g1

0x53f9,	// (0x00025d20) list_form_graphic_pane_vc_t1_ParamLimits

0x53f9,	// (0x00025d20) list_form_graphic_pane_vc_t1

0x2835,	// (0x0002315c) list_highlight_pane_cp5_vc_ParamLimits

0x2835,	// (0x0002315c) list_highlight_pane_cp5_vc

0x5415,	// (0x00025d3c) list_form_graphic_pane_vc_ParamLimits

0x5415,	// (0x00025d3c) list_form_graphic_pane_vc

0x3c6c,	// (0x00024593) form_field_popup_pane_vc_g1

0x542b,	// (0x00025d52) form_field_popup_pane_vc_t1_ParamLimits

0x542b,	// (0x00025d52) form_field_popup_pane_vc_t1

0x2e03,	// (0x0002372a) input_focus_pane_cp7_vc_ParamLimits

0x2e03,	// (0x0002372a) input_focus_pane_cp7_vc

0x5440,	// (0x00025d67) list_form_pane_vc_ParamLimits

0x5440,	// (0x00025d67) list_form_pane_vc

0x544c,	// (0x00025d73) data_form_pane_vc_t1_ParamLimits

0x544c,	// (0x00025d73) data_form_pane_vc_t1

0x2e5e,	// (0x00023785) input_focus_pane_vc_g1

0x2e66,	// (0x0002378d) input_focus_pane_vc_g2

0x2e6e,	// (0x00023795) input_focus_pane_vc_g3

0x2e76,	// (0x0002379d) input_focus_pane_vc_g4

0x2e7e,	// (0x000237a5) input_focus_pane_vc_g5

0x2e86,	// (0x000237ad) input_focus_pane_vc_g6

0x2e8e,	// (0x000237b5) input_focus_pane_vc_g7

0x2e96,	// (0x000237bd) input_focus_pane_vc_g8

0x2e9e,	// (0x000237c5) input_focus_pane_vc_g9

0x274f,	// (0x00023076) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0002ff8e) input_focus_pane_vc_g

0x3c60,	// (0x00024587) data_form_pane_vc_ParamLimits

0x3c60,	// (0x00024587) data_form_pane_vc

0x3c6c,	// (0x00024593) form_field_data_pane_vc_g1

0x5467,	// (0x00025d8e) form_field_data_pane_vc_t1_ParamLimits

0x5467,	// (0x00025d8e) form_field_data_pane_vc_t1

0x2e03,	// (0x0002372a) input_focus_pane_vc_ParamLimits

0x2e03,	// (0x0002372a) input_focus_pane_vc

0x40ab,	// (0x000249d2) button_value_adjust_pane_cp3_vc

0x5334,	// (0x00025c5b) button_value_adjust_pane_cp5_vc

0x547d,	// (0x00025da4) form_field_data_pane_vc_ParamLimits

0x547d,	// (0x00025da4) form_field_data_pane_vc

0x40b3,	// (0x000249da) form_field_data_pane_vc_cp2

0x5494,	// (0x00025dbb) form_field_data_wide_pane_vc_ParamLimits

0x5494,	// (0x00025dbb) form_field_data_wide_pane_vc

0x54aa,	// (0x00025dd1) form_field_data_wide_pane_vc_cp2

0x54b2,	// (0x00025dd9) form_field_popup_pane_vc_ParamLimits

0x54b2,	// (0x00025dd9) form_field_popup_pane_vc

0x54c9,	// (0x00025df0) form_field_popup_wide_pane_vc_ParamLimits

0x54c9,	// (0x00025df0) form_field_popup_wide_pane_vc

0x54df,	// (0x00025e06) form_field_slider_pane_vc_ParamLimits

0x54df,	// (0x00025e06) form_field_slider_pane_vc

0x54f2,	// (0x00025e19) form_field_slider_wide_pane_vc_ParamLimits

0x54f2,	// (0x00025e19) form_field_slider_wide_pane_vc

0x0bd7,	// (0x000214fe) grid_touch_1_pane_ParamLimits

0x0bd7,	// (0x000214fe) grid_touch_1_pane

0x0beb,	// (0x00021512) grid_touch_2_pane_ParamLimits

0x0beb,	// (0x00021512) grid_touch_2_pane

0x5505,	// (0x00025e2c) touch_pane_g1_ParamLimits

0x5505,	// (0x00025e2c) touch_pane_g1

0x5513,	// (0x00025e3a) cell_app_pane_cp_wide_ParamLimits

0x5513,	// (0x00025e3a) cell_app_pane_cp_wide

0x5523,	// (0x00025e4a) grid_popup_fast_wide_pane_ParamLimits

0x5523,	// (0x00025e4a) grid_popup_fast_wide_pane

0x5537,	// (0x00025e5e) scroll_pane_cp19_ParamLimits

0x5537,	// (0x00025e5e) scroll_pane_cp19

0x27d1,	// (0x000230f8) bg_popup_window_pane_cp20

0x554b,	// (0x00025e72) listscroll_popup_fast_wide_pane

0x0c15,	// (0x0002153c) grid_indicator_nsta_pane

0x5553,	// (0x00025e7a) clock_nsta_pane_g1

0x555c,	// (0x00025e83) clock_nsta_pane_t1

0x0c21,	// (0x00021548) cell_indicator_nsta_pane_ParamLimits

0x0c21,	// (0x00021548) cell_indicator_nsta_pane

0x5505,	// (0x00025e2c) cell_indicator_nsta_pane_g1

0x0c38,	// (0x0002155f) cell_indicator_nsta_pane_g2

0x0001,

0xfa80,	// (0x000303a7) cell_indicator_nsta_pane_g

0x5578,	// (0x00025e9f) clock_nsta_pane_cp

0x5580,	// (0x00025ea7) indicator_nsta_pane_cp

0x5589,	// (0x00025eb0) nsta_clock_indic_pane_g1

0x2871,	// (0x00023198) grid_indicator_pane

0x32bb,	// (0x00023be2) scroll_pane_cp29

0x8205,	// (0x00028b2c) indicator_nsta_pane_cp2_ParamLimits

0x8205,	// (0x00028b2c) indicator_nsta_pane_cp2

0x2835,	// (0x0002315c) main_apps_wheel_pane

0x3e0b,	// (0x00024732) form_midp_field_text_pane_ParamLimits

0x3f38,	// (0x0002485f) scroll_bar_cp050_ParamLimits

0x55f2,	// (0x00025f19) cell_indicator_pane_ParamLimits

0x55f2,	// (0x00025f19) cell_indicator_pane

0x5608,	// (0x00025f2f) cell_indicator_pane_g1

0x0c45,	// (0x0002156c) grid_wheel_folder_pane_ParamLimits

0x0c45,	// (0x0002156c) grid_wheel_folder_pane

0x0c53,	// (0x0002157a) list_wheel_apps_pane_ParamLimits

0x0c53,	// (0x0002157a) list_wheel_apps_pane

0x0c5f,	// (0x00021586) main_apps_wheel_pane_g1_ParamLimits

0x0c5f,	// (0x00021586) main_apps_wheel_pane_g1

0x0c6b,	// (0x00021592) main_apps_wheel_pane_g2_ParamLimits

0x0c6b,	// (0x00021592) main_apps_wheel_pane_g2

0x0001,

0xfa9c,	// (0x000303c3) main_apps_wheel_pane_g_ParamLimits

0xfa9c,	// (0x000303c3) main_apps_wheel_pane_g

0x0c77,	// (0x0002159e) main_apps_wheel_pane_t1_ParamLimits

0x0c77,	// (0x0002159e) main_apps_wheel_pane_t1

0x0c89,	// (0x000215b0) list_wheel_apps_pane_g1

0x0c91,	// (0x000215b8) list_wheel_apps_pane_g2

0x0c99,	// (0x000215c0) list_wheel_apps_pane_g3

0x0ca1,	// (0x000215c8) list_wheel_apps_pane_g4

0x0ca9,	// (0x000215d0) list_wheel_apps_pane_g5

0x0004,

0xfaa1,	// (0x000303c8) list_wheel_apps_pane_g

0x2835,	// (0x0002315c) navi_icon_text_pane

0x01e3,	// (0x00020b0a) aid_fill_nsta

0x5612,	// (0x00025f39) navi_icon_text_pane_g1

0x561e,	// (0x00025f45) navi_icon_text_pane_t1

0x3535,	// (0x00023e5c) list_set_graphic_pane_t1_ParamLimits

0x3535,	// (0x00023e5c) list_set_graphic_pane_t1

0x4670,	// (0x00024f97) popup_midp_note_alarm_window_t6_ParamLimits

0x4670,	// (0x00024f97) popup_midp_note_alarm_window_t6

0x4682,	// (0x00024fa9) popup_midp_note_alarm_window_t7_ParamLimits

0x4682,	// (0x00024fa9) popup_midp_note_alarm_window_t7

0x4694,	// (0x00024fbb) popup_midp_note_alarm_window_t8_ParamLimits

0x4694,	// (0x00024fbb) popup_midp_note_alarm_window_t8

0x46a6,	// (0x00024fcd) popup_midp_note_alarm_window_t9_ParamLimits

0x46a6,	// (0x00024fcd) popup_midp_note_alarm_window_t9

0x46b8,	// (0x00024fdf) popup_midp_note_alarm_window_t10_ParamLimits

0x46b8,	// (0x00024fdf) popup_midp_note_alarm_window_t10

0x46ca,	// (0x00024ff1) popup_midp_note_alarm_window_t11_ParamLimits

0x46ca,	// (0x00024ff1) popup_midp_note_alarm_window_t11

0x46dc,	// (0x00025003) scroll_pane_cp17_ParamLimits

0x46dc,	// (0x00025003) scroll_pane_cp17

0x8fae,	// (0x000298d5) volume_small_pane_cp_g1

0x97bb,	// (0x0002a0e2) volume_small_pane_cp_g2

0x97c4,	// (0x0002a0eb) volume_small_pane_cp_g3

0x97cd,	// (0x0002a0f4) volume_small_pane_cp_g4

0x8fdb,	// (0x00029902) volume_small_pane_cp_g5

0x97d6,	// (0x0002a0fd) volume_small_pane_cp_g6

0x97df,	// (0x0002a106) volume_small_pane_cp_g7

0x97e8,	// (0x0002a10f) volume_small_pane_cp_g8

0x97f1,	// (0x0002a118) volume_small_pane_cp_g9

0x97fa,	// (0x0002a121) volume_small_pane_cp_g10

0x37eb,	// (0x00024112) midp_ticker_pane_g1_ParamLimits

0x37f7,	// (0x0002411e) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0003005a) midp_ticker_pane_g_ParamLimits

0x3803,	// (0x0002412a) midp_ticker_pane_t1_ParamLimits

0x01f9,	// (0x00020b20) aid_fill_nsta_2

0x3f24,	// (0x0002484b) list_form2_midp_pane

0x4d39,	// (0x00025660) midp_editing_number_pane_ParamLimits

0x4d45,	// (0x0002566c) midp_ticker_pane_ParamLimits

0x5630,	// (0x00025f57) form2_midp_field_pane

0x5638,	// (0x00025f5f) scroll_pane_cp51

0x5658,	// (0x00025f7f) form2_midp_button_pane_ParamLimits

0x5658,	// (0x00025f7f) form2_midp_button_pane

0x566a,	// (0x00025f91) form2_midp_content_pane_ParamLimits

0x566a,	// (0x00025f91) form2_midp_content_pane

0x5684,	// (0x00025fab) form2_midp_field_choice_group_pane

0x568c,	// (0x00025fb3) form2_midp_field_pane_g1

0x5694,	// (0x00025fbb) form2_midp_field_pane_g2

0x569c,	// (0x00025fc3) form2_midp_field_pane_g3

0x56a4,	// (0x00025fcb) form2_midp_field_pane_g4

0x0003,

0xfac6,	// (0x000303ed) form2_midp_field_pane_g

0x56ac,	// (0x00025fd3) form2_midp_gauge_slider_pane

0x56b4,	// (0x00025fdb) form2_midp_gauge_wait_pane

0x56bc,	// (0x00025fe3) form2_midp_image_pane_ParamLimits

0x56bc,	// (0x00025fe3) form2_midp_image_pane

0x56d7,	// (0x00025ffe) form2_midp_label_pane_ParamLimits

0x56d7,	// (0x00025ffe) form2_midp_label_pane

0x0cde,	// (0x00021605) form2_midp_label_pane_cp_ParamLimits

0x0cde,	// (0x00021605) form2_midp_label_pane_cp

0x56f0,	// (0x00026017) form2_midp_string_pane_ParamLimits

0x56f0,	// (0x00026017) form2_midp_string_pane

0xbe5e,	// (0x0002c785) form2_midp_text_pane_ParamLimits

0xbe5e,	// (0x0002c785) form2_midp_text_pane

0x5702,	// (0x00026029) form2_midp_time_pane

0x5712,	// (0x00026039) input_focus_pane_cp51_ParamLimits

0x5712,	// (0x00026039) input_focus_pane_cp51

0x572a,	// (0x00026051) form2_midp_label_pane_t1_ParamLimits

0x572a,	// (0x00026051) form2_midp_label_pane_t1

0xbe77,	// (0x0002c79e) form2_mdip_text_pane_t1_ParamLimits

0xbe77,	// (0x0002c79e) form2_mdip_text_pane_t1

0xbe92,	// (0x0002c7b9) form2_midp_time_pane_t1

0x5772,	// (0x00026099) form2_midp_gauge_slider_pane_t1

0x0cfd,	// (0x00021624) form2_midp_gauge_slider_pane_t2

0x0d0f,	// (0x00021636) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacf,	// (0x000303f6) form2_midp_gauge_slider_pane_t

0x5784,	// (0x000260ab) form2_midp_slider_pane

0x5790,	// (0x000260b7) form2_midp_gauge_wait_pane_t1

0x579e,	// (0x000260c5) form2_midp_wait_pane_ParamLimits

0x579e,	// (0x000260c5) form2_midp_wait_pane

0x3caa,	// (0x000245d1) list_single_2graphic_pane_cp4_ParamLimits

0x3caa,	// (0x000245d1) list_single_2graphic_pane_cp4

0x57c9,	// (0x000260f0) list_single_midp_graphic_pane_cp_ParamLimits

0x57c9,	// (0x000260f0) list_single_midp_graphic_pane_cp

0x27d1,	// (0x000230f8) list_highlight_pane_cp20

0x57e7,	// (0x0002610e) list_single_2graphic_pane_g1_cp4

0x4ffe,	// (0x00025925) list_single_2graphic_pane_g2_cp4

0x57ef,	// (0x00026116) list_single_2graphic_pane_t1_cp4

0x2835,	// (0x0002315c) list_highlight_pane_cp21

0x57fe,	// (0x00026125) list_single_midp_graphic_pane_g4_cp

0x580d,	// (0x00026134) list_single_midp_graphic_pane_t1_cp

0x5822,	// (0x00026149) form2_mdip_string_pane_t1_ParamLimits

0x5822,	// (0x00026149) form2_mdip_string_pane_t1

0x27d1,	// (0x000230f8) bg_wml_button_pane_cp2

0x274f,	// (0x00023076) form2_midp_image_pane_g1

0xb4fd,	// (0x0002be24) list_double_large_graphic_pane_g5_ParamLimits

0xb4fd,	// (0x0002be24) list_double_large_graphic_pane_g5

0xf409,	// (0x0002fd30) midp_form_pane_ParamLimits

0x2835,	// (0x0002315c) main_apps_wheel_pane_ParamLimits

0xe327,	// (0x0002ec4e) popup_preview_window_ParamLimits

0xe327,	// (0x0002ec4e) popup_preview_window

0x8aa0,	// (0x000293c7) popup_touch_info_window_ParamLimits

0x8aa0,	// (0x000293c7) popup_touch_info_window

0x8abe,	// (0x000293e5) popup_touch_menu_window_ParamLimits

0x8abe,	// (0x000293e5) popup_touch_menu_window

0x2745,	// (0x0002306c) bg_popup_sub_pane_cp6

0x588c,	// (0x000261b3) list_touch_menu_pane

0x5894,	// (0x000261bb) list_single_touch_menu_pane_ParamLimits

0x5894,	// (0x000261bb) list_single_touch_menu_pane

0x58ab,	// (0x000261d2) list_single_touch_menu_pane_t1

0x2835,	// (0x0002315c) bg_popup_sub_pane_cp7_ParamLimits

0x2835,	// (0x0002315c) bg_popup_sub_pane_cp7

0x58b9,	// (0x000261e0) heading_sub_pane

0x58c1,	// (0x000261e8) list_touch_info_pane_ParamLimits

0x58c1,	// (0x000261e8) list_touch_info_pane

0x58d0,	// (0x000261f7) list_single_touch_info_pane_ParamLimits

0x58d0,	// (0x000261f7) list_single_touch_info_pane

0x58e1,	// (0x00026208) list_single_touch_info_pane_t1

0x58ef,	// (0x00026216) list_single_touch_info_pane_t2

0x0001,

0xfadd,	// (0x00030404) list_single_touch_info_pane_t

0x37c1,	// (0x000240e8) bg_popup_heading_pane_cp

0x58fd,	// (0x00026224) heading_sub_pane_t1

0x3c26,	// (0x0002454d) bg_popup_preview_window_pane_cp_ParamLimits

0x3c26,	// (0x0002454d) bg_popup_preview_window_pane_cp

0x58b9,	// (0x000261e0) heading_preview_pane

0x58c1,	// (0x000261e8) list_preview_pane_ParamLimits

0x58c1,	// (0x000261e8) list_preview_pane

0x590b,	// (0x00026232) popup_preview_window_g1

0x58d0,	// (0x000261f7) list_single_preview_pane_ParamLimits

0x58d0,	// (0x000261f7) list_single_preview_pane

0x5913,	// (0x0002623a) list_single_preview_pane_g1

0x591b,	// (0x00026242) list_single_preview_pane_t1

0x58e1,	// (0x00026208) list_single_preview_pane_t2

0x0001,

0xfae2,	// (0x00030409) list_single_preview_pane_t

0x5929,	// (0x00026250) bg_popup_heading_pane_cp2_ParamLimits

0x5929,	// (0x00026250) bg_popup_heading_pane_cp2

0x593f,	// (0x00026266) heading_preview_pane_g1

0x5947,	// (0x0002626e) heading_preview_pane_t1_ParamLimits

0x5947,	// (0x0002626e) heading_preview_pane_t1

0x2888,	// (0x000231af) soft_indicator_pane_t1_ParamLimits

0x2d86,	// (0x000236ad) scroll_pane_ParamLimits

0x31c0,	// (0x00023ae7) scroll_sc2_left_pane

0x31b7,	// (0x00023ade) scroll_sc2_right_pane

0x31df,	// (0x00023b06) scroll_bg_pane_g1_ParamLimits

0x31f4,	// (0x00023b1b) scroll_bg_pane_g2_ParamLimits

0x320c,	// (0x00023b33) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0002ffe5) scroll_bg_pane_g_ParamLimits

0x31df,	// (0x00023b06) scroll_handle_pane_g1_ParamLimits

0x322e,	// (0x00023b55) scroll_handle_pane_g2_ParamLimits

0x320c,	// (0x00023b33) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0002ffec) scroll_handle_pane_g_ParamLimits

0x866a,	// (0x00028f91) popup_choice_list_window_ParamLimits

0x866a,	// (0x00028f91) popup_choice_list_window

0x3af0,	// (0x00024417) choice_list_pane

0x3b66,	// (0x0002448d) cell_toolbar_pane_t1

0x3b8e,	// (0x000244b5) toolbar_button_pane_ParamLimits

0x4aa2,	// (0x000253c9) ai_gene_pane_1_t2_ParamLimits

0x4aa2,	// (0x000253c9) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x0003020f) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x0003020f) ai_gene_pane_1_t

0x5964,	// (0x0002628b) scroll_sc2_left_pane_g1

0x5964,	// (0x0002628b) scroll_sc2_right_pane_g1

0x2f9c,	// (0x000238c3) bg_popup_sub_pane_cp10

0x596e,	// (0x00026295) list_choice_list_pane

0x5985,	// (0x000262ac) list_single_choice_list_pane_ParamLimits

0x5985,	// (0x000262ac) list_single_choice_list_pane

0x5997,	// (0x000262be) list_single_choice_list_pane_g1

0x2f87,	// (0x000238ae) list_single_choice_list_pane_t1_ParamLimits

0x2f87,	// (0x000238ae) list_single_choice_list_pane_t1

0x599f,	// (0x000262c6) choice_list_pane_g1

0x59a7,	// (0x000262ce) choice_list_pane_t1

0x2745,	// (0x0002306c) input_focus_pane_cp11

0x311e,	// (0x00023a45) title_pane_stacon_g2_ParamLimits

0x311e,	// (0x00023a45) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0002ffcb) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0002ffcb) title_pane_stacon_g

0x37c1,	// (0x000240e8) cursor_press_pane

0xe08e,	// (0x0002e9b5) popup_fep_hwr_window_ParamLimits

0xe08e,	// (0x0002e9b5) popup_fep_hwr_window

0x8762,	// (0x00029089) popup_fep_vkb_window_ParamLimits

0x8762,	// (0x00029089) popup_fep_vkb_window

0x59b5,	// (0x000262dc) cursor_press_pane_g1

0x0002,

0xfb0b,	// (0x00030432) fep_vkb_side_pane_g_ParamLimits

0x9897,	// (0x0002a1be) fep_hwr_candidate_pane_ParamLimits

0x9897,	// (0x0002a1be) fep_hwr_candidate_pane

0x98bf,	// (0x0002a1e6) fep_hwr_side_pane_ParamLimits

0x98bf,	// (0x0002a1e6) fep_hwr_side_pane

0x98df,	// (0x0002a206) fep_hwr_top_pane_ParamLimits

0x98df,	// (0x0002a206) fep_hwr_top_pane

0x98f7,	// (0x0002a21e) fep_hwr_write_pane_ParamLimits

0x98f7,	// (0x0002a21e) fep_hwr_write_pane

0xfb0b,	// (0x00030432) fep_vkb_side_pane_g

0x59cf,	// (0x000262f6) fep_hwr_top_pane_g1

0x59bd,	// (0x000262e4) fep_hwr_top_pane_g2

0x9931,	// (0x0002a258) fep_hwr_top_pane_g3

0x0002,

0xfae7,	// (0x0003040e) fep_hwr_top_pane_g

0x9946,	// (0x0002a26d) fep_hwr_top_text_pane

0x3328,	// (0x00023c4f) fep_hwr_top_text_pane_g1

0x5a05,	// (0x0002632c) fep_hwr_top_text_pane_t1

0x9a34,	// (0x0002a35b) fep_hwr_candidate_pane_g1

0x5bce,	// (0x000264f5) fep_vkb_keypad_pane_g3_ParamLimits

0x5bce,	// (0x000264f5) fep_vkb_keypad_pane_g3

0x5bf0,	// (0x00026517) fep_vkb_keypad_pane_g4_ParamLimits

0x5bf0,	// (0x00026517) fep_vkb_keypad_pane_g4

0x5c5f,	// (0x00026586) fep_vkb_bottom_pane_g2_ParamLimits

0x5c5f,	// (0x00026586) fep_vkb_bottom_pane_g2

0x0001,

0xfb12,	// (0x00030439) fep_vkb_bottom_pane_g_ParamLimits

0xfb12,	// (0x00030439) fep_vkb_bottom_pane_g

0x5964,	// (0x0002628b) cell_vkb_side_pane_g2

0x0001,

0xfb1c,	// (0x00030443) cell_vkb_side_pane_g

0x5ca3,	// (0x000265ca) cell_vkb_side_pane_t1

0x5cb1,	// (0x000265d8) cell_vkb_side_pane_t1_copy1

0x5964,	// (0x0002628b) bg_fep_vkb_candidate_pane_g2

0x5d7f,	// (0x000266a6) cell_vkb_candidate_pane_ParamLimits

0x5a13,	// (0x0002633a) aid_size_cell_vkb_ParamLimits

0x5a13,	// (0x0002633a) aid_size_cell_vkb

0x5d7f,	// (0x000266a6) cell_vkb_candidate_pane

0x9b3f,	// (0x0002a466) bg_popup_fep_shadow_pane_g1

0x5a7d,	// (0x000263a4) fep_vkb_bottom_pane_ParamLimits

0x5a7d,	// (0x000263a4) fep_vkb_bottom_pane

0x5aba,	// (0x000263e1) fep_vkb_candidate_pane_ParamLimits

0x5aba,	// (0x000263e1) fep_vkb_candidate_pane

0x5ad6,	// (0x000263fd) fep_vkb_keypad_pane_ParamLimits

0x5ad6,	// (0x000263fd) fep_vkb_keypad_pane

0x5b0a,	// (0x00026431) fep_vkb_side_pane_ParamLimits

0x5b0a,	// (0x00026431) fep_vkb_side_pane

0x5b36,	// (0x0002645d) fep_vkb_top_pane_ParamLimits

0x5b36,	// (0x0002645d) fep_vkb_top_pane

0x5b62,	// (0x00026489) fep_vkb_top_pane_g1_ParamLimits

0x5b62,	// (0x00026489) fep_vkb_top_pane_g1

0x5b71,	// (0x00026498) fep_vkb_top_pane_g2_ParamLimits

0x5b71,	// (0x00026498) fep_vkb_top_pane_g2

0x5b80,	// (0x000264a7) fep_vkb_top_pane_g3_ParamLimits

0x5b80,	// (0x000264a7) fep_vkb_top_pane_g3

0x0003,

0xfb02,	// (0x00030429) fep_vkb_top_pane_g_ParamLimits

0xfb02,	// (0x00030429) fep_vkb_top_pane_g

0x5b9e,	// (0x000264c5) fep_vkb_top_text_pane_ParamLimits

0x5b9e,	// (0x000264c5) fep_vkb_top_text_pane

0x0d7e,	// (0x000216a5) fep_vkb_side_pane_g1_ParamLimits

0x0d7e,	// (0x000216a5) fep_vkb_side_pane_g1

0x5bbd,	// (0x000264e4) grid_vkb_side_pane_ParamLimits

0x5bbd,	// (0x000264e4) grid_vkb_side_pane

0x9b47,	// (0x0002a46e) bg_popup_fep_shadow_pane_g2

0x9b50,	// (0x0002a477) bg_popup_fep_shadow_pane_g3

0x9b58,	// (0x0002a47f) bg_popup_fep_shadow_pane_g4

0x9b61,	// (0x0002a488) bg_popup_fep_shadow_pane_g5

0x9b69,	// (0x0002a490) bg_popup_fep_shadow_pane_g6

0x9b71,	// (0x0002a498) bg_popup_fep_shadow_pane_g7

0x2e76,	// (0x0002379d) bg_popup_fep_shadow_pane_g8

0x5c0e,	// (0x00026535) grid_vkb_keypad_number_pane_ParamLimits

0x5c0e,	// (0x00026535) grid_vkb_keypad_number_pane

0x5c1e,	// (0x00026545) grid_vkb_keypad_pane_ParamLimits

0x5c1e,	// (0x00026545) grid_vkb_keypad_pane

0x5c44,	// (0x0002656b) fep_vkb_bottom_pane_g1_ParamLimits

0x5c44,	// (0x0002656b) fep_vkb_bottom_pane_g1

0x5c6d,	// (0x00026594) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5c6d,	// (0x00026594) grid_vkb_keypad_bottom_left_pane

0x5c82,	// (0x000265a9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5c82,	// (0x000265a9) grid_vkb_keypad_bottom_right_pane

0x5c97,	// (0x000265be) fep_vkb_top_text_pane_g1

0x0dc5,	// (0x000216ec) fep_vkb_top_text_pane_t1

0x0dd7,	// (0x000216fe) cell_vkb_side_pane_ParamLimits

0x0dd7,	// (0x000216fe) cell_vkb_side_pane

0x5964,	// (0x0002628b) cell_vkb_side_pane_g1

0x5cbf,	// (0x000265e6) cell_vkb_keypad_pane_ParamLimits

0x5cbf,	// (0x000265e6) cell_vkb_keypad_pane

0x5d2c,	// (0x00026653) cell_vkb_keypad_pane_g1

0x0008,

0xfb2f,	// (0x00030456) bg_popup_fep_shadow_pane_g

0x9b81,	// (0x0002a4a8) cell_hwr_side_pane_g1

0x9b81,	// (0x0002a4a8) cell_hwr_side_pane_g2

0x5d36,	// (0x0002665d) cell_vkb_keypad_pane_t1

0x0ded,	// (0x00021714) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x0ded,	// (0x00021714) cell_vkb_keypad_bottom_left_pane

0x0e02,	// (0x00021729) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x0e02,	// (0x00021729) cell_vkb_keypad_bottom_right_pane

0x5964,	// (0x0002628b) cell_vkb_keypad_bottom_left_pane_g1

0x5964,	// (0x0002628b) cell_vkb_keypad_bottom_right_pane_g1

0x5d44,	// (0x0002666b) cell_vkb_keypad_number_pane_ParamLimits

0x5d44,	// (0x0002666b) cell_vkb_keypad_number_pane

0x5d63,	// (0x0002668a) cell_vkb_keypad_number_pane_g1

0x5d6d,	// (0x00026694) cell_vkb_keypad_number_pane_g2

0x5d76,	// (0x0002669d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb21,	// (0x00030448) cell_vkb_keypad_number_pane_g

0x5d36,	// (0x0002665d) cell_vkb_keypad_number_pane_t1

0x5d98,	// (0x000266bf) fep_vkb_candidate_pane_g1

0x0001,

0xfb42,	// (0x00030469) cell_hwr_side_pane_g

0x5db1,	// (0x000266d8) cell_hwr_side_pane_t1

0x9b8b,	// (0x0002a4b2) cell_hwr_side_pane_t1_copy1

0x9b99,	// (0x0002a4c0) cell_hwr_candidate_pane_g1

0x9bc8,	// (0x0002a4ef) cell_hwr_candidate_pane_t1

0x5964,	// (0x0002628b) cell_vkb_candidate_pane_g2

0x5e37,	// (0x0002675e) cell_vkb_candidate_pane_t1

0x9862,	// (0x0002a189) bg_popup_fep_shadow_pane_ParamLimits

0x9862,	// (0x0002a189) bg_popup_fep_shadow_pane

0x9911,	// (0x0002a238) bg_fep_hwr_top_pane_g4

0x59e1,	// (0x00026308) bg_hwr_side_pane_g1_ParamLimits

0x59e1,	// (0x00026308) bg_hwr_side_pane_g1

0xe765,	// (0x0002f08c) cell_hwr_side_pane_ParamLimits

0xe765,	// (0x0002f08c) cell_hwr_side_pane

0x99bd,	// (0x0002a2e4) fep_hwr_write_pane_g1_ParamLimits

0x99bd,	// (0x0002a2e4) fep_hwr_write_pane_g1

0x99ca,	// (0x0002a2f1) fep_hwr_write_pane_g2_ParamLimits

0x99ca,	// (0x0002a2f1) fep_hwr_write_pane_g2

0x99d7,	// (0x0002a2fe) fep_hwr_write_pane_g3_ParamLimits

0x99d7,	// (0x0002a2fe) fep_hwr_write_pane_g3

0xe785,	// (0x0002f0ac) fep_hwr_write_pane_g4_ParamLimits

0xe785,	// (0x0002f0ac) fep_hwr_write_pane_g4

0x0005,

0xfaee,	// (0x00030415) fep_hwr_write_pane_g_ParamLimits

0xfaee,	// (0x00030415) fep_hwr_write_pane_g

0x9911,	// (0x0002a238) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x9911,	// (0x0002a238) bg_fep_hwr_candidate_pane_g2

0x99fa,	// (0x0002a321) cell_hwr_candidate_pane_ParamLimits

0x99fa,	// (0x0002a321) cell_hwr_candidate_pane

0x9a34,	// (0x0002a35b) fep_hwr_candidate_pane_g1_ParamLimits

0x5a41,	// (0x00026368) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5a41,	// (0x00026368) bg_popup_fep_shadow_pane_cp2

0x5b90,	// (0x000264b7) fep_vkb_top_pane_g4_ParamLimits

0x5b90,	// (0x000264b7) fep_vkb_top_pane_g4

0x5baf,	// (0x000264d6) fep_vkb_side_pane_g2_ParamLimits

0x5baf,	// (0x000264d6) fep_vkb_side_pane_g2

0xb675,	// (0x0002bf9c) list_setting_pane_t4_ParamLimits

0xb675,	// (0x0002bf9c) list_setting_pane_t4

0xb70b,	// (0x0002c032) list_setting_number_pane_t5_ParamLimits

0xb70b,	// (0x0002c032) list_setting_number_pane_t5

0xf320,	// (0x0002fc47) list_double_heading_pane_cp2_ParamLimits

0xf320,	// (0x0002fc47) list_double_heading_pane_cp2

0x362f,	// (0x00023f56) list_double_heading_pane_g1_cp2_ParamLimits

0x362f,	// (0x00023f56) list_double_heading_pane_g1_cp2

0x5e45,	// (0x0002676c) list_double_heading_pane_g2_cp2_ParamLimits

0x5e45,	// (0x0002676c) list_double_heading_pane_g2_cp2

0x5e59,	// (0x00026780) list_double_heading_pane_t1_cp2_ParamLimits

0x5e59,	// (0x00026780) list_double_heading_pane_t1_cp2

0x5e6f,	// (0x00026796) list_double_heading_pane_t2_cp2_ParamLimits

0x5e6f,	// (0x00026796) list_double_heading_pane_t2_cp2

0x273d,	// (0x00023064) aid_value_unit2

0x795d,	// (0x00028284) popup_preview_fixed_window

0x2968,	// (0x0002328f) bg_popup_preview_window_pane_cp02

0x5e81,	// (0x000267a8) list_preview_fixed_pane

0x5ec7,	// (0x000267ee) list_empty_pane_fp_ParamLimits

0x5ec7,	// (0x000267ee) list_empty_pane_fp

0x5ec7,	// (0x000267ee) list_single_cale_day_pane_fp_ParamLimits

0x5ec7,	// (0x000267ee) list_single_cale_day_pane_fp

0x5ec7,	// (0x000267ee) list_single_graphic_heading_pane_fp_ParamLimits

0x5ec7,	// (0x000267ee) list_single_graphic_heading_pane_fp

0x5ec7,	// (0x000267ee) list_single_graphic_pane_fp_ParamLimits

0x5ec7,	// (0x000267ee) list_single_graphic_pane_fp

0x5ec7,	// (0x000267ee) list_single_heading_pane_fp_ParamLimits

0x5ec7,	// (0x000267ee) list_single_heading_pane_fp

0x5ec7,	// (0x000267ee) list_single_pane_fp_ParamLimits

0x5ec7,	// (0x000267ee) list_single_pane_fp

0x5edb,	// (0x00026802) list_single_pane_fp_g1_ParamLimits

0x5edb,	// (0x00026802) list_single_pane_fp_g1

0xbec6,	// (0x0002c7ed) list_single_pane_fp_g2_ParamLimits

0xbec6,	// (0x0002c7ed) list_single_pane_fp_g2

0xbed2,	// (0x0002c7f9) list_single_pane_fp_g3_ParamLimits

0xbed2,	// (0x0002c7f9) list_single_pane_fp_g3

0x5ee7,	// (0x0002680e) list_single_pane_fp_g4_ParamLimits

0x5ee7,	// (0x0002680e) list_single_pane_fp_g4

0x0003,

0xfb55,	// (0x0003047c) list_single_pane_fp_g_ParamLimits

0xfb55,	// (0x0003047c) list_single_pane_fp_g

0xbee6,	// (0x0002c80d) list_single_pane_fp_t1_ParamLimits

0xbee6,	// (0x0002c80d) list_single_pane_fp_t1

0xbefd,	// (0x0002c824) list_single_graphic_pane_fp_g1_ParamLimits

0xbefd,	// (0x0002c824) list_single_graphic_pane_fp_g1

0x5edb,	// (0x00026802) list_single_graphic_pane_fp_g2_ParamLimits

0x5edb,	// (0x00026802) list_single_graphic_pane_fp_g2

0xbec6,	// (0x0002c7ed) list_single_graphic_pane_fp_g3_ParamLimits

0xbec6,	// (0x0002c7ed) list_single_graphic_pane_fp_g3

0xbed2,	// (0x0002c7f9) list_single_graphic_pane_fp_g4_ParamLimits

0xbed2,	// (0x0002c7f9) list_single_graphic_pane_fp_g4

0x5ee7,	// (0x0002680e) list_single_graphic_pane_fp_g5_ParamLimits

0x5ee7,	// (0x0002680e) list_single_graphic_pane_fp_g5

0x0004,

0xfb5e,	// (0x00030485) list_single_graphic_pane_fp_g_ParamLimits

0xfb5e,	// (0x00030485) list_single_graphic_pane_fp_g

0xbf09,	// (0x0002c830) list_single_graphic_pane_fp_t1_ParamLimits

0xbf09,	// (0x0002c830) list_single_graphic_pane_fp_t1

0xbefd,	// (0x0002c824) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xbefd,	// (0x0002c824) list_single_graphic_heading_pane_fp_g1

0x5edb,	// (0x00026802) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5edb,	// (0x00026802) list_single_graphic_heading_pane_fp_g2

0xbec6,	// (0x0002c7ed) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbec6,	// (0x0002c7ed) list_single_graphic_heading_pane_fp_g3

0xbed2,	// (0x0002c7f9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbed2,	// (0x0002c7f9) list_single_graphic_heading_pane_fp_g4

0x5ee7,	// (0x0002680e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5ee7,	// (0x0002680e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5e,	// (0x00030485) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5e,	// (0x00030485) list_single_graphic_heading_pane_fp_g

0xbf1f,	// (0x0002c846) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xbf1f,	// (0x0002c846) list_single_graphic_heading_pane_fp_t1

0xbf35,	// (0x0002c85c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xbf35,	// (0x0002c85c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb69,	// (0x00030490) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb69,	// (0x00030490) list_single_graphic_heading_pane_fp_t

0xbf47,	// (0x0002c86e) list_single_cale_day_pane_fp_g1_ParamLimits

0xbf47,	// (0x0002c86e) list_single_cale_day_pane_fp_g1

0x5ef3,	// (0x0002681a) list_single_cale_day_pane_fp_g2_ParamLimits

0x5ef3,	// (0x0002681a) list_single_cale_day_pane_fp_g2

0xbf7f,	// (0x0002c8a6) list_single_cale_day_pane_fp_g3_ParamLimits

0xbf7f,	// (0x0002c8a6) list_single_cale_day_pane_fp_g3

0xbfa7,	// (0x0002c8ce) list_single_cale_day_pane_fp_g4_ParamLimits

0xbfa7,	// (0x0002c8ce) list_single_cale_day_pane_fp_g4

0xbfcb,	// (0x0002c8f2) list_single_cale_day_pane_fp_g5_ParamLimits

0xbfcb,	// (0x0002c8f2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6e,	// (0x00030495) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6e,	// (0x00030495) list_single_cale_day_pane_fp_g

0xbfef,	// (0x0002c916) list_single_cale_day_pane_fp_t1_ParamLimits

0xbfef,	// (0x0002c916) list_single_cale_day_pane_fp_t1

0xc015,	// (0x0002c93c) list_single_cale_day_pane_fp_t2_ParamLimits

0xc015,	// (0x0002c93c) list_single_cale_day_pane_fp_t2

0xc02e,	// (0x0002c955) list_single_cale_day_pane_fp_t3_ParamLimits

0xc02e,	// (0x0002c955) list_single_cale_day_pane_fp_t3

0x0002,

0xfb79,	// (0x000304a0) list_single_cale_day_pane_fp_t_ParamLimits

0xfb79,	// (0x000304a0) list_single_cale_day_pane_fp_t

0x5edb,	// (0x00026802) list_empty_pane_fp_g1_ParamLimits

0x5edb,	// (0x00026802) list_empty_pane_fp_g1

0xc047,	// (0x0002c96e) list_empty_pane_fp_t1

0xc055,	// (0x0002c97c) list_empty_pane_fp_t2

0x0001,

0xfb80,	// (0x000304a7) list_empty_pane_fp_t

0x5edb,	// (0x00026802) list_single_heading_pane_fp_g1_ParamLimits

0x5edb,	// (0x00026802) list_single_heading_pane_fp_g1

0xbec6,	// (0x0002c7ed) list_single_heading_pane_fp_g2_ParamLimits

0xbec6,	// (0x0002c7ed) list_single_heading_pane_fp_g2

0xbed2,	// (0x0002c7f9) list_single_heading_pane_fp_g3_ParamLimits

0xbed2,	// (0x0002c7f9) list_single_heading_pane_fp_g3

0x0002,

0xfb85,	// (0x000304ac) list_single_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x000304ac) list_single_heading_pane_fp_g

0xc063,	// (0x0002c98a) list_single_heading_pane_fp_t1_ParamLimits

0xc063,	// (0x0002c98a) list_single_heading_pane_fp_t1

0xc075,	// (0x0002c99c) list_single_heading_pane_fp_t2_ParamLimits

0xc075,	// (0x0002c99c) list_single_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x000304b3) list_single_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x000304b3) list_single_heading_pane_fp_t

0x2fa8,	// (0x000238cf) aid_size_cell_fast

0x294b,	// (0x00023272) soft_indicator_pane_cp1_t1

0x2fe5,	// (0x0002390c) cell_app_pane_cp2_ParamLimits

0x2fe5,	// (0x0002390c) cell_app_pane_cp2

0x9884,	// (0x0002a1ab) fep_hwr_candidate_drop_down_list_pane

0x9a4e,	// (0x0002a375) fep_hwr_candidate_pane_g3_ParamLimits

0x9a4e,	// (0x0002a375) fep_hwr_candidate_pane_g3

0x1eae,	// (0x000227d5) fep_hwr_candidate_pane_g4_ParamLimits

0x1eae,	// (0x000227d5) fep_hwr_candidate_pane_g4

0x0002,

0xfafb,	// (0x00030422) fep_hwr_candidate_pane_g_ParamLimits

0xfafb,	// (0x00030422) fep_hwr_candidate_pane_g

0x5aa9,	// (0x000263d0) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5aa9,	// (0x000263d0) fep_vkb_candidate_drop_down_list_pane

0x5da0,	// (0x000266c7) fep_vkb_candidate_pane_g3

0x5da8,	// (0x000266cf) fep_vkb_candidate_pane_g4

0x0002,

0xfb28,	// (0x0003044f) fep_vkb_candidate_pane_g

0x9b99,	// (0x0002a4c0) cell_hwr_candidate_pane_g1_ParamLimits

0x9ba7,	// (0x0002a4ce) cell_hwr_candidate_pane_g3_ParamLimits

0x9ba7,	// (0x0002a4ce) cell_hwr_candidate_pane_g3

0xbea5,	// (0x0002c7cc) cell_hwr_candidate_pane_g4_ParamLimits

0xbea5,	// (0x0002c7cc) cell_hwr_candidate_pane_g4

0x0002,

0xfb47,	// (0x0003046e) cell_hwr_candidate_pane_g_ParamLimits

0xfb47,	// (0x0003046e) cell_hwr_candidate_pane_g

0x5e01,	// (0x00026728) cell_vkb_candidate_pane_g3_ParamLimits

0x5e01,	// (0x00026728) cell_vkb_candidate_pane_g3

0x5e1c,	// (0x00026743) cell_vkb_candidate_pane_g4_ParamLimits

0x5e1c,	// (0x00026743) cell_vkb_candidate_pane_g4

0x5eff,	// (0x00026826) cell_app_pane_cp2_g1_ParamLimits

0x5eff,	// (0x00026826) cell_app_pane_cp2_g1

0x5f1d,	// (0x00026844) cell_app_pane_cp2_g2_ParamLimits

0x5f1d,	// (0x00026844) cell_app_pane_cp2_g2

0x0001,

0xfb91,	// (0x000304b8) cell_app_pane_cp2_g_ParamLimits

0xfb91,	// (0x000304b8) cell_app_pane_cp2_g

0x5f29,	// (0x00026850) cell_app_pane_cp2_t1_ParamLimits

0x5f29,	// (0x00026850) cell_app_pane_cp2_t1

0x2e03,	// (0x0002372a) grid_highlight_pane_cp1_ParamLimits

0x2e03,	// (0x0002372a) grid_highlight_pane_cp1

0x9be5,	// (0x0002a50c) cell_hwr_candidate_pane_cp1_ParamLimits

0x9be5,	// (0x0002a50c) cell_hwr_candidate_pane_cp1

0x9b99,	// (0x0002a4c0) fep_hwr_candidate_drop_down_list_pane_g1

0x9c03,	// (0x0002a52a) fep_hwr_candidate_drop_down_list_pane_g2

0x9c10,	// (0x0002a537) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb96,	// (0x000304bd) fep_hwr_candidate_drop_down_list_pane_g

0x9c1d,	// (0x0002a544) fep_hwr_candidate_drop_down_list_scroll_pane

0x9c26,	// (0x0002a54d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9c26,	// (0x0002a54d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x9c33,	// (0x0002a55a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9c33,	// (0x0002a55a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x9c40,	// (0x0002a567) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9c40,	// (0x0002a567) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x9c4d,	// (0x0002a574) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9c4d,	// (0x0002a574) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x9c68,	// (0x0002a58f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9c68,	// (0x0002a58f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9c83,	// (0x0002a5aa) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9c83,	// (0x0002a5aa) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x9c9e,	// (0x0002a5c5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9c9e,	// (0x0002a5c5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x9cb9,	// (0x0002a5e0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9cb9,	// (0x0002a5e0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9d,	// (0x000304c4) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9d,	// (0x000304c4) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x0e1d,	// (0x00021744) cell_vkb_candidate_pane_cp1_ParamLimits

0x0e1d,	// (0x00021744) cell_vkb_candidate_pane_cp1

0x5b90,	// (0x000264b7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5b90,	// (0x000264b7) fep_vkb_candidate_drop_down_list_pane_g1

0x5f3b,	// (0x00026862) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5f3b,	// (0x00026862) fep_vkb_candidate_drop_down_list_pane_g2

0x5f48,	// (0x0002686f) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5f48,	// (0x0002686f) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x000304d5) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbae,	// (0x000304d5) fep_vkb_candidate_drop_down_list_pane_g

0x5f55,	// (0x0002687c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5f55,	// (0x0002687c) fep_vkb_candidate_drop_down_list_scroll_pane

0x5f62,	// (0x00026889) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5f62,	// (0x00026889) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5f6f,	// (0x00026896) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5f6f,	// (0x00026896) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5f7b,	// (0x000268a2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5f7b,	// (0x000268a2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5dbf,	// (0x000266e6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5dbf,	// (0x000266e6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5de0,	// (0x00026707) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5de0,	// (0x00026707) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5f87,	// (0x000268ae) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5f87,	// (0x000268ae) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5fa8,	// (0x000268cf) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5fa8,	// (0x000268cf) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5fc9,	// (0x000268f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5fc9,	// (0x000268f0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x000304dc) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x000304dc) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd9d6,	// (0x0002e2fd) title_pane_g1_ParamLimits

0xd9ed,	// (0x0002e314) title_pane_g2_ParamLimits

0xf529,	// (0x0002fe50) title_pane_g_ParamLimits

0x3320,	// (0x00023c47) aid_call2_pane

0x3318,	// (0x00023c3f) aid_call_pane

0x3328,	// (0x00023c4f) popup_clock_analogue_window_g1

0x3328,	// (0x00023c4f) popup_clock_analogue_window_g2

0x801a,	// (0x00028941) popup_clock_analogue_window_g3

0x8023,	// (0x0002894a) popup_clock_analogue_window_g4

0x274f,	// (0x00023076) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0002fffa) popup_clock_analogue_window_g

0x802b,	// (0x00028952) popup_clock_analogue_window_t1

0x8084,	// (0x000289ab) clock_digital_number_pane_ParamLimits

0x8084,	// (0x000289ab) clock_digital_number_pane

0x8090,	// (0x000289b7) clock_digital_number_pane_cp02_ParamLimits

0x8090,	// (0x000289b7) clock_digital_number_pane_cp02

0x809c,	// (0x000289c3) clock_digital_number_pane_cp03_ParamLimits

0x809c,	// (0x000289c3) clock_digital_number_pane_cp03

0x80a8,	// (0x000289cf) clock_digital_number_pane_cp04_ParamLimits

0x80a8,	// (0x000289cf) clock_digital_number_pane_cp04

0x80b4,	// (0x000289db) clock_digital_separator_pane_ParamLimits

0x80b4,	// (0x000289db) clock_digital_separator_pane

0x80c0,	// (0x000289e7) popup_clock_digital_window_t1_ParamLimits

0x80c0,	// (0x000289e7) popup_clock_digital_window_t1

0x274f,	// (0x00023076) clock_digital_number_pane_g1

0x274f,	// (0x00023076) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x00030005) clock_digital_number_pane_g

0x274f,	// (0x00023076) clock_digital_separator_pane_g1

0x274f,	// (0x00023076) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x00030005) clock_digital_separator_pane_g

0x01e3,	// (0x00020b0a) aid_fill_nsta_ParamLimits

0x02fa,	// (0x00020c21) indicator_nsta_pane_ParamLimits

0x3a99,	// (0x000243c0) popup_clock_analogue_window

0x3a99,	// (0x000243c0) popup_clock_digital_window

0x0c15,	// (0x0002153c) grid_indicator_nsta_pane_ParamLimits

0x556a,	// (0x00025e91) clock_nsta_pane_t2

0x0001,

0xfa7b,	// (0x000303a2) clock_nsta_pane_t

0x7f83,	// (0x000288aa) aid_size_max_handle

0xde99,	// (0x0002e7c0) aid_size_min_handle

0x37c1,	// (0x000240e8) editor_scroll_pane

0x5fe4,	// (0x0002690b) ex_editor_pane

0x2f65,	// (0x0002388c) scroll_pane_cp13

0x2db3,	// (0x000236da) scroll_pane_cp14

0x3357,	// (0x00023c7e) scroll_pane_cp36

0xf32c,	// (0x0002fc53) list_single_graphic_hl_pane_cp2_ParamLimits

0xf32c,	// (0x0002fc53) list_single_graphic_hl_pane_cp2

0xf089,	// (0x0002f9b0) list_single_graphic_hl_pane_ParamLimits

0xf089,	// (0x0002f9b0) list_single_graphic_hl_pane

0xc08b,	// (0x0002c9b2) aid_size_min_hl_cp1

0x5fec,	// (0x00026913) list_highlight_pane_cp34_ParamLimits

0x5fec,	// (0x00026913) list_highlight_pane_cp34

0x5ffd,	// (0x00026924) list_single_graphic_hl_pane_g1_ParamLimits

0x5ffd,	// (0x00026924) list_single_graphic_hl_pane_g1

0xf0b0,	// (0x0002f9d7) list_single_graphic_hl_pane_g2_ParamLimits

0xf0b0,	// (0x0002f9d7) list_single_graphic_hl_pane_g2

0xf0b0,	// (0x0002f9d7) list_single_graphic_hl_pane_g3_ParamLimits

0xf0b0,	// (0x0002f9d7) list_single_graphic_hl_pane_g3

0xb374,	// (0x0002bc9b) list_single_graphic_hl_pane_g4_ParamLimits

0xb374,	// (0x0002bc9b) list_single_graphic_hl_pane_g4

0xf0bc,	// (0x0002f9e3) list_single_graphic_hl_pane_g5_ParamLimits

0xf0bc,	// (0x0002f9e3) list_single_graphic_hl_pane_g5

0x0004,

0xfbc6,	// (0x000304ed) list_single_graphic_hl_pane_g_ParamLimits

0xfbc6,	// (0x000304ed) list_single_graphic_hl_pane_g

0xf0d0,	// (0x0002f9f7) list_single_graphic_hl_pane_t1_ParamLimits

0xf0d0,	// (0x0002f9f7) list_single_graphic_hl_pane_t1

0x600a,	// (0x00026931) aid_size_min_hl_cp2

0x6013,	// (0x0002693a) list_highlight_pane_cp34_cp2_ParamLimits

0x6013,	// (0x0002693a) list_highlight_pane_cp34_cp2

0x5ffd,	// (0x00026924) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5ffd,	// (0x00026924) list_single_graphic_hl_pane_g1_cp2

0x6020,	// (0x00026947) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6020,	// (0x00026947) list_single_graphic_hl_pane_g2_cp2

0x602c,	// (0x00026953) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x602c,	// (0x00026953) list_single_graphic_hl_pane_g3_cp2

0x362f,	// (0x00023f56) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x362f,	// (0x00023f56) list_single_graphic_hl_pane_g4_cp2

0x5e45,	// (0x0002676c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5e45,	// (0x0002676c) list_single_graphic_hl_pane_g5_cp2

0xdec3,	// (0x0002e7ea) control_pane_g4_ParamLimits

0xdec3,	// (0x0002e7ea) control_pane_g4

0x2f9c,	// (0x000238c3) bg_popup_sub_pane_cp10_ParamLimits

0x596e,	// (0x00026295) list_choice_list_pane_ParamLimits

0x597d,	// (0x000262a4) scroll_pane_cp23

0x2968,	// (0x0002328f) bg_popup_preview_window_pane_cp02_ParamLimits

0x5e81,	// (0x000267a8) list_preview_fixed_pane_ParamLimits

0x5e97,	// (0x000267be) list_preview_fixed_pane_cp_ParamLimits

0x5e97,	// (0x000267be) list_preview_fixed_pane_cp

0x5ea3,	// (0x000267ca) popup_preview_fixed_window_g1_ParamLimits

0x5ea3,	// (0x000267ca) popup_preview_fixed_window_g1

0x5eaf,	// (0x000267d6) popup_preview_fixed_window_g2_ParamLimits

0x5eaf,	// (0x000267d6) popup_preview_fixed_window_g2

0x0002,

0xfb4e,	// (0x00030475) popup_preview_fixed_window_g_ParamLimits

0xfb4e,	// (0x00030475) popup_preview_fixed_window_g

0x7e87,	// (0x000287ae) aid_navi_side_left_pane_ParamLimits

0x7e97,	// (0x000287be) aid_navi_side_right_pane_ParamLimits

0x7ea6,	// (0x000287cd) navi_icon_pane_stacon_ParamLimits

0x7eb6,	// (0x000287dd) navi_navi_pane_stacon_ParamLimits

0x7ea6,	// (0x000287cd) navi_text_pane_stacon_ParamLimits

0x783e,	// (0x00028165) main_text_info_pane

0x604e,	// (0x00026975) listscroll_text_info_pane

0x6056,	// (0x0002697d) list_text_info_pane_ParamLimits

0x6056,	// (0x0002697d) list_text_info_pane

0x6065,	// (0x0002698c) scroll_pane_cp24_ParamLimits

0x6065,	// (0x0002698c) scroll_pane_cp24

0x0e3d,	// (0x00021764) list_text_info_pane_t1_ParamLimits

0x0e3d,	// (0x00021764) list_text_info_pane_t1

0xe00e,	// (0x0002e935) popup_fast_swap2_window_ParamLimits

0xe00e,	// (0x0002e935) popup_fast_swap2_window

0x6083,	// (0x000269aa) aid_size_cell_fast2

0x2745,	// (0x0002306c) bg_popup_window_pane_cp17

0x3f50,	// (0x00024877) heading_pane_cp2

0x3f58,	// (0x0002487f) listscroll_fast2_pane

0x608d,	// (0x000269b4) grid_fast2_pane

0x6095,	// (0x000269bc) listscroll_fast2_pane_g1

0x609d,	// (0x000269c4) listscroll_fast2_pane_g2

0x0001,

0xfbd1,	// (0x000304f8) listscroll_fast2_pane_g

0x2f65,	// (0x0002388c) scroll_pane_cp26

0x60a5,	// (0x000269cc) cell_fast2_pane_ParamLimits

0x60a5,	// (0x000269cc) cell_fast2_pane

0x60bb,	// (0x000269e2) cell_fast2_pane_g1

0x60c4,	// (0x000269eb) cell_fast2_pane_g2

0x60cd,	// (0x000269f4) cell_fast2_pane_g3

0x0002,

0xfbd6,	// (0x000304fd) cell_fast2_pane_g

0x2c14,	// (0x0002353b) grid_highlight_pane_cp9

0x8650,	// (0x00028f77) main_eswt_pane_ParamLimits

0x8650,	// (0x00028f77) main_eswt_pane

0x607a,	// (0x000269a1) list_single_text_info_pane

0x60d5,	// (0x000269fc) eswt_ctrl_button_pane

0x60d5,	// (0x000269fc) eswt_ctrl_canvas_pane

0x60dd,	// (0x00026a04) eswt_ctrl_combo_pane

0x60d5,	// (0x000269fc) eswt_ctrl_default_pane

0x60d5,	// (0x000269fc) eswt_ctrl_label_pane

0x60e5,	// (0x00026a0c) eswt_ctrl_wait_pane

0x60ed,	// (0x00026a14) eswt_shell_pane

0x2745,	// (0x0002306c) listscroll_eswt_app_pane

0x6109,	// (0x00026a30) popup_eswt_tasktip_window_ParamLimits

0x6109,	// (0x00026a30) popup_eswt_tasktip_window

0x3c26,	// (0x0002454d) bg_popup_window_pane_cp18

0x611a,	// (0x00026a41) eswt_control_pane_g1_ParamLimits

0x611a,	// (0x00026a41) eswt_control_pane_g1

0x6127,	// (0x00026a4e) eswt_control_pane_g2_ParamLimits

0x6127,	// (0x00026a4e) eswt_control_pane_g2

0x6134,	// (0x00026a5b) eswt_control_pane_g3_ParamLimits

0x6134,	// (0x00026a5b) eswt_control_pane_g3

0x6141,	// (0x00026a68) eswt_control_pane_g4_ParamLimits

0x6141,	// (0x00026a68) eswt_control_pane_g4

0x0003,

0xfbdd,	// (0x00030504) eswt_control_pane_g_ParamLimits

0xfbdd,	// (0x00030504) eswt_control_pane_g

0x2e03,	// (0x0002372a) bg_button_pane_ParamLimits

0x2e03,	// (0x0002372a) bg_button_pane

0x2c29,	// (0x00023550) common_borders_pane_copy2_ParamLimits

0x2c29,	// (0x00023550) common_borders_pane_copy2

0x614e,	// (0x00026a75) control_button_pane_g1_ParamLimits

0x614e,	// (0x00026a75) control_button_pane_g1

0x615a,	// (0x00026a81) control_button_pane_g2_ParamLimits

0x615a,	// (0x00026a81) control_button_pane_g2

0x6166,	// (0x00026a8d) control_button_pane_g3_ParamLimits

0x6166,	// (0x00026a8d) control_button_pane_g3

0x0002,

0xfbe6,	// (0x0003050d) control_button_pane_g_ParamLimits

0xfbe6,	// (0x0003050d) control_button_pane_g

0x617a,	// (0x00026aa1) control_button_pane_t1

0x6188,	// (0x00026aaf) control_button_pane_t2

0x0001,

0xfbed,	// (0x00030514) control_button_pane_t

0x3b9a,	// (0x000244c1) bg_button_pane_g1

0x3ba2,	// (0x000244c9) bg_button_pane_g2

0x3baa,	// (0x000244d1) bg_button_pane_g3

0x3bb2,	// (0x000244d9) bg_button_pane_g4

0x3bba,	// (0x000244e1) bg_button_pane_g5

0x3bc2,	// (0x000244e9) bg_button_pane_g6

0x3bca,	// (0x000244f1) bg_button_pane_g7

0x3bd2,	// (0x000244f9) bg_button_pane_g8

0x3bda,	// (0x00024501) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00030163) bg_button_pane_g

0x5929,	// (0x00026250) common_borders_pane_ParamLimits

0x5929,	// (0x00026250) common_borders_pane

0x611a,	// (0x00026a41) eswt_control_pane_g1_copy1_ParamLimits

0x611a,	// (0x00026a41) eswt_control_pane_g1_copy1

0x6127,	// (0x00026a4e) eswt_control_pane_g2_copy1_ParamLimits

0x6127,	// (0x00026a4e) eswt_control_pane_g2_copy1

0x6134,	// (0x00026a5b) eswt_control_pane_g3_copy1_ParamLimits

0x6134,	// (0x00026a5b) eswt_control_pane_g3_copy1

0x6141,	// (0x00026a68) eswt_control_pane_g4_copy1_ParamLimits

0x6141,	// (0x00026a68) eswt_control_pane_g4_copy1

0x5964,	// (0x0002628b) bg_eswt_ctrl_canvas_pane_g1

0x5929,	// (0x00026250) common_borders_pane_cp2_ParamLimits

0x5929,	// (0x00026250) common_borders_pane_cp2

0x5929,	// (0x00026250) common_borders_pane_cp3_ParamLimits

0x5929,	// (0x00026250) common_borders_pane_cp3

0x6196,	// (0x00026abd) separator_horizontal_pane

0x31b7,	// (0x00023ade) separator_vertical_pane

0x611a,	// (0x00026a41) eswt_control_pane_g1_copy2_ParamLimits

0x611a,	// (0x00026a41) eswt_control_pane_g1_copy2

0x6127,	// (0x00026a4e) eswt_control_pane_g2_copy2_ParamLimits

0x6127,	// (0x00026a4e) eswt_control_pane_g2_copy2

0x6134,	// (0x00026a5b) eswt_control_pane_g3_copy2_ParamLimits

0x6134,	// (0x00026a5b) eswt_control_pane_g3_copy2

0x6141,	// (0x00026a68) eswt_control_pane_g4_copy2_ParamLimits

0x6141,	// (0x00026a68) eswt_control_pane_g4_copy2

0x2745,	// (0x0002306c) common_borders_pane_cp4

0x619e,	// (0x00026ac5) separator_horizontal_pane_g1

0x61a7,	// (0x00026ace) separator_horizontal_pane_g2

0x61b0,	// (0x00026ad7) separator_horizontal_pane_g3

0x0002,

0xfbf2,	// (0x00030519) separator_horizontal_pane_g

0x611a,	// (0x00026a41) eswt_control_pane_g1_copy3_ParamLimits

0x611a,	// (0x00026a41) eswt_control_pane_g1_copy3

0x6127,	// (0x00026a4e) eswt_control_pane_g2_copy3_ParamLimits

0x6127,	// (0x00026a4e) eswt_control_pane_g2_copy3

0x6134,	// (0x00026a5b) eswt_control_pane_g3_copy3_ParamLimits

0x6134,	// (0x00026a5b) eswt_control_pane_g3_copy3

0x6141,	// (0x00026a68) eswt_control_pane_g4_copy3_ParamLimits

0x6141,	// (0x00026a68) eswt_control_pane_g4_copy3

0x2745,	// (0x0002306c) common_borders_pane_cp5

0x61b9,	// (0x00026ae0) separator_vertical_pane_g1

0x61c2,	// (0x00026ae9) separator_vertical_pane_g2

0x61cb,	// (0x00026af2) separator_vertical_pane_g3

0x0002,

0xfbf9,	// (0x00030520) separator_vertical_pane_g

0x611a,	// (0x00026a41) eswt_control_pane_g1_copy4_ParamLimits

0x611a,	// (0x00026a41) eswt_control_pane_g1_copy4

0x6127,	// (0x00026a4e) eswt_control_pane_g2_copy4_ParamLimits

0x6127,	// (0x00026a4e) eswt_control_pane_g2_copy4

0x6134,	// (0x00026a5b) eswt_control_pane_g3_copy4_ParamLimits

0x6134,	// (0x00026a5b) eswt_control_pane_g3_copy4

0x6141,	// (0x00026a68) eswt_control_pane_g4_copy4_ParamLimits

0x6141,	// (0x00026a68) eswt_control_pane_g4_copy4

0x0e58,	// (0x0002177f) eswt_ctrl_combo_button_pane

0x0e60,	// (0x00021787) eswt_ctrl_input_pane

0x0e68,	// (0x0002178f) popup_choice_list_window_cp70

0x0e70,	// (0x00021797) eswt_ctrl_input_pane_t1

0x2745,	// (0x0002306c) input_focus_pane_cp70

0x5929,	// (0x00026250) bg_button_pane_cp70_ParamLimits

0x5929,	// (0x00026250) bg_button_pane_cp70

0x4fbb,	// (0x000258e2) eswt_ctrl_combo_button_pane_g1

0x61d4,	// (0x00026afb) wait_bar_pane_cp70

0x3c26,	// (0x0002454d) bg_popup_window_pane_cp70_ParamLimits

0x3c26,	// (0x0002454d) bg_popup_window_pane_cp70

0x61dc,	// (0x00026b03) popup_eswt_tasktip_window_t1

0x61f2,	// (0x00026b19) wait_bar_pane_cp71_ParamLimits

0x61f2,	// (0x00026b19) wait_bar_pane_cp71

0x61fe,	// (0x00026b25) grid_eswt_app_pane

0x31c0,	// (0x00023ae7) scroll_pane_cp70

0x0e7e,	// (0x000217a5) cell_eswt_app_pane_ParamLimits

0x0e7e,	// (0x000217a5) cell_eswt_app_pane

0x0ea6,	// (0x000217cd) cell_eswt_app_pane_g1_ParamLimits

0x0ea6,	// (0x000217cd) cell_eswt_app_pane_g1

0x0ed5,	// (0x000217fc) cell_eswt_app_pane_g2_ParamLimits

0x0ed5,	// (0x000217fc) cell_eswt_app_pane_g2

0x0001,

0xfc00,	// (0x00030527) cell_eswt_app_pane_g_ParamLimits

0xfc00,	// (0x00030527) cell_eswt_app_pane_g

0x0efe,	// (0x00021825) cell_eswt_app_pane_t1_ParamLimits

0x0efe,	// (0x00021825) cell_eswt_app_pane_t1

0x6207,	// (0x00026b2e) grid_highlight_pane_cp70_ParamLimits

0x6207,	// (0x00026b2e) grid_highlight_pane_cp70

0x2e1d,	// (0x00023744) set_content_pane_g1

0xf4c9,	// (0x0002fdf0) status_small_volume_pane

0xe79a,	// (0x0002f0c1) status_small_volume_pane_g1

0xe7a2,	// (0x0002f0c9) volume_small2_pane

0xe7ab,	// (0x0002f0d2) volume_small2_pane_g1

0xe7b4,	// (0x0002f0db) volume_small2_pane_g2

0xe7bd,	// (0x0002f0e4) volume_small2_pane_g3

0xe7c6,	// (0x0002f0ed) volume_small2_pane_g4

0xe7cf,	// (0x0002f0f6) volume_small2_pane_g5

0xe7d8,	// (0x0002f0ff) volume_small2_pane_g6

0xe7e1,	// (0x0002f108) volume_small2_pane_g7

0xe7ea,	// (0x0002f111) volume_small2_pane_g8

0xe7f3,	// (0x0002f11a) volume_small2_pane_g9

0xe7fc,	// (0x0002f123) volume_small2_pane_g10

0x0009,

0xfc05,	// (0x0003052c) volume_small2_pane_g

0x5c97,	// (0x000265be) fep_vkb_top_text_pane_g1_ParamLimits

0x0dc5,	// (0x000216ec) fep_vkb_top_text_pane_t1_ParamLimits

0x5ebb,	// (0x000267e2) popup_preview_fixed_window_g3_ParamLimits

0x5ebb,	// (0x000267e2) popup_preview_fixed_window_g3

0xe52e,	// (0x0002ee55) popup_toolbar_trans_pane

0x4cf1,	// (0x00025618) aid_height_set_list_ParamLimits

0x4cfd,	// (0x00025624) aid_size_parent_ParamLimits

0x2f9c,	// (0x000238c3) list_highlight_pane_cp2_ParamLimits

0x2e1d,	// (0x00023744) set_content_pane_g1_ParamLimits

0x2fe5,	// (0x0002390c) list_single_image_pane_ParamLimits

0x2fe5,	// (0x0002390c) list_single_image_pane

0x0f9b,	// (0x000218c2) aid_size_cell_image_ParamLimits

0x0f9b,	// (0x000218c2) aid_size_cell_image

0x0fa8,	// (0x000218cf) grid_single_image_pane_ParamLimits

0x0fa8,	// (0x000218cf) grid_single_image_pane

0x2e1d,	// (0x00023744) list_single_image_pane_g1_ParamLimits

0x2e1d,	// (0x00023744) list_single_image_pane_g1

0x2e29,	// (0x00023750) list_single_image_pane_g2_ParamLimits

0x2e29,	// (0x00023750) list_single_image_pane_g2

0x0001,

0xfc1a,	// (0x00030541) list_single_image_pane_g_ParamLimits

0xfc1a,	// (0x00030541) list_single_image_pane_g

0x531e,	// (0x00025c45) list_single_image_pane_t1_ParamLimits

0x531e,	// (0x00025c45) list_single_image_pane_t1

0x0fb6,	// (0x000218dd) cell_image_list_pane_ParamLimits

0x0fb6,	// (0x000218dd) cell_image_list_pane

0x0fca,	// (0x000218f1) cell_image_list_pane_g1

0x0fd3,	// (0x000218fa) cell_image_list_pane_g2

0x0001,

0xfc1f,	// (0x00030546) cell_image_list_pane_g

0x6213,	// (0x00026b3a) aid_size_cell_tb_trans_pane

0x2e03,	// (0x0002372a) bg_tb_trans_pane

0x6225,	// (0x00026b4c) grid_tb_trans_pane

0x3b9a,	// (0x000244c1) bg_tb_trans_pane_g1

0x3ba2,	// (0x000244c9) bg_tb_trans_pane_g2

0x3baa,	// (0x000244d1) bg_tb_trans_pane_g3

0x3bb2,	// (0x000244d9) bg_tb_trans_pane_g4

0x3bba,	// (0x000244e1) bg_tb_trans_pane_g5

0x3bd2,	// (0x000244f9) bg_tb_trans_pane_g6

0x3bda,	// (0x00024501) bg_tb_trans_pane_g7

0x3bc2,	// (0x000244e9) bg_tb_trans_pane_g8

0x3bca,	// (0x000244f1) bg_tb_trans_pane_g9

0x0008,

0xfc24,	// (0x0003054b) bg_tb_trans_pane_g

0x6239,	// (0x00026b60) cell_toolbar_trans_pane_ParamLimits

0x6239,	// (0x00026b60) cell_toolbar_trans_pane

0x5964,	// (0x0002628b) cell_toolbar_trans_pane_g1

0x0cc2,	// (0x000215e9) list_form2_midp_pane_t1

0x0cd0,	// (0x000215f7) list_form2_midp_pane_t2

0x0001,

0xfac1,	// (0x000303e8) list_form2_midp_pane_t

0x5638,	// (0x00025f5f) scroll_pane_cp51_ParamLimits

0x57ae,	// (0x000260d5) form2_midp_wait_pane_g1

0x57b7,	// (0x000260de) form2_midp_wait_pane_g2

0x57c0,	// (0x000260e7) form2_midp_wait_pane_g3

0x0002,

0xfad6,	// (0x000303fd) form2_midp_wait_pane_g

0x2835,	// (0x0002315c) list_highlight_pane_cp21_ParamLimits

0x57fe,	// (0x00026125) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x580d,	// (0x00026134) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4d58,	// (0x0002567f) list_single_2graphic_im_pane_ParamLimits

0x4d58,	// (0x0002567f) list_single_2graphic_im_pane

0x0fdc,	// (0x00021903) list_single_2graphic_im_pane_g1_ParamLimits

0x0fdc,	// (0x00021903) list_single_2graphic_im_pane_g1

0x0fed,	// (0x00021914) list_single_2graphic_im_pane_g2_ParamLimits

0x0fed,	// (0x00021914) list_single_2graphic_im_pane_g2

0x0ff9,	// (0x00021920) list_single_2graphic_im_pane_g3_ParamLimits

0x0ff9,	// (0x00021920) list_single_2graphic_im_pane_g3

0x0003,

0xfc37,	// (0x0003055e) list_single_2graphic_im_pane_g_ParamLimits

0xfc37,	// (0x0003055e) list_single_2graphic_im_pane_g

0x100d,	// (0x00021934) list_single_2graphic_im_pane_t1_ParamLimits

0x100d,	// (0x00021934) list_single_2graphic_im_pane_t1

0x5ec7,	// (0x000267ee) list_single_graphic_2heading_pane_fp_ParamLimits

0x5ec7,	// (0x000267ee) list_single_graphic_2heading_pane_fp

0xbefd,	// (0x0002c824) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xbefd,	// (0x0002c824) list_single_graphic_2heading_pane_fp_g1

0x5edb,	// (0x00026802) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5edb,	// (0x00026802) list_single_graphic_2heading_pane_fp_g2

0xbec6,	// (0x0002c7ed) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbec6,	// (0x0002c7ed) list_single_graphic_2heading_pane_fp_g3

0xbed2,	// (0x0002c7f9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbed2,	// (0x0002c7f9) list_single_graphic_2heading_pane_fp_g4

0x5ee7,	// (0x0002680e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5ee7,	// (0x0002680e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5e,	// (0x00030485) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5e,	// (0x00030485) list_single_graphic_2heading_pane_fp_g

0xc0ca,	// (0x0002c9f1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc0ca,	// (0x0002c9f1) list_single_graphic_2heading_pane_fp_t1

0xbf35,	// (0x0002c85c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xbf35,	// (0x0002c85c) list_single_graphic_2heading_pane_fp_t2

0xc0e0,	// (0x0002ca07) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc0e0,	// (0x0002ca07) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc40,	// (0x00030567) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc40,	// (0x00030567) list_single_graphic_2heading_pane_fp_t

0x59ed,	// (0x00026314) fep_hwr_write_pane_g5_ParamLimits

0x59ed,	// (0x00026314) fep_hwr_write_pane_g5

0x59f9,	// (0x00026320) fep_hwr_write_pane_g6_ParamLimits

0x59f9,	// (0x00026320) fep_hwr_write_pane_g6

0x60ed,	// (0x00026a14) eswt_shell_pane_ParamLimits

0x3c26,	// (0x0002454d) bg_popup_window_pane_cp18_ParamLimits

0x4c95,	// (0x000255bc) heading_pane_cp70

0x61dc,	// (0x00026b03) popup_eswt_tasktip_window_t1_ParamLimits

0x0227,	// (0x00020b4e) aid_touch_tab_arrow_left

0x023b,	// (0x00020b62) aid_touch_tab_arrow_right

0xda0c,	// (0x0002e333) title_pane_g3_ParamLimits

0xda0c,	// (0x0002e333) title_pane_g3

0x2dd3,	// (0x000236fa) set_value_pane_g1

0xe52e,	// (0x0002ee55) popup_toolbar_trans_pane_ParamLimits

0x6213,	// (0x00026b3a) aid_size_cell_tb_trans_pane_ParamLimits

0x2e03,	// (0x0002372a) bg_tb_trans_pane_ParamLimits

0x6225,	// (0x00026b4c) grid_tb_trans_pane_ParamLimits

0x2968,	// (0x0002328f) cont_note_pane_ParamLimits

0x2968,	// (0x0002328f) cont_note_pane

0x2c29,	// (0x00023550) cont_snote2_single_text_pane_ParamLimits

0x2c29,	// (0x00023550) cont_snote2_single_text_pane

0x2c29,	// (0x00023550) cont_snote2_single_graphic_pane_ParamLimits

0x2c29,	// (0x00023550) cont_snote2_single_graphic_pane

0x41b8,	// (0x00024adf) cont_note_wait_pane_ParamLimits

0x41b8,	// (0x00024adf) cont_note_wait_pane

0x41b8,	// (0x00024adf) cont_note_image_pane_ParamLimits

0x41b8,	// (0x00024adf) cont_note_image_pane

0x626b,	// (0x00026b92) popup_note2_window_g1_ParamLimits

0x626b,	// (0x00026b92) popup_note2_window_g1

0x629c,	// (0x00026bc3) popup_note2_window_t1_ParamLimits

0x629c,	// (0x00026bc3) popup_note2_window_t1

0x62e1,	// (0x00026c08) popup_note2_window_t2_ParamLimits

0x62e1,	// (0x00026c08) popup_note2_window_t2

0x6326,	// (0x00026c4d) popup_note2_window_t3_ParamLimits

0x6326,	// (0x00026c4d) popup_note2_window_t3

0x636b,	// (0x00026c92) popup_note2_window_t4_ParamLimits

0x636b,	// (0x00026c92) popup_note2_window_t4

0x29ec,	// (0x00023313) popup_note2_window_t5_ParamLimits

0x29ec,	// (0x00023313) popup_note2_window_t5

0x0004,

0xfc4c,	// (0x00030573) popup_note2_window_t_ParamLimits

0xfc4c,	// (0x00030573) popup_note2_window_t

0x639a,	// (0x00026cc1) popup_note2_image_window_g1_ParamLimits

0x639a,	// (0x00026cc1) popup_note2_image_window_g1

0x63a6,	// (0x00026ccd) popup_note2_image_window_g2_ParamLimits

0x63a6,	// (0x00026ccd) popup_note2_image_window_g2

0x0001,

0xfc57,	// (0x0003057e) popup_note2_image_window_g_ParamLimits

0xfc57,	// (0x0003057e) popup_note2_image_window_g

0x63b8,	// (0x00026cdf) popup_note2_image_window_t1_ParamLimits

0x63b8,	// (0x00026cdf) popup_note2_image_window_t1

0x63d0,	// (0x00026cf7) popup_note2_image_window_t2_ParamLimits

0x63d0,	// (0x00026cf7) popup_note2_image_window_t2

0x63e8,	// (0x00026d0f) popup_note2_image_window_t3_ParamLimits

0x63e8,	// (0x00026d0f) popup_note2_image_window_t3

0x0002,

0xfc5c,	// (0x00030583) popup_note2_image_window_t_ParamLimits

0xfc5c,	// (0x00030583) popup_note2_image_window_t

0x41c6,	// (0x00024aed) popup_note2_wait_window_g1_ParamLimits

0x41c6,	// (0x00024aed) popup_note2_wait_window_g1

0x41d2,	// (0x00024af9) popup_note2_wait_window_g2_ParamLimits

0x41d2,	// (0x00024af9) popup_note2_wait_window_g2

0x41de,	// (0x00024b05) popup_note2_wait_window_g3_ParamLimits

0x41de,	// (0x00024b05) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x00030145) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x00030145) popup_note2_wait_window_g

0x6404,	// (0x00026d2b) popup_note2_wait_window_t1_ParamLimits

0x6404,	// (0x00026d2b) popup_note2_wait_window_t1

0x6422,	// (0x00026d49) popup_note2_wait_window_t2_ParamLimits

0x6422,	// (0x00026d49) popup_note2_wait_window_t2

0x6440,	// (0x00026d67) popup_note2_wait_window_t3_ParamLimits

0x6440,	// (0x00026d67) popup_note2_wait_window_t3

0x6452,	// (0x00026d79) popup_note2_wait_window_t4_ParamLimits

0x6452,	// (0x00026d79) popup_note2_wait_window_t4

0x0003,

0xfc63,	// (0x0003058a) popup_note2_wait_window_t_ParamLimits

0xfc63,	// (0x0003058a) popup_note2_wait_window_t

0x6464,	// (0x00026d8b) wait_bar2_pane_ParamLimits

0x6464,	// (0x00026d8b) wait_bar2_pane

0x647c,	// (0x00026da3) popup_snote2_single_text_window_g1_ParamLimits

0x647c,	// (0x00026da3) popup_snote2_single_text_window_g1

0x64a4,	// (0x00026dcb) popup_snote2_single_text_window_t1_ParamLimits

0x64a4,	// (0x00026dcb) popup_snote2_single_text_window_t1

0x64f0,	// (0x00026e17) popup_snote2_single_text_window_t2_ParamLimits

0x64f0,	// (0x00026e17) popup_snote2_single_text_window_t2

0x653c,	// (0x00026e63) popup_snote2_single_text_window_t3_ParamLimits

0x653c,	// (0x00026e63) popup_snote2_single_text_window_t3

0x657d,	// (0x00026ea4) popup_snote2_single_text_window_t4_ParamLimits

0x657d,	// (0x00026ea4) popup_snote2_single_text_window_t4

0x65b3,	// (0x00026eda) popup_snote2_single_text_window_t5_ParamLimits

0x65b3,	// (0x00026eda) popup_snote2_single_text_window_t5

0x0004,

0xfc6c,	// (0x00030593) popup_snote2_single_text_window_t_ParamLimits

0xfc6c,	// (0x00030593) popup_snote2_single_text_window_t

0x65de,	// (0x00026f05) popup_snote2_single_graphic_window_g1_ParamLimits

0x65de,	// (0x00026f05) popup_snote2_single_graphic_window_g1

0x6606,	// (0x00026f2d) popup_snote2_single_graphic_window_g2_ParamLimits

0x6606,	// (0x00026f2d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc77,	// (0x0003059e) popup_snote2_single_graphic_window_g_ParamLimits

0xfc77,	// (0x0003059e) popup_snote2_single_graphic_window_g

0x662e,	// (0x00026f55) popup_snote2_single_graphic_window_t1_ParamLimits

0x662e,	// (0x00026f55) popup_snote2_single_graphic_window_t1

0x667a,	// (0x00026fa1) popup_snote2_single_graphic_window_t2_ParamLimits

0x667a,	// (0x00026fa1) popup_snote2_single_graphic_window_t2

0x653c,	// (0x00026e63) popup_snote2_single_graphic_window_t3_ParamLimits

0x653c,	// (0x00026e63) popup_snote2_single_graphic_window_t3

0x657d,	// (0x00026ea4) popup_snote2_single_graphic_window_t4_ParamLimits

0x657d,	// (0x00026ea4) popup_snote2_single_graphic_window_t4

0x65b3,	// (0x00026eda) popup_snote2_single_graphic_window_t5_ParamLimits

0x65b3,	// (0x00026eda) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7c,	// (0x000305a3) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7c,	// (0x000305a3) popup_snote2_single_graphic_window_t

0x55d1,	// (0x00025ef8) clock_nsta_pane_cp2_t1

0x55d1,	// (0x00025ef8) clock_nsta_pane_cp2_t2

0x0001,

0xfa97,	// (0x000303be) clock_nsta_pane_cp2_t

0xb7e8,	// (0x0002c10f) form_field_data_wide_pane_g1_ParamLimits

0x2e1d,	// (0x00023744) form_field_data_wide_pane_g2_ParamLimits

0x2e1d,	// (0x00023744) form_field_data_wide_pane_g2

0x2e29,	// (0x00023750) form_field_data_wide_pane_g3_ParamLimits

0x2e29,	// (0x00023750) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0002ff7d) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0002ff7d) form_field_data_wide_pane_g

0x0bff,	// (0x00021526) grid_touch_3_pane_ParamLimits

0x0bff,	// (0x00021526) grid_touch_3_pane

0x103e,	// (0x00021965) cell_touch_3_pane_ParamLimits

0x103e,	// (0x00021965) cell_touch_3_pane

0x5964,	// (0x0002628b) cell_touch_3_pane_g1

0x5964,	// (0x0002628b) cell_touch_3_pane_g2

0x0001,

0xfb1c,	// (0x00030443) cell_touch_3_pane_g

0x2a44,	// (0x0002336b) cont_query_data_pane

0x2a4c,	// (0x00023373) cont_query_data_pane_cp1

0x66c6,	// (0x00026fed) button_value_adjust_pane_cp7

0x66ce,	// (0x00026ff5) query_popup_pane_cp3

0x3368,	// (0x00023c8f) bg_popup_sub_pane_cp22_ParamLimits

0x8141,	// (0x00028a68) navi_navi_volume_pane_cp2

0x8159,	// (0x00028a80) popup_side_volume_key_window_g2

0x8165,	// (0x00028a8c) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x00030013) popup_side_volume_key_window_g

0x817f,	// (0x00028aa6) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0003001a) popup_side_volume_key_window_t

0x35b2,	// (0x00023ed9) popup_side_volume_key_window_ParamLimits

0xb44c,	// (0x0002bd73) list_double_graphic_pane_g4_ParamLimits

0xb44c,	// (0x0002bd73) list_double_graphic_pane_g4

0xf073,	// (0x0002f99a) list_single_2heading_msg_pane_ParamLimits

0xf073,	// (0x0002f99a) list_single_2heading_msg_pane

0xf0e6,	// (0x0002fa0d) list_single_2heading_msg_pane_g1_ParamLimits

0xf0e6,	// (0x0002fa0d) list_single_2heading_msg_pane_g1

0xf0f2,	// (0x0002fa19) list_single_2heading_msg_pane_g2_ParamLimits

0xf0f2,	// (0x0002fa19) list_single_2heading_msg_pane_g2

0xf105,	// (0x0002fa2c) list_single_2heading_msg_pane_g3_ParamLimits

0xf105,	// (0x0002fa2c) list_single_2heading_msg_pane_g3

0xf111,	// (0x0002fa38) list_single_2heading_msg_pane_g4_ParamLimits

0xf111,	// (0x0002fa38) list_single_2heading_msg_pane_g4

0x0003,

0xfc87,	// (0x000305ae) list_single_2heading_msg_pane_g_ParamLimits

0xfc87,	// (0x000305ae) list_single_2heading_msg_pane_g

0xf129,	// (0x0002fa50) list_single_2heading_msg_pane_t1_ParamLimits

0xf129,	// (0x0002fa50) list_single_2heading_msg_pane_t1

0xf151,	// (0x0002fa78) list_single_2heading_msg_pane_t2_ParamLimits

0xf151,	// (0x0002fa78) list_single_2heading_msg_pane_t2

0xf1bc,	// (0x0002fae3) list_single_2heading_msg_pane_t3_ParamLimits

0xf1bc,	// (0x0002fae3) list_single_2heading_msg_pane_t3

0xcd76,	// (0x0002d69d) list_single_2heading_msg_pane_t4_ParamLimits

0xcd76,	// (0x0002d69d) list_single_2heading_msg_pane_t4

0x0003,

0xfc90,	// (0x000305b7) list_single_2heading_msg_pane_t_ParamLimits

0xfc90,	// (0x000305b7) list_single_2heading_msg_pane_t

0x27db,	// (0x00023102) title_pane_g4_ParamLimits

0x27db,	// (0x00023102) title_pane_g4

0x7dfd,	// (0x00028724) title_pane_stacon_g3_ParamLimits

0x7dfd,	// (0x00028724) title_pane_stacon_g3

0x625f,	// (0x00026b86) list_single_2graphic_im_pane_g4_ParamLimits

0x625f,	// (0x00026b86) list_single_2graphic_im_pane_g4

0x4abf,	// (0x000253e6) popup_side_volume_key_window_cp

0x4f27,	// (0x0002584e) main_idle_act2_pane_t1

0x8e12,	// (0x00029739) toolbar_button_pane_g10

0xdd71,	// (0x0002e698) popup_toolbar_window_cp1

0x55c2,	// (0x00025ee9) clock_nsta_pane_cp_t1

0x55c2,	// (0x00025ee9) clock_nsta_pane_cp_t2

0x0001,

0xfa92,	// (0x000303b9) clock_nsta_pane_cp_t

0x8141,	// (0x00028a68) navi_navi_volume_pane_cp2_ParamLimits

0x814d,	// (0x00028a74) popup_side_volume_key_window_g1_ParamLimits

0x8159,	// (0x00028a80) popup_side_volume_key_window_g2_ParamLimits

0x8165,	// (0x00028a8c) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x00030013) popup_side_volume_key_window_g_ParamLimits

0x9870,	// (0x0002a197) fep_hwr_aid_pane

0x9911,	// (0x0002a238) bg_fep_hwr_top_pane_g4_ParamLimits

0x59cf,	// (0x000262f6) fep_hwr_top_pane_g1_ParamLimits

0x59bd,	// (0x000262e4) fep_hwr_top_pane_g2_ParamLimits

0x9931,	// (0x0002a258) fep_hwr_top_pane_g3_ParamLimits

0xfae7,	// (0x0003040e) fep_hwr_top_pane_g_ParamLimits

0x9946,	// (0x0002a26d) fep_hwr_top_text_pane_ParamLimits

0x48c8,	// (0x000251ef) aid_touch_tab_arrow_arrow_2

0x48bf,	// (0x000251e6) aid_touch_tab_arrow_left_2

0x9884,	// (0x0002a1ab) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x98b7,	// (0x0002a1de) fep_hwr_prediction_pane

0x5b02,	// (0x00026429) fep_vkb_prediction_pane

0x0da5,	// (0x000216cc) fep_vkb_side_pane_g3_ParamLimits

0x0da5,	// (0x000216cc) fep_vkb_side_pane_g3

0x9b99,	// (0x0002a4c0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x9c03,	// (0x0002a52a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x9c10,	// (0x0002a537) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb96,	// (0x000304bd) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x9f40,	// (0x0002a867) fep_hwr_prediction_pane_g1

0x9f4a,	// (0x0002a871) fep_hwr_prediction_pane_g2

0x9f52,	// (0x0002a879) fep_hwr_prediction_pane_g3

0x9f5a,	// (0x0002a881) fep_hwr_prediction_pane_g4

0x0003,

0xfc99,	// (0x000305c0) fep_hwr_prediction_pane_g

0x66df,	// (0x00027006) fep_vkb_prediction_pane_g1

0x66e9,	// (0x00027010) fep_vkb_prediction_pane_g2

0x66f1,	// (0x00027018) fep_vkb_prediction_pane_g3

0x66f9,	// (0x00027020) fep_vkb_prediction_pane_g4

0x0003,

0xfca2,	// (0x000305c9) fep_vkb_prediction_pane_g

0x9265,	// (0x00029b8c) slider_set_pane_g3

0x9279,	// (0x00029ba0) slider_set_pane_g4

0x9291,	// (0x00029bb8) slider_set_pane_g5

0x9265,	// (0x00029b8c) slider_set_pane_g6

0xe737,	// (0x0002f05e) slider_set_pane_g7

0x4d20,	// (0x00025647) slider_form_pane_g3

0x4d29,	// (0x00025650) slider_form_pane_g4

0x4d31,	// (0x00025658) slider_form_pane_g5

0x4d20,	// (0x00025647) slider_form_pane_g6

0x0a6b,	// (0x00021392) slider_form_pane_g7

0x5178,	// (0x00025a9f) slider_set_pane_vc_g3

0x5181,	// (0x00025aa8) slider_set_pane_vc_g4

0x518a,	// (0x00025ab1) slider_set_pane_vc_g5

0x5178,	// (0x00025a9f) slider_set_pane_vc_g6

0x5193,	// (0x00025aba) slider_set_pane_vc_g7

0x5178,	// (0x00025a9f) slider_form_pane_vc_g1

0x5181,	// (0x00025aa8) slider_form_pane_vc_g2

0x518a,	// (0x00025ab1) slider_form_pane_vc_g3

0x5178,	// (0x00025a9f) slider_form_pane_vc_g4

0x5307,	// (0x00025c2e) slider_form_pane_vc_g5

0x0004,

0xfa64,	// (0x0003038b) slider_form_pane_vc_g

0x783e,	// (0x00028165) main_idle_act3_pane

0x6701,	// (0x00027028) ai3_links_pane

0x1085,	// (0x000219ac) popup_ai3_data_window_ParamLimits

0x1085,	// (0x000219ac) popup_ai3_data_window

0x2745,	// (0x0002306c) grid_ai3_links_pane

0x109d,	// (0x000219c4) cell_ai3_links_pane_ParamLimits

0x109d,	// (0x000219c4) cell_ai3_links_pane

0x670a,	// (0x00027031) bg_popup_sub_pane_cp11

0x6717,	// (0x0002703e) cell_ai3_links_pane_g1

0x2745,	// (0x0002306c) bg_popup_sub_pane_cp12

0x673c,	// (0x00027063) heading_ai3_data_pane

0x6744,	// (0x0002706b) list_ai3_gene_pane

0x6750,	// (0x00027077) popup_ai3_data_window_g1

0x6758,	// (0x0002707f) heading_ai3_data_pane_g1

0x6760,	// (0x00027087) heading_ai3_data_pane_t1

0x676e,	// (0x00027095) list_double_ai3_gene_pane_ParamLimits

0x676e,	// (0x00027095) list_double_ai3_gene_pane

0x677b,	// (0x000270a2) list_single_ai3_gene_pane_ParamLimits

0x677b,	// (0x000270a2) list_single_ai3_gene_pane

0x5929,	// (0x00026250) list_highlight_pane_cp7_ParamLimits

0x5929,	// (0x00026250) list_highlight_pane_cp7

0x6788,	// (0x000270af) list_single_a13_gene_pane_t1_ParamLimits

0x6788,	// (0x000270af) list_single_a13_gene_pane_t1

0x679f,	// (0x000270c6) list_single_ai3_gene_pane_g1

0x67a8,	// (0x000270cf) list_single_ai3_gene_pane_g2

0x0001,

0xfcab,	// (0x000305d2) list_single_ai3_gene_pane_g

0x67b0,	// (0x000270d7) list_double_ai3_gene_pane_g1_ParamLimits

0x67b0,	// (0x000270d7) list_double_ai3_gene_pane_g1

0x67bc,	// (0x000270e3) list_double_ai3_gene_pane_t1_ParamLimits

0x67bc,	// (0x000270e3) list_double_ai3_gene_pane_t1

0x67d8,	// (0x000270ff) list_double_ai3_gene_pane_t2_ParamLimits

0x67d8,	// (0x000270ff) list_double_ai3_gene_pane_t2

0x67ed,	// (0x00027114) list_double_ai3_gene_pane_t3_ParamLimits

0x67ed,	// (0x00027114) list_double_ai3_gene_pane_t3

0x0002,

0xfcb0,	// (0x000305d7) list_double_ai3_gene_pane_t_ParamLimits

0xfcb0,	// (0x000305d7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc0f6,	// (0x0002ca1d) aid_size_min_col_2

0x1071,	// (0x00021998) aid_size_min_msg_ParamLimits

0x1071,	// (0x00021998) aid_size_min_msg

0x0db9,	// (0x000216e0) fep_vkb_top_text_pane_g2_ParamLimits

0x0db9,	// (0x000216e0) fep_vkb_top_text_pane_g2

0x0001,

0xfb17,	// (0x0003043e) fep_vkb_top_text_pane_g_ParamLimits

0xfb17,	// (0x0003043e) fep_vkb_top_text_pane_g

0x783e,	// (0x00028165) main_hc_apps_shell_pane

0x680a,	// (0x00027131) grid_hc_apps_pane_ParamLimits

0x680a,	// (0x00027131) grid_hc_apps_pane

0x681c,	// (0x00027143) list_hc_apps_pane

0x6824,	// (0x0002714b) scroll_pane_cp37_ParamLimits

0x6824,	// (0x0002714b) scroll_pane_cp37

0x10b3,	// (0x000219da) cell_hc_apps_pane_ParamLimits

0x10b3,	// (0x000219da) cell_hc_apps_pane

0x114d,	// (0x00021a74) cell_hc_apps_pane_g1_ParamLimits

0x114d,	// (0x00021a74) cell_hc_apps_pane_g1

0x6830,	// (0x00027157) cell_hc_apps_pane_g2_ParamLimits

0x6830,	// (0x00027157) cell_hc_apps_pane_g2

0x684c,	// (0x00027173) cell_hc_apps_pane_g3_ParamLimits

0x684c,	// (0x00027173) cell_hc_apps_pane_g3

0x0002,

0xfcb7,	// (0x000305de) cell_hc_apps_pane_g_ParamLimits

0xfcb7,	// (0x000305de) cell_hc_apps_pane_g

0x1179,	// (0x00021aa0) cell_hc_apps_pane_t1_ParamLimits

0x1179,	// (0x00021aa0) cell_hc_apps_pane_t1

0x2968,	// (0x0002328f) grid_highlight_pane_cp10_ParamLimits

0x2968,	// (0x0002328f) grid_highlight_pane_cp10

0x11b7,	// (0x00021ade) list_single_hc_apps_pane_ParamLimits

0x11b7,	// (0x00021ade) list_single_hc_apps_pane

0x11e3,	// (0x00021b0a) list_single_hc_apps_pane_g1

0xf22a,	// (0x0002fb51) list_single_hc_apps_pane_g2

0x0001,

0xfcbe,	// (0x000305e5) list_single_hc_apps_pane_g

0xf243,	// (0x0002fb6a) list_single_hc_apps_pane_g2_copy1

0xf25f,	// (0x0002fb86) list_single_hc_apps_pane_t1

0x2835,	// (0x0002315c) bg_set_opt_pane_cp_ParamLimits

0x7b0d,	// (0x00028434) setting_slider_pane_t1_ParamLimits

0xdad9,	// (0x0002e400) setting_slider_pane_t2_ParamLimits

0xdaf2,	// (0x0002e419) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0002fe60) setting_slider_pane_t_ParamLimits

0x7b53,	// (0x0002847a) slider_set_pane_ParamLimits

0x8503,	// (0x00028e2a) control_pane_g5_ParamLimits

0x8503,	// (0x00028e2a) control_pane_g5

0x4cdc,	// (0x00025603) slider_set_pane_g1_ParamLimits

0x9259,	// (0x00029b80) slider_set_pane_g2_ParamLimits

0x9265,	// (0x00029b8c) slider_set_pane_g3_ParamLimits

0x9279,	// (0x00029ba0) slider_set_pane_g4_ParamLimits

0x9291,	// (0x00029bb8) slider_set_pane_g5_ParamLimits

0x9265,	// (0x00029b8c) slider_set_pane_g6_ParamLimits

0xe737,	// (0x0002f05e) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00030261) slider_set_pane_g_ParamLimits

0x2835,	// (0x0002315c) navi_icon_text_pane_ParamLimits

0x01f9,	// (0x00020b20) aid_fill_nsta_2_ParamLimits

0x0227,	// (0x00020b4e) aid_touch_tab_arrow_left_ParamLimits

0x023b,	// (0x00020b62) aid_touch_tab_arrow_right_ParamLimits

0x02d7,	// (0x00020bfe) clock_nsta_pane_ParamLimits

0x48a1,	// (0x000251c8) navi_icon_pane_g1_ParamLimits

0x48ad,	// (0x000251d4) navi_text_pane_t1_ParamLimits

0x5612,	// (0x00025f39) navi_icon_text_pane_g1_ParamLimits

0x561e,	// (0x00025f45) navi_icon_text_pane_t1_ParamLimits

0x11e3,	// (0x00021b0a) list_single_hc_apps_pane_g1_ParamLimits

0xf22a,	// (0x0002fb51) list_single_hc_apps_pane_g2_ParamLimits

0xfcbe,	// (0x000305e5) list_single_hc_apps_pane_g_ParamLimits

0xf243,	// (0x0002fb6a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf25f,	// (0x0002fb86) list_single_hc_apps_pane_t1_ParamLimits

0xd924,	// (0x0002e24b) popup_toolbar2_fixed_window_ParamLimits

0xd924,	// (0x0002e24b) popup_toolbar2_fixed_window

0xe526,	// (0x0002ee4d) popup_toolbar2_float_window

0x2745,	// (0x0002306c) bg_popup_sub_pane_cp27

0x686e,	// (0x00027195) grid_toolbar2_float_pane

0x2745,	// (0x0002306c) bg_popup_sub_pane_cp26

0x686e,	// (0x00027195) grid_toolbar2_fixed_pane

0x11fc,	// (0x00021b23) cell_toolbar2_fixed_pane_ParamLimits

0x11fc,	// (0x00021b23) cell_toolbar2_fixed_pane

0x1217,	// (0x00021b3e) cell_toolbar2_fixed_pane_g1

0x6876,	// (0x0002719d) toolbar2_fixed_button_pane

0x3b9a,	// (0x000244c1) toolbar2_fixed_button_pane_g1

0x3ba2,	// (0x000244c9) toolbar2_fixed_button_pane_g2

0x3baa,	// (0x000244d1) toolbar2_fixed_button_pane_g3

0x3bb2,	// (0x000244d9) toolbar2_fixed_button_pane_g4

0x3bba,	// (0x000244e1) toolbar2_fixed_button_pane_g5

0x3bc2,	// (0x000244e9) toolbar2_fixed_button_pane_g6

0x3bca,	// (0x000244f1) toolbar2_fixed_button_pane_g7

0x3bd2,	// (0x000244f9) toolbar2_fixed_button_pane_g8

0x3bda,	// (0x00024501) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00030163) toolbar2_fixed_button_pane_g

0x687e,	// (0x000271a5) cell_toolbar2_float_pane_ParamLimits

0x687e,	// (0x000271a5) cell_toolbar2_float_pane

0x688f,	// (0x000271b6) cell_toolbar2_float_pane_g1

0x6876,	// (0x0002719d) toolbar2_fixed_button_pane_cp

0x0d6e,	// (0x00021695) fep_vkb_accented_list_pane_ParamLimits

0x0d6e,	// (0x00021695) fep_vkb_accented_list_pane

0x9b79,	// (0x0002a4a0) bg_popup_fep_shadow_pane_g9

0x37c1,	// (0x000240e8) bg_popup_fep_shadow_pane_cp3

0x2f4c,	// (0x00023873) list_accented_list_pane

0x6898,	// (0x000271bf) list_single_accented_list_pane_ParamLimits

0x6898,	// (0x000271bf) list_single_accented_list_pane

0x37c1,	// (0x000240e8) list_highlight_pane_cp10

0x68a9,	// (0x000271d0) list_single_accented_list_pane_t1

0xe468,	// (0x0002ed8f) popup_slider_window_ParamLimits

0xe468,	// (0x0002ed8f) popup_slider_window

0x66d6,	// (0x00026ffd) aid_indentation_list_msg

0x12f6,	// (0x00021c1d) bg_popup_window_pane_cp19

0x690f,	// (0x00027236) popup_slider_window_g1

0x692b,	// (0x00027252) popup_slider_window_g2

0x6947,	// (0x0002726e) popup_slider_window_g3

0x0005,

0xfcc3,	// (0x000305ea) popup_slider_window_g

0x6963,	// (0x0002728a) popup_slider_window_t1

0x69a7,	// (0x000272ce) small_volume_slider_vertical_pane

0x5964,	// (0x0002628b) small_volume_slider_vertical_pane_g1

0x5964,	// (0x0002628b) small_volume_slider_vertical_pane_g2

0x69c3,	// (0x000272ea) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd5,	// (0x000305fc) small_volume_slider_vertical_pane_g

0xd8a8,	// (0x0002e1cf) area_side_right_pane_ParamLimits

0xd8a8,	// (0x0002e1cf) area_side_right_pane

0xe805,	// (0x0002f12c) aid_size_side_button_ParamLimits

0xe805,	// (0x0002f12c) aid_size_side_button

0xe81e,	// (0x0002f145) grid_sctrl_middle_pane_ParamLimits

0xe81e,	// (0x0002f145) grid_sctrl_middle_pane

0xa225,	// (0x0002ab4c) sctrl_sk_bottom_pane

0xa236,	// (0x0002ab5d) sctrl_sk_top_pane

0xa248,	// (0x0002ab6f) aid_touch_sctrl_top

0xa255,	// (0x0002ab7c) bg_sctrl_sk_pane_ParamLimits

0xa255,	// (0x0002ab7c) bg_sctrl_sk_pane

0xa263,	// (0x0002ab8a) sctrl_sk_top_pane_g1

0xa270,	// (0x0002ab97) sctrl_sk_top_pane_t1

0xa248,	// (0x0002ab6f) aid_touch_sctrl_bottom

0xa255,	// (0x0002ab7c) bg_sctrl_sk_pane_cp_ParamLimits

0xa255,	// (0x0002ab7c) bg_sctrl_sk_pane_cp

0xa28b,	// (0x0002abb2) sctrl_sk_bottom_pane_g1

0xa270,	// (0x0002ab97) sctrl_sk_bottom_pane_t1

0xe834,	// (0x0002f15b) cell_sctrl_middle_pane_ParamLimits

0xe834,	// (0x0002f15b) cell_sctrl_middle_pane

0xe845,	// (0x0002f16c) aid_touch_sctrl_middle_ParamLimits

0xe845,	// (0x0002f16c) aid_touch_sctrl_middle

0xe852,	// (0x0002f179) bg_sctrl_middle_pane_ParamLimits

0xe852,	// (0x0002f179) bg_sctrl_middle_pane

0xad39,	// (0x0002b660) cell_sctrl_middle_pane_g1_ParamLimits

0xad39,	// (0x0002b660) cell_sctrl_middle_pane_g1

0xe860,	// (0x0002f187) cell_sctrl_middle_pane_g2_ParamLimits

0xe860,	// (0x0002f187) cell_sctrl_middle_pane_g2

0x0001,

0xfce1,	// (0x00030608) cell_sctrl_middle_pane_g_ParamLimits

0xfce1,	// (0x00030608) cell_sctrl_middle_pane_g

0x3b9a,	// (0x000244c1) bg_sctrl_middle_pane_g1

0x3baa,	// (0x000244d1) bg_sctrl_middle_pane_g2

0x3ba2,	// (0x000244c9) bg_sctrl_middle_pane_g3

0x3bba,	// (0x000244e1) bg_sctrl_middle_pane_g4

0x3bb2,	// (0x000244d9) bg_sctrl_middle_pane_g5

0x3bc2,	// (0x000244e9) bg_sctrl_middle_pane_g6

0x3bca,	// (0x000244f1) bg_sctrl_middle_pane_g7

0x3bda,	// (0x00024501) bg_sctrl_middle_pane_g8

0x0007,

0xfce6,	// (0x0003060d) bg_sctrl_middle_pane_g

0x3bd2,	// (0x000244f9) bg_sctrl_middle_pane_g8_copy1

0x3b9a,	// (0x000244c1) bg_sctrl_sk_pane_g1

0x3ba2,	// (0x000244c9) bg_sctrl_sk_pane_g2

0x3baa,	// (0x000244d1) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00030163) bg_sctrl_sk_pane_g

0x2d4b,	// (0x00023672) aid_size_touch_scroll_bar

0x3bb2,	// (0x000244d9) bg_sctrl_sk_pane_g4

0x3bba,	// (0x000244e1) bg_sctrl_sk_pane_g5

0x3bc2,	// (0x000244e9) bg_sctrl_sk_pane_g6

0x3bca,	// (0x000244f1) bg_sctrl_sk_pane_g7

0x3bd2,	// (0x000244f9) bg_sctrl_sk_pane_g8

0x3bda,	// (0x00024501) bg_sctrl_sk_pane_g9

0x86da,	// (0x00029001) popup_fep_china_hwr2_fs_candidate_window

0xe063,	// (0x0002e98a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xe063,	// (0x0002e98a) popup_fep_china_hwr2_fs_control_window

0x9b99,	// (0x0002a4c0) sctrl_sk_top_pane_g2

0x0001,

0xfcdc,	// (0x00030603) sctrl_sk_top_pane_g

0x1416,	// (0x00021d3d) aid_fep_china_hwr2_fs_cell_ParamLimits

0x1416,	// (0x00021d3d) aid_fep_china_hwr2_fs_cell

0x142a,	// (0x00021d51) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x142a,	// (0x00021d51) bg_popup_fep_shadow_pane_cp4

0x1441,	// (0x00021d68) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x1441,	// (0x00021d68) bg_popup_fep_shadow_pane_cp5

0x1453,	// (0x00021d7a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x1453,	// (0x00021d7a) popup_fep_china_hwr2_fs_control_bar_grid

0x1467,	// (0x00021d8e) popup_fep_china_hwr2_fs_control_funtion_grid

0x69da,	// (0x00027301) aid_fep_china_hwr2_fs_candi_cell

0x2745,	// (0x0002306c) bg_popup_fep_shadow_pane_cp6

0x69e4,	// (0x0002730b) popup_fep_china_hwr2_fs_candidate_grid

0x146f,	// (0x00021d96) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x146f,	// (0x00021d96) cell_fep_china_hwr2_fs_funtion_grid

0x5964,	// (0x0002628b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x69cc,	// (0x000272f3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x69cc,	// (0x000272f3) cell_fep_china_hwr2_fs_funtion_grid_g1

0x69ec,	// (0x00027313) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x69ec,	// (0x00027313) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf7,	// (0x0003061e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf7,	// (0x0003061e) cell_fep_china_hwr2_fs_funtion_grid_g

0x1487,	// (0x00021dae) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x1487,	// (0x00021dae) cell_fep_china_hwr2_fs_funtion_grid_t1

0x149c,	// (0x00021dc3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x149c,	// (0x00021dc3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfc,	// (0x00030623) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfc,	// (0x00030623) cell_fep_china_hwr2_fs_funtion_grid_t

0x6a02,	// (0x00027329) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6a0a,	// (0x00027331) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6a12,	// (0x00027339) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd01,	// (0x00030628) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6a1a,	// (0x00027341) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6a1a,	// (0x00027341) cell_fep_china_hwr2_fs_candidate_grid

0x6a33,	// (0x0002735a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6a3b,	// (0x00027362) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5964,	// (0x0002628b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5964,	// (0x0002628b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1c,	// (0x00030443) cell_fep_china_hwr2_fs_candidate_grid_g

0x6a43,	// (0x0002736a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x39ff,	// (0x00024326) clock_nsta_pane_cp_24_ParamLimits

0x39ff,	// (0x00024326) clock_nsta_pane_cp_24

0x3a5c,	// (0x00024383) indicator_nsta_pane_cp_24_ParamLimits

0x3a5c,	// (0x00024383) indicator_nsta_pane_cp_24

0x47ac,	// (0x000250d3) heading_pane_g1

0x0001,

0xf8a1,	// (0x000301c8) heading_pane_g

0x0b27,	// (0x0002144e) grid_sct_catagory_button_pane

0x40e9,	// (0x00024a10) scroll_pane_cp5_ParamLimits

0x5644,	// (0x00025f6b) button_value_adjust_pane_cp5_ParamLimits

0x5644,	// (0x00025f6b) button_value_adjust_pane_cp5

0x5702,	// (0x00026029) form2_midp_time_pane_ParamLimits

0x6a51,	// (0x00027378) cell_sct_catagory_button_pane_ParamLimits

0x6a51,	// (0x00027378) cell_sct_catagory_button_pane

0x5929,	// (0x00026250) bg_button_pane_cp01_ParamLimits

0x5929,	// (0x00026250) bg_button_pane_cp01

0x5964,	// (0x0002628b) cell_sct_catagory_button_pane_g1

0xe4d7,	// (0x0002edfe) popup_tb_extension_window

0x14b8,	// (0x00021ddf) aid_size_cell_ext_ParamLimits

0x14b8,	// (0x00021ddf) aid_size_cell_ext

0x2c29,	// (0x00023550) bg_tb_trans_pane_cp1_ParamLimits

0x2c29,	// (0x00023550) bg_tb_trans_pane_cp1

0x14de,	// (0x00021e05) grid_tb_ext_pane_ParamLimits

0x14de,	// (0x00021e05) grid_tb_ext_pane

0x1514,	// (0x00021e3b) cell_tb_ext_pane_ParamLimits

0x1514,	// (0x00021e3b) cell_tb_ext_pane

0x1538,	// (0x00021e5f) cell_tb_ext_pane_g1_ParamLimits

0x1538,	// (0x00021e5f) cell_tb_ext_pane_g1

0x6a63,	// (0x0002738a) cell_tb_ext_pane_t1

0x2968,	// (0x0002328f) list_highlight_pane_cp11_ParamLimits

0x2968,	// (0x0002328f) list_highlight_pane_cp11

0xd939,	// (0x0002e260) popup_uni_indicator_window_ParamLimits

0xd939,	// (0x0002e260) popup_uni_indicator_window

0x2e03,	// (0x0002372a) bg_popup_sub_pane_cp14

0x6a7e,	// (0x000273a5) list_uniindi_pane

0x6a8a,	// (0x000273b1) uniindi_top_pane

0x2968,	// (0x0002328f) bg_uniindi_top_pane

0x6aa9,	// (0x000273d0) uniindi_top_pane_g1

0x6abf,	// (0x000273e6) uniindi_top_pane_g2

0x0003,

0xfd08,	// (0x0003062f) uniindi_top_pane_g

0x6ae9,	// (0x00027410) uniindi_top_pane_t1

0x6b13,	// (0x0002743a) list_single_uniindi_pane_ParamLimits

0x6b13,	// (0x0002743a) list_single_uniindi_pane

0x5964,	// (0x0002628b) bg_uniindi_top_pane_g1

0x6b25,	// (0x0002744c) list_single_uniindi_pane_g1

0x6b38,	// (0x0002745f) list_single_uniindi_pane_t1

0x783e,	// (0x00028165) control_bg_pane

0x6b5d,	// (0x00027484) bg_sctrl_sk_pane_cp1

0x6b66,	// (0x0002748d) bg_sctrl_sk_pane_cp2

0x6b6f,	// (0x00027496) control_bg_pane_g1

0x6b78,	// (0x0002749f) control_bg_pane_g2

0x0001,

0xfd11,	// (0x00030638) control_bg_pane_g

0x5505,	// (0x00025e2c) cell_indicator_nsta_pane_g1_ParamLimits

0x0c38,	// (0x0002155f) cell_indicator_nsta_pane_g2_ParamLimits

0xfa80,	// (0x000303a7) cell_indicator_nsta_pane_g_ParamLimits

0xbe92,	// (0x0002c7b9) form2_midp_time_pane_t1_ParamLimits

0x9862,	// (0x0002a189) main_idle_act4_pane_ParamLimits

0x9862,	// (0x0002a189) main_idle_act4_pane

0xe4d7,	// (0x0002edfe) popup_tb_extension_window_ParamLimits

0x14fe,	// (0x00021e25) tb_ext_find_pane_ParamLimits

0x14fe,	// (0x00021e25) tb_ext_find_pane

0x6b81,	// (0x000274a8) ai_gene_pane_1_cp1

0x3855,	// (0x0002417c) ai_gene_pane_2_cp1

0x6b89,	// (0x000274b0) list_single_idle_plugin_calendar_pane

0x6b92,	// (0x000274b9) list_single_idle_plugin_notification_pane

0x6b9b,	// (0x000274c2) list_single_idle_plugin_player_pane

0x1555,	// (0x00021e7c) list_single_idle_plugin_shortcut_pane_ParamLimits

0x1555,	// (0x00021e7c) list_single_idle_plugin_shortcut_pane

0x157d,	// (0x00021ea4) main_idle_act4_pane_t1

0x1593,	// (0x00021eba) main_idle_act4_pane_t2

0x0001,

0xfd16,	// (0x0003063d) main_idle_act4_pane_t

0x15a9,	// (0x00021ed0) middle_sk_idle_act4_pane_ParamLimits

0x15a9,	// (0x00021ed0) middle_sk_idle_act4_pane

0x15c5,	// (0x00021eec) popup_clock_digital_analogue_window_cp2

0x15eb,	// (0x00021f12) shortcut_wheel_idle_act4_pane_ParamLimits

0x15eb,	// (0x00021f12) shortcut_wheel_idle_act4_pane

0x5964,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g1

0x5964,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g2

0x5964,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g3

0x5964,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g4

0x5964,	// (0x0002628b) shortcut_wheel_idle_act4_pane_g5

0x6ba4,	// (0x000274cb) shortcut_wheel_idle_act4_pane_g6

0x6bac,	// (0x000274d3) shortcut_wheel_idle_act4_pane_g7

0x6bb4,	// (0x000274db) shortcut_wheel_idle_act4_pane_g8

0x6bbc,	// (0x000274e3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1b,	// (0x00030642) shortcut_wheel_idle_act4_pane_g

0xe86d,	// (0x0002f194) middle_sk_idle_act4_pane_g1_ParamLimits

0xe86d,	// (0x0002f194) middle_sk_idle_act4_pane_g1

0x1666,	// (0x00021f8d) middle_sk_idle_act4_pane_g2_ParamLimits

0x1666,	// (0x00021f8d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3e,	// (0x00030665) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3e,	// (0x00030665) middle_sk_idle_act4_pane_g

0x167e,	// (0x00021fa5) middle_sk_idle_act4_pane_t1_ParamLimits

0x167e,	// (0x00021fa5) middle_sk_idle_act4_pane_t1

0x16ad,	// (0x00021fd4) grid_ai_shortcut_pane_ParamLimits

0x16ad,	// (0x00021fd4) grid_ai_shortcut_pane

0x16ca,	// (0x00021ff1) list_highlight_pane_cp16_ParamLimits

0x16ca,	// (0x00021ff1) list_highlight_pane_cp16

0x16d7,	// (0x00021ffe) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x16d7,	// (0x00021ffe) list_single_idle_plugin_shortcut_pane_g1

0x16e3,	// (0x0002200a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x16e3,	// (0x0002200a) list_single_idle_plugin_shortcut_pane_g2

0x16ff,	// (0x00022026) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x16ff,	// (0x00022026) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd43,	// (0x0003066a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd43,	// (0x0003066a) list_single_idle_plugin_shortcut_pane_g

0x1714,	// (0x0002203b) cell_ai_shortcut_pane_ParamLimits

0x1714,	// (0x0002203b) cell_ai_shortcut_pane

0x172a,	// (0x00022051) cell_ai_shortcut_pane_g1_ParamLimits

0x172a,	// (0x00022051) cell_ai_shortcut_pane_g1

0x6b81,	// (0x000274a8) ai_gene_pane_1_cp2

0x6bc4,	// (0x000274eb) ai_gene_pane_2_cp2

0x6bcc,	// (0x000274f3) list_highlight_pane_cp15

0x6bd5,	// (0x000274fc) list_single_idle_plugin_calendar_pane_g1

0x6bcc,	// (0x000274f3) list_highlight_pane_cp17

0x6bdd,	// (0x00027504) list_single_idle_plugin_calendar_pane_g1_copy1

0x6be5,	// (0x0002750c) list_single_idle_plugin_player_pane_g1

0x4fb3,	// (0x000258da) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4a,	// (0x00030671) list_single_idle_plugin_player_pane_g

0x6bed,	// (0x00027514) list_single_idle_plugin_player_pane_t1

0x6bfb,	// (0x00027522) list_single_idle_plugin_player_pane_t2

0x6c09,	// (0x00027530) list_single_idle_plugin_player_pane_t3

0x6c17,	// (0x0002753e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4f,	// (0x00030676) list_single_idle_plugin_player_pane_t

0x6c25,	// (0x0002754c) wait_bar_pane_cp15

0x6c2d,	// (0x00027554) grid_ai_notification_pane

0x4fb3,	// (0x000258da) list_single_idle_plugin_notification_pane_g1

0x174c,	// (0x00022073) cell_ai_notification_pane_ParamLimits

0x174c,	// (0x00022073) cell_ai_notification_pane

0x6c36,	// (0x0002755d) cell_ai_notification_pane_g1

0x6c3e,	// (0x00027565) cell_ai_notification_pane_t1

0x1759,	// (0x00022080) tb_ext_find_button_pane

0x1761,	// (0x00022088) tb_ext_find_pane_g1

0x1769,	// (0x00022090) tb_ext_find_pane_t1

0x3328,	// (0x00023c4f) tb_ext_find_button_pane_g1

0x6c4c,	// (0x00027573) tb_ext_find_button_pane_g2

0x0001,

0xfd58,	// (0x0003067f) tb_ext_find_button_pane_g

0x157d,	// (0x00021ea4) main_idle_act4_pane_t1_ParamLimits

0x1593,	// (0x00021eba) main_idle_act4_pane_t2_ParamLimits

0xfd16,	// (0x0003063d) main_idle_act4_pane_t_ParamLimits

0x15c5,	// (0x00021eec) popup_clock_digital_analogue_window_cp2_ParamLimits

0x15db,	// (0x00021f02) sat_plugin_idle_act4_pane_ParamLimits

0x15db,	// (0x00021f02) sat_plugin_idle_act4_pane

0x1777,	// (0x0002209e) sat_plugin_idle_act4_pane_t1_ParamLimits

0x1777,	// (0x0002209e) sat_plugin_idle_act4_pane_t1

0x178f,	// (0x000220b6) sat_plugin_idle_act4_pane_t2_ParamLimits

0x178f,	// (0x000220b6) sat_plugin_idle_act4_pane_t2

0x17a7,	// (0x000220ce) sat_plugin_idle_act4_pane_t3_ParamLimits

0x17a7,	// (0x000220ce) sat_plugin_idle_act4_pane_t3

0x17bf,	// (0x000220e6) sat_plugin_idle_act4_pane_t4_ParamLimits

0x17bf,	// (0x000220e6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5d,	// (0x00030684) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5d,	// (0x00030684) sat_plugin_idle_act4_pane_t

0x7901,	// (0x00028228) popup_battery_window_ParamLimits

0x7901,	// (0x00028228) popup_battery_window

0x2968,	// (0x0002328f) bg_popup_sub_pane_cp25_ParamLimits

0x2968,	// (0x0002328f) bg_popup_sub_pane_cp25

0x6c55,	// (0x0002757c) popup_battery_window_g1_ParamLimits

0x6c55,	// (0x0002757c) popup_battery_window_g1

0x6c61,	// (0x00027588) popup_battery_window_t1_ParamLimits

0x6c61,	// (0x00027588) popup_battery_window_t1

0x6c73,	// (0x0002759a) popup_battery_window_t2_ParamLimits

0x6c73,	// (0x0002759a) popup_battery_window_t2

0x0001,

0xfd66,	// (0x0003068d) popup_battery_window_t_ParamLimits

0xfd66,	// (0x0003068d) popup_battery_window_t

0xf418,	// (0x0002fd3f) midp_canvas_pane_ParamLimits

0xf46d,	// (0x0002fd94) midp_keypad_pane_ParamLimits

0xf46d,	// (0x0002fd94) midp_keypad_pane

0x2f9c,	// (0x000238c3) main_midp_pane_ParamLimits

0x55e0,	// (0x00025f07) signal_pane_g2_cp_ParamLimits

0x17d7,	// (0x000220fe) aid_size_cell_midp_keypad_ParamLimits

0x17d7,	// (0x000220fe) aid_size_cell_midp_keypad

0x17f5,	// (0x0002211c) midp_keyp_game_grid_pane_ParamLimits

0x17f5,	// (0x0002211c) midp_keyp_game_grid_pane

0x1814,	// (0x0002213b) midp_keyp_rocker_pane_ParamLimits

0x1814,	// (0x0002213b) midp_keyp_rocker_pane

0x1855,	// (0x0002217c) midp_keyp_sk_left_pane_ParamLimits

0x1855,	// (0x0002217c) midp_keyp_sk_left_pane

0x18a7,	// (0x000221ce) midp_keyp_sk_right_pane_ParamLimits

0x18a7,	// (0x000221ce) midp_keyp_sk_right_pane

0x2745,	// (0x0002306c) bg_button_pane_cp03

0x18f3,	// (0x0002221a) midp_keyp_sk_left_pane_g1

0x2745,	// (0x0002306c) bg_button_pane_cp04

0x18f3,	// (0x0002221a) midp_keyp_sk_right_pane_g1

0x5964,	// (0x0002628b) midp_keyp_rocker_pane_g1

0x18fc,	// (0x00022223) keyp_game_cell_pane_ParamLimits

0x18fc,	// (0x00022223) keyp_game_cell_pane

0x2745,	// (0x0002306c) bg_button_pane_cp02

0x191e,	// (0x00022245) keyp_game_cell_pane_g1

0xd8ea,	// (0x0002e211) popup_fep_vkb2_window_ParamLimits

0xd8ea,	// (0x0002e211) popup_fep_vkb2_window

0xe87b,	// (0x0002f1a2) aid_size_cell_vkb2_ParamLimits

0xe87b,	// (0x0002f1a2) aid_size_cell_vkb2

0xe8a7,	// (0x0002f1ce) popup_fep_vkb2_window_g1_ParamLimits

0xe8a7,	// (0x0002f1ce) popup_fep_vkb2_window_g1

0xe8f7,	// (0x0002f21e) vkb2_area_bottom_pane_ParamLimits

0xe8f7,	// (0x0002f21e) vkb2_area_bottom_pane

0xe935,	// (0x0002f25c) vkb2_area_keypad_pane_ParamLimits

0xe935,	// (0x0002f25c) vkb2_area_keypad_pane

0xe973,	// (0x0002f29a) vkb2_area_top_pane_ParamLimits

0xe973,	// (0x0002f29a) vkb2_area_top_pane

0xe9f5,	// (0x0002f31c) vkb2_top_entry_pane_ParamLimits

0xe9f5,	// (0x0002f31c) vkb2_top_entry_pane

0xea22,	// (0x0002f349) vkb2_top_grid_left_pane_ParamLimits

0xea22,	// (0x0002f349) vkb2_top_grid_left_pane

0xea43,	// (0x0002f36a) vkb2_top_grid_right_pane_ParamLimits

0xea43,	// (0x0002f36a) vkb2_top_grid_right_pane

0xa93a,	// (0x0002b261) vkb2_cell_keypad_pane_ParamLimits

0xa93a,	// (0x0002b261) vkb2_cell_keypad_pane

0xea8b,	// (0x0002f3b2) vkb2_area_bottom_grid_pane_ParamLimits

0xea8b,	// (0x0002f3b2) vkb2_area_bottom_grid_pane

0xeab1,	// (0x0002f3d8) vkb2_area_bottom_pane_g1_ParamLimits

0xeab1,	// (0x0002f3d8) vkb2_area_bottom_pane_g1

0xead7,	// (0x0002f3fe) vkb2_area_bottom_pane_g2_ParamLimits

0xead7,	// (0x0002f3fe) vkb2_area_bottom_pane_g2

0xeb08,	// (0x0002f42f) vkb2_area_bottom_pane_g3_ParamLimits

0xeb08,	// (0x0002f42f) vkb2_area_bottom_pane_g3

0x0002,

0xfd6b,	// (0x00030692) vkb2_area_bottom_pane_g_ParamLimits

0xfd6b,	// (0x00030692) vkb2_area_bottom_pane_g

0xaab2,	// (0x0002b3d9) vkb2_top_cell_left_pane_ParamLimits

0xaab2,	// (0x0002b3d9) vkb2_top_cell_left_pane

0x1c0a,	// (0x00022531) vkb2_top_entry_pane_g1_ParamLimits

0x1c0a,	// (0x00022531) vkb2_top_entry_pane_g1

0x1c18,	// (0x0002253f) vkb2_top_entry_pane_t1_ParamLimits

0x1c18,	// (0x0002253f) vkb2_top_entry_pane_t1

0x6c98,	// (0x000275bf) vkb2_top_entry_pane_t2_ParamLimits

0x6c98,	// (0x000275bf) vkb2_top_entry_pane_t2

0x6cca,	// (0x000275f1) vkb2_top_entry_pane_t3_ParamLimits

0x6cca,	// (0x000275f1) vkb2_top_entry_pane_t3

0x0002,

0xfd72,	// (0x00030699) vkb2_top_entry_pane_t_ParamLimits

0xfd72,	// (0x00030699) vkb2_top_entry_pane_t

0xeb5e,	// (0x0002f485) vkb2_top_grid_right_pane_g1_ParamLimits

0xeb5e,	// (0x0002f485) vkb2_top_grid_right_pane_g1

0xab55,	// (0x0002b47c) vkb2_top_grid_right_pane_g2_ParamLimits

0xab55,	// (0x0002b47c) vkb2_top_grid_right_pane_g2

0xab6d,	// (0x0002b494) vkb2_top_grid_right_pane_g3_ParamLimits

0xab6d,	// (0x0002b494) vkb2_top_grid_right_pane_g3

0xeb74,	// (0x0002f49b) vkb2_top_grid_right_pane_g4_ParamLimits

0xeb74,	// (0x0002f49b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd79,	// (0x000306a0) vkb2_top_grid_right_pane_g_ParamLimits

0xfd79,	// (0x000306a0) vkb2_top_grid_right_pane_g

0xab9b,	// (0x0002b4c2) vkb2_top_cell_left_pane_g1

0xabb2,	// (0x0002b4d9) vkb2_cell_keypad_pane_g1_ParamLimits

0xabb2,	// (0x0002b4d9) vkb2_cell_keypad_pane_g1

0x6ce0,	// (0x00027607) vkb2_cell_keypad_pane_t1_ParamLimits

0x6ce0,	// (0x00027607) vkb2_cell_keypad_pane_t1

0xabc0,	// (0x0002b4e7) vkb2_cell_bottom_grid_pane_ParamLimits

0xabc0,	// (0x0002b4e7) vkb2_cell_bottom_grid_pane

0xabf9,	// (0x0002b520) vkb2_cell_bottom_grid_pane_g1

0x160a,	// (0x00021f31) aid_call2_pane_cp02

0x1612,	// (0x00021f39) aid_call_pane_cp02

0x161a,	// (0x00021f41) clock_digital_number_pane_cp10

0x1622,	// (0x00021f49) clock_digital_number_pane_cp11

0x162a,	// (0x00021f51) clock_digital_number_pane_cp12

0x1632,	// (0x00021f59) clock_digital_number_pane_cp13

0x163a,	// (0x00021f61) clock_digital_separator_pane_cp10

0x3328,	// (0x00023c4f) popup_clock_digital_analogue_window_cp2_g1

0x3328,	// (0x00023c4f) popup_clock_digital_analogue_window_cp2_g2

0x1642,	// (0x00021f69) popup_clock_digital_analogue_window_cp2_g3

0x3328,	// (0x00023c4f) popup_clock_digital_analogue_window_cp2_g4

0x1642,	// (0x00021f69) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2e,	// (0x00030655) popup_clock_digital_analogue_window_cp2_g

0x164a,	// (0x00021f71) popup_clock_digital_analogue_window_cp2_t1

0x1658,	// (0x00021f7f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd39,	// (0x00030660) popup_clock_digital_analogue_window_cp2_t

0x5964,	// (0x0002628b) clock_digital_number_pane_cp10_g1

0x5964,	// (0x0002628b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1c,	// (0x00030443) clock_digital_number_pane_cp10_g

0x5964,	// (0x0002628b) clock_digital_separator_pane_cp10_g1

0x5964,	// (0x0002628b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1c,	// (0x00030443) clock_digital_separator_pane_cp10_g

0x6acb,	// (0x000273f2) uniindi_top_pane_g3

0x6adc,	// (0x00027403) uniindi_top_pane_g4

0xa9a5,	// (0x0002b2cc) vkb2_row_keypad_pane_ParamLimits

0xa9a5,	// (0x0002b2cc) vkb2_row_keypad_pane

0xac15,	// (0x0002b53c) vkb2_cell_t_keypad_pane_ParamLimits

0xac15,	// (0x0002b53c) vkb2_cell_t_keypad_pane

0xac22,	// (0x0002b549) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xac22,	// (0x0002b549) vkb2_cell_t_keypad_pane_cp08

0xac32,	// (0x0002b559) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xac32,	// (0x0002b559) vkb2_cell_t_keypad_pane_cp09

0xac43,	// (0x0002b56a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xac43,	// (0x0002b56a) vkb2_cell_t_keypad_pane_cp01

0xac53,	// (0x0002b57a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xac53,	// (0x0002b57a) vkb2_cell_t_keypad_pane_cp02

0xac63,	// (0x0002b58a) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xac63,	// (0x0002b58a) vkb2_cell_t_keypad_pane_cp03

0xac73,	// (0x0002b59a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xac73,	// (0x0002b59a) vkb2_cell_t_keypad_pane_cp04

0xac83,	// (0x0002b5aa) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xac83,	// (0x0002b5aa) vkb2_cell_t_keypad_pane_cp05

0xac93,	// (0x0002b5ba) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xac93,	// (0x0002b5ba) vkb2_cell_t_keypad_pane_cp06

0xaca3,	// (0x0002b5ca) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xaca3,	// (0x0002b5ca) vkb2_cell_t_keypad_pane_cp07

0xacb3,	// (0x0002b5da) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xacb3,	// (0x0002b5da) vkb2_cell_t_keypad_pane_cp10

0x9b99,	// (0x0002a4c0) vkb2_cell_t_keypad_pane_g1

0xc10a,	// (0x0002ca31) vkb2_cell_t_keypad_pane_t1

0x783e,	// (0x00028165) popup_grid_graphic2_window

0x1c7d,	// (0x000225a4) aid_size_cell_graphic2_ParamLimits

0x1c7d,	// (0x000225a4) aid_size_cell_graphic2

0x1cbb,	// (0x000225e2) bg_popup_window_pane_cp21_ParamLimits

0x1cbb,	// (0x000225e2) bg_popup_window_pane_cp21

0x1cc9,	// (0x000225f0) graphic2_pages_pane_ParamLimits

0x1cc9,	// (0x000225f0) graphic2_pages_pane

0x1d12,	// (0x00022639) grid_graphic2_control_pane_ParamLimits

0x1d12,	// (0x00022639) grid_graphic2_control_pane

0x1d50,	// (0x00022677) grid_graphic2_pane_ParamLimits

0x1d50,	// (0x00022677) grid_graphic2_pane

0x1dbf,	// (0x000226e6) cell_graphic2_pane

0x783e,	// (0x00028165) main_comp_mode_pane

0x6744,	// (0x0002706b) list_ai3_gene_pane_ParamLimits

0x12f6,	// (0x00021c1d) bg_popup_window_pane_cp19_ParamLimits

0x68b7,	// (0x000271de) bg_touch_area_indi_pane_ParamLimits

0x68b7,	// (0x000271de) bg_touch_area_indi_pane

0x68cd,	// (0x000271f4) bg_touch_area_indi_pane_cp01_ParamLimits

0x68cd,	// (0x000271f4) bg_touch_area_indi_pane_cp01

0x68e3,	// (0x0002720a) bg_touch_area_indi_pane_cp02_ParamLimits

0x68e3,	// (0x0002720a) bg_touch_area_indi_pane_cp02

0x68f9,	// (0x00027220) bg_touch_area_indi_pane_cp03_ParamLimits

0x68f9,	// (0x00027220) bg_touch_area_indi_pane_cp03

0x690f,	// (0x00027236) popup_slider_window_g1_ParamLimits

0x692b,	// (0x00027252) popup_slider_window_g2_ParamLimits

0x6947,	// (0x0002726e) popup_slider_window_g3_ParamLimits

0xfcc3,	// (0x000305ea) popup_slider_window_g_ParamLimits

0x6963,	// (0x0002728a) popup_slider_window_t1_ParamLimits

0x69a7,	// (0x000272ce) small_volume_slider_vertical_pane_ParamLimits

0x1dbf,	// (0x000226e6) cell_graphic2_pane_ParamLimits

0x1e0a,	// (0x00022731) bg_button_pane_cp10_ParamLimits

0x1e0a,	// (0x00022731) bg_button_pane_cp10

0x1e1b,	// (0x00022742) bg_button_pane_cp11_ParamLimits

0x1e1b,	// (0x00022742) bg_button_pane_cp11

0x1e2c,	// (0x00022753) graphic2_pages_pane_g1_ParamLimits

0x1e2c,	// (0x00022753) graphic2_pages_pane_g1

0x1e47,	// (0x0002276e) graphic2_pages_pane_g2_ParamLimits

0x1e47,	// (0x0002276e) graphic2_pages_pane_g2

0x0001,

0xfd87,	// (0x000306ae) graphic2_pages_pane_g_ParamLimits

0xfd87,	// (0x000306ae) graphic2_pages_pane_g

0x1e5f,	// (0x00022786) graphic2_pages_pane_t1_ParamLimits

0x1e5f,	// (0x00022786) graphic2_pages_pane_t1

0x1e77,	// (0x0002279e) cell_graphic2_control_pane_ParamLimits

0x1e77,	// (0x0002279e) cell_graphic2_control_pane

0x1ea1,	// (0x000227c8) cell_graphic2_pane_g1_ParamLimits

0x1ea1,	// (0x000227c8) cell_graphic2_pane_g1

0xeb8a,	// (0x0002f4b1) cell_graphic2_pane_g2_ParamLimits

0xeb8a,	// (0x0002f4b1) cell_graphic2_pane_g2

0x1eae,	// (0x000227d5) cell_graphic2_pane_g3_ParamLimits

0x1eae,	// (0x000227d5) cell_graphic2_pane_g3

0xeb97,	// (0x0002f4be) cell_graphic2_pane_g4_ParamLimits

0xeb97,	// (0x0002f4be) cell_graphic2_pane_g4

0x1ebb,	// (0x000227e2) cell_graphic2_pane_g5_ParamLimits

0x1ebb,	// (0x000227e2) cell_graphic2_pane_g5

0x0004,

0xfd8c,	// (0x000306b3) cell_graphic2_pane_g_ParamLimits

0xfd8c,	// (0x000306b3) cell_graphic2_pane_g

0x1ed8,	// (0x000227ff) cell_graphic2_pane_t1_ParamLimits

0x1ed8,	// (0x000227ff) cell_graphic2_pane_t1

0x47a0,	// (0x000250c7) grid_highlight_pane_cp11_ParamLimits

0x47a0,	// (0x000250c7) grid_highlight_pane_cp11

0x2968,	// (0x0002328f) bg_button_pane_cp05

0x1f0d,	// (0x00022834) cell_graphic2_control_pane_g1

0x5964,	// (0x0002628b) bg_touch_area_indi_pane_g1

0xc11c,	// (0x0002ca43) aid_cmod_rocker_key_size

0xc126,	// (0x0002ca4d) aid_cmode_itu_key_size

0xc130,	// (0x0002ca57) main_cmode_video_pane

0xc138,	// (0x0002ca5f) main_comp_mode_itu_pane

0xc142,	// (0x0002ca69) main_comp_mode_rocker_pane

0xc14a,	// (0x0002ca71) cell_cmode_rocker_pane_ParamLimits

0xc14a,	// (0x0002ca71) cell_cmode_rocker_pane

0xc15c,	// (0x0002ca83) cell_cmode_itu_pane_ParamLimits

0xc15c,	// (0x0002ca83) cell_cmode_itu_pane

0x2e03,	// (0x0002372a) bg_button_pane_cp06_ParamLimits

0x2e03,	// (0x0002372a) bg_button_pane_cp06

0x5b90,	// (0x000264b7) cell_cmode_rocker_pane_g1_ParamLimits

0x5b90,	// (0x000264b7) cell_cmode_rocker_pane_g1

0x69cc,	// (0x000272f3) cell_cmode_rocker_pane_g2_ParamLimits

0x69cc,	// (0x000272f3) cell_cmode_rocker_pane_g2

0x0001,

0xfd9c,	// (0x000306c3) cell_cmode_rocker_pane_g_ParamLimits

0xfd9c,	// (0x000306c3) cell_cmode_rocker_pane_g

0x2745,	// (0x0002306c) bg_button_pane_cp07

0xc171,	// (0x0002ca98) cell_cmode_itu_pane_g1

0xc17a,	// (0x0002caa1) cell_cmode_itu_pane_t1

0xc188,	// (0x0002caaf) cell_cmode_itu_pane_t2

0x0001,

0xfda1,	// (0x000306c8) cell_cmode_itu_pane_t

0x6b4d,	// (0x00027474) aid_touch_ctrl_left

0x6b55,	// (0x0002747c) aid_touch_ctrl_right

0x2745,	// (0x0002306c) compa_mode_pane

0x1f35,	// (0x0002285c) aid_cmod_rocker_key_size_cp

0x1f3f,	// (0x00022866) aid_cmode_itu_key_size_cp

0xc196,	// (0x0002cabd) compa_mode_pane_g1

0xc19e,	// (0x0002cac5) compa_mode_pane_g2

0xc1a6,	// (0x0002cacd) compa_mode_pane_g3

0x0002,

0xfda6,	// (0x000306cd) compa_mode_pane_g

0x1f49,	// (0x00022870) main_comp_mode_itu_pane_cp

0x1f53,	// (0x0002287a) main_comp_mode_rocker_pane_cp

0x1f5d,	// (0x00022884) cell_cmode_itu_pane_cp_ParamLimits

0x1f5d,	// (0x00022884) cell_cmode_itu_pane_cp

0x1f72,	// (0x00022899) cell_cmode_rocker_pane_cp_ParamLimits

0x1f72,	// (0x00022899) cell_cmode_rocker_pane_cp

0x2e03,	// (0x0002372a) bg_button_pane_cp06_cp_ParamLimits

0x2e03,	// (0x0002372a) bg_button_pane_cp06_cp

0x5b90,	// (0x000264b7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5b90,	// (0x000264b7) cell_cmode_rocker_pane_g1_cp

0x5964,	// (0x0002628b) cell_cmode_rocker_pane_g2_cp

0x2745,	// (0x0002306c) bg_button_pane_cp07_cp

0x1f84,	// (0x000228ab) cell_cmode_itu_pane_g1_cp

0x1f8d,	// (0x000228b4) cell_cmode_itu_pane_t1_cp

0x1f9b,	// (0x000228c2) cell_cmode_itu_pane_t2_cp

0x0a63,	// (0x0002138a) settings_code_pane_cp2

0x2835,	// (0x0002315c) bg_popup_window_pane_cp3_ParamLimits

0x2b66,	// (0x0002348d) heading_pane_cp3_ParamLimits

0x2b75,	// (0x0002349c) listscroll_popup_graphic_pane_ParamLimits

0x9870,	// (0x0002a197) fep_hwr_aid_pane_ParamLimits

0xa248,	// (0x0002ab6f) aid_touch_sctrl_top_ParamLimits

0xa263,	// (0x0002ab8a) sctrl_sk_top_pane_g1_ParamLimits

0x9b99,	// (0x0002a4c0) sctrl_sk_top_pane_g2_ParamLimits

0xfcdc,	// (0x00030603) sctrl_sk_top_pane_g_ParamLimits

0xa270,	// (0x0002ab97) sctrl_sk_top_pane_t1_ParamLimits

0xa248,	// (0x0002ab6f) aid_touch_sctrl_bottom_ParamLimits

0xa270,	// (0x0002ab97) sctrl_sk_bottom_pane_t1_ParamLimits

0x6a97,	// (0x000273be) aid_area_touch_clock

0xe9b5,	// (0x0002f2dc) aid_vkb2_area_top_pane_cell_ParamLimits

0xe9b5,	// (0x0002f2dc) aid_vkb2_area_top_pane_cell

0xea64,	// (0x0002f38b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xea64,	// (0x0002f38b) aid_vkb2_area_bottom_pane_cell

0x6c90,	// (0x000275b7) popup_char_count_window

0xc1ae,	// (0x0002cad5) popup_char_count_window_g1

0xc1b7,	// (0x0002cade) popup_char_count_window_g2

0xc1c0,	// (0x0002cae7) popup_char_count_window_g3

0x0002,

0xfdad,	// (0x000306d4) popup_char_count_window_g

0xc1c9,	// (0x0002caf0) popup_char_count_window_t1

0xa783,	// (0x0002b0aa) popup_fep_char_preview_window_ParamLimits

0xa783,	// (0x0002b0aa) popup_fep_char_preview_window

0xe9d5,	// (0x0002f2fc) vkb2_top_candi_pane_ParamLimits

0xe9d5,	// (0x0002f2fc) vkb2_top_candi_pane

0x1fa9,	// (0x000228d0) cell_vkb2_top_candi_pane_ParamLimits

0x1fa9,	// (0x000228d0) cell_vkb2_top_candi_pane

0xacc8,	// (0x0002b5ef) bg_popup_fep_char_preview_window_ParamLimits

0xacc8,	// (0x0002b5ef) bg_popup_fep_char_preview_window

0xacd6,	// (0x0002b5fd) popup_fep_char_preview_window_t1_ParamLimits

0xacd6,	// (0x0002b5fd) popup_fep_char_preview_window_t1

0xc1d7,	// (0x0002cafe) bg_popup_fep_char_preview_window_g1

0xc1df,	// (0x0002cb06) bg_popup_fep_char_preview_window_g2

0xc1e7,	// (0x0002cb0e) bg_popup_fep_char_preview_window_g3

0xc1ef,	// (0x0002cb16) bg_popup_fep_char_preview_window_g4

0xc1f7,	// (0x0002cb1e) bg_popup_fep_char_preview_window_g5

0xc1ff,	// (0x0002cb26) bg_popup_fep_char_preview_window_g6

0xc207,	// (0x0002cb2e) bg_popup_fep_char_preview_window_g7

0xc20f,	// (0x0002cb36) bg_popup_fep_char_preview_window_g8

0xc217,	// (0x0002cb3e) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb4,	// (0x000306db) bg_popup_fep_char_preview_window_g

0x9b99,	// (0x0002a4c0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x9b99,	// (0x0002a4c0) cell_vkb2_top_candi_pane_g1

0x9ba7,	// (0x0002a4ce) cell_vkb2_top_candi_pane_g2_ParamLimits

0x9ba7,	// (0x0002a4ce) cell_vkb2_top_candi_pane_g2

0xbea5,	// (0x0002c7cc) cell_vkb2_top_candi_pane_g3_ParamLimits

0xbea5,	// (0x0002c7cc) cell_vkb2_top_candi_pane_g3

0xad18,	// (0x0002b63f) cell_vkb2_top_candi_pane_g4_ParamLimits

0xad18,	// (0x0002b63f) cell_vkb2_top_candi_pane_g4

0x5de0,	// (0x00026707) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5de0,	// (0x00026707) cell_vkb2_top_candi_pane_g5

0xad39,	// (0x0002b660) cell_vkb2_top_candi_pane_g6_ParamLimits

0xad39,	// (0x0002b660) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc9,	// (0x000306f0) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc9,	// (0x000306f0) cell_vkb2_top_candi_pane_g

0xad47,	// (0x0002b66e) cell_vkb2_top_candi_pane_t1

0x9245,	// (0x00029b6c) aid_size_touch_slider_mark_ParamLimits

0x9245,	// (0x00029b6c) aid_size_touch_slider_mark

0x1cfd,	// (0x00022624) grid_graphic2_catg_pane_ParamLimits

0x1cfd,	// (0x00022624) grid_graphic2_catg_pane

0x1d94,	// (0x000226bb) popup_grid_graphic2_window_t1_ParamLimits

0x1d94,	// (0x000226bb) popup_grid_graphic2_window_t1

0x1da9,	// (0x000226d0) popup_grid_graphic2_window_t2_ParamLimits

0x1da9,	// (0x000226d0) popup_grid_graphic2_window_t2

0x0001,

0xfd82,	// (0x000306a9) popup_grid_graphic2_window_t_ParamLimits

0xfd82,	// (0x000306a9) popup_grid_graphic2_window_t

0x2968,	// (0x0002328f) bg_button_pane_cp05_ParamLimits

0x1f0d,	// (0x00022834) cell_graphic2_control_pane_g1_ParamLimits

0x6b13,	// (0x0002743a) cell_graphic2_catg_pane_ParamLimits

0x6b13,	// (0x0002743a) cell_graphic2_catg_pane

0x2745,	// (0x0002306c) bg_button_pane_cp12

0x1ff5,	// (0x0002291c) cell_graphic2_catg_pane_g1

0x6a63,	// (0x0002738a) cell_tb_ext_pane_t1_ParamLimits

0xab12,	// (0x0002b439) vkb2_top_cell_right_narrow_pane_ParamLimits

0xab12,	// (0x0002b439) vkb2_top_cell_right_narrow_pane

0xab2a,	// (0x0002b451) vkb2_top_cell_right_wide_pane_ParamLimits

0xab2a,	// (0x0002b451) vkb2_top_cell_right_wide_pane

0x9862,	// (0x0002a189) bg_vkb2_func_pane_ParamLimits

0x9862,	// (0x0002a189) bg_vkb2_func_pane

0xab9b,	// (0x0002b4c2) vkb2_top_cell_left_pane_g1_ParamLimits

0x9862,	// (0x0002a189) bg_vkb2_fuc_pane_cp03_ParamLimits

0x9862,	// (0x0002a189) bg_vkb2_fuc_pane_cp03

0xabf9,	// (0x0002b520) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3baa,	// (0x000244d1) bg_vkb2_func_pane_g1

0x3ba2,	// (0x000244c9) bg_vkb2_func_pane_g2

0x3bb2,	// (0x000244d9) bg_vkb2_func_pane_g3

0x3bba,	// (0x000244e1) bg_vkb2_func_pane_g4

0x3bc2,	// (0x000244e9) bg_vkb2_func_pane_g5

0x3bca,	// (0x000244f1) bg_vkb2_func_pane_g6

0x3bda,	// (0x00024501) bg_vkb2_func_pane_g7

0x3bd2,	// (0x000244f9) bg_vkb2_func_pane_g8

0x3b9a,	// (0x000244c1) bg_vkb2_func_pane_g9

0x0008,

0xfdd6,	// (0x000306fd) bg_vkb2_func_pane_g

0x9862,	// (0x0002a189) bg_vkb2_fuc_pane_cp01_ParamLimits

0x9862,	// (0x0002a189) bg_vkb2_fuc_pane_cp01

0xab9b,	// (0x0002b4c2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xab9b,	// (0x0002b4c2) vkb2_top_cell_right_wide_pane_g1

0x9862,	// (0x0002a189) bg_vkb2_fuc_pane_cp02_ParamLimits

0x9862,	// (0x0002a189) bg_vkb2_fuc_pane_cp02

0xabf9,	// (0x0002b520) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xabf9,	// (0x0002b520) vkb2_top_cell_right_narrow_pane_g1

0x1244,	// (0x00021b6b) aid_touch_area_decrease_ParamLimits

0x1244,	// (0x00021b6b) aid_touch_area_decrease

0x1272,	// (0x00021b99) aid_touch_area_increase_ParamLimits

0x1272,	// (0x00021b99) aid_touch_area_increase

0x129a,	// (0x00021bc1) aid_touch_area_mute_ParamLimits

0x129a,	// (0x00021bc1) aid_touch_area_mute

0x12c2,	// (0x00021be9) aid_touch_area_slider_ParamLimits

0x12c2,	// (0x00021be9) aid_touch_area_slider

0x1302,	// (0x00021c29) popup_slider_window_g4_ParamLimits

0x1302,	// (0x00021c29) popup_slider_window_g4

0x132a,	// (0x00021c51) popup_slider_window_g5_ParamLimits

0x132a,	// (0x00021c51) popup_slider_window_g5

0x135e,	// (0x00021c85) popup_slider_window_g6_ParamLimits

0x135e,	// (0x00021c85) popup_slider_window_g6

0x698f,	// (0x000272b6) popup_slider_window_t2_ParamLimits

0x698f,	// (0x000272b6) popup_slider_window_t2

0x0001,

0xfcd0,	// (0x000305f7) popup_slider_window_t_ParamLimits

0xfcd0,	// (0x000305f7) popup_slider_window_t

0x137a,	// (0x00021ca1) slider_pane_ParamLimits

0x137a,	// (0x00021ca1) slider_pane

0xc21f,	// (0x0002cb46) slider_pane_g1_ParamLimits

0xc21f,	// (0x0002cb46) slider_pane_g1

0xc233,	// (0x0002cb5a) slider_pane_g2_ParamLimits

0xc233,	// (0x0002cb5a) slider_pane_g2

0xc249,	// (0x0002cb70) slider_pane_g3_ParamLimits

0xc249,	// (0x0002cb70) slider_pane_g3

0x0003,

0xfde9,	// (0x00030710) slider_pane_g_ParamLimits

0xfde9,	// (0x00030710) slider_pane_g

0xe513,	// (0x0002ee3a) popup_tb_float_extension_window_ParamLimits

0xe513,	// (0x0002ee3a) popup_tb_float_extension_window

0xc275,	// (0x0002cb9c) aid_size_cell_tb_float_ext

0x2745,	// (0x0002306c) bg_popup_sub_window_cp28

0xc280,	// (0x0002cba7) grid_tb_float_ext_pane

0xc288,	// (0x0002cbaf) cell_tb_float_ext_pane_ParamLimits

0xc288,	// (0x0002cbaf) cell_tb_float_ext_pane

0xc2a0,	// (0x0002cbc7) cell_tb_float_ext_pane_g1

0xc2a9,	// (0x0002cbd0) grid_highlight_pane_cp12

0xe778,	// (0x0002f09f) cell_last_hwr_side_pane_ParamLimits

0xe778,	// (0x0002f09f) cell_last_hwr_side_pane

0x5964,	// (0x0002628b) cell_last_hwr_side_pane_g1

0xc2b2,	// (0x0002cbd9) cell_last_hwr_side_pane_g2

0x0001,

0xfdf2,	// (0x00030719) cell_last_hwr_side_pane_g

0xeb39,	// (0x0002f460) vkb2_area_bottom_space_btn_pane_ParamLimits

0xeb39,	// (0x0002f460) vkb2_area_bottom_space_btn_pane

0x9b99,	// (0x0002a4c0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xc10a,	// (0x0002ca31) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xad47,	// (0x0002b66e) cell_vkb2_top_candi_pane_t1_ParamLimits

0xad5e,	// (0x0002b685) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xad5e,	// (0x0002b685) vkb2_area_bottom_space_btn_pane_g1

0xad94,	// (0x0002b6bb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xad94,	// (0x0002b6bb) vkb2_area_bottom_space_btn_pane_g2

0xadca,	// (0x0002b6f1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xadca,	// (0x0002b6f1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf7,	// (0x0003071e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf7,	// (0x0003071e) vkb2_area_bottom_space_btn_pane_g

0x991f,	// (0x0002a246) cel_fep_hwr_func_pane_ParamLimits

0x991f,	// (0x0002a246) cel_fep_hwr_func_pane

0xe74d,	// (0x0002f074) cell_hwr_side_button_pane_ParamLimits

0xe74d,	// (0x0002f074) cell_hwr_side_button_pane

0x6a97,	// (0x000273be) aid_area_touch_clock_ParamLimits

0x2968,	// (0x0002328f) bg_uniindi_top_pane_ParamLimits

0x6aa9,	// (0x000273d0) uniindi_top_pane_g1_ParamLimits

0x6abf,	// (0x000273e6) uniindi_top_pane_g2_ParamLimits

0x6acb,	// (0x000273f2) uniindi_top_pane_g3_ParamLimits

0x6adc,	// (0x00027403) uniindi_top_pane_g4_ParamLimits

0xfd08,	// (0x0003062f) uniindi_top_pane_g_ParamLimits

0x6ae9,	// (0x00027410) uniindi_top_pane_t1_ParamLimits

0x2968,	// (0x0002328f) bg_vkb2_func_pane_cp01_ParamLimits

0x2968,	// (0x0002328f) bg_vkb2_func_pane_cp01

0xc2bb,	// (0x0002cbe2) cel_fep_hwr_func_pane_g1_ParamLimits

0xc2bb,	// (0x0002cbe2) cel_fep_hwr_func_pane_g1

0x2968,	// (0x0002328f) bg_vkb2_func_pane_cp02_ParamLimits

0x2968,	// (0x0002328f) bg_vkb2_func_pane_cp02

0xc2bb,	// (0x0002cbe2) cell_hwr_side_button_pane_g1_ParamLimits

0xc2bb,	// (0x0002cbe2) cell_hwr_side_button_pane_g1

0x3abe,	// (0x000243e5) status_pane_g4_ParamLimits

0x3abe,	// (0x000243e5) status_pane_g4

0x3ad6,	// (0x000243fd) status_pane_t1

0x576a,	// (0x00026091) form2_midp_gauge_slider_cont_pane

0x5772,	// (0x00026099) form2_midp_gauge_slider_pane_t1_ParamLimits

0x0cfd,	// (0x00021624) form2_midp_gauge_slider_pane_t2_ParamLimits

0x0d0f,	// (0x00021636) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacf,	// (0x000303f6) form2_midp_gauge_slider_pane_t_ParamLimits

0x5784,	// (0x000260ab) form2_midp_slider_pane_ParamLimits

0xa74b,	// (0x0002b072) aid_size_cell_func_vkb2_ParamLimits

0xa74b,	// (0x0002b072) aid_size_cell_func_vkb2

0xc261,	// (0x0002cb88) slider_pane_g4_ParamLimits

0xc261,	// (0x0002cb88) slider_pane_g4

0xebac,	// (0x0002f4d3) form2_midp_gauge_slider_pane_t2_cp01

0xebba,	// (0x0002f4e1) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xebba,	// (0x0002f4e1) form2_midp_gauge_slider_pane_t3_cp01

0xae3b,	// (0x0002b762) form2_midp_slider_pane_cp01

0x2745,	// (0x0002306c) navi_smil_pane

0xc2eb,	// (0x0002cc12) navi_smil_pane_g1

0xc2f3,	// (0x0002cc1a) navi_smil_pane_t1

0xc2c9,	// (0x0002cbf0) form2_midp_slider_pane_g1

0xc2d2,	// (0x0002cbf9) form2_midp_slider_pane_g2

0xc2da,	// (0x0002cc01) form2_midp_slider_pane_g3

0xc2c9,	// (0x0002cbf0) form2_midp_slider_pane_g4

0x2029,	// (0x00022950) form2_midp_slider_pane_g5

0x0004,

0xfe00,	// (0x00030727) form2_midp_slider_pane_g

0xae00,	// (0x0002b727) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xae00,	// (0x0002b727) vkb2_area_bottom_space_btn_pane_g4

0x0313,	// (0x00020c3a) lc0_navi_pane_ParamLimits

0x0313,	// (0x00020c3a) lc0_navi_pane

0x037d,	// (0x00020ca4) lc0_stat_indi_pane_ParamLimits

0x037d,	// (0x00020ca4) lc0_stat_indi_pane

0x0392,	// (0x00020cb9) ls0_title_pane_ParamLimits

0x0392,	// (0x00020cb9) ls0_title_pane

0x2e03,	// (0x0002372a) bg_popup_sub_pane_cp14_ParamLimits

0x6a7e,	// (0x000273a5) list_uniindi_pane_ParamLimits

0x6a8a,	// (0x000273b1) uniindi_top_pane_ParamLimits

0x6b25,	// (0x0002744c) list_single_uniindi_pane_g1_ParamLimits

0x6b38,	// (0x0002745f) list_single_uniindi_pane_t1_ParamLimits

0xebd7,	// (0x0002f4fe) lc0_stat_clock_pane_ParamLimits

0xebd7,	// (0x0002f4fe) lc0_stat_clock_pane

0x204c,	// (0x00022973) lc0_stat_indi_pane_g1_ParamLimits

0x204c,	// (0x00022973) lc0_stat_indi_pane_g1

0x203f,	// (0x00022966) lc0_stat_indi_pane_g2_ParamLimits

0x203f,	// (0x00022966) lc0_stat_indi_pane_g2

0x0001,

0xfe0b,	// (0x00030732) lc0_stat_indi_pane_g_ParamLimits

0xfe0b,	// (0x00030732) lc0_stat_indi_pane_g

0xebe4,	// (0x0002f50b) lc0_uni_indicator_pane_ParamLimits

0xebe4,	// (0x0002f50b) lc0_uni_indicator_pane

0xc301,	// (0x0002cc28) ls0_title_pane_g1_ParamLimits

0xc301,	// (0x0002cc28) ls0_title_pane_g1

0x2066,	// (0x0002298d) ls0_title_pane_t1_ParamLimits

0x2066,	// (0x0002298d) ls0_title_pane_t1

0xebf1,	// (0x0002f518) lc0_uni_indicator_pane_g1_ParamLimits

0xebf1,	// (0x0002f518) lc0_uni_indicator_pane_g1

0xc315,	// (0x0002cc3c) lc0_stat_clock_pane_t1

0x783e,	// (0x00028165) main_ai5_pane

0xc323,	// (0x0002cc4a) ai5_sk_pane_ParamLimits

0xc323,	// (0x0002cc4a) ai5_sk_pane

0x20a9,	// (0x000229d0) cell_ai5_widget_pane_ParamLimits

0x20a9,	// (0x000229d0) cell_ai5_widget_pane

0xc330,	// (0x0002cc57) aid_size_cell_widget_grid

0xc33d,	// (0x0002cc64) bg_ai5_widget_pane_ParamLimits

0xc33d,	// (0x0002cc64) bg_ai5_widget_pane

0x2136,	// (0x00022a5d) cell_ai5_widget_pane_g2

0x214a,	// (0x00022a71) cell_ai5_widget_pane_g3

0x2164,	// (0x00022a8b) cell_ai5_widget_pane_g4

0x2174,	// (0x00022a9b) cell_ai5_widget_pane_g5

0x2184,	// (0x00022aab) cell_ai5_widget_pane_g6

0x2190,	// (0x00022ab7) cell_ai5_widget_pane_g7

0x21fc,	// (0x00022b23) cell_ai5_widget_pane_t1_ParamLimits

0x21fc,	// (0x00022b23) cell_ai5_widget_pane_t1

0x2219,	// (0x00022b40) cell_ai5_widget_pane_t2_ParamLimits

0x2219,	// (0x00022b40) cell_ai5_widget_pane_t2

0x2231,	// (0x00022b58) cell_ai5_widget_pane_t3_ParamLimits

0x2231,	// (0x00022b58) cell_ai5_widget_pane_t3

0x2249,	// (0x00022b70) cell_ai5_widget_pane_t4_ParamLimits

0x2249,	// (0x00022b70) cell_ai5_widget_pane_t4

0x226f,	// (0x00022b96) cell_ai5_widget_pane_t5_ParamLimits

0x226f,	// (0x00022b96) cell_ai5_widget_pane_t5

0xc377,	// (0x0002cc9e) cell_ai5_widget_pane_t6_ParamLimits

0xc377,	// (0x0002cc9e) cell_ai5_widget_pane_t6

0xc389,	// (0x0002ccb0) cell_ai5_widget_pane_t7_ParamLimits

0xc389,	// (0x0002ccb0) cell_ai5_widget_pane_t7

0x228e,	// (0x00022bb5) cell_ai5_widget_pane_t8_ParamLimits

0x228e,	// (0x00022bb5) cell_ai5_widget_pane_t8

0x000b,

0xfe2b,	// (0x00030752) cell_ai5_widget_pane_t_ParamLimits

0xfe2b,	// (0x00030752) cell_ai5_widget_pane_t

0x2312,	// (0x00022c39) grid_ai5_widget_pane

0x2e03,	// (0x0002372a) highlight_cell_ai5_widget_pane_ParamLimits

0x2e03,	// (0x0002372a) highlight_cell_ai5_widget_pane

0x231e,	// (0x00022c45) ai5_sk_left_pane

0x2328,	// (0x00022c4f) ai5_sk_middle_pane

0x2332,	// (0x00022c59) ai5_sk_right_pane

0xc3a8,	// (0x0002cccf) bg_ai5_widget_pane_g1_ParamLimits

0xc3a8,	// (0x0002cccf) bg_ai5_widget_pane_g1

0xc3b4,	// (0x0002ccdb) bg_ai5_widget_pane_g2_ParamLimits

0xc3b4,	// (0x0002ccdb) bg_ai5_widget_pane_g2

0xc3c0,	// (0x0002cce7) bg_ai5_widget_pane_g3_ParamLimits

0xc3c0,	// (0x0002cce7) bg_ai5_widget_pane_g3

0xc3cc,	// (0x0002ccf3) bg_ai5_widget_pane_g4_ParamLimits

0xc3cc,	// (0x0002ccf3) bg_ai5_widget_pane_g4

0xc3d8,	// (0x0002ccff) bg_ai5_widget_pane_g5_ParamLimits

0xc3d8,	// (0x0002ccff) bg_ai5_widget_pane_g5

0xc3e4,	// (0x0002cd0b) bg_ai5_widget_pane_g6_ParamLimits

0xc3e4,	// (0x0002cd0b) bg_ai5_widget_pane_g6

0xc3f0,	// (0x0002cd17) bg_ai5_widget_pane_g7_ParamLimits

0xc3f0,	// (0x0002cd17) bg_ai5_widget_pane_g7

0xc3fc,	// (0x0002cd23) bg_ai5_widget_pane_g8_ParamLimits

0xc3fc,	// (0x0002cd23) bg_ai5_widget_pane_g8

0xc408,	// (0x0002cd2f) bg_ai5_widget_pane_g9_ParamLimits

0xc408,	// (0x0002cd2f) bg_ai5_widget_pane_g9

0x0008,

0xfe44,	// (0x0003076b) bg_ai5_widget_pane_g_ParamLimits

0xfe44,	// (0x0003076b) bg_ai5_widget_pane_g

0xc438,	// (0x0002cd5f) cell_shortcut_ai5_widget_pane_ParamLimits

0xc438,	// (0x0002cd5f) cell_shortcut_ai5_widget_pane

0xc449,	// (0x0002cd70) bg_cell_shortcut_ai5_widget_pane

0x2b22,	// (0x00023449) cell_grid_ai5_widget_pane_g1

0x37c1,	// (0x000240e8) highlight_cell_shortcut_ai5_widget_pane

0x3baa,	// (0x000244d1) ai5_sk_left_pane_g1

0xc451,	// (0x0002cd78) ai5_sk_left_pane_g2

0xc459,	// (0x0002cd80) ai5_sk_left_pane_g3

0xc461,	// (0x0002cd88) ai5_sk_left_pane_g4

0x0003,

0xfe57,	// (0x0003077e) ai5_sk_left_pane_g

0xc469,	// (0x0002cd90) ai5_sk_left_pane_t1

0x3ba2,	// (0x000244c9) ai5_sk_right_pane_g1

0xc477,	// (0x0002cd9e) ai5_sk_right_pane_g2

0xc47f,	// (0x0002cda6) ai5_sk_right_pane_g3

0xc487,	// (0x0002cdae) ai5_sk_right_pane_g4

0x0003,

0xfe60,	// (0x00030787) ai5_sk_right_pane_g

0xc48f,	// (0x0002cdb6) ai5_sk_right_pane_t1

0x3ba2,	// (0x000244c9) ai5_sk_middle_pane_g1

0x3baa,	// (0x000244d1) ai5_sk_middle_pane_g2

0x3bc2,	// (0x000244e9) ai5_sk_middle_pane_g3

0xc47f,	// (0x0002cda6) ai5_sk_middle_pane_g4

0xc459,	// (0x0002cd80) ai5_sk_middle_pane_g5

0xc49d,	// (0x0002cdc4) ai5_sk_middle_pane_g6

0x233c,	// (0x00022c63) ai5_sk_middle_pane_g7

0x0006,

0xfe69,	// (0x00030790) ai5_sk_middle_pane_g

0x0211,	// (0x00020b38) aid_touch_area_size_lc0_ParamLimits

0x0211,	// (0x00020b38) aid_touch_area_size_lc0

0x9bc8,	// (0x0002a4ef) cell_hwr_candidate_pane_t1_ParamLimits

0x39f3,	// (0x0002431a) aid_touch_navi_pane

0x047e,	// (0x00020da5) status_dt_navi_pane_ParamLimits

0x047e,	// (0x00020da5) status_dt_navi_pane

0x0496,	// (0x00020dbd) status_dt_sta_pane_ParamLimits

0x0496,	// (0x00020dbd) status_dt_sta_pane

0x2344,	// (0x00022c6b) dt_sta_controll_pane

0x2351,	// (0x00022c78) dt_sta_indi_pane

0x235e,	// (0x00022c85) dt_sta_title_pane

0x2968,	// (0x0002328f) bg_dt_sta_indi_pane_ParamLimits

0x2968,	// (0x0002328f) bg_dt_sta_indi_pane

0x2370,	// (0x00022c97) dt_sta_battery_pane

0x2378,	// (0x00022c9f) dt_sta_indi_pane_g1

0x2381,	// (0x00022ca8) dt_sta_indi_pane_g2

0x238a,	// (0x00022cb1) dt_sta_indi_pane_g3

0x0002,

0xfe78,	// (0x0003079f) dt_sta_indi_pane_g

0x2393,	// (0x00022cba) dt_sta_signal_pane

0x2e03,	// (0x0002372a) bg_dt_sta_title_pane_ParamLimits

0x2e03,	// (0x0002372a) bg_dt_sta_title_pane

0x239c,	// (0x00022cc3) dt_sta_title_pane_g1

0x23a4,	// (0x00022ccb) dt_sta_title_pane_t1_ParamLimits

0x23a4,	// (0x00022ccb) dt_sta_title_pane_t1

0x2745,	// (0x0002306c) bg_dt_sta_control_pane

0x23b9,	// (0x00022ce0) dt_sta_controll_pane_g1

0x23c2,	// (0x00022ce9) bg_dt_sta_title_pane_g1

0x23cb,	// (0x00022cf2) bg_dt_sta_title_pane_g2

0x23d4,	// (0x00022cfb) bg_dt_sta_title_pane_g3

0x0002,

0xfe7f,	// (0x000307a6) bg_dt_sta_title_pane_g

0x5964,	// (0x0002628b) bg_dt_sta_indi_pane_g1

0x23dd,	// (0x00022d04) dt_sta_signal_pane_g1

0x23e5,	// (0x00022d0c) dt_sta_signal_pane_g2

0x0001,

0xfe86,	// (0x000307ad) dt_sta_signal_pane_g

0xc4a5,	// (0x0002cdcc) dt_sta_battery_pane_g1

0xc4ae,	// (0x0002cdd5) dt_sta_battery_pane_t1

0x5964,	// (0x0002628b) bg_dt_sta_control_pane_g1

0x338a,	// (0x00023cb1) fep_china_uni_eep_pane

0x3392,	// (0x00023cb9) fep_china_uni_entry_pane_ParamLimits

0x33a2,	// (0x00023cc9) popup_fep_china_uni_window_g1_ParamLimits

0x33b2,	// (0x00023cd9) popup_fep_china_uni_window_g2_ParamLimits

0x33b2,	// (0x00023cd9) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0003001f) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0003001f) popup_fep_china_uni_window_g

0xc4bd,	// (0x0002cde4) fep_china_uni_eep_pane_g1

0xc4c5,	// (0x0002cdec) fep_china_uni_eep_pane_t1

0xc2e2,	// (0x0002cc09) aid_touch_area_size_smil_player

0x3a91,	// (0x000243b8) lc0_clock_pane

0x3aca,	// (0x000243f1) status_pane_g5_ParamLimits

0x3aca,	// (0x000243f1) status_pane_g5

0xe147,	// (0x0002ea6e) popup_keymap_window

0x3aaa,	// (0x000243d1) status_icon_pane

0x214a,	// (0x00022a71) cell_ai5_widget_pane_g3_ParamLimits

0x2164,	// (0x00022a8b) cell_ai5_widget_pane_g4_ParamLimits

0x2174,	// (0x00022a9b) cell_ai5_widget_pane_g5_ParamLimits

0x219c,	// (0x00022ac3) cell_ai5_widget_pane_g8_ParamLimits

0x219c,	// (0x00022ac3) cell_ai5_widget_pane_g8

0x21b0,	// (0x00022ad7) cell_ai5_widget_pane_g9_ParamLimits

0x21b0,	// (0x00022ad7) cell_ai5_widget_pane_g9

0x21c4,	// (0x00022aeb) cell_ai5_widget_pane_g10_ParamLimits

0x21c4,	// (0x00022aeb) cell_ai5_widget_pane_g10

0xc4d4,	// (0x0002cdfb) status_icon_pane_g1

0x2745,	// (0x0002306c) bg_popup_sub_pane_cp13

0xc4dc,	// (0x0002ce03) popup_keymap_window_t1

0xf4e5,	// (0x0002fe0c) control_pane_g6_ParamLimits

0xf4e5,	// (0x0002fe0c) control_pane_g6

0xf4f2,	// (0x0002fe19) control_pane_g7_ParamLimits

0xf4f2,	// (0x0002fe19) control_pane_g7

0xf4ff,	// (0x0002fe26) control_pane_g8_ParamLimits

0xf4ff,	// (0x0002fe26) control_pane_g8

0x2344,	// (0x00022c6b) dt_sta_controll_pane_ParamLimits

0x2351,	// (0x00022c78) dt_sta_indi_pane_ParamLimits

0x235e,	// (0x00022c85) dt_sta_title_pane_ParamLimits

0x2d54,	// (0x0002367b) aid_size_touch_scroll_bar_cale

0x7915,	// (0x0002823c) popup_discreet_window_ParamLimits

0x7915,	// (0x0002823c) popup_discreet_window

0xd91c,	// (0x0002e243) popup_sk_window

0x41b8,	// (0x00024adf) bg_popup_sub_pane_cp28_ParamLimits

0x41b8,	// (0x00024adf) bg_popup_sub_pane_cp28

0xc4ea,	// (0x0002ce11) popup_discreet_window_g1_ParamLimits

0xc4ea,	// (0x0002ce11) popup_discreet_window_g1

0xc50a,	// (0x0002ce31) popup_discreet_window_t1_ParamLimits

0xc50a,	// (0x0002ce31) popup_discreet_window_t1

0xc528,	// (0x0002ce4f) popup_discreet_window_t2_ParamLimits

0xc528,	// (0x0002ce4f) popup_discreet_window_t2

0x0002,

0xfe8b,	// (0x000307b2) popup_discreet_window_t_ParamLimits

0xfe8b,	// (0x000307b2) popup_discreet_window_t

0xae70,	// (0x0002b797) popup_sk_window_g1

0xae79,	// (0x0002b7a0) popup_sk_window_g2

0x0001,

0xfe92,	// (0x000307b9) popup_sk_window_g

0xae82,	// (0x0002b7a9) popup_sk_window_t1

0xae90,	// (0x0002b7b7) popup_sk_window_t1_copy1

0x2136,	// (0x00022a5d) cell_ai5_widget_pane_g2_ParamLimits

0x22a0,	// (0x00022bc7) cell_ai5_widget_pane_t9_ParamLimits

0x22a0,	// (0x00022bc7) cell_ai5_widget_pane_t9

0x2745,	// (0x0002306c) main_fep_fshwr2_pane

0xec06,	// (0x0002f52d) aid_fshwr2_btn_pane

0xec1a,	// (0x0002f541) aid_fshwr2_syb_pane

0xec2e,	// (0x0002f555) aid_fshwr2_txt_pane

0xec3e,	// (0x0002f565) fshwr2_func_candi_pane

0xec56,	// (0x0002f57d) fshwr2_hwr_syb_pane

0xec6e,	// (0x0002f595) fshwr2_icf_pane

0x783e,	// (0x00028165) fshwr2_icf_bg_pane

0xec98,	// (0x0002f5bf) fshwr2_icf_pane_t1_ParamLimits

0xec98,	// (0x0002f5bf) fshwr2_icf_pane_t1

0x3328,	// (0x00023c4f) fshwr2_func_candi_pane_g1

0x2496,	// (0x00022dbd) fshwr2_func_candi_row_pane_ParamLimits

0x2496,	// (0x00022dbd) fshwr2_func_candi_row_pane

0xecaf,	// (0x0002f5d6) cell_fshwr2_syb_pane_ParamLimits

0xecaf,	// (0x0002f5d6) cell_fshwr2_syb_pane

0xaf5b,	// (0x0002b882) fshwr2_hwr_syb_pane_g1_ParamLimits

0xaf5b,	// (0x0002b882) fshwr2_hwr_syb_pane_g1

0x783e,	// (0x00028165) bg_popup_call_pane_cp01

0xecd1,	// (0x0002f5f8) fshwr2_func_candi_cell_pane_ParamLimits

0xecd1,	// (0x0002f5f8) fshwr2_func_candi_cell_pane

0x3f60,	// (0x00024887) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3f60,	// (0x00024887) fshwr2_func_candi_cell_bg_pane

0xed10,	// (0x0002f637) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed10,	// (0x0002f637) fshwr2_func_candi_cell_pane_g1

0xed47,	// (0x0002f66e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed47,	// (0x0002f66e) fshwr2_func_candi_cell_pane_t1

0x783e,	// (0x00028165) bg_button_pane_cp08

0x2f9c,	// (0x000238c3) cell_fshwr2_syb_bg_pane

0xed62,	// (0x0002f689) cell_fshwr2_syb_bg_pane_g1

0xed76,	// (0x0002f69d) cell_fshwr2_syb_bg_pane_t1

0x2e03,	// (0x0002372a) main_tmo_pane

0x0881,	// (0x000211a8) uni_indicator_pane_g1_ParamLimits

0x0895,	// (0x000211bc) uni_indicator_pane_g2_ParamLimits

0x08aa,	// (0x000211d1) uni_indicator_pane_g3_ParamLimits

0x4b44,	// (0x0002546b) uni_indicator_pane_g4_ParamLimits

0x4b44,	// (0x0002546b) uni_indicator_pane_g4

0x4b58,	// (0x0002547f) uni_indicator_pane_g5_ParamLimits

0x4b58,	// (0x0002547f) uni_indicator_pane_g5

0x4b58,	// (0x0002547f) uni_indicator_pane_g6_ParamLimits

0x4b58,	// (0x0002547f) uni_indicator_pane_g6

0xf8f7,	// (0x0003021e) uni_indicator_pane_g_ParamLimits

0x1228,	// (0x00021b4f) popup_tmo_note_window_ParamLimits

0x1228,	// (0x00021b4f) popup_tmo_note_window

0xa2c0,	// (0x0002abe7) fshwr2_bg_pane

0xed38,	// (0x0002f65f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed38,	// (0x0002f65f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe97,	// (0x000307be) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe97,	// (0x000307be) fshwr2_func_candi_cell_pane_g

0x9b81,	// (0x0002a4a8) bg_popup_window_pane_cp01

0xb010,	// (0x0002b937) bg_popup_window_pane_g1_cp01

0xc57a,	// (0x0002cea1) bg_popup_window_pane_cp22_ParamLimits

0xc57a,	// (0x0002cea1) bg_popup_window_pane_cp22

0xc588,	// (0x0002ceaf) listscroll_tmo_link_pane_ParamLimits

0xc588,	// (0x0002ceaf) listscroll_tmo_link_pane

0xc5c8,	// (0x0002ceef) popup_tmo_note_window_g1_ParamLimits

0xc5c8,	// (0x0002ceef) popup_tmo_note_window_g1

0xc5d5,	// (0x0002cefc) tmo_note_info_pane_ParamLimits

0xc5d5,	// (0x0002cefc) tmo_note_info_pane

0x2596,	// (0x00022ebd) list_tmo_note_info_pane_g1_ParamLimits

0x2596,	// (0x00022ebd) list_tmo_note_info_pane_g1

0xc5ef,	// (0x0002cf16) list_tmo_note_info_pane_g2_ParamLimits

0xc5ef,	// (0x0002cf16) list_tmo_note_info_pane_g2

0x0001,

0xfe9c,	// (0x000307c3) list_tmo_note_info_pane_g_ParamLimits

0xfe9c,	// (0x000307c3) list_tmo_note_info_pane_g

0xc60b,	// (0x0002cf32) list_tmo_note_info_text_pane_ParamLimits

0xc60b,	// (0x0002cf32) list_tmo_note_info_text_pane

0xc64d,	// (0x0002cf74) list_tmo_link_pane

0xc65a,	// (0x0002cf81) scroll_pane_cp20

0xc667,	// (0x0002cf8e) list_single_tmo_link_pane_ParamLimits

0xc667,	// (0x0002cf8e) list_single_tmo_link_pane

0xc677,	// (0x0002cf9e) list_single_tmo_link_pane_t1

0xc685,	// (0x0002cfac) list_tmo_note_info_text_pane_t1_ParamLimits

0xc685,	// (0x0002cfac) list_tmo_note_info_text_pane_t1

0x2ec2,	// (0x000237e9) aid_size_touch_scroll_bar_cp01_ParamLimits

0x2ec2,	// (0x000237e9) aid_size_touch_scroll_bar_cp01

0xeefb,	// (0x0002f822) aid_size_touch_slider_marker

0xd910,	// (0x0002e237) popup_settings_window_ParamLimits

0xd910,	// (0x0002e237) popup_settings_window

0xb9ee,	// (0x0002c315) popup_candi_list_indi_window

0x39f3,	// (0x0002431a) aid_touch_navi_pane_ParamLimits

0xa21c,	// (0x0002ab43) rs_clock_indi_pane

0xa225,	// (0x0002ab4c) sctrl_sk_bottom_pane_ParamLimits

0xa236,	// (0x0002ab5d) sctrl_sk_top_pane_ParamLimits

0xa79d,	// (0x0002b0c4) popup_fep_tooltip_window

0xc330,	// (0x0002cc57) aid_size_cell_widget_grid_ParamLimits

0x2122,	// (0x00022a49) cell_ai5_widget_pane_g1_ParamLimits

0x2122,	// (0x00022a49) cell_ai5_widget_pane_g1

0x2184,	// (0x00022aab) cell_ai5_widget_pane_g6_ParamLimits

0x2190,	// (0x00022ab7) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe10,	// (0x00030737) cell_ai5_widget_pane_g_ParamLimits

0xfe10,	// (0x00030737) cell_ai5_widget_pane_g

0x22cf,	// (0x00022bf6) cell_ai5_widget_pane_t10_ParamLimits

0x22cf,	// (0x00022bf6) cell_ai5_widget_pane_t10

0x2312,	// (0x00022c39) grid_ai5_widget_pane_ParamLimits

0xc414,	// (0x0002cd3b) cell_contacts_ai5_widget_pane_ParamLimits

0xc414,	// (0x0002cd3b) cell_contacts_ai5_widget_pane

0xc53d,	// (0x0002ce64) popup_discreet_window_t3_ParamLimits

0xc53d,	// (0x0002ce64) popup_discreet_window_t3

0xec86,	// (0x0002f5ad) popup_fshwr2_char_preview_window_ParamLimits

0xec86,	// (0x0002f5ad) popup_fshwr2_char_preview_window

0x25ad,	// (0x00022ed4) tmo_note_info_pane_t1

0x25c2,	// (0x00022ee9) tmo_note_info_pane_t2

0x25d7,	// (0x00022efe) tmo_note_info_pane_t3

0xc629,	// (0x0002cf50) tmo_note_info_pane_t4

0xc63b,	// (0x0002cf62) tmo_note_info_pane_t5

0x0004,

0xfea1,	// (0x000307c8) tmo_note_info_pane_t

0xc64d,	// (0x0002cf74) list_tmo_link_pane_ParamLimits

0xc65a,	// (0x0002cf81) scroll_pane_cp20_ParamLimits

0x783e,	// (0x00028165) bg_popup_fep_char_preview_window_cp01

0xc69e,	// (0x0002cfc5) popup_fshwr2_char_preview_window_t1

0xc6ac,	// (0x0002cfd3) popup_candi_list_indi_window_g1

0xc6b5,	// (0x0002cfdc) bg_cell_contacts_ai5_widget_pane

0xc6c1,	// (0x0002cfe8) cell_contacts_ai5_widget_pane_g1

0xc6d6,	// (0x0002cffd) cell_contacts_ai5_widget_pane_g2

0xc6e2,	// (0x0002d009) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeac,	// (0x000307d3) cell_contacts_ai5_widget_pane_g

0xc6ee,	// (0x0002d015) cell_contacts_ai5_widget_pane_t1

0x2e03,	// (0x0002372a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xc763,	// (0x0002d08a) settings_container_pane

0x37c1,	// (0x000240e8) listscroll_set_pane_copy1

0x529a,	// (0x00025bc1) scroll_pane_cp121_copy1

0xc76f,	// (0x0002d096) set_content_pane_copy1

0xc777,	// (0x0002d09e) aid_height_set_list_copy1_ParamLimits

0xc777,	// (0x0002d09e) aid_height_set_list_copy1

0x4cfd,	// (0x00025624) aid_size_parent_copy1_ParamLimits

0x4cfd,	// (0x00025624) aid_size_parent_copy1

0xc783,	// (0x0002d0aa) button_value_adjust_pane_cp6_copy1_ParamLimits

0xc783,	// (0x0002d0aa) button_value_adjust_pane_cp6_copy1

0x2f9c,	// (0x000238c3) list_highlight_pane_cp2_copy1_ParamLimits

0x2f9c,	// (0x000238c3) list_highlight_pane_cp2_copy1

0xc797,	// (0x0002d0be) list_set_pane_copy1_ParamLimits

0xc797,	// (0x0002d0be) list_set_pane_copy1

0xc700,	// (0x0002d027) main_pane_set_t1_copy1_ParamLimits

0xc700,	// (0x0002d027) main_pane_set_t1_copy1

0xc73a,	// (0x0002d061) main_pane_set_t2_copy1_ParamLimits

0xc73a,	// (0x0002d061) main_pane_set_t2_copy1

0xc825,	// (0x0002d14c) main_pane_set_t3_copy1

0xc833,	// (0x0002d15a) main_pane_set_t4_copy1

0xc757,	// (0x0002d07e) set_content_pane_g1_copy1_ParamLimits

0xc757,	// (0x0002d07e) set_content_pane_g1_copy1

0xc841,	// (0x0002d168) setting_code_pane_copy1

0xc849,	// (0x0002d170) setting_slider_graphic_pane_copy1

0xc849,	// (0x0002d170) setting_slider_pane_copy1

0xc849,	// (0x0002d170) setting_text_pane_copy1

0xc849,	// (0x0002d170) setting_volume_pane_copy1

0xc851,	// (0x0002d178) settings_code_pane_cp2_copy1

0xc859,	// (0x0002d180) settings_code_pane_cp_copy1_ParamLimits

0xc859,	// (0x0002d180) settings_code_pane_cp_copy1

0xb019,	// (0x0002b940) volume_set_pane_copy1

0xc86d,	// (0x0002d194) volume_set_pane_g10_copy1

0xc875,	// (0x0002d19c) volume_set_pane_g1_copy1

0xc87d,	// (0x0002d1a4) volume_set_pane_g2_copy1

0xc885,	// (0x0002d1ac) volume_set_pane_g3_copy1

0xc88d,	// (0x0002d1b4) volume_set_pane_g4_copy1

0xc895,	// (0x0002d1bc) volume_set_pane_g5_copy1

0xc89d,	// (0x0002d1c4) volume_set_pane_g6_copy1

0xc8a5,	// (0x0002d1cc) volume_set_pane_g7_copy1

0xc8ad,	// (0x0002d1d4) volume_set_pane_g8_copy1

0xc8b5,	// (0x0002d1dc) volume_set_pane_g9_copy1

0x2835,	// (0x0002315c) bg_set_opt_pane_cp_copy1_ParamLimits

0x2835,	// (0x0002315c) bg_set_opt_pane_cp_copy1

0xb021,	// (0x0002b948) setting_slider_pane_t1_copy1_ParamLimits

0xb021,	// (0x0002b948) setting_slider_pane_t1_copy1

0xb038,	// (0x0002b95f) setting_slider_pane_t2_copy1_ParamLimits

0xb038,	// (0x0002b95f) setting_slider_pane_t2_copy1

0xb051,	// (0x0002b978) setting_slider_pane_t3_copy1_ParamLimits

0xb051,	// (0x0002b978) setting_slider_pane_t3_copy1

0x7b53,	// (0x0002847a) slider_set_pane_copy1_ParamLimits

0x7b53,	// (0x0002847a) slider_set_pane_copy1

0x2e5e,	// (0x00023785) set_opt_bg_pane_g1_copy2

0x2e66,	// (0x0002378d) set_opt_bg_pane_g2_copy2

0xc8bd,	// (0x0002d1e4) set_opt_bg_pane_g3_copy2

0x2e76,	// (0x0002379d) set_opt_bg_pane_g4_copy2

0x2e7e,	// (0x000237a5) set_opt_bg_pane_g5_copy2

0x2e86,	// (0x000237ad) set_opt_bg_pane_g6_copy2

0xc8c5,	// (0x0002d1ec) set_opt_bg_pane_g7_copy2

0xc8cd,	// (0x0002d1f4) set_opt_bg_pane_g8_copy2

0xc8d5,	// (0x0002d1fc) set_opt_bg_pane_g9_copy2

0x9245,	// (0x00029b6c) aid_size_touch_slider_mark_copy1_ParamLimits

0x9245,	// (0x00029b6c) aid_size_touch_slider_mark_copy1

0x4d0f,	// (0x00025636) slider_set_pane_g1_copy1

0x4d31,	// (0x00025658) slider_set_pane_g2_copy1

0x9265,	// (0x00029b8c) slider_set_pane_g3_copy1_ParamLimits

0x9265,	// (0x00029b8c) slider_set_pane_g3_copy1

0x9279,	// (0x00029ba0) slider_set_pane_g4_copy1_ParamLimits

0x9279,	// (0x00029ba0) slider_set_pane_g4_copy1

0x9291,	// (0x00029bb8) slider_set_pane_g5_copy1_ParamLimits

0x9291,	// (0x00029bb8) slider_set_pane_g5_copy1

0x9265,	// (0x00029b8c) slider_set_pane_g6_copy1_ParamLimits

0x9265,	// (0x00029b8c) slider_set_pane_g6_copy1

0xb068,	// (0x0002b98f) slider_set_pane_g7_copy1_ParamLimits

0xb068,	// (0x0002b98f) slider_set_pane_g7_copy1

0x27d1,	// (0x000230f8) bg_set_opt_pane_cp2_copy1

0x2843,	// (0x0002316a) setting_slider_graphic_pane_g1_copy1

0xb07e,	// (0x0002b9a5) setting_slider_graphic_pane_t1_copy1

0xb08d,	// (0x0002b9b4) setting_slider_graphic_pane_t2_copy1

0xb09c,	// (0x0002b9c3) slider_set_pane_cp_copy1

0xc8e5,	// (0x0002d20c) input_focus_pane_cp1_copy1

0xc8ee,	// (0x0002d215) list_set_text_pane_copy1

0xc8f6,	// (0x0002d21d) setting_text_pane_g1_copy1

0xcdfe,	// (0x0002d725) set_text_pane_t1_copy1

0xc8e5,	// (0x0002d20c) input_focus_pane_cp2_copy1

0xc8f6,	// (0x0002d21d) setting_code_pane_g1_copy1

0xc8ff,	// (0x0002d226) setting_code_pane_t1_copy1

0xc90d,	// (0x0002d234) list_set_graphic_pane_copy1

0x27d1,	// (0x000230f8) bg_set_opt_pane_cp4_copy1

0x351d,	// (0x00023e44) list_set_graphic_pane_g1_copy1_ParamLimits

0x351d,	// (0x00023e44) list_set_graphic_pane_g1_copy1

0xc922,	// (0x0002d249) list_set_graphic_pane_g2_copy1

0x3535,	// (0x00023e5c) list_set_graphic_pane_t1_copy1_ParamLimits

0x3535,	// (0x00023e5c) list_set_graphic_pane_t1_copy1

0x5964,	// (0x0002628b) rs_clock_indi_pane_g1

0xc92a,	// (0x0002d251) rs_clock_indi_pane_t1

0xc938,	// (0x0002d25f) rs_indi_pane

0xc940,	// (0x0002d267) rs_indi_pane_g1

0xc949,	// (0x0002d270) rs_indi_pane_g2

0xc6ac,	// (0x0002cfd3) rs_indi_pane_g3

0x0002,

0xfeb3,	// (0x000307da) rs_indi_pane_g

0x37c1,	// (0x000240e8) bg_popup_preview_window_pane_cp03

0xc952,	// (0x0002d279) popup_fep_tooltip_window_t1

0x628f,	// (0x00026bb6) popup_note2_window_g2_ParamLimits

0x628f,	// (0x00026bb6) popup_note2_window_g2

0x0001,

0xfc47,	// (0x0003056e) popup_note2_window_g_ParamLimits

0xfc47,	// (0x0003056e) popup_note2_window_g

0x670a,	// (0x00027031) bg_popup_sub_pane_cp11_ParamLimits

0x6717,	// (0x0002703e) cell_ai3_links_pane_g1_ParamLimits

0x672e,	// (0x00027055) cell_ai3_links_pane_t1

0xcdfe,	// (0x0002d725) set_text_pane_t1_copy1_ParamLimits

0x36e1,	// (0x00024008) cell_graphic_popup_pane_cp2_ParamLimits

0x36e1,	// (0x00024008) cell_graphic_popup_pane_cp2

0xc960,	// (0x0002d287) cell_graphic_popup_pane_g1_cp2

0x2c03,	// (0x0002352a) cell_graphic_popup_pane_g2_cp2

0xc968,	// (0x0002d28f) cell_graphic_popup_pane_g3_cp2

0xc970,	// (0x0002d297) cell_graphic_popup_pane_t2_cp2

0x2c14,	// (0x0002353b) grid_highlight_pane_cp3_cp2

0x3161,	// (0x00023a88) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2e03,	// (0x0002372a) main_tmo_pane_ParamLimits

0x1220,	// (0x00021b47) popup_tmo_big_image_note_window

0xc36f,	// (0x0002cc96) cell_ai5_widget_list_pane

0x2119,	// (0x00022a40) cell_ai5_widget_lrg_icon_pane

0x25ad,	// (0x00022ed4) tmo_note_info_pane_t1_ParamLimits

0x25c2,	// (0x00022ee9) tmo_note_info_pane_t2_ParamLimits

0x25d7,	// (0x00022efe) tmo_note_info_pane_t3_ParamLimits

0xc629,	// (0x0002cf50) tmo_note_info_pane_t4_ParamLimits

0xc63b,	// (0x0002cf62) tmo_note_info_pane_t5_ParamLimits

0xfea1,	// (0x000307c8) tmo_note_info_pane_t_ParamLimits

0xc763,	// (0x0002d08a) settings_container_pane_ParamLimits

0xc8dd,	// (0x0002d204) indicator_popup_pane_cp5

0xc8dd,	// (0x0002d204) indicator_popup_pane_cp6

0xc90d,	// (0x0002d234) list_set_graphic_pane_copy1_ParamLimits

0x2745,	// (0x0002306c) bg_popup_window_pane_cp23

0xc97e,	// (0x0002d2a5) popup_tmo_big_image_note_window_g1

0xc987,	// (0x0002d2ae) popup_tmo_big_image_note_window_t1

0xc995,	// (0x0002d2bc) popup_tmo_big_image_note_window_t2

0xc9a3,	// (0x0002d2ca) popup_tmo_big_image_note_window_t3

0x0002,

0xfeba,	// (0x000307e1) popup_tmo_big_image_note_window_t

0x5964,	// (0x0002628b) cell_ai5_widget_lrg_icon_pane_g1

0xc9b1,	// (0x0002d2d8) cell_ai5_widget_lrg_icon_pane_t1

0x25ec,	// (0x00022f13) cell_ai5_widget_list_row_pane_ParamLimits

0x25ec,	// (0x00022f13) cell_ai5_widget_list_row_pane

0x2603,	// (0x00022f2a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x2603,	// (0x00022f2a) cell_ai5_widget_list_row_pane_g1

0x2610,	// (0x00022f37) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x2610,	// (0x00022f37) cell_ai5_widget_list_row_pane_t1

0x2641,	// (0x00022f68) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x2641,	// (0x00022f68) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec1,	// (0x000307e8) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec1,	// (0x000307e8) cell_ai5_widget_list_row_pane_t

0x783e,	// (0x00028165) main_fep_vtchi_ss_pane

0xc9cc,	// (0x0002d2f3) popup_fep_char_pre_window

0xc9d4,	// (0x0002d2fb) popup_fep_ituss_window

0x2692,	// (0x00022fb9) popup_fep_vkbss_window

0xca0f,	// (0x0002d336) grid_vkbss_keypad_pane_ParamLimits

0xca0f,	// (0x0002d336) grid_vkbss_keypad_pane

0xca1f,	// (0x0002d346) ituss_keypad_pane

0xb0ac,	// (0x0002b9d3) aid_vkbss_key_offset_ParamLimits

0xb0ac,	// (0x0002b9d3) aid_vkbss_key_offset

0xb0b8,	// (0x0002b9df) cell_vkbss_key_pane_ParamLimits

0xb0b8,	// (0x0002b9df) cell_vkbss_key_pane

0xca2b,	// (0x0002d352) bg_cell_vkbss_key_g1_ParamLimits

0xca2b,	// (0x0002d352) bg_cell_vkbss_key_g1

0xca37,	// (0x0002d35e) cell_vkbss_key_3p_pane_ParamLimits

0xca37,	// (0x0002d35e) cell_vkbss_key_3p_pane

0xca6d,	// (0x0002d394) cell_vkbss_key_g1_ParamLimits

0xca6d,	// (0x0002d394) cell_vkbss_key_g1

0xcaa3,	// (0x0002d3ca) cell_vkbss_key_t1_ParamLimits

0xcaa3,	// (0x0002d3ca) cell_vkbss_key_t1

0xb0ec,	// (0x0002ba13) cell_ituss_key_pane_ParamLimits

0xb0ec,	// (0x0002ba13) cell_ituss_key_pane

0xcb13,	// (0x0002d43a) bg_cell_ituss_key_g1_ParamLimits

0xcb13,	// (0x0002d43a) bg_cell_ituss_key_g1

0xcb1f,	// (0x0002d446) cell_ituss_key_pane_g1_ParamLimits

0xcb1f,	// (0x0002d446) cell_ituss_key_pane_g1

0xb0fd,	// (0x0002ba24) cell_ituss_key_pane_g2_ParamLimits

0xb0fd,	// (0x0002ba24) cell_ituss_key_pane_g2

0x0005,

0xfec8,	// (0x000307ef) cell_ituss_key_pane_g_ParamLimits

0xfec8,	// (0x000307ef) cell_ituss_key_pane_g

0xb181,	// (0x0002baa8) cell_ituss_key_t1_ParamLimits

0xb181,	// (0x0002baa8) cell_ituss_key_t1

0xb1b7,	// (0x0002bade) cell_ituss_key_t2_ParamLimits

0xb1b7,	// (0x0002bade) cell_ituss_key_t2

0xb1e9,	// (0x0002bb10) cell_ituss_key_t3_ParamLimits

0xb1e9,	// (0x0002bb10) cell_ituss_key_t3

0xb21a,	// (0x0002bb41) cell_ituss_key_t4_ParamLimits

0xb21a,	// (0x0002bb41) cell_ituss_key_t4

0x0004,

0xfed5,	// (0x000307fc) cell_ituss_key_t_ParamLimits

0xfed5,	// (0x000307fc) cell_ituss_key_t

0xcb45,	// (0x0002d46c) cell_vkbss_key_3p_pane_g1

0xcb4d,	// (0x0002d474) cell_vkbss_key_3p_pane_g2

0xcb55,	// (0x0002d47c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x00030807) cell_vkbss_key_3p_pane_g

0x37c1,	// (0x000240e8) bg_popup_fep_char_preview_window_cp02

0xcb5d,	// (0x0002d484) popup_fep_char_pre_window_t1

0x2106,	// (0x00022a2d) main_ai5_sk_pane

0xc6b5,	// (0x0002cfdc) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xc6c1,	// (0x0002cfe8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc6d6,	// (0x0002cffd) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xc6e2,	// (0x0002d009) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeac,	// (0x000307d3) cell_contacts_ai5_widget_pane_g_ParamLimits

0xc6ee,	// (0x0002d015) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2e03,	// (0x0002372a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x269f,	// (0x00022fc6) main_ai5_sk_pane_g1

0x3fb8,	// (0x000248df) popup_query_code_window_g1

0x2684,	// (0x00022fab) popup_fep_vkb_icf_pane

0xc9e6,	// (0x0002d30d) popup_fep_vtchi_icf_pane

0xcb6b,	// (0x0002d492) bg_icf_pane

0xcb6b,	// (0x0002d492) list_vkb_icf_pane

0xcb77,	// (0x0002d49e) bg_icf_pane_cp01

0xcb8a,	// (0x0002d4b1) vtchi_icf_list_pane

0x26f4,	// (0x0002301b) list_vkb_icf_pane_t1_ParamLimits

0x26f4,	// (0x0002301b) list_vkb_icf_pane_t1

0xcb9a,	// (0x0002d4c1) vtchi_icf_list_pane_t1_ParamLimits

0xcb9a,	// (0x0002d4c1) vtchi_icf_list_pane_t1

0xc9d4,	// (0x0002d2fb) popup_fep_ituss_window_ParamLimits

0xc9e6,	// (0x0002d30d) popup_fep_vtchi_icf_pane_ParamLimits

0xca1f,	// (0x0002d346) ituss_keypad_pane_ParamLimits

0xb0a4,	// (0x0002b9cb) ituss_sks_pane

0xcb6b,	// (0x0002d492) bg_icf_pane_ParamLimits

0x2669,	// (0x00022f90) icf_edit_indi_pane_ParamLimits

0x2669,	// (0x00022f90) icf_edit_indi_pane

0xcb6b,	// (0x0002d492) list_vkb_icf_pane_ParamLimits

0xcb77,	// (0x0002d49e) bg_icf_pane_cp01_ParamLimits

0xc9bf,	// (0x0002d2e6) icf_edit_indi_pane_cp01_ParamLimits

0xc9bf,	// (0x0002d2e6) icf_edit_indi_pane_cp01

0xcb92,	// (0x0002d4b9) vtchi_query_pane

0xc2bb,	// (0x0002cbe2) icf_edit_indi_pane_g1_ParamLimits

0xc2bb,	// (0x0002cbe2) icf_edit_indi_pane_g1

0x270b,	// (0x00023032) icf_edit_indi_pane_g2_ParamLimits

0x270b,	// (0x00023032) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x00030832) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x00030832) icf_edit_indi_pane_g

0x271d,	// (0x00023044) icf_edit_indi_pane_t1

0xcbb2,	// (0x0002d4d9) bg_input_focus_pane_cp042

0xcbbb,	// (0x0002d4e2) vtchi_button_pane

0xcbc4,	// (0x0002d4eb) vtchi_query_pane_t1

0xcbd2,	// (0x0002d4f9) vtchi_query_pane_t2

0xcbe0,	// (0x0002d507) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x00030821) vtchi_query_pane_t

0x783e,	// (0x00028165) bg_button_pane_cp13

0xcbee,	// (0x0002d515) vtchi_button_pane_g1

0xb25d,	// (0x0002bb84) ituss_sks_pane_g1

0xb266,	// (0x0002bb8d) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x00030828) ituss_sks_pane_g

0xcbf6,	// (0x0002d51d) ituss_sks_pane_t1

0xcc04,	// (0x0002d52b) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0003082d) ituss_sks_pane_t

0x5591,	// (0x00025eb8) indicator_nsta_pane_cp_g1

0x559a,	// (0x00025ec1) indicator_nsta_pane_cp_g2

0x55a2,	// (0x00025ec9) indicator_nsta_pane_cp_g3

0x55aa,	// (0x00025ed1) indicator_nsta_pane_cp_g4

0x55b2,	// (0x00025ed9) indicator_nsta_pane_cp_g5

0x55ba,	// (0x00025ee1) indicator_nsta_pane_cp_g6

0x0005,

0xfa85,	// (0x000303ac) indicator_nsta_pane_cp_g

0x1eef,	// (0x00022816) cell_graphic2_pane_t2_ParamLimits

0x1eef,	// (0x00022816) cell_graphic2_pane_t2

0x0001,

0xfd97,	// (0x000306be) cell_graphic2_pane_t_ParamLimits

0xfd97,	// (0x000306be) cell_graphic2_pane_t

0x1f27,	// (0x0002284e) cell_graphic2_control_pane_t1

0xf3a7,	// (0x0002fcce) signal_pane_g3_ParamLimits

0xf3a7,	// (0x0002fcce) signal_pane_g3

0xf3bb,	// (0x0002fce2) signal_pane_g4_ParamLimits

0xf3bb,	// (0x0002fce2) signal_pane_g4

0x2653,	// (0x00022f7a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x2653,	// (0x00022f7a) cell_ai5_widget_list_row_pane_t3

0xcb33,	// (0x0002d45a) cell_ituss_key_pane_t1_ParamLimits

0xcb33,	// (0x0002d45a) cell_ituss_key_pane_t1

0x3c86,	// (0x000245ad) form_field_data_wide_pane_vc_t2_ParamLimits

0x3c86,	// (0x000245ad) form_field_data_wide_pane_vc_t2

0x3c98,	// (0x000245bf) form_field_data_wide_pane_vc_t3_ParamLimits

0x3c98,	// (0x000245bf) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x00030106) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x00030106) form_field_data_wide_pane_vc_t

0x52df,	// (0x00025c06) form_field_slider_wide_pane_vc_t3_ParamLimits

0x52df,	// (0x00025c06) form_field_slider_wide_pane_vc_t3

0x53bb,	// (0x00025ce2) form_field_popup_wide_pane_vc_t2_ParamLimits

0x53bb,	// (0x00025ce2) form_field_popup_wide_pane_vc_t2

0x53d0,	// (0x00025cf7) form_field_popup_wide_pane_vc_t3_ParamLimits

0x53d0,	// (0x00025cf7) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa74,	// (0x0003039b) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x0003039b) form_field_popup_wide_pane_vc_t

0xec06,	// (0x0002f52d) aid_fshwr2_btn_pane_ParamLimits

0xec1a,	// (0x0002f541) aid_fshwr2_syb_pane_ParamLimits

0xec2e,	// (0x0002f555) aid_fshwr2_txt_pane_ParamLimits

0xa2c0,	// (0x0002abe7) fshwr2_bg_pane_ParamLimits

0xec3e,	// (0x0002f565) fshwr2_func_candi_pane_ParamLimits

0xec56,	// (0x0002f57d) fshwr2_hwr_syb_pane_ParamLimits

0xec6e,	// (0x0002f595) fshwr2_icf_pane_ParamLimits

0xbe16,	// (0x0002c73d) list_double_graphic_pane_vc_g4_ParamLimits

0xbe16,	// (0x0002c73d) list_double_graphic_pane_vc_g4

0xb11d,	// (0x0002ba44) cell_ituss_key_pane_g3_ParamLimits

0xb11d,	// (0x0002ba44) cell_ituss_key_pane_g3

0xb24b,	// (0x0002bb72) cell_ituss_key_t5_ParamLimits

0xb24b,	// (0x0002bb72) cell_ituss_key_t5

0x2692,	// (0x00022fb9) popup_fep_vkbss_window_ParamLimits

0x2110,	// (0x00022a37) aid_cell_ai5_quarter

0x271d,	// (0x00023044) icf_edit_indi_pane_t1_ParamLimits

0x2a10,	// (0x00023337) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x2a10,	// (0x00023337) aid_tch_indicator_popup_pane_cp2

0x2a23,	// (0x0002334a) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x2a23,	// (0x0002334a) aid_tch_query_popup_data_pane_cp2

0x3f60,	// (0x00024887) aid_tch_query_popup_pane_ParamLimits

0x3f60,	// (0x00024887) aid_tch_query_popup_pane

0x3f60,	// (0x00024887) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3f60,	// (0x00024887) aid_tch_query_popup_data_pane_cp1

0x2f9c,	// (0x000238c3) cell_fshwr2_syb_bg_pane_ParamLimits

0xed62,	// (0x0002f689) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xed76,	// (0x0002f69d) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x2684,	// (0x00022fab) popup_fep_vkb_icf_pane_ParamLimits

0xeba4,	// (0x0002f4cb) bg_popup_fep_char_preview_window_g10

0x21d8,	// (0x00022aff) cell_ai5_widget_pane_g11_ParamLimits

0x21d8,	// (0x00022aff) cell_ai5_widget_pane_g11

0x21e4,	// (0x00022b0b) cell_ai5_widget_pane_g12_ParamLimits

0x21e4,	// (0x00022b0b) cell_ai5_widget_pane_g12

0x21f0,	// (0x00022b17) cell_ai5_widget_pane_g13_ParamLimits

0x21f0,	// (0x00022b17) cell_ai5_widget_pane_g13

0x22ee,	// (0x00022c15) cell_ai5_widget_pane_t11_ParamLimits

0x22ee,	// (0x00022c15) cell_ai5_widget_pane_t11

0x2300,	// (0x00022c27) cell_ai5_widget_pane_t12_ParamLimits

0x2300,	// (0x00022c27) cell_ai5_widget_pane_t12

0xb129,	// (0x0002ba50) cell_ituss_key_pane_g4_ParamLimits

0xb129,	// (0x0002ba50) cell_ituss_key_pane_g4

0xb145,	// (0x0002ba6c) cell_ituss_key_pane_g5_ParamLimits

0xb145,	// (0x0002ba6c) cell_ituss_key_pane_g5

0xb161,	// (0x0002ba88) cell_ituss_key_pane_g6_ParamLimits

0xb161,	// (0x0002ba88) cell_ituss_key_pane_g6

0x3b9a,	// (0x000244c1) bg_icf_pane_g1

0x26a8,	// (0x00022fcf) bg_icf_pane_g2

0x26b2,	// (0x00022fd9) bg_icf_pane_g3

0x26ba,	// (0x00022fe1) bg_icf_pane_g4

0x26c4,	// (0x00022feb) bg_icf_pane_g5

0x26ce,	// (0x00022ff5) bg_icf_pane_g6

0x26d8,	// (0x00022fff) bg_icf_pane_g7

0x26e0,	// (0x00023007) bg_icf_pane_g8

0x26ea,	// (0x00023011) bg_icf_pane_g9

0x0008,

0xfee7,	// (0x0003080e) bg_icf_pane_g

0xc9fc,	// (0x0002d323) popup_hyb_candi_window_ParamLimits

0xc9fc,	// (0x0002d323) popup_hyb_candi_window

0x3c26,	// (0x0002454d) bg_popup_sub_pane_cp01_ParamLimits

0x3c26,	// (0x0002454d) bg_popup_sub_pane_cp01

0xcc12,	// (0x0002d539) entry_hyb_candi_pane_ParamLimits

0xcc12,	// (0x0002d539) entry_hyb_candi_pane

0xcc21,	// (0x0002d548) grid_hyb_candi_pane_ParamLimits

0xcc21,	// (0x0002d548) grid_hyb_candi_pane

0xcc36,	// (0x0002d55d) grid_hyb_phrase_pane_ParamLimits

0xcc36,	// (0x0002d55d) grid_hyb_phrase_pane

0xcc45,	// (0x0002d56c) cell_hyb_candi_pane_ParamLimits

0xcc45,	// (0x0002d56c) cell_hyb_candi_pane

0xcc5d,	// (0x0002d584) cell_hyb_candi_scroll_pane

0x3328,	// (0x00023c4f) cell_hyb_candi_pane_g1

0xcc66,	// (0x0002d58d) cell_hyb_candi_pane_t1

0xcc74,	// (0x0002d59b) cell_hyb_phrase_pane

0x3328,	// (0x00023c4f) cell_hyb_phrase_pane_g1

0xcc7d,	// (0x0002d5a4) cell_hyb_phrase_pane_t1

0xcc8b,	// (0x0002d5b2) entry_hyb_candi_pane_t1

0x37c1,	// (0x000240e8) input_focus_pane_cp06

0xcc99,	// (0x0002d5c0) cell_hyb_candi_scroll_pane_g1

0xcca1,	// (0x0002d5c8) cell_hyb_candi_scroll_pane_g1_aid

0xcca9,	// (0x0002d5d0) cell_hyb_candi_scroll_pane_g2

0xccb1,	// (0x0002d5d8) cell_hyb_candi_scroll_pane_g2_aid

0xccb9,	// (0x0002d5e0) cell_hyb_candi_scroll_pane_g3

0xccc1,	// (0x0002d5e8) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small

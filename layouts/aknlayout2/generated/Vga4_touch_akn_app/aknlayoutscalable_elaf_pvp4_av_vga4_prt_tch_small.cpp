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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001aa8f };

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
0x7735,	// (0x000221c4) Screen

0x7749,	// (0x000221d8) application_window_ParamLimits

0x7749,	// (0x000221d8) application_window

0x7763,	// (0x000221f2) screen_g1

0x5d03,	// (0x00020792) area_bottom_pane_ParamLimits

0x5d03,	// (0x00020792) area_bottom_pane

0x5dc3,	// (0x00020852) area_top_pane_ParamLimits

0x5dc3,	// (0x00020852) area_top_pane

0x5e57,	// (0x000208e6) main_pane_ParamLimits

0x5e57,	// (0x000208e6) main_pane

0x776d,	// (0x000221fc) misc_graphics

0x976d,	// (0x000241fc) battery_pane_ParamLimits

0x976d,	// (0x000241fc) battery_pane

0xa44f,	// (0x00024ede) bg_status_flat_pane_g8

0xa457,	// (0x00024ee6) bg_status_flat_pane_g9

0x9835,	// (0x000242c4) context_pane_ParamLimits

0x9835,	// (0x000242c4) context_pane

0x9959,	// (0x000243e8) navi_pane_ParamLimits

0x9959,	// (0x000243e8) navi_pane

0x99e8,	// (0x00024477) signal_pane_ParamLimits

0x99e8,	// (0x00024477) signal_pane

0x0008,

0xf8b2,	// (0x0002a341) bg_status_flat_pane_g

0x9a55,	// (0x000244e4) status_pane_g1_ParamLimits

0x9a55,	// (0x000244e4) status_pane_g1

0x9a69,	// (0x000244f8) status_pane_g2_ParamLimits

0x9a69,	// (0x000244f8) status_pane_g2

0x9a75,	// (0x00024504) status_pane_g3_ParamLimits

0x9a75,	// (0x00024504) status_pane_g3

0x0004,

0xf7e0,	// (0x0002a26f) status_pane_g_ParamLimits

0xf7e0,	// (0x0002a26f) status_pane_g

0x9aa9,	// (0x00024538) title_pane_ParamLimits

0x9aa9,	// (0x00024538) title_pane

0x9ae6,	// (0x00024575) uni_indicator_pane_ParamLimits

0x9ae6,	// (0x00024575) uni_indicator_pane

0x9062,	// (0x00023af1) bg_list_pane_ParamLimits

0x9062,	// (0x00023af1) bg_list_pane

0x9082,	// (0x00023b11) find_pane

0x908a,	// (0x00023b19) listscroll_app_pane_ParamLimits

0x908a,	// (0x00023b19) listscroll_app_pane

0x9096,	// (0x00023b25) listscroll_form_pane

0x909e,	// (0x00023b2d) listscroll_gen_pane_ParamLimits

0x909e,	// (0x00023b2d) listscroll_gen_pane

0x9096,	// (0x00023b25) listscroll_set_pane

0x82cb,	// (0x00022d5a) main_idle_act_pane

0x8d3e,	// (0x000237cd) main_idle_trad_pane

0x8d3e,	// (0x000237cd) main_list_empty_pane

0x90c4,	// (0x00023b53) main_midp_pane

0x90d0,	// (0x00023b5f) main_pane_g1_ParamLimits

0x90d0,	// (0x00023b5f) main_pane_g1

0x90de,	// (0x00023b6d) popup_ai_message_window_ParamLimits

0x90de,	// (0x00023b6d) popup_ai_message_window

0x918e,	// (0x00023c1d) popup_fep_china_uni_window_ParamLimits

0x918e,	// (0x00023c1d) popup_fep_china_uni_window

0x91ee,	// (0x00023c7d) popup_fep_japan_candidate_window_ParamLimits

0x91ee,	// (0x00023c7d) popup_fep_japan_candidate_window

0x9218,	// (0x00023ca7) popup_fep_japan_predictive_window_ParamLimits

0x9218,	// (0x00023ca7) popup_fep_japan_predictive_window

0x924e,	// (0x00023cdd) popup_find_window

0x925b,	// (0x00023cea) popup_grid_graphic_window_ParamLimits

0x925b,	// (0x00023cea) popup_grid_graphic_window

0x9289,	// (0x00023d18) popup_large_graphic_colour_window

0x92af,	// (0x00023d3e) popup_menu_window_ParamLimits

0x92af,	// (0x00023d3e) popup_menu_window

0x9479,	// (0x00023f08) popup_note_image_window

0x9463,	// (0x00023ef2) popup_note_wait_window_ParamLimits

0x9463,	// (0x00023ef2) popup_note_wait_window

0x9463,	// (0x00023ef2) popup_note_window_ParamLimits

0x9463,	// (0x00023ef2) popup_note_window

0x94df,	// (0x00023f6e) popup_query_code_window_ParamLimits

0x94df,	// (0x00023f6e) popup_query_code_window

0x94f5,	// (0x00023f84) popup_query_data_code_window_ParamLimits

0x94f5,	// (0x00023f84) popup_query_data_code_window

0x9518,	// (0x00023fa7) popup_query_data_window_ParamLimits

0x9518,	// (0x00023fa7) popup_query_data_window

0x953a,	// (0x00023fc9) popup_query_sat_info_window_ParamLimits

0x953a,	// (0x00023fc9) popup_query_sat_info_window

0x9579,	// (0x00024008) popup_snote_single_graphic_window_ParamLimits

0x9579,	// (0x00024008) popup_snote_single_graphic_window

0x9579,	// (0x00024008) popup_snote_single_text_window_ParamLimits

0x9579,	// (0x00024008) popup_snote_single_text_window

0x9590,	// (0x0002401f) popup_sub_window_general

0x96d6,	// (0x00024165) popup_window_general_ParamLimits

0x96d6,	// (0x00024165) popup_window_general

0x96ef,	// (0x0002417e) power_save_pane

0x65ce,	// (0x0002105d) control_pane_g1_ParamLimits

0x65ce,	// (0x0002105d) control_pane_g1

0x65f7,	// (0x00021086) control_pane_g2_ParamLimits

0x65f7,	// (0x00021086) control_pane_g2

0x900b,	// (0x00023a9a) control_pane_g3_ParamLimits

0x900b,	// (0x00023a9a) control_pane_g3

0x0007,

0xf7c8,	// (0x0002a257) control_pane_g_ParamLimits

0xf7c8,	// (0x0002a257) control_pane_g

0x6642,	// (0x000210d1) control_pane_t1_ParamLimits

0x6642,	// (0x000210d1) control_pane_t1

0x6694,	// (0x00021123) control_pane_t2_ParamLimits

0x6694,	// (0x00021123) control_pane_t2

0x0002,

0xf7d9,	// (0x0002a268) control_pane_t_ParamLimits

0xf7d9,	// (0x0002a268) control_pane_t

0x8f2c,	// (0x000239bb) navi_navi_volume_pane_cp1

0x8f35,	// (0x000239c4) status_small_icon_pane

0x8f3d,	// (0x000239cc) status_small_pane_g1_ParamLimits

0x8f3d,	// (0x000239cc) status_small_pane_g1

0x8f71,	// (0x00023a00) status_small_pane_g2_ParamLimits

0x8f71,	// (0x00023a00) status_small_pane_g2

0x8f7d,	// (0x00023a0c) status_small_pane_g3_ParamLimits

0x8f7d,	// (0x00023a0c) status_small_pane_g3

0x8f89,	// (0x00023a18) status_small_pane_g4_ParamLimits

0x8f89,	// (0x00023a18) status_small_pane_g4

0x8f95,	// (0x00023a24) status_small_pane_g5_ParamLimits

0x8f95,	// (0x00023a24) status_small_pane_g5

0x8fa4,	// (0x00023a33) status_small_pane_g6_ParamLimits

0x8fa4,	// (0x00023a33) status_small_pane_g6

0x0007,

0xf7b7,	// (0x0002a246) status_small_pane_g_ParamLimits

0xf7b7,	// (0x0002a246) status_small_pane_g

0x8fd4,	// (0x00023a63) status_small_pane_t1

0x8ff7,	// (0x00023a86) status_small_wait_pane_ParamLimits

0x8ff7,	// (0x00023a86) status_small_wait_pane

0x87c9,	// (0x00023258) aid_levels_signal_ParamLimits

0x87c9,	// (0x00023258) aid_levels_signal

0x87db,	// (0x0002326a) signal_pane_g1_ParamLimits

0x87db,	// (0x0002326a) signal_pane_g1

0x87f0,	// (0x0002327f) signal_pane_g2_ParamLimits

0x87f0,	// (0x0002327f) signal_pane_g2

0x0001,

0xf74c,	// (0x0002a1db) signal_pane_g_ParamLimits

0xf74c,	// (0x0002a1db) signal_pane_g

0x8805,	// (0x00023294) context_pane_g1

0x7777,	// (0x00022206) title_pane_g1

0x77ad,	// (0x0002223c) title_pane_t1

0x7815,	// (0x000222a4) title_pane_t2

0x783b,	// (0x000222ca) title_pane_t3

0x0002,

0xf59b,	// (0x0002a02a) title_pane_t

0x9afe,	// (0x0002458d) aid_levels_battery_ParamLimits

0x9afe,	// (0x0002458d) aid_levels_battery

0x9b12,	// (0x000245a1) battery_pane_g1_ParamLimits

0x9b12,	// (0x000245a1) battery_pane_g1

0x9b28,	// (0x000245b7) battery_pane_g2_ParamLimits

0x9b28,	// (0x000245b7) battery_pane_g2

0x0001,

0xf7eb,	// (0x0002a27a) battery_pane_g_ParamLimits

0xf7eb,	// (0x0002a27a) battery_pane_g

0xad9f,	// (0x0002582e) uni_indicator_pane_g1

0xadb4,	// (0x00025843) uni_indicator_pane_g2

0xadca,	// (0x00025859) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0002a3e9) uni_indicator_pane_g

0x8bac,	// (0x0002363b) navi_icon_pane_ParamLimits

0x8bac,	// (0x0002363b) navi_icon_pane

0x8af3,	// (0x00023582) navi_midp_pane

0x8bc8,	// (0x00023657) navi_navi_pane

0x8bd2,	// (0x00023661) navi_text_pane_ParamLimits

0x8bd2,	// (0x00023661) navi_text_pane

0x7763,	// (0x000221f2) status_small_wait_pane_g1

0x7c7f,	// (0x0002270e) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0002a3e4) status_small_wait_pane_g

0xaab2,	// (0x00025541) navi_navi_icon_text_pane

0xaaba,	// (0x00025549) navi_navi_pane_g1_ParamLimits

0xaaba,	// (0x00025549) navi_navi_pane_g1

0xaacc,	// (0x0002555b) navi_navi_pane_g2_ParamLimits

0xaacc,	// (0x0002555b) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0002a3b2) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0002a3b2) navi_navi_pane_g

0xaade,	// (0x0002556d) navi_navi_tabs_pane

0xaae7,	// (0x00025576) navi_navi_text_pane

0xaab2,	// (0x00025541) navi_navi_volume_pane

0xaa8b,	// (0x0002551a) navi_text_pane_t1

0xaa7c,	// (0x0002550b) navi_icon_pane_g1

0xa9cf,	// (0x0002545e) navi_navi_text_pane_t1

0x69ab,	// (0x0002143a) navi_navi_volume_pane_g1

0x69b3,	// (0x00021442) volume_small_pane

0xa935,	// (0x000253c4) navi_navi_icon_text_pane_g1

0xa93d,	// (0x000253cc) navi_navi_icon_text_pane_t1

0x8bc8,	// (0x00023657) navi_tabs_2_long_pane

0x8bc8,	// (0x00023657) navi_tabs_2_pane

0x8bc8,	// (0x00023657) navi_tabs_3_long_pane

0x8bc8,	// (0x00023657) navi_tabs_3_pane

0x8bc8,	// (0x00023657) navi_tabs_4_pane

0x698b,	// (0x0002141a) tabs_2_active_pane_ParamLimits

0x698b,	// (0x0002141a) tabs_2_active_pane

0x699b,	// (0x0002142a) tabs_2_passive_pane_ParamLimits

0x699b,	// (0x0002142a) tabs_2_passive_pane

0x6959,	// (0x000213e8) tabs_3_active_pane_ParamLimits

0x6959,	// (0x000213e8) tabs_3_active_pane

0x6969,	// (0x000213f8) tabs_3_passive_pane_ParamLimits

0x6969,	// (0x000213f8) tabs_3_passive_pane

0x697a,	// (0x00021409) tabs_3_passive_pane_cp_ParamLimits

0x697a,	// (0x00021409) tabs_3_passive_pane_cp

0x690d,	// (0x0002139c) tabs_4_active_pane_ParamLimits

0x690d,	// (0x0002139c) tabs_4_active_pane

0x6920,	// (0x000213af) tabs_4_passive_pane_ParamLimits

0x6920,	// (0x000213af) tabs_4_passive_pane

0x6931,	// (0x000213c0) tabs_4_passive_pane_cp_ParamLimits

0x6931,	// (0x000213c0) tabs_4_passive_pane_cp

0x6942,	// (0x000213d1) tabs_4_passive_pane_cp2_ParamLimits

0x6942,	// (0x000213d1) tabs_4_passive_pane_cp2

0x68e9,	// (0x00021378) tabs_2_long_active_pane_ParamLimits

0x68e9,	// (0x00021378) tabs_2_long_active_pane

0x68fb,	// (0x0002138a) tabs_2_long_passive_pane_ParamLimits

0x68fb,	// (0x0002138a) tabs_2_long_passive_pane

0x68aa,	// (0x00021339) tabs_3_long_active_pane_ParamLimits

0x68aa,	// (0x00021339) tabs_3_long_active_pane

0x68bd,	// (0x0002134c) tabs_3_long_passive_pane_ParamLimits

0x68bd,	// (0x0002134c) tabs_3_long_passive_pane

0x68d6,	// (0x00021365) tabs_3_long_passive_pane_cp_ParamLimits

0x68d6,	// (0x00021365) tabs_3_long_passive_pane_cp

0x6850,	// (0x000212df) volume_small_pane_g1

0x6859,	// (0x000212e8) volume_small_pane_g2

0x6862,	// (0x000212f1) volume_small_pane_g3

0x686b,	// (0x000212fa) volume_small_pane_g4

0x6874,	// (0x00021303) volume_small_pane_g5

0x687d,	// (0x0002130c) volume_small_pane_g6

0x6886,	// (0x00021315) volume_small_pane_g7

0x688f,	// (0x0002131e) volume_small_pane_g8

0x6898,	// (0x00021327) volume_small_pane_g9

0x68a1,	// (0x00021330) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0002a37e) volume_small_pane_g

0x784d,	// (0x000222dc) bg_active_tab_pane_cp2_ParamLimits

0x784d,	// (0x000222dc) bg_active_tab_pane_cp2

0x785b,	// (0x000222ea) tabs_3_active_pane_g1

0x7863,	// (0x000222f2) tabs_3_active_pane_t1

0x784d,	// (0x000222dc) bg_passive_tab_pane_cp2_ParamLimits

0x784d,	// (0x000222dc) bg_passive_tab_pane_cp2

0x785b,	// (0x000222ea) tabs_3_passive_pane_g1

0x7863,	// (0x000222f2) tabs_3_passive_pane_t1

0x784d,	// (0x000222dc) bg_active_tab_pane_cp3_ParamLimits

0x784d,	// (0x000222dc) bg_active_tab_pane_cp3

0x7875,	// (0x00022304) tabs_4_active_pane_g1

0x787d,	// (0x0002230c) tabs_4_active_pane_t1

0x784d,	// (0x000222dc) bg_passive_tab_pane_cp3_ParamLimits

0x784d,	// (0x000222dc) bg_passive_tab_pane_cp3

0x7875,	// (0x00022304) tabs_4_1_passive_pane_g1

0x787d,	// (0x0002230c) tabs_4_1_passive_pane_t1

0x90c4,	// (0x00023b53) list_highlight_pane_cp2

0xb02e,	// (0x00025abd) list_set_pane_ParamLimits

0xb02e,	// (0x00025abd) list_set_pane

0xb0f6,	// (0x00025b85) main_pane_set_t1_ParamLimits

0xb0f6,	// (0x00025b85) main_pane_set_t1

0xb116,	// (0x00025ba5) main_pane_set_t2_ParamLimits

0xb116,	// (0x00025ba5) main_pane_set_t2

0xb12a,	// (0x00025bb9) main_pane_set_t3_ParamLimits

0xb12a,	// (0x00025bb9) main_pane_set_t3

0xb13e,	// (0x00025bcd) main_pane_set_t4_ParamLimits

0xb13e,	// (0x00025bcd) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0002a44e) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0002a44e) main_pane_set_t

0xb15e,	// (0x00025bed) setting_code_pane

0xb168,	// (0x00025bf7) setting_slider_graphic_pane

0xb168,	// (0x00025bf7) setting_slider_pane

0xb168,	// (0x00025bf7) setting_text_pane

0xb168,	// (0x00025bf7) setting_volume_pane

0x60ae,	// (0x00020b3d) volume_set_pane

0x784d,	// (0x000222dc) bg_set_opt_pane_cp

0x60b8,	// (0x00020b47) setting_slider_pane_t1

0x60ce,	// (0x00020b5d) setting_slider_pane_t2

0x60e8,	// (0x00020b77) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0002a031) setting_slider_pane_t

0x6100,	// (0x00020b8f) slider_set_pane

0x776d,	// (0x000221fc) bg_set_opt_pane_cp2

0x788f,	// (0x0002231e) setting_slider_graphic_pane_g1

0x6116,	// (0x00020ba5) setting_slider_graphic_pane_t1

0x6126,	// (0x00020bb5) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0002a038) setting_slider_graphic_pane_t

0x6136,	// (0x00020bc5) slider_set_pane_cp

0x776d,	// (0x000221fc) input_focus_pane_cp1

0xafef,	// (0x00025a7e) list_set_text_pane

0x7763,	// (0x000221f2) setting_text_pane_g1

0x776d,	// (0x000221fc) input_focus_pane_cp2

0x7763,	// (0x000221f2) setting_code_pane_g1

0x7898,	// (0x00022327) setting_code_pane_t1

0x4cde,	// (0x0001f76d) set_text_pane_t1_ParamLimits

0x4cde,	// (0x0001f76d) set_text_pane_t1

0x813b,	// (0x00022bca) set_opt_bg_pane_g1

0x8143,	// (0x00022bd2) set_opt_bg_pane_g2

0xafc7,	// (0x00025a56) set_opt_bg_pane_g3

0x8153,	// (0x00022be2) set_opt_bg_pane_g4

0x815b,	// (0x00022bea) set_opt_bg_pane_g5

0x8163,	// (0x00022bf2) set_opt_bg_pane_g6

0xafd1,	// (0x00025a60) set_opt_bg_pane_g7

0xafdb,	// (0x00025a6a) set_opt_bg_pane_g8

0xafe5,	// (0x00025a74) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0002a43b) set_opt_bg_pane_g

0xafba,	// (0x00025a49) slider_set_pane_g1

0x6a34,	// (0x000214c3) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0002a42c) slider_set_pane_g

0x69bc,	// (0x0002144b) volume_set_pane_g1

0x69c6,	// (0x00021455) volume_set_pane_g2

0x69d0,	// (0x0002145f) volume_set_pane_g3

0x69da,	// (0x00021469) volume_set_pane_g4

0x69e4,	// (0x00021473) volume_set_pane_g5

0x69ee,	// (0x0002147d) volume_set_pane_g6

0x69f8,	// (0x00021487) volume_set_pane_g7

0x6a02,	// (0x00021491) volume_set_pane_g8

0x6a0c,	// (0x0002149b) volume_set_pane_g9

0x6a16,	// (0x000214a5) volume_set_pane_g10

0x0009,

0xf975,	// (0x0002a404) volume_set_pane_g

0x78a6,	// (0x00022335) indicator_pane_ParamLimits

0x78a6,	// (0x00022335) indicator_pane

0x78b2,	// (0x00022341) main_idle_pane_g2_ParamLimits

0x78b2,	// (0x00022341) main_idle_pane_g2

0x78da,	// (0x00022369) main_pane_idle_g1_ParamLimits

0x78da,	// (0x00022369) main_pane_idle_g1

0x78e8,	// (0x00022377) popup_clock_digital_analogue_window_ParamLimits

0x78e8,	// (0x00022377) popup_clock_digital_analogue_window

0x78ff,	// (0x0002238e) soft_indicator_pane_ParamLimits

0x78ff,	// (0x0002238e) soft_indicator_pane

0x790d,	// (0x0002239c) wallpaper_pane_ParamLimits

0x790d,	// (0x0002239c) wallpaper_pane

0x7763,	// (0x000221f2) wallpaper_pane_g1

0x7921,	// (0x000223b0) indicator_pane_g1_ParamLimits

0x7921,	// (0x000223b0) indicator_pane_g1

0xb42c,	// (0x00025ebb) navi_navi_icon_text_pane_srt_g1

0x793c,	// (0x000223cb) soft_indicator_pane_t1

0x7956,	// (0x000223e5) aid_ps_area_pane

0x7967,	// (0x000223f6) aid_ps_clock_pane

0x7975,	// (0x00022404) aid_ps_indicator_pane

0x7981,	// (0x00022410) indicator_ps_pane_ParamLimits

0x7981,	// (0x00022410) indicator_ps_pane

0x7990,	// (0x0002241f) power_save_pane_g1_ParamLimits

0x7990,	// (0x0002241f) power_save_pane_g1

0x799c,	// (0x0002242b) power_save_pane_g2_ParamLimits

0x799c,	// (0x0002242b) power_save_pane_g2

0x5cb7,	// (0x00020746) aid_navinavi_width_pane

0x7956,	// (0x000223e5) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0002a03d) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0002a03d) power_save_pane_g

0x79aa,	// (0x00022439) power_save_pane_t1_ParamLimits

0x79aa,	// (0x00022439) power_save_pane_t1

0x7967,	// (0x000223f6) aid_ps_clock_pane_ParamLimits

0x7975,	// (0x00022404) aid_ps_indicator_pane_ParamLimits

0x79bc,	// (0x0002244b) power_save_pane_t4_ParamLimits

0x79bc,	// (0x0002244b) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0002a042) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0002a042) power_save_pane_t

0x79e6,	// (0x00022475) power_save_t3_ParamLimits

0x79e6,	// (0x00022475) power_save_t3

0x79d1,	// (0x00022460) power_save_t2_ParamLimits

0x79d1,	// (0x00022460) power_save_t2

0x79fb,	// (0x0002248a) indicator_ps_pane_g1

0x7a04,	// (0x00022493) ai_gene_pane_ParamLimits

0x7a04,	// (0x00022493) ai_gene_pane

0x7a10,	// (0x0002249f) ai_links_pane_ParamLimits

0x7a10,	// (0x0002249f) ai_links_pane

0x7a1c,	// (0x000224ab) indicator_pane_cp1_ParamLimits

0x7a1c,	// (0x000224ab) indicator_pane_cp1

0x7a28,	// (0x000224b7) main_pane_idle_g1_cp_ParamLimits

0x7a28,	// (0x000224b7) main_pane_idle_g1_cp

0x7a34,	// (0x000224c3) popup_ai_links_title_window

0x7a3d,	// (0x000224cc) soft_indicator_pane_cp1_ParamLimits

0x7a3d,	// (0x000224cc) soft_indicator_pane_cp1

0xad8d,	// (0x0002581c) ai_links_pane_g1

0xad96,	// (0x00025825) grid_ai_links_pane

0xad72,	// (0x00025801) ai_gene_pane_1

0xad7b,	// (0x0002580a) ai_gene_pane_2

0xad84,	// (0x00025813) list_highlight_pane_cp4

0xad52,	// (0x000257e1) cell_ai_link_pane_ParamLimits

0xad52,	// (0x000257e1) cell_ai_link_pane

0xad4a,	// (0x000257d9) cell_ai_link_pane_g1

0x7c7f,	// (0x0002270e) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0002a3df) cell_ai_link_pane_g

0x776d,	// (0x000221fc) grid_highlight_cp2

0x776d,	// (0x000221fc) bg_popup_sub_pane_cp1

0x7a57,	// (0x000224e6) popup_ai_links_title_window_t1

0xac96,	// (0x00025725) ai_gene_pane_1_g1_ParamLimits

0xac96,	// (0x00025725) ai_gene_pane_1_g1

0xaca2,	// (0x00025731) ai_gene_pane_1_g2_ParamLimits

0xaca2,	// (0x00025731) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0002a3d5) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0002a3d5) ai_gene_pane_1_g

0xacaf,	// (0x0002573e) ai_gene_pane_1_t1_ParamLimits

0xacaf,	// (0x0002573e) ai_gene_pane_1_t1

0xace3,	// (0x00025772) grid_ai_soft_ind_pane

0xac81,	// (0x00025710) ai_gene_pane_2_t1_ParamLimits

0xac81,	// (0x00025710) ai_gene_pane_2_t1

0x7a66,	// (0x000224f5) main_pane_empty_t1_ParamLimits

0x7a66,	// (0x000224f5) main_pane_empty_t1

0x7a7e,	// (0x0002250d) main_pane_empty_t2_ParamLimits

0x7a7e,	// (0x0002250d) main_pane_empty_t2

0x7a93,	// (0x00022522) main_pane_empty_t3_ParamLimits

0x7a93,	// (0x00022522) main_pane_empty_t3

0x7aa5,	// (0x00022534) main_pane_empty_t4_ParamLimits

0x7aa5,	// (0x00022534) main_pane_empty_t4

0x7ab7,	// (0x00022546) main_pane_empty_t5_ParamLimits

0x7ab7,	// (0x00022546) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0002a047) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0002a047) main_pane_empty_t

0x818c,	// (0x00022c1b) bg_popup_window_pane_ParamLimits

0x818c,	// (0x00022c1b) bg_popup_window_pane

0xa9dd,	// (0x0002546c) find_popup_pane_cp2_ParamLimits

0xa9dd,	// (0x0002546c) find_popup_pane_cp2

0xa9e9,	// (0x00025478) heading_pane_ParamLimits

0xa9e9,	// (0x00025478) heading_pane

0x776d,	// (0x000221fc) bg_popup_sub_pane

0xa957,	// (0x000253e6) bg_popup_window_pane_g1_ParamLimits

0xa957,	// (0x000253e6) bg_popup_window_pane_g1

0xa963,	// (0x000253f2) bg_popup_window_pane_g2_ParamLimits

0xa963,	// (0x000253f2) bg_popup_window_pane_g2

0xa96f,	// (0x000253fe) bg_popup_window_pane_g3_ParamLimits

0xa96f,	// (0x000253fe) bg_popup_window_pane_g3

0xa97b,	// (0x0002540a) bg_popup_window_pane_g4_ParamLimits

0xa97b,	// (0x0002540a) bg_popup_window_pane_g4

0xa987,	// (0x00025416) bg_popup_window_pane_g5_ParamLimits

0xa987,	// (0x00025416) bg_popup_window_pane_g5

0xa993,	// (0x00025422) bg_popup_window_pane_g6_ParamLimits

0xa993,	// (0x00025422) bg_popup_window_pane_g6

0xa99f,	// (0x0002542e) bg_popup_window_pane_g7_ParamLimits

0xa99f,	// (0x0002542e) bg_popup_window_pane_g7

0xa9ab,	// (0x0002543a) bg_popup_window_pane_g8_ParamLimits

0xa9ab,	// (0x0002543a) bg_popup_window_pane_g8

0xa9b7,	// (0x00025446) bg_popup_window_pane_g9_ParamLimits

0xa9b7,	// (0x00025446) bg_popup_window_pane_g9

0xa9c3,	// (0x00025452) bg_popup_window_pane_g10_ParamLimits

0xa9c3,	// (0x00025452) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0002a39d) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0002a39d) bg_popup_window_pane_g

0xa8ec,	// (0x0002537b) bg_popup_heading_pane_ParamLimits

0xa8ec,	// (0x0002537b) bg_popup_heading_pane

0x6a7a,	// (0x00021509) tabs_4_passive_pane_cp_srt_ParamLimits

0x6a7a,	// (0x00021509) tabs_4_passive_pane_cp_srt

0x6a8c,	// (0x0002151b) tabs_4_passive_pane_srt_ParamLimits

0xa900,	// (0x0002538f) heading_pane_g2

0x6a8c,	// (0x0002151b) tabs_4_passive_pane_srt

0x90c4,	// (0x00023b53) bg_passive_tab_pane_cp3_srt_ParamLimits

0x90c4,	// (0x00023b53) bg_passive_tab_pane_cp3_srt

0xa908,	// (0x00025397) heading_pane_t1_ParamLimits

0xa908,	// (0x00025397) heading_pane_t1

0xa91f,	// (0x000253ae) heading_pane_t2_ParamLimits

0xa91f,	// (0x000253ae) heading_pane_t2

0x0001,

0xf909,	// (0x0002a398) heading_pane_t_ParamLimits

0xf909,	// (0x0002a398) heading_pane_t

0xa417,	// (0x00024ea6) bg_popup_heading_pane_g1

0xa4c6,	// (0x00024f55) bg_popup_heading_pane_g2

0xa4d0,	// (0x00024f5f) bg_popup_heading_pane_g3

0xa4da,	// (0x00024f69) bg_popup_heading_pane_g4

0xa4e4,	// (0x00024f73) bg_popup_heading_pane_g5

0xa4ee,	// (0x00024f7d) bg_popup_heading_pane_g6

0xa4f6,	// (0x00024f85) bg_popup_heading_pane_g7

0xa4fe,	// (0x00024f8d) bg_popup_heading_pane_g8

0xa508,	// (0x00024f97) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0002a354) bg_popup_heading_pane_g

0x9c00,	// (0x0002468f) bg_popup_sub_pane_g1

0x9c08,	// (0x00024697) bg_popup_sub_pane_g2

0x9c10,	// (0x0002469f) bg_popup_sub_pane_g3

0x9c18,	// (0x000246a7) bg_popup_sub_pane_g4

0x9c20,	// (0x000246af) bg_popup_sub_pane_g5

0x9c28,	// (0x000246b7) bg_popup_sub_pane_g6

0x9c30,	// (0x000246bf) bg_popup_sub_pane_g7

0x9c38,	// (0x000246c7) bg_popup_sub_pane_g8

0x9c40,	// (0x000246cf) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0002a32e) bg_popup_sub_pane_g

0x7ac9,	// (0x00022558) bg_popup_window_pane_cp5_ParamLimits

0x7ac9,	// (0x00022558) bg_popup_window_pane_cp5

0x7ae5,	// (0x00022574) popup_note_window_g1_ParamLimits

0x7ae5,	// (0x00022574) popup_note_window_g1

0x7af1,	// (0x00022580) popup_note_window_t1_ParamLimits

0x7af1,	// (0x00022580) popup_note_window_t1

0x7b07,	// (0x00022596) popup_note_window_t2_ParamLimits

0x7b07,	// (0x00022596) popup_note_window_t2

0x7b1d,	// (0x000225ac) popup_note_window_t3_ParamLimits

0x7b1d,	// (0x000225ac) popup_note_window_t3

0x7b33,	// (0x000225c2) popup_note_window_t4_ParamLimits

0x7b33,	// (0x000225c2) popup_note_window_t4

0x7b5b,	// (0x000225ea) popup_note_window_t5_ParamLimits

0x7b5b,	// (0x000225ea) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0002a052) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0002a052) popup_note_window_t

0x7b7f,	// (0x0002260e) bg_popup_window_pane_cp6_ParamLimits

0x7b7f,	// (0x0002260e) bg_popup_window_pane_cp6

0xa393,	// (0x00024e22) popup_note_image_window_g1_ParamLimits

0xa393,	// (0x00024e22) popup_note_image_window_g1

0xa39f,	// (0x00024e2e) popup_note_image_window_g2_ParamLimits

0xa39f,	// (0x00024e2e) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0002a322) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0002a322) popup_note_image_window_g

0xa3b8,	// (0x00024e47) popup_note_image_window_t1_ParamLimits

0xa3b8,	// (0x00024e47) popup_note_image_window_t1

0xa3d1,	// (0x00024e60) popup_note_image_window_t2_ParamLimits

0xa3d1,	// (0x00024e60) popup_note_image_window_t2

0xa3ea,	// (0x00024e79) popup_note_image_window_t3_ParamLimits

0xa3ea,	// (0x00024e79) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0002a327) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0002a327) popup_note_image_window_t

0xa253,	// (0x00024ce2) bg_popup_window_pane_cp7_ParamLimits

0xa253,	// (0x00024ce2) bg_popup_window_pane_cp7

0xa283,	// (0x00024d12) popup_note_wait_window_g1_ParamLimits

0xa283,	// (0x00024d12) popup_note_wait_window_g1

0xa28f,	// (0x00024d1e) popup_note_wait_window_g2_ParamLimits

0xa28f,	// (0x00024d1e) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0002a310) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0002a310) popup_note_wait_window_g

0xa2a7,	// (0x00024d36) popup_note_wait_window_t1_ParamLimits

0xa2a7,	// (0x00024d36) popup_note_wait_window_t1

0xa2ce,	// (0x00024d5d) popup_note_wait_window_t2_ParamLimits

0xa2ce,	// (0x00024d5d) popup_note_wait_window_t2

0xa2ec,	// (0x00024d7b) popup_note_wait_window_t3_ParamLimits

0xa2ec,	// (0x00024d7b) popup_note_wait_window_t3

0xa2ff,	// (0x00024d8e) popup_note_wait_window_t4_ParamLimits

0xa2ff,	// (0x00024d8e) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0002a317) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0002a317) popup_note_wait_window_t

0xa324,	// (0x00024db3) wait_bar_pane_ParamLimits

0xa324,	// (0x00024db3) wait_bar_pane

0x776d,	// (0x000221fc) wait_anim_pane

0x776d,	// (0x000221fc) wait_border_pane

0x7763,	// (0x000221f2) wait_anim_pane_g1

0x7763,	// (0x000221f2) wait_anim_pane_g2

0x0001,

0xf747,	// (0x0002a1d6) wait_anim_pane_g

0xa1f7,	// (0x00024c86) wait_border_pane_g1

0xa202,	// (0x00024c91) wait_border_pane_g2

0xa20b,	// (0x00024c9a) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0002a309) wait_border_pane_g

0xa153,	// (0x00024be2) bg_popup_window_pane_cp16_ParamLimits

0xa153,	// (0x00024be2) bg_popup_window_pane_cp16

0xa161,	// (0x00024bf0) indicator_popup_pane_cp4_ParamLimits

0xa161,	// (0x00024bf0) indicator_popup_pane_cp4

0xa175,	// (0x00024c04) popup_query_data_window_t1_ParamLimits

0xa175,	// (0x00024c04) popup_query_data_window_t1

0xa187,	// (0x00024c16) popup_query_data_window_t2_ParamLimits

0xa187,	// (0x00024c16) popup_query_data_window_t2

0xa1a0,	// (0x00024c2f) popup_query_data_window_t3_ParamLimits

0xa1a0,	// (0x00024c2f) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0002a302) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0002a302) popup_query_data_window_t

0xa1ba,	// (0x00024c49) query_popup_data_pane_ParamLimits

0xa1ba,	// (0x00024c49) query_popup_data_pane

0xa1ce,	// (0x00024c5d) query_popup_data_pane_cp1_ParamLimits

0xa1ce,	// (0x00024c5d) query_popup_data_pane_cp1

0x7b7f,	// (0x0002260e) bg_popup_window_pane_cp10_ParamLimits

0x7b7f,	// (0x0002260e) bg_popup_window_pane_cp10

0xa0b6,	// (0x00024b45) indicator_popup_pane_ParamLimits

0xa0b6,	// (0x00024b45) indicator_popup_pane

0x7be0,	// (0x0002266f) popup_query_code_window_t1_ParamLimits

0x7be0,	// (0x0002266f) popup_query_code_window_t1

0xa0ce,	// (0x00024b5d) popup_query_code_window_t2_ParamLimits

0xa0ce,	// (0x00024b5d) popup_query_code_window_t2

0xa10c,	// (0x00024b9b) popup_query_code_window_t3_ParamLimits

0xa10c,	// (0x00024b9b) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0002a2fb) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0002a2fb) popup_query_code_window_t

0xa13b,	// (0x00024bca) query_popup_pane_ParamLimits

0xa13b,	// (0x00024bca) query_popup_pane

0x7b7f,	// (0x0002260e) bg_popup_window_pane_cp15_ParamLimits

0x7b7f,	// (0x0002260e) bg_popup_window_pane_cp15

0x7b9f,	// (0x0002262e) indicator_popup_pane_cp1_ParamLimits

0x7b9f,	// (0x0002262e) indicator_popup_pane_cp1

0x7bb2,	// (0x00022641) indicator_popup_pane_cp2_ParamLimits

0x7bb2,	// (0x00022641) indicator_popup_pane_cp2

0x7bcd,	// (0x0002265c) popup_query_data_code_window_g1_ParamLimits

0x7bcd,	// (0x0002265c) popup_query_data_code_window_g1

0x7be0,	// (0x0002266f) popup_query_data_code_window_t1_ParamLimits

0x7be0,	// (0x0002266f) popup_query_data_code_window_t1

0x7bf2,	// (0x00022681) popup_query_data_code_window_t2_ParamLimits

0x7bf2,	// (0x00022681) popup_query_data_code_window_t2

0x7c04,	// (0x00022693) popup_query_data_code_window_t3_ParamLimits

0x7c04,	// (0x00022693) popup_query_data_code_window_t3

0x7c1a,	// (0x000226a9) popup_query_data_code_window_t4_ParamLimits

0x7c1a,	// (0x000226a9) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0002a05d) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0002a05d) popup_query_data_code_window_t

0x8b68,	// (0x000235f7) list_single_midp_graphic_pane_g3

0x7c34,	// (0x000226c3) query_popup_data_pane_cp2_ParamLimits

0x7c47,	// (0x000226d6) query_popup_pane_cp2_ParamLimits

0x7c47,	// (0x000226d6) query_popup_pane_cp2

0x776d,	// (0x000221fc) bg_popup_window_pane_cp11

0xa08a,	// (0x00024b19) heading_pane_cp5

0x7d37,	// (0x000227c6) listscroll_popup_info_pane

0x776d,	// (0x000221fc) input_focus_pane_cp3

0x7c62,	// (0x000226f1) query_popup_pane_t1

0x7c70,	// (0x000226ff) list_popup_info_pane_ParamLimits

0x7c70,	// (0x000226ff) list_popup_info_pane

0x7c7f,	// (0x0002270e) listscroll_popup_info_pane_g1

0x7c87,	// (0x00022716) scroll_pane_cp7

0x7c91,	// (0x00022720) popup_info_list_pane_t1_ParamLimits

0x7c91,	// (0x00022720) popup_info_list_pane_t1

0x7cab,	// (0x0002273a) popup_info_list_pane_t2_ParamLimits

0x7cab,	// (0x0002273a) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0002a066) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0002a066) popup_info_list_pane_t

0x776d,	// (0x000221fc) bg_popup_window_pane_cp12

0xb446,	// (0x00025ed5) find_popup_pane

0x784d,	// (0x000222dc) bg_popup_window_pane_cp3

0x7cc5,	// (0x00022754) heading_pane_cp3

0x7cd1,	// (0x00022760) listscroll_popup_graphic_pane

0x776d,	// (0x000221fc) bg_popup_window_pane_cp4

0x7d2d,	// (0x000227bc) heading_pane_cp4

0x7d37,	// (0x000227c6) listscroll_popup_colour_pane

0x7d3f,	// (0x000227ce) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d3f,	// (0x000227ce) cell_large_graphic_colour_none_popup_pane

0x7d53,	// (0x000227e2) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d53,	// (0x000227e2) grid_large_graphic_colour_popup_pane

0x7d7f,	// (0x0002280e) listscroll_popup_colour_pane_g1_ParamLimits

0x7d7f,	// (0x0002280e) listscroll_popup_colour_pane_g1

0x7d96,	// (0x00022825) listscroll_popup_colour_pane_g2_ParamLimits

0x7d96,	// (0x00022825) listscroll_popup_colour_pane_g2

0x7dad,	// (0x0002283c) listscroll_popup_colour_pane_g3_ParamLimits

0x7dad,	// (0x0002283c) listscroll_popup_colour_pane_g3

0x7dbd,	// (0x0002284c) listscroll_popup_colour_pane_g4_ParamLimits

0x7dbd,	// (0x0002284c) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0002a06b) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0002a06b) listscroll_popup_colour_pane_g

0x7dd1,	// (0x00022860) scroll_pane_cp6_ParamLimits

0x7dd1,	// (0x00022860) scroll_pane_cp6

0x7de3,	// (0x00022872) cell_large_graphic_colour_popup_pane_ParamLimits

0x7de3,	// (0x00022872) cell_large_graphic_colour_popup_pane

0x7e08,	// (0x00022897) cell_large_graphic_colour_none_popup_pane_t1

0x776d,	// (0x000221fc) grid_highlight_pane_cp5

0x7e17,	// (0x000228a6) cell_large_graphic_colour_popup_pane_g1

0x7e1f,	// (0x000228ae) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0002a074) cell_large_graphic_colour_popup_pane_g

0x7e27,	// (0x000228b6) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e30,	// (0x000228bf) grid_highlight_pane_cp4

0x7e38,	// (0x000228c7) bg_popup_window_pane_cp8_ParamLimits

0x7e38,	// (0x000228c7) bg_popup_window_pane_cp8

0x7e53,	// (0x000228e2) popup_snote_single_text_window_g1_ParamLimits

0x7e53,	// (0x000228e2) popup_snote_single_text_window_g1

0x7e65,	// (0x000228f4) popup_snote_single_text_window_t1_ParamLimits

0x7e65,	// (0x000228f4) popup_snote_single_text_window_t1

0x7e78,	// (0x00022907) popup_snote_single_text_window_t2_ParamLimits

0x7e78,	// (0x00022907) popup_snote_single_text_window_t2

0x7e8b,	// (0x0002291a) popup_snote_single_text_window_t3_ParamLimits

0x7e8b,	// (0x0002291a) popup_snote_single_text_window_t3

0x7ec4,	// (0x00022953) popup_snote_single_text_window_t4_ParamLimits

0x7ec4,	// (0x00022953) popup_snote_single_text_window_t4

0x7ef8,	// (0x00022987) popup_snote_single_text_window_t5_ParamLimits

0x7ef8,	// (0x00022987) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0002a079) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0002a079) popup_snote_single_text_window_t

0x7f27,	// (0x000229b6) bg_popup_window_pane_cp9_ParamLimits

0x7f27,	// (0x000229b6) bg_popup_window_pane_cp9

0x7e53,	// (0x000228e2) popup_snote_single_graphic_window_g1_ParamLimits

0x7e53,	// (0x000228e2) popup_snote_single_graphic_window_g1

0x7f35,	// (0x000229c4) popup_snote_single_graphic_window_g2_ParamLimits

0x7f35,	// (0x000229c4) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0002a084) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0002a084) popup_snote_single_graphic_window_g

0x7f41,	// (0x000229d0) popup_snote_single_graphic_window_t1_ParamLimits

0x7f41,	// (0x000229d0) popup_snote_single_graphic_window_t1

0x7f54,	// (0x000229e3) popup_snote_single_graphic_window_t2_ParamLimits

0x7f54,	// (0x000229e3) popup_snote_single_graphic_window_t2

0x7f67,	// (0x000229f6) popup_snote_single_graphic_window_t3_ParamLimits

0x7f67,	// (0x000229f6) popup_snote_single_graphic_window_t3

0x7fa0,	// (0x00022a2f) popup_snote_single_graphic_window_t4_ParamLimits

0x7fa0,	// (0x00022a2f) popup_snote_single_graphic_window_t4

0x7fd4,	// (0x00022a63) popup_snote_single_graphic_window_t5_ParamLimits

0x7fd4,	// (0x00022a63) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0002a089) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0002a089) popup_snote_single_graphic_window_t

0xb384,	// (0x00025e13) grid_graphic_popup_pane_ParamLimits

0xb384,	// (0x00025e13) grid_graphic_popup_pane

0xb3b2,	// (0x00025e41) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3b2,	// (0x00025e41) listscroll_popup_graphic_pane_g1

0xb3c6,	// (0x00025e55) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3c6,	// (0x00025e55) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0002a478) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0002a478) listscroll_popup_graphic_pane_g

0xb3da,	// (0x00025e69) scroll_pane_cp5

0xb32c,	// (0x00025dbb) cell_graphic_popup_pane_ParamLimits

0xb32c,	// (0x00025dbb) cell_graphic_popup_pane

0xb30d,	// (0x00025d9c) cell_graphic_popup_pane_g1

0xb315,	// (0x00025da4) cell_graphic_popup_pane_g2

0x7e27,	// (0x000228b6) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0002a471) cell_graphic_popup_pane_g

0xb31e,	// (0x00025dad) cell_graphic_popup_pane_t2

0x7e30,	// (0x000228bf) grid_highlight_pane_cp3

0x8015,	// (0x00022aa4) list_gen_pane_ParamLimits

0x8015,	// (0x00022aa4) list_gen_pane

0x8047,	// (0x00022ad6) scroll_pane

0xb26f,	// (0x00025cfe) bg_list_pane_g1_ParamLimits

0xb26f,	// (0x00025cfe) bg_list_pane_g1

0xb28a,	// (0x00025d19) bg_list_pane_g2_ParamLimits

0xb28a,	// (0x00025d19) bg_list_pane_g2

0xb29d,	// (0x00025d2c) bg_list_pane_g3_ParamLimits

0xb29d,	// (0x00025d2c) bg_list_pane_g3

0xb2af,	// (0x00025d3e) bg_list_pane_g4_ParamLimits

0xb2af,	// (0x00025d3e) bg_list_pane_g4

0xb2c1,	// (0x00025d50) bg_list_pane_g5_ParamLimits

0xb2c1,	// (0x00025d50) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0002a466) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0002a466) bg_list_pane_g

0x5636,	// (0x000200c5) list_double2_graphic_large_graphic_pane_ParamLimits

0x5636,	// (0x000200c5) list_double2_graphic_large_graphic_pane

0x5636,	// (0x000200c5) list_double2_graphic_pane_ParamLimits

0x5636,	// (0x000200c5) list_double2_graphic_pane

0x5636,	// (0x000200c5) list_double2_large_graphic_pane_ParamLimits

0x5636,	// (0x000200c5) list_double2_large_graphic_pane

0xb200,	// (0x00025c8f) list_double2_pane_ParamLimits

0xb200,	// (0x00025c8f) list_double2_pane

0x5636,	// (0x000200c5) list_double_graphic_heading_pane_ParamLimits

0x5636,	// (0x000200c5) list_double_graphic_heading_pane

0x5636,	// (0x000200c5) list_double_graphic_pane_ParamLimits

0x5636,	// (0x000200c5) list_double_graphic_pane

0x5636,	// (0x000200c5) list_double_heading_pane_ParamLimits

0x5636,	// (0x000200c5) list_double_heading_pane

0x5636,	// (0x000200c5) list_double_large_graphic_pane_ParamLimits

0x5636,	// (0x000200c5) list_double_large_graphic_pane

0x5636,	// (0x000200c5) list_double_number_pane_ParamLimits

0x5636,	// (0x000200c5) list_double_number_pane

0x5636,	// (0x000200c5) list_double_pane_ParamLimits

0x5636,	// (0x000200c5) list_double_pane

0x5636,	// (0x000200c5) list_double_time_pane_ParamLimits

0x5636,	// (0x000200c5) list_double_time_pane

0x5636,	// (0x000200c5) list_setting_number_pane_ParamLimits

0x5636,	// (0x000200c5) list_setting_number_pane

0x5636,	// (0x000200c5) list_setting_pane_ParamLimits

0x5636,	// (0x000200c5) list_setting_pane

0xb22b,	// (0x00025cba) list_single_2graphic_pane_ParamLimits

0xb22b,	// (0x00025cba) list_single_2graphic_pane

0xb22b,	// (0x00025cba) list_single_graphic_heading_pane_ParamLimits

0xb22b,	// (0x00025cba) list_single_graphic_heading_pane

0xb22b,	// (0x00025cba) list_single_graphic_pane_ParamLimits

0xb22b,	// (0x00025cba) list_single_graphic_pane

0xb22b,	// (0x00025cba) list_single_heading_pane_ParamLimits

0xb22b,	// (0x00025cba) list_single_heading_pane

0x5675,	// (0x00020104) list_single_large_graphic_pane_ParamLimits

0x5675,	// (0x00020104) list_single_large_graphic_pane

0xb22b,	// (0x00025cba) list_single_number_heading_pane_ParamLimits

0xb22b,	// (0x00025cba) list_single_number_heading_pane

0xb22b,	// (0x00025cba) list_single_number_pane_ParamLimits

0xb22b,	// (0x00025cba) list_single_number_pane

0xb22b,	// (0x00025cba) list_single_pane_ParamLimits

0xb22b,	// (0x00025cba) list_single_pane

0x776d,	// (0x000221fc) list_highlight_pane_cp1

0x4d05,	// (0x0001f794) list_single_pane_g1_ParamLimits

0x4d05,	// (0x0001f794) list_single_pane_g1

0x4d11,	// (0x0001f7a0) list_single_pane_g2_ParamLimits

0x4d11,	// (0x0001f7a0) list_single_pane_g2

0x0001,

0xf60c,	// (0x0002a09b) list_single_pane_g_ParamLimits

0xf60c,	// (0x0002a09b) list_single_pane_g

0x5620,	// (0x000200af) list_single_pane_t1_ParamLimits

0x5620,	// (0x000200af) list_single_pane_t1

0x4d05,	// (0x0001f794) list_single_number_pane_g1_ParamLimits

0x4d05,	// (0x0001f794) list_single_number_pane_g1

0x4d11,	// (0x0001f7a0) list_single_number_pane_g2_ParamLimits

0x4d11,	// (0x0001f7a0) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0002a09b) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0002a09b) list_single_number_pane_g

0x55ca,	// (0x00020059) list_single_number_pane_t1_ParamLimits

0x55ca,	// (0x00020059) list_single_number_pane_t1

0x55e0,	// (0x0002006f) list_single_number_pane_t2_ParamLimits

0x55e0,	// (0x0002006f) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0002a427) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0002a427) list_single_number_pane_t

0x4cf9,	// (0x0001f788) list_single_graphic_pane_g1_ParamLimits

0x4cf9,	// (0x0001f788) list_single_graphic_pane_g1

0x4d05,	// (0x0001f794) list_single_graphic_pane_g2_ParamLimits

0x4d05,	// (0x0001f794) list_single_graphic_pane_g2

0x4d11,	// (0x0001f7a0) list_single_graphic_pane_g3_ParamLimits

0x4d11,	// (0x0001f7a0) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0002a094) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0002a094) list_single_graphic_pane_g

0x4d1d,	// (0x0001f7ac) list_single_graphic_pane_t1_ParamLimits

0x4d1d,	// (0x0001f7ac) list_single_graphic_pane_t1

0x4d05,	// (0x0001f794) list_single_heading_pane_g1_ParamLimits

0x4d05,	// (0x0001f794) list_single_heading_pane_g1

0x4d11,	// (0x0001f7a0) list_single_heading_pane_g2_ParamLimits

0x4d11,	// (0x0001f7a0) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0002a09b) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0002a09b) list_single_heading_pane_g

0x4d33,	// (0x0001f7c2) list_single_heading_pane_t1_ParamLimits

0x4d33,	// (0x0001f7c2) list_single_heading_pane_t1

0x4d49,	// (0x0001f7d8) list_single_heading_pane_t2_ParamLimits

0x4d49,	// (0x0001f7d8) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0002a0a0) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0002a0a0) list_single_heading_pane_t

0x4d05,	// (0x0001f794) list_single_number_heading_pane_g1_ParamLimits

0x4d05,	// (0x0001f794) list_single_number_heading_pane_g1

0x4d11,	// (0x0001f7a0) list_single_number_heading_pane_g2_ParamLimits

0x4d11,	// (0x0001f7a0) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0002a09b) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0002a09b) list_single_number_heading_pane_g

0x4d33,	// (0x0001f7c2) list_single_number_heading_pane_t1_ParamLimits

0x4d33,	// (0x0001f7c2) list_single_number_heading_pane_t1

0x4d5b,	// (0x0001f7ea) list_single_number_heading_pane_t2_ParamLimits

0x4d5b,	// (0x0001f7ea) list_single_number_heading_pane_t2

0x4d6d,	// (0x0001f7fc) list_single_number_heading_pane_t3_ParamLimits

0x4d6d,	// (0x0001f7fc) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0002a0a5) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0002a0a5) list_single_number_heading_pane_t

0x4d7f,	// (0x0001f80e) list_single_graphic_heading_pane_g1_ParamLimits

0x4d7f,	// (0x0001f80e) list_single_graphic_heading_pane_g1

0x4d8b,	// (0x0001f81a) list_single_graphic_heading_pane_g4_ParamLimits

0x4d8b,	// (0x0001f81a) list_single_graphic_heading_pane_g4

0x4d11,	// (0x0001f7a0) list_single_graphic_heading_pane_g5_ParamLimits

0x4d11,	// (0x0001f7a0) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0002a0ac) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0002a0ac) list_single_graphic_heading_pane_g

0x4d33,	// (0x0001f7c2) list_single_graphic_heading_pane_t1_ParamLimits

0x4d33,	// (0x0001f7c2) list_single_graphic_heading_pane_t1

0x4d9c,	// (0x0001f82b) list_single_graphic_heading_pane_t2_ParamLimits

0x4d9c,	// (0x0001f82b) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0002a0b3) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0002a0b3) list_single_graphic_heading_pane_t

0x4dae,	// (0x0001f83d) list_single_large_graphic_pane_g1_ParamLimits

0x4dae,	// (0x0001f83d) list_single_large_graphic_pane_g1

0x4d05,	// (0x0001f794) list_single_large_graphic_pane_g2_ParamLimits

0x4d05,	// (0x0001f794) list_single_large_graphic_pane_g2

0x4d11,	// (0x0001f7a0) list_single_large_graphic_pane_g3_ParamLimits

0x4d11,	// (0x0001f7a0) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0002a0b8) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0002a0b8) list_single_large_graphic_pane_g

0xa202,	// (0x00024c91) wait_border_pane_g2_copy1

0x4dba,	// (0x0001f849) list_single_large_graphic_pane_g4_cp2

0x4d33,	// (0x0001f7c2) list_single_large_graphic_pane_t1_ParamLimits

0x4d33,	// (0x0001f7c2) list_single_large_graphic_pane_t1

0x4dc2,	// (0x0001f851) list_double_pane_g1_ParamLimits

0x4dc2,	// (0x0001f851) list_double_pane_g1

0x4dce,	// (0x0001f85d) list_double_pane_g2_ParamLimits

0x4dce,	// (0x0001f85d) list_double_pane_g2

0x0001,

0xf630,	// (0x0002a0bf) list_double_pane_g_ParamLimits

0xf630,	// (0x0002a0bf) list_double_pane_g

0x4dda,	// (0x0001f869) list_double_pane_t1_ParamLimits

0x4dda,	// (0x0001f869) list_double_pane_t1

0x4df0,	// (0x0001f87f) list_double_pane_t2_ParamLimits

0x4df0,	// (0x0001f87f) list_double_pane_t2

0x0001,

0xf635,	// (0x0002a0c4) list_double_pane_t_ParamLimits

0xf635,	// (0x0002a0c4) list_double_pane_t

0x4e02,	// (0x0001f891) list_double2_pane_g1_ParamLimits

0x4e02,	// (0x0001f891) list_double2_pane_g1

0x4e13,	// (0x0001f8a2) list_double2_pane_g2_ParamLimits

0x4e13,	// (0x0001f8a2) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0002a0c9) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0002a0c9) list_double2_pane_g

0x4e1f,	// (0x0001f8ae) list_double2_pane_t1_ParamLimits

0x4e1f,	// (0x0001f8ae) list_double2_pane_t1

0x4e35,	// (0x0001f8c4) list_double2_pane_t2_ParamLimits

0x4e35,	// (0x0001f8c4) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0002a0ce) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0002a0ce) list_double2_pane_t

0x4dc2,	// (0x0001f851) list_double_number_pane_g1_ParamLimits

0x4dc2,	// (0x0001f851) list_double_number_pane_g1

0x4dce,	// (0x0001f85d) list_double_number_pane_g2_ParamLimits

0x4dce,	// (0x0001f85d) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0002a0bf) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0002a0bf) list_double_number_pane_g

0x4e47,	// (0x0001f8d6) list_double_number_pane_t1_ParamLimits

0x4e47,	// (0x0001f8d6) list_double_number_pane_t1

0x4e59,	// (0x0001f8e8) list_double_number_pane_t2_ParamLimits

0x4e59,	// (0x0001f8e8) list_double_number_pane_t2

0x4e6f,	// (0x0001f8fe) list_double_number_pane_t3_ParamLimits

0x4e6f,	// (0x0001f8fe) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0002a0d3) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0002a0d3) list_double_number_pane_t

0x4e81,	// (0x0001f910) list_double_graphic_pane_g1_ParamLimits

0x4e81,	// (0x0001f910) list_double_graphic_pane_g1

0x4e8d,	// (0x0001f91c) list_double_graphic_pane_g2_ParamLimits

0x4e8d,	// (0x0001f91c) list_double_graphic_pane_g2

0x4e9c,	// (0x0001f92b) list_double_graphic_pane_g3_ParamLimits

0x4e9c,	// (0x0001f92b) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0002a0da) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0002a0da) list_double_graphic_pane_g

0x4eb4,	// (0x0001f943) list_double_graphic_pane_t1_ParamLimits

0x4eb4,	// (0x0001f943) list_double_graphic_pane_t1

0x4eca,	// (0x0001f959) list_double_graphic_pane_t2_ParamLimits

0x4eca,	// (0x0001f959) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0002a0e3) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0002a0e3) list_double_graphic_pane_t

0x4edc,	// (0x0001f96b) list_double2_graphic_pane_g1_ParamLimits

0x4edc,	// (0x0001f96b) list_double2_graphic_pane_g1

0x4ee8,	// (0x0001f977) list_double2_graphic_pane_g2_ParamLimits

0x4ee8,	// (0x0001f977) list_double2_graphic_pane_g2

0x4ef4,	// (0x0001f983) list_double2_graphic_pane_g3_ParamLimits

0x4ef4,	// (0x0001f983) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0002a0e8) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0002a0e8) list_double2_graphic_pane_g

0x4f00,	// (0x0001f98f) list_double2_graphic_pane_t1_ParamLimits

0x4f00,	// (0x0001f98f) list_double2_graphic_pane_t1

0x4f16,	// (0x0001f9a5) list_double2_graphic_pane_t2_ParamLimits

0x4f16,	// (0x0001f9a5) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0002a0ef) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0002a0ef) list_double2_graphic_pane_t

0x4f28,	// (0x0001f9b7) list_double_large_graphic_pane_g1_ParamLimits

0x4f28,	// (0x0001f9b7) list_double_large_graphic_pane_g1

0x4f53,	// (0x0001f9e2) list_double_large_graphic_pane_g2_ParamLimits

0x4f53,	// (0x0001f9e2) list_double_large_graphic_pane_g2

0x4dce,	// (0x0001f85d) list_double_large_graphic_pane_g3_ParamLimits

0x4dce,	// (0x0001f85d) list_double_large_graphic_pane_g3

0x4f64,	// (0x0001f9f3) list_double_large_graphic_pane_g4_ParamLimits

0x4f64,	// (0x0001f9f3) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0002a0f4) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0002a0f4) list_double_large_graphic_pane_g

0x4f8c,	// (0x0001fa1b) list_double_large_graphic_pane_t1_ParamLimits

0x4f8c,	// (0x0001fa1b) list_double_large_graphic_pane_t1

0x4fa5,	// (0x0001fa34) list_double_large_graphic_pane_t2_ParamLimits

0x4fa5,	// (0x0001fa34) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0002a0ff) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0002a0ff) list_double_large_graphic_pane_t

0x4fb7,	// (0x0001fa46) list_double2_large_graphic_pane_g1_ParamLimits

0x4fb7,	// (0x0001fa46) list_double2_large_graphic_pane_g1

0x4fc3,	// (0x0001fa52) list_double2_large_graphic_pane_g2_ParamLimits

0x4fc3,	// (0x0001fa52) list_double2_large_graphic_pane_g2

0x4fd4,	// (0x0001fa63) list_double2_large_graphic_pane_g3_ParamLimits

0x4fd4,	// (0x0001fa63) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0002a104) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0002a104) list_double2_large_graphic_pane_g

0x4fe0,	// (0x0001fa6f) list_double2_large_graphic_pane_t1_ParamLimits

0x4fe0,	// (0x0001fa6f) list_double2_large_graphic_pane_t1

0x4ff6,	// (0x0001fa85) list_double2_large_graphic_pane_t2_ParamLimits

0x4ff6,	// (0x0001fa85) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0002a10b) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0002a10b) list_double2_large_graphic_pane_t

0x5008,	// (0x0001fa97) list_double_heading_pane_g1_ParamLimits

0x5008,	// (0x0001fa97) list_double_heading_pane_g1

0x5019,	// (0x0001faa8) list_double_heading_pane_g2_ParamLimits

0x5019,	// (0x0001faa8) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0002a110) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0002a110) list_double_heading_pane_g

0x5025,	// (0x0001fab4) list_double_heading_pane_t1_ParamLimits

0x5025,	// (0x0001fab4) list_double_heading_pane_t1

0x503b,	// (0x0001faca) list_double_heading_pane_t2_ParamLimits

0x503b,	// (0x0001faca) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0002a115) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0002a115) list_double_heading_pane_t

0x504d,	// (0x0001fadc) list_double_graphic_heading_pane_g1_ParamLimits

0x504d,	// (0x0001fadc) list_double_graphic_heading_pane_g1

0x5008,	// (0x0001fa97) list_double_graphic_heading_pane_g2_ParamLimits

0x5008,	// (0x0001fa97) list_double_graphic_heading_pane_g2

0x5019,	// (0x0001faa8) list_double_graphic_heading_pane_g3_ParamLimits

0x5019,	// (0x0001faa8) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0002a11a) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0002a11a) list_double_graphic_heading_pane_g

0x5059,	// (0x0001fae8) list_double_graphic_heading_pane_t1_ParamLimits

0x5059,	// (0x0001fae8) list_double_graphic_heading_pane_t1

0x4f16,	// (0x0001f9a5) list_double_graphic_heading_pane_t2_ParamLimits

0x4f16,	// (0x0001f9a5) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0002a121) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0002a121) list_double_graphic_heading_pane_t

0x4f53,	// (0x0001f9e2) list_double_time_pane_g1_ParamLimits

0x4f53,	// (0x0001f9e2) list_double_time_pane_g1

0x4dce,	// (0x0001f85d) list_double_time_pane_g2_ParamLimits

0x4dce,	// (0x0001f85d) list_double_time_pane_g2

0x0001,

0xf697,	// (0x0002a126) list_double_time_pane_g_ParamLimits

0xf697,	// (0x0002a126) list_double_time_pane_g

0x506f,	// (0x0001fafe) list_double_time_pane_t1_ParamLimits

0x506f,	// (0x0001fafe) list_double_time_pane_t1

0x5085,	// (0x0001fb14) list_double_time_pane_t2_ParamLimits

0x5085,	// (0x0001fb14) list_double_time_pane_t2

0x5097,	// (0x0001fb26) list_double_time_pane_t3_ParamLimits

0x5097,	// (0x0001fb26) list_double_time_pane_t3

0x50a9,	// (0x0001fb38) list_double_time_pane_t4_ParamLimits

0x50a9,	// (0x0001fb38) list_double_time_pane_t4

0x0003,

0xf69c,	// (0x0002a12b) list_double_time_pane_t_ParamLimits

0xf69c,	// (0x0002a12b) list_double_time_pane_t

0x50bb,	// (0x0001fb4a) list_setting_pane_g1_ParamLimits

0x50bb,	// (0x0001fb4a) list_setting_pane_g1

0x50c7,	// (0x0001fb56) list_setting_pane_g2_ParamLimits

0x50c7,	// (0x0001fb56) list_setting_pane_g2

0x0001,

0xf6a5,	// (0x0002a134) list_setting_pane_g_ParamLimits

0xf6a5,	// (0x0002a134) list_setting_pane_g

0x50d3,	// (0x0001fb62) list_setting_pane_t1_ParamLimits

0x50d3,	// (0x0001fb62) list_setting_pane_t1

0x50ed,	// (0x0001fb7c) list_setting_pane_t2_ParamLimits

0x50ed,	// (0x0001fb7c) list_setting_pane_t2

0x0002,

0xf6aa,	// (0x0002a139) list_setting_pane_t_ParamLimits

0xf6aa,	// (0x0002a139) list_setting_pane_t

0x512c,	// (0x0001fbbb) set_value_pane_cp_ParamLimits

0x512c,	// (0x0001fbbb) set_value_pane_cp

0x513a,	// (0x0001fbc9) list_setting_number_pane_g1_ParamLimits

0x513a,	// (0x0001fbc9) list_setting_number_pane_g1

0x5146,	// (0x0001fbd5) list_setting_number_pane_g2_ParamLimits

0x5146,	// (0x0001fbd5) list_setting_number_pane_g2

0x0001,

0xf6b1,	// (0x0002a140) list_setting_number_pane_g_ParamLimits

0xf6b1,	// (0x0002a140) list_setting_number_pane_g

0x5152,	// (0x0001fbe1) list_setting_number_pane_t1_ParamLimits

0x5152,	// (0x0001fbe1) list_setting_number_pane_t1

0x516b,	// (0x0001fbfa) list_setting_number_pane_t2_ParamLimits

0x516b,	// (0x0001fbfa) list_setting_number_pane_t2

0x5185,	// (0x0001fc14) list_setting_number_pane_t3_ParamLimits

0x5185,	// (0x0001fc14) list_setting_number_pane_t3

0x0003,

0xf6b6,	// (0x0002a145) list_setting_number_pane_t_ParamLimits

0xf6b6,	// (0x0002a145) list_setting_number_pane_t

0x512c,	// (0x0001fbbb) set_value_pane_ParamLimits

0x512c,	// (0x0001fbbb) set_value_pane

0x807b,	// (0x00022b0a) bg_set_opt_pane_ParamLimits

0x807b,	// (0x00022b0a) bg_set_opt_pane

0x51c8,	// (0x0001fc57) set_value_pane_t1

0x809c,	// (0x00022b2b) slider_set_pane_cp3

0x80a5,	// (0x00022b34) volume_small_pane_cp

0x80ae,	// (0x00022b3d) list_form_gen_pane

0x80b7,	// (0x00022b46) scroll_pane_cp8

0x51d6,	// (0x0001fc65) form_field_data_pane_ParamLimits

0x51d6,	// (0x0001fc65) form_field_data_pane

0x51fc,	// (0x0001fc8b) form_field_data_wide_pane_ParamLimits

0x51fc,	// (0x0001fc8b) form_field_data_wide_pane

0x5223,	// (0x0001fcb2) form_field_popup_pane_ParamLimits

0x5223,	// (0x0001fcb2) form_field_popup_pane

0x5245,	// (0x0001fcd4) form_field_popup_wide_pane_ParamLimits

0x5245,	// (0x0001fcd4) form_field_popup_wide_pane

0x5266,	// (0x0001fcf5) form_field_slider_pane_ParamLimits

0x5266,	// (0x0001fcf5) form_field_slider_pane

0x5279,	// (0x0001fd08) form_field_slider_wide_pane_ParamLimits

0x5279,	// (0x0001fd08) form_field_slider_wide_pane

0x80c8,	// (0x00022b57) data_form_pane

0x5296,	// (0x0001fd25) form_field_data_pane_t1

0x80d4,	// (0x00022b63) input_focus_pane

0x80e2,	// (0x00022b71) data_form_wide_pane

0x52bc,	// (0x0001fd4b) form_field_data_wide_pane_t1

0x7e45,	// (0x000228d4) input_focus_pane_cp6

0x52de,	// (0x0001fd6d) form_field_popup_pane_t1

0x80d4,	// (0x00022b63) input_focus_pane_cp7

0x810e,	// (0x00022b9d) list_form_pane

0x5300,	// (0x0001fd8f) form_field_popup_wide_pane_t1

0x80d4,	// (0x00022b63) input_focus_pane_cp8

0x811a,	// (0x00022ba9) list_form_wide_pane

0x531d,	// (0x0001fdac) form_field_slider_pane_t1_ParamLimits

0x531d,	// (0x0001fdac) form_field_slider_pane_t1

0x5335,	// (0x0001fdc4) form_field_slider_pane_t2_ParamLimits

0x5335,	// (0x0001fdc4) form_field_slider_pane_t2

0x0001,

0xf6c6,	// (0x0002a155) form_field_slider_pane_t_ParamLimits

0xf6c6,	// (0x0002a155) form_field_slider_pane_t

0x7ac9,	// (0x00022558) input_focus_pane_cp9_ParamLimits

0x7ac9,	// (0x00022558) input_focus_pane_cp9

0x534a,	// (0x0001fdd9) slider_cont_pane_ParamLimits

0x534a,	// (0x0001fdd9) slider_cont_pane

0x8129,	// (0x00022bb8) form_field_slider_wide_pane_t1_ParamLimits

0x8129,	// (0x00022bb8) form_field_slider_wide_pane_t1

0x535e,	// (0x0001fded) form_field_slider_wide_pane_t2_ParamLimits

0x535e,	// (0x0001fded) form_field_slider_wide_pane_t2

0x0001,

0xf6cb,	// (0x0002a15a) form_field_slider_wide_pane_t_ParamLimits

0xf6cb,	// (0x0002a15a) form_field_slider_wide_pane_t

0x7ac9,	// (0x00022558) input_focus_pane_cp10_ParamLimits

0x7ac9,	// (0x00022558) input_focus_pane_cp10

0x5370,	// (0x0001fdff) slider_cont_pane_cp1_ParamLimits

0x5370,	// (0x0001fdff) slider_cont_pane_cp1

0x5384,	// (0x0001fe13) slider_form_pane_cp

0x813b,	// (0x00022bca) input_focus_pane_g1

0x8143,	// (0x00022bd2) input_focus_pane_g2

0x814b,	// (0x00022bda) input_focus_pane_g3

0x8153,	// (0x00022be2) input_focus_pane_g4

0x815b,	// (0x00022bea) input_focus_pane_g5

0x8163,	// (0x00022bf2) input_focus_pane_g6

0x816b,	// (0x00022bfa) input_focus_pane_g7

0x8173,	// (0x00022c02) input_focus_pane_g8

0x817b,	// (0x00022c0a) input_focus_pane_g9

0x7763,	// (0x000221f2) input_focus_pane_g10

0x0009,

0xf6d0,	// (0x0002a15f) input_focus_pane_g

0xa20b,	// (0x00024c9a) wait_border_pane_g3_copy1

0x538c,	// (0x0001fe1b) data_form_pane_t1

0x7763,	// (0x000221f2) wait_anim_pane_g1_copy1

0x55f2,	// (0x00020081) data_form_wide_pane_t1

0x53a9,	// (0x0001fe38) list_form_graphic_pane_cp_ParamLimits

0x53a9,	// (0x0001fe38) list_form_graphic_pane_cp

0xb190,	// (0x00025c1f) slider_form_pane_g1

0xb199,	// (0x00025c28) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0002a457) slider_form_pane_g

0x53be,	// (0x0001fe4d) list_form_graphic_pane_ParamLimits

0x53be,	// (0x0001fe4d) list_form_graphic_pane

0x53d0,	// (0x0001fe5f) list_form_graphic_pane_g1

0x53d8,	// (0x0001fe67) list_form_graphic_pane_t1_ParamLimits

0x53d8,	// (0x0001fe67) list_form_graphic_pane_t1

0x784d,	// (0x000222dc) list_highlight_pane_cp5_ParamLimits

0x784d,	// (0x000222dc) list_highlight_pane_cp5

0x53ed,	// (0x0001fe7c) find_pane_g1

0x8183,	// (0x00022c12) input_find_pane

0x53f6,	// (0x0001fe85) input_find_pane_g1_ParamLimits

0x53f6,	// (0x0001fe85) input_find_pane_g1

0x5402,	// (0x0001fe91) input_find_pane_t1_ParamLimits

0x5402,	// (0x0001fe91) input_find_pane_t1

0x5417,	// (0x0001fea6) input_find_pane_t2_ParamLimits

0x5417,	// (0x0001fea6) input_find_pane_t2

0x0001,

0xf6e5,	// (0x0002a174) input_find_pane_t_ParamLimits

0xf6e5,	// (0x0002a174) input_find_pane_t

0x818c,	// (0x00022c1b) input_focus_pane_cp5_ParamLimits

0x818c,	// (0x00022c1b) input_focus_pane_cp5

0x81a6,	// (0x00022c35) bg_popup_window_pane_cp2_ParamLimits

0x81a6,	// (0x00022c35) bg_popup_window_pane_cp2

0x81b3,	// (0x00022c42) listscroll_menu_pane_ParamLimits

0x81b3,	// (0x00022c42) listscroll_menu_pane

0x81bf,	// (0x00022c4e) popup_submenu_window_ParamLimits

0x81bf,	// (0x00022c4e) popup_submenu_window

0x81ef,	// (0x00022c7e) find_popup_pane_g1

0x81f7,	// (0x00022c86) input_popup_find_pane_cp

0x818c,	// (0x00022c1b) input_focus_pane_cp4_ParamLimits

0x818c,	// (0x00022c1b) input_focus_pane_cp4

0x820f,	// (0x00022c9e) input_popup_find_pane_t1_ParamLimits

0x820f,	// (0x00022c9e) input_popup_find_pane_t1

0x776d,	// (0x000221fc) bg_popup_sub_pane_cp

0x823d,	// (0x00022ccc) listscroll_popup_sub_pane

0x8245,	// (0x00022cd4) list_submenu_pane_ParamLimits

0x8245,	// (0x00022cd4) list_submenu_pane

0x8256,	// (0x00022ce5) scroll_pane_cp4

0x825e,	// (0x00022ced) list_single_popup_submenu_pane_ParamLimits

0x825e,	// (0x00022ced) list_single_popup_submenu_pane

0x8273,	// (0x00022d02) list_single_popup_submenu_pane_g1

0x827b,	// (0x00022d0a) list_single_popup_submenu_pane_t1_ParamLimits

0x827b,	// (0x00022d0a) list_single_popup_submenu_pane_t1

0x784d,	// (0x000222dc) bg_active_tab_pane_cp1_ParamLimits

0x784d,	// (0x000222dc) bg_active_tab_pane_cp1

0x8290,	// (0x00022d1f) tabs_2_active_pane_g1

0x8298,	// (0x00022d27) tabs_2_active_pane_t1

0x784d,	// (0x000222dc) bg_passive_tab_pane_cp1_ParamLimits

0x784d,	// (0x000222dc) bg_passive_tab_pane_cp1

0x8290,	// (0x00022d1f) tabs_2_passive_pane_g1

0x8298,	// (0x00022d27) tabs_2_passive_pane_t1

0x82aa,	// (0x00022d39) bg_active_tab_pane_cp4

0x82b8,	// (0x00022d47) tabs_2_long_active_pane_t1

0x82cb,	// (0x00022d5a) bg_passive_tab_pane_cp4

0x13ef,	// (0x0001be7e) list_single_midp_graphic_pane_g4_ParamLimits

0x82aa,	// (0x00022d39) bg_active_tab_pane_cp5

0x82d7,	// (0x00022d66) tabs_3_long_active_pane_t1

0x82cb,	// (0x00022d5a) bg_passive_tab_pane_cp5

0x13ef,	// (0x0001be7e) list_single_midp_graphic_pane_g4

0x784d,	// (0x000222dc) bg_popup_window_pane_cp13_ParamLimits

0x784d,	// (0x000222dc) bg_popup_window_pane_cp13

0x82f2,	// (0x00022d81) listscroll_popup_fast_pane_ParamLimits

0x82f2,	// (0x00022d81) listscroll_popup_fast_pane

0x8301,	// (0x00022d90) grid_popup_fast_pane_ParamLimits

0x8301,	// (0x00022d90) grid_popup_fast_pane

0x8313,	// (0x00022da2) scroll_pane_cp9_ParamLimits

0x8313,	// (0x00022da2) scroll_pane_cp9

0xcac3,	// (0x00027552) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcac3,	// (0x00027552) list_single_graphic_hl_pane_t1_cp2

0x8337,	// (0x00022dc6) input_focus_pane_cp20_ParamLimits

0x8337,	// (0x00022dc6) input_focus_pane_cp20

0x8345,	// (0x00022dd4) query_popup_data_pane_t1_ParamLimits

0x8345,	// (0x00022dd4) query_popup_data_pane_t1

0x8358,	// (0x00022de7) query_popup_data_pane_t2_ParamLimits

0x8358,	// (0x00022de7) query_popup_data_pane_t2

0x839e,	// (0x00022e2d) query_popup_data_pane_t3_ParamLimits

0x839e,	// (0x00022e2d) query_popup_data_pane_t3

0x83df,	// (0x00022e6e) query_popup_data_pane_t4_ParamLimits

0x83df,	// (0x00022e6e) query_popup_data_pane_t4

0x841b,	// (0x00022eaa) query_popup_data_pane_t5_ParamLimits

0x841b,	// (0x00022eaa) query_popup_data_pane_t5

0x0004,

0xf6ea,	// (0x0002a179) query_popup_data_pane_t_ParamLimits

0xf6ea,	// (0x0002a179) query_popup_data_pane_t

0x813b,	// (0x00022bca) bg_set_opt_pane_g1

0x8143,	// (0x00022bd2) bg_set_opt_pane_g2

0x814b,	// (0x00022bda) bg_set_opt_pane_g3

0x8153,	// (0x00022be2) bg_set_opt_pane_g4

0x815b,	// (0x00022bea) bg_set_opt_pane_g5

0x8163,	// (0x00022bf2) bg_set_opt_pane_g6

0x816b,	// (0x00022bfa) bg_set_opt_pane_g7

0x8173,	// (0x00022c02) bg_set_opt_pane_g8

0x817b,	// (0x00022c0a) bg_set_opt_pane_g9

0x0008,

0xf6f5,	// (0x0002a184) bg_set_opt_pane_g

0x63e1,	// (0x00020e70) control_top_pane_stacon_ParamLimits

0x63e1,	// (0x00020e70) control_top_pane_stacon

0x6434,	// (0x00020ec3) signal_pane_stacon_ParamLimits

0x6434,	// (0x00020ec3) signal_pane_stacon

0x89d3,	// (0x00023462) stacon_top_pane_g1_ParamLimits

0x89d3,	// (0x00023462) stacon_top_pane_g1

0x6459,	// (0x00020ee8) title_pane_stacon_ParamLimits

0x6459,	// (0x00020ee8) title_pane_stacon

0x6483,	// (0x00020f12) uni_indicator_pane_stacon_ParamLimits

0x6483,	// (0x00020f12) uni_indicator_pane_stacon

0x649b,	// (0x00020f2a) battery_pane_stacon_ParamLimits

0x649b,	// (0x00020f2a) battery_pane_stacon

0x64df,	// (0x00020f6e) control_bottom_pane_stacon_ParamLimits

0x64df,	// (0x00020f6e) control_bottom_pane_stacon

0x6502,	// (0x00020f91) navi_pane_stacon_ParamLimits

0x6502,	// (0x00020f91) navi_pane_stacon

0x89f5,	// (0x00023484) stacon_bottom_pane_g1_ParamLimits

0x89f5,	// (0x00023484) stacon_bottom_pane_g1

0x613e,	// (0x00020bcd) aid_levels_signal_lsc_ParamLimits

0x613e,	// (0x00020bcd) aid_levels_signal_lsc

0x6155,	// (0x00020be4) signal_pane_stacon_g1_ParamLimits

0x6155,	// (0x00020be4) signal_pane_stacon_g1

0x6169,	// (0x00020bf8) signal_pane_stacon_g2_ParamLimits

0x6169,	// (0x00020bf8) signal_pane_stacon_g2

0x0001,

0xf708,	// (0x0002a197) signal_pane_stacon_g_ParamLimits

0xf708,	// (0x0002a197) signal_pane_stacon_g

0x619e,	// (0x00020c2d) title_pane_stacon_t1_ParamLimits

0x619e,	// (0x00020c2d) title_pane_stacon_t1

0x845f,	// (0x00022eee) uni_indicator_pane_stacon_g1

0x8469,	// (0x00022ef8) uni_indicator_pane_stacon_g2

0x8473,	// (0x00022f02) uni_indicator_pane_stacon_g3

0x847d,	// (0x00022f0c) uni_indicator_pane_stacon_g4

0x0003,

0xf714,	// (0x0002a1a3) uni_indicator_pane_stacon_g

0x61c3,	// (0x00020c52) control_top_pane_stacon_g1

0x61cb,	// (0x00020c5a) control_top_pane_stacon_t1_ParamLimits

0x61cb,	// (0x00020c5a) control_top_pane_stacon_t1

0x6202,	// (0x00020c91) aid_levels_battery_lsc_ParamLimits

0x6202,	// (0x00020c91) aid_levels_battery_lsc

0x621a,	// (0x00020ca9) battery_pane_stacon_g1_ParamLimits

0x621a,	// (0x00020ca9) battery_pane_stacon_g1

0x622d,	// (0x00020cbc) battery_pane_stacon_g2_ParamLimits

0x622d,	// (0x00020cbc) battery_pane_stacon_g2

0x0001,

0xf71d,	// (0x0002a1ac) battery_pane_stacon_g_ParamLimits

0xf71d,	// (0x0002a1ac) battery_pane_stacon_g

0x626b,	// (0x00020cfa) navi_icon_pane_stacon

0x627f,	// (0x00020d0e) navi_navi_pane_stacon

0x626b,	// (0x00020cfa) navi_text_pane_stacon

0x61c3,	// (0x00020c52) control_bottom_pane_stacon_g1

0x6295,	// (0x00020d24) control_bottom_pane_stacon_t1_ParamLimits

0x6295,	// (0x00020d24) control_bottom_pane_stacon_t1

0x84a1,	// (0x00022f30) grid_app_pane_ParamLimits

0x84a1,	// (0x00022f30) grid_app_pane

0x84c5,	// (0x00022f54) scroll_pane_cp15_ParamLimits

0x84c5,	// (0x00022f54) scroll_pane_cp15

0x84da,	// (0x00022f69) cell_app_pane_ParamLimits

0x84da,	// (0x00022f69) cell_app_pane

0x8506,	// (0x00022f95) cell_app_pane_g1_ParamLimits

0x8506,	// (0x00022f95) cell_app_pane_g1

0x852a,	// (0x00022fb9) cell_app_pane_g2_ParamLimits

0x852a,	// (0x00022fb9) cell_app_pane_g2

0x0001,

0xf722,	// (0x0002a1b1) cell_app_pane_g_ParamLimits

0xf722,	// (0x0002a1b1) cell_app_pane_g

0x8536,	// (0x00022fc5) cell_app_pane_t1_ParamLimits

0x8536,	// (0x00022fc5) cell_app_pane_t1

0x8548,	// (0x00022fd7) grid_highlight_pane_ParamLimits

0x8548,	// (0x00022fd7) grid_highlight_pane

0x813b,	// (0x00022bca) cell_highlight_pane_g1

0x8143,	// (0x00022bd2) cell_highlight_pane_g2

0x814b,	// (0x00022bda) cell_highlight_pane_g3

0x8153,	// (0x00022be2) cell_highlight_pane_g4

0x815b,	// (0x00022bea) cell_highlight_pane_g5

0x8163,	// (0x00022bf2) cell_highlight_pane_g6

0x816b,	// (0x00022bfa) cell_highlight_pane_g7

0x8173,	// (0x00022c02) cell_highlight_pane_g8

0x817b,	// (0x00022c0a) cell_highlight_pane_g9

0x7763,	// (0x000221f2) cell_highlight_pane_g10

0x0009,

0xf6d0,	// (0x0002a15f) cell_highlight_pane_g

0x8559,	// (0x00022fe8) bg_scroll_pane

0x62df,	// (0x00020d6e) scroll_handle_pane

0x85a0,	// (0x0002302f) scroll_bg_pane_g1

0x85b5,	// (0x00023044) scroll_bg_pane_g2

0x85cd,	// (0x0002305c) scroll_bg_pane_g3

0x0002,

0xf727,	// (0x0002a1b6) scroll_bg_pane_g

0x85e2,	// (0x00023071) scroll_handle_focus_pane_ParamLimits

0x85e2,	// (0x00023071) scroll_handle_focus_pane

0x85a0,	// (0x0002302f) scroll_handle_pane_g1

0x85ef,	// (0x0002307e) scroll_handle_pane_g2

0x85cd,	// (0x0002305c) scroll_handle_pane_g3

0x0002,

0xf72e,	// (0x0002a1bd) scroll_handle_pane_g

0x818c,	// (0x00022c1b) bg_popup_sub_pane_cp21_ParamLimits

0x818c,	// (0x00022c1b) bg_popup_sub_pane_cp21

0x8603,	// (0x00023092) popup_fep_japan_predictive_window_t1_ParamLimits

0x8603,	// (0x00023092) popup_fep_japan_predictive_window_t1

0x861a,	// (0x000230a9) popup_fep_japan_predictive_window_t2_ParamLimits

0x861a,	// (0x000230a9) popup_fep_japan_predictive_window_t2

0x864d,	// (0x000230dc) popup_fep_japan_predictive_window_t3_ParamLimits

0x864d,	// (0x000230dc) popup_fep_japan_predictive_window_t3

0x0002,

0xf735,	// (0x0002a1c4) popup_fep_japan_predictive_window_t_ParamLimits

0xf735,	// (0x0002a1c4) popup_fep_japan_predictive_window_t

0x776d,	// (0x000221fc) bg_popup_sub_pane_cp23

0x8684,	// (0x00023113) listscroll_japin_cand_pane

0x868c,	// (0x0002311b) popup_fep_japan_candidate_window_t1

0x869a,	// (0x00023129) candidate_pane_ParamLimits

0x869a,	// (0x00023129) candidate_pane

0x86ac,	// (0x0002313b) scroll_pane_cp30

0x86b6,	// (0x00023145) list_single_popup_jap_candidate_pane_ParamLimits

0x86b6,	// (0x00023145) list_single_popup_jap_candidate_pane

0x776d,	// (0x000221fc) list_highlight_pane_cp30

0x86ca,	// (0x00023159) list_single_popup_jap_candidate_pane_t1

0x86d9,	// (0x00023168) level_1_signal

0x86e6,	// (0x00023175) level_2_signal

0x86f3,	// (0x00023182) level_3_signal

0x8700,	// (0x0002318f) level_4_signal

0x870d,	// (0x0002319c) level_5_signal

0x871a,	// (0x000231a9) level_6_signal

0x8727,	// (0x000231b6) level_7_signal

0x86d9,	// (0x00023168) level_1_battery

0x86e6,	// (0x00023175) level_2_battery

0x86f3,	// (0x00023182) level_3_battery

0x8700,	// (0x0002318f) level_4_battery

0x870d,	// (0x0002319c) level_5_battery

0x871a,	// (0x000231a9) level_6_battery

0x8727,	// (0x000231b6) level_7_battery

0x874c,	// (0x000231db) list_menu_pane_ParamLimits

0x874c,	// (0x000231db) list_menu_pane

0x875d,	// (0x000231ec) scroll_pane_cp25_ParamLimits

0x875d,	// (0x000231ec) scroll_pane_cp25

0x8776,	// (0x00023205) list_double2_graphic_pane_cp2_ParamLimits

0x8776,	// (0x00023205) list_double2_graphic_pane_cp2

0x8776,	// (0x00023205) list_double2_large_graphic_pane_cp2_ParamLimits

0x8776,	// (0x00023205) list_double2_large_graphic_pane_cp2

0x8776,	// (0x00023205) list_double2_pane_cp2_ParamLimits

0x8776,	// (0x00023205) list_double2_pane_cp2

0x8776,	// (0x00023205) list_double_graphic_pane_cp2_ParamLimits

0x8776,	// (0x00023205) list_double_graphic_pane_cp2

0x8776,	// (0x00023205) list_double_large_graphic_pane_cp2_ParamLimits

0x8776,	// (0x00023205) list_double_large_graphic_pane_cp2

0x8776,	// (0x00023205) list_double_number_pane_cp2_ParamLimits

0x8776,	// (0x00023205) list_double_number_pane_cp2

0x8776,	// (0x00023205) list_double_pane_cp2_ParamLimits

0x8776,	// (0x00023205) list_double_pane_cp2

0x879c,	// (0x0002322b) list_single_2graphic_pane_cp2_ParamLimits

0x879c,	// (0x0002322b) list_single_2graphic_pane_cp2

0x879c,	// (0x0002322b) list_single_graphic_heading_pane_cp2_ParamLimits

0x879c,	// (0x0002322b) list_single_graphic_heading_pane_cp2

0x879c,	// (0x0002322b) list_single_graphic_pane_cp2_ParamLimits

0x879c,	// (0x0002322b) list_single_graphic_pane_cp2

0x879c,	// (0x0002322b) list_single_heading_pane_cp2_ParamLimits

0x879c,	// (0x0002322b) list_single_heading_pane_cp2

0x87b9,	// (0x00023248) list_single_large_graphic_pane_cp2_ParamLimits

0x87b9,	// (0x00023248) list_single_large_graphic_pane_cp2

0x879c,	// (0x0002322b) list_single_number_heading_pane_cp2_ParamLimits

0x879c,	// (0x0002322b) list_single_number_heading_pane_cp2

0x879c,	// (0x0002322b) list_single_number_pane_cp2_ParamLimits

0x879c,	// (0x0002322b) list_single_number_pane_cp2

0x879c,	// (0x0002322b) list_single_pane_cp2_ParamLimits

0x879c,	// (0x0002322b) list_single_pane_cp2

0x880e,	// (0x0002329d) bg_popup_sub_pane_cp22

0x6391,	// (0x00020e20) popup_side_volume_key_window_g1

0x63bb,	// (0x00020e4a) popup_side_volume_key_window_t1

0x63d9,	// (0x00020e68) volume_small_pane_cp1

0x7ac9,	// (0x00022558) bg_popup_sub_pane_cp24_ParamLimits

0x7ac9,	// (0x00022558) bg_popup_sub_pane_cp24

0x8824,	// (0x000232b3) fep_china_uni_candidate_pane_ParamLimits

0x8824,	// (0x000232b3) fep_china_uni_candidate_pane

0x8838,	// (0x000232c7) fep_china_uni_entry_pane

0x8848,	// (0x000232d7) popup_fep_china_uni_window_g1

0x8864,	// (0x000232f3) fep_china_uni_entry_pane_g1

0x886e,	// (0x000232fd) fep_china_uni_entry_pane_g2

0x0001,

0xf762,	// (0x0002a1f1) fep_china_uni_entry_pane_g

0x8884,	// (0x00023313) fep_entry_item_pane

0x888e,	// (0x0002331d) fep_candidate_item_pane

0x8896,	// (0x00023325) fep_china_uni_candidate_pane_g1

0x88a0,	// (0x0002332f) fep_china_uni_candidate_pane_g2

0x88a8,	// (0x00023337) fep_china_uni_candidate_pane_g3

0x88b0,	// (0x0002333f) fep_china_uni_candidate_pane_g4

0x0003,

0xf767,	// (0x0002a1f6) fep_china_uni_candidate_pane_g

0x7763,	// (0x000221f2) fep_entry_item_pane_g1

0x88ba,	// (0x00023349) fep_entry_item_pane_t1_ParamLimits

0x88ba,	// (0x00023349) fep_entry_item_pane_t1

0x88d0,	// (0x0002335f) fep_candidate_item_pane_t1_ParamLimits

0x88d0,	// (0x0002335f) fep_candidate_item_pane_t1

0x88e5,	// (0x00023374) fep_candidate_item_pane_t2_ParamLimits

0x88e5,	// (0x00023374) fep_candidate_item_pane_t2

0x0001,

0xf770,	// (0x0002a1ff) fep_candidate_item_pane_t_ParamLimits

0xf770,	// (0x0002a1ff) fep_candidate_item_pane_t

0x784d,	// (0x000222dc) list_highlight_pane_cp31_ParamLimits

0x784d,	// (0x000222dc) list_highlight_pane_cp31

0x88f7,	// (0x00023386) level_1_signal_lsc

0x8900,	// (0x0002338f) level_2_signal_lsc

0x8909,	// (0x00023398) level_3_signal_lsc

0x8912,	// (0x000233a1) level_4_signal_lsc

0x891b,	// (0x000233aa) level_5_signal_lsc

0x8924,	// (0x000233b3) level_6_signal_lsc

0x892d,	// (0x000233bc) level_7_signal_lsc

0x892d,	// (0x000233bc) level_1_battery_lsc

0x8936,	// (0x000233c5) level_2_battery_lsc

0x893f,	// (0x000233ce) level_3_battery_lsc

0x8948,	// (0x000233d7) level_4_battery_lsc

0x8951,	// (0x000233e0) level_5_battery_lsc

0x895a,	// (0x000233e9) level_6_battery_lsc

0x88f7,	// (0x00023386) level_7_battery_lsc

0x8963,	// (0x000233f2) scroll_handle_focus_pane_g1

0x896c,	// (0x000233fb) scroll_handle_focus_pane_g2

0x8975,	// (0x00023404) scroll_handle_focus_pane_g3

0x0002,

0xf775,	// (0x0002a204) scroll_handle_focus_pane_g

0x542c,	// (0x0001febb) list_single_2graphic_pane_g1_ParamLimits

0x542c,	// (0x0001febb) list_single_2graphic_pane_g1

0x4d8b,	// (0x0001f81a) list_single_2graphic_pane_g2_ParamLimits

0x4d8b,	// (0x0001f81a) list_single_2graphic_pane_g2

0x4d11,	// (0x0001f7a0) list_single_2graphic_pane_g3_ParamLimits

0x4d11,	// (0x0001f7a0) list_single_2graphic_pane_g3

0x5438,	// (0x0001fec7) list_single_2graphic_pane_g4_ParamLimits

0x5438,	// (0x0001fec7) list_single_2graphic_pane_g4

0x0003,

0xf77c,	// (0x0002a20b) list_single_2graphic_pane_g_ParamLimits

0xf77c,	// (0x0002a20b) list_single_2graphic_pane_g

0x5444,	// (0x0001fed3) list_single_2graphic_pane_t1_ParamLimits

0x5444,	// (0x0001fed3) list_single_2graphic_pane_t1

0x5472,	// (0x0001ff01) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5472,	// (0x0001ff01) list_double2_graphic_large_graphic_pane_g1

0x4fc3,	// (0x0001fa52) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4fc3,	// (0x0001fa52) list_double2_graphic_large_graphic_pane_g2

0x4fd4,	// (0x0001fa63) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4fd4,	// (0x0001fa63) list_double2_graphic_large_graphic_pane_g3

0x5484,	// (0x0001ff13) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5484,	// (0x0001ff13) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf785,	// (0x0002a214) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf785,	// (0x0002a214) list_double2_graphic_large_graphic_pane_g

0x5490,	// (0x0001ff1f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5490,	// (0x0001ff1f) list_double2_graphic_large_graphic_pane_t1

0x54a6,	// (0x0001ff35) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x54a6,	// (0x0001ff35) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf78e,	// (0x0002a21d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf78e,	// (0x0002a21d) list_double2_graphic_large_graphic_pane_t

0x8ab7,	// (0x00023546) popup_fast_swap_window_ParamLimits

0x8ab7,	// (0x00023546) popup_fast_swap_window

0x8ad5,	// (0x00023564) popup_side_volume_key_window

0x8af3,	// (0x00023582) stacon_top_pane

0x8afd,	// (0x0002358c) status_pane_ParamLimits

0x8afd,	// (0x0002358c) status_pane

0x8af3,	// (0x00023582) status_small_pane

0x776d,	// (0x000221fc) control_pane

0x776d,	// (0x000221fc) stacon_bottom_pane

0x80b7,	// (0x00022b46) scroll_pane_cp121

0x80ae,	// (0x00022b3d) set_content_pane

0x897e,	// (0x0002340d) bg_active_tab_pane_g1_cp1

0x8987,	// (0x00023416) bg_active_tab_pane_g2_cp1

0x8990,	// (0x0002341f) bg_active_tab_pane_g3_cp1

0x897e,	// (0x0002340d) bg_passive_tab_pane_g1_cp1

0x8987,	// (0x00023416) bg_passive_tab_pane_g2_cp1

0x8990,	// (0x0002341f) bg_passive_tab_pane_g3_cp1

0x8999,	// (0x00023428) bg_active_tab_pane_g1_cp2

0x8987,	// (0x00023416) bg_active_tab_pane_g2_cp2

0x89a2,	// (0x00023431) bg_active_tab_pane_g3_cp2

0x8999,	// (0x00023428) bg_passive_tab_pane_g1_cp2

0x8987,	// (0x00023416) bg_passive_tab_pane_g2_cp2

0x89a2,	// (0x00023431) bg_passive_tab_pane_g3_cp2

0x89ab,	// (0x0002343a) bg_active_tab_pane_g1_cp3

0x8987,	// (0x00023416) bg_active_tab_pane_g2_cp3

0x89b4,	// (0x00023443) bg_active_tab_pane_g3_cp3

0x89ab,	// (0x0002343a) bg_passive_tab_pane_g1_cp3

0x8987,	// (0x00023416) bg_passive_tab_pane_g2_cp3

0x89b4,	// (0x00023443) bg_passive_tab_pane_g3_cp3

0x89bd,	// (0x0002344c) bg_active_tab_pane_g1_cp4

0x8987,	// (0x00023416) bg_active_tab_pane_g2_cp4

0x89c8,	// (0x00023457) bg_active_tab_pane_g3_cp4

0x89bd,	// (0x0002344c) bg_passive_tab_pane_g1_cp4

0x8987,	// (0x00023416) bg_passive_tab_pane_g2_cp4

0x89c8,	// (0x00023457) bg_passive_tab_pane_g3_cp4

0x8a11,	// (0x000234a0) bg_active_tab_pane_g1_cp5

0x8987,	// (0x00023416) bg_active_tab_pane_g2_cp5

0x8a1a,	// (0x000234a9) bg_active_tab_pane_g3_cp5

0x8a11,	// (0x000234a0) bg_passive_tab_pane_g1_cp5

0x8987,	// (0x00023416) bg_passive_tab_pane_g2_cp5

0x8a1a,	// (0x000234a9) bg_passive_tab_pane_g3_cp5

0x8a23,	// (0x000234b2) list_set_graphic_pane_ParamLimits

0x8a23,	// (0x000234b2) list_set_graphic_pane

0x776d,	// (0x000221fc) bg_set_opt_pane_cp4

0x8a38,	// (0x000234c7) list_set_graphic_pane_g1_ParamLimits

0x8a38,	// (0x000234c7) list_set_graphic_pane_g1

0x8a44,	// (0x000234d3) list_set_graphic_pane_g2_ParamLimits

0x8a44,	// (0x000234d3) list_set_graphic_pane_g2

0x0001,

0xf793,	// (0x0002a222) list_set_graphic_pane_g_ParamLimits

0xf793,	// (0x0002a222) list_set_graphic_pane_g

0x0009,

0xfaf0,	// (0x0002a57f) volume_small_pane_cp_g

0x8a68,	// (0x000234f7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a68,	// (0x000234f7) list_double2_large_graphic_pane_g1_cp2

0x8a76,	// (0x00023505) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a76,	// (0x00023505) list_double2_large_graphic_pane_g2_cp2

0x8a87,	// (0x00023516) list_double2_large_graphic_pane_g3_cp2

0x8a8f,	// (0x0002351e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a8f,	// (0x0002351e) list_double2_large_graphic_pane_t1_cp2

0x8aa5,	// (0x00023534) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8aa5,	// (0x00023534) list_double2_large_graphic_pane_t2_cp2

0xacf5,	// (0x00025784) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xacf5,	// (0x00025784) list_double_large_graphic_pane_g1_cp2

0xad08,	// (0x00025797) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad08,	// (0x00025797) list_double_large_graphic_pane_g2_cp2

0x8c1b,	// (0x000236aa) list_double_large_graphic_pane_g3_cp2

0xad19,	// (0x000257a8) list_double_large_graphic_pane_g4_cp

0xad21,	// (0x000257b0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad21,	// (0x000257b0) list_double_large_graphic_pane_t1_cp2

0xad38,	// (0x000257c7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xad38,	// (0x000257c7) list_double_large_graphic_pane_t2_cp2

0x8b0b,	// (0x0002359a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8b0b,	// (0x0002359a) list_double2_graphic_pane_g1_cp2

0x8b19,	// (0x000235a8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8b19,	// (0x000235a8) list_double2_graphic_pane_g2_cp2

0x8b2a,	// (0x000235b9) list_double2_graphic_pane_g3_cp2

0x8b34,	// (0x000235c3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8b34,	// (0x000235c3) list_double2_graphic_pane_t1_cp2

0x8b4a,	// (0x000235d9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8b4a,	// (0x000235d9) list_double2_graphic_pane_t2_cp2

0x8b5c,	// (0x000235eb) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b5c,	// (0x000235eb) list_single_number_heading_pane_g1_cp2

0x8b68,	// (0x000235f7) list_single_number_heading_pane_g2_cp2

0x8b70,	// (0x000235ff) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8b70,	// (0x000235ff) list_single_number_heading_pane_t1_cp2

0x8b86,	// (0x00023615) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8b86,	// (0x00023615) list_single_number_heading_pane_t2_cp2

0x8b9a,	// (0x00023629) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8b9a,	// (0x00023629) list_single_number_heading_pane_t3_cp2

0x8b5c,	// (0x000235eb) list_single_heading_pane_g1_cp2_ParamLimits

0x8b5c,	// (0x000235eb) list_single_heading_pane_g1_cp2

0x8b68,	// (0x000235f7) list_single_heading_pane_g2_cp2

0x8b70,	// (0x000235ff) list_single_heading_pane_t1_cp2_ParamLimits

0x8b70,	// (0x000235ff) list_single_heading_pane_t1_cp2

0xaaef,	// (0x0002557e) list_single_heading_pane_t2_cp2_ParamLimits

0xaaef,	// (0x0002557e) list_single_heading_pane_t2_cp2

0xaa31,	// (0x000254c0) list_double_graphic_pane_g1_cp2_ParamLimits

0xaa31,	// (0x000254c0) list_double_graphic_pane_g1_cp2

0xaa3d,	// (0x000254cc) list_double_graphic_pane_g2_cp2_ParamLimits

0xaa3d,	// (0x000254cc) list_double_graphic_pane_g2_cp2

0xaa4c,	// (0x000254db) list_double_graphic_pane_g3_cp2

0xaa54,	// (0x000254e3) list_double_graphic_pane_t1_cp2_ParamLimits

0xaa54,	// (0x000254e3) list_double_graphic_pane_t1_cp2

0xaa6a,	// (0x000254f9) list_double_graphic_pane_t2_cp2_ParamLimits

0xaa6a,	// (0x000254f9) list_double_graphic_pane_t2_cp2

0x8c0f,	// (0x0002369e) list_double_number_pane_g1_cp2_ParamLimits

0x8c0f,	// (0x0002369e) list_double_number_pane_g1_cp2

0x8c1b,	// (0x000236aa) list_double_number_pane_g2_cp2

0xa9f5,	// (0x00025484) list_double_number_pane_t1_cp2_ParamLimits

0xa9f5,	// (0x00025484) list_double_number_pane_t1_cp2

0xaa09,	// (0x00025498) list_double_number_pane_t2_cp2_ParamLimits

0xaa09,	// (0x00025498) list_double_number_pane_t2_cp2

0xaa1f,	// (0x000254ae) list_double_number_pane_t3_cp2_ParamLimits

0xaa1f,	// (0x000254ae) list_double_number_pane_t3_cp2

0xa8de,	// (0x0002536d) list_single_graphic_pane_g1_cp2_ParamLimits

0xa8de,	// (0x0002536d) list_single_graphic_pane_g1_cp2

0x8c75,	// (0x00023704) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c75,	// (0x00023704) list_single_graphic_pane_g2_cp2

0x8c81,	// (0x00023710) list_single_graphic_pane_g3_cp2

0xa8b4,	// (0x00025343) list_single_graphic_pane_t1_cp2_ParamLimits

0xa8b4,	// (0x00025343) list_single_graphic_pane_t1_cp2

0x8c75,	// (0x00023704) list_single_number_pane_g1_cp2_ParamLimits

0x8c75,	// (0x00023704) list_single_number_pane_g1_cp2

0x8c81,	// (0x00023710) list_single_number_pane_g2_cp2

0xa8b4,	// (0x00025343) list_single_number_pane_t1_cp2_ParamLimits

0xa8b4,	// (0x00025343) list_single_number_pane_t1_cp2

0xa8ca,	// (0x00025359) list_single_number_pane_t2_cp2_ParamLimits

0xa8ca,	// (0x00025359) list_single_number_pane_t2_cp2

0x8a76,	// (0x00023505) list_double2_pane_g1_cp2_ParamLimits

0x8a76,	// (0x00023505) list_double2_pane_g1_cp2

0x8a87,	// (0x00023516) list_double2_pane_g2_cp2

0x8be7,	// (0x00023676) list_double2_pane_t1_cp2_ParamLimits

0x8be7,	// (0x00023676) list_double2_pane_t1_cp2

0x8bfd,	// (0x0002368c) list_double2_pane_t2_cp2_ParamLimits

0x8bfd,	// (0x0002368c) list_double2_pane_t2_cp2

0x8c0f,	// (0x0002369e) list_double_pane_g1_cp2_ParamLimits

0x8c0f,	// (0x0002369e) list_double_pane_g1_cp2

0x8c1b,	// (0x000236aa) list_double_pane_g2_cp2

0x8c23,	// (0x000236b2) list_double_pane_t1_cp2_ParamLimits

0x8c23,	// (0x000236b2) list_double_pane_t1_cp2

0x8c39,	// (0x000236c8) list_double_pane_t2_cp2_ParamLimits

0x8c39,	// (0x000236c8) list_double_pane_t2_cp2

0x8c65,	// (0x000236f4) list_single_pane_cp2_g3

0x8c75,	// (0x00023704) list_single_pane_g1_cp2_ParamLimits

0x8c75,	// (0x00023704) list_single_pane_g1_cp2

0x8c81,	// (0x00023710) list_single_pane_g2_cp2

0x8c89,	// (0x00023718) list_single_pane_t1_cp2_ParamLimits

0x8c89,	// (0x00023718) list_single_pane_t1_cp2

0x8ca1,	// (0x00023730) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8ca1,	// (0x00023730) list_single_large_graphic_pane_g1_cp2

0x8caf,	// (0x0002373e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8caf,	// (0x0002373e) list_single_large_graphic_pane_g2_cp2

0x8cbb,	// (0x0002374a) list_single_large_graphic_pane_g3_cp2

0x8cc3,	// (0x00023752) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8cc3,	// (0x00023752) list_single_large_graphic_pane_g4_cp1

0x8cdd,	// (0x0002376c) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8cdd,	// (0x0002376c) list_single_large_graphic_pane_t1_cp2

0xa87e,	// (0x0002530d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa87e,	// (0x0002530d) list_single_graphic_heading_pane_g1_cp2

0xa84b,	// (0x000252da) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa84b,	// (0x000252da) list_single_graphic_heading_pane_g4_cp2

0x8c81,	// (0x00023710) list_single_graphic_heading_pane_g5_cp2

0xa88a,	// (0x00025319) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa88a,	// (0x00025319) list_single_graphic_heading_pane_t1_cp2

0xa8a0,	// (0x0002532f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa8a0,	// (0x0002532f) list_single_graphic_heading_pane_t2_cp2

0xa83f,	// (0x000252ce) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa83f,	// (0x000252ce) list_single_2graphic_pane_g1_cp2

0xa84b,	// (0x000252da) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa84b,	// (0x000252da) list_single_2graphic_pane_g2_cp2

0x8c81,	// (0x00023710) list_single_2graphic_pane_g3_cp2

0xa85c,	// (0x000252eb) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa85c,	// (0x000252eb) list_single_2graphic_pane_g4_cp2

0xa868,	// (0x000252f7) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa868,	// (0x000252f7) list_single_2graphic_pane_t1_cp2

0x7763,	// (0x000221f2) list_highlight_pane_g10_cp1

0xa417,	// (0x00024ea6) list_highlight_pane_g1_cp1

0xa41f,	// (0x00024eae) list_highlight_pane_g2_cp1

0xa427,	// (0x00024eb6) list_highlight_pane_g3_cp1

0xa42f,	// (0x00024ebe) list_highlight_pane_g4_cp1

0xa437,	// (0x00024ec6) list_highlight_pane_g5_cp1

0xa43f,	// (0x00024ece) list_highlight_pane_g6_cp1

0xa447,	// (0x00024ed6) list_highlight_pane_g7_cp1

0xa44f,	// (0x00024ede) list_highlight_pane_g8_cp1

0xa457,	// (0x00024ee6) list_highlight_pane_g9_cp1

0xa337,	// (0x00024dc6) form_field_slider_pane_t3

0xa345,	// (0x00024dd4) form_field_slider_pane_t4

0xa353,	// (0x00024de2) slider_form_pane_ParamLimits

0xa353,	// (0x00024de2) slider_form_pane

0x776d,	// (0x000221fc) control_abbreviations

0x776d,	// (0x000221fc) control_conventions

0x776d,	// (0x000221fc) control_definitions

0x776d,	// (0x000221fc) format_table_attribute

0xab45,	// (0x000255d4) bg_popup_preview_window_pane_g9

0x776d,	// (0x000221fc) format_table_data2

0x776d,	// (0x000221fc) format_table_data3

0x776d,	// (0x000221fc) format_table_data_example

0x0008,

0x776d,	// (0x000221fc) intro_purpose

0xf928,	// (0x0002a3b7) bg_popup_preview_window_pane_g

0x776d,	// (0x000221fc) texts_category

0x776d,	// (0x000221fc) texts_graphics

0x8cf3,	// (0x00023782) text_digital

0x8d02,	// (0x00023791) text_primary

0x8d11,	// (0x000237a0) text_primary_small

0x8d20,	// (0x000237af) text_secondary

0x8d2f,	// (0x000237be) text_title

0xb2e1,	// (0x00025d70) bg_passive_tab_pane_g1_cp3_srt

0x8987,	// (0x00023416) bg_passive_tab_pane_g2_cp3_srt

0xb2ea,	// (0x00025d79) bg_passive_tab_pane_g3_cp3_srt

0x784d,	// (0x000222dc) bg_active_tab_pane_cp3_srt_ParamLimits

0x784d,	// (0x000222dc) bg_active_tab_pane_cp3_srt

0xb2f3,	// (0x00025d82) tabs_4_active_pane_srt_g1

0xb2fb,	// (0x00025d8a) tabs_4_active_pane_srt_t1_ParamLimits

0xb2fb,	// (0x00025d8a) tabs_4_active_pane_srt_t1

0xb2e1,	// (0x00025d70) bg_active_tab_pane_g1_cp3_copy1

0x8987,	// (0x00023416) bg_active_tab_pane_g2_cp3_copy1

0xb2ea,	// (0x00025d79) bg_active_tab_pane_g3_cp3_copy1

0x784d,	// (0x000222dc) tabs_2_long_active_pane_srt_ParamLimits

0x784d,	// (0x000222dc) tabs_2_long_active_pane_srt

0x784d,	// (0x000222dc) tabs_2_long_passive_pane_srt_ParamLimits

0x784d,	// (0x000222dc) tabs_2_long_passive_pane_srt

0x82cb,	// (0x00022d5a) bg_passive_tab_pane_cp4_srt_ParamLimits

0x82cb,	// (0x00022d5a) bg_passive_tab_pane_cp4_srt

0xaf95,	// (0x00025a24) bg_passive_tab_pane_g1_cp4_srt

0x8987,	// (0x00023416) bg_passive_tab_pane_g2_cp4_srt

0xaf9e,	// (0x00025a2d) bg_passive_tab_pane_g3_cp4_srt

0x82aa,	// (0x00022d39) bg_active_tab_pane_cp4_srt_ParamLimits

0x82aa,	// (0x00022d39) bg_active_tab_pane_cp4_srt

0xafa7,	// (0x00025a36) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafa7,	// (0x00025a36) tabs_2_long_active_pane_srt_t1

0xaf95,	// (0x00025a24) bg_active_tab_pane_g1_cp4_srt

0x8987,	// (0x00023416) bg_active_tab_pane_g2_cp4_srt

0xaf9e,	// (0x00025a2d) bg_active_tab_pane_g3_cp4_srt

0x7ac9,	// (0x00022558) tabs_3_long_active_pane_srt_ParamLimits

0x7ac9,	// (0x00022558) tabs_3_long_active_pane_srt

0x7ac9,	// (0x00022558) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7ac9,	// (0x00022558) tabs_3_long_passive_pane_cp_srt

0x7ac9,	// (0x00022558) tabs_3_long_passive_pane_srt_ParamLimits

0x7ac9,	// (0x00022558) tabs_3_long_passive_pane_srt

0x82cb,	// (0x00022d5a) bg_passive_tab_pane_cp5_srt_ParamLimits

0x82cb,	// (0x00022d5a) bg_passive_tab_pane_cp5_srt

0x8a11,	// (0x000234a0) bg_passive_tab_pane_g1_cp5_srt

0x8987,	// (0x00023416) bg_passive_tab_pane_g2_cp5_srt

0x8a1a,	// (0x000234a9) bg_passive_tab_pane_g3_cp5_srt

0x82aa,	// (0x00022d39) bg_active_tab_pane_cp5_srt_ParamLimits

0x82aa,	// (0x00022d39) bg_active_tab_pane_cp5_srt

0xaf83,	// (0x00025a12) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaf83,	// (0x00025a12) tabs_3_long_active_pane_srt_t1

0x8a11,	// (0x000234a0) bg_active_tab_pane_g1_cp5_srt

0x8987,	// (0x00023416) bg_active_tab_pane_g2_cp5_srt

0x8a1a,	// (0x000234a9) bg_active_tab_pane_g3_cp5_srt

0xaf75,	// (0x00025a04) navi_text_pane_srt_t1

0xaf6d,	// (0x000259fc) navi_icon_pane_srt_g1

0x8f06,	// (0x00023995) midp_editing_number_pane_srt

0x8d3e,	// (0x000237cd) midp_ticker_pane_srt

0x8f0e,	// (0x0002399d) midp_ticker_pane_srt_g1

0x8f16,	// (0x000239a5) midp_ticker_pane_srt_g2

0x0001,

0xf7b2,	// (0x0002a241) midp_ticker_pane_srt_g

0x8f1e,	// (0x000239ad) midp_ticker_pane_srt_t1

0xaf5e,	// (0x000259ed) midp_editing_number_pane_t1_copy1

0x8d46,	// (0x000237d5) listscroll_midp_pane

0x8d46,	// (0x000237d5) midp_form_pane

0x8db4,	// (0x00023843) midp_info_popup_window_ParamLimits

0x8db4,	// (0x00023843) midp_info_popup_window

0x818c,	// (0x00022c1b) bg_popup_sub_pane_cp50_ParamLimits

0x818c,	// (0x00022c1b) bg_popup_sub_pane_cp50

0xa07e,	// (0x00024b0d) listscroll_midp_info_pane_ParamLimits

0xa07e,	// (0x00024b0d) listscroll_midp_info_pane

0xa066,	// (0x00024af5) listscroll_form_midp_pane_ParamLimits

0xa066,	// (0x00024af5) listscroll_form_midp_pane

0xa072,	// (0x00024b01) scroll_bar_cp050

0xa046,	// (0x00024ad5) list_midp_pane

0xbd3a,	// (0x000267c9) signal_pane_g2_cp

0x9f80,	// (0x00024a0f) listscroll_midp_info_pane_t1_ParamLimits

0x9f80,	// (0x00024a0f) listscroll_midp_info_pane_t1

0x9f98,	// (0x00024a27) listscroll_midp_info_pane_t2_ParamLimits

0x9f98,	// (0x00024a27) listscroll_midp_info_pane_t2

0x9fd6,	// (0x00024a65) listscroll_midp_info_pane_t3_ParamLimits

0x9fd6,	// (0x00024a65) listscroll_midp_info_pane_t3

0xa010,	// (0x00024a9f) listscroll_midp_info_pane_t4_ParamLimits

0xa010,	// (0x00024a9f) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0002a2f2) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0002a2f2) listscroll_midp_info_pane_t

0x8256,	// (0x00022ce5) scroll_pane_cp21

0x9f1a,	// (0x000249a9) form_midp_field_choice_group_pane

0x9f23,	// (0x000249b2) form_midp_field_text_pane

0x9f66,	// (0x000249f5) form_midp_field_time_pane

0x9f6e,	// (0x000249fd) form_midp_gauge_slider_pane

0x9f77,	// (0x00024a06) form_midp_gauge_wait_pane

0x776d,	// (0x000221fc) form_midp_image_pane

0x55a7,	// (0x00020036) list_single_midp_pane_ParamLimits

0x55a7,	// (0x00020036) list_single_midp_pane

0x9ede,	// (0x0002496d) form_midp_field_text_pane_t1

0x9cf2,	// (0x00024781) input_focus_pane_cp050

0x9f09,	// (0x00024998) list_midp_form_text_pane

0x9ead,	// (0x0002493c) form_midp_field_choice_group_pane_t1

0x9ebb,	// (0x0002494a) input_focus_pane_cp051

0x9ecf,	// (0x0002495e) list_midp_choice_pane

0x776d,	// (0x000221fc) status_idle_pane

0x9e91,	// (0x00024920) form_midp_field_time_pane_t1

0x7763,	// (0x000221f2) wait_anim_pane_g2_copy1

0x9e9f,	// (0x0002492e) form_midp_field_time_pane_t2

0x0001,

0x8e64,	// (0x000238f3) aid_navinavi_width_2_pane

0xf85e,	// (0x0002a2ed) form_midp_field_time_pane_t

0x776d,	// (0x000221fc) input_focus_pane_cp052

0x776d,	// (0x000221fc) bg_input_focus_pane_cp040

0x9e51,	// (0x000248e0) form_midp_gauge_slider_pane_t1

0x9e5f,	// (0x000248ee) form_midp_gauge_slider_pane_t2

0x9e6d,	// (0x000248fc) form_midp_gauge_slider_pane_t3

0x9e7b,	// (0x0002490a) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0002a2e4) form_midp_gauge_slider_pane_t

0x9e89,	// (0x00024918) form_midp_slider_pane

0x784d,	// (0x000222dc) bg_input_focus_pane_cp041_ParamLimits

0x784d,	// (0x000222dc) bg_input_focus_pane_cp041

0x9e1e,	// (0x000248ad) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e1e,	// (0x000248ad) form_midp_gauge_wait_pane_t1

0x9e30,	// (0x000248bf) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e30,	// (0x000248bf) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0002a2df) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0002a2df) form_midp_gauge_wait_pane_t

0x9e42,	// (0x000248d1) form_midp_wait_pane_ParamLimits

0x9e42,	// (0x000248d1) form_midp_wait_pane

0x9de6,	// (0x00024875) form_midp_image_pane_g1

0x9def,	// (0x0002487e) form_midp_image_pane_t1

0x9dfe,	// (0x0002488d) form_midp_image_pane_t2

0x9e0d,	// (0x0002489c) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0002a2d8) form_midp_image_pane_t

0x9ddd,	// (0x0002486c) list_single_midp_pane_g1

0x5598,	// (0x00020027) list_single_midp_pane_t1

0x9dc3,	// (0x00024852) list_midp_form_item_pane_ParamLimits

0x9dc3,	// (0x00024852) list_midp_form_item_pane

0x8e0c,	// (0x0002389b) list_midp_form_item_pane_t1

0x8e1b,	// (0x000238aa) midp_ticker_pane_g1

0x8e27,	// (0x000238b6) midp_ticker_pane_g2

0x0001,

0xf798,	// (0x0002a227) midp_ticker_pane_g

0x8e33,	// (0x000238c2) midp_ticker_pane_t1

0xb1dd,	// (0x00025c6c) midp_editing_number_pane_t1

0xb1bb,	// (0x00025c4a) midp_editing_number_pane

0xb1ca,	// (0x00025c59) midp_ticker_pane

0xaf4e,	// (0x000259dd) ai_message_heading_pane

0x776d,	// (0x000221fc) bg_popup_window_pane_cp14

0xaf56,	// (0x000259e5) listscroll_ai_message_pane

0xaed4,	// (0x00025963) ai_message_heading_pane_g1_ParamLimits

0xaed4,	// (0x00025963) ai_message_heading_pane_g1

0xaee0,	// (0x0002596f) ai_message_heading_pane_g2_ParamLimits

0xaee0,	// (0x0002596f) ai_message_heading_pane_g2

0xaeee,	// (0x0002597d) ai_message_heading_pane_g3_ParamLimits

0xaeee,	// (0x0002597d) ai_message_heading_pane_g3

0xaefa,	// (0x00025989) ai_message_heading_pane_g4_ParamLimits

0xaefa,	// (0x00025989) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0002a419) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0002a419) ai_message_heading_pane_g

0xaf06,	// (0x00025995) ai_message_heading_pane_t1_ParamLimits

0xaf06,	// (0x00025995) ai_message_heading_pane_t1

0xaf20,	// (0x000259af) ai_message_heading_pane_t2_ParamLimits

0xaf20,	// (0x000259af) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0002a422) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0002a422) ai_message_heading_pane_t

0xaf34,	// (0x000259c3) bg_popup_heading_pane_cp1_ParamLimits

0xaf34,	// (0x000259c3) bg_popup_heading_pane_cp1

0xaec2,	// (0x00025951) list_ai_message_pane_ParamLimits

0xaec2,	// (0x00025951) list_ai_message_pane

0x8256,	// (0x00022ce5) scroll_pane_cp10

0xae5e,	// (0x000258ed) list_ai_message_pane_g1

0xae66,	// (0x000258f5) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0002a3f6) list_ai_message_pane_g

0xae6e,	// (0x000258fd) list_ai_message_pane_t1_ParamLimits

0xae6e,	// (0x000258fd) list_ai_message_pane_t1

0xae83,	// (0x00025912) list_ai_message_pane_t2_ParamLimits

0xae83,	// (0x00025912) list_ai_message_pane_t2

0xae98,	// (0x00025927) list_ai_message_pane_t3_ParamLimits

0xae98,	// (0x00025927) list_ai_message_pane_t3

0xaead,	// (0x0002593c) list_ai_message_pane_t4_ParamLimits

0xaead,	// (0x0002593c) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0002a3fb) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0002a3fb) list_ai_message_pane_t

0xae47,	// (0x000258d6) cell_ai_soft_ind_pane_ParamLimits

0xae47,	// (0x000258d6) cell_ai_soft_ind_pane

0x8e45,	// (0x000238d4) cell_ai_soft_ind_pane_g1_ParamLimits

0x8e45,	// (0x000238d4) cell_ai_soft_ind_pane_g1

0x776d,	// (0x000221fc) grid_highlight_cp1

0x8e52,	// (0x000238e1) text_secondary_cp56_ParamLimits

0x8e52,	// (0x000238e1) text_secondary_cp56

0xae1c,	// (0x000258ab) example_general_pane_ParamLimits

0xae1c,	// (0x000258ab) example_general_pane

0xae28,	// (0x000258b7) example_parent_pane_g1_ParamLimits

0xae28,	// (0x000258b7) example_parent_pane_g1

0xae34,	// (0x000258c3) example_parent_pane_t1_ParamLimits

0xae34,	// (0x000258c3) example_parent_pane_t1

0x9487,	// (0x00023f16) popup_preview_text_window_ParamLimits

0x9487,	// (0x00023f16) popup_preview_text_window

0x8c6d,	// (0x000236fc) list_single_pane_cp2_g4

0x7b7f,	// (0x0002260e) bg_popup_preview_window_pane_ParamLimits

0x7b7f,	// (0x0002260e) bg_popup_preview_window_pane

0xab4f,	// (0x000255de) popup_preview_text_window_t1_ParamLimits

0xab4f,	// (0x000255de) popup_preview_text_window_t1

0xab6d,	// (0x000255fc) popup_preview_text_window_t2_ParamLimits

0xab6d,	// (0x000255fc) popup_preview_text_window_t2

0xabb6,	// (0x00025645) popup_preview_text_window_t3_ParamLimits

0xabb6,	// (0x00025645) popup_preview_text_window_t3

0xabfb,	// (0x0002568a) popup_preview_text_window_t4_ParamLimits

0xabfb,	// (0x0002568a) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0002a3ca) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0002a3ca) popup_preview_text_window_t

0xac79,	// (0x00025708) scroll_pane_cp11

0x9c00,	// (0x0002468f) bg_popup_preview_window_pane_g1

0xab03,	// (0x00025592) bg_popup_preview_window_pane_g2

0xab0d,	// (0x0002559c) bg_popup_preview_window_pane_g3

0xab17,	// (0x000255a6) bg_popup_preview_window_pane_g4

0xab21,	// (0x000255b0) bg_popup_preview_window_pane_g5

0xab2b,	// (0x000255ba) bg_popup_preview_window_pane_g6

0xab33,	// (0x000255c2) bg_popup_preview_window_pane_g7

0xab3b,	// (0x000255ca) bg_popup_preview_window_pane_g8

0x5cc3,	// (0x00020752) aid_popup_width_pane

0x9463,	// (0x00023ef2) popup_midp_note_alarm_window_ParamLimits

0x9463,	// (0x00023ef2) popup_midp_note_alarm_window

0x80c8,	// (0x00022b57) data_form_pane_ParamLimits

0x528c,	// (0x0001fd1b) form_field_data_pane_g1

0x5296,	// (0x0001fd25) form_field_data_pane_t1_ParamLimits

0x80d4,	// (0x00022b63) input_focus_pane_ParamLimits

0x80e2,	// (0x00022b71) data_form_wide_pane_ParamLimits

0x52b0,	// (0x0001fd3f) form_field_data_wide_pane_g1

0x52bc,	// (0x0001fd4b) form_field_data_wide_pane_t1_ParamLimits

0x7e45,	// (0x000228d4) input_focus_pane_cp6_ParamLimits

0x8201,	// (0x00022c90) input_popup_find_pane_g1_ParamLimits

0x8201,	// (0x00022c90) input_popup_find_pane_g1

0x623e,	// (0x00020ccd) aid_navi_side_left_pane

0x6253,	// (0x00020ce2) aid_navi_side_right_pane

0xa512,	// (0x00024fa1) bg_popup_window_pane_cp30_ParamLimits

0xa512,	// (0x00024fa1) bg_popup_window_pane_cp30

0xa58c,	// (0x0002501b) popup_midp_note_alarm_window_g1_ParamLimits

0xa58c,	// (0x0002501b) popup_midp_note_alarm_window_g1

0xa5bc,	// (0x0002504b) popup_midp_note_alarm_window_t1_ParamLimits

0xa5bc,	// (0x0002504b) popup_midp_note_alarm_window_t1

0xa65d,	// (0x000250ec) popup_midp_note_alarm_window_t2_ParamLimits

0xa65d,	// (0x000250ec) popup_midp_note_alarm_window_t2

0xa70b,	// (0x0002519a) popup_midp_note_alarm_window_t3_ParamLimits

0xa70b,	// (0x0002519a) popup_midp_note_alarm_window_t3

0xa73d,	// (0x000251cc) popup_midp_note_alarm_window_t4_ParamLimits

0xa73d,	// (0x000251cc) popup_midp_note_alarm_window_t4

0xa763,	// (0x000251f2) popup_midp_note_alarm_window_t5_ParamLimits

0xa763,	// (0x000251f2) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0002a367) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0002a367) popup_midp_note_alarm_window_t

0xa80f,	// (0x0002529e) wait_bar_pane_cp1_ParamLimits

0xa80f,	// (0x0002529e) wait_bar_pane_cp1

0x776d,	// (0x000221fc) wait_anim_pane_copy1

0x776d,	// (0x000221fc) wait_border_pane_copy1

0xa1f7,	// (0x00024c86) wait_border_pane_g1_copy1

0x52d6,	// (0x0001fd65) form_field_popup_pane_g1

0x52de,	// (0x0001fd6d) form_field_popup_pane_t1_ParamLimits

0x80d4,	// (0x00022b63) input_focus_pane_cp7_ParamLimits

0x810e,	// (0x00022b9d) list_form_pane_ParamLimits

0x52f8,	// (0x0001fd87) form_field_popup_wide_pane_g1

0x5300,	// (0x0001fd8f) form_field_popup_wide_pane_t1_ParamLimits

0x80d4,	// (0x00022b63) input_focus_pane_cp8_ParamLimits

0x811a,	// (0x00022ba9) list_form_wide_pane_ParamLimits

0xb36e,	// (0x00025dfd) aid_size_cell_graphic_pane

0x538c,	// (0x0001fe1b) data_form_pane_t1_ParamLimits

0x55f2,	// (0x00020081) data_form_wide_pane_t1_ParamLimits

0x97ae,	// (0x0002423d) bg_status_flat_pane

0x77ad,	// (0x0002223c) title_pane_t1_ParamLimits

0x7815,	// (0x000222a4) title_pane_t2_ParamLimits

0x783b,	// (0x000222ca) title_pane_t3_ParamLimits

0xf59b,	// (0x0002a02a) title_pane_t_ParamLimits

0x86d9,	// (0x00023168) level_1_signal_ParamLimits

0x86e6,	// (0x00023175) level_2_signal_ParamLimits

0x86f3,	// (0x00023182) level_3_signal_ParamLimits

0x8700,	// (0x0002318f) level_4_signal_ParamLimits

0x870d,	// (0x0002319c) level_5_signal_ParamLimits

0x871a,	// (0x000231a9) level_6_signal_ParamLimits

0x8727,	// (0x000231b6) level_7_signal_ParamLimits

0x86d9,	// (0x00023168) level_1_battery_ParamLimits

0x86e6,	// (0x00023175) level_2_battery_ParamLimits

0x86f3,	// (0x00023182) level_3_battery_ParamLimits

0x8700,	// (0x0002318f) level_4_battery_ParamLimits

0x870d,	// (0x0002319c) level_5_battery_ParamLimits

0x871a,	// (0x000231a9) level_6_battery_ParamLimits

0x8727,	// (0x000231b6) level_7_battery_ParamLimits

0xa417,	// (0x00024ea6) bg_status_flat_pane_g1

0xa41f,	// (0x00024eae) bg_status_flat_pane_g2

0xa427,	// (0x00024eb6) bg_status_flat_pane_g3

0xa42f,	// (0x00024ebe) bg_status_flat_pane_g4

0xa437,	// (0x00024ec6) bg_status_flat_pane_g5

0xa43f,	// (0x00024ece) bg_status_flat_pane_g6

0xa447,	// (0x00024ed6) bg_status_flat_pane_g7

0x7863,	// (0x000222f2) tabs_3_active_pane_t1_ParamLimits

0x7863,	// (0x000222f2) tabs_3_passive_pane_t1_ParamLimits

0x787d,	// (0x0002230c) tabs_4_active_pane_t1_ParamLimits

0x787d,	// (0x0002230c) tabs_4_1_passive_pane_t1_ParamLimits

0x8298,	// (0x00022d27) tabs_2_active_pane_t1_ParamLimits

0x8298,	// (0x00022d27) tabs_2_passive_pane_t1_ParamLimits

0x82aa,	// (0x00022d39) bg_active_tab_pane_cp4_ParamLimits

0x82b8,	// (0x00022d47) tabs_2_long_active_pane_t1_ParamLimits

0x82cb,	// (0x00022d5a) bg_passive_tab_pane_cp4_ParamLimits

0x6797,	// (0x00021226) list_single_midp_graphic_pane_t1_ParamLimits

0x82aa,	// (0x00022d39) bg_active_tab_pane_cp5_ParamLimits

0x82d7,	// (0x00022d66) tabs_3_long_active_pane_t1_ParamLimits

0x82cb,	// (0x00022d5a) bg_passive_tab_pane_cp5_ParamLimits

0x6797,	// (0x00021226) list_single_midp_graphic_pane_t1

0x97ae,	// (0x0002423d) bg_status_flat_pane_ParamLimits

0x9879,	// (0x00024308) indicator_pane_cp2_ParamLimits

0x9879,	// (0x00024308) indicator_pane_cp2

0x99bb,	// (0x0002444a) navi_pane_srt_ParamLimits

0x99bb,	// (0x0002444a) navi_pane_srt

0x99df,	// (0x0002446e) popup_clock_digital_analogue_window_cp1

0x792d,	// (0x000223bc) indicator_pane_t1

0x8d3e,	// (0x000237cd) copy_highlight_pane

0x8d3e,	// (0x000237cd) cursor_graphics_pane

0x8d3e,	// (0x000237cd) graphic_within_text_pane

0x8d3e,	// (0x000237cd) link_highlight_pane

0xac3c,	// (0x000256cb) popup_preview_text_window_t5_ParamLimits

0xac3c,	// (0x000256cb) popup_preview_text_window_t5

0x8e6e,	// (0x000238fd) cursor_digital_pane

0x8e6e,	// (0x000238fd) cursor_primary_pane

0x8e7f,	// (0x0002390e) cursor_primary_small_pane

0x8e87,	// (0x00023916) cursor_secondary_pane

0x8e8f,	// (0x0002391e) cursor_title_pane

0x8e6e,	// (0x000238fd) link_highlight_digital_pane

0x8e76,	// (0x00023905) link_highlight_primary_pane

0x8e7f,	// (0x0002390e) link_highlight_primary_small_pane

0x8e87,	// (0x00023916) link_highlight_secondary_pane

0x8e8f,	// (0x0002391e) link_highlight_title_pane

0x8e6e,	// (0x000238fd) copy_highlight_digital_pane

0x8e6e,	// (0x000238fd) copy_highlight_primary_pane

0x8e7f,	// (0x0002390e) copy_highlight_primary_small_pane

0x8e87,	// (0x00023916) copy_highlight_secondary_pane

0x8e8f,	// (0x0002391e) copy_highlight_title_pane

0x8e87,	// (0x00023916) graphic_text_digital_pane

0xa4b5,	// (0x00024f44) graphic_text_primary_pane

0xa4be,	// (0x00024f4d) graphic_text_primary_small_pane

0x8e7f,	// (0x0002390e) graphic_text_secondary_pane

0x8e6e,	// (0x000238fd) graphic_text_title_pane

0x8e97,	// (0x00023926) cursor_primary_pane_g1

0xa4a7,	// (0x00024f36) cursor_text_primary_t1

0xa48f,	// (0x00024f1e) cursor_primary_small_pane_g1

0xa499,	// (0x00024f28) cursor_text_primary_small_t1

0xa477,	// (0x00024f06) cursor_primary_small_pane_g1_copy1

0xa481,	// (0x00024f10) cursor_text_primary_small_t1_copy1

0xa45f,	// (0x00024eee) cursor_text_title_t1

0xa46d,	// (0x00024efc) cursor_title_pane_g1

0x8e97,	// (0x00023926) cursor_digital_pane_g1

0x8ea1,	// (0x00023930) cursor_text_digital_t1

0x8eaf,	// (0x0002393e) link_highlight_primary_pane_g1

0xa408,	// (0x00024e97) link_highlight_primary_pane_t1

0x8eaf,	// (0x0002393e) link_highlight_primary_small_pane_g1

0x8eb7,	// (0x00023946) link_highlight_primary_small_pane_t1

0x8ec6,	// (0x00023955) link_highlight_secondary_pane_g1

0x8ece,	// (0x0002395d) link_highlight_secondary_pane_t1

0xa37c,	// (0x00024e0b) link_highlight_title_pane_g1

0xa384,	// (0x00024e13) link_highlight_title_pane_t1

0xa365,	// (0x00024df4) link_highlight_digital_pane_g1

0xa36d,	// (0x00024dfc) link_highlight_digital_pane_t1

0xa22d,	// (0x00024cbc) copy_highlight_primary_pane_g1

0xa244,	// (0x00024cd3) copy_highlight_primary_pane_t1

0xa22d,	// (0x00024cbc) copy_highlight_primary_small_pane_g1

0xa235,	// (0x00024cc4) copy_highlight_primary_small_pane_t1

0x8edd,	// (0x0002396c) copy_highlight_secondary_pane_g1

0x8ee5,	// (0x00023974) copy_highlight_secondary_pane_t1

0xa216,	// (0x00024ca5) copy_highlight_title_pane_g1

0xa21e,	// (0x00024cad) copy_highlight_title_pane_t1

0xa22d,	// (0x00024cbc) copy_highlight_digital_pane_g1

0xb53e,	// (0x00025fcd) copy_highlight_digital_pane_t1

0xb492,	// (0x00025f21) graphic_text_primary_pane_g1

0xb522,	// (0x00025fb1) graphic_text_primary_pane_t1

0xb530,	// (0x00025fbf) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0002a496) graphic_text_primary_pane_t

0xb4fe,	// (0x00025f8d) graphic_text_primary_small_pane_g1

0xb506,	// (0x00025f95) graphic_text_primary_small_pane_t1

0xb514,	// (0x00025fa3) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0002a491) graphic_text_primary_small_pane_t

0xb4da,	// (0x00025f69) graphic_text_secondary_pane_g1

0xb4e2,	// (0x00025f71) graphic_text_secondary_pane_t1

0xb4f0,	// (0x00025f7f) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0002a48c) graphic_text_secondary_pane_t

0xb4b6,	// (0x00025f45) graphic_text_title_pane_g1

0xb4be,	// (0x00025f4d) graphic_text_title_pane_t1

0xb4cc,	// (0x00025f5b) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0002a487) graphic_text_title_pane_t

0xb492,	// (0x00025f21) graphic_text_digital_pane_g1

0xb49a,	// (0x00025f29) graphic_text_digital_pane_t1

0xb4a8,	// (0x00025f37) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0002a482) graphic_text_digital_pane_t

0x784d,	// (0x000222dc) navi_icon_pane_srt_ParamLimits

0x784d,	// (0x000222dc) navi_icon_pane_srt

0x776d,	// (0x000221fc) navi_midp_pane_srt

0x776d,	// (0x000221fc) navi_navi_pane_srt

0x784d,	// (0x000222dc) navi_text_pane_srt_ParamLimits

0x784d,	// (0x000222dc) navi_text_pane_srt

0xb45d,	// (0x00025eec) navi_navi_icon_text_pane_srt

0xb465,	// (0x00025ef4) navi_navi_pane_srt_g1_ParamLimits

0xb465,	// (0x00025ef4) navi_navi_pane_srt_g1

0xb477,	// (0x00025f06) navi_navi_pane_srt_g2_ParamLimits

0xb477,	// (0x00025f06) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0002a47d) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0002a47d) navi_navi_pane_srt_g

0xb489,	// (0x00025f18) navi_navi_tabs_pane_srt

0xb45d,	// (0x00025eec) navi_navi_text_pane_srt

0xb45d,	// (0x00025eec) navi_navi_volume_pane_srt

0xb44e,	// (0x00025edd) navi_navi_text_pane_srt_t1

0x6af1,	// (0x00021580) navi_navi_volume_pane_srt_g1

0x6af9,	// (0x00021588) volume_small_pane_srt_ParamLimits

0x6af9,	// (0x00021588) volume_small_pane_srt

0x6525,	// (0x00020fb4) volume_small_pane_srt_g1_ParamLimits

0x6525,	// (0x00020fb4) volume_small_pane_srt_g1

0x6535,	// (0x00020fc4) volume_small_pane_srt_g2_ParamLimits

0x6535,	// (0x00020fc4) volume_small_pane_srt_g2

0x6546,	// (0x00020fd5) volume_small_pane_srt_g3_ParamLimits

0x6546,	// (0x00020fd5) volume_small_pane_srt_g3

0x6557,	// (0x00020fe6) volume_small_pane_srt_g4_ParamLimits

0x6557,	// (0x00020fe6) volume_small_pane_srt_g4

0x6568,	// (0x00020ff7) volume_small_pane_srt_g5_ParamLimits

0x6568,	// (0x00020ff7) volume_small_pane_srt_g5

0x6579,	// (0x00021008) volume_small_pane_srt_g6_ParamLimits

0x6579,	// (0x00021008) volume_small_pane_srt_g6

0x658a,	// (0x00021019) volume_small_pane_srt_g7_ParamLimits

0x658a,	// (0x00021019) volume_small_pane_srt_g7

0x659b,	// (0x0002102a) volume_small_pane_srt_g8_ParamLimits

0x659b,	// (0x0002102a) volume_small_pane_srt_g8

0x65ac,	// (0x0002103b) volume_small_pane_srt_g9_ParamLimits

0x65ac,	// (0x0002103b) volume_small_pane_srt_g9

0x65bd,	// (0x0002104c) volume_small_pane_srt_g10_ParamLimits

0x65bd,	// (0x0002104c) volume_small_pane_srt_g10

0x0009,

0xf79d,	// (0x0002a22c) volume_small_pane_srt_g_ParamLimits

0xf79d,	// (0x0002a22c) volume_small_pane_srt_g

0x7c34,	// (0x000226c3) query_popup_data_pane_cp2

0xb434,	// (0x00025ec3) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb434,	// (0x00025ec3) navi_navi_icon_text_pane_srt_t1

0xa4b5,	// (0x00024f44) navi_tabs_2_long_pane_srt

0xa4b5,	// (0x00024f44) navi_tabs_2_pane_srt

0xa4b5,	// (0x00024f44) navi_tabs_3_long_pane_srt

0xa4b5,	// (0x00024f44) navi_tabs_3_pane_srt

0xa4b5,	// (0x00024f44) navi_tabs_4_pane_srt

0x6ad1,	// (0x00021560) tabs_2_active_pane_srt_ParamLimits

0x6ad1,	// (0x00021560) tabs_2_active_pane_srt

0x6ae1,	// (0x00021570) tabs_2_passive_pane_srt_ParamLimits

0x6ae1,	// (0x00021570) tabs_2_passive_pane_srt

0x90c4,	// (0x00023b53) bg_passive_tab_pane_cp1_srt_ParamLimits

0x90c4,	// (0x00023b53) bg_passive_tab_pane_cp1_srt

0xb400,	// (0x00025e8f) bg_passive_tab_pane_g1_cp1_srt

0x8987,	// (0x00023416) bg_passive_tab_pane_g2_cp1_srt

0xb409,	// (0x00025e98) bg_passive_tab_pane_g3_cp1_srt

0x784d,	// (0x000222dc) bg_active_tab_pane_cp1_srt_ParamLimits

0x784d,	// (0x000222dc) bg_active_tab_pane_cp1_srt

0xb412,	// (0x00025ea1) tabs_2_active_pane_srt_g1

0xb41a,	// (0x00025ea9) tabs_2_active_pane_srt_t1_ParamLimits

0xb41a,	// (0x00025ea9) tabs_2_active_pane_srt_t1

0xb400,	// (0x00025e8f) bg_active_tab_pane_g1_cp1_srt

0x8987,	// (0x00023416) bg_active_tab_pane_g2_cp1_srt

0xb409,	// (0x00025e98) bg_active_tab_pane_g3_cp1_srt

0x6a9e,	// (0x0002152d) tabs_3_active_pane_srt_ParamLimits

0x6a9e,	// (0x0002152d) tabs_3_active_pane_srt

0x6aaf,	// (0x0002153e) tabs_3_passive_pane_cp_srt_ParamLimits

0x6aaf,	// (0x0002153e) tabs_3_passive_pane_cp_srt

0x6ac0,	// (0x0002154f) tabs_3_passive_pane_srt_ParamLimits

0x6ac0,	// (0x0002154f) tabs_3_passive_pane_srt

0x90c4,	// (0x00023b53) bg_passive_tab_pane_cp2_srt_ParamLimits

0x90c4,	// (0x00023b53) bg_passive_tab_pane_cp2_srt

0x8ef4,	// (0x00023983) bg_passive_tab_pane_g1_cp2_srt

0x8987,	// (0x00023416) bg_passive_tab_pane_g2_cp2_srt

0x8efd,	// (0x0002398c) bg_passive_tab_pane_g3_cp2_srt

0x784d,	// (0x000222dc) bg_active_tab_pane_cp2_srt_ParamLimits

0x784d,	// (0x000222dc) bg_active_tab_pane_cp2_srt

0xb3e6,	// (0x00025e75) tabs_3_active_pane_srt_g1

0xb3ee,	// (0x00025e7d) tabs_3_active_pane_srt_t1_ParamLimits

0xb3ee,	// (0x00025e7d) tabs_3_active_pane_srt_t1

0x8ef4,	// (0x00023983) bg_active_tab_pane_g1_cp2_srt

0x8987,	// (0x00023416) bg_active_tab_pane_g2_cp2_srt

0x8efd,	// (0x0002398c) bg_active_tab_pane_g3_cp2_srt

0x6a56,	// (0x000214e5) tabs_4_active_pane_srt_ParamLimits

0x6a56,	// (0x000214e5) tabs_4_active_pane_srt

0x6a68,	// (0x000214f7) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6a68,	// (0x000214f7) tabs_4_passive_pane_cp2_srt

0x9052,	// (0x00023ae1) aid_size_cell_toolbar

0x82cb,	// (0x00022d5a) main_idle_act_pane_ParamLimits

0x9289,	// (0x00023d18) popup_large_graphic_colour_window_ParamLimits

0x9630,	// (0x000240bf) popup_toolbar_window_ParamLimits

0x9630,	// (0x000240bf) popup_toolbar_window

0x564b,	// (0x000200da) list_single_graphic_2heading_pane_ParamLimits

0x564b,	// (0x000200da) list_single_graphic_2heading_pane

0x8487,	// (0x00022f16) aid_size_cell_apps_grid_lsc_pane

0x8499,	// (0x00022f28) aid_size_cell_apps_grid_prt_pane

0x90c4,	// (0x00023b53) bg_wml_button_pane_cp1_ParamLimits

0x90c4,	// (0x00023b53) bg_wml_button_pane_cp1

0x9ede,	// (0x0002496d) form_midp_field_text_pane_t1_ParamLimits

0x9cf2,	// (0x00024781) input_focus_pane_cp050_ParamLimits

0x9f09,	// (0x00024998) list_midp_form_text_pane_ParamLimits

0x9ebb,	// (0x0002494a) input_focus_pane_cp051_ParamLimits

0x9ecf,	// (0x0002495e) list_midp_choice_pane_ParamLimits

0x9d83,	// (0x00024812) list_single_2graphic_pane_cp3_ParamLimits

0x9d83,	// (0x00024812) list_single_2graphic_pane_cp3

0x9d9c,	// (0x0002482b) list_single_midp_graphic_pane_ParamLimits

0x9d9c,	// (0x0002482b) list_single_midp_graphic_pane

0x54c8,	// (0x0001ff57) list_single_graphic_2heading_pane_g1_ParamLimits

0x54c8,	// (0x0001ff57) list_single_graphic_2heading_pane_g1

0x54d4,	// (0x0001ff63) list_single_graphic_2heading_pane_g4_ParamLimits

0x54d4,	// (0x0001ff63) list_single_graphic_2heading_pane_g4

0x54e0,	// (0x0001ff6f) list_single_graphic_2heading_pane_g5_ParamLimits

0x54e0,	// (0x0001ff6f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f0,	// (0x0002a27f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f0,	// (0x0002a27f) list_single_graphic_2heading_pane_g

0x54ec,	// (0x0001ff7b) list_single_graphic_2heading_pane_t1_ParamLimits

0x54ec,	// (0x0001ff7b) list_single_graphic_2heading_pane_t1

0x5500,	// (0x0001ff8f) list_single_graphic_2heading_pane_t2_ParamLimits

0x5500,	// (0x0001ff8f) list_single_graphic_2heading_pane_t2

0x551c,	// (0x0001ffab) list_single_graphic_2heading_pane_t3_ParamLimits

0x551c,	// (0x0001ffab) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f7,	// (0x0002a286) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f7,	// (0x0002a286) list_single_graphic_2heading_pane_t

0x9b3e,	// (0x000245cd) bg_popup_sub_pane_cp2

0x9b68,	// (0x000245f7) grid_toobar_pane

0x6727,	// (0x000211b6) cell_toolbar_pane_ParamLimits

0x6727,	// (0x000211b6) cell_toolbar_pane

0x9ba4,	// (0x00024633) cell_toolbar_pane_g1_ParamLimits

0x9ba4,	// (0x00024633) cell_toolbar_pane_g1

0x9bb8,	// (0x00024647) cell_toolbar_pane_g2_ParamLimits

0x9bb8,	// (0x00024647) cell_toolbar_pane_g2

0x0001,

0xf805,	// (0x0002a294) cell_toolbar_pane_g_ParamLimits

0xf805,	// (0x0002a294) cell_toolbar_pane_g

0x9bda,	// (0x00024669) grid_highlight_pane_cp2_ParamLimits

0x9bda,	// (0x00024669) grid_highlight_pane_cp2

0x9bf4,	// (0x00024683) toolbar_button_pane

0x9c00,	// (0x0002468f) toolbar_button_pane_g1

0x9c08,	// (0x00024697) toolbar_button_pane_g2

0x9c10,	// (0x0002469f) toolbar_button_pane_g3

0x9c18,	// (0x000246a7) toolbar_button_pane_g4

0x9c20,	// (0x000246af) toolbar_button_pane_g5

0x9c28,	// (0x000246b7) toolbar_button_pane_g6

0x9c30,	// (0x000246bf) toolbar_button_pane_g7

0x9c38,	// (0x000246c7) toolbar_button_pane_g8

0x9c40,	// (0x000246cf) toolbar_button_pane_g9

0x0009,

0xf80a,	// (0x0002a299) toolbar_button_pane_g

0x675f,	// (0x000211ee) list_single_2graphic_pane_g1_cp3_ParamLimits

0x675f,	// (0x000211ee) list_single_2graphic_pane_g1_cp3

0x676b,	// (0x000211fa) list_single_2graphic_pane_g2_cp3_ParamLimits

0x676b,	// (0x000211fa) list_single_2graphic_pane_g2_cp3

0x8b68,	// (0x000235f7) list_single_2graphic_pane_g3_cp3

0x13ef,	// (0x0001be7e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x13ef,	// (0x0001be7e) list_single_2graphic_pane_g4_cp3

0x677c,	// (0x0002120b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x677c,	// (0x0002120b) list_single_2graphic_pane_t1_cp3

0x8b5c,	// (0x000235eb) list_single_midp_graphic_pane_g2_ParamLimits

0x8b5c,	// (0x000235eb) list_single_midp_graphic_pane_g2

0x905a,	// (0x00023ae9) aid_zoom_text_primary

0x54b8,	// (0x0001ff47) aid_zoom_text_secondary

0x8fb1,	// (0x00023a40) status_small_pane_g7_ParamLimits

0x8fb1,	// (0x00023a40) status_small_pane_g7

0x8fd4,	// (0x00023a63) status_small_pane_t1_ParamLimits

0x7784,	// (0x00022213) title_pane_g2

0x0003,

0xf592,	// (0x0002a021) title_pane_g

0x7cdd,	// (0x0002276c) aid_size_cell_colour_1_pane_ParamLimits

0x7cdd,	// (0x0002276c) aid_size_cell_colour_1_pane

0x7cf1,	// (0x00022780) aid_size_cell_colour_2_pane_ParamLimits

0x7cf1,	// (0x00022780) aid_size_cell_colour_2_pane

0x7d05,	// (0x00022794) aid_size_cell_colour_3_pane_ParamLimits

0x7d05,	// (0x00022794) aid_size_cell_colour_3_pane

0x7d19,	// (0x000227a8) aid_size_cell_colour_4_pane_ParamLimits

0x7d19,	// (0x000227a8) aid_size_cell_colour_4_pane

0x617a,	// (0x00020c09) title_pane_stacon_g1_ParamLimits

0x617a,	// (0x00020c09) title_pane_stacon_g1

0xa29b,	// (0x00024d2a) popup_note_wait_window_g3_ParamLimits

0xa29b,	// (0x00024d2a) popup_note_wait_window_g3

0xa312,	// (0x00024da1) popup_note_wait_window_t5_ParamLimits

0xa312,	// (0x00024da1) popup_note_wait_window_t5

0x776d,	// (0x000221fc) main_feb_china_hwr_fs_writing_pane

0x9150,	// (0x00023bdf) popup_feb_china_hwr_fs_window_ParamLimits

0x9150,	// (0x00023bdf) popup_feb_china_hwr_fs_window

0x67ad,	// (0x0002123c) aid_size_cell_hwr_fs_ParamLimits

0x67ad,	// (0x0002123c) aid_size_cell_hwr_fs

0x9cf2,	// (0x00024781) bg_popup_sub_pane_cp3_ParamLimits

0x9cf2,	// (0x00024781) bg_popup_sub_pane_cp3

0x67c2,	// (0x00021251) grid_hwr_fs_pane_ParamLimits

0x67c2,	// (0x00021251) grid_hwr_fs_pane

0x67da,	// (0x00021269) linegrid_hwr_fs_pane_ParamLimits

0x67da,	// (0x00021269) linegrid_hwr_fs_pane

0x67ea,	// (0x00021279) cell_hwr_fs_pane_ParamLimits

0x67ea,	// (0x00021279) cell_hwr_fs_pane

0x9cfe,	// (0x0002478d) linegrid_hwr_fs_pane_g1_ParamLimits

0x9cfe,	// (0x0002478d) linegrid_hwr_fs_pane_g1

0x9d0a,	// (0x00024799) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d0a,	// (0x00024799) linegrid_hwr_fs_pane_g2

0x9d1c,	// (0x000247ab) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d1c,	// (0x000247ab) linegrid_hwr_fs_pane_g3

0x680e,	// (0x0002129d) linegrid_hwr_fs_pane_g4_ParamLimits

0x680e,	// (0x0002129d) linegrid_hwr_fs_pane_g4

0x682c,	// (0x000212bb) linegrid_hwr_fs_pane_g5_ParamLimits

0x682c,	// (0x000212bb) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0002a2c4) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0002a2c4) linegrid_hwr_fs_pane_g

0x9d28,	// (0x000247b7) cell_hwr_fs_pane_g1_ParamLimits

0x9d28,	// (0x000247b7) cell_hwr_fs_pane_g1

0x9a75,	// (0x00024504) cell_hwr_fs_pane_g2_ParamLimits

0x9a75,	// (0x00024504) cell_hwr_fs_pane_g2

0x9d3e,	// (0x000247cd) cell_hwr_fs_pane_g3_ParamLimits

0x9d3e,	// (0x000247cd) cell_hwr_fs_pane_g3

0x9d4b,	// (0x000247da) cell_hwr_fs_pane_g4_ParamLimits

0x9d4b,	// (0x000247da) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0002a2cf) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0002a2cf) cell_hwr_fs_pane_g

0x6842,	// (0x000212d1) cell_hwr_fs_pane_t1

0x776d,	// (0x000221fc) grid_highlight_pane_cp6

0x776d,	// (0x000221fc) main_idle_act2_pane

0x823d,	// (0x00022ccc) aid_inside_area_popup_secondary

0xa94b,	// (0x000253da) aid_inside_area_window_primary_ParamLimits

0xa94b,	// (0x000253da) aid_inside_area_window_primary

0xb54d,	// (0x00025fdc) ai2_news_ticker_pane

0xb555,	// (0x00025fe4) aid_size_cell_ai1_link_ParamLimits

0xb555,	// (0x00025fe4) aid_size_cell_ai1_link

0xb56f,	// (0x00025ffe) popup_ai2_data_window_ParamLimits

0xb56f,	// (0x00025ffe) popup_ai2_data_window

0xb58d,	// (0x0002601c) popup_ai2_link_window_ParamLimits

0xb58d,	// (0x0002601c) popup_ai2_link_window

0x9cf2,	// (0x00024781) bg_popup_sub_pane_cp4_ParamLimits

0x9cf2,	// (0x00024781) bg_popup_sub_pane_cp4

0xb5a3,	// (0x00026032) grid_ai2_link_pane_ParamLimits

0xb5a3,	// (0x00026032) grid_ai2_link_pane

0xb5ba,	// (0x00026049) popup_ai2_link_window_g1_ParamLimits

0xb5ba,	// (0x00026049) popup_ai2_link_window_g1

0xb5c6,	// (0x00026055) popup_ai2_link_window_g2_ParamLimits

0xb5c6,	// (0x00026055) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0002a49b) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0002a49b) popup_ai2_link_window_g

0xb5d7,	// (0x00026066) ai2_mp_button_pane

0xb5df,	// (0x0002606e) ai2_mp_volume_pane

0x9ebb,	// (0x0002494a) bg_popup_sub_pane_cp5_ParamLimits

0x9ebb,	// (0x0002494a) bg_popup_sub_pane_cp5

0xb5e7,	// (0x00026076) heading_ai2_gene_pane_ParamLimits

0xb5e7,	// (0x00026076) heading_ai2_gene_pane

0xb5f3,	// (0x00026082) list_ai2_gene_pane_ParamLimits

0xb5f3,	// (0x00026082) list_ai2_gene_pane

0xb63b,	// (0x000260ca) cell_ai2_link_pane_ParamLimits

0xb63b,	// (0x000260ca) cell_ai2_link_pane

0xb651,	// (0x000260e0) cell_ai2_link_pane_g1

0x776d,	// (0x000221fc) grid_highlight_pane_cp7

0x6b0e,	// (0x0002159d) ai2_mp_volume_pane_g1

0xb724,	// (0x000261b3) ai2_mp_volume_pane_g2

0xb699,	// (0x00026128) list_ai2_gene_pane_t1

0xb72c,	// (0x000261bb) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0002a4b4) ai2_mp_volume_pane_g

0x6b16,	// (0x000215a5) volume_small_pane_cp3

0xb734,	// (0x000261c3) aid_size_cell_ai2_button

0xb73c,	// (0x000261cb) grid_ai2_button_pane

0xb745,	// (0x000261d4) cell_ai2_button_pane_ParamLimits

0xb745,	// (0x000261d4) cell_ai2_button_pane

0x7763,	// (0x000221f2) cell_ai2_button_pane_g1

0x776d,	// (0x000221fc) grid_highlight_pane_cp8

0xb6e4,	// (0x00026173) ai2_gene_pane_t1_ParamLimits

0xb6e4,	// (0x00026173) ai2_gene_pane_t1

0x9048,	// (0x00023ad7) aid_height_parent_landscape

0xaff7,	// (0x00025a86) aid_height_set_list

0xb008,	// (0x00025a97) aid_size_parent

0xb36e,	// (0x00025dfd) aid_size_cell_graphic_pane_ParamLimits

0xb603,	// (0x00026092) popup_ai2_data_window_g1_ParamLimits

0xb603,	// (0x00026092) popup_ai2_data_window_g1

0xb60f,	// (0x0002609e) ai2_news_ticker_pane_g1

0xb617,	// (0x000260a6) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0002a4a0) ai2_news_ticker_pane_g

0xb61f,	// (0x000260ae) ai2_news_ticker_pane_t1

0xb62d,	// (0x000260bc) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0002a4a5) ai2_news_ticker_pane_t

0xb65a,	// (0x000260e9) heading_ai2_gene_pane_g1

0xb662,	// (0x000260f1) heading_ai2_gene_pane_t1_ParamLimits

0xb662,	// (0x000260f1) heading_ai2_gene_pane_t1

0xb677,	// (0x00026106) list_highlight_pane_cp6

0xb67f,	// (0x0002610e) ai2_gene_pane_ParamLimits

0xb67f,	// (0x0002610e) ai2_gene_pane

0xb6a7,	// (0x00026136) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0002a4aa) list_ai2_gene_pane_t

0xb6b5,	// (0x00026144) list_highlight_pane_cp8_ParamLimits

0xb6b5,	// (0x00026144) list_highlight_pane_cp8

0xb6c6,	// (0x00026155) ai2_gene_pane_g1_ParamLimits

0xb6c6,	// (0x00026155) ai2_gene_pane_g1

0xb6d8,	// (0x00026167) ai2_gene_pane_g2_ParamLimits

0xb6d8,	// (0x00026167) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0002a4af) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0002a4af) ai2_gene_pane_g

0x806a,	// (0x00022af9) scroll_pane_cp12

0x66e6,	// (0x00021175) control_pane_t3_ParamLimits

0x66e6,	// (0x00021175) control_pane_t3

0x8fc5,	// (0x00023a54) status_small_pane_g8_ParamLimits

0x8fc5,	// (0x00023a54) status_small_pane_g8

0x924e,	// (0x00023cdd) popup_find_window_ParamLimits

0x9479,	// (0x00023f08) popup_note_image_window_ParamLimits

0x5534,	// (0x0001ffc3) list_double2_graphic_pane_vc_g1_ParamLimits

0x5534,	// (0x0001ffc3) list_double2_graphic_pane_vc_g1

0x5540,	// (0x0001ffcf) list_double2_graphic_pane_vc_g2_ParamLimits

0x5540,	// (0x0001ffcf) list_double2_graphic_pane_vc_g2

0x554c,	// (0x0001ffdb) list_double2_graphic_pane_vc_g3_ParamLimits

0x554c,	// (0x0001ffdb) list_double2_graphic_pane_vc_g3

0x0002,

0xf7fe,	// (0x0002a28d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7fe,	// (0x0002a28d) list_double2_graphic_pane_vc_g

0x5558,	// (0x0001ffe7) list_double2_graphic_pane_vc_t1_ParamLimits

0x5558,	// (0x0001ffe7) list_double2_graphic_pane_vc_t1

0x54d4,	// (0x0001ff63) list_single_heading_pane_vc_g1_ParamLimits

0x54d4,	// (0x0001ff63) list_single_heading_pane_vc_g1

0x54e0,	// (0x0001ff6f) list_single_heading_pane_vc_g2_ParamLimits

0x54e0,	// (0x0001ff6f) list_single_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0002a2ae) list_single_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0002a2ae) list_single_heading_pane_vc_g

0x556e,	// (0x0001fffd) list_single_heading_pane_vc_t1_ParamLimits

0x556e,	// (0x0001fffd) list_single_heading_pane_vc_t1

0x5584,	// (0x00020013) list_single_heading_pane_vc_t2_ParamLimits

0x5584,	// (0x00020013) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0002a2b3) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0002a2b3) list_single_heading_pane_vc_t

0x9c48,	// (0x000246d7) list_setting_number_pane_vc_g1_ParamLimits

0x9c48,	// (0x000246d7) list_setting_number_pane_vc_g1

0x9c54,	// (0x000246e3) list_setting_number_pane_vc_g2_ParamLimits

0x9c54,	// (0x000246e3) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0002a2b8) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0002a2b8) list_setting_number_pane_vc_g

0x9c60,	// (0x000246ef) list_setting_number_pane_vc_t1_ParamLimits

0x9c60,	// (0x000246ef) list_setting_number_pane_vc_t1

0x9c74,	// (0x00024703) list_setting_number_pane_vc_t2_ParamLimits

0x9c74,	// (0x00024703) list_setting_number_pane_vc_t2

0x9c90,	// (0x0002471f) list_setting_number_pane_vc_t3_ParamLimits

0x9c90,	// (0x0002471f) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0002a2bd) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0002a2bd) list_setting_number_pane_vc_t

0x9cb8,	// (0x00024747) set_value_pane_vc_ParamLimits

0x9cb8,	// (0x00024747) set_value_pane_vc

0x564b,	// (0x000200da) list_double2_graphic_pane_vc_ParamLimits

0x564b,	// (0x000200da) list_double2_graphic_pane_vc

0xb1ec,	// (0x00025c7b) list_double2_large_graphic_pane_vc_ParamLimits

0xb1ec,	// (0x00025c7b) list_double2_large_graphic_pane_vc

0x564b,	// (0x000200da) list_double2_pane_vc_ParamLimits

0x564b,	// (0x000200da) list_double2_pane_vc

0x564b,	// (0x000200da) list_double_graphic_heading_pane_vc_ParamLimits

0x564b,	// (0x000200da) list_double_graphic_heading_pane_vc

0x564b,	// (0x000200da) list_double_graphic_pane_vc_ParamLimits

0x564b,	// (0x000200da) list_double_graphic_pane_vc

0x564b,	// (0x000200da) list_double_heading_pane_vc_ParamLimits

0x564b,	// (0x000200da) list_double_heading_pane_vc

0xb1ec,	// (0x00025c7b) list_double_large_graphic_pane_vc_ParamLimits

0xb1ec,	// (0x00025c7b) list_double_large_graphic_pane_vc

0x564b,	// (0x000200da) list_double_number_pane_vc_ParamLimits

0x564b,	// (0x000200da) list_double_number_pane_vc

0x564b,	// (0x000200da) list_double_pane_vc_ParamLimits

0x564b,	// (0x000200da) list_double_pane_vc

0x564b,	// (0x000200da) list_double_time_pane_vc_ParamLimits

0x564b,	// (0x000200da) list_double_time_pane_vc

0x564b,	// (0x000200da) list_setting_number_pane_vc_ParamLimits

0x564b,	// (0x000200da) list_setting_number_pane_vc

0x564b,	// (0x000200da) list_setting_pane_vc_ParamLimits

0x564b,	// (0x000200da) list_setting_pane_vc

0x564b,	// (0x000200da) list_single_graphic_heading_pane_vc_ParamLimits

0x564b,	// (0x000200da) list_single_graphic_heading_pane_vc

0x564b,	// (0x000200da) list_single_heading_pane_vc_ParamLimits

0x564b,	// (0x000200da) list_single_heading_pane_vc

0xb214,	// (0x00025ca3) list_single_number_heading_pane_vc_ParamLimits

0xb214,	// (0x00025ca3) list_single_number_heading_pane_vc

0x5534,	// (0x0001ffc3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5534,	// (0x0001ffc3) list_double_graphic_heading_pane_vc_g1

0x54d4,	// (0x0001ff63) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x54d4,	// (0x0001ff63) list_double_graphic_heading_pane_vc_g2

0x54e0,	// (0x0001ff6f) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x54e0,	// (0x0001ff6f) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa2c,	// (0x0002a4bb) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0002a4bb) list_double_graphic_heading_pane_vc_g

0x5690,	// (0x0002011f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5690,	// (0x0002011f) list_double_graphic_heading_pane_vc_t1

0x556e,	// (0x0001fffd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x556e,	// (0x0001fffd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0002a4c2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0002a4c2) list_double_graphic_heading_pane_vc_t

0x9c48,	// (0x000246d7) list_setting_pane_vc_g1_ParamLimits

0x9c48,	// (0x000246d7) list_setting_pane_vc_g1

0x9c54,	// (0x000246e3) list_setting_pane_vc_g2_ParamLimits

0x9c54,	// (0x000246e3) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0002a2b8) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0002a2b8) list_setting_pane_vc_g

0xb9c3,	// (0x00026452) list_setting_pane_vc_t1_ParamLimits

0xb9c3,	// (0x00026452) list_setting_pane_vc_t1

0xb9d7,	// (0x00026466) list_setting_pane_vc_t2_ParamLimits

0xb9d7,	// (0x00026466) list_setting_pane_vc_t2

0x0001,

0xfa61,	// (0x0002a4f0) list_setting_pane_vc_t_ParamLimits

0xfa61,	// (0x0002a4f0) list_setting_pane_vc_t

0x9cb8,	// (0x00024747) set_value_pane_cp_vc_ParamLimits

0x9cb8,	// (0x00024747) set_value_pane_cp_vc

0x54d4,	// (0x0001ff63) list_single_number_heading_pane_vc_g1_ParamLimits

0x54d4,	// (0x0001ff63) list_single_number_heading_pane_vc_g1

0x54e0,	// (0x0001ff6f) list_single_number_heading_pane_vc_g2_ParamLimits

0x54e0,	// (0x0001ff6f) list_single_number_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0002a2ae) list_single_number_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0002a2ae) list_single_number_heading_pane_vc_g

0x556e,	// (0x0001fffd) list_single_number_heading_pane_vc_t1_ParamLimits

0x556e,	// (0x0001fffd) list_single_number_heading_pane_vc_t1

0x56a4,	// (0x00020133) list_single_number_heading_pane_vc_t2_ParamLimits

0x56a4,	// (0x00020133) list_single_number_heading_pane_vc_t2

0x56b8,	// (0x00020147) list_single_number_heading_pane_vc_t3_ParamLimits

0x56b8,	// (0x00020147) list_single_number_heading_pane_vc_t3

0x0002,

0xfa66,	// (0x0002a4f5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0002a4f5) list_single_number_heading_pane_vc_t

0x5534,	// (0x0001ffc3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5534,	// (0x0001ffc3) list_single_graphic_heading_pane_vc_g1

0x54d4,	// (0x0001ff63) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x54d4,	// (0x0001ff63) list_single_graphic_heading_pane_vc_g4

0x54e0,	// (0x0001ff6f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x54e0,	// (0x0001ff6f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2c,	// (0x0002a4bb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0002a4bb) list_single_graphic_heading_pane_vc_g

0x556e,	// (0x0001fffd) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x556e,	// (0x0001fffd) list_single_graphic_heading_pane_vc_t1

0x56ca,	// (0x00020159) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x56ca,	// (0x00020159) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa6d,	// (0x0002a4fc) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa6d,	// (0x0002a4fc) list_single_graphic_heading_pane_vc_t

0x54d4,	// (0x0001ff63) list_double2_pane_vc_g1_ParamLimits

0x54d4,	// (0x0001ff63) list_double2_pane_vc_g1

0x54e0,	// (0x0001ff6f) list_double2_pane_vc_g2_ParamLimits

0x54e0,	// (0x0001ff6f) list_double2_pane_vc_g2

0x0001,

0xf81f,	// (0x0002a2ae) list_double2_pane_vc_g_ParamLimits

0xf81f,	// (0x0002a2ae) list_double2_pane_vc_g

0x56de,	// (0x0002016d) list_double2_pane_vc_t1_ParamLimits

0x56de,	// (0x0002016d) list_double2_pane_vc_t1

0x56f4,	// (0x00020183) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x56f4,	// (0x00020183) list_double2_large_graphic_pane_vc_g1

0x5700,	// (0x0002018f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5700,	// (0x0002018f) list_double2_large_graphic_pane_vc_g2

0x570c,	// (0x0002019b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x570c,	// (0x0002019b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa72,	// (0x0002a501) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa72,	// (0x0002a501) list_double2_large_graphic_pane_vc_g

0x5718,	// (0x000201a7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5718,	// (0x000201a7) list_double2_large_graphic_pane_vc_t1

0x572e,	// (0x000201bd) list_double_time_pane_vc_g1_ParamLimits

0x572e,	// (0x000201bd) list_double_time_pane_vc_g1

0x573a,	// (0x000201c9) list_double_time_pane_vc_g2_ParamLimits

0x573a,	// (0x000201c9) list_double_time_pane_vc_g2

0x0001,

0xfa79,	// (0x0002a508) list_double_time_pane_vc_g_ParamLimits

0xfa79,	// (0x0002a508) list_double_time_pane_vc_g

0x5746,	// (0x000201d5) list_double_time_pane_vc_t1_ParamLimits

0x5746,	// (0x000201d5) list_double_time_pane_vc_t1

0x575f,	// (0x000201ee) list_double_time_pane_vc_t2_ParamLimits

0x575f,	// (0x000201ee) list_double_time_pane_vc_t2

0x579f,	// (0x0002022e) list_double_time_pane_vc_t3_ParamLimits

0x579f,	// (0x0002022e) list_double_time_pane_vc_t3

0x57b7,	// (0x00020246) list_double_time_pane_vc_t4_ParamLimits

0x57b7,	// (0x00020246) list_double_time_pane_vc_t4

0x0003,

0xfa7e,	// (0x0002a50d) list_double_time_pane_vc_t_ParamLimits

0xfa7e,	// (0x0002a50d) list_double_time_pane_vc_t

0x54d4,	// (0x0001ff63) list_double_pane_vc_g1_ParamLimits

0x54d4,	// (0x0001ff63) list_double_pane_vc_g1

0x54e0,	// (0x0001ff6f) list_double_pane_vc_g2_ParamLimits

0x54e0,	// (0x0001ff6f) list_double_pane_vc_g2

0x0001,

0xf81f,	// (0x0002a2ae) list_double_pane_vc_g_ParamLimits

0xf81f,	// (0x0002a2ae) list_double_pane_vc_g

0x57cb,	// (0x0002025a) list_double_pane_vc_t1_ParamLimits

0x57cb,	// (0x0002025a) list_double_pane_vc_t1

0x57dd,	// (0x0002026c) list_double_pane_vc_t2_ParamLimits

0x57dd,	// (0x0002026c) list_double_pane_vc_t2

0x0001,

0xfa87,	// (0x0002a516) list_double_pane_vc_t_ParamLimits

0xfa87,	// (0x0002a516) list_double_pane_vc_t

0x54d4,	// (0x0001ff63) list_double_number_pane_vc_g1_ParamLimits

0x54d4,	// (0x0001ff63) list_double_number_pane_vc_g1

0x54e0,	// (0x0001ff6f) list_double_number_pane_vc_g2_ParamLimits

0x54e0,	// (0x0001ff6f) list_double_number_pane_vc_g2

0x0001,

0xf81f,	// (0x0002a2ae) list_double_number_pane_vc_g_ParamLimits

0xf81f,	// (0x0002a2ae) list_double_number_pane_vc_g

0x57f5,	// (0x00020284) list_double_number_pane_vc_t1_ParamLimits

0x57f5,	// (0x00020284) list_double_number_pane_vc_t1

0x5809,	// (0x00020298) list_double_number_pane_vc_t2_ParamLimits

0x5809,	// (0x00020298) list_double_number_pane_vc_t2

0x57dd,	// (0x0002026c) list_double_number_pane_vc_t3_ParamLimits

0x57dd,	// (0x0002026c) list_double_number_pane_vc_t3

0x0002,

0xfa8c,	// (0x0002a51b) list_double_number_pane_vc_t_ParamLimits

0xfa8c,	// (0x0002a51b) list_double_number_pane_vc_t

0x581b,	// (0x000202aa) list_double_large_graphic_pane_vc_g1_ParamLimits

0x581b,	// (0x000202aa) list_double_large_graphic_pane_vc_g1

0x5827,	// (0x000202b6) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5827,	// (0x000202b6) list_double_large_graphic_pane_vc_g2

0x570c,	// (0x0002019b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x570c,	// (0x0002019b) list_double_large_graphic_pane_vc_g3

0x5836,	// (0x000202c5) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5836,	// (0x000202c5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa93,	// (0x0002a522) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa93,	// (0x0002a522) list_double_large_graphic_pane_vc_g

0x5842,	// (0x000202d1) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5842,	// (0x000202d1) list_double_large_graphic_pane_vc_t1

0x5854,	// (0x000202e3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5854,	// (0x000202e3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa9c,	// (0x0002a52b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa9c,	// (0x0002a52b) list_double_large_graphic_pane_vc_t

0x54d4,	// (0x0001ff63) list_double_heading_pane_vc_g1_ParamLimits

0x54d4,	// (0x0001ff63) list_double_heading_pane_vc_g1

0x54e0,	// (0x0001ff6f) list_double_heading_pane_vc_g2_ParamLimits

0x54e0,	// (0x0001ff6f) list_double_heading_pane_vc_g2

0x0001,

0xf81f,	// (0x0002a2ae) list_double_heading_pane_vc_g_ParamLimits

0xf81f,	// (0x0002a2ae) list_double_heading_pane_vc_g

0x586d,	// (0x000202fc) list_double_heading_pane_vc_t1_ParamLimits

0x586d,	// (0x000202fc) list_double_heading_pane_vc_t1

0x556e,	// (0x0001fffd) list_double_heading_pane_vc_t2_ParamLimits

0x556e,	// (0x0001fffd) list_double_heading_pane_vc_t2

0x0001,

0xfaa1,	// (0x0002a530) list_double_heading_pane_vc_t_ParamLimits

0xfaa1,	// (0x0002a530) list_double_heading_pane_vc_t

0x5881,	// (0x00020310) list_double_graphic_pane_vc_g1_ParamLimits

0x5881,	// (0x00020310) list_double_graphic_pane_vc_g1

0x5891,	// (0x00020320) list_double_graphic_pane_vc_g2_ParamLimits

0x5891,	// (0x00020320) list_double_graphic_pane_vc_g2

0x58a0,	// (0x0002032f) list_double_graphic_pane_vc_g3_ParamLimits

0x58a0,	// (0x0002032f) list_double_graphic_pane_vc_g3

0x0002,

0xfaa6,	// (0x0002a535) list_double_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x0002a535) list_double_graphic_pane_vc_g

0x58ac,	// (0x0002033b) list_double_graphic_pane_vc_t1_ParamLimits

0x58ac,	// (0x0002033b) list_double_graphic_pane_vc_t1

0x57dd,	// (0x0002026c) list_double_graphic_pane_vc_t2_ParamLimits

0x57dd,	// (0x0002026c) list_double_graphic_pane_vc_t2

0x0001,

0xfaad,	// (0x0002a53c) list_double_graphic_pane_vc_t_ParamLimits

0xfaad,	// (0x0002a53c) list_double_graphic_pane_vc_t

0x5ccf,	// (0x0002075e) aid_size_cell_fastswap

0x5cd7,	// (0x00020766) aid_size_cell_touch_ParamLimits

0x5cd7,	// (0x00020766) aid_size_cell_touch

0x5f38,	// (0x000209c7) popup_fast_swap_wide_window_ParamLimits

0x5f38,	// (0x000209c7) popup_fast_swap_wide_window

0x604e,	// (0x00020add) touch_pane_ParamLimits

0x604e,	// (0x00020add) touch_pane

0x80c0,	// (0x00022b4f) button_value_adjust_pane_cp2

0x80c0,	// (0x00022b4f) button_value_adjust_pane_cp4

0x51f4,	// (0x0001fc83) form_field_data_pane_cp2

0x5219,	// (0x0001fca8) form_field_data_wide_pane_cp2

0x8559,	// (0x00022fe8) bg_scroll_pane_ParamLimits

0x62df,	// (0x00020d6e) scroll_handle_pane_ParamLimits

0x62f3,	// (0x00020d82) scroll_sc2_down_pane_ParamLimits

0x62f3,	// (0x00020d82) scroll_sc2_down_pane

0x858a,	// (0x00023019) scroll_sc2_up_pane_ParamLimits

0x858a,	// (0x00023019) scroll_sc2_up_pane

0xbe22,	// (0x000268b1) grid_wheel_folder_pane_g1_ParamLimits

0xbe22,	// (0x000268b1) grid_wheel_folder_pane_g1

0x64bd,	// (0x00020f4c) clock_nsta_pane_cp2_ParamLimits

0x64bd,	// (0x00020f4c) clock_nsta_pane_cp2

0x8d46,	// (0x000237d5) listscroll_midp_pane_ParamLimits

0x8d52,	// (0x000237e1) midp_canvas_pane

0x9040,	// (0x00023acf) nsta_clock_indic_pane

0x9096,	// (0x00023b25) listscroll_form_pane_vc

0x90b2,	// (0x00023b41) listscroll_set_pane_vc_ParamLimits

0x90b2,	// (0x00023b41) listscroll_set_pane_vc

0x97ca,	// (0x00024259) clock_nsta_pane

0x9847,	// (0x000242d6) indicator_nsta_pane

0x9b3e,	// (0x000245cd) bg_popup_sub_pane_cp2_ParamLimits

0x9b52,	// (0x000245e1) find_pane_cp2_ParamLimits

0x9b52,	// (0x000245e1) find_pane_cp2

0x9b68,	// (0x000245f7) grid_toobar_pane_ParamLimits

0x9cc6,	// (0x00024755) list_form_gen_pane_vc_ParamLimits

0x9cc6,	// (0x00024755) list_form_gen_pane_vc

0x9cdc,	// (0x0002476b) scroll_pane_cp8_vc_ParamLimits

0x9cdc,	// (0x0002476b) scroll_pane_cp8_vc

0x9d58,	// (0x000247e7) data_form_wide_pane_vc_ParamLimits

0x9d58,	// (0x000247e7) data_form_wide_pane_vc

0x9d64,	// (0x000247f3) form_field_data_wide_pane_vc_g1

0x9d6c,	// (0x000247fb) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d6c,	// (0x000247fb) form_field_data_wide_pane_vc_t1

0x80d4,	// (0x00022b63) input_focus_pane_cp6_vc_ParamLimits

0x80d4,	// (0x00022b63) input_focus_pane_cp6_vc

0xa046,	// (0x00024ad5) list_midp_pane_ParamLimits

0xa052,	// (0x00024ae1) scroll_pane_cp16_ParamLimits

0xa052,	// (0x00024ae1) scroll_pane_cp16

0xa092,	// (0x00024b21) button_value_adjust_pane_ParamLimits

0xa092,	// (0x00024b21) button_value_adjust_pane

0xb01a,	// (0x00025aa9) button_value_adjust_pane_cp6_ParamLimits

0xb01a,	// (0x00025aa9) button_value_adjust_pane_cp6

0xb174,	// (0x00025c03) settings_code_pane_cp_ParamLimits

0xb174,	// (0x00025c03) settings_code_pane_cp

0x7763,	// (0x000221f2) cell_touch_pane_g1

0x7763,	// (0x000221f2) cell_touch_pane_g2

0x0001,

0xf747,	// (0x0002a1d6) cell_touch_pane_g

0xb757,	// (0x000261e6) cell_touch_pane_cp_ParamLimits

0xb757,	// (0x000261e6) cell_touch_pane_cp

0xb767,	// (0x000261f6) cell_touch_pane_ParamLimits

0xb767,	// (0x000261f6) cell_touch_pane

0x7763,	// (0x000221f2) scroll_sc2_down_pane_g1

0x7763,	// (0x000221f2) scroll_sc2_up_pane_g1

0x776d,	// (0x000221fc) bg_set_opt_pane_cp4_vc

0xb778,	// (0x00026207) list_set_graphic_pane_vc_g1_ParamLimits

0xb778,	// (0x00026207) list_set_graphic_pane_vc_g1

0xb784,	// (0x00026213) list_set_graphic_pane_vc_g2_ParamLimits

0xb784,	// (0x00026213) list_set_graphic_pane_vc_g2

0x0001,

0xfa38,	// (0x0002a4c7) list_set_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x0002a4c7) list_set_graphic_pane_vc_g

0xb790,	// (0x0002621f) text_primary_small_cp13_vc_ParamLimits

0xb790,	// (0x0002621f) text_primary_small_cp13_vc

0xb7a8,	// (0x00026237) list_set_graphic_pane_vc_ParamLimits

0xb7a8,	// (0x00026237) list_set_graphic_pane_vc

0x776d,	// (0x000221fc) input_focus_pane_cp2_vc

0x7763,	// (0x000221f2) setting_code_pane_vc_g1

0xb7bc,	// (0x0002624b) setting_code_pane_vc_t1

0xb7ca,	// (0x00026259) set_text_pane_vc_t1_ParamLimits

0xb7ca,	// (0x00026259) set_text_pane_vc_t1

0x776d,	// (0x000221fc) input_focus_pane_cp1_vc

0xb7e8,	// (0x00026277) list_set_text_pane_vc

0x7763,	// (0x000221f2) setting_text_pane_vc_g1

0x776d,	// (0x000221fc) bg_set_opt_pane_cp2_vc

0xb7f2,	// (0x00026281) setting_slider_graphic_pane_vc_g1

0xb7fa,	// (0x00026289) setting_slider_graphic_pane_vc_t1

0xb808,	// (0x00026297) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0002a4cc) setting_slider_graphic_pane_vc_t

0xb816,	// (0x000262a5) slider_set_pane_cp_vc

0xb81e,	// (0x000262ad) slider_set_pane_vc_g1

0xb827,	// (0x000262b6) slider_set_pane_vc_g2

0x0006,

0xfa42,	// (0x0002a4d1) slider_set_pane_vc_g

0x813b,	// (0x00022bca) set_opt_bg_pane_g1_copy1

0x8143,	// (0x00022bd2) set_opt_bg_pane_g2_copy1

0xb853,	// (0x000262e2) set_opt_bg_pane_g3_copy1

0x8153,	// (0x00022be2) set_opt_bg_pane_g4_copy1

0x815b,	// (0x00022bea) set_opt_bg_pane_g5_copy1

0x8163,	// (0x00022bf2) set_opt_bg_pane_g6_copy1

0xb85d,	// (0x000262ec) set_opt_bg_pane_g7_copy1

0xb867,	// (0x000262f6) set_opt_bg_pane_g8_copy1

0xb871,	// (0x00026300) set_opt_bg_pane_g9_copy1

0x776d,	// (0x000221fc) bg_set_opt_pane_cp_vc

0xb87b,	// (0x0002630a) setting_slider_pane_vc_t1

0xb7fa,	// (0x00026289) setting_slider_pane_vc_t2

0xb808,	// (0x00026297) setting_slider_pane_vc_t3

0x0002,

0xfa51,	// (0x0002a4e0) setting_slider_pane_vc_t

0xb816,	// (0x000262a5) slider_set_pane_vc

0x6850,	// (0x000212df) volume_set_pane_vc_g1

0x6859,	// (0x000212e8) volume_set_pane_vc_g2

0x6862,	// (0x000212f1) volume_set_pane_vc_g3

0x686b,	// (0x000212fa) volume_set_pane_vc_g4

0x6874,	// (0x00021303) volume_set_pane_vc_g5

0x687d,	// (0x0002130c) volume_set_pane_vc_g6

0x6886,	// (0x00021315) volume_set_pane_vc_g7

0x688f,	// (0x0002131e) volume_set_pane_vc_g8

0x6898,	// (0x00021327) volume_set_pane_vc_g9

0x68a1,	// (0x00021330) volume_set_pane_vc_g10

0x0009,

0xf8ef,	// (0x0002a37e) volume_set_pane_vc_g

0xb88a,	// (0x00026319) volume_set_pane_vc

0xb892,	// (0x00026321) button_value_adjust_pane_cp1_vc

0xb89c,	// (0x0002632b) list_highlight_pane_cp2_vc

0xb8a5,	// (0x00026334) list_set_pane_vc_ParamLimits

0xb8a5,	// (0x00026334) list_set_pane_vc

0xb951,	// (0x000263e0) main_pane_set_vc_t1_ParamLimits

0xb951,	// (0x000263e0) main_pane_set_vc_t1

0xb966,	// (0x000263f5) main_pane_set_vc_t2_ParamLimits

0xb966,	// (0x000263f5) main_pane_set_vc_t2

0xb978,	// (0x00026407) main_pane_set_vc_t3_ParamLimits

0xb978,	// (0x00026407) main_pane_set_vc_t3

0xb98c,	// (0x0002641b) main_pane_set_vc_t4_ParamLimits

0xb98c,	// (0x0002641b) main_pane_set_vc_t4

0x0003,

0xfa58,	// (0x0002a4e7) main_pane_set_vc_t_ParamLimits

0xfa58,	// (0x0002a4e7) main_pane_set_vc_t

0xb9a0,	// (0x0002642f) setting_code_pane_vc_ParamLimits

0xb9a0,	// (0x0002642f) setting_code_pane_vc

0xb9b1,	// (0x00026440) setting_slider_graphic_pane_vc

0xb9b1,	// (0x00026440) setting_slider_pane_vc

0xb9b1,	// (0x00026440) setting_text_pane_vc

0xb9b1,	// (0x00026440) setting_volume_pane_vc

0xb9bb,	// (0x0002644a) scroll_pane_cp121_vc

0x80ae,	// (0x00022b3d) set_content_pane_vc

0xb9f9,	// (0x00026488) button_value_adjust_pane_g1

0xba02,	// (0x00026491) button_value_adjust_pane_g2

0x0001,

0xfab2,	// (0x0002a541) button_value_adjust_pane_g

0xba0b,	// (0x0002649a) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba0b,	// (0x0002649a) form_field_slider_wide_pane_vc_t1

0xba1f,	// (0x000264ae) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba1f,	// (0x000264ae) form_field_slider_wide_pane_vc_t2

0x0001,

0xfab7,	// (0x0002a546) form_field_slider_wide_pane_vc_t_ParamLimits

0xfab7,	// (0x0002a546) form_field_slider_wide_pane_vc_t

0x7ac9,	// (0x00022558) input_focus_pane_cp10_vc_ParamLimits

0x7ac9,	// (0x00022558) input_focus_pane_cp10_vc

0xba31,	// (0x000264c0) slider_cont_pane_cp1_vc_ParamLimits

0xba31,	// (0x000264c0) slider_cont_pane_cp1_vc

0xb81e,	// (0x000262ad) slider_form_pane_g1_cp2

0xb827,	// (0x000262b6) slider_form_pane_g2_cp2

0xba4a,	// (0x000264d9) form_field_slider_pane_vc_t3

0xba58,	// (0x000264e7) form_field_slider_pane_vc_t4

0xba66,	// (0x000264f5) slider_form_pane_vc_ParamLimits

0xba66,	// (0x000264f5) slider_form_pane_vc

0xba73,	// (0x00026502) form_field_slider_pane_vc_t1_ParamLimits

0xba73,	// (0x00026502) form_field_slider_pane_vc_t1

0xba1f,	// (0x000264ae) form_field_slider_pane_vc_t2_ParamLimits

0xba1f,	// (0x000264ae) form_field_slider_pane_vc_t2

0x0001,

0xfac7,	// (0x0002a556) form_field_slider_pane_vc_t_ParamLimits

0xfac7,	// (0x0002a556) form_field_slider_pane_vc_t

0x7ac9,	// (0x00022558) input_focus_pane_cp9_vc_ParamLimits

0x7ac9,	// (0x00022558) input_focus_pane_cp9_vc

0xba8f,	// (0x0002651e) slider_cont_pane_vc_ParamLimits

0xba8f,	// (0x0002651e) slider_cont_pane_vc

0xbaa1,	// (0x00026530) list_form_graphic_pane_cp_vc_ParamLimits

0xbaa1,	// (0x00026530) list_form_graphic_pane_cp_vc

0x9d64,	// (0x000247f3) form_field_popup_wide_pane_vc_g1

0xbab6,	// (0x00026545) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbab6,	// (0x00026545) form_field_popup_wide_pane_vc_t1

0x80d4,	// (0x00022b63) input_focus_pane_cp8_vc_ParamLimits

0x80d4,	// (0x00022b63) input_focus_pane_cp8_vc

0xbacd,	// (0x0002655c) list_form_wide_pane_vc_ParamLimits

0xbacd,	// (0x0002655c) list_form_wide_pane_vc

0xbad9,	// (0x00026568) list_form_graphic_pane_vc_g1

0xbae1,	// (0x00026570) list_form_graphic_pane_vc_t1_ParamLimits

0xbae1,	// (0x00026570) list_form_graphic_pane_vc_t1

0x784d,	// (0x000222dc) list_highlight_pane_cp5_vc_ParamLimits

0x784d,	// (0x000222dc) list_highlight_pane_cp5_vc

0xbafd,	// (0x0002658c) list_form_graphic_pane_vc_ParamLimits

0xbafd,	// (0x0002658c) list_form_graphic_pane_vc

0x9d64,	// (0x000247f3) form_field_popup_pane_vc_g1

0xbb13,	// (0x000265a2) form_field_popup_pane_vc_t1_ParamLimits

0xbb13,	// (0x000265a2) form_field_popup_pane_vc_t1

0x80d4,	// (0x00022b63) input_focus_pane_cp7_vc_ParamLimits

0x80d4,	// (0x00022b63) input_focus_pane_cp7_vc

0xbb2a,	// (0x000265b9) list_form_pane_vc_ParamLimits

0xbb2a,	// (0x000265b9) list_form_pane_vc

0xbb36,	// (0x000265c5) data_form_pane_vc_t1_ParamLimits

0xbb36,	// (0x000265c5) data_form_pane_vc_t1

0x813b,	// (0x00022bca) input_focus_pane_vc_g1

0x8143,	// (0x00022bd2) input_focus_pane_vc_g2

0x814b,	// (0x00022bda) input_focus_pane_vc_g3

0x8153,	// (0x00022be2) input_focus_pane_vc_g4

0x815b,	// (0x00022bea) input_focus_pane_vc_g5

0x8163,	// (0x00022bf2) input_focus_pane_vc_g6

0x816b,	// (0x00022bfa) input_focus_pane_vc_g7

0x8173,	// (0x00022c02) input_focus_pane_vc_g8

0x817b,	// (0x00022c0a) input_focus_pane_vc_g9

0x7763,	// (0x000221f2) input_focus_pane_vc_g10

0x0009,

0xf6d0,	// (0x0002a15f) input_focus_pane_vc_g

0x9d58,	// (0x000247e7) data_form_pane_vc_ParamLimits

0x9d58,	// (0x000247e7) data_form_pane_vc

0x9d64,	// (0x000247f3) form_field_data_pane_vc_g1

0xbb53,	// (0x000265e2) form_field_data_pane_vc_t1_ParamLimits

0xbb53,	// (0x000265e2) form_field_data_pane_vc_t1

0x80d4,	// (0x00022b63) input_focus_pane_vc_ParamLimits

0x80d4,	// (0x00022b63) input_focus_pane_vc

0xbb6d,	// (0x000265fc) button_value_adjust_pane_cp3_vc

0xbb75,	// (0x00026604) button_value_adjust_pane_cp5_vc

0xbb7d,	// (0x0002660c) form_field_data_pane_vc_ParamLimits

0xbb7d,	// (0x0002660c) form_field_data_pane_vc

0xbb98,	// (0x00026627) form_field_data_pane_vc_cp2

0xbba0,	// (0x0002662f) form_field_data_wide_pane_vc_ParamLimits

0xbba0,	// (0x0002662f) form_field_data_wide_pane_vc

0xbbba,	// (0x00026649) form_field_data_wide_pane_vc_cp2

0xbbc2,	// (0x00026651) form_field_popup_pane_vc_ParamLimits

0xbbc2,	// (0x00026651) form_field_popup_pane_vc

0xbbdd,	// (0x0002666c) form_field_popup_wide_pane_vc_ParamLimits

0xbbdd,	// (0x0002666c) form_field_popup_wide_pane_vc

0xbbf7,	// (0x00026686) form_field_slider_pane_vc_ParamLimits

0xbbf7,	// (0x00026686) form_field_slider_pane_vc

0xbc0a,	// (0x00026699) form_field_slider_wide_pane_vc_ParamLimits

0xbc0a,	// (0x00026699) form_field_slider_wide_pane_vc

0xbc1d,	// (0x000266ac) grid_touch_1_pane_ParamLimits

0xbc1d,	// (0x000266ac) grid_touch_1_pane

0xbc29,	// (0x000266b8) grid_touch_2_pane_ParamLimits

0xbc29,	// (0x000266b8) grid_touch_2_pane

0x900b,	// (0x00023a9a) touch_pane_g1_ParamLimits

0x900b,	// (0x00023a9a) touch_pane_g1

0xbc43,	// (0x000266d2) cell_app_pane_cp_wide_ParamLimits

0xbc43,	// (0x000266d2) cell_app_pane_cp_wide

0xbc54,	// (0x000266e3) grid_popup_fast_wide_pane_ParamLimits

0xbc54,	// (0x000266e3) grid_popup_fast_wide_pane

0xbc68,	// (0x000266f7) scroll_pane_cp19_ParamLimits

0xbc68,	// (0x000266f7) scroll_pane_cp19

0x776d,	// (0x000221fc) bg_popup_window_pane_cp20

0xbc7c,	// (0x0002670b) listscroll_popup_fast_wide_pane

0x784d,	// (0x000222dc) grid_indicator_nsta_pane

0xbc84,	// (0x00026713) clock_nsta_pane_g1

0xbc8d,	// (0x0002671c) clock_nsta_pane_t1

0xbca9,	// (0x00026738) cell_indicator_nsta_pane_ParamLimits

0xbca9,	// (0x00026738) cell_indicator_nsta_pane

0xbce1,	// (0x00026770) cell_indicator_nsta_pane_g1

0xbcef,	// (0x0002677e) cell_indicator_nsta_pane_g2

0x0001,

0xfad1,	// (0x0002a560) cell_indicator_nsta_pane_g

0xbd04,	// (0x00026793) clock_nsta_pane_cp

0xbd0c,	// (0x0002679b) indicator_nsta_pane_cp

0xbd14,	// (0x000267a3) nsta_clock_indic_pane_g1

0x7919,	// (0x000223a8) grid_indicator_pane

0x867c,	// (0x0002310b) scroll_pane_cp29

0x6409,	// (0x00020e98) indicator_nsta_pane_cp2_ParamLimits

0x6409,	// (0x00020e98) indicator_nsta_pane_cp2

0x784d,	// (0x000222dc) main_apps_wheel_pane

0x9f23,	// (0x000249b2) form_midp_field_text_pane_ParamLimits

0xa072,	// (0x00024b01) scroll_bar_cp050_ParamLimits

0xbd4c,	// (0x000267db) cell_indicator_pane_ParamLimits

0xbd4c,	// (0x000267db) cell_indicator_pane

0xbd64,	// (0x000267f3) cell_indicator_pane_g1

0xbd6e,	// (0x000267fd) grid_wheel_folder_pane_ParamLimits

0xbd6e,	// (0x000267fd) grid_wheel_folder_pane

0xbd82,	// (0x00026811) list_wheel_apps_pane_ParamLimits

0xbd82,	// (0x00026811) list_wheel_apps_pane

0xbd95,	// (0x00026824) main_apps_wheel_pane_g1_ParamLimits

0xbd95,	// (0x00026824) main_apps_wheel_pane_g1

0xbdb1,	// (0x00026840) main_apps_wheel_pane_g2_ParamLimits

0xbdb1,	// (0x00026840) main_apps_wheel_pane_g2

0x0001,

0xfae0,	// (0x0002a56f) main_apps_wheel_pane_g_ParamLimits

0xfae0,	// (0x0002a56f) main_apps_wheel_pane_g

0xbdcd,	// (0x0002685c) main_apps_wheel_pane_t1_ParamLimits

0xbdcd,	// (0x0002685c) main_apps_wheel_pane_t1

0xbdf6,	// (0x00026885) list_wheel_apps_pane_g1

0xbdfe,	// (0x0002688d) list_wheel_apps_pane_g2

0xbe06,	// (0x00026895) list_wheel_apps_pane_g3

0xbe0e,	// (0x0002689d) list_wheel_apps_pane_g4

0xbe18,	// (0x000268a7) list_wheel_apps_pane_g5

0x0004,

0xfae5,	// (0x0002a574) list_wheel_apps_pane_g

0x8bba,	// (0x00023649) navi_icon_text_pane

0x96f7,	// (0x00024186) aid_fill_nsta

0xbe39,	// (0x000268c8) navi_icon_text_pane_g1

0xbe48,	// (0x000268d7) navi_icon_text_pane_t1

0x8a50,	// (0x000234df) list_set_graphic_pane_t1_ParamLimits

0x8a50,	// (0x000234df) list_set_graphic_pane_t1

0xa792,	// (0x00025221) popup_midp_note_alarm_window_t6_ParamLimits

0xa792,	// (0x00025221) popup_midp_note_alarm_window_t6

0xa7a4,	// (0x00025233) popup_midp_note_alarm_window_t7_ParamLimits

0xa7a4,	// (0x00025233) popup_midp_note_alarm_window_t7

0xa7b6,	// (0x00025245) popup_midp_note_alarm_window_t8_ParamLimits

0xa7b6,	// (0x00025245) popup_midp_note_alarm_window_t8

0xa7c8,	// (0x00025257) popup_midp_note_alarm_window_t9_ParamLimits

0xa7c8,	// (0x00025257) popup_midp_note_alarm_window_t9

0xa7da,	// (0x00025269) popup_midp_note_alarm_window_t10_ParamLimits

0xa7da,	// (0x00025269) popup_midp_note_alarm_window_t10

0xa7ec,	// (0x0002527b) popup_midp_note_alarm_window_t11_ParamLimits

0xa7ec,	// (0x0002527b) popup_midp_note_alarm_window_t11

0xa7fe,	// (0x0002528d) scroll_pane_cp17_ParamLimits

0xa7fe,	// (0x0002528d) scroll_pane_cp17

0x6850,	// (0x000212df) volume_small_pane_cp_g1

0x6b1f,	// (0x000215ae) volume_small_pane_cp_g2

0x6b28,	// (0x000215b7) volume_small_pane_cp_g3

0x6b31,	// (0x000215c0) volume_small_pane_cp_g4

0x6b3a,	// (0x000215c9) volume_small_pane_cp_g5

0x6b43,	// (0x000215d2) volume_small_pane_cp_g6

0x6b4c,	// (0x000215db) volume_small_pane_cp_g7

0x6b55,	// (0x000215e4) volume_small_pane_cp_g8

0x6b5e,	// (0x000215ed) volume_small_pane_cp_g9

0x6b67,	// (0x000215f6) volume_small_pane_cp_g10

0x8e1b,	// (0x000238aa) midp_ticker_pane_g1_ParamLimits

0x8e27,	// (0x000238b6) midp_ticker_pane_g2_ParamLimits

0xf798,	// (0x0002a227) midp_ticker_pane_g_ParamLimits

0x8e33,	// (0x000238c2) midp_ticker_pane_t1_ParamLimits

0x970d,	// (0x0002419c) aid_fill_nsta_2

0xa05e,	// (0x00024aed) list_form2_midp_pane

0xb1bb,	// (0x00025c4a) midp_editing_number_pane_ParamLimits

0xb1ca,	// (0x00025c59) midp_ticker_pane_ParamLimits

0xbe5d,	// (0x000268ec) form2_midp_field_pane

0xbe81,	// (0x00026910) scroll_pane_cp51

0xbea1,	// (0x00026930) form2_midp_button_pane_ParamLimits

0xbea1,	// (0x00026930) form2_midp_button_pane

0xbeb3,	// (0x00026942) form2_midp_content_pane_ParamLimits

0xbeb3,	// (0x00026942) form2_midp_content_pane

0xbecd,	// (0x0002695c) form2_midp_field_choice_group_pane

0xbed5,	// (0x00026964) form2_midp_field_pane_g1

0xbedd,	// (0x0002696c) form2_midp_field_pane_g2

0xbee5,	// (0x00026974) form2_midp_field_pane_g3

0xbeed,	// (0x0002697c) form2_midp_field_pane_g4

0x0003,

0xfb0a,	// (0x0002a599) form2_midp_field_pane_g

0xbef5,	// (0x00026984) form2_midp_gauge_slider_pane

0xbefd,	// (0x0002698c) form2_midp_gauge_wait_pane

0xbf05,	// (0x00026994) form2_midp_image_pane_ParamLimits

0xbf05,	// (0x00026994) form2_midp_image_pane

0xbf20,	// (0x000269af) form2_midp_label_pane_ParamLimits

0xbf20,	// (0x000269af) form2_midp_label_pane

0xbf3f,	// (0x000269ce) form2_midp_label_pane_cp_ParamLimits

0xbf3f,	// (0x000269ce) form2_midp_label_pane_cp

0xbf60,	// (0x000269ef) form2_midp_string_pane_ParamLimits

0xbf60,	// (0x000269ef) form2_midp_string_pane

0x58be,	// (0x0002034d) form2_midp_text_pane_ParamLimits

0x58be,	// (0x0002034d) form2_midp_text_pane

0xbf72,	// (0x00026a01) form2_midp_time_pane

0xbf82,	// (0x00026a11) input_focus_pane_cp51_ParamLimits

0xbf82,	// (0x00026a11) input_focus_pane_cp51

0xbf9a,	// (0x00026a29) form2_midp_label_pane_t1_ParamLimits

0xbf9a,	// (0x00026a29) form2_midp_label_pane_t1

0x58df,	// (0x0002036e) form2_mdip_text_pane_t1_ParamLimits

0x58df,	// (0x0002036e) form2_mdip_text_pane_t1

0x5903,	// (0x00020392) form2_midp_time_pane_t1

0xbfe8,	// (0x00026a77) form2_midp_gauge_slider_pane_t1

0xbffa,	// (0x00026a89) form2_midp_gauge_slider_pane_t2

0xc00c,	// (0x00026a9b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb13,	// (0x0002a5a2) form2_midp_gauge_slider_pane_t

0xc01e,	// (0x00026aad) form2_midp_slider_pane

0xc02a,	// (0x00026ab9) form2_midp_gauge_wait_pane_t1

0xc038,	// (0x00026ac7) form2_midp_wait_pane_ParamLimits

0xc038,	// (0x00026ac7) form2_midp_wait_pane

0x9d83,	// (0x00024812) list_single_2graphic_pane_cp4_ParamLimits

0x9d83,	// (0x00024812) list_single_2graphic_pane_cp4

0xc063,	// (0x00026af2) list_single_midp_graphic_pane_cp_ParamLimits

0xc063,	// (0x00026af2) list_single_midp_graphic_pane_cp

0x776d,	// (0x000221fc) list_highlight_pane_cp20

0xc087,	// (0x00026b16) list_single_2graphic_pane_g1_cp4

0xb65a,	// (0x000260e9) list_single_2graphic_pane_g2_cp4

0xc08f,	// (0x00026b1e) list_single_2graphic_pane_t1_cp4

0x784d,	// (0x000222dc) list_highlight_pane_cp21

0xc09e,	// (0x00026b2d) list_single_midp_graphic_pane_g4_cp

0xc0ad,	// (0x00026b3c) list_single_midp_graphic_pane_t1_cp

0xc0c2,	// (0x00026b51) form2_mdip_string_pane_t1_ParamLimits

0xc0c2,	// (0x00026b51) form2_mdip_string_pane_t1

0x776d,	// (0x000221fc) bg_wml_button_pane_cp2

0x7763,	// (0x000221f2) form2_midp_image_pane_g1

0x4f77,	// (0x0001fa06) list_double_large_graphic_pane_g5_ParamLimits

0x4f77,	// (0x0001fa06) list_double_large_graphic_pane_g5

0x8d46,	// (0x000237d5) midp_form_pane_ParamLimits

0x784d,	// (0x000222dc) main_apps_wheel_pane_ParamLimits

0x94a1,	// (0x00023f30) popup_preview_window_ParamLimits

0x94a1,	// (0x00023f30) popup_preview_window

0x9688,	// (0x00024117) popup_touch_info_window_ParamLimits

0x9688,	// (0x00024117) popup_touch_info_window

0x96aa,	// (0x00024139) popup_touch_menu_window_ParamLimits

0x96aa,	// (0x00024139) popup_touch_menu_window

0x7759,	// (0x000221e8) bg_popup_sub_pane_cp6

0xc167,	// (0x00026bf6) list_touch_menu_pane

0xc16f,	// (0x00026bfe) list_single_touch_menu_pane_ParamLimits

0xc16f,	// (0x00026bfe) list_single_touch_menu_pane

0xc18a,	// (0x00026c19) list_single_touch_menu_pane_t1

0x784d,	// (0x000222dc) bg_popup_sub_pane_cp7_ParamLimits

0x784d,	// (0x000222dc) bg_popup_sub_pane_cp7

0xc198,	// (0x00026c27) heading_sub_pane

0xc1a0,	// (0x00026c2f) list_touch_info_pane_ParamLimits

0xc1a0,	// (0x00026c2f) list_touch_info_pane

0xc1af,	// (0x00026c3e) list_single_touch_info_pane_ParamLimits

0xc1af,	// (0x00026c3e) list_single_touch_info_pane

0xc1c1,	// (0x00026c50) list_single_touch_info_pane_t1

0xc1cf,	// (0x00026c5e) list_single_touch_info_pane_t2

0x0001,

0xfb21,	// (0x0002a5b0) list_single_touch_info_pane_t

0x8d3e,	// (0x000237cd) bg_popup_heading_pane_cp

0xc1dd,	// (0x00026c6c) heading_sub_pane_t1

0x9cf2,	// (0x00024781) bg_popup_preview_window_pane_cp_ParamLimits

0x9cf2,	// (0x00024781) bg_popup_preview_window_pane_cp

0xc198,	// (0x00026c27) heading_preview_pane

0xc1a0,	// (0x00026c2f) list_preview_pane_ParamLimits

0xc1a0,	// (0x00026c2f) list_preview_pane

0xc1eb,	// (0x00026c7a) popup_preview_window_g1

0xc1af,	// (0x00026c3e) list_single_preview_pane_ParamLimits

0xc1af,	// (0x00026c3e) list_single_preview_pane

0xc1f3,	// (0x00026c82) list_single_preview_pane_g1

0xc1fb,	// (0x00026c8a) list_single_preview_pane_t1

0xc1c1,	// (0x00026c50) list_single_preview_pane_t2

0x0001,

0xfb26,	// (0x0002a5b5) list_single_preview_pane_t

0xc209,	// (0x00026c98) bg_popup_heading_pane_cp2_ParamLimits

0xc209,	// (0x00026c98) bg_popup_heading_pane_cp2

0xc21f,	// (0x00026cae) heading_preview_pane_g1

0xc227,	// (0x00026cb6) heading_preview_pane_t1_ParamLimits

0xc227,	// (0x00026cb6) heading_preview_pane_t1

0x793c,	// (0x000223cb) soft_indicator_pane_t1_ParamLimits

0x8047,	// (0x00022ad6) scroll_pane_ParamLimits

0x8578,	// (0x00023007) scroll_sc2_left_pane

0x8581,	// (0x00023010) scroll_sc2_right_pane

0x85a0,	// (0x0002302f) scroll_bg_pane_g1_ParamLimits

0x85b5,	// (0x00023044) scroll_bg_pane_g2_ParamLimits

0x85cd,	// (0x0002305c) scroll_bg_pane_g3_ParamLimits

0xf727,	// (0x0002a1b6) scroll_bg_pane_g_ParamLimits

0x85a0,	// (0x0002302f) scroll_handle_pane_g1_ParamLimits

0x85ef,	// (0x0002307e) scroll_handle_pane_g2_ParamLimits

0x85cd,	// (0x0002305c) scroll_handle_pane_g3_ParamLimits

0xf72e,	// (0x0002a1bd) scroll_handle_pane_g_ParamLimits

0x90ec,	// (0x00023b7b) popup_choice_list_window_ParamLimits

0x90ec,	// (0x00023b7b) popup_choice_list_window

0x9b4a,	// (0x000245d9) choice_list_pane

0x9bcc,	// (0x0002465b) cell_toolbar_pane_t1

0x9bf4,	// (0x00024683) toolbar_button_pane_ParamLimits

0xacce,	// (0x0002575d) ai_gene_pane_1_t2_ParamLimits

0xacce,	// (0x0002575d) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0002a3da) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0002a3da) ai_gene_pane_1_t

0xc244,	// (0x00026cd3) scroll_sc2_left_pane_g1

0xc244,	// (0x00026cd3) scroll_sc2_right_pane_g1

0x90c4,	// (0x00023b53) bg_popup_sub_pane_cp10

0xc24e,	// (0x00026cdd) list_choice_list_pane

0xc265,	// (0x00026cf4) list_single_choice_list_pane_ParamLimits

0xc265,	// (0x00026cf4) list_single_choice_list_pane

0xc279,	// (0x00026d08) list_single_choice_list_pane_g1

0xc281,	// (0x00026d10) list_single_choice_list_pane_t1_ParamLimits

0xc281,	// (0x00026d10) list_single_choice_list_pane_t1

0xc296,	// (0x00026d25) choice_list_pane_g1

0xc29e,	// (0x00026d2d) choice_list_pane_t1

0x7759,	// (0x000221e8) input_focus_pane_cp11

0x8452,	// (0x00022ee1) title_pane_stacon_g2_ParamLimits

0x8452,	// (0x00022ee1) title_pane_stacon_g2

0x0002,

0xf70d,	// (0x0002a19c) title_pane_stacon_g_ParamLimits

0xf70d,	// (0x0002a19c) title_pane_stacon_g

0x8d3e,	// (0x000237cd) cursor_press_pane

0x91a2,	// (0x00023c31) popup_fep_hwr_window_ParamLimits

0x91a2,	// (0x00023c31) popup_fep_hwr_window

0x922c,	// (0x00023cbb) popup_fep_vkb_window_ParamLimits

0x922c,	// (0x00023cbb) popup_fep_vkb_window

0xc2ac,	// (0x00026d3b) cursor_press_pane_g1

0x0002,

0xfb4f,	// (0x0002a5de) fep_vkb_side_pane_g_ParamLimits

0x6b9b,	// (0x0002162a) fep_hwr_candidate_pane_ParamLimits

0x6b9b,	// (0x0002162a) fep_hwr_candidate_pane

0x6bc5,	// (0x00021654) fep_hwr_side_pane_ParamLimits

0x6bc5,	// (0x00021654) fep_hwr_side_pane

0x6be7,	// (0x00021676) fep_hwr_top_pane_ParamLimits

0x6be7,	// (0x00021676) fep_hwr_top_pane

0x6bff,	// (0x0002168e) fep_hwr_write_pane_ParamLimits

0x6bff,	// (0x0002168e) fep_hwr_write_pane

0xfb4f,	// (0x0002a5de) fep_vkb_side_pane_g

0xc2c2,	// (0x00026d51) fep_hwr_top_pane_g1

0xc2d4,	// (0x00026d63) fep_hwr_top_pane_g2

0x6c2b,	// (0x000216ba) fep_hwr_top_pane_g3

0x0002,

0xfb2b,	// (0x0002a5ba) fep_hwr_top_pane_g

0x6c40,	// (0x000216cf) fep_hwr_top_text_pane

0x8744,	// (0x000231d3) fep_hwr_top_text_pane_g1

0xc30a,	// (0x00026d99) fep_hwr_top_text_pane_t1

0x6d4a,	// (0x000217d9) fep_hwr_candidate_pane_g1

0xc555,	// (0x00026fe4) fep_vkb_keypad_pane_g3_ParamLimits

0xc555,	// (0x00026fe4) fep_vkb_keypad_pane_g3

0xc581,	// (0x00027010) fep_vkb_keypad_pane_g4_ParamLimits

0xc581,	// (0x00027010) fep_vkb_keypad_pane_g4

0xc5f8,	// (0x00027087) fep_vkb_bottom_pane_g2_ParamLimits

0xc5f8,	// (0x00027087) fep_vkb_bottom_pane_g2

0x0001,

0xfb56,	// (0x0002a5e5) fep_vkb_bottom_pane_g_ParamLimits

0xfb56,	// (0x0002a5e5) fep_vkb_bottom_pane_g

0xc244,	// (0x00026cd3) cell_vkb_side_pane_g2

0x0001,

0xfb60,	// (0x0002a5ef) cell_vkb_side_pane_g

0xc683,	// (0x00027112) cell_vkb_side_pane_t1

0xc691,	// (0x00027120) cell_vkb_side_pane_t1_copy1

0xc244,	// (0x00026cd3) bg_fep_vkb_candidate_pane_g2

0xc7d5,	// (0x00027264) cell_vkb_candidate_pane_ParamLimits

0xc318,	// (0x00026da7) aid_size_cell_vkb_ParamLimits

0xc318,	// (0x00026da7) aid_size_cell_vkb

0xc7d5,	// (0x00027264) cell_vkb_candidate_pane

0x6d64,	// (0x000217f3) bg_popup_fep_shadow_pane_g1

0xc3aa,	// (0x00026e39) fep_vkb_bottom_pane_ParamLimits

0xc3aa,	// (0x00026e39) fep_vkb_bottom_pane

0xc3e7,	// (0x00026e76) fep_vkb_candidate_pane_ParamLimits

0xc3e7,	// (0x00026e76) fep_vkb_candidate_pane

0xc403,	// (0x00026e92) fep_vkb_keypad_pane_ParamLimits

0xc403,	// (0x00026e92) fep_vkb_keypad_pane

0xc436,	// (0x00026ec5) fep_vkb_side_pane_ParamLimits

0xc436,	// (0x00026ec5) fep_vkb_side_pane

0xc472,	// (0x00026f01) fep_vkb_top_pane_ParamLimits

0xc472,	// (0x00026f01) fep_vkb_top_pane

0xc4ae,	// (0x00026f3d) fep_vkb_top_pane_g1_ParamLimits

0xc4ae,	// (0x00026f3d) fep_vkb_top_pane_g1

0xc4bd,	// (0x00026f4c) fep_vkb_top_pane_g2_ParamLimits

0xc4bd,	// (0x00026f4c) fep_vkb_top_pane_g2

0xc4cc,	// (0x00026f5b) fep_vkb_top_pane_g3_ParamLimits

0xc4cc,	// (0x00026f5b) fep_vkb_top_pane_g3

0x0003,

0xfb46,	// (0x0002a5d5) fep_vkb_top_pane_g_ParamLimits

0xfb46,	// (0x0002a5d5) fep_vkb_top_pane_g

0xc4ea,	// (0x00026f79) fep_vkb_top_text_pane_ParamLimits

0xc4ea,	// (0x00026f79) fep_vkb_top_text_pane

0xc4fb,	// (0x00026f8a) fep_vkb_side_pane_g1_ParamLimits

0xc4fb,	// (0x00026f8a) fep_vkb_side_pane_g1

0xc544,	// (0x00026fd3) grid_vkb_side_pane_ParamLimits

0xc544,	// (0x00026fd3) grid_vkb_side_pane

0x6d6c,	// (0x000217fb) bg_popup_fep_shadow_pane_g2

0x6d75,	// (0x00021804) bg_popup_fep_shadow_pane_g3

0x6d7d,	// (0x0002180c) bg_popup_fep_shadow_pane_g4

0x6d86,	// (0x00021815) bg_popup_fep_shadow_pane_g5

0x6d90,	// (0x0002181f) bg_popup_fep_shadow_pane_g6

0x6d98,	// (0x00021827) bg_popup_fep_shadow_pane_g7

0x815b,	// (0x00022bea) bg_popup_fep_shadow_pane_g8

0xc5a3,	// (0x00027032) grid_vkb_keypad_number_pane_ParamLimits

0xc5a3,	// (0x00027032) grid_vkb_keypad_number_pane

0xc5b7,	// (0x00027046) grid_vkb_keypad_pane_ParamLimits

0xc5b7,	// (0x00027046) grid_vkb_keypad_pane

0xc5dd,	// (0x0002706c) fep_vkb_bottom_pane_g1_ParamLimits

0xc5dd,	// (0x0002706c) fep_vkb_bottom_pane_g1

0xc606,	// (0x00027095) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc606,	// (0x00027095) grid_vkb_keypad_bottom_left_pane

0xc61b,	// (0x000270aa) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc61b,	// (0x000270aa) grid_vkb_keypad_bottom_right_pane

0xc630,	// (0x000270bf) fep_vkb_top_text_pane_g1

0xc64b,	// (0x000270da) fep_vkb_top_text_pane_t1

0xc660,	// (0x000270ef) cell_vkb_side_pane_ParamLimits

0xc660,	// (0x000270ef) cell_vkb_side_pane

0xc244,	// (0x00026cd3) cell_vkb_side_pane_g1

0xc69f,	// (0x0002712e) cell_vkb_keypad_pane_ParamLimits

0xc69f,	// (0x0002712e) cell_vkb_keypad_pane

0xc72c,	// (0x000271bb) cell_vkb_keypad_pane_g1

0x0008,

0xfb73,	// (0x0002a602) bg_popup_fep_shadow_pane_g

0xc244,	// (0x00026cd3) cell_hwr_side_pane_g1

0xc244,	// (0x00026cd3) cell_hwr_side_pane_g2

0xc736,	// (0x000271c5) cell_vkb_keypad_pane_t1

0xc744,	// (0x000271d3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc744,	// (0x000271d3) cell_vkb_keypad_bottom_left_pane

0xc761,	// (0x000271f0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc761,	// (0x000271f0) cell_vkb_keypad_bottom_right_pane

0xc244,	// (0x00026cd3) cell_vkb_keypad_bottom_left_pane_g1

0xc244,	// (0x00026cd3) cell_vkb_keypad_bottom_right_pane_g1

0xc79a,	// (0x00027229) cell_vkb_keypad_number_pane_ParamLimits

0xc79a,	// (0x00027229) cell_vkb_keypad_number_pane

0xc7b9,	// (0x00027248) cell_vkb_keypad_number_pane_g1

0xc7c3,	// (0x00027252) cell_vkb_keypad_number_pane_g2

0xc7cc,	// (0x0002725b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb65,	// (0x0002a5f4) cell_vkb_keypad_number_pane_g

0xc736,	// (0x000271c5) cell_vkb_keypad_number_pane_t1

0xc7f6,	// (0x00027285) fep_vkb_candidate_pane_g1

0x0001,

0xfb60,	// (0x0002a5ef) cell_hwr_side_pane_g

0xc80f,	// (0x0002729e) cell_hwr_side_pane_t1

0x6daa,	// (0x00021839) cell_hwr_side_pane_t1_copy1

0xc4dc,	// (0x00026f6b) cell_hwr_candidate_pane_g1

0x6db8,	// (0x00021847) cell_hwr_candidate_pane_t1

0xc244,	// (0x00026cd3) cell_vkb_candidate_pane_g2

0xc895,	// (0x00027324) cell_vkb_candidate_pane_t1

0xc2b4,	// (0x00026d43) bg_popup_fep_shadow_pane_ParamLimits

0xc2b4,	// (0x00026d43) bg_popup_fep_shadow_pane

0x13fb,	// (0x0001be8a) bg_fep_hwr_top_pane_g4

0xc2e6,	// (0x00026d75) bg_hwr_side_pane_g1_ParamLimits

0xc2e6,	// (0x00026d75) bg_hwr_side_pane_g1

0x6c7e,	// (0x0002170d) cell_hwr_side_pane_ParamLimits

0x6c7e,	// (0x0002170d) cell_hwr_side_pane

0x6cbb,	// (0x0002174a) fep_hwr_write_pane_g1_ParamLimits

0x6cbb,	// (0x0002174a) fep_hwr_write_pane_g1

0x6cc8,	// (0x00021757) fep_hwr_write_pane_g2_ParamLimits

0x6cc8,	// (0x00021757) fep_hwr_write_pane_g2

0x6cd5,	// (0x00021764) fep_hwr_write_pane_g3_ParamLimits

0x6cd5,	// (0x00021764) fep_hwr_write_pane_g3

0x6ce3,	// (0x00021772) fep_hwr_write_pane_g4_ParamLimits

0x6ce3,	// (0x00021772) fep_hwr_write_pane_g4

0x0005,

0xfb32,	// (0x0002a5c1) fep_hwr_write_pane_g_ParamLimits

0xfb32,	// (0x0002a5c1) fep_hwr_write_pane_g

0x13fb,	// (0x0001be8a) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x13fb,	// (0x0001be8a) bg_fep_hwr_candidate_pane_g2

0x6cf8,	// (0x00021787) cell_hwr_candidate_pane_ParamLimits

0x6cf8,	// (0x00021787) cell_hwr_candidate_pane

0x6d4a,	// (0x000217d9) fep_hwr_candidate_pane_g1_ParamLimits

0xc346,	// (0x00026dd5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc346,	// (0x00026dd5) bg_popup_fep_shadow_pane_cp2

0xc4dc,	// (0x00026f6b) fep_vkb_top_pane_g4_ParamLimits

0xc4dc,	// (0x00026f6b) fep_vkb_top_pane_g4

0xc522,	// (0x00026fb1) fep_vkb_side_pane_g2_ParamLimits

0xc522,	// (0x00026fb1) fep_vkb_side_pane_g2

0x5101,	// (0x0001fb90) list_setting_pane_t4_ParamLimits

0x5101,	// (0x0001fb90) list_setting_pane_t4

0x519d,	// (0x0001fc2c) list_setting_number_pane_t5_ParamLimits

0x519d,	// (0x0001fc2c) list_setting_number_pane_t5

0x8786,	// (0x00023215) list_double_heading_pane_cp2_ParamLimits

0x8786,	// (0x00023215) list_double_heading_pane_cp2

0x80ee,	// (0x00022b7d) list_double_heading_pane_g1_cp2_ParamLimits

0x80ee,	// (0x00022b7d) list_double_heading_pane_g1_cp2

0x80fa,	// (0x00022b89) list_double_heading_pane_g2_cp2_ParamLimits

0x80fa,	// (0x00022b89) list_double_heading_pane_g2_cp2

0xc8a3,	// (0x00027332) list_double_heading_pane_t1_cp2_ParamLimits

0xc8a3,	// (0x00027332) list_double_heading_pane_t1_cp2

0xc8b9,	// (0x00027348) list_double_heading_pane_t2_cp2_ParamLimits

0xc8b9,	// (0x00027348) list_double_heading_pane_t2_cp2

0x7741,	// (0x000221d0) aid_value_unit2

0x5f96,	// (0x00020a25) popup_preview_fixed_window

0x7ad7,	// (0x00022566) bg_popup_preview_window_pane_cp02

0xc8cb,	// (0x0002735a) list_preview_fixed_pane

0xc911,	// (0x000273a0) list_empty_pane_fp_ParamLimits

0xc911,	// (0x000273a0) list_empty_pane_fp

0xc911,	// (0x000273a0) list_single_cale_day_pane_fp_ParamLimits

0xc911,	// (0x000273a0) list_single_cale_day_pane_fp

0xc911,	// (0x000273a0) list_single_graphic_heading_pane_fp_ParamLimits

0xc911,	// (0x000273a0) list_single_graphic_heading_pane_fp

0xc911,	// (0x000273a0) list_single_graphic_pane_fp_ParamLimits

0xc911,	// (0x000273a0) list_single_graphic_pane_fp

0xc911,	// (0x000273a0) list_single_heading_pane_fp_ParamLimits

0xc911,	// (0x000273a0) list_single_heading_pane_fp

0xc911,	// (0x000273a0) list_single_pane_fp_ParamLimits

0xc911,	// (0x000273a0) list_single_pane_fp

0xc92a,	// (0x000273b9) list_single_pane_fp_g1_ParamLimits

0xc92a,	// (0x000273b9) list_single_pane_fp_g1

0x5916,	// (0x000203a5) list_single_pane_fp_g2_ParamLimits

0x5916,	// (0x000203a5) list_single_pane_fp_g2

0x5922,	// (0x000203b1) list_single_pane_fp_g3_ParamLimits

0x5922,	// (0x000203b1) list_single_pane_fp_g3

0xc936,	// (0x000273c5) list_single_pane_fp_g4_ParamLimits

0xc936,	// (0x000273c5) list_single_pane_fp_g4

0x0003,

0xfb94,	// (0x0002a623) list_single_pane_fp_g_ParamLimits

0xfb94,	// (0x0002a623) list_single_pane_fp_g

0x5936,	// (0x000203c5) list_single_pane_fp_t1_ParamLimits

0x5936,	// (0x000203c5) list_single_pane_fp_t1

0x594d,	// (0x000203dc) list_single_graphic_pane_fp_g1_ParamLimits

0x594d,	// (0x000203dc) list_single_graphic_pane_fp_g1

0xc92a,	// (0x000273b9) list_single_graphic_pane_fp_g2_ParamLimits

0xc92a,	// (0x000273b9) list_single_graphic_pane_fp_g2

0x5916,	// (0x000203a5) list_single_graphic_pane_fp_g3_ParamLimits

0x5916,	// (0x000203a5) list_single_graphic_pane_fp_g3

0x5922,	// (0x000203b1) list_single_graphic_pane_fp_g4_ParamLimits

0x5922,	// (0x000203b1) list_single_graphic_pane_fp_g4

0xc936,	// (0x000273c5) list_single_graphic_pane_fp_g5_ParamLimits

0xc936,	// (0x000273c5) list_single_graphic_pane_fp_g5

0x0004,

0xfb9d,	// (0x0002a62c) list_single_graphic_pane_fp_g_ParamLimits

0xfb9d,	// (0x0002a62c) list_single_graphic_pane_fp_g

0x5959,	// (0x000203e8) list_single_graphic_pane_fp_t1_ParamLimits

0x5959,	// (0x000203e8) list_single_graphic_pane_fp_t1

0x594d,	// (0x000203dc) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x594d,	// (0x000203dc) list_single_graphic_heading_pane_fp_g1

0xc92a,	// (0x000273b9) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc92a,	// (0x000273b9) list_single_graphic_heading_pane_fp_g2

0x5916,	// (0x000203a5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5916,	// (0x000203a5) list_single_graphic_heading_pane_fp_g3

0x5922,	// (0x000203b1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5922,	// (0x000203b1) list_single_graphic_heading_pane_fp_g4

0xc936,	// (0x000273c5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc936,	// (0x000273c5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x0002a62c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x0002a62c) list_single_graphic_heading_pane_fp_g

0x596f,	// (0x000203fe) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x596f,	// (0x000203fe) list_single_graphic_heading_pane_fp_t1

0x5985,	// (0x00020414) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5985,	// (0x00020414) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0002a637) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0002a637) list_single_graphic_heading_pane_fp_t

0x5997,	// (0x00020426) list_single_cale_day_pane_fp_g1_ParamLimits

0x5997,	// (0x00020426) list_single_cale_day_pane_fp_g1

0xc942,	// (0x000273d1) list_single_cale_day_pane_fp_g2_ParamLimits

0xc942,	// (0x000273d1) list_single_cale_day_pane_fp_g2

0x59cf,	// (0x0002045e) list_single_cale_day_pane_fp_g3_ParamLimits

0x59cf,	// (0x0002045e) list_single_cale_day_pane_fp_g3

0x59f7,	// (0x00020486) list_single_cale_day_pane_fp_g4_ParamLimits

0x59f7,	// (0x00020486) list_single_cale_day_pane_fp_g4

0x5a1b,	// (0x000204aa) list_single_cale_day_pane_fp_g5_ParamLimits

0x5a1b,	// (0x000204aa) list_single_cale_day_pane_fp_g5

0x0004,

0xfbad,	// (0x0002a63c) list_single_cale_day_pane_fp_g_ParamLimits

0xfbad,	// (0x0002a63c) list_single_cale_day_pane_fp_g

0x5a3f,	// (0x000204ce) list_single_cale_day_pane_fp_t1_ParamLimits

0x5a3f,	// (0x000204ce) list_single_cale_day_pane_fp_t1

0x5a65,	// (0x000204f4) list_single_cale_day_pane_fp_t2_ParamLimits

0x5a65,	// (0x000204f4) list_single_cale_day_pane_fp_t2

0x5a7e,	// (0x0002050d) list_single_cale_day_pane_fp_t3_ParamLimits

0x5a7e,	// (0x0002050d) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb8,	// (0x0002a647) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb8,	// (0x0002a647) list_single_cale_day_pane_fp_t

0xc92a,	// (0x000273b9) list_empty_pane_fp_g1_ParamLimits

0xc92a,	// (0x000273b9) list_empty_pane_fp_g1

0x5a97,	// (0x00020526) list_empty_pane_fp_t1

0x5aa5,	// (0x00020534) list_empty_pane_fp_t2

0x0001,

0xfbbf,	// (0x0002a64e) list_empty_pane_fp_t

0xc92a,	// (0x000273b9) list_single_heading_pane_fp_g1_ParamLimits

0xc92a,	// (0x000273b9) list_single_heading_pane_fp_g1

0x5916,	// (0x000203a5) list_single_heading_pane_fp_g2_ParamLimits

0x5916,	// (0x000203a5) list_single_heading_pane_fp_g2

0x5922,	// (0x000203b1) list_single_heading_pane_fp_g3_ParamLimits

0x5922,	// (0x000203b1) list_single_heading_pane_fp_g3

0x0002,

0xfbc4,	// (0x0002a653) list_single_heading_pane_fp_g_ParamLimits

0xfbc4,	// (0x0002a653) list_single_heading_pane_fp_g

0x5ab3,	// (0x00020542) list_single_heading_pane_fp_t1_ParamLimits

0x5ab3,	// (0x00020542) list_single_heading_pane_fp_t1

0x5ac5,	// (0x00020554) list_single_heading_pane_fp_t2_ParamLimits

0x5ac5,	// (0x00020554) list_single_heading_pane_fp_t2

0x0001,

0xfbcb,	// (0x0002a65a) list_single_heading_pane_fp_t_ParamLimits

0xfbcb,	// (0x0002a65a) list_single_heading_pane_fp_t

0x82e9,	// (0x00022d78) aid_size_cell_fast

0x7a49,	// (0x000224d8) soft_indicator_pane_cp1_t1

0x8326,	// (0x00022db5) cell_app_pane_cp2_ParamLimits

0x8326,	// (0x00022db5) cell_app_pane_cp2

0x6b84,	// (0x00021613) fep_hwr_candidate_drop_down_list_pane

0x1409,	// (0x0001be98) fep_hwr_candidate_pane_g3_ParamLimits

0x1409,	// (0x0001be98) fep_hwr_candidate_pane_g3

0x1416,	// (0x0001bea5) fep_hwr_candidate_pane_g4_ParamLimits

0x1416,	// (0x0001bea5) fep_hwr_candidate_pane_g4

0x0002,

0xfb3f,	// (0x0002a5ce) fep_hwr_candidate_pane_g_ParamLimits

0xfb3f,	// (0x0002a5ce) fep_hwr_candidate_pane_g

0xc3d6,	// (0x00026e65) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3d6,	// (0x00026e65) fep_vkb_candidate_drop_down_list_pane

0xc7fe,	// (0x0002728d) fep_vkb_candidate_pane_g3

0xc806,	// (0x00027295) fep_vkb_candidate_pane_g4

0x0002,

0xfb6c,	// (0x0002a5fb) fep_vkb_candidate_pane_g

0xc4dc,	// (0x00026f6b) cell_hwr_candidate_pane_g1_ParamLimits

0xc81d,	// (0x000272ac) cell_hwr_candidate_pane_g3_ParamLimits

0xc81d,	// (0x000272ac) cell_hwr_candidate_pane_g3

0xc83e,	// (0x000272cd) cell_hwr_candidate_pane_g4_ParamLimits

0xc83e,	// (0x000272cd) cell_hwr_candidate_pane_g4

0x0002,

0xfb86,	// (0x0002a615) cell_hwr_candidate_pane_g_ParamLimits

0xfb86,	// (0x0002a615) cell_hwr_candidate_pane_g

0xc85f,	// (0x000272ee) cell_vkb_candidate_pane_g3_ParamLimits

0xc85f,	// (0x000272ee) cell_vkb_candidate_pane_g3

0xc87a,	// (0x00027309) cell_vkb_candidate_pane_g4_ParamLimits

0xc87a,	// (0x00027309) cell_vkb_candidate_pane_g4

0xc94e,	// (0x000273dd) cell_app_pane_cp2_g1_ParamLimits

0xc94e,	// (0x000273dd) cell_app_pane_cp2_g1

0xc96c,	// (0x000273fb) cell_app_pane_cp2_g2_ParamLimits

0xc96c,	// (0x000273fb) cell_app_pane_cp2_g2

0x0001,

0xfbd0,	// (0x0002a65f) cell_app_pane_cp2_g_ParamLimits

0xfbd0,	// (0x0002a65f) cell_app_pane_cp2_g

0xc978,	// (0x00027407) cell_app_pane_cp2_t1_ParamLimits

0xc978,	// (0x00027407) cell_app_pane_cp2_t1

0x80d4,	// (0x00022b63) grid_highlight_pane_cp1_ParamLimits

0x80d4,	// (0x00022b63) grid_highlight_pane_cp1

0x6dd6,	// (0x00021865) cell_hwr_candidate_pane_cp1_ParamLimits

0x6dd6,	// (0x00021865) cell_hwr_candidate_pane_cp1

0xc4dc,	// (0x00026f6b) fep_hwr_candidate_drop_down_list_pane_g1

0xc98a,	// (0x00027419) fep_hwr_candidate_drop_down_list_pane_g2

0xc997,	// (0x00027426) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0002a664) fep_hwr_candidate_drop_down_list_pane_g

0x6dfa,	// (0x00021889) fep_hwr_candidate_drop_down_list_scroll_pane

0x6e03,	// (0x00021892) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6e03,	// (0x00021892) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6e10,	// (0x0002189f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6e10,	// (0x0002189f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6e1d,	// (0x000218ac) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6e1d,	// (0x000218ac) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc85f,	// (0x000272ee) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc85f,	// (0x000272ee) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc87a,	// (0x00027309) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc87a,	// (0x00027309) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6e2a,	// (0x000218b9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6e2a,	// (0x000218b9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6e45,	// (0x000218d4) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6e45,	// (0x000218d4) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6e60,	// (0x000218ef) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6e60,	// (0x000218ef) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0002a66b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0002a66b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9a4,	// (0x00027433) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9a4,	// (0x00027433) cell_vkb_candidate_pane_cp1

0xc4dc,	// (0x00026f6b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4dc,	// (0x00026f6b) fep_vkb_candidate_drop_down_list_pane_g1

0xc98a,	// (0x00027419) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98a,	// (0x00027419) fep_vkb_candidate_drop_down_list_pane_g2

0xc997,	// (0x00027426) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc997,	// (0x00027426) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0002a664) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0002a664) fep_vkb_candidate_drop_down_list_pane_g

0xc9ca,	// (0x00027459) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9ca,	// (0x00027459) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9d7,	// (0x00027466) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9d7,	// (0x00027466) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9e4,	// (0x00027473) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9e4,	// (0x00027473) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9f0,	// (0x0002747f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9f0,	// (0x0002747f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc81d,	// (0x000272ac) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc81d,	// (0x000272ac) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc83e,	// (0x000272cd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc83e,	// (0x000272cd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9fc,	// (0x0002748b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9fc,	// (0x0002748b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca1d,	// (0x000274ac) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca1d,	// (0x000274ac) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca3e,	// (0x000274cd) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca3e,	// (0x000274cd) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbed,	// (0x0002a67c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbed,	// (0x0002a67c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7777,	// (0x00022206) title_pane_g1_ParamLimits

0x7784,	// (0x00022213) title_pane_g2_ParamLimits

0xf592,	// (0x0002a021) title_pane_g_ParamLimits

0x8734,	// (0x000231c3) aid_call2_pane

0x873c,	// (0x000231cb) aid_call_pane

0x8744,	// (0x000231d3) popup_clock_analogue_window_g1

0x8744,	// (0x000231d3) popup_clock_analogue_window_g2

0x6308,	// (0x00020d97) popup_clock_analogue_window_g3

0x6311,	// (0x00020da0) popup_clock_analogue_window_g4

0x7763,	// (0x000221f2) popup_clock_analogue_window_g5

0x0004,

0xf73c,	// (0x0002a1cb) popup_clock_analogue_window_g

0x6319,	// (0x00020da8) popup_clock_analogue_window_t1

0x6327,	// (0x00020db6) clock_digital_number_pane_ParamLimits

0x6327,	// (0x00020db6) clock_digital_number_pane

0x6333,	// (0x00020dc2) clock_digital_number_pane_cp02_ParamLimits

0x6333,	// (0x00020dc2) clock_digital_number_pane_cp02

0x633f,	// (0x00020dce) clock_digital_number_pane_cp03_ParamLimits

0x633f,	// (0x00020dce) clock_digital_number_pane_cp03

0x634b,	// (0x00020dda) clock_digital_number_pane_cp04_ParamLimits

0x634b,	// (0x00020dda) clock_digital_number_pane_cp04

0x6357,	// (0x00020de6) clock_digital_separator_pane_ParamLimits

0x6357,	// (0x00020de6) clock_digital_separator_pane

0x6363,	// (0x00020df2) popup_clock_digital_window_t1_ParamLimits

0x6363,	// (0x00020df2) popup_clock_digital_window_t1

0x7763,	// (0x000221f2) clock_digital_number_pane_g1

0x7763,	// (0x000221f2) clock_digital_number_pane_g2

0x0001,

0xf747,	// (0x0002a1d6) clock_digital_number_pane_g

0x7763,	// (0x000221f2) clock_digital_separator_pane_g1

0x7763,	// (0x000221f2) clock_digital_separator_pane_g2

0x0001,

0xf747,	// (0x0002a1d6) clock_digital_separator_pane_g

0x96f7,	// (0x00024186) aid_fill_nsta_ParamLimits

0x9847,	// (0x000242d6) indicator_nsta_pane_ParamLimits

0x99d7,	// (0x00024466) popup_clock_analogue_window

0x99d7,	// (0x00024466) popup_clock_digital_window

0x784d,	// (0x000222dc) grid_indicator_nsta_pane_ParamLimits

0xbc9b,	// (0x0002672a) clock_nsta_pane_t2

0x0001,

0xfacc,	// (0x0002a55b) clock_nsta_pane_t

0x62cc,	// (0x00020d5b) aid_size_max_handle

0x62d6,	// (0x00020d65) aid_size_min_handle

0x8d3e,	// (0x000237cd) editor_scroll_pane

0xca59,	// (0x000274e8) ex_editor_pane

0x8256,	// (0x00022ce5) scroll_pane_cp13

0x8073,	// (0x00022b02) scroll_pane_cp14

0x876e,	// (0x000231fd) scroll_pane_cp36

0x879c,	// (0x0002322b) list_single_graphic_hl_pane_cp2_ParamLimits

0x879c,	// (0x0002322b) list_single_graphic_hl_pane_cp2

0x5660,	// (0x000200ef) list_single_graphic_hl_pane_ParamLimits

0x5660,	// (0x000200ef) list_single_graphic_hl_pane

0x5adb,	// (0x0002056a) aid_size_min_hl_cp1

0xca61,	// (0x000274f0) list_highlight_pane_cp34_ParamLimits

0xca61,	// (0x000274f0) list_highlight_pane_cp34

0xca72,	// (0x00027501) list_single_graphic_hl_pane_g1_ParamLimits

0xca72,	// (0x00027501) list_single_graphic_hl_pane_g1

0x5ae4,	// (0x00020573) list_single_graphic_hl_pane_g2_ParamLimits

0x5ae4,	// (0x00020573) list_single_graphic_hl_pane_g2

0x5ae4,	// (0x00020573) list_single_graphic_hl_pane_g3_ParamLimits

0x5ae4,	// (0x00020573) list_single_graphic_hl_pane_g3

0x54d4,	// (0x0001ff63) list_single_graphic_hl_pane_g4_ParamLimits

0x54d4,	// (0x0001ff63) list_single_graphic_hl_pane_g4

0x5af0,	// (0x0002057f) list_single_graphic_hl_pane_g5_ParamLimits

0x5af0,	// (0x0002057f) list_single_graphic_hl_pane_g5

0x0004,

0xfbfe,	// (0x0002a68d) list_single_graphic_hl_pane_g_ParamLimits

0xfbfe,	// (0x0002a68d) list_single_graphic_hl_pane_g

0x5b04,	// (0x00020593) list_single_graphic_hl_pane_t1_ParamLimits

0x5b04,	// (0x00020593) list_single_graphic_hl_pane_t1

0xca7f,	// (0x0002750e) aid_size_min_hl_cp2

0xca88,	// (0x00027517) list_highlight_pane_cp34_cp2_ParamLimits

0xca88,	// (0x00027517) list_highlight_pane_cp34_cp2

0xca72,	// (0x00027501) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca72,	// (0x00027501) list_single_graphic_hl_pane_g1_cp2

0xca95,	// (0x00027524) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca95,	// (0x00027524) list_single_graphic_hl_pane_g2_cp2

0xcaa1,	// (0x00027530) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcaa1,	// (0x00027530) list_single_graphic_hl_pane_g3_cp2

0x8878,	// (0x00023307) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8878,	// (0x00023307) list_single_graphic_hl_pane_g4_cp2

0xcaaf,	// (0x0002753e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcaaf,	// (0x0002753e) list_single_graphic_hl_pane_g5_cp2

0x661c,	// (0x000210ab) control_pane_g4_ParamLimits

0x661c,	// (0x000210ab) control_pane_g4

0x90c4,	// (0x00023b53) bg_popup_sub_pane_cp10_ParamLimits

0xc24e,	// (0x00026cdd) list_choice_list_pane_ParamLimits

0xc25d,	// (0x00026cec) scroll_pane_cp23

0x7ad7,	// (0x00022566) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8cb,	// (0x0002735a) list_preview_fixed_pane_ParamLimits

0xc8e1,	// (0x00027370) list_preview_fixed_pane_cp_ParamLimits

0xc8e1,	// (0x00027370) list_preview_fixed_pane_cp

0xc8ed,	// (0x0002737c) popup_preview_fixed_window_g1_ParamLimits

0xc8ed,	// (0x0002737c) popup_preview_fixed_window_g1

0xc8f9,	// (0x00027388) popup_preview_fixed_window_g2_ParamLimits

0xc8f9,	// (0x00027388) popup_preview_fixed_window_g2

0x0002,

0xfb8d,	// (0x0002a61c) popup_preview_fixed_window_g_ParamLimits

0xfb8d,	// (0x0002a61c) popup_preview_fixed_window_g

0x623e,	// (0x00020ccd) aid_navi_side_left_pane_ParamLimits

0x6253,	// (0x00020ce2) aid_navi_side_right_pane_ParamLimits

0x626b,	// (0x00020cfa) navi_icon_pane_stacon_ParamLimits

0x627f,	// (0x00020d0e) navi_navi_pane_stacon_ParamLimits

0x626b,	// (0x00020cfa) navi_text_pane_stacon_ParamLimits

0x7759,	// (0x000221e8) main_text_info_pane

0xcad9,	// (0x00027568) listscroll_text_info_pane

0xcae1,	// (0x00027570) list_text_info_pane_ParamLimits

0xcae1,	// (0x00027570) list_text_info_pane

0xcaf0,	// (0x0002757f) scroll_pane_cp24_ParamLimits

0xcaf0,	// (0x0002757f) scroll_pane_cp24

0xcb0e,	// (0x0002759d) list_text_info_pane_t1_ParamLimits

0xcb0e,	// (0x0002759d) list_text_info_pane_t1

0x910a,	// (0x00023b99) popup_fast_swap2_window_ParamLimits

0x910a,	// (0x00023b99) popup_fast_swap2_window

0xcb33,	// (0x000275c2) aid_size_cell_fast2

0x7759,	// (0x000221e8) bg_popup_window_pane_cp17

0xa08a,	// (0x00024b19) heading_pane_cp2

0x7d37,	// (0x000227c6) listscroll_fast2_pane

0xcb3d,	// (0x000275cc) grid_fast2_pane

0xcb47,	// (0x000275d6) listscroll_fast2_pane_g1

0xcb51,	// (0x000275e0) listscroll_fast2_pane_g2

0x0001,

0xfc09,	// (0x0002a698) listscroll_fast2_pane_g

0x8256,	// (0x00022ce5) scroll_pane_cp26

0xcb5b,	// (0x000275ea) cell_fast2_pane_ParamLimits

0xcb5b,	// (0x000275ea) cell_fast2_pane

0xcb72,	// (0x00027601) cell_fast2_pane_g1

0xcb7b,	// (0x0002760a) cell_fast2_pane_g2

0xcb84,	// (0x00027613) cell_fast2_pane_g3

0x0002,

0xfc0e,	// (0x0002a69d) cell_fast2_pane_g

0x7e30,	// (0x000228bf) grid_highlight_pane_cp9

0x7e45,	// (0x000228d4) main_eswt_pane_ParamLimits

0x7e45,	// (0x000228d4) main_eswt_pane

0xcb05,	// (0x00027594) list_single_text_info_pane

0xcb8c,	// (0x0002761b) eswt_ctrl_button_pane

0xcb8c,	// (0x0002761b) eswt_ctrl_canvas_pane

0xcb94,	// (0x00027623) eswt_ctrl_combo_pane

0xcb8c,	// (0x0002761b) eswt_ctrl_default_pane

0xcb8c,	// (0x0002761b) eswt_ctrl_label_pane

0xcb9c,	// (0x0002762b) eswt_ctrl_wait_pane

0xcba4,	// (0x00027633) eswt_shell_pane

0x7759,	// (0x000221e8) listscroll_eswt_app_pane

0xcbc4,	// (0x00027653) popup_eswt_tasktip_window_ParamLimits

0xcbc4,	// (0x00027653) popup_eswt_tasktip_window

0x9cf2,	// (0x00024781) bg_popup_window_pane_cp18

0xcbd5,	// (0x00027664) eswt_control_pane_g1_ParamLimits

0xcbd5,	// (0x00027664) eswt_control_pane_g1

0xcbe2,	// (0x00027671) eswt_control_pane_g2_ParamLimits

0xcbe2,	// (0x00027671) eswt_control_pane_g2

0xcbef,	// (0x0002767e) eswt_control_pane_g3_ParamLimits

0xcbef,	// (0x0002767e) eswt_control_pane_g3

0xcbfc,	// (0x0002768b) eswt_control_pane_g4_ParamLimits

0xcbfc,	// (0x0002768b) eswt_control_pane_g4

0x0003,

0xfc15,	// (0x0002a6a4) eswt_control_pane_g_ParamLimits

0xfc15,	// (0x0002a6a4) eswt_control_pane_g

0x80d4,	// (0x00022b63) bg_button_pane_ParamLimits

0x80d4,	// (0x00022b63) bg_button_pane

0x7e45,	// (0x000228d4) common_borders_pane_copy2_ParamLimits

0x7e45,	// (0x000228d4) common_borders_pane_copy2

0xcc09,	// (0x00027698) control_button_pane_g1_ParamLimits

0xcc09,	// (0x00027698) control_button_pane_g1

0xcc15,	// (0x000276a4) control_button_pane_g2_ParamLimits

0xcc15,	// (0x000276a4) control_button_pane_g2

0xcc21,	// (0x000276b0) control_button_pane_g3_ParamLimits

0xcc21,	// (0x000276b0) control_button_pane_g3

0x0002,

0xfc1e,	// (0x0002a6ad) control_button_pane_g_ParamLimits

0xfc1e,	// (0x0002a6ad) control_button_pane_g

0xcc35,	// (0x000276c4) control_button_pane_t1

0xcc43,	// (0x000276d2) control_button_pane_t2

0x0001,

0xfc25,	// (0x0002a6b4) control_button_pane_t

0x9c00,	// (0x0002468f) bg_button_pane_g1

0x9c08,	// (0x00024697) bg_button_pane_g2

0x9c10,	// (0x0002469f) bg_button_pane_g3

0x9c18,	// (0x000246a7) bg_button_pane_g4

0x9c20,	// (0x000246af) bg_button_pane_g5

0x9c28,	// (0x000246b7) bg_button_pane_g6

0x9c30,	// (0x000246bf) bg_button_pane_g7

0x9c38,	// (0x000246c7) bg_button_pane_g8

0x9c40,	// (0x000246cf) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0002a32e) bg_button_pane_g

0xc209,	// (0x00026c98) common_borders_pane_ParamLimits

0xc209,	// (0x00026c98) common_borders_pane

0xcbd5,	// (0x00027664) eswt_control_pane_g1_copy1_ParamLimits

0xcbd5,	// (0x00027664) eswt_control_pane_g1_copy1

0xcbe2,	// (0x00027671) eswt_control_pane_g2_copy1_ParamLimits

0xcbe2,	// (0x00027671) eswt_control_pane_g2_copy1

0xcbef,	// (0x0002767e) eswt_control_pane_g3_copy1_ParamLimits

0xcbef,	// (0x0002767e) eswt_control_pane_g3_copy1

0xcbfc,	// (0x0002768b) eswt_control_pane_g4_copy1_ParamLimits

0xcbfc,	// (0x0002768b) eswt_control_pane_g4_copy1

0xc244,	// (0x00026cd3) bg_eswt_ctrl_canvas_pane_g1

0xc209,	// (0x00026c98) common_borders_pane_cp2_ParamLimits

0xc209,	// (0x00026c98) common_borders_pane_cp2

0xc209,	// (0x00026c98) common_borders_pane_cp3_ParamLimits

0xc209,	// (0x00026c98) common_borders_pane_cp3

0xcc51,	// (0x000276e0) separator_horizontal_pane

0xcc59,	// (0x000276e8) separator_vertical_pane

0xcbd5,	// (0x00027664) eswt_control_pane_g1_copy2_ParamLimits

0xcbd5,	// (0x00027664) eswt_control_pane_g1_copy2

0xcbe2,	// (0x00027671) eswt_control_pane_g2_copy2_ParamLimits

0xcbe2,	// (0x00027671) eswt_control_pane_g2_copy2

0xcbef,	// (0x0002767e) eswt_control_pane_g3_copy2_ParamLimits

0xcbef,	// (0x0002767e) eswt_control_pane_g3_copy2

0xcbfc,	// (0x0002768b) eswt_control_pane_g4_copy2_ParamLimits

0xcbfc,	// (0x0002768b) eswt_control_pane_g4_copy2

0x7759,	// (0x000221e8) common_borders_pane_cp4

0xcc62,	// (0x000276f1) separator_horizontal_pane_g1

0xcc6b,	// (0x000276fa) separator_horizontal_pane_g2

0xcc74,	// (0x00027703) separator_horizontal_pane_g3

0x0002,

0xfc2a,	// (0x0002a6b9) separator_horizontal_pane_g

0xcbd5,	// (0x00027664) eswt_control_pane_g1_copy3_ParamLimits

0xcbd5,	// (0x00027664) eswt_control_pane_g1_copy3

0xcbe2,	// (0x00027671) eswt_control_pane_g2_copy3_ParamLimits

0xcbe2,	// (0x00027671) eswt_control_pane_g2_copy3

0xcbef,	// (0x0002767e) eswt_control_pane_g3_copy3_ParamLimits

0xcbef,	// (0x0002767e) eswt_control_pane_g3_copy3

0xcbfc,	// (0x0002768b) eswt_control_pane_g4_copy3_ParamLimits

0xcbfc,	// (0x0002768b) eswt_control_pane_g4_copy3

0x7759,	// (0x000221e8) common_borders_pane_cp5

0xcc7d,	// (0x0002770c) separator_vertical_pane_g1

0xcc86,	// (0x00027715) separator_vertical_pane_g2

0xcc8f,	// (0x0002771e) separator_vertical_pane_g3

0x0002,

0xfc31,	// (0x0002a6c0) separator_vertical_pane_g

0xcbd5,	// (0x00027664) eswt_control_pane_g1_copy4_ParamLimits

0xcbd5,	// (0x00027664) eswt_control_pane_g1_copy4

0xcbe2,	// (0x00027671) eswt_control_pane_g2_copy4_ParamLimits

0xcbe2,	// (0x00027671) eswt_control_pane_g2_copy4

0xcbef,	// (0x0002767e) eswt_control_pane_g3_copy4_ParamLimits

0xcbef,	// (0x0002767e) eswt_control_pane_g3_copy4

0xcbfc,	// (0x0002768b) eswt_control_pane_g4_copy4_ParamLimits

0xcbfc,	// (0x0002768b) eswt_control_pane_g4_copy4

0xcc98,	// (0x00027727) eswt_ctrl_combo_button_pane

0xcca0,	// (0x0002772f) eswt_ctrl_input_pane

0xcca8,	// (0x00027737) popup_choice_list_window_cp70

0xccb0,	// (0x0002773f) eswt_ctrl_input_pane_t1

0x7759,	// (0x000221e8) input_focus_pane_cp70

0xc209,	// (0x00026c98) bg_button_pane_cp70_ParamLimits

0xc209,	// (0x00026c98) bg_button_pane_cp70

0xccbe,	// (0x0002774d) eswt_ctrl_combo_button_pane_g1

0xccc6,	// (0x00027755) wait_bar_pane_cp70

0x9cf2,	// (0x00024781) bg_popup_window_pane_cp70_ParamLimits

0x9cf2,	// (0x00024781) bg_popup_window_pane_cp70

0xccce,	// (0x0002775d) popup_eswt_tasktip_window_t1

0xcce4,	// (0x00027773) wait_bar_pane_cp71_ParamLimits

0xcce4,	// (0x00027773) wait_bar_pane_cp71

0xccf0,	// (0x0002777f) grid_eswt_app_pane

0x8581,	// (0x00023010) scroll_pane_cp70

0xccf9,	// (0x00027788) cell_eswt_app_pane_ParamLimits

0xccf9,	// (0x00027788) cell_eswt_app_pane

0xcd2b,	// (0x000277ba) cell_eswt_app_pane_g1_ParamLimits

0xcd2b,	// (0x000277ba) cell_eswt_app_pane_g1

0xcd5a,	// (0x000277e9) cell_eswt_app_pane_g2_ParamLimits

0xcd5a,	// (0x000277e9) cell_eswt_app_pane_g2

0x0001,

0xfc38,	// (0x0002a6c7) cell_eswt_app_pane_g_ParamLimits

0xfc38,	// (0x0002a6c7) cell_eswt_app_pane_g

0xcd83,	// (0x00027812) cell_eswt_app_pane_t1_ParamLimits

0xcd83,	// (0x00027812) cell_eswt_app_pane_t1

0xcdb5,	// (0x00027844) grid_highlight_pane_cp70_ParamLimits

0xcdb5,	// (0x00027844) grid_highlight_pane_cp70

0xb152,	// (0x00025be1) set_content_pane_g1

0x8fee,	// (0x00023a7d) status_small_volume_pane

0x6e7b,	// (0x0002190a) status_small_volume_pane_g1

0x6e83,	// (0x00021912) volume_small2_pane

0x6e8c,	// (0x0002191b) volume_small2_pane_g1

0x6e95,	// (0x00021924) volume_small2_pane_g2

0x6e9e,	// (0x0002192d) volume_small2_pane_g3

0x6ea7,	// (0x00021936) volume_small2_pane_g4

0x6eb0,	// (0x0002193f) volume_small2_pane_g5

0x6eb9,	// (0x00021948) volume_small2_pane_g6

0x6ec2,	// (0x00021951) volume_small2_pane_g7

0x6ecb,	// (0x0002195a) volume_small2_pane_g8

0x6ed4,	// (0x00021963) volume_small2_pane_g9

0x6edd,	// (0x0002196c) volume_small2_pane_g10

0x0009,

0xfc3d,	// (0x0002a6cc) volume_small2_pane_g

0xc630,	// (0x000270bf) fep_vkb_top_text_pane_g1_ParamLimits

0xc64b,	// (0x000270da) fep_vkb_top_text_pane_t1_ParamLimits

0xc905,	// (0x00027394) popup_preview_fixed_window_g3_ParamLimits

0xc905,	// (0x00027394) popup_preview_fixed_window_g3

0x961b,	// (0x000240aa) popup_toolbar_trans_pane

0xaff7,	// (0x00025a86) aid_height_set_list_ParamLimits

0xb008,	// (0x00025a97) aid_size_parent_ParamLimits

0x90c4,	// (0x00023b53) list_highlight_pane_cp2_ParamLimits

0xb152,	// (0x00025be1) set_content_pane_g1_ParamLimits

0xb25b,	// (0x00025cea) list_single_image_pane_ParamLimits

0xb25b,	// (0x00025cea) list_single_image_pane

0xcdc1,	// (0x00027850) aid_size_cell_image_ParamLimits

0xcdc1,	// (0x00027850) aid_size_cell_image

0xcdce,	// (0x0002785d) grid_single_image_pane_ParamLimits

0xcdce,	// (0x0002785d) grid_single_image_pane

0x80ee,	// (0x00022b7d) list_single_image_pane_g1_ParamLimits

0x80ee,	// (0x00022b7d) list_single_image_pane_g1

0x80fa,	// (0x00022b89) list_single_image_pane_g2_ParamLimits

0x80fa,	// (0x00022b89) list_single_image_pane_g2

0x0001,

0xfc52,	// (0x0002a6e1) list_single_image_pane_g_ParamLimits

0xfc52,	// (0x0002a6e1) list_single_image_pane_g

0xcddc,	// (0x0002786b) list_single_image_pane_t1_ParamLimits

0xcddc,	// (0x0002786b) list_single_image_pane_t1

0xcdf2,	// (0x00027881) cell_image_list_pane_ParamLimits

0xcdf2,	// (0x00027881) cell_image_list_pane

0xce08,	// (0x00027897) cell_image_list_pane_g1

0xce11,	// (0x000278a0) cell_image_list_pane_g2

0x0001,

0xfc57,	// (0x0002a6e6) cell_image_list_pane_g

0xce1a,	// (0x000278a9) aid_size_cell_tb_trans_pane

0x80d4,	// (0x00022b63) bg_tb_trans_pane

0xce2c,	// (0x000278bb) grid_tb_trans_pane

0x9c00,	// (0x0002468f) bg_tb_trans_pane_g1

0x9c08,	// (0x00024697) bg_tb_trans_pane_g2

0x9c10,	// (0x0002469f) bg_tb_trans_pane_g3

0x9c18,	// (0x000246a7) bg_tb_trans_pane_g4

0x9c20,	// (0x000246af) bg_tb_trans_pane_g5

0x9c38,	// (0x000246c7) bg_tb_trans_pane_g6

0x9c40,	// (0x000246cf) bg_tb_trans_pane_g7

0x9c28,	// (0x000246b7) bg_tb_trans_pane_g8

0x9c30,	// (0x000246bf) bg_tb_trans_pane_g9

0x0008,

0xfc5c,	// (0x0002a6eb) bg_tb_trans_pane_g

0xce40,	// (0x000278cf) cell_toolbar_trans_pane_ParamLimits

0xce40,	// (0x000278cf) cell_toolbar_trans_pane

0xc244,	// (0x00026cd3) cell_toolbar_trans_pane_g1

0xbe65,	// (0x000268f4) list_form2_midp_pane_t1

0xbe73,	// (0x00026902) list_form2_midp_pane_t2

0x0001,

0xfb05,	// (0x0002a594) list_form2_midp_pane_t

0xbe81,	// (0x00026910) scroll_pane_cp51_ParamLimits

0xc048,	// (0x00026ad7) form2_midp_wait_pane_g1

0xc051,	// (0x00026ae0) form2_midp_wait_pane_g2

0xc05a,	// (0x00026ae9) form2_midp_wait_pane_g3

0x0002,

0xfb1a,	// (0x0002a5a9) form2_midp_wait_pane_g

0x784d,	// (0x000222dc) list_highlight_pane_cp21_ParamLimits

0xc09e,	// (0x00026b2d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0ad,	// (0x00026b3c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb214,	// (0x00025ca3) list_single_2graphic_im_pane_ParamLimits

0xb214,	// (0x00025ca3) list_single_2graphic_im_pane

0xce66,	// (0x000278f5) list_single_2graphic_im_pane_g1_ParamLimits

0xce66,	// (0x000278f5) list_single_2graphic_im_pane_g1

0xce77,	// (0x00027906) list_single_2graphic_im_pane_g2_ParamLimits

0xce77,	// (0x00027906) list_single_2graphic_im_pane_g2

0xce83,	// (0x00027912) list_single_2graphic_im_pane_g3_ParamLimits

0xce83,	// (0x00027912) list_single_2graphic_im_pane_g3

0x0003,

0xfc6f,	// (0x0002a6fe) list_single_2graphic_im_pane_g_ParamLimits

0xfc6f,	// (0x0002a6fe) list_single_2graphic_im_pane_g

0xcea3,	// (0x00027932) list_single_2graphic_im_pane_t1_ParamLimits

0xcea3,	// (0x00027932) list_single_2graphic_im_pane_t1

0xc911,	// (0x000273a0) list_single_graphic_2heading_pane_fp_ParamLimits

0xc911,	// (0x000273a0) list_single_graphic_2heading_pane_fp

0x594d,	// (0x000203dc) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x594d,	// (0x000203dc) list_single_graphic_2heading_pane_fp_g1

0xc92a,	// (0x000273b9) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc92a,	// (0x000273b9) list_single_graphic_2heading_pane_fp_g2

0x5916,	// (0x000203a5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5916,	// (0x000203a5) list_single_graphic_2heading_pane_fp_g3

0x5922,	// (0x000203b1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5922,	// (0x000203b1) list_single_graphic_2heading_pane_fp_g4

0xc936,	// (0x000273c5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc936,	// (0x000273c5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9d,	// (0x0002a62c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x0002a62c) list_single_graphic_2heading_pane_fp_g

0x5b1a,	// (0x000205a9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5b1a,	// (0x000205a9) list_single_graphic_2heading_pane_fp_t1

0x5985,	// (0x00020414) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5985,	// (0x00020414) list_single_graphic_2heading_pane_fp_t2

0x5b30,	// (0x000205bf) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5b30,	// (0x000205bf) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc78,	// (0x0002a707) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc78,	// (0x0002a707) list_single_graphic_2heading_pane_fp_t

0xc2f2,	// (0x00026d81) fep_hwr_write_pane_g5_ParamLimits

0xc2f2,	// (0x00026d81) fep_hwr_write_pane_g5

0xc2fe,	// (0x00026d8d) fep_hwr_write_pane_g6_ParamLimits

0xc2fe,	// (0x00026d8d) fep_hwr_write_pane_g6

0xcba4,	// (0x00027633) eswt_shell_pane_ParamLimits

0x9cf2,	// (0x00024781) bg_popup_window_pane_cp18_ParamLimits

0xaf4e,	// (0x000259dd) heading_pane_cp70

0xccce,	// (0x0002775d) popup_eswt_tasktip_window_t1_ParamLimits

0x974e,	// (0x000241dd) aid_touch_tab_arrow_left

0x975d,	// (0x000241ec) aid_touch_tab_arrow_right

0x7795,	// (0x00022224) title_pane_g3_ParamLimits

0x7795,	// (0x00022224) title_pane_g3

0x8093,	// (0x00022b22) set_value_pane_g1

0x961b,	// (0x000240aa) popup_toolbar_trans_pane_ParamLimits

0xce1a,	// (0x000278a9) aid_size_cell_tb_trans_pane_ParamLimits

0x80d4,	// (0x00022b63) bg_tb_trans_pane_ParamLimits

0xce2c,	// (0x000278bb) grid_tb_trans_pane_ParamLimits

0x7ad7,	// (0x00022566) cont_note_pane_ParamLimits

0x7ad7,	// (0x00022566) cont_note_pane

0x7e45,	// (0x000228d4) cont_snote2_single_text_pane_ParamLimits

0x7e45,	// (0x000228d4) cont_snote2_single_text_pane

0x7e45,	// (0x000228d4) cont_snote2_single_graphic_pane_ParamLimits

0x7e45,	// (0x000228d4) cont_snote2_single_graphic_pane

0xa275,	// (0x00024d04) cont_note_wait_pane_ParamLimits

0xa275,	// (0x00024d04) cont_note_wait_pane

0xa275,	// (0x00024d04) cont_note_image_pane_ParamLimits

0xa275,	// (0x00024d04) cont_note_image_pane

0xced4,	// (0x00027963) popup_note2_window_g1_ParamLimits

0xced4,	// (0x00027963) popup_note2_window_g1

0xcf05,	// (0x00027994) popup_note2_window_t1_ParamLimits

0xcf05,	// (0x00027994) popup_note2_window_t1

0xcf4a,	// (0x000279d9) popup_note2_window_t2_ParamLimits

0xcf4a,	// (0x000279d9) popup_note2_window_t2

0xcf8f,	// (0x00027a1e) popup_note2_window_t3_ParamLimits

0xcf8f,	// (0x00027a1e) popup_note2_window_t3

0xcfd4,	// (0x00027a63) popup_note2_window_t4_ParamLimits

0xcfd4,	// (0x00027a63) popup_note2_window_t4

0x7b5b,	// (0x000225ea) popup_note2_window_t5_ParamLimits

0x7b5b,	// (0x000225ea) popup_note2_window_t5

0x0004,

0xfc84,	// (0x0002a713) popup_note2_window_t_ParamLimits

0xfc84,	// (0x0002a713) popup_note2_window_t

0xd003,	// (0x00027a92) popup_note2_image_window_g1_ParamLimits

0xd003,	// (0x00027a92) popup_note2_image_window_g1

0xd00f,	// (0x00027a9e) popup_note2_image_window_g2_ParamLimits

0xd00f,	// (0x00027a9e) popup_note2_image_window_g2

0x0001,

0xfc8f,	// (0x0002a71e) popup_note2_image_window_g_ParamLimits

0xfc8f,	// (0x0002a71e) popup_note2_image_window_g

0xd021,	// (0x00027ab0) popup_note2_image_window_t1_ParamLimits

0xd021,	// (0x00027ab0) popup_note2_image_window_t1

0xd039,	// (0x00027ac8) popup_note2_image_window_t2_ParamLimits

0xd039,	// (0x00027ac8) popup_note2_image_window_t2

0xd051,	// (0x00027ae0) popup_note2_image_window_t3_ParamLimits

0xd051,	// (0x00027ae0) popup_note2_image_window_t3

0x0002,

0xfc94,	// (0x0002a723) popup_note2_image_window_t_ParamLimits

0xfc94,	// (0x0002a723) popup_note2_image_window_t

0xa283,	// (0x00024d12) popup_note2_wait_window_g1_ParamLimits

0xa283,	// (0x00024d12) popup_note2_wait_window_g1

0xd06d,	// (0x00027afc) popup_note2_wait_window_g2_ParamLimits

0xd06d,	// (0x00027afc) popup_note2_wait_window_g2

0xa29b,	// (0x00024d2a) popup_note2_wait_window_g3_ParamLimits

0xa29b,	// (0x00024d2a) popup_note2_wait_window_g3

0x0002,

0xfc9b,	// (0x0002a72a) popup_note2_wait_window_g_ParamLimits

0xfc9b,	// (0x0002a72a) popup_note2_wait_window_g

0xd079,	// (0x00027b08) popup_note2_wait_window_t1_ParamLimits

0xd079,	// (0x00027b08) popup_note2_wait_window_t1

0xd097,	// (0x00027b26) popup_note2_wait_window_t2_ParamLimits

0xd097,	// (0x00027b26) popup_note2_wait_window_t2

0xd0b5,	// (0x00027b44) popup_note2_wait_window_t3_ParamLimits

0xd0b5,	// (0x00027b44) popup_note2_wait_window_t3

0xd0c7,	// (0x00027b56) popup_note2_wait_window_t4_ParamLimits

0xd0c7,	// (0x00027b56) popup_note2_wait_window_t4

0x0003,

0xfca2,	// (0x0002a731) popup_note2_wait_window_t_ParamLimits

0xfca2,	// (0x0002a731) popup_note2_wait_window_t

0xd0d9,	// (0x00027b68) wait_bar2_pane_ParamLimits

0xd0d9,	// (0x00027b68) wait_bar2_pane

0xd0f1,	// (0x00027b80) popup_snote2_single_text_window_g1_ParamLimits

0xd0f1,	// (0x00027b80) popup_snote2_single_text_window_g1

0xd119,	// (0x00027ba8) popup_snote2_single_text_window_t1_ParamLimits

0xd119,	// (0x00027ba8) popup_snote2_single_text_window_t1

0xd165,	// (0x00027bf4) popup_snote2_single_text_window_t2_ParamLimits

0xd165,	// (0x00027bf4) popup_snote2_single_text_window_t2

0xd1b1,	// (0x00027c40) popup_snote2_single_text_window_t3_ParamLimits

0xd1b1,	// (0x00027c40) popup_snote2_single_text_window_t3

0xd1f2,	// (0x00027c81) popup_snote2_single_text_window_t4_ParamLimits

0xd1f2,	// (0x00027c81) popup_snote2_single_text_window_t4

0xd228,	// (0x00027cb7) popup_snote2_single_text_window_t5_ParamLimits

0xd228,	// (0x00027cb7) popup_snote2_single_text_window_t5

0x0004,

0xfcab,	// (0x0002a73a) popup_snote2_single_text_window_t_ParamLimits

0xfcab,	// (0x0002a73a) popup_snote2_single_text_window_t

0xd253,	// (0x00027ce2) popup_snote2_single_graphic_window_g1_ParamLimits

0xd253,	// (0x00027ce2) popup_snote2_single_graphic_window_g1

0xd27b,	// (0x00027d0a) popup_snote2_single_graphic_window_g2_ParamLimits

0xd27b,	// (0x00027d0a) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb6,	// (0x0002a745) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb6,	// (0x0002a745) popup_snote2_single_graphic_window_g

0xd2a3,	// (0x00027d32) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2a3,	// (0x00027d32) popup_snote2_single_graphic_window_t1

0xd2ef,	// (0x00027d7e) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2ef,	// (0x00027d7e) popup_snote2_single_graphic_window_t2

0xd1b1,	// (0x00027c40) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1b1,	// (0x00027c40) popup_snote2_single_graphic_window_t3

0xd1f2,	// (0x00027c81) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1f2,	// (0x00027c81) popup_snote2_single_graphic_window_t4

0xd228,	// (0x00027cb7) popup_snote2_single_graphic_window_t5_ParamLimits

0xd228,	// (0x00027cb7) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbb,	// (0x0002a74a) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbb,	// (0x0002a74a) popup_snote2_single_graphic_window_t

0xbd2b,	// (0x000267ba) clock_nsta_pane_cp2_t1

0xbd2b,	// (0x000267ba) clock_nsta_pane_cp2_t2

0x0001,

0xfadb,	// (0x0002a56a) clock_nsta_pane_cp2_t

0x52b0,	// (0x0001fd3f) form_field_data_wide_pane_g1_ParamLimits

0x80ee,	// (0x00022b7d) form_field_data_wide_pane_g2_ParamLimits

0x80ee,	// (0x00022b7d) form_field_data_wide_pane_g2

0x80fa,	// (0x00022b89) form_field_data_wide_pane_g3_ParamLimits

0x80fa,	// (0x00022b89) form_field_data_wide_pane_g3

0x0002,

0xf6bf,	// (0x0002a14e) form_field_data_wide_pane_g_ParamLimits

0xf6bf,	// (0x0002a14e) form_field_data_wide_pane_g

0xbc37,	// (0x000266c6) grid_touch_3_pane_ParamLimits

0xbc37,	// (0x000266c6) grid_touch_3_pane

0xd33b,	// (0x00027dca) cell_touch_3_pane_ParamLimits

0xd33b,	// (0x00027dca) cell_touch_3_pane

0xc244,	// (0x00026cd3) cell_touch_3_pane_g1

0xc244,	// (0x00026cd3) cell_touch_3_pane_g2

0x0001,

0xfb60,	// (0x0002a5ef) cell_touch_3_pane_g

0x7b8d,	// (0x0002261c) cont_query_data_pane

0x7b95,	// (0x00022624) cont_query_data_pane_cp1

0xd36e,	// (0x00027dfd) button_value_adjust_pane_cp7

0xd376,	// (0x00027e05) query_popup_pane_cp3

0x880e,	// (0x0002329d) bg_popup_sub_pane_cp22_ParamLimits

0x6382,	// (0x00020e11) navi_navi_volume_pane_cp2

0x639d,	// (0x00020e2c) popup_side_volume_key_window_g2

0x63ac,	// (0x00020e3b) popup_side_volume_key_window_g3

0x0002,

0xf751,	// (0x0002a1e0) popup_side_volume_key_window_g

0x63c9,	// (0x00020e58) popup_side_volume_key_window_t2

0x0001,

0xf758,	// (0x0002a1e7) popup_side_volume_key_window_t

0x8ad5,	// (0x00023564) popup_side_volume_key_window_ParamLimits

0x4ea8,	// (0x0001f937) list_double_graphic_pane_g4_ParamLimits

0x4ea8,	// (0x0001f937) list_double_graphic_pane_g4

0xb243,	// (0x00025cd2) list_single_2heading_msg_pane_ParamLimits

0xb243,	// (0x00025cd2) list_single_2heading_msg_pane

0x5b50,	// (0x000205df) list_single_2heading_msg_pane_g1_ParamLimits

0x5b50,	// (0x000205df) list_single_2heading_msg_pane_g1

0x4d05,	// (0x0001f794) list_single_2heading_msg_pane_g2_ParamLimits

0x4d05,	// (0x0001f794) list_single_2heading_msg_pane_g2

0x5b5c,	// (0x000205eb) list_single_2heading_msg_pane_g3_ParamLimits

0x5b5c,	// (0x000205eb) list_single_2heading_msg_pane_g3

0x5b68,	// (0x000205f7) list_single_2heading_msg_pane_g4_ParamLimits

0x5b68,	// (0x000205f7) list_single_2heading_msg_pane_g4

0x0003,

0xfcc6,	// (0x0002a755) list_single_2heading_msg_pane_g_ParamLimits

0xfcc6,	// (0x0002a755) list_single_2heading_msg_pane_g

0x5b80,	// (0x0002060f) list_single_2heading_msg_pane_t1_ParamLimits

0x5b80,	// (0x0002060f) list_single_2heading_msg_pane_t1

0x5ba8,	// (0x00020637) list_single_2heading_msg_pane_t2_ParamLimits

0x5ba8,	// (0x00020637) list_single_2heading_msg_pane_t2

0x5bdc,	// (0x0002066b) list_single_2heading_msg_pane_t3_ParamLimits

0x5bdc,	// (0x0002066b) list_single_2heading_msg_pane_t3

0x5c15,	// (0x000206a4) list_single_2heading_msg_pane_t4_ParamLimits

0x5c15,	// (0x000206a4) list_single_2heading_msg_pane_t4

0x0003,

0xfccf,	// (0x0002a75e) list_single_2heading_msg_pane_t_ParamLimits

0xfccf,	// (0x0002a75e) list_single_2heading_msg_pane_t

0x77a1,	// (0x00022230) title_pane_g4_ParamLimits

0x77a1,	// (0x00022230) title_pane_g4

0x618e,	// (0x00020c1d) title_pane_stacon_g3_ParamLimits

0x618e,	// (0x00020c1d) title_pane_stacon_g3

0xce97,	// (0x00027926) list_single_2graphic_im_pane_g4_ParamLimits

0xce97,	// (0x00027926) list_single_2graphic_im_pane_g4

0xaceb,	// (0x0002577a) popup_side_volume_key_window_cp

0xb561,	// (0x00025ff0) main_idle_act2_pane_t1

0x6757,	// (0x000211e6) toolbar_button_pane_g10

0x803d,	// (0x00022acc) popup_toolbar_window_cp1

0xbd1c,	// (0x000267ab) clock_nsta_pane_cp_t1

0xbd1c,	// (0x000267ab) clock_nsta_pane_cp_t2

0x0001,

0xfad6,	// (0x0002a565) clock_nsta_pane_cp_t

0x6382,	// (0x00020e11) navi_navi_volume_pane_cp2_ParamLimits

0x6391,	// (0x00020e20) popup_side_volume_key_window_g1_ParamLimits

0x639d,	// (0x00020e2c) popup_side_volume_key_window_g2_ParamLimits

0x63ac,	// (0x00020e3b) popup_side_volume_key_window_g3_ParamLimits

0xf751,	// (0x0002a1e0) popup_side_volume_key_window_g_ParamLimits

0x6b70,	// (0x000215ff) fep_hwr_aid_pane

0x13fb,	// (0x0001be8a) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2c2,	// (0x00026d51) fep_hwr_top_pane_g1_ParamLimits

0xc2d4,	// (0x00026d63) fep_hwr_top_pane_g2_ParamLimits

0x6c2b,	// (0x000216ba) fep_hwr_top_pane_g3_ParamLimits

0xfb2b,	// (0x0002a5ba) fep_hwr_top_pane_g_ParamLimits

0x6c40,	// (0x000216cf) fep_hwr_top_text_pane_ParamLimits

0xaaa0,	// (0x0002552f) aid_touch_tab_arrow_arrow_2

0xaaa9,	// (0x00025538) aid_touch_tab_arrow_left_2

0x6b84,	// (0x00021613) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6bbb,	// (0x0002164a) fep_hwr_prediction_pane

0xc42a,	// (0x00026eb9) fep_vkb_prediction_pane

0xc530,	// (0x00026fbf) fep_vkb_side_pane_g3_ParamLimits

0xc530,	// (0x00026fbf) fep_vkb_side_pane_g3

0xc4dc,	// (0x00026f6b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc98a,	// (0x00027419) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc997,	// (0x00027426) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd5,	// (0x0002a664) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd39d,	// (0x00027e2c) fep_hwr_prediction_pane_g1

0x6ee6,	// (0x00021975) fep_hwr_prediction_pane_g2

0x6eee,	// (0x0002197d) fep_hwr_prediction_pane_g3

0x6ef6,	// (0x00021985) fep_hwr_prediction_pane_g4

0x0003,

0xfcd8,	// (0x0002a767) fep_hwr_prediction_pane_g

0xd39d,	// (0x00027e2c) fep_vkb_prediction_pane_g1

0xd3a7,	// (0x00027e36) fep_vkb_prediction_pane_g2

0xd3af,	// (0x00027e3e) fep_vkb_prediction_pane_g3

0xd3b7,	// (0x00027e46) fep_vkb_prediction_pane_g4

0x0003,

0xfce1,	// (0x0002a770) fep_vkb_prediction_pane_g

0xb90f,	// (0x0002639e) slider_set_pane_g3

0xb923,	// (0x000263b2) slider_set_pane_g4

0xb93b,	// (0x000263ca) slider_set_pane_g5

0xb90f,	// (0x0002639e) slider_set_pane_g6

0x6a40,	// (0x000214cf) slider_set_pane_g7

0xb199,	// (0x00025c28) slider_form_pane_g3

0xb1a2,	// (0x00025c31) slider_form_pane_g4

0xb1aa,	// (0x00025c39) slider_form_pane_g5

0xb199,	// (0x00025c28) slider_form_pane_g6

0xb1b2,	// (0x00025c41) slider_form_pane_g7

0xb82f,	// (0x000262be) slider_set_pane_vc_g3

0xb838,	// (0x000262c7) slider_set_pane_vc_g4

0xb841,	// (0x000262d0) slider_set_pane_vc_g5

0xb82f,	// (0x000262be) slider_set_pane_vc_g6

0xb84a,	// (0x000262d9) slider_set_pane_vc_g7

0xb82f,	// (0x000262be) slider_form_pane_vc_g1

0xb838,	// (0x000262c7) slider_form_pane_vc_g2

0xb841,	// (0x000262d0) slider_form_pane_vc_g3

0xb82f,	// (0x000262be) slider_form_pane_vc_g4

0xba41,	// (0x000264d0) slider_form_pane_vc_g5

0x0004,

0xfabc,	// (0x0002a54b) slider_form_pane_vc_g

0x7759,	// (0x000221e8) main_idle_act3_pane

0xd3bf,	// (0x00027e4e) ai3_links_pane

0xd3c8,	// (0x00027e57) popup_ai3_data_window_ParamLimits

0xd3c8,	// (0x00027e57) popup_ai3_data_window

0x7759,	// (0x000221e8) grid_ai3_links_pane

0xd3e6,	// (0x00027e75) cell_ai3_links_pane_ParamLimits

0xd3e6,	// (0x00027e75) cell_ai3_links_pane

0xd400,	// (0x00027e8f) bg_popup_sub_pane_cp11

0xd40d,	// (0x00027e9c) cell_ai3_links_pane_g1

0x7759,	// (0x000221e8) bg_popup_sub_pane_cp12

0xd432,	// (0x00027ec1) heading_ai3_data_pane

0xd43a,	// (0x00027ec9) list_ai3_gene_pane

0xd446,	// (0x00027ed5) popup_ai3_data_window_g1

0xd44e,	// (0x00027edd) heading_ai3_data_pane_g1

0xd456,	// (0x00027ee5) heading_ai3_data_pane_t1

0xd464,	// (0x00027ef3) list_double_ai3_gene_pane_ParamLimits

0xd464,	// (0x00027ef3) list_double_ai3_gene_pane

0xd471,	// (0x00027f00) list_single_ai3_gene_pane_ParamLimits

0xd471,	// (0x00027f00) list_single_ai3_gene_pane

0xc209,	// (0x00026c98) list_highlight_pane_cp7_ParamLimits

0xc209,	// (0x00026c98) list_highlight_pane_cp7

0xd47e,	// (0x00027f0d) list_single_a13_gene_pane_t1_ParamLimits

0xd47e,	// (0x00027f0d) list_single_a13_gene_pane_t1

0xd495,	// (0x00027f24) list_single_ai3_gene_pane_g1

0xd49e,	// (0x00027f2d) list_single_ai3_gene_pane_g2

0x0001,

0xfcea,	// (0x0002a779) list_single_ai3_gene_pane_g

0xd4a6,	// (0x00027f35) list_double_ai3_gene_pane_g1_ParamLimits

0xd4a6,	// (0x00027f35) list_double_ai3_gene_pane_g1

0xd4b2,	// (0x00027f41) list_double_ai3_gene_pane_t1_ParamLimits

0xd4b2,	// (0x00027f41) list_double_ai3_gene_pane_t1

0xd4ce,	// (0x00027f5d) list_double_ai3_gene_pane_t2_ParamLimits

0xd4ce,	// (0x00027f5d) list_double_ai3_gene_pane_t2

0xd4e3,	// (0x00027f72) list_double_ai3_gene_pane_t3_ParamLimits

0xd4e3,	// (0x00027f72) list_double_ai3_gene_pane_t3

0x0002,

0xfcef,	// (0x0002a77e) list_double_ai3_gene_pane_t_ParamLimits

0xfcef,	// (0x0002a77e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5b46,	// (0x000205d5) aid_size_min_col_2

0xd387,	// (0x00027e16) aid_size_min_msg_ParamLimits

0xd387,	// (0x00027e16) aid_size_min_msg

0xc63c,	// (0x000270cb) fep_vkb_top_text_pane_g2_ParamLimits

0xc63c,	// (0x000270cb) fep_vkb_top_text_pane_g2

0x0001,

0xfb5b,	// (0x0002a5ea) fep_vkb_top_text_pane_g_ParamLimits

0xfb5b,	// (0x0002a5ea) fep_vkb_top_text_pane_g

0x7759,	// (0x000221e8) main_hc_apps_shell_pane

0xd500,	// (0x00027f8f) grid_hc_apps_pane_ParamLimits

0xd500,	// (0x00027f8f) grid_hc_apps_pane

0xd50f,	// (0x00027f9e) list_hc_apps_pane

0xd517,	// (0x00027fa6) scroll_pane_cp37_ParamLimits

0xd517,	// (0x00027fa6) scroll_pane_cp37

0xd523,	// (0x00027fb2) cell_hc_apps_pane_ParamLimits

0xd523,	// (0x00027fb2) cell_hc_apps_pane

0xd5db,	// (0x0002806a) cell_hc_apps_pane_g1_ParamLimits

0xd5db,	// (0x0002806a) cell_hc_apps_pane_g1

0xd60c,	// (0x0002809b) cell_hc_apps_pane_g2_ParamLimits

0xd60c,	// (0x0002809b) cell_hc_apps_pane_g2

0xd628,	// (0x000280b7) cell_hc_apps_pane_g3_ParamLimits

0xd628,	// (0x000280b7) cell_hc_apps_pane_g3

0x0002,

0xfcf6,	// (0x0002a785) cell_hc_apps_pane_g_ParamLimits

0xfcf6,	// (0x0002a785) cell_hc_apps_pane_g

0xd64a,	// (0x000280d9) cell_hc_apps_pane_t1_ParamLimits

0xd64a,	// (0x000280d9) cell_hc_apps_pane_t1

0x7ad7,	// (0x00022566) grid_highlight_pane_cp10_ParamLimits

0x7ad7,	// (0x00022566) grid_highlight_pane_cp10

0xd68a,	// (0x00028119) list_single_hc_apps_pane_ParamLimits

0xd68a,	// (0x00028119) list_single_hc_apps_pane

0xd6c9,	// (0x00028158) list_single_hc_apps_pane_g1

0x5c3a,	// (0x000206c9) list_single_hc_apps_pane_g2

0x0001,

0xfcfd,	// (0x0002a78c) list_single_hc_apps_pane_g

0x5c53,	// (0x000206e2) list_single_hc_apps_pane_g2_copy1

0x5c6f,	// (0x000206fe) list_single_hc_apps_pane_t1

0x784d,	// (0x000222dc) bg_set_opt_pane_cp_ParamLimits

0x60b8,	// (0x00020b47) setting_slider_pane_t1_ParamLimits

0x60ce,	// (0x00020b5d) setting_slider_pane_t2_ParamLimits

0x60e8,	// (0x00020b77) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0002a031) setting_slider_pane_t_ParamLimits

0x6100,	// (0x00020b8f) slider_set_pane_ParamLimits

0x6633,	// (0x000210c2) control_pane_g5_ParamLimits

0x6633,	// (0x000210c2) control_pane_g5

0xafba,	// (0x00025a49) slider_set_pane_g1_ParamLimits

0x6a34,	// (0x000214c3) slider_set_pane_g2_ParamLimits

0xb90f,	// (0x0002639e) slider_set_pane_g3_ParamLimits

0xb923,	// (0x000263b2) slider_set_pane_g4_ParamLimits

0xb93b,	// (0x000263ca) slider_set_pane_g5_ParamLimits

0xb90f,	// (0x0002639e) slider_set_pane_g6_ParamLimits

0x6a40,	// (0x000214cf) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0002a42c) slider_set_pane_g_ParamLimits

0x8bba,	// (0x00023649) navi_icon_text_pane_ParamLimits

0x970d,	// (0x0002419c) aid_fill_nsta_2_ParamLimits

0x974e,	// (0x000241dd) aid_touch_tab_arrow_left_ParamLimits

0x975d,	// (0x000241ec) aid_touch_tab_arrow_right_ParamLimits

0x97ca,	// (0x00024259) clock_nsta_pane_ParamLimits

0xaa7c,	// (0x0002550b) navi_icon_pane_g1_ParamLimits

0xaa8b,	// (0x0002551a) navi_text_pane_t1_ParamLimits

0xbe39,	// (0x000268c8) navi_icon_text_pane_g1_ParamLimits

0xbe48,	// (0x000268d7) navi_icon_text_pane_t1_ParamLimits

0xd6c9,	// (0x00028158) list_single_hc_apps_pane_g1_ParamLimits

0x5c3a,	// (0x000206c9) list_single_hc_apps_pane_g2_ParamLimits

0xfcfd,	// (0x0002a78c) list_single_hc_apps_pane_g_ParamLimits

0x5c53,	// (0x000206e2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5c6f,	// (0x000206fe) list_single_hc_apps_pane_t1_ParamLimits

0x5fc2,	// (0x00020a51) popup_toolbar2_fixed_window_ParamLimits

0x5fc2,	// (0x00020a51) popup_toolbar2_fixed_window

0x9611,	// (0x000240a0) popup_toolbar2_float_window

0x7759,	// (0x000221e8) bg_popup_sub_pane_cp27

0xd6e2,	// (0x00028171) grid_toolbar2_float_pane

0x7759,	// (0x000221e8) bg_popup_sub_pane_cp26

0xd6e2,	// (0x00028171) grid_toolbar2_fixed_pane

0xd6ea,	// (0x00028179) cell_toolbar2_fixed_pane_ParamLimits

0xd6ea,	// (0x00028179) cell_toolbar2_fixed_pane

0xd6fa,	// (0x00028189) cell_toolbar2_fixed_pane_g1

0xd703,	// (0x00028192) toolbar2_fixed_button_pane

0x9c00,	// (0x0002468f) toolbar2_fixed_button_pane_g1

0x9c08,	// (0x00024697) toolbar2_fixed_button_pane_g2

0x9c10,	// (0x0002469f) toolbar2_fixed_button_pane_g3

0x9c18,	// (0x000246a7) toolbar2_fixed_button_pane_g4

0x9c20,	// (0x000246af) toolbar2_fixed_button_pane_g5

0x9c28,	// (0x000246b7) toolbar2_fixed_button_pane_g6

0x9c30,	// (0x000246bf) toolbar2_fixed_button_pane_g7

0x9c38,	// (0x000246c7) toolbar2_fixed_button_pane_g8

0x9c40,	// (0x000246cf) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0002a32e) toolbar2_fixed_button_pane_g

0xd70b,	// (0x0002819a) cell_toolbar2_float_pane_ParamLimits

0xd70b,	// (0x0002819a) cell_toolbar2_float_pane

0xd71c,	// (0x000281ab) cell_toolbar2_float_pane_g1

0xd703,	// (0x00028192) toolbar2_fixed_button_pane_cp

0xc398,	// (0x00026e27) fep_vkb_accented_list_pane_ParamLimits

0xc398,	// (0x00026e27) fep_vkb_accented_list_pane

0x6da2,	// (0x00021831) bg_popup_fep_shadow_pane_g9

0x8d3e,	// (0x000237cd) bg_popup_fep_shadow_pane_cp3

0x823d,	// (0x00022ccc) list_accented_list_pane

0xd725,	// (0x000281b4) list_single_accented_list_pane_ParamLimits

0xd725,	// (0x000281b4) list_single_accented_list_pane

0x8d3e,	// (0x000237cd) list_highlight_pane_cp10

0xd736,	// (0x000281c5) list_single_accented_list_pane_t1

0x9557,	// (0x00023fe6) popup_slider_window_ParamLimits

0x9557,	// (0x00023fe6) popup_slider_window

0xd37e,	// (0x00027e0d) aid_indentation_list_msg

0xd802,	// (0x00028291) bg_popup_window_pane_cp19

0xd870,	// (0x000282ff) popup_slider_window_g1

0xd88c,	// (0x0002831b) popup_slider_window_g2

0xd8a8,	// (0x00028337) popup_slider_window_g3

0x0005,

0xfd02,	// (0x0002a791) popup_slider_window_g

0xd904,	// (0x00028393) popup_slider_window_t1

0xd978,	// (0x00028407) small_volume_slider_vertical_pane

0xc244,	// (0x00026cd3) small_volume_slider_vertical_pane_g1

0xc244,	// (0x00026cd3) small_volume_slider_vertical_pane_g2

0xd994,	// (0x00028423) small_volume_slider_vertical_pane_g3

0x0002,

0xfd14,	// (0x0002a7a3) small_volume_slider_vertical_pane_g

0x5d7a,	// (0x00020809) area_side_right_pane_ParamLimits

0x5d7a,	// (0x00020809) area_side_right_pane

0x6efe,	// (0x0002198d) aid_size_side_button_ParamLimits

0x6efe,	// (0x0002198d) aid_size_side_button

0x6f12,	// (0x000219a1) grid_sctrl_middle_pane_ParamLimits

0x6f12,	// (0x000219a1) grid_sctrl_middle_pane

0x6f32,	// (0x000219c1) sctrl_sk_bottom_pane

0x6f43,	// (0x000219d2) sctrl_sk_top_pane

0x6f55,	// (0x000219e4) aid_touch_sctrl_top

0x7ad7,	// (0x00022566) bg_sctrl_sk_pane_ParamLimits

0x7ad7,	// (0x00022566) bg_sctrl_sk_pane

0x6f62,	// (0x000219f1) sctrl_sk_top_pane_g1

0x6f6f,	// (0x000219fe) sctrl_sk_top_pane_t1

0x6f55,	// (0x000219e4) aid_touch_sctrl_bottom

0x7ad7,	// (0x00022566) bg_sctrl_sk_pane_cp_ParamLimits

0x7ad7,	// (0x00022566) bg_sctrl_sk_pane_cp

0x6f8a,	// (0x00021a19) sctrl_sk_bottom_pane_g1

0x6f6f,	// (0x000219fe) sctrl_sk_bottom_pane_t1

0x6f93,	// (0x00021a22) cell_sctrl_middle_pane_ParamLimits

0x6f93,	// (0x00021a22) cell_sctrl_middle_pane

0x6fb0,	// (0x00021a3f) aid_touch_sctrl_middle_ParamLimits

0x6fb0,	// (0x00021a3f) aid_touch_sctrl_middle

0x80d4,	// (0x00022b63) bg_sctrl_middle_pane_ParamLimits

0x80d4,	// (0x00022b63) bg_sctrl_middle_pane

0xc4dc,	// (0x00026f6b) cell_sctrl_middle_pane_g1_ParamLimits

0xc4dc,	// (0x00026f6b) cell_sctrl_middle_pane_g1

0x6fc2,	// (0x00021a51) cell_sctrl_middle_pane_g2_ParamLimits

0x6fc2,	// (0x00021a51) cell_sctrl_middle_pane_g2

0x0001,

0xfd20,	// (0x0002a7af) cell_sctrl_middle_pane_g_ParamLimits

0xfd20,	// (0x0002a7af) cell_sctrl_middle_pane_g

0x9c00,	// (0x0002468f) bg_sctrl_middle_pane_g1

0x9c08,	// (0x00024697) bg_sctrl_middle_pane_g2

0x9c10,	// (0x0002469f) bg_sctrl_middle_pane_g3

0x9c18,	// (0x000246a7) bg_sctrl_middle_pane_g4

0x9c20,	// (0x000246af) bg_sctrl_middle_pane_g5

0x9c28,	// (0x000246b7) bg_sctrl_middle_pane_g6

0x9c30,	// (0x000246bf) bg_sctrl_middle_pane_g7

0x9c38,	// (0x000246c7) bg_sctrl_middle_pane_g8

0x0007,

0xfd25,	// (0x0002a7b4) bg_sctrl_middle_pane_g

0x9c40,	// (0x000246cf) bg_sctrl_middle_pane_g8_copy1

0x9c00,	// (0x0002468f) bg_sctrl_sk_pane_g1

0x9c08,	// (0x00024697) bg_sctrl_sk_pane_g2

0x9c10,	// (0x0002469f) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0002a32e) bg_sctrl_sk_pane_g

0x8003,	// (0x00022a92) aid_size_touch_scroll_bar

0x9c18,	// (0x000246a7) bg_sctrl_sk_pane_g4

0x9c20,	// (0x000246af) bg_sctrl_sk_pane_g5

0x9c28,	// (0x000246b7) bg_sctrl_sk_pane_g6

0x9c30,	// (0x000246bf) bg_sctrl_sk_pane_g7

0x9c38,	// (0x000246c7) bg_sctrl_sk_pane_g8

0x9c40,	// (0x000246cf) bg_sctrl_sk_pane_g9

0x916e,	// (0x00023bfd) popup_fep_china_hwr2_fs_candidate_window

0x9178,	// (0x00023c07) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9178,	// (0x00023c07) popup_fep_china_hwr2_fs_control_window

0xc4dc,	// (0x00026f6b) sctrl_sk_top_pane_g2

0x0001,

0xfd1b,	// (0x0002a7aa) sctrl_sk_top_pane_g

0xd99d,	// (0x0002842c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd99d,	// (0x0002842c) aid_fep_china_hwr2_fs_cell

0xd9b0,	// (0x0002843f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9b0,	// (0x0002843f) bg_popup_fep_shadow_pane_cp4

0xd9c9,	// (0x00028458) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9c9,	// (0x00028458) bg_popup_fep_shadow_pane_cp5

0xd9db,	// (0x0002846a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9db,	// (0x0002846a) popup_fep_china_hwr2_fs_control_bar_grid

0xd9eb,	// (0x0002847a) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9f3,	// (0x00028482) aid_fep_china_hwr2_fs_candi_cell

0x7759,	// (0x000221e8) bg_popup_fep_shadow_pane_cp6

0xd9fd,	// (0x0002848c) popup_fep_china_hwr2_fs_candidate_grid

0xda07,	// (0x00028496) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda07,	// (0x00028496) cell_fep_china_hwr2_fs_funtion_grid

0xc244,	// (0x00026cd3) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda1f,	// (0x000284ae) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda1f,	// (0x000284ae) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda2d,	// (0x000284bc) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda2d,	// (0x000284bc) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd36,	// (0x0002a7c5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd36,	// (0x0002a7c5) cell_fep_china_hwr2_fs_funtion_grid_g

0xda43,	// (0x000284d2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda43,	// (0x000284d2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda58,	// (0x000284e7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda58,	// (0x000284e7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3b,	// (0x0002a7ca) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3b,	// (0x0002a7ca) cell_fep_china_hwr2_fs_funtion_grid_t

0xda74,	// (0x00028503) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda7c,	// (0x0002850b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda84,	// (0x00028513) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd40,	// (0x0002a7cf) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda8c,	// (0x0002851b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda8c,	// (0x0002851b) cell_fep_china_hwr2_fs_candidate_grid

0xdaab,	// (0x0002853a) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdab3,	// (0x00028542) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc244,	// (0x00026cd3) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc244,	// (0x00026cd3) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb60,	// (0x0002a5ef) cell_fep_china_hwr2_fs_candidate_grid_g

0xdabb,	// (0x0002854a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x97dd,	// (0x0002426c) clock_nsta_pane_cp_24_ParamLimits

0x97dd,	// (0x0002426c) clock_nsta_pane_cp_24

0x985d,	// (0x000242ec) indicator_nsta_pane_cp_24_ParamLimits

0x985d,	// (0x000242ec) indicator_nsta_pane_cp_24

0xa8f8,	// (0x00025387) heading_pane_g1

0x0001,

0xf904,	// (0x0002a393) heading_pane_g

0xb3a8,	// (0x00025e37) grid_sct_catagory_button_pane

0xb3da,	// (0x00025e69) scroll_pane_cp5_ParamLimits

0xbe8d,	// (0x0002691c) button_value_adjust_pane_cp5_ParamLimits

0xbe8d,	// (0x0002691c) button_value_adjust_pane_cp5

0xbf72,	// (0x00026a01) form2_midp_time_pane_ParamLimits

0xdac9,	// (0x00028558) cell_sct_catagory_button_pane_ParamLimits

0xdac9,	// (0x00028558) cell_sct_catagory_button_pane

0xc209,	// (0x00026c98) bg_button_pane_cp01_ParamLimits

0xc209,	// (0x00026c98) bg_button_pane_cp01

0xc244,	// (0x00026cd3) cell_sct_catagory_button_pane_g1

0x9598,	// (0x00024027) popup_tb_extension_window

0xdadb,	// (0x0002856a) aid_size_cell_ext_ParamLimits

0xdadb,	// (0x0002856a) aid_size_cell_ext

0x7ad7,	// (0x00022566) bg_tb_trans_pane_cp1_ParamLimits

0x7ad7,	// (0x00022566) bg_tb_trans_pane_cp1

0xdafb,	// (0x0002858a) grid_tb_ext_pane_ParamLimits

0xdafb,	// (0x0002858a) grid_tb_ext_pane

0xdb2b,	// (0x000285ba) cell_tb_ext_pane_ParamLimits

0xdb2b,	// (0x000285ba) cell_tb_ext_pane

0xdb42,	// (0x000285d1) cell_tb_ext_pane_g1_ParamLimits

0xdb42,	// (0x000285d1) cell_tb_ext_pane_g1

0xdb5f,	// (0x000285ee) cell_tb_ext_pane_t1

0x7ad7,	// (0x00022566) list_highlight_pane_cp11_ParamLimits

0x7ad7,	// (0x00022566) list_highlight_pane_cp11

0x5fe1,	// (0x00020a70) popup_uni_indicator_window_ParamLimits

0x5fe1,	// (0x00020a70) popup_uni_indicator_window

0x80d4,	// (0x00022b63) bg_popup_sub_pane_cp14

0xdb7a,	// (0x00028609) list_uniindi_pane

0xdb86,	// (0x00028615) uniindi_top_pane

0x7ad7,	// (0x00022566) bg_uniindi_top_pane

0xdba7,	// (0x00028636) uniindi_top_pane_g1

0xdbbd,	// (0x0002864c) uniindi_top_pane_g2

0x0003,

0xfd47,	// (0x0002a7d6) uniindi_top_pane_g

0xdbe7,	// (0x00028676) uniindi_top_pane_t1

0xdc13,	// (0x000286a2) list_single_uniindi_pane_ParamLimits

0xdc13,	// (0x000286a2) list_single_uniindi_pane

0xc244,	// (0x00026cd3) bg_uniindi_top_pane_g1

0xdc25,	// (0x000286b4) list_single_uniindi_pane_g1

0xdc38,	// (0x000286c7) list_single_uniindi_pane_t1

0x7759,	// (0x000221e8) control_bg_pane

0xdc5d,	// (0x000286ec) bg_sctrl_sk_pane_cp1

0xdc66,	// (0x000286f5) bg_sctrl_sk_pane_cp2

0xdc6f,	// (0x000286fe) control_bg_pane_g1

0xdc78,	// (0x00028707) control_bg_pane_g2

0x0001,

0xfd50,	// (0x0002a7df) control_bg_pane_g

0xbce1,	// (0x00026770) cell_indicator_nsta_pane_g1_ParamLimits

0xbcef,	// (0x0002677e) cell_indicator_nsta_pane_g2_ParamLimits

0xfad1,	// (0x0002a560) cell_indicator_nsta_pane_g_ParamLimits

0x5903,	// (0x00020392) form2_midp_time_pane_t1_ParamLimits

0x7e45,	// (0x000228d4) main_idle_act4_pane_ParamLimits

0x7e45,	// (0x000228d4) main_idle_act4_pane

0x9598,	// (0x00024027) popup_tb_extension_window_ParamLimits

0xdb1d,	// (0x000285ac) tb_ext_find_pane_ParamLimits

0xdb1d,	// (0x000285ac) tb_ext_find_pane

0xdc81,	// (0x00028710) ai_gene_pane_1_cp1

0x8e87,	// (0x00023916) ai_gene_pane_2_cp1

0xdc89,	// (0x00028718) list_single_idle_plugin_calendar_pane

0xdc92,	// (0x00028721) list_single_idle_plugin_notification_pane

0xdc9b,	// (0x0002872a) list_single_idle_plugin_player_pane

0xdca4,	// (0x00028733) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdca4,	// (0x00028733) list_single_idle_plugin_shortcut_pane

0xdcc6,	// (0x00028755) main_idle_act4_pane_t1

0xdcd8,	// (0x00028767) main_idle_act4_pane_t2

0x0001,

0xfd55,	// (0x0002a7e4) main_idle_act4_pane_t

0xdcea,	// (0x00028779) middle_sk_idle_act4_pane_ParamLimits

0xdcea,	// (0x00028779) middle_sk_idle_act4_pane

0xdd00,	// (0x0002878f) popup_clock_digital_analogue_window_cp2

0xdd1a,	// (0x000287a9) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd1a,	// (0x000287a9) shortcut_wheel_idle_act4_pane

0xc244,	// (0x00026cd3) shortcut_wheel_idle_act4_pane_g1

0xc244,	// (0x00026cd3) shortcut_wheel_idle_act4_pane_g2

0xc244,	// (0x00026cd3) shortcut_wheel_idle_act4_pane_g3

0xc244,	// (0x00026cd3) shortcut_wheel_idle_act4_pane_g4

0xc244,	// (0x00026cd3) shortcut_wheel_idle_act4_pane_g5

0xdd2e,	// (0x000287bd) shortcut_wheel_idle_act4_pane_g6

0xdd36,	// (0x000287c5) shortcut_wheel_idle_act4_pane_g7

0xdd3e,	// (0x000287cd) shortcut_wheel_idle_act4_pane_g8

0xdd46,	// (0x000287d5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5a,	// (0x0002a7e9) shortcut_wheel_idle_act4_pane_g

0xc4dc,	// (0x00026f6b) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4dc,	// (0x00026f6b) middle_sk_idle_act4_pane_g1

0xddaa,	// (0x00028839) middle_sk_idle_act4_pane_g2_ParamLimits

0xddaa,	// (0x00028839) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7d,	// (0x0002a80c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7d,	// (0x0002a80c) middle_sk_idle_act4_pane_g

0xddb6,	// (0x00028845) middle_sk_idle_act4_pane_t1_ParamLimits

0xddb6,	// (0x00028845) middle_sk_idle_act4_pane_t1

0xddd3,	// (0x00028862) grid_ai_shortcut_pane_ParamLimits

0xddd3,	// (0x00028862) grid_ai_shortcut_pane

0xddec,	// (0x0002887b) list_highlight_pane_cp16_ParamLimits

0xddec,	// (0x0002887b) list_highlight_pane_cp16

0xddf9,	// (0x00028888) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddf9,	// (0x00028888) list_single_idle_plugin_shortcut_pane_g1

0xde05,	// (0x00028894) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde05,	// (0x00028894) list_single_idle_plugin_shortcut_pane_g2

0xde1f,	// (0x000288ae) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde1f,	// (0x000288ae) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd82,	// (0x0002a811) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd82,	// (0x0002a811) list_single_idle_plugin_shortcut_pane_g

0xde32,	// (0x000288c1) cell_ai_shortcut_pane_ParamLimits

0xde32,	// (0x000288c1) cell_ai_shortcut_pane

0xde55,	// (0x000288e4) cell_ai_shortcut_pane_g1_ParamLimits

0xde55,	// (0x000288e4) cell_ai_shortcut_pane_g1

0xdc81,	// (0x00028710) ai_gene_pane_1_cp2

0xde77,	// (0x00028906) ai_gene_pane_2_cp2

0xde7f,	// (0x0002890e) list_highlight_pane_cp15

0xde88,	// (0x00028917) list_single_idle_plugin_calendar_pane_g1

0xde7f,	// (0x0002890e) list_highlight_pane_cp17

0xde90,	// (0x0002891f) list_single_idle_plugin_calendar_pane_g1_copy1

0xde98,	// (0x00028927) list_single_idle_plugin_player_pane_g1

0xb60f,	// (0x0002609e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd89,	// (0x0002a818) list_single_idle_plugin_player_pane_g

0xdea0,	// (0x0002892f) list_single_idle_plugin_player_pane_t1

0xdeae,	// (0x0002893d) list_single_idle_plugin_player_pane_t2

0xdebc,	// (0x0002894b) list_single_idle_plugin_player_pane_t3

0xdeca,	// (0x00028959) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8e,	// (0x0002a81d) list_single_idle_plugin_player_pane_t

0xded8,	// (0x00028967) wait_bar_pane_cp15

0xdee0,	// (0x0002896f) grid_ai_notification_pane

0xb60f,	// (0x0002609e) list_single_idle_plugin_notification_pane_g1

0xdee9,	// (0x00028978) cell_ai_notification_pane_ParamLimits

0xdee9,	// (0x00028978) cell_ai_notification_pane

0xdef6,	// (0x00028985) cell_ai_notification_pane_g1

0xdefe,	// (0x0002898d) cell_ai_notification_pane_t1

0xdf0c,	// (0x0002899b) tb_ext_find_button_pane

0xdf14,	// (0x000289a3) tb_ext_find_pane_g1

0xdf1c,	// (0x000289ab) tb_ext_find_pane_t1

0x8744,	// (0x000231d3) tb_ext_find_button_pane_g1

0xdf2a,	// (0x000289b9) tb_ext_find_button_pane_g2

0x0001,

0xfd97,	// (0x0002a826) tb_ext_find_button_pane_g

0xdcc6,	// (0x00028755) main_idle_act4_pane_t1_ParamLimits

0xdcd8,	// (0x00028767) main_idle_act4_pane_t2_ParamLimits

0xfd55,	// (0x0002a7e4) main_idle_act4_pane_t_ParamLimits

0xdd00,	// (0x0002878f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd0e,	// (0x0002879d) sat_plugin_idle_act4_pane_ParamLimits

0xdd0e,	// (0x0002879d) sat_plugin_idle_act4_pane

0xdf33,	// (0x000289c2) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf33,	// (0x000289c2) sat_plugin_idle_act4_pane_t1

0xdf46,	// (0x000289d5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf46,	// (0x000289d5) sat_plugin_idle_act4_pane_t2

0xdf59,	// (0x000289e8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf59,	// (0x000289e8) sat_plugin_idle_act4_pane_t3

0xdf6c,	// (0x000289fb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf6c,	// (0x000289fb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9c,	// (0x0002a82b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9c,	// (0x0002a82b) sat_plugin_idle_act4_pane_t

0x5f12,	// (0x000209a1) popup_battery_window_ParamLimits

0x5f12,	// (0x000209a1) popup_battery_window

0x7ad7,	// (0x00022566) bg_popup_sub_pane_cp25_ParamLimits

0x7ad7,	// (0x00022566) bg_popup_sub_pane_cp25

0xdf7f,	// (0x00028a0e) popup_battery_window_g1_ParamLimits

0xdf7f,	// (0x00028a0e) popup_battery_window_g1

0xdf8b,	// (0x00028a1a) popup_battery_window_t1_ParamLimits

0xdf8b,	// (0x00028a1a) popup_battery_window_t1

0xdf9d,	// (0x00028a2c) popup_battery_window_t2_ParamLimits

0xdf9d,	// (0x00028a2c) popup_battery_window_t2

0x0001,

0xfda5,	// (0x0002a834) popup_battery_window_t_ParamLimits

0xfda5,	// (0x0002a834) popup_battery_window_t

0x8d52,	// (0x000237e1) midp_canvas_pane_ParamLimits

0x8dc9,	// (0x00023858) midp_keypad_pane_ParamLimits

0x8dc9,	// (0x00023858) midp_keypad_pane

0x90c4,	// (0x00023b53) main_midp_pane_ParamLimits

0xbd3a,	// (0x000267c9) signal_pane_g2_cp_ParamLimits

0xdfba,	// (0x00028a49) aid_size_cell_midp_keypad_ParamLimits

0xdfba,	// (0x00028a49) aid_size_cell_midp_keypad

0xdfd4,	// (0x00028a63) midp_keyp_game_grid_pane_ParamLimits

0xdfd4,	// (0x00028a63) midp_keyp_game_grid_pane

0xdff4,	// (0x00028a83) midp_keyp_rocker_pane_ParamLimits

0xdff4,	// (0x00028a83) midp_keyp_rocker_pane

0xe023,	// (0x00028ab2) midp_keyp_sk_left_pane_ParamLimits

0xe023,	// (0x00028ab2) midp_keyp_sk_left_pane

0xe07d,	// (0x00028b0c) midp_keyp_sk_right_pane_ParamLimits

0xe07d,	// (0x00028b0c) midp_keyp_sk_right_pane

0x7759,	// (0x000221e8) bg_button_pane_cp03

0xe0d7,	// (0x00028b66) midp_keyp_sk_left_pane_g1

0x7759,	// (0x000221e8) bg_button_pane_cp04

0xe0d7,	// (0x00028b66) midp_keyp_sk_right_pane_g1

0xc244,	// (0x00026cd3) midp_keyp_rocker_pane_g1

0xe0e0,	// (0x00028b6f) keyp_game_cell_pane_ParamLimits

0xe0e0,	// (0x00028b6f) keyp_game_cell_pane

0x7759,	// (0x000221e8) bg_button_pane_cp02

0xe0f3,	// (0x00028b82) keyp_game_cell_pane_g1

0x5f5c,	// (0x000209eb) popup_fep_vkb2_window_ParamLimits

0x5f5c,	// (0x000209eb) popup_fep_vkb2_window

0x6fe4,	// (0x00021a73) aid_size_cell_vkb2_ParamLimits

0x6fe4,	// (0x00021a73) aid_size_cell_vkb2

0x7030,	// (0x00021abf) popup_fep_vkb2_window_g1_ParamLimits

0x7030,	// (0x00021abf) popup_fep_vkb2_window_g1

0x7078,	// (0x00021b07) vkb2_area_bottom_pane_ParamLimits

0x7078,	// (0x00021b07) vkb2_area_bottom_pane

0x70cc,	// (0x00021b5b) vkb2_area_keypad_pane_ParamLimits

0x70cc,	// (0x00021b5b) vkb2_area_keypad_pane

0x7112,	// (0x00021ba1) vkb2_area_top_pane_ParamLimits

0x7112,	// (0x00021ba1) vkb2_area_top_pane

0x718c,	// (0x00021c1b) vkb2_top_entry_pane_ParamLimits

0x718c,	// (0x00021c1b) vkb2_top_entry_pane

0x71b6,	// (0x00021c45) vkb2_top_grid_left_pane_ParamLimits

0x71b6,	// (0x00021c45) vkb2_top_grid_left_pane

0x71d4,	// (0x00021c63) vkb2_top_grid_right_pane_ParamLimits

0x71d4,	// (0x00021c63) vkb2_top_grid_right_pane

0x71f2,	// (0x00021c81) vkb2_cell_keypad_pane_ParamLimits

0x71f2,	// (0x00021c81) vkb2_cell_keypad_pane

0x72a8,	// (0x00021d37) vkb2_area_bottom_grid_pane_ParamLimits

0x72a8,	// (0x00021d37) vkb2_area_bottom_grid_pane

0x72ce,	// (0x00021d5d) vkb2_area_bottom_pane_g1_ParamLimits

0x72ce,	// (0x00021d5d) vkb2_area_bottom_pane_g1

0x72f2,	// (0x00021d81) vkb2_area_bottom_pane_g2_ParamLimits

0x72f2,	// (0x00021d81) vkb2_area_bottom_pane_g2

0x7320,	// (0x00021daf) vkb2_area_bottom_pane_g3_ParamLimits

0x7320,	// (0x00021daf) vkb2_area_bottom_pane_g3

0x0002,

0xfdaa,	// (0x0002a839) vkb2_area_bottom_pane_g_ParamLimits

0xfdaa,	// (0x0002a839) vkb2_area_bottom_pane_g

0x7381,	// (0x00021e10) vkb2_top_cell_left_pane_ParamLimits

0x7381,	// (0x00021e10) vkb2_top_cell_left_pane

0xe104,	// (0x00028b93) vkb2_top_entry_pane_g1_ParamLimits

0xe104,	// (0x00028b93) vkb2_top_entry_pane_g1

0xe112,	// (0x00028ba1) vkb2_top_entry_pane_t1_ParamLimits

0xe112,	// (0x00028ba1) vkb2_top_entry_pane_t1

0xe12a,	// (0x00028bb9) vkb2_top_entry_pane_t2_ParamLimits

0xe12a,	// (0x00028bb9) vkb2_top_entry_pane_t2

0xe142,	// (0x00028bd1) vkb2_top_entry_pane_t3_ParamLimits

0xe142,	// (0x00028bd1) vkb2_top_entry_pane_t3

0x0002,

0xfdb1,	// (0x0002a840) vkb2_top_entry_pane_t_ParamLimits

0xfdb1,	// (0x0002a840) vkb2_top_entry_pane_t

0x73ce,	// (0x00021e5d) vkb2_top_grid_right_pane_g1_ParamLimits

0x73ce,	// (0x00021e5d) vkb2_top_grid_right_pane_g1

0x73e4,	// (0x00021e73) vkb2_top_grid_right_pane_g2_ParamLimits

0x73e4,	// (0x00021e73) vkb2_top_grid_right_pane_g2

0x73fc,	// (0x00021e8b) vkb2_top_grid_right_pane_g3_ParamLimits

0x73fc,	// (0x00021e8b) vkb2_top_grid_right_pane_g3

0x7414,	// (0x00021ea3) vkb2_top_grid_right_pane_g4_ParamLimits

0x7414,	// (0x00021ea3) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb8,	// (0x0002a847) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb8,	// (0x0002a847) vkb2_top_grid_right_pane_g

0x742a,	// (0x00021eb9) vkb2_top_cell_left_pane_g1

0x7441,	// (0x00021ed0) vkb2_cell_keypad_pane_g1_ParamLimits

0x7441,	// (0x00021ed0) vkb2_cell_keypad_pane_g1

0xe158,	// (0x00028be7) vkb2_cell_keypad_pane_t1_ParamLimits

0xe158,	// (0x00028be7) vkb2_cell_keypad_pane_t1

0x7465,	// (0x00021ef4) vkb2_cell_bottom_grid_pane_ParamLimits

0x7465,	// (0x00021ef4) vkb2_cell_bottom_grid_pane

0x749e,	// (0x00021f2d) vkb2_cell_bottom_grid_pane_g1

0xdd4e,	// (0x000287dd) aid_call2_pane_cp02

0xdd56,	// (0x000287e5) aid_call_pane_cp02

0xdd5e,	// (0x000287ed) clock_digital_number_pane_cp10

0xdd66,	// (0x000287f5) clock_digital_number_pane_cp11

0xdd6e,	// (0x000287fd) clock_digital_number_pane_cp12

0xdd76,	// (0x00028805) clock_digital_number_pane_cp13

0xdd7e,	// (0x0002880d) clock_digital_separator_pane_cp10

0x8744,	// (0x000231d3) popup_clock_digital_analogue_window_cp2_g1

0x8744,	// (0x000231d3) popup_clock_digital_analogue_window_cp2_g2

0xdd86,	// (0x00028815) popup_clock_digital_analogue_window_cp2_g3

0x8744,	// (0x000231d3) popup_clock_digital_analogue_window_cp2_g4

0xdd86,	// (0x00028815) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6d,	// (0x0002a7fc) popup_clock_digital_analogue_window_cp2_g

0xdd8e,	// (0x0002881d) popup_clock_digital_analogue_window_cp2_t1

0xdd9c,	// (0x0002882b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd78,	// (0x0002a807) popup_clock_digital_analogue_window_cp2_t

0xc244,	// (0x00026cd3) clock_digital_number_pane_cp10_g1

0xc244,	// (0x00026cd3) clock_digital_number_pane_cp10_g2

0x0001,

0xfb60,	// (0x0002a5ef) clock_digital_number_pane_cp10_g

0xc244,	// (0x00026cd3) clock_digital_separator_pane_cp10_g1

0xc244,	// (0x00026cd3) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb60,	// (0x0002a5ef) clock_digital_separator_pane_cp10_g

0xdbc9,	// (0x00028658) uniindi_top_pane_g3

0xdbda,	// (0x00028669) uniindi_top_pane_g4

0x7262,	// (0x00021cf1) vkb2_row_keypad_pane_ParamLimits

0x7262,	// (0x00021cf1) vkb2_row_keypad_pane

0x74ba,	// (0x00021f49) vkb2_cell_t_keypad_pane_ParamLimits

0x74ba,	// (0x00021f49) vkb2_cell_t_keypad_pane

0x74ca,	// (0x00021f59) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x74ca,	// (0x00021f59) vkb2_cell_t_keypad_pane_cp08

0x74df,	// (0x00021f6e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x74df,	// (0x00021f6e) vkb2_cell_t_keypad_pane_cp09

0x74f3,	// (0x00021f82) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x74f3,	// (0x00021f82) vkb2_cell_t_keypad_pane_cp01

0x7504,	// (0x00021f93) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7504,	// (0x00021f93) vkb2_cell_t_keypad_pane_cp02

0x7515,	// (0x00021fa4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7515,	// (0x00021fa4) vkb2_cell_t_keypad_pane_cp03

0x7526,	// (0x00021fb5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7526,	// (0x00021fb5) vkb2_cell_t_keypad_pane_cp04

0x7537,	// (0x00021fc6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7537,	// (0x00021fc6) vkb2_cell_t_keypad_pane_cp05

0x7548,	// (0x00021fd7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7548,	// (0x00021fd7) vkb2_cell_t_keypad_pane_cp06

0x755b,	// (0x00021fea) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x755b,	// (0x00021fea) vkb2_cell_t_keypad_pane_cp07

0x7570,	// (0x00021fff) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7570,	// (0x00021fff) vkb2_cell_t_keypad_pane_cp10

0xc4dc,	// (0x00026f6b) vkb2_cell_t_keypad_pane_g1

0xe16f,	// (0x00028bfe) vkb2_cell_t_keypad_pane_t1

0x7759,	// (0x000221e8) popup_grid_graphic2_window

0xe181,	// (0x00028c10) aid_size_cell_graphic2_ParamLimits

0xe181,	// (0x00028c10) aid_size_cell_graphic2

0xc2b4,	// (0x00026d43) bg_popup_window_pane_cp21_ParamLimits

0xc2b4,	// (0x00026d43) bg_popup_window_pane_cp21

0xe1ad,	// (0x00028c3c) graphic2_pages_pane_ParamLimits

0xe1ad,	// (0x00028c3c) graphic2_pages_pane

0xe1f3,	// (0x00028c82) grid_graphic2_control_pane_ParamLimits

0xe1f3,	// (0x00028c82) grid_graphic2_control_pane

0xe221,	// (0x00028cb0) grid_graphic2_pane_ParamLimits

0xe221,	// (0x00028cb0) grid_graphic2_pane

0xe283,	// (0x00028d12) cell_graphic2_pane

0x7759,	// (0x000221e8) main_comp_mode_pane

0xd43a,	// (0x00027ec9) list_ai3_gene_pane_ParamLimits

0xd802,	// (0x00028291) bg_popup_window_pane_cp19_ParamLimits

0xd80e,	// (0x0002829d) bg_touch_area_indi_pane_ParamLimits

0xd80e,	// (0x0002829d) bg_touch_area_indi_pane

0xd824,	// (0x000282b3) bg_touch_area_indi_pane_cp01_ParamLimits

0xd824,	// (0x000282b3) bg_touch_area_indi_pane_cp01

0xd83c,	// (0x000282cb) bg_touch_area_indi_pane_cp02_ParamLimits

0xd83c,	// (0x000282cb) bg_touch_area_indi_pane_cp02

0xd856,	// (0x000282e5) bg_touch_area_indi_pane_cp03_ParamLimits

0xd856,	// (0x000282e5) bg_touch_area_indi_pane_cp03

0xd870,	// (0x000282ff) popup_slider_window_g1_ParamLimits

0xd88c,	// (0x0002831b) popup_slider_window_g2_ParamLimits

0xd8a8,	// (0x00028337) popup_slider_window_g3_ParamLimits

0xfd02,	// (0x0002a791) popup_slider_window_g_ParamLimits

0xd904,	// (0x00028393) popup_slider_window_t1_ParamLimits

0xd978,	// (0x00028407) small_volume_slider_vertical_pane_ParamLimits

0xe283,	// (0x00028d12) cell_graphic2_pane_ParamLimits

0xe2d8,	// (0x00028d67) bg_button_pane_cp10_ParamLimits

0xe2d8,	// (0x00028d67) bg_button_pane_cp10

0xe2ed,	// (0x00028d7c) bg_button_pane_cp11_ParamLimits

0xe2ed,	// (0x00028d7c) bg_button_pane_cp11

0xe302,	// (0x00028d91) graphic2_pages_pane_g1_ParamLimits

0xe302,	// (0x00028d91) graphic2_pages_pane_g1

0xe31d,	// (0x00028dac) graphic2_pages_pane_g2_ParamLimits

0xe31d,	// (0x00028dac) graphic2_pages_pane_g2

0x0001,

0xfdc6,	// (0x0002a855) graphic2_pages_pane_g_ParamLimits

0xfdc6,	// (0x0002a855) graphic2_pages_pane_g

0xe335,	// (0x00028dc4) graphic2_pages_pane_t1_ParamLimits

0xe335,	// (0x00028dc4) graphic2_pages_pane_t1

0xe34b,	// (0x00028dda) cell_graphic2_control_pane_ParamLimits

0xe34b,	// (0x00028dda) cell_graphic2_control_pane

0xe365,	// (0x00028df4) cell_graphic2_pane_g1_ParamLimits

0xe365,	// (0x00028df4) cell_graphic2_pane_g1

0xe372,	// (0x00028e01) cell_graphic2_pane_g2_ParamLimits

0xe372,	// (0x00028e01) cell_graphic2_pane_g2

0xe37f,	// (0x00028e0e) cell_graphic2_pane_g3_ParamLimits

0xe37f,	// (0x00028e0e) cell_graphic2_pane_g3

0xe38c,	// (0x00028e1b) cell_graphic2_pane_g4_ParamLimits

0xe38c,	// (0x00028e1b) cell_graphic2_pane_g4

0xe399,	// (0x00028e28) cell_graphic2_pane_g5_ParamLimits

0xe399,	// (0x00028e28) cell_graphic2_pane_g5

0x0004,

0xfdcb,	// (0x0002a85a) cell_graphic2_pane_g_ParamLimits

0xfdcb,	// (0x0002a85a) cell_graphic2_pane_g

0xe3b4,	// (0x00028e43) cell_graphic2_pane_t1_ParamLimits

0xe3b4,	// (0x00028e43) cell_graphic2_pane_t1

0x9cf2,	// (0x00024781) grid_highlight_pane_cp11_ParamLimits

0x9cf2,	// (0x00024781) grid_highlight_pane_cp11

0x80d4,	// (0x00022b63) bg_button_pane_cp05

0xe3ca,	// (0x00028e59) cell_graphic2_control_pane_g1

0xc244,	// (0x00026cd3) bg_touch_area_indi_pane_g1

0xe3d7,	// (0x00028e66) aid_cmod_rocker_key_size

0xe3e1,	// (0x00028e70) aid_cmode_itu_key_size

0xe3eb,	// (0x00028e7a) main_cmode_video_pane

0xe3f5,	// (0x00028e84) main_comp_mode_itu_pane

0xe401,	// (0x00028e90) main_comp_mode_rocker_pane

0xe40d,	// (0x00028e9c) cell_cmode_rocker_pane_ParamLimits

0xe40d,	// (0x00028e9c) cell_cmode_rocker_pane

0xe421,	// (0x00028eb0) cell_cmode_itu_pane_ParamLimits

0xe421,	// (0x00028eb0) cell_cmode_itu_pane

0x80d4,	// (0x00022b63) bg_button_pane_cp06_ParamLimits

0x80d4,	// (0x00022b63) bg_button_pane_cp06

0xc4dc,	// (0x00026f6b) cell_cmode_rocker_pane_g1_ParamLimits

0xc4dc,	// (0x00026f6b) cell_cmode_rocker_pane_g1

0xda1f,	// (0x000284ae) cell_cmode_rocker_pane_g2_ParamLimits

0xda1f,	// (0x000284ae) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x0002a865) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x0002a865) cell_cmode_rocker_pane_g

0x7759,	// (0x000221e8) bg_button_pane_cp07

0xe438,	// (0x00028ec7) cell_cmode_itu_pane_g1

0xe441,	// (0x00028ed0) cell_cmode_itu_pane_t1

0xe44f,	// (0x00028ede) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x0002a86a) cell_cmode_itu_pane_t

0xdc4d,	// (0x000286dc) aid_touch_ctrl_left

0xdc55,	// (0x000286e4) aid_touch_ctrl_right

0x7759,	// (0x000221e8) compa_mode_pane

0xe45d,	// (0x00028eec) aid_cmod_rocker_key_size_cp

0xe467,	// (0x00028ef6) aid_cmode_itu_key_size_cp

0xe471,	// (0x00028f00) compa_mode_pane_g1

0xe479,	// (0x00028f08) compa_mode_pane_g2

0xe481,	// (0x00028f10) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x0002a86f) compa_mode_pane_g

0xe489,	// (0x00028f18) main_comp_mode_itu_pane_cp

0xe491,	// (0x00028f20) main_comp_mode_rocker_pane_cp

0xe499,	// (0x00028f28) cell_cmode_itu_pane_cp_ParamLimits

0xe499,	// (0x00028f28) cell_cmode_itu_pane_cp

0xe4ae,	// (0x00028f3d) cell_cmode_rocker_pane_cp_ParamLimits

0xe4ae,	// (0x00028f3d) cell_cmode_rocker_pane_cp

0x80d4,	// (0x00022b63) bg_button_pane_cp06_cp_ParamLimits

0x80d4,	// (0x00022b63) bg_button_pane_cp06_cp

0xc4dc,	// (0x00026f6b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4dc,	// (0x00026f6b) cell_cmode_rocker_pane_g1_cp

0xc244,	// (0x00026cd3) cell_cmode_rocker_pane_g2_cp

0x7759,	// (0x000221e8) bg_button_pane_cp07_cp

0xe4c0,	// (0x00028f4f) cell_cmode_itu_pane_g1_cp

0xe4c9,	// (0x00028f58) cell_cmode_itu_pane_t1_cp

0xe4c9,	// (0x00028f58) cell_cmode_itu_pane_t2_cp

0xb188,	// (0x00025c17) settings_code_pane_cp2

0x784d,	// (0x000222dc) bg_popup_window_pane_cp3_ParamLimits

0x7cc5,	// (0x00022754) heading_pane_cp3_ParamLimits

0x7cd1,	// (0x00022760) listscroll_popup_graphic_pane_ParamLimits

0x6b70,	// (0x000215ff) fep_hwr_aid_pane_ParamLimits

0x6f55,	// (0x000219e4) aid_touch_sctrl_top_ParamLimits

0x6f62,	// (0x000219f1) sctrl_sk_top_pane_g1_ParamLimits

0xc4dc,	// (0x00026f6b) sctrl_sk_top_pane_g2_ParamLimits

0xfd1b,	// (0x0002a7aa) sctrl_sk_top_pane_g_ParamLimits

0x6f6f,	// (0x000219fe) sctrl_sk_top_pane_t1_ParamLimits

0x6f55,	// (0x000219e4) aid_touch_sctrl_bottom_ParamLimits

0x6f6f,	// (0x000219fe) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb93,	// (0x00028622) aid_area_touch_clock

0x7154,	// (0x00021be3) aid_vkb2_area_top_pane_cell_ParamLimits

0x7154,	// (0x00021be3) aid_vkb2_area_top_pane_cell

0x7284,	// (0x00021d13) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7284,	// (0x00021d13) aid_vkb2_area_bottom_pane_cell

0xe0fc,	// (0x00028b8b) popup_char_count_window

0xe4d7,	// (0x00028f66) popup_char_count_window_g1

0xe4e0,	// (0x00028f6f) popup_char_count_window_g2

0xe4e9,	// (0x00028f78) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x0002a876) popup_char_count_window_g

0xe4f2,	// (0x00028f81) popup_char_count_window_t1

0x700e,	// (0x00021a9d) popup_fep_char_preview_window_ParamLimits

0x700e,	// (0x00021a9d) popup_fep_char_preview_window

0x7172,	// (0x00021c01) vkb2_top_candi_pane_ParamLimits

0x7172,	// (0x00021c01) vkb2_top_candi_pane

0xe500,	// (0x00028f8f) cell_vkb2_top_candi_pane_ParamLimits

0xe500,	// (0x00028f8f) cell_vkb2_top_candi_pane

0xa275,	// (0x00024d04) bg_popup_fep_char_preview_window_ParamLimits

0xa275,	// (0x00024d04) bg_popup_fep_char_preview_window

0x7585,	// (0x00022014) popup_fep_char_preview_window_t1_ParamLimits

0x7585,	// (0x00022014) popup_fep_char_preview_window_t1

0xe572,	// (0x00029001) bg_popup_fep_char_preview_window_g1

0xe57a,	// (0x00029009) bg_popup_fep_char_preview_window_g2

0xe582,	// (0x00029011) bg_popup_fep_char_preview_window_g3

0xe58a,	// (0x00029019) bg_popup_fep_char_preview_window_g4

0xe592,	// (0x00029021) bg_popup_fep_char_preview_window_g5

0x75bf,	// (0x0002204e) bg_popup_fep_char_preview_window_g6

0xe59a,	// (0x00029029) bg_popup_fep_char_preview_window_g7

0xe5a2,	// (0x00029031) bg_popup_fep_char_preview_window_g8

0xe5aa,	// (0x00029039) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x0002a87d) bg_popup_fep_char_preview_window_g

0xc4dc,	// (0x00026f6b) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc4dc,	// (0x00026f6b) cell_vkb2_top_candi_pane_g1

0xc81d,	// (0x000272ac) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc81d,	// (0x000272ac) cell_vkb2_top_candi_pane_g2

0xc83e,	// (0x000272cd) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc83e,	// (0x000272cd) cell_vkb2_top_candi_pane_g3

0x75c7,	// (0x00022056) cell_vkb2_top_candi_pane_g4_ParamLimits

0x75c7,	// (0x00022056) cell_vkb2_top_candi_pane_g4

0xe551,	// (0x00028fe0) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe551,	// (0x00028fe0) cell_vkb2_top_candi_pane_g5

0xda1f,	// (0x000284ae) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda1f,	// (0x000284ae) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x0002a890) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x0002a890) cell_vkb2_top_candi_pane_g

0x75e8,	// (0x00022077) cell_vkb2_top_candi_pane_t1

0x6a20,	// (0x000214af) aid_size_touch_slider_mark_ParamLimits

0x6a20,	// (0x000214af) aid_size_touch_slider_mark

0xe1e3,	// (0x00028c72) grid_graphic2_catg_pane_ParamLimits

0xe1e3,	// (0x00028c72) grid_graphic2_catg_pane

0xe25d,	// (0x00028cec) popup_grid_graphic2_window_t1_ParamLimits

0xe25d,	// (0x00028cec) popup_grid_graphic2_window_t1

0xe26f,	// (0x00028cfe) popup_grid_graphic2_window_t2_ParamLimits

0xe26f,	// (0x00028cfe) popup_grid_graphic2_window_t2

0x0001,

0xfdc1,	// (0x0002a850) popup_grid_graphic2_window_t_ParamLimits

0xfdc1,	// (0x0002a850) popup_grid_graphic2_window_t

0x80d4,	// (0x00022b63) bg_button_pane_cp05_ParamLimits

0xe3ca,	// (0x00028e59) cell_graphic2_control_pane_g1_ParamLimits

0xe5b2,	// (0x00029041) cell_graphic2_catg_pane_ParamLimits

0xe5b2,	// (0x00029041) cell_graphic2_catg_pane

0x7759,	// (0x000221e8) bg_button_pane_cp12

0xe5c4,	// (0x00029053) cell_graphic2_catg_pane_g1

0xdb5f,	// (0x000285ee) cell_tb_ext_pane_t1_ParamLimits

0x73a1,	// (0x00021e30) vkb2_top_cell_right_narrow_pane_ParamLimits

0x73a1,	// (0x00021e30) vkb2_top_cell_right_narrow_pane

0x73b9,	// (0x00021e48) vkb2_top_cell_right_wide_pane_ParamLimits

0x73b9,	// (0x00021e48) vkb2_top_cell_right_wide_pane

0xc2b4,	// (0x00026d43) bg_vkb2_func_pane_ParamLimits

0xc2b4,	// (0x00026d43) bg_vkb2_func_pane

0x742a,	// (0x00021eb9) vkb2_top_cell_left_pane_g1_ParamLimits

0xc2b4,	// (0x00026d43) bg_vkb2_fuc_pane_cp03_ParamLimits

0xc2b4,	// (0x00026d43) bg_vkb2_fuc_pane_cp03

0x749e,	// (0x00021f2d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c08,	// (0x00024697) bg_vkb2_func_pane_g1

0x9c10,	// (0x0002469f) bg_vkb2_func_pane_g2

0x9c20,	// (0x000246af) bg_vkb2_func_pane_g3

0x9c18,	// (0x000246a7) bg_vkb2_func_pane_g4

0x9c28,	// (0x000246b7) bg_vkb2_func_pane_g5

0x9c30,	// (0x000246bf) bg_vkb2_func_pane_g6

0x9c38,	// (0x000246c7) bg_vkb2_func_pane_g7

0x9c40,	// (0x000246cf) bg_vkb2_func_pane_g8

0x9c00,	// (0x0002468f) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x0002a89d) bg_vkb2_func_pane_g

0xc2b4,	// (0x00026d43) bg_vkb2_fuc_pane_cp01_ParamLimits

0xc2b4,	// (0x00026d43) bg_vkb2_fuc_pane_cp01

0x742a,	// (0x00021eb9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x742a,	// (0x00021eb9) vkb2_top_cell_right_wide_pane_g1

0xc2b4,	// (0x00026d43) bg_vkb2_fuc_pane_cp02_ParamLimits

0xc2b4,	// (0x00026d43) bg_vkb2_fuc_pane_cp02

0x749e,	// (0x00021f2d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x749e,	// (0x00021f2d) vkb2_top_cell_right_narrow_pane_g1

0xd780,	// (0x0002820f) aid_touch_area_decrease_ParamLimits

0xd780,	// (0x0002820f) aid_touch_area_decrease

0xd7a4,	// (0x00028233) aid_touch_area_increase_ParamLimits

0xd7a4,	// (0x00028233) aid_touch_area_increase

0xd7b0,	// (0x0002823f) aid_touch_area_mute_ParamLimits

0xd7b0,	// (0x0002823f) aid_touch_area_mute

0xd7d4,	// (0x00028263) aid_touch_area_slider_ParamLimits

0xd7d4,	// (0x00028263) aid_touch_area_slider

0xd8c4,	// (0x00028353) popup_slider_window_g4_ParamLimits

0xd8c4,	// (0x00028353) popup_slider_window_g4

0xd8d0,	// (0x0002835f) popup_slider_window_g5_ParamLimits

0xd8d0,	// (0x0002835f) popup_slider_window_g5

0xd8f2,	// (0x00028381) popup_slider_window_g6_ParamLimits

0xd8f2,	// (0x00028381) popup_slider_window_g6

0xd932,	// (0x000283c1) popup_slider_window_t2_ParamLimits

0xd932,	// (0x000283c1) popup_slider_window_t2

0x0001,

0xfd0f,	// (0x0002a79e) popup_slider_window_t_ParamLimits

0xfd0f,	// (0x0002a79e) popup_slider_window_t

0xd94a,	// (0x000283d9) slider_pane_ParamLimits

0xd94a,	// (0x000283d9) slider_pane

0xe5cd,	// (0x0002905c) slider_pane_g1_ParamLimits

0xe5cd,	// (0x0002905c) slider_pane_g1

0xe5e1,	// (0x00029070) slider_pane_g2_ParamLimits

0xe5e1,	// (0x00029070) slider_pane_g2

0xe5f7,	// (0x00029086) slider_pane_g3_ParamLimits

0xe5f7,	// (0x00029086) slider_pane_g3

0x0003,

0xfe21,	// (0x0002a8b0) slider_pane_g_ParamLimits

0xfe21,	// (0x0002a8b0) slider_pane_g

0x95fa,	// (0x00024089) popup_tb_float_extension_window_ParamLimits

0x95fa,	// (0x00024089) popup_tb_float_extension_window

0xe623,	// (0x000290b2) aid_size_cell_tb_float_ext

0x7759,	// (0x000221e8) bg_popup_sub_window_cp28

0xe62f,	// (0x000290be) grid_tb_float_ext_pane

0xe63b,	// (0x000290ca) cell_tb_float_ext_pane_ParamLimits

0xe63b,	// (0x000290ca) cell_tb_float_ext_pane

0xe657,	// (0x000290e6) cell_tb_float_ext_pane_g1

0xe660,	// (0x000290ef) grid_highlight_pane_cp12

0x6ca9,	// (0x00021738) cell_last_hwr_side_pane_ParamLimits

0x6ca9,	// (0x00021738) cell_last_hwr_side_pane

0xc244,	// (0x00026cd3) cell_last_hwr_side_pane_g1

0xe669,	// (0x000290f8) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x0002a8b9) cell_last_hwr_side_pane_g

0x7350,	// (0x00021ddf) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7350,	// (0x00021ddf) vkb2_area_bottom_space_btn_pane

0xc4dc,	// (0x00026f6b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe16f,	// (0x00028bfe) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x75e8,	// (0x00022077) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7606,	// (0x00022095) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7606,	// (0x00022095) vkb2_area_bottom_space_btn_pane_g1

0x7640,	// (0x000220cf) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7640,	// (0x000220cf) vkb2_area_bottom_space_btn_pane_g2

0x7676,	// (0x00022105) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7676,	// (0x00022105) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x0002a8be) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x0002a8be) vkb2_area_bottom_space_btn_pane_g

0x6c19,	// (0x000216a8) cel_fep_hwr_func_pane_ParamLimits

0x6c19,	// (0x000216a8) cel_fep_hwr_func_pane

0x6c55,	// (0x000216e4) cell_hwr_side_button_pane_ParamLimits

0x6c55,	// (0x000216e4) cell_hwr_side_button_pane

0xdb93,	// (0x00028622) aid_area_touch_clock_ParamLimits

0x7ad7,	// (0x00022566) bg_uniindi_top_pane_ParamLimits

0xdba7,	// (0x00028636) uniindi_top_pane_g1_ParamLimits

0xdbbd,	// (0x0002864c) uniindi_top_pane_g2_ParamLimits

0xdbc9,	// (0x00028658) uniindi_top_pane_g3_ParamLimits

0xdbda,	// (0x00028669) uniindi_top_pane_g4_ParamLimits

0xfd47,	// (0x0002a7d6) uniindi_top_pane_g_ParamLimits

0xdbe7,	// (0x00028676) uniindi_top_pane_t1_ParamLimits

0x7ad7,	// (0x00022566) bg_vkb2_func_pane_cp01_ParamLimits

0x7ad7,	// (0x00022566) bg_vkb2_func_pane_cp01

0xe672,	// (0x00029101) cel_fep_hwr_func_pane_g1_ParamLimits

0xe672,	// (0x00029101) cel_fep_hwr_func_pane_g1

0x7ad7,	// (0x00022566) bg_vkb2_func_pane_cp02_ParamLimits

0x7ad7,	// (0x00022566) bg_vkb2_func_pane_cp02

0xe672,	// (0x00029101) cell_hwr_side_button_pane_g1_ParamLimits

0xe672,	// (0x00029101) cell_hwr_side_button_pane_g1

0x9a81,	// (0x00024510) status_pane_g4_ParamLimits

0x9a81,	// (0x00024510) status_pane_g4

0x9a9b,	// (0x0002452a) status_pane_t1

0xbfe0,	// (0x00026a6f) form2_midp_gauge_slider_cont_pane

0xbfe8,	// (0x00026a77) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbffa,	// (0x00026a89) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc00c,	// (0x00026a9b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb13,	// (0x0002a5a2) form2_midp_gauge_slider_pane_t_ParamLimits

0xc01e,	// (0x00026aad) form2_midp_slider_pane_ParamLimits

0x6fd6,	// (0x00021a65) aid_size_cell_func_vkb2_ParamLimits

0x6fd6,	// (0x00021a65) aid_size_cell_func_vkb2

0xe60f,	// (0x0002909e) slider_pane_g4_ParamLimits

0xe60f,	// (0x0002909e) slider_pane_g4

0x76c0,	// (0x0002214f) form2_midp_gauge_slider_pane_t2_cp01

0x76ce,	// (0x0002215d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x76ce,	// (0x0002215d) form2_midp_gauge_slider_pane_t3_cp01

0x76eb,	// (0x0002217a) form2_midp_slider_pane_cp01

0x7759,	// (0x000221e8) navi_smil_pane

0xe6ab,	// (0x0002913a) navi_smil_pane_g1

0xe6b3,	// (0x00029142) navi_smil_pane_t1

0xe680,	// (0x0002910f) form2_midp_slider_pane_g1

0xe689,	// (0x00029118) form2_midp_slider_pane_g2

0xe691,	// (0x00029120) form2_midp_slider_pane_g3

0xe680,	// (0x0002910f) form2_midp_slider_pane_g4

0xe699,	// (0x00029128) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x0002a8c7) form2_midp_slider_pane_g

0x76b0,	// (0x0002213f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x76b0,	// (0x0002213f) vkb2_area_bottom_space_btn_pane_g4

0x9899,	// (0x00024328) lc0_navi_pane_ParamLimits

0x9899,	// (0x00024328) lc0_navi_pane

0x9915,	// (0x000243a4) lc0_stat_indi_pane_ParamLimits

0x9915,	// (0x000243a4) lc0_stat_indi_pane

0x992c,	// (0x000243bb) ls0_title_pane_ParamLimits

0x992c,	// (0x000243bb) ls0_title_pane

0x80d4,	// (0x00022b63) bg_popup_sub_pane_cp14_ParamLimits

0xdb7a,	// (0x00028609) list_uniindi_pane_ParamLimits

0xdb86,	// (0x00028615) uniindi_top_pane_ParamLimits

0xdc25,	// (0x000286b4) list_single_uniindi_pane_g1_ParamLimits

0xdc38,	// (0x000286c7) list_single_uniindi_pane_t1_ParamLimits

0x76f4,	// (0x00022183) lc0_stat_clock_pane_ParamLimits

0x76f4,	// (0x00022183) lc0_stat_clock_pane

0xe6c1,	// (0x00029150) lc0_stat_indi_pane_g1_ParamLimits

0xe6c1,	// (0x00029150) lc0_stat_indi_pane_g1

0xe6ce,	// (0x0002915d) lc0_stat_indi_pane_g2_ParamLimits

0xe6ce,	// (0x0002915d) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x0002a8d2) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x0002a8d2) lc0_stat_indi_pane_g

0x7701,	// (0x00022190) lc0_uni_indicator_pane_ParamLimits

0x7701,	// (0x00022190) lc0_uni_indicator_pane

0xe6db,	// (0x0002916a) ls0_title_pane_g1_ParamLimits

0xe6db,	// (0x0002916a) ls0_title_pane_g1

0xe6ef,	// (0x0002917e) ls0_title_pane_t1_ParamLimits

0xe6ef,	// (0x0002917e) ls0_title_pane_t1

0x770e,	// (0x0002219d) lc0_uni_indicator_pane_g1_ParamLimits

0x770e,	// (0x0002219d) lc0_uni_indicator_pane_g1

0xe725,	// (0x000291b4) lc0_stat_clock_pane_t1

0x7759,	// (0x000221e8) main_ai5_pane

0xe733,	// (0x000291c2) ai5_sk_pane_ParamLimits

0xe733,	// (0x000291c2) ai5_sk_pane

0xe740,	// (0x000291cf) cell_ai5_widget_pane_ParamLimits

0xe740,	// (0x000291cf) cell_ai5_widget_pane

0xe7b6,	// (0x00029245) aid_size_cell_widget_grid

0xe7ca,	// (0x00029259) bg_ai5_widget_pane_ParamLimits

0xe7ca,	// (0x00029259) bg_ai5_widget_pane

0xe7f2,	// (0x00029281) cell_ai5_widget_pane_g2

0xe802,	// (0x00029291) cell_ai5_widget_pane_g3

0xe816,	// (0x000292a5) cell_ai5_widget_pane_g4

0xe822,	// (0x000292b1) cell_ai5_widget_pane_g5

0xe82e,	// (0x000292bd) cell_ai5_widget_pane_g6

0xe83c,	// (0x000292cb) cell_ai5_widget_pane_g7

0xe884,	// (0x00029313) cell_ai5_widget_pane_t1_ParamLimits

0xe884,	// (0x00029313) cell_ai5_widget_pane_t1

0xe8a1,	// (0x00029330) cell_ai5_widget_pane_t2_ParamLimits

0xe8a1,	// (0x00029330) cell_ai5_widget_pane_t2

0xe8b9,	// (0x00029348) cell_ai5_widget_pane_t3_ParamLimits

0xe8b9,	// (0x00029348) cell_ai5_widget_pane_t3

0xe8d1,	// (0x00029360) cell_ai5_widget_pane_t4_ParamLimits

0xe8d1,	// (0x00029360) cell_ai5_widget_pane_t4

0xe8eb,	// (0x0002937a) cell_ai5_widget_pane_t5_ParamLimits

0xe8eb,	// (0x0002937a) cell_ai5_widget_pane_t5

0xe90a,	// (0x00029399) cell_ai5_widget_pane_t6_ParamLimits

0xe90a,	// (0x00029399) cell_ai5_widget_pane_t6

0xe91c,	// (0x000293ab) cell_ai5_widget_pane_t7_ParamLimits

0xe91c,	// (0x000293ab) cell_ai5_widget_pane_t7

0xe935,	// (0x000293c4) cell_ai5_widget_pane_t8_ParamLimits

0xe935,	// (0x000293c4) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x0002a8ec) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x0002a8ec) cell_ai5_widget_pane_t

0xe97d,	// (0x0002940c) grid_ai5_widget_pane

0x80d4,	// (0x00022b63) highlight_cell_ai5_widget_pane_ParamLimits

0x80d4,	// (0x00022b63) highlight_cell_ai5_widget_pane

0xe994,	// (0x00029423) ai5_sk_left_pane

0xe99e,	// (0x0002942d) ai5_sk_middle_pane

0xe9a8,	// (0x00029437) ai5_sk_right_pane

0xe9b2,	// (0x00029441) bg_ai5_widget_pane_g1_ParamLimits

0xe9b2,	// (0x00029441) bg_ai5_widget_pane_g1

0xe9be,	// (0x0002944d) bg_ai5_widget_pane_g2_ParamLimits

0xe9be,	// (0x0002944d) bg_ai5_widget_pane_g2

0xe9ca,	// (0x00029459) bg_ai5_widget_pane_g3_ParamLimits

0xe9ca,	// (0x00029459) bg_ai5_widget_pane_g3

0xe9d6,	// (0x00029465) bg_ai5_widget_pane_g4_ParamLimits

0xe9d6,	// (0x00029465) bg_ai5_widget_pane_g4

0xe9e2,	// (0x00029471) bg_ai5_widget_pane_g5_ParamLimits

0xe9e2,	// (0x00029471) bg_ai5_widget_pane_g5

0xe9ee,	// (0x0002947d) bg_ai5_widget_pane_g6_ParamLimits

0xe9ee,	// (0x0002947d) bg_ai5_widget_pane_g6

0xe9fa,	// (0x00029489) bg_ai5_widget_pane_g7_ParamLimits

0xe9fa,	// (0x00029489) bg_ai5_widget_pane_g7

0xea06,	// (0x00029495) bg_ai5_widget_pane_g8_ParamLimits

0xea06,	// (0x00029495) bg_ai5_widget_pane_g8

0xea12,	// (0x000294a1) bg_ai5_widget_pane_g9_ParamLimits

0xea12,	// (0x000294a1) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x0002a901) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x0002a901) bg_ai5_widget_pane_g

0xea39,	// (0x000294c8) cell_shortcut_ai5_widget_pane_ParamLimits

0xea39,	// (0x000294c8) cell_shortcut_ai5_widget_pane

0x7919,	// (0x000223a8) bg_cell_shortcut_ai5_widget_pane

0xea4b,	// (0x000294da) cell_grid_ai5_widget_pane_g1

0xea54,	// (0x000294e3) highlight_cell_shortcut_ai5_widget_pane

0x9c10,	// (0x0002469f) ai5_sk_left_pane_g1

0xea5c,	// (0x000294eb) ai5_sk_left_pane_g2

0xea64,	// (0x000294f3) ai5_sk_left_pane_g3

0xea6c,	// (0x000294fb) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x0002a914) ai5_sk_left_pane_g

0xea74,	// (0x00029503) ai5_sk_left_pane_t1

0x9c08,	// (0x00024697) ai5_sk_right_pane_g1

0xea82,	// (0x00029511) ai5_sk_right_pane_g2

0xea8a,	// (0x00029519) ai5_sk_right_pane_g3

0xea92,	// (0x00029521) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x0002a91d) ai5_sk_right_pane_g

0xea9a,	// (0x00029529) ai5_sk_right_pane_t1

0x9c08,	// (0x00024697) ai5_sk_middle_pane_g1

0x9c10,	// (0x0002469f) ai5_sk_middle_pane_g2

0x9c28,	// (0x000246b7) ai5_sk_middle_pane_g3

0xea8a,	// (0x00029519) ai5_sk_middle_pane_g4

0xea64,	// (0x000294f3) ai5_sk_middle_pane_g5

0xeaa8,	// (0x00029537) ai5_sk_middle_pane_g6

0xeab0,	// (0x0002953f) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x0002a926) ai5_sk_middle_pane_g

0x971b,	// (0x000241aa) aid_touch_area_size_lc0_ParamLimits

0x971b,	// (0x000241aa) aid_touch_area_size_lc0

0x6db8,	// (0x00021847) cell_hwr_candidate_pane_t1_ParamLimits

0x9739,	// (0x000241c8) aid_touch_navi_pane

0x9a2b,	// (0x000244ba) status_dt_navi_pane_ParamLimits

0x9a2b,	// (0x000244ba) status_dt_navi_pane

0x9a38,	// (0x000244c7) status_dt_sta_pane_ParamLimits

0x9a38,	// (0x000244c7) status_dt_sta_pane

0xeab8,	// (0x00029547) dt_sta_controll_pane

0xeac5,	// (0x00029554) dt_sta_indi_pane

0xead6,	// (0x00029565) dt_sta_title_pane

0x7ad7,	// (0x00022566) bg_dt_sta_indi_pane_ParamLimits

0x7ad7,	// (0x00022566) bg_dt_sta_indi_pane

0xeae9,	// (0x00029578) dt_sta_battery_pane

0xeaf1,	// (0x00029580) dt_sta_indi_pane_g1

0xeafa,	// (0x00029589) dt_sta_indi_pane_g2

0xeb03,	// (0x00029592) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x0002a935) dt_sta_indi_pane_g

0xeb0c,	// (0x0002959b) dt_sta_signal_pane

0x80d4,	// (0x00022b63) bg_dt_sta_title_pane_ParamLimits

0x80d4,	// (0x00022b63) bg_dt_sta_title_pane

0xeb15,	// (0x000295a4) dt_sta_title_pane_g1

0xeb1d,	// (0x000295ac) dt_sta_title_pane_t1_ParamLimits

0xeb1d,	// (0x000295ac) dt_sta_title_pane_t1

0x7759,	// (0x000221e8) bg_dt_sta_control_pane

0xeb32,	// (0x000295c1) dt_sta_controll_pane_g1

0xeb3b,	// (0x000295ca) bg_dt_sta_title_pane_g1

0xeb44,	// (0x000295d3) bg_dt_sta_title_pane_g2

0xeb4d,	// (0x000295dc) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x0002a93c) bg_dt_sta_title_pane_g

0xc244,	// (0x00026cd3) bg_dt_sta_indi_pane_g1

0xeb56,	// (0x000295e5) dt_sta_signal_pane_g1

0xeb5e,	// (0x000295ed) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x0002a943) dt_sta_signal_pane_g

0xeb66,	// (0x000295f5) dt_sta_battery_pane_g1

0xeb6f,	// (0x000295fe) dt_sta_battery_pane_t1

0xc244,	// (0x00026cd3) bg_dt_sta_control_pane_g1

0x8830,	// (0x000232bf) fep_china_uni_eep_pane

0x8838,	// (0x000232c7) fep_china_uni_entry_pane_ParamLimits

0x8848,	// (0x000232d7) popup_fep_china_uni_window_g1_ParamLimits

0x8858,	// (0x000232e7) popup_fep_china_uni_window_g2_ParamLimits

0x8858,	// (0x000232e7) popup_fep_china_uni_window_g2

0x0001,

0xf75d,	// (0x0002a1ec) popup_fep_china_uni_window_g_ParamLimits

0xf75d,	// (0x0002a1ec) popup_fep_china_uni_window_g

0xeb7e,	// (0x0002960d) fep_china_uni_eep_pane_g1

0xeb86,	// (0x00029615) fep_china_uni_eep_pane_t1

0xe6a2,	// (0x00029131) aid_touch_area_size_smil_player

0x9891,	// (0x00024320) lc0_clock_pane

0x9a8f,	// (0x0002451e) status_pane_g5_ParamLimits

0x9a8f,	// (0x0002451e) status_pane_g5

0x927f,	// (0x00023d0e) popup_keymap_window

0x9a4d,	// (0x000244dc) status_icon_pane

0xe802,	// (0x00029291) cell_ai5_widget_pane_g3_ParamLimits

0xe816,	// (0x000292a5) cell_ai5_widget_pane_g4_ParamLimits

0xe822,	// (0x000292b1) cell_ai5_widget_pane_g5_ParamLimits

0xe848,	// (0x000292d7) cell_ai5_widget_pane_g8_ParamLimits

0xe848,	// (0x000292d7) cell_ai5_widget_pane_g8

0xe85c,	// (0x000292eb) cell_ai5_widget_pane_g9_ParamLimits

0xe85c,	// (0x000292eb) cell_ai5_widget_pane_g9

0xe870,	// (0x000292ff) cell_ai5_widget_pane_g10_ParamLimits

0xe870,	// (0x000292ff) cell_ai5_widget_pane_g10

0xeb95,	// (0x00029624) status_icon_pane_g1

0x7759,	// (0x000221e8) bg_popup_sub_pane_cp13

0xeb9d,	// (0x0002962c) popup_keymap_window_t1

0x9019,	// (0x00023aa8) control_pane_g6_ParamLimits

0x9019,	// (0x00023aa8) control_pane_g6

0x9026,	// (0x00023ab5) control_pane_g7_ParamLimits

0x9026,	// (0x00023ab5) control_pane_g7

0x9033,	// (0x00023ac2) control_pane_g8_ParamLimits

0x9033,	// (0x00023ac2) control_pane_g8

0xeab8,	// (0x00029547) dt_sta_controll_pane_ParamLimits

0xeac5,	// (0x00029554) dt_sta_indi_pane_ParamLimits

0xead6,	// (0x00029565) dt_sta_title_pane_ParamLimits

0x800c,	// (0x00022a9b) aid_size_touch_scroll_bar_cale

0x5f2a,	// (0x000209b9) popup_discreet_window_ParamLimits

0x5f2a,	// (0x000209b9) popup_discreet_window

0x5fb8,	// (0x00020a47) popup_sk_window

0xa275,	// (0x00024d04) bg_popup_sub_pane_cp28_ParamLimits

0xa275,	// (0x00024d04) bg_popup_sub_pane_cp28

0xebab,	// (0x0002963a) popup_discreet_window_g1_ParamLimits

0xebab,	// (0x0002963a) popup_discreet_window_g1

0xebcb,	// (0x0002965a) popup_discreet_window_t1_ParamLimits

0xebcb,	// (0x0002965a) popup_discreet_window_t1

0xebe9,	// (0x00029678) popup_discreet_window_t2_ParamLimits

0xebe9,	// (0x00029678) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x0002a948) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x0002a948) popup_discreet_window_t

0x7721,	// (0x000221b0) popup_sk_window_g1

0x772b,	// (0x000221ba) popup_sk_window_g2

0x0001,

0xfec0,	// (0x0002a94f) popup_sk_window_g

0xec3b,	// (0x000296ca) popup_sk_window_t1

0xec49,	// (0x000296d8) popup_sk_window_t1_copy1

0xe7f2,	// (0x00029281) cell_ai5_widget_pane_g2_ParamLimits

0xe947,	// (0x000293d6) cell_ai5_widget_pane_t9_ParamLimits

0xe947,	// (0x000293d6) cell_ai5_widget_pane_t9

0x7759,	// (0x000221e8) main_fep_fshwr2_pane

0xec57,	// (0x000296e6) aid_fshwr2_btn_pane

0xec5f,	// (0x000296ee) aid_fshwr2_syb_pane

0xec67,	// (0x000296f6) aid_fshwr2_txt_pane

0xec6f,	// (0x000296fe) fshwr2_func_candi_pane

0xec79,	// (0x00029708) fshwr2_hwr_syb_pane

0xec83,	// (0x00029712) fshwr2_icf_pane

0x7759,	// (0x000221e8) fshwr2_icf_bg_pane

0xeca5,	// (0x00029734) fshwr2_icf_pane_t1_ParamLimits

0xeca5,	// (0x00029734) fshwr2_icf_pane_t1

0xc244,	// (0x00026cd3) fshwr2_func_candi_pane_g1

0xecbc,	// (0x0002974b) fshwr2_func_candi_row_pane_ParamLimits

0xecbc,	// (0x0002974b) fshwr2_func_candi_row_pane

0xeccd,	// (0x0002975c) cell_fshwr2_syb_pane_ParamLimits

0xeccd,	// (0x0002975c) cell_fshwr2_syb_pane

0xc4dc,	// (0x00026f6b) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc4dc,	// (0x00026f6b) fshwr2_hwr_syb_pane_g1

0x7759,	// (0x000221e8) bg_popup_call_pane_cp01

0xece7,	// (0x00029776) fshwr2_func_candi_cell_pane_ParamLimits

0xece7,	// (0x00029776) fshwr2_func_candi_cell_pane

0xed19,	// (0x000297a8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed19,	// (0x000297a8) fshwr2_func_candi_cell_bg_pane

0xed33,	// (0x000297c2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xed33,	// (0x000297c2) fshwr2_func_candi_cell_pane_g1

0xed53,	// (0x000297e2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xed53,	// (0x000297e2) fshwr2_func_candi_cell_pane_t1

0x7759,	// (0x000221e8) bg_button_pane_cp08

0x8d3e,	// (0x000237cd) cell_fshwr2_syb_bg_pane

0xed66,	// (0x000297f5) cell_fshwr2_syb_bg_pane_g1

0xed6e,	// (0x000297fd) cell_fshwr2_syb_bg_pane_t1

0x80d4,	// (0x00022b63) main_tmo_pane

0xad9f,	// (0x0002582e) uni_indicator_pane_g1_ParamLimits

0xadb4,	// (0x00025843) uni_indicator_pane_g2_ParamLimits

0xadca,	// (0x00025859) uni_indicator_pane_g3_ParamLimits

0xade0,	// (0x0002586f) uni_indicator_pane_g4_ParamLimits

0xade0,	// (0x0002586f) uni_indicator_pane_g4

0xadf4,	// (0x00025883) uni_indicator_pane_g5_ParamLimits

0xadf4,	// (0x00025883) uni_indicator_pane_g5

0xae08,	// (0x00025897) uni_indicator_pane_g6_ParamLimits

0xae08,	// (0x00025897) uni_indicator_pane_g6

0xf95a,	// (0x0002a3e9) uni_indicator_pane_g_ParamLimits

0xd750,	// (0x000281df) popup_tmo_note_window_ParamLimits

0xd750,	// (0x000281df) popup_tmo_note_window

0x7759,	// (0x000221e8) fshwr2_bg_pane

0xed44,	// (0x000297d3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xed44,	// (0x000297d3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x0002a954) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x0002a954) fshwr2_func_candi_cell_pane_g

0xc244,	// (0x00026cd3) bg_popup_window_pane_cp01

0xed7d,	// (0x0002980c) bg_popup_window_pane_g1_cp01

0xed86,	// (0x00029815) bg_popup_window_pane_cp22_ParamLimits

0xed86,	// (0x00029815) bg_popup_window_pane_cp22

0xed94,	// (0x00029823) listscroll_tmo_link_pane_ParamLimits

0xed94,	// (0x00029823) listscroll_tmo_link_pane

0xedd4,	// (0x00029863) popup_tmo_note_window_g1_ParamLimits

0xedd4,	// (0x00029863) popup_tmo_note_window_g1

0xede1,	// (0x00029870) tmo_note_info_pane_ParamLimits

0xede1,	// (0x00029870) tmo_note_info_pane

0xedfb,	// (0x0002988a) list_tmo_note_info_pane_g1_ParamLimits

0xedfb,	// (0x0002988a) list_tmo_note_info_pane_g1

0xee12,	// (0x000298a1) list_tmo_note_info_pane_g2_ParamLimits

0xee12,	// (0x000298a1) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x0002a959) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x0002a959) list_tmo_note_info_pane_g

0xee2e,	// (0x000298bd) list_tmo_note_info_text_pane_ParamLimits

0xee2e,	// (0x000298bd) list_tmo_note_info_text_pane

0xeeb3,	// (0x00029942) list_tmo_link_pane

0xeec0,	// (0x0002994f) scroll_pane_cp20

0xeecd,	// (0x0002995c) list_single_tmo_link_pane_ParamLimits

0xeecd,	// (0x0002995c) list_single_tmo_link_pane

0xeedd,	// (0x0002996c) list_single_tmo_link_pane_t1

0xeeeb,	// (0x0002997a) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeeb,	// (0x0002997a) list_tmo_note_info_text_pane_t1

0x819a,	// (0x00022c29) aid_size_touch_scroll_bar_cp01_ParamLimits

0x819a,	// (0x00022c29) aid_size_touch_scroll_bar_cp01

0x5315,	// (0x0001fda4) aid_size_touch_slider_marker

0x5fa0,	// (0x00020a2f) popup_settings_window_ParamLimits

0x5fa0,	// (0x00020a2f) popup_settings_window

0x54c0,	// (0x0001ff4f) popup_candi_list_indi_window

0x9739,	// (0x000241c8) aid_touch_navi_pane_ParamLimits

0x6f29,	// (0x000219b8) rs_clock_indi_pane

0x6f32,	// (0x000219c1) sctrl_sk_bottom_pane_ParamLimits

0x6f43,	// (0x000219d2) sctrl_sk_top_pane_ParamLimits

0x7028,	// (0x00021ab7) popup_fep_tooltip_window

0xe7b6,	// (0x00029245) aid_size_cell_widget_grid_ParamLimits

0xe7e6,	// (0x00029275) cell_ai5_widget_pane_g1_ParamLimits

0xe7e6,	// (0x00029275) cell_ai5_widget_pane_g1

0xe82e,	// (0x000292bd) cell_ai5_widget_pane_g6_ParamLimits

0xe83c,	// (0x000292cb) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x0002a8d7) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0002a8d7) cell_ai5_widget_pane_g

0xe96b,	// (0x000293fa) cell_ai5_widget_pane_t10_ParamLimits

0xe96b,	// (0x000293fa) cell_ai5_widget_pane_t10

0xe97d,	// (0x0002940c) grid_ai5_widget_pane_ParamLimits

0xea1e,	// (0x000294ad) cell_contacts_ai5_widget_pane_ParamLimits

0xea1e,	// (0x000294ad) cell_contacts_ai5_widget_pane

0xebfe,	// (0x0002968d) popup_discreet_window_t3_ParamLimits

0xebfe,	// (0x0002968d) popup_discreet_window_t3

0xec8d,	// (0x0002971c) popup_fshwr2_char_preview_window_ParamLimits

0xec8d,	// (0x0002971c) popup_fshwr2_char_preview_window

0xee4c,	// (0x000298db) tmo_note_info_pane_t1

0xee61,	// (0x000298f0) tmo_note_info_pane_t2

0xee7a,	// (0x00029909) tmo_note_info_pane_t3

0xee8f,	// (0x0002991e) tmo_note_info_pane_t4

0xeea1,	// (0x00029930) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x0002a95e) tmo_note_info_pane_t

0xeeb3,	// (0x00029942) list_tmo_link_pane_ParamLimits

0xeec0,	// (0x0002994f) scroll_pane_cp20_ParamLimits

0x7759,	// (0x000221e8) bg_popup_fep_char_preview_window_cp01

0xef04,	// (0x00029993) popup_fshwr2_char_preview_window_t1

0xef12,	// (0x000299a1) popup_candi_list_indi_window_g1

0xef1b,	// (0x000299aa) bg_cell_contacts_ai5_widget_pane

0xef27,	// (0x000299b6) cell_contacts_ai5_widget_pane_g1

0xef3b,	// (0x000299ca) cell_contacts_ai5_widget_pane_g2

0xef4a,	// (0x000299d9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x0002a969) cell_contacts_ai5_widget_pane_g

0xef5d,	// (0x000299ec) cell_contacts_ai5_widget_pane_t1

0x80d4,	// (0x00022b63) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd7,	// (0x00029a66) settings_container_pane

0x8d3e,	// (0x000237cd) listscroll_set_pane_copy1

0xb9bb,	// (0x0002644a) scroll_pane_cp121_copy1

0xefe3,	// (0x00029a72) set_content_pane_copy1

0xefeb,	// (0x00029a7a) aid_height_set_list_copy1_ParamLimits

0xefeb,	// (0x00029a7a) aid_height_set_list_copy1

0xb008,	// (0x00025a97) aid_size_parent_copy1_ParamLimits

0xb008,	// (0x00025a97) aid_size_parent_copy1

0xeff7,	// (0x00029a86) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeff7,	// (0x00029a86) button_value_adjust_pane_cp6_copy1

0x90c4,	// (0x00023b53) list_highlight_pane_cp2_copy1_ParamLimits

0x90c4,	// (0x00023b53) list_highlight_pane_cp2_copy1

0xf00b,	// (0x00029a9a) list_set_pane_copy1_ParamLimits

0xf00b,	// (0x00029a9a) list_set_pane_copy1

0xef72,	// (0x00029a01) main_pane_set_t1_copy1_ParamLimits

0xef72,	// (0x00029a01) main_pane_set_t1_copy1

0xefac,	// (0x00029a3b) main_pane_set_t2_copy1_ParamLimits

0xefac,	// (0x00029a3b) main_pane_set_t2_copy1

0xf0d2,	// (0x00029b61) main_pane_set_t3_copy1

0xf0e0,	// (0x00029b6f) main_pane_set_t4_copy1

0xefcb,	// (0x00029a5a) set_content_pane_g1_copy1_ParamLimits

0xefcb,	// (0x00029a5a) set_content_pane_g1_copy1

0xf0ee,	// (0x00029b7d) setting_code_pane_copy1

0xf0f8,	// (0x00029b87) setting_slider_graphic_pane_copy1

0xf0f8,	// (0x00029b87) setting_slider_pane_copy1

0xf102,	// (0x00029b91) setting_text_pane_copy1

0xf10c,	// (0x00029b9b) setting_volume_pane_copy1

0xf115,	// (0x00029ba4) settings_code_pane_cp2_copy1

0xf11d,	// (0x00029bac) settings_code_pane_cp_copy1_ParamLimits

0xf11d,	// (0x00029bac) settings_code_pane_cp_copy1

0xf131,	// (0x00029bc0) volume_set_pane_copy1

0xf13d,	// (0x00029bcc) volume_set_pane_g10_copy1

0xf149,	// (0x00029bd8) volume_set_pane_g1_copy1

0xf153,	// (0x00029be2) volume_set_pane_g2_copy1

0xf15d,	// (0x00029bec) volume_set_pane_g3_copy1

0xf167,	// (0x00029bf6) volume_set_pane_g4_copy1

0xf171,	// (0x00029c00) volume_set_pane_g5_copy1

0xf17b,	// (0x00029c0a) volume_set_pane_g6_copy1

0xf185,	// (0x00029c14) volume_set_pane_g7_copy1

0xf18f,	// (0x00029c1e) volume_set_pane_g8_copy1

0xf199,	// (0x00029c28) volume_set_pane_g9_copy1

0x784d,	// (0x000222dc) bg_set_opt_pane_cp_copy1_ParamLimits

0x784d,	// (0x000222dc) bg_set_opt_pane_cp_copy1

0xf1a3,	// (0x00029c32) setting_slider_pane_t1_copy1_ParamLimits

0xf1a3,	// (0x00029c32) setting_slider_pane_t1_copy1

0xf1c1,	// (0x00029c50) setting_slider_pane_t2_copy1_ParamLimits

0xf1c1,	// (0x00029c50) setting_slider_pane_t2_copy1

0xf1db,	// (0x00029c6a) setting_slider_pane_t3_copy1_ParamLimits

0xf1db,	// (0x00029c6a) setting_slider_pane_t3_copy1

0xf1f3,	// (0x00029c82) slider_set_pane_copy1_ParamLimits

0xf1f3,	// (0x00029c82) slider_set_pane_copy1

0x813b,	// (0x00022bca) set_opt_bg_pane_g1_copy2

0x8143,	// (0x00022bd2) set_opt_bg_pane_g2_copy2

0xf209,	// (0x00029c98) set_opt_bg_pane_g3_copy2

0x8153,	// (0x00022be2) set_opt_bg_pane_g4_copy2

0x815b,	// (0x00022bea) set_opt_bg_pane_g5_copy2

0x8163,	// (0x00022bf2) set_opt_bg_pane_g6_copy2

0xf213,	// (0x00029ca2) set_opt_bg_pane_g7_copy2

0xf21d,	// (0x00029cac) set_opt_bg_pane_g8_copy2

0xf227,	// (0x00029cb6) set_opt_bg_pane_g9_copy2

0xf231,	// (0x00029cc0) aid_size_touch_slider_mark_copy1_ParamLimits

0xf231,	// (0x00029cc0) aid_size_touch_slider_mark_copy1

0xf245,	// (0x00029cd4) slider_set_pane_g1_copy1

0xf24e,	// (0x00029cdd) slider_set_pane_g2_copy1

0xb90f,	// (0x0002639e) slider_set_pane_g3_copy1_ParamLimits

0xb90f,	// (0x0002639e) slider_set_pane_g3_copy1

0xb923,	// (0x000263b2) slider_set_pane_g4_copy1_ParamLimits

0xb923,	// (0x000263b2) slider_set_pane_g4_copy1

0xb93b,	// (0x000263ca) slider_set_pane_g5_copy1_ParamLimits

0xb93b,	// (0x000263ca) slider_set_pane_g5_copy1

0xb90f,	// (0x0002639e) slider_set_pane_g6_copy1_ParamLimits

0xb90f,	// (0x0002639e) slider_set_pane_g6_copy1

0xf256,	// (0x00029ce5) slider_set_pane_g7_copy1_ParamLimits

0xf256,	// (0x00029ce5) slider_set_pane_g7_copy1

0x776d,	// (0x000221fc) bg_set_opt_pane_cp2_copy1

0xf26c,	// (0x00029cfb) setting_slider_graphic_pane_g1_copy1

0xf275,	// (0x00029d04) setting_slider_graphic_pane_t1_copy1

0xf285,	// (0x00029d14) setting_slider_graphic_pane_t2_copy1

0xf295,	// (0x00029d24) slider_set_pane_cp_copy1

0xf2a5,	// (0x00029d34) input_focus_pane_cp1_copy1

0xf2ae,	// (0x00029d3d) list_set_text_pane_copy1

0xf2b6,	// (0x00029d45) setting_text_pane_g1_copy1

0x5c9d,	// (0x0002072c) set_text_pane_t1_copy1

0xf2a5,	// (0x00029d34) input_focus_pane_cp2_copy1

0xf2b6,	// (0x00029d45) setting_code_pane_g1_copy1

0xf2bf,	// (0x00029d4e) setting_code_pane_t1_copy1

0xf2cd,	// (0x00029d5c) list_set_graphic_pane_copy1

0x776d,	// (0x000221fc) bg_set_opt_pane_cp4_copy1

0x8a38,	// (0x000234c7) list_set_graphic_pane_g1_copy1_ParamLimits

0x8a38,	// (0x000234c7) list_set_graphic_pane_g1_copy1

0xf2df,	// (0x00029d6e) list_set_graphic_pane_g2_copy1

0x8a50,	// (0x000234df) list_set_graphic_pane_t1_copy1_ParamLimits

0x8a50,	// (0x000234df) list_set_graphic_pane_t1_copy1

0xc244,	// (0x00026cd3) rs_clock_indi_pane_g1

0xf2e7,	// (0x00029d76) rs_clock_indi_pane_t1

0xf2f5,	// (0x00029d84) rs_indi_pane

0xf2fd,	// (0x00029d8c) rs_indi_pane_g1

0xf306,	// (0x00029d95) rs_indi_pane_g2

0xf30f,	// (0x00029d9e) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x0002a970) rs_indi_pane_g

0x8d3e,	// (0x000237cd) bg_popup_preview_window_pane_cp03

0xf318,	// (0x00029da7) popup_fep_tooltip_window_t1

0xcef8,	// (0x00027987) popup_note2_window_g2_ParamLimits

0xcef8,	// (0x00027987) popup_note2_window_g2

0x0001,

0xfc7f,	// (0x0002a70e) popup_note2_window_g_ParamLimits

0xfc7f,	// (0x0002a70e) popup_note2_window_g

0xd400,	// (0x00027e8f) bg_popup_sub_pane_cp11_ParamLimits

0xd40d,	// (0x00027e9c) cell_ai3_links_pane_g1_ParamLimits

0xd424,	// (0x00027eb3) cell_ai3_links_pane_t1

0x5c9d,	// (0x0002072c) set_text_pane_t1_copy1_ParamLimits

0x8c4b,	// (0x000236da) cell_graphic_popup_pane_cp2_ParamLimits

0x8c4b,	// (0x000236da) cell_graphic_popup_pane_cp2

0xf326,	// (0x00029db5) cell_graphic_popup_pane_g1_cp2

0x7e1f,	// (0x000228ae) cell_graphic_popup_pane_g2_cp2

0xf32e,	// (0x00029dbd) cell_graphic_popup_pane_g3_cp2

0xf336,	// (0x00029dc5) cell_graphic_popup_pane_t2_cp2

0x7e30,	// (0x000228bf) grid_highlight_pane_cp3_cp2

0x8487,	// (0x00022f16) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x80d4,	// (0x00022b63) main_tmo_pane_ParamLimits

0xd744,	// (0x000281d3) popup_tmo_big_image_note_window

0xe7d6,	// (0x00029265) cell_ai5_widget_list_pane

0xe7de,	// (0x0002926d) cell_ai5_widget_lrg_icon_pane

0xee4c,	// (0x000298db) tmo_note_info_pane_t1_ParamLimits

0xee61,	// (0x000298f0) tmo_note_info_pane_t2_ParamLimits

0xee7a,	// (0x00029909) tmo_note_info_pane_t3_ParamLimits

0xee8f,	// (0x0002991e) tmo_note_info_pane_t4_ParamLimits

0xeea1,	// (0x00029930) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x0002a95e) tmo_note_info_pane_t_ParamLimits

0xefd7,	// (0x00029a66) settings_container_pane_ParamLimits

0xf29d,	// (0x00029d2c) indicator_popup_pane_cp5

0xf29d,	// (0x00029d2c) indicator_popup_pane_cp6

0xf2cd,	// (0x00029d5c) list_set_graphic_pane_copy1_ParamLimits

0x7759,	// (0x000221e8) bg_popup_window_pane_cp23

0xf344,	// (0x00029dd3) popup_tmo_big_image_note_window_g1

0xf350,	// (0x00029ddf) popup_tmo_big_image_note_window_t1

0xf360,	// (0x00029def) popup_tmo_big_image_note_window_t2

0xf370,	// (0x00029dff) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x0002a977) popup_tmo_big_image_note_window_t

0xf380,	// (0x00029e0f) cell_ai5_widget_lrg_icon_pane_g1

0xf388,	// (0x00029e17) cell_ai5_widget_lrg_icon_pane_t1

0xf396,	// (0x00029e25) cell_ai5_widget_list_row_pane_ParamLimits

0xf396,	// (0x00029e25) cell_ai5_widget_list_row_pane

0xf3af,	// (0x00029e3e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3af,	// (0x00029e3e) cell_ai5_widget_list_row_pane_g1

0xf3bc,	// (0x00029e4b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3bc,	// (0x00029e4b) cell_ai5_widget_list_row_pane_t1

0xf3d4,	// (0x00029e63) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3d4,	// (0x00029e63) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeef,	// (0x0002a97e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x0002a97e) cell_ai5_widget_list_row_pane_t

0x7759,	// (0x000221e8) main_fep_vtchi_ss_pane

0xf3e6,	// (0x00029e75) popup_fep_char_pre_window

0xf3ee,	// (0x00029e7d) popup_fep_ituss_window

0xf3f9,	// (0x00029e88) popup_fep_vkbss_window

0xf404,	// (0x00029e93) grid_vkbss_keypad_pane_ParamLimits

0xf404,	// (0x00029e93) grid_vkbss_keypad_pane

0xf414,	// (0x00029ea3) ituss_keypad_pane

0xf41c,	// (0x00029eab) aid_vkbss_key_offset_ParamLimits

0xf41c,	// (0x00029eab) aid_vkbss_key_offset

0xf42b,	// (0x00029eba) cell_vkbss_key_pane_ParamLimits

0xf42b,	// (0x00029eba) cell_vkbss_key_pane

0xf441,	// (0x00029ed0) bg_cell_vkbss_key_g1_ParamLimits

0xf441,	// (0x00029ed0) bg_cell_vkbss_key_g1

0xf44d,	// (0x00029edc) cell_vkbss_key_3p_pane_ParamLimits

0xf44d,	// (0x00029edc) cell_vkbss_key_3p_pane

0xf467,	// (0x00029ef6) cell_vkbss_key_g1_ParamLimits

0xf467,	// (0x00029ef6) cell_vkbss_key_g1

0xf481,	// (0x00029f10) cell_vkbss_key_t1_ParamLimits

0xf481,	// (0x00029f10) cell_vkbss_key_t1

0xf4ac,	// (0x00029f3b) cell_ituss_key_pane_ParamLimits

0xf4ac,	// (0x00029f3b) cell_ituss_key_pane

0xf4bb,	// (0x00029f4a) bg_cell_ituss_key_g1_ParamLimits

0xf4bb,	// (0x00029f4a) bg_cell_ituss_key_g1

0xf4c7,	// (0x00029f56) cell_ituss_key_pane_g1_ParamLimits

0xf4c7,	// (0x00029f56) cell_ituss_key_pane_g1

0xf4d3,	// (0x00029f62) cell_ituss_key_pane_g2_ParamLimits

0xf4d3,	// (0x00029f62) cell_ituss_key_pane_g2

0x0001,

0xfef4,	// (0x0002a983) cell_ituss_key_pane_g_ParamLimits

0xfef4,	// (0x0002a983) cell_ituss_key_pane_g

0xf4e7,	// (0x00029f76) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x00029f76) cell_ituss_key_t1

0xf505,	// (0x00029f94) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x00029f94) cell_ituss_key_t2

0xf524,	// (0x00029fb3) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x00029fb3) cell_ituss_key_t3

0xf543,	// (0x00029fd2) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x00029fd2) cell_ituss_key_t4

0x0003,

0xfef9,	// (0x0002a988) cell_ituss_key_t_ParamLimits

0xfef9,	// (0x0002a988) cell_ituss_key_t

0xf562,	// (0x00029ff1) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x00029ff9) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0002a001) cell_vkbss_key_3p_pane_g3

0x0002,

0xff02,	// (0x0002a991) cell_vkbss_key_3p_pane_g

0x7759,	// (0x000221e8) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0002a009) popup_fep_char_pre_window_t1

0xe7ac,	// (0x0002923b) main_ai5_sk_pane

0xef1b,	// (0x000299aa) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef27,	// (0x000299b6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef3b,	// (0x000299ca) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4a,	// (0x000299d9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x0002a969) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5d,	// (0x000299ec) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x80d4,	// (0x00022b63) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0002a018) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small

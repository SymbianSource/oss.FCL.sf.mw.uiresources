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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005497c };

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
0x54a6,	// (0x00059e22) Screen

0x54b2,	// (0x00059e2e) application_window_ParamLimits

0x54b2,	// (0x00059e2e) application_window

0xed54,	// (0x000636d0) screen_g1

0x550e,	// (0x00059e8a) area_bottom_pane_ParamLimits

0x550e,	// (0x00059e8a) area_bottom_pane

0x55ce,	// (0x00059f4a) area_top_pane_ParamLimits

0x55ce,	// (0x00059f4a) area_top_pane

0x566c,	// (0x00059fe8) main_pane_ParamLimits

0x566c,	// (0x00059fe8) main_pane

0xed5e,	// (0x000636da) misc_graphics

0x8e1a,	// (0x0005d796) battery_pane_ParamLimits

0x8e1a,	// (0x0005d796) battery_pane

0x9b00,	// (0x0005e47c) bg_status_flat_pane_g8

0x9b08,	// (0x0005e484) bg_status_flat_pane_g9

0x8ee2,	// (0x0005d85e) context_pane_ParamLimits

0x8ee2,	// (0x0005d85e) context_pane

0x8ff8,	// (0x0005d974) navi_pane_ParamLimits

0x8ff8,	// (0x0005d974) navi_pane

0x907c,	// (0x0005d9f8) signal_pane_ParamLimits

0x907c,	// (0x0005d9f8) signal_pane

0x0008,

0xf874,	// (0x000641f0) bg_status_flat_pane_g

0x90e9,	// (0x0005da65) status_pane_g1_ParamLimits

0x90e9,	// (0x0005da65) status_pane_g1

0x90fd,	// (0x0005da79) status_pane_g2_ParamLimits

0x90fd,	// (0x0005da79) status_pane_g2

0x9109,	// (0x0005da85) status_pane_g3_ParamLimits

0x9109,	// (0x0005da85) status_pane_g3

0x0004,

0xf79b,	// (0x00064117) status_pane_g_ParamLimits

0xf79b,	// (0x00064117) status_pane_g

0x913d,	// (0x0005dab9) title_pane_ParamLimits

0x913d,	// (0x0005dab9) title_pane

0x917a,	// (0x0005daf6) uni_indicator_pane_ParamLimits

0x917a,	// (0x0005daf6) uni_indicator_pane

0x8d4a,	// (0x0005d6c6) bg_list_pane_ParamLimits

0x8d4a,	// (0x0005d6c6) bg_list_pane

0x7076,	// (0x0005b9f2) find_pane

0x8d6a,	// (0x0005d6e6) listscroll_app_pane_ParamLimits

0x8d6a,	// (0x0005d6e6) listscroll_app_pane

0x8d76,	// (0x0005d6f2) listscroll_form_pane

0x707e,	// (0x0005b9fa) listscroll_gen_pane_ParamLimits

0x707e,	// (0x0005b9fa) listscroll_gen_pane

0x7092,	// (0x0005ba0e) listscroll_set_pane

0x6557,	// (0x0005aed3) main_idle_act_pane

0x3926,	// (0x000582a2) main_idle_trad_pane

0x3926,	// (0x000582a2) main_list_empty_pane

0x8d6a,	// (0x0005d6e6) main_midp_pane

0x8d90,	// (0x0005d70c) main_pane_g1_ParamLimits

0x8d90,	// (0x0005d70c) main_pane_g1

0x70a8,	// (0x0005ba24) popup_ai_message_window_ParamLimits

0x70a8,	// (0x0005ba24) popup_ai_message_window

0x714c,	// (0x0005bac8) popup_fep_china_uni_window_ParamLimits

0x714c,	// (0x0005bac8) popup_fep_china_uni_window

0x71a6,	// (0x0005bb22) popup_fep_japan_candidate_window_ParamLimits

0x71a6,	// (0x0005bb22) popup_fep_japan_candidate_window

0x71c4,	// (0x0005bb40) popup_fep_japan_predictive_window_ParamLimits

0x71c4,	// (0x0005bb40) popup_fep_japan_predictive_window

0x71f4,	// (0x0005bb70) popup_find_window

0x7201,	// (0x0005bb7d) popup_grid_graphic_window_ParamLimits

0x7201,	// (0x0005bb7d) popup_grid_graphic_window

0x722b,	// (0x0005bba7) popup_large_graphic_colour_window

0x7251,	// (0x0005bbcd) popup_menu_window_ParamLimits

0x7251,	// (0x0005bbcd) popup_menu_window

0x740d,	// (0x0005bd89) popup_note_image_window

0x73f9,	// (0x0005bd75) popup_note_wait_window_ParamLimits

0x73f9,	// (0x0005bd75) popup_note_wait_window

0x73f9,	// (0x0005bd75) popup_note_window_ParamLimits

0x73f9,	// (0x0005bd75) popup_note_window

0x7463,	// (0x0005bddf) popup_query_code_window_ParamLimits

0x7463,	// (0x0005bddf) popup_query_code_window

0x7477,	// (0x0005bdf3) popup_query_data_code_window_ParamLimits

0x7477,	// (0x0005bdf3) popup_query_data_code_window

0x7494,	// (0x0005be10) popup_query_data_window_ParamLimits

0x7494,	// (0x0005be10) popup_query_data_window

0x74b0,	// (0x0005be2c) popup_query_sat_info_window_ParamLimits

0x74b0,	// (0x0005be2c) popup_query_sat_info_window

0x74e9,	// (0x0005be65) popup_snote_single_graphic_window_ParamLimits

0x74e9,	// (0x0005be65) popup_snote_single_graphic_window

0x74e9,	// (0x0005be65) popup_snote_single_text_window_ParamLimits

0x74e9,	// (0x0005be65) popup_snote_single_text_window

0x74fe,	// (0x0005be7a) popup_sub_window_general

0x762e,	// (0x0005bfaa) popup_window_general_ParamLimits

0x762e,	// (0x0005bfaa) popup_window_general

0x8d9e,	// (0x0005d71a) power_save_pane

0x6efa,	// (0x0005b876) control_pane_g1_ParamLimits

0x6efa,	// (0x0005b876) control_pane_g1

0x6f21,	// (0x0005b89d) control_pane_g2_ParamLimits

0x6f21,	// (0x0005b89d) control_pane_g2

0x6f48,	// (0x0005b8c4) control_pane_g3_ParamLimits

0x6f48,	// (0x0005b8c4) control_pane_g3

0x0007,

0xf783,	// (0x000640ff) control_pane_g_ParamLimits

0xf783,	// (0x000640ff) control_pane_g

0x6f79,	// (0x0005b8f5) control_pane_t1_ParamLimits

0x6f79,	// (0x0005b8f5) control_pane_t1

0x6fcd,	// (0x0005b949) control_pane_t2_ParamLimits

0x6fcd,	// (0x0005b949) control_pane_t2

0x0002,

0xf794,	// (0x00064110) control_pane_t_ParamLimits

0xf794,	// (0x00064110) control_pane_t

0x6e53,	// (0x0005b7cf) navi_navi_volume_pane_cp1

0x6e5b,	// (0x0005b7d7) status_small_icon_pane

0x3a28,	// (0x000583a4) status_small_pane_g1_ParamLimits

0x3a28,	// (0x000583a4) status_small_pane_g1

0x6e63,	// (0x0005b7df) status_small_pane_g2_ParamLimits

0x6e63,	// (0x0005b7df) status_small_pane_g2

0x6e6f,	// (0x0005b7eb) status_small_pane_g3_ParamLimits

0x6e6f,	// (0x0005b7eb) status_small_pane_g3

0x6e7b,	// (0x0005b7f7) status_small_pane_g4_ParamLimits

0x6e7b,	// (0x0005b7f7) status_small_pane_g4

0x6e87,	// (0x0005b803) status_small_pane_g5_ParamLimits

0x6e87,	// (0x0005b803) status_small_pane_g5

0x6e95,	// (0x0005b811) status_small_pane_g6_ParamLimits

0x6e95,	// (0x0005b811) status_small_pane_g6

0x0007,

0xf772,	// (0x000640ee) status_small_pane_g_ParamLimits

0xf772,	// (0x000640ee) status_small_pane_g

0x6ec4,	// (0x0005b840) status_small_pane_t1

0x6ee6,	// (0x0005b862) status_small_wait_pane_ParamLimits

0x6ee6,	// (0x0005b862) status_small_wait_pane

0x692a,	// (0x0005b2a6) aid_levels_signal_ParamLimits

0x692a,	// (0x0005b2a6) aid_levels_signal

0x693c,	// (0x0005b2b8) signal_pane_g1_ParamLimits

0x693c,	// (0x0005b2b8) signal_pane_g1

0x6951,	// (0x0005b2cd) signal_pane_g2_ParamLimits

0x6951,	// (0x0005b2cd) signal_pane_g2

0x0003,

0xf703,	// (0x0006407f) signal_pane_g_ParamLimits

0xf703,	// (0x0006407f) signal_pane_g

0x1359,	// (0x00055cd5) context_pane_g1

0x58ad,	// (0x0005a229) title_pane_g1

0x58d7,	// (0x0005a253) title_pane_t1

0xed74,	// (0x000636f0) title_pane_t2

0xed9a,	// (0x00063716) title_pane_t3

0x0002,

0xf557,	// (0x00063ed3) title_pane_t

0x9192,	// (0x0005db0e) aid_levels_battery_ParamLimits

0x9192,	// (0x0005db0e) aid_levels_battery

0x91a6,	// (0x0005db22) battery_pane_g1_ParamLimits

0x91a6,	// (0x0005db22) battery_pane_g1

0x91bc,	// (0x0005db38) battery_pane_g2_ParamLimits

0x91bc,	// (0x0005db38) battery_pane_g2

0x0001,

0xf7a6,	// (0x00064122) battery_pane_g_ParamLimits

0xf7a6,	// (0x00064122) battery_pane_g

0xa424,	// (0x0005eda0) uni_indicator_pane_g1

0xa437,	// (0x0005edb3) uni_indicator_pane_g2

0xa449,	// (0x0005edc5) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00064298) uni_indicator_pane_g

0x37c6,	// (0x00058142) navi_icon_pane_ParamLimits

0x37c6,	// (0x00058142) navi_icon_pane

0x371b,	// (0x00058097) navi_midp_pane

0x37e2,	// (0x0005815e) navi_navi_pane

0x37ec,	// (0x00058168) navi_text_pane_ParamLimits

0x37ec,	// (0x00058168) navi_text_pane

0xed54,	// (0x000636d0) status_small_wait_pane_g1

0xefeb,	// (0x00063967) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00064293) status_small_wait_pane_g

0xa14b,	// (0x0005eac7) navi_navi_icon_text_pane

0xa153,	// (0x0005eacf) navi_navi_pane_g1_ParamLimits

0xa153,	// (0x0005eacf) navi_navi_pane_g1

0xa165,	// (0x0005eae1) navi_navi_pane_g2_ParamLimits

0xa165,	// (0x0005eae1) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00064261) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00064261) navi_navi_pane_g

0xa177,	// (0x0005eaf3) navi_navi_tabs_pane

0xa180,	// (0x0005eafc) navi_navi_text_pane

0xa14b,	// (0x0005eac7) navi_navi_volume_pane

0xa127,	// (0x0005eaa3) navi_text_pane_t1

0xa11b,	// (0x0005ea97) navi_icon_pane_g1

0xa06e,	// (0x0005e9ea) navi_navi_text_pane_t1

0x790e,	// (0x0005c28a) navi_navi_volume_pane_g1

0x7916,	// (0x0005c292) volume_small_pane

0x9fd4,	// (0x0005e950) navi_navi_icon_text_pane_g1

0x9fdc,	// (0x0005e958) navi_navi_icon_text_pane_t1

0x37e2,	// (0x0005815e) navi_tabs_2_long_pane

0x37e2,	// (0x0005815e) navi_tabs_2_pane

0x37e2,	// (0x0005815e) navi_tabs_3_long_pane

0x37e2,	// (0x0005815e) navi_tabs_3_pane

0x37e2,	// (0x0005815e) navi_tabs_4_pane

0x78ee,	// (0x0005c26a) tabs_2_active_pane_ParamLimits

0x78ee,	// (0x0005c26a) tabs_2_active_pane

0x78fe,	// (0x0005c27a) tabs_2_passive_pane_ParamLimits

0x78fe,	// (0x0005c27a) tabs_2_passive_pane

0x78bc,	// (0x0005c238) tabs_3_active_pane_ParamLimits

0x78bc,	// (0x0005c238) tabs_3_active_pane

0x78cc,	// (0x0005c248) tabs_3_passive_pane_ParamLimits

0x78cc,	// (0x0005c248) tabs_3_passive_pane

0x78dd,	// (0x0005c259) tabs_3_passive_pane_cp_ParamLimits

0x78dd,	// (0x0005c259) tabs_3_passive_pane_cp

0x7878,	// (0x0005c1f4) tabs_4_active_pane_ParamLimits

0x7878,	// (0x0005c1f4) tabs_4_active_pane

0x7889,	// (0x0005c205) tabs_4_passive_pane_ParamLimits

0x7889,	// (0x0005c205) tabs_4_passive_pane

0x789a,	// (0x0005c216) tabs_4_passive_pane_cp_ParamLimits

0x789a,	// (0x0005c216) tabs_4_passive_pane_cp

0x78ab,	// (0x0005c227) tabs_4_passive_pane_cp2_ParamLimits

0x78ab,	// (0x0005c227) tabs_4_passive_pane_cp2

0x7854,	// (0x0005c1d0) tabs_2_long_active_pane_ParamLimits

0x7854,	// (0x0005c1d0) tabs_2_long_active_pane

0x7866,	// (0x0005c1e2) tabs_2_long_passive_pane_ParamLimits

0x7866,	// (0x0005c1e2) tabs_2_long_passive_pane

0x780f,	// (0x0005c18b) tabs_3_long_active_pane_ParamLimits

0x780f,	// (0x0005c18b) tabs_3_long_active_pane

0x7828,	// (0x0005c1a4) tabs_3_long_passive_pane_ParamLimits

0x7828,	// (0x0005c1a4) tabs_3_long_passive_pane

0x783b,	// (0x0005c1b7) tabs_3_long_passive_pane_cp_ParamLimits

0x783b,	// (0x0005c1b7) tabs_3_long_passive_pane_cp

0x77b5,	// (0x0005c131) volume_small_pane_g1

0x77be,	// (0x0005c13a) volume_small_pane_g2

0x77c7,	// (0x0005c143) volume_small_pane_g3

0x77d0,	// (0x0005c14c) volume_small_pane_g4

0x77d9,	// (0x0005c155) volume_small_pane_g5

0x77e2,	// (0x0005c15e) volume_small_pane_g6

0x77eb,	// (0x0005c167) volume_small_pane_g7

0x77f4,	// (0x0005c170) volume_small_pane_g8

0x77fd,	// (0x0005c179) volume_small_pane_g9

0x7806,	// (0x0005c182) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0006422d) volume_small_pane_g

0xedac,	// (0x00063728) bg_active_tab_pane_cp2_ParamLimits

0xedac,	// (0x00063728) bg_active_tab_pane_cp2

0x593f,	// (0x0005a2bb) tabs_3_active_pane_g1

0x5947,	// (0x0005a2c3) tabs_3_active_pane_t1

0xedac,	// (0x00063728) bg_passive_tab_pane_cp2_ParamLimits

0xedac,	// (0x00063728) bg_passive_tab_pane_cp2

0x593f,	// (0x0005a2bb) tabs_3_passive_pane_g1

0x5947,	// (0x0005a2c3) tabs_3_passive_pane_t1

0xedac,	// (0x00063728) bg_active_tab_pane_cp3_ParamLimits

0xedac,	// (0x00063728) bg_active_tab_pane_cp3

0x5959,	// (0x0005a2d5) tabs_4_active_pane_g1

0x5961,	// (0x0005a2dd) tabs_4_active_pane_t1

0xedac,	// (0x00063728) bg_passive_tab_pane_cp3_ParamLimits

0xedac,	// (0x00063728) bg_passive_tab_pane_cp3

0x5959,	// (0x0005a2d5) tabs_4_1_passive_pane_g1

0x5961,	// (0x0005a2dd) tabs_4_1_passive_pane_t1

0x8d6a,	// (0x0005d6e6) list_highlight_pane_cp2

0xa68c,	// (0x0005f008) list_set_pane_ParamLimits

0xa68c,	// (0x0005f008) list_set_pane

0xa72e,	// (0x0005f0aa) main_pane_set_t1_ParamLimits

0xa72e,	// (0x0005f0aa) main_pane_set_t1

0xa74e,	// (0x0005f0ca) main_pane_set_t2_ParamLimits

0xa74e,	// (0x0005f0ca) main_pane_set_t2

0xa762,	// (0x0005f0de) main_pane_set_t3_ParamLimits

0xa762,	// (0x0005f0de) main_pane_set_t3

0xa774,	// (0x0005f0f0) main_pane_set_t4_ParamLimits

0xa774,	// (0x0005f0f0) main_pane_set_t4

0x0003,

0xf981,	// (0x000642fd) main_pane_set_t_ParamLimits

0xf981,	// (0x000642fd) main_pane_set_t

0xa786,	// (0x0005f102) setting_code_pane

0xa792,	// (0x0005f10e) setting_slider_graphic_pane

0xa792,	// (0x0005f10e) setting_slider_pane

0xa792,	// (0x0005f10e) setting_text_pane

0xa792,	// (0x0005f10e) setting_volume_pane

0x5973,	// (0x0005a2ef) volume_set_pane

0xedac,	// (0x00063728) bg_set_opt_pane_cp

0x597b,	// (0x0005a2f7) setting_slider_pane_t1

0x5994,	// (0x0005a310) setting_slider_pane_t2

0x59ae,	// (0x0005a32a) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00063eda) setting_slider_pane_t

0x59c6,	// (0x0005a342) slider_set_pane

0xed5e,	// (0x000636da) bg_set_opt_pane_cp2

0xedba,	// (0x00063736) setting_slider_graphic_pane_g1

0x59dc,	// (0x0005a358) setting_slider_graphic_pane_t1

0x59ec,	// (0x0005a368) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00063ee1) setting_slider_graphic_pane_t

0x59fc,	// (0x0005a378) slider_set_pane_cp

0xed5e,	// (0x000636da) input_focus_pane_cp1

0xa64b,	// (0x0005efc7) list_set_text_pane

0xed54,	// (0x000636d0) setting_text_pane_g1

0xed5e,	// (0x000636da) input_focus_pane_cp2

0xed54,	// (0x000636d0) setting_code_pane_g1

0xedc3,	// (0x0006373f) setting_code_pane_t1

0x3635,	// (0x00057fb1) set_text_pane_t1_ParamLimits

0x3635,	// (0x00057fb1) set_text_pane_t1

0xf1c4,	// (0x00063b40) set_opt_bg_pane_g1

0xf1cc,	// (0x00063b48) set_opt_bg_pane_g2

0xa625,	// (0x0005efa1) set_opt_bg_pane_g3

0xf1dc,	// (0x00063b58) set_opt_bg_pane_g4

0xf1e4,	// (0x00063b60) set_opt_bg_pane_g5

0xf1ec,	// (0x00063b68) set_opt_bg_pane_g6

0xa62f,	// (0x0005efab) set_opt_bg_pane_g7

0xa637,	// (0x0005efb3) set_opt_bg_pane_g8

0xa641,	// (0x0005efbd) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x000642ea) set_opt_bg_pane_g

0xa618,	// (0x0005ef94) slider_set_pane_g1

0x7995,	// (0x0005c311) slider_set_pane_g2

0x0006,

0xf95f,	// (0x000642db) slider_set_pane_g

0x791f,	// (0x0005c29b) volume_set_pane_g1

0x7927,	// (0x0005c2a3) volume_set_pane_g2

0x792f,	// (0x0005c2ab) volume_set_pane_g3

0x7937,	// (0x0005c2b3) volume_set_pane_g4

0x793f,	// (0x0005c2bb) volume_set_pane_g5

0x7947,	// (0x0005c2c3) volume_set_pane_g6

0x794f,	// (0x0005c2cb) volume_set_pane_g7

0x7957,	// (0x0005c2d3) volume_set_pane_g8

0x795f,	// (0x0005c2db) volume_set_pane_g9

0x7967,	// (0x0005c2e3) volume_set_pane_g10

0x0009,

0xf937,	// (0x000642b3) volume_set_pane_g

0x5a04,	// (0x0005a380) indicator_pane_ParamLimits

0x5a04,	// (0x0005a380) indicator_pane

0x5a10,	// (0x0005a38c) main_idle_pane_g2_ParamLimits

0x5a10,	// (0x0005a38c) main_idle_pane_g2

0x5a38,	// (0x0005a3b4) main_pane_idle_g1_ParamLimits

0x5a38,	// (0x0005a3b4) main_pane_idle_g1

0xedd1,	// (0x0006374d) popup_clock_digital_analogue_window_ParamLimits

0xedd1,	// (0x0006374d) popup_clock_digital_analogue_window

0x5a45,	// (0x0005a3c1) soft_indicator_pane_ParamLimits

0x5a45,	// (0x0005a3c1) soft_indicator_pane

0x5a51,	// (0x0005a3cd) wallpaper_pane_ParamLimits

0x5a51,	// (0x0005a3cd) wallpaper_pane

0xed54,	// (0x000636d0) wallpaper_pane_g1

0x5a5d,	// (0x0005a3d9) indicator_pane_g1_ParamLimits

0x5a5d,	// (0x0005a3d9) indicator_pane_g1

0xaab0,	// (0x0005f42c) navi_navi_icon_text_pane_srt_g1

0xedff,	// (0x0006377b) soft_indicator_pane_t1

0xee19,	// (0x00063795) aid_ps_area_pane

0x5a69,	// (0x0005a3e5) aid_ps_clock_pane

0xee2a,	// (0x000637a6) aid_ps_indicator_pane

0xee36,	// (0x000637b2) indicator_ps_pane_ParamLimits

0xee36,	// (0x000637b2) indicator_ps_pane

0xee45,	// (0x000637c1) power_save_pane_g1_ParamLimits

0xee45,	// (0x000637c1) power_save_pane_g1

0xee51,	// (0x000637cd) power_save_pane_g2_ParamLimits

0xee51,	// (0x000637cd) power_save_pane_g2

0x54c2,	// (0x00059e3e) aid_navinavi_width_pane

0xee19,	// (0x00063795) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00063ee6) power_save_pane_g_ParamLimits

0xf56a,	// (0x00063ee6) power_save_pane_g

0xee5f,	// (0x000637db) power_save_pane_t1_ParamLimits

0xee5f,	// (0x000637db) power_save_pane_t1

0x5a69,	// (0x0005a3e5) aid_ps_clock_pane_ParamLimits

0xee2a,	// (0x000637a6) aid_ps_indicator_pane_ParamLimits

0xee71,	// (0x000637ed) power_save_pane_t4_ParamLimits

0xee71,	// (0x000637ed) power_save_pane_t4

0x0001,

0xf56f,	// (0x00063eeb) power_save_pane_t_ParamLimits

0xf56f,	// (0x00063eeb) power_save_pane_t

0xee9b,	// (0x00063817) power_save_t3_ParamLimits

0xee9b,	// (0x00063817) power_save_t3

0xee86,	// (0x00063802) power_save_t2_ParamLimits

0xee86,	// (0x00063802) power_save_t2

0xeeb0,	// (0x0006382c) indicator_ps_pane_g1

0x5a77,	// (0x0005a3f3) ai_gene_pane_ParamLimits

0x5a77,	// (0x0005a3f3) ai_gene_pane

0x5a83,	// (0x0005a3ff) ai_links_pane_ParamLimits

0x5a83,	// (0x0005a3ff) ai_links_pane

0x5a8f,	// (0x0005a40b) indicator_pane_cp1_ParamLimits

0x5a8f,	// (0x0005a40b) indicator_pane_cp1

0x5a9b,	// (0x0005a417) main_pane_idle_g1_cp_ParamLimits

0x5a9b,	// (0x0005a417) main_pane_idle_g1_cp

0x5aa7,	// (0x0005a423) popup_ai_links_title_window

0x5ab0,	// (0x0005a42c) soft_indicator_pane_cp1_ParamLimits

0x5ab0,	// (0x0005a42c) soft_indicator_pane_cp1

0xa412,	// (0x0005ed8e) ai_links_pane_g1

0xa41b,	// (0x0005ed97) grid_ai_links_pane

0xa3f5,	// (0x0005ed71) ai_gene_pane_1

0xa400,	// (0x0005ed7c) ai_gene_pane_2

0xa409,	// (0x0005ed85) list_highlight_pane_cp4

0xa3d9,	// (0x0005ed55) cell_ai_link_pane_ParamLimits

0xa3d9,	// (0x0005ed55) cell_ai_link_pane

0xa3d1,	// (0x0005ed4d) cell_ai_link_pane_g1

0xefeb,	// (0x00063967) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0006428e) cell_ai_link_pane_g

0xed5e,	// (0x000636da) grid_highlight_cp2

0xed5e,	// (0x000636da) bg_popup_sub_pane_cp1

0xeec7,	// (0x00063843) popup_ai_links_title_window_t1

0xa321,	// (0x0005ec9d) ai_gene_pane_1_g1_ParamLimits

0xa321,	// (0x0005ec9d) ai_gene_pane_1_g1

0xa32d,	// (0x0005eca9) ai_gene_pane_1_g2_ParamLimits

0xa32d,	// (0x0005eca9) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00064284) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00064284) ai_gene_pane_1_g

0xa33a,	// (0x0005ecb6) ai_gene_pane_1_t1_ParamLimits

0xa33a,	// (0x0005ecb6) ai_gene_pane_1_t1

0xa36e,	// (0x0005ecea) grid_ai_soft_ind_pane

0xa30c,	// (0x0005ec88) ai_gene_pane_2_t1_ParamLimits

0xa30c,	// (0x0005ec88) ai_gene_pane_2_t1

0x5abc,	// (0x0005a438) main_pane_empty_t1_ParamLimits

0x5abc,	// (0x0005a438) main_pane_empty_t1

0x5ad4,	// (0x0005a450) main_pane_empty_t2_ParamLimits

0x5ad4,	// (0x0005a450) main_pane_empty_t2

0x5ae9,	// (0x0005a465) main_pane_empty_t3_ParamLimits

0x5ae9,	// (0x0005a465) main_pane_empty_t3

0x5afb,	// (0x0005a477) main_pane_empty_t4_ParamLimits

0x5afb,	// (0x0005a477) main_pane_empty_t4

0x5b0d,	// (0x0005a489) main_pane_empty_t5_ParamLimits

0x5b0d,	// (0x0005a489) main_pane_empty_t5

0x0004,

0xf574,	// (0x00063ef0) main_pane_empty_t_ParamLimits

0xf574,	// (0x00063ef0) main_pane_empty_t

0xf215,	// (0x00063b91) bg_popup_window_pane_ParamLimits

0xf215,	// (0x00063b91) bg_popup_window_pane

0xa07c,	// (0x0005e9f8) find_popup_pane_cp2_ParamLimits

0xa07c,	// (0x0005e9f8) find_popup_pane_cp2

0xa088,	// (0x0005ea04) heading_pane_ParamLimits

0xa088,	// (0x0005ea04) heading_pane

0xed5e,	// (0x000636da) bg_popup_sub_pane

0x9ff6,	// (0x0005e972) bg_popup_window_pane_g1_ParamLimits

0x9ff6,	// (0x0005e972) bg_popup_window_pane_g1

0xa002,	// (0x0005e97e) bg_popup_window_pane_g2_ParamLimits

0xa002,	// (0x0005e97e) bg_popup_window_pane_g2

0xa00e,	// (0x0005e98a) bg_popup_window_pane_g3_ParamLimits

0xa00e,	// (0x0005e98a) bg_popup_window_pane_g3

0xa01a,	// (0x0005e996) bg_popup_window_pane_g4_ParamLimits

0xa01a,	// (0x0005e996) bg_popup_window_pane_g4

0xa026,	// (0x0005e9a2) bg_popup_window_pane_g5_ParamLimits

0xa026,	// (0x0005e9a2) bg_popup_window_pane_g5

0xa032,	// (0x0005e9ae) bg_popup_window_pane_g6_ParamLimits

0xa032,	// (0x0005e9ae) bg_popup_window_pane_g6

0xa03e,	// (0x0005e9ba) bg_popup_window_pane_g7_ParamLimits

0xa03e,	// (0x0005e9ba) bg_popup_window_pane_g7

0xa04a,	// (0x0005e9c6) bg_popup_window_pane_g8_ParamLimits

0xa04a,	// (0x0005e9c6) bg_popup_window_pane_g8

0xa056,	// (0x0005e9d2) bg_popup_window_pane_g9_ParamLimits

0xa056,	// (0x0005e9d2) bg_popup_window_pane_g9

0xa062,	// (0x0005e9de) bg_popup_window_pane_g10_ParamLimits

0xa062,	// (0x0005e9de) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0006424c) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0006424c) bg_popup_window_pane_g

0x9f8b,	// (0x0005e907) bg_popup_heading_pane_ParamLimits

0x9f8b,	// (0x0005e907) bg_popup_heading_pane

0x7a9c,	// (0x0005c418) tabs_4_passive_pane_cp_srt_ParamLimits

0x7a9c,	// (0x0005c418) tabs_4_passive_pane_cp_srt

0x7aae,	// (0x0005c42a) tabs_4_passive_pane_srt_ParamLimits

0x9f9f,	// (0x0005e91b) heading_pane_g2

0x7aae,	// (0x0005c42a) tabs_4_passive_pane_srt

0x8d6a,	// (0x0005d6e6) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8d6a,	// (0x0005d6e6) bg_passive_tab_pane_cp3_srt

0x9fa7,	// (0x0005e923) heading_pane_t1_ParamLimits

0x9fa7,	// (0x0005e923) heading_pane_t1

0x9fbe,	// (0x0005e93a) heading_pane_t2_ParamLimits

0x9fbe,	// (0x0005e93a) heading_pane_t2

0x0001,

0xf8cb,	// (0x00064247) heading_pane_t_ParamLimits

0xf8cb,	// (0x00064247) heading_pane_t

0x9ac8,	// (0x0005e444) bg_popup_heading_pane_g1

0x9b77,	// (0x0005e4f3) bg_popup_heading_pane_g2

0x9b81,	// (0x0005e4fd) bg_popup_heading_pane_g3

0x9b8b,	// (0x0005e507) bg_popup_heading_pane_g4

0x9b95,	// (0x0005e511) bg_popup_heading_pane_g5

0x9b9f,	// (0x0005e51b) bg_popup_heading_pane_g6

0x9ba7,	// (0x0005e523) bg_popup_heading_pane_g7

0x9baf,	// (0x0005e52b) bg_popup_heading_pane_g8

0x9bb9,	// (0x0005e535) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00064203) bg_popup_heading_pane_g

0x9291,	// (0x0005dc0d) bg_popup_sub_pane_g1

0x92a1,	// (0x0005dc1d) bg_popup_sub_pane_g2

0x9299,	// (0x0005dc15) bg_popup_sub_pane_g3

0x92b1,	// (0x0005dc2d) bg_popup_sub_pane_g4

0x92a9,	// (0x0005dc25) bg_popup_sub_pane_g5

0x92b9,	// (0x0005dc35) bg_popup_sub_pane_g6

0x92c1,	// (0x0005dc3d) bg_popup_sub_pane_g7

0x92d1,	// (0x0005dc4d) bg_popup_sub_pane_g8

0x92c9,	// (0x0005dc45) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x000641dd) bg_popup_sub_pane_g

0xeed6,	// (0x00063852) bg_popup_window_pane_cp5_ParamLimits

0xeed6,	// (0x00063852) bg_popup_window_pane_cp5

0xeef2,	// (0x0006386e) popup_note_window_g1_ParamLimits

0xeef2,	// (0x0006386e) popup_note_window_g1

0xeefe,	// (0x0006387a) popup_note_window_t1_ParamLimits

0xeefe,	// (0x0006387a) popup_note_window_t1

0xef14,	// (0x00063890) popup_note_window_t2_ParamLimits

0xef14,	// (0x00063890) popup_note_window_t2

0xef2a,	// (0x000638a6) popup_note_window_t3_ParamLimits

0xef2a,	// (0x000638a6) popup_note_window_t3

0xef40,	// (0x000638bc) popup_note_window_t4_ParamLimits

0xef40,	// (0x000638bc) popup_note_window_t4

0xef68,	// (0x000638e4) popup_note_window_t5_ParamLimits

0xef68,	// (0x000638e4) popup_note_window_t5

0x0004,

0xf57f,	// (0x00063efb) popup_note_window_t_ParamLimits

0xf57f,	// (0x00063efb) popup_note_window_t

0xef8c,	// (0x00063908) bg_popup_window_pane_cp6_ParamLimits

0xef8c,	// (0x00063908) bg_popup_window_pane_cp6

0x9a44,	// (0x0005e3c0) popup_note_image_window_g1_ParamLimits

0x9a44,	// (0x0005e3c0) popup_note_image_window_g1

0x9a50,	// (0x0005e3cc) popup_note_image_window_g2_ParamLimits

0x9a50,	// (0x0005e3cc) popup_note_image_window_g2

0x0001,

0xf855,	// (0x000641d1) popup_note_image_window_g_ParamLimits

0xf855,	// (0x000641d1) popup_note_image_window_g

0x9a69,	// (0x0005e3e5) popup_note_image_window_t1_ParamLimits

0x9a69,	// (0x0005e3e5) popup_note_image_window_t1

0x9a82,	// (0x0005e3fe) popup_note_image_window_t2_ParamLimits

0x9a82,	// (0x0005e3fe) popup_note_image_window_t2

0x9a9b,	// (0x0005e417) popup_note_image_window_t3_ParamLimits

0x9a9b,	// (0x0005e417) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x000641d6) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x000641d6) popup_note_image_window_t

0x990d,	// (0x0005e289) bg_popup_window_pane_cp7_ParamLimits

0x990d,	// (0x0005e289) bg_popup_window_pane_cp7

0x993d,	// (0x0005e2b9) popup_note_wait_window_g1_ParamLimits

0x993d,	// (0x0005e2b9) popup_note_wait_window_g1

0x9949,	// (0x0005e2c5) popup_note_wait_window_g2_ParamLimits

0x9949,	// (0x0005e2c5) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x000641bf) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x000641bf) popup_note_wait_window_g

0x9961,	// (0x0005e2dd) popup_note_wait_window_t1_ParamLimits

0x9961,	// (0x0005e2dd) popup_note_wait_window_t1

0x9988,	// (0x0005e304) popup_note_wait_window_t2_ParamLimits

0x9988,	// (0x0005e304) popup_note_wait_window_t2

0x99a5,	// (0x0005e321) popup_note_wait_window_t3_ParamLimits

0x99a5,	// (0x0005e321) popup_note_wait_window_t3

0x99b8,	// (0x0005e334) popup_note_wait_window_t4_ParamLimits

0x99b8,	// (0x0005e334) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x000641c6) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x000641c6) popup_note_wait_window_t

0x99dd,	// (0x0005e359) wait_bar_pane_ParamLimits

0x99dd,	// (0x0005e359) wait_bar_pane

0xed5e,	// (0x000636da) wait_anim_pane

0xed5e,	// (0x000636da) wait_border_pane

0xed54,	// (0x000636d0) wait_anim_pane_g1

0xed54,	// (0x000636d0) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0006407a) wait_anim_pane_g

0x98b9,	// (0x0005e235) wait_border_pane_g1

0x98c4,	// (0x0005e240) wait_border_pane_g2

0x98cd,	// (0x0005e249) wait_border_pane_g3

0x0002,

0xf83c,	// (0x000641b8) wait_border_pane_g

0x9724,	// (0x0005e0a0) bg_popup_window_pane_cp16_ParamLimits

0x9724,	// (0x0005e0a0) bg_popup_window_pane_cp16

0x9824,	// (0x0005e1a0) indicator_popup_pane_cp4_ParamLimits

0x9824,	// (0x0005e1a0) indicator_popup_pane_cp4

0x9838,	// (0x0005e1b4) popup_query_data_window_t1_ParamLimits

0x9838,	// (0x0005e1b4) popup_query_data_window_t1

0x984a,	// (0x0005e1c6) popup_query_data_window_t2_ParamLimits

0x984a,	// (0x0005e1c6) popup_query_data_window_t2

0x9863,	// (0x0005e1df) popup_query_data_window_t3_ParamLimits

0x9863,	// (0x0005e1df) popup_query_data_window_t3

0x0002,

0xf835,	// (0x000641b1) popup_query_data_window_t_ParamLimits

0xf835,	// (0x000641b1) popup_query_data_window_t

0x987d,	// (0x0005e1f9) query_popup_data_pane_ParamLimits

0x987d,	// (0x0005e1f9) query_popup_data_pane

0x9891,	// (0x0005e20d) query_popup_data_pane_cp1_ParamLimits

0x9891,	// (0x0005e20d) query_popup_data_pane_cp1

0x9724,	// (0x0005e0a0) bg_popup_window_pane_cp10_ParamLimits

0x9724,	// (0x0005e0a0) bg_popup_window_pane_cp10

0x9756,	// (0x0005e0d2) indicator_popup_pane_ParamLimits

0x9756,	// (0x0005e0d2) indicator_popup_pane

0x9778,	// (0x0005e0f4) popup_query_code_window_t1_ParamLimits

0x9778,	// (0x0005e0f4) popup_query_code_window_t1

0x9792,	// (0x0005e10e) popup_query_code_window_t2_ParamLimits

0x9792,	// (0x0005e10e) popup_query_code_window_t2

0x97db,	// (0x0005e157) popup_query_code_window_t3_ParamLimits

0x97db,	// (0x0005e157) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x000641aa) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x000641aa) popup_query_code_window_t

0x980a,	// (0x0005e186) query_popup_pane_ParamLimits

0x980a,	// (0x0005e186) query_popup_pane

0xef8c,	// (0x00063908) bg_popup_window_pane_cp15_ParamLimits

0xef8c,	// (0x00063908) bg_popup_window_pane_cp15

0x5b47,	// (0x0005a4c3) indicator_popup_pane_cp1_ParamLimits

0x5b47,	// (0x0005a4c3) indicator_popup_pane_cp1

0x5b5a,	// (0x0005a4d6) indicator_popup_pane_cp2_ParamLimits

0x5b5a,	// (0x0005a4d6) indicator_popup_pane_cp2

0x5b6d,	// (0x0005a4e9) popup_query_data_code_window_g1_ParamLimits

0x5b6d,	// (0x0005a4e9) popup_query_data_code_window_g1

0xefaa,	// (0x00063926) popup_query_data_code_window_t1_ParamLimits

0xefaa,	// (0x00063926) popup_query_data_code_window_t1

0xefbc,	// (0x00063938) popup_query_data_code_window_t2_ParamLimits

0xefbc,	// (0x00063938) popup_query_data_code_window_t2

0x5b80,	// (0x0005a4fc) popup_query_data_code_window_t3_ParamLimits

0x5b80,	// (0x0005a4fc) popup_query_data_code_window_t3

0x5b96,	// (0x0005a512) popup_query_data_code_window_t4_ParamLimits

0x5b96,	// (0x0005a512) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00063f06) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00063f06) popup_query_data_code_window_t

0x7698,	// (0x0005c014) list_single_midp_graphic_pane_g3

0x5bae,	// (0x0005a52a) query_popup_data_pane_cp2_ParamLimits

0x5bc1,	// (0x0005a53d) query_popup_pane_cp2_ParamLimits

0x5bc1,	// (0x0005a53d) query_popup_pane_cp2

0xed5e,	// (0x000636da) bg_popup_window_pane_cp11

0x9710,	// (0x0005e08c) heading_pane_cp5

0xf018,	// (0x00063994) listscroll_popup_info_pane

0xed5e,	// (0x000636da) input_focus_pane_cp3

0xefce,	// (0x0006394a) query_popup_pane_t1

0xefdc,	// (0x00063958) list_popup_info_pane_ParamLimits

0xefdc,	// (0x00063958) list_popup_info_pane

0xefeb,	// (0x00063967) listscroll_popup_info_pane_g1

0xeff3,	// (0x0006396f) scroll_pane_cp7

0x5bd4,	// (0x0005a550) popup_info_list_pane_t1_ParamLimits

0x5bd4,	// (0x0005a550) popup_info_list_pane_t1

0x5bee,	// (0x0005a56a) popup_info_list_pane_t2_ParamLimits

0x5bee,	// (0x0005a56a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00063f0f) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00063f0f) popup_info_list_pane_t

0xed5e,	// (0x000636da) bg_popup_window_pane_cp12

0xaaca,	// (0x0005f446) find_popup_pane

0xedac,	// (0x00063728) bg_popup_window_pane_cp3

0xeffd,	// (0x00063979) heading_pane_cp3

0xf009,	// (0x00063985) listscroll_popup_graphic_pane

0xed5e,	// (0x000636da) bg_popup_window_pane_cp4

0x5c58,	// (0x0005a5d4) heading_pane_cp4

0xf018,	// (0x00063994) listscroll_popup_colour_pane

0x5c62,	// (0x0005a5de) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x5c62,	// (0x0005a5de) cell_large_graphic_colour_none_popup_pane

0x5c76,	// (0x0005a5f2) grid_large_graphic_colour_popup_pane_ParamLimits

0x5c76,	// (0x0005a5f2) grid_large_graphic_colour_popup_pane

0x5c9e,	// (0x0005a61a) listscroll_popup_colour_pane_g1_ParamLimits

0x5c9e,	// (0x0005a61a) listscroll_popup_colour_pane_g1

0x5cb5,	// (0x0005a631) listscroll_popup_colour_pane_g2_ParamLimits

0x5cb5,	// (0x0005a631) listscroll_popup_colour_pane_g2

0x5ccc,	// (0x0005a648) listscroll_popup_colour_pane_g3_ParamLimits

0x5ccc,	// (0x0005a648) listscroll_popup_colour_pane_g3

0x5cdc,	// (0x0005a658) listscroll_popup_colour_pane_g4_ParamLimits

0x5cdc,	// (0x0005a658) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00063f14) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00063f14) listscroll_popup_colour_pane_g

0xf020,	// (0x0006399c) scroll_pane_cp6_ParamLimits

0xf020,	// (0x0006399c) scroll_pane_cp6

0x5cec,	// (0x0005a668) cell_large_graphic_colour_popup_pane_ParamLimits

0x5cec,	// (0x0005a668) cell_large_graphic_colour_popup_pane

0x5d0b,	// (0x0005a687) cell_large_graphic_colour_none_popup_pane_t1

0xed5e,	// (0x000636da) grid_highlight_pane_cp5

0xf032,	// (0x000639ae) cell_large_graphic_colour_popup_pane_g1

0xf03a,	// (0x000639b6) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00063f1d) cell_large_graphic_colour_popup_pane_g

0xf042,	// (0x000639be) cell_large_graphic_colour_popup_pane_g2_copy1

0xf04b,	// (0x000639c7) grid_highlight_pane_cp4

0xf053,	// (0x000639cf) bg_popup_window_pane_cp8_ParamLimits

0xf053,	// (0x000639cf) bg_popup_window_pane_cp8

0x5d1a,	// (0x0005a696) popup_snote_single_text_window_g1_ParamLimits

0x5d1a,	// (0x0005a696) popup_snote_single_text_window_g1

0x5d2c,	// (0x0005a6a8) popup_snote_single_text_window_t1_ParamLimits

0x5d2c,	// (0x0005a6a8) popup_snote_single_text_window_t1

0x5d3f,	// (0x0005a6bb) popup_snote_single_text_window_t2_ParamLimits

0x5d3f,	// (0x0005a6bb) popup_snote_single_text_window_t2

0x5d52,	// (0x0005a6ce) popup_snote_single_text_window_t3_ParamLimits

0x5d52,	// (0x0005a6ce) popup_snote_single_text_window_t3

0x5d8b,	// (0x0005a707) popup_snote_single_text_window_t4_ParamLimits

0x5d8b,	// (0x0005a707) popup_snote_single_text_window_t4

0x5dbf,	// (0x0005a73b) popup_snote_single_text_window_t5_ParamLimits

0x5dbf,	// (0x0005a73b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00063f22) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00063f22) popup_snote_single_text_window_t

0xf06e,	// (0x000639ea) bg_popup_window_pane_cp9_ParamLimits

0xf06e,	// (0x000639ea) bg_popup_window_pane_cp9

0x5d1a,	// (0x0005a696) popup_snote_single_graphic_window_g1_ParamLimits

0x5d1a,	// (0x0005a696) popup_snote_single_graphic_window_g1

0xf07c,	// (0x000639f8) popup_snote_single_graphic_window_g2_ParamLimits

0xf07c,	// (0x000639f8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00063f2d) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00063f2d) popup_snote_single_graphic_window_g

0xf088,	// (0x00063a04) popup_snote_single_graphic_window_t1_ParamLimits

0xf088,	// (0x00063a04) popup_snote_single_graphic_window_t1

0xf09b,	// (0x00063a17) popup_snote_single_graphic_window_t2_ParamLimits

0xf09b,	// (0x00063a17) popup_snote_single_graphic_window_t2

0x5dee,	// (0x0005a76a) popup_snote_single_graphic_window_t3_ParamLimits

0x5dee,	// (0x0005a76a) popup_snote_single_graphic_window_t3

0x5e27,	// (0x0005a7a3) popup_snote_single_graphic_window_t4_ParamLimits

0x5e27,	// (0x0005a7a3) popup_snote_single_graphic_window_t4

0x5e5b,	// (0x0005a7d7) popup_snote_single_graphic_window_t5_ParamLimits

0x5e5b,	// (0x0005a7d7) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00063f32) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00063f32) popup_snote_single_graphic_window_t

0xaa0c,	// (0x0005f388) grid_graphic_popup_pane_ParamLimits

0xaa0c,	// (0x0005f388) grid_graphic_popup_pane

0xaa36,	// (0x0005f3b2) listscroll_popup_graphic_pane_g1_ParamLimits

0xaa36,	// (0x0005f3b2) listscroll_popup_graphic_pane_g1

0xaa4a,	// (0x0005f3c6) listscroll_popup_graphic_pane_g2_ParamLimits

0xaa4a,	// (0x0005f3c6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x00064327) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x00064327) listscroll_popup_graphic_pane_g

0xaa5e,	// (0x0005f3da) scroll_pane_cp5

0xa9ab,	// (0x0005f327) cell_graphic_popup_pane_ParamLimits

0xa9ab,	// (0x0005f327) cell_graphic_popup_pane

0xa98c,	// (0x0005f308) cell_graphic_popup_pane_g1

0xa994,	// (0x0005f310) cell_graphic_popup_pane_g2

0xf042,	// (0x000639be) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00064320) cell_graphic_popup_pane_g

0xa99d,	// (0x0005f319) cell_graphic_popup_pane_t2

0xf04b,	// (0x000639c7) grid_highlight_pane_cp3

0xf0c0,	// (0x00063a3c) list_gen_pane_ParamLimits

0xf0c0,	// (0x00063a3c) list_gen_pane

0xf0e8,	// (0x00063a64) scroll_pane

0xa8e4,	// (0x0005f260) bg_list_pane_g1_ParamLimits

0xa8e4,	// (0x0005f260) bg_list_pane_g1

0xa901,	// (0x0005f27d) bg_list_pane_g2_ParamLimits

0xa901,	// (0x0005f27d) bg_list_pane_g2

0xa916,	// (0x0005f292) bg_list_pane_g3_ParamLimits

0xa916,	// (0x0005f292) bg_list_pane_g3

0xa92a,	// (0x0005f2a6) bg_list_pane_g4_ParamLimits

0xa92a,	// (0x0005f2a6) bg_list_pane_g4

0xa93e,	// (0x0005f2ba) bg_list_pane_g5_ParamLimits

0xa93e,	// (0x0005f2ba) bg_list_pane_g5

0x0004,

0xf999,	// (0x00064315) bg_list_pane_g_ParamLimits

0xf999,	// (0x00064315) bg_list_pane_g

0x7a3f,	// (0x0005c3bb) list_double2_graphic_large_graphic_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_double2_graphic_large_graphic_pane

0x7a3f,	// (0x0005c3bb) list_double2_graphic_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_double2_graphic_pane

0x7a3f,	// (0x0005c3bb) list_double2_large_graphic_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_double2_large_graphic_pane

0x7a3f,	// (0x0005c3bb) list_double2_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_double2_pane

0x7a3f,	// (0x0005c3bb) list_double_graphic_heading_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_double_graphic_heading_pane

0x7a3f,	// (0x0005c3bb) list_double_graphic_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_double_graphic_pane

0x7a3f,	// (0x0005c3bb) list_double_heading_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_double_heading_pane

0x7a3f,	// (0x0005c3bb) list_double_large_graphic_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_double_large_graphic_pane

0x7a3f,	// (0x0005c3bb) list_double_number_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_double_number_pane

0x7a3f,	// (0x0005c3bb) list_double_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_double_pane

0x7a3f,	// (0x0005c3bb) list_double_time_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_double_time_pane

0x7a3f,	// (0x0005c3bb) list_setting_number_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_setting_number_pane

0x7a3f,	// (0x0005c3bb) list_setting_pane_ParamLimits

0x7a3f,	// (0x0005c3bb) list_setting_pane

0xa867,	// (0x0005f1e3) list_single_2graphic_pane_ParamLimits

0xa867,	// (0x0005f1e3) list_single_2graphic_pane

0xa867,	// (0x0005f1e3) list_single_graphic_heading_pane_ParamLimits

0xa867,	// (0x0005f1e3) list_single_graphic_heading_pane

0xa867,	// (0x0005f1e3) list_single_graphic_pane_ParamLimits

0xa867,	// (0x0005f1e3) list_single_graphic_pane

0xa867,	// (0x0005f1e3) list_single_heading_pane_ParamLimits

0xa867,	// (0x0005f1e3) list_single_heading_pane

0xa8c2,	// (0x0005f23e) list_single_large_graphic_pane_ParamLimits

0xa8c2,	// (0x0005f23e) list_single_large_graphic_pane

0xa867,	// (0x0005f1e3) list_single_number_heading_pane_ParamLimits

0xa867,	// (0x0005f1e3) list_single_number_heading_pane

0xa867,	// (0x0005f1e3) list_single_number_pane_ParamLimits

0xa867,	// (0x0005f1e3) list_single_number_pane

0xa867,	// (0x0005f1e3) list_single_pane_ParamLimits

0xa867,	// (0x0005f1e3) list_single_pane

0xed5e,	// (0x000636da) list_highlight_pane_cp1

0x5ea0,	// (0x0005a81c) list_single_pane_g1_ParamLimits

0x5ea0,	// (0x0005a81c) list_single_pane_g1

0x5eac,	// (0x0005a828) list_single_pane_g2_ParamLimits

0x5eac,	// (0x0005a828) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00063f4e) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00063f4e) list_single_pane_g

0x7a29,	// (0x0005c3a5) list_single_pane_t1_ParamLimits

0x7a29,	// (0x0005c3a5) list_single_pane_t1

0x5ea0,	// (0x0005a81c) list_single_number_pane_g1_ParamLimits

0x5ea0,	// (0x0005a81c) list_single_number_pane_g1

0x5eac,	// (0x0005a828) list_single_number_pane_g2_ParamLimits

0x5eac,	// (0x0005a828) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00063f4e) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00063f4e) list_single_number_pane_g

0x5eb8,	// (0x0005a834) list_single_number_pane_t1_ParamLimits

0x5eb8,	// (0x0005a834) list_single_number_pane_t1

0x796f,	// (0x0005c2eb) list_single_number_pane_t2_ParamLimits

0x796f,	// (0x0005c2eb) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x000642d6) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x000642d6) list_single_number_pane_t

0x5e94,	// (0x0005a810) list_single_graphic_pane_g1_ParamLimits

0x5e94,	// (0x0005a810) list_single_graphic_pane_g1

0x5ea0,	// (0x0005a81c) list_single_graphic_pane_g2_ParamLimits

0x5ea0,	// (0x0005a81c) list_single_graphic_pane_g2

0x5eac,	// (0x0005a828) list_single_graphic_pane_g3_ParamLimits

0x5eac,	// (0x0005a828) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00063f3d) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00063f3d) list_single_graphic_pane_g

0x5eb8,	// (0x0005a834) list_single_graphic_pane_t1_ParamLimits

0x5eb8,	// (0x0005a834) list_single_graphic_pane_t1

0x5ece,	// (0x0005a84a) list_single_heading_pane_g1_ParamLimits

0x5ece,	// (0x0005a84a) list_single_heading_pane_g1

0x5eac,	// (0x0005a828) list_single_heading_pane_g2_ParamLimits

0x5eac,	// (0x0005a828) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00063f44) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00063f44) list_single_heading_pane_g

0x5ee1,	// (0x0005a85d) list_single_heading_pane_t1_ParamLimits

0x5ee1,	// (0x0005a85d) list_single_heading_pane_t1

0x5ef7,	// (0x0005a873) list_single_heading_pane_t2_ParamLimits

0x5ef7,	// (0x0005a873) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00063f49) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00063f49) list_single_heading_pane_t

0x5ea0,	// (0x0005a81c) list_single_number_heading_pane_g1_ParamLimits

0x5ea0,	// (0x0005a81c) list_single_number_heading_pane_g1

0x5eac,	// (0x0005a828) list_single_number_heading_pane_g2_ParamLimits

0x5eac,	// (0x0005a828) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00063f4e) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00063f4e) list_single_number_heading_pane_g

0x5f09,	// (0x0005a885) list_single_number_heading_pane_t1_ParamLimits

0x5f09,	// (0x0005a885) list_single_number_heading_pane_t1

0x5f1f,	// (0x0005a89b) list_single_number_heading_pane_t2_ParamLimits

0x5f1f,	// (0x0005a89b) list_single_number_heading_pane_t2

0x5f31,	// (0x0005a8ad) list_single_number_heading_pane_t3_ParamLimits

0x5f31,	// (0x0005a8ad) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00063f53) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00063f53) list_single_number_heading_pane_t

0x5f43,	// (0x0005a8bf) list_single_graphic_heading_pane_g1_ParamLimits

0x5f43,	// (0x0005a8bf) list_single_graphic_heading_pane_g1

0x5f59,	// (0x0005a8d5) list_single_graphic_heading_pane_g4_ParamLimits

0x5f59,	// (0x0005a8d5) list_single_graphic_heading_pane_g4

0x5eac,	// (0x0005a828) list_single_graphic_heading_pane_g5_ParamLimits

0x5eac,	// (0x0005a828) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00063f5a) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00063f5a) list_single_graphic_heading_pane_g

0x5f09,	// (0x0005a885) list_single_graphic_heading_pane_t1_ParamLimits

0x5f09,	// (0x0005a885) list_single_graphic_heading_pane_t1

0x5f6a,	// (0x0005a8e6) list_single_graphic_heading_pane_t2_ParamLimits

0x5f6a,	// (0x0005a8e6) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00063f61) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00063f61) list_single_graphic_heading_pane_t

0x5f82,	// (0x0005a8fe) list_single_large_graphic_pane_g1_ParamLimits

0x5f82,	// (0x0005a8fe) list_single_large_graphic_pane_g1

0x4825,	// (0x000591a1) list_single_large_graphic_pane_g2_ParamLimits

0x4825,	// (0x000591a1) list_single_large_graphic_pane_g2

0x4831,	// (0x000591ad) list_single_large_graphic_pane_g3_ParamLimits

0x4831,	// (0x000591ad) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00063f66) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00063f66) list_single_large_graphic_pane_g

0x98c4,	// (0x0005e240) wait_border_pane_g2_copy1

0x5f8e,	// (0x0005a90a) list_single_large_graphic_pane_g4_cp2

0x5f96,	// (0x0005a912) list_single_large_graphic_pane_t1_ParamLimits

0x5f96,	// (0x0005a912) list_single_large_graphic_pane_t1

0x5fac,	// (0x0005a928) list_double_pane_g1_ParamLimits

0x5fac,	// (0x0005a928) list_double_pane_g1

0x5fb8,	// (0x0005a934) list_double_pane_g2_ParamLimits

0x5fb8,	// (0x0005a934) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00063f6d) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00063f6d) list_double_pane_g

0x5fc4,	// (0x0005a940) list_double_pane_t1_ParamLimits

0x5fc4,	// (0x0005a940) list_double_pane_t1

0x5fda,	// (0x0005a956) list_double_pane_t2_ParamLimits

0x5fda,	// (0x0005a956) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00063f72) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00063f72) list_double_pane_t

0x5fec,	// (0x0005a968) list_double2_pane_g1_ParamLimits

0x5fec,	// (0x0005a968) list_double2_pane_g1

0x3670,	// (0x00057fec) list_double2_pane_g2_ParamLimits

0x3670,	// (0x00057fec) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00063f77) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00063f77) list_double2_pane_g

0x5ffd,	// (0x0005a979) list_double2_pane_t1_ParamLimits

0x5ffd,	// (0x0005a979) list_double2_pane_t1

0x6013,	// (0x0005a98f) list_double2_pane_t2_ParamLimits

0x6013,	// (0x0005a98f) list_double2_pane_t2

0x0001,

0xf600,	// (0x00063f7c) list_double2_pane_t_ParamLimits

0xf600,	// (0x00063f7c) list_double2_pane_t

0x5fac,	// (0x0005a928) list_double_number_pane_g1_ParamLimits

0x5fac,	// (0x0005a928) list_double_number_pane_g1

0x5fb8,	// (0x0005a934) list_double_number_pane_g2_ParamLimits

0x5fb8,	// (0x0005a934) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00063f6d) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00063f6d) list_double_number_pane_g

0x6025,	// (0x0005a9a1) list_double_number_pane_t1_ParamLimits

0x6025,	// (0x0005a9a1) list_double_number_pane_t1

0x6037,	// (0x0005a9b3) list_double_number_pane_t2_ParamLimits

0x6037,	// (0x0005a9b3) list_double_number_pane_t2

0x604d,	// (0x0005a9c9) list_double_number_pane_t3_ParamLimits

0x604d,	// (0x0005a9c9) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00063f81) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00063f81) list_double_number_pane_t

0x605f,	// (0x0005a9db) list_double_graphic_pane_g1_ParamLimits

0x605f,	// (0x0005a9db) list_double_graphic_pane_g1

0x606b,	// (0x0005a9e7) list_double_graphic_pane_g2_ParamLimits

0x606b,	// (0x0005a9e7) list_double_graphic_pane_g2

0x607a,	// (0x0005a9f6) list_double_graphic_pane_g3_ParamLimits

0x607a,	// (0x0005a9f6) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00063f88) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00063f88) list_double_graphic_pane_g

0x6037,	// (0x0005a9b3) list_double_graphic_pane_t1_ParamLimits

0x6037,	// (0x0005a9b3) list_double_graphic_pane_t1

0x604d,	// (0x0005a9c9) list_double_graphic_pane_t2_ParamLimits

0x604d,	// (0x0005a9c9) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00063f91) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00063f91) list_double_graphic_pane_t

0x6092,	// (0x0005aa0e) list_double2_graphic_pane_g1_ParamLimits

0x6092,	// (0x0005aa0e) list_double2_graphic_pane_g1

0xaf8c,	// (0x0005f908) list_double2_graphic_pane_g2_ParamLimits

0xaf8c,	// (0x0005f908) list_double2_graphic_pane_g2

0x483d,	// (0x000591b9) list_double2_graphic_pane_g3_ParamLimits

0x483d,	// (0x000591b9) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00063f96) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00063f96) list_double2_graphic_pane_g

0x609e,	// (0x0005aa1a) list_double2_graphic_pane_t1_ParamLimits

0x609e,	// (0x0005aa1a) list_double2_graphic_pane_t1

0x60b4,	// (0x0005aa30) list_double2_graphic_pane_t2_ParamLimits

0x60b4,	// (0x0005aa30) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00063f9d) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00063f9d) list_double2_graphic_pane_t

0x60c6,	// (0x0005aa42) list_double_large_graphic_pane_g1_ParamLimits

0x60c6,	// (0x0005aa42) list_double_large_graphic_pane_g1

0x60e5,	// (0x0005aa61) list_double_large_graphic_pane_g2_ParamLimits

0x60e5,	// (0x0005aa61) list_double_large_graphic_pane_g2

0x5fb8,	// (0x0005a934) list_double_large_graphic_pane_g3_ParamLimits

0x5fb8,	// (0x0005a934) list_double_large_graphic_pane_g3

0x60fb,	// (0x0005aa77) list_double_large_graphic_pane_g4_ParamLimits

0x60fb,	// (0x0005aa77) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00063fa2) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00063fa2) list_double_large_graphic_pane_g

0x610d,	// (0x0005aa89) list_double_large_graphic_pane_t1_ParamLimits

0x610d,	// (0x0005aa89) list_double_large_graphic_pane_t1

0x6126,	// (0x0005aaa2) list_double_large_graphic_pane_t2_ParamLimits

0x6126,	// (0x0005aaa2) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00063fad) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00063fad) list_double_large_graphic_pane_t

0x6138,	// (0x0005aab4) list_double2_large_graphic_pane_g1_ParamLimits

0x6138,	// (0x0005aab4) list_double2_large_graphic_pane_g1

0x6144,	// (0x0005aac0) list_double2_large_graphic_pane_g2_ParamLimits

0x6144,	// (0x0005aac0) list_double2_large_graphic_pane_g2

0x483d,	// (0x000591b9) list_double2_large_graphic_pane_g3_ParamLimits

0x483d,	// (0x000591b9) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00063fb2) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00063fb2) list_double2_large_graphic_pane_g

0x609e,	// (0x0005aa1a) list_double2_large_graphic_pane_t1_ParamLimits

0x609e,	// (0x0005aa1a) list_double2_large_graphic_pane_t1

0x60b4,	// (0x0005aa30) list_double2_large_graphic_pane_t2_ParamLimits

0x60b4,	// (0x0005aa30) list_double2_large_graphic_pane_t2

0x0001,

0xf621,	// (0x00063f9d) list_double2_large_graphic_pane_t_ParamLimits

0xf621,	// (0x00063f9d) list_double2_large_graphic_pane_t

0x6155,	// (0x0005aad1) list_double_heading_pane_g1_ParamLimits

0x6155,	// (0x0005aad1) list_double_heading_pane_g1

0x6166,	// (0x0005aae2) list_double_heading_pane_g2_ParamLimits

0x6166,	// (0x0005aae2) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00063fb9) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00063fb9) list_double_heading_pane_g

0x6172,	// (0x0005aaee) list_double_heading_pane_t1_ParamLimits

0x6172,	// (0x0005aaee) list_double_heading_pane_t1

0x60b4,	// (0x0005aa30) list_double_heading_pane_t2_ParamLimits

0x60b4,	// (0x0005aa30) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00063fbe) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00063fbe) list_double_heading_pane_t

0x6188,	// (0x0005ab04) list_double_graphic_heading_pane_g1_ParamLimits

0x6188,	// (0x0005ab04) list_double_graphic_heading_pane_g1

0x6155,	// (0x0005aad1) list_double_graphic_heading_pane_g2_ParamLimits

0x6155,	// (0x0005aad1) list_double_graphic_heading_pane_g2

0x6166,	// (0x0005aae2) list_double_graphic_heading_pane_g3_ParamLimits

0x6166,	// (0x0005aae2) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00063fc3) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00063fc3) list_double_graphic_heading_pane_g

0x6172,	// (0x0005aaee) list_double_graphic_heading_pane_t1_ParamLimits

0x6172,	// (0x0005aaee) list_double_graphic_heading_pane_t1

0x60b4,	// (0x0005aa30) list_double_graphic_heading_pane_t2_ParamLimits

0x60b4,	// (0x0005aa30) list_double_graphic_heading_pane_t2

0x0001,

0xf642,	// (0x00063fbe) list_double_graphic_heading_pane_t_ParamLimits

0xf642,	// (0x00063fbe) list_double_graphic_heading_pane_t

0x6194,	// (0x0005ab10) list_double_time_pane_g1_ParamLimits

0x6194,	// (0x0005ab10) list_double_time_pane_g1

0x61a5,	// (0x0005ab21) list_double_time_pane_g2_ParamLimits

0x61a5,	// (0x0005ab21) list_double_time_pane_g2

0x0001,

0xf64e,	// (0x00063fca) list_double_time_pane_g_ParamLimits

0xf64e,	// (0x00063fca) list_double_time_pane_g

0x61b1,	// (0x0005ab2d) list_double_time_pane_t1_ParamLimits

0x61b1,	// (0x0005ab2d) list_double_time_pane_t1

0x61c7,	// (0x0005ab43) list_double_time_pane_t2_ParamLimits

0x61c7,	// (0x0005ab43) list_double_time_pane_t2

0x61d9,	// (0x0005ab55) list_double_time_pane_t3_ParamLimits

0x61d9,	// (0x0005ab55) list_double_time_pane_t3

0x61eb,	// (0x0005ab67) list_double_time_pane_t4_ParamLimits

0x61eb,	// (0x0005ab67) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00063fcf) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00063fcf) list_double_time_pane_t

0x61fd,	// (0x0005ab79) list_setting_pane_g1_ParamLimits

0x61fd,	// (0x0005ab79) list_setting_pane_g1

0x3670,	// (0x00057fec) list_setting_pane_g2_ParamLimits

0x3670,	// (0x00057fec) list_setting_pane_g2

0x0001,

0xf65c,	// (0x00063fd8) list_setting_pane_g_ParamLimits

0xf65c,	// (0x00063fd8) list_setting_pane_g

0x6209,	// (0x0005ab85) list_setting_pane_t1_ParamLimits

0x6209,	// (0x0005ab85) list_setting_pane_t1

0x6223,	// (0x0005ab9f) list_setting_pane_t2_ParamLimits

0x6223,	// (0x0005ab9f) list_setting_pane_t2

0x0002,

0xf661,	// (0x00063fdd) list_setting_pane_t_ParamLimits

0xf661,	// (0x00063fdd) list_setting_pane_t

0x6260,	// (0x0005abdc) set_value_pane_cp_ParamLimits

0x6260,	// (0x0005abdc) set_value_pane_cp

0x626c,	// (0x0005abe8) list_setting_number_pane_g1_ParamLimits

0x626c,	// (0x0005abe8) list_setting_number_pane_g1

0x6278,	// (0x0005abf4) list_setting_number_pane_g2_ParamLimits

0x6278,	// (0x0005abf4) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x00063fe4) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x00063fe4) list_setting_number_pane_g

0x6284,	// (0x0005ac00) list_setting_number_pane_t1_ParamLimits

0x6284,	// (0x0005ac00) list_setting_number_pane_t1

0x629d,	// (0x0005ac19) list_setting_number_pane_t2_ParamLimits

0x629d,	// (0x0005ac19) list_setting_number_pane_t2

0x62b7,	// (0x0005ac33) list_setting_number_pane_t3_ParamLimits

0x62b7,	// (0x0005ac33) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00063fe9) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00063fe9) list_setting_number_pane_t

0x6260,	// (0x0005abdc) set_value_pane_ParamLimits

0x6260,	// (0x0005abdc) set_value_pane

0xf11c,	// (0x00063a98) bg_set_opt_pane_ParamLimits

0xf11c,	// (0x00063a98) bg_set_opt_pane

0x367c,	// (0x00057ff8) set_value_pane_t1

0xf13d,	// (0x00063ab9) slider_set_pane_cp3

0x62fa,	// (0x0005ac76) volume_small_pane_cp

0xf146,	// (0x00063ac2) list_form_gen_pane

0xf14f,	// (0x00063acb) scroll_pane_cp8

0x6303,	// (0x0005ac7f) form_field_data_pane_ParamLimits

0x6303,	// (0x0005ac7f) form_field_data_pane

0x631d,	// (0x0005ac99) form_field_data_wide_pane_ParamLimits

0x631d,	// (0x0005ac99) form_field_data_wide_pane

0x6340,	// (0x0005acbc) form_field_popup_pane_ParamLimits

0x6340,	// (0x0005acbc) form_field_popup_pane

0x6360,	// (0x0005acdc) form_field_popup_wide_pane_ParamLimits

0x6360,	// (0x0005acdc) form_field_popup_wide_pane

0x369a,	// (0x00058016) form_field_slider_pane_ParamLimits

0x369a,	// (0x00058016) form_field_slider_pane

0x637d,	// (0x0005acf9) form_field_slider_wide_pane_ParamLimits

0x637d,	// (0x0005acf9) form_field_slider_wide_pane

0xf160,	// (0x00063adc) data_form_pane

0x639a,	// (0x0005ad16) form_field_data_pane_t1

0xf16c,	// (0x00063ae8) input_focus_pane

0x36ad,	// (0x00058029) data_form_wide_pane

0x36ca,	// (0x00058046) form_field_data_wide_pane_t1

0xf060,	// (0x000639dc) input_focus_pane_cp6

0x63b2,	// (0x0005ad2e) form_field_popup_pane_t1

0xf16c,	// (0x00063ae8) input_focus_pane_cp7

0xf19a,	// (0x00063b16) list_form_pane

0x36f4,	// (0x00058070) form_field_popup_wide_pane_t1

0xf16c,	// (0x00063ae8) input_focus_pane_cp8

0xf1a6,	// (0x00063b22) list_form_wide_pane

0x63d2,	// (0x0005ad4e) form_field_slider_pane_t1_ParamLimits

0x63d2,	// (0x0005ad4e) form_field_slider_pane_t1

0x63e8,	// (0x0005ad64) form_field_slider_pane_t2_ParamLimits

0x63e8,	// (0x0005ad64) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00063ff9) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00063ff9) form_field_slider_pane_t

0xeed6,	// (0x00063852) input_focus_pane_cp9_ParamLimits

0xeed6,	// (0x00063852) input_focus_pane_cp9

0x63fd,	// (0x0005ad79) slider_cont_pane_ParamLimits

0x63fd,	// (0x0005ad79) slider_cont_pane

0xf1b2,	// (0x00063b2e) form_field_slider_wide_pane_t1_ParamLimits

0xf1b2,	// (0x00063b2e) form_field_slider_wide_pane_t1

0x3709,	// (0x00058085) form_field_slider_wide_pane_t2_ParamLimits

0x3709,	// (0x00058085) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00063ffe) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00063ffe) form_field_slider_wide_pane_t

0xeed6,	// (0x00063852) input_focus_pane_cp10_ParamLimits

0xeed6,	// (0x00063852) input_focus_pane_cp10

0x6411,	// (0x0005ad8d) slider_cont_pane_cp1_ParamLimits

0x6411,	// (0x0005ad8d) slider_cont_pane_cp1

0x6425,	// (0x0005ada1) slider_form_pane_cp

0xf1c4,	// (0x00063b40) input_focus_pane_g1

0xf1cc,	// (0x00063b48) input_focus_pane_g2

0xf1d4,	// (0x00063b50) input_focus_pane_g3

0xf1dc,	// (0x00063b58) input_focus_pane_g4

0xf1e4,	// (0x00063b60) input_focus_pane_g5

0xf1ec,	// (0x00063b68) input_focus_pane_g6

0xf1f4,	// (0x00063b70) input_focus_pane_g7

0xf1fc,	// (0x00063b78) input_focus_pane_g8

0xf204,	// (0x00063b80) input_focus_pane_g9

0xed54,	// (0x000636d0) input_focus_pane_g10

0x0009,

0xf687,	// (0x00064003) input_focus_pane_g

0x98cd,	// (0x0005e249) wait_border_pane_g3_copy1

0x642d,	// (0x0005ada9) data_form_pane_t1

0xed54,	// (0x000636d0) wait_anim_pane_g1_copy1

0x79f9,	// (0x0005c375) data_form_wide_pane_t1

0x6448,	// (0x0005adc4) list_form_graphic_pane_cp_ParamLimits

0x6448,	// (0x0005adc4) list_form_graphic_pane_cp

0xa7bc,	// (0x0005f138) slider_form_pane_g1

0xa7c5,	// (0x0005f141) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00064306) slider_form_pane_g

0x6448,	// (0x0005adc4) list_form_graphic_pane_ParamLimits

0x6448,	// (0x0005adc4) list_form_graphic_pane

0x6461,	// (0x0005addd) list_form_graphic_pane_g1

0x6469,	// (0x0005ade5) list_form_graphic_pane_t1_ParamLimits

0x6469,	// (0x0005ade5) list_form_graphic_pane_t1

0xedac,	// (0x00063728) list_highlight_pane_cp5_ParamLimits

0xedac,	// (0x00063728) list_highlight_pane_cp5

0x647e,	// (0x0005adfa) find_pane_g1

0xf20c,	// (0x00063b88) input_find_pane

0x6487,	// (0x0005ae03) input_find_pane_g1_ParamLimits

0x6487,	// (0x0005ae03) input_find_pane_g1

0x6493,	// (0x0005ae0f) input_find_pane_t1_ParamLimits

0x6493,	// (0x0005ae0f) input_find_pane_t1

0x64a8,	// (0x0005ae24) input_find_pane_t2_ParamLimits

0x64a8,	// (0x0005ae24) input_find_pane_t2

0x0001,

0xf69c,	// (0x00064018) input_find_pane_t_ParamLimits

0xf69c,	// (0x00064018) input_find_pane_t

0xf215,	// (0x00063b91) input_focus_pane_cp5_ParamLimits

0xf215,	// (0x00063b91) input_focus_pane_cp5

0xf223,	// (0x00063b9f) bg_popup_window_pane_cp2_ParamLimits

0xf223,	// (0x00063b9f) bg_popup_window_pane_cp2

0xf230,	// (0x00063bac) listscroll_menu_pane_ParamLimits

0xf230,	// (0x00063bac) listscroll_menu_pane

0x64c9,	// (0x0005ae45) popup_submenu_window_ParamLimits

0x64c9,	// (0x0005ae45) popup_submenu_window

0xf23c,	// (0x00063bb8) find_popup_pane_g1

0x64f1,	// (0x0005ae6d) input_popup_find_pane_cp

0xf215,	// (0x00063b91) input_focus_pane_cp4_ParamLimits

0xf215,	// (0x00063b91) input_focus_pane_cp4

0xf244,	// (0x00063bc0) input_popup_find_pane_t1_ParamLimits

0xf244,	// (0x00063bc0) input_popup_find_pane_t1

0xed5e,	// (0x000636da) bg_popup_sub_pane_cp

0xf272,	// (0x00063bee) listscroll_popup_sub_pane

0xf27a,	// (0x00063bf6) list_submenu_pane_ParamLimits

0xf27a,	// (0x00063bf6) list_submenu_pane

0xf28b,	// (0x00063c07) scroll_pane_cp4

0x6509,	// (0x0005ae85) list_single_popup_submenu_pane_ParamLimits

0x6509,	// (0x0005ae85) list_single_popup_submenu_pane

0x2408,	// (0x00056d84) list_single_popup_submenu_pane_g1

0x651d,	// (0x0005ae99) list_single_popup_submenu_pane_t1_ParamLimits

0x651d,	// (0x0005ae99) list_single_popup_submenu_pane_t1

0xedac,	// (0x00063728) bg_active_tab_pane_cp1_ParamLimits

0xedac,	// (0x00063728) bg_active_tab_pane_cp1

0xf293,	// (0x00063c0f) tabs_2_active_pane_g1

0x6532,	// (0x0005aeae) tabs_2_active_pane_t1

0xedac,	// (0x00063728) bg_passive_tab_pane_cp1_ParamLimits

0xedac,	// (0x00063728) bg_passive_tab_pane_cp1

0xf293,	// (0x00063c0f) tabs_2_passive_pane_g1

0x6532,	// (0x0005aeae) tabs_2_passive_pane_t1

0x21c8,	// (0x00056b44) bg_active_tab_pane_cp4

0x6544,	// (0x0005aec0) tabs_2_long_active_pane_t1

0x6557,	// (0x0005aed3) bg_passive_tab_pane_cp4

0x76a0,	// (0x0005c01c) list_single_midp_graphic_pane_g4_ParamLimits

0x21c8,	// (0x00056b44) bg_active_tab_pane_cp5

0x6563,	// (0x0005aedf) tabs_3_long_active_pane_t1

0x6557,	// (0x0005aed3) bg_passive_tab_pane_cp5

0x76a0,	// (0x0005c01c) list_single_midp_graphic_pane_g4

0xedac,	// (0x00063728) bg_popup_window_pane_cp13_ParamLimits

0xedac,	// (0x00063728) bg_popup_window_pane_cp13

0xf29b,	// (0x00063c17) listscroll_popup_fast_pane_ParamLimits

0xf29b,	// (0x00063c17) listscroll_popup_fast_pane

0xf2a7,	// (0x00063c23) grid_popup_fast_pane_ParamLimits

0xf2a7,	// (0x00063c23) grid_popup_fast_pane

0xf2b9,	// (0x00063c35) scroll_pane_cp9_ParamLimits

0xf2b9,	// (0x00063c35) scroll_pane_cp9

0xc2a3,	// (0x00060c1f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc2a3,	// (0x00060c1f) list_single_graphic_hl_pane_t1_cp2

0xf2cc,	// (0x00063c48) input_focus_pane_cp20_ParamLimits

0xf2cc,	// (0x00063c48) input_focus_pane_cp20

0xf2da,	// (0x00063c56) query_popup_data_pane_t1_ParamLimits

0xf2da,	// (0x00063c56) query_popup_data_pane_t1

0xf2ed,	// (0x00063c69) query_popup_data_pane_t2_ParamLimits

0xf2ed,	// (0x00063c69) query_popup_data_pane_t2

0xf333,	// (0x00063caf) query_popup_data_pane_t3_ParamLimits

0xf333,	// (0x00063caf) query_popup_data_pane_t3

0xf374,	// (0x00063cf0) query_popup_data_pane_t4_ParamLimits

0xf374,	// (0x00063cf0) query_popup_data_pane_t4

0xf3b0,	// (0x00063d2c) query_popup_data_pane_t5_ParamLimits

0xf3b0,	// (0x00063d2c) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0006401d) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0006401d) query_popup_data_pane_t

0xf1c4,	// (0x00063b40) bg_set_opt_pane_g1

0xf1cc,	// (0x00063b48) bg_set_opt_pane_g2

0xf1d4,	// (0x00063b50) bg_set_opt_pane_g3

0xf1dc,	// (0x00063b58) bg_set_opt_pane_g4

0xf1e4,	// (0x00063b60) bg_set_opt_pane_g5

0xf1ec,	// (0x00063b68) bg_set_opt_pane_g6

0xf1f4,	// (0x00063b70) bg_set_opt_pane_g7

0xf1fc,	// (0x00063b78) bg_set_opt_pane_g8

0xf204,	// (0x00063b80) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00064028) bg_set_opt_pane_g

0x6ad8,	// (0x0005b454) control_top_pane_stacon_ParamLimits

0x6ad8,	// (0x0005b454) control_top_pane_stacon

0x6b2b,	// (0x0005b4a7) signal_pane_stacon_ParamLimits

0x6b2b,	// (0x0005b4a7) signal_pane_stacon

0x149e,	// (0x00055e1a) stacon_top_pane_g1_ParamLimits

0x149e,	// (0x00055e1a) stacon_top_pane_g1

0x6b50,	// (0x0005b4cc) title_pane_stacon_ParamLimits

0x6b50,	// (0x0005b4cc) title_pane_stacon

0x6b7a,	// (0x0005b4f6) uni_indicator_pane_stacon_ParamLimits

0x6b7a,	// (0x0005b4f6) uni_indicator_pane_stacon

0x6b8f,	// (0x0005b50b) battery_pane_stacon_ParamLimits

0x6b8f,	// (0x0005b50b) battery_pane_stacon

0x6bd3,	// (0x0005b54f) control_bottom_pane_stacon_ParamLimits

0x6bd3,	// (0x0005b54f) control_bottom_pane_stacon

0x6bf6,	// (0x0005b572) navi_pane_stacon_ParamLimits

0x6bf6,	// (0x0005b572) navi_pane_stacon

0x14c0,	// (0x00055e3c) stacon_bottom_pane_g1_ParamLimits

0x14c0,	// (0x00055e3c) stacon_bottom_pane_g1

0x658f,	// (0x0005af0b) aid_levels_signal_lsc_ParamLimits

0x658f,	// (0x0005af0b) aid_levels_signal_lsc

0x65a5,	// (0x0005af21) signal_pane_stacon_g1_ParamLimits

0x65a5,	// (0x0005af21) signal_pane_stacon_g1

0x65b9,	// (0x0005af35) signal_pane_stacon_g2_ParamLimits

0x65b9,	// (0x0005af35) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0006403b) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0006403b) signal_pane_stacon_g

0x65ee,	// (0x0005af6a) title_pane_stacon_t1_ParamLimits

0x65ee,	// (0x0005af6a) title_pane_stacon_t1

0xf3f4,	// (0x00063d70) uni_indicator_pane_stacon_g1

0xf3fe,	// (0x00063d7a) uni_indicator_pane_stacon_g2

0xf408,	// (0x00063d84) uni_indicator_pane_stacon_g3

0xf412,	// (0x00063d8e) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00064047) uni_indicator_pane_stacon_g

0x6613,	// (0x0005af8f) control_top_pane_stacon_g1

0x661b,	// (0x0005af97) control_top_pane_stacon_t1_ParamLimits

0x661b,	// (0x0005af97) control_top_pane_stacon_t1

0x6652,	// (0x0005afce) aid_levels_battery_lsc_ParamLimits

0x6652,	// (0x0005afce) aid_levels_battery_lsc

0x6669,	// (0x0005afe5) battery_pane_stacon_g1_ParamLimits

0x6669,	// (0x0005afe5) battery_pane_stacon_g1

0x667c,	// (0x0005aff8) battery_pane_stacon_g2_ParamLimits

0x667c,	// (0x0005aff8) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00064050) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00064050) battery_pane_stacon_g

0x66ba,	// (0x0005b036) navi_icon_pane_stacon

0x66ce,	// (0x0005b04a) navi_navi_pane_stacon

0x66ba,	// (0x0005b036) navi_text_pane_stacon

0x6613,	// (0x0005af8f) control_bottom_pane_stacon_g1

0x66e2,	// (0x0005b05e) control_bottom_pane_stacon_t1_ParamLimits

0x66e2,	// (0x0005b05e) control_bottom_pane_stacon_t1

0x6719,	// (0x0005b095) grid_app_pane_ParamLimits

0x6719,	// (0x0005b095) grid_app_pane

0x673b,	// (0x0005b0b7) scroll_pane_cp15_ParamLimits

0x673b,	// (0x0005b0b7) scroll_pane_cp15

0x674e,	// (0x0005b0ca) cell_app_pane_ParamLimits

0x674e,	// (0x0005b0ca) cell_app_pane

0x6776,	// (0x0005b0f2) cell_app_pane_g1_ParamLimits

0x6776,	// (0x0005b0f2) cell_app_pane_g1

0xf436,	// (0x00063db2) cell_app_pane_g2_ParamLimits

0xf436,	// (0x00063db2) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00064055) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00064055) cell_app_pane_g

0x679a,	// (0x0005b116) cell_app_pane_t1_ParamLimits

0x679a,	// (0x0005b116) cell_app_pane_t1

0xf442,	// (0x00063dbe) grid_highlight_pane_ParamLimits

0xf442,	// (0x00063dbe) grid_highlight_pane

0xf1c4,	// (0x00063b40) cell_highlight_pane_g1

0xf1cc,	// (0x00063b48) cell_highlight_pane_g2

0xf1d4,	// (0x00063b50) cell_highlight_pane_g3

0xf1dc,	// (0x00063b58) cell_highlight_pane_g4

0xf1e4,	// (0x00063b60) cell_highlight_pane_g5

0xf1ec,	// (0x00063b68) cell_highlight_pane_g6

0xf1f4,	// (0x00063b70) cell_highlight_pane_g7

0xf1fc,	// (0x00063b78) cell_highlight_pane_g8

0xf204,	// (0x00063b80) cell_highlight_pane_g9

0xed54,	// (0x000636d0) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00064003) cell_highlight_pane_g

0xf453,	// (0x00063dcf) bg_scroll_pane

0x67c4,	// (0x0005b140) scroll_handle_pane

0xf49a,	// (0x00063e16) scroll_bg_pane_g1

0xf4af,	// (0x00063e2b) scroll_bg_pane_g2

0xf4c7,	// (0x00063e43) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0006405a) scroll_bg_pane_g

0x67ed,	// (0x0005b169) scroll_handle_focus_pane_ParamLimits

0x67ed,	// (0x0005b169) scroll_handle_focus_pane

0xf49a,	// (0x00063e16) scroll_handle_pane_g1

0xf4dc,	// (0x00063e58) scroll_handle_pane_g2

0xf4c7,	// (0x00063e43) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00064061) scroll_handle_pane_g

0xf215,	// (0x00063b91) bg_popup_sub_pane_cp21_ParamLimits

0xf215,	// (0x00063b91) bg_popup_sub_pane_cp21

0x67fa,	// (0x0005b176) popup_fep_japan_predictive_window_t1_ParamLimits

0x67fa,	// (0x0005b176) popup_fep_japan_predictive_window_t1

0x6814,	// (0x0005b190) popup_fep_japan_predictive_window_t2_ParamLimits

0x6814,	// (0x0005b190) popup_fep_japan_predictive_window_t2

0x6847,	// (0x0005b1c3) popup_fep_japan_predictive_window_t3_ParamLimits

0x6847,	// (0x0005b1c3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00064068) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00064068) popup_fep_japan_predictive_window_t

0xed5e,	// (0x000636da) bg_popup_sub_pane_cp23

0x2d44,	// (0x000576c0) listscroll_japin_cand_pane

0xf4f0,	// (0x00063e6c) popup_fep_japan_candidate_window_t1

0xf4fe,	// (0x00063e7a) candidate_pane_ParamLimits

0xf4fe,	// (0x00063e7a) candidate_pane

0x687e,	// (0x0005b1fa) scroll_pane_cp30

0xf510,	// (0x00063e8c) list_single_popup_jap_candidate_pane_ParamLimits

0xf510,	// (0x00063e8c) list_single_popup_jap_candidate_pane

0xed5e,	// (0x000636da) list_highlight_pane_cp30

0xf525,	// (0x00063ea1) list_single_popup_jap_candidate_pane_t1

0xf534,	// (0x00063eb0) level_1_signal

0xf541,	// (0x00063ebd) level_2_signal

0x12b0,	// (0x00055c2c) level_3_signal

0x12bd,	// (0x00055c39) level_4_signal

0x12ca,	// (0x00055c46) level_5_signal

0x12d7,	// (0x00055c53) level_6_signal

0x12e4,	// (0x00055c60) level_7_signal

0xf534,	// (0x00063eb0) level_1_battery

0xf541,	// (0x00063ebd) level_2_battery

0x12b0,	// (0x00055c2c) level_3_battery

0x12bd,	// (0x00055c39) level_4_battery

0x12ca,	// (0x00055c46) level_5_battery

0x12d7,	// (0x00055c53) level_6_battery

0x12e4,	// (0x00055c60) level_7_battery

0x1309,	// (0x00055c85) list_menu_pane_ParamLimits

0x1309,	// (0x00055c85) list_menu_pane

0x131f,	// (0x00055c9b) scroll_pane_cp25_ParamLimits

0x131f,	// (0x00055c9b) scroll_pane_cp25

0x1338,	// (0x00055cb4) list_double2_graphic_pane_cp2_ParamLimits

0x1338,	// (0x00055cb4) list_double2_graphic_pane_cp2

0x1338,	// (0x00055cb4) list_double2_large_graphic_pane_cp2_ParamLimits

0x1338,	// (0x00055cb4) list_double2_large_graphic_pane_cp2

0x1338,	// (0x00055cb4) list_double2_pane_cp2_ParamLimits

0x1338,	// (0x00055cb4) list_double2_pane_cp2

0x1338,	// (0x00055cb4) list_double_graphic_pane_cp2_ParamLimits

0x1338,	// (0x00055cb4) list_double_graphic_pane_cp2

0x1338,	// (0x00055cb4) list_double_large_graphic_pane_cp2_ParamLimits

0x1338,	// (0x00055cb4) list_double_large_graphic_pane_cp2

0x1338,	// (0x00055cb4) list_double_number_pane_cp2_ParamLimits

0x1338,	// (0x00055cb4) list_double_number_pane_cp2

0x1338,	// (0x00055cb4) list_double_pane_cp2_ParamLimits

0x1338,	// (0x00055cb4) list_double_pane_cp2

0x68b9,	// (0x0005b235) list_single_2graphic_pane_cp2_ParamLimits

0x68b9,	// (0x0005b235) list_single_2graphic_pane_cp2

0x68b9,	// (0x0005b235) list_single_graphic_heading_pane_cp2_ParamLimits

0x68b9,	// (0x0005b235) list_single_graphic_heading_pane_cp2

0x68b9,	// (0x0005b235) list_single_graphic_pane_cp2_ParamLimits

0x68b9,	// (0x0005b235) list_single_graphic_pane_cp2

0x68b9,	// (0x0005b235) list_single_heading_pane_cp2_ParamLimits

0x68b9,	// (0x0005b235) list_single_heading_pane_cp2

0x1348,	// (0x00055cc4) list_single_large_graphic_pane_cp2_ParamLimits

0x1348,	// (0x00055cc4) list_single_large_graphic_pane_cp2

0x68b9,	// (0x0005b235) list_single_number_heading_pane_cp2_ParamLimits

0x68b9,	// (0x0005b235) list_single_number_heading_pane_cp2

0x68b9,	// (0x0005b235) list_single_number_pane_cp2_ParamLimits

0x68b9,	// (0x0005b235) list_single_number_pane_cp2

0x68b9,	// (0x0005b235) list_single_pane_cp2_ParamLimits

0x68b9,	// (0x0005b235) list_single_pane_cp2

0x1362,	// (0x00055cde) bg_popup_sub_pane_cp22

0x6991,	// (0x0005b30d) popup_side_volume_key_window_g1

0x69b5,	// (0x0005b331) popup_side_volume_key_window_t1

0x69d1,	// (0x0005b34d) volume_small_pane_cp1

0xeed6,	// (0x00063852) bg_popup_sub_pane_cp24_ParamLimits

0xeed6,	// (0x00063852) bg_popup_sub_pane_cp24

0x1378,	// (0x00055cf4) fep_china_uni_candidate_pane_ParamLimits

0x1378,	// (0x00055cf4) fep_china_uni_candidate_pane

0x138c,	// (0x00055d08) fep_china_uni_entry_pane

0x139c,	// (0x00055d18) popup_fep_china_uni_window_g1

0x69d9,	// (0x0005b355) fep_china_uni_entry_pane_g1

0x69e1,	// (0x0005b35d) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00064099) fep_china_uni_entry_pane_g

0x13b8,	// (0x00055d34) fep_entry_item_pane

0x13c2,	// (0x00055d3e) fep_candidate_item_pane

0x69e9,	// (0x0005b365) fep_china_uni_candidate_pane_g1

0x13ca,	// (0x00055d46) fep_china_uni_candidate_pane_g2

0x13d2,	// (0x00055d4e) fep_china_uni_candidate_pane_g3

0x69f1,	// (0x0005b36d) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0006409e) fep_china_uni_candidate_pane_g

0xed54,	// (0x000636d0) fep_entry_item_pane_g1

0x13da,	// (0x00055d56) fep_entry_item_pane_t1_ParamLimits

0x13da,	// (0x00055d56) fep_entry_item_pane_t1

0x13f0,	// (0x00055d6c) fep_candidate_item_pane_t1_ParamLimits

0x13f0,	// (0x00055d6c) fep_candidate_item_pane_t1

0x1405,	// (0x00055d81) fep_candidate_item_pane_t2_ParamLimits

0x1405,	// (0x00055d81) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x000640a7) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x000640a7) fep_candidate_item_pane_t

0xedac,	// (0x00063728) list_highlight_pane_cp31_ParamLimits

0xedac,	// (0x00063728) list_highlight_pane_cp31

0x1417,	// (0x00055d93) level_1_signal_lsc

0x1420,	// (0x00055d9c) level_2_signal_lsc

0x1429,	// (0x00055da5) level_3_signal_lsc

0x1432,	// (0x00055dae) level_4_signal_lsc

0x143b,	// (0x00055db7) level_5_signal_lsc

0x1444,	// (0x00055dc0) level_6_signal_lsc

0x144d,	// (0x00055dc9) level_7_signal_lsc

0x144d,	// (0x00055dc9) level_1_battery_lsc

0x1456,	// (0x00055dd2) level_2_battery_lsc

0x145f,	// (0x00055ddb) level_3_battery_lsc

0x1468,	// (0x00055de4) level_4_battery_lsc

0x1471,	// (0x00055ded) level_5_battery_lsc

0x147a,	// (0x00055df6) level_6_battery_lsc

0x1417,	// (0x00055d93) level_7_battery_lsc

0x1483,	// (0x00055dff) scroll_handle_focus_pane_g1

0x148c,	// (0x00055e08) scroll_handle_focus_pane_g2

0x1495,	// (0x00055e11) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x000640ac) scroll_handle_focus_pane_g

0x69f9,	// (0x0005b375) list_single_2graphic_pane_g1_ParamLimits

0x69f9,	// (0x0005b375) list_single_2graphic_pane_g1

0x5f59,	// (0x0005a8d5) list_single_2graphic_pane_g2_ParamLimits

0x5f59,	// (0x0005a8d5) list_single_2graphic_pane_g2

0x5eac,	// (0x0005a828) list_single_2graphic_pane_g3_ParamLimits

0x5eac,	// (0x0005a828) list_single_2graphic_pane_g3

0x6a05,	// (0x0005b381) list_single_2graphic_pane_g4_ParamLimits

0x6a05,	// (0x0005b381) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x000640b3) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x000640b3) list_single_2graphic_pane_g

0x6a11,	// (0x0005b38d) list_single_2graphic_pane_t1_ParamLimits

0x6a11,	// (0x0005b38d) list_single_2graphic_pane_t1

0x6a3f,	// (0x0005b3bb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6a3f,	// (0x0005b3bb) list_double2_graphic_large_graphic_pane_g1

0x6144,	// (0x0005aac0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x6144,	// (0x0005aac0) list_double2_graphic_large_graphic_pane_g2

0x483d,	// (0x000591b9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x483d,	// (0x000591b9) list_double2_graphic_large_graphic_pane_g3

0x6a4f,	// (0x0005b3cb) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6a4f,	// (0x0005b3cb) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x000640bc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x000640bc) list_double2_graphic_large_graphic_pane_g

0x6a5b,	// (0x0005b3d7) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6a5b,	// (0x0005b3d7) list_double2_graphic_large_graphic_pane_t1

0x6a71,	// (0x0005b3ed) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6a71,	// (0x0005b3ed) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x000640c5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x000640c5) list_double2_graphic_large_graphic_pane_t

0x6c55,	// (0x0005b5d1) popup_fast_swap_window_ParamLimits

0x6c55,	// (0x0005b5d1) popup_fast_swap_window

0x6c71,	// (0x0005b5ed) popup_side_volume_key_window

0x371b,	// (0x00058097) stacon_top_pane

0x3725,	// (0x000580a1) status_pane_ParamLimits

0x3725,	// (0x000580a1) status_pane

0x6c8b,	// (0x0005b607) status_small_pane

0xed5e,	// (0x000636da) control_pane

0xed5e,	// (0x000636da) stacon_bottom_pane

0xf14f,	// (0x00063acb) scroll_pane_cp121

0xf146,	// (0x00063ac2) set_content_pane

0x6a83,	// (0x0005b3ff) bg_active_tab_pane_g1_cp1

0x6a8c,	// (0x0005b408) bg_active_tab_pane_g2_cp1

0x6a95,	// (0x0005b411) bg_active_tab_pane_g3_cp1

0x6a83,	// (0x0005b3ff) bg_passive_tab_pane_g1_cp1

0x6a8c,	// (0x0005b408) bg_passive_tab_pane_g2_cp1

0x6a95,	// (0x0005b411) bg_passive_tab_pane_g3_cp1

0x6a9e,	// (0x0005b41a) bg_active_tab_pane_g1_cp2

0x6a8c,	// (0x0005b408) bg_active_tab_pane_g2_cp2

0x6aa7,	// (0x0005b423) bg_active_tab_pane_g3_cp2

0x6a9e,	// (0x0005b41a) bg_passive_tab_pane_g1_cp2

0x6a8c,	// (0x0005b408) bg_passive_tab_pane_g2_cp2

0x6aa7,	// (0x0005b423) bg_passive_tab_pane_g3_cp2

0x6ab0,	// (0x0005b42c) bg_active_tab_pane_g1_cp3

0x6a8c,	// (0x0005b408) bg_active_tab_pane_g2_cp3

0x6ab9,	// (0x0005b435) bg_active_tab_pane_g3_cp3

0x6ab0,	// (0x0005b42c) bg_passive_tab_pane_g1_cp3

0x6a8c,	// (0x0005b408) bg_passive_tab_pane_g2_cp3

0x6ab9,	// (0x0005b435) bg_passive_tab_pane_g3_cp3

0x6ac2,	// (0x0005b43e) bg_active_tab_pane_g1_cp4

0x6a8c,	// (0x0005b408) bg_active_tab_pane_g2_cp4

0x6acd,	// (0x0005b449) bg_active_tab_pane_g3_cp4

0x6ac2,	// (0x0005b43e) bg_passive_tab_pane_g1_cp4

0x6a8c,	// (0x0005b408) bg_passive_tab_pane_g2_cp4

0x6acd,	// (0x0005b449) bg_passive_tab_pane_g3_cp4

0x6c19,	// (0x0005b595) bg_active_tab_pane_g1_cp5

0x6a8c,	// (0x0005b408) bg_active_tab_pane_g2_cp5

0x6c22,	// (0x0005b59e) bg_active_tab_pane_g3_cp5

0x6c19,	// (0x0005b595) bg_passive_tab_pane_g1_cp5

0x6a8c,	// (0x0005b408) bg_passive_tab_pane_g2_cp5

0x6c22,	// (0x0005b59e) bg_passive_tab_pane_g3_cp5

0x6c2b,	// (0x0005b5a7) list_set_graphic_pane_ParamLimits

0x6c2b,	// (0x0005b5a7) list_set_graphic_pane

0xed5e,	// (0x000636da) bg_set_opt_pane_cp4

0x14dc,	// (0x00055e58) list_set_graphic_pane_g1_ParamLimits

0x14dc,	// (0x00055e58) list_set_graphic_pane_g1

0x14e8,	// (0x00055e64) list_set_graphic_pane_g2_ParamLimits

0x14e8,	// (0x00055e64) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x000640ca) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x000640ca) list_set_graphic_pane_g

0x0009,

0xfae6,	// (0x00064462) volume_small_pane_cp_g

0x6c49,	// (0x0005b5c5) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6c49,	// (0x0005b5c5) list_double2_large_graphic_pane_g1_cp2

0x150a,	// (0x00055e86) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x150a,	// (0x00055e86) list_double2_large_graphic_pane_g2_cp2

0x151b,	// (0x00055e97) list_double2_large_graphic_pane_g3_cp2

0x1523,	// (0x00055e9f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1523,	// (0x00055e9f) list_double2_large_graphic_pane_t1_cp2

0x1539,	// (0x00055eb5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1539,	// (0x00055eb5) list_double2_large_graphic_pane_t2_cp2

0xa37e,	// (0x0005ecfa) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa37e,	// (0x0005ecfa) list_double_large_graphic_pane_g1_cp2

0xa38f,	// (0x0005ed0b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa38f,	// (0x0005ed0b) list_double_large_graphic_pane_g2_cp2

0x3835,	// (0x000581b1) list_double_large_graphic_pane_g3_cp2

0xa3a0,	// (0x0005ed1c) list_double_large_graphic_pane_g4_cp

0xa3a8,	// (0x0005ed24) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa3a8,	// (0x0005ed24) list_double_large_graphic_pane_t1_cp2

0xa3bf,	// (0x0005ed3b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa3bf,	// (0x0005ed3b) list_double_large_graphic_pane_t2_cp2

0x3733,	// (0x000580af) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3733,	// (0x000580af) list_double2_graphic_pane_g1_cp2

0x3741,	// (0x000580bd) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3741,	// (0x000580bd) list_double2_graphic_pane_g2_cp2

0x3752,	// (0x000580ce) list_double2_graphic_pane_g3_cp2

0x375c,	// (0x000580d8) list_double2_graphic_pane_t1_cp2_ParamLimits

0x375c,	// (0x000580d8) list_double2_graphic_pane_t1_cp2

0x3772,	// (0x000580ee) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3772,	// (0x000580ee) list_double2_graphic_pane_t2_cp2

0x154b,	// (0x00055ec7) list_single_number_heading_pane_g1_cp2_ParamLimits

0x154b,	// (0x00055ec7) list_single_number_heading_pane_g1_cp2

0x3784,	// (0x00058100) list_single_number_heading_pane_g2_cp2

0x378c,	// (0x00058108) list_single_number_heading_pane_t1_cp2_ParamLimits

0x378c,	// (0x00058108) list_single_number_heading_pane_t1_cp2

0x37a2,	// (0x0005811e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x37a2,	// (0x0005811e) list_single_number_heading_pane_t2_cp2

0x37b4,	// (0x00058130) list_single_number_heading_pane_t3_cp2_ParamLimits

0x37b4,	// (0x00058130) list_single_number_heading_pane_t3_cp2

0x154b,	// (0x00055ec7) list_single_heading_pane_g1_cp2_ParamLimits

0x154b,	// (0x00055ec7) list_single_heading_pane_g1_cp2

0x3784,	// (0x00058100) list_single_heading_pane_g2_cp2

0x378c,	// (0x00058108) list_single_heading_pane_t1_cp2_ParamLimits

0x378c,	// (0x00058108) list_single_heading_pane_t1_cp2

0xa188,	// (0x0005eb04) list_single_heading_pane_t2_cp2_ParamLimits

0xa188,	// (0x0005eb04) list_single_heading_pane_t2_cp2

0xa0d0,	// (0x0005ea4c) list_double_graphic_pane_g1_cp2_ParamLimits

0xa0d0,	// (0x0005ea4c) list_double_graphic_pane_g1_cp2

0xa0dc,	// (0x0005ea58) list_double_graphic_pane_g2_cp2_ParamLimits

0xa0dc,	// (0x0005ea58) list_double_graphic_pane_g2_cp2

0xa0eb,	// (0x0005ea67) list_double_graphic_pane_g3_cp2

0xa0f3,	// (0x0005ea6f) list_double_graphic_pane_t1_cp2_ParamLimits

0xa0f3,	// (0x0005ea6f) list_double_graphic_pane_t1_cp2

0xa109,	// (0x0005ea85) list_double_graphic_pane_t2_cp2_ParamLimits

0xa109,	// (0x0005ea85) list_double_graphic_pane_t2_cp2

0x3829,	// (0x000581a5) list_double_number_pane_g1_cp2_ParamLimits

0x3829,	// (0x000581a5) list_double_number_pane_g1_cp2

0x3835,	// (0x000581b1) list_double_number_pane_g2_cp2

0xa094,	// (0x0005ea10) list_double_number_pane_t1_cp2_ParamLimits

0xa094,	// (0x0005ea10) list_double_number_pane_t1_cp2

0xa0a8,	// (0x0005ea24) list_double_number_pane_t2_cp2_ParamLimits

0xa0a8,	// (0x0005ea24) list_double_number_pane_t2_cp2

0xa0be,	// (0x0005ea3a) list_double_number_pane_t3_cp2_ParamLimits

0xa0be,	// (0x0005ea3a) list_double_number_pane_t3_cp2

0x9f7d,	// (0x0005e8f9) list_single_graphic_pane_g1_cp2_ParamLimits

0x9f7d,	// (0x0005e8f9) list_single_graphic_pane_g1_cp2

0x3885,	// (0x00058201) list_single_graphic_pane_g2_cp2_ParamLimits

0x3885,	// (0x00058201) list_single_graphic_pane_g2_cp2

0x3891,	// (0x0005820d) list_single_graphic_pane_g3_cp2

0x9f53,	// (0x0005e8cf) list_single_graphic_pane_t1_cp2_ParamLimits

0x9f53,	// (0x0005e8cf) list_single_graphic_pane_t1_cp2

0x3885,	// (0x00058201) list_single_number_pane_g1_cp2_ParamLimits

0x3885,	// (0x00058201) list_single_number_pane_g1_cp2

0x3891,	// (0x0005820d) list_single_number_pane_g2_cp2

0x9f53,	// (0x0005e8cf) list_single_number_pane_t1_cp2_ParamLimits

0x9f53,	// (0x0005e8cf) list_single_number_pane_t1_cp2

0x9f69,	// (0x0005e8e5) list_single_number_pane_t2_cp2_ParamLimits

0x9f69,	// (0x0005e8e5) list_single_number_pane_t2_cp2

0x150a,	// (0x00055e86) list_double2_pane_g1_cp2_ParamLimits

0x150a,	// (0x00055e86) list_double2_pane_g1_cp2

0x151b,	// (0x00055e97) list_double2_pane_g2_cp2

0x3801,	// (0x0005817d) list_double2_pane_t1_cp2_ParamLimits

0x3801,	// (0x0005817d) list_double2_pane_t1_cp2

0x3817,	// (0x00058193) list_double2_pane_t2_cp2_ParamLimits

0x3817,	// (0x00058193) list_double2_pane_t2_cp2

0x3829,	// (0x000581a5) list_double_pane_g1_cp2_ParamLimits

0x3829,	// (0x000581a5) list_double_pane_g1_cp2

0x3835,	// (0x000581b1) list_double_pane_g2_cp2

0x383d,	// (0x000581b9) list_double_pane_t1_cp2_ParamLimits

0x383d,	// (0x000581b9) list_double_pane_t1_cp2

0x3853,	// (0x000581cf) list_double_pane_t2_cp2_ParamLimits

0x3853,	// (0x000581cf) list_double_pane_t2_cp2

0x6c96,	// (0x0005b612) list_single_pane_cp2_g3

0x3885,	// (0x00058201) list_single_pane_g1_cp2_ParamLimits

0x3885,	// (0x00058201) list_single_pane_g1_cp2

0x3891,	// (0x0005820d) list_single_pane_g2_cp2

0x3899,	// (0x00058215) list_single_pane_t1_cp2_ParamLimits

0x3899,	// (0x00058215) list_single_pane_t1_cp2

0x6c9e,	// (0x0005b61a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x6c9e,	// (0x0005b61a) list_single_large_graphic_pane_g1_cp2

0x38b1,	// (0x0005822d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x38b1,	// (0x0005822d) list_single_large_graphic_pane_g2_cp2

0x38bd,	// (0x00058239) list_single_large_graphic_pane_g3_cp2

0x6caa,	// (0x0005b626) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x6caa,	// (0x0005b626) list_single_large_graphic_pane_g4_cp1

0x38c5,	// (0x00058241) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x38c5,	// (0x00058241) list_single_large_graphic_pane_t1_cp2

0x9f1f,	// (0x0005e89b) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9f1f,	// (0x0005e89b) list_single_graphic_heading_pane_g1_cp2

0x9eec,	// (0x0005e868) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9eec,	// (0x0005e868) list_single_graphic_heading_pane_g4_cp2

0x3891,	// (0x0005820d) list_single_graphic_heading_pane_g5_cp2

0x9f2b,	// (0x0005e8a7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9f2b,	// (0x0005e8a7) list_single_graphic_heading_pane_t1_cp2

0x9f41,	// (0x0005e8bd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9f41,	// (0x0005e8bd) list_single_graphic_heading_pane_t2_cp2

0x9ee0,	// (0x0005e85c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9ee0,	// (0x0005e85c) list_single_2graphic_pane_g1_cp2

0x9eec,	// (0x0005e868) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9eec,	// (0x0005e868) list_single_2graphic_pane_g2_cp2

0x3891,	// (0x0005820d) list_single_2graphic_pane_g3_cp2

0x9efd,	// (0x0005e879) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9efd,	// (0x0005e879) list_single_2graphic_pane_g4_cp2

0x9f09,	// (0x0005e885) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9f09,	// (0x0005e885) list_single_2graphic_pane_t1_cp2

0xed54,	// (0x000636d0) list_highlight_pane_g10_cp1

0x9ac8,	// (0x0005e444) list_highlight_pane_g1_cp1

0x9ad0,	// (0x0005e44c) list_highlight_pane_g2_cp1

0x9ad8,	// (0x0005e454) list_highlight_pane_g3_cp1

0x9ae0,	// (0x0005e45c) list_highlight_pane_g4_cp1

0x9ae8,	// (0x0005e464) list_highlight_pane_g5_cp1

0x9af0,	// (0x0005e46c) list_highlight_pane_g6_cp1

0x9af8,	// (0x0005e474) list_highlight_pane_g7_cp1

0x9b00,	// (0x0005e47c) list_highlight_pane_g8_cp1

0x9b08,	// (0x0005e484) list_highlight_pane_g9_cp1

0x99f0,	// (0x0005e36c) form_field_slider_pane_t3

0x99fe,	// (0x0005e37a) form_field_slider_pane_t4

0x9a0c,	// (0x0005e388) slider_form_pane_ParamLimits

0x9a0c,	// (0x0005e388) slider_form_pane

0xed5e,	// (0x000636da) control_abbreviations

0xed5e,	// (0x000636da) control_conventions

0xed5e,	// (0x000636da) control_definitions

0xed5e,	// (0x000636da) format_table_attribute

0xa1d2,	// (0x0005eb4e) bg_popup_preview_window_pane_g9

0xed5e,	// (0x000636da) format_table_data2

0xed5e,	// (0x000636da) format_table_data3

0xed5e,	// (0x000636da) format_table_data_example

0x0008,

0xed5e,	// (0x000636da) intro_purpose

0xf8ea,	// (0x00064266) bg_popup_preview_window_pane_g

0xed5e,	// (0x000636da) texts_category

0xed5e,	// (0x000636da) texts_graphics

0x38db,	// (0x00058257) text_digital

0x38ea,	// (0x00058266) text_primary

0x38f9,	// (0x00058275) text_primary_small

0x3908,	// (0x00058284) text_secondary

0x3917,	// (0x00058293) text_title

0xa960,	// (0x0005f2dc) bg_passive_tab_pane_g1_cp3_srt

0x6a8c,	// (0x0005b408) bg_passive_tab_pane_g2_cp3_srt

0xa969,	// (0x0005f2e5) bg_passive_tab_pane_g3_cp3_srt

0xedac,	// (0x00063728) bg_active_tab_pane_cp3_srt_ParamLimits

0xedac,	// (0x00063728) bg_active_tab_pane_cp3_srt

0xa972,	// (0x0005f2ee) tabs_4_active_pane_srt_g1

0xa97a,	// (0x0005f2f6) tabs_4_active_pane_srt_t1_ParamLimits

0xa97a,	// (0x0005f2f6) tabs_4_active_pane_srt_t1

0xa960,	// (0x0005f2dc) bg_active_tab_pane_g1_cp3_copy1

0x6a8c,	// (0x0005b408) bg_active_tab_pane_g2_cp3_copy1

0xa969,	// (0x0005f2e5) bg_active_tab_pane_g3_cp3_copy1

0xedac,	// (0x00063728) tabs_2_long_active_pane_srt_ParamLimits

0xedac,	// (0x00063728) tabs_2_long_active_pane_srt

0xedac,	// (0x00063728) tabs_2_long_passive_pane_srt_ParamLimits

0xedac,	// (0x00063728) tabs_2_long_passive_pane_srt

0x6557,	// (0x0005aed3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x6557,	// (0x0005aed3) bg_passive_tab_pane_cp4_srt

0xa5f3,	// (0x0005ef6f) bg_passive_tab_pane_g1_cp4_srt

0x6a8c,	// (0x0005b408) bg_passive_tab_pane_g2_cp4_srt

0xa5fc,	// (0x0005ef78) bg_passive_tab_pane_g3_cp4_srt

0x21c8,	// (0x00056b44) bg_active_tab_pane_cp4_srt_ParamLimits

0x21c8,	// (0x00056b44) bg_active_tab_pane_cp4_srt

0xa605,	// (0x0005ef81) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa605,	// (0x0005ef81) tabs_2_long_active_pane_srt_t1

0xa5f3,	// (0x0005ef6f) bg_active_tab_pane_g1_cp4_srt

0x6a8c,	// (0x0005b408) bg_active_tab_pane_g2_cp4_srt

0xa5fc,	// (0x0005ef78) bg_active_tab_pane_g3_cp4_srt

0xeed6,	// (0x00063852) tabs_3_long_active_pane_srt_ParamLimits

0xeed6,	// (0x00063852) tabs_3_long_active_pane_srt

0xeed6,	// (0x00063852) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xeed6,	// (0x00063852) tabs_3_long_passive_pane_cp_srt

0xeed6,	// (0x00063852) tabs_3_long_passive_pane_srt_ParamLimits

0xeed6,	// (0x00063852) tabs_3_long_passive_pane_srt

0x6557,	// (0x0005aed3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x6557,	// (0x0005aed3) bg_passive_tab_pane_cp5_srt

0x6c19,	// (0x0005b595) bg_passive_tab_pane_g1_cp5_srt

0x6a8c,	// (0x0005b408) bg_passive_tab_pane_g2_cp5_srt

0x6c22,	// (0x0005b59e) bg_passive_tab_pane_g3_cp5_srt

0x21c8,	// (0x00056b44) bg_active_tab_pane_cp5_srt_ParamLimits

0x21c8,	// (0x00056b44) bg_active_tab_pane_cp5_srt

0xa5e1,	// (0x0005ef5d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa5e1,	// (0x0005ef5d) tabs_3_long_active_pane_srt_t1

0x6c19,	// (0x0005b595) bg_active_tab_pane_g1_cp5_srt

0x6a8c,	// (0x0005b408) bg_active_tab_pane_g2_cp5_srt

0x6c22,	// (0x0005b59e) bg_active_tab_pane_g3_cp5_srt

0xa5d3,	// (0x0005ef4f) navi_text_pane_srt_t1

0xa5cb,	// (0x0005ef47) navi_icon_pane_srt_g1

0x3a02,	// (0x0005837e) midp_editing_number_pane_srt

0x3926,	// (0x000582a2) midp_ticker_pane_srt

0x3a0a,	// (0x00058386) midp_ticker_pane_srt_g1

0x3a12,	// (0x0005838e) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x000640e9) midp_ticker_pane_srt_g

0x3a1a,	// (0x00058396) midp_ticker_pane_srt_t1

0xa5bc,	// (0x0005ef38) midp_editing_number_pane_t1_copy1

0x6cc4,	// (0x0005b640) listscroll_midp_pane

0x6cc4,	// (0x0005b640) midp_form_pane

0x6d36,	// (0x0005b6b2) midp_info_popup_window_ParamLimits

0x6d36,	// (0x0005b6b2) midp_info_popup_window

0xf215,	// (0x00063b91) bg_popup_sub_pane_cp50_ParamLimits

0xf215,	// (0x00063b91) bg_popup_sub_pane_cp50

0x9704,	// (0x0005e080) listscroll_midp_info_pane_ParamLimits

0x9704,	// (0x0005e080) listscroll_midp_info_pane

0x96e4,	// (0x0005e060) listscroll_form_midp_pane_ParamLimits

0x96e4,	// (0x0005e060) listscroll_form_midp_pane

0x96f0,	// (0x0005e06c) scroll_bar_cp050

0x96c4,	// (0x0005e040) list_midp_pane

0xb4fe,	// (0x0005fe7a) signal_pane_g2_cp

0x95fe,	// (0x0005df7a) listscroll_midp_info_pane_t1_ParamLimits

0x95fe,	// (0x0005df7a) listscroll_midp_info_pane_t1

0x9616,	// (0x0005df92) listscroll_midp_info_pane_t2_ParamLimits

0x9616,	// (0x0005df92) listscroll_midp_info_pane_t2

0x9654,	// (0x0005dfd0) listscroll_midp_info_pane_t3_ParamLimits

0x9654,	// (0x0005dfd0) listscroll_midp_info_pane_t3

0x968e,	// (0x0005e00a) listscroll_midp_info_pane_t4_ParamLimits

0x968e,	// (0x0005e00a) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x000641a1) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x000641a1) listscroll_midp_info_pane_t

0xf28b,	// (0x00063c07) scroll_pane_cp21

0x959e,	// (0x0005df1a) form_midp_field_choice_group_pane

0x95a7,	// (0x0005df23) form_midp_field_text_pane

0x95e4,	// (0x0005df60) form_midp_field_time_pane

0x95ec,	// (0x0005df68) form_midp_gauge_slider_pane

0x95f5,	// (0x0005df71) form_midp_gauge_wait_pane

0xed5e,	// (0x000636da) form_midp_image_pane

0x7787,	// (0x0005c103) list_single_midp_pane_ParamLimits

0x7787,	// (0x0005c103) list_single_midp_pane

0x9553,	// (0x0005decf) form_midp_field_text_pane_t1

0x931d,	// (0x0005dc99) input_focus_pane_cp050

0x958d,	// (0x0005df09) list_midp_form_text_pane

0x9522,	// (0x0005de9e) form_midp_field_choice_group_pane_t1

0x9530,	// (0x0005deac) input_focus_pane_cp051

0x9544,	// (0x0005dec0) list_midp_choice_pane

0xed5e,	// (0x000636da) status_idle_pane

0x9506,	// (0x0005de82) form_midp_field_time_pane_t1

0xed54,	// (0x000636d0) wait_anim_pane_g2_copy1

0x9514,	// (0x0005de90) form_midp_field_time_pane_t2

0x0001,

0x3986,	// (0x00058302) aid_navinavi_width_2_pane

0xf820,	// (0x0006419c) form_midp_field_time_pane_t

0xed5e,	// (0x000636da) input_focus_pane_cp052

0xed5e,	// (0x000636da) bg_input_focus_pane_cp040

0x94c6,	// (0x0005de42) form_midp_gauge_slider_pane_t1

0x94d4,	// (0x0005de50) form_midp_gauge_slider_pane_t2

0x94e2,	// (0x0005de5e) form_midp_gauge_slider_pane_t3

0x94f0,	// (0x0005de6c) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00064193) form_midp_gauge_slider_pane_t

0x94fe,	// (0x0005de7a) form_midp_slider_pane

0xedac,	// (0x00063728) bg_input_focus_pane_cp041_ParamLimits

0xedac,	// (0x00063728) bg_input_focus_pane_cp041

0x9493,	// (0x0005de0f) form_midp_gauge_wait_pane_t1_ParamLimits

0x9493,	// (0x0005de0f) form_midp_gauge_wait_pane_t1

0x94a5,	// (0x0005de21) form_midp_gauge_wait_pane_t2_ParamLimits

0x94a5,	// (0x0005de21) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0006418e) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0006418e) form_midp_gauge_wait_pane_t

0x94b7,	// (0x0005de33) form_midp_wait_pane_ParamLimits

0x94b7,	// (0x0005de33) form_midp_wait_pane

0x945d,	// (0x0005ddd9) form_midp_image_pane_g1

0x9466,	// (0x0005dde2) form_midp_image_pane_t1

0x9475,	// (0x0005ddf1) form_midp_image_pane_t2

0x9484,	// (0x0005de00) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00064187) form_midp_image_pane_t

0x9454,	// (0x0005ddd0) list_single_midp_pane_g1

0x3b68,	// (0x000584e4) list_single_midp_pane_t1

0x942b,	// (0x0005dda7) list_midp_form_item_pane_ParamLimits

0x942b,	// (0x0005dda7) list_midp_form_item_pane

0x392e,	// (0x000582aa) list_midp_form_item_pane_t1

0x393d,	// (0x000582b9) midp_ticker_pane_g1

0x3949,	// (0x000582c5) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x000640cf) midp_ticker_pane_g

0x3955,	// (0x000582d1) midp_ticker_pane_t1

0xa809,	// (0x0005f185) midp_editing_number_pane_t1

0xa7e7,	// (0x0005f163) midp_editing_number_pane

0xa7f6,	// (0x0005f172) midp_ticker_pane

0xa5ac,	// (0x0005ef28) ai_message_heading_pane

0xed5e,	// (0x000636da) bg_popup_window_pane_cp14

0xa5b4,	// (0x0005ef30) listscroll_ai_message_pane

0xa536,	// (0x0005eeb2) ai_message_heading_pane_g1_ParamLimits

0xa536,	// (0x0005eeb2) ai_message_heading_pane_g1

0xa542,	// (0x0005eebe) ai_message_heading_pane_g2_ParamLimits

0xa542,	// (0x0005eebe) ai_message_heading_pane_g2

0xa54e,	// (0x0005eeca) ai_message_heading_pane_g3_ParamLimits

0xa54e,	// (0x0005eeca) ai_message_heading_pane_g3

0xa55a,	// (0x0005eed6) ai_message_heading_pane_g4_ParamLimits

0xa55a,	// (0x0005eed6) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x000642c8) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x000642c8) ai_message_heading_pane_g

0xa566,	// (0x0005eee2) ai_message_heading_pane_t1_ParamLimits

0xa566,	// (0x0005eee2) ai_message_heading_pane_t1

0xa580,	// (0x0005eefc) ai_message_heading_pane_t2_ParamLimits

0xa580,	// (0x0005eefc) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x000642d1) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x000642d1) ai_message_heading_pane_t

0xa592,	// (0x0005ef0e) bg_popup_heading_pane_cp1_ParamLimits

0xa592,	// (0x0005ef0e) bg_popup_heading_pane_cp1

0xa524,	// (0x0005eea0) list_ai_message_pane_ParamLimits

0xa524,	// (0x0005eea0) list_ai_message_pane

0xf28b,	// (0x00063c07) scroll_pane_cp10

0xa4c0,	// (0x0005ee3c) list_ai_message_pane_g1

0xa4c8,	// (0x0005ee44) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x000642a5) list_ai_message_pane_g

0xa4d0,	// (0x0005ee4c) list_ai_message_pane_t1_ParamLimits

0xa4d0,	// (0x0005ee4c) list_ai_message_pane_t1

0xa4e5,	// (0x0005ee61) list_ai_message_pane_t2_ParamLimits

0xa4e5,	// (0x0005ee61) list_ai_message_pane_t2

0xa4fa,	// (0x0005ee76) list_ai_message_pane_t3_ParamLimits

0xa4fa,	// (0x0005ee76) list_ai_message_pane_t3

0xa50f,	// (0x0005ee8b) list_ai_message_pane_t4_ParamLimits

0xa50f,	// (0x0005ee8b) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x000642aa) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x000642aa) list_ai_message_pane_t

0xa4ab,	// (0x0005ee27) cell_ai_soft_ind_pane_ParamLimits

0xa4ab,	// (0x0005ee27) cell_ai_soft_ind_pane

0x3967,	// (0x000582e3) cell_ai_soft_ind_pane_g1_ParamLimits

0x3967,	// (0x000582e3) cell_ai_soft_ind_pane_g1

0xed5e,	// (0x000636da) grid_highlight_cp1

0x3974,	// (0x000582f0) text_secondary_cp56_ParamLimits

0x3974,	// (0x000582f0) text_secondary_cp56

0xa480,	// (0x0005edfc) example_general_pane_ParamLimits

0xa480,	// (0x0005edfc) example_general_pane

0xa48c,	// (0x0005ee08) example_parent_pane_g1_ParamLimits

0xa48c,	// (0x0005ee08) example_parent_pane_g1

0xa498,	// (0x0005ee14) example_parent_pane_t1_ParamLimits

0xa498,	// (0x0005ee14) example_parent_pane_t1

0x741b,	// (0x0005bd97) popup_preview_text_window_ParamLimits

0x741b,	// (0x0005bd97) popup_preview_text_window

0x387d,	// (0x000581f9) list_single_pane_cp2_g4

0xef8c,	// (0x00063908) bg_popup_preview_window_pane_ParamLimits

0xef8c,	// (0x00063908) bg_popup_preview_window_pane

0xa1da,	// (0x0005eb56) popup_preview_text_window_t1_ParamLimits

0xa1da,	// (0x0005eb56) popup_preview_text_window_t1

0xa1f8,	// (0x0005eb74) popup_preview_text_window_t2_ParamLimits

0xa1f8,	// (0x0005eb74) popup_preview_text_window_t2

0xa241,	// (0x0005ebbd) popup_preview_text_window_t3_ParamLimits

0xa241,	// (0x0005ebbd) popup_preview_text_window_t3

0xa286,	// (0x0005ec02) popup_preview_text_window_t4_ParamLimits

0xa286,	// (0x0005ec02) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00064279) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00064279) popup_preview_text_window_t

0xa304,	// (0x0005ec80) scroll_pane_cp11

0x9291,	// (0x0005dc0d) bg_popup_preview_window_pane_g1

0xa19a,	// (0x0005eb16) bg_popup_preview_window_pane_g2

0xa1a2,	// (0x0005eb1e) bg_popup_preview_window_pane_g3

0xa1aa,	// (0x0005eb26) bg_popup_preview_window_pane_g4

0xa1b2,	// (0x0005eb2e) bg_popup_preview_window_pane_g5

0xa1ba,	// (0x0005eb36) bg_popup_preview_window_pane_g6

0xa1c2,	// (0x0005eb3e) bg_popup_preview_window_pane_g7

0xa1ca,	// (0x0005eb46) bg_popup_preview_window_pane_g8

0x54ce,	// (0x00059e4a) aid_popup_width_pane

0x73f9,	// (0x0005bd75) popup_midp_note_alarm_window_ParamLimits

0x73f9,	// (0x0005bd75) popup_midp_note_alarm_window

0xf160,	// (0x00063adc) data_form_pane_ParamLimits

0x6390,	// (0x0005ad0c) form_field_data_pane_g1

0x639a,	// (0x0005ad16) form_field_data_pane_t1_ParamLimits

0xf16c,	// (0x00063ae8) input_focus_pane_ParamLimits

0x36ad,	// (0x00058029) data_form_wide_pane_ParamLimits

0x36be,	// (0x0005803a) form_field_data_wide_pane_g1

0x36ca,	// (0x00058046) form_field_data_wide_pane_t1_ParamLimits

0xf060,	// (0x000639dc) input_focus_pane_cp6_ParamLimits

0x64fb,	// (0x0005ae77) input_popup_find_pane_g1_ParamLimits

0x64fb,	// (0x0005ae77) input_popup_find_pane_g1

0x668d,	// (0x0005b009) aid_navi_side_left_pane

0x66a2,	// (0x0005b01e) aid_navi_side_right_pane

0x9bc3,	// (0x0005e53f) bg_popup_window_pane_cp30_ParamLimits

0x9bc3,	// (0x0005e53f) bg_popup_window_pane_cp30

0x9c3d,	// (0x0005e5b9) popup_midp_note_alarm_window_g1_ParamLimits

0x9c3d,	// (0x0005e5b9) popup_midp_note_alarm_window_g1

0x9c6d,	// (0x0005e5e9) popup_midp_note_alarm_window_t1_ParamLimits

0x9c6d,	// (0x0005e5e9) popup_midp_note_alarm_window_t1

0x9d0e,	// (0x0005e68a) popup_midp_note_alarm_window_t2_ParamLimits

0x9d0e,	// (0x0005e68a) popup_midp_note_alarm_window_t2

0x9dbc,	// (0x0005e738) popup_midp_note_alarm_window_t3_ParamLimits

0x9dbc,	// (0x0005e738) popup_midp_note_alarm_window_t3

0x9de4,	// (0x0005e760) popup_midp_note_alarm_window_t4_ParamLimits

0x9de4,	// (0x0005e760) popup_midp_note_alarm_window_t4

0x9e04,	// (0x0005e780) popup_midp_note_alarm_window_t5_ParamLimits

0x9e04,	// (0x0005e780) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00064216) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00064216) popup_midp_note_alarm_window_t

0x9eb0,	// (0x0005e82c) wait_bar_pane_cp1_ParamLimits

0x9eb0,	// (0x0005e82c) wait_bar_pane_cp1

0xed5e,	// (0x000636da) wait_anim_pane_copy1

0xed5e,	// (0x000636da) wait_border_pane_copy1

0x98b9,	// (0x0005e235) wait_border_pane_g1_copy1

0x36e4,	// (0x00058060) form_field_popup_pane_g1

0x63b2,	// (0x0005ad2e) form_field_popup_pane_t1_ParamLimits

0xf16c,	// (0x00063ae8) input_focus_pane_cp7_ParamLimits

0xf19a,	// (0x00063b16) list_form_pane_ParamLimits

0x36ec,	// (0x00058068) form_field_popup_wide_pane_g1

0x36f4,	// (0x00058070) form_field_popup_wide_pane_t1_ParamLimits

0xf16c,	// (0x00063ae8) input_focus_pane_cp8_ParamLimits

0xf1a6,	// (0x00063b22) list_form_wide_pane_ParamLimits

0xa9f4,	// (0x0005f370) aid_size_cell_graphic_pane

0x642d,	// (0x0005ada9) data_form_pane_t1_ParamLimits

0x79f9,	// (0x0005c375) data_form_wide_pane_t1_ParamLimits

0x8e5b,	// (0x0005d7d7) bg_status_flat_pane

0x58d7,	// (0x0005a253) title_pane_t1_ParamLimits

0xed74,	// (0x000636f0) title_pane_t2_ParamLimits

0xed9a,	// (0x00063716) title_pane_t3_ParamLimits

0xf557,	// (0x00063ed3) title_pane_t_ParamLimits

0xf534,	// (0x00063eb0) level_1_signal_ParamLimits

0xf541,	// (0x00063ebd) level_2_signal_ParamLimits

0x12b0,	// (0x00055c2c) level_3_signal_ParamLimits

0x12bd,	// (0x00055c39) level_4_signal_ParamLimits

0x12ca,	// (0x00055c46) level_5_signal_ParamLimits

0x12d7,	// (0x00055c53) level_6_signal_ParamLimits

0x12e4,	// (0x00055c60) level_7_signal_ParamLimits

0xf534,	// (0x00063eb0) level_1_battery_ParamLimits

0xf541,	// (0x00063ebd) level_2_battery_ParamLimits

0x12b0,	// (0x00055c2c) level_3_battery_ParamLimits

0x12bd,	// (0x00055c39) level_4_battery_ParamLimits

0x12ca,	// (0x00055c46) level_5_battery_ParamLimits

0x12d7,	// (0x00055c53) level_6_battery_ParamLimits

0x12e4,	// (0x00055c60) level_7_battery_ParamLimits

0x9ac8,	// (0x0005e444) bg_status_flat_pane_g1

0x9ad0,	// (0x0005e44c) bg_status_flat_pane_g2

0x9ad8,	// (0x0005e454) bg_status_flat_pane_g3

0x9ae0,	// (0x0005e45c) bg_status_flat_pane_g4

0x9ae8,	// (0x0005e464) bg_status_flat_pane_g5

0x9af0,	// (0x0005e46c) bg_status_flat_pane_g6

0x9af8,	// (0x0005e474) bg_status_flat_pane_g7

0x5947,	// (0x0005a2c3) tabs_3_active_pane_t1_ParamLimits

0x5947,	// (0x0005a2c3) tabs_3_passive_pane_t1_ParamLimits

0x5961,	// (0x0005a2dd) tabs_4_active_pane_t1_ParamLimits

0x5961,	// (0x0005a2dd) tabs_4_1_passive_pane_t1_ParamLimits

0x6532,	// (0x0005aeae) tabs_2_active_pane_t1_ParamLimits

0x6532,	// (0x0005aeae) tabs_2_passive_pane_t1_ParamLimits

0x21c8,	// (0x00056b44) bg_active_tab_pane_cp4_ParamLimits

0x6544,	// (0x0005aec0) tabs_2_long_active_pane_t1_ParamLimits

0x6557,	// (0x0005aed3) bg_passive_tab_pane_cp4_ParamLimits

0x76d4,	// (0x0005c050) list_single_midp_graphic_pane_t1_ParamLimits

0x21c8,	// (0x00056b44) bg_active_tab_pane_cp5_ParamLimits

0x6563,	// (0x0005aedf) tabs_3_long_active_pane_t1_ParamLimits

0x6557,	// (0x0005aed3) bg_passive_tab_pane_cp5_ParamLimits

0x76d4,	// (0x0005c050) list_single_midp_graphic_pane_t1

0x8e5b,	// (0x0005d7d7) bg_status_flat_pane_ParamLimits

0x8f24,	// (0x0005d8a0) indicator_pane_cp2_ParamLimits

0x8f24,	// (0x0005d8a0) indicator_pane_cp2

0x904f,	// (0x0005d9cb) navi_pane_srt_ParamLimits

0x904f,	// (0x0005d9cb) navi_pane_srt

0x9073,	// (0x0005d9ef) popup_clock_digital_analogue_window_cp1

0xedf0,	// (0x0006376c) indicator_pane_t1

0x3926,	// (0x000582a2) copy_highlight_pane

0x3926,	// (0x000582a2) cursor_graphics_pane

0x3926,	// (0x000582a2) graphic_within_text_pane

0x3926,	// (0x000582a2) link_highlight_pane

0xa2c7,	// (0x0005ec43) popup_preview_text_window_t5_ParamLimits

0xa2c7,	// (0x0005ec43) popup_preview_text_window_t5

0x398e,	// (0x0005830a) cursor_digital_pane

0x398e,	// (0x0005830a) cursor_primary_pane

0x399f,	// (0x0005831b) cursor_primary_small_pane

0x39a7,	// (0x00058323) cursor_secondary_pane

0x39af,	// (0x0005832b) cursor_title_pane

0x398e,	// (0x0005830a) link_highlight_digital_pane

0x3996,	// (0x00058312) link_highlight_primary_pane

0x399f,	// (0x0005831b) link_highlight_primary_small_pane

0x39a7,	// (0x00058323) link_highlight_secondary_pane

0x39af,	// (0x0005832b) link_highlight_title_pane

0x398e,	// (0x0005830a) copy_highlight_digital_pane

0x398e,	// (0x0005830a) copy_highlight_primary_pane

0x399f,	// (0x0005831b) copy_highlight_primary_small_pane

0x39a7,	// (0x00058323) copy_highlight_secondary_pane

0x39af,	// (0x0005832b) copy_highlight_title_pane

0x39a7,	// (0x00058323) graphic_text_digital_pane

0x9b66,	// (0x0005e4e2) graphic_text_primary_pane

0x9b6f,	// (0x0005e4eb) graphic_text_primary_small_pane

0x399f,	// (0x0005831b) graphic_text_secondary_pane

0x398e,	// (0x0005830a) graphic_text_title_pane

0x6d8e,	// (0x0005b70a) cursor_primary_pane_g1

0x9b58,	// (0x0005e4d4) cursor_text_primary_t1

0x9b40,	// (0x0005e4bc) cursor_primary_small_pane_g1

0x9b4a,	// (0x0005e4c6) cursor_text_primary_small_t1

0x9b28,	// (0x0005e4a4) cursor_primary_small_pane_g1_copy1

0x9b32,	// (0x0005e4ae) cursor_text_primary_small_t1_copy1

0x9b10,	// (0x0005e48c) cursor_text_title_t1

0x9b1e,	// (0x0005e49a) cursor_title_pane_g1

0x6d8e,	// (0x0005b70a) cursor_digital_pane_g1

0x39b7,	// (0x00058333) cursor_text_digital_t1

0x39c5,	// (0x00058341) link_highlight_primary_pane_g1

0x9ab9,	// (0x0005e435) link_highlight_primary_pane_t1

0x39c5,	// (0x00058341) link_highlight_primary_small_pane_g1

0x39cd,	// (0x00058349) link_highlight_primary_small_pane_t1

0x39c5,	// (0x00058341) link_highlight_secondary_pane_g1

0x39dc,	// (0x00058358) link_highlight_secondary_pane_t1

0x9a1e,	// (0x0005e39a) link_highlight_title_pane_g1

0x9a35,	// (0x0005e3b1) link_highlight_title_pane_t1

0x9a1e,	// (0x0005e39a) link_highlight_digital_pane_g1

0x9a26,	// (0x0005e3a2) link_highlight_digital_pane_t1

0x98d8,	// (0x0005e254) copy_highlight_primary_pane_g1

0x98fe,	// (0x0005e27a) copy_highlight_primary_pane_t1

0x98d8,	// (0x0005e254) copy_highlight_primary_small_pane_g1

0x98ef,	// (0x0005e26b) copy_highlight_primary_small_pane_t1

0x39eb,	// (0x00058367) copy_highlight_secondary_pane_g1

0x39f3,	// (0x0005836f) copy_highlight_secondary_pane_t1

0x98d8,	// (0x0005e254) copy_highlight_title_pane_g1

0x98e0,	// (0x0005e25c) copy_highlight_title_pane_t1

0x98d8,	// (0x0005e254) copy_highlight_digital_pane_g1

0xabc2,	// (0x0005f53e) copy_highlight_digital_pane_t1

0xab16,	// (0x0005f492) graphic_text_primary_pane_g1

0xaba6,	// (0x0005f522) graphic_text_primary_pane_t1

0xabb4,	// (0x0005f530) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x00064345) graphic_text_primary_pane_t

0xab82,	// (0x0005f4fe) graphic_text_primary_small_pane_g1

0xab8a,	// (0x0005f506) graphic_text_primary_small_pane_t1

0xab98,	// (0x0005f514) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00064340) graphic_text_primary_small_pane_t

0xab5e,	// (0x0005f4da) graphic_text_secondary_pane_g1

0xab66,	// (0x0005f4e2) graphic_text_secondary_pane_t1

0xab74,	// (0x0005f4f0) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0006433b) graphic_text_secondary_pane_t

0xab3a,	// (0x0005f4b6) graphic_text_title_pane_g1

0xab42,	// (0x0005f4be) graphic_text_title_pane_t1

0xab50,	// (0x0005f4cc) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00064336) graphic_text_title_pane_t

0xab16,	// (0x0005f492) graphic_text_digital_pane_g1

0xab1e,	// (0x0005f49a) graphic_text_digital_pane_t1

0xab2c,	// (0x0005f4a8) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00064331) graphic_text_digital_pane_t

0xedac,	// (0x00063728) navi_icon_pane_srt_ParamLimits

0xedac,	// (0x00063728) navi_icon_pane_srt

0xed5e,	// (0x000636da) navi_midp_pane_srt

0xed5e,	// (0x000636da) navi_navi_pane_srt

0xedac,	// (0x00063728) navi_text_pane_srt_ParamLimits

0xedac,	// (0x00063728) navi_text_pane_srt

0xaae1,	// (0x0005f45d) navi_navi_icon_text_pane_srt

0xaae9,	// (0x0005f465) navi_navi_pane_srt_g1_ParamLimits

0xaae9,	// (0x0005f465) navi_navi_pane_srt_g1

0xaafb,	// (0x0005f477) navi_navi_pane_srt_g2_ParamLimits

0xaafb,	// (0x0005f477) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0006432c) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0006432c) navi_navi_pane_srt_g

0xab0d,	// (0x0005f489) navi_navi_tabs_pane_srt

0xaae1,	// (0x0005f45d) navi_navi_text_pane_srt

0xaae1,	// (0x0005f45d) navi_navi_volume_pane_srt

0xaad2,	// (0x0005f44e) navi_navi_text_pane_srt_t1

0x7b13,	// (0x0005c48f) navi_navi_volume_pane_srt_g1

0x7b1b,	// (0x0005c497) volume_small_pane_srt_ParamLimits

0x7b1b,	// (0x0005c497) volume_small_pane_srt

0x6d98,	// (0x0005b714) volume_small_pane_srt_g1_ParamLimits

0x6d98,	// (0x0005b714) volume_small_pane_srt_g1

0x6da8,	// (0x0005b724) volume_small_pane_srt_g2_ParamLimits

0x6da8,	// (0x0005b724) volume_small_pane_srt_g2

0x6db9,	// (0x0005b735) volume_small_pane_srt_g3_ParamLimits

0x6db9,	// (0x0005b735) volume_small_pane_srt_g3

0x6dca,	// (0x0005b746) volume_small_pane_srt_g4_ParamLimits

0x6dca,	// (0x0005b746) volume_small_pane_srt_g4

0x6ddb,	// (0x0005b757) volume_small_pane_srt_g5_ParamLimits

0x6ddb,	// (0x0005b757) volume_small_pane_srt_g5

0x6dec,	// (0x0005b768) volume_small_pane_srt_g6_ParamLimits

0x6dec,	// (0x0005b768) volume_small_pane_srt_g6

0x6dfd,	// (0x0005b779) volume_small_pane_srt_g7_ParamLimits

0x6dfd,	// (0x0005b779) volume_small_pane_srt_g7

0x6e0e,	// (0x0005b78a) volume_small_pane_srt_g8_ParamLimits

0x6e0e,	// (0x0005b78a) volume_small_pane_srt_g8

0x6e1f,	// (0x0005b79b) volume_small_pane_srt_g9_ParamLimits

0x6e1f,	// (0x0005b79b) volume_small_pane_srt_g9

0x6e30,	// (0x0005b7ac) volume_small_pane_srt_g10_ParamLimits

0x6e30,	// (0x0005b7ac) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x000640d4) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x000640d4) volume_small_pane_srt_g

0x5bae,	// (0x0005a52a) query_popup_data_pane_cp2

0xaab8,	// (0x0005f434) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaab8,	// (0x0005f434) navi_navi_icon_text_pane_srt_t1

0x9b66,	// (0x0005e4e2) navi_tabs_2_long_pane_srt

0x9b66,	// (0x0005e4e2) navi_tabs_2_pane_srt

0x9b66,	// (0x0005e4e2) navi_tabs_3_long_pane_srt

0x9b66,	// (0x0005e4e2) navi_tabs_3_pane_srt

0x9b66,	// (0x0005e4e2) navi_tabs_4_pane_srt

0x7af3,	// (0x0005c46f) tabs_2_active_pane_srt_ParamLimits

0x7af3,	// (0x0005c46f) tabs_2_active_pane_srt

0x7b03,	// (0x0005c47f) tabs_2_passive_pane_srt_ParamLimits

0x7b03,	// (0x0005c47f) tabs_2_passive_pane_srt

0x8d6a,	// (0x0005d6e6) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8d6a,	// (0x0005d6e6) bg_passive_tab_pane_cp1_srt

0xaa84,	// (0x0005f400) bg_passive_tab_pane_g1_cp1_srt

0x6a8c,	// (0x0005b408) bg_passive_tab_pane_g2_cp1_srt

0xaa8d,	// (0x0005f409) bg_passive_tab_pane_g3_cp1_srt

0xedac,	// (0x00063728) bg_active_tab_pane_cp1_srt_ParamLimits

0xedac,	// (0x00063728) bg_active_tab_pane_cp1_srt

0xaa96,	// (0x0005f412) tabs_2_active_pane_srt_g1

0xaa9e,	// (0x0005f41a) tabs_2_active_pane_srt_t1_ParamLimits

0xaa9e,	// (0x0005f41a) tabs_2_active_pane_srt_t1

0xaa84,	// (0x0005f400) bg_active_tab_pane_g1_cp1_srt

0x6a8c,	// (0x0005b408) bg_active_tab_pane_g2_cp1_srt

0xaa8d,	// (0x0005f409) bg_active_tab_pane_g3_cp1_srt

0x7ac0,	// (0x0005c43c) tabs_3_active_pane_srt_ParamLimits

0x7ac0,	// (0x0005c43c) tabs_3_active_pane_srt

0x7ad1,	// (0x0005c44d) tabs_3_passive_pane_cp_srt_ParamLimits

0x7ad1,	// (0x0005c44d) tabs_3_passive_pane_cp_srt

0x7ae2,	// (0x0005c45e) tabs_3_passive_pane_srt_ParamLimits

0x7ae2,	// (0x0005c45e) tabs_3_passive_pane_srt

0x8d6a,	// (0x0005d6e6) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8d6a,	// (0x0005d6e6) bg_passive_tab_pane_cp2_srt

0x6e41,	// (0x0005b7bd) bg_passive_tab_pane_g1_cp2_srt

0x6a8c,	// (0x0005b408) bg_passive_tab_pane_g2_cp2_srt

0x6e4a,	// (0x0005b7c6) bg_passive_tab_pane_g3_cp2_srt

0xedac,	// (0x00063728) bg_active_tab_pane_cp2_srt_ParamLimits

0xedac,	// (0x00063728) bg_active_tab_pane_cp2_srt

0xaa6a,	// (0x0005f3e6) tabs_3_active_pane_srt_g1

0xaa72,	// (0x0005f3ee) tabs_3_active_pane_srt_t1_ParamLimits

0xaa72,	// (0x0005f3ee) tabs_3_active_pane_srt_t1

0x6e41,	// (0x0005b7bd) bg_active_tab_pane_g1_cp2_srt

0x6a8c,	// (0x0005b408) bg_active_tab_pane_g2_cp2_srt

0x6e4a,	// (0x0005b7c6) bg_active_tab_pane_g3_cp2_srt

0x7a78,	// (0x0005c3f4) tabs_4_active_pane_srt_ParamLimits

0x7a78,	// (0x0005c3f4) tabs_4_active_pane_srt

0x7a8a,	// (0x0005c406) tabs_4_passive_pane_cp2_srt_ParamLimits

0x7a8a,	// (0x0005c406) tabs_4_passive_pane_cp2_srt

0x7066,	// (0x0005b9e2) aid_size_cell_toolbar

0x6557,	// (0x0005aed3) main_idle_act_pane_ParamLimits

0x722b,	// (0x0005bba7) popup_large_graphic_colour_window_ParamLimits

0x7596,	// (0x0005bf12) popup_toolbar_window_ParamLimits

0x7596,	// (0x0005bf12) popup_toolbar_window

0xa818,	// (0x0005f194) list_single_graphic_2heading_pane_ParamLimits

0xa818,	// (0x0005f194) list_single_graphic_2heading_pane

0xf41c,	// (0x00063d98) aid_size_cell_apps_grid_lsc_pane

0xf42e,	// (0x00063daa) aid_size_cell_apps_grid_prt_pane

0x8d6a,	// (0x0005d6e6) bg_wml_button_pane_cp1_ParamLimits

0x8d6a,	// (0x0005d6e6) bg_wml_button_pane_cp1

0x9553,	// (0x0005decf) form_midp_field_text_pane_t1_ParamLimits

0x931d,	// (0x0005dc99) input_focus_pane_cp050_ParamLimits

0x958d,	// (0x0005df09) list_midp_form_text_pane_ParamLimits

0x9530,	// (0x0005deac) input_focus_pane_cp051_ParamLimits

0x9544,	// (0x0005dec0) list_midp_choice_pane_ParamLimits

0x93d3,	// (0x0005dd4f) list_single_2graphic_pane_cp3_ParamLimits

0x93d3,	// (0x0005dd4f) list_single_2graphic_pane_cp3

0x93f8,	// (0x0005dd74) list_single_midp_graphic_pane_ParamLimits

0x93f8,	// (0x0005dd74) list_single_midp_graphic_pane

0x543c,	// (0x00059db8) list_single_graphic_2heading_pane_g1_ParamLimits

0x543c,	// (0x00059db8) list_single_graphic_2heading_pane_g1

0x5448,	// (0x00059dc4) list_single_graphic_2heading_pane_g4_ParamLimits

0x5448,	// (0x00059dc4) list_single_graphic_2heading_pane_g4

0x5454,	// (0x00059dd0) list_single_graphic_2heading_pane_g5_ParamLimits

0x5454,	// (0x00059dd0) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00064127) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00064127) list_single_graphic_2heading_pane_g

0x5460,	// (0x00059ddc) list_single_graphic_2heading_pane_t1_ParamLimits

0x5460,	// (0x00059ddc) list_single_graphic_2heading_pane_t1

0x5474,	// (0x00059df0) list_single_graphic_2heading_pane_t2_ParamLimits

0x5474,	// (0x00059df0) list_single_graphic_2heading_pane_t2

0x548e,	// (0x00059e0a) list_single_graphic_2heading_pane_t3_ParamLimits

0x548e,	// (0x00059e0a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0006412e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0006412e) list_single_graphic_2heading_pane_t

0x91cf,	// (0x0005db4b) bg_popup_sub_pane_cp2

0x91f9,	// (0x0005db75) grid_toobar_pane

0x7643,	// (0x0005bfbf) cell_toolbar_pane_ParamLimits

0x7643,	// (0x0005bfbf) cell_toolbar_pane

0x9235,	// (0x0005dbb1) cell_toolbar_pane_g1_ParamLimits

0x9235,	// (0x0005dbb1) cell_toolbar_pane_g1

0x9249,	// (0x0005dbc5) cell_toolbar_pane_g2_ParamLimits

0x9249,	// (0x0005dbc5) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0006413c) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0006413c) cell_toolbar_pane_g

0x926b,	// (0x0005dbe7) grid_highlight_pane_cp2_ParamLimits

0x926b,	// (0x0005dbe7) grid_highlight_pane_cp2

0x9285,	// (0x0005dc01) toolbar_button_pane

0x9291,	// (0x0005dc0d) toolbar_button_pane_g1

0x9299,	// (0x0005dc15) toolbar_button_pane_g2

0x92a1,	// (0x0005dc1d) toolbar_button_pane_g3

0x92a9,	// (0x0005dc25) toolbar_button_pane_g4

0x92b1,	// (0x0005dc2d) toolbar_button_pane_g5

0x92b9,	// (0x0005dc35) toolbar_button_pane_g6

0x92c1,	// (0x0005dc3d) toolbar_button_pane_g7

0x92c9,	// (0x0005dc45) toolbar_button_pane_g8

0x92d1,	// (0x0005dc4d) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x00064141) toolbar_button_pane_g

0x767b,	// (0x0005bff7) list_single_2graphic_pane_g1_cp3_ParamLimits

0x767b,	// (0x0005bff7) list_single_2graphic_pane_g1_cp3

0x7687,	// (0x0005c003) list_single_2graphic_pane_g2_cp3_ParamLimits

0x7687,	// (0x0005c003) list_single_2graphic_pane_g2_cp3

0x7698,	// (0x0005c014) list_single_2graphic_pane_g3_cp3

0x76a0,	// (0x0005c01c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x76a0,	// (0x0005c01c) list_single_2graphic_pane_g4_cp3

0x76ac,	// (0x0005c028) list_single_2graphic_pane_t1_cp3_ParamLimits

0x76ac,	// (0x0005c028) list_single_2graphic_pane_t1_cp3

0x76c8,	// (0x0005c044) list_single_midp_graphic_pane_g2_ParamLimits

0x76c8,	// (0x0005c044) list_single_midp_graphic_pane_g2

0x5434,	// (0x00059db0) aid_zoom_text_primary

0x706e,	// (0x0005b9ea) aid_zoom_text_secondary

0x6ea1,	// (0x0005b81d) status_small_pane_g7_ParamLimits

0x6ea1,	// (0x0005b81d) status_small_pane_g7

0x6ec4,	// (0x0005b840) status_small_pane_t1_ParamLimits

0x58ba,	// (0x0005a236) title_pane_g2

0x0003,

0xf54e,	// (0x00063eca) title_pane_g

0x5c08,	// (0x0005a584) aid_size_cell_colour_1_pane_ParamLimits

0x5c08,	// (0x0005a584) aid_size_cell_colour_1_pane

0x5c1c,	// (0x0005a598) aid_size_cell_colour_2_pane_ParamLimits

0x5c1c,	// (0x0005a598) aid_size_cell_colour_2_pane

0x5c30,	// (0x0005a5ac) aid_size_cell_colour_3_pane_ParamLimits

0x5c30,	// (0x0005a5ac) aid_size_cell_colour_3_pane

0x5c44,	// (0x0005a5c0) aid_size_cell_colour_4_pane_ParamLimits

0x5c44,	// (0x0005a5c0) aid_size_cell_colour_4_pane

0x65ca,	// (0x0005af46) title_pane_stacon_g1_ParamLimits

0x65ca,	// (0x0005af46) title_pane_stacon_g1

0x9955,	// (0x0005e2d1) popup_note_wait_window_g3_ParamLimits

0x9955,	// (0x0005e2d1) popup_note_wait_window_g3

0x99cb,	// (0x0005e347) popup_note_wait_window_t5_ParamLimits

0x99cb,	// (0x0005e347) popup_note_wait_window_t5

0xed5e,	// (0x000636da) main_feb_china_hwr_fs_writing_pane

0x7112,	// (0x0005ba8e) popup_feb_china_hwr_fs_window_ParamLimits

0x7112,	// (0x0005ba8e) popup_feb_china_hwr_fs_window

0x76ea,	// (0x0005c066) aid_size_cell_hwr_fs_ParamLimits

0x76ea,	// (0x0005c066) aid_size_cell_hwr_fs

0x931d,	// (0x0005dc99) bg_popup_sub_pane_cp3_ParamLimits

0x931d,	// (0x0005dc99) bg_popup_sub_pane_cp3

0x76ff,	// (0x0005c07b) grid_hwr_fs_pane_ParamLimits

0x76ff,	// (0x0005c07b) grid_hwr_fs_pane

0x7717,	// (0x0005c093) linegrid_hwr_fs_pane_ParamLimits

0x7717,	// (0x0005c093) linegrid_hwr_fs_pane

0x7727,	// (0x0005c0a3) cell_hwr_fs_pane_ParamLimits

0x7727,	// (0x0005c0a3) cell_hwr_fs_pane

0x9329,	// (0x0005dca5) linegrid_hwr_fs_pane_g1_ParamLimits

0x9329,	// (0x0005dca5) linegrid_hwr_fs_pane_g1

0x9335,	// (0x0005dcb1) linegrid_hwr_fs_pane_g2_ParamLimits

0x9335,	// (0x0005dcb1) linegrid_hwr_fs_pane_g2

0x9347,	// (0x0005dcc3) linegrid_hwr_fs_pane_g3_ParamLimits

0x9347,	// (0x0005dcc3) linegrid_hwr_fs_pane_g3

0x7749,	// (0x0005c0c5) linegrid_hwr_fs_pane_g4_ParamLimits

0x7749,	// (0x0005c0c5) linegrid_hwr_fs_pane_g4

0x7763,	// (0x0005c0df) linegrid_hwr_fs_pane_g5_ParamLimits

0x7763,	// (0x0005c0df) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0006416c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0006416c) linegrid_hwr_fs_pane_g

0x9353,	// (0x0005dccf) cell_hwr_fs_pane_g1_ParamLimits

0x9353,	// (0x0005dccf) cell_hwr_fs_pane_g1

0x9109,	// (0x0005da85) cell_hwr_fs_pane_g2_ParamLimits

0x9109,	// (0x0005da85) cell_hwr_fs_pane_g2

0x9369,	// (0x0005dce5) cell_hwr_fs_pane_g3_ParamLimits

0x9369,	// (0x0005dce5) cell_hwr_fs_pane_g3

0x9376,	// (0x0005dcf2) cell_hwr_fs_pane_g4_ParamLimits

0x9376,	// (0x0005dcf2) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x00064177) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00064177) cell_hwr_fs_pane_g

0x7779,	// (0x0005c0f5) cell_hwr_fs_pane_t1

0xed5e,	// (0x000636da) grid_highlight_pane_cp6

0xed5e,	// (0x000636da) main_idle_act2_pane

0xf272,	// (0x00063bee) aid_inside_area_popup_secondary

0x9fea,	// (0x0005e966) aid_inside_area_window_primary_ParamLimits

0x9fea,	// (0x0005e966) aid_inside_area_window_primary

0xabd1,	// (0x0005f54d) ai2_news_ticker_pane

0xabd9,	// (0x0005f555) aid_size_cell_ai1_link_ParamLimits

0xabd9,	// (0x0005f555) aid_size_cell_ai1_link

0xabf3,	// (0x0005f56f) popup_ai2_data_window_ParamLimits

0xabf3,	// (0x0005f56f) popup_ai2_data_window

0xac09,	// (0x0005f585) popup_ai2_link_window_ParamLimits

0xac09,	// (0x0005f585) popup_ai2_link_window

0x931d,	// (0x0005dc99) bg_popup_sub_pane_cp4_ParamLimits

0x931d,	// (0x0005dc99) bg_popup_sub_pane_cp4

0xac1d,	// (0x0005f599) grid_ai2_link_pane_ParamLimits

0xac1d,	// (0x0005f599) grid_ai2_link_pane

0xac34,	// (0x0005f5b0) popup_ai2_link_window_g1_ParamLimits

0xac34,	// (0x0005f5b0) popup_ai2_link_window_g1

0xac40,	// (0x0005f5bc) popup_ai2_link_window_g2_ParamLimits

0xac40,	// (0x0005f5bc) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0006434a) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0006434a) popup_ai2_link_window_g

0xac4f,	// (0x0005f5cb) ai2_mp_button_pane

0xac57,	// (0x0005f5d3) ai2_mp_volume_pane

0x9530,	// (0x0005deac) bg_popup_sub_pane_cp5_ParamLimits

0x9530,	// (0x0005deac) bg_popup_sub_pane_cp5

0xac5f,	// (0x0005f5db) heading_ai2_gene_pane_ParamLimits

0xac5f,	// (0x0005f5db) heading_ai2_gene_pane

0xac6b,	// (0x0005f5e7) list_ai2_gene_pane_ParamLimits

0xac6b,	// (0x0005f5e7) list_ai2_gene_pane

0xacb3,	// (0x0005f62f) cell_ai2_link_pane_ParamLimits

0xacb3,	// (0x0005f62f) cell_ai2_link_pane

0xacc9,	// (0x0005f645) cell_ai2_link_pane_g1

0xed5e,	// (0x000636da) grid_highlight_pane_cp7

0x7b30,	// (0x0005c4ac) ai2_mp_volume_pane_g1

0xad99,	// (0x0005f715) ai2_mp_volume_pane_g2

0xad0e,	// (0x0005f68a) list_ai2_gene_pane_t1

0xada1,	// (0x0005f71d) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00064363) ai2_mp_volume_pane_g

0x7b38,	// (0x0005c4b4) volume_small_pane_cp3

0xada9,	// (0x0005f725) aid_size_cell_ai2_button

0xadb1,	// (0x0005f72d) grid_ai2_button_pane

0xadba,	// (0x0005f736) cell_ai2_button_pane_ParamLimits

0xadba,	// (0x0005f736) cell_ai2_button_pane

0xed54,	// (0x000636d0) cell_ai2_button_pane_g1

0xed5e,	// (0x000636da) grid_highlight_pane_cp8

0xad59,	// (0x0005f6d5) ai2_gene_pane_t1_ParamLimits

0xad59,	// (0x0005f6d5) ai2_gene_pane_t1

0x705c,	// (0x0005b9d8) aid_height_parent_landscape

0xa653,	// (0x0005efcf) aid_height_set_list

0xa664,	// (0x0005efe0) aid_size_parent

0xa9f4,	// (0x0005f370) aid_size_cell_graphic_pane_ParamLimits

0xac7b,	// (0x0005f5f7) popup_ai2_data_window_g1_ParamLimits

0xac7b,	// (0x0005f5f7) popup_ai2_data_window_g1

0xac87,	// (0x0005f603) ai2_news_ticker_pane_g1

0xac8f,	// (0x0005f60b) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0006434f) ai2_news_ticker_pane_g

0xac97,	// (0x0005f613) ai2_news_ticker_pane_t1

0xaca5,	// (0x0005f621) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00064354) ai2_news_ticker_pane_t

0xacd2,	// (0x0005f64e) heading_ai2_gene_pane_g1

0xacda,	// (0x0005f656) heading_ai2_gene_pane_t1_ParamLimits

0xacda,	// (0x0005f656) heading_ai2_gene_pane_t1

0xacef,	// (0x0005f66b) list_highlight_pane_cp6

0xacf7,	// (0x0005f673) ai2_gene_pane_ParamLimits

0xacf7,	// (0x0005f673) ai2_gene_pane

0xad1c,	// (0x0005f698) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00064359) list_ai2_gene_pane_t

0xad2a,	// (0x0005f6a6) list_highlight_pane_cp8_ParamLimits

0xad2a,	// (0x0005f6a6) list_highlight_pane_cp8

0xad3b,	// (0x0005f6b7) ai2_gene_pane_g1_ParamLimits

0xad3b,	// (0x0005f6b7) ai2_gene_pane_g1

0xad4d,	// (0x0005f6c9) ai2_gene_pane_g2_ParamLimits

0xad4d,	// (0x0005f6c9) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0006435e) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0006435e) ai2_gene_pane_g

0xf10b,	// (0x00063a87) scroll_pane_cp12

0x7019,	// (0x0005b995) control_pane_t3_ParamLimits

0x7019,	// (0x0005b995) control_pane_t3

0x6eb5,	// (0x0005b831) status_small_pane_g8_ParamLimits

0x6eb5,	// (0x0005b831) status_small_pane_g8

0x71f4,	// (0x0005bb70) popup_find_window_ParamLimits

0x740d,	// (0x0005bd89) popup_note_image_window_ParamLimits

0x364e,	// (0x00057fca) list_double2_graphic_pane_vc_g1_ParamLimits

0x364e,	// (0x00057fca) list_double2_graphic_pane_vc_g1

0x4825,	// (0x000591a1) list_double2_graphic_pane_vc_g2_ParamLimits

0x4825,	// (0x000591a1) list_double2_graphic_pane_vc_g2

0x4831,	// (0x000591ad) list_double2_graphic_pane_vc_g3_ParamLimits

0x4831,	// (0x000591ad) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x00064135) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x00064135) list_double2_graphic_pane_vc_g

0x365a,	// (0x00057fd6) list_double2_graphic_pane_vc_t1_ParamLimits

0x365a,	// (0x00057fd6) list_double2_graphic_pane_vc_t1

0x4825,	// (0x000591a1) list_single_heading_pane_vc_g1_ParamLimits

0x4825,	// (0x000591a1) list_single_heading_pane_vc_g1

0x4831,	// (0x000591ad) list_single_heading_pane_vc_g2_ParamLimits

0x4831,	// (0x000591ad) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00064156) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00064156) list_single_heading_pane_vc_g

0x3ad6,	// (0x00058452) list_single_heading_pane_vc_t1_ParamLimits

0x3ad6,	// (0x00058452) list_single_heading_pane_vc_t1

0x3aec,	// (0x00058468) list_single_heading_pane_vc_t2_ParamLimits

0x3aec,	// (0x00058468) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0006415b) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0006415b) list_single_heading_pane_vc_t

0x92d9,	// (0x0005dc55) list_setting_number_pane_vc_g1_ParamLimits

0x92d9,	// (0x0005dc55) list_setting_number_pane_vc_g1

0x92e5,	// (0x0005dc61) list_setting_number_pane_vc_g2_ParamLimits

0x92e5,	// (0x0005dc61) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00064160) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00064160) list_setting_number_pane_vc_g

0x3afe,	// (0x0005847a) list_setting_number_pane_vc_t1_ParamLimits

0x3afe,	// (0x0005847a) list_setting_number_pane_vc_t1

0x3b12,	// (0x0005848e) list_setting_number_pane_vc_t2_ParamLimits

0x3b12,	// (0x0005848e) list_setting_number_pane_vc_t2

0x3b2e,	// (0x000584aa) list_setting_number_pane_vc_t3_ParamLimits

0x3b2e,	// (0x000584aa) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00064165) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00064165) list_setting_number_pane_vc_t

0x3b58,	// (0x000584d4) set_value_pane_vc_ParamLimits

0x3b58,	// (0x000584d4) set_value_pane_vc

0xa818,	// (0x0005f194) list_double2_graphic_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_double2_graphic_pane_vc

0xa818,	// (0x0005f194) list_double2_large_graphic_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_double2_large_graphic_pane_vc

0xa818,	// (0x0005f194) list_double2_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_double2_pane_vc

0xa818,	// (0x0005f194) list_double_graphic_heading_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_double_graphic_heading_pane_vc

0xa818,	// (0x0005f194) list_double_graphic_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_double_graphic_pane_vc

0xa818,	// (0x0005f194) list_double_heading_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_double_heading_pane_vc

0xa82a,	// (0x0005f1a6) list_double_large_graphic_pane_vc_ParamLimits

0xa82a,	// (0x0005f1a6) list_double_large_graphic_pane_vc

0xa818,	// (0x0005f194) list_double_number_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_double_number_pane_vc

0xa818,	// (0x0005f194) list_double_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_double_pane_vc

0xa818,	// (0x0005f194) list_double_time_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_double_time_pane_vc

0xa818,	// (0x0005f194) list_setting_number_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_setting_number_pane_vc

0xa818,	// (0x0005f194) list_setting_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_setting_pane_vc

0xa818,	// (0x0005f194) list_single_graphic_heading_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_single_graphic_heading_pane_vc

0xa818,	// (0x0005f194) list_single_heading_pane_vc_ParamLimits

0xa818,	// (0x0005f194) list_single_heading_pane_vc

0xa848,	// (0x0005f1c4) list_single_number_heading_pane_vc_ParamLimits

0xa848,	// (0x0005f1c4) list_single_number_heading_pane_vc

0x3b77,	// (0x000584f3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3b77,	// (0x000584f3) list_double_graphic_heading_pane_vc_g1

0x4825,	// (0x000591a1) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4825,	// (0x000591a1) list_double_graphic_heading_pane_vc_g2

0x4831,	// (0x000591ad) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4831,	// (0x000591ad) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0006436a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0006436a) list_double_graphic_heading_pane_vc_g

0x3b83,	// (0x000584ff) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3b83,	// (0x000584ff) list_double_graphic_heading_pane_vc_t1

0x3b97,	// (0x00058513) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3b97,	// (0x00058513) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00064371) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00064371) list_double_graphic_heading_pane_vc_t

0x92d9,	// (0x0005dc55) list_setting_pane_vc_g1_ParamLimits

0x92d9,	// (0x0005dc55) list_setting_pane_vc_g1

0x92e5,	// (0x0005dc61) list_setting_pane_vc_g2_ParamLimits

0x92e5,	// (0x0005dc61) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00064160) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00064160) list_setting_pane_vc_g

0x3baf,	// (0x0005852b) list_setting_pane_vc_t1_ParamLimits

0x3baf,	// (0x0005852b) list_setting_pane_vc_t1

0x3bcb,	// (0x00058547) list_setting_pane_vc_t2_ParamLimits

0x3bcb,	// (0x00058547) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x000643b4) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x000643b4) list_setting_pane_vc_t

0x3b58,	// (0x000584d4) set_value_pane_cp_vc_ParamLimits

0x3b58,	// (0x000584d4) set_value_pane_cp_vc

0x4825,	// (0x000591a1) list_single_number_heading_pane_vc_g1_ParamLimits

0x4825,	// (0x000591a1) list_single_number_heading_pane_vc_g1

0x4831,	// (0x000591ad) list_single_number_heading_pane_vc_g2_ParamLimits

0x4831,	// (0x000591ad) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00064156) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00064156) list_single_number_heading_pane_vc_g

0x3be5,	// (0x00058561) list_single_number_heading_pane_vc_t1_ParamLimits

0x3be5,	// (0x00058561) list_single_number_heading_pane_vc_t1

0x3bfb,	// (0x00058577) list_single_number_heading_pane_vc_t2_ParamLimits

0x3bfb,	// (0x00058577) list_single_number_heading_pane_vc_t2

0x3c0d,	// (0x00058589) list_single_number_heading_pane_vc_t3_ParamLimits

0x3c0d,	// (0x00058589) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x000643b9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x000643b9) list_single_number_heading_pane_vc_t

0x4471,	// (0x00058ded) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4471,	// (0x00058ded) list_single_graphic_heading_pane_vc_g1

0x4825,	// (0x000591a1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4825,	// (0x000591a1) list_single_graphic_heading_pane_vc_g4

0x4831,	// (0x000591ad) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4831,	// (0x000591ad) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa44,	// (0x000643c0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa44,	// (0x000643c0) list_single_graphic_heading_pane_vc_g

0x3ad6,	// (0x00058452) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3ad6,	// (0x00058452) list_single_graphic_heading_pane_vc_t1

0x447d,	// (0x00058df9) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x447d,	// (0x00058df9) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4b,	// (0x000643c7) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4b,	// (0x000643c7) list_single_graphic_heading_pane_vc_t

0x4825,	// (0x000591a1) list_double2_pane_vc_g1_ParamLimits

0x4825,	// (0x000591a1) list_double2_pane_vc_g1

0x4831,	// (0x000591ad) list_double2_pane_vc_g2_ParamLimits

0x4831,	// (0x000591ad) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x00064156) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x00064156) list_double2_pane_vc_g

0x448f,	// (0x00058e0b) list_double2_pane_vc_t1_ParamLimits

0x448f,	// (0x00058e0b) list_double2_pane_vc_t1

0xae31,	// (0x0005f7ad) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xae31,	// (0x0005f7ad) list_double2_large_graphic_pane_vc_g1

0x4825,	// (0x000591a1) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4825,	// (0x000591a1) list_double2_large_graphic_pane_vc_g2

0x4831,	// (0x000591ad) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4831,	// (0x000591ad) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa50,	// (0x000643cc) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa50,	// (0x000643cc) list_double2_large_graphic_pane_vc_g

0x365a,	// (0x00057fd6) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x365a,	// (0x00057fd6) list_double2_large_graphic_pane_vc_t1

0xae3d,	// (0x0005f7b9) list_double_time_pane_vc_g1_ParamLimits

0xae3d,	// (0x0005f7b9) list_double_time_pane_vc_g1

0xae49,	// (0x0005f7c5) list_double_time_pane_vc_g2_ParamLimits

0xae49,	// (0x0005f7c5) list_double_time_pane_vc_g2

0x0001,

0xfa57,	// (0x000643d3) list_double_time_pane_vc_g_ParamLimits

0xfa57,	// (0x000643d3) list_double_time_pane_vc_g

0x44a7,	// (0x00058e23) list_double_time_pane_vc_t1_ParamLimits

0x44a7,	// (0x00058e23) list_double_time_pane_vc_t1

0x44cb,	// (0x00058e47) list_double_time_pane_vc_t2_ParamLimits

0x44cb,	// (0x00058e47) list_double_time_pane_vc_t2

0x451a,	// (0x00058e96) list_double_time_pane_vc_t3_ParamLimits

0x451a,	// (0x00058e96) list_double_time_pane_vc_t3

0x452c,	// (0x00058ea8) list_double_time_pane_vc_t4_ParamLimits

0x452c,	// (0x00058ea8) list_double_time_pane_vc_t4

0x0003,

0xfa5c,	// (0x000643d8) list_double_time_pane_vc_t_ParamLimits

0xfa5c,	// (0x000643d8) list_double_time_pane_vc_t

0x4825,	// (0x000591a1) list_double_pane_vc_g1_ParamLimits

0x4825,	// (0x000591a1) list_double_pane_vc_g1

0x4831,	// (0x000591ad) list_double_pane_vc_g2_ParamLimits

0x4831,	// (0x000591ad) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x00064156) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x00064156) list_double_pane_vc_g

0x4540,	// (0x00058ebc) list_double_pane_vc_t1_ParamLimits

0x4540,	// (0x00058ebc) list_double_pane_vc_t1

0x4554,	// (0x00058ed0) list_double_pane_vc_t2_ParamLimits

0x4554,	// (0x00058ed0) list_double_pane_vc_t2

0x0001,

0xfa65,	// (0x000643e1) list_double_pane_vc_t_ParamLimits

0xfa65,	// (0x000643e1) list_double_pane_vc_t

0x4825,	// (0x000591a1) list_double_number_pane_vc_g1_ParamLimits

0x4825,	// (0x000591a1) list_double_number_pane_vc_g1

0x4831,	// (0x000591ad) list_double_number_pane_vc_g2_ParamLimits

0x4831,	// (0x000591ad) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x00064156) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x00064156) list_double_number_pane_vc_g

0x456c,	// (0x00058ee8) list_double_number_pane_vc_t1_ParamLimits

0x456c,	// (0x00058ee8) list_double_number_pane_vc_t1

0x4540,	// (0x00058ebc) list_double_number_pane_vc_t2_ParamLimits

0x4540,	// (0x00058ebc) list_double_number_pane_vc_t2

0x457e,	// (0x00058efa) list_double_number_pane_vc_t3_ParamLimits

0x457e,	// (0x00058efa) list_double_number_pane_vc_t3

0x0002,

0xfa6a,	// (0x000643e6) list_double_number_pane_vc_t_ParamLimits

0xfa6a,	// (0x000643e6) list_double_number_pane_vc_t

0xae55,	// (0x0005f7d1) list_double_large_graphic_pane_vc_g1_ParamLimits

0xae55,	// (0x0005f7d1) list_double_large_graphic_pane_vc_g1

0xae77,	// (0x0005f7f3) list_double_large_graphic_pane_vc_g2_ParamLimits

0xae77,	// (0x0005f7f3) list_double_large_graphic_pane_vc_g2

0xae8b,	// (0x0005f807) list_double_large_graphic_pane_vc_g3_ParamLimits

0xae8b,	// (0x0005f807) list_double_large_graphic_pane_vc_g3

0x4596,	// (0x00058f12) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4596,	// (0x00058f12) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa71,	// (0x000643ed) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa71,	// (0x000643ed) list_double_large_graphic_pane_vc_g

0x45a2,	// (0x00058f1e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x45a2,	// (0x00058f1e) list_double_large_graphic_pane_vc_t1

0x45be,	// (0x00058f3a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x45be,	// (0x00058f3a) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x000643f6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x000643f6) list_double_large_graphic_pane_vc_t

0x4825,	// (0x000591a1) list_double_heading_pane_vc_g1_ParamLimits

0x4825,	// (0x000591a1) list_double_heading_pane_vc_g1

0x4831,	// (0x000591ad) list_double_heading_pane_vc_g2_ParamLimits

0x4831,	// (0x000591ad) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00064156) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00064156) list_double_heading_pane_vc_g

0x45e0,	// (0x00058f5c) list_double_heading_pane_vc_t1_ParamLimits

0x45e0,	// (0x00058f5c) list_double_heading_pane_vc_t1

0x45f4,	// (0x00058f70) list_double_heading_pane_vc_t2_ParamLimits

0x45f4,	// (0x00058f70) list_double_heading_pane_vc_t2

0x0001,

0xfa7f,	// (0x000643fb) list_double_heading_pane_vc_t_ParamLimits

0xfa7f,	// (0x000643fb) list_double_heading_pane_vc_t

0x460c,	// (0x00058f88) list_double_graphic_pane_vc_g1_ParamLimits

0x460c,	// (0x00058f88) list_double_graphic_pane_vc_g1

0xae9a,	// (0x0005f816) list_double_graphic_pane_vc_g2_ParamLimits

0xae9a,	// (0x0005f816) list_double_graphic_pane_vc_g2

0x4825,	// (0x000591a1) list_double_graphic_pane_vc_g3_ParamLimits

0x4825,	// (0x000591a1) list_double_graphic_pane_vc_g3

0x0003,

0xfa84,	// (0x00064400) list_double_graphic_pane_vc_g_ParamLimits

0xfa84,	// (0x00064400) list_double_graphic_pane_vc_g

0x461f,	// (0x00058f9b) list_double_graphic_pane_vc_t1_ParamLimits

0x461f,	// (0x00058f9b) list_double_graphic_pane_vc_t1

0x463e,	// (0x00058fba) list_double_graphic_pane_vc_t2_ParamLimits

0x463e,	// (0x00058fba) list_double_graphic_pane_vc_t2

0x0001,

0xfa8d,	// (0x00064409) list_double_graphic_pane_vc_t_ParamLimits

0xfa8d,	// (0x00064409) list_double_graphic_pane_vc_t

0x54da,	// (0x00059e56) aid_size_cell_fastswap

0x54e2,	// (0x00059e5e) aid_size_cell_touch_ParamLimits

0x54e2,	// (0x00059e5e) aid_size_cell_touch

0x5747,	// (0x0005a0c3) popup_fast_swap_wide_window_ParamLimits

0x5747,	// (0x0005a0c3) popup_fast_swap_wide_window

0x584d,	// (0x0005a1c9) touch_pane_ParamLimits

0x584d,	// (0x0005a1c9) touch_pane

0xf158,	// (0x00063ad4) button_value_adjust_pane_cp2

0x368a,	// (0x00058006) button_value_adjust_pane_cp4

0x3692,	// (0x0005800e) form_field_data_pane_cp2

0x6336,	// (0x0005acb2) form_field_data_wide_pane_cp2

0xf453,	// (0x00063dcf) bg_scroll_pane_ParamLimits

0x67c4,	// (0x0005b140) scroll_handle_pane_ParamLimits

0x67d8,	// (0x0005b154) scroll_sc2_down_pane_ParamLimits

0x67d8,	// (0x0005b154) scroll_sc2_down_pane

0xf484,	// (0x00063e00) scroll_sc2_up_pane_ParamLimits

0xf484,	// (0x00063e00) scroll_sc2_up_pane

0xb5d7,	// (0x0005ff53) grid_wheel_folder_pane_g1_ParamLimits

0xb5d7,	// (0x0005ff53) grid_wheel_folder_pane_g1

0x6bb1,	// (0x0005b52d) clock_nsta_pane_cp2_ParamLimits

0x6bb1,	// (0x0005b52d) clock_nsta_pane_cp2

0x6cc4,	// (0x0005b640) listscroll_midp_pane_ParamLimits

0x6cd0,	// (0x0005b64c) midp_canvas_pane

0x8d42,	// (0x0005d6be) nsta_clock_indic_pane

0x8d76,	// (0x0005d6f2) listscroll_form_pane_vc

0x8d7e,	// (0x0005d6fa) listscroll_set_pane_vc_ParamLimits

0x8d7e,	// (0x0005d6fa) listscroll_set_pane_vc

0x8e77,	// (0x0005d7f3) clock_nsta_pane

0x8ef2,	// (0x0005d86e) indicator_nsta_pane

0x91cf,	// (0x0005db4b) bg_popup_sub_pane_cp2_ParamLimits

0x91e3,	// (0x0005db5f) find_pane_cp2_ParamLimits

0x91e3,	// (0x0005db5f) find_pane_cp2

0x91f9,	// (0x0005db75) grid_toobar_pane_ParamLimits

0x92f1,	// (0x0005dc6d) list_form_gen_pane_vc_ParamLimits

0x92f1,	// (0x0005dc6d) list_form_gen_pane_vc

0x9307,	// (0x0005dc83) scroll_pane_cp8_vc_ParamLimits

0x9307,	// (0x0005dc83) scroll_pane_cp8_vc

0x9383,	// (0x0005dcff) data_form_wide_pane_vc_ParamLimits

0x9383,	// (0x0005dcff) data_form_wide_pane_vc

0x938f,	// (0x0005dd0b) form_field_data_wide_pane_vc_g1

0x9397,	// (0x0005dd13) form_field_data_wide_pane_vc_t1_ParamLimits

0x9397,	// (0x0005dd13) form_field_data_wide_pane_vc_t1

0xf16c,	// (0x00063ae8) input_focus_pane_cp6_vc_ParamLimits

0xf16c,	// (0x00063ae8) input_focus_pane_cp6_vc

0x96c4,	// (0x0005e040) list_midp_pane_ParamLimits

0x96d0,	// (0x0005e04c) scroll_pane_cp16_ParamLimits

0x96d0,	// (0x0005e04c) scroll_pane_cp16

0x9732,	// (0x0005e0ae) button_value_adjust_pane_ParamLimits

0x9732,	// (0x0005e0ae) button_value_adjust_pane

0xa676,	// (0x0005eff2) button_value_adjust_pane_cp6_ParamLimits

0xa676,	// (0x0005eff2) button_value_adjust_pane_cp6

0xa79c,	// (0x0005f118) settings_code_pane_cp_ParamLimits

0xa79c,	// (0x0005f118) settings_code_pane_cp

0xed54,	// (0x000636d0) cell_touch_pane_g1

0xed54,	// (0x000636d0) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0006407a) cell_touch_pane_g

0xadcc,	// (0x0005f748) cell_touch_pane_cp_ParamLimits

0xadcc,	// (0x0005f748) cell_touch_pane_cp

0xaddc,	// (0x0005f758) cell_touch_pane_ParamLimits

0xaddc,	// (0x0005f758) cell_touch_pane

0xed54,	// (0x000636d0) scroll_sc2_down_pane_g1

0xed54,	// (0x000636d0) scroll_sc2_up_pane_g1

0xed5e,	// (0x000636da) bg_set_opt_pane_cp4_vc

0xadee,	// (0x0005f76a) list_set_graphic_pane_vc_g1_ParamLimits

0xadee,	// (0x0005f76a) list_set_graphic_pane_vc_g1

0xadfa,	// (0x0005f776) list_set_graphic_pane_vc_g2_ParamLimits

0xadfa,	// (0x0005f776) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00064376) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00064376) list_set_graphic_pane_vc_g

0xae06,	// (0x0005f782) text_primary_small_cp13_vc_ParamLimits

0xae06,	// (0x0005f782) text_primary_small_cp13_vc

0xae1e,	// (0x0005f79a) list_set_graphic_pane_vc_ParamLimits

0xae1e,	// (0x0005f79a) list_set_graphic_pane_vc

0xed5e,	// (0x000636da) input_focus_pane_cp2_vc

0xed54,	// (0x000636d0) setting_code_pane_vc_g1

0xedc3,	// (0x0006373f) setting_code_pane_vc_t1

0xaf98,	// (0x0005f914) set_text_pane_vc_t1_ParamLimits

0xaf98,	// (0x0005f914) set_text_pane_vc_t1

0xed5e,	// (0x000636da) input_focus_pane_cp1_vc

0xafb4,	// (0x0005f930) list_set_text_pane_vc

0xed54,	// (0x000636d0) setting_text_pane_vc_g1

0xed5e,	// (0x000636da) bg_set_opt_pane_cp2_vc

0xedba,	// (0x00063736) setting_slider_graphic_pane_vc_g1

0xafbe,	// (0x0005f93a) setting_slider_graphic_pane_vc_t1

0xafce,	// (0x0005f94a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0006437b) setting_slider_graphic_pane_vc_t

0xafde,	// (0x0005f95a) slider_set_pane_cp_vc

0xafe6,	// (0x0005f962) slider_set_pane_vc_g1

0xafef,	// (0x0005f96b) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00064380) slider_set_pane_vc_g

0xf1c4,	// (0x00063b40) set_opt_bg_pane_g1_copy1

0xf1cc,	// (0x00063b48) set_opt_bg_pane_g2_copy1

0xb01b,	// (0x0005f997) set_opt_bg_pane_g3_copy1

0xf1dc,	// (0x00063b58) set_opt_bg_pane_g4_copy1

0xf1e4,	// (0x00063b60) set_opt_bg_pane_g5_copy1

0xf1ec,	// (0x00063b68) set_opt_bg_pane_g6_copy1

0xb023,	// (0x0005f99f) set_opt_bg_pane_g7_copy1

0xb02b,	// (0x0005f9a7) set_opt_bg_pane_g8_copy1

0xb033,	// (0x0005f9af) set_opt_bg_pane_g9_copy1

0xed5e,	// (0x000636da) bg_set_opt_pane_cp_vc

0xb03b,	// (0x0005f9b7) setting_slider_pane_vc_t1

0xb04a,	// (0x0005f9c6) setting_slider_pane_vc_t2

0xb05a,	// (0x0005f9d6) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0006438f) setting_slider_pane_vc_t

0xb06a,	// (0x0005f9e6) slider_set_pane_vc

0x77b5,	// (0x0005c131) volume_set_pane_vc_g1

0x7b41,	// (0x0005c4bd) volume_set_pane_vc_g2

0x7b4a,	// (0x0005c4c6) volume_set_pane_vc_g3

0x7b53,	// (0x0005c4cf) volume_set_pane_vc_g4

0x7b5c,	// (0x0005c4d8) volume_set_pane_vc_g5

0x7b65,	// (0x0005c4e1) volume_set_pane_vc_g6

0x7b6e,	// (0x0005c4ea) volume_set_pane_vc_g7

0x7b77,	// (0x0005c4f3) volume_set_pane_vc_g8

0x7b80,	// (0x0005c4fc) volume_set_pane_vc_g9

0x7b89,	// (0x0005c505) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x00064396) volume_set_pane_vc_g

0xb072,	// (0x0005f9ee) volume_set_pane_vc

0xb07a,	// (0x0005f9f6) button_value_adjust_pane_cp1_vc

0xb084,	// (0x0005fa00) list_highlight_pane_cp2_vc

0xb08d,	// (0x0005fa09) list_set_pane_vc_ParamLimits

0xb08d,	// (0x0005fa09) list_set_pane_vc

0xb0eb,	// (0x0005fa67) main_pane_set_vc_t1_ParamLimits

0xb0eb,	// (0x0005fa67) main_pane_set_vc_t1

0xb100,	// (0x0005fa7c) main_pane_set_vc_t2_ParamLimits

0xb100,	// (0x0005fa7c) main_pane_set_vc_t2

0xb112,	// (0x0005fa8e) main_pane_set_vc_t3_ParamLimits

0xb112,	// (0x0005fa8e) main_pane_set_vc_t3

0xb124,	// (0x0005faa0) main_pane_set_vc_t4_ParamLimits

0xb124,	// (0x0005faa0) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x000643ab) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x000643ab) main_pane_set_vc_t

0xb136,	// (0x0005fab2) setting_code_pane_vc_ParamLimits

0xb136,	// (0x0005fab2) setting_code_pane_vc

0xb145,	// (0x0005fac1) setting_slider_graphic_pane_vc

0xb145,	// (0x0005fac1) setting_slider_pane_vc

0xb145,	// (0x0005fac1) setting_text_pane_vc

0xb145,	// (0x0005fac1) setting_volume_pane_vc

0xb14d,	// (0x0005fac9) scroll_pane_cp121_vc

0xf146,	// (0x00063ac2) set_content_pane_vc

0xb155,	// (0x0005fad1) button_value_adjust_pane_g1

0xb15e,	// (0x0005fada) button_value_adjust_pane_g2

0x0001,

0xfa92,	// (0x0006440e) button_value_adjust_pane_g

0xb167,	// (0x0005fae3) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb167,	// (0x0005fae3) form_field_slider_wide_pane_vc_t1

0xb17b,	// (0x0005faf7) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb17b,	// (0x0005faf7) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa97,	// (0x00064413) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x00064413) form_field_slider_wide_pane_vc_t

0xeed6,	// (0x00063852) input_focus_pane_cp10_vc_ParamLimits

0xeed6,	// (0x00063852) input_focus_pane_cp10_vc

0xb1a9,	// (0x0005fb25) slider_cont_pane_cp1_vc_ParamLimits

0xb1a9,	// (0x0005fb25) slider_cont_pane_cp1_vc

0xb1bb,	// (0x0005fb37) slider_form_pane_g1_cp2

0xafef,	// (0x0005f96b) slider_form_pane_g2_cp2

0xb1e8,	// (0x0005fb64) form_field_slider_pane_vc_t3

0xb1f6,	// (0x0005fb72) form_field_slider_pane_vc_t4

0xb204,	// (0x0005fb80) slider_form_pane_vc_ParamLimits

0xb204,	// (0x0005fb80) slider_form_pane_vc

0xb211,	// (0x0005fb8d) form_field_slider_pane_vc_t1_ParamLimits

0xb211,	// (0x0005fb8d) form_field_slider_pane_vc_t1

0xb17b,	// (0x0005faf7) form_field_slider_pane_vc_t2_ParamLimits

0xb17b,	// (0x0005faf7) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x00064425) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x00064425) form_field_slider_pane_vc_t

0xeed6,	// (0x00063852) input_focus_pane_cp9_vc_ParamLimits

0xeed6,	// (0x00063852) input_focus_pane_cp9_vc

0xb22d,	// (0x0005fba9) slider_cont_pane_vc_ParamLimits

0xb22d,	// (0x0005fba9) slider_cont_pane_vc

0xb241,	// (0x0005fbbd) list_form_graphic_pane_cp_vc_ParamLimits

0xb241,	// (0x0005fbbd) list_form_graphic_pane_cp_vc

0x938f,	// (0x0005dd0b) form_field_popup_wide_pane_vc_g1

0xb256,	// (0x0005fbd2) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb256,	// (0x0005fbd2) form_field_popup_wide_pane_vc_t1

0xf16c,	// (0x00063ae8) input_focus_pane_cp8_vc_ParamLimits

0xf16c,	// (0x00063ae8) input_focus_pane_cp8_vc

0xb29b,	// (0x0005fc17) list_form_wide_pane_vc_ParamLimits

0xb29b,	// (0x0005fc17) list_form_wide_pane_vc

0xb2a7,	// (0x0005fc23) list_form_graphic_pane_vc_g1

0xb2af,	// (0x0005fc2b) list_form_graphic_pane_vc_t1_ParamLimits

0xb2af,	// (0x0005fc2b) list_form_graphic_pane_vc_t1

0xedac,	// (0x00063728) list_highlight_pane_cp5_vc_ParamLimits

0xedac,	// (0x00063728) list_highlight_pane_cp5_vc

0xb2cb,	// (0x0005fc47) list_form_graphic_pane_vc_ParamLimits

0xb2cb,	// (0x0005fc47) list_form_graphic_pane_vc

0x938f,	// (0x0005dd0b) form_field_popup_pane_vc_g1

0xb2e1,	// (0x0005fc5d) form_field_popup_pane_vc_t1_ParamLimits

0xb2e1,	// (0x0005fc5d) form_field_popup_pane_vc_t1

0xf16c,	// (0x00063ae8) input_focus_pane_cp7_vc_ParamLimits

0xf16c,	// (0x00063ae8) input_focus_pane_cp7_vc

0xb2f8,	// (0x0005fc74) list_form_pane_vc_ParamLimits

0xb2f8,	// (0x0005fc74) list_form_pane_vc

0xb304,	// (0x0005fc80) data_form_pane_vc_t1_ParamLimits

0xb304,	// (0x0005fc80) data_form_pane_vc_t1

0xf1c4,	// (0x00063b40) input_focus_pane_vc_g1

0xf1cc,	// (0x00063b48) input_focus_pane_vc_g2

0xf1d4,	// (0x00063b50) input_focus_pane_vc_g3

0xf1dc,	// (0x00063b58) input_focus_pane_vc_g4

0xf1e4,	// (0x00063b60) input_focus_pane_vc_g5

0xf1ec,	// (0x00063b68) input_focus_pane_vc_g6

0xf1f4,	// (0x00063b70) input_focus_pane_vc_g7

0xf1fc,	// (0x00063b78) input_focus_pane_vc_g8

0xf204,	// (0x00063b80) input_focus_pane_vc_g9

0xed54,	// (0x000636d0) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00064003) input_focus_pane_vc_g

0x9383,	// (0x0005dcff) data_form_pane_vc_ParamLimits

0x9383,	// (0x0005dcff) data_form_pane_vc

0x938f,	// (0x0005dd0b) form_field_data_pane_vc_g1

0xb31f,	// (0x0005fc9b) form_field_data_pane_vc_t1_ParamLimits

0xb31f,	// (0x0005fc9b) form_field_data_pane_vc_t1

0xf16c,	// (0x00063ae8) input_focus_pane_vc_ParamLimits

0xf16c,	// (0x00063ae8) input_focus_pane_vc

0xb339,	// (0x0005fcb5) button_value_adjust_pane_cp3_vc

0xb341,	// (0x0005fcbd) button_value_adjust_pane_cp5_vc

0xb349,	// (0x0005fcc5) form_field_data_pane_vc_ParamLimits

0xb349,	// (0x0005fcc5) form_field_data_pane_vc

0xb360,	// (0x0005fcdc) form_field_data_pane_vc_cp2

0xb368,	// (0x0005fce4) form_field_data_wide_pane_vc_ParamLimits

0xb368,	// (0x0005fce4) form_field_data_wide_pane_vc

0xb37e,	// (0x0005fcfa) form_field_data_wide_pane_vc_cp2

0xb386,	// (0x0005fd02) form_field_popup_pane_vc_ParamLimits

0xb386,	// (0x0005fd02) form_field_popup_pane_vc

0xb39d,	// (0x0005fd19) form_field_popup_wide_pane_vc_ParamLimits

0xb39d,	// (0x0005fd19) form_field_popup_wide_pane_vc

0xb3b3,	// (0x0005fd2f) form_field_slider_pane_vc_ParamLimits

0xb3b3,	// (0x0005fd2f) form_field_slider_pane_vc

0xb3c6,	// (0x0005fd42) form_field_slider_wide_pane_vc_ParamLimits

0xb3c6,	// (0x0005fd42) form_field_slider_wide_pane_vc

0xb3d9,	// (0x0005fd55) grid_touch_1_pane_ParamLimits

0xb3d9,	// (0x0005fd55) grid_touch_1_pane

0xb3e5,	// (0x0005fd61) grid_touch_2_pane_ParamLimits

0xb3e5,	// (0x0005fd61) grid_touch_2_pane

0x6f48,	// (0x0005b8c4) touch_pane_g1_ParamLimits

0x6f48,	// (0x0005b8c4) touch_pane_g1

0xb3fd,	// (0x0005fd79) cell_app_pane_cp_wide_ParamLimits

0xb3fd,	// (0x0005fd79) cell_app_pane_cp_wide

0xb40e,	// (0x0005fd8a) grid_popup_fast_wide_pane_ParamLimits

0xb40e,	// (0x0005fd8a) grid_popup_fast_wide_pane

0xb422,	// (0x0005fd9e) scroll_pane_cp19_ParamLimits

0xb422,	// (0x0005fd9e) scroll_pane_cp19

0xed5e,	// (0x000636da) bg_popup_window_pane_cp20

0xb436,	// (0x0005fdb2) listscroll_popup_fast_wide_pane

0xedac,	// (0x00063728) grid_indicator_nsta_pane

0xb43e,	// (0x0005fdba) clock_nsta_pane_g1

0xb447,	// (0x0005fdc3) clock_nsta_pane_t1

0xb463,	// (0x0005fddf) cell_indicator_nsta_pane_ParamLimits

0xb463,	// (0x0005fddf) cell_indicator_nsta_pane

0xb494,	// (0x0005fe10) cell_indicator_nsta_pane_g1

0xb4a2,	// (0x0005fe1e) cell_indicator_nsta_pane_g2

0x0001,

0xfaba,	// (0x00064436) cell_indicator_nsta_pane_g

0xb4af,	// (0x0005fe2b) clock_nsta_pane_cp

0xb4b8,	// (0x0005fe34) indicator_nsta_pane_cp

0xb4c0,	// (0x0005fe3c) nsta_clock_indic_pane_g1

0xede8,	// (0x00063764) grid_indicator_pane

0x6876,	// (0x0005b1f2) scroll_pane_cp29

0x6b00,	// (0x0005b47c) indicator_nsta_pane_cp2_ParamLimits

0x6b00,	// (0x0005b47c) indicator_nsta_pane_cp2

0xedac,	// (0x00063728) main_apps_wheel_pane

0x95a7,	// (0x0005df23) form_midp_field_text_pane_ParamLimits

0x96f0,	// (0x0005e06c) scroll_bar_cp050_ParamLimits

0xb510,	// (0x0005fe8c) cell_indicator_pane_ParamLimits

0xb510,	// (0x0005fe8c) cell_indicator_pane

0xb529,	// (0x0005fea5) cell_indicator_pane_g1

0xb533,	// (0x0005feaf) grid_wheel_folder_pane_ParamLimits

0xb533,	// (0x0005feaf) grid_wheel_folder_pane

0xb549,	// (0x0005fec5) list_wheel_apps_pane_ParamLimits

0xb549,	// (0x0005fec5) list_wheel_apps_pane

0xb55a,	// (0x0005fed6) main_apps_wheel_pane_g1_ParamLimits

0xb55a,	// (0x0005fed6) main_apps_wheel_pane_g1

0xb56e,	// (0x0005feea) main_apps_wheel_pane_g2_ParamLimits

0xb56e,	// (0x0005feea) main_apps_wheel_pane_g2

0x0001,

0xfad6,	// (0x00064452) main_apps_wheel_pane_g_ParamLimits

0xfad6,	// (0x00064452) main_apps_wheel_pane_g

0xb586,	// (0x0005ff02) main_apps_wheel_pane_t1_ParamLimits

0xb586,	// (0x0005ff02) main_apps_wheel_pane_t1

0xb5a9,	// (0x0005ff25) list_wheel_apps_pane_g1

0xb5b1,	// (0x0005ff2d) list_wheel_apps_pane_g2

0xb5b9,	// (0x0005ff35) list_wheel_apps_pane_g3

0xb5c3,	// (0x0005ff3f) list_wheel_apps_pane_g4

0xb5cd,	// (0x0005ff49) list_wheel_apps_pane_g5

0x0004,

0xfadb,	// (0x00064457) list_wheel_apps_pane_g

0x37d4,	// (0x00058150) navi_icon_text_pane

0x8da6,	// (0x0005d722) aid_fill_nsta

0xb5f0,	// (0x0005ff6c) navi_icon_text_pane_g1

0xb5fc,	// (0x0005ff78) navi_icon_text_pane_t1

0x14f4,	// (0x00055e70) list_set_graphic_pane_t1_ParamLimits

0x14f4,	// (0x00055e70) list_set_graphic_pane_t1

0x9e33,	// (0x0005e7af) popup_midp_note_alarm_window_t6_ParamLimits

0x9e33,	// (0x0005e7af) popup_midp_note_alarm_window_t6

0x9e45,	// (0x0005e7c1) popup_midp_note_alarm_window_t7_ParamLimits

0x9e45,	// (0x0005e7c1) popup_midp_note_alarm_window_t7

0x9e57,	// (0x0005e7d3) popup_midp_note_alarm_window_t8_ParamLimits

0x9e57,	// (0x0005e7d3) popup_midp_note_alarm_window_t8

0x9e69,	// (0x0005e7e5) popup_midp_note_alarm_window_t9_ParamLimits

0x9e69,	// (0x0005e7e5) popup_midp_note_alarm_window_t9

0x9e7b,	// (0x0005e7f7) popup_midp_note_alarm_window_t10_ParamLimits

0x9e7b,	// (0x0005e7f7) popup_midp_note_alarm_window_t10

0x9e8d,	// (0x0005e809) popup_midp_note_alarm_window_t11_ParamLimits

0x9e8d,	// (0x0005e809) popup_midp_note_alarm_window_t11

0x9e9f,	// (0x0005e81b) scroll_pane_cp17_ParamLimits

0x9e9f,	// (0x0005e81b) scroll_pane_cp17

0x77b5,	// (0x0005c131) volume_small_pane_cp_g1

0x7b92,	// (0x0005c50e) volume_small_pane_cp_g2

0x7b9b,	// (0x0005c517) volume_small_pane_cp_g3

0x7ba4,	// (0x0005c520) volume_small_pane_cp_g4

0x7bad,	// (0x0005c529) volume_small_pane_cp_g5

0x7b5c,	// (0x0005c4d8) volume_small_pane_cp_g6

0x7bb6,	// (0x0005c532) volume_small_pane_cp_g7

0x7bbf,	// (0x0005c53b) volume_small_pane_cp_g8

0x7bc8,	// (0x0005c544) volume_small_pane_cp_g9

0x7bd1,	// (0x0005c54d) volume_small_pane_cp_g10

0x393d,	// (0x000582b9) midp_ticker_pane_g1_ParamLimits

0x3949,	// (0x000582c5) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x000640cf) midp_ticker_pane_g_ParamLimits

0x3955,	// (0x000582d1) midp_ticker_pane_t1_ParamLimits

0x8dbc,	// (0x0005d738) aid_fill_nsta_2

0x96dc,	// (0x0005e058) list_form2_midp_pane

0xa7e7,	// (0x0005f163) midp_editing_number_pane_ParamLimits

0xa7f6,	// (0x0005f172) midp_ticker_pane_ParamLimits

0xb60e,	// (0x0005ff8a) form2_midp_field_pane

0xb632,	// (0x0005ffae) scroll_pane_cp51

0xb652,	// (0x0005ffce) form2_midp_button_pane_ParamLimits

0xb652,	// (0x0005ffce) form2_midp_button_pane

0xb664,	// (0x0005ffe0) form2_midp_content_pane_ParamLimits

0xb664,	// (0x0005ffe0) form2_midp_content_pane

0xb67e,	// (0x0005fffa) form2_midp_field_choice_group_pane

0xb686,	// (0x00060002) form2_midp_field_pane_g1

0xb68e,	// (0x0006000a) form2_midp_field_pane_g2

0xb696,	// (0x00060012) form2_midp_field_pane_g3

0xb69e,	// (0x0006001a) form2_midp_field_pane_g4

0x0003,

0xfb00,	// (0x0006447c) form2_midp_field_pane_g

0xb6a6,	// (0x00060022) form2_midp_gauge_slider_pane

0xb6ae,	// (0x0006002a) form2_midp_gauge_wait_pane

0xb6b6,	// (0x00060032) form2_midp_image_pane_ParamLimits

0xb6b6,	// (0x00060032) form2_midp_image_pane

0xb6d1,	// (0x0006004d) form2_midp_label_pane_ParamLimits

0xb6d1,	// (0x0006004d) form2_midp_label_pane

0xb6ea,	// (0x00060066) form2_midp_label_pane_cp_ParamLimits

0xb6ea,	// (0x00060066) form2_midp_label_pane_cp

0xb70b,	// (0x00060087) form2_midp_string_pane_ParamLimits

0xb70b,	// (0x00060087) form2_midp_string_pane

0x7bda,	// (0x0005c556) form2_midp_text_pane_ParamLimits

0x7bda,	// (0x0005c556) form2_midp_text_pane

0xb71d,	// (0x00060099) form2_midp_time_pane

0xb72d,	// (0x000600a9) input_focus_pane_cp51_ParamLimits

0xb72d,	// (0x000600a9) input_focus_pane_cp51

0xb745,	// (0x000600c1) form2_midp_label_pane_t1_ParamLimits

0xb745,	// (0x000600c1) form2_midp_label_pane_t1

0x7bf7,	// (0x0005c573) form2_mdip_text_pane_t1_ParamLimits

0x7bf7,	// (0x0005c573) form2_mdip_text_pane_t1

0x4668,	// (0x00058fe4) form2_midp_time_pane_t1

0xb78e,	// (0x0006010a) form2_midp_gauge_slider_pane_t1

0xb7a0,	// (0x0006011c) form2_midp_gauge_slider_pane_t2

0xb7b2,	// (0x0006012e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb09,	// (0x00064485) form2_midp_gauge_slider_pane_t

0xb7c4,	// (0x00060140) form2_midp_slider_pane

0xb7d0,	// (0x0006014c) form2_midp_gauge_wait_pane_t1

0xb7de,	// (0x0006015a) form2_midp_wait_pane_ParamLimits

0xb7de,	// (0x0006015a) form2_midp_wait_pane

0xb809,	// (0x00060185) list_single_2graphic_pane_cp4_ParamLimits

0xb809,	// (0x00060185) list_single_2graphic_pane_cp4

0x93f8,	// (0x0005dd74) list_single_midp_graphic_pane_cp_ParamLimits

0x93f8,	// (0x0005dd74) list_single_midp_graphic_pane_cp

0xed5e,	// (0x000636da) list_highlight_pane_cp20

0xb831,	// (0x000601ad) list_single_2graphic_pane_g1_cp4

0xacd2,	// (0x0005f64e) list_single_2graphic_pane_g2_cp4

0xb839,	// (0x000601b5) list_single_2graphic_pane_t1_cp4

0xedac,	// (0x00063728) list_highlight_pane_cp21

0xb848,	// (0x000601c4) list_single_midp_graphic_pane_g4_cp

0xb857,	// (0x000601d3) list_single_midp_graphic_pane_t1_cp

0xb86c,	// (0x000601e8) form2_mdip_string_pane_t1_ParamLimits

0xb86c,	// (0x000601e8) form2_mdip_string_pane_t1

0xed5e,	// (0x000636da) bg_wml_button_pane_cp2

0xed54,	// (0x000636d0) form2_midp_image_pane_g1

0x4849,	// (0x000591c5) list_double_large_graphic_pane_g5_ParamLimits

0x4849,	// (0x000591c5) list_double_large_graphic_pane_g5

0x6cc4,	// (0x0005b640) midp_form_pane_ParamLimits

0xedac,	// (0x00063728) main_apps_wheel_pane_ParamLimits

0x7433,	// (0x0005bdaf) popup_preview_window_ParamLimits

0x7433,	// (0x0005bdaf) popup_preview_window

0x75ee,	// (0x0005bf6a) popup_touch_info_window_ParamLimits

0x75ee,	// (0x0005bf6a) popup_touch_info_window

0x760c,	// (0x0005bf88) popup_touch_menu_window_ParamLimits

0x760c,	// (0x0005bf88) popup_touch_menu_window

0xed4a,	// (0x000636c6) bg_popup_sub_pane_cp6

0xb973,	// (0x000602ef) list_touch_menu_pane

0xb97b,	// (0x000602f7) list_single_touch_menu_pane_ParamLimits

0xb97b,	// (0x000602f7) list_single_touch_menu_pane

0xb991,	// (0x0006030d) list_single_touch_menu_pane_t1

0xedac,	// (0x00063728) bg_popup_sub_pane_cp7_ParamLimits

0xedac,	// (0x00063728) bg_popup_sub_pane_cp7

0xb99f,	// (0x0006031b) heading_sub_pane

0xb9a7,	// (0x00060323) list_touch_info_pane_ParamLimits

0xb9a7,	// (0x00060323) list_touch_info_pane

0xb9b6,	// (0x00060332) list_single_touch_info_pane_ParamLimits

0xb9b6,	// (0x00060332) list_single_touch_info_pane

0xb9c8,	// (0x00060344) list_single_touch_info_pane_t1

0xb9d6,	// (0x00060352) list_single_touch_info_pane_t2

0x0001,

0xfb17,	// (0x00064493) list_single_touch_info_pane_t

0x3926,	// (0x000582a2) bg_popup_heading_pane_cp

0xb9e4,	// (0x00060360) heading_sub_pane_t1

0x931d,	// (0x0005dc99) bg_popup_preview_window_pane_cp_ParamLimits

0x931d,	// (0x0005dc99) bg_popup_preview_window_pane_cp

0xb99f,	// (0x0006031b) heading_preview_pane

0xb9a7,	// (0x00060323) list_preview_pane_ParamLimits

0xb9a7,	// (0x00060323) list_preview_pane

0xb9f2,	// (0x0006036e) popup_preview_window_g1

0xb9b6,	// (0x00060332) list_single_preview_pane_ParamLimits

0xb9b6,	// (0x00060332) list_single_preview_pane

0xb9fa,	// (0x00060376) list_single_preview_pane_g1

0xba02,	// (0x0006037e) list_single_preview_pane_t1

0xb9c8,	// (0x00060344) list_single_preview_pane_t2

0x0001,

0xfb1c,	// (0x00064498) list_single_preview_pane_t

0xba10,	// (0x0006038c) bg_popup_heading_pane_cp2_ParamLimits

0xba10,	// (0x0006038c) bg_popup_heading_pane_cp2

0xba26,	// (0x000603a2) heading_preview_pane_g1

0xba2e,	// (0x000603aa) heading_preview_pane_t1_ParamLimits

0xba2e,	// (0x000603aa) heading_preview_pane_t1

0xedff,	// (0x0006377b) soft_indicator_pane_t1_ParamLimits

0xf0e8,	// (0x00063a64) scroll_pane_ParamLimits

0xf472,	// (0x00063dee) scroll_sc2_left_pane

0xf47b,	// (0x00063df7) scroll_sc2_right_pane

0xf49a,	// (0x00063e16) scroll_bg_pane_g1_ParamLimits

0xf4af,	// (0x00063e2b) scroll_bg_pane_g2_ParamLimits

0xf4c7,	// (0x00063e43) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0006405a) scroll_bg_pane_g_ParamLimits

0xf49a,	// (0x00063e16) scroll_handle_pane_g1_ParamLimits

0xf4dc,	// (0x00063e58) scroll_handle_pane_g2_ParamLimits

0xf4c7,	// (0x00063e43) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00064061) scroll_handle_pane_g_ParamLimits

0x70b6,	// (0x0005ba32) popup_choice_list_window_ParamLimits

0x70b6,	// (0x0005ba32) popup_choice_list_window

0x91db,	// (0x0005db57) choice_list_pane

0x925d,	// (0x0005dbd9) cell_toolbar_pane_t1

0x9285,	// (0x0005dc01) toolbar_button_pane_ParamLimits

0xa359,	// (0x0005ecd5) ai_gene_pane_1_t2_ParamLimits

0xa359,	// (0x0005ecd5) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00064289) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00064289) ai_gene_pane_1_t

0xba4b,	// (0x000603c7) scroll_sc2_left_pane_g1

0xba4b,	// (0x000603c7) scroll_sc2_right_pane_g1

0x8d6a,	// (0x0005d6e6) bg_popup_sub_pane_cp10

0xba55,	// (0x000603d1) list_choice_list_pane

0xba6e,	// (0x000603ea) list_single_choice_list_pane_ParamLimits

0xba6e,	// (0x000603ea) list_single_choice_list_pane

0xba81,	// (0x000603fd) list_single_choice_list_pane_g1

0x651d,	// (0x0005ae99) list_single_choice_list_pane_t1_ParamLimits

0x651d,	// (0x0005ae99) list_single_choice_list_pane_t1

0xba89,	// (0x00060405) choice_list_pane_g1

0xba91,	// (0x0006040d) choice_list_pane_t1

0xed4a,	// (0x000636c6) input_focus_pane_cp11

0xf3e7,	// (0x00063d63) title_pane_stacon_g2_ParamLimits

0xf3e7,	// (0x00063d63) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00064040) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00064040) title_pane_stacon_g

0x3926,	// (0x000582a2) cursor_press_pane

0x715e,	// (0x0005bada) popup_fep_hwr_window_ParamLimits

0x715e,	// (0x0005bada) popup_fep_hwr_window

0x71d6,	// (0x0005bb52) popup_fep_vkb_window_ParamLimits

0x71d6,	// (0x0005bb52) popup_fep_vkb_window

0xba9f,	// (0x0006041b) cursor_press_pane_g1

0x0002,

0xfb45,	// (0x000644c1) fep_vkb_side_pane_g_ParamLimits

0x7c4e,	// (0x0005c5ca) fep_hwr_candidate_pane_ParamLimits

0x7c4e,	// (0x0005c5ca) fep_hwr_candidate_pane

0x7c78,	// (0x0005c5f4) fep_hwr_side_pane_ParamLimits

0x7c78,	// (0x0005c5f4) fep_hwr_side_pane

0x7c98,	// (0x0005c614) fep_hwr_top_pane_ParamLimits

0x7c98,	// (0x0005c614) fep_hwr_top_pane

0x7cb0,	// (0x0005c62c) fep_hwr_write_pane_ParamLimits

0x7cb0,	// (0x0005c62c) fep_hwr_write_pane

0xfb45,	// (0x000644c1) fep_vkb_side_pane_g

0xbaa7,	// (0x00060423) fep_hwr_top_pane_g1

0xbab9,	// (0x00060435) fep_hwr_top_pane_g2

0x7cea,	// (0x0005c666) fep_hwr_top_pane_g3

0x0002,

0xfb21,	// (0x0006449d) fep_hwr_top_pane_g

0x7cff,	// (0x0005c67b) fep_hwr_top_text_pane

0x1301,	// (0x00055c7d) fep_hwr_top_text_pane_g1

0xbaef,	// (0x0006046b) fep_hwr_top_text_pane_t1

0x7df5,	// (0x0005c771) fep_hwr_candidate_pane_g1

0xbd34,	// (0x000606b0) fep_vkb_keypad_pane_g3_ParamLimits

0xbd34,	// (0x000606b0) fep_vkb_keypad_pane_g3

0xbd5c,	// (0x000606d8) fep_vkb_keypad_pane_g4_ParamLimits

0xbd5c,	// (0x000606d8) fep_vkb_keypad_pane_g4

0xbdcb,	// (0x00060747) fep_vkb_bottom_pane_g2_ParamLimits

0xbdcb,	// (0x00060747) fep_vkb_bottom_pane_g2

0x0001,

0xfb4c,	// (0x000644c8) fep_vkb_bottom_pane_g_ParamLimits

0xfb4c,	// (0x000644c8) fep_vkb_bottom_pane_g

0xba4b,	// (0x000603c7) cell_vkb_side_pane_g2

0x0001,

0xfb56,	// (0x000644d2) cell_vkb_side_pane_g

0xbe56,	// (0x000607d2) cell_vkb_side_pane_t1

0xbe64,	// (0x000607e0) cell_vkb_side_pane_t1_copy1

0xba4b,	// (0x000603c7) bg_fep_vkb_candidate_pane_g2

0xbf90,	// (0x0006090c) cell_vkb_candidate_pane_ParamLimits

0xbafd,	// (0x00060479) aid_size_cell_vkb_ParamLimits

0xbafd,	// (0x00060479) aid_size_cell_vkb

0xbf90,	// (0x0006090c) cell_vkb_candidate_pane

0x7e1c,	// (0x0005c798) bg_popup_fep_shadow_pane_g1

0xbb8b,	// (0x00060507) fep_vkb_bottom_pane_ParamLimits

0xbb8b,	// (0x00060507) fep_vkb_bottom_pane

0xbbc1,	// (0x0006053d) fep_vkb_candidate_pane_ParamLimits

0xbbc1,	// (0x0006053d) fep_vkb_candidate_pane

0xbbdd,	// (0x00060559) fep_vkb_keypad_pane_ParamLimits

0xbbdd,	// (0x00060559) fep_vkb_keypad_pane

0xbc1c,	// (0x00060598) fep_vkb_side_pane_ParamLimits

0xbc1c,	// (0x00060598) fep_vkb_side_pane

0xbc58,	// (0x000605d4) fep_vkb_top_pane_ParamLimits

0xbc58,	// (0x000605d4) fep_vkb_top_pane

0xbc8d,	// (0x00060609) fep_vkb_top_pane_g1_ParamLimits

0xbc8d,	// (0x00060609) fep_vkb_top_pane_g1

0xbc9c,	// (0x00060618) fep_vkb_top_pane_g2_ParamLimits

0xbc9c,	// (0x00060618) fep_vkb_top_pane_g2

0xbcab,	// (0x00060627) fep_vkb_top_pane_g3_ParamLimits

0xbcab,	// (0x00060627) fep_vkb_top_pane_g3

0x0003,

0xfb3c,	// (0x000644b8) fep_vkb_top_pane_g_ParamLimits

0xfb3c,	// (0x000644b8) fep_vkb_top_pane_g

0xbcc9,	// (0x00060645) fep_vkb_top_text_pane_ParamLimits

0xbcc9,	// (0x00060645) fep_vkb_top_text_pane

0xbcda,	// (0x00060656) fep_vkb_side_pane_g1_ParamLimits

0xbcda,	// (0x00060656) fep_vkb_side_pane_g1

0xbd23,	// (0x0006069f) grid_vkb_side_pane_ParamLimits

0xbd23,	// (0x0006069f) grid_vkb_side_pane

0x7e24,	// (0x0005c7a0) bg_popup_fep_shadow_pane_g2

0x7e2d,	// (0x0005c7a9) bg_popup_fep_shadow_pane_g3

0x7e35,	// (0x0005c7b1) bg_popup_fep_shadow_pane_g4

0x7e3e,	// (0x0005c7ba) bg_popup_fep_shadow_pane_g5

0x7e48,	// (0x0005c7c4) bg_popup_fep_shadow_pane_g6

0x7e50,	// (0x0005c7cc) bg_popup_fep_shadow_pane_g7

0xf1dc,	// (0x00063b58) bg_popup_fep_shadow_pane_g8

0xbd7a,	// (0x000606f6) grid_vkb_keypad_number_pane_ParamLimits

0xbd7a,	// (0x000606f6) grid_vkb_keypad_number_pane

0xbd8a,	// (0x00060706) grid_vkb_keypad_pane_ParamLimits

0xbd8a,	// (0x00060706) grid_vkb_keypad_pane

0xbdb0,	// (0x0006072c) fep_vkb_bottom_pane_g1_ParamLimits

0xbdb0,	// (0x0006072c) fep_vkb_bottom_pane_g1

0xbdd9,	// (0x00060755) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbdd9,	// (0x00060755) grid_vkb_keypad_bottom_left_pane

0xbdee,	// (0x0006076a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbdee,	// (0x0006076a) grid_vkb_keypad_bottom_right_pane

0xbe03,	// (0x0006077f) fep_vkb_top_text_pane_g1

0xbe1e,	// (0x0006079a) fep_vkb_top_text_pane_t1

0xbe33,	// (0x000607af) cell_vkb_side_pane_ParamLimits

0xbe33,	// (0x000607af) cell_vkb_side_pane

0xba4b,	// (0x000603c7) cell_vkb_side_pane_g1

0xbe72,	// (0x000607ee) cell_vkb_keypad_pane_ParamLimits

0xbe72,	// (0x000607ee) cell_vkb_keypad_pane

0xbee7,	// (0x00060863) cell_vkb_keypad_pane_g1

0x0008,

0xfb69,	// (0x000644e5) bg_popup_fep_shadow_pane_g

0x7e62,	// (0x0005c7de) cell_hwr_side_pane_g1

0x7e62,	// (0x0005c7de) cell_hwr_side_pane_g2

0xbef1,	// (0x0006086d) cell_vkb_keypad_pane_t1

0xbeff,	// (0x0006087b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbeff,	// (0x0006087b) cell_vkb_keypad_bottom_left_pane

0xbf1c,	// (0x00060898) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbf1c,	// (0x00060898) cell_vkb_keypad_bottom_right_pane

0xba4b,	// (0x000603c7) cell_vkb_keypad_bottom_left_pane_g1

0xba4b,	// (0x000603c7) cell_vkb_keypad_bottom_right_pane_g1

0xbf55,	// (0x000608d1) cell_vkb_keypad_number_pane_ParamLimits

0xbf55,	// (0x000608d1) cell_vkb_keypad_number_pane

0xbf74,	// (0x000608f0) cell_vkb_keypad_number_pane_g1

0xbf7e,	// (0x000608fa) cell_vkb_keypad_number_pane_g2

0xbf87,	// (0x00060903) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5b,	// (0x000644d7) cell_vkb_keypad_number_pane_g

0xbef1,	// (0x0006086d) cell_vkb_keypad_number_pane_t1

0xbfab,	// (0x00060927) fep_vkb_candidate_pane_g1

0x0001,

0xfb7c,	// (0x000644f8) cell_hwr_side_pane_g

0xbfc4,	// (0x00060940) cell_hwr_side_pane_t1

0x7e6c,	// (0x0005c7e8) cell_hwr_side_pane_t1_copy1

0x7e7a,	// (0x0005c7f6) cell_hwr_candidate_pane_g1

0x7ea9,	// (0x0005c825) cell_hwr_candidate_pane_t1

0xba4b,	// (0x000603c7) cell_vkb_candidate_pane_g2

0xc008,	// (0x00060984) cell_vkb_candidate_pane_t1

0x7c15,	// (0x0005c591) bg_popup_fep_shadow_pane_ParamLimits

0x7c15,	// (0x0005c591) bg_popup_fep_shadow_pane

0x7cca,	// (0x0005c646) bg_fep_hwr_top_pane_g4

0xbacb,	// (0x00060447) bg_hwr_side_pane_g1_ParamLimits

0xbacb,	// (0x00060447) bg_hwr_side_pane_g1

0x7d3b,	// (0x0005c6b7) cell_hwr_side_pane_ParamLimits

0x7d3b,	// (0x0005c6b7) cell_hwr_side_pane

0x7d76,	// (0x0005c6f2) fep_hwr_write_pane_g1_ParamLimits

0x7d76,	// (0x0005c6f2) fep_hwr_write_pane_g1

0x7d83,	// (0x0005c6ff) fep_hwr_write_pane_g2_ParamLimits

0x7d83,	// (0x0005c6ff) fep_hwr_write_pane_g2

0x7d90,	// (0x0005c70c) fep_hwr_write_pane_g3_ParamLimits

0x7d90,	// (0x0005c70c) fep_hwr_write_pane_g3

0x7d9e,	// (0x0005c71a) fep_hwr_write_pane_g4_ParamLimits

0x7d9e,	// (0x0005c71a) fep_hwr_write_pane_g4

0x0005,

0xfb28,	// (0x000644a4) fep_hwr_write_pane_g_ParamLimits

0xfb28,	// (0x000644a4) fep_hwr_write_pane_g

0x7cca,	// (0x0005c646) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7cca,	// (0x0005c646) bg_fep_hwr_candidate_pane_g2

0x7db3,	// (0x0005c72f) cell_hwr_candidate_pane_ParamLimits

0x7db3,	// (0x0005c72f) cell_hwr_candidate_pane

0x7df5,	// (0x0005c771) fep_hwr_candidate_pane_g1_ParamLimits

0xbb2b,	// (0x000604a7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbb2b,	// (0x000604a7) bg_popup_fep_shadow_pane_cp2

0xbcbb,	// (0x00060637) fep_vkb_top_pane_g4_ParamLimits

0xbcbb,	// (0x00060637) fep_vkb_top_pane_g4

0xbd01,	// (0x0006067d) fep_vkb_side_pane_g2_ParamLimits

0xbd01,	// (0x0006067d) fep_vkb_side_pane_g2

0x6235,	// (0x0005abb1) list_setting_pane_t4_ParamLimits

0x6235,	// (0x0005abb1) list_setting_pane_t4

0x62cf,	// (0x0005ac4b) list_setting_number_pane_t5_ParamLimits

0x62cf,	// (0x0005ac4b) list_setting_number_pane_t5

0x68a5,	// (0x0005b221) list_double_heading_pane_cp2_ParamLimits

0x68a5,	// (0x0005b221) list_double_heading_pane_cp2

0xaf8c,	// (0x0005f908) list_double_heading_pane_g1_cp2_ParamLimits

0xaf8c,	// (0x0005f908) list_double_heading_pane_g1_cp2

0xc016,	// (0x00060992) list_double_heading_pane_g2_cp2_ParamLimits

0xc016,	// (0x00060992) list_double_heading_pane_g2_cp2

0xc02a,	// (0x000609a6) list_double_heading_pane_t1_cp2_ParamLimits

0xc02a,	// (0x000609a6) list_double_heading_pane_t1_cp2

0xc040,	// (0x000609bc) list_double_heading_pane_t2_cp2_ParamLimits

0xc040,	// (0x000609bc) list_double_heading_pane_t2_cp2

0xed42,	// (0x000636be) aid_value_unit2

0x5793,	// (0x0005a10f) popup_preview_fixed_window

0xeee4,	// (0x00063860) bg_popup_preview_window_pane_cp02

0xc052,	// (0x000609ce) list_preview_fixed_pane

0xc098,	// (0x00060a14) list_empty_pane_fp_ParamLimits

0xc098,	// (0x00060a14) list_empty_pane_fp

0xc098,	// (0x00060a14) list_single_cale_day_pane_fp_ParamLimits

0xc098,	// (0x00060a14) list_single_cale_day_pane_fp

0xc098,	// (0x00060a14) list_single_graphic_heading_pane_fp_ParamLimits

0xc098,	// (0x00060a14) list_single_graphic_heading_pane_fp

0xc098,	// (0x00060a14) list_single_graphic_pane_fp_ParamLimits

0xc098,	// (0x00060a14) list_single_graphic_pane_fp

0xc098,	// (0x00060a14) list_single_heading_pane_fp_ParamLimits

0xc098,	// (0x00060a14) list_single_heading_pane_fp

0xc098,	// (0x00060a14) list_single_pane_fp_ParamLimits

0xc098,	// (0x00060a14) list_single_pane_fp

0xc0ae,	// (0x00060a2a) list_single_pane_fp_g1_ParamLimits

0xc0ae,	// (0x00060a2a) list_single_pane_fp_g1

0xc0ba,	// (0x00060a36) list_single_pane_fp_g2_ParamLimits

0xc0ba,	// (0x00060a36) list_single_pane_fp_g2

0xc0c6,	// (0x00060a42) list_single_pane_fp_g3_ParamLimits

0xc0c6,	// (0x00060a42) list_single_pane_fp_g3

0xc0da,	// (0x00060a56) list_single_pane_fp_g4_ParamLimits

0xc0da,	// (0x00060a56) list_single_pane_fp_g4

0x0003,

0xfb8f,	// (0x0006450b) list_single_pane_fp_g_ParamLimits

0xfb8f,	// (0x0006450b) list_single_pane_fp_g

0x467b,	// (0x00058ff7) list_single_pane_fp_t1_ParamLimits

0x467b,	// (0x00058ff7) list_single_pane_fp_t1

0x4692,	// (0x0005900e) list_single_graphic_pane_fp_g1_ParamLimits

0x4692,	// (0x0005900e) list_single_graphic_pane_fp_g1

0xc0ae,	// (0x00060a2a) list_single_graphic_pane_fp_g2_ParamLimits

0xc0ae,	// (0x00060a2a) list_single_graphic_pane_fp_g2

0xc0ba,	// (0x00060a36) list_single_graphic_pane_fp_g3_ParamLimits

0xc0ba,	// (0x00060a36) list_single_graphic_pane_fp_g3

0xc0c6,	// (0x00060a42) list_single_graphic_pane_fp_g4_ParamLimits

0xc0c6,	// (0x00060a42) list_single_graphic_pane_fp_g4

0xc0da,	// (0x00060a56) list_single_graphic_pane_fp_g5_ParamLimits

0xc0da,	// (0x00060a56) list_single_graphic_pane_fp_g5

0x0004,

0xfb98,	// (0x00064514) list_single_graphic_pane_fp_g_ParamLimits

0xfb98,	// (0x00064514) list_single_graphic_pane_fp_g

0x469e,	// (0x0005901a) list_single_graphic_pane_fp_t1_ParamLimits

0x469e,	// (0x0005901a) list_single_graphic_pane_fp_t1

0x4692,	// (0x0005900e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4692,	// (0x0005900e) list_single_graphic_heading_pane_fp_g1

0xc0ae,	// (0x00060a2a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc0ae,	// (0x00060a2a) list_single_graphic_heading_pane_fp_g2

0xc0ba,	// (0x00060a36) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc0ba,	// (0x00060a36) list_single_graphic_heading_pane_fp_g3

0xc0c6,	// (0x00060a42) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc0c6,	// (0x00060a42) list_single_graphic_heading_pane_fp_g4

0xc0da,	// (0x00060a56) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc0da,	// (0x00060a56) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00064514) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00064514) list_single_graphic_heading_pane_fp_g

0x46b4,	// (0x00059030) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x46b4,	// (0x00059030) list_single_graphic_heading_pane_fp_t1

0x46ca,	// (0x00059046) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x46ca,	// (0x00059046) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba3,	// (0x0006451f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba3,	// (0x0006451f) list_single_graphic_heading_pane_fp_t

0x46dc,	// (0x00059058) list_single_cale_day_pane_fp_g1_ParamLimits

0x46dc,	// (0x00059058) list_single_cale_day_pane_fp_g1

0xc0e6,	// (0x00060a62) list_single_cale_day_pane_fp_g2_ParamLimits

0xc0e6,	// (0x00060a62) list_single_cale_day_pane_fp_g2

0xaeb7,	// (0x0005f833) list_single_cale_day_pane_fp_g3_ParamLimits

0xaeb7,	// (0x0005f833) list_single_cale_day_pane_fp_g3

0xaedf,	// (0x0005f85b) list_single_cale_day_pane_fp_g4_ParamLimits

0xaedf,	// (0x0005f85b) list_single_cale_day_pane_fp_g4

0xaf03,	// (0x0005f87f) list_single_cale_day_pane_fp_g5_ParamLimits

0xaf03,	// (0x0005f87f) list_single_cale_day_pane_fp_g5

0x0004,

0xfba8,	// (0x00064524) list_single_cale_day_pane_fp_g_ParamLimits

0xfba8,	// (0x00064524) list_single_cale_day_pane_fp_g

0x4714,	// (0x00059090) list_single_cale_day_pane_fp_t1_ParamLimits

0x4714,	// (0x00059090) list_single_cale_day_pane_fp_t1

0x473a,	// (0x000590b6) list_single_cale_day_pane_fp_t2_ParamLimits

0x473a,	// (0x000590b6) list_single_cale_day_pane_fp_t2

0x4753,	// (0x000590cf) list_single_cale_day_pane_fp_t3_ParamLimits

0x4753,	// (0x000590cf) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb3,	// (0x0006452f) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb3,	// (0x0006452f) list_single_cale_day_pane_fp_t

0xc0ae,	// (0x00060a2a) list_empty_pane_fp_g1_ParamLimits

0xc0ae,	// (0x00060a2a) list_empty_pane_fp_g1

0x476c,	// (0x000590e8) list_empty_pane_fp_t1

0x477a,	// (0x000590f6) list_empty_pane_fp_t2

0x0001,

0xfbba,	// (0x00064536) list_empty_pane_fp_t

0xc0ae,	// (0x00060a2a) list_single_heading_pane_fp_g1_ParamLimits

0xc0ae,	// (0x00060a2a) list_single_heading_pane_fp_g1

0xc0ba,	// (0x00060a36) list_single_heading_pane_fp_g2_ParamLimits

0xc0ba,	// (0x00060a36) list_single_heading_pane_fp_g2

0xc0c6,	// (0x00060a42) list_single_heading_pane_fp_g3_ParamLimits

0xc0c6,	// (0x00060a42) list_single_heading_pane_fp_g3

0x0002,

0xfbbf,	// (0x0006453b) list_single_heading_pane_fp_g_ParamLimits

0xfbbf,	// (0x0006453b) list_single_heading_pane_fp_g

0x4788,	// (0x00059104) list_single_heading_pane_fp_t1_ParamLimits

0x4788,	// (0x00059104) list_single_heading_pane_fp_t1

0x479a,	// (0x00059116) list_single_heading_pane_fp_t2_ParamLimits

0x479a,	// (0x00059116) list_single_heading_pane_fp_t2

0x0001,

0xfbc6,	// (0x00064542) list_single_heading_pane_fp_t_ParamLimits

0xfbc6,	// (0x00064542) list_single_heading_pane_fp_t

0x6575,	// (0x0005aef1) aid_size_cell_fast

0xeeb9,	// (0x00063835) soft_indicator_pane_cp1_t1

0x657e,	// (0x0005aefa) cell_app_pane_cp2_ParamLimits

0x657e,	// (0x0005aefa) cell_app_pane_cp2

0x7c37,	// (0x0005c5b3) fep_hwr_candidate_drop_down_list_pane

0x7e0f,	// (0x0005c78b) fep_hwr_candidate_pane_g3_ParamLimits

0x7e0f,	// (0x0005c78b) fep_hwr_candidate_pane_g3

0x35a4,	// (0x00057f20) fep_hwr_candidate_pane_g4_ParamLimits

0x35a4,	// (0x00057f20) fep_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x000644b1) fep_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x000644b1) fep_hwr_candidate_pane_g

0xbbb0,	// (0x0006052c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbbb0,	// (0x0006052c) fep_vkb_candidate_drop_down_list_pane

0xbfb3,	// (0x0006092f) fep_vkb_candidate_pane_g3

0xbfbb,	// (0x00060937) fep_vkb_candidate_pane_g4

0x0002,

0xfb62,	// (0x000644de) fep_vkb_candidate_pane_g

0x7e7a,	// (0x0005c7f6) cell_hwr_candidate_pane_g1_ParamLimits

0x7e88,	// (0x0005c804) cell_hwr_candidate_pane_g3_ParamLimits

0x7e88,	// (0x0005c804) cell_hwr_candidate_pane_g3

0xd1eb,	// (0x00061b67) cell_hwr_candidate_pane_g4_ParamLimits

0xd1eb,	// (0x00061b67) cell_hwr_candidate_pane_g4

0x0002,

0xfb81,	// (0x000644fd) cell_hwr_candidate_pane_g_ParamLimits

0xfb81,	// (0x000644fd) cell_hwr_candidate_pane_g

0xbfd2,	// (0x0006094e) cell_vkb_candidate_pane_g3_ParamLimits

0xbfd2,	// (0x0006094e) cell_vkb_candidate_pane_g3

0xbfed,	// (0x00060969) cell_vkb_candidate_pane_g4_ParamLimits

0xbfed,	// (0x00060969) cell_vkb_candidate_pane_g4

0xc0f2,	// (0x00060a6e) cell_app_pane_cp2_g1_ParamLimits

0xc0f2,	// (0x00060a6e) cell_app_pane_cp2_g1

0xc110,	// (0x00060a8c) cell_app_pane_cp2_g2_ParamLimits

0xc110,	// (0x00060a8c) cell_app_pane_cp2_g2

0x0001,

0xfbcb,	// (0x00064547) cell_app_pane_cp2_g_ParamLimits

0xfbcb,	// (0x00064547) cell_app_pane_cp2_g

0xc11c,	// (0x00060a98) cell_app_pane_cp2_t1_ParamLimits

0xc11c,	// (0x00060a98) cell_app_pane_cp2_t1

0xf16c,	// (0x00063ae8) grid_highlight_pane_cp1_ParamLimits

0xf16c,	// (0x00063ae8) grid_highlight_pane_cp1

0x7ec7,	// (0x0005c843) cell_hwr_candidate_pane_cp1_ParamLimits

0x7ec7,	// (0x0005c843) cell_hwr_candidate_pane_cp1

0x7e7a,	// (0x0005c7f6) fep_hwr_candidate_drop_down_list_pane_g1

0x7ee6,	// (0x0005c862) fep_hwr_candidate_drop_down_list_pane_g2

0x7ef3,	// (0x0005c86f) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd0,	// (0x0006454c) fep_hwr_candidate_drop_down_list_pane_g

0x7f00,	// (0x0005c87c) fep_hwr_candidate_drop_down_list_scroll_pane

0x7f09,	// (0x0005c885) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7f09,	// (0x0005c885) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7f16,	// (0x0005c892) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f16,	// (0x0005c892) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7f23,	// (0x0005c89f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f23,	// (0x0005c89f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7f30,	// (0x0005c8ac) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f30,	// (0x0005c8ac) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7f4b,	// (0x0005c8c7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f4b,	// (0x0005c8c7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7f66,	// (0x0005c8e2) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f66,	// (0x0005c8e2) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7f81,	// (0x0005c8fd) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f81,	// (0x0005c8fd) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7f9c,	// (0x0005c918) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f9c,	// (0x0005c918) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd7,	// (0x00064553) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd7,	// (0x00064553) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc12e,	// (0x00060aaa) cell_vkb_candidate_pane_cp1_ParamLimits

0xc12e,	// (0x00060aaa) cell_vkb_candidate_pane_cp1

0xbcbb,	// (0x00060637) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbcbb,	// (0x00060637) fep_vkb_candidate_drop_down_list_pane_g1

0xc14e,	// (0x00060aca) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc14e,	// (0x00060aca) fep_vkb_candidate_drop_down_list_pane_g2

0xc15b,	// (0x00060ad7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc15b,	// (0x00060ad7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe8,	// (0x00064564) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe8,	// (0x00064564) fep_vkb_candidate_drop_down_list_pane_g

0xc168,	// (0x00060ae4) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc168,	// (0x00060ae4) fep_vkb_candidate_drop_down_list_scroll_pane

0xc175,	// (0x00060af1) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc175,	// (0x00060af1) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc182,	// (0x00060afe) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc182,	// (0x00060afe) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc18e,	// (0x00060b0a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc18e,	// (0x00060b0a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc19a,	// (0x00060b16) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc19a,	// (0x00060b16) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc1bb,	// (0x00060b37) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc1bb,	// (0x00060b37) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc1dc,	// (0x00060b58) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc1dc,	// (0x00060b58) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc1fd,	// (0x00060b79) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc1fd,	// (0x00060b79) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc21e,	// (0x00060b9a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc21e,	// (0x00060b9a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbef,	// (0x0006456b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbef,	// (0x0006456b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x58ad,	// (0x0005a229) title_pane_g1_ParamLimits

0x58ba,	// (0x0005a236) title_pane_g2_ParamLimits

0xf54e,	// (0x00063eca) title_pane_g_ParamLimits

0x12f9,	// (0x00055c75) aid_call2_pane

0x12f1,	// (0x00055c6d) aid_call_pane

0x1301,	// (0x00055c7d) popup_clock_analogue_window_g1

0x1301,	// (0x00055c7d) popup_clock_analogue_window_g2

0x6886,	// (0x0005b202) popup_clock_analogue_window_g3

0x688f,	// (0x0005b20b) popup_clock_analogue_window_g4

0xed54,	// (0x000636d0) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0006406f) popup_clock_analogue_window_g

0x6897,	// (0x0005b213) popup_clock_analogue_window_t1

0x68cf,	// (0x0005b24b) clock_digital_number_pane_ParamLimits

0x68cf,	// (0x0005b24b) clock_digital_number_pane

0x68db,	// (0x0005b257) clock_digital_number_pane_cp02_ParamLimits

0x68db,	// (0x0005b257) clock_digital_number_pane_cp02

0x68e7,	// (0x0005b263) clock_digital_number_pane_cp03_ParamLimits

0x68e7,	// (0x0005b263) clock_digital_number_pane_cp03

0x68f3,	// (0x0005b26f) clock_digital_number_pane_cp04_ParamLimits

0x68f3,	// (0x0005b26f) clock_digital_number_pane_cp04

0x68ff,	// (0x0005b27b) clock_digital_separator_pane_ParamLimits

0x68ff,	// (0x0005b27b) clock_digital_separator_pane

0x690b,	// (0x0005b287) popup_clock_digital_window_t1_ParamLimits

0x690b,	// (0x0005b287) popup_clock_digital_window_t1

0xed54,	// (0x000636d0) clock_digital_number_pane_g1

0xed54,	// (0x000636d0) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0006407a) clock_digital_number_pane_g

0xed54,	// (0x000636d0) clock_digital_separator_pane_g1

0xed54,	// (0x000636d0) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0006407a) clock_digital_separator_pane_g

0x8da6,	// (0x0005d722) aid_fill_nsta_ParamLimits

0x8ef2,	// (0x0005d86e) indicator_nsta_pane_ParamLimits

0x906b,	// (0x0005d9e7) popup_clock_analogue_window

0x906b,	// (0x0005d9e7) popup_clock_digital_window

0xedac,	// (0x00063728) grid_indicator_nsta_pane_ParamLimits

0xb455,	// (0x0005fdd1) clock_nsta_pane_t2

0x0001,

0xfab5,	// (0x00064431) clock_nsta_pane_t

0x67b1,	// (0x0005b12d) aid_size_max_handle

0x67bb,	// (0x0005b137) aid_size_min_handle

0x3926,	// (0x000582a2) editor_scroll_pane

0xc239,	// (0x00060bb5) ex_editor_pane

0xf28b,	// (0x00063c07) scroll_pane_cp13

0xf114,	// (0x00063a90) scroll_pane_cp14

0x1330,	// (0x00055cac) scroll_pane_cp36

0x68b9,	// (0x0005b235) list_single_graphic_hl_pane_cp2_ParamLimits

0x68b9,	// (0x0005b235) list_single_graphic_hl_pane_cp2

0x7a5a,	// (0x0005c3d6) list_single_graphic_hl_pane_ParamLimits

0x7a5a,	// (0x0005c3d6) list_single_graphic_hl_pane

0x7fb7,	// (0x0005c933) aid_size_min_hl_cp1

0xc241,	// (0x00060bbd) list_highlight_pane_cp34_ParamLimits

0xc241,	// (0x00060bbd) list_highlight_pane_cp34

0xc252,	// (0x00060bce) list_single_graphic_hl_pane_g1_ParamLimits

0xc252,	// (0x00060bce) list_single_graphic_hl_pane_g1

0x7fc0,	// (0x0005c93c) list_single_graphic_hl_pane_g2_ParamLimits

0x7fc0,	// (0x0005c93c) list_single_graphic_hl_pane_g2

0x7fc0,	// (0x0005c93c) list_single_graphic_hl_pane_g3_ParamLimits

0x7fc0,	// (0x0005c93c) list_single_graphic_hl_pane_g3

0x38b1,	// (0x0005822d) list_single_graphic_hl_pane_g4_ParamLimits

0x38b1,	// (0x0005822d) list_single_graphic_hl_pane_g4

0x7fcc,	// (0x0005c948) list_single_graphic_hl_pane_g5_ParamLimits

0x7fcc,	// (0x0005c948) list_single_graphic_hl_pane_g5

0x0004,

0xfc00,	// (0x0006457c) list_single_graphic_hl_pane_g_ParamLimits

0xfc00,	// (0x0006457c) list_single_graphic_hl_pane_g

0x7fe0,	// (0x0005c95c) list_single_graphic_hl_pane_t1_ParamLimits

0x7fe0,	// (0x0005c95c) list_single_graphic_hl_pane_t1

0xc25f,	// (0x00060bdb) aid_size_min_hl_cp2

0xc268,	// (0x00060be4) list_highlight_pane_cp34_cp2_ParamLimits

0xc268,	// (0x00060be4) list_highlight_pane_cp34_cp2

0xc252,	// (0x00060bce) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc252,	// (0x00060bce) list_single_graphic_hl_pane_g1_cp2

0xc275,	// (0x00060bf1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc275,	// (0x00060bf1) list_single_graphic_hl_pane_g2_cp2

0xc281,	// (0x00060bfd) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc281,	// (0x00060bfd) list_single_graphic_hl_pane_g3_cp2

0x3885,	// (0x00058201) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3885,	// (0x00058201) list_single_graphic_hl_pane_g4_cp2

0xc28f,	// (0x00060c0b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc28f,	// (0x00060c0b) list_single_graphic_hl_pane_g5_cp2

0x6f56,	// (0x0005b8d2) control_pane_g4_ParamLimits

0x6f56,	// (0x0005b8d2) control_pane_g4

0x8d6a,	// (0x0005d6e6) bg_popup_sub_pane_cp10_ParamLimits

0xba55,	// (0x000603d1) list_choice_list_pane_ParamLimits

0xba64,	// (0x000603e0) scroll_pane_cp23

0xeee4,	// (0x00063860) bg_popup_preview_window_pane_cp02_ParamLimits

0xc052,	// (0x000609ce) list_preview_fixed_pane_ParamLimits

0xc068,	// (0x000609e4) list_preview_fixed_pane_cp_ParamLimits

0xc068,	// (0x000609e4) list_preview_fixed_pane_cp

0xc074,	// (0x000609f0) popup_preview_fixed_window_g1_ParamLimits

0xc074,	// (0x000609f0) popup_preview_fixed_window_g1

0xc080,	// (0x000609fc) popup_preview_fixed_window_g2_ParamLimits

0xc080,	// (0x000609fc) popup_preview_fixed_window_g2

0x0002,

0xfb88,	// (0x00064504) popup_preview_fixed_window_g_ParamLimits

0xfb88,	// (0x00064504) popup_preview_fixed_window_g

0x668d,	// (0x0005b009) aid_navi_side_left_pane_ParamLimits

0x66a2,	// (0x0005b01e) aid_navi_side_right_pane_ParamLimits

0x66ba,	// (0x0005b036) navi_icon_pane_stacon_ParamLimits

0x66ce,	// (0x0005b04a) navi_navi_pane_stacon_ParamLimits

0x66ba,	// (0x0005b036) navi_text_pane_stacon_ParamLimits

0x5662,	// (0x00059fde) main_text_info_pane

0xc2b9,	// (0x00060c35) listscroll_text_info_pane

0xc2c1,	// (0x00060c3d) list_text_info_pane_ParamLimits

0xc2c1,	// (0x00060c3d) list_text_info_pane

0xc2d0,	// (0x00060c4c) scroll_pane_cp24_ParamLimits

0xc2d0,	// (0x00060c4c) scroll_pane_cp24

0xc2ee,	// (0x00060c6a) list_text_info_pane_t1_ParamLimits

0xc2ee,	// (0x00060c6a) list_text_info_pane_t1

0x70d2,	// (0x0005ba4e) popup_fast_swap2_window_ParamLimits

0x70d2,	// (0x0005ba4e) popup_fast_swap2_window

0xc322,	// (0x00060c9e) aid_size_cell_fast2

0xed4a,	// (0x000636c6) bg_popup_window_pane_cp17

0x9710,	// (0x0005e08c) heading_pane_cp2

0xf018,	// (0x00063994) listscroll_fast2_pane

0xc32c,	// (0x00060ca8) grid_fast2_pane

0xc336,	// (0x00060cb2) listscroll_fast2_pane_g1

0xc33e,	// (0x00060cba) listscroll_fast2_pane_g2

0x0001,

0xfc0b,	// (0x00064587) listscroll_fast2_pane_g

0xf28b,	// (0x00063c07) scroll_pane_cp26

0xc348,	// (0x00060cc4) cell_fast2_pane_ParamLimits

0xc348,	// (0x00060cc4) cell_fast2_pane

0xc35d,	// (0x00060cd9) cell_fast2_pane_g1

0xc366,	// (0x00060ce2) cell_fast2_pane_g2

0xc36f,	// (0x00060ceb) cell_fast2_pane_g3

0x0002,

0xfc10,	// (0x0006458c) cell_fast2_pane_g

0xf04b,	// (0x000639c7) grid_highlight_pane_cp9

0x709a,	// (0x0005ba16) main_eswt_pane_ParamLimits

0x709a,	// (0x0005ba16) main_eswt_pane

0xc2e5,	// (0x00060c61) list_single_text_info_pane

0xc377,	// (0x00060cf3) eswt_ctrl_button_pane

0xc377,	// (0x00060cf3) eswt_ctrl_canvas_pane

0xc37f,	// (0x00060cfb) eswt_ctrl_combo_pane

0xc377,	// (0x00060cf3) eswt_ctrl_default_pane

0xc377,	// (0x00060cf3) eswt_ctrl_label_pane

0xc387,	// (0x00060d03) eswt_ctrl_wait_pane

0xc38f,	// (0x00060d0b) eswt_shell_pane

0xed4a,	// (0x000636c6) listscroll_eswt_app_pane

0xc3af,	// (0x00060d2b) popup_eswt_tasktip_window_ParamLimits

0xc3af,	// (0x00060d2b) popup_eswt_tasktip_window

0x931d,	// (0x0005dc99) bg_popup_window_pane_cp18

0xc3c0,	// (0x00060d3c) eswt_control_pane_g1_ParamLimits

0xc3c0,	// (0x00060d3c) eswt_control_pane_g1

0xc3cd,	// (0x00060d49) eswt_control_pane_g2_ParamLimits

0xc3cd,	// (0x00060d49) eswt_control_pane_g2

0xc3da,	// (0x00060d56) eswt_control_pane_g3_ParamLimits

0xc3da,	// (0x00060d56) eswt_control_pane_g3

0xc3e7,	// (0x00060d63) eswt_control_pane_g4_ParamLimits

0xc3e7,	// (0x00060d63) eswt_control_pane_g4

0x0003,

0xfc17,	// (0x00064593) eswt_control_pane_g_ParamLimits

0xfc17,	// (0x00064593) eswt_control_pane_g

0xf16c,	// (0x00063ae8) bg_button_pane_ParamLimits

0xf16c,	// (0x00063ae8) bg_button_pane

0xf060,	// (0x000639dc) common_borders_pane_copy2_ParamLimits

0xf060,	// (0x000639dc) common_borders_pane_copy2

0xc3f4,	// (0x00060d70) control_button_pane_g1_ParamLimits

0xc3f4,	// (0x00060d70) control_button_pane_g1

0xc400,	// (0x00060d7c) control_button_pane_g2_ParamLimits

0xc400,	// (0x00060d7c) control_button_pane_g2

0xc40c,	// (0x00060d88) control_button_pane_g3_ParamLimits

0xc40c,	// (0x00060d88) control_button_pane_g3

0x0002,

0xfc20,	// (0x0006459c) control_button_pane_g_ParamLimits

0xfc20,	// (0x0006459c) control_button_pane_g

0xc420,	// (0x00060d9c) control_button_pane_t1

0xc42e,	// (0x00060daa) control_button_pane_t2

0x0001,

0xfc27,	// (0x000645a3) control_button_pane_t

0x9291,	// (0x0005dc0d) bg_button_pane_g1

0x92a1,	// (0x0005dc1d) bg_button_pane_g2

0x9299,	// (0x0005dc15) bg_button_pane_g3

0x92b1,	// (0x0005dc2d) bg_button_pane_g4

0x92a9,	// (0x0005dc25) bg_button_pane_g5

0x92b9,	// (0x0005dc35) bg_button_pane_g6

0x92c1,	// (0x0005dc3d) bg_button_pane_g7

0x92d1,	// (0x0005dc4d) bg_button_pane_g8

0x92c9,	// (0x0005dc45) bg_button_pane_g9

0x0008,

0xf861,	// (0x000641dd) bg_button_pane_g

0xba10,	// (0x0006038c) common_borders_pane_ParamLimits

0xba10,	// (0x0006038c) common_borders_pane

0xc3c0,	// (0x00060d3c) eswt_control_pane_g1_copy1_ParamLimits

0xc3c0,	// (0x00060d3c) eswt_control_pane_g1_copy1

0xc3cd,	// (0x00060d49) eswt_control_pane_g2_copy1_ParamLimits

0xc3cd,	// (0x00060d49) eswt_control_pane_g2_copy1

0xc3da,	// (0x00060d56) eswt_control_pane_g3_copy1_ParamLimits

0xc3da,	// (0x00060d56) eswt_control_pane_g3_copy1

0xc3e7,	// (0x00060d63) eswt_control_pane_g4_copy1_ParamLimits

0xc3e7,	// (0x00060d63) eswt_control_pane_g4_copy1

0xba4b,	// (0x000603c7) bg_eswt_ctrl_canvas_pane_g1

0xba10,	// (0x0006038c) common_borders_pane_cp2_ParamLimits

0xba10,	// (0x0006038c) common_borders_pane_cp2

0xba10,	// (0x0006038c) common_borders_pane_cp3_ParamLimits

0xba10,	// (0x0006038c) common_borders_pane_cp3

0xc43c,	// (0x00060db8) separator_horizontal_pane

0xc444,	// (0x00060dc0) separator_vertical_pane

0xc3c0,	// (0x00060d3c) eswt_control_pane_g1_copy2_ParamLimits

0xc3c0,	// (0x00060d3c) eswt_control_pane_g1_copy2

0xc3cd,	// (0x00060d49) eswt_control_pane_g2_copy2_ParamLimits

0xc3cd,	// (0x00060d49) eswt_control_pane_g2_copy2

0xc3da,	// (0x00060d56) eswt_control_pane_g3_copy2_ParamLimits

0xc3da,	// (0x00060d56) eswt_control_pane_g3_copy2

0xc3e7,	// (0x00060d63) eswt_control_pane_g4_copy2_ParamLimits

0xc3e7,	// (0x00060d63) eswt_control_pane_g4_copy2

0xed4a,	// (0x000636c6) common_borders_pane_cp4

0xc44d,	// (0x00060dc9) separator_horizontal_pane_g1

0xc456,	// (0x00060dd2) separator_horizontal_pane_g2

0xc45f,	// (0x00060ddb) separator_horizontal_pane_g3

0x0002,

0xfc2c,	// (0x000645a8) separator_horizontal_pane_g

0xc3c0,	// (0x00060d3c) eswt_control_pane_g1_copy3_ParamLimits

0xc3c0,	// (0x00060d3c) eswt_control_pane_g1_copy3

0xc3cd,	// (0x00060d49) eswt_control_pane_g2_copy3_ParamLimits

0xc3cd,	// (0x00060d49) eswt_control_pane_g2_copy3

0xc3da,	// (0x00060d56) eswt_control_pane_g3_copy3_ParamLimits

0xc3da,	// (0x00060d56) eswt_control_pane_g3_copy3

0xc3e7,	// (0x00060d63) eswt_control_pane_g4_copy3_ParamLimits

0xc3e7,	// (0x00060d63) eswt_control_pane_g4_copy3

0xed4a,	// (0x000636c6) common_borders_pane_cp5

0xc468,	// (0x00060de4) separator_vertical_pane_g1

0xc471,	// (0x00060ded) separator_vertical_pane_g2

0xc47a,	// (0x00060df6) separator_vertical_pane_g3

0x0002,

0xfc33,	// (0x000645af) separator_vertical_pane_g

0xc3c0,	// (0x00060d3c) eswt_control_pane_g1_copy4_ParamLimits

0xc3c0,	// (0x00060d3c) eswt_control_pane_g1_copy4

0xc3cd,	// (0x00060d49) eswt_control_pane_g2_copy4_ParamLimits

0xc3cd,	// (0x00060d49) eswt_control_pane_g2_copy4

0xc3da,	// (0x00060d56) eswt_control_pane_g3_copy4_ParamLimits

0xc3da,	// (0x00060d56) eswt_control_pane_g3_copy4

0xc3e7,	// (0x00060d63) eswt_control_pane_g4_copy4_ParamLimits

0xc3e7,	// (0x00060d63) eswt_control_pane_g4_copy4

0xc483,	// (0x00060dff) eswt_ctrl_combo_button_pane

0xc48b,	// (0x00060e07) eswt_ctrl_input_pane

0xc493,	// (0x00060e0f) popup_choice_list_window_cp70

0xc49b,	// (0x00060e17) eswt_ctrl_input_pane_t1

0xed4a,	// (0x000636c6) input_focus_pane_cp70

0xba10,	// (0x0006038c) bg_button_pane_cp70_ParamLimits

0xba10,	// (0x0006038c) bg_button_pane_cp70

0xc4a9,	// (0x00060e25) eswt_ctrl_combo_button_pane_g1

0xc4b1,	// (0x00060e2d) wait_bar_pane_cp70

0x931d,	// (0x0005dc99) bg_popup_window_pane_cp70_ParamLimits

0x931d,	// (0x0005dc99) bg_popup_window_pane_cp70

0xc4b9,	// (0x00060e35) popup_eswt_tasktip_window_t1

0xc4cf,	// (0x00060e4b) wait_bar_pane_cp71_ParamLimits

0xc4cf,	// (0x00060e4b) wait_bar_pane_cp71

0xc4db,	// (0x00060e57) grid_eswt_app_pane

0xf472,	// (0x00063dee) scroll_pane_cp70

0xc4e4,	// (0x00060e60) cell_eswt_app_pane_ParamLimits

0xc4e4,	// (0x00060e60) cell_eswt_app_pane

0xc514,	// (0x00060e90) cell_eswt_app_pane_g1_ParamLimits

0xc514,	// (0x00060e90) cell_eswt_app_pane_g1

0xc543,	// (0x00060ebf) cell_eswt_app_pane_g2_ParamLimits

0xc543,	// (0x00060ebf) cell_eswt_app_pane_g2

0x0001,

0xfc3a,	// (0x000645b6) cell_eswt_app_pane_g_ParamLimits

0xfc3a,	// (0x000645b6) cell_eswt_app_pane_g

0xc567,	// (0x00060ee3) cell_eswt_app_pane_t1_ParamLimits

0xc567,	// (0x00060ee3) cell_eswt_app_pane_t1

0xc599,	// (0x00060f15) grid_highlight_pane_cp70_ParamLimits

0xc599,	// (0x00060f15) grid_highlight_pane_cp70

0x3829,	// (0x000581a5) set_content_pane_g1

0x6ede,	// (0x0005b85a) status_small_volume_pane

0x7ff6,	// (0x0005c972) status_small_volume_pane_g1

0x7ffe,	// (0x0005c97a) volume_small2_pane

0x8007,	// (0x0005c983) volume_small2_pane_g1

0x8010,	// (0x0005c98c) volume_small2_pane_g2

0x8019,	// (0x0005c995) volume_small2_pane_g3

0x8022,	// (0x0005c99e) volume_small2_pane_g4

0x802b,	// (0x0005c9a7) volume_small2_pane_g5

0x8034,	// (0x0005c9b0) volume_small2_pane_g6

0x803d,	// (0x0005c9b9) volume_small2_pane_g7

0x8046,	// (0x0005c9c2) volume_small2_pane_g8

0x804f,	// (0x0005c9cb) volume_small2_pane_g9

0x8058,	// (0x0005c9d4) volume_small2_pane_g10

0x0009,

0xfc3f,	// (0x000645bb) volume_small2_pane_g

0xbe03,	// (0x0006077f) fep_vkb_top_text_pane_g1_ParamLimits

0xbe1e,	// (0x0006079a) fep_vkb_top_text_pane_t1_ParamLimits

0xc08c,	// (0x00060a08) popup_preview_fixed_window_g3_ParamLimits

0xc08c,	// (0x00060a08) popup_preview_fixed_window_g3

0x7581,	// (0x0005befd) popup_toolbar_trans_pane

0xa653,	// (0x0005efcf) aid_height_set_list_ParamLimits

0xa664,	// (0x0005efe0) aid_size_parent_ParamLimits

0x8d6a,	// (0x0005d6e6) list_highlight_pane_cp2_ParamLimits

0x3829,	// (0x000581a5) set_content_pane_g1_ParamLimits

0xa8a7,	// (0x0005f223) list_single_image_pane_ParamLimits

0xa8a7,	// (0x0005f223) list_single_image_pane

0xc5a5,	// (0x00060f21) aid_size_cell_image_ParamLimits

0xc5a5,	// (0x00060f21) aid_size_cell_image

0xc5b2,	// (0x00060f2e) grid_single_image_pane_ParamLimits

0xc5b2,	// (0x00060f2e) grid_single_image_pane

0xc0ba,	// (0x00060a36) list_single_image_pane_g1_ParamLimits

0xc0ba,	// (0x00060a36) list_single_image_pane_g1

0xc0c6,	// (0x00060a42) list_single_image_pane_g2_ParamLimits

0xc0c6,	// (0x00060a42) list_single_image_pane_g2

0x0001,

0xfc54,	// (0x000645d0) list_single_image_pane_g_ParamLimits

0xfc54,	// (0x000645d0) list_single_image_pane_g

0xc5c0,	// (0x00060f3c) list_single_image_pane_t1_ParamLimits

0xc5c0,	// (0x00060f3c) list_single_image_pane_t1

0xc5d6,	// (0x00060f52) cell_image_list_pane_ParamLimits

0xc5d6,	// (0x00060f52) cell_image_list_pane

0xc5ea,	// (0x00060f66) cell_image_list_pane_g1

0xc5f3,	// (0x00060f6f) cell_image_list_pane_g2

0x0001,

0xfc59,	// (0x000645d5) cell_image_list_pane_g

0xc5fc,	// (0x00060f78) aid_size_cell_tb_trans_pane

0xf16c,	// (0x00063ae8) bg_tb_trans_pane

0xc60e,	// (0x00060f8a) grid_tb_trans_pane

0x9291,	// (0x0005dc0d) bg_tb_trans_pane_g1

0x92a1,	// (0x0005dc1d) bg_tb_trans_pane_g2

0x9299,	// (0x0005dc15) bg_tb_trans_pane_g3

0x92b1,	// (0x0005dc2d) bg_tb_trans_pane_g4

0x92a9,	// (0x0005dc25) bg_tb_trans_pane_g5

0x92d1,	// (0x0005dc4d) bg_tb_trans_pane_g6

0x92c9,	// (0x0005dc45) bg_tb_trans_pane_g7

0x92b9,	// (0x0005dc35) bg_tb_trans_pane_g8

0x92c1,	// (0x0005dc3d) bg_tb_trans_pane_g9

0x0008,

0xfc5e,	// (0x000645da) bg_tb_trans_pane_g

0xc622,	// (0x00060f9e) cell_toolbar_trans_pane_ParamLimits

0xc622,	// (0x00060f9e) cell_toolbar_trans_pane

0xba4b,	// (0x000603c7) cell_toolbar_trans_pane_g1

0xb616,	// (0x0005ff92) list_form2_midp_pane_t1

0xb624,	// (0x0005ffa0) list_form2_midp_pane_t2

0x0001,

0xfafb,	// (0x00064477) list_form2_midp_pane_t

0xb632,	// (0x0005ffae) scroll_pane_cp51_ParamLimits

0xb7ee,	// (0x0006016a) form2_midp_wait_pane_g1

0xb7f7,	// (0x00060173) form2_midp_wait_pane_g2

0xb800,	// (0x0006017c) form2_midp_wait_pane_g3

0x0002,

0xfb10,	// (0x0006448c) form2_midp_wait_pane_g

0xedac,	// (0x00063728) list_highlight_pane_cp21_ParamLimits

0xb848,	// (0x000601c4) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb857,	// (0x000601d3) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa848,	// (0x0005f1c4) list_single_2graphic_im_pane_ParamLimits

0xa848,	// (0x0005f1c4) list_single_2graphic_im_pane

0xc648,	// (0x00060fc4) list_single_2graphic_im_pane_g1_ParamLimits

0xc648,	// (0x00060fc4) list_single_2graphic_im_pane_g1

0xc659,	// (0x00060fd5) list_single_2graphic_im_pane_g2_ParamLimits

0xc659,	// (0x00060fd5) list_single_2graphic_im_pane_g2

0xc665,	// (0x00060fe1) list_single_2graphic_im_pane_g3_ParamLimits

0xc665,	// (0x00060fe1) list_single_2graphic_im_pane_g3

0x0003,

0xfc71,	// (0x000645ed) list_single_2graphic_im_pane_g_ParamLimits

0xfc71,	// (0x000645ed) list_single_2graphic_im_pane_g

0xc685,	// (0x00061001) list_single_2graphic_im_pane_t1_ParamLimits

0xc685,	// (0x00061001) list_single_2graphic_im_pane_t1

0xc098,	// (0x00060a14) list_single_graphic_2heading_pane_fp_ParamLimits

0xc098,	// (0x00060a14) list_single_graphic_2heading_pane_fp

0x4692,	// (0x0005900e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4692,	// (0x0005900e) list_single_graphic_2heading_pane_fp_g1

0xc0ae,	// (0x00060a2a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc0ae,	// (0x00060a2a) list_single_graphic_2heading_pane_fp_g2

0xc0ba,	// (0x00060a36) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc0ba,	// (0x00060a36) list_single_graphic_2heading_pane_fp_g3

0xc0c6,	// (0x00060a42) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc0c6,	// (0x00060a42) list_single_graphic_2heading_pane_fp_g4

0xc0da,	// (0x00060a56) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc0da,	// (0x00060a56) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb98,	// (0x00064514) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb98,	// (0x00064514) list_single_graphic_2heading_pane_fp_g

0x47b0,	// (0x0005912c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x47b0,	// (0x0005912c) list_single_graphic_2heading_pane_fp_t1

0x46ca,	// (0x00059046) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x46ca,	// (0x00059046) list_single_graphic_2heading_pane_fp_t2

0x47c6,	// (0x00059142) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x47c6,	// (0x00059142) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7a,	// (0x000645f6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7a,	// (0x000645f6) list_single_graphic_2heading_pane_fp_t

0xbad7,	// (0x00060453) fep_hwr_write_pane_g5_ParamLimits

0xbad7,	// (0x00060453) fep_hwr_write_pane_g5

0xbae3,	// (0x0006045f) fep_hwr_write_pane_g6_ParamLimits

0xbae3,	// (0x0006045f) fep_hwr_write_pane_g6

0xc38f,	// (0x00060d0b) eswt_shell_pane_ParamLimits

0x931d,	// (0x0005dc99) bg_popup_window_pane_cp18_ParamLimits

0xa5ac,	// (0x0005ef28) heading_pane_cp70

0xc4b9,	// (0x00060e35) popup_eswt_tasktip_window_t1_ParamLimits

0x8dfb,	// (0x0005d777) aid_touch_tab_arrow_left

0x8e0a,	// (0x0005d786) aid_touch_tab_arrow_right

0x58cb,	// (0x0005a247) title_pane_g3_ParamLimits

0x58cb,	// (0x0005a247) title_pane_g3

0xf134,	// (0x00063ab0) set_value_pane_g1

0x7581,	// (0x0005befd) popup_toolbar_trans_pane_ParamLimits

0xc5fc,	// (0x00060f78) aid_size_cell_tb_trans_pane_ParamLimits

0xf16c,	// (0x00063ae8) bg_tb_trans_pane_ParamLimits

0xc60e,	// (0x00060f8a) grid_tb_trans_pane_ParamLimits

0xeee4,	// (0x00063860) cont_note_pane_ParamLimits

0xeee4,	// (0x00063860) cont_note_pane

0xf060,	// (0x000639dc) cont_snote2_single_text_pane_ParamLimits

0xf060,	// (0x000639dc) cont_snote2_single_text_pane

0xf060,	// (0x000639dc) cont_snote2_single_graphic_pane_ParamLimits

0xf060,	// (0x000639dc) cont_snote2_single_graphic_pane

0x992f,	// (0x0005e2ab) cont_note_wait_pane_ParamLimits

0x992f,	// (0x0005e2ab) cont_note_wait_pane

0x992f,	// (0x0005e2ab) cont_note_image_pane_ParamLimits

0x992f,	// (0x0005e2ab) cont_note_image_pane

0xc6b6,	// (0x00061032) popup_note2_window_g1_ParamLimits

0xc6b6,	// (0x00061032) popup_note2_window_g1

0xc6e7,	// (0x00061063) popup_note2_window_t1_ParamLimits

0xc6e7,	// (0x00061063) popup_note2_window_t1

0xc72c,	// (0x000610a8) popup_note2_window_t2_ParamLimits

0xc72c,	// (0x000610a8) popup_note2_window_t2

0xc771,	// (0x000610ed) popup_note2_window_t3_ParamLimits

0xc771,	// (0x000610ed) popup_note2_window_t3

0xc7b6,	// (0x00061132) popup_note2_window_t4_ParamLimits

0xc7b6,	// (0x00061132) popup_note2_window_t4

0xef68,	// (0x000638e4) popup_note2_window_t5_ParamLimits

0xef68,	// (0x000638e4) popup_note2_window_t5

0x0004,

0xfc86,	// (0x00064602) popup_note2_window_t_ParamLimits

0xfc86,	// (0x00064602) popup_note2_window_t

0xc7e5,	// (0x00061161) popup_note2_image_window_g1_ParamLimits

0xc7e5,	// (0x00061161) popup_note2_image_window_g1

0xc7f1,	// (0x0006116d) popup_note2_image_window_g2_ParamLimits

0xc7f1,	// (0x0006116d) popup_note2_image_window_g2

0x0001,

0xfc91,	// (0x0006460d) popup_note2_image_window_g_ParamLimits

0xfc91,	// (0x0006460d) popup_note2_image_window_g

0xc803,	// (0x0006117f) popup_note2_image_window_t1_ParamLimits

0xc803,	// (0x0006117f) popup_note2_image_window_t1

0xc81b,	// (0x00061197) popup_note2_image_window_t2_ParamLimits

0xc81b,	// (0x00061197) popup_note2_image_window_t2

0xc833,	// (0x000611af) popup_note2_image_window_t3_ParamLimits

0xc833,	// (0x000611af) popup_note2_image_window_t3

0x0002,

0xfc96,	// (0x00064612) popup_note2_image_window_t_ParamLimits

0xfc96,	// (0x00064612) popup_note2_image_window_t

0x993d,	// (0x0005e2b9) popup_note2_wait_window_g1_ParamLimits

0x993d,	// (0x0005e2b9) popup_note2_wait_window_g1

0x9949,	// (0x0005e2c5) popup_note2_wait_window_g2_ParamLimits

0x9949,	// (0x0005e2c5) popup_note2_wait_window_g2

0x9955,	// (0x0005e2d1) popup_note2_wait_window_g3_ParamLimits

0x9955,	// (0x0005e2d1) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x000641bf) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x000641bf) popup_note2_wait_window_g

0xc84f,	// (0x000611cb) popup_note2_wait_window_t1_ParamLimits

0xc84f,	// (0x000611cb) popup_note2_wait_window_t1

0xc86d,	// (0x000611e9) popup_note2_wait_window_t2_ParamLimits

0xc86d,	// (0x000611e9) popup_note2_wait_window_t2

0xc88b,	// (0x00061207) popup_note2_wait_window_t3_ParamLimits

0xc88b,	// (0x00061207) popup_note2_wait_window_t3

0xc89d,	// (0x00061219) popup_note2_wait_window_t4_ParamLimits

0xc89d,	// (0x00061219) popup_note2_wait_window_t4

0x0003,

0xfc9d,	// (0x00064619) popup_note2_wait_window_t_ParamLimits

0xfc9d,	// (0x00064619) popup_note2_wait_window_t

0xc8af,	// (0x0006122b) wait_bar2_pane_ParamLimits

0xc8af,	// (0x0006122b) wait_bar2_pane

0xc8c7,	// (0x00061243) popup_snote2_single_text_window_g1_ParamLimits

0xc8c7,	// (0x00061243) popup_snote2_single_text_window_g1

0xc8ef,	// (0x0006126b) popup_snote2_single_text_window_t1_ParamLimits

0xc8ef,	// (0x0006126b) popup_snote2_single_text_window_t1

0xc93b,	// (0x000612b7) popup_snote2_single_text_window_t2_ParamLimits

0xc93b,	// (0x000612b7) popup_snote2_single_text_window_t2

0xc987,	// (0x00061303) popup_snote2_single_text_window_t3_ParamLimits

0xc987,	// (0x00061303) popup_snote2_single_text_window_t3

0xc9c8,	// (0x00061344) popup_snote2_single_text_window_t4_ParamLimits

0xc9c8,	// (0x00061344) popup_snote2_single_text_window_t4

0xc9fe,	// (0x0006137a) popup_snote2_single_text_window_t5_ParamLimits

0xc9fe,	// (0x0006137a) popup_snote2_single_text_window_t5

0x0004,

0xfca6,	// (0x00064622) popup_snote2_single_text_window_t_ParamLimits

0xfca6,	// (0x00064622) popup_snote2_single_text_window_t

0xca29,	// (0x000613a5) popup_snote2_single_graphic_window_g1_ParamLimits

0xca29,	// (0x000613a5) popup_snote2_single_graphic_window_g1

0xca51,	// (0x000613cd) popup_snote2_single_graphic_window_g2_ParamLimits

0xca51,	// (0x000613cd) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb1,	// (0x0006462d) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb1,	// (0x0006462d) popup_snote2_single_graphic_window_g

0xca79,	// (0x000613f5) popup_snote2_single_graphic_window_t1_ParamLimits

0xca79,	// (0x000613f5) popup_snote2_single_graphic_window_t1

0xcac5,	// (0x00061441) popup_snote2_single_graphic_window_t2_ParamLimits

0xcac5,	// (0x00061441) popup_snote2_single_graphic_window_t2

0xc987,	// (0x00061303) popup_snote2_single_graphic_window_t3_ParamLimits

0xc987,	// (0x00061303) popup_snote2_single_graphic_window_t3

0xc9c8,	// (0x00061344) popup_snote2_single_graphic_window_t4_ParamLimits

0xc9c8,	// (0x00061344) popup_snote2_single_graphic_window_t4

0xc9fe,	// (0x0006137a) popup_snote2_single_graphic_window_t5_ParamLimits

0xc9fe,	// (0x0006137a) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb6,	// (0x00064632) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb6,	// (0x00064632) popup_snote2_single_graphic_window_t

0xb4ef,	// (0x0005fe6b) clock_nsta_pane_cp2_t1

0xb4ef,	// (0x0005fe6b) clock_nsta_pane_cp2_t2

0x0001,

0xfad1,	// (0x0006444d) clock_nsta_pane_cp2_t

0x36be,	// (0x0005803a) form_field_data_wide_pane_g1_ParamLimits

0xf17a,	// (0x00063af6) form_field_data_wide_pane_g2_ParamLimits

0xf17a,	// (0x00063af6) form_field_data_wide_pane_g2

0xf186,	// (0x00063b02) form_field_data_wide_pane_g3_ParamLimits

0xf186,	// (0x00063b02) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00063ff2) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00063ff2) form_field_data_wide_pane_g

0xb3f1,	// (0x0005fd6d) grid_touch_3_pane_ParamLimits

0xb3f1,	// (0x0005fd6d) grid_touch_3_pane

0xcb11,	// (0x0006148d) cell_touch_3_pane_ParamLimits

0xcb11,	// (0x0006148d) cell_touch_3_pane

0xba4b,	// (0x000603c7) cell_touch_3_pane_g1

0xba4b,	// (0x000603c7) cell_touch_3_pane_g2

0x0001,

0xfb56,	// (0x000644d2) cell_touch_3_pane_g

0xef9a,	// (0x00063916) cont_query_data_pane

0xefa2,	// (0x0006391e) cont_query_data_pane_cp1

0xcb3f,	// (0x000614bb) button_value_adjust_pane_cp7

0xcb47,	// (0x000614c3) query_popup_pane_cp3

0x1362,	// (0x00055cde) bg_popup_sub_pane_cp22_ParamLimits

0x6985,	// (0x0005b301) navi_navi_volume_pane_cp2

0x699d,	// (0x0005b319) popup_side_volume_key_window_g2

0x69a9,	// (0x0005b325) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00064088) popup_side_volume_key_window_g

0x69c3,	// (0x0005b33f) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0006408f) popup_side_volume_key_window_t

0x6c71,	// (0x0005b5ed) popup_side_volume_key_window_ParamLimits

0x6086,	// (0x0005aa02) list_double_graphic_pane_g4_ParamLimits

0x6086,	// (0x0005aa02) list_double_graphic_pane_g4

0xa887,	// (0x0005f203) list_single_2heading_msg_pane_ParamLimits

0xa887,	// (0x0005f203) list_single_2heading_msg_pane

0xaf27,	// (0x0005f8a3) list_single_2heading_msg_pane_g1_ParamLimits

0xaf27,	// (0x0005f8a3) list_single_2heading_msg_pane_g1

0x5ea0,	// (0x0005a81c) list_single_2heading_msg_pane_g2_ParamLimits

0x5ea0,	// (0x0005a81c) list_single_2heading_msg_pane_g2

0xaf33,	// (0x0005f8af) list_single_2heading_msg_pane_g3_ParamLimits

0xaf33,	// (0x0005f8af) list_single_2heading_msg_pane_g3

0xaf3f,	// (0x0005f8bb) list_single_2heading_msg_pane_g4_ParamLimits

0xaf3f,	// (0x0005f8bb) list_single_2heading_msg_pane_g4

0x0003,

0xfcc1,	// (0x0006463d) list_single_2heading_msg_pane_g_ParamLimits

0xfcc1,	// (0x0006463d) list_single_2heading_msg_pane_g

0x8061,	// (0x0005c9dd) list_single_2heading_msg_pane_t1_ParamLimits

0x8061,	// (0x0005c9dd) list_single_2heading_msg_pane_t1

0x8089,	// (0x0005ca05) list_single_2heading_msg_pane_t2_ParamLimits

0x8089,	// (0x0005ca05) list_single_2heading_msg_pane_t2

0x80b8,	// (0x0005ca34) list_single_2heading_msg_pane_t3_ParamLimits

0x80b8,	// (0x0005ca34) list_single_2heading_msg_pane_t3

0x47e6,	// (0x00059162) list_single_2heading_msg_pane_t4_ParamLimits

0x47e6,	// (0x00059162) list_single_2heading_msg_pane_t4

0x0003,

0xfcca,	// (0x00064646) list_single_2heading_msg_pane_t_ParamLimits

0xfcca,	// (0x00064646) list_single_2heading_msg_pane_t

0xed68,	// (0x000636e4) title_pane_g4_ParamLimits

0xed68,	// (0x000636e4) title_pane_g4

0x65de,	// (0x0005af5a) title_pane_stacon_g3_ParamLimits

0x65de,	// (0x0005af5a) title_pane_stacon_g3

0xc679,	// (0x00060ff5) list_single_2graphic_im_pane_g4_ParamLimits

0xc679,	// (0x00060ff5) list_single_2graphic_im_pane_g4

0xa376,	// (0x0005ecf2) popup_side_volume_key_window_cp

0xabe5,	// (0x0005f561) main_idle_act2_pane_t1

0x7673,	// (0x0005bfef) toolbar_button_pane_g10

0x5e8a,	// (0x0005a806) popup_toolbar_window_cp1

0xb4e0,	// (0x0005fe5c) clock_nsta_pane_cp_t1

0xb4e0,	// (0x0005fe5c) clock_nsta_pane_cp_t2

0x0001,

0xfacc,	// (0x00064448) clock_nsta_pane_cp_t

0x6985,	// (0x0005b301) navi_navi_volume_pane_cp2_ParamLimits

0x6991,	// (0x0005b30d) popup_side_volume_key_window_g1_ParamLimits

0x699d,	// (0x0005b319) popup_side_volume_key_window_g2_ParamLimits

0x69a9,	// (0x0005b325) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00064088) popup_side_volume_key_window_g_ParamLimits

0x7c23,	// (0x0005c59f) fep_hwr_aid_pane

0x7cca,	// (0x0005c646) bg_fep_hwr_top_pane_g4_ParamLimits

0xbaa7,	// (0x00060423) fep_hwr_top_pane_g1_ParamLimits

0xbab9,	// (0x00060435) fep_hwr_top_pane_g2_ParamLimits

0x7cea,	// (0x0005c666) fep_hwr_top_pane_g3_ParamLimits

0xfb21,	// (0x0006449d) fep_hwr_top_pane_g_ParamLimits

0x7cff,	// (0x0005c67b) fep_hwr_top_text_pane_ParamLimits

0xa139,	// (0x0005eab5) aid_touch_tab_arrow_arrow_2

0xa142,	// (0x0005eabe) aid_touch_tab_arrow_left_2

0x7c37,	// (0x0005c5b3) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7c6e,	// (0x0005c5ea) fep_hwr_prediction_pane

0xbc12,	// (0x0006058e) fep_vkb_prediction_pane

0xbd0f,	// (0x0006068b) fep_vkb_side_pane_g3_ParamLimits

0xbd0f,	// (0x0006068b) fep_vkb_side_pane_g3

0x7e7a,	// (0x0005c7f6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7ee6,	// (0x0005c862) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7ef3,	// (0x0005c86f) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd0,	// (0x0006454c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x80f1,	// (0x0005ca6d) fep_hwr_prediction_pane_g1

0x80fb,	// (0x0005ca77) fep_hwr_prediction_pane_g2

0x8103,	// (0x0005ca7f) fep_hwr_prediction_pane_g3

0x810b,	// (0x0005ca87) fep_hwr_prediction_pane_g4

0x0003,

0xfcd3,	// (0x0006464f) fep_hwr_prediction_pane_g

0xcb6c,	// (0x000614e8) fep_vkb_prediction_pane_g1

0xcb76,	// (0x000614f2) fep_vkb_prediction_pane_g2

0xcb7e,	// (0x000614fa) fep_vkb_prediction_pane_g3

0xcb86,	// (0x00061502) fep_vkb_prediction_pane_g4

0x0003,

0xfcdc,	// (0x00064658) fep_vkb_prediction_pane_g

0x79a1,	// (0x0005c31d) slider_set_pane_g3

0x79b5,	// (0x0005c331) slider_set_pane_g4

0x79cd,	// (0x0005c349) slider_set_pane_g5

0x79a1,	// (0x0005c31d) slider_set_pane_g6

0x79e3,	// (0x0005c35f) slider_set_pane_g7

0xa7c5,	// (0x0005f141) slider_form_pane_g3

0xa7ce,	// (0x0005f14a) slider_form_pane_g4

0xa7d6,	// (0x0005f152) slider_form_pane_g5

0xa7c5,	// (0x0005f141) slider_form_pane_g6

0xa7de,	// (0x0005f15a) slider_form_pane_g7

0xaff7,	// (0x0005f973) slider_set_pane_vc_g3

0xb000,	// (0x0005f97c) slider_set_pane_vc_g4

0xb009,	// (0x0005f985) slider_set_pane_vc_g5

0xaff7,	// (0x0005f973) slider_set_pane_vc_g6

0xb012,	// (0x0005f98e) slider_set_pane_vc_g7

0xb1c4,	// (0x0005fb40) slider_form_pane_vc_g1

0xb1cd,	// (0x0005fb49) slider_form_pane_vc_g2

0xb1d6,	// (0x0005fb52) slider_form_pane_vc_g3

0xb1c4,	// (0x0005fb40) slider_form_pane_vc_g4

0xb1df,	// (0x0005fb5b) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x0006441a) slider_form_pane_vc_g

0x5662,	// (0x00059fde) main_idle_act3_pane

0xcb8e,	// (0x0006150a) ai3_links_pane

0xcb97,	// (0x00061513) popup_ai3_data_window_ParamLimits

0xcb97,	// (0x00061513) popup_ai3_data_window

0xed4a,	// (0x000636c6) grid_ai3_links_pane

0xcbaf,	// (0x0006152b) cell_ai3_links_pane_ParamLimits

0xcbaf,	// (0x0006152b) cell_ai3_links_pane

0xcbc7,	// (0x00061543) bg_popup_sub_pane_cp11

0xcbd4,	// (0x00061550) cell_ai3_links_pane_g1

0xed4a,	// (0x000636c6) bg_popup_sub_pane_cp12

0xcbf9,	// (0x00061575) heading_ai3_data_pane

0xcc01,	// (0x0006157d) list_ai3_gene_pane

0xcc0d,	// (0x00061589) popup_ai3_data_window_g1

0xcc15,	// (0x00061591) heading_ai3_data_pane_g1

0xcc1d,	// (0x00061599) heading_ai3_data_pane_t1

0xcc2b,	// (0x000615a7) list_double_ai3_gene_pane_ParamLimits

0xcc2b,	// (0x000615a7) list_double_ai3_gene_pane

0xcc38,	// (0x000615b4) list_single_ai3_gene_pane_ParamLimits

0xcc38,	// (0x000615b4) list_single_ai3_gene_pane

0xba10,	// (0x0006038c) list_highlight_pane_cp7_ParamLimits

0xba10,	// (0x0006038c) list_highlight_pane_cp7

0xcc45,	// (0x000615c1) list_single_a13_gene_pane_t1_ParamLimits

0xcc45,	// (0x000615c1) list_single_a13_gene_pane_t1

0xcc5c,	// (0x000615d8) list_single_ai3_gene_pane_g1

0xcc65,	// (0x000615e1) list_single_ai3_gene_pane_g2

0x0001,

0xfce5,	// (0x00064661) list_single_ai3_gene_pane_g

0xcc6d,	// (0x000615e9) list_double_ai3_gene_pane_g1_ParamLimits

0xcc6d,	// (0x000615e9) list_double_ai3_gene_pane_g1

0xcc79,	// (0x000615f5) list_double_ai3_gene_pane_t1_ParamLimits

0xcc79,	// (0x000615f5) list_double_ai3_gene_pane_t1

0xcc95,	// (0x00061611) list_double_ai3_gene_pane_t2_ParamLimits

0xcc95,	// (0x00061611) list_double_ai3_gene_pane_t2

0xccaa,	// (0x00061626) list_double_ai3_gene_pane_t3_ParamLimits

0xccaa,	// (0x00061626) list_double_ai3_gene_pane_t3

0x0002,

0xfcea,	// (0x00064666) list_double_ai3_gene_pane_t_ParamLimits

0xfcea,	// (0x00064666) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x47dc,	// (0x00059158) aid_size_min_col_2

0xcb58,	// (0x000614d4) aid_size_min_msg_ParamLimits

0xcb58,	// (0x000614d4) aid_size_min_msg

0xbe0f,	// (0x0006078b) fep_vkb_top_text_pane_g2_ParamLimits

0xbe0f,	// (0x0006078b) fep_vkb_top_text_pane_g2

0x0001,

0xfb51,	// (0x000644cd) fep_vkb_top_text_pane_g_ParamLimits

0xfb51,	// (0x000644cd) fep_vkb_top_text_pane_g

0x5662,	// (0x00059fde) main_hc_apps_shell_pane

0xccc7,	// (0x00061643) grid_hc_apps_pane_ParamLimits

0xccc7,	// (0x00061643) grid_hc_apps_pane

0xccd6,	// (0x00061652) list_hc_apps_pane

0xccde,	// (0x0006165a) scroll_pane_cp37_ParamLimits

0xccde,	// (0x0006165a) scroll_pane_cp37

0xccea,	// (0x00061666) cell_hc_apps_pane_ParamLimits

0xccea,	// (0x00061666) cell_hc_apps_pane

0xcd98,	// (0x00061714) cell_hc_apps_pane_g1_ParamLimits

0xcd98,	// (0x00061714) cell_hc_apps_pane_g1

0xcdc9,	// (0x00061745) cell_hc_apps_pane_g2_ParamLimits

0xcdc9,	// (0x00061745) cell_hc_apps_pane_g2

0xcde5,	// (0x00061761) cell_hc_apps_pane_g3_ParamLimits

0xcde5,	// (0x00061761) cell_hc_apps_pane_g3

0x0002,

0xfcf1,	// (0x0006466d) cell_hc_apps_pane_g_ParamLimits

0xfcf1,	// (0x0006466d) cell_hc_apps_pane_g

0xce07,	// (0x00061783) cell_hc_apps_pane_t1_ParamLimits

0xce07,	// (0x00061783) cell_hc_apps_pane_t1

0xeee4,	// (0x00063860) grid_highlight_pane_cp10_ParamLimits

0xeee4,	// (0x00063860) grid_highlight_pane_cp10

0xce47,	// (0x000617c3) list_single_hc_apps_pane_ParamLimits

0xce47,	// (0x000617c3) list_single_hc_apps_pane

0xceaa,	// (0x00061826) list_single_hc_apps_pane_g1

0xaf57,	// (0x0005f8d3) list_single_hc_apps_pane_g2

0x0001,

0xfcf8,	// (0x00064674) list_single_hc_apps_pane_g

0xaf70,	// (0x0005f8ec) list_single_hc_apps_pane_g2_copy1

0x8113,	// (0x0005ca8f) list_single_hc_apps_pane_t1

0xedac,	// (0x00063728) bg_set_opt_pane_cp_ParamLimits

0x597b,	// (0x0005a2f7) setting_slider_pane_t1_ParamLimits

0x5994,	// (0x0005a310) setting_slider_pane_t2_ParamLimits

0x59ae,	// (0x0005a32a) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00063eda) setting_slider_pane_t_ParamLimits

0x59c6,	// (0x0005a342) slider_set_pane_ParamLimits

0x6f6a,	// (0x0005b8e6) control_pane_g5_ParamLimits

0x6f6a,	// (0x0005b8e6) control_pane_g5

0xa618,	// (0x0005ef94) slider_set_pane_g1_ParamLimits

0x7995,	// (0x0005c311) slider_set_pane_g2_ParamLimits

0x79a1,	// (0x0005c31d) slider_set_pane_g3_ParamLimits

0x79b5,	// (0x0005c331) slider_set_pane_g4_ParamLimits

0x79cd,	// (0x0005c349) slider_set_pane_g5_ParamLimits

0x79a1,	// (0x0005c31d) slider_set_pane_g6_ParamLimits

0x79e3,	// (0x0005c35f) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x000642db) slider_set_pane_g_ParamLimits

0x37d4,	// (0x00058150) navi_icon_text_pane_ParamLimits

0x8dbc,	// (0x0005d738) aid_fill_nsta_2_ParamLimits

0x8dfb,	// (0x0005d777) aid_touch_tab_arrow_left_ParamLimits

0x8e0a,	// (0x0005d786) aid_touch_tab_arrow_right_ParamLimits

0x8e77,	// (0x0005d7f3) clock_nsta_pane_ParamLimits

0xa11b,	// (0x0005ea97) navi_icon_pane_g1_ParamLimits

0xa127,	// (0x0005eaa3) navi_text_pane_t1_ParamLimits

0xb5f0,	// (0x0005ff6c) navi_icon_text_pane_g1_ParamLimits

0xb5fc,	// (0x0005ff78) navi_icon_text_pane_t1_ParamLimits

0xceaa,	// (0x00061826) list_single_hc_apps_pane_g1_ParamLimits

0xaf57,	// (0x0005f8d3) list_single_hc_apps_pane_g2_ParamLimits

0xfcf8,	// (0x00064674) list_single_hc_apps_pane_g_ParamLimits

0xaf70,	// (0x0005f8ec) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8113,	// (0x0005ca8f) list_single_hc_apps_pane_t1_ParamLimits

0x57bf,	// (0x0005a13b) popup_toolbar2_fixed_window_ParamLimits

0x57bf,	// (0x0005a13b) popup_toolbar2_fixed_window

0x7577,	// (0x0005bef3) popup_toolbar2_float_window

0xed4a,	// (0x000636c6) bg_popup_sub_pane_cp27

0xcec3,	// (0x0006183f) grid_toolbar2_float_pane

0xed4a,	// (0x000636c6) bg_popup_sub_pane_cp26

0xcec3,	// (0x0006183f) grid_toolbar2_fixed_pane

0xcecb,	// (0x00061847) cell_toolbar2_fixed_pane_ParamLimits

0xcecb,	// (0x00061847) cell_toolbar2_fixed_pane

0xcedb,	// (0x00061857) cell_toolbar2_fixed_pane_g1

0x7449,	// (0x0005bdc5) toolbar2_fixed_button_pane

0x9291,	// (0x0005dc0d) toolbar2_fixed_button_pane_g1

0x92a1,	// (0x0005dc1d) toolbar2_fixed_button_pane_g2

0x9299,	// (0x0005dc15) toolbar2_fixed_button_pane_g3

0x92b1,	// (0x0005dc2d) toolbar2_fixed_button_pane_g4

0x92a9,	// (0x0005dc25) toolbar2_fixed_button_pane_g5

0x92b9,	// (0x0005dc35) toolbar2_fixed_button_pane_g6

0x92c1,	// (0x0005dc3d) toolbar2_fixed_button_pane_g7

0x92d1,	// (0x0005dc4d) toolbar2_fixed_button_pane_g8

0x92c9,	// (0x0005dc45) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x000641dd) toolbar2_fixed_button_pane_g

0xcee4,	// (0x00061860) cell_toolbar2_float_pane_ParamLimits

0xcee4,	// (0x00061860) cell_toolbar2_float_pane

0xcef5,	// (0x00061871) cell_toolbar2_float_pane_g1

0x7449,	// (0x0005bdc5) toolbar2_fixed_button_pane_cp

0xbb79,	// (0x000604f5) fep_vkb_accented_list_pane_ParamLimits

0xbb79,	// (0x000604f5) fep_vkb_accented_list_pane

0x7e5a,	// (0x0005c7d6) bg_popup_fep_shadow_pane_g9

0x3926,	// (0x000582a2) bg_popup_fep_shadow_pane_cp3

0xf272,	// (0x00063bee) list_accented_list_pane

0xcefe,	// (0x0006187a) list_single_accented_list_pane_ParamLimits

0xcefe,	// (0x0006187a) list_single_accented_list_pane

0x3926,	// (0x000582a2) list_highlight_pane_cp10

0xcf0f,	// (0x0006188b) list_single_accented_list_pane_t1

0x74c7,	// (0x0005be43) popup_slider_window_ParamLimits

0x74c7,	// (0x0005be43) popup_slider_window

0xcb4f,	// (0x000614cb) aid_indentation_list_msg

0xcfcd,	// (0x00061949) bg_popup_window_pane_cp19

0xd035,	// (0x000619b1) popup_slider_window_g1

0xd051,	// (0x000619cd) popup_slider_window_g2

0xd06d,	// (0x000619e9) popup_slider_window_g3

0x0005,

0xfcfd,	// (0x00064679) popup_slider_window_g

0xd0d3,	// (0x00061a4f) popup_slider_window_t1

0xd147,	// (0x00061ac3) small_volume_slider_vertical_pane

0xba4b,	// (0x000603c7) small_volume_slider_vertical_pane_g1

0xba4b,	// (0x000603c7) small_volume_slider_vertical_pane_g2

0xd163,	// (0x00061adf) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0f,	// (0x0006468b) small_volume_slider_vertical_pane_g

0x5585,	// (0x00059f01) area_side_right_pane_ParamLimits

0x5585,	// (0x00059f01) area_side_right_pane

0x8141,	// (0x0005cabd) aid_size_side_button_ParamLimits

0x8141,	// (0x0005cabd) aid_size_side_button

0x8155,	// (0x0005cad1) grid_sctrl_middle_pane_ParamLimits

0x8155,	// (0x0005cad1) grid_sctrl_middle_pane

0x8174,	// (0x0005caf0) sctrl_sk_bottom_pane

0x8185,	// (0x0005cb01) sctrl_sk_top_pane

0x8197,	// (0x0005cb13) aid_touch_sctrl_top

0x81a4,	// (0x0005cb20) bg_sctrl_sk_pane_ParamLimits

0x81a4,	// (0x0005cb20) bg_sctrl_sk_pane

0x81b2,	// (0x0005cb2e) sctrl_sk_top_pane_g1

0x81bf,	// (0x0005cb3b) sctrl_sk_top_pane_t1

0x8197,	// (0x0005cb13) aid_touch_sctrl_bottom

0x81a4,	// (0x0005cb20) bg_sctrl_sk_pane_cp_ParamLimits

0x81a4,	// (0x0005cb20) bg_sctrl_sk_pane_cp

0x81da,	// (0x0005cb56) sctrl_sk_bottom_pane_g1

0x81bf,	// (0x0005cb3b) sctrl_sk_bottom_pane_t1

0x81e3,	// (0x0005cb5f) cell_sctrl_middle_pane_ParamLimits

0x81e3,	// (0x0005cb5f) cell_sctrl_middle_pane

0x81fe,	// (0x0005cb7a) aid_touch_sctrl_middle_ParamLimits

0x81fe,	// (0x0005cb7a) aid_touch_sctrl_middle

0x8210,	// (0x0005cb8c) bg_sctrl_middle_pane_ParamLimits

0x8210,	// (0x0005cb8c) bg_sctrl_middle_pane

0x7e7a,	// (0x0005c7f6) cell_sctrl_middle_pane_g1_ParamLimits

0x7e7a,	// (0x0005c7f6) cell_sctrl_middle_pane_g1

0x821e,	// (0x0005cb9a) cell_sctrl_middle_pane_g2_ParamLimits

0x821e,	// (0x0005cb9a) cell_sctrl_middle_pane_g2

0x0001,

0xfd1b,	// (0x00064697) cell_sctrl_middle_pane_g_ParamLimits

0xfd1b,	// (0x00064697) cell_sctrl_middle_pane_g

0x9291,	// (0x0005dc0d) bg_sctrl_middle_pane_g1

0x9299,	// (0x0005dc15) bg_sctrl_middle_pane_g2

0x92a1,	// (0x0005dc1d) bg_sctrl_middle_pane_g3

0x92a9,	// (0x0005dc25) bg_sctrl_middle_pane_g4

0x92b1,	// (0x0005dc2d) bg_sctrl_middle_pane_g5

0x92b9,	// (0x0005dc35) bg_sctrl_middle_pane_g6

0x92c1,	// (0x0005dc3d) bg_sctrl_middle_pane_g7

0x92c9,	// (0x0005dc45) bg_sctrl_middle_pane_g8

0x0007,

0xfd20,	// (0x0006469c) bg_sctrl_middle_pane_g

0x92d1,	// (0x0005dc4d) bg_sctrl_middle_pane_g8_copy1

0x9291,	// (0x0005dc0d) bg_sctrl_sk_pane_g1

0x92a1,	// (0x0005dc1d) bg_sctrl_sk_pane_g2

0x9299,	// (0x0005dc15) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x000641dd) bg_sctrl_sk_pane_g

0xf0ae,	// (0x00063a2a) aid_size_touch_scroll_bar

0x92b1,	// (0x0005dc2d) bg_sctrl_sk_pane_g4

0x92a9,	// (0x0005dc25) bg_sctrl_sk_pane_g5

0x92b9,	// (0x0005dc35) bg_sctrl_sk_pane_g6

0x92c1,	// (0x0005dc3d) bg_sctrl_sk_pane_g7

0x92d1,	// (0x0005dc4d) bg_sctrl_sk_pane_g8

0x92c9,	// (0x0005dc45) bg_sctrl_sk_pane_g9

0x7130,	// (0x0005baac) popup_fep_china_hwr2_fs_candidate_window

0x713a,	// (0x0005bab6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x713a,	// (0x0005bab6) popup_fep_china_hwr2_fs_control_window

0x7e7a,	// (0x0005c7f6) sctrl_sk_top_pane_g2

0x0001,

0xfd16,	// (0x00064692) sctrl_sk_top_pane_g

0xd16c,	// (0x00061ae8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd16c,	// (0x00061ae8) aid_fep_china_hwr2_fs_cell

0xd17e,	// (0x00061afa) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd17e,	// (0x00061afa) bg_popup_fep_shadow_pane_cp4

0xd195,	// (0x00061b11) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd195,	// (0x00061b11) bg_popup_fep_shadow_pane_cp5

0xd1a7,	// (0x00061b23) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd1a7,	// (0x00061b23) popup_fep_china_hwr2_fs_control_bar_grid

0xd1b7,	// (0x00061b33) popup_fep_china_hwr2_fs_control_funtion_grid

0xd1bf,	// (0x00061b3b) aid_fep_china_hwr2_fs_candi_cell

0xed4a,	// (0x000636c6) bg_popup_fep_shadow_pane_cp6

0xd1c9,	// (0x00061b45) popup_fep_china_hwr2_fs_candidate_grid

0xd1d3,	// (0x00061b4f) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd1d3,	// (0x00061b4f) cell_fep_china_hwr2_fs_funtion_grid

0xba4b,	// (0x000603c7) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd20c,	// (0x00061b88) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd20c,	// (0x00061b88) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd21a,	// (0x00061b96) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd21a,	// (0x00061b96) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd31,	// (0x000646ad) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd31,	// (0x000646ad) cell_fep_china_hwr2_fs_funtion_grid_g

0xd230,	// (0x00061bac) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd230,	// (0x00061bac) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd245,	// (0x00061bc1) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd245,	// (0x00061bc1) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd36,	// (0x000646b2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd36,	// (0x000646b2) cell_fep_china_hwr2_fs_funtion_grid_t

0xd261,	// (0x00061bdd) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd269,	// (0x00061be5) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd271,	// (0x00061bed) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3b,	// (0x000646b7) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd279,	// (0x00061bf5) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd279,	// (0x00061bf5) cell_fep_china_hwr2_fs_candidate_grid

0xd292,	// (0x00061c0e) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd29a,	// (0x00061c16) popup_fep_china_hwr2_fs_candidate_grid_g21

0xba4b,	// (0x000603c7) cell_fep_china_hwr2_fs_candidate_grid_g1

0xba4b,	// (0x000603c7) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb56,	// (0x000644d2) cell_fep_china_hwr2_fs_candidate_grid_g

0xd2a2,	// (0x00061c1e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8e8a,	// (0x0005d806) clock_nsta_pane_cp_24_ParamLimits

0x8e8a,	// (0x0005d806) clock_nsta_pane_cp_24

0x8f08,	// (0x0005d884) indicator_nsta_pane_cp_24_ParamLimits

0x8f08,	// (0x0005d884) indicator_nsta_pane_cp_24

0x9f97,	// (0x0005e913) heading_pane_g1

0x0001,

0xf8c6,	// (0x00064242) heading_pane_g

0xaa2e,	// (0x0005f3aa) grid_sct_catagory_button_pane

0xaa5e,	// (0x0005f3da) scroll_pane_cp5_ParamLimits

0xb63e,	// (0x0005ffba) button_value_adjust_pane_cp5_ParamLimits

0xb63e,	// (0x0005ffba) button_value_adjust_pane_cp5

0xb71d,	// (0x00060099) form2_midp_time_pane_ParamLimits

0xd2b0,	// (0x00061c2c) cell_sct_catagory_button_pane_ParamLimits

0xd2b0,	// (0x00061c2c) cell_sct_catagory_button_pane

0xba10,	// (0x0006038c) bg_button_pane_cp01_ParamLimits

0xba10,	// (0x0006038c) bg_button_pane_cp01

0xba4b,	// (0x000603c7) cell_sct_catagory_button_pane_g1

0x7506,	// (0x0005be82) popup_tb_extension_window

0xd2c2,	// (0x00061c3e) aid_size_cell_ext_ParamLimits

0xd2c2,	// (0x00061c3e) aid_size_cell_ext

0xeee4,	// (0x00063860) bg_tb_trans_pane_cp1_ParamLimits

0xeee4,	// (0x00063860) bg_tb_trans_pane_cp1

0xd2e2,	// (0x00061c5e) grid_tb_ext_pane_ParamLimits

0xd2e2,	// (0x00061c5e) grid_tb_ext_pane

0xd312,	// (0x00061c8e) cell_tb_ext_pane_ParamLimits

0xd312,	// (0x00061c8e) cell_tb_ext_pane

0xd329,	// (0x00061ca5) cell_tb_ext_pane_g1_ParamLimits

0xd329,	// (0x00061ca5) cell_tb_ext_pane_g1

0xd346,	// (0x00061cc2) cell_tb_ext_pane_t1

0xeee4,	// (0x00063860) list_highlight_pane_cp11_ParamLimits

0xeee4,	// (0x00063860) list_highlight_pane_cp11

0x57de,	// (0x0005a15a) popup_uni_indicator_window_ParamLimits

0x57de,	// (0x0005a15a) popup_uni_indicator_window

0xf16c,	// (0x00063ae8) bg_popup_sub_pane_cp14

0xd362,	// (0x00061cde) list_uniindi_pane

0xd36e,	// (0x00061cea) uniindi_top_pane

0xeee4,	// (0x00063860) bg_uniindi_top_pane

0xd38d,	// (0x00061d09) uniindi_top_pane_g1

0xd3a3,	// (0x00061d1f) uniindi_top_pane_g2

0x0003,

0xfd42,	// (0x000646be) uniindi_top_pane_g

0xd3cd,	// (0x00061d49) uniindi_top_pane_t1

0xd3f7,	// (0x00061d73) list_single_uniindi_pane_ParamLimits

0xd3f7,	// (0x00061d73) list_single_uniindi_pane

0xba4b,	// (0x000603c7) bg_uniindi_top_pane_g1

0xd409,	// (0x00061d85) list_single_uniindi_pane_g1

0xd41c,	// (0x00061d98) list_single_uniindi_pane_t1

0x5662,	// (0x00059fde) control_bg_pane

0xd441,	// (0x00061dbd) bg_sctrl_sk_pane_cp1

0xd44a,	// (0x00061dc6) bg_sctrl_sk_pane_cp2

0xd453,	// (0x00061dcf) control_bg_pane_g1

0xd45c,	// (0x00061dd8) control_bg_pane_g2

0x0001,

0xfd4b,	// (0x000646c7) control_bg_pane_g

0xb494,	// (0x0005fe10) cell_indicator_nsta_pane_g1_ParamLimits

0xb4a2,	// (0x0005fe1e) cell_indicator_nsta_pane_g2_ParamLimits

0xfaba,	// (0x00064436) cell_indicator_nsta_pane_g_ParamLimits

0x4668,	// (0x00058fe4) form2_midp_time_pane_t1_ParamLimits

0x709a,	// (0x0005ba16) main_idle_act4_pane_ParamLimits

0x709a,	// (0x0005ba16) main_idle_act4_pane

0x7506,	// (0x0005be82) popup_tb_extension_window_ParamLimits

0xd302,	// (0x00061c7e) tb_ext_find_pane_ParamLimits

0xd302,	// (0x00061c7e) tb_ext_find_pane

0xd465,	// (0x00061de1) ai_gene_pane_1_cp1

0x39a7,	// (0x00058323) ai_gene_pane_2_cp1

0xd46d,	// (0x00061de9) list_single_idle_plugin_calendar_pane

0xd476,	// (0x00061df2) list_single_idle_plugin_notification_pane

0xd47f,	// (0x00061dfb) list_single_idle_plugin_player_pane

0xd488,	// (0x00061e04) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd488,	// (0x00061e04) list_single_idle_plugin_shortcut_pane

0xd4aa,	// (0x00061e26) main_idle_act4_pane_t1

0xd4bc,	// (0x00061e38) main_idle_act4_pane_t2

0x0001,

0xfd50,	// (0x000646cc) main_idle_act4_pane_t

0xd4ce,	// (0x00061e4a) middle_sk_idle_act4_pane_ParamLimits

0xd4ce,	// (0x00061e4a) middle_sk_idle_act4_pane

0xd4e4,	// (0x00061e60) popup_clock_digital_analogue_window_cp2

0xd4fe,	// (0x00061e7a) shortcut_wheel_idle_act4_pane_ParamLimits

0xd4fe,	// (0x00061e7a) shortcut_wheel_idle_act4_pane

0xba4b,	// (0x000603c7) shortcut_wheel_idle_act4_pane_g1

0xba4b,	// (0x000603c7) shortcut_wheel_idle_act4_pane_g2

0xba4b,	// (0x000603c7) shortcut_wheel_idle_act4_pane_g3

0xba4b,	// (0x000603c7) shortcut_wheel_idle_act4_pane_g4

0xba4b,	// (0x000603c7) shortcut_wheel_idle_act4_pane_g5

0xd512,	// (0x00061e8e) shortcut_wheel_idle_act4_pane_g6

0xd51a,	// (0x00061e96) shortcut_wheel_idle_act4_pane_g7

0xd522,	// (0x00061e9e) shortcut_wheel_idle_act4_pane_g8

0xd52a,	// (0x00061ea6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd55,	// (0x000646d1) shortcut_wheel_idle_act4_pane_g

0xbcbb,	// (0x00060637) middle_sk_idle_act4_pane_g1_ParamLimits

0xbcbb,	// (0x00060637) middle_sk_idle_act4_pane_g1

0xd58e,	// (0x00061f0a) middle_sk_idle_act4_pane_g2_ParamLimits

0xd58e,	// (0x00061f0a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd78,	// (0x000646f4) middle_sk_idle_act4_pane_g_ParamLimits

0xfd78,	// (0x000646f4) middle_sk_idle_act4_pane_g

0xd59a,	// (0x00061f16) middle_sk_idle_act4_pane_t1_ParamLimits

0xd59a,	// (0x00061f16) middle_sk_idle_act4_pane_t1

0xd5b7,	// (0x00061f33) grid_ai_shortcut_pane_ParamLimits

0xd5b7,	// (0x00061f33) grid_ai_shortcut_pane

0xd5d0,	// (0x00061f4c) list_highlight_pane_cp16_ParamLimits

0xd5d0,	// (0x00061f4c) list_highlight_pane_cp16

0xd5dd,	// (0x00061f59) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd5dd,	// (0x00061f59) list_single_idle_plugin_shortcut_pane_g1

0xd5e9,	// (0x00061f65) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd5e9,	// (0x00061f65) list_single_idle_plugin_shortcut_pane_g2

0xd601,	// (0x00061f7d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd601,	// (0x00061f7d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7d,	// (0x000646f9) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7d,	// (0x000646f9) list_single_idle_plugin_shortcut_pane_g

0xd614,	// (0x00061f90) cell_ai_shortcut_pane_ParamLimits

0xd614,	// (0x00061f90) cell_ai_shortcut_pane

0xd638,	// (0x00061fb4) cell_ai_shortcut_pane_g1_ParamLimits

0xd638,	// (0x00061fb4) cell_ai_shortcut_pane_g1

0xd465,	// (0x00061de1) ai_gene_pane_1_cp2

0xd65a,	// (0x00061fd6) ai_gene_pane_2_cp2

0xd662,	// (0x00061fde) list_highlight_pane_cp15

0xd66b,	// (0x00061fe7) list_single_idle_plugin_calendar_pane_g1

0xd662,	// (0x00061fde) list_highlight_pane_cp17

0xd673,	// (0x00061fef) list_single_idle_plugin_calendar_pane_g1_copy1

0xd67b,	// (0x00061ff7) list_single_idle_plugin_player_pane_g1

0xac87,	// (0x0005f603) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd84,	// (0x00064700) list_single_idle_plugin_player_pane_g

0xd683,	// (0x00061fff) list_single_idle_plugin_player_pane_t1

0xd691,	// (0x0006200d) list_single_idle_plugin_player_pane_t2

0xd69f,	// (0x0006201b) list_single_idle_plugin_player_pane_t3

0xd6ad,	// (0x00062029) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd89,	// (0x00064705) list_single_idle_plugin_player_pane_t

0xd6bb,	// (0x00062037) wait_bar_pane_cp15

0xd6c3,	// (0x0006203f) grid_ai_notification_pane

0xac87,	// (0x0005f603) list_single_idle_plugin_notification_pane_g1

0xd6cc,	// (0x00062048) cell_ai_notification_pane_ParamLimits

0xd6cc,	// (0x00062048) cell_ai_notification_pane

0xd6d9,	// (0x00062055) cell_ai_notification_pane_g1

0xd6e1,	// (0x0006205d) cell_ai_notification_pane_t1

0xd6ef,	// (0x0006206b) tb_ext_find_button_pane

0xd6f7,	// (0x00062073) tb_ext_find_pane_g1

0xd6ff,	// (0x0006207b) tb_ext_find_pane_t1

0x1301,	// (0x00055c7d) tb_ext_find_button_pane_g1

0xd70d,	// (0x00062089) tb_ext_find_button_pane_g2

0x0001,

0xfd92,	// (0x0006470e) tb_ext_find_button_pane_g

0xd4aa,	// (0x00061e26) main_idle_act4_pane_t1_ParamLimits

0xd4bc,	// (0x00061e38) main_idle_act4_pane_t2_ParamLimits

0xfd50,	// (0x000646cc) main_idle_act4_pane_t_ParamLimits

0xd4e4,	// (0x00061e60) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd4f2,	// (0x00061e6e) sat_plugin_idle_act4_pane_ParamLimits

0xd4f2,	// (0x00061e6e) sat_plugin_idle_act4_pane

0xd716,	// (0x00062092) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd716,	// (0x00062092) sat_plugin_idle_act4_pane_t1

0xd729,	// (0x000620a5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd729,	// (0x000620a5) sat_plugin_idle_act4_pane_t2

0xd73c,	// (0x000620b8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd73c,	// (0x000620b8) sat_plugin_idle_act4_pane_t3

0xd74f,	// (0x000620cb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd74f,	// (0x000620cb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd97,	// (0x00064713) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd97,	// (0x00064713) sat_plugin_idle_act4_pane_t

0x5727,	// (0x0005a0a3) popup_battery_window_ParamLimits

0x5727,	// (0x0005a0a3) popup_battery_window

0xeee4,	// (0x00063860) bg_popup_sub_pane_cp25_ParamLimits

0xeee4,	// (0x00063860) bg_popup_sub_pane_cp25

0xd762,	// (0x000620de) popup_battery_window_g1_ParamLimits

0xd762,	// (0x000620de) popup_battery_window_g1

0xd76e,	// (0x000620ea) popup_battery_window_t1_ParamLimits

0xd76e,	// (0x000620ea) popup_battery_window_t1

0xd780,	// (0x000620fc) popup_battery_window_t2_ParamLimits

0xd780,	// (0x000620fc) popup_battery_window_t2

0x0001,

0xfda0,	// (0x0006471c) popup_battery_window_t_ParamLimits

0xfda0,	// (0x0006471c) popup_battery_window_t

0x6cd0,	// (0x0005b64c) midp_canvas_pane_ParamLimits

0x6d49,	// (0x0005b6c5) midp_keypad_pane_ParamLimits

0x6d49,	// (0x0005b6c5) midp_keypad_pane

0x8d6a,	// (0x0005d6e6) main_midp_pane_ParamLimits

0xb4fe,	// (0x0005fe7a) signal_pane_g2_cp_ParamLimits

0xd79d,	// (0x00062119) aid_size_cell_midp_keypad_ParamLimits

0xd79d,	// (0x00062119) aid_size_cell_midp_keypad

0xd7b7,	// (0x00062133) midp_keyp_game_grid_pane_ParamLimits

0xd7b7,	// (0x00062133) midp_keyp_game_grid_pane

0xd7d7,	// (0x00062153) midp_keyp_rocker_pane_ParamLimits

0xd7d7,	// (0x00062153) midp_keyp_rocker_pane

0xd810,	// (0x0006218c) midp_keyp_sk_left_pane_ParamLimits

0xd810,	// (0x0006218c) midp_keyp_sk_left_pane

0xd86a,	// (0x000621e6) midp_keyp_sk_right_pane_ParamLimits

0xd86a,	// (0x000621e6) midp_keyp_sk_right_pane

0xed4a,	// (0x000636c6) bg_button_pane_cp03

0xd8c4,	// (0x00062240) midp_keyp_sk_left_pane_g1

0xed4a,	// (0x000636c6) bg_button_pane_cp04

0xd8c4,	// (0x00062240) midp_keyp_sk_right_pane_g1

0xba4b,	// (0x000603c7) midp_keyp_rocker_pane_g1

0xd8cd,	// (0x00062249) keyp_game_cell_pane_ParamLimits

0xd8cd,	// (0x00062249) keyp_game_cell_pane

0xed4a,	// (0x000636c6) bg_button_pane_cp02

0xd8e0,	// (0x0006225c) keyp_game_cell_pane_g1

0x575d,	// (0x0005a0d9) popup_fep_vkb2_window_ParamLimits

0x575d,	// (0x0005a0d9) popup_fep_vkb2_window

0x823c,	// (0x0005cbb8) aid_size_cell_vkb2_ParamLimits

0x823c,	// (0x0005cbb8) aid_size_cell_vkb2

0x8290,	// (0x0005cc0c) popup_fep_vkb2_window_g1_ParamLimits

0x8290,	// (0x0005cc0c) popup_fep_vkb2_window_g1

0x82d8,	// (0x0005cc54) vkb2_area_bottom_pane_ParamLimits

0x82d8,	// (0x0005cc54) vkb2_area_bottom_pane

0x8324,	// (0x0005cca0) vkb2_area_keypad_pane_ParamLimits

0x8324,	// (0x0005cca0) vkb2_area_keypad_pane

0x8366,	// (0x0005cce2) vkb2_area_top_pane_ParamLimits

0x8366,	// (0x0005cce2) vkb2_area_top_pane

0x83e0,	// (0x0005cd5c) vkb2_top_entry_pane_ParamLimits

0x83e0,	// (0x0005cd5c) vkb2_top_entry_pane

0x840a,	// (0x0005cd86) vkb2_top_grid_left_pane_ParamLimits

0x840a,	// (0x0005cd86) vkb2_top_grid_left_pane

0x8428,	// (0x0005cda4) vkb2_top_grid_right_pane_ParamLimits

0x8428,	// (0x0005cda4) vkb2_top_grid_right_pane

0x8446,	// (0x0005cdc2) vkb2_cell_keypad_pane_ParamLimits

0x8446,	// (0x0005cdc2) vkb2_cell_keypad_pane

0x8517,	// (0x0005ce93) vkb2_area_bottom_grid_pane_ParamLimits

0x8517,	// (0x0005ce93) vkb2_area_bottom_grid_pane

0x853d,	// (0x0005ceb9) vkb2_area_bottom_pane_g1_ParamLimits

0x853d,	// (0x0005ceb9) vkb2_area_bottom_pane_g1

0x8561,	// (0x0005cedd) vkb2_area_bottom_pane_g2_ParamLimits

0x8561,	// (0x0005cedd) vkb2_area_bottom_pane_g2

0x858f,	// (0x0005cf0b) vkb2_area_bottom_pane_g3_ParamLimits

0x858f,	// (0x0005cf0b) vkb2_area_bottom_pane_g3

0x0002,

0xfda5,	// (0x00064721) vkb2_area_bottom_pane_g_ParamLimits

0xfda5,	// (0x00064721) vkb2_area_bottom_pane_g

0x85f0,	// (0x0005cf6c) vkb2_top_cell_left_pane_ParamLimits

0x85f0,	// (0x0005cf6c) vkb2_top_cell_left_pane

0xd8f1,	// (0x0006226d) vkb2_top_entry_pane_g1_ParamLimits

0xd8f1,	// (0x0006226d) vkb2_top_entry_pane_g1

0xd8ff,	// (0x0006227b) vkb2_top_entry_pane_t1_ParamLimits

0xd8ff,	// (0x0006227b) vkb2_top_entry_pane_t1

0xd931,	// (0x000622ad) vkb2_top_entry_pane_t2_ParamLimits

0xd931,	// (0x000622ad) vkb2_top_entry_pane_t2

0xd963,	// (0x000622df) vkb2_top_entry_pane_t3_ParamLimits

0xd963,	// (0x000622df) vkb2_top_entry_pane_t3

0x0002,

0xfdac,	// (0x00064728) vkb2_top_entry_pane_t_ParamLimits

0xfdac,	// (0x00064728) vkb2_top_entry_pane_t

0x863d,	// (0x0005cfb9) vkb2_top_grid_right_pane_g1_ParamLimits

0x863d,	// (0x0005cfb9) vkb2_top_grid_right_pane_g1

0x8653,	// (0x0005cfcf) vkb2_top_grid_right_pane_g2_ParamLimits

0x8653,	// (0x0005cfcf) vkb2_top_grid_right_pane_g2

0x866b,	// (0x0005cfe7) vkb2_top_grid_right_pane_g3_ParamLimits

0x866b,	// (0x0005cfe7) vkb2_top_grid_right_pane_g3

0x8683,	// (0x0005cfff) vkb2_top_grid_right_pane_g4_ParamLimits

0x8683,	// (0x0005cfff) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb3,	// (0x0006472f) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb3,	// (0x0006472f) vkb2_top_grid_right_pane_g

0x8699,	// (0x0005d015) vkb2_top_cell_left_pane_g1

0x86b0,	// (0x0005d02c) vkb2_cell_keypad_pane_g1_ParamLimits

0x86b0,	// (0x0005d02c) vkb2_cell_keypad_pane_g1

0xd987,	// (0x00062303) vkb2_cell_keypad_pane_t1_ParamLimits

0xd987,	// (0x00062303) vkb2_cell_keypad_pane_t1

0x86be,	// (0x0005d03a) vkb2_cell_bottom_grid_pane_ParamLimits

0x86be,	// (0x0005d03a) vkb2_cell_bottom_grid_pane

0x86f7,	// (0x0005d073) vkb2_cell_bottom_grid_pane_g1

0xd532,	// (0x00061eae) aid_call2_pane_cp02

0xd53a,	// (0x00061eb6) aid_call_pane_cp02

0xd542,	// (0x00061ebe) clock_digital_number_pane_cp10

0xd54a,	// (0x00061ec6) clock_digital_number_pane_cp11

0xd552,	// (0x00061ece) clock_digital_number_pane_cp12

0xd55a,	// (0x00061ed6) clock_digital_number_pane_cp13

0xd562,	// (0x00061ede) clock_digital_separator_pane_cp10

0x1301,	// (0x00055c7d) popup_clock_digital_analogue_window_cp2_g1

0x1301,	// (0x00055c7d) popup_clock_digital_analogue_window_cp2_g2

0xd56a,	// (0x00061ee6) popup_clock_digital_analogue_window_cp2_g3

0x1301,	// (0x00055c7d) popup_clock_digital_analogue_window_cp2_g4

0xd56a,	// (0x00061ee6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd68,	// (0x000646e4) popup_clock_digital_analogue_window_cp2_g

0xd572,	// (0x00061eee) popup_clock_digital_analogue_window_cp2_t1

0xd580,	// (0x00061efc) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd73,	// (0x000646ef) popup_clock_digital_analogue_window_cp2_t

0xba4b,	// (0x000603c7) clock_digital_number_pane_cp10_g1

0xba4b,	// (0x000603c7) clock_digital_number_pane_cp10_g2

0x0001,

0xfb56,	// (0x000644d2) clock_digital_number_pane_cp10_g

0xba4b,	// (0x000603c7) clock_digital_separator_pane_cp10_g1

0xba4b,	// (0x000603c7) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb56,	// (0x000644d2) clock_digital_separator_pane_cp10_g

0xd3af,	// (0x00061d2b) uniindi_top_pane_g3

0xd3c0,	// (0x00061d3c) uniindi_top_pane_g4

0x84d1,	// (0x0005ce4d) vkb2_row_keypad_pane_ParamLimits

0x84d1,	// (0x0005ce4d) vkb2_row_keypad_pane

0x8713,	// (0x0005d08f) vkb2_cell_t_keypad_pane_ParamLimits

0x8713,	// (0x0005d08f) vkb2_cell_t_keypad_pane

0x8723,	// (0x0005d09f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8723,	// (0x0005d09f) vkb2_cell_t_keypad_pane_cp08

0x8736,	// (0x0005d0b2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8736,	// (0x0005d0b2) vkb2_cell_t_keypad_pane_cp09

0x874a,	// (0x0005d0c6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x874a,	// (0x0005d0c6) vkb2_cell_t_keypad_pane_cp01

0x875b,	// (0x0005d0d7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x875b,	// (0x0005d0d7) vkb2_cell_t_keypad_pane_cp02

0x876c,	// (0x0005d0e8) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x876c,	// (0x0005d0e8) vkb2_cell_t_keypad_pane_cp03

0x877d,	// (0x0005d0f9) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x877d,	// (0x0005d0f9) vkb2_cell_t_keypad_pane_cp04

0x878e,	// (0x0005d10a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x878e,	// (0x0005d10a) vkb2_cell_t_keypad_pane_cp05

0x879f,	// (0x0005d11b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x879f,	// (0x0005d11b) vkb2_cell_t_keypad_pane_cp06

0x87b0,	// (0x0005d12c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x87b0,	// (0x0005d12c) vkb2_cell_t_keypad_pane_cp07

0x87c1,	// (0x0005d13d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x87c1,	// (0x0005d13d) vkb2_cell_t_keypad_pane_cp10

0x7e7a,	// (0x0005c7f6) vkb2_cell_t_keypad_pane_g1

0xd99e,	// (0x0006231a) vkb2_cell_t_keypad_pane_t1

0x5662,	// (0x00059fde) popup_grid_graphic2_window

0xd9b0,	// (0x0006232c) aid_size_cell_graphic2_ParamLimits

0xd9b0,	// (0x0006232c) aid_size_cell_graphic2

0xd9e8,	// (0x00062364) bg_popup_window_pane_cp21_ParamLimits

0xd9e8,	// (0x00062364) bg_popup_window_pane_cp21

0xd9f6,	// (0x00062372) graphic2_pages_pane_ParamLimits

0xd9f6,	// (0x00062372) graphic2_pages_pane

0xda3c,	// (0x000623b8) grid_graphic2_control_pane_ParamLimits

0xda3c,	// (0x000623b8) grid_graphic2_control_pane

0xda7a,	// (0x000623f6) grid_graphic2_pane_ParamLimits

0xda7a,	// (0x000623f6) grid_graphic2_pane

0xdaee,	// (0x0006246a) cell_graphic2_pane

0x5662,	// (0x00059fde) main_comp_mode_pane

0xcc01,	// (0x0006157d) list_ai3_gene_pane_ParamLimits

0xcfcd,	// (0x00061949) bg_popup_window_pane_cp19_ParamLimits

0xcfd9,	// (0x00061955) bg_touch_area_indi_pane_ParamLimits

0xcfd9,	// (0x00061955) bg_touch_area_indi_pane

0xcfef,	// (0x0006196b) bg_touch_area_indi_pane_cp01_ParamLimits

0xcfef,	// (0x0006196b) bg_touch_area_indi_pane_cp01

0xd005,	// (0x00061981) bg_touch_area_indi_pane_cp02_ParamLimits

0xd005,	// (0x00061981) bg_touch_area_indi_pane_cp02

0xd01b,	// (0x00061997) bg_touch_area_indi_pane_cp03_ParamLimits

0xd01b,	// (0x00061997) bg_touch_area_indi_pane_cp03

0xd035,	// (0x000619b1) popup_slider_window_g1_ParamLimits

0xd051,	// (0x000619cd) popup_slider_window_g2_ParamLimits

0xd06d,	// (0x000619e9) popup_slider_window_g3_ParamLimits

0xfcfd,	// (0x00064679) popup_slider_window_g_ParamLimits

0xd0d3,	// (0x00061a4f) popup_slider_window_t1_ParamLimits

0xd147,	// (0x00061ac3) small_volume_slider_vertical_pane_ParamLimits

0xdaee,	// (0x0006246a) cell_graphic2_pane_ParamLimits

0xdb3d,	// (0x000624b9) bg_button_pane_cp10_ParamLimits

0xdb3d,	// (0x000624b9) bg_button_pane_cp10

0xdb50,	// (0x000624cc) bg_button_pane_cp11_ParamLimits

0xdb50,	// (0x000624cc) bg_button_pane_cp11

0xdb63,	// (0x000624df) graphic2_pages_pane_g1_ParamLimits

0xdb63,	// (0x000624df) graphic2_pages_pane_g1

0xdb7e,	// (0x000624fa) graphic2_pages_pane_g2_ParamLimits

0xdb7e,	// (0x000624fa) graphic2_pages_pane_g2

0x0001,

0xfdc1,	// (0x0006473d) graphic2_pages_pane_g_ParamLimits

0xfdc1,	// (0x0006473d) graphic2_pages_pane_g

0xdb96,	// (0x00062512) graphic2_pages_pane_t1_ParamLimits

0xdb96,	// (0x00062512) graphic2_pages_pane_t1

0xdbae,	// (0x0006252a) cell_graphic2_control_pane_ParamLimits

0xdbae,	// (0x0006252a) cell_graphic2_control_pane

0xdbcc,	// (0x00062548) cell_graphic2_pane_g1_ParamLimits

0xdbcc,	// (0x00062548) cell_graphic2_pane_g1

0xdbd9,	// (0x00062555) cell_graphic2_pane_g2_ParamLimits

0xdbd9,	// (0x00062555) cell_graphic2_pane_g2

0xdbe6,	// (0x00062562) cell_graphic2_pane_g3_ParamLimits

0xdbe6,	// (0x00062562) cell_graphic2_pane_g3

0xdbf3,	// (0x0006256f) cell_graphic2_pane_g4_ParamLimits

0xdbf3,	// (0x0006256f) cell_graphic2_pane_g4

0xdc00,	// (0x0006257c) cell_graphic2_pane_g5_ParamLimits

0xdc00,	// (0x0006257c) cell_graphic2_pane_g5

0x0004,

0xfdc6,	// (0x00064742) cell_graphic2_pane_g_ParamLimits

0xfdc6,	// (0x00064742) cell_graphic2_pane_g

0xdc1b,	// (0x00062597) cell_graphic2_pane_t1_ParamLimits

0xdc1b,	// (0x00062597) cell_graphic2_pane_t1

0x931d,	// (0x0005dc99) grid_highlight_pane_cp11_ParamLimits

0x931d,	// (0x0005dc99) grid_highlight_pane_cp11

0xeee4,	// (0x00063860) bg_button_pane_cp05

0xdc52,	// (0x000625ce) cell_graphic2_control_pane_g1

0xba4b,	// (0x000603c7) bg_touch_area_indi_pane_g1

0xdc7a,	// (0x000625f6) aid_cmod_rocker_key_size

0xdc84,	// (0x00062600) aid_cmode_itu_key_size

0xdc8e,	// (0x0006260a) main_cmode_video_pane

0xdc98,	// (0x00062614) main_comp_mode_itu_pane

0xdca4,	// (0x00062620) main_comp_mode_rocker_pane

0xdcb0,	// (0x0006262c) cell_cmode_rocker_pane_ParamLimits

0xdcb0,	// (0x0006262c) cell_cmode_rocker_pane

0xdcc2,	// (0x0006263e) cell_cmode_itu_pane_ParamLimits

0xdcc2,	// (0x0006263e) cell_cmode_itu_pane

0xf16c,	// (0x00063ae8) bg_button_pane_cp06_ParamLimits

0xf16c,	// (0x00063ae8) bg_button_pane_cp06

0xbcbb,	// (0x00060637) cell_cmode_rocker_pane_g1_ParamLimits

0xbcbb,	// (0x00060637) cell_cmode_rocker_pane_g1

0xd20c,	// (0x00061b88) cell_cmode_rocker_pane_g2_ParamLimits

0xd20c,	// (0x00061b88) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x00064752) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x00064752) cell_cmode_rocker_pane_g

0xed4a,	// (0x000636c6) bg_button_pane_cp07

0xdcd7,	// (0x00062653) cell_cmode_itu_pane_g1

0xdce0,	// (0x0006265c) cell_cmode_itu_pane_t1

0xdcee,	// (0x0006266a) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x00064757) cell_cmode_itu_pane_t

0xd431,	// (0x00061dad) aid_touch_ctrl_left

0xd439,	// (0x00061db5) aid_touch_ctrl_right

0xed4a,	// (0x000636c6) compa_mode_pane

0xdcfc,	// (0x00062678) aid_cmod_rocker_key_size_cp

0xdd06,	// (0x00062682) aid_cmode_itu_key_size_cp

0xdd10,	// (0x0006268c) compa_mode_pane_g1

0xdd18,	// (0x00062694) compa_mode_pane_g2

0xdd20,	// (0x0006269c) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x0006475c) compa_mode_pane_g

0xdd28,	// (0x000626a4) main_comp_mode_itu_pane_cp

0xdd30,	// (0x000626ac) main_comp_mode_rocker_pane_cp

0xdd38,	// (0x000626b4) cell_cmode_itu_pane_cp_ParamLimits

0xdd38,	// (0x000626b4) cell_cmode_itu_pane_cp

0xdd4d,	// (0x000626c9) cell_cmode_rocker_pane_cp_ParamLimits

0xdd4d,	// (0x000626c9) cell_cmode_rocker_pane_cp

0xf16c,	// (0x00063ae8) bg_button_pane_cp06_cp_ParamLimits

0xf16c,	// (0x00063ae8) bg_button_pane_cp06_cp

0xbcbb,	// (0x00060637) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbcbb,	// (0x00060637) cell_cmode_rocker_pane_g1_cp

0xba4b,	// (0x000603c7) cell_cmode_rocker_pane_g2_cp

0xed4a,	// (0x000636c6) bg_button_pane_cp07_cp

0xdd5f,	// (0x000626db) cell_cmode_itu_pane_g1_cp

0xdd68,	// (0x000626e4) cell_cmode_itu_pane_t1_cp

0xdd68,	// (0x000626e4) cell_cmode_itu_pane_t2_cp

0xa7b2,	// (0x0005f12e) settings_code_pane_cp2

0xedac,	// (0x00063728) bg_popup_window_pane_cp3_ParamLimits

0xeffd,	// (0x00063979) heading_pane_cp3_ParamLimits

0xf009,	// (0x00063985) listscroll_popup_graphic_pane_ParamLimits

0x7c23,	// (0x0005c59f) fep_hwr_aid_pane_ParamLimits

0x8197,	// (0x0005cb13) aid_touch_sctrl_top_ParamLimits

0x81b2,	// (0x0005cb2e) sctrl_sk_top_pane_g1_ParamLimits

0x7e7a,	// (0x0005c7f6) sctrl_sk_top_pane_g2_ParamLimits

0xfd16,	// (0x00064692) sctrl_sk_top_pane_g_ParamLimits

0x81bf,	// (0x0005cb3b) sctrl_sk_top_pane_t1_ParamLimits

0x8197,	// (0x0005cb13) aid_touch_sctrl_bottom_ParamLimits

0x81bf,	// (0x0005cb3b) sctrl_sk_bottom_pane_t1_ParamLimits

0xd37b,	// (0x00061cf7) aid_area_touch_clock

0x83a8,	// (0x0005cd24) aid_vkb2_area_top_pane_cell_ParamLimits

0x83a8,	// (0x0005cd24) aid_vkb2_area_top_pane_cell

0x84f3,	// (0x0005ce6f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x84f3,	// (0x0005ce6f) aid_vkb2_area_bottom_pane_cell

0xd8e9,	// (0x00062265) popup_char_count_window

0xdd76,	// (0x000626f2) popup_char_count_window_g1

0xdd7f,	// (0x000626fb) popup_char_count_window_g2

0xdd88,	// (0x00062704) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x00064763) popup_char_count_window_g

0xdd91,	// (0x0006270d) popup_char_count_window_t1

0x826e,	// (0x0005cbea) popup_fep_char_preview_window_ParamLimits

0x826e,	// (0x0005cbea) popup_fep_char_preview_window

0x83c6,	// (0x0005cd42) vkb2_top_candi_pane_ParamLimits

0x83c6,	// (0x0005cd42) vkb2_top_candi_pane

0xdd9f,	// (0x0006271b) cell_vkb2_top_candi_pane_ParamLimits

0xdd9f,	// (0x0006271b) cell_vkb2_top_candi_pane

0x87d6,	// (0x0005d152) bg_popup_fep_char_preview_window_ParamLimits

0x87d6,	// (0x0005d152) bg_popup_fep_char_preview_window

0x87e4,	// (0x0005d160) popup_fep_char_preview_window_t1_ParamLimits

0x87e4,	// (0x0005d160) popup_fep_char_preview_window_t1

0xddec,	// (0x00062768) bg_popup_fep_char_preview_window_g1

0xddf4,	// (0x00062770) bg_popup_fep_char_preview_window_g2

0xddfc,	// (0x00062778) bg_popup_fep_char_preview_window_g3

0xde04,	// (0x00062780) bg_popup_fep_char_preview_window_g4

0xde0c,	// (0x00062788) bg_popup_fep_char_preview_window_g5

0x881e,	// (0x0005d19a) bg_popup_fep_char_preview_window_g6

0xde14,	// (0x00062790) bg_popup_fep_char_preview_window_g7

0xde1c,	// (0x00062798) bg_popup_fep_char_preview_window_g8

0xde24,	// (0x000627a0) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x0006476a) bg_popup_fep_char_preview_window_g

0x7e7a,	// (0x0005c7f6) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7e7a,	// (0x0005c7f6) cell_vkb2_top_candi_pane_g1

0x7e88,	// (0x0005c804) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7e88,	// (0x0005c804) cell_vkb2_top_candi_pane_g2

0xd1eb,	// (0x00061b67) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd1eb,	// (0x00061b67) cell_vkb2_top_candi_pane_g3

0x8826,	// (0x0005d1a2) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8826,	// (0x0005d1a2) cell_vkb2_top_candi_pane_g4

0xc1bb,	// (0x00060b37) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc1bb,	// (0x00060b37) cell_vkb2_top_candi_pane_g5

0x8847,	// (0x0005d1c3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8847,	// (0x0005d1c3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x0006477d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x0006477d) cell_vkb2_top_candi_pane_g

0x8855,	// (0x0005d1d1) cell_vkb2_top_candi_pane_t1

0x7981,	// (0x0005c2fd) aid_size_touch_slider_mark_ParamLimits

0x7981,	// (0x0005c2fd) aid_size_touch_slider_mark

0xda2c,	// (0x000623a8) grid_graphic2_catg_pane_ParamLimits

0xda2c,	// (0x000623a8) grid_graphic2_catg_pane

0xdaca,	// (0x00062446) popup_grid_graphic2_window_t1_ParamLimits

0xdaca,	// (0x00062446) popup_grid_graphic2_window_t1

0xdadc,	// (0x00062458) popup_grid_graphic2_window_t2_ParamLimits

0xdadc,	// (0x00062458) popup_grid_graphic2_window_t2

0x0001,

0xfdbc,	// (0x00064738) popup_grid_graphic2_window_t_ParamLimits

0xfdbc,	// (0x00064738) popup_grid_graphic2_window_t

0xeee4,	// (0x00063860) bg_button_pane_cp05_ParamLimits

0xdc52,	// (0x000625ce) cell_graphic2_control_pane_g1_ParamLimits

0xde2c,	// (0x000627a8) cell_graphic2_catg_pane_ParamLimits

0xde2c,	// (0x000627a8) cell_graphic2_catg_pane

0xed4a,	// (0x000636c6) bg_button_pane_cp12

0xde3e,	// (0x000627ba) cell_graphic2_catg_pane_g1

0xd346,	// (0x00061cc2) cell_tb_ext_pane_t1_ParamLimits

0x8610,	// (0x0005cf8c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8610,	// (0x0005cf8c) vkb2_top_cell_right_narrow_pane

0x8628,	// (0x0005cfa4) vkb2_top_cell_right_wide_pane_ParamLimits

0x8628,	// (0x0005cfa4) vkb2_top_cell_right_wide_pane

0x7c15,	// (0x0005c591) bg_vkb2_func_pane_ParamLimits

0x7c15,	// (0x0005c591) bg_vkb2_func_pane

0x8699,	// (0x0005d015) vkb2_top_cell_left_pane_g1_ParamLimits

0x7c15,	// (0x0005c591) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7c15,	// (0x0005c591) bg_vkb2_fuc_pane_cp03

0x86f7,	// (0x0005d073) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9299,	// (0x0005dc15) bg_vkb2_func_pane_g1

0x92a1,	// (0x0005dc1d) bg_vkb2_func_pane_g2

0x92b1,	// (0x0005dc2d) bg_vkb2_func_pane_g3

0x92a9,	// (0x0005dc25) bg_vkb2_func_pane_g4

0x92b9,	// (0x0005dc35) bg_vkb2_func_pane_g5

0x92c1,	// (0x0005dc3d) bg_vkb2_func_pane_g6

0x92c9,	// (0x0005dc45) bg_vkb2_func_pane_g7

0x92d1,	// (0x0005dc4d) bg_vkb2_func_pane_g8

0x9291,	// (0x0005dc0d) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x0006478a) bg_vkb2_func_pane_g

0x7c15,	// (0x0005c591) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7c15,	// (0x0005c591) bg_vkb2_fuc_pane_cp01

0x8699,	// (0x0005d015) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8699,	// (0x0005d015) vkb2_top_cell_right_wide_pane_g1

0x7c15,	// (0x0005c591) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7c15,	// (0x0005c591) bg_vkb2_fuc_pane_cp02

0x86f7,	// (0x0005d073) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x86f7,	// (0x0005d073) vkb2_top_cell_right_narrow_pane_g1

0xcf47,	// (0x000618c3) aid_touch_area_decrease_ParamLimits

0xcf47,	// (0x000618c3) aid_touch_area_decrease

0xcf6b,	// (0x000618e7) aid_touch_area_increase_ParamLimits

0xcf6b,	// (0x000618e7) aid_touch_area_increase

0xcf83,	// (0x000618ff) aid_touch_area_mute_ParamLimits

0xcf83,	// (0x000618ff) aid_touch_area_mute

0xcf9f,	// (0x0006191b) aid_touch_area_slider_ParamLimits

0xcf9f,	// (0x0006191b) aid_touch_area_slider

0xd089,	// (0x00061a05) popup_slider_window_g4_ParamLimits

0xd089,	// (0x00061a05) popup_slider_window_g4

0xd0a1,	// (0x00061a1d) popup_slider_window_g5_ParamLimits

0xd0a1,	// (0x00061a1d) popup_slider_window_g5

0xd0c3,	// (0x00061a3f) popup_slider_window_g6_ParamLimits

0xd0c3,	// (0x00061a3f) popup_slider_window_g6

0xd101,	// (0x00061a7d) popup_slider_window_t2_ParamLimits

0xd101,	// (0x00061a7d) popup_slider_window_t2

0x0001,

0xfd0a,	// (0x00064686) popup_slider_window_t_ParamLimits

0xfd0a,	// (0x00064686) popup_slider_window_t

0xd119,	// (0x00061a95) slider_pane_ParamLimits

0xd119,	// (0x00061a95) slider_pane

0xde47,	// (0x000627c3) slider_pane_g1_ParamLimits

0xde47,	// (0x000627c3) slider_pane_g1

0xde5b,	// (0x000627d7) slider_pane_g2_ParamLimits

0xde5b,	// (0x000627d7) slider_pane_g2

0xde71,	// (0x000627ed) slider_pane_g3_ParamLimits

0xde71,	// (0x000627ed) slider_pane_g3

0x0003,

0xfe21,	// (0x0006479d) slider_pane_g_ParamLimits

0xfe21,	// (0x0006479d) slider_pane_g

0x7562,	// (0x0005bede) popup_tb_float_extension_window_ParamLimits

0x7562,	// (0x0005bede) popup_tb_float_extension_window

0xde9d,	// (0x00062819) aid_size_cell_tb_float_ext

0xed4a,	// (0x000636c6) bg_popup_sub_window_cp28

0xdea9,	// (0x00062825) grid_tb_float_ext_pane

0xdeb3,	// (0x0006282f) cell_tb_float_ext_pane_ParamLimits

0xdeb3,	// (0x0006282f) cell_tb_float_ext_pane

0xdecd,	// (0x00062849) cell_tb_float_ext_pane_g1

0xded6,	// (0x00062852) grid_highlight_pane_cp12

0x7d64,	// (0x0005c6e0) cell_last_hwr_side_pane_ParamLimits

0x7d64,	// (0x0005c6e0) cell_last_hwr_side_pane

0xba4b,	// (0x000603c7) cell_last_hwr_side_pane_g1

0xdedf,	// (0x0006285b) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x000647a6) cell_last_hwr_side_pane_g

0x85bf,	// (0x0005cf3b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x85bf,	// (0x0005cf3b) vkb2_area_bottom_space_btn_pane

0x7e7a,	// (0x0005c7f6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xd99e,	// (0x0006231a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8855,	// (0x0005d1d1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8874,	// (0x0005d1f0) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8874,	// (0x0005d1f0) vkb2_area_bottom_space_btn_pane_g1

0x88ae,	// (0x0005d22a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x88ae,	// (0x0005d22a) vkb2_area_bottom_space_btn_pane_g2

0x88e4,	// (0x0005d260) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x88e4,	// (0x0005d260) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x000647ab) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x000647ab) vkb2_area_bottom_space_btn_pane_g

0x7cd8,	// (0x0005c654) cel_fep_hwr_func_pane_ParamLimits

0x7cd8,	// (0x0005c654) cel_fep_hwr_func_pane

0x7d14,	// (0x0005c690) cell_hwr_side_button_pane_ParamLimits

0x7d14,	// (0x0005c690) cell_hwr_side_button_pane

0xd37b,	// (0x00061cf7) aid_area_touch_clock_ParamLimits

0xeee4,	// (0x00063860) bg_uniindi_top_pane_ParamLimits

0xd38d,	// (0x00061d09) uniindi_top_pane_g1_ParamLimits

0xd3a3,	// (0x00061d1f) uniindi_top_pane_g2_ParamLimits

0xd3af,	// (0x00061d2b) uniindi_top_pane_g3_ParamLimits

0xd3c0,	// (0x00061d3c) uniindi_top_pane_g4_ParamLimits

0xfd42,	// (0x000646be) uniindi_top_pane_g_ParamLimits

0xd3cd,	// (0x00061d49) uniindi_top_pane_t1_ParamLimits

0xeee4,	// (0x00063860) bg_vkb2_func_pane_cp01_ParamLimits

0xeee4,	// (0x00063860) bg_vkb2_func_pane_cp01

0xdee8,	// (0x00062864) cel_fep_hwr_func_pane_g1_ParamLimits

0xdee8,	// (0x00062864) cel_fep_hwr_func_pane_g1

0xeee4,	// (0x00063860) bg_vkb2_func_pane_cp02_ParamLimits

0xeee4,	// (0x00063860) bg_vkb2_func_pane_cp02

0xdee8,	// (0x00062864) cell_hwr_side_button_pane_g1_ParamLimits

0xdee8,	// (0x00062864) cell_hwr_side_button_pane_g1

0x9115,	// (0x0005da91) status_pane_g4_ParamLimits

0x9115,	// (0x0005da91) status_pane_g4

0x912f,	// (0x0005daab) status_pane_t1

0xb786,	// (0x00060102) form2_midp_gauge_slider_cont_pane

0xb78e,	// (0x0006010a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb7a0,	// (0x0006011c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb7b2,	// (0x0006012e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb09,	// (0x00064485) form2_midp_gauge_slider_pane_t_ParamLimits

0xb7c4,	// (0x00060140) form2_midp_slider_pane_ParamLimits

0x822e,	// (0x0005cbaa) aid_size_cell_func_vkb2_ParamLimits

0x822e,	// (0x0005cbaa) aid_size_cell_func_vkb2

0xde89,	// (0x00062805) slider_pane_g4_ParamLimits

0xde89,	// (0x00062805) slider_pane_g4

0x892e,	// (0x0005d2aa) form2_midp_gauge_slider_pane_t2_cp01

0x893c,	// (0x0005d2b8) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x893c,	// (0x0005d2b8) form2_midp_gauge_slider_pane_t3_cp01

0x8959,	// (0x0005d2d5) form2_midp_slider_pane_cp01

0xed4a,	// (0x000636c6) navi_smil_pane

0xdf21,	// (0x0006289d) navi_smil_pane_g1

0xdf29,	// (0x000628a5) navi_smil_pane_t1

0xdef6,	// (0x00062872) form2_midp_slider_pane_g1

0xdeff,	// (0x0006287b) form2_midp_slider_pane_g2

0xdf07,	// (0x00062883) form2_midp_slider_pane_g3

0xdef6,	// (0x00062872) form2_midp_slider_pane_g4

0xdf0f,	// (0x0006288b) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x000647b4) form2_midp_slider_pane_g

0x891e,	// (0x0005d29a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x891e,	// (0x0005d29a) vkb2_area_bottom_space_btn_pane_g4

0x8f44,	// (0x0005d8c0) lc0_navi_pane_ParamLimits

0x8f44,	// (0x0005d8c0) lc0_navi_pane

0x8fba,	// (0x0005d936) lc0_stat_indi_pane_ParamLimits

0x8fba,	// (0x0005d936) lc0_stat_indi_pane

0x8fd1,	// (0x0005d94d) ls0_title_pane_ParamLimits

0x8fd1,	// (0x0005d94d) ls0_title_pane

0xf16c,	// (0x00063ae8) bg_popup_sub_pane_cp14_ParamLimits

0xd362,	// (0x00061cde) list_uniindi_pane_ParamLimits

0xd36e,	// (0x00061cea) uniindi_top_pane_ParamLimits

0xd409,	// (0x00061d85) list_single_uniindi_pane_g1_ParamLimits

0xd41c,	// (0x00061d98) list_single_uniindi_pane_t1_ParamLimits

0x8962,	// (0x0005d2de) lc0_stat_clock_pane_ParamLimits

0x8962,	// (0x0005d2de) lc0_stat_clock_pane

0xdf37,	// (0x000628b3) lc0_stat_indi_pane_g1_ParamLimits

0xdf37,	// (0x000628b3) lc0_stat_indi_pane_g1

0xdf44,	// (0x000628c0) lc0_stat_indi_pane_g2_ParamLimits

0xdf44,	// (0x000628c0) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x000647bf) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x000647bf) lc0_stat_indi_pane_g

0x896f,	// (0x0005d2eb) lc0_uni_indicator_pane_ParamLimits

0x896f,	// (0x0005d2eb) lc0_uni_indicator_pane

0xdf51,	// (0x000628cd) ls0_title_pane_g1_ParamLimits

0xdf51,	// (0x000628cd) ls0_title_pane_g1

0xdf65,	// (0x000628e1) ls0_title_pane_t1_ParamLimits

0xdf65,	// (0x000628e1) ls0_title_pane_t1

0x897c,	// (0x0005d2f8) lc0_uni_indicator_pane_g1_ParamLimits

0x897c,	// (0x0005d2f8) lc0_uni_indicator_pane_g1

0xdf9b,	// (0x00062917) lc0_stat_clock_pane_t1

0x5662,	// (0x00059fde) main_ai5_pane

0xdfa9,	// (0x00062925) ai5_sk_pane_ParamLimits

0xdfa9,	// (0x00062925) ai5_sk_pane

0xdfb6,	// (0x00062932) cell_ai5_widget_pane_ParamLimits

0xdfb6,	// (0x00062932) cell_ai5_widget_pane

0xe071,	// (0x000629ed) aid_size_cell_widget_grid

0xe07f,	// (0x000629fb) bg_ai5_widget_pane_ParamLimits

0xe07f,	// (0x000629fb) bg_ai5_widget_pane

0xe0f7,	// (0x00062a73) cell_ai5_widget_pane_g2

0xe10b,	// (0x00062a87) cell_ai5_widget_pane_g3

0xe125,	// (0x00062aa1) cell_ai5_widget_pane_g4

0xe135,	// (0x00062ab1) cell_ai5_widget_pane_g5

0xe145,	// (0x00062ac1) cell_ai5_widget_pane_g6

0xe151,	// (0x00062acd) cell_ai5_widget_pane_g7

0xe199,	// (0x00062b15) cell_ai5_widget_pane_t1_ParamLimits

0xe199,	// (0x00062b15) cell_ai5_widget_pane_t1

0xe1b6,	// (0x00062b32) cell_ai5_widget_pane_t2_ParamLimits

0xe1b6,	// (0x00062b32) cell_ai5_widget_pane_t2

0xe1ce,	// (0x00062b4a) cell_ai5_widget_pane_t3_ParamLimits

0xe1ce,	// (0x00062b4a) cell_ai5_widget_pane_t3

0xe1e6,	// (0x00062b62) cell_ai5_widget_pane_t4_ParamLimits

0xe1e6,	// (0x00062b62) cell_ai5_widget_pane_t4

0xe20c,	// (0x00062b88) cell_ai5_widget_pane_t5_ParamLimits

0xe20c,	// (0x00062b88) cell_ai5_widget_pane_t5

0xe22c,	// (0x00062ba8) cell_ai5_widget_pane_t6_ParamLimits

0xe22c,	// (0x00062ba8) cell_ai5_widget_pane_t6

0xe23e,	// (0x00062bba) cell_ai5_widget_pane_t7_ParamLimits

0xe23e,	// (0x00062bba) cell_ai5_widget_pane_t7

0xe257,	// (0x00062bd3) cell_ai5_widget_pane_t8_ParamLimits

0xe257,	// (0x00062bd3) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x000647d9) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x000647d9) cell_ai5_widget_pane_t

0xe2b6,	// (0x00062c32) grid_ai5_widget_pane

0xf16c,	// (0x00063ae8) highlight_cell_ai5_widget_pane_ParamLimits

0xf16c,	// (0x00063ae8) highlight_cell_ai5_widget_pane

0xe2c4,	// (0x00062c40) ai5_sk_left_pane

0xe2ce,	// (0x00062c4a) ai5_sk_middle_pane

0xe2d8,	// (0x00062c54) ai5_sk_right_pane

0xe2e2,	// (0x00062c5e) bg_ai5_widget_pane_g1_ParamLimits

0xe2e2,	// (0x00062c5e) bg_ai5_widget_pane_g1

0xe2ee,	// (0x00062c6a) bg_ai5_widget_pane_g2_ParamLimits

0xe2ee,	// (0x00062c6a) bg_ai5_widget_pane_g2

0xe2fa,	// (0x00062c76) bg_ai5_widget_pane_g3_ParamLimits

0xe2fa,	// (0x00062c76) bg_ai5_widget_pane_g3

0xe306,	// (0x00062c82) bg_ai5_widget_pane_g4_ParamLimits

0xe306,	// (0x00062c82) bg_ai5_widget_pane_g4

0xe312,	// (0x00062c8e) bg_ai5_widget_pane_g5_ParamLimits

0xe312,	// (0x00062c8e) bg_ai5_widget_pane_g5

0xe31e,	// (0x00062c9a) bg_ai5_widget_pane_g6_ParamLimits

0xe31e,	// (0x00062c9a) bg_ai5_widget_pane_g6

0xe32a,	// (0x00062ca6) bg_ai5_widget_pane_g7_ParamLimits

0xe32a,	// (0x00062ca6) bg_ai5_widget_pane_g7

0xe336,	// (0x00062cb2) bg_ai5_widget_pane_g8_ParamLimits

0xe336,	// (0x00062cb2) bg_ai5_widget_pane_g8

0xe342,	// (0x00062cbe) bg_ai5_widget_pane_g9_ParamLimits

0xe342,	// (0x00062cbe) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x000647ee) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x000647ee) bg_ai5_widget_pane_g

0xe374,	// (0x00062cf0) cell_shortcut_ai5_widget_pane_ParamLimits

0xe374,	// (0x00062cf0) cell_shortcut_ai5_widget_pane

0x3926,	// (0x000582a2) bg_cell_shortcut_ai5_widget_pane

0xe385,	// (0x00062d01) cell_grid_ai5_widget_pane_g1

0x3926,	// (0x000582a2) highlight_cell_shortcut_ai5_widget_pane

0x9299,	// (0x0005dc15) ai5_sk_left_pane_g1

0xe38e,	// (0x00062d0a) ai5_sk_left_pane_g2

0xe396,	// (0x00062d12) ai5_sk_left_pane_g3

0xe39e,	// (0x00062d1a) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x00064801) ai5_sk_left_pane_g

0xe3a6,	// (0x00062d22) ai5_sk_left_pane_t1

0x92a1,	// (0x0005dc1d) ai5_sk_right_pane_g1

0xe3b4,	// (0x00062d30) ai5_sk_right_pane_g2

0xe3bc,	// (0x00062d38) ai5_sk_right_pane_g3

0xe3c4,	// (0x00062d40) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x0006480a) ai5_sk_right_pane_g

0xe3cc,	// (0x00062d48) ai5_sk_right_pane_t1

0x92a1,	// (0x0005dc1d) ai5_sk_middle_pane_g1

0x9299,	// (0x0005dc15) ai5_sk_middle_pane_g2

0x92b9,	// (0x0005dc35) ai5_sk_middle_pane_g3

0xe3bc,	// (0x00062d38) ai5_sk_middle_pane_g4

0xe396,	// (0x00062d12) ai5_sk_middle_pane_g5

0xe3da,	// (0x00062d56) ai5_sk_middle_pane_g6

0xe3e2,	// (0x00062d5e) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x00064813) ai5_sk_middle_pane_g

0x8dca,	// (0x0005d746) aid_touch_area_size_lc0_ParamLimits

0x8dca,	// (0x0005d746) aid_touch_area_size_lc0

0x7ea9,	// (0x0005c825) cell_hwr_candidate_pane_t1_ParamLimits

0x8de6,	// (0x0005d762) aid_touch_navi_pane

0x90bf,	// (0x0005da3b) status_dt_navi_pane_ParamLimits

0x90bf,	// (0x0005da3b) status_dt_navi_pane

0x90cc,	// (0x0005da48) status_dt_sta_pane_ParamLimits

0x90cc,	// (0x0005da48) status_dt_sta_pane

0xe3ea,	// (0x00062d66) dt_sta_controll_pane

0xe3f7,	// (0x00062d73) dt_sta_indi_pane

0xe408,	// (0x00062d84) dt_sta_title_pane

0xeee4,	// (0x00063860) bg_dt_sta_indi_pane_ParamLimits

0xeee4,	// (0x00063860) bg_dt_sta_indi_pane

0xe41b,	// (0x00062d97) dt_sta_battery_pane

0xe423,	// (0x00062d9f) dt_sta_indi_pane_g1

0xe42c,	// (0x00062da8) dt_sta_indi_pane_g2

0xe435,	// (0x00062db1) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x00064822) dt_sta_indi_pane_g

0xe43e,	// (0x00062dba) dt_sta_signal_pane

0xf16c,	// (0x00063ae8) bg_dt_sta_title_pane_ParamLimits

0xf16c,	// (0x00063ae8) bg_dt_sta_title_pane

0xa0eb,	// (0x0005ea67) dt_sta_title_pane_g1

0xe447,	// (0x00062dc3) dt_sta_title_pane_t1_ParamLimits

0xe447,	// (0x00062dc3) dt_sta_title_pane_t1

0xed4a,	// (0x000636c6) bg_dt_sta_control_pane

0xe45c,	// (0x00062dd8) dt_sta_controll_pane_g1

0xe465,	// (0x00062de1) bg_dt_sta_title_pane_g1

0xe46e,	// (0x00062dea) bg_dt_sta_title_pane_g2

0xe477,	// (0x00062df3) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x00064829) bg_dt_sta_title_pane_g

0xba4b,	// (0x000603c7) bg_dt_sta_indi_pane_g1

0xe480,	// (0x00062dfc) dt_sta_signal_pane_g1

0xe488,	// (0x00062e04) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x00064830) dt_sta_signal_pane_g

0xe490,	// (0x00062e0c) dt_sta_battery_pane_g1

0xe499,	// (0x00062e15) dt_sta_battery_pane_t1

0xba4b,	// (0x000603c7) bg_dt_sta_control_pane_g1

0x1384,	// (0x00055d00) fep_china_uni_eep_pane

0x138c,	// (0x00055d08) fep_china_uni_entry_pane_ParamLimits

0x139c,	// (0x00055d18) popup_fep_china_uni_window_g1_ParamLimits

0x13ac,	// (0x00055d28) popup_fep_china_uni_window_g2_ParamLimits

0x13ac,	// (0x00055d28) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00064094) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00064094) popup_fep_china_uni_window_g

0xe4a8,	// (0x00062e24) fep_china_uni_eep_pane_g1

0xe4b0,	// (0x00062e2c) fep_china_uni_eep_pane_t1

0xdf18,	// (0x00062894) aid_touch_area_size_smil_player

0x8f3c,	// (0x0005d8b8) lc0_clock_pane

0x9123,	// (0x0005da9f) status_pane_g5_ParamLimits

0x9123,	// (0x0005da9f) status_pane_g5

0x7223,	// (0x0005bb9f) popup_keymap_window

0x90e1,	// (0x0005da5d) status_icon_pane

0xe10b,	// (0x00062a87) cell_ai5_widget_pane_g3_ParamLimits

0xe125,	// (0x00062aa1) cell_ai5_widget_pane_g4_ParamLimits

0xe135,	// (0x00062ab1) cell_ai5_widget_pane_g5_ParamLimits

0xe15d,	// (0x00062ad9) cell_ai5_widget_pane_g8_ParamLimits

0xe15d,	// (0x00062ad9) cell_ai5_widget_pane_g8

0xe171,	// (0x00062aed) cell_ai5_widget_pane_g9_ParamLimits

0xe171,	// (0x00062aed) cell_ai5_widget_pane_g9

0xe185,	// (0x00062b01) cell_ai5_widget_pane_g10_ParamLimits

0xe185,	// (0x00062b01) cell_ai5_widget_pane_g10

0xe4bf,	// (0x00062e3b) status_icon_pane_g1

0xed4a,	// (0x000636c6) bg_popup_sub_pane_cp13

0xe4c7,	// (0x00062e43) popup_keymap_window_t1

0x8d1b,	// (0x0005d697) control_pane_g6_ParamLimits

0x8d1b,	// (0x0005d697) control_pane_g6

0x8d28,	// (0x0005d6a4) control_pane_g7_ParamLimits

0x8d28,	// (0x0005d6a4) control_pane_g7

0x8d35,	// (0x0005d6b1) control_pane_g8_ParamLimits

0x8d35,	// (0x0005d6b1) control_pane_g8

0xe3ea,	// (0x00062d66) dt_sta_controll_pane_ParamLimits

0xe3f7,	// (0x00062d73) dt_sta_indi_pane_ParamLimits

0xe408,	// (0x00062d84) dt_sta_title_pane_ParamLimits

0xf0b7,	// (0x00063a33) aid_size_touch_scroll_bar_cale

0x573b,	// (0x0005a0b7) popup_discreet_window_ParamLimits

0x573b,	// (0x0005a0b7) popup_discreet_window

0x57b5,	// (0x0005a131) popup_sk_window

0x992f,	// (0x0005e2ab) bg_popup_sub_pane_cp28_ParamLimits

0x992f,	// (0x0005e2ab) bg_popup_sub_pane_cp28

0xe4d5,	// (0x00062e51) popup_discreet_window_g1_ParamLimits

0xe4d5,	// (0x00062e51) popup_discreet_window_g1

0xe4f5,	// (0x00062e71) popup_discreet_window_t1_ParamLimits

0xe4f5,	// (0x00062e71) popup_discreet_window_t1

0xe513,	// (0x00062e8f) popup_discreet_window_t2_ParamLimits

0xe513,	// (0x00062e8f) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x00064835) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x00064835) popup_discreet_window_t

0x8990,	// (0x0005d30c) popup_sk_window_g1

0x899a,	// (0x0005d316) popup_sk_window_g2

0x0001,

0xfec0,	// (0x0006483c) popup_sk_window_g

0x89a2,	// (0x0005d31e) popup_sk_window_t1

0x89b0,	// (0x0005d32c) popup_sk_window_t1_copy1

0xe0f7,	// (0x00062a73) cell_ai5_widget_pane_g2_ParamLimits

0xe269,	// (0x00062be5) cell_ai5_widget_pane_t9_ParamLimits

0xe269,	// (0x00062be5) cell_ai5_widget_pane_t9

0xed4a,	// (0x000636c6) main_fep_fshwr2_pane

0x89be,	// (0x0005d33a) aid_fshwr2_btn_pane

0x89ca,	// (0x0005d346) aid_fshwr2_syb_pane

0x89dc,	// (0x0005d358) aid_fshwr2_txt_pane

0x89e8,	// (0x0005d364) fshwr2_func_candi_pane

0x8a06,	// (0x0005d382) fshwr2_hwr_syb_pane

0x8a20,	// (0x0005d39c) fshwr2_icf_pane

0x5662,	// (0x00059fde) fshwr2_icf_bg_pane

0x8a4c,	// (0x0005d3c8) fshwr2_icf_pane_t1_ParamLimits

0x8a4c,	// (0x0005d3c8) fshwr2_icf_pane_t1

0x1301,	// (0x00055c7d) fshwr2_func_candi_pane_g1

0xe565,	// (0x00062ee1) fshwr2_func_candi_row_pane_ParamLimits

0xe565,	// (0x00062ee1) fshwr2_func_candi_row_pane

0x8a65,	// (0x0005d3e1) cell_fshwr2_syb_pane_ParamLimits

0x8a65,	// (0x0005d3e1) cell_fshwr2_syb_pane

0x8a88,	// (0x0005d404) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8a88,	// (0x0005d404) fshwr2_hwr_syb_pane_g1

0x5662,	// (0x00059fde) bg_popup_call_pane_cp01

0x8a96,	// (0x0005d412) fshwr2_func_candi_cell_pane_ParamLimits

0x8a96,	// (0x0005d412) fshwr2_func_candi_cell_pane

0x9f8b,	// (0x0005e907) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f8b,	// (0x0005e907) fshwr2_func_candi_cell_bg_pane

0x8ae1,	// (0x0005d45d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x8ae1,	// (0x0005d45d) fshwr2_func_candi_cell_pane_g1

0x8b09,	// (0x0005d485) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x8b09,	// (0x0005d485) fshwr2_func_candi_cell_pane_t1

0x5662,	// (0x00059fde) bg_button_pane_cp08

0xe58c,	// (0x00062f08) cell_fshwr2_syb_bg_pane

0x8b1c,	// (0x0005d498) cell_fshwr2_syb_bg_pane_g1

0x8b30,	// (0x0005d4ac) cell_fshwr2_syb_bg_pane_t1

0xf16c,	// (0x00063ae8) main_tmo_pane

0xa424,	// (0x0005eda0) uni_indicator_pane_g1_ParamLimits

0xa437,	// (0x0005edb3) uni_indicator_pane_g2_ParamLimits

0xa449,	// (0x0005edc5) uni_indicator_pane_g3_ParamLimits

0xa458,	// (0x0005edd4) uni_indicator_pane_g4_ParamLimits

0xa458,	// (0x0005edd4) uni_indicator_pane_g4

0xa46c,	// (0x0005ede8) uni_indicator_pane_g5_ParamLimits

0xa46c,	// (0x0005ede8) uni_indicator_pane_g5

0xa46c,	// (0x0005ede8) uni_indicator_pane_g6_ParamLimits

0xa46c,	// (0x0005ede8) uni_indicator_pane_g6

0xf91c,	// (0x00064298) uni_indicator_pane_g_ParamLimits

0xcf29,	// (0x000618a5) popup_tmo_note_window_ParamLimits

0xcf29,	// (0x000618a5) popup_tmo_note_window

0x8210,	// (0x0005cb8c) fshwr2_bg_pane

0x8afa,	// (0x0005d476) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x8afa,	// (0x0005d476) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x00064841) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x00064841) fshwr2_func_candi_cell_pane_g

0x7e62,	// (0x0005c7de) bg_popup_window_pane_cp01

0x8b46,	// (0x0005d4c2) bg_popup_window_pane_g1_cp01

0xe598,	// (0x00062f14) bg_popup_window_pane_cp22_ParamLimits

0xe598,	// (0x00062f14) bg_popup_window_pane_cp22

0xe5a6,	// (0x00062f22) listscroll_tmo_link_pane_ParamLimits

0xe5a6,	// (0x00062f22) listscroll_tmo_link_pane

0xe5e6,	// (0x00062f62) popup_tmo_note_window_g1_ParamLimits

0xe5e6,	// (0x00062f62) popup_tmo_note_window_g1

0xe5f3,	// (0x00062f6f) tmo_note_info_pane_ParamLimits

0xe5f3,	// (0x00062f6f) tmo_note_info_pane

0xe60d,	// (0x00062f89) list_tmo_note_info_pane_g1_ParamLimits

0xe60d,	// (0x00062f89) list_tmo_note_info_pane_g1

0xe624,	// (0x00062fa0) list_tmo_note_info_pane_g2_ParamLimits

0xe624,	// (0x00062fa0) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x00064846) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x00064846) list_tmo_note_info_pane_g

0xe640,	// (0x00062fbc) list_tmo_note_info_text_pane_ParamLimits

0xe640,	// (0x00062fbc) list_tmo_note_info_text_pane

0xe6c1,	// (0x0006303d) list_tmo_link_pane

0xe6ce,	// (0x0006304a) scroll_pane_cp20

0xe6db,	// (0x00063057) list_single_tmo_link_pane_ParamLimits

0xe6db,	// (0x00063057) list_single_tmo_link_pane

0xe6eb,	// (0x00063067) list_single_tmo_link_pane_t1

0xe6f9,	// (0x00063075) list_tmo_note_info_text_pane_t1_ParamLimits

0xe6f9,	// (0x00063075) list_tmo_note_info_text_pane_t1

0x64bd,	// (0x0005ae39) aid_size_touch_scroll_bar_cp01_ParamLimits

0x64bd,	// (0x0005ae39) aid_size_touch_scroll_bar_cp01

0x63ca,	// (0x0005ad46) aid_size_touch_slider_marker

0x579d,	// (0x0005a119) popup_settings_window_ParamLimits

0x579d,	// (0x0005a119) popup_settings_window

0x3a64,	// (0x000583e0) popup_candi_list_indi_window

0x8de6,	// (0x0005d762) aid_touch_navi_pane_ParamLimits

0x816b,	// (0x0005cae7) rs_clock_indi_pane

0x8174,	// (0x0005caf0) sctrl_sk_bottom_pane_ParamLimits

0x8185,	// (0x0005cb01) sctrl_sk_top_pane_ParamLimits

0x8288,	// (0x0005cc04) popup_fep_tooltip_window

0xe071,	// (0x000629ed) aid_size_cell_widget_grid_ParamLimits

0xe0e2,	// (0x00062a5e) cell_ai5_widget_pane_g1_ParamLimits

0xe0e2,	// (0x00062a5e) cell_ai5_widget_pane_g1

0xe145,	// (0x00062ac1) cell_ai5_widget_pane_g6_ParamLimits

0xe151,	// (0x00062acd) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x000647c4) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x000647c4) cell_ai5_widget_pane_g

0xe298,	// (0x00062c14) cell_ai5_widget_pane_t10_ParamLimits

0xe298,	// (0x00062c14) cell_ai5_widget_pane_t10

0xe2b6,	// (0x00062c32) grid_ai5_widget_pane_ParamLimits

0xe34e,	// (0x00062cca) cell_contacts_ai5_widget_pane_ParamLimits

0xe34e,	// (0x00062cca) cell_contacts_ai5_widget_pane

0xe528,	// (0x00062ea4) popup_discreet_window_t3_ParamLimits

0xe528,	// (0x00062ea4) popup_discreet_window_t3

0x8a38,	// (0x0005d3b4) popup_fshwr2_char_preview_window_ParamLimits

0x8a38,	// (0x0005d3b4) popup_fshwr2_char_preview_window

0xe65e,	// (0x00062fda) tmo_note_info_pane_t1

0xe673,	// (0x00062fef) tmo_note_info_pane_t2

0xe688,	// (0x00063004) tmo_note_info_pane_t3

0xe69d,	// (0x00063019) tmo_note_info_pane_t4

0xe6af,	// (0x0006302b) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x0006484b) tmo_note_info_pane_t

0xe6c1,	// (0x0006303d) list_tmo_link_pane_ParamLimits

0xe6ce,	// (0x0006304a) scroll_pane_cp20_ParamLimits

0x5662,	// (0x00059fde) bg_popup_fep_char_preview_window_cp01

0xe712,	// (0x0006308e) popup_fshwr2_char_preview_window_t1

0xe720,	// (0x0006309c) popup_candi_list_indi_window_g1

0xe729,	// (0x000630a5) bg_cell_contacts_ai5_widget_pane

0xe735,	// (0x000630b1) cell_contacts_ai5_widget_pane_g1

0xc110,	// (0x00060a8c) cell_contacts_ai5_widget_pane_g2

0xe74a,	// (0x000630c6) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x00064856) cell_contacts_ai5_widget_pane_g

0xe756,	// (0x000630d2) cell_contacts_ai5_widget_pane_t1

0xf16c,	// (0x00063ae8) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe7cd,	// (0x00063149) settings_container_pane

0x3926,	// (0x000582a2) listscroll_set_pane_copy1

0xb14d,	// (0x0005fac9) scroll_pane_cp121_copy1

0x96dc,	// (0x0005e058) set_content_pane_copy1

0xe7d9,	// (0x00063155) aid_height_set_list_copy1_ParamLimits

0xe7d9,	// (0x00063155) aid_height_set_list_copy1

0xa664,	// (0x0005efe0) aid_size_parent_copy1_ParamLimits

0xa664,	// (0x0005efe0) aid_size_parent_copy1

0xe7e5,	// (0x00063161) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe7e5,	// (0x00063161) button_value_adjust_pane_cp6_copy1

0x8d6a,	// (0x0005d6e6) list_highlight_pane_cp2_copy1_ParamLimits

0x8d6a,	// (0x0005d6e6) list_highlight_pane_cp2_copy1

0xe7f9,	// (0x00063175) list_set_pane_copy1_ParamLimits

0xe7f9,	// (0x00063175) list_set_pane_copy1

0xe768,	// (0x000630e4) main_pane_set_t1_copy1_ParamLimits

0xe768,	// (0x000630e4) main_pane_set_t1_copy1

0xe7a2,	// (0x0006311e) main_pane_set_t2_copy1_ParamLimits

0xe7a2,	// (0x0006311e) main_pane_set_t2_copy1

0xe8a6,	// (0x00063222) main_pane_set_t3_copy1

0xe8b4,	// (0x00063230) main_pane_set_t4_copy1

0xe7c1,	// (0x0006313d) set_content_pane_g1_copy1_ParamLimits

0xe7c1,	// (0x0006313d) set_content_pane_g1_copy1

0xe8c2,	// (0x0006323e) setting_code_pane_copy1

0xe8ca,	// (0x00063246) setting_slider_graphic_pane_copy1

0xe8ca,	// (0x00063246) setting_slider_pane_copy1

0xe8ca,	// (0x00063246) setting_text_pane_copy1

0xe8ca,	// (0x00063246) setting_volume_pane_copy1

0xe8c2,	// (0x0006323e) settings_code_pane_cp2_copy1

0xe8d2,	// (0x0006324e) settings_code_pane_cp_copy1_ParamLimits

0xe8d2,	// (0x0006324e) settings_code_pane_cp_copy1

0x8b4f,	// (0x0005d4cb) volume_set_pane_copy1

0xe8e6,	// (0x00063262) volume_set_pane_g10_copy1

0xe8ee,	// (0x0006326a) volume_set_pane_g1_copy1

0xe8f6,	// (0x00063272) volume_set_pane_g2_copy1

0xe8fe,	// (0x0006327a) volume_set_pane_g3_copy1

0xe906,	// (0x00063282) volume_set_pane_g4_copy1

0xe90e,	// (0x0006328a) volume_set_pane_g5_copy1

0xe916,	// (0x00063292) volume_set_pane_g6_copy1

0xe91e,	// (0x0006329a) volume_set_pane_g7_copy1

0xe926,	// (0x000632a2) volume_set_pane_g8_copy1

0xe92e,	// (0x000632aa) volume_set_pane_g9_copy1

0xedac,	// (0x00063728) bg_set_opt_pane_cp_copy1_ParamLimits

0xedac,	// (0x00063728) bg_set_opt_pane_cp_copy1

0x8b57,	// (0x0005d4d3) setting_slider_pane_t1_copy1_ParamLimits

0x8b57,	// (0x0005d4d3) setting_slider_pane_t1_copy1

0x8b75,	// (0x0005d4f1) setting_slider_pane_t2_copy1_ParamLimits

0x8b75,	// (0x0005d4f1) setting_slider_pane_t2_copy1

0x8b8f,	// (0x0005d50b) setting_slider_pane_t3_copy1_ParamLimits

0x8b8f,	// (0x0005d50b) setting_slider_pane_t3_copy1

0x8ba7,	// (0x0005d523) slider_set_pane_copy1_ParamLimits

0x8ba7,	// (0x0005d523) slider_set_pane_copy1

0xf1c4,	// (0x00063b40) set_opt_bg_pane_g1_copy2

0xf1cc,	// (0x00063b48) set_opt_bg_pane_g2_copy2

0xe936,	// (0x000632b2) set_opt_bg_pane_g3_copy2

0xf1dc,	// (0x00063b58) set_opt_bg_pane_g4_copy2

0xf1e4,	// (0x00063b60) set_opt_bg_pane_g5_copy2

0xf1ec,	// (0x00063b68) set_opt_bg_pane_g6_copy2

0xe940,	// (0x000632bc) set_opt_bg_pane_g7_copy2

0xe948,	// (0x000632c4) set_opt_bg_pane_g8_copy2

0xe952,	// (0x000632ce) set_opt_bg_pane_g9_copy2

0x8bbd,	// (0x0005d539) aid_size_touch_slider_mark_copy1_ParamLimits

0x8bbd,	// (0x0005d539) aid_size_touch_slider_mark_copy1

0xe95c,	// (0x000632d8) slider_set_pane_g1_copy1

0x8bd1,	// (0x0005d54d) slider_set_pane_g2_copy1

0x79a1,	// (0x0005c31d) slider_set_pane_g3_copy1_ParamLimits

0x79a1,	// (0x0005c31d) slider_set_pane_g3_copy1

0x79b5,	// (0x0005c331) slider_set_pane_g4_copy1_ParamLimits

0x79b5,	// (0x0005c331) slider_set_pane_g4_copy1

0x79cd,	// (0x0005c349) slider_set_pane_g5_copy1_ParamLimits

0x79cd,	// (0x0005c349) slider_set_pane_g5_copy1

0x79a1,	// (0x0005c31d) slider_set_pane_g6_copy1_ParamLimits

0x79a1,	// (0x0005c31d) slider_set_pane_g6_copy1

0x8bd9,	// (0x0005d555) slider_set_pane_g7_copy1_ParamLimits

0x8bd9,	// (0x0005d555) slider_set_pane_g7_copy1

0xed5e,	// (0x000636da) bg_set_opt_pane_cp2_copy1

0xe965,	// (0x000632e1) setting_slider_graphic_pane_g1_copy1

0xe96e,	// (0x000632ea) setting_slider_graphic_pane_t1_copy1

0xe97e,	// (0x000632fa) setting_slider_graphic_pane_t2_copy1

0xe98e,	// (0x0006330a) slider_set_pane_cp_copy1

0xe99e,	// (0x0006331a) input_focus_pane_cp1_copy1

0xe9a7,	// (0x00063323) list_set_text_pane_copy1

0xe9af,	// (0x0006332b) setting_text_pane_g1_copy1

0x480b,	// (0x00059187) set_text_pane_t1_copy1

0xe99e,	// (0x0006331a) input_focus_pane_cp2_copy1

0xe9af,	// (0x0006332b) setting_code_pane_g1_copy1

0xe9b8,	// (0x00063334) setting_code_pane_t1_copy1

0xe9c6,	// (0x00063342) list_set_graphic_pane_copy1

0xed5e,	// (0x000636da) bg_set_opt_pane_cp4_copy1

0x14dc,	// (0x00055e58) list_set_graphic_pane_g1_copy1_ParamLimits

0x14dc,	// (0x00055e58) list_set_graphic_pane_g1_copy1

0xe9da,	// (0x00063356) list_set_graphic_pane_g2_copy1

0x14f4,	// (0x00055e70) list_set_graphic_pane_t1_copy1_ParamLimits

0x14f4,	// (0x00055e70) list_set_graphic_pane_t1_copy1

0xba4b,	// (0x000603c7) rs_clock_indi_pane_g1

0xe9e2,	// (0x0006335e) rs_clock_indi_pane_t1

0xe9f0,	// (0x0006336c) rs_indi_pane

0xe9f8,	// (0x00063374) rs_indi_pane_g1

0xea01,	// (0x0006337d) rs_indi_pane_g2

0xe720,	// (0x0006309c) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x0006485d) rs_indi_pane_g

0x3926,	// (0x000582a2) bg_popup_preview_window_pane_cp03

0xea0a,	// (0x00063386) popup_fep_tooltip_window_t1

0xc6da,	// (0x00061056) popup_note2_window_g2_ParamLimits

0xc6da,	// (0x00061056) popup_note2_window_g2

0x0001,

0xfc81,	// (0x000645fd) popup_note2_window_g_ParamLimits

0xfc81,	// (0x000645fd) popup_note2_window_g

0xcbc7,	// (0x00061543) bg_popup_sub_pane_cp11_ParamLimits

0xcbd4,	// (0x00061550) cell_ai3_links_pane_g1_ParamLimits

0xcbeb,	// (0x00061567) cell_ai3_links_pane_t1

0x480b,	// (0x00059187) set_text_pane_t1_copy1_ParamLimits

0x3865,	// (0x000581e1) cell_graphic_popup_pane_cp2_ParamLimits

0x3865,	// (0x000581e1) cell_graphic_popup_pane_cp2

0xea18,	// (0x00063394) cell_graphic_popup_pane_g1_cp2

0xf03a,	// (0x000639b6) cell_graphic_popup_pane_g2_cp2

0xea20,	// (0x0006339c) cell_graphic_popup_pane_g3_cp2

0xea28,	// (0x000633a4) cell_graphic_popup_pane_t2_cp2

0xf04b,	// (0x000639c7) grid_highlight_pane_cp3_cp2

0xf41c,	// (0x00063d98) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf16c,	// (0x00063ae8) main_tmo_pane_ParamLimits

0xcf1d,	// (0x00061899) popup_tmo_big_image_note_window

0xe0d1,	// (0x00062a4d) cell_ai5_widget_list_pane

0xe0d9,	// (0x00062a55) cell_ai5_widget_lrg_icon_pane

0xe65e,	// (0x00062fda) tmo_note_info_pane_t1_ParamLimits

0xe673,	// (0x00062fef) tmo_note_info_pane_t2_ParamLimits

0xe688,	// (0x00063004) tmo_note_info_pane_t3_ParamLimits

0xe69d,	// (0x00063019) tmo_note_info_pane_t4_ParamLimits

0xe6af,	// (0x0006302b) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x0006484b) tmo_note_info_pane_t_ParamLimits

0xe7cd,	// (0x00063149) settings_container_pane_ParamLimits

0xe996,	// (0x00063312) indicator_popup_pane_cp5

0xe996,	// (0x00063312) indicator_popup_pane_cp6

0xe9c6,	// (0x00063342) list_set_graphic_pane_copy1_ParamLimits

0xed4a,	// (0x000636c6) bg_popup_window_pane_cp23

0xea36,	// (0x000633b2) popup_tmo_big_image_note_window_g1

0xea3f,	// (0x000633bb) popup_tmo_big_image_note_window_t1

0xea4f,	// (0x000633cb) popup_tmo_big_image_note_window_t2

0xea5f,	// (0x000633db) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x00064864) popup_tmo_big_image_note_window_t

0xba4b,	// (0x000603c7) cell_ai5_widget_lrg_icon_pane_g1

0xea6f,	// (0x000633eb) cell_ai5_widget_lrg_icon_pane_t1

0xea7d,	// (0x000633f9) cell_ai5_widget_list_row_pane_ParamLimits

0xea7d,	// (0x000633f9) cell_ai5_widget_list_row_pane

0xea94,	// (0x00063410) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xea94,	// (0x00063410) cell_ai5_widget_list_row_pane_g1

0xeaa1,	// (0x0006341d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeaa1,	// (0x0006341d) cell_ai5_widget_list_row_pane_t1

0xeacc,	// (0x00063448) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeacc,	// (0x00063448) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeef,	// (0x0006486b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x0006486b) cell_ai5_widget_list_row_pane_t

0x5662,	// (0x00059fde) main_fep_vtchi_ss_pane

0xeb14,	// (0x00063490) popup_fep_char_pre_window

0xeb1c,	// (0x00063498) popup_fep_ituss_window

0xeb48,	// (0x000634c4) popup_fep_vkbss_window

0xeb72,	// (0x000634ee) grid_vkbss_keypad_pane_ParamLimits

0xeb72,	// (0x000634ee) grid_vkbss_keypad_pane

0xeb82,	// (0x000634fe) ituss_keypad_pane

0x8bfb,	// (0x0005d577) aid_vkbss_key_offset_ParamLimits

0x8bfb,	// (0x0005d577) aid_vkbss_key_offset

0x8c07,	// (0x0005d583) cell_vkbss_key_pane_ParamLimits

0x8c07,	// (0x0005d583) cell_vkbss_key_pane

0x90fd,	// (0x0005da79) bg_cell_vkbss_key_g1_ParamLimits

0x90fd,	// (0x0005da79) bg_cell_vkbss_key_g1

0xeb91,	// (0x0006350d) cell_vkbss_key_3p_pane_ParamLimits

0xeb91,	// (0x0006350d) cell_vkbss_key_3p_pane

0xeba5,	// (0x00063521) cell_vkbss_key_g1_ParamLimits

0xeba5,	// (0x00063521) cell_vkbss_key_g1

0xebb9,	// (0x00063535) cell_vkbss_key_t1_ParamLimits

0xebb9,	// (0x00063535) cell_vkbss_key_t1

0x8c1d,	// (0x0005d599) cell_ituss_key_pane_ParamLimits

0x8c1d,	// (0x0005d599) cell_ituss_key_pane

0xebe4,	// (0x00063560) bg_cell_ituss_key_g1_ParamLimits

0xebe4,	// (0x00063560) bg_cell_ituss_key_g1

0xebf0,	// (0x0006356c) cell_ituss_key_pane_g1_ParamLimits

0xebf0,	// (0x0006356c) cell_ituss_key_pane_g1

0x8c2e,	// (0x0005d5aa) cell_ituss_key_pane_g2_ParamLimits

0x8c2e,	// (0x0005d5aa) cell_ituss_key_pane_g2

0x0002,

0xfef6,	// (0x00064872) cell_ituss_key_pane_g_ParamLimits

0xfef6,	// (0x00064872) cell_ituss_key_pane_g

0x8c5a,	// (0x0005d5d6) cell_ituss_key_t1_ParamLimits

0x8c5a,	// (0x0005d5d6) cell_ituss_key_t1

0x8c94,	// (0x0005d610) cell_ituss_key_t2_ParamLimits

0x8c94,	// (0x0005d610) cell_ituss_key_t2

0x8cc5,	// (0x0005d641) cell_ituss_key_t3_ParamLimits

0x8cc5,	// (0x0005d641) cell_ituss_key_t3

0x8c94,	// (0x0005d610) cell_ituss_key_t4_ParamLimits

0x8c94,	// (0x0005d610) cell_ituss_key_t4

0x0004,

0xfefd,	// (0x00064879) cell_ituss_key_t_ParamLimits

0xfefd,	// (0x00064879) cell_ituss_key_t

0xec16,	// (0x00063592) cell_vkbss_key_3p_pane_g1

0xec1e,	// (0x0006359a) cell_vkbss_key_3p_pane_g2

0xec26,	// (0x000635a2) cell_vkbss_key_3p_pane_g3

0x0002,

0xff08,	// (0x00064884) cell_vkbss_key_3p_pane_g

0x3926,	// (0x000582a2) bg_popup_fep_char_preview_window_cp02

0xec2e,	// (0x000635aa) popup_fep_char_pre_window_t1

0xe05e,	// (0x000629da) main_ai5_sk_pane

0xe729,	// (0x000630a5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe735,	// (0x000630b1) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc110,	// (0x00060a8c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xe74a,	// (0x000630c6) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x00064856) cell_contacts_ai5_widget_pane_g_ParamLimits

0xe756,	// (0x000630d2) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf16c,	// (0x00063ae8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xec3c,	// (0x000635b8) main_ai5_sk_pane_g1

0x9770,	// (0x0005e0ec) popup_query_code_window_g1

0xeb32,	// (0x000634ae) popup_fep_vkb_icf_pane

0xeb5c,	// (0x000634d8) popup_fep_vtchi_icf_pane

0xec45,	// (0x000635c1) bg_icf_pane

0xec51,	// (0x000635cd) list_vkb_icf_pane

0xec60,	// (0x000635dc) bg_icf_pane_cp01

0xec73,	// (0x000635ef) vtchi_icf_list_pane

0xec83,	// (0x000635ff) list_vkb_icf_pane_t1_ParamLimits

0xec83,	// (0x000635ff) list_vkb_icf_pane_t1

0xeca4,	// (0x00063620) vtchi_icf_list_pane_t1_ParamLimits

0xeca4,	// (0x00063620) vtchi_icf_list_pane_t1

0xeb1c,	// (0x00063498) popup_fep_ituss_window_ParamLimits

0xeb5c,	// (0x000634d8) popup_fep_vtchi_icf_pane_ParamLimits

0xeb82,	// (0x000634fe) ituss_keypad_pane_ParamLimits

0x8bef,	// (0x0005d56b) ituss_sks_pane

0xec45,	// (0x000635c1) bg_icf_pane_ParamLimits

0xeaf4,	// (0x00063470) icf_edit_indi_pane_ParamLimits

0xeaf4,	// (0x00063470) icf_edit_indi_pane

0xec51,	// (0x000635cd) list_vkb_icf_pane_ParamLimits

0xec60,	// (0x000635dc) bg_icf_pane_cp01_ParamLimits

0xeb07,	// (0x00063483) icf_edit_indi_pane_cp01_ParamLimits

0xeb07,	// (0x00063483) icf_edit_indi_pane_cp01

0xec7b,	// (0x000635f7) vtchi_query_pane

0xdee8,	// (0x00062864) icf_edit_indi_pane_g1_ParamLimits

0xdee8,	// (0x00062864) icf_edit_indi_pane_g1

0xed19,	// (0x00063695) icf_edit_indi_pane_g2_ParamLimits

0xed19,	// (0x00063695) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x0006489c) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x0006489c) icf_edit_indi_pane_g

0xed2b,	// (0x000636a7) icf_edit_indi_pane_t1

0xecc2,	// (0x0006363e) bg_input_focus_pane_cp042

0xf0ae,	// (0x00063a2a) vtchi_button_pane

0xeccb,	// (0x00063647) vtchi_query_pane_t1

0xecd9,	// (0x00063655) vtchi_query_pane_t2

0xece7,	// (0x00063663) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x0006488b) vtchi_query_pane_t

0x5662,	// (0x00059fde) bg_button_pane_cp13

0xecf5,	// (0x00063671) vtchi_button_pane_g1

0x8d08,	// (0x0005d684) ituss_sks_pane_g1

0x8d13,	// (0x0005d68f) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x00064892) ituss_sks_pane_g

0xecfd,	// (0x00063679) ituss_sks_pane_t1

0xed0b,	// (0x00063687) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x00064897) ituss_sks_pane_t

0xb4c8,	// (0x0005fe44) indicator_nsta_pane_cp_g1

0xb4d0,	// (0x0005fe4c) indicator_nsta_pane_cp_g2

0xb4d8,	// (0x0005fe54) indicator_nsta_pane_cp_g3

0xb4c8,	// (0x0005fe44) indicator_nsta_pane_cp_g4

0xb4d0,	// (0x0005fe4c) indicator_nsta_pane_cp_g5

0xb4d8,	// (0x0005fe54) indicator_nsta_pane_cp_g6

0x0005,

0xfabf,	// (0x0006443b) indicator_nsta_pane_cp_g

0xdc3f,	// (0x000625bb) cell_graphic2_pane_t2_ParamLimits

0xdc3f,	// (0x000625bb) cell_graphic2_pane_t2

0x0001,

0xfdd1,	// (0x0006474d) cell_graphic2_pane_t_ParamLimits

0xfdd1,	// (0x0006474d) cell_graphic2_pane_t

0xdc6c,	// (0x000625e8) cell_graphic2_control_pane_t1

0x6963,	// (0x0005b2df) signal_pane_g3_ParamLimits

0x6963,	// (0x0005b2df) signal_pane_g3

0x6975,	// (0x0005b2f1) signal_pane_g4_ParamLimits

0x6975,	// (0x0005b2f1) signal_pane_g4

0xeade,	// (0x0006345a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xeade,	// (0x0006345a) cell_ai5_widget_list_row_pane_t3

0xec04,	// (0x00063580) cell_ituss_key_pane_t1_ParamLimits

0xec04,	// (0x00063580) cell_ituss_key_pane_t1

0x93ab,	// (0x0005dd27) form_field_data_wide_pane_vc_t2_ParamLimits

0x93ab,	// (0x0005dd27) form_field_data_wide_pane_vc_t2

0x93bf,	// (0x0005dd3b) form_field_data_wide_pane_vc_t3_ParamLimits

0x93bf,	// (0x0005dd3b) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00064180) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00064180) form_field_data_wide_pane_vc_t

0xb18f,	// (0x0005fb0b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb18f,	// (0x0005fb0b) form_field_slider_wide_pane_vc_t3

0xb26d,	// (0x0005fbe9) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb26d,	// (0x0005fbe9) form_field_popup_wide_pane_vc_t2

0xb284,	// (0x0005fc00) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb284,	// (0x0005fc00) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaae,	// (0x0006442a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaae,	// (0x0006442a) form_field_popup_wide_pane_vc_t

0x89be,	// (0x0005d33a) aid_fshwr2_btn_pane_ParamLimits

0x89ca,	// (0x0005d346) aid_fshwr2_syb_pane_ParamLimits

0x89dc,	// (0x0005d358) aid_fshwr2_txt_pane_ParamLimits

0x8210,	// (0x0005cb8c) fshwr2_bg_pane_ParamLimits

0x89e8,	// (0x0005d364) fshwr2_func_candi_pane_ParamLimits

0x8a06,	// (0x0005d382) fshwr2_hwr_syb_pane_ParamLimits

0x8a20,	// (0x0005d39c) fshwr2_icf_pane_ParamLimits

0xaeab,	// (0x0005f827) list_double_graphic_pane_vc_g4_ParamLimits

0xaeab,	// (0x0005f827) list_double_graphic_pane_vc_g4

0x8c4e,	// (0x0005d5ca) cell_ituss_key_pane_g3_ParamLimits

0x8c4e,	// (0x0005d5ca) cell_ituss_key_pane_g3

0x8cf6,	// (0x0005d672) cell_ituss_key_t5_ParamLimits

0x8cf6,	// (0x0005d672) cell_ituss_key_t5

0xeb48,	// (0x000634c4) popup_fep_vkbss_window_ParamLimits

0xe068,	// (0x000629e4) aid_cell_ai5_quarter

0xed2b,	// (0x000636a7) icf_edit_indi_pane_t1_ParamLimits

0x5b21,	// (0x0005a49d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x5b21,	// (0x0005a49d) aid_tch_indicator_popup_pane_cp2

0x5b34,	// (0x0005a4b0) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x5b34,	// (0x0005a4b0) aid_tch_query_popup_data_pane_cp2

0x9718,	// (0x0005e094) aid_tch_query_popup_pane_ParamLimits

0x9718,	// (0x0005e094) aid_tch_query_popup_pane

0x9718,	// (0x0005e094) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9718,	// (0x0005e094) aid_tch_query_popup_data_pane_cp1

0xe58c,	// (0x00062f08) cell_fshwr2_syb_bg_pane_ParamLimits

0x8b1c,	// (0x0005d498) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x8b30,	// (0x0005d4ac) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeb32,	// (0x000634ae) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large

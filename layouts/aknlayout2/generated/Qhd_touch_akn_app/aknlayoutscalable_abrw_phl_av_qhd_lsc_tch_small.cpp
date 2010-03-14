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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00027de5 };

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
0x6ee3,	// (0x0002ecc8) Screen

0x6eef,	// (0x0002ecd4) application_window_ParamLimits

0x6eef,	// (0x0002ecd4) application_window

0x8b27,	// (0x0003090c) screen_g1

0x6f27,	// (0x0002ed0c) area_bottom_pane_ParamLimits

0x6f27,	// (0x0002ed0c) area_bottom_pane

0x080f,	// (0x000285f4) area_top_pane_ParamLimits

0x080f,	// (0x000285f4) area_top_pane

0x08ad,	// (0x00028692) main_pane_ParamLimits

0x08ad,	// (0x00028692) main_pane

0x8b31,	// (0x00030916) misc_graphics

0x8037,	// (0x0002fe1c) battery_pane_ParamLimits

0x8037,	// (0x0002fe1c) battery_pane

0xcba1,	// (0x00034986) bg_status_flat_pane_g8

0xcba9,	// (0x0003498e) bg_status_flat_pane_g9

0xc29f,	// (0x00034084) context_pane_ParamLimits

0xc29f,	// (0x00034084) context_pane

0x81a2,	// (0x0002ff87) navi_pane_ParamLimits

0x81a2,	// (0x0002ff87) navi_pane

0x821a,	// (0x0002ffff) signal_pane_ParamLimits

0x821a,	// (0x0002ffff) signal_pane

0x0008,

0xf885,	// (0x0003766a) bg_status_flat_pane_g

0x82aa,	// (0x0003008f) status_pane_g1_ParamLimits

0x82aa,	// (0x0003008f) status_pane_g1

0x82c0,	// (0x000300a5) status_pane_g2_ParamLimits

0x82c0,	// (0x000300a5) status_pane_g2

0xc304,	// (0x000340e9) status_pane_g3_ParamLimits

0xc304,	// (0x000340e9) status_pane_g3

0x0004,

0xf7b8,	// (0x0003759d) status_pane_g_ParamLimits

0xf7b8,	// (0x0003759d) status_pane_g

0x82cc,	// (0x000300b1) title_pane_ParamLimits

0x82cc,	// (0x000300b1) title_pane

0x832f,	// (0x00030114) uni_indicator_pane_ParamLimits

0x832f,	// (0x00030114) uni_indicator_pane

0xc0ca,	// (0x00033eaf) bg_list_pane_ParamLimits

0xc0ca,	// (0x00033eaf) bg_list_pane

0x78fe,	// (0x0002f6e3) find_pane

0x7906,	// (0x0002f6eb) listscroll_app_pane_ParamLimits

0x7906,	// (0x0002f6eb) listscroll_app_pane

0xc0ea,	// (0x00033ecf) listscroll_form_pane

0x7912,	// (0x0002f6f7) listscroll_gen_pane_ParamLimits

0x7912,	// (0x0002f6f7) listscroll_gen_pane

0xc0ea,	// (0x00033ecf) listscroll_set_pane

0xc9d4,	// (0x000347b9) main_idle_act_pane

0xbe96,	// (0x00033c7b) main_idle_trad_pane

0xbe96,	// (0x00033c7b) main_list_empty_pane

0xb4a5,	// (0x0003328a) main_midp_pane

0xc104,	// (0x00033ee9) main_pane_g1_ParamLimits

0xc104,	// (0x00033ee9) main_pane_g1

0x7934,	// (0x0002f719) popup_ai_message_window_ParamLimits

0x7934,	// (0x0002f719) popup_ai_message_window

0x79c5,	// (0x0002f7aa) popup_fep_china_uni_window_ParamLimits

0x79c5,	// (0x0002f7aa) popup_fep_china_uni_window

0xc13a,	// (0x00033f1f) popup_fep_japan_candidate_window_ParamLimits

0xc13a,	// (0x00033f1f) popup_fep_japan_candidate_window

0xc15a,	// (0x00033f3f) popup_fep_japan_predictive_window_ParamLimits

0xc15a,	// (0x00033f3f) popup_fep_japan_predictive_window

0x7a21,	// (0x0002f806) popup_find_window

0x7a3e,	// (0x0002f823) popup_grid_graphic_window_ParamLimits

0x7a3e,	// (0x0002f823) popup_grid_graphic_window

0xc18a,	// (0x00033f6f) popup_large_graphic_colour_window

0x7ad6,	// (0x0002f8bb) popup_menu_window_ParamLimits

0x7ad6,	// (0x0002f8bb) popup_menu_window

0x7c90,	// (0x0002fa75) popup_note_image_window

0x7c56,	// (0x0002fa3b) popup_note_wait_window_ParamLimits

0x7c56,	// (0x0002fa3b) popup_note_wait_window

0x7ca8,	// (0x0002fa8d) popup_note_window_ParamLimits

0x7ca8,	// (0x0002fa8d) popup_note_window

0x7d4e,	// (0x0002fb33) popup_query_code_window_ParamLimits

0x7d4e,	// (0x0002fb33) popup_query_code_window

0xc1b0,	// (0x00033f95) popup_query_data_code_window_ParamLimits

0xc1b0,	// (0x00033f95) popup_query_data_code_window

0x7d88,	// (0x0002fb6d) popup_query_data_window_ParamLimits

0x7d88,	// (0x0002fb6d) popup_query_data_window

0x7dfe,	// (0x0002fbe3) popup_query_sat_info_window_ParamLimits

0x7dfe,	// (0x0002fbe3) popup_query_sat_info_window

0x7e95,	// (0x0002fc7a) popup_snote_single_graphic_window_ParamLimits

0x7e95,	// (0x0002fc7a) popup_snote_single_graphic_window

0x7e95,	// (0x0002fc7a) popup_snote_single_text_window_ParamLimits

0x7e95,	// (0x0002fc7a) popup_snote_single_text_window

0xc1cd,	// (0x00033fb2) popup_sub_window_general

0xc215,	// (0x00033ffa) popup_window_general_ParamLimits

0xc215,	// (0x00033ffa) popup_window_general

0xc22a,	// (0x0003400f) power_save_pane

0x776a,	// (0x0002f54f) control_pane_g1_ParamLimits

0x776a,	// (0x0002f54f) control_pane_g1

0x7793,	// (0x0002f578) control_pane_g2_ParamLimits

0x7793,	// (0x0002f578) control_pane_g2

0xc0a4,	// (0x00033e89) control_pane_g3_ParamLimits

0xc0a4,	// (0x00033e89) control_pane_g3

0x0007,

0xf7a0,	// (0x00037585) control_pane_g_ParamLimits

0xf7a0,	// (0x00037585) control_pane_g

0x77f7,	// (0x0002f5dc) control_pane_t1_ParamLimits

0x77f7,	// (0x0002f5dc) control_pane_t1

0x7855,	// (0x0002f63a) control_pane_t2_ParamLimits

0x7855,	// (0x0002f63a) control_pane_t2

0x0002,

0xf7b1,	// (0x00037596) control_pane_t_ParamLimits

0xf7b1,	// (0x00037596) control_pane_t

0xbfc5,	// (0x00033daa) navi_navi_volume_pane_cp1

0xbfce,	// (0x00033db3) status_small_icon_pane

0xbfd6,	// (0x00033dbb) status_small_pane_g1_ParamLimits

0xbfd6,	// (0x00033dbb) status_small_pane_g1

0xc00a,	// (0x00033def) status_small_pane_g2_ParamLimits

0xc00a,	// (0x00033def) status_small_pane_g2

0xc016,	// (0x00033dfb) status_small_pane_g3_ParamLimits

0xc016,	// (0x00033dfb) status_small_pane_g3

0xc022,	// (0x00033e07) status_small_pane_g4_ParamLimits

0xc022,	// (0x00033e07) status_small_pane_g4

0xc02e,	// (0x00033e13) status_small_pane_g5_ParamLimits

0xc02e,	// (0x00033e13) status_small_pane_g5

0xc03d,	// (0x00033e22) status_small_pane_g6_ParamLimits

0xc03d,	// (0x00033e22) status_small_pane_g6

0x0007,

0xf78f,	// (0x00037574) status_small_pane_g_ParamLimits

0xf78f,	// (0x00037574) status_small_pane_g

0xc06d,	// (0x00033e52) status_small_pane_t1

0xc090,	// (0x00033e75) status_small_wait_pane_ParamLimits

0xc090,	// (0x00033e75) status_small_wait_pane

0x75e8,	// (0x0002f3cd) aid_levels_signal_ParamLimits

0x75e8,	// (0x0002f3cd) aid_levels_signal

0x7600,	// (0x0002f3e5) signal_pane_g1_ParamLimits

0x7600,	// (0x0002f3e5) signal_pane_g1

0x761b,	// (0x0002f400) signal_pane_g2_ParamLimits

0x761b,	// (0x0002f400) signal_pane_g2

0x0003,

0xf720,	// (0x00037505) signal_pane_g_ParamLimits

0xf720,	// (0x00037505) signal_pane_g

0xb9fc,	// (0x000337e1) context_pane_g1

0x70a0,	// (0x0002ee85) title_pane_g1

0x70d7,	// (0x0002eebc) title_pane_t1

0x8b47,	// (0x0003092c) title_pane_t2

0x8b6d,	// (0x00030952) title_pane_t3

0x0002,

0xf56f,	// (0x00037354) title_pane_t

0x8357,	// (0x0003013c) aid_levels_battery_ParamLimits

0x8357,	// (0x0003013c) aid_levels_battery

0x8373,	// (0x00030158) battery_pane_g1_ParamLimits

0x8373,	// (0x00030158) battery_pane_g1

0x8390,	// (0x00030175) battery_pane_g2_ParamLimits

0x8390,	// (0x00030175) battery_pane_g2

0x0001,

0xf7c3,	// (0x000375a8) battery_pane_g_ParamLimits

0xf7c3,	// (0x000375a8) battery_pane_g

0xd434,	// (0x00035219) uni_indicator_pane_g1

0xd449,	// (0x0003522e) uni_indicator_pane_g2

0xd45f,	// (0x00035244) uni_indicator_pane_g3

0x0005,

0x0096,	// (0x00027e7b) uni_indicator_pane_g

0xbd08,	// (0x00033aed) navi_icon_pane_ParamLimits

0xbd08,	// (0x00033aed) navi_icon_pane

0xbc51,	// (0x00033a36) navi_midp_pane

0xbd24,	// (0x00033b09) navi_navi_pane

0xbd2e,	// (0x00033b13) navi_text_pane_ParamLimits

0xbd2e,	// (0x00033b13) navi_text_pane

0x8b27,	// (0x0003090c) status_small_wait_pane_g1

0x96c9,	// (0x000314ae) status_small_wait_pane_g2

0x0001,

0xf8ed,	// (0x000376d2) status_small_wait_pane_g

0xd180,	// (0x00034f65) navi_navi_icon_text_pane

0xd188,	// (0x00034f6d) navi_navi_pane_g1_ParamLimits

0xd188,	// (0x00034f6d) navi_navi_pane_g1

0xd19a,	// (0x00034f7f) navi_navi_pane_g2_ParamLimits

0xd19a,	// (0x00034f7f) navi_navi_pane_g2

0x0001,

0x005f,	// (0x00027e44) navi_navi_pane_g_ParamLimits

0x005f,	// (0x00027e44) navi_navi_pane_g

0xd1ac,	// (0x00034f91) navi_navi_tabs_pane

0xd1b5,	// (0x00034f9a) navi_navi_text_pane

0xd180,	// (0x00034f65) navi_navi_volume_pane

0xd15c,	// (0x00034f41) navi_text_pane_t1

0xd150,	// (0x00034f35) navi_icon_pane_g1

0xd0a3,	// (0x00034e88) navi_navi_text_pane_t1

0x8650,	// (0x00030435) navi_navi_volume_pane_g1

0x8658,	// (0x0003043d) volume_small_pane

0x99aa,	// (0x0003178f) navi_navi_icon_text_pane_g1

0x99b2,	// (0x00031797) navi_navi_icon_text_pane_t1

0xbd24,	// (0x00033b09) navi_tabs_2_long_pane

0xbd24,	// (0x00033b09) navi_tabs_2_pane

0xbd24,	// (0x00033b09) navi_tabs_3_long_pane

0xbd24,	// (0x00033b09) navi_tabs_3_pane

0xbd24,	// (0x00033b09) navi_tabs_4_pane

0x8630,	// (0x00030415) tabs_2_active_pane_ParamLimits

0x8630,	// (0x00030415) tabs_2_active_pane

0x8640,	// (0x00030425) tabs_2_passive_pane_ParamLimits

0x8640,	// (0x00030425) tabs_2_passive_pane

0x85fe,	// (0x000303e3) tabs_3_active_pane_ParamLimits

0x85fe,	// (0x000303e3) tabs_3_active_pane

0x860e,	// (0x000303f3) tabs_3_passive_pane_ParamLimits

0x860e,	// (0x000303f3) tabs_3_passive_pane

0x861f,	// (0x00030404) tabs_3_passive_pane_cp_ParamLimits

0x861f,	// (0x00030404) tabs_3_passive_pane_cp

0x85ba,	// (0x0003039f) tabs_4_active_pane_ParamLimits

0x85ba,	// (0x0003039f) tabs_4_active_pane

0x85cb,	// (0x000303b0) tabs_4_passive_pane_ParamLimits

0x85cb,	// (0x000303b0) tabs_4_passive_pane

0x85dc,	// (0x000303c1) tabs_4_passive_pane_cp_ParamLimits

0x85dc,	// (0x000303c1) tabs_4_passive_pane_cp

0x85ed,	// (0x000303d2) tabs_4_passive_pane_cp2_ParamLimits

0x85ed,	// (0x000303d2) tabs_4_passive_pane_cp2

0x859a,	// (0x0003037f) tabs_2_long_active_pane_ParamLimits

0x859a,	// (0x0003037f) tabs_2_long_active_pane

0x85aa,	// (0x0003038f) tabs_2_long_passive_pane_ParamLimits

0x85aa,	// (0x0003038f) tabs_2_long_passive_pane

0x8567,	// (0x0003034c) tabs_3_long_active_pane_ParamLimits

0x8567,	// (0x0003034c) tabs_3_long_active_pane

0x8578,	// (0x0003035d) tabs_3_long_passive_pane_ParamLimits

0x8578,	// (0x0003035d) tabs_3_long_passive_pane

0x8589,	// (0x0003036e) tabs_3_long_passive_pane_cp_ParamLimits

0x8589,	// (0x0003036e) tabs_3_long_passive_pane_cp

0x219a,	// (0x00029f7f) volume_small_pane_g1

0x8516,	// (0x000302fb) volume_small_pane_g2

0x851f,	// (0x00030304) volume_small_pane_g3

0x8528,	// (0x0003030d) volume_small_pane_g4

0x8531,	// (0x00030316) volume_small_pane_g5

0x853a,	// (0x0003031f) volume_small_pane_g6

0x8543,	// (0x00030328) volume_small_pane_g7

0x854c,	// (0x00030331) volume_small_pane_g8

0x8555,	// (0x0003033a) volume_small_pane_g9

0x855e,	// (0x00030343) volume_small_pane_g10

0x0009,

0xf8ab,	// (0x00037690) volume_small_pane_g

0x8b7f,	// (0x00030964) bg_active_tab_pane_cp2_ParamLimits

0x8b7f,	// (0x00030964) bg_active_tab_pane_cp2

0x7163,	// (0x0002ef48) tabs_3_active_pane_g1

0x716b,	// (0x0002ef50) tabs_3_active_pane_t1

0x8b7f,	// (0x00030964) bg_passive_tab_pane_cp2_ParamLimits

0x8b7f,	// (0x00030964) bg_passive_tab_pane_cp2

0x7163,	// (0x0002ef48) tabs_3_passive_pane_g1

0x716b,	// (0x0002ef50) tabs_3_passive_pane_t1

0x8b7f,	// (0x00030964) bg_active_tab_pane_cp3_ParamLimits

0x8b7f,	// (0x00030964) bg_active_tab_pane_cp3

0x717d,	// (0x0002ef62) tabs_4_active_pane_g1

0x7185,	// (0x0002ef6a) tabs_4_active_pane_t1

0x8b7f,	// (0x00030964) bg_passive_tab_pane_cp3_ParamLimits

0x8b7f,	// (0x00030964) bg_passive_tab_pane_cp3

0x717d,	// (0x0002ef62) tabs_4_1_passive_pane_g1

0x7185,	// (0x0002ef6a) tabs_4_1_passive_pane_t1

0xb4a5,	// (0x0003328a) list_highlight_pane_cp2

0x9aee,	// (0x000318d3) list_set_pane_ParamLimits

0x9aee,	// (0x000318d3) list_set_pane

0x9b88,	// (0x0003196d) main_pane_set_t1_ParamLimits

0x9b88,	// (0x0003196d) main_pane_set_t1

0x9ba8,	// (0x0003198d) main_pane_set_t2_ParamLimits

0x9ba8,	// (0x0003198d) main_pane_set_t2

0x9bbc,	// (0x000319a1) main_pane_set_t3_ParamLimits

0x9bbc,	// (0x000319a1) main_pane_set_t3

0x9bce,	// (0x000319b3) main_pane_set_t4_ParamLimits

0x9bce,	// (0x000319b3) main_pane_set_t4

0x0003,

0xf92e,	// (0x00037713) main_pane_set_t_ParamLimits

0xf92e,	// (0x00037713) main_pane_set_t

0x9be0,	// (0x000319c5) setting_code_pane

0x9bea,	// (0x000319cf) setting_slider_graphic_pane

0x9bea,	// (0x000319cf) setting_slider_pane

0x9bea,	// (0x000319cf) setting_text_pane

0x9bea,	// (0x000319cf) setting_volume_pane

0x0bb8,	// (0x0002899d) volume_set_pane

0x8b8d,	// (0x00030972) bg_set_opt_pane_cp

0x0bc0,	// (0x000289a5) setting_slider_pane_t1

0x0bd9,	// (0x000289be) setting_slider_pane_t2

0x0bf3,	// (0x000289d8) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0003735b) setting_slider_pane_t

0x0c0b,	// (0x000289f0) slider_set_pane

0x8b31,	// (0x00030916) bg_set_opt_pane_cp2

0x8b9b,	// (0x00030980) setting_slider_graphic_pane_g1

0x0c21,	// (0x00028a06) setting_slider_graphic_pane_t1

0x0c31,	// (0x00028a16) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x00037362) setting_slider_graphic_pane_t

0x0c41,	// (0x00028a26) slider_set_pane_cp

0x8b31,	// (0x00030916) input_focus_pane_cp1

0xd642,	// (0x00035427) list_set_text_pane

0x8b27,	// (0x0003090c) setting_text_pane_g1

0x8b31,	// (0x00030916) input_focus_pane_cp2

0x8b27,	// (0x0003090c) setting_code_pane_g1

0x8ba4,	// (0x00030989) setting_code_pane_t1

0x49c6,	// (0x0002c7ab) set_text_pane_t1_ParamLimits

0x49c6,	// (0x0002c7ab) set_text_pane_t1

0xb3b4,	// (0x00033199) set_opt_bg_pane_g1

0xb3bc,	// (0x000331a1) set_opt_bg_pane_g2

0xd61c,	// (0x00035401) set_opt_bg_pane_g3

0xb3cc,	// (0x000331b1) set_opt_bg_pane_g4

0xb3d4,	// (0x000331b9) set_opt_bg_pane_g5

0xb3dc,	// (0x000331c1) set_opt_bg_pane_g6

0xd626,	// (0x0003540b) set_opt_bg_pane_g7

0xd62e,	// (0x00035413) set_opt_bg_pane_g8

0xd638,	// (0x0003541d) set_opt_bg_pane_g9

0x0008,

0xf91b,	// (0x00037700) set_opt_bg_pane_g

0xd60f,	// (0x000353f4) slider_set_pane_g1

0x2451,	// (0x0002a236) slider_set_pane_g2

0x0006,

0xf90c,	// (0x000376f1) slider_set_pane_g

0x23c8,	// (0x0002a1ad) volume_set_pane_g1

0x23d0,	// (0x0002a1b5) volume_set_pane_g2

0x23d8,	// (0x0002a1bd) volume_set_pane_g3

0x23e0,	// (0x0002a1c5) volume_set_pane_g4

0x23e8,	// (0x0002a1cd) volume_set_pane_g5

0x23f0,	// (0x0002a1d5) volume_set_pane_g6

0x23f8,	// (0x0002a1dd) volume_set_pane_g7

0x2400,	// (0x0002a1e5) volume_set_pane_g8

0x2408,	// (0x0002a1ed) volume_set_pane_g9

0x2410,	// (0x0002a1f5) volume_set_pane_g10

0x0009,

0xf8f2,	// (0x000376d7) volume_set_pane_g

0x7197,	// (0x0002ef7c) indicator_pane_ParamLimits

0x7197,	// (0x0002ef7c) indicator_pane

0x71bf,	// (0x0002efa4) main_idle_pane_g2_ParamLimits

0x71bf,	// (0x0002efa4) main_idle_pane_g2

0x71f7,	// (0x0002efdc) main_pane_idle_g1_ParamLimits

0x71f7,	// (0x0002efdc) main_pane_idle_g1

0x8bb2,	// (0x00030997) popup_clock_digital_analogue_window_ParamLimits

0x8bb2,	// (0x00030997) popup_clock_digital_analogue_window

0x721e,	// (0x0002f003) soft_indicator_pane_ParamLimits

0x721e,	// (0x0002f003) soft_indicator_pane

0x7238,	// (0x0002f01d) wallpaper_pane_ParamLimits

0x7238,	// (0x0002f01d) wallpaper_pane

0x8b27,	// (0x0003090c) wallpaper_pane_g1

0x724a,	// (0x0002f02f) indicator_pane_g1_ParamLimits

0x724a,	// (0x0002f02f) indicator_pane_g1

0xd799,	// (0x0003557e) navi_navi_icon_text_pane_srt_g1

0x8be0,	// (0x000309c5) soft_indicator_pane_t1

0x8bfa,	// (0x000309df) aid_ps_area_pane

0x7260,	// (0x0002f045) aid_ps_clock_pane

0x8c0b,	// (0x000309f0) aid_ps_indicator_pane

0x8c17,	// (0x000309fc) indicator_ps_pane_ParamLimits

0x8c17,	// (0x000309fc) indicator_ps_pane

0x8c26,	// (0x00030a0b) power_save_pane_g1_ParamLimits

0x8c26,	// (0x00030a0b) power_save_pane_g1

0x8c32,	// (0x00030a17) power_save_pane_g2_ParamLimits

0x8c32,	// (0x00030a17) power_save_pane_g2

0x0703,	// (0x000284e8) aid_navinavi_width_pane

0x8bfa,	// (0x000309df) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x00037367) power_save_pane_g_ParamLimits

0xf582,	// (0x00037367) power_save_pane_g

0x8c40,	// (0x00030a25) power_save_pane_t1_ParamLimits

0x8c40,	// (0x00030a25) power_save_pane_t1

0x7260,	// (0x0002f045) aid_ps_clock_pane_ParamLimits

0x8c0b,	// (0x000309f0) aid_ps_indicator_pane_ParamLimits

0x8c52,	// (0x00030a37) power_save_pane_t4_ParamLimits

0x8c52,	// (0x00030a37) power_save_pane_t4

0x0001,

0xf587,	// (0x0003736c) power_save_pane_t_ParamLimits

0xf587,	// (0x0003736c) power_save_pane_t

0x8c7c,	// (0x00030a61) power_save_t3_ParamLimits

0x8c7c,	// (0x00030a61) power_save_t3

0x8c67,	// (0x00030a4c) power_save_t2_ParamLimits

0x8c67,	// (0x00030a4c) power_save_t2

0x8c91,	// (0x00030a76) indicator_ps_pane_g1

0x726e,	// (0x0002f053) ai_gene_pane_ParamLimits

0x726e,	// (0x0002f053) ai_gene_pane

0x7285,	// (0x0002f06a) ai_links_pane_ParamLimits

0x7285,	// (0x0002f06a) ai_links_pane

0x729d,	// (0x0002f082) indicator_pane_cp1_ParamLimits

0x729d,	// (0x0002f082) indicator_pane_cp1

0x72ac,	// (0x0002f091) main_pane_idle_g1_cp_ParamLimits

0x72ac,	// (0x0002f091) main_pane_idle_g1_cp

0x8c9a,	// (0x00030a7f) popup_ai_links_title_window

0x72c4,	// (0x0002f0a9) soft_indicator_pane_cp1_ParamLimits

0x72c4,	// (0x0002f0a9) soft_indicator_pane_cp1

0xd422,	// (0x00035207) ai_links_pane_g1

0xd42b,	// (0x00035210) grid_ai_links_pane

0x9a72,	// (0x00031857) ai_gene_pane_1

0xd410,	// (0x000351f5) ai_gene_pane_2

0xd419,	// (0x000351fe) list_highlight_pane_cp4

0x9a4e,	// (0x00031833) cell_ai_link_pane_ParamLimits

0x9a4e,	// (0x00031833) cell_ai_link_pane

0xd408,	// (0x000351ed) cell_ai_link_pane_g1

0x96c9,	// (0x000314ae) cell_ai_link_pane_g2

0x0001,

0xf8e8,	// (0x000376cd) cell_ai_link_pane_g

0x8b31,	// (0x00030916) grid_highlight_cp2

0x8b31,	// (0x00030916) bg_popup_sub_pane_cp1

0x8cb1,	// (0x00030a96) popup_ai_links_title_window_t1

0xd356,	// (0x0003513b) ai_gene_pane_1_g1_ParamLimits

0xd356,	// (0x0003513b) ai_gene_pane_1_g1

0xd362,	// (0x00035147) ai_gene_pane_1_g2_ParamLimits

0xd362,	// (0x00035147) ai_gene_pane_1_g2

0x0001,

0x0082,	// (0x00027e67) ai_gene_pane_1_g_ParamLimits

0x0082,	// (0x00027e67) ai_gene_pane_1_g

0xd36f,	// (0x00035154) ai_gene_pane_1_t1_ParamLimits

0xd36f,	// (0x00035154) ai_gene_pane_1_t1

0xd3a3,	// (0x00035188) grid_ai_soft_ind_pane

0xd341,	// (0x00035126) ai_gene_pane_2_t1_ParamLimits

0xd341,	// (0x00035126) ai_gene_pane_2_t1

0x72d8,	// (0x0002f0bd) main_pane_empty_t1_ParamLimits

0x72d8,	// (0x0002f0bd) main_pane_empty_t1

0x72f0,	// (0x0002f0d5) main_pane_empty_t2_ParamLimits

0x72f0,	// (0x0002f0d5) main_pane_empty_t2

0x7305,	// (0x0002f0ea) main_pane_empty_t3_ParamLimits

0x7305,	// (0x0002f0ea) main_pane_empty_t3

0x7317,	// (0x0002f0fc) main_pane_empty_t4_ParamLimits

0x7317,	// (0x0002f0fc) main_pane_empty_t4

0x7329,	// (0x0002f10e) main_pane_empty_t5_ParamLimits

0x7329,	// (0x0002f10e) main_pane_empty_t5

0x0004,

0xf58c,	// (0x00037371) main_pane_empty_t_ParamLimits

0xf58c,	// (0x00037371) main_pane_empty_t

0xb405,	// (0x000331ea) bg_popup_window_pane_ParamLimits

0xb405,	// (0x000331ea) bg_popup_window_pane

0xd0b1,	// (0x00034e96) find_popup_pane_cp2_ParamLimits

0xd0b1,	// (0x00034e96) find_popup_pane_cp2

0xd0bd,	// (0x00034ea2) heading_pane_ParamLimits

0xd0bd,	// (0x00034ea2) heading_pane

0x8b31,	// (0x00030916) bg_popup_sub_pane

0x99cf,	// (0x000317b4) bg_popup_window_pane_g1_ParamLimits

0x99cf,	// (0x000317b4) bg_popup_window_pane_g1

0x99de,	// (0x000317c3) bg_popup_window_pane_g2_ParamLimits

0x99de,	// (0x000317c3) bg_popup_window_pane_g2

0x99ea,	// (0x000317cf) bg_popup_window_pane_g3_ParamLimits

0x99ea,	// (0x000317cf) bg_popup_window_pane_g3

0x99f6,	// (0x000317db) bg_popup_window_pane_g4_ParamLimits

0x99f6,	// (0x000317db) bg_popup_window_pane_g4

0x9a05,	// (0x000317ea) bg_popup_window_pane_g5_ParamLimits

0x9a05,	// (0x000317ea) bg_popup_window_pane_g5

0x9a15,	// (0x000317fa) bg_popup_window_pane_g6_ParamLimits

0x9a15,	// (0x000317fa) bg_popup_window_pane_g6

0x9a21,	// (0x00031806) bg_popup_window_pane_g7_ParamLimits

0x9a21,	// (0x00031806) bg_popup_window_pane_g7

0x9a30,	// (0x00031815) bg_popup_window_pane_g8_ParamLimits

0x9a30,	// (0x00031815) bg_popup_window_pane_g8

0x9a3f,	// (0x00031824) bg_popup_window_pane_g9_ParamLimits

0x9a3f,	// (0x00031824) bg_popup_window_pane_g9

0xd097,	// (0x00034e7c) bg_popup_window_pane_g10_ParamLimits

0xd097,	// (0x00034e7c) bg_popup_window_pane_g10

0x0009,

0xf8c0,	// (0x000376a5) bg_popup_window_pane_g_ParamLimits

0xf8c0,	// (0x000376a5) bg_popup_window_pane_g

0xd04e,	// (0x00034e33) bg_popup_heading_pane_ParamLimits

0xd04e,	// (0x00034e33) bg_popup_heading_pane

0x271a,	// (0x0002a4ff) tabs_4_passive_pane_cp_srt_ParamLimits

0x271a,	// (0x0002a4ff) tabs_4_passive_pane_cp_srt

0x272c,	// (0x0002a511) tabs_4_passive_pane_srt_ParamLimits

0xd062,	// (0x00034e47) heading_pane_g2

0x272c,	// (0x0002a511) tabs_4_passive_pane_srt

0xc4f2,	// (0x000342d7) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc4f2,	// (0x000342d7) bg_passive_tab_pane_cp3_srt

0xd06a,	// (0x00034e4f) heading_pane_t1_ParamLimits

0xd06a,	// (0x00034e4f) heading_pane_t1

0xd081,	// (0x00034e66) heading_pane_t2_ParamLimits

0xd081,	// (0x00034e66) heading_pane_t2

0x0001,

0x0045,	// (0x00027e2a) heading_pane_t_ParamLimits

0x0045,	// (0x00027e2a) heading_pane_t

0xcb69,	// (0x0003494e) bg_popup_heading_pane_g1

0xcbfa,	// (0x000349df) bg_popup_heading_pane_g2

0xcc04,	// (0x000349e9) bg_popup_heading_pane_g3

0xcc0e,	// (0x000349f3) bg_popup_heading_pane_g4

0xcc18,	// (0x000349fd) bg_popup_heading_pane_g5

0xcc22,	// (0x00034a07) bg_popup_heading_pane_g6

0xcc2a,	// (0x00034a0f) bg_popup_heading_pane_g7

0xcc32,	// (0x00034a17) bg_popup_heading_pane_g8

0xcc3c,	// (0x00034a21) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0003767d) bg_popup_heading_pane_g

0xc3fa,	// (0x000341df) bg_popup_sub_pane_g1

0xc40a,	// (0x000341ef) bg_popup_sub_pane_g2

0xc402,	// (0x000341e7) bg_popup_sub_pane_g3

0xc41a,	// (0x000341ff) bg_popup_sub_pane_g4

0xc412,	// (0x000341f7) bg_popup_sub_pane_g5

0xc422,	// (0x00034207) bg_popup_sub_pane_g6

0xc42a,	// (0x0003420f) bg_popup_sub_pane_g7

0xc43a,	// (0x0003421f) bg_popup_sub_pane_g8

0xc432,	// (0x00034217) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x00037657) bg_popup_sub_pane_g

0x8b7f,	// (0x00030964) bg_popup_window_pane_cp5_ParamLimits

0x8b7f,	// (0x00030964) bg_popup_window_pane_cp5

0x8cce,	// (0x00030ab3) popup_note_window_g1_ParamLimits

0x8cce,	// (0x00030ab3) popup_note_window_g1

0x8cda,	// (0x00030abf) popup_note_window_t1_ParamLimits

0x8cda,	// (0x00030abf) popup_note_window_t1

0x8cf0,	// (0x00030ad5) popup_note_window_t2_ParamLimits

0x8cf0,	// (0x00030ad5) popup_note_window_t2

0x8d06,	// (0x00030aeb) popup_note_window_t3_ParamLimits

0x8d06,	// (0x00030aeb) popup_note_window_t3

0x8d1c,	// (0x00030b01) popup_note_window_t4_ParamLimits

0x8d1c,	// (0x00030b01) popup_note_window_t4

0x8d44,	// (0x00030b29) popup_note_window_t5_ParamLimits

0x8d44,	// (0x00030b29) popup_note_window_t5

0x0004,

0xf597,	// (0x0003737c) popup_note_window_t_ParamLimits

0xf597,	// (0x0003737c) popup_note_window_t

0x8d68,	// (0x00030b4d) bg_popup_window_pane_cp6_ParamLimits

0x8d68,	// (0x00030b4d) bg_popup_window_pane_cp6

0xcae5,	// (0x000348ca) popup_note_image_window_g1_ParamLimits

0xcae5,	// (0x000348ca) popup_note_image_window_g1

0xcaf1,	// (0x000348d6) popup_note_image_window_g2_ParamLimits

0xcaf1,	// (0x000348d6) popup_note_image_window_g2

0x0001,

0xf866,	// (0x0003764b) popup_note_image_window_g_ParamLimits

0xf866,	// (0x0003764b) popup_note_image_window_g

0xcb0a,	// (0x000348ef) popup_note_image_window_t1_ParamLimits

0xcb0a,	// (0x000348ef) popup_note_image_window_t1

0xcb23,	// (0x00034908) popup_note_image_window_t2_ParamLimits

0xcb23,	// (0x00034908) popup_note_image_window_t2

0xcb3c,	// (0x00034921) popup_note_image_window_t3_ParamLimits

0xcb3c,	// (0x00034921) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x00037650) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x00037650) popup_note_image_window_t

0xc9a4,	// (0x00034789) bg_popup_window_pane_cp7_ParamLimits

0xc9a4,	// (0x00034789) bg_popup_window_pane_cp7

0xc9f2,	// (0x000347d7) popup_note_wait_window_g1_ParamLimits

0xc9f2,	// (0x000347d7) popup_note_wait_window_g1

0xc9fe,	// (0x000347e3) popup_note_wait_window_g2_ParamLimits

0xc9fe,	// (0x000347e3) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x00037639) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x00037639) popup_note_wait_window_g

0xca16,	// (0x000347fb) popup_note_wait_window_t1_ParamLimits

0xca16,	// (0x000347fb) popup_note_wait_window_t1

0xca3d,	// (0x00034822) popup_note_wait_window_t2_ParamLimits

0xca3d,	// (0x00034822) popup_note_wait_window_t2

0xca5a,	// (0x0003483f) popup_note_wait_window_t3_ParamLimits

0xca5a,	// (0x0003483f) popup_note_wait_window_t3

0xca6d,	// (0x00034852) popup_note_wait_window_t4_ParamLimits

0xca6d,	// (0x00034852) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x00037640) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x00037640) popup_note_wait_window_t

0xca92,	// (0x00034877) wait_bar_pane_ParamLimits

0xca92,	// (0x00034877) wait_bar_pane

0x8b31,	// (0x00030916) wait_anim_pane

0x8b31,	// (0x00030916) wait_border_pane

0x8b27,	// (0x0003090c) wait_anim_pane_g1

0x8b27,	// (0x0003090c) wait_anim_pane_g2

0x0001,

0xf71b,	// (0x00037500) wait_anim_pane_g

0xc948,	// (0x0003472d) wait_border_pane_g1

0xc953,	// (0x00034738) wait_border_pane_g2

0xc95c,	// (0x00034741) wait_border_pane_g3

0x0002,

0xf84d,	// (0x00037632) wait_border_pane_g

0xc7b3,	// (0x00034598) bg_popup_window_pane_cp16_ParamLimits

0xc7b3,	// (0x00034598) bg_popup_window_pane_cp16

0xc8b3,	// (0x00034698) indicator_popup_pane_cp4_ParamLimits

0xc8b3,	// (0x00034698) indicator_popup_pane_cp4

0xc8c7,	// (0x000346ac) popup_query_data_window_t1_ParamLimits

0xc8c7,	// (0x000346ac) popup_query_data_window_t1

0xc8d9,	// (0x000346be) popup_query_data_window_t2_ParamLimits

0xc8d9,	// (0x000346be) popup_query_data_window_t2

0xc8f2,	// (0x000346d7) popup_query_data_window_t3_ParamLimits

0xc8f2,	// (0x000346d7) popup_query_data_window_t3

0x0002,

0xf846,	// (0x0003762b) popup_query_data_window_t_ParamLimits

0xf846,	// (0x0003762b) popup_query_data_window_t

0xc90c,	// (0x000346f1) query_popup_data_pane_ParamLimits

0xc90c,	// (0x000346f1) query_popup_data_pane

0xc920,	// (0x00034705) query_popup_data_pane_cp1_ParamLimits

0xc920,	// (0x00034705) query_popup_data_pane_cp1

0xc7b3,	// (0x00034598) bg_popup_window_pane_cp10_ParamLimits

0xc7b3,	// (0x00034598) bg_popup_window_pane_cp10

0xc7e5,	// (0x000345ca) indicator_popup_pane_ParamLimits

0xc7e5,	// (0x000345ca) indicator_popup_pane

0xc807,	// (0x000345ec) popup_query_code_window_t1_ParamLimits

0xc807,	// (0x000345ec) popup_query_code_window_t1

0xc821,	// (0x00034606) popup_query_code_window_t2_ParamLimits

0xc821,	// (0x00034606) popup_query_code_window_t2

0xc86a,	// (0x0003464f) popup_query_code_window_t3_ParamLimits

0xc86a,	// (0x0003464f) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x00037624) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x00037624) popup_query_code_window_t

0xc899,	// (0x0003467e) query_popup_pane_ParamLimits

0xc899,	// (0x0003467e) query_popup_pane

0x8d68,	// (0x00030b4d) bg_popup_window_pane_cp15_ParamLimits

0x8d68,	// (0x00030b4d) bg_popup_window_pane_cp15

0x8d86,	// (0x00030b6b) indicator_popup_pane_cp1_ParamLimits

0x8d86,	// (0x00030b6b) indicator_popup_pane_cp1

0x960e,	// (0x000313f3) indicator_popup_pane_cp2_ParamLimits

0x960e,	// (0x000313f3) indicator_popup_pane_cp2

0x9621,	// (0x00031406) popup_query_data_code_window_g1_ParamLimits

0x9621,	// (0x00031406) popup_query_data_code_window_g1

0x9634,	// (0x00031419) popup_query_data_code_window_t1_ParamLimits

0x9634,	// (0x00031419) popup_query_data_code_window_t1

0x9646,	// (0x0003142b) popup_query_data_code_window_t2_ParamLimits

0x9646,	// (0x0003142b) popup_query_data_code_window_t2

0x9658,	// (0x0003143d) popup_query_data_code_window_t3_ParamLimits

0x9658,	// (0x0003143d) popup_query_data_code_window_t3

0x966e,	// (0x00031453) popup_query_data_code_window_t4_ParamLimits

0x966e,	// (0x00031453) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x00037387) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x00037387) popup_query_data_code_window_t

0x1f5c,	// (0x00029d41) list_single_midp_graphic_pane_g3

0x9686,	// (0x0003146b) query_popup_data_pane_cp2_ParamLimits

0x9699,	// (0x0003147e) query_popup_pane_cp2_ParamLimits

0x9699,	// (0x0003147e) query_popup_pane_cp2

0x8b31,	// (0x00030916) bg_popup_window_pane_cp11

0xc7ab,	// (0x00034590) heading_pane_cp5

0x9727,	// (0x0003150c) listscroll_popup_info_pane

0x8b31,	// (0x00030916) input_focus_pane_cp3

0x96ac,	// (0x00031491) query_popup_pane_t1

0x96ba,	// (0x0003149f) list_popup_info_pane_ParamLimits

0x96ba,	// (0x0003149f) list_popup_info_pane

0x96c9,	// (0x000314ae) listscroll_popup_info_pane_g1

0x96d1,	// (0x000314b6) scroll_pane_cp7

0x96db,	// (0x000314c0) popup_info_list_pane_t1_ParamLimits

0x96db,	// (0x000314c0) popup_info_list_pane_t1

0x96f5,	// (0x000314da) popup_info_list_pane_t2_ParamLimits

0x96f5,	// (0x000314da) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x00037390) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x00037390) popup_info_list_pane_t

0x8b31,	// (0x00030916) bg_popup_window_pane_cp12

0xd7b3,	// (0x00035598) find_popup_pane

0x8b8d,	// (0x00030972) bg_popup_window_pane_cp3

0x970f,	// (0x000314f4) heading_pane_cp3

0x971b,	// (0x00031500) listscroll_popup_graphic_pane

0x8b31,	// (0x00030916) bg_popup_window_pane_cp4

0x738b,	// (0x0002f170) heading_pane_cp4

0x9727,	// (0x0003150c) listscroll_popup_colour_pane

0x7393,	// (0x0002f178) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7393,	// (0x0002f178) cell_large_graphic_colour_none_popup_pane

0x73a7,	// (0x0002f18c) grid_large_graphic_colour_popup_pane_ParamLimits

0x73a7,	// (0x0002f18c) grid_large_graphic_colour_popup_pane

0x73cb,	// (0x0002f1b0) listscroll_popup_colour_pane_g1_ParamLimits

0x73cb,	// (0x0002f1b0) listscroll_popup_colour_pane_g1

0x73e2,	// (0x0002f1c7) listscroll_popup_colour_pane_g2_ParamLimits

0x73e2,	// (0x0002f1c7) listscroll_popup_colour_pane_g2

0x73f9,	// (0x0002f1de) listscroll_popup_colour_pane_g3_ParamLimits

0x73f9,	// (0x0002f1de) listscroll_popup_colour_pane_g3

0x7409,	// (0x0002f1ee) listscroll_popup_colour_pane_g4_ParamLimits

0x7409,	// (0x0002f1ee) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x00037395) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x00037395) listscroll_popup_colour_pane_g

0x972f,	// (0x00031514) scroll_pane_cp6_ParamLimits

0x972f,	// (0x00031514) scroll_pane_cp6

0x7419,	// (0x0002f1fe) cell_large_graphic_colour_popup_pane_ParamLimits

0x7419,	// (0x0002f1fe) cell_large_graphic_colour_popup_pane

0x9741,	// (0x00031526) cell_large_graphic_colour_none_popup_pane_t1

0x8b31,	// (0x00030916) grid_highlight_pane_cp5

0x9750,	// (0x00031535) cell_large_graphic_colour_popup_pane_g1

0x9758,	// (0x0003153d) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0003739e) cell_large_graphic_colour_popup_pane_g

0x9760,	// (0x00031545) cell_large_graphic_colour_popup_pane_g2_copy1

0x9769,	// (0x0003154e) grid_highlight_pane_cp4

0x9771,	// (0x00031556) bg_popup_window_pane_cp8_ParamLimits

0x9771,	// (0x00031556) bg_popup_window_pane_cp8

0x978c,	// (0x00031571) popup_snote_single_text_window_g1_ParamLimits

0x978c,	// (0x00031571) popup_snote_single_text_window_g1

0x979e,	// (0x00031583) popup_snote_single_text_window_t1_ParamLimits

0x979e,	// (0x00031583) popup_snote_single_text_window_t1

0x97b1,	// (0x00031596) popup_snote_single_text_window_t2_ParamLimits

0x97b1,	// (0x00031596) popup_snote_single_text_window_t2

0x97c4,	// (0x000315a9) popup_snote_single_text_window_t3_ParamLimits

0x97c4,	// (0x000315a9) popup_snote_single_text_window_t3

0x97fd,	// (0x000315e2) popup_snote_single_text_window_t4_ParamLimits

0x97fd,	// (0x000315e2) popup_snote_single_text_window_t4

0x9831,	// (0x00031616) popup_snote_single_text_window_t5_ParamLimits

0x9831,	// (0x00031616) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x000373a3) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x000373a3) popup_snote_single_text_window_t

0x9860,	// (0x00031645) bg_popup_window_pane_cp9_ParamLimits

0x9860,	// (0x00031645) bg_popup_window_pane_cp9

0x978c,	// (0x00031571) popup_snote_single_graphic_window_g1_ParamLimits

0x978c,	// (0x00031571) popup_snote_single_graphic_window_g1

0x986e,	// (0x00031653) popup_snote_single_graphic_window_g2_ParamLimits

0x986e,	// (0x00031653) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x000373ae) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x000373ae) popup_snote_single_graphic_window_g

0x987a,	// (0x0003165f) popup_snote_single_graphic_window_t1_ParamLimits

0x987a,	// (0x0003165f) popup_snote_single_graphic_window_t1

0x988d,	// (0x00031672) popup_snote_single_graphic_window_t2_ParamLimits

0x988d,	// (0x00031672) popup_snote_single_graphic_window_t2

0x98a0,	// (0x00031685) popup_snote_single_graphic_window_t3_ParamLimits

0x98a0,	// (0x00031685) popup_snote_single_graphic_window_t3

0x98d9,	// (0x000316be) popup_snote_single_graphic_window_t4_ParamLimits

0x98d9,	// (0x000316be) popup_snote_single_graphic_window_t4

0x990d,	// (0x000316f2) popup_snote_single_graphic_window_t5_ParamLimits

0x990d,	// (0x000316f2) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x000373b3) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x000373b3) popup_snote_single_graphic_window_t

0xd73b,	// (0x00035520) grid_graphic_popup_pane_ParamLimits

0xd73b,	// (0x00035520) grid_graphic_popup_pane

0xd763,	// (0x00035548) listscroll_popup_graphic_pane_g1_ParamLimits

0xd763,	// (0x00035548) listscroll_popup_graphic_pane_g1

0x9cda,	// (0x00031abf) listscroll_popup_graphic_pane_g2_ParamLimits

0x9cda,	// (0x00031abf) listscroll_popup_graphic_pane_g2

0x0001,

0xf958,	// (0x0003773d) listscroll_popup_graphic_pane_g_ParamLimits

0xf958,	// (0x0003773d) listscroll_popup_graphic_pane_g

0xc9e6,	// (0x000347cb) scroll_pane_cp5

0x9c9e,	// (0x00031a83) cell_graphic_popup_pane_ParamLimits

0x9c9e,	// (0x00031a83) cell_graphic_popup_pane

0xd706,	// (0x000354eb) cell_graphic_popup_pane_g1

0xd70e,	// (0x000354f3) cell_graphic_popup_pane_g2

0x9760,	// (0x00031545) cell_graphic_popup_pane_g3

0x0002,

0xf951,	// (0x00037736) cell_graphic_popup_pane_g

0xd717,	// (0x000354fc) cell_graphic_popup_pane_t2

0x9769,	// (0x0003154e) grid_highlight_pane_cp3

0x994e,	// (0x00031733) list_gen_pane_ParamLimits

0x994e,	// (0x00031733) list_gen_pane

0x9976,	// (0x0003175b) scroll_pane

0x9c55,	// (0x00031a3a) bg_list_pane_g1_ParamLimits

0x9c55,	// (0x00031a3a) bg_list_pane_g1

0xd6af,	// (0x00035494) bg_list_pane_g2_ParamLimits

0xd6af,	// (0x00035494) bg_list_pane_g2

0xd6c4,	// (0x000354a9) bg_list_pane_g3_ParamLimits

0xd6c4,	// (0x000354a9) bg_list_pane_g3

0xd6d8,	// (0x000354bd) bg_list_pane_g4_ParamLimits

0xd6d8,	// (0x000354bd) bg_list_pane_g4

0x9c72,	// (0x00031a57) bg_list_pane_g5_ParamLimits

0x9c72,	// (0x00031a57) bg_list_pane_g5

0x0004,

0xf946,	// (0x0003772b) bg_list_pane_g_ParamLimits

0xf946,	// (0x0003772b) bg_list_pane_g

0x9c1d,	// (0x00031a02) list_double2_graphic_large_graphic_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_double2_graphic_large_graphic_pane

0x9c1d,	// (0x00031a02) list_double2_graphic_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_double2_graphic_pane

0x9c1d,	// (0x00031a02) list_double2_large_graphic_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_double2_large_graphic_pane

0x9c1d,	// (0x00031a02) list_double2_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_double2_pane

0x9c1d,	// (0x00031a02) list_double_graphic_heading_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_double_graphic_heading_pane

0x9c1d,	// (0x00031a02) list_double_graphic_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_double_graphic_pane

0x9c1d,	// (0x00031a02) list_double_heading_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_double_heading_pane

0x9c1d,	// (0x00031a02) list_double_large_graphic_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_double_large_graphic_pane

0x9c1d,	// (0x00031a02) list_double_number_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_double_number_pane

0x9c1d,	// (0x00031a02) list_double_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_double_pane

0x9c1d,	// (0x00031a02) list_double_time_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_double_time_pane

0x9c1d,	// (0x00031a02) list_setting_number_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_setting_number_pane

0x9c1d,	// (0x00031a02) list_setting_pane_ParamLimits

0x9c1d,	// (0x00031a02) list_setting_pane

0x9c2f,	// (0x00031a14) list_single_2graphic_pane_ParamLimits

0x9c2f,	// (0x00031a14) list_single_2graphic_pane

0x9c2f,	// (0x00031a14) list_single_graphic_heading_pane_ParamLimits

0x9c2f,	// (0x00031a14) list_single_graphic_heading_pane

0x9c2f,	// (0x00031a14) list_single_graphic_pane_ParamLimits

0x9c2f,	// (0x00031a14) list_single_graphic_pane

0x9c2f,	// (0x00031a14) list_single_heading_pane_ParamLimits

0x9c2f,	// (0x00031a14) list_single_heading_pane

0x9c2f,	// (0x00031a14) list_single_large_graphic_pane_ParamLimits

0x9c2f,	// (0x00031a14) list_single_large_graphic_pane

0x9c2f,	// (0x00031a14) list_single_number_heading_pane_ParamLimits

0x9c2f,	// (0x00031a14) list_single_number_heading_pane

0x9c2f,	// (0x00031a14) list_single_number_pane_ParamLimits

0x9c2f,	// (0x00031a14) list_single_number_pane

0x9c2f,	// (0x00031a14) list_single_pane_ParamLimits

0x9c2f,	// (0x00031a14) list_single_pane

0x8b31,	// (0x00030916) list_highlight_pane_cp1

0x5d8a,	// (0x0002db6f) list_single_pane_g1_ParamLimits

0x5d8a,	// (0x0002db6f) list_single_pane_g1

0x5d96,	// (0x0002db7b) list_single_pane_g2_ParamLimits

0x5d96,	// (0x0002db7b) list_single_pane_g2

0x0001,

0xf5e0,	// (0x000373c5) list_single_pane_g_ParamLimits

0xf5e0,	// (0x000373c5) list_single_pane_g

0x5f8d,	// (0x0002dd72) list_single_pane_t1_ParamLimits

0x5f8d,	// (0x0002dd72) list_single_pane_t1

0x5d8a,	// (0x0002db6f) list_single_number_pane_g1_ParamLimits

0x5d8a,	// (0x0002db6f) list_single_number_pane_g1

0x5d96,	// (0x0002db7b) list_single_number_pane_g2_ParamLimits

0x5d96,	// (0x0002db7b) list_single_number_pane_g2

0x0001,

0xf5e0,	// (0x000373c5) list_single_number_pane_g_ParamLimits

0xf5e0,	// (0x000373c5) list_single_number_pane_g

0x5d74,	// (0x0002db59) list_single_number_pane_t1_ParamLimits

0x5d74,	// (0x0002db59) list_single_number_pane_t1

0x9373,	// (0x00031158) list_single_number_pane_t2_ParamLimits

0x9373,	// (0x00031158) list_single_number_pane_t2

0x0001,

0xf907,	// (0x000376ec) list_single_number_pane_t_ParamLimits

0xf907,	// (0x000376ec) list_single_number_pane_t

0x6374,	// (0x0002e159) list_single_graphic_pane_g1_ParamLimits

0x6374,	// (0x0002e159) list_single_graphic_pane_g1

0x5d8a,	// (0x0002db6f) list_single_graphic_pane_g2_ParamLimits

0x5d8a,	// (0x0002db6f) list_single_graphic_pane_g2

0x5d96,	// (0x0002db7b) list_single_graphic_pane_g3_ParamLimits

0x5d96,	// (0x0002db7b) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x000373be) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x000373be) list_single_graphic_pane_g

0x8d99,	// (0x00030b7e) list_single_graphic_pane_t1_ParamLimits

0x8d99,	// (0x00030b7e) list_single_graphic_pane_t1

0x5d8a,	// (0x0002db6f) list_single_heading_pane_g1_ParamLimits

0x5d8a,	// (0x0002db6f) list_single_heading_pane_g1

0x5d96,	// (0x0002db7b) list_single_heading_pane_g2_ParamLimits

0x5d96,	// (0x0002db7b) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x000373c5) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x000373c5) list_single_heading_pane_g

0x5faf,	// (0x0002dd94) list_single_heading_pane_t1_ParamLimits

0x5faf,	// (0x0002dd94) list_single_heading_pane_t1

0x8daf,	// (0x00030b94) list_single_heading_pane_t2_ParamLimits

0x8daf,	// (0x00030b94) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x000373ca) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x000373ca) list_single_heading_pane_t

0x5d8a,	// (0x0002db6f) list_single_number_heading_pane_g1_ParamLimits

0x5d8a,	// (0x0002db6f) list_single_number_heading_pane_g1

0x5d96,	// (0x0002db7b) list_single_number_heading_pane_g2_ParamLimits

0x5d96,	// (0x0002db7b) list_single_number_heading_pane_g2

0x0001,

0xf5e0,	// (0x000373c5) list_single_number_heading_pane_g_ParamLimits

0xf5e0,	// (0x000373c5) list_single_number_heading_pane_g

0x5faf,	// (0x0002dd94) list_single_number_heading_pane_t1_ParamLimits

0x5faf,	// (0x0002dd94) list_single_number_heading_pane_t1

0x8dc1,	// (0x00030ba6) list_single_number_heading_pane_t2_ParamLimits

0x8dc1,	// (0x00030ba6) list_single_number_heading_pane_t2

0x5f67,	// (0x0002dd4c) list_single_number_heading_pane_t3_ParamLimits

0x5f67,	// (0x0002dd4c) list_single_number_heading_pane_t3

0x0002,

0xf5ea,	// (0x000373cf) list_single_number_heading_pane_t_ParamLimits

0xf5ea,	// (0x000373cf) list_single_number_heading_pane_t

0x5d50,	// (0x0002db35) list_single_graphic_heading_pane_g1_ParamLimits

0x5d50,	// (0x0002db35) list_single_graphic_heading_pane_g1

0x8dd3,	// (0x00030bb8) list_single_graphic_heading_pane_g4_ParamLimits

0x8dd3,	// (0x00030bb8) list_single_graphic_heading_pane_g4

0x5d96,	// (0x0002db7b) list_single_graphic_heading_pane_g5_ParamLimits

0x5d96,	// (0x0002db7b) list_single_graphic_heading_pane_g5

0x0002,

0xf5f1,	// (0x000373d6) list_single_graphic_heading_pane_g_ParamLimits

0xf5f1,	// (0x000373d6) list_single_graphic_heading_pane_g

0x5faf,	// (0x0002dd94) list_single_graphic_heading_pane_t1_ParamLimits

0x5faf,	// (0x0002dd94) list_single_graphic_heading_pane_t1

0x8de4,	// (0x00030bc9) list_single_graphic_heading_pane_t2_ParamLimits

0x8de4,	// (0x00030bc9) list_single_graphic_heading_pane_t2

0x0001,

0xf5f8,	// (0x000373dd) list_single_graphic_heading_pane_t_ParamLimits

0xf5f8,	// (0x000373dd) list_single_graphic_heading_pane_t

0x5fa3,	// (0x0002dd88) list_single_large_graphic_pane_g1_ParamLimits

0x5fa3,	// (0x0002dd88) list_single_large_graphic_pane_g1

0x5d8a,	// (0x0002db6f) list_single_large_graphic_pane_g2_ParamLimits

0x5d8a,	// (0x0002db6f) list_single_large_graphic_pane_g2

0x5d96,	// (0x0002db7b) list_single_large_graphic_pane_g3_ParamLimits

0x5d96,	// (0x0002db7b) list_single_large_graphic_pane_g3

0x0002,

0xf5fd,	// (0x000373e2) list_single_large_graphic_pane_g_ParamLimits

0xf5fd,	// (0x000373e2) list_single_large_graphic_pane_g

0xc953,	// (0x00034738) wait_border_pane_g2_copy1

0x8df6,	// (0x00030bdb) list_single_large_graphic_pane_g4_cp2

0x5faf,	// (0x0002dd94) list_single_large_graphic_pane_t1_ParamLimits

0x5faf,	// (0x0002dd94) list_single_large_graphic_pane_t1

0x61a6,	// (0x0002df8b) list_double_pane_g1_ParamLimits

0x61a6,	// (0x0002df8b) list_double_pane_g1

0x8dfe,	// (0x00030be3) list_double_pane_g2_ParamLimits

0x8dfe,	// (0x00030be3) list_double_pane_g2

0x0001,

0xf604,	// (0x000373e9) list_double_pane_g_ParamLimits

0xf604,	// (0x000373e9) list_double_pane_g

0x8e0a,	// (0x00030bef) list_double_pane_t1_ParamLimits

0x8e0a,	// (0x00030bef) list_double_pane_t1

0x8e20,	// (0x00030c05) list_double_pane_t2_ParamLimits

0x8e20,	// (0x00030c05) list_double_pane_t2

0x0001,

0xf609,	// (0x000373ee) list_double_pane_t_ParamLimits

0xf609,	// (0x000373ee) list_double_pane_t

0x8e32,	// (0x00030c17) list_double2_pane_g1_ParamLimits

0x8e32,	// (0x00030c17) list_double2_pane_g1

0x4d1e,	// (0x0002cb03) list_double2_pane_g2_ParamLimits

0x4d1e,	// (0x0002cb03) list_double2_pane_g2

0x0001,

0xf60e,	// (0x000373f3) list_double2_pane_g_ParamLimits

0xf60e,	// (0x000373f3) list_double2_pane_g

0x8e43,	// (0x00030c28) list_double2_pane_t1_ParamLimits

0x8e43,	// (0x00030c28) list_double2_pane_t1

0x8e59,	// (0x00030c3e) list_double2_pane_t2_ParamLimits

0x8e59,	// (0x00030c3e) list_double2_pane_t2

0x0001,

0xf613,	// (0x000373f8) list_double2_pane_t_ParamLimits

0xf613,	// (0x000373f8) list_double2_pane_t

0x61a6,	// (0x0002df8b) list_double_number_pane_g1_ParamLimits

0x61a6,	// (0x0002df8b) list_double_number_pane_g1

0x8dfe,	// (0x00030be3) list_double_number_pane_g2_ParamLimits

0x8dfe,	// (0x00030be3) list_double_number_pane_g2

0x0001,

0xf604,	// (0x000373e9) list_double_number_pane_g_ParamLimits

0xf604,	// (0x000373e9) list_double_number_pane_g

0x8e6b,	// (0x00030c50) list_double_number_pane_t1_ParamLimits

0x8e6b,	// (0x00030c50) list_double_number_pane_t1

0x8e7d,	// (0x00030c62) list_double_number_pane_t2_ParamLimits

0x8e7d,	// (0x00030c62) list_double_number_pane_t2

0x8e93,	// (0x00030c78) list_double_number_pane_t3_ParamLimits

0x8e93,	// (0x00030c78) list_double_number_pane_t3

0x0002,

0xf618,	// (0x000373fd) list_double_number_pane_t_ParamLimits

0xf618,	// (0x000373fd) list_double_number_pane_t

0x8ea5,	// (0x00030c8a) list_double_graphic_pane_g1_ParamLimits

0x8ea5,	// (0x00030c8a) list_double_graphic_pane_g1

0x8eb1,	// (0x00030c96) list_double_graphic_pane_g2_ParamLimits

0x8eb1,	// (0x00030c96) list_double_graphic_pane_g2

0x8ec0,	// (0x00030ca5) list_double_graphic_pane_g3_ParamLimits

0x8ec0,	// (0x00030ca5) list_double_graphic_pane_g3

0x0003,

0xf61f,	// (0x00037404) list_double_graphic_pane_g_ParamLimits

0xf61f,	// (0x00037404) list_double_graphic_pane_g

0x8ed8,	// (0x00030cbd) list_double_graphic_pane_t1_ParamLimits

0x8ed8,	// (0x00030cbd) list_double_graphic_pane_t1

0x8eee,	// (0x00030cd3) list_double_graphic_pane_t2_ParamLimits

0x8eee,	// (0x00030cd3) list_double_graphic_pane_t2

0x0001,

0xf628,	// (0x0003740d) list_double_graphic_pane_t_ParamLimits

0xf628,	// (0x0003740d) list_double_graphic_pane_t

0x8f00,	// (0x00030ce5) list_double2_graphic_pane_g1_ParamLimits

0x8f00,	// (0x00030ce5) list_double2_graphic_pane_g1

0x8f0c,	// (0x00030cf1) list_double2_graphic_pane_g2_ParamLimits

0x8f0c,	// (0x00030cf1) list_double2_graphic_pane_g2

0x4d1e,	// (0x0002cb03) list_double2_graphic_pane_g3_ParamLimits

0x4d1e,	// (0x0002cb03) list_double2_graphic_pane_g3

0x0002,

0xf62d,	// (0x00037412) list_double2_graphic_pane_g_ParamLimits

0xf62d,	// (0x00037412) list_double2_graphic_pane_g

0x8f18,	// (0x00030cfd) list_double2_graphic_pane_t1_ParamLimits

0x8f18,	// (0x00030cfd) list_double2_graphic_pane_t1

0x8f2e,	// (0x00030d13) list_double2_graphic_pane_t2_ParamLimits

0x8f2e,	// (0x00030d13) list_double2_graphic_pane_t2

0x0001,

0xf634,	// (0x00037419) list_double2_graphic_pane_t_ParamLimits

0xf634,	// (0x00037419) list_double2_graphic_pane_t

0x8f40,	// (0x00030d25) list_double_large_graphic_pane_g1_ParamLimits

0x8f40,	// (0x00030d25) list_double_large_graphic_pane_g1

0x8f6b,	// (0x00030d50) list_double_large_graphic_pane_g2_ParamLimits

0x8f6b,	// (0x00030d50) list_double_large_graphic_pane_g2

0x8dfe,	// (0x00030be3) list_double_large_graphic_pane_g3_ParamLimits

0x8dfe,	// (0x00030be3) list_double_large_graphic_pane_g3

0x8f7c,	// (0x00030d61) list_double_large_graphic_pane_g4_ParamLimits

0x8f7c,	// (0x00030d61) list_double_large_graphic_pane_g4

0x0004,

0xf639,	// (0x0003741e) list_double_large_graphic_pane_g_ParamLimits

0xf639,	// (0x0003741e) list_double_large_graphic_pane_g

0x8f8e,	// (0x00030d73) list_double_large_graphic_pane_t1_ParamLimits

0x8f8e,	// (0x00030d73) list_double_large_graphic_pane_t1

0x8fa7,	// (0x00030d8c) list_double_large_graphic_pane_t2_ParamLimits

0x8fa7,	// (0x00030d8c) list_double_large_graphic_pane_t2

0x0001,

0xf644,	// (0x00037429) list_double_large_graphic_pane_t_ParamLimits

0xf644,	// (0x00037429) list_double_large_graphic_pane_t

0x8fb9,	// (0x00030d9e) list_double2_large_graphic_pane_g1_ParamLimits

0x8fb9,	// (0x00030d9e) list_double2_large_graphic_pane_g1

0x8e32,	// (0x00030c17) list_double2_large_graphic_pane_g2_ParamLimits

0x8e32,	// (0x00030c17) list_double2_large_graphic_pane_g2

0x4d1e,	// (0x0002cb03) list_double2_large_graphic_pane_g3_ParamLimits

0x4d1e,	// (0x0002cb03) list_double2_large_graphic_pane_g3

0x0002,

0xf649,	// (0x0003742e) list_double2_large_graphic_pane_g_ParamLimits

0xf649,	// (0x0003742e) list_double2_large_graphic_pane_g

0x8fc5,	// (0x00030daa) list_double2_large_graphic_pane_t1_ParamLimits

0x8fc5,	// (0x00030daa) list_double2_large_graphic_pane_t1

0x8fdb,	// (0x00030dc0) list_double2_large_graphic_pane_t2_ParamLimits

0x8fdb,	// (0x00030dc0) list_double2_large_graphic_pane_t2

0x0001,

0xf650,	// (0x00037435) list_double2_large_graphic_pane_t_ParamLimits

0xf650,	// (0x00037435) list_double2_large_graphic_pane_t

0x8fed,	// (0x00030dd2) list_double_heading_pane_g1_ParamLimits

0x8fed,	// (0x00030dd2) list_double_heading_pane_g1

0x4b29,	// (0x0002c90e) list_double_heading_pane_g2_ParamLimits

0x4b29,	// (0x0002c90e) list_double_heading_pane_g2

0x0001,

0xf655,	// (0x0003743a) list_double_heading_pane_g_ParamLimits

0xf655,	// (0x0003743a) list_double_heading_pane_g

0x8ffe,	// (0x00030de3) list_double_heading_pane_t1_ParamLimits

0x8ffe,	// (0x00030de3) list_double_heading_pane_t1

0x8e59,	// (0x00030c3e) list_double_heading_pane_t2_ParamLimits

0x8e59,	// (0x00030c3e) list_double_heading_pane_t2

0x0001,

0xf65a,	// (0x0003743f) list_double_heading_pane_t_ParamLimits

0xf65a,	// (0x0003743f) list_double_heading_pane_t

0x8ea5,	// (0x00030c8a) list_double_graphic_heading_pane_g1_ParamLimits

0x8ea5,	// (0x00030c8a) list_double_graphic_heading_pane_g1

0x8fed,	// (0x00030dd2) list_double_graphic_heading_pane_g2_ParamLimits

0x8fed,	// (0x00030dd2) list_double_graphic_heading_pane_g2

0x4b29,	// (0x0002c90e) list_double_graphic_heading_pane_g3_ParamLimits

0x4b29,	// (0x0002c90e) list_double_graphic_heading_pane_g3

0x0002,

0xf65f,	// (0x00037444) list_double_graphic_heading_pane_g_ParamLimits

0xf65f,	// (0x00037444) list_double_graphic_heading_pane_g

0x9014,	// (0x00030df9) list_double_graphic_heading_pane_t1_ParamLimits

0x9014,	// (0x00030df9) list_double_graphic_heading_pane_t1

0x8f2e,	// (0x00030d13) list_double_graphic_heading_pane_t2_ParamLimits

0x8f2e,	// (0x00030d13) list_double_graphic_heading_pane_t2

0x0001,

0xf666,	// (0x0003744b) list_double_graphic_heading_pane_t_ParamLimits

0xf666,	// (0x0003744b) list_double_graphic_heading_pane_t

0x8f6b,	// (0x00030d50) list_double_time_pane_g1_ParamLimits

0x8f6b,	// (0x00030d50) list_double_time_pane_g1

0x8dfe,	// (0x00030be3) list_double_time_pane_g2_ParamLimits

0x8dfe,	// (0x00030be3) list_double_time_pane_g2

0x0001,

0xf66b,	// (0x00037450) list_double_time_pane_g_ParamLimits

0xf66b,	// (0x00037450) list_double_time_pane_g

0x902a,	// (0x00030e0f) list_double_time_pane_t1_ParamLimits

0x902a,	// (0x00030e0f) list_double_time_pane_t1

0x9040,	// (0x00030e25) list_double_time_pane_t2_ParamLimits

0x9040,	// (0x00030e25) list_double_time_pane_t2

0x9052,	// (0x00030e37) list_double_time_pane_t3_ParamLimits

0x9052,	// (0x00030e37) list_double_time_pane_t3

0x9064,	// (0x00030e49) list_double_time_pane_t4_ParamLimits

0x9064,	// (0x00030e49) list_double_time_pane_t4

0x0003,

0xf670,	// (0x00037455) list_double_time_pane_t_ParamLimits

0xf670,	// (0x00037455) list_double_time_pane_t

0x8f0c,	// (0x00030cf1) list_setting_pane_g1_ParamLimits

0x8f0c,	// (0x00030cf1) list_setting_pane_g1

0x4d1e,	// (0x0002cb03) list_setting_pane_g2_ParamLimits

0x4d1e,	// (0x0002cb03) list_setting_pane_g2

0x0001,

0xf679,	// (0x0003745e) list_setting_pane_g_ParamLimits

0xf679,	// (0x0003745e) list_setting_pane_g

0x9076,	// (0x00030e5b) list_setting_pane_t1_ParamLimits

0x9076,	// (0x00030e5b) list_setting_pane_t1

0x9090,	// (0x00030e75) list_setting_pane_t2_ParamLimits

0x9090,	// (0x00030e75) list_setting_pane_t2

0x0002,

0xf67e,	// (0x00037463) list_setting_pane_t_ParamLimits

0xf67e,	// (0x00037463) list_setting_pane_t

0x90cf,	// (0x00030eb4) set_value_pane_cp_ParamLimits

0x90cf,	// (0x00030eb4) set_value_pane_cp

0x90db,	// (0x00030ec0) list_setting_number_pane_g1_ParamLimits

0x90db,	// (0x00030ec0) list_setting_number_pane_g1

0x90e7,	// (0x00030ecc) list_setting_number_pane_g2_ParamLimits

0x90e7,	// (0x00030ecc) list_setting_number_pane_g2

0x0001,

0xf685,	// (0x0003746a) list_setting_number_pane_g_ParamLimits

0xf685,	// (0x0003746a) list_setting_number_pane_g

0x90f3,	// (0x00030ed8) list_setting_number_pane_t1_ParamLimits

0x90f3,	// (0x00030ed8) list_setting_number_pane_t1

0x910c,	// (0x00030ef1) list_setting_number_pane_t2_ParamLimits

0x910c,	// (0x00030ef1) list_setting_number_pane_t2

0x9126,	// (0x00030f0b) list_setting_number_pane_t3_ParamLimits

0x9126,	// (0x00030f0b) list_setting_number_pane_t3

0x0003,

0xf68a,	// (0x0003746f) list_setting_number_pane_t_ParamLimits

0xf68a,	// (0x0003746f) list_setting_number_pane_t

0x90cf,	// (0x00030eb4) set_value_pane_ParamLimits

0x90cf,	// (0x00030eb4) set_value_pane

0xb2f4,	// (0x000330d9) bg_set_opt_pane_ParamLimits

0xb2f4,	// (0x000330d9) bg_set_opt_pane

0x5a3a,	// (0x0002d81f) set_value_pane_t1

0xb315,	// (0x000330fa) slider_set_pane_cp3

0xb31e,	// (0x00033103) volume_small_pane_cp

0xb327,	// (0x0003310c) list_form_gen_pane

0xb330,	// (0x00033115) scroll_pane_cp8

0x9169,	// (0x00030f4e) form_field_data_pane_ParamLimits

0x9169,	// (0x00030f4e) form_field_data_pane

0x9180,	// (0x00030f65) form_field_data_wide_pane_ParamLimits

0x9180,	// (0x00030f65) form_field_data_wide_pane

0x91a0,	// (0x00030f85) form_field_popup_pane_ParamLimits

0x91a0,	// (0x00030f85) form_field_popup_pane

0x91b8,	// (0x00030f9d) form_field_popup_wide_pane_ParamLimits

0x91b8,	// (0x00030f9d) form_field_popup_wide_pane

0x5ace,	// (0x0002d8b3) form_field_slider_pane_ParamLimits

0x5ace,	// (0x0002d8b3) form_field_slider_pane

0x5ae1,	// (0x0002d8c6) form_field_slider_wide_pane_ParamLimits

0x5ae1,	// (0x0002d8c6) form_field_slider_wide_pane

0xb341,	// (0x00033126) data_form_pane

0x91d9,	// (0x00030fbe) form_field_data_pane_t1

0xb34d,	// (0x00033132) input_focus_pane

0xb35b,	// (0x00033140) data_form_wide_pane

0x5b22,	// (0x0002d907) form_field_data_wide_pane_t1

0x977e,	// (0x00031563) input_focus_pane_cp6

0x91f3,	// (0x00030fd8) form_field_popup_pane_t1

0xb34d,	// (0x00033132) input_focus_pane_cp7

0xb387,	// (0x0003316c) list_form_pane

0x5b64,	// (0x0002d949) form_field_popup_wide_pane_t1

0xb34d,	// (0x00033132) input_focus_pane_cp8

0xb393,	// (0x00033178) list_form_wide_pane

0x9215,	// (0x00030ffa) form_field_slider_pane_t1_ParamLimits

0x9215,	// (0x00030ffa) form_field_slider_pane_t1

0x922d,	// (0x00031012) form_field_slider_pane_t2_ParamLimits

0x922d,	// (0x00031012) form_field_slider_pane_t2

0x0001,

0xf69a,	// (0x0003747f) form_field_slider_pane_t_ParamLimits

0xf69a,	// (0x0003747f) form_field_slider_pane_t

0x8b7f,	// (0x00030964) input_focus_pane_cp9_ParamLimits

0x8b7f,	// (0x00030964) input_focus_pane_cp9

0x9242,	// (0x00031027) slider_cont_pane_ParamLimits

0x9242,	// (0x00031027) slider_cont_pane

0xb3a2,	// (0x00033187) form_field_slider_wide_pane_t1_ParamLimits

0xb3a2,	// (0x00033187) form_field_slider_wide_pane_t1

0x5bc0,	// (0x0002d9a5) form_field_slider_wide_pane_t2_ParamLimits

0x5bc0,	// (0x0002d9a5) form_field_slider_wide_pane_t2

0x0001,

0xf69f,	// (0x00037484) form_field_slider_wide_pane_t_ParamLimits

0xf69f,	// (0x00037484) form_field_slider_wide_pane_t

0x8b7f,	// (0x00030964) input_focus_pane_cp10_ParamLimits

0x8b7f,	// (0x00030964) input_focus_pane_cp10

0x9256,	// (0x0003103b) slider_cont_pane_cp1_ParamLimits

0x9256,	// (0x0003103b) slider_cont_pane_cp1

0x926a,	// (0x0003104f) slider_form_pane_cp

0xb3b4,	// (0x00033199) input_focus_pane_g1

0xb3bc,	// (0x000331a1) input_focus_pane_g2

0xb3c4,	// (0x000331a9) input_focus_pane_g3

0xb3cc,	// (0x000331b1) input_focus_pane_g4

0xb3d4,	// (0x000331b9) input_focus_pane_g5

0xb3dc,	// (0x000331c1) input_focus_pane_g6

0xb3e4,	// (0x000331c9) input_focus_pane_g7

0xb3ec,	// (0x000331d1) input_focus_pane_g8

0xb3f4,	// (0x000331d9) input_focus_pane_g9

0x8b27,	// (0x0003090c) input_focus_pane_g10

0x0009,

0xf6a4,	// (0x00037489) input_focus_pane_g

0xc95c,	// (0x00034741) wait_border_pane_g3_copy1

0x9272,	// (0x00031057) data_form_pane_t1

0x8b27,	// (0x0003090c) wait_anim_pane_g1_copy1

0x9385,	// (0x0003116a) data_form_wide_pane_t1

0x7442,	// (0x0002f227) list_form_graphic_pane_cp_ParamLimits

0x7442,	// (0x0002f227) list_form_graphic_pane_cp

0xd64a,	// (0x0003542f) slider_form_pane_g1

0xd653,	// (0x00035438) slider_form_pane_g2

0x0006,

0xf937,	// (0x0003771c) slider_form_pane_g

0x7442,	// (0x0002f227) list_form_graphic_pane_ParamLimits

0x7442,	// (0x0002f227) list_form_graphic_pane

0x5c3e,	// (0x0002da23) list_form_graphic_pane_g1

0x5c46,	// (0x0002da2b) list_form_graphic_pane_t1_ParamLimits

0x5c46,	// (0x0002da2b) list_form_graphic_pane_t1

0x8b8d,	// (0x00030972) list_highlight_pane_cp5_ParamLimits

0x8b8d,	// (0x00030972) list_highlight_pane_cp5

0x928c,	// (0x00031071) find_pane_g1

0xb3fc,	// (0x000331e1) input_find_pane

0x9295,	// (0x0003107a) input_find_pane_g1_ParamLimits

0x9295,	// (0x0003107a) input_find_pane_g1

0x92a1,	// (0x00031086) input_find_pane_t1_ParamLimits

0x92a1,	// (0x00031086) input_find_pane_t1

0x92b6,	// (0x0003109b) input_find_pane_t2_ParamLimits

0x92b6,	// (0x0003109b) input_find_pane_t2

0x0001,

0xf6b9,	// (0x0003749e) input_find_pane_t_ParamLimits

0xf6b9,	// (0x0003749e) input_find_pane_t

0xb405,	// (0x000331ea) input_focus_pane_cp5_ParamLimits

0xb405,	// (0x000331ea) input_focus_pane_cp5

0x7460,	// (0x0002f245) bg_popup_window_pane_cp2_ParamLimits

0x7460,	// (0x0002f245) bg_popup_window_pane_cp2

0x746d,	// (0x0002f252) listscroll_menu_pane_ParamLimits

0x746d,	// (0x0002f252) listscroll_menu_pane

0x7479,	// (0x0002f25e) popup_submenu_window_ParamLimits

0x7479,	// (0x0002f25e) popup_submenu_window

0xb413,	// (0x000331f8) find_popup_pane_g1

0xb41b,	// (0x00033200) input_popup_find_pane_cp

0xb405,	// (0x000331ea) input_focus_pane_cp4_ParamLimits

0xb405,	// (0x000331ea) input_focus_pane_cp4

0xb425,	// (0x0003320a) input_popup_find_pane_t1_ParamLimits

0xb425,	// (0x0003320a) input_popup_find_pane_t1

0x8b31,	// (0x00030916) bg_popup_sub_pane_cp

0xb453,	// (0x00033238) listscroll_popup_sub_pane

0xb45b,	// (0x00033240) list_submenu_pane_ParamLimits

0xb45b,	// (0x00033240) list_submenu_pane

0xb46c,	// (0x00033251) scroll_pane_cp4

0xb474,	// (0x00033259) list_single_popup_submenu_pane_ParamLimits

0xb474,	// (0x00033259) list_single_popup_submenu_pane

0xb488,	// (0x0003326d) list_single_popup_submenu_pane_g1

0xb490,	// (0x00033275) list_single_popup_submenu_pane_t1_ParamLimits

0xb490,	// (0x00033275) list_single_popup_submenu_pane_t1

0x8b7f,	// (0x00030964) bg_active_tab_pane_cp1_ParamLimits

0x8b7f,	// (0x00030964) bg_active_tab_pane_cp1

0x74b3,	// (0x0002f298) tabs_2_active_pane_g1

0x74bb,	// (0x0002f2a0) tabs_2_active_pane_t1

0x8b7f,	// (0x00030964) bg_passive_tab_pane_cp1_ParamLimits

0x8b7f,	// (0x00030964) bg_passive_tab_pane_cp1

0x74b3,	// (0x0002f298) tabs_2_passive_pane_g1

0x74bb,	// (0x0002f2a0) tabs_2_passive_pane_t1

0x8b8d,	// (0x00030972) bg_active_tab_pane_cp4

0x74cd,	// (0x0002f2b2) tabs_2_long_active_pane_t1

0xb4a5,	// (0x0003328a) bg_passive_tab_pane_cp4

0x1f64,	// (0x00029d49) list_single_midp_graphic_pane_g4_ParamLimits

0x8b8d,	// (0x00030972) bg_active_tab_pane_cp5

0x74e0,	// (0x0002f2c5) tabs_3_long_active_pane_t1

0xb4a5,	// (0x0003328a) bg_passive_tab_pane_cp5

0x1f64,	// (0x00029d49) list_single_midp_graphic_pane_g4

0x8b8d,	// (0x00030972) bg_popup_window_pane_cp13_ParamLimits

0x8b8d,	// (0x00030972) bg_popup_window_pane_cp13

0xb4ba,	// (0x0003329f) listscroll_popup_fast_pane_ParamLimits

0xb4ba,	// (0x0003329f) listscroll_popup_fast_pane

0xb4c9,	// (0x000332ae) grid_popup_fast_pane_ParamLimits

0xb4c9,	// (0x000332ae) grid_popup_fast_pane

0xb4db,	// (0x000332c0) scroll_pane_cp9_ParamLimits

0xb4db,	// (0x000332c0) scroll_pane_cp9

0xe910,	// (0x000366f5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xe910,	// (0x000366f5) list_single_graphic_hl_pane_t1_cp2

0xb4ff,	// (0x000332e4) input_focus_pane_cp20_ParamLimits

0xb4ff,	// (0x000332e4) input_focus_pane_cp20

0xb63e,	// (0x00033423) query_popup_data_pane_t1_ParamLimits

0xb63e,	// (0x00033423) query_popup_data_pane_t1

0xb651,	// (0x00033436) query_popup_data_pane_t2_ParamLimits

0xb651,	// (0x00033436) query_popup_data_pane_t2

0xb697,	// (0x0003347c) query_popup_data_pane_t3_ParamLimits

0xb697,	// (0x0003347c) query_popup_data_pane_t3

0xb6d8,	// (0x000334bd) query_popup_data_pane_t4_ParamLimits

0xb6d8,	// (0x000334bd) query_popup_data_pane_t4

0xb714,	// (0x000334f9) query_popup_data_pane_t5_ParamLimits

0xb714,	// (0x000334f9) query_popup_data_pane_t5

0x0004,

0xf6be,	// (0x000374a3) query_popup_data_pane_t_ParamLimits

0xf6be,	// (0x000374a3) query_popup_data_pane_t

0xb3b4,	// (0x00033199) bg_set_opt_pane_g1

0xb3bc,	// (0x000331a1) bg_set_opt_pane_g2

0xb3c4,	// (0x000331a9) bg_set_opt_pane_g3

0xb3cc,	// (0x000331b1) bg_set_opt_pane_g4

0xb3d4,	// (0x000331b9) bg_set_opt_pane_g5

0xb3dc,	// (0x000331c1) bg_set_opt_pane_g6

0xb3e4,	// (0x000331c9) bg_set_opt_pane_g7

0xb3ec,	// (0x000331d1) bg_set_opt_pane_g8

0xb3f4,	// (0x000331d9) bg_set_opt_pane_g9

0x0008,

0xf6c9,	// (0x000374ae) bg_set_opt_pane_g

0x1310,	// (0x000290f5) control_top_pane_stacon_ParamLimits

0x1310,	// (0x000290f5) control_top_pane_stacon

0x1363,	// (0x00029148) signal_pane_stacon_ParamLimits

0x1363,	// (0x00029148) signal_pane_stacon

0xbb7c,	// (0x00033961) stacon_top_pane_g1_ParamLimits

0xbb7c,	// (0x00033961) stacon_top_pane_g1

0x1388,	// (0x0002916d) title_pane_stacon_ParamLimits

0x1388,	// (0x0002916d) title_pane_stacon

0x13b2,	// (0x00029197) uni_indicator_pane_stacon_ParamLimits

0x13b2,	// (0x00029197) uni_indicator_pane_stacon

0x13c7,	// (0x000291ac) battery_pane_stacon_ParamLimits

0x13c7,	// (0x000291ac) battery_pane_stacon

0x140b,	// (0x000291f0) control_bottom_pane_stacon_ParamLimits

0x140b,	// (0x000291f0) control_bottom_pane_stacon

0x142e,	// (0x00029213) navi_pane_stacon_ParamLimits

0x142e,	// (0x00029213) navi_pane_stacon

0xbb9e,	// (0x00033983) stacon_bottom_pane_g1_ParamLimits

0xbb9e,	// (0x00033983) stacon_bottom_pane_g1

0x0f1a,	// (0x00028cff) aid_levels_signal_lsc_ParamLimits

0x0f1a,	// (0x00028cff) aid_levels_signal_lsc

0x0f31,	// (0x00028d16) signal_pane_stacon_g1_ParamLimits

0x0f31,	// (0x00028d16) signal_pane_stacon_g1

0x0f45,	// (0x00028d2a) signal_pane_stacon_g2_ParamLimits

0x0f45,	// (0x00028d2a) signal_pane_stacon_g2

0x0001,

0xf6dc,	// (0x000374c1) signal_pane_stacon_g_ParamLimits

0xf6dc,	// (0x000374c1) signal_pane_stacon_g

0x0f7a,	// (0x00028d5f) title_pane_stacon_t1_ParamLimits

0x0f7a,	// (0x00028d5f) title_pane_stacon_t1

0xb758,	// (0x0003353d) uni_indicator_pane_stacon_g1

0xb762,	// (0x00033547) uni_indicator_pane_stacon_g2

0xb76c,	// (0x00033551) uni_indicator_pane_stacon_g3

0xb776,	// (0x0003355b) uni_indicator_pane_stacon_g4

0x0003,

0xf6e8,	// (0x000374cd) uni_indicator_pane_stacon_g

0x0f9f,	// (0x00028d84) control_top_pane_stacon_g1

0x0fa7,	// (0x00028d8c) control_top_pane_stacon_t1_ParamLimits

0x0fa7,	// (0x00028d8c) control_top_pane_stacon_t1

0x0fde,	// (0x00028dc3) aid_levels_battery_lsc_ParamLimits

0x0fde,	// (0x00028dc3) aid_levels_battery_lsc

0x0ff6,	// (0x00028ddb) battery_pane_stacon_g1_ParamLimits

0x0ff6,	// (0x00028ddb) battery_pane_stacon_g1

0x1009,	// (0x00028dee) battery_pane_stacon_g2_ParamLimits

0x1009,	// (0x00028dee) battery_pane_stacon_g2

0x0001,

0xf6f1,	// (0x000374d6) battery_pane_stacon_g_ParamLimits

0xf6f1,	// (0x000374d6) battery_pane_stacon_g

0x1047,	// (0x00028e2c) navi_icon_pane_stacon

0x105b,	// (0x00028e40) navi_navi_pane_stacon

0x1047,	// (0x00028e2c) navi_text_pane_stacon

0x0f9f,	// (0x00028d84) control_bottom_pane_stacon_g1

0x106f,	// (0x00028e54) control_bottom_pane_stacon_t1_ParamLimits

0x106f,	// (0x00028e54) control_bottom_pane_stacon_t1

0x74f2,	// (0x0002f2d7) grid_app_pane_ParamLimits

0x74f2,	// (0x0002f2d7) grid_app_pane

0x752a,	// (0x0002f30f) scroll_pane_cp15_ParamLimits

0x752a,	// (0x0002f30f) scroll_pane_cp15

0x7543,	// (0x0002f328) cell_app_pane_ParamLimits

0x7543,	// (0x0002f328) cell_app_pane

0x7588,	// (0x0002f36d) cell_app_pane_g1_ParamLimits

0x7588,	// (0x0002f36d) cell_app_pane_g1

0xb79a,	// (0x0003357f) cell_app_pane_g2_ParamLimits

0xb79a,	// (0x0003357f) cell_app_pane_g2

0x0001,

0xf6f6,	// (0x000374db) cell_app_pane_g_ParamLimits

0xf6f6,	// (0x000374db) cell_app_pane_g

0x75a8,	// (0x0002f38d) cell_app_pane_t1_ParamLimits

0x75a8,	// (0x0002f38d) cell_app_pane_t1

0xb7a6,	// (0x0003358b) grid_highlight_pane_ParamLimits

0xb7a6,	// (0x0003358b) grid_highlight_pane

0xb3b4,	// (0x00033199) cell_highlight_pane_g1

0xb3bc,	// (0x000331a1) cell_highlight_pane_g2

0xb3c4,	// (0x000331a9) cell_highlight_pane_g3

0xb3cc,	// (0x000331b1) cell_highlight_pane_g4

0xb3d4,	// (0x000331b9) cell_highlight_pane_g5

0xb3dc,	// (0x000331c1) cell_highlight_pane_g6

0xb3e4,	// (0x000331c9) cell_highlight_pane_g7

0xb3ec,	// (0x000331d1) cell_highlight_pane_g8

0xb3f4,	// (0x000331d9) cell_highlight_pane_g9

0x8b27,	// (0x0003090c) cell_highlight_pane_g10

0x0009,

0xf6a4,	// (0x00037489) cell_highlight_pane_g

0xb7b7,	// (0x0003359c) bg_scroll_pane

0x114d,	// (0x00028f32) scroll_handle_pane

0xb7fe,	// (0x000335e3) scroll_bg_pane_g1

0xb813,	// (0x000335f8) scroll_bg_pane_g2

0xb82b,	// (0x00033610) scroll_bg_pane_g3

0x0002,

0xf6fb,	// (0x000374e0) scroll_bg_pane_g

0xb840,	// (0x00033625) scroll_handle_focus_pane_ParamLimits

0xb840,	// (0x00033625) scroll_handle_focus_pane

0xb7fe,	// (0x000335e3) scroll_handle_pane_g1

0xb84d,	// (0x00033632) scroll_handle_pane_g2

0xb82b,	// (0x00033610) scroll_handle_pane_g3

0x0002,

0xf702,	// (0x000374e7) scroll_handle_pane_g

0xb405,	// (0x000331ea) bg_popup_sub_pane_cp21_ParamLimits

0xb405,	// (0x000331ea) bg_popup_sub_pane_cp21

0xb861,	// (0x00033646) popup_fep_japan_predictive_window_t1_ParamLimits

0xb861,	// (0x00033646) popup_fep_japan_predictive_window_t1

0xb87b,	// (0x00033660) popup_fep_japan_predictive_window_t2_ParamLimits

0xb87b,	// (0x00033660) popup_fep_japan_predictive_window_t2

0xb8ae,	// (0x00033693) popup_fep_japan_predictive_window_t3_ParamLimits

0xb8ae,	// (0x00033693) popup_fep_japan_predictive_window_t3

0x0002,

0xf709,	// (0x000374ee) popup_fep_japan_predictive_window_t_ParamLimits

0xf709,	// (0x000374ee) popup_fep_japan_predictive_window_t

0x8b31,	// (0x00030916) bg_popup_sub_pane_cp23

0xb8e5,	// (0x000336ca) listscroll_japin_cand_pane

0xb8ed,	// (0x000336d2) popup_fep_japan_candidate_window_t1

0xb8fb,	// (0x000336e0) candidate_pane_ParamLimits

0xb8fb,	// (0x000336e0) candidate_pane

0xb90d,	// (0x000336f2) scroll_pane_cp30

0xb915,	// (0x000336fa) list_single_popup_jap_candidate_pane_ParamLimits

0xb915,	// (0x000336fa) list_single_popup_jap_candidate_pane

0x8b31,	// (0x00030916) list_highlight_pane_cp30

0xb92a,	// (0x0003370f) list_single_popup_jap_candidate_pane_t1

0xb939,	// (0x0003371e) level_1_signal

0xb946,	// (0x0003372b) level_2_signal

0xb953,	// (0x00033738) level_3_signal

0xb960,	// (0x00033745) level_4_signal

0xb96d,	// (0x00033752) level_5_signal

0xb97a,	// (0x0003375f) level_6_signal

0xb987,	// (0x0003376c) level_7_signal

0xb939,	// (0x0003371e) level_1_battery

0xb946,	// (0x0003372b) level_2_battery

0xb953,	// (0x00033738) level_3_battery

0xb960,	// (0x00033745) level_4_battery

0xb96d,	// (0x00033752) level_5_battery

0xb97a,	// (0x0003375f) level_6_battery

0xb987,	// (0x0003376c) level_7_battery

0xb9ac,	// (0x00033791) list_menu_pane_ParamLimits

0xb9ac,	// (0x00033791) list_menu_pane

0xb9c2,	// (0x000337a7) scroll_pane_cp25_ParamLimits

0xb9c2,	// (0x000337a7) scroll_pane_cp25

0xb9db,	// (0x000337c0) list_double2_graphic_pane_cp2_ParamLimits

0xb9db,	// (0x000337c0) list_double2_graphic_pane_cp2

0xb9db,	// (0x000337c0) list_double2_large_graphic_pane_cp2_ParamLimits

0xb9db,	// (0x000337c0) list_double2_large_graphic_pane_cp2

0xb9db,	// (0x000337c0) list_double2_pane_cp2_ParamLimits

0xb9db,	// (0x000337c0) list_double2_pane_cp2

0xb9db,	// (0x000337c0) list_double_graphic_pane_cp2_ParamLimits

0xb9db,	// (0x000337c0) list_double_graphic_pane_cp2

0xb9db,	// (0x000337c0) list_double_large_graphic_pane_cp2_ParamLimits

0xb9db,	// (0x000337c0) list_double_large_graphic_pane_cp2

0xb9db,	// (0x000337c0) list_double_number_pane_cp2_ParamLimits

0xb9db,	// (0x000337c0) list_double_number_pane_cp2

0xb9db,	// (0x000337c0) list_double_pane_cp2_ParamLimits

0xb9db,	// (0x000337c0) list_double_pane_cp2

0x75d7,	// (0x0002f3bc) list_single_2graphic_pane_cp2_ParamLimits

0x75d7,	// (0x0002f3bc) list_single_2graphic_pane_cp2

0x75d7,	// (0x0002f3bc) list_single_graphic_heading_pane_cp2_ParamLimits

0x75d7,	// (0x0002f3bc) list_single_graphic_heading_pane_cp2

0x75d7,	// (0x0002f3bc) list_single_graphic_pane_cp2_ParamLimits

0x75d7,	// (0x0002f3bc) list_single_graphic_pane_cp2

0x75d7,	// (0x0002f3bc) list_single_heading_pane_cp2_ParamLimits

0x75d7,	// (0x0002f3bc) list_single_heading_pane_cp2

0xb9eb,	// (0x000337d0) list_single_large_graphic_pane_cp2_ParamLimits

0xb9eb,	// (0x000337d0) list_single_large_graphic_pane_cp2

0x75d7,	// (0x0002f3bc) list_single_number_heading_pane_cp2_ParamLimits

0x75d7,	// (0x0002f3bc) list_single_number_heading_pane_cp2

0x75d7,	// (0x0002f3bc) list_single_number_pane_cp2_ParamLimits

0x75d7,	// (0x0002f3bc) list_single_number_pane_cp2

0x75d7,	// (0x0002f3bc) list_single_pane_cp2_ParamLimits

0x75d7,	// (0x0002f3bc) list_single_pane_cp2

0xba05,	// (0x000337ea) bg_popup_sub_pane_cp22

0x1288,	// (0x0002906d) popup_side_volume_key_window_g1

0x12b2,	// (0x00029097) popup_side_volume_key_window_t1

0x12ce,	// (0x000290b3) volume_small_pane_cp1

0x8b7f,	// (0x00030964) bg_popup_sub_pane_cp24_ParamLimits

0x8b7f,	// (0x00030964) bg_popup_sub_pane_cp24

0xba1b,	// (0x00033800) fep_china_uni_candidate_pane_ParamLimits

0xba1b,	// (0x00033800) fep_china_uni_candidate_pane

0xba2f,	// (0x00033814) fep_china_uni_entry_pane

0xba3f,	// (0x00033824) popup_fep_china_uni_window_g1

0xba5b,	// (0x00033840) fep_china_uni_entry_pane_g1

0xba63,	// (0x00033848) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0003751f) fep_china_uni_entry_pane_g

0xba6b,	// (0x00033850) fep_entry_item_pane

0xba75,	// (0x0003385a) fep_candidate_item_pane

0xba7d,	// (0x00033862) fep_china_uni_candidate_pane_g1

0xba85,	// (0x0003386a) fep_china_uni_candidate_pane_g2

0xba8d,	// (0x00033872) fep_china_uni_candidate_pane_g3

0xba95,	// (0x0003387a) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x00037524) fep_china_uni_candidate_pane_g

0x8b27,	// (0x0003090c) fep_entry_item_pane_g1

0xba9d,	// (0x00033882) fep_entry_item_pane_t1_ParamLimits

0xba9d,	// (0x00033882) fep_entry_item_pane_t1

0xbab3,	// (0x00033898) fep_candidate_item_pane_t1_ParamLimits

0xbab3,	// (0x00033898) fep_candidate_item_pane_t1

0xbac8,	// (0x000338ad) fep_candidate_item_pane_t2_ParamLimits

0xbac8,	// (0x000338ad) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0003752d) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0003752d) fep_candidate_item_pane_t

0x8b8d,	// (0x00030972) list_highlight_pane_cp31_ParamLimits

0x8b8d,	// (0x00030972) list_highlight_pane_cp31

0xbada,	// (0x000338bf) level_1_signal_lsc

0xbae3,	// (0x000338c8) level_2_signal_lsc

0xbaec,	// (0x000338d1) level_3_signal_lsc

0xbaf5,	// (0x000338da) level_4_signal_lsc

0xbafe,	// (0x000338e3) level_5_signal_lsc

0xbb07,	// (0x000338ec) level_6_signal_lsc

0xbb10,	// (0x000338f5) level_7_signal_lsc

0xbb10,	// (0x000338f5) level_1_battery_lsc

0xbb19,	// (0x000338fe) level_2_battery_lsc

0xbb22,	// (0x00033907) level_3_battery_lsc

0xbb2b,	// (0x00033910) level_4_battery_lsc

0xbb34,	// (0x00033919) level_5_battery_lsc

0xbb3d,	// (0x00033922) level_6_battery_lsc

0xbada,	// (0x000338bf) level_7_battery_lsc

0xbb46,	// (0x0003392b) scroll_handle_focus_pane_g1

0xbb4f,	// (0x00033934) scroll_handle_focus_pane_g2

0xbb58,	// (0x0003393d) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x00037532) scroll_handle_focus_pane_g

0x92cb,	// (0x000310b0) list_single_2graphic_pane_g1_ParamLimits

0x92cb,	// (0x000310b0) list_single_2graphic_pane_g1

0x8dd3,	// (0x00030bb8) list_single_2graphic_pane_g2_ParamLimits

0x8dd3,	// (0x00030bb8) list_single_2graphic_pane_g2

0x5d96,	// (0x0002db7b) list_single_2graphic_pane_g3_ParamLimits

0x5d96,	// (0x0002db7b) list_single_2graphic_pane_g3

0x92d7,	// (0x000310bc) list_single_2graphic_pane_g4_ParamLimits

0x92d7,	// (0x000310bc) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x00037539) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x00037539) list_single_2graphic_pane_g

0x92e8,	// (0x000310cd) list_single_2graphic_pane_t1_ParamLimits

0x92e8,	// (0x000310cd) list_single_2graphic_pane_t1

0x9316,	// (0x000310fb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9316,	// (0x000310fb) list_double2_graphic_large_graphic_pane_g1

0x8e32,	// (0x00030c17) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8e32,	// (0x00030c17) list_double2_graphic_large_graphic_pane_g2

0x4d1e,	// (0x0002cb03) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4d1e,	// (0x0002cb03) list_double2_graphic_large_graphic_pane_g3

0x9328,	// (0x0003110d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9328,	// (0x0003110d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x00037542) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x00037542) list_double2_graphic_large_graphic_pane_g

0x9334,	// (0x00031119) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9334,	// (0x00031119) list_double2_graphic_large_graphic_pane_t1

0x934a,	// (0x0003112f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x934a,	// (0x0003112f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0003754b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0003754b) list_double2_graphic_large_graphic_pane_t

0xbc19,	// (0x000339fe) popup_fast_swap_window_ParamLimits

0xbc19,	// (0x000339fe) popup_fast_swap_window

0xbc35,	// (0x00033a1a) popup_side_volume_key_window

0xbc51,	// (0x00033a36) stacon_top_pane

0xbc5b,	// (0x00033a40) status_pane_ParamLimits

0xbc5b,	// (0x00033a40) status_pane

0xbc51,	// (0x00033a36) status_small_pane

0x8b31,	// (0x00030916) control_pane

0x8b31,	// (0x00030916) stacon_bottom_pane

0xb330,	// (0x00033115) scroll_pane_cp121

0xb327,	// (0x0003310c) set_content_pane

0xbb61,	// (0x00033946) bg_active_tab_pane_g1_cp1

0xbb6a,	// (0x0003394f) bg_active_tab_pane_g2_cp1

0xbb73,	// (0x00033958) bg_active_tab_pane_g3_cp1

0xbb61,	// (0x00033946) bg_passive_tab_pane_g1_cp1

0xbb6a,	// (0x0003394f) bg_passive_tab_pane_g2_cp1

0xbb73,	// (0x00033958) bg_passive_tab_pane_g3_cp1

0x7663,	// (0x0002f448) bg_active_tab_pane_g1_cp2

0xbb6a,	// (0x0003394f) bg_active_tab_pane_g2_cp2

0x766c,	// (0x0002f451) bg_active_tab_pane_g3_cp2

0x7663,	// (0x0002f448) bg_passive_tab_pane_g1_cp2

0xbb6a,	// (0x0003394f) bg_passive_tab_pane_g2_cp2

0x766c,	// (0x0002f451) bg_passive_tab_pane_g3_cp2

0x7675,	// (0x0002f45a) bg_active_tab_pane_g1_cp3

0xbb6a,	// (0x0003394f) bg_active_tab_pane_g2_cp3

0x767e,	// (0x0002f463) bg_active_tab_pane_g3_cp3

0x7675,	// (0x0002f45a) bg_passive_tab_pane_g1_cp3

0xbb6a,	// (0x0003394f) bg_passive_tab_pane_g2_cp3

0x767e,	// (0x0002f463) bg_passive_tab_pane_g3_cp3

0x7687,	// (0x0002f46c) bg_active_tab_pane_g1_cp4

0xbb6a,	// (0x0003394f) bg_active_tab_pane_g2_cp4

0x7690,	// (0x0002f475) bg_active_tab_pane_g3_cp4

0x7687,	// (0x0002f46c) bg_passive_tab_pane_g1_cp4

0xbb6a,	// (0x0003394f) bg_passive_tab_pane_g2_cp4

0x7690,	// (0x0002f475) bg_passive_tab_pane_g3_cp4

0xbbba,	// (0x0003399f) bg_active_tab_pane_g1_cp5

0xbb6a,	// (0x0003394f) bg_active_tab_pane_g2_cp5

0xbbc3,	// (0x000339a8) bg_active_tab_pane_g3_cp5

0xbbba,	// (0x0003399f) bg_passive_tab_pane_g1_cp5

0xbb6a,	// (0x0003394f) bg_passive_tab_pane_g2_cp5

0xbbc3,	// (0x000339a8) bg_passive_tab_pane_g3_cp5

0x7442,	// (0x0002f227) list_set_graphic_pane_ParamLimits

0x7442,	// (0x0002f227) list_set_graphic_pane

0x8b31,	// (0x00030916) bg_set_opt_pane_cp4

0x7699,	// (0x0002f47e) list_set_graphic_pane_g1_ParamLimits

0x7699,	// (0x0002f47e) list_set_graphic_pane_g1

0x76a5,	// (0x0002f48a) list_set_graphic_pane_g2_ParamLimits

0x76a5,	// (0x0002f48a) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x00037550) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x00037550) list_set_graphic_pane_g

0x0009,

0xf9eb,	// (0x000377d0) volume_small_pane_cp_g

0xbbcc,	// (0x000339b1) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xbbcc,	// (0x000339b1) list_double2_large_graphic_pane_g1_cp2

0xbbd8,	// (0x000339bd) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbbd8,	// (0x000339bd) list_double2_large_graphic_pane_g2_cp2

0xbbe9,	// (0x000339ce) list_double2_large_graphic_pane_g3_cp2

0xbbf1,	// (0x000339d6) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbbf1,	// (0x000339d6) list_double2_large_graphic_pane_t1_cp2

0xbc07,	// (0x000339ec) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbc07,	// (0x000339ec) list_double2_large_graphic_pane_t2_cp2

0xd3b5,	// (0x0003519a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd3b5,	// (0x0003519a) list_double_large_graphic_pane_g1_cp2

0xd3c6,	// (0x000351ab) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd3c6,	// (0x000351ab) list_double_large_graphic_pane_g2_cp2

0xbd77,	// (0x00033b5c) list_double_large_graphic_pane_g3_cp2

0xd3d7,	// (0x000351bc) list_double_large_graphic_pane_g4_cp

0xd3df,	// (0x000351c4) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd3df,	// (0x000351c4) list_double_large_graphic_pane_t1_cp2

0xd3f6,	// (0x000351db) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd3f6,	// (0x000351db) list_double_large_graphic_pane_t2_cp2

0xbc69,	// (0x00033a4e) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbc69,	// (0x00033a4e) list_double2_graphic_pane_g1_cp2

0xbc77,	// (0x00033a5c) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbc77,	// (0x00033a5c) list_double2_graphic_pane_g2_cp2

0xbc88,	// (0x00033a6d) list_double2_graphic_pane_g3_cp2

0xbc92,	// (0x00033a77) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbc92,	// (0x00033a77) list_double2_graphic_pane_t1_cp2

0xbca8,	// (0x00033a8d) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbca8,	// (0x00033a8d) list_double2_graphic_pane_t2_cp2

0xbcba,	// (0x00033a9f) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbcba,	// (0x00033a9f) list_single_number_heading_pane_g1_cp2

0xbcc6,	// (0x00033aab) list_single_number_heading_pane_g2_cp2

0xbcce,	// (0x00033ab3) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbcce,	// (0x00033ab3) list_single_number_heading_pane_t1_cp2

0xbce4,	// (0x00033ac9) list_single_number_heading_pane_t2_cp2_ParamLimits

0xbce4,	// (0x00033ac9) list_single_number_heading_pane_t2_cp2

0xbcf6,	// (0x00033adb) list_single_number_heading_pane_t3_cp2_ParamLimits

0xbcf6,	// (0x00033adb) list_single_number_heading_pane_t3_cp2

0xbcba,	// (0x00033a9f) list_single_heading_pane_g1_cp2_ParamLimits

0xbcba,	// (0x00033a9f) list_single_heading_pane_g1_cp2

0xbcc6,	// (0x00033aab) list_single_heading_pane_g2_cp2

0xbcce,	// (0x00033ab3) list_single_heading_pane_t1_cp2_ParamLimits

0xbcce,	// (0x00033ab3) list_single_heading_pane_t1_cp2

0xd1bd,	// (0x00034fa2) list_single_heading_pane_t2_cp2_ParamLimits

0xd1bd,	// (0x00034fa2) list_single_heading_pane_t2_cp2

0xd105,	// (0x00034eea) list_double_graphic_pane_g1_cp2_ParamLimits

0xd105,	// (0x00034eea) list_double_graphic_pane_g1_cp2

0xd111,	// (0x00034ef6) list_double_graphic_pane_g2_cp2_ParamLimits

0xd111,	// (0x00034ef6) list_double_graphic_pane_g2_cp2

0xd120,	// (0x00034f05) list_double_graphic_pane_g3_cp2

0xd128,	// (0x00034f0d) list_double_graphic_pane_t1_cp2_ParamLimits

0xd128,	// (0x00034f0d) list_double_graphic_pane_t1_cp2

0xd13e,	// (0x00034f23) list_double_graphic_pane_t2_cp2_ParamLimits

0xd13e,	// (0x00034f23) list_double_graphic_pane_t2_cp2

0xbd6b,	// (0x00033b50) list_double_number_pane_g1_cp2_ParamLimits

0xbd6b,	// (0x00033b50) list_double_number_pane_g1_cp2

0xbd77,	// (0x00033b5c) list_double_number_pane_g2_cp2

0xd0c9,	// (0x00034eae) list_double_number_pane_t1_cp2_ParamLimits

0xd0c9,	// (0x00034eae) list_double_number_pane_t1_cp2

0xd0dd,	// (0x00034ec2) list_double_number_pane_t2_cp2_ParamLimits

0xd0dd,	// (0x00034ec2) list_double_number_pane_t2_cp2

0xd0f3,	// (0x00034ed8) list_double_number_pane_t3_cp2_ParamLimits

0xd0f3,	// (0x00034ed8) list_double_number_pane_t3_cp2

0xd040,	// (0x00034e25) list_single_graphic_pane_g1_cp2_ParamLimits

0xd040,	// (0x00034e25) list_single_graphic_pane_g1_cp2

0xbdcf,	// (0x00033bb4) list_single_graphic_pane_g2_cp2_ParamLimits

0xbdcf,	// (0x00033bb4) list_single_graphic_pane_g2_cp2

0xbddb,	// (0x00033bc0) list_single_graphic_pane_g3_cp2

0xd016,	// (0x00034dfb) list_single_graphic_pane_t1_cp2_ParamLimits

0xd016,	// (0x00034dfb) list_single_graphic_pane_t1_cp2

0xbdcf,	// (0x00033bb4) list_single_number_pane_g1_cp2_ParamLimits

0xbdcf,	// (0x00033bb4) list_single_number_pane_g1_cp2

0xbddb,	// (0x00033bc0) list_single_number_pane_g2_cp2

0xd016,	// (0x00034dfb) list_single_number_pane_t1_cp2_ParamLimits

0xd016,	// (0x00034dfb) list_single_number_pane_t1_cp2

0xd02c,	// (0x00034e11) list_single_number_pane_t2_cp2_ParamLimits

0xd02c,	// (0x00034e11) list_single_number_pane_t2_cp2

0xbbd8,	// (0x000339bd) list_double2_pane_g1_cp2_ParamLimits

0xbbd8,	// (0x000339bd) list_double2_pane_g1_cp2

0xbbe9,	// (0x000339ce) list_double2_pane_g2_cp2

0xbd43,	// (0x00033b28) list_double2_pane_t1_cp2_ParamLimits

0xbd43,	// (0x00033b28) list_double2_pane_t1_cp2

0xbd59,	// (0x00033b3e) list_double2_pane_t2_cp2_ParamLimits

0xbd59,	// (0x00033b3e) list_double2_pane_t2_cp2

0xbd6b,	// (0x00033b50) list_double_pane_g1_cp2_ParamLimits

0xbd6b,	// (0x00033b50) list_double_pane_g1_cp2

0xbd77,	// (0x00033b5c) list_double_pane_g2_cp2

0xbd7f,	// (0x00033b64) list_double_pane_t1_cp2_ParamLimits

0xbd7f,	// (0x00033b64) list_double_pane_t1_cp2

0xbd95,	// (0x00033b7a) list_double_pane_t2_cp2_ParamLimits

0xbd95,	// (0x00033b7a) list_double_pane_t2_cp2

0xbdbf,	// (0x00033ba4) list_single_pane_cp2_g3

0xbdcf,	// (0x00033bb4) list_single_pane_g1_cp2_ParamLimits

0xbdcf,	// (0x00033bb4) list_single_pane_g1_cp2

0xbddb,	// (0x00033bc0) list_single_pane_g2_cp2

0xbde3,	// (0x00033bc8) list_single_pane_t1_cp2_ParamLimits

0xbde3,	// (0x00033bc8) list_single_pane_t1_cp2

0xbdfb,	// (0x00033be0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xbdfb,	// (0x00033be0) list_single_large_graphic_pane_g1_cp2

0xbe07,	// (0x00033bec) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xbe07,	// (0x00033bec) list_single_large_graphic_pane_g2_cp2

0xbe13,	// (0x00033bf8) list_single_large_graphic_pane_g3_cp2

0xbe1b,	// (0x00033c00) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xbe1b,	// (0x00033c00) list_single_large_graphic_pane_g4_cp1

0xbe35,	// (0x00033c1a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xbe35,	// (0x00033c1a) list_single_large_graphic_pane_t1_cp2

0xcfe2,	// (0x00034dc7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xcfe2,	// (0x00034dc7) list_single_graphic_heading_pane_g1_cp2

0xcfaf,	// (0x00034d94) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xcfaf,	// (0x00034d94) list_single_graphic_heading_pane_g4_cp2

0xbddb,	// (0x00033bc0) list_single_graphic_heading_pane_g5_cp2

0xcfee,	// (0x00034dd3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xcfee,	// (0x00034dd3) list_single_graphic_heading_pane_t1_cp2

0xd004,	// (0x00034de9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd004,	// (0x00034de9) list_single_graphic_heading_pane_t2_cp2

0xcfa3,	// (0x00034d88) list_single_2graphic_pane_g1_cp2_ParamLimits

0xcfa3,	// (0x00034d88) list_single_2graphic_pane_g1_cp2

0xcfaf,	// (0x00034d94) list_single_2graphic_pane_g2_cp2_ParamLimits

0xcfaf,	// (0x00034d94) list_single_2graphic_pane_g2_cp2

0xbddb,	// (0x00033bc0) list_single_2graphic_pane_g3_cp2

0xcfc0,	// (0x00034da5) list_single_2graphic_pane_g4_cp2_ParamLimits

0xcfc0,	// (0x00034da5) list_single_2graphic_pane_g4_cp2

0xcfcc,	// (0x00034db1) list_single_2graphic_pane_t1_cp2_ParamLimits

0xcfcc,	// (0x00034db1) list_single_2graphic_pane_t1_cp2

0x8b27,	// (0x0003090c) list_highlight_pane_g10_cp1

0xcb69,	// (0x0003494e) list_highlight_pane_g1_cp1

0xcb71,	// (0x00034956) list_highlight_pane_g2_cp1

0xcb79,	// (0x0003495e) list_highlight_pane_g3_cp1

0xcb81,	// (0x00034966) list_highlight_pane_g4_cp1

0xcb89,	// (0x0003496e) list_highlight_pane_g5_cp1

0xcb91,	// (0x00034976) list_highlight_pane_g6_cp1

0xcb99,	// (0x0003497e) list_highlight_pane_g7_cp1

0xcba1,	// (0x00034986) list_highlight_pane_g8_cp1

0xcba9,	// (0x0003498e) list_highlight_pane_g9_cp1

0x84dc,	// (0x000302c1) form_field_slider_pane_t3

0x84ea,	// (0x000302cf) form_field_slider_pane_t4

0xcaa5,	// (0x0003488a) slider_form_pane_ParamLimits

0xcaa5,	// (0x0003488a) slider_form_pane

0x8b31,	// (0x00030916) control_abbreviations

0x8b31,	// (0x00030916) control_conventions

0x8b31,	// (0x00030916) control_definitions

0x8b31,	// (0x00030916) format_table_attribute

0xd207,	// (0x00034fec) bg_popup_preview_window_pane_g9

0x8b31,	// (0x00030916) format_table_data2

0x8b31,	// (0x00030916) format_table_data3

0x8b31,	// (0x00030916) format_table_data_example

0x0008,

0x8b31,	// (0x00030916) intro_purpose

0xf8d5,	// (0x000376ba) bg_popup_preview_window_pane_g

0x8b31,	// (0x00030916) texts_category

0x8b31,	// (0x00030916) texts_graphics

0xbe4b,	// (0x00033c30) text_digital

0xbe5a,	// (0x00033c3f) text_primary

0xbe69,	// (0x00033c4e) text_primary_small

0xbe78,	// (0x00033c5d) text_secondary

0xbe87,	// (0x00033c6c) text_title

0xd6ec,	// (0x000354d1) bg_passive_tab_pane_g1_cp3_srt

0xbb6a,	// (0x0003394f) bg_passive_tab_pane_g2_cp3_srt

0xd6f5,	// (0x000354da) bg_passive_tab_pane_g3_cp3_srt

0x8b7f,	// (0x00030964) bg_active_tab_pane_cp3_srt_ParamLimits

0x8b7f,	// (0x00030964) bg_active_tab_pane_cp3_srt

0xd6fe,	// (0x000354e3) tabs_4_active_pane_srt_g1

0x9c88,	// (0x00031a6d) tabs_4_active_pane_srt_t1_ParamLimits

0x9c88,	// (0x00031a6d) tabs_4_active_pane_srt_t1

0xd6ec,	// (0x000354d1) bg_active_tab_pane_g1_cp3_copy1

0xbb6a,	// (0x0003394f) bg_active_tab_pane_g2_cp3_copy1

0xd6f5,	// (0x000354da) bg_active_tab_pane_g3_cp3_copy1

0x8b8d,	// (0x00030972) tabs_2_long_active_pane_srt_ParamLimits

0x8b8d,	// (0x00030972) tabs_2_long_active_pane_srt

0x8b8d,	// (0x00030972) tabs_2_long_passive_pane_srt_ParamLimits

0x8b8d,	// (0x00030972) tabs_2_long_passive_pane_srt

0xb4a5,	// (0x0003328a) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb4a5,	// (0x0003328a) bg_passive_tab_pane_cp4_srt

0xd5fd,	// (0x000353e2) bg_passive_tab_pane_g1_cp4_srt

0xbb6a,	// (0x0003394f) bg_passive_tab_pane_g2_cp4_srt

0xd606,	// (0x000353eb) bg_passive_tab_pane_g3_cp4_srt

0x8b8d,	// (0x00030972) bg_active_tab_pane_cp4_srt_ParamLimits

0x8b8d,	// (0x00030972) bg_active_tab_pane_cp4_srt

0x9ab2,	// (0x00031897) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9ab2,	// (0x00031897) tabs_2_long_active_pane_srt_t1

0xd5fd,	// (0x000353e2) bg_active_tab_pane_g1_cp4_srt

0xbb6a,	// (0x0003394f) bg_active_tab_pane_g2_cp4_srt

0xd606,	// (0x000353eb) bg_active_tab_pane_g3_cp4_srt

0x8b7f,	// (0x00030964) tabs_3_long_active_pane_srt_ParamLimits

0x8b7f,	// (0x00030964) tabs_3_long_active_pane_srt

0x8b7f,	// (0x00030964) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8b7f,	// (0x00030964) tabs_3_long_passive_pane_cp_srt

0x8b7f,	// (0x00030964) tabs_3_long_passive_pane_srt_ParamLimits

0x8b7f,	// (0x00030964) tabs_3_long_passive_pane_srt

0xb4a5,	// (0x0003328a) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb4a5,	// (0x0003328a) bg_passive_tab_pane_cp5_srt

0xbbba,	// (0x0003399f) bg_passive_tab_pane_g1_cp5_srt

0xbb6a,	// (0x0003394f) bg_passive_tab_pane_g2_cp5_srt

0xbbc3,	// (0x000339a8) bg_passive_tab_pane_g3_cp5_srt

0x8b8d,	// (0x00030972) bg_active_tab_pane_cp5_srt_ParamLimits

0x8b8d,	// (0x00030972) bg_active_tab_pane_cp5_srt

0x9a9c,	// (0x00031881) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9a9c,	// (0x00031881) tabs_3_long_active_pane_srt_t1

0xbbba,	// (0x0003399f) bg_active_tab_pane_g1_cp5_srt

0xbb6a,	// (0x0003394f) bg_active_tab_pane_g2_cp5_srt

0xbbc3,	// (0x000339a8) bg_active_tab_pane_g3_cp5_srt

0xd5ef,	// (0x000353d4) navi_text_pane_srt_t1

0xd5e7,	// (0x000353cc) navi_icon_pane_srt_g1

0xbf9f,	// (0x00033d84) midp_editing_number_pane_srt

0xbe96,	// (0x00033c7b) midp_ticker_pane_srt

0xbfa7,	// (0x00033d8c) midp_ticker_pane_srt_g1

0xbfaf,	// (0x00033d94) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0003756f) midp_ticker_pane_srt_g

0xbfb7,	// (0x00033d9c) midp_ticker_pane_srt_t1

0xd5d8,	// (0x000353bd) midp_editing_number_pane_t1_copy1

0xb4a5,	// (0x0003328a) listscroll_midp_pane

0xb4a5,	// (0x0003328a) midp_form_pane

0xbe9e,	// (0x00033c83) midp_info_popup_window_ParamLimits

0xbe9e,	// (0x00033c83) midp_info_popup_window

0xb405,	// (0x000331ea) bg_popup_sub_pane_cp50_ParamLimits

0xb405,	// (0x000331ea) bg_popup_sub_pane_cp50

0xc79f,	// (0x00034584) listscroll_midp_info_pane_ParamLimits

0xc79f,	// (0x00034584) listscroll_midp_info_pane

0xc787,	// (0x0003456c) listscroll_form_midp_pane_ParamLimits

0xc787,	// (0x0003456c) listscroll_form_midp_pane

0xc793,	// (0x00034578) scroll_bar_cp050

0x84d0,	// (0x000302b5) list_midp_pane

0xdf9c,	// (0x00035d81) signal_pane_g2_cp

0xc6b9,	// (0x0003449e) listscroll_midp_info_pane_t1_ParamLimits

0xc6b9,	// (0x0003449e) listscroll_midp_info_pane_t1

0xc6d1,	// (0x000344b6) listscroll_midp_info_pane_t2_ParamLimits

0xc6d1,	// (0x000344b6) listscroll_midp_info_pane_t2

0xc70f,	// (0x000344f4) listscroll_midp_info_pane_t3_ParamLimits

0xc70f,	// (0x000344f4) listscroll_midp_info_pane_t3

0xc749,	// (0x0003452e) listscroll_midp_info_pane_t4_ParamLimits

0xc749,	// (0x0003452e) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x0003761b) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x0003761b) listscroll_midp_info_pane_t

0xb46c,	// (0x00033251) scroll_pane_cp21

0xc64b,	// (0x00034430) form_midp_field_choice_group_pane

0xc654,	// (0x00034439) form_midp_field_text_pane

0xc69f,	// (0x00034484) form_midp_field_time_pane

0xc6a7,	// (0x0003448c) form_midp_gauge_slider_pane

0xc6b0,	// (0x00034495) form_midp_gauge_wait_pane

0x8b31,	// (0x00030916) form_midp_image_pane

0x935c,	// (0x00031141) list_single_midp_pane_ParamLimits

0x935c,	// (0x00031141) list_single_midp_pane

0x84ae,	// (0x00030293) form_midp_field_text_pane_t1

0xc4f2,	// (0x000342d7) input_focus_pane_cp050

0xc63a,	// (0x0003441f) list_midp_form_text_pane

0xc609,	// (0x000343ee) form_midp_field_choice_group_pane_t1

0xc617,	// (0x000343fc) input_focus_pane_cp051

0xc62b,	// (0x00034410) list_midp_choice_pane

0x8b31,	// (0x00030916) status_idle_pane

0xc5ed,	// (0x000343d2) form_midp_field_time_pane_t1

0x8b27,	// (0x0003090c) wait_anim_pane_g2_copy1

0xc5fb,	// (0x000343e0) form_midp_field_time_pane_t2

0x0001,

0xbf09,	// (0x00033cee) aid_navinavi_width_2_pane

0xf831,	// (0x00037616) form_midp_field_time_pane_t

0x8b31,	// (0x00030916) input_focus_pane_cp052

0x8b31,	// (0x00030916) bg_input_focus_pane_cp040

0xc5c9,	// (0x000343ae) form_midp_gauge_slider_pane_t1

0xc5d7,	// (0x000343bc) form_midp_gauge_slider_pane_t2

0x8492,	// (0x00030277) form_midp_gauge_slider_pane_t3

0x84a0,	// (0x00030285) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x0003760d) form_midp_gauge_slider_pane_t

0xc5e5,	// (0x000343ca) form_midp_slider_pane

0x8b8d,	// (0x00030972) bg_input_focus_pane_cp041_ParamLimits

0x8b8d,	// (0x00030972) bg_input_focus_pane_cp041

0xc596,	// (0x0003437b) form_midp_gauge_wait_pane_t1_ParamLimits

0xc596,	// (0x0003437b) form_midp_gauge_wait_pane_t1

0xc5a8,	// (0x0003438d) form_midp_gauge_wait_pane_t2_ParamLimits

0xc5a8,	// (0x0003438d) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x00037608) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x00037608) form_midp_gauge_wait_pane_t

0xc5ba,	// (0x0003439f) form_midp_wait_pane_ParamLimits

0xc5ba,	// (0x0003439f) form_midp_wait_pane

0xc560,	// (0x00034345) form_midp_image_pane_g1

0xc569,	// (0x0003434e) form_midp_image_pane_t1

0xc578,	// (0x0003435d) form_midp_image_pane_t2

0xc587,	// (0x0003436c) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x00037601) form_midp_image_pane_t

0xc557,	// (0x0003433c) list_single_midp_pane_g1

0x5dce,	// (0x0002dbb3) list_single_midp_pane_t1

0x847d,	// (0x00030262) list_midp_form_item_pane_ParamLimits

0x847d,	// (0x00030262) list_midp_form_item_pane

0xbeb1,	// (0x00033c96) list_midp_form_item_pane_t1

0xbec0,	// (0x00033ca5) midp_ticker_pane_g1

0xbecc,	// (0x00033cb1) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x00037555) midp_ticker_pane_g

0xbed8,	// (0x00033cbd) midp_ticker_pane_t1

0xd68e,	// (0x00035473) midp_editing_number_pane_t1

0xd66c,	// (0x00035451) midp_editing_number_pane

0xd67b,	// (0x00035460) midp_ticker_pane

0xd5c8,	// (0x000353ad) ai_message_heading_pane

0x8b31,	// (0x00030916) bg_popup_window_pane_cp14

0xd5d0,	// (0x000353b5) listscroll_ai_message_pane

0xd552,	// (0x00035337) ai_message_heading_pane_g1_ParamLimits

0xd552,	// (0x00035337) ai_message_heading_pane_g1

0xd55e,	// (0x00035343) ai_message_heading_pane_g2_ParamLimits

0xd55e,	// (0x00035343) ai_message_heading_pane_g2

0xd56a,	// (0x0003534f) ai_message_heading_pane_g3_ParamLimits

0xd56a,	// (0x0003534f) ai_message_heading_pane_g3

0xd576,	// (0x0003535b) ai_message_heading_pane_g4_ParamLimits

0xd576,	// (0x0003535b) ai_message_heading_pane_g4

0x0003,

0x00c6,	// (0x00027eab) ai_message_heading_pane_g_ParamLimits

0x00c6,	// (0x00027eab) ai_message_heading_pane_g

0xd582,	// (0x00035367) ai_message_heading_pane_t1_ParamLimits

0xd582,	// (0x00035367) ai_message_heading_pane_t1

0xd59c,	// (0x00035381) ai_message_heading_pane_t2_ParamLimits

0xd59c,	// (0x00035381) ai_message_heading_pane_t2

0x0001,

0x00cf,	// (0x00027eb4) ai_message_heading_pane_t_ParamLimits

0x00cf,	// (0x00027eb4) ai_message_heading_pane_t

0xd5ae,	// (0x00035393) bg_popup_heading_pane_cp1_ParamLimits

0xd5ae,	// (0x00035393) bg_popup_heading_pane_cp1

0xd540,	// (0x00035325) list_ai_message_pane_ParamLimits

0xd540,	// (0x00035325) list_ai_message_pane

0xb46c,	// (0x00033251) scroll_pane_cp10

0xd4dc,	// (0x000352c1) list_ai_message_pane_g1

0xd4e4,	// (0x000352c9) list_ai_message_pane_g2

0x0001,

0x00a3,	// (0x00027e88) list_ai_message_pane_g

0xd4ec,	// (0x000352d1) list_ai_message_pane_t1_ParamLimits

0xd4ec,	// (0x000352d1) list_ai_message_pane_t1

0xd501,	// (0x000352e6) list_ai_message_pane_t2_ParamLimits

0xd501,	// (0x000352e6) list_ai_message_pane_t2

0xd516,	// (0x000352fb) list_ai_message_pane_t3_ParamLimits

0xd516,	// (0x000352fb) list_ai_message_pane_t3

0xd52b,	// (0x00035310) list_ai_message_pane_t4_ParamLimits

0xd52b,	// (0x00035310) list_ai_message_pane_t4

0x0003,

0x00a8,	// (0x00027e8d) list_ai_message_pane_t_ParamLimits

0x00a8,	// (0x00027e8d) list_ai_message_pane_t

0x9a7b,	// (0x00031860) cell_ai_soft_ind_pane_ParamLimits

0x9a7b,	// (0x00031860) cell_ai_soft_ind_pane

0xbeea,	// (0x00033ccf) cell_ai_soft_ind_pane_g1_ParamLimits

0xbeea,	// (0x00033ccf) cell_ai_soft_ind_pane_g1

0x8b31,	// (0x00030916) grid_highlight_cp1

0xbef7,	// (0x00033cdc) text_secondary_cp56_ParamLimits

0xbef7,	// (0x00033cdc) text_secondary_cp56

0xd4b1,	// (0x00035296) example_general_pane_ParamLimits

0xd4b1,	// (0x00035296) example_general_pane

0xd4bd,	// (0x000352a2) example_parent_pane_g1_ParamLimits

0xd4bd,	// (0x000352a2) example_parent_pane_g1

0xd4c9,	// (0x000352ae) example_parent_pane_t1_ParamLimits

0xd4c9,	// (0x000352ae) example_parent_pane_t1

0x7cda,	// (0x0002fabf) popup_preview_text_window_ParamLimits

0x7cda,	// (0x0002fabf) popup_preview_text_window

0xbdc7,	// (0x00033bac) list_single_pane_cp2_g4

0x8d68,	// (0x00030b4d) bg_popup_preview_window_pane_ParamLimits

0x8d68,	// (0x00030b4d) bg_popup_preview_window_pane

0xd20f,	// (0x00034ff4) popup_preview_text_window_t1_ParamLimits

0xd20f,	// (0x00034ff4) popup_preview_text_window_t1

0xd22d,	// (0x00035012) popup_preview_text_window_t2_ParamLimits

0xd22d,	// (0x00035012) popup_preview_text_window_t2

0xd276,	// (0x0003505b) popup_preview_text_window_t3_ParamLimits

0xd276,	// (0x0003505b) popup_preview_text_window_t3

0xd2bb,	// (0x000350a0) popup_preview_text_window_t4_ParamLimits

0xd2bb,	// (0x000350a0) popup_preview_text_window_t4

0x0004,

0x0077,	// (0x00027e5c) popup_preview_text_window_t_ParamLimits

0x0077,	// (0x00027e5c) popup_preview_text_window_t

0xd339,	// (0x0003511e) scroll_pane_cp11

0xc3fa,	// (0x000341df) bg_popup_preview_window_pane_g1

0xd1cf,	// (0x00034fb4) bg_popup_preview_window_pane_g2

0xd1d7,	// (0x00034fbc) bg_popup_preview_window_pane_g3

0xd1df,	// (0x00034fc4) bg_popup_preview_window_pane_g4

0xd1e7,	// (0x00034fcc) bg_popup_preview_window_pane_g5

0xd1ef,	// (0x00034fd4) bg_popup_preview_window_pane_g6

0xd1f7,	// (0x00034fdc) bg_popup_preview_window_pane_g7

0xd1ff,	// (0x00034fe4) bg_popup_preview_window_pane_g8

0x070f,	// (0x000284f4) aid_popup_width_pane

0x7c56,	// (0x0002fa3b) popup_midp_note_alarm_window_ParamLimits

0x7c56,	// (0x0002fa3b) popup_midp_note_alarm_window

0xb341,	// (0x00033126) data_form_pane_ParamLimits

0x91cf,	// (0x00030fb4) form_field_data_pane_g1

0x91d9,	// (0x00030fbe) form_field_data_pane_t1_ParamLimits

0xb34d,	// (0x00033132) input_focus_pane_ParamLimits

0xb35b,	// (0x00033140) data_form_wide_pane_ParamLimits

0x5b16,	// (0x0002d8fb) form_field_data_wide_pane_g1

0x5b22,	// (0x0002d907) form_field_data_wide_pane_t1_ParamLimits

0x977e,	// (0x00031563) input_focus_pane_cp6_ParamLimits

0x74a5,	// (0x0002f28a) input_popup_find_pane_g1_ParamLimits

0x74a5,	// (0x0002f28a) input_popup_find_pane_g1

0x101a,	// (0x00028dff) aid_navi_side_left_pane

0x102f,	// (0x00028e14) aid_navi_side_right_pane

0xcc46,	// (0x00034a2b) bg_popup_window_pane_cp30_ParamLimits

0xcc46,	// (0x00034a2b) bg_popup_window_pane_cp30

0xccc0,	// (0x00034aa5) popup_midp_note_alarm_window_g1_ParamLimits

0xccc0,	// (0x00034aa5) popup_midp_note_alarm_window_g1

0xcd20,	// (0x00034b05) popup_midp_note_alarm_window_t1_ParamLimits

0xcd20,	// (0x00034b05) popup_midp_note_alarm_window_t1

0xcdc1,	// (0x00034ba6) popup_midp_note_alarm_window_t2_ParamLimits

0xcdc1,	// (0x00034ba6) popup_midp_note_alarm_window_t2

0xce6f,	// (0x00034c54) popup_midp_note_alarm_window_t3_ParamLimits

0xce6f,	// (0x00034c54) popup_midp_note_alarm_window_t3

0xcea1,	// (0x00034c86) popup_midp_note_alarm_window_t4_ParamLimits

0xcea1,	// (0x00034c86) popup_midp_note_alarm_window_t4

0xcec7,	// (0x00034cac) popup_midp_note_alarm_window_t5_ParamLimits

0xcec7,	// (0x00034cac) popup_midp_note_alarm_window_t5

0x000a,

0x0014,	// (0x00027df9) popup_midp_note_alarm_window_t_ParamLimits

0x0014,	// (0x00027df9) popup_midp_note_alarm_window_t

0xcf73,	// (0x00034d58) wait_bar_pane_cp1_ParamLimits

0xcf73,	// (0x00034d58) wait_bar_pane_cp1

0x8b31,	// (0x00030916) wait_anim_pane_copy1

0x8b31,	// (0x00030916) wait_border_pane_copy1

0xc948,	// (0x0003472d) wait_border_pane_g1_copy1

0x5b3c,	// (0x0002d921) form_field_popup_pane_g1

0x91f3,	// (0x00030fd8) form_field_popup_pane_t1_ParamLimits

0xb34d,	// (0x00033132) input_focus_pane_cp7_ParamLimits

0xb387,	// (0x0003316c) list_form_pane_ParamLimits

0x5b5c,	// (0x0002d941) form_field_popup_wide_pane_g1

0x5b64,	// (0x0002d949) form_field_popup_wide_pane_t1_ParamLimits

0xb34d,	// (0x00033132) input_focus_pane_cp8_ParamLimits

0xb393,	// (0x00033178) list_form_wide_pane_ParamLimits

0xd725,	// (0x0003550a) aid_size_cell_graphic_pane

0x9272,	// (0x00031057) data_form_pane_t1_ParamLimits

0x9385,	// (0x0003116a) data_form_wide_pane_t1_ParamLimits

0x8096,	// (0x0002fe7b) bg_status_flat_pane

0x70d7,	// (0x0002eebc) title_pane_t1_ParamLimits

0x8b47,	// (0x0003092c) title_pane_t2_ParamLimits

0x8b6d,	// (0x00030952) title_pane_t3_ParamLimits

0xf56f,	// (0x00037354) title_pane_t_ParamLimits

0xb939,	// (0x0003371e) level_1_signal_ParamLimits

0xb946,	// (0x0003372b) level_2_signal_ParamLimits

0xb953,	// (0x00033738) level_3_signal_ParamLimits

0xb960,	// (0x00033745) level_4_signal_ParamLimits

0xb96d,	// (0x00033752) level_5_signal_ParamLimits

0xb97a,	// (0x0003375f) level_6_signal_ParamLimits

0xb987,	// (0x0003376c) level_7_signal_ParamLimits

0xb939,	// (0x0003371e) level_1_battery_ParamLimits

0xb946,	// (0x0003372b) level_2_battery_ParamLimits

0xb953,	// (0x00033738) level_3_battery_ParamLimits

0xb960,	// (0x00033745) level_4_battery_ParamLimits

0xb96d,	// (0x00033752) level_5_battery_ParamLimits

0xb97a,	// (0x0003375f) level_6_battery_ParamLimits

0xb987,	// (0x0003376c) level_7_battery_ParamLimits

0xcb69,	// (0x0003494e) bg_status_flat_pane_g1

0xcb71,	// (0x00034956) bg_status_flat_pane_g2

0xcb79,	// (0x0003495e) bg_status_flat_pane_g3

0xcb81,	// (0x00034966) bg_status_flat_pane_g4

0xcb89,	// (0x0003496e) bg_status_flat_pane_g5

0xcb91,	// (0x00034976) bg_status_flat_pane_g6

0xcb99,	// (0x0003497e) bg_status_flat_pane_g7

0x716b,	// (0x0002ef50) tabs_3_active_pane_t1_ParamLimits

0x716b,	// (0x0002ef50) tabs_3_passive_pane_t1_ParamLimits

0x7185,	// (0x0002ef6a) tabs_4_active_pane_t1_ParamLimits

0x7185,	// (0x0002ef6a) tabs_4_1_passive_pane_t1_ParamLimits

0x74bb,	// (0x0002f2a0) tabs_2_active_pane_t1_ParamLimits

0x74bb,	// (0x0002f2a0) tabs_2_passive_pane_t1_ParamLimits

0x8b8d,	// (0x00030972) bg_active_tab_pane_cp4_ParamLimits

0x74cd,	// (0x0002f2b2) tabs_2_long_active_pane_t1_ParamLimits

0xb4a5,	// (0x0003328a) bg_passive_tab_pane_cp4_ParamLimits

0x1f98,	// (0x00029d7d) list_single_midp_graphic_pane_t1_ParamLimits

0x8b8d,	// (0x00030972) bg_active_tab_pane_cp5_ParamLimits

0x74e0,	// (0x0002f2c5) tabs_3_long_active_pane_t1_ParamLimits

0xb4a5,	// (0x0003328a) bg_passive_tab_pane_cp5_ParamLimits

0x1f98,	// (0x00029d7d) list_single_midp_graphic_pane_t1

0x8096,	// (0x0002fe7b) bg_status_flat_pane_ParamLimits

0xc2cb,	// (0x000340b0) indicator_pane_cp2_ParamLimits

0xc2cb,	// (0x000340b0) indicator_pane_cp2

0x820e,	// (0x0002fff3) navi_pane_srt_ParamLimits

0x820e,	// (0x0002fff3) navi_pane_srt

0xc2f3,	// (0x000340d8) popup_clock_digital_analogue_window_cp1

0x8bd1,	// (0x000309b6) indicator_pane_t1

0xbe96,	// (0x00033c7b) copy_highlight_pane

0xbe96,	// (0x00033c7b) cursor_graphics_pane

0xbe96,	// (0x00033c7b) graphic_within_text_pane

0xbe96,	// (0x00033c7b) link_highlight_pane

0xd2fc,	// (0x000350e1) popup_preview_text_window_t5_ParamLimits

0xd2fc,	// (0x000350e1) popup_preview_text_window_t5

0xbf11,	// (0x00033cf6) cursor_digital_pane

0xbf11,	// (0x00033cf6) cursor_primary_pane

0xbf22,	// (0x00033d07) cursor_primary_small_pane

0xbf2a,	// (0x00033d0f) cursor_secondary_pane

0xbf32,	// (0x00033d17) cursor_title_pane

0xbf11,	// (0x00033cf6) link_highlight_digital_pane

0xbf19,	// (0x00033cfe) link_highlight_primary_pane

0xbf22,	// (0x00033d07) link_highlight_primary_small_pane

0xbf2a,	// (0x00033d0f) link_highlight_secondary_pane

0xbf32,	// (0x00033d17) link_highlight_title_pane

0xbf11,	// (0x00033cf6) copy_highlight_digital_pane

0xbf11,	// (0x00033cf6) copy_highlight_primary_pane

0xbf22,	// (0x00033d07) copy_highlight_primary_small_pane

0xbf2a,	// (0x00033d0f) copy_highlight_secondary_pane

0xbf32,	// (0x00033d17) copy_highlight_title_pane

0xbf2a,	// (0x00033d0f) graphic_text_digital_pane

0xcbe9,	// (0x000349ce) graphic_text_primary_pane

0xcbf2,	// (0x000349d7) graphic_text_primary_small_pane

0xbf22,	// (0x00033d07) graphic_text_secondary_pane

0xbf11,	// (0x00033cf6) graphic_text_title_pane

0x7760,	// (0x0002f545) cursor_primary_pane_g1

0xcbdb,	// (0x000349c0) cursor_text_primary_t1

0x850c,	// (0x000302f1) cursor_primary_small_pane_g1

0xcbcd,	// (0x000349b2) cursor_text_primary_small_t1

0x8502,	// (0x000302e7) cursor_primary_small_pane_g1_copy1

0xcbbf,	// (0x000349a4) cursor_text_primary_small_t1_copy1

0xcbb1,	// (0x00034996) cursor_text_title_t1

0x84f8,	// (0x000302dd) cursor_title_pane_g1

0x7760,	// (0x0002f545) cursor_digital_pane_g1

0xbf3a,	// (0x00033d1f) cursor_text_digital_t1

0xbf5f,	// (0x00033d44) link_highlight_primary_pane_g1

0xcb5a,	// (0x0003493f) link_highlight_primary_pane_t1

0xbf48,	// (0x00033d2d) link_highlight_primary_small_pane_g1

0xbf50,	// (0x00033d35) link_highlight_primary_small_pane_t1

0xbf5f,	// (0x00033d44) link_highlight_secondary_pane_g1

0xbf67,	// (0x00033d4c) link_highlight_secondary_pane_t1

0xcace,	// (0x000348b3) link_highlight_title_pane_g1

0xcad6,	// (0x000348bb) link_highlight_title_pane_t1

0xcab7,	// (0x0003489c) link_highlight_digital_pane_g1

0xcabf,	// (0x000348a4) link_highlight_digital_pane_t1

0xc98d,	// (0x00034772) copy_highlight_primary_pane_g1

0xc995,	// (0x0003477a) copy_highlight_primary_pane_t1

0xc967,	// (0x0003474c) copy_highlight_primary_small_pane_g1

0xc97e,	// (0x00034763) copy_highlight_primary_small_pane_t1

0xbf76,	// (0x00033d5b) copy_highlight_secondary_pane_g1

0xbf7e,	// (0x00033d63) copy_highlight_secondary_pane_t1

0xc967,	// (0x0003474c) copy_highlight_title_pane_g1

0xc96f,	// (0x00034754) copy_highlight_title_pane_t1

0xc98d,	// (0x00034772) copy_highlight_digital_pane_g1

0xd8ab,	// (0x00035690) copy_highlight_digital_pane_t1

0xd7ff,	// (0x000355e4) graphic_text_primary_pane_g1

0xd88f,	// (0x00035674) graphic_text_primary_pane_t1

0xd89d,	// (0x00035682) graphic_text_primary_pane_t2

0x0001,

0x0143,	// (0x00027f28) graphic_text_primary_pane_t

0xd86b,	// (0x00035650) graphic_text_primary_small_pane_g1

0xd873,	// (0x00035658) graphic_text_primary_small_pane_t1

0xd881,	// (0x00035666) graphic_text_primary_small_pane_t2

0x0001,

0x013e,	// (0x00027f23) graphic_text_primary_small_pane_t

0xd847,	// (0x0003562c) graphic_text_secondary_pane_g1

0xd84f,	// (0x00035634) graphic_text_secondary_pane_t1

0xd85d,	// (0x00035642) graphic_text_secondary_pane_t2

0x0001,

0x0139,	// (0x00027f1e) graphic_text_secondary_pane_t

0xd823,	// (0x00035608) graphic_text_title_pane_g1

0xd82b,	// (0x00035610) graphic_text_title_pane_t1

0xd839,	// (0x0003561e) graphic_text_title_pane_t2

0x0001,

0x0134,	// (0x00027f19) graphic_text_title_pane_t

0xd7ff,	// (0x000355e4) graphic_text_digital_pane_g1

0xd807,	// (0x000355ec) graphic_text_digital_pane_t1

0xd815,	// (0x000355fa) graphic_text_digital_pane_t2

0x0001,

0x012f,	// (0x00027f14) graphic_text_digital_pane_t

0x8b8d,	// (0x00030972) navi_icon_pane_srt_ParamLimits

0x8b8d,	// (0x00030972) navi_icon_pane_srt

0x8b31,	// (0x00030916) navi_midp_pane_srt

0x8b31,	// (0x00030916) navi_navi_pane_srt

0x8b8d,	// (0x00030972) navi_text_pane_srt_ParamLimits

0x8b8d,	// (0x00030972) navi_text_pane_srt

0xd7ca,	// (0x000355af) navi_navi_icon_text_pane_srt

0xd7d2,	// (0x000355b7) navi_navi_pane_srt_g1_ParamLimits

0xd7d2,	// (0x000355b7) navi_navi_pane_srt_g1

0xd7e4,	// (0x000355c9) navi_navi_pane_srt_g2_ParamLimits

0xd7e4,	// (0x000355c9) navi_navi_pane_srt_g2

0x0001,

0x012a,	// (0x00027f0f) navi_navi_pane_srt_g_ParamLimits

0x012a,	// (0x00027f0f) navi_navi_pane_srt_g

0xd7f6,	// (0x000355db) navi_navi_tabs_pane_srt

0xd7ca,	// (0x000355af) navi_navi_text_pane_srt

0xd7ca,	// (0x000355af) navi_navi_volume_pane_srt

0xd7bb,	// (0x000355a0) navi_navi_text_pane_srt_t1

0x27b5,	// (0x0002a59a) navi_navi_volume_pane_srt_g1

0x27bd,	// (0x0002a5a2) volume_small_pane_srt_ParamLimits

0x27bd,	// (0x0002a5a2) volume_small_pane_srt

0x154d,	// (0x00029332) volume_small_pane_srt_g1_ParamLimits

0x154d,	// (0x00029332) volume_small_pane_srt_g1

0x155d,	// (0x00029342) volume_small_pane_srt_g2_ParamLimits

0x155d,	// (0x00029342) volume_small_pane_srt_g2

0x156e,	// (0x00029353) volume_small_pane_srt_g3_ParamLimits

0x156e,	// (0x00029353) volume_small_pane_srt_g3

0x157f,	// (0x00029364) volume_small_pane_srt_g4_ParamLimits

0x157f,	// (0x00029364) volume_small_pane_srt_g4

0x1590,	// (0x00029375) volume_small_pane_srt_g5_ParamLimits

0x1590,	// (0x00029375) volume_small_pane_srt_g5

0x15a1,	// (0x00029386) volume_small_pane_srt_g6_ParamLimits

0x15a1,	// (0x00029386) volume_small_pane_srt_g6

0x15b2,	// (0x00029397) volume_small_pane_srt_g7_ParamLimits

0x15b2,	// (0x00029397) volume_small_pane_srt_g7

0x15c3,	// (0x000293a8) volume_small_pane_srt_g8_ParamLimits

0x15c3,	// (0x000293a8) volume_small_pane_srt_g8

0x15d4,	// (0x000293b9) volume_small_pane_srt_g9_ParamLimits

0x15d4,	// (0x000293b9) volume_small_pane_srt_g9

0x15e5,	// (0x000293ca) volume_small_pane_srt_g10_ParamLimits

0x15e5,	// (0x000293ca) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0003755a) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0003755a) volume_small_pane_srt_g

0x9686,	// (0x0003146b) query_popup_data_pane_cp2

0xd7a1,	// (0x00035586) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd7a1,	// (0x00035586) navi_navi_icon_text_pane_srt_t1

0xcbe9,	// (0x000349ce) navi_tabs_2_long_pane_srt

0xcbe9,	// (0x000349ce) navi_tabs_2_pane_srt

0xcbe9,	// (0x000349ce) navi_tabs_3_long_pane_srt

0xcbe9,	// (0x000349ce) navi_tabs_3_pane_srt

0xcbe9,	// (0x000349ce) navi_tabs_4_pane_srt

0x2795,	// (0x0002a57a) tabs_2_active_pane_srt_ParamLimits

0x2795,	// (0x0002a57a) tabs_2_active_pane_srt

0x27a5,	// (0x0002a58a) tabs_2_passive_pane_srt_ParamLimits

0x27a5,	// (0x0002a58a) tabs_2_passive_pane_srt

0xc4f2,	// (0x000342d7) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc4f2,	// (0x000342d7) bg_passive_tab_pane_cp1_srt

0xd77f,	// (0x00035564) bg_passive_tab_pane_g1_cp1_srt

0xbb6a,	// (0x0003394f) bg_passive_tab_pane_g2_cp1_srt

0xd788,	// (0x0003556d) bg_passive_tab_pane_g3_cp1_srt

0x8b7f,	// (0x00030964) bg_active_tab_pane_cp1_srt_ParamLimits

0x8b7f,	// (0x00030964) bg_active_tab_pane_cp1_srt

0xd791,	// (0x00035576) tabs_2_active_pane_srt_g1

0x9d04,	// (0x00031ae9) tabs_2_active_pane_srt_t1_ParamLimits

0x9d04,	// (0x00031ae9) tabs_2_active_pane_srt_t1

0xd77f,	// (0x00035564) bg_active_tab_pane_g1_cp1_srt

0xbb6a,	// (0x0003394f) bg_active_tab_pane_g2_cp1_srt

0xd788,	// (0x0003556d) bg_active_tab_pane_g3_cp1_srt

0x2750,	// (0x0002a535) tabs_3_active_pane_srt_ParamLimits

0x2750,	// (0x0002a535) tabs_3_active_pane_srt

0x2761,	// (0x0002a546) tabs_3_passive_pane_cp_srt_ParamLimits

0x2761,	// (0x0002a546) tabs_3_passive_pane_cp_srt

0x2772,	// (0x0002a557) tabs_3_passive_pane_srt_ParamLimits

0x2772,	// (0x0002a557) tabs_3_passive_pane_srt

0xc4f2,	// (0x000342d7) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc4f2,	// (0x000342d7) bg_passive_tab_pane_cp2_srt

0xbf8d,	// (0x00033d72) bg_passive_tab_pane_g1_cp2_srt

0xbb6a,	// (0x0003394f) bg_passive_tab_pane_g2_cp2_srt

0xbf96,	// (0x00033d7b) bg_passive_tab_pane_g3_cp2_srt

0x8b7f,	// (0x00030964) bg_active_tab_pane_cp2_srt_ParamLimits

0x8b7f,	// (0x00030964) bg_active_tab_pane_cp2_srt

0xd777,	// (0x0003555c) tabs_3_active_pane_srt_g1

0x9cee,	// (0x00031ad3) tabs_3_active_pane_srt_t1_ParamLimits

0x9cee,	// (0x00031ad3) tabs_3_active_pane_srt_t1

0xbf8d,	// (0x00033d72) bg_active_tab_pane_g1_cp2_srt

0xbb6a,	// (0x0003394f) bg_active_tab_pane_g2_cp2_srt

0xbf96,	// (0x00033d7b) bg_active_tab_pane_g3_cp2_srt

0x26f6,	// (0x0002a4db) tabs_4_active_pane_srt_ParamLimits

0x26f6,	// (0x0002a4db) tabs_4_active_pane_srt

0x2708,	// (0x0002a4ed) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2708,	// (0x0002a4ed) tabs_4_passive_pane_cp2_srt

0xc0ba,	// (0x00033e9f) aid_size_cell_toolbar

0xc9d4,	// (0x000347b9) main_idle_act_pane_ParamLimits

0xc18a,	// (0x00033f6f) popup_large_graphic_colour_window_ParamLimits

0x7f5a,	// (0x0002fd3f) popup_toolbar_window_ParamLimits

0x7f5a,	// (0x0002fd3f) popup_toolbar_window

0xd69d,	// (0x00035482) list_single_graphic_2heading_pane_ParamLimits

0xd69d,	// (0x00035482) list_single_graphic_2heading_pane

0xb780,	// (0x00033565) aid_size_cell_apps_grid_lsc_pane

0xb792,	// (0x00033577) aid_size_cell_apps_grid_prt_pane

0xb4a5,	// (0x0003328a) bg_wml_button_pane_cp1_ParamLimits

0xb4a5,	// (0x0003328a) bg_wml_button_pane_cp1

0x84ae,	// (0x00030293) form_midp_field_text_pane_t1_ParamLimits

0xc4f2,	// (0x000342d7) input_focus_pane_cp050_ParamLimits

0xc63a,	// (0x0003441f) list_midp_form_text_pane_ParamLimits

0xc617,	// (0x000343fc) input_focus_pane_cp051_ParamLimits

0xc62b,	// (0x00034410) list_midp_choice_pane_ParamLimits

0x844b,	// (0x00030230) list_single_2graphic_pane_cp3_ParamLimits

0x844b,	// (0x00030230) list_single_2graphic_pane_cp3

0x845e,	// (0x00030243) list_single_midp_graphic_pane_ParamLimits

0x845e,	// (0x00030243) list_single_midp_graphic_pane

0x067b,	// (0x00028460) list_single_graphic_2heading_pane_g1_ParamLimits

0x067b,	// (0x00028460) list_single_graphic_2heading_pane_g1

0x0687,	// (0x0002846c) list_single_graphic_2heading_pane_g4_ParamLimits

0x0687,	// (0x0002846c) list_single_graphic_2heading_pane_g4

0x0693,	// (0x00028478) list_single_graphic_2heading_pane_g5_ParamLimits

0x0693,	// (0x00028478) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x000375ad) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x000375ad) list_single_graphic_2heading_pane_g

0x069f,	// (0x00028484) list_single_graphic_2heading_pane_t1_ParamLimits

0x069f,	// (0x00028484) list_single_graphic_2heading_pane_t1

0x06b3,	// (0x00028498) list_single_graphic_2heading_pane_t2_ParamLimits

0x06b3,	// (0x00028498) list_single_graphic_2heading_pane_t2

0x06cf,	// (0x000284b4) list_single_graphic_2heading_pane_t3_ParamLimits

0x06cf,	// (0x000284b4) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x000375b4) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x000375b4) list_single_graphic_2heading_pane_t

0xc338,	// (0x0003411d) bg_popup_sub_pane_cp2

0xc362,	// (0x00034147) grid_toobar_pane

0x1f07,	// (0x00029cec) cell_toolbar_pane_ParamLimits

0x1f07,	// (0x00029cec) cell_toolbar_pane

0xc39e,	// (0x00034183) cell_toolbar_pane_g1_ParamLimits

0xc39e,	// (0x00034183) cell_toolbar_pane_g1

0xc3b2,	// (0x00034197) cell_toolbar_pane_g2_ParamLimits

0xc3b2,	// (0x00034197) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x000375c2) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x000375c2) cell_toolbar_pane_g

0xc3d4,	// (0x000341b9) grid_highlight_pane_cp2_ParamLimits

0xc3d4,	// (0x000341b9) grid_highlight_pane_cp2

0xc3ee,	// (0x000341d3) toolbar_button_pane

0xc3fa,	// (0x000341df) toolbar_button_pane_g1

0xc402,	// (0x000341e7) toolbar_button_pane_g2

0xc40a,	// (0x000341ef) toolbar_button_pane_g3

0xc412,	// (0x000341f7) toolbar_button_pane_g4

0xc41a,	// (0x000341ff) toolbar_button_pane_g5

0xc422,	// (0x00034207) toolbar_button_pane_g6

0xc42a,	// (0x0003420f) toolbar_button_pane_g7

0xc432,	// (0x00034217) toolbar_button_pane_g8

0xc43a,	// (0x0003421f) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x000375c7) toolbar_button_pane_g

0x1f3f,	// (0x00029d24) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1f3f,	// (0x00029d24) list_single_2graphic_pane_g1_cp3

0x83ad,	// (0x00030192) list_single_2graphic_pane_g2_cp3_ParamLimits

0x83ad,	// (0x00030192) list_single_2graphic_pane_g2_cp3

0x1f5c,	// (0x00029d41) list_single_2graphic_pane_g3_cp3

0x1f64,	// (0x00029d49) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1f64,	// (0x00029d49) list_single_2graphic_pane_g4_cp3

0x1f70,	// (0x00029d55) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1f70,	// (0x00029d55) list_single_2graphic_pane_t1_cp3

0x1f8c,	// (0x00029d71) list_single_midp_graphic_pane_g2_ParamLimits

0x1f8c,	// (0x00029d71) list_single_midp_graphic_pane_g2

0xc0c2,	// (0x00033ea7) aid_zoom_text_primary

0x5d24,	// (0x0002db09) aid_zoom_text_secondary

0xc04a,	// (0x00033e2f) status_small_pane_g7_ParamLimits

0xc04a,	// (0x00033e2f) status_small_pane_g7

0xc06d,	// (0x00033e52) status_small_pane_t1_ParamLimits

0x70b3,	// (0x0002ee98) title_pane_g2

0x0003,

0xf566,	// (0x0003734b) title_pane_g

0x733b,	// (0x0002f120) aid_size_cell_colour_1_pane_ParamLimits

0x733b,	// (0x0002f120) aid_size_cell_colour_1_pane

0x734f,	// (0x0002f134) aid_size_cell_colour_2_pane_ParamLimits

0x734f,	// (0x0002f134) aid_size_cell_colour_2_pane

0x7363,	// (0x0002f148) aid_size_cell_colour_3_pane_ParamLimits

0x7363,	// (0x0002f148) aid_size_cell_colour_3_pane

0x7377,	// (0x0002f15c) aid_size_cell_colour_4_pane_ParamLimits

0x7377,	// (0x0002f15c) aid_size_cell_colour_4_pane

0x0f56,	// (0x00028d3b) title_pane_stacon_g1_ParamLimits

0x0f56,	// (0x00028d3b) title_pane_stacon_g1

0xca0a,	// (0x000347ef) popup_note_wait_window_g3_ParamLimits

0xca0a,	// (0x000347ef) popup_note_wait_window_g3

0xca80,	// (0x00034865) popup_note_wait_window_t5_ParamLimits

0xca80,	// (0x00034865) popup_note_wait_window_t5

0x8b31,	// (0x00030916) main_feb_china_hwr_fs_writing_pane

0x798c,	// (0x0002f771) popup_feb_china_hwr_fs_window_ParamLimits

0x798c,	// (0x0002f771) popup_feb_china_hwr_fs_window

0x83be,	// (0x000301a3) aid_size_cell_hwr_fs_ParamLimits

0x83be,	// (0x000301a3) aid_size_cell_hwr_fs

0xc4f2,	// (0x000342d7) bg_popup_sub_pane_cp3_ParamLimits

0xc4f2,	// (0x000342d7) bg_popup_sub_pane_cp3

0x83d3,	// (0x000301b8) grid_hwr_fs_pane_ParamLimits

0x83d3,	// (0x000301b8) grid_hwr_fs_pane

0x1fdb,	// (0x00029dc0) linegrid_hwr_fs_pane_ParamLimits

0x1fdb,	// (0x00029dc0) linegrid_hwr_fs_pane

0x83eb,	// (0x000301d0) cell_hwr_fs_pane_ParamLimits

0x83eb,	// (0x000301d0) cell_hwr_fs_pane

0xc4fe,	// (0x000342e3) linegrid_hwr_fs_pane_g1_ParamLimits

0xc4fe,	// (0x000342e3) linegrid_hwr_fs_pane_g1

0x8411,	// (0x000301f6) linegrid_hwr_fs_pane_g2_ParamLimits

0x8411,	// (0x000301f6) linegrid_hwr_fs_pane_g2

0xc50a,	// (0x000342ef) linegrid_hwr_fs_pane_g3_ParamLimits

0xc50a,	// (0x000342ef) linegrid_hwr_fs_pane_g3

0x201f,	// (0x00029e04) linegrid_hwr_fs_pane_g4_ParamLimits

0x201f,	// (0x00029e04) linegrid_hwr_fs_pane_g4

0x2039,	// (0x00029e1e) linegrid_hwr_fs_pane_g5_ParamLimits

0x2039,	// (0x00029e1e) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x000375ed) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x000375ed) linegrid_hwr_fs_pane_g

0xc516,	// (0x000342fb) cell_hwr_fs_pane_g1_ParamLimits

0xc516,	// (0x000342fb) cell_hwr_fs_pane_g1

0xc304,	// (0x000340e9) cell_hwr_fs_pane_g2_ParamLimits

0xc304,	// (0x000340e9) cell_hwr_fs_pane_g2

0x8423,	// (0x00030208) cell_hwr_fs_pane_g3_ParamLimits

0x8423,	// (0x00030208) cell_hwr_fs_pane_g3

0x8430,	// (0x00030215) cell_hwr_fs_pane_g4_ParamLimits

0x8430,	// (0x00030215) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x000375f8) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x000375f8) cell_hwr_fs_pane_g

0x843d,	// (0x00030222) cell_hwr_fs_pane_t1

0x8b31,	// (0x00030916) grid_highlight_pane_cp6

0x8b31,	// (0x00030916) main_idle_act2_pane

0xb453,	// (0x00033238) aid_inside_area_popup_secondary

0x99c0,	// (0x000317a5) aid_inside_area_window_primary_ParamLimits

0x99c0,	// (0x000317a5) aid_inside_area_window_primary

0xd8ba,	// (0x0003569f) ai2_news_ticker_pane

0xd8c2,	// (0x000356a7) aid_size_cell_ai1_link_ParamLimits

0xd8c2,	// (0x000356a7) aid_size_cell_ai1_link

0x9d1a,	// (0x00031aff) popup_ai2_data_window_ParamLimits

0x9d1a,	// (0x00031aff) popup_ai2_data_window

0xd8dc,	// (0x000356c1) popup_ai2_link_window_ParamLimits

0xd8dc,	// (0x000356c1) popup_ai2_link_window

0xc4f2,	// (0x000342d7) bg_popup_sub_pane_cp4_ParamLimits

0xc4f2,	// (0x000342d7) bg_popup_sub_pane_cp4

0xd8f0,	// (0x000356d5) grid_ai2_link_pane_ParamLimits

0xd8f0,	// (0x000356d5) grid_ai2_link_pane

0xd907,	// (0x000356ec) popup_ai2_link_window_g1_ParamLimits

0xd907,	// (0x000356ec) popup_ai2_link_window_g1

0xd913,	// (0x000356f8) popup_ai2_link_window_g2_ParamLimits

0xd913,	// (0x000356f8) popup_ai2_link_window_g2

0x0001,

0x0148,	// (0x00027f2d) popup_ai2_link_window_g_ParamLimits

0x0148,	// (0x00027f2d) popup_ai2_link_window_g

0xd922,	// (0x00035707) ai2_mp_button_pane

0xd92a,	// (0x0003570f) ai2_mp_volume_pane

0xc617,	// (0x000343fc) bg_popup_sub_pane_cp5_ParamLimits

0xc617,	// (0x000343fc) bg_popup_sub_pane_cp5

0xd932,	// (0x00035717) heading_ai2_gene_pane_ParamLimits

0xd932,	// (0x00035717) heading_ai2_gene_pane

0xd93e,	// (0x00035723) list_ai2_gene_pane_ParamLimits

0xd93e,	// (0x00035723) list_ai2_gene_pane

0xd986,	// (0x0003576b) cell_ai2_link_pane_ParamLimits

0xd986,	// (0x0003576b) cell_ai2_link_pane

0xd99c,	// (0x00035781) cell_ai2_link_pane_g1

0x8b31,	// (0x00030916) grid_highlight_pane_cp7

0x281b,	// (0x0002a600) ai2_mp_volume_pane_g1

0xda39,	// (0x0003581e) ai2_mp_volume_pane_g2

0x9d44,	// (0x00031b29) list_ai2_gene_pane_t1

0xda41,	// (0x00035826) ai2_mp_volume_pane_g3

0x0002,

0xf962,	// (0x00037747) ai2_mp_volume_pane_g

0x2823,	// (0x0002a608) volume_small_pane_cp3

0xda49,	// (0x0003582e) aid_size_cell_ai2_button

0xda51,	// (0x00035836) grid_ai2_button_pane

0xda5a,	// (0x0003583f) cell_ai2_button_pane_ParamLimits

0xda5a,	// (0x0003583f) cell_ai2_button_pane

0x8b27,	// (0x0003090c) cell_ai2_button_pane_g1

0x8b31,	// (0x00030916) grid_highlight_pane_cp8

0xd9f9,	// (0x000357de) ai2_gene_pane_t1_ParamLimits

0xd9f9,	// (0x000357de) ai2_gene_pane_t1

0x78f4,	// (0x0002f6d9) aid_height_parent_landscape

0x9ac9,	// (0x000318ae) aid_height_set_list

0xc9d4,	// (0x000347b9) aid_size_parent

0xd725,	// (0x0003550a) aid_size_cell_graphic_pane_ParamLimits

0xd94e,	// (0x00035733) popup_ai2_data_window_g1_ParamLimits

0xd94e,	// (0x00035733) popup_ai2_data_window_g1

0xd95a,	// (0x0003573f) ai2_news_ticker_pane_g1

0xd962,	// (0x00035747) ai2_news_ticker_pane_g2

0x0001,

0x014d,	// (0x00027f32) ai2_news_ticker_pane_g

0xd96a,	// (0x0003574f) ai2_news_ticker_pane_t1

0xd978,	// (0x0003575d) ai2_news_ticker_pane_t2

0x0001,

0x0152,	// (0x00027f37) ai2_news_ticker_pane_t

0xd9a5,	// (0x0003578a) heading_ai2_gene_pane_g1

0xd9ad,	// (0x00035792) heading_ai2_gene_pane_t1_ParamLimits

0xd9ad,	// (0x00035792) heading_ai2_gene_pane_t1

0xd9c2,	// (0x000357a7) list_highlight_pane_cp6

0x9d2e,	// (0x00031b13) ai2_gene_pane_ParamLimits

0x9d2e,	// (0x00031b13) ai2_gene_pane

0x9d52,	// (0x00031b37) list_ai2_gene_pane_t2

0x0001,

0xf95d,	// (0x00037742) list_ai2_gene_pane_t

0xd9ca,	// (0x000357af) list_highlight_pane_cp8_ParamLimits

0xd9ca,	// (0x000357af) list_highlight_pane_cp8

0xd9db,	// (0x000357c0) ai2_gene_pane_g1_ParamLimits

0xd9db,	// (0x000357c0) ai2_gene_pane_g1

0xd9ed,	// (0x000357d2) ai2_gene_pane_g2_ParamLimits

0xd9ed,	// (0x000357d2) ai2_gene_pane_g2

0x0001,

0x015c,	// (0x00027f41) ai2_gene_pane_g_ParamLimits

0x015c,	// (0x00027f41) ai2_gene_pane_g

0x9999,	// (0x0003177e) scroll_pane_cp12

0x78b3,	// (0x0002f698) control_pane_t3_ParamLimits

0x78b3,	// (0x0002f698) control_pane_t3

0xc05e,	// (0x00033e43) status_small_pane_g8_ParamLimits

0xc05e,	// (0x00033e43) status_small_pane_g8

0x7a21,	// (0x0002f806) popup_find_window_ParamLimits

0x7c90,	// (0x0002fa75) popup_note_image_window_ParamLimits

0x5d50,	// (0x0002db35) list_double2_graphic_pane_vc_g1_ParamLimits

0x5d50,	// (0x0002db35) list_double2_graphic_pane_vc_g1

0x5d5c,	// (0x0002db41) list_double2_graphic_pane_vc_g2_ParamLimits

0x5d5c,	// (0x0002db41) list_double2_graphic_pane_vc_g2

0x5d68,	// (0x0002db4d) list_double2_graphic_pane_vc_g3_ParamLimits

0x5d68,	// (0x0002db4d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x000375bb) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x000375bb) list_double2_graphic_pane_vc_g

0x5d74,	// (0x0002db59) list_double2_graphic_pane_vc_t1_ParamLimits

0x5d74,	// (0x0002db59) list_double2_graphic_pane_vc_t1

0x5d8a,	// (0x0002db6f) list_single_heading_pane_vc_g1_ParamLimits

0x5d8a,	// (0x0002db6f) list_single_heading_pane_vc_g1

0x5d96,	// (0x0002db7b) list_single_heading_pane_vc_g2_ParamLimits

0x5d96,	// (0x0002db7b) list_single_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x000373c5) list_single_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x000373c5) list_single_heading_pane_vc_g

0x5da2,	// (0x0002db87) list_single_heading_pane_vc_t1_ParamLimits

0x5da2,	// (0x0002db87) list_single_heading_pane_vc_t1

0x5dba,	// (0x0002db9f) list_single_heading_pane_vc_t2_ParamLimits

0x5dba,	// (0x0002db9f) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x000375dc) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x000375dc) list_single_heading_pane_vc_t

0xc442,	// (0x00034227) list_setting_number_pane_vc_g1_ParamLimits

0xc442,	// (0x00034227) list_setting_number_pane_vc_g1

0xc44e,	// (0x00034233) list_setting_number_pane_vc_g2_ParamLimits

0xc44e,	// (0x00034233) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x000375e1) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x000375e1) list_setting_number_pane_vc_g

0xc45a,	// (0x0003423f) list_setting_number_pane_vc_t1_ParamLimits

0xc45a,	// (0x0003423f) list_setting_number_pane_vc_t1

0xc46e,	// (0x00034253) list_setting_number_pane_vc_t2_ParamLimits

0xc46e,	// (0x00034253) list_setting_number_pane_vc_t2

0xc48a,	// (0x0003426f) list_setting_number_pane_vc_t3_ParamLimits

0xc48a,	// (0x0003426f) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x000375e6) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x000375e6) list_setting_number_pane_vc_t

0xc4b6,	// (0x0003429b) set_value_pane_vc_ParamLimits

0xc4b6,	// (0x0003429b) set_value_pane_vc

0xd69d,	// (0x00035482) list_double2_graphic_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_double2_graphic_pane_vc

0xd69d,	// (0x00035482) list_double2_large_graphic_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_double2_large_graphic_pane_vc

0xd69d,	// (0x00035482) list_double2_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_double2_pane_vc

0xd69d,	// (0x00035482) list_double_graphic_heading_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_double_graphic_heading_pane_vc

0xd69d,	// (0x00035482) list_double_graphic_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_double_graphic_pane_vc

0xd69d,	// (0x00035482) list_double_heading_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_double_heading_pane_vc

0xd69d,	// (0x00035482) list_double_large_graphic_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_double_large_graphic_pane_vc

0xd69d,	// (0x00035482) list_double_number_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_double_number_pane_vc

0xd69d,	// (0x00035482) list_double_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_double_pane_vc

0xd69d,	// (0x00035482) list_double_time_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_double_time_pane_vc

0xd69d,	// (0x00035482) list_setting_number_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_setting_number_pane_vc

0xd69d,	// (0x00035482) list_setting_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_setting_pane_vc

0xd69d,	// (0x00035482) list_single_graphic_heading_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_single_graphic_heading_pane_vc

0xd69d,	// (0x00035482) list_single_heading_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_single_heading_pane_vc

0xd69d,	// (0x00035482) list_single_number_heading_pane_vc_ParamLimits

0xd69d,	// (0x00035482) list_single_number_heading_pane_vc

0x5f33,	// (0x0002dd18) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5f33,	// (0x0002dd18) list_double_graphic_heading_pane_vc_g1

0x5d8a,	// (0x0002db6f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5d8a,	// (0x0002db6f) list_double_graphic_heading_pane_vc_g2

0x5d96,	// (0x0002db7b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5d96,	// (0x0002db7b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf969,	// (0x0003774e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf969,	// (0x0003774e) list_double_graphic_heading_pane_vc_g

0x5f3f,	// (0x0002dd24) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5f3f,	// (0x0002dd24) list_double_graphic_heading_pane_vc_t1

0x5da2,	// (0x0002db87) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5da2,	// (0x0002db87) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf970,	// (0x00037755) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf970,	// (0x00037755) list_double_graphic_heading_pane_vc_t

0xc442,	// (0x00034227) list_setting_pane_vc_g1_ParamLimits

0xc442,	// (0x00034227) list_setting_pane_vc_g1

0xc44e,	// (0x00034233) list_setting_pane_vc_g2_ParamLimits

0xc44e,	// (0x00034233) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x000375e1) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x000375e1) list_setting_pane_vc_g

0xdc70,	// (0x00035a55) list_setting_pane_vc_t1_ParamLimits

0xdc70,	// (0x00035a55) list_setting_pane_vc_t1

0xdc8c,	// (0x00035a71) list_setting_pane_vc_t2_ParamLimits

0xdc8c,	// (0x00035a71) list_setting_pane_vc_t2

0x0001,

0x01b2,	// (0x00027f97) list_setting_pane_vc_t_ParamLimits

0x01b2,	// (0x00027f97) list_setting_pane_vc_t

0xc4b6,	// (0x0003429b) set_value_pane_cp_vc_ParamLimits

0xc4b6,	// (0x0003429b) set_value_pane_cp_vc

0x5d8a,	// (0x0002db6f) list_single_number_heading_pane_vc_g1_ParamLimits

0x5d8a,	// (0x0002db6f) list_single_number_heading_pane_vc_g1

0x5d96,	// (0x0002db7b) list_single_number_heading_pane_vc_g2_ParamLimits

0x5d96,	// (0x0002db7b) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x000373c5) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x000373c5) list_single_number_heading_pane_vc_g

0x5da2,	// (0x0002db87) list_single_number_heading_pane_vc_t1_ParamLimits

0x5da2,	// (0x0002db87) list_single_number_heading_pane_vc_t1

0x5f53,	// (0x0002dd38) list_single_number_heading_pane_vc_t2_ParamLimits

0x5f53,	// (0x0002dd38) list_single_number_heading_pane_vc_t2

0x5f67,	// (0x0002dd4c) list_single_number_heading_pane_vc_t3_ParamLimits

0x5f67,	// (0x0002dd4c) list_single_number_heading_pane_vc_t3

0x0002,

0xf98a,	// (0x0003776f) list_single_number_heading_pane_vc_t_ParamLimits

0xf98a,	// (0x0003776f) list_single_number_heading_pane_vc_t

0x5d50,	// (0x0002db35) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5d50,	// (0x0002db35) list_single_graphic_heading_pane_vc_g1

0x5d8a,	// (0x0002db6f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5d8a,	// (0x0002db6f) list_single_graphic_heading_pane_vc_g4

0x5d96,	// (0x0002db7b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5d96,	// (0x0002db7b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf991,	// (0x00037776) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf991,	// (0x00037776) list_single_graphic_heading_pane_vc_g

0x5da2,	// (0x0002db87) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5da2,	// (0x0002db87) list_single_graphic_heading_pane_vc_t1

0x5f79,	// (0x0002dd5e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5f79,	// (0x0002dd5e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf998,	// (0x0003777d) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf998,	// (0x0003777d) list_single_graphic_heading_pane_vc_t

0x5d8a,	// (0x0002db6f) list_double2_pane_vc_g1_ParamLimits

0x5d8a,	// (0x0002db6f) list_double2_pane_vc_g1

0x5d96,	// (0x0002db7b) list_double2_pane_vc_g2_ParamLimits

0x5d96,	// (0x0002db7b) list_double2_pane_vc_g2

0x0001,

0xf5e0,	// (0x000373c5) list_double2_pane_vc_g_ParamLimits

0xf5e0,	// (0x000373c5) list_double2_pane_vc_g

0x5f8d,	// (0x0002dd72) list_double2_pane_vc_t1_ParamLimits

0x5f8d,	// (0x0002dd72) list_double2_pane_vc_t1

0x5fa3,	// (0x0002dd88) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5fa3,	// (0x0002dd88) list_double2_large_graphic_pane_vc_g1

0x5d8a,	// (0x0002db6f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5d8a,	// (0x0002db6f) list_double2_large_graphic_pane_vc_g2

0x5d96,	// (0x0002db7b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5d96,	// (0x0002db7b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5fd,	// (0x000373e2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5fd,	// (0x000373e2) list_double2_large_graphic_pane_vc_g

0x5faf,	// (0x0002dd94) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5faf,	// (0x0002dd94) list_double2_large_graphic_pane_vc_t1

0x5fc5,	// (0x0002ddaa) list_double_time_pane_vc_g1_ParamLimits

0x5fc5,	// (0x0002ddaa) list_double_time_pane_vc_g1

0x5fd1,	// (0x0002ddb6) list_double_time_pane_vc_g2_ParamLimits

0x5fd1,	// (0x0002ddb6) list_double_time_pane_vc_g2

0x0001,

0xf99d,	// (0x00037782) list_double_time_pane_vc_g_ParamLimits

0xf99d,	// (0x00037782) list_double_time_pane_vc_g

0x5fdd,	// (0x0002ddc2) list_double_time_pane_vc_t1_ParamLimits

0x5fdd,	// (0x0002ddc2) list_double_time_pane_vc_t1

0x5ff8,	// (0x0002dddd) list_double_time_pane_vc_t2_ParamLimits

0x5ff8,	// (0x0002dddd) list_double_time_pane_vc_t2

0x6033,	// (0x0002de18) list_double_time_pane_vc_t3_ParamLimits

0x6033,	// (0x0002de18) list_double_time_pane_vc_t3

0x604b,	// (0x0002de30) list_double_time_pane_vc_t4_ParamLimits

0x604b,	// (0x0002de30) list_double_time_pane_vc_t4

0x0003,

0xf9a2,	// (0x00037787) list_double_time_pane_vc_t_ParamLimits

0xf9a2,	// (0x00037787) list_double_time_pane_vc_t

0x5d8a,	// (0x0002db6f) list_double_pane_vc_g1_ParamLimits

0x5d8a,	// (0x0002db6f) list_double_pane_vc_g1

0x5d96,	// (0x0002db7b) list_double_pane_vc_g2_ParamLimits

0x5d96,	// (0x0002db7b) list_double_pane_vc_g2

0x0001,

0xf5e0,	// (0x000373c5) list_double_pane_vc_g_ParamLimits

0xf5e0,	// (0x000373c5) list_double_pane_vc_g

0x605f,	// (0x0002de44) list_double_pane_vc_t1_ParamLimits

0x605f,	// (0x0002de44) list_double_pane_vc_t1

0x6073,	// (0x0002de58) list_double_pane_vc_t2_ParamLimits

0x6073,	// (0x0002de58) list_double_pane_vc_t2

0x0001,

0xf9ab,	// (0x00037790) list_double_pane_vc_t_ParamLimits

0xf9ab,	// (0x00037790) list_double_pane_vc_t

0x5d8a,	// (0x0002db6f) list_double_number_pane_vc_g1_ParamLimits

0x5d8a,	// (0x0002db6f) list_double_number_pane_vc_g1

0x5d96,	// (0x0002db7b) list_double_number_pane_vc_g2_ParamLimits

0x5d96,	// (0x0002db7b) list_double_number_pane_vc_g2

0x0001,

0xf5e0,	// (0x000373c5) list_double_number_pane_vc_g_ParamLimits

0xf5e0,	// (0x000373c5) list_double_number_pane_vc_g

0x608b,	// (0x0002de70) list_double_number_pane_vc_t1_ParamLimits

0x608b,	// (0x0002de70) list_double_number_pane_vc_t1

0x609f,	// (0x0002de84) list_double_number_pane_vc_t2_ParamLimits

0x609f,	// (0x0002de84) list_double_number_pane_vc_t2

0x6073,	// (0x0002de58) list_double_number_pane_vc_t3_ParamLimits

0x6073,	// (0x0002de58) list_double_number_pane_vc_t3

0x0002,

0xf9b0,	// (0x00037795) list_double_number_pane_vc_t_ParamLimits

0xf9b0,	// (0x00037795) list_double_number_pane_vc_t

0x60b3,	// (0x0002de98) list_double_large_graphic_pane_vc_g1_ParamLimits

0x60b3,	// (0x0002de98) list_double_large_graphic_pane_vc_g1

0x60bf,	// (0x0002dea4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x60bf,	// (0x0002dea4) list_double_large_graphic_pane_vc_g2

0x5d96,	// (0x0002db7b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5d96,	// (0x0002db7b) list_double_large_graphic_pane_vc_g3

0x60ce,	// (0x0002deb3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x60ce,	// (0x0002deb3) list_double_large_graphic_pane_vc_g4

0x0003,

0xf9b7,	// (0x0003779c) list_double_large_graphic_pane_vc_g_ParamLimits

0xf9b7,	// (0x0003779c) list_double_large_graphic_pane_vc_g

0x60da,	// (0x0002debf) list_double_large_graphic_pane_vc_t1_ParamLimits

0x60da,	// (0x0002debf) list_double_large_graphic_pane_vc_t1

0x60ee,	// (0x0002ded3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x60ee,	// (0x0002ded3) list_double_large_graphic_pane_vc_t2

0x0001,

0xf9c0,	// (0x000377a5) list_double_large_graphic_pane_vc_t_ParamLimits

0xf9c0,	// (0x000377a5) list_double_large_graphic_pane_vc_t

0x5d8a,	// (0x0002db6f) list_double_heading_pane_vc_g1_ParamLimits

0x5d8a,	// (0x0002db6f) list_double_heading_pane_vc_g1

0x5d96,	// (0x0002db7b) list_double_heading_pane_vc_g2_ParamLimits

0x5d96,	// (0x0002db7b) list_double_heading_pane_vc_g2

0x0001,

0xf5e0,	// (0x000373c5) list_double_heading_pane_vc_g_ParamLimits

0xf5e0,	// (0x000373c5) list_double_heading_pane_vc_g

0x6107,	// (0x0002deec) list_double_heading_pane_vc_t1_ParamLimits

0x6107,	// (0x0002deec) list_double_heading_pane_vc_t1

0x5da2,	// (0x0002db87) list_double_heading_pane_vc_t2_ParamLimits

0x5da2,	// (0x0002db87) list_double_heading_pane_vc_t2

0x0001,

0xf9c5,	// (0x000377aa) list_double_heading_pane_vc_t_ParamLimits

0xf9c5,	// (0x000377aa) list_double_heading_pane_vc_t

0x611b,	// (0x0002df00) list_double_graphic_pane_vc_g1_ParamLimits

0x611b,	// (0x0002df00) list_double_graphic_pane_vc_g1

0x612b,	// (0x0002df10) list_double_graphic_pane_vc_g2_ParamLimits

0x612b,	// (0x0002df10) list_double_graphic_pane_vc_g2

0x613a,	// (0x0002df1f) list_double_graphic_pane_vc_g3_ParamLimits

0x613a,	// (0x0002df1f) list_double_graphic_pane_vc_g3

0x0002,

0xf9ca,	// (0x000377af) list_double_graphic_pane_vc_g_ParamLimits

0xf9ca,	// (0x000377af) list_double_graphic_pane_vc_g

0x6146,	// (0x0002df2b) list_double_graphic_pane_vc_t1_ParamLimits

0x6146,	// (0x0002df2b) list_double_graphic_pane_vc_t1

0x6073,	// (0x0002de58) list_double_graphic_pane_vc_t2_ParamLimits

0x6073,	// (0x0002de58) list_double_graphic_pane_vc_t2

0x0001,

0xf9d1,	// (0x000377b6) list_double_graphic_pane_vc_t_ParamLimits

0xf9d1,	// (0x000377b6) list_double_graphic_pane_vc_t

0x071b,	// (0x00028500) aid_size_cell_fastswap

0x6eff,	// (0x0002ece4) aid_size_cell_touch_ParamLimits

0x6eff,	// (0x0002ece4) aid_size_cell_touch

0x0988,	// (0x0002876d) popup_fast_swap_wide_window_ParamLimits

0x0988,	// (0x0002876d) popup_fast_swap_wide_window

0x704a,	// (0x0002ee2f) touch_pane_ParamLimits

0x704a,	// (0x0002ee2f) touch_pane

0xb339,	// (0x0003311e) button_value_adjust_pane_cp2

0x5a48,	// (0x0002d82d) button_value_adjust_pane_cp4

0x5a68,	// (0x0002d84d) form_field_data_pane_cp2

0x9196,	// (0x00030f7b) form_field_data_wide_pane_cp2

0xb7b7,	// (0x0003359c) bg_scroll_pane_ParamLimits

0x114d,	// (0x00028f32) scroll_handle_pane_ParamLimits

0x1161,	// (0x00028f46) scroll_sc2_down_pane_ParamLimits

0x1161,	// (0x00028f46) scroll_sc2_down_pane

0xb7e8,	// (0x000335cd) scroll_sc2_up_pane_ParamLimits

0xb7e8,	// (0x000335cd) scroll_sc2_up_pane

0x9e7c,	// (0x00031c61) grid_wheel_folder_pane_g1_ParamLimits

0x9e7c,	// (0x00031c61) grid_wheel_folder_pane_g1

0x13e9,	// (0x000291ce) clock_nsta_pane_cp2_ParamLimits

0x13e9,	// (0x000291ce) clock_nsta_pane_cp2

0xb4a5,	// (0x0003328a) listscroll_midp_pane_ParamLimits

0x76c9,	// (0x0002f4ae) midp_canvas_pane

0xc0b2,	// (0x00033e97) nsta_clock_indic_pane

0xc0ea,	// (0x00033ecf) listscroll_form_pane_vc

0xc0f2,	// (0x00033ed7) listscroll_set_pane_vc_ParamLimits

0xc0f2,	// (0x00033ed7) listscroll_set_pane_vc

0x80be,	// (0x0002fea3) clock_nsta_pane

0x80e8,	// (0x0002fecd) indicator_nsta_pane

0xc338,	// (0x0003411d) bg_popup_sub_pane_cp2_ParamLimits

0xc34c,	// (0x00034131) find_pane_cp2_ParamLimits

0xc34c,	// (0x00034131) find_pane_cp2

0xc362,	// (0x00034147) grid_toobar_pane_ParamLimits

0xc4c6,	// (0x000342ab) list_form_gen_pane_vc_ParamLimits

0xc4c6,	// (0x000342ab) list_form_gen_pane_vc

0xc4dc,	// (0x000342c1) scroll_pane_cp8_vc_ParamLimits

0xc4dc,	// (0x000342c1) scroll_pane_cp8_vc

0xc52c,	// (0x00034311) data_form_wide_pane_vc_ParamLimits

0xc52c,	// (0x00034311) data_form_wide_pane_vc

0xc538,	// (0x0003431d) form_field_data_wide_pane_vc_g1

0xc540,	// (0x00034325) form_field_data_wide_pane_vc_t1_ParamLimits

0xc540,	// (0x00034325) form_field_data_wide_pane_vc_t1

0xb34d,	// (0x00033132) input_focus_pane_cp6_vc_ParamLimits

0xb34d,	// (0x00033132) input_focus_pane_cp6_vc

0x84d0,	// (0x000302b5) list_midp_pane_ParamLimits

0xc9e6,	// (0x000347cb) scroll_pane_cp16_ParamLimits

0xc9e6,	// (0x000347cb) scroll_pane_cp16

0xc7c1,	// (0x000345a6) button_value_adjust_pane_ParamLimits

0xc7c1,	// (0x000345a6) button_value_adjust_pane

0x9ada,	// (0x000318bf) button_value_adjust_pane_cp6_ParamLimits

0x9ada,	// (0x000318bf) button_value_adjust_pane_cp6

0x9bf4,	// (0x000319d9) settings_code_pane_cp_ParamLimits

0x9bf4,	// (0x000319d9) settings_code_pane_cp

0x8b27,	// (0x0003090c) cell_touch_pane_g1

0x8b27,	// (0x0003090c) cell_touch_pane_g2

0x0001,

0xf71b,	// (0x00037500) cell_touch_pane_g

0x9d60,	// (0x00031b45) cell_touch_pane_cp_ParamLimits

0x9d60,	// (0x00031b45) cell_touch_pane_cp

0x9d7c,	// (0x00031b61) cell_touch_pane_ParamLimits

0x9d7c,	// (0x00031b61) cell_touch_pane

0x8b27,	// (0x0003090c) scroll_sc2_down_pane_g1

0x8b27,	// (0x0003090c) scroll_sc2_up_pane_g1

0x8b31,	// (0x00030916) bg_set_opt_pane_cp4_vc

0xda6c,	// (0x00035851) list_set_graphic_pane_vc_g1_ParamLimits

0xda6c,	// (0x00035851) list_set_graphic_pane_vc_g1

0xda78,	// (0x0003585d) list_set_graphic_pane_vc_g2_ParamLimits

0xda78,	// (0x0003585d) list_set_graphic_pane_vc_g2

0x0001,

0x0174,	// (0x00027f59) list_set_graphic_pane_vc_g_ParamLimits

0x0174,	// (0x00027f59) list_set_graphic_pane_vc_g

0xda84,	// (0x00035869) text_primary_small_cp13_vc_ParamLimits

0xda84,	// (0x00035869) text_primary_small_cp13_vc

0xda9c,	// (0x00035881) list_set_graphic_pane_vc_ParamLimits

0xda9c,	// (0x00035881) list_set_graphic_pane_vc

0x8b31,	// (0x00030916) input_focus_pane_cp2_vc

0x8b27,	// (0x0003090c) setting_code_pane_vc_g1

0xdab0,	// (0x00035895) setting_code_pane_vc_t1

0xdabe,	// (0x000358a3) set_text_pane_vc_t1_ParamLimits

0xdabe,	// (0x000358a3) set_text_pane_vc_t1

0x8b31,	// (0x00030916) input_focus_pane_cp1_vc

0xdad9,	// (0x000358be) list_set_text_pane_vc

0x8b27,	// (0x0003090c) setting_text_pane_vc_g1

0x8b31,	// (0x00030916) bg_set_opt_pane_cp2_vc

0xdae3,	// (0x000358c8) setting_slider_graphic_pane_vc_g1

0xdaeb,	// (0x000358d0) setting_slider_graphic_pane_vc_t1

0xdaf9,	// (0x000358de) setting_slider_graphic_pane_vc_t2

0x0001,

0x0179,	// (0x00027f5e) setting_slider_graphic_pane_vc_t

0xdb07,	// (0x000358ec) slider_set_pane_cp_vc

0xdb0f,	// (0x000358f4) slider_set_pane_vc_g1

0xdb18,	// (0x000358fd) slider_set_pane_vc_g2

0x0006,

0x017e,	// (0x00027f63) slider_set_pane_vc_g

0xb3b4,	// (0x00033199) set_opt_bg_pane_g1_copy1

0xb3bc,	// (0x000331a1) set_opt_bg_pane_g2_copy1

0xdb44,	// (0x00035929) set_opt_bg_pane_g3_copy1

0xb3cc,	// (0x000331b1) set_opt_bg_pane_g4_copy1

0xb3d4,	// (0x000331b9) set_opt_bg_pane_g5_copy1

0xb3dc,	// (0x000331c1) set_opt_bg_pane_g6_copy1

0xdb4e,	// (0x00035933) set_opt_bg_pane_g7_copy1

0xdb56,	// (0x0003593b) set_opt_bg_pane_g8_copy1

0xdb60,	// (0x00035945) set_opt_bg_pane_g9_copy1

0x8b31,	// (0x00030916) bg_set_opt_pane_cp_vc

0xdb6a,	// (0x0003594f) setting_slider_pane_vc_t1

0xdaeb,	// (0x000358d0) setting_slider_pane_vc_t2

0xdaf9,	// (0x000358de) setting_slider_pane_vc_t3

0x0002,

0x018d,	// (0x00027f72) setting_slider_pane_vc_t

0xdb07,	// (0x000358ec) slider_set_pane_vc

0x219a,	// (0x00029f7f) volume_set_pane_vc_g1

0x21a3,	// (0x00029f88) volume_set_pane_vc_g2

0x21ac,	// (0x00029f91) volume_set_pane_vc_g3

0x21b5,	// (0x00029f9a) volume_set_pane_vc_g4

0x21be,	// (0x00029fa3) volume_set_pane_vc_g5

0x21c7,	// (0x00029fac) volume_set_pane_vc_g6

0x21d0,	// (0x00029fb5) volume_set_pane_vc_g7

0x21d9,	// (0x00029fbe) volume_set_pane_vc_g8

0x21e2,	// (0x00029fc7) volume_set_pane_vc_g9

0x21eb,	// (0x00029fd0) volume_set_pane_vc_g10

0x0009,

0xf975,	// (0x0003775a) volume_set_pane_vc_g

0xdb79,	// (0x0003595e) volume_set_pane_vc

0xdb81,	// (0x00035966) button_value_adjust_pane_cp1_vc

0xdb8b,	// (0x00035970) list_highlight_pane_cp2_vc

0xdb94,	// (0x00035979) list_set_pane_vc_ParamLimits

0xdb94,	// (0x00035979) list_set_pane_vc

0xdbfe,	// (0x000359e3) main_pane_set_vc_t1_ParamLimits

0xdbfe,	// (0x000359e3) main_pane_set_vc_t1

0xdc13,	// (0x000359f8) main_pane_set_vc_t2_ParamLimits

0xdc13,	// (0x000359f8) main_pane_set_vc_t2

0xdc25,	// (0x00035a0a) main_pane_set_vc_t3_ParamLimits

0xdc25,	// (0x00035a0a) main_pane_set_vc_t3

0xdc39,	// (0x00035a1e) main_pane_set_vc_t4_ParamLimits

0xdc39,	// (0x00035a1e) main_pane_set_vc_t4

0x0003,

0x01a9,	// (0x00027f8e) main_pane_set_vc_t_ParamLimits

0x01a9,	// (0x00027f8e) main_pane_set_vc_t

0xdc4d,	// (0x00035a32) setting_code_pane_vc_ParamLimits

0xdc4d,	// (0x00035a32) setting_code_pane_vc

0xdc5e,	// (0x00035a43) setting_slider_graphic_pane_vc

0xdc5e,	// (0x00035a43) setting_slider_pane_vc

0xdc5e,	// (0x00035a43) setting_text_pane_vc

0xdc5e,	// (0x00035a43) setting_volume_pane_vc

0xdc68,	// (0x00035a4d) scroll_pane_cp121_vc

0xb327,	// (0x0003310c) set_content_pane_vc

0xdca8,	// (0x00035a8d) button_value_adjust_pane_g1

0xdcb1,	// (0x00035a96) button_value_adjust_pane_g2

0x0001,

0x01fc,	// (0x00027fe1) button_value_adjust_pane_g

0xdcba,	// (0x00035a9f) form_field_slider_wide_pane_vc_t1_ParamLimits

0xdcba,	// (0x00035a9f) form_field_slider_wide_pane_vc_t1

0xdcce,	// (0x00035ab3) form_field_slider_wide_pane_vc_t2_ParamLimits

0xdcce,	// (0x00035ab3) form_field_slider_wide_pane_vc_t2

0x0001,

0x0201,	// (0x00027fe6) form_field_slider_wide_pane_vc_t_ParamLimits

0x0201,	// (0x00027fe6) form_field_slider_wide_pane_vc_t

0x8b7f,	// (0x00030964) input_focus_pane_cp10_vc_ParamLimits

0x8b7f,	// (0x00030964) input_focus_pane_cp10_vc

0xdce2,	// (0x00035ac7) slider_cont_pane_cp1_vc_ParamLimits

0xdce2,	// (0x00035ac7) slider_cont_pane_cp1_vc

0xdb0f,	// (0x000358f4) slider_form_pane_g1_cp2

0xdb18,	// (0x000358fd) slider_form_pane_g2_cp2

0xdcfd,	// (0x00035ae2) form_field_slider_pane_vc_t3

0xdd0b,	// (0x00035af0) form_field_slider_pane_vc_t4

0xdd19,	// (0x00035afe) slider_form_pane_vc_ParamLimits

0xdd19,	// (0x00035afe) slider_form_pane_vc

0xdd26,	// (0x00035b0b) form_field_slider_pane_vc_t1_ParamLimits

0xdd26,	// (0x00035b0b) form_field_slider_pane_vc_t1

0xdcce,	// (0x00035ab3) form_field_slider_pane_vc_t2_ParamLimits

0xdcce,	// (0x00035ab3) form_field_slider_pane_vc_t2

0x0001,

0x0211,	// (0x00027ff6) form_field_slider_pane_vc_t_ParamLimits

0x0211,	// (0x00027ff6) form_field_slider_pane_vc_t

0x8b7f,	// (0x00030964) input_focus_pane_cp9_vc_ParamLimits

0x8b7f,	// (0x00030964) input_focus_pane_cp9_vc

0xdd42,	// (0x00035b27) slider_cont_pane_vc_ParamLimits

0xdd42,	// (0x00035b27) slider_cont_pane_vc

0xdd56,	// (0x00035b3b) list_form_graphic_pane_cp_vc_ParamLimits

0xdd56,	// (0x00035b3b) list_form_graphic_pane_cp_vc

0xc538,	// (0x0003431d) form_field_popup_wide_pane_vc_g1

0xdd6b,	// (0x00035b50) form_field_popup_wide_pane_vc_t1_ParamLimits

0xdd6b,	// (0x00035b50) form_field_popup_wide_pane_vc_t1

0xb34d,	// (0x00033132) input_focus_pane_cp8_vc_ParamLimits

0xb34d,	// (0x00033132) input_focus_pane_cp8_vc

0xdd82,	// (0x00035b67) list_form_wide_pane_vc_ParamLimits

0xdd82,	// (0x00035b67) list_form_wide_pane_vc

0xdd8e,	// (0x00035b73) list_form_graphic_pane_vc_g1

0xdd96,	// (0x00035b7b) list_form_graphic_pane_vc_t1_ParamLimits

0xdd96,	// (0x00035b7b) list_form_graphic_pane_vc_t1

0x8b8d,	// (0x00030972) list_highlight_pane_cp5_vc_ParamLimits

0x8b8d,	// (0x00030972) list_highlight_pane_cp5_vc

0xddb2,	// (0x00035b97) list_form_graphic_pane_vc_ParamLimits

0xddb2,	// (0x00035b97) list_form_graphic_pane_vc

0xc538,	// (0x0003431d) form_field_popup_pane_vc_g1

0xddc8,	// (0x00035bad) form_field_popup_pane_vc_t1_ParamLimits

0xddc8,	// (0x00035bad) form_field_popup_pane_vc_t1

0xb34d,	// (0x00033132) input_focus_pane_cp7_vc_ParamLimits

0xb34d,	// (0x00033132) input_focus_pane_cp7_vc

0xdddf,	// (0x00035bc4) list_form_pane_vc_ParamLimits

0xdddf,	// (0x00035bc4) list_form_pane_vc

0xddeb,	// (0x00035bd0) data_form_pane_vc_t1_ParamLimits

0xddeb,	// (0x00035bd0) data_form_pane_vc_t1

0xb3b4,	// (0x00033199) input_focus_pane_vc_g1

0xb3bc,	// (0x000331a1) input_focus_pane_vc_g2

0xb3c4,	// (0x000331a9) input_focus_pane_vc_g3

0xb3cc,	// (0x000331b1) input_focus_pane_vc_g4

0xb3d4,	// (0x000331b9) input_focus_pane_vc_g5

0xb3dc,	// (0x000331c1) input_focus_pane_vc_g6

0xb3e4,	// (0x000331c9) input_focus_pane_vc_g7

0xb3ec,	// (0x000331d1) input_focus_pane_vc_g8

0xb3f4,	// (0x000331d9) input_focus_pane_vc_g9

0x8b27,	// (0x0003090c) input_focus_pane_vc_g10

0x0009,

0xf6a4,	// (0x00037489) input_focus_pane_vc_g

0xc52c,	// (0x00034311) data_form_pane_vc_ParamLimits

0xc52c,	// (0x00034311) data_form_pane_vc

0xc538,	// (0x0003431d) form_field_data_pane_vc_g1

0xde06,	// (0x00035beb) form_field_data_pane_vc_t1_ParamLimits

0xde06,	// (0x00035beb) form_field_data_pane_vc_t1

0xb34d,	// (0x00033132) input_focus_pane_vc_ParamLimits

0xb34d,	// (0x00033132) input_focus_pane_vc

0xde20,	// (0x00035c05) button_value_adjust_pane_cp3_vc

0xde28,	// (0x00035c0d) button_value_adjust_pane_cp5_vc

0xde30,	// (0x00035c15) form_field_data_pane_vc_ParamLimits

0xde30,	// (0x00035c15) form_field_data_pane_vc

0xde47,	// (0x00035c2c) form_field_data_pane_vc_cp2

0xde4f,	// (0x00035c34) form_field_data_wide_pane_vc_ParamLimits

0xde4f,	// (0x00035c34) form_field_data_wide_pane_vc

0xde65,	// (0x00035c4a) form_field_data_wide_pane_vc_cp2

0xde6d,	// (0x00035c52) form_field_popup_pane_vc_ParamLimits

0xde6d,	// (0x00035c52) form_field_popup_pane_vc

0xde84,	// (0x00035c69) form_field_popup_wide_pane_vc_ParamLimits

0xde84,	// (0x00035c69) form_field_popup_wide_pane_vc

0xde9a,	// (0x00035c7f) form_field_slider_pane_vc_ParamLimits

0xde9a,	// (0x00035c7f) form_field_slider_pane_vc

0xdead,	// (0x00035c92) form_field_slider_wide_pane_vc_ParamLimits

0xdead,	// (0x00035c92) form_field_slider_wide_pane_vc

0x9d9a,	// (0x00031b7f) grid_touch_1_pane_ParamLimits

0x9d9a,	// (0x00031b7f) grid_touch_1_pane

0x9dae,	// (0x00031b93) grid_touch_2_pane_ParamLimits

0x9dae,	// (0x00031b93) grid_touch_2_pane

0xdec0,	// (0x00035ca5) touch_pane_g1_ParamLimits

0xdec0,	// (0x00035ca5) touch_pane_g1

0xdece,	// (0x00035cb3) cell_app_pane_cp_wide_ParamLimits

0xdece,	// (0x00035cb3) cell_app_pane_cp_wide

0xdedf,	// (0x00035cc4) grid_popup_fast_wide_pane_ParamLimits

0xdedf,	// (0x00035cc4) grid_popup_fast_wide_pane

0xdef3,	// (0x00035cd8) scroll_pane_cp19_ParamLimits

0xdef3,	// (0x00035cd8) scroll_pane_cp19

0x8b31,	// (0x00030916) bg_popup_window_pane_cp20

0xdf07,	// (0x00035cec) listscroll_popup_fast_wide_pane

0xccf0,	// (0x00034ad5) grid_indicator_nsta_pane

0xdf0f,	// (0x00035cf4) clock_nsta_pane_g1

0xdf18,	// (0x00035cfd) clock_nsta_pane_t1

0x9dd8,	// (0x00031bbd) cell_indicator_nsta_pane_ParamLimits

0x9dd8,	// (0x00031bbd) cell_indicator_nsta_pane

0xdec0,	// (0x00035ca5) cell_indicator_nsta_pane_g1

0x9df1,	// (0x00031bd6) cell_indicator_nsta_pane_g2

0x0001,

0xf9d6,	// (0x000377bb) cell_indicator_nsta_pane_g

0xdf34,	// (0x00035d19) clock_nsta_pane_cp

0xdf3c,	// (0x00035d21) indicator_nsta_pane_cp

0xdf45,	// (0x00035d2a) nsta_clock_indic_pane_g1

0x8bc9,	// (0x000309ae) grid_indicator_pane

0xb8dd,	// (0x000336c2) scroll_pane_cp29

0x1338,	// (0x0002911d) indicator_nsta_pane_cp2_ParamLimits

0x1338,	// (0x0002911d) indicator_nsta_pane_cp2

0x8b8d,	// (0x00030972) main_apps_wheel_pane

0xc654,	// (0x00034439) form_midp_field_text_pane_ParamLimits

0xc793,	// (0x00034578) scroll_bar_cp050_ParamLimits

0xdfae,	// (0x00035d93) cell_indicator_pane_ParamLimits

0xdfae,	// (0x00035d93) cell_indicator_pane

0xdfc5,	// (0x00035daa) cell_indicator_pane_g1

0x9e06,	// (0x00031beb) grid_wheel_folder_pane_ParamLimits

0x9e06,	// (0x00031beb) grid_wheel_folder_pane

0x9e14,	// (0x00031bf9) list_wheel_apps_pane_ParamLimits

0x9e14,	// (0x00031bf9) list_wheel_apps_pane

0x9e22,	// (0x00031c07) main_apps_wheel_pane_g1_ParamLimits

0x9e22,	// (0x00031c07) main_apps_wheel_pane_g1

0x9e2e,	// (0x00031c13) main_apps_wheel_pane_g2_ParamLimits

0x9e2e,	// (0x00031c13) main_apps_wheel_pane_g2

0x0001,

0xf9db,	// (0x000377c0) main_apps_wheel_pane_g_ParamLimits

0xf9db,	// (0x000377c0) main_apps_wheel_pane_g

0x9e3c,	// (0x00031c21) main_apps_wheel_pane_t1_ParamLimits

0x9e3c,	// (0x00031c21) main_apps_wheel_pane_t1

0x9e50,	// (0x00031c35) list_wheel_apps_pane_g1

0x9e58,	// (0x00031c3d) list_wheel_apps_pane_g2

0x9e60,	// (0x00031c45) list_wheel_apps_pane_g3

0x9e68,	// (0x00031c4d) list_wheel_apps_pane_g4

0x9e72,	// (0x00031c57) list_wheel_apps_pane_g5

0x0004,

0xf9e0,	// (0x000377c5) list_wheel_apps_pane_g

0xbd16,	// (0x00033afb) navi_icon_text_pane

0x7fb2,	// (0x0002fd97) aid_fill_nsta

0xdfcf,	// (0x00035db4) navi_icon_text_pane_g1

0xdfdb,	// (0x00035dc0) navi_icon_text_pane_t1

0x76b1,	// (0x0002f496) list_set_graphic_pane_t1_ParamLimits

0x76b1,	// (0x0002f496) list_set_graphic_pane_t1

0xcef6,	// (0x00034cdb) popup_midp_note_alarm_window_t6_ParamLimits

0xcef6,	// (0x00034cdb) popup_midp_note_alarm_window_t6

0xcf08,	// (0x00034ced) popup_midp_note_alarm_window_t7_ParamLimits

0xcf08,	// (0x00034ced) popup_midp_note_alarm_window_t7

0xcf1a,	// (0x00034cff) popup_midp_note_alarm_window_t8_ParamLimits

0xcf1a,	// (0x00034cff) popup_midp_note_alarm_window_t8

0xcf2c,	// (0x00034d11) popup_midp_note_alarm_window_t9_ParamLimits

0xcf2c,	// (0x00034d11) popup_midp_note_alarm_window_t9

0xcf3e,	// (0x00034d23) popup_midp_note_alarm_window_t10_ParamLimits

0xcf3e,	// (0x00034d23) popup_midp_note_alarm_window_t10

0xcf50,	// (0x00034d35) popup_midp_note_alarm_window_t11_ParamLimits

0xcf50,	// (0x00034d35) popup_midp_note_alarm_window_t11

0xcf62,	// (0x00034d47) scroll_pane_cp17_ParamLimits

0xcf62,	// (0x00034d47) scroll_pane_cp17

0x219a,	// (0x00029f7f) volume_small_pane_cp_g1

0x2979,	// (0x0002a75e) volume_small_pane_cp_g2

0x2982,	// (0x0002a767) volume_small_pane_cp_g3

0x298b,	// (0x0002a770) volume_small_pane_cp_g4

0x2994,	// (0x0002a779) volume_small_pane_cp_g5

0x299d,	// (0x0002a782) volume_small_pane_cp_g6

0x29a6,	// (0x0002a78b) volume_small_pane_cp_g7

0x29af,	// (0x0002a794) volume_small_pane_cp_g8

0x29b8,	// (0x0002a79d) volume_small_pane_cp_g9

0x29c1,	// (0x0002a7a6) volume_small_pane_cp_g10

0xbec0,	// (0x00033ca5) midp_ticker_pane_g1_ParamLimits

0xbecc,	// (0x00033cb1) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x00037555) midp_ticker_pane_g_ParamLimits

0xbed8,	// (0x00033cbd) midp_ticker_pane_t1_ParamLimits

0x7fd6,	// (0x0002fdbb) aid_fill_nsta_2

0xc77f,	// (0x00034564) list_form2_midp_pane

0xd66c,	// (0x00035451) midp_editing_number_pane_ParamLimits

0xd67b,	// (0x00035460) midp_ticker_pane_ParamLimits

0xdfed,	// (0x00035dd2) form2_midp_field_pane

0xdff5,	// (0x00035dda) scroll_pane_cp51

0xe015,	// (0x00035dfa) form2_midp_button_pane_ParamLimits

0xe015,	// (0x00035dfa) form2_midp_button_pane

0xe027,	// (0x00035e0c) form2_midp_content_pane_ParamLimits

0xe027,	// (0x00035e0c) form2_midp_content_pane

0xe041,	// (0x00035e26) form2_midp_field_choice_group_pane

0xe049,	// (0x00035e2e) form2_midp_field_pane_g1

0xe051,	// (0x00035e36) form2_midp_field_pane_g2

0xe059,	// (0x00035e3e) form2_midp_field_pane_g3

0xe061,	// (0x00035e46) form2_midp_field_pane_g4

0x0003,

0x0261,	// (0x00028046) form2_midp_field_pane_g

0xe069,	// (0x00035e4e) form2_midp_gauge_slider_pane

0xe071,	// (0x00035e56) form2_midp_gauge_wait_pane

0xe079,	// (0x00035e5e) form2_midp_image_pane_ParamLimits

0xe079,	// (0x00035e5e) form2_midp_image_pane

0xe094,	// (0x00035e79) form2_midp_label_pane_ParamLimits

0xe094,	// (0x00035e79) form2_midp_label_pane

0x9ea5,	// (0x00031c8a) form2_midp_label_pane_cp_ParamLimits

0x9ea5,	// (0x00031c8a) form2_midp_label_pane_cp

0xe0ad,	// (0x00035e92) form2_midp_string_pane_ParamLimits

0xe0ad,	// (0x00035e92) form2_midp_string_pane

0x93d5,	// (0x000311ba) form2_midp_text_pane_ParamLimits

0x93d5,	// (0x000311ba) form2_midp_text_pane

0xe0bf,	// (0x00035ea4) form2_midp_time_pane

0xe0cf,	// (0x00035eb4) input_focus_pane_cp51_ParamLimits

0xe0cf,	// (0x00035eb4) input_focus_pane_cp51

0xe0e7,	// (0x00035ecc) form2_midp_label_pane_t1_ParamLimits

0xe0e7,	// (0x00035ecc) form2_midp_label_pane_t1

0x93ee,	// (0x000311d3) form2_mdip_text_pane_t1_ParamLimits

0x93ee,	// (0x000311d3) form2_mdip_text_pane_t1

0x6193,	// (0x0002df78) form2_midp_time_pane_t1

0xe130,	// (0x00035f15) form2_midp_gauge_slider_pane_t1

0x9ec4,	// (0x00031ca9) form2_midp_gauge_slider_pane_t2

0x9ed6,	// (0x00031cbb) form2_midp_gauge_slider_pane_t3

0x0002,

0xfa05,	// (0x000377ea) form2_midp_gauge_slider_pane_t

0xe142,	// (0x00035f27) form2_midp_slider_pane

0xe14e,	// (0x00035f33) form2_midp_gauge_wait_pane_t1

0xe15c,	// (0x00035f41) form2_midp_wait_pane_ParamLimits

0xe15c,	// (0x00035f41) form2_midp_wait_pane

0x9ee8,	// (0x00031ccd) list_single_2graphic_pane_cp4_ParamLimits

0x9ee8,	// (0x00031ccd) list_single_2graphic_pane_cp4

0x845e,	// (0x00030243) list_single_midp_graphic_pane_cp_ParamLimits

0x845e,	// (0x00030243) list_single_midp_graphic_pane_cp

0x8b31,	// (0x00030916) list_highlight_pane_cp20

0xe187,	// (0x00035f6c) list_single_2graphic_pane_g1_cp4

0xe18f,	// (0x00035f74) list_single_2graphic_pane_g2_cp4

0xe197,	// (0x00035f7c) list_single_2graphic_pane_t1_cp4

0x8b8d,	// (0x00030972) list_highlight_pane_cp21

0xe1a6,	// (0x00035f8b) list_single_midp_graphic_pane_g4_cp

0xe1b5,	// (0x00035f9a) list_single_midp_graphic_pane_t1_cp

0x9efc,	// (0x00031ce1) form2_mdip_string_pane_t1_ParamLimits

0x9efc,	// (0x00031ce1) form2_mdip_string_pane_t1

0x8b31,	// (0x00030916) bg_wml_button_pane_cp2

0x8b27,	// (0x0003090c) form2_midp_image_pane_g1

0x4c88,	// (0x0002ca6d) list_double_large_graphic_pane_g5_ParamLimits

0x4c88,	// (0x0002ca6d) list_double_large_graphic_pane_g5

0xb4a5,	// (0x0003328a) midp_form_pane_ParamLimits

0x8b8d,	// (0x00030972) main_apps_wheel_pane_ParamLimits

0x7d0e,	// (0x0002faf3) popup_preview_window_ParamLimits

0x7d0e,	// (0x0002faf3) popup_preview_window

0xc1d5,	// (0x00033fba) popup_touch_info_window_ParamLimits

0xc1d5,	// (0x00033fba) popup_touch_info_window

0xc1f3,	// (0x00033fd8) popup_touch_menu_window_ParamLimits

0xc1f3,	// (0x00033fd8) popup_touch_menu_window

0x8b1d,	// (0x00030902) bg_popup_sub_pane_cp6

0xe1ca,	// (0x00035faf) list_touch_menu_pane

0xe1d2,	// (0x00035fb7) list_single_touch_menu_pane_ParamLimits

0xe1d2,	// (0x00035fb7) list_single_touch_menu_pane

0xe1e8,	// (0x00035fcd) list_single_touch_menu_pane_t1

0x8b8d,	// (0x00030972) bg_popup_sub_pane_cp7_ParamLimits

0x8b8d,	// (0x00030972) bg_popup_sub_pane_cp7

0xe1f6,	// (0x00035fdb) heading_sub_pane

0xe1fe,	// (0x00035fe3) list_touch_info_pane_ParamLimits

0xe1fe,	// (0x00035fe3) list_touch_info_pane

0xe20d,	// (0x00035ff2) list_single_touch_info_pane_ParamLimits

0xe20d,	// (0x00035ff2) list_single_touch_info_pane

0xe21f,	// (0x00036004) list_single_touch_info_pane_t1

0xe22d,	// (0x00036012) list_single_touch_info_pane_t2

0x0001,

0x0278,	// (0x0002805d) list_single_touch_info_pane_t

0xbe96,	// (0x00033c7b) bg_popup_heading_pane_cp

0xe23b,	// (0x00036020) heading_sub_pane_t1

0xc4f2,	// (0x000342d7) bg_popup_preview_window_pane_cp_ParamLimits

0xc4f2,	// (0x000342d7) bg_popup_preview_window_pane_cp

0xe1f6,	// (0x00035fdb) heading_preview_pane

0xe1fe,	// (0x00035fe3) list_preview_pane_ParamLimits

0xe1fe,	// (0x00035fe3) list_preview_pane

0xe249,	// (0x0003602e) popup_preview_window_g1

0xe20d,	// (0x00035ff2) list_single_preview_pane_ParamLimits

0xe20d,	// (0x00035ff2) list_single_preview_pane

0xe251,	// (0x00036036) list_single_preview_pane_g1

0xe259,	// (0x0003603e) list_single_preview_pane_t1

0xe21f,	// (0x00036004) list_single_preview_pane_t2

0x0001,

0x027d,	// (0x00028062) list_single_preview_pane_t

0xe267,	// (0x0003604c) bg_popup_heading_pane_cp2_ParamLimits

0xe267,	// (0x0003604c) bg_popup_heading_pane_cp2

0xe27d,	// (0x00036062) heading_preview_pane_g1

0xe285,	// (0x0003606a) heading_preview_pane_t1_ParamLimits

0xe285,	// (0x0003606a) heading_preview_pane_t1

0x8be0,	// (0x000309c5) soft_indicator_pane_t1_ParamLimits

0x9976,	// (0x0003175b) scroll_pane_ParamLimits

0xb7d6,	// (0x000335bb) scroll_sc2_left_pane

0xb7df,	// (0x000335c4) scroll_sc2_right_pane

0xb7fe,	// (0x000335e3) scroll_bg_pane_g1_ParamLimits

0xb813,	// (0x000335f8) scroll_bg_pane_g2_ParamLimits

0xb82b,	// (0x00033610) scroll_bg_pane_g3_ParamLimits

0xf6fb,	// (0x000374e0) scroll_bg_pane_g_ParamLimits

0xb7fe,	// (0x000335e3) scroll_handle_pane_g1_ParamLimits

0xb84d,	// (0x00033632) scroll_handle_pane_g2_ParamLimits

0xb82b,	// (0x00033610) scroll_handle_pane_g3_ParamLimits

0xf702,	// (0x000374e7) scroll_handle_pane_g_ParamLimits

0xc112,	// (0x00033ef7) popup_choice_list_window_ParamLimits

0xc112,	// (0x00033ef7) popup_choice_list_window

0xc344,	// (0x00034129) choice_list_pane

0xc3c6,	// (0x000341ab) cell_toolbar_pane_t1

0xc3ee,	// (0x000341d3) toolbar_button_pane_ParamLimits

0xd38e,	// (0x00035173) ai_gene_pane_1_t2_ParamLimits

0xd38e,	// (0x00035173) ai_gene_pane_1_t2

0x0001,

0x0087,	// (0x00027e6c) ai_gene_pane_1_t_ParamLimits

0x0087,	// (0x00027e6c) ai_gene_pane_1_t

0xe2a2,	// (0x00036087) scroll_sc2_left_pane_g1

0xe2a2,	// (0x00036087) scroll_sc2_right_pane_g1

0xb4a5,	// (0x0003328a) bg_popup_sub_pane_cp10

0xe2ac,	// (0x00036091) list_choice_list_pane

0xe2c5,	// (0x000360aa) list_single_choice_list_pane_ParamLimits

0xe2c5,	// (0x000360aa) list_single_choice_list_pane

0xe2d8,	// (0x000360bd) list_single_choice_list_pane_g1

0xb490,	// (0x00033275) list_single_choice_list_pane_t1_ParamLimits

0xb490,	// (0x00033275) list_single_choice_list_pane_t1

0xe2e0,	// (0x000360c5) choice_list_pane_g1

0xe2e8,	// (0x000360cd) choice_list_pane_t1

0x8b1d,	// (0x00030902) input_focus_pane_cp11

0xb74b,	// (0x00033530) title_pane_stacon_g2_ParamLimits

0xb74b,	// (0x00033530) title_pane_stacon_g2

0x0002,

0xf6e1,	// (0x000374c6) title_pane_stacon_g_ParamLimits

0xf6e1,	// (0x000374c6) title_pane_stacon_g

0xbe96,	// (0x00033c7b) cursor_press_pane

0x79d9,	// (0x0002f7be) popup_fep_hwr_window_ParamLimits

0x79d9,	// (0x0002f7be) popup_fep_hwr_window

0xc16c,	// (0x00033f51) popup_fep_vkb_window_ParamLimits

0xc16c,	// (0x00033f51) popup_fep_vkb_window

0xe2f6,	// (0x000360db) cursor_press_pane_g1

0x0002,

0xfa27,	// (0x0003780c) fep_vkb_side_pane_g_ParamLimits

0x2b8c,	// (0x0002a971) fep_hwr_candidate_pane_ParamLimits

0x2b8c,	// (0x0002a971) fep_hwr_candidate_pane

0x2bb6,	// (0x0002a99b) fep_hwr_side_pane_ParamLimits

0x2bb6,	// (0x0002a99b) fep_hwr_side_pane

0x2bd6,	// (0x0002a9bb) fep_hwr_top_pane_ParamLimits

0x2bd6,	// (0x0002a9bb) fep_hwr_top_pane

0x2bee,	// (0x0002a9d3) fep_hwr_write_pane_ParamLimits

0x2bee,	// (0x0002a9d3) fep_hwr_write_pane

0xfa27,	// (0x0003780c) fep_vkb_side_pane_g

0xe2fe,	// (0x000360e3) fep_hwr_top_pane_g1

0xe310,	// (0x000360f5) fep_hwr_top_pane_g2

0x2c28,	// (0x0002aa0d) fep_hwr_top_pane_g3

0x0002,

0xfa0c,	// (0x000377f1) fep_hwr_top_pane_g

0x2c3d,	// (0x0002aa22) fep_hwr_top_text_pane

0xb9a4,	// (0x00033789) fep_hwr_top_text_pane_g1

0xe346,	// (0x0003612b) fep_hwr_top_text_pane_t1

0x2d33,	// (0x0002ab18) fep_hwr_candidate_pane_g1

0xe473,	// (0x00036258) fep_vkb_keypad_pane_g3_ParamLimits

0xe473,	// (0x00036258) fep_vkb_keypad_pane_g3

0xe49b,	// (0x00036280) fep_vkb_keypad_pane_g4_ParamLimits

0xe49b,	// (0x00036280) fep_vkb_keypad_pane_g4

0xe50a,	// (0x000362ef) fep_vkb_bottom_pane_g2_ParamLimits

0xe50a,	// (0x000362ef) fep_vkb_bottom_pane_g2

0x0001,

0x02ad,	// (0x00028092) fep_vkb_bottom_pane_g_ParamLimits

0x02ad,	// (0x00028092) fep_vkb_bottom_pane_g

0xe2a2,	// (0x00036087) cell_vkb_side_pane_g2

0x0001,

0x02b7,	// (0x0002809c) cell_vkb_side_pane_g

0xe54e,	// (0x00036333) cell_vkb_side_pane_t1

0xe55c,	// (0x00036341) cell_vkb_side_pane_t1_copy1

0xe2a2,	// (0x00036087) bg_fep_vkb_candidate_pane_g2

0xe632,	// (0x00036417) cell_vkb_candidate_pane_ParamLimits

0xe354,	// (0x00036139) aid_size_cell_vkb_ParamLimits

0xe354,	// (0x00036139) aid_size_cell_vkb

0xe632,	// (0x00036417) cell_vkb_candidate_pane

0x2f1d,	// (0x0002ad02) bg_popup_fep_shadow_pane_g1

0x9f80,	// (0x00031d65) fep_vkb_bottom_pane_ParamLimits

0x9f80,	// (0x00031d65) fep_vkb_bottom_pane

0xe3e1,	// (0x000361c6) fep_vkb_candidate_pane_ParamLimits

0xe3e1,	// (0x000361c6) fep_vkb_candidate_pane

0x9fa5,	// (0x00031d8a) fep_vkb_keypad_pane_ParamLimits

0x9fa5,	// (0x00031d8a) fep_vkb_keypad_pane

0x9fe1,	// (0x00031dc6) fep_vkb_side_pane_ParamLimits

0x9fe1,	// (0x00031dc6) fep_vkb_side_pane

0xa01d,	// (0x00031e02) fep_vkb_top_pane_ParamLimits

0xa01d,	// (0x00031e02) fep_vkb_top_pane

0xe407,	// (0x000361ec) fep_vkb_top_pane_g1_ParamLimits

0xe407,	// (0x000361ec) fep_vkb_top_pane_g1

0xe416,	// (0x000361fb) fep_vkb_top_pane_g2_ParamLimits

0xe416,	// (0x000361fb) fep_vkb_top_pane_g2

0xe425,	// (0x0003620a) fep_vkb_top_pane_g3_ParamLimits

0xe425,	// (0x0003620a) fep_vkb_top_pane_g3

0x0003,

0x029d,	// (0x00028082) fep_vkb_top_pane_g_ParamLimits

0x029d,	// (0x00028082) fep_vkb_top_pane_g

0xe443,	// (0x00036228) fep_vkb_top_text_pane_ParamLimits

0xe443,	// (0x00036228) fep_vkb_top_text_pane

0xa059,	// (0x00031e3e) fep_vkb_side_pane_g1_ParamLimits

0xa059,	// (0x00031e3e) fep_vkb_side_pane_g1

0xe462,	// (0x00036247) grid_vkb_side_pane_ParamLimits

0xe462,	// (0x00036247) grid_vkb_side_pane

0x2f25,	// (0x0002ad0a) bg_popup_fep_shadow_pane_g2

0x2f2e,	// (0x0002ad13) bg_popup_fep_shadow_pane_g3

0x2f36,	// (0x0002ad1b) bg_popup_fep_shadow_pane_g4

0x2f3f,	// (0x0002ad24) bg_popup_fep_shadow_pane_g5

0x2f49,	// (0x0002ad2e) bg_popup_fep_shadow_pane_g6

0x2f51,	// (0x0002ad36) bg_popup_fep_shadow_pane_g7

0xb3cc,	// (0x000331b1) bg_popup_fep_shadow_pane_g8

0xe4b9,	// (0x0003629e) grid_vkb_keypad_number_pane_ParamLimits

0xe4b9,	// (0x0003629e) grid_vkb_keypad_number_pane

0xe4c9,	// (0x000362ae) grid_vkb_keypad_pane_ParamLimits

0xe4c9,	// (0x000362ae) grid_vkb_keypad_pane

0xe4ef,	// (0x000362d4) fep_vkb_bottom_pane_g1_ParamLimits

0xe4ef,	// (0x000362d4) fep_vkb_bottom_pane_g1

0xe518,	// (0x000362fd) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe518,	// (0x000362fd) grid_vkb_keypad_bottom_left_pane

0xe52d,	// (0x00036312) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe52d,	// (0x00036312) grid_vkb_keypad_bottom_right_pane

0xe542,	// (0x00036327) fep_vkb_top_text_pane_g1

0xa0a0,	// (0x00031e85) fep_vkb_top_text_pane_t1

0xa0b2,	// (0x00031e97) cell_vkb_side_pane_ParamLimits

0xa0b2,	// (0x00031e97) cell_vkb_side_pane

0xe2a2,	// (0x00036087) cell_vkb_side_pane_g1

0xe56a,	// (0x0003634f) cell_vkb_keypad_pane_ParamLimits

0xe56a,	// (0x0003634f) cell_vkb_keypad_pane

0xe5df,	// (0x000363c4) cell_vkb_keypad_pane_g1

0x0008,

0xfa33,	// (0x00037818) bg_popup_fep_shadow_pane_g

0x2f63,	// (0x0002ad48) cell_hwr_side_pane_g1

0x2f63,	// (0x0002ad48) cell_hwr_side_pane_g2

0xe5e9,	// (0x000363ce) cell_vkb_keypad_pane_t1

0xa0c8,	// (0x00031ead) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa0c8,	// (0x00031ead) cell_vkb_keypad_bottom_left_pane

0xa0dd,	// (0x00031ec2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa0dd,	// (0x00031ec2) cell_vkb_keypad_bottom_right_pane

0xe2a2,	// (0x00036087) cell_vkb_keypad_bottom_left_pane_g1

0xe2a2,	// (0x00036087) cell_vkb_keypad_bottom_right_pane_g1

0xe5f7,	// (0x000363dc) cell_vkb_keypad_number_pane_ParamLimits

0xe5f7,	// (0x000363dc) cell_vkb_keypad_number_pane

0xe616,	// (0x000363fb) cell_vkb_keypad_number_pane_g1

0xe620,	// (0x00036405) cell_vkb_keypad_number_pane_g2

0xe629,	// (0x0003640e) cell_vkb_keypad_number_pane_g3

0x0002,

0x02bc,	// (0x000280a1) cell_vkb_keypad_number_pane_g

0xe5e9,	// (0x000363ce) cell_vkb_keypad_number_pane_t1

0xe64d,	// (0x00036432) fep_vkb_candidate_pane_g1

0x0001,

0xfa46,	// (0x0003782b) cell_hwr_side_pane_g

0xe666,	// (0x0003644b) cell_hwr_side_pane_t1

0x2f6d,	// (0x0002ad52) cell_hwr_side_pane_t1_copy1

0x2f7b,	// (0x0002ad60) cell_hwr_candidate_pane_g1

0x2fcb,	// (0x0002adb0) cell_hwr_candidate_pane_t1

0xe2a2,	// (0x00036087) cell_vkb_candidate_pane_g2

0xe6aa,	// (0x0003648f) cell_vkb_candidate_pane_t1

0x2b53,	// (0x0002a938) bg_popup_fep_shadow_pane_ParamLimits

0x2b53,	// (0x0002a938) bg_popup_fep_shadow_pane

0x2c08,	// (0x0002a9ed) bg_fep_hwr_top_pane_g4

0xe322,	// (0x00036107) bg_hwr_side_pane_g1_ParamLimits

0xe322,	// (0x00036107) bg_hwr_side_pane_g1

0x8679,	// (0x0003045e) cell_hwr_side_pane_ParamLimits

0x8679,	// (0x0003045e) cell_hwr_side_pane

0x2cb4,	// (0x0002aa99) fep_hwr_write_pane_g1_ParamLimits

0x2cb4,	// (0x0002aa99) fep_hwr_write_pane_g1

0x2cc1,	// (0x0002aaa6) fep_hwr_write_pane_g2_ParamLimits

0x2cc1,	// (0x0002aaa6) fep_hwr_write_pane_g2

0x2cce,	// (0x0002aab3) fep_hwr_write_pane_g3_ParamLimits

0x2cce,	// (0x0002aab3) fep_hwr_write_pane_g3

0x8699,	// (0x0003047e) fep_hwr_write_pane_g4_ParamLimits

0x8699,	// (0x0003047e) fep_hwr_write_pane_g4

0x0005,

0xfa13,	// (0x000377f8) fep_hwr_write_pane_g_ParamLimits

0xfa13,	// (0x000377f8) fep_hwr_write_pane_g

0x2c08,	// (0x0002a9ed) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2c08,	// (0x0002a9ed) bg_fep_hwr_candidate_pane_g2

0x2cf1,	// (0x0002aad6) cell_hwr_candidate_pane_ParamLimits

0x2cf1,	// (0x0002aad6) cell_hwr_candidate_pane

0x2d33,	// (0x0002ab18) fep_hwr_candidate_pane_g1_ParamLimits

0xe382,	// (0x00036167) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe382,	// (0x00036167) bg_popup_fep_shadow_pane_cp2

0xe435,	// (0x0003621a) fep_vkb_top_pane_g4_ParamLimits

0xe435,	// (0x0003621a) fep_vkb_top_pane_g4

0xe454,	// (0x00036239) fep_vkb_side_pane_g2_ParamLimits

0xe454,	// (0x00036239) fep_vkb_side_pane_g2

0x90a4,	// (0x00030e89) list_setting_pane_t4_ParamLimits

0x90a4,	// (0x00030e89) list_setting_pane_t4

0x913e,	// (0x00030f23) list_setting_number_pane_t5_ParamLimits

0x913e,	// (0x00030f23) list_setting_number_pane_t5

0x75c8,	// (0x0002f3ad) list_double_heading_pane_cp2_ParamLimits

0x75c8,	// (0x0002f3ad) list_double_heading_pane_cp2

0xb367,	// (0x0003314c) list_double_heading_pane_g1_cp2_ParamLimits

0xb367,	// (0x0003314c) list_double_heading_pane_g1_cp2

0xb373,	// (0x00033158) list_double_heading_pane_g2_cp2_ParamLimits

0xb373,	// (0x00033158) list_double_heading_pane_g2_cp2

0xe6b8,	// (0x0003649d) list_double_heading_pane_t1_cp2_ParamLimits

0xe6b8,	// (0x0003649d) list_double_heading_pane_t1_cp2

0xe6ce,	// (0x000364b3) list_double_heading_pane_t2_cp2_ParamLimits

0xe6ce,	// (0x000364b3) list_double_heading_pane_t2_cp2

0x8b15,	// (0x000308fa) aid_value_unit2

0x09e2,	// (0x000287c7) popup_preview_fixed_window

0x8cc0,	// (0x00030aa5) bg_popup_preview_window_pane_cp02

0xe6e0,	// (0x000364c5) list_preview_fixed_pane

0xe726,	// (0x0003650b) list_empty_pane_fp_ParamLimits

0xe726,	// (0x0003650b) list_empty_pane_fp

0xe726,	// (0x0003650b) list_single_cale_day_pane_fp_ParamLimits

0xe726,	// (0x0003650b) list_single_cale_day_pane_fp

0xe726,	// (0x0003650b) list_single_graphic_heading_pane_fp_ParamLimits

0xe726,	// (0x0003650b) list_single_graphic_heading_pane_fp

0xe726,	// (0x0003650b) list_single_graphic_pane_fp_ParamLimits

0xe726,	// (0x0003650b) list_single_graphic_pane_fp

0xe726,	// (0x0003650b) list_single_heading_pane_fp_ParamLimits

0xe726,	// (0x0003650b) list_single_heading_pane_fp

0xe726,	// (0x0003650b) list_single_pane_fp_ParamLimits

0xe726,	// (0x0003650b) list_single_pane_fp

0xe73b,	// (0x00036520) list_single_pane_fp_g1_ParamLimits

0xe73b,	// (0x00036520) list_single_pane_fp_g1

0x61a6,	// (0x0002df8b) list_single_pane_fp_g2_ParamLimits

0x61a6,	// (0x0002df8b) list_single_pane_fp_g2

0x61b2,	// (0x0002df97) list_single_pane_fp_g3_ParamLimits

0x61b2,	// (0x0002df97) list_single_pane_fp_g3

0xe747,	// (0x0003652c) list_single_pane_fp_g4_ParamLimits

0xe747,	// (0x0003652c) list_single_pane_fp_g4

0x0003,

0xfa52,	// (0x00037837) list_single_pane_fp_g_ParamLimits

0xfa52,	// (0x00037837) list_single_pane_fp_g

0x61c6,	// (0x0002dfab) list_single_pane_fp_t1_ParamLimits

0x61c6,	// (0x0002dfab) list_single_pane_fp_t1

0x61dd,	// (0x0002dfc2) list_single_graphic_pane_fp_g1_ParamLimits

0x61dd,	// (0x0002dfc2) list_single_graphic_pane_fp_g1

0xe73b,	// (0x00036520) list_single_graphic_pane_fp_g2_ParamLimits

0xe73b,	// (0x00036520) list_single_graphic_pane_fp_g2

0x61a6,	// (0x0002df8b) list_single_graphic_pane_fp_g3_ParamLimits

0x61a6,	// (0x0002df8b) list_single_graphic_pane_fp_g3

0x61b2,	// (0x0002df97) list_single_graphic_pane_fp_g4_ParamLimits

0x61b2,	// (0x0002df97) list_single_graphic_pane_fp_g4

0xe747,	// (0x0003652c) list_single_graphic_pane_fp_g5_ParamLimits

0xe747,	// (0x0003652c) list_single_graphic_pane_fp_g5

0x0004,

0xfa5b,	// (0x00037840) list_single_graphic_pane_fp_g_ParamLimits

0xfa5b,	// (0x00037840) list_single_graphic_pane_fp_g

0x61e9,	// (0x0002dfce) list_single_graphic_pane_fp_t1_ParamLimits

0x61e9,	// (0x0002dfce) list_single_graphic_pane_fp_t1

0x61dd,	// (0x0002dfc2) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x61dd,	// (0x0002dfc2) list_single_graphic_heading_pane_fp_g1

0xe73b,	// (0x00036520) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe73b,	// (0x00036520) list_single_graphic_heading_pane_fp_g2

0x61a6,	// (0x0002df8b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x61a6,	// (0x0002df8b) list_single_graphic_heading_pane_fp_g3

0x61b2,	// (0x0002df97) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x61b2,	// (0x0002df97) list_single_graphic_heading_pane_fp_g4

0xe747,	// (0x0003652c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe747,	// (0x0003652c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfa5b,	// (0x00037840) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfa5b,	// (0x00037840) list_single_graphic_heading_pane_fp_g

0x61ff,	// (0x0002dfe4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x61ff,	// (0x0002dfe4) list_single_graphic_heading_pane_fp_t1

0x6215,	// (0x0002dffa) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6215,	// (0x0002dffa) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfa66,	// (0x0003784b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfa66,	// (0x0003784b) list_single_graphic_heading_pane_fp_t

0x6227,	// (0x0002e00c) list_single_cale_day_pane_fp_g1_ParamLimits

0x6227,	// (0x0002e00c) list_single_cale_day_pane_fp_g1

0xe753,	// (0x00036538) list_single_cale_day_pane_fp_g2_ParamLimits

0xe753,	// (0x00036538) list_single_cale_day_pane_fp_g2

0x625f,	// (0x0002e044) list_single_cale_day_pane_fp_g3_ParamLimits

0x625f,	// (0x0002e044) list_single_cale_day_pane_fp_g3

0x6287,	// (0x0002e06c) list_single_cale_day_pane_fp_g4_ParamLimits

0x6287,	// (0x0002e06c) list_single_cale_day_pane_fp_g4

0x62ab,	// (0x0002e090) list_single_cale_day_pane_fp_g5_ParamLimits

0x62ab,	// (0x0002e090) list_single_cale_day_pane_fp_g5

0x0004,

0xfa6b,	// (0x00037850) list_single_cale_day_pane_fp_g_ParamLimits

0xfa6b,	// (0x00037850) list_single_cale_day_pane_fp_g

0x62cf,	// (0x0002e0b4) list_single_cale_day_pane_fp_t1_ParamLimits

0x62cf,	// (0x0002e0b4) list_single_cale_day_pane_fp_t1

0x62f5,	// (0x0002e0da) list_single_cale_day_pane_fp_t2_ParamLimits

0x62f5,	// (0x0002e0da) list_single_cale_day_pane_fp_t2

0x630e,	// (0x0002e0f3) list_single_cale_day_pane_fp_t3_ParamLimits

0x630e,	// (0x0002e0f3) list_single_cale_day_pane_fp_t3

0x0002,

0xfa76,	// (0x0003785b) list_single_cale_day_pane_fp_t_ParamLimits

0xfa76,	// (0x0003785b) list_single_cale_day_pane_fp_t

0xe73b,	// (0x00036520) list_empty_pane_fp_g1_ParamLimits

0xe73b,	// (0x00036520) list_empty_pane_fp_g1

0x6327,	// (0x0002e10c) list_empty_pane_fp_t1

0x6335,	// (0x0002e11a) list_empty_pane_fp_t2

0x0001,

0xfa7d,	// (0x00037862) list_empty_pane_fp_t

0xe73b,	// (0x00036520) list_single_heading_pane_fp_g1_ParamLimits

0xe73b,	// (0x00036520) list_single_heading_pane_fp_g1

0x61a6,	// (0x0002df8b) list_single_heading_pane_fp_g2_ParamLimits

0x61a6,	// (0x0002df8b) list_single_heading_pane_fp_g2

0x61b2,	// (0x0002df97) list_single_heading_pane_fp_g3_ParamLimits

0x61b2,	// (0x0002df97) list_single_heading_pane_fp_g3

0x0002,

0xfa82,	// (0x00037867) list_single_heading_pane_fp_g_ParamLimits

0xfa82,	// (0x00037867) list_single_heading_pane_fp_g

0x6343,	// (0x0002e128) list_single_heading_pane_fp_t1_ParamLimits

0x6343,	// (0x0002e128) list_single_heading_pane_fp_t1

0x6355,	// (0x0002e13a) list_single_heading_pane_fp_t2_ParamLimits

0x6355,	// (0x0002e13a) list_single_heading_pane_fp_t2

0x0001,

0xfa89,	// (0x0003786e) list_single_heading_pane_fp_t_ParamLimits

0xfa89,	// (0x0003786e) list_single_heading_pane_fp_t

0xb4b1,	// (0x00033296) aid_size_cell_fast

0x8ca3,	// (0x00030a88) soft_indicator_pane_cp1_t1

0xb4ee,	// (0x000332d3) cell_app_pane_cp2_ParamLimits

0xb4ee,	// (0x000332d3) cell_app_pane_cp2

0x2b75,	// (0x0002a95a) fep_hwr_candidate_drop_down_list_pane

0x2d4d,	// (0x0002ab32) fep_hwr_candidate_pane_g3_ParamLimits

0x2d4d,	// (0x0002ab32) fep_hwr_candidate_pane_g3

0xab88,	// (0x0003296d) fep_hwr_candidate_pane_g4_ParamLimits

0xab88,	// (0x0003296d) fep_hwr_candidate_pane_g4

0x0002,

0xfa20,	// (0x00037805) fep_hwr_candidate_pane_g_ParamLimits

0xfa20,	// (0x00037805) fep_hwr_candidate_pane_g

0xe3d0,	// (0x000361b5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe3d0,	// (0x000361b5) fep_vkb_candidate_drop_down_list_pane

0xe655,	// (0x0003643a) fep_vkb_candidate_pane_g3

0xe65d,	// (0x00036442) fep_vkb_candidate_pane_g4

0x0002,

0x02c3,	// (0x000280a8) fep_vkb_candidate_pane_g

0x2f7b,	// (0x0002ad60) cell_hwr_candidate_pane_g1_ParamLimits

0x2f89,	// (0x0002ad6e) cell_hwr_candidate_pane_g3_ParamLimits

0x2f89,	// (0x0002ad6e) cell_hwr_candidate_pane_g3

0x2faa,	// (0x0002ad8f) cell_hwr_candidate_pane_g4_ParamLimits

0x2faa,	// (0x0002ad8f) cell_hwr_candidate_pane_g4

0x0002,

0xfa4b,	// (0x00037830) cell_hwr_candidate_pane_g_ParamLimits

0xfa4b,	// (0x00037830) cell_hwr_candidate_pane_g

0xe674,	// (0x00036459) cell_vkb_candidate_pane_g3_ParamLimits

0xe674,	// (0x00036459) cell_vkb_candidate_pane_g3

0xe68f,	// (0x00036474) cell_vkb_candidate_pane_g4_ParamLimits

0xe68f,	// (0x00036474) cell_vkb_candidate_pane_g4

0xe75f,	// (0x00036544) cell_app_pane_cp2_g1_ParamLimits

0xe75f,	// (0x00036544) cell_app_pane_cp2_g1

0xe77d,	// (0x00036562) cell_app_pane_cp2_g2_ParamLimits

0xe77d,	// (0x00036562) cell_app_pane_cp2_g2

0x0001,

0xfa8e,	// (0x00037873) cell_app_pane_cp2_g_ParamLimits

0xfa8e,	// (0x00037873) cell_app_pane_cp2_g

0xe789,	// (0x0003656e) cell_app_pane_cp2_t1_ParamLimits

0xe789,	// (0x0003656e) cell_app_pane_cp2_t1

0xb34d,	// (0x00033132) grid_highlight_pane_cp1_ParamLimits

0xb34d,	// (0x00033132) grid_highlight_pane_cp1

0x2fe9,	// (0x0002adce) cell_hwr_candidate_pane_cp1_ParamLimits

0x2fe9,	// (0x0002adce) cell_hwr_candidate_pane_cp1

0x2f7b,	// (0x0002ad60) fep_hwr_candidate_drop_down_list_pane_g1

0x3008,	// (0x0002aded) fep_hwr_candidate_drop_down_list_pane_g2

0x3015,	// (0x0002adfa) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfa93,	// (0x00037878) fep_hwr_candidate_drop_down_list_pane_g

0x3022,	// (0x0002ae07) fep_hwr_candidate_drop_down_list_scroll_pane

0x302b,	// (0x0002ae10) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x302b,	// (0x0002ae10) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x3038,	// (0x0002ae1d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x3038,	// (0x0002ae1d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x3045,	// (0x0002ae2a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x3045,	// (0x0002ae2a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x3052,	// (0x0002ae37) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x3052,	// (0x0002ae37) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x306d,	// (0x0002ae52) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x306d,	// (0x0002ae52) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x3088,	// (0x0002ae6d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x3088,	// (0x0002ae6d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x30a3,	// (0x0002ae88) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x30a3,	// (0x0002ae88) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x30be,	// (0x0002aea3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x30be,	// (0x0002aea3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfa9a,	// (0x0003787f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfa9a,	// (0x0003787f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xe79b,	// (0x00036580) cell_vkb_candidate_pane_cp1_ParamLimits

0xe79b,	// (0x00036580) cell_vkb_candidate_pane_cp1

0xe435,	// (0x0003621a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe435,	// (0x0003621a) fep_vkb_candidate_drop_down_list_pane_g1

0xe7bb,	// (0x000365a0) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe7bb,	// (0x000365a0) fep_vkb_candidate_drop_down_list_pane_g2

0xe7c8,	// (0x000365ad) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe7c8,	// (0x000365ad) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfaab,	// (0x00037890) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfaab,	// (0x00037890) fep_vkb_candidate_drop_down_list_pane_g

0xe7d5,	// (0x000365ba) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe7d5,	// (0x000365ba) fep_vkb_candidate_drop_down_list_scroll_pane

0xe7e2,	// (0x000365c7) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe7e2,	// (0x000365c7) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe7ef,	// (0x000365d4) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe7ef,	// (0x000365d4) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe7fb,	// (0x000365e0) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe7fb,	// (0x000365e0) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe807,	// (0x000365ec) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe807,	// (0x000365ec) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe828,	// (0x0003660d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe828,	// (0x0003660d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe849,	// (0x0003662e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe849,	// (0x0003662e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe86a,	// (0x0003664f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe86a,	// (0x0003664f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe88b,	// (0x00036670) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe88b,	// (0x00036670) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfab2,	// (0x00037897) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfab2,	// (0x00037897) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x70a0,	// (0x0002ee85) title_pane_g1_ParamLimits

0x70b3,	// (0x0002ee98) title_pane_g2_ParamLimits

0xf566,	// (0x0003734b) title_pane_g_ParamLimits

0xb994,	// (0x00033779) aid_call2_pane

0xb99c,	// (0x00033781) aid_call_pane

0xb9a4,	// (0x00033789) popup_clock_analogue_window_g1

0xb9a4,	// (0x00033789) popup_clock_analogue_window_g2

0x1176,	// (0x00028f5b) popup_clock_analogue_window_g3

0x117f,	// (0x00028f64) popup_clock_analogue_window_g4

0x8b27,	// (0x0003090c) popup_clock_analogue_window_g5

0x0004,

0xf710,	// (0x000374f5) popup_clock_analogue_window_g

0x1187,	// (0x00028f6c) popup_clock_analogue_window_t1

0x11c2,	// (0x00028fa7) clock_digital_number_pane_ParamLimits

0x11c2,	// (0x00028fa7) clock_digital_number_pane

0x11ce,	// (0x00028fb3) clock_digital_number_pane_cp02_ParamLimits

0x11ce,	// (0x00028fb3) clock_digital_number_pane_cp02

0x11da,	// (0x00028fbf) clock_digital_number_pane_cp03_ParamLimits

0x11da,	// (0x00028fbf) clock_digital_number_pane_cp03

0x11e6,	// (0x00028fcb) clock_digital_number_pane_cp04_ParamLimits

0x11e6,	// (0x00028fcb) clock_digital_number_pane_cp04

0x11f2,	// (0x00028fd7) clock_digital_separator_pane_ParamLimits

0x11f2,	// (0x00028fd7) clock_digital_separator_pane

0x11fe,	// (0x00028fe3) popup_clock_digital_window_t1_ParamLimits

0x11fe,	// (0x00028fe3) popup_clock_digital_window_t1

0x8b27,	// (0x0003090c) clock_digital_number_pane_g1

0x8b27,	// (0x0003090c) clock_digital_number_pane_g2

0x0001,

0xf71b,	// (0x00037500) clock_digital_number_pane_g

0x8b27,	// (0x0003090c) clock_digital_separator_pane_g1

0x8b27,	// (0x0003090c) clock_digital_separator_pane_g2

0x0001,

0xf71b,	// (0x00037500) clock_digital_separator_pane_g

0x7fb2,	// (0x0002fd97) aid_fill_nsta_ParamLimits

0x80e8,	// (0x0002fecd) indicator_nsta_pane_ParamLimits

0xc2eb,	// (0x000340d0) popup_clock_analogue_window

0xc2eb,	// (0x000340d0) popup_clock_digital_window

0xccf0,	// (0x00034ad5) grid_indicator_nsta_pane_ParamLimits

0xdf26,	// (0x00035d0b) clock_nsta_pane_t2

0x0001,

0x0216,	// (0x00027ffb) clock_nsta_pane_t

0x113a,	// (0x00028f1f) aid_size_max_handle

0x75bf,	// (0x0002f3a4) aid_size_min_handle

0xbe96,	// (0x00033c7b) editor_scroll_pane

0xe8a6,	// (0x0003668b) ex_editor_pane

0xb46c,	// (0x00033251) scroll_pane_cp13

0x99a2,	// (0x00031787) scroll_pane_cp14

0xb9d3,	// (0x000337b8) scroll_pane_cp36

0x75d7,	// (0x0002f3bc) list_single_graphic_hl_pane_cp2_ParamLimits

0x75d7,	// (0x0002f3bc) list_single_graphic_hl_pane_cp2

0x93b1,	// (0x00031196) list_single_graphic_hl_pane_ParamLimits

0x93b1,	// (0x00031196) list_single_graphic_hl_pane

0x636b,	// (0x0002e150) aid_size_min_hl_cp1

0xe8ae,	// (0x00036693) list_highlight_pane_cp34_ParamLimits

0xe8ae,	// (0x00036693) list_highlight_pane_cp34

0xe8bf,	// (0x000366a4) list_single_graphic_hl_pane_g1_ParamLimits

0xe8bf,	// (0x000366a4) list_single_graphic_hl_pane_g1

0x940b,	// (0x000311f0) list_single_graphic_hl_pane_g2_ParamLimits

0x940b,	// (0x000311f0) list_single_graphic_hl_pane_g2

0x940b,	// (0x000311f0) list_single_graphic_hl_pane_g3_ParamLimits

0x940b,	// (0x000311f0) list_single_graphic_hl_pane_g3

0x9417,	// (0x000311fc) list_single_graphic_hl_pane_g4_ParamLimits

0x9417,	// (0x000311fc) list_single_graphic_hl_pane_g4

0x9423,	// (0x00031208) list_single_graphic_hl_pane_g5_ParamLimits

0x9423,	// (0x00031208) list_single_graphic_hl_pane_g5

0x0004,

0xfac3,	// (0x000378a8) list_single_graphic_hl_pane_g_ParamLimits

0xfac3,	// (0x000378a8) list_single_graphic_hl_pane_g

0x9437,	// (0x0003121c) list_single_graphic_hl_pane_t1_ParamLimits

0x9437,	// (0x0003121c) list_single_graphic_hl_pane_t1

0xe8cc,	// (0x000366b1) aid_size_min_hl_cp2

0xe8d5,	// (0x000366ba) list_highlight_pane_cp34_cp2_ParamLimits

0xe8d5,	// (0x000366ba) list_highlight_pane_cp34_cp2

0xe8bf,	// (0x000366a4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xe8bf,	// (0x000366a4) list_single_graphic_hl_pane_g1_cp2

0xe8e2,	// (0x000366c7) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xe8e2,	// (0x000366c7) list_single_graphic_hl_pane_g2_cp2

0xe8ee,	// (0x000366d3) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe8ee,	// (0x000366d3) list_single_graphic_hl_pane_g3_cp2

0xccfe,	// (0x00034ae3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xccfe,	// (0x00034ae3) list_single_graphic_hl_pane_g4_cp2

0xe8fc,	// (0x000366e1) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe8fc,	// (0x000366e1) list_single_graphic_hl_pane_g5_cp2

0x77b8,	// (0x0002f59d) control_pane_g4_ParamLimits

0x77b8,	// (0x0002f59d) control_pane_g4

0xb4a5,	// (0x0003328a) bg_popup_sub_pane_cp10_ParamLimits

0xe2ac,	// (0x00036091) list_choice_list_pane_ParamLimits

0xe2bb,	// (0x000360a0) scroll_pane_cp23

0x8cc0,	// (0x00030aa5) bg_popup_preview_window_pane_cp02_ParamLimits

0xe6e0,	// (0x000364c5) list_preview_fixed_pane_ParamLimits

0xe6f6,	// (0x000364db) list_preview_fixed_pane_cp_ParamLimits

0xe6f6,	// (0x000364db) list_preview_fixed_pane_cp

0xe702,	// (0x000364e7) popup_preview_fixed_window_g1_ParamLimits

0xe702,	// (0x000364e7) popup_preview_fixed_window_g1

0xe70e,	// (0x000364f3) popup_preview_fixed_window_g2_ParamLimits

0xe70e,	// (0x000364f3) popup_preview_fixed_window_g2

0x0002,

0x02e4,	// (0x000280c9) popup_preview_fixed_window_g_ParamLimits

0x02e4,	// (0x000280c9) popup_preview_fixed_window_g

0x101a,	// (0x00028dff) aid_navi_side_left_pane_ParamLimits

0x102f,	// (0x00028e14) aid_navi_side_right_pane_ParamLimits

0x1047,	// (0x00028e2c) navi_icon_pane_stacon_ParamLimits

0x105b,	// (0x00028e40) navi_navi_pane_stacon_ParamLimits

0x1047,	// (0x00028e2c) navi_text_pane_stacon_ParamLimits

0x8b1d,	// (0x00030902) main_text_info_pane

0xe926,	// (0x0003670b) listscroll_text_info_pane

0xe92e,	// (0x00036713) list_text_info_pane_ParamLimits

0xe92e,	// (0x00036713) list_text_info_pane

0xe93d,	// (0x00036722) scroll_pane_cp24_ParamLimits

0xe93d,	// (0x00036722) scroll_pane_cp24

0xa0f8,	// (0x00031edd) list_text_info_pane_t1_ParamLimits

0xa0f8,	// (0x00031edd) list_text_info_pane_t1

0x794c,	// (0x0002f731) popup_fast_swap2_window_ParamLimits

0x794c,	// (0x0002f731) popup_fast_swap2_window

0xe95b,	// (0x00036740) aid_size_cell_fast2

0x8b1d,	// (0x00030902) bg_popup_window_pane_cp17

0xc7ab,	// (0x00034590) heading_pane_cp2

0x9727,	// (0x0003150c) listscroll_fast2_pane

0xe965,	// (0x0003674a) grid_fast2_pane

0xe96f,	// (0x00036754) listscroll_fast2_pane_g1

0xe977,	// (0x0003675c) listscroll_fast2_pane_g2

0x0001,

0x0360,	// (0x00028145) listscroll_fast2_pane_g

0xb46c,	// (0x00033251) scroll_pane_cp26

0xe981,	// (0x00036766) cell_fast2_pane_ParamLimits

0xe981,	// (0x00036766) cell_fast2_pane

0xe996,	// (0x0003677b) cell_fast2_pane_g1

0xe99f,	// (0x00036784) cell_fast2_pane_g2

0xe9a8,	// (0x0003678d) cell_fast2_pane_g3

0x0002,

0x0365,	// (0x0002814a) cell_fast2_pane_g

0x9769,	// (0x0003154e) grid_highlight_pane_cp9

0x977e,	// (0x00031563) main_eswt_pane_ParamLimits

0x977e,	// (0x00031563) main_eswt_pane

0xe952,	// (0x00036737) list_single_text_info_pane

0xe9b0,	// (0x00036795) eswt_ctrl_button_pane

0xe9b0,	// (0x00036795) eswt_ctrl_canvas_pane

0xe9b8,	// (0x0003679d) eswt_ctrl_combo_pane

0xe9b0,	// (0x00036795) eswt_ctrl_default_pane

0xe9b0,	// (0x00036795) eswt_ctrl_label_pane

0xe9c0,	// (0x000367a5) eswt_ctrl_wait_pane

0xe9c8,	// (0x000367ad) eswt_shell_pane

0x8b1d,	// (0x00030902) listscroll_eswt_app_pane

0xe9e8,	// (0x000367cd) popup_eswt_tasktip_window_ParamLimits

0xe9e8,	// (0x000367cd) popup_eswt_tasktip_window

0xc4f2,	// (0x000342d7) bg_popup_window_pane_cp18

0xe9f9,	// (0x000367de) eswt_control_pane_g1_ParamLimits

0xe9f9,	// (0x000367de) eswt_control_pane_g1

0xea06,	// (0x000367eb) eswt_control_pane_g2_ParamLimits

0xea06,	// (0x000367eb) eswt_control_pane_g2

0xea13,	// (0x000367f8) eswt_control_pane_g3_ParamLimits

0xea13,	// (0x000367f8) eswt_control_pane_g3

0xea20,	// (0x00036805) eswt_control_pane_g4_ParamLimits

0xea20,	// (0x00036805) eswt_control_pane_g4

0x0003,

0x036c,	// (0x00028151) eswt_control_pane_g_ParamLimits

0x036c,	// (0x00028151) eswt_control_pane_g

0xb34d,	// (0x00033132) bg_button_pane_ParamLimits

0xb34d,	// (0x00033132) bg_button_pane

0x977e,	// (0x00031563) common_borders_pane_copy2_ParamLimits

0x977e,	// (0x00031563) common_borders_pane_copy2

0xea2d,	// (0x00036812) control_button_pane_g1_ParamLimits

0xea2d,	// (0x00036812) control_button_pane_g1

0xea39,	// (0x0003681e) control_button_pane_g2_ParamLimits

0xea39,	// (0x0003681e) control_button_pane_g2

0xea45,	// (0x0003682a) control_button_pane_g3_ParamLimits

0xea45,	// (0x0003682a) control_button_pane_g3

0x0002,

0x0375,	// (0x0002815a) control_button_pane_g_ParamLimits

0x0375,	// (0x0002815a) control_button_pane_g

0xea59,	// (0x0003683e) control_button_pane_t1

0xea67,	// (0x0003684c) control_button_pane_t2

0x0001,

0x037c,	// (0x00028161) control_button_pane_t

0xc3fa,	// (0x000341df) bg_button_pane_g1

0xc40a,	// (0x000341ef) bg_button_pane_g2

0xc402,	// (0x000341e7) bg_button_pane_g3

0xc41a,	// (0x000341ff) bg_button_pane_g4

0xc412,	// (0x000341f7) bg_button_pane_g5

0xc422,	// (0x00034207) bg_button_pane_g6

0xc42a,	// (0x0003420f) bg_button_pane_g7

0xc43a,	// (0x0003421f) bg_button_pane_g8

0xc432,	// (0x00034217) bg_button_pane_g9

0x0008,

0xf872,	// (0x00037657) bg_button_pane_g

0xe267,	// (0x0003604c) common_borders_pane_ParamLimits

0xe267,	// (0x0003604c) common_borders_pane

0xe9f9,	// (0x000367de) eswt_control_pane_g1_copy1_ParamLimits

0xe9f9,	// (0x000367de) eswt_control_pane_g1_copy1

0xea06,	// (0x000367eb) eswt_control_pane_g2_copy1_ParamLimits

0xea06,	// (0x000367eb) eswt_control_pane_g2_copy1

0xea13,	// (0x000367f8) eswt_control_pane_g3_copy1_ParamLimits

0xea13,	// (0x000367f8) eswt_control_pane_g3_copy1

0xea20,	// (0x00036805) eswt_control_pane_g4_copy1_ParamLimits

0xea20,	// (0x00036805) eswt_control_pane_g4_copy1

0xe2a2,	// (0x00036087) bg_eswt_ctrl_canvas_pane_g1

0xe267,	// (0x0003604c) common_borders_pane_cp2_ParamLimits

0xe267,	// (0x0003604c) common_borders_pane_cp2

0xe267,	// (0x0003604c) common_borders_pane_cp3_ParamLimits

0xe267,	// (0x0003604c) common_borders_pane_cp3

0xea75,	// (0x0003685a) separator_horizontal_pane

0xea7d,	// (0x00036862) separator_vertical_pane

0xe9f9,	// (0x000367de) eswt_control_pane_g1_copy2_ParamLimits

0xe9f9,	// (0x000367de) eswt_control_pane_g1_copy2

0xea06,	// (0x000367eb) eswt_control_pane_g2_copy2_ParamLimits

0xea06,	// (0x000367eb) eswt_control_pane_g2_copy2

0xea13,	// (0x000367f8) eswt_control_pane_g3_copy2_ParamLimits

0xea13,	// (0x000367f8) eswt_control_pane_g3_copy2

0xea20,	// (0x00036805) eswt_control_pane_g4_copy2_ParamLimits

0xea20,	// (0x00036805) eswt_control_pane_g4_copy2

0x8b1d,	// (0x00030902) common_borders_pane_cp4

0xea86,	// (0x0003686b) separator_horizontal_pane_g1

0xea8f,	// (0x00036874) separator_horizontal_pane_g2

0xea98,	// (0x0003687d) separator_horizontal_pane_g3

0x0002,

0x0381,	// (0x00028166) separator_horizontal_pane_g

0xe9f9,	// (0x000367de) eswt_control_pane_g1_copy3_ParamLimits

0xe9f9,	// (0x000367de) eswt_control_pane_g1_copy3

0xea06,	// (0x000367eb) eswt_control_pane_g2_copy3_ParamLimits

0xea06,	// (0x000367eb) eswt_control_pane_g2_copy3

0xea13,	// (0x000367f8) eswt_control_pane_g3_copy3_ParamLimits

0xea13,	// (0x000367f8) eswt_control_pane_g3_copy3

0xea20,	// (0x00036805) eswt_control_pane_g4_copy3_ParamLimits

0xea20,	// (0x00036805) eswt_control_pane_g4_copy3

0x8b1d,	// (0x00030902) common_borders_pane_cp5

0xeaa1,	// (0x00036886) separator_vertical_pane_g1

0xeaaa,	// (0x0003688f) separator_vertical_pane_g2

0xeab3,	// (0x00036898) separator_vertical_pane_g3

0x0002,

0x0388,	// (0x0002816d) separator_vertical_pane_g

0xe9f9,	// (0x000367de) eswt_control_pane_g1_copy4_ParamLimits

0xe9f9,	// (0x000367de) eswt_control_pane_g1_copy4

0xea06,	// (0x000367eb) eswt_control_pane_g2_copy4_ParamLimits

0xea06,	// (0x000367eb) eswt_control_pane_g2_copy4

0xea13,	// (0x000367f8) eswt_control_pane_g3_copy4_ParamLimits

0xea13,	// (0x000367f8) eswt_control_pane_g3_copy4

0xea20,	// (0x00036805) eswt_control_pane_g4_copy4_ParamLimits

0xea20,	// (0x00036805) eswt_control_pane_g4_copy4

0xa113,	// (0x00031ef8) eswt_ctrl_combo_button_pane

0xa11b,	// (0x00031f00) eswt_ctrl_input_pane

0xa123,	// (0x00031f08) popup_choice_list_window_cp70

0xa12b,	// (0x00031f10) eswt_ctrl_input_pane_t1

0x8b1d,	// (0x00030902) input_focus_pane_cp70

0xe267,	// (0x0003604c) bg_button_pane_cp70_ParamLimits

0xe267,	// (0x0003604c) bg_button_pane_cp70

0xa139,	// (0x00031f1e) eswt_ctrl_combo_button_pane_g1

0xeabc,	// (0x000368a1) wait_bar_pane_cp70

0xc4f2,	// (0x000342d7) bg_popup_window_pane_cp70_ParamLimits

0xc4f2,	// (0x000342d7) bg_popup_window_pane_cp70

0xeac4,	// (0x000368a9) popup_eswt_tasktip_window_t1

0xeada,	// (0x000368bf) wait_bar_pane_cp71_ParamLimits

0xeada,	// (0x000368bf) wait_bar_pane_cp71

0xeae6,	// (0x000368cb) grid_eswt_app_pane

0xb7d6,	// (0x000335bb) scroll_pane_cp70

0xa141,	// (0x00031f26) cell_eswt_app_pane_ParamLimits

0xa141,	// (0x00031f26) cell_eswt_app_pane

0xa16b,	// (0x00031f50) cell_eswt_app_pane_g1_ParamLimits

0xa16b,	// (0x00031f50) cell_eswt_app_pane_g1

0xa19a,	// (0x00031f7f) cell_eswt_app_pane_g2_ParamLimits

0xa19a,	// (0x00031f7f) cell_eswt_app_pane_g2

0x0001,

0xface,	// (0x000378b3) cell_eswt_app_pane_g_ParamLimits

0xface,	// (0x000378b3) cell_eswt_app_pane_g

0xa1c3,	// (0x00031fa8) cell_eswt_app_pane_t1_ParamLimits

0xa1c3,	// (0x00031fa8) cell_eswt_app_pane_t1

0xeaef,	// (0x000368d4) grid_highlight_pane_cp70_ParamLimits

0xeaef,	// (0x000368d4) grid_highlight_pane_cp70

0xbd6b,	// (0x00033b50) set_content_pane_g1

0xc087,	// (0x00033e6c) status_small_volume_pane

0x31f2,	// (0x0002afd7) status_small_volume_pane_g1

0x31fa,	// (0x0002afdf) volume_small2_pane

0x3203,	// (0x0002afe8) volume_small2_pane_g1

0x320c,	// (0x0002aff1) volume_small2_pane_g2

0x3215,	// (0x0002affa) volume_small2_pane_g3

0x321e,	// (0x0002b003) volume_small2_pane_g4

0x3227,	// (0x0002b00c) volume_small2_pane_g5

0x3230,	// (0x0002b015) volume_small2_pane_g6

0x3239,	// (0x0002b01e) volume_small2_pane_g7

0x3242,	// (0x0002b027) volume_small2_pane_g8

0x324b,	// (0x0002b030) volume_small2_pane_g9

0x3254,	// (0x0002b039) volume_small2_pane_g10

0x0009,

0xfad3,	// (0x000378b8) volume_small2_pane_g

0xe542,	// (0x00036327) fep_vkb_top_text_pane_g1_ParamLimits

0xa0a0,	// (0x00031e85) fep_vkb_top_text_pane_t1_ParamLimits

0xe71a,	// (0x000364ff) popup_preview_fixed_window_g3_ParamLimits

0xe71a,	// (0x000364ff) popup_preview_fixed_window_g3

0x7f45,	// (0x0002fd2a) popup_toolbar_trans_pane

0x9ac9,	// (0x000318ae) aid_height_set_list_ParamLimits

0xc9d4,	// (0x000347b9) aid_size_parent_ParamLimits

0xb4a5,	// (0x0003328a) list_highlight_pane_cp2_ParamLimits

0xbd6b,	// (0x00033b50) set_content_pane_g1_ParamLimits

0x93c3,	// (0x000311a8) list_single_image_pane_ParamLimits

0x93c3,	// (0x000311a8) list_single_image_pane

0xa1f5,	// (0x00031fda) aid_size_cell_image_ParamLimits

0xa1f5,	// (0x00031fda) aid_size_cell_image

0xa202,	// (0x00031fe7) grid_single_image_pane_ParamLimits

0xa202,	// (0x00031fe7) grid_single_image_pane

0xc693,	// (0x00034478) list_single_image_pane_g1_ParamLimits

0xc693,	// (0x00034478) list_single_image_pane_g1

0xeafb,	// (0x000368e0) list_single_image_pane_g2_ParamLimits

0xeafb,	// (0x000368e0) list_single_image_pane_g2

0x0001,

0xfae8,	// (0x000378cd) list_single_image_pane_g_ParamLimits

0xfae8,	// (0x000378cd) list_single_image_pane_g

0xcd0a,	// (0x00034aef) list_single_image_pane_t1_ParamLimits

0xcd0a,	// (0x00034aef) list_single_image_pane_t1

0xa210,	// (0x00031ff5) cell_image_list_pane_ParamLimits

0xa210,	// (0x00031ff5) cell_image_list_pane

0xa226,	// (0x0003200b) cell_image_list_pane_g1

0xa22f,	// (0x00032014) cell_image_list_pane_g2

0x0001,

0xfaed,	// (0x000378d2) cell_image_list_pane_g

0xeb0f,	// (0x000368f4) aid_size_cell_tb_trans_pane

0xb34d,	// (0x00033132) bg_tb_trans_pane

0xeb21,	// (0x00036906) grid_tb_trans_pane

0xc3fa,	// (0x000341df) bg_tb_trans_pane_g1

0xc40a,	// (0x000341ef) bg_tb_trans_pane_g2

0xc402,	// (0x000341e7) bg_tb_trans_pane_g3

0xc41a,	// (0x000341ff) bg_tb_trans_pane_g4

0xc412,	// (0x000341f7) bg_tb_trans_pane_g5

0xc43a,	// (0x0003421f) bg_tb_trans_pane_g6

0xc432,	// (0x00034217) bg_tb_trans_pane_g7

0xc422,	// (0x00034207) bg_tb_trans_pane_g8

0xc42a,	// (0x0003420f) bg_tb_trans_pane_g9

0x0008,

0xfaf2,	// (0x000378d7) bg_tb_trans_pane_g

0xeb35,	// (0x0003691a) cell_toolbar_trans_pane_ParamLimits

0xeb35,	// (0x0003691a) cell_toolbar_trans_pane

0xe2a2,	// (0x00036087) cell_toolbar_trans_pane_g1

0x9e89,	// (0x00031c6e) list_form2_midp_pane_t1

0x9e97,	// (0x00031c7c) list_form2_midp_pane_t2

0x0001,

0xfa00,	// (0x000377e5) list_form2_midp_pane_t

0xdff5,	// (0x00035dda) scroll_pane_cp51_ParamLimits

0xe16c,	// (0x00035f51) form2_midp_wait_pane_g1

0xe175,	// (0x00035f5a) form2_midp_wait_pane_g2

0xe17e,	// (0x00035f63) form2_midp_wait_pane_g3

0x0002,

0x0271,	// (0x00028056) form2_midp_wait_pane_g

0x8b8d,	// (0x00030972) list_highlight_pane_cp21_ParamLimits

0xe1a6,	// (0x00035f8b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe1b5,	// (0x00035f9a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd69d,	// (0x00035482) list_single_2graphic_im_pane_ParamLimits

0xd69d,	// (0x00035482) list_single_2graphic_im_pane

0xa238,	// (0x0003201d) list_single_2graphic_im_pane_g1_ParamLimits

0xa238,	// (0x0003201d) list_single_2graphic_im_pane_g1

0xa249,	// (0x0003202e) list_single_2graphic_im_pane_g2_ParamLimits

0xa249,	// (0x0003202e) list_single_2graphic_im_pane_g2

0xa255,	// (0x0003203a) list_single_2graphic_im_pane_g3_ParamLimits

0xa255,	// (0x0003203a) list_single_2graphic_im_pane_g3

0x0003,

0xfb05,	// (0x000378ea) list_single_2graphic_im_pane_g_ParamLimits

0xfb05,	// (0x000378ea) list_single_2graphic_im_pane_g

0xa269,	// (0x0003204e) list_single_2graphic_im_pane_t1_ParamLimits

0xa269,	// (0x0003204e) list_single_2graphic_im_pane_t1

0xe726,	// (0x0003650b) list_single_graphic_2heading_pane_fp_ParamLimits

0xe726,	// (0x0003650b) list_single_graphic_2heading_pane_fp

0x61dd,	// (0x0002dfc2) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x61dd,	// (0x0002dfc2) list_single_graphic_2heading_pane_fp_g1

0xe73b,	// (0x00036520) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe73b,	// (0x00036520) list_single_graphic_2heading_pane_fp_g2

0x61a6,	// (0x0002df8b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x61a6,	// (0x0002df8b) list_single_graphic_2heading_pane_fp_g3

0x61b2,	// (0x0002df97) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x61b2,	// (0x0002df97) list_single_graphic_2heading_pane_fp_g4

0xe747,	// (0x0003652c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe747,	// (0x0003652c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfa5b,	// (0x00037840) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfa5b,	// (0x00037840) list_single_graphic_2heading_pane_fp_g

0x63aa,	// (0x0002e18f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x63aa,	// (0x0002e18f) list_single_graphic_2heading_pane_fp_t1

0x6215,	// (0x0002dffa) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6215,	// (0x0002dffa) list_single_graphic_2heading_pane_fp_t2

0x63c0,	// (0x0002e1a5) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x63c0,	// (0x0002e1a5) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfb0e,	// (0x000378f3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfb0e,	// (0x000378f3) list_single_graphic_2heading_pane_fp_t

0xe32e,	// (0x00036113) fep_hwr_write_pane_g5_ParamLimits

0xe32e,	// (0x00036113) fep_hwr_write_pane_g5

0xe33a,	// (0x0003611f) fep_hwr_write_pane_g6_ParamLimits

0xe33a,	// (0x0003611f) fep_hwr_write_pane_g6

0xe9c8,	// (0x000367ad) eswt_shell_pane_ParamLimits

0xc4f2,	// (0x000342d7) bg_popup_window_pane_cp18_ParamLimits

0xd5c8,	// (0x000353ad) heading_pane_cp70

0xeac4,	// (0x000368a9) popup_eswt_tasktip_window_t1_ParamLimits

0x800d,	// (0x0002fdf2) aid_touch_tab_arrow_left

0x8023,	// (0x0002fe08) aid_touch_tab_arrow_right

0x70cb,	// (0x0002eeb0) title_pane_g3_ParamLimits

0x70cb,	// (0x0002eeb0) title_pane_g3

0xb30c,	// (0x000330f1) set_value_pane_g1

0x7f45,	// (0x0002fd2a) popup_toolbar_trans_pane_ParamLimits

0xeb0f,	// (0x000368f4) aid_size_cell_tb_trans_pane_ParamLimits

0xb34d,	// (0x00033132) bg_tb_trans_pane_ParamLimits

0xeb21,	// (0x00036906) grid_tb_trans_pane_ParamLimits

0x8cc0,	// (0x00030aa5) cont_note_pane_ParamLimits

0x8cc0,	// (0x00030aa5) cont_note_pane

0x977e,	// (0x00031563) cont_snote2_single_text_pane_ParamLimits

0x977e,	// (0x00031563) cont_snote2_single_text_pane

0x977e,	// (0x00031563) cont_snote2_single_graphic_pane_ParamLimits

0x977e,	// (0x00031563) cont_snote2_single_graphic_pane

0xc9c6,	// (0x000347ab) cont_note_wait_pane_ParamLimits

0xc9c6,	// (0x000347ab) cont_note_wait_pane

0xc9c6,	// (0x000347ab) cont_note_image_pane_ParamLimits

0xc9c6,	// (0x000347ab) cont_note_image_pane

0xeb67,	// (0x0003694c) popup_note2_window_g1_ParamLimits

0xeb67,	// (0x0003694c) popup_note2_window_g1

0xeb98,	// (0x0003697d) popup_note2_window_t1_ParamLimits

0xeb98,	// (0x0003697d) popup_note2_window_t1

0xebdd,	// (0x000369c2) popup_note2_window_t2_ParamLimits

0xebdd,	// (0x000369c2) popup_note2_window_t2

0xec22,	// (0x00036a07) popup_note2_window_t3_ParamLimits

0xec22,	// (0x00036a07) popup_note2_window_t3

0xec67,	// (0x00036a4c) popup_note2_window_t4_ParamLimits

0xec67,	// (0x00036a4c) popup_note2_window_t4

0x8d44,	// (0x00030b29) popup_note2_window_t5_ParamLimits

0x8d44,	// (0x00030b29) popup_note2_window_t5

0x0004,

0xfb15,	// (0x000378fa) popup_note2_window_t_ParamLimits

0xfb15,	// (0x000378fa) popup_note2_window_t

0xec96,	// (0x00036a7b) popup_note2_image_window_g1_ParamLimits

0xec96,	// (0x00036a7b) popup_note2_image_window_g1

0xeca2,	// (0x00036a87) popup_note2_image_window_g2_ParamLimits

0xeca2,	// (0x00036a87) popup_note2_image_window_g2

0x0001,

0x03e6,	// (0x000281cb) popup_note2_image_window_g_ParamLimits

0x03e6,	// (0x000281cb) popup_note2_image_window_g

0xecb4,	// (0x00036a99) popup_note2_image_window_t1_ParamLimits

0xecb4,	// (0x00036a99) popup_note2_image_window_t1

0xeccc,	// (0x00036ab1) popup_note2_image_window_t2_ParamLimits

0xeccc,	// (0x00036ab1) popup_note2_image_window_t2

0xece4,	// (0x00036ac9) popup_note2_image_window_t3_ParamLimits

0xece4,	// (0x00036ac9) popup_note2_image_window_t3

0x0002,

0x03eb,	// (0x000281d0) popup_note2_image_window_t_ParamLimits

0x03eb,	// (0x000281d0) popup_note2_image_window_t

0xc9f2,	// (0x000347d7) popup_note2_wait_window_g1_ParamLimits

0xc9f2,	// (0x000347d7) popup_note2_wait_window_g1

0xed00,	// (0x00036ae5) popup_note2_wait_window_g2_ParamLimits

0xed00,	// (0x00036ae5) popup_note2_wait_window_g2

0xca0a,	// (0x000347ef) popup_note2_wait_window_g3_ParamLimits

0xca0a,	// (0x000347ef) popup_note2_wait_window_g3

0x0002,

0xfb20,	// (0x00037905) popup_note2_wait_window_g_ParamLimits

0xfb20,	// (0x00037905) popup_note2_wait_window_g

0xed0c,	// (0x00036af1) popup_note2_wait_window_t1_ParamLimits

0xed0c,	// (0x00036af1) popup_note2_wait_window_t1

0xed2a,	// (0x00036b0f) popup_note2_wait_window_t2_ParamLimits

0xed2a,	// (0x00036b0f) popup_note2_wait_window_t2

0xed48,	// (0x00036b2d) popup_note2_wait_window_t3_ParamLimits

0xed48,	// (0x00036b2d) popup_note2_wait_window_t3

0xed5a,	// (0x00036b3f) popup_note2_wait_window_t4_ParamLimits

0xed5a,	// (0x00036b3f) popup_note2_wait_window_t4

0x0003,

0x03f9,	// (0x000281de) popup_note2_wait_window_t_ParamLimits

0x03f9,	// (0x000281de) popup_note2_wait_window_t

0xed6c,	// (0x00036b51) wait_bar2_pane_ParamLimits

0xed6c,	// (0x00036b51) wait_bar2_pane

0xed84,	// (0x00036b69) popup_snote2_single_text_window_g1_ParamLimits

0xed84,	// (0x00036b69) popup_snote2_single_text_window_g1

0xedac,	// (0x00036b91) popup_snote2_single_text_window_t1_ParamLimits

0xedac,	// (0x00036b91) popup_snote2_single_text_window_t1

0xedf8,	// (0x00036bdd) popup_snote2_single_text_window_t2_ParamLimits

0xedf8,	// (0x00036bdd) popup_snote2_single_text_window_t2

0xee44,	// (0x00036c29) popup_snote2_single_text_window_t3_ParamLimits

0xee44,	// (0x00036c29) popup_snote2_single_text_window_t3

0xee85,	// (0x00036c6a) popup_snote2_single_text_window_t4_ParamLimits

0xee85,	// (0x00036c6a) popup_snote2_single_text_window_t4

0xeebb,	// (0x00036ca0) popup_snote2_single_text_window_t5_ParamLimits

0xeebb,	// (0x00036ca0) popup_snote2_single_text_window_t5

0x0004,

0x0402,	// (0x000281e7) popup_snote2_single_text_window_t_ParamLimits

0x0402,	// (0x000281e7) popup_snote2_single_text_window_t

0xeee6,	// (0x00036ccb) popup_snote2_single_graphic_window_g1_ParamLimits

0xeee6,	// (0x00036ccb) popup_snote2_single_graphic_window_g1

0xef0e,	// (0x00036cf3) popup_snote2_single_graphic_window_g2_ParamLimits

0xef0e,	// (0x00036cf3) popup_snote2_single_graphic_window_g2

0x0001,

0x040d,	// (0x000281f2) popup_snote2_single_graphic_window_g_ParamLimits

0x040d,	// (0x000281f2) popup_snote2_single_graphic_window_g

0xef36,	// (0x00036d1b) popup_snote2_single_graphic_window_t1_ParamLimits

0xef36,	// (0x00036d1b) popup_snote2_single_graphic_window_t1

0xef82,	// (0x00036d67) popup_snote2_single_graphic_window_t2_ParamLimits

0xef82,	// (0x00036d67) popup_snote2_single_graphic_window_t2

0xee44,	// (0x00036c29) popup_snote2_single_graphic_window_t3_ParamLimits

0xee44,	// (0x00036c29) popup_snote2_single_graphic_window_t3

0xee85,	// (0x00036c6a) popup_snote2_single_graphic_window_t4_ParamLimits

0xee85,	// (0x00036c6a) popup_snote2_single_graphic_window_t4

0xeebb,	// (0x00036ca0) popup_snote2_single_graphic_window_t5_ParamLimits

0xeebb,	// (0x00036ca0) popup_snote2_single_graphic_window_t5

0x0004,

0x0412,	// (0x000281f7) popup_snote2_single_graphic_window_t_ParamLimits

0x0412,	// (0x000281f7) popup_snote2_single_graphic_window_t

0xdf8d,	// (0x00035d72) clock_nsta_pane_cp2_t1

0xdf8d,	// (0x00035d72) clock_nsta_pane_cp2_t2

0x0001,

0x0232,	// (0x00028017) clock_nsta_pane_cp2_t

0x5b16,	// (0x0002d8fb) form_field_data_wide_pane_g1_ParamLimits

0xb367,	// (0x0003314c) form_field_data_wide_pane_g2_ParamLimits

0xb367,	// (0x0003314c) form_field_data_wide_pane_g2

0xb373,	// (0x00033158) form_field_data_wide_pane_g3_ParamLimits

0xb373,	// (0x00033158) form_field_data_wide_pane_g3

0x0002,

0xf693,	// (0x00037478) form_field_data_wide_pane_g_ParamLimits

0xf693,	// (0x00037478) form_field_data_wide_pane_g

0x9dc2,	// (0x00031ba7) grid_touch_3_pane_ParamLimits

0x9dc2,	// (0x00031ba7) grid_touch_3_pane

0xa29a,	// (0x0003207f) cell_touch_3_pane_ParamLimits

0xa29a,	// (0x0003207f) cell_touch_3_pane

0xe2a2,	// (0x00036087) cell_touch_3_pane_g1

0xe2a2,	// (0x00036087) cell_touch_3_pane_g2

0x0001,

0x02b7,	// (0x0002809c) cell_touch_3_pane_g

0x8d76,	// (0x00030b5b) cont_query_data_pane

0x8d7e,	// (0x00030b63) cont_query_data_pane_cp1

0xefce,	// (0x00036db3) button_value_adjust_pane_cp7

0xefd6,	// (0x00036dbb) query_popup_pane_cp3

0xba05,	// (0x000337ea) bg_popup_sub_pane_cp22_ParamLimits

0x1279,	// (0x0002905e) navi_navi_volume_pane_cp2

0x1294,	// (0x00029079) popup_side_volume_key_window_g2

0x12a3,	// (0x00029088) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0003750e) popup_side_volume_key_window_g

0x12c0,	// (0x000290a5) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x00037515) popup_side_volume_key_window_t

0xbc35,	// (0x00033a1a) popup_side_volume_key_window_ParamLimits

0x8ecc,	// (0x00030cb1) list_double_graphic_pane_g4_ParamLimits

0x8ecc,	// (0x00030cb1) list_double_graphic_pane_g4

0x9c42,	// (0x00031a27) list_single_2heading_msg_pane_ParamLimits

0x9c42,	// (0x00031a27) list_single_2heading_msg_pane

0x944d,	// (0x00031232) list_single_2heading_msg_pane_g1_ParamLimits

0x944d,	// (0x00031232) list_single_2heading_msg_pane_g1

0x9459,	// (0x0003123e) list_single_2heading_msg_pane_g2_ParamLimits

0x9459,	// (0x0003123e) list_single_2heading_msg_pane_g2

0x946c,	// (0x00031251) list_single_2heading_msg_pane_g3_ParamLimits

0x946c,	// (0x00031251) list_single_2heading_msg_pane_g3

0x9478,	// (0x0003125d) list_single_2heading_msg_pane_g4_ParamLimits

0x9478,	// (0x0003125d) list_single_2heading_msg_pane_g4

0x0003,

0xfb27,	// (0x0003790c) list_single_2heading_msg_pane_g_ParamLimits

0xfb27,	// (0x0003790c) list_single_2heading_msg_pane_g

0x9490,	// (0x00031275) list_single_2heading_msg_pane_t1_ParamLimits

0x9490,	// (0x00031275) list_single_2heading_msg_pane_t1

0x94b8,	// (0x0003129d) list_single_2heading_msg_pane_t2_ParamLimits

0x94b8,	// (0x0003129d) list_single_2heading_msg_pane_t2

0x9523,	// (0x00031308) list_single_2heading_msg_pane_t3_ParamLimits

0x9523,	// (0x00031308) list_single_2heading_msg_pane_t3

0x64a5,	// (0x0002e28a) list_single_2heading_msg_pane_t4_ParamLimits

0x64a5,	// (0x0002e28a) list_single_2heading_msg_pane_t4

0x0003,

0xfb30,	// (0x00037915) list_single_2heading_msg_pane_t_ParamLimits

0xfb30,	// (0x00037915) list_single_2heading_msg_pane_t

0x8b3b,	// (0x00030920) title_pane_g4_ParamLimits

0x8b3b,	// (0x00030920) title_pane_g4

0x0f6a,	// (0x00028d4f) title_pane_stacon_g3_ParamLimits

0x0f6a,	// (0x00028d4f) title_pane_stacon_g3

0xeb5b,	// (0x00036940) list_single_2graphic_im_pane_g4_ParamLimits

0xeb5b,	// (0x00036940) list_single_2graphic_im_pane_g4

0xd3ab,	// (0x00035190) popup_side_volume_key_window_cp

0xd8ce,	// (0x000356b3) main_idle_act2_pane_t1

0x1f37,	// (0x00029d1c) toolbar_button_pane_g10

0x7438,	// (0x0002f21d) popup_toolbar_window_cp1

0xdf7e,	// (0x00035d63) clock_nsta_pane_cp_t1

0xdf7e,	// (0x00035d63) clock_nsta_pane_cp_t2

0x0001,

0x022d,	// (0x00028012) clock_nsta_pane_cp_t

0x1279,	// (0x0002905e) navi_navi_volume_pane_cp2_ParamLimits

0x1288,	// (0x0002906d) popup_side_volume_key_window_g1_ParamLimits

0x1294,	// (0x00029079) popup_side_volume_key_window_g2_ParamLimits

0x12a3,	// (0x00029088) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0003750e) popup_side_volume_key_window_g_ParamLimits

0x2b61,	// (0x0002a946) fep_hwr_aid_pane

0x2c08,	// (0x0002a9ed) bg_fep_hwr_top_pane_g4_ParamLimits

0xe2fe,	// (0x000360e3) fep_hwr_top_pane_g1_ParamLimits

0xe310,	// (0x000360f5) fep_hwr_top_pane_g2_ParamLimits

0x2c28,	// (0x0002aa0d) fep_hwr_top_pane_g3_ParamLimits

0xfa0c,	// (0x000377f1) fep_hwr_top_pane_g_ParamLimits

0x2c3d,	// (0x0002aa22) fep_hwr_top_text_pane_ParamLimits

0xd16e,	// (0x00034f53) aid_touch_tab_arrow_arrow_2

0xd177,	// (0x00034f5c) aid_touch_tab_arrow_left_2

0x2b75,	// (0x0002a95a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2bac,	// (0x0002a991) fep_hwr_prediction_pane

0xe3fd,	// (0x000361e2) fep_vkb_prediction_pane

0xa080,	// (0x00031e65) fep_vkb_side_pane_g3_ParamLimits

0xa080,	// (0x00031e65) fep_vkb_side_pane_g3

0x2f7b,	// (0x0002ad60) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x3008,	// (0x0002aded) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x3015,	// (0x0002adfa) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfa93,	// (0x00037878) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x3341,	// (0x0002b126) fep_hwr_prediction_pane_g1

0x334b,	// (0x0002b130) fep_hwr_prediction_pane_g2

0x3353,	// (0x0002b138) fep_hwr_prediction_pane_g3

0x335b,	// (0x0002b140) fep_hwr_prediction_pane_g4

0x0003,

0xfb39,	// (0x0003791e) fep_hwr_prediction_pane_g

0xefe7,	// (0x00036dcc) fep_vkb_prediction_pane_g1

0xeff1,	// (0x00036dd6) fep_vkb_prediction_pane_g2

0xeff9,	// (0x00036dde) fep_vkb_prediction_pane_g3

0xf001,	// (0x00036de6) fep_vkb_prediction_pane_g4

0x0003,

0x0438,	// (0x0002821d) fep_vkb_prediction_pane_g

0x245d,	// (0x0002a242) slider_set_pane_g3

0x2471,	// (0x0002a256) slider_set_pane_g4

0x2489,	// (0x0002a26e) slider_set_pane_g5

0x245d,	// (0x0002a242) slider_set_pane_g6

0x249f,	// (0x0002a284) slider_set_pane_g7

0xd653,	// (0x00035438) slider_form_pane_g3

0xd65c,	// (0x00035441) slider_form_pane_g4

0xd664,	// (0x00035449) slider_form_pane_g5

0xd653,	// (0x00035438) slider_form_pane_g6

0x9c14,	// (0x000319f9) slider_form_pane_g7

0xdb20,	// (0x00035905) slider_set_pane_vc_g3

0xdb29,	// (0x0003590e) slider_set_pane_vc_g4

0xdb32,	// (0x00035917) slider_set_pane_vc_g5

0xdb20,	// (0x00035905) slider_set_pane_vc_g6

0xdb3b,	// (0x00035920) slider_set_pane_vc_g7

0xdb20,	// (0x00035905) slider_form_pane_vc_g1

0xdb29,	// (0x0003590e) slider_form_pane_vc_g2

0xdb32,	// (0x00035917) slider_form_pane_vc_g3

0xdb20,	// (0x00035905) slider_form_pane_vc_g4

0xdcf4,	// (0x00035ad9) slider_form_pane_vc_g5

0x0004,

0x0206,	// (0x00027feb) slider_form_pane_vc_g

0x8b1d,	// (0x00030902) main_idle_act3_pane

0xf009,	// (0x00036dee) ai3_links_pane

0xa2e4,	// (0x000320c9) popup_ai3_data_window_ParamLimits

0xa2e4,	// (0x000320c9) popup_ai3_data_window

0x8b1d,	// (0x00030902) grid_ai3_links_pane

0xa2fe,	// (0x000320e3) cell_ai3_links_pane_ParamLimits

0xa2fe,	// (0x000320e3) cell_ai3_links_pane

0xf012,	// (0x00036df7) bg_popup_sub_pane_cp11

0xf01f,	// (0x00036e04) cell_ai3_links_pane_g1

0x8b1d,	// (0x00030902) bg_popup_sub_pane_cp12

0xf044,	// (0x00036e29) heading_ai3_data_pane

0xf04c,	// (0x00036e31) list_ai3_gene_pane

0xf058,	// (0x00036e3d) popup_ai3_data_window_g1

0xf060,	// (0x00036e45) heading_ai3_data_pane_g1

0xf068,	// (0x00036e4d) heading_ai3_data_pane_t1

0xf076,	// (0x00036e5b) list_double_ai3_gene_pane_ParamLimits

0xf076,	// (0x00036e5b) list_double_ai3_gene_pane

0xf083,	// (0x00036e68) list_single_ai3_gene_pane_ParamLimits

0xf083,	// (0x00036e68) list_single_ai3_gene_pane

0xe267,	// (0x0003604c) list_highlight_pane_cp7_ParamLimits

0xe267,	// (0x0003604c) list_highlight_pane_cp7

0xf090,	// (0x00036e75) list_single_a13_gene_pane_t1_ParamLimits

0xf090,	// (0x00036e75) list_single_a13_gene_pane_t1

0xf0a7,	// (0x00036e8c) list_single_ai3_gene_pane_g1

0xf0b0,	// (0x00036e95) list_single_ai3_gene_pane_g2

0x0001,

0x0441,	// (0x00028226) list_single_ai3_gene_pane_g

0xf0b8,	// (0x00036e9d) list_double_ai3_gene_pane_g1_ParamLimits

0xf0b8,	// (0x00036e9d) list_double_ai3_gene_pane_g1

0xf0c4,	// (0x00036ea9) list_double_ai3_gene_pane_t1_ParamLimits

0xf0c4,	// (0x00036ea9) list_double_ai3_gene_pane_t1

0xf0e0,	// (0x00036ec5) list_double_ai3_gene_pane_t2_ParamLimits

0xf0e0,	// (0x00036ec5) list_double_ai3_gene_pane_t2

0xf0f6,	// (0x00036edb) list_double_ai3_gene_pane_t3_ParamLimits

0xf0f6,	// (0x00036edb) list_double_ai3_gene_pane_t3

0x0002,

0x0446,	// (0x0002822b) list_double_ai3_gene_pane_t_ParamLimits

0x0446,	// (0x0002822b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x63d6,	// (0x0002e1bb) aid_size_min_col_2

0xa2ce,	// (0x000320b3) aid_size_min_msg_ParamLimits

0xa2ce,	// (0x000320b3) aid_size_min_msg

0xa094,	// (0x00031e79) fep_vkb_top_text_pane_g2_ParamLimits

0xa094,	// (0x00031e79) fep_vkb_top_text_pane_g2

0x0001,

0xfa2e,	// (0x00037813) fep_vkb_top_text_pane_g_ParamLimits

0xfa2e,	// (0x00037813) fep_vkb_top_text_pane_g

0x8b1d,	// (0x00030902) main_hc_apps_shell_pane

0xf113,	// (0x00036ef8) grid_hc_apps_pane_ParamLimits

0xf113,	// (0x00036ef8) grid_hc_apps_pane

0xf122,	// (0x00036f07) list_hc_apps_pane

0xf12a,	// (0x00036f0f) scroll_pane_cp37_ParamLimits

0xf12a,	// (0x00036f0f) scroll_pane_cp37

0xa318,	// (0x000320fd) cell_hc_apps_pane_ParamLimits

0xa318,	// (0x000320fd) cell_hc_apps_pane

0xa3d6,	// (0x000321bb) cell_hc_apps_pane_g1_ParamLimits

0xa3d6,	// (0x000321bb) cell_hc_apps_pane_g1

0xf136,	// (0x00036f1b) cell_hc_apps_pane_g2_ParamLimits

0xf136,	// (0x00036f1b) cell_hc_apps_pane_g2

0xf152,	// (0x00036f37) cell_hc_apps_pane_g3_ParamLimits

0xf152,	// (0x00036f37) cell_hc_apps_pane_g3

0x0002,

0xfb42,	// (0x00037927) cell_hc_apps_pane_g_ParamLimits

0xfb42,	// (0x00037927) cell_hc_apps_pane_g

0xa403,	// (0x000321e8) cell_hc_apps_pane_t1_ParamLimits

0xa403,	// (0x000321e8) cell_hc_apps_pane_t1

0x8cc0,	// (0x00030aa5) grid_highlight_pane_cp10_ParamLimits

0x8cc0,	// (0x00030aa5) grid_highlight_pane_cp10

0xa441,	// (0x00032226) list_single_hc_apps_pane_ParamLimits

0xa441,	// (0x00032226) list_single_hc_apps_pane

0xa46e,	// (0x00032253) list_single_hc_apps_pane_g1

0x9591,	// (0x00031376) list_single_hc_apps_pane_g2

0x0001,

0xfb49,	// (0x0003792e) list_single_hc_apps_pane_g

0x95aa,	// (0x0003138f) list_single_hc_apps_pane_g2_copy1

0x95c6,	// (0x000313ab) list_single_hc_apps_pane_t1

0x8b8d,	// (0x00030972) bg_set_opt_pane_cp_ParamLimits

0x0bc0,	// (0x000289a5) setting_slider_pane_t1_ParamLimits

0x0bd9,	// (0x000289be) setting_slider_pane_t2_ParamLimits

0x0bf3,	// (0x000289d8) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0003735b) setting_slider_pane_t_ParamLimits

0x0c0b,	// (0x000289f0) slider_set_pane_ParamLimits

0x1654,	// (0x00029439) control_pane_g5_ParamLimits

0x1654,	// (0x00029439) control_pane_g5

0xd60f,	// (0x000353f4) slider_set_pane_g1_ParamLimits

0x2451,	// (0x0002a236) slider_set_pane_g2_ParamLimits

0x245d,	// (0x0002a242) slider_set_pane_g3_ParamLimits

0x2471,	// (0x0002a256) slider_set_pane_g4_ParamLimits

0x2489,	// (0x0002a26e) slider_set_pane_g5_ParamLimits

0x245d,	// (0x0002a242) slider_set_pane_g6_ParamLimits

0x249f,	// (0x0002a284) slider_set_pane_g7_ParamLimits

0xf90c,	// (0x000376f1) slider_set_pane_g_ParamLimits

0xbd16,	// (0x00033afb) navi_icon_text_pane_ParamLimits

0x7fd6,	// (0x0002fdbb) aid_fill_nsta_2_ParamLimits

0x800d,	// (0x0002fdf2) aid_touch_tab_arrow_left_ParamLimits

0x8023,	// (0x0002fe08) aid_touch_tab_arrow_right_ParamLimits

0x80be,	// (0x0002fea3) clock_nsta_pane_ParamLimits

0xd150,	// (0x00034f35) navi_icon_pane_g1_ParamLimits

0xd15c,	// (0x00034f41) navi_text_pane_t1_ParamLimits

0xdfcf,	// (0x00035db4) navi_icon_text_pane_g1_ParamLimits

0xdfdb,	// (0x00035dc0) navi_icon_text_pane_t1_ParamLimits

0xa46e,	// (0x00032253) list_single_hc_apps_pane_g1_ParamLimits

0x9591,	// (0x00031376) list_single_hc_apps_pane_g2_ParamLimits

0xfb49,	// (0x0003792e) list_single_hc_apps_pane_g_ParamLimits

0x95aa,	// (0x0003138f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x95c6,	// (0x000313ab) list_single_hc_apps_pane_t1_ParamLimits

0x7035,	// (0x0002ee1a) popup_toolbar2_fixed_window_ParamLimits

0x7035,	// (0x0002ee1a) popup_toolbar2_fixed_window

0x7f3b,	// (0x0002fd20) popup_toolbar2_float_window

0x8b1d,	// (0x00030902) bg_popup_sub_pane_cp27

0xf174,	// (0x00036f59) grid_toolbar2_float_pane

0x8b1d,	// (0x00030902) bg_popup_sub_pane_cp26

0xf174,	// (0x00036f59) grid_toolbar2_fixed_pane

0xa487,	// (0x0003226c) cell_toolbar2_fixed_pane_ParamLimits

0xa487,	// (0x0003226c) cell_toolbar2_fixed_pane

0xa4a2,	// (0x00032287) cell_toolbar2_fixed_pane_g1

0xf17c,	// (0x00036f61) toolbar2_fixed_button_pane

0xc3fa,	// (0x000341df) toolbar2_fixed_button_pane_g1

0xc40a,	// (0x000341ef) toolbar2_fixed_button_pane_g2

0xc402,	// (0x000341e7) toolbar2_fixed_button_pane_g3

0xc41a,	// (0x000341ff) toolbar2_fixed_button_pane_g4

0xc412,	// (0x000341f7) toolbar2_fixed_button_pane_g5

0xc422,	// (0x00034207) toolbar2_fixed_button_pane_g6

0xc42a,	// (0x0003420f) toolbar2_fixed_button_pane_g7

0xc43a,	// (0x0003421f) toolbar2_fixed_button_pane_g8

0xc432,	// (0x00034217) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x00037657) toolbar2_fixed_button_pane_g

0xf184,	// (0x00036f69) cell_toolbar2_float_pane_ParamLimits

0xf184,	// (0x00036f69) cell_toolbar2_float_pane

0xf195,	// (0x00036f7a) cell_toolbar2_float_pane_g1

0xf17c,	// (0x00036f61) toolbar2_fixed_button_pane_cp

0x9f6e,	// (0x00031d53) fep_vkb_accented_list_pane_ParamLimits

0x9f6e,	// (0x00031d53) fep_vkb_accented_list_pane

0x2f5b,	// (0x0002ad40) bg_popup_fep_shadow_pane_g9

0xbe96,	// (0x00033c7b) bg_popup_fep_shadow_pane_cp3

0xb453,	// (0x00033238) list_accented_list_pane

0xf19e,	// (0x00036f83) list_single_accented_list_pane_ParamLimits

0xf19e,	// (0x00036f83) list_single_accented_list_pane

0xbe96,	// (0x00033c7b) list_highlight_pane_cp10

0xf1af,	// (0x00036f94) list_single_accented_list_pane_t1

0x7e65,	// (0x0002fc4a) popup_slider_window_ParamLimits

0x7e65,	// (0x0002fc4a) popup_slider_window

0xefde,	// (0x00036dc3) aid_indentation_list_msg

0xa59b,	// (0x00032380) bg_popup_window_pane_cp19

0xf21b,	// (0x00037000) popup_slider_window_g1

0xf237,	// (0x0003701c) popup_slider_window_g2

0xf253,	// (0x00037038) popup_slider_window_g3

0x0005,

0xfb4e,	// (0x00037933) popup_slider_window_g

0xf26f,	// (0x00037054) popup_slider_window_t1

0xf2b5,	// (0x0003709a) small_volume_slider_vertical_pane

0xe2a2,	// (0x00036087) small_volume_slider_vertical_pane_g1

0xe2a2,	// (0x00036087) small_volume_slider_vertical_pane_g2

0xf2d1,	// (0x000370b6) small_volume_slider_vertical_pane_g3

0x0002,

0x046b,	// (0x00028250) small_volume_slider_vertical_pane_g

0x6fa3,	// (0x0002ed88) area_side_right_pane_ParamLimits

0x6fa3,	// (0x0002ed88) area_side_right_pane

0x86ae,	// (0x00030493) aid_size_side_button_ParamLimits

0x86ae,	// (0x00030493) aid_size_side_button

0x86c7,	// (0x000304ac) grid_sctrl_middle_pane_ParamLimits

0x86c7,	// (0x000304ac) grid_sctrl_middle_pane

0x369c,	// (0x0002b481) sctrl_sk_bottom_pane

0x36ad,	// (0x0002b492) sctrl_sk_top_pane

0x36bf,	// (0x0002b4a4) aid_touch_sctrl_top

0x36cc,	// (0x0002b4b1) bg_sctrl_sk_pane_ParamLimits

0x36cc,	// (0x0002b4b1) bg_sctrl_sk_pane

0x36da,	// (0x0002b4bf) sctrl_sk_top_pane_g1

0x36e7,	// (0x0002b4cc) sctrl_sk_top_pane_t1

0x36bf,	// (0x0002b4a4) aid_touch_sctrl_bottom

0x36cc,	// (0x0002b4b1) bg_sctrl_sk_pane_cp_ParamLimits

0x36cc,	// (0x0002b4b1) bg_sctrl_sk_pane_cp

0x3702,	// (0x0002b4e7) sctrl_sk_bottom_pane_g1

0x36e7,	// (0x0002b4cc) sctrl_sk_bottom_pane_t1

0x86e1,	// (0x000304c6) cell_sctrl_middle_pane_ParamLimits

0x86e1,	// (0x000304c6) cell_sctrl_middle_pane

0x86f2,	// (0x000304d7) aid_touch_sctrl_middle_ParamLimits

0x86f2,	// (0x000304d7) aid_touch_sctrl_middle

0x86ff,	// (0x000304e4) bg_sctrl_middle_pane_ParamLimits

0x86ff,	// (0x000304e4) bg_sctrl_middle_pane

0x475f,	// (0x0002c544) cell_sctrl_middle_pane_g1_ParamLimits

0x475f,	// (0x0002c544) cell_sctrl_middle_pane_g1

0x870d,	// (0x000304f2) cell_sctrl_middle_pane_g2_ParamLimits

0x870d,	// (0x000304f2) cell_sctrl_middle_pane_g2

0x0001,

0xfb60,	// (0x00037945) cell_sctrl_middle_pane_g_ParamLimits

0xfb60,	// (0x00037945) cell_sctrl_middle_pane_g

0xc3fa,	// (0x000341df) bg_sctrl_middle_pane_g1

0xc402,	// (0x000341e7) bg_sctrl_middle_pane_g2

0xc40a,	// (0x000341ef) bg_sctrl_middle_pane_g3

0xc412,	// (0x000341f7) bg_sctrl_middle_pane_g4

0xc41a,	// (0x000341ff) bg_sctrl_middle_pane_g5

0xc422,	// (0x00034207) bg_sctrl_middle_pane_g6

0xc42a,	// (0x0003420f) bg_sctrl_middle_pane_g7

0xc432,	// (0x00034217) bg_sctrl_middle_pane_g8

0x0007,

0xfb65,	// (0x0003794a) bg_sctrl_middle_pane_g

0xc43a,	// (0x0003421f) bg_sctrl_middle_pane_g8_copy1

0xc3fa,	// (0x000341df) bg_sctrl_sk_pane_g1

0xc40a,	// (0x000341ef) bg_sctrl_sk_pane_g2

0xc402,	// (0x000341e7) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x00037657) bg_sctrl_sk_pane_g

0x993c,	// (0x00031721) aid_size_touch_scroll_bar

0xc41a,	// (0x000341ff) bg_sctrl_sk_pane_g4

0xc412,	// (0x000341f7) bg_sctrl_sk_pane_g5

0xc422,	// (0x00034207) bg_sctrl_sk_pane_g6

0xc42a,	// (0x0003420f) bg_sctrl_sk_pane_g7

0xc43a,	// (0x0003421f) bg_sctrl_sk_pane_g8

0xc432,	// (0x00034217) bg_sctrl_sk_pane_g9

0xc130,	// (0x00033f15) popup_fep_china_hwr2_fs_candidate_window

0x79a9,	// (0x0002f78e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x79a9,	// (0x0002f78e) popup_fep_china_hwr2_fs_control_window

0x2f7b,	// (0x0002ad60) sctrl_sk_top_pane_g2

0x0001,

0xfb5b,	// (0x00037940) sctrl_sk_top_pane_g

0xa653,	// (0x00032438) aid_fep_china_hwr2_fs_cell_ParamLimits

0xa653,	// (0x00032438) aid_fep_china_hwr2_fs_cell

0xa667,	// (0x0003244c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xa667,	// (0x0003244c) bg_popup_fep_shadow_pane_cp4

0xa67e,	// (0x00032463) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xa67e,	// (0x00032463) bg_popup_fep_shadow_pane_cp5

0xa690,	// (0x00032475) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xa690,	// (0x00032475) popup_fep_china_hwr2_fs_control_bar_grid

0xa6a4,	// (0x00032489) popup_fep_china_hwr2_fs_control_funtion_grid

0xf2da,	// (0x000370bf) aid_fep_china_hwr2_fs_candi_cell

0x8b1d,	// (0x00030902) bg_popup_fep_shadow_pane_cp6

0xf2e4,	// (0x000370c9) popup_fep_china_hwr2_fs_candidate_grid

0xa6ac,	// (0x00032491) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xa6ac,	// (0x00032491) cell_fep_china_hwr2_fs_funtion_grid

0xe2a2,	// (0x00036087) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf2ee,	// (0x000370d3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf2ee,	// (0x000370d3) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf2fc,	// (0x000370e1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf2fc,	// (0x000370e1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfb76,	// (0x0003795b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfb76,	// (0x0003795b) cell_fep_china_hwr2_fs_funtion_grid_g

0xa6c4,	// (0x000324a9) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xa6c4,	// (0x000324a9) cell_fep_china_hwr2_fs_funtion_grid_t1

0xa6d9,	// (0x000324be) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xa6d9,	// (0x000324be) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfb7b,	// (0x00037960) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfb7b,	// (0x00037960) cell_fep_china_hwr2_fs_funtion_grid_t

0xf312,	// (0x000370f7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf31a,	// (0x000370ff) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf322,	// (0x00037107) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0x0497,	// (0x0002827c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf32a,	// (0x0003710f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf32a,	// (0x0003710f) cell_fep_china_hwr2_fs_candidate_grid

0xf343,	// (0x00037128) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf34b,	// (0x00037130) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe2a2,	// (0x00036087) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe2a2,	// (0x00036087) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0x02b7,	// (0x0002809c) cell_fep_china_hwr2_fs_candidate_grid_g

0xf353,	// (0x00037138) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc247,	// (0x0003402c) clock_nsta_pane_cp_24_ParamLimits

0xc247,	// (0x0003402c) clock_nsta_pane_cp_24

0xc2af,	// (0x00034094) indicator_nsta_pane_cp_24_ParamLimits

0xc2af,	// (0x00034094) indicator_nsta_pane_cp_24

0xd05a,	// (0x00034e3f) heading_pane_g1

0x0001,

0x0040,	// (0x00027e25) heading_pane_g

0xd75b,	// (0x00035540) grid_sct_catagory_button_pane

0xc9e6,	// (0x000347cb) scroll_pane_cp5_ParamLimits

0xe001,	// (0x00035de6) button_value_adjust_pane_cp5_ParamLimits

0xe001,	// (0x00035de6) button_value_adjust_pane_cp5

0xe0bf,	// (0x00035ea4) form2_midp_time_pane_ParamLimits

0xf361,	// (0x00037146) cell_sct_catagory_button_pane_ParamLimits

0xf361,	// (0x00037146) cell_sct_catagory_button_pane

0xe267,	// (0x0003604c) bg_button_pane_cp01_ParamLimits

0xe267,	// (0x0003604c) bg_button_pane_cp01

0xe2a2,	// (0x00036087) cell_sct_catagory_button_pane_g1

0x7ede,	// (0x0002fcc3) popup_tb_extension_window

0xa6f5,	// (0x000324da) aid_size_cell_ext_ParamLimits

0xa6f5,	// (0x000324da) aid_size_cell_ext

0x977e,	// (0x00031563) bg_tb_trans_pane_cp1_ParamLimits

0x977e,	// (0x00031563) bg_tb_trans_pane_cp1

0xa71b,	// (0x00032500) grid_tb_ext_pane_ParamLimits

0xa71b,	// (0x00032500) grid_tb_ext_pane

0xa759,	// (0x0003253e) cell_tb_ext_pane_ParamLimits

0xa759,	// (0x0003253e) cell_tb_ext_pane

0xa781,	// (0x00032566) cell_tb_ext_pane_g1_ParamLimits

0xa781,	// (0x00032566) cell_tb_ext_pane_g1

0xf373,	// (0x00037158) cell_tb_ext_pane_t1

0x8cc0,	// (0x00030aa5) list_highlight_pane_cp11_ParamLimits

0x8cc0,	// (0x00030aa5) list_highlight_pane_cp11

0x0a2d,	// (0x00028812) popup_uni_indicator_window_ParamLimits

0x0a2d,	// (0x00028812) popup_uni_indicator_window

0xb34d,	// (0x00033132) bg_popup_sub_pane_cp14

0xf38e,	// (0x00037173) list_uniindi_pane

0xf39a,	// (0x0003717f) uniindi_top_pane

0x8cc0,	// (0x00030aa5) bg_uniindi_top_pane

0xf3b9,	// (0x0003719e) uniindi_top_pane_g1

0xf3cf,	// (0x000371b4) uniindi_top_pane_g2

0x0003,

0x049e,	// (0x00028283) uniindi_top_pane_g

0xf3f9,	// (0x000371de) uniindi_top_pane_t1

0xf423,	// (0x00037208) list_single_uniindi_pane_ParamLimits

0xf423,	// (0x00037208) list_single_uniindi_pane

0xe2a2,	// (0x00036087) bg_uniindi_top_pane_g1

0xf436,	// (0x0003721b) list_single_uniindi_pane_g1

0xf449,	// (0x0003722e) list_single_uniindi_pane_t1

0x08a3,	// (0x00028688) control_bg_pane

0xf46e,	// (0x00037253) bg_sctrl_sk_pane_cp1

0xf477,	// (0x0003725c) bg_sctrl_sk_pane_cp2

0xf480,	// (0x00037265) control_bg_pane_g1

0xf489,	// (0x0003726e) control_bg_pane_g2

0x0001,

0x04a7,	// (0x0002828c) control_bg_pane_g

0xdec0,	// (0x00035ca5) cell_indicator_nsta_pane_g1_ParamLimits

0x9df1,	// (0x00031bd6) cell_indicator_nsta_pane_g2_ParamLimits

0xf9d6,	// (0x000377bb) cell_indicator_nsta_pane_g_ParamLimits

0x6193,	// (0x0002df78) form2_midp_time_pane_t1_ParamLimits

0x7926,	// (0x0002f70b) main_idle_act4_pane_ParamLimits

0x7926,	// (0x0002f70b) main_idle_act4_pane

0x7ede,	// (0x0002fcc3) popup_tb_extension_window_ParamLimits

0xa740,	// (0x00032525) tb_ext_find_pane_ParamLimits

0xa740,	// (0x00032525) tb_ext_find_pane

0xf492,	// (0x00037277) ai_gene_pane_1_cp1

0xbf2a,	// (0x00033d0f) ai_gene_pane_2_cp1

0xf49a,	// (0x0003727f) list_single_idle_plugin_calendar_pane

0xf4a3,	// (0x00037288) list_single_idle_plugin_notification_pane

0xf4ac,	// (0x00037291) list_single_idle_plugin_player_pane

0xa79e,	// (0x00032583) list_single_idle_plugin_shortcut_pane_ParamLimits

0xa79e,	// (0x00032583) list_single_idle_plugin_shortcut_pane

0xa7c6,	// (0x000325ab) main_idle_act4_pane_t1

0xa7dc,	// (0x000325c1) main_idle_act4_pane_t2

0x0001,

0xfb80,	// (0x00037965) main_idle_act4_pane_t

0xa7f2,	// (0x000325d7) middle_sk_idle_act4_pane_ParamLimits

0xa7f2,	// (0x000325d7) middle_sk_idle_act4_pane

0xa80e,	// (0x000325f3) popup_clock_digital_analogue_window_cp2

0xa836,	// (0x0003261b) shortcut_wheel_idle_act4_pane_ParamLimits

0xa836,	// (0x0003261b) shortcut_wheel_idle_act4_pane

0xe2a2,	// (0x00036087) shortcut_wheel_idle_act4_pane_g1

0xe2a2,	// (0x00036087) shortcut_wheel_idle_act4_pane_g2

0xe2a2,	// (0x00036087) shortcut_wheel_idle_act4_pane_g3

0xe2a2,	// (0x00036087) shortcut_wheel_idle_act4_pane_g4

0xe2a2,	// (0x00036087) shortcut_wheel_idle_act4_pane_g5

0xf4b5,	// (0x0003729a) shortcut_wheel_idle_act4_pane_g6

0xf4bd,	// (0x000372a2) shortcut_wheel_idle_act4_pane_g7

0xf4c5,	// (0x000372aa) shortcut_wheel_idle_act4_pane_g8

0xf4cd,	// (0x000372b2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0x04b1,	// (0x00028296) shortcut_wheel_idle_act4_pane_g

0x8719,	// (0x000304fe) middle_sk_idle_act4_pane_g1_ParamLimits

0x8719,	// (0x000304fe) middle_sk_idle_act4_pane_g1

0xa8b3,	// (0x00032698) middle_sk_idle_act4_pane_g2_ParamLimits

0xa8b3,	// (0x00032698) middle_sk_idle_act4_pane_g2

0x0001,

0xfb95,	// (0x0003797a) middle_sk_idle_act4_pane_g_ParamLimits

0xfb95,	// (0x0003797a) middle_sk_idle_act4_pane_g

0xa8cb,	// (0x000326b0) middle_sk_idle_act4_pane_t1_ParamLimits

0xa8cb,	// (0x000326b0) middle_sk_idle_act4_pane_t1

0xa8fa,	// (0x000326df) grid_ai_shortcut_pane_ParamLimits

0xa8fa,	// (0x000326df) grid_ai_shortcut_pane

0xa917,	// (0x000326fc) list_highlight_pane_cp16_ParamLimits

0xa917,	// (0x000326fc) list_highlight_pane_cp16

0xa924,	// (0x00032709) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa924,	// (0x00032709) list_single_idle_plugin_shortcut_pane_g1

0xa930,	// (0x00032715) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa930,	// (0x00032715) list_single_idle_plugin_shortcut_pane_g2

0xa94c,	// (0x00032731) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa94c,	// (0x00032731) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfb9a,	// (0x0003797f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfb9a,	// (0x0003797f) list_single_idle_plugin_shortcut_pane_g

0xa961,	// (0x00032746) cell_ai_shortcut_pane_ParamLimits

0xa961,	// (0x00032746) cell_ai_shortcut_pane

0xa977,	// (0x0003275c) cell_ai_shortcut_pane_g1_ParamLimits

0xa977,	// (0x0003275c) cell_ai_shortcut_pane_g1

0xf492,	// (0x00037277) ai_gene_pane_1_cp2

0xf4d5,	// (0x000372ba) ai_gene_pane_2_cp2

0xf4dd,	// (0x000372c2) list_highlight_pane_cp15

0xf4e6,	// (0x000372cb) list_single_idle_plugin_calendar_pane_g1

0xf4dd,	// (0x000372c2) list_highlight_pane_cp17

0xf4ee,	// (0x000372d3) list_single_idle_plugin_calendar_pane_g1_copy1

0xf4f6,	// (0x000372db) list_single_idle_plugin_player_pane_g1

0xd95a,	// (0x0003573f) list_single_idle_plugin_player_pane_g2

0x0001,

0x04e0,	// (0x000282c5) list_single_idle_plugin_player_pane_g

0xf4fe,	// (0x000372e3) list_single_idle_plugin_player_pane_t1

0xf50c,	// (0x000372f1) list_single_idle_plugin_player_pane_t2

0xf51a,	// (0x000372ff) list_single_idle_plugin_player_pane_t3

0xf528,	// (0x0003730d) list_single_idle_plugin_player_pane_t4

0x0003,

0x04e5,	// (0x000282ca) list_single_idle_plugin_player_pane_t

0xf536,	// (0x0003731b) wait_bar_pane_cp15

0xf53e,	// (0x00037323) grid_ai_notification_pane

0xd95a,	// (0x0003573f) list_single_idle_plugin_notification_pane_g1

0xa999,	// (0x0003277e) cell_ai_notification_pane_ParamLimits

0xa999,	// (0x0003277e) cell_ai_notification_pane

0xf547,	// (0x0003732c) cell_ai_notification_pane_g1

0xf54f,	// (0x00037334) cell_ai_notification_pane_t1

0xa9a6,	// (0x0003278b) tb_ext_find_button_pane

0xa9ae,	// (0x00032793) tb_ext_find_pane_g1

0xa9b6,	// (0x0003279b) tb_ext_find_pane_t1

0xb9a4,	// (0x00033789) tb_ext_find_button_pane_g1

0xf55d,	// (0x00037342) tb_ext_find_button_pane_g2

0x0001,

0xfba1,	// (0x00037986) tb_ext_find_button_pane_g

0xa7c6,	// (0x000325ab) main_idle_act4_pane_t1_ParamLimits

0xa7dc,	// (0x000325c1) main_idle_act4_pane_t2_ParamLimits

0xfb80,	// (0x00037965) main_idle_act4_pane_t_ParamLimits

0xa80e,	// (0x000325f3) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa826,	// (0x0003260b) sat_plugin_idle_act4_pane_ParamLimits

0xa826,	// (0x0003260b) sat_plugin_idle_act4_pane

0xa9c4,	// (0x000327a9) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa9c4,	// (0x000327a9) sat_plugin_idle_act4_pane_t1

0xa9dc,	// (0x000327c1) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa9dc,	// (0x000327c1) sat_plugin_idle_act4_pane_t2

0xa9f4,	// (0x000327d9) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa9f4,	// (0x000327d9) sat_plugin_idle_act4_pane_t3

0xaa0c,	// (0x000327f1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xaa0c,	// (0x000327f1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfba6,	// (0x0003798b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfba6,	// (0x0003798b) sat_plugin_idle_act4_pane_t

0x0968,	// (0x0002874d) popup_battery_window_ParamLimits

0x0968,	// (0x0002874d) popup_battery_window

0x8cc0,	// (0x00030aa5) bg_popup_sub_pane_cp25_ParamLimits

0x8cc0,	// (0x00030aa5) bg_popup_sub_pane_cp25

0x3a9f,	// (0x0002b884) popup_battery_window_g1_ParamLimits

0x3a9f,	// (0x0002b884) popup_battery_window_g1

0x3aab,	// (0x0002b890) popup_battery_window_t1_ParamLimits

0x3aab,	// (0x0002b890) popup_battery_window_t1

0x3abd,	// (0x0002b8a2) popup_battery_window_t2_ParamLimits

0x3abd,	// (0x0002b8a2) popup_battery_window_t2

0x0001,

0xfbaf,	// (0x00037994) popup_battery_window_t_ParamLimits

0xfbaf,	// (0x00037994) popup_battery_window_t

0x76c9,	// (0x0002f4ae) midp_canvas_pane_ParamLimits

0x7724,	// (0x0002f509) midp_keypad_pane_ParamLimits

0x7724,	// (0x0002f509) midp_keypad_pane

0xb4a5,	// (0x0003328a) main_midp_pane_ParamLimits

0xdf9c,	// (0x00035d81) signal_pane_g2_cp_ParamLimits

0xaa24,	// (0x00032809) aid_size_cell_midp_keypad_ParamLimits

0xaa24,	// (0x00032809) aid_size_cell_midp_keypad

0xaa42,	// (0x00032827) midp_keyp_game_grid_pane_ParamLimits

0xaa42,	// (0x00032827) midp_keyp_game_grid_pane

0xaa69,	// (0x0003284e) midp_keyp_rocker_pane_ParamLimits

0xaa69,	// (0x0003284e) midp_keyp_rocker_pane

0xaaaa,	// (0x0003288f) midp_keyp_sk_left_pane_ParamLimits

0xaaaa,	// (0x0003288f) midp_keyp_sk_left_pane

0xaafe,	// (0x000328e3) midp_keyp_sk_right_pane_ParamLimits

0xaafe,	// (0x000328e3) midp_keyp_sk_right_pane

0x8b1d,	// (0x00030902) bg_button_pane_cp03

0xab52,	// (0x00032937) midp_keyp_sk_left_pane_g1

0x8b1d,	// (0x00030902) bg_button_pane_cp04

0xab52,	// (0x00032937) midp_keyp_sk_right_pane_g1

0xe2a2,	// (0x00036087) midp_keyp_rocker_pane_g1

0xab5b,	// (0x00032940) keyp_game_cell_pane_ParamLimits

0xab5b,	// (0x00032940) keyp_game_cell_pane

0x8b1d,	// (0x00030902) bg_button_pane_cp02

0xab7f,	// (0x00032964) keyp_game_cell_pane_g1

0x6fe5,	// (0x0002edca) popup_fep_vkb2_window_ParamLimits

0x6fe5,	// (0x0002edca) popup_fep_vkb2_window

0x8727,	// (0x0003050c) aid_size_cell_vkb2_ParamLimits

0x8727,	// (0x0003050c) aid_size_cell_vkb2

0x875d,	// (0x00030542) popup_fep_vkb2_window_g1_ParamLimits

0x875d,	// (0x00030542) popup_fep_vkb2_window_g1

0x87ad,	// (0x00030592) vkb2_area_bottom_pane_ParamLimits

0x87ad,	// (0x00030592) vkb2_area_bottom_pane

0x8801,	// (0x000305e6) vkb2_area_keypad_pane_ParamLimits

0x8801,	// (0x000305e6) vkb2_area_keypad_pane

0x8849,	// (0x0003062e) vkb2_area_top_pane_ParamLimits

0x8849,	// (0x0003062e) vkb2_area_top_pane

0x88cf,	// (0x000306b4) vkb2_top_entry_pane_ParamLimits

0x88cf,	// (0x000306b4) vkb2_top_entry_pane

0x88fc,	// (0x000306e1) vkb2_top_grid_left_pane_ParamLimits

0x88fc,	// (0x000306e1) vkb2_top_grid_left_pane

0x891c,	// (0x00030701) vkb2_top_grid_right_pane_ParamLimits

0x891c,	// (0x00030701) vkb2_top_grid_right_pane

0x3e30,	// (0x0002bc15) vkb2_cell_keypad_pane_ParamLimits

0x3e30,	// (0x0002bc15) vkb2_cell_keypad_pane

0x8962,	// (0x00030747) vkb2_area_bottom_grid_pane_ParamLimits

0x8962,	// (0x00030747) vkb2_area_bottom_grid_pane

0x898c,	// (0x00030771) vkb2_area_bottom_pane_g1_ParamLimits

0x898c,	// (0x00030771) vkb2_area_bottom_pane_g1

0x89b2,	// (0x00030797) vkb2_area_bottom_pane_g2_ParamLimits

0x89b2,	// (0x00030797) vkb2_area_bottom_pane_g2

0x89e3,	// (0x000307c8) vkb2_area_bottom_pane_g3_ParamLimits

0x89e3,	// (0x000307c8) vkb2_area_bottom_pane_g3

0x0002,

0xfbb4,	// (0x00037999) vkb2_area_bottom_pane_g_ParamLimits

0xfbb4,	// (0x00037999) vkb2_area_bottom_pane_g

0x3fda,	// (0x0002bdbf) vkb2_top_cell_left_pane_ParamLimits

0x3fda,	// (0x0002bdbf) vkb2_top_cell_left_pane

0xab95,	// (0x0003297a) vkb2_top_entry_pane_g1_ParamLimits

0xab95,	// (0x0003297a) vkb2_top_entry_pane_g1

0xaba3,	// (0x00032988) vkb2_top_entry_pane_t1_ParamLimits

0xaba3,	// (0x00032988) vkb2_top_entry_pane_t1

0x4042,	// (0x0002be27) vkb2_top_entry_pane_t2_ParamLimits

0x4042,	// (0x0002be27) vkb2_top_entry_pane_t2

0x4074,	// (0x0002be59) vkb2_top_entry_pane_t3_ParamLimits

0x4074,	// (0x0002be59) vkb2_top_entry_pane_t3

0x0002,

0xfbbb,	// (0x000379a0) vkb2_top_entry_pane_t_ParamLimits

0xfbbb,	// (0x000379a0) vkb2_top_entry_pane_t

0x8a4d,	// (0x00030832) vkb2_top_grid_right_pane_g1_ParamLimits

0x8a4d,	// (0x00030832) vkb2_top_grid_right_pane_g1

0x40db,	// (0x0002bec0) vkb2_top_grid_right_pane_g2_ParamLimits

0x40db,	// (0x0002bec0) vkb2_top_grid_right_pane_g2

0x40f3,	// (0x0002bed8) vkb2_top_grid_right_pane_g3_ParamLimits

0x40f3,	// (0x0002bed8) vkb2_top_grid_right_pane_g3

0x8a63,	// (0x00030848) vkb2_top_grid_right_pane_g4_ParamLimits

0x8a63,	// (0x00030848) vkb2_top_grid_right_pane_g4

0x0003,

0xfbc2,	// (0x000379a7) vkb2_top_grid_right_pane_g_ParamLimits

0xfbc2,	// (0x000379a7) vkb2_top_grid_right_pane_g

0x4121,	// (0x0002bf06) vkb2_top_cell_left_pane_g1

0x4138,	// (0x0002bf1d) vkb2_cell_keypad_pane_g1_ParamLimits

0x4138,	// (0x0002bf1d) vkb2_cell_keypad_pane_g1

0x4146,	// (0x0002bf2b) vkb2_cell_keypad_pane_t1_ParamLimits

0x4146,	// (0x0002bf2b) vkb2_cell_keypad_pane_t1

0x415d,	// (0x0002bf42) vkb2_cell_bottom_grid_pane_ParamLimits

0x415d,	// (0x0002bf42) vkb2_cell_bottom_grid_pane

0x4196,	// (0x0002bf7b) vkb2_cell_bottom_grid_pane_g1

0xa857,	// (0x0003263c) aid_call2_pane_cp02

0xa85f,	// (0x00032644) aid_call_pane_cp02

0xa867,	// (0x0003264c) clock_digital_number_pane_cp10

0xa86f,	// (0x00032654) clock_digital_number_pane_cp11

0xa877,	// (0x0003265c) clock_digital_number_pane_cp12

0xa87f,	// (0x00032664) clock_digital_number_pane_cp13

0xa887,	// (0x0003266c) clock_digital_separator_pane_cp10

0xb9a4,	// (0x00033789) popup_clock_digital_analogue_window_cp2_g1

0xb9a4,	// (0x00033789) popup_clock_digital_analogue_window_cp2_g2

0xa88f,	// (0x00032674) popup_clock_digital_analogue_window_cp2_g3

0xb9a4,	// (0x00033789) popup_clock_digital_analogue_window_cp2_g4

0xa88f,	// (0x00032674) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfb85,	// (0x0003796a) popup_clock_digital_analogue_window_cp2_g

0xa897,	// (0x0003267c) popup_clock_digital_analogue_window_cp2_t1

0xa8a5,	// (0x0003268a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfb90,	// (0x00037975) popup_clock_digital_analogue_window_cp2_t

0xe2a2,	// (0x00036087) clock_digital_number_pane_cp10_g1

0xe2a2,	// (0x00036087) clock_digital_number_pane_cp10_g2

0x0001,

0x02b7,	// (0x0002809c) clock_digital_number_pane_cp10_g

0xe2a2,	// (0x00036087) clock_digital_separator_pane_cp10_g1

0xe2a2,	// (0x00036087) clock_digital_separator_pane_cp10_g2

0x0001,

0x02b7,	// (0x0002809c) clock_digital_separator_pane_cp10_g

0xf3db,	// (0x000371c0) uniindi_top_pane_g3

0xf3ec,	// (0x000371d1) uniindi_top_pane_g4

0x3ebb,	// (0x0002bca0) vkb2_row_keypad_pane_ParamLimits

0x3ebb,	// (0x0002bca0) vkb2_row_keypad_pane

0x41b2,	// (0x0002bf97) vkb2_cell_t_keypad_pane_ParamLimits

0x41b2,	// (0x0002bf97) vkb2_cell_t_keypad_pane

0x41c2,	// (0x0002bfa7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x41c2,	// (0x0002bfa7) vkb2_cell_t_keypad_pane_cp08

0x41d5,	// (0x0002bfba) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x41d5,	// (0x0002bfba) vkb2_cell_t_keypad_pane_cp09

0x41e9,	// (0x0002bfce) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x41e9,	// (0x0002bfce) vkb2_cell_t_keypad_pane_cp01

0x41fa,	// (0x0002bfdf) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x41fa,	// (0x0002bfdf) vkb2_cell_t_keypad_pane_cp02

0x420b,	// (0x0002bff0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x420b,	// (0x0002bff0) vkb2_cell_t_keypad_pane_cp03

0x421c,	// (0x0002c001) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x421c,	// (0x0002c001) vkb2_cell_t_keypad_pane_cp04

0x422d,	// (0x0002c012) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x422d,	// (0x0002c012) vkb2_cell_t_keypad_pane_cp05

0x423e,	// (0x0002c023) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x423e,	// (0x0002c023) vkb2_cell_t_keypad_pane_cp06

0x424f,	// (0x0002c034) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x424f,	// (0x0002c034) vkb2_cell_t_keypad_pane_cp07

0x4260,	// (0x0002c045) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x4260,	// (0x0002c045) vkb2_cell_t_keypad_pane_cp10

0x2f7b,	// (0x0002ad60) vkb2_cell_t_keypad_pane_g1

0x4275,	// (0x0002c05a) vkb2_cell_t_keypad_pane_t1

0x08a3,	// (0x00028688) popup_grid_graphic2_window

0xabdc,	// (0x000329c1) aid_size_cell_graphic2_ParamLimits

0xabdc,	// (0x000329c1) aid_size_cell_graphic2

0xac1a,	// (0x000329ff) bg_popup_window_pane_cp21_ParamLimits

0xac1a,	// (0x000329ff) bg_popup_window_pane_cp21

0xac28,	// (0x00032a0d) graphic2_pages_pane_ParamLimits

0xac28,	// (0x00032a0d) graphic2_pages_pane

0xac7e,	// (0x00032a63) grid_graphic2_control_pane_ParamLimits

0xac7e,	// (0x00032a63) grid_graphic2_control_pane

0xacc6,	// (0x00032aab) grid_graphic2_pane_ParamLimits

0xacc6,	// (0x00032aab) grid_graphic2_pane

0xad4d,	// (0x00032b32) cell_graphic2_pane

0x8b1d,	// (0x00030902) main_comp_mode_pane

0xf04c,	// (0x00036e31) list_ai3_gene_pane_ParamLimits

0xa59b,	// (0x00032380) bg_popup_window_pane_cp19_ParamLimits

0xf1bd,	// (0x00036fa2) bg_touch_area_indi_pane_ParamLimits

0xf1bd,	// (0x00036fa2) bg_touch_area_indi_pane

0xf1d3,	// (0x00036fb8) bg_touch_area_indi_pane_cp01_ParamLimits

0xf1d3,	// (0x00036fb8) bg_touch_area_indi_pane_cp01

0xf1e9,	// (0x00036fce) bg_touch_area_indi_pane_cp02_ParamLimits

0xf1e9,	// (0x00036fce) bg_touch_area_indi_pane_cp02

0xf201,	// (0x00036fe6) bg_touch_area_indi_pane_cp03_ParamLimits

0xf201,	// (0x00036fe6) bg_touch_area_indi_pane_cp03

0xf21b,	// (0x00037000) popup_slider_window_g1_ParamLimits

0xf237,	// (0x0003701c) popup_slider_window_g2_ParamLimits

0xf253,	// (0x00037038) popup_slider_window_g3_ParamLimits

0xfb4e,	// (0x00037933) popup_slider_window_g_ParamLimits

0xf26f,	// (0x00037054) popup_slider_window_t1_ParamLimits

0xf2b5,	// (0x0003709a) small_volume_slider_vertical_pane_ParamLimits

0xad4d,	// (0x00032b32) cell_graphic2_pane_ParamLimits

0xadaa,	// (0x00032b8f) bg_button_pane_cp10_ParamLimits

0xadaa,	// (0x00032b8f) bg_button_pane_cp10

0xadbd,	// (0x00032ba2) bg_button_pane_cp11_ParamLimits

0xadbd,	// (0x00032ba2) bg_button_pane_cp11

0xadd0,	// (0x00032bb5) graphic2_pages_pane_g1_ParamLimits

0xadd0,	// (0x00032bb5) graphic2_pages_pane_g1

0xadeb,	// (0x00032bd0) graphic2_pages_pane_g2_ParamLimits

0xadeb,	// (0x00032bd0) graphic2_pages_pane_g2

0x0001,

0xfbd0,	// (0x000379b5) graphic2_pages_pane_g_ParamLimits

0xfbd0,	// (0x000379b5) graphic2_pages_pane_g

0xae03,	// (0x00032be8) graphic2_pages_pane_t1_ParamLimits

0xae03,	// (0x00032be8) graphic2_pages_pane_t1

0xae1b,	// (0x00032c00) cell_graphic2_control_pane_ParamLimits

0xae1b,	// (0x00032c00) cell_graphic2_control_pane

0xae4d,	// (0x00032c32) cell_graphic2_pane_g1_ParamLimits

0xae4d,	// (0x00032c32) cell_graphic2_pane_g1

0x8a79,	// (0x0003085e) cell_graphic2_pane_g2_ParamLimits

0x8a79,	// (0x0003085e) cell_graphic2_pane_g2

0xab88,	// (0x0003296d) cell_graphic2_pane_g3_ParamLimits

0xab88,	// (0x0003296d) cell_graphic2_pane_g3

0x8a86,	// (0x0003086b) cell_graphic2_pane_g4_ParamLimits

0x8a86,	// (0x0003086b) cell_graphic2_pane_g4

0xae5a,	// (0x00032c3f) cell_graphic2_pane_g5_ParamLimits

0xae5a,	// (0x00032c3f) cell_graphic2_pane_g5

0x0004,

0xfbd5,	// (0x000379ba) cell_graphic2_pane_g_ParamLimits

0xfbd5,	// (0x000379ba) cell_graphic2_pane_g

0xae7a,	// (0x00032c5f) cell_graphic2_pane_t1_ParamLimits

0xae7a,	// (0x00032c5f) cell_graphic2_pane_t1

0xd04e,	// (0x00034e33) grid_highlight_pane_cp11_ParamLimits

0xd04e,	// (0x00034e33) grid_highlight_pane_cp11

0x8cc0,	// (0x00030aa5) bg_button_pane_cp05

0xaeaf,	// (0x00032c94) cell_graphic2_control_pane_g1

0xe2a2,	// (0x00036087) bg_touch_area_indi_pane_g1

0x4545,	// (0x0002c32a) aid_cmod_rocker_key_size

0x454f,	// (0x0002c334) aid_cmode_itu_key_size

0x4559,	// (0x0002c33e) main_cmode_video_pane

0x4563,	// (0x0002c348) main_comp_mode_itu_pane

0x456f,	// (0x0002c354) main_comp_mode_rocker_pane

0x457b,	// (0x0002c360) cell_cmode_rocker_pane_ParamLimits

0x457b,	// (0x0002c360) cell_cmode_rocker_pane

0x458d,	// (0x0002c372) cell_cmode_itu_pane_ParamLimits

0x458d,	// (0x0002c372) cell_cmode_itu_pane

0xb34d,	// (0x00033132) bg_button_pane_cp06_ParamLimits

0xb34d,	// (0x00033132) bg_button_pane_cp06

0xe435,	// (0x0003621a) cell_cmode_rocker_pane_g1_ParamLimits

0xe435,	// (0x0003621a) cell_cmode_rocker_pane_g1

0xf2ee,	// (0x000370d3) cell_cmode_rocker_pane_g2_ParamLimits

0xf2ee,	// (0x000370d3) cell_cmode_rocker_pane_g2

0x0001,

0xfbe5,	// (0x000379ca) cell_cmode_rocker_pane_g_ParamLimits

0xfbe5,	// (0x000379ca) cell_cmode_rocker_pane_g

0x8b1d,	// (0x00030902) bg_button_pane_cp07

0x45a2,	// (0x0002c387) cell_cmode_itu_pane_g1

0x45ab,	// (0x0002c390) cell_cmode_itu_pane_t1

0x45b9,	// (0x0002c39e) cell_cmode_itu_pane_t2

0x0001,

0xfbea,	// (0x000379cf) cell_cmode_itu_pane_t

0xf45e,	// (0x00037243) aid_touch_ctrl_left

0xf466,	// (0x0003724b) aid_touch_ctrl_right

0x8b1d,	// (0x00030902) compa_mode_pane

0xaed5,	// (0x00032cba) aid_cmod_rocker_key_size_cp

0xaedf,	// (0x00032cc4) aid_cmode_itu_key_size_cp

0x45db,	// (0x0002c3c0) compa_mode_pane_g1

0x45e3,	// (0x0002c3c8) compa_mode_pane_g2

0x45eb,	// (0x0002c3d0) compa_mode_pane_g3

0x0002,

0xfbef,	// (0x000379d4) compa_mode_pane_g

0xaee9,	// (0x00032cce) main_comp_mode_itu_pane_cp

0xaef1,	// (0x00032cd6) main_comp_mode_rocker_pane_cp

0xaef9,	// (0x00032cde) cell_cmode_itu_pane_cp_ParamLimits

0xaef9,	// (0x00032cde) cell_cmode_itu_pane_cp

0xaf0e,	// (0x00032cf3) cell_cmode_rocker_pane_cp_ParamLimits

0xaf0e,	// (0x00032cf3) cell_cmode_rocker_pane_cp

0xb34d,	// (0x00033132) bg_button_pane_cp06_cp_ParamLimits

0xb34d,	// (0x00033132) bg_button_pane_cp06_cp

0xe435,	// (0x0003621a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe435,	// (0x0003621a) cell_cmode_rocker_pane_g1_cp

0xe2a2,	// (0x00036087) cell_cmode_rocker_pane_g2_cp

0x8b1d,	// (0x00030902) bg_button_pane_cp07_cp

0xaf20,	// (0x00032d05) cell_cmode_itu_pane_g1_cp

0xaf29,	// (0x00032d0e) cell_cmode_itu_pane_t1_cp

0xaf29,	// (0x00032d0e) cell_cmode_itu_pane_t2_cp

0x9c0a,	// (0x000319ef) settings_code_pane_cp2

0x8b8d,	// (0x00030972) bg_popup_window_pane_cp3_ParamLimits

0x970f,	// (0x000314f4) heading_pane_cp3_ParamLimits

0x971b,	// (0x00031500) listscroll_popup_graphic_pane_ParamLimits

0x2b61,	// (0x0002a946) fep_hwr_aid_pane_ParamLimits

0x36bf,	// (0x0002b4a4) aid_touch_sctrl_top_ParamLimits

0x36da,	// (0x0002b4bf) sctrl_sk_top_pane_g1_ParamLimits

0x2f7b,	// (0x0002ad60) sctrl_sk_top_pane_g2_ParamLimits

0xfb5b,	// (0x00037940) sctrl_sk_top_pane_g_ParamLimits

0x36e7,	// (0x0002b4cc) sctrl_sk_top_pane_t1_ParamLimits

0x36bf,	// (0x0002b4a4) aid_touch_sctrl_bottom_ParamLimits

0x36e7,	// (0x0002b4cc) sctrl_sk_bottom_pane_t1_ParamLimits

0xf3a7,	// (0x0003718c) aid_area_touch_clock

0x8891,	// (0x00030676) aid_vkb2_area_top_pane_cell_ParamLimits

0x8891,	// (0x00030676) aid_vkb2_area_top_pane_cell

0x893c,	// (0x00030721) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x893c,	// (0x00030721) aid_vkb2_area_bottom_pane_cell

0x3ffa,	// (0x0002bddf) popup_char_count_window

0x4638,	// (0x0002c41d) popup_char_count_window_g1

0x4641,	// (0x0002c426) popup_char_count_window_g2

0x464a,	// (0x0002c42f) popup_char_count_window_g3

0x0002,

0xfbf6,	// (0x000379db) popup_char_count_window_g

0x4653,	// (0x0002c438) popup_char_count_window_t1

0x3c58,	// (0x0002ba3d) popup_fep_char_preview_window_ParamLimits

0x3c58,	// (0x0002ba3d) popup_fep_char_preview_window

0x88b1,	// (0x00030696) vkb2_top_candi_pane_ParamLimits

0x88b1,	// (0x00030696) vkb2_top_candi_pane

0xaf37,	// (0x00032d1c) cell_vkb2_top_candi_pane_ParamLimits

0xaf37,	// (0x00032d1c) cell_vkb2_top_candi_pane

0x46ae,	// (0x0002c493) bg_popup_fep_char_preview_window_ParamLimits

0x46ae,	// (0x0002c493) bg_popup_fep_char_preview_window

0x46bc,	// (0x0002c4a1) popup_fep_char_preview_window_t1_ParamLimits

0x46bc,	// (0x0002c4a1) popup_fep_char_preview_window_t1

0x46f6,	// (0x0002c4db) bg_popup_fep_char_preview_window_g1

0x46fe,	// (0x0002c4e3) bg_popup_fep_char_preview_window_g2

0x4706,	// (0x0002c4eb) bg_popup_fep_char_preview_window_g3

0x470e,	// (0x0002c4f3) bg_popup_fep_char_preview_window_g4

0x4716,	// (0x0002c4fb) bg_popup_fep_char_preview_window_g5

0x471e,	// (0x0002c503) bg_popup_fep_char_preview_window_g6

0x4726,	// (0x0002c50b) bg_popup_fep_char_preview_window_g7

0x472e,	// (0x0002c513) bg_popup_fep_char_preview_window_g8

0x4736,	// (0x0002c51b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfbfd,	// (0x000379e2) bg_popup_fep_char_preview_window_g

0x2f7b,	// (0x0002ad60) cell_vkb2_top_candi_pane_g1_ParamLimits

0x2f7b,	// (0x0002ad60) cell_vkb2_top_candi_pane_g1

0x2f89,	// (0x0002ad6e) cell_vkb2_top_candi_pane_g2_ParamLimits

0x2f89,	// (0x0002ad6e) cell_vkb2_top_candi_pane_g2

0x2faa,	// (0x0002ad8f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x2faa,	// (0x0002ad8f) cell_vkb2_top_candi_pane_g3

0x473e,	// (0x0002c523) cell_vkb2_top_candi_pane_g4_ParamLimits

0x473e,	// (0x0002c523) cell_vkb2_top_candi_pane_g4

0xe828,	// (0x0003660d) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe828,	// (0x0003660d) cell_vkb2_top_candi_pane_g5

0x475f,	// (0x0002c544) cell_vkb2_top_candi_pane_g6_ParamLimits

0x475f,	// (0x0002c544) cell_vkb2_top_candi_pane_g6

0x0005,

0xfc10,	// (0x000379f5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfc10,	// (0x000379f5) cell_vkb2_top_candi_pane_g

0x476d,	// (0x0002c552) cell_vkb2_top_candi_pane_t1

0x243d,	// (0x0002a222) aid_size_touch_slider_mark_ParamLimits

0x243d,	// (0x0002a222) aid_size_touch_slider_mark

0xac64,	// (0x00032a49) grid_graphic2_catg_pane_ParamLimits

0xac64,	// (0x00032a49) grid_graphic2_catg_pane

0xad20,	// (0x00032b05) popup_grid_graphic2_window_t1_ParamLimits

0xad20,	// (0x00032b05) popup_grid_graphic2_window_t1

0xad36,	// (0x00032b1b) popup_grid_graphic2_window_t2_ParamLimits

0xad36,	// (0x00032b1b) popup_grid_graphic2_window_t2

0x0001,

0xfbcb,	// (0x000379b0) popup_grid_graphic2_window_t_ParamLimits

0xfbcb,	// (0x000379b0) popup_grid_graphic2_window_t

0x8cc0,	// (0x00030aa5) bg_button_pane_cp05_ParamLimits

0xaeaf,	// (0x00032c94) cell_graphic2_control_pane_g1_ParamLimits

0xaf9d,	// (0x00032d82) cell_graphic2_catg_pane_ParamLimits

0xaf9d,	// (0x00032d82) cell_graphic2_catg_pane

0x8b1d,	// (0x00030902) bg_button_pane_cp12

0xafaf,	// (0x00032d94) cell_graphic2_catg_pane_g1

0xf373,	// (0x00037158) cell_tb_ext_pane_t1_ParamLimits

0x4098,	// (0x0002be7d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x4098,	// (0x0002be7d) vkb2_top_cell_right_narrow_pane

0x40b0,	// (0x0002be95) vkb2_top_cell_right_wide_pane_ParamLimits

0x40b0,	// (0x0002be95) vkb2_top_cell_right_wide_pane

0x2b53,	// (0x0002a938) bg_vkb2_func_pane_ParamLimits

0x2b53,	// (0x0002a938) bg_vkb2_func_pane

0x4121,	// (0x0002bf06) vkb2_top_cell_left_pane_g1_ParamLimits

0x2b53,	// (0x0002a938) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2b53,	// (0x0002a938) bg_vkb2_fuc_pane_cp03

0x4196,	// (0x0002bf7b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc402,	// (0x000341e7) bg_vkb2_func_pane_g1

0xc40a,	// (0x000341ef) bg_vkb2_func_pane_g2

0xc41a,	// (0x000341ff) bg_vkb2_func_pane_g3

0xc412,	// (0x000341f7) bg_vkb2_func_pane_g4

0xc422,	// (0x00034207) bg_vkb2_func_pane_g5

0xc42a,	// (0x0003420f) bg_vkb2_func_pane_g6

0xc432,	// (0x00034217) bg_vkb2_func_pane_g7

0xc43a,	// (0x0003421f) bg_vkb2_func_pane_g8

0xc3fa,	// (0x000341df) bg_vkb2_func_pane_g9

0x0008,

0xfc1d,	// (0x00037a02) bg_vkb2_func_pane_g

0x2b53,	// (0x0002a938) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2b53,	// (0x0002a938) bg_vkb2_fuc_pane_cp01

0x4121,	// (0x0002bf06) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x4121,	// (0x0002bf06) vkb2_top_cell_right_wide_pane_g1

0x2b53,	// (0x0002a938) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2b53,	// (0x0002a938) bg_vkb2_fuc_pane_cp02

0x4196,	// (0x0002bf7b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x4196,	// (0x0002bf7b) vkb2_top_cell_right_narrow_pane_g1

0xa4db,	// (0x000322c0) aid_touch_area_decrease_ParamLimits

0xa4db,	// (0x000322c0) aid_touch_area_decrease

0xa50f,	// (0x000322f4) aid_touch_area_increase_ParamLimits

0xa50f,	// (0x000322f4) aid_touch_area_increase

0xa537,	// (0x0003231c) aid_touch_area_mute_ParamLimits

0xa537,	// (0x0003231c) aid_touch_area_mute

0xa567,	// (0x0003234c) aid_touch_area_slider_ParamLimits

0xa567,	// (0x0003234c) aid_touch_area_slider

0xa5a7,	// (0x0003238c) popup_slider_window_g4_ParamLimits

0xa5a7,	// (0x0003238c) popup_slider_window_g4

0xa5cf,	// (0x000323b4) popup_slider_window_g5_ParamLimits

0xa5cf,	// (0x000323b4) popup_slider_window_g5

0xa603,	// (0x000323e8) popup_slider_window_g6_ParamLimits

0xa603,	// (0x000323e8) popup_slider_window_g6

0xf29d,	// (0x00037082) popup_slider_window_t2_ParamLimits

0xf29d,	// (0x00037082) popup_slider_window_t2

0x0001,

0x0466,	// (0x0002824b) popup_slider_window_t_ParamLimits

0x0466,	// (0x0002824b) popup_slider_window_t

0xa61f,	// (0x00032404) slider_pane_ParamLimits

0xa61f,	// (0x00032404) slider_pane

0x47a7,	// (0x0002c58c) slider_pane_g1_ParamLimits

0x47a7,	// (0x0002c58c) slider_pane_g1

0x47bb,	// (0x0002c5a0) slider_pane_g2_ParamLimits

0x47bb,	// (0x0002c5a0) slider_pane_g2

0x47d1,	// (0x0002c5b6) slider_pane_g3_ParamLimits

0x47d1,	// (0x0002c5b6) slider_pane_g3

0x0003,

0xfc30,	// (0x00037a15) slider_pane_g_ParamLimits

0xfc30,	// (0x00037a15) slider_pane_g

0x7f26,	// (0x0002fd0b) popup_tb_float_extension_window_ParamLimits

0x7f26,	// (0x0002fd0b) popup_tb_float_extension_window

0x47fd,	// (0x0002c5e2) aid_size_cell_tb_float_ext

0x8b1d,	// (0x00030902) bg_popup_sub_window_cp28

0x4809,	// (0x0002c5ee) grid_tb_float_ext_pane

0x4813,	// (0x0002c5f8) cell_tb_float_ext_pane_ParamLimits

0x4813,	// (0x0002c5f8) cell_tb_float_ext_pane

0x482d,	// (0x0002c612) cell_tb_float_ext_pane_g1

0x4836,	// (0x0002c61b) grid_highlight_pane_cp12

0x868c,	// (0x00030471) cell_last_hwr_side_pane_ParamLimits

0x868c,	// (0x00030471) cell_last_hwr_side_pane

0xe2a2,	// (0x00036087) cell_last_hwr_side_pane_g1

0x483f,	// (0x0002c624) cell_last_hwr_side_pane_g2

0x0001,

0xfc39,	// (0x00037a1e) cell_last_hwr_side_pane_g

0x8a18,	// (0x000307fd) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8a18,	// (0x000307fd) vkb2_area_bottom_space_btn_pane

0x2f7b,	// (0x0002ad60) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x4275,	// (0x0002c05a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x476d,	// (0x0002c552) cell_vkb2_top_candi_pane_t1_ParamLimits

0x4848,	// (0x0002c62d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x4848,	// (0x0002c62d) vkb2_area_bottom_space_btn_pane_g1

0x4882,	// (0x0002c667) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x4882,	// (0x0002c667) vkb2_area_bottom_space_btn_pane_g2

0x48b8,	// (0x0002c69d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x48b8,	// (0x0002c69d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfc3e,	// (0x00037a23) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfc3e,	// (0x00037a23) vkb2_area_bottom_space_btn_pane_g

0x2c16,	// (0x0002a9fb) cel_fep_hwr_func_pane_ParamLimits

0x2c16,	// (0x0002a9fb) cel_fep_hwr_func_pane

0x8661,	// (0x00030446) cell_hwr_side_button_pane_ParamLimits

0x8661,	// (0x00030446) cell_hwr_side_button_pane

0xf3a7,	// (0x0003718c) aid_area_touch_clock_ParamLimits

0x8cc0,	// (0x00030aa5) bg_uniindi_top_pane_ParamLimits

0xf3b9,	// (0x0003719e) uniindi_top_pane_g1_ParamLimits

0xf3cf,	// (0x000371b4) uniindi_top_pane_g2_ParamLimits

0xf3db,	// (0x000371c0) uniindi_top_pane_g3_ParamLimits

0xf3ec,	// (0x000371d1) uniindi_top_pane_g4_ParamLimits

0x049e,	// (0x00028283) uniindi_top_pane_g_ParamLimits

0xf3f9,	// (0x000371de) uniindi_top_pane_t1_ParamLimits

0x8cc0,	// (0x00030aa5) bg_vkb2_func_pane_cp01_ParamLimits

0x8cc0,	// (0x00030aa5) bg_vkb2_func_pane_cp01

0x4e4a,	// (0x0002cc2f) cel_fep_hwr_func_pane_g1_ParamLimits

0x4e4a,	// (0x0002cc2f) cel_fep_hwr_func_pane_g1

0x8cc0,	// (0x00030aa5) bg_vkb2_func_pane_cp02_ParamLimits

0x8cc0,	// (0x00030aa5) bg_vkb2_func_pane_cp02

0x4e4a,	// (0x0002cc2f) cell_hwr_side_button_pane_g1_ParamLimits

0x4e4a,	// (0x0002cc2f) cell_hwr_side_button_pane_g1

0xc310,	// (0x000340f5) status_pane_g4_ParamLimits

0xc310,	// (0x000340f5) status_pane_g4

0xc32a,	// (0x0003410f) status_pane_t1

0xe128,	// (0x00035f0d) form2_midp_gauge_slider_cont_pane

0xe130,	// (0x00035f15) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9ec4,	// (0x00031ca9) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9ed6,	// (0x00031cbb) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfa05,	// (0x000377ea) form2_midp_gauge_slider_pane_t_ParamLimits

0xe142,	// (0x00035f27) form2_midp_slider_pane_ParamLimits

0x3c18,	// (0x0002b9fd) aid_size_cell_func_vkb2_ParamLimits

0x3c18,	// (0x0002b9fd) aid_size_cell_func_vkb2

0x47e9,	// (0x0002c5ce) slider_pane_g4_ParamLimits

0x47e9,	// (0x0002c5ce) slider_pane_g4

0x8a93,	// (0x00030878) form2_midp_gauge_slider_pane_t2_cp01

0x8aa1,	// (0x00030886) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x8aa1,	// (0x00030886) form2_midp_gauge_slider_pane_t3_cp01

0x492d,	// (0x0002c712) form2_midp_slider_pane_cp01

0x8b1d,	// (0x00030902) navi_smil_pane

0x4e7a,	// (0x0002cc5f) navi_smil_pane_g1

0x4e82,	// (0x0002cc67) navi_smil_pane_t1

0x4e58,	// (0x0002cc3d) form2_midp_slider_pane_g1

0x4e61,	// (0x0002cc46) form2_midp_slider_pane_g2

0x4e69,	// (0x0002cc4e) form2_midp_slider_pane_g3

0x4e58,	// (0x0002cc3d) form2_midp_slider_pane_g4

0xafb8,	// (0x00032d9d) form2_midp_slider_pane_g5

0x0004,

0xfc47,	// (0x00037a2c) form2_midp_slider_pane_g

0x48f2,	// (0x0002c6d7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x48f2,	// (0x0002c6d7) vkb2_area_bottom_space_btn_pane_g4

0x8109,	// (0x0002feee) lc0_navi_pane_ParamLimits

0x8109,	// (0x0002feee) lc0_navi_pane

0x8173,	// (0x0002ff58) lc0_stat_indi_pane_ParamLimits

0x8173,	// (0x0002ff58) lc0_stat_indi_pane

0x8188,	// (0x0002ff6d) ls0_title_pane_ParamLimits

0x8188,	// (0x0002ff6d) ls0_title_pane

0xb34d,	// (0x00033132) bg_popup_sub_pane_cp14_ParamLimits

0xf38e,	// (0x00037173) list_uniindi_pane_ParamLimits

0xf39a,	// (0x0003717f) uniindi_top_pane_ParamLimits

0xf436,	// (0x0003721b) list_single_uniindi_pane_g1_ParamLimits

0xf449,	// (0x0003722e) list_single_uniindi_pane_t1_ParamLimits

0x8abe,	// (0x000308a3) lc0_stat_clock_pane_ParamLimits

0x8abe,	// (0x000308a3) lc0_stat_clock_pane

0xafc3,	// (0x00032da8) lc0_stat_indi_pane_g1_ParamLimits

0xafc3,	// (0x00032da8) lc0_stat_indi_pane_g1

0xafd0,	// (0x00032db5) lc0_stat_indi_pane_g2_ParamLimits

0xafd0,	// (0x00032db5) lc0_stat_indi_pane_g2

0x0001,

0xfc52,	// (0x00037a37) lc0_stat_indi_pane_g_ParamLimits

0xfc52,	// (0x00037a37) lc0_stat_indi_pane_g

0x8acb,	// (0x000308b0) lc0_uni_indicator_pane_ParamLimits

0x8acb,	// (0x000308b0) lc0_uni_indicator_pane

0xafdd,	// (0x00032dc2) ls0_title_pane_g1_ParamLimits

0xafdd,	// (0x00032dc2) ls0_title_pane_g1

0xaff1,	// (0x00032dd6) ls0_title_pane_t1_ParamLimits

0xaff1,	// (0x00032dd6) ls0_title_pane_t1

0x8ad8,	// (0x000308bd) lc0_uni_indicator_pane_g1_ParamLimits

0x8ad8,	// (0x000308bd) lc0_uni_indicator_pane_g1

0x4e90,	// (0x0002cc75) lc0_stat_clock_pane_t1

0x8b1d,	// (0x00030902) main_ai5_pane

0x4e9e,	// (0x0002cc83) ai5_sk_pane_ParamLimits

0x4e9e,	// (0x0002cc83) ai5_sk_pane

0xb01f,	// (0x00032e04) cell_ai5_widget_pane_ParamLimits

0xb01f,	// (0x00032e04) cell_ai5_widget_pane

0x4eab,	// (0x0002cc90) aid_size_cell_widget_grid

0x4ebf,	// (0x0002cca4) bg_ai5_widget_pane_ParamLimits

0x4ebf,	// (0x0002cca4) bg_ai5_widget_pane

0x4f09,	// (0x0002ccee) cell_ai5_widget_pane_g2

0x4f19,	// (0x0002ccfe) cell_ai5_widget_pane_g3

0x4f38,	// (0x0002cd1d) cell_ai5_widget_pane_g4

0x4f44,	// (0x0002cd29) cell_ai5_widget_pane_g5

0x4f50,	// (0x0002cd35) cell_ai5_widget_pane_g6

0x4f5c,	// (0x0002cd41) cell_ai5_widget_pane_g7

0x4fa4,	// (0x0002cd89) cell_ai5_widget_pane_t1_ParamLimits

0x4fa4,	// (0x0002cd89) cell_ai5_widget_pane_t1

0x4fc1,	// (0x0002cda6) cell_ai5_widget_pane_t2_ParamLimits

0x4fc1,	// (0x0002cda6) cell_ai5_widget_pane_t2

0x4fd9,	// (0x0002cdbe) cell_ai5_widget_pane_t3_ParamLimits

0x4fd9,	// (0x0002cdbe) cell_ai5_widget_pane_t3

0x4ff1,	// (0x0002cdd6) cell_ai5_widget_pane_t4_ParamLimits

0x4ff1,	// (0x0002cdd6) cell_ai5_widget_pane_t4

0x500b,	// (0x0002cdf0) cell_ai5_widget_pane_t5_ParamLimits

0x500b,	// (0x0002cdf0) cell_ai5_widget_pane_t5

0x502a,	// (0x0002ce0f) cell_ai5_widget_pane_t6_ParamLimits

0x502a,	// (0x0002ce0f) cell_ai5_widget_pane_t6

0x503c,	// (0x0002ce21) cell_ai5_widget_pane_t7_ParamLimits

0x503c,	// (0x0002ce21) cell_ai5_widget_pane_t7

0x5055,	// (0x0002ce3a) cell_ai5_widget_pane_t8_ParamLimits

0x5055,	// (0x0002ce3a) cell_ai5_widget_pane_t8

0x0009,

0xfc6c,	// (0x00037a51) cell_ai5_widget_pane_t_ParamLimits

0xfc6c,	// (0x00037a51) cell_ai5_widget_pane_t

0x50a1,	// (0x0002ce86) grid_ai5_widget_pane

0xb34d,	// (0x00033132) highlight_cell_ai5_widget_pane_ParamLimits

0xb34d,	// (0x00033132) highlight_cell_ai5_widget_pane

0xb089,	// (0x00032e6e) ai5_sk_left_pane

0xb093,	// (0x00032e78) ai5_sk_middle_pane

0xb09d,	// (0x00032e82) ai5_sk_right_pane

0x50b9,	// (0x0002ce9e) bg_ai5_widget_pane_g1_ParamLimits

0x50b9,	// (0x0002ce9e) bg_ai5_widget_pane_g1

0x50c5,	// (0x0002ceaa) bg_ai5_widget_pane_g2_ParamLimits

0x50c5,	// (0x0002ceaa) bg_ai5_widget_pane_g2

0x50d1,	// (0x0002ceb6) bg_ai5_widget_pane_g3_ParamLimits

0x50d1,	// (0x0002ceb6) bg_ai5_widget_pane_g3

0x50dd,	// (0x0002cec2) bg_ai5_widget_pane_g4_ParamLimits

0x50dd,	// (0x0002cec2) bg_ai5_widget_pane_g4

0x50e9,	// (0x0002cece) bg_ai5_widget_pane_g5_ParamLimits

0x50e9,	// (0x0002cece) bg_ai5_widget_pane_g5

0x50f5,	// (0x0002ceda) bg_ai5_widget_pane_g6_ParamLimits

0x50f5,	// (0x0002ceda) bg_ai5_widget_pane_g6

0x5101,	// (0x0002cee6) bg_ai5_widget_pane_g7_ParamLimits

0x5101,	// (0x0002cee6) bg_ai5_widget_pane_g7

0x510d,	// (0x0002cef2) bg_ai5_widget_pane_g8_ParamLimits

0x510d,	// (0x0002cef2) bg_ai5_widget_pane_g8

0x5119,	// (0x0002cefe) bg_ai5_widget_pane_g9_ParamLimits

0x5119,	// (0x0002cefe) bg_ai5_widget_pane_g9

0x0008,

0xfc81,	// (0x00037a66) bg_ai5_widget_pane_g_ParamLimits

0xfc81,	// (0x00037a66) bg_ai5_widget_pane_g

0x514c,	// (0x0002cf31) cell_shortcut_ai5_widget_pane_ParamLimits

0x514c,	// (0x0002cf31) cell_shortcut_ai5_widget_pane

0x8bc9,	// (0x000309ae) bg_cell_shortcut_ai5_widget_pane

0x515d,	// (0x0002cf42) cell_grid_ai5_widget_pane_g1

0x5166,	// (0x0002cf4b) highlight_cell_shortcut_ai5_widget_pane

0xc402,	// (0x000341e7) ai5_sk_left_pane_g1

0x516e,	// (0x0002cf53) ai5_sk_left_pane_g2

0x5176,	// (0x0002cf5b) ai5_sk_left_pane_g3

0x517e,	// (0x0002cf63) ai5_sk_left_pane_g4

0x0003,

0xfc94,	// (0x00037a79) ai5_sk_left_pane_g

0x5186,	// (0x0002cf6b) ai5_sk_left_pane_t1

0xc40a,	// (0x000341ef) ai5_sk_right_pane_g1

0x5194,	// (0x0002cf79) ai5_sk_right_pane_g2

0x519c,	// (0x0002cf81) ai5_sk_right_pane_g3

0x51a4,	// (0x0002cf89) ai5_sk_right_pane_g4

0x0003,

0xfc9d,	// (0x00037a82) ai5_sk_right_pane_g

0x51ac,	// (0x0002cf91) ai5_sk_right_pane_t1

0xc40a,	// (0x000341ef) ai5_sk_middle_pane_g1

0xc402,	// (0x000341e7) ai5_sk_middle_pane_g2

0xc422,	// (0x00034207) ai5_sk_middle_pane_g3

0x519c,	// (0x0002cf81) ai5_sk_middle_pane_g4

0x5176,	// (0x0002cf5b) ai5_sk_middle_pane_g5

0x51ba,	// (0x0002cf9f) ai5_sk_middle_pane_g6

0xb0a7,	// (0x00032e8c) ai5_sk_middle_pane_g7

0x0006,

0xfca6,	// (0x00037a8b) ai5_sk_middle_pane_g

0x7ff5,	// (0x0002fdda) aid_touch_area_size_lc0_ParamLimits

0x7ff5,	// (0x0002fdda) aid_touch_area_size_lc0

0x2fcb,	// (0x0002adb0) cell_hwr_candidate_pane_t1_ParamLimits

0xc232,	// (0x00034017) aid_touch_navi_pane

0x827b,	// (0x00030060) status_dt_navi_pane_ParamLimits

0x827b,	// (0x00030060) status_dt_navi_pane

0x8293,	// (0x00030078) status_dt_sta_pane_ParamLimits

0x8293,	// (0x00030078) status_dt_sta_pane

0xb0af,	// (0x00032e94) dt_sta_controll_pane

0xb0bc,	// (0x00032ea1) dt_sta_indi_pane

0xb0c9,	// (0x00032eae) dt_sta_title_pane

0x8cc0,	// (0x00030aa5) bg_dt_sta_indi_pane_ParamLimits

0x8cc0,	// (0x00030aa5) bg_dt_sta_indi_pane

0x51c2,	// (0x0002cfa7) dt_sta_battery_pane

0x51ca,	// (0x0002cfaf) dt_sta_indi_pane_g1

0x51d3,	// (0x0002cfb8) dt_sta_indi_pane_g2

0x51dc,	// (0x0002cfc1) dt_sta_indi_pane_g3

0x0002,

0xfcb5,	// (0x00037a9a) dt_sta_indi_pane_g

0x51e5,	// (0x0002cfca) dt_sta_signal_pane

0xb34d,	// (0x00033132) bg_dt_sta_title_pane_ParamLimits

0xb34d,	// (0x00033132) bg_dt_sta_title_pane

0x51ee,	// (0x0002cfd3) dt_sta_title_pane_g1

0x51f6,	// (0x0002cfdb) dt_sta_title_pane_t1_ParamLimits

0x51f6,	// (0x0002cfdb) dt_sta_title_pane_t1

0x8b1d,	// (0x00030902) bg_dt_sta_control_pane

0x520b,	// (0x0002cff0) dt_sta_controll_pane_g1

0x5214,	// (0x0002cff9) bg_dt_sta_title_pane_g1

0x521d,	// (0x0002d002) bg_dt_sta_title_pane_g2

0x5226,	// (0x0002d00b) bg_dt_sta_title_pane_g3

0x0002,

0xfcbc,	// (0x00037aa1) bg_dt_sta_title_pane_g

0xe2a2,	// (0x00036087) bg_dt_sta_indi_pane_g1

0x522f,	// (0x0002d014) dt_sta_signal_pane_g1

0x5237,	// (0x0002d01c) dt_sta_signal_pane_g2

0x0001,

0xfcc3,	// (0x00037aa8) dt_sta_signal_pane_g

0x523f,	// (0x0002d024) dt_sta_battery_pane_g1

0x5248,	// (0x0002d02d) dt_sta_battery_pane_t1

0xe2a2,	// (0x00036087) bg_dt_sta_control_pane_g1

0xba27,	// (0x0003380c) fep_china_uni_eep_pane

0xba2f,	// (0x00033814) fep_china_uni_entry_pane_ParamLimits

0xba3f,	// (0x00033824) popup_fep_china_uni_window_g1_ParamLimits

0xba4f,	// (0x00033834) popup_fep_china_uni_window_g2_ParamLimits

0xba4f,	// (0x00033834) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0003751a) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0003751a) popup_fep_china_uni_window_g

0x5257,	// (0x0002d03c) fep_china_uni_eep_pane_g1

0x525f,	// (0x0002d044) fep_china_uni_eep_pane_t1

0x4e71,	// (0x0002cc56) aid_touch_area_size_smil_player

0xc2e3,	// (0x000340c8) lc0_clock_pane

0xc31e,	// (0x00034103) status_pane_g5_ParamLimits

0xc31e,	// (0x00034103) status_pane_g5

0x7acc,	// (0x0002f8b1) popup_keymap_window

0xc2fc,	// (0x000340e1) status_icon_pane

0x4f19,	// (0x0002ccfe) cell_ai5_widget_pane_g3_ParamLimits

0x4f38,	// (0x0002cd1d) cell_ai5_widget_pane_g4_ParamLimits

0x4f44,	// (0x0002cd29) cell_ai5_widget_pane_g5_ParamLimits

0x4f68,	// (0x0002cd4d) cell_ai5_widget_pane_g8_ParamLimits

0x4f68,	// (0x0002cd4d) cell_ai5_widget_pane_g8

0x4f7c,	// (0x0002cd61) cell_ai5_widget_pane_g9_ParamLimits

0x4f7c,	// (0x0002cd61) cell_ai5_widget_pane_g9

0x4f90,	// (0x0002cd75) cell_ai5_widget_pane_g10_ParamLimits

0x4f90,	// (0x0002cd75) cell_ai5_widget_pane_g10

0x526e,	// (0x0002d053) status_icon_pane_g1

0x8b1d,	// (0x00030902) bg_popup_sub_pane_cp13

0x5276,	// (0x0002d05b) popup_keymap_window_t1

0x77d0,	// (0x0002f5b5) control_pane_g6_ParamLimits

0x77d0,	// (0x0002f5b5) control_pane_g6

0x77dd,	// (0x0002f5c2) control_pane_g7_ParamLimits

0x77dd,	// (0x0002f5c2) control_pane_g7

0x77ea,	// (0x0002f5cf) control_pane_g8_ParamLimits

0x77ea,	// (0x0002f5cf) control_pane_g8

0xb0af,	// (0x00032e94) dt_sta_controll_pane_ParamLimits

0xb0bc,	// (0x00032ea1) dt_sta_indi_pane_ParamLimits

0xb0c9,	// (0x00032eae) dt_sta_title_pane_ParamLimits

0x9945,	// (0x0003172a) aid_size_touch_scroll_bar_cale

0x097c,	// (0x00028761) popup_discreet_window_ParamLimits

0x097c,	// (0x00028761) popup_discreet_window

0x702b,	// (0x0002ee10) popup_sk_window

0xc9c6,	// (0x000347ab) bg_popup_sub_pane_cp28_ParamLimits

0xc9c6,	// (0x000347ab) bg_popup_sub_pane_cp28

0x5284,	// (0x0002d069) popup_discreet_window_g1_ParamLimits

0x5284,	// (0x0002d069) popup_discreet_window_g1

0x52a4,	// (0x0002d089) popup_discreet_window_t1_ParamLimits

0x52a4,	// (0x0002d089) popup_discreet_window_t1

0x52c2,	// (0x0002d0a7) popup_discreet_window_t2_ParamLimits

0x52c2,	// (0x0002d0a7) popup_discreet_window_t2

0x0002,

0xfcc8,	// (0x00037aad) popup_discreet_window_t_ParamLimits

0xfcc8,	// (0x00037aad) popup_discreet_window_t

0x4964,	// (0x0002c749) popup_sk_window_g1

0x496e,	// (0x0002c753) popup_sk_window_g2

0x0001,

0xfccf,	// (0x00037ab4) popup_sk_window_g

0x4978,	// (0x0002c75d) popup_sk_window_t1

0x4986,	// (0x0002c76b) popup_sk_window_t1_copy1

0x4f09,	// (0x0002ccee) cell_ai5_widget_pane_g2_ParamLimits

0x5067,	// (0x0002ce4c) cell_ai5_widget_pane_t9_ParamLimits

0x5067,	// (0x0002ce4c) cell_ai5_widget_pane_t9

0x8b1d,	// (0x00030902) main_fep_fshwr2_pane

0xb0db,	// (0x00032ec0) aid_fshwr2_btn_pane

0xb0e3,	// (0x00032ec8) aid_fshwr2_syb_pane

0xb0eb,	// (0x00032ed0) aid_fshwr2_txt_pane

0xb0f3,	// (0x00032ed8) fshwr2_func_candi_pane

0xb0fd,	// (0x00032ee2) fshwr2_hwr_syb_pane

0xb10b,	// (0x00032ef0) fshwr2_icf_pane

0x8b1d,	// (0x00030902) fshwr2_icf_bg_pane

0xb115,	// (0x00032efa) fshwr2_icf_pane_t1_ParamLimits

0xb115,	// (0x00032efa) fshwr2_icf_pane_t1

0xe2a2,	// (0x00036087) fshwr2_func_candi_pane_g1

0x5328,	// (0x0002d10d) fshwr2_func_candi_row_pane_ParamLimits

0x5328,	// (0x0002d10d) fshwr2_func_candi_row_pane

0xb12d,	// (0x00032f12) cell_fshwr2_syb_pane_ParamLimits

0xb12d,	// (0x00032f12) cell_fshwr2_syb_pane

0xe435,	// (0x0003621a) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe435,	// (0x0003621a) fshwr2_hwr_syb_pane_g1

0x8b1d,	// (0x00030902) bg_popup_call_pane_cp01

0x5339,	// (0x0002d11e) fshwr2_func_candi_cell_pane_ParamLimits

0x5339,	// (0x0002d11e) fshwr2_func_candi_cell_pane

0x536a,	// (0x0002d14f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x536a,	// (0x0002d14f) fshwr2_func_candi_cell_bg_pane

0x5384,	// (0x0002d169) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x5384,	// (0x0002d169) fshwr2_func_candi_cell_pane_g1

0x53ac,	// (0x0002d191) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x53ac,	// (0x0002d191) fshwr2_func_candi_cell_pane_t1

0x8b1d,	// (0x00030902) bg_button_pane_cp08

0xbe96,	// (0x00033c7b) cell_fshwr2_syb_bg_pane

0xb147,	// (0x00032f2c) cell_fshwr2_syb_bg_pane_g1

0xb14f,	// (0x00032f34) cell_fshwr2_syb_bg_pane_t1

0xb34d,	// (0x00033132) main_tmo_pane

0xd434,	// (0x00035219) uni_indicator_pane_g1_ParamLimits

0xd449,	// (0x0003522e) uni_indicator_pane_g2_ParamLimits

0xd45f,	// (0x00035244) uni_indicator_pane_g3_ParamLimits

0xd475,	// (0x0003525a) uni_indicator_pane_g4_ParamLimits

0xd475,	// (0x0003525a) uni_indicator_pane_g4

0xd489,	// (0x0003526e) uni_indicator_pane_g5_ParamLimits

0xd489,	// (0x0003526e) uni_indicator_pane_g5

0xd49d,	// (0x00035282) uni_indicator_pane_g6_ParamLimits

0xd49d,	// (0x00035282) uni_indicator_pane_g6

0x0096,	// (0x00027e7b) uni_indicator_pane_g_ParamLimits

0xa4b7,	// (0x0003229c) popup_tmo_note_window_ParamLimits

0xa4b7,	// (0x0003229c) popup_tmo_note_window

0x8b1d,	// (0x00030902) fshwr2_bg_pane

0x539d,	// (0x0002d182) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x539d,	// (0x0002d182) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfcd4,	// (0x00037ab9) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfcd4,	// (0x00037ab9) fshwr2_func_candi_cell_pane_g

0xe2a2,	// (0x00036087) bg_popup_window_pane_cp01

0x53bf,	// (0x0002d1a4) bg_popup_window_pane_g1_cp01

0x53c8,	// (0x0002d1ad) bg_popup_window_pane_cp22_ParamLimits

0x53c8,	// (0x0002d1ad) bg_popup_window_pane_cp22

0x53d6,	// (0x0002d1bb) listscroll_tmo_link_pane_ParamLimits

0x53d6,	// (0x0002d1bb) listscroll_tmo_link_pane

0x5416,	// (0x0002d1fb) popup_tmo_note_window_g1_ParamLimits

0x5416,	// (0x0002d1fb) popup_tmo_note_window_g1

0x5423,	// (0x0002d208) tmo_note_info_pane_ParamLimits

0x5423,	// (0x0002d208) tmo_note_info_pane

0xb15e,	// (0x00032f43) list_tmo_note_info_pane_g1_ParamLimits

0xb15e,	// (0x00032f43) list_tmo_note_info_pane_g1

0x543d,	// (0x0002d222) list_tmo_note_info_pane_g2_ParamLimits

0x543d,	// (0x0002d222) list_tmo_note_info_pane_g2

0x0001,

0xfcd9,	// (0x00037abe) list_tmo_note_info_pane_g_ParamLimits

0xfcd9,	// (0x00037abe) list_tmo_note_info_pane_g

0x5459,	// (0x0002d23e) list_tmo_note_info_text_pane_ParamLimits

0x5459,	// (0x0002d23e) list_tmo_note_info_text_pane

0x549b,	// (0x0002d280) list_tmo_link_pane

0x54a8,	// (0x0002d28d) scroll_pane_cp20

0x54b5,	// (0x0002d29a) list_single_tmo_link_pane_ParamLimits

0x54b5,	// (0x0002d29a) list_single_tmo_link_pane

0x54c5,	// (0x0002d2aa) list_single_tmo_link_pane_t1

0x54d3,	// (0x0002d2b8) list_tmo_note_info_text_pane_t1_ParamLimits

0x54d3,	// (0x0002d2b8) list_tmo_note_info_text_pane_t1

0x7454,	// (0x0002f239) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7454,	// (0x0002f239) aid_size_touch_scroll_bar_cp01

0x920d,	// (0x00030ff2) aid_size_touch_slider_marker

0x701b,	// (0x0002ee00) popup_settings_window_ParamLimits

0x701b,	// (0x0002ee00) popup_settings_window

0x5d48,	// (0x0002db2d) popup_candi_list_indi_window

0xc232,	// (0x00034017) aid_touch_navi_pane_ParamLimits

0x3693,	// (0x0002b478) rs_clock_indi_pane

0x369c,	// (0x0002b481) sctrl_sk_bottom_pane_ParamLimits

0x36ad,	// (0x0002b492) sctrl_sk_top_pane_ParamLimits

0x3c72,	// (0x0002ba57) popup_fep_tooltip_window

0x4eab,	// (0x0002cc90) aid_size_cell_widget_grid_ParamLimits

0x4efd,	// (0x0002cce2) cell_ai5_widget_pane_g1_ParamLimits

0x4efd,	// (0x0002cce2) cell_ai5_widget_pane_g1

0x4f50,	// (0x0002cd35) cell_ai5_widget_pane_g6_ParamLimits

0x4f5c,	// (0x0002cd41) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfc57,	// (0x00037a3c) cell_ai5_widget_pane_g_ParamLimits

0xfc57,	// (0x00037a3c) cell_ai5_widget_pane_g

0x508b,	// (0x0002ce70) cell_ai5_widget_pane_t10_ParamLimits

0x508b,	// (0x0002ce70) cell_ai5_widget_pane_t10

0x50a1,	// (0x0002ce86) grid_ai5_widget_pane_ParamLimits

0x5125,	// (0x0002cf0a) cell_contacts_ai5_widget_pane_ParamLimits

0x5125,	// (0x0002cf0a) cell_contacts_ai5_widget_pane

0x52d7,	// (0x0002d0bc) popup_discreet_window_t3_ParamLimits

0x52d7,	// (0x0002d0bc) popup_discreet_window_t3

0x5314,	// (0x0002d0f9) popup_fshwr2_char_preview_window_ParamLimits

0x5314,	// (0x0002d0f9) popup_fshwr2_char_preview_window

0xb175,	// (0x00032f5a) tmo_note_info_pane_t1

0xb18a,	// (0x00032f6f) tmo_note_info_pane_t2

0xb1a1,	// (0x00032f86) tmo_note_info_pane_t3

0x5477,	// (0x0002d25c) tmo_note_info_pane_t4

0x5489,	// (0x0002d26e) tmo_note_info_pane_t5

0x0004,

0xfcde,	// (0x00037ac3) tmo_note_info_pane_t

0x549b,	// (0x0002d280) list_tmo_link_pane_ParamLimits

0x54a8,	// (0x0002d28d) scroll_pane_cp20_ParamLimits

0x8b1d,	// (0x00030902) bg_popup_fep_char_preview_window_cp01

0x54ec,	// (0x0002d2d1) popup_fshwr2_char_preview_window_t1

0x54fa,	// (0x0002d2df) popup_candi_list_indi_window_g1

0x5503,	// (0x0002d2e8) bg_cell_contacts_ai5_widget_pane

0x550f,	// (0x0002d2f4) cell_contacts_ai5_widget_pane_g1

0x5523,	// (0x0002d308) cell_contacts_ai5_widget_pane_g2

0x5532,	// (0x0002d317) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfce9,	// (0x00037ace) cell_contacts_ai5_widget_pane_g

0x5545,	// (0x0002d32a) cell_contacts_ai5_widget_pane_t1

0xb34d,	// (0x00033132) highlight_cell_shortcut_ai5_widget_pane_cp01

0xb21b,	// (0x00033000) settings_container_pane

0xbe96,	// (0x00033c7b) listscroll_set_pane_copy1

0xdc68,	// (0x00035a4d) scroll_pane_cp121_copy1

0x5557,	// (0x0002d33c) set_content_pane_copy1

0xb227,	// (0x0003300c) aid_height_set_list_copy1_ParamLimits

0xb227,	// (0x0003300c) aid_height_set_list_copy1

0xc9d4,	// (0x000347b9) aid_size_parent_copy1_ParamLimits

0xc9d4,	// (0x000347b9) aid_size_parent_copy1

0xb233,	// (0x00033018) button_value_adjust_pane_cp6_copy1_ParamLimits

0xb233,	// (0x00033018) button_value_adjust_pane_cp6_copy1

0xb4a5,	// (0x0003328a) list_highlight_pane_cp2_copy1_ParamLimits

0xb4a5,	// (0x0003328a) list_highlight_pane_cp2_copy1

0xb247,	// (0x0003302c) list_set_pane_copy1_ParamLimits

0xb247,	// (0x0003302c) list_set_pane_copy1

0xb1b6,	// (0x00032f9b) main_pane_set_t1_copy1_ParamLimits

0xb1b6,	// (0x00032f9b) main_pane_set_t1_copy1

0xb1f0,	// (0x00032fd5) main_pane_set_t2_copy1_ParamLimits

0xb1f0,	// (0x00032fd5) main_pane_set_t2_copy1

0xb50d,	// (0x000332f2) main_pane_set_t3_copy1

0xb51b,	// (0x00033300) main_pane_set_t4_copy1

0xb20f,	// (0x00032ff4) set_content_pane_g1_copy1_ParamLimits

0xb20f,	// (0x00032ff4) set_content_pane_g1_copy1

0xb529,	// (0x0003330e) setting_code_pane_copy1

0x555f,	// (0x0002d344) setting_slider_graphic_pane_copy1

0x555f,	// (0x0002d344) setting_slider_pane_copy1

0x555f,	// (0x0002d344) setting_text_pane_copy1

0x5569,	// (0x0002d34e) setting_volume_pane_copy1

0xb533,	// (0x00033318) settings_code_pane_cp2_copy1

0xb53b,	// (0x00033320) settings_code_pane_cp_copy1_ParamLimits

0xb53b,	// (0x00033320) settings_code_pane_cp_copy1

0xb54f,	// (0x00033334) volume_set_pane_copy1

0xb557,	// (0x0003333c) volume_set_pane_g10_copy1

0xb55f,	// (0x00033344) volume_set_pane_g1_copy1

0xb567,	// (0x0003334c) volume_set_pane_g2_copy1

0xb56f,	// (0x00033354) volume_set_pane_g3_copy1

0xb577,	// (0x0003335c) volume_set_pane_g4_copy1

0xb57f,	// (0x00033364) volume_set_pane_g5_copy1

0xb587,	// (0x0003336c) volume_set_pane_g6_copy1

0xb58f,	// (0x00033374) volume_set_pane_g7_copy1

0xb597,	// (0x0003337c) volume_set_pane_g8_copy1

0xb59f,	// (0x00033384) volume_set_pane_g9_copy1

0x8b8d,	// (0x00030972) bg_set_opt_pane_cp_copy1_ParamLimits

0x8b8d,	// (0x00030972) bg_set_opt_pane_cp_copy1

0x5572,	// (0x0002d357) setting_slider_pane_t1_copy1_ParamLimits

0x5572,	// (0x0002d357) setting_slider_pane_t1_copy1

0xb5a7,	// (0x0003338c) setting_slider_pane_t2_copy1_ParamLimits

0xb5a7,	// (0x0003338c) setting_slider_pane_t2_copy1

0xb5c1,	// (0x000333a6) setting_slider_pane_t3_copy1_ParamLimits

0xb5c1,	// (0x000333a6) setting_slider_pane_t3_copy1

0xb5d9,	// (0x000333be) slider_set_pane_copy1_ParamLimits

0xb5d9,	// (0x000333be) slider_set_pane_copy1

0xb3b4,	// (0x00033199) set_opt_bg_pane_g1_copy2

0xb3bc,	// (0x000331a1) set_opt_bg_pane_g2_copy2

0x5590,	// (0x0002d375) set_opt_bg_pane_g3_copy2

0xb3cc,	// (0x000331b1) set_opt_bg_pane_g4_copy2

0xb3d4,	// (0x000331b9) set_opt_bg_pane_g5_copy2

0xb3dc,	// (0x000331c1) set_opt_bg_pane_g6_copy2

0xb5ef,	// (0x000333d4) set_opt_bg_pane_g7_copy2

0x559a,	// (0x0002d37f) set_opt_bg_pane_g8_copy2

0x55a4,	// (0x0002d389) set_opt_bg_pane_g9_copy2

0x4994,	// (0x0002c779) aid_size_touch_slider_mark_copy1_ParamLimits

0x4994,	// (0x0002c779) aid_size_touch_slider_mark_copy1

0x55ae,	// (0x0002d393) slider_set_pane_g1_copy1

0x49a8,	// (0x0002c78d) slider_set_pane_g2_copy1

0x245d,	// (0x0002a242) slider_set_pane_g3_copy1_ParamLimits

0x245d,	// (0x0002a242) slider_set_pane_g3_copy1

0x2471,	// (0x0002a256) slider_set_pane_g4_copy1_ParamLimits

0x2471,	// (0x0002a256) slider_set_pane_g4_copy1

0x2489,	// (0x0002a26e) slider_set_pane_g5_copy1_ParamLimits

0x2489,	// (0x0002a26e) slider_set_pane_g5_copy1

0x245d,	// (0x0002a242) slider_set_pane_g6_copy1_ParamLimits

0x245d,	// (0x0002a242) slider_set_pane_g6_copy1

0x8aff,	// (0x000308e4) slider_set_pane_g7_copy1_ParamLimits

0x8aff,	// (0x000308e4) slider_set_pane_g7_copy1

0x8b31,	// (0x00030916) bg_set_opt_pane_cp2_copy1

0x55b7,	// (0x0002d39c) setting_slider_graphic_pane_g1_copy1

0xb5f7,	// (0x000333dc) setting_slider_graphic_pane_t1_copy1

0xb607,	// (0x000333ec) setting_slider_graphic_pane_t2_copy1

0xb617,	// (0x000333fc) slider_set_pane_cp_copy1

0x55c8,	// (0x0002d3ad) input_focus_pane_cp1_copy1

0x55d1,	// (0x0002d3b6) list_set_text_pane_copy1

0x55d9,	// (0x0002d3be) setting_text_pane_g1_copy1

0x95f4,	// (0x000313d9) set_text_pane_t1_copy1

0x55c8,	// (0x0002d3ad) input_focus_pane_cp2_copy1

0x55d9,	// (0x0002d3be) setting_code_pane_g1_copy1

0xb61f,	// (0x00033404) setting_code_pane_t1_copy1

0x7442,	// (0x0002f227) list_set_graphic_pane_copy1

0x8b31,	// (0x00030916) bg_set_opt_pane_cp4_copy1

0x7699,	// (0x0002f47e) list_set_graphic_pane_g1_copy1_ParamLimits

0x7699,	// (0x0002f47e) list_set_graphic_pane_g1_copy1

0xb62d,	// (0x00033412) list_set_graphic_pane_g2_copy1

0x76b1,	// (0x0002f496) list_set_graphic_pane_t1_copy1_ParamLimits

0x76b1,	// (0x0002f496) list_set_graphic_pane_t1_copy1

0xe2a2,	// (0x00036087) rs_clock_indi_pane_g1

0x55e2,	// (0x0002d3c7) rs_clock_indi_pane_t1

0x55f0,	// (0x0002d3d5) rs_indi_pane

0x55f8,	// (0x0002d3dd) rs_indi_pane_g1

0x5601,	// (0x0002d3e6) rs_indi_pane_g2

0x560a,	// (0x0002d3ef) rs_indi_pane_g3

0x0002,

0xfcf0,	// (0x00037ad5) rs_indi_pane_g

0xbe96,	// (0x00033c7b) bg_popup_preview_window_pane_cp03

0x5613,	// (0x0002d3f8) popup_fep_tooltip_window_t1

0xeb8b,	// (0x00036970) popup_note2_window_g2_ParamLimits

0xeb8b,	// (0x00036970) popup_note2_window_g2

0x0001,

0x03d6,	// (0x000281bb) popup_note2_window_g_ParamLimits

0x03d6,	// (0x000281bb) popup_note2_window_g

0xf012,	// (0x00036df7) bg_popup_sub_pane_cp11_ParamLimits

0xf01f,	// (0x00036e04) cell_ai3_links_pane_g1_ParamLimits

0xf036,	// (0x00036e1b) cell_ai3_links_pane_t1

0x95f4,	// (0x000313d9) set_text_pane_t1_copy1_ParamLimits

0xbda7,	// (0x00033b8c) cell_graphic_popup_pane_cp2_ParamLimits

0xbda7,	// (0x00033b8c) cell_graphic_popup_pane_cp2

0x5621,	// (0x0002d406) cell_graphic_popup_pane_g1_cp2

0x9758,	// (0x0003153d) cell_graphic_popup_pane_g2_cp2

0x5629,	// (0x0002d40e) cell_graphic_popup_pane_g3_cp2

0x5631,	// (0x0002d416) cell_graphic_popup_pane_t2_cp2

0x9769,	// (0x0003154e) grid_highlight_pane_cp3_cp2

0xb780,	// (0x00033565) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb34d,	// (0x00033132) main_tmo_pane_ParamLimits

0xa4ab,	// (0x00032290) popup_tmo_big_image_note_window

0x4eed,	// (0x0002ccd2) cell_ai5_widget_list_pane

0x4ef5,	// (0x0002ccda) cell_ai5_widget_lrg_icon_pane

0xb175,	// (0x00032f5a) tmo_note_info_pane_t1_ParamLimits

0xb18a,	// (0x00032f6f) tmo_note_info_pane_t2_ParamLimits

0xb1a1,	// (0x00032f86) tmo_note_info_pane_t3_ParamLimits

0x5477,	// (0x0002d25c) tmo_note_info_pane_t4_ParamLimits

0x5489,	// (0x0002d26e) tmo_note_info_pane_t5_ParamLimits

0xfcde,	// (0x00037ac3) tmo_note_info_pane_t_ParamLimits

0xb21b,	// (0x00033000) settings_container_pane_ParamLimits

0x55c0,	// (0x0002d3a5) indicator_popup_pane_cp5

0x55c0,	// (0x0002d3a5) indicator_popup_pane_cp6

0x7442,	// (0x0002f227) list_set_graphic_pane_copy1_ParamLimits

0x8b1d,	// (0x00030902) bg_popup_window_pane_cp23

0x563f,	// (0x0002d424) popup_tmo_big_image_note_window_g1

0x5649,	// (0x0002d42e) popup_tmo_big_image_note_window_t1

0x5659,	// (0x0002d43e) popup_tmo_big_image_note_window_t2

0x5669,	// (0x0002d44e) popup_tmo_big_image_note_window_t3

0x0002,

0xfcf7,	// (0x00037adc) popup_tmo_big_image_note_window_t

0x5679,	// (0x0002d45e) cell_ai5_widget_lrg_icon_pane_g1

0x5681,	// (0x0002d466) cell_ai5_widget_lrg_icon_pane_t1

0x568f,	// (0x0002d474) cell_ai5_widget_list_row_pane_ParamLimits

0x568f,	// (0x0002d474) cell_ai5_widget_list_row_pane

0x56a8,	// (0x0002d48d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x56a8,	// (0x0002d48d) cell_ai5_widget_list_row_pane_g1

0x56b5,	// (0x0002d49a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x56b5,	// (0x0002d49a) cell_ai5_widget_list_row_pane_t1

0x56cd,	// (0x0002d4b2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x56cd,	// (0x0002d4b2) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfcfe,	// (0x00037ae3) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfcfe,	// (0x00037ae3) cell_ai5_widget_list_row_pane_t

0x08a3,	// (0x00028688) main_fep_vtchi_ss_pane

0x56df,	// (0x0002d4c4) popup_fep_char_pre_window

0x56e7,	// (0x0002d4cc) popup_fep_ituss_window

0x5701,	// (0x0002d4e6) popup_fep_vkbss_window

0x571f,	// (0x0002d504) grid_vkbss_keypad_pane_ParamLimits

0x571f,	// (0x0002d504) grid_vkbss_keypad_pane

0x572f,	// (0x0002d514) ituss_keypad_pane

0x5745,	// (0x0002d52a) aid_vkbss_key_offset_ParamLimits

0x5745,	// (0x0002d52a) aid_vkbss_key_offset

0x5751,	// (0x0002d536) cell_vkbss_key_pane_ParamLimits

0x5751,	// (0x0002d536) cell_vkbss_key_pane

0x5767,	// (0x0002d54c) bg_cell_vkbss_key_g1_ParamLimits

0x5767,	// (0x0002d54c) bg_cell_vkbss_key_g1

0x5773,	// (0x0002d558) cell_vkbss_key_3p_pane_ParamLimits

0x5773,	// (0x0002d558) cell_vkbss_key_3p_pane

0x578d,	// (0x0002d572) cell_vkbss_key_g1_ParamLimits

0x578d,	// (0x0002d572) cell_vkbss_key_g1

0x57a7,	// (0x0002d58c) cell_vkbss_key_t1_ParamLimits

0x57a7,	// (0x0002d58c) cell_vkbss_key_t1

0x57d2,	// (0x0002d5b7) cell_ituss_key_pane_ParamLimits

0x57d2,	// (0x0002d5b7) cell_ituss_key_pane

0x57e2,	// (0x0002d5c7) bg_cell_ituss_key_g1_ParamLimits

0x57e2,	// (0x0002d5c7) bg_cell_ituss_key_g1

0x57ee,	// (0x0002d5d3) cell_ituss_key_pane_g1_ParamLimits

0x57ee,	// (0x0002d5d3) cell_ituss_key_pane_g1

0x57fa,	// (0x0002d5df) cell_ituss_key_pane_g2_ParamLimits

0x57fa,	// (0x0002d5df) cell_ituss_key_pane_g2

0x0001,

0xfd03,	// (0x00037ae8) cell_ituss_key_pane_g_ParamLimits

0xfd03,	// (0x00037ae8) cell_ituss_key_pane_g

0x5813,	// (0x0002d5f8) cell_ituss_key_t1_ParamLimits

0x5813,	// (0x0002d5f8) cell_ituss_key_t1

0x5841,	// (0x0002d626) cell_ituss_key_t2_ParamLimits

0x5841,	// (0x0002d626) cell_ituss_key_t2

0x5872,	// (0x0002d657) cell_ituss_key_t3_ParamLimits

0x5872,	// (0x0002d657) cell_ituss_key_t3

0x58a3,	// (0x0002d688) cell_ituss_key_t4_ParamLimits

0x58a3,	// (0x0002d688) cell_ituss_key_t4

0x0003,

0xfd08,	// (0x00037aed) cell_ituss_key_t_ParamLimits

0xfd08,	// (0x00037aed) cell_ituss_key_t

0x58d4,	// (0x0002d6b9) cell_vkbss_key_3p_pane_g1

0x58dc,	// (0x0002d6c1) cell_vkbss_key_3p_pane_g2

0x58e4,	// (0x0002d6c9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfd11,	// (0x00037af6) cell_vkbss_key_3p_pane_g

0x8b1d,	// (0x00030902) bg_popup_fep_char_preview_window_cp02

0x58ec,	// (0x0002d6d1) popup_fep_char_pre_window_t1

0xb07f,	// (0x00032e64) main_ai5_sk_pane

0x5503,	// (0x0002d2e8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x550f,	// (0x0002d2f4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5523,	// (0x0002d308) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x5532,	// (0x0002d317) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfce9,	// (0x00037ace) cell_contacts_ai5_widget_pane_g_ParamLimits

0x5545,	// (0x0002d32a) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb34d,	// (0x00033132) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb635,	// (0x0003341a) main_ai5_sk_pane_g1

0xc7ff,	// (0x000345e4) popup_query_code_window_g1

0x56f6,	// (0x0002d4db) popup_fep_vkb_icf_pane

0x570a,	// (0x0002d4ef) popup_fep_vtchi_icf_pane

0xb34d,	// (0x00033132) bg_icf_pane

0x572f,	// (0x0002d514) list_vkb_icf_pane

0xb34d,	// (0x00033132) bg_icf_pane_cp01

0x5916,	// (0x0002d6fb) vtchi_icf_list_pane

0x5926,	// (0x0002d70b) list_vkb_icf_pane_t1_ParamLimits

0x5926,	// (0x0002d70b) list_vkb_icf_pane_t1

0x593d,	// (0x0002d722) vtchi_icf_list_pane_t1_ParamLimits

0x593d,	// (0x0002d722) vtchi_icf_list_pane_t1

0x56e7,	// (0x0002d4cc) popup_fep_ituss_window_ParamLimits

0x570a,	// (0x0002d4ef) popup_fep_vtchi_icf_pane_ParamLimits

0x572f,	// (0x0002d514) ituss_keypad_pane_ParamLimits

0x573b,	// (0x0002d520) ituss_sks_pane

0xb34d,	// (0x00033132) bg_icf_pane_ParamLimits

0x58fb,	// (0x0002d6e0) icf_edit_indi_pane_ParamLimits

0x58fb,	// (0x0002d6e0) icf_edit_indi_pane

0x572f,	// (0x0002d514) list_vkb_icf_pane_ParamLimits

0xb34d,	// (0x00033132) bg_icf_pane_cp01_ParamLimits

0x590a,	// (0x0002d6ef) icf_edit_indi_pane_cp01_ParamLimits

0x590a,	// (0x0002d6ef) icf_edit_indi_pane_cp01

0x591e,	// (0x0002d703) vtchi_query_pane

0xe435,	// (0x0003621a) icf_edit_indi_pane_g1_ParamLimits

0xe435,	// (0x0003621a) icf_edit_indi_pane_g1

0x5959,	// (0x0002d73e) icf_edit_indi_pane_g2_ParamLimits

0x5959,	// (0x0002d73e) icf_edit_indi_pane_g2

0x0001,

0xfd18,	// (0x00037afd) icf_edit_indi_pane_g_ParamLimits

0xfd18,	// (0x00037afd) icf_edit_indi_pane_g

0x5965,	// (0x0002d74a) icf_edit_indi_pane_t1

0x5973,	// (0x0002d758) bg_input_focus_pane_cp042

0x993c,	// (0x00031721) vtchi_button_pane

0x597c,	// (0x0002d761) vtchi_query_pane_t1

0x598a,	// (0x0002d76f) vtchi_query_pane_t2

0x5998,	// (0x0002d77d) vtchi_query_pane_t3

0x0002,

0xfd1d,	// (0x00037b02) vtchi_query_pane_t

0x8b1d,	// (0x00030902) bg_button_pane_cp13

0x59a6,	// (0x0002d78b) vtchi_button_pane_g1

0x59ae,	// (0x0002d793) ituss_sks_pane_g1

0x59b9,	// (0x0002d79e) ituss_sks_pane_g2

0x0001,

0xfd24,	// (0x00037b09) ituss_sks_pane_g

0x59c1,	// (0x0002d7a6) ituss_sks_pane_t1

0x59cf,	// (0x0002d7b4) ituss_sks_pane_t2

0x0001,

0xfd29,	// (0x00037b0e) ituss_sks_pane_t

0xdf4d,	// (0x00035d32) indicator_nsta_pane_cp_g1

0xdf56,	// (0x00035d3b) indicator_nsta_pane_cp_g2

0xdf5e,	// (0x00035d43) indicator_nsta_pane_cp_g3

0xdf66,	// (0x00035d4b) indicator_nsta_pane_cp_g4

0xdf6e,	// (0x00035d53) indicator_nsta_pane_cp_g5

0xdf76,	// (0x00035d5b) indicator_nsta_pane_cp_g6

0x0005,

0x0220,	// (0x00028005) indicator_nsta_pane_cp_g

0xae91,	// (0x00032c76) cell_graphic2_pane_t2_ParamLimits

0xae91,	// (0x00032c76) cell_graphic2_pane_t2

0x0001,

0xfbe0,	// (0x000379c5) cell_graphic2_pane_t_ParamLimits

0xfbe0,	// (0x000379c5) cell_graphic2_pane_t

0xaec7,	// (0x00032cac) cell_graphic2_control_pane_t1

0x7637,	// (0x0002f41c) signal_pane_g3_ParamLimits

0x7637,	// (0x0002f41c) signal_pane_g3

0x764b,	// (0x0002f430) signal_pane_g4_ParamLimits

0x764b,	// (0x0002f430) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

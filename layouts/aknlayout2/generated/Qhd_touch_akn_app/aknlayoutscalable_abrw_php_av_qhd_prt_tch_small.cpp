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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002a6a5 };

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
0x7e2e,	// (0x000324d3) Screen

0x7e42,	// (0x000324e7) application_window_ParamLimits

0x7e42,	// (0x000324e7) application_window

0x7e5c,	// (0x00032501) screen_g1

0x48dc,	// (0x0002ef81) area_bottom_pane_ParamLimits

0x48dc,	// (0x0002ef81) area_bottom_pane

0x499c,	// (0x0002f041) area_top_pane_ParamLimits

0x499c,	// (0x0002f041) area_top_pane

0x4a3a,	// (0x0002f0df) main_pane_ParamLimits

0x4a3a,	// (0x0002f0df) main_pane

0x7e66,	// (0x0003250b) misc_graphics

0x9831,	// (0x00033ed6) battery_pane_ParamLimits

0x9831,	// (0x00033ed6) battery_pane

0xa4f9,	// (0x00034b9e) bg_status_flat_pane_g8

0xa501,	// (0x00034ba6) bg_status_flat_pane_g9

0x98f3,	// (0x00033f98) context_pane_ParamLimits

0x98f3,	// (0x00033f98) context_pane

0x9a09,	// (0x000340ae) navi_pane_ParamLimits

0x9a09,	// (0x000340ae) navi_pane

0x9a8d,	// (0x00034132) signal_pane_ParamLimits

0x9a8d,	// (0x00034132) signal_pane

0x0008,

0xf879,	// (0x00039f1e) bg_status_flat_pane_g

0x9afa,	// (0x0003419f) status_pane_g1_ParamLimits

0x9afa,	// (0x0003419f) status_pane_g1

0x9b0e,	// (0x000341b3) status_pane_g2_ParamLimits

0x9b0e,	// (0x000341b3) status_pane_g2

0x9b1a,	// (0x000341bf) status_pane_g3_ParamLimits

0x9b1a,	// (0x000341bf) status_pane_g3

0x0004,

0xf7a0,	// (0x00039e45) status_pane_g_ParamLimits

0xf7a0,	// (0x00039e45) status_pane_g

0x9b4e,	// (0x000341f3) title_pane_ParamLimits

0x9b4e,	// (0x000341f3) title_pane

0x9b8b,	// (0x00034230) uni_indicator_pane_ParamLimits

0x9b8b,	// (0x00034230) uni_indicator_pane

0x9750,	// (0x00033df5) bg_list_pane_ParamLimits

0x9750,	// (0x00033df5) bg_list_pane

0x74be,	// (0x00031b63) find_pane

0x9770,	// (0x00033e15) listscroll_app_pane_ParamLimits

0x9770,	// (0x00033e15) listscroll_app_pane

0x9781,	// (0x00033e26) listscroll_form_pane

0x4812,	// (0x0002eeb7) listscroll_gen_pane_ParamLimits

0x4812,	// (0x0002eeb7) listscroll_gen_pane

0x5a2a,	// (0x000300cf) listscroll_set_pane

0x8996,	// (0x0003303b) main_idle_act_pane

0x944c,	// (0x00033af1) main_idle_trad_pane

0x944c,	// (0x00033af1) main_list_empty_pane

0x979b,	// (0x00033e40) main_midp_pane

0x97a7,	// (0x00033e4c) main_pane_g1_ParamLimits

0x97a7,	// (0x00033e4c) main_pane_g1

0x5a40,	// (0x000300e5) popup_ai_message_window_ParamLimits

0x5a40,	// (0x000300e5) popup_ai_message_window

0x5ae6,	// (0x0003018b) popup_fep_china_uni_window_ParamLimits

0x5ae6,	// (0x0003018b) popup_fep_china_uni_window

0x5b42,	// (0x000301e7) popup_fep_japan_candidate_window_ParamLimits

0x5b42,	// (0x000301e7) popup_fep_japan_candidate_window

0x5b62,	// (0x00030207) popup_fep_japan_predictive_window_ParamLimits

0x5b62,	// (0x00030207) popup_fep_japan_predictive_window

0x5b92,	// (0x00030237) popup_find_window

0x5b9f,	// (0x00030244) popup_grid_graphic_window_ParamLimits

0x5b9f,	// (0x00030244) popup_grid_graphic_window

0x5bc9,	// (0x0003026e) popup_large_graphic_colour_window

0x5bef,	// (0x00030294) popup_menu_window_ParamLimits

0x5bef,	// (0x00030294) popup_menu_window

0x5da7,	// (0x0003044c) popup_note_image_window

0x5d93,	// (0x00030438) popup_note_wait_window_ParamLimits

0x5d93,	// (0x00030438) popup_note_wait_window

0x5d93,	// (0x00030438) popup_note_window_ParamLimits

0x5d93,	// (0x00030438) popup_note_window

0x5dfd,	// (0x000304a2) popup_query_code_window_ParamLimits

0x5dfd,	// (0x000304a2) popup_query_code_window

0x5e11,	// (0x000304b6) popup_query_data_code_window_ParamLimits

0x5e11,	// (0x000304b6) popup_query_data_code_window

0x5e2e,	// (0x000304d3) popup_query_data_window_ParamLimits

0x5e2e,	// (0x000304d3) popup_query_data_window

0x5e4a,	// (0x000304ef) popup_query_sat_info_window_ParamLimits

0x5e4a,	// (0x000304ef) popup_query_sat_info_window

0x5e83,	// (0x00030528) popup_snote_single_graphic_window_ParamLimits

0x5e83,	// (0x00030528) popup_snote_single_graphic_window

0x5e83,	// (0x00030528) popup_snote_single_text_window_ParamLimits

0x5e83,	// (0x00030528) popup_snote_single_text_window

0x5e98,	// (0x0003053d) popup_sub_window_general

0x5fc8,	// (0x0003066d) popup_window_general_ParamLimits

0x5fc8,	// (0x0003066d) popup_window_general

0x97b5,	// (0x00033e5a) power_save_pane

0x58bc,	// (0x0002ff61) control_pane_g1_ParamLimits

0x58bc,	// (0x0002ff61) control_pane_g1

0x58e3,	// (0x0002ff88) control_pane_g2_ParamLimits

0x58e3,	// (0x0002ff88) control_pane_g2

0x9713,	// (0x00033db8) control_pane_g3_ParamLimits

0x9713,	// (0x00033db8) control_pane_g3

0x0007,

0xf788,	// (0x00039e2d) control_pane_g_ParamLimits

0xf788,	// (0x00039e2d) control_pane_g

0x592d,	// (0x0002ffd2) control_pane_t1_ParamLimits

0x592d,	// (0x0002ffd2) control_pane_t1

0x5981,	// (0x00030026) control_pane_t2_ParamLimits

0x5981,	// (0x00030026) control_pane_t2

0x0002,

0xf799,	// (0x00039e3e) control_pane_t_ParamLimits

0xf799,	// (0x00039e3e) control_pane_t

0x9638,	// (0x00033cdd) navi_navi_volume_pane_cp1

0x9640,	// (0x00033ce5) status_small_icon_pane

0x9648,	// (0x00033ced) status_small_pane_g1_ParamLimits

0x9648,	// (0x00033ced) status_small_pane_g1

0x967c,	// (0x00033d21) status_small_pane_g2_ParamLimits

0x967c,	// (0x00033d21) status_small_pane_g2

0x9688,	// (0x00033d2d) status_small_pane_g3_ParamLimits

0x9688,	// (0x00033d2d) status_small_pane_g3

0x9694,	// (0x00033d39) status_small_pane_g4_ParamLimits

0x9694,	// (0x00033d39) status_small_pane_g4

0x96a0,	// (0x00033d45) status_small_pane_g5_ParamLimits

0x96a0,	// (0x00033d45) status_small_pane_g5

0x96ae,	// (0x00033d53) status_small_pane_g6_ParamLimits

0x96ae,	// (0x00033d53) status_small_pane_g6

0x0007,

0xf777,	// (0x00039e1c) status_small_pane_g_ParamLimits

0xf777,	// (0x00039e1c) status_small_pane_g

0x96dd,	// (0x00033d82) status_small_pane_t1

0x96ff,	// (0x00033da4) status_small_wait_pane_ParamLimits

0x96ff,	// (0x00033da4) status_small_wait_pane

0x8ebe,	// (0x00033563) aid_levels_signal_ParamLimits

0x8ebe,	// (0x00033563) aid_levels_signal

0x8ed0,	// (0x00033575) signal_pane_g1_ParamLimits

0x8ed0,	// (0x00033575) signal_pane_g1

0x8ee5,	// (0x0003358a) signal_pane_g2_ParamLimits

0x8ee5,	// (0x0003358a) signal_pane_g2

0x0003,

0xf708,	// (0x00039dad) signal_pane_g_ParamLimits

0xf708,	// (0x00039dad) signal_pane_g

0x8f20,	// (0x000335c5) context_pane_g1

0x7e70,	// (0x00032515) title_pane_g1

0x7ea6,	// (0x0003254b) title_pane_t1

0x7f0e,	// (0x000325b3) title_pane_t2

0x7f34,	// (0x000325d9) title_pane_t3

0x0002,

0xf557,	// (0x00039bfc) title_pane_t

0x9ba3,	// (0x00034248) aid_levels_battery_ParamLimits

0x9ba3,	// (0x00034248) aid_levels_battery

0x9bb7,	// (0x0003425c) battery_pane_g1_ParamLimits

0x9bb7,	// (0x0003425c) battery_pane_g1

0x9bcd,	// (0x00034272) battery_pane_g2_ParamLimits

0x9bcd,	// (0x00034272) battery_pane_g2

0x0001,

0xf7ab,	// (0x00039e50) battery_pane_g_ParamLimits

0xf7ab,	// (0x00039e50) battery_pane_g

0xae3b,	// (0x000354e0) uni_indicator_pane_g1

0xae51,	// (0x000354f6) uni_indicator_pane_g2

0xae67,	// (0x0003550c) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x00039fc6) uni_indicator_pane_g

0x92be,	// (0x00033963) navi_icon_pane_ParamLimits

0x92be,	// (0x00033963) navi_icon_pane

0x91fc,	// (0x000338a1) navi_midp_pane

0x92da,	// (0x0003397f) navi_navi_pane

0x92e4,	// (0x00033989) navi_text_pane_ParamLimits

0x92e4,	// (0x00033989) navi_text_pane

0x7e5c,	// (0x00032501) status_small_wait_pane_g1

0x8363,	// (0x00032a08) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00039fc1) status_small_wait_pane_g

0xab60,	// (0x00035205) navi_navi_icon_text_pane

0xab68,	// (0x0003520d) navi_navi_pane_g1_ParamLimits

0xab68,	// (0x0003520d) navi_navi_pane_g1

0xab7a,	// (0x0003521f) navi_navi_pane_g2_ParamLimits

0xab7a,	// (0x0003521f) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00039f8f) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00039f8f) navi_navi_pane_g

0xab8c,	// (0x00035231) navi_navi_tabs_pane

0xab95,	// (0x0003523a) navi_navi_text_pane

0xab60,	// (0x00035205) navi_navi_volume_pane

0xab3c,	// (0x000351e1) navi_text_pane_t1

0xab30,	// (0x000351d5) navi_icon_pane_g1

0xaa83,	// (0x00035128) navi_navi_text_pane_t1

0x6274,	// (0x00030919) navi_navi_volume_pane_g1

0x627c,	// (0x00030921) volume_small_pane

0xa9e9,	// (0x0003508e) navi_navi_icon_text_pane_g1

0xa9f1,	// (0x00035096) navi_navi_icon_text_pane_t1

0x92da,	// (0x0003397f) navi_tabs_2_long_pane

0x92da,	// (0x0003397f) navi_tabs_2_pane

0x92da,	// (0x0003397f) navi_tabs_3_long_pane

0x92da,	// (0x0003397f) navi_tabs_3_pane

0x92da,	// (0x0003397f) navi_tabs_4_pane

0x6254,	// (0x000308f9) tabs_2_active_pane_ParamLimits

0x6254,	// (0x000308f9) tabs_2_active_pane

0x6264,	// (0x00030909) tabs_2_passive_pane_ParamLimits

0x6264,	// (0x00030909) tabs_2_passive_pane

0x6222,	// (0x000308c7) tabs_3_active_pane_ParamLimits

0x6222,	// (0x000308c7) tabs_3_active_pane

0x6232,	// (0x000308d7) tabs_3_passive_pane_ParamLimits

0x6232,	// (0x000308d7) tabs_3_passive_pane

0x6243,	// (0x000308e8) tabs_3_passive_pane_cp_ParamLimits

0x6243,	// (0x000308e8) tabs_3_passive_pane_cp

0x61de,	// (0x00030883) tabs_4_active_pane_ParamLimits

0x61de,	// (0x00030883) tabs_4_active_pane

0x61ef,	// (0x00030894) tabs_4_passive_pane_ParamLimits

0x61ef,	// (0x00030894) tabs_4_passive_pane

0x6200,	// (0x000308a5) tabs_4_passive_pane_cp_ParamLimits

0x6200,	// (0x000308a5) tabs_4_passive_pane_cp

0x6211,	// (0x000308b6) tabs_4_passive_pane_cp2_ParamLimits

0x6211,	// (0x000308b6) tabs_4_passive_pane_cp2

0x61ba,	// (0x0003085f) tabs_2_long_active_pane_ParamLimits

0x61ba,	// (0x0003085f) tabs_2_long_active_pane

0x61cc,	// (0x00030871) tabs_2_long_passive_pane_ParamLimits

0x61cc,	// (0x00030871) tabs_2_long_passive_pane

0x617b,	// (0x00030820) tabs_3_long_active_pane_ParamLimits

0x617b,	// (0x00030820) tabs_3_long_active_pane

0x618e,	// (0x00030833) tabs_3_long_passive_pane_ParamLimits

0x618e,	// (0x00030833) tabs_3_long_passive_pane

0x61a7,	// (0x0003084c) tabs_3_long_passive_pane_cp_ParamLimits

0x61a7,	// (0x0003084c) tabs_3_long_passive_pane_cp

0x6121,	// (0x000307c6) volume_small_pane_g1

0x612a,	// (0x000307cf) volume_small_pane_g2

0x6133,	// (0x000307d8) volume_small_pane_g3

0x613c,	// (0x000307e1) volume_small_pane_g4

0x6145,	// (0x000307ea) volume_small_pane_g5

0x614e,	// (0x000307f3) volume_small_pane_g6

0x6157,	// (0x000307fc) volume_small_pane_g7

0x6160,	// (0x00030805) volume_small_pane_g8

0x6169,	// (0x0003080e) volume_small_pane_g9

0x6172,	// (0x00030817) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00039f5b) volume_small_pane_g

0x7f46,	// (0x000325eb) bg_active_tab_pane_cp2_ParamLimits

0x7f46,	// (0x000325eb) bg_active_tab_pane_cp2

0x7f54,	// (0x000325f9) tabs_3_active_pane_g1

0x7f5c,	// (0x00032601) tabs_3_active_pane_t1

0x7f46,	// (0x000325eb) bg_passive_tab_pane_cp2_ParamLimits

0x7f46,	// (0x000325eb) bg_passive_tab_pane_cp2

0x7f54,	// (0x000325f9) tabs_3_passive_pane_g1

0x7f5c,	// (0x00032601) tabs_3_passive_pane_t1

0x7f46,	// (0x000325eb) bg_active_tab_pane_cp3_ParamLimits

0x7f46,	// (0x000325eb) bg_active_tab_pane_cp3

0x7f6e,	// (0x00032613) tabs_4_active_pane_g1

0x7f76,	// (0x0003261b) tabs_4_active_pane_t1

0x7f46,	// (0x000325eb) bg_passive_tab_pane_cp3_ParamLimits

0x7f46,	// (0x000325eb) bg_passive_tab_pane_cp3

0x7f6e,	// (0x00032613) tabs_4_1_passive_pane_g1

0x7f76,	// (0x0003261b) tabs_4_1_passive_pane_t1

0x979b,	// (0x00033e40) list_highlight_pane_cp2

0xb0ae,	// (0x00035753) list_set_pane_ParamLimits

0xb0ae,	// (0x00035753) list_set_pane

0xb154,	// (0x000357f9) main_pane_set_t1_ParamLimits

0xb154,	// (0x000357f9) main_pane_set_t1

0xb174,	// (0x00035819) main_pane_set_t2_ParamLimits

0xb174,	// (0x00035819) main_pane_set_t2

0xb188,	// (0x0003582d) main_pane_set_t3_ParamLimits

0xb188,	// (0x0003582d) main_pane_set_t3

0xb19a,	// (0x0003583f) main_pane_set_t4_ParamLimits

0xb19a,	// (0x0003583f) main_pane_set_t4

0x0003,

0xf986,	// (0x0003a02b) main_pane_set_t_ParamLimits

0xf986,	// (0x0003a02b) main_pane_set_t

0xb1ac,	// (0x00035851) setting_code_pane

0xb1b8,	// (0x0003585d) setting_slider_graphic_pane

0xb1b8,	// (0x0003585d) setting_slider_pane

0xb1b8,	// (0x0003585d) setting_text_pane

0xb1b8,	// (0x0003585d) setting_volume_pane

0x4c89,	// (0x0002f32e) volume_set_pane

0x7f46,	// (0x000325eb) bg_set_opt_pane_cp

0x4c91,	// (0x0002f336) setting_slider_pane_t1

0x4caa,	// (0x0002f34f) setting_slider_pane_t2

0x4cc4,	// (0x0002f369) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00039c03) setting_slider_pane_t

0x4cdc,	// (0x0002f381) slider_set_pane

0x7e66,	// (0x0003250b) bg_set_opt_pane_cp2

0x7f88,	// (0x0003262d) setting_slider_graphic_pane_g1

0x4cf2,	// (0x0002f397) setting_slider_graphic_pane_t1

0x4d02,	// (0x0002f3a7) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00039c0a) setting_slider_graphic_pane_t

0x4d12,	// (0x0002f3b7) slider_set_pane_cp

0x7e66,	// (0x0003250b) input_focus_pane_cp1

0xb06d,	// (0x00035712) list_set_text_pane

0x7e5c,	// (0x00032501) setting_text_pane_g1

0x7e66,	// (0x0003250b) input_focus_pane_cp2

0x7e5c,	// (0x00032501) setting_code_pane_g1

0x7f91,	// (0x00032636) setting_code_pane_t1

0x4d1a,	// (0x0002f3bf) set_text_pane_t1_ParamLimits

0x4d1a,	// (0x0002f3bf) set_text_pane_t1

0x880d,	// (0x00032eb2) set_opt_bg_pane_g1

0x8815,	// (0x00032eba) set_opt_bg_pane_g2

0xb047,	// (0x000356ec) set_opt_bg_pane_g3

0x8825,	// (0x00032eca) set_opt_bg_pane_g4

0x882d,	// (0x00032ed2) set_opt_bg_pane_g5

0x8835,	// (0x00032eda) set_opt_bg_pane_g6

0xb051,	// (0x000356f6) set_opt_bg_pane_g7

0xb059,	// (0x000356fe) set_opt_bg_pane_g8

0xb063,	// (0x00035708) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0003a018) set_opt_bg_pane_g

0xb03a,	// (0x000356df) slider_set_pane_g1

0x62e9,	// (0x0003098e) slider_set_pane_g2

0x0006,

0xf964,	// (0x0003a009) slider_set_pane_g

0x6285,	// (0x0003092a) volume_set_pane_g1

0x628d,	// (0x00030932) volume_set_pane_g2

0x6295,	// (0x0003093a) volume_set_pane_g3

0x629d,	// (0x00030942) volume_set_pane_g4

0x62a5,	// (0x0003094a) volume_set_pane_g5

0x62ad,	// (0x00030952) volume_set_pane_g6

0x62b5,	// (0x0003095a) volume_set_pane_g7

0x62bd,	// (0x00030962) volume_set_pane_g8

0x62c5,	// (0x0003096a) volume_set_pane_g9

0x62cd,	// (0x00030972) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00039fe1) volume_set_pane_g

0x7f9f,	// (0x00032644) indicator_pane_ParamLimits

0x7f9f,	// (0x00032644) indicator_pane

0x7fab,	// (0x00032650) main_idle_pane_g2_ParamLimits

0x7fab,	// (0x00032650) main_idle_pane_g2

0x7fd3,	// (0x00032678) main_pane_idle_g1_ParamLimits

0x7fd3,	// (0x00032678) main_pane_idle_g1

0x7fe0,	// (0x00032685) popup_clock_digital_analogue_window_ParamLimits

0x7fe0,	// (0x00032685) popup_clock_digital_analogue_window

0x7ff7,	// (0x0003269c) soft_indicator_pane_ParamLimits

0x7ff7,	// (0x0003269c) soft_indicator_pane

0x8003,	// (0x000326a8) wallpaper_pane_ParamLimits

0x8003,	// (0x000326a8) wallpaper_pane

0x7e5c,	// (0x00032501) wallpaper_pane_g1

0x8017,	// (0x000326bc) indicator_pane_g1_ParamLimits

0x8017,	// (0x000326bc) indicator_pane_g1

0xb471,	// (0x00035b16) navi_navi_icon_text_pane_srt_g1

0x8032,	// (0x000326d7) soft_indicator_pane_t1

0x804c,	// (0x000326f1) aid_ps_area_pane

0x805d,	// (0x00032702) aid_ps_clock_pane

0x806b,	// (0x00032710) aid_ps_indicator_pane

0x8077,	// (0x0003271c) indicator_ps_pane_ParamLimits

0x8077,	// (0x0003271c) indicator_ps_pane

0x8086,	// (0x0003272b) power_save_pane_g1_ParamLimits

0x8086,	// (0x0003272b) power_save_pane_g1

0x8092,	// (0x00032737) power_save_pane_g2_ParamLimits

0x8092,	// (0x00032737) power_save_pane_g2

0x4890,	// (0x0002ef35) aid_navinavi_width_pane

0x804c,	// (0x000326f1) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00039c0f) power_save_pane_g_ParamLimits

0xf56a,	// (0x00039c0f) power_save_pane_g

0x80a0,	// (0x00032745) power_save_pane_t1_ParamLimits

0x80a0,	// (0x00032745) power_save_pane_t1

0x805d,	// (0x00032702) aid_ps_clock_pane_ParamLimits

0x806b,	// (0x00032710) aid_ps_indicator_pane_ParamLimits

0x80b2,	// (0x00032757) power_save_pane_t4_ParamLimits

0x80b2,	// (0x00032757) power_save_pane_t4

0x0001,

0xf56f,	// (0x00039c14) power_save_pane_t_ParamLimits

0xf56f,	// (0x00039c14) power_save_pane_t

0x80dc,	// (0x00032781) power_save_t3_ParamLimits

0x80dc,	// (0x00032781) power_save_t3

0x80c7,	// (0x0003276c) power_save_t2_ParamLimits

0x80c7,	// (0x0003276c) power_save_t2

0x80f1,	// (0x00032796) indicator_ps_pane_g1

0x80fa,	// (0x0003279f) ai_gene_pane_ParamLimits

0x80fa,	// (0x0003279f) ai_gene_pane

0x8106,	// (0x000327ab) ai_links_pane_ParamLimits

0x8106,	// (0x000327ab) ai_links_pane

0x8112,	// (0x000327b7) indicator_pane_cp1_ParamLimits

0x8112,	// (0x000327b7) indicator_pane_cp1

0x811e,	// (0x000327c3) main_pane_idle_g1_cp_ParamLimits

0x811e,	// (0x000327c3) main_pane_idle_g1_cp

0x812a,	// (0x000327cf) popup_ai_links_title_window

0x8133,	// (0x000327d8) soft_indicator_pane_cp1_ParamLimits

0x8133,	// (0x000327d8) soft_indicator_pane_cp1

0xae29,	// (0x000354ce) ai_links_pane_g1

0xae32,	// (0x000354d7) grid_ai_links_pane

0xae0c,	// (0x000354b1) ai_gene_pane_1

0xae17,	// (0x000354bc) ai_gene_pane_2

0xae20,	// (0x000354c5) list_highlight_pane_cp4

0xadf0,	// (0x00035495) cell_ai_link_pane_ParamLimits

0xadf0,	// (0x00035495) cell_ai_link_pane

0xade8,	// (0x0003548d) cell_ai_link_pane_g1

0x8363,	// (0x00032a08) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00039fbc) cell_ai_link_pane_g

0x7e66,	// (0x0003250b) grid_highlight_cp2

0x7e66,	// (0x0003250b) bg_popup_sub_pane_cp1

0x814d,	// (0x000327f2) popup_ai_links_title_window_t1

0xad36,	// (0x000353db) ai_gene_pane_1_g1_ParamLimits

0xad36,	// (0x000353db) ai_gene_pane_1_g1

0xad42,	// (0x000353e7) ai_gene_pane_1_g2_ParamLimits

0xad42,	// (0x000353e7) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00039fb2) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00039fb2) ai_gene_pane_1_g

0xad4f,	// (0x000353f4) ai_gene_pane_1_t1_ParamLimits

0xad4f,	// (0x000353f4) ai_gene_pane_1_t1

0xad83,	// (0x00035428) grid_ai_soft_ind_pane

0xad21,	// (0x000353c6) ai_gene_pane_2_t1_ParamLimits

0xad21,	// (0x000353c6) ai_gene_pane_2_t1

0x815c,	// (0x00032801) main_pane_empty_t1_ParamLimits

0x815c,	// (0x00032801) main_pane_empty_t1

0x8174,	// (0x00032819) main_pane_empty_t2_ParamLimits

0x8174,	// (0x00032819) main_pane_empty_t2

0x8189,	// (0x0003282e) main_pane_empty_t3_ParamLimits

0x8189,	// (0x0003282e) main_pane_empty_t3

0x819b,	// (0x00032840) main_pane_empty_t4_ParamLimits

0x819b,	// (0x00032840) main_pane_empty_t4

0x81ad,	// (0x00032852) main_pane_empty_t5_ParamLimits

0x81ad,	// (0x00032852) main_pane_empty_t5

0x0004,

0xf574,	// (0x00039c19) main_pane_empty_t_ParamLimits

0xf574,	// (0x00039c19) main_pane_empty_t

0x885e,	// (0x00032f03) bg_popup_window_pane_ParamLimits

0x885e,	// (0x00032f03) bg_popup_window_pane

0xaa91,	// (0x00035136) find_popup_pane_cp2_ParamLimits

0xaa91,	// (0x00035136) find_popup_pane_cp2

0xaa9d,	// (0x00035142) heading_pane_ParamLimits

0xaa9d,	// (0x00035142) heading_pane

0x7e66,	// (0x0003250b) bg_popup_sub_pane

0xaa0b,	// (0x000350b0) bg_popup_window_pane_g1_ParamLimits

0xaa0b,	// (0x000350b0) bg_popup_window_pane_g1

0xaa17,	// (0x000350bc) bg_popup_window_pane_g2_ParamLimits

0xaa17,	// (0x000350bc) bg_popup_window_pane_g2

0xaa23,	// (0x000350c8) bg_popup_window_pane_g3_ParamLimits

0xaa23,	// (0x000350c8) bg_popup_window_pane_g3

0xaa2f,	// (0x000350d4) bg_popup_window_pane_g4_ParamLimits

0xaa2f,	// (0x000350d4) bg_popup_window_pane_g4

0xaa3b,	// (0x000350e0) bg_popup_window_pane_g5_ParamLimits

0xaa3b,	// (0x000350e0) bg_popup_window_pane_g5

0xaa47,	// (0x000350ec) bg_popup_window_pane_g6_ParamLimits

0xaa47,	// (0x000350ec) bg_popup_window_pane_g6

0xaa53,	// (0x000350f8) bg_popup_window_pane_g7_ParamLimits

0xaa53,	// (0x000350f8) bg_popup_window_pane_g7

0xaa5f,	// (0x00035104) bg_popup_window_pane_g8_ParamLimits

0xaa5f,	// (0x00035104) bg_popup_window_pane_g8

0xaa6b,	// (0x00035110) bg_popup_window_pane_g9_ParamLimits

0xaa6b,	// (0x00035110) bg_popup_window_pane_g9

0xaa77,	// (0x0003511c) bg_popup_window_pane_g10_ParamLimits

0xaa77,	// (0x0003511c) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00039f7a) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00039f7a) bg_popup_window_pane_g

0xa9a0,	// (0x00035045) bg_popup_heading_pane_ParamLimits

0xa9a0,	// (0x00035045) bg_popup_heading_pane

0x6371,	// (0x00030a16) tabs_4_passive_pane_cp_srt_ParamLimits

0x6371,	// (0x00030a16) tabs_4_passive_pane_cp_srt

0x6383,	// (0x00030a28) tabs_4_passive_pane_srt_ParamLimits

0xa9b4,	// (0x00035059) heading_pane_g2

0x6383,	// (0x00030a28) tabs_4_passive_pane_srt

0x979b,	// (0x00033e40) bg_passive_tab_pane_cp3_srt_ParamLimits

0x979b,	// (0x00033e40) bg_passive_tab_pane_cp3_srt

0xa9bc,	// (0x00035061) heading_pane_t1_ParamLimits

0xa9bc,	// (0x00035061) heading_pane_t1

0xa9d3,	// (0x00035078) heading_pane_t2_ParamLimits

0xa9d3,	// (0x00035078) heading_pane_t2

0x0001,

0xf8d0,	// (0x00039f75) heading_pane_t_ParamLimits

0xf8d0,	// (0x00039f75) heading_pane_t

0xa4c1,	// (0x00034b66) bg_popup_heading_pane_g1

0xa57c,	// (0x00034c21) bg_popup_heading_pane_g2

0xa586,	// (0x00034c2b) bg_popup_heading_pane_g3

0xa590,	// (0x00034c35) bg_popup_heading_pane_g4

0xa59a,	// (0x00034c3f) bg_popup_heading_pane_g5

0xa5a4,	// (0x00034c49) bg_popup_heading_pane_g6

0xa5ac,	// (0x00034c51) bg_popup_heading_pane_g7

0xa5b4,	// (0x00034c59) bg_popup_heading_pane_g8

0xa5be,	// (0x00034c63) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00039f31) bg_popup_heading_pane_g

0x9ca5,	// (0x0003434a) bg_popup_sub_pane_g1

0x9cb5,	// (0x0003435a) bg_popup_sub_pane_g2

0x9cad,	// (0x00034352) bg_popup_sub_pane_g3

0x9cc5,	// (0x0003436a) bg_popup_sub_pane_g4

0x9cbd,	// (0x00034362) bg_popup_sub_pane_g5

0x9ccd,	// (0x00034372) bg_popup_sub_pane_g6

0x9cd5,	// (0x0003437a) bg_popup_sub_pane_g7

0x9ce5,	// (0x0003438a) bg_popup_sub_pane_g8

0x9cdd,	// (0x00034382) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00039f0b) bg_popup_sub_pane_g

0x81c1,	// (0x00032866) bg_popup_window_pane_cp5_ParamLimits

0x81c1,	// (0x00032866) bg_popup_window_pane_cp5

0x81dd,	// (0x00032882) popup_note_window_g1_ParamLimits

0x81dd,	// (0x00032882) popup_note_window_g1

0x81e9,	// (0x0003288e) popup_note_window_t1_ParamLimits

0x81e9,	// (0x0003288e) popup_note_window_t1

0x81ff,	// (0x000328a4) popup_note_window_t2_ParamLimits

0x81ff,	// (0x000328a4) popup_note_window_t2

0x8215,	// (0x000328ba) popup_note_window_t3_ParamLimits

0x8215,	// (0x000328ba) popup_note_window_t3

0x822b,	// (0x000328d0) popup_note_window_t4_ParamLimits

0x822b,	// (0x000328d0) popup_note_window_t4

0x8253,	// (0x000328f8) popup_note_window_t5_ParamLimits

0x8253,	// (0x000328f8) popup_note_window_t5

0x0004,

0xf57f,	// (0x00039c24) popup_note_window_t_ParamLimits

0xf57f,	// (0x00039c24) popup_note_window_t

0x8277,	// (0x0003291c) bg_popup_window_pane_cp6_ParamLimits

0x8277,	// (0x0003291c) bg_popup_window_pane_cp6

0xa43d,	// (0x00034ae2) popup_note_image_window_g1_ParamLimits

0xa43d,	// (0x00034ae2) popup_note_image_window_g1

0xa449,	// (0x00034aee) popup_note_image_window_g2_ParamLimits

0xa449,	// (0x00034aee) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00039eff) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00039eff) popup_note_image_window_g

0xa462,	// (0x00034b07) popup_note_image_window_t1_ParamLimits

0xa462,	// (0x00034b07) popup_note_image_window_t1

0xa47b,	// (0x00034b20) popup_note_image_window_t2_ParamLimits

0xa47b,	// (0x00034b20) popup_note_image_window_t2

0xa494,	// (0x00034b39) popup_note_image_window_t3_ParamLimits

0xa494,	// (0x00034b39) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00039f04) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00039f04) popup_note_image_window_t

0xa2fe,	// (0x000349a3) bg_popup_window_pane_cp7_ParamLimits

0xa2fe,	// (0x000349a3) bg_popup_window_pane_cp7

0xa32e,	// (0x000349d3) popup_note_wait_window_g1_ParamLimits

0xa32e,	// (0x000349d3) popup_note_wait_window_g1

0xa33a,	// (0x000349df) popup_note_wait_window_g2_ParamLimits

0xa33a,	// (0x000349df) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00039eed) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00039eed) popup_note_wait_window_g

0xa352,	// (0x000349f7) popup_note_wait_window_t1_ParamLimits

0xa352,	// (0x000349f7) popup_note_wait_window_t1

0xa379,	// (0x00034a1e) popup_note_wait_window_t2_ParamLimits

0xa379,	// (0x00034a1e) popup_note_wait_window_t2

0xa396,	// (0x00034a3b) popup_note_wait_window_t3_ParamLimits

0xa396,	// (0x00034a3b) popup_note_wait_window_t3

0xa3a9,	// (0x00034a4e) popup_note_wait_window_t4_ParamLimits

0xa3a9,	// (0x00034a4e) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00039ef4) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00039ef4) popup_note_wait_window_t

0xa3ce,	// (0x00034a73) wait_bar_pane_ParamLimits

0xa3ce,	// (0x00034a73) wait_bar_pane

0x7e66,	// (0x0003250b) wait_anim_pane

0x7e66,	// (0x0003250b) wait_border_pane

0x7e5c,	// (0x00032501) wait_anim_pane_g1

0x7e5c,	// (0x00032501) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00039da8) wait_anim_pane_g

0xa2a2,	// (0x00034947) wait_border_pane_g1

0xa2ad,	// (0x00034952) wait_border_pane_g2

0xa2b6,	// (0x0003495b) wait_border_pane_g3

0x0002,

0xf841,	// (0x00039ee6) wait_border_pane_g

0xa10d,	// (0x000347b2) bg_popup_window_pane_cp16_ParamLimits

0xa10d,	// (0x000347b2) bg_popup_window_pane_cp16

0xa20d,	// (0x000348b2) indicator_popup_pane_cp4_ParamLimits

0xa20d,	// (0x000348b2) indicator_popup_pane_cp4

0xa221,	// (0x000348c6) popup_query_data_window_t1_ParamLimits

0xa221,	// (0x000348c6) popup_query_data_window_t1

0xa233,	// (0x000348d8) popup_query_data_window_t2_ParamLimits

0xa233,	// (0x000348d8) popup_query_data_window_t2

0xa24c,	// (0x000348f1) popup_query_data_window_t3_ParamLimits

0xa24c,	// (0x000348f1) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00039edf) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00039edf) popup_query_data_window_t

0xa266,	// (0x0003490b) query_popup_data_pane_ParamLimits

0xa266,	// (0x0003490b) query_popup_data_pane

0xa27a,	// (0x0003491f) query_popup_data_pane_cp1_ParamLimits

0xa27a,	// (0x0003491f) query_popup_data_pane_cp1

0xa10d,	// (0x000347b2) bg_popup_window_pane_cp10_ParamLimits

0xa10d,	// (0x000347b2) bg_popup_window_pane_cp10

0xa13f,	// (0x000347e4) indicator_popup_pane_ParamLimits

0xa13f,	// (0x000347e4) indicator_popup_pane

0xa161,	// (0x00034806) popup_query_code_window_t1_ParamLimits

0xa161,	// (0x00034806) popup_query_code_window_t1

0xa17b,	// (0x00034820) popup_query_code_window_t2_ParamLimits

0xa17b,	// (0x00034820) popup_query_code_window_t2

0xa1c4,	// (0x00034869) popup_query_code_window_t3_ParamLimits

0xa1c4,	// (0x00034869) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00039ed8) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00039ed8) popup_query_code_window_t

0xa1f3,	// (0x00034898) query_popup_pane_ParamLimits

0xa1f3,	// (0x00034898) query_popup_pane

0x8277,	// (0x0003291c) bg_popup_window_pane_cp15_ParamLimits

0x8277,	// (0x0003291c) bg_popup_window_pane_cp15

0x8295,	// (0x0003293a) indicator_popup_pane_cp1_ParamLimits

0x8295,	// (0x0003293a) indicator_popup_pane_cp1

0x82a8,	// (0x0003294d) indicator_popup_pane_cp2_ParamLimits

0x82a8,	// (0x0003294d) indicator_popup_pane_cp2

0x82bb,	// (0x00032960) popup_query_data_code_window_g1_ParamLimits

0x82bb,	// (0x00032960) popup_query_data_code_window_g1

0x82ce,	// (0x00032973) popup_query_data_code_window_t1_ParamLimits

0x82ce,	// (0x00032973) popup_query_data_code_window_t1

0x82e0,	// (0x00032985) popup_query_data_code_window_t2_ParamLimits

0x82e0,	// (0x00032985) popup_query_data_code_window_t2

0x82f2,	// (0x00032997) popup_query_data_code_window_t3_ParamLimits

0x82f2,	// (0x00032997) popup_query_data_code_window_t3

0x8308,	// (0x000329ad) popup_query_data_code_window_t4_ParamLimits

0x8308,	// (0x000329ad) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00039c2f) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00039c2f) popup_query_data_code_window_t

0x6032,	// (0x000306d7) list_single_midp_graphic_pane_g3

0x8320,	// (0x000329c5) query_popup_data_pane_cp2_ParamLimits

0x8333,	// (0x000329d8) query_popup_pane_cp2_ParamLimits

0x8333,	// (0x000329d8) query_popup_pane_cp2

0x7e66,	// (0x0003250b) bg_popup_window_pane_cp11

0xa105,	// (0x000347aa) heading_pane_cp5

0x841e,	// (0x00032ac3) listscroll_popup_info_pane

0x7e66,	// (0x0003250b) input_focus_pane_cp3

0x8346,	// (0x000329eb) query_popup_pane_t1

0x8354,	// (0x000329f9) list_popup_info_pane_ParamLimits

0x8354,	// (0x000329f9) list_popup_info_pane

0x8363,	// (0x00032a08) listscroll_popup_info_pane_g1

0x836b,	// (0x00032a10) scroll_pane_cp7

0x8375,	// (0x00032a1a) popup_info_list_pane_t1_ParamLimits

0x8375,	// (0x00032a1a) popup_info_list_pane_t1

0x838f,	// (0x00032a34) popup_info_list_pane_t2_ParamLimits

0x838f,	// (0x00032a34) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00039c38) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00039c38) popup_info_list_pane_t

0x7e66,	// (0x0003250b) bg_popup_window_pane_cp12

0xb48b,	// (0x00035b30) find_popup_pane

0x7f46,	// (0x000325eb) bg_popup_window_pane_cp3

0x83a9,	// (0x00032a4e) heading_pane_cp3

0x83b5,	// (0x00032a5a) listscroll_popup_graphic_pane

0x7e66,	// (0x0003250b) bg_popup_window_pane_cp4

0x8414,	// (0x00032ab9) heading_pane_cp4

0x841e,	// (0x00032ac3) listscroll_popup_colour_pane

0x8426,	// (0x00032acb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8426,	// (0x00032acb) cell_large_graphic_colour_none_popup_pane

0x843a,	// (0x00032adf) grid_large_graphic_colour_popup_pane_ParamLimits

0x843a,	// (0x00032adf) grid_large_graphic_colour_popup_pane

0x8466,	// (0x00032b0b) listscroll_popup_colour_pane_g1_ParamLimits

0x8466,	// (0x00032b0b) listscroll_popup_colour_pane_g1

0x847d,	// (0x00032b22) listscroll_popup_colour_pane_g2_ParamLimits

0x847d,	// (0x00032b22) listscroll_popup_colour_pane_g2

0x8494,	// (0x00032b39) listscroll_popup_colour_pane_g3_ParamLimits

0x8494,	// (0x00032b39) listscroll_popup_colour_pane_g3

0x84a4,	// (0x00032b49) listscroll_popup_colour_pane_g4_ParamLimits

0x84a4,	// (0x00032b49) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00039c3d) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00039c3d) listscroll_popup_colour_pane_g

0x84b8,	// (0x00032b5d) scroll_pane_cp6_ParamLimits

0x84b8,	// (0x00032b5d) scroll_pane_cp6

0x84ca,	// (0x00032b6f) cell_large_graphic_colour_popup_pane_ParamLimits

0x84ca,	// (0x00032b6f) cell_large_graphic_colour_popup_pane

0x84e9,	// (0x00032b8e) cell_large_graphic_colour_none_popup_pane_t1

0x7e66,	// (0x0003250b) grid_highlight_pane_cp5

0x84f8,	// (0x00032b9d) cell_large_graphic_colour_popup_pane_g1

0x8500,	// (0x00032ba5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00039c46) cell_large_graphic_colour_popup_pane_g

0x8508,	// (0x00032bad) cell_large_graphic_colour_popup_pane_g2_copy1

0x8511,	// (0x00032bb6) grid_highlight_pane_cp4

0x8519,	// (0x00032bbe) bg_popup_window_pane_cp8_ParamLimits

0x8519,	// (0x00032bbe) bg_popup_window_pane_cp8

0x8534,	// (0x00032bd9) popup_snote_single_text_window_g1_ParamLimits

0x8534,	// (0x00032bd9) popup_snote_single_text_window_g1

0x8546,	// (0x00032beb) popup_snote_single_text_window_t1_ParamLimits

0x8546,	// (0x00032beb) popup_snote_single_text_window_t1

0x8559,	// (0x00032bfe) popup_snote_single_text_window_t2_ParamLimits

0x8559,	// (0x00032bfe) popup_snote_single_text_window_t2

0x856c,	// (0x00032c11) popup_snote_single_text_window_t3_ParamLimits

0x856c,	// (0x00032c11) popup_snote_single_text_window_t3

0x85a5,	// (0x00032c4a) popup_snote_single_text_window_t4_ParamLimits

0x85a5,	// (0x00032c4a) popup_snote_single_text_window_t4

0x85d9,	// (0x00032c7e) popup_snote_single_text_window_t5_ParamLimits

0x85d9,	// (0x00032c7e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00039c4b) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00039c4b) popup_snote_single_text_window_t

0x8608,	// (0x00032cad) bg_popup_window_pane_cp9_ParamLimits

0x8608,	// (0x00032cad) bg_popup_window_pane_cp9

0x8534,	// (0x00032bd9) popup_snote_single_graphic_window_g1_ParamLimits

0x8534,	// (0x00032bd9) popup_snote_single_graphic_window_g1

0x8616,	// (0x00032cbb) popup_snote_single_graphic_window_g2_ParamLimits

0x8616,	// (0x00032cbb) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00039c56) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00039c56) popup_snote_single_graphic_window_g

0x8622,	// (0x00032cc7) popup_snote_single_graphic_window_t1_ParamLimits

0x8622,	// (0x00032cc7) popup_snote_single_graphic_window_t1

0x8635,	// (0x00032cda) popup_snote_single_graphic_window_t2_ParamLimits

0x8635,	// (0x00032cda) popup_snote_single_graphic_window_t2

0x8648,	// (0x00032ced) popup_snote_single_graphic_window_t3_ParamLimits

0x8648,	// (0x00032ced) popup_snote_single_graphic_window_t3

0x8681,	// (0x00032d26) popup_snote_single_graphic_window_t4_ParamLimits

0x8681,	// (0x00032d26) popup_snote_single_graphic_window_t4

0x86b5,	// (0x00032d5a) popup_snote_single_graphic_window_t5_ParamLimits

0x86b5,	// (0x00032d5a) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00039c5b) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00039c5b) popup_snote_single_graphic_window_t

0xb3cd,	// (0x00035a72) grid_graphic_popup_pane_ParamLimits

0xb3cd,	// (0x00035a72) grid_graphic_popup_pane

0xb3f7,	// (0x00035a9c) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3f7,	// (0x00035a9c) listscroll_popup_graphic_pane_g1

0xb40b,	// (0x00035ab0) listscroll_popup_graphic_pane_g2_ParamLimits

0xb40b,	// (0x00035ab0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0003a055) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0003a055) listscroll_popup_graphic_pane_g

0xb41f,	// (0x00035ac4) scroll_pane_cp5

0xb36c,	// (0x00035a11) cell_graphic_popup_pane_ParamLimits

0xb36c,	// (0x00035a11) cell_graphic_popup_pane

0xb34d,	// (0x000359f2) cell_graphic_popup_pane_g1

0xb355,	// (0x000359fa) cell_graphic_popup_pane_g2

0x8508,	// (0x00032bad) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0003a04e) cell_graphic_popup_pane_g

0xb35e,	// (0x00035a03) cell_graphic_popup_pane_t2

0x8511,	// (0x00032bb6) grid_highlight_pane_cp3

0x86f6,	// (0x00032d9b) list_gen_pane_ParamLimits

0x86f6,	// (0x00032d9b) list_gen_pane

0x8728,	// (0x00032dcd) scroll_pane

0xb2a5,	// (0x0003594a) bg_list_pane_g1_ParamLimits

0xb2a5,	// (0x0003594a) bg_list_pane_g1

0xb2c2,	// (0x00035967) bg_list_pane_g2_ParamLimits

0xb2c2,	// (0x00035967) bg_list_pane_g2

0xb2d7,	// (0x0003597c) bg_list_pane_g3_ParamLimits

0xb2d7,	// (0x0003597c) bg_list_pane_g3

0xb2eb,	// (0x00035990) bg_list_pane_g4_ParamLimits

0xb2eb,	// (0x00035990) bg_list_pane_g4

0xb2ff,	// (0x000359a4) bg_list_pane_g5_ParamLimits

0xb2ff,	// (0x000359a4) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0003a043) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0003a043) bg_list_pane_g

0x7653,	// (0x00031cf8) list_double2_graphic_large_graphic_pane_ParamLimits

0x7653,	// (0x00031cf8) list_double2_graphic_large_graphic_pane

0x7653,	// (0x00031cf8) list_double2_graphic_pane_ParamLimits

0x7653,	// (0x00031cf8) list_double2_graphic_pane

0x7653,	// (0x00031cf8) list_double2_large_graphic_pane_ParamLimits

0x7653,	// (0x00031cf8) list_double2_large_graphic_pane

0x7653,	// (0x00031cf8) list_double2_pane_ParamLimits

0x7653,	// (0x00031cf8) list_double2_pane

0x7653,	// (0x00031cf8) list_double_graphic_heading_pane_ParamLimits

0x7653,	// (0x00031cf8) list_double_graphic_heading_pane

0x7653,	// (0x00031cf8) list_double_graphic_pane_ParamLimits

0x7653,	// (0x00031cf8) list_double_graphic_pane

0x7653,	// (0x00031cf8) list_double_heading_pane_ParamLimits

0x7653,	// (0x00031cf8) list_double_heading_pane

0x7653,	// (0x00031cf8) list_double_large_graphic_pane_ParamLimits

0x7653,	// (0x00031cf8) list_double_large_graphic_pane

0x7653,	// (0x00031cf8) list_double_number_pane_ParamLimits

0x7653,	// (0x00031cf8) list_double_number_pane

0x7653,	// (0x00031cf8) list_double_pane_ParamLimits

0x7653,	// (0x00031cf8) list_double_pane

0x7653,	// (0x00031cf8) list_double_time_pane_ParamLimits

0x7653,	// (0x00031cf8) list_double_time_pane

0x7653,	// (0x00031cf8) list_setting_number_pane_ParamLimits

0x7653,	// (0x00031cf8) list_setting_number_pane

0x7653,	// (0x00031cf8) list_setting_pane_ParamLimits

0x7653,	// (0x00031cf8) list_setting_pane

0x768e,	// (0x00031d33) list_single_2graphic_pane_ParamLimits

0x768e,	// (0x00031d33) list_single_2graphic_pane

0x768e,	// (0x00031d33) list_single_graphic_heading_pane_ParamLimits

0x768e,	// (0x00031d33) list_single_graphic_heading_pane

0x768e,	// (0x00031d33) list_single_graphic_pane_ParamLimits

0x768e,	// (0x00031d33) list_single_graphic_pane

0x768e,	// (0x00031d33) list_single_heading_pane_ParamLimits

0x768e,	// (0x00031d33) list_single_heading_pane

0x76ce,	// (0x00031d73) list_single_large_graphic_pane_ParamLimits

0x76ce,	// (0x00031d73) list_single_large_graphic_pane

0x768e,	// (0x00031d33) list_single_number_heading_pane_ParamLimits

0x768e,	// (0x00031d33) list_single_number_heading_pane

0x768e,	// (0x00031d33) list_single_number_pane_ParamLimits

0x768e,	// (0x00031d33) list_single_number_pane

0x768e,	// (0x00031d33) list_single_pane_ParamLimits

0x768e,	// (0x00031d33) list_single_pane

0x7e66,	// (0x0003250b) list_highlight_pane_cp1

0x4d41,	// (0x0002f3e6) list_single_pane_g1_ParamLimits

0x4d41,	// (0x0002f3e6) list_single_pane_g1

0x4d4d,	// (0x0002f3f2) list_single_pane_g2_ParamLimits

0x4d4d,	// (0x0002f3f2) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00039c6d) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00039c6d) list_single_pane_g

0x763d,	// (0x00031ce2) list_single_pane_t1_ParamLimits

0x763d,	// (0x00031ce2) list_single_pane_t1

0x4d41,	// (0x0002f3e6) list_single_number_pane_g1_ParamLimits

0x4d41,	// (0x0002f3e6) list_single_number_pane_g1

0x4d4d,	// (0x0002f3f2) list_single_number_pane_g2_ParamLimits

0x4d4d,	// (0x0002f3f2) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00039c6d) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00039c6d) list_single_number_pane_g

0x75e7,	// (0x00031c8c) list_single_number_pane_t1_ParamLimits

0x75e7,	// (0x00031c8c) list_single_number_pane_t1

0x75fd,	// (0x00031ca2) list_single_number_pane_t2_ParamLimits

0x75fd,	// (0x00031ca2) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0003a004) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0003a004) list_single_number_pane_t

0x4d35,	// (0x0002f3da) list_single_graphic_pane_g1_ParamLimits

0x4d35,	// (0x0002f3da) list_single_graphic_pane_g1

0x4d41,	// (0x0002f3e6) list_single_graphic_pane_g2_ParamLimits

0x4d41,	// (0x0002f3e6) list_single_graphic_pane_g2

0x4d4d,	// (0x0002f3f2) list_single_graphic_pane_g3_ParamLimits

0x4d4d,	// (0x0002f3f2) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00039c66) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00039c66) list_single_graphic_pane_g

0x4d59,	// (0x0002f3fe) list_single_graphic_pane_t1_ParamLimits

0x4d59,	// (0x0002f3fe) list_single_graphic_pane_t1

0x4d41,	// (0x0002f3e6) list_single_heading_pane_g1_ParamLimits

0x4d41,	// (0x0002f3e6) list_single_heading_pane_g1

0x4d4d,	// (0x0002f3f2) list_single_heading_pane_g2_ParamLimits

0x4d4d,	// (0x0002f3f2) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00039c6d) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00039c6d) list_single_heading_pane_g

0x4d6f,	// (0x0002f414) list_single_heading_pane_t1_ParamLimits

0x4d6f,	// (0x0002f414) list_single_heading_pane_t1

0x4d85,	// (0x0002f42a) list_single_heading_pane_t2_ParamLimits

0x4d85,	// (0x0002f42a) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00039c72) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00039c72) list_single_heading_pane_t

0x4d41,	// (0x0002f3e6) list_single_number_heading_pane_g1_ParamLimits

0x4d41,	// (0x0002f3e6) list_single_number_heading_pane_g1

0x4d4d,	// (0x0002f3f2) list_single_number_heading_pane_g2_ParamLimits

0x4d4d,	// (0x0002f3f2) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00039c6d) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00039c6d) list_single_number_heading_pane_g

0x4d6f,	// (0x0002f414) list_single_number_heading_pane_t1_ParamLimits

0x4d6f,	// (0x0002f414) list_single_number_heading_pane_t1

0x4d97,	// (0x0002f43c) list_single_number_heading_pane_t2_ParamLimits

0x4d97,	// (0x0002f43c) list_single_number_heading_pane_t2

0x4da9,	// (0x0002f44e) list_single_number_heading_pane_t3_ParamLimits

0x4da9,	// (0x0002f44e) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00039c77) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00039c77) list_single_number_heading_pane_t

0x4dbb,	// (0x0002f460) list_single_graphic_heading_pane_g1_ParamLimits

0x4dbb,	// (0x0002f460) list_single_graphic_heading_pane_g1

0x4dc7,	// (0x0002f46c) list_single_graphic_heading_pane_g4_ParamLimits

0x4dc7,	// (0x0002f46c) list_single_graphic_heading_pane_g4

0x4d4d,	// (0x0002f3f2) list_single_graphic_heading_pane_g5_ParamLimits

0x4d4d,	// (0x0002f3f2) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00039c7e) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00039c7e) list_single_graphic_heading_pane_g

0x4d6f,	// (0x0002f414) list_single_graphic_heading_pane_t1_ParamLimits

0x4d6f,	// (0x0002f414) list_single_graphic_heading_pane_t1

0x4dd8,	// (0x0002f47d) list_single_graphic_heading_pane_t2_ParamLimits

0x4dd8,	// (0x0002f47d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00039c85) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00039c85) list_single_graphic_heading_pane_t

0x4dea,	// (0x0002f48f) list_single_large_graphic_pane_g1_ParamLimits

0x4dea,	// (0x0002f48f) list_single_large_graphic_pane_g1

0x4df6,	// (0x0002f49b) list_single_large_graphic_pane_g2_ParamLimits

0x4df6,	// (0x0002f49b) list_single_large_graphic_pane_g2

0x4e02,	// (0x0002f4a7) list_single_large_graphic_pane_g3_ParamLimits

0x4e02,	// (0x0002f4a7) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00039c8a) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00039c8a) list_single_large_graphic_pane_g

0xa2ad,	// (0x00034952) wait_border_pane_g2_copy1

0x4e0e,	// (0x0002f4b3) list_single_large_graphic_pane_g4_cp2

0x4e16,	// (0x0002f4bb) list_single_large_graphic_pane_t1_ParamLimits

0x4e16,	// (0x0002f4bb) list_single_large_graphic_pane_t1

0x4e2c,	// (0x0002f4d1) list_double_pane_g1_ParamLimits

0x4e2c,	// (0x0002f4d1) list_double_pane_g1

0x4e38,	// (0x0002f4dd) list_double_pane_g2_ParamLimits

0x4e38,	// (0x0002f4dd) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00039c91) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00039c91) list_double_pane_g

0x4e44,	// (0x0002f4e9) list_double_pane_t1_ParamLimits

0x4e44,	// (0x0002f4e9) list_double_pane_t1

0x4e5a,	// (0x0002f4ff) list_double_pane_t2_ParamLimits

0x4e5a,	// (0x0002f4ff) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00039c96) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00039c96) list_double_pane_t

0x4e6c,	// (0x0002f511) list_double2_pane_g1_ParamLimits

0x4e6c,	// (0x0002f511) list_double2_pane_g1

0x4e7d,	// (0x0002f522) list_double2_pane_g2_ParamLimits

0x4e7d,	// (0x0002f522) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00039c9b) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00039c9b) list_double2_pane_g

0x4e89,	// (0x0002f52e) list_double2_pane_t1_ParamLimits

0x4e89,	// (0x0002f52e) list_double2_pane_t1

0x4e9f,	// (0x0002f544) list_double2_pane_t2_ParamLimits

0x4e9f,	// (0x0002f544) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00039ca0) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00039ca0) list_double2_pane_t

0x4e2c,	// (0x0002f4d1) list_double_number_pane_g1_ParamLimits

0x4e2c,	// (0x0002f4d1) list_double_number_pane_g1

0x4e38,	// (0x0002f4dd) list_double_number_pane_g2_ParamLimits

0x4e38,	// (0x0002f4dd) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00039c91) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00039c91) list_double_number_pane_g

0x4eb1,	// (0x0002f556) list_double_number_pane_t1_ParamLimits

0x4eb1,	// (0x0002f556) list_double_number_pane_t1

0x4ec3,	// (0x0002f568) list_double_number_pane_t2_ParamLimits

0x4ec3,	// (0x0002f568) list_double_number_pane_t2

0x4ed9,	// (0x0002f57e) list_double_number_pane_t3_ParamLimits

0x4ed9,	// (0x0002f57e) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00039ca5) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00039ca5) list_double_number_pane_t

0x4eeb,	// (0x0002f590) list_double_graphic_pane_g1_ParamLimits

0x4eeb,	// (0x0002f590) list_double_graphic_pane_g1

0x4ef7,	// (0x0002f59c) list_double_graphic_pane_g2_ParamLimits

0x4ef7,	// (0x0002f59c) list_double_graphic_pane_g2

0x4f06,	// (0x0002f5ab) list_double_graphic_pane_g3_ParamLimits

0x4f06,	// (0x0002f5ab) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00039cac) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00039cac) list_double_graphic_pane_g

0x4f1e,	// (0x0002f5c3) list_double_graphic_pane_t1_ParamLimits

0x4f1e,	// (0x0002f5c3) list_double_graphic_pane_t1

0x4f34,	// (0x0002f5d9) list_double_graphic_pane_t2_ParamLimits

0x4f34,	// (0x0002f5d9) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00039cb5) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00039cb5) list_double_graphic_pane_t

0x4f46,	// (0x0002f5eb) list_double2_graphic_pane_g1_ParamLimits

0x4f46,	// (0x0002f5eb) list_double2_graphic_pane_g1

0x4f52,	// (0x0002f5f7) list_double2_graphic_pane_g2_ParamLimits

0x4f52,	// (0x0002f5f7) list_double2_graphic_pane_g2

0x4e7d,	// (0x0002f522) list_double2_graphic_pane_g3_ParamLimits

0x4e7d,	// (0x0002f522) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00039cba) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00039cba) list_double2_graphic_pane_g

0x4f5e,	// (0x0002f603) list_double2_graphic_pane_t1_ParamLimits

0x4f5e,	// (0x0002f603) list_double2_graphic_pane_t1

0x4f74,	// (0x0002f619) list_double2_graphic_pane_t2_ParamLimits

0x4f74,	// (0x0002f619) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00039cc1) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00039cc1) list_double2_graphic_pane_t

0x4f86,	// (0x0002f62b) list_double_large_graphic_pane_g1_ParamLimits

0x4f86,	// (0x0002f62b) list_double_large_graphic_pane_g1

0x4f99,	// (0x0002f63e) list_double_large_graphic_pane_g2_ParamLimits

0x4f99,	// (0x0002f63e) list_double_large_graphic_pane_g2

0x4e38,	// (0x0002f4dd) list_double_large_graphic_pane_g3_ParamLimits

0x4e38,	// (0x0002f4dd) list_double_large_graphic_pane_g3

0x4faa,	// (0x0002f64f) list_double_large_graphic_pane_g4_ParamLimits

0x4faa,	// (0x0002f64f) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00039cc6) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00039cc6) list_double_large_graphic_pane_g

0x4fd1,	// (0x0002f676) list_double_large_graphic_pane_t1_ParamLimits

0x4fd1,	// (0x0002f676) list_double_large_graphic_pane_t1

0x4fea,	// (0x0002f68f) list_double_large_graphic_pane_t2_ParamLimits

0x4fea,	// (0x0002f68f) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00039cd1) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00039cd1) list_double_large_graphic_pane_t

0x4ffc,	// (0x0002f6a1) list_double2_large_graphic_pane_g1_ParamLimits

0x4ffc,	// (0x0002f6a1) list_double2_large_graphic_pane_g1

0x4e6c,	// (0x0002f511) list_double2_large_graphic_pane_g2_ParamLimits

0x4e6c,	// (0x0002f511) list_double2_large_graphic_pane_g2

0x4e7d,	// (0x0002f522) list_double2_large_graphic_pane_g3_ParamLimits

0x4e7d,	// (0x0002f522) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00039cd6) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00039cd6) list_double2_large_graphic_pane_g

0x5008,	// (0x0002f6ad) list_double2_large_graphic_pane_t1_ParamLimits

0x5008,	// (0x0002f6ad) list_double2_large_graphic_pane_t1

0x501e,	// (0x0002f6c3) list_double2_large_graphic_pane_t2_ParamLimits

0x501e,	// (0x0002f6c3) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00039cdd) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00039cdd) list_double2_large_graphic_pane_t

0x5030,	// (0x0002f6d5) list_double_heading_pane_g1_ParamLimits

0x5030,	// (0x0002f6d5) list_double_heading_pane_g1

0x5041,	// (0x0002f6e6) list_double_heading_pane_g2_ParamLimits

0x5041,	// (0x0002f6e6) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00039ce2) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00039ce2) list_double_heading_pane_g

0x504d,	// (0x0002f6f2) list_double_heading_pane_t1_ParamLimits

0x504d,	// (0x0002f6f2) list_double_heading_pane_t1

0x4e9f,	// (0x0002f544) list_double_heading_pane_t2_ParamLimits

0x4e9f,	// (0x0002f544) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00039ce7) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00039ce7) list_double_heading_pane_t

0x5063,	// (0x0002f708) list_double_graphic_heading_pane_g1_ParamLimits

0x5063,	// (0x0002f708) list_double_graphic_heading_pane_g1

0x5030,	// (0x0002f6d5) list_double_graphic_heading_pane_g2_ParamLimits

0x5030,	// (0x0002f6d5) list_double_graphic_heading_pane_g2

0x5041,	// (0x0002f6e6) list_double_graphic_heading_pane_g3_ParamLimits

0x5041,	// (0x0002f6e6) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00039cec) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00039cec) list_double_graphic_heading_pane_g

0x506f,	// (0x0002f714) list_double_graphic_heading_pane_t1_ParamLimits

0x506f,	// (0x0002f714) list_double_graphic_heading_pane_t1

0x4f74,	// (0x0002f619) list_double_graphic_heading_pane_t2_ParamLimits

0x4f74,	// (0x0002f619) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00039cf3) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00039cf3) list_double_graphic_heading_pane_t

0x4f99,	// (0x0002f63e) list_double_time_pane_g1_ParamLimits

0x4f99,	// (0x0002f63e) list_double_time_pane_g1

0x4e38,	// (0x0002f4dd) list_double_time_pane_g2_ParamLimits

0x4e38,	// (0x0002f4dd) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00039cf8) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00039cf8) list_double_time_pane_g

0x5085,	// (0x0002f72a) list_double_time_pane_t1_ParamLimits

0x5085,	// (0x0002f72a) list_double_time_pane_t1

0x509b,	// (0x0002f740) list_double_time_pane_t2_ParamLimits

0x509b,	// (0x0002f740) list_double_time_pane_t2

0x50ad,	// (0x0002f752) list_double_time_pane_t3_ParamLimits

0x50ad,	// (0x0002f752) list_double_time_pane_t3

0x50bf,	// (0x0002f764) list_double_time_pane_t4_ParamLimits

0x50bf,	// (0x0002f764) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00039cfd) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00039cfd) list_double_time_pane_t

0x4f52,	// (0x0002f5f7) list_setting_pane_g1_ParamLimits

0x4f52,	// (0x0002f5f7) list_setting_pane_g1

0x4e7d,	// (0x0002f522) list_setting_pane_g2_ParamLimits

0x4e7d,	// (0x0002f522) list_setting_pane_g2

0x0001,

0xf661,	// (0x00039d06) list_setting_pane_g_ParamLimits

0xf661,	// (0x00039d06) list_setting_pane_g

0x50d1,	// (0x0002f776) list_setting_pane_t1_ParamLimits

0x50d1,	// (0x0002f776) list_setting_pane_t1

0x50eb,	// (0x0002f790) list_setting_pane_t2_ParamLimits

0x50eb,	// (0x0002f790) list_setting_pane_t2

0x0002,

0xf666,	// (0x00039d0b) list_setting_pane_t_ParamLimits

0xf666,	// (0x00039d0b) list_setting_pane_t

0x512a,	// (0x0002f7cf) set_value_pane_cp_ParamLimits

0x512a,	// (0x0002f7cf) set_value_pane_cp

0x5136,	// (0x0002f7db) list_setting_number_pane_g1_ParamLimits

0x5136,	// (0x0002f7db) list_setting_number_pane_g1

0x5142,	// (0x0002f7e7) list_setting_number_pane_g2_ParamLimits

0x5142,	// (0x0002f7e7) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00039d12) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00039d12) list_setting_number_pane_g

0x514e,	// (0x0002f7f3) list_setting_number_pane_t1_ParamLimits

0x514e,	// (0x0002f7f3) list_setting_number_pane_t1

0x5167,	// (0x0002f80c) list_setting_number_pane_t2_ParamLimits

0x5167,	// (0x0002f80c) list_setting_number_pane_t2

0x5181,	// (0x0002f826) list_setting_number_pane_t3_ParamLimits

0x5181,	// (0x0002f826) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00039d17) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00039d17) list_setting_number_pane_t

0x512a,	// (0x0002f7cf) set_value_pane_ParamLimits

0x512a,	// (0x0002f7cf) set_value_pane

0x875c,	// (0x00032e01) bg_set_opt_pane_ParamLimits

0x875c,	// (0x00032e01) bg_set_opt_pane

0x51c4,	// (0x0002f869) set_value_pane_t1

0x877d,	// (0x00032e22) slider_set_pane_cp3

0x8786,	// (0x00032e2b) volume_small_pane_cp

0x878f,	// (0x00032e34) list_form_gen_pane

0x8798,	// (0x00032e3d) scroll_pane_cp8

0x51da,	// (0x0002f87f) form_field_data_pane_ParamLimits

0x51da,	// (0x0002f87f) form_field_data_pane

0x51fa,	// (0x0002f89f) form_field_data_wide_pane_ParamLimits

0x51fa,	// (0x0002f89f) form_field_data_wide_pane

0x521b,	// (0x0002f8c0) form_field_popup_pane_ParamLimits

0x521b,	// (0x0002f8c0) form_field_popup_pane

0x523b,	// (0x0002f8e0) form_field_popup_wide_pane_ParamLimits

0x523b,	// (0x0002f8e0) form_field_popup_wide_pane

0x5258,	// (0x0002f8fd) form_field_slider_pane_ParamLimits

0x5258,	// (0x0002f8fd) form_field_slider_pane

0x526b,	// (0x0002f910) form_field_slider_wide_pane_ParamLimits

0x526b,	// (0x0002f910) form_field_slider_wide_pane

0x87a9,	// (0x00032e4e) data_form_pane

0x5288,	// (0x0002f92d) form_field_data_pane_t1

0x87b5,	// (0x00032e5a) input_focus_pane

0x52a0,	// (0x0002f945) data_form_wide_pane

0x52bd,	// (0x0002f962) form_field_data_wide_pane_t1

0x8526,	// (0x00032bcb) input_focus_pane_cp6

0x52df,	// (0x0002f984) form_field_popup_pane_t1

0x87b5,	// (0x00032e5a) input_focus_pane_cp7

0x87e3,	// (0x00032e88) list_form_pane

0x52ff,	// (0x0002f9a4) form_field_popup_wide_pane_t1

0x87b5,	// (0x00032e5a) input_focus_pane_cp8

0x87ef,	// (0x00032e94) list_form_wide_pane

0x531c,	// (0x0002f9c1) form_field_slider_pane_t1_ParamLimits

0x531c,	// (0x0002f9c1) form_field_slider_pane_t1

0x5332,	// (0x0002f9d7) form_field_slider_pane_t2_ParamLimits

0x5332,	// (0x0002f9d7) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00039d27) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00039d27) form_field_slider_pane_t

0x81c1,	// (0x00032866) input_focus_pane_cp9_ParamLimits

0x81c1,	// (0x00032866) input_focus_pane_cp9

0x5347,	// (0x0002f9ec) slider_cont_pane_ParamLimits

0x5347,	// (0x0002f9ec) slider_cont_pane

0x87fb,	// (0x00032ea0) form_field_slider_wide_pane_t1_ParamLimits

0x87fb,	// (0x00032ea0) form_field_slider_wide_pane_t1

0x535b,	// (0x0002fa00) form_field_slider_wide_pane_t2_ParamLimits

0x535b,	// (0x0002fa00) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00039d2c) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00039d2c) form_field_slider_wide_pane_t

0x81c1,	// (0x00032866) input_focus_pane_cp10_ParamLimits

0x81c1,	// (0x00032866) input_focus_pane_cp10

0x536d,	// (0x0002fa12) slider_cont_pane_cp1_ParamLimits

0x536d,	// (0x0002fa12) slider_cont_pane_cp1

0x5381,	// (0x0002fa26) slider_form_pane_cp

0x880d,	// (0x00032eb2) input_focus_pane_g1

0x8815,	// (0x00032eba) input_focus_pane_g2

0x881d,	// (0x00032ec2) input_focus_pane_g3

0x8825,	// (0x00032eca) input_focus_pane_g4

0x882d,	// (0x00032ed2) input_focus_pane_g5

0x8835,	// (0x00032eda) input_focus_pane_g6

0x883d,	// (0x00032ee2) input_focus_pane_g7

0x8845,	// (0x00032eea) input_focus_pane_g8

0x884d,	// (0x00032ef2) input_focus_pane_g9

0x7e5c,	// (0x00032501) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00039d31) input_focus_pane_g

0xa2b6,	// (0x0003495b) wait_border_pane_g3_copy1

0x5389,	// (0x0002fa2e) data_form_pane_t1

0x7e5c,	// (0x00032501) wait_anim_pane_g1_copy1

0x760f,	// (0x00031cb4) data_form_wide_pane_t1

0x53a4,	// (0x0002fa49) list_form_graphic_pane_cp_ParamLimits

0x53a4,	// (0x0002fa49) list_form_graphic_pane_cp

0xb1e2,	// (0x00035887) slider_form_pane_g1

0xb1eb,	// (0x00035890) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0003a034) slider_form_pane_g

0x53bd,	// (0x0002fa62) list_form_graphic_pane_ParamLimits

0x53bd,	// (0x0002fa62) list_form_graphic_pane

0x53d9,	// (0x0002fa7e) list_form_graphic_pane_g1

0x53e1,	// (0x0002fa86) list_form_graphic_pane_t1_ParamLimits

0x53e1,	// (0x0002fa86) list_form_graphic_pane_t1

0x7f46,	// (0x000325eb) list_highlight_pane_cp5_ParamLimits

0x7f46,	// (0x000325eb) list_highlight_pane_cp5

0x53f6,	// (0x0002fa9b) find_pane_g1

0x8855,	// (0x00032efa) input_find_pane

0x53ff,	// (0x0002faa4) input_find_pane_g1_ParamLimits

0x53ff,	// (0x0002faa4) input_find_pane_g1

0x540b,	// (0x0002fab0) input_find_pane_t1_ParamLimits

0x540b,	// (0x0002fab0) input_find_pane_t1

0x5420,	// (0x0002fac5) input_find_pane_t2_ParamLimits

0x5420,	// (0x0002fac5) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00039d46) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00039d46) input_find_pane_t

0x885e,	// (0x00032f03) input_focus_pane_cp5_ParamLimits

0x885e,	// (0x00032f03) input_focus_pane_cp5

0x8878,	// (0x00032f1d) bg_popup_window_pane_cp2_ParamLimits

0x8878,	// (0x00032f1d) bg_popup_window_pane_cp2

0x8885,	// (0x00032f2a) listscroll_menu_pane_ParamLimits

0x8885,	// (0x00032f2a) listscroll_menu_pane

0x8891,	// (0x00032f36) popup_submenu_window_ParamLimits

0x8891,	// (0x00032f36) popup_submenu_window

0x88bd,	// (0x00032f62) find_popup_pane_g1

0x88c5,	// (0x00032f6a) input_popup_find_pane_cp

0x885e,	// (0x00032f03) input_focus_pane_cp4_ParamLimits

0x885e,	// (0x00032f03) input_focus_pane_cp4

0x88db,	// (0x00032f80) input_popup_find_pane_t1_ParamLimits

0x88db,	// (0x00032f80) input_popup_find_pane_t1

0x7e66,	// (0x0003250b) bg_popup_sub_pane_cp

0x8909,	// (0x00032fae) listscroll_popup_sub_pane

0x8911,	// (0x00032fb6) list_submenu_pane_ParamLimits

0x8911,	// (0x00032fb6) list_submenu_pane

0x8922,	// (0x00032fc7) scroll_pane_cp4

0x892a,	// (0x00032fcf) list_single_popup_submenu_pane_ParamLimits

0x892a,	// (0x00032fcf) list_single_popup_submenu_pane

0x893e,	// (0x00032fe3) list_single_popup_submenu_pane_g1

0x8946,	// (0x00032feb) list_single_popup_submenu_pane_t1_ParamLimits

0x8946,	// (0x00032feb) list_single_popup_submenu_pane_t1

0x7f46,	// (0x000325eb) bg_active_tab_pane_cp1_ParamLimits

0x7f46,	// (0x000325eb) bg_active_tab_pane_cp1

0x895b,	// (0x00033000) tabs_2_active_pane_g1

0x8963,	// (0x00033008) tabs_2_active_pane_t1

0x7f46,	// (0x000325eb) bg_passive_tab_pane_cp1_ParamLimits

0x7f46,	// (0x000325eb) bg_passive_tab_pane_cp1

0x895b,	// (0x00033000) tabs_2_passive_pane_g1

0x8963,	// (0x00033008) tabs_2_passive_pane_t1

0x8975,	// (0x0003301a) bg_active_tab_pane_cp4

0x8983,	// (0x00033028) tabs_2_long_active_pane_t1

0x8996,	// (0x0003303b) bg_passive_tab_pane_cp4

0x603a,	// (0x000306df) list_single_midp_graphic_pane_g4_ParamLimits

0x8975,	// (0x0003301a) bg_active_tab_pane_cp5

0x89a2,	// (0x00033047) tabs_3_long_active_pane_t1

0x8996,	// (0x0003303b) bg_passive_tab_pane_cp5

0x603a,	// (0x000306df) list_single_midp_graphic_pane_g4

0x7f46,	// (0x000325eb) bg_popup_window_pane_cp13_ParamLimits

0x7f46,	// (0x000325eb) bg_popup_window_pane_cp13

0x89bd,	// (0x00033062) listscroll_popup_fast_pane_ParamLimits

0x89bd,	// (0x00033062) listscroll_popup_fast_pane

0x89cc,	// (0x00033071) grid_popup_fast_pane_ParamLimits

0x89cc,	// (0x00033071) grid_popup_fast_pane

0x89de,	// (0x00033083) scroll_pane_cp9_ParamLimits

0x89de,	// (0x00033083) scroll_pane_cp9

0xcae0,	// (0x00037185) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae0,	// (0x00037185) list_single_graphic_hl_pane_t1_cp2

0x8a02,	// (0x000330a7) input_focus_pane_cp20_ParamLimits

0x8a02,	// (0x000330a7) input_focus_pane_cp20

0x8a10,	// (0x000330b5) query_popup_data_pane_t1_ParamLimits

0x8a10,	// (0x000330b5) query_popup_data_pane_t1

0x8a23,	// (0x000330c8) query_popup_data_pane_t2_ParamLimits

0x8a23,	// (0x000330c8) query_popup_data_pane_t2

0x8a69,	// (0x0003310e) query_popup_data_pane_t3_ParamLimits

0x8a69,	// (0x0003310e) query_popup_data_pane_t3

0x8aaa,	// (0x0003314f) query_popup_data_pane_t4_ParamLimits

0x8aaa,	// (0x0003314f) query_popup_data_pane_t4

0x8ae6,	// (0x0003318b) query_popup_data_pane_t5_ParamLimits

0x8ae6,	// (0x0003318b) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00039d4b) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00039d4b) query_popup_data_pane_t

0x880d,	// (0x00032eb2) bg_set_opt_pane_g1

0x8815,	// (0x00032eba) bg_set_opt_pane_g2

0x881d,	// (0x00032ec2) bg_set_opt_pane_g3

0x8825,	// (0x00032eca) bg_set_opt_pane_g4

0x882d,	// (0x00032ed2) bg_set_opt_pane_g5

0x8835,	// (0x00032eda) bg_set_opt_pane_g6

0x883d,	// (0x00032ee2) bg_set_opt_pane_g7

0x8845,	// (0x00032eea) bg_set_opt_pane_g8

0x884d,	// (0x00032ef2) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00039d56) bg_set_opt_pane_g

0x56d2,	// (0x0002fd77) control_top_pane_stacon_ParamLimits

0x56d2,	// (0x0002fd77) control_top_pane_stacon

0x5725,	// (0x0002fdca) signal_pane_stacon_ParamLimits

0x5725,	// (0x0002fdca) signal_pane_stacon

0x90da,	// (0x0003377f) stacon_top_pane_g1_ParamLimits

0x90da,	// (0x0003377f) stacon_top_pane_g1

0x574a,	// (0x0002fdef) title_pane_stacon_ParamLimits

0x574a,	// (0x0002fdef) title_pane_stacon

0x5774,	// (0x0002fe19) uni_indicator_pane_stacon_ParamLimits

0x5774,	// (0x0002fe19) uni_indicator_pane_stacon

0x5789,	// (0x0002fe2e) battery_pane_stacon_ParamLimits

0x5789,	// (0x0002fe2e) battery_pane_stacon

0x57cd,	// (0x0002fe72) control_bottom_pane_stacon_ParamLimits

0x57cd,	// (0x0002fe72) control_bottom_pane_stacon

0x57f0,	// (0x0002fe95) navi_pane_stacon_ParamLimits

0x57f0,	// (0x0002fe95) navi_pane_stacon

0x90fc,	// (0x000337a1) stacon_bottom_pane_g1_ParamLimits

0x90fc,	// (0x000337a1) stacon_bottom_pane_g1

0x5435,	// (0x0002fada) aid_levels_signal_lsc_ParamLimits

0x5435,	// (0x0002fada) aid_levels_signal_lsc

0x544b,	// (0x0002faf0) signal_pane_stacon_g1_ParamLimits

0x544b,	// (0x0002faf0) signal_pane_stacon_g1

0x545f,	// (0x0002fb04) signal_pane_stacon_g2_ParamLimits

0x545f,	// (0x0002fb04) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00039d69) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00039d69) signal_pane_stacon_g

0x5494,	// (0x0002fb39) title_pane_stacon_t1_ParamLimits

0x5494,	// (0x0002fb39) title_pane_stacon_t1

0x8b2a,	// (0x000331cf) uni_indicator_pane_stacon_g1

0x8b34,	// (0x000331d9) uni_indicator_pane_stacon_g2

0x8b3e,	// (0x000331e3) uni_indicator_pane_stacon_g3

0x8b48,	// (0x000331ed) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00039d75) uni_indicator_pane_stacon_g

0x54b9,	// (0x0002fb5e) control_top_pane_stacon_g1

0x54c1,	// (0x0002fb66) control_top_pane_stacon_t1_ParamLimits

0x54c1,	// (0x0002fb66) control_top_pane_stacon_t1

0x54f8,	// (0x0002fb9d) aid_levels_battery_lsc_ParamLimits

0x54f8,	// (0x0002fb9d) aid_levels_battery_lsc

0x550f,	// (0x0002fbb4) battery_pane_stacon_g1_ParamLimits

0x550f,	// (0x0002fbb4) battery_pane_stacon_g1

0x5522,	// (0x0002fbc7) battery_pane_stacon_g2_ParamLimits

0x5522,	// (0x0002fbc7) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00039d7e) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00039d7e) battery_pane_stacon_g

0x5560,	// (0x0002fc05) navi_icon_pane_stacon

0x5574,	// (0x0002fc19) navi_navi_pane_stacon

0x5560,	// (0x0002fc05) navi_text_pane_stacon

0x54b9,	// (0x0002fb5e) control_bottom_pane_stacon_g1

0x5588,	// (0x0002fc2d) control_bottom_pane_stacon_t1_ParamLimits

0x5588,	// (0x0002fc2d) control_bottom_pane_stacon_t1

0x8b6c,	// (0x00033211) grid_app_pane_ParamLimits

0x8b6c,	// (0x00033211) grid_app_pane

0x8b90,	// (0x00033235) scroll_pane_cp15_ParamLimits

0x8b90,	// (0x00033235) scroll_pane_cp15

0x8ba3,	// (0x00033248) cell_app_pane_ParamLimits

0x8ba3,	// (0x00033248) cell_app_pane

0x8bcb,	// (0x00033270) cell_app_pane_g1_ParamLimits

0x8bcb,	// (0x00033270) cell_app_pane_g1

0x8bef,	// (0x00033294) cell_app_pane_g2_ParamLimits

0x8bef,	// (0x00033294) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00039d83) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00039d83) cell_app_pane_g

0x8bfb,	// (0x000332a0) cell_app_pane_t1_ParamLimits

0x8bfb,	// (0x000332a0) cell_app_pane_t1

0x8c12,	// (0x000332b7) grid_highlight_pane_ParamLimits

0x8c12,	// (0x000332b7) grid_highlight_pane

0x880d,	// (0x00032eb2) cell_highlight_pane_g1

0x8815,	// (0x00032eba) cell_highlight_pane_g2

0x881d,	// (0x00032ec2) cell_highlight_pane_g3

0x8825,	// (0x00032eca) cell_highlight_pane_g4

0x882d,	// (0x00032ed2) cell_highlight_pane_g5

0x8835,	// (0x00032eda) cell_highlight_pane_g6

0x883d,	// (0x00032ee2) cell_highlight_pane_g7

0x8845,	// (0x00032eea) cell_highlight_pane_g8

0x884d,	// (0x00032ef2) cell_highlight_pane_g9

0x7e5c,	// (0x00032501) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00039d31) cell_highlight_pane_g

0x8c23,	// (0x000332c8) bg_scroll_pane

0x55d2,	// (0x0002fc77) scroll_handle_pane

0x8c6a,	// (0x0003330f) scroll_bg_pane_g1

0x8c7f,	// (0x00033324) scroll_bg_pane_g2

0x8c97,	// (0x0003333c) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00039d88) scroll_bg_pane_g

0x8cac,	// (0x00033351) scroll_handle_focus_pane_ParamLimits

0x8cac,	// (0x00033351) scroll_handle_focus_pane

0x8c6a,	// (0x0003330f) scroll_handle_pane_g1

0x8cb9,	// (0x0003335e) scroll_handle_pane_g2

0x8c97,	// (0x0003333c) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00039d8f) scroll_handle_pane_g

0x885e,	// (0x00032f03) bg_popup_sub_pane_cp21_ParamLimits

0x885e,	// (0x00032f03) bg_popup_sub_pane_cp21

0x8ccd,	// (0x00033372) popup_fep_japan_predictive_window_t1_ParamLimits

0x8ccd,	// (0x00033372) popup_fep_japan_predictive_window_t1

0x8ce7,	// (0x0003338c) popup_fep_japan_predictive_window_t2_ParamLimits

0x8ce7,	// (0x0003338c) popup_fep_japan_predictive_window_t2

0x8d1a,	// (0x000333bf) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d1a,	// (0x000333bf) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00039d96) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00039d96) popup_fep_japan_predictive_window_t

0x7e66,	// (0x0003250b) bg_popup_sub_pane_cp23

0x8d51,	// (0x000333f6) listscroll_japin_cand_pane

0x8d59,	// (0x000333fe) popup_fep_japan_candidate_window_t1

0x8d67,	// (0x0003340c) candidate_pane_ParamLimits

0x8d67,	// (0x0003340c) candidate_pane

0x8d79,	// (0x0003341e) scroll_pane_cp30

0x8d81,	// (0x00033426) list_single_popup_jap_candidate_pane_ParamLimits

0x8d81,	// (0x00033426) list_single_popup_jap_candidate_pane

0x7e66,	// (0x0003250b) list_highlight_pane_cp30

0x8d96,	// (0x0003343b) list_single_popup_jap_candidate_pane_t1

0x8da5,	// (0x0003344a) level_1_signal

0x8db7,	// (0x0003345c) level_2_signal

0x8dca,	// (0x0003346f) level_3_signal

0x8ddd,	// (0x00033482) level_4_signal

0x8df0,	// (0x00033495) level_5_signal

0x8e03,	// (0x000334a8) level_6_signal

0x8e16,	// (0x000334bb) level_7_signal

0x8da5,	// (0x0003344a) level_1_battery

0x8db7,	// (0x0003345c) level_2_battery

0x8dca,	// (0x0003346f) level_3_battery

0x8ddd,	// (0x00033482) level_4_battery

0x8df0,	// (0x00033495) level_5_battery

0x8e03,	// (0x000334a8) level_6_battery

0x8e16,	// (0x000334bb) level_7_battery

0x8e41,	// (0x000334e6) list_menu_pane_ParamLimits

0x8e41,	// (0x000334e6) list_menu_pane

0x8e57,	// (0x000334fc) scroll_pane_cp25_ParamLimits

0x8e57,	// (0x000334fc) scroll_pane_cp25

0x8e70,	// (0x00033515) list_double2_graphic_pane_cp2_ParamLimits

0x8e70,	// (0x00033515) list_double2_graphic_pane_cp2

0x8e70,	// (0x00033515) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e70,	// (0x00033515) list_double2_large_graphic_pane_cp2

0x8e70,	// (0x00033515) list_double2_pane_cp2_ParamLimits

0x8e70,	// (0x00033515) list_double2_pane_cp2

0x8e70,	// (0x00033515) list_double_graphic_pane_cp2_ParamLimits

0x8e70,	// (0x00033515) list_double_graphic_pane_cp2

0x8e70,	// (0x00033515) list_double_large_graphic_pane_cp2_ParamLimits

0x8e70,	// (0x00033515) list_double_large_graphic_pane_cp2

0x8e70,	// (0x00033515) list_double_number_pane_cp2_ParamLimits

0x8e70,	// (0x00033515) list_double_number_pane_cp2

0x8e70,	// (0x00033515) list_double_pane_cp2_ParamLimits

0x8e70,	// (0x00033515) list_double_pane_cp2

0x8e94,	// (0x00033539) list_single_2graphic_pane_cp2_ParamLimits

0x8e94,	// (0x00033539) list_single_2graphic_pane_cp2

0x8e94,	// (0x00033539) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e94,	// (0x00033539) list_single_graphic_heading_pane_cp2

0x8e94,	// (0x00033539) list_single_graphic_pane_cp2_ParamLimits

0x8e94,	// (0x00033539) list_single_graphic_pane_cp2

0x8e94,	// (0x00033539) list_single_heading_pane_cp2_ParamLimits

0x8e94,	// (0x00033539) list_single_heading_pane_cp2

0x8ead,	// (0x00033552) list_single_large_graphic_pane_cp2_ParamLimits

0x8ead,	// (0x00033552) list_single_large_graphic_pane_cp2

0x8e94,	// (0x00033539) list_single_number_heading_pane_cp2_ParamLimits

0x8e94,	// (0x00033539) list_single_number_heading_pane_cp2

0x8e94,	// (0x00033539) list_single_number_pane_cp2_ParamLimits

0x8e94,	// (0x00033539) list_single_number_pane_cp2

0x8e94,	// (0x00033539) list_single_pane_cp2_ParamLimits

0x8e94,	// (0x00033539) list_single_pane_cp2

0x8f29,	// (0x000335ce) bg_popup_sub_pane_cp22

0x5684,	// (0x0002fd29) popup_side_volume_key_window_g1

0x56ae,	// (0x0002fd53) popup_side_volume_key_window_t1

0x56ca,	// (0x0002fd6f) volume_small_pane_cp1

0x81c1,	// (0x00032866) bg_popup_sub_pane_cp24_ParamLimits

0x81c1,	// (0x00032866) bg_popup_sub_pane_cp24

0x8f3f,	// (0x000335e4) fep_china_uni_candidate_pane_ParamLimits

0x8f3f,	// (0x000335e4) fep_china_uni_candidate_pane

0x8f53,	// (0x000335f8) fep_china_uni_entry_pane

0x8f63,	// (0x00033608) popup_fep_china_uni_window_g1

0x8f7f,	// (0x00033624) fep_china_uni_entry_pane_g1

0x8f87,	// (0x0003362c) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00039dc7) fep_china_uni_entry_pane_g

0x8f8f,	// (0x00033634) fep_entry_item_pane

0x8f99,	// (0x0003363e) fep_candidate_item_pane

0x8fa1,	// (0x00033646) fep_china_uni_candidate_pane_g1

0x8fa9,	// (0x0003364e) fep_china_uni_candidate_pane_g2

0x8fb1,	// (0x00033656) fep_china_uni_candidate_pane_g3

0x8fb9,	// (0x0003365e) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00039dcc) fep_china_uni_candidate_pane_g

0x7e5c,	// (0x00032501) fep_entry_item_pane_g1

0x8fc1,	// (0x00033666) fep_entry_item_pane_t1_ParamLimits

0x8fc1,	// (0x00033666) fep_entry_item_pane_t1

0x8fd7,	// (0x0003367c) fep_candidate_item_pane_t1_ParamLimits

0x8fd7,	// (0x0003367c) fep_candidate_item_pane_t1

0x8fec,	// (0x00033691) fep_candidate_item_pane_t2_ParamLimits

0x8fec,	// (0x00033691) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00039dd5) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00039dd5) fep_candidate_item_pane_t

0x7f46,	// (0x000325eb) list_highlight_pane_cp31_ParamLimits

0x7f46,	// (0x000325eb) list_highlight_pane_cp31

0x8ffe,	// (0x000336a3) level_1_signal_lsc

0x9007,	// (0x000336ac) level_2_signal_lsc

0x9010,	// (0x000336b5) level_3_signal_lsc

0x9019,	// (0x000336be) level_4_signal_lsc

0x9022,	// (0x000336c7) level_5_signal_lsc

0x902b,	// (0x000336d0) level_6_signal_lsc

0x9034,	// (0x000336d9) level_7_signal_lsc

0x9034,	// (0x000336d9) level_1_battery_lsc

0x903d,	// (0x000336e2) level_2_battery_lsc

0x9046,	// (0x000336eb) level_3_battery_lsc

0x904f,	// (0x000336f4) level_4_battery_lsc

0x9058,	// (0x000336fd) level_5_battery_lsc

0x9061,	// (0x00033706) level_6_battery_lsc

0x8ffe,	// (0x000336a3) level_7_battery_lsc

0x906a,	// (0x0003370f) scroll_handle_focus_pane_g1

0x9073,	// (0x00033718) scroll_handle_focus_pane_g2

0x907c,	// (0x00033721) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00039dda) scroll_handle_focus_pane_g

0x7434,	// (0x00031ad9) list_single_2graphic_pane_g1_ParamLimits

0x7434,	// (0x00031ad9) list_single_2graphic_pane_g1

0x4dc7,	// (0x0002f46c) list_single_2graphic_pane_g2_ParamLimits

0x4dc7,	// (0x0002f46c) list_single_2graphic_pane_g2

0x4d4d,	// (0x0002f3f2) list_single_2graphic_pane_g3_ParamLimits

0x4d4d,	// (0x0002f3f2) list_single_2graphic_pane_g3

0x7440,	// (0x00031ae5) list_single_2graphic_pane_g4_ParamLimits

0x7440,	// (0x00031ae5) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00039de1) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00039de1) list_single_2graphic_pane_g

0x744c,	// (0x00031af1) list_single_2graphic_pane_t1_ParamLimits

0x744c,	// (0x00031af1) list_single_2graphic_pane_t1

0x747a,	// (0x00031b1f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x747a,	// (0x00031b1f) list_double2_graphic_large_graphic_pane_g1

0x4e6c,	// (0x0002f511) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4e6c,	// (0x0002f511) list_double2_graphic_large_graphic_pane_g2

0x4e7d,	// (0x0002f522) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4e7d,	// (0x0002f522) list_double2_graphic_large_graphic_pane_g3

0x748a,	// (0x00031b2f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x748a,	// (0x00031b2f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00039dea) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00039dea) list_double2_graphic_large_graphic_pane_g

0x7496,	// (0x00031b3b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7496,	// (0x00031b3b) list_double2_graphic_large_graphic_pane_t1

0x74ac,	// (0x00031b51) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x74ac,	// (0x00031b51) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00039df3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00039df3) list_double2_graphic_large_graphic_pane_t

0x91c4,	// (0x00033869) popup_fast_swap_window_ParamLimits

0x91c4,	// (0x00033869) popup_fast_swap_window

0x91e0,	// (0x00033885) popup_side_volume_key_window

0x91fc,	// (0x000338a1) stacon_top_pane

0x9206,	// (0x000338ab) status_pane_ParamLimits

0x9206,	// (0x000338ab) status_pane

0x9214,	// (0x000338b9) status_small_pane

0x7e66,	// (0x0003250b) control_pane

0x7e66,	// (0x0003250b) stacon_bottom_pane

0x8798,	// (0x00032e3d) scroll_pane_cp121

0x878f,	// (0x00032e34) set_content_pane

0x9085,	// (0x0003372a) bg_active_tab_pane_g1_cp1

0x908e,	// (0x00033733) bg_active_tab_pane_g2_cp1

0x9097,	// (0x0003373c) bg_active_tab_pane_g3_cp1

0x9085,	// (0x0003372a) bg_passive_tab_pane_g1_cp1

0x908e,	// (0x00033733) bg_passive_tab_pane_g2_cp1

0x9097,	// (0x0003373c) bg_passive_tab_pane_g3_cp1

0x90a0,	// (0x00033745) bg_active_tab_pane_g1_cp2

0x908e,	// (0x00033733) bg_active_tab_pane_g2_cp2

0x90a9,	// (0x0003374e) bg_active_tab_pane_g3_cp2

0x90a0,	// (0x00033745) bg_passive_tab_pane_g1_cp2

0x908e,	// (0x00033733) bg_passive_tab_pane_g2_cp2

0x90a9,	// (0x0003374e) bg_passive_tab_pane_g3_cp2

0x90b2,	// (0x00033757) bg_active_tab_pane_g1_cp3

0x908e,	// (0x00033733) bg_active_tab_pane_g2_cp3

0x90bb,	// (0x00033760) bg_active_tab_pane_g3_cp3

0x90b2,	// (0x00033757) bg_passive_tab_pane_g1_cp3

0x908e,	// (0x00033733) bg_passive_tab_pane_g2_cp3

0x90bb,	// (0x00033760) bg_passive_tab_pane_g3_cp3

0x90c4,	// (0x00033769) bg_active_tab_pane_g1_cp4

0x908e,	// (0x00033733) bg_active_tab_pane_g2_cp4

0x90cf,	// (0x00033774) bg_active_tab_pane_g3_cp4

0x90c4,	// (0x00033769) bg_passive_tab_pane_g1_cp4

0x908e,	// (0x00033733) bg_passive_tab_pane_g2_cp4

0x90cf,	// (0x00033774) bg_passive_tab_pane_g3_cp4

0x9118,	// (0x000337bd) bg_active_tab_pane_g1_cp5

0x908e,	// (0x00033733) bg_active_tab_pane_g2_cp5

0x9121,	// (0x000337c6) bg_active_tab_pane_g3_cp5

0x9118,	// (0x000337bd) bg_passive_tab_pane_g1_cp5

0x908e,	// (0x00033733) bg_passive_tab_pane_g2_cp5

0x9121,	// (0x000337c6) bg_passive_tab_pane_g3_cp5

0x912a,	// (0x000337cf) list_set_graphic_pane_ParamLimits

0x912a,	// (0x000337cf) list_set_graphic_pane

0x7e66,	// (0x0003250b) bg_set_opt_pane_cp4

0x9147,	// (0x000337ec) list_set_graphic_pane_g1_ParamLimits

0x9147,	// (0x000337ec) list_set_graphic_pane_g1

0x9153,	// (0x000337f8) list_set_graphic_pane_g2_ParamLimits

0x9153,	// (0x000337f8) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00039df8) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00039df8) list_set_graphic_pane_g

0x0009,

0xfac8,	// (0x0003a16d) volume_small_pane_cp_g

0x9177,	// (0x0003381c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9177,	// (0x0003381c) list_double2_large_graphic_pane_g1_cp2

0x9183,	// (0x00033828) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9183,	// (0x00033828) list_double2_large_graphic_pane_g2_cp2

0x9194,	// (0x00033839) list_double2_large_graphic_pane_g3_cp2

0x919c,	// (0x00033841) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x919c,	// (0x00033841) list_double2_large_graphic_pane_t1_cp2

0x91b2,	// (0x00033857) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91b2,	// (0x00033857) list_double2_large_graphic_pane_t2_cp2

0xad95,	// (0x0003543a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad95,	// (0x0003543a) list_double_large_graphic_pane_g1_cp2

0xada6,	// (0x0003544b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xada6,	// (0x0003544b) list_double_large_graphic_pane_g2_cp2

0x932d,	// (0x000339d2) list_double_large_graphic_pane_g3_cp2

0xadb7,	// (0x0003545c) list_double_large_graphic_pane_g4_cp

0xadbf,	// (0x00035464) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xadbf,	// (0x00035464) list_double_large_graphic_pane_t1_cp2

0xadd6,	// (0x0003547b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadd6,	// (0x0003547b) list_double_large_graphic_pane_t2_cp2

0x921f,	// (0x000338c4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x921f,	// (0x000338c4) list_double2_graphic_pane_g1_cp2

0x922d,	// (0x000338d2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x922d,	// (0x000338d2) list_double2_graphic_pane_g2_cp2

0x923e,	// (0x000338e3) list_double2_graphic_pane_g3_cp2

0x9248,	// (0x000338ed) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9248,	// (0x000338ed) list_double2_graphic_pane_t1_cp2

0x925e,	// (0x00033903) list_double2_graphic_pane_t2_cp2_ParamLimits

0x925e,	// (0x00033903) list_double2_graphic_pane_t2_cp2

0x9270,	// (0x00033915) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9270,	// (0x00033915) list_single_number_heading_pane_g1_cp2

0x927c,	// (0x00033921) list_single_number_heading_pane_g2_cp2

0x9284,	// (0x00033929) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9284,	// (0x00033929) list_single_number_heading_pane_t1_cp2

0x929a,	// (0x0003393f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x929a,	// (0x0003393f) list_single_number_heading_pane_t2_cp2

0x92ac,	// (0x00033951) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92ac,	// (0x00033951) list_single_number_heading_pane_t3_cp2

0x9270,	// (0x00033915) list_single_heading_pane_g1_cp2_ParamLimits

0x9270,	// (0x00033915) list_single_heading_pane_g1_cp2

0x927c,	// (0x00033921) list_single_heading_pane_g2_cp2

0x9284,	// (0x00033929) list_single_heading_pane_t1_cp2_ParamLimits

0x9284,	// (0x00033929) list_single_heading_pane_t1_cp2

0xab9d,	// (0x00035242) list_single_heading_pane_t2_cp2_ParamLimits

0xab9d,	// (0x00035242) list_single_heading_pane_t2_cp2

0xaae5,	// (0x0003518a) list_double_graphic_pane_g1_cp2_ParamLimits

0xaae5,	// (0x0003518a) list_double_graphic_pane_g1_cp2

0xaaf1,	// (0x00035196) list_double_graphic_pane_g2_cp2_ParamLimits

0xaaf1,	// (0x00035196) list_double_graphic_pane_g2_cp2

0xab00,	// (0x000351a5) list_double_graphic_pane_g3_cp2

0xab08,	// (0x000351ad) list_double_graphic_pane_t1_cp2_ParamLimits

0xab08,	// (0x000351ad) list_double_graphic_pane_t1_cp2

0xab1e,	// (0x000351c3) list_double_graphic_pane_t2_cp2_ParamLimits

0xab1e,	// (0x000351c3) list_double_graphic_pane_t2_cp2

0x9321,	// (0x000339c6) list_double_number_pane_g1_cp2_ParamLimits

0x9321,	// (0x000339c6) list_double_number_pane_g1_cp2

0x932d,	// (0x000339d2) list_double_number_pane_g2_cp2

0xaaa9,	// (0x0003514e) list_double_number_pane_t1_cp2_ParamLimits

0xaaa9,	// (0x0003514e) list_double_number_pane_t1_cp2

0xaabd,	// (0x00035162) list_double_number_pane_t2_cp2_ParamLimits

0xaabd,	// (0x00035162) list_double_number_pane_t2_cp2

0xaad3,	// (0x00035178) list_double_number_pane_t3_cp2_ParamLimits

0xaad3,	// (0x00035178) list_double_number_pane_t3_cp2

0xa992,	// (0x00035037) list_single_graphic_pane_g1_cp2_ParamLimits

0xa992,	// (0x00035037) list_single_graphic_pane_g1_cp2

0x9385,	// (0x00033a2a) list_single_graphic_pane_g2_cp2_ParamLimits

0x9385,	// (0x00033a2a) list_single_graphic_pane_g2_cp2

0x9391,	// (0x00033a36) list_single_graphic_pane_g3_cp2

0xa968,	// (0x0003500d) list_single_graphic_pane_t1_cp2_ParamLimits

0xa968,	// (0x0003500d) list_single_graphic_pane_t1_cp2

0x9385,	// (0x00033a2a) list_single_number_pane_g1_cp2_ParamLimits

0x9385,	// (0x00033a2a) list_single_number_pane_g1_cp2

0x9391,	// (0x00033a36) list_single_number_pane_g2_cp2

0xa968,	// (0x0003500d) list_single_number_pane_t1_cp2_ParamLimits

0xa968,	// (0x0003500d) list_single_number_pane_t1_cp2

0xa97e,	// (0x00035023) list_single_number_pane_t2_cp2_ParamLimits

0xa97e,	// (0x00035023) list_single_number_pane_t2_cp2

0x9183,	// (0x00033828) list_double2_pane_g1_cp2_ParamLimits

0x9183,	// (0x00033828) list_double2_pane_g1_cp2

0x9194,	// (0x00033839) list_double2_pane_g2_cp2

0x92f9,	// (0x0003399e) list_double2_pane_t1_cp2_ParamLimits

0x92f9,	// (0x0003399e) list_double2_pane_t1_cp2

0x930f,	// (0x000339b4) list_double2_pane_t2_cp2_ParamLimits

0x930f,	// (0x000339b4) list_double2_pane_t2_cp2

0x9321,	// (0x000339c6) list_double_pane_g1_cp2_ParamLimits

0x9321,	// (0x000339c6) list_double_pane_g1_cp2

0x932d,	// (0x000339d2) list_double_pane_g2_cp2

0x9335,	// (0x000339da) list_double_pane_t1_cp2_ParamLimits

0x9335,	// (0x000339da) list_double_pane_t1_cp2

0x934b,	// (0x000339f0) list_double_pane_t2_cp2_ParamLimits

0x934b,	// (0x000339f0) list_double_pane_t2_cp2

0x9375,	// (0x00033a1a) list_single_pane_cp2_g3

0x9385,	// (0x00033a2a) list_single_pane_g1_cp2_ParamLimits

0x9385,	// (0x00033a2a) list_single_pane_g1_cp2

0x9391,	// (0x00033a36) list_single_pane_g2_cp2

0x9399,	// (0x00033a3e) list_single_pane_t1_cp2_ParamLimits

0x9399,	// (0x00033a3e) list_single_pane_t1_cp2

0x93b1,	// (0x00033a56) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93b1,	// (0x00033a56) list_single_large_graphic_pane_g1_cp2

0x93bd,	// (0x00033a62) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x93bd,	// (0x00033a62) list_single_large_graphic_pane_g2_cp2

0x93c9,	// (0x00033a6e) list_single_large_graphic_pane_g3_cp2

0x93d1,	// (0x00033a76) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x93d1,	// (0x00033a76) list_single_large_graphic_pane_g4_cp1

0x93eb,	// (0x00033a90) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x93eb,	// (0x00033a90) list_single_large_graphic_pane_t1_cp2

0xa934,	// (0x00034fd9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa934,	// (0x00034fd9) list_single_graphic_heading_pane_g1_cp2

0xa901,	// (0x00034fa6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa901,	// (0x00034fa6) list_single_graphic_heading_pane_g4_cp2

0x9391,	// (0x00033a36) list_single_graphic_heading_pane_g5_cp2

0xa940,	// (0x00034fe5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa940,	// (0x00034fe5) list_single_graphic_heading_pane_t1_cp2

0xa956,	// (0x00034ffb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa956,	// (0x00034ffb) list_single_graphic_heading_pane_t2_cp2

0xa8f5,	// (0x00034f9a) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8f5,	// (0x00034f9a) list_single_2graphic_pane_g1_cp2

0xa901,	// (0x00034fa6) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa901,	// (0x00034fa6) list_single_2graphic_pane_g2_cp2

0x9391,	// (0x00033a36) list_single_2graphic_pane_g3_cp2

0xa912,	// (0x00034fb7) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa912,	// (0x00034fb7) list_single_2graphic_pane_g4_cp2

0xa91e,	// (0x00034fc3) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa91e,	// (0x00034fc3) list_single_2graphic_pane_t1_cp2

0x7e5c,	// (0x00032501) list_highlight_pane_g10_cp1

0xa4c1,	// (0x00034b66) list_highlight_pane_g1_cp1

0xa4c9,	// (0x00034b6e) list_highlight_pane_g2_cp1

0xa4d1,	// (0x00034b76) list_highlight_pane_g3_cp1

0xa4d9,	// (0x00034b7e) list_highlight_pane_g4_cp1

0xa4e1,	// (0x00034b86) list_highlight_pane_g5_cp1

0xa4e9,	// (0x00034b8e) list_highlight_pane_g6_cp1

0xa4f1,	// (0x00034b96) list_highlight_pane_g7_cp1

0xa4f9,	// (0x00034b9e) list_highlight_pane_g8_cp1

0xa501,	// (0x00034ba6) list_highlight_pane_g9_cp1

0xa3e1,	// (0x00034a86) form_field_slider_pane_t3

0xa3ef,	// (0x00034a94) form_field_slider_pane_t4

0xa3fd,	// (0x00034aa2) slider_form_pane_ParamLimits

0xa3fd,	// (0x00034aa2) slider_form_pane

0x7e66,	// (0x0003250b) control_abbreviations

0x7e66,	// (0x0003250b) control_conventions

0x7e66,	// (0x0003250b) control_definitions

0x7e66,	// (0x0003250b) format_table_attribute

0xabe7,	// (0x0003528c) bg_popup_preview_window_pane_g9

0x7e66,	// (0x0003250b) format_table_data2

0x7e66,	// (0x0003250b) format_table_data3

0x7e66,	// (0x0003250b) format_table_data_example

0x0008,

0x7e66,	// (0x0003250b) intro_purpose

0xf8ef,	// (0x00039f94) bg_popup_preview_window_pane_g

0x7e66,	// (0x0003250b) texts_category

0x7e66,	// (0x0003250b) texts_graphics

0x9401,	// (0x00033aa6) text_digital

0x9410,	// (0x00033ab5) text_primary

0x941f,	// (0x00033ac4) text_primary_small

0x942e,	// (0x00033ad3) text_secondary

0x943d,	// (0x00033ae2) text_title

0xb321,	// (0x000359c6) bg_passive_tab_pane_g1_cp3_srt

0x908e,	// (0x00033733) bg_passive_tab_pane_g2_cp3_srt

0xb32a,	// (0x000359cf) bg_passive_tab_pane_g3_cp3_srt

0x7f46,	// (0x000325eb) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f46,	// (0x000325eb) bg_active_tab_pane_cp3_srt

0xb333,	// (0x000359d8) tabs_4_active_pane_srt_g1

0xb33b,	// (0x000359e0) tabs_4_active_pane_srt_t1_ParamLimits

0xb33b,	// (0x000359e0) tabs_4_active_pane_srt_t1

0xb321,	// (0x000359c6) bg_active_tab_pane_g1_cp3_copy1

0x908e,	// (0x00033733) bg_active_tab_pane_g2_cp3_copy1

0xb32a,	// (0x000359cf) bg_active_tab_pane_g3_cp3_copy1

0x7f46,	// (0x000325eb) tabs_2_long_active_pane_srt_ParamLimits

0x7f46,	// (0x000325eb) tabs_2_long_active_pane_srt

0x7f46,	// (0x000325eb) tabs_2_long_passive_pane_srt_ParamLimits

0x7f46,	// (0x000325eb) tabs_2_long_passive_pane_srt

0x8996,	// (0x0003303b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8996,	// (0x0003303b) bg_passive_tab_pane_cp4_srt

0xb015,	// (0x000356ba) bg_passive_tab_pane_g1_cp4_srt

0x908e,	// (0x00033733) bg_passive_tab_pane_g2_cp4_srt

0xb01e,	// (0x000356c3) bg_passive_tab_pane_g3_cp4_srt

0x8975,	// (0x0003301a) bg_active_tab_pane_cp4_srt_ParamLimits

0x8975,	// (0x0003301a) bg_active_tab_pane_cp4_srt

0xb027,	// (0x000356cc) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb027,	// (0x000356cc) tabs_2_long_active_pane_srt_t1

0xb015,	// (0x000356ba) bg_active_tab_pane_g1_cp4_srt

0x908e,	// (0x00033733) bg_active_tab_pane_g2_cp4_srt

0xb01e,	// (0x000356c3) bg_active_tab_pane_g3_cp4_srt

0x81c1,	// (0x00032866) tabs_3_long_active_pane_srt_ParamLimits

0x81c1,	// (0x00032866) tabs_3_long_active_pane_srt

0x81c1,	// (0x00032866) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x81c1,	// (0x00032866) tabs_3_long_passive_pane_cp_srt

0x81c1,	// (0x00032866) tabs_3_long_passive_pane_srt_ParamLimits

0x81c1,	// (0x00032866) tabs_3_long_passive_pane_srt

0x8996,	// (0x0003303b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8996,	// (0x0003303b) bg_passive_tab_pane_cp5_srt

0x9118,	// (0x000337bd) bg_passive_tab_pane_g1_cp5_srt

0x908e,	// (0x00033733) bg_passive_tab_pane_g2_cp5_srt

0x9121,	// (0x000337c6) bg_passive_tab_pane_g3_cp5_srt

0x8975,	// (0x0003301a) bg_active_tab_pane_cp5_srt_ParamLimits

0x8975,	// (0x0003301a) bg_active_tab_pane_cp5_srt

0xb003,	// (0x000356a8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb003,	// (0x000356a8) tabs_3_long_active_pane_srt_t1

0x9118,	// (0x000337bd) bg_active_tab_pane_g1_cp5_srt

0x908e,	// (0x00033733) bg_active_tab_pane_g2_cp5_srt

0x9121,	// (0x000337c6) bg_active_tab_pane_g3_cp5_srt

0xaff5,	// (0x0003569a) navi_text_pane_srt_t1

0xafed,	// (0x00035692) navi_icon_pane_srt_g1

0x9612,	// (0x00033cb7) midp_editing_number_pane_srt

0x944c,	// (0x00033af1) midp_ticker_pane_srt

0x961a,	// (0x00033cbf) midp_ticker_pane_srt_g1

0x9622,	// (0x00033cc7) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00039e17) midp_ticker_pane_srt_g

0x962a,	// (0x00033ccf) midp_ticker_pane_srt_t1

0xafde,	// (0x00035683) midp_editing_number_pane_t1_copy1

0x9454,	// (0x00033af9) listscroll_midp_pane

0x9454,	// (0x00033af9) midp_form_pane

0x94c4,	// (0x00033b69) midp_info_popup_window_ParamLimits

0x94c4,	// (0x00033b69) midp_info_popup_window

0x885e,	// (0x00032f03) bg_popup_sub_pane_cp50_ParamLimits

0x885e,	// (0x00032f03) bg_popup_sub_pane_cp50

0xa0f9,	// (0x0003479e) listscroll_midp_info_pane_ParamLimits

0xa0f9,	// (0x0003479e) listscroll_midp_info_pane

0xa0d9,	// (0x0003477e) listscroll_form_midp_pane_ParamLimits

0xa0d9,	// (0x0003477e) listscroll_form_midp_pane

0xa0e5,	// (0x0003478a) scroll_bar_cp050

0xa0b9,	// (0x0003475e) list_midp_pane

0xbd70,	// (0x00036415) signal_pane_g2_cp

0x9ff3,	// (0x00034698) listscroll_midp_info_pane_t1_ParamLimits

0x9ff3,	// (0x00034698) listscroll_midp_info_pane_t1

0xa00b,	// (0x000346b0) listscroll_midp_info_pane_t2_ParamLimits

0xa00b,	// (0x000346b0) listscroll_midp_info_pane_t2

0xa049,	// (0x000346ee) listscroll_midp_info_pane_t3_ParamLimits

0xa049,	// (0x000346ee) listscroll_midp_info_pane_t3

0xa083,	// (0x00034728) listscroll_midp_info_pane_t4_ParamLimits

0xa083,	// (0x00034728) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00039ecf) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00039ecf) listscroll_midp_info_pane_t

0x8922,	// (0x00032fc7) scroll_pane_cp21

0x9f91,	// (0x00034636) form_midp_field_choice_group_pane

0x9f9a,	// (0x0003463f) form_midp_field_text_pane

0x9fd9,	// (0x0003467e) form_midp_field_time_pane

0x9fe1,	// (0x00034686) form_midp_gauge_slider_pane

0x9fea,	// (0x0003468f) form_midp_gauge_wait_pane

0x7e66,	// (0x0003250b) form_midp_image_pane

0x75b5,	// (0x00031c5a) list_single_midp_pane_ParamLimits

0x75b5,	// (0x00031c5a) list_single_midp_pane

0x9f49,	// (0x000345ee) form_midp_field_text_pane_t1

0x9d19,	// (0x000343be) input_focus_pane_cp050

0x9f80,	// (0x00034625) list_midp_form_text_pane

0x9f18,	// (0x000345bd) form_midp_field_choice_group_pane_t1

0x9f26,	// (0x000345cb) input_focus_pane_cp051

0x9f3a,	// (0x000345df) list_midp_choice_pane

0x7e66,	// (0x0003250b) status_idle_pane

0x9efc,	// (0x000345a1) form_midp_field_time_pane_t1

0x7e5c,	// (0x00032501) wait_anim_pane_g2_copy1

0x9f0a,	// (0x000345af) form_midp_field_time_pane_t2

0x0001,

0x9572,	// (0x00033c17) aid_navinavi_width_2_pane

0xf825,	// (0x00039eca) form_midp_field_time_pane_t

0x7e66,	// (0x0003250b) input_focus_pane_cp052

0x7e66,	// (0x0003250b) bg_input_focus_pane_cp040

0x9ebc,	// (0x00034561) form_midp_gauge_slider_pane_t1

0x9eca,	// (0x0003456f) form_midp_gauge_slider_pane_t2

0x9ed8,	// (0x0003457d) form_midp_gauge_slider_pane_t3

0x9ee6,	// (0x0003458b) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00039ec1) form_midp_gauge_slider_pane_t

0x9ef4,	// (0x00034599) form_midp_slider_pane

0x7f46,	// (0x000325eb) bg_input_focus_pane_cp041_ParamLimits

0x7f46,	// (0x000325eb) bg_input_focus_pane_cp041

0x9e89,	// (0x0003452e) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e89,	// (0x0003452e) form_midp_gauge_wait_pane_t1

0x9e9b,	// (0x00034540) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e9b,	// (0x00034540) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00039ebc) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00039ebc) form_midp_gauge_wait_pane_t

0x9ead,	// (0x00034552) form_midp_wait_pane_ParamLimits

0x9ead,	// (0x00034552) form_midp_wait_pane

0x9e53,	// (0x000344f8) form_midp_image_pane_g1

0x9e5c,	// (0x00034501) form_midp_image_pane_t1

0x9e6b,	// (0x00034510) form_midp_image_pane_t2

0x9e7a,	// (0x0003451f) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00039eb5) form_midp_image_pane_t

0x9e4a,	// (0x000344ef) list_single_midp_pane_g1

0x75a6,	// (0x00031c4b) list_single_midp_pane_t1

0x9e22,	// (0x000344c7) list_midp_form_item_pane_ParamLimits

0x9e22,	// (0x000344c7) list_midp_form_item_pane

0x951a,	// (0x00033bbf) list_midp_form_item_pane_t1

0x9529,	// (0x00033bce) midp_ticker_pane_g1

0x9535,	// (0x00033bda) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00039dfd) midp_ticker_pane_g

0x9541,	// (0x00033be6) midp_ticker_pane_t1

0xb22f,	// (0x000358d4) midp_editing_number_pane_t1

0xb20d,	// (0x000358b2) midp_editing_number_pane

0xb21c,	// (0x000358c1) midp_ticker_pane

0xafce,	// (0x00035673) ai_message_heading_pane

0x7e66,	// (0x0003250b) bg_popup_window_pane_cp14

0xafd6,	// (0x0003567b) listscroll_ai_message_pane

0xaf58,	// (0x000355fd) ai_message_heading_pane_g1_ParamLimits

0xaf58,	// (0x000355fd) ai_message_heading_pane_g1

0xaf64,	// (0x00035609) ai_message_heading_pane_g2_ParamLimits

0xaf64,	// (0x00035609) ai_message_heading_pane_g2

0xaf70,	// (0x00035615) ai_message_heading_pane_g3_ParamLimits

0xaf70,	// (0x00035615) ai_message_heading_pane_g3

0xaf7c,	// (0x00035621) ai_message_heading_pane_g4_ParamLimits

0xaf7c,	// (0x00035621) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x00039ff6) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x00039ff6) ai_message_heading_pane_g

0xaf88,	// (0x0003562d) ai_message_heading_pane_t1_ParamLimits

0xaf88,	// (0x0003562d) ai_message_heading_pane_t1

0xafa2,	// (0x00035647) ai_message_heading_pane_t2_ParamLimits

0xafa2,	// (0x00035647) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00039fff) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00039fff) ai_message_heading_pane_t

0xafb4,	// (0x00035659) bg_popup_heading_pane_cp1_ParamLimits

0xafb4,	// (0x00035659) bg_popup_heading_pane_cp1

0xaf46,	// (0x000355eb) list_ai_message_pane_ParamLimits

0xaf46,	// (0x000355eb) list_ai_message_pane

0x8922,	// (0x00032fc7) scroll_pane_cp10

0xaee2,	// (0x00035587) list_ai_message_pane_g1

0xaeea,	// (0x0003558f) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00039fd3) list_ai_message_pane_g

0xaef2,	// (0x00035597) list_ai_message_pane_t1_ParamLimits

0xaef2,	// (0x00035597) list_ai_message_pane_t1

0xaf07,	// (0x000355ac) list_ai_message_pane_t2_ParamLimits

0xaf07,	// (0x000355ac) list_ai_message_pane_t2

0xaf1c,	// (0x000355c1) list_ai_message_pane_t3_ParamLimits

0xaf1c,	// (0x000355c1) list_ai_message_pane_t3

0xaf31,	// (0x000355d6) list_ai_message_pane_t4_ParamLimits

0xaf31,	// (0x000355d6) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x00039fd8) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x00039fd8) list_ai_message_pane_t

0xaecd,	// (0x00035572) cell_ai_soft_ind_pane_ParamLimits

0xaecd,	// (0x00035572) cell_ai_soft_ind_pane

0x9553,	// (0x00033bf8) cell_ai_soft_ind_pane_g1_ParamLimits

0x9553,	// (0x00033bf8) cell_ai_soft_ind_pane_g1

0x7e66,	// (0x0003250b) grid_highlight_cp1

0x9560,	// (0x00033c05) text_secondary_cp56_ParamLimits

0x9560,	// (0x00033c05) text_secondary_cp56

0xaea2,	// (0x00035547) example_general_pane_ParamLimits

0xaea2,	// (0x00035547) example_general_pane

0xaeae,	// (0x00035553) example_parent_pane_g1_ParamLimits

0xaeae,	// (0x00035553) example_parent_pane_g1

0xaeba,	// (0x0003555f) example_parent_pane_t1_ParamLimits

0xaeba,	// (0x0003555f) example_parent_pane_t1

0x5db5,	// (0x0003045a) popup_preview_text_window_ParamLimits

0x5db5,	// (0x0003045a) popup_preview_text_window

0x937d,	// (0x00033a22) list_single_pane_cp2_g4

0x8277,	// (0x0003291c) bg_popup_preview_window_pane_ParamLimits

0x8277,	// (0x0003291c) bg_popup_preview_window_pane

0xabef,	// (0x00035294) popup_preview_text_window_t1_ParamLimits

0xabef,	// (0x00035294) popup_preview_text_window_t1

0xac0d,	// (0x000352b2) popup_preview_text_window_t2_ParamLimits

0xac0d,	// (0x000352b2) popup_preview_text_window_t2

0xac56,	// (0x000352fb) popup_preview_text_window_t3_ParamLimits

0xac56,	// (0x000352fb) popup_preview_text_window_t3

0xac9b,	// (0x00035340) popup_preview_text_window_t4_ParamLimits

0xac9b,	// (0x00035340) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00039fa7) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00039fa7) popup_preview_text_window_t

0xad19,	// (0x000353be) scroll_pane_cp11

0x9ca5,	// (0x0003434a) bg_popup_preview_window_pane_g1

0xabaf,	// (0x00035254) bg_popup_preview_window_pane_g2

0xabb7,	// (0x0003525c) bg_popup_preview_window_pane_g3

0xabbf,	// (0x00035264) bg_popup_preview_window_pane_g4

0xabc7,	// (0x0003526c) bg_popup_preview_window_pane_g5

0xabcf,	// (0x00035274) bg_popup_preview_window_pane_g6

0xabd7,	// (0x0003527c) bg_popup_preview_window_pane_g7

0xabdf,	// (0x00035284) bg_popup_preview_window_pane_g8

0x489c,	// (0x0002ef41) aid_popup_width_pane

0x5d93,	// (0x00030438) popup_midp_note_alarm_window_ParamLimits

0x5d93,	// (0x00030438) popup_midp_note_alarm_window

0x87a9,	// (0x00032e4e) data_form_pane_ParamLimits

0x527e,	// (0x0002f923) form_field_data_pane_g1

0x5288,	// (0x0002f92d) form_field_data_pane_t1_ParamLimits

0x87b5,	// (0x00032e5a) input_focus_pane_ParamLimits

0x52a0,	// (0x0002f945) data_form_wide_pane_ParamLimits

0x52b1,	// (0x0002f956) form_field_data_wide_pane_g1

0x52bd,	// (0x0002f962) form_field_data_wide_pane_t1_ParamLimits

0x8526,	// (0x00032bcb) input_focus_pane_cp6_ParamLimits

0x88cf,	// (0x00032f74) input_popup_find_pane_g1_ParamLimits

0x88cf,	// (0x00032f74) input_popup_find_pane_g1

0x5533,	// (0x0002fbd8) aid_navi_side_left_pane

0x5548,	// (0x0002fbed) aid_navi_side_right_pane

0xa5c8,	// (0x00034c6d) bg_popup_window_pane_cp30_ParamLimits

0xa5c8,	// (0x00034c6d) bg_popup_window_pane_cp30

0xa642,	// (0x00034ce7) popup_midp_note_alarm_window_g1_ParamLimits

0xa642,	// (0x00034ce7) popup_midp_note_alarm_window_g1

0xa672,	// (0x00034d17) popup_midp_note_alarm_window_t1_ParamLimits

0xa672,	// (0x00034d17) popup_midp_note_alarm_window_t1

0xa713,	// (0x00034db8) popup_midp_note_alarm_window_t2_ParamLimits

0xa713,	// (0x00034db8) popup_midp_note_alarm_window_t2

0xa7c1,	// (0x00034e66) popup_midp_note_alarm_window_t3_ParamLimits

0xa7c1,	// (0x00034e66) popup_midp_note_alarm_window_t3

0xa7f3,	// (0x00034e98) popup_midp_note_alarm_window_t4_ParamLimits

0xa7f3,	// (0x00034e98) popup_midp_note_alarm_window_t4

0xa819,	// (0x00034ebe) popup_midp_note_alarm_window_t5_ParamLimits

0xa819,	// (0x00034ebe) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00039f44) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00039f44) popup_midp_note_alarm_window_t

0xa8c5,	// (0x00034f6a) wait_bar_pane_cp1_ParamLimits

0xa8c5,	// (0x00034f6a) wait_bar_pane_cp1

0x7e66,	// (0x0003250b) wait_anim_pane_copy1

0x7e66,	// (0x0003250b) wait_border_pane_copy1

0xa2a2,	// (0x00034947) wait_border_pane_g1_copy1

0x52d7,	// (0x0002f97c) form_field_popup_pane_g1

0x52df,	// (0x0002f984) form_field_popup_pane_t1_ParamLimits

0x87b5,	// (0x00032e5a) input_focus_pane_cp7_ParamLimits

0x87e3,	// (0x00032e88) list_form_pane_ParamLimits

0x52f7,	// (0x0002f99c) form_field_popup_wide_pane_g1

0x52ff,	// (0x0002f9a4) form_field_popup_wide_pane_t1_ParamLimits

0x87b5,	// (0x00032e5a) input_focus_pane_cp8_ParamLimits

0x87ef,	// (0x00032e94) list_form_wide_pane_ParamLimits

0xb3b5,	// (0x00035a5a) aid_size_cell_graphic_pane

0x5389,	// (0x0002fa2e) data_form_pane_t1_ParamLimits

0x760f,	// (0x00031cb4) data_form_wide_pane_t1_ParamLimits

0x9872,	// (0x00033f17) bg_status_flat_pane

0x7ea6,	// (0x0003254b) title_pane_t1_ParamLimits

0x7f0e,	// (0x000325b3) title_pane_t2_ParamLimits

0x7f34,	// (0x000325d9) title_pane_t3_ParamLimits

0xf557,	// (0x00039bfc) title_pane_t_ParamLimits

0x8da5,	// (0x0003344a) level_1_signal_ParamLimits

0x8db7,	// (0x0003345c) level_2_signal_ParamLimits

0x8dca,	// (0x0003346f) level_3_signal_ParamLimits

0x8ddd,	// (0x00033482) level_4_signal_ParamLimits

0x8df0,	// (0x00033495) level_5_signal_ParamLimits

0x8e03,	// (0x000334a8) level_6_signal_ParamLimits

0x8e16,	// (0x000334bb) level_7_signal_ParamLimits

0x8da5,	// (0x0003344a) level_1_battery_ParamLimits

0x8db7,	// (0x0003345c) level_2_battery_ParamLimits

0x8dca,	// (0x0003346f) level_3_battery_ParamLimits

0x8ddd,	// (0x00033482) level_4_battery_ParamLimits

0x8df0,	// (0x00033495) level_5_battery_ParamLimits

0x8e03,	// (0x000334a8) level_6_battery_ParamLimits

0x8e16,	// (0x000334bb) level_7_battery_ParamLimits

0xa4c1,	// (0x00034b66) bg_status_flat_pane_g1

0xa4c9,	// (0x00034b6e) bg_status_flat_pane_g2

0xa4d1,	// (0x00034b76) bg_status_flat_pane_g3

0xa4d9,	// (0x00034b7e) bg_status_flat_pane_g4

0xa4e1,	// (0x00034b86) bg_status_flat_pane_g5

0xa4e9,	// (0x00034b8e) bg_status_flat_pane_g6

0xa4f1,	// (0x00034b96) bg_status_flat_pane_g7

0x7f5c,	// (0x00032601) tabs_3_active_pane_t1_ParamLimits

0x7f5c,	// (0x00032601) tabs_3_passive_pane_t1_ParamLimits

0x7f76,	// (0x0003261b) tabs_4_active_pane_t1_ParamLimits

0x7f76,	// (0x0003261b) tabs_4_1_passive_pane_t1_ParamLimits

0x8963,	// (0x00033008) tabs_2_active_pane_t1_ParamLimits

0x8963,	// (0x00033008) tabs_2_passive_pane_t1_ParamLimits

0x8975,	// (0x0003301a) bg_active_tab_pane_cp4_ParamLimits

0x8983,	// (0x00033028) tabs_2_long_active_pane_t1_ParamLimits

0x8996,	// (0x0003303b) bg_passive_tab_pane_cp4_ParamLimits

0x606e,	// (0x00030713) list_single_midp_graphic_pane_t1_ParamLimits

0x8975,	// (0x0003301a) bg_active_tab_pane_cp5_ParamLimits

0x89a2,	// (0x00033047) tabs_3_long_active_pane_t1_ParamLimits

0x8996,	// (0x0003303b) bg_passive_tab_pane_cp5_ParamLimits

0x606e,	// (0x00030713) list_single_midp_graphic_pane_t1

0x9872,	// (0x00033f17) bg_status_flat_pane_ParamLimits

0x9935,	// (0x00033fda) indicator_pane_cp2_ParamLimits

0x9935,	// (0x00033fda) indicator_pane_cp2

0x9a60,	// (0x00034105) navi_pane_srt_ParamLimits

0x9a60,	// (0x00034105) navi_pane_srt

0x9a84,	// (0x00034129) popup_clock_digital_analogue_window_cp1

0x8023,	// (0x000326c8) indicator_pane_t1

0x944c,	// (0x00033af1) copy_highlight_pane

0x944c,	// (0x00033af1) cursor_graphics_pane

0x944c,	// (0x00033af1) graphic_within_text_pane

0x944c,	// (0x00033af1) link_highlight_pane

0xacdc,	// (0x00035381) popup_preview_text_window_t5_ParamLimits

0xacdc,	// (0x00035381) popup_preview_text_window_t5

0x957a,	// (0x00033c1f) cursor_digital_pane

0x957a,	// (0x00033c1f) cursor_primary_pane

0x958b,	// (0x00033c30) cursor_primary_small_pane

0x9593,	// (0x00033c38) cursor_secondary_pane

0x959b,	// (0x00033c40) cursor_title_pane

0x957a,	// (0x00033c1f) link_highlight_digital_pane

0x9582,	// (0x00033c27) link_highlight_primary_pane

0x958b,	// (0x00033c30) link_highlight_primary_small_pane

0x9593,	// (0x00033c38) link_highlight_secondary_pane

0x959b,	// (0x00033c40) link_highlight_title_pane

0x957a,	// (0x00033c1f) copy_highlight_digital_pane

0x957a,	// (0x00033c1f) copy_highlight_primary_pane

0x958b,	// (0x00033c30) copy_highlight_primary_small_pane

0x9593,	// (0x00033c38) copy_highlight_secondary_pane

0x959b,	// (0x00033c40) copy_highlight_title_pane

0x9593,	// (0x00033c38) graphic_text_digital_pane

0xa56b,	// (0x00034c10) graphic_text_primary_pane

0xa574,	// (0x00034c19) graphic_text_primary_small_pane

0x958b,	// (0x00033c30) graphic_text_secondary_pane

0x957a,	// (0x00033c1f) graphic_text_title_pane

0x95a3,	// (0x00033c48) cursor_primary_pane_g1

0xa55d,	// (0x00034c02) cursor_text_primary_t1

0xa539,	// (0x00034bde) cursor_primary_small_pane_g1

0xa54f,	// (0x00034bf4) cursor_text_primary_small_t1

0xa521,	// (0x00034bc6) cursor_primary_small_pane_g1_copy1

0xa52b,	// (0x00034bd0) cursor_text_primary_small_t1_copy1

0xa509,	// (0x00034bae) cursor_text_title_t1

0xa517,	// (0x00034bbc) cursor_title_pane_g1

0x95a3,	// (0x00033c48) cursor_digital_pane_g1

0x95ad,	// (0x00033c52) cursor_text_digital_t1

0x95d2,	// (0x00033c77) link_highlight_primary_pane_g1

0xa4b2,	// (0x00034b57) link_highlight_primary_pane_t1

0x95bb,	// (0x00033c60) link_highlight_primary_small_pane_g1

0x95c3,	// (0x00033c68) link_highlight_primary_small_pane_t1

0x95d2,	// (0x00033c77) link_highlight_secondary_pane_g1

0x95da,	// (0x00033c7f) link_highlight_secondary_pane_t1

0xa426,	// (0x00034acb) link_highlight_title_pane_g1

0xa42e,	// (0x00034ad3) link_highlight_title_pane_t1

0xa40f,	// (0x00034ab4) link_highlight_digital_pane_g1

0xa417,	// (0x00034abc) link_highlight_digital_pane_t1

0xa2e7,	// (0x0003498c) copy_highlight_primary_pane_g1

0xa2ef,	// (0x00034994) copy_highlight_primary_pane_t1

0xa2c1,	// (0x00034966) copy_highlight_primary_small_pane_g1

0xa2d8,	// (0x0003497d) copy_highlight_primary_small_pane_t1

0x95e9,	// (0x00033c8e) copy_highlight_secondary_pane_g1

0x95f1,	// (0x00033c96) copy_highlight_secondary_pane_t1

0xa2c1,	// (0x00034966) copy_highlight_title_pane_g1

0xa2c9,	// (0x0003496e) copy_highlight_title_pane_t1

0xa2e7,	// (0x0003498c) copy_highlight_digital_pane_g1

0xb583,	// (0x00035c28) copy_highlight_digital_pane_t1

0xb4d7,	// (0x00035b7c) graphic_text_primary_pane_g1

0xb567,	// (0x00035c0c) graphic_text_primary_pane_t1

0xb575,	// (0x00035c1a) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0003a073) graphic_text_primary_pane_t

0xb543,	// (0x00035be8) graphic_text_primary_small_pane_g1

0xb54b,	// (0x00035bf0) graphic_text_primary_small_pane_t1

0xb559,	// (0x00035bfe) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0003a06e) graphic_text_primary_small_pane_t

0xb51f,	// (0x00035bc4) graphic_text_secondary_pane_g1

0xb527,	// (0x00035bcc) graphic_text_secondary_pane_t1

0xb535,	// (0x00035bda) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0003a069) graphic_text_secondary_pane_t

0xb4fb,	// (0x00035ba0) graphic_text_title_pane_g1

0xb503,	// (0x00035ba8) graphic_text_title_pane_t1

0xb511,	// (0x00035bb6) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0003a064) graphic_text_title_pane_t

0xb4d7,	// (0x00035b7c) graphic_text_digital_pane_g1

0xb4df,	// (0x00035b84) graphic_text_digital_pane_t1

0xb4ed,	// (0x00035b92) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0003a05f) graphic_text_digital_pane_t

0x7f46,	// (0x000325eb) navi_icon_pane_srt_ParamLimits

0x7f46,	// (0x000325eb) navi_icon_pane_srt

0x7e66,	// (0x0003250b) navi_midp_pane_srt

0x7e66,	// (0x0003250b) navi_navi_pane_srt

0x7f46,	// (0x000325eb) navi_text_pane_srt_ParamLimits

0x7f46,	// (0x000325eb) navi_text_pane_srt

0xb4a2,	// (0x00035b47) navi_navi_icon_text_pane_srt

0xb4aa,	// (0x00035b4f) navi_navi_pane_srt_g1_ParamLimits

0xb4aa,	// (0x00035b4f) navi_navi_pane_srt_g1

0xb4bc,	// (0x00035b61) navi_navi_pane_srt_g2_ParamLimits

0xb4bc,	// (0x00035b61) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0003a05a) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0003a05a) navi_navi_pane_srt_g

0xb4ce,	// (0x00035b73) navi_navi_tabs_pane_srt

0xb4a2,	// (0x00035b47) navi_navi_text_pane_srt

0xb4a2,	// (0x00035b47) navi_navi_volume_pane_srt

0xb493,	// (0x00035b38) navi_navi_text_pane_srt_t1

0x63e8,	// (0x00030a8d) navi_navi_volume_pane_srt_g1

0x63f0,	// (0x00030a95) volume_small_pane_srt_ParamLimits

0x63f0,	// (0x00030a95) volume_small_pane_srt

0x5813,	// (0x0002feb8) volume_small_pane_srt_g1_ParamLimits

0x5813,	// (0x0002feb8) volume_small_pane_srt_g1

0x5823,	// (0x0002fec8) volume_small_pane_srt_g2_ParamLimits

0x5823,	// (0x0002fec8) volume_small_pane_srt_g2

0x5834,	// (0x0002fed9) volume_small_pane_srt_g3_ParamLimits

0x5834,	// (0x0002fed9) volume_small_pane_srt_g3

0x5845,	// (0x0002feea) volume_small_pane_srt_g4_ParamLimits

0x5845,	// (0x0002feea) volume_small_pane_srt_g4

0x5856,	// (0x0002fefb) volume_small_pane_srt_g5_ParamLimits

0x5856,	// (0x0002fefb) volume_small_pane_srt_g5

0x5867,	// (0x0002ff0c) volume_small_pane_srt_g6_ParamLimits

0x5867,	// (0x0002ff0c) volume_small_pane_srt_g6

0x5878,	// (0x0002ff1d) volume_small_pane_srt_g7_ParamLimits

0x5878,	// (0x0002ff1d) volume_small_pane_srt_g7

0x5889,	// (0x0002ff2e) volume_small_pane_srt_g8_ParamLimits

0x5889,	// (0x0002ff2e) volume_small_pane_srt_g8

0x589a,	// (0x0002ff3f) volume_small_pane_srt_g9_ParamLimits

0x589a,	// (0x0002ff3f) volume_small_pane_srt_g9

0x58ab,	// (0x0002ff50) volume_small_pane_srt_g10_ParamLimits

0x58ab,	// (0x0002ff50) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00039e02) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00039e02) volume_small_pane_srt_g

0x8320,	// (0x000329c5) query_popup_data_pane_cp2

0xb479,	// (0x00035b1e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb479,	// (0x00035b1e) navi_navi_icon_text_pane_srt_t1

0xa56b,	// (0x00034c10) navi_tabs_2_long_pane_srt

0xa56b,	// (0x00034c10) navi_tabs_2_pane_srt

0xa56b,	// (0x00034c10) navi_tabs_3_long_pane_srt

0xa56b,	// (0x00034c10) navi_tabs_3_pane_srt

0xa56b,	// (0x00034c10) navi_tabs_4_pane_srt

0x63c8,	// (0x00030a6d) tabs_2_active_pane_srt_ParamLimits

0x63c8,	// (0x00030a6d) tabs_2_active_pane_srt

0x63d8,	// (0x00030a7d) tabs_2_passive_pane_srt_ParamLimits

0x63d8,	// (0x00030a7d) tabs_2_passive_pane_srt

0x979b,	// (0x00033e40) bg_passive_tab_pane_cp1_srt_ParamLimits

0x979b,	// (0x00033e40) bg_passive_tab_pane_cp1_srt

0xb445,	// (0x00035aea) bg_passive_tab_pane_g1_cp1_srt

0x908e,	// (0x00033733) bg_passive_tab_pane_g2_cp1_srt

0xb44e,	// (0x00035af3) bg_passive_tab_pane_g3_cp1_srt

0x7f46,	// (0x000325eb) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f46,	// (0x000325eb) bg_active_tab_pane_cp1_srt

0xb457,	// (0x00035afc) tabs_2_active_pane_srt_g1

0xb45f,	// (0x00035b04) tabs_2_active_pane_srt_t1_ParamLimits

0xb45f,	// (0x00035b04) tabs_2_active_pane_srt_t1

0xb445,	// (0x00035aea) bg_active_tab_pane_g1_cp1_srt

0x908e,	// (0x00033733) bg_active_tab_pane_g2_cp1_srt

0xb44e,	// (0x00035af3) bg_active_tab_pane_g3_cp1_srt

0x6395,	// (0x00030a3a) tabs_3_active_pane_srt_ParamLimits

0x6395,	// (0x00030a3a) tabs_3_active_pane_srt

0x63a6,	// (0x00030a4b) tabs_3_passive_pane_cp_srt_ParamLimits

0x63a6,	// (0x00030a4b) tabs_3_passive_pane_cp_srt

0x63b7,	// (0x00030a5c) tabs_3_passive_pane_srt_ParamLimits

0x63b7,	// (0x00030a5c) tabs_3_passive_pane_srt

0x979b,	// (0x00033e40) bg_passive_tab_pane_cp2_srt_ParamLimits

0x979b,	// (0x00033e40) bg_passive_tab_pane_cp2_srt

0x9600,	// (0x00033ca5) bg_passive_tab_pane_g1_cp2_srt

0x908e,	// (0x00033733) bg_passive_tab_pane_g2_cp2_srt

0x9609,	// (0x00033cae) bg_passive_tab_pane_g3_cp2_srt

0x7f46,	// (0x000325eb) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f46,	// (0x000325eb) bg_active_tab_pane_cp2_srt

0xb42b,	// (0x00035ad0) tabs_3_active_pane_srt_g1

0xb433,	// (0x00035ad8) tabs_3_active_pane_srt_t1_ParamLimits

0xb433,	// (0x00035ad8) tabs_3_active_pane_srt_t1

0x9600,	// (0x00033ca5) bg_active_tab_pane_g1_cp2_srt

0x908e,	// (0x00033733) bg_active_tab_pane_g2_cp2_srt

0x9609,	// (0x00033cae) bg_active_tab_pane_g3_cp2_srt

0x634d,	// (0x000309f2) tabs_4_active_pane_srt_ParamLimits

0x634d,	// (0x000309f2) tabs_4_active_pane_srt

0x635f,	// (0x00030a04) tabs_4_passive_pane_cp2_srt_ParamLimits

0x635f,	// (0x00030a04) tabs_4_passive_pane_cp2_srt

0x5a1a,	// (0x000300bf) aid_size_cell_toolbar

0x8996,	// (0x0003303b) main_idle_act_pane_ParamLimits

0x5bc9,	// (0x0003026e) popup_large_graphic_colour_window_ParamLimits

0x5f30,	// (0x000305d5) popup_toolbar_window_ParamLimits

0x5f30,	// (0x000305d5) popup_toolbar_window

0xb23e,	// (0x000358e3) list_single_graphic_2heading_pane_ParamLimits

0xb23e,	// (0x000358e3) list_single_graphic_2heading_pane

0x8b52,	// (0x000331f7) aid_size_cell_apps_grid_lsc_pane

0x8b64,	// (0x00033209) aid_size_cell_apps_grid_prt_pane

0x979b,	// (0x00033e40) bg_wml_button_pane_cp1_ParamLimits

0x979b,	// (0x00033e40) bg_wml_button_pane_cp1

0x9f49,	// (0x000345ee) form_midp_field_text_pane_t1_ParamLimits

0x9d19,	// (0x000343be) input_focus_pane_cp050_ParamLimits

0x9f80,	// (0x00034625) list_midp_form_text_pane_ParamLimits

0x9f26,	// (0x000345cb) input_focus_pane_cp051_ParamLimits

0x9f3a,	// (0x000345df) list_midp_choice_pane_ParamLimits

0x9dd2,	// (0x00034477) list_single_2graphic_pane_cp3_ParamLimits

0x9dd2,	// (0x00034477) list_single_2graphic_pane_cp3

0x9df3,	// (0x00034498) list_single_midp_graphic_pane_ParamLimits

0x9df3,	// (0x00034498) list_single_midp_graphic_pane

0x4826,	// (0x0002eecb) list_single_graphic_2heading_pane_g1_ParamLimits

0x4826,	// (0x0002eecb) list_single_graphic_2heading_pane_g1

0x4832,	// (0x0002eed7) list_single_graphic_2heading_pane_g4_ParamLimits

0x4832,	// (0x0002eed7) list_single_graphic_2heading_pane_g4

0x483e,	// (0x0002eee3) list_single_graphic_2heading_pane_g5_ParamLimits

0x483e,	// (0x0002eee3) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00039e55) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00039e55) list_single_graphic_2heading_pane_g

0x484a,	// (0x0002eeef) list_single_graphic_2heading_pane_t1_ParamLimits

0x484a,	// (0x0002eeef) list_single_graphic_2heading_pane_t1

0x485e,	// (0x0002ef03) list_single_graphic_2heading_pane_t2_ParamLimits

0x485e,	// (0x0002ef03) list_single_graphic_2heading_pane_t2

0x4878,	// (0x0002ef1d) list_single_graphic_2heading_pane_t3_ParamLimits

0x4878,	// (0x0002ef1d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x00039e5c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x00039e5c) list_single_graphic_2heading_pane_t

0x9be3,	// (0x00034288) bg_popup_sub_pane_cp2

0x9c0d,	// (0x000342b2) grid_toobar_pane

0x5fdd,	// (0x00030682) cell_toolbar_pane_ParamLimits

0x5fdd,	// (0x00030682) cell_toolbar_pane

0x9c49,	// (0x000342ee) cell_toolbar_pane_g1_ParamLimits

0x9c49,	// (0x000342ee) cell_toolbar_pane_g1

0x9c5d,	// (0x00034302) cell_toolbar_pane_g2_ParamLimits

0x9c5d,	// (0x00034302) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x00039e6a) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x00039e6a) cell_toolbar_pane_g

0x9c7f,	// (0x00034324) grid_highlight_pane_cp2_ParamLimits

0x9c7f,	// (0x00034324) grid_highlight_pane_cp2

0x9c99,	// (0x0003433e) toolbar_button_pane

0x9ca5,	// (0x0003434a) toolbar_button_pane_g1

0x9cad,	// (0x00034352) toolbar_button_pane_g2

0x9cb5,	// (0x0003435a) toolbar_button_pane_g3

0x9cbd,	// (0x00034362) toolbar_button_pane_g4

0x9cc5,	// (0x0003436a) toolbar_button_pane_g5

0x9ccd,	// (0x00034372) toolbar_button_pane_g6

0x9cd5,	// (0x0003437a) toolbar_button_pane_g7

0x9cdd,	// (0x00034382) toolbar_button_pane_g8

0x9ce5,	// (0x0003438a) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x00039e6f) toolbar_button_pane_g

0x6015,	// (0x000306ba) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6015,	// (0x000306ba) list_single_2graphic_pane_g1_cp3

0x6021,	// (0x000306c6) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6021,	// (0x000306c6) list_single_2graphic_pane_g2_cp3

0x6032,	// (0x000306d7) list_single_2graphic_pane_g3_cp3

0x603a,	// (0x000306df) list_single_2graphic_pane_g4_cp3_ParamLimits

0x603a,	// (0x000306df) list_single_2graphic_pane_g4_cp3

0x6046,	// (0x000306eb) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6046,	// (0x000306eb) list_single_2graphic_pane_t1_cp3

0x6062,	// (0x00030707) list_single_midp_graphic_pane_g2_ParamLimits

0x6062,	// (0x00030707) list_single_midp_graphic_pane_g2

0x5a22,	// (0x000300c7) aid_zoom_text_primary

0x480a,	// (0x0002eeaf) aid_zoom_text_secondary

0x96ba,	// (0x00033d5f) status_small_pane_g7_ParamLimits

0x96ba,	// (0x00033d5f) status_small_pane_g7

0x96dd,	// (0x00033d82) status_small_pane_t1_ParamLimits

0x7e7d,	// (0x00032522) title_pane_g2

0x0003,

0xf54e,	// (0x00039bf3) title_pane_g

0x83c4,	// (0x00032a69) aid_size_cell_colour_1_pane_ParamLimits

0x83c4,	// (0x00032a69) aid_size_cell_colour_1_pane

0x83d8,	// (0x00032a7d) aid_size_cell_colour_2_pane_ParamLimits

0x83d8,	// (0x00032a7d) aid_size_cell_colour_2_pane

0x83ec,	// (0x00032a91) aid_size_cell_colour_3_pane_ParamLimits

0x83ec,	// (0x00032a91) aid_size_cell_colour_3_pane

0x8400,	// (0x00032aa5) aid_size_cell_colour_4_pane_ParamLimits

0x8400,	// (0x00032aa5) aid_size_cell_colour_4_pane

0x5470,	// (0x0002fb15) title_pane_stacon_g1_ParamLimits

0x5470,	// (0x0002fb15) title_pane_stacon_g1

0xa346,	// (0x000349eb) popup_note_wait_window_g3_ParamLimits

0xa346,	// (0x000349eb) popup_note_wait_window_g3

0xa3bc,	// (0x00034a61) popup_note_wait_window_t5_ParamLimits

0xa3bc,	// (0x00034a61) popup_note_wait_window_t5

0x7e66,	// (0x0003250b) main_feb_china_hwr_fs_writing_pane

0x5aac,	// (0x00030151) popup_feb_china_hwr_fs_window_ParamLimits

0x5aac,	// (0x00030151) popup_feb_china_hwr_fs_window

0x6084,	// (0x00030729) aid_size_cell_hwr_fs_ParamLimits

0x6084,	// (0x00030729) aid_size_cell_hwr_fs

0x9d19,	// (0x000343be) bg_popup_sub_pane_cp3_ParamLimits

0x9d19,	// (0x000343be) bg_popup_sub_pane_cp3

0x6099,	// (0x0003073e) grid_hwr_fs_pane_ParamLimits

0x6099,	// (0x0003073e) grid_hwr_fs_pane

0x60b1,	// (0x00030756) linegrid_hwr_fs_pane_ParamLimits

0x60b1,	// (0x00030756) linegrid_hwr_fs_pane

0x60c1,	// (0x00030766) cell_hwr_fs_pane_ParamLimits

0x60c1,	// (0x00030766) cell_hwr_fs_pane

0x9d25,	// (0x000343ca) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d25,	// (0x000343ca) linegrid_hwr_fs_pane_g1

0x9d31,	// (0x000343d6) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d31,	// (0x000343d6) linegrid_hwr_fs_pane_g2

0x9d43,	// (0x000343e8) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d43,	// (0x000343e8) linegrid_hwr_fs_pane_g3

0x60e3,	// (0x00030788) linegrid_hwr_fs_pane_g4_ParamLimits

0x60e3,	// (0x00030788) linegrid_hwr_fs_pane_g4

0x60fd,	// (0x000307a2) linegrid_hwr_fs_pane_g5_ParamLimits

0x60fd,	// (0x000307a2) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00039e9a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00039e9a) linegrid_hwr_fs_pane_g

0x9d4f,	// (0x000343f4) cell_hwr_fs_pane_g1_ParamLimits

0x9d4f,	// (0x000343f4) cell_hwr_fs_pane_g1

0x9b1a,	// (0x000341bf) cell_hwr_fs_pane_g2_ParamLimits

0x9b1a,	// (0x000341bf) cell_hwr_fs_pane_g2

0x9d65,	// (0x0003440a) cell_hwr_fs_pane_g3_ParamLimits

0x9d65,	// (0x0003440a) cell_hwr_fs_pane_g3

0x9d72,	// (0x00034417) cell_hwr_fs_pane_g4_ParamLimits

0x9d72,	// (0x00034417) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00039ea5) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00039ea5) cell_hwr_fs_pane_g

0x6113,	// (0x000307b8) cell_hwr_fs_pane_t1

0x7e66,	// (0x0003250b) grid_highlight_pane_cp6

0x7e66,	// (0x0003250b) main_idle_act2_pane

0x8909,	// (0x00032fae) aid_inside_area_popup_secondary

0xa9ff,	// (0x000350a4) aid_inside_area_window_primary_ParamLimits

0xa9ff,	// (0x000350a4) aid_inside_area_window_primary

0xb592,	// (0x00035c37) ai2_news_ticker_pane

0xb59a,	// (0x00035c3f) aid_size_cell_ai1_link_ParamLimits

0xb59a,	// (0x00035c3f) aid_size_cell_ai1_link

0xb5b4,	// (0x00035c59) popup_ai2_data_window_ParamLimits

0xb5b4,	// (0x00035c59) popup_ai2_data_window

0xb5ca,	// (0x00035c6f) popup_ai2_link_window_ParamLimits

0xb5ca,	// (0x00035c6f) popup_ai2_link_window

0x9d19,	// (0x000343be) bg_popup_sub_pane_cp4_ParamLimits

0x9d19,	// (0x000343be) bg_popup_sub_pane_cp4

0xb5de,	// (0x00035c83) grid_ai2_link_pane_ParamLimits

0xb5de,	// (0x00035c83) grid_ai2_link_pane

0xb5f5,	// (0x00035c9a) popup_ai2_link_window_g1_ParamLimits

0xb5f5,	// (0x00035c9a) popup_ai2_link_window_g1

0xb601,	// (0x00035ca6) popup_ai2_link_window_g2_ParamLimits

0xb601,	// (0x00035ca6) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0003a078) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0003a078) popup_ai2_link_window_g

0xb610,	// (0x00035cb5) ai2_mp_button_pane

0xb618,	// (0x00035cbd) ai2_mp_volume_pane

0x9f26,	// (0x000345cb) bg_popup_sub_pane_cp5_ParamLimits

0x9f26,	// (0x000345cb) bg_popup_sub_pane_cp5

0xb620,	// (0x00035cc5) heading_ai2_gene_pane_ParamLimits

0xb620,	// (0x00035cc5) heading_ai2_gene_pane

0xb62c,	// (0x00035cd1) list_ai2_gene_pane_ParamLimits

0xb62c,	// (0x00035cd1) list_ai2_gene_pane

0xb674,	// (0x00035d19) cell_ai2_link_pane_ParamLimits

0xb674,	// (0x00035d19) cell_ai2_link_pane

0xb68a,	// (0x00035d2f) cell_ai2_link_pane_g1

0x7e66,	// (0x0003250b) grid_highlight_pane_cp7

0x6405,	// (0x00030aaa) ai2_mp_volume_pane_g1

0xb75a,	// (0x00035dff) ai2_mp_volume_pane_g2

0xb6cf,	// (0x00035d74) list_ai2_gene_pane_t1

0xb762,	// (0x00035e07) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0003a091) ai2_mp_volume_pane_g

0x640d,	// (0x00030ab2) volume_small_pane_cp3

0xb76a,	// (0x00035e0f) aid_size_cell_ai2_button

0xb772,	// (0x00035e17) grid_ai2_button_pane

0xb77b,	// (0x00035e20) cell_ai2_button_pane_ParamLimits

0xb77b,	// (0x00035e20) cell_ai2_button_pane

0x7e5c,	// (0x00032501) cell_ai2_button_pane_g1

0x7e66,	// (0x0003250b) grid_highlight_pane_cp8

0xb71a,	// (0x00035dbf) ai2_gene_pane_t1_ParamLimits

0xb71a,	// (0x00035dbf) ai2_gene_pane_t1

0x5a10,	// (0x000300b5) aid_height_parent_landscape

0xb075,	// (0x0003571a) aid_height_set_list

0xb086,	// (0x0003572b) aid_size_parent

0xb3b5,	// (0x00035a5a) aid_size_cell_graphic_pane_ParamLimits

0xb63c,	// (0x00035ce1) popup_ai2_data_window_g1_ParamLimits

0xb63c,	// (0x00035ce1) popup_ai2_data_window_g1

0xb648,	// (0x00035ced) ai2_news_ticker_pane_g1

0xb650,	// (0x00035cf5) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0003a07d) ai2_news_ticker_pane_g

0xb658,	// (0x00035cfd) ai2_news_ticker_pane_t1

0xb666,	// (0x00035d0b) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0003a082) ai2_news_ticker_pane_t

0xb693,	// (0x00035d38) heading_ai2_gene_pane_g1

0xb69b,	// (0x00035d40) heading_ai2_gene_pane_t1_ParamLimits

0xb69b,	// (0x00035d40) heading_ai2_gene_pane_t1

0xb6b0,	// (0x00035d55) list_highlight_pane_cp6

0xb6b8,	// (0x00035d5d) ai2_gene_pane_ParamLimits

0xb6b8,	// (0x00035d5d) ai2_gene_pane

0xb6dd,	// (0x00035d82) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0003a087) list_ai2_gene_pane_t

0xb6eb,	// (0x00035d90) list_highlight_pane_cp8_ParamLimits

0xb6eb,	// (0x00035d90) list_highlight_pane_cp8

0xb6fc,	// (0x00035da1) ai2_gene_pane_g1_ParamLimits

0xb6fc,	// (0x00035da1) ai2_gene_pane_g1

0xb70e,	// (0x00035db3) ai2_gene_pane_g2_ParamLimits

0xb70e,	// (0x00035db3) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0003a08c) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0003a08c) ai2_gene_pane_g

0x874b,	// (0x00032df0) scroll_pane_cp12

0x59cd,	// (0x00030072) control_pane_t3_ParamLimits

0x59cd,	// (0x00030072) control_pane_t3

0x96ce,	// (0x00033d73) status_small_pane_g8_ParamLimits

0x96ce,	// (0x00033d73) status_small_pane_g8

0x5b92,	// (0x00030237) popup_find_window_ParamLimits

0x5da7,	// (0x0003044c) popup_note_image_window_ParamLimits

0x74ce,	// (0x00031b73) list_double2_graphic_pane_vc_g1_ParamLimits

0x74ce,	// (0x00031b73) list_double2_graphic_pane_vc_g1

0x74da,	// (0x00031b7f) list_double2_graphic_pane_vc_g2_ParamLimits

0x74da,	// (0x00031b7f) list_double2_graphic_pane_vc_g2

0x74e6,	// (0x00031b8b) list_double2_graphic_pane_vc_g3_ParamLimits

0x74e6,	// (0x00031b8b) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x00039e63) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x00039e63) list_double2_graphic_pane_vc_g

0x74f2,	// (0x00031b97) list_double2_graphic_pane_vc_t1_ParamLimits

0x74f2,	// (0x00031b97) list_double2_graphic_pane_vc_t1

0x74da,	// (0x00031b7f) list_single_heading_pane_vc_g1_ParamLimits

0x74da,	// (0x00031b7f) list_single_heading_pane_vc_g1

0x74e6,	// (0x00031b8b) list_single_heading_pane_vc_g2_ParamLimits

0x74e6,	// (0x00031b8b) list_single_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00039e84) list_single_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00039e84) list_single_heading_pane_vc_g

0x7508,	// (0x00031bad) list_single_heading_pane_vc_t1_ParamLimits

0x7508,	// (0x00031bad) list_single_heading_pane_vc_t1

0x751e,	// (0x00031bc3) list_single_heading_pane_vc_t2_ParamLimits

0x751e,	// (0x00031bc3) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00039e89) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00039e89) list_single_heading_pane_vc_t

0x7530,	// (0x00031bd5) list_setting_number_pane_vc_g1_ParamLimits

0x7530,	// (0x00031bd5) list_setting_number_pane_vc_g1

0x753c,	// (0x00031be1) list_setting_number_pane_vc_g2_ParamLimits

0x753c,	// (0x00031be1) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00039e8e) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00039e8e) list_setting_number_pane_vc_g

0x7548,	// (0x00031bed) list_setting_number_pane_vc_t1_ParamLimits

0x7548,	// (0x00031bed) list_setting_number_pane_vc_t1

0x755c,	// (0x00031c01) list_setting_number_pane_vc_t2_ParamLimits

0x755c,	// (0x00031c01) list_setting_number_pane_vc_t2

0x7578,	// (0x00031c1d) list_setting_number_pane_vc_t3_ParamLimits

0x7578,	// (0x00031c1d) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00039e93) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00039e93) list_setting_number_pane_vc_t

0x7596,	// (0x00031c3b) set_value_pane_vc_ParamLimits

0x7596,	// (0x00031c3b) set_value_pane_vc

0xb23e,	// (0x000358e3) list_double2_graphic_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_double2_graphic_pane_vc

0xb23e,	// (0x000358e3) list_double2_large_graphic_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_double2_large_graphic_pane_vc

0xb23e,	// (0x000358e3) list_double2_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_double2_pane_vc

0xb23e,	// (0x000358e3) list_double_graphic_heading_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_double_graphic_heading_pane_vc

0xb23e,	// (0x000358e3) list_double_graphic_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_double_graphic_pane_vc

0xb23e,	// (0x000358e3) list_double_heading_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_double_heading_pane_vc

0xb250,	// (0x000358f5) list_double_large_graphic_pane_vc_ParamLimits

0xb250,	// (0x000358f5) list_double_large_graphic_pane_vc

0xb23e,	// (0x000358e3) list_double_number_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_double_number_pane_vc

0xb23e,	// (0x000358e3) list_double_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_double_pane_vc

0xb23e,	// (0x000358e3) list_double_time_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_double_time_pane_vc

0xb23e,	// (0x000358e3) list_setting_number_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_setting_number_pane_vc

0xb23e,	// (0x000358e3) list_setting_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_setting_pane_vc

0xb23e,	// (0x000358e3) list_single_graphic_heading_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_single_graphic_heading_pane_vc

0xb23e,	// (0x000358e3) list_single_heading_pane_vc_ParamLimits

0xb23e,	// (0x000358e3) list_single_heading_pane_vc

0x766f,	// (0x00031d14) list_single_number_heading_pane_vc_ParamLimits

0x766f,	// (0x00031d14) list_single_number_heading_pane_vc

0x74ce,	// (0x00031b73) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x74ce,	// (0x00031b73) list_double_graphic_heading_pane_vc_g1

0x74da,	// (0x00031b7f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x74da,	// (0x00031b7f) list_double_graphic_heading_pane_vc_g2

0x74e6,	// (0x00031b8b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x74e6,	// (0x00031b8b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x00039e63) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x00039e63) list_double_graphic_heading_pane_vc_g

0x76f0,	// (0x00031d95) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x76f0,	// (0x00031d95) list_double_graphic_heading_pane_vc_t1

0x770c,	// (0x00031db1) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x770c,	// (0x00031db1) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0003a098) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0003a098) list_double_graphic_heading_pane_vc_t

0x7530,	// (0x00031bd5) list_setting_pane_vc_g1_ParamLimits

0x7530,	// (0x00031bd5) list_setting_pane_vc_g1

0x753c,	// (0x00031be1) list_setting_pane_vc_g2_ParamLimits

0x753c,	// (0x00031be1) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00039e8e) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00039e8e) list_setting_pane_vc_g

0x772a,	// (0x00031dcf) list_setting_pane_vc_t1_ParamLimits

0x772a,	// (0x00031dcf) list_setting_pane_vc_t1

0x7746,	// (0x00031deb) list_setting_pane_vc_t2_ParamLimits

0x7746,	// (0x00031deb) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0003a0c6) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0003a0c6) list_setting_pane_vc_t

0x7596,	// (0x00031c3b) set_value_pane_cp_vc_ParamLimits

0x7596,	// (0x00031c3b) set_value_pane_cp_vc

0x74da,	// (0x00031b7f) list_single_number_heading_pane_vc_g1_ParamLimits

0x74da,	// (0x00031b7f) list_single_number_heading_pane_vc_g1

0x74e6,	// (0x00031b8b) list_single_number_heading_pane_vc_g2_ParamLimits

0x74e6,	// (0x00031b8b) list_single_number_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00039e84) list_single_number_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00039e84) list_single_number_heading_pane_vc_g

0x7762,	// (0x00031e07) list_single_number_heading_pane_vc_t1_ParamLimits

0x7762,	// (0x00031e07) list_single_number_heading_pane_vc_t1

0x7778,	// (0x00031e1d) list_single_number_heading_pane_vc_t2_ParamLimits

0x7778,	// (0x00031e1d) list_single_number_heading_pane_vc_t2

0x778a,	// (0x00031e2f) list_single_number_heading_pane_vc_t3_ParamLimits

0x778a,	// (0x00031e2f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0003a0cb) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0003a0cb) list_single_number_heading_pane_vc_t

0x74ce,	// (0x00031b73) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x74ce,	// (0x00031b73) list_single_graphic_heading_pane_vc_g1

0x74da,	// (0x00031b7f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x74da,	// (0x00031b7f) list_single_graphic_heading_pane_vc_g4

0x74e6,	// (0x00031b8b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x74e6,	// (0x00031b8b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x00039e63) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x00039e63) list_single_graphic_heading_pane_vc_g

0x779c,	// (0x00031e41) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x779c,	// (0x00031e41) list_single_graphic_heading_pane_vc_t1

0x77b2,	// (0x00031e57) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x77b2,	// (0x00031e57) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0003a0d2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0003a0d2) list_single_graphic_heading_pane_vc_t

0x74da,	// (0x00031b7f) list_double2_pane_vc_g1_ParamLimits

0x74da,	// (0x00031b7f) list_double2_pane_vc_g1

0x74e6,	// (0x00031b8b) list_double2_pane_vc_g2_ParamLimits

0x74e6,	// (0x00031b8b) list_double2_pane_vc_g2

0x0001,

0xf7df,	// (0x00039e84) list_double2_pane_vc_g_ParamLimits

0xf7df,	// (0x00039e84) list_double2_pane_vc_g

0x77c4,	// (0x00031e69) list_double2_pane_vc_t1_ParamLimits

0x77c4,	// (0x00031e69) list_double2_pane_vc_t1

0x77da,	// (0x00031e7f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x77da,	// (0x00031e7f) list_double2_large_graphic_pane_vc_g1

0x74da,	// (0x00031b7f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x74da,	// (0x00031b7f) list_double2_large_graphic_pane_vc_g2

0x74e6,	// (0x00031b8b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x74e6,	// (0x00031b8b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa32,	// (0x0003a0d7) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa32,	// (0x0003a0d7) list_double2_large_graphic_pane_vc_g

0x77e6,	// (0x00031e8b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x77e6,	// (0x00031e8b) list_double2_large_graphic_pane_vc_t1

0x77fc,	// (0x00031ea1) list_double_time_pane_vc_g1_ParamLimits

0x77fc,	// (0x00031ea1) list_double_time_pane_vc_g1

0x7808,	// (0x00031ead) list_double_time_pane_vc_g2_ParamLimits

0x7808,	// (0x00031ead) list_double_time_pane_vc_g2

0x0001,

0xfa39,	// (0x0003a0de) list_double_time_pane_vc_g_ParamLimits

0xfa39,	// (0x0003a0de) list_double_time_pane_vc_g

0x7814,	// (0x00031eb9) list_double_time_pane_vc_t1_ParamLimits

0x7814,	// (0x00031eb9) list_double_time_pane_vc_t1

0x7838,	// (0x00031edd) list_double_time_pane_vc_t2_ParamLimits

0x7838,	// (0x00031edd) list_double_time_pane_vc_t2

0x7887,	// (0x00031f2c) list_double_time_pane_vc_t3_ParamLimits

0x7887,	// (0x00031f2c) list_double_time_pane_vc_t3

0x7899,	// (0x00031f3e) list_double_time_pane_vc_t4_ParamLimits

0x7899,	// (0x00031f3e) list_double_time_pane_vc_t4

0x0003,

0xfa3e,	// (0x0003a0e3) list_double_time_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003a0e3) list_double_time_pane_vc_t

0x74da,	// (0x00031b7f) list_double_pane_vc_g1_ParamLimits

0x74da,	// (0x00031b7f) list_double_pane_vc_g1

0x74e6,	// (0x00031b8b) list_double_pane_vc_g2_ParamLimits

0x74e6,	// (0x00031b8b) list_double_pane_vc_g2

0x0001,

0xf7df,	// (0x00039e84) list_double_pane_vc_g_ParamLimits

0xf7df,	// (0x00039e84) list_double_pane_vc_g

0x78ad,	// (0x00031f52) list_double_pane_vc_t1_ParamLimits

0x78ad,	// (0x00031f52) list_double_pane_vc_t1

0x78c1,	// (0x00031f66) list_double_pane_vc_t2_ParamLimits

0x78c1,	// (0x00031f66) list_double_pane_vc_t2

0x0001,

0xfa47,	// (0x0003a0ec) list_double_pane_vc_t_ParamLimits

0xfa47,	// (0x0003a0ec) list_double_pane_vc_t

0x74da,	// (0x00031b7f) list_double_number_pane_vc_g1_ParamLimits

0x74da,	// (0x00031b7f) list_double_number_pane_vc_g1

0x74e6,	// (0x00031b8b) list_double_number_pane_vc_g2_ParamLimits

0x74e6,	// (0x00031b8b) list_double_number_pane_vc_g2

0x0001,

0xf7df,	// (0x00039e84) list_double_number_pane_vc_g_ParamLimits

0xf7df,	// (0x00039e84) list_double_number_pane_vc_g

0x78d9,	// (0x00031f7e) list_double_number_pane_vc_t1_ParamLimits

0x78d9,	// (0x00031f7e) list_double_number_pane_vc_t1

0x78eb,	// (0x00031f90) list_double_number_pane_vc_t2_ParamLimits

0x78eb,	// (0x00031f90) list_double_number_pane_vc_t2

0x78ff,	// (0x00031fa4) list_double_number_pane_vc_t3_ParamLimits

0x78ff,	// (0x00031fa4) list_double_number_pane_vc_t3

0x0002,

0xfa4c,	// (0x0003a0f1) list_double_number_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003a0f1) list_double_number_pane_vc_t

0x7917,	// (0x00031fbc) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7917,	// (0x00031fbc) list_double_large_graphic_pane_vc_g1

0x7939,	// (0x00031fde) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7939,	// (0x00031fde) list_double_large_graphic_pane_vc_g2

0x794d,	// (0x00031ff2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x794d,	// (0x00031ff2) list_double_large_graphic_pane_vc_g3

0x795c,	// (0x00032001) list_double_large_graphic_pane_vc_g4_ParamLimits

0x795c,	// (0x00032001) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa53,	// (0x0003a0f8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0003a0f8) list_double_large_graphic_pane_vc_g

0x7968,	// (0x0003200d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7968,	// (0x0003200d) list_double_large_graphic_pane_vc_t1

0x7984,	// (0x00032029) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7984,	// (0x00032029) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0003a101) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003a101) list_double_large_graphic_pane_vc_t

0x74da,	// (0x00031b7f) list_double_heading_pane_vc_g1_ParamLimits

0x74da,	// (0x00031b7f) list_double_heading_pane_vc_g1

0x74e6,	// (0x00031b8b) list_double_heading_pane_vc_g2_ParamLimits

0x74e6,	// (0x00031b8b) list_double_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x00039e84) list_double_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x00039e84) list_double_heading_pane_vc_g

0x79a6,	// (0x0003204b) list_double_heading_pane_vc_t1_ParamLimits

0x79a6,	// (0x0003204b) list_double_heading_pane_vc_t1

0x79ba,	// (0x0003205f) list_double_heading_pane_vc_t2_ParamLimits

0x79ba,	// (0x0003205f) list_double_heading_pane_vc_t2

0x0001,

0xfa61,	// (0x0003a106) list_double_heading_pane_vc_t_ParamLimits

0xfa61,	// (0x0003a106) list_double_heading_pane_vc_t

0x79d2,	// (0x00032077) list_double_graphic_pane_vc_g1_ParamLimits

0x79d2,	// (0x00032077) list_double_graphic_pane_vc_g1

0x79de,	// (0x00032083) list_double_graphic_pane_vc_g2_ParamLimits

0x79de,	// (0x00032083) list_double_graphic_pane_vc_g2

0x74da,	// (0x00031b7f) list_double_graphic_pane_vc_g3_ParamLimits

0x74da,	// (0x00031b7f) list_double_graphic_pane_vc_g3

0x0003,

0xfa66,	// (0x0003a10b) list_double_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0003a10b) list_double_graphic_pane_vc_g

0x79fb,	// (0x000320a0) list_double_graphic_pane_vc_t1_ParamLimits

0x79fb,	// (0x000320a0) list_double_graphic_pane_vc_t1

0x7a25,	// (0x000320ca) list_double_graphic_pane_vc_t2_ParamLimits

0x7a25,	// (0x000320ca) list_double_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003a114) list_double_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003a114) list_double_graphic_pane_vc_t

0x48a8,	// (0x0002ef4d) aid_size_cell_fastswap

0x48b0,	// (0x0002ef55) aid_size_cell_touch_ParamLimits

0x48b0,	// (0x0002ef55) aid_size_cell_touch

0x4b15,	// (0x0002f1ba) popup_fast_swap_wide_window_ParamLimits

0x4b15,	// (0x0002f1ba) popup_fast_swap_wide_window

0x4c29,	// (0x0002f2ce) touch_pane_ParamLimits

0x4c29,	// (0x0002f2ce) touch_pane

0x87a1,	// (0x00032e46) button_value_adjust_pane_cp2

0x51d2,	// (0x0002f877) button_value_adjust_pane_cp4

0x51f2,	// (0x0002f897) form_field_data_pane_cp2

0x5211,	// (0x0002f8b6) form_field_data_wide_pane_cp2

0x8c23,	// (0x000332c8) bg_scroll_pane_ParamLimits

0x55d2,	// (0x0002fc77) scroll_handle_pane_ParamLimits

0x55e6,	// (0x0002fc8b) scroll_sc2_down_pane_ParamLimits

0x55e6,	// (0x0002fc8b) scroll_sc2_down_pane

0x8c54,	// (0x000332f9) scroll_sc2_up_pane_ParamLimits

0x8c54,	// (0x000332f9) scroll_sc2_up_pane

0xbe45,	// (0x000364ea) grid_wheel_folder_pane_g1_ParamLimits

0xbe45,	// (0x000364ea) grid_wheel_folder_pane_g1

0x57ab,	// (0x0002fe50) clock_nsta_pane_cp2_ParamLimits

0x57ab,	// (0x0002fe50) clock_nsta_pane_cp2

0x9454,	// (0x00033af9) listscroll_midp_pane_ParamLimits

0x9460,	// (0x00033b05) midp_canvas_pane

0x9748,	// (0x00033ded) nsta_clock_indic_pane

0x9781,	// (0x00033e26) listscroll_form_pane_vc

0x9789,	// (0x00033e2e) listscroll_set_pane_vc_ParamLimits

0x9789,	// (0x00033e2e) listscroll_set_pane_vc

0x988e,	// (0x00033f33) clock_nsta_pane

0x9903,	// (0x00033fa8) indicator_nsta_pane

0x9be3,	// (0x00034288) bg_popup_sub_pane_cp2_ParamLimits

0x9bf7,	// (0x0003429c) find_pane_cp2_ParamLimits

0x9bf7,	// (0x0003429c) find_pane_cp2

0x9c0d,	// (0x000342b2) grid_toobar_pane_ParamLimits

0x9ced,	// (0x00034392) list_form_gen_pane_vc_ParamLimits

0x9ced,	// (0x00034392) list_form_gen_pane_vc

0x9d03,	// (0x000343a8) scroll_pane_cp8_vc_ParamLimits

0x9d03,	// (0x000343a8) scroll_pane_cp8_vc

0x9d7f,	// (0x00034424) data_form_wide_pane_vc_ParamLimits

0x9d7f,	// (0x00034424) data_form_wide_pane_vc

0x9d8b,	// (0x00034430) form_field_data_wide_pane_vc_g1

0x9d93,	// (0x00034438) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d93,	// (0x00034438) form_field_data_wide_pane_vc_t1

0x87b5,	// (0x00032e5a) input_focus_pane_cp6_vc_ParamLimits

0x87b5,	// (0x00032e5a) input_focus_pane_cp6_vc

0xa0b9,	// (0x0003475e) list_midp_pane_ParamLimits

0xa0c5,	// (0x0003476a) scroll_pane_cp16_ParamLimits

0xa0c5,	// (0x0003476a) scroll_pane_cp16

0xa11b,	// (0x000347c0) button_value_adjust_pane_ParamLimits

0xa11b,	// (0x000347c0) button_value_adjust_pane

0xb098,	// (0x0003573d) button_value_adjust_pane_cp6_ParamLimits

0xb098,	// (0x0003573d) button_value_adjust_pane_cp6

0xb1c2,	// (0x00035867) settings_code_pane_cp_ParamLimits

0xb1c2,	// (0x00035867) settings_code_pane_cp

0x7e5c,	// (0x00032501) cell_touch_pane_g1

0x7e5c,	// (0x00032501) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00039da8) cell_touch_pane_g

0xb78d,	// (0x00035e32) cell_touch_pane_cp_ParamLimits

0xb78d,	// (0x00035e32) cell_touch_pane_cp

0xb79d,	// (0x00035e42) cell_touch_pane_ParamLimits

0xb79d,	// (0x00035e42) cell_touch_pane

0x7e5c,	// (0x00032501) scroll_sc2_down_pane_g1

0x7e5c,	// (0x00032501) scroll_sc2_up_pane_g1

0x7e66,	// (0x0003250b) bg_set_opt_pane_cp4_vc

0xb7af,	// (0x00035e54) list_set_graphic_pane_vc_g1_ParamLimits

0xb7af,	// (0x00035e54) list_set_graphic_pane_vc_g1

0xb7bb,	// (0x00035e60) list_set_graphic_pane_vc_g2_ParamLimits

0xb7bb,	// (0x00035e60) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0003a09d) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0003a09d) list_set_graphic_pane_vc_g

0xb7c7,	// (0x00035e6c) text_primary_small_cp13_vc_ParamLimits

0xb7c7,	// (0x00035e6c) text_primary_small_cp13_vc

0xb7df,	// (0x00035e84) list_set_graphic_pane_vc_ParamLimits

0xb7df,	// (0x00035e84) list_set_graphic_pane_vc

0x7e66,	// (0x0003250b) input_focus_pane_cp2_vc

0x7e5c,	// (0x00032501) setting_code_pane_vc_g1

0x7f91,	// (0x00032636) setting_code_pane_vc_t1

0xb7f1,	// (0x00035e96) set_text_pane_vc_t1_ParamLimits

0xb7f1,	// (0x00035e96) set_text_pane_vc_t1

0x7e66,	// (0x0003250b) input_focus_pane_cp1_vc

0xb80d,	// (0x00035eb2) list_set_text_pane_vc

0x7e5c,	// (0x00032501) setting_text_pane_vc_g1

0x7e66,	// (0x0003250b) bg_set_opt_pane_cp2_vc

0x7f88,	// (0x0003262d) setting_slider_graphic_pane_vc_g1

0xb817,	// (0x00035ebc) setting_slider_graphic_pane_vc_t1

0xb827,	// (0x00035ecc) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0003a0a2) setting_slider_graphic_pane_vc_t

0xb837,	// (0x00035edc) slider_set_pane_cp_vc

0xb83f,	// (0x00035ee4) slider_set_pane_vc_g1

0xb848,	// (0x00035eed) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0003a0a7) slider_set_pane_vc_g

0x880d,	// (0x00032eb2) set_opt_bg_pane_g1_copy1

0x8815,	// (0x00032eba) set_opt_bg_pane_g2_copy1

0xb874,	// (0x00035f19) set_opt_bg_pane_g3_copy1

0x8825,	// (0x00032eca) set_opt_bg_pane_g4_copy1

0x882d,	// (0x00032ed2) set_opt_bg_pane_g5_copy1

0x8835,	// (0x00032eda) set_opt_bg_pane_g6_copy1

0xb87e,	// (0x00035f23) set_opt_bg_pane_g7_copy1

0xb886,	// (0x00035f2b) set_opt_bg_pane_g8_copy1

0xb890,	// (0x00035f35) set_opt_bg_pane_g9_copy1

0x7e66,	// (0x0003250b) bg_set_opt_pane_cp_vc

0xb89a,	// (0x00035f3f) setting_slider_pane_vc_t1

0xb8a9,	// (0x00035f4e) setting_slider_pane_vc_t2

0xb8b9,	// (0x00035f5e) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0003a0b6) setting_slider_pane_vc_t

0xb8c9,	// (0x00035f6e) slider_set_pane_vc

0x6121,	// (0x000307c6) volume_set_pane_vc_g1

0x612a,	// (0x000307cf) volume_set_pane_vc_g2

0x6133,	// (0x000307d8) volume_set_pane_vc_g3

0x613c,	// (0x000307e1) volume_set_pane_vc_g4

0x6145,	// (0x000307ea) volume_set_pane_vc_g5

0x614e,	// (0x000307f3) volume_set_pane_vc_g6

0x6157,	// (0x000307fc) volume_set_pane_vc_g7

0x6160,	// (0x00030805) volume_set_pane_vc_g8

0x6169,	// (0x0003080e) volume_set_pane_vc_g9

0x6172,	// (0x00030817) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x00039f5b) volume_set_pane_vc_g

0xb8d1,	// (0x00035f76) volume_set_pane_vc

0xb8d9,	// (0x00035f7e) button_value_adjust_pane_cp1_vc

0xb8e3,	// (0x00035f88) list_highlight_pane_cp2_vc

0xb8ec,	// (0x00035f91) list_set_pane_vc_ParamLimits

0xb8ec,	// (0x00035f91) list_set_pane_vc

0xb94a,	// (0x00035fef) main_pane_set_vc_t1_ParamLimits

0xb94a,	// (0x00035fef) main_pane_set_vc_t1

0xb95f,	// (0x00036004) main_pane_set_vc_t2_ParamLimits

0xb95f,	// (0x00036004) main_pane_set_vc_t2

0xb971,	// (0x00036016) main_pane_set_vc_t3_ParamLimits

0xb971,	// (0x00036016) main_pane_set_vc_t3

0xb985,	// (0x0003602a) main_pane_set_vc_t4_ParamLimits

0xb985,	// (0x0003602a) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0003a0bd) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0003a0bd) main_pane_set_vc_t

0xb999,	// (0x0003603e) setting_code_pane_vc_ParamLimits

0xb999,	// (0x0003603e) setting_code_pane_vc

0xb9aa,	// (0x0003604f) setting_slider_graphic_pane_vc

0xb9aa,	// (0x0003604f) setting_slider_pane_vc

0xb9aa,	// (0x0003604f) setting_text_pane_vc

0xb9aa,	// (0x0003604f) setting_volume_pane_vc

0xb9b4,	// (0x00036059) scroll_pane_cp121_vc

0x878f,	// (0x00032e34) set_content_pane_vc

0xb9bc,	// (0x00036061) button_value_adjust_pane_g1

0xb9c5,	// (0x0003606a) button_value_adjust_pane_g2

0x0001,

0xfa74,	// (0x0003a119) button_value_adjust_pane_g

0xb9ce,	// (0x00036073) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9ce,	// (0x00036073) form_field_slider_wide_pane_vc_t1

0xb9e2,	// (0x00036087) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9e2,	// (0x00036087) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa79,	// (0x0003a11e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa79,	// (0x0003a11e) form_field_slider_wide_pane_vc_t

0x81c1,	// (0x00032866) input_focus_pane_cp10_vc_ParamLimits

0x81c1,	// (0x00032866) input_focus_pane_cp10_vc

0xba10,	// (0x000360b5) slider_cont_pane_cp1_vc_ParamLimits

0xba10,	// (0x000360b5) slider_cont_pane_cp1_vc

0xba22,	// (0x000360c7) slider_form_pane_g1_cp2

0xb848,	// (0x00035eed) slider_form_pane_g2_cp2

0xba4f,	// (0x000360f4) form_field_slider_pane_vc_t3

0xba5d,	// (0x00036102) form_field_slider_pane_vc_t4

0xba6b,	// (0x00036110) slider_form_pane_vc_ParamLimits

0xba6b,	// (0x00036110) slider_form_pane_vc

0xba78,	// (0x0003611d) form_field_slider_pane_vc_t1_ParamLimits

0xba78,	// (0x0003611d) form_field_slider_pane_vc_t1

0xb9e2,	// (0x00036087) form_field_slider_pane_vc_t2_ParamLimits

0xb9e2,	// (0x00036087) form_field_slider_pane_vc_t2

0x0001,

0xfa8b,	// (0x0003a130) form_field_slider_pane_vc_t_ParamLimits

0xfa8b,	// (0x0003a130) form_field_slider_pane_vc_t

0x81c1,	// (0x00032866) input_focus_pane_cp9_vc_ParamLimits

0x81c1,	// (0x00032866) input_focus_pane_cp9_vc

0xba94,	// (0x00036139) slider_cont_pane_vc_ParamLimits

0xba94,	// (0x00036139) slider_cont_pane_vc

0xbaa8,	// (0x0003614d) list_form_graphic_pane_cp_vc_ParamLimits

0xbaa8,	// (0x0003614d) list_form_graphic_pane_cp_vc

0x9d8b,	// (0x00034430) form_field_popup_wide_pane_vc_g1

0xbabd,	// (0x00036162) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbabd,	// (0x00036162) form_field_popup_wide_pane_vc_t1

0x87b5,	// (0x00032e5a) input_focus_pane_cp8_vc_ParamLimits

0x87b5,	// (0x00032e5a) input_focus_pane_cp8_vc

0xbb02,	// (0x000361a7) list_form_wide_pane_vc_ParamLimits

0xbb02,	// (0x000361a7) list_form_wide_pane_vc

0xbb0e,	// (0x000361b3) list_form_graphic_pane_vc_g1

0xbb16,	// (0x000361bb) list_form_graphic_pane_vc_t1_ParamLimits

0xbb16,	// (0x000361bb) list_form_graphic_pane_vc_t1

0x7f46,	// (0x000325eb) list_highlight_pane_cp5_vc_ParamLimits

0x7f46,	// (0x000325eb) list_highlight_pane_cp5_vc

0xbb32,	// (0x000361d7) list_form_graphic_pane_vc_ParamLimits

0xbb32,	// (0x000361d7) list_form_graphic_pane_vc

0x9d8b,	// (0x00034430) form_field_popup_pane_vc_g1

0xbb48,	// (0x000361ed) form_field_popup_pane_vc_t1_ParamLimits

0xbb48,	// (0x000361ed) form_field_popup_pane_vc_t1

0x87b5,	// (0x00032e5a) input_focus_pane_cp7_vc_ParamLimits

0x87b5,	// (0x00032e5a) input_focus_pane_cp7_vc

0xbb5f,	// (0x00036204) list_form_pane_vc_ParamLimits

0xbb5f,	// (0x00036204) list_form_pane_vc

0xbb6b,	// (0x00036210) data_form_pane_vc_t1_ParamLimits

0xbb6b,	// (0x00036210) data_form_pane_vc_t1

0x880d,	// (0x00032eb2) input_focus_pane_vc_g1

0x8815,	// (0x00032eba) input_focus_pane_vc_g2

0x881d,	// (0x00032ec2) input_focus_pane_vc_g3

0x8825,	// (0x00032eca) input_focus_pane_vc_g4

0x882d,	// (0x00032ed2) input_focus_pane_vc_g5

0x8835,	// (0x00032eda) input_focus_pane_vc_g6

0x883d,	// (0x00032ee2) input_focus_pane_vc_g7

0x8845,	// (0x00032eea) input_focus_pane_vc_g8

0x884d,	// (0x00032ef2) input_focus_pane_vc_g9

0x7e5c,	// (0x00032501) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00039d31) input_focus_pane_vc_g

0x9d7f,	// (0x00034424) data_form_pane_vc_ParamLimits

0x9d7f,	// (0x00034424) data_form_pane_vc

0x9d8b,	// (0x00034430) form_field_data_pane_vc_g1

0xbb86,	// (0x0003622b) form_field_data_pane_vc_t1_ParamLimits

0xbb86,	// (0x0003622b) form_field_data_pane_vc_t1

0x87b5,	// (0x00032e5a) input_focus_pane_vc_ParamLimits

0x87b5,	// (0x00032e5a) input_focus_pane_vc

0xbba0,	// (0x00036245) button_value_adjust_pane_cp3_vc

0xbba8,	// (0x0003624d) button_value_adjust_pane_cp5_vc

0xbbb0,	// (0x00036255) form_field_data_pane_vc_ParamLimits

0xbbb0,	// (0x00036255) form_field_data_pane_vc

0xbbc7,	// (0x0003626c) form_field_data_pane_vc_cp2

0xbbcf,	// (0x00036274) form_field_data_wide_pane_vc_ParamLimits

0xbbcf,	// (0x00036274) form_field_data_wide_pane_vc

0xbbe5,	// (0x0003628a) form_field_data_wide_pane_vc_cp2

0xbbed,	// (0x00036292) form_field_popup_pane_vc_ParamLimits

0xbbed,	// (0x00036292) form_field_popup_pane_vc

0xbc04,	// (0x000362a9) form_field_popup_wide_pane_vc_ParamLimits

0xbc04,	// (0x000362a9) form_field_popup_wide_pane_vc

0xbc1a,	// (0x000362bf) form_field_slider_pane_vc_ParamLimits

0xbc1a,	// (0x000362bf) form_field_slider_pane_vc

0xbc2d,	// (0x000362d2) form_field_slider_wide_pane_vc_ParamLimits

0xbc2d,	// (0x000362d2) form_field_slider_wide_pane_vc

0xbc40,	// (0x000362e5) grid_touch_1_pane_ParamLimits

0xbc40,	// (0x000362e5) grid_touch_1_pane

0xbc4c,	// (0x000362f1) grid_touch_2_pane_ParamLimits

0xbc4c,	// (0x000362f1) grid_touch_2_pane

0x9713,	// (0x00033db8) touch_pane_g1_ParamLimits

0x9713,	// (0x00033db8) touch_pane_g1

0xbc64,	// (0x00036309) cell_app_pane_cp_wide_ParamLimits

0xbc64,	// (0x00036309) cell_app_pane_cp_wide

0xbc75,	// (0x0003631a) grid_popup_fast_wide_pane_ParamLimits

0xbc75,	// (0x0003631a) grid_popup_fast_wide_pane

0xbc89,	// (0x0003632e) scroll_pane_cp19_ParamLimits

0xbc89,	// (0x0003632e) scroll_pane_cp19

0x7e66,	// (0x0003250b) bg_popup_window_pane_cp20

0xbc9d,	// (0x00036342) listscroll_popup_fast_wide_pane

0x7f46,	// (0x000325eb) grid_indicator_nsta_pane

0xbca5,	// (0x0003634a) clock_nsta_pane_g1

0xbcba,	// (0x0003635f) clock_nsta_pane_t1

0xbcd6,	// (0x0003637b) cell_indicator_nsta_pane_ParamLimits

0xbcd6,	// (0x0003637b) cell_indicator_nsta_pane

0xbd07,	// (0x000363ac) cell_indicator_nsta_pane_g1

0xbd15,	// (0x000363ba) cell_indicator_nsta_pane_g2

0x0001,

0xfa9c,	// (0x0003a141) cell_indicator_nsta_pane_g

0xbd22,	// (0x000363c7) clock_nsta_pane_cp

0xbd2a,	// (0x000363cf) indicator_nsta_pane_cp

0xbd32,	// (0x000363d7) nsta_clock_indic_pane_g1

0x800f,	// (0x000326b4) grid_indicator_pane

0x8d49,	// (0x000333ee) scroll_pane_cp29

0x56fa,	// (0x0002fd9f) indicator_nsta_pane_cp2_ParamLimits

0x56fa,	// (0x0002fd9f) indicator_nsta_pane_cp2

0x7f46,	// (0x000325eb) main_apps_wheel_pane

0x9f9a,	// (0x0003463f) form_midp_field_text_pane_ParamLimits

0xa0e5,	// (0x0003478a) scroll_bar_cp050_ParamLimits

0xbd82,	// (0x00036427) cell_indicator_pane_ParamLimits

0xbd82,	// (0x00036427) cell_indicator_pane

0xbd99,	// (0x0003643e) cell_indicator_pane_g1

0xbda3,	// (0x00036448) grid_wheel_folder_pane_ParamLimits

0xbda3,	// (0x00036448) grid_wheel_folder_pane

0xbdb9,	// (0x0003645e) list_wheel_apps_pane_ParamLimits

0xbdb9,	// (0x0003645e) list_wheel_apps_pane

0xbdca,	// (0x0003646f) main_apps_wheel_pane_g1_ParamLimits

0xbdca,	// (0x0003646f) main_apps_wheel_pane_g1

0xbdde,	// (0x00036483) main_apps_wheel_pane_g2_ParamLimits

0xbdde,	// (0x00036483) main_apps_wheel_pane_g2

0x0001,

0xfab8,	// (0x0003a15d) main_apps_wheel_pane_g_ParamLimits

0xfab8,	// (0x0003a15d) main_apps_wheel_pane_g

0xbdf6,	// (0x0003649b) main_apps_wheel_pane_t1_ParamLimits

0xbdf6,	// (0x0003649b) main_apps_wheel_pane_t1

0xbe19,	// (0x000364be) list_wheel_apps_pane_g1

0xbe21,	// (0x000364c6) list_wheel_apps_pane_g2

0xbe29,	// (0x000364ce) list_wheel_apps_pane_g3

0xbe31,	// (0x000364d6) list_wheel_apps_pane_g4

0xbe3b,	// (0x000364e0) list_wheel_apps_pane_g5

0x0004,

0xfabd,	// (0x0003a162) list_wheel_apps_pane_g

0x92cc,	// (0x00033971) navi_icon_text_pane

0x97bd,	// (0x00033e62) aid_fill_nsta

0xbe5e,	// (0x00036503) navi_icon_text_pane_g1

0xbe6a,	// (0x0003650f) navi_icon_text_pane_t1

0x915f,	// (0x00033804) list_set_graphic_pane_t1_ParamLimits

0x915f,	// (0x00033804) list_set_graphic_pane_t1

0xa848,	// (0x00034eed) popup_midp_note_alarm_window_t6_ParamLimits

0xa848,	// (0x00034eed) popup_midp_note_alarm_window_t6

0xa85a,	// (0x00034eff) popup_midp_note_alarm_window_t7_ParamLimits

0xa85a,	// (0x00034eff) popup_midp_note_alarm_window_t7

0xa86c,	// (0x00034f11) popup_midp_note_alarm_window_t8_ParamLimits

0xa86c,	// (0x00034f11) popup_midp_note_alarm_window_t8

0xa87e,	// (0x00034f23) popup_midp_note_alarm_window_t9_ParamLimits

0xa87e,	// (0x00034f23) popup_midp_note_alarm_window_t9

0xa890,	// (0x00034f35) popup_midp_note_alarm_window_t10_ParamLimits

0xa890,	// (0x00034f35) popup_midp_note_alarm_window_t10

0xa8a2,	// (0x00034f47) popup_midp_note_alarm_window_t11_ParamLimits

0xa8a2,	// (0x00034f47) popup_midp_note_alarm_window_t11

0xa8b4,	// (0x00034f59) scroll_pane_cp17_ParamLimits

0xa8b4,	// (0x00034f59) scroll_pane_cp17

0x6121,	// (0x000307c6) volume_small_pane_cp_g1

0x6416,	// (0x00030abb) volume_small_pane_cp_g2

0x641f,	// (0x00030ac4) volume_small_pane_cp_g3

0x6428,	// (0x00030acd) volume_small_pane_cp_g4

0x6431,	// (0x00030ad6) volume_small_pane_cp_g5

0x643a,	// (0x00030adf) volume_small_pane_cp_g6

0x6443,	// (0x00030ae8) volume_small_pane_cp_g7

0x644c,	// (0x00030af1) volume_small_pane_cp_g8

0x6455,	// (0x00030afa) volume_small_pane_cp_g9

0x645e,	// (0x00030b03) volume_small_pane_cp_g10

0x9529,	// (0x00033bce) midp_ticker_pane_g1_ParamLimits

0x9535,	// (0x00033bda) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00039dfd) midp_ticker_pane_g_ParamLimits

0x9541,	// (0x00033be6) midp_ticker_pane_t1_ParamLimits

0x97d3,	// (0x00033e78) aid_fill_nsta_2

0xa0d1,	// (0x00034776) list_form2_midp_pane

0xb20d,	// (0x000358b2) midp_editing_number_pane_ParamLimits

0xb21c,	// (0x000358c1) midp_ticker_pane_ParamLimits

0xbe7c,	// (0x00036521) form2_midp_field_pane

0xbea0,	// (0x00036545) scroll_pane_cp51

0xbec0,	// (0x00036565) form2_midp_button_pane_ParamLimits

0xbec0,	// (0x00036565) form2_midp_button_pane

0xbed2,	// (0x00036577) form2_midp_content_pane_ParamLimits

0xbed2,	// (0x00036577) form2_midp_content_pane

0xbeec,	// (0x00036591) form2_midp_field_choice_group_pane

0xbef4,	// (0x00036599) form2_midp_field_pane_g1

0xbefc,	// (0x000365a1) form2_midp_field_pane_g2

0xbf04,	// (0x000365a9) form2_midp_field_pane_g3

0xbf0c,	// (0x000365b1) form2_midp_field_pane_g4

0x0003,

0xfae2,	// (0x0003a187) form2_midp_field_pane_g

0xbf14,	// (0x000365b9) form2_midp_gauge_slider_pane

0xbf1c,	// (0x000365c1) form2_midp_gauge_wait_pane

0xbf24,	// (0x000365c9) form2_midp_image_pane_ParamLimits

0xbf24,	// (0x000365c9) form2_midp_image_pane

0xbf3f,	// (0x000365e4) form2_midp_label_pane_ParamLimits

0xbf3f,	// (0x000365e4) form2_midp_label_pane

0xbf58,	// (0x000365fd) form2_midp_label_pane_cp_ParamLimits

0xbf58,	// (0x000365fd) form2_midp_label_pane_cp

0xbf79,	// (0x0003661e) form2_midp_string_pane_ParamLimits

0xbf79,	// (0x0003661e) form2_midp_string_pane

0x7a4f,	// (0x000320f4) form2_midp_text_pane_ParamLimits

0x7a4f,	// (0x000320f4) form2_midp_text_pane

0xbf8b,	// (0x00036630) form2_midp_time_pane

0xbf9b,	// (0x00036640) input_focus_pane_cp51_ParamLimits

0xbf9b,	// (0x00036640) input_focus_pane_cp51

0xbfb3,	// (0x00036658) form2_midp_label_pane_t1_ParamLimits

0xbfb3,	// (0x00036658) form2_midp_label_pane_t1

0x7a6a,	// (0x0003210f) form2_mdip_text_pane_t1_ParamLimits

0x7a6a,	// (0x0003210f) form2_mdip_text_pane_t1

0x7a88,	// (0x0003212d) form2_midp_time_pane_t1

0xbffc,	// (0x000366a1) form2_midp_gauge_slider_pane_t1

0xc00e,	// (0x000366b3) form2_midp_gauge_slider_pane_t2

0xc020,	// (0x000366c5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaeb,	// (0x0003a190) form2_midp_gauge_slider_pane_t

0xc032,	// (0x000366d7) form2_midp_slider_pane

0xc03e,	// (0x000366e3) form2_midp_gauge_wait_pane_t1

0xc04c,	// (0x000366f1) form2_midp_wait_pane_ParamLimits

0xc04c,	// (0x000366f1) form2_midp_wait_pane

0xc077,	// (0x0003671c) list_single_2graphic_pane_cp4_ParamLimits

0xc077,	// (0x0003671c) list_single_2graphic_pane_cp4

0x9df3,	// (0x00034498) list_single_midp_graphic_pane_cp_ParamLimits

0x9df3,	// (0x00034498) list_single_midp_graphic_pane_cp

0x7e66,	// (0x0003250b) list_highlight_pane_cp20

0xc09b,	// (0x00036740) list_single_2graphic_pane_g1_cp4

0xc0a3,	// (0x00036748) list_single_2graphic_pane_g2_cp4

0xc0ab,	// (0x00036750) list_single_2graphic_pane_t1_cp4

0x7f46,	// (0x000325eb) list_highlight_pane_cp21

0xc0ba,	// (0x0003675f) list_single_midp_graphic_pane_g4_cp

0xc0c9,	// (0x0003676e) list_single_midp_graphic_pane_t1_cp

0xc0de,	// (0x00036783) form2_mdip_string_pane_t1_ParamLimits

0xc0de,	// (0x00036783) form2_mdip_string_pane_t1

0x7e66,	// (0x0003250b) bg_wml_button_pane_cp2

0x7e5c,	// (0x00032501) form2_midp_image_pane_g1

0x4fbc,	// (0x0002f661) list_double_large_graphic_pane_g5_ParamLimits

0x4fbc,	// (0x0002f661) list_double_large_graphic_pane_g5

0x9454,	// (0x00033af9) midp_form_pane_ParamLimits

0x7f46,	// (0x000325eb) main_apps_wheel_pane_ParamLimits

0x5dcd,	// (0x00030472) popup_preview_window_ParamLimits

0x5dcd,	// (0x00030472) popup_preview_window

0x5f88,	// (0x0003062d) popup_touch_info_window_ParamLimits

0x5f88,	// (0x0003062d) popup_touch_info_window

0x5fa6,	// (0x0003064b) popup_touch_menu_window_ParamLimits

0x5fa6,	// (0x0003064b) popup_touch_menu_window

0x7e52,	// (0x000324f7) bg_popup_sub_pane_cp6

0xc1d7,	// (0x0003687c) list_touch_menu_pane

0xc1df,	// (0x00036884) list_single_touch_menu_pane_ParamLimits

0xc1df,	// (0x00036884) list_single_touch_menu_pane

0xc1f5,	// (0x0003689a) list_single_touch_menu_pane_t1

0x7f46,	// (0x000325eb) bg_popup_sub_pane_cp7_ParamLimits

0x7f46,	// (0x000325eb) bg_popup_sub_pane_cp7

0xc203,	// (0x000368a8) heading_sub_pane

0xc20b,	// (0x000368b0) list_touch_info_pane_ParamLimits

0xc20b,	// (0x000368b0) list_touch_info_pane

0xc21a,	// (0x000368bf) list_single_touch_info_pane_ParamLimits

0xc21a,	// (0x000368bf) list_single_touch_info_pane

0xc22c,	// (0x000368d1) list_single_touch_info_pane_t1

0xc23a,	// (0x000368df) list_single_touch_info_pane_t2

0x0001,

0xfaf9,	// (0x0003a19e) list_single_touch_info_pane_t

0x944c,	// (0x00033af1) bg_popup_heading_pane_cp

0xc248,	// (0x000368ed) heading_sub_pane_t1

0x9d19,	// (0x000343be) bg_popup_preview_window_pane_cp_ParamLimits

0x9d19,	// (0x000343be) bg_popup_preview_window_pane_cp

0xc203,	// (0x000368a8) heading_preview_pane

0xc20b,	// (0x000368b0) list_preview_pane_ParamLimits

0xc20b,	// (0x000368b0) list_preview_pane

0xc256,	// (0x000368fb) popup_preview_window_g1

0xc21a,	// (0x000368bf) list_single_preview_pane_ParamLimits

0xc21a,	// (0x000368bf) list_single_preview_pane

0xc25e,	// (0x00036903) list_single_preview_pane_g1

0xc266,	// (0x0003690b) list_single_preview_pane_t1

0xc22c,	// (0x000368d1) list_single_preview_pane_t2

0x0001,

0xfafe,	// (0x0003a1a3) list_single_preview_pane_t

0xc274,	// (0x00036919) bg_popup_heading_pane_cp2_ParamLimits

0xc274,	// (0x00036919) bg_popup_heading_pane_cp2

0xc28a,	// (0x0003692f) heading_preview_pane_g1

0xc292,	// (0x00036937) heading_preview_pane_t1_ParamLimits

0xc292,	// (0x00036937) heading_preview_pane_t1

0x8032,	// (0x000326d7) soft_indicator_pane_t1_ParamLimits

0x8728,	// (0x00032dcd) scroll_pane_ParamLimits

0x8c42,	// (0x000332e7) scroll_sc2_left_pane

0x8c4b,	// (0x000332f0) scroll_sc2_right_pane

0x8c6a,	// (0x0003330f) scroll_bg_pane_g1_ParamLimits

0x8c7f,	// (0x00033324) scroll_bg_pane_g2_ParamLimits

0x8c97,	// (0x0003333c) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00039d88) scroll_bg_pane_g_ParamLimits

0x8c6a,	// (0x0003330f) scroll_handle_pane_g1_ParamLimits

0x8cb9,	// (0x0003335e) scroll_handle_pane_g2_ParamLimits

0x8c97,	// (0x0003333c) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00039d8f) scroll_handle_pane_g_ParamLimits

0x5a4e,	// (0x000300f3) popup_choice_list_window_ParamLimits

0x5a4e,	// (0x000300f3) popup_choice_list_window

0x9bef,	// (0x00034294) choice_list_pane

0x9c71,	// (0x00034316) cell_toolbar_pane_t1

0x9c99,	// (0x0003433e) toolbar_button_pane_ParamLimits

0xad6e,	// (0x00035413) ai_gene_pane_1_t2_ParamLimits

0xad6e,	// (0x00035413) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x00039fb7) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x00039fb7) ai_gene_pane_1_t

0xc2af,	// (0x00036954) scroll_sc2_left_pane_g1

0xc2af,	// (0x00036954) scroll_sc2_right_pane_g1

0x979b,	// (0x00033e40) bg_popup_sub_pane_cp10

0xc2b9,	// (0x0003695e) list_choice_list_pane

0xc2d2,	// (0x00036977) list_single_choice_list_pane_ParamLimits

0xc2d2,	// (0x00036977) list_single_choice_list_pane

0xc2e5,	// (0x0003698a) list_single_choice_list_pane_g1

0x8946,	// (0x00032feb) list_single_choice_list_pane_t1_ParamLimits

0x8946,	// (0x00032feb) list_single_choice_list_pane_t1

0xc2ed,	// (0x00036992) choice_list_pane_g1

0xc2f5,	// (0x0003699a) choice_list_pane_t1

0x7e52,	// (0x000324f7) input_focus_pane_cp11

0x8b1d,	// (0x000331c2) title_pane_stacon_g2_ParamLimits

0x8b1d,	// (0x000331c2) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00039d6e) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00039d6e) title_pane_stacon_g

0x944c,	// (0x00033af1) cursor_press_pane

0x5afa,	// (0x0003019f) popup_fep_hwr_window_ParamLimits

0x5afa,	// (0x0003019f) popup_fep_hwr_window

0x5b74,	// (0x00030219) popup_fep_vkb_window_ParamLimits

0x5b74,	// (0x00030219) popup_fep_vkb_window

0xc303,	// (0x000369a8) cursor_press_pane_g1

0x0002,

0xfb27,	// (0x0003a1cc) fep_vkb_side_pane_g_ParamLimits

0x64a0,	// (0x00030b45) fep_hwr_candidate_pane_ParamLimits

0x64a0,	// (0x00030b45) fep_hwr_candidate_pane

0x64ca,	// (0x00030b6f) fep_hwr_side_pane_ParamLimits

0x64ca,	// (0x00030b6f) fep_hwr_side_pane

0x64ea,	// (0x00030b8f) fep_hwr_top_pane_ParamLimits

0x64ea,	// (0x00030b8f) fep_hwr_top_pane

0x6502,	// (0x00030ba7) fep_hwr_write_pane_ParamLimits

0x6502,	// (0x00030ba7) fep_hwr_write_pane

0xfb27,	// (0x0003a1cc) fep_vkb_side_pane_g

0xc30b,	// (0x000369b0) fep_hwr_top_pane_g1

0xc31d,	// (0x000369c2) fep_hwr_top_pane_g2

0x653c,	// (0x00030be1) fep_hwr_top_pane_g3

0x0002,

0xfb03,	// (0x0003a1a8) fep_hwr_top_pane_g

0x6551,	// (0x00030bf6) fep_hwr_top_text_pane

0x8e39,	// (0x000334de) fep_hwr_top_text_pane_g1

0xc353,	// (0x000369f8) fep_hwr_top_text_pane_t1

0x6647,	// (0x00030cec) fep_hwr_candidate_pane_g1

0xc5a6,	// (0x00036c4b) fep_vkb_keypad_pane_g3_ParamLimits

0xc5a6,	// (0x00036c4b) fep_vkb_keypad_pane_g3

0xc5ce,	// (0x00036c73) fep_vkb_keypad_pane_g4_ParamLimits

0xc5ce,	// (0x00036c73) fep_vkb_keypad_pane_g4

0xc63d,	// (0x00036ce2) fep_vkb_bottom_pane_g2_ParamLimits

0xc63d,	// (0x00036ce2) fep_vkb_bottom_pane_g2

0x0001,

0xfb2e,	// (0x0003a1d3) fep_vkb_bottom_pane_g_ParamLimits

0xfb2e,	// (0x0003a1d3) fep_vkb_bottom_pane_g

0xc2af,	// (0x00036954) cell_vkb_side_pane_g2

0x0001,

0xfb38,	// (0x0003a1dd) cell_vkb_side_pane_g

0xc6c8,	// (0x00036d6d) cell_vkb_side_pane_t1

0xc6d6,	// (0x00036d7b) cell_vkb_side_pane_t1_copy1

0xc2af,	// (0x00036954) bg_fep_vkb_candidate_pane_g2

0xc802,	// (0x00036ea7) cell_vkb_candidate_pane_ParamLimits

0xc361,	// (0x00036a06) aid_size_cell_vkb_ParamLimits

0xc361,	// (0x00036a06) aid_size_cell_vkb

0xc802,	// (0x00036ea7) cell_vkb_candidate_pane

0x666e,	// (0x00030d13) bg_popup_fep_shadow_pane_g1

0xc3ef,	// (0x00036a94) fep_vkb_bottom_pane_ParamLimits

0xc3ef,	// (0x00036a94) fep_vkb_bottom_pane

0xc425,	// (0x00036aca) fep_vkb_candidate_pane_ParamLimits

0xc425,	// (0x00036aca) fep_vkb_candidate_pane

0xc441,	// (0x00036ae6) fep_vkb_keypad_pane_ParamLimits

0xc441,	// (0x00036ae6) fep_vkb_keypad_pane

0xc487,	// (0x00036b2c) fep_vkb_side_pane_ParamLimits

0xc487,	// (0x00036b2c) fep_vkb_side_pane

0xc4c3,	// (0x00036b68) fep_vkb_top_pane_ParamLimits

0xc4c3,	// (0x00036b68) fep_vkb_top_pane

0xc4ff,	// (0x00036ba4) fep_vkb_top_pane_g1_ParamLimits

0xc4ff,	// (0x00036ba4) fep_vkb_top_pane_g1

0xc50e,	// (0x00036bb3) fep_vkb_top_pane_g2_ParamLimits

0xc50e,	// (0x00036bb3) fep_vkb_top_pane_g2

0xc51d,	// (0x00036bc2) fep_vkb_top_pane_g3_ParamLimits

0xc51d,	// (0x00036bc2) fep_vkb_top_pane_g3

0x0003,

0xfb1e,	// (0x0003a1c3) fep_vkb_top_pane_g_ParamLimits

0xfb1e,	// (0x0003a1c3) fep_vkb_top_pane_g

0xc53b,	// (0x00036be0) fep_vkb_top_text_pane_ParamLimits

0xc53b,	// (0x00036be0) fep_vkb_top_text_pane

0xc54c,	// (0x00036bf1) fep_vkb_side_pane_g1_ParamLimits

0xc54c,	// (0x00036bf1) fep_vkb_side_pane_g1

0xc595,	// (0x00036c3a) grid_vkb_side_pane_ParamLimits

0xc595,	// (0x00036c3a) grid_vkb_side_pane

0x6676,	// (0x00030d1b) bg_popup_fep_shadow_pane_g2

0x667f,	// (0x00030d24) bg_popup_fep_shadow_pane_g3

0x6687,	// (0x00030d2c) bg_popup_fep_shadow_pane_g4

0x6690,	// (0x00030d35) bg_popup_fep_shadow_pane_g5

0x669a,	// (0x00030d3f) bg_popup_fep_shadow_pane_g6

0x66a2,	// (0x00030d47) bg_popup_fep_shadow_pane_g7

0x8825,	// (0x00032eca) bg_popup_fep_shadow_pane_g8

0xc5ec,	// (0x00036c91) grid_vkb_keypad_number_pane_ParamLimits

0xc5ec,	// (0x00036c91) grid_vkb_keypad_number_pane

0xc5fc,	// (0x00036ca1) grid_vkb_keypad_pane_ParamLimits

0xc5fc,	// (0x00036ca1) grid_vkb_keypad_pane

0xc622,	// (0x00036cc7) fep_vkb_bottom_pane_g1_ParamLimits

0xc622,	// (0x00036cc7) fep_vkb_bottom_pane_g1

0xc64b,	// (0x00036cf0) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64b,	// (0x00036cf0) grid_vkb_keypad_bottom_left_pane

0xc660,	// (0x00036d05) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc660,	// (0x00036d05) grid_vkb_keypad_bottom_right_pane

0xc675,	// (0x00036d1a) fep_vkb_top_text_pane_g1

0xc690,	// (0x00036d35) fep_vkb_top_text_pane_t1

0xc6a5,	// (0x00036d4a) cell_vkb_side_pane_ParamLimits

0xc6a5,	// (0x00036d4a) cell_vkb_side_pane

0xc2af,	// (0x00036954) cell_vkb_side_pane_g1

0xc6e4,	// (0x00036d89) cell_vkb_keypad_pane_ParamLimits

0xc6e4,	// (0x00036d89) cell_vkb_keypad_pane

0xc759,	// (0x00036dfe) cell_vkb_keypad_pane_g1

0x0008,

0xfb4b,	// (0x0003a1f0) bg_popup_fep_shadow_pane_g

0x66b4,	// (0x00030d59) cell_hwr_side_pane_g1

0x66b4,	// (0x00030d59) cell_hwr_side_pane_g2

0xc763,	// (0x00036e08) cell_vkb_keypad_pane_t1

0xc771,	// (0x00036e16) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc771,	// (0x00036e16) cell_vkb_keypad_bottom_left_pane

0xc78e,	// (0x00036e33) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc78e,	// (0x00036e33) cell_vkb_keypad_bottom_right_pane

0xc2af,	// (0x00036954) cell_vkb_keypad_bottom_left_pane_g1

0xc2af,	// (0x00036954) cell_vkb_keypad_bottom_right_pane_g1

0xc7c7,	// (0x00036e6c) cell_vkb_keypad_number_pane_ParamLimits

0xc7c7,	// (0x00036e6c) cell_vkb_keypad_number_pane

0xc7e6,	// (0x00036e8b) cell_vkb_keypad_number_pane_g1

0xc7f0,	// (0x00036e95) cell_vkb_keypad_number_pane_g2

0xc7f9,	// (0x00036e9e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3d,	// (0x0003a1e2) cell_vkb_keypad_number_pane_g

0xc763,	// (0x00036e08) cell_vkb_keypad_number_pane_t1

0xc81d,	// (0x00036ec2) fep_vkb_candidate_pane_g1

0x0001,

0xfb5e,	// (0x0003a203) cell_hwr_side_pane_g

0xc836,	// (0x00036edb) cell_hwr_side_pane_t1

0x66be,	// (0x00030d63) cell_hwr_side_pane_t1_copy1

0x66cc,	// (0x00030d71) cell_hwr_candidate_pane_g1

0x66fb,	// (0x00030da0) cell_hwr_candidate_pane_t1

0xc2af,	// (0x00036954) cell_vkb_candidate_pane_g2

0xc87a,	// (0x00036f1f) cell_vkb_candidate_pane_t1

0x6467,	// (0x00030b0c) bg_popup_fep_shadow_pane_ParamLimits

0x6467,	// (0x00030b0c) bg_popup_fep_shadow_pane

0x651c,	// (0x00030bc1) bg_fep_hwr_top_pane_g4

0xc32f,	// (0x000369d4) bg_hwr_side_pane_g1_ParamLimits

0xc32f,	// (0x000369d4) bg_hwr_side_pane_g1

0x658d,	// (0x00030c32) cell_hwr_side_pane_ParamLimits

0x658d,	// (0x00030c32) cell_hwr_side_pane

0x65c8,	// (0x00030c6d) fep_hwr_write_pane_g1_ParamLimits

0x65c8,	// (0x00030c6d) fep_hwr_write_pane_g1

0x65d5,	// (0x00030c7a) fep_hwr_write_pane_g2_ParamLimits

0x65d5,	// (0x00030c7a) fep_hwr_write_pane_g2

0x65e2,	// (0x00030c87) fep_hwr_write_pane_g3_ParamLimits

0x65e2,	// (0x00030c87) fep_hwr_write_pane_g3

0x65f0,	// (0x00030c95) fep_hwr_write_pane_g4_ParamLimits

0x65f0,	// (0x00030c95) fep_hwr_write_pane_g4

0x0005,

0xfb0a,	// (0x0003a1af) fep_hwr_write_pane_g_ParamLimits

0xfb0a,	// (0x0003a1af) fep_hwr_write_pane_g

0x651c,	// (0x00030bc1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x651c,	// (0x00030bc1) bg_fep_hwr_candidate_pane_g2

0x6605,	// (0x00030caa) cell_hwr_candidate_pane_ParamLimits

0x6605,	// (0x00030caa) cell_hwr_candidate_pane

0x6647,	// (0x00030cec) fep_hwr_candidate_pane_g1_ParamLimits

0xc38f,	// (0x00036a34) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc38f,	// (0x00036a34) bg_popup_fep_shadow_pane_cp2

0xc52d,	// (0x00036bd2) fep_vkb_top_pane_g4_ParamLimits

0xc52d,	// (0x00036bd2) fep_vkb_top_pane_g4

0xc573,	// (0x00036c18) fep_vkb_side_pane_g2_ParamLimits

0xc573,	// (0x00036c18) fep_vkb_side_pane_g2

0x50ff,	// (0x0002f7a4) list_setting_pane_t4_ParamLimits

0x50ff,	// (0x0002f7a4) list_setting_pane_t4

0x5199,	// (0x0002f83e) list_setting_number_pane_t5_ParamLimits

0x5199,	// (0x0002f83e) list_setting_number_pane_t5

0x8e80,	// (0x00033525) list_double_heading_pane_cp2_ParamLimits

0x8e80,	// (0x00033525) list_double_heading_pane_cp2

0x87c3,	// (0x00032e68) list_double_heading_pane_g1_cp2_ParamLimits

0x87c3,	// (0x00032e68) list_double_heading_pane_g1_cp2

0x87cf,	// (0x00032e74) list_double_heading_pane_g2_cp2_ParamLimits

0x87cf,	// (0x00032e74) list_double_heading_pane_g2_cp2

0xc888,	// (0x00036f2d) list_double_heading_pane_t1_cp2_ParamLimits

0xc888,	// (0x00036f2d) list_double_heading_pane_t1_cp2

0xc89e,	// (0x00036f43) list_double_heading_pane_t2_cp2_ParamLimits

0xc89e,	// (0x00036f43) list_double_heading_pane_t2_cp2

0x7e3a,	// (0x000324df) aid_value_unit2

0x4b6f,	// (0x0002f214) popup_preview_fixed_window

0x81cf,	// (0x00032874) bg_popup_preview_window_pane_cp02

0xc8b0,	// (0x00036f55) list_preview_fixed_pane

0xc8f6,	// (0x00036f9b) list_empty_pane_fp_ParamLimits

0xc8f6,	// (0x00036f9b) list_empty_pane_fp

0xc8f6,	// (0x00036f9b) list_single_cale_day_pane_fp_ParamLimits

0xc8f6,	// (0x00036f9b) list_single_cale_day_pane_fp

0xc8f6,	// (0x00036f9b) list_single_graphic_heading_pane_fp_ParamLimits

0xc8f6,	// (0x00036f9b) list_single_graphic_heading_pane_fp

0xc8f6,	// (0x00036f9b) list_single_graphic_pane_fp_ParamLimits

0xc8f6,	// (0x00036f9b) list_single_graphic_pane_fp

0xc8f6,	// (0x00036f9b) list_single_heading_pane_fp_ParamLimits

0xc8f6,	// (0x00036f9b) list_single_heading_pane_fp

0xc8f6,	// (0x00036f9b) list_single_pane_fp_ParamLimits

0xc8f6,	// (0x00036f9b) list_single_pane_fp

0xc90b,	// (0x00036fb0) list_single_pane_fp_g1_ParamLimits

0xc90b,	// (0x00036fb0) list_single_pane_fp_g1

0x7a9b,	// (0x00032140) list_single_pane_fp_g2_ParamLimits

0x7a9b,	// (0x00032140) list_single_pane_fp_g2

0x7aa7,	// (0x0003214c) list_single_pane_fp_g3_ParamLimits

0x7aa7,	// (0x0003214c) list_single_pane_fp_g3

0xc917,	// (0x00036fbc) list_single_pane_fp_g4_ParamLimits

0xc917,	// (0x00036fbc) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x0003a216) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x0003a216) list_single_pane_fp_g

0x7abb,	// (0x00032160) list_single_pane_fp_t1_ParamLimits

0x7abb,	// (0x00032160) list_single_pane_fp_t1

0x7ad2,	// (0x00032177) list_single_graphic_pane_fp_g1_ParamLimits

0x7ad2,	// (0x00032177) list_single_graphic_pane_fp_g1

0xc90b,	// (0x00036fb0) list_single_graphic_pane_fp_g2_ParamLimits

0xc90b,	// (0x00036fb0) list_single_graphic_pane_fp_g2

0x7a9b,	// (0x00032140) list_single_graphic_pane_fp_g3_ParamLimits

0x7a9b,	// (0x00032140) list_single_graphic_pane_fp_g3

0x7aa7,	// (0x0003214c) list_single_graphic_pane_fp_g4_ParamLimits

0x7aa7,	// (0x0003214c) list_single_graphic_pane_fp_g4

0xc917,	// (0x00036fbc) list_single_graphic_pane_fp_g5_ParamLimits

0xc917,	// (0x00036fbc) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a21f) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a21f) list_single_graphic_pane_fp_g

0x7ade,	// (0x00032183) list_single_graphic_pane_fp_t1_ParamLimits

0x7ade,	// (0x00032183) list_single_graphic_pane_fp_t1

0x7ad2,	// (0x00032177) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7ad2,	// (0x00032177) list_single_graphic_heading_pane_fp_g1

0xc90b,	// (0x00036fb0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc90b,	// (0x00036fb0) list_single_graphic_heading_pane_fp_g2

0x7a9b,	// (0x00032140) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7a9b,	// (0x00032140) list_single_graphic_heading_pane_fp_g3

0x7aa7,	// (0x0003214c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7aa7,	// (0x0003214c) list_single_graphic_heading_pane_fp_g4

0xc917,	// (0x00036fbc) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc917,	// (0x00036fbc) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a21f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a21f) list_single_graphic_heading_pane_fp_g

0x7af4,	// (0x00032199) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7af4,	// (0x00032199) list_single_graphic_heading_pane_fp_t1

0x7b0a,	// (0x000321af) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7b0a,	// (0x000321af) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0003a22a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0003a22a) list_single_graphic_heading_pane_fp_t

0x7b1c,	// (0x000321c1) list_single_cale_day_pane_fp_g1_ParamLimits

0x7b1c,	// (0x000321c1) list_single_cale_day_pane_fp_g1

0xc923,	// (0x00036fc8) list_single_cale_day_pane_fp_g2_ParamLimits

0xc923,	// (0x00036fc8) list_single_cale_day_pane_fp_g2

0x7b54,	// (0x000321f9) list_single_cale_day_pane_fp_g3_ParamLimits

0x7b54,	// (0x000321f9) list_single_cale_day_pane_fp_g3

0x7b7c,	// (0x00032221) list_single_cale_day_pane_fp_g4_ParamLimits

0x7b7c,	// (0x00032221) list_single_cale_day_pane_fp_g4

0x7ba0,	// (0x00032245) list_single_cale_day_pane_fp_g5_ParamLimits

0x7ba0,	// (0x00032245) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003a22f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003a22f) list_single_cale_day_pane_fp_g

0x7bc4,	// (0x00032269) list_single_cale_day_pane_fp_t1_ParamLimits

0x7bc4,	// (0x00032269) list_single_cale_day_pane_fp_t1

0x7bea,	// (0x0003228f) list_single_cale_day_pane_fp_t2_ParamLimits

0x7bea,	// (0x0003228f) list_single_cale_day_pane_fp_t2

0x7c03,	// (0x000322a8) list_single_cale_day_pane_fp_t3_ParamLimits

0x7c03,	// (0x000322a8) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x0003a23a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x0003a23a) list_single_cale_day_pane_fp_t

0xc90b,	// (0x00036fb0) list_empty_pane_fp_g1_ParamLimits

0xc90b,	// (0x00036fb0) list_empty_pane_fp_g1

0x7c1c,	// (0x000322c1) list_empty_pane_fp_t1

0x7c2a,	// (0x000322cf) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003a241) list_empty_pane_fp_t

0xc90b,	// (0x00036fb0) list_single_heading_pane_fp_g1_ParamLimits

0xc90b,	// (0x00036fb0) list_single_heading_pane_fp_g1

0x7a9b,	// (0x00032140) list_single_heading_pane_fp_g2_ParamLimits

0x7a9b,	// (0x00032140) list_single_heading_pane_fp_g2

0x7aa7,	// (0x0003214c) list_single_heading_pane_fp_g3_ParamLimits

0x7aa7,	// (0x0003214c) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x0003a246) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0003a246) list_single_heading_pane_fp_g

0x7c38,	// (0x000322dd) list_single_heading_pane_fp_t1_ParamLimits

0x7c38,	// (0x000322dd) list_single_heading_pane_fp_t1

0x7c4a,	// (0x000322ef) list_single_heading_pane_fp_t2_ParamLimits

0x7c4a,	// (0x000322ef) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0003a24d) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0003a24d) list_single_heading_pane_fp_t

0x89b4,	// (0x00033059) aid_size_cell_fast

0x813f,	// (0x000327e4) soft_indicator_pane_cp1_t1

0x89f1,	// (0x00033096) cell_app_pane_cp2_ParamLimits

0x89f1,	// (0x00033096) cell_app_pane_cp2

0x6489,	// (0x00030b2e) fep_hwr_candidate_drop_down_list_pane

0x6661,	// (0x00030d06) fep_hwr_candidate_pane_g3_ParamLimits

0x6661,	// (0x00030d06) fep_hwr_candidate_pane_g3

0x39a2,	// (0x0002e047) fep_hwr_candidate_pane_g4_ParamLimits

0x39a2,	// (0x0002e047) fep_hwr_candidate_pane_g4

0x0002,

0xfb17,	// (0x0003a1bc) fep_hwr_candidate_pane_g_ParamLimits

0xfb17,	// (0x0003a1bc) fep_hwr_candidate_pane_g

0xc414,	// (0x00036ab9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc414,	// (0x00036ab9) fep_vkb_candidate_drop_down_list_pane

0xc825,	// (0x00036eca) fep_vkb_candidate_pane_g3

0xc82d,	// (0x00036ed2) fep_vkb_candidate_pane_g4

0x0002,

0xfb44,	// (0x0003a1e9) fep_vkb_candidate_pane_g

0x66cc,	// (0x00030d71) cell_hwr_candidate_pane_g1_ParamLimits

0x66da,	// (0x00030d7f) cell_hwr_candidate_pane_g3_ParamLimits

0x66da,	// (0x00030d7f) cell_hwr_candidate_pane_g3

0xe3e0,	// (0x00038a85) cell_hwr_candidate_pane_g4_ParamLimits

0xe3e0,	// (0x00038a85) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x0003a208) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x0003a208) cell_hwr_candidate_pane_g

0xc844,	// (0x00036ee9) cell_vkb_candidate_pane_g3_ParamLimits

0xc844,	// (0x00036ee9) cell_vkb_candidate_pane_g3

0xc85f,	// (0x00036f04) cell_vkb_candidate_pane_g4_ParamLimits

0xc85f,	// (0x00036f04) cell_vkb_candidate_pane_g4

0xc92f,	// (0x00036fd4) cell_app_pane_cp2_g1_ParamLimits

0xc92f,	// (0x00036fd4) cell_app_pane_cp2_g1

0xc94d,	// (0x00036ff2) cell_app_pane_cp2_g2_ParamLimits

0xc94d,	// (0x00036ff2) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x0003a252) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x0003a252) cell_app_pane_cp2_g

0xc959,	// (0x00036ffe) cell_app_pane_cp2_t1_ParamLimits

0xc959,	// (0x00036ffe) cell_app_pane_cp2_t1

0x87b5,	// (0x00032e5a) grid_highlight_pane_cp1_ParamLimits

0x87b5,	// (0x00032e5a) grid_highlight_pane_cp1

0x6719,	// (0x00030dbe) cell_hwr_candidate_pane_cp1_ParamLimits

0x6719,	// (0x00030dbe) cell_hwr_candidate_pane_cp1

0x66cc,	// (0x00030d71) fep_hwr_candidate_drop_down_list_pane_g1

0x6738,	// (0x00030ddd) fep_hwr_candidate_drop_down_list_pane_g2

0x6745,	// (0x00030dea) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0003a257) fep_hwr_candidate_drop_down_list_pane_g

0x6752,	// (0x00030df7) fep_hwr_candidate_drop_down_list_scroll_pane

0x675b,	// (0x00030e00) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x675b,	// (0x00030e00) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6768,	// (0x00030e0d) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6768,	// (0x00030e0d) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6775,	// (0x00030e1a) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6775,	// (0x00030e1a) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6782,	// (0x00030e27) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6782,	// (0x00030e27) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x679d,	// (0x00030e42) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x679d,	// (0x00030e42) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x67b8,	// (0x00030e5d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x67b8,	// (0x00030e5d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x67d3,	// (0x00030e78) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x67d3,	// (0x00030e78) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x67ee,	// (0x00030e93) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x67ee,	// (0x00030e93) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0003a25e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0003a25e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc96b,	// (0x00037010) cell_vkb_candidate_pane_cp1_ParamLimits

0xc96b,	// (0x00037010) cell_vkb_candidate_pane_cp1

0xc52d,	// (0x00036bd2) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc52d,	// (0x00036bd2) fep_vkb_candidate_drop_down_list_pane_g1

0xc98b,	// (0x00037030) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98b,	// (0x00037030) fep_vkb_candidate_drop_down_list_pane_g2

0xc998,	// (0x0003703d) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc998,	// (0x0003703d) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbca,	// (0x0003a26f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbca,	// (0x0003a26f) fep_vkb_candidate_drop_down_list_pane_g

0xc9a5,	// (0x0003704a) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9a5,	// (0x0003704a) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9b2,	// (0x00037057) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9b2,	// (0x00037057) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9bf,	// (0x00037064) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9bf,	// (0x00037064) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9cb,	// (0x00037070) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9cb,	// (0x00037070) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9d7,	// (0x0003707c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9d7,	// (0x0003707c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9f8,	// (0x0003709d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9f8,	// (0x0003709d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca19,	// (0x000370be) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca19,	// (0x000370be) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3a,	// (0x000370df) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3a,	// (0x000370df) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5b,	// (0x00037100) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5b,	// (0x00037100) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd1,	// (0x0003a276) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd1,	// (0x0003a276) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7e70,	// (0x00032515) title_pane_g1_ParamLimits

0x7e7d,	// (0x00032522) title_pane_g2_ParamLimits

0xf54e,	// (0x00039bf3) title_pane_g_ParamLimits

0x8e29,	// (0x000334ce) aid_call2_pane

0x8e31,	// (0x000334d6) aid_call_pane

0x8e39,	// (0x000334de) popup_clock_analogue_window_g1

0x8e39,	// (0x000334de) popup_clock_analogue_window_g2

0x55fb,	// (0x0002fca0) popup_clock_analogue_window_g3

0x5604,	// (0x0002fca9) popup_clock_analogue_window_g4

0x7e5c,	// (0x00032501) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00039d9d) popup_clock_analogue_window_g

0x560c,	// (0x0002fcb1) popup_clock_analogue_window_t1

0x561a,	// (0x0002fcbf) clock_digital_number_pane_ParamLimits

0x561a,	// (0x0002fcbf) clock_digital_number_pane

0x5626,	// (0x0002fccb) clock_digital_number_pane_cp02_ParamLimits

0x5626,	// (0x0002fccb) clock_digital_number_pane_cp02

0x5632,	// (0x0002fcd7) clock_digital_number_pane_cp03_ParamLimits

0x5632,	// (0x0002fcd7) clock_digital_number_pane_cp03

0x563e,	// (0x0002fce3) clock_digital_number_pane_cp04_ParamLimits

0x563e,	// (0x0002fce3) clock_digital_number_pane_cp04

0x564a,	// (0x0002fcef) clock_digital_separator_pane_ParamLimits

0x564a,	// (0x0002fcef) clock_digital_separator_pane

0x5656,	// (0x0002fcfb) popup_clock_digital_window_t1_ParamLimits

0x5656,	// (0x0002fcfb) popup_clock_digital_window_t1

0x7e5c,	// (0x00032501) clock_digital_number_pane_g1

0x7e5c,	// (0x00032501) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00039da8) clock_digital_number_pane_g

0x7e5c,	// (0x00032501) clock_digital_separator_pane_g1

0x7e5c,	// (0x00032501) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00039da8) clock_digital_separator_pane_g

0x97bd,	// (0x00033e62) aid_fill_nsta_ParamLimits

0x9903,	// (0x00033fa8) indicator_nsta_pane_ParamLimits

0x9a7c,	// (0x00034121) popup_clock_analogue_window

0x9a7c,	// (0x00034121) popup_clock_digital_window

0x7f46,	// (0x000325eb) grid_indicator_nsta_pane_ParamLimits

0xbcc8,	// (0x0003636d) clock_nsta_pane_t2

0x0001,

0xfa97,	// (0x0003a13c) clock_nsta_pane_t

0x55bf,	// (0x0002fc64) aid_size_max_handle

0x55c9,	// (0x0002fc6e) aid_size_min_handle

0x944c,	// (0x00033af1) editor_scroll_pane

0xca76,	// (0x0003711b) ex_editor_pane

0x8922,	// (0x00032fc7) scroll_pane_cp13

0x8754,	// (0x00032df9) scroll_pane_cp14

0x8e68,	// (0x0003350d) scroll_pane_cp36

0x8e94,	// (0x00033539) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e94,	// (0x00033539) list_single_graphic_hl_pane_cp2

0xb26e,	// (0x00035913) list_single_graphic_hl_pane_ParamLimits

0xb26e,	// (0x00035913) list_single_graphic_hl_pane

0x7c60,	// (0x00032305) aid_size_min_hl_cp1

0xca7e,	// (0x00037123) list_highlight_pane_cp34_ParamLimits

0xca7e,	// (0x00037123) list_highlight_pane_cp34

0xca8f,	// (0x00037134) list_single_graphic_hl_pane_g1_ParamLimits

0xca8f,	// (0x00037134) list_single_graphic_hl_pane_g1

0x7c69,	// (0x0003230e) list_single_graphic_hl_pane_g2_ParamLimits

0x7c69,	// (0x0003230e) list_single_graphic_hl_pane_g2

0x7c69,	// (0x0003230e) list_single_graphic_hl_pane_g3_ParamLimits

0x7c69,	// (0x0003230e) list_single_graphic_hl_pane_g3

0x7c75,	// (0x0003231a) list_single_graphic_hl_pane_g4_ParamLimits

0x7c75,	// (0x0003231a) list_single_graphic_hl_pane_g4

0x7c81,	// (0x00032326) list_single_graphic_hl_pane_g5_ParamLimits

0x7c81,	// (0x00032326) list_single_graphic_hl_pane_g5

0x0004,

0xfbe2,	// (0x0003a287) list_single_graphic_hl_pane_g_ParamLimits

0xfbe2,	// (0x0003a287) list_single_graphic_hl_pane_g

0x7c95,	// (0x0003233a) list_single_graphic_hl_pane_t1_ParamLimits

0x7c95,	// (0x0003233a) list_single_graphic_hl_pane_t1

0xca9c,	// (0x00037141) aid_size_min_hl_cp2

0xcaa5,	// (0x0003714a) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa5,	// (0x0003714a) list_highlight_pane_cp34_cp2

0xca8f,	// (0x00037134) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca8f,	// (0x00037134) list_single_graphic_hl_pane_g1_cp2

0xcab2,	// (0x00037157) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab2,	// (0x00037157) list_single_graphic_hl_pane_g2_cp2

0xcabe,	// (0x00037163) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcabe,	// (0x00037163) list_single_graphic_hl_pane_g3_cp2

0xbcae,	// (0x00036353) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbcae,	// (0x00036353) list_single_graphic_hl_pane_g4_cp2

0xcacc,	// (0x00037171) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacc,	// (0x00037171) list_single_graphic_hl_pane_g5_cp2

0x590a,	// (0x0002ffaf) control_pane_g4_ParamLimits

0x590a,	// (0x0002ffaf) control_pane_g4

0x979b,	// (0x00033e40) bg_popup_sub_pane_cp10_ParamLimits

0xc2b9,	// (0x0003695e) list_choice_list_pane_ParamLimits

0xc2c8,	// (0x0003696d) scroll_pane_cp23

0x81cf,	// (0x00032874) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8b0,	// (0x00036f55) list_preview_fixed_pane_ParamLimits

0xc8c6,	// (0x00036f6b) list_preview_fixed_pane_cp_ParamLimits

0xc8c6,	// (0x00036f6b) list_preview_fixed_pane_cp

0xc8d2,	// (0x00036f77) popup_preview_fixed_window_g1_ParamLimits

0xc8d2,	// (0x00036f77) popup_preview_fixed_window_g1

0xc8de,	// (0x00036f83) popup_preview_fixed_window_g2_ParamLimits

0xc8de,	// (0x00036f83) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x0003a20f) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x0003a20f) popup_preview_fixed_window_g

0x5533,	// (0x0002fbd8) aid_navi_side_left_pane_ParamLimits

0x5548,	// (0x0002fbed) aid_navi_side_right_pane_ParamLimits

0x5560,	// (0x0002fc05) navi_icon_pane_stacon_ParamLimits

0x5574,	// (0x0002fc19) navi_navi_pane_stacon_ParamLimits

0x5560,	// (0x0002fc05) navi_text_pane_stacon_ParamLimits

0x4a30,	// (0x0002f0d5) main_text_info_pane

0xcaf6,	// (0x0003719b) listscroll_text_info_pane

0xcafe,	// (0x000371a3) list_text_info_pane_ParamLimits

0xcafe,	// (0x000371a3) list_text_info_pane

0xcb0d,	// (0x000371b2) scroll_pane_cp24_ParamLimits

0xcb0d,	// (0x000371b2) scroll_pane_cp24

0xcb2b,	// (0x000371d0) list_text_info_pane_t1_ParamLimits

0xcb2b,	// (0x000371d0) list_text_info_pane_t1

0x5a6c,	// (0x00030111) popup_fast_swap2_window_ParamLimits

0x5a6c,	// (0x00030111) popup_fast_swap2_window

0xcb5c,	// (0x00037201) aid_size_cell_fast2

0x7e52,	// (0x000324f7) bg_popup_window_pane_cp17

0xa105,	// (0x000347aa) heading_pane_cp2

0x841e,	// (0x00032ac3) listscroll_fast2_pane

0xcb66,	// (0x0003720b) grid_fast2_pane

0xcb70,	// (0x00037215) listscroll_fast2_pane_g1

0xcb78,	// (0x0003721d) listscroll_fast2_pane_g2

0x0001,

0xfbed,	// (0x0003a292) listscroll_fast2_pane_g

0x8922,	// (0x00032fc7) scroll_pane_cp26

0xcb82,	// (0x00037227) cell_fast2_pane_ParamLimits

0xcb82,	// (0x00037227) cell_fast2_pane

0xcb97,	// (0x0003723c) cell_fast2_pane_g1

0xcba0,	// (0x00037245) cell_fast2_pane_g2

0xcba9,	// (0x0003724e) cell_fast2_pane_g3

0x0002,

0xfbf2,	// (0x0003a297) cell_fast2_pane_g

0x8511,	// (0x00032bb6) grid_highlight_pane_cp9

0x5a32,	// (0x000300d7) main_eswt_pane_ParamLimits

0x5a32,	// (0x000300d7) main_eswt_pane

0xcb22,	// (0x000371c7) list_single_text_info_pane

0xcbb1,	// (0x00037256) eswt_ctrl_button_pane

0xcbb1,	// (0x00037256) eswt_ctrl_canvas_pane

0xcbb9,	// (0x0003725e) eswt_ctrl_combo_pane

0xcbb1,	// (0x00037256) eswt_ctrl_default_pane

0xcbb1,	// (0x00037256) eswt_ctrl_label_pane

0xcbc1,	// (0x00037266) eswt_ctrl_wait_pane

0xcbc9,	// (0x0003726e) eswt_shell_pane

0x7e52,	// (0x000324f7) listscroll_eswt_app_pane

0xcbe9,	// (0x0003728e) popup_eswt_tasktip_window_ParamLimits

0xcbe9,	// (0x0003728e) popup_eswt_tasktip_window

0x9d19,	// (0x000343be) bg_popup_window_pane_cp18

0xcbfa,	// (0x0003729f) eswt_control_pane_g1_ParamLimits

0xcbfa,	// (0x0003729f) eswt_control_pane_g1

0xcc07,	// (0x000372ac) eswt_control_pane_g2_ParamLimits

0xcc07,	// (0x000372ac) eswt_control_pane_g2

0xcc14,	// (0x000372b9) eswt_control_pane_g3_ParamLimits

0xcc14,	// (0x000372b9) eswt_control_pane_g3

0xcc21,	// (0x000372c6) eswt_control_pane_g4_ParamLimits

0xcc21,	// (0x000372c6) eswt_control_pane_g4

0x0003,

0xfbf9,	// (0x0003a29e) eswt_control_pane_g_ParamLimits

0xfbf9,	// (0x0003a29e) eswt_control_pane_g

0x87b5,	// (0x00032e5a) bg_button_pane_ParamLimits

0x87b5,	// (0x00032e5a) bg_button_pane

0x8526,	// (0x00032bcb) common_borders_pane_copy2_ParamLimits

0x8526,	// (0x00032bcb) common_borders_pane_copy2

0xcc2e,	// (0x000372d3) control_button_pane_g1_ParamLimits

0xcc2e,	// (0x000372d3) control_button_pane_g1

0xcc3a,	// (0x000372df) control_button_pane_g2_ParamLimits

0xcc3a,	// (0x000372df) control_button_pane_g2

0xcc46,	// (0x000372eb) control_button_pane_g3_ParamLimits

0xcc46,	// (0x000372eb) control_button_pane_g3

0x0002,

0xfc02,	// (0x0003a2a7) control_button_pane_g_ParamLimits

0xfc02,	// (0x0003a2a7) control_button_pane_g

0xcc5a,	// (0x000372ff) control_button_pane_t1

0xcc68,	// (0x0003730d) control_button_pane_t2

0x0001,

0xfc09,	// (0x0003a2ae) control_button_pane_t

0x9ca5,	// (0x0003434a) bg_button_pane_g1

0x9cb5,	// (0x0003435a) bg_button_pane_g2

0x9cad,	// (0x00034352) bg_button_pane_g3

0x9cc5,	// (0x0003436a) bg_button_pane_g4

0x9cbd,	// (0x00034362) bg_button_pane_g5

0x9ccd,	// (0x00034372) bg_button_pane_g6

0x9cd5,	// (0x0003437a) bg_button_pane_g7

0x9ce5,	// (0x0003438a) bg_button_pane_g8

0x9cdd,	// (0x00034382) bg_button_pane_g9

0x0008,

0xf866,	// (0x00039f0b) bg_button_pane_g

0xc274,	// (0x00036919) common_borders_pane_ParamLimits

0xc274,	// (0x00036919) common_borders_pane

0xcbfa,	// (0x0003729f) eswt_control_pane_g1_copy1_ParamLimits

0xcbfa,	// (0x0003729f) eswt_control_pane_g1_copy1

0xcc07,	// (0x000372ac) eswt_control_pane_g2_copy1_ParamLimits

0xcc07,	// (0x000372ac) eswt_control_pane_g2_copy1

0xcc14,	// (0x000372b9) eswt_control_pane_g3_copy1_ParamLimits

0xcc14,	// (0x000372b9) eswt_control_pane_g3_copy1

0xcc21,	// (0x000372c6) eswt_control_pane_g4_copy1_ParamLimits

0xcc21,	// (0x000372c6) eswt_control_pane_g4_copy1

0xc2af,	// (0x00036954) bg_eswt_ctrl_canvas_pane_g1

0xc274,	// (0x00036919) common_borders_pane_cp2_ParamLimits

0xc274,	// (0x00036919) common_borders_pane_cp2

0xc274,	// (0x00036919) common_borders_pane_cp3_ParamLimits

0xc274,	// (0x00036919) common_borders_pane_cp3

0xcc76,	// (0x0003731b) separator_horizontal_pane

0xcc7e,	// (0x00037323) separator_vertical_pane

0xcbfa,	// (0x0003729f) eswt_control_pane_g1_copy2_ParamLimits

0xcbfa,	// (0x0003729f) eswt_control_pane_g1_copy2

0xcc07,	// (0x000372ac) eswt_control_pane_g2_copy2_ParamLimits

0xcc07,	// (0x000372ac) eswt_control_pane_g2_copy2

0xcc14,	// (0x000372b9) eswt_control_pane_g3_copy2_ParamLimits

0xcc14,	// (0x000372b9) eswt_control_pane_g3_copy2

0xcc21,	// (0x000372c6) eswt_control_pane_g4_copy2_ParamLimits

0xcc21,	// (0x000372c6) eswt_control_pane_g4_copy2

0x7e52,	// (0x000324f7) common_borders_pane_cp4

0xcc87,	// (0x0003732c) separator_horizontal_pane_g1

0xcc90,	// (0x00037335) separator_horizontal_pane_g2

0xcc99,	// (0x0003733e) separator_horizontal_pane_g3

0x0002,

0xfc0e,	// (0x0003a2b3) separator_horizontal_pane_g

0xcbfa,	// (0x0003729f) eswt_control_pane_g1_copy3_ParamLimits

0xcbfa,	// (0x0003729f) eswt_control_pane_g1_copy3

0xcc07,	// (0x000372ac) eswt_control_pane_g2_copy3_ParamLimits

0xcc07,	// (0x000372ac) eswt_control_pane_g2_copy3

0xcc14,	// (0x000372b9) eswt_control_pane_g3_copy3_ParamLimits

0xcc14,	// (0x000372b9) eswt_control_pane_g3_copy3

0xcc21,	// (0x000372c6) eswt_control_pane_g4_copy3_ParamLimits

0xcc21,	// (0x000372c6) eswt_control_pane_g4_copy3

0x7e52,	// (0x000324f7) common_borders_pane_cp5

0xcca2,	// (0x00037347) separator_vertical_pane_g1

0xccab,	// (0x00037350) separator_vertical_pane_g2

0xccb4,	// (0x00037359) separator_vertical_pane_g3

0x0002,

0xfc15,	// (0x0003a2ba) separator_vertical_pane_g

0xcbfa,	// (0x0003729f) eswt_control_pane_g1_copy4_ParamLimits

0xcbfa,	// (0x0003729f) eswt_control_pane_g1_copy4

0xcc07,	// (0x000372ac) eswt_control_pane_g2_copy4_ParamLimits

0xcc07,	// (0x000372ac) eswt_control_pane_g2_copy4

0xcc14,	// (0x000372b9) eswt_control_pane_g3_copy4_ParamLimits

0xcc14,	// (0x000372b9) eswt_control_pane_g3_copy4

0xcc21,	// (0x000372c6) eswt_control_pane_g4_copy4_ParamLimits

0xcc21,	// (0x000372c6) eswt_control_pane_g4_copy4

0xccbd,	// (0x00037362) eswt_ctrl_combo_button_pane

0xccc5,	// (0x0003736a) eswt_ctrl_input_pane

0xcccd,	// (0x00037372) popup_choice_list_window_cp70

0xccd5,	// (0x0003737a) eswt_ctrl_input_pane_t1

0x7e52,	// (0x000324f7) input_focus_pane_cp70

0xc274,	// (0x00036919) bg_button_pane_cp70_ParamLimits

0xc274,	// (0x00036919) bg_button_pane_cp70

0xcce3,	// (0x00037388) eswt_ctrl_combo_button_pane_g1

0xcceb,	// (0x00037390) wait_bar_pane_cp70

0x9d19,	// (0x000343be) bg_popup_window_pane_cp70_ParamLimits

0x9d19,	// (0x000343be) bg_popup_window_pane_cp70

0xccf3,	// (0x00037398) popup_eswt_tasktip_window_t1

0xcd09,	// (0x000373ae) wait_bar_pane_cp71_ParamLimits

0xcd09,	// (0x000373ae) wait_bar_pane_cp71

0xcd15,	// (0x000373ba) grid_eswt_app_pane

0x8c42,	// (0x000332e7) scroll_pane_cp70

0xcd1e,	// (0x000373c3) cell_eswt_app_pane_ParamLimits

0xcd1e,	// (0x000373c3) cell_eswt_app_pane

0xcd4e,	// (0x000373f3) cell_eswt_app_pane_g1_ParamLimits

0xcd4e,	// (0x000373f3) cell_eswt_app_pane_g1

0xcd7d,	// (0x00037422) cell_eswt_app_pane_g2_ParamLimits

0xcd7d,	// (0x00037422) cell_eswt_app_pane_g2

0x0001,

0xfc1c,	// (0x0003a2c1) cell_eswt_app_pane_g_ParamLimits

0xfc1c,	// (0x0003a2c1) cell_eswt_app_pane_g

0xcda6,	// (0x0003744b) cell_eswt_app_pane_t1_ParamLimits

0xcda6,	// (0x0003744b) cell_eswt_app_pane_t1

0xcdd8,	// (0x0003747d) grid_highlight_pane_cp70_ParamLimits

0xcdd8,	// (0x0003747d) grid_highlight_pane_cp70

0x9321,	// (0x000339c6) set_content_pane_g1

0x96f7,	// (0x00033d9c) status_small_volume_pane

0x6809,	// (0x00030eae) status_small_volume_pane_g1

0x6811,	// (0x00030eb6) volume_small2_pane

0x681a,	// (0x00030ebf) volume_small2_pane_g1

0x6823,	// (0x00030ec8) volume_small2_pane_g2

0x682c,	// (0x00030ed1) volume_small2_pane_g3

0x6835,	// (0x00030eda) volume_small2_pane_g4

0x683e,	// (0x00030ee3) volume_small2_pane_g5

0x6847,	// (0x00030eec) volume_small2_pane_g6

0x6850,	// (0x00030ef5) volume_small2_pane_g7

0x6859,	// (0x00030efe) volume_small2_pane_g8

0x6862,	// (0x00030f07) volume_small2_pane_g9

0x686b,	// (0x00030f10) volume_small2_pane_g10

0x0009,

0xfc21,	// (0x0003a2c6) volume_small2_pane_g

0xc675,	// (0x00036d1a) fep_vkb_top_text_pane_g1_ParamLimits

0xc690,	// (0x00036d35) fep_vkb_top_text_pane_t1_ParamLimits

0xc8ea,	// (0x00036f8f) popup_preview_fixed_window_g3_ParamLimits

0xc8ea,	// (0x00036f8f) popup_preview_fixed_window_g3

0x5f1b,	// (0x000305c0) popup_toolbar_trans_pane

0xb075,	// (0x0003571a) aid_height_set_list_ParamLimits

0xb086,	// (0x0003572b) aid_size_parent_ParamLimits

0x979b,	// (0x00033e40) list_highlight_pane_cp2_ParamLimits

0x9321,	// (0x000339c6) set_content_pane_g1_ParamLimits

0xb28a,	// (0x0003592f) list_single_image_pane_ParamLimits

0xb28a,	// (0x0003592f) list_single_image_pane

0xcde4,	// (0x00037489) aid_size_cell_image_ParamLimits

0xcde4,	// (0x00037489) aid_size_cell_image

0xcdf1,	// (0x00037496) grid_single_image_pane_ParamLimits

0xcdf1,	// (0x00037496) grid_single_image_pane

0xa543,	// (0x00034be8) list_single_image_pane_g1_ParamLimits

0xa543,	// (0x00034be8) list_single_image_pane_g1

0xcdfd,	// (0x000374a2) list_single_image_pane_g2_ParamLimits

0xcdfd,	// (0x000374a2) list_single_image_pane_g2

0x0001,

0xfc36,	// (0x0003a2db) list_single_image_pane_g_ParamLimits

0xfc36,	// (0x0003a2db) list_single_image_pane_g

0xce11,	// (0x000374b6) list_single_image_pane_t1_ParamLimits

0xce11,	// (0x000374b6) list_single_image_pane_t1

0xce27,	// (0x000374cc) cell_image_list_pane_ParamLimits

0xce27,	// (0x000374cc) cell_image_list_pane

0xce3b,	// (0x000374e0) cell_image_list_pane_g1

0xce44,	// (0x000374e9) cell_image_list_pane_g2

0x0001,

0xfc3b,	// (0x0003a2e0) cell_image_list_pane_g

0xce4d,	// (0x000374f2) aid_size_cell_tb_trans_pane

0x87b5,	// (0x00032e5a) bg_tb_trans_pane

0xce5f,	// (0x00037504) grid_tb_trans_pane

0x9ca5,	// (0x0003434a) bg_tb_trans_pane_g1

0x9cb5,	// (0x0003435a) bg_tb_trans_pane_g2

0x9cad,	// (0x00034352) bg_tb_trans_pane_g3

0x9cc5,	// (0x0003436a) bg_tb_trans_pane_g4

0x9cbd,	// (0x00034362) bg_tb_trans_pane_g5

0x9ce5,	// (0x0003438a) bg_tb_trans_pane_g6

0x9cdd,	// (0x00034382) bg_tb_trans_pane_g7

0x9ccd,	// (0x00034372) bg_tb_trans_pane_g8

0x9cd5,	// (0x0003437a) bg_tb_trans_pane_g9

0x0008,

0xfc40,	// (0x0003a2e5) bg_tb_trans_pane_g

0xce73,	// (0x00037518) cell_toolbar_trans_pane_ParamLimits

0xce73,	// (0x00037518) cell_toolbar_trans_pane

0xc2af,	// (0x00036954) cell_toolbar_trans_pane_g1

0xbe84,	// (0x00036529) list_form2_midp_pane_t1

0xbe92,	// (0x00036537) list_form2_midp_pane_t2

0x0001,

0xfadd,	// (0x0003a182) list_form2_midp_pane_t

0xbea0,	// (0x00036545) scroll_pane_cp51_ParamLimits

0xc05c,	// (0x00036701) form2_midp_wait_pane_g1

0xc065,	// (0x0003670a) form2_midp_wait_pane_g2

0xc06e,	// (0x00036713) form2_midp_wait_pane_g3

0x0002,

0xfaf2,	// (0x0003a197) form2_midp_wait_pane_g

0x7f46,	// (0x000325eb) list_highlight_pane_cp21_ParamLimits

0xc0ba,	// (0x0003675f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0c9,	// (0x0003676e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x766f,	// (0x00031d14) list_single_2graphic_im_pane_ParamLimits

0x766f,	// (0x00031d14) list_single_2graphic_im_pane

0xce99,	// (0x0003753e) list_single_2graphic_im_pane_g1_ParamLimits

0xce99,	// (0x0003753e) list_single_2graphic_im_pane_g1

0xceaa,	// (0x0003754f) list_single_2graphic_im_pane_g2_ParamLimits

0xceaa,	// (0x0003754f) list_single_2graphic_im_pane_g2

0xceb6,	// (0x0003755b) list_single_2graphic_im_pane_g3_ParamLimits

0xceb6,	// (0x0003755b) list_single_2graphic_im_pane_g3

0x0003,

0xfc53,	// (0x0003a2f8) list_single_2graphic_im_pane_g_ParamLimits

0xfc53,	// (0x0003a2f8) list_single_2graphic_im_pane_g

0xced6,	// (0x0003757b) list_single_2graphic_im_pane_t1_ParamLimits

0xced6,	// (0x0003757b) list_single_2graphic_im_pane_t1

0xc8f6,	// (0x00036f9b) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8f6,	// (0x00036f9b) list_single_graphic_2heading_pane_fp

0x7ad2,	// (0x00032177) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7ad2,	// (0x00032177) list_single_graphic_2heading_pane_fp_g1

0xc90b,	// (0x00036fb0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc90b,	// (0x00036fb0) list_single_graphic_2heading_pane_fp_g2

0x7a9b,	// (0x00032140) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7a9b,	// (0x00032140) list_single_graphic_2heading_pane_fp_g3

0x7aa7,	// (0x0003214c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7aa7,	// (0x0003214c) list_single_graphic_2heading_pane_fp_g4

0xc917,	// (0x00036fbc) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc917,	// (0x00036fbc) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a21f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a21f) list_single_graphic_2heading_pane_fp_g

0x7cab,	// (0x00032350) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7cab,	// (0x00032350) list_single_graphic_2heading_pane_fp_t1

0x7b0a,	// (0x000321af) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7b0a,	// (0x000321af) list_single_graphic_2heading_pane_fp_t2

0x7cc1,	// (0x00032366) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7cc1,	// (0x00032366) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5c,	// (0x0003a301) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5c,	// (0x0003a301) list_single_graphic_2heading_pane_fp_t

0xc33b,	// (0x000369e0) fep_hwr_write_pane_g5_ParamLimits

0xc33b,	// (0x000369e0) fep_hwr_write_pane_g5

0xc347,	// (0x000369ec) fep_hwr_write_pane_g6_ParamLimits

0xc347,	// (0x000369ec) fep_hwr_write_pane_g6

0xcbc9,	// (0x0003726e) eswt_shell_pane_ParamLimits

0x9d19,	// (0x000343be) bg_popup_window_pane_cp18_ParamLimits

0xafce,	// (0x00035673) heading_pane_cp70

0xccf3,	// (0x00037398) popup_eswt_tasktip_window_t1_ParamLimits

0x9812,	// (0x00033eb7) aid_touch_tab_arrow_left

0x9821,	// (0x00033ec6) aid_touch_tab_arrow_right

0x7e8e,	// (0x00032533) title_pane_g3_ParamLimits

0x7e8e,	// (0x00032533) title_pane_g3

0x8774,	// (0x00032e19) set_value_pane_g1

0x5f1b,	// (0x000305c0) popup_toolbar_trans_pane_ParamLimits

0xce4d,	// (0x000374f2) aid_size_cell_tb_trans_pane_ParamLimits

0x87b5,	// (0x00032e5a) bg_tb_trans_pane_ParamLimits

0xce5f,	// (0x00037504) grid_tb_trans_pane_ParamLimits

0x81cf,	// (0x00032874) cont_note_pane_ParamLimits

0x81cf,	// (0x00032874) cont_note_pane

0x8526,	// (0x00032bcb) cont_snote2_single_text_pane_ParamLimits

0x8526,	// (0x00032bcb) cont_snote2_single_text_pane

0x8526,	// (0x00032bcb) cont_snote2_single_graphic_pane_ParamLimits

0x8526,	// (0x00032bcb) cont_snote2_single_graphic_pane

0xa320,	// (0x000349c5) cont_note_wait_pane_ParamLimits

0xa320,	// (0x000349c5) cont_note_wait_pane

0xa320,	// (0x000349c5) cont_note_image_pane_ParamLimits

0xa320,	// (0x000349c5) cont_note_image_pane

0xcf07,	// (0x000375ac) popup_note2_window_g1_ParamLimits

0xcf07,	// (0x000375ac) popup_note2_window_g1

0xcf38,	// (0x000375dd) popup_note2_window_t1_ParamLimits

0xcf38,	// (0x000375dd) popup_note2_window_t1

0xcf7d,	// (0x00037622) popup_note2_window_t2_ParamLimits

0xcf7d,	// (0x00037622) popup_note2_window_t2

0xcfc2,	// (0x00037667) popup_note2_window_t3_ParamLimits

0xcfc2,	// (0x00037667) popup_note2_window_t3

0xd007,	// (0x000376ac) popup_note2_window_t4_ParamLimits

0xd007,	// (0x000376ac) popup_note2_window_t4

0x8253,	// (0x000328f8) popup_note2_window_t5_ParamLimits

0x8253,	// (0x000328f8) popup_note2_window_t5

0x0004,

0xfc68,	// (0x0003a30d) popup_note2_window_t_ParamLimits

0xfc68,	// (0x0003a30d) popup_note2_window_t

0xd036,	// (0x000376db) popup_note2_image_window_g1_ParamLimits

0xd036,	// (0x000376db) popup_note2_image_window_g1

0xd042,	// (0x000376e7) popup_note2_image_window_g2_ParamLimits

0xd042,	// (0x000376e7) popup_note2_image_window_g2

0x0001,

0xfc73,	// (0x0003a318) popup_note2_image_window_g_ParamLimits

0xfc73,	// (0x0003a318) popup_note2_image_window_g

0xd054,	// (0x000376f9) popup_note2_image_window_t1_ParamLimits

0xd054,	// (0x000376f9) popup_note2_image_window_t1

0xd06c,	// (0x00037711) popup_note2_image_window_t2_ParamLimits

0xd06c,	// (0x00037711) popup_note2_image_window_t2

0xd084,	// (0x00037729) popup_note2_image_window_t3_ParamLimits

0xd084,	// (0x00037729) popup_note2_image_window_t3

0x0002,

0xfc78,	// (0x0003a31d) popup_note2_image_window_t_ParamLimits

0xfc78,	// (0x0003a31d) popup_note2_image_window_t

0xa32e,	// (0x000349d3) popup_note2_wait_window_g1_ParamLimits

0xa32e,	// (0x000349d3) popup_note2_wait_window_g1

0xd0a0,	// (0x00037745) popup_note2_wait_window_g2_ParamLimits

0xd0a0,	// (0x00037745) popup_note2_wait_window_g2

0xa346,	// (0x000349eb) popup_note2_wait_window_g3_ParamLimits

0xa346,	// (0x000349eb) popup_note2_wait_window_g3

0x0002,

0xfc7f,	// (0x0003a324) popup_note2_wait_window_g_ParamLimits

0xfc7f,	// (0x0003a324) popup_note2_wait_window_g

0xd0ac,	// (0x00037751) popup_note2_wait_window_t1_ParamLimits

0xd0ac,	// (0x00037751) popup_note2_wait_window_t1

0xd0ca,	// (0x0003776f) popup_note2_wait_window_t2_ParamLimits

0xd0ca,	// (0x0003776f) popup_note2_wait_window_t2

0xd0e8,	// (0x0003778d) popup_note2_wait_window_t3_ParamLimits

0xd0e8,	// (0x0003778d) popup_note2_wait_window_t3

0xd0fa,	// (0x0003779f) popup_note2_wait_window_t4_ParamLimits

0xd0fa,	// (0x0003779f) popup_note2_wait_window_t4

0x0003,

0xfc86,	// (0x0003a32b) popup_note2_wait_window_t_ParamLimits

0xfc86,	// (0x0003a32b) popup_note2_wait_window_t

0xd10c,	// (0x000377b1) wait_bar2_pane_ParamLimits

0xd10c,	// (0x000377b1) wait_bar2_pane

0xd124,	// (0x000377c9) popup_snote2_single_text_window_g1_ParamLimits

0xd124,	// (0x000377c9) popup_snote2_single_text_window_g1

0xd14c,	// (0x000377f1) popup_snote2_single_text_window_t1_ParamLimits

0xd14c,	// (0x000377f1) popup_snote2_single_text_window_t1

0xd198,	// (0x0003783d) popup_snote2_single_text_window_t2_ParamLimits

0xd198,	// (0x0003783d) popup_snote2_single_text_window_t2

0xd1e4,	// (0x00037889) popup_snote2_single_text_window_t3_ParamLimits

0xd1e4,	// (0x00037889) popup_snote2_single_text_window_t3

0xd225,	// (0x000378ca) popup_snote2_single_text_window_t4_ParamLimits

0xd225,	// (0x000378ca) popup_snote2_single_text_window_t4

0xd25b,	// (0x00037900) popup_snote2_single_text_window_t5_ParamLimits

0xd25b,	// (0x00037900) popup_snote2_single_text_window_t5

0x0004,

0xfc8f,	// (0x0003a334) popup_snote2_single_text_window_t_ParamLimits

0xfc8f,	// (0x0003a334) popup_snote2_single_text_window_t

0xd286,	// (0x0003792b) popup_snote2_single_graphic_window_g1_ParamLimits

0xd286,	// (0x0003792b) popup_snote2_single_graphic_window_g1

0xd2ae,	// (0x00037953) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2ae,	// (0x00037953) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9a,	// (0x0003a33f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9a,	// (0x0003a33f) popup_snote2_single_graphic_window_g

0xd2d6,	// (0x0003797b) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2d6,	// (0x0003797b) popup_snote2_single_graphic_window_t1

0xd322,	// (0x000379c7) popup_snote2_single_graphic_window_t2_ParamLimits

0xd322,	// (0x000379c7) popup_snote2_single_graphic_window_t2

0xd1e4,	// (0x00037889) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e4,	// (0x00037889) popup_snote2_single_graphic_window_t3

0xd225,	// (0x000378ca) popup_snote2_single_graphic_window_t4_ParamLimits

0xd225,	// (0x000378ca) popup_snote2_single_graphic_window_t4

0xd25b,	// (0x00037900) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25b,	// (0x00037900) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9f,	// (0x0003a344) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9f,	// (0x0003a344) popup_snote2_single_graphic_window_t

0xbd61,	// (0x00036406) clock_nsta_pane_cp2_t1

0xbd61,	// (0x00036406) clock_nsta_pane_cp2_t2

0x0001,

0xfab3,	// (0x0003a158) clock_nsta_pane_cp2_t

0x52b1,	// (0x0002f956) form_field_data_wide_pane_g1_ParamLimits

0x87c3,	// (0x00032e68) form_field_data_wide_pane_g2_ParamLimits

0x87c3,	// (0x00032e68) form_field_data_wide_pane_g2

0x87cf,	// (0x00032e74) form_field_data_wide_pane_g3_ParamLimits

0x87cf,	// (0x00032e74) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00039d20) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00039d20) form_field_data_wide_pane_g

0xbc58,	// (0x000362fd) grid_touch_3_pane_ParamLimits

0xbc58,	// (0x000362fd) grid_touch_3_pane

0xd36e,	// (0x00037a13) cell_touch_3_pane_ParamLimits

0xd36e,	// (0x00037a13) cell_touch_3_pane

0xc2af,	// (0x00036954) cell_touch_3_pane_g1

0xc2af,	// (0x00036954) cell_touch_3_pane_g2

0x0001,

0xfb38,	// (0x0003a1dd) cell_touch_3_pane_g

0x8285,	// (0x0003292a) cont_query_data_pane

0x828d,	// (0x00032932) cont_query_data_pane_cp1

0xd39c,	// (0x00037a41) button_value_adjust_pane_cp7

0xd3a4,	// (0x00037a49) query_popup_pane_cp3

0x8f29,	// (0x000335ce) bg_popup_sub_pane_cp22_ParamLimits

0x5675,	// (0x0002fd1a) navi_navi_volume_pane_cp2

0x5690,	// (0x0002fd35) popup_side_volume_key_window_g2

0x569f,	// (0x0002fd44) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00039db6) popup_side_volume_key_window_g

0x56bc,	// (0x0002fd61) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00039dbd) popup_side_volume_key_window_t

0x91e0,	// (0x00033885) popup_side_volume_key_window_ParamLimits

0x4f12,	// (0x0002f5b7) list_double_graphic_pane_g4_ParamLimits

0x4f12,	// (0x0002f5b7) list_double_graphic_pane_g4

0x76ae,	// (0x00031d53) list_single_2heading_msg_pane_ParamLimits

0x76ae,	// (0x00031d53) list_single_2heading_msg_pane

0x7ce1,	// (0x00032386) list_single_2heading_msg_pane_g1_ParamLimits

0x7ce1,	// (0x00032386) list_single_2heading_msg_pane_g1

0x4d41,	// (0x0002f3e6) list_single_2heading_msg_pane_g2_ParamLimits

0x4d41,	// (0x0002f3e6) list_single_2heading_msg_pane_g2

0x7ced,	// (0x00032392) list_single_2heading_msg_pane_g3_ParamLimits

0x7ced,	// (0x00032392) list_single_2heading_msg_pane_g3

0x7cf9,	// (0x0003239e) list_single_2heading_msg_pane_g4_ParamLimits

0x7cf9,	// (0x0003239e) list_single_2heading_msg_pane_g4

0x0003,

0xfcaa,	// (0x0003a34f) list_single_2heading_msg_pane_g_ParamLimits

0xfcaa,	// (0x0003a34f) list_single_2heading_msg_pane_g

0x7d11,	// (0x000323b6) list_single_2heading_msg_pane_t1_ParamLimits

0x7d11,	// (0x000323b6) list_single_2heading_msg_pane_t1

0x7d39,	// (0x000323de) list_single_2heading_msg_pane_t2_ParamLimits

0x7d39,	// (0x000323de) list_single_2heading_msg_pane_t2

0x7d6d,	// (0x00032412) list_single_2heading_msg_pane_t3_ParamLimits

0x7d6d,	// (0x00032412) list_single_2heading_msg_pane_t3

0x7da6,	// (0x0003244b) list_single_2heading_msg_pane_t4_ParamLimits

0x7da6,	// (0x0003244b) list_single_2heading_msg_pane_t4

0x0003,

0xfcb3,	// (0x0003a358) list_single_2heading_msg_pane_t_ParamLimits

0xfcb3,	// (0x0003a358) list_single_2heading_msg_pane_t

0x7e9a,	// (0x0003253f) title_pane_g4_ParamLimits

0x7e9a,	// (0x0003253f) title_pane_g4

0x5484,	// (0x0002fb29) title_pane_stacon_g3_ParamLimits

0x5484,	// (0x0002fb29) title_pane_stacon_g3

0xceca,	// (0x0003756f) list_single_2graphic_im_pane_g4_ParamLimits

0xceca,	// (0x0003756f) list_single_2graphic_im_pane_g4

0xad8b,	// (0x00035430) popup_side_volume_key_window_cp

0xb5a6,	// (0x00035c4b) main_idle_act2_pane_t1

0x600d,	// (0x000306b2) toolbar_button_pane_g10

0x871e,	// (0x00032dc3) popup_toolbar_window_cp1

0xbd52,	// (0x000363f7) clock_nsta_pane_cp_t1

0xbd52,	// (0x000363f7) clock_nsta_pane_cp_t2

0x0001,

0xfaae,	// (0x0003a153) clock_nsta_pane_cp_t

0x5675,	// (0x0002fd1a) navi_navi_volume_pane_cp2_ParamLimits

0x5684,	// (0x0002fd29) popup_side_volume_key_window_g1_ParamLimits

0x5690,	// (0x0002fd35) popup_side_volume_key_window_g2_ParamLimits

0x569f,	// (0x0002fd44) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00039db6) popup_side_volume_key_window_g_ParamLimits

0x6475,	// (0x00030b1a) fep_hwr_aid_pane

0x651c,	// (0x00030bc1) bg_fep_hwr_top_pane_g4_ParamLimits

0xc30b,	// (0x000369b0) fep_hwr_top_pane_g1_ParamLimits

0xc31d,	// (0x000369c2) fep_hwr_top_pane_g2_ParamLimits

0x653c,	// (0x00030be1) fep_hwr_top_pane_g3_ParamLimits

0xfb03,	// (0x0003a1a8) fep_hwr_top_pane_g_ParamLimits

0x6551,	// (0x00030bf6) fep_hwr_top_text_pane_ParamLimits

0xab4e,	// (0x000351f3) aid_touch_tab_arrow_arrow_2

0xab57,	// (0x000351fc) aid_touch_tab_arrow_left_2

0x6489,	// (0x00030b2e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x64c0,	// (0x00030b65) fep_hwr_prediction_pane

0xc47d,	// (0x00036b22) fep_vkb_prediction_pane

0xc581,	// (0x00036c26) fep_vkb_side_pane_g3_ParamLimits

0xc581,	// (0x00036c26) fep_vkb_side_pane_g3

0x66cc,	// (0x00030d71) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6738,	// (0x00030ddd) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6745,	// (0x00030dea) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x0003a257) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6874,	// (0x00030f19) fep_hwr_prediction_pane_g1

0x687e,	// (0x00030f23) fep_hwr_prediction_pane_g2

0x6886,	// (0x00030f2b) fep_hwr_prediction_pane_g3

0x688e,	// (0x00030f33) fep_hwr_prediction_pane_g4

0x0003,

0xfcbc,	// (0x0003a361) fep_hwr_prediction_pane_g

0xd3c9,	// (0x00037a6e) fep_vkb_prediction_pane_g1

0xd3d3,	// (0x00037a78) fep_vkb_prediction_pane_g2

0xd3db,	// (0x00037a80) fep_vkb_prediction_pane_g3

0xd3e3,	// (0x00037a88) fep_vkb_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0003a36a) fep_vkb_prediction_pane_g

0x62f5,	// (0x0003099a) slider_set_pane_g3

0x6309,	// (0x000309ae) slider_set_pane_g4

0x6321,	// (0x000309c6) slider_set_pane_g5

0x62f5,	// (0x0003099a) slider_set_pane_g6

0x6337,	// (0x000309dc) slider_set_pane_g7

0xb1eb,	// (0x00035890) slider_form_pane_g3

0xb1f4,	// (0x00035899) slider_form_pane_g4

0xb1fc,	// (0x000358a1) slider_form_pane_g5

0xb1eb,	// (0x00035890) slider_form_pane_g6

0xb204,	// (0x000358a9) slider_form_pane_g7

0xb850,	// (0x00035ef5) slider_set_pane_vc_g3

0xb859,	// (0x00035efe) slider_set_pane_vc_g4

0xb862,	// (0x00035f07) slider_set_pane_vc_g5

0xb850,	// (0x00035ef5) slider_set_pane_vc_g6

0xb86b,	// (0x00035f10) slider_set_pane_vc_g7

0xba2b,	// (0x000360d0) slider_form_pane_vc_g1

0xba34,	// (0x000360d9) slider_form_pane_vc_g2

0xba3d,	// (0x000360e2) slider_form_pane_vc_g3

0xba2b,	// (0x000360d0) slider_form_pane_vc_g4

0xba46,	// (0x000360eb) slider_form_pane_vc_g5

0x0004,

0xfa80,	// (0x0003a125) slider_form_pane_vc_g

0x4a30,	// (0x0002f0d5) main_idle_act3_pane

0xd3eb,	// (0x00037a90) ai3_links_pane

0xd3f4,	// (0x00037a99) popup_ai3_data_window_ParamLimits

0xd3f4,	// (0x00037a99) popup_ai3_data_window

0x7e52,	// (0x000324f7) grid_ai3_links_pane

0xd40e,	// (0x00037ab3) cell_ai3_links_pane_ParamLimits

0xd40e,	// (0x00037ab3) cell_ai3_links_pane

0xd426,	// (0x00037acb) bg_popup_sub_pane_cp11

0xd433,	// (0x00037ad8) cell_ai3_links_pane_g1

0x7e52,	// (0x000324f7) bg_popup_sub_pane_cp12

0xd458,	// (0x00037afd) heading_ai3_data_pane

0xd460,	// (0x00037b05) list_ai3_gene_pane

0xd46c,	// (0x00037b11) popup_ai3_data_window_g1

0xd474,	// (0x00037b19) heading_ai3_data_pane_g1

0xd47c,	// (0x00037b21) heading_ai3_data_pane_t1

0xd48a,	// (0x00037b2f) list_double_ai3_gene_pane_ParamLimits

0xd48a,	// (0x00037b2f) list_double_ai3_gene_pane

0xd497,	// (0x00037b3c) list_single_ai3_gene_pane_ParamLimits

0xd497,	// (0x00037b3c) list_single_ai3_gene_pane

0xc274,	// (0x00036919) list_highlight_pane_cp7_ParamLimits

0xc274,	// (0x00036919) list_highlight_pane_cp7

0xd4a4,	// (0x00037b49) list_single_a13_gene_pane_t1_ParamLimits

0xd4a4,	// (0x00037b49) list_single_a13_gene_pane_t1

0xd4bb,	// (0x00037b60) list_single_ai3_gene_pane_g1

0xd4c4,	// (0x00037b69) list_single_ai3_gene_pane_g2

0x0001,

0xfcce,	// (0x0003a373) list_single_ai3_gene_pane_g

0xd4cc,	// (0x00037b71) list_double_ai3_gene_pane_g1_ParamLimits

0xd4cc,	// (0x00037b71) list_double_ai3_gene_pane_g1

0xd4d8,	// (0x00037b7d) list_double_ai3_gene_pane_t1_ParamLimits

0xd4d8,	// (0x00037b7d) list_double_ai3_gene_pane_t1

0xd4f4,	// (0x00037b99) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f4,	// (0x00037b99) list_double_ai3_gene_pane_t2

0xd50a,	// (0x00037baf) list_double_ai3_gene_pane_t3_ParamLimits

0xd50a,	// (0x00037baf) list_double_ai3_gene_pane_t3

0x0002,

0xfcd3,	// (0x0003a378) list_double_ai3_gene_pane_t_ParamLimits

0xfcd3,	// (0x0003a378) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7cd7,	// (0x0003237c) aid_size_min_col_2

0xd3b5,	// (0x00037a5a) aid_size_min_msg_ParamLimits

0xd3b5,	// (0x00037a5a) aid_size_min_msg

0xc681,	// (0x00036d26) fep_vkb_top_text_pane_g2_ParamLimits

0xc681,	// (0x00036d26) fep_vkb_top_text_pane_g2

0x0001,

0xfb33,	// (0x0003a1d8) fep_vkb_top_text_pane_g_ParamLimits

0xfb33,	// (0x0003a1d8) fep_vkb_top_text_pane_g

0x4a30,	// (0x0002f0d5) main_hc_apps_shell_pane

0xd527,	// (0x00037bcc) grid_hc_apps_pane_ParamLimits

0xd527,	// (0x00037bcc) grid_hc_apps_pane

0xd536,	// (0x00037bdb) list_hc_apps_pane

0xd53e,	// (0x00037be3) scroll_pane_cp37_ParamLimits

0xd53e,	// (0x00037be3) scroll_pane_cp37

0xd54a,	// (0x00037bef) cell_hc_apps_pane_ParamLimits

0xd54a,	// (0x00037bef) cell_hc_apps_pane

0xd5f8,	// (0x00037c9d) cell_hc_apps_pane_g1_ParamLimits

0xd5f8,	// (0x00037c9d) cell_hc_apps_pane_g1

0xd629,	// (0x00037cce) cell_hc_apps_pane_g2_ParamLimits

0xd629,	// (0x00037cce) cell_hc_apps_pane_g2

0xd645,	// (0x00037cea) cell_hc_apps_pane_g3_ParamLimits

0xd645,	// (0x00037cea) cell_hc_apps_pane_g3

0x0002,

0xfcda,	// (0x0003a37f) cell_hc_apps_pane_g_ParamLimits

0xfcda,	// (0x0003a37f) cell_hc_apps_pane_g

0xd667,	// (0x00037d0c) cell_hc_apps_pane_t1_ParamLimits

0xd667,	// (0x00037d0c) cell_hc_apps_pane_t1

0x81cf,	// (0x00032874) grid_highlight_pane_cp10_ParamLimits

0x81cf,	// (0x00032874) grid_highlight_pane_cp10

0xd6a7,	// (0x00037d4c) list_single_hc_apps_pane_ParamLimits

0xd6a7,	// (0x00037d4c) list_single_hc_apps_pane

0xd703,	// (0x00037da8) list_single_hc_apps_pane_g1

0x7dcb,	// (0x00032470) list_single_hc_apps_pane_g2

0x0001,

0xfce1,	// (0x0003a386) list_single_hc_apps_pane_g

0x7de4,	// (0x00032489) list_single_hc_apps_pane_g2_copy1

0x7e00,	// (0x000324a5) list_single_hc_apps_pane_t1

0x7f46,	// (0x000325eb) bg_set_opt_pane_cp_ParamLimits

0x4c91,	// (0x0002f336) setting_slider_pane_t1_ParamLimits

0x4caa,	// (0x0002f34f) setting_slider_pane_t2_ParamLimits

0x4cc4,	// (0x0002f369) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00039c03) setting_slider_pane_t_ParamLimits

0x4cdc,	// (0x0002f381) slider_set_pane_ParamLimits

0x591e,	// (0x0002ffc3) control_pane_g5_ParamLimits

0x591e,	// (0x0002ffc3) control_pane_g5

0xb03a,	// (0x000356df) slider_set_pane_g1_ParamLimits

0x62e9,	// (0x0003098e) slider_set_pane_g2_ParamLimits

0x62f5,	// (0x0003099a) slider_set_pane_g3_ParamLimits

0x6309,	// (0x000309ae) slider_set_pane_g4_ParamLimits

0x6321,	// (0x000309c6) slider_set_pane_g5_ParamLimits

0x62f5,	// (0x0003099a) slider_set_pane_g6_ParamLimits

0x6337,	// (0x000309dc) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0003a009) slider_set_pane_g_ParamLimits

0x92cc,	// (0x00033971) navi_icon_text_pane_ParamLimits

0x97d3,	// (0x00033e78) aid_fill_nsta_2_ParamLimits

0x9812,	// (0x00033eb7) aid_touch_tab_arrow_left_ParamLimits

0x9821,	// (0x00033ec6) aid_touch_tab_arrow_right_ParamLimits

0x988e,	// (0x00033f33) clock_nsta_pane_ParamLimits

0xab30,	// (0x000351d5) navi_icon_pane_g1_ParamLimits

0xab3c,	// (0x000351e1) navi_text_pane_t1_ParamLimits

0xbe5e,	// (0x00036503) navi_icon_text_pane_g1_ParamLimits

0xbe6a,	// (0x0003650f) navi_icon_text_pane_t1_ParamLimits

0xd703,	// (0x00037da8) list_single_hc_apps_pane_g1_ParamLimits

0x7dcb,	// (0x00032470) list_single_hc_apps_pane_g2_ParamLimits

0xfce1,	// (0x0003a386) list_single_hc_apps_pane_g_ParamLimits

0x7de4,	// (0x00032489) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7e00,	// (0x000324a5) list_single_hc_apps_pane_t1_ParamLimits

0x4b9b,	// (0x0002f240) popup_toolbar2_fixed_window_ParamLimits

0x4b9b,	// (0x0002f240) popup_toolbar2_fixed_window

0x5f11,	// (0x000305b6) popup_toolbar2_float_window

0x7e52,	// (0x000324f7) bg_popup_sub_pane_cp27

0xd71c,	// (0x00037dc1) grid_toolbar2_float_pane

0x7e52,	// (0x000324f7) bg_popup_sub_pane_cp26

0xd71c,	// (0x00037dc1) grid_toolbar2_fixed_pane

0xd724,	// (0x00037dc9) cell_toolbar2_fixed_pane_ParamLimits

0xd724,	// (0x00037dc9) cell_toolbar2_fixed_pane

0xd734,	// (0x00037dd9) cell_toolbar2_fixed_pane_g1

0xd73d,	// (0x00037de2) toolbar2_fixed_button_pane

0x9ca5,	// (0x0003434a) toolbar2_fixed_button_pane_g1

0x9cb5,	// (0x0003435a) toolbar2_fixed_button_pane_g2

0x9cad,	// (0x00034352) toolbar2_fixed_button_pane_g3

0x9cc5,	// (0x0003436a) toolbar2_fixed_button_pane_g4

0x9cbd,	// (0x00034362) toolbar2_fixed_button_pane_g5

0x9ccd,	// (0x00034372) toolbar2_fixed_button_pane_g6

0x9cd5,	// (0x0003437a) toolbar2_fixed_button_pane_g7

0x9ce5,	// (0x0003438a) toolbar2_fixed_button_pane_g8

0x9cdd,	// (0x00034382) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00039f0b) toolbar2_fixed_button_pane_g

0xd745,	// (0x00037dea) cell_toolbar2_float_pane_ParamLimits

0xd745,	// (0x00037dea) cell_toolbar2_float_pane

0xd756,	// (0x00037dfb) cell_toolbar2_float_pane_g1

0xd73d,	// (0x00037de2) toolbar2_fixed_button_pane_cp

0xc3dd,	// (0x00036a82) fep_vkb_accented_list_pane_ParamLimits

0xc3dd,	// (0x00036a82) fep_vkb_accented_list_pane

0x66ac,	// (0x00030d51) bg_popup_fep_shadow_pane_g9

0x944c,	// (0x00033af1) bg_popup_fep_shadow_pane_cp3

0x8909,	// (0x00032fae) list_accented_list_pane

0xd75f,	// (0x00037e04) list_single_accented_list_pane_ParamLimits

0xd75f,	// (0x00037e04) list_single_accented_list_pane

0x944c,	// (0x00033af1) list_highlight_pane_cp10

0xd770,	// (0x00037e15) list_single_accented_list_pane_t1

0x5e61,	// (0x00030506) popup_slider_window_ParamLimits

0x5e61,	// (0x00030506) popup_slider_window

0xd3ac,	// (0x00037a51) aid_indentation_list_msg

0xd82a,	// (0x00037ecf) bg_popup_window_pane_cp19

0xd894,	// (0x00037f39) popup_slider_window_g1

0xd8b0,	// (0x00037f55) popup_slider_window_g2

0xd8cc,	// (0x00037f71) popup_slider_window_g3

0x0005,

0xfce6,	// (0x0003a38b) popup_slider_window_g

0xd928,	// (0x00037fcd) popup_slider_window_t1

0xd99c,	// (0x00038041) small_volume_slider_vertical_pane

0xc2af,	// (0x00036954) small_volume_slider_vertical_pane_g1

0xc2af,	// (0x00036954) small_volume_slider_vertical_pane_g2

0xd9b8,	// (0x0003805d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf8,	// (0x0003a39d) small_volume_slider_vertical_pane_g

0x4953,	// (0x0002eff8) area_side_right_pane_ParamLimits

0x4953,	// (0x0002eff8) area_side_right_pane

0x6896,	// (0x00030f3b) aid_size_side_button_ParamLimits

0x6896,	// (0x00030f3b) aid_size_side_button

0x68aa,	// (0x00030f4f) grid_sctrl_middle_pane_ParamLimits

0x68aa,	// (0x00030f4f) grid_sctrl_middle_pane

0x68c9,	// (0x00030f6e) sctrl_sk_bottom_pane

0x68da,	// (0x00030f7f) sctrl_sk_top_pane

0x68ec,	// (0x00030f91) aid_touch_sctrl_top

0x68f9,	// (0x00030f9e) bg_sctrl_sk_pane_ParamLimits

0x68f9,	// (0x00030f9e) bg_sctrl_sk_pane

0x6907,	// (0x00030fac) sctrl_sk_top_pane_g1

0x6914,	// (0x00030fb9) sctrl_sk_top_pane_t1

0x68ec,	// (0x00030f91) aid_touch_sctrl_bottom

0x68f9,	// (0x00030f9e) bg_sctrl_sk_pane_cp_ParamLimits

0x68f9,	// (0x00030f9e) bg_sctrl_sk_pane_cp

0x692f,	// (0x00030fd4) sctrl_sk_bottom_pane_g1

0x6914,	// (0x00030fb9) sctrl_sk_bottom_pane_t1

0x6938,	// (0x00030fdd) cell_sctrl_middle_pane_ParamLimits

0x6938,	// (0x00030fdd) cell_sctrl_middle_pane

0x6953,	// (0x00030ff8) aid_touch_sctrl_middle_ParamLimits

0x6953,	// (0x00030ff8) aid_touch_sctrl_middle

0x6965,	// (0x0003100a) bg_sctrl_middle_pane_ParamLimits

0x6965,	// (0x0003100a) bg_sctrl_middle_pane

0x66cc,	// (0x00030d71) cell_sctrl_middle_pane_g1_ParamLimits

0x66cc,	// (0x00030d71) cell_sctrl_middle_pane_g1

0x6973,	// (0x00031018) cell_sctrl_middle_pane_g2_ParamLimits

0x6973,	// (0x00031018) cell_sctrl_middle_pane_g2

0x0001,

0xfd04,	// (0x0003a3a9) cell_sctrl_middle_pane_g_ParamLimits

0xfd04,	// (0x0003a3a9) cell_sctrl_middle_pane_g

0x9ca5,	// (0x0003434a) bg_sctrl_middle_pane_g1

0x9cad,	// (0x00034352) bg_sctrl_middle_pane_g2

0x9cb5,	// (0x0003435a) bg_sctrl_middle_pane_g3

0x9cbd,	// (0x00034362) bg_sctrl_middle_pane_g4

0x9cc5,	// (0x0003436a) bg_sctrl_middle_pane_g5

0x9ccd,	// (0x00034372) bg_sctrl_middle_pane_g6

0x9cd5,	// (0x0003437a) bg_sctrl_middle_pane_g7

0x9cdd,	// (0x00034382) bg_sctrl_middle_pane_g8

0x0007,

0xfd09,	// (0x0003a3ae) bg_sctrl_middle_pane_g

0x9ce5,	// (0x0003438a) bg_sctrl_middle_pane_g8_copy1

0x9ca5,	// (0x0003434a) bg_sctrl_sk_pane_g1

0x9cb5,	// (0x0003435a) bg_sctrl_sk_pane_g2

0x9cad,	// (0x00034352) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00039f0b) bg_sctrl_sk_pane_g

0x86e4,	// (0x00032d89) aid_size_touch_scroll_bar

0x9cc5,	// (0x0003436a) bg_sctrl_sk_pane_g4

0x9cbd,	// (0x00034362) bg_sctrl_sk_pane_g5

0x9ccd,	// (0x00034372) bg_sctrl_sk_pane_g6

0x9cd5,	// (0x0003437a) bg_sctrl_sk_pane_g7

0x9ce5,	// (0x0003438a) bg_sctrl_sk_pane_g8

0x9cdd,	// (0x00034382) bg_sctrl_sk_pane_g9

0x5aca,	// (0x0003016f) popup_fep_china_hwr2_fs_candidate_window

0x5ad4,	// (0x00030179) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5ad4,	// (0x00030179) popup_fep_china_hwr2_fs_control_window

0x66cc,	// (0x00030d71) sctrl_sk_top_pane_g2

0x0001,

0xfcff,	// (0x0003a3a4) sctrl_sk_top_pane_g

0xd9c1,	// (0x00038066) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c1,	// (0x00038066) aid_fep_china_hwr2_fs_cell

0xd9d3,	// (0x00038078) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d3,	// (0x00038078) bg_popup_fep_shadow_pane_cp4

0xd9ea,	// (0x0003808f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ea,	// (0x0003808f) bg_popup_fep_shadow_pane_cp5

0xd9fc,	// (0x000380a1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9fc,	// (0x000380a1) popup_fep_china_hwr2_fs_control_bar_grid

0xda0c,	// (0x000380b1) popup_fep_china_hwr2_fs_control_funtion_grid

0xda14,	// (0x000380b9) aid_fep_china_hwr2_fs_candi_cell

0x7e52,	// (0x000324f7) bg_popup_fep_shadow_pane_cp6

0xda1e,	// (0x000380c3) popup_fep_china_hwr2_fs_candidate_grid

0xda28,	// (0x000380cd) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda28,	// (0x000380cd) cell_fep_china_hwr2_fs_funtion_grid

0xc2af,	// (0x00036954) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda40,	// (0x000380e5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda40,	// (0x000380e5) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda4e,	// (0x000380f3) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda4e,	// (0x000380f3) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1a,	// (0x0003a3bf) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1a,	// (0x0003a3bf) cell_fep_china_hwr2_fs_funtion_grid_g

0xda64,	// (0x00038109) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda64,	// (0x00038109) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda79,	// (0x0003811e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda79,	// (0x0003811e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1f,	// (0x0003a3c4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1f,	// (0x0003a3c4) cell_fep_china_hwr2_fs_funtion_grid_t

0xda95,	// (0x0003813a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda9d,	// (0x00038142) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa5,	// (0x0003814a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd24,	// (0x0003a3c9) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaad,	// (0x00038152) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaad,	// (0x00038152) cell_fep_china_hwr2_fs_candidate_grid

0xdac6,	// (0x0003816b) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdace,	// (0x00038173) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2af,	// (0x00036954) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2af,	// (0x00036954) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb38,	// (0x0003a1dd) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad6,	// (0x0003817b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x989b,	// (0x00033f40) clock_nsta_pane_cp_24_ParamLimits

0x989b,	// (0x00033f40) clock_nsta_pane_cp_24

0x9919,	// (0x00033fbe) indicator_nsta_pane_cp_24_ParamLimits

0x9919,	// (0x00033fbe) indicator_nsta_pane_cp_24

0xa9ac,	// (0x00035051) heading_pane_g1

0x0001,

0xf8cb,	// (0x00039f70) heading_pane_g

0xb3ef,	// (0x00035a94) grid_sct_catagory_button_pane

0xb41f,	// (0x00035ac4) scroll_pane_cp5_ParamLimits

0xbeac,	// (0x00036551) button_value_adjust_pane_cp5_ParamLimits

0xbeac,	// (0x00036551) button_value_adjust_pane_cp5

0xbf8b,	// (0x00036630) form2_midp_time_pane_ParamLimits

0xdae4,	// (0x00038189) cell_sct_catagory_button_pane_ParamLimits

0xdae4,	// (0x00038189) cell_sct_catagory_button_pane

0xc274,	// (0x00036919) bg_button_pane_cp01_ParamLimits

0xc274,	// (0x00036919) bg_button_pane_cp01

0xc2af,	// (0x00036954) cell_sct_catagory_button_pane_g1

0x5ea0,	// (0x00030545) popup_tb_extension_window

0xdaf6,	// (0x0003819b) aid_size_cell_ext_ParamLimits

0xdaf6,	// (0x0003819b) aid_size_cell_ext

0x81cf,	// (0x00032874) bg_tb_trans_pane_cp1_ParamLimits

0x81cf,	// (0x00032874) bg_tb_trans_pane_cp1

0xdb16,	// (0x000381bb) grid_tb_ext_pane_ParamLimits

0xdb16,	// (0x000381bb) grid_tb_ext_pane

0xdb44,	// (0x000381e9) cell_tb_ext_pane_ParamLimits

0xdb44,	// (0x000381e9) cell_tb_ext_pane

0xdb5b,	// (0x00038200) cell_tb_ext_pane_g1_ParamLimits

0xdb5b,	// (0x00038200) cell_tb_ext_pane_g1

0xdb78,	// (0x0003821d) cell_tb_ext_pane_t1

0x81cf,	// (0x00032874) list_highlight_pane_cp11_ParamLimits

0x81cf,	// (0x00032874) list_highlight_pane_cp11

0x4bba,	// (0x0002f25f) popup_uni_indicator_window_ParamLimits

0x4bba,	// (0x0002f25f) popup_uni_indicator_window

0x87b5,	// (0x00032e5a) bg_popup_sub_pane_cp14

0xdb93,	// (0x00038238) list_uniindi_pane

0xdb9f,	// (0x00038244) uniindi_top_pane

0x81cf,	// (0x00032874) bg_uniindi_top_pane

0xdbbe,	// (0x00038263) uniindi_top_pane_g1

0xdbd4,	// (0x00038279) uniindi_top_pane_g2

0x0003,

0xfd2b,	// (0x0003a3d0) uniindi_top_pane_g

0xdbfe,	// (0x000382a3) uniindi_top_pane_t1

0xdc28,	// (0x000382cd) list_single_uniindi_pane_ParamLimits

0xdc28,	// (0x000382cd) list_single_uniindi_pane

0xc2af,	// (0x00036954) bg_uniindi_top_pane_g1

0xdc3b,	// (0x000382e0) list_single_uniindi_pane_g1

0xdc4e,	// (0x000382f3) list_single_uniindi_pane_t1

0x4a30,	// (0x0002f0d5) control_bg_pane

0xdc73,	// (0x00038318) bg_sctrl_sk_pane_cp1

0xdc7c,	// (0x00038321) bg_sctrl_sk_pane_cp2

0xdc85,	// (0x0003832a) control_bg_pane_g1

0xdc8e,	// (0x00038333) control_bg_pane_g2

0x0001,

0xfd34,	// (0x0003a3d9) control_bg_pane_g

0xbd07,	// (0x000363ac) cell_indicator_nsta_pane_g1_ParamLimits

0xbd15,	// (0x000363ba) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9c,	// (0x0003a141) cell_indicator_nsta_pane_g_ParamLimits

0x7a88,	// (0x0003212d) form2_midp_time_pane_t1_ParamLimits

0x5a32,	// (0x000300d7) main_idle_act4_pane_ParamLimits

0x5a32,	// (0x000300d7) main_idle_act4_pane

0x5ea0,	// (0x00030545) popup_tb_extension_window_ParamLimits

0xdb34,	// (0x000381d9) tb_ext_find_pane_ParamLimits

0xdb34,	// (0x000381d9) tb_ext_find_pane

0xdc97,	// (0x0003833c) ai_gene_pane_1_cp1

0x9593,	// (0x00033c38) ai_gene_pane_2_cp1

0xdc9f,	// (0x00038344) list_single_idle_plugin_calendar_pane

0xdca8,	// (0x0003834d) list_single_idle_plugin_notification_pane

0xdcb1,	// (0x00038356) list_single_idle_plugin_player_pane

0xdcba,	// (0x0003835f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcba,	// (0x0003835f) list_single_idle_plugin_shortcut_pane

0xdcdc,	// (0x00038381) main_idle_act4_pane_t1

0xdcee,	// (0x00038393) main_idle_act4_pane_t2

0x0001,

0xfd39,	// (0x0003a3de) main_idle_act4_pane_t

0xdd00,	// (0x000383a5) middle_sk_idle_act4_pane_ParamLimits

0xdd00,	// (0x000383a5) middle_sk_idle_act4_pane

0xdd16,	// (0x000383bb) popup_clock_digital_analogue_window_cp2

0xdd30,	// (0x000383d5) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd30,	// (0x000383d5) shortcut_wheel_idle_act4_pane

0xc2af,	// (0x00036954) shortcut_wheel_idle_act4_pane_g1

0xc2af,	// (0x00036954) shortcut_wheel_idle_act4_pane_g2

0xc2af,	// (0x00036954) shortcut_wheel_idle_act4_pane_g3

0xc2af,	// (0x00036954) shortcut_wheel_idle_act4_pane_g4

0xc2af,	// (0x00036954) shortcut_wheel_idle_act4_pane_g5

0xdd44,	// (0x000383e9) shortcut_wheel_idle_act4_pane_g6

0xdd4c,	// (0x000383f1) shortcut_wheel_idle_act4_pane_g7

0xdd54,	// (0x000383f9) shortcut_wheel_idle_act4_pane_g8

0xdd5c,	// (0x00038401) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3e,	// (0x0003a3e3) shortcut_wheel_idle_act4_pane_g

0xc52d,	// (0x00036bd2) middle_sk_idle_act4_pane_g1_ParamLimits

0xc52d,	// (0x00036bd2) middle_sk_idle_act4_pane_g1

0xddc0,	// (0x00038465) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc0,	// (0x00038465) middle_sk_idle_act4_pane_g2

0x0001,

0xfd61,	// (0x0003a406) middle_sk_idle_act4_pane_g_ParamLimits

0xfd61,	// (0x0003a406) middle_sk_idle_act4_pane_g

0xddcc,	// (0x00038471) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x00038471) middle_sk_idle_act4_pane_t1

0xdde9,	// (0x0003848e) grid_ai_shortcut_pane_ParamLimits

0xdde9,	// (0x0003848e) grid_ai_shortcut_pane

0xde02,	// (0x000384a7) list_highlight_pane_cp16_ParamLimits

0xde02,	// (0x000384a7) list_highlight_pane_cp16

0xde0f,	// (0x000384b4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde0f,	// (0x000384b4) list_single_idle_plugin_shortcut_pane_g1

0xde1b,	// (0x000384c0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1b,	// (0x000384c0) list_single_idle_plugin_shortcut_pane_g2

0xde33,	// (0x000384d8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde33,	// (0x000384d8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd66,	// (0x0003a40b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd66,	// (0x0003a40b) list_single_idle_plugin_shortcut_pane_g

0xde46,	// (0x000384eb) cell_ai_shortcut_pane_ParamLimits

0xde46,	// (0x000384eb) cell_ai_shortcut_pane

0xde6a,	// (0x0003850f) cell_ai_shortcut_pane_g1_ParamLimits

0xde6a,	// (0x0003850f) cell_ai_shortcut_pane_g1

0xdc97,	// (0x0003833c) ai_gene_pane_1_cp2

0xde8c,	// (0x00038531) ai_gene_pane_2_cp2

0xde94,	// (0x00038539) list_highlight_pane_cp15

0xde9d,	// (0x00038542) list_single_idle_plugin_calendar_pane_g1

0xde94,	// (0x00038539) list_highlight_pane_cp17

0xdea5,	// (0x0003854a) list_single_idle_plugin_calendar_pane_g1_copy1

0xdead,	// (0x00038552) list_single_idle_plugin_player_pane_g1

0xb648,	// (0x00035ced) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6d,	// (0x0003a412) list_single_idle_plugin_player_pane_g

0xdeb5,	// (0x0003855a) list_single_idle_plugin_player_pane_t1

0xdec3,	// (0x00038568) list_single_idle_plugin_player_pane_t2

0xded1,	// (0x00038576) list_single_idle_plugin_player_pane_t3

0xdedf,	// (0x00038584) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd72,	// (0x0003a417) list_single_idle_plugin_player_pane_t

0xdeed,	// (0x00038592) wait_bar_pane_cp15

0xdef5,	// (0x0003859a) grid_ai_notification_pane

0xb648,	// (0x00035ced) list_single_idle_plugin_notification_pane_g1

0xdefe,	// (0x000385a3) cell_ai_notification_pane_ParamLimits

0xdefe,	// (0x000385a3) cell_ai_notification_pane

0xdf0b,	// (0x000385b0) cell_ai_notification_pane_g1

0xdf13,	// (0x000385b8) cell_ai_notification_pane_t1

0xdf21,	// (0x000385c6) tb_ext_find_button_pane

0xdf29,	// (0x000385ce) tb_ext_find_pane_g1

0xdf31,	// (0x000385d6) tb_ext_find_pane_t1

0x8e39,	// (0x000334de) tb_ext_find_button_pane_g1

0xdf3f,	// (0x000385e4) tb_ext_find_button_pane_g2

0x0001,

0x0003,	// (0x0002a6a8) tb_ext_find_button_pane_g

0xdcdc,	// (0x00038381) main_idle_act4_pane_t1_ParamLimits

0xdcee,	// (0x00038393) main_idle_act4_pane_t2_ParamLimits

0xfd39,	// (0x0003a3de) main_idle_act4_pane_t_ParamLimits

0xdd16,	// (0x000383bb) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd24,	// (0x000383c9) sat_plugin_idle_act4_pane_ParamLimits

0xdd24,	// (0x000383c9) sat_plugin_idle_act4_pane

0xdf48,	// (0x000385ed) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf48,	// (0x000385ed) sat_plugin_idle_act4_pane_t1

0xdf5b,	// (0x00038600) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5b,	// (0x00038600) sat_plugin_idle_act4_pane_t2

0xdf6e,	// (0x00038613) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf6e,	// (0x00038613) sat_plugin_idle_act4_pane_t3

0xdf81,	// (0x00038626) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf81,	// (0x00038626) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7b,	// (0x0003a420) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7b,	// (0x0003a420) sat_plugin_idle_act4_pane_t

0x4af5,	// (0x0002f19a) popup_battery_window_ParamLimits

0x4af5,	// (0x0002f19a) popup_battery_window

0x81cf,	// (0x00032874) bg_popup_sub_pane_cp25_ParamLimits

0x81cf,	// (0x00032874) bg_popup_sub_pane_cp25

0xdf94,	// (0x00038639) popup_battery_window_g1_ParamLimits

0xdf94,	// (0x00038639) popup_battery_window_g1

0xdfa0,	// (0x00038645) popup_battery_window_t1_ParamLimits

0xdfa0,	// (0x00038645) popup_battery_window_t1

0xdfb2,	// (0x00038657) popup_battery_window_t2_ParamLimits

0xdfb2,	// (0x00038657) popup_battery_window_t2

0x0001,

0xfd84,	// (0x0003a429) popup_battery_window_t_ParamLimits

0xfd84,	// (0x0003a429) popup_battery_window_t

0x9460,	// (0x00033b05) midp_canvas_pane_ParamLimits

0x94d7,	// (0x00033b7c) midp_keypad_pane_ParamLimits

0x94d7,	// (0x00033b7c) midp_keypad_pane

0x979b,	// (0x00033e40) main_midp_pane_ParamLimits

0xbd70,	// (0x00036415) signal_pane_g2_cp_ParamLimits

0xdfcf,	// (0x00038674) aid_size_cell_midp_keypad_ParamLimits

0xdfcf,	// (0x00038674) aid_size_cell_midp_keypad

0xdfe9,	// (0x0003868e) midp_keyp_game_grid_pane_ParamLimits

0xdfe9,	// (0x0003868e) midp_keyp_game_grid_pane

0xe009,	// (0x000386ae) midp_keyp_rocker_pane_ParamLimits

0xe009,	// (0x000386ae) midp_keyp_rocker_pane

0xe042,	// (0x000386e7) midp_keyp_sk_left_pane_ParamLimits

0xe042,	// (0x000386e7) midp_keyp_sk_left_pane

0xe09c,	// (0x00038741) midp_keyp_sk_right_pane_ParamLimits

0xe09c,	// (0x00038741) midp_keyp_sk_right_pane

0x7e52,	// (0x000324f7) bg_button_pane_cp03

0xe0f6,	// (0x0003879b) midp_keyp_sk_left_pane_g1

0x7e52,	// (0x000324f7) bg_button_pane_cp04

0xe0f6,	// (0x0003879b) midp_keyp_sk_right_pane_g1

0xc2af,	// (0x00036954) midp_keyp_rocker_pane_g1

0xe0ff,	// (0x000387a4) keyp_game_cell_pane_ParamLimits

0xe0ff,	// (0x000387a4) keyp_game_cell_pane

0x7e52,	// (0x000324f7) bg_button_pane_cp02

0xe112,	// (0x000387b7) keyp_game_cell_pane_g1

0x4b39,	// (0x0002f1de) popup_fep_vkb2_window_ParamLimits

0x4b39,	// (0x0002f1de) popup_fep_vkb2_window

0x6991,	// (0x00031036) aid_size_cell_vkb2_ParamLimits

0x6991,	// (0x00031036) aid_size_cell_vkb2

0x69e5,	// (0x0003108a) popup_fep_vkb2_window_g1_ParamLimits

0x69e5,	// (0x0003108a) popup_fep_vkb2_window_g1

0x6a2d,	// (0x000310d2) vkb2_area_bottom_pane_ParamLimits

0x6a2d,	// (0x000310d2) vkb2_area_bottom_pane

0x6a79,	// (0x0003111e) vkb2_area_keypad_pane_ParamLimits

0x6a79,	// (0x0003111e) vkb2_area_keypad_pane

0x6abb,	// (0x00031160) vkb2_area_top_pane_ParamLimits

0x6abb,	// (0x00031160) vkb2_area_top_pane

0x6b35,	// (0x000311da) vkb2_top_entry_pane_ParamLimits

0x6b35,	// (0x000311da) vkb2_top_entry_pane

0x6b5f,	// (0x00031204) vkb2_top_grid_left_pane_ParamLimits

0x6b5f,	// (0x00031204) vkb2_top_grid_left_pane

0x6b7d,	// (0x00031222) vkb2_top_grid_right_pane_ParamLimits

0x6b7d,	// (0x00031222) vkb2_top_grid_right_pane

0x6b9b,	// (0x00031240) vkb2_cell_keypad_pane_ParamLimits

0x6b9b,	// (0x00031240) vkb2_cell_keypad_pane

0x6c6c,	// (0x00031311) vkb2_area_bottom_grid_pane_ParamLimits

0x6c6c,	// (0x00031311) vkb2_area_bottom_grid_pane

0x6c92,	// (0x00031337) vkb2_area_bottom_pane_g1_ParamLimits

0x6c92,	// (0x00031337) vkb2_area_bottom_pane_g1

0x6cb6,	// (0x0003135b) vkb2_area_bottom_pane_g2_ParamLimits

0x6cb6,	// (0x0003135b) vkb2_area_bottom_pane_g2

0x6ce4,	// (0x00031389) vkb2_area_bottom_pane_g3_ParamLimits

0x6ce4,	// (0x00031389) vkb2_area_bottom_pane_g3

0x0002,

0xfd89,	// (0x0003a42e) vkb2_area_bottom_pane_g_ParamLimits

0xfd89,	// (0x0003a42e) vkb2_area_bottom_pane_g

0x6d45,	// (0x000313ea) vkb2_top_cell_left_pane_ParamLimits

0x6d45,	// (0x000313ea) vkb2_top_cell_left_pane

0xe123,	// (0x000387c8) vkb2_top_entry_pane_g1_ParamLimits

0xe123,	// (0x000387c8) vkb2_top_entry_pane_g1

0xe131,	// (0x000387d6) vkb2_top_entry_pane_t1_ParamLimits

0xe131,	// (0x000387d6) vkb2_top_entry_pane_t1

0xe163,	// (0x00038808) vkb2_top_entry_pane_t2_ParamLimits

0xe163,	// (0x00038808) vkb2_top_entry_pane_t2

0xe195,	// (0x0003883a) vkb2_top_entry_pane_t3_ParamLimits

0xe195,	// (0x0003883a) vkb2_top_entry_pane_t3

0x0002,

0x000f,	// (0x0002a6b4) vkb2_top_entry_pane_t_ParamLimits

0x000f,	// (0x0002a6b4) vkb2_top_entry_pane_t

0x6d92,	// (0x00031437) vkb2_top_grid_right_pane_g1_ParamLimits

0x6d92,	// (0x00031437) vkb2_top_grid_right_pane_g1

0x6da8,	// (0x0003144d) vkb2_top_grid_right_pane_g2_ParamLimits

0x6da8,	// (0x0003144d) vkb2_top_grid_right_pane_g2

0x6dc0,	// (0x00031465) vkb2_top_grid_right_pane_g3_ParamLimits

0x6dc0,	// (0x00031465) vkb2_top_grid_right_pane_g3

0x6dd8,	// (0x0003147d) vkb2_top_grid_right_pane_g4_ParamLimits

0x6dd8,	// (0x0003147d) vkb2_top_grid_right_pane_g4

0x0003,

0xfd90,	// (0x0003a435) vkb2_top_grid_right_pane_g_ParamLimits

0xfd90,	// (0x0003a435) vkb2_top_grid_right_pane_g

0x6dee,	// (0x00031493) vkb2_top_cell_left_pane_g1

0x6e05,	// (0x000314aa) vkb2_cell_keypad_pane_g1_ParamLimits

0x6e05,	// (0x000314aa) vkb2_cell_keypad_pane_g1

0xe1b9,	// (0x0003885e) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1b9,	// (0x0003885e) vkb2_cell_keypad_pane_t1

0x6e13,	// (0x000314b8) vkb2_cell_bottom_grid_pane_ParamLimits

0x6e13,	// (0x000314b8) vkb2_cell_bottom_grid_pane

0x6e4c,	// (0x000314f1) vkb2_cell_bottom_grid_pane_g1

0xdd64,	// (0x00038409) aid_call2_pane_cp02

0xdd6c,	// (0x00038411) aid_call_pane_cp02

0xdd74,	// (0x00038419) clock_digital_number_pane_cp10

0xdd7c,	// (0x00038421) clock_digital_number_pane_cp11

0xdd84,	// (0x00038429) clock_digital_number_pane_cp12

0xdd8c,	// (0x00038431) clock_digital_number_pane_cp13

0xdd94,	// (0x00038439) clock_digital_separator_pane_cp10

0x8e39,	// (0x000334de) popup_clock_digital_analogue_window_cp2_g1

0x8e39,	// (0x000334de) popup_clock_digital_analogue_window_cp2_g2

0xdd9c,	// (0x00038441) popup_clock_digital_analogue_window_cp2_g3

0x8e39,	// (0x000334de) popup_clock_digital_analogue_window_cp2_g4

0xdd9c,	// (0x00038441) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd51,	// (0x0003a3f6) popup_clock_digital_analogue_window_cp2_g

0xdda4,	// (0x00038449) popup_clock_digital_analogue_window_cp2_t1

0xddb2,	// (0x00038457) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5c,	// (0x0003a401) popup_clock_digital_analogue_window_cp2_t

0xc2af,	// (0x00036954) clock_digital_number_pane_cp10_g1

0xc2af,	// (0x00036954) clock_digital_number_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a1dd) clock_digital_number_pane_cp10_g

0xc2af,	// (0x00036954) clock_digital_separator_pane_cp10_g1

0xc2af,	// (0x00036954) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a1dd) clock_digital_separator_pane_cp10_g

0xdbe0,	// (0x00038285) uniindi_top_pane_g3

0xdbf1,	// (0x00038296) uniindi_top_pane_g4

0x6c26,	// (0x000312cb) vkb2_row_keypad_pane_ParamLimits

0x6c26,	// (0x000312cb) vkb2_row_keypad_pane

0x6e68,	// (0x0003150d) vkb2_cell_t_keypad_pane_ParamLimits

0x6e68,	// (0x0003150d) vkb2_cell_t_keypad_pane

0x6e78,	// (0x0003151d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6e78,	// (0x0003151d) vkb2_cell_t_keypad_pane_cp08

0x6e8b,	// (0x00031530) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6e8b,	// (0x00031530) vkb2_cell_t_keypad_pane_cp09

0x6e9f,	// (0x00031544) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6e9f,	// (0x00031544) vkb2_cell_t_keypad_pane_cp01

0x6eb0,	// (0x00031555) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6eb0,	// (0x00031555) vkb2_cell_t_keypad_pane_cp02

0x6ec1,	// (0x00031566) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6ec1,	// (0x00031566) vkb2_cell_t_keypad_pane_cp03

0x6ed2,	// (0x00031577) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6ed2,	// (0x00031577) vkb2_cell_t_keypad_pane_cp04

0x6ee3,	// (0x00031588) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6ee3,	// (0x00031588) vkb2_cell_t_keypad_pane_cp05

0x6ef4,	// (0x00031599) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6ef4,	// (0x00031599) vkb2_cell_t_keypad_pane_cp06

0x6f05,	// (0x000315aa) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6f05,	// (0x000315aa) vkb2_cell_t_keypad_pane_cp07

0x6f16,	// (0x000315bb) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6f16,	// (0x000315bb) vkb2_cell_t_keypad_pane_cp10

0x66cc,	// (0x00030d71) vkb2_cell_t_keypad_pane_g1

0xe1d0,	// (0x00038875) vkb2_cell_t_keypad_pane_t1

0x4a30,	// (0x0002f0d5) popup_grid_graphic2_window

0xe1e2,	// (0x00038887) aid_size_cell_graphic2_ParamLimits

0xe1e2,	// (0x00038887) aid_size_cell_graphic2

0xe21a,	// (0x000388bf) bg_popup_window_pane_cp21_ParamLimits

0xe21a,	// (0x000388bf) bg_popup_window_pane_cp21

0xe228,	// (0x000388cd) graphic2_pages_pane_ParamLimits

0xe228,	// (0x000388cd) graphic2_pages_pane

0xe26e,	// (0x00038913) grid_graphic2_control_pane_ParamLimits

0xe26e,	// (0x00038913) grid_graphic2_control_pane

0xe2ac,	// (0x00038951) grid_graphic2_pane_ParamLimits

0xe2ac,	// (0x00038951) grid_graphic2_pane

0xe320,	// (0x000389c5) cell_graphic2_pane

0x4a30,	// (0x0002f0d5) main_comp_mode_pane

0xd460,	// (0x00037b05) list_ai3_gene_pane_ParamLimits

0xd82a,	// (0x00037ecf) bg_popup_window_pane_cp19_ParamLimits

0xd836,	// (0x00037edb) bg_touch_area_indi_pane_ParamLimits

0xd836,	// (0x00037edb) bg_touch_area_indi_pane

0xd84c,	// (0x00037ef1) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84c,	// (0x00037ef1) bg_touch_area_indi_pane_cp01

0xd862,	// (0x00037f07) bg_touch_area_indi_pane_cp02_ParamLimits

0xd862,	// (0x00037f07) bg_touch_area_indi_pane_cp02

0xd87a,	// (0x00037f1f) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87a,	// (0x00037f1f) bg_touch_area_indi_pane_cp03

0xd894,	// (0x00037f39) popup_slider_window_g1_ParamLimits

0xd8b0,	// (0x00037f55) popup_slider_window_g2_ParamLimits

0xd8cc,	// (0x00037f71) popup_slider_window_g3_ParamLimits

0xfce6,	// (0x0003a38b) popup_slider_window_g_ParamLimits

0xd928,	// (0x00037fcd) popup_slider_window_t1_ParamLimits

0xd99c,	// (0x00038041) small_volume_slider_vertical_pane_ParamLimits

0xe320,	// (0x000389c5) cell_graphic2_pane_ParamLimits

0xe36f,	// (0x00038a14) bg_button_pane_cp10_ParamLimits

0xe36f,	// (0x00038a14) bg_button_pane_cp10

0xe382,	// (0x00038a27) bg_button_pane_cp11_ParamLimits

0xe382,	// (0x00038a27) bg_button_pane_cp11

0xe395,	// (0x00038a3a) graphic2_pages_pane_g1_ParamLimits

0xe395,	// (0x00038a3a) graphic2_pages_pane_g1

0xe3b0,	// (0x00038a55) graphic2_pages_pane_g2_ParamLimits

0xe3b0,	// (0x00038a55) graphic2_pages_pane_g2

0x0001,

0x0024,	// (0x0002a6c9) graphic2_pages_pane_g_ParamLimits

0x0024,	// (0x0002a6c9) graphic2_pages_pane_g

0xe3c8,	// (0x00038a6d) graphic2_pages_pane_t1_ParamLimits

0xe3c8,	// (0x00038a6d) graphic2_pages_pane_t1

0xe401,	// (0x00038aa6) cell_graphic2_control_pane_ParamLimits

0xe401,	// (0x00038aa6) cell_graphic2_control_pane

0xe41f,	// (0x00038ac4) cell_graphic2_pane_g1_ParamLimits

0xe41f,	// (0x00038ac4) cell_graphic2_pane_g1

0xe42c,	// (0x00038ad1) cell_graphic2_pane_g2_ParamLimits

0xe42c,	// (0x00038ad1) cell_graphic2_pane_g2

0xe439,	// (0x00038ade) cell_graphic2_pane_g3_ParamLimits

0xe439,	// (0x00038ade) cell_graphic2_pane_g3

0xe446,	// (0x00038aeb) cell_graphic2_pane_g4_ParamLimits

0xe446,	// (0x00038aeb) cell_graphic2_pane_g4

0xe453,	// (0x00038af8) cell_graphic2_pane_g5_ParamLimits

0xe453,	// (0x00038af8) cell_graphic2_pane_g5

0x0004,

0xfd99,	// (0x0003a43e) cell_graphic2_pane_g_ParamLimits

0xfd99,	// (0x0003a43e) cell_graphic2_pane_g

0xe46e,	// (0x00038b13) cell_graphic2_pane_t1_ParamLimits

0xe46e,	// (0x00038b13) cell_graphic2_pane_t1

0x9d19,	// (0x000343be) grid_highlight_pane_cp11_ParamLimits

0x9d19,	// (0x000343be) grid_highlight_pane_cp11

0x81cf,	// (0x00032874) bg_button_pane_cp05

0xe4a5,	// (0x00038b4a) cell_graphic2_control_pane_g1

0xc2af,	// (0x00036954) bg_touch_area_indi_pane_g1

0xe4cd,	// (0x00038b72) aid_cmod_rocker_key_size

0xe4d7,	// (0x00038b7c) aid_cmode_itu_key_size

0xe4e1,	// (0x00038b86) main_cmode_video_pane

0xe4eb,	// (0x00038b90) main_comp_mode_itu_pane

0xe4f7,	// (0x00038b9c) main_comp_mode_rocker_pane

0xe503,	// (0x00038ba8) cell_cmode_rocker_pane_ParamLimits

0xe503,	// (0x00038ba8) cell_cmode_rocker_pane

0xe515,	// (0x00038bba) cell_cmode_itu_pane_ParamLimits

0xe515,	// (0x00038bba) cell_cmode_itu_pane

0x87b5,	// (0x00032e5a) bg_button_pane_cp06_ParamLimits

0x87b5,	// (0x00032e5a) bg_button_pane_cp06

0xc52d,	// (0x00036bd2) cell_cmode_rocker_pane_g1_ParamLimits

0xc52d,	// (0x00036bd2) cell_cmode_rocker_pane_g1

0xda40,	// (0x000380e5) cell_cmode_rocker_pane_g2_ParamLimits

0xda40,	// (0x000380e5) cell_cmode_rocker_pane_g2

0x0001,

0x0039,	// (0x0002a6de) cell_cmode_rocker_pane_g_ParamLimits

0x0039,	// (0x0002a6de) cell_cmode_rocker_pane_g

0x7e52,	// (0x000324f7) bg_button_pane_cp07

0xe52a,	// (0x00038bcf) cell_cmode_itu_pane_g1

0xe533,	// (0x00038bd8) cell_cmode_itu_pane_t1

0xe541,	// (0x00038be6) cell_cmode_itu_pane_t2

0x0001,

0xfda9,	// (0x0003a44e) cell_cmode_itu_pane_t

0xdc63,	// (0x00038308) aid_touch_ctrl_left

0xdc6b,	// (0x00038310) aid_touch_ctrl_right

0x7e52,	// (0x000324f7) compa_mode_pane

0xe54f,	// (0x00038bf4) aid_cmod_rocker_key_size_cp

0xe559,	// (0x00038bfe) aid_cmode_itu_key_size_cp

0xe563,	// (0x00038c08) compa_mode_pane_g1

0xe56b,	// (0x00038c10) compa_mode_pane_g2

0xe573,	// (0x00038c18) compa_mode_pane_g3

0x0002,

0xfdae,	// (0x0003a453) compa_mode_pane_g

0xe57b,	// (0x00038c20) main_comp_mode_itu_pane_cp

0xe583,	// (0x00038c28) main_comp_mode_rocker_pane_cp

0xe58b,	// (0x00038c30) cell_cmode_itu_pane_cp_ParamLimits

0xe58b,	// (0x00038c30) cell_cmode_itu_pane_cp

0xe5a0,	// (0x00038c45) cell_cmode_rocker_pane_cp_ParamLimits

0xe5a0,	// (0x00038c45) cell_cmode_rocker_pane_cp

0x87b5,	// (0x00032e5a) bg_button_pane_cp06_cp_ParamLimits

0x87b5,	// (0x00032e5a) bg_button_pane_cp06_cp

0xc52d,	// (0x00036bd2) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc52d,	// (0x00036bd2) cell_cmode_rocker_pane_g1_cp

0xc2af,	// (0x00036954) cell_cmode_rocker_pane_g2_cp

0x7e52,	// (0x000324f7) bg_button_pane_cp07_cp

0xb1eb,	// (0x00035890) cell_cmode_itu_pane_g1_cp

0xe5b2,	// (0x00038c57) cell_cmode_itu_pane_t1_cp

0xe5b2,	// (0x00038c57) cell_cmode_itu_pane_t2_cp

0xb1d8,	// (0x0003587d) settings_code_pane_cp2

0x7f46,	// (0x000325eb) bg_popup_window_pane_cp3_ParamLimits

0x83a9,	// (0x00032a4e) heading_pane_cp3_ParamLimits

0x83b5,	// (0x00032a5a) listscroll_popup_graphic_pane_ParamLimits

0x6475,	// (0x00030b1a) fep_hwr_aid_pane_ParamLimits

0x68ec,	// (0x00030f91) aid_touch_sctrl_top_ParamLimits

0x6907,	// (0x00030fac) sctrl_sk_top_pane_g1_ParamLimits

0x66cc,	// (0x00030d71) sctrl_sk_top_pane_g2_ParamLimits

0xfcff,	// (0x0003a3a4) sctrl_sk_top_pane_g_ParamLimits

0x6914,	// (0x00030fb9) sctrl_sk_top_pane_t1_ParamLimits

0x68ec,	// (0x00030f91) aid_touch_sctrl_bottom_ParamLimits

0x6914,	// (0x00030fb9) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbac,	// (0x00038251) aid_area_touch_clock

0x6afd,	// (0x000311a2) aid_vkb2_area_top_pane_cell_ParamLimits

0x6afd,	// (0x000311a2) aid_vkb2_area_top_pane_cell

0x6c48,	// (0x000312ed) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6c48,	// (0x000312ed) aid_vkb2_area_bottom_pane_cell

0xe11b,	// (0x000387c0) popup_char_count_window

0xe5c0,	// (0x00038c65) popup_char_count_window_g1

0xe5c9,	// (0x00038c6e) popup_char_count_window_g2

0xe5d2,	// (0x00038c77) popup_char_count_window_g3

0x0002,

0xfdb5,	// (0x0003a45a) popup_char_count_window_g

0xe5db,	// (0x00038c80) popup_char_count_window_t1

0x69c3,	// (0x00031068) popup_fep_char_preview_window_ParamLimits

0x69c3,	// (0x00031068) popup_fep_char_preview_window

0x6b1b,	// (0x000311c0) vkb2_top_candi_pane_ParamLimits

0x6b1b,	// (0x000311c0) vkb2_top_candi_pane

0xe5e9,	// (0x00038c8e) cell_vkb2_top_candi_pane_ParamLimits

0xe5e9,	// (0x00038c8e) cell_vkb2_top_candi_pane

0x6f2b,	// (0x000315d0) bg_popup_fep_char_preview_window_ParamLimits

0x6f2b,	// (0x000315d0) bg_popup_fep_char_preview_window

0x6f39,	// (0x000315de) popup_fep_char_preview_window_t1_ParamLimits

0x6f39,	// (0x000315de) popup_fep_char_preview_window_t1

0xe636,	// (0x00038cdb) bg_popup_fep_char_preview_window_g1

0xe63e,	// (0x00038ce3) bg_popup_fep_char_preview_window_g2

0xe646,	// (0x00038ceb) bg_popup_fep_char_preview_window_g3

0xe64e,	// (0x00038cf3) bg_popup_fep_char_preview_window_g4

0xe656,	// (0x00038cfb) bg_popup_fep_char_preview_window_g5

0x6f73,	// (0x00031618) bg_popup_fep_char_preview_window_g6

0xe65e,	// (0x00038d03) bg_popup_fep_char_preview_window_g7

0xe666,	// (0x00038d0b) bg_popup_fep_char_preview_window_g8

0xe66e,	// (0x00038d13) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdbc,	// (0x0003a461) bg_popup_fep_char_preview_window_g

0x66cc,	// (0x00030d71) cell_vkb2_top_candi_pane_g1_ParamLimits

0x66cc,	// (0x00030d71) cell_vkb2_top_candi_pane_g1

0x66da,	// (0x00030d7f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x66da,	// (0x00030d7f) cell_vkb2_top_candi_pane_g2

0xe3e0,	// (0x00038a85) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe3e0,	// (0x00038a85) cell_vkb2_top_candi_pane_g3

0x6f7b,	// (0x00031620) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6f7b,	// (0x00031620) cell_vkb2_top_candi_pane_g4

0xc9f8,	// (0x0003709d) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9f8,	// (0x0003709d) cell_vkb2_top_candi_pane_g5

0x6f9c,	// (0x00031641) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6f9c,	// (0x00031641) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcf,	// (0x0003a474) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcf,	// (0x0003a474) cell_vkb2_top_candi_pane_g

0x6faa,	// (0x0003164f) cell_vkb2_top_candi_pane_t1

0x62d5,	// (0x0003097a) aid_size_touch_slider_mark_ParamLimits

0x62d5,	// (0x0003097a) aid_size_touch_slider_mark

0xe25e,	// (0x00038903) grid_graphic2_catg_pane_ParamLimits

0xe25e,	// (0x00038903) grid_graphic2_catg_pane

0xe2fc,	// (0x000389a1) popup_grid_graphic2_window_t1_ParamLimits

0xe2fc,	// (0x000389a1) popup_grid_graphic2_window_t1

0xe30e,	// (0x000389b3) popup_grid_graphic2_window_t2_ParamLimits

0xe30e,	// (0x000389b3) popup_grid_graphic2_window_t2

0x0001,

0x001f,	// (0x0002a6c4) popup_grid_graphic2_window_t_ParamLimits

0x001f,	// (0x0002a6c4) popup_grid_graphic2_window_t

0x81cf,	// (0x00032874) bg_button_pane_cp05_ParamLimits

0xe4a5,	// (0x00038b4a) cell_graphic2_control_pane_g1_ParamLimits

0xe676,	// (0x00038d1b) cell_graphic2_catg_pane_ParamLimits

0xe676,	// (0x00038d1b) cell_graphic2_catg_pane

0x7e52,	// (0x000324f7) bg_button_pane_cp12

0xe688,	// (0x00038d2d) cell_graphic2_catg_pane_g1

0xdb78,	// (0x0003821d) cell_tb_ext_pane_t1_ParamLimits

0x6d65,	// (0x0003140a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6d65,	// (0x0003140a) vkb2_top_cell_right_narrow_pane

0x6d7d,	// (0x00031422) vkb2_top_cell_right_wide_pane_ParamLimits

0x6d7d,	// (0x00031422) vkb2_top_cell_right_wide_pane

0x6467,	// (0x00030b0c) bg_vkb2_func_pane_ParamLimits

0x6467,	// (0x00030b0c) bg_vkb2_func_pane

0x6dee,	// (0x00031493) vkb2_top_cell_left_pane_g1_ParamLimits

0x6467,	// (0x00030b0c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6467,	// (0x00030b0c) bg_vkb2_fuc_pane_cp03

0x6e4c,	// (0x000314f1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9cad,	// (0x00034352) bg_vkb2_func_pane_g1

0x9cb5,	// (0x0003435a) bg_vkb2_func_pane_g2

0x9cc5,	// (0x0003436a) bg_vkb2_func_pane_g3

0x9cbd,	// (0x00034362) bg_vkb2_func_pane_g4

0x9ccd,	// (0x00034372) bg_vkb2_func_pane_g5

0x9cd5,	// (0x0003437a) bg_vkb2_func_pane_g6

0x9cdd,	// (0x00034382) bg_vkb2_func_pane_g7

0x9ce5,	// (0x0003438a) bg_vkb2_func_pane_g8

0x9ca5,	// (0x0003434a) bg_vkb2_func_pane_g9

0x0008,

0x005e,	// (0x0002a703) bg_vkb2_func_pane_g

0x6467,	// (0x00030b0c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6467,	// (0x00030b0c) bg_vkb2_fuc_pane_cp01

0x6dee,	// (0x00031493) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6dee,	// (0x00031493) vkb2_top_cell_right_wide_pane_g1

0x6467,	// (0x00030b0c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6467,	// (0x00030b0c) bg_vkb2_fuc_pane_cp02

0x6e4c,	// (0x000314f1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6e4c,	// (0x000314f1) vkb2_top_cell_right_narrow_pane_g1

0xd7ae,	// (0x00037e53) aid_touch_area_decrease_ParamLimits

0xd7ae,	// (0x00037e53) aid_touch_area_decrease

0xd7cc,	// (0x00037e71) aid_touch_area_increase_ParamLimits

0xd7cc,	// (0x00037e71) aid_touch_area_increase

0xd7d8,	// (0x00037e7d) aid_touch_area_mute_ParamLimits

0xd7d8,	// (0x00037e7d) aid_touch_area_mute

0xd7fc,	// (0x00037ea1) aid_touch_area_slider_ParamLimits

0xd7fc,	// (0x00037ea1) aid_touch_area_slider

0xd8e8,	// (0x00037f8d) popup_slider_window_g4_ParamLimits

0xd8e8,	// (0x00037f8d) popup_slider_window_g4

0xd8f4,	// (0x00037f99) popup_slider_window_g5_ParamLimits

0xd8f4,	// (0x00037f99) popup_slider_window_g5

0xd916,	// (0x00037fbb) popup_slider_window_g6_ParamLimits

0xd916,	// (0x00037fbb) popup_slider_window_g6

0xd956,	// (0x00037ffb) popup_slider_window_t2_ParamLimits

0xd956,	// (0x00037ffb) popup_slider_window_t2

0x0001,

0xfcf3,	// (0x0003a398) popup_slider_window_t_ParamLimits

0xfcf3,	// (0x0003a398) popup_slider_window_t

0xd96e,	// (0x00038013) slider_pane_ParamLimits

0xd96e,	// (0x00038013) slider_pane

0xe691,	// (0x00038d36) slider_pane_g1_ParamLimits

0xe691,	// (0x00038d36) slider_pane_g1

0xe6a5,	// (0x00038d4a) slider_pane_g2_ParamLimits

0xe6a5,	// (0x00038d4a) slider_pane_g2

0xe6bb,	// (0x00038d60) slider_pane_g3_ParamLimits

0xe6bb,	// (0x00038d60) slider_pane_g3

0x0003,

0xfddc,	// (0x0003a481) slider_pane_g_ParamLimits

0xfddc,	// (0x0003a481) slider_pane_g

0x5efc,	// (0x000305a1) popup_tb_float_extension_window_ParamLimits

0x5efc,	// (0x000305a1) popup_tb_float_extension_window

0xe6e7,	// (0x00038d8c) aid_size_cell_tb_float_ext

0x7e52,	// (0x000324f7) bg_popup_sub_window_cp28

0xe6f3,	// (0x00038d98) grid_tb_float_ext_pane

0xe6fd,	// (0x00038da2) cell_tb_float_ext_pane_ParamLimits

0xe6fd,	// (0x00038da2) cell_tb_float_ext_pane

0xe717,	// (0x00038dbc) cell_tb_float_ext_pane_g1

0xe720,	// (0x00038dc5) grid_highlight_pane_cp12

0x65b6,	// (0x00030c5b) cell_last_hwr_side_pane_ParamLimits

0x65b6,	// (0x00030c5b) cell_last_hwr_side_pane

0xc2af,	// (0x00036954) cell_last_hwr_side_pane_g1

0xe729,	// (0x00038dce) cell_last_hwr_side_pane_g2

0x0001,

0x0071,	// (0x0002a716) cell_last_hwr_side_pane_g

0x6d14,	// (0x000313b9) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6d14,	// (0x000313b9) vkb2_area_bottom_space_btn_pane

0x66cc,	// (0x00030d71) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1d0,	// (0x00038875) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6faa,	// (0x0003164f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6fc9,	// (0x0003166e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6fc9,	// (0x0003166e) vkb2_area_bottom_space_btn_pane_g1

0x7003,	// (0x000316a8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7003,	// (0x000316a8) vkb2_area_bottom_space_btn_pane_g2

0x7039,	// (0x000316de) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7039,	// (0x000316de) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde5,	// (0x0003a48a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde5,	// (0x0003a48a) vkb2_area_bottom_space_btn_pane_g

0x652a,	// (0x00030bcf) cel_fep_hwr_func_pane_ParamLimits

0x652a,	// (0x00030bcf) cel_fep_hwr_func_pane

0x6566,	// (0x00030c0b) cell_hwr_side_button_pane_ParamLimits

0x6566,	// (0x00030c0b) cell_hwr_side_button_pane

0xdbac,	// (0x00038251) aid_area_touch_clock_ParamLimits

0x81cf,	// (0x00032874) bg_uniindi_top_pane_ParamLimits

0xdbbe,	// (0x00038263) uniindi_top_pane_g1_ParamLimits

0xdbd4,	// (0x00038279) uniindi_top_pane_g2_ParamLimits

0xdbe0,	// (0x00038285) uniindi_top_pane_g3_ParamLimits

0xdbf1,	// (0x00038296) uniindi_top_pane_g4_ParamLimits

0xfd2b,	// (0x0003a3d0) uniindi_top_pane_g_ParamLimits

0xdbfe,	// (0x000382a3) uniindi_top_pane_t1_ParamLimits

0x81cf,	// (0x00032874) bg_vkb2_func_pane_cp01_ParamLimits

0x81cf,	// (0x00032874) bg_vkb2_func_pane_cp01

0xe732,	// (0x00038dd7) cel_fep_hwr_func_pane_g1_ParamLimits

0xe732,	// (0x00038dd7) cel_fep_hwr_func_pane_g1

0x81cf,	// (0x00032874) bg_vkb2_func_pane_cp02_ParamLimits

0x81cf,	// (0x00032874) bg_vkb2_func_pane_cp02

0xe732,	// (0x00038dd7) cell_hwr_side_button_pane_g1_ParamLimits

0xe732,	// (0x00038dd7) cell_hwr_side_button_pane_g1

0x9b26,	// (0x000341cb) status_pane_g4_ParamLimits

0x9b26,	// (0x000341cb) status_pane_g4

0x9b40,	// (0x000341e5) status_pane_t1

0xbff4,	// (0x00036699) form2_midp_gauge_slider_cont_pane

0xbffc,	// (0x000366a1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc00e,	// (0x000366b3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc020,	// (0x000366c5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaeb,	// (0x0003a190) form2_midp_gauge_slider_pane_t_ParamLimits

0xc032,	// (0x000366d7) form2_midp_slider_pane_ParamLimits

0x6983,	// (0x00031028) aid_size_cell_func_vkb2_ParamLimits

0x6983,	// (0x00031028) aid_size_cell_func_vkb2

0xe6d3,	// (0x00038d78) slider_pane_g4_ParamLimits

0xe6d3,	// (0x00038d78) slider_pane_g4

0x7083,	// (0x00031728) form2_midp_gauge_slider_pane_t2_cp01

0x7091,	// (0x00031736) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7091,	// (0x00031736) form2_midp_gauge_slider_pane_t3_cp01

0x70ae,	// (0x00031753) form2_midp_slider_pane_cp01

0x7e52,	// (0x000324f7) navi_smil_pane

0xe76b,	// (0x00038e10) navi_smil_pane_g1

0xe773,	// (0x00038e18) navi_smil_pane_t1

0xe740,	// (0x00038de5) form2_midp_slider_pane_g1

0xe749,	// (0x00038dee) form2_midp_slider_pane_g2

0xe751,	// (0x00038df6) form2_midp_slider_pane_g3

0xe740,	// (0x00038de5) form2_midp_slider_pane_g4

0xe759,	// (0x00038dfe) form2_midp_slider_pane_g5

0x0004,

0xfdee,	// (0x0003a493) form2_midp_slider_pane_g

0x7073,	// (0x00031718) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7073,	// (0x00031718) vkb2_area_bottom_space_btn_pane_g4

0x9955,	// (0x00033ffa) lc0_navi_pane_ParamLimits

0x9955,	// (0x00033ffa) lc0_navi_pane

0x99cb,	// (0x00034070) lc0_stat_indi_pane_ParamLimits

0x99cb,	// (0x00034070) lc0_stat_indi_pane

0x99e2,	// (0x00034087) ls0_title_pane_ParamLimits

0x99e2,	// (0x00034087) ls0_title_pane

0x87b5,	// (0x00032e5a) bg_popup_sub_pane_cp14_ParamLimits

0xdb93,	// (0x00038238) list_uniindi_pane_ParamLimits

0xdb9f,	// (0x00038244) uniindi_top_pane_ParamLimits

0xdc3b,	// (0x000382e0) list_single_uniindi_pane_g1_ParamLimits

0xdc4e,	// (0x000382f3) list_single_uniindi_pane_t1_ParamLimits

0x70b7,	// (0x0003175c) lc0_stat_clock_pane_ParamLimits

0x70b7,	// (0x0003175c) lc0_stat_clock_pane

0xe781,	// (0x00038e26) lc0_stat_indi_pane_g1_ParamLimits

0xe781,	// (0x00038e26) lc0_stat_indi_pane_g1

0xe78e,	// (0x00038e33) lc0_stat_indi_pane_g2_ParamLimits

0xe78e,	// (0x00038e33) lc0_stat_indi_pane_g2

0x0001,

0xfdf9,	// (0x0003a49e) lc0_stat_indi_pane_g_ParamLimits

0xfdf9,	// (0x0003a49e) lc0_stat_indi_pane_g

0x70c4,	// (0x00031769) lc0_uni_indicator_pane_ParamLimits

0x70c4,	// (0x00031769) lc0_uni_indicator_pane

0xe79b,	// (0x00038e40) ls0_title_pane_g1_ParamLimits

0xe79b,	// (0x00038e40) ls0_title_pane_g1

0xe7af,	// (0x00038e54) ls0_title_pane_t1_ParamLimits

0xe7af,	// (0x00038e54) ls0_title_pane_t1

0x70d1,	// (0x00031776) lc0_uni_indicator_pane_g1_ParamLimits

0x70d1,	// (0x00031776) lc0_uni_indicator_pane_g1

0xe7e5,	// (0x00038e8a) lc0_stat_clock_pane_t1

0x4a30,	// (0x0002f0d5) main_ai5_pane

0xe7f3,	// (0x00038e98) ai5_sk_pane_ParamLimits

0xe7f3,	// (0x00038e98) ai5_sk_pane

0xe800,	// (0x00038ea5) cell_ai5_widget_pane_ParamLimits

0xe800,	// (0x00038ea5) cell_ai5_widget_pane

0xe8b2,	// (0x00038f57) aid_size_cell_widget_grid

0xe8c8,	// (0x00038f6d) bg_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x00038f6d) bg_ai5_widget_pane

0xe93c,	// (0x00038fe1) cell_ai5_widget_pane_g2

0xe94c,	// (0x00038ff1) cell_ai5_widget_pane_g3

0xe963,	// (0x00039008) cell_ai5_widget_pane_g4

0xe96f,	// (0x00039014) cell_ai5_widget_pane_g5

0xe97b,	// (0x00039020) cell_ai5_widget_pane_g6

0xe987,	// (0x0003902c) cell_ai5_widget_pane_g7

0xe9cf,	// (0x00039074) cell_ai5_widget_pane_t1_ParamLimits

0xe9cf,	// (0x00039074) cell_ai5_widget_pane_t1

0xe9ec,	// (0x00039091) cell_ai5_widget_pane_t2_ParamLimits

0xe9ec,	// (0x00039091) cell_ai5_widget_pane_t2

0xea04,	// (0x000390a9) cell_ai5_widget_pane_t3_ParamLimits

0xea04,	// (0x000390a9) cell_ai5_widget_pane_t3

0xea1c,	// (0x000390c1) cell_ai5_widget_pane_t4_ParamLimits

0xea1c,	// (0x000390c1) cell_ai5_widget_pane_t4

0xea39,	// (0x000390de) cell_ai5_widget_pane_t5_ParamLimits

0xea39,	// (0x000390de) cell_ai5_widget_pane_t5

0xea58,	// (0x000390fd) cell_ai5_widget_pane_t6_ParamLimits

0xea58,	// (0x000390fd) cell_ai5_widget_pane_t6

0xea6a,	// (0x0003910f) cell_ai5_widget_pane_t7_ParamLimits

0xea6a,	// (0x0003910f) cell_ai5_widget_pane_t7

0xea83,	// (0x00039128) cell_ai5_widget_pane_t8_ParamLimits

0xea83,	// (0x00039128) cell_ai5_widget_pane_t8

0x0009,

0xfe13,	// (0x0003a4b8) cell_ai5_widget_pane_t_ParamLimits

0xfe13,	// (0x0003a4b8) cell_ai5_widget_pane_t

0xead7,	// (0x0003917c) grid_ai5_widget_pane

0x87b5,	// (0x00032e5a) highlight_cell_ai5_widget_pane_ParamLimits

0x87b5,	// (0x00032e5a) highlight_cell_ai5_widget_pane

0xeaee,	// (0x00039193) ai5_sk_left_pane

0xeaf8,	// (0x0003919d) ai5_sk_middle_pane

0xeb02,	// (0x000391a7) ai5_sk_right_pane

0xeb0c,	// (0x000391b1) bg_ai5_widget_pane_g1_ParamLimits

0xeb0c,	// (0x000391b1) bg_ai5_widget_pane_g1

0xeb18,	// (0x000391bd) bg_ai5_widget_pane_g2_ParamLimits

0xeb18,	// (0x000391bd) bg_ai5_widget_pane_g2

0xeb24,	// (0x000391c9) bg_ai5_widget_pane_g3_ParamLimits

0xeb24,	// (0x000391c9) bg_ai5_widget_pane_g3

0xeb30,	// (0x000391d5) bg_ai5_widget_pane_g4_ParamLimits

0xeb30,	// (0x000391d5) bg_ai5_widget_pane_g4

0xeb3c,	// (0x000391e1) bg_ai5_widget_pane_g5_ParamLimits

0xeb3c,	// (0x000391e1) bg_ai5_widget_pane_g5

0xeb48,	// (0x000391ed) bg_ai5_widget_pane_g6_ParamLimits

0xeb48,	// (0x000391ed) bg_ai5_widget_pane_g6

0xeb54,	// (0x000391f9) bg_ai5_widget_pane_g7_ParamLimits

0xeb54,	// (0x000391f9) bg_ai5_widget_pane_g7

0xeb60,	// (0x00039205) bg_ai5_widget_pane_g8_ParamLimits

0xeb60,	// (0x00039205) bg_ai5_widget_pane_g8

0xeb6c,	// (0x00039211) bg_ai5_widget_pane_g9_ParamLimits

0xeb6c,	// (0x00039211) bg_ai5_widget_pane_g9

0x0008,

0xfe28,	// (0x0003a4cd) bg_ai5_widget_pane_g_ParamLimits

0xfe28,	// (0x0003a4cd) bg_ai5_widget_pane_g

0xeb9e,	// (0x00039243) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb9e,	// (0x00039243) cell_shortcut_ai5_widget_pane

0x944c,	// (0x00033af1) bg_cell_shortcut_ai5_widget_pane

0xebaf,	// (0x00039254) cell_grid_ai5_widget_pane_g1

0x944c,	// (0x00033af1) highlight_cell_shortcut_ai5_widget_pane

0x9cad,	// (0x00034352) ai5_sk_left_pane_g1

0xebb8,	// (0x0003925d) ai5_sk_left_pane_g2

0xebc0,	// (0x00039265) ai5_sk_left_pane_g3

0xebc8,	// (0x0003926d) ai5_sk_left_pane_g4

0x0003,

0xfe3b,	// (0x0003a4e0) ai5_sk_left_pane_g

0xebd0,	// (0x00039275) ai5_sk_left_pane_t1

0x9cb5,	// (0x0003435a) ai5_sk_right_pane_g1

0xebde,	// (0x00039283) ai5_sk_right_pane_g2

0xebe6,	// (0x0003928b) ai5_sk_right_pane_g3

0xebee,	// (0x00039293) ai5_sk_right_pane_g4

0x0003,

0xfe44,	// (0x0003a4e9) ai5_sk_right_pane_g

0xebf6,	// (0x0003929b) ai5_sk_right_pane_t1

0x9cb5,	// (0x0003435a) ai5_sk_middle_pane_g1

0x9cad,	// (0x00034352) ai5_sk_middle_pane_g2

0x9ccd,	// (0x00034372) ai5_sk_middle_pane_g3

0xebe6,	// (0x0003928b) ai5_sk_middle_pane_g4

0xebc0,	// (0x00039265) ai5_sk_middle_pane_g5

0xec04,	// (0x000392a9) ai5_sk_middle_pane_g6

0xec0c,	// (0x000392b1) ai5_sk_middle_pane_g7

0x0006,

0xfe4d,	// (0x0003a4f2) ai5_sk_middle_pane_g

0x97e1,	// (0x00033e86) aid_touch_area_size_lc0_ParamLimits

0x97e1,	// (0x00033e86) aid_touch_area_size_lc0

0x66fb,	// (0x00030da0) cell_hwr_candidate_pane_t1_ParamLimits

0x97fd,	// (0x00033ea2) aid_touch_navi_pane

0x9ad0,	// (0x00034175) status_dt_navi_pane_ParamLimits

0x9ad0,	// (0x00034175) status_dt_navi_pane

0x9add,	// (0x00034182) status_dt_sta_pane_ParamLimits

0x9add,	// (0x00034182) status_dt_sta_pane

0xec14,	// (0x000392b9) dt_sta_controll_pane

0xec21,	// (0x000392c6) dt_sta_indi_pane

0xec32,	// (0x000392d7) dt_sta_title_pane

0x81cf,	// (0x00032874) bg_dt_sta_indi_pane_ParamLimits

0x81cf,	// (0x00032874) bg_dt_sta_indi_pane

0xec45,	// (0x000392ea) dt_sta_battery_pane

0xec4d,	// (0x000392f2) dt_sta_indi_pane_g1

0xec56,	// (0x000392fb) dt_sta_indi_pane_g2

0xec5f,	// (0x00039304) dt_sta_indi_pane_g3

0x0002,

0xfe5c,	// (0x0003a501) dt_sta_indi_pane_g

0xec68,	// (0x0003930d) dt_sta_signal_pane

0x87b5,	// (0x00032e5a) bg_dt_sta_title_pane_ParamLimits

0x87b5,	// (0x00032e5a) bg_dt_sta_title_pane

0xec71,	// (0x00039316) dt_sta_title_pane_g1

0xec79,	// (0x0003931e) dt_sta_title_pane_t1_ParamLimits

0xec79,	// (0x0003931e) dt_sta_title_pane_t1

0x7e52,	// (0x000324f7) bg_dt_sta_control_pane

0xec8e,	// (0x00039333) dt_sta_controll_pane_g1

0xec97,	// (0x0003933c) bg_dt_sta_title_pane_g1

0xeca0,	// (0x00039345) bg_dt_sta_title_pane_g2

0xeca9,	// (0x0003934e) bg_dt_sta_title_pane_g3

0x0002,

0xfe63,	// (0x0003a508) bg_dt_sta_title_pane_g

0xc2af,	// (0x00036954) bg_dt_sta_indi_pane_g1

0xecb2,	// (0x00039357) dt_sta_signal_pane_g1

0xecba,	// (0x0003935f) dt_sta_signal_pane_g2

0x0001,

0xfe6a,	// (0x0003a50f) dt_sta_signal_pane_g

0xecc2,	// (0x00039367) dt_sta_battery_pane_g1

0xeccb,	// (0x00039370) dt_sta_battery_pane_t1

0xc2af,	// (0x00036954) bg_dt_sta_control_pane_g1

0x8f4b,	// (0x000335f0) fep_china_uni_eep_pane

0x8f53,	// (0x000335f8) fep_china_uni_entry_pane_ParamLimits

0x8f63,	// (0x00033608) popup_fep_china_uni_window_g1_ParamLimits

0x8f73,	// (0x00033618) popup_fep_china_uni_window_g2_ParamLimits

0x8f73,	// (0x00033618) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00039dc2) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00039dc2) popup_fep_china_uni_window_g

0xecda,	// (0x0003937f) fep_china_uni_eep_pane_g1

0xece2,	// (0x00039387) fep_china_uni_eep_pane_t1

0xe762,	// (0x00038e07) aid_touch_area_size_smil_player

0x994d,	// (0x00033ff2) lc0_clock_pane

0x9b34,	// (0x000341d9) status_pane_g5_ParamLimits

0x9b34,	// (0x000341d9) status_pane_g5

0x5bc1,	// (0x00030266) popup_keymap_window

0x9af2,	// (0x00034197) status_icon_pane

0xe94c,	// (0x00038ff1) cell_ai5_widget_pane_g3_ParamLimits

0xe963,	// (0x00039008) cell_ai5_widget_pane_g4_ParamLimits

0xe96f,	// (0x00039014) cell_ai5_widget_pane_g5_ParamLimits

0xe993,	// (0x00039038) cell_ai5_widget_pane_g8_ParamLimits

0xe993,	// (0x00039038) cell_ai5_widget_pane_g8

0xe9a7,	// (0x0003904c) cell_ai5_widget_pane_g9_ParamLimits

0xe9a7,	// (0x0003904c) cell_ai5_widget_pane_g9

0xe9bb,	// (0x00039060) cell_ai5_widget_pane_g10_ParamLimits

0xe9bb,	// (0x00039060) cell_ai5_widget_pane_g10

0xecf1,	// (0x00039396) status_icon_pane_g1

0x7e52,	// (0x000324f7) bg_popup_sub_pane_cp13

0xecf9,	// (0x0003939e) popup_keymap_window_t1

0x9721,	// (0x00033dc6) control_pane_g6_ParamLimits

0x9721,	// (0x00033dc6) control_pane_g6

0x972e,	// (0x00033dd3) control_pane_g7_ParamLimits

0x972e,	// (0x00033dd3) control_pane_g7

0x973b,	// (0x00033de0) control_pane_g8_ParamLimits

0x973b,	// (0x00033de0) control_pane_g8

0xec14,	// (0x000392b9) dt_sta_controll_pane_ParamLimits

0xec21,	// (0x000392c6) dt_sta_indi_pane_ParamLimits

0xec32,	// (0x000392d7) dt_sta_title_pane_ParamLimits

0x86ed,	// (0x00032d92) aid_size_touch_scroll_bar_cale

0x4b09,	// (0x0002f1ae) popup_discreet_window_ParamLimits

0x4b09,	// (0x0002f1ae) popup_discreet_window

0x4b91,	// (0x0002f236) popup_sk_window

0xa320,	// (0x000349c5) bg_popup_sub_pane_cp28_ParamLimits

0xa320,	// (0x000349c5) bg_popup_sub_pane_cp28

0xed07,	// (0x000393ac) popup_discreet_window_g1_ParamLimits

0xed07,	// (0x000393ac) popup_discreet_window_g1

0xed27,	// (0x000393cc) popup_discreet_window_t1_ParamLimits

0xed27,	// (0x000393cc) popup_discreet_window_t1

0xed45,	// (0x000393ea) popup_discreet_window_t2_ParamLimits

0xed45,	// (0x000393ea) popup_discreet_window_t2

0x0002,

0xfe6f,	// (0x0003a514) popup_discreet_window_t_ParamLimits

0xfe6f,	// (0x0003a514) popup_discreet_window_t

0x70e5,	// (0x0003178a) popup_sk_window_g1

0x70ef,	// (0x00031794) popup_sk_window_g2

0x0001,

0xfe76,	// (0x0003a51b) popup_sk_window_g

0x70f7,	// (0x0003179c) popup_sk_window_t1

0x7105,	// (0x000317aa) popup_sk_window_t1_copy1

0xe93c,	// (0x00038fe1) cell_ai5_widget_pane_g2_ParamLimits

0xea95,	// (0x0003913a) cell_ai5_widget_pane_t9_ParamLimits

0xea95,	// (0x0003913a) cell_ai5_widget_pane_t9

0x7e52,	// (0x000324f7) main_fep_fshwr2_pane

0x7113,	// (0x000317b8) aid_fshwr2_btn_pane

0x711f,	// (0x000317c4) aid_fshwr2_syb_pane

0x712b,	// (0x000317d0) aid_fshwr2_txt_pane

0x7137,	// (0x000317dc) fshwr2_func_candi_pane

0x714c,	// (0x000317f1) fshwr2_hwr_syb_pane

0x715c,	// (0x00031801) fshwr2_icf_pane

0x4a30,	// (0x0002f0d5) fshwr2_icf_bg_pane

0x7185,	// (0x0003182a) fshwr2_icf_pane_t1_ParamLimits

0x7185,	// (0x0003182a) fshwr2_icf_pane_t1

0x8e39,	// (0x000334de) fshwr2_func_candi_pane_g1

0xed97,	// (0x0003943c) fshwr2_func_candi_row_pane_ParamLimits

0xed97,	// (0x0003943c) fshwr2_func_candi_row_pane

0x719d,	// (0x00031842) cell_fshwr2_syb_pane_ParamLimits

0x719d,	// (0x00031842) cell_fshwr2_syb_pane

0x66cc,	// (0x00030d71) fshwr2_hwr_syb_pane_g1_ParamLimits

0x66cc,	// (0x00030d71) fshwr2_hwr_syb_pane_g1

0x4a30,	// (0x0002f0d5) bg_popup_call_pane_cp01

0x71b3,	// (0x00031858) fshwr2_func_candi_cell_pane_ParamLimits

0x71b3,	// (0x00031858) fshwr2_func_candi_cell_pane

0xeda7,	// (0x0003944c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeda7,	// (0x0003944c) fshwr2_func_candi_cell_bg_pane

0x71fe,	// (0x000318a3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x71fe,	// (0x000318a3) fshwr2_func_candi_cell_pane_g1

0x7226,	// (0x000318cb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7226,	// (0x000318cb) fshwr2_func_candi_cell_pane_t1

0x4a30,	// (0x0002f0d5) bg_button_pane_cp08

0xedb3,	// (0x00039458) cell_fshwr2_syb_bg_pane

0x7239,	// (0x000318de) cell_fshwr2_syb_bg_pane_g1

0x7241,	// (0x000318e6) cell_fshwr2_syb_bg_pane_t1

0x87b5,	// (0x00032e5a) main_tmo_pane

0xae3b,	// (0x000354e0) uni_indicator_pane_g1_ParamLimits

0xae51,	// (0x000354f6) uni_indicator_pane_g2_ParamLimits

0xae67,	// (0x0003550c) uni_indicator_pane_g3_ParamLimits

0xae7a,	// (0x0003551f) uni_indicator_pane_g4_ParamLimits

0xae7a,	// (0x0003551f) uni_indicator_pane_g4

0xae8e,	// (0x00035533) uni_indicator_pane_g5_ParamLimits

0xae8e,	// (0x00035533) uni_indicator_pane_g5

0xae8e,	// (0x00035533) uni_indicator_pane_g6_ParamLimits

0xae8e,	// (0x00035533) uni_indicator_pane_g6

0xf921,	// (0x00039fc6) uni_indicator_pane_g_ParamLimits

0xd78a,	// (0x00037e2f) popup_tmo_note_window_ParamLimits

0xd78a,	// (0x00037e2f) popup_tmo_note_window

0x6965,	// (0x0003100a) fshwr2_bg_pane

0x7217,	// (0x000318bc) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7217,	// (0x000318bc) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe7b,	// (0x0003a520) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe7b,	// (0x0003a520) fshwr2_func_candi_cell_pane_g

0x66b4,	// (0x00030d59) bg_popup_window_pane_cp01

0x7250,	// (0x000318f5) bg_popup_window_pane_g1_cp01

0xedbb,	// (0x00039460) bg_popup_window_pane_cp22_ParamLimits

0xedbb,	// (0x00039460) bg_popup_window_pane_cp22

0xedc9,	// (0x0003946e) listscroll_tmo_link_pane_ParamLimits

0xedc9,	// (0x0003946e) listscroll_tmo_link_pane

0xee09,	// (0x000394ae) popup_tmo_note_window_g1_ParamLimits

0xee09,	// (0x000394ae) popup_tmo_note_window_g1

0xee16,	// (0x000394bb) tmo_note_info_pane_ParamLimits

0xee16,	// (0x000394bb) tmo_note_info_pane

0xee30,	// (0x000394d5) list_tmo_note_info_pane_g1_ParamLimits

0xee30,	// (0x000394d5) list_tmo_note_info_pane_g1

0xee47,	// (0x000394ec) list_tmo_note_info_pane_g2_ParamLimits

0xee47,	// (0x000394ec) list_tmo_note_info_pane_g2

0x0001,

0xfe80,	// (0x0003a525) list_tmo_note_info_pane_g_ParamLimits

0xfe80,	// (0x0003a525) list_tmo_note_info_pane_g

0xee63,	// (0x00039508) list_tmo_note_info_text_pane_ParamLimits

0xee63,	// (0x00039508) list_tmo_note_info_text_pane

0xeee4,	// (0x00039589) list_tmo_link_pane

0xeef1,	// (0x00039596) scroll_pane_cp20

0xeefe,	// (0x000395a3) list_single_tmo_link_pane_ParamLimits

0xeefe,	// (0x000395a3) list_single_tmo_link_pane

0xef0e,	// (0x000395b3) list_single_tmo_link_pane_t1

0xef1c,	// (0x000395c1) list_tmo_note_info_text_pane_t1_ParamLimits

0xef1c,	// (0x000395c1) list_tmo_note_info_text_pane_t1

0x886c,	// (0x00032f11) aid_size_touch_scroll_bar_cp01_ParamLimits

0x886c,	// (0x00032f11) aid_size_touch_scroll_bar_cp01

0x5314,	// (0x0002f9b9) aid_size_touch_slider_marker

0x4b79,	// (0x0002f21e) popup_settings_window_ParamLimits

0x4b79,	// (0x0002f21e) popup_settings_window

0x74c6,	// (0x00031b6b) popup_candi_list_indi_window

0x97fd,	// (0x00033ea2) aid_touch_navi_pane_ParamLimits

0x68c0,	// (0x00030f65) rs_clock_indi_pane

0x68c9,	// (0x00030f6e) sctrl_sk_bottom_pane_ParamLimits

0x68da,	// (0x00030f7f) sctrl_sk_top_pane_ParamLimits

0x69dd,	// (0x00031082) popup_fep_tooltip_window

0xe8b2,	// (0x00038f57) aid_size_cell_widget_grid_ParamLimits

0xe927,	// (0x00038fcc) cell_ai5_widget_pane_g1_ParamLimits

0xe927,	// (0x00038fcc) cell_ai5_widget_pane_g1

0xe97b,	// (0x00039020) cell_ai5_widget_pane_g6_ParamLimits

0xe987,	// (0x0003902c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfdfe,	// (0x0003a4a3) cell_ai5_widget_pane_g_ParamLimits

0xfdfe,	// (0x0003a4a3) cell_ai5_widget_pane_g

0xeab9,	// (0x0003915e) cell_ai5_widget_pane_t10_ParamLimits

0xeab9,	// (0x0003915e) cell_ai5_widget_pane_t10

0xead7,	// (0x0003917c) grid_ai5_widget_pane_ParamLimits

0xeb78,	// (0x0003921d) cell_contacts_ai5_widget_pane_ParamLimits

0xeb78,	// (0x0003921d) cell_contacts_ai5_widget_pane

0xed5a,	// (0x000393ff) popup_discreet_window_t3_ParamLimits

0xed5a,	// (0x000393ff) popup_discreet_window_t3

0x7171,	// (0x00031816) popup_fshwr2_char_preview_window_ParamLimits

0x7171,	// (0x00031816) popup_fshwr2_char_preview_window

0xee81,	// (0x00039526) tmo_note_info_pane_t1

0xee96,	// (0x0003953b) tmo_note_info_pane_t2

0xeeab,	// (0x00039550) tmo_note_info_pane_t3

0xeec0,	// (0x00039565) tmo_note_info_pane_t4

0xeed2,	// (0x00039577) tmo_note_info_pane_t5

0x0004,

0xfe85,	// (0x0003a52a) tmo_note_info_pane_t

0xeee4,	// (0x00039589) list_tmo_link_pane_ParamLimits

0xeef1,	// (0x00039596) scroll_pane_cp20_ParamLimits

0x4a30,	// (0x0002f0d5) bg_popup_fep_char_preview_window_cp01

0xef35,	// (0x000395da) popup_fshwr2_char_preview_window_t1

0xef43,	// (0x000395e8) popup_candi_list_indi_window_g1

0xef4c,	// (0x000395f1) bg_cell_contacts_ai5_widget_pane

0xef58,	// (0x000395fd) cell_contacts_ai5_widget_pane_g1

0xc94d,	// (0x00036ff2) cell_contacts_ai5_widget_pane_g2

0xef6d,	// (0x00039612) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe90,	// (0x0003a535) cell_contacts_ai5_widget_pane_g

0xef79,	// (0x0003961e) cell_contacts_ai5_widget_pane_t1

0x87b5,	// (0x00032e5a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff0,	// (0x00039695) settings_container_pane

0x944c,	// (0x00033af1) listscroll_set_pane_copy1

0xb9b4,	// (0x00036059) scroll_pane_cp121_copy1

0xa0d1,	// (0x00034776) set_content_pane_copy1

0xeffc,	// (0x000396a1) aid_height_set_list_copy1_ParamLimits

0xeffc,	// (0x000396a1) aid_height_set_list_copy1

0xb086,	// (0x0003572b) aid_size_parent_copy1_ParamLimits

0xb086,	// (0x0003572b) aid_size_parent_copy1

0xf008,	// (0x000396ad) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf008,	// (0x000396ad) button_value_adjust_pane_cp6_copy1

0x979b,	// (0x00033e40) list_highlight_pane_cp2_copy1_ParamLimits

0x979b,	// (0x00033e40) list_highlight_pane_cp2_copy1

0xf01c,	// (0x000396c1) list_set_pane_copy1_ParamLimits

0xf01c,	// (0x000396c1) list_set_pane_copy1

0xef8b,	// (0x00039630) main_pane_set_t1_copy1_ParamLimits

0xef8b,	// (0x00039630) main_pane_set_t1_copy1

0xefc5,	// (0x0003966a) main_pane_set_t2_copy1_ParamLimits

0xefc5,	// (0x0003966a) main_pane_set_t2_copy1

0xf0c9,	// (0x0003976e) main_pane_set_t3_copy1

0xf0d7,	// (0x0003977c) main_pane_set_t4_copy1

0xefe4,	// (0x00039689) set_content_pane_g1_copy1_ParamLimits

0xefe4,	// (0x00039689) set_content_pane_g1_copy1

0xf0e5,	// (0x0003978a) setting_code_pane_copy1

0xf0ed,	// (0x00039792) setting_slider_graphic_pane_copy1

0xf0ed,	// (0x00039792) setting_slider_pane_copy1

0xf0ed,	// (0x00039792) setting_text_pane_copy1

0xf0ed,	// (0x00039792) setting_volume_pane_copy1

0xf0e5,	// (0x0003978a) settings_code_pane_cp2_copy1

0xf0f5,	// (0x0003979a) settings_code_pane_cp_copy1_ParamLimits

0xf0f5,	// (0x0003979a) settings_code_pane_cp_copy1

0x7259,	// (0x000318fe) volume_set_pane_copy1

0xf109,	// (0x000397ae) volume_set_pane_g10_copy1

0xf111,	// (0x000397b6) volume_set_pane_g1_copy1

0xf119,	// (0x000397be) volume_set_pane_g2_copy1

0xf121,	// (0x000397c6) volume_set_pane_g3_copy1

0xf129,	// (0x000397ce) volume_set_pane_g4_copy1

0xf131,	// (0x000397d6) volume_set_pane_g5_copy1

0xf139,	// (0x000397de) volume_set_pane_g6_copy1

0xf141,	// (0x000397e6) volume_set_pane_g7_copy1

0xf149,	// (0x000397ee) volume_set_pane_g8_copy1

0xf151,	// (0x000397f6) volume_set_pane_g9_copy1

0x7f46,	// (0x000325eb) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f46,	// (0x000325eb) bg_set_opt_pane_cp_copy1

0x7261,	// (0x00031906) setting_slider_pane_t1_copy1_ParamLimits

0x7261,	// (0x00031906) setting_slider_pane_t1_copy1

0x727f,	// (0x00031924) setting_slider_pane_t2_copy1_ParamLimits

0x727f,	// (0x00031924) setting_slider_pane_t2_copy1

0x7299,	// (0x0003193e) setting_slider_pane_t3_copy1_ParamLimits

0x7299,	// (0x0003193e) setting_slider_pane_t3_copy1

0x72b1,	// (0x00031956) slider_set_pane_copy1_ParamLimits

0x72b1,	// (0x00031956) slider_set_pane_copy1

0x880d,	// (0x00032eb2) set_opt_bg_pane_g1_copy2

0x8815,	// (0x00032eba) set_opt_bg_pane_g2_copy2

0xf159,	// (0x000397fe) set_opt_bg_pane_g3_copy2

0x8825,	// (0x00032eca) set_opt_bg_pane_g4_copy2

0x882d,	// (0x00032ed2) set_opt_bg_pane_g5_copy2

0x8835,	// (0x00032eda) set_opt_bg_pane_g6_copy2

0xf163,	// (0x00039808) set_opt_bg_pane_g7_copy2

0xf16b,	// (0x00039810) set_opt_bg_pane_g8_copy2

0xf175,	// (0x0003981a) set_opt_bg_pane_g9_copy2

0x72c7,	// (0x0003196c) aid_size_touch_slider_mark_copy1_ParamLimits

0x72c7,	// (0x0003196c) aid_size_touch_slider_mark_copy1

0xf17f,	// (0x00039824) slider_set_pane_g1_copy1

0x72db,	// (0x00031980) slider_set_pane_g2_copy1

0x62f5,	// (0x0003099a) slider_set_pane_g3_copy1_ParamLimits

0x62f5,	// (0x0003099a) slider_set_pane_g3_copy1

0x6309,	// (0x000309ae) slider_set_pane_g4_copy1_ParamLimits

0x6309,	// (0x000309ae) slider_set_pane_g4_copy1

0x6321,	// (0x000309c6) slider_set_pane_g5_copy1_ParamLimits

0x6321,	// (0x000309c6) slider_set_pane_g5_copy1

0x62f5,	// (0x0003099a) slider_set_pane_g6_copy1_ParamLimits

0x62f5,	// (0x0003099a) slider_set_pane_g6_copy1

0x72e3,	// (0x00031988) slider_set_pane_g7_copy1_ParamLimits

0x72e3,	// (0x00031988) slider_set_pane_g7_copy1

0x7e66,	// (0x0003250b) bg_set_opt_pane_cp2_copy1

0xf188,	// (0x0003982d) setting_slider_graphic_pane_g1_copy1

0xf191,	// (0x00039836) setting_slider_graphic_pane_t1_copy1

0xf1a1,	// (0x00039846) setting_slider_graphic_pane_t2_copy1

0xf1b1,	// (0x00039856) slider_set_pane_cp_copy1

0xf1c1,	// (0x00039866) input_focus_pane_cp1_copy1

0xf1ca,	// (0x0003986f) list_set_text_pane_copy1

0xf1d2,	// (0x00039877) setting_text_pane_g1_copy1

0x4d1a,	// (0x0002f3bf) set_text_pane_t1_copy1

0xf1c1,	// (0x00039866) input_focus_pane_cp2_copy1

0xf1d2,	// (0x00039877) setting_code_pane_g1_copy1

0xf1db,	// (0x00039880) setting_code_pane_t1_copy1

0xf1e9,	// (0x0003988e) list_set_graphic_pane_copy1

0x7e66,	// (0x0003250b) bg_set_opt_pane_cp4_copy1

0x9147,	// (0x000337ec) list_set_graphic_pane_g1_copy1_ParamLimits

0x9147,	// (0x000337ec) list_set_graphic_pane_g1_copy1

0xf1fc,	// (0x000398a1) list_set_graphic_pane_g2_copy1

0x915f,	// (0x00033804) list_set_graphic_pane_t1_copy1_ParamLimits

0x915f,	// (0x00033804) list_set_graphic_pane_t1_copy1

0xc2af,	// (0x00036954) rs_clock_indi_pane_g1

0xf204,	// (0x000398a9) rs_clock_indi_pane_t1

0xf212,	// (0x000398b7) rs_indi_pane

0xf21a,	// (0x000398bf) rs_indi_pane_g1

0xf223,	// (0x000398c8) rs_indi_pane_g2

0xf22c,	// (0x000398d1) rs_indi_pane_g3

0x0002,

0xfe97,	// (0x0003a53c) rs_indi_pane_g

0x944c,	// (0x00033af1) bg_popup_preview_window_pane_cp03

0xf235,	// (0x000398da) popup_fep_tooltip_window_t1

0xcf2b,	// (0x000375d0) popup_note2_window_g2_ParamLimits

0xcf2b,	// (0x000375d0) popup_note2_window_g2

0x0001,

0xfc63,	// (0x0003a308) popup_note2_window_g_ParamLimits

0xfc63,	// (0x0003a308) popup_note2_window_g

0xd426,	// (0x00037acb) bg_popup_sub_pane_cp11_ParamLimits

0xd433,	// (0x00037ad8) cell_ai3_links_pane_g1_ParamLimits

0xd44a,	// (0x00037aef) cell_ai3_links_pane_t1

0x4d1a,	// (0x0002f3bf) set_text_pane_t1_copy1_ParamLimits

0x935d,	// (0x00033a02) cell_graphic_popup_pane_cp2_ParamLimits

0x935d,	// (0x00033a02) cell_graphic_popup_pane_cp2

0xf243,	// (0x000398e8) cell_graphic_popup_pane_g1_cp2

0x8500,	// (0x00032ba5) cell_graphic_popup_pane_g2_cp2

0xf24b,	// (0x000398f0) cell_graphic_popup_pane_g3_cp2

0xf253,	// (0x000398f8) cell_graphic_popup_pane_t2_cp2

0x8511,	// (0x00032bb6) grid_highlight_pane_cp3_cp2

0x8b52,	// (0x000331f7) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x87b5,	// (0x00032e5a) main_tmo_pane_ParamLimits

0xd77e,	// (0x00037e23) popup_tmo_big_image_note_window

0xe916,	// (0x00038fbb) cell_ai5_widget_list_pane

0xe91e,	// (0x00038fc3) cell_ai5_widget_lrg_icon_pane

0xee81,	// (0x00039526) tmo_note_info_pane_t1_ParamLimits

0xee96,	// (0x0003953b) tmo_note_info_pane_t2_ParamLimits

0xeeab,	// (0x00039550) tmo_note_info_pane_t3_ParamLimits

0xeec0,	// (0x00039565) tmo_note_info_pane_t4_ParamLimits

0xeed2,	// (0x00039577) tmo_note_info_pane_t5_ParamLimits

0xfe85,	// (0x0003a52a) tmo_note_info_pane_t_ParamLimits

0xeff0,	// (0x00039695) settings_container_pane_ParamLimits

0xf1b9,	// (0x0003985e) indicator_popup_pane_cp5

0xf1b9,	// (0x0003985e) indicator_popup_pane_cp6

0xf1e9,	// (0x0003988e) list_set_graphic_pane_copy1_ParamLimits

0x7e52,	// (0x000324f7) bg_popup_window_pane_cp23

0xf261,	// (0x00039906) popup_tmo_big_image_note_window_g1

0xf26b,	// (0x00039910) popup_tmo_big_image_note_window_t1

0xf27b,	// (0x00039920) popup_tmo_big_image_note_window_t2

0xf28b,	// (0x00039930) popup_tmo_big_image_note_window_t3

0x0002,

0xfe9e,	// (0x0003a543) popup_tmo_big_image_note_window_t

0xc2af,	// (0x00036954) cell_ai5_widget_lrg_icon_pane_g1

0xf29b,	// (0x00039940) cell_ai5_widget_lrg_icon_pane_t1

0xf2a9,	// (0x0003994e) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a9,	// (0x0003994e) cell_ai5_widget_list_row_pane

0xf2c0,	// (0x00039965) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c0,	// (0x00039965) cell_ai5_widget_list_row_pane_g1

0xf2cd,	// (0x00039972) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cd,	// (0x00039972) cell_ai5_widget_list_row_pane_t1

0xf2fe,	// (0x000399a3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2fe,	// (0x000399a3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea5,	// (0x0003a54a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea5,	// (0x0003a54a) cell_ai5_widget_list_row_pane_t

0x4a30,	// (0x0002f0d5) main_fep_vtchi_ss_pane

0xf342,	// (0x000399e7) popup_fep_char_pre_window

0xf34a,	// (0x000399ef) popup_fep_ituss_window

0xf36b,	// (0x00039a10) popup_fep_vkbss_window

0xf395,	// (0x00039a3a) grid_vkbss_keypad_pane_ParamLimits

0xf395,	// (0x00039a3a) grid_vkbss_keypad_pane

0xf3a5,	// (0x00039a4a) ituss_keypad_pane

0x7305,	// (0x000319aa) aid_vkbss_key_offset_ParamLimits

0x7305,	// (0x000319aa) aid_vkbss_key_offset

0x7311,	// (0x000319b6) cell_vkbss_key_pane_ParamLimits

0x7311,	// (0x000319b6) cell_vkbss_key_pane

0xf3b4,	// (0x00039a59) bg_cell_vkbss_key_g1_ParamLimits

0xf3b4,	// (0x00039a59) bg_cell_vkbss_key_g1

0xf3c0,	// (0x00039a65) cell_vkbss_key_3p_pane_ParamLimits

0xf3c0,	// (0x00039a65) cell_vkbss_key_3p_pane

0xf3d4,	// (0x00039a79) cell_vkbss_key_g1_ParamLimits

0xf3d4,	// (0x00039a79) cell_vkbss_key_g1

0xf3e8,	// (0x00039a8d) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x00039a8d) cell_vkbss_key_t1

0x7327,	// (0x000319cc) cell_ituss_key_pane_ParamLimits

0x7327,	// (0x000319cc) cell_ituss_key_pane

0xf413,	// (0x00039ab8) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x00039ab8) bg_cell_ituss_key_g1

0xf41f,	// (0x00039ac4) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x00039ac4) cell_ituss_key_pane_g1

0x7338,	// (0x000319dd) cell_ituss_key_pane_g2_ParamLimits

0x7338,	// (0x000319dd) cell_ituss_key_pane_g2

0x0002,

0xfeac,	// (0x0003a551) cell_ituss_key_pane_g_ParamLimits

0xfeac,	// (0x0003a551) cell_ituss_key_pane_g

0x7364,	// (0x00031a09) cell_ituss_key_t1_ParamLimits

0x7364,	// (0x00031a09) cell_ituss_key_t1

0x739e,	// (0x00031a43) cell_ituss_key_t2_ParamLimits

0x739e,	// (0x00031a43) cell_ituss_key_t2

0x73cf,	// (0x00031a74) cell_ituss_key_t3_ParamLimits

0x73cf,	// (0x00031a74) cell_ituss_key_t3

0x739e,	// (0x00031a43) cell_ituss_key_t4_ParamLimits

0x739e,	// (0x00031a43) cell_ituss_key_t4

0x0004,

0xfeb3,	// (0x0003a558) cell_ituss_key_t_ParamLimits

0xfeb3,	// (0x0003a558) cell_ituss_key_t

0xf44b,	// (0x00039af0) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x00039af8) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x00039b00) cell_vkbss_key_3p_pane_g3

0x0002,

0xfebe,	// (0x0003a563) cell_vkbss_key_3p_pane_g

0x4a30,	// (0x0002f0d5) bg_popup_fep_char_preview_window_cp02

0x7412,	// (0x00031ab7) popup_fep_char_pre_window_t1

0xe8a8,	// (0x00038f4d) main_ai5_sk_pane

0xef4c,	// (0x000395f1) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef58,	// (0x000395fd) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc94d,	// (0x00036ff2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef6d,	// (0x00039612) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe90,	// (0x0003a535) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef79,	// (0x0003961e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x87b5,	// (0x00032e5a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x00039b08) main_ai5_sk_pane_g1

0xa159,	// (0x000347fe) popup_query_code_window_g1

0xf360,	// (0x00039a05) popup_fep_vkb_icf_pane

0xf37f,	// (0x00039a24) popup_fep_vtchi_icf_pane

0xf46c,	// (0x00039b11) bg_icf_pane

0xf478,	// (0x00039b1d) list_vkb_icf_pane

0xf487,	// (0x00039b2c) bg_icf_pane_cp01

0xf49a,	// (0x00039b3f) vtchi_icf_list_pane

0xf4aa,	// (0x00039b4f) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x00039b4f) list_vkb_icf_pane_t1

0xf4c0,	// (0x00039b65) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x00039b65) vtchi_icf_list_pane_t1

0xf34a,	// (0x000399ef) popup_fep_ituss_window_ParamLimits

0xf37f,	// (0x00039a24) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a5,	// (0x00039a4a) ituss_keypad_pane_ParamLimits

0x72f9,	// (0x0003199e) ituss_sks_pane

0xf46c,	// (0x00039b11) bg_icf_pane_ParamLimits

0xf326,	// (0x000399cb) icf_edit_indi_pane_ParamLimits

0xf326,	// (0x000399cb) icf_edit_indi_pane

0xf478,	// (0x00039b1d) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x00039b2c) bg_icf_pane_cp01_ParamLimits

0xf335,	// (0x000399da) icf_edit_indi_pane_cp01_ParamLimits

0xf335,	// (0x000399da) icf_edit_indi_pane_cp01

0xf4a2,	// (0x00039b47) vtchi_query_pane

0xc52d,	// (0x00036bd2) icf_edit_indi_pane_g1_ParamLimits

0xc52d,	// (0x00036bd2) icf_edit_indi_pane_g1

0xf531,	// (0x00039bd6) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00039bd6) icf_edit_indi_pane_g2

0x0001,

0x00c8,	// (0x0002a76d) icf_edit_indi_pane_g_ParamLimits

0x00c8,	// (0x0002a76d) icf_edit_indi_pane_g

0xf540,	// (0x00039be5) icf_edit_indi_pane_t1

0xf4da,	// (0x00039b7f) bg_input_focus_pane_cp042

0x86e4,	// (0x00032d89) vtchi_button_pane

0xf4e3,	// (0x00039b88) vtchi_query_pane_t1

0xf4f1,	// (0x00039b96) vtchi_query_pane_t2

0xf4ff,	// (0x00039ba4) vtchi_query_pane_t3

0x0002,

0xfec5,	// (0x0003a56a) vtchi_query_pane_t

0x4a30,	// (0x0002f0d5) bg_button_pane_cp13

0xf50d,	// (0x00039bb2) vtchi_button_pane_g1

0x7421,	// (0x00031ac6) ituss_sks_pane_g1

0x742c,	// (0x00031ad1) ituss_sks_pane_g2

0x0001,

0xfecc,	// (0x0003a571) ituss_sks_pane_g

0xf515,	// (0x00039bba) ituss_sks_pane_t1

0xf523,	// (0x00039bc8) ituss_sks_pane_t2

0x0001,

0xfed1,	// (0x0003a576) ituss_sks_pane_t

0xbd3a,	// (0x000363df) indicator_nsta_pane_cp_g1

0xbd42,	// (0x000363e7) indicator_nsta_pane_cp_g2

0xbd4a,	// (0x000363ef) indicator_nsta_pane_cp_g3

0xbd3a,	// (0x000363df) indicator_nsta_pane_cp_g4

0xbd42,	// (0x000363e7) indicator_nsta_pane_cp_g5

0xbd4a,	// (0x000363ef) indicator_nsta_pane_cp_g6

0x0005,

0xfaa1,	// (0x0003a146) indicator_nsta_pane_cp_g

0xe492,	// (0x00038b37) cell_graphic2_pane_t2_ParamLimits

0xe492,	// (0x00038b37) cell_graphic2_pane_t2

0x0001,

0xfda4,	// (0x0003a449) cell_graphic2_pane_t_ParamLimits

0xfda4,	// (0x0003a449) cell_graphic2_pane_t

0xe4bf,	// (0x00038b64) cell_graphic2_control_pane_t1

0x8efa,	// (0x0003359f) signal_pane_g3_ParamLimits

0x8efa,	// (0x0003359f) signal_pane_g3

0x8f0c,	// (0x000335b1) signal_pane_g4_ParamLimits

0x8f0c,	// (0x000335b1) signal_pane_g4

0xf310,	// (0x000399b5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf310,	// (0x000399b5) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x00039ade) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x00039ade) cell_ituss_key_pane_t1

0x9daa,	// (0x0003444f) form_field_data_wide_pane_vc_t2_ParamLimits

0x9daa,	// (0x0003444f) form_field_data_wide_pane_vc_t2

0x9dbe,	// (0x00034463) form_field_data_wide_pane_vc_t3_ParamLimits

0x9dbe,	// (0x00034463) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00039eae) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00039eae) form_field_data_wide_pane_vc_t

0xb9f6,	// (0x0003609b) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9f6,	// (0x0003609b) form_field_slider_wide_pane_vc_t3

0xbad4,	// (0x00036179) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbad4,	// (0x00036179) form_field_popup_wide_pane_vc_t2

0xbaeb,	// (0x00036190) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbaeb,	// (0x00036190) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa90,	// (0x0003a135) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa90,	// (0x0003a135) form_field_popup_wide_pane_vc_t

0x7113,	// (0x000317b8) aid_fshwr2_btn_pane_ParamLimits

0x711f,	// (0x000317c4) aid_fshwr2_syb_pane_ParamLimits

0x712b,	// (0x000317d0) aid_fshwr2_txt_pane_ParamLimits

0x6965,	// (0x0003100a) fshwr2_bg_pane_ParamLimits

0x7137,	// (0x000317dc) fshwr2_func_candi_pane_ParamLimits

0x714c,	// (0x000317f1) fshwr2_hwr_syb_pane_ParamLimits

0x715c,	// (0x00031801) fshwr2_icf_pane_ParamLimits

0x79ef,	// (0x00032094) list_double_graphic_pane_vc_g4_ParamLimits

0x79ef,	// (0x00032094) list_double_graphic_pane_vc_g4

0x7358,	// (0x000319fd) cell_ituss_key_pane_g3_ParamLimits

0x7358,	// (0x000319fd) cell_ituss_key_pane_g3

0x7400,	// (0x00031aa5) cell_ituss_key_t5_ParamLimits

0x7400,	// (0x00031aa5) cell_ituss_key_t5

0xf36b,	// (0x00039a10) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

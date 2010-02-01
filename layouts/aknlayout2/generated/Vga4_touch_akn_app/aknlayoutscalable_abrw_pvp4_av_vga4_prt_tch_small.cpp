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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0002c893 };

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
0x72c5,	// (0x00033b58) Screen

0x72d1,	// (0x00033b64) application_window_ParamLimits

0x72d1,	// (0x00033b64) application_window

0x3275,	// (0x0002fb08) screen_g1

0x4a3f,	// (0x000312d2) area_bottom_pane_ParamLimits

0x4a3f,	// (0x000312d2) area_bottom_pane

0x4aff,	// (0x00031392) area_top_pane_ParamLimits

0x4aff,	// (0x00031392) area_top_pane

0x4b9d,	// (0x00031430) main_pane_ParamLimits

0x4b9d,	// (0x00031430) main_pane

0x327f,	// (0x0002fb12) misc_graphics

0x951d,	// (0x00035db0) battery_pane_ParamLimits

0x951d,	// (0x00035db0) battery_pane

0xa230,	// (0x00036ac3) bg_status_flat_pane_g8

0xa238,	// (0x00036acb) bg_status_flat_pane_g9

0x95e5,	// (0x00035e78) context_pane_ParamLimits

0x95e5,	// (0x00035e78) context_pane

0x9709,	// (0x00035f9c) navi_pane_ParamLimits

0x9709,	// (0x00035f9c) navi_pane

0x9798,	// (0x0003602b) signal_pane_ParamLimits

0x9798,	// (0x0003602b) signal_pane

0x0008,

0xf88a,	// (0x0003c11d) bg_status_flat_pane_g

0x9805,	// (0x00036098) status_pane_g1_ParamLimits

0x9805,	// (0x00036098) status_pane_g1

0x9819,	// (0x000360ac) status_pane_g2_ParamLimits

0x9819,	// (0x000360ac) status_pane_g2

0x9825,	// (0x000360b8) status_pane_g3_ParamLimits

0x9825,	// (0x000360b8) status_pane_g3

0x0004,

0xf7b8,	// (0x0003c04b) status_pane_g_ParamLimits

0xf7b8,	// (0x0003c04b) status_pane_g

0x9859,	// (0x000360ec) title_pane_ParamLimits

0x9859,	// (0x000360ec) title_pane

0x9896,	// (0x00036129) uni_indicator_pane_ParamLimits

0x9896,	// (0x00036129) uni_indicator_pane

0x8e12,	// (0x000356a5) bg_list_pane_ParamLimits

0x8e12,	// (0x000356a5) bg_list_pane

0x8e32,	// (0x000356c5) find_pane

0x8e3a,	// (0x000356cd) listscroll_app_pane_ParamLimits

0x8e3a,	// (0x000356cd) listscroll_app_pane

0x8e46,	// (0x000356d9) listscroll_form_pane

0x8e4e,	// (0x000356e1) listscroll_gen_pane_ParamLimits

0x8e4e,	// (0x000356e1) listscroll_gen_pane

0x8e46,	// (0x000356d9) listscroll_set_pane

0x7e29,	// (0x000346bc) main_idle_act_pane

0x8aee,	// (0x00035381) main_idle_trad_pane

0x8aee,	// (0x00035381) main_list_empty_pane

0x8e74,	// (0x00035707) main_midp_pane

0x8e80,	// (0x00035713) main_pane_g1_ParamLimits

0x8e80,	// (0x00035713) main_pane_g1

0x8e8e,	// (0x00035721) popup_ai_message_window_ParamLimits

0x8e8e,	// (0x00035721) popup_ai_message_window

0x8f3e,	// (0x000357d1) popup_fep_china_uni_window_ParamLimits

0x8f3e,	// (0x000357d1) popup_fep_china_uni_window

0x8f9e,	// (0x00035831) popup_fep_japan_candidate_window_ParamLimits

0x8f9e,	// (0x00035831) popup_fep_japan_candidate_window

0x8fc8,	// (0x0003585b) popup_fep_japan_predictive_window_ParamLimits

0x8fc8,	// (0x0003585b) popup_fep_japan_predictive_window

0x8ffe,	// (0x00035891) popup_find_window

0x900b,	// (0x0003589e) popup_grid_graphic_window_ParamLimits

0x900b,	// (0x0003589e) popup_grid_graphic_window

0x9039,	// (0x000358cc) popup_large_graphic_colour_window

0x905f,	// (0x000358f2) popup_menu_window_ParamLimits

0x905f,	// (0x000358f2) popup_menu_window

0x9229,	// (0x00035abc) popup_note_image_window

0x9213,	// (0x00035aa6) popup_note_wait_window_ParamLimits

0x9213,	// (0x00035aa6) popup_note_wait_window

0x9213,	// (0x00035aa6) popup_note_window_ParamLimits

0x9213,	// (0x00035aa6) popup_note_window

0x928f,	// (0x00035b22) popup_query_code_window_ParamLimits

0x928f,	// (0x00035b22) popup_query_code_window

0x92a5,	// (0x00035b38) popup_query_data_code_window_ParamLimits

0x92a5,	// (0x00035b38) popup_query_data_code_window

0x92c8,	// (0x00035b5b) popup_query_data_window_ParamLimits

0x92c8,	// (0x00035b5b) popup_query_data_window

0x92ea,	// (0x00035b7d) popup_query_sat_info_window_ParamLimits

0x92ea,	// (0x00035b7d) popup_query_sat_info_window

0x9329,	// (0x00035bbc) popup_snote_single_graphic_window_ParamLimits

0x9329,	// (0x00035bbc) popup_snote_single_graphic_window

0x9329,	// (0x00035bbc) popup_snote_single_text_window_ParamLimits

0x9329,	// (0x00035bbc) popup_snote_single_text_window

0x9340,	// (0x00035bd3) popup_sub_window_general

0x9486,	// (0x00035d19) popup_window_general_ParamLimits

0x9486,	// (0x00035d19) popup_window_general

0x949f,	// (0x00035d32) power_save_pane

0x5ab2,	// (0x00032345) control_pane_g1_ParamLimits

0x5ab2,	// (0x00032345) control_pane_g1

0x5adb,	// (0x0003236e) control_pane_g2_ParamLimits

0x5adb,	// (0x0003236e) control_pane_g2

0x8dbb,	// (0x0003564e) control_pane_g3_ParamLimits

0x8dbb,	// (0x0003564e) control_pane_g3

0x0007,

0xf7a0,	// (0x0003c033) control_pane_g_ParamLimits

0xf7a0,	// (0x0003c033) control_pane_g

0x5b23,	// (0x000323b6) control_pane_t1_ParamLimits

0x5b23,	// (0x000323b6) control_pane_t1

0x5b75,	// (0x00032408) control_pane_t2_ParamLimits

0x5b75,	// (0x00032408) control_pane_t2

0x0002,

0xf7b1,	// (0x0003c044) control_pane_t_ParamLimits

0xf7b1,	// (0x0003c044) control_pane_t

0x8cdc,	// (0x0003556f) navi_navi_volume_pane_cp1

0x8ce5,	// (0x00035578) status_small_icon_pane

0x8ced,	// (0x00035580) status_small_pane_g1_ParamLimits

0x8ced,	// (0x00035580) status_small_pane_g1

0x8d21,	// (0x000355b4) status_small_pane_g2_ParamLimits

0x8d21,	// (0x000355b4) status_small_pane_g2

0x8d2d,	// (0x000355c0) status_small_pane_g3_ParamLimits

0x8d2d,	// (0x000355c0) status_small_pane_g3

0x8d39,	// (0x000355cc) status_small_pane_g4_ParamLimits

0x8d39,	// (0x000355cc) status_small_pane_g4

0x8d45,	// (0x000355d8) status_small_pane_g5_ParamLimits

0x8d45,	// (0x000355d8) status_small_pane_g5

0x8d54,	// (0x000355e7) status_small_pane_g6_ParamLimits

0x8d54,	// (0x000355e7) status_small_pane_g6

0x0007,

0xf78f,	// (0x0003c022) status_small_pane_g_ParamLimits

0xf78f,	// (0x0003c022) status_small_pane_g

0x8d84,	// (0x00035617) status_small_pane_t1

0x8da7,	// (0x0003563a) status_small_wait_pane_ParamLimits

0x8da7,	// (0x0003563a) status_small_wait_pane

0x8585,	// (0x00034e18) aid_levels_signal_ParamLimits

0x8585,	// (0x00034e18) aid_levels_signal

0x8597,	// (0x00034e2a) signal_pane_g1_ParamLimits

0x8597,	// (0x00034e2a) signal_pane_g1

0x85ac,	// (0x00034e3f) signal_pane_g2_ParamLimits

0x85ac,	// (0x00034e3f) signal_pane_g2

0x0001,

0xf724,	// (0x0003bfb7) signal_pane_g_ParamLimits

0xf724,	// (0x0003bfb7) signal_pane_g

0x85c1,	// (0x00034e54) context_pane_g1

0x72e1,	// (0x00033b74) title_pane_g1

0x730b,	// (0x00033b9e) title_pane_t1

0x7373,	// (0x00033c06) title_pane_t2

0x7399,	// (0x00033c2c) title_pane_t3

0x0002,

0xf573,	// (0x0003be06) title_pane_t

0x98ae,	// (0x00036141) aid_levels_battery_ParamLimits

0x98ae,	// (0x00036141) aid_levels_battery

0x98c2,	// (0x00036155) battery_pane_g1_ParamLimits

0x98c2,	// (0x00036155) battery_pane_g1

0x98d8,	// (0x0003616b) battery_pane_g2_ParamLimits

0x98d8,	// (0x0003616b) battery_pane_g2

0x0001,

0xf7c3,	// (0x0003c056) battery_pane_g_ParamLimits

0xf7c3,	// (0x0003c056) battery_pane_g

0xab80,	// (0x00037413) uni_indicator_pane_g1

0xab95,	// (0x00037428) uni_indicator_pane_g2

0xabab,	// (0x0003743e) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x0003c1c5) uni_indicator_pane_g

0x895c,	// (0x000351ef) navi_icon_pane_ParamLimits

0x895c,	// (0x000351ef) navi_icon_pane

0x88a3,	// (0x00035136) navi_midp_pane

0x8978,	// (0x0003520b) navi_navi_pane

0x8982,	// (0x00035215) navi_text_pane_ParamLimits

0x8982,	// (0x00035215) navi_text_pane

0x3275,	// (0x0002fb08) status_small_wait_pane_g1

0x77dd,	// (0x00034070) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x0003c1c0) status_small_wait_pane_g

0xa893,	// (0x00037126) navi_navi_icon_text_pane

0xa89b,	// (0x0003712e) navi_navi_pane_g1_ParamLimits

0xa89b,	// (0x0003712e) navi_navi_pane_g1

0xa8ad,	// (0x00037140) navi_navi_pane_g2_ParamLimits

0xa8ad,	// (0x00037140) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x0003c18e) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x0003c18e) navi_navi_pane_g

0xa8bf,	// (0x00037152) navi_navi_tabs_pane

0xa8c8,	// (0x0003715b) navi_navi_text_pane

0xa893,	// (0x00037126) navi_navi_volume_pane

0xa86c,	// (0x000370ff) navi_text_pane_t1

0xa85d,	// (0x000370f0) navi_icon_pane_g1

0xa7b0,	// (0x00037043) navi_navi_text_pane_t1

0x5f6a,	// (0x000327fd) navi_navi_volume_pane_g1

0x5f72,	// (0x00032805) volume_small_pane

0xa716,	// (0x00036fa9) navi_navi_icon_text_pane_g1

0xa71e,	// (0x00036fb1) navi_navi_icon_text_pane_t1

0x8978,	// (0x0003520b) navi_tabs_2_long_pane

0x8978,	// (0x0003520b) navi_tabs_2_pane

0x8978,	// (0x0003520b) navi_tabs_3_long_pane

0x8978,	// (0x0003520b) navi_tabs_3_pane

0x8978,	// (0x0003520b) navi_tabs_4_pane

0x5f4a,	// (0x000327dd) tabs_2_active_pane_ParamLimits

0x5f4a,	// (0x000327dd) tabs_2_active_pane

0x5f5a,	// (0x000327ed) tabs_2_passive_pane_ParamLimits

0x5f5a,	// (0x000327ed) tabs_2_passive_pane

0x5f18,	// (0x000327ab) tabs_3_active_pane_ParamLimits

0x5f18,	// (0x000327ab) tabs_3_active_pane

0x5f28,	// (0x000327bb) tabs_3_passive_pane_ParamLimits

0x5f28,	// (0x000327bb) tabs_3_passive_pane

0x5f39,	// (0x000327cc) tabs_3_passive_pane_cp_ParamLimits

0x5f39,	// (0x000327cc) tabs_3_passive_pane_cp

0x5ecc,	// (0x0003275f) tabs_4_active_pane_ParamLimits

0x5ecc,	// (0x0003275f) tabs_4_active_pane

0x5edf,	// (0x00032772) tabs_4_passive_pane_ParamLimits

0x5edf,	// (0x00032772) tabs_4_passive_pane

0x5ef0,	// (0x00032783) tabs_4_passive_pane_cp_ParamLimits

0x5ef0,	// (0x00032783) tabs_4_passive_pane_cp

0x5f01,	// (0x00032794) tabs_4_passive_pane_cp2_ParamLimits

0x5f01,	// (0x00032794) tabs_4_passive_pane_cp2

0x5ea8,	// (0x0003273b) tabs_2_long_active_pane_ParamLimits

0x5ea8,	// (0x0003273b) tabs_2_long_active_pane

0x5eba,	// (0x0003274d) tabs_2_long_passive_pane_ParamLimits

0x5eba,	// (0x0003274d) tabs_2_long_passive_pane

0x5e69,	// (0x000326fc) tabs_3_long_active_pane_ParamLimits

0x5e69,	// (0x000326fc) tabs_3_long_active_pane

0x5e7c,	// (0x0003270f) tabs_3_long_passive_pane_ParamLimits

0x5e7c,	// (0x0003270f) tabs_3_long_passive_pane

0x5e95,	// (0x00032728) tabs_3_long_passive_pane_cp_ParamLimits

0x5e95,	// (0x00032728) tabs_3_long_passive_pane_cp

0x5e0f,	// (0x000326a2) volume_small_pane_g1

0x5e18,	// (0x000326ab) volume_small_pane_g2

0x5e21,	// (0x000326b4) volume_small_pane_g3

0x5e2a,	// (0x000326bd) volume_small_pane_g4

0x5e33,	// (0x000326c6) volume_small_pane_g5

0x5e3c,	// (0x000326cf) volume_small_pane_g6

0x5e45,	// (0x000326d8) volume_small_pane_g7

0x5e4e,	// (0x000326e1) volume_small_pane_g8

0x5e57,	// (0x000326ea) volume_small_pane_g9

0x5e60,	// (0x000326f3) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x0003c15a) volume_small_pane_g

0x73ab,	// (0x00033c3e) bg_active_tab_pane_cp2_ParamLimits

0x73ab,	// (0x00033c3e) bg_active_tab_pane_cp2

0x73b9,	// (0x00033c4c) tabs_3_active_pane_g1

0x73c1,	// (0x00033c54) tabs_3_active_pane_t1

0x73ab,	// (0x00033c3e) bg_passive_tab_pane_cp2_ParamLimits

0x73ab,	// (0x00033c3e) bg_passive_tab_pane_cp2

0x73b9,	// (0x00033c4c) tabs_3_passive_pane_g1

0x73c1,	// (0x00033c54) tabs_3_passive_pane_t1

0x73ab,	// (0x00033c3e) bg_active_tab_pane_cp3_ParamLimits

0x73ab,	// (0x00033c3e) bg_active_tab_pane_cp3

0x73d3,	// (0x00033c66) tabs_4_active_pane_g1

0x73db,	// (0x00033c6e) tabs_4_active_pane_t1

0x73ab,	// (0x00033c3e) bg_passive_tab_pane_cp3_ParamLimits

0x73ab,	// (0x00033c3e) bg_passive_tab_pane_cp3

0x73d3,	// (0x00033c66) tabs_4_1_passive_pane_g1

0x73db,	// (0x00033c6e) tabs_4_1_passive_pane_t1

0x8e74,	// (0x00035707) list_highlight_pane_cp2

0xae0f,	// (0x000376a2) list_set_pane_ParamLimits

0xae0f,	// (0x000376a2) list_set_pane

0xaed7,	// (0x0003776a) main_pane_set_t1_ParamLimits

0xaed7,	// (0x0003776a) main_pane_set_t1

0xaef7,	// (0x0003778a) main_pane_set_t2_ParamLimits

0xaef7,	// (0x0003778a) main_pane_set_t2

0xaf0b,	// (0x0003779e) main_pane_set_t3_ParamLimits

0xaf0b,	// (0x0003779e) main_pane_set_t3

0xaf1f,	// (0x000377b2) main_pane_set_t4_ParamLimits

0xaf1f,	// (0x000377b2) main_pane_set_t4

0x0003,

0xf997,	// (0x0003c22a) main_pane_set_t_ParamLimits

0xf997,	// (0x0003c22a) main_pane_set_t

0xaf3f,	// (0x000377d2) setting_code_pane

0xaf49,	// (0x000377dc) setting_slider_graphic_pane

0xaf49,	// (0x000377dc) setting_slider_pane

0xaf49,	// (0x000377dc) setting_text_pane

0xaf49,	// (0x000377dc) setting_volume_pane

0x4df4,	// (0x00031687) volume_set_pane

0x73ab,	// (0x00033c3e) bg_set_opt_pane_cp

0x4dfe,	// (0x00031691) setting_slider_pane_t1

0x4e14,	// (0x000316a7) setting_slider_pane_t2

0x4e2e,	// (0x000316c1) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0003be0d) setting_slider_pane_t

0x4e46,	// (0x000316d9) slider_set_pane

0x327f,	// (0x0002fb12) bg_set_opt_pane_cp2

0x73ed,	// (0x00033c80) setting_slider_graphic_pane_g1

0x4e5c,	// (0x000316ef) setting_slider_graphic_pane_t1

0x4e6c,	// (0x000316ff) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0003be14) setting_slider_graphic_pane_t

0x4e7c,	// (0x0003170f) slider_set_pane_cp

0x327f,	// (0x0002fb12) input_focus_pane_cp1

0xadd0,	// (0x00037663) list_set_text_pane

0x3275,	// (0x0002fb08) setting_text_pane_g1

0x327f,	// (0x0002fb12) input_focus_pane_cp2

0x3275,	// (0x0002fb08) setting_code_pane_g1

0x73f6,	// (0x00033c89) setting_code_pane_t1

0x3fa8,	// (0x0003083b) set_text_pane_t1_ParamLimits

0x3fa8,	// (0x0003083b) set_text_pane_t1

0x7c99,	// (0x0003452c) set_opt_bg_pane_g1

0x7ca1,	// (0x00034534) set_opt_bg_pane_g2

0xada8,	// (0x0003763b) set_opt_bg_pane_g3

0x7cb1,	// (0x00034544) set_opt_bg_pane_g4

0x7cb9,	// (0x0003454c) set_opt_bg_pane_g5

0x7cc1,	// (0x00034554) set_opt_bg_pane_g6

0xadb2,	// (0x00037645) set_opt_bg_pane_g7

0xadbc,	// (0x0003764f) set_opt_bg_pane_g8

0xadc6,	// (0x00037659) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x0003c217) set_opt_bg_pane_g

0xad9b,	// (0x0003762e) slider_set_pane_g1

0x601b,	// (0x000328ae) slider_set_pane_g2

0x0006,

0xf975,	// (0x0003c208) slider_set_pane_g

0x5f7b,	// (0x0003280e) volume_set_pane_g1

0x5f85,	// (0x00032818) volume_set_pane_g2

0x5f8f,	// (0x00032822) volume_set_pane_g3

0x5f99,	// (0x0003282c) volume_set_pane_g4

0x5fa3,	// (0x00032836) volume_set_pane_g5

0x5fad,	// (0x00032840) volume_set_pane_g6

0x5fb7,	// (0x0003284a) volume_set_pane_g7

0x5fc1,	// (0x00032854) volume_set_pane_g8

0x5fcb,	// (0x0003285e) volume_set_pane_g9

0x5fd5,	// (0x00032868) volume_set_pane_g10

0x0009,

0xf94d,	// (0x0003c1e0) volume_set_pane_g

0x7404,	// (0x00033c97) indicator_pane_ParamLimits

0x7404,	// (0x00033c97) indicator_pane

0x7410,	// (0x00033ca3) main_idle_pane_g2_ParamLimits

0x7410,	// (0x00033ca3) main_idle_pane_g2

0x7438,	// (0x00033ccb) main_pane_idle_g1_ParamLimits

0x7438,	// (0x00033ccb) main_pane_idle_g1

0x7446,	// (0x00033cd9) popup_clock_digital_analogue_window_ParamLimits

0x7446,	// (0x00033cd9) popup_clock_digital_analogue_window

0x745d,	// (0x00033cf0) soft_indicator_pane_ParamLimits

0x745d,	// (0x00033cf0) soft_indicator_pane

0x746b,	// (0x00033cfe) wallpaper_pane_ParamLimits

0x746b,	// (0x00033cfe) wallpaper_pane

0x3275,	// (0x0002fb08) wallpaper_pane_g1

0x747f,	// (0x00033d12) indicator_pane_g1_ParamLimits

0x747f,	// (0x00033d12) indicator_pane_g1

0xb20d,	// (0x00037aa0) navi_navi_icon_text_pane_srt_g1

0x749a,	// (0x00033d2d) soft_indicator_pane_t1

0x74b4,	// (0x00033d47) aid_ps_area_pane

0x74c5,	// (0x00033d58) aid_ps_clock_pane

0x74d3,	// (0x00033d66) aid_ps_indicator_pane

0x74df,	// (0x00033d72) indicator_ps_pane_ParamLimits

0x74df,	// (0x00033d72) indicator_ps_pane

0x74ee,	// (0x00033d81) power_save_pane_g1_ParamLimits

0x74ee,	// (0x00033d81) power_save_pane_g1

0x74fa,	// (0x00033d8d) power_save_pane_g2_ParamLimits

0x74fa,	// (0x00033d8d) power_save_pane_g2

0x49f3,	// (0x00031286) aid_navinavi_width_pane

0x74b4,	// (0x00033d47) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0003be19) power_save_pane_g_ParamLimits

0xf586,	// (0x0003be19) power_save_pane_g

0x7508,	// (0x00033d9b) power_save_pane_t1_ParamLimits

0x7508,	// (0x00033d9b) power_save_pane_t1

0x74c5,	// (0x00033d58) aid_ps_clock_pane_ParamLimits

0x74d3,	// (0x00033d66) aid_ps_indicator_pane_ParamLimits

0x751a,	// (0x00033dad) power_save_pane_t4_ParamLimits

0x751a,	// (0x00033dad) power_save_pane_t4

0x0001,

0xf58b,	// (0x0003be1e) power_save_pane_t_ParamLimits

0xf58b,	// (0x0003be1e) power_save_pane_t

0x7544,	// (0x00033dd7) power_save_t3_ParamLimits

0x7544,	// (0x00033dd7) power_save_t3

0x752f,	// (0x00033dc2) power_save_t2_ParamLimits

0x752f,	// (0x00033dc2) power_save_t2

0x7559,	// (0x00033dec) indicator_ps_pane_g1

0x7562,	// (0x00033df5) ai_gene_pane_ParamLimits

0x7562,	// (0x00033df5) ai_gene_pane

0x756e,	// (0x00033e01) ai_links_pane_ParamLimits

0x756e,	// (0x00033e01) ai_links_pane

0x757a,	// (0x00033e0d) indicator_pane_cp1_ParamLimits

0x757a,	// (0x00033e0d) indicator_pane_cp1

0x7586,	// (0x00033e19) main_pane_idle_g1_cp_ParamLimits

0x7586,	// (0x00033e19) main_pane_idle_g1_cp

0x7592,	// (0x00033e25) popup_ai_links_title_window

0x759b,	// (0x00033e2e) soft_indicator_pane_cp1_ParamLimits

0x759b,	// (0x00033e2e) soft_indicator_pane_cp1

0xab6e,	// (0x00037401) ai_links_pane_g1

0xab77,	// (0x0003740a) grid_ai_links_pane

0xab53,	// (0x000373e6) ai_gene_pane_1

0xab5c,	// (0x000373ef) ai_gene_pane_2

0xab65,	// (0x000373f8) list_highlight_pane_cp4

0xab33,	// (0x000373c6) cell_ai_link_pane_ParamLimits

0xab33,	// (0x000373c6) cell_ai_link_pane

0xab2b,	// (0x000373be) cell_ai_link_pane_g1

0x77dd,	// (0x00034070) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x0003c1bb) cell_ai_link_pane_g

0x327f,	// (0x0002fb12) grid_highlight_cp2

0x327f,	// (0x0002fb12) bg_popup_sub_pane_cp1

0x75b5,	// (0x00033e48) popup_ai_links_title_window_t1

0xaa77,	// (0x0003730a) ai_gene_pane_1_g1_ParamLimits

0xaa77,	// (0x0003730a) ai_gene_pane_1_g1

0xaa83,	// (0x00037316) ai_gene_pane_1_g2_ParamLimits

0xaa83,	// (0x00037316) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x0003c1b1) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x0003c1b1) ai_gene_pane_1_g

0xaa90,	// (0x00037323) ai_gene_pane_1_t1_ParamLimits

0xaa90,	// (0x00037323) ai_gene_pane_1_t1

0xaac4,	// (0x00037357) grid_ai_soft_ind_pane

0xaa62,	// (0x000372f5) ai_gene_pane_2_t1_ParamLimits

0xaa62,	// (0x000372f5) ai_gene_pane_2_t1

0x75c4,	// (0x00033e57) main_pane_empty_t1_ParamLimits

0x75c4,	// (0x00033e57) main_pane_empty_t1

0x75dc,	// (0x00033e6f) main_pane_empty_t2_ParamLimits

0x75dc,	// (0x00033e6f) main_pane_empty_t2

0x75f1,	// (0x00033e84) main_pane_empty_t3_ParamLimits

0x75f1,	// (0x00033e84) main_pane_empty_t3

0x7603,	// (0x00033e96) main_pane_empty_t4_ParamLimits

0x7603,	// (0x00033e96) main_pane_empty_t4

0x7615,	// (0x00033ea8) main_pane_empty_t5_ParamLimits

0x7615,	// (0x00033ea8) main_pane_empty_t5

0x0004,

0xf590,	// (0x0003be23) main_pane_empty_t_ParamLimits

0xf590,	// (0x0003be23) main_pane_empty_t

0x7cea,	// (0x0003457d) bg_popup_window_pane_ParamLimits

0x7cea,	// (0x0003457d) bg_popup_window_pane

0xa7be,	// (0x00037051) find_popup_pane_cp2_ParamLimits

0xa7be,	// (0x00037051) find_popup_pane_cp2

0xa7ca,	// (0x0003705d) heading_pane_ParamLimits

0xa7ca,	// (0x0003705d) heading_pane

0x327f,	// (0x0002fb12) bg_popup_sub_pane

0xa738,	// (0x00036fcb) bg_popup_window_pane_g1_ParamLimits

0xa738,	// (0x00036fcb) bg_popup_window_pane_g1

0xa744,	// (0x00036fd7) bg_popup_window_pane_g2_ParamLimits

0xa744,	// (0x00036fd7) bg_popup_window_pane_g2

0xa750,	// (0x00036fe3) bg_popup_window_pane_g3_ParamLimits

0xa750,	// (0x00036fe3) bg_popup_window_pane_g3

0xa75c,	// (0x00036fef) bg_popup_window_pane_g4_ParamLimits

0xa75c,	// (0x00036fef) bg_popup_window_pane_g4

0xa768,	// (0x00036ffb) bg_popup_window_pane_g5_ParamLimits

0xa768,	// (0x00036ffb) bg_popup_window_pane_g5

0xa774,	// (0x00037007) bg_popup_window_pane_g6_ParamLimits

0xa774,	// (0x00037007) bg_popup_window_pane_g6

0xa780,	// (0x00037013) bg_popup_window_pane_g7_ParamLimits

0xa780,	// (0x00037013) bg_popup_window_pane_g7

0xa78c,	// (0x0003701f) bg_popup_window_pane_g8_ParamLimits

0xa78c,	// (0x0003701f) bg_popup_window_pane_g8

0xa798,	// (0x0003702b) bg_popup_window_pane_g9_ParamLimits

0xa798,	// (0x0003702b) bg_popup_window_pane_g9

0xa7a4,	// (0x00037037) bg_popup_window_pane_g10_ParamLimits

0xa7a4,	// (0x00037037) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x0003c179) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x0003c179) bg_popup_window_pane_g

0xa6cd,	// (0x00036f60) bg_popup_heading_pane_ParamLimits

0xa6cd,	// (0x00036f60) bg_popup_heading_pane

0x6141,	// (0x000329d4) tabs_4_passive_pane_cp_srt_ParamLimits

0x6141,	// (0x000329d4) tabs_4_passive_pane_cp_srt

0x6153,	// (0x000329e6) tabs_4_passive_pane_srt_ParamLimits

0xa6e1,	// (0x00036f74) heading_pane_g2

0x6153,	// (0x000329e6) tabs_4_passive_pane_srt

0x8e74,	// (0x00035707) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8e74,	// (0x00035707) bg_passive_tab_pane_cp3_srt

0xa6e9,	// (0x00036f7c) heading_pane_t1_ParamLimits

0xa6e9,	// (0x00036f7c) heading_pane_t1

0xa700,	// (0x00036f93) heading_pane_t2_ParamLimits

0xa700,	// (0x00036f93) heading_pane_t2

0x0001,

0xf8e1,	// (0x0003c174) heading_pane_t_ParamLimits

0xf8e1,	// (0x0003c174) heading_pane_t

0xa1f8,	// (0x00036a8b) bg_popup_heading_pane_g1

0xa2a7,	// (0x00036b3a) bg_popup_heading_pane_g2

0xa2b1,	// (0x00036b44) bg_popup_heading_pane_g3

0xa2bb,	// (0x00036b4e) bg_popup_heading_pane_g4

0xa2c5,	// (0x00036b58) bg_popup_heading_pane_g5

0xa2cf,	// (0x00036b62) bg_popup_heading_pane_g6

0xa2d7,	// (0x00036b6a) bg_popup_heading_pane_g7

0xa2df,	// (0x00036b72) bg_popup_heading_pane_g8

0xa2e9,	// (0x00036b7c) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x0003c130) bg_popup_heading_pane_g

0x99b0,	// (0x00036243) bg_popup_sub_pane_g1

0x99c0,	// (0x00036253) bg_popup_sub_pane_g2

0x99b8,	// (0x0003624b) bg_popup_sub_pane_g3

0x99d0,	// (0x00036263) bg_popup_sub_pane_g4

0x99c8,	// (0x0003625b) bg_popup_sub_pane_g5

0x99d8,	// (0x0003626b) bg_popup_sub_pane_g6

0x99e0,	// (0x00036273) bg_popup_sub_pane_g7

0x99f0,	// (0x00036283) bg_popup_sub_pane_g8

0x99e8,	// (0x0003627b) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x0003c10a) bg_popup_sub_pane_g

0x7627,	// (0x00033eba) bg_popup_window_pane_cp5_ParamLimits

0x7627,	// (0x00033eba) bg_popup_window_pane_cp5

0x7643,	// (0x00033ed6) popup_note_window_g1_ParamLimits

0x7643,	// (0x00033ed6) popup_note_window_g1

0x764f,	// (0x00033ee2) popup_note_window_t1_ParamLimits

0x764f,	// (0x00033ee2) popup_note_window_t1

0x7665,	// (0x00033ef8) popup_note_window_t2_ParamLimits

0x7665,	// (0x00033ef8) popup_note_window_t2

0x767b,	// (0x00033f0e) popup_note_window_t3_ParamLimits

0x767b,	// (0x00033f0e) popup_note_window_t3

0x7691,	// (0x00033f24) popup_note_window_t4_ParamLimits

0x7691,	// (0x00033f24) popup_note_window_t4

0x76b9,	// (0x00033f4c) popup_note_window_t5_ParamLimits

0x76b9,	// (0x00033f4c) popup_note_window_t5

0x0004,

0xf59b,	// (0x0003be2e) popup_note_window_t_ParamLimits

0xf59b,	// (0x0003be2e) popup_note_window_t

0x76dd,	// (0x00033f70) bg_popup_window_pane_cp6_ParamLimits

0x76dd,	// (0x00033f70) bg_popup_window_pane_cp6

0xa174,	// (0x00036a07) popup_note_image_window_g1_ParamLimits

0xa174,	// (0x00036a07) popup_note_image_window_g1

0xa180,	// (0x00036a13) popup_note_image_window_g2_ParamLimits

0xa180,	// (0x00036a13) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x0003c0fe) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x0003c0fe) popup_note_image_window_g

0xa199,	// (0x00036a2c) popup_note_image_window_t1_ParamLimits

0xa199,	// (0x00036a2c) popup_note_image_window_t1

0xa1b2,	// (0x00036a45) popup_note_image_window_t2_ParamLimits

0xa1b2,	// (0x00036a45) popup_note_image_window_t2

0xa1cb,	// (0x00036a5e) popup_note_image_window_t3_ParamLimits

0xa1cb,	// (0x00036a5e) popup_note_image_window_t3

0x0002,

0xf870,	// (0x0003c103) popup_note_image_window_t_ParamLimits

0xf870,	// (0x0003c103) popup_note_image_window_t

0xa034,	// (0x000368c7) bg_popup_window_pane_cp7_ParamLimits

0xa034,	// (0x000368c7) bg_popup_window_pane_cp7

0xa064,	// (0x000368f7) popup_note_wait_window_g1_ParamLimits

0xa064,	// (0x000368f7) popup_note_wait_window_g1

0xa070,	// (0x00036903) popup_note_wait_window_g2_ParamLimits

0xa070,	// (0x00036903) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x0003c0ec) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x0003c0ec) popup_note_wait_window_g

0xa088,	// (0x0003691b) popup_note_wait_window_t1_ParamLimits

0xa088,	// (0x0003691b) popup_note_wait_window_t1

0xa0af,	// (0x00036942) popup_note_wait_window_t2_ParamLimits

0xa0af,	// (0x00036942) popup_note_wait_window_t2

0xa0cd,	// (0x00036960) popup_note_wait_window_t3_ParamLimits

0xa0cd,	// (0x00036960) popup_note_wait_window_t3

0xa0e0,	// (0x00036973) popup_note_wait_window_t4_ParamLimits

0xa0e0,	// (0x00036973) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x0003c0f3) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x0003c0f3) popup_note_wait_window_t

0xa105,	// (0x00036998) wait_bar_pane_ParamLimits

0xa105,	// (0x00036998) wait_bar_pane

0x327f,	// (0x0002fb12) wait_anim_pane

0x327f,	// (0x0002fb12) wait_border_pane

0x3275,	// (0x0002fb08) wait_anim_pane_g1

0x3275,	// (0x0002fb08) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x0003bfb2) wait_anim_pane_g

0x9fd8,	// (0x0003686b) wait_border_pane_g1

0x9fe3,	// (0x00036876) wait_border_pane_g2

0x9fec,	// (0x0003687f) wait_border_pane_g3

0x0002,

0xf852,	// (0x0003c0e5) wait_border_pane_g

0x9e42,	// (0x000366d5) bg_popup_window_pane_cp16_ParamLimits

0x9e42,	// (0x000366d5) bg_popup_window_pane_cp16

0x9f42,	// (0x000367d5) indicator_popup_pane_cp4_ParamLimits

0x9f42,	// (0x000367d5) indicator_popup_pane_cp4

0x9f56,	// (0x000367e9) popup_query_data_window_t1_ParamLimits

0x9f56,	// (0x000367e9) popup_query_data_window_t1

0x9f68,	// (0x000367fb) popup_query_data_window_t2_ParamLimits

0x9f68,	// (0x000367fb) popup_query_data_window_t2

0x9f81,	// (0x00036814) popup_query_data_window_t3_ParamLimits

0x9f81,	// (0x00036814) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x0003c0de) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x0003c0de) popup_query_data_window_t

0x9f9b,	// (0x0003682e) query_popup_data_pane_ParamLimits

0x9f9b,	// (0x0003682e) query_popup_data_pane

0x9faf,	// (0x00036842) query_popup_data_pane_cp1_ParamLimits

0x9faf,	// (0x00036842) query_popup_data_pane_cp1

0x9e42,	// (0x000366d5) bg_popup_window_pane_cp10_ParamLimits

0x9e42,	// (0x000366d5) bg_popup_window_pane_cp10

0x9e74,	// (0x00036707) indicator_popup_pane_ParamLimits

0x9e74,	// (0x00036707) indicator_popup_pane

0x9e96,	// (0x00036729) popup_query_code_window_t1_ParamLimits

0x9e96,	// (0x00036729) popup_query_code_window_t1

0x9eb0,	// (0x00036743) popup_query_code_window_t2_ParamLimits

0x9eb0,	// (0x00036743) popup_query_code_window_t2

0x9ef9,	// (0x0003678c) popup_query_code_window_t3_ParamLimits

0x9ef9,	// (0x0003678c) popup_query_code_window_t3

0x0002,

0xf844,	// (0x0003c0d7) popup_query_code_window_t_ParamLimits

0xf844,	// (0x0003c0d7) popup_query_code_window_t

0x9f28,	// (0x000367bb) query_popup_pane_ParamLimits

0x9f28,	// (0x000367bb) query_popup_pane

0x76dd,	// (0x00033f70) bg_popup_window_pane_cp15_ParamLimits

0x76dd,	// (0x00033f70) bg_popup_window_pane_cp15

0x76fd,	// (0x00033f90) indicator_popup_pane_cp1_ParamLimits

0x76fd,	// (0x00033f90) indicator_popup_pane_cp1

0x7710,	// (0x00033fa3) indicator_popup_pane_cp2_ParamLimits

0x7710,	// (0x00033fa3) indicator_popup_pane_cp2

0x772b,	// (0x00033fbe) popup_query_data_code_window_g1_ParamLimits

0x772b,	// (0x00033fbe) popup_query_data_code_window_g1

0x773e,	// (0x00033fd1) popup_query_data_code_window_t1_ParamLimits

0x773e,	// (0x00033fd1) popup_query_data_code_window_t1

0x7750,	// (0x00033fe3) popup_query_data_code_window_t2_ParamLimits

0x7750,	// (0x00033fe3) popup_query_data_code_window_t2

0x7762,	// (0x00033ff5) popup_query_data_code_window_t3_ParamLimits

0x7762,	// (0x00033ff5) popup_query_data_code_window_t3

0x7778,	// (0x0003400b) popup_query_data_code_window_t4_ParamLimits

0x7778,	// (0x0003400b) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0003be39) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0003be39) popup_query_data_code_window_t

0x5ca7,	// (0x0003253a) list_single_midp_graphic_pane_g3

0x7792,	// (0x00034025) query_popup_data_pane_cp2_ParamLimits

0x77a5,	// (0x00034038) query_popup_pane_cp2_ParamLimits

0x77a5,	// (0x00034038) query_popup_pane_cp2

0x327f,	// (0x0002fb12) bg_popup_window_pane_cp11

0x9e3a,	// (0x000366cd) heading_pane_cp5

0x7895,	// (0x00034128) listscroll_popup_info_pane

0x327f,	// (0x0002fb12) input_focus_pane_cp3

0x77c0,	// (0x00034053) query_popup_pane_t1

0x77ce,	// (0x00034061) list_popup_info_pane_ParamLimits

0x77ce,	// (0x00034061) list_popup_info_pane

0x77dd,	// (0x00034070) listscroll_popup_info_pane_g1

0x77e5,	// (0x00034078) scroll_pane_cp7

0x77ef,	// (0x00034082) popup_info_list_pane_t1_ParamLimits

0x77ef,	// (0x00034082) popup_info_list_pane_t1

0x7809,	// (0x0003409c) popup_info_list_pane_t2_ParamLimits

0x7809,	// (0x0003409c) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0003be42) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0003be42) popup_info_list_pane_t

0x327f,	// (0x0002fb12) bg_popup_window_pane_cp12

0xb227,	// (0x00037aba) find_popup_pane

0x73ab,	// (0x00033c3e) bg_popup_window_pane_cp3

0x7823,	// (0x000340b6) heading_pane_cp3

0x782f,	// (0x000340c2) listscroll_popup_graphic_pane

0x327f,	// (0x0002fb12) bg_popup_window_pane_cp4

0x788b,	// (0x0003411e) heading_pane_cp4

0x7895,	// (0x00034128) listscroll_popup_colour_pane

0x789d,	// (0x00034130) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x789d,	// (0x00034130) cell_large_graphic_colour_none_popup_pane

0x78b1,	// (0x00034144) grid_large_graphic_colour_popup_pane_ParamLimits

0x78b1,	// (0x00034144) grid_large_graphic_colour_popup_pane

0x78dd,	// (0x00034170) listscroll_popup_colour_pane_g1_ParamLimits

0x78dd,	// (0x00034170) listscroll_popup_colour_pane_g1

0x78f4,	// (0x00034187) listscroll_popup_colour_pane_g2_ParamLimits

0x78f4,	// (0x00034187) listscroll_popup_colour_pane_g2

0x790b,	// (0x0003419e) listscroll_popup_colour_pane_g3_ParamLimits

0x790b,	// (0x0003419e) listscroll_popup_colour_pane_g3

0x791b,	// (0x000341ae) listscroll_popup_colour_pane_g4_ParamLimits

0x791b,	// (0x000341ae) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0003be47) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0003be47) listscroll_popup_colour_pane_g

0x792f,	// (0x000341c2) scroll_pane_cp6_ParamLimits

0x792f,	// (0x000341c2) scroll_pane_cp6

0x7941,	// (0x000341d4) cell_large_graphic_colour_popup_pane_ParamLimits

0x7941,	// (0x000341d4) cell_large_graphic_colour_popup_pane

0x7966,	// (0x000341f9) cell_large_graphic_colour_none_popup_pane_t1

0x327f,	// (0x0002fb12) grid_highlight_pane_cp5

0x7975,	// (0x00034208) cell_large_graphic_colour_popup_pane_g1

0x797d,	// (0x00034210) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0003be50) cell_large_graphic_colour_popup_pane_g

0x7985,	// (0x00034218) cell_large_graphic_colour_popup_pane_g2_copy1

0x798e,	// (0x00034221) grid_highlight_pane_cp4

0x7996,	// (0x00034229) bg_popup_window_pane_cp8_ParamLimits

0x7996,	// (0x00034229) bg_popup_window_pane_cp8

0x79b1,	// (0x00034244) popup_snote_single_text_window_g1_ParamLimits

0x79b1,	// (0x00034244) popup_snote_single_text_window_g1

0x79c3,	// (0x00034256) popup_snote_single_text_window_t1_ParamLimits

0x79c3,	// (0x00034256) popup_snote_single_text_window_t1

0x79d6,	// (0x00034269) popup_snote_single_text_window_t2_ParamLimits

0x79d6,	// (0x00034269) popup_snote_single_text_window_t2

0x79e9,	// (0x0003427c) popup_snote_single_text_window_t3_ParamLimits

0x79e9,	// (0x0003427c) popup_snote_single_text_window_t3

0x7a22,	// (0x000342b5) popup_snote_single_text_window_t4_ParamLimits

0x7a22,	// (0x000342b5) popup_snote_single_text_window_t4

0x7a56,	// (0x000342e9) popup_snote_single_text_window_t5_ParamLimits

0x7a56,	// (0x000342e9) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0003be55) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0003be55) popup_snote_single_text_window_t

0x7a85,	// (0x00034318) bg_popup_window_pane_cp9_ParamLimits

0x7a85,	// (0x00034318) bg_popup_window_pane_cp9

0x79b1,	// (0x00034244) popup_snote_single_graphic_window_g1_ParamLimits

0x79b1,	// (0x00034244) popup_snote_single_graphic_window_g1

0x7a93,	// (0x00034326) popup_snote_single_graphic_window_g2_ParamLimits

0x7a93,	// (0x00034326) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0003be60) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0003be60) popup_snote_single_graphic_window_g

0x7a9f,	// (0x00034332) popup_snote_single_graphic_window_t1_ParamLimits

0x7a9f,	// (0x00034332) popup_snote_single_graphic_window_t1

0x7ab2,	// (0x00034345) popup_snote_single_graphic_window_t2_ParamLimits

0x7ab2,	// (0x00034345) popup_snote_single_graphic_window_t2

0x7ac5,	// (0x00034358) popup_snote_single_graphic_window_t3_ParamLimits

0x7ac5,	// (0x00034358) popup_snote_single_graphic_window_t3

0x7afe,	// (0x00034391) popup_snote_single_graphic_window_t4_ParamLimits

0x7afe,	// (0x00034391) popup_snote_single_graphic_window_t4

0x7b32,	// (0x000343c5) popup_snote_single_graphic_window_t5_ParamLimits

0x7b32,	// (0x000343c5) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0003be65) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0003be65) popup_snote_single_graphic_window_t

0xb165,	// (0x000379f8) grid_graphic_popup_pane_ParamLimits

0xb165,	// (0x000379f8) grid_graphic_popup_pane

0xb193,	// (0x00037a26) listscroll_popup_graphic_pane_g1_ParamLimits

0xb193,	// (0x00037a26) listscroll_popup_graphic_pane_g1

0xb1a7,	// (0x00037a3a) listscroll_popup_graphic_pane_g2_ParamLimits

0xb1a7,	// (0x00037a3a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x0003c254) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x0003c254) listscroll_popup_graphic_pane_g

0xb1bb,	// (0x00037a4e) scroll_pane_cp5

0xb10d,	// (0x000379a0) cell_graphic_popup_pane_ParamLimits

0xb10d,	// (0x000379a0) cell_graphic_popup_pane

0xb0ee,	// (0x00037981) cell_graphic_popup_pane_g1

0xb0f6,	// (0x00037989) cell_graphic_popup_pane_g2

0x7985,	// (0x00034218) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x0003c24d) cell_graphic_popup_pane_g

0xb0ff,	// (0x00037992) cell_graphic_popup_pane_t2

0x798e,	// (0x00034221) grid_highlight_pane_cp3

0x7b73,	// (0x00034406) list_gen_pane_ParamLimits

0x7b73,	// (0x00034406) list_gen_pane

0x7ba5,	// (0x00034438) scroll_pane

0xb050,	// (0x000378e3) bg_list_pane_g1_ParamLimits

0xb050,	// (0x000378e3) bg_list_pane_g1

0xb06b,	// (0x000378fe) bg_list_pane_g2_ParamLimits

0xb06b,	// (0x000378fe) bg_list_pane_g2

0xb07e,	// (0x00037911) bg_list_pane_g3_ParamLimits

0xb07e,	// (0x00037911) bg_list_pane_g3

0xb090,	// (0x00037923) bg_list_pane_g4_ParamLimits

0xb090,	// (0x00037923) bg_list_pane_g4

0xb0a2,	// (0x00037935) bg_list_pane_g5_ParamLimits

0xb0a2,	// (0x00037935) bg_list_pane_g5

0x0004,

0xf9af,	// (0x0003c242) bg_list_pane_g_ParamLimits

0xf9af,	// (0x0003c242) bg_list_pane_g

0x60c3,	// (0x00032956) list_double2_graphic_large_graphic_pane_ParamLimits

0x60c3,	// (0x00032956) list_double2_graphic_large_graphic_pane

0x60c3,	// (0x00032956) list_double2_graphic_pane_ParamLimits

0x60c3,	// (0x00032956) list_double2_graphic_pane

0x60c3,	// (0x00032956) list_double2_large_graphic_pane_ParamLimits

0x60c3,	// (0x00032956) list_double2_large_graphic_pane

0xafe1,	// (0x00037874) list_double2_pane_ParamLimits

0xafe1,	// (0x00037874) list_double2_pane

0x60c3,	// (0x00032956) list_double_graphic_heading_pane_ParamLimits

0x60c3,	// (0x00032956) list_double_graphic_heading_pane

0x60c3,	// (0x00032956) list_double_graphic_pane_ParamLimits

0x60c3,	// (0x00032956) list_double_graphic_pane

0x60c3,	// (0x00032956) list_double_heading_pane_ParamLimits

0x60c3,	// (0x00032956) list_double_heading_pane

0x60c3,	// (0x00032956) list_double_large_graphic_pane_ParamLimits

0x60c3,	// (0x00032956) list_double_large_graphic_pane

0x60c3,	// (0x00032956) list_double_number_pane_ParamLimits

0x60c3,	// (0x00032956) list_double_number_pane

0x60c3,	// (0x00032956) list_double_pane_ParamLimits

0x60c3,	// (0x00032956) list_double_pane

0x60c3,	// (0x00032956) list_double_time_pane_ParamLimits

0x60c3,	// (0x00032956) list_double_time_pane

0x60c3,	// (0x00032956) list_setting_number_pane_ParamLimits

0x60c3,	// (0x00032956) list_setting_number_pane

0x60c3,	// (0x00032956) list_setting_pane_ParamLimits

0x60c3,	// (0x00032956) list_setting_pane

0xb00c,	// (0x0003789f) list_single_2graphic_pane_ParamLimits

0xb00c,	// (0x0003789f) list_single_2graphic_pane

0xb00c,	// (0x0003789f) list_single_graphic_heading_pane_ParamLimits

0xb00c,	// (0x0003789f) list_single_graphic_heading_pane

0xb00c,	// (0x0003789f) list_single_graphic_pane_ParamLimits

0xb00c,	// (0x0003789f) list_single_graphic_pane

0xb00c,	// (0x0003789f) list_single_heading_pane_ParamLimits

0xb00c,	// (0x0003789f) list_single_heading_pane

0x6102,	// (0x00032995) list_single_large_graphic_pane_ParamLimits

0x6102,	// (0x00032995) list_single_large_graphic_pane

0xb00c,	// (0x0003789f) list_single_number_heading_pane_ParamLimits

0xb00c,	// (0x0003789f) list_single_number_heading_pane

0xb00c,	// (0x0003789f) list_single_number_pane_ParamLimits

0xb00c,	// (0x0003789f) list_single_number_pane

0xb00c,	// (0x0003789f) list_single_pane_ParamLimits

0xb00c,	// (0x0003789f) list_single_pane

0x327f,	// (0x0002fb12) list_highlight_pane_cp1

0x3fd8,	// (0x0003086b) list_single_pane_g1_ParamLimits

0x3fd8,	// (0x0003086b) list_single_pane_g1

0x4e90,	// (0x00031723) list_single_pane_g2_ParamLimits

0x4e90,	// (0x00031723) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0003be77) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0003be77) list_single_pane_g

0x60ad,	// (0x00032940) list_single_pane_t1_ParamLimits

0x60ad,	// (0x00032940) list_single_pane_t1

0x3fd8,	// (0x0003086b) list_single_number_pane_g1_ParamLimits

0x3fd8,	// (0x0003086b) list_single_number_pane_g1

0x4e90,	// (0x00031723) list_single_number_pane_g2_ParamLimits

0x4e90,	// (0x00031723) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0003be77) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0003be77) list_single_number_pane_g

0x5fdf,	// (0x00032872) list_single_number_pane_t1_ParamLimits

0x5fdf,	// (0x00032872) list_single_number_pane_t1

0x5ff5,	// (0x00032888) list_single_number_pane_t2_ParamLimits

0x5ff5,	// (0x00032888) list_single_number_pane_t2

0x0001,

0xf970,	// (0x0003c203) list_single_number_pane_t_ParamLimits

0xf970,	// (0x0003c203) list_single_number_pane_t

0x4e84,	// (0x00031717) list_single_graphic_pane_g1_ParamLimits

0x4e84,	// (0x00031717) list_single_graphic_pane_g1

0x3fd8,	// (0x0003086b) list_single_graphic_pane_g2_ParamLimits

0x3fd8,	// (0x0003086b) list_single_graphic_pane_g2

0x4e90,	// (0x00031723) list_single_graphic_pane_g3_ParamLimits

0x4e90,	// (0x00031723) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0003be70) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0003be70) list_single_graphic_pane_g

0x4e9c,	// (0x0003172f) list_single_graphic_pane_t1_ParamLimits

0x4e9c,	// (0x0003172f) list_single_graphic_pane_t1

0x3fd8,	// (0x0003086b) list_single_heading_pane_g1_ParamLimits

0x3fd8,	// (0x0003086b) list_single_heading_pane_g1

0x4e90,	// (0x00031723) list_single_heading_pane_g2_ParamLimits

0x4e90,	// (0x00031723) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003be77) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003be77) list_single_heading_pane_g

0x4eb2,	// (0x00031745) list_single_heading_pane_t1_ParamLimits

0x4eb2,	// (0x00031745) list_single_heading_pane_t1

0x4ec8,	// (0x0003175b) list_single_heading_pane_t2_ParamLimits

0x4ec8,	// (0x0003175b) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0003be7c) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0003be7c) list_single_heading_pane_t

0x3fd8,	// (0x0003086b) list_single_number_heading_pane_g1_ParamLimits

0x3fd8,	// (0x0003086b) list_single_number_heading_pane_g1

0x4e90,	// (0x00031723) list_single_number_heading_pane_g2_ParamLimits

0x4e90,	// (0x00031723) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0003be77) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0003be77) list_single_number_heading_pane_g

0x4eb2,	// (0x00031745) list_single_number_heading_pane_t1_ParamLimits

0x4eb2,	// (0x00031745) list_single_number_heading_pane_t1

0x4eda,	// (0x0003176d) list_single_number_heading_pane_t2_ParamLimits

0x4eda,	// (0x0003176d) list_single_number_heading_pane_t2

0x4eec,	// (0x0003177f) list_single_number_heading_pane_t3_ParamLimits

0x4eec,	// (0x0003177f) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0003be81) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0003be81) list_single_number_heading_pane_t

0x4efe,	// (0x00031791) list_single_graphic_heading_pane_g1_ParamLimits

0x4efe,	// (0x00031791) list_single_graphic_heading_pane_g1

0x4f0a,	// (0x0003179d) list_single_graphic_heading_pane_g4_ParamLimits

0x4f0a,	// (0x0003179d) list_single_graphic_heading_pane_g4

0x4e90,	// (0x00031723) list_single_graphic_heading_pane_g5_ParamLimits

0x4e90,	// (0x00031723) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0003be88) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0003be88) list_single_graphic_heading_pane_g

0x4eb2,	// (0x00031745) list_single_graphic_heading_pane_t1_ParamLimits

0x4eb2,	// (0x00031745) list_single_graphic_heading_pane_t1

0x4f1b,	// (0x000317ae) list_single_graphic_heading_pane_t2_ParamLimits

0x4f1b,	// (0x000317ae) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0003be8f) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0003be8f) list_single_graphic_heading_pane_t

0x4f2d,	// (0x000317c0) list_single_large_graphic_pane_g1_ParamLimits

0x4f2d,	// (0x000317c0) list_single_large_graphic_pane_g1

0x3fd8,	// (0x0003086b) list_single_large_graphic_pane_g2_ParamLimits

0x3fd8,	// (0x0003086b) list_single_large_graphic_pane_g2

0x4e90,	// (0x00031723) list_single_large_graphic_pane_g3_ParamLimits

0x4e90,	// (0x00031723) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0003be94) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0003be94) list_single_large_graphic_pane_g

0x9fe3,	// (0x00036876) wait_border_pane_g2_copy1

0x4f39,	// (0x000317cc) list_single_large_graphic_pane_g4_cp2

0x4eb2,	// (0x00031745) list_single_large_graphic_pane_t1_ParamLimits

0x4eb2,	// (0x00031745) list_single_large_graphic_pane_t1

0x4f41,	// (0x000317d4) list_double_pane_g1_ParamLimits

0x4f41,	// (0x000317d4) list_double_pane_g1

0x4f4d,	// (0x000317e0) list_double_pane_g2_ParamLimits

0x4f4d,	// (0x000317e0) list_double_pane_g2

0x0001,

0xf608,	// (0x0003be9b) list_double_pane_g_ParamLimits

0xf608,	// (0x0003be9b) list_double_pane_g

0x4f59,	// (0x000317ec) list_double_pane_t1_ParamLimits

0x4f59,	// (0x000317ec) list_double_pane_t1

0x4f6f,	// (0x00031802) list_double_pane_t2_ParamLimits

0x4f6f,	// (0x00031802) list_double_pane_t2

0x0001,

0xf60d,	// (0x0003bea0) list_double_pane_t_ParamLimits

0xf60d,	// (0x0003bea0) list_double_pane_t

0x4f81,	// (0x00031814) list_double2_pane_g1_ParamLimits

0x4f81,	// (0x00031814) list_double2_pane_g1

0x4f92,	// (0x00031825) list_double2_pane_g2_ParamLimits

0x4f92,	// (0x00031825) list_double2_pane_g2

0x0001,

0xf612,	// (0x0003bea5) list_double2_pane_g_ParamLimits

0xf612,	// (0x0003bea5) list_double2_pane_g

0x4f9e,	// (0x00031831) list_double2_pane_t1_ParamLimits

0x4f9e,	// (0x00031831) list_double2_pane_t1

0x4fb4,	// (0x00031847) list_double2_pane_t2_ParamLimits

0x4fb4,	// (0x00031847) list_double2_pane_t2

0x0001,

0xf617,	// (0x0003beaa) list_double2_pane_t_ParamLimits

0xf617,	// (0x0003beaa) list_double2_pane_t

0x4f41,	// (0x000317d4) list_double_number_pane_g1_ParamLimits

0x4f41,	// (0x000317d4) list_double_number_pane_g1

0x4f4d,	// (0x000317e0) list_double_number_pane_g2_ParamLimits

0x4f4d,	// (0x000317e0) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0003be9b) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0003be9b) list_double_number_pane_g

0x4fc6,	// (0x00031859) list_double_number_pane_t1_ParamLimits

0x4fc6,	// (0x00031859) list_double_number_pane_t1

0x4fd8,	// (0x0003186b) list_double_number_pane_t2_ParamLimits

0x4fd8,	// (0x0003186b) list_double_number_pane_t2

0x4fee,	// (0x00031881) list_double_number_pane_t3_ParamLimits

0x4fee,	// (0x00031881) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0003beaf) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0003beaf) list_double_number_pane_t

0x5000,	// (0x00031893) list_double_graphic_pane_g1_ParamLimits

0x5000,	// (0x00031893) list_double_graphic_pane_g1

0x500c,	// (0x0003189f) list_double_graphic_pane_g2_ParamLimits

0x500c,	// (0x0003189f) list_double_graphic_pane_g2

0x501b,	// (0x000318ae) list_double_graphic_pane_g3_ParamLimits

0x501b,	// (0x000318ae) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0003beb6) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0003beb6) list_double_graphic_pane_g

0x5033,	// (0x000318c6) list_double_graphic_pane_t1_ParamLimits

0x5033,	// (0x000318c6) list_double_graphic_pane_t1

0x5049,	// (0x000318dc) list_double_graphic_pane_t2_ParamLimits

0x5049,	// (0x000318dc) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003bebf) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003bebf) list_double_graphic_pane_t

0x505b,	// (0x000318ee) list_double2_graphic_pane_g1_ParamLimits

0x505b,	// (0x000318ee) list_double2_graphic_pane_g1

0x5067,	// (0x000318fa) list_double2_graphic_pane_g2_ParamLimits

0x5067,	// (0x000318fa) list_double2_graphic_pane_g2

0x5073,	// (0x00031906) list_double2_graphic_pane_g3_ParamLimits

0x5073,	// (0x00031906) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0003bec4) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0003bec4) list_double2_graphic_pane_g

0x507f,	// (0x00031912) list_double2_graphic_pane_t1_ParamLimits

0x507f,	// (0x00031912) list_double2_graphic_pane_t1

0x5095,	// (0x00031928) list_double2_graphic_pane_t2_ParamLimits

0x5095,	// (0x00031928) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0003becb) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0003becb) list_double2_graphic_pane_t

0x50a7,	// (0x0003193a) list_double_large_graphic_pane_g1_ParamLimits

0x50a7,	// (0x0003193a) list_double_large_graphic_pane_g1

0x50d2,	// (0x00031965) list_double_large_graphic_pane_g2_ParamLimits

0x50d2,	// (0x00031965) list_double_large_graphic_pane_g2

0x4f4d,	// (0x000317e0) list_double_large_graphic_pane_g3_ParamLimits

0x4f4d,	// (0x000317e0) list_double_large_graphic_pane_g3

0x50e3,	// (0x00031976) list_double_large_graphic_pane_g4_ParamLimits

0x50e3,	// (0x00031976) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0003bed0) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0003bed0) list_double_large_graphic_pane_g

0x50f6,	// (0x00031989) list_double_large_graphic_pane_t1_ParamLimits

0x50f6,	// (0x00031989) list_double_large_graphic_pane_t1

0x510f,	// (0x000319a2) list_double_large_graphic_pane_t2_ParamLimits

0x510f,	// (0x000319a2) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0003bedb) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0003bedb) list_double_large_graphic_pane_t

0x5121,	// (0x000319b4) list_double2_large_graphic_pane_g1_ParamLimits

0x5121,	// (0x000319b4) list_double2_large_graphic_pane_g1

0x512d,	// (0x000319c0) list_double2_large_graphic_pane_g2_ParamLimits

0x512d,	// (0x000319c0) list_double2_large_graphic_pane_g2

0x513e,	// (0x000319d1) list_double2_large_graphic_pane_g3_ParamLimits

0x513e,	// (0x000319d1) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0003bee0) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0003bee0) list_double2_large_graphic_pane_g

0x514a,	// (0x000319dd) list_double2_large_graphic_pane_t1_ParamLimits

0x514a,	// (0x000319dd) list_double2_large_graphic_pane_t1

0x5160,	// (0x000319f3) list_double2_large_graphic_pane_t2_ParamLimits

0x5160,	// (0x000319f3) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0003bee7) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0003bee7) list_double2_large_graphic_pane_t

0x5172,	// (0x00031a05) list_double_heading_pane_g1_ParamLimits

0x5172,	// (0x00031a05) list_double_heading_pane_g1

0x5183,	// (0x00031a16) list_double_heading_pane_g2_ParamLimits

0x5183,	// (0x00031a16) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0003beec) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0003beec) list_double_heading_pane_g

0x518f,	// (0x00031a22) list_double_heading_pane_t1_ParamLimits

0x518f,	// (0x00031a22) list_double_heading_pane_t1

0x51a5,	// (0x00031a38) list_double_heading_pane_t2_ParamLimits

0x51a5,	// (0x00031a38) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0003bef1) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0003bef1) list_double_heading_pane_t

0x51b7,	// (0x00031a4a) list_double_graphic_heading_pane_g1_ParamLimits

0x51b7,	// (0x00031a4a) list_double_graphic_heading_pane_g1

0x5172,	// (0x00031a05) list_double_graphic_heading_pane_g2_ParamLimits

0x5172,	// (0x00031a05) list_double_graphic_heading_pane_g2

0x5183,	// (0x00031a16) list_double_graphic_heading_pane_g3_ParamLimits

0x5183,	// (0x00031a16) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0003bef6) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0003bef6) list_double_graphic_heading_pane_g

0x51c3,	// (0x00031a56) list_double_graphic_heading_pane_t1_ParamLimits

0x51c3,	// (0x00031a56) list_double_graphic_heading_pane_t1

0x5095,	// (0x00031928) list_double_graphic_heading_pane_t2_ParamLimits

0x5095,	// (0x00031928) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0003befd) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0003befd) list_double_graphic_heading_pane_t

0x50d2,	// (0x00031965) list_double_time_pane_g1_ParamLimits

0x50d2,	// (0x00031965) list_double_time_pane_g1

0x4f4d,	// (0x000317e0) list_double_time_pane_g2_ParamLimits

0x4f4d,	// (0x000317e0) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0003bf02) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0003bf02) list_double_time_pane_g

0x51d9,	// (0x00031a6c) list_double_time_pane_t1_ParamLimits

0x51d9,	// (0x00031a6c) list_double_time_pane_t1

0x51ef,	// (0x00031a82) list_double_time_pane_t2_ParamLimits

0x51ef,	// (0x00031a82) list_double_time_pane_t2

0x5201,	// (0x00031a94) list_double_time_pane_t3_ParamLimits

0x5201,	// (0x00031a94) list_double_time_pane_t3

0x5213,	// (0x00031aa6) list_double_time_pane_t4_ParamLimits

0x5213,	// (0x00031aa6) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0003bf07) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0003bf07) list_double_time_pane_t

0x5225,	// (0x00031ab8) list_setting_pane_g1_ParamLimits

0x5225,	// (0x00031ab8) list_setting_pane_g1

0x5231,	// (0x00031ac4) list_setting_pane_g2_ParamLimits

0x5231,	// (0x00031ac4) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0003bf10) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0003bf10) list_setting_pane_g

0x523d,	// (0x00031ad0) list_setting_pane_t1_ParamLimits

0x523d,	// (0x00031ad0) list_setting_pane_t1

0x5257,	// (0x00031aea) list_setting_pane_t2_ParamLimits

0x5257,	// (0x00031aea) list_setting_pane_t2

0x0002,

0xf682,	// (0x0003bf15) list_setting_pane_t_ParamLimits

0xf682,	// (0x0003bf15) list_setting_pane_t

0x5296,	// (0x00031b29) set_value_pane_cp_ParamLimits

0x5296,	// (0x00031b29) set_value_pane_cp

0x52a4,	// (0x00031b37) list_setting_number_pane_g1_ParamLimits

0x52a4,	// (0x00031b37) list_setting_number_pane_g1

0x52b0,	// (0x00031b43) list_setting_number_pane_g2_ParamLimits

0x52b0,	// (0x00031b43) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x0003bf1c) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x0003bf1c) list_setting_number_pane_g

0x52bc,	// (0x00031b4f) list_setting_number_pane_t1_ParamLimits

0x52bc,	// (0x00031b4f) list_setting_number_pane_t1

0x52d5,	// (0x00031b68) list_setting_number_pane_t2_ParamLimits

0x52d5,	// (0x00031b68) list_setting_number_pane_t2

0x52ef,	// (0x00031b82) list_setting_number_pane_t3_ParamLimits

0x52ef,	// (0x00031b82) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x0003bf21) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x0003bf21) list_setting_number_pane_t

0x5296,	// (0x00031b29) set_value_pane_ParamLimits

0x5296,	// (0x00031b29) set_value_pane

0x7bd9,	// (0x0003446c) bg_set_opt_pane_ParamLimits

0x7bd9,	// (0x0003446c) bg_set_opt_pane

0x5332,	// (0x00031bc5) set_value_pane_t1

0x7bfa,	// (0x0003448d) slider_set_pane_cp3

0x7c03,	// (0x00034496) volume_small_pane_cp

0x7c0c,	// (0x0003449f) list_form_gen_pane

0x7c15,	// (0x000344a8) scroll_pane_cp8

0x5340,	// (0x00031bd3) form_field_data_pane_ParamLimits

0x5340,	// (0x00031bd3) form_field_data_pane

0x5366,	// (0x00031bf9) form_field_data_wide_pane_ParamLimits

0x5366,	// (0x00031bf9) form_field_data_wide_pane

0x538d,	// (0x00031c20) form_field_popup_pane_ParamLimits

0x538d,	// (0x00031c20) form_field_popup_pane

0x53af,	// (0x00031c42) form_field_popup_wide_pane_ParamLimits

0x53af,	// (0x00031c42) form_field_popup_wide_pane

0x53d0,	// (0x00031c63) form_field_slider_pane_ParamLimits

0x53d0,	// (0x00031c63) form_field_slider_pane

0x53e3,	// (0x00031c76) form_field_slider_wide_pane_ParamLimits

0x53e3,	// (0x00031c76) form_field_slider_wide_pane

0x7c26,	// (0x000344b9) data_form_pane

0x5400,	// (0x00031c93) form_field_data_pane_t1

0x7c32,	// (0x000344c5) input_focus_pane

0x7c40,	// (0x000344d3) data_form_wide_pane

0x5426,	// (0x00031cb9) form_field_data_wide_pane_t1

0x79a3,	// (0x00034236) input_focus_pane_cp6

0x5448,	// (0x00031cdb) form_field_popup_pane_t1

0x7c32,	// (0x000344c5) input_focus_pane_cp7

0x7c6c,	// (0x000344ff) list_form_pane

0x546a,	// (0x00031cfd) form_field_popup_wide_pane_t1

0x7c32,	// (0x000344c5) input_focus_pane_cp8

0x7c78,	// (0x0003450b) list_form_wide_pane

0x5487,	// (0x00031d1a) form_field_slider_pane_t1_ParamLimits

0x5487,	// (0x00031d1a) form_field_slider_pane_t1

0x549f,	// (0x00031d32) form_field_slider_pane_t2_ParamLimits

0x549f,	// (0x00031d32) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x0003bf31) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x0003bf31) form_field_slider_pane_t

0x7627,	// (0x00033eba) input_focus_pane_cp9_ParamLimits

0x7627,	// (0x00033eba) input_focus_pane_cp9

0x54b4,	// (0x00031d47) slider_cont_pane_ParamLimits

0x54b4,	// (0x00031d47) slider_cont_pane

0x7c87,	// (0x0003451a) form_field_slider_wide_pane_t1_ParamLimits

0x7c87,	// (0x0003451a) form_field_slider_wide_pane_t1

0x54c8,	// (0x00031d5b) form_field_slider_wide_pane_t2_ParamLimits

0x54c8,	// (0x00031d5b) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x0003bf36) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x0003bf36) form_field_slider_wide_pane_t

0x7627,	// (0x00033eba) input_focus_pane_cp10_ParamLimits

0x7627,	// (0x00033eba) input_focus_pane_cp10

0x54da,	// (0x00031d6d) slider_cont_pane_cp1_ParamLimits

0x54da,	// (0x00031d6d) slider_cont_pane_cp1

0x54ee,	// (0x00031d81) slider_form_pane_cp

0x7c99,	// (0x0003452c) input_focus_pane_g1

0x7ca1,	// (0x00034534) input_focus_pane_g2

0x7ca9,	// (0x0003453c) input_focus_pane_g3

0x7cb1,	// (0x00034544) input_focus_pane_g4

0x7cb9,	// (0x0003454c) input_focus_pane_g5

0x7cc1,	// (0x00034554) input_focus_pane_g6

0x7cc9,	// (0x0003455c) input_focus_pane_g7

0x7cd1,	// (0x00034564) input_focus_pane_g8

0x7cd9,	// (0x0003456c) input_focus_pane_g9

0x3275,	// (0x0002fb08) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x0003bf3b) input_focus_pane_g

0x9fec,	// (0x0003687f) wait_border_pane_g3_copy1

0x54f6,	// (0x00031d89) data_form_pane_t1

0x3275,	// (0x0002fb08) wait_anim_pane_g1_copy1

0x607f,	// (0x00032912) data_form_wide_pane_t1

0x5513,	// (0x00031da6) list_form_graphic_pane_cp_ParamLimits

0x5513,	// (0x00031da6) list_form_graphic_pane_cp

0xaf71,	// (0x00037804) slider_form_pane_g1

0xaf7a,	// (0x0003780d) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x0003c233) slider_form_pane_g

0x5528,	// (0x00031dbb) list_form_graphic_pane_ParamLimits

0x5528,	// (0x00031dbb) list_form_graphic_pane

0x553a,	// (0x00031dcd) list_form_graphic_pane_g1

0x5542,	// (0x00031dd5) list_form_graphic_pane_t1_ParamLimits

0x5542,	// (0x00031dd5) list_form_graphic_pane_t1

0x73ab,	// (0x00033c3e) list_highlight_pane_cp5_ParamLimits

0x73ab,	// (0x00033c3e) list_highlight_pane_cp5

0x5557,	// (0x00031dea) find_pane_g1

0x7ce1,	// (0x00034574) input_find_pane

0x5560,	// (0x00031df3) input_find_pane_g1_ParamLimits

0x5560,	// (0x00031df3) input_find_pane_g1

0x556c,	// (0x00031dff) input_find_pane_t1_ParamLimits

0x556c,	// (0x00031dff) input_find_pane_t1

0x5581,	// (0x00031e14) input_find_pane_t2_ParamLimits

0x5581,	// (0x00031e14) input_find_pane_t2

0x0001,

0xf6bd,	// (0x0003bf50) input_find_pane_t_ParamLimits

0xf6bd,	// (0x0003bf50) input_find_pane_t

0x7cea,	// (0x0003457d) input_focus_pane_cp5_ParamLimits

0x7cea,	// (0x0003457d) input_focus_pane_cp5

0x7d04,	// (0x00034597) bg_popup_window_pane_cp2_ParamLimits

0x7d04,	// (0x00034597) bg_popup_window_pane_cp2

0x7d11,	// (0x000345a4) listscroll_menu_pane_ParamLimits

0x7d11,	// (0x000345a4) listscroll_menu_pane

0x7d1d,	// (0x000345b0) popup_submenu_window_ParamLimits

0x7d1d,	// (0x000345b0) popup_submenu_window

0x7d4d,	// (0x000345e0) find_popup_pane_g1

0x7d55,	// (0x000345e8) input_popup_find_pane_cp

0x7cea,	// (0x0003457d) input_focus_pane_cp4_ParamLimits

0x7cea,	// (0x0003457d) input_focus_pane_cp4

0x7d6d,	// (0x00034600) input_popup_find_pane_t1_ParamLimits

0x7d6d,	// (0x00034600) input_popup_find_pane_t1

0x327f,	// (0x0002fb12) bg_popup_sub_pane_cp

0x7d9b,	// (0x0003462e) listscroll_popup_sub_pane

0x7da3,	// (0x00034636) list_submenu_pane_ParamLimits

0x7da3,	// (0x00034636) list_submenu_pane

0x7db4,	// (0x00034647) scroll_pane_cp4

0x7dbc,	// (0x0003464f) list_single_popup_submenu_pane_ParamLimits

0x7dbc,	// (0x0003464f) list_single_popup_submenu_pane

0x7dd1,	// (0x00034664) list_single_popup_submenu_pane_g1

0x7dd9,	// (0x0003466c) list_single_popup_submenu_pane_t1_ParamLimits

0x7dd9,	// (0x0003466c) list_single_popup_submenu_pane_t1

0x73ab,	// (0x00033c3e) bg_active_tab_pane_cp1_ParamLimits

0x73ab,	// (0x00033c3e) bg_active_tab_pane_cp1

0x7dee,	// (0x00034681) tabs_2_active_pane_g1

0x7df6,	// (0x00034689) tabs_2_active_pane_t1

0x73ab,	// (0x00033c3e) bg_passive_tab_pane_cp1_ParamLimits

0x73ab,	// (0x00033c3e) bg_passive_tab_pane_cp1

0x7dee,	// (0x00034681) tabs_2_passive_pane_g1

0x7df6,	// (0x00034689) tabs_2_passive_pane_t1

0x7e08,	// (0x0003469b) bg_active_tab_pane_cp4

0x7e16,	// (0x000346a9) tabs_2_long_active_pane_t1

0x7e29,	// (0x000346bc) bg_passive_tab_pane_cp4

0x5caf,	// (0x00032542) list_single_midp_graphic_pane_g4_ParamLimits

0x7e08,	// (0x0003469b) bg_active_tab_pane_cp5

0x7e35,	// (0x000346c8) tabs_3_long_active_pane_t1

0x7e29,	// (0x000346bc) bg_passive_tab_pane_cp5

0x5caf,	// (0x00032542) list_single_midp_graphic_pane_g4

0x73ab,	// (0x00033c3e) bg_popup_window_pane_cp13_ParamLimits

0x73ab,	// (0x00033c3e) bg_popup_window_pane_cp13

0x7e50,	// (0x000346e3) listscroll_popup_fast_pane_ParamLimits

0x7e50,	// (0x000346e3) listscroll_popup_fast_pane

0x7e5f,	// (0x000346f2) grid_popup_fast_pane_ParamLimits

0x7e5f,	// (0x000346f2) grid_popup_fast_pane

0x7e71,	// (0x00034704) scroll_pane_cp9_ParamLimits

0x7e71,	// (0x00034704) scroll_pane_cp9

0xc8c7,	// (0x0003915a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8c7,	// (0x0003915a) list_single_graphic_hl_pane_t1_cp2

0x7e95,	// (0x00034728) input_focus_pane_cp20_ParamLimits

0x7e95,	// (0x00034728) input_focus_pane_cp20

0x7ea3,	// (0x00034736) query_popup_data_pane_t1_ParamLimits

0x7ea3,	// (0x00034736) query_popup_data_pane_t1

0x7eb6,	// (0x00034749) query_popup_data_pane_t2_ParamLimits

0x7eb6,	// (0x00034749) query_popup_data_pane_t2

0x815a,	// (0x000349ed) query_popup_data_pane_t3_ParamLimits

0x815a,	// (0x000349ed) query_popup_data_pane_t3

0x819b,	// (0x00034a2e) query_popup_data_pane_t4_ParamLimits

0x819b,	// (0x00034a2e) query_popup_data_pane_t4

0x81d7,	// (0x00034a6a) query_popup_data_pane_t5_ParamLimits

0x81d7,	// (0x00034a6a) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x0003bf55) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x0003bf55) query_popup_data_pane_t

0x7c99,	// (0x0003452c) bg_set_opt_pane_g1

0x7ca1,	// (0x00034534) bg_set_opt_pane_g2

0x7ca9,	// (0x0003453c) bg_set_opt_pane_g3

0x7cb1,	// (0x00034544) bg_set_opt_pane_g4

0x7cb9,	// (0x0003454c) bg_set_opt_pane_g5

0x7cc1,	// (0x00034554) bg_set_opt_pane_g6

0x7cc9,	// (0x0003455c) bg_set_opt_pane_g7

0x7cd1,	// (0x00034564) bg_set_opt_pane_g8

0x7cd9,	// (0x0003456c) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x0003bf60) bg_set_opt_pane_g

0x58c5,	// (0x00032158) control_top_pane_stacon_ParamLimits

0x58c5,	// (0x00032158) control_top_pane_stacon

0x5918,	// (0x000321ab) signal_pane_stacon_ParamLimits

0x5918,	// (0x000321ab) signal_pane_stacon

0x8783,	// (0x00035016) stacon_top_pane_g1_ParamLimits

0x8783,	// (0x00035016) stacon_top_pane_g1

0x593d,	// (0x000321d0) title_pane_stacon_ParamLimits

0x593d,	// (0x000321d0) title_pane_stacon

0x5967,	// (0x000321fa) uni_indicator_pane_stacon_ParamLimits

0x5967,	// (0x000321fa) uni_indicator_pane_stacon

0x597f,	// (0x00032212) battery_pane_stacon_ParamLimits

0x597f,	// (0x00032212) battery_pane_stacon

0x59c3,	// (0x00032256) control_bottom_pane_stacon_ParamLimits

0x59c3,	// (0x00032256) control_bottom_pane_stacon

0x59e6,	// (0x00032279) navi_pane_stacon_ParamLimits

0x59e6,	// (0x00032279) navi_pane_stacon

0x87a5,	// (0x00035038) stacon_bottom_pane_g1_ParamLimits

0x87a5,	// (0x00035038) stacon_bottom_pane_g1

0x5596,	// (0x00031e29) aid_levels_signal_lsc_ParamLimits

0x5596,	// (0x00031e29) aid_levels_signal_lsc

0x55ad,	// (0x00031e40) signal_pane_stacon_g1_ParamLimits

0x55ad,	// (0x00031e40) signal_pane_stacon_g1

0x55c1,	// (0x00031e54) signal_pane_stacon_g2_ParamLimits

0x55c1,	// (0x00031e54) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x0003bf73) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0003bf73) signal_pane_stacon_g

0x55f6,	// (0x00031e89) title_pane_stacon_t1_ParamLimits

0x55f6,	// (0x00031e89) title_pane_stacon_t1

0x821b,	// (0x00034aae) uni_indicator_pane_stacon_g1

0x8225,	// (0x00034ab8) uni_indicator_pane_stacon_g2

0x822f,	// (0x00034ac2) uni_indicator_pane_stacon_g3

0x8239,	// (0x00034acc) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x0003bf7f) uni_indicator_pane_stacon_g

0x561b,	// (0x00031eae) control_top_pane_stacon_g1

0x5623,	// (0x00031eb6) control_top_pane_stacon_t1_ParamLimits

0x5623,	// (0x00031eb6) control_top_pane_stacon_t1

0x565a,	// (0x00031eed) aid_levels_battery_lsc_ParamLimits

0x565a,	// (0x00031eed) aid_levels_battery_lsc

0x5672,	// (0x00031f05) battery_pane_stacon_g1_ParamLimits

0x5672,	// (0x00031f05) battery_pane_stacon_g1

0x5685,	// (0x00031f18) battery_pane_stacon_g2_ParamLimits

0x5685,	// (0x00031f18) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x0003bf88) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x0003bf88) battery_pane_stacon_g

0x56c3,	// (0x00031f56) navi_icon_pane_stacon

0x56d7,	// (0x00031f6a) navi_navi_pane_stacon

0x56c3,	// (0x00031f56) navi_text_pane_stacon

0x561b,	// (0x00031eae) control_bottom_pane_stacon_g1

0x56ed,	// (0x00031f80) control_bottom_pane_stacon_t1_ParamLimits

0x56ed,	// (0x00031f80) control_bottom_pane_stacon_t1

0x825d,	// (0x00034af0) grid_app_pane_ParamLimits

0x825d,	// (0x00034af0) grid_app_pane

0x8281,	// (0x00034b14) scroll_pane_cp15_ParamLimits

0x8281,	// (0x00034b14) scroll_pane_cp15

0x8296,	// (0x00034b29) cell_app_pane_ParamLimits

0x8296,	// (0x00034b29) cell_app_pane

0x82c2,	// (0x00034b55) cell_app_pane_g1_ParamLimits

0x82c2,	// (0x00034b55) cell_app_pane_g1

0x82e6,	// (0x00034b79) cell_app_pane_g2_ParamLimits

0x82e6,	// (0x00034b79) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x0003bf8d) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x0003bf8d) cell_app_pane_g

0x82f2,	// (0x00034b85) cell_app_pane_t1_ParamLimits

0x82f2,	// (0x00034b85) cell_app_pane_t1

0x8304,	// (0x00034b97) grid_highlight_pane_ParamLimits

0x8304,	// (0x00034b97) grid_highlight_pane

0x7c99,	// (0x0003452c) cell_highlight_pane_g1

0x7ca1,	// (0x00034534) cell_highlight_pane_g2

0x7ca9,	// (0x0003453c) cell_highlight_pane_g3

0x7cb1,	// (0x00034544) cell_highlight_pane_g4

0x7cb9,	// (0x0003454c) cell_highlight_pane_g5

0x7cc1,	// (0x00034554) cell_highlight_pane_g6

0x7cc9,	// (0x0003455c) cell_highlight_pane_g7

0x7cd1,	// (0x00034564) cell_highlight_pane_g8

0x7cd9,	// (0x0003456c) cell_highlight_pane_g9

0x3275,	// (0x0002fb08) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x0003bf3b) cell_highlight_pane_g

0x8315,	// (0x00034ba8) bg_scroll_pane

0x5737,	// (0x00031fca) scroll_handle_pane

0x835c,	// (0x00034bef) scroll_bg_pane_g1

0x8371,	// (0x00034c04) scroll_bg_pane_g2

0x8389,	// (0x00034c1c) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x0003bf92) scroll_bg_pane_g

0x839e,	// (0x00034c31) scroll_handle_focus_pane_ParamLimits

0x839e,	// (0x00034c31) scroll_handle_focus_pane

0x835c,	// (0x00034bef) scroll_handle_pane_g1

0x83ab,	// (0x00034c3e) scroll_handle_pane_g2

0x8389,	// (0x00034c1c) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x0003bf99) scroll_handle_pane_g

0x7cea,	// (0x0003457d) bg_popup_sub_pane_cp21_ParamLimits

0x7cea,	// (0x0003457d) bg_popup_sub_pane_cp21

0x83bf,	// (0x00034c52) popup_fep_japan_predictive_window_t1_ParamLimits

0x83bf,	// (0x00034c52) popup_fep_japan_predictive_window_t1

0x83d6,	// (0x00034c69) popup_fep_japan_predictive_window_t2_ParamLimits

0x83d6,	// (0x00034c69) popup_fep_japan_predictive_window_t2

0x8409,	// (0x00034c9c) popup_fep_japan_predictive_window_t3_ParamLimits

0x8409,	// (0x00034c9c) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x0003bfa0) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x0003bfa0) popup_fep_japan_predictive_window_t

0x327f,	// (0x0002fb12) bg_popup_sub_pane_cp23

0x8440,	// (0x00034cd3) listscroll_japin_cand_pane

0x8448,	// (0x00034cdb) popup_fep_japan_candidate_window_t1

0x8456,	// (0x00034ce9) candidate_pane_ParamLimits

0x8456,	// (0x00034ce9) candidate_pane

0x8468,	// (0x00034cfb) scroll_pane_cp30

0x8472,	// (0x00034d05) list_single_popup_jap_candidate_pane_ParamLimits

0x8472,	// (0x00034d05) list_single_popup_jap_candidate_pane

0x327f,	// (0x0002fb12) list_highlight_pane_cp30

0x8486,	// (0x00034d19) list_single_popup_jap_candidate_pane_t1

0x8495,	// (0x00034d28) level_1_signal

0x84a2,	// (0x00034d35) level_2_signal

0x84af,	// (0x00034d42) level_3_signal

0x84bc,	// (0x00034d4f) level_4_signal

0x84c9,	// (0x00034d5c) level_5_signal

0x84d6,	// (0x00034d69) level_6_signal

0x84e3,	// (0x00034d76) level_7_signal

0x8495,	// (0x00034d28) level_1_battery

0x84a2,	// (0x00034d35) level_2_battery

0x84af,	// (0x00034d42) level_3_battery

0x84bc,	// (0x00034d4f) level_4_battery

0x84c9,	// (0x00034d5c) level_5_battery

0x84d6,	// (0x00034d69) level_6_battery

0x84e3,	// (0x00034d76) level_7_battery

0x8508,	// (0x00034d9b) list_menu_pane_ParamLimits

0x8508,	// (0x00034d9b) list_menu_pane

0x8519,	// (0x00034dac) scroll_pane_cp25_ParamLimits

0x8519,	// (0x00034dac) scroll_pane_cp25

0x8532,	// (0x00034dc5) list_double2_graphic_pane_cp2_ParamLimits

0x8532,	// (0x00034dc5) list_double2_graphic_pane_cp2

0x8532,	// (0x00034dc5) list_double2_large_graphic_pane_cp2_ParamLimits

0x8532,	// (0x00034dc5) list_double2_large_graphic_pane_cp2

0x8532,	// (0x00034dc5) list_double2_pane_cp2_ParamLimits

0x8532,	// (0x00034dc5) list_double2_pane_cp2

0x8532,	// (0x00034dc5) list_double_graphic_pane_cp2_ParamLimits

0x8532,	// (0x00034dc5) list_double_graphic_pane_cp2

0x8532,	// (0x00034dc5) list_double_large_graphic_pane_cp2_ParamLimits

0x8532,	// (0x00034dc5) list_double_large_graphic_pane_cp2

0x8532,	// (0x00034dc5) list_double_number_pane_cp2_ParamLimits

0x8532,	// (0x00034dc5) list_double_number_pane_cp2

0x8532,	// (0x00034dc5) list_double_pane_cp2_ParamLimits

0x8532,	// (0x00034dc5) list_double_pane_cp2

0x8558,	// (0x00034deb) list_single_2graphic_pane_cp2_ParamLimits

0x8558,	// (0x00034deb) list_single_2graphic_pane_cp2

0x8558,	// (0x00034deb) list_single_graphic_heading_pane_cp2_ParamLimits

0x8558,	// (0x00034deb) list_single_graphic_heading_pane_cp2

0x8558,	// (0x00034deb) list_single_graphic_pane_cp2_ParamLimits

0x8558,	// (0x00034deb) list_single_graphic_pane_cp2

0x8558,	// (0x00034deb) list_single_heading_pane_cp2_ParamLimits

0x8558,	// (0x00034deb) list_single_heading_pane_cp2

0x8575,	// (0x00034e08) list_single_large_graphic_pane_cp2_ParamLimits

0x8575,	// (0x00034e08) list_single_large_graphic_pane_cp2

0x8558,	// (0x00034deb) list_single_number_heading_pane_cp2_ParamLimits

0x8558,	// (0x00034deb) list_single_number_heading_pane_cp2

0x8558,	// (0x00034deb) list_single_number_pane_cp2_ParamLimits

0x8558,	// (0x00034deb) list_single_number_pane_cp2

0x8558,	// (0x00034deb) list_single_pane_cp2_ParamLimits

0x8558,	// (0x00034deb) list_single_pane_cp2

0x85ca,	// (0x00034e5d) bg_popup_sub_pane_cp22

0x57e9,	// (0x0003207c) popup_side_volume_key_window_g1

0x5813,	// (0x000320a6) popup_side_volume_key_window_t1

0x5831,	// (0x000320c4) volume_small_pane_cp1

0x7627,	// (0x00033eba) bg_popup_sub_pane_cp24_ParamLimits

0x7627,	// (0x00033eba) bg_popup_sub_pane_cp24

0x85e0,	// (0x00034e73) fep_china_uni_candidate_pane_ParamLimits

0x85e0,	// (0x00034e73) fep_china_uni_candidate_pane

0x85f4,	// (0x00034e87) fep_china_uni_entry_pane

0x8604,	// (0x00034e97) popup_fep_china_uni_window_g1

0x8620,	// (0x00034eb3) fep_china_uni_entry_pane_g1

0x862a,	// (0x00034ebd) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x0003bfcd) fep_china_uni_entry_pane_g

0x8634,	// (0x00034ec7) fep_entry_item_pane

0x863e,	// (0x00034ed1) fep_candidate_item_pane

0x8646,	// (0x00034ed9) fep_china_uni_candidate_pane_g1

0x8650,	// (0x00034ee3) fep_china_uni_candidate_pane_g2

0x8658,	// (0x00034eeb) fep_china_uni_candidate_pane_g3

0x8660,	// (0x00034ef3) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x0003bfd2) fep_china_uni_candidate_pane_g

0x3275,	// (0x0002fb08) fep_entry_item_pane_g1

0x866a,	// (0x00034efd) fep_entry_item_pane_t1_ParamLimits

0x866a,	// (0x00034efd) fep_entry_item_pane_t1

0x8680,	// (0x00034f13) fep_candidate_item_pane_t1_ParamLimits

0x8680,	// (0x00034f13) fep_candidate_item_pane_t1

0x8695,	// (0x00034f28) fep_candidate_item_pane_t2_ParamLimits

0x8695,	// (0x00034f28) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x0003bfdb) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x0003bfdb) fep_candidate_item_pane_t

0x73ab,	// (0x00033c3e) list_highlight_pane_cp31_ParamLimits

0x73ab,	// (0x00033c3e) list_highlight_pane_cp31

0x86a7,	// (0x00034f3a) level_1_signal_lsc

0x86b0,	// (0x00034f43) level_2_signal_lsc

0x86b9,	// (0x00034f4c) level_3_signal_lsc

0x86c2,	// (0x00034f55) level_4_signal_lsc

0x86cb,	// (0x00034f5e) level_5_signal_lsc

0x86d4,	// (0x00034f67) level_6_signal_lsc

0x86dd,	// (0x00034f70) level_7_signal_lsc

0x86dd,	// (0x00034f70) level_1_battery_lsc

0x86e6,	// (0x00034f79) level_2_battery_lsc

0x86ef,	// (0x00034f82) level_3_battery_lsc

0x86f8,	// (0x00034f8b) level_4_battery_lsc

0x8701,	// (0x00034f94) level_5_battery_lsc

0x870a,	// (0x00034f9d) level_6_battery_lsc

0x86a7,	// (0x00034f3a) level_7_battery_lsc

0x8713,	// (0x00034fa6) scroll_handle_focus_pane_g1

0x871c,	// (0x00034faf) scroll_handle_focus_pane_g2

0x8725,	// (0x00034fb8) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x0003bfe0) scroll_handle_focus_pane_g

0x5839,	// (0x000320cc) list_single_2graphic_pane_g1_ParamLimits

0x5839,	// (0x000320cc) list_single_2graphic_pane_g1

0x4f0a,	// (0x0003179d) list_single_2graphic_pane_g2_ParamLimits

0x4f0a,	// (0x0003179d) list_single_2graphic_pane_g2

0x4e90,	// (0x00031723) list_single_2graphic_pane_g3_ParamLimits

0x4e90,	// (0x00031723) list_single_2graphic_pane_g3

0x5845,	// (0x000320d8) list_single_2graphic_pane_g4_ParamLimits

0x5845,	// (0x000320d8) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x0003bfe7) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x0003bfe7) list_single_2graphic_pane_g

0x5851,	// (0x000320e4) list_single_2graphic_pane_t1_ParamLimits

0x5851,	// (0x000320e4) list_single_2graphic_pane_t1

0x587f,	// (0x00032112) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x587f,	// (0x00032112) list_double2_graphic_large_graphic_pane_g1

0x512d,	// (0x000319c0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x512d,	// (0x000319c0) list_double2_graphic_large_graphic_pane_g2

0x513e,	// (0x000319d1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x513e,	// (0x000319d1) list_double2_graphic_large_graphic_pane_g3

0x5891,	// (0x00032124) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5891,	// (0x00032124) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x0003bff0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x0003bff0) list_double2_graphic_large_graphic_pane_g

0x589d,	// (0x00032130) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x589d,	// (0x00032130) list_double2_graphic_large_graphic_pane_t1

0x58b3,	// (0x00032146) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x58b3,	// (0x00032146) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x0003bff9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x0003bff9) list_double2_graphic_large_graphic_pane_t

0x8867,	// (0x000350fa) popup_fast_swap_window_ParamLimits

0x8867,	// (0x000350fa) popup_fast_swap_window

0x8885,	// (0x00035118) popup_side_volume_key_window

0x88a3,	// (0x00035136) stacon_top_pane

0x88ad,	// (0x00035140) status_pane_ParamLimits

0x88ad,	// (0x00035140) status_pane

0x88a3,	// (0x00035136) status_small_pane

0x327f,	// (0x0002fb12) control_pane

0x327f,	// (0x0002fb12) stacon_bottom_pane

0x7c15,	// (0x000344a8) scroll_pane_cp121

0x7c0c,	// (0x0003449f) set_content_pane

0x872e,	// (0x00034fc1) bg_active_tab_pane_g1_cp1

0x8737,	// (0x00034fca) bg_active_tab_pane_g2_cp1

0x8740,	// (0x00034fd3) bg_active_tab_pane_g3_cp1

0x872e,	// (0x00034fc1) bg_passive_tab_pane_g1_cp1

0x8737,	// (0x00034fca) bg_passive_tab_pane_g2_cp1

0x8740,	// (0x00034fd3) bg_passive_tab_pane_g3_cp1

0x8749,	// (0x00034fdc) bg_active_tab_pane_g1_cp2

0x8737,	// (0x00034fca) bg_active_tab_pane_g2_cp2

0x8752,	// (0x00034fe5) bg_active_tab_pane_g3_cp2

0x8749,	// (0x00034fdc) bg_passive_tab_pane_g1_cp2

0x8737,	// (0x00034fca) bg_passive_tab_pane_g2_cp2

0x8752,	// (0x00034fe5) bg_passive_tab_pane_g3_cp2

0x875b,	// (0x00034fee) bg_active_tab_pane_g1_cp3

0x8737,	// (0x00034fca) bg_active_tab_pane_g2_cp3

0x8764,	// (0x00034ff7) bg_active_tab_pane_g3_cp3

0x875b,	// (0x00034fee) bg_passive_tab_pane_g1_cp3

0x8737,	// (0x00034fca) bg_passive_tab_pane_g2_cp3

0x8764,	// (0x00034ff7) bg_passive_tab_pane_g3_cp3

0x876d,	// (0x00035000) bg_active_tab_pane_g1_cp4

0x8737,	// (0x00034fca) bg_active_tab_pane_g2_cp4

0x8778,	// (0x0003500b) bg_active_tab_pane_g3_cp4

0x876d,	// (0x00035000) bg_passive_tab_pane_g1_cp4

0x8737,	// (0x00034fca) bg_passive_tab_pane_g2_cp4

0x8778,	// (0x0003500b) bg_passive_tab_pane_g3_cp4

0x87c1,	// (0x00035054) bg_active_tab_pane_g1_cp5

0x8737,	// (0x00034fca) bg_active_tab_pane_g2_cp5

0x87ca,	// (0x0003505d) bg_active_tab_pane_g3_cp5

0x87c1,	// (0x00035054) bg_passive_tab_pane_g1_cp5

0x8737,	// (0x00034fca) bg_passive_tab_pane_g2_cp5

0x87ca,	// (0x0003505d) bg_passive_tab_pane_g3_cp5

0x87d3,	// (0x00035066) list_set_graphic_pane_ParamLimits

0x87d3,	// (0x00035066) list_set_graphic_pane

0x327f,	// (0x0002fb12) bg_set_opt_pane_cp4

0x87e8,	// (0x0003507b) list_set_graphic_pane_g1_ParamLimits

0x87e8,	// (0x0003507b) list_set_graphic_pane_g1

0x87f4,	// (0x00035087) list_set_graphic_pane_g2_ParamLimits

0x87f4,	// (0x00035087) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x0003bffe) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x0003bffe) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x0003c368) volume_small_pane_cp_g

0x8818,	// (0x000350ab) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8818,	// (0x000350ab) list_double2_large_graphic_pane_g1_cp2

0x8826,	// (0x000350b9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8826,	// (0x000350b9) list_double2_large_graphic_pane_g2_cp2

0x8837,	// (0x000350ca) list_double2_large_graphic_pane_g3_cp2

0x883f,	// (0x000350d2) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x883f,	// (0x000350d2) list_double2_large_graphic_pane_t1_cp2

0x8855,	// (0x000350e8) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8855,	// (0x000350e8) list_double2_large_graphic_pane_t2_cp2

0xaad6,	// (0x00037369) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaad6,	// (0x00037369) list_double_large_graphic_pane_g1_cp2

0xaae9,	// (0x0003737c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaae9,	// (0x0003737c) list_double_large_graphic_pane_g2_cp2

0x89cb,	// (0x0003525e) list_double_large_graphic_pane_g3_cp2

0xaafa,	// (0x0003738d) list_double_large_graphic_pane_g4_cp

0xab02,	// (0x00037395) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab02,	// (0x00037395) list_double_large_graphic_pane_t1_cp2

0xab19,	// (0x000373ac) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab19,	// (0x000373ac) list_double_large_graphic_pane_t2_cp2

0x88bb,	// (0x0003514e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x88bb,	// (0x0003514e) list_double2_graphic_pane_g1_cp2

0x88c9,	// (0x0003515c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x88c9,	// (0x0003515c) list_double2_graphic_pane_g2_cp2

0x88da,	// (0x0003516d) list_double2_graphic_pane_g3_cp2

0x88e4,	// (0x00035177) list_double2_graphic_pane_t1_cp2_ParamLimits

0x88e4,	// (0x00035177) list_double2_graphic_pane_t1_cp2

0x88fa,	// (0x0003518d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x88fa,	// (0x0003518d) list_double2_graphic_pane_t2_cp2

0x890c,	// (0x0003519f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x890c,	// (0x0003519f) list_single_number_heading_pane_g1_cp2

0x8918,	// (0x000351ab) list_single_number_heading_pane_g2_cp2

0x8920,	// (0x000351b3) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8920,	// (0x000351b3) list_single_number_heading_pane_t1_cp2

0x8936,	// (0x000351c9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8936,	// (0x000351c9) list_single_number_heading_pane_t2_cp2

0x894a,	// (0x000351dd) list_single_number_heading_pane_t3_cp2_ParamLimits

0x894a,	// (0x000351dd) list_single_number_heading_pane_t3_cp2

0x890c,	// (0x0003519f) list_single_heading_pane_g1_cp2_ParamLimits

0x890c,	// (0x0003519f) list_single_heading_pane_g1_cp2

0x8918,	// (0x000351ab) list_single_heading_pane_g2_cp2

0x8920,	// (0x000351b3) list_single_heading_pane_t1_cp2_ParamLimits

0x8920,	// (0x000351b3) list_single_heading_pane_t1_cp2

0xa8d0,	// (0x00037163) list_single_heading_pane_t2_cp2_ParamLimits

0xa8d0,	// (0x00037163) list_single_heading_pane_t2_cp2

0xa812,	// (0x000370a5) list_double_graphic_pane_g1_cp2_ParamLimits

0xa812,	// (0x000370a5) list_double_graphic_pane_g1_cp2

0xa81e,	// (0x000370b1) list_double_graphic_pane_g2_cp2_ParamLimits

0xa81e,	// (0x000370b1) list_double_graphic_pane_g2_cp2

0xa82d,	// (0x000370c0) list_double_graphic_pane_g3_cp2

0xa835,	// (0x000370c8) list_double_graphic_pane_t1_cp2_ParamLimits

0xa835,	// (0x000370c8) list_double_graphic_pane_t1_cp2

0xa84b,	// (0x000370de) list_double_graphic_pane_t2_cp2_ParamLimits

0xa84b,	// (0x000370de) list_double_graphic_pane_t2_cp2

0x89bf,	// (0x00035252) list_double_number_pane_g1_cp2_ParamLimits

0x89bf,	// (0x00035252) list_double_number_pane_g1_cp2

0x89cb,	// (0x0003525e) list_double_number_pane_g2_cp2

0xa7d6,	// (0x00037069) list_double_number_pane_t1_cp2_ParamLimits

0xa7d6,	// (0x00037069) list_double_number_pane_t1_cp2

0xa7ea,	// (0x0003707d) list_double_number_pane_t2_cp2_ParamLimits

0xa7ea,	// (0x0003707d) list_double_number_pane_t2_cp2

0xa800,	// (0x00037093) list_double_number_pane_t3_cp2_ParamLimits

0xa800,	// (0x00037093) list_double_number_pane_t3_cp2

0xa6bf,	// (0x00036f52) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6bf,	// (0x00036f52) list_single_graphic_pane_g1_cp2

0x8a25,	// (0x000352b8) list_single_graphic_pane_g2_cp2_ParamLimits

0x8a25,	// (0x000352b8) list_single_graphic_pane_g2_cp2

0x8a31,	// (0x000352c4) list_single_graphic_pane_g3_cp2

0xa695,	// (0x00036f28) list_single_graphic_pane_t1_cp2_ParamLimits

0xa695,	// (0x00036f28) list_single_graphic_pane_t1_cp2

0x8a25,	// (0x000352b8) list_single_number_pane_g1_cp2_ParamLimits

0x8a25,	// (0x000352b8) list_single_number_pane_g1_cp2

0x8a31,	// (0x000352c4) list_single_number_pane_g2_cp2

0xa695,	// (0x00036f28) list_single_number_pane_t1_cp2_ParamLimits

0xa695,	// (0x00036f28) list_single_number_pane_t1_cp2

0xa6ab,	// (0x00036f3e) list_single_number_pane_t2_cp2_ParamLimits

0xa6ab,	// (0x00036f3e) list_single_number_pane_t2_cp2

0x8826,	// (0x000350b9) list_double2_pane_g1_cp2_ParamLimits

0x8826,	// (0x000350b9) list_double2_pane_g1_cp2

0x8837,	// (0x000350ca) list_double2_pane_g2_cp2

0x8997,	// (0x0003522a) list_double2_pane_t1_cp2_ParamLimits

0x8997,	// (0x0003522a) list_double2_pane_t1_cp2

0x89ad,	// (0x00035240) list_double2_pane_t2_cp2_ParamLimits

0x89ad,	// (0x00035240) list_double2_pane_t2_cp2

0x89bf,	// (0x00035252) list_double_pane_g1_cp2_ParamLimits

0x89bf,	// (0x00035252) list_double_pane_g1_cp2

0x89cb,	// (0x0003525e) list_double_pane_g2_cp2

0x89d3,	// (0x00035266) list_double_pane_t1_cp2_ParamLimits

0x89d3,	// (0x00035266) list_double_pane_t1_cp2

0x89e9,	// (0x0003527c) list_double_pane_t2_cp2_ParamLimits

0x89e9,	// (0x0003527c) list_double_pane_t2_cp2

0x8a15,	// (0x000352a8) list_single_pane_cp2_g3

0x8a25,	// (0x000352b8) list_single_pane_g1_cp2_ParamLimits

0x8a25,	// (0x000352b8) list_single_pane_g1_cp2

0x8a31,	// (0x000352c4) list_single_pane_g2_cp2

0x8a39,	// (0x000352cc) list_single_pane_t1_cp2_ParamLimits

0x8a39,	// (0x000352cc) list_single_pane_t1_cp2

0x8a51,	// (0x000352e4) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8a51,	// (0x000352e4) list_single_large_graphic_pane_g1_cp2

0x8a5f,	// (0x000352f2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8a5f,	// (0x000352f2) list_single_large_graphic_pane_g2_cp2

0x8a6b,	// (0x000352fe) list_single_large_graphic_pane_g3_cp2

0x8a73,	// (0x00035306) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8a73,	// (0x00035306) list_single_large_graphic_pane_g4_cp1

0x8a8d,	// (0x00035320) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8a8d,	// (0x00035320) list_single_large_graphic_pane_t1_cp2

0xa65f,	// (0x00036ef2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa65f,	// (0x00036ef2) list_single_graphic_heading_pane_g1_cp2

0xa62c,	// (0x00036ebf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa62c,	// (0x00036ebf) list_single_graphic_heading_pane_g4_cp2

0x8a31,	// (0x000352c4) list_single_graphic_heading_pane_g5_cp2

0xa66b,	// (0x00036efe) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa66b,	// (0x00036efe) list_single_graphic_heading_pane_t1_cp2

0xa681,	// (0x00036f14) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa681,	// (0x00036f14) list_single_graphic_heading_pane_t2_cp2

0xa620,	// (0x00036eb3) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa620,	// (0x00036eb3) list_single_2graphic_pane_g1_cp2

0xa62c,	// (0x00036ebf) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa62c,	// (0x00036ebf) list_single_2graphic_pane_g2_cp2

0x8a31,	// (0x000352c4) list_single_2graphic_pane_g3_cp2

0xa63d,	// (0x00036ed0) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa63d,	// (0x00036ed0) list_single_2graphic_pane_g4_cp2

0xa649,	// (0x00036edc) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa649,	// (0x00036edc) list_single_2graphic_pane_t1_cp2

0x3275,	// (0x0002fb08) list_highlight_pane_g10_cp1

0xa1f8,	// (0x00036a8b) list_highlight_pane_g1_cp1

0xa200,	// (0x00036a93) list_highlight_pane_g2_cp1

0xa208,	// (0x00036a9b) list_highlight_pane_g3_cp1

0xa210,	// (0x00036aa3) list_highlight_pane_g4_cp1

0xa218,	// (0x00036aab) list_highlight_pane_g5_cp1

0xa220,	// (0x00036ab3) list_highlight_pane_g6_cp1

0xa228,	// (0x00036abb) list_highlight_pane_g7_cp1

0xa230,	// (0x00036ac3) list_highlight_pane_g8_cp1

0xa238,	// (0x00036acb) list_highlight_pane_g9_cp1

0xa118,	// (0x000369ab) form_field_slider_pane_t3

0xa126,	// (0x000369b9) form_field_slider_pane_t4

0xa134,	// (0x000369c7) slider_form_pane_ParamLimits

0xa134,	// (0x000369c7) slider_form_pane

0x327f,	// (0x0002fb12) control_abbreviations

0x327f,	// (0x0002fb12) control_conventions

0x327f,	// (0x0002fb12) control_definitions

0x327f,	// (0x0002fb12) format_table_attribute

0xa926,	// (0x000371b9) bg_popup_preview_window_pane_g9

0x327f,	// (0x0002fb12) format_table_data2

0x327f,	// (0x0002fb12) format_table_data3

0x327f,	// (0x0002fb12) format_table_data_example

0x0008,

0x327f,	// (0x0002fb12) intro_purpose

0xf900,	// (0x0003c193) bg_popup_preview_window_pane_g

0x327f,	// (0x0002fb12) texts_category

0x327f,	// (0x0002fb12) texts_graphics

0x8aa3,	// (0x00035336) text_digital

0x8ab2,	// (0x00035345) text_primary

0x8ac1,	// (0x00035354) text_primary_small

0x8ad0,	// (0x00035363) text_secondary

0x8adf,	// (0x00035372) text_title

0xb0c2,	// (0x00037955) bg_passive_tab_pane_g1_cp3_srt

0x8737,	// (0x00034fca) bg_passive_tab_pane_g2_cp3_srt

0xb0cb,	// (0x0003795e) bg_passive_tab_pane_g3_cp3_srt

0x73ab,	// (0x00033c3e) bg_active_tab_pane_cp3_srt_ParamLimits

0x73ab,	// (0x00033c3e) bg_active_tab_pane_cp3_srt

0xb0d4,	// (0x00037967) tabs_4_active_pane_srt_g1

0xb0dc,	// (0x0003796f) tabs_4_active_pane_srt_t1_ParamLimits

0xb0dc,	// (0x0003796f) tabs_4_active_pane_srt_t1

0xb0c2,	// (0x00037955) bg_active_tab_pane_g1_cp3_copy1

0x8737,	// (0x00034fca) bg_active_tab_pane_g2_cp3_copy1

0xb0cb,	// (0x0003795e) bg_active_tab_pane_g3_cp3_copy1

0x73ab,	// (0x00033c3e) tabs_2_long_active_pane_srt_ParamLimits

0x73ab,	// (0x00033c3e) tabs_2_long_active_pane_srt

0x73ab,	// (0x00033c3e) tabs_2_long_passive_pane_srt_ParamLimits

0x73ab,	// (0x00033c3e) tabs_2_long_passive_pane_srt

0x7e29,	// (0x000346bc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7e29,	// (0x000346bc) bg_passive_tab_pane_cp4_srt

0xad76,	// (0x00037609) bg_passive_tab_pane_g1_cp4_srt

0x8737,	// (0x00034fca) bg_passive_tab_pane_g2_cp4_srt

0xad7f,	// (0x00037612) bg_passive_tab_pane_g3_cp4_srt

0x7e08,	// (0x0003469b) bg_active_tab_pane_cp4_srt_ParamLimits

0x7e08,	// (0x0003469b) bg_active_tab_pane_cp4_srt

0xad88,	// (0x0003761b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad88,	// (0x0003761b) tabs_2_long_active_pane_srt_t1

0xad76,	// (0x00037609) bg_active_tab_pane_g1_cp4_srt

0x8737,	// (0x00034fca) bg_active_tab_pane_g2_cp4_srt

0xad7f,	// (0x00037612) bg_active_tab_pane_g3_cp4_srt

0x7627,	// (0x00033eba) tabs_3_long_active_pane_srt_ParamLimits

0x7627,	// (0x00033eba) tabs_3_long_active_pane_srt

0x7627,	// (0x00033eba) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7627,	// (0x00033eba) tabs_3_long_passive_pane_cp_srt

0x7627,	// (0x00033eba) tabs_3_long_passive_pane_srt_ParamLimits

0x7627,	// (0x00033eba) tabs_3_long_passive_pane_srt

0x7e29,	// (0x000346bc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7e29,	// (0x000346bc) bg_passive_tab_pane_cp5_srt

0x87c1,	// (0x00035054) bg_passive_tab_pane_g1_cp5_srt

0x8737,	// (0x00034fca) bg_passive_tab_pane_g2_cp5_srt

0x87ca,	// (0x0003505d) bg_passive_tab_pane_g3_cp5_srt

0x7e08,	// (0x0003469b) bg_active_tab_pane_cp5_srt_ParamLimits

0x7e08,	// (0x0003469b) bg_active_tab_pane_cp5_srt

0xad64,	// (0x000375f7) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad64,	// (0x000375f7) tabs_3_long_active_pane_srt_t1

0x87c1,	// (0x00035054) bg_active_tab_pane_g1_cp5_srt

0x8737,	// (0x00034fca) bg_active_tab_pane_g2_cp5_srt

0x87ca,	// (0x0003505d) bg_active_tab_pane_g3_cp5_srt

0xad56,	// (0x000375e9) navi_text_pane_srt_t1

0xad4e,	// (0x000375e1) navi_icon_pane_srt_g1

0x8cb6,	// (0x00035549) midp_editing_number_pane_srt

0x8aee,	// (0x00035381) midp_ticker_pane_srt

0x8cbe,	// (0x00035551) midp_ticker_pane_srt_g1

0x8cc6,	// (0x00035559) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0003c01d) midp_ticker_pane_srt_g

0x8cce,	// (0x00035561) midp_ticker_pane_srt_t1

0xad3f,	// (0x000375d2) midp_editing_number_pane_t1_copy1

0x8af6,	// (0x00035389) listscroll_midp_pane

0x8af6,	// (0x00035389) midp_form_pane

0x8b64,	// (0x000353f7) midp_info_popup_window_ParamLimits

0x8b64,	// (0x000353f7) midp_info_popup_window

0x7cea,	// (0x0003457d) bg_popup_sub_pane_cp50_ParamLimits

0x7cea,	// (0x0003457d) bg_popup_sub_pane_cp50

0x9e2e,	// (0x000366c1) listscroll_midp_info_pane_ParamLimits

0x9e2e,	// (0x000366c1) listscroll_midp_info_pane

0x9e16,	// (0x000366a9) listscroll_form_midp_pane_ParamLimits

0x9e16,	// (0x000366a9) listscroll_form_midp_pane

0x9e22,	// (0x000366b5) scroll_bar_cp050

0x9df6,	// (0x00036689) list_midp_pane

0xbb4c,	// (0x000383df) signal_pane_g2_cp

0x9d30,	// (0x000365c3) listscroll_midp_info_pane_t1_ParamLimits

0x9d30,	// (0x000365c3) listscroll_midp_info_pane_t1

0x9d48,	// (0x000365db) listscroll_midp_info_pane_t2_ParamLimits

0x9d48,	// (0x000365db) listscroll_midp_info_pane_t2

0x9d86,	// (0x00036619) listscroll_midp_info_pane_t3_ParamLimits

0x9d86,	// (0x00036619) listscroll_midp_info_pane_t3

0x9dc0,	// (0x00036653) listscroll_midp_info_pane_t4_ParamLimits

0x9dc0,	// (0x00036653) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x0003c0ce) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x0003c0ce) listscroll_midp_info_pane_t

0x7db4,	// (0x00034647) scroll_pane_cp21

0x9cca,	// (0x0003655d) form_midp_field_choice_group_pane

0x9cd3,	// (0x00036566) form_midp_field_text_pane

0x9d16,	// (0x000365a9) form_midp_field_time_pane

0x9d1e,	// (0x000365b1) form_midp_gauge_slider_pane

0x9d27,	// (0x000365ba) form_midp_gauge_wait_pane

0x327f,	// (0x0002fb12) form_midp_image_pane

0x5dec,	// (0x0003267f) list_single_midp_pane_ParamLimits

0x5dec,	// (0x0003267f) list_single_midp_pane

0x9c8e,	// (0x00036521) form_midp_field_text_pane_t1

0x9aa2,	// (0x00036335) input_focus_pane_cp050

0x9cb9,	// (0x0003654c) list_midp_form_text_pane

0x9c5d,	// (0x000364f0) form_midp_field_choice_group_pane_t1

0x9c6b,	// (0x000364fe) input_focus_pane_cp051

0x9c7f,	// (0x00036512) list_midp_choice_pane

0x327f,	// (0x0002fb12) status_idle_pane

0x9c41,	// (0x000364d4) form_midp_field_time_pane_t1

0x3275,	// (0x0002fb08) wait_anim_pane_g2_copy1

0x9c4f,	// (0x000364e2) form_midp_field_time_pane_t2

0x0001,

0x8c14,	// (0x000354a7) aid_navinavi_width_2_pane

0xf836,	// (0x0003c0c9) form_midp_field_time_pane_t

0x327f,	// (0x0002fb12) input_focus_pane_cp052

0x327f,	// (0x0002fb12) bg_input_focus_pane_cp040

0x9c01,	// (0x00036494) form_midp_gauge_slider_pane_t1

0x9c0f,	// (0x000364a2) form_midp_gauge_slider_pane_t2

0x9c1d,	// (0x000364b0) form_midp_gauge_slider_pane_t3

0x9c2b,	// (0x000364be) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x0003c0c0) form_midp_gauge_slider_pane_t

0x9c39,	// (0x000364cc) form_midp_slider_pane

0x73ab,	// (0x00033c3e) bg_input_focus_pane_cp041_ParamLimits

0x73ab,	// (0x00033c3e) bg_input_focus_pane_cp041

0x9bce,	// (0x00036461) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bce,	// (0x00036461) form_midp_gauge_wait_pane_t1

0x9be0,	// (0x00036473) form_midp_gauge_wait_pane_t2_ParamLimits

0x9be0,	// (0x00036473) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x0003c0bb) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x0003c0bb) form_midp_gauge_wait_pane_t

0x9bf2,	// (0x00036485) form_midp_wait_pane_ParamLimits

0x9bf2,	// (0x00036485) form_midp_wait_pane

0x9b96,	// (0x00036429) form_midp_image_pane_g1

0x9b9f,	// (0x00036432) form_midp_image_pane_t1

0x9bae,	// (0x00036441) form_midp_image_pane_t2

0x9bbd,	// (0x00036450) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x0003c0b4) form_midp_image_pane_t

0x9b8d,	// (0x00036420) list_single_midp_pane_g1

0x5ddd,	// (0x00032670) list_single_midp_pane_t1

0x9b73,	// (0x00036406) list_midp_form_item_pane_ParamLimits

0x9b73,	// (0x00036406) list_midp_form_item_pane

0x8bbc,	// (0x0003544f) list_midp_form_item_pane_t1

0x8bcb,	// (0x0003545e) midp_ticker_pane_g1

0x8bd7,	// (0x0003546a) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x0003c003) midp_ticker_pane_g

0x8be3,	// (0x00035476) midp_ticker_pane_t1

0xafbe,	// (0x00037851) midp_editing_number_pane_t1

0xaf9c,	// (0x0003782f) midp_editing_number_pane

0xafab,	// (0x0003783e) midp_ticker_pane

0xad2f,	// (0x000375c2) ai_message_heading_pane

0x327f,	// (0x0002fb12) bg_popup_window_pane_cp14

0xad37,	// (0x000375ca) listscroll_ai_message_pane

0xacb5,	// (0x00037548) ai_message_heading_pane_g1_ParamLimits

0xacb5,	// (0x00037548) ai_message_heading_pane_g1

0xacc1,	// (0x00037554) ai_message_heading_pane_g2_ParamLimits

0xacc1,	// (0x00037554) ai_message_heading_pane_g2

0xaccf,	// (0x00037562) ai_message_heading_pane_g3_ParamLimits

0xaccf,	// (0x00037562) ai_message_heading_pane_g3

0xacdb,	// (0x0003756e) ai_message_heading_pane_g4_ParamLimits

0xacdb,	// (0x0003756e) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x0003c1f5) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x0003c1f5) ai_message_heading_pane_g

0xace7,	// (0x0003757a) ai_message_heading_pane_t1_ParamLimits

0xace7,	// (0x0003757a) ai_message_heading_pane_t1

0xad01,	// (0x00037594) ai_message_heading_pane_t2_ParamLimits

0xad01,	// (0x00037594) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x0003c1fe) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x0003c1fe) ai_message_heading_pane_t

0xad15,	// (0x000375a8) bg_popup_heading_pane_cp1_ParamLimits

0xad15,	// (0x000375a8) bg_popup_heading_pane_cp1

0xaca3,	// (0x00037536) list_ai_message_pane_ParamLimits

0xaca3,	// (0x00037536) list_ai_message_pane

0x7db4,	// (0x00034647) scroll_pane_cp10

0xac3f,	// (0x000374d2) list_ai_message_pane_g1

0xac47,	// (0x000374da) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x0003c1d2) list_ai_message_pane_g

0xac4f,	// (0x000374e2) list_ai_message_pane_t1_ParamLimits

0xac4f,	// (0x000374e2) list_ai_message_pane_t1

0xac64,	// (0x000374f7) list_ai_message_pane_t2_ParamLimits

0xac64,	// (0x000374f7) list_ai_message_pane_t2

0xac79,	// (0x0003750c) list_ai_message_pane_t3_ParamLimits

0xac79,	// (0x0003750c) list_ai_message_pane_t3

0xac8e,	// (0x00037521) list_ai_message_pane_t4_ParamLimits

0xac8e,	// (0x00037521) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x0003c1d7) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x0003c1d7) list_ai_message_pane_t

0xac28,	// (0x000374bb) cell_ai_soft_ind_pane_ParamLimits

0xac28,	// (0x000374bb) cell_ai_soft_ind_pane

0x8bf5,	// (0x00035488) cell_ai_soft_ind_pane_g1_ParamLimits

0x8bf5,	// (0x00035488) cell_ai_soft_ind_pane_g1

0x327f,	// (0x0002fb12) grid_highlight_cp1

0x8c02,	// (0x00035495) text_secondary_cp56_ParamLimits

0x8c02,	// (0x00035495) text_secondary_cp56

0xabfd,	// (0x00037490) example_general_pane_ParamLimits

0xabfd,	// (0x00037490) example_general_pane

0xac09,	// (0x0003749c) example_parent_pane_g1_ParamLimits

0xac09,	// (0x0003749c) example_parent_pane_g1

0xac15,	// (0x000374a8) example_parent_pane_t1_ParamLimits

0xac15,	// (0x000374a8) example_parent_pane_t1

0x9237,	// (0x00035aca) popup_preview_text_window_ParamLimits

0x9237,	// (0x00035aca) popup_preview_text_window

0x8a1d,	// (0x000352b0) list_single_pane_cp2_g4

0x76dd,	// (0x00033f70) bg_popup_preview_window_pane_ParamLimits

0x76dd,	// (0x00033f70) bg_popup_preview_window_pane

0xa930,	// (0x000371c3) popup_preview_text_window_t1_ParamLimits

0xa930,	// (0x000371c3) popup_preview_text_window_t1

0xa94e,	// (0x000371e1) popup_preview_text_window_t2_ParamLimits

0xa94e,	// (0x000371e1) popup_preview_text_window_t2

0xa997,	// (0x0003722a) popup_preview_text_window_t3_ParamLimits

0xa997,	// (0x0003722a) popup_preview_text_window_t3

0xa9dc,	// (0x0003726f) popup_preview_text_window_t4_ParamLimits

0xa9dc,	// (0x0003726f) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x0003c1a6) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x0003c1a6) popup_preview_text_window_t

0xaa5a,	// (0x000372ed) scroll_pane_cp11

0x99b0,	// (0x00036243) bg_popup_preview_window_pane_g1

0xa8e4,	// (0x00037177) bg_popup_preview_window_pane_g2

0xa8ee,	// (0x00037181) bg_popup_preview_window_pane_g3

0xa8f8,	// (0x0003718b) bg_popup_preview_window_pane_g4

0xa902,	// (0x00037195) bg_popup_preview_window_pane_g5

0xa90c,	// (0x0003719f) bg_popup_preview_window_pane_g6

0xa914,	// (0x000371a7) bg_popup_preview_window_pane_g7

0xa91c,	// (0x000371af) bg_popup_preview_window_pane_g8

0x49ff,	// (0x00031292) aid_popup_width_pane

0x9213,	// (0x00035aa6) popup_midp_note_alarm_window_ParamLimits

0x9213,	// (0x00035aa6) popup_midp_note_alarm_window

0x7c26,	// (0x000344b9) data_form_pane_ParamLimits

0x53f6,	// (0x00031c89) form_field_data_pane_g1

0x5400,	// (0x00031c93) form_field_data_pane_t1_ParamLimits

0x7c32,	// (0x000344c5) input_focus_pane_ParamLimits

0x7c40,	// (0x000344d3) data_form_wide_pane_ParamLimits

0x541a,	// (0x00031cad) form_field_data_wide_pane_g1

0x5426,	// (0x00031cb9) form_field_data_wide_pane_t1_ParamLimits

0x79a3,	// (0x00034236) input_focus_pane_cp6_ParamLimits

0x7d5f,	// (0x000345f2) input_popup_find_pane_g1_ParamLimits

0x7d5f,	// (0x000345f2) input_popup_find_pane_g1

0x5696,	// (0x00031f29) aid_navi_side_left_pane

0x56ab,	// (0x00031f3e) aid_navi_side_right_pane

0xa2f3,	// (0x00036b86) bg_popup_window_pane_cp30_ParamLimits

0xa2f3,	// (0x00036b86) bg_popup_window_pane_cp30

0xa36d,	// (0x00036c00) popup_midp_note_alarm_window_g1_ParamLimits

0xa36d,	// (0x00036c00) popup_midp_note_alarm_window_g1

0xa39d,	// (0x00036c30) popup_midp_note_alarm_window_t1_ParamLimits

0xa39d,	// (0x00036c30) popup_midp_note_alarm_window_t1

0xa43e,	// (0x00036cd1) popup_midp_note_alarm_window_t2_ParamLimits

0xa43e,	// (0x00036cd1) popup_midp_note_alarm_window_t2

0xa4ec,	// (0x00036d7f) popup_midp_note_alarm_window_t3_ParamLimits

0xa4ec,	// (0x00036d7f) popup_midp_note_alarm_window_t3

0xa51e,	// (0x00036db1) popup_midp_note_alarm_window_t4_ParamLimits

0xa51e,	// (0x00036db1) popup_midp_note_alarm_window_t4

0xa544,	// (0x00036dd7) popup_midp_note_alarm_window_t5_ParamLimits

0xa544,	// (0x00036dd7) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x0003c143) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x0003c143) popup_midp_note_alarm_window_t

0xa5f0,	// (0x00036e83) wait_bar_pane_cp1_ParamLimits

0xa5f0,	// (0x00036e83) wait_bar_pane_cp1

0x327f,	// (0x0002fb12) wait_anim_pane_copy1

0x327f,	// (0x0002fb12) wait_border_pane_copy1

0x9fd8,	// (0x0003686b) wait_border_pane_g1_copy1

0x5440,	// (0x00031cd3) form_field_popup_pane_g1

0x5448,	// (0x00031cdb) form_field_popup_pane_t1_ParamLimits

0x7c32,	// (0x000344c5) input_focus_pane_cp7_ParamLimits

0x7c6c,	// (0x000344ff) list_form_pane_ParamLimits

0x5462,	// (0x00031cf5) form_field_popup_wide_pane_g1

0x546a,	// (0x00031cfd) form_field_popup_wide_pane_t1_ParamLimits

0x7c32,	// (0x000344c5) input_focus_pane_cp8_ParamLimits

0x7c78,	// (0x0003450b) list_form_wide_pane_ParamLimits

0xb14f,	// (0x000379e2) aid_size_cell_graphic_pane

0x54f6,	// (0x00031d89) data_form_pane_t1_ParamLimits

0x607f,	// (0x00032912) data_form_wide_pane_t1_ParamLimits

0x955e,	// (0x00035df1) bg_status_flat_pane

0x730b,	// (0x00033b9e) title_pane_t1_ParamLimits

0x7373,	// (0x00033c06) title_pane_t2_ParamLimits

0x7399,	// (0x00033c2c) title_pane_t3_ParamLimits

0xf573,	// (0x0003be06) title_pane_t_ParamLimits

0x8495,	// (0x00034d28) level_1_signal_ParamLimits

0x84a2,	// (0x00034d35) level_2_signal_ParamLimits

0x84af,	// (0x00034d42) level_3_signal_ParamLimits

0x84bc,	// (0x00034d4f) level_4_signal_ParamLimits

0x84c9,	// (0x00034d5c) level_5_signal_ParamLimits

0x84d6,	// (0x00034d69) level_6_signal_ParamLimits

0x84e3,	// (0x00034d76) level_7_signal_ParamLimits

0x8495,	// (0x00034d28) level_1_battery_ParamLimits

0x84a2,	// (0x00034d35) level_2_battery_ParamLimits

0x84af,	// (0x00034d42) level_3_battery_ParamLimits

0x84bc,	// (0x00034d4f) level_4_battery_ParamLimits

0x84c9,	// (0x00034d5c) level_5_battery_ParamLimits

0x84d6,	// (0x00034d69) level_6_battery_ParamLimits

0x84e3,	// (0x00034d76) level_7_battery_ParamLimits

0xa1f8,	// (0x00036a8b) bg_status_flat_pane_g1

0xa200,	// (0x00036a93) bg_status_flat_pane_g2

0xa208,	// (0x00036a9b) bg_status_flat_pane_g3

0xa210,	// (0x00036aa3) bg_status_flat_pane_g4

0xa218,	// (0x00036aab) bg_status_flat_pane_g5

0xa220,	// (0x00036ab3) bg_status_flat_pane_g6

0xa228,	// (0x00036abb) bg_status_flat_pane_g7

0x73c1,	// (0x00033c54) tabs_3_active_pane_t1_ParamLimits

0x73c1,	// (0x00033c54) tabs_3_passive_pane_t1_ParamLimits

0x73db,	// (0x00033c6e) tabs_4_active_pane_t1_ParamLimits

0x73db,	// (0x00033c6e) tabs_4_1_passive_pane_t1_ParamLimits

0x7df6,	// (0x00034689) tabs_2_active_pane_t1_ParamLimits

0x7df6,	// (0x00034689) tabs_2_passive_pane_t1_ParamLimits

0x7e08,	// (0x0003469b) bg_active_tab_pane_cp4_ParamLimits

0x7e16,	// (0x000346a9) tabs_2_long_active_pane_t1_ParamLimits

0x7e29,	// (0x000346bc) bg_passive_tab_pane_cp4_ParamLimits

0x5d24,	// (0x000325b7) list_single_midp_graphic_pane_t1_ParamLimits

0x7e08,	// (0x0003469b) bg_active_tab_pane_cp5_ParamLimits

0x7e35,	// (0x000346c8) tabs_3_long_active_pane_t1_ParamLimits

0x7e29,	// (0x000346bc) bg_passive_tab_pane_cp5_ParamLimits

0x5d24,	// (0x000325b7) list_single_midp_graphic_pane_t1

0x955e,	// (0x00035df1) bg_status_flat_pane_ParamLimits

0x9629,	// (0x00035ebc) indicator_pane_cp2_ParamLimits

0x9629,	// (0x00035ebc) indicator_pane_cp2

0x976b,	// (0x00035ffe) navi_pane_srt_ParamLimits

0x976b,	// (0x00035ffe) navi_pane_srt

0x978f,	// (0x00036022) popup_clock_digital_analogue_window_cp1

0x748b,	// (0x00033d1e) indicator_pane_t1

0x8aee,	// (0x00035381) copy_highlight_pane

0x8aee,	// (0x00035381) cursor_graphics_pane

0x8aee,	// (0x00035381) graphic_within_text_pane

0x8aee,	// (0x00035381) link_highlight_pane

0xaa1d,	// (0x000372b0) popup_preview_text_window_t5_ParamLimits

0xaa1d,	// (0x000372b0) popup_preview_text_window_t5

0x8c1e,	// (0x000354b1) cursor_digital_pane

0x8c1e,	// (0x000354b1) cursor_primary_pane

0x8c2f,	// (0x000354c2) cursor_primary_small_pane

0x8c37,	// (0x000354ca) cursor_secondary_pane

0x8c3f,	// (0x000354d2) cursor_title_pane

0x8c1e,	// (0x000354b1) link_highlight_digital_pane

0x8c26,	// (0x000354b9) link_highlight_primary_pane

0x8c2f,	// (0x000354c2) link_highlight_primary_small_pane

0x8c37,	// (0x000354ca) link_highlight_secondary_pane

0x8c3f,	// (0x000354d2) link_highlight_title_pane

0x8c1e,	// (0x000354b1) copy_highlight_digital_pane

0x8c1e,	// (0x000354b1) copy_highlight_primary_pane

0x8c2f,	// (0x000354c2) copy_highlight_primary_small_pane

0x8c37,	// (0x000354ca) copy_highlight_secondary_pane

0x8c3f,	// (0x000354d2) copy_highlight_title_pane

0x8c37,	// (0x000354ca) graphic_text_digital_pane

0xa296,	// (0x00036b29) graphic_text_primary_pane

0xa29f,	// (0x00036b32) graphic_text_primary_small_pane

0x8c2f,	// (0x000354c2) graphic_text_secondary_pane

0x8c1e,	// (0x000354b1) graphic_text_title_pane

0x8c47,	// (0x000354da) cursor_primary_pane_g1

0xa288,	// (0x00036b1b) cursor_text_primary_t1

0xa270,	// (0x00036b03) cursor_primary_small_pane_g1

0xa27a,	// (0x00036b0d) cursor_text_primary_small_t1

0xa258,	// (0x00036aeb) cursor_primary_small_pane_g1_copy1

0xa262,	// (0x00036af5) cursor_text_primary_small_t1_copy1

0xa240,	// (0x00036ad3) cursor_text_title_t1

0xa24e,	// (0x00036ae1) cursor_title_pane_g1

0x8c47,	// (0x000354da) cursor_digital_pane_g1

0x8c51,	// (0x000354e4) cursor_text_digital_t1

0x8c5f,	// (0x000354f2) link_highlight_primary_pane_g1

0xa1e9,	// (0x00036a7c) link_highlight_primary_pane_t1

0x8c5f,	// (0x000354f2) link_highlight_primary_small_pane_g1

0x8c67,	// (0x000354fa) link_highlight_primary_small_pane_t1

0x8c76,	// (0x00035509) link_highlight_secondary_pane_g1

0x8c7e,	// (0x00035511) link_highlight_secondary_pane_t1

0xa15d,	// (0x000369f0) link_highlight_title_pane_g1

0xa165,	// (0x000369f8) link_highlight_title_pane_t1

0xa146,	// (0x000369d9) link_highlight_digital_pane_g1

0xa14e,	// (0x000369e1) link_highlight_digital_pane_t1

0xa00e,	// (0x000368a1) copy_highlight_primary_pane_g1

0xa025,	// (0x000368b8) copy_highlight_primary_pane_t1

0xa00e,	// (0x000368a1) copy_highlight_primary_small_pane_g1

0xa016,	// (0x000368a9) copy_highlight_primary_small_pane_t1

0x8c8d,	// (0x00035520) copy_highlight_secondary_pane_g1

0x8c95,	// (0x00035528) copy_highlight_secondary_pane_t1

0x9ff7,	// (0x0003688a) copy_highlight_title_pane_g1

0x9fff,	// (0x00036892) copy_highlight_title_pane_t1

0xa00e,	// (0x000368a1) copy_highlight_digital_pane_g1

0xb31f,	// (0x00037bb2) copy_highlight_digital_pane_t1

0xb273,	// (0x00037b06) graphic_text_primary_pane_g1

0xb303,	// (0x00037b96) graphic_text_primary_pane_t1

0xb311,	// (0x00037ba4) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x0003c272) graphic_text_primary_pane_t

0xb2df,	// (0x00037b72) graphic_text_primary_small_pane_g1

0xb2e7,	// (0x00037b7a) graphic_text_primary_small_pane_t1

0xb2f5,	// (0x00037b88) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x0003c26d) graphic_text_primary_small_pane_t

0xb2bb,	// (0x00037b4e) graphic_text_secondary_pane_g1

0xb2c3,	// (0x00037b56) graphic_text_secondary_pane_t1

0xb2d1,	// (0x00037b64) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x0003c268) graphic_text_secondary_pane_t

0xb297,	// (0x00037b2a) graphic_text_title_pane_g1

0xb29f,	// (0x00037b32) graphic_text_title_pane_t1

0xb2ad,	// (0x00037b40) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x0003c263) graphic_text_title_pane_t

0xb273,	// (0x00037b06) graphic_text_digital_pane_g1

0xb27b,	// (0x00037b0e) graphic_text_digital_pane_t1

0xb289,	// (0x00037b1c) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x0003c25e) graphic_text_digital_pane_t

0x73ab,	// (0x00033c3e) navi_icon_pane_srt_ParamLimits

0x73ab,	// (0x00033c3e) navi_icon_pane_srt

0x327f,	// (0x0002fb12) navi_midp_pane_srt

0x327f,	// (0x0002fb12) navi_navi_pane_srt

0x73ab,	// (0x00033c3e) navi_text_pane_srt_ParamLimits

0x73ab,	// (0x00033c3e) navi_text_pane_srt

0xb23e,	// (0x00037ad1) navi_navi_icon_text_pane_srt

0xb246,	// (0x00037ad9) navi_navi_pane_srt_g1_ParamLimits

0xb246,	// (0x00037ad9) navi_navi_pane_srt_g1

0xb258,	// (0x00037aeb) navi_navi_pane_srt_g2_ParamLimits

0xb258,	// (0x00037aeb) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x0003c259) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x0003c259) navi_navi_pane_srt_g

0xb26a,	// (0x00037afd) navi_navi_tabs_pane_srt

0xb23e,	// (0x00037ad1) navi_navi_text_pane_srt

0xb23e,	// (0x00037ad1) navi_navi_volume_pane_srt

0xb22f,	// (0x00037ac2) navi_navi_text_pane_srt_t1

0x61b8,	// (0x00032a4b) navi_navi_volume_pane_srt_g1

0x61c0,	// (0x00032a53) volume_small_pane_srt_ParamLimits

0x61c0,	// (0x00032a53) volume_small_pane_srt

0x5a09,	// (0x0003229c) volume_small_pane_srt_g1_ParamLimits

0x5a09,	// (0x0003229c) volume_small_pane_srt_g1

0x5a19,	// (0x000322ac) volume_small_pane_srt_g2_ParamLimits

0x5a19,	// (0x000322ac) volume_small_pane_srt_g2

0x5a2a,	// (0x000322bd) volume_small_pane_srt_g3_ParamLimits

0x5a2a,	// (0x000322bd) volume_small_pane_srt_g3

0x5a3b,	// (0x000322ce) volume_small_pane_srt_g4_ParamLimits

0x5a3b,	// (0x000322ce) volume_small_pane_srt_g4

0x5a4c,	// (0x000322df) volume_small_pane_srt_g5_ParamLimits

0x5a4c,	// (0x000322df) volume_small_pane_srt_g5

0x5a5d,	// (0x000322f0) volume_small_pane_srt_g6_ParamLimits

0x5a5d,	// (0x000322f0) volume_small_pane_srt_g6

0x5a6e,	// (0x00032301) volume_small_pane_srt_g7_ParamLimits

0x5a6e,	// (0x00032301) volume_small_pane_srt_g7

0x5a7f,	// (0x00032312) volume_small_pane_srt_g8_ParamLimits

0x5a7f,	// (0x00032312) volume_small_pane_srt_g8

0x5a90,	// (0x00032323) volume_small_pane_srt_g9_ParamLimits

0x5a90,	// (0x00032323) volume_small_pane_srt_g9

0x5aa1,	// (0x00032334) volume_small_pane_srt_g10_ParamLimits

0x5aa1,	// (0x00032334) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0003c008) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0003c008) volume_small_pane_srt_g

0x7792,	// (0x00034025) query_popup_data_pane_cp2

0xb215,	// (0x00037aa8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb215,	// (0x00037aa8) navi_navi_icon_text_pane_srt_t1

0xa296,	// (0x00036b29) navi_tabs_2_long_pane_srt

0xa296,	// (0x00036b29) navi_tabs_2_pane_srt

0xa296,	// (0x00036b29) navi_tabs_3_long_pane_srt

0xa296,	// (0x00036b29) navi_tabs_3_pane_srt

0xa296,	// (0x00036b29) navi_tabs_4_pane_srt

0x6198,	// (0x00032a2b) tabs_2_active_pane_srt_ParamLimits

0x6198,	// (0x00032a2b) tabs_2_active_pane_srt

0x61a8,	// (0x00032a3b) tabs_2_passive_pane_srt_ParamLimits

0x61a8,	// (0x00032a3b) tabs_2_passive_pane_srt

0x8e74,	// (0x00035707) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8e74,	// (0x00035707) bg_passive_tab_pane_cp1_srt

0xb1e1,	// (0x00037a74) bg_passive_tab_pane_g1_cp1_srt

0x8737,	// (0x00034fca) bg_passive_tab_pane_g2_cp1_srt

0xb1ea,	// (0x00037a7d) bg_passive_tab_pane_g3_cp1_srt

0x73ab,	// (0x00033c3e) bg_active_tab_pane_cp1_srt_ParamLimits

0x73ab,	// (0x00033c3e) bg_active_tab_pane_cp1_srt

0xb1f3,	// (0x00037a86) tabs_2_active_pane_srt_g1

0xb1fb,	// (0x00037a8e) tabs_2_active_pane_srt_t1_ParamLimits

0xb1fb,	// (0x00037a8e) tabs_2_active_pane_srt_t1

0xb1e1,	// (0x00037a74) bg_active_tab_pane_g1_cp1_srt

0x8737,	// (0x00034fca) bg_active_tab_pane_g2_cp1_srt

0xb1ea,	// (0x00037a7d) bg_active_tab_pane_g3_cp1_srt

0x6165,	// (0x000329f8) tabs_3_active_pane_srt_ParamLimits

0x6165,	// (0x000329f8) tabs_3_active_pane_srt

0x6176,	// (0x00032a09) tabs_3_passive_pane_cp_srt_ParamLimits

0x6176,	// (0x00032a09) tabs_3_passive_pane_cp_srt

0x6187,	// (0x00032a1a) tabs_3_passive_pane_srt_ParamLimits

0x6187,	// (0x00032a1a) tabs_3_passive_pane_srt

0x8e74,	// (0x00035707) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8e74,	// (0x00035707) bg_passive_tab_pane_cp2_srt

0x8ca4,	// (0x00035537) bg_passive_tab_pane_g1_cp2_srt

0x8737,	// (0x00034fca) bg_passive_tab_pane_g2_cp2_srt

0x8cad,	// (0x00035540) bg_passive_tab_pane_g3_cp2_srt

0x73ab,	// (0x00033c3e) bg_active_tab_pane_cp2_srt_ParamLimits

0x73ab,	// (0x00033c3e) bg_active_tab_pane_cp2_srt

0xb1c7,	// (0x00037a5a) tabs_3_active_pane_srt_g1

0xb1cf,	// (0x00037a62) tabs_3_active_pane_srt_t1_ParamLimits

0xb1cf,	// (0x00037a62) tabs_3_active_pane_srt_t1

0x8ca4,	// (0x00035537) bg_active_tab_pane_g1_cp2_srt

0x8737,	// (0x00034fca) bg_active_tab_pane_g2_cp2_srt

0x8cad,	// (0x00035540) bg_active_tab_pane_g3_cp2_srt

0x611d,	// (0x000329b0) tabs_4_active_pane_srt_ParamLimits

0x611d,	// (0x000329b0) tabs_4_active_pane_srt

0x612f,	// (0x000329c2) tabs_4_passive_pane_cp2_srt_ParamLimits

0x612f,	// (0x000329c2) tabs_4_passive_pane_cp2_srt

0x8e02,	// (0x00035695) aid_size_cell_toolbar

0x7e29,	// (0x000346bc) main_idle_act_pane_ParamLimits

0x9039,	// (0x000358cc) popup_large_graphic_colour_window_ParamLimits

0x93e0,	// (0x00035c73) popup_toolbar_window_ParamLimits

0x93e0,	// (0x00035c73) popup_toolbar_window

0x60d8,	// (0x0003296b) list_single_graphic_2heading_pane_ParamLimits

0x60d8,	// (0x0003296b) list_single_graphic_2heading_pane

0x8243,	// (0x00034ad6) aid_size_cell_apps_grid_lsc_pane

0x8255,	// (0x00034ae8) aid_size_cell_apps_grid_prt_pane

0x8e74,	// (0x00035707) bg_wml_button_pane_cp1_ParamLimits

0x8e74,	// (0x00035707) bg_wml_button_pane_cp1

0x9c8e,	// (0x00036521) form_midp_field_text_pane_t1_ParamLimits

0x9aa2,	// (0x00036335) input_focus_pane_cp050_ParamLimits

0x9cb9,	// (0x0003654c) list_midp_form_text_pane_ParamLimits

0x9c6b,	// (0x000364fe) input_focus_pane_cp051_ParamLimits

0x9c7f,	// (0x00036512) list_midp_choice_pane_ParamLimits

0x9b33,	// (0x000363c6) list_single_2graphic_pane_cp3_ParamLimits

0x9b33,	// (0x000363c6) list_single_2graphic_pane_cp3

0x9b4c,	// (0x000363df) list_single_midp_graphic_pane_ParamLimits

0x9b4c,	// (0x000363df) list_single_midp_graphic_pane

0x4987,	// (0x0003121a) list_single_graphic_2heading_pane_g1_ParamLimits

0x4987,	// (0x0003121a) list_single_graphic_2heading_pane_g1

0x4993,	// (0x00031226) list_single_graphic_2heading_pane_g4_ParamLimits

0x4993,	// (0x00031226) list_single_graphic_2heading_pane_g4

0x499f,	// (0x00031232) list_single_graphic_2heading_pane_g5_ParamLimits

0x499f,	// (0x00031232) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0003c05b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0003c05b) list_single_graphic_2heading_pane_g

0x49ab,	// (0x0003123e) list_single_graphic_2heading_pane_t1_ParamLimits

0x49ab,	// (0x0003123e) list_single_graphic_2heading_pane_t1

0x49bf,	// (0x00031252) list_single_graphic_2heading_pane_t2_ParamLimits

0x49bf,	// (0x00031252) list_single_graphic_2heading_pane_t2

0x49db,	// (0x0003126e) list_single_graphic_2heading_pane_t3_ParamLimits

0x49db,	// (0x0003126e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x0003c062) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x0003c062) list_single_graphic_2heading_pane_t

0x98ee,	// (0x00036181) bg_popup_sub_pane_cp2

0x9918,	// (0x000361ab) grid_toobar_pane

0x5c18,	// (0x000324ab) cell_toolbar_pane_ParamLimits

0x5c18,	// (0x000324ab) cell_toolbar_pane

0x9954,	// (0x000361e7) cell_toolbar_pane_g1_ParamLimits

0x9954,	// (0x000361e7) cell_toolbar_pane_g1

0x9968,	// (0x000361fb) cell_toolbar_pane_g2_ParamLimits

0x9968,	// (0x000361fb) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x0003c070) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x0003c070) cell_toolbar_pane_g

0x998a,	// (0x0003621d) grid_highlight_pane_cp2_ParamLimits

0x998a,	// (0x0003621d) grid_highlight_pane_cp2

0x99a4,	// (0x00036237) toolbar_button_pane

0x99b0,	// (0x00036243) toolbar_button_pane_g1

0x99b8,	// (0x0003624b) toolbar_button_pane_g2

0x99c0,	// (0x00036253) toolbar_button_pane_g3

0x99c8,	// (0x0003625b) toolbar_button_pane_g4

0x99d0,	// (0x00036263) toolbar_button_pane_g5

0x99d8,	// (0x0003626b) toolbar_button_pane_g6

0x99e0,	// (0x00036273) toolbar_button_pane_g7

0x99e8,	// (0x0003627b) toolbar_button_pane_g8

0x99f0,	// (0x00036283) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x0003c075) toolbar_button_pane_g

0x5c8a,	// (0x0003251d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5c8a,	// (0x0003251d) list_single_2graphic_pane_g1_cp3

0x5c96,	// (0x00032529) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5c96,	// (0x00032529) list_single_2graphic_pane_g2_cp3

0x5ca7,	// (0x0003253a) list_single_2graphic_pane_g3_cp3

0x5caf,	// (0x00032542) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5caf,	// (0x00032542) list_single_2graphic_pane_g4_cp3

0x5cbb,	// (0x0003254e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5cbb,	// (0x0003254e) list_single_2graphic_pane_t1_cp3

0x5d18,	// (0x000325ab) list_single_midp_graphic_pane_g2_ParamLimits

0x5d18,	// (0x000325ab) list_single_midp_graphic_pane_g2

0x8e0a,	// (0x0003569d) aid_zoom_text_primary

0x5c08,	// (0x0003249b) aid_zoom_text_secondary

0x8d61,	// (0x000355f4) status_small_pane_g7_ParamLimits

0x8d61,	// (0x000355f4) status_small_pane_g7

0x8d84,	// (0x00035617) status_small_pane_t1_ParamLimits

0x72ee,	// (0x00033b81) title_pane_g2

0x0003,

0xf56a,	// (0x0003bdfd) title_pane_g

0x783b,	// (0x000340ce) aid_size_cell_colour_1_pane_ParamLimits

0x783b,	// (0x000340ce) aid_size_cell_colour_1_pane

0x784f,	// (0x000340e2) aid_size_cell_colour_2_pane_ParamLimits

0x784f,	// (0x000340e2) aid_size_cell_colour_2_pane

0x7863,	// (0x000340f6) aid_size_cell_colour_3_pane_ParamLimits

0x7863,	// (0x000340f6) aid_size_cell_colour_3_pane

0x7877,	// (0x0003410a) aid_size_cell_colour_4_pane_ParamLimits

0x7877,	// (0x0003410a) aid_size_cell_colour_4_pane

0x55d2,	// (0x00031e65) title_pane_stacon_g1_ParamLimits

0x55d2,	// (0x00031e65) title_pane_stacon_g1

0xa07c,	// (0x0003690f) popup_note_wait_window_g3_ParamLimits

0xa07c,	// (0x0003690f) popup_note_wait_window_g3

0xa0f3,	// (0x00036986) popup_note_wait_window_t5_ParamLimits

0xa0f3,	// (0x00036986) popup_note_wait_window_t5

0x327f,	// (0x0002fb12) main_feb_china_hwr_fs_writing_pane

0x8f00,	// (0x00035793) popup_feb_china_hwr_fs_window_ParamLimits

0x8f00,	// (0x00035793) popup_feb_china_hwr_fs_window

0x5d3a,	// (0x000325cd) aid_size_cell_hwr_fs_ParamLimits

0x5d3a,	// (0x000325cd) aid_size_cell_hwr_fs

0x9aa2,	// (0x00036335) bg_popup_sub_pane_cp3_ParamLimits

0x9aa2,	// (0x00036335) bg_popup_sub_pane_cp3

0x5d4f,	// (0x000325e2) grid_hwr_fs_pane_ParamLimits

0x5d4f,	// (0x000325e2) grid_hwr_fs_pane

0x5d67,	// (0x000325fa) linegrid_hwr_fs_pane_ParamLimits

0x5d67,	// (0x000325fa) linegrid_hwr_fs_pane

0x5d77,	// (0x0003260a) cell_hwr_fs_pane_ParamLimits

0x5d77,	// (0x0003260a) cell_hwr_fs_pane

0x9aae,	// (0x00036341) linegrid_hwr_fs_pane_g1_ParamLimits

0x9aae,	// (0x00036341) linegrid_hwr_fs_pane_g1

0x9aba,	// (0x0003634d) linegrid_hwr_fs_pane_g2_ParamLimits

0x9aba,	// (0x0003634d) linegrid_hwr_fs_pane_g2

0x9acc,	// (0x0003635f) linegrid_hwr_fs_pane_g3_ParamLimits

0x9acc,	// (0x0003635f) linegrid_hwr_fs_pane_g3

0x5d9b,	// (0x0003262e) linegrid_hwr_fs_pane_g4_ParamLimits

0x5d9b,	// (0x0003262e) linegrid_hwr_fs_pane_g4

0x5db9,	// (0x0003264c) linegrid_hwr_fs_pane_g5_ParamLimits

0x5db9,	// (0x0003264c) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x0003c0a0) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x0003c0a0) linegrid_hwr_fs_pane_g

0x9ad8,	// (0x0003636b) cell_hwr_fs_pane_g1_ParamLimits

0x9ad8,	// (0x0003636b) cell_hwr_fs_pane_g1

0x9825,	// (0x000360b8) cell_hwr_fs_pane_g2_ParamLimits

0x9825,	// (0x000360b8) cell_hwr_fs_pane_g2

0x9aee,	// (0x00036381) cell_hwr_fs_pane_g3_ParamLimits

0x9aee,	// (0x00036381) cell_hwr_fs_pane_g3

0x9afb,	// (0x0003638e) cell_hwr_fs_pane_g4_ParamLimits

0x9afb,	// (0x0003638e) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x0003c0ab) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x0003c0ab) cell_hwr_fs_pane_g

0x5dcf,	// (0x00032662) cell_hwr_fs_pane_t1

0x327f,	// (0x0002fb12) grid_highlight_pane_cp6

0x327f,	// (0x0002fb12) main_idle_act2_pane

0x7d9b,	// (0x0003462e) aid_inside_area_popup_secondary

0xa72c,	// (0x00036fbf) aid_inside_area_window_primary_ParamLimits

0xa72c,	// (0x00036fbf) aid_inside_area_window_primary

0xb32e,	// (0x00037bc1) ai2_news_ticker_pane

0xb336,	// (0x00037bc9) aid_size_cell_ai1_link_ParamLimits

0xb336,	// (0x00037bc9) aid_size_cell_ai1_link

0xb350,	// (0x00037be3) popup_ai2_data_window_ParamLimits

0xb350,	// (0x00037be3) popup_ai2_data_window

0xb36e,	// (0x00037c01) popup_ai2_link_window_ParamLimits

0xb36e,	// (0x00037c01) popup_ai2_link_window

0x9aa2,	// (0x00036335) bg_popup_sub_pane_cp4_ParamLimits

0x9aa2,	// (0x00036335) bg_popup_sub_pane_cp4

0xb384,	// (0x00037c17) grid_ai2_link_pane_ParamLimits

0xb384,	// (0x00037c17) grid_ai2_link_pane

0xb39b,	// (0x00037c2e) popup_ai2_link_window_g1_ParamLimits

0xb39b,	// (0x00037c2e) popup_ai2_link_window_g1

0xb3a7,	// (0x00037c3a) popup_ai2_link_window_g2_ParamLimits

0xb3a7,	// (0x00037c3a) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x0003c277) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x0003c277) popup_ai2_link_window_g

0xb3b8,	// (0x00037c4b) ai2_mp_button_pane

0xb3c0,	// (0x00037c53) ai2_mp_volume_pane

0x9c6b,	// (0x000364fe) bg_popup_sub_pane_cp5_ParamLimits

0x9c6b,	// (0x000364fe) bg_popup_sub_pane_cp5

0xb3c8,	// (0x00037c5b) heading_ai2_gene_pane_ParamLimits

0xb3c8,	// (0x00037c5b) heading_ai2_gene_pane

0xb3d4,	// (0x00037c67) list_ai2_gene_pane_ParamLimits

0xb3d4,	// (0x00037c67) list_ai2_gene_pane

0xb41c,	// (0x00037caf) cell_ai2_link_pane_ParamLimits

0xb41c,	// (0x00037caf) cell_ai2_link_pane

0xb432,	// (0x00037cc5) cell_ai2_link_pane_g1

0x327f,	// (0x0002fb12) grid_highlight_pane_cp7

0x61d5,	// (0x00032a68) ai2_mp_volume_pane_g1

0xb505,	// (0x00037d98) ai2_mp_volume_pane_g2

0xb47a,	// (0x00037d0d) list_ai2_gene_pane_t1

0xb50d,	// (0x00037da0) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x0003c290) ai2_mp_volume_pane_g

0x61dd,	// (0x00032a70) volume_small_pane_cp3

0xb515,	// (0x00037da8) aid_size_cell_ai2_button

0xb51d,	// (0x00037db0) grid_ai2_button_pane

0xb526,	// (0x00037db9) cell_ai2_button_pane_ParamLimits

0xb526,	// (0x00037db9) cell_ai2_button_pane

0x3275,	// (0x0002fb08) cell_ai2_button_pane_g1

0x327f,	// (0x0002fb12) grid_highlight_pane_cp8

0xb4c5,	// (0x00037d58) ai2_gene_pane_t1_ParamLimits

0xb4c5,	// (0x00037d58) ai2_gene_pane_t1

0x8df8,	// (0x0003568b) aid_height_parent_landscape

0xadd8,	// (0x0003766b) aid_height_set_list

0xade9,	// (0x0003767c) aid_size_parent

0xb14f,	// (0x000379e2) aid_size_cell_graphic_pane_ParamLimits

0xb3e4,	// (0x00037c77) popup_ai2_data_window_g1_ParamLimits

0xb3e4,	// (0x00037c77) popup_ai2_data_window_g1

0xb3f0,	// (0x00037c83) ai2_news_ticker_pane_g1

0xb3f8,	// (0x00037c8b) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x0003c27c) ai2_news_ticker_pane_g

0xb400,	// (0x00037c93) ai2_news_ticker_pane_t1

0xb40e,	// (0x00037ca1) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x0003c281) ai2_news_ticker_pane_t

0xb43b,	// (0x00037cce) heading_ai2_gene_pane_g1

0xb443,	// (0x00037cd6) heading_ai2_gene_pane_t1_ParamLimits

0xb443,	// (0x00037cd6) heading_ai2_gene_pane_t1

0xb458,	// (0x00037ceb) list_highlight_pane_cp6

0xb460,	// (0x00037cf3) ai2_gene_pane_ParamLimits

0xb460,	// (0x00037cf3) ai2_gene_pane

0xb488,	// (0x00037d1b) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x0003c286) list_ai2_gene_pane_t

0xb496,	// (0x00037d29) list_highlight_pane_cp8_ParamLimits

0xb496,	// (0x00037d29) list_highlight_pane_cp8

0xb4a7,	// (0x00037d3a) ai2_gene_pane_g1_ParamLimits

0xb4a7,	// (0x00037d3a) ai2_gene_pane_g1

0xb4b9,	// (0x00037d4c) ai2_gene_pane_g2_ParamLimits

0xb4b9,	// (0x00037d4c) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x0003c28b) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x0003c28b) ai2_gene_pane_g

0x7bc8,	// (0x0003445b) scroll_pane_cp12

0x5bc7,	// (0x0003245a) control_pane_t3_ParamLimits

0x5bc7,	// (0x0003245a) control_pane_t3

0x8d75,	// (0x00035608) status_small_pane_g8_ParamLimits

0x8d75,	// (0x00035608) status_small_pane_g8

0x8ffe,	// (0x00035891) popup_find_window_ParamLimits

0x9229,	// (0x00035abc) popup_note_image_window_ParamLimits

0x5c48,	// (0x000324db) list_double2_graphic_pane_vc_g1_ParamLimits

0x5c48,	// (0x000324db) list_double2_graphic_pane_vc_g1

0x5c54,	// (0x000324e7) list_double2_graphic_pane_vc_g2_ParamLimits

0x5c54,	// (0x000324e7) list_double2_graphic_pane_vc_g2

0x5c60,	// (0x000324f3) list_double2_graphic_pane_vc_g3_ParamLimits

0x5c60,	// (0x000324f3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0003c069) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0003c069) list_double2_graphic_pane_vc_g

0x5c6c,	// (0x000324ff) list_double2_graphic_pane_vc_t1_ParamLimits

0x5c6c,	// (0x000324ff) list_double2_graphic_pane_vc_t1

0x5cd6,	// (0x00032569) list_single_heading_pane_vc_g1_ParamLimits

0x5cd6,	// (0x00032569) list_single_heading_pane_vc_g1

0x5ce2,	// (0x00032575) list_single_heading_pane_vc_g2_ParamLimits

0x5ce2,	// (0x00032575) list_single_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003c08a) list_single_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003c08a) list_single_heading_pane_vc_g

0x5cee,	// (0x00032581) list_single_heading_pane_vc_t1_ParamLimits

0x5cee,	// (0x00032581) list_single_heading_pane_vc_t1

0x5d04,	// (0x00032597) list_single_heading_pane_vc_t2_ParamLimits

0x5d04,	// (0x00032597) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x0003c08f) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x0003c08f) list_single_heading_pane_vc_t

0x99f8,	// (0x0003628b) list_setting_number_pane_vc_g1_ParamLimits

0x99f8,	// (0x0003628b) list_setting_number_pane_vc_g1

0x9a04,	// (0x00036297) list_setting_number_pane_vc_g2_ParamLimits

0x9a04,	// (0x00036297) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x0003c094) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x0003c094) list_setting_number_pane_vc_g

0x9a10,	// (0x000362a3) list_setting_number_pane_vc_t1_ParamLimits

0x9a10,	// (0x000362a3) list_setting_number_pane_vc_t1

0x9a24,	// (0x000362b7) list_setting_number_pane_vc_t2_ParamLimits

0x9a24,	// (0x000362b7) list_setting_number_pane_vc_t2

0x9a40,	// (0x000362d3) list_setting_number_pane_vc_t3_ParamLimits

0x9a40,	// (0x000362d3) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x0003c099) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x0003c099) list_setting_number_pane_vc_t

0x9a68,	// (0x000362fb) set_value_pane_vc_ParamLimits

0x9a68,	// (0x000362fb) set_value_pane_vc

0x60d8,	// (0x0003296b) list_double2_graphic_pane_vc_ParamLimits

0x60d8,	// (0x0003296b) list_double2_graphic_pane_vc

0xafcd,	// (0x00037860) list_double2_large_graphic_pane_vc_ParamLimits

0xafcd,	// (0x00037860) list_double2_large_graphic_pane_vc

0x60d8,	// (0x0003296b) list_double2_pane_vc_ParamLimits

0x60d8,	// (0x0003296b) list_double2_pane_vc

0x60d8,	// (0x0003296b) list_double_graphic_heading_pane_vc_ParamLimits

0x60d8,	// (0x0003296b) list_double_graphic_heading_pane_vc

0x60d8,	// (0x0003296b) list_double_graphic_pane_vc_ParamLimits

0x60d8,	// (0x0003296b) list_double_graphic_pane_vc

0x60d8,	// (0x0003296b) list_double_heading_pane_vc_ParamLimits

0x60d8,	// (0x0003296b) list_double_heading_pane_vc

0xafcd,	// (0x00037860) list_double_large_graphic_pane_vc_ParamLimits

0xafcd,	// (0x00037860) list_double_large_graphic_pane_vc

0x60d8,	// (0x0003296b) list_double_number_pane_vc_ParamLimits

0x60d8,	// (0x0003296b) list_double_number_pane_vc

0x60d8,	// (0x0003296b) list_double_pane_vc_ParamLimits

0x60d8,	// (0x0003296b) list_double_pane_vc

0x60d8,	// (0x0003296b) list_double_time_pane_vc_ParamLimits

0x60d8,	// (0x0003296b) list_double_time_pane_vc

0x60d8,	// (0x0003296b) list_setting_number_pane_vc_ParamLimits

0x60d8,	// (0x0003296b) list_setting_number_pane_vc

0x60d8,	// (0x0003296b) list_setting_pane_vc_ParamLimits

0x60d8,	// (0x0003296b) list_setting_pane_vc

0x60d8,	// (0x0003296b) list_single_graphic_heading_pane_vc_ParamLimits

0x60d8,	// (0x0003296b) list_single_graphic_heading_pane_vc

0x60d8,	// (0x0003296b) list_single_heading_pane_vc_ParamLimits

0x60d8,	// (0x0003296b) list_single_heading_pane_vc

0xaff5,	// (0x00037888) list_single_number_heading_pane_vc_ParamLimits

0xaff5,	// (0x00037888) list_single_number_heading_pane_vc

0x5c48,	// (0x000324db) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5c48,	// (0x000324db) list_double_graphic_heading_pane_vc_g1

0x5cd6,	// (0x00032569) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x5cd6,	// (0x00032569) list_double_graphic_heading_pane_vc_g2

0x5ce2,	// (0x00032575) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5ce2,	// (0x00032575) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x0003c297) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0003c297) list_double_graphic_heading_pane_vc_g

0x61e6,	// (0x00032a79) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x61e6,	// (0x00032a79) list_double_graphic_heading_pane_vc_t1

0x5cee,	// (0x00032581) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5cee,	// (0x00032581) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x0003c29e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x0003c29e) list_double_graphic_heading_pane_vc_t

0x99f8,	// (0x0003628b) list_setting_pane_vc_g1_ParamLimits

0x99f8,	// (0x0003628b) list_setting_pane_vc_g1

0x9a04,	// (0x00036297) list_setting_pane_vc_g2_ParamLimits

0x9a04,	// (0x00036297) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x0003c094) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x0003c094) list_setting_pane_vc_g

0xb762,	// (0x00037ff5) list_setting_pane_vc_t1_ParamLimits

0xb762,	// (0x00037ff5) list_setting_pane_vc_t1

0xb776,	// (0x00038009) list_setting_pane_vc_t2_ParamLimits

0xb776,	// (0x00038009) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0003c2cc) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0003c2cc) list_setting_pane_vc_t

0x9a68,	// (0x000362fb) set_value_pane_cp_vc_ParamLimits

0x9a68,	// (0x000362fb) set_value_pane_cp_vc

0x5cd6,	// (0x00032569) list_single_number_heading_pane_vc_g1_ParamLimits

0x5cd6,	// (0x00032569) list_single_number_heading_pane_vc_g1

0x5ce2,	// (0x00032575) list_single_number_heading_pane_vc_g2_ParamLimits

0x5ce2,	// (0x00032575) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003c08a) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003c08a) list_single_number_heading_pane_vc_g

0x5cee,	// (0x00032581) list_single_number_heading_pane_vc_t1_ParamLimits

0x5cee,	// (0x00032581) list_single_number_heading_pane_vc_t1

0x61fa,	// (0x00032a8d) list_single_number_heading_pane_vc_t2_ParamLimits

0x61fa,	// (0x00032a8d) list_single_number_heading_pane_vc_t2

0x620e,	// (0x00032aa1) list_single_number_heading_pane_vc_t3_ParamLimits

0x620e,	// (0x00032aa1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0003c2d1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003c2d1) list_single_number_heading_pane_vc_t

0x5c48,	// (0x000324db) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5c48,	// (0x000324db) list_single_graphic_heading_pane_vc_g1

0x5cd6,	// (0x00032569) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x5cd6,	// (0x00032569) list_single_graphic_heading_pane_vc_g4

0x5ce2,	// (0x00032575) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5ce2,	// (0x00032575) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x0003c297) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x0003c297) list_single_graphic_heading_pane_vc_g

0x5cee,	// (0x00032581) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5cee,	// (0x00032581) list_single_graphic_heading_pane_vc_t1

0x6220,	// (0x00032ab3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6220,	// (0x00032ab3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0003c2d8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0003c2d8) list_single_graphic_heading_pane_vc_t

0x5cd6,	// (0x00032569) list_double2_pane_vc_g1_ParamLimits

0x5cd6,	// (0x00032569) list_double2_pane_vc_g1

0x5ce2,	// (0x00032575) list_double2_pane_vc_g2_ParamLimits

0x5ce2,	// (0x00032575) list_double2_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003c08a) list_double2_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003c08a) list_double2_pane_vc_g

0x6234,	// (0x00032ac7) list_double2_pane_vc_t1_ParamLimits

0x6234,	// (0x00032ac7) list_double2_pane_vc_t1

0x624a,	// (0x00032add) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x624a,	// (0x00032add) list_double2_large_graphic_pane_vc_g1

0x6256,	// (0x00032ae9) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6256,	// (0x00032ae9) list_double2_large_graphic_pane_vc_g2

0x6262,	// (0x00032af5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6262,	// (0x00032af5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4a,	// (0x0003c2dd) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x0003c2dd) list_double2_large_graphic_pane_vc_g

0x626e,	// (0x00032b01) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x626e,	// (0x00032b01) list_double2_large_graphic_pane_vc_t1

0x6284,	// (0x00032b17) list_double_time_pane_vc_g1_ParamLimits

0x6284,	// (0x00032b17) list_double_time_pane_vc_g1

0x6290,	// (0x00032b23) list_double_time_pane_vc_g2_ParamLimits

0x6290,	// (0x00032b23) list_double_time_pane_vc_g2

0x0001,

0xfa51,	// (0x0003c2e4) list_double_time_pane_vc_g_ParamLimits

0xfa51,	// (0x0003c2e4) list_double_time_pane_vc_g

0x629c,	// (0x00032b2f) list_double_time_pane_vc_t1_ParamLimits

0x629c,	// (0x00032b2f) list_double_time_pane_vc_t1

0x62b5,	// (0x00032b48) list_double_time_pane_vc_t2_ParamLimits

0x62b5,	// (0x00032b48) list_double_time_pane_vc_t2

0x62f5,	// (0x00032b88) list_double_time_pane_vc_t3_ParamLimits

0x62f5,	// (0x00032b88) list_double_time_pane_vc_t3

0x630d,	// (0x00032ba0) list_double_time_pane_vc_t4_ParamLimits

0x630d,	// (0x00032ba0) list_double_time_pane_vc_t4

0x0003,

0xfa56,	// (0x0003c2e9) list_double_time_pane_vc_t_ParamLimits

0xfa56,	// (0x0003c2e9) list_double_time_pane_vc_t

0x5cd6,	// (0x00032569) list_double_pane_vc_g1_ParamLimits

0x5cd6,	// (0x00032569) list_double_pane_vc_g1

0x5ce2,	// (0x00032575) list_double_pane_vc_g2_ParamLimits

0x5ce2,	// (0x00032575) list_double_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003c08a) list_double_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003c08a) list_double_pane_vc_g

0x6321,	// (0x00032bb4) list_double_pane_vc_t1_ParamLimits

0x6321,	// (0x00032bb4) list_double_pane_vc_t1

0x6333,	// (0x00032bc6) list_double_pane_vc_t2_ParamLimits

0x6333,	// (0x00032bc6) list_double_pane_vc_t2

0x0001,

0xfa5f,	// (0x0003c2f2) list_double_pane_vc_t_ParamLimits

0xfa5f,	// (0x0003c2f2) list_double_pane_vc_t

0x5cd6,	// (0x00032569) list_double_number_pane_vc_g1_ParamLimits

0x5cd6,	// (0x00032569) list_double_number_pane_vc_g1

0x5ce2,	// (0x00032575) list_double_number_pane_vc_g2_ParamLimits

0x5ce2,	// (0x00032575) list_double_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003c08a) list_double_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003c08a) list_double_number_pane_vc_g

0x634b,	// (0x00032bde) list_double_number_pane_vc_t1_ParamLimits

0x634b,	// (0x00032bde) list_double_number_pane_vc_t1

0x635f,	// (0x00032bf2) list_double_number_pane_vc_t2_ParamLimits

0x635f,	// (0x00032bf2) list_double_number_pane_vc_t2

0x6333,	// (0x00032bc6) list_double_number_pane_vc_t3_ParamLimits

0x6333,	// (0x00032bc6) list_double_number_pane_vc_t3

0x0002,

0xfa64,	// (0x0003c2f7) list_double_number_pane_vc_t_ParamLimits

0xfa64,	// (0x0003c2f7) list_double_number_pane_vc_t

0x6371,	// (0x00032c04) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6371,	// (0x00032c04) list_double_large_graphic_pane_vc_g1

0x637d,	// (0x00032c10) list_double_large_graphic_pane_vc_g2_ParamLimits

0x637d,	// (0x00032c10) list_double_large_graphic_pane_vc_g2

0x6262,	// (0x00032af5) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6262,	// (0x00032af5) list_double_large_graphic_pane_vc_g3

0x638c,	// (0x00032c1f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x638c,	// (0x00032c1f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6b,	// (0x0003c2fe) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0003c2fe) list_double_large_graphic_pane_vc_g

0x6398,	// (0x00032c2b) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6398,	// (0x00032c2b) list_double_large_graphic_pane_vc_t1

0x63aa,	// (0x00032c3d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x63aa,	// (0x00032c3d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0003c307) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0003c307) list_double_large_graphic_pane_vc_t

0x5cd6,	// (0x00032569) list_double_heading_pane_vc_g1_ParamLimits

0x5cd6,	// (0x00032569) list_double_heading_pane_vc_g1

0x5ce2,	// (0x00032575) list_double_heading_pane_vc_g2_ParamLimits

0x5ce2,	// (0x00032575) list_double_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x0003c08a) list_double_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x0003c08a) list_double_heading_pane_vc_g

0x63c3,	// (0x00032c56) list_double_heading_pane_vc_t1_ParamLimits

0x63c3,	// (0x00032c56) list_double_heading_pane_vc_t1

0x5cee,	// (0x00032581) list_double_heading_pane_vc_t2_ParamLimits

0x5cee,	// (0x00032581) list_double_heading_pane_vc_t2

0x0001,

0xfa79,	// (0x0003c30c) list_double_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x0003c30c) list_double_heading_pane_vc_t

0x63d7,	// (0x00032c6a) list_double_graphic_pane_vc_g1_ParamLimits

0x63d7,	// (0x00032c6a) list_double_graphic_pane_vc_g1

0x63e7,	// (0x00032c7a) list_double_graphic_pane_vc_g2_ParamLimits

0x63e7,	// (0x00032c7a) list_double_graphic_pane_vc_g2

0x63f6,	// (0x00032c89) list_double_graphic_pane_vc_g3_ParamLimits

0x63f6,	// (0x00032c89) list_double_graphic_pane_vc_g3

0x0002,

0xfa7e,	// (0x0003c311) list_double_graphic_pane_vc_g_ParamLimits

0xfa7e,	// (0x0003c311) list_double_graphic_pane_vc_g

0x6402,	// (0x00032c95) list_double_graphic_pane_vc_t1_ParamLimits

0x6402,	// (0x00032c95) list_double_graphic_pane_vc_t1

0x6333,	// (0x00032bc6) list_double_graphic_pane_vc_t2_ParamLimits

0x6333,	// (0x00032bc6) list_double_graphic_pane_vc_t2

0x0001,

0xfa85,	// (0x0003c318) list_double_graphic_pane_vc_t_ParamLimits

0xfa85,	// (0x0003c318) list_double_graphic_pane_vc_t

0x4a0b,	// (0x0003129e) aid_size_cell_fastswap

0x4a13,	// (0x000312a6) aid_size_cell_touch_ParamLimits

0x4a13,	// (0x000312a6) aid_size_cell_touch

0x4c7e,	// (0x00031511) popup_fast_swap_wide_window_ParamLimits

0x4c7e,	// (0x00031511) popup_fast_swap_wide_window

0x4d94,	// (0x00031627) touch_pane_ParamLimits

0x4d94,	// (0x00031627) touch_pane

0x7c1e,	// (0x000344b1) button_value_adjust_pane_cp2

0x7c1e,	// (0x000344b1) button_value_adjust_pane_cp4

0x535e,	// (0x00031bf1) form_field_data_pane_cp2

0x5383,	// (0x00031c16) form_field_data_wide_pane_cp2

0x8315,	// (0x00034ba8) bg_scroll_pane_ParamLimits

0x5737,	// (0x00031fca) scroll_handle_pane_ParamLimits

0x574b,	// (0x00031fde) scroll_sc2_down_pane_ParamLimits

0x574b,	// (0x00031fde) scroll_sc2_down_pane

0x8346,	// (0x00034bd9) scroll_sc2_up_pane_ParamLimits

0x8346,	// (0x00034bd9) scroll_sc2_up_pane

0xbc34,	// (0x000384c7) grid_wheel_folder_pane_g1_ParamLimits

0xbc34,	// (0x000384c7) grid_wheel_folder_pane_g1

0x59a1,	// (0x00032234) clock_nsta_pane_cp2_ParamLimits

0x59a1,	// (0x00032234) clock_nsta_pane_cp2

0x8af6,	// (0x00035389) listscroll_midp_pane_ParamLimits

0x8b02,	// (0x00035395) midp_canvas_pane

0x8df0,	// (0x00035683) nsta_clock_indic_pane

0x8e46,	// (0x000356d9) listscroll_form_pane_vc

0x8e62,	// (0x000356f5) listscroll_set_pane_vc_ParamLimits

0x8e62,	// (0x000356f5) listscroll_set_pane_vc

0x957a,	// (0x00035e0d) clock_nsta_pane

0x95f7,	// (0x00035e8a) indicator_nsta_pane

0x98ee,	// (0x00036181) bg_popup_sub_pane_cp2_ParamLimits

0x9902,	// (0x00036195) find_pane_cp2_ParamLimits

0x9902,	// (0x00036195) find_pane_cp2

0x9918,	// (0x000361ab) grid_toobar_pane_ParamLimits

0x9a76,	// (0x00036309) list_form_gen_pane_vc_ParamLimits

0x9a76,	// (0x00036309) list_form_gen_pane_vc

0x9a8c,	// (0x0003631f) scroll_pane_cp8_vc_ParamLimits

0x9a8c,	// (0x0003631f) scroll_pane_cp8_vc

0x9b08,	// (0x0003639b) data_form_wide_pane_vc_ParamLimits

0x9b08,	// (0x0003639b) data_form_wide_pane_vc

0x9b14,	// (0x000363a7) form_field_data_wide_pane_vc_g1

0x9b1c,	// (0x000363af) form_field_data_wide_pane_vc_t1_ParamLimits

0x9b1c,	// (0x000363af) form_field_data_wide_pane_vc_t1

0x7c32,	// (0x000344c5) input_focus_pane_cp6_vc_ParamLimits

0x7c32,	// (0x000344c5) input_focus_pane_cp6_vc

0x9df6,	// (0x00036689) list_midp_pane_ParamLimits

0x9e02,	// (0x00036695) scroll_pane_cp16_ParamLimits

0x9e02,	// (0x00036695) scroll_pane_cp16

0x9e50,	// (0x000366e3) button_value_adjust_pane_ParamLimits

0x9e50,	// (0x000366e3) button_value_adjust_pane

0xadfb,	// (0x0003768e) button_value_adjust_pane_cp6_ParamLimits

0xadfb,	// (0x0003768e) button_value_adjust_pane_cp6

0xaf55,	// (0x000377e8) settings_code_pane_cp_ParamLimits

0xaf55,	// (0x000377e8) settings_code_pane_cp

0x3275,	// (0x0002fb08) cell_touch_pane_g1

0x3275,	// (0x0002fb08) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x0003bfb2) cell_touch_pane_g

0xb538,	// (0x00037dcb) cell_touch_pane_cp_ParamLimits

0xb538,	// (0x00037dcb) cell_touch_pane_cp

0xb548,	// (0x00037ddb) cell_touch_pane_ParamLimits

0xb548,	// (0x00037ddb) cell_touch_pane

0x3275,	// (0x0002fb08) scroll_sc2_down_pane_g1

0x3275,	// (0x0002fb08) scroll_sc2_up_pane_g1

0x327f,	// (0x0002fb12) bg_set_opt_pane_cp4_vc

0xb559,	// (0x00037dec) list_set_graphic_pane_vc_g1_ParamLimits

0xb559,	// (0x00037dec) list_set_graphic_pane_vc_g1

0xb565,	// (0x00037df8) list_set_graphic_pane_vc_g2_ParamLimits

0xb565,	// (0x00037df8) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x0003c2a3) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x0003c2a3) list_set_graphic_pane_vc_g

0xb571,	// (0x00037e04) text_primary_small_cp13_vc_ParamLimits

0xb571,	// (0x00037e04) text_primary_small_cp13_vc

0xb589,	// (0x00037e1c) list_set_graphic_pane_vc_ParamLimits

0xb589,	// (0x00037e1c) list_set_graphic_pane_vc

0x327f,	// (0x0002fb12) input_focus_pane_cp2_vc

0x3275,	// (0x0002fb08) setting_code_pane_vc_g1

0xb59d,	// (0x00037e30) setting_code_pane_vc_t1

0xb5ab,	// (0x00037e3e) set_text_pane_vc_t1_ParamLimits

0xb5ab,	// (0x00037e3e) set_text_pane_vc_t1

0x327f,	// (0x0002fb12) input_focus_pane_cp1_vc

0xb5c9,	// (0x00037e5c) list_set_text_pane_vc

0x3275,	// (0x0002fb08) setting_text_pane_vc_g1

0x327f,	// (0x0002fb12) bg_set_opt_pane_cp2_vc

0xb5d3,	// (0x00037e66) setting_slider_graphic_pane_vc_g1

0xb5db,	// (0x00037e6e) setting_slider_graphic_pane_vc_t1

0xb5e9,	// (0x00037e7c) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x0003c2a8) setting_slider_graphic_pane_vc_t

0xb5f7,	// (0x00037e8a) slider_set_pane_cp_vc

0xb5ff,	// (0x00037e92) slider_set_pane_vc_g1

0xb608,	// (0x00037e9b) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x0003c2ad) slider_set_pane_vc_g

0x7c99,	// (0x0003452c) set_opt_bg_pane_g1_copy1

0x7ca1,	// (0x00034534) set_opt_bg_pane_g2_copy1

0xb634,	// (0x00037ec7) set_opt_bg_pane_g3_copy1

0x7cb1,	// (0x00034544) set_opt_bg_pane_g4_copy1

0x7cb9,	// (0x0003454c) set_opt_bg_pane_g5_copy1

0x7cc1,	// (0x00034554) set_opt_bg_pane_g6_copy1

0xb63e,	// (0x00037ed1) set_opt_bg_pane_g7_copy1

0xb648,	// (0x00037edb) set_opt_bg_pane_g8_copy1

0xb652,	// (0x00037ee5) set_opt_bg_pane_g9_copy1

0x327f,	// (0x0002fb12) bg_set_opt_pane_cp_vc

0xb65c,	// (0x00037eef) setting_slider_pane_vc_t1

0xb5db,	// (0x00037e6e) setting_slider_pane_vc_t2

0xb5e9,	// (0x00037e7c) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x0003c2bc) setting_slider_pane_vc_t

0xb5f7,	// (0x00037e8a) slider_set_pane_vc

0x5e0f,	// (0x000326a2) volume_set_pane_vc_g1

0x5e18,	// (0x000326ab) volume_set_pane_vc_g2

0x5e21,	// (0x000326b4) volume_set_pane_vc_g3

0x5e2a,	// (0x000326bd) volume_set_pane_vc_g4

0x5e33,	// (0x000326c6) volume_set_pane_vc_g5

0x5e3c,	// (0x000326cf) volume_set_pane_vc_g6

0x5e45,	// (0x000326d8) volume_set_pane_vc_g7

0x5e4e,	// (0x000326e1) volume_set_pane_vc_g8

0x5e57,	// (0x000326ea) volume_set_pane_vc_g9

0x5e60,	// (0x000326f3) volume_set_pane_vc_g10

0x0009,

0xf8c7,	// (0x0003c15a) volume_set_pane_vc_g

0xb66b,	// (0x00037efe) volume_set_pane_vc

0xb673,	// (0x00037f06) button_value_adjust_pane_cp1_vc

0xb67d,	// (0x00037f10) list_highlight_pane_cp2_vc

0xb686,	// (0x00037f19) list_set_pane_vc_ParamLimits

0xb686,	// (0x00037f19) list_set_pane_vc

0xb6f0,	// (0x00037f83) main_pane_set_vc_t1_ParamLimits

0xb6f0,	// (0x00037f83) main_pane_set_vc_t1

0xb705,	// (0x00037f98) main_pane_set_vc_t2_ParamLimits

0xb705,	// (0x00037f98) main_pane_set_vc_t2

0xb717,	// (0x00037faa) main_pane_set_vc_t3_ParamLimits

0xb717,	// (0x00037faa) main_pane_set_vc_t3

0xb72b,	// (0x00037fbe) main_pane_set_vc_t4_ParamLimits

0xb72b,	// (0x00037fbe) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0003c2c3) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0003c2c3) main_pane_set_vc_t

0xb73f,	// (0x00037fd2) setting_code_pane_vc_ParamLimits

0xb73f,	// (0x00037fd2) setting_code_pane_vc

0xb750,	// (0x00037fe3) setting_slider_graphic_pane_vc

0xb750,	// (0x00037fe3) setting_slider_pane_vc

0xb750,	// (0x00037fe3) setting_text_pane_vc

0xb750,	// (0x00037fe3) setting_volume_pane_vc

0xb75a,	// (0x00037fed) scroll_pane_cp121_vc

0x7c0c,	// (0x0003449f) set_content_pane_vc

0xb798,	// (0x0003802b) button_value_adjust_pane_g1

0xb7a1,	// (0x00038034) button_value_adjust_pane_g2

0x0001,

0xfa8a,	// (0x0003c31d) button_value_adjust_pane_g

0xb7aa,	// (0x0003803d) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb7aa,	// (0x0003803d) form_field_slider_wide_pane_vc_t1

0xb7be,	// (0x00038051) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb7be,	// (0x00038051) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8f,	// (0x0003c322) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8f,	// (0x0003c322) form_field_slider_wide_pane_vc_t

0x7627,	// (0x00033eba) input_focus_pane_cp10_vc_ParamLimits

0x7627,	// (0x00033eba) input_focus_pane_cp10_vc

0xb7d0,	// (0x00038063) slider_cont_pane_cp1_vc_ParamLimits

0xb7d0,	// (0x00038063) slider_cont_pane_cp1_vc

0xb5ff,	// (0x00037e92) slider_form_pane_g1_cp2

0xb608,	// (0x00037e9b) slider_form_pane_g2_cp2

0xb7e9,	// (0x0003807c) form_field_slider_pane_vc_t3

0xb7f7,	// (0x0003808a) form_field_slider_pane_vc_t4

0xb805,	// (0x00038098) slider_form_pane_vc_ParamLimits

0xb805,	// (0x00038098) slider_form_pane_vc

0xb812,	// (0x000380a5) form_field_slider_pane_vc_t1_ParamLimits

0xb812,	// (0x000380a5) form_field_slider_pane_vc_t1

0xb7be,	// (0x00038051) form_field_slider_pane_vc_t2_ParamLimits

0xb7be,	// (0x00038051) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0003c332) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0003c332) form_field_slider_pane_vc_t

0x7627,	// (0x00033eba) input_focus_pane_cp9_vc_ParamLimits

0x7627,	// (0x00033eba) input_focus_pane_cp9_vc

0xb82e,	// (0x000380c1) slider_cont_pane_vc_ParamLimits

0xb82e,	// (0x000380c1) slider_cont_pane_vc

0xb840,	// (0x000380d3) list_form_graphic_pane_cp_vc_ParamLimits

0xb840,	// (0x000380d3) list_form_graphic_pane_cp_vc

0x9b14,	// (0x000363a7) form_field_popup_wide_pane_vc_g1

0xb855,	// (0x000380e8) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb855,	// (0x000380e8) form_field_popup_wide_pane_vc_t1

0x7c32,	// (0x000344c5) input_focus_pane_cp8_vc_ParamLimits

0x7c32,	// (0x000344c5) input_focus_pane_cp8_vc

0xb86c,	// (0x000380ff) list_form_wide_pane_vc_ParamLimits

0xb86c,	// (0x000380ff) list_form_wide_pane_vc

0xb878,	// (0x0003810b) list_form_graphic_pane_vc_g1

0xb880,	// (0x00038113) list_form_graphic_pane_vc_t1_ParamLimits

0xb880,	// (0x00038113) list_form_graphic_pane_vc_t1

0x73ab,	// (0x00033c3e) list_highlight_pane_cp5_vc_ParamLimits

0x73ab,	// (0x00033c3e) list_highlight_pane_cp5_vc

0xb89c,	// (0x0003812f) list_form_graphic_pane_vc_ParamLimits

0xb89c,	// (0x0003812f) list_form_graphic_pane_vc

0x9b14,	// (0x000363a7) form_field_popup_pane_vc_g1

0xb8b2,	// (0x00038145) form_field_popup_pane_vc_t1_ParamLimits

0xb8b2,	// (0x00038145) form_field_popup_pane_vc_t1

0x7c32,	// (0x000344c5) input_focus_pane_cp7_vc_ParamLimits

0x7c32,	// (0x000344c5) input_focus_pane_cp7_vc

0xb8c9,	// (0x0003815c) list_form_pane_vc_ParamLimits

0xb8c9,	// (0x0003815c) list_form_pane_vc

0xb8d5,	// (0x00038168) data_form_pane_vc_t1_ParamLimits

0xb8d5,	// (0x00038168) data_form_pane_vc_t1

0x7c99,	// (0x0003452c) input_focus_pane_vc_g1

0x7ca1,	// (0x00034534) input_focus_pane_vc_g2

0x7ca9,	// (0x0003453c) input_focus_pane_vc_g3

0x7cb1,	// (0x00034544) input_focus_pane_vc_g4

0x7cb9,	// (0x0003454c) input_focus_pane_vc_g5

0x7cc1,	// (0x00034554) input_focus_pane_vc_g6

0x7cc9,	// (0x0003455c) input_focus_pane_vc_g7

0x7cd1,	// (0x00034564) input_focus_pane_vc_g8

0x7cd9,	// (0x0003456c) input_focus_pane_vc_g9

0x3275,	// (0x0002fb08) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x0003bf3b) input_focus_pane_vc_g

0x9b08,	// (0x0003639b) data_form_pane_vc_ParamLimits

0x9b08,	// (0x0003639b) data_form_pane_vc

0x9b14,	// (0x000363a7) form_field_data_pane_vc_g1

0xb8f2,	// (0x00038185) form_field_data_pane_vc_t1_ParamLimits

0xb8f2,	// (0x00038185) form_field_data_pane_vc_t1

0x7c32,	// (0x000344c5) input_focus_pane_vc_ParamLimits

0x7c32,	// (0x000344c5) input_focus_pane_vc

0xb90c,	// (0x0003819f) button_value_adjust_pane_cp3_vc

0xb914,	// (0x000381a7) button_value_adjust_pane_cp5_vc

0xb91c,	// (0x000381af) form_field_data_pane_vc_ParamLimits

0xb91c,	// (0x000381af) form_field_data_pane_vc

0xb937,	// (0x000381ca) form_field_data_pane_vc_cp2

0xb93f,	// (0x000381d2) form_field_data_wide_pane_vc_ParamLimits

0xb93f,	// (0x000381d2) form_field_data_wide_pane_vc

0xb959,	// (0x000381ec) form_field_data_wide_pane_vc_cp2

0xb961,	// (0x000381f4) form_field_popup_pane_vc_ParamLimits

0xb961,	// (0x000381f4) form_field_popup_pane_vc

0xb97c,	// (0x0003820f) form_field_popup_wide_pane_vc_ParamLimits

0xb97c,	// (0x0003820f) form_field_popup_wide_pane_vc

0xb996,	// (0x00038229) form_field_slider_pane_vc_ParamLimits

0xb996,	// (0x00038229) form_field_slider_pane_vc

0xb9a9,	// (0x0003823c) form_field_slider_wide_pane_vc_ParamLimits

0xb9a9,	// (0x0003823c) form_field_slider_wide_pane_vc

0xb9bc,	// (0x0003824f) grid_touch_1_pane_ParamLimits

0xb9bc,	// (0x0003824f) grid_touch_1_pane

0xb9c8,	// (0x0003825b) grid_touch_2_pane_ParamLimits

0xb9c8,	// (0x0003825b) grid_touch_2_pane

0x8dbb,	// (0x0003564e) touch_pane_g1_ParamLimits

0x8dbb,	// (0x0003564e) touch_pane_g1

0xb9e2,	// (0x00038275) cell_app_pane_cp_wide_ParamLimits

0xb9e2,	// (0x00038275) cell_app_pane_cp_wide

0xb9f3,	// (0x00038286) grid_popup_fast_wide_pane_ParamLimits

0xb9f3,	// (0x00038286) grid_popup_fast_wide_pane

0xba07,	// (0x0003829a) scroll_pane_cp19_ParamLimits

0xba07,	// (0x0003829a) scroll_pane_cp19

0x327f,	// (0x0002fb12) bg_popup_window_pane_cp20

0xba1b,	// (0x000382ae) listscroll_popup_fast_wide_pane

0x73ab,	// (0x00033c3e) grid_indicator_nsta_pane

0xba23,	// (0x000382b6) clock_nsta_pane_g1

0xba2c,	// (0x000382bf) clock_nsta_pane_t1

0xba48,	// (0x000382db) cell_indicator_nsta_pane_ParamLimits

0xba48,	// (0x000382db) cell_indicator_nsta_pane

0xba80,	// (0x00038313) cell_indicator_nsta_pane_g1

0xbad0,	// (0x00038363) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x0003c33c) cell_indicator_nsta_pane_g

0xbae5,	// (0x00038378) clock_nsta_pane_cp

0xbaed,	// (0x00038380) indicator_nsta_pane_cp

0xbaf5,	// (0x00038388) nsta_clock_indic_pane_g1

0x7477,	// (0x00033d0a) grid_indicator_pane

0x8438,	// (0x00034ccb) scroll_pane_cp29

0x58ed,	// (0x00032180) indicator_nsta_pane_cp2_ParamLimits

0x58ed,	// (0x00032180) indicator_nsta_pane_cp2

0x73ab,	// (0x00033c3e) main_apps_wheel_pane

0x9cd3,	// (0x00036566) form_midp_field_text_pane_ParamLimits

0x9e22,	// (0x000366b5) scroll_bar_cp050_ParamLimits

0xbb5e,	// (0x000383f1) cell_indicator_pane_ParamLimits

0xbb5e,	// (0x000383f1) cell_indicator_pane

0xbb76,	// (0x00038409) cell_indicator_pane_g1

0xbb80,	// (0x00038413) grid_wheel_folder_pane_ParamLimits

0xbb80,	// (0x00038413) grid_wheel_folder_pane

0xbb94,	// (0x00038427) list_wheel_apps_pane_ParamLimits

0xbb94,	// (0x00038427) list_wheel_apps_pane

0xbba7,	// (0x0003843a) main_apps_wheel_pane_g1_ParamLimits

0xbba7,	// (0x0003843a) main_apps_wheel_pane_g1

0xbbc3,	// (0x00038456) main_apps_wheel_pane_g2_ParamLimits

0xbbc3,	// (0x00038456) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x0003c358) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x0003c358) main_apps_wheel_pane_g

0xbbdf,	// (0x00038472) main_apps_wheel_pane_t1_ParamLimits

0xbbdf,	// (0x00038472) main_apps_wheel_pane_t1

0xbc08,	// (0x0003849b) list_wheel_apps_pane_g1

0xbc10,	// (0x000384a3) list_wheel_apps_pane_g2

0xbc18,	// (0x000384ab) list_wheel_apps_pane_g3

0xbc20,	// (0x000384b3) list_wheel_apps_pane_g4

0xbc2a,	// (0x000384bd) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x0003c35d) list_wheel_apps_pane_g

0x896a,	// (0x000351fd) navi_icon_text_pane

0x94a7,	// (0x00035d3a) aid_fill_nsta

0xbc4b,	// (0x000384de) navi_icon_text_pane_g1

0xbc5a,	// (0x000384ed) navi_icon_text_pane_t1

0x8800,	// (0x00035093) list_set_graphic_pane_t1_ParamLimits

0x8800,	// (0x00035093) list_set_graphic_pane_t1

0xa573,	// (0x00036e06) popup_midp_note_alarm_window_t6_ParamLimits

0xa573,	// (0x00036e06) popup_midp_note_alarm_window_t6

0xa585,	// (0x00036e18) popup_midp_note_alarm_window_t7_ParamLimits

0xa585,	// (0x00036e18) popup_midp_note_alarm_window_t7

0xa597,	// (0x00036e2a) popup_midp_note_alarm_window_t8_ParamLimits

0xa597,	// (0x00036e2a) popup_midp_note_alarm_window_t8

0xa5a9,	// (0x00036e3c) popup_midp_note_alarm_window_t9_ParamLimits

0xa5a9,	// (0x00036e3c) popup_midp_note_alarm_window_t9

0xa5bb,	// (0x00036e4e) popup_midp_note_alarm_window_t10_ParamLimits

0xa5bb,	// (0x00036e4e) popup_midp_note_alarm_window_t10

0xa5cd,	// (0x00036e60) popup_midp_note_alarm_window_t11_ParamLimits

0xa5cd,	// (0x00036e60) popup_midp_note_alarm_window_t11

0xa5df,	// (0x00036e72) scroll_pane_cp17_ParamLimits

0xa5df,	// (0x00036e72) scroll_pane_cp17

0x5e0f,	// (0x000326a2) volume_small_pane_cp_g1

0x6414,	// (0x00032ca7) volume_small_pane_cp_g2

0x641d,	// (0x00032cb0) volume_small_pane_cp_g3

0x6426,	// (0x00032cb9) volume_small_pane_cp_g4

0x642f,	// (0x00032cc2) volume_small_pane_cp_g5

0x6438,	// (0x00032ccb) volume_small_pane_cp_g6

0x6441,	// (0x00032cd4) volume_small_pane_cp_g7

0x644a,	// (0x00032cdd) volume_small_pane_cp_g8

0x6453,	// (0x00032ce6) volume_small_pane_cp_g9

0x645c,	// (0x00032cef) volume_small_pane_cp_g10

0x8bcb,	// (0x0003545e) midp_ticker_pane_g1_ParamLimits

0x8bd7,	// (0x0003546a) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x0003c003) midp_ticker_pane_g_ParamLimits

0x8be3,	// (0x00035476) midp_ticker_pane_t1_ParamLimits

0x94bd,	// (0x00035d50) aid_fill_nsta_2

0x9e0e,	// (0x000366a1) list_form2_midp_pane

0xaf9c,	// (0x0003782f) midp_editing_number_pane_ParamLimits

0xafab,	// (0x0003783e) midp_ticker_pane_ParamLimits

0xbc6f,	// (0x00038502) form2_midp_field_pane

0xbc93,	// (0x00038526) scroll_pane_cp51

0xbcb3,	// (0x00038546) form2_midp_button_pane_ParamLimits

0xbcb3,	// (0x00038546) form2_midp_button_pane

0xbcc5,	// (0x00038558) form2_midp_content_pane_ParamLimits

0xbcc5,	// (0x00038558) form2_midp_content_pane

0xbcdf,	// (0x00038572) form2_midp_field_choice_group_pane

0xbce7,	// (0x0003857a) form2_midp_field_pane_g1

0xbcef,	// (0x00038582) form2_midp_field_pane_g2

0xbcf7,	// (0x0003858a) form2_midp_field_pane_g3

0xbcff,	// (0x00038592) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0003c382) form2_midp_field_pane_g

0xbd07,	// (0x0003859a) form2_midp_gauge_slider_pane

0xbd0f,	// (0x000385a2) form2_midp_gauge_wait_pane

0xbd17,	// (0x000385aa) form2_midp_image_pane_ParamLimits

0xbd17,	// (0x000385aa) form2_midp_image_pane

0xbd32,	// (0x000385c5) form2_midp_label_pane_ParamLimits

0xbd32,	// (0x000385c5) form2_midp_label_pane

0xbd51,	// (0x000385e4) form2_midp_label_pane_cp_ParamLimits

0xbd51,	// (0x000385e4) form2_midp_label_pane_cp

0xbd72,	// (0x00038605) form2_midp_string_pane_ParamLimits

0xbd72,	// (0x00038605) form2_midp_string_pane

0x6465,	// (0x00032cf8) form2_midp_text_pane_ParamLimits

0x6465,	// (0x00032cf8) form2_midp_text_pane

0xbd84,	// (0x00038617) form2_midp_time_pane

0xbd94,	// (0x00038627) input_focus_pane_cp51_ParamLimits

0xbd94,	// (0x00038627) input_focus_pane_cp51

0xbdac,	// (0x0003863f) form2_midp_label_pane_t1_ParamLimits

0xbdac,	// (0x0003863f) form2_midp_label_pane_t1

0x6486,	// (0x00032d19) form2_mdip_text_pane_t1_ParamLimits

0x6486,	// (0x00032d19) form2_mdip_text_pane_t1

0x64aa,	// (0x00032d3d) form2_midp_time_pane_t1

0xbdfa,	// (0x0003868d) form2_midp_gauge_slider_pane_t1

0xbe0c,	// (0x0003869f) form2_midp_gauge_slider_pane_t2

0xbe1e,	// (0x000386b1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x0003c38b) form2_midp_gauge_slider_pane_t

0xbe30,	// (0x000386c3) form2_midp_slider_pane

0xbe3c,	// (0x000386cf) form2_midp_gauge_wait_pane_t1

0xbe4a,	// (0x000386dd) form2_midp_wait_pane_ParamLimits

0xbe4a,	// (0x000386dd) form2_midp_wait_pane

0x9b33,	// (0x000363c6) list_single_2graphic_pane_cp4_ParamLimits

0x9b33,	// (0x000363c6) list_single_2graphic_pane_cp4

0xbe75,	// (0x00038708) list_single_midp_graphic_pane_cp_ParamLimits

0xbe75,	// (0x00038708) list_single_midp_graphic_pane_cp

0x327f,	// (0x0002fb12) list_highlight_pane_cp20

0xbe99,	// (0x0003872c) list_single_2graphic_pane_g1_cp4

0xb43b,	// (0x00037cce) list_single_2graphic_pane_g2_cp4

0xbea1,	// (0x00038734) list_single_2graphic_pane_t1_cp4

0x73ab,	// (0x00033c3e) list_highlight_pane_cp21

0xbeb0,	// (0x00038743) list_single_midp_graphic_pane_g4_cp

0xbebf,	// (0x00038752) list_single_midp_graphic_pane_t1_cp

0xbed4,	// (0x00038767) form2_mdip_string_pane_t1_ParamLimits

0xbed4,	// (0x00038767) form2_mdip_string_pane_t1

0x327f,	// (0x0002fb12) bg_wml_button_pane_cp2

0x3275,	// (0x0002fb08) form2_midp_image_pane_g1

0x3fc3,	// (0x00030856) list_double_large_graphic_pane_g5_ParamLimits

0x3fc3,	// (0x00030856) list_double_large_graphic_pane_g5

0x8af6,	// (0x00035389) midp_form_pane_ParamLimits

0x73ab,	// (0x00033c3e) main_apps_wheel_pane_ParamLimits

0x9251,	// (0x00035ae4) popup_preview_window_ParamLimits

0x9251,	// (0x00035ae4) popup_preview_window

0x9438,	// (0x00035ccb) popup_touch_info_window_ParamLimits

0x9438,	// (0x00035ccb) popup_touch_info_window

0x945a,	// (0x00035ced) popup_touch_menu_window_ParamLimits

0x945a,	// (0x00035ced) popup_touch_menu_window

0x326b,	// (0x0002fafe) bg_popup_sub_pane_cp6

0xbf79,	// (0x0003880c) list_touch_menu_pane

0xbf81,	// (0x00038814) list_single_touch_menu_pane_ParamLimits

0xbf81,	// (0x00038814) list_single_touch_menu_pane

0xbf9c,	// (0x0003882f) list_single_touch_menu_pane_t1

0x73ab,	// (0x00033c3e) bg_popup_sub_pane_cp7_ParamLimits

0x73ab,	// (0x00033c3e) bg_popup_sub_pane_cp7

0xbfaa,	// (0x0003883d) heading_sub_pane

0xbfb2,	// (0x00038845) list_touch_info_pane_ParamLimits

0xbfb2,	// (0x00038845) list_touch_info_pane

0xbfc1,	// (0x00038854) list_single_touch_info_pane_ParamLimits

0xbfc1,	// (0x00038854) list_single_touch_info_pane

0xbfd3,	// (0x00038866) list_single_touch_info_pane_t1

0xbfe1,	// (0x00038874) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x0003c399) list_single_touch_info_pane_t

0x8aee,	// (0x00035381) bg_popup_heading_pane_cp

0xbfef,	// (0x00038882) heading_sub_pane_t1

0x9aa2,	// (0x00036335) bg_popup_preview_window_pane_cp_ParamLimits

0x9aa2,	// (0x00036335) bg_popup_preview_window_pane_cp

0xbfaa,	// (0x0003883d) heading_preview_pane

0xbfb2,	// (0x00038845) list_preview_pane_ParamLimits

0xbfb2,	// (0x00038845) list_preview_pane

0xbffd,	// (0x00038890) popup_preview_window_g1

0xbfc1,	// (0x00038854) list_single_preview_pane_ParamLimits

0xbfc1,	// (0x00038854) list_single_preview_pane

0xc005,	// (0x00038898) list_single_preview_pane_g1

0xc00d,	// (0x000388a0) list_single_preview_pane_t1

0xbfd3,	// (0x00038866) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x0003c39e) list_single_preview_pane_t

0xc01b,	// (0x000388ae) bg_popup_heading_pane_cp2_ParamLimits

0xc01b,	// (0x000388ae) bg_popup_heading_pane_cp2

0xc031,	// (0x000388c4) heading_preview_pane_g1

0xc039,	// (0x000388cc) heading_preview_pane_t1_ParamLimits

0xc039,	// (0x000388cc) heading_preview_pane_t1

0x749a,	// (0x00033d2d) soft_indicator_pane_t1_ParamLimits

0x7ba5,	// (0x00034438) scroll_pane_ParamLimits

0x8334,	// (0x00034bc7) scroll_sc2_left_pane

0x833d,	// (0x00034bd0) scroll_sc2_right_pane

0x835c,	// (0x00034bef) scroll_bg_pane_g1_ParamLimits

0x8371,	// (0x00034c04) scroll_bg_pane_g2_ParamLimits

0x8389,	// (0x00034c1c) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x0003bf92) scroll_bg_pane_g_ParamLimits

0x835c,	// (0x00034bef) scroll_handle_pane_g1_ParamLimits

0x83ab,	// (0x00034c3e) scroll_handle_pane_g2_ParamLimits

0x8389,	// (0x00034c1c) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x0003bf99) scroll_handle_pane_g_ParamLimits

0x8e9c,	// (0x0003572f) popup_choice_list_window_ParamLimits

0x8e9c,	// (0x0003572f) popup_choice_list_window

0x98fa,	// (0x0003618d) choice_list_pane

0x997c,	// (0x0003620f) cell_toolbar_pane_t1

0x99a4,	// (0x00036237) toolbar_button_pane_ParamLimits

0xaaaf,	// (0x00037342) ai_gene_pane_1_t2_ParamLimits

0xaaaf,	// (0x00037342) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x0003c1b6) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x0003c1b6) ai_gene_pane_1_t

0xc056,	// (0x000388e9) scroll_sc2_left_pane_g1

0xc056,	// (0x000388e9) scroll_sc2_right_pane_g1

0x8e74,	// (0x00035707) bg_popup_sub_pane_cp10

0xc060,	// (0x000388f3) list_choice_list_pane

0xc077,	// (0x0003890a) list_single_choice_list_pane_ParamLimits

0xc077,	// (0x0003890a) list_single_choice_list_pane

0xc08b,	// (0x0003891e) list_single_choice_list_pane_g1

0xc093,	// (0x00038926) list_single_choice_list_pane_t1_ParamLimits

0xc093,	// (0x00038926) list_single_choice_list_pane_t1

0xc0a8,	// (0x0003893b) choice_list_pane_g1

0xc0b0,	// (0x00038943) choice_list_pane_t1

0x326b,	// (0x0002fafe) input_focus_pane_cp11

0x820e,	// (0x00034aa1) title_pane_stacon_g2_ParamLimits

0x820e,	// (0x00034aa1) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x0003bf78) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0003bf78) title_pane_stacon_g

0x8aee,	// (0x00035381) cursor_press_pane

0x8f52,	// (0x000357e5) popup_fep_hwr_window_ParamLimits

0x8f52,	// (0x000357e5) popup_fep_hwr_window

0x8fdc,	// (0x0003586f) popup_fep_vkb_window_ParamLimits

0x8fdc,	// (0x0003586f) popup_fep_vkb_window

0xc0be,	// (0x00038951) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x0003c3c7) fep_vkb_side_pane_g_ParamLimits

0x64f6,	// (0x00032d89) fep_hwr_candidate_pane_ParamLimits

0x64f6,	// (0x00032d89) fep_hwr_candidate_pane

0x6520,	// (0x00032db3) fep_hwr_side_pane_ParamLimits

0x6520,	// (0x00032db3) fep_hwr_side_pane

0x6542,	// (0x00032dd5) fep_hwr_top_pane_ParamLimits

0x6542,	// (0x00032dd5) fep_hwr_top_pane

0x655a,	// (0x00032ded) fep_hwr_write_pane_ParamLimits

0x655a,	// (0x00032ded) fep_hwr_write_pane

0xfb34,	// (0x0003c3c7) fep_vkb_side_pane_g

0xc0c6,	// (0x00038959) fep_hwr_top_pane_g1

0xc0d8,	// (0x0003896b) fep_hwr_top_pane_g2

0x6594,	// (0x00032e27) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x0003c3a3) fep_hwr_top_pane_g

0x65a9,	// (0x00032e3c) fep_hwr_top_text_pane

0x8500,	// (0x00034d93) fep_hwr_top_text_pane_g1

0xc10e,	// (0x000389a1) fep_hwr_top_text_pane_t1

0x66b3,	// (0x00032f46) fep_hwr_candidate_pane_g1

0xc359,	// (0x00038bec) fep_vkb_keypad_pane_g3_ParamLimits

0xc359,	// (0x00038bec) fep_vkb_keypad_pane_g3

0xc385,	// (0x00038c18) fep_vkb_keypad_pane_g4_ParamLimits

0xc385,	// (0x00038c18) fep_vkb_keypad_pane_g4

0xc3fc,	// (0x00038c8f) fep_vkb_bottom_pane_g2_ParamLimits

0xc3fc,	// (0x00038c8f) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x0003c3ce) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x0003c3ce) fep_vkb_bottom_pane_g

0xc056,	// (0x000388e9) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x0003c3d8) cell_vkb_side_pane_g

0xc487,	// (0x00038d1a) cell_vkb_side_pane_t1

0xc495,	// (0x00038d28) cell_vkb_side_pane_t1_copy1

0xc056,	// (0x000388e9) bg_fep_vkb_candidate_pane_g2

0xc5d9,	// (0x00038e6c) cell_vkb_candidate_pane_ParamLimits

0xc11c,	// (0x000389af) aid_size_cell_vkb_ParamLimits

0xc11c,	// (0x000389af) aid_size_cell_vkb

0xc5d9,	// (0x00038e6c) cell_vkb_candidate_pane

0x66da,	// (0x00032f6d) bg_popup_fep_shadow_pane_g1

0xc1ae,	// (0x00038a41) fep_vkb_bottom_pane_ParamLimits

0xc1ae,	// (0x00038a41) fep_vkb_bottom_pane

0xc1eb,	// (0x00038a7e) fep_vkb_candidate_pane_ParamLimits

0xc1eb,	// (0x00038a7e) fep_vkb_candidate_pane

0xc207,	// (0x00038a9a) fep_vkb_keypad_pane_ParamLimits

0xc207,	// (0x00038a9a) fep_vkb_keypad_pane

0xc23a,	// (0x00038acd) fep_vkb_side_pane_ParamLimits

0xc23a,	// (0x00038acd) fep_vkb_side_pane

0xc276,	// (0x00038b09) fep_vkb_top_pane_ParamLimits

0xc276,	// (0x00038b09) fep_vkb_top_pane

0xc2b2,	// (0x00038b45) fep_vkb_top_pane_g1_ParamLimits

0xc2b2,	// (0x00038b45) fep_vkb_top_pane_g1

0xc2c1,	// (0x00038b54) fep_vkb_top_pane_g2_ParamLimits

0xc2c1,	// (0x00038b54) fep_vkb_top_pane_g2

0xc2d0,	// (0x00038b63) fep_vkb_top_pane_g3_ParamLimits

0xc2d0,	// (0x00038b63) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x0003c3be) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x0003c3be) fep_vkb_top_pane_g

0xc2ee,	// (0x00038b81) fep_vkb_top_text_pane_ParamLimits

0xc2ee,	// (0x00038b81) fep_vkb_top_text_pane

0xc2ff,	// (0x00038b92) fep_vkb_side_pane_g1_ParamLimits

0xc2ff,	// (0x00038b92) fep_vkb_side_pane_g1

0xc348,	// (0x00038bdb) grid_vkb_side_pane_ParamLimits

0xc348,	// (0x00038bdb) grid_vkb_side_pane

0x66e2,	// (0x00032f75) bg_popup_fep_shadow_pane_g2

0x66eb,	// (0x00032f7e) bg_popup_fep_shadow_pane_g3

0x66f3,	// (0x00032f86) bg_popup_fep_shadow_pane_g4

0x66fc,	// (0x00032f8f) bg_popup_fep_shadow_pane_g5

0x6706,	// (0x00032f99) bg_popup_fep_shadow_pane_g6

0x670e,	// (0x00032fa1) bg_popup_fep_shadow_pane_g7

0x7cb1,	// (0x00034544) bg_popup_fep_shadow_pane_g8

0xc3a7,	// (0x00038c3a) grid_vkb_keypad_number_pane_ParamLimits

0xc3a7,	// (0x00038c3a) grid_vkb_keypad_number_pane

0xc3bb,	// (0x00038c4e) grid_vkb_keypad_pane_ParamLimits

0xc3bb,	// (0x00038c4e) grid_vkb_keypad_pane

0xc3e1,	// (0x00038c74) fep_vkb_bottom_pane_g1_ParamLimits

0xc3e1,	// (0x00038c74) fep_vkb_bottom_pane_g1

0xc40a,	// (0x00038c9d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc40a,	// (0x00038c9d) grid_vkb_keypad_bottom_left_pane

0xc41f,	// (0x00038cb2) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc41f,	// (0x00038cb2) grid_vkb_keypad_bottom_right_pane

0xc434,	// (0x00038cc7) fep_vkb_top_text_pane_g1

0xc44f,	// (0x00038ce2) fep_vkb_top_text_pane_t1

0xc464,	// (0x00038cf7) cell_vkb_side_pane_ParamLimits

0xc464,	// (0x00038cf7) cell_vkb_side_pane

0xc056,	// (0x000388e9) cell_vkb_side_pane_g1

0xc4a3,	// (0x00038d36) cell_vkb_keypad_pane_ParamLimits

0xc4a3,	// (0x00038d36) cell_vkb_keypad_pane

0xc530,	// (0x00038dc3) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x0003c3eb) bg_popup_fep_shadow_pane_g

0x6720,	// (0x00032fb3) cell_hwr_side_pane_g1

0x6720,	// (0x00032fb3) cell_hwr_side_pane_g2

0xc53a,	// (0x00038dcd) cell_vkb_keypad_pane_t1

0xc548,	// (0x00038ddb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc548,	// (0x00038ddb) cell_vkb_keypad_bottom_left_pane

0xc565,	// (0x00038df8) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc565,	// (0x00038df8) cell_vkb_keypad_bottom_right_pane

0xc056,	// (0x000388e9) cell_vkb_keypad_bottom_left_pane_g1

0xc056,	// (0x000388e9) cell_vkb_keypad_bottom_right_pane_g1

0xc59e,	// (0x00038e31) cell_vkb_keypad_number_pane_ParamLimits

0xc59e,	// (0x00038e31) cell_vkb_keypad_number_pane

0xc5bd,	// (0x00038e50) cell_vkb_keypad_number_pane_g1

0xc5c7,	// (0x00038e5a) cell_vkb_keypad_number_pane_g2

0xc5d0,	// (0x00038e63) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x0003c3dd) cell_vkb_keypad_number_pane_g

0xc53a,	// (0x00038dcd) cell_vkb_keypad_number_pane_t1

0xc5fa,	// (0x00038e8d) fep_vkb_candidate_pane_g1

0x0001,

0xfb6b,	// (0x0003c3fe) cell_hwr_side_pane_g

0xc613,	// (0x00038ea6) cell_hwr_side_pane_t1

0x672a,	// (0x00032fbd) cell_hwr_side_pane_t1_copy1

0x6738,	// (0x00032fcb) cell_hwr_candidate_pane_g1

0x6767,	// (0x00032ffa) cell_hwr_candidate_pane_t1

0xc056,	// (0x000388e9) cell_vkb_candidate_pane_g2

0xc657,	// (0x00038eea) cell_vkb_candidate_pane_t1

0x64bd,	// (0x00032d50) bg_popup_fep_shadow_pane_ParamLimits

0x64bd,	// (0x00032d50) bg_popup_fep_shadow_pane

0x6574,	// (0x00032e07) bg_fep_hwr_top_pane_g4

0xc0ea,	// (0x0003897d) bg_hwr_side_pane_g1_ParamLimits

0xc0ea,	// (0x0003897d) bg_hwr_side_pane_g1

0x65e7,	// (0x00032e7a) cell_hwr_side_pane_ParamLimits

0x65e7,	// (0x00032e7a) cell_hwr_side_pane

0x6624,	// (0x00032eb7) fep_hwr_write_pane_g1_ParamLimits

0x6624,	// (0x00032eb7) fep_hwr_write_pane_g1

0x6631,	// (0x00032ec4) fep_hwr_write_pane_g2_ParamLimits

0x6631,	// (0x00032ec4) fep_hwr_write_pane_g2

0x663e,	// (0x00032ed1) fep_hwr_write_pane_g3_ParamLimits

0x663e,	// (0x00032ed1) fep_hwr_write_pane_g3

0x664c,	// (0x00032edf) fep_hwr_write_pane_g4_ParamLimits

0x664c,	// (0x00032edf) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x0003c3aa) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x0003c3aa) fep_hwr_write_pane_g

0x6574,	// (0x00032e07) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6574,	// (0x00032e07) bg_fep_hwr_candidate_pane_g2

0x6661,	// (0x00032ef4) cell_hwr_candidate_pane_ParamLimits

0x6661,	// (0x00032ef4) cell_hwr_candidate_pane

0x66b3,	// (0x00032f46) fep_hwr_candidate_pane_g1_ParamLimits

0xc14a,	// (0x000389dd) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc14a,	// (0x000389dd) bg_popup_fep_shadow_pane_cp2

0xc2e0,	// (0x00038b73) fep_vkb_top_pane_g4_ParamLimits

0xc2e0,	// (0x00038b73) fep_vkb_top_pane_g4

0xc326,	// (0x00038bb9) fep_vkb_side_pane_g2_ParamLimits

0xc326,	// (0x00038bb9) fep_vkb_side_pane_g2

0x526b,	// (0x00031afe) list_setting_pane_t4_ParamLimits

0x526b,	// (0x00031afe) list_setting_pane_t4

0x5307,	// (0x00031b9a) list_setting_number_pane_t5_ParamLimits

0x5307,	// (0x00031b9a) list_setting_number_pane_t5

0x8542,	// (0x00034dd5) list_double_heading_pane_cp2_ParamLimits

0x8542,	// (0x00034dd5) list_double_heading_pane_cp2

0x7c4c,	// (0x000344df) list_double_heading_pane_g1_cp2_ParamLimits

0x7c4c,	// (0x000344df) list_double_heading_pane_g1_cp2

0x7c58,	// (0x000344eb) list_double_heading_pane_g2_cp2_ParamLimits

0x7c58,	// (0x000344eb) list_double_heading_pane_g2_cp2

0xc665,	// (0x00038ef8) list_double_heading_pane_t1_cp2_ParamLimits

0xc665,	// (0x00038ef8) list_double_heading_pane_t1_cp2

0xc67b,	// (0x00038f0e) list_double_heading_pane_t2_cp2_ParamLimits

0xc67b,	// (0x00038f0e) list_double_heading_pane_t2_cp2

0x3263,	// (0x0002faf6) aid_value_unit2

0x4cdc,	// (0x0003156f) popup_preview_fixed_window

0x7635,	// (0x00033ec8) bg_popup_preview_window_pane_cp02

0xc68d,	// (0x00038f20) list_preview_fixed_pane

0xc6d3,	// (0x00038f66) list_empty_pane_fp_ParamLimits

0xc6d3,	// (0x00038f66) list_empty_pane_fp

0xc6d3,	// (0x00038f66) list_single_cale_day_pane_fp_ParamLimits

0xc6d3,	// (0x00038f66) list_single_cale_day_pane_fp

0xc6d3,	// (0x00038f66) list_single_graphic_heading_pane_fp_ParamLimits

0xc6d3,	// (0x00038f66) list_single_graphic_heading_pane_fp

0xc6d3,	// (0x00038f66) list_single_graphic_pane_fp_ParamLimits

0xc6d3,	// (0x00038f66) list_single_graphic_pane_fp

0xc6d3,	// (0x00038f66) list_single_heading_pane_fp_ParamLimits

0xc6d3,	// (0x00038f66) list_single_heading_pane_fp

0xc6d3,	// (0x00038f66) list_single_pane_fp_ParamLimits

0xc6d3,	// (0x00038f66) list_single_pane_fp

0xc6ec,	// (0x00038f7f) list_single_pane_fp_g1_ParamLimits

0xc6ec,	// (0x00038f7f) list_single_pane_fp_g1

0x6785,	// (0x00033018) list_single_pane_fp_g2_ParamLimits

0x6785,	// (0x00033018) list_single_pane_fp_g2

0x6791,	// (0x00033024) list_single_pane_fp_g3_ParamLimits

0x6791,	// (0x00033024) list_single_pane_fp_g3

0xc6f8,	// (0x00038f8b) list_single_pane_fp_g4_ParamLimits

0xc6f8,	// (0x00038f8b) list_single_pane_fp_g4

0x0003,

0xfb7e,	// (0x0003c411) list_single_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003c411) list_single_pane_fp_g

0x67a5,	// (0x00033038) list_single_pane_fp_t1_ParamLimits

0x67a5,	// (0x00033038) list_single_pane_fp_t1

0x67bc,	// (0x0003304f) list_single_graphic_pane_fp_g1_ParamLimits

0x67bc,	// (0x0003304f) list_single_graphic_pane_fp_g1

0xc6ec,	// (0x00038f7f) list_single_graphic_pane_fp_g2_ParamLimits

0xc6ec,	// (0x00038f7f) list_single_graphic_pane_fp_g2

0x6785,	// (0x00033018) list_single_graphic_pane_fp_g3_ParamLimits

0x6785,	// (0x00033018) list_single_graphic_pane_fp_g3

0x6791,	// (0x00033024) list_single_graphic_pane_fp_g4_ParamLimits

0x6791,	// (0x00033024) list_single_graphic_pane_fp_g4

0xc6f8,	// (0x00038f8b) list_single_graphic_pane_fp_g5_ParamLimits

0xc6f8,	// (0x00038f8b) list_single_graphic_pane_fp_g5

0x0004,

0xfb87,	// (0x0003c41a) list_single_graphic_pane_fp_g_ParamLimits

0xfb87,	// (0x0003c41a) list_single_graphic_pane_fp_g

0x67c8,	// (0x0003305b) list_single_graphic_pane_fp_t1_ParamLimits

0x67c8,	// (0x0003305b) list_single_graphic_pane_fp_t1

0x67bc,	// (0x0003304f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x67bc,	// (0x0003304f) list_single_graphic_heading_pane_fp_g1

0xc6ec,	// (0x00038f7f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6ec,	// (0x00038f7f) list_single_graphic_heading_pane_fp_g2

0x6785,	// (0x00033018) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6785,	// (0x00033018) list_single_graphic_heading_pane_fp_g3

0x6791,	// (0x00033024) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6791,	// (0x00033024) list_single_graphic_heading_pane_fp_g4

0xc6f8,	// (0x00038f8b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6f8,	// (0x00038f8b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0003c41a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003c41a) list_single_graphic_heading_pane_fp_g

0x67de,	// (0x00033071) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x67de,	// (0x00033071) list_single_graphic_heading_pane_fp_t1

0x67f4,	// (0x00033087) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x67f4,	// (0x00033087) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb92,	// (0x0003c425) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb92,	// (0x0003c425) list_single_graphic_heading_pane_fp_t

0x6806,	// (0x00033099) list_single_cale_day_pane_fp_g1_ParamLimits

0x6806,	// (0x00033099) list_single_cale_day_pane_fp_g1

0xc704,	// (0x00038f97) list_single_cale_day_pane_fp_g2_ParamLimits

0xc704,	// (0x00038f97) list_single_cale_day_pane_fp_g2

0x683e,	// (0x000330d1) list_single_cale_day_pane_fp_g3_ParamLimits

0x683e,	// (0x000330d1) list_single_cale_day_pane_fp_g3

0x6866,	// (0x000330f9) list_single_cale_day_pane_fp_g4_ParamLimits

0x6866,	// (0x000330f9) list_single_cale_day_pane_fp_g4

0x688a,	// (0x0003311d) list_single_cale_day_pane_fp_g5_ParamLimits

0x688a,	// (0x0003311d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb97,	// (0x0003c42a) list_single_cale_day_pane_fp_g_ParamLimits

0xfb97,	// (0x0003c42a) list_single_cale_day_pane_fp_g

0x68ae,	// (0x00033141) list_single_cale_day_pane_fp_t1_ParamLimits

0x68ae,	// (0x00033141) list_single_cale_day_pane_fp_t1

0x7efc,	// (0x0003478f) list_single_cale_day_pane_fp_t2_ParamLimits

0x7efc,	// (0x0003478f) list_single_cale_day_pane_fp_t2

0x7f15,	// (0x000347a8) list_single_cale_day_pane_fp_t3_ParamLimits

0x7f15,	// (0x000347a8) list_single_cale_day_pane_fp_t3

0x0002,

0xfba2,	// (0x0003c435) list_single_cale_day_pane_fp_t_ParamLimits

0xfba2,	// (0x0003c435) list_single_cale_day_pane_fp_t

0xc6ec,	// (0x00038f7f) list_empty_pane_fp_g1_ParamLimits

0xc6ec,	// (0x00038f7f) list_empty_pane_fp_g1

0x7f2e,	// (0x000347c1) list_empty_pane_fp_t1

0x7f3c,	// (0x000347cf) list_empty_pane_fp_t2

0x0001,

0xfba9,	// (0x0003c43c) list_empty_pane_fp_t

0xc6ec,	// (0x00038f7f) list_single_heading_pane_fp_g1_ParamLimits

0xc6ec,	// (0x00038f7f) list_single_heading_pane_fp_g1

0x6785,	// (0x00033018) list_single_heading_pane_fp_g2_ParamLimits

0x6785,	// (0x00033018) list_single_heading_pane_fp_g2

0x6791,	// (0x00033024) list_single_heading_pane_fp_g3_ParamLimits

0x6791,	// (0x00033024) list_single_heading_pane_fp_g3

0x0002,

0xfbae,	// (0x0003c441) list_single_heading_pane_fp_g_ParamLimits

0xfbae,	// (0x0003c441) list_single_heading_pane_fp_g

0x7f4a,	// (0x000347dd) list_single_heading_pane_fp_t1_ParamLimits

0x7f4a,	// (0x000347dd) list_single_heading_pane_fp_t1

0x7f5c,	// (0x000347ef) list_single_heading_pane_fp_t2_ParamLimits

0x7f5c,	// (0x000347ef) list_single_heading_pane_fp_t2

0x0001,

0xfbb5,	// (0x0003c448) list_single_heading_pane_fp_t_ParamLimits

0xfbb5,	// (0x0003c448) list_single_heading_pane_fp_t

0x7e47,	// (0x000346da) aid_size_cell_fast

0x75a7,	// (0x00033e3a) soft_indicator_pane_cp1_t1

0x7e84,	// (0x00034717) cell_app_pane_cp2_ParamLimits

0x7e84,	// (0x00034717) cell_app_pane_cp2

0x64df,	// (0x00032d72) fep_hwr_candidate_drop_down_list_pane

0x66cd,	// (0x00032f60) fep_hwr_candidate_pane_g3_ParamLimits

0x66cd,	// (0x00032f60) fep_hwr_candidate_pane_g3

0x3256,	// (0x0002fae9) fep_hwr_candidate_pane_g4_ParamLimits

0x3256,	// (0x0002fae9) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x0003c3b7) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x0003c3b7) fep_hwr_candidate_pane_g

0xc1da,	// (0x00038a6d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc1da,	// (0x00038a6d) fep_vkb_candidate_drop_down_list_pane

0xc602,	// (0x00038e95) fep_vkb_candidate_pane_g3

0xc60a,	// (0x00038e9d) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x0003c3e4) fep_vkb_candidate_pane_g

0x6738,	// (0x00032fcb) cell_hwr_candidate_pane_g1_ParamLimits

0x6746,	// (0x00032fd9) cell_hwr_candidate_pane_g3_ParamLimits

0x6746,	// (0x00032fd9) cell_hwr_candidate_pane_g3

0xd798,	// (0x0003a02b) cell_hwr_candidate_pane_g4_ParamLimits

0xd798,	// (0x0003a02b) cell_hwr_candidate_pane_g4

0x0002,

0xfb70,	// (0x0003c403) cell_hwr_candidate_pane_g_ParamLimits

0xfb70,	// (0x0003c403) cell_hwr_candidate_pane_g

0xc621,	// (0x00038eb4) cell_vkb_candidate_pane_g3_ParamLimits

0xc621,	// (0x00038eb4) cell_vkb_candidate_pane_g3

0xc63c,	// (0x00038ecf) cell_vkb_candidate_pane_g4_ParamLimits

0xc63c,	// (0x00038ecf) cell_vkb_candidate_pane_g4

0xc710,	// (0x00038fa3) cell_app_pane_cp2_g1_ParamLimits

0xc710,	// (0x00038fa3) cell_app_pane_cp2_g1

0xc72e,	// (0x00038fc1) cell_app_pane_cp2_g2_ParamLimits

0xc72e,	// (0x00038fc1) cell_app_pane_cp2_g2

0x0001,

0xfbba,	// (0x0003c44d) cell_app_pane_cp2_g_ParamLimits

0xfbba,	// (0x0003c44d) cell_app_pane_cp2_g

0xc73a,	// (0x00038fcd) cell_app_pane_cp2_t1_ParamLimits

0xc73a,	// (0x00038fcd) cell_app_pane_cp2_t1

0x7c32,	// (0x000344c5) grid_highlight_pane_cp1_ParamLimits

0x7c32,	// (0x000344c5) grid_highlight_pane_cp1

0x68d4,	// (0x00033167) cell_hwr_candidate_pane_cp1_ParamLimits

0x68d4,	// (0x00033167) cell_hwr_candidate_pane_cp1

0x6738,	// (0x00032fcb) fep_hwr_candidate_drop_down_list_pane_g1

0x68f8,	// (0x0003318b) fep_hwr_candidate_drop_down_list_pane_g2

0x6905,	// (0x00033198) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbf,	// (0x0003c452) fep_hwr_candidate_drop_down_list_pane_g

0x6912,	// (0x000331a5) fep_hwr_candidate_drop_down_list_scroll_pane

0x691b,	// (0x000331ae) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x691b,	// (0x000331ae) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6928,	// (0x000331bb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6928,	// (0x000331bb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6935,	// (0x000331c8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6935,	// (0x000331c8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6942,	// (0x000331d5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6942,	// (0x000331d5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x695d,	// (0x000331f0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x695d,	// (0x000331f0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6978,	// (0x0003320b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6978,	// (0x0003320b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6993,	// (0x00033226) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6993,	// (0x00033226) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x69ae,	// (0x00033241) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x69ae,	// (0x00033241) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x0003c459) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x0003c459) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc74c,	// (0x00038fdf) cell_vkb_candidate_pane_cp1_ParamLimits

0xc74c,	// (0x00038fdf) cell_vkb_candidate_pane_cp1

0xc2e0,	// (0x00038b73) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2e0,	// (0x00038b73) fep_vkb_candidate_drop_down_list_pane_g1

0xc772,	// (0x00039005) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc772,	// (0x00039005) fep_vkb_candidate_drop_down_list_pane_g2

0xc77f,	// (0x00039012) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc77f,	// (0x00039012) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd7,	// (0x0003c46a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd7,	// (0x0003c46a) fep_vkb_candidate_drop_down_list_pane_g

0xc78c,	// (0x0003901f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc78c,	// (0x0003901f) fep_vkb_candidate_drop_down_list_scroll_pane

0xc799,	// (0x0003902c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc799,	// (0x0003902c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc7a6,	// (0x00039039) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc7a6,	// (0x00039039) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc7b2,	// (0x00039045) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc7b2,	// (0x00039045) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7be,	// (0x00039051) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7be,	// (0x00039051) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc7df,	// (0x00039072) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7df,	// (0x00039072) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc800,	// (0x00039093) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc800,	// (0x00039093) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc821,	// (0x000390b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc821,	// (0x000390b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc842,	// (0x000390d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc842,	// (0x000390d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0003c471) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0003c471) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x72e1,	// (0x00033b74) title_pane_g1_ParamLimits

0x72ee,	// (0x00033b81) title_pane_g2_ParamLimits

0xf56a,	// (0x0003bdfd) title_pane_g_ParamLimits

0x84f0,	// (0x00034d83) aid_call2_pane

0x84f8,	// (0x00034d8b) aid_call_pane

0x8500,	// (0x00034d93) popup_clock_analogue_window_g1

0x8500,	// (0x00034d93) popup_clock_analogue_window_g2

0x5760,	// (0x00031ff3) popup_clock_analogue_window_g3

0x5769,	// (0x00031ffc) popup_clock_analogue_window_g4

0x3275,	// (0x0002fb08) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x0003bfa7) popup_clock_analogue_window_g

0x5771,	// (0x00032004) popup_clock_analogue_window_t1

0x577f,	// (0x00032012) clock_digital_number_pane_ParamLimits

0x577f,	// (0x00032012) clock_digital_number_pane

0x578b,	// (0x0003201e) clock_digital_number_pane_cp02_ParamLimits

0x578b,	// (0x0003201e) clock_digital_number_pane_cp02

0x5797,	// (0x0003202a) clock_digital_number_pane_cp03_ParamLimits

0x5797,	// (0x0003202a) clock_digital_number_pane_cp03

0x57a3,	// (0x00032036) clock_digital_number_pane_cp04_ParamLimits

0x57a3,	// (0x00032036) clock_digital_number_pane_cp04

0x57af,	// (0x00032042) clock_digital_separator_pane_ParamLimits

0x57af,	// (0x00032042) clock_digital_separator_pane

0x57bb,	// (0x0003204e) popup_clock_digital_window_t1_ParamLimits

0x57bb,	// (0x0003204e) popup_clock_digital_window_t1

0x3275,	// (0x0002fb08) clock_digital_number_pane_g1

0x3275,	// (0x0002fb08) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x0003bfb2) clock_digital_number_pane_g

0x3275,	// (0x0002fb08) clock_digital_separator_pane_g1

0x3275,	// (0x0002fb08) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x0003bfb2) clock_digital_separator_pane_g

0x94a7,	// (0x00035d3a) aid_fill_nsta_ParamLimits

0x95f7,	// (0x00035e8a) indicator_nsta_pane_ParamLimits

0x9787,	// (0x0003601a) popup_clock_analogue_window

0x9787,	// (0x0003601a) popup_clock_digital_window

0x73ab,	// (0x00033c3e) grid_indicator_nsta_pane_ParamLimits

0xba3a,	// (0x000382cd) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x0003c337) clock_nsta_pane_t

0x5724,	// (0x00031fb7) aid_size_max_handle

0x572e,	// (0x00031fc1) aid_size_min_handle

0x8aee,	// (0x00035381) editor_scroll_pane

0xc85d,	// (0x000390f0) ex_editor_pane

0x7db4,	// (0x00034647) scroll_pane_cp13

0x7bd1,	// (0x00034464) scroll_pane_cp14

0x852a,	// (0x00034dbd) scroll_pane_cp36

0x8558,	// (0x00034deb) list_single_graphic_hl_pane_cp2_ParamLimits

0x8558,	// (0x00034deb) list_single_graphic_hl_pane_cp2

0x60ed,	// (0x00032980) list_single_graphic_hl_pane_ParamLimits

0x60ed,	// (0x00032980) list_single_graphic_hl_pane

0x7f72,	// (0x00034805) aid_size_min_hl_cp1

0xc865,	// (0x000390f8) list_highlight_pane_cp34_ParamLimits

0xc865,	// (0x000390f8) list_highlight_pane_cp34

0xc876,	// (0x00039109) list_single_graphic_hl_pane_g1_ParamLimits

0xc876,	// (0x00039109) list_single_graphic_hl_pane_g1

0x7f7b,	// (0x0003480e) list_single_graphic_hl_pane_g2_ParamLimits

0x7f7b,	// (0x0003480e) list_single_graphic_hl_pane_g2

0x7f7b,	// (0x0003480e) list_single_graphic_hl_pane_g3_ParamLimits

0x7f7b,	// (0x0003480e) list_single_graphic_hl_pane_g3

0x5cd6,	// (0x00032569) list_single_graphic_hl_pane_g4_ParamLimits

0x5cd6,	// (0x00032569) list_single_graphic_hl_pane_g4

0x7f87,	// (0x0003481a) list_single_graphic_hl_pane_g5_ParamLimits

0x7f87,	// (0x0003481a) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x0003c482) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x0003c482) list_single_graphic_hl_pane_g

0x7f9b,	// (0x0003482e) list_single_graphic_hl_pane_t1_ParamLimits

0x7f9b,	// (0x0003482e) list_single_graphic_hl_pane_t1

0xc883,	// (0x00039116) aid_size_min_hl_cp2

0xc88c,	// (0x0003911f) list_highlight_pane_cp34_cp2_ParamLimits

0xc88c,	// (0x0003911f) list_highlight_pane_cp34_cp2

0xc876,	// (0x00039109) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc876,	// (0x00039109) list_single_graphic_hl_pane_g1_cp2

0xc899,	// (0x0003912c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc899,	// (0x0003912c) list_single_graphic_hl_pane_g2_cp2

0xc8a5,	// (0x00039138) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8a5,	// (0x00039138) list_single_graphic_hl_pane_g3_cp2

0x7fb1,	// (0x00034844) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7fb1,	// (0x00034844) list_single_graphic_hl_pane_g4_cp2

0xc8b3,	// (0x00039146) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8b3,	// (0x00039146) list_single_graphic_hl_pane_g5_cp2

0x5b00,	// (0x00032393) control_pane_g4_ParamLimits

0x5b00,	// (0x00032393) control_pane_g4

0x8e74,	// (0x00035707) bg_popup_sub_pane_cp10_ParamLimits

0xc060,	// (0x000388f3) list_choice_list_pane_ParamLimits

0xc06f,	// (0x00038902) scroll_pane_cp23

0x7635,	// (0x00033ec8) bg_popup_preview_window_pane_cp02_ParamLimits

0xc68d,	// (0x00038f20) list_preview_fixed_pane_ParamLimits

0xc6a3,	// (0x00038f36) list_preview_fixed_pane_cp_ParamLimits

0xc6a3,	// (0x00038f36) list_preview_fixed_pane_cp

0xc6af,	// (0x00038f42) popup_preview_fixed_window_g1_ParamLimits

0xc6af,	// (0x00038f42) popup_preview_fixed_window_g1

0xc6bb,	// (0x00038f4e) popup_preview_fixed_window_g2_ParamLimits

0xc6bb,	// (0x00038f4e) popup_preview_fixed_window_g2

0x0002,

0xfb77,	// (0x0003c40a) popup_preview_fixed_window_g_ParamLimits

0xfb77,	// (0x0003c40a) popup_preview_fixed_window_g

0x5696,	// (0x00031f29) aid_navi_side_left_pane_ParamLimits

0x56ab,	// (0x00031f3e) aid_navi_side_right_pane_ParamLimits

0x56c3,	// (0x00031f56) navi_icon_pane_stacon_ParamLimits

0x56d7,	// (0x00031f6a) navi_navi_pane_stacon_ParamLimits

0x56c3,	// (0x00031f56) navi_text_pane_stacon_ParamLimits

0x326b,	// (0x0002fafe) main_text_info_pane

0xc8dd,	// (0x00039170) listscroll_text_info_pane

0xc8e5,	// (0x00039178) list_text_info_pane_ParamLimits

0xc8e5,	// (0x00039178) list_text_info_pane

0xc8f4,	// (0x00039187) scroll_pane_cp24_ParamLimits

0xc8f4,	// (0x00039187) scroll_pane_cp24

0xc912,	// (0x000391a5) list_text_info_pane_t1_ParamLimits

0xc912,	// (0x000391a5) list_text_info_pane_t1

0x8eba,	// (0x0003574d) popup_fast_swap2_window_ParamLimits

0x8eba,	// (0x0003574d) popup_fast_swap2_window

0xc937,	// (0x000391ca) aid_size_cell_fast2

0x326b,	// (0x0002fafe) bg_popup_window_pane_cp17

0x9e3a,	// (0x000366cd) heading_pane_cp2

0x7895,	// (0x00034128) listscroll_fast2_pane

0xc941,	// (0x000391d4) grid_fast2_pane

0xc94b,	// (0x000391de) listscroll_fast2_pane_g1

0xc955,	// (0x000391e8) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x0003c48d) listscroll_fast2_pane_g

0x7db4,	// (0x00034647) scroll_pane_cp26

0xc95f,	// (0x000391f2) cell_fast2_pane_ParamLimits

0xc95f,	// (0x000391f2) cell_fast2_pane

0xc976,	// (0x00039209) cell_fast2_pane_g1

0xc97f,	// (0x00039212) cell_fast2_pane_g2

0xc988,	// (0x0003921b) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x0003c492) cell_fast2_pane_g

0x798e,	// (0x00034221) grid_highlight_pane_cp9

0x79a3,	// (0x00034236) main_eswt_pane_ParamLimits

0x79a3,	// (0x00034236) main_eswt_pane

0xc909,	// (0x0003919c) list_single_text_info_pane

0xc990,	// (0x00039223) eswt_ctrl_button_pane

0xc990,	// (0x00039223) eswt_ctrl_canvas_pane

0xc998,	// (0x0003922b) eswt_ctrl_combo_pane

0xc990,	// (0x00039223) eswt_ctrl_default_pane

0xc990,	// (0x00039223) eswt_ctrl_label_pane

0xc9a0,	// (0x00039233) eswt_ctrl_wait_pane

0xc9a8,	// (0x0003923b) eswt_shell_pane

0x326b,	// (0x0002fafe) listscroll_eswt_app_pane

0xc9c8,	// (0x0003925b) popup_eswt_tasktip_window_ParamLimits

0xc9c8,	// (0x0003925b) popup_eswt_tasktip_window

0x9aa2,	// (0x00036335) bg_popup_window_pane_cp18

0xc9d9,	// (0x0003926c) eswt_control_pane_g1_ParamLimits

0xc9d9,	// (0x0003926c) eswt_control_pane_g1

0xc9e6,	// (0x00039279) eswt_control_pane_g2_ParamLimits

0xc9e6,	// (0x00039279) eswt_control_pane_g2

0xc9f3,	// (0x00039286) eswt_control_pane_g3_ParamLimits

0xc9f3,	// (0x00039286) eswt_control_pane_g3

0xca00,	// (0x00039293) eswt_control_pane_g4_ParamLimits

0xca00,	// (0x00039293) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x0003c499) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x0003c499) eswt_control_pane_g

0x7c32,	// (0x000344c5) bg_button_pane_ParamLimits

0x7c32,	// (0x000344c5) bg_button_pane

0x79a3,	// (0x00034236) common_borders_pane_copy2_ParamLimits

0x79a3,	// (0x00034236) common_borders_pane_copy2

0xca0d,	// (0x000392a0) control_button_pane_g1_ParamLimits

0xca0d,	// (0x000392a0) control_button_pane_g1

0xca19,	// (0x000392ac) control_button_pane_g2_ParamLimits

0xca19,	// (0x000392ac) control_button_pane_g2

0xca25,	// (0x000392b8) control_button_pane_g3_ParamLimits

0xca25,	// (0x000392b8) control_button_pane_g3

0x0002,

0xfc0f,	// (0x0003c4a2) control_button_pane_g_ParamLimits

0xfc0f,	// (0x0003c4a2) control_button_pane_g

0xca39,	// (0x000392cc) control_button_pane_t1

0xca47,	// (0x000392da) control_button_pane_t2

0x0001,

0xfc16,	// (0x0003c4a9) control_button_pane_t

0x99b0,	// (0x00036243) bg_button_pane_g1

0x99c0,	// (0x00036253) bg_button_pane_g2

0x99b8,	// (0x0003624b) bg_button_pane_g3

0x99d0,	// (0x00036263) bg_button_pane_g4

0x99c8,	// (0x0003625b) bg_button_pane_g5

0x99d8,	// (0x0003626b) bg_button_pane_g6

0x99e0,	// (0x00036273) bg_button_pane_g7

0x99f0,	// (0x00036283) bg_button_pane_g8

0x99e8,	// (0x0003627b) bg_button_pane_g9

0x0008,

0xf877,	// (0x0003c10a) bg_button_pane_g

0xc01b,	// (0x000388ae) common_borders_pane_ParamLimits

0xc01b,	// (0x000388ae) common_borders_pane

0xc9d9,	// (0x0003926c) eswt_control_pane_g1_copy1_ParamLimits

0xc9d9,	// (0x0003926c) eswt_control_pane_g1_copy1

0xc9e6,	// (0x00039279) eswt_control_pane_g2_copy1_ParamLimits

0xc9e6,	// (0x00039279) eswt_control_pane_g2_copy1

0xc9f3,	// (0x00039286) eswt_control_pane_g3_copy1_ParamLimits

0xc9f3,	// (0x00039286) eswt_control_pane_g3_copy1

0xca00,	// (0x00039293) eswt_control_pane_g4_copy1_ParamLimits

0xca00,	// (0x00039293) eswt_control_pane_g4_copy1

0xc056,	// (0x000388e9) bg_eswt_ctrl_canvas_pane_g1

0xc01b,	// (0x000388ae) common_borders_pane_cp2_ParamLimits

0xc01b,	// (0x000388ae) common_borders_pane_cp2

0xc01b,	// (0x000388ae) common_borders_pane_cp3_ParamLimits

0xc01b,	// (0x000388ae) common_borders_pane_cp3

0xca55,	// (0x000392e8) separator_horizontal_pane

0xca5d,	// (0x000392f0) separator_vertical_pane

0xc9d9,	// (0x0003926c) eswt_control_pane_g1_copy2_ParamLimits

0xc9d9,	// (0x0003926c) eswt_control_pane_g1_copy2

0xc9e6,	// (0x00039279) eswt_control_pane_g2_copy2_ParamLimits

0xc9e6,	// (0x00039279) eswt_control_pane_g2_copy2

0xc9f3,	// (0x00039286) eswt_control_pane_g3_copy2_ParamLimits

0xc9f3,	// (0x00039286) eswt_control_pane_g3_copy2

0xca00,	// (0x00039293) eswt_control_pane_g4_copy2_ParamLimits

0xca00,	// (0x00039293) eswt_control_pane_g4_copy2

0x326b,	// (0x0002fafe) common_borders_pane_cp4

0xca66,	// (0x000392f9) separator_horizontal_pane_g1

0xca6f,	// (0x00039302) separator_horizontal_pane_g2

0xca78,	// (0x0003930b) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x0003c4ae) separator_horizontal_pane_g

0xc9d9,	// (0x0003926c) eswt_control_pane_g1_copy3_ParamLimits

0xc9d9,	// (0x0003926c) eswt_control_pane_g1_copy3

0xc9e6,	// (0x00039279) eswt_control_pane_g2_copy3_ParamLimits

0xc9e6,	// (0x00039279) eswt_control_pane_g2_copy3

0xc9f3,	// (0x00039286) eswt_control_pane_g3_copy3_ParamLimits

0xc9f3,	// (0x00039286) eswt_control_pane_g3_copy3

0xca00,	// (0x00039293) eswt_control_pane_g4_copy3_ParamLimits

0xca00,	// (0x00039293) eswt_control_pane_g4_copy3

0x326b,	// (0x0002fafe) common_borders_pane_cp5

0xca81,	// (0x00039314) separator_vertical_pane_g1

0xca8a,	// (0x0003931d) separator_vertical_pane_g2

0xca93,	// (0x00039326) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x0003c4b5) separator_vertical_pane_g

0xc9d9,	// (0x0003926c) eswt_control_pane_g1_copy4_ParamLimits

0xc9d9,	// (0x0003926c) eswt_control_pane_g1_copy4

0xc9e6,	// (0x00039279) eswt_control_pane_g2_copy4_ParamLimits

0xc9e6,	// (0x00039279) eswt_control_pane_g2_copy4

0xc9f3,	// (0x00039286) eswt_control_pane_g3_copy4_ParamLimits

0xc9f3,	// (0x00039286) eswt_control_pane_g3_copy4

0xca00,	// (0x00039293) eswt_control_pane_g4_copy4_ParamLimits

0xca00,	// (0x00039293) eswt_control_pane_g4_copy4

0xca9c,	// (0x0003932f) eswt_ctrl_combo_button_pane

0xcaa4,	// (0x00039337) eswt_ctrl_input_pane

0xcaac,	// (0x0003933f) popup_choice_list_window_cp70

0xcab4,	// (0x00039347) eswt_ctrl_input_pane_t1

0x326b,	// (0x0002fafe) input_focus_pane_cp70

0xc01b,	// (0x000388ae) bg_button_pane_cp70_ParamLimits

0xc01b,	// (0x000388ae) bg_button_pane_cp70

0xcac2,	// (0x00039355) eswt_ctrl_combo_button_pane_g1

0xcaca,	// (0x0003935d) wait_bar_pane_cp70

0x9aa2,	// (0x00036335) bg_popup_window_pane_cp70_ParamLimits

0x9aa2,	// (0x00036335) bg_popup_window_pane_cp70

0xcad2,	// (0x00039365) popup_eswt_tasktip_window_t1

0xcae8,	// (0x0003937b) wait_bar_pane_cp71_ParamLimits

0xcae8,	// (0x0003937b) wait_bar_pane_cp71

0xcaf4,	// (0x00039387) grid_eswt_app_pane

0x8334,	// (0x00034bc7) scroll_pane_cp70

0xcafd,	// (0x00039390) cell_eswt_app_pane_ParamLimits

0xcafd,	// (0x00039390) cell_eswt_app_pane

0xcb2f,	// (0x000393c2) cell_eswt_app_pane_g1_ParamLimits

0xcb2f,	// (0x000393c2) cell_eswt_app_pane_g1

0xcb5e,	// (0x000393f1) cell_eswt_app_pane_g2_ParamLimits

0xcb5e,	// (0x000393f1) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x0003c4bc) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x0003c4bc) cell_eswt_app_pane_g

0xcb87,	// (0x0003941a) cell_eswt_app_pane_t1_ParamLimits

0xcb87,	// (0x0003941a) cell_eswt_app_pane_t1

0xcbb9,	// (0x0003944c) grid_highlight_pane_cp70_ParamLimits

0xcbb9,	// (0x0003944c) grid_highlight_pane_cp70

0xaf33,	// (0x000377c6) set_content_pane_g1

0x8d9e,	// (0x00035631) status_small_volume_pane

0x69c9,	// (0x0003325c) status_small_volume_pane_g1

0x69d1,	// (0x00033264) volume_small2_pane

0x69da,	// (0x0003326d) volume_small2_pane_g1

0x69e3,	// (0x00033276) volume_small2_pane_g2

0x69ec,	// (0x0003327f) volume_small2_pane_g3

0x69f5,	// (0x00033288) volume_small2_pane_g4

0x69fe,	// (0x00033291) volume_small2_pane_g5

0x6a07,	// (0x0003329a) volume_small2_pane_g6

0x6a10,	// (0x000332a3) volume_small2_pane_g7

0x6a19,	// (0x000332ac) volume_small2_pane_g8

0x6a22,	// (0x000332b5) volume_small2_pane_g9

0x6a2b,	// (0x000332be) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x0003c4c1) volume_small2_pane_g

0xc434,	// (0x00038cc7) fep_vkb_top_text_pane_g1_ParamLimits

0xc44f,	// (0x00038ce2) fep_vkb_top_text_pane_t1_ParamLimits

0xc6c7,	// (0x00038f5a) popup_preview_fixed_window_g3_ParamLimits

0xc6c7,	// (0x00038f5a) popup_preview_fixed_window_g3

0x93cb,	// (0x00035c5e) popup_toolbar_trans_pane

0xadd8,	// (0x0003766b) aid_height_set_list_ParamLimits

0xade9,	// (0x0003767c) aid_size_parent_ParamLimits

0x8e74,	// (0x00035707) list_highlight_pane_cp2_ParamLimits

0xaf33,	// (0x000377c6) set_content_pane_g1_ParamLimits

0xb03c,	// (0x000378cf) list_single_image_pane_ParamLimits

0xb03c,	// (0x000378cf) list_single_image_pane

0xcbc5,	// (0x00039458) aid_size_cell_image_ParamLimits

0xcbc5,	// (0x00039458) aid_size_cell_image

0xcbd2,	// (0x00039465) grid_single_image_pane_ParamLimits

0xcbd2,	// (0x00039465) grid_single_image_pane

0x7c4c,	// (0x000344df) list_single_image_pane_g1_ParamLimits

0x7c4c,	// (0x000344df) list_single_image_pane_g1

0x7c58,	// (0x000344eb) list_single_image_pane_g2_ParamLimits

0x7c58,	// (0x000344eb) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x0003c4d6) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x0003c4d6) list_single_image_pane_g

0xcbe0,	// (0x00039473) list_single_image_pane_t1_ParamLimits

0xcbe0,	// (0x00039473) list_single_image_pane_t1

0xcbf6,	// (0x00039489) cell_image_list_pane_ParamLimits

0xcbf6,	// (0x00039489) cell_image_list_pane

0xcc0c,	// (0x0003949f) cell_image_list_pane_g1

0xcc15,	// (0x000394a8) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x0003c4db) cell_image_list_pane_g

0xcc1e,	// (0x000394b1) aid_size_cell_tb_trans_pane

0x7c32,	// (0x000344c5) bg_tb_trans_pane

0xcc30,	// (0x000394c3) grid_tb_trans_pane

0x99b0,	// (0x00036243) bg_tb_trans_pane_g1

0x99c0,	// (0x00036253) bg_tb_trans_pane_g2

0x99b8,	// (0x0003624b) bg_tb_trans_pane_g3

0x99d0,	// (0x00036263) bg_tb_trans_pane_g4

0x99c8,	// (0x0003625b) bg_tb_trans_pane_g5

0x99f0,	// (0x00036283) bg_tb_trans_pane_g6

0x99e8,	// (0x0003627b) bg_tb_trans_pane_g7

0x99d8,	// (0x0003626b) bg_tb_trans_pane_g8

0x99e0,	// (0x00036273) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x0003c4e0) bg_tb_trans_pane_g

0xcc44,	// (0x000394d7) cell_toolbar_trans_pane_ParamLimits

0xcc44,	// (0x000394d7) cell_toolbar_trans_pane

0xc056,	// (0x000388e9) cell_toolbar_trans_pane_g1

0xbc77,	// (0x0003850a) list_form2_midp_pane_t1

0xbc85,	// (0x00038518) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x0003c37d) list_form2_midp_pane_t

0xbc93,	// (0x00038526) scroll_pane_cp51_ParamLimits

0xbe5a,	// (0x000386ed) form2_midp_wait_pane_g1

0xbe63,	// (0x000386f6) form2_midp_wait_pane_g2

0xbe6c,	// (0x000386ff) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0003c392) form2_midp_wait_pane_g

0x73ab,	// (0x00033c3e) list_highlight_pane_cp21_ParamLimits

0xbeb0,	// (0x00038743) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbebf,	// (0x00038752) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaff5,	// (0x00037888) list_single_2graphic_im_pane_ParamLimits

0xaff5,	// (0x00037888) list_single_2graphic_im_pane

0xcc6a,	// (0x000394fd) list_single_2graphic_im_pane_g1_ParamLimits

0xcc6a,	// (0x000394fd) list_single_2graphic_im_pane_g1

0xcc7b,	// (0x0003950e) list_single_2graphic_im_pane_g2_ParamLimits

0xcc7b,	// (0x0003950e) list_single_2graphic_im_pane_g2

0xcc87,	// (0x0003951a) list_single_2graphic_im_pane_g3_ParamLimits

0xcc87,	// (0x0003951a) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x0003c4f3) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x0003c4f3) list_single_2graphic_im_pane_g

0xcca7,	// (0x0003953a) list_single_2graphic_im_pane_t1_ParamLimits

0xcca7,	// (0x0003953a) list_single_2graphic_im_pane_t1

0xc6d3,	// (0x00038f66) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6d3,	// (0x00038f66) list_single_graphic_2heading_pane_fp

0x67bc,	// (0x0003304f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x67bc,	// (0x0003304f) list_single_graphic_2heading_pane_fp_g1

0xc6ec,	// (0x00038f7f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6ec,	// (0x00038f7f) list_single_graphic_2heading_pane_fp_g2

0x6785,	// (0x00033018) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6785,	// (0x00033018) list_single_graphic_2heading_pane_fp_g3

0x6791,	// (0x00033024) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6791,	// (0x00033024) list_single_graphic_2heading_pane_fp_g4

0xc6f8,	// (0x00038f8b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6f8,	// (0x00038f8b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb87,	// (0x0003c41a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb87,	// (0x0003c41a) list_single_graphic_2heading_pane_fp_g

0x7fbd,	// (0x00034850) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7fbd,	// (0x00034850) list_single_graphic_2heading_pane_fp_t1

0x67f4,	// (0x00033087) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x67f4,	// (0x00033087) list_single_graphic_2heading_pane_fp_t2

0x7fd3,	// (0x00034866) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7fd3,	// (0x00034866) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x0003c4fc) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x0003c4fc) list_single_graphic_2heading_pane_fp_t

0xc0f6,	// (0x00038989) fep_hwr_write_pane_g5_ParamLimits

0xc0f6,	// (0x00038989) fep_hwr_write_pane_g5

0xc102,	// (0x00038995) fep_hwr_write_pane_g6_ParamLimits

0xc102,	// (0x00038995) fep_hwr_write_pane_g6

0xc9a8,	// (0x0003923b) eswt_shell_pane_ParamLimits

0x9aa2,	// (0x00036335) bg_popup_window_pane_cp18_ParamLimits

0xad2f,	// (0x000375c2) heading_pane_cp70

0xcad2,	// (0x00039365) popup_eswt_tasktip_window_t1_ParamLimits

0x94fe,	// (0x00035d91) aid_touch_tab_arrow_left

0x950d,	// (0x00035da0) aid_touch_tab_arrow_right

0x72ff,	// (0x00033b92) title_pane_g3_ParamLimits

0x72ff,	// (0x00033b92) title_pane_g3

0x7bf1,	// (0x00034484) set_value_pane_g1

0x93cb,	// (0x00035c5e) popup_toolbar_trans_pane_ParamLimits

0xcc1e,	// (0x000394b1) aid_size_cell_tb_trans_pane_ParamLimits

0x7c32,	// (0x000344c5) bg_tb_trans_pane_ParamLimits

0xcc30,	// (0x000394c3) grid_tb_trans_pane_ParamLimits

0x7635,	// (0x00033ec8) cont_note_pane_ParamLimits

0x7635,	// (0x00033ec8) cont_note_pane

0x79a3,	// (0x00034236) cont_snote2_single_text_pane_ParamLimits

0x79a3,	// (0x00034236) cont_snote2_single_text_pane

0x79a3,	// (0x00034236) cont_snote2_single_graphic_pane_ParamLimits

0x79a3,	// (0x00034236) cont_snote2_single_graphic_pane

0xa056,	// (0x000368e9) cont_note_wait_pane_ParamLimits

0xa056,	// (0x000368e9) cont_note_wait_pane

0xa056,	// (0x000368e9) cont_note_image_pane_ParamLimits

0xa056,	// (0x000368e9) cont_note_image_pane

0xccd8,	// (0x0003956b) popup_note2_window_g1_ParamLimits

0xccd8,	// (0x0003956b) popup_note2_window_g1

0xcd09,	// (0x0003959c) popup_note2_window_t1_ParamLimits

0xcd09,	// (0x0003959c) popup_note2_window_t1

0xcd4e,	// (0x000395e1) popup_note2_window_t2_ParamLimits

0xcd4e,	// (0x000395e1) popup_note2_window_t2

0xcd93,	// (0x00039626) popup_note2_window_t3_ParamLimits

0xcd93,	// (0x00039626) popup_note2_window_t3

0xcdd8,	// (0x0003966b) popup_note2_window_t4_ParamLimits

0xcdd8,	// (0x0003966b) popup_note2_window_t4

0x76b9,	// (0x00033f4c) popup_note2_window_t5_ParamLimits

0x76b9,	// (0x00033f4c) popup_note2_window_t5

0x0004,

0xfc75,	// (0x0003c508) popup_note2_window_t_ParamLimits

0xfc75,	// (0x0003c508) popup_note2_window_t

0xce07,	// (0x0003969a) popup_note2_image_window_g1_ParamLimits

0xce07,	// (0x0003969a) popup_note2_image_window_g1

0xce13,	// (0x000396a6) popup_note2_image_window_g2_ParamLimits

0xce13,	// (0x000396a6) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x0003c513) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x0003c513) popup_note2_image_window_g

0xce25,	// (0x000396b8) popup_note2_image_window_t1_ParamLimits

0xce25,	// (0x000396b8) popup_note2_image_window_t1

0xce3d,	// (0x000396d0) popup_note2_image_window_t2_ParamLimits

0xce3d,	// (0x000396d0) popup_note2_image_window_t2

0xce55,	// (0x000396e8) popup_note2_image_window_t3_ParamLimits

0xce55,	// (0x000396e8) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x0003c518) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x0003c518) popup_note2_image_window_t

0xa064,	// (0x000368f7) popup_note2_wait_window_g1_ParamLimits

0xa064,	// (0x000368f7) popup_note2_wait_window_g1

0xce71,	// (0x00039704) popup_note2_wait_window_g2_ParamLimits

0xce71,	// (0x00039704) popup_note2_wait_window_g2

0xa07c,	// (0x0003690f) popup_note2_wait_window_g3_ParamLimits

0xa07c,	// (0x0003690f) popup_note2_wait_window_g3

0x0002,

0xfc8c,	// (0x0003c51f) popup_note2_wait_window_g_ParamLimits

0xfc8c,	// (0x0003c51f) popup_note2_wait_window_g

0xce7d,	// (0x00039710) popup_note2_wait_window_t1_ParamLimits

0xce7d,	// (0x00039710) popup_note2_wait_window_t1

0xce9b,	// (0x0003972e) popup_note2_wait_window_t2_ParamLimits

0xce9b,	// (0x0003972e) popup_note2_wait_window_t2

0xceb9,	// (0x0003974c) popup_note2_wait_window_t3_ParamLimits

0xceb9,	// (0x0003974c) popup_note2_wait_window_t3

0xcecb,	// (0x0003975e) popup_note2_wait_window_t4_ParamLimits

0xcecb,	// (0x0003975e) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0003c526) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0003c526) popup_note2_wait_window_t

0xcedd,	// (0x00039770) wait_bar2_pane_ParamLimits

0xcedd,	// (0x00039770) wait_bar2_pane

0xcef5,	// (0x00039788) popup_snote2_single_text_window_g1_ParamLimits

0xcef5,	// (0x00039788) popup_snote2_single_text_window_g1

0xcf1d,	// (0x000397b0) popup_snote2_single_text_window_t1_ParamLimits

0xcf1d,	// (0x000397b0) popup_snote2_single_text_window_t1

0xcf69,	// (0x000397fc) popup_snote2_single_text_window_t2_ParamLimits

0xcf69,	// (0x000397fc) popup_snote2_single_text_window_t2

0xcfb5,	// (0x00039848) popup_snote2_single_text_window_t3_ParamLimits

0xcfb5,	// (0x00039848) popup_snote2_single_text_window_t3

0xcff6,	// (0x00039889) popup_snote2_single_text_window_t4_ParamLimits

0xcff6,	// (0x00039889) popup_snote2_single_text_window_t4

0xd02c,	// (0x000398bf) popup_snote2_single_text_window_t5_ParamLimits

0xd02c,	// (0x000398bf) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0003c52f) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0003c52f) popup_snote2_single_text_window_t

0xd057,	// (0x000398ea) popup_snote2_single_graphic_window_g1_ParamLimits

0xd057,	// (0x000398ea) popup_snote2_single_graphic_window_g1

0xd07f,	// (0x00039912) popup_snote2_single_graphic_window_g2_ParamLimits

0xd07f,	// (0x00039912) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0003c53a) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0003c53a) popup_snote2_single_graphic_window_g

0xd0a7,	// (0x0003993a) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0a7,	// (0x0003993a) popup_snote2_single_graphic_window_t1

0xd0f3,	// (0x00039986) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0f3,	// (0x00039986) popup_snote2_single_graphic_window_t2

0xcfb5,	// (0x00039848) popup_snote2_single_graphic_window_t3_ParamLimits

0xcfb5,	// (0x00039848) popup_snote2_single_graphic_window_t3

0xcff6,	// (0x00039889) popup_snote2_single_graphic_window_t4_ParamLimits

0xcff6,	// (0x00039889) popup_snote2_single_graphic_window_t4

0xd02c,	// (0x000398bf) popup_snote2_single_graphic_window_t5_ParamLimits

0xd02c,	// (0x000398bf) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0003c53f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0003c53f) popup_snote2_single_graphic_window_t

0xbb3d,	// (0x000383d0) clock_nsta_pane_cp2_t1

0xbb3d,	// (0x000383d0) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0003c353) clock_nsta_pane_cp2_t

0x541a,	// (0x00031cad) form_field_data_wide_pane_g1_ParamLimits

0x7c4c,	// (0x000344df) form_field_data_wide_pane_g2_ParamLimits

0x7c4c,	// (0x000344df) form_field_data_wide_pane_g2

0x7c58,	// (0x000344eb) form_field_data_wide_pane_g3_ParamLimits

0x7c58,	// (0x000344eb) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x0003bf2a) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x0003bf2a) form_field_data_wide_pane_g

0xb9d6,	// (0x00038269) grid_touch_3_pane_ParamLimits

0xb9d6,	// (0x00038269) grid_touch_3_pane

0xd13f,	// (0x000399d2) cell_touch_3_pane_ParamLimits

0xd13f,	// (0x000399d2) cell_touch_3_pane

0xc056,	// (0x000388e9) cell_touch_3_pane_g1

0xc056,	// (0x000388e9) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x0003c3d8) cell_touch_3_pane_g

0x76eb,	// (0x00033f7e) cont_query_data_pane

0x76f3,	// (0x00033f86) cont_query_data_pane_cp1

0xd172,	// (0x00039a05) button_value_adjust_pane_cp7

0xd17a,	// (0x00039a0d) query_popup_pane_cp3

0x85ca,	// (0x00034e5d) bg_popup_sub_pane_cp22_ParamLimits

0x57da,	// (0x0003206d) navi_navi_volume_pane_cp2

0x57f5,	// (0x00032088) popup_side_volume_key_window_g2

0x5804,	// (0x00032097) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x0003bfbc) popup_side_volume_key_window_g

0x5821,	// (0x000320b4) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x0003bfc3) popup_side_volume_key_window_t

0x8885,	// (0x00035118) popup_side_volume_key_window_ParamLimits

0x5027,	// (0x000318ba) list_double_graphic_pane_g4_ParamLimits

0x5027,	// (0x000318ba) list_double_graphic_pane_g4

0xb024,	// (0x000378b7) list_single_2heading_msg_pane_ParamLimits

0xb024,	// (0x000378b7) list_single_2heading_msg_pane

0x7ff3,	// (0x00034886) list_single_2heading_msg_pane_g1_ParamLimits

0x7ff3,	// (0x00034886) list_single_2heading_msg_pane_g1

0x3fd8,	// (0x0003086b) list_single_2heading_msg_pane_g2_ParamLimits

0x3fd8,	// (0x0003086b) list_single_2heading_msg_pane_g2

0x7fff,	// (0x00034892) list_single_2heading_msg_pane_g3_ParamLimits

0x7fff,	// (0x00034892) list_single_2heading_msg_pane_g3

0x800b,	// (0x0003489e) list_single_2heading_msg_pane_g4_ParamLimits

0x800b,	// (0x0003489e) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0003c54a) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0003c54a) list_single_2heading_msg_pane_g

0x8023,	// (0x000348b6) list_single_2heading_msg_pane_t1_ParamLimits

0x8023,	// (0x000348b6) list_single_2heading_msg_pane_t1

0x804b,	// (0x000348de) list_single_2heading_msg_pane_t2_ParamLimits

0x804b,	// (0x000348de) list_single_2heading_msg_pane_t2

0x807f,	// (0x00034912) list_single_2heading_msg_pane_t3_ParamLimits

0x807f,	// (0x00034912) list_single_2heading_msg_pane_t3

0x80b8,	// (0x0003494b) list_single_2heading_msg_pane_t4_ParamLimits

0x80b8,	// (0x0003494b) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0003c553) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0003c553) list_single_2heading_msg_pane_t

0x3289,	// (0x0002fb1c) title_pane_g4_ParamLimits

0x3289,	// (0x0002fb1c) title_pane_g4

0x55e6,	// (0x00031e79) title_pane_stacon_g3_ParamLimits

0x55e6,	// (0x00031e79) title_pane_stacon_g3

0xcc9b,	// (0x0003952e) list_single_2graphic_im_pane_g4_ParamLimits

0xcc9b,	// (0x0003952e) list_single_2graphic_im_pane_g4

0xaacc,	// (0x0003735f) popup_side_volume_key_window_cp

0xb342,	// (0x00037bd5) main_idle_act2_pane_t1

0x5c82,	// (0x00032515) toolbar_button_pane_g10

0x7b9b,	// (0x0003442e) popup_toolbar_window_cp1

0xbb2e,	// (0x000383c1) clock_nsta_pane_cp_t1

0xbb2e,	// (0x000383c1) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x0003c34e) clock_nsta_pane_cp_t

0x57da,	// (0x0003206d) navi_navi_volume_pane_cp2_ParamLimits

0x57e9,	// (0x0003207c) popup_side_volume_key_window_g1_ParamLimits

0x57f5,	// (0x00032088) popup_side_volume_key_window_g2_ParamLimits

0x5804,	// (0x00032097) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x0003bfbc) popup_side_volume_key_window_g_ParamLimits

0x64cb,	// (0x00032d5e) fep_hwr_aid_pane

0x6574,	// (0x00032e07) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0c6,	// (0x00038959) fep_hwr_top_pane_g1_ParamLimits

0xc0d8,	// (0x0003896b) fep_hwr_top_pane_g2_ParamLimits

0x6594,	// (0x00032e27) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x0003c3a3) fep_hwr_top_pane_g_ParamLimits

0x65a9,	// (0x00032e3c) fep_hwr_top_text_pane_ParamLimits

0xa881,	// (0x00037114) aid_touch_tab_arrow_arrow_2

0xa88a,	// (0x0003711d) aid_touch_tab_arrow_left_2

0x64df,	// (0x00032d72) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6516,	// (0x00032da9) fep_hwr_prediction_pane

0xc22e,	// (0x00038ac1) fep_vkb_prediction_pane

0xc334,	// (0x00038bc7) fep_vkb_side_pane_g3_ParamLimits

0xc334,	// (0x00038bc7) fep_vkb_side_pane_g3

0x6738,	// (0x00032fcb) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x68f8,	// (0x0003318b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6905,	// (0x00033198) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbf,	// (0x0003c452) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6a34,	// (0x000332c7) fep_hwr_prediction_pane_g1

0x6a3e,	// (0x000332d1) fep_hwr_prediction_pane_g2

0x6a46,	// (0x000332d9) fep_hwr_prediction_pane_g3

0x6a4e,	// (0x000332e1) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003c55c) fep_hwr_prediction_pane_g

0xd1a1,	// (0x00039a34) fep_vkb_prediction_pane_g1

0xd1ab,	// (0x00039a3e) fep_vkb_prediction_pane_g2

0xd1b3,	// (0x00039a46) fep_vkb_prediction_pane_g3

0xd1bb,	// (0x00039a4e) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0003c565) fep_vkb_prediction_pane_g

0x6027,	// (0x000328ba) slider_set_pane_g3

0x603b,	// (0x000328ce) slider_set_pane_g4

0x6053,	// (0x000328e6) slider_set_pane_g5

0x6027,	// (0x000328ba) slider_set_pane_g6

0x6069,	// (0x000328fc) slider_set_pane_g7

0xaf7a,	// (0x0003780d) slider_form_pane_g3

0xaf83,	// (0x00037816) slider_form_pane_g4

0xaf8b,	// (0x0003781e) slider_form_pane_g5

0xaf7a,	// (0x0003780d) slider_form_pane_g6

0xaf93,	// (0x00037826) slider_form_pane_g7

0xb610,	// (0x00037ea3) slider_set_pane_vc_g3

0xb619,	// (0x00037eac) slider_set_pane_vc_g4

0xb622,	// (0x00037eb5) slider_set_pane_vc_g5

0xb610,	// (0x00037ea3) slider_set_pane_vc_g6

0xb62b,	// (0x00037ebe) slider_set_pane_vc_g7

0xb610,	// (0x00037ea3) slider_form_pane_vc_g1

0xb619,	// (0x00037eac) slider_form_pane_vc_g2

0xb622,	// (0x00037eb5) slider_form_pane_vc_g3

0xb610,	// (0x00037ea3) slider_form_pane_vc_g4

0xb7e0,	// (0x00038073) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0003c327) slider_form_pane_vc_g

0x326b,	// (0x0002fafe) main_idle_act3_pane

0xd1c3,	// (0x00039a56) ai3_links_pane

0xd1cc,	// (0x00039a5f) popup_ai3_data_window_ParamLimits

0xd1cc,	// (0x00039a5f) popup_ai3_data_window

0x326b,	// (0x0002fafe) grid_ai3_links_pane

0xd1ea,	// (0x00039a7d) cell_ai3_links_pane_ParamLimits

0xd1ea,	// (0x00039a7d) cell_ai3_links_pane

0xd204,	// (0x00039a97) bg_popup_sub_pane_cp11

0xd211,	// (0x00039aa4) cell_ai3_links_pane_g1

0x326b,	// (0x0002fafe) bg_popup_sub_pane_cp12

0xd236,	// (0x00039ac9) heading_ai3_data_pane

0xd23e,	// (0x00039ad1) list_ai3_gene_pane

0xd24a,	// (0x00039add) popup_ai3_data_window_g1

0xd252,	// (0x00039ae5) heading_ai3_data_pane_g1

0xd25a,	// (0x00039aed) heading_ai3_data_pane_t1

0xd268,	// (0x00039afb) list_double_ai3_gene_pane_ParamLimits

0xd268,	// (0x00039afb) list_double_ai3_gene_pane

0xd275,	// (0x00039b08) list_single_ai3_gene_pane_ParamLimits

0xd275,	// (0x00039b08) list_single_ai3_gene_pane

0xc01b,	// (0x000388ae) list_highlight_pane_cp7_ParamLimits

0xc01b,	// (0x000388ae) list_highlight_pane_cp7

0xd282,	// (0x00039b15) list_single_a13_gene_pane_t1_ParamLimits

0xd282,	// (0x00039b15) list_single_a13_gene_pane_t1

0xd299,	// (0x00039b2c) list_single_ai3_gene_pane_g1

0xd2a2,	// (0x00039b35) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0003c56e) list_single_ai3_gene_pane_g

0xd2aa,	// (0x00039b3d) list_double_ai3_gene_pane_g1_ParamLimits

0xd2aa,	// (0x00039b3d) list_double_ai3_gene_pane_g1

0xd2b6,	// (0x00039b49) list_double_ai3_gene_pane_t1_ParamLimits

0xd2b6,	// (0x00039b49) list_double_ai3_gene_pane_t1

0xd2d2,	// (0x00039b65) list_double_ai3_gene_pane_t2_ParamLimits

0xd2d2,	// (0x00039b65) list_double_ai3_gene_pane_t2

0xd2e7,	// (0x00039b7a) list_double_ai3_gene_pane_t3_ParamLimits

0xd2e7,	// (0x00039b7a) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0003c573) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0003c573) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7fe9,	// (0x0003487c) aid_size_min_col_2

0xd18b,	// (0x00039a1e) aid_size_min_msg_ParamLimits

0xd18b,	// (0x00039a1e) aid_size_min_msg

0xc440,	// (0x00038cd3) fep_vkb_top_text_pane_g2_ParamLimits

0xc440,	// (0x00038cd3) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x0003c3d3) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x0003c3d3) fep_vkb_top_text_pane_g

0x326b,	// (0x0002fafe) main_hc_apps_shell_pane

0xd304,	// (0x00039b97) grid_hc_apps_pane_ParamLimits

0xd304,	// (0x00039b97) grid_hc_apps_pane

0xd313,	// (0x00039ba6) list_hc_apps_pane

0xd31b,	// (0x00039bae) scroll_pane_cp37_ParamLimits

0xd31b,	// (0x00039bae) scroll_pane_cp37

0xd327,	// (0x00039bba) cell_hc_apps_pane_ParamLimits

0xd327,	// (0x00039bba) cell_hc_apps_pane

0xd3df,	// (0x00039c72) cell_hc_apps_pane_g1_ParamLimits

0xd3df,	// (0x00039c72) cell_hc_apps_pane_g1

0xd410,	// (0x00039ca3) cell_hc_apps_pane_g2_ParamLimits

0xd410,	// (0x00039ca3) cell_hc_apps_pane_g2

0xd42c,	// (0x00039cbf) cell_hc_apps_pane_g3_ParamLimits

0xd42c,	// (0x00039cbf) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0003c57a) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0003c57a) cell_hc_apps_pane_g

0xd44e,	// (0x00039ce1) cell_hc_apps_pane_t1_ParamLimits

0xd44e,	// (0x00039ce1) cell_hc_apps_pane_t1

0x7635,	// (0x00033ec8) grid_highlight_pane_cp10_ParamLimits

0x7635,	// (0x00033ec8) grid_highlight_pane_cp10

0xd48e,	// (0x00039d21) list_single_hc_apps_pane_ParamLimits

0xd48e,	// (0x00039d21) list_single_hc_apps_pane

0xd4cd,	// (0x00039d60) list_single_hc_apps_pane_g1

0x80dd,	// (0x00034970) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0003c581) list_single_hc_apps_pane_g

0x80f6,	// (0x00034989) list_single_hc_apps_pane_g2_copy1

0x8112,	// (0x000349a5) list_single_hc_apps_pane_t1

0x73ab,	// (0x00033c3e) bg_set_opt_pane_cp_ParamLimits

0x4dfe,	// (0x00031691) setting_slider_pane_t1_ParamLimits

0x4e14,	// (0x000316a7) setting_slider_pane_t2_ParamLimits

0x4e2e,	// (0x000316c1) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0003be0d) setting_slider_pane_t_ParamLimits

0x4e46,	// (0x000316d9) slider_set_pane_ParamLimits

0x5b14,	// (0x000323a7) control_pane_g5_ParamLimits

0x5b14,	// (0x000323a7) control_pane_g5

0xad9b,	// (0x0003762e) slider_set_pane_g1_ParamLimits

0x601b,	// (0x000328ae) slider_set_pane_g2_ParamLimits

0x6027,	// (0x000328ba) slider_set_pane_g3_ParamLimits

0x603b,	// (0x000328ce) slider_set_pane_g4_ParamLimits

0x6053,	// (0x000328e6) slider_set_pane_g5_ParamLimits

0x6027,	// (0x000328ba) slider_set_pane_g6_ParamLimits

0x6069,	// (0x000328fc) slider_set_pane_g7_ParamLimits

0xf975,	// (0x0003c208) slider_set_pane_g_ParamLimits

0x896a,	// (0x000351fd) navi_icon_text_pane_ParamLimits

0x94bd,	// (0x00035d50) aid_fill_nsta_2_ParamLimits

0x94fe,	// (0x00035d91) aid_touch_tab_arrow_left_ParamLimits

0x950d,	// (0x00035da0) aid_touch_tab_arrow_right_ParamLimits

0x957a,	// (0x00035e0d) clock_nsta_pane_ParamLimits

0xa85d,	// (0x000370f0) navi_icon_pane_g1_ParamLimits

0xa86c,	// (0x000370ff) navi_text_pane_t1_ParamLimits

0xbc4b,	// (0x000384de) navi_icon_text_pane_g1_ParamLimits

0xbc5a,	// (0x000384ed) navi_icon_text_pane_t1_ParamLimits

0xd4cd,	// (0x00039d60) list_single_hc_apps_pane_g1_ParamLimits

0x80dd,	// (0x00034970) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0003c581) list_single_hc_apps_pane_g_ParamLimits

0x80f6,	// (0x00034989) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8112,	// (0x000349a5) list_single_hc_apps_pane_t1_ParamLimits

0x4d08,	// (0x0003159b) popup_toolbar2_fixed_window_ParamLimits

0x4d08,	// (0x0003159b) popup_toolbar2_fixed_window

0x93c1,	// (0x00035c54) popup_toolbar2_float_window

0x326b,	// (0x0002fafe) bg_popup_sub_pane_cp27

0xd4e6,	// (0x00039d79) grid_toolbar2_float_pane

0x326b,	// (0x0002fafe) bg_popup_sub_pane_cp26

0xd4e6,	// (0x00039d79) grid_toolbar2_fixed_pane

0xd4ee,	// (0x00039d81) cell_toolbar2_fixed_pane_ParamLimits

0xd4ee,	// (0x00039d81) cell_toolbar2_fixed_pane

0xd4fe,	// (0x00039d91) cell_toolbar2_fixed_pane_g1

0xd507,	// (0x00039d9a) toolbar2_fixed_button_pane

0x99b0,	// (0x00036243) toolbar2_fixed_button_pane_g1

0x99c0,	// (0x00036253) toolbar2_fixed_button_pane_g2

0x99b8,	// (0x0003624b) toolbar2_fixed_button_pane_g3

0x99d0,	// (0x00036263) toolbar2_fixed_button_pane_g4

0x99c8,	// (0x0003625b) toolbar2_fixed_button_pane_g5

0x99d8,	// (0x0003626b) toolbar2_fixed_button_pane_g6

0x99e0,	// (0x00036273) toolbar2_fixed_button_pane_g7

0x99f0,	// (0x00036283) toolbar2_fixed_button_pane_g8

0x99e8,	// (0x0003627b) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x0003c10a) toolbar2_fixed_button_pane_g

0xd50f,	// (0x00039da2) cell_toolbar2_float_pane_ParamLimits

0xd50f,	// (0x00039da2) cell_toolbar2_float_pane

0xd520,	// (0x00039db3) cell_toolbar2_float_pane_g1

0xd507,	// (0x00039d9a) toolbar2_fixed_button_pane_cp

0xc19c,	// (0x00038a2f) fep_vkb_accented_list_pane_ParamLimits

0xc19c,	// (0x00038a2f) fep_vkb_accented_list_pane

0x6718,	// (0x00032fab) bg_popup_fep_shadow_pane_g9

0x8aee,	// (0x00035381) bg_popup_fep_shadow_pane_cp3

0x7d9b,	// (0x0003462e) list_accented_list_pane

0xd529,	// (0x00039dbc) list_single_accented_list_pane_ParamLimits

0xd529,	// (0x00039dbc) list_single_accented_list_pane

0x8aee,	// (0x00035381) list_highlight_pane_cp10

0xd53a,	// (0x00039dcd) list_single_accented_list_pane_t1

0x9307,	// (0x00035b9a) popup_slider_window_ParamLimits

0x9307,	// (0x00035b9a) popup_slider_window

0xd182,	// (0x00039a15) aid_indentation_list_msg

0xd606,	// (0x00039e99) bg_popup_window_pane_cp19

0xd674,	// (0x00039f07) popup_slider_window_g1

0xd690,	// (0x00039f23) popup_slider_window_g2

0xd6ac,	// (0x00039f3f) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0003c586) popup_slider_window_g

0xd708,	// (0x00039f9b) popup_slider_window_t1

0xd77c,	// (0x0003a00f) small_volume_slider_vertical_pane

0xc056,	// (0x000388e9) small_volume_slider_vertical_pane_g1

0xc056,	// (0x000388e9) small_volume_slider_vertical_pane_g2

0xd7b9,	// (0x0003a04c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0003c598) small_volume_slider_vertical_pane_g

0x4ab6,	// (0x00031349) area_side_right_pane_ParamLimits

0x4ab6,	// (0x00031349) area_side_right_pane

0x6a56,	// (0x000332e9) aid_size_side_button_ParamLimits

0x6a56,	// (0x000332e9) aid_size_side_button

0x6a6a,	// (0x000332fd) grid_sctrl_middle_pane_ParamLimits

0x6a6a,	// (0x000332fd) grid_sctrl_middle_pane

0x6a8a,	// (0x0003331d) sctrl_sk_bottom_pane

0x6a9b,	// (0x0003332e) sctrl_sk_top_pane

0x6aad,	// (0x00033340) aid_touch_sctrl_top

0x6aba,	// (0x0003334d) bg_sctrl_sk_pane_ParamLimits

0x6aba,	// (0x0003334d) bg_sctrl_sk_pane

0x6ac8,	// (0x0003335b) sctrl_sk_top_pane_g1

0x6ad5,	// (0x00033368) sctrl_sk_top_pane_t1

0x6aad,	// (0x00033340) aid_touch_sctrl_bottom

0x6aba,	// (0x0003334d) bg_sctrl_sk_pane_cp_ParamLimits

0x6aba,	// (0x0003334d) bg_sctrl_sk_pane_cp

0x6af0,	// (0x00033383) sctrl_sk_bottom_pane_g1

0x6ad5,	// (0x00033368) sctrl_sk_bottom_pane_t1

0x6af9,	// (0x0003338c) cell_sctrl_middle_pane_ParamLimits

0x6af9,	// (0x0003338c) cell_sctrl_middle_pane

0x6b16,	// (0x000333a9) aid_touch_sctrl_middle_ParamLimits

0x6b16,	// (0x000333a9) aid_touch_sctrl_middle

0x6b28,	// (0x000333bb) bg_sctrl_middle_pane_ParamLimits

0x6b28,	// (0x000333bb) bg_sctrl_middle_pane

0x6738,	// (0x00032fcb) cell_sctrl_middle_pane_g1_ParamLimits

0x6738,	// (0x00032fcb) cell_sctrl_middle_pane_g1

0x6b36,	// (0x000333c9) cell_sctrl_middle_pane_g2_ParamLimits

0x6b36,	// (0x000333c9) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0003c5a4) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0003c5a4) cell_sctrl_middle_pane_g

0x99b0,	// (0x00036243) bg_sctrl_middle_pane_g1

0x99b8,	// (0x0003624b) bg_sctrl_middle_pane_g2

0x99c0,	// (0x00036253) bg_sctrl_middle_pane_g3

0x99c8,	// (0x0003625b) bg_sctrl_middle_pane_g4

0x99d0,	// (0x00036263) bg_sctrl_middle_pane_g5

0x99d8,	// (0x0003626b) bg_sctrl_middle_pane_g6

0x99e0,	// (0x00036273) bg_sctrl_middle_pane_g7

0x99e8,	// (0x0003627b) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0003c5a9) bg_sctrl_middle_pane_g

0x99f0,	// (0x00036283) bg_sctrl_middle_pane_g8_copy1

0x99b0,	// (0x00036243) bg_sctrl_sk_pane_g1

0x99c0,	// (0x00036253) bg_sctrl_sk_pane_g2

0x99b8,	// (0x0003624b) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x0003c10a) bg_sctrl_sk_pane_g

0x7b61,	// (0x000343f4) aid_size_touch_scroll_bar

0x99d0,	// (0x00036263) bg_sctrl_sk_pane_g4

0x99c8,	// (0x0003625b) bg_sctrl_sk_pane_g5

0x99d8,	// (0x0003626b) bg_sctrl_sk_pane_g6

0x99e0,	// (0x00036273) bg_sctrl_sk_pane_g7

0x99f0,	// (0x00036283) bg_sctrl_sk_pane_g8

0x99e8,	// (0x0003627b) bg_sctrl_sk_pane_g9

0x8f1e,	// (0x000357b1) popup_fep_china_hwr2_fs_candidate_window

0x8f28,	// (0x000357bb) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8f28,	// (0x000357bb) popup_fep_china_hwr2_fs_control_window

0x6738,	// (0x00032fcb) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0003c59f) sctrl_sk_top_pane_g

0xd7c2,	// (0x0003a055) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7c2,	// (0x0003a055) aid_fep_china_hwr2_fs_cell

0xd7d5,	// (0x0003a068) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7d5,	// (0x0003a068) bg_popup_fep_shadow_pane_cp4

0xd7ee,	// (0x0003a081) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7ee,	// (0x0003a081) bg_popup_fep_shadow_pane_cp5

0xd800,	// (0x0003a093) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd800,	// (0x0003a093) popup_fep_china_hwr2_fs_control_bar_grid

0xd810,	// (0x0003a0a3) popup_fep_china_hwr2_fs_control_funtion_grid

0xd818,	// (0x0003a0ab) aid_fep_china_hwr2_fs_candi_cell

0x326b,	// (0x0002fafe) bg_popup_fep_shadow_pane_cp6

0xd822,	// (0x0003a0b5) popup_fep_china_hwr2_fs_candidate_grid

0xd82c,	// (0x0003a0bf) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd82c,	// (0x0003a0bf) cell_fep_china_hwr2_fs_funtion_grid

0xc056,	// (0x000388e9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd844,	// (0x0003a0d7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd844,	// (0x0003a0d7) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd852,	// (0x0003a0e5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd852,	// (0x0003a0e5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0003c5ba) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0003c5ba) cell_fep_china_hwr2_fs_funtion_grid_g

0xd868,	// (0x0003a0fb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd868,	// (0x0003a0fb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd87d,	// (0x0003a110) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd87d,	// (0x0003a110) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0003c5bf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0003c5bf) cell_fep_china_hwr2_fs_funtion_grid_t

0xd899,	// (0x0003a12c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8a1,	// (0x0003a134) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8a9,	// (0x0003a13c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0003c5c4) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8b1,	// (0x0003a144) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8b1,	// (0x0003a144) cell_fep_china_hwr2_fs_candidate_grid

0xd8d0,	// (0x0003a163) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8d8,	// (0x0003a16b) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc056,	// (0x000388e9) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc056,	// (0x000388e9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x0003c3d8) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8e0,	// (0x0003a173) cell_fep_china_hwr2_fs_candidate_grid_t1

0x958d,	// (0x00035e20) clock_nsta_pane_cp_24_ParamLimits

0x958d,	// (0x00035e20) clock_nsta_pane_cp_24

0x960d,	// (0x00035ea0) indicator_nsta_pane_cp_24_ParamLimits

0x960d,	// (0x00035ea0) indicator_nsta_pane_cp_24

0xa6d9,	// (0x00036f6c) heading_pane_g1

0x0001,

0xf8dc,	// (0x0003c16f) heading_pane_g

0xb189,	// (0x00037a1c) grid_sct_catagory_button_pane

0xb1bb,	// (0x00037a4e) scroll_pane_cp5_ParamLimits

0xbc9f,	// (0x00038532) button_value_adjust_pane_cp5_ParamLimits

0xbc9f,	// (0x00038532) button_value_adjust_pane_cp5

0xbd84,	// (0x00038617) form2_midp_time_pane_ParamLimits

0xd8ee,	// (0x0003a181) cell_sct_catagory_button_pane_ParamLimits

0xd8ee,	// (0x0003a181) cell_sct_catagory_button_pane

0xc01b,	// (0x000388ae) bg_button_pane_cp01_ParamLimits

0xc01b,	// (0x000388ae) bg_button_pane_cp01

0xc056,	// (0x000388e9) cell_sct_catagory_button_pane_g1

0x9348,	// (0x00035bdb) popup_tb_extension_window

0xd900,	// (0x0003a193) aid_size_cell_ext_ParamLimits

0xd900,	// (0x0003a193) aid_size_cell_ext

0x7635,	// (0x00033ec8) bg_tb_trans_pane_cp1_ParamLimits

0x7635,	// (0x00033ec8) bg_tb_trans_pane_cp1

0xd920,	// (0x0003a1b3) grid_tb_ext_pane_ParamLimits

0xd920,	// (0x0003a1b3) grid_tb_ext_pane

0xd950,	// (0x0003a1e3) cell_tb_ext_pane_ParamLimits

0xd950,	// (0x0003a1e3) cell_tb_ext_pane

0xd967,	// (0x0003a1fa) cell_tb_ext_pane_g1_ParamLimits

0xd967,	// (0x0003a1fa) cell_tb_ext_pane_g1

0xd984,	// (0x0003a217) cell_tb_ext_pane_t1

0x7635,	// (0x00033ec8) list_highlight_pane_cp11_ParamLimits

0x7635,	// (0x00033ec8) list_highlight_pane_cp11

0x4d27,	// (0x000315ba) popup_uni_indicator_window_ParamLimits

0x4d27,	// (0x000315ba) popup_uni_indicator_window

0x7c32,	// (0x000344c5) bg_popup_sub_pane_cp14

0xd99f,	// (0x0003a232) list_uniindi_pane

0xd9ab,	// (0x0003a23e) uniindi_top_pane

0x7635,	// (0x00033ec8) bg_uniindi_top_pane

0xd9cc,	// (0x0003a25f) uniindi_top_pane_g1

0xd9e2,	// (0x0003a275) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0003c5cb) uniindi_top_pane_g

0xda0c,	// (0x0003a29f) uniindi_top_pane_t1

0xda38,	// (0x0003a2cb) list_single_uniindi_pane_ParamLimits

0xda38,	// (0x0003a2cb) list_single_uniindi_pane

0xc056,	// (0x000388e9) bg_uniindi_top_pane_g1

0xda4a,	// (0x0003a2dd) list_single_uniindi_pane_g1

0xda5d,	// (0x0003a2f0) list_single_uniindi_pane_t1

0x4b93,	// (0x00031426) control_bg_pane

0xda82,	// (0x0003a315) bg_sctrl_sk_pane_cp1

0xda8b,	// (0x0003a31e) bg_sctrl_sk_pane_cp2

0xda94,	// (0x0003a327) control_bg_pane_g1

0xda9d,	// (0x0003a330) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0003c5d4) control_bg_pane_g

0xba80,	// (0x00038313) cell_indicator_nsta_pane_g1_ParamLimits

0xbad0,	// (0x00038363) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x0003c33c) cell_indicator_nsta_pane_g_ParamLimits

0x64aa,	// (0x00032d3d) form2_midp_time_pane_t1_ParamLimits

0x79a3,	// (0x00034236) main_idle_act4_pane_ParamLimits

0x79a3,	// (0x00034236) main_idle_act4_pane

0x9348,	// (0x00035bdb) popup_tb_extension_window_ParamLimits

0xd942,	// (0x0003a1d5) tb_ext_find_pane_ParamLimits

0xd942,	// (0x0003a1d5) tb_ext_find_pane

0xdaa6,	// (0x0003a339) ai_gene_pane_1_cp1

0x8c37,	// (0x000354ca) ai_gene_pane_2_cp1

0xdaae,	// (0x0003a341) list_single_idle_plugin_calendar_pane

0xdab7,	// (0x0003a34a) list_single_idle_plugin_notification_pane

0xdac0,	// (0x0003a353) list_single_idle_plugin_player_pane

0xdac9,	// (0x0003a35c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdac9,	// (0x0003a35c) list_single_idle_plugin_shortcut_pane

0xdaeb,	// (0x0003a37e) main_idle_act4_pane_t1

0xdafd,	// (0x0003a390) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0003c5d9) main_idle_act4_pane_t

0xdb0f,	// (0x0003a3a2) middle_sk_idle_act4_pane_ParamLimits

0xdb0f,	// (0x0003a3a2) middle_sk_idle_act4_pane

0xdb25,	// (0x0003a3b8) popup_clock_digital_analogue_window_cp2

0xdb3f,	// (0x0003a3d2) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb3f,	// (0x0003a3d2) shortcut_wheel_idle_act4_pane

0xc056,	// (0x000388e9) shortcut_wheel_idle_act4_pane_g1

0xc056,	// (0x000388e9) shortcut_wheel_idle_act4_pane_g2

0xc056,	// (0x000388e9) shortcut_wheel_idle_act4_pane_g3

0xc056,	// (0x000388e9) shortcut_wheel_idle_act4_pane_g4

0xc056,	// (0x000388e9) shortcut_wheel_idle_act4_pane_g5

0xdb53,	// (0x0003a3e6) shortcut_wheel_idle_act4_pane_g6

0xdb5b,	// (0x0003a3ee) shortcut_wheel_idle_act4_pane_g7

0xdb63,	// (0x0003a3f6) shortcut_wheel_idle_act4_pane_g8

0xdb6b,	// (0x0003a3fe) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0003c5de) shortcut_wheel_idle_act4_pane_g

0xc2e0,	// (0x00038b73) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2e0,	// (0x00038b73) middle_sk_idle_act4_pane_g1

0xdbcf,	// (0x0003a462) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbcf,	// (0x0003a462) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0003c601) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0003c601) middle_sk_idle_act4_pane_g

0xdbdb,	// (0x0003a46e) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbdb,	// (0x0003a46e) middle_sk_idle_act4_pane_t1

0xdbf8,	// (0x0003a48b) grid_ai_shortcut_pane_ParamLimits

0xdbf8,	// (0x0003a48b) grid_ai_shortcut_pane

0xdc11,	// (0x0003a4a4) list_highlight_pane_cp16_ParamLimits

0xdc11,	// (0x0003a4a4) list_highlight_pane_cp16

0xdc1e,	// (0x0003a4b1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc1e,	// (0x0003a4b1) list_single_idle_plugin_shortcut_pane_g1

0xdc2a,	// (0x0003a4bd) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc2a,	// (0x0003a4bd) list_single_idle_plugin_shortcut_pane_g2

0xdc44,	// (0x0003a4d7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc44,	// (0x0003a4d7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0003c606) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0003c606) list_single_idle_plugin_shortcut_pane_g

0xdc57,	// (0x0003a4ea) cell_ai_shortcut_pane_ParamLimits

0xdc57,	// (0x0003a4ea) cell_ai_shortcut_pane

0xdc7a,	// (0x0003a50d) cell_ai_shortcut_pane_g1_ParamLimits

0xdc7a,	// (0x0003a50d) cell_ai_shortcut_pane_g1

0xdaa6,	// (0x0003a339) ai_gene_pane_1_cp2

0xdc9c,	// (0x0003a52f) ai_gene_pane_2_cp2

0xdca4,	// (0x0003a537) list_highlight_pane_cp15

0xdcad,	// (0x0003a540) list_single_idle_plugin_calendar_pane_g1

0xdca4,	// (0x0003a537) list_highlight_pane_cp17

0xdcb5,	// (0x0003a548) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcbd,	// (0x0003a550) list_single_idle_plugin_player_pane_g1

0xb3f0,	// (0x00037c83) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0003c60d) list_single_idle_plugin_player_pane_g

0xdcc5,	// (0x0003a558) list_single_idle_plugin_player_pane_t1

0xdcd3,	// (0x0003a566) list_single_idle_plugin_player_pane_t2

0xdce1,	// (0x0003a574) list_single_idle_plugin_player_pane_t3

0xdcef,	// (0x0003a582) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0003c612) list_single_idle_plugin_player_pane_t

0xdcfd,	// (0x0003a590) wait_bar_pane_cp15

0xdd05,	// (0x0003a598) grid_ai_notification_pane

0xb3f0,	// (0x00037c83) list_single_idle_plugin_notification_pane_g1

0xdd0e,	// (0x0003a5a1) cell_ai_notification_pane_ParamLimits

0xdd0e,	// (0x0003a5a1) cell_ai_notification_pane

0xdd1b,	// (0x0003a5ae) cell_ai_notification_pane_g1

0xdd23,	// (0x0003a5b6) cell_ai_notification_pane_t1

0xdd31,	// (0x0003a5c4) tb_ext_find_button_pane

0xdd39,	// (0x0003a5cc) tb_ext_find_pane_g1

0xdd41,	// (0x0003a5d4) tb_ext_find_pane_t1

0x8500,	// (0x00034d93) tb_ext_find_button_pane_g1

0xdd4f,	// (0x0003a5e2) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0003c61b) tb_ext_find_button_pane_g

0xdaeb,	// (0x0003a37e) main_idle_act4_pane_t1_ParamLimits

0xdafd,	// (0x0003a390) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0003c5d9) main_idle_act4_pane_t_ParamLimits

0xdb25,	// (0x0003a3b8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb33,	// (0x0003a3c6) sat_plugin_idle_act4_pane_ParamLimits

0xdb33,	// (0x0003a3c6) sat_plugin_idle_act4_pane

0xdd58,	// (0x0003a5eb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd58,	// (0x0003a5eb) sat_plugin_idle_act4_pane_t1

0xdd6b,	// (0x0003a5fe) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd6b,	// (0x0003a5fe) sat_plugin_idle_act4_pane_t2

0xdd7e,	// (0x0003a611) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd7e,	// (0x0003a611) sat_plugin_idle_act4_pane_t3

0xdd91,	// (0x0003a624) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd91,	// (0x0003a624) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0003c620) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0003c620) sat_plugin_idle_act4_pane_t

0x4c58,	// (0x000314eb) popup_battery_window_ParamLimits

0x4c58,	// (0x000314eb) popup_battery_window

0x7635,	// (0x00033ec8) bg_popup_sub_pane_cp25_ParamLimits

0x7635,	// (0x00033ec8) bg_popup_sub_pane_cp25

0xdda4,	// (0x0003a637) popup_battery_window_g1_ParamLimits

0xdda4,	// (0x0003a637) popup_battery_window_g1

0xddb0,	// (0x0003a643) popup_battery_window_t1_ParamLimits

0xddb0,	// (0x0003a643) popup_battery_window_t1

0xddc2,	// (0x0003a655) popup_battery_window_t2_ParamLimits

0xddc2,	// (0x0003a655) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0003c629) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0003c629) popup_battery_window_t

0x8b02,	// (0x00035395) midp_canvas_pane_ParamLimits

0x8b79,	// (0x0003540c) midp_keypad_pane_ParamLimits

0x8b79,	// (0x0003540c) midp_keypad_pane

0x8e74,	// (0x00035707) main_midp_pane_ParamLimits

0xbb4c,	// (0x000383df) signal_pane_g2_cp_ParamLimits

0xdddf,	// (0x0003a672) aid_size_cell_midp_keypad_ParamLimits

0xdddf,	// (0x0003a672) aid_size_cell_midp_keypad

0xddf9,	// (0x0003a68c) midp_keyp_game_grid_pane_ParamLimits

0xddf9,	// (0x0003a68c) midp_keyp_game_grid_pane

0xde19,	// (0x0003a6ac) midp_keyp_rocker_pane_ParamLimits

0xde19,	// (0x0003a6ac) midp_keyp_rocker_pane

0xde48,	// (0x0003a6db) midp_keyp_sk_left_pane_ParamLimits

0xde48,	// (0x0003a6db) midp_keyp_sk_left_pane

0xdea2,	// (0x0003a735) midp_keyp_sk_right_pane_ParamLimits

0xdea2,	// (0x0003a735) midp_keyp_sk_right_pane

0x326b,	// (0x0002fafe) bg_button_pane_cp03

0xdefc,	// (0x0003a78f) midp_keyp_sk_left_pane_g1

0x326b,	// (0x0002fafe) bg_button_pane_cp04

0xdefc,	// (0x0003a78f) midp_keyp_sk_right_pane_g1

0xc056,	// (0x000388e9) midp_keyp_rocker_pane_g1

0xdf05,	// (0x0003a798) keyp_game_cell_pane_ParamLimits

0xdf05,	// (0x0003a798) keyp_game_cell_pane

0x326b,	// (0x0002fafe) bg_button_pane_cp02

0xdf18,	// (0x0003a7ab) keyp_game_cell_pane_g1

0x4ca2,	// (0x00031535) popup_fep_vkb2_window_ParamLimits

0x4ca2,	// (0x00031535) popup_fep_vkb2_window

0x6b58,	// (0x000333eb) aid_size_cell_vkb2_ParamLimits

0x6b58,	// (0x000333eb) aid_size_cell_vkb2

0x6ba4,	// (0x00033437) popup_fep_vkb2_window_g1_ParamLimits

0x6ba4,	// (0x00033437) popup_fep_vkb2_window_g1

0x6bec,	// (0x0003347f) vkb2_area_bottom_pane_ParamLimits

0x6bec,	// (0x0003347f) vkb2_area_bottom_pane

0x6c40,	// (0x000334d3) vkb2_area_keypad_pane_ParamLimits

0x6c40,	// (0x000334d3) vkb2_area_keypad_pane

0x6c86,	// (0x00033519) vkb2_area_top_pane_ParamLimits

0x6c86,	// (0x00033519) vkb2_area_top_pane

0x6d00,	// (0x00033593) vkb2_top_entry_pane_ParamLimits

0x6d00,	// (0x00033593) vkb2_top_entry_pane

0x6d2a,	// (0x000335bd) vkb2_top_grid_left_pane_ParamLimits

0x6d2a,	// (0x000335bd) vkb2_top_grid_left_pane

0x6d48,	// (0x000335db) vkb2_top_grid_right_pane_ParamLimits

0x6d48,	// (0x000335db) vkb2_top_grid_right_pane

0x6d66,	// (0x000335f9) vkb2_cell_keypad_pane_ParamLimits

0x6d66,	// (0x000335f9) vkb2_cell_keypad_pane

0x6e1c,	// (0x000336af) vkb2_area_bottom_grid_pane_ParamLimits

0x6e1c,	// (0x000336af) vkb2_area_bottom_grid_pane

0x6e42,	// (0x000336d5) vkb2_area_bottom_pane_g1_ParamLimits

0x6e42,	// (0x000336d5) vkb2_area_bottom_pane_g1

0x6e66,	// (0x000336f9) vkb2_area_bottom_pane_g2_ParamLimits

0x6e66,	// (0x000336f9) vkb2_area_bottom_pane_g2

0x6e94,	// (0x00033727) vkb2_area_bottom_pane_g3_ParamLimits

0x6e94,	// (0x00033727) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0003c62e) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0003c62e) vkb2_area_bottom_pane_g

0x6ef5,	// (0x00033788) vkb2_top_cell_left_pane_ParamLimits

0x6ef5,	// (0x00033788) vkb2_top_cell_left_pane

0xdf29,	// (0x0003a7bc) vkb2_top_entry_pane_g1_ParamLimits

0xdf29,	// (0x0003a7bc) vkb2_top_entry_pane_g1

0xdf37,	// (0x0003a7ca) vkb2_top_entry_pane_t1_ParamLimits

0xdf37,	// (0x0003a7ca) vkb2_top_entry_pane_t1

0xdf4f,	// (0x0003a7e2) vkb2_top_entry_pane_t2_ParamLimits

0xdf4f,	// (0x0003a7e2) vkb2_top_entry_pane_t2

0xdf67,	// (0x0003a7fa) vkb2_top_entry_pane_t3_ParamLimits

0xdf67,	// (0x0003a7fa) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0003c635) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0003c635) vkb2_top_entry_pane_t

0x6f42,	// (0x000337d5) vkb2_top_grid_right_pane_g1_ParamLimits

0x6f42,	// (0x000337d5) vkb2_top_grid_right_pane_g1

0x6f58,	// (0x000337eb) vkb2_top_grid_right_pane_g2_ParamLimits

0x6f58,	// (0x000337eb) vkb2_top_grid_right_pane_g2

0x6f70,	// (0x00033803) vkb2_top_grid_right_pane_g3_ParamLimits

0x6f70,	// (0x00033803) vkb2_top_grid_right_pane_g3

0x6f88,	// (0x0003381b) vkb2_top_grid_right_pane_g4_ParamLimits

0x6f88,	// (0x0003381b) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0003c63c) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0003c63c) vkb2_top_grid_right_pane_g

0x6f9e,	// (0x00033831) vkb2_top_cell_left_pane_g1

0x6fb5,	// (0x00033848) vkb2_cell_keypad_pane_g1_ParamLimits

0x6fb5,	// (0x00033848) vkb2_cell_keypad_pane_g1

0xdf7d,	// (0x0003a810) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf7d,	// (0x0003a810) vkb2_cell_keypad_pane_t1

0x6fd9,	// (0x0003386c) vkb2_cell_bottom_grid_pane_ParamLimits

0x6fd9,	// (0x0003386c) vkb2_cell_bottom_grid_pane

0x7012,	// (0x000338a5) vkb2_cell_bottom_grid_pane_g1

0xdb73,	// (0x0003a406) aid_call2_pane_cp02

0xdb7b,	// (0x0003a40e) aid_call_pane_cp02

0xdb83,	// (0x0003a416) clock_digital_number_pane_cp10

0xdb8b,	// (0x0003a41e) clock_digital_number_pane_cp11

0xdb93,	// (0x0003a426) clock_digital_number_pane_cp12

0xdb9b,	// (0x0003a42e) clock_digital_number_pane_cp13

0xdba3,	// (0x0003a436) clock_digital_separator_pane_cp10

0x8500,	// (0x00034d93) popup_clock_digital_analogue_window_cp2_g1

0x8500,	// (0x00034d93) popup_clock_digital_analogue_window_cp2_g2

0xdbab,	// (0x0003a43e) popup_clock_digital_analogue_window_cp2_g3

0x8500,	// (0x00034d93) popup_clock_digital_analogue_window_cp2_g4

0xdbab,	// (0x0003a43e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0003c5f1) popup_clock_digital_analogue_window_cp2_g

0xdbb3,	// (0x0003a446) popup_clock_digital_analogue_window_cp2_t1

0xdbc1,	// (0x0003a454) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0003c5fc) popup_clock_digital_analogue_window_cp2_t

0xc056,	// (0x000388e9) clock_digital_number_pane_cp10_g1

0xc056,	// (0x000388e9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x0003c3d8) clock_digital_number_pane_cp10_g

0xc056,	// (0x000388e9) clock_digital_separator_pane_cp10_g1

0xc056,	// (0x000388e9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x0003c3d8) clock_digital_separator_pane_cp10_g

0xd9ee,	// (0x0003a281) uniindi_top_pane_g3

0xd9ff,	// (0x0003a292) uniindi_top_pane_g4

0x6dd6,	// (0x00033669) vkb2_row_keypad_pane_ParamLimits

0x6dd6,	// (0x00033669) vkb2_row_keypad_pane

0x702e,	// (0x000338c1) vkb2_cell_t_keypad_pane_ParamLimits

0x702e,	// (0x000338c1) vkb2_cell_t_keypad_pane

0x703e,	// (0x000338d1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x703e,	// (0x000338d1) vkb2_cell_t_keypad_pane_cp08

0x7053,	// (0x000338e6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7053,	// (0x000338e6) vkb2_cell_t_keypad_pane_cp09

0x7067,	// (0x000338fa) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7067,	// (0x000338fa) vkb2_cell_t_keypad_pane_cp01

0x7078,	// (0x0003390b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7078,	// (0x0003390b) vkb2_cell_t_keypad_pane_cp02

0x7089,	// (0x0003391c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7089,	// (0x0003391c) vkb2_cell_t_keypad_pane_cp03

0x709a,	// (0x0003392d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x709a,	// (0x0003392d) vkb2_cell_t_keypad_pane_cp04

0x70ab,	// (0x0003393e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x70ab,	// (0x0003393e) vkb2_cell_t_keypad_pane_cp05

0x70bc,	// (0x0003394f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x70bc,	// (0x0003394f) vkb2_cell_t_keypad_pane_cp06

0x70cf,	// (0x00033962) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x70cf,	// (0x00033962) vkb2_cell_t_keypad_pane_cp07

0x70e4,	// (0x00033977) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x70e4,	// (0x00033977) vkb2_cell_t_keypad_pane_cp10

0x6738,	// (0x00032fcb) vkb2_cell_t_keypad_pane_g1

0xdf94,	// (0x0003a827) vkb2_cell_t_keypad_pane_t1

0x4b93,	// (0x00031426) popup_grid_graphic2_window

0xdfa6,	// (0x0003a839) aid_size_cell_graphic2_ParamLimits

0xdfa6,	// (0x0003a839) aid_size_cell_graphic2

0xdfde,	// (0x0003a871) bg_popup_window_pane_cp21_ParamLimits

0xdfde,	// (0x0003a871) bg_popup_window_pane_cp21

0xdfec,	// (0x0003a87f) graphic2_pages_pane_ParamLimits

0xdfec,	// (0x0003a87f) graphic2_pages_pane

0xe032,	// (0x0003a8c5) grid_graphic2_control_pane_ParamLimits

0xe032,	// (0x0003a8c5) grid_graphic2_control_pane

0xe070,	// (0x0003a903) grid_graphic2_pane_ParamLimits

0xe070,	// (0x0003a903) grid_graphic2_pane

0xe0e6,	// (0x0003a979) cell_graphic2_pane

0x326b,	// (0x0002fafe) main_comp_mode_pane

0xd23e,	// (0x00039ad1) list_ai3_gene_pane_ParamLimits

0xd606,	// (0x00039e99) bg_popup_window_pane_cp19_ParamLimits

0xd612,	// (0x00039ea5) bg_touch_area_indi_pane_ParamLimits

0xd612,	// (0x00039ea5) bg_touch_area_indi_pane

0xd628,	// (0x00039ebb) bg_touch_area_indi_pane_cp01_ParamLimits

0xd628,	// (0x00039ebb) bg_touch_area_indi_pane_cp01

0xd640,	// (0x00039ed3) bg_touch_area_indi_pane_cp02_ParamLimits

0xd640,	// (0x00039ed3) bg_touch_area_indi_pane_cp02

0xd65a,	// (0x00039eed) bg_touch_area_indi_pane_cp03_ParamLimits

0xd65a,	// (0x00039eed) bg_touch_area_indi_pane_cp03

0xd674,	// (0x00039f07) popup_slider_window_g1_ParamLimits

0xd690,	// (0x00039f23) popup_slider_window_g2_ParamLimits

0xd6ac,	// (0x00039f3f) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0003c586) popup_slider_window_g_ParamLimits

0xd708,	// (0x00039f9b) popup_slider_window_t1_ParamLimits

0xd77c,	// (0x0003a00f) small_volume_slider_vertical_pane_ParamLimits

0xe0e6,	// (0x0003a979) cell_graphic2_pane_ParamLimits

0xe138,	// (0x0003a9cb) bg_button_pane_cp10_ParamLimits

0xe138,	// (0x0003a9cb) bg_button_pane_cp10

0xe14d,	// (0x0003a9e0) bg_button_pane_cp11_ParamLimits

0xe14d,	// (0x0003a9e0) bg_button_pane_cp11

0xe162,	// (0x0003a9f5) graphic2_pages_pane_g1_ParamLimits

0xe162,	// (0x0003a9f5) graphic2_pages_pane_g1

0xe17d,	// (0x0003aa10) graphic2_pages_pane_g2_ParamLimits

0xe17d,	// (0x0003aa10) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0003c64a) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0003c64a) graphic2_pages_pane_g

0xe195,	// (0x0003aa28) graphic2_pages_pane_t1_ParamLimits

0xe195,	// (0x0003aa28) graphic2_pages_pane_t1

0xe1ab,	// (0x0003aa3e) cell_graphic2_control_pane_ParamLimits

0xe1ab,	// (0x0003aa3e) cell_graphic2_control_pane

0xe1c5,	// (0x0003aa58) cell_graphic2_pane_g1_ParamLimits

0xe1c5,	// (0x0003aa58) cell_graphic2_pane_g1

0xe1d2,	// (0x0003aa65) cell_graphic2_pane_g2_ParamLimits

0xe1d2,	// (0x0003aa65) cell_graphic2_pane_g2

0xe1df,	// (0x0003aa72) cell_graphic2_pane_g3_ParamLimits

0xe1df,	// (0x0003aa72) cell_graphic2_pane_g3

0xe1ec,	// (0x0003aa7f) cell_graphic2_pane_g4_ParamLimits

0xe1ec,	// (0x0003aa7f) cell_graphic2_pane_g4

0xe1f9,	// (0x0003aa8c) cell_graphic2_pane_g5_ParamLimits

0xe1f9,	// (0x0003aa8c) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0003c64f) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0003c64f) cell_graphic2_pane_g

0xe214,	// (0x0003aaa7) cell_graphic2_pane_t1_ParamLimits

0xe214,	// (0x0003aaa7) cell_graphic2_pane_t1

0x9aa2,	// (0x00036335) grid_highlight_pane_cp11_ParamLimits

0x9aa2,	// (0x00036335) grid_highlight_pane_cp11

0x7635,	// (0x00033ec8) bg_button_pane_cp05

0xe23d,	// (0x0003aad0) cell_graphic2_control_pane_g1

0xc056,	// (0x000388e9) bg_touch_area_indi_pane_g1

0xe265,	// (0x0003aaf8) aid_cmod_rocker_key_size

0xe26f,	// (0x0003ab02) aid_cmode_itu_key_size

0xe279,	// (0x0003ab0c) main_cmode_video_pane

0xe283,	// (0x0003ab16) main_comp_mode_itu_pane

0xe28f,	// (0x0003ab22) main_comp_mode_rocker_pane

0xe29b,	// (0x0003ab2e) cell_cmode_rocker_pane_ParamLimits

0xe29b,	// (0x0003ab2e) cell_cmode_rocker_pane

0xe2af,	// (0x0003ab42) cell_cmode_itu_pane_ParamLimits

0xe2af,	// (0x0003ab42) cell_cmode_itu_pane

0x7c32,	// (0x000344c5) bg_button_pane_cp06_ParamLimits

0x7c32,	// (0x000344c5) bg_button_pane_cp06

0xc2e0,	// (0x00038b73) cell_cmode_rocker_pane_g1_ParamLimits

0xc2e0,	// (0x00038b73) cell_cmode_rocker_pane_g1

0xd844,	// (0x0003a0d7) cell_cmode_rocker_pane_g2_ParamLimits

0xd844,	// (0x0003a0d7) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0003c65f) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0003c65f) cell_cmode_rocker_pane_g

0x326b,	// (0x0002fafe) bg_button_pane_cp07

0xe2c6,	// (0x0003ab59) cell_cmode_itu_pane_g1

0xe2cf,	// (0x0003ab62) cell_cmode_itu_pane_t1

0xe2dd,	// (0x0003ab70) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0003c664) cell_cmode_itu_pane_t

0xda72,	// (0x0003a305) aid_touch_ctrl_left

0xda7a,	// (0x0003a30d) aid_touch_ctrl_right

0x326b,	// (0x0002fafe) compa_mode_pane

0xe2eb,	// (0x0003ab7e) aid_cmod_rocker_key_size_cp

0xe2f5,	// (0x0003ab88) aid_cmode_itu_key_size_cp

0xe2ff,	// (0x0003ab92) compa_mode_pane_g1

0xe307,	// (0x0003ab9a) compa_mode_pane_g2

0xe30f,	// (0x0003aba2) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0003c669) compa_mode_pane_g

0xe317,	// (0x0003abaa) main_comp_mode_itu_pane_cp

0xe31f,	// (0x0003abb2) main_comp_mode_rocker_pane_cp

0xe327,	// (0x0003abba) cell_cmode_itu_pane_cp_ParamLimits

0xe327,	// (0x0003abba) cell_cmode_itu_pane_cp

0xe33c,	// (0x0003abcf) cell_cmode_rocker_pane_cp_ParamLimits

0xe33c,	// (0x0003abcf) cell_cmode_rocker_pane_cp

0x7c32,	// (0x000344c5) bg_button_pane_cp06_cp_ParamLimits

0x7c32,	// (0x000344c5) bg_button_pane_cp06_cp

0xc2e0,	// (0x00038b73) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2e0,	// (0x00038b73) cell_cmode_rocker_pane_g1_cp

0xc056,	// (0x000388e9) cell_cmode_rocker_pane_g2_cp

0x326b,	// (0x0002fafe) bg_button_pane_cp07_cp

0xe34e,	// (0x0003abe1) cell_cmode_itu_pane_g1_cp

0xe357,	// (0x0003abea) cell_cmode_itu_pane_t1_cp

0xe357,	// (0x0003abea) cell_cmode_itu_pane_t2_cp

0xaf69,	// (0x000377fc) settings_code_pane_cp2

0x73ab,	// (0x00033c3e) bg_popup_window_pane_cp3_ParamLimits

0x7823,	// (0x000340b6) heading_pane_cp3_ParamLimits

0x782f,	// (0x000340c2) listscroll_popup_graphic_pane_ParamLimits

0x64cb,	// (0x00032d5e) fep_hwr_aid_pane_ParamLimits

0x6aad,	// (0x00033340) aid_touch_sctrl_top_ParamLimits

0x6ac8,	// (0x0003335b) sctrl_sk_top_pane_g1_ParamLimits

0x6738,	// (0x00032fcb) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0003c59f) sctrl_sk_top_pane_g_ParamLimits

0x6ad5,	// (0x00033368) sctrl_sk_top_pane_t1_ParamLimits

0x6aad,	// (0x00033340) aid_touch_sctrl_bottom_ParamLimits

0x6ad5,	// (0x00033368) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9b8,	// (0x0003a24b) aid_area_touch_clock

0x6cc8,	// (0x0003355b) aid_vkb2_area_top_pane_cell_ParamLimits

0x6cc8,	// (0x0003355b) aid_vkb2_area_top_pane_cell

0x6df8,	// (0x0003368b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6df8,	// (0x0003368b) aid_vkb2_area_bottom_pane_cell

0xdf21,	// (0x0003a7b4) popup_char_count_window

0xe365,	// (0x0003abf8) popup_char_count_window_g1

0xe36e,	// (0x0003ac01) popup_char_count_window_g2

0xe377,	// (0x0003ac0a) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0003c670) popup_char_count_window_g

0xe380,	// (0x0003ac13) popup_char_count_window_t1

0x6b82,	// (0x00033415) popup_fep_char_preview_window_ParamLimits

0x6b82,	// (0x00033415) popup_fep_char_preview_window

0x6ce6,	// (0x00033579) vkb2_top_candi_pane_ParamLimits

0x6ce6,	// (0x00033579) vkb2_top_candi_pane

0xe38e,	// (0x0003ac21) cell_vkb2_top_candi_pane_ParamLimits

0xe38e,	// (0x0003ac21) cell_vkb2_top_candi_pane

0x70f9,	// (0x0003398c) bg_popup_fep_char_preview_window_ParamLimits

0x70f9,	// (0x0003398c) bg_popup_fep_char_preview_window

0x7107,	// (0x0003399a) popup_fep_char_preview_window_t1_ParamLimits

0x7107,	// (0x0003399a) popup_fep_char_preview_window_t1

0xe3df,	// (0x0003ac72) bg_popup_fep_char_preview_window_g1

0xe3e7,	// (0x0003ac7a) bg_popup_fep_char_preview_window_g2

0xe3ef,	// (0x0003ac82) bg_popup_fep_char_preview_window_g3

0xe3f7,	// (0x0003ac8a) bg_popup_fep_char_preview_window_g4

0xe3ff,	// (0x0003ac92) bg_popup_fep_char_preview_window_g5

0x7141,	// (0x000339d4) bg_popup_fep_char_preview_window_g6

0xe407,	// (0x0003ac9a) bg_popup_fep_char_preview_window_g7

0xe40f,	// (0x0003aca2) bg_popup_fep_char_preview_window_g8

0xe417,	// (0x0003acaa) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0003c677) bg_popup_fep_char_preview_window_g

0x6738,	// (0x00032fcb) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6738,	// (0x00032fcb) cell_vkb2_top_candi_pane_g1

0x6746,	// (0x00032fd9) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6746,	// (0x00032fd9) cell_vkb2_top_candi_pane_g2

0xd798,	// (0x0003a02b) cell_vkb2_top_candi_pane_g3_ParamLimits

0xd798,	// (0x0003a02b) cell_vkb2_top_candi_pane_g3

0x7149,	// (0x000339dc) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7149,	// (0x000339dc) cell_vkb2_top_candi_pane_g4

0xc7df,	// (0x00039072) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc7df,	// (0x00039072) cell_vkb2_top_candi_pane_g5

0x716a,	// (0x000339fd) cell_vkb2_top_candi_pane_g6_ParamLimits

0x716a,	// (0x000339fd) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0003c68a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0003c68a) cell_vkb2_top_candi_pane_g

0x7178,	// (0x00033a0b) cell_vkb2_top_candi_pane_t1

0x6007,	// (0x0003289a) aid_size_touch_slider_mark_ParamLimits

0x6007,	// (0x0003289a) aid_size_touch_slider_mark

0xe022,	// (0x0003a8b5) grid_graphic2_catg_pane_ParamLimits

0xe022,	// (0x0003a8b5) grid_graphic2_catg_pane

0xe0c0,	// (0x0003a953) popup_grid_graphic2_window_t1_ParamLimits

0xe0c0,	// (0x0003a953) popup_grid_graphic2_window_t1

0xe0d2,	// (0x0003a965) popup_grid_graphic2_window_t2_ParamLimits

0xe0d2,	// (0x0003a965) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0003c645) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0003c645) popup_grid_graphic2_window_t

0x7635,	// (0x00033ec8) bg_button_pane_cp05_ParamLimits

0xe23d,	// (0x0003aad0) cell_graphic2_control_pane_g1_ParamLimits

0xe41f,	// (0x0003acb2) cell_graphic2_catg_pane_ParamLimits

0xe41f,	// (0x0003acb2) cell_graphic2_catg_pane

0x326b,	// (0x0002fafe) bg_button_pane_cp12

0xe431,	// (0x0003acc4) cell_graphic2_catg_pane_g1

0xd984,	// (0x0003a217) cell_tb_ext_pane_t1_ParamLimits

0x6f15,	// (0x000337a8) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6f15,	// (0x000337a8) vkb2_top_cell_right_narrow_pane

0x6f2d,	// (0x000337c0) vkb2_top_cell_right_wide_pane_ParamLimits

0x6f2d,	// (0x000337c0) vkb2_top_cell_right_wide_pane

0x64bd,	// (0x00032d50) bg_vkb2_func_pane_ParamLimits

0x64bd,	// (0x00032d50) bg_vkb2_func_pane

0x6f9e,	// (0x00033831) vkb2_top_cell_left_pane_g1_ParamLimits

0x64bd,	// (0x00032d50) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64bd,	// (0x00032d50) bg_vkb2_fuc_pane_cp03

0x7012,	// (0x000338a5) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99b8,	// (0x0003624b) bg_vkb2_func_pane_g1

0x99c0,	// (0x00036253) bg_vkb2_func_pane_g2

0x99d0,	// (0x00036263) bg_vkb2_func_pane_g3

0x99c8,	// (0x0003625b) bg_vkb2_func_pane_g4

0x99d8,	// (0x0003626b) bg_vkb2_func_pane_g5

0x99e0,	// (0x00036273) bg_vkb2_func_pane_g6

0x99e8,	// (0x0003627b) bg_vkb2_func_pane_g7

0x99f0,	// (0x00036283) bg_vkb2_func_pane_g8

0x99b0,	// (0x00036243) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0003c697) bg_vkb2_func_pane_g

0x64bd,	// (0x00032d50) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64bd,	// (0x00032d50) bg_vkb2_fuc_pane_cp01

0x6f9e,	// (0x00033831) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6f9e,	// (0x00033831) vkb2_top_cell_right_wide_pane_g1

0x64bd,	// (0x00032d50) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64bd,	// (0x00032d50) bg_vkb2_fuc_pane_cp02

0x7012,	// (0x000338a5) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7012,	// (0x000338a5) vkb2_top_cell_right_narrow_pane_g1

0xd584,	// (0x00039e17) aid_touch_area_decrease_ParamLimits

0xd584,	// (0x00039e17) aid_touch_area_decrease

0xd5a8,	// (0x00039e3b) aid_touch_area_increase_ParamLimits

0xd5a8,	// (0x00039e3b) aid_touch_area_increase

0xd5b4,	// (0x00039e47) aid_touch_area_mute_ParamLimits

0xd5b4,	// (0x00039e47) aid_touch_area_mute

0xd5d8,	// (0x00039e6b) aid_touch_area_slider_ParamLimits

0xd5d8,	// (0x00039e6b) aid_touch_area_slider

0xd6c8,	// (0x00039f5b) popup_slider_window_g4_ParamLimits

0xd6c8,	// (0x00039f5b) popup_slider_window_g4

0xd6d4,	// (0x00039f67) popup_slider_window_g5_ParamLimits

0xd6d4,	// (0x00039f67) popup_slider_window_g5

0xd6f6,	// (0x00039f89) popup_slider_window_g6_ParamLimits

0xd6f6,	// (0x00039f89) popup_slider_window_g6

0xd736,	// (0x00039fc9) popup_slider_window_t2_ParamLimits

0xd736,	// (0x00039fc9) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0003c593) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0003c593) popup_slider_window_t

0xd74e,	// (0x00039fe1) slider_pane_ParamLimits

0xd74e,	// (0x00039fe1) slider_pane

0xe43a,	// (0x0003accd) slider_pane_g1_ParamLimits

0xe43a,	// (0x0003accd) slider_pane_g1

0xe44e,	// (0x0003ace1) slider_pane_g2_ParamLimits

0xe44e,	// (0x0003ace1) slider_pane_g2

0xe464,	// (0x0003acf7) slider_pane_g3_ParamLimits

0xe464,	// (0x0003acf7) slider_pane_g3

0x0003,

0xfe17,	// (0x0003c6aa) slider_pane_g_ParamLimits

0xfe17,	// (0x0003c6aa) slider_pane_g

0x93aa,	// (0x00035c3d) popup_tb_float_extension_window_ParamLimits

0x93aa,	// (0x00035c3d) popup_tb_float_extension_window

0xe490,	// (0x0003ad23) aid_size_cell_tb_float_ext

0x326b,	// (0x0002fafe) bg_popup_sub_window_cp28

0xe49c,	// (0x0003ad2f) grid_tb_float_ext_pane

0xe4a8,	// (0x0003ad3b) cell_tb_float_ext_pane_ParamLimits

0xe4a8,	// (0x0003ad3b) cell_tb_float_ext_pane

0xe4c4,	// (0x0003ad57) cell_tb_float_ext_pane_g1

0xe4cd,	// (0x0003ad60) grid_highlight_pane_cp12

0x6612,	// (0x00032ea5) cell_last_hwr_side_pane_ParamLimits

0x6612,	// (0x00032ea5) cell_last_hwr_side_pane

0xc056,	// (0x000388e9) cell_last_hwr_side_pane_g1

0xe4d6,	// (0x0003ad69) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0003c6b3) cell_last_hwr_side_pane_g

0x6ec4,	// (0x00033757) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6ec4,	// (0x00033757) vkb2_area_bottom_space_btn_pane

0x6738,	// (0x00032fcb) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf94,	// (0x0003a827) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7178,	// (0x00033a0b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7196,	// (0x00033a29) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7196,	// (0x00033a29) vkb2_area_bottom_space_btn_pane_g1

0x71d0,	// (0x00033a63) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x71d0,	// (0x00033a63) vkb2_area_bottom_space_btn_pane_g2

0x7206,	// (0x00033a99) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7206,	// (0x00033a99) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0003c6b8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0003c6b8) vkb2_area_bottom_space_btn_pane_g

0x6582,	// (0x00032e15) cel_fep_hwr_func_pane_ParamLimits

0x6582,	// (0x00032e15) cel_fep_hwr_func_pane

0x65be,	// (0x00032e51) cell_hwr_side_button_pane_ParamLimits

0x65be,	// (0x00032e51) cell_hwr_side_button_pane

0xd9b8,	// (0x0003a24b) aid_area_touch_clock_ParamLimits

0x7635,	// (0x00033ec8) bg_uniindi_top_pane_ParamLimits

0xd9cc,	// (0x0003a25f) uniindi_top_pane_g1_ParamLimits

0xd9e2,	// (0x0003a275) uniindi_top_pane_g2_ParamLimits

0xd9ee,	// (0x0003a281) uniindi_top_pane_g3_ParamLimits

0xd9ff,	// (0x0003a292) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0003c5cb) uniindi_top_pane_g_ParamLimits

0xda0c,	// (0x0003a29f) uniindi_top_pane_t1_ParamLimits

0x7635,	// (0x00033ec8) bg_vkb2_func_pane_cp01_ParamLimits

0x7635,	// (0x00033ec8) bg_vkb2_func_pane_cp01

0xe4df,	// (0x0003ad72) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4df,	// (0x0003ad72) cel_fep_hwr_func_pane_g1

0x7635,	// (0x00033ec8) bg_vkb2_func_pane_cp02_ParamLimits

0x7635,	// (0x00033ec8) bg_vkb2_func_pane_cp02

0xe4df,	// (0x0003ad72) cell_hwr_side_button_pane_g1_ParamLimits

0xe4df,	// (0x0003ad72) cell_hwr_side_button_pane_g1

0x9831,	// (0x000360c4) status_pane_g4_ParamLimits

0x9831,	// (0x000360c4) status_pane_g4

0x984b,	// (0x000360de) status_pane_t1

0xbdf2,	// (0x00038685) form2_midp_gauge_slider_cont_pane

0xbdfa,	// (0x0003868d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe0c,	// (0x0003869f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe1e,	// (0x000386b1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x0003c38b) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe30,	// (0x000386c3) form2_midp_slider_pane_ParamLimits

0x6b4a,	// (0x000333dd) aid_size_cell_func_vkb2_ParamLimits

0x6b4a,	// (0x000333dd) aid_size_cell_func_vkb2

0xe47c,	// (0x0003ad0f) slider_pane_g4_ParamLimits

0xe47c,	// (0x0003ad0f) slider_pane_g4

0x7250,	// (0x00033ae3) form2_midp_gauge_slider_pane_t2_cp01

0x725e,	// (0x00033af1) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x725e,	// (0x00033af1) form2_midp_gauge_slider_pane_t3_cp01

0x727b,	// (0x00033b0e) form2_midp_slider_pane_cp01

0x326b,	// (0x0002fafe) navi_smil_pane

0xe518,	// (0x0003adab) navi_smil_pane_g1

0xe520,	// (0x0003adb3) navi_smil_pane_t1

0xe4ed,	// (0x0003ad80) form2_midp_slider_pane_g1

0xe4f6,	// (0x0003ad89) form2_midp_slider_pane_g2

0xe4fe,	// (0x0003ad91) form2_midp_slider_pane_g3

0xe4ed,	// (0x0003ad80) form2_midp_slider_pane_g4

0xe506,	// (0x0003ad99) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0003c6c1) form2_midp_slider_pane_g

0x7240,	// (0x00033ad3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7240,	// (0x00033ad3) vkb2_area_bottom_space_btn_pane_g4

0x9649,	// (0x00035edc) lc0_navi_pane_ParamLimits

0x9649,	// (0x00035edc) lc0_navi_pane

0x96c5,	// (0x00035f58) lc0_stat_indi_pane_ParamLimits

0x96c5,	// (0x00035f58) lc0_stat_indi_pane

0x96dc,	// (0x00035f6f) ls0_title_pane_ParamLimits

0x96dc,	// (0x00035f6f) ls0_title_pane

0x7c32,	// (0x000344c5) bg_popup_sub_pane_cp14_ParamLimits

0xd99f,	// (0x0003a232) list_uniindi_pane_ParamLimits

0xd9ab,	// (0x0003a23e) uniindi_top_pane_ParamLimits

0xda4a,	// (0x0003a2dd) list_single_uniindi_pane_g1_ParamLimits

0xda5d,	// (0x0003a2f0) list_single_uniindi_pane_t1_ParamLimits

0x7284,	// (0x00033b17) lc0_stat_clock_pane_ParamLimits

0x7284,	// (0x00033b17) lc0_stat_clock_pane

0xe52e,	// (0x0003adc1) lc0_stat_indi_pane_g1_ParamLimits

0xe52e,	// (0x0003adc1) lc0_stat_indi_pane_g1

0xe53b,	// (0x0003adce) lc0_stat_indi_pane_g2_ParamLimits

0xe53b,	// (0x0003adce) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0003c6cc) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0003c6cc) lc0_stat_indi_pane_g

0x7291,	// (0x00033b24) lc0_uni_indicator_pane_ParamLimits

0x7291,	// (0x00033b24) lc0_uni_indicator_pane

0xe548,	// (0x0003addb) ls0_title_pane_g1_ParamLimits

0xe548,	// (0x0003addb) ls0_title_pane_g1

0xe55c,	// (0x0003adef) ls0_title_pane_t1_ParamLimits

0xe55c,	// (0x0003adef) ls0_title_pane_t1

0x729e,	// (0x00033b31) lc0_uni_indicator_pane_g1_ParamLimits

0x729e,	// (0x00033b31) lc0_uni_indicator_pane_g1

0xe592,	// (0x0003ae25) lc0_stat_clock_pane_t1

0x326b,	// (0x0002fafe) main_ai5_pane

0xe5a0,	// (0x0003ae33) ai5_sk_pane_ParamLimits

0xe5a0,	// (0x0003ae33) ai5_sk_pane

0xe5ad,	// (0x0003ae40) cell_ai5_widget_pane_ParamLimits

0xe5ad,	// (0x0003ae40) cell_ai5_widget_pane

0xe623,	// (0x0003aeb6) aid_size_cell_widget_grid

0xe637,	// (0x0003aeca) bg_ai5_widget_pane_ParamLimits

0xe637,	// (0x0003aeca) bg_ai5_widget_pane

0xe65f,	// (0x0003aef2) cell_ai5_widget_pane_g2

0xe66f,	// (0x0003af02) cell_ai5_widget_pane_g3

0xe68e,	// (0x0003af21) cell_ai5_widget_pane_g4

0xe69a,	// (0x0003af2d) cell_ai5_widget_pane_g5

0xe6a6,	// (0x0003af39) cell_ai5_widget_pane_g6

0xe6b4,	// (0x0003af47) cell_ai5_widget_pane_g7

0xe6fc,	// (0x0003af8f) cell_ai5_widget_pane_t1_ParamLimits

0xe6fc,	// (0x0003af8f) cell_ai5_widget_pane_t1

0xe719,	// (0x0003afac) cell_ai5_widget_pane_t2_ParamLimits

0xe719,	// (0x0003afac) cell_ai5_widget_pane_t2

0xe731,	// (0x0003afc4) cell_ai5_widget_pane_t3_ParamLimits

0xe731,	// (0x0003afc4) cell_ai5_widget_pane_t3

0xe749,	// (0x0003afdc) cell_ai5_widget_pane_t4_ParamLimits

0xe749,	// (0x0003afdc) cell_ai5_widget_pane_t4

0xe763,	// (0x0003aff6) cell_ai5_widget_pane_t5_ParamLimits

0xe763,	// (0x0003aff6) cell_ai5_widget_pane_t5

0xe782,	// (0x0003b015) cell_ai5_widget_pane_t6_ParamLimits

0xe782,	// (0x0003b015) cell_ai5_widget_pane_t6

0xe794,	// (0x0003b027) cell_ai5_widget_pane_t7_ParamLimits

0xe794,	// (0x0003b027) cell_ai5_widget_pane_t7

0xe7ad,	// (0x0003b040) cell_ai5_widget_pane_t8_ParamLimits

0xe7ad,	// (0x0003b040) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0003c6e6) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0003c6e6) cell_ai5_widget_pane_t

0xe7f9,	// (0x0003b08c) grid_ai5_widget_pane

0x7c32,	// (0x000344c5) highlight_cell_ai5_widget_pane_ParamLimits

0x7c32,	// (0x000344c5) highlight_cell_ai5_widget_pane

0xe810,	// (0x0003b0a3) ai5_sk_left_pane

0xe81a,	// (0x0003b0ad) ai5_sk_middle_pane

0xe824,	// (0x0003b0b7) ai5_sk_right_pane

0xe82e,	// (0x0003b0c1) bg_ai5_widget_pane_g1_ParamLimits

0xe82e,	// (0x0003b0c1) bg_ai5_widget_pane_g1

0xe83a,	// (0x0003b0cd) bg_ai5_widget_pane_g2_ParamLimits

0xe83a,	// (0x0003b0cd) bg_ai5_widget_pane_g2

0xe846,	// (0x0003b0d9) bg_ai5_widget_pane_g3_ParamLimits

0xe846,	// (0x0003b0d9) bg_ai5_widget_pane_g3

0xe852,	// (0x0003b0e5) bg_ai5_widget_pane_g4_ParamLimits

0xe852,	// (0x0003b0e5) bg_ai5_widget_pane_g4

0xe85e,	// (0x0003b0f1) bg_ai5_widget_pane_g5_ParamLimits

0xe85e,	// (0x0003b0f1) bg_ai5_widget_pane_g5

0xe86a,	// (0x0003b0fd) bg_ai5_widget_pane_g6_ParamLimits

0xe86a,	// (0x0003b0fd) bg_ai5_widget_pane_g6

0xe876,	// (0x0003b109) bg_ai5_widget_pane_g7_ParamLimits

0xe876,	// (0x0003b109) bg_ai5_widget_pane_g7

0xe882,	// (0x0003b115) bg_ai5_widget_pane_g8_ParamLimits

0xe882,	// (0x0003b115) bg_ai5_widget_pane_g8

0xe88e,	// (0x0003b121) bg_ai5_widget_pane_g9_ParamLimits

0xe88e,	// (0x0003b121) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0003c6fb) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0003c6fb) bg_ai5_widget_pane_g

0xe8b5,	// (0x0003b148) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8b5,	// (0x0003b148) cell_shortcut_ai5_widget_pane

0x7477,	// (0x00033d0a) bg_cell_shortcut_ai5_widget_pane

0xe8c7,	// (0x0003b15a) cell_grid_ai5_widget_pane_g1

0xe8d0,	// (0x0003b163) highlight_cell_shortcut_ai5_widget_pane

0x99b8,	// (0x0003624b) ai5_sk_left_pane_g1

0xe8d8,	// (0x0003b16b) ai5_sk_left_pane_g2

0xe8e0,	// (0x0003b173) ai5_sk_left_pane_g3

0xe8e8,	// (0x0003b17b) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0003c70e) ai5_sk_left_pane_g

0xe8f0,	// (0x0003b183) ai5_sk_left_pane_t1

0x99c0,	// (0x00036253) ai5_sk_right_pane_g1

0xe8fe,	// (0x0003b191) ai5_sk_right_pane_g2

0xe906,	// (0x0003b199) ai5_sk_right_pane_g3

0xe90e,	// (0x0003b1a1) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0003c717) ai5_sk_right_pane_g

0xe916,	// (0x0003b1a9) ai5_sk_right_pane_t1

0x99c0,	// (0x00036253) ai5_sk_middle_pane_g1

0x99b8,	// (0x0003624b) ai5_sk_middle_pane_g2

0x99d8,	// (0x0003626b) ai5_sk_middle_pane_g3

0xe906,	// (0x0003b199) ai5_sk_middle_pane_g4

0xe8e0,	// (0x0003b173) ai5_sk_middle_pane_g5

0xe924,	// (0x0003b1b7) ai5_sk_middle_pane_g6

0xe92c,	// (0x0003b1bf) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0003c720) ai5_sk_middle_pane_g

0x94cb,	// (0x00035d5e) aid_touch_area_size_lc0_ParamLimits

0x94cb,	// (0x00035d5e) aid_touch_area_size_lc0

0x6767,	// (0x00032ffa) cell_hwr_candidate_pane_t1_ParamLimits

0x94e9,	// (0x00035d7c) aid_touch_navi_pane

0x97db,	// (0x0003606e) status_dt_navi_pane_ParamLimits

0x97db,	// (0x0003606e) status_dt_navi_pane

0x97e8,	// (0x0003607b) status_dt_sta_pane_ParamLimits

0x97e8,	// (0x0003607b) status_dt_sta_pane

0xe934,	// (0x0003b1c7) dt_sta_controll_pane

0xe941,	// (0x0003b1d4) dt_sta_indi_pane

0xe952,	// (0x0003b1e5) dt_sta_title_pane

0x7635,	// (0x00033ec8) bg_dt_sta_indi_pane_ParamLimits

0x7635,	// (0x00033ec8) bg_dt_sta_indi_pane

0xe965,	// (0x0003b1f8) dt_sta_battery_pane

0xe96d,	// (0x0003b200) dt_sta_indi_pane_g1

0xe976,	// (0x0003b209) dt_sta_indi_pane_g2

0xe97f,	// (0x0003b212) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0003c72f) dt_sta_indi_pane_g

0xe988,	// (0x0003b21b) dt_sta_signal_pane

0x7c32,	// (0x000344c5) bg_dt_sta_title_pane_ParamLimits

0x7c32,	// (0x000344c5) bg_dt_sta_title_pane

0xe991,	// (0x0003b224) dt_sta_title_pane_g1

0xe999,	// (0x0003b22c) dt_sta_title_pane_t1_ParamLimits

0xe999,	// (0x0003b22c) dt_sta_title_pane_t1

0x326b,	// (0x0002fafe) bg_dt_sta_control_pane

0xe9ae,	// (0x0003b241) dt_sta_controll_pane_g1

0xe9b7,	// (0x0003b24a) bg_dt_sta_title_pane_g1

0xe9c0,	// (0x0003b253) bg_dt_sta_title_pane_g2

0xe9c9,	// (0x0003b25c) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0003c736) bg_dt_sta_title_pane_g

0xc056,	// (0x000388e9) bg_dt_sta_indi_pane_g1

0xe9d2,	// (0x0003b265) dt_sta_signal_pane_g1

0xe9da,	// (0x0003b26d) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0003c73d) dt_sta_signal_pane_g

0xe9e2,	// (0x0003b275) dt_sta_battery_pane_g1

0xe9eb,	// (0x0003b27e) dt_sta_battery_pane_t1

0xc056,	// (0x000388e9) bg_dt_sta_control_pane_g1

0x85ec,	// (0x00034e7f) fep_china_uni_eep_pane

0x85f4,	// (0x00034e87) fep_china_uni_entry_pane_ParamLimits

0x8604,	// (0x00034e97) popup_fep_china_uni_window_g1_ParamLimits

0x8614,	// (0x00034ea7) popup_fep_china_uni_window_g2_ParamLimits

0x8614,	// (0x00034ea7) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x0003bfc8) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x0003bfc8) popup_fep_china_uni_window_g

0xe9fa,	// (0x0003b28d) fep_china_uni_eep_pane_g1

0xea02,	// (0x0003b295) fep_china_uni_eep_pane_t1

0xe50f,	// (0x0003ada2) aid_touch_area_size_smil_player

0x9641,	// (0x00035ed4) lc0_clock_pane

0x983f,	// (0x000360d2) status_pane_g5_ParamLimits

0x983f,	// (0x000360d2) status_pane_g5

0x902f,	// (0x000358c2) popup_keymap_window

0x97fd,	// (0x00036090) status_icon_pane

0xe66f,	// (0x0003af02) cell_ai5_widget_pane_g3_ParamLimits

0xe68e,	// (0x0003af21) cell_ai5_widget_pane_g4_ParamLimits

0xe69a,	// (0x0003af2d) cell_ai5_widget_pane_g5_ParamLimits

0xe6c0,	// (0x0003af53) cell_ai5_widget_pane_g8_ParamLimits

0xe6c0,	// (0x0003af53) cell_ai5_widget_pane_g8

0xe6d4,	// (0x0003af67) cell_ai5_widget_pane_g9_ParamLimits

0xe6d4,	// (0x0003af67) cell_ai5_widget_pane_g9

0xe6e8,	// (0x0003af7b) cell_ai5_widget_pane_g10_ParamLimits

0xe6e8,	// (0x0003af7b) cell_ai5_widget_pane_g10

0xea11,	// (0x0003b2a4) status_icon_pane_g1

0x326b,	// (0x0002fafe) bg_popup_sub_pane_cp13

0xea19,	// (0x0003b2ac) popup_keymap_window_t1

0x8dc9,	// (0x0003565c) control_pane_g6_ParamLimits

0x8dc9,	// (0x0003565c) control_pane_g6

0x8dd6,	// (0x00035669) control_pane_g7_ParamLimits

0x8dd6,	// (0x00035669) control_pane_g7

0x8de3,	// (0x00035676) control_pane_g8_ParamLimits

0x8de3,	// (0x00035676) control_pane_g8

0xe934,	// (0x0003b1c7) dt_sta_controll_pane_ParamLimits

0xe941,	// (0x0003b1d4) dt_sta_indi_pane_ParamLimits

0xe952,	// (0x0003b1e5) dt_sta_title_pane_ParamLimits

0x7b6a,	// (0x000343fd) aid_size_touch_scroll_bar_cale

0x4c70,	// (0x00031503) popup_discreet_window_ParamLimits

0x4c70,	// (0x00031503) popup_discreet_window

0x4cfe,	// (0x00031591) popup_sk_window

0xa056,	// (0x000368e9) bg_popup_sub_pane_cp28_ParamLimits

0xa056,	// (0x000368e9) bg_popup_sub_pane_cp28

0xea27,	// (0x0003b2ba) popup_discreet_window_g1_ParamLimits

0xea27,	// (0x0003b2ba) popup_discreet_window_g1

0xea47,	// (0x0003b2da) popup_discreet_window_t1_ParamLimits

0xea47,	// (0x0003b2da) popup_discreet_window_t1

0xea65,	// (0x0003b2f8) popup_discreet_window_t2_ParamLimits

0xea65,	// (0x0003b2f8) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0003c742) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0003c742) popup_discreet_window_t

0x72b1,	// (0x00033b44) popup_sk_window_g1

0x72bb,	// (0x00033b4e) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0003c749) popup_sk_window_g

0xeab7,	// (0x0003b34a) popup_sk_window_t1

0xeac5,	// (0x0003b358) popup_sk_window_t1_copy1

0xe65f,	// (0x0003aef2) cell_ai5_widget_pane_g2_ParamLimits

0xe7bf,	// (0x0003b052) cell_ai5_widget_pane_t9_ParamLimits

0xe7bf,	// (0x0003b052) cell_ai5_widget_pane_t9

0x326b,	// (0x0002fafe) main_fep_fshwr2_pane

0xead3,	// (0x0003b366) aid_fshwr2_btn_pane

0xeadb,	// (0x0003b36e) aid_fshwr2_syb_pane

0xeae3,	// (0x0003b376) aid_fshwr2_txt_pane

0xeaeb,	// (0x0003b37e) fshwr2_func_candi_pane

0xeaf5,	// (0x0003b388) fshwr2_hwr_syb_pane

0xeaff,	// (0x0003b392) fshwr2_icf_pane

0x326b,	// (0x0002fafe) fshwr2_icf_bg_pane

0xeb21,	// (0x0003b3b4) fshwr2_icf_pane_t1_ParamLimits

0xeb21,	// (0x0003b3b4) fshwr2_icf_pane_t1

0xc056,	// (0x000388e9) fshwr2_func_candi_pane_g1

0xeb38,	// (0x0003b3cb) fshwr2_func_candi_row_pane_ParamLimits

0xeb38,	// (0x0003b3cb) fshwr2_func_candi_row_pane

0xeb49,	// (0x0003b3dc) cell_fshwr2_syb_pane_ParamLimits

0xeb49,	// (0x0003b3dc) cell_fshwr2_syb_pane

0xc2e0,	// (0x00038b73) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc2e0,	// (0x00038b73) fshwr2_hwr_syb_pane_g1

0x326b,	// (0x0002fafe) bg_popup_call_pane_cp01

0xeb63,	// (0x0003b3f6) fshwr2_func_candi_cell_pane_ParamLimits

0xeb63,	// (0x0003b3f6) fshwr2_func_candi_cell_pane

0xeb95,	// (0x0003b428) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeb95,	// (0x0003b428) fshwr2_func_candi_cell_bg_pane

0xebaf,	// (0x0003b442) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebaf,	// (0x0003b442) fshwr2_func_candi_cell_pane_g1

0xebcf,	// (0x0003b462) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebcf,	// (0x0003b462) fshwr2_func_candi_cell_pane_t1

0x326b,	// (0x0002fafe) bg_button_pane_cp08

0x8aee,	// (0x00035381) cell_fshwr2_syb_bg_pane

0xebe2,	// (0x0003b475) cell_fshwr2_syb_bg_pane_g1

0xebea,	// (0x0003b47d) cell_fshwr2_syb_bg_pane_t1

0x7c32,	// (0x000344c5) main_tmo_pane

0xab80,	// (0x00037413) uni_indicator_pane_g1_ParamLimits

0xab95,	// (0x00037428) uni_indicator_pane_g2_ParamLimits

0xabab,	// (0x0003743e) uni_indicator_pane_g3_ParamLimits

0xabc1,	// (0x00037454) uni_indicator_pane_g4_ParamLimits

0xabc1,	// (0x00037454) uni_indicator_pane_g4

0xabd5,	// (0x00037468) uni_indicator_pane_g5_ParamLimits

0xabd5,	// (0x00037468) uni_indicator_pane_g5

0xabe9,	// (0x0003747c) uni_indicator_pane_g6_ParamLimits

0xabe9,	// (0x0003747c) uni_indicator_pane_g6

0xf932,	// (0x0003c1c5) uni_indicator_pane_g_ParamLimits

0xd554,	// (0x00039de7) popup_tmo_note_window_ParamLimits

0xd554,	// (0x00039de7) popup_tmo_note_window

0x326b,	// (0x0002fafe) fshwr2_bg_pane

0xebc0,	// (0x0003b453) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebc0,	// (0x0003b453) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0003c74e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0003c74e) fshwr2_func_candi_cell_pane_g

0xc056,	// (0x000388e9) bg_popup_window_pane_cp01

0xebf9,	// (0x0003b48c) bg_popup_window_pane_g1_cp01

0xec02,	// (0x0003b495) bg_popup_window_pane_cp22_ParamLimits

0xec02,	// (0x0003b495) bg_popup_window_pane_cp22

0xec10,	// (0x0003b4a3) listscroll_tmo_link_pane_ParamLimits

0xec10,	// (0x0003b4a3) listscroll_tmo_link_pane

0xec50,	// (0x0003b4e3) popup_tmo_note_window_g1_ParamLimits

0xec50,	// (0x0003b4e3) popup_tmo_note_window_g1

0xec5d,	// (0x0003b4f0) tmo_note_info_pane_ParamLimits

0xec5d,	// (0x0003b4f0) tmo_note_info_pane

0xec77,	// (0x0003b50a) list_tmo_note_info_pane_g1_ParamLimits

0xec77,	// (0x0003b50a) list_tmo_note_info_pane_g1

0xec8e,	// (0x0003b521) list_tmo_note_info_pane_g2_ParamLimits

0xec8e,	// (0x0003b521) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0003c753) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0003c753) list_tmo_note_info_pane_g

0xecaa,	// (0x0003b53d) list_tmo_note_info_text_pane_ParamLimits

0xecaa,	// (0x0003b53d) list_tmo_note_info_text_pane

0xed2f,	// (0x0003b5c2) list_tmo_link_pane

0xed3c,	// (0x0003b5cf) scroll_pane_cp20

0xed49,	// (0x0003b5dc) list_single_tmo_link_pane_ParamLimits

0xed49,	// (0x0003b5dc) list_single_tmo_link_pane

0xed59,	// (0x0003b5ec) list_single_tmo_link_pane_t1

0xed67,	// (0x0003b5fa) list_tmo_note_info_text_pane_t1_ParamLimits

0xed67,	// (0x0003b5fa) list_tmo_note_info_text_pane_t1

0x7cf8,	// (0x0003458b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7cf8,	// (0x0003458b) aid_size_touch_scroll_bar_cp01

0x547f,	// (0x00031d12) aid_size_touch_slider_marker

0x4ce6,	// (0x00031579) popup_settings_window_ParamLimits

0x4ce6,	// (0x00031579) popup_settings_window

0x5c10,	// (0x000324a3) popup_candi_list_indi_window

0x94e9,	// (0x00035d7c) aid_touch_navi_pane_ParamLimits

0x6a81,	// (0x00033314) rs_clock_indi_pane

0x6a8a,	// (0x0003331d) sctrl_sk_bottom_pane_ParamLimits

0x6a9b,	// (0x0003332e) sctrl_sk_top_pane_ParamLimits

0x6b9c,	// (0x0003342f) popup_fep_tooltip_window

0xe623,	// (0x0003aeb6) aid_size_cell_widget_grid_ParamLimits

0xe653,	// (0x0003aee6) cell_ai5_widget_pane_g1_ParamLimits

0xe653,	// (0x0003aee6) cell_ai5_widget_pane_g1

0xe6a6,	// (0x0003af39) cell_ai5_widget_pane_g6_ParamLimits

0xe6b4,	// (0x0003af47) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0003c6d1) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0003c6d1) cell_ai5_widget_pane_g

0xe7e3,	// (0x0003b076) cell_ai5_widget_pane_t10_ParamLimits

0xe7e3,	// (0x0003b076) cell_ai5_widget_pane_t10

0xe7f9,	// (0x0003b08c) grid_ai5_widget_pane_ParamLimits

0xe89a,	// (0x0003b12d) cell_contacts_ai5_widget_pane_ParamLimits

0xe89a,	// (0x0003b12d) cell_contacts_ai5_widget_pane

0xea7a,	// (0x0003b30d) popup_discreet_window_t3_ParamLimits

0xea7a,	// (0x0003b30d) popup_discreet_window_t3

0xeb09,	// (0x0003b39c) popup_fshwr2_char_preview_window_ParamLimits

0xeb09,	// (0x0003b39c) popup_fshwr2_char_preview_window

0xecc8,	// (0x0003b55b) tmo_note_info_pane_t1

0xecdd,	// (0x0003b570) tmo_note_info_pane_t2

0xecf6,	// (0x0003b589) tmo_note_info_pane_t3

0xed0b,	// (0x0003b59e) tmo_note_info_pane_t4

0xed1d,	// (0x0003b5b0) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0003c758) tmo_note_info_pane_t

0xed2f,	// (0x0003b5c2) list_tmo_link_pane_ParamLimits

0xed3c,	// (0x0003b5cf) scroll_pane_cp20_ParamLimits

0x326b,	// (0x0002fafe) bg_popup_fep_char_preview_window_cp01

0xed80,	// (0x0003b613) popup_fshwr2_char_preview_window_t1

0xed8e,	// (0x0003b621) popup_candi_list_indi_window_g1

0xed97,	// (0x0003b62a) bg_cell_contacts_ai5_widget_pane

0xeda3,	// (0x0003b636) cell_contacts_ai5_widget_pane_g1

0xedb7,	// (0x0003b64a) cell_contacts_ai5_widget_pane_g2

0xedc6,	// (0x0003b659) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0003c763) cell_contacts_ai5_widget_pane_g

0xedd9,	// (0x0003b66c) cell_contacts_ai5_widget_pane_t1

0x7c32,	// (0x000344c5) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee53,	// (0x0003b6e6) settings_container_pane

0x8aee,	// (0x00035381) listscroll_set_pane_copy1

0xb75a,	// (0x00037fed) scroll_pane_cp121_copy1

0xee5f,	// (0x0003b6f2) set_content_pane_copy1

0xee67,	// (0x0003b6fa) aid_height_set_list_copy1_ParamLimits

0xee67,	// (0x0003b6fa) aid_height_set_list_copy1

0xade9,	// (0x0003767c) aid_size_parent_copy1_ParamLimits

0xade9,	// (0x0003767c) aid_size_parent_copy1

0xee73,	// (0x0003b706) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee73,	// (0x0003b706) button_value_adjust_pane_cp6_copy1

0x8e74,	// (0x00035707) list_highlight_pane_cp2_copy1_ParamLimits

0x8e74,	// (0x00035707) list_highlight_pane_cp2_copy1

0xee87,	// (0x0003b71a) list_set_pane_copy1_ParamLimits

0xee87,	// (0x0003b71a) list_set_pane_copy1

0xedee,	// (0x0003b681) main_pane_set_t1_copy1_ParamLimits

0xedee,	// (0x0003b681) main_pane_set_t1_copy1

0xee28,	// (0x0003b6bb) main_pane_set_t2_copy1_ParamLimits

0xee28,	// (0x0003b6bb) main_pane_set_t2_copy1

0xef4e,	// (0x0003b7e1) main_pane_set_t3_copy1

0xef5c,	// (0x0003b7ef) main_pane_set_t4_copy1

0xee47,	// (0x0003b6da) set_content_pane_g1_copy1_ParamLimits

0xee47,	// (0x0003b6da) set_content_pane_g1_copy1

0xef6a,	// (0x0003b7fd) setting_code_pane_copy1

0xef74,	// (0x0003b807) setting_slider_graphic_pane_copy1

0xef74,	// (0x0003b807) setting_slider_pane_copy1

0xef74,	// (0x0003b807) setting_text_pane_copy1

0xef7e,	// (0x0003b811) setting_volume_pane_copy1

0xef87,	// (0x0003b81a) settings_code_pane_cp2_copy1

0xef8f,	// (0x0003b822) settings_code_pane_cp_copy1_ParamLimits

0xef8f,	// (0x0003b822) settings_code_pane_cp_copy1

0xefa3,	// (0x0003b836) volume_set_pane_copy1

0xefaf,	// (0x0003b842) volume_set_pane_g10_copy1

0xefbb,	// (0x0003b84e) volume_set_pane_g1_copy1

0xefc5,	// (0x0003b858) volume_set_pane_g2_copy1

0xefcf,	// (0x0003b862) volume_set_pane_g3_copy1

0xefd9,	// (0x0003b86c) volume_set_pane_g4_copy1

0xefe3,	// (0x0003b876) volume_set_pane_g5_copy1

0xefed,	// (0x0003b880) volume_set_pane_g6_copy1

0xeff7,	// (0x0003b88a) volume_set_pane_g7_copy1

0xf001,	// (0x0003b894) volume_set_pane_g8_copy1

0xf00b,	// (0x0003b89e) volume_set_pane_g9_copy1

0x73ab,	// (0x00033c3e) bg_set_opt_pane_cp_copy1_ParamLimits

0x73ab,	// (0x00033c3e) bg_set_opt_pane_cp_copy1

0xf015,	// (0x0003b8a8) setting_slider_pane_t1_copy1_ParamLimits

0xf015,	// (0x0003b8a8) setting_slider_pane_t1_copy1

0xf033,	// (0x0003b8c6) setting_slider_pane_t2_copy1_ParamLimits

0xf033,	// (0x0003b8c6) setting_slider_pane_t2_copy1

0xf04d,	// (0x0003b8e0) setting_slider_pane_t3_copy1_ParamLimits

0xf04d,	// (0x0003b8e0) setting_slider_pane_t3_copy1

0xf065,	// (0x0003b8f8) slider_set_pane_copy1_ParamLimits

0xf065,	// (0x0003b8f8) slider_set_pane_copy1

0x7c99,	// (0x0003452c) set_opt_bg_pane_g1_copy2

0x7ca1,	// (0x00034534) set_opt_bg_pane_g2_copy2

0xf07b,	// (0x0003b90e) set_opt_bg_pane_g3_copy2

0x7cb1,	// (0x00034544) set_opt_bg_pane_g4_copy2

0x7cb9,	// (0x0003454c) set_opt_bg_pane_g5_copy2

0x7cc1,	// (0x00034554) set_opt_bg_pane_g6_copy2

0xf085,	// (0x0003b918) set_opt_bg_pane_g7_copy2

0xf08f,	// (0x0003b922) set_opt_bg_pane_g8_copy2

0xf099,	// (0x0003b92c) set_opt_bg_pane_g9_copy2

0xf0a3,	// (0x0003b936) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0a3,	// (0x0003b936) aid_size_touch_slider_mark_copy1

0xf0b7,	// (0x0003b94a) slider_set_pane_g1_copy1

0xf0c0,	// (0x0003b953) slider_set_pane_g2_copy1

0xba8e,	// (0x00038321) slider_set_pane_g3_copy1_ParamLimits

0xba8e,	// (0x00038321) slider_set_pane_g3_copy1

0xbaa2,	// (0x00038335) slider_set_pane_g4_copy1_ParamLimits

0xbaa2,	// (0x00038335) slider_set_pane_g4_copy1

0xbaba,	// (0x0003834d) slider_set_pane_g5_copy1_ParamLimits

0xbaba,	// (0x0003834d) slider_set_pane_g5_copy1

0xba8e,	// (0x00038321) slider_set_pane_g6_copy1_ParamLimits

0xba8e,	// (0x00038321) slider_set_pane_g6_copy1

0xf0c8,	// (0x0003b95b) slider_set_pane_g7_copy1_ParamLimits

0xf0c8,	// (0x0003b95b) slider_set_pane_g7_copy1

0x327f,	// (0x0002fb12) bg_set_opt_pane_cp2_copy1

0xf0de,	// (0x0003b971) setting_slider_graphic_pane_g1_copy1

0xf0e7,	// (0x0003b97a) setting_slider_graphic_pane_t1_copy1

0xf0f7,	// (0x0003b98a) setting_slider_graphic_pane_t2_copy1

0xf107,	// (0x0003b99a) slider_set_pane_cp_copy1

0xf117,	// (0x0003b9aa) input_focus_pane_cp1_copy1

0xf120,	// (0x0003b9b3) list_set_text_pane_copy1

0xf128,	// (0x0003b9bb) setting_text_pane_g1_copy1

0x8140,	// (0x000349d3) set_text_pane_t1_copy1

0xf117,	// (0x0003b9aa) input_focus_pane_cp2_copy1

0xf128,	// (0x0003b9bb) setting_code_pane_g1_copy1

0xf131,	// (0x0003b9c4) setting_code_pane_t1_copy1

0xf13f,	// (0x0003b9d2) list_set_graphic_pane_copy1

0x327f,	// (0x0002fb12) bg_set_opt_pane_cp4_copy1

0x87e8,	// (0x0003507b) list_set_graphic_pane_g1_copy1_ParamLimits

0x87e8,	// (0x0003507b) list_set_graphic_pane_g1_copy1

0xf151,	// (0x0003b9e4) list_set_graphic_pane_g2_copy1

0x8800,	// (0x00035093) list_set_graphic_pane_t1_copy1_ParamLimits

0x8800,	// (0x00035093) list_set_graphic_pane_t1_copy1

0xc056,	// (0x000388e9) rs_clock_indi_pane_g1

0xf159,	// (0x0003b9ec) rs_clock_indi_pane_t1

0xf167,	// (0x0003b9fa) rs_indi_pane

0xf16f,	// (0x0003ba02) rs_indi_pane_g1

0xf178,	// (0x0003ba0b) rs_indi_pane_g2

0xf181,	// (0x0003ba14) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0003c76a) rs_indi_pane_g

0x8aee,	// (0x00035381) bg_popup_preview_window_pane_cp03

0xf18a,	// (0x0003ba1d) popup_fep_tooltip_window_t1

0xccfc,	// (0x0003958f) popup_note2_window_g2_ParamLimits

0xccfc,	// (0x0003958f) popup_note2_window_g2

0x0001,

0xfc70,	// (0x0003c503) popup_note2_window_g_ParamLimits

0xfc70,	// (0x0003c503) popup_note2_window_g

0xd204,	// (0x00039a97) bg_popup_sub_pane_cp11_ParamLimits

0xd211,	// (0x00039aa4) cell_ai3_links_pane_g1_ParamLimits

0xd228,	// (0x00039abb) cell_ai3_links_pane_t1

0x8140,	// (0x000349d3) set_text_pane_t1_copy1_ParamLimits

0x89fb,	// (0x0003528e) cell_graphic_popup_pane_cp2_ParamLimits

0x89fb,	// (0x0003528e) cell_graphic_popup_pane_cp2

0xf198,	// (0x0003ba2b) cell_graphic_popup_pane_g1_cp2

0x797d,	// (0x00034210) cell_graphic_popup_pane_g2_cp2

0xf1a0,	// (0x0003ba33) cell_graphic_popup_pane_g3_cp2

0xf1a8,	// (0x0003ba3b) cell_graphic_popup_pane_t2_cp2

0x798e,	// (0x00034221) grid_highlight_pane_cp3_cp2

0x8243,	// (0x00034ad6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7c32,	// (0x000344c5) main_tmo_pane_ParamLimits

0xd548,	// (0x00039ddb) popup_tmo_big_image_note_window

0xe643,	// (0x0003aed6) cell_ai5_widget_list_pane

0xe64b,	// (0x0003aede) cell_ai5_widget_lrg_icon_pane

0xecc8,	// (0x0003b55b) tmo_note_info_pane_t1_ParamLimits

0xecdd,	// (0x0003b570) tmo_note_info_pane_t2_ParamLimits

0xecf6,	// (0x0003b589) tmo_note_info_pane_t3_ParamLimits

0xed0b,	// (0x0003b59e) tmo_note_info_pane_t4_ParamLimits

0xed1d,	// (0x0003b5b0) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0003c758) tmo_note_info_pane_t_ParamLimits

0xee53,	// (0x0003b6e6) settings_container_pane_ParamLimits

0xf10f,	// (0x0003b9a2) indicator_popup_pane_cp5

0xf10f,	// (0x0003b9a2) indicator_popup_pane_cp6

0xf13f,	// (0x0003b9d2) list_set_graphic_pane_copy1_ParamLimits

0x326b,	// (0x0002fafe) bg_popup_window_pane_cp23

0xf1b6,	// (0x0003ba49) popup_tmo_big_image_note_window_g1

0xf1c2,	// (0x0003ba55) popup_tmo_big_image_note_window_t1

0xf1d2,	// (0x0003ba65) popup_tmo_big_image_note_window_t2

0xf1e2,	// (0x0003ba75) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0003c771) popup_tmo_big_image_note_window_t

0xf1f2,	// (0x0003ba85) cell_ai5_widget_lrg_icon_pane_g1

0xf1fa,	// (0x0003ba8d) cell_ai5_widget_lrg_icon_pane_t1

0xf208,	// (0x0003ba9b) cell_ai5_widget_list_row_pane_ParamLimits

0xf208,	// (0x0003ba9b) cell_ai5_widget_list_row_pane

0xf221,	// (0x0003bab4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf221,	// (0x0003bab4) cell_ai5_widget_list_row_pane_g1

0xf22e,	// (0x0003bac1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22e,	// (0x0003bac1) cell_ai5_widget_list_row_pane_t1

0xf246,	// (0x0003bad9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf246,	// (0x0003bad9) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee5,	// (0x0003c778) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0003c778) cell_ai5_widget_list_row_pane_t

0x4b93,	// (0x00031426) main_fep_vtchi_ss_pane

0xf258,	// (0x0003baeb) popup_fep_char_pre_window

0xf260,	// (0x0003baf3) popup_fep_ituss_window

0xf281,	// (0x0003bb14) popup_fep_vkbss_window

0xf2a2,	// (0x0003bb35) grid_vkbss_keypad_pane_ParamLimits

0xf2a2,	// (0x0003bb35) grid_vkbss_keypad_pane

0xf2b2,	// (0x0003bb45) ituss_keypad_pane

0xf2ca,	// (0x0003bb5d) aid_vkbss_key_offset_ParamLimits

0xf2ca,	// (0x0003bb5d) aid_vkbss_key_offset

0xf2d6,	// (0x0003bb69) cell_vkbss_key_pane_ParamLimits

0xf2d6,	// (0x0003bb69) cell_vkbss_key_pane

0xf2ec,	// (0x0003bb7f) bg_cell_vkbss_key_g1_ParamLimits

0xf2ec,	// (0x0003bb7f) bg_cell_vkbss_key_g1

0xf2f8,	// (0x0003bb8b) cell_vkbss_key_3p_pane_ParamLimits

0xf2f8,	// (0x0003bb8b) cell_vkbss_key_3p_pane

0xf312,	// (0x0003bba5) cell_vkbss_key_g1_ParamLimits

0xf312,	// (0x0003bba5) cell_vkbss_key_g1

0xf32c,	// (0x0003bbbf) cell_vkbss_key_t1_ParamLimits

0xf32c,	// (0x0003bbbf) cell_vkbss_key_t1

0xf357,	// (0x0003bbea) cell_ituss_key_pane_ParamLimits

0xf357,	// (0x0003bbea) cell_ituss_key_pane

0xf367,	// (0x0003bbfa) bg_cell_ituss_key_g1_ParamLimits

0xf367,	// (0x0003bbfa) bg_cell_ituss_key_g1

0xf373,	// (0x0003bc06) cell_ituss_key_pane_g1_ParamLimits

0xf373,	// (0x0003bc06) cell_ituss_key_pane_g1

0xf37f,	// (0x0003bc12) cell_ituss_key_pane_g2_ParamLimits

0xf37f,	// (0x0003bc12) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0003c77d) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0003c77d) cell_ituss_key_pane_g

0xf398,	// (0x0003bc2b) cell_ituss_key_t1_ParamLimits

0xf398,	// (0x0003bc2b) cell_ituss_key_t1

0xf3c6,	// (0x0003bc59) cell_ituss_key_t2_ParamLimits

0xf3c6,	// (0x0003bc59) cell_ituss_key_t2

0xf3f7,	// (0x0003bc8a) cell_ituss_key_t3_ParamLimits

0xf3f7,	// (0x0003bc8a) cell_ituss_key_t3

0xf428,	// (0x0003bcbb) cell_ituss_key_t4_ParamLimits

0xf428,	// (0x0003bcbb) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0003c782) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0003c782) cell_ituss_key_t

0xf459,	// (0x0003bcec) cell_vkbss_key_3p_pane_g1

0xf461,	// (0x0003bcf4) cell_vkbss_key_3p_pane_g2

0xf469,	// (0x0003bcfc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0003c78b) cell_vkbss_key_3p_pane_g

0x326b,	// (0x0002fafe) bg_popup_fep_char_preview_window_cp02

0xf471,	// (0x0003bd04) popup_fep_char_pre_window_t1

0xe619,	// (0x0003aeac) main_ai5_sk_pane

0xed97,	// (0x0003b62a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeda3,	// (0x0003b636) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedb7,	// (0x0003b64a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedc6,	// (0x0003b659) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0003c763) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedd9,	// (0x0003b66c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7c32,	// (0x000344c5) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf480,	// (0x0003bd13) main_ai5_sk_pane_g1

0x9e8e,	// (0x00036721) popup_query_code_window_g1

0xf276,	// (0x0003bb09) popup_fep_vkb_icf_pane

0xf28c,	// (0x0003bb1f) popup_fep_vtchi_icf_pane

0x7c32,	// (0x000344c5) bg_icf_pane

0xf498,	// (0x0003bd2b) list_vkb_icf_pane

0x7c32,	// (0x000344c5) bg_icf_pane_cp01

0xf4b0,	// (0x0003bd43) vtchi_icf_list_pane

0xf4c0,	// (0x0003bd53) list_vkb_icf_pane_t1_ParamLimits

0xf4c0,	// (0x0003bd53) list_vkb_icf_pane_t1

0xf4d7,	// (0x0003bd6a) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x0003bd6a) vtchi_icf_list_pane_t1

0xf260,	// (0x0003baf3) popup_fep_ituss_window_ParamLimits

0xf28c,	// (0x0003bb1f) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b2,	// (0x0003bb45) ituss_keypad_pane_ParamLimits

0xf2c1,	// (0x0003bb54) ituss_sks_pane

0x7c32,	// (0x000344c5) bg_icf_pane_ParamLimits

0xf489,	// (0x0003bd1c) icf_edit_indi_pane_ParamLimits

0xf489,	// (0x0003bd1c) icf_edit_indi_pane

0xf498,	// (0x0003bd2b) list_vkb_icf_pane_ParamLimits

0x7c32,	// (0x000344c5) bg_icf_pane_cp01_ParamLimits

0xf4a4,	// (0x0003bd37) icf_edit_indi_pane_cp01_ParamLimits

0xf4a4,	// (0x0003bd37) icf_edit_indi_pane_cp01

0xf4b8,	// (0x0003bd4b) vtchi_query_pane

0xc2e0,	// (0x00038b73) icf_edit_indi_pane_g1_ParamLimits

0xc2e0,	// (0x00038b73) icf_edit_indi_pane_g1

0xf4f0,	// (0x0003bd83) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x0003bd83) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0003c792) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0003c792) icf_edit_indi_pane_g

0xf4fc,	// (0x0003bd8f) icf_edit_indi_pane_t1

0xf50a,	// (0x0003bd9d) bg_input_focus_pane_cp042

0x7b61,	// (0x000343f4) vtchi_button_pane

0xf513,	// (0x0003bda6) vtchi_query_pane_t1

0xf521,	// (0x0003bdb4) vtchi_query_pane_t2

0xf52f,	// (0x0003bdc2) vtchi_query_pane_t3

0x0002,

0xff04,	// (0x0003c797) vtchi_query_pane_t

0x326b,	// (0x0002fafe) bg_button_pane_cp13

0xf53d,	// (0x0003bdd0) vtchi_button_pane_g1

0xda94,	// (0x0003a327) ituss_sks_pane_g1

0xf545,	// (0x0003bdd8) ituss_sks_pane_g2

0x0001,

0xff0b,	// (0x0003c79e) ituss_sks_pane_g

0xf54e,	// (0x0003bde1) ituss_sks_pane_t1

0xf55c,	// (0x0003bdef) ituss_sks_pane_t2

0x0001,

0xff10,	// (0x0003c7a3) ituss_sks_pane_t

0xbafd,	// (0x00038390) indicator_nsta_pane_cp_g1

0xbb06,	// (0x00038399) indicator_nsta_pane_cp_g2

0xbb0e,	// (0x000383a1) indicator_nsta_pane_cp_g3

0xbb16,	// (0x000383a9) indicator_nsta_pane_cp_g4

0xbb1e,	// (0x000383b1) indicator_nsta_pane_cp_g5

0xbb26,	// (0x000383b9) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0003c341) indicator_nsta_pane_cp_g

0xe22a,	// (0x0003aabd) cell_graphic2_pane_t2_ParamLimits

0xe22a,	// (0x0003aabd) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0003c65a) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0003c65a) cell_graphic2_pane_t

0xe257,	// (0x0003aaea) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Small
